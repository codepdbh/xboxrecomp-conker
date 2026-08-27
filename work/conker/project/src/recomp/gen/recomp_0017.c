/**
 * Burnout 3 - Recompiled code chunk 17
 * Functions: 250 (0x0017DBF0 - 0x00193220)
 */

#define RECOMP_GENERATED_CODE
#include "recomp_funcs.h"
#include <math.h>

/**
 * sub_0017DBF0
 * Original: 0x0017DBF0 - 0x0017DE72 (642 bytes, 133 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0017DBF0(void)
{
    uint32_t ebp;
    int _flags = 0; /* fallback flag var */
    float xmm0, xmm1, xmm2, xmm3, xmm4;

loc_0017DBF0: ;
    PUSH32(esp, ebp);
    ebp = esp;
    esp = esp & 0xFFFFFFF0u;
    esp = esp - 0xA8;
    ecx = MEM32(eax + 0x34);
    xmm0 = MEMF(ecx + 0x228); /* movss */
    /* ucomiss xmm0, MEMF(0x648E60) - sets EFLAGS */
    /* lahf - load AH from flags (used in FPU compare idiom) */
    (void)0; /* test HI8(eax), 0x44 - flags set for next jcc */
    PUSH32(esp, esi);
    PUSH32(esp, edi);
    if (1 /* jnp after test - parity */) goto loc_0017DE6C; /* jnp: not parity */

loc_0017DC1A: ;
    SET_LO8(eax, MEM8(ebp + 8));
    (void)0; /* test LO8(eax), LO8(eax) - flags set for next jcc */
    xmm2 = MEMF(ecx + 0x78); /* movss */
    xmm4 = MEMF(ecx + 0x80); /* movss */
    xmm1 = MEMF(0x648D14); /* movss */
    xmm3 = xmm0; /* movaps */
    xmm0 = 0.0f; /* xorps self = zero */
    MEMF(esp + 0x64) = xmm2; /* movss */
    MEMF(esp + 0x68) = xmm3; /* movss */
    MEMF(esp + 0x6C) = xmm4; /* movss */
    MEMF(esp + 0x58) = xmm0; /* movss */
    MEMF(esp + 0x5C) = xmm1; /* movss */
    MEMF(esp + 0x60) = xmm0; /* movss */
    if (TEST_Z(LO8(eax), LO8(eax))) goto loc_0017DDE8; /* je: equal / zero */

loc_0017DC64: ;
    ecx = 0x10;
    esi = 0x5A0350;
    edi = esp + 0x70;
    memcpy((void*)XBOX_PTR(edi), (void*)XBOX_PTR(esi), ecx * 4);
    esi += ecx * 4; edi += ecx * 4; ecx = 0; /* rep movsd */
    MEMF(esp + 0xA0) = xmm2; /* movss */
    xmm2 = MEMF(0x648F08); /* movss */
    MEMF(esp + 0x28) = xmm2; /* movss */
    xmm2 = MEMF(0x648FD8); /* movss */
    MEMF(esp + 0x2C) = xmm2; /* movss */
    xmm2 = MEMF(0x648F60); /* movss */
    MEMF(esp + 0x1C) = xmm2; /* movss */
    xmm2 = MEMF(0x648CE4); /* movss */
    MEMF(esp + 8) = xmm2; /* movss */
    xmm2 = MEMF(0x648D1C); /* movss */
    MEMF(esp + 0xA4) = xmm3; /* movss */
    xmm3 = MEMF(0x648D40); /* movss */
    MEMF(esp + 0xC) = xmm2; /* movss */
    xmm2 = MEMF(0x59A8D8); /* movss */
    MEMF(esp + 0x48) = xmm1; /* movss */
    MEMF(esp + 0x24) = xmm1; /* movss */
    xmm1 = MEMF(0x648EB8); /* movss */
    MEMF(esp + 0x38) = xmm2; /* movss */
    xmm2 = MEMF(0x648CDC); /* movss */
    MEMF(esp + 0x4C) = xmm3; /* movss */
    xmm3 = MEMF(0x648CF4); /* movss */
    MEMF(esp + 0x40) = xmm1; /* movss */
    xmm1 = MEMF(0x649020); /* movss */
    MEMF(esp + 0x3C) = xmm2; /* movss */
    MEMF(esp + 0x30) = xmm3; /* movss */
    xmm3 = MEMF(0x648CF0); /* movss */
    MEMF(esp + 0x50) = xmm2; /* movss */
    xmm2 = MEMF(0x648CE0); /* movss */
    MEMF(esp + 0x44) = xmm1; /* movss */
    xmm1 = MEMF(0x649ED4); /* movss */
    esi = 2;
    MEMF(esp + 0xA8) = xmm4; /* movss */
    MEMF(esp + 0x18) = xmm0; /* movss */
    MEMF(esp + 0x34) = xmm3; /* movss */
    MEMF(esp + 0x54) = xmm0; /* movss */
    MEMF(esp + 0x20) = xmm2; /* movss */
    MEMF(esp + 0x10) = xmm1; /* movss */
    MEMF(esp + 0x14) = xmm0; /* movss */
    PUSH32(esp, 0); sub_00190A40(); /* call 0x00190A40 */

loc_0017DD81: ;
    xmm0 = MEMF(0x648D14); /* movss */
    MEMF(0x6B7A20) = xmm0; /* movss */
    xmm0 = 0.0f; /* xorps self = zero */
    PUSH32(esp, 0x1030002);
    MEMF(0x6B7A24) = xmm0; /* movss */
    PUSH32(esp, 0); sub_00191850(); /* call 0x00191850 */

loc_0017DDA6: ;
    PUSH32(esp, eax);
    ecx = esp + 0x18;
    PUSH32(esp, ecx);
    edx = esp + 0x4C;
    PUSH32(esp, edx);
    eax = esp + 0x30;
    PUSH32(esp, eax);
    ecx = esp + 0x64;
    PUSH32(esp, ecx);
    edx = esp + 0x48;
    PUSH32(esp, edx);
    eax = esp + 0x64;
    PUSH32(esp, eax);
    ecx = esp + 0x28;
    PUSH32(esp, ecx);
    edx = esp + 0x3C;
    PUSH32(esp, edx);
    eax = esp + 0x50;
    PUSH32(esp, eax);
    ecx = esp + 0x9C;
    PUSH32(esp, ecx);
    eax = esp + 0x68;
    PUSH32(esp, 0); sub_00190E40(); /* call 0x00190E40 */

loc_0017DDE5: ;
    esp = esp + 0x30;

loc_0017DDE8: ;
    esi = 3;
    PUSH32(esp, 0); sub_00190A40(); /* call 0x00190A40 */

loc_0017DDF2: ;
    xmm0 = MEMF(0x648D14); /* movss */
    MEMF(0x6B7A20) = xmm0; /* movss */
    xmm0 = 0.0f; /* xorps self = zero */
    PUSH32(esp, 0x3E800000);
    ecx = 0; /* xor self */
    esi = esp + 0x5C;
    eax = esp + 0x68;
    edi = esp + 0x74;
    MEMF(0x6B7A24) = xmm0; /* movss */
    PUSH32(esp, 0); sub_00191890(); /* call 0x00191890 */

loc_0017DE25: ;
    PUSH32(esp, 0);
    PUSH32(esp, 0x2A8);
    PUSH32(esp, 0x2A7);
    PUSH32(esp, 0x42C80000);
    PUSH32(esp, 0x40800000);
    PUSH32(esp, 0x3F800000);
    eax = edi;
    PUSH32(esp, 0); sub_00191B00(); /* call 0x00191B00 */

loc_0017DE47: ;
    PUSH32(esp, 0);
    PUSH32(esp, 0x2A8);
    PUSH32(esp, 0x2A7);
    PUSH32(esp, 0x42C80000);
    PUSH32(esp, 0x41600000);
    PUSH32(esp, 0x3F800000);
    eax = edi;
    PUSH32(esp, 0); sub_00191B00(); /* call 0x00191B00 */

loc_0017DE69: ;
    esp = esp + 0x34;

loc_0017DE6C: ;
    POP32(esp, edi);
    POP32(esp, esi);
    esp = ebp;
    POP32(esp, ebp);
    esp += 4; return; /* ret */

}

/**
 * sub_0017DE80
 * Original: 0x0017DE80 - 0x0017DE8D (13 bytes, 5 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0017DE80(void)
{

loc_0017DE80: ;
    eax = MEM32(esp + 4);
    PUSH32(esp, 1);
    PUSH32(esp, 0); sub_0017DBF0(); /* call 0x0017DBF0 */

loc_0017DE8B: ;
    POP32(esp, ecx);
    esp += 4; return; /* ret */

}

/**
 * sub_0017DE90
 * Original: 0x0017DE90 - 0x0017DECC (60 bytes, 22 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0017DE90(void)
{
    uint32_t ebp;
    int _flags = 0; /* fallback flag var */
    float xmm0, xmm1;

loc_0017DE90: ;
    PUSH32(esp, ebp);
    ebp = esp;
    esp = esp & 0xFFFFFFF0u;
    esp = esp - 0x64;
    xmm0 = 0.0f; /* xorps self = zero */
    PUSH32(esp, ebx);
    ebx = MEM32(ebp + 8);
    xmm1 = MEMF(ebx + 0x124); /* movss */
    /* comiss xmm1, xmm0 - sets EFLAGS */
    ecx = MEM32(ebx + 0x34);
    PUSH32(esp, esi);
    PUSH32(esp, edi);
    if ((xmm1 <= xmm0)) { sub_0017DECC(); return; } /* jbe: below or equal (unsigned <=) */

loc_0017DEB2: ;
    xmm0 = xmm1; /* movaps */
    xmm0 = xmm0 - MEMF(0x7FA21C); /* subss */
    MEMF(ebx + 0x124) = xmm0; /* movss */
    POP32(esp, edi);
    POP32(esp, esi);
    POP32(esp, ebx);
    esp = ebp;
    POP32(esp, ebp);
    esp += 4; return; /* ret */

}

/**
 * sub_0017DFA0
 * Original: 0x0017DFA0 - 0x0017E024 (132 bytes, 44 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0017DFA0(void)
{
    int _flags = 0; /* fallback flag var */

loc_0017DFA0: ;
    esp = esp - 0x30;
    PUSH32(esp, esi);
    PUSH32(esp, edi);
    edi = MEM32(esp + 0x3C);
    eax = MEM32(edi + 0x4C);
    esi = MEM32(eax + edi + 0x100);
    ecx = MEM32(esi + 0x64);
    (void)0; /* test ecx, ecx - flags set for next jcc */
    eax = eax + edi + 0x100;
    if (TEST_Z(ecx, ecx)) goto loc_0017DFCC; /* je: equal / zero */

loc_0017DFC1: ;
    SET_LO8(ecx, MEM8(esi + 0x10B));
    if (CMP_EQ(LO8(ecx), MEM8(eax + 4))) goto loc_0017E004; /* je: equal / zero */

loc_0017DFCC: ;
    SET_LO8(eax, MEM8(0x8472BD));
    if (TEST_NZ(LO8(eax), LO8(eax))) goto loc_0017E004; /* jne: not equal / not zero */

loc_0017DFD5: ;
    edx = edi;
    PUSH32(esp, 0); sub_000DAD90(); /* call 0x000DAD90 */

loc_0017DFDC: ;
    eax = MEM32(edi);
    if (CMP_L(eax, 2)) goto loc_0017E004; /* jl: less (signed <) */

loc_0017DFE3: ;
    eax = (uint32_t)((int32_t)eax * (int32_t)0x70);
    eax = MEM32(eax + 0x5906BC);
    if (TEST_Z(eax, eax)) goto loc_0017DFF8; /* je: equal / zero */

loc_0017DFF0: ;
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, edi);
    PUSH32(esp, 0); RECOMP_ICALL_SAFE(eax, _icall_esp); /* indirect call */
    }

loc_0017DFF3: ;
    esp = esp + 4;
    goto loc_0017E004;

loc_0017DFF8: ;
    edx = 1;
    eax = edi;
    PUSH32(esp, 0); sub_000DA5E0(); /* call 0x000DA5E0 */

loc_0017E004: ;
    eax = MEM32(esi + 0x3C8);
    if (TEST_Z(eax, eax)) goto loc_0017E01C; /* je: equal / zero */

loc_0017E00E: ;
    SET_LO8(edx, MEM8(esi + 0x16E));
    SET_LO8(edx, LO8(edx) & 0xF);
    if (CMP_NE(LO8(edx), 0xF)) { sub_0017E024(); return; } /* jne: not equal / not zero */

loc_0017E01C: ;
    POP32(esp, edi);
    SET_LO8(eax, 0); /* xor self */
    POP32(esp, esi);
    esp = esp + 0x30;
    esp += 4; return; /* ret */

}

/**
 * sub_0017E270
 * Original: 0x0017E270 - 0x0017E2FE (142 bytes, 57 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0017E270(void)
{
    uint32_t ebp;
    int _flags = 0; /* fallback flag var */
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_0017E270: ;
    PUSH32(esp, esi);
    esi = edx;
    PUSH32(esp, edi);
    edi = eax;
    (void)0; /* test edi, edi - flags set for next jcc */
    eax = MEM32(esi + 0x4C);
    edx = MEM32(eax + esi + 0x100);
    eax = eax + esi + 0x100;
    if (TEST_NZ(edi, edi)) goto loc_0017E2D5; /* jne: not equal / not zero */

loc_0017E28B: ;
    if (CMP_EQ(MEM32(ecx), edx)) goto loc_0017E29A; /* je: equal / zero */

loc_0017E28F: ;
    SET_LO8(ecx, MEM8(ecx + 4));
    if (CMP_NE(LO8(ecx), MEM8(edx + 0x10B))) goto loc_0017E2FB; /* jne: not equal / not zero */

loc_0017E29A: ;
    SET_LO8(eax, MEM8(0x8472BD));
    if (TEST_NZ(LO8(eax), LO8(eax))) goto loc_0017E2FB; /* jne: not equal / not zero */

loc_0017E2A3: ;
    edx = esi;
    PUSH32(esp, 0); sub_000DAD90(); /* call 0x000DAD90 */

loc_0017E2AA: ;
    eax = MEM32(esi);
    if (CMP_L(eax, 2)) goto loc_0017E2FB; /* jl: less (signed <) */

loc_0017E2B1: ;
    eax = (uint32_t)((int32_t)eax * (int32_t)0x70);
    eax = MEM32(eax + 0x5906BC);
    if (TEST_Z(eax, eax)) goto loc_0017E2C7; /* je: equal / zero */

loc_0017E2BE: ;
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, esi);
    PUSH32(esp, 0); RECOMP_ICALL_SAFE(eax, _icall_esp); /* indirect call */
    }

loc_0017E2C1: ;
    esp = esp + 4;
    POP32(esp, edi);
    POP32(esp, esi);
    esp += 4; return; /* ret */

loc_0017E2C7: ;
    POP32(esp, edi);
    eax = esi;
    edx = 1;
    POP32(esp, esi);
    g_seh_ebp = ebp; sub_000DA5E0(); return; /* tail jmp 0x000DA5E0 */

loc_0017E2D5: ;
    if (CMP_NE(edi, 0x2D)) goto loc_0017E2FB; /* jne: not equal / not zero */

loc_0017E2DA: ;
    esi = MEM32(ecx);
    if (CMP_NE(edx, esi)) goto loc_0017E2EE; /* jne: not equal / not zero */

loc_0017E2E0: ;
    edx = MEM32(ecx + 4);
    MEM32(eax) = edx;
    SET_LO8(ecx, MEM8(ecx + 9));
    POP32(esp, edi);
    MEM8(eax + 4) = LO8(ecx);
    POP32(esp, esi);
    esp += 4; return; /* ret */

loc_0017E2EE: ;
    if (CMP_NE(edx, MEM32(ecx + 4))) goto loc_0017E2FB; /* jne: not equal / not zero */

loc_0017E2F3: ;
    MEM32(eax) = esi;
    SET_LO8(edx, MEM8(ecx + 8));
    MEM8(eax + 4) = LO8(edx);

loc_0017E2FB: ;
    POP32(esp, edi);
    POP32(esp, esi);
    esp += 4; return; /* ret */

}

/**
 * sub_0017E300
 * Original: 0x0017E300 - 0x0017E551 (593 bytes, 113 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0017E300(void)
{
    uint32_t ebp;
    int _flags = 0; /* fallback flag var */
    float xmm0, xmm1;
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_0017E300: ;
    esp = esp - 0x70;
    PUSH32(esp, ebp);
    ebp = MEM32(esp + 0x78);
    PUSH32(esp, esi);
    esi = eax;
    PUSH32(esp, edi);
    edi = esi + 0x78;
    eax = edi;
    ecx = MEM32(eax);
    edx = MEM32(eax + 4);
    eax = MEM32(eax + 8);
    PUSH32(esp, ebp);
    MEM32(esp + 0x10) = ecx;
    MEM32(esp + 0x14) = edx;
    xmm0 = MEMF(esp + 0x14); /* movss */
    xmm0 = xmm0 + MEMF(0x6493A8); /* addss */
    ecx = esp + 0x10;
    MEM32(esp + 0x18) = eax;
    PUSH32(esp, 1);
    PUSH32(esp, ecx);
    eax = esi;
    MEMF(esp + 0x1C) = xmm0; /* movss */
    PUSH32(esp, 0); sub_000AC560(); /* call 0x000AC560 */

loc_0017E348: ;
    xmm0 = MEMF(0x648F08); /* movss */
    xmm1 = MEMF(0x648CE4); /* movss */
    MEMF(esp + 0x3C) = xmm0; /* movss */
    xmm0 = MEMF(0x648D1C); /* movss */
    MEMF(esp + 0x48) = xmm0; /* movss */
    xmm0 = MEMF(0x648F38); /* movss */
    MEMF(esp + 0x50) = xmm0; /* movss */
    MEMF(esp + 0x54) = xmm0; /* movss */
    xmm0 = 0.0f; /* xorps self = zero */
    MEMF(esp + 0x58) = xmm0; /* movss */
    MEMF(esp + 0x5C) = xmm0; /* movss */
    MEMF(esp + 0x60) = xmm0; /* movss */
    xmm0 = MEMF(0x648D80); /* movss */
    MEMF(esp + 0x64) = xmm0; /* movss */
    xmm0 = MEMF(0x648E64); /* movss */
    edx = edi;
    ecx = MEM32(edx);
    MEMF(esp + 0x68) = xmm0; /* movss */
    xmm0 = MEMF(0x6493B0); /* movss */
    eax = 0x32;
    MEM32(esp + 0x2C) = ecx;
    ecx = MEM32(edx + 4);
    edx = MEM32(edx + 8);
    MEMF(esp + 0x6C) = xmm0; /* movss */
    xmm0 = MEMF(0x64B0E8); /* movss */
    PUSH32(esp, ebp);
    MEM16(esp + 0x2C) = LO16(eax);
    MEM16(esp + 0x86) = LO16(eax);
    eax = esp + 0x28;
    MEMF(esp + 0x74) = xmm0; /* movss */
    xmm0 = MEMF(0x649354); /* movss */
    PUSH32(esp, 0);
    PUSH32(esp, eax);
    MEM32(esp + 0x30) = 0x1B;
    MEM16(esp + 0x44) = 0xBE;
    MEM16(esp + 0x4C) = 0;
    MEM16(esp + 0x4E) = 0x168;
    MEM16(esp + 0x50) = 0xFFC1;
    MEM16(esp + 0x52) = 0x5A;
    MEM32(esp + 0x3C) = ecx;
    MEM32(esp + 0x40) = edx;
    MEMF(esp + 0x58) = xmm1; /* movss */
    MEMF(esp + 0x80) = xmm0; /* movss */
    MEMF(esp + 0x84) = xmm1; /* movss */
    MEM8(esp + 0x90) = 0;
    MEM8(esp + 0x88) = 1;
    MEM8(esp + 0x89) = 1;
    MEM8(esp + 0x8A) = 1;
    MEM16(esp + 0x8C) = 0x64;
    PUSH32(esp, 0); sub_00173610(); /* call 0x00173610 */

loc_0017E477: ;
    eax = MEM32(0x84A144);
    esp = esp + 0x18;
    ecx = 0; /* xor self */
    MEM16(esp + 0x18) = 0;
    MEM16(esp + 0x1A) = 0xFF;
    MEM16(esp + 0x1C) = 0xFFC1;
    MEM16(esp + 0x1E) = 0x34;
    MEM32(esp + 0x20) = 6;
    (void)0; /* cmp eax, 1 - flags set for next jcc */
    xmm0 = MEMF(edi); /* movss */
    MEMF(esp + 0x28) = xmm0; /* movss */
    xmm0 = MEMF(esi + 0x7C); /* movss */
    xmm0 = xmm0 + MEMF(0x648F78); /* addss */
    MEMF(esp + 0x2C) = xmm0; /* movss */
    xmm0 = MEMF(esi + 0x80); /* movss */
    MEMF(esp + 0x30) = xmm0; /* movss */
    xmm0 = MEMF(0x648F08); /* movss */
    MEMF(esp + 0x34) = xmm0; /* movss */
    xmm0 = MEMF(0x6490C0); /* movss */
    MEMF(esp + 0x38) = xmm0; /* movss */
    xmm0 = MEMF(0x649544); /* movss */
    SET_LO8(ecx, (CMP_G(eax, 1)) ? 1 : 0); /* setg */
    edx = 5;
    edx = (uint32_t)((int32_t)edx >> LO8(ecx));
    (void)0; /* cmp eax, 1 - flags set for next jcc */
    MEMF(esp + 0x3C) = xmm0; /* movss */
    xmm0 = MEMF(0x64A8A8); /* movss */
    MEMF(esp + 0x40) = xmm0; /* movss */
    xmm0 = MEMF(0x64B160); /* movss */
    MEMF(esp + 0x44) = xmm0; /* movss */
    xmm0 = MEMF(0x64B15C); /* movss */
    MEM32(esp + 0x24) = edx;
    SET_LO8(edx, MEM8(0x6BCFEB));
    MEMF(esp + 0x48) = xmm0; /* movss */
    MEM32(esp + 0x4C) = 6;
    if (CMP_G(eax, 1)) { sub_0017E551(); return; } /* jg: greater (signed >) */

loc_0017E548: ;
    if (CMP_G(LO8(edx), 7)) { sub_0017E551(); return; } /* jg: greater (signed >) */

loc_0017E54D: ;
    ecx = 0; /* xor self */
    g_seh_ebp = ebp; sub_0017E556(); return; /* tail jmp 0x0017E556 */

}

/**
 * sub_0017E5F0
 * Original: 0x0017E5F0 - 0x0017E64B (91 bytes, 34 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0017E5F0(void)
{
    int _flags = 0; /* fallback flag var */

loc_0017E5F0: ;
    PUSH32(esp, esi);
    esi = eax;
    eax = MEM32(0x847024);
    PUSH32(esp, edi);
    edi = MEM32(eax + 0x40);
    PUSH32(esp, 0); sub_002F82C0(); /* call 0x002F82C0 */

loc_0017E601: ;
    if (TEST_Z(LO8(eax), LO8(eax))) goto loc_0017E648; /* je: equal / zero */

loc_0017E605: ;
    eax = MEM32(esi + 0x564);
    if (TEST_Z(eax, eax)) goto loc_0017E622; /* je: equal / zero */

loc_0017E60F: ;
    ecx = MEM32(0x847024);
    eax = MEM32(ecx + 0x44);
    eax = MEM32(eax + 0xC);
    eax = eax + 8;
    eax = MEM32(eax);
    goto loc_0017E628;

loc_0017E622: ;
    eax = MEM32(esi + 0x580);

loc_0017E628: ;
    PUSH32(esp, 0);
    PUSH32(esp, esi);
    PUSH32(esp, eax);
    PUSH32(esp, 0x11);
    edx = esi + 0x78;
    PUSH32(esp, edx);
    PUSH32(esp, 0xBF800000u);
    PUSH32(esp, 0);
    PUSH32(esp, edi);
    edx = 0; /* xor self */
    eax = esi;
    ecx = 0xCC1;
    PUSH32(esp, 0); sub_00022D90(); /* call 0x00022D90 */

loc_0017E648: ;
    POP32(esp, edi);
    POP32(esp, esi);
    esp += 4; return; /* ret */

}

/**
 * sub_0017E650
 * Original: 0x0017E650 - 0x0017E791 (321 bytes, 92 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0017E650(void)
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

loc_0017E650: ;
    PUSH32(esp, ebp);
    ebp = esp;
    esp = esp & 0xFFFFFFF0u;
    esp = esp - 0xAC;
    PUSH32(esp, ebx);
    ebx = 0; /* xor self */
    if (CMP_EQ(eax, ebx)) goto loc_0017E78C; /* je: equal / zero */

loc_0017E667: ;
    eax = MEM32(esi + 8);
    ecx = MEM32(esi + 4);
    xmm0 = MEMF(esi); /* movss */
    PUSH32(esp, eax);
    PUSH32(esp, ecx);
    PUSH32(esp, 0); sub_002DE600(); /* call 0x002DE600 */

loc_0017E678: ;
    fp_push(MEMF(edi)); /* fld float */
    fp_st1() -= fp_top(); fp_pop(); /* fsub */
    esp = esp + 8;
    MEMF(esp + 4) = (float)fp_top(); fp_popp(); /* fstp */
    fp_push(MEMF(edi + 4)); /* fld float */
    fp_st1() -= fp_top(); fp_pop(); /* fsub */
    MEMF(esp + 8) = (float)fp_top(); fp_popp(); /* fstp */
    fp_push(MEMF(edi + 8)); /* fld float */
    fp_st1() -= fp_top(); fp_pop(); /* fsub */
    MEMF(esp + 0xC) = (float)fp_top(); fp_pop(); /* fst */
    fp_st1() *= fp_top(); fp_pop(); /* fmul */
    fp_push(MEMF(esp + 8)); /* fld float */
    fp_st1() *= fp_top(); fp_pop(); /* fmul */
    fp_st1() += fp_top(); fp_pop(); /* faddp */
    fp_push(MEMF(esp + 4)); /* fld float */
    fp_st1() *= fp_top(); fp_pop(); /* fmul */
    fp_st1() += fp_top(); fp_pop(); /* faddp */
    fp_top() = sqrt(fp_top()); /* fsqrt */
    MEMF(esp + 0x10) = (float)fp_top(); fp_popp(); /* fstp */
    fp_push(MEMF(0x648CF8)); /* fld float */
    fp_push(MEMF(esp + 0x10)); /* fld float */
    _fpu_cmp = (fp_top() < fp_st1()) ? -1 : (fp_top() > fp_st1()) ? 1 : 0; fp_pop(); /* fucompi */
    /* fstp st(0) */
    /* lahf - load AH from flags (used in FPU compare idiom) */
    if (1 /* jnp after test - parity */) goto loc_0017E701; /* jnp: not parity */

loc_0017E6C9: ;
    xmm0 = MEMF(0x648D14); /* movss */
    xmm0 = xmm0 / MEMF(esp + 0x10); /* divss */
    xmm1 = xmm0; /* movaps */
    xmm1 = xmm1 * MEMF(esp + 4); /* mulss */
    MEMF(esp + 4) = xmm1; /* movss */
    xmm1 = xmm0; /* movaps */
    xmm1 = xmm1 * MEMF(esp + 8); /* mulss */
    xmm0 = xmm0 * MEMF(esp + 0xC); /* mulss */
    MEMF(esp + 8) = xmm1; /* movss */
    MEMF(esp + 0xC) = xmm0; /* movss */

loc_0017E701: ;
    PUSH32(esp, ebx);
    PUSH32(esp, ebx);
    PUSH32(esp, 1);
    PUSH32(esp, ebx);
    PUSH32(esp, ebx);
    edx = esp + 0x24;
    PUSH32(esp, edx);
    PUSH32(esp, ebx);
    eax = esp + 0x38;
    PUSH32(esp, eax);
    ecx = esp + 0x38;
    PUSH32(esp, ecx);
    edx = esp + 0x38;
    PUSH32(esp, edx);
    eax = esp + 0x48;
    PUSH32(esp, eax);
    PUSH32(esp, esi);
    ecx = esp + 0x34;
    MEM32(0x780AB0) = 0x5F4948;
    MEM32(0x6C0210) = 0x5B0;
    MEM8(0x84B538) = 1;
    MEM32(0x74FA2C) = 0x4100000;
    PUSH32(esp, 0); sub_002A0580(); /* call 0x002A0580 */

loc_0017E750: ;
    esp = esp + 0x30;
    (void)0; /* test eax, eax - flags set for next jcc */
    MEM32(0x74FA2C) = ebx;
    MEM8(0x84B538) = LO8(ebx);
    MEM32(0x6C0210) = 0xFFFFFFFFu;
    MEM32(0x780AB0) = ebx;
    if (TEST_Z(eax, eax)) goto loc_0017E78C; /* je: equal / zero */

loc_0017E773: ;
    PUSH32(esp, 0xFF);
    PUSH32(esp, 1);
    ecx = esp + 0xC;
    PUSH32(esp, ecx);
    PUSH32(esp, esi);
    eax = esp + 0x30;
    PUSH32(esp, 0); sub_000AC380(); /* call 0x000AC380 */

loc_0017E789: ;
    esp = esp + 0x10;

loc_0017E78C: ;
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
 * sub_0017E7A0
 * Original: 0x0017E7A0 - 0x0017E802 (98 bytes, 31 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0017E7A0(void)
{
    int _flags = 0; /* fallback flag var */
    float xmm0;
    double _fp_stack[8];
    int _fp_top = 0;
    #define fp_push(v) (_fp_stack[--_fp_top & 7] = (v))
    #define fp_pop() (_fp_top++)
    #define fp_popp() (fp_pop())
    #define fp_top() _fp_stack[_fp_top & 7]
    #define fp_st1() _fp_stack[(_fp_top + 1) & 7]

loc_0017E7A0: ;
    esp = esp - 0xC;
    if (TEST_Z(esi, esi)) goto loc_0017E7FE; /* je: equal / zero */

loc_0017E7A7: ;
    fp_push(MEMF(ecx)); /* fld float */
    fp_st1() += fp_top(); fp_pop(); /* fadd */
    fp_st1() *= fp_top(); fp_pop(); /* fmul */
    MEMF(esp) = (float)fp_top(); fp_popp(); /* fstp */
    xmm0 = MEMF(esp); /* movss */
    fp_push(MEMF(ecx + 4)); /* fld float */
    fp_st1() += fp_top(); fp_pop(); /* fadd */
    fp_st1() *= fp_top(); fp_pop(); /* fmul */
    MEMF(esp + 4) = (float)fp_top(); fp_popp(); /* fstp */
    fp_push(MEMF(ecx + 8)); /* fld float */
    ecx = MEM32(esp + 4);
    fp_st1() += fp_top(); fp_pop(); /* fadd */
    fp_st1() *= fp_top(); fp_pop(); /* fmul */
    MEMF(esp + 8) = (float)fp_top(); fp_popp(); /* fstp */
    eax = MEM32(esp + 8);
    PUSH32(esp, eax);
    PUSH32(esp, ecx);
    PUSH32(esp, 0); sub_002DE600(); /* call 0x002DE600 */

loc_0017E7E8: ;
    edx = MEM32(esp + 0x18);
    PUSH32(esp, edx);
    eax = esp + 0xC;
    PUSH32(esp, 1);
    PUSH32(esp, eax);
    eax = esi;
    PUSH32(esp, 0); sub_000AC560(); /* call 0x000AC560 */

loc_0017E7FB: ;
    esp = esp + 0x14;

loc_0017E7FE: ;
    esp = esp + 0xC;
    esp += 4; return; /* ret */

    #undef fp_push
    #undef fp_pop
    #undef fp_popp
    #undef fp_top
    #undef fp_st1
}

/**
 * sub_0017E810
 * Original: 0x0017E810 - 0x0017E972 (354 bytes, 86 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0017E810(void)
{
    int _flags = 0; /* fallback flag var */
    float xmm0;

loc_0017E810: ;
    esp = esp - 0x4C;
    PUSH32(esp, esi);
    esi = eax;
    (void)0; /* cmp MEM32(0x84A144), 2 - flags set for next jcc */
    PUSH32(esp, edi);
    edi = 0x12C;
    if (CMP_GE(MEM32(0x84A144), 2)) goto loc_0017E8AF; /* jge: greater or equal (signed >=) */

loc_0017E829: ;
    if (CMP_GE(MEM8(0x6BCFEB), 5)) goto loc_0017E8AF; /* jge: greater or equal (signed >=) */

loc_0017E832: ;
    xmm0 = MEMF(0x648F38); /* movss */
    eax = esi + 0x78;
    MEM32(esp + 0x10) = eax;
    SET_LO8(eax, 4);
    MEM8(esp + 0x26) = LO8(eax);
    MEM8(esp + 0x27) = LO8(eax);
    SET_LO8(eax, MEM8(esi + 0x10B));
    ecx = esi + 0x7C;
    MEMF(esp + 0x1C) = xmm0; /* movss */
    xmm0 = MEMF(0x773770); /* movss */
    xmm0 = xmm0 * MEMF(0x649ED0); /* mulss */
    MEM32(esp + 0x14) = ecx;
    edx = esi + 0x80;
    MEM8(esp + 0xC) = LO8(eax);
    PUSH32(esp, 8);
    SET_LO8(eax, LO8(ebx));
    ecx = esp + 0x14;
    MEM32(esp + 0x1C) = edx;
    MEMF(esp + 0x24) = xmm0; /* movss */
    MEM16(esp + 0x28) = LO16(edi);
    MEM8(esp + 0x2C) = 1;
    MEM8(esp + 0x2D) = 0;
    PUSH32(esp, 0); sub_000B0630(); /* call 0x000B0630 */

loc_0017E89E: ;
    esp = esp + 4;
    if (TEST_Z(eax, eax)) goto loc_0017E8AF; /* je: equal / zero */

loc_0017E8A5: ;
    ecx = MEM32(esp + 0xC);
    MEM32(eax + 0x60) = esi;
    MEM32(eax + 0x64) = ecx;

loc_0017E8AF: ;
    xmm0 = MEMF(esi + 0x78); /* movss */
    SET_LO8(edx, MEM8(esi + 0x10B));
    PUSH32(esp, 0);
    PUSH32(esp, 0);
    PUSH32(esp, 0);
    MEMF(esp + 0x1C) = xmm0; /* movss */
    xmm0 = MEMF(esi + 0x7C); /* movss */
    eax = MEM32(esp + 0x1C);
    PUSH32(esp, 0xA);
    MEMF(esp + 0x24) = xmm0; /* movss */
    xmm0 = MEMF(esi + 0x80); /* movss */
    ecx = MEM32(esp + 0x24);
    PUSH32(esp, 0xA);
    MEMF(esp + 0x2C) = xmm0; /* movss */
    xmm0 = 0.0f; /* xorps self = zero */
    MEM8(esp + 0x48) = LO8(edx);
    edx = MEM32(esp + 0x2C);
    MEM32(esp + 0x4C) = eax;
    PUSH32(esp, 0xA);
    eax = esp + 0x28;
    PUSH32(esp, 0x14);
    MEM32(esp + 0x5C) = edx;
    MEMF(esp + 0x60) = xmm0; /* movss */
    MEMF(esp + 0x64) = xmm0; /* movss */
    xmm0 = MEMF(0x6498E0); /* movss */
    PUSH32(esp, eax);
    SET_LO8(edx, LO8(ebx));
    eax = 0x24;
    MEM8(esp + 0x45) = 0x28;
    MEM16(esp + 0x3C) = LO16(edi);
    MEM16(esp + 0x3E) = 6;
    MEM32(esp + 0x40) = 0xC;
    MEM32(esp + 0x50) = esi;
    MEM32(esp + 0x5C) = ecx;
    MEMF(esp + 0x6C) = xmm0; /* movss */
    MEMF(esp + 0x70) = xmm0; /* movss */
    PUSH32(esp, 0); sub_0017A580(); /* call 0x0017A580 */

loc_0017E954: ;
    esp = esp + 0x20;
    if (TEST_Z(eax, eax)) goto loc_0017E96C; /* je: equal / zero */

loc_0017E95B: ;
    edi = MEM32(eax + 0x144);
    ecx = 9;
    esi = esp + 0x30;
    memcpy((void*)XBOX_PTR(edi), (void*)XBOX_PTR(esi), ecx * 4);
    esi += ecx * 4; edi += ecx * 4; ecx = 0; /* rep movsd */

loc_0017E96C: ;
    POP32(esp, edi);
    POP32(esp, esi);
    esp = esp + 0x4C;
    esp += 4; return; /* ret */

}

/**
 * sub_0017E980
 * Original: 0x0017E980 - 0x0017EB1D (413 bytes, 99 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0017E980(void)
{
    int _flags = 0; /* fallback flag var */
    float xmm0, xmm1, xmm2, xmm3, xmm4, xmm5, xmm6;

loc_0017E980: ;
    esp = esp - 0x24;
    xmm0 = MEMF(esp + 0x28); /* movss */
    MEMF(esp + 0xC) = xmm0; /* movss */
    xmm0 = MEMF(esp + 0x2C); /* movss */
    MEMF(esp + 0x10) = xmm0; /* movss */
    xmm0 = MEMF(esp + 0x30); /* movss */
    PUSH32(esp, edi);
    MEMF(esp + 0x18) = xmm0; /* movss */
    PUSH32(esp, 0); sub_003E1D70(); /* call 0x003E1D70 */

loc_0017E9AD: ;
    xmm0 = xmm0 * MEMF(0x64A360); /* mulss */
    xmm0 = xmm0 * MEMF(0x648E54); /* mulss */
    PUSH32(esp, ecx);
    MEMF(esp) = xmm0; /* movss */
    PUSH32(esp, 0); sub_003E2480(); /* call 0x003E2480 */

loc_0017E9C8: ;
    edx = ((int32_t)eax < 0) ? 0xFFFFFFFF : 0; /* cdq */
    ecx = 0x41;
    { int64_t _dividend = ((int64_t)(int32_t)edx << 32) | eax;
      eax = (uint32_t)((int32_t)(_dividend / (int32_t)ecx));
      edx = (uint32_t)((int32_t)(_dividend % (int32_t)ecx)); }
    edx = edx - 0x20;
    PUSH32(esp, edx);
    PUSH32(esp, 0); sub_003E2480(); /* call 0x003E2480 */

loc_0017E9D9: ;
    eax = eax & 0xFF;
    PUSH32(esp, eax);
    edi = esp + 0x10;
    PUSH32(esp, 0); sub_00110510(); /* call 0x00110510 */

loc_0017E9E8: ;
    esp = esp + 0xC;
    PUSH32(esp, 0); sub_003E1D70(); /* call 0x003E1D70 */

loc_0017E9F0: ;
    edx = MEM32(esp + 0x44);
    xmm1 = 0.0f; /* xorps self = zero */
    xmm2 = MEMF(0x7FA248); /* movss */
    xmm5 = MEMF(0x64A0A8); /* movss */
    xmm6 = MEMF(0x648D2C); /* movss */
    eax = 0; /* xor self */
    SET_LO8(eax, MEM8(edx + 4));
    xmm0 = xmm0 * xmm5; /* mulss */
    xmm0 = xmm0 + MEMF(0x64A35C); /* addss */
    xmm3 = xmm2; /* movaps */
    xmm3 = xmm3 * MEMF(esp + 0x38); /* mulss */
    xmm0 = xmm0 * xmm6; /* mulss */
    xmm4 = xmm1; /* movaps */
    xmm4 = xmm4 - xmm3; /* subss */
    xmm4 = xmm4 * xmm0; /* mulss */
    xmm4 = xmm4 + MEMF(esp + 4); /* addss */
    MEMF(esp + 4) = xmm4; /* movss */
    PUSH32(esp, eax);
    xmm3 = xmm2; /* movaps */
    xmm3 = xmm3 * MEMF(esp + 0x40); /* mulss */
    xmm2 = xmm2 * MEMF(esp + 0x44); /* mulss */
    xmm4 = xmm1; /* movaps */
    xmm4 = xmm4 - xmm3; /* subss */
    PUSH32(esp, 0xFFFFFFFFu);
    xmm3 = xmm1; /* movaps */
    xmm3 = xmm3 - xmm2; /* subss */
    PUSH32(esp, 0);
    xmm4 = xmm4 * xmm0; /* mulss */
    xmm4 = xmm4 + MEMF(esp + 0x14); /* addss */
    xmm3 = xmm3 * xmm0; /* mulss */
    xmm3 = xmm3 + MEMF(esp + 0x18); /* addss */
    PUSH32(esp, 0xF);
    MEMF(esp + 0x18) = xmm4; /* movss */
    MEMF(esp + 0x1C) = xmm3; /* movss */
    MEMF(esp + 0x2C) = xmm1; /* movss */
    MEMF(esp + 0x30) = xmm1; /* movss */
    MEMF(esp + 0x34) = xmm1; /* movss */
    PUSH32(esp, 0); sub_003E2480(); /* call 0x003E2480 */

loc_0017EA9F: ;
    edx = ((int32_t)eax < 0) ? 0xFFFFFFFF : 0; /* cdq */
    ecx = 0xC9;
    { int64_t _dividend = ((int64_t)(int32_t)edx << 32) | eax;
      eax = (uint32_t)((int32_t)(_dividend / (int32_t)ecx));
      edx = (uint32_t)((int32_t)(_dividend % (int32_t)ecx)); }
    SET_LO8(edx, LO8(edx) + 0x37);
    PUSH32(esp, edx);
    PUSH32(esp, 0); sub_003E2480(); /* call 0x003E2480 */

loc_0017EAB0: ;
    eax = eax & 0x8000000Fu;
    if (((int32_t)eax >= 0)) goto loc_0017EABC; /* jns: not sign (positive) */

loc_0017EAB7: ;
    eax--;
    eax = eax | 0xFFFFFFF0u;
    eax++;

loc_0017EABC: ;
    eax = eax + 0x14;
    PUSH32(esp, eax);
    PUSH32(esp, 0); sub_003E1D70(); /* call 0x003E1D70 */

loc_0017EAC5: ;
    xmm0 = xmm0 * MEMF(0x64A358); /* mulss */
    PUSH32(esp, ecx);
    xmm0 = xmm0 + xmm5; /* addss */
    MEMF(esp) = xmm0; /* movss */
    PUSH32(esp, 0); sub_003E1D70(); /* call 0x003E1D70 */

loc_0017EADC: ;
    xmm0 = xmm0 * MEMF(0x64A354); /* mulss */
    xmm0 = xmm0 - MEMF(0x64A350); /* subss */
    PUSH32(esp, ecx);
    xmm0 = xmm0 * xmm6; /* mulss */
    MEMF(esp) = xmm0; /* movss */
    xmm0 = MEMF(0x648D14); /* movss */
    edx = esp + 0x30;
    PUSH32(esp, edx);
    eax = 0xF;
    ecx = esp + 0x28;
    edx = esp + 0x40;
    PUSH32(esp, 0); sub_00102920(); /* call 0x00102920 */

loc_0017EB15: ;
    esp = esp + 0x24;
    POP32(esp, edi);
    esp = esp + 0x24;
    esp += 4; return; /* ret */

}

/**
 * sub_0017EB20
 * Original: 0x0017EB20 - 0x0017EB30 (16 bytes, 6 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0017EB20(void)
{
    int _flags = 0; /* fallback flag var */

loc_0017EB20: ;
    eax = MEM32(esp + 4);
    ecx = MEM32(eax + 0x60);
    eax = MEM32(ecx + 0x64);
    (void)0; /* test eax, eax - flags set for next jcc */
    SET_LO8(eax, (TEST_NZ(eax, eax)) ? 1 : 0); /* setne */
    esp += 4; return; /* ret */

}

/**
 * sub_0017EB30
 * Original: 0x0017EB30 - 0x0017EBA4 (116 bytes, 44 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0017EB30(void)
{
    uint32_t ebp;
    int _flags = 0; /* fallback flag var */
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_0017EB30: ;
    if (TEST_NZ(ecx, ecx)) goto loc_0017EB7A; /* jne: not equal / not zero */

loc_0017EB34: ;
    ecx = MEM32(esi + 0x60);
    if (CMP_EQ(ecx, MEM32(eax))) goto loc_0017EB43; /* je: equal / zero */

loc_0017EB3B: ;
    SET_LO8(edx, MEM8(esi + 0x64));
    if (CMP_NE(LO8(edx), MEM8(eax + 4))) goto loc_0017EBA3; /* jne: not equal / not zero */

loc_0017EB43: ;
    SET_LO8(eax, MEM8(0x8472BD));
    if (TEST_NZ(LO8(eax), LO8(eax))) goto loc_0017EBA3; /* jne: not equal / not zero */

loc_0017EB4C: ;
    edx = esi;
    PUSH32(esp, 0); sub_000DAD90(); /* call 0x000DAD90 */

loc_0017EB53: ;
    eax = MEM32(esi);
    if (CMP_L(eax, 2)) goto loc_0017EBA3; /* jl: less (signed <) */

loc_0017EB5A: ;
    eax = (uint32_t)((int32_t)eax * (int32_t)0x70);
    eax = MEM32(eax + 0x5906BC);
    if (TEST_Z(eax, eax)) goto loc_0017EB6E; /* je: equal / zero */

loc_0017EB67: ;
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, esi);
    PUSH32(esp, 0); RECOMP_ICALL_SAFE(eax, _icall_esp); /* indirect call */
    }

loc_0017EB6A: ;
    esp = esp + 4;
    esp += 4; return; /* ret */

loc_0017EB6E: ;
    edx = 1;
    eax = esi;
    g_seh_ebp = ebp; sub_000DA5E0(); return; /* tail jmp 0x000DA5E0 */

loc_0017EB7A: ;
    if (CMP_NE(ecx, 0x2D)) goto loc_0017EBA3; /* jne: not equal / not zero */

loc_0017EB7F: ;
    ecx = MEM32(esi + 0x60);
    edx = MEM32(eax);
    if (CMP_NE(ecx, edx)) goto loc_0017EB95; /* jne: not equal / not zero */

loc_0017EB88: ;
    ecx = MEM32(eax + 4);
    MEM32(esi + 0x60) = ecx;
    SET_LO8(edx, MEM8(eax + 9));
    MEM8(esi + 0x64) = LO8(edx);
    esp += 4; return; /* ret */

loc_0017EB95: ;
    if (CMP_NE(ecx, MEM32(eax + 4))) goto loc_0017EBA3; /* jne: not equal / not zero */

loc_0017EB9A: ;
    MEM32(esi + 0x60) = edx;
    SET_LO8(eax, MEM8(eax + 8));
    MEM8(esi + 0x64) = LO8(eax);

loc_0017EBA3: ;
    esp += 4; return; /* ret */

}

/**
 * sub_0017EBB0
 * Original: 0x0017EBB0 - 0x0017EBCB (27 bytes, 10 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0017EBB0(void)
{
    uint32_t ebp;
    int _flags = 0; /* fallback flag var */
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_0017EBB0: ;
    eax = MEM32(esp + 4);
    (void)0; /* cmp MEM8(eax + 0x4C), 2 - flags set for next jcc */
    PUSH32(esp, ebp);
    ebp = MEM32(eax + 0x140);
    if (CMP_GE(MEM8(eax + 0x4C), 2)) { sub_0017EBCB(); return; } /* jge: greater or equal (signed >=) */

loc_0017EBC1: ;
    if (TEST_Z(MEM8(eax + 0x3A), 8)) { sub_0017EBCB(); return; } /* je: equal / zero */

loc_0017EBC7: ;
    eax = 0; /* xor self */
    POP32(esp, ebp);
    esp += 4; return; /* ret */

}

/**
 * sub_0017EC90
 * Original: 0x0017EC90 - 0x0017EF15 (645 bytes, 164 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0017EC90(void)
{
    uint32_t ebp;
    int _flags = 0; /* fallback flag var */
    float xmm0, xmm1, xmm2, xmm3, xmm4, xmm5, xmm6, xmm7;
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_0017EC90: ;
    eax = MEM32(esp + 4);
    esp = esp - 0x28;
    PUSH32(esp, ebx);
    PUSH32(esp, esi);
    esi = MEM32(eax + 0x144);
    ecx = MEM32(esi);
    edx = MEM32(ecx + 0x64);
    (void)0; /* test edx, edx - flags set for next jcc */
    PUSH32(esp, edi);
    edi = MEM32(eax + 0x140);
    if (TEST_Z(edx, edx)) { sub_0017EF15(); return; } /* je: equal / zero */

loc_0017ECB3: ;
    SET_LO8(edx, MEM8(ecx + 0x10B));
    if (CMP_NE(LO8(edx), MEM8(esi + 4))) { sub_0017EF15(); return; } /* jne: not equal / not zero */

loc_0017ECC2: ;
    edx = MEM32(ecx + 0x78);
    MEM32(eax + 0x2C) = edx;
    edx = MEM32(ecx + 0x7C);
    xmm0 = MEMF(eax + 0x2C); /* movss */
    MEM32(eax + 0x30) = edx;
    ecx = MEM32(ecx + 0x80);
    MEM32(eax + 0x34) = ecx;
    xmm0 = xmm0 - MEMF(esi + 8); /* subss */
    PUSH32(esp, ebp);
    ebp = esi + 8;
    MEMF(esp + 0x20) = xmm0; /* movss */
    xmm0 = MEMF(eax + 0x30); /* movss */
    xmm0 = xmm0 - MEMF(esi + 0xC); /* subss */
    MEMF(esp + 0x24) = xmm0; /* movss */
    xmm0 = MEMF(eax + 0x34); /* movss */
    xmm0 = xmm0 - MEMF(esi + 0x10); /* subss */
    edx = esp + 0x20;
    MEMF(esp + 0x28) = xmm0; /* movss */
    MEM32(esp + 0x3C) = edx;
    edx = MEM32(esp + 0x3C);
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
    MEMF(esp + 0x10) = xmm1; /* movss */
    xmm3 = MEMF(esp + 0x10); /* movss */
    xmm1 = MEMF(0x7FA24C); /* movss */
    xmm4 = MEMF(0x648D14); /* movss */
    xmm2 = xmm3; /* movaps */
    xmm3 = xmm3 * MEMF(0x6498D4); /* mulss */
    xmm3 = xmm3 + MEMF(esi + 0x1C); /* addss */
    xmm2 = xmm2 * xmm1; /* mulss */
    xmm2 = xmm2 * MEMF(0x6498D0); /* mulss */
    xmm2 = xmm2 + MEMF(esi + 0x14); /* addss */
    /* comiss xmm2, xmm4 - sets EFLAGS */
    MEMF(esi + 0x14) = xmm2; /* movss */
    MEMF(esi + 0x1C) = xmm3; /* movss */
    if ((xmm2 <= xmm4)) goto loc_0017EF08; /* jbe: below or equal (unsigned <=) */

loc_0017ED8A: ;
    xmm1 = xmm1 + MEMF(esi + 0x18); /* addss */
    xmm5 = 0.0f; /* xorps self = zero */
    xmm0 = xmm4; /* movaps */
    xmm0 = xmm0 / xmm2; /* divss */
    xmm2 = xmm1; /* movaps */
    xmm2 = xmm2 * xmm0; /* mulss */
    xmm5 = xmm5 - xmm2; /* subss */
    ecx = ebp;
    edx = MEM32(ecx);
    xmm2 = xmm0; /* movaps */
    xmm2 = xmm2 * MEMF(esp + 0x28); /* mulss */
    MEM32(esp + 0x14) = edx;
    edx = MEM32(ecx + 4);
    ecx = MEM32(ecx + 8);
    MEMF(esp + 0x34) = xmm2; /* movss */
    xmm2 = MEMF(esi + 0x20); /* movss */
    xmm3 = xmm3 - xmm2; /* subss */
    xmm6 = xmm0; /* movaps */
    xmm6 = xmm6 * MEMF(esp + 0x20); /* mulss */
    xmm7 = xmm0; /* movaps */
    xmm7 = xmm7 * MEMF(esp + 0x24); /* mulss */
    xmm3 = xmm3 * xmm0; /* mulss */
    MEM32(esp + 0x18) = edx;
    MEM32(esp + 0x1C) = ecx;
    MEMF(esp + 0x3C) = xmm3; /* movss */
    edi = edi;

loc_0017EDF0: ;
    /* comiss xmm2, MEMF(0x649130) - sets EFLAGS */
    ecx = (uint32_t)(int32_t)SMEM8(eax + 0x4E);
    ebx = MEM32(esp + 0x14);
    edx = ecx + ecx * 4;
    ecx = edi + edx * 4;
    edx = ecx;
    MEM32(edx) = ebx;
    ebx = MEM32(esp + 0x18);
    MEM32(edx + 4) = ebx;
    ebx = MEM32(esp + 0x1C);
    MEM32(edx + 8) = ebx;
    MEM16(ecx + 0xC) = 0xC;
    MEM8(ecx + 0xE) = 0x64;
    MEMF(ecx + 0x10) = xmm2; /* movss */
    if ((xmm2 <= MEMF(0x649130))) goto loc_0017EE4B; /* jbe: below or equal (unsigned <=) */

loc_0017EE28: ;
    goto loc_0017EE30;

    /* nop */

loc_0017EE30: ;
    xmm0 = MEMF(ecx + 0x10); /* movss */
    xmm0 = xmm0 - MEMF(0x64930C); /* subss */
    /* comiss xmm0, MEMF(0x649130) - sets EFLAGS */
    MEMF(ecx + 0x10) = xmm0; /* movss */
    if ((xmm0 > MEMF(0x649130))) goto loc_0017EE30; /* ja: above (unsigned >) */

loc_0017EE4B: ;
    SET_LO8(ecx, MEM8(eax + 0x4E));
    edx = ZX8(MEM8(eax + 0x41));
    SET_LO8(ecx, LO8(ecx) + 1);
    MEM8(eax + 0x4E) = LO8(ecx);
    ecx = SX8(LO8(ecx));
    if (CMP_NE(ecx, edx)) goto loc_0017EE62; /* jne: not equal / not zero */

loc_0017EE5E: ;
    MEM8(eax + 0x4E) = 0;

loc_0017EE62: ;
    SET_LO8(ecx, MEM8(eax + 0x4C));
    SET_LO8(ecx, LO8(ecx) + 1);
    MEM8(eax + 0x4C) = LO8(ecx);
    SET_LO8(ebx, LO8(ecx));
    SET_LO8(ecx, MEM8(eax + 0x4D));
    if (CMP_NE(MEM8(eax + 0x4E), LO8(ecx))) goto loc_0017EE89; /* jne: not equal / not zero */

loc_0017EE74: ;
    SET_LO8(ecx, LO8(ecx) + 1);
    MEM8(eax + 0x4D) = LO8(ecx);
    ecx = SX8(LO8(ecx));
    if (CMP_NE(ecx, edx)) goto loc_0017EE84; /* jne: not equal / not zero */

loc_0017EE80: ;
    MEM8(eax + 0x4D) = 0;

loc_0017EE84: ;
    SET_LO8(ebx, LO8(ebx) - 1);
    MEM8(eax + 0x4C) = LO8(ebx);

loc_0017EE89: ;
    xmm0 = MEMF(esp + 0x14); /* movss */
    xmm0 = xmm0 + xmm6; /* addss */
    MEMF(esp + 0x14) = xmm0; /* movss */
    xmm0 = MEMF(esp + 0x18); /* movss */
    xmm0 = xmm0 + xmm7; /* addss */
    MEMF(esp + 0x18) = xmm0; /* movss */
    xmm0 = MEMF(esp + 0x1C); /* movss */
    xmm0 = xmm0 + MEMF(esp + 0x34); /* addss */
    MEMF(esp + 0x1C) = xmm0; /* movss */
    xmm0 = MEMF(esp + 0x3C); /* movss */
    xmm0 = xmm0 + xmm2; /* addss */
    xmm2 = xmm0; /* movaps */
    xmm0 = xmm5; /* movaps */
    xmm0 = xmm0 + xmm1; /* addss */
    xmm1 = xmm0; /* movaps */
    xmm0 = MEMF(esi + 0x14); /* movss */
    xmm0 = xmm0 - xmm4; /* subss */
    /* comiss xmm0, xmm4 - sets EFLAGS */
    MEMF(esi + 0x14) = xmm0; /* movss */
    if ((xmm0 > xmm4)) goto loc_0017EDF0; /* ja: above (unsigned >) */

loc_0017EEE9: ;
    edx = MEM32(esp + 0x14);
    eax = MEM32(esp + 0x18);
    ecx = MEM32(esp + 0x1C);
    MEM32(ebp) = edx;
    MEM32(ebp + 4) = eax;
    MEM32(ebp + 8) = ecx;
    MEMF(esi + 0x20) = xmm2; /* movss */
    MEMF(esi + 0x18) = xmm1; /* movss */

loc_0017EF08: ;
    POP32(esp, ebp);
    POP32(esp, edi);
    POP32(esp, esi);
    eax = 1;
    POP32(esp, ebx);
    esp = esp + 0x28;
    esp += 4; return; /* ret */

}

/**
 * sub_0017EF30
 * Original: 0x0017EF30 - 0x0017F586 (1622 bytes, 433 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0017EF30(void)
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
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_0017EF30: ;
    esp = esp - 0x48;
    PUSH32(esp, ebp);
    ebp = MEM32(esp + 0x50);
    if (CMP_LE(MEM8(ebp + 0x4C), 1)) goto loc_0017F581; /* jle: less or equal (signed <=) */

loc_0017EF42: ;
    PUSH32(esp, esi);
    esi = ZX8(MEM8(ebp + 0x41));
    PUSH32(esp, edi);
    edi = (uint32_t)(int32_t)SMEM16(esp + 0x5C);
    eax = MEM32(ebp + edi * 4 + 0x130);
    esi = esi + 5;
    esi = (uint32_t)((int32_t)esi * (int32_t)0x38);
    if (TEST_NZ(eax, eax)) goto loc_0017EF82; /* jne: not equal / not zero */

loc_0017EF5E: ;
    PUSH32(esp, 0xFFFFFFFFu);
    PUSH32(esp, 0x26);
    eax = esi + esi;
    PUSH32(esp, 0x5F3E90);
    PUSH32(esp, eax);
    PUSH32(esp, 0); sub_002AF0E0(); /* call 0x002AF0E0 */

loc_0017EF70: ;
    esp = esp + 0x10;
    (void)0; /* test eax, eax - flags set for next jcc */
    MEM32(ebp + edi * 4 + 0x130) = eax;
    if (TEST_Z(eax, eax)) goto loc_0017F57F; /* je: equal / zero */

loc_0017EF82: ;
    SET_LO8(eax, MEM8(0x7FA230));
    ecx = 0; /* xor self */
    (void)0; /* test LO8(eax), LO8(eax) - flags set for next jcc */
    eax = MEM32(ebp + edi * 4 + 0x130);
    SET_LO8(ecx, (TEST_NZ(LO8(eax), LO8(eax))) ? 1 : 0); /* setne */
    ecx--;
    ecx = ecx & esi;
    ecx = ecx + eax;
    esi = ecx;
    if ((ecx == 0)) goto loc_0017F57F; /* je: equal / zero */

loc_0017EFA2: ;
    edx = MEM32(0x8470DC);
    edi = (uint32_t)((int32_t)edi * (int32_t)0x770);
    eax = edi + edx + 0x330;
    MEM32(esp + 0x18) = eax;
    SET_LO8(eax, MEM8(0x75BA4C));
    (void)0; /* test LO8(eax), LO8(eax) - flags set for next jcc */
    PUSH32(esp, ebx);
    ebx = MEM32(ebp + 0x140);
    MEM32(esp + 0x24) = ebx;
    if (CMP_BE(LO8(eax) & LO8(eax), 0)) goto loc_0017F067; /* jbe: below or equal (unsigned <=) */

loc_0017EFD1: ;
    edi = MEM32(0x75BA48);
    eax = MEM32(edi + 8);
    if (TEST_NZ(eax, eax)) goto loc_0017F006; /* jne: not equal / not zero */

loc_0017EFDE: ;
    ecx = MEM32(edi);
    PUSH32(esp, ecx);
    PUSH32(esp, 0x5E0D08);
    PUSH32(esp, 0x14);
    eax = 0; /* xor self */
    PUSH32(esp, 0); sub_0005E4E0(); /* call 0x0005E4E0 */

loc_0017EFEF: ;
    esp = esp + 0xC;
    PUSH32(esp, 0); sub_0029CDD0(); /* call 0x0029CDD0 */

loc_0017EFF7: ;
    edx = MEM32(0x75BA48);
    MEM32(edx + 8) = eax;
    edi = MEM32(0x75BA48);

loc_0017F006: ;
    eax = MEM32(edi + 0x10);
    if (TEST_NZ(eax, eax)) goto loc_0017F032; /* jne: not equal / not zero */

loc_0017F00D: ;
    eax = MEM32(edi + 8);
    PUSH32(esp, 0); sub_0034F320(); /* call 0x0034F320 */

loc_0017F015: ;
    MEM32(edi + 0x10) = eax;
    edi = MEM32(0x75BA48);
    eax = MEM32(edi + 0x10);
    if (TEST_NZ(eax, eax)) goto loc_0017F032; /* jne: not equal / not zero */

loc_0017F025: ;
    MEM32(edi + 0x10) = 0xFFFFFFFFu;
    edi = MEM32(0x75BA48);

loc_0017F032: ;
    ecx = MEM32(edi + 0x10);
    if (CMP_NE(ecx, 0xFFFFFFFFu)) goto loc_0017F05B; /* jne: not equal / not zero */

loc_0017F03A: ;
    ecx = MEM32(edi + 4);
    (void)0; /* test ecx, ecx - flags set for next jcc */
    eax = edi + 4;
    if (TEST_NZ(ecx, ecx)) goto loc_0017F056; /* jne: not equal / not zero */

loc_0017F044: ;
    PUSH32(esp, eax);
    eax = MEM32(edi);
    PUSH32(esp, eax);
    PUSH32(esp, 0); sub_00075E90(); /* call 0x00075E90 */

loc_0017F04D: ;
    edi = MEM32(0x75BA48);
    esp = esp + 8;

loc_0017F056: ;
    edi = MEM32(edi + 4);
    goto loc_0017F063;

loc_0017F05B: ;
    PUSH32(esp, 0); sub_0034F360(); /* call 0x0034F360 */

loc_0017F060: ;
    edi = MEM32(eax + 4);

loc_0017F063: ;
    if (TEST_NZ(edi, edi)) goto loc_0017F07C; /* jne: not equal / not zero */

loc_0017F067: ;
    PUSH32(esp, 0);
    eax = 0; /* xor self */
    PUSH32(esp, 0); sub_00539960(); /* call 0x00539960 */

loc_0017F070: ;
    MEM32(0x771764) = 0;
    goto loc_0017F093;

loc_0017F07C: ;
    if (CMP_EQ(MEM32(0x771764), edi)) goto loc_0017F093; /* je: equal / zero */

loc_0017F084: ;
    eax = 0; /* xor self */
    ecx = edi;
    PUSH32(esp, 0); sub_003FA570(); /* call 0x003FA570 */

loc_0017F08D: ;
    MEM32(0x771764) = edi;

loc_0017F093: ;
    if (TEST_Z(MEM8(ebp + 0x3A), 2)) goto loc_0017F0C6; /* je: equal / zero */

loc_0017F099: ;
    ecx = (uint32_t)(int32_t)SMEM8(ebp + 0x4E);
    ecx--;
    if (((int32_t)ecx >= 0)) goto loc_0017F0A5; /* jns: not sign (positive) */

loc_0017F0A0: ;
    ecx = ZX8(MEM8(ebp + 0x41));
    ecx--;

loc_0017F0A5: ;
    xmm0 = 0.0f; /* xorps self = zero */
    edx = ebp + 0x2C;
    eax = MEM32(edx);
    MEM32(esp + 0x34) = eax;
    eax = MEM32(edx + 4);
    edx = MEM32(edx + 8);
    MEM32(esp + 0x38) = eax;
    MEM32(esp + 0x3C) = edx;
    MEM8(esp + 0x13) = 0x80;
    goto loc_0017F107;

loc_0017F0C6: ;
    eax = (uint32_t)(int32_t)SMEM8(ebp + 0x4E);
    eax--;
    if (((int32_t)eax >= 0)) goto loc_0017F0D2; /* jns: not sign (positive) */

loc_0017F0CD: ;
    eax = ZX8(MEM8(ebp + 0x41));
    eax--;

loc_0017F0D2: ;
    ecx = eax + -1;
    if (CMP_GE(ecx & ecx, 0)) goto loc_0017F0DE; /* jge: greater or equal (signed >=) */

loc_0017F0D9: ;
    ecx = ZX8(MEM8(ebp + 0x41));
    ecx--;

loc_0017F0DE: ;
    eax = eax + eax * 4;
    xmm0 = MEMF(ebx + eax * 4 + 0x10); /* movss */
    eax = ebx + eax * 4;
    edx = eax;
    edi = MEM32(edx);
    MEM32(esp + 0x34) = edi;
    edi = MEM32(edx + 4);
    edx = MEM32(edx + 8);
    MEM32(esp + 0x3C) = edx;
    SET_LO8(edx, MEM8(eax + 0xE));
    MEM32(esp + 0x38) = edi;
    MEM8(esp + 0x13) = LO8(edx);

loc_0017F107: ;
    xmm3 = MEMF(esp + 0x38); /* movss */
    xmm4 = MEMF(esp + 0x34); /* movss */
    eax = ecx + ecx * 4;
    eax = ebx + eax * 4;
    MEMF(esp + 0x18) = xmm0; /* movss */
    xmm0 = MEMF(eax + 0x10); /* movss */
    edx = eax;
    edi = MEM32(edx);
    ebx = MEM32(edx + 4);
    edx = MEM32(edx + 8);
    MEMF(esp + 0x20) = xmm0; /* movss */
    xmm0 = MEMF(esp + 0x3C); /* movss */
    xmm5 = xmm3; /* movaps */
    xmm7 = xmm0; /* movaps */
    MEM32(esp + 0x44) = ebx;
    xmm5 = xmm5 - MEMF(esp + 0x44); /* subss */
    SET_LO8(ebx, MEM8(eax + 0xE));
    eax = MEM32(esp + 0x1C);
    xmm0 = xmm0 - MEMF(eax + 8); /* subss */
    xmm3 = xmm3 - MEMF(eax + 4); /* subss */
    xmm1 = xmm0; /* movaps */
    xmm1 = xmm1 * xmm5; /* mulss */
    MEMF(esp + 0x50) = xmm5; /* movss */
    xmm5 = xmm3; /* movaps */
    MEM32(esp + 0x48) = edx;
    xmm2 = MEMF(esp + 0x48); /* movss */
    xmm6 = xmm4; /* movaps */
    xmm4 = xmm4 - MEMF(eax); /* subss */
    xmm7 = xmm7 - xmm2; /* subss */
    xmm5 = xmm5 * xmm7; /* mulss */
    xmm1 = xmm1 - xmm5; /* subss */
    MEM32(esp + 0x40) = edi;
    xmm6 = xmm6 - MEMF(esp + 0x40); /* subss */
    xmm0 = xmm0 * xmm6; /* mulss */
    xmm3 = xmm3 * xmm6; /* mulss */
    xmm5 = xmm4; /* movaps */
    xmm4 = xmm4 * MEMF(esp + 0x50); /* mulss */
    xmm3 = xmm3 - xmm4; /* subss */
    xmm5 = xmm5 * xmm7; /* mulss */
    xmm5 = xmm5 - xmm0; /* subss */
    xmm0 = xmm3; /* movaps */
    xmm0 = xmm0 * xmm3; /* mulss */
    MEMF(esp + 0x30) = xmm3; /* movss */
    xmm3 = xmm5; /* movaps */
    xmm3 = xmm3 * xmm5; /* mulss */
    xmm0 = xmm0 + xmm3; /* addss */
    xmm3 = xmm1; /* movaps */
    xmm3 = xmm3 * xmm1; /* mulss */
    MEMF(esp + 0x28) = xmm1; /* movss */
    xmm1 = 0.0f; /* xorps self = zero */
    xmm0 = xmm0 + xmm3; /* addss */
    /* ucomiss xmm0, xmm1 - sets EFLAGS */
    /* lahf - load AH from flags (used in FPU compare idiom) */
    (void)0; /* test HI8(eax), 0x44 - flags set for next jcc */
    MEMF(esp + 0x2C) = xmm5; /* movss */
    MEMF(esp + 0x14) = xmm0; /* movss */
    if (1 /* jp after test - parity */) goto loc_0017F1FB; /* jp: parity */

loc_0017F1F0: ;
    xmm5 = xmm1; /* movaps */
    xmm4 = xmm1; /* movaps */
    xmm3 = xmm1; /* movaps */
    goto loc_0017F235;

loc_0017F1FB: ;
    fp_push(MEMF(esp + 0x14)); /* fld float */
    fp_top() = sqrt(fp_top()); /* fsqrt */
    /* FPU: fdivr dword ptr [0x648fd8] */
    fp_push(MEMF(esp + 0x28)); /* fld float */
    fp_st1() *= fp_top(); fp_pop(); /* fmul */
    MEMF(esp + 0x28) = (float)fp_top(); fp_popp(); /* fstp */
    fp_push(MEMF(esp + 0x2C)); /* fld float */
    xmm5 = MEMF(esp + 0x28); /* movss */
    fp_st1() *= fp_top(); fp_pop(); /* fmul */
    MEMF(esp + 0x2C) = (float)fp_top(); fp_popp(); /* fstp */
    xmm4 = MEMF(esp + 0x2C); /* movss */
    fp_st1() *= fp_top(); fp_pop(); /* fmul */
    MEMF(esp + 0x30) = (float)fp_top(); fp_popp(); /* fstp */
    xmm3 = MEMF(esp + 0x30); /* movss */

loc_0017F235: ;
    xmm6 = MEMF(esp + 0x38); /* movss */
    xmm7 = MEMF(esp + 0x3C); /* movss */
    xmm0 = xmm5; /* movaps */
    xmm0 = xmm0 + MEMF(esp + 0x34); /* addss */
    eax = (int32_t)xmm0; /* cvttss2si */
    edx = SX16(LO16(eax));
    xmm0 = (float)(int32_t)edx; /* cvtsi2ss */
    MEMF(esi) = xmm0; /* movss */
    MEMF(esi + 0x14) = xmm1; /* movss */
    xmm1 = MEMF(esp + 0x34); /* movss */
    xmm0 = xmm4; /* movaps */
    xmm0 = xmm0 + xmm6; /* addss */
    eax = (int32_t)xmm0; /* cvttss2si */
    edx = SX16(LO16(eax));
    xmm0 = (float)(int32_t)edx; /* cvtsi2ss */
    MEMF(esi + 4) = xmm0; /* movss */
    xmm0 = xmm3; /* movaps */
    xmm0 = xmm0 + xmm7; /* addss */
    eax = (int32_t)xmm0; /* cvttss2si */
    edx = SX16(LO16(eax));
    eax = (int32_t)MEMF(esp + 0x18); /* cvttss2si */
    xmm0 = (float)(int32_t)edx; /* cvtsi2ss */
    MEMF(esi + 8) = xmm0; /* movss */
    edx = SX16(LO16(eax));
    SET_LO8(eax, MEM8(esp + 0x13));
    MEM8(esi + 0xF) = LO8(eax);
    MEM16(esi + 0x18) = 0;
    xmm1 = xmm1 - xmm5; /* subss */
    eax = (int32_t)xmm1; /* cvttss2si */
    esi = esi + 0x1C;
    eax = SX16(LO16(eax));
    xmm0 = (float)(int32_t)edx; /* cvtsi2ss */
    MEMF(esi + -12) = xmm0; /* movss */
    SET_LO8(edx, 0xFF);
    MEM8(esi + -16) = LO8(edx);
    MEM8(esi + -15) = LO8(edx);
    MEM8(esi + -14) = LO8(edx);
    xmm1 = (float)(int32_t)eax; /* cvtsi2ss */
    MEMF(esi) = xmm1; /* movss */
    xmm1 = xmm6; /* movaps */
    xmm1 = xmm1 - xmm4; /* subss */
    eax = (int32_t)xmm1; /* cvttss2si */
    eax = SX16(LO16(eax));
    xmm1 = (float)(int32_t)eax; /* cvtsi2ss */
    MEMF(esi + 4) = xmm1; /* movss */
    xmm1 = xmm7; /* movaps */
    xmm1 = xmm1 - xmm3; /* subss */
    eax = (int32_t)xmm1; /* cvttss2si */
    eax = SX16(LO16(eax));
    xmm1 = (float)(int32_t)eax; /* cvtsi2ss */
    SET_LO8(eax, MEM8(esp + 0x13));
    MEMF(esi + 0x10) = xmm0; /* movss */
    xmm0 = MEMF(0x64AC08); /* movss */
    MEMF(esi + 8) = xmm1; /* movss */
    MEMF(esi + 0x14) = xmm0; /* movss */
    MEM8(esi + 0xC) = LO8(edx);
    MEM8(esi + 0xD) = LO8(edx);
    MEM8(esi + 0xE) = LO8(edx);
    MEM8(esi + 0xF) = LO8(eax);
    MEM16(esi + 0x18) = 0;
    esi = esi + 0x1C;
    goto loc_0017F340;

loc_0017F32D: ;
    xmm6 = MEMF(esp + 0x38); /* movss */
    xmm7 = MEMF(esp + 0x3C); /* movss */
    ebp = MEM32(esp + 0x5C);
    /* nop */

loc_0017F340: ;
    eax = MEM32(esp + 0x1C);
    xmm0 = MEMF(esp + 0x44); /* movss */
    xmm0 = xmm0 - MEMF(eax + 4); /* subss */
    xmm6 = xmm6 - MEMF(esp + 0x44); /* subss */
    xmm1 = MEMF(esp + 0x40); /* movss */
    xmm1 = xmm1 - MEMF(eax); /* subss */
    xmm5 = MEMF(esp + 0x34); /* movss */
    xmm5 = xmm5 - MEMF(esp + 0x40); /* subss */
    xmm7 = xmm7 - xmm2; /* subss */
    xmm2 = xmm2 - MEMF(eax + 8); /* subss */
    xmm4 = xmm0; /* movaps */
    xmm4 = xmm4 * xmm7; /* mulss */
    xmm3 = xmm2; /* movaps */
    xmm3 = xmm3 * xmm6; /* mulss */
    xmm3 = xmm3 - xmm4; /* subss */
    xmm4 = xmm1; /* movaps */
    xmm1 = xmm1 * xmm6; /* mulss */
    xmm0 = xmm0 * xmm5; /* mulss */
    xmm0 = xmm0 - xmm1; /* subss */
    xmm4 = xmm4 * xmm7; /* mulss */
    xmm2 = xmm2 * xmm5; /* mulss */
    xmm4 = xmm4 - xmm2; /* subss */
    MEMF(esp + 0x30) = xmm0; /* movss */
    xmm0 = xmm0 * xmm0; /* mulss */
    xmm1 = xmm4; /* movaps */
    xmm1 = xmm1 * xmm4; /* mulss */
    xmm0 = xmm0 + xmm1; /* addss */
    xmm1 = xmm3; /* movaps */
    xmm1 = xmm1 * xmm3; /* mulss */
    xmm0 = xmm0 + xmm1; /* addss */
    xmm1 = 0.0f; /* xorps self = zero */
    /* ucomiss xmm0, xmm1 - sets EFLAGS */
    /* lahf - load AH from flags (used in FPU compare idiom) */
    (void)0; /* test HI8(eax), 0x44 - flags set for next jcc */
    MEMF(esp + 0x28) = xmm3; /* movss */
    MEMF(esp + 0x2C) = xmm4; /* movss */
    MEMF(esp + 0x14) = xmm0; /* movss */
    if (1 /* jp after test - parity */) goto loc_0017F3EA; /* jp: parity */

loc_0017F3DF: ;
    xmm5 = xmm1; /* movaps */
    xmm4 = xmm1; /* movaps */
    xmm3 = xmm1; /* movaps */
    goto loc_0017F424;

loc_0017F3EA: ;
    fp_push(MEMF(esp + 0x14)); /* fld float */
    fp_top() = sqrt(fp_top()); /* fsqrt */
    /* FPU: fdivr dword ptr [0x648fd8] */
    fp_push(MEMF(esp + 0x28)); /* fld float */
    fp_st1() *= fp_top(); fp_pop(); /* fmul */
    MEMF(esp + 0x28) = (float)fp_top(); fp_popp(); /* fstp */
    fp_push(MEMF(esp + 0x2C)); /* fld float */
    xmm5 = MEMF(esp + 0x28); /* movss */
    fp_st1() *= fp_top(); fp_pop(); /* fmul */
    MEMF(esp + 0x2C) = (float)fp_top(); fp_popp(); /* fstp */
    xmm4 = MEMF(esp + 0x2C); /* movss */
    fp_st1() *= fp_top(); fp_pop(); /* fmul */
    MEMF(esp + 0x30) = (float)fp_top(); fp_popp(); /* fstp */
    xmm3 = MEMF(esp + 0x30); /* movss */

loc_0017F424: ;
    xmm7 = MEMF(esp + 0x40); /* movss */
    xmm6 = MEMF(esp + 0x44); /* movss */
    xmm2 = MEMF(esp + 0x48); /* movss */
    xmm0 = xmm5; /* movaps */
    xmm0 = xmm0 + xmm7; /* addss */
    eax = (int32_t)xmm0; /* cvttss2si */
    eax = SX16(LO16(eax));
    xmm0 = (float)(int32_t)eax; /* cvtsi2ss */
    MEMF(esi) = xmm0; /* movss */
    xmm0 = xmm4; /* movaps */
    xmm0 = xmm0 + xmm6; /* addss */
    eax = (int32_t)xmm0; /* cvttss2si */
    eax = SX16(LO16(eax));
    xmm0 = (float)(int32_t)eax; /* cvtsi2ss */
    MEMF(esi + 4) = xmm0; /* movss */
    xmm0 = xmm3; /* movaps */
    xmm0 = xmm0 + xmm2; /* addss */
    eax = (int32_t)xmm0; /* cvttss2si */
    eax = SX16(LO16(eax));
    xmm0 = (float)(int32_t)eax; /* cvtsi2ss */
    eax = (int32_t)MEMF(esp + 0x20); /* cvttss2si */
    MEMF(esi + 8) = xmm0; /* movss */
    eax = SX16(LO16(eax));
    MEMF(esi + 0x14) = xmm1; /* movss */
    xmm0 = (float)(int32_t)eax; /* cvtsi2ss */
    MEMF(esi + 0x10) = xmm0; /* movss */
    MEM8(esi + 0xC) = LO8(edx);
    MEM8(esi + 0xD) = LO8(edx);
    MEM8(esi + 0xE) = LO8(edx);
    MEM8(esi + 0xF) = LO8(ebx);
    MEM16(esi + 0x18) = 0;
    esi = esi + 0x1C;
    xmm7 = xmm7 - xmm5; /* subss */
    eax = (int32_t)xmm7; /* cvttss2si */
    eax = SX16(LO16(eax));
    xmm1 = (float)(int32_t)eax; /* cvtsi2ss */
    xmm6 = xmm6 - xmm4; /* subss */
    MEMF(esi) = xmm1; /* movss */
    eax = (int32_t)xmm6; /* cvttss2si */
    eax = SX16(LO16(eax));
    xmm1 = (float)(int32_t)eax; /* cvtsi2ss */
    MEMF(esi + 4) = xmm1; /* movss */
    xmm1 = xmm2; /* movaps */
    xmm1 = xmm1 - xmm3; /* subss */
    eax = (int32_t)xmm1; /* cvttss2si */
    eax = SX16(LO16(eax));
    MEMF(esi + 0x10) = xmm0; /* movss */
    xmm0 = MEMF(0x64AC08); /* movss */
    xmm1 = (float)(int32_t)eax; /* cvtsi2ss */
    MEMF(esi + 8) = xmm1; /* movss */
    MEMF(esi + 0x14) = xmm0; /* movss */
    MEM8(esi + 0xC) = LO8(edx);
    MEM8(esi + 0xD) = LO8(edx);
    MEM8(esi + 0xE) = LO8(edx);
    MEM8(esi + 0xF) = LO8(ebx);
    MEM16(esi + 0x18) = 0;
    eax = ecx;
    esi = esi + 0x1C;
    ecx--;
    MEM32(esp + 0x18) = eax;
    if (((int32_t)ecx >= 0)) goto loc_0017F519; /* jns: not sign (positive) */

loc_0017F514: ;
    ecx = ZX8(MEM8(ebp + 0x41));
    ecx--;

loc_0017F519: ;
    ebp = (uint32_t)(int32_t)SMEM8(ebp + 0x4D);
    if (CMP_EQ(eax, ebp)) goto loc_0017F56E; /* je: equal / zero */

loc_0017F521: ;
    eax = MEM32(esp + 0x44);
    MEM32(esp + 0x38) = eax;
    eax = MEM32(esp + 0x48);
    MEM32(esp + 0x3C) = eax;
    MEM32(esp + 0x34) = edi;
    edi = MEM32(esp + 0x24);
    eax = ecx + ecx * 4;
    xmm0 = MEMF(edi + eax * 4 + 0x10); /* movss */
    eax = edi + eax * 4;
    ebx = eax;
    edi = MEM32(ebx);
    ebp = MEM32(ebx + 4);
    ebx = MEM32(ebx + 8);
    MEM32(esp + 0x48) = ebx;
    SET_LO8(ebx, MEM8(eax + 0xE));
    xmm2 = MEMF(esp + 0x48); /* movss */
    eax = MEM32(esp + 0x18);
    MEM32(esp + 0x40) = edi;
    MEM32(esp + 0x44) = ebp;
    MEMF(esp + 0x20) = xmm0; /* movss */

loc_0017F56E: ;
    ebp = MEM32(esp + 0x5C);
    ebp = (uint32_t)(int32_t)SMEM8(ebp + 0x4D);
    if (CMP_NE(eax, ebp)) goto loc_0017F32D; /* jne: not equal / not zero */

loc_0017F57E: ;
    POP32(esp, ebx);

loc_0017F57F: ;
    POP32(esp, edi);
    POP32(esp, esi);

loc_0017F581: ;
    POP32(esp, ebp);
    esp = esp + 0x48;
    esp += 4; return; /* ret */

    #undef fp_push
    #undef fp_pop
    #undef fp_popp
    #undef fp_top
    #undef fp_st1
}

/**
 * sub_0017F590
 * Original: 0x0017F590 - 0x0017F5EC (92 bytes, 37 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0017F590(void)
{
    int _flags = 0; /* fallback flag var */

loc_0017F590: ;
    edx = MEM32(esp + 0xC);
    (void)0; /* test edx, edx - flags set for next jcc */
    ecx = MEM32(esp + 4);
    eax = MEM32(ecx + 0x144);
    PUSH32(esp, esi);
    if (TEST_NZ(edx, edx)) goto loc_0017F5BF; /* jne: not equal / not zero */

loc_0017F5A3: ;
    esi = MEM32(esp + 0xC);
    edx = MEM32(esi);
    if (CMP_EQ(edx, MEM32(eax))) goto loc_0017F5B5; /* je: equal / zero */

loc_0017F5AD: ;
    SET_LO8(edx, MEM8(esi + 4));
    if (CMP_NE(LO8(edx), MEM8(eax + 4))) goto loc_0017F5EA; /* jne: not equal / not zero */

loc_0017F5B5: ;
    MEM8(ecx + 0x3A) = MEM8(ecx + 0x3A) | 8;
    MEM8(ecx + 0x50) = 0;
    POP32(esp, esi);
    esp += 4; return; /* ret */

loc_0017F5BF: ;
    if (CMP_NE(edx, 0x2D)) goto loc_0017F5EA; /* jne: not equal / not zero */

loc_0017F5C4: ;
    ecx = MEM32(esp + 0xC);
    edx = MEM32(eax);
    esi = MEM32(ecx);
    if (CMP_NE(edx, esi)) goto loc_0017F5DD; /* jne: not equal / not zero */

loc_0017F5D0: ;
    edx = MEM32(ecx + 4);
    MEM32(eax) = edx;
    SET_LO8(ecx, MEM8(ecx + 9));
    MEM8(eax + 4) = LO8(ecx);
    POP32(esp, esi);
    esp += 4; return; /* ret */

loc_0017F5DD: ;
    if (CMP_NE(edx, MEM32(ecx + 4))) goto loc_0017F5EA; /* jne: not equal / not zero */

loc_0017F5E2: ;
    MEM32(eax) = esi;
    SET_LO8(edx, MEM8(ecx + 8));
    MEM8(eax + 4) = LO8(edx);

loc_0017F5EA: ;
    POP32(esp, esi);
    esp += 4; return; /* ret */

}

/**
 * sub_0017F5F0
 * Original: 0x0017F5F0 - 0x0017F601 (17 bytes, 7 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0017F5F0(void)
{
    int _flags = 0; /* fallback flag var */

loc_0017F5F0: ;
    ecx = MEM32(esp + 4);
    eax = MEM32(ecx + 0x48);
    edx = MEM32(eax + 0x64);
    if (TEST_NZ(edx, edx)) { sub_0017F601(); return; } /* jne: not equal / not zero */

loc_0017F5FE: ;
    SET_LO8(eax, 0); /* xor self */
    esp += 4; return; /* ret */

}

/**
 * sub_0017F610
 * Original: 0x0017F610 - 0x0017F620 (16 bytes, 4 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0017F610(void)
{

loc_0017F610: ;
    eax = MEM32(esp + 4);
    MEM16(eax + 0x9C) = 0;
    SET_LO8(eax, 1);
    esp += 4; return; /* ret */

}

/**
 * sub_0017F8D0
 * Original: 0x0017F8D0 - 0x0017F904 (52 bytes, 12 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0017F8D0(void)
{
    double _fp_stack[8];
    int _fp_top = 0;
    #define fp_push(v) (_fp_stack[--_fp_top & 7] = (v))
    #define fp_pop() (_fp_top++)
    #define fp_popp() (fp_pop())
    #define fp_top() _fp_stack[_fp_top & 7]
    #define fp_st1() _fp_stack[(_fp_top + 1) & 7]

loc_0017F8D0: ;
    ecx = MEM32(esp + 4);
    SET_LO16(eax, MEM16(ecx + 0x9C));
    edx = SX16(LO16(eax));
    MEM32(esp + 4) = edx;
    edx = MEM32(0x7FA20C);
    fp_push((double)SMEM32(esp + 4)); /* fild */
    eax = eax + edx;
    fp_st1() += fp_top(); fp_pop(); /* fadd */
    MEM16(ecx + 0x9C) = LO16(eax);
    fp_st1() *= fp_top(); fp_pop(); /* fmul */
    fp_st1() += fp_top(); fp_pop(); /* fadd */
    esp += 4; return; /* ret */

    #undef fp_push
    #undef fp_pop
    #undef fp_popp
    #undef fp_top
    #undef fp_st1
}

/**
 * sub_0017F910
 * Original: 0x0017F910 - 0x0017F95B (75 bytes, 18 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0017F910(void)
{
    int _flags = 0; /* fallback flag var */
    float xmm0;

loc_0017F910: ;
    ecx = MEM32(esp + 4);
    eax = MEM32(ecx + 0x174);
    edx = MEM32(eax + 0x64);
    if (TEST_Z(edx, edx)) goto loc_0017F945; /* je: equal / zero */

loc_0017F921: ;
    if (CMP_EQ(MEM32(eax + 0x68), 0xFFFF)) goto loc_0017F945; /* je: equal / zero */

loc_0017F92A: ;
    edx = MEM32(eax + 0x78);
    MEM32(ecx + 0x7C) = edx;
    edx = MEM32(eax + 0x7C);
    MEM32(ecx + 0x80) = edx;
    eax = MEM32(eax + 0x80);
    MEM32(ecx + 0x84) = eax;

loc_0017F945: ;
    xmm0 = MEMF(ecx + 0x170); /* movss */
    eax = ecx + 0x88;
    PUSH32(esp, 0); sub_00106150(); /* call 0x00106150 */

loc_0017F958: ;
    SET_LO8(eax, 1);
    esp += 4; return; /* ret */

}

/**
 * sub_0017F960
 * Original: 0x0017F960 - 0x0017F988 (40 bytes, 12 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0017F960(void)
{

loc_0017F960: ;
    esp = esp - 8;
    PUSH32(esp, 0x3B);
    ecx = esp + 4;
    PUSH32(esp, ecx);
    MEM32(esp + 8) = eax;
    SET_LO8(eax, MEM8(eax + 0x10B));
    PUSH32(esp, 2);
    PUSH32(esp, 0x6B3F84);
    MEM8(esp + 0x14) = LO8(eax);
    PUSH32(esp, 0); sub_000DAA60(); /* call 0x000DAA60 */

loc_0017F984: ;
    esp = esp + 0x18;
    esp += 4; return; /* ret */

}

/**
 * sub_0017F990
 * Original: 0x0017F990 - 0x0017FF88 (1528 bytes, 293 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0017F990(void)
{
    uint32_t ebp;
    int _flags = 0; /* fallback flag var */
    float xmm0, xmm1, xmm2;
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_0017F990: ;
    esp = esp - 0x188;
    ecx = MEM32(esp + 0x190);
    PUSH32(esp, ebx);
    PUSH32(esp, ebp);
    PUSH32(esp, esi);
    esi = MEM32(esp + 0x198);
    SET_LO8(eax, MEM8(esi + 0x10B));
    PUSH32(esp, edi);
    PUSH32(esp, ecx);
    MEM8(esp + 0x74) = LO8(eax);
    PUSH32(esp, 0x2A);
    eax = 0x64;
    ebx = 0; /* xor self */
    edi = 0; /* xor self */
    PUSH32(esp, 0); sub_000D9C60(); /* call 0x000D9C60 */

loc_0017F9C3: ;
    ebp = eax;
    esp = esp + 8;
    if (CMP_EQ(ebp, ebx)) goto loc_0017FF7D; /* je: equal / zero */

loc_0017F9D0: ;
    xmm0 = MEMF(0x64925C); /* movss */
    MEMF(ebp + 0x30) = xmm0; /* movss */
    MEMF(ebp + 0x34) = xmm0; /* movss */
    MEM8(ebp + 0x38) = 0xFF;
    MEM8(ebp + 0x39) = 0x40;
    MEM8(ebp + 0x3A) = 0xFF;
    MEM8(ebp + 0x2C) = LO8(ebx);
    MEM8(ebp + 0x3B) = 0x33;
    edx = 0; /* xor self */
    eax = ebp + 0x3C;
    MEM32(eax) = edx;
    MEM32(eax + 4) = edx;
    MEM32(eax + 8) = edx;
    MEM32(eax + 0xC) = edx;
    edx = MEM32(esp + 0x70);
    eax = ebp + 0x4C;
    ecx = eax;
    MEM32(ecx) = esi;
    MEM32(ecx + 4) = edx;
    MEM32(ecx + 8) = edi;
    eax = 0; /* xor self */
    MEM32(ecx + 0xC) = ebx;
    MEM32(ecx + 0x10) = eax;
    MEM32(ecx + 0x14) = eax;
    eax = esp + 0x84;
    PUSH32(esp, 0); sub_000AF180(); /* call 0x000AF180 */

loc_0017FA2D: ;
    xmm1 = MEMF(esi + 0x264); /* movss */
    xmm1 = xmm1 + MEMF(esi + 0x260); /* addss */
    xmm1 = xmm1 * MEMF(0x648D10); /* mulss */
    xmm0 = 0.0f; /* xorps self = zero */
    SET_LO8(eax, MEM8(esi + 0x10B));
    MEMF(esp + 0x64) = xmm1; /* movss */
    xmm1 = MEMF(0x649C10); /* movss */
    MEMF(esp + 0x18) = xmm1; /* movss */
    xmm1 = MEMF(0x649C0C); /* movss */
    MEMF(esp + 0x20) = xmm1; /* movss */
    xmm1 = MEMF(0x649C08); /* movss */
    MEMF(esp + 0x28) = xmm1; /* movss */
    xmm1 = MEMF(0x649C04); /* movss */
    MEMF(esp + 0x1C) = xmm1; /* movss */
    xmm1 = MEMF(0x649C00); /* movss */
    MEMF(esp + 0x24) = xmm1; /* movss */
    xmm1 = MEMF(0x649BFC); /* movss */
    MEMF(esp + 0x30) = xmm1; /* movss */
    xmm1 = MEMF(0x649BF8); /* movss */
    MEMF(esp + 0x2C) = xmm1; /* movss */
    xmm1 = MEMF(0x649428); /* movss */
    MEMF(esp + 0x3C) = xmm1; /* movss */
    xmm1 = MEMF(0x649024); /* movss */
    MEMF(esp + 0x40) = xmm1; /* movss */
    xmm1 = MEMF(0x649F1C); /* movss */
    edi = 2;
    MEMF(esp + 0x44) = xmm1; /* movss */
    xmm1 = MEMF(0x648D14); /* movss */
    MEMF(esp + 0xD0) = xmm0; /* movss */
    MEM32(esp + 0xCC) = 0x303;
    MEM8(esp + 0x68) = LO8(ebx);
    MEM32(esp + 0x10) = esi;
    MEM8(esp + 0x14) = LO8(eax);
    MEMF(esp + 0x34) = xmm0; /* movss */
    MEMF(esp + 0x38) = xmm0; /* movss */
    MEMF(esp + 0x48) = xmm0; /* movss */
    MEMF(esp + 0x88) = xmm0; /* movss */
    MEMF(esp + 0x8C) = xmm0; /* movss */
    MEMF(esp + 0x4C) = xmm0; /* movss */
    MEMF(esp + 0x50) = xmm1; /* movss */
    MEMF(esp + 0x58) = xmm1; /* movss */
    MEMF(esp + 0x54) = xmm1; /* movss */
    MEMF(esp + 0x5C) = xmm1; /* movss */
    MEM32(esp + 0x60) = ebp;
    MEM8(esp + 0xD4) = 1;
    MEM32(esp + 0xD8) = 0x5F;
    MEM8(esp + 0x84) = 8;
    MEM32(esp + 0xE4) = edi;
    MEM32(esp + 0xEC) = edi;
    MEM32(esp + 0xF0) = ebx;
    MEM32(esp + 0xF4) = 4;
    MEM32(esp + 0xFC) = ebx;
    MEM32(esp + 0x100) = edi;
    MEM16(esp + 0x86) = 0x12C;
    MEMF(esp + 0xDC) = xmm0; /* movss */
    eax = MEM32(0x595D14);
    ecx = MEM32(0x595D18);
    edx = MEM32(0x595D1C);
    MEMF(esp + 0xE0) = xmm0; /* movss */
    MEM32(esp + 0x104) = ebx;
    MEM32(esp + 0x90) = eax;
    MEM32(esp + 0x94) = ecx;
    MEM32(esp + 0x98) = edx;
    MEM32(esp + 0x9C) = eax;
    MEM32(esp + 0xA0) = ecx;
    MEM32(esp + 0xA4) = edx;
    MEMF(esp + 0xA8) = xmm1; /* movss */
    MEMF(esp + 0xAC) = xmm1; /* movss */
    MEMF(esp + 0xB0) = xmm1; /* movss */
    MEM32(esp + 0xB4) = 0x40E00000;
    MEM8(esp + 0xC8) = 0xFF;
    MEM8(esp + 0xC9) = 0xFF;
    MEM8(esp + 0xCA) = 0xFF;
    MEM8(esp + 0xCB) = LO8(ebx);
    MEM32(esp + 0xB8) = ebx;
    MEM8(esp + 0x15) = LO8(ebx);
    /* nop */

loc_0017FC50: ;
    ecx = MEM32(esp + 0x1A0);
    PUSH32(esp, ecx);
    PUSH32(esp, 0x5C);
    PUSH32(esp, ebx);
    PUSH32(esp, ebx);
    PUSH32(esp, 0); sub_003E2480(); /* call 0x003E2480 */

loc_0017FC61: ;
    SET_LO8(eax, LO8(eax) & 1);
    SET_LO8(eax, LO8(eax) << 1);
    SET_LO8(eax, LO8(eax) + 1);
    PUSH32(esp, eax);
    PUSH32(esp, 0x1D);
    PUSH32(esp, ebx);
    PUSH32(esp, 0x25);
    PUSH32(esp, ebx);
    PUSH32(esp, 0x597978);
    eax = esp + 0xAC;
    PUSH32(esp, 0); sub_00150630(); /* call 0x00150630 */

loc_0017FC7F: ;
    edx = ZX8(MEM8(esp + 0x3D));
    esp = esp + 0x28;
    (void)0; /* cmp eax, ebx - flags set for next jcc */
    ecx = ebp + 0x4C;
    MEM32(ecx + edx * 4 + 8) = eax;
    if (CMP_EQ(eax, ebx)) goto loc_0017FCAF; /* je: equal / zero */

loc_0017FC92: ;
    edi = eax + 0x310;
    ecx = 0x17;
    esi = esp + 0x10;
    memcpy((void*)XBOX_PTR(edi), (void*)XBOX_PTR(esi), ecx * 4);
    esi += ecx * 4; edi += ecx * 4; ecx = 0; /* rep movsd */
    esi = MEM32(esp + 0x19C);
    edi = 2;

loc_0017FCAF: ;
    SET_LO8(eax, MEM8(esp + 0x15));
    SET_LO8(eax, LO8(eax) + 1);
    (void)0; /* cmp LO8(eax), 2 - flags set for next jcc */
    MEM8(esp + 0x15) = LO8(eax);
    if (CMP_B(LO8(eax), 2)) goto loc_0017FC50; /* jb: below (unsigned <) */

loc_0017FCBD: ;
    eax = esp + 0x84;
    PUSH32(esp, 0); sub_000AF180(); /* call 0x000AF180 */

loc_0017FCC9: ;
    xmm2 = MEMF(0x64A340); /* movss */
    SET_LO8(eax, MEM8(esi + 0x10B));
    xmm1 = 0.0f; /* xorps self = zero */
    xmm0 = MEMF(0x648D14); /* movss */
    ecx = MEM32(0x595D18);
    edx = MEM32(0x595D1C);
    MEMF(esp + 0x14) = xmm2; /* movss */
    MEMF(esp + 0x10) = xmm2; /* movss */
    xmm2 = MEMF(0x64A33C); /* movss */
    MEMF(esp + 0x1C) = xmm2; /* movss */
    MEMF(esp + 0x18) = xmm2; /* movss */
    xmm2 = MEMF(0x648D80); /* movss */
    MEM8(esp + 0x80) = LO8(eax);
    eax = eax | 0xFFFFFFFFu;
    MEMF(esp + 0x20) = xmm2; /* movss */
    MEMF(esp + 0x24) = xmm2; /* movss */
    xmm2 = MEMF(0x648D40); /* movss */
    MEM32(esp + 0x34) = eax;
    MEM32(esp + 0x44) = eax;
    MEM32(esp + 0x38) = eax;
    MEM32(esp + 0x48) = eax;
    MEM32(esp + 0x3C) = eax;
    MEM32(esp + 0x4C) = eax;
    MEM32(esp + 0x40) = eax;
    MEM32(esp + 0x50) = eax;
    eax = MEM32(0x595D14);
    MEMF(esp + 0xD0) = xmm1; /* movss */
    MEMF(esp + 0x2C) = xmm2; /* movss */
    xmm2 = MEMF(0x649284); /* movss */
    MEMF(esp + 0xDC) = xmm1; /* movss */
    MEMF(esp + 0xE0) = xmm1; /* movss */
    xmm1 = MEMF(0x648EA4); /* movss */
    MEM32(esp + 0xCC) = 0x303;
    MEM16(esp + 0x6C) = LO16(ebx);
    MEMF(esp + 0x70) = xmm0; /* movss */
    MEMF(esp + 0x28) = xmm0; /* movss */
    MEMF(esp + 0x30) = xmm2; /* movss */
    MEM32(esp + 0x54) = ebx;
    MEMF(esp + 0x58) = xmm0; /* movss */
    MEM16(esp + 0x5C) = LO16(ebx);
    MEM16(esp + 0x5E) = LO16(ebx);
    MEM16(esp + 0x60) = LO16(ebx);
    MEM16(esp + 0x62) = LO16(ebx);
    MEM8(esp + 0x64) = LO8(ebx);
    MEM8(esp + 0x65) = LO8(ebx);
    MEM8(esp + 0x66) = LO8(ebx);
    MEM8(esp + 0x67) = LO8(ebx);
    MEM8(esp + 0x68) = 0xF;
    MEM8(esp + 0x69) = 0xFF;
    MEM32(esp + 0xD8) = 0x60;
    MEM32(esp + 0xE4) = edi;
    MEM32(esp + 0xEC) = edi;
    MEM32(esp + 0xF0) = ebx;
    MEM32(esp + 0xF4) = 4;
    MEM32(esp + 0xFC) = ebx;
    MEM32(esp + 0x100) = edi;
    MEM16(esp + 0x86) = 0x12C;
    MEM32(esp + 0x104) = ebx;
    MEMF(esp + 0x88) = xmm1; /* movss */
    MEMF(esp + 0x8C) = xmm1; /* movss */
    MEM32(esp + 0x90) = eax;
    MEM32(esp + 0x94) = ecx;
    MEM32(esp + 0x98) = edx;
    MEM32(esp + 0x9C) = eax;
    MEM32(esp + 0xA0) = ecx;
    MEM32(esp + 0xA4) = edx;
    MEMF(esp + 0xA8) = xmm0; /* movss */
    MEMF(esp + 0xAC) = xmm0; /* movss */
    MEMF(esp + 0xB0) = xmm0; /* movss */
    MEM32(esp + 0xB4) = 0xC12002;
    MEM8(esp + 0xC8) = 0xFF;
    MEM8(esp + 0xC9) = 0xFF;
    MEM8(esp + 0xCA) = 0xFF;
    MEM8(esp + 0xCB) = 0xFF;
    MEM32(esp + 0xB8) = ebx;
    MEM8(esp + 0xBC) = 0xFF;
    MEM8(esp + 0x78) = LO8(ebx);

loc_0017FEC3: ;
    MEM32(esp + 0xB4) = MEM32(esp + 0xB4) | 0x40400000;
    ecx = MEM32(esp + 0x1A0);
    PUSH32(esp, ecx);
    PUSH32(esp, 0x74);
    PUSH32(esp, ebx);
    PUSH32(esp, ebx);
    PUSH32(esp, ebx);
    PUSH32(esp, 1);
    PUSH32(esp, ebx);
    PUSH32(esp, 0x2A);
    PUSH32(esp, ebx);
    PUSH32(esp, 0x597978);
    eax = esp + 0xAC;
    MEM8(esp + 0xAC) = 3;
    PUSH32(esp, 0); sub_00150630(); /* call 0x00150630 */

loc_0017FEFA: ;
    esp = esp + 0x28;
    if (CMP_EQ(eax, ebx)) goto loc_0017FF31; /* je: equal / zero */

loc_0017FF01: ;
    edx = eax + 0x310;
    ecx = 0x1D;
    esi = esp + 0x10;
    edi = edx;
    memcpy((void*)XBOX_PTR(edi), (void*)XBOX_PTR(esi), ecx * 4);
    esi += ecx * 4; edi += ecx * 4; ecx = 0; /* rep movsd */
    ecx = MEM32(0x774A90);
    esi = MEM32(esp + 0x19C);
    ecx++;
    MEM8(edx + 0x59) = 0xFF;
    MEM32(edx + 0x44) = ebx;
    MEM32(0x774A90) = ecx;
    goto loc_0017FF33;

loc_0017FF31: ;
    eax = 0; /* xor self */

loc_0017FF33: ;
    (void)0; /* cmp eax, ebx - flags set for next jcc */
    SET_LO8(edx, MEM8(esp + 0x78));
    edi = ZX8(LO8(edx));
    ecx = ebp + 0x4C;
    MEM32(ecx + edi * 4 + 0x10) = eax;
    if (CMP_EQ(eax, ebx)) goto loc_0017FF6E; /* je: equal / zero */

loc_0017FF45: ;
    ecx = MEM32(esp + 0x6C);
    eax = eax + 0x36C;
    MEM32(eax) = ecx;
    ecx = MEM32(esp + 0x70);
    MEM32(eax + 4) = ecx;
    ecx = MEM32(esp + 0x78);
    MEM32(eax + 8) = ebp;
    MEM32(eax + 0xC) = ecx;
    ecx = MEM32(esp + 0x80);
    MEM32(eax + 0x10) = esi;
    MEM32(eax + 0x14) = ecx;

loc_0017FF6E: ;
    SET_LO8(edx, LO8(edx) + 1);
    (void)0; /* cmp LO8(edx), 2 - flags set for next jcc */
    MEM8(esp + 0x78) = LO8(edx);
    if (CMP_B(LO8(edx), 2)) goto loc_0017FEC3; /* jb: below (unsigned <) */

loc_0017FF7D: ;
    POP32(esp, edi);
    POP32(esp, esi);
    POP32(esp, ebp);
    POP32(esp, ebx);
    esp = esp + 0x188;
    esp += 4; return; /* ret */

}

/**
 * sub_0017FF90
 * Original: 0x0017FF90 - 0x00180113 (387 bytes, 121 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0017FF90(void)
{
    uint32_t ebp;
    int _flags = 0; /* fallback flag var */
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_0017FF90: ;
    esp = esp - 0x50;
    PUSH32(esp, esi);
    PUSH32(esp, edi);
    edi = MEM32(esp + 0x5C);
    esi = MEM32(edi + 0x4C);
    eax = MEM32(esi + 0x64);
    if (TEST_Z(eax, eax)) { sub_00180113(); return; } /* je: equal / zero */

loc_0017FFA7: ;
    SET_LO8(eax, MEM8(esi + 0x10B));
    if (CMP_NE(LO8(eax), MEM8(edi + 0x50))) { sub_00180113(); return; } /* jne: not equal / not zero */

loc_0017FFB6: ;
    eax = MEM32(esi + 0x3C8);
    (void)0; /* test eax, eax - flags set for next jcc */
    PUSH32(esp, ebx);
    if (TEST_Z(eax, eax)) goto loc_001800E1; /* je: equal / zero */

loc_0017FFC5: ;
    SET_LO8(ecx, MEM8(esi + 0x16E));
    SET_LO8(ecx, LO8(ecx) & 0xF);
    if (CMP_EQ(LO8(ecx), 0xF)) goto loc_001800E1; /* je: equal / zero */

loc_0017FFD7: ;
    edx = esp + 0x2C;
    eax = esp + 0x38;
    MEM32(esp + 0xC) = edx;
    MEM32(esp + 0x10) = eax;
    ecx = esp + 0x44;
    edx = esp + 0x50;
    PUSH32(esp, 0x5F0C84);
    eax = esi;
    MEM32(esp + 0x20) = 0x598CC8;
    MEM32(esp + 0x24) = 0x598CD4;
    MEM32(esp + 0x28) = 0x598CE0;
    MEM32(esp + 0x2C) = 0x598CEC;
    MEM32(esp + 0x18) = ecx;
    MEM32(esp + 0x1C) = edx;
    PUSH32(esp, 0); sub_002F77D0(); /* call 0x002F77D0 */

loc_00180023: ;
    ebx = MEM32(esi + 0x3C8);
    eax = eax << 6;
    eax = eax + ebx;
    PUSH32(esp, eax);
    eax = esp + 0x14;
    PUSH32(esp, eax);
    eax = 4;
    ecx = esp + 0x28;
    PUSH32(esp, 0); sub_00111C60(); /* call 0x00111C60 */

loc_00180042: ;
    esp = esp + 0xC;
    edx = edi + 0x5C;
    ecx = 0; /* xor self */
    esi = 2;
    PUSH32(esp, ebp);

loc_00180050: ;
    eax = MEM32(edx + -8);
    if (TEST_Z(eax, eax)) goto loc_0018008C; /* je: equal / zero */

loc_00180057: ;
    MEM8(eax + 0x368) = MEM8(eax + 0x368) | 1;
    ebx = eax + 0x40;
    edi = esp + ecx + 0x30;
    ebp = MEM32(edi);
    MEM32(ebx) = ebp;
    ebp = MEM32(edi + 4);
    MEM32(ebx + 4) = ebp;
    edi = MEM32(edi + 8);
    MEM32(ebx + 8) = edi;
    edi = esp + ecx + 0x48;
    ebx = MEM32(edi);
    eax = eax + 0x4C;
    MEM32(eax) = ebx;
    ebx = MEM32(edi + 4);
    MEM32(eax + 4) = ebx;
    edi = MEM32(edi + 8);
    MEM32(eax + 8) = edi;

loc_0018008C: ;
    eax = MEM32(edx);
    if (TEST_Z(eax, eax)) goto loc_001800CC; /* je: equal / zero */

loc_00180092: ;
    edi = MEM32(eax + 0x64);
    edi = edi & 0xFFFFFFFBu;
    edi = edi | 2;
    MEM32(eax + 0x64) = edi;
    ebx = eax + 0x40;
    edi = esp + ecx + 0x30;
    ebp = MEM32(edi);
    MEM32(ebx) = ebp;
    ebp = MEM32(edi + 4);
    MEM32(ebx + 4) = ebp;
    edi = MEM32(edi + 8);
    MEM32(ebx + 8) = edi;
    edi = esp + ecx + 0x48;
    ebx = MEM32(edi);
    eax = eax + 0x4C;
    MEM32(eax) = ebx;
    ebx = MEM32(edi + 4);
    MEM32(eax + 4) = ebx;
    edi = MEM32(edi + 8);
    MEM32(eax + 8) = edi;

loc_001800CC: ;
    edx = edx + 4;
    ecx = ecx + 0xC;
    esi--;
    if ((esi != 0)) goto loc_00180050; /* jne: not equal / not zero */

loc_001800D9: ;
    POP32(esp, ebp);
    POP32(esp, ebx);
    POP32(esp, edi);
    POP32(esp, esi);
    esp = esp + 0x50;
    esp += 4; return; /* ret */

loc_001800E1: ;
    eax = edi + 0x5C;
    edx = 2;
    SET_LO8(ebx, 0xFE);
    esi = 0xFFFFFFFDu;

loc_001800F0: ;
    ecx = MEM32(eax + -8);
    if (TEST_Z(ecx, ecx)) goto loc_001800FD; /* je: equal / zero */

loc_001800F7: ;
    MEM8(ecx + 0x368) = MEM8(ecx + 0x368) & LO8(ebx);

loc_001800FD: ;
    ecx = MEM32(eax);
    if (TEST_Z(ecx, ecx)) goto loc_00180106; /* je: equal / zero */

loc_00180103: ;
    MEM32(ecx + 0x64) = MEM32(ecx + 0x64) & esi;

loc_00180106: ;
    eax = eax + 4;
    edx--;
    if ((edx != 0)) goto loc_001800F0; /* jne: not equal / not zero */

loc_0018010C: ;
    POP32(esp, ebx);
    POP32(esp, edi);
    POP32(esp, esi);
    esp = esp + 0x50;
    esp += 4; return; /* ret */

}

/**
 * sub_00180130
 * Original: 0x00180130 - 0x0018019E (110 bytes, 44 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00180130(void)
{
    uint32_t ebp;
    int _flags = 0; /* fallback flag var */
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_00180130: ;
    edx = MEM32(esp + 0xC);
    (void)0; /* cmp edx, 0x3B - flags set for next jcc */
    eax = MEM32(esp + 8);
    PUSH32(esp, esi);
    esi = MEM32(esp + 8);
    PUSH32(esp, edi);
    ecx = esi + 0x4C;
    if (CMP_NE(edx, 0x3B)) goto loc_0018018F; /* jne: not equal / not zero */

loc_00180146: ;
    edx = MEM32(eax);
    if (CMP_EQ(edx, MEM32(ecx))) goto loc_00180154; /* je: equal / zero */

loc_0018014C: ;
    SET_LO8(eax, MEM8(eax + 4));
    if (CMP_NE(LO8(eax), MEM8(ecx + 4))) goto loc_0018019B; /* jne: not equal / not zero */

loc_00180154: ;
    SET_LO8(eax, MEM8(0x8472BD));
    if (TEST_NZ(LO8(eax), LO8(eax))) goto loc_0018019B; /* jne: not equal / not zero */

loc_0018015D: ;
    edx = esi;
    PUSH32(esp, 0); sub_000DAD90(); /* call 0x000DAD90 */

loc_00180164: ;
    eax = MEM32(esi);
    if (CMP_L(eax, 2)) goto loc_0018019B; /* jl: less (signed <) */

loc_0018016B: ;
    eax = (uint32_t)((int32_t)eax * (int32_t)0x70);
    eax = MEM32(eax + 0x5906BC);
    if (TEST_Z(eax, eax)) goto loc_00180181; /* je: equal / zero */

loc_00180178: ;
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, esi);
    PUSH32(esp, 0); RECOMP_ICALL_SAFE(eax, _icall_esp); /* indirect call */
    }

loc_0018017B: ;
    esp = esp + 4;
    POP32(esp, edi);
    POP32(esp, esi);
    esp += 4; return; /* ret */

loc_00180181: ;
    POP32(esp, edi);
    eax = esi;
    edx = 1;
    POP32(esp, esi);
    g_seh_ebp = ebp; sub_000DA5E0(); return; /* tail jmp 0x000DA5E0 */

loc_0018018F: ;
    PUSH32(esp, esi);
    edi = ecx + 4;
    PUSH32(esp, 0); sub_000DAEA0(); /* call 0x000DAEA0 */

loc_00180198: ;
    esp = esp + 4;

loc_0018019B: ;
    POP32(esp, edi);
    POP32(esp, esi);
    esp += 4; return; /* ret */

}

/**
 * sub_001801A0
 * Original: 0x001801A0 - 0x00180291 (241 bytes, 87 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_001801A0(void)
{
    int _flags = 0; /* fallback flag var */

loc_001801A0: ;
    PUSH32(esp, esi);
    esi = MEM32(edi + 0x54);
    if (TEST_Z(esi, esi)) goto loc_001801E0; /* je: equal / zero */

loc_001801A8: ;
    SET_LO8(eax, MEM8(0x8472BD));
    if (TEST_NZ(LO8(eax), LO8(eax))) goto loc_001801E0; /* jne: not equal / not zero */

loc_001801B1: ;
    edx = esi;
    PUSH32(esp, 0); sub_000DAD90(); /* call 0x000DAD90 */

loc_001801B8: ;
    eax = MEM32(esi);
    if (CMP_L(eax, 2)) goto loc_001801E0; /* jl: less (signed <) */

loc_001801BF: ;
    eax = (uint32_t)((int32_t)eax * (int32_t)0x70);
    eax = MEM32(eax + 0x5906BC);
    if (TEST_Z(eax, eax)) goto loc_001801D4; /* je: equal / zero */

loc_001801CC: ;
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, esi);
    PUSH32(esp, 0); RECOMP_ICALL_SAFE(eax, _icall_esp); /* indirect call */
    }

loc_001801CF: ;
    esp = esp + 4;
    goto loc_001801E0;

loc_001801D4: ;
    edx = 1;
    eax = esi;
    PUSH32(esp, 0); sub_000DA5E0(); /* call 0x000DA5E0 */

loc_001801E0: ;
    esi = MEM32(edi + 0x58);
    if (TEST_Z(esi, esi)) goto loc_0018021F; /* je: equal / zero */

loc_001801E7: ;
    SET_LO8(eax, MEM8(0x8472BD));
    if (TEST_NZ(LO8(eax), LO8(eax))) goto loc_0018021F; /* jne: not equal / not zero */

loc_001801F0: ;
    edx = esi;
    PUSH32(esp, 0); sub_000DAD90(); /* call 0x000DAD90 */

loc_001801F7: ;
    eax = MEM32(esi);
    if (CMP_L(eax, 2)) goto loc_0018021F; /* jl: less (signed <) */

loc_001801FE: ;
    eax = (uint32_t)((int32_t)eax * (int32_t)0x70);
    eax = MEM32(eax + 0x5906BC);
    if (TEST_Z(eax, eax)) goto loc_00180213; /* je: equal / zero */

loc_0018020B: ;
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, esi);
    PUSH32(esp, 0); RECOMP_ICALL_SAFE(eax, _icall_esp); /* indirect call */
    }

loc_0018020E: ;
    esp = esp + 4;
    goto loc_0018021F;

loc_00180213: ;
    edx = 1;
    eax = esi;
    PUSH32(esp, 0); sub_000DA5E0(); /* call 0x000DA5E0 */

loc_0018021F: ;
    esi = MEM32(edi + 0x5C);
    if (TEST_Z(esi, esi)) goto loc_0018025E; /* je: equal / zero */

loc_00180226: ;
    SET_LO8(eax, MEM8(0x8472BD));
    if (TEST_NZ(LO8(eax), LO8(eax))) goto loc_0018025E; /* jne: not equal / not zero */

loc_0018022F: ;
    edx = esi;
    PUSH32(esp, 0); sub_000DAD90(); /* call 0x000DAD90 */

loc_00180236: ;
    eax = MEM32(esi);
    if (CMP_L(eax, 2)) goto loc_0018025E; /* jl: less (signed <) */

loc_0018023D: ;
    eax = (uint32_t)((int32_t)eax * (int32_t)0x70);
    eax = MEM32(eax + 0x5906BC);
    if (TEST_Z(eax, eax)) goto loc_00180252; /* je: equal / zero */

loc_0018024A: ;
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, esi);
    PUSH32(esp, 0); RECOMP_ICALL_SAFE(eax, _icall_esp); /* indirect call */
    }

loc_0018024D: ;
    esp = esp + 4;
    goto loc_0018025E;

loc_00180252: ;
    edx = 1;
    eax = esi;
    PUSH32(esp, 0); sub_000DA5E0(); /* call 0x000DA5E0 */

loc_0018025E: ;
    esi = MEM32(edi + 0x60);
    if (TEST_Z(esi, esi)) goto loc_0018028F; /* je: equal / zero */

loc_00180265: ;
    SET_LO8(eax, MEM8(0x8472BD));
    if (TEST_NZ(LO8(eax), LO8(eax))) goto loc_0018028F; /* jne: not equal / not zero */

loc_0018026E: ;
    edx = esi;
    PUSH32(esp, 0); sub_000DAD90(); /* call 0x000DAD90 */

loc_00180275: ;
    eax = MEM32(esi);
    if (CMP_L(eax, 2)) goto loc_0018028F; /* jl: less (signed <) */

loc_0018027C: ;
    eax = (uint32_t)((int32_t)eax * (int32_t)0x70);
    eax = MEM32(eax + 0x5906BC);
    if (TEST_Z(eax, eax)) { sub_00180291(); return; } /* je: equal / zero */

loc_00180289: ;
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, esi);
    PUSH32(esp, 0); RECOMP_ICALL_SAFE(eax, _icall_esp); /* indirect call */
    }

loc_0018028C: ;
    esp = esp + 4;

loc_0018028F: ;
    POP32(esp, esi);
    esp += 4; return; /* ret */

}

/**
 * sub_001802D0
 * Original: 0x001802D0 - 0x001802ED (29 bytes, 10 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_001802D0(void)
{

loc_001802D0: ;
    PUSH32(esp, edi);
    edi = MEM32(esp + 8);
    PUSH32(esp, 0); sub_001801A0(); /* call 0x001801A0 */

loc_001802DA: ;
    eax = edi + 0x3C;
    PUSH32(esp, 0); sub_001126F0(); /* call 0x001126F0 */

loc_001802E2: ;
    PUSH32(esp, edi);
    PUSH32(esp, 0); sub_000DAE40(); /* call 0x000DAE40 */

loc_001802E8: ;
    esp = esp + 4;
    POP32(esp, edi);
    esp += 4; return; /* ret */

}

/**
 * sub_001802F0
 * Original: 0x001802F0 - 0x001804C8 (472 bytes, 80 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_001802F0(void)
{
    int _flags = 0; /* fallback flag var */
    float xmm0, xmm1, xmm5, xmm6, xmm7;
    double _fp_stack[8];
    int _fp_top = 0;
    #define fp_push(v) (_fp_stack[--_fp_top & 7] = (v))
    #define fp_pop() (_fp_top++)
    #define fp_popp() (fp_pop())
    #define fp_top() _fp_stack[_fp_top & 7]
    #define fp_st1() _fp_stack[(_fp_top + 1) & 7]

loc_001802F0: ;
    xmm5 = MEMF(0x7FA24C); /* movss */
    xmm6 = 0.0f; /* xorps self = zero */
    PUSH32(esp, esi);
    esi = MEM32(esp + 8);
    xmm0 = MEMF(esi + 0x334); /* movss */
    xmm0 = xmm0 - xmm5; /* subss */
    /* comiss xmm6, xmm0 - sets EFLAGS */
    MEMF(esi + 0x334) = xmm0; /* movss */
    if ((xmm6 <= xmm0)) goto loc_0018034B; /* jbe: below or equal (unsigned <=) */

loc_00180319: ;
    PUSH32(esp, 0); sub_003E1D70(); /* call 0x003E1D70 */

loc_0018031E: ;
    xmm0 = xmm0 * MEMF(0x648D18); /* mulss */
    MEMF(esi + 0x334) = xmm0; /* movss */
    PUSH32(esp, 0); sub_003E1D70(); /* call 0x003E1D70 */

loc_00180333: ;
    xmm0 = xmm0 * MEMF(esi + 0x320); /* mulss */
    xmm0 = xmm0 + MEMF(esi + 0x318); /* addss */
    MEMF(esi + 0x328) = xmm0; /* movss */

loc_0018034B: ;
    xmm0 = MEMF(esi + 0x328); /* movss */
    xmm0 = xmm0 - MEMF(esi + 0x38); /* subss */
    xmm0 = xmm0 * MEMF(0x648F20); /* mulss */
    xmm0 = xmm0 + MEMF(esi + 0x38); /* addss */
    MEMF(esi + 0x38) = xmm0; /* movss */
    xmm0 = MEMF(esi + 0x338); /* movss */
    xmm0 = xmm0 - xmm5; /* subss */
    /* comiss xmm6, xmm0 - sets EFLAGS */
    MEMF(esi + 0x338) = xmm0; /* movss */
    if ((xmm6 <= xmm0)) goto loc_001803CD; /* jbe: below or equal (unsigned <=) */

loc_00180383: ;
    PUSH32(esp, 0); sub_003E1D70(); /* call 0x003E1D70 */

loc_00180388: ;
    xmm0 = xmm0 * MEMF(0x649278); /* mulss */
    MEMF(esi + 0x338) = xmm0; /* movss */
    PUSH32(esp, 0); sub_003E2480(); /* call 0x003E2480 */

loc_0018039D: ;
    if (TEST_Z(LO8(eax), 1)) goto loc_001803B0; /* je: equal / zero */

loc_001803A1: ;
    PUSH32(esp, 0); sub_003E1D70(); /* call 0x003E1D70 */

loc_001803A6: ;
    xmm0 = xmm0 * MEMF(esi + 0x324); /* mulss */
    goto loc_001803BD;

loc_001803B0: ;
    PUSH32(esp, 0); sub_003E1D70(); /* call 0x003E1D70 */

loc_001803B5: ;
    xmm0 = xmm0 * MEMF(esi + 0x330); /* mulss */

loc_001803BD: ;
    xmm0 = xmm0 + MEMF(esi + 0x31C); /* addss */
    MEMF(esi + 0x32C) = xmm0; /* movss */

loc_001803CD: ;
    xmm0 = MEMF(esi + 0x32C); /* movss */
    xmm0 = xmm0 - MEMF(esi + 0x3C); /* subss */
    xmm7 = MEMF(0x648EA8); /* movss */
    xmm0 = xmm0 * xmm7; /* mulss */
    xmm0 = xmm0 + MEMF(esi + 0x3C); /* addss */
    MEMF(esi + 0x3C) = xmm0; /* movss */
    xmm0 = MEMF(esi + 0x348); /* movss */
    xmm0 = xmm0 - xmm5; /* subss */
    /* comiss xmm6, xmm0 - sets EFLAGS */
    MEMF(esi + 0x348) = xmm0; /* movss */
    if ((xmm6 <= xmm0)) goto loc_0018043B; /* jbe: below or equal (unsigned <=) */

loc_00180409: ;
    PUSH32(esp, 0); sub_003E1D70(); /* call 0x003E1D70 */

loc_0018040E: ;
    xmm0 = xmm0 * MEMF(0x648CE4); /* mulss */
    MEMF(esi + 0x348) = xmm0; /* movss */
    PUSH32(esp, 0); sub_003E1D70(); /* call 0x003E1D70 */

loc_00180423: ;
    xmm0 = xmm0 * MEMF(esi + 0x340); /* mulss */
    xmm0 = xmm0 + MEMF(esi + 0x33C); /* addss */
    MEMF(esi + 0x344) = xmm0; /* movss */

loc_0018043B: ;
    xmm0 = MEMF(esi + 0x344); /* movss */
    xmm0 = xmm0 - MEMF(esi + 0x34C); /* subss */
    xmm0 = xmm0 * xmm7; /* mulss */
    xmm0 = xmm0 + MEMF(esi + 0x34C); /* addss */
    MEMF(esp + 8) = xmm0; /* movss */
    fp_push(MEMF(esp + 8)); /* fld float */
    MEMF(esi + 0x34C) = xmm0; /* movss */
    PUSH32(esp, 0); sub_00471288(); /* call 0x00471288 */

loc_0018046E: ;
    xmm0 = MEMF(0x6495B4); /* movss */
    MEM8(esi + 0x7B) = LO8(eax);
    xmm1 = MEMF(esi + 0x358); /* movss */
    xmm1 = xmm1 - MEMF(esi + 0x350); /* subss */
    xmm1 = xmm1 * xmm0; /* mulss */
    xmm1 = xmm1 + MEMF(esi + 0x350); /* addss */
    MEMF(esi + 0x350) = xmm1; /* movss */
    xmm1 = MEMF(esi + 0x35C); /* movss */
    xmm1 = xmm1 - MEMF(esi + 0x354); /* subss */
    xmm1 = xmm1 * xmm0; /* mulss */
    xmm1 = xmm1 + MEMF(esi + 0x354); /* addss */
    MEMF(esi + 0x354) = xmm1; /* movss */
    eax = 1;
    POP32(esp, esi);
    esp += 4; return; /* ret */

    #undef fp_push
    #undef fp_pop
    #undef fp_popp
    #undef fp_top
    #undef fp_st1
}

/**
 * sub_001804D0
 * Original: 0x001804D0 - 0x00180589 (185 bytes, 53 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_001804D0(void)
{
    int _flags = 0; /* fallback flag var */
    float xmm0;

loc_001804D0: ;
    esp = esp - 8;
    PUSH32(esp, esi);
    esi = MEM32(esp + 0x10);
    eax = MEM32(esi + 0x310);
    SET_LO8(ecx, MEM8(eax + 0x10B));
    if (CMP_NE(LO8(ecx), MEM8(esi + 0x314))) goto loc_00180545; /* jne: not equal / not zero */

loc_001804EC: ;
    ecx = MEM32(eax + 0x64);
    if (TEST_Z(ecx, ecx)) goto loc_00180545; /* je: equal / zero */

loc_001804F3: ;
    if (TEST_Z(MEM8(esi + 0x368), 1)) goto loc_00180582; /* je: equal / zero */

loc_00180500: ;
    xmm0 = MEMF(esi + 0x350); /* movss */
    xmm0 = xmm0 * MEMF(esi + 0x364); /* mulss */
    eax = MEM32(esp + 0x14);
    MEMF(esp + 4) = xmm0; /* movss */
    xmm0 = MEMF(esi + 0x354); /* movss */
    xmm0 = xmm0 * MEMF(esi + 0x364); /* mulss */
    PUSH32(esp, 0);
    ecx = esp + 8;
    edx = esi;
    MEMF(esp + 0xC) = xmm0; /* movss */
    PUSH32(esp, 0); sub_00152AB0(); /* call 0x00152AB0 */

loc_0018053D: ;
    esp = esp + 4;
    POP32(esp, esi);
    esp = esp + 8;
    esp += 4; return; /* ret */

loc_00180545: ;
    SET_LO8(eax, MEM8(0x8472BD));
    if (TEST_NZ(LO8(eax), LO8(eax))) goto loc_00180582; /* jne: not equal / not zero */

loc_0018054E: ;
    edx = esi;
    PUSH32(esp, 0); sub_000DAD90(); /* call 0x000DAD90 */

loc_00180555: ;
    eax = MEM32(esi);
    if (CMP_L(eax, 2)) goto loc_00180582; /* jl: less (signed <) */

loc_0018055C: ;
    eax = (uint32_t)((int32_t)eax * (int32_t)0x70);
    eax = MEM32(eax + 0x5906BC);
    if (TEST_Z(eax, eax)) goto loc_00180576; /* je: equal / zero */

loc_00180569: ;
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, esi);
    PUSH32(esp, 0); RECOMP_ICALL_SAFE(eax, _icall_esp); /* indirect call */
    }

loc_0018056C: ;
    esp = esp + 4;
    eax = 0; /* xor self */
    POP32(esp, esi);
    esp = esp + 8;
    esp += 4; return; /* ret */

loc_00180576: ;
    edx = 1;
    eax = esi;
    PUSH32(esp, 0); sub_000DA5E0(); /* call 0x000DA5E0 */

loc_00180582: ;
    eax = 0; /* xor self */
    POP32(esp, esi);
    esp = esp + 8;
    esp += 4; return; /* ret */

}

/**
 * sub_00180590
 * Original: 0x00180590 - 0x001805FC (108 bytes, 35 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00180590(void)
{
    int _flags = 0; /* fallback flag var */

loc_00180590: ;
    eax = MEM32(esp + 0xC);
    (void)0; /* cmp eax, 0x2D - flags set for next jcc */
    PUSH32(esp, esi);
    esi = MEM32(esp + 8);
    if (CMP_NE(eax, 0x2D)) goto loc_001805D8; /* jne: not equal / not zero */

loc_0018059E: ;
    eax = MEM32(esp + 0xC);
    ecx = MEM32(esi + 0x174);
    edx = MEM32(eax);
    if (CMP_NE(ecx, edx)) goto loc_001805C2; /* jne: not equal / not zero */

loc_001805AE: ;
    ecx = MEM32(eax + 4);
    MEM32(esi + 0x174) = ecx;
    SET_LO8(edx, MEM8(eax + 9));
    MEM8(esi + 0x178) = LO8(edx);
    POP32(esp, esi);
    esp += 4; return; /* ret */

loc_001805C2: ;
    if (CMP_NE(ecx, MEM32(eax + 4))) goto loc_001805FA; /* jne: not equal / not zero */

loc_001805C7: ;
    MEM32(esi + 0x174) = edx;
    SET_LO8(eax, MEM8(eax + 8));
    MEM8(esi + 0x178) = LO8(eax);
    POP32(esp, esi);
    esp += 4; return; /* ret */

loc_001805D8: ;
    if (TEST_NZ(eax, eax)) goto loc_001805FA; /* jne: not equal / not zero */

loc_001805DC: ;
    eax = MEM32(esp + 0xC);
    ecx = MEM32(eax);
    if (CMP_EQ(ecx, MEM32(esi + 0x174))) goto loc_001805F5; /* je: equal / zero */

loc_001805EA: ;
    SET_LO8(edx, MEM8(eax + 4));
    if (CMP_NE(LO8(edx), MEM8(esi + 0x178))) goto loc_001805FA; /* jne: not equal / not zero */

loc_001805F5: ;
    PUSH32(esp, 0); sub_000DADD0(); /* call 0x000DADD0 */

loc_001805FA: ;
    POP32(esp, esi);
    esp += 4; return; /* ret */

}

/**
 * sub_00180600
 * Original: 0x00180600 - 0x00180639 (57 bytes, 15 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00180600(void)
{
    uint32_t ebp;
    int _flags = 0; /* fallback flag var */
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_00180600: ;
    PUSH32(esp, ebx);
    ebx = MEM32(esp + 8);
    eax = MEM32(ebx + 0x360);
    if (TEST_Z(eax, eax)) goto loc_0018061E; /* je: equal / zero */

loc_0018060F: ;
    ecx = ZX8(MEM8(ebx + 0x315));
    MEM32(eax + ecx * 4 + 0x54) = 0;

loc_0018061E: ;
    PUSH32(esp, 0); sub_0014FD70(); /* call 0x0014FD70 */

loc_00180623: ;
    SET_LO8(eax, MEM8(0x8472BD));
    if (TEST_NZ(LO8(eax), LO8(eax))) { sub_00180639(); return; } /* jne: not equal / not zero */

loc_0018062C: ;
    eax = ebx;
    edx = 1;
    POP32(esp, ebx);
    g_seh_ebp = ebp; sub_000DA5E0(); return; /* tail jmp 0x000DA5E0 */

}

/**
 * sub_00180640
 * Original: 0x00180640 - 0x0018066E (46 bytes, 13 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00180640(void)
{
    int _flags = 0; /* fallback flag var */

loc_00180640: ;
    PUSH32(esp, ebx);
    ebx = MEM32(esp + 8);
    eax = MEM32(ebx + 0x360);
    if (TEST_Z(eax, eax)) goto loc_0018065E; /* je: equal / zero */

loc_0018064F: ;
    ecx = ZX8(MEM8(ebx + 0x315));
    MEM32(eax + ecx * 4 + 0x54) = 0;

loc_0018065E: ;
    PUSH32(esp, 0); sub_0014FD70(); /* call 0x0014FD70 */

loc_00180663: ;
    PUSH32(esp, ebx);
    PUSH32(esp, 0); sub_000DAE40(); /* call 0x000DAE40 */

loc_00180669: ;
    esp = esp + 4;
    POP32(esp, ebx);
    esp += 4; return; /* ret */

}

/**
 * sub_00180670
 * Original: 0x00180670 - 0x00180717 (167 bytes, 36 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00180670(void)
{
    int _flags = 0; /* fallback flag var */
    float xmm0;

loc_00180670: ;
    esp = esp - 0x10;
    SET_LO16(eax, MEM16(0x7FA20C));
    PUSH32(esp, esi);
    esi = MEM32(esp + 0x18);
    MEM16(esi + 0x36C) = MEM16(esi + 0x36C) - LO16(eax);
    (void)0; /* cmp MEM16(esi + 0x36C), 0 - flags set for next jcc */
    MEM32(esp + 4) = 0x60;
    MEM32(esp + 8) = 0x61;
    MEM32(esp + 0xC) = 0x62;
    MEM32(esp + 0x10) = 0x63;
    if (CMP_GE(MEM16(esi + 0x36C), 0)) goto loc_001806E5; /* jge: greater or equal (signed >=) */

loc_001806AF: ;
    PUSH32(esp, 0); sub_003E2480(); /* call 0x003E2480 */

loc_001806B4: ;
    eax = eax & 0x80000003u;
    if (((int32_t)eax >= 0)) goto loc_001806C0; /* jns: not sign (positive) */

loc_001806BB: ;
    eax--;
    eax = eax | 0xFFFFFFFCu;
    eax++;

loc_001806C0: ;
    ecx = MEM32(esp + eax * 4 + 4);
    MEM32(esi + 0x88) = ecx;
    PUSH32(esp, 0); sub_003E2480(); /* call 0x003E2480 */

loc_001806CF: ;
    eax = eax & 0x80000007u;
    if (((int32_t)eax >= 0)) goto loc_001806DB; /* jns: not sign (positive) */

loc_001806D6: ;
    eax--;
    eax = eax | 0xFFFFFFF8u;
    eax++;

loc_001806DB: ;
    eax = eax + 3;
    MEM16(esi + 0x36C) = LO16(eax);

loc_001806E5: ;
    xmm0 = MEMF(esi + 0x370); /* movss */
    xmm0 = xmm0 - MEMF(esi + 0x358); /* subss */
    xmm0 = xmm0 * MEMF(0x6495B4); /* mulss */
    xmm0 = xmm0 + MEMF(esi + 0x358); /* addss */
    MEMF(esi + 0x358) = xmm0; /* movss */
    eax = 1;
    POP32(esp, esi);
    esp = esp + 0x10;
    esp += 4; return; /* ret */

}

/**
 * sub_00180720
 * Original: 0x00180720 - 0x00180744 (36 bytes, 11 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00180720(void)
{

loc_00180720: ;
    eax = MEM32(esp + 4);
    edx = MEM32(esp + 0xC);
    PUSH32(esp, edi);
    PUSH32(esp, eax);
    edi = eax + 0x380;
    ecx = eax + 0x37C;
    eax = MEM32(esp + 0x10);
    PUSH32(esp, 0); sub_000DAEA0(); /* call 0x000DAEA0 */

loc_0018073F: ;
    esp = esp + 4;
    POP32(esp, edi);
    esp += 4; return; /* ret */

}

/**
 * sub_00180750
 * Original: 0x00180750 - 0x00180789 (57 bytes, 15 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00180750(void)
{
    uint32_t ebp;
    int _flags = 0; /* fallback flag var */
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_00180750: ;
    PUSH32(esp, ebx);
    ebx = MEM32(esp + 8);
    eax = MEM32(ebx + 0x374);
    if (TEST_Z(eax, eax)) goto loc_0018076E; /* je: equal / zero */

loc_0018075F: ;
    ecx = ZX8(MEM8(ebx + 0x378));
    MEM32(eax + ecx * 4 + 0x5C) = 0;

loc_0018076E: ;
    PUSH32(esp, 0); sub_0014FD70(); /* call 0x0014FD70 */

loc_00180773: ;
    SET_LO8(eax, MEM8(0x8472BD));
    if (TEST_NZ(LO8(eax), LO8(eax))) { sub_00180789(); return; } /* jne: not equal / not zero */

loc_0018077C: ;
    eax = ebx;
    edx = 1;
    POP32(esp, ebx);
    g_seh_ebp = ebp; sub_000DA5E0(); return; /* tail jmp 0x000DA5E0 */

}

/**
 * sub_00180790
 * Original: 0x00180790 - 0x001807BE (46 bytes, 13 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00180790(void)
{
    int _flags = 0; /* fallback flag var */

loc_00180790: ;
    PUSH32(esp, ebx);
    ebx = MEM32(esp + 8);
    eax = MEM32(ebx + 0x374);
    if (TEST_Z(eax, eax)) goto loc_001807AE; /* je: equal / zero */

loc_0018079F: ;
    ecx = ZX8(MEM8(ebx + 0x378));
    MEM32(eax + ecx * 4 + 0x5C) = 0;

loc_001807AE: ;
    PUSH32(esp, 0); sub_0014FD70(); /* call 0x0014FD70 */

loc_001807B3: ;
    PUSH32(esp, ebx);
    PUSH32(esp, 0); sub_000DAE40(); /* call 0x000DAE40 */

loc_001807B9: ;
    esp = esp + 4;
    POP32(esp, ebx);
    esp += 4; return; /* ret */

}

/**
 * sub_001807C0
 * Original: 0x001807C0 - 0x001807CF (15 bytes, 7 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_001807C0(void)
{
    int _flags = 0; /* fallback flag var */

loc_001807C0: ;
    edx = 0; /* xor self */
    esp = esp - 0x24;
    if (CMP_NE(ecx, edx)) { sub_001807CF(); return; } /* jne: not equal / not zero */

loc_001807C9: ;
    eax = 0; /* xor self */
    esp = esp + 0x24;
    esp += 4; return; /* ret */

}

/**
 * sub_001808D0
 * Original: 0x001808D0 - 0x00180962 (146 bytes, 48 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_001808D0(void)
{
    int _flags = 0; /* fallback flag var */

loc_001808D0: ;
    if (TEST_Z(esi, esi)) goto loc_00180961; /* je: equal / zero */

loc_001808D8: ;
    eax = MEM32(0x77157C);
    if (TEST_Z(eax, eax)) goto loc_00180961; /* je: equal / zero */

loc_001808E5: ;
    PUSH32(esp, ebx);
    SET_LO8(ebx, MEM8(0x771758));
    PUSH32(esp, edi);
    /* nop */

loc_001808F0: ;
    edx = MEM32(eax + 0xC);
    ecx = SX8(LO8(ebx));
    MEM32(ecx * 4 + 0x771740) = edx;
    SET_LO8(ecx, MEM8(0x8472BD));
    (void)0; /* test LO8(ecx), LO8(ecx) - flags set for next jcc */
    MEM32(eax + 0x40) = esi;
    if (TEST_NZ(LO8(ecx), LO8(ecx))) goto loc_00180951; /* jne: not equal / not zero */

loc_0018090A: ;
    if (CMP_LE(LO8(ebx) & LO8(ebx), 0)) goto loc_00180925; /* jle: less or equal (signed <=) */

loc_0018090E: ;
    ecx = 0x771740;
    edx = ZX8(LO8(ebx));

loc_00180916: ;
    if (CMP_NE(MEM32(ecx), eax)) goto loc_0018091F; /* jne: not equal / not zero */

loc_0018091A: ;
    edi = MEM32(eax + 0xC);
    MEM32(ecx) = edi;

loc_0018091F: ;
    ecx = ecx + 4;
    edx--;
    if ((edx != 0)) goto loc_00180916; /* jne: not equal / not zero */

loc_00180925: ;
    ecx = MEM32(eax);
    if (CMP_L(ecx, 2)) goto loc_00180951; /* jl: less (signed <) */

loc_0018092C: ;
    ecx = (uint32_t)((int32_t)ecx * (int32_t)0x70);
    ecx = MEM32(ecx + 0x5906BC);
    if (TEST_Z(ecx, ecx)) goto loc_00180947; /* je: equal / zero */

loc_00180939: ;
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, eax);
    PUSH32(esp, 0); RECOMP_ICALL_SAFE(ecx, _icall_esp); /* indirect call */
    }

loc_0018093C: ;
    SET_LO8(ebx, MEM8(0x771758));
    esp = esp + 4;
    goto loc_00180951;

loc_00180947: ;
    edx = 1;
    PUSH32(esp, 0); sub_000DA5E0(); /* call 0x000DA5E0 */

loc_00180951: ;
    eax = SX8(LO8(ebx));
    eax = MEM32(eax * 4 + 0x771740);
    if (TEST_NZ(eax, eax)) goto loc_001808F0; /* jne: not equal / not zero */

loc_0018095F: ;
    POP32(esp, edi);
    POP32(esp, ebx);

loc_00180961: ;
    esp += 4; return; /* ret */

}

/**
 * sub_00180970
 * Original: 0x00180970 - 0x00180989 (25 bytes, 11 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00180970(void)
{
    int _flags = 0; /* fallback flag var */

loc_00180970: ;
    PUSH32(esp, ebx);
    PUSH32(esp, eax);
    PUSH32(esp, 0x27);
    eax = 0x68;
    PUSH32(esp, 0); sub_000D9C60(); /* call 0x000D9C60 */

loc_0018097E: ;
    ebx = eax;
    esp = esp + 8;
    if (TEST_NZ(ebx, ebx)) { sub_00180989(); return; } /* jne: not equal / not zero */

loc_00180987: ;
    POP32(esp, ebx);
    esp += 4; return; /* ret */

}

/**
 * sub_001809C0
 * Original: 0x001809C0 - 0x00180CB0 (752 bytes, 177 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_001809C0(void)
{
    uint32_t ebp;
    int _flags = 0; /* fallback flag var */
    float xmm0, xmm1, xmm2, xmm3, xmm5, xmm6, xmm7;
    double _fp_stack[8];
    int _fp_top = 0;
    #define fp_push(v) (_fp_stack[--_fp_top & 7] = (v))
    #define fp_pop() (_fp_top++)
    #define fp_popp() (fp_pop())
    #define fp_top() _fp_stack[_fp_top & 7]
    #define fp_st1() _fp_stack[(_fp_top + 1) & 7]
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_001809C0: ;
    esp = esp - 0x38;
    PUSH32(esp, ebx);
    PUSH32(esp, ebp);
    ebp = MEM32(esp + 0x44);
    PUSH32(esp, esi);
    PUSH32(esp, edi);
    SET_LO8(ebx, 0); /* xor self */
    /* nop */

loc_001809D0: ;
    eax = MEM32(0x7FA20C);
    esi = ZX8(LO8(ebx));
    edi = MEM32(ebp + esi * 4 + 0x50);
    edi = edi - eax;
    MEM32(ebp + esi * 4 + 0x50) = edi;
    eax = MEM32(ebp + 0x40);
    (void)0; /* test eax, eax - flags set for next jcc */
    ecx = edi;
    if (TEST_Z(eax, eax)) goto loc_00180C9D; /* je: equal / zero */

loc_001809EF: ;
    edx = MEM32(eax + 0x64);
    if (TEST_Z(edx, edx)) goto loc_00180C9D; /* je: equal / zero */

loc_001809FA: ;
    edx = MEM32(eax + 0x3C8);
    if (TEST_Z(edx, edx)) goto loc_00180C9D; /* je: equal / zero */

loc_00180A08: ;
    SET_LO8(edx, MEM8(eax + 0x10B));
    if (CMP_NE(LO8(edx), MEM8(ebp + 0x44))) goto loc_00180C9D; /* jne: not equal / not zero */

loc_00180A17: ;
    if (CMP_GE(ecx & ecx, 0)) goto loc_00180C9D; /* jge: greater or equal (signed >=) */

loc_00180A1F: ;
    PUSH32(esp, 0); sub_003E2480(); /* call 0x003E2480 */

loc_00180A24: ;
    edx = ((int32_t)eax < 0) ? 0xFFFFFFFF : 0; /* cdq */
    ecx = 0xE;
    { int64_t _dividend = ((int64_t)(int32_t)edx << 32) | eax;
      eax = (uint32_t)((int32_t)(_dividend / (int32_t)ecx));
      edx = (uint32_t)((int32_t)(_dividend % (int32_t)ecx)); }
    xmm2 = MEMF(0x648E90); /* movss */
    xmm5 = 0.0f; /* xorps self = zero */
    edx = edx + 6;
    MEM32(ebp + esi * 4 + 0x50) = edx;
    eax = MEM32(ebp + 0x40);
    edx = esi + esi * 2;
    ecx = eax + edx * 2;
    edx = (uint32_t)(int32_t)SMEM16(ecx + 0x394);
    ecx = (uint32_t)(int32_t)SMEM16(ecx + 0x398);
    xmm0 = (float)(int32_t)edx; /* cvtsi2ss */
    edx = esi + esi * 2 + 0x1CB;
    edx = (uint32_t)(int32_t)SMEM16(eax + edx * 2);
    MEMF(esp + 0x30) = xmm0; /* movss */
    xmm0 = (float)(int32_t)edx; /* cvtsi2ss */
    edx = (uint32_t)(int32_t)SMEM8(eax + 0x3A0);
    eax = (uint32_t)(int32_t)SMEM8(eax + 0x3A2);
    MEMF(esp + 0x34) = xmm0; /* movss */
    xmm0 = (float)(int32_t)ecx; /* cvtsi2ss */
    MEMF(esp + 0x38) = xmm0; /* movss */
    xmm1 = (float)(int32_t)eax; /* cvtsi2ss */
    xmm1 = xmm1 * xmm2; /* mulss */
    xmm0 = (float)(int32_t)edx; /* cvtsi2ss */
    xmm0 = xmm0 * xmm2; /* mulss */
    MEMF(esp + 0x18) = xmm1; /* movss */
    xmm2 = xmm0; /* movaps */
    xmm1 = xmm1 * xmm1; /* mulss */
    xmm2 = xmm2 * xmm0; /* mulss */
    xmm1 = xmm1 + xmm2; /* addss */
    /* ucomiss xmm1, xmm5 - sets EFLAGS */
    /* lahf - load AH from flags (used in FPU compare idiom) */
    (void)0; /* test HI8(eax), 0x44 - flags set for next jcc */
    MEMF(esp + 0x14) = xmm0; /* movss */
    MEMF(esp + 0x10) = xmm1; /* movss */
    if (1 /* jnp after test - parity */) goto loc_00180AF2; /* jnp: not parity */

loc_00180AC6: ;
    fp_push(MEMF(esp + 0x10)); /* fld float */
    fp_top() = sqrt(fp_top()); /* fsqrt */
    /* FPU: fdivr dword ptr [0x648d14] */
    fp_push(MEMF(esp + 0x14)); /* fld float */
    fp_st1() *= fp_top(); fp_pop(); /* fmul */
    MEMF(esp + 0x1C) = (float)fp_top(); fp_popp(); /* fstp */
    xmm5 = MEMF(esp + 0x1C); /* movss */
    fp_st1() *= fp_top(); fp_pop(); /* fmul */
    MEMF(esp + 0x20) = (float)fp_top(); fp_popp(); /* fstp */
    xmm6 = MEMF(esp + 0x20); /* movss */
    goto loc_00180AF5;

loc_00180AF2: ;
    xmm6 = xmm5; /* movaps */

loc_00180AF5: ;
    PUSH32(esp, 0); sub_003E1D70(); /* call 0x003E1D70 */

loc_00180AFA: ;
    xmm7 = xmm0; /* movaps */
    xmm7 = xmm7 * MEMF(0x648E38); /* mulss */
    xmm7 = xmm7 + MEMF(0x648EA0); /* addss */
    PUSH32(esp, 0); sub_003E1D70(); /* call 0x003E1D70 */

loc_00180B12: ;
    xmm0 = xmm0 * MEMF(0x6493A8); /* mulss */
    xmm0 = xmm0 + MEMF(0x5A005C); /* addss */
    MEMF(esp + 0x4C) = xmm0; /* movss */
    PUSH32(esp, 0); sub_003E1D70(); /* call 0x003E1D70 */

loc_00180B2D: ;
    (void)0; /* test LO8(ebx), LO8(ebx) - flags set for next jcc */
    xmm0 = xmm0 * MEMF(0x648E38); /* mulss */
    eax = MEM32(esp + 0x38);
    edx = MEM32(esp + 0x34);
    ecx = MEM32(esp + 0x30);
    xmm0 = xmm0 + MEMF(0x648EA0); /* addss */
    xmm1 = MEMF(0x648CE4); /* movss */
    xmm2 = xmm6; /* movaps */
    xmm0 = xmm0 * xmm5; /* mulss */
    xmm7 = xmm7 * xmm6; /* mulss */
    xmm2 = xmm2 * xmm1; /* mulss */
    MEM32(esp + 0x2C) = eax;
    MEM32(esp + 0x28) = edx;
    MEM32(esp + 0x24) = ecx;
    if (TEST_NZ(LO8(ebx), LO8(ebx))) goto loc_00180BBE; /* jne: not equal / not zero */

loc_00180B70: ;
    xmm2 = xmm2 + MEMF(esp + 0x24); /* addss */
    MEMF(esp + 0x24) = xmm2; /* movss */
    xmm2 = xmm5; /* movaps */
    xmm2 = xmm2 * xmm1; /* mulss */
    xmm1 = MEMF(esp + 0x2C); /* movss */
    xmm1 = xmm1 - xmm2; /* subss */
    MEMF(esp + 0x2C) = xmm1; /* movss */
    xmm1 = MEMF(esp + 0x4C); /* movss */
    MEMF(esp + 0x40) = xmm1; /* movss */
    xmm1 = 0.0f; /* xorps self = zero */
    xmm1 = xmm1 - xmm0; /* subss */
    xmm0 = MEMF(0x648EA4); /* movss */
    xmm5 = xmm5 * xmm0; /* mulss */
    MEMF(esp + 0x44) = xmm1; /* movss */
    xmm5 = xmm5 + xmm7; /* addss */
    goto loc_00180C0A;

loc_00180BBE: ;
    xmm3 = MEMF(esp + 0x24); /* movss */
    xmm3 = xmm3 - xmm2; /* subss */
    xmm2 = xmm5; /* movaps */
    xmm2 = xmm2 * xmm1; /* mulss */
    xmm2 = xmm2 + MEMF(esp + 0x2C); /* addss */
    xmm1 = 0.0f; /* xorps self = zero */
    MEMF(esp + 0x44) = xmm0; /* movss */
    xmm0 = MEMF(0x648EA4); /* movss */
    MEMF(esp + 0x2C) = xmm2; /* movss */
    xmm2 = MEMF(esp + 0x4C); /* movss */
    xmm1 = xmm1 - xmm7; /* subss */
    xmm5 = xmm5 * xmm0; /* mulss */
    MEMF(esp + 0x24) = xmm3; /* movss */
    MEMF(esp + 0x40) = xmm2; /* movss */
    xmm5 = xmm5 + xmm1; /* addss */

loc_00180C0A: ;
    (void)0; /* test LO8(ebx), LO8(ebx) - flags set for next jcc */
    xmm6 = xmm6 * xmm0; /* mulss */
    xmm5 = xmm5 + xmm6; /* addss */
    MEMF(esp + 0x3C) = xmm5; /* movss */
    eax = 0x186;
    if (TEST_NZ(LO8(ebx), LO8(ebx))) goto loc_00180C26; /* jne: not equal / not zero */

loc_00180C21: ;
    eax = 0x196;

loc_00180C26: ;
    PUSH32(esp, 0);
    PUSH32(esp, 0);
    PUSH32(esp, 0);
    PUSH32(esp, 0xFF);
    PUSH32(esp, 0xFF);
    PUSH32(esp, 0xFF);
    PUSH32(esp, 0xFF);
    PUSH32(esp, 0);
    PUSH32(esp, eax);
    PUSH32(esp, 0x299);
    PUSH32(esp, 0x29A);
    PUSH32(esp, 0x3E99999A);
    PUSH32(esp, 0x3F333333);
    PUSH32(esp, 0);
    PUSH32(esp, 0x40A00000);
    PUSH32(esp, 0x3DCCCCCD);
    ecx = esp + 0x64;
    PUSH32(esp, ecx);
    PUSH32(esp, 0);
    edi = esp + 0x84;
    PUSH32(esp, 0); sub_001AF030(); /* call 0x001AF030 */

loc_00180C76: ;
    esp = esp + 0x48;
    if (TEST_Z(eax, eax)) goto loc_00180C9D; /* je: equal / zero */

loc_00180C7D: ;
    xmm0 = MEMF(0x648D20); /* movss */
    MEMF(eax + 0xF8) = xmm0; /* movss */
    xmm0 = MEMF(0x649440); /* movss */
    MEMF(eax + 0xFC) = xmm0; /* movss */

loc_00180C9D: ;
    SET_LO8(ebx, LO8(ebx) + 1);
    if (CMP_B(LO8(ebx), 2)) goto loc_001809D0; /* jb: below (unsigned <) */

loc_00180CA8: ;
    POP32(esp, edi);
    POP32(esp, esi);
    POP32(esp, ebp);
    POP32(esp, ebx);
    esp = esp + 0x38;
    esp += 4; return; /* ret */

    #undef fp_push
    #undef fp_pop
    #undef fp_popp
    #undef fp_top
    #undef fp_st1
}

/**
 * sub_00180FF0
 * Original: 0x00180FF0 - 0x001810FD (269 bytes, 59 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00180FF0(void)
{
    uint32_t ebp;
    int _flags = 0; /* fallback flag var */
    float xmm0;
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_00180FF0: ;
    esp = esp - 0x120;
    PUSH32(esp, ebx);
    PUSH32(esp, ebp);
    PUSH32(esp, esi);
    esi = (int32_t)MEMF(esp + 0x140); /* cvttss2si */
    PUSH32(esp, edi);
    edi = MEM32(esp + 0x134);
    eax = (uint32_t)(int32_t)SMEM8(edi + 0x4D);
    ecx = MEM32(edi + 0x140);
    ebp = MEM32(edi + 0x144);
    eax = eax + eax * 4;
    edx = (int32_t)MEMF(ecx + eax * 4 + 8); /* cvttss2si */
    eax = ecx + eax * 4;
    ecx = (int32_t)MEMF(eax); /* cvttss2si */
    MEM32(esp + 0xF4) = 0;
    MEM16(esp + 0xFE) = 0x100;
    MEM16(esp + 0x100) = LO16(ecx);
    MEM16(esp + 0x102) = LO16(esi);
    MEM16(esp + 0x104) = LO16(edx);
    PUSH32(esp, 0); sub_003E2480(); /* call 0x003E2480 */

loc_0018105C: ;
    edx = ((int32_t)eax < 0) ? 0xFFFFFFFF : 0; /* cdq */
    ecx = 0x15;
    { int64_t _dividend = ((int64_t)(int32_t)edx << 32) | eax;
      eax = (uint32_t)((int32_t)(_dividend / (int32_t)ecx));
      edx = (uint32_t)((int32_t)(_dividend % (int32_t)ecx)); }
    xmm0 = 0.0f; /* xorps self = zero */
    PUSH32(esp, 0xFF);
    MEM16(esp + 0x10E) = LO16(esi);
    PUSH32(esp, 0xFF);
    PUSH32(esp, 0xFF);
    SET_LO8(ebx, LO8(ebx) | 0xFF);
    esi = esp + 0x20;
    MEM8(esp + 0x134) = 0xFF;
    MEM8(esp + 0x12C) = 0x12;
    MEM16(esp + 0x118) = 0xC;
    MEMF(esp + 0x130) = xmm0; /* movss */
    edx = edx + 0x23;
    MEM16(esp + 0x114) = LO16(edx);
    MEM16(esp + 0x112) = LO16(edx);
    PUSH32(esp, 0); sub_000DA2D0(); /* call 0x000DA2D0 */

loc_001810C0: ;
    SET_LO8(edx, MEM8(edi + 4));
    MEM8(esp + 0x1C) = LO8(edx);
    eax = MEM32(esp + 0x1C);
    PUSH32(esp, eax);
    PUSH32(esp, 0x11);
    eax = 0x148;
    PUSH32(esp, 0); sub_000D9C60(); /* call 0x000D9C60 */

loc_001810D8: ;
    esp = esp + 0x14;
    if (TEST_Z(eax, eax)) goto loc_001810E9; /* je: equal / zero */

loc_001810DF: ;
    edi = eax + 0x2C;
    ecx = 0x47;
    memcpy((void*)XBOX_PTR(edi), (void*)XBOX_PTR(esi), ecx * 4);
    esi += ecx * 4; edi += ecx * 4; ecx = 0; /* rep movsd */

loc_001810E9: ;
    POP32(esp, edi);
    POP32(esp, esi);
    MEM8(ebp + 0x2C) = 4;
    POP32(esp, ebp);
    eax = 1;
    POP32(esp, ebx);
    esp = esp + 0x120;
    esp += 4; return; /* ret */

}

/**
 * sub_00181100
 * Original: 0x00181100 - 0x00181293 (403 bytes, 89 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00181100(void)
{
    uint32_t ebp;
    int _flags = 0; /* fallback flag var */
    float xmm0;
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_00181100: ;
    esp = esp - 0x134;
    PUSH32(esp, ebx);
    PUSH32(esp, ebp);
    ebp = MEM32(esp + 0x140);
    eax = MEM32(ebp + 0x144);
    MEM32(esp + 8) = eax;
    eax = (uint32_t)(int32_t)SMEM8(ebp + 0x4D);
    PUSH32(esp, esi);
    esi = (int32_t)MEMF(esp + 0x154); /* cvttss2si */
    PUSH32(esp, edi);
    edi = MEM32(ebp + 0x140);
    ecx = eax + eax * 4;
    edx = (int32_t)MEMF(edi + ecx * 4); /* cvttss2si */
    eax = edi + ecx * 4;
    eax = (int32_t)MEMF(eax + 8); /* cvttss2si */
    MEM32(esp + 0x18) = edi;
    MEM32(esp + 0x108) = 0;
    MEM16(esp + 0x112) = 0x100;
    MEM16(esp + 0x114) = LO16(edx);
    MEM16(esp + 0x116) = LO16(esi);
    MEM16(esp + 0x118) = LO16(eax);
    PUSH32(esp, 0); sub_003E2480(); /* call 0x003E2480 */

loc_00181174: ;
    edx = ((int32_t)eax < 0) ? 0xFFFFFFFF : 0; /* cdq */
    ecx = 0x15;
    { int64_t _dividend = ((int64_t)(int32_t)edx << 32) | eax;
      eax = (uint32_t)((int32_t)(_dividend / (int32_t)ecx));
      edx = (uint32_t)((int32_t)(_dividend % (int32_t)ecx)); }
    xmm0 = 0.0f; /* xorps self = zero */
    PUSH32(esp, 0xFF);
    MEM16(esp + 0x122) = LO16(esi);
    PUSH32(esp, 0xFF);
    PUSH32(esp, 0xFF);
    SET_LO8(ebx, LO8(ebx) | 0xFF);
    esi = esp + 0x34;
    MEM8(esp + 0x148) = 0xFF;
    MEM8(esp + 0x140) = 0x12;
    MEM16(esp + 0x12C) = 0xC;
    MEMF(esp + 0x144) = xmm0; /* movss */
    edx = edx + 0x23;
    MEM16(esp + 0x128) = LO16(edx);
    MEM16(esp + 0x126) = LO16(edx);
    PUSH32(esp, 0); sub_000DA2D0(); /* call 0x000DA2D0 */

loc_001811D8: ;
    SET_LO8(edx, MEM8(ebp + 4));
    MEM8(esp + 0x20) = LO8(edx);
    eax = MEM32(esp + 0x20);
    PUSH32(esp, eax);
    PUSH32(esp, 0x11);
    eax = 0x148;
    PUSH32(esp, 0); sub_000D9C60(); /* call 0x000D9C60 */

loc_001811F0: ;
    esp = esp + 0x14;
    if (TEST_Z(eax, eax)) goto loc_00181205; /* je: equal / zero */

loc_001811F7: ;
    edi = eax + 0x2C;
    ecx = 0x47;
    memcpy((void*)XBOX_PTR(edi), (void*)XBOX_PTR(esi), ecx * 4);
    esi += ecx * 4; edi += ecx * 4; ecx = 0; /* rep movsd */
    edi = MEM32(esp + 0x18);

loc_00181205: ;
    ecx = MEM32(esp + 0x10);
    MEM8(ecx + 0x2C) = 4;
    eax = (uint32_t)(int32_t)SMEM8(ebp + 0x4D);
    edx = eax + eax * 4;
    xmm0 = MEMF(edi + edx * 4); /* movss */
    eax = edi + edx * 4;
    MEMF(esp + 0x1C) = xmm0; /* movss */
    xmm0 = MEMF(esp + 0x158); /* movss */
    MEMF(esp + 0x20) = xmm0; /* movss */
    xmm0 = MEMF(eax + 8); /* movss */
    MEMF(esp + 0x24) = xmm0; /* movss */
    PUSH32(esp, 0); sub_00141960(); /* call 0x00141960 */

loc_00181241: ;
    MEM8(esp + 0x10) = LO8(eax);
    eax = 0; /* xor self */
    SET_LO8(eax, MEM8(ebp + 4));
    PUSH32(esp, eax);
    PUSH32(esp, 0xFF);
    PUSH32(esp, 0); sub_003E1D70(); /* call 0x003E1D70 */

loc_00181255: ;
    xmm0 = xmm0 * MEMF(0x6490B8); /* mulss */
    xmm0 = xmm0 + MEMF(0x648EA4); /* addss */
    edi = MEM32(esp + 0x164);
    PUSH32(esp, ecx);
    ecx = MEM32(esp + 0x1C);
    MEMF(esp) = xmm0; /* movss */
    PUSH32(esp, ecx);
    esi = esp + 0x2C;
    PUSH32(esp, 0); sub_00144690(); /* call 0x00144690 */

loc_00181280: ;
    esp = esp + 0x10;
    POP32(esp, edi);
    POP32(esp, esi);
    POP32(esp, ebp);
    eax = 1;
    POP32(esp, ebx);
    esp = esp + 0x134;
    esp += 4; return; /* ret */

}

/**
 * sub_001812A0
 * Original: 0x001812A0 - 0x001812FB (91 bytes, 36 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_001812A0(void)
{
    int _flags = 0; /* fallback flag var */

loc_001812A0: ;
    eax = MEM32(esp + 0xC);
    (void)0; /* cmp eax, 0x2D - flags set for next jcc */
    PUSH32(esp, esi);
    if (CMP_NE(eax, 0x2D)) goto loc_001812D9; /* jne: not equal / not zero */

loc_001812AA: ;
    eax = MEM32(esp + 8);
    ecx = MEM32(esp + 0xC);
    edx = MEM32(eax + 0x40);
    esi = MEM32(ecx);
    if (CMP_NE(edx, esi)) goto loc_001812C9; /* jne: not equal / not zero */

loc_001812BB: ;
    edx = MEM32(ecx + 4);
    MEM32(eax + 0x40) = edx;
    SET_LO8(ecx, MEM8(ecx + 9));
    MEM8(eax + 0x44) = LO8(ecx);
    POP32(esp, esi);
    esp += 4; return; /* ret */

loc_001812C9: ;
    if (CMP_NE(edx, MEM32(ecx + 4))) goto loc_001812F9; /* jne: not equal / not zero */

loc_001812CE: ;
    MEM32(eax + 0x40) = esi;
    SET_LO8(edx, MEM8(ecx + 8));
    MEM8(eax + 0x44) = LO8(edx);
    POP32(esp, esi);
    esp += 4; return; /* ret */

loc_001812D9: ;
    if (TEST_NZ(eax, eax)) goto loc_001812F9; /* jne: not equal / not zero */

loc_001812DD: ;
    eax = MEM32(esp + 0xC);
    esi = MEM32(esp + 8);
    ecx = MEM32(eax);
    if (CMP_EQ(ecx, MEM32(esi + 0x40))) goto loc_001812F4; /* je: equal / zero */

loc_001812EC: ;
    SET_LO8(edx, MEM8(eax + 4));
    if (CMP_NE(LO8(edx), MEM8(esi + 0x44))) goto loc_001812F9; /* jne: not equal / not zero */

loc_001812F4: ;
    PUSH32(esp, 0); sub_000DADD0(); /* call 0x000DADD0 */

loc_001812F9: ;
    POP32(esp, esi);
    esp += 4; return; /* ret */

}

/**
 * sub_00181300
 * Original: 0x00181300 - 0x00181619 (793 bytes, 216 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00181300(void)
{
    uint32_t ebp;
    int _flags = 0; /* fallback flag var */
    float xmm0, xmm1, xmm2;

loc_00181300: ;
    PUSH32(esp, ebp);
    ebp = esp;
    esp = esp & 0xFFFFFFF0u;
    esp = esp - 0x114;
    PUSH32(esp, ebx);
    ebx = eax;
    (void)0; /* test ebx, ebx - flags set for next jcc */
    PUSH32(esp, esi);
    PUSH32(esp, edi);
    if (TEST_Z(ebx, ebx)) goto loc_00181612; /* je: equal / zero */

loc_00181319: ;
    eax = MEM32(ebx + 0x64);
    if (TEST_Z(eax, eax)) goto loc_00181612; /* je: equal / zero */

loc_00181324: ;
    ecx = MEM32(ebx + 0x3C8);
    if (TEST_Z(ecx, ecx)) goto loc_00181612; /* je: equal / zero */

loc_00181332: ;
    if (CMP_EQ(eax, 8)) goto loc_00181612; /* je: equal / zero */

loc_0018133B: ;
    eax = MEM32(0x84A148);
    ecx = MEM32(0x8470DC);
    eax = (uint32_t)((int32_t)eax * (int32_t)0x770);
    xmm0 = MEMF(eax + ecx + 0x3BC); /* movss */
    eax = ZX8(MEM8(ebp + 8));
    eax = eax - 0;
    xmm0 = xmm0 * MEMF(0x649220); /* mulss */
    edx = (int32_t)xmm0; /* cvttss2si */
    MEM32(esp + 0x24) = edx;
    if ((eax == 0)) goto loc_0018137C; /* je: equal / zero */

loc_0018136E: ;
    eax--;
    if ((eax != 0)) goto loc_00181612; /* jne: not equal / not zero */

loc_00181375: ;
    PUSH32(esp, 0x5F35E4);
    goto loc_00181381;

loc_0018137C: ;
    PUSH32(esp, 0x5F3638);

loc_00181381: ;
    eax = ebx;
    PUSH32(esp, 0); sub_002F77D0(); /* call 0x002F77D0 */

loc_00181388: ;
    esp = esp + 4;
    esi = esp + 0x18;
    edx = ebx;
    PUSH32(esp, 0); sub_002F7940(); /* call 0x002F7940 */

loc_00181396: ;
    xmm0 = MEMF(ebx + 0x294); /* movss */
    PUSH32(esp, 5);
    esi = 0x4022;
    MEMF(esp + 0x20) = xmm0; /* movss */
    PUSH32(esp, 0); sub_00110990(); /* call 0x00110990 */

loc_001813B0: ;
    eax = (int32_t)MEMF(esp + 0x24); /* cvttss2si */
    ecx = (int32_t)MEMF(esp + 0x1C); /* cvttss2si */
    edi = (int32_t)MEMF(esp + 0x20); /* cvttss2si */
    PUSH32(esp, 0x96);
    PUSH32(esp, 0);
    PUSH32(esp, 0x12);
    PUSH32(esp, 0x19);
    PUSH32(esp, eax);
    SET_LO8(eax, MEM8(ebp + 0xC));
    PUSH32(esp, ecx);
    edi = edi + 6;
    PUSH32(esp, 0xFFFFFFFFu);
    PUSH32(esp, 0); sub_000DF0E0(); /* call 0x000DF0E0 */

loc_001813DC: ;
    edx = MEM32(ebp + 0xC);
    edi = MEM32(esp + 0x44);
    esp = esp + 0x20;
    PUSH32(esp, edx);
    PUSH32(esp, 0);
    PUSH32(esp, 0);
    esi = edi + -60;
    PUSH32(esp, 0);
    edi = edi + 0x3C;
    PUSH32(esp, 5);
    MEM32(esp + 0x40) = esi;
    MEM32(esp + 0x3C) = edi;
    PUSH32(esp, 0); sub_003E2480(); /* call 0x003E2480 */

loc_00181402: ;
    edx = ((int32_t)eax < 0) ? 0xFFFFFFFF : 0; /* cdq */
    ecx = 0xB;
    { int64_t _dividend = ((int64_t)(int32_t)edx << 32) | eax;
      eax = (uint32_t)((int32_t)(_dividend / (int32_t)ecx));
      edx = (uint32_t)((int32_t)(_dividend % (int32_t)ecx)); }
    edx = edx + 0x1E;
    PUSH32(esp, edx);
    PUSH32(esp, edi);
    PUSH32(esp, 0); sub_003E1D70(); /* call 0x003E1D70 */

loc_00181414: ;
    xmm0 = xmm0 * MEMF(0x648F08); /* mulss */
    xmm0 = xmm0 + MEMF(0x6490B8); /* addss */
    edx = MEM32(esp + 0x3C);
    eax = MEM32(esp + 0x38);
    PUSH32(esp, ecx);
    ecx = MEM32(esp + 0x38);
    MEMF(esp) = xmm0; /* movss */
    PUSH32(esp, edx);
    PUSH32(esp, eax);
    PUSH32(esp, ecx);
    eax = esi;
    PUSH32(esp, 0); sub_00112C50(); /* call 0x00112C50 */

loc_00181440: ;
    esp = esp + 0x2C;
    edx = ebx;
    eax = esp + 0x70;
    PUSH32(esp, 0); sub_002A0430(); /* call 0x002A0430 */

loc_0018144E: ;
    xmm0 = MEMF(esp + 0x18); /* movss */
    xmm1 = MEMF(0x648EA4); /* movss */
    MEMF(esp + 0x64) = xmm0; /* movss */
    xmm0 = MEMF(esp + 0x1C); /* movss */
    PUSH32(esp, 0);
    xmm2 = xmm0; /* movaps */
    PUSH32(esp, ecx);
    xmm2 = xmm2 + xmm1; /* addss */
    xmm0 = xmm0 - xmm1; /* subss */
    MEMF(esp + 0x70) = xmm2; /* movss */
    xmm2 = MEMF(esp + 0x28); /* movss */
    MEMF(esp) = xmm0; /* movss */
    PUSH32(esp, 0);
    esi = eax;
    edi = esp + 0x70;
    MEMF(esp + 0x78) = xmm2; /* movss */
    PUSH32(esp, 0); sub_002A0180(); /* call 0x002A0180 */

loc_0018149A: ;
    esp = esp + 0xC;
    if (TEST_Z(LO8(eax), LO8(eax))) goto loc_001815BA; /* je: equal / zero */

loc_001814A5: ;
    PUSH32(esp, 0); sub_003E1D70(); /* call 0x003E1D70 */

loc_001814AA: ;
    xmm1 = xmm0; /* movaps */
    xmm0 = MEMF(0x5A005C); /* movss */
    xmm1 = xmm1 * xmm0; /* mulss */
    xmm1 = xmm1 + xmm0; /* addss */
    xmm0 = 0.0f; /* xorps self = zero */
    MEMF(esp + 0x24) = xmm1; /* movss */
    MEM32(esp + 0x60) = 0x303;
    MEM32(esp + 0x38) = 0x2A;
    MEM8(esp + 0x3C) = 0;
    MEM32(esp + 0x30) = 0x7740;
    MEM16(esp + 0x34) = 0x12C;
    MEMF(esp + 0x40) = xmm0; /* movss */
    PUSH32(esp, 0); sub_003E1D70(); /* call 0x003E1D70 */

loc_001814F5: ;
    edx = MEM32(ebp + 0xC);
    xmm0 = xmm0 * MEMF(0x648CE4); /* mulss */
    xmm0 = xmm0 + MEMF(0x64908C); /* addss */
    SET_LO8(eax, 0xFF);
    PUSH32(esp, edx);
    MEMF(esp + 0x48) = xmm0; /* movss */
    xmm0 = MEMF(0x6491DC); /* movss */
    PUSH32(esp, 4);
    MEM8(esp + 0x50) = LO8(eax);
    MEM8(esp + 0x51) = LO8(eax);
    MEMF(esp + 0x64) = xmm0; /* movss */
    MEM8(esp + 0x52) = 0;
    MEM8(esp + 0x53) = 0;
    MEM8(esp + 0x54) = 0;
    MEM8(esp + 0x55) = LO8(eax);
    MEM8(esp + 0x56) = 0;
    MEM8(esp + 0x57) = 0xD;
    MEM8(esp + 0x5C) = LO8(eax);
    MEM32(esp + 0x58) = 0;
    PUSH32(esp, 0); sub_003E2480(); /* call 0x003E2480 */

loc_00181557: ;
    ebx = eax;
    SET_LO8(ebx, LO8(ebx) & 1);
    SET_LO8(ebx, LO8(ebx) << 1);
    PUSH32(esp, 0); sub_003E2480(); /* call 0x003E2480 */

loc_00181563: ;
    SET_LO8(eax, LO8(eax) & 1);
    SET_LO8(ebx, LO8(ebx) + LO8(eax));
    PUSH32(esp, ebx);
    PUSH32(esp, 0); sub_003E2480(); /* call 0x003E2480 */

loc_0018156D: ;
    ecx = MEM32(esp + 0x7C);
    edx = MEM32(esp + 0x24);
    PUSH32(esp, eax);
    eax = MEM32(esp + 0x34);
    PUSH32(esp, eax);
    PUSH32(esp, eax);
    eax = MEM32(esp + 0x38);
    PUSH32(esp, eax);
    PUSH32(esp, ecx);
    PUSH32(esp, edx);
    eax = esp + 0xA4;
    PUSH32(esp, eax);
    PUSH32(esp, 0);
    PUSH32(esp, 0);
    eax = esp + 0x60;
    PUSH32(esp, 0); sub_0014FA50(); /* call 0x0014FA50 */

loc_00181598: ;
    esi = eax;
    esp = esp + 0x30;
    if (TEST_Z(esi, esi)) goto loc_001815BA; /* je: equal / zero */

loc_001815A1: ;
    edi = MEM32(0x849430);
    PUSH32(esp, 1);
    PUSH32(esp, 0); sub_001376A0(); /* call 0x001376A0 */

loc_001815AE: ;
    esp = esp + 4;
    if (TEST_NZ(eax, eax)) goto loc_001815BA; /* jne: not equal / not zero */

loc_001815B5: ;
    PUSH32(esp, 0); sub_000DADD0(); /* call 0x000DADD0 */

loc_001815BA: ;
    ecx = MEM32(ebp + 0xC);
    PUSH32(esp, ecx);
    PUSH32(esp, 0);
    PUSH32(esp, 0);
    PUSH32(esp, 0);
    PUSH32(esp, 6);
    PUSH32(esp, 0); sub_003E2480(); /* call 0x003E2480 */

loc_001815CB: ;
    edx = ((int32_t)eax < 0) ? 0xFFFFFFFF : 0; /* cdq */
    ecx = 7;
    { int64_t _dividend = ((int64_t)(int32_t)edx << 32) | eax;
      eax = (uint32_t)((int32_t)(_dividend / (int32_t)ecx));
      edx = (uint32_t)((int32_t)(_dividend % (int32_t)ecx)); }
    edx = edx + 6;
    PUSH32(esp, edx);
    edx = MEM32(esp + 0x40);
    PUSH32(esp, edx);
    PUSH32(esp, 0); sub_003E1D70(); /* call 0x003E1D70 */

loc_001815E1: ;
    xmm0 = xmm0 * MEMF(0x6490B8); /* mulss */
    xmm0 = xmm0 + MEMF(0x648E38); /* addss */
    eax = MEM32(esp + 0x3C);
    edx = MEM32(esp + 0x34);
    PUSH32(esp, ecx);
    ecx = MEM32(esp + 0x3C);
    MEMF(esp) = xmm0; /* movss */
    PUSH32(esp, eax);
    eax = MEM32(esp + 0x50);
    PUSH32(esp, ecx);
    PUSH32(esp, edx);
    PUSH32(esp, 0); sub_00112C50(); /* call 0x00112C50 */

loc_0018160F: ;
    esp = esp + 0x2C;

loc_00181612: ;
    POP32(esp, edi);
    POP32(esp, esi);
    POP32(esp, ebx);
    esp = ebp;
    POP32(esp, ebp);
    esp += 4; return; /* ret */

}

/**
 * sub_00181620
 * Original: 0x00181620 - 0x00181646 (38 bytes, 14 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00181620(void)
{
    uint32_t ebp;
    int _flags = 0; /* fallback flag var */
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_00181620: ;
    ecx = MEM32(esp + 0x24);
    eax = 0; /* xor self */
    SET_LO8(eax, LO8(ecx));
    SET_LO8(eax, LO8(eax) - 0x40);
    SET_LO8(edx, LO8(eax));
    esp = esp - 0x84;
    SET_LO8(edx, LO8(edx) & 0xC0);
    (void)0; /* test LO8(eax), 0x40 - flags set for next jcc */
    PUSH32(esp, esi);
    if (TEST_Z(LO8(eax), 0x40)) { sub_00181646(); return; } /* je: equal / zero */

loc_0018163A: ;
    eax = eax & 0x3F;
    esi = 0x40;
    esi = esi - eax;
    g_seh_ebp = ebp; sub_0018164B(); return; /* tail jmp 0x0018164B */

}

/**
 * sub_00181910
 * Original: 0x00181910 - 0x00181939 (41 bytes, 8 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00181910(void)
{

loc_00181910: ;
    eax = MEM32(esp + 4);
    MEM32(eax + 0x34) = MEM32(eax + 0x34) | 1;
    ecx = 0x32;
    MEM16(eax + 0x38) = LO16(ecx);
    MEM16(eax + 0x10C) = LO16(ecx);
    MEM16(eax + 0x10E) = 5;
    MEM8(eax + 0xD9) = 6;
    esp += 4; return; /* ret */

}

/**
 * sub_00181940
 * Original: 0x00181940 - 0x0018196E (46 bytes, 12 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00181940(void)
{
    int _flags = 0; /* fallback flag var */

loc_00181940: ;
    ecx = MEM32(esp + 4);
    SET_LO16(edx, MEM16(ecx + 0x38));
    if (CMP_GE(LO16(edx), MEM16(ecx + 0x10C))) goto loc_00181968; /* jge: greater or equal (signed >=) */

loc_00181951: ;
    SET_LO16(eax, MEM16(ecx + 0x10E));
    SET_LO16(eax, (uint32_t)((int32_t)LO16(eax) * (int32_t)LO16(edx)));
    edx = ZX8(MEM8(ecx + 0x4C));
    if (CMP_GE(LO16(eax), LO16(edx))) goto loc_00181968; /* jge: greater or equal (signed >=) */

loc_00181965: ;
    MEM8(ecx + 0x4C) = LO8(eax);

loc_00181968: ;
    eax = 1;
    esp += 4; return; /* ret */

}

/**
 * sub_00181970
 * Original: 0x00181970 - 0x00181997 (39 bytes, 15 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00181970(void)
{
    uint32_t ebp;
    int _flags = 0; /* fallback flag var */
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_00181970: ;
    ecx = MEM32(esp + 0x24);
    eax = 0; /* xor self */
    SET_LO8(eax, LO8(ecx));
    SET_LO8(eax, LO8(eax) - 0x40);
    esp = esp - 0xDC;
    SET_LO8(edx, LO8(eax));
    PUSH32(esp, ebx);
    SET_LO8(edx, LO8(edx) & 0xC0);
    (void)0; /* test LO8(eax), 0x40 - flags set for next jcc */
    PUSH32(esp, esi);
    if (TEST_Z(LO8(eax), 0x40)) { sub_00181997(); return; } /* je: equal / zero */

loc_0018198B: ;
    eax = eax & 0x3F;
    esi = 0x40;
    esi = esi - eax;
    g_seh_ebp = ebp; sub_0018199C(); return; /* tail jmp 0x0018199C */

}

/**
 * sub_00181CA0
 * Original: 0x00181CA0 - 0x00181CC1 (33 bytes, 10 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00181CA0(void)
{
    int _flags = 0; /* fallback flag var */

loc_00181CA0: ;
    PUSH32(esp, 0xFF);
    PUSH32(esp, 0x25);
    eax = 0x44;
    PUSH32(esp, 0); sub_000D9C60(); /* call 0x000D9C60 */

loc_00181CB1: ;
    ecx = 0; /* xor self */
    esp = esp + 8;
    if (CMP_NE(eax, ecx)) { sub_00181CC1(); return; } /* jne: not equal / not zero */

loc_00181CBA: ;
    MEM32(0x849430) = ecx;
    esp += 4; return; /* ret */

}

/**
 * sub_00181CF0
 * Original: 0x00181CF0 - 0x001820A5 (949 bytes, 266 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00181CF0(void)
{
    uint32_t ebp;
    int _flags = 0; /* fallback flag var */
    float xmm0, xmm1, xmm2, xmm6;
    double _fp_stack[8];
    int _fp_top = 0;
    #define fp_push(v) (_fp_stack[--_fp_top & 7] = (v))
    #define fp_pop() (_fp_top++)
    #define fp_popp() (fp_pop())
    #define fp_top() _fp_stack[_fp_top & 7]
    #define fp_st1() _fp_stack[(_fp_top + 1) & 7]

loc_00181CF0: ;
    PUSH32(esp, ebp);
    ebp = esp;
    esp = esp & 0xFFFFFFF0u;
    esp = esp - 0xE4;
    PUSH32(esp, ebx);
    ebx = MEM32(ebp + 0xC);
    PUSH32(esp, esi);
    esi = MEM32(ebp + 8);
    (void)0; /* test esi, esi - flags set for next jcc */
    PUSH32(esp, edi);
    if (TEST_Z(esi, esi)) goto loc_0018209E; /* je: equal / zero */

loc_00181D0D: ;
    if (CMP_EQ(MEM8(0x76F0E0), 1)) goto loc_00181D4D; /* je: equal / zero */

loc_00181D16: ;
    eax = MEM32(0x847024);
    ecx = MEM32(eax + 0x40);
    PUSH32(esp, 0xBF800000u);
    PUSH32(esp, esi);
    PUSH32(esp, 0x2BB);
    PUSH32(esp, ecx);
    eax = 0; /* xor self */
    PUSH32(esp, 0); sub_00024FA0(); /* call 0x00024FA0 */

loc_00181D31: ;
    edx = MEM32(0x847024);
    eax = MEM32(edx + 0x40);
    PUSH32(esp, 0xBF800000u);
    PUSH32(esp, esi);
    PUSH32(esp, 0x2BA);
    PUSH32(esp, eax);
    eax = 0; /* xor self */
    PUSH32(esp, 0); sub_00024FA0(); /* call 0x00024FA0 */

loc_00181D4D: ;
    xmm0 = MEMF(esi + 0x78); /* movss */
    xmm6 = MEMF(esi + 0x7C); /* movss */
    xmm6 = xmm6 + MEMF(0x64908C); /* addss */
    xmm1 = MEMF(esi + 0x80); /* movss */
    MEMF(esp + 0x1C) = xmm0; /* movss */
    MEMF(esp + 0x28) = xmm0; /* movss */
    xmm0 = xmm6; /* movaps */
    xmm0 = xmm0 + MEMF(0x648EA4); /* addss */
    edx = esi;
    eax = esp + 0x40;
    MEMF(esp + 0x20) = xmm6; /* movss */
    MEMF(esp + 0x24) = xmm1; /* movss */
    MEM8(esp + 0x1B) = 0;
    MEMF(esp + 0x2C) = xmm0; /* movss */
    MEMF(esp + 0x30) = xmm1; /* movss */
    PUSH32(esp, 0); sub_002A0430(); /* call 0x002A0430 */

loc_00181DA6: ;
    xmm6 = xmm6 - MEMF(0x5A005C); /* subss */
    PUSH32(esp, 0);
    PUSH32(esp, ecx);
    MEMF(esp) = xmm6; /* movss */
    PUSH32(esp, 0);
    esi = eax;
    edi = esp + 0x34;
    PUSH32(esp, 0); sub_002A0180(); /* call 0x002A0180 */

loc_00181DC3: ;
    esp = esp + 0xC;
    if (TEST_Z(LO8(eax), LO8(eax))) goto loc_00181E69; /* je: equal / zero */

loc_00181DCE: ;
    if (TEST_Z(MEM8(esp + 0xE4), 1)) goto loc_00181E69; /* je: equal / zero */

loc_00181DDC: ;
    xmm0 = MEMF(esp + 0x28); /* movss */
    PUSH32(esp, ebx);
    PUSH32(esp, 0);
    MEMF(esp + 0x3C) = xmm0; /* movss */
    xmm0 = MEMF(esp + 0x48); /* movss */
    xmm0 = xmm0 + MEMF(0x648D14); /* addss */
    PUSH32(esp, 0);
    PUSH32(esp, 0);
    MEMF(esp + 0x48) = xmm0; /* movss */
    xmm0 = MEMF(esp + 0x40); /* movss */
    PUSH32(esp, 0);
    MEMF(esp + 0x50) = xmm0; /* movss */
    MEM8(esp + 0x2F) = 1;
    PUSH32(esp, 0); sub_003E2480(); /* call 0x003E2480 */

loc_00181E1B: ;
    edx = ((int32_t)eax < 0) ? 0xFFFFFFFF : 0; /* cdq */
    ecx = 0x12E;
    { int64_t _dividend = ((int64_t)(int32_t)edx << 32) | eax;
      eax = (uint32_t)((int32_t)(_dividend / (int32_t)ecx));
      edx = (uint32_t)((int32_t)(_dividend % (int32_t)ecx)); }
    esi = edx;
    edx = esp + 0x64;
    PUSH32(esp, edx);
    esi = esi + 0x1F4;
    PUSH32(esp, 0); sub_003E2480(); /* call 0x003E2480 */

loc_00181E35: ;
    edx = ((int32_t)eax < 0) ? 0xFFFFFFFF : 0; /* cdq */
    ecx = 0x65;
    { int64_t _dividend = ((int64_t)(int32_t)edx << 32) | eax;
      eax = (uint32_t)((int32_t)(_dividend / (int32_t)ecx));
      edx = (uint32_t)((int32_t)(_dividend % (int32_t)ecx)); }
    SET_LO8(edx, LO8(edx) - LO8(ecx));
    PUSH32(esp, edx);
    PUSH32(esp, 0); sub_003E1D70(); /* call 0x003E1D70 */

loc_00181E45: ;
    xmm0 = xmm0 * MEMF(0x649020); /* mulss */
    xmm0 = xmm0 + MEMF(0x64A4A8); /* addss */
    PUSH32(esp, ecx);
    eax = esi;
    esi = esp + 0x54;
    MEMF(esp) = xmm0; /* movss */
    PUSH32(esp, 0); sub_00187F50(); /* call 0x00187F50 */

loc_00181E66: ;
    esp = esp + 0x20;

loc_00181E69: ;
    xmm0 = MEMF(0x64A200); /* movss */
    PUSH32(esp, 0x14);
    PUSH32(esp, 0xF);
    PUSH32(esp, 0x3A8163D3);
    PUSH32(esp, 0x447D4000);
    eax = esp + 0x2C;
    PUSH32(esp, 0); sub_0019B600(); /* call 0x0019B600 */

loc_00181E88: ;
    xmm2 = MEMF(0x64A59C); /* movss */
    xmm1 = MEMF(0x64A598); /* movss */
    xmm0 = MEMF(0x64A200); /* movss */
    PUSH32(esp, ebx);
    PUSH32(esp, 5);
    eax = esp + 0x34;
    PUSH32(esp, 0); sub_0019B530(); /* call 0x0019B530 */

loc_00181EAC: ;
    PUSH32(esp, ebx);
    eax = esp + 0x38;
    PUSH32(esp, 0); sub_0019B6C0(); /* call 0x0019B6C0 */

loc_00181EB6: ;
    edx = esp + 0x38;
    PUSH32(esp, ebx);
    PUSH32(esp, edx);
    PUSH32(esp, 0); sub_0019A300(); /* call 0x0019A300 */

loc_00181EC1: ;
    SET_LO8(eax, MEM8(esp + 0x3F));
    esp = esp + 0x24;
    (void)0; /* test LO8(eax), LO8(eax) - flags set for next jcc */
    esi = esp + 0x34;
    if (TEST_NZ(LO8(eax), LO8(eax))) goto loc_00181ED4; /* jne: not equal / not zero */

loc_00181ED0: ;
    esi = esp + 0x1C;

loc_00181ED4: ;
    PUSH32(esp, 0x43FA0000);
    PUSH32(esp, 0); sub_003E1D70(); /* call 0x003E1D70 */

loc_00181EDE: ;
    xmm0 = xmm0 + MEMF(0x648CE0); /* addss */
    PUSH32(esp, ecx);
    MEMF(esp) = xmm0; /* movss */
    xmm0 = MEMF(0x6493C0); /* movss */
    SET_LO8(edx, LO8(ebx));
    eax = esi;
    PUSH32(esp, 0); sub_00188230(); /* call 0x00188230 */

loc_00181EFD: ;
    esp = esp + 8;
    PUSH32(esp, ebx);
    PUSH32(esp, 0); sub_003E2480(); /* call 0x003E2480 */

loc_00181F06: ;
    edx = ((int32_t)eax < 0) ? 0xFFFFFFFF : 0; /* cdq */
    ecx = 0x38;
    { int64_t _dividend = ((int64_t)(int32_t)edx << 32) | eax;
      eax = (uint32_t)((int32_t)(_dividend / (int32_t)ecx));
      edx = (uint32_t)((int32_t)(_dividend % (int32_t)ecx)); }
    PUSH32(esp, ecx);
    edx = edx + 0xC8;
    xmm0 = (float)(int32_t)edx; /* cvtsi2ss */
    MEMF(esp) = xmm0; /* movss */
    PUSH32(esp, 0); sub_003E1D70(); /* call 0x003E1D70 */

loc_00181F23: ;
    xmm6 = 0.0f; /* xorps self = zero */
    xmm1 = xmm0; /* movaps */
    xmm1 = xmm1 * MEMF(0x64A03C); /* mulss */
    xmm1 = xmm1 + MEMF(0x648EA8); /* addss */
    xmm0 = MEMF(0x64B008); /* movss */
    esi = esp + 0x24;
    PUSH32(esp, 0); sub_000F5D70(); /* call 0x000F5D70 */

loc_00181F4A: ;
    PUSH32(esp, ebx);
    ebx = MEM32(ebp + 8);
    PUSH32(esp, 1);
    PUSH32(esp, 1);
    PUSH32(esp, ebx);
    PUSH32(esp, 0);
    PUSH32(esp, 0); sub_000B2100(); /* call 0x000B2100 */

loc_00181F5A: ;
    edx = MEM32(esp + 0x3C);
    eax = MEM32(esp + 0x40);
    edi = MEM32(esp + 0x38);
    MEM32(esp + 0x48) = edx;
    xmm0 = MEMF(esp + 0x48); /* movss */
    xmm0 = xmm0 + MEMF(0x64908C); /* addss */
    esp = esp + 0x1C;
    MEM32(esp + 0x28) = edi;
    MEM32(esp + 0x30) = eax;
    MEMF(esp + 0x2C) = xmm0; /* movss */
    PUSH32(esp, 0); sub_002CB1D0(); /* call 0x002CB1D0 */

loc_00181F8E: ;
    ecx = MEM32(eax);
    eax = MEM32(ecx + 0xC);
    if (CMP_EQ(eax, ecx)) goto loc_00181FA5; /* je: equal / zero */

loc_00181F97: ;
    edx = MEM32(eax + 4);
    if (TEST_Z(edx, edx)) goto loc_00181FA7; /* je: equal / zero */

loc_00181F9E: ;
    eax = MEM32(eax + 0xC);
    if (CMP_NE(eax, ecx)) goto loc_00181F97; /* jne: not equal / not zero */

loc_00181FA5: ;
    eax = ecx;

loc_00181FA7: ;
    if (CMP_NE(eax, ecx)) goto loc_00181FAF; /* jne: not equal / not zero */

loc_00181FAB: ;
    eax = 0; /* xor self */
    goto loc_00181FB1;

loc_00181FAF: ;
    eax = MEM32(eax);

loc_00181FB1: ;
    esi = MEM32(eax);
    if (TEST_Z(esi, esi)) goto loc_00182016; /* je: equal / zero */

loc_00181FB7: ;
    SET_LO8(eax, MEM8(esi + 6));
    if (TEST_NZ(LO8(eax), LO8(eax))) goto loc_00181FDA; /* jne: not equal / not zero */

loc_00181FBE: ;
    SET_LO8(eax, MEM8(0x7819D5));
    if (TEST_NZ(LO8(eax), LO8(eax))) goto loc_00181FDA; /* jne: not equal / not zero */

loc_00181FC7: ;
    eax = 0x14;
    MEM16(0x743E3E) = LO16(eax);
    MEM16(0x743E0E) = LO16(eax);
    goto loc_00182010;

loc_00181FDA: ;
    fp_push(MEMF(esi + 0x10)); /* fld float */
    fp_st1() *= fp_top(); fp_pop(); /* fmul */
    PUSH32(esp, 0); sub_00471288(); /* call 0x00471288 */

loc_00181FE8: ;
    MEM16(0x743E3E) = LO16(eax);
    fp_push(MEMF(esi + 0x14)); /* fld float */
    fp_st1() *= fp_top(); fp_pop(); /* fmul */
    PUSH32(esp, 0); sub_00471288(); /* call 0x00471288 */

loc_00181FFC: ;
    MEM16(0x743E0E) = LO16(eax);
    fp_push(MEMF(esi + 0x1C)); /* fld float */
    fp_st1() *= fp_top(); fp_pop(); /* fmul */
    PUSH32(esp, 0); sub_00471288(); /* call 0x00471288 */

loc_00182010: ;
    MEM16(0x744B5E) = LO16(eax);

loc_00182016: ;
    esi = MEM32(0x7FDBA8);
    edx = MEM32(esp + 0x24);
    eax = MEM32(esp + 0x20);
    PUSH32(esp, 0);
    PUSH32(esp, ebx);
    PUSH32(esp, 0);
    ecx = esp + 0x34;
    PUSH32(esp, ecx);
    PUSH32(esp, 0);
    esi++;
    MEM32(0x7FDBA8) = esi;
    esi = ZX16(MEM16(ebx + 0x60));
    PUSH32(esp, 0);
    PUSH32(esp, esi);
    PUSH32(esp, 0x16);
    PUSH32(esp, edx);
    PUSH32(esp, eax);
    PUSH32(esp, edi);
    MEM8(0x7FDBAC) = 1;
    PUSH32(esp, 0); sub_002F0930(); /* call 0x002F0930 */

loc_0018204F: ;
    edx = MEM32(esp + 0x50);
    eax = MEM32(esp + 0x4C);
    PUSH32(esp, 0);
    PUSH32(esp, ebx);
    PUSH32(esp, 0);
    ecx = esp + 0x60;
    PUSH32(esp, ecx);
    PUSH32(esp, 0);
    PUSH32(esp, 0);
    PUSH32(esp, esi);
    PUSH32(esp, 0x15);
    PUSH32(esp, edx);
    PUSH32(esp, eax);
    PUSH32(esp, edi);
    PUSH32(esp, 0); sub_002F0930(); /* call 0x002F0930 */

loc_00182070: ;
    edx = MEM32(esp + 0x7C);
    eax = MEM32(esp + 0x78);
    esp = esp + 0x58;
    PUSH32(esp, 0);
    PUSH32(esp, ebx);
    PUSH32(esp, 0);
    ecx = esp + 0x34;
    PUSH32(esp, ecx);
    PUSH32(esp, 0);
    PUSH32(esp, 0);
    PUSH32(esp, esi);
    PUSH32(esp, 0x5C);
    PUSH32(esp, edx);
    PUSH32(esp, eax);
    PUSH32(esp, edi);
    PUSH32(esp, 0); sub_002F0930(); /* call 0x002F0930 */

loc_00182094: ;
    esp = esp + 0x2C;
    MEM8(0x7FDBAC) = 0;

loc_0018209E: ;
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
 * sub_001820B0
 * Original: 0x001820B0 - 0x001820E3 (51 bytes, 15 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_001820B0(void)
{
    int _flags = 0; /* fallback flag var */

loc_001820B0: ;
    eax = MEM32(esi + 4);
    if (TEST_Z(eax, eax)) goto loc_001820C6; /* je: equal / zero */

loc_001820B7: ;
    PUSH32(esp, eax);
    PUSH32(esp, 0); sub_0046E4B6(); /* call 0x0046E4B6 */

loc_001820BD: ;
    esp = esp + 4;
    MEM32(esi) = 0;

loc_001820C6: ;
    eax = edi * 4;
    PUSH32(esp, eax);
    PUSH32(esp, 0); sub_0046DAB2(); /* call 0x0046DAB2 */

loc_001820D3: ;
    esp = esp + 4;
    MEM32(esi + 4) = eax;
    MEM32(esi) = edi;
    MEM32(esi + 8) = 0;
    esp += 4; return; /* ret */

}

/**
 * sub_001820F0
 * Original: 0x001820F0 - 0x001822FE (526 bytes, 121 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_001820F0(void)
{
    uint32_t ebp;
    int _flags = 0; /* fallback flag var */
    float xmm0, xmm1, xmm2;
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_001820F0: ;
    esp = esp - 0x118;
    PUSH32(esp, ebx);
    PUSH32(esp, ebp);
    ebp = MEM32(esp + 0x124);
    PUSH32(esp, esi);
    esi = eax;
    eax = MEM32(0x8076AC);
    MEM32(esp + 0x18) = eax;
    eax = MEM32(0x776184);
    (void)0; /* cmp eax, 0x8072F4 - flags set for next jcc */
    PUSH32(esp, edi);
    MEM32(0x8076AC) = 2;
    if (CMP_EQ(eax, 0x8072F4)) goto loc_00182130; /* je: equal / zero */

loc_00182122: ;
    PUSH32(esp, eax);
    PUSH32(esp, 0x587BE4);
    PUSH32(esp, 0); sub_003D49A0(); /* call 0x003D49A0 */

loc_0018212D: ;
    esp = esp + 8;

loc_00182130: ;
    eax = MEM32(0x6BAF28);
    xmm0 = MEMF(eax + 8); /* movss */
    xmm1 = MEMF(eax + 4); /* movss */
    MEMF(0x807660) = xmm0; /* movss */
    MEMF(0x80765C) = xmm1; /* movss */
    xmm0 = MEMF(eax + 0xC); /* movss */
    MEMF(0x80767C) = xmm0; /* movss */
    xmm0 = MEMF(eax + 0x10); /* movss */
    ecx = 0; /* xor self */
    MEMF(0x807688) = xmm0; /* movss */
    xmm0 = MEMF(0x8497DC); /* movss */
    MEM32(0x776180) = ecx;
    MEM8(0x8086C5) = LO8(ecx);
    MEMF(0x84B508) = xmm0; /* movss */
    xmm0 = MEMF(0x648D14); /* movss */
    ecx = esp + 0x14;
    PUSH32(esp, ecx);
    edx = esp + 0x1C;
    MEMF(0x8086BC) = xmm0; /* movss */
    xmm0 = MEMF(0x648E74); /* movss */
    PUSH32(esp, edx);
    ebx = 0; /* xor self */
    eax = 0x5F497C;
    MEMF(0x80765C) = xmm0; /* movss */
    MEMF(0x807660) = xmm0; /* movss */
    PUSH32(esp, 0); sub_003D3EC0(); /* call 0x003D3EC0 */

loc_001821C5: ;
    xmm0 = 0.0f; /* xorps self = zero */
    xmm1 = MEMF(0x58BD48); /* movss */
    eax = esp + 0x1C;
    PUSH32(esp, eax);
    ecx = esp + 0x1C;
    PUSH32(esp, ecx);
    eax = esi;
    MEMF(0x807650) = xmm0; /* movss */
    MEMF(0x807654) = xmm1; /* movss */
    MEMF(0x807658) = xmm0; /* movss */
    PUSH32(esp, 0); sub_003D3EC0(); /* call 0x003D3EC0 */

loc_001821F9: ;
    edx = ZX16(MEM16(0x7F9ECC));
    SET_LO16(eax, MEM16(esi));
    xmm1 = (float)(int32_t)edx; /* cvtsi2ss */
    xmm0 = xmm1; /* movaps */
    xmm0 = xmm0 - MEMF(esp + 0x20); /* subss */
    xmm0 = xmm0 * MEMF(0x648D10); /* mulss */
    MEMF(esp + 0x20) = xmm0; /* movss */
    xmm0 = MEMF(0x648D14); /* movss */
    esp = esp + 0x10;
    xmm0 = xmm0 / xmm1; /* divss */
    edi = 0; /* xor self */
    MEMF(esp + 0x14) = xmm0; /* movss */

loc_00182235: ;
    ecx = 0; /* xor self */
    if (CMP_EQ(LO16(eax), 0x20)) goto loc_00182259; /* je: equal / zero */

loc_0018223D: ;
    /* nop */

loc_00182240: ;
    if (TEST_Z(LO16(eax), LO16(eax))) goto loc_00182259; /* je: equal / zero */

loc_00182245: ;
    MEM16(esp + ecx * 2 + 0x28) = LO16(eax);
    esi = esi + 2;
    eax = 0; /* xor self */
    SET_LO16(eax, MEM16(esi));
    ecx++;
    if (CMP_NE(LO16(eax), 0x20)) goto loc_00182240; /* jne: not equal / not zero */

loc_00182259: ;
    eax = esp + 0x24;
    MEM16(esp + ecx * 2 + 0x28) = 0;
    PUSH32(esp, eax);
    ecx = esp + 0x24;
    PUSH32(esp, ecx);
    ebx = 0; /* xor self */
    eax = esp + 0x30;
    PUSH32(esp, 0); sub_003D3EC0(); /* call 0x003D3EC0 */

loc_00182275: ;
    xmm0 = MEMF(esp + 0x28); /* movss */
    xmm1 = MEMF(esp + 0x18); /* movss */
    edx = MEM32(ebp + 4);
    xmm2 = xmm0; /* movaps */
    xmm2 = xmm2 * MEMF(0x648D10); /* mulss */
    xmm2 = xmm2 + xmm1; /* addss */
    xmm2 = xmm2 * MEMF(esp + 0x1C); /* mulss */
    xmm2 = xmm2 * MEMF(0x648EA4); /* mulss */
    MEMF(edx + edi * 4) = xmm2; /* movss */
    SET_LO16(eax, MEM16(esi));
    esp = esp + 8;
    edi++;
    (void)0; /* cmp LO16(eax), 0x20 - flags set for next jcc */
    xmm0 = xmm0 + xmm1; /* addss */
    MEMF(esp + 0x10) = xmm0; /* movss */
    if (CMP_NE(LO16(eax), 0x20)) goto loc_001822DF; /* jne: not equal / not zero */

loc_001822BD: ;
    /* nop */

loc_001822C0: ;
    xmm0 = MEMF(esp + 0x10); /* movss */
    SET_LO16(eax, MEM16(esi + 2));
    xmm0 = xmm0 + MEMF(esp + 0x18); /* addss */
    esi = esi + 2;
    (void)0; /* cmp LO16(eax), 0x20 - flags set for next jcc */
    MEMF(esp + 0x10) = xmm0; /* movss */
    if (CMP_EQ(LO16(eax), 0x20)) goto loc_001822C0; /* je: equal / zero */

loc_001822DF: ;
    if (CMP_L(edi, MEM32(ebp))) goto loc_00182235; /* jl: less (signed <) */

loc_001822E8: ;
    eax = MEM32(esp + 0x1C);
    POP32(esp, edi);
    POP32(esp, esi);
    POP32(esp, ebp);
    MEM32(0x8076AC) = eax;
    POP32(esp, ebx);
    esp = esp + 0x118;
    esp += 8; return; /* ret 4 */

}

/**
 * sub_00182300
 * Original: 0x00182300 - 0x0018234C (76 bytes, 29 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00182300(void)
{
    int _flags = 0; /* fallback flag var */

loc_00182300: ;
    PUSH32(esp, esi);
    esi = eax;
    edx = 0; /* xor self */
    SET_LO16(edx, MEM16(esi));
    eax = 0; /* xor self */
    if (TEST_Z(LO16(edx), LO16(edx))) goto loc_0018234A; /* je: equal / zero */

loc_0018230F: ;
    /* nop */

loc_00182310: ;
    (void)0; /* cmp LO16(edx), 0xBD - flags set for next jcc */
    ecx = esi;
    if (CMP_EQ(LO16(edx), 0xBD)) goto loc_00182333; /* je: equal / zero */

loc_00182319: ;
    /* nop */

loc_00182320: ;
    if (TEST_Z(LO16(edx), LO16(edx))) goto loc_00182333; /* je: equal / zero */

loc_00182325: ;
    SET_LO16(edx, MEM16(ecx + 2));
    ecx = ecx + 2;
    if (CMP_NE(LO16(edx), 0xBD)) goto loc_00182320; /* jne: not equal / not zero */

loc_00182333: ;
    edx = ecx;
    edx = edx - esi;
    edx = (uint32_t)((int32_t)edx >> 1);
    (void)0; /* cmp edx, eax - flags set for next jcc */
    if (CMP_G(edx, eax)) eax = edx; /* cmovg */
    SET_LO16(edx, MEM16(ecx + 2));
    (void)0; /* test LO16(edx), LO16(edx) - flags set for next jcc */
    esi = ecx + 2;
    if (TEST_NZ(LO16(edx), LO16(edx))) goto loc_00182310; /* jne: not equal / not zero */

loc_0018234A: ;
    POP32(esp, esi);
    esp += 4; return; /* ret */

}

/**
 * sub_00182350
 * Original: 0x00182350 - 0x00182375 (37 bytes, 14 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00182350(void)
{
    int _flags = 0; /* fallback flag var */

loc_00182350: ;
    SET_LO16(ecx, MEM16(edx));
    eax = 0; /* xor self */
    if (TEST_Z(LO16(ecx), LO16(ecx))) goto loc_00182374; /* je: equal / zero */

loc_0018235A: ;
    /* nop */

loc_00182360: ;
    if (CMP_NE(LO16(ecx), 0x20)) goto loc_00182367; /* jne: not equal / not zero */

loc_00182366: ;
    eax++;

loc_00182367: ;
    SET_LO16(ecx, MEM16(edx + 2));
    edx = edx + 2;
    if (TEST_NZ(LO16(ecx), LO16(ecx))) goto loc_00182360; /* jne: not equal / not zero */

loc_00182373: ;
    eax++;

loc_00182374: ;
    esp += 4; return; /* ret */

}

/**
 * sub_00182380
 * Original: 0x00182380 - 0x0018238D (13 bytes, 7 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00182380(void)
{
    int _flags = 0; /* fallback flag var */

loc_00182380: ;
    PUSH32(esp, ebx);
    ebx = eax;
    if (CMP_NE(MEM16(ebx), 0)) { sub_0018238D(); return; } /* jne: not equal / not zero */

loc_00182389: ;
    eax = 0; /* xor self */
    POP32(esp, ebx);
    esp += 4; return; /* ret */

}

/**
 * sub_001823F0
 * Original: 0x001823F0 - 0x00182465 (117 bytes, 32 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_001823F0(void)
{
    int _flags = 0; /* fallback flag var */
    float xmm0;

loc_001823F0: ;
    esp = esp - 0x1C;
    PUSH32(esp, esi);
    esi = eax;
    MEM32(esp + 8) = esi;
    MEM32(esp + 0xC) = esi;
    PUSH32(esp, 0); sub_00182380(); /* call 0x00182380 */

loc_00182403: ;
    SET_LO8(ecx, MEM8(esp + 0x30));
    SET_LO8(edx, MEM8(esp + 0x24));
    MEM32(esp + 0x10) = eax;
    SET_LO8(eax, MEM8(esp + 0x34));
    MEM8(esp + 0x1D) = LO8(eax);
    eax = (uint32_t)(int32_t)SMEM16(esp + 0x28);
    xmm0 = (float)(int32_t)eax; /* cvtsi2ss */
    eax = esi;
    MEM8(esp + 0x1C) = LO8(ecx);
    MEM8(esp + 0x14) = 1;
    MEM8(esp + 4) = LO8(edx);
    MEM32(esp + 0x18) = 0;
    MEMF(esp + 0x34) = xmm0; /* movss */
    PUSH32(esp, 0); sub_00182300(); /* call 0x00182300 */

loc_00182442: ;
    edx = MEM32(esp + 0x38);
    ecx = MEM32(esp + 0x2C);
    PUSH32(esp, edx);
    eax = ecx + eax * 4 + 0x6C;
    PUSH32(esp, 0x8B);
    PUSH32(esp, 0); sub_000D9C60(); /* call 0x000D9C60 */

loc_00182459: ;
    esp = esp + 8;
    if (TEST_NZ(eax, eax)) { sub_00182465(); return; } /* jne: not equal / not zero */

loc_00182460: ;
    POP32(esp, esi);
    esp = esp + 0x1C;
    esp += 4; return; /* ret */

}

/**
 * sub_001824C0
 * Original: 0x001824C0 - 0x001824ED (45 bytes, 15 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_001824C0(void)
{
    int _flags = 0; /* fallback flag var */
    float xmm0;

loc_001824C0: ;
    PUSH32(esp, esi);
    esi = MEM32(esp + 8);
    SET_LO8(eax, MEM8(esi + 0x64));
    if (CMP_EQ(LO8(eax), 0xFF)) { sub_001824ED(); return; } /* je: equal / zero */

loc_001824CC: ;
    eax = SX8(LO8(eax));
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, esi);
    PUSH32(esp, 0); RECOMP_ICALL_SAFE(MEM32(eax * 4 + 0x598D60), _icall_esp); /* indirect call */
    }

loc_001824D7: ;
    esp = esp + 4;
    if (TEST_NZ(LO8(eax), LO8(eax))) { sub_001824ED(); return; } /* jne: not equal / not zero */

loc_001824DE: ;
    xmm0 = MEMF(0x648D34); /* movss */
    MEMF(esi + 0x30) = xmm0; /* movss */
    POP32(esp, esi);
    esp += 4; return; /* ret */

}

/**
 * sub_00182500
 * Original: 0x00182500 - 0x00182557 (87 bytes, 33 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00182500(void)
{
    int _flags = 0; /* fallback flag var */

loc_00182500: ;
    ecx = MEM32(esp + 0xC);
    (void)0; /* cmp ecx, 0x51 - flags set for next jcc */
    PUSH32(esp, esi);
    esi = MEM32(esp + 8);
    if (CMP_NE(ecx, 0x51)) goto loc_0018253A; /* jne: not equal / not zero */

loc_0018250E: ;
    eax = MEM32(esp + 0xC);
    SET_LO8(ecx, MEM8(eax));
    if (CMP_NE(LO8(ecx), MEM8(esi + 0x4C))) goto loc_00182555; /* jne: not equal / not zero */

loc_00182519: ;
    eax = MEM32(esi + 0x58);
    if (TEST_Z(eax, eax)) goto loc_00182531; /* je: equal / zero */

loc_00182520: ;
    MEM32(esi + 0x54) = eax;
    PUSH32(esp, 0); sub_00182380(); /* call 0x00182380 */

loc_00182528: ;
    MEM32(esi + 0x58) = eax;
    MEM8(esi + 0x5C) = MEM8(esi + 0x5C) | 1;
    POP32(esp, esi);
    esp += 4; return; /* ret */

loc_00182531: ;
    MEM32(esi + 0x54) = 0;
    POP32(esp, esi);
    esp += 4; return; /* ret */

loc_0018253A: ;
    edx = ZX8(MEM8(esi + 0x65));
    eax = MEM32(edx * 4 + 0x598D70);
    if (TEST_Z(eax, eax)) goto loc_00182555; /* je: equal / zero */

loc_00182549: ;
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, ecx);
    ecx = MEM32(esp + 0x10);
    PUSH32(esp, ecx);
    PUSH32(esp, esi);
    PUSH32(esp, 0); RECOMP_ICALL_SAFE(eax, _icall_esp); /* indirect call */
    }

loc_00182552: ;
    esp = esp + 0xC;

loc_00182555: ;
    POP32(esp, esi);
    esp += 4; return; /* ret */

}

/**
 * sub_00182560
 * Original: 0x00182560 - 0x00182639 (217 bytes, 64 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00182560(void)
{
    int _flags = 0; /* fallback flag var */

loc_00182560: ;
    eax = MEM32(0x849434);
    if (TEST_NZ(eax, eax)) goto loc_0018260D; /* jne: not equal / not zero */

loc_0018256D: ;
    eax = MEM32(0x84A19C);
    if (TEST_NZ(eax, eax)) goto loc_0018257B; /* jne: not equal / not zero */

loc_00182576: ;
    PUSH32(esp, 0); sub_002AED70(); /* call 0x002AED70 */

loc_0018257B: ;
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
    if (TEST_Z(esi, esi)) goto loc_001825C5; /* je: equal / zero */

loc_001825A3: ;
    if (CMP_B(MEM32(esi + 0x80), 0xC)) goto loc_001825C5; /* jb: below (unsigned <) */

loc_001825AC: ;
    ecx = 4;
    PUSH32(esp, 0); sub_003E62A0(); /* call 0x003E62A0 */

loc_001825B6: ;
    PUSH32(esp, 0xC);
    PUSH32(esp, edi);
    PUSH32(esp, 0); sub_003E6BD0(); /* call 0x003E6BD0 */

loc_001825BE: ;
    esp = esp + 8;
    if (TEST_NZ(eax, eax)) goto loc_001825E6; /* jne: not equal / not zero */

loc_001825C5: ;
    esi = MEM32(0x84A184);
    ecx = 4;
    edi = esi;
    PUSH32(esp, 0); sub_003E62A0(); /* call 0x003E62A0 */

loc_001825D7: ;
    PUSH32(esp, 0xC);
    PUSH32(esp, edi);
    PUSH32(esp, 0); sub_003E6BD0(); /* call 0x003E6BD0 */

loc_001825DF: ;
    esp = esp + 8;
    if (TEST_Z(eax, eax)) goto loc_00182601; /* je: equal / zero */

loc_001825E6: ;
    MEM32(eax) = 0;
    MEM32(eax + 4) = 0;
    MEM32(eax + 8) = 0;
    MEM32(0x849434) = eax;
    goto loc_0018260B;

loc_00182601: ;
    MEM32(0x849434) = 0;

loc_0018260B: ;
    POP32(esp, edi);
    POP32(esp, esi);

loc_0018260D: ;
    eax = MEM32(esp + 0x10);
    ecx = MEM32(esp + 0xC);
    edx = MEM32(esp + 4);
    PUSH32(esp, eax);
    eax = MEM32(esp + 0xC);
    PUSH32(esp, 0);
    PUSH32(esp, 0);
    PUSH32(esp, 1);
    PUSH32(esp, ecx);
    PUSH32(esp, edx);
    PUSH32(esp, 0); sub_001823F0(); /* call 0x001823F0 */

loc_0018262B: ;
    esp = esp + 0x18;
    if (TEST_Z(eax, eax)) goto loc_00182638; /* je: equal / zero */

loc_00182632: ;
    eax = MEM32(eax + 0x60);
    MEM8(eax) = 0;

loc_00182638: ;
    esp += 4; return; /* ret */

}

/**
 * sub_00182640
 * Original: 0x00182640 - 0x00182655 (21 bytes, 9 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00182640(void)
{
    uint32_t ebp;
    int _flags = 0; /* fallback flag var */
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_00182640: ;
    PUSH32(esp, ebx);
    PUSH32(esp, esi);
    PUSH32(esp, edi);
    edi = MEM32(esp + 0x10);
    (void)0; /* test MEM8(edi + 0x5C), 1 - flags set for next jcc */
    esi = MEM32(edi + 0x60);
    if (TEST_Z(MEM8(edi + 0x5C), 1)) { sub_00182655(); return; } /* je: equal / zero */

loc_00182650: ;
    MEM8(esi) = 8;
    g_seh_ebp = ebp; sub_0018265E(); return; /* tail jmp 0x0018265E */

}

/**
 * sub_00182790
 * Original: 0x00182790 - 0x001827D3 (67 bytes, 23 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00182790(void)
{
    int _flags = 0; /* fallback flag var */
    float xmm0;

loc_00182790: ;
    esp = esp - 8;
    edx = MEM32(esp + 0xC);
    xmm0 = 0.0f; /* xorps self = zero */
    PUSH32(esp, eax);
    eax = MEM32(esp + 0x14);
    PUSH32(esp, 0);
    PUSH32(esp, 1);
    PUSH32(esp, 8);
    PUSH32(esp, ecx);
    PUSH32(esp, edx);
    MEMF(esp + 0x18) = xmm0; /* movss */
    MEM16(esp + 0x1C) = 0;
    PUSH32(esp, 0); sub_001823F0(); /* call 0x001823F0 */

loc_001827B9: ;
    esp = esp + 0x18;
    if (TEST_Z(eax, eax)) goto loc_001827CF; /* je: equal / zero */

loc_001827C0: ;
    eax = MEM32(eax + 0x60);
    ecx = MEM32(esp);
    edx = MEM32(esp + 4);
    MEM32(eax) = ecx;
    MEM32(eax + 4) = edx;

loc_001827CF: ;
    esp = esp + 8;
    esp += 4; return; /* ret */

}

/**
 * sub_001827E0
 * Original: 0x001827E0 - 0x0018292B (331 bytes, 93 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_001827E0(void)
{
    uint32_t ebp;
    int _flags = 0; /* fallback flag var */
    float xmm0, xmm1;

loc_001827E0: ;
    PUSH32(esp, ebp);
    ebp = esp;
    esp = esp & 0xFFFFFFF8u;
    esp = esp - 0xAC;
    eax = MEM32(0x5F4974);
    SET_LO16(ecx, MEM16(0x5F4978));
    PUSH32(esp, ebx);
    PUSH32(esp, esi);
    esi = MEM32(ebp + 8);
    ebx = MEM32(esi + 0x60);
    MEM32(esp + 0xC) = eax;
    (void)0; /* test MEM8(esi + 0x5C), 1 - flags set for next jcc */
    PUSH32(esp, edi);
    edi = MEM32(0x5F4970);
    MEM16(esp + 0x14) = LO16(ecx);
    if (TEST_Z(MEM8(esi + 0x5C), 1)) goto loc_00182823; /* je: equal / zero */

loc_00182816: ;
    xmm0 = 0.0f; /* xorps self = zero */
    MEMF(ebx) = xmm0; /* movss */
    MEM16(ebx + 4) = 0;

loc_00182823: ;
    ecx = MEM32(esi + 0x54);
    eax = 0; /* xor self */
    if (TEST_Z(ecx, ecx)) goto loc_00182835; /* je: equal / zero */

loc_0018282C: ;
    PUSH32(esp, ecx);
    PUSH32(esp, 0); sub_0046E45A(); /* call 0x0046E45A */

loc_00182832: ;
    esp = esp + 4;

loc_00182835: ;
    xmm0 = (float)(int32_t)eax; /* cvtsi2ss */
    /* comiss xmm0, MEMF(ebx) - sets EFLAGS */
    if ((xmm0 <= MEMF(ebx))) goto loc_0018288A; /* jbe: below or equal (unsigned <=) */

loc_0018283E: ;
    xmm0 = MEMF(0x7FA24C); /* movss */
    xmm0 = xmm0 * MEMF(0x649B14); /* mulss */
    xmm0 = xmm0 + MEMF(ebx); /* addss */
    xmm1 = MEMF(0x648D14); /* movss */
    /* comiss xmm0, xmm1 - sets EFLAGS */
    MEMF(ebx) = xmm0; /* movss */
    if ((xmm0 <= xmm1)) goto loc_0018288A; /* jbe: below or equal (unsigned <=) */

loc_00182863: ;
    ecx = 0; /* xor self */
    SET_LO16(ecx, MEM16(ebx + 4));
    /* nop */

loc_00182870: ;
    ecx++;
    edx = SX16(LO16(ecx));
    (void)0; /* cmp edx, eax - flags set for next jcc */
    if (CMP_G(edx, eax)) ecx = eax; /* cmovg */
    xmm0 = xmm0 - xmm1; /* subss */
    /* comiss xmm0, xmm1 - sets EFLAGS */
    if ((xmm0 > xmm1)) goto loc_00182870; /* ja: above (unsigned >) */

loc_00182882: ;
    MEMF(ebx) = xmm0; /* movss */
    MEM16(ebx + 4) = LO16(ecx);

loc_0018288A: ;
    esi = MEM32(esi + 0x54);
    (void)0; /* test esi, esi - flags set for next jcc */
    eax = MEM32(esp + 0x10);
    MEM32(esp + 0x18) = edi;
    MEM32(esp + 0x1C) = eax;
    if (TEST_Z(esi, esi)) goto loc_001828B5; /* je: equal / zero */

loc_0018289D: ;
    ecx = (uint32_t)(int32_t)SMEM16(ebx + 4);
    ecx = ecx << 1;
    edx = ecx;
    ecx = ecx >> 2;
    edi = esp + 0x20;
    memcpy((void*)XBOX_PTR(edi), (void*)XBOX_PTR(esi), ecx * 4);
    esi += ecx * 4; edi += ecx * 4; ecx = 0; /* rep movsd */
    ecx = edx;
    ecx = ecx & 3;
    memcpy((void*)XBOX_PTR(edi), (void*)XBOX_PTR(esi), ecx);
    esi += ecx; edi += ecx; ecx = 0; /* rep movsb */

loc_001828B5: ;
    eax = (uint32_t)(int32_t)SMEM16(ebx + 4);
    MEM16(esp + eax * 2 + 0x20) = 0x20;
    ecx = (uint32_t)(int32_t)SMEM16(ebx + 4);
    eax = ZX16(MEM16(0x7F9ECE));
    MEM16(esp + ecx * 2 + 0x22) = 0xFFBB;
    edx = (uint32_t)(int32_t)SMEM16(ebx + 4);
    xmm0 = (float)(int32_t)eax; /* cvtsi2ss */
    ecx = esp + 0x18;
    xmm1 = xmm0; /* movaps */
    xmm1 = xmm1 * MEMF(0x648E64); /* mulss */
    PUSH32(esp, ecx);
    MEM16(esp + edx * 2 + 0x28) = 0;
    xmm0 = xmm0 - xmm1; /* subss */
    edx = (int32_t)xmm0; /* cvttss2si */
    PUSH32(esp, edx);
    PUSH32(esp, 0xF);
    SET_LO8(ecx, 0); /* xor self */
    MEM8(0x776171) = 0;
    MEM8(0x776170) = 0xFF;
    MEM8(0x77616F) = 0;
    MEM8(0x77616E) = 0x96;
    PUSH32(esp, 0); sub_001F25F0(); /* call 0x001F25F0 */

loc_0018291F: ;
    esp = esp + 0xC;
    POP32(esp, edi);
    POP32(esp, esi);
    SET_LO8(eax, 1);
    POP32(esp, ebx);
    esp = ebp;
    POP32(esp, ebp);
    esp += 4; return; /* ret */

}

/**
 * sub_00182930
 * Original: 0x00182930 - 0x00182954 (36 bytes, 15 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00182930(void)
{
    int _flags = 0; /* fallback flag var */

loc_00182930: ;
    edx = MEM32(esp + 4);
    PUSH32(esp, eax);
    eax = MEM32(esp + 0xC);
    PUSH32(esp, 0);
    PUSH32(esp, 2);
    PUSH32(esp, 1);
    PUSH32(esp, ecx);
    PUSH32(esp, edx);
    PUSH32(esp, 0); sub_001823F0(); /* call 0x001823F0 */

loc_00182946: ;
    esp = esp + 0x18;
    if (TEST_Z(eax, eax)) goto loc_00182953; /* je: equal / zero */

loc_0018294D: ;
    eax = MEM32(eax + 0x60);
    MEM8(eax) = 0;

loc_00182953: ;
    esp += 4; return; /* ret */

}

/**
 * sub_00182960
 * Original: 0x00182960 - 0x00182975 (21 bytes, 9 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00182960(void)
{
    uint32_t ebp;
    int _flags = 0; /* fallback flag var */
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_00182960: ;
    PUSH32(esp, ebx);
    PUSH32(esp, esi);
    PUSH32(esp, edi);
    edi = MEM32(esp + 0x10);
    (void)0; /* test MEM8(edi + 0x5C), 1 - flags set for next jcc */
    esi = MEM32(edi + 0x60);
    if (TEST_Z(MEM8(edi + 0x5C), 1)) { sub_00182975(); return; } /* je: equal / zero */

loc_00182970: ;
    MEM8(esi) = 0x14;
    g_seh_ebp = ebp; sub_0018297E(); return; /* tail jmp 0x0018297E */

}

/**
 * sub_00182A10
 * Original: 0x00182A10 - 0x00182AE2 (210 bytes, 52 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00182A10(void)
{
    int _flags = 0; /* fallback flag var */
    float xmm0, xmm1;

loc_00182A10: ;
    esp = esp - 0x4C;
    xmm0 = MEMF(eax + 0x78); /* movss */
    xmm1 = MEMF(0x6498E0); /* movss */
    PUSH32(esp, 0);
    PUSH32(esp, 0);
    MEMF(esp + 8) = xmm0; /* movss */
    xmm0 = MEMF(eax + 0x7C); /* movss */
    ecx = MEM32(esp + 8);
    PUSH32(esp, 0);
    MEMF(esp + 0x10) = xmm0; /* movss */
    xmm0 = MEMF(eax + 0x80); /* movss */
    edx = MEM32(esp + 0x10);
    PUSH32(esp, 0xB);
    MEM32(esp + 0x30) = eax;
    SET_LO8(eax, MEM8(eax + 0x10B));
    PUSH32(esp, 0xB);
    MEMF(esp + 0x1C) = xmm0; /* movss */
    xmm0 = 0.0f; /* xorps self = zero */
    MEM8(esp + 0x38) = LO8(eax);
    eax = MEM32(esp + 0x1C);
    PUSH32(esp, 0xB);
    MEM32(esp + 0x40) = ecx;
    ecx = esp + 0x18;
    MEM32(esp + 0x44) = edx;
    SET_LO8(edx, MEM8(esp + 0x68));
    MEM32(esp + 0x48) = eax;
    PUSH32(esp, 0x1C);
    PUSH32(esp, ecx);
    eax = 0x2C;
    MEM8(esp + 0x35) = 0xA;
    MEM16(esp + 0x2C) = 0x12C;
    MEM16(esp + 0x2E) = 6;
    MEMF(esp + 0x54) = xmm0; /* movss */
    MEMF(esp + 0x58) = xmm0; /* movss */
    MEMF(esp + 0x5C) = xmm1; /* movss */
    MEMF(esp + 0x60) = xmm1; /* movss */
    MEMF(esp + 0x64) = xmm0; /* movss */
    MEM32(esp + 0x30) = 0xD;
    PUSH32(esp, 0); sub_0017A580(); /* call 0x0017A580 */

loc_00182AC2: ;
    esp = esp + 0x20;
    if (TEST_Z(eax, eax)) goto loc_00182ADE; /* je: equal / zero */

loc_00182AC9: ;
    PUSH32(esp, esi);
    PUSH32(esp, edi);
    edi = MEM32(eax + 0x144);
    ecx = 0xB;
    esi = esp + 0x28;
    memcpy((void*)XBOX_PTR(edi), (void*)XBOX_PTR(esi), ecx * 4);
    esi += ecx * 4; edi += ecx * 4; ecx = 0; /* rep movsd */
    POP32(esp, edi);
    POP32(esp, esi);

loc_00182ADE: ;
    esp = esp + 0x4C;
    esp += 4; return; /* ret */

}

/**
 * sub_00182AF0
 * Original: 0x00182AF0 - 0x00182B0B (27 bytes, 10 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00182AF0(void)
{
    int _flags = 0; /* fallback flag var */

loc_00182AF0: ;
    eax = MEM32(esp + 4);
    (void)0; /* cmp MEM8(eax + 0x4C), 2 - flags set for next jcc */
    PUSH32(esp, edi);
    edi = MEM32(eax + 0x140);
    if (CMP_GE(MEM8(eax + 0x4C), 2)) { sub_00182B0B(); return; } /* jge: greater or equal (signed >=) */

loc_00182B01: ;
    if (TEST_Z(MEM8(eax + 0x3A), 8)) { sub_00182B0B(); return; } /* je: equal / zero */

loc_00182B07: ;
    eax = 0; /* xor self */
    POP32(esp, edi);
    esp += 4; return; /* ret */

}

/**
 * sub_00182C20
 * Original: 0x00182C20 - 0x00182EE6 (710 bytes, 176 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00182C20(void)
{
    uint32_t ebp;
    int _flags = 0; /* fallback flag var */
    float xmm0, xmm1, xmm2, xmm3, xmm4, xmm5, xmm6, xmm7;
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_00182C20: ;
    esp = esp - 0x28;
    PUSH32(esp, ebp);
    PUSH32(esp, esi);
    esi = MEM32(esp + 0x34);
    ebp = MEM32(esi + 0x140);
    PUSH32(esp, edi);
    edi = MEM32(esi + 0x144);
    eax = MEM32(edi);
    ecx = MEM32(eax + 0x64);
    if (TEST_Z(ecx, ecx)) { sub_00182EE6(); return; } /* je: equal / zero */

loc_00182C43: ;
    SET_LO8(ecx, MEM8(eax + 0x10B));
    if (CMP_NE(LO8(ecx), MEM8(edi + 4))) { sub_00182EE6(); return; } /* jne: not equal / not zero */

loc_00182C52: ;
    xmm0 = MEMF(0x648F38); /* movss */
    /* comiss xmm0, MEMF(eax + 0x110) - sets EFLAGS */
    if ((xmm0 > MEMF(eax + 0x110))) { sub_00182EE6(); return; } /* ja: above (unsigned >) */

loc_00182C67: ;
    edx = MEM32(eax + 0x78);
    MEM32(esi + 0x2C) = edx;
    ecx = MEM32(eax + 0x7C);
    xmm0 = MEMF(esi + 0x2C); /* movss */
    MEM32(esi + 0x30) = ecx;
    edx = MEM32(eax + 0x80);
    MEM32(esi + 0x34) = edx;
    xmm0 = xmm0 - MEMF(edi + 8); /* subss */
    PUSH32(esp, ebx);
    MEMF(esp + 0x20) = xmm0; /* movss */
    xmm0 = MEMF(esi + 0x30); /* movss */
    xmm0 = xmm0 - MEMF(edi + 0xC); /* subss */
    ebx = edi + 8;
    MEMF(esp + 0x24) = xmm0; /* movss */
    xmm0 = MEMF(esi + 0x34); /* movss */
    xmm0 = xmm0 - MEMF(edi + 0x10); /* subss */
    eax = esp + 0x20;
    PUSH32(esp, eax);
    MEMF(esp + 0x2C) = xmm0; /* movss */
    PUSH32(esp, 0); sub_003E1F60(); /* call 0x003E1F60 */

loc_00182CBA: ;
    xmm3 = MEMF(0x7FA24C); /* movss */
    xmm6 = MEMF(0x648D14); /* movss */
    xmm4 = xmm3; /* movaps */
    xmm4 = xmm4 * xmm0; /* mulss */
    xmm4 = xmm4 * MEMF(0x6498CC); /* mulss */
    xmm4 = xmm4 + MEMF(edi + 0x14); /* addss */
    xmm2 = xmm0; /* movaps */
    xmm2 = xmm2 * MEMF(0x6498C8); /* mulss */
    xmm2 = xmm2 + MEMF(edi + 0x1C); /* addss */
    esp = esp + 4;
    /* comiss xmm4, xmm6 - sets EFLAGS */
    MEMF(esp + 0x3C) = xmm0; /* movss */
    MEMF(edi + 0x14) = xmm4; /* movss */
    MEMF(edi + 0x1C) = xmm2; /* movss */
    if ((xmm4 <= xmm6)) goto loc_00182ED9; /* jbe: below or equal (unsigned <=) */

loc_00182D0A: ;
    xmm3 = xmm3 + MEMF(edi + 0x18); /* addss */
    xmm7 = 0.0f; /* xorps self = zero */
    xmm5 = MEMF(edi + 0x24); /* movss */
    xmm1 = xmm6; /* movaps */
    xmm1 = xmm1 / xmm4; /* divss */
    xmm4 = xmm1; /* movaps */
    xmm4 = xmm4 * MEMF(esp + 0x24); /* mulss */
    MEMF(esp + 0x30) = xmm4; /* movss */
    xmm4 = xmm1; /* movaps */
    xmm4 = xmm4 * MEMF(esp + 0x28); /* mulss */
    ecx = ebx;
    edx = MEM32(ecx);
    eax = MEM32(ecx + 4);
    ecx = MEM32(ecx + 8);
    xmm0 = xmm3; /* movaps */
    xmm0 = xmm0 * xmm1; /* mulss */
    MEMF(esp + 0x34) = xmm4; /* movss */
    xmm4 = MEMF(edi + 0x20); /* movss */
    xmm7 = xmm7 - xmm0; /* subss */
    xmm0 = xmm1; /* movaps */
    xmm0 = xmm0 * MEMF(esp + 0x20); /* mulss */
    xmm2 = xmm2 - xmm4; /* subss */
    xmm2 = xmm2 * xmm1; /* mulss */
    xmm1 = xmm1 * MEMF(esp + 0x3C); /* mulss */
    MEMF(esp + 0x3C) = xmm1; /* movss */
    xmm1 = MEMF(0x649130); /* movss */
    MEM32(esp + 0x14) = edx;
    MEM32(esp + 0x18) = eax;
    MEM32(esp + 0x1C) = ecx;
    MEMF(esp + 0x2C) = xmm0; /* movss */
    MEMF(esp + 0x10) = xmm2; /* movss */
    goto loc_00182DA0;

loc_00182D95: ;
    xmm0 = MEMF(esp + 0x2C); /* movss */
    goto loc_00182DA0;

    /* nop */

loc_00182DA0: ;
    eax = (uint32_t)(int32_t)SMEM8(esi + 0x4E);
    ecx = MEM32(esp + 0x14);
    eax = (uint32_t)((int32_t)eax * (int32_t)0x1C);
    xmm2 = MEMF(0x6498C4); /* movss */
    eax = eax + ebp;
    /* comiss xmm4, xmm1 - sets EFLAGS */
    edx = eax;
    MEM32(edx) = ecx;
    ecx = MEM32(esp + 0x18);
    MEM32(edx + 4) = ecx;
    ecx = MEM32(esp + 0x1C);
    xmm2 = xmm2 - xmm3; /* subss */
    MEM32(edx + 8) = ecx;
    MEMF(eax + 0xC) = xmm2; /* movss */
    MEM8(eax + 0x10) = 0x9B;
    MEMF(eax + 0x14) = xmm4; /* movss */
    if ((xmm4 <= xmm1)) goto loc_00182E02; /* jbe: below or equal (unsigned <=) */

loc_00182DDE: ;
    edi = edi;

loc_00182DE0: ;
    xmm1 = MEMF(eax + 0x14); /* movss */
    xmm1 = xmm1 - MEMF(0x64930C); /* subss */
    xmm2 = xmm1; /* movaps */
    MEMF(eax + 0x14) = xmm1; /* movss */
    xmm1 = MEMF(0x649130); /* movss */
    /* comiss xmm2, xmm1 - sets EFLAGS */
    if ((xmm2 > xmm1)) goto loc_00182DE0; /* ja: above (unsigned >) */

loc_00182E02: ;
    MEMF(eax + 0x18) = xmm5; /* movss */
    SET_LO8(ecx, MEM8(esi + 0x4E));
    SET_LO8(ecx, LO8(ecx) + 1);
    SET_LO8(eax, LO8(ecx));
    MEM8(esi + 0x4E) = LO8(ecx);
    ecx = ZX8(MEM8(esi + 0x41));
    edx = SX8(LO8(eax));
    if (CMP_NE(edx, ecx)) goto loc_00182E20; /* jne: not equal / not zero */

loc_00182E1C: ;
    MEM8(esi + 0x4E) = 0;

loc_00182E20: ;
    SET_LO8(eax, MEM8(esi + 0x4C));
    SET_LO8(eax, LO8(eax) + 1);
    MEM8(esi + 0x4C) = LO8(eax);
    SET_LO8(edx, LO8(eax));
    SET_LO8(eax, MEM8(esi + 0x4D));
    if (CMP_NE(MEM8(esi + 0x4E), LO8(eax))) goto loc_00182E47; /* jne: not equal / not zero */

loc_00182E32: ;
    SET_LO8(eax, LO8(eax) + 1);
    MEM8(esi + 0x4D) = LO8(eax);
    eax = SX8(LO8(eax));
    if (CMP_NE(eax, ecx)) goto loc_00182E42; /* jne: not equal / not zero */

loc_00182E3E: ;
    MEM8(esi + 0x4D) = 0;

loc_00182E42: ;
    SET_LO8(edx, LO8(edx) - 1);
    MEM8(esi + 0x4C) = LO8(edx);

loc_00182E47: ;
    xmm2 = MEMF(esp + 0x14); /* movss */
    xmm2 = xmm2 + xmm0; /* addss */
    xmm0 = MEMF(esp + 0x18); /* movss */
    xmm0 = xmm0 + MEMF(esp + 0x30); /* addss */
    MEMF(esp + 0x18) = xmm0; /* movss */
    xmm0 = MEMF(esp + 0x1C); /* movss */
    xmm0 = xmm0 + MEMF(esp + 0x34); /* addss */
    MEMF(esp + 0x1C) = xmm0; /* movss */
    xmm0 = MEMF(esp + 0x10); /* movss */
    xmm0 = xmm0 + xmm4; /* addss */
    xmm4 = xmm0; /* movaps */
    xmm0 = MEMF(esp + 0x3C); /* movss */
    xmm0 = xmm0 + xmm5; /* addss */
    xmm5 = xmm0; /* movaps */
    xmm0 = xmm7; /* movaps */
    xmm0 = xmm0 + xmm3; /* addss */
    xmm3 = xmm0; /* movaps */
    xmm0 = MEMF(edi + 0x14); /* movss */
    xmm0 = xmm0 - xmm6; /* subss */
    /* comiss xmm0, xmm6 - sets EFLAGS */
    MEMF(esp + 0x14) = xmm2; /* movss */
    MEMF(edi + 0x14) = xmm0; /* movss */
    if ((xmm0 > xmm6)) goto loc_00182D95; /* ja: above (unsigned >) */

loc_00182EB6: ;
    ecx = MEM32(esp + 0x14);
    edx = MEM32(esp + 0x18);
    eax = MEM32(esp + 0x1C);
    MEM32(ebx) = ecx;
    MEM32(ebx + 4) = edx;
    MEM32(ebx + 8) = eax;
    MEMF(edi + 0x20) = xmm4; /* movss */
    MEMF(edi + 0x24) = xmm5; /* movss */
    MEMF(edi + 0x18) = xmm3; /* movss */

loc_00182ED9: ;
    POP32(esp, ebx);
    POP32(esp, edi);
    POP32(esp, esi);
    eax = 1;
    POP32(esp, ebp);
    esp = esp + 0x28;
    esp += 4; return; /* ret */

}

/**
 * sub_00182F00
 * Original: 0x00182F00 - 0x00183575 (1653 bytes, 452 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00182F00(void)
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
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_00182F00: ;
    esp = esp - 0x40;
    PUSH32(esp, ebx);
    ebx = MEM32(esp + 0x48);
    if (CMP_LE(MEM8(ebx + 0x4C), 1)) goto loc_00183570; /* jle: less or equal (signed <=) */

loc_00182F12: ;
    PUSH32(esp, ebp);
    ebp = (uint32_t)(int32_t)SMEM16(esp + 0x50);
    eax = MEM32(ebx + ebp * 4 + 0x130);
    PUSH32(esp, esi);
    esi = ZX8(MEM8(ebx + 0x41));
    esi = esi + 5;
    esi = (uint32_t)((int32_t)esi * (int32_t)0x38);
    if (TEST_NZ(eax, eax)) goto loc_00182F52; /* jne: not equal / not zero */

loc_00182F2E: ;
    PUSH32(esp, 0xFFFFFFFFu);
    PUSH32(esp, 0x26);
    eax = esi + esi;
    PUSH32(esp, 0x5F3E90);
    PUSH32(esp, eax);
    PUSH32(esp, 0); sub_002AF0E0(); /* call 0x002AF0E0 */

loc_00182F40: ;
    esp = esp + 0x10;
    (void)0; /* test eax, eax - flags set for next jcc */
    MEM32(ebx + ebp * 4 + 0x130) = eax;
    if (TEST_Z(eax, eax)) goto loc_0018356E; /* je: equal / zero */

loc_00182F52: ;
    SET_LO8(eax, MEM8(0x7FA230));
    ecx = 0; /* xor self */
    (void)0; /* test LO8(eax), LO8(eax) - flags set for next jcc */
    eax = MEM32(ebx + ebp * 4 + 0x130);
    SET_LO8(ecx, (TEST_NZ(LO8(eax), LO8(eax))) ? 1 : 0); /* setne */
    PUSH32(esp, edi);
    ecx--;
    ecx = ecx & esi;
    ecx = ecx + eax;
    edi = ecx;
    if ((ecx == 0)) goto loc_0018356D; /* je: equal / zero */

loc_00182F73: ;
    SET_LO8(eax, 2);
    PUSH32(esp, 0); sub_000D9910(); /* call 0x000D9910 */

loc_00182F7A: ;
    ebp = (uint32_t)((int32_t)ebp * (int32_t)0x770);
    edx = MEM32(ebx + 0x140);
    esi = eax;
    eax = MEM32(0x8470DC);
    ecx = eax + ebp + 0x330;
    SET_LO8(eax, MEM8(0x75BA4C));
    (void)0; /* test LO8(eax), LO8(eax) - flags set for next jcc */
    MEM32(esp + 0x18) = edx;
    MEM32(esp + 0x20) = ecx;
    if (CMP_BE(LO8(eax) & LO8(eax), 0)) goto loc_0018303F; /* jbe: below or equal (unsigned <=) */

loc_00182FA9: ;
    ebp = MEM32(0x75BA48);
    eax = MEM32(ebp + 8);
    if (TEST_NZ(eax, eax)) goto loc_00182FDF; /* jne: not equal / not zero */

loc_00182FB6: ;
    edx = MEM32(ebp);
    PUSH32(esp, edx);
    PUSH32(esp, 0x5E0D08);
    PUSH32(esp, 0x14);
    eax = 0; /* xor self */
    PUSH32(esp, 0); sub_0005E4E0(); /* call 0x0005E4E0 */

loc_00182FC8: ;
    esp = esp + 0xC;
    PUSH32(esp, 0); sub_0029CDD0(); /* call 0x0029CDD0 */

loc_00182FD0: ;
    ecx = MEM32(0x75BA48);
    MEM32(ecx + 8) = eax;
    ebp = MEM32(0x75BA48);

loc_00182FDF: ;
    eax = MEM32(ebp + 0x10);
    if (TEST_NZ(eax, eax)) goto loc_0018300B; /* jne: not equal / not zero */

loc_00182FE6: ;
    eax = MEM32(ebp + 8);
    PUSH32(esp, 0); sub_0034F320(); /* call 0x0034F320 */

loc_00182FEE: ;
    MEM32(ebp + 0x10) = eax;
    ebp = MEM32(0x75BA48);
    eax = MEM32(ebp + 0x10);
    if (TEST_NZ(eax, eax)) goto loc_0018300B; /* jne: not equal / not zero */

loc_00182FFE: ;
    MEM32(ebp + 0x10) = 0xFFFFFFFFu;
    ebp = MEM32(0x75BA48);

loc_0018300B: ;
    ecx = MEM32(ebp + 0x10);
    if (CMP_NE(ecx, 0xFFFFFFFFu)) goto loc_00183035; /* jne: not equal / not zero */

loc_00183013: ;
    ecx = MEM32(ebp + 4);
    (void)0; /* test ecx, ecx - flags set for next jcc */
    eax = ebp + 4;
    if (TEST_NZ(ecx, ecx)) goto loc_00183030; /* jne: not equal / not zero */

loc_0018301D: ;
    edx = MEM32(ebp);
    PUSH32(esp, eax);
    PUSH32(esp, edx);
    PUSH32(esp, 0); sub_00075E90(); /* call 0x00075E90 */

loc_00183027: ;
    ebp = MEM32(0x75BA48);
    esp = esp + 8;

loc_00183030: ;
    ebp = MEM32(ebp + 4);
    goto loc_00183041;

loc_00183035: ;
    PUSH32(esp, 0); sub_0034F360(); /* call 0x0034F360 */

loc_0018303A: ;
    ebp = MEM32(eax + 4);
    goto loc_00183041;

loc_0018303F: ;
    ebp = 0; /* xor self */

loc_00183041: ;
    if (CMP_EQ(MEM32(esi + 0x3838), ebp)) goto loc_00183054; /* je: equal / zero */

loc_00183049: ;
    PUSH32(esp, 0); sub_0013C160(); /* call 0x0013C160 */

loc_0018304E: ;
    MEM32(esi + 0x3838) = ebp;

loc_00183054: ;
    if (TEST_Z(MEM8(ebx + 0x3A), 2)) goto loc_00183083; /* je: equal / zero */

loc_0018305A: ;
    ebp = (uint32_t)(int32_t)SMEM8(ebx + 0x4E);
    ebp--;
    if (((int32_t)ebp >= 0)) goto loc_00183066; /* jns: not sign (positive) */

loc_00183061: ;
    ebp = ZX8(MEM8(ebx + 0x41));
    ebp--;

loc_00183066: ;
    xmm0 = 0.0f; /* xorps self = zero */
    ebx = ebx + 0x2C;
    eax = MEM32(ebx);
    ecx = MEM32(ebx + 4);
    edx = MEM32(ebx + 8);
    MEM32(esp + 0x44) = eax;
    MEM32(esp + 0x48) = ecx;
    MEM8(esp + 0x12) = 0x80;
    goto loc_001830C3;

loc_00183083: ;
    eax = (uint32_t)(int32_t)SMEM8(ebx + 0x4E);
    eax--;
    if (((int32_t)eax >= 0)) goto loc_0018308F; /* jns: not sign (positive) */

loc_0018308A: ;
    eax = ZX8(MEM8(ebx + 0x41));
    eax--;

loc_0018308F: ;
    ebp = eax + -1;
    if (CMP_GE(ebp & ebp, 0)) goto loc_0018309B; /* jge: greater or equal (signed >=) */

loc_00183096: ;
    ebp = ZX8(MEM8(ebx + 0x41));
    ebp--;

loc_0018309B: ;
    ecx = MEM32(esp + 0x18);
    eax = (uint32_t)((int32_t)eax * (int32_t)0x1C);
    xmm0 = MEMF(eax + ecx + 0x14); /* movss */
    eax = eax + ecx;
    edx = eax;
    ecx = MEM32(edx);
    MEM32(esp + 0x44) = ecx;
    ecx = MEM32(edx + 4);
    edx = MEM32(edx + 8);
    MEM32(esp + 0x48) = ecx;
    SET_LO8(ecx, MEM8(eax + 0x10));
    MEM8(esp + 0x12) = LO8(ecx);

loc_001830C3: ;
    eax = MEM32(esp + 0x18);
    xmm3 = MEMF(esp + 0x48); /* movss */
    MEM32(esp + 0x4C) = edx;
    xmm4 = MEMF(esp + 0x44); /* movss */
    edx = ebp;
    edx = (uint32_t)((int32_t)edx * (int32_t)0x1C);
    eax = eax + edx;
    ecx = eax;
    edx = MEM32(ecx);
    MEMF(esp + 0x1C) = xmm0; /* movss */
    xmm0 = MEMF(eax + 0x14); /* movss */
    MEM32(esp + 0x38) = edx;
    edx = MEM32(ecx + 4);
    ecx = MEM32(ecx + 8);
    MEMF(esp + 0x24) = xmm0; /* movss */
    xmm0 = MEMF(esp + 0x4C); /* movss */
    xmm2 = xmm0; /* movaps */
    MEM32(esp + 0x40) = ecx;
    SET_LO8(ecx, MEM8(eax + 0x10));
    eax = MEM32(esp + 0x20);
    xmm0 = xmm0 - MEMF(eax + 8); /* subss */
    xmm2 = xmm2 - MEMF(esp + 0x40); /* subss */
    xmm7 = xmm3; /* movaps */
    xmm3 = xmm3 - MEMF(eax + 4); /* subss */
    xmm1 = xmm0; /* movaps */
    xmm5 = xmm3; /* movaps */
    xmm5 = xmm5 * xmm2; /* mulss */
    MEM32(esp + 0x3C) = edx;
    xmm7 = xmm7 - MEMF(esp + 0x3C); /* subss */
    xmm6 = xmm4; /* movaps */
    xmm4 = xmm4 - MEMF(eax); /* subss */
    xmm6 = xmm6 - MEMF(esp + 0x38); /* subss */
    xmm1 = xmm1 * xmm7; /* mulss */
    xmm1 = xmm1 - xmm5; /* subss */
    xmm0 = xmm0 * xmm6; /* mulss */
    xmm5 = xmm4; /* movaps */
    xmm5 = xmm5 * xmm2; /* mulss */
    xmm5 = xmm5 - xmm0; /* subss */
    xmm3 = xmm3 * xmm6; /* mulss */
    xmm4 = xmm4 * xmm7; /* mulss */
    xmm3 = xmm3 - xmm4; /* subss */
    xmm0 = xmm3; /* movaps */
    xmm0 = xmm0 * xmm3; /* mulss */
    xmm2 = xmm5; /* movaps */
    xmm2 = xmm2 * xmm5; /* mulss */
    xmm0 = xmm0 + xmm2; /* addss */
    xmm2 = xmm1; /* movaps */
    xmm2 = xmm2 * xmm1; /* mulss */
    MEMF(esp + 0x2C) = xmm1; /* movss */
    xmm1 = 0.0f; /* xorps self = zero */
    xmm0 = xmm0 + xmm2; /* addss */
    /* ucomiss xmm0, xmm1 - sets EFLAGS */
    /* lahf - load AH from flags (used in FPU compare idiom) */
    (void)0; /* test HI8(eax), 0x44 - flags set for next jcc */
    MEM8(esp + 0x13) = LO8(ecx);
    MEMF(esp + 0x30) = xmm5; /* movss */
    MEMF(esp + 0x34) = xmm3; /* movss */
    MEMF(esp + 0x14) = xmm0; /* movss */
    if (1 /* jp after test - parity */) goto loc_001831B8; /* jp: parity */

loc_001831AD: ;
    xmm4 = xmm1; /* movaps */
    xmm3 = xmm1; /* movaps */
    xmm2 = xmm1; /* movaps */
    goto loc_001831F2;

loc_001831B8: ;
    fp_push(MEMF(esp + 0x14)); /* fld float */
    fp_top() = sqrt(fp_top()); /* fsqrt */
    /* FPU: fdivr dword ptr [0x648ce4] */
    fp_push(MEMF(esp + 0x2C)); /* fld float */
    fp_st1() *= fp_top(); fp_pop(); /* fmul */
    MEMF(esp + 0x2C) = (float)fp_top(); fp_popp(); /* fstp */
    fp_push(MEMF(esp + 0x30)); /* fld float */
    xmm4 = MEMF(esp + 0x2C); /* movss */
    fp_st1() *= fp_top(); fp_pop(); /* fmul */
    MEMF(esp + 0x30) = (float)fp_top(); fp_popp(); /* fstp */
    xmm3 = MEMF(esp + 0x30); /* movss */
    fp_st1() *= fp_top(); fp_pop(); /* fmul */
    MEMF(esp + 0x34) = (float)fp_top(); fp_popp(); /* fstp */
    xmm2 = MEMF(esp + 0x34); /* movss */

loc_001831F2: ;
    xmm5 = MEMF(esp + 0x44); /* movss */
    xmm6 = MEMF(esp + 0x48); /* movss */
    xmm7 = MEMF(esp + 0x4C); /* movss */
    xmm0 = xmm4; /* movaps */
    xmm0 = xmm0 + xmm5; /* addss */
    edx = (int32_t)xmm0; /* cvttss2si */
    eax = SX16(LO16(edx));
    xmm0 = (float)(int32_t)eax; /* cvtsi2ss */
    MEMF(edi) = xmm0; /* movss */
    MEMF(edi + 0x14) = xmm1; /* movss */
    xmm0 = xmm3; /* movaps */
    xmm0 = xmm0 + xmm6; /* addss */
    edx = (int32_t)xmm0; /* cvttss2si */
    eax = SX16(LO16(edx));
    xmm0 = (float)(int32_t)eax; /* cvtsi2ss */
    MEMF(edi + 4) = xmm0; /* movss */
    xmm0 = xmm2; /* movaps */
    xmm0 = xmm0 + xmm7; /* addss */
    edx = (int32_t)xmm0; /* cvttss2si */
    eax = SX16(LO16(edx));
    edx = (int32_t)MEMF(esp + 0x1C); /* cvttss2si */
    xmm0 = (float)(int32_t)eax; /* cvtsi2ss */
    MEMF(edi + 8) = xmm0; /* movss */
    eax = SX16(LO16(edx));
    SET_LO8(edx, MEM8(esp + 0x12));
    MEM8(edi + 0xF) = LO8(edx);
    xmm0 = (float)(int32_t)eax; /* cvtsi2ss */
    MEMF(edi + 0x10) = xmm0; /* movss */
    edi = edi + 0x1C;
    ebx = 0xFF;
    MEM8(edi + -16) = LO8(ebx);
    MEM8(edi + -15) = LO8(ebx);
    MEM8(edi + -14) = LO8(ebx);
    xmm1 = xmm5; /* movaps */
    xmm1 = xmm1 - xmm4; /* subss */
    eax = (int32_t)xmm1; /* cvttss2si */
    eax = SX16(LO16(eax));
    edx = 0; /* xor self */
    MEM16(edi + -4) = LO16(edx);
    xmm1 = (float)(int32_t)eax; /* cvtsi2ss */
    MEMF(edi) = xmm1; /* movss */
    xmm1 = xmm6; /* movaps */
    xmm1 = xmm1 - xmm3; /* subss */
    eax = (int32_t)xmm1; /* cvttss2si */
    eax = SX16(LO16(eax));
    xmm1 = (float)(int32_t)eax; /* cvtsi2ss */
    MEMF(edi + 4) = xmm1; /* movss */
    xmm1 = xmm7; /* movaps */
    xmm1 = xmm1 - xmm2; /* subss */
    eax = (int32_t)xmm1; /* cvttss2si */
    eax = SX16(LO16(eax));
    xmm1 = (float)(int32_t)eax; /* cvtsi2ss */
    SET_LO8(eax, MEM8(esp + 0x12));
    MEMF(edi + 0x10) = xmm0; /* movss */
    xmm0 = MEMF(0x64AC08); /* movss */
    MEMF(edi + 8) = xmm1; /* movss */
    MEMF(edi + 0x14) = xmm0; /* movss */
    MEM8(edi + 0xC) = LO8(ebx);
    MEM8(edi + 0xD) = LO8(ebx);
    MEM8(edi + 0xE) = LO8(ebx);
    MEM8(edi + 0xF) = LO8(eax);
    MEM16(edi + 0x18) = LO16(edx);
    edi = edi + 0x1C;
    goto loc_00183304;

loc_001832EC: ;
    xmm6 = MEMF(esp + 0x48); /* movss */
    xmm7 = MEMF(esp + 0x4C); /* movss */
    xmm5 = MEMF(esp + 0x44); /* movss */
    SET_LO8(ecx, MEM8(esp + 0x13));
    edx = 0; /* xor self */

loc_00183304: ;
    eax = MEM32(esp + 0x20);
    xmm2 = MEMF(esp + 0x40); /* movss */
    xmm0 = MEMF(esp + 0x3C); /* movss */
    xmm1 = MEMF(esp + 0x38); /* movss */
    xmm6 = xmm6 - xmm0; /* subss */
    xmm0 = xmm0 - MEMF(eax + 4); /* subss */
    xmm5 = xmm5 - xmm1; /* subss */
    xmm1 = xmm1 - MEMF(eax); /* subss */
    xmm7 = xmm7 - xmm2; /* subss */
    xmm2 = xmm2 - MEMF(eax + 8); /* subss */
    xmm4 = xmm0; /* movaps */
    xmm4 = xmm4 * xmm7; /* mulss */
    xmm3 = xmm2; /* movaps */
    xmm3 = xmm3 * xmm6; /* mulss */
    xmm3 = xmm3 - xmm4; /* subss */
    xmm4 = xmm1; /* movaps */
    xmm1 = xmm1 * xmm6; /* mulss */
    xmm0 = xmm0 * xmm5; /* mulss */
    xmm0 = xmm0 - xmm1; /* subss */
    xmm4 = xmm4 * xmm7; /* mulss */
    xmm2 = xmm2 * xmm5; /* mulss */
    xmm4 = xmm4 - xmm2; /* subss */
    MEMF(esp + 0x34) = xmm0; /* movss */
    xmm0 = xmm0 * xmm0; /* mulss */
    xmm1 = xmm4; /* movaps */
    xmm1 = xmm1 * xmm4; /* mulss */
    xmm0 = xmm0 + xmm1; /* addss */
    xmm1 = xmm3; /* movaps */
    xmm1 = xmm1 * xmm3; /* mulss */
    xmm0 = xmm0 + xmm1; /* addss */
    xmm1 = 0.0f; /* xorps self = zero */
    /* ucomiss xmm0, xmm1 - sets EFLAGS */
    /* lahf - load AH from flags (used in FPU compare idiom) */
    (void)0; /* test HI8(eax), 0x44 - flags set for next jcc */
    MEMF(esp + 0x2C) = xmm3; /* movss */
    MEMF(esp + 0x30) = xmm4; /* movss */
    MEMF(esp + 0x14) = xmm0; /* movss */
    if (1 /* jp after test - parity */) goto loc_001833AA; /* jp: parity */

loc_0018339F: ;
    xmm4 = xmm1; /* movaps */
    xmm3 = xmm1; /* movaps */
    xmm2 = xmm1; /* movaps */
    goto loc_001833E4;

loc_001833AA: ;
    fp_push(MEMF(esp + 0x14)); /* fld float */
    fp_top() = sqrt(fp_top()); /* fsqrt */
    /* FPU: fdivr dword ptr [0x648ce4] */
    fp_push(MEMF(esp + 0x2C)); /* fld float */
    fp_st1() *= fp_top(); fp_pop(); /* fmul */
    MEMF(esp + 0x2C) = (float)fp_top(); fp_popp(); /* fstp */
    fp_push(MEMF(esp + 0x30)); /* fld float */
    xmm4 = MEMF(esp + 0x2C); /* movss */
    fp_st1() *= fp_top(); fp_pop(); /* fmul */
    MEMF(esp + 0x30) = (float)fp_top(); fp_popp(); /* fstp */
    xmm3 = MEMF(esp + 0x30); /* movss */
    fp_st1() *= fp_top(); fp_pop(); /* fmul */
    MEMF(esp + 0x34) = (float)fp_top(); fp_popp(); /* fstp */
    xmm2 = MEMF(esp + 0x34); /* movss */

loc_001833E4: ;
    xmm7 = MEMF(esp + 0x38); /* movss */
    xmm6 = MEMF(esp + 0x3C); /* movss */
    xmm5 = MEMF(esp + 0x40); /* movss */
    xmm0 = xmm4; /* movaps */
    xmm0 = xmm0 + xmm7; /* addss */
    eax = (int32_t)xmm0; /* cvttss2si */
    eax = SX16(LO16(eax));
    xmm0 = (float)(int32_t)eax; /* cvtsi2ss */
    MEMF(edi) = xmm0; /* movss */
    xmm0 = xmm3; /* movaps */
    xmm0 = xmm0 + xmm6; /* addss */
    eax = (int32_t)xmm0; /* cvttss2si */
    eax = SX16(LO16(eax));
    xmm0 = (float)(int32_t)eax; /* cvtsi2ss */
    MEMF(edi + 4) = xmm0; /* movss */
    xmm0 = xmm2; /* movaps */
    xmm0 = xmm0 + xmm5; /* addss */
    eax = (int32_t)xmm0; /* cvttss2si */
    eax = SX16(LO16(eax));
    xmm0 = (float)(int32_t)eax; /* cvtsi2ss */
    eax = (int32_t)MEMF(esp + 0x24); /* cvttss2si */
    MEMF(edi + 8) = xmm0; /* movss */
    eax = SX16(LO16(eax));
    xmm0 = (float)(int32_t)eax; /* cvtsi2ss */
    MEMF(edi + 0x14) = xmm1; /* movss */
    MEM8(edi + 0xF) = LO8(ecx);
    MEMF(edi + 0x10) = xmm0; /* movss */
    MEM8(edi + 0xC) = LO8(ebx);
    MEM8(edi + 0xD) = LO8(ebx);
    MEM8(edi + 0xE) = LO8(ebx);
    MEM16(edi + 0x18) = LO16(edx);
    edi = edi + 0x1C;
    xmm7 = xmm7 - xmm4; /* subss */
    eax = (int32_t)xmm7; /* cvttss2si */
    eax = SX16(LO16(eax));
    xmm1 = (float)(int32_t)eax; /* cvtsi2ss */
    xmm6 = xmm6 - xmm3; /* subss */
    eax = (int32_t)xmm6; /* cvttss2si */
    eax = SX16(LO16(eax));
    MEMF(edi) = xmm1; /* movss */
    xmm1 = (float)(int32_t)eax; /* cvtsi2ss */
    xmm5 = xmm5 - xmm2; /* subss */
    eax = (int32_t)xmm5; /* cvttss2si */
    eax = SX16(LO16(eax));
    MEMF(edi + 4) = xmm1; /* movss */
    MEMF(edi + 0x10) = xmm0; /* movss */
    xmm0 = MEMF(0x64AC08); /* movss */
    xmm1 = (float)(int32_t)eax; /* cvtsi2ss */
    MEM8(edi + 0xF) = LO8(ecx);
    MEMF(edi + 8) = xmm1; /* movss */
    MEMF(edi + 0x14) = xmm0; /* movss */
    MEM8(edi + 0xC) = LO8(ebx);
    MEM8(edi + 0xD) = LO8(ebx);
    MEM8(edi + 0xE) = LO8(ebx);
    MEM16(edi + 0x18) = LO16(edx);
    edi = edi + 0x1C;
    PUSH32(esp, ebx);
    ecx = edi + -112;
    PUSH32(esp, ecx);
    eax = 4;
    ecx = esi;
    PUSH32(esp, 0); sub_0013BB50(); /* call 0x0013BB50 */

loc_001834D5: ;
    PUSH32(esp, 2);
    PUSH32(esp, 1);
    PUSH32(esp, 0);
    eax = esi;
    PUSH32(esp, 0); sub_0013BF00(); /* call 0x0013BF00 */

loc_001834E2: ;
    PUSH32(esp, 2);
    PUSH32(esp, 3);
    PUSH32(esp, 1);
    eax = esi;
    PUSH32(esp, 0); sub_0013BF00(); /* call 0x0013BF00 */

loc_001834EF: ;
    eax = ebp;
    ebp--;
    MEM32(esp + 0x28) = eax;
    if (((int32_t)ebp >= 0)) goto loc_00183501; /* jns: not sign (positive) */

loc_001834F8: ;
    edx = MEM32(esp + 0x54);
    ebp = ZX8(MEM8(edx + 0x41));
    ebp--;

loc_00183501: ;
    ecx = MEM32(esp + 0x54);
    ecx = (uint32_t)(int32_t)SMEM8(ecx + 0x4D);
    (void)0; /* cmp eax, ecx - flags set for next jcc */
    MEM32(esp + 0x1C) = ecx;
    if (CMP_EQ(eax, ecx)) goto loc_0018356D; /* je: equal / zero */

loc_00183511: ;
    edx = MEM32(esp + 0x38);
    eax = MEM32(esp + 0x3C);
    ecx = MEM32(esp + 0x40);
    MEM32(esp + 0x44) = edx;
    edx = ebp;
    edx = (uint32_t)((int32_t)edx * (int32_t)0x1C);
    MEM32(esp + 0x48) = eax;
    eax = MEM32(esp + 0x18);
    xmm0 = MEMF(eax + edx + 0x14); /* movss */
    eax = eax + edx;
    MEM32(esp + 0x4C) = ecx;
    ecx = eax;
    edx = MEM32(ecx);
    MEM32(esp + 0x38) = edx;
    edx = MEM32(ecx + 4);
    ecx = MEM32(ecx + 8);
    MEM32(esp + 0x3C) = edx;
    SET_LO8(edx, MEM8(eax + 0x10));
    eax = MEM32(esp + 0x28);
    MEM32(esp + 0x40) = ecx;
    ecx = MEM32(esp + 0x1C);
    (void)0; /* cmp eax, ecx - flags set for next jcc */
    MEM8(esp + 0x13) = LO8(edx);
    MEMF(esp + 0x24) = xmm0; /* movss */
    if (CMP_NE(eax, ecx)) goto loc_001832EC; /* jne: not equal / not zero */

loc_0018356D: ;
    POP32(esp, edi);

loc_0018356E: ;
    POP32(esp, esi);
    POP32(esp, ebp);

loc_00183570: ;
    POP32(esp, ebx);
    esp = esp + 0x40;
    esp += 4; return; /* ret */

    #undef fp_push
    #undef fp_pop
    #undef fp_popp
    #undef fp_top
    #undef fp_st1
}

/**
 * sub_00183580
 * Original: 0x00183580 - 0x001835D4 (84 bytes, 34 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00183580(void)
{
    int _flags = 0; /* fallback flag var */

loc_00183580: ;
    edx = MEM32(esp + 0xC);
    (void)0; /* test edx, edx - flags set for next jcc */
    ecx = MEM32(esp + 4);
    eax = MEM32(ecx + 0x144);
    PUSH32(esp, esi);
    if (TEST_NZ(edx, edx)) goto loc_001835A7; /* jne: not equal / not zero */

loc_00183593: ;
    edx = MEM32(esp + 0xC);
    edx = MEM32(edx);
    if (CMP_NE(edx, MEM32(eax))) goto loc_001835D2; /* jne: not equal / not zero */

loc_0018359D: ;
    MEM8(ecx + 0x3A) = MEM8(ecx + 0x3A) | 8;
    MEM8(ecx + 0x50) = 0;
    POP32(esp, esi);
    esp += 4; return; /* ret */

loc_001835A7: ;
    if (CMP_NE(edx, 0x2D)) goto loc_001835D2; /* jne: not equal / not zero */

loc_001835AC: ;
    ecx = MEM32(esp + 0xC);
    edx = MEM32(eax);
    esi = MEM32(ecx);
    if (CMP_NE(edx, esi)) goto loc_001835C5; /* jne: not equal / not zero */

loc_001835B8: ;
    edx = MEM32(ecx + 4);
    MEM32(eax) = edx;
    SET_LO8(ecx, MEM8(ecx + 9));
    MEM8(eax + 4) = LO8(ecx);
    POP32(esp, esi);
    esp += 4; return; /* ret */

loc_001835C5: ;
    if (CMP_NE(edx, MEM32(ecx + 4))) goto loc_001835D2; /* jne: not equal / not zero */

loc_001835CA: ;
    MEM32(eax) = esi;
    SET_LO8(edx, MEM8(ecx + 8));
    MEM8(eax + 4) = LO8(edx);

loc_001835D2: ;
    POP32(esp, esi);
    esp += 4; return; /* ret */

}

/**
 * sub_001835E0
 * Original: 0x001835E0 - 0x0018374C (364 bytes, 80 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_001835E0(void)
{
    float xmm0, xmm5;

loc_001835E0: ;
    esp = esp - 0x7C;
    xmm5 = 0.0f; /* xorps self = zero */
    PUSH32(esp, edi);
    MEM32(esp + 0x30) = 0x29;
    MEMF(esp + 8) = xmm5; /* movss */
    MEMF(esp + 0xC) = xmm5; /* movss */
    MEM16(esp + 0x34) = 0x12;
    MEM16(esp + 0x36) = 0xE;
    PUSH32(esp, 0); sub_003E2480(); /* call 0x003E2480 */

loc_0018360E: ;
    edi = eax;
    edi = edi & 1;
    edi = edi << 1;
    PUSH32(esp, 0); sub_003E2480(); /* call 0x003E2480 */

loc_0018361A: ;
    xmm0 = MEMF(0x649ECC); /* movss */
    eax = eax & 1;
    edi = edi | eax;
    MEMF(esp + 0x3C) = xmm0; /* movss */
    xmm0 = MEMF(esi + 0x78); /* movss */
    SET_LO8(eax, LO8(eax) | 0xFF);
    MEMF(esp + 0x48) = xmm0; /* movss */
    xmm0 = MEMF(esi + 0x7C); /* movss */
    edi = edi << 6;
    edi = edi | 0x1CE01;
    MEMF(esp + 0x4C) = xmm0; /* movss */
    xmm0 = MEMF(esi + 0x80); /* movss */
    MEM32(esp + 0x70) = edi;
    MEMF(esp + 0x6C) = xmm5; /* movss */
    MEM8(esp + 0x78) = LO8(eax);
    MEM8(esp + 0x79) = LO8(eax);
    MEM8(esp + 0x7A) = LO8(eax);
    MEM8(esp + 0x7B) = 0;
    MEM16(esp + 0x38) = 0x28;
    MEM8(esp + 0x10) = 0x57;
    MEM8(esp + 0x11) = 0x55;
    MEM8(esp + 0x12) = 0x5A;
    MEMF(esp + 0x50) = xmm0; /* movss */
    MEMF(esp + 0x54) = xmm5; /* movss */
    MEMF(esp + 0x58) = xmm5; /* movss */
    MEMF(esp + 0x5C) = xmm5; /* movss */
    PUSH32(esp, 0); sub_003E2480(); /* call 0x003E2480 */

loc_001836A4: ;
    edx = ((int32_t)eax < 0) ? 0xFFFFFFFF : 0; /* cdq */
    ecx = 0x38;
    { int64_t _dividend = ((int64_t)(int32_t)edx << 32) | eax;
      eax = (uint32_t)((int32_t)(_dividend / (int32_t)ecx));
      edx = (uint32_t)((int32_t)(_dividend % (int32_t)ecx)); }
    SET_LO8(edx, LO8(edx) - LO8(ecx));
    MEM8(esp + 0x13) = LO8(edx);
    PUSH32(esp, 0); sub_003E2480(); /* call 0x003E2480 */

loc_001836B7: ;
    edx = ((int32_t)eax < 0) ? 0xFFFFFFFF : 0; /* cdq */
    ecx = 0xA;
    { int64_t _dividend = ((int64_t)(int32_t)edx << 32) | eax;
      eax = (uint32_t)((int32_t)(_dividend / (int32_t)ecx));
      edx = (uint32_t)((int32_t)(_dividend % (int32_t)ecx)); }
    edx = edx + 0x1E;
    MEM16(esp + 4) = LO16(edx);
    PUSH32(esp, 0); sub_003E1D70(); /* call 0x003E1D70 */

loc_001836CC: ;
    edx = MEM32(esp + 0x84);
    xmm0 = xmm0 * MEMF(0x648F08); /* mulss */
    xmm0 = xmm0 + MEMF(0x648FEC); /* addss */
    PUSH32(esp, edx);
    PUSH32(esp, 0);
    eax = 2;
    PUSH32(esp, 0);
    MEM32(esp + 0x24) = eax;
    MEM32(esp + 0x30) = eax;
    ecx = 4;
    eax = esp + 0x10;
    PUSH32(esp, 1);
    PUSH32(esp, eax);
    MEMF(esp + 0x58) = xmm0; /* movss */
    MEMF(esp + 0x54) = xmm0; /* movss */
    MEMF(esp + 0x74) = xmm5; /* movss */
    MEMF(esp + 0x78) = xmm5; /* movss */
    MEMF(esp + 0x7C) = xmm5; /* movss */
    MEM32(esp + 0x28) = ecx;
    MEM32(esp + 0x30) = 0;
    MEM32(esp + 0x34) = ecx;
    MEM32(esp + 0x3C) = 0;
    MEM32(esp + 0x40) = 0x303;
    PUSH32(esp, 0); sub_00105450(); /* call 0x00105450 */

loc_00183744: ;
    esp = esp + 0x14;
    POP32(esp, edi);
    esp = esp + 0x7C;
    esp += 4; return; /* ret */

}

/**
 * sub_00183750
 * Original: 0x00183750 - 0x00183A27 (727 bytes, 185 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00183750(void)
{
    uint32_t ebp;
    int _flags = 0; /* fallback flag var */
    float xmm0, xmm5;
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_00183750: ;
    esp = esp - 0xAC;
    edx = MEM32(0x595D18);
    ecx = MEM32(0x595D14);
    PUSH32(esp, ebx);
    PUSH32(esp, ebp);
    PUSH32(esp, esi);
    PUSH32(esp, edi);
    edi = 0; /* xor self */
    PUSH32(esp, edi);
    PUSH32(esp, edi);
    PUSH32(esp, edi);
    esi = eax;
    SET_LO8(eax, MEM8(esp + 0xD0));
    PUSH32(esp, 0xE);
    PUSH32(esp, 0xE);
    MEM8(esp + 0x2C) = LO8(eax);
    eax = 0x14;
    MEM32(esp + 0x38) = edx;
    PUSH32(esp, edi);
    PUSH32(esp, eax);
    edx = esp + 0x3C;
    MEM32(esp + 0x3C) = ecx;
    ecx = MEM32(0x595D1C);
    MEM8(esp + 0x51) = LO8(eax);
    MEM16(esp + 0x4A) = LO16(eax);
    PUSH32(esp, edx);
    SET_LO8(edx, MEM8(esp + 0xE8));
    eax = esi + 0xC;
    MEM32(esp + 0x48) = ecx;
    MEM16(esp + 0x4C) = 0x12C;
    MEM32(esp + 0x50) = 0x10;
    MEM8(esp + 0x54) = 2;
    PUSH32(esp, 0); sub_0017A580(); /* call 0x0017A580 */

loc_001837C6: ;
    ebp = eax;
    esp = esp + 0x20;
    if (TEST_Z(ebp, ebp)) goto loc_00183A1A; /* je: equal / zero */

loc_001837D3: ;
    ebx = MEM32(ebp + 0x144);
    edx = MEM32(esp + 0x18);
    ecx = ebx;
    MEM32(ecx) = edi;
    eax = 0; /* xor self */
    MEM32(ecx + 4) = eax;
    MEM32(ecx + 8) = edx;
    ecx = esi;
    esi = MEM32(esp + 0xC0);
    eax = ecx;
    ecx = ecx >> 2;
    edi = ebx + 0xC;
    MEM32(ebx + 4) = edi;
    memcpy((void*)XBOX_PTR(edi), (void*)XBOX_PTR(esi), ecx * 4);
    esi += ecx * 4; edi += ecx * 4; ecx = 0; /* rep movsd */
    ecx = eax;
    ecx = ecx & 3;
    edx = ebp + 0x2C;
    memcpy((void*)XBOX_PTR(edi), (void*)XBOX_PTR(esi), ecx);
    esi += ecx; edi += ecx; ecx = 0; /* rep movsb */
    ecx = ZX8(MEM8(esp + 0xC4));
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, edx);
    PUSH32(esp, ebp);
    PUSH32(esp, 0); RECOMP_ICALL_SAFE(MEM32(ecx * 4 + 0x598D84), _icall_esp); /* indirect call */
    }

loc_0018381A: ;
    esp = esp + 8;
    if (TEST_NZ(LO8(eax), LO8(eax))) goto loc_00183872; /* jne: not equal / not zero */

loc_00183821: ;
    SET_LO8(eax, MEM8(0x8472BD));
    if (TEST_NZ(LO8(eax), LO8(eax))) goto loc_00183865; /* jne: not equal / not zero */

loc_0018382A: ;
    edx = ebp;
    PUSH32(esp, 0); sub_000DAD90(); /* call 0x000DAD90 */

loc_00183831: ;
    eax = MEM32(ebp);
    if (CMP_L(eax, 2)) goto loc_00183865; /* jl: less (signed <) */

loc_00183839: ;
    eax = (uint32_t)((int32_t)eax * (int32_t)0x70);
    eax = MEM32(eax + 0x5906BC);
    if (TEST_Z(eax, eax)) goto loc_00183859; /* je: equal / zero */

loc_00183846: ;
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, ebp);
    PUSH32(esp, 0); RECOMP_ICALL_SAFE(eax, _icall_esp); /* indirect call */
    }

loc_00183849: ;
    esp = esp + 4;
    POP32(esp, edi);
    POP32(esp, esi);
    POP32(esp, ebp);
    eax = 0; /* xor self */
    POP32(esp, ebx);
    esp = esp + 0xAC;
    esp += 4; return; /* ret */

loc_00183859: ;
    edx = 1;
    eax = ebp;
    PUSH32(esp, 0); sub_000DA5E0(); /* call 0x000DA5E0 */

loc_00183865: ;
    POP32(esp, edi);
    POP32(esp, esi);
    POP32(esp, ebp);
    eax = 0; /* xor self */
    POP32(esp, ebx);
    esp = esp + 0xAC;
    esp += 4; return; /* ret */

loc_00183872: ;
    MEM32(esp + 0x10) = 0x60;
    MEM32(esp + 0x14) = 0x61;
    MEM32(esp + 0x18) = 0x62;
    MEM32(esp + 0x1C) = 0x63;
    PUSH32(esp, 0); sub_003E2480(); /* call 0x003E2480 */

loc_00183897: ;
    eax = eax & 0x80000003u;
    if (((int32_t)eax >= 0)) goto loc_001838A3; /* jns: not sign (positive) */

loc_0018389E: ;
    eax--;
    eax = eax | 0xFFFFFFFCu;
    eax++;

loc_001838A3: ;
    eax = MEM32(esp + eax * 4 + 0x10);
    xmm5 = 0.0f; /* xorps self = zero */
    MEM32(esp + 0x6C) = eax;
    MEM16(esp + 0x40) = 0x12C;
    MEMF(esp + 0x44) = xmm5; /* movss */
    MEMF(esp + 0x48) = xmm5; /* movss */
    MEM8(esp + 0x4C) = 0xFF;
    MEM8(esp + 0x4D) = 0xFF;
    MEM8(esp + 0x4E) = 0xFF;
    MEM8(esp + 0x4F) = 0xFF;
    PUSH32(esp, 0); sub_003E1D70(); /* call 0x003E1D70 */

loc_001838DA: ;
    ecx = MEM32(esp + 0x20);
    edx = MEM32(esp + 0x24);
    eax = MEM32(esp + 0x28);
    xmm0 = xmm0 * MEMF(0x648EBC); /* mulss */
    xmm0 = xmm0 + MEMF(0x649EC8); /* addss */
    MEM32(esp + 0x84) = ecx;
    ecx = MEM32(0x595D18);
    MEM32(esp + 0x88) = edx;
    edx = MEM32(0x595D1C);
    MEM32(esp + 0x8C) = eax;
    eax = MEM32(0x595D14);
    esi = 1;
    MEMF(esp + 0x80) = xmm0; /* movss */
    MEMF(esp + 0x7C) = xmm0; /* movss */
    xmm0 = MEMF(0x648D14); /* movss */
    MEM32(esp + 0x90) = eax;
    MEM32(esp + 0x94) = ecx;
    MEM32(esp + 0x98) = edx;
    MEM32(esp + 0x9C) = eax;
    MEM32(esp + 0xA0) = ecx;
    MEM32(esp + 0xA4) = edx;
    MEMF(esp + 0xA8) = xmm5; /* movss */
    MEM16(esp + 0x70) = LO16(esi);
    MEM16(esp + 0x72) = 0xFF;
    MEM16(esp + 0x74) = LO16(esi);
    MEMF(esp + 0x78) = xmm0; /* movss */
    PUSH32(esp, 0); sub_003E2480(); /* call 0x003E2480 */

loc_00183987: ;
    edi = eax;
    edi = edi & esi;
    edi = edi | 0x980;
    edi = edi << 1;
    PUSH32(esp, 0); sub_003E2480(); /* call 0x003E2480 */

loc_00183998: ;
    eax = eax & esi;
    edx = 2;
    edi = edi | eax;
    SET_LO8(eax, LO8(eax) | 0xFF);
    ecx = 0; /* xor self */
    MEM32(esp + 0x54) = edx;
    MEM32(esp + 0x60) = edx;
    edx = MEM32(esp + 0xC8);
    PUSH32(esp, edx);
    PUSH32(esp, ecx);
    MEM8(esp + 0xBC) = LO8(eax);
    MEM8(esp + 0xBD) = LO8(eax);
    MEM8(esp + 0xBE) = LO8(eax);
    eax = 4;
    PUSH32(esp, ecx);
    MEM32(esp + 0x5C) = eax;
    MEM32(esp + 0x68) = eax;
    eax = esp + 0x4C;
    PUSH32(esp, esi);
    edi = edi << 6;
    PUSH32(esp, eax);
    MEM32(esp + 0xC0) = edi;
    MEM8(esp + 0xCB) = 0;
    MEM32(esp + 0xC4) = ecx;
    MEM8(esp + 0xCC) = 0xFF;
    MEM32(esp + 0x6C) = ecx;
    MEM32(esp + 0x78) = ecx;
    MEM32(esp + 0x7C) = 0x303;
    PUSH32(esp, 0); sub_00105450(); /* call 0x00105450 */

loc_00183A15: ;
    esp = esp + 0x14;
    MEM32(ebx) = eax;

loc_00183A1A: ;
    POP32(esp, edi);
    POP32(esp, esi);
    eax = ebp;
    POP32(esp, ebp);
    POP32(esp, ebx);
    esp = esp + 0xAC;
    esp += 4; return; /* ret */

}

/**
 * sub_00183A30
 * Original: 0x00183A30 - 0x00183A6C (60 bytes, 19 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00183A30(void)
{
    int _flags = 0; /* fallback flag var */

loc_00183A30: ;
    eax = MEM32(esp + 4);
    ecx = MEM32(eax + 0x144);
    ecx = MEM32(ecx + 4);
    eax = MEM32(ecx);
    edx = MEM32(eax + 0x64);
    if (TEST_Z(edx, edx)) { sub_00183A6C(); return; } /* je: equal / zero */

loc_00183A46: ;
    SET_LO8(edx, MEM8(eax + 0x10B));
    if (CMP_NE(LO8(edx), MEM8(ecx + 4))) { sub_00183A6C(); return; } /* jne: not equal / not zero */

loc_00183A51: ;
    edx = MEM32(eax + 0x78);
    ecx = MEM32(esp + 8);
    MEM32(ecx) = edx;
    edx = MEM32(eax + 0x7C);
    MEM32(ecx + 4) = edx;
    eax = MEM32(eax + 0x80);
    MEM32(ecx + 8) = eax;
    SET_LO8(eax, 1);
    esp += 4; return; /* ret */

}

/**
 * sub_00183A70
 * Original: 0x00183A70 - 0x00183C2B (443 bytes, 97 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00183A70(void)
{
    uint32_t ebp;
    float xmm0, xmm1, xmm2, xmm3, xmm5;

loc_00183A70: ;
    PUSH32(esp, ebp);
    ebp = esp;
    esp = esp & 0xFFFFFFF0u;
    esp = esp - 0x60;
    eax = MEM32(ebp + 8);
    ecx = MEM32(eax + 0x144);
    edx = MEM32(ecx + 4);
    edx = MEM32(edx);
    xmm0 = MEMF(0x648E18); /* movss */
    xmm1 = MEMF(edx + 0x44); /* movss */
    xmm5 = MEMF(0x648D14); /* movss */
    PUSH32(esp, 0);
    PUSH32(esp, 0);
    PUSH32(esp, 0);
    esp = esp - 0xC;
    xmm1 = xmm1 * xmm0; /* mulss */
    MEMF(esp + 8) = xmm1; /* movss */
    xmm1 = MEMF(edx + 0x40); /* movss */
    xmm1 = xmm1 * xmm0; /* mulss */
    MEMF(esp + 4) = xmm1; /* movss */
    xmm1 = MEMF(edx + 0x3C); /* movss */
    xmm1 = xmm1 * xmm0; /* mulss */
    MEMF(esp) = xmm1; /* movss */
    PUSH32(esp, 0x3F800000);
    eax = esp + 0x3C;
    PUSH32(esp, 0x3F800000);
    PUSH32(esp, eax);
    PUSH32(esp, 0); sub_003E2E60(); /* call 0x003E2E60 */

loc_00183AE0: ;
    xmm0 = MEMF(edx + 0x60); /* movss */
    xmm3 = MEMF(esp + 0x44); /* movss */
    xmm1 = MEMF(edx + 0x38); /* movss */
    MEMF(esp + 0x74) = xmm0; /* movss */
    xmm0 = MEMF(edx + 0x64); /* movss */
    MEMF(esp + 0x78) = xmm0; /* movss */
    xmm0 = MEMF(edx + 0x68); /* movss */
    MEMF(esp + 0x7C) = xmm0; /* movss */
    xmm0 = MEMF(edx + 0x34); /* movss */
    xmm2 = xmm0; /* movaps */
    xmm3 = xmm3 * xmm2; /* mulss */
    MEMF(esp + 0x44) = xmm3; /* movss */
    xmm3 = MEMF(esp + 0x48); /* movss */
    xmm3 = xmm3 * xmm2; /* mulss */
    MEMF(esp + 0x48) = xmm3; /* movss */
    xmm3 = MEMF(esp + 0x4C); /* movss */
    xmm3 = xmm3 * xmm2; /* mulss */
    MEMF(esp + 0x4C) = xmm3; /* movss */
    xmm3 = MEMF(esp + 0x50); /* movss */
    xmm3 = xmm3 * xmm2; /* mulss */
    xmm2 = MEMF(esp + 0x54); /* movss */
    xmm2 = xmm2 * xmm1; /* mulss */
    MEMF(esp + 0x54) = xmm2; /* movss */
    xmm2 = MEMF(esp + 0x58); /* movss */
    xmm2 = xmm2 * xmm1; /* mulss */
    MEMF(esp + 0x58) = xmm2; /* movss */
    xmm2 = MEMF(esp + 0x5C); /* movss */
    xmm2 = xmm2 * xmm1; /* mulss */
    MEMF(esp + 0x5C) = xmm2; /* movss */
    xmm2 = MEMF(esp + 0x60); /* movss */
    xmm2 = xmm2 * xmm1; /* mulss */
    xmm1 = MEMF(esp + 0x64); /* movss */
    xmm1 = xmm1 * xmm0; /* mulss */
    MEMF(esp + 0x64) = xmm1; /* movss */
    xmm1 = MEMF(esp + 0x68); /* movss */
    xmm1 = xmm1 * xmm0; /* mulss */
    MEMF(esp + 0x68) = xmm1; /* movss */
    xmm1 = MEMF(esp + 0x6C); /* movss */
    xmm1 = xmm1 * xmm0; /* mulss */
    esp = esp + 0x24;
    MEMF(esp + 0x48) = xmm1; /* movss */
    xmm1 = MEMF(esp + 0x4C); /* movss */
    xmm1 = xmm1 * xmm0; /* mulss */
    xmm0 = 0.0f; /* xorps self = zero */
    ecx = esp + 0x20;
    PUSH32(esp, ecx);
    edx = esp + 0xC;
    MEMF(esp + 0xC) = xmm0; /* movss */
    MEMF(esp + 0x10) = xmm0; /* movss */
    xmm0 = MEMF(0x649390); /* movss */
    PUSH32(esp, edx);
    eax = esp + 0x1C;
    MEMF(esp + 0x34) = xmm3; /* movss */
    MEMF(esp + 0x44) = xmm2; /* movss */
    MEMF(esp + 0x54) = xmm1; /* movss */
    MEMF(esp + 0x18) = xmm0; /* movss */
    PUSH32(esp, eax);
    PUSH32(esp, 0); sub_00428393(); /* call 0x00428393 */

loc_00183C02: ;
    eax = MEM32(ebp + 0xC);
    xmm0 = MEMF(esp + 0x14); /* movss */
    MEMF(eax) = xmm0; /* movss */
    xmm0 = MEMF(esp + 0x18); /* movss */
    MEMF(eax + 4) = xmm0; /* movss */
    xmm0 = MEMF(esp + 0x1C); /* movss */
    MEMF(eax + 8) = xmm0; /* movss */
    SET_LO8(eax, 1);
    esp = ebp;
    POP32(esp, ebp);
    esp += 4; return; /* ret */

}

/**
 * sub_00183C30
 * Original: 0x00183C30 - 0x00183D89 (345 bytes, 112 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00183C30(void)
{
    uint32_t ebp;
    int _flags = 0; /* fallback flag var */
    float xmm0, xmm1, xmm2;
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_00183C30: ;
    eax = MEM32(0x7FA20C);
    esp = esp - 0x1C;
    (void)0; /* test eax, eax - flags set for next jcc */
    PUSH32(esp, ebx);
    PUSH32(esp, ebp);
    PUSH32(esp, esi);
    esi = MEM32(esp + 0x2C);
    ebp = MEM32(esi + 0x144);
    ebx = MEM32(esi + 0x140);
    PUSH32(esp, edi);
    if (CMP_LE(eax & eax, 0)) goto loc_00183D7C; /* jle: less or equal (signed <=) */

loc_00183C54: ;
    edi = esi + 0x2C;
    eax = edi;
    ecx = MEM32(eax);
    edx = MEM32(eax + 4);
    eax = MEM32(eax + 8);
    MEM32(esp + 0x14) = ecx;
    ecx = ZX8(MEM8(ebp + 8));
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, edi);
    PUSH32(esp, esi);
    MEM32(esp + 0x20) = edx;
    MEM32(esp + 0x24) = eax;
    PUSH32(esp, 0); RECOMP_ICALL_SAFE(MEM32(ecx * 4 + 0x598D84), _icall_esp); /* indirect call */
    }

loc_00183C7A: ;
    esp = esp + 8;
    if (TEST_NZ(LO8(eax), LO8(eax))) goto loc_00183C8B; /* jne: not equal / not zero */

loc_00183C81: ;
    POP32(esp, edi);
    POP32(esp, esi);
    POP32(esp, ebp);
    eax = 0; /* xor self */
    POP32(esp, ebx);
    esp = esp + 0x1C;
    esp += 4; return; /* ret */

loc_00183C8B: ;
    ebp = MEM32(ebp);
    if (TEST_Z(ebp, ebp)) goto loc_00183CA8; /* je: equal / zero */

loc_00183C92: ;
    edx = edi;
    eax = MEM32(edx);
    ebp = ebp + 0x70;
    MEM32(ebp) = eax;
    ecx = MEM32(edx + 4);
    MEM32(ebp + 4) = ecx;
    edx = MEM32(edx + 8);
    MEM32(ebp + 8) = edx;

loc_00183CA8: ;
    xmm0 = MEMF(edi); /* movss */
    xmm0 = xmm0 - MEMF(esp + 0x14); /* subss */
    MEMF(esp + 0x20) = xmm0; /* movss */
    xmm0 = MEMF(esi + 0x30); /* movss */
    xmm0 = xmm0 - MEMF(esp + 0x18); /* subss */
    MEMF(esp + 0x24) = xmm0; /* movss */
    xmm0 = MEMF(esi + 0x34); /* movss */
    xmm0 = xmm0 - MEMF(esp + 0x1C); /* subss */
    eax = esp + 0x20;
    MEMF(esp + 0x28) = xmm0; /* movss */
    MEM32(esp + 0x30) = eax;
    edx = MEM32(esp + 0x30);
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
    MEMF(esp + 0x10) = xmm1; /* movss */
    eax = (uint32_t)(int32_t)SMEM8(esi + 0x4E);
    xmm0 = MEMF(esp + 0x10); /* movss */
    ecx = eax + eax * 4;
    eax = ebx + ecx * 4;
    ecx = MEM32(edi);
    edx = eax;
    MEM32(edx) = ecx;
    ecx = MEM32(edi + 4);
    MEM32(edx + 4) = ecx;
    ecx = MEM32(edi + 8);
    MEM32(edx + 8) = ecx;
    MEMF(eax + 0xC) = xmm0; /* movss */
    MEM8(eax + 0x10) = 0xFF;
    SET_LO8(ecx, MEM8(esi + 0x4E));
    SET_LO8(ecx, LO8(ecx) + 1);
    SET_LO8(eax, LO8(ecx));
    MEM8(esi + 0x4E) = LO8(ecx);
    ecx = ZX8(MEM8(esi + 0x41));
    edx = SX8(LO8(eax));
    if (CMP_NE(edx, ecx)) goto loc_00183D53; /* jne: not equal / not zero */

loc_00183D4F: ;
    MEM8(esi + 0x4E) = 0;

loc_00183D53: ;
    SET_LO8(eax, MEM8(esi + 0x4C));
    SET_LO8(ebx, MEM8(esi + 0x4E));
    SET_LO8(eax, LO8(eax) + 1);
    MEM8(esi + 0x4C) = LO8(eax);
    SET_LO8(edx, LO8(eax));
    SET_LO8(eax, MEM8(esi + 0x4D));
    if (CMP_NE(LO8(ebx), LO8(eax))) goto loc_00183D7C; /* jne: not equal / not zero */

loc_00183D67: ;
    SET_LO8(eax, LO8(eax) + 1);
    MEM8(esi + 0x4D) = LO8(eax);
    eax = SX8(LO8(eax));
    if (CMP_NE(eax, ecx)) goto loc_00183D77; /* jne: not equal / not zero */

loc_00183D73: ;
    MEM8(esi + 0x4D) = 0;

loc_00183D77: ;
    SET_LO8(edx, LO8(edx) - 1);
    MEM8(esi + 0x4C) = LO8(edx);

loc_00183D7C: ;
    POP32(esp, edi);
    POP32(esp, esi);
    POP32(esp, ebp);
    eax = 1;
    POP32(esp, ebx);
    esp = esp + 0x1C;
    esp += 4; return; /* ret */

}

/**
 * sub_00183D90
 * Original: 0x00183D90 - 0x00183F32 (418 bytes, 121 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00183D90(void)
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
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_00183D90: ;
    PUSH32(esp, ecx);
    xmm6 = 0.0f; /* xorps self = zero */
    PUSH32(esp, ebx);
    PUSH32(esp, esi);
    esi = MEM32(esp + 0x10);
    (void)0; /* cmp MEM8(esi + 0x4C), 1 - flags set for next jcc */
    ebx = MEM32(esi + 0x140);
    PUSH32(esp, edi);
    xmm0 = xmm6; /* movaps */
    xmm1 = xmm6; /* movaps */
    if (CMP_LE(MEM8(esi + 0x4C), 1)) goto loc_00183F28; /* jle: less or equal (signed <=) */

loc_00183DB1: ;
    ecx = (uint32_t)(int32_t)SMEM8(esi + 0x4E);
    ecx--;
    if (((int32_t)ecx >= 0)) goto loc_00183DBD; /* jns: not sign (positive) */

loc_00183DB8: ;
    ecx = ZX8(MEM8(esi + 0x41));
    ecx--;

loc_00183DBD: ;
    eax = (uint32_t)(int32_t)SMEM8(esi + 0x4D);
    if (CMP_EQ(ecx, eax)) goto loc_00183EC7; /* je: equal / zero */

loc_00183DC9: ;
    xmm4 = MEMF(0x6495AC); /* movss */
    xmm5 = MEMF(0x648D14); /* movss */
    /* nop */

loc_00183DE0: ;
    eax = ecx;
    ecx--;
    if (((int32_t)ecx >= 0)) goto loc_00183DEA; /* jns: not sign (positive) */

loc_00183DE5: ;
    ecx = ZX8(MEM8(esi + 0x41));
    ecx--;

loc_00183DEA: ;
    edx = ecx + ecx * 4;
    eax = eax + eax * 4;
    xmm0 = xmm0 + MEMF(ebx + eax * 4 + 0xC); /* addss */
    /* comiss xmm0, xmm4 - sets EFLAGS */
    edi = ebx + edx * 4;
    edx = ebx + eax * 4;
    if ((xmm0 <= xmm4)) goto loc_00183EA9; /* jbe: below or equal (unsigned <=) */

loc_00183E05: ;
    xmm1 = MEMF(edx + 0xC); /* movss */
    /* ucomiss xmm1, xmm6 - sets EFLAGS */
    /* lahf - load AH from flags (used in FPU compare idiom) */
    if (1 /* jnp after test - parity */) goto loc_00183E7C; /* jnp: not parity */

loc_00183E13: ;
    xmm2 = MEMF(edi + 4); /* movss */
    xmm2 = xmm2 - MEMF(edx + 4); /* subss */
    xmm7 = MEMF(edi); /* movss */
    xmm3 = MEMF(edi + 8); /* movss */
    xmm3 = xmm3 - MEMF(edx + 8); /* subss */
    xmm0 = xmm0 - xmm4; /* subss */
    xmm0 = xmm0 / xmm1; /* divss */
    xmm1 = MEMF(edi); /* movss */
    xmm1 = xmm1 - MEMF(edx); /* subss */
    xmm1 = xmm1 * xmm0; /* mulss */
    xmm7 = xmm7 - xmm1; /* subss */
    xmm1 = MEMF(edi + 4); /* movss */
    xmm2 = xmm2 * xmm0; /* mulss */
    xmm1 = xmm1 - xmm2; /* subss */
    MEMF(edi + 4) = xmm1; /* movss */
    xmm1 = MEMF(edi + 8); /* movss */
    xmm3 = xmm3 * xmm0; /* mulss */
    xmm1 = xmm1 - xmm3; /* subss */
    MEMF(edi + 8) = xmm1; /* movss */
    MEMF(edi) = xmm7; /* movss */
    xmm1 = xmm5; /* movaps */
    xmm1 = xmm1 - xmm0; /* subss */
    xmm1 = xmm1 * MEMF(edx + 0xC); /* mulss */
    MEMF(edx + 0xC) = xmm1; /* movss */

loc_00183E7C: ;
    edx = (uint32_t)(int32_t)SMEM8(esi + 0x4D);
    if (CMP_EQ(ecx, edx)) goto loc_00183EA6; /* je: equal / zero */

loc_00183E84: ;
    eax = ZX8(MEM8(esi + 0x41));

loc_00183E88: ;
    SET_LO8(edx, MEM8(esi + 0x4D));
    SET_LO8(edx, LO8(edx) + 1);
    MEM8(esi + 0x4D) = LO8(edx);
    edx = SX8(LO8(edx));
    if (CMP_NE(edx, eax)) goto loc_00183E9B; /* jne: not equal / not zero */

loc_00183E97: ;
    MEM8(esi + 0x4D) = 0;

loc_00183E9B: ;
    MEM8(esi + 0x4C) = MEM8(esi + 0x4C) - 1;
    edx = (uint32_t)(int32_t)SMEM8(esi + 0x4D);
    if (CMP_NE(ecx, edx)) goto loc_00183E88; /* jne: not equal / not zero */

loc_00183EA6: ;
    xmm0 = xmm4; /* movaps */

loc_00183EA9: ;
    eax = (uint32_t)(int32_t)SMEM8(esi + 0x4D);
    if (CMP_NE(ecx, eax)) goto loc_00183DE0; /* jne: not equal / not zero */

loc_00183EB5: ;
    /* ucomiss xmm0, xmm6 - sets EFLAGS */
    /* lahf - load AH from flags (used in FPU compare idiom) */
    if (1 /* jnp after test - parity */) goto loc_00183EC7; /* jnp: not parity */

loc_00183EBE: ;
    xmm5 = xmm5 / xmm0; /* divss */
    xmm1 = xmm5; /* movaps */
    goto loc_00183ECA;

loc_00183EC7: ;
    xmm1 = xmm6; /* movaps */

loc_00183ECA: ;
    if (CMP_LE(MEM8(esi + 0x4C), 1)) goto loc_00183F28; /* jle: less or equal (signed <=) */

loc_00183ED0: ;
    xmm1 = xmm1 * MEMF(0x648EEC); /* mulss */
    edi = (uint32_t)(int32_t)SMEM8(esi + 0x4E);
    MEMF(esp + 0x14) = xmm0; /* movss */
    MEMF(esp + 0xC) = xmm1; /* movss */
    PUSH32(esp, ebp);
    /* nop */

loc_00183EF0: ;
    edi--;
    if (((int32_t)edi >= 0)) goto loc_00183EF8; /* jns: not sign (positive) */

loc_00183EF3: ;
    edi = ZX8(MEM8(esi + 0x41));
    edi--;

loc_00183EF8: ;
    fp_push(MEMF(esp + 0x10)); /* fld float */
    ecx = edi + edi * 4;
    fp_st1() *= fp_top(); fp_pop(); /* fmul */
    ebp = ebx + ecx * 4;
    PUSH32(esp, 0); sub_00471288(); /* call 0x00471288 */

loc_00183F0B: ;
    xmm0 = MEMF(esp + 0x18); /* movss */
    xmm0 = xmm0 - MEMF(ebp + 0xC); /* subss */
    MEM8(ebp + 0x10) = LO8(eax);
    edx = (uint32_t)(int32_t)SMEM8(esi + 0x4D);
    (void)0; /* cmp edi, edx - flags set for next jcc */
    MEMF(esp + 0x18) = xmm0; /* movss */
    if (CMP_NE(edi, edx)) goto loc_00183EF0; /* jne: not equal / not zero */

loc_00183F27: ;
    POP32(esp, ebp);

loc_00183F28: ;
    POP32(esp, edi);
    POP32(esp, esi);
    eax = 1;
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
 * sub_00183F40
 * Original: 0x00183F40 - 0x00184569 (1577 bytes, 430 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00183F40(void)
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
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_00183F40: ;
    esp = esp - 0x34;
    PUSH32(esp, ebx);
    ebx = MEM32(esp + 0x3C);
    if (CMP_L(MEM8(ebx + 0x4C), 2)) goto loc_00184564; /* jl: less (signed <) */

loc_00183F52: ;
    eax = MEM32(ebx + 0x140);
    PUSH32(esp, esi);
    esi = (uint32_t)(int32_t)SMEM16(esp + 0x44);
    PUSH32(esp, edi);
    edi = ZX8(MEM8(ebx + 0x41));
    edi = edi + 5;
    MEM32(esp + 0x14) = eax;
    edi = (uint32_t)((int32_t)edi * (int32_t)0x38);
    eax = MEM32(ebx + esi * 4 + 0x130);
    if (TEST_NZ(eax, eax)) goto loc_00183F9C; /* jne: not equal / not zero */

loc_00183F78: ;
    PUSH32(esp, 0xFFFFFFFFu);
    PUSH32(esp, 0x26);
    ecx = edi + edi;
    PUSH32(esp, 0x5F3E90);
    PUSH32(esp, ecx);
    PUSH32(esp, 0); sub_002AF0E0(); /* call 0x002AF0E0 */

loc_00183F8A: ;
    esp = esp + 0x10;
    (void)0; /* test eax, eax - flags set for next jcc */
    MEM32(ebx + esi * 4 + 0x130) = eax;
    if (TEST_Z(eax, eax)) goto loc_00184562; /* je: equal / zero */

loc_00183F9C: ;
    SET_LO8(eax, MEM8(0x7FA230));
    edx = 0; /* xor self */
    (void)0; /* test LO8(eax), LO8(eax) - flags set for next jcc */
    eax = MEM32(ebx + esi * 4 + 0x130);
    SET_LO8(edx, (TEST_NZ(LO8(eax), LO8(eax))) ? 1 : 0); /* setne */
    edx--;
    edx = edx & edi;
    edx = edx + eax;
    edi = edx;
    if ((edx == 0)) goto loc_00184562; /* je: equal / zero */

loc_00183FBC: ;
    eax = MEM32(0x8470DC);
    esi = (uint32_t)((int32_t)esi * (int32_t)0x770);
    ecx = esi + eax + 0x330;
    PUSH32(esp, ebp);
    SET_LO8(eax, 2);
    MEM32(esp + 0x14) = ecx;
    PUSH32(esp, 0); sub_000D9910(); /* call 0x000D9910 */

loc_00183FDA: ;
    ebp = MEM32(0x75BD10);
    esi = eax;
    SET_LO8(eax, MEM8(0x75BD14));
    if (CMP_BE(LO8(eax) & LO8(eax), 0)) goto loc_0018407F; /* jbe: below or equal (unsigned <=) */

loc_00183FEF: ;
    eax = MEM32(ebp + 8);
    if (TEST_NZ(eax, eax)) goto loc_0018401F; /* jne: not equal / not zero */

loc_00183FF6: ;
    edx = MEM32(ebp);
    PUSH32(esp, edx);
    PUSH32(esp, 0x5E0D08);
    PUSH32(esp, 0x14);
    eax = 0; /* xor self */
    PUSH32(esp, 0); sub_0005E4E0(); /* call 0x0005E4E0 */

loc_00184008: ;
    esp = esp + 0xC;
    PUSH32(esp, 0); sub_0029CDD0(); /* call 0x0029CDD0 */

loc_00184010: ;
    ecx = MEM32(0x75BD10);
    MEM32(ecx + 8) = eax;
    ebp = MEM32(0x75BD10);

loc_0018401F: ;
    eax = MEM32(ebp + 0x10);
    if (TEST_NZ(eax, eax)) goto loc_0018404B; /* jne: not equal / not zero */

loc_00184026: ;
    eax = MEM32(ebp + 8);
    PUSH32(esp, 0); sub_0034F320(); /* call 0x0034F320 */

loc_0018402E: ;
    MEM32(ebp + 0x10) = eax;
    ebp = MEM32(0x75BD10);
    eax = MEM32(ebp + 0x10);
    if (TEST_NZ(eax, eax)) goto loc_0018404B; /* jne: not equal / not zero */

loc_0018403E: ;
    MEM32(ebp + 0x10) = 0xFFFFFFFFu;
    ebp = MEM32(0x75BD10);

loc_0018404B: ;
    ecx = MEM32(ebp + 0x10);
    if (CMP_NE(ecx, 0xFFFFFFFFu)) goto loc_00184075; /* jne: not equal / not zero */

loc_00184053: ;
    ecx = MEM32(ebp + 4);
    (void)0; /* test ecx, ecx - flags set for next jcc */
    eax = ebp + 4;
    if (TEST_NZ(ecx, ecx)) goto loc_00184070; /* jne: not equal / not zero */

loc_0018405D: ;
    edx = MEM32(ebp);
    PUSH32(esp, eax);
    PUSH32(esp, edx);
    PUSH32(esp, 0); sub_00075E90(); /* call 0x00075E90 */

loc_00184067: ;
    ebp = MEM32(0x75BD10);
    esp = esp + 8;

loc_00184070: ;
    ebx = MEM32(ebp + 4);
    goto loc_00184081;

loc_00184075: ;
    PUSH32(esp, 0); sub_0034F360(); /* call 0x0034F360 */

loc_0018407A: ;
    ebx = MEM32(eax + 4);
    goto loc_00184081;

loc_0018407F: ;
    ebx = 0; /* xor self */

loc_00184081: ;
    if (CMP_EQ(MEM32(esi + 0x3838), ebx)) goto loc_0018409A; /* je: equal / zero */

loc_00184089: ;
    PUSH32(esp, 0); sub_0013C160(); /* call 0x0013C160 */

loc_0018408E: ;
    MEM32(esi + 0x3838) = ebx;
    ebp = MEM32(0x75BD10);

loc_0018409A: ;
    SET_LO8(eax, MEM8(0x75BD14));
    if (CMP_BE(LO8(eax) & LO8(eax), 0)) goto loc_00184139; /* jbe: below or equal (unsigned <=) */

loc_001840A7: ;
    eax = MEM32(ebp + 8);
    if (TEST_NZ(eax, eax)) goto loc_001840D7; /* jne: not equal / not zero */

loc_001840AE: ;
    eax = MEM32(ebp);
    PUSH32(esp, eax);
    PUSH32(esp, 0x5E0D08);
    PUSH32(esp, 0x14);
    eax = 0; /* xor self */
    PUSH32(esp, 0); sub_0005E4E0(); /* call 0x0005E4E0 */

loc_001840C0: ;
    esp = esp + 0xC;
    PUSH32(esp, 0); sub_0029CDD0(); /* call 0x0029CDD0 */

loc_001840C8: ;
    ecx = MEM32(0x75BD10);
    MEM32(ecx + 8) = eax;
    ebp = MEM32(0x75BD10);

loc_001840D7: ;
    eax = MEM32(ebp + 0x10);
    if (TEST_NZ(eax, eax)) goto loc_00184103; /* jne: not equal / not zero */

loc_001840DE: ;
    eax = MEM32(ebp + 8);
    PUSH32(esp, 0); sub_0034F320(); /* call 0x0034F320 */

loc_001840E6: ;
    MEM32(ebp + 0x10) = eax;
    ebp = MEM32(0x75BD10);
    eax = MEM32(ebp + 0x10);
    if (TEST_NZ(eax, eax)) goto loc_00184103; /* jne: not equal / not zero */

loc_001840F6: ;
    MEM32(ebp + 0x10) = 0xFFFFFFFFu;
    ebp = MEM32(0x75BD10);

loc_00184103: ;
    ecx = MEM32(ebp + 0x10);
    if (CMP_NE(ecx, 0xFFFFFFFFu)) goto loc_0018412D; /* jne: not equal / not zero */

loc_0018410B: ;
    ecx = MEM32(ebp + 4);
    (void)0; /* test ecx, ecx - flags set for next jcc */
    eax = ebp + 4;
    if (TEST_NZ(ecx, ecx)) goto loc_00184128; /* jne: not equal / not zero */

loc_00184115: ;
    edx = MEM32(ebp);
    PUSH32(esp, eax);
    PUSH32(esp, edx);
    PUSH32(esp, 0); sub_00075E90(); /* call 0x00075E90 */

loc_0018411F: ;
    ebp = MEM32(0x75BD10);
    esp = esp + 8;

loc_00184128: ;
    ebp = MEM32(ebp + 4);
    goto loc_00184135;

loc_0018412D: ;
    PUSH32(esp, 0); sub_0034F360(); /* call 0x0034F360 */

loc_00184132: ;
    ebp = MEM32(eax + 4);

loc_00184135: ;
    if (TEST_NZ(ebp, ebp)) goto loc_0018414E; /* jne: not equal / not zero */

loc_00184139: ;
    PUSH32(esp, 0);
    eax = 0; /* xor self */
    PUSH32(esp, 0); sub_00539960(); /* call 0x00539960 */

loc_00184142: ;
    MEM32(0x771764) = 0;
    goto loc_00184165;

loc_0018414E: ;
    if (CMP_EQ(MEM32(0x771764), ebp)) goto loc_00184165; /* je: equal / zero */

loc_00184156: ;
    eax = 0; /* xor self */
    ecx = ebp;
    PUSH32(esp, 0); sub_003FA570(); /* call 0x003FA570 */

loc_0018415F: ;
    MEM32(0x771764) = ebp;

loc_00184165: ;
    ecx = MEM32(esp + 0x48);
    eax = (uint32_t)(int32_t)SMEM8(ecx + 0x4E);
    eax--;
    if (((int32_t)eax >= 0)) goto loc_00184175; /* jns: not sign (positive) */

loc_00184170: ;
    eax = ZX8(MEM8(ecx + 0x41));
    eax--;

loc_00184175: ;
    ebp = eax + -1;
    if (CMP_GE(ebp & ebp, 0)) goto loc_00184181; /* jge: greater or equal (signed >=) */

loc_0018417C: ;
    ebp = ZX8(MEM8(ecx + 0x41));
    ebp--;

loc_00184181: ;
    ecx = MEM32(esp + 0x18);
    eax = eax + eax * 4;
    eax = ecx + eax * 4;
    edx = eax;
    ebx = MEM32(edx);
    MEM32(esp + 0x38) = ebx;
    ebx = MEM32(edx + 4);
    edx = MEM32(edx + 8);
    xmm4 = MEMF(esp + 0x38); /* movss */
    MEM32(esp + 0x40) = edx;
    SET_LO8(edx, MEM8(eax + 0x10));
    xmm0 = MEMF(esp + 0x40); /* movss */
    eax = ebp + ebp * 4;
    eax = ecx + eax * 4;
    MEM32(esp + 0x3C) = ebx;
    xmm3 = MEMF(esp + 0x3C); /* movss */
    ecx = eax;
    ebx = MEM32(ecx);
    MEM32(esp + 0x2C) = ebx;
    ebx = MEM32(ecx + 4);
    ecx = MEM32(ecx + 8);
    xmm2 = xmm0; /* movaps */
    MEM32(esp + 0x34) = ecx;
    xmm2 = xmm2 - MEMF(esp + 0x34); /* subss */
    ecx = MEM32(esp + 0x14);
    xmm0 = xmm0 - MEMF(ecx + 8); /* subss */
    xmm7 = xmm3; /* movaps */
    xmm3 = xmm3 - MEMF(ecx + 4); /* subss */
    xmm1 = xmm0; /* movaps */
    MEM32(esp + 0x30) = ebx;
    xmm7 = xmm7 - MEMF(esp + 0x30); /* subss */
    SET_LO8(ebx, MEM8(eax + 0x10));
    xmm5 = xmm3; /* movaps */
    xmm5 = xmm5 * xmm2; /* mulss */
    xmm6 = xmm4; /* movaps */
    xmm4 = xmm4 - MEMF(ecx); /* subss */
    xmm6 = xmm6 - MEMF(esp + 0x2C); /* subss */
    xmm1 = xmm1 * xmm7; /* mulss */
    xmm1 = xmm1 - xmm5; /* subss */
    xmm0 = xmm0 * xmm6; /* mulss */
    xmm5 = xmm4; /* movaps */
    xmm5 = xmm5 * xmm2; /* mulss */
    xmm5 = xmm5 - xmm0; /* subss */
    xmm3 = xmm3 * xmm6; /* mulss */
    xmm4 = xmm4 * xmm7; /* mulss */
    xmm3 = xmm3 - xmm4; /* subss */
    xmm0 = xmm3; /* movaps */
    xmm0 = xmm0 * xmm3; /* mulss */
    xmm2 = xmm5; /* movaps */
    xmm2 = xmm2 * xmm5; /* mulss */
    xmm0 = xmm0 + xmm2; /* addss */
    xmm2 = xmm1; /* movaps */
    xmm2 = xmm2 * xmm1; /* mulss */
    MEMF(esp + 0x20) = xmm1; /* movss */
    xmm1 = 0.0f; /* xorps self = zero */
    xmm0 = xmm0 + xmm2; /* addss */
    /* ucomiss xmm0, xmm1 - sets EFLAGS */
    /* lahf - load AH from flags (used in FPU compare idiom) */
    (void)0; /* test HI8(eax), 0x44 - flags set for next jcc */
    MEMF(esp + 0x24) = xmm5; /* movss */
    MEMF(esp + 0x28) = xmm3; /* movss */
    MEMF(esp + 0x10) = xmm0; /* movss */
    if (1 /* jnp after test - parity */) goto loc_001842AD; /* jnp: not parity */

loc_00184271: ;
    fp_push(MEMF(esp + 0x10)); /* fld float */
    fp_top() = sqrt(fp_top()); /* fsqrt */
    /* FPU: fdivr dword ptr [0x64a4f4] */
    fp_push(MEMF(esp + 0x20)); /* fld float */
    fp_st1() *= fp_top(); fp_pop(); /* fmul */
    MEMF(esp + 0x20) = (float)fp_top(); fp_popp(); /* fstp */
    fp_push(MEMF(esp + 0x24)); /* fld float */
    xmm0 = MEMF(esp + 0x20); /* movss */
    fp_st1() *= fp_top(); fp_pop(); /* fmul */
    MEMF(esp + 0x24) = (float)fp_top(); fp_popp(); /* fstp */
    xmm2 = MEMF(esp + 0x24); /* movss */
    fp_st1() *= fp_top(); fp_pop(); /* fmul */
    MEMF(esp + 0x28) = (float)fp_top(); fp_popp(); /* fstp */
    xmm3 = MEMF(esp + 0x28); /* movss */
    goto loc_001842B6;

loc_001842AD: ;
    xmm0 = xmm1; /* movaps */
    xmm2 = xmm1; /* movaps */
    xmm3 = xmm1; /* movaps */

loc_001842B6: ;
    xmm5 = MEMF(esp + 0x38); /* movss */
    xmm6 = MEMF(esp + 0x3C); /* movss */
    xmm7 = MEMF(esp + 0x40); /* movss */
    xmm4 = xmm0; /* movaps */
    xmm4 = xmm4 + xmm5; /* addss */
    MEMF(edi) = xmm4; /* movss */
    xmm4 = xmm2; /* movaps */
    xmm4 = xmm4 + xmm6; /* addss */
    MEMF(edi + 4) = xmm4; /* movss */
    MEMF(edi + 0x14) = xmm1; /* movss */
    MEM8(edi + 0xF) = LO8(edx);
    xmm4 = xmm3; /* movaps */
    xmm4 = xmm4 + xmm7; /* addss */
    MEMF(edi + 8) = xmm4; /* movss */
    xmm4 = MEMF(0x648D1C); /* movss */
    MEMF(edi + 0x10) = xmm4; /* movss */
    edi = edi + 0x1C;
    eax = 0; /* xor self */
    MEM16(edi + -4) = LO16(eax);
    xmm4 = xmm5; /* movaps */
    xmm4 = xmm4 - xmm0; /* subss */
    xmm0 = xmm6; /* movaps */
    xmm0 = xmm0 - xmm2; /* subss */
    MEMF(edi + 4) = xmm0; /* movss */
    xmm0 = xmm7; /* movaps */
    xmm0 = xmm0 - xmm3; /* subss */
    MEMF(edi + 8) = xmm0; /* movss */
    xmm0 = MEMF(0x64B270); /* movss */
    MEMF(edi) = xmm4; /* movss */
    MEMF(edi + 0x10) = xmm0; /* movss */
    MEMF(edi + 0x14) = xmm1; /* movss */
    MEM8(edi + 0xF) = LO8(edx);
    MEM16(edi + 0x18) = LO16(eax);
    edi = edi + 0x1C;
    goto loc_00184360;

loc_0018434A: ;
    xmm6 = MEMF(esp + 0x3C); /* movss */
    xmm5 = MEMF(esp + 0x38); /* movss */
    xmm7 = MEMF(esp + 0x40); /* movss */
    ecx = MEM32(esp + 0x14);

loc_00184360: ;
    xmm2 = MEMF(esp + 0x34); /* movss */
    xmm0 = MEMF(esp + 0x30); /* movss */
    xmm1 = MEMF(esp + 0x2C); /* movss */
    xmm6 = xmm6 - xmm0; /* subss */
    xmm0 = xmm0 - MEMF(ecx + 4); /* subss */
    xmm5 = xmm5 - xmm1; /* subss */
    xmm1 = xmm1 - MEMF(ecx); /* subss */
    xmm7 = xmm7 - xmm2; /* subss */
    xmm2 = xmm2 - MEMF(ecx + 8); /* subss */
    xmm4 = xmm0; /* movaps */
    xmm4 = xmm4 * xmm7; /* mulss */
    xmm3 = xmm2; /* movaps */
    xmm3 = xmm3 * xmm6; /* mulss */
    xmm3 = xmm3 - xmm4; /* subss */
    xmm4 = xmm1; /* movaps */
    xmm1 = xmm1 * xmm6; /* mulss */
    xmm0 = xmm0 * xmm5; /* mulss */
    xmm0 = xmm0 - xmm1; /* subss */
    xmm4 = xmm4 * xmm7; /* mulss */
    xmm2 = xmm2 * xmm5; /* mulss */
    xmm4 = xmm4 - xmm2; /* subss */
    MEMF(esp + 0x28) = xmm0; /* movss */
    xmm0 = xmm0 * xmm0; /* mulss */
    xmm1 = xmm4; /* movaps */
    xmm1 = xmm1 * xmm4; /* mulss */
    xmm0 = xmm0 + xmm1; /* addss */
    xmm1 = xmm3; /* movaps */
    xmm1 = xmm1 * xmm3; /* mulss */
    xmm0 = xmm0 + xmm1; /* addss */
    xmm1 = 0.0f; /* xorps self = zero */
    /* ucomiss xmm0, xmm1 - sets EFLAGS */
    /* lahf - load AH from flags (used in FPU compare idiom) */
    (void)0; /* test HI8(eax), 0x44 - flags set for next jcc */
    MEMF(esp + 0x20) = xmm3; /* movss */
    MEMF(esp + 0x24) = xmm4; /* movss */
    MEMF(esp + 0x10) = xmm0; /* movss */
    if (1 /* jnp after test - parity */) goto loc_00184433; /* jnp: not parity */

loc_001843F7: ;
    fp_push(MEMF(esp + 0x10)); /* fld float */
    fp_top() = sqrt(fp_top()); /* fsqrt */
    /* FPU: fdivr dword ptr [0x64a4f4] */
    fp_push(MEMF(esp + 0x20)); /* fld float */
    fp_st1() *= fp_top(); fp_pop(); /* fmul */
    MEMF(esp + 0x20) = (float)fp_top(); fp_popp(); /* fstp */
    fp_push(MEMF(esp + 0x24)); /* fld float */
    xmm0 = MEMF(esp + 0x20); /* movss */
    fp_st1() *= fp_top(); fp_pop(); /* fmul */
    MEMF(esp + 0x24) = (float)fp_top(); fp_popp(); /* fstp */
    xmm2 = MEMF(esp + 0x24); /* movss */
    fp_st1() *= fp_top(); fp_pop(); /* fmul */
    MEMF(esp + 0x28) = (float)fp_top(); fp_popp(); /* fstp */
    xmm3 = MEMF(esp + 0x28); /* movss */
    goto loc_0018443C;

loc_00184433: ;
    xmm0 = xmm1; /* movaps */
    xmm2 = xmm1; /* movaps */
    xmm3 = xmm1; /* movaps */

loc_0018443C: ;
    xmm6 = MEMF(esp + 0x2C); /* movss */
    xmm5 = MEMF(esp + 0x30); /* movss */
    xmm4 = xmm0; /* movaps */
    xmm4 = xmm4 + xmm6; /* addss */
    MEMF(edi) = xmm4; /* movss */
    MEMF(edi + 0x14) = xmm1; /* movss */
    MEM8(edi + 0xF) = LO8(ebx);
    xmm4 = xmm2; /* movaps */
    xmm4 = xmm4 + xmm5; /* addss */
    MEMF(edi + 4) = xmm4; /* movss */
    xmm4 = MEMF(esp + 0x34); /* movss */
    edi = edi + 0x1C;
    xmm7 = xmm3; /* movaps */
    xmm7 = xmm7 + xmm4; /* addss */
    MEMF(edi + -20) = xmm7; /* movss */
    xmm7 = MEMF(0x648D1C); /* movss */
    MEMF(edi + -12) = xmm7; /* movss */
    eax = 0; /* xor self */
    MEM16(edi + -4) = LO16(eax);
    xmm6 = xmm6 - xmm0; /* subss */
    xmm0 = MEMF(0x64B270); /* movss */
    xmm5 = xmm5 - xmm2; /* subss */
    xmm4 = xmm4 - xmm3; /* subss */
    MEM16(edi + 0x18) = LO16(eax);
    MEMF(edi) = xmm6; /* movss */
    MEMF(edi + 4) = xmm5; /* movss */
    MEMF(edi + 8) = xmm4; /* movss */
    MEMF(edi + 0x10) = xmm0; /* movss */
    MEMF(edi + 0x14) = xmm1; /* movss */
    MEM8(edi + 0xF) = LO8(ebx);
    edi = edi + 0x1C;
    PUSH32(esp, 0xFF);
    edx = edi + -112;
    PUSH32(esp, edx);
    eax = 4;
    ecx = esi;
    PUSH32(esp, 0); sub_0013BB50(); /* call 0x0013BB50 */

loc_001844DA: ;
    PUSH32(esp, 2);
    PUSH32(esp, 1);
    PUSH32(esp, 0);
    eax = esi;
    PUSH32(esp, 0); sub_0013BF00(); /* call 0x0013BF00 */

loc_001844E7: ;
    PUSH32(esp, 2);
    PUSH32(esp, 3);
    PUSH32(esp, 1);
    eax = esi;
    PUSH32(esp, 0); sub_0013BF00(); /* call 0x0013BF00 */

loc_001844F4: ;
    eax = ebp;
    ebp--;
    if (((int32_t)ebp >= 0)) goto loc_00184502; /* jns: not sign (positive) */

loc_001844F9: ;
    ecx = MEM32(esp + 0x48);
    ebp = ZX8(MEM8(ecx + 0x41));
    ebp--;

loc_00184502: ;
    edx = MEM32(esp + 0x48);
    ecx = (uint32_t)(int32_t)SMEM8(edx + 0x4D);
    (void)0; /* cmp eax, ecx - flags set for next jcc */
    MEM32(esp + 0x1C) = ecx;
    if (CMP_EQ(eax, ecx)) goto loc_0018455C; /* je: equal / zero */

loc_00184512: ;
    ecx = MEM32(esp + 0x18);
    edx = eax + eax * 4;
    edx = ecx + edx * 4;
    ebx = MEM32(edx);
    MEM32(esp + 0x38) = ebx;
    ebx = MEM32(edx + 4);
    edx = MEM32(edx + 8);
    MEM32(esp + 0x40) = edx;
    edx = ebp + ebp * 4;
    ecx = ecx + edx * 4;
    MEM32(esp + 0x3C) = ebx;
    edx = ecx;
    ebx = MEM32(edx);
    MEM32(esp + 0x2C) = ebx;
    ebx = MEM32(edx + 4);
    edx = MEM32(edx + 8);
    MEM32(esp + 0x30) = ebx;
    SET_LO8(ebx, MEM8(ecx + 0x10));
    ecx = MEM32(esp + 0x1C);
    (void)0; /* cmp eax, ecx - flags set for next jcc */
    MEM32(esp + 0x34) = edx;
    if (CMP_NE(eax, ecx)) goto loc_0018434A; /* jne: not equal / not zero */

loc_0018455C: ;
    PUSH32(esp, 0); sub_0013C160(); /* call 0x0013C160 */

loc_00184561: ;
    POP32(esp, ebp);

loc_00184562: ;
    POP32(esp, edi);
    POP32(esp, esi);

loc_00184564: ;
    POP32(esp, ebx);
    esp = esp + 0x34;
    esp += 4; return; /* ret */

    #undef fp_push
    #undef fp_pop
    #undef fp_popp
    #undef fp_top
    #undef fp_st1
}

/**
 * sub_00184570
 * Original: 0x00184570 - 0x0018458F (31 bytes, 8 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00184570(void)
{
    uint32_t ebp;
    int _flags = 0; /* fallback flag var */
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_00184570: ;
    ecx = MEM32(esp + 4);
    eax = MEM32(ecx + 0x144);
    eax = ZX8(MEM8(eax + 8));
    eax = MEM32(eax * 4 + 0x598D8C);
    if (TEST_Z(eax, eax)) { sub_0018458F(); return; } /* je: equal / zero */

loc_00184589: ;
    MEM32(esp + 4) = ecx;
    g_seh_ebp = ebp; RECOMP_ITAIL(eax); return; /* indirect tail jmp */

}

/**
 * sub_00184600
 * Original: 0x00184600 - 0x00184639 (57 bytes, 22 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00184600(void)
{
    int _flags = 0; /* fallback flag var */

loc_00184600: ;
    eax = MEM32(eax + 0x144);
    PUSH32(esp, esi);
    esi = MEM32(eax);
    if (TEST_Z(esi, esi)) goto loc_00184637; /* je: equal / zero */

loc_0018460D: ;
    SET_LO8(eax, MEM8(0x8472BD));
    if (TEST_NZ(LO8(eax), LO8(eax))) goto loc_00184637; /* jne: not equal / not zero */

loc_00184616: ;
    edx = esi;
    PUSH32(esp, 0); sub_000DAD90(); /* call 0x000DAD90 */

loc_0018461D: ;
    eax = MEM32(esi);
    if (CMP_L(eax, 2)) goto loc_00184637; /* jl: less (signed <) */

loc_00184624: ;
    eax = (uint32_t)((int32_t)eax * (int32_t)0x70);
    eax = MEM32(eax + 0x5906BC);
    if (TEST_Z(eax, eax)) { sub_00184639(); return; } /* je: equal / zero */

loc_00184631: ;
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, esi);
    PUSH32(esp, 0); RECOMP_ICALL_SAFE(eax, _icall_esp); /* indirect call */
    }

loc_00184634: ;
    esp = esp + 4;

loc_00184637: ;
    POP32(esp, esi);
    esp += 4; return; /* ret */

}

/**
 * sub_00184690
 * Original: 0x00184690 - 0x001846B7 (39 bytes, 12 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00184690(void)
{

loc_00184690: ;
    PUSH32(esp, ebx);
    ebx = MEM32(esp + 8);
    eax = ebx;
    PUSH32(esp, 0); sub_00184600(); /* call 0x00184600 */

loc_0018469C: ;
    eax = ebx + 0x130;
    PUSH32(esp, 0); sub_001126F0(); /* call 0x001126F0 */

loc_001846A7: ;
    PUSH32(esp, 0); sub_0017A450(); /* call 0x0017A450 */

loc_001846AC: ;
    PUSH32(esp, ebx);
    PUSH32(esp, 0); sub_000DAE40(); /* call 0x000DAE40 */

loc_001846B2: ;
    esp = esp + 4;
    POP32(esp, ebx);
    esp += 4; return; /* ret */

}

/**
 * sub_001846C0
 * Original: 0x001846C0 - 0x00184795 (213 bytes, 42 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_001846C0(void)
{
    float xmm0;

loc_001846C0: ;
    esp = esp - 0x3C;
    ecx = MEM32(eax);
    xmm0 = MEMF(0x648D20); /* movss */
    edx = MEM32(eax + 4);
    eax = MEM32(eax + 8);
    PUSH32(esp, esi);
    MEMF(esp + 0x20) = xmm0; /* movss */
    xmm0 = MEMF(0x649278); /* movss */
    MEM32(esp + 0xC) = ecx;
    ecx = MEM32(esp + 0x44);
    PUSH32(esp, ecx);
    MEMF(esp + 0x28) = xmm0; /* movss */
    xmm0 = MEMF(0x64AF74); /* movss */
    MEMF(esp + 0x2C) = xmm0; /* movss */
    xmm0 = MEMF(0x64AF70); /* movss */
    PUSH32(esp, 0x41D00000);
    MEMF(esp + 0x34) = xmm0; /* movss */
    xmm0 = MEMF(0x648E64); /* movss */
    PUSH32(esp, 1);
    MEM32(esp + 0x20) = eax;
    MEMF(esp + 0x40) = xmm0; /* movss */
    MEMF(esp + 0x44) = xmm0; /* movss */
    xmm0 = MEMF(0x64AF6C); /* movss */
    PUSH32(esp, 0x648D14);
    PUSH32(esp, 0x5F4980);
    SET_LO8(eax, 0); /* xor self */
    esi = esp + 0x18;
    MEM32(esp + 0x18) = 0xC;
    MEM32(esp + 0x1C) = 5;
    MEM32(esp + 0x24) = edx;
    MEM16(esp + 0x2C) = 0;
    MEM16(esp + 0x2E) = 0xFF;
    MEM16(esp + 0x30) = 0xFFC0;
    MEM16(esp + 0x32) = 0x31;
    MEM16(esp + 0x44) = 0x19;
    MEM16(esp + 0x46) = 0x14;
    MEMF(esp + 0x50) = xmm0; /* movss */
    PUSH32(esp, 0); sub_000F4550(); /* call 0x000F4550 */

loc_0018478D: ;
    esp = esp + 0x14;
    POP32(esp, esi);
    esp = esp + 0x3C;
    esp += 4; return; /* ret */

}

/**
 * sub_001847A0
 * Original: 0x001847A0 - 0x00184855 (181 bytes, 32 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_001847A0(void)
{
    int _flags = 0; /* fallback flag var */
    float xmm0;

loc_001847A0: ;
    esp = esp - 0x1E8;
    SET_LO8(edx, 0x17);
    MEM8(esp + 0x1C8) = LO8(edx);
    MEM8(esp + 0x1D0) = 0x16;
    PUSH32(esp, 0); sub_002B3F70(); /* call 0x002B3F70 */

loc_001847BC: ;
    SET_LO8(edx, 0x16);
    MEM32(esp + 0x1C4) = eax;
    PUSH32(esp, 0); sub_002B3F70(); /* call 0x002B3F70 */

loc_001847CA: ;
    xmm0 = MEMF(0x649278); /* movss */
    ecx = MEM32(esp + 0x1F0);
    MEMF(esp + 0x1D4) = xmm0; /* movss */
    xmm0 = 0.0f; /* xorps self = zero */
    MEMF(esp + 0x1D8) = xmm0; /* movss */
    xmm0 = MEMF(0x648EB8); /* movss */
    MEMF(esp + 0x1DC) = xmm0; /* movss */
    xmm0 = MEMF(0x648E40); /* movss */
    MEM32(esp + 0x1CC) = eax;
    eax = (uint32_t)(int32_t)SMEM16(esp + 0x1EC);
    MEMF(esp + 0x1E4) = xmm0; /* movss */
    xmm0 = MEMF(0x649734); /* movss */
    MEMF(esp + 0x1E0) = xmm0; /* movss */
    xmm0 = (float)(int32_t)eax; /* cvtsi2ss */
    PUSH32(esp, ecx);
    PUSH32(esp, 0x2A);
    eax = 0x230;
    MEMF(esp + 8) = xmm0; /* movss */
    PUSH32(esp, 0); sub_000D9C60(); /* call 0x000D9C60 */

loc_00184847: ;
    esp = esp + 8;
    if (TEST_NZ(eax, eax)) { sub_00184855(); return; } /* jne: not equal / not zero */

loc_0018484E: ;
    esp = esp + 0x1E8;
    esp += 4; return; /* ret */

}

/**
 * sub_001848B0
 * Original: 0x001848B0 - 0x00184EC4 (1556 bytes, 388 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_001848B0(void)
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

loc_001848B0: ;
    PUSH32(esp, ebp);
    ebp = esp;
    esp = esp & 0xFFFFFFF0u;
    esp = esp - 0xD4;
    PUSH32(esp, ebx);
    PUSH32(esp, esi);
    PUSH32(esp, edi);
    edi = MEM32(ebp + 8);
    esi = MEM32(edi + 0x20C);
    eax = MEM32(esi + 0x64);
    ebx = edi + 0x4C;
    SET_LO8(ecx, 0); /* xor self */
    if (TEST_Z(eax, eax)) goto loc_001848E2; /* je: equal / zero */

loc_001848D4: ;
    SET_LO8(eax, MEM8(esi + 0x10B));
    if (CMP_EQ(LO8(eax), MEM8(ebx + 0x1C4))) goto loc_001848E4; /* je: equal / zero */

loc_001848E2: ;
    SET_LO8(ecx, 1);

loc_001848E4: ;
    eax = MEM32(ebx + 0x1C8);
    edx = MEM32(eax + 0x64);
    if (TEST_Z(edx, edx)) goto loc_00184EB0; /* je: equal / zero */

loc_001848F5: ;
    SET_LO8(edx, MEM8(eax + 0x10B));
    if (CMP_NE(LO8(edx), MEM8(ebx + 0x1CC))) goto loc_00184EB0; /* jne: not equal / not zero */

loc_00184907: ;
    if (TEST_NZ(LO8(ecx), LO8(ecx))) goto loc_00184EB0; /* jne: not equal / not zero */

loc_0018490F: ;
    ecx = MEM32(esi + 0x3C8);
    if (TEST_Z(ecx, ecx)) goto loc_00184EBD; /* je: equal / zero */

loc_0018491D: ;
    ecx = MEM32(eax + 0x3C8);
    if (TEST_Z(ecx, ecx)) goto loc_00184EBD; /* je: equal / zero */

loc_0018492B: ;
    ecx = MEM32(0x6B77CC);
    eax = esp + 0x60;
    PUSH32(esp, eax);
    PUSH32(esp, ecx);
    PUSH32(esp, 0); sub_002F7810(); /* call 0x002F7810 */

loc_0018493C: ;
    eax = MEM32(0x6B77D0);
    esi = MEM32(ebx + 0x1C8);
    edx = esp + 0xA8;
    PUSH32(esp, edx);
    PUSH32(esp, eax);
    PUSH32(esp, 0); sub_002F7810(); /* call 0x002F7810 */

loc_00184955: ;
    ecx = esp + 0x70;
    PUSH32(esp, ecx);
    edx = esp + 0x38;
    PUSH32(esp, edx);
    PUSH32(esp, 0x598DAC);
    PUSH32(esp, 0); sub_001101F0(); /* call 0x001101F0 */

loc_00184969: ;
    eax = esp + 0xBC;
    PUSH32(esp, eax);
    ecx = esp + 0x74;
    PUSH32(esp, ecx);
    PUSH32(esp, 0x598DB8);
    PUSH32(esp, 0); sub_001101F0(); /* call 0x001101F0 */

loc_00184980: ;
    edx = (uint32_t)(int32_t)SMEM16(ebp + 0xC);
    edi = (uint32_t)(int32_t)SMEM8(0x7FA230);
    edx = (uint32_t)((int32_t)edx * (int32_t)0x770);
    eax = MEM32(0x8470DC);
    edi = (uint32_t)((int32_t)edi * (int32_t)0xE0);
    ecx = edx + eax + 0x330;
    esp = esp + 0x28;
    SET_LO8(eax, 2);
    edi = edi + ebx;
    MEM32(esp + 0x10) = ecx;
    PUSH32(esp, 0); sub_000D9910(); /* call 0x000D9910 */

loc_001849B3: ;
    MEM32(esp + 0x20) = eax;
    SET_LO8(eax, MEM8(0x75BC04));
    if (CMP_BE(LO8(eax) & LO8(eax), 0)) goto loc_00184A60; /* jbe: below or equal (unsigned <=) */

loc_001849C4: ;
    esi = MEM32(0x75BC00);
    eax = MEM32(esi + 8);
    if (TEST_NZ(eax, eax)) goto loc_001849F9; /* jne: not equal / not zero */

loc_001849D1: ;
    edx = MEM32(esi);
    PUSH32(esp, edx);
    PUSH32(esp, 0x5E0D08);
    PUSH32(esp, 0x14);
    eax = 0; /* xor self */
    PUSH32(esp, 0); sub_0005E4E0(); /* call 0x0005E4E0 */

loc_001849E2: ;
    esp = esp + 0xC;
    PUSH32(esp, 0); sub_0029CDD0(); /* call 0x0029CDD0 */

loc_001849EA: ;
    ecx = MEM32(0x75BC00);
    MEM32(ecx + 8) = eax;
    esi = MEM32(0x75BC00);

loc_001849F9: ;
    eax = MEM32(esi + 0x10);
    if (TEST_NZ(eax, eax)) goto loc_00184A25; /* jne: not equal / not zero */

loc_00184A00: ;
    eax = MEM32(esi + 8);
    PUSH32(esp, 0); sub_0034F320(); /* call 0x0034F320 */

loc_00184A08: ;
    MEM32(esi + 0x10) = eax;
    esi = MEM32(0x75BC00);
    eax = MEM32(esi + 0x10);
    if (TEST_NZ(eax, eax)) goto loc_00184A25; /* jne: not equal / not zero */

loc_00184A18: ;
    MEM32(esi + 0x10) = 0xFFFFFFFFu;
    esi = MEM32(0x75BC00);

loc_00184A25: ;
    ecx = MEM32(esi + 0x10);
    if (CMP_NE(ecx, 0xFFFFFFFFu)) goto loc_00184A52; /* jne: not equal / not zero */

loc_00184A2D: ;
    ecx = MEM32(esi + 4);
    (void)0; /* test ecx, ecx - flags set for next jcc */
    eax = esi + 4;
    if (TEST_NZ(ecx, ecx)) goto loc_00184A49; /* jne: not equal / not zero */

loc_00184A37: ;
    edx = MEM32(esi);
    PUSH32(esp, eax);
    PUSH32(esp, edx);
    PUSH32(esp, 0); sub_00075E90(); /* call 0x00075E90 */

loc_00184A40: ;
    esi = MEM32(0x75BC00);
    esp = esp + 8;

loc_00184A49: ;
    eax = MEM32(esi + 4);
    MEM32(esp + 0xC) = eax;
    goto loc_00184A68;

loc_00184A52: ;
    PUSH32(esp, 0); sub_0034F360(); /* call 0x0034F360 */

loc_00184A57: ;
    ecx = MEM32(eax + 4);
    MEM32(esp + 0xC) = ecx;
    goto loc_00184A68;

loc_00184A60: ;
    MEM32(esp + 0xC) = 0;

loc_00184A68: ;
    esi = MEM32(esp + 0x20);
    edx = MEM32(esp + 0xC);
    if (CMP_EQ(MEM32(esi + 0x3838), edx)) goto loc_00184A89; /* je: equal / zero */

loc_00184A78: ;
    PUSH32(esp, 0); sub_0013C160(); /* call 0x0013C160 */

loc_00184A7D: ;
    eax = MEM32(esp + 0xC);
    ecx = esi;
    MEM32(ecx + 0x3838) = eax;

loc_00184A89: ;
    xmm0 = MEMF(esp + 0x54); /* movss */
    xmm0 = xmm0 - MEMF(esp + 0x24); /* subss */
    MEMF(esp + 0x48) = xmm0; /* movss */
    xmm0 = MEMF(esp + 0x58); /* movss */
    xmm0 = xmm0 - MEMF(esp + 0x28); /* subss */
    MEMF(esp + 0x4C) = xmm0; /* movss */
    xmm0 = MEMF(esp + 0x5C); /* movss */
    xmm0 = xmm0 - MEMF(esp + 0x2C); /* subss */
    edx = esp + 0x48;
    PUSH32(esp, edx);
    MEMF(esp + 0x54) = xmm0; /* movss */
    PUSH32(esp, 0); sub_003E1F60(); /* call 0x003E1F60 */

loc_00184AC9: ;
    xmm4 = MEMF(0x648D10); /* movss */
    eax = MEM32(esp + 0x14);
    xmm7 = MEMF(esp + 0x50); /* movss */
    xmm6 = MEMF(esp + 0x4C); /* movss */
    MEMF(esp + 0x10) = xmm0; /* movss */
    xmm0 = MEMF(esp + 0x54); /* movss */
    xmm1 = xmm7; /* movaps */
    xmm1 = xmm1 * xmm4; /* mulss */
    xmm1 = xmm1 + MEMF(esp + 0x2C); /* addss */
    xmm1 = xmm1 - MEMF(eax + 4); /* subss */
    xmm5 = xmm1; /* movaps */
    xmm3 = xmm0; /* movaps */
    xmm3 = xmm3 * xmm4; /* mulss */
    xmm3 = xmm3 + MEMF(esp + 0x30); /* addss */
    xmm3 = xmm3 - MEMF(eax + 8); /* subss */
    xmm2 = xmm6; /* movaps */
    xmm2 = xmm2 * xmm4; /* mulss */
    xmm2 = xmm2 + MEMF(esp + 0x28); /* addss */
    xmm2 = xmm2 - MEMF(eax); /* subss */
    xmm4 = xmm3; /* movaps */
    xmm5 = xmm5 * xmm0; /* mulss */
    xmm4 = xmm4 * xmm7; /* mulss */
    xmm4 = xmm4 - xmm5; /* subss */
    xmm5 = xmm2; /* movaps */
    xmm2 = xmm2 * xmm7; /* mulss */
    xmm1 = xmm1 * xmm6; /* mulss */
    xmm1 = xmm1 - xmm2; /* subss */
    xmm3 = xmm3 * xmm6; /* mulss */
    xmm5 = xmm5 * xmm0; /* mulss */
    xmm5 = xmm5 - xmm3; /* subss */
    xmm3 = 0.0f; /* xorps self = zero */
    MEMF(esp + 0x20) = xmm1; /* movss */
    xmm1 = xmm1 * xmm1; /* mulss */
    xmm2 = xmm5; /* movaps */
    xmm2 = xmm2 * xmm5; /* mulss */
    xmm1 = xmm1 + xmm2; /* addss */
    xmm2 = xmm4; /* movaps */
    esp = esp + 4;
    xmm2 = xmm2 * xmm4; /* mulss */
    xmm1 = xmm1 + xmm2; /* addss */
    /* ucomiss xmm1, xmm3 - sets EFLAGS */
    /* lahf - load AH from flags (used in FPU compare idiom) */
    (void)0; /* test HI8(eax), 0x44 - flags set for next jcc */
    MEMF(esp + 0x14) = xmm4; /* movss */
    MEMF(esp + 0x18) = xmm5; /* movss */
    MEMF(esp + 0x10) = xmm1; /* movss */
    if (1 /* jp after test - parity */) goto loc_00184BA4; /* jp: parity */

loc_00184B90: ;
    MEMF(esp + 0x14) = xmm3; /* movss */
    MEMF(esp + 0x18) = xmm3; /* movss */
    MEMF(esp + 0x1C) = xmm3; /* movss */
    goto loc_00184BCC;

loc_00184BA4: ;
    fp_push(MEMF(esp + 0x10)); /* fld float */
    fp_top() = sqrt(fp_top()); /* fsqrt */
    /* FPU: fdivr dword ptr [ebx + 0x1d0] */
    fp_push(MEMF(esp + 0x14)); /* fld float */
    fp_st1() *= fp_top(); fp_pop(); /* fmul */
    MEMF(esp + 0x14) = (float)fp_top(); fp_popp(); /* fstp */
    fp_push(MEMF(esp + 0x18)); /* fld float */
    fp_st1() *= fp_top(); fp_pop(); /* fmul */
    MEMF(esp + 0x18) = (float)fp_top(); fp_popp(); /* fstp */
    fp_st1() *= fp_top(); fp_pop(); /* fmul */
    MEMF(esp + 0x1C) = (float)fp_top(); fp_popp(); /* fstp */

loc_00184BCC: ;
    xmm1 = MEMF(ebx + 0x1D4); /* movss */
    MEMF(esp + 0x38) = xmm0; /* movss */
    xmm0 = MEMF(esp + 0xC); /* movss */
    /* comiss xmm1, xmm0 - sets EFLAGS */
    MEMF(esp + 0x30) = xmm6; /* movss */
    MEMF(esp + 0x34) = xmm7; /* movss */
    if ((xmm1 <= xmm0)) goto loc_00184BF9; /* jbe: below or equal (unsigned <=) */

loc_00184BF1: ;
    MEMF(esp + 0xC) = xmm3; /* movss */
    goto loc_00184C2E;

loc_00184BF9: ;
    xmm1 = MEMF(ebx + 0x1D8); /* movss */
    /* comiss xmm1, xmm0 - sets EFLAGS */
    if ((xmm1 <= xmm0)) goto loc_00184C20; /* jbe: below or equal (unsigned <=) */

loc_00184C06: ;
    xmm0 = xmm0 - MEMF(ebx + 0x1D4); /* subss */
    xmm0 = xmm0 * MEMF(ebx + 0x1DC); /* mulss */
    xmm0 = xmm0 * MEMF(ebx + 0x1E0); /* mulss */
    goto loc_00184C28;

loc_00184C20: ;
    xmm0 = MEMF(ebx + 0x1E0); /* movss */

loc_00184C28: ;
    MEMF(esp + 0xC) = xmm0; /* movss */

loc_00184C2E: ;
    fp_push(MEMD(0x648F30)); /* fld double */
    eax = MEM32(esp + 0x24);
    /* FPU: fsin  */
    ecx = MEM32(esp + 0x28);
    edx = MEM32(esp + 0x2C);
    MEM32(esp + 0x3C) = eax;
    xmm4 = MEMF(esp + 0x3C); /* movss */
    MEM32(esp + 0x40) = ecx;
    xmm5 = MEMF(esp + 0x40); /* movss */
    MEM32(esp + 0x44) = edx;
    MEM8(edi + 0xD) = 0;
    MEM8(edi + 0xE) = 0;
    MEMF(edi + 0x10) = xmm3; /* movss */
    MEMF(edi + 0x14) = xmm3; /* movss */
    edi = edi + 0x1C;
    edi = edi + 0x1C;
    fp_st1() *= fp_top(); fp_pop(); /* fmul */
    /* FPU: fsubr dword ptr [0x648d14] */
    MEMF(esp + 0x10) = (float)fp_top(); fp_popp(); /* fstp */
    fp_push(MEMD(0x64B2B0)); /* fld double */
    xmm0 = MEMF(esp + 0x10); /* movss */
    /* FPU: fsin  */
    xmm1 = xmm0; /* movaps */
    xmm1 = xmm1 * MEMF(esp + 0x14); /* mulss */
    xmm2 = xmm1; /* movaps */
    xmm2 = xmm2 + xmm4; /* addss */
    eax = (int32_t)xmm2; /* cvttss2si */
    ecx = SX16(LO16(eax));
    xmm2 = (float)(int32_t)ecx; /* cvtsi2ss */
    MEMF(edi + -56) = xmm2; /* movss */
    xmm2 = xmm0; /* movaps */
    xmm2 = xmm2 * MEMF(esp + 0x18); /* mulss */
    xmm0 = xmm0 * MEMF(esp + 0x1C); /* mulss */
    xmm6 = xmm2; /* movaps */
    xmm6 = xmm6 + xmm5; /* addss */
    edx = (int32_t)xmm6; /* cvttss2si */
    eax = SX16(LO16(edx));
    xmm6 = (float)(int32_t)eax; /* cvtsi2ss */
    MEMF(edi + -52) = xmm6; /* movss */
    xmm6 = MEMF(esp + 0x44); /* movss */
    xmm7 = xmm0; /* movaps */
    xmm7 = xmm7 + xmm6; /* addss */
    ecx = (int32_t)xmm7; /* cvttss2si */
    edx = SX16(LO16(ecx));
    xmm7 = (float)(int32_t)edx; /* cvtsi2ss */
    MEMF(edi + -48) = xmm7; /* movss */
    eax = 0xFF;
    MEM8(edi + -44) = LO8(eax);
    MEM8(edi + -41) = LO8(eax);
    xmm7 = xmm4; /* movaps */
    xmm7 = xmm7 - xmm1; /* subss */
    ecx = (int32_t)xmm7; /* cvttss2si */
    edx = SX16(LO16(ecx));
    xmm1 = (float)(int32_t)edx; /* cvtsi2ss */
    MEMF(edi + -28) = xmm1; /* movss */
    xmm1 = xmm5; /* movaps */
    xmm1 = xmm1 - xmm2; /* subss */
    ecx = (int32_t)xmm1; /* cvttss2si */
    edx = SX16(LO16(ecx));
    xmm6 = xmm6 - xmm0; /* subss */
    xmm1 = (float)(int32_t)edx; /* cvtsi2ss */
    ecx = (int32_t)xmm6; /* cvttss2si */
    edx = SX16(LO16(ecx));
    xmm0 = (float)(int32_t)edx; /* cvtsi2ss */
    MEMF(edi + -20) = xmm0; /* movss */
    xmm0 = MEMF(0x649204); /* movss */
    MEMF(edi + -24) = xmm1; /* movss */
    MEM8(edi + -16) = LO8(eax);
    MEM8(edi + -15) = 0;
    MEM8(edi + -14) = 0;
    MEM8(edi + -13) = LO8(eax);
    MEMF(edi + -12) = xmm0; /* movss */
    MEMF(edi + -8) = xmm3; /* movss */
    fp_st1() *= fp_top(); fp_pop(); /* fmul */
    /* FPU: fsubr dword ptr [0x648d14] */
    xmm7 = MEMF(esp + 0x38); /* movss */
    MEMF(esp + 0x10) = (float)fp_top(); fp_popp(); /* fstp */
    xmm2 = MEMF(esp + 0x10); /* movss */
    xmm0 = xmm2; /* movaps */
    xmm0 = xmm0 * MEMF(esp + 0x14); /* mulss */
    xmm1 = xmm4; /* movaps */
    xmm1 = xmm1 + MEMF(esp + 0x30); /* addss */
    xmm1 = xmm1 - xmm0; /* subss */
    ecx = (int32_t)xmm1; /* cvttss2si */
    edx = SX16(LO16(ecx));
    xmm1 = (float)(int32_t)edx; /* cvtsi2ss */
    MEMF(edi) = xmm1; /* movss */
    xmm1 = xmm2; /* movaps */
    xmm1 = xmm1 * MEMF(esp + 0x18); /* mulss */
    xmm2 = xmm2 * MEMF(esp + 0x1C); /* mulss */
    xmm6 = xmm5; /* movaps */
    xmm6 = xmm6 + MEMF(esp + 0x34); /* addss */
    xmm6 = xmm6 - xmm1; /* subss */
    ecx = (int32_t)xmm6; /* cvttss2si */
    edx = SX16(LO16(ecx));
    xmm6 = (float)(int32_t)edx; /* cvtsi2ss */
    MEMF(edi + 4) = xmm6; /* movss */
    xmm6 = MEMF(esp + 0x44); /* movss */
    esi = MEM32(esp + 0x20);
    xmm6 = xmm6 + xmm7; /* addss */
    xmm6 = xmm6 - xmm2; /* subss */
    xmm2 = xmm2 + MEMF(esp + 0x44); /* addss */
    ecx = (int32_t)xmm6; /* cvttss2si */
    edx = SX16(LO16(ecx));
    MEM8(edi + 0xC) = LO8(eax);
    MEM8(edi + 0xF) = LO8(eax);
    MEM8(edi + 0xD) = 0;
    MEM8(edi + 0xE) = 0;
    xmm0 = xmm0 + xmm4; /* addss */
    xmm0 = xmm0 + MEMF(esp + 0x30); /* addss */
    xmm6 = (float)(int32_t)edx; /* cvtsi2ss */
    MEMF(edi + 8) = xmm6; /* movss */
    xmm6 = MEMF(0x649204); /* movss */
    MEMF(edi + 0x10) = xmm6; /* movss */
    xmm6 = MEMF(0x649610); /* movss */
    MEMF(edi + 0x14) = xmm6; /* movss */
    ecx = (int32_t)xmm0; /* cvttss2si */
    edx = SX16(LO16(ecx));
    edi = edi + 0x1C;
    xmm0 = (float)(int32_t)edx; /* cvtsi2ss */
    xmm1 = xmm1 + xmm5; /* addss */
    xmm1 = xmm1 + MEMF(esp + 0x34); /* addss */
    ecx = (int32_t)xmm1; /* cvttss2si */
    edx = SX16(LO16(ecx));
    MEMF(edi) = xmm0; /* movss */
    xmm0 = (float)(int32_t)edx; /* cvtsi2ss */
    xmm2 = xmm2 + xmm7; /* addss */
    ecx = (int32_t)xmm2; /* cvttss2si */
    edx = SX16(LO16(ecx));
    MEMF(edi + 4) = xmm0; /* movss */
    MEM8(edi + 0xC) = LO8(eax);
    MEM8(edi + 0xF) = LO8(eax);
    xmm0 = (float)(int32_t)edx; /* cvtsi2ss */
    MEMF(edi + 8) = xmm0; /* movss */
    MEM8(edi + 0xD) = 0;
    MEM8(edi + 0xE) = 0;
    MEMF(edi + 0x10) = xmm3; /* movss */
    MEMF(edi + 0x14) = xmm6; /* movss */
    edi = edi + 0x1C;
    PUSH32(esp, eax);
    edi = edi + 0xFFFFFF90u;
    PUSH32(esp, edi);
    eax = 4;
    ecx = esi;
    PUSH32(esp, 0); sub_0013BB50(); /* call 0x0013BB50 */

loc_00184E8F: ;
    PUSH32(esp, 2);
    PUSH32(esp, 1);
    PUSH32(esp, 0);
    eax = esi;
    PUSH32(esp, 0); sub_0013BF00(); /* call 0x0013BF00 */

loc_00184E9C: ;
    PUSH32(esp, 3);
    PUSH32(esp, 2);
    PUSH32(esp, 0);
    eax = esi;
    PUSH32(esp, 0); sub_0013BF00(); /* call 0x0013BF00 */

loc_00184EA9: ;
    POP32(esp, edi);
    POP32(esp, esi);
    POP32(esp, ebx);
    esp = ebp;
    POP32(esp, ebp);
    esp += 4; return; /* ret */

loc_00184EB0: ;
    xmm0 = MEMF(0x648D34); /* movss */
    MEMF(edi + 0x30) = xmm0; /* movss */

loc_00184EBD: ;
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
 * sub_00184ED0
 * Original: 0x00184ED0 - 0x00184F4C (124 bytes, 37 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00184ED0(void)
{
    int _flags = 0; /* fallback flag var */

loc_00184ED0: ;
    eax = MEM32(esp + 0xC);
    (void)0; /* cmp eax, 0x2D - flags set for next jcc */
    PUSH32(esp, esi);
    esi = MEM32(esp + 8);
    if (CMP_NE(eax, 0x2D)) { sub_00184F4C(); return; } /* jne: not equal / not zero */

loc_00184EDE: ;
    eax = MEM32(esp + 0xC);
    ecx = MEM32(esi + 0x20C);
    edx = MEM32(eax);
    if (CMP_NE(ecx, edx)) goto loc_00184F02; /* jne: not equal / not zero */

loc_00184EEE: ;
    ecx = MEM32(eax + 4);
    MEM32(esi + 0x20C) = ecx;
    SET_LO8(edx, MEM8(eax + 9));
    MEM8(esi + 0x210) = LO8(edx);
    goto loc_00184F16;

loc_00184F02: ;
    if (CMP_NE(ecx, MEM32(eax + 4))) goto loc_00184F16; /* jne: not equal / not zero */

loc_00184F07: ;
    MEM32(esi + 0x20C) = edx;
    SET_LO8(ecx, MEM8(eax + 8));
    MEM8(esi + 0x210) = LO8(ecx);

loc_00184F16: ;
    ecx = MEM32(esi + 0x214);
    edx = MEM32(eax);
    if (CMP_NE(ecx, edx)) goto loc_00184F36; /* jne: not equal / not zero */

loc_00184F22: ;
    edx = MEM32(eax + 4);
    MEM32(esi + 0x214) = edx;
    SET_LO8(eax, MEM8(eax + 9));
    MEM8(esi + 0x218) = LO8(eax);

loc_00184F34: ;
    POP32(esp, esi);
    esp += 4; return; /* ret */

loc_00184F36: ;
    if (CMP_NE(ecx, MEM32(eax + 4))) goto loc_00184F34; /* jne: not equal / not zero */

loc_00184F3B: ;
    MEM32(esi + 0x214) = edx;
    SET_LO8(ecx, MEM8(eax + 8));
    MEM8(esi + 0x218) = LO8(ecx);
    POP32(esp, esi);
    esp += 4; return; /* ret */

}

/**
 * sub_00184FC0
 * Original: 0x00184FC0 - 0x001850A6 (230 bytes, 53 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00184FC0(void)
{
    int _flags = 0; /* fallback flag var */
    float xmm0, xmm1;

loc_00184FC0: ;
    eax = MEM32(0x7FA1F8);
    esp = esp - 0x40;
    if (CMP_NE(eax, 0x14)) goto loc_001850A2; /* jne: not equal / not zero */

loc_00184FD1: ;
    xmm0 = MEMF(0x648D38); /* movss */
    xmm1 = MEMF(0x64A66C); /* movss */
    edx = esp + 3;
    PUSH32(esp, edx);
    PUSH32(esp, 0x774FC4);
    PUSH32(esp, 0x6B77D4);
    PUSH32(esp, 2);
    edx = esp + 0x30;
    PUSH32(esp, edx);
    edx = esp + 0x24;
    PUSH32(esp, edx);
    PUSH32(esp, 2);
    PUSH32(esp, 0xFFFFFFFFu);
    eax = 0; /* xor self */
    edx = esp + 0x22;
    PUSH32(esp, edx);
    MEMF(esp + 0x28) = xmm0; /* movss */
    xmm0 = MEMF(0x6490AC); /* movss */
    edx = esp + 0x28;
    PUSH32(esp, edx);
    PUSH32(esp, eax);
    MEMF(esp + 0x34) = xmm0; /* movss */
    xmm0 = MEMF(0x648CE0); /* movss */
    ecx = 1;
    MEM8(esp + 0x2E) = LO8(eax);
    MEM8(esp + 0x4C) = LO8(eax);
    MEM8(esp + 0x5C) = LO8(eax);
    eax = MEM32(0x771B78);
    MEMF(esp + 0x38) = xmm0; /* movss */
    xmm0 = 0.0f; /* xorps self = zero */
    PUSH32(esp, ecx);
    MEM32(esp + 0x40) = ecx;
    MEM32(esp + 0x48) = ecx;
    MEMF(esp + 0x54) = xmm0; /* movss */
    MEMF(esp + 0x58) = xmm1; /* movss */
    xmm1 = MEMF(0x64A668); /* movss */
    MEMF(esp + 0x64) = xmm0; /* movss */
    xmm0 = MEMF(0x64A664); /* movss */
    PUSH32(esp, eax);
    ecx = 0x40;
    SET_LO8(eax, 8);
    MEM32(esp + 0x48) = 0x265;
    MEM32(esp + 0x50) = 0x266;
    MEMF(esp + 0x60) = xmm1; /* movss */
    MEMF(esp + 0x6C) = xmm0; /* movss */
    MEMF(esp + 0x70) = xmm0; /* movss */
    PUSH32(esp, 0); sub_000EC4B0(); /* call 0x000EC4B0 */

loc_001850A2: ;
    esp = esp + 0x40;
    esp += 4; return; /* ret */

}

/**
 * sub_001850B0
 * Original: 0x001850B0 - 0x001850F8 (72 bytes, 26 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_001850B0(void)
{
    uint32_t ebp;
    int _flags = 0; /* fallback flag var */
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_001850B0: ;
    if (CMP_NE(MEM32(0x7FA1F8), 0x14)) goto loc_001850F7; /* jne: not equal / not zero */

loc_001850B9: ;
    SET_LO16(eax, MEM16(0x6B77D4));
    (void)0; /* cmp LO16(eax), 0xFFFF - flags set for next jcc */
    PUSH32(esp, ebp);
    PUSH32(esp, edi);
    edi = MEM32(0x771B78);
    ebp = edi;
    if (CMP_EQ(LO16(eax), 0xFFFF)) goto loc_001850F5; /* je: equal / zero */

loc_001850CF: ;
    eax = ZX16(LO16(eax));
    PUSH32(esp, ebx);
    ebx = eax;
    PUSH32(esp, esi);
    eax = eax & 0xFFF;
    esi = eax;
    ebx = ebx >> 0xC;
    PUSH32(esp, esi);
    PUSH32(esp, 0); sub_000EC120(); /* call 0x000EC120 */

loc_001850E6: ;
    ebx = ebx << 5;
    ebx = ebx + esi;
    POP32(esp, esi);
    MEM8(ebx + ebp + 0x61C) = 0;
    POP32(esp, ebx);

loc_001850F5: ;
    POP32(esp, edi);
    POP32(esp, ebp);

loc_001850F7: ;
    esp += 4; return; /* ret */

}

/**
 * sub_00185100
 * Original: 0x00185100 - 0x00185176 (118 bytes, 33 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00185100(void)
{
    int _flags = 0; /* fallback flag var */
    float xmm0, xmm1, xmm2, xmm3;

loc_00185100: ;
    xmm0 = 0.0f; /* xorps self = zero */
    PUSH32(esp, ebx);
    ebx = MEM32(esp + 0xC);
    MEMF(ebx) = xmm0; /* movss */
    MEMF(ebx + 4) = xmm0; /* movss */
    xmm0 = MEMF(0x648D14); /* movss */
    MEMF(ebx + 8) = xmm0; /* movss */
    eax = MEM32(esp + 0xC);
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
    PUSH32(esp, ebx);
    PUSH32(esp, 0); sub_003E2270(); /* call 0x003E2270 */

loc_00185166: ;
    esp = esp + 4;
    if (TEST_NZ(eax, eax)) goto loc_00185174; /* jne: not equal / not zero */

loc_0018516D: ;
    eax = ebx;
    PUSH32(esp, 0); sub_00428323(); /* call 0x00428323 */

loc_00185174: ;
    POP32(esp, ebx);
    esp += 4; return; /* ret */

}

/**
 * sub_00185180
 * Original: 0x00185180 - 0x00185206 (134 bytes, 42 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00185180(void)
{
    int _flags = 0; /* fallback flag var */

loc_00185180: ;
    esp = esp - 0x10;
    PUSH32(esp, esi);
    esi = eax + 0x2A0;
    if (TEST_Z(esi, esi)) goto loc_00185201; /* je: equal / zero */

loc_0018518E: ;
    ecx = esp + 8;
    PUSH32(esp, ecx);
    PUSH32(esp, eax);
    PUSH32(esp, 0); sub_00185100(); /* call 0x00185100 */

loc_00185199: ;
    SET_LO16(eax, MEM16(0x6B77D4));
    edx = MEM32(esp + 0x20);
    SET_LO16(edx, MEM16(edx * 2 + 0x774FC4));
    esp = esp + 8;
    if (CMP_EQ(LO16(eax), 0xFFFF)) goto loc_00185201; /* je: equal / zero */

loc_001851B4: ;
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, 0x3F800000);
    PUSH32(esp, 0x3F800000);
    PUSH32(esp, 0);
    eax = ZX16(LO16(eax));
    PUSH32(esp, 0xFFFFFFFFu);
    esi = esi + 0x70;
    PUSH32(esp, esi);
    ecx = eax;
    ecx = ecx >> 0xC;
    esi = esp + 0x1C;
    PUSH32(esp, esi);
    esi = MEM32(esp + 0x34);
    eax = eax & 0xFFF;
    ecx = ecx << 5;
    ecx = ecx + eax;
    eax = MEM32(0x771B78);
    ecx = MEM32(eax + ecx * 4 + 0x31C);
    PUSH32(esp, esi);
    esi = esp + 0x20;
    PUSH32(esp, esi);
    MEM32(esp + 0x24) = 0;
    eax = MEM32(ecx);
    PUSH32(esp, edx);
    PUSH32(esp, 0); RECOMP_ICALL_SAFE(MEM32(eax + 0x14), _icall_esp); /* indirect call */
    }

loc_00185201: ;
    POP32(esp, esi);
    esp = esp + 0x10;
    esp += 4; return; /* ret */

}

/**
 * sub_00185210
 * Original: 0x00185210 - 0x00185286 (118 bytes, 27 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00185210(void)
{
    int _flags = 0; /* fallback flag var */
    float xmm0;

loc_00185210: ;
    esp = esp - 0x8F8;
    if (TEST_Z(eax, eax)) goto loc_0018527D; /* je: equal / zero */

loc_0018521A: ;
    SET_LO8(edx, MEM8(eax + 0x10B));
    xmm0 = MEMF(0x649808); /* movss */
    MEM32(esp + 8) = eax;
    eax = MEM32(esp + 0x8FC);
    PUSH32(esp, eax);
    PUSH32(esp, 0x7D);
    eax = 0x938;
    MEM8(esp + 8) = 1;
    MEM8(esp + 9) = 0;
    MEM8(esp + 0xA) = 0;
    MEM16(esp + 0xC) = LO16(ecx);
    MEM8(esp + 0xE) = 2;
    MEMF(esp + 0x18) = xmm0; /* movss */
    MEMF(esp + 0x1C) = xmm0; /* movss */
    MEM32(esp + 0x20) = 0x2710;
    MEM8(esp + 0x24) = 0;
    MEM8(esp + 0x14) = LO8(edx);
    PUSH32(esp, 0); sub_000D9C60(); /* call 0x000D9C60 */

loc_00185276: ;
    esp = esp + 8;
    if (TEST_NZ(eax, eax)) { sub_00185286(); return; } /* jne: not equal / not zero */

loc_0018527D: ;
    eax = 0; /* xor self */
    esp = esp + 0x8F8;
    esp += 4; return; /* ret */

}

/**
 * sub_001852B0
 * Original: 0x001852B0 - 0x001852DB (43 bytes, 20 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_001852B0(void)
{
    uint32_t ebp;
    int _flags = 0; /* fallback flag var */

loc_001852B0: ;
    PUSH32(esp, ebp);
    ebp = esp;
    esp = esp & 0xFFFFFFF0u;
    esp = esp - 0x58;
    PUSH32(esp, esi);
    PUSH32(esp, edi);
    edi = MEM32(ebp + 8);
    esi = MEM32(edi + 0x48);
    eax = MEM32(esi + 0x64);
    if (TEST_Z(eax, eax)) goto loc_001852D3; /* je: equal / zero */

loc_001852C8: ;
    SET_LO8(eax, MEM8(esi + 0x10B));
    if (CMP_EQ(LO8(eax), MEM8(edi + 0x4C))) { sub_001852DB(); return; } /* je: equal / zero */

loc_001852D3: ;
    SET_LO8(eax, 0); /* xor self */
    POP32(esp, edi);
    POP32(esp, esi);
    esp = ebp;
    POP32(esp, ebp);
    esp += 4; return; /* ret */

}

/**
 * sub_00185410
 * Original: 0x00185410 - 0x00185467 (87 bytes, 35 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00185410(void)
{
    int _flags = 0; /* fallback flag var */

loc_00185410: ;
    eax = MEM32(esp + 0xC);
    (void)0; /* cmp eax, 0x2D - flags set for next jcc */
    PUSH32(esp, esi);
    esi = MEM32(esp + 8);
    if (CMP_NE(eax, 0x2D)) goto loc_00185449; /* jne: not equal / not zero */

loc_0018541E: ;
    eax = MEM32(esp + 0xC);
    ecx = MEM32(esi + 0x48);
    edx = MEM32(eax);
    if (CMP_NE(ecx, edx)) goto loc_00185439; /* jne: not equal / not zero */

loc_0018542B: ;
    ecx = MEM32(eax + 4);
    MEM32(esi + 0x48) = ecx;
    SET_LO8(edx, MEM8(eax + 9));
    MEM8(esi + 0x4C) = LO8(edx);
    POP32(esp, esi);
    esp += 4; return; /* ret */

loc_00185439: ;
    if (CMP_NE(ecx, MEM32(eax + 4))) goto loc_00185465; /* jne: not equal / not zero */

loc_0018543E: ;
    MEM32(esi + 0x48) = edx;
    SET_LO8(eax, MEM8(eax + 8));
    MEM8(esi + 0x4C) = LO8(eax);
    POP32(esp, esi);
    esp += 4; return; /* ret */

loc_00185449: ;
    if (TEST_NZ(eax, eax)) goto loc_00185465; /* jne: not equal / not zero */

loc_0018544D: ;
    eax = MEM32(esp + 0xC);
    ecx = MEM32(eax);
    if (CMP_EQ(ecx, MEM32(esi + 0x48))) goto loc_00185460; /* je: equal / zero */

loc_00185458: ;
    SET_LO8(edx, MEM8(eax + 4));
    if (CMP_NE(LO8(edx), MEM8(esi + 0x4C))) goto loc_00185465; /* jne: not equal / not zero */

loc_00185460: ;
    PUSH32(esp, 0); sub_000DADD0(); /* call 0x000DADD0 */

loc_00185465: ;
    POP32(esp, esi);
    esp += 4; return; /* ret */

}

/**
 * sub_00185470
 * Original: 0x00185470 - 0x00185515 (165 bytes, 33 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00185470(void)
{
    uint32_t ebp;
    int _flags = 0; /* fallback flag var */
    float xmm0, xmm1;
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_00185470: ;
    esp = esp - 0x4C;
    xmm0 = 0.0f; /* xorps self = zero */
    xmm1 = MEMF(0x648D18); /* movss */
    eax = 1;
    MEM32(esp + 0x1C) = eax;
    MEM32(esp + 0x24) = eax;
    MEMF(esp + 4) = xmm0; /* movss */
    eax = MEM32(esp + 4);
    MEM32(esp + 0x30) = eax;
    MEM32(esp + 0x40) = eax;
    SET_LO8(eax, MEM8(0x7819D5));
    (void)0; /* test LO8(eax), LO8(eax) - flags set for next jcc */
    MEMF(esp + 8) = xmm0; /* movss */
    ecx = MEM32(esp + 8);
    MEMF(esp + 0xC) = xmm0; /* movss */
    edx = MEM32(esp + 0xC);
    MEMF(esp + 0x14) = xmm1; /* movss */
    xmm1 = MEMF(0x648CF4); /* movss */
    MEMF(esp + 0x10) = xmm0; /* movss */
    MEMF(esp + 0x18) = xmm1; /* movss */
    MEM8(esp + 2) = 0;
    MEM32(esp + 0x20) = 0x103;
    MEM32(esp + 0x28) = 0x105;
    MEM8(esp + 0x2C) = 0;
    MEM32(esp + 0x34) = ecx;
    MEM32(esp + 0x38) = edx;
    MEM8(esp + 0x3C) = 0;
    MEM32(esp + 0x44) = ecx;
    MEM32(esp + 0x48) = edx;
    if (TEST_Z(LO8(eax), LO8(eax))) { sub_00185515(); return; } /* je: equal / zero */

loc_00185503: ;
    xmm0 = MEMF(0x6490B8); /* movss */
    xmm1 = MEMF(0x6490B4); /* movss */
    g_seh_ebp = ebp; sub_00185525(); return; /* tail jmp 0x00185525 */

}

/**
 * sub_001855C0
 * Original: 0x001855C0 - 0x00185649 (137 bytes, 42 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_001855C0(void)
{
    uint32_t ebp;
    int _flags = 0; /* fallback flag var */
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_001855C0: ;
    SET_LO16(eax, MEM16(0x6B77D8));
    (void)0; /* cmp LO16(eax), 0xFFFF - flags set for next jcc */
    PUSH32(esp, ebx);
    PUSH32(esp, ebp);
    PUSH32(esp, esi);
    PUSH32(esp, edi);
    edi = MEM32(0x771B78);
    ebp = edi;
    if (CMP_EQ(LO16(eax), 0xFFFF)) goto loc_00185600; /* je: equal / zero */

loc_001855D8: ;
    eax = ZX16(LO16(eax));
    ebx = eax;
    eax = eax & 0xFFF;
    esi = eax;
    ebx = ebx >> 0xC;
    PUSH32(esp, esi);
    PUSH32(esp, 0); sub_000EC120(); /* call 0x000EC120 */

loc_001855ED: ;
    edi = MEM32(0x771B78);
    ebx = ebx << 5;
    ebx = ebx + esi;
    MEM8(ebx + ebp + 0x61C) = 0;

loc_00185600: ;
    SET_LO16(eax, MEM16(0x6B77DC));
    ecx = 0xFFFF;
    (void)0; /* cmp LO16(eax), LO16(ecx) - flags set for next jcc */
    MEM16(0x6B77D8) = LO16(ecx);
    ebp = edi;
    if (CMP_EQ(LO16(eax), LO16(ecx))) { sub_00185649(); return; } /* je: equal / zero */

loc_00185619: ;
    eax = ZX16(LO16(eax));
    ebx = eax;
    eax = eax & 0xFFF;
    esi = eax;
    ebx = ebx >> 0xC;
    PUSH32(esp, esi);
    PUSH32(esp, 0); sub_000EC120(); /* call 0x000EC120 */

loc_0018562E: ;
    ebx = ebx << 5;
    POP32(esp, edi);
    ebx = ebx + esi;
    MEM8(ebx + ebp + 0x61C) = 0;
    POP32(esp, esi);
    POP32(esp, ebp);
    MEM16(0x6B77DC) = 0xFFFF;
    POP32(esp, ebx);
    esp += 4; return; /* ret */

}

/**
 * sub_00185660
 * Original: 0x00185660 - 0x001858AF (591 bytes, 97 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00185660(void)
{
    uint32_t ebp;
    int _flags = 0; /* fallback flag var */
    float xmm0, xmm1, xmm2, xmm3;
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_00185660: ;
    esp = esp - 0x124;
    xmm0 = 0.0f; /* xorps self = zero */
    xmm1 = MEMF(0x648D14); /* movss */
    PUSH32(esp, ebx);
    ebx = 0; /* xor self */
    PUSH32(esp, esi);
    esi = 1;
    MEMF(esp + 0xC) = xmm0; /* movss */
    eax = MEM32(esp + 0xC);
    MEMF(esp + 0x10) = xmm0; /* movss */
    ecx = MEM32(esp + 0x10);
    MEMF(esp + 0x14) = xmm0; /* movss */
    edx = MEM32(esp + 0x14);
    PUSH32(esp, edi);
    MEMF(esp + 0x1C) = xmm0; /* movss */
    MEMF(esp + 0x20) = xmm0; /* movss */
    MEMF(esp + 0x24) = xmm1; /* movss */
    MEM8(esp + 0xE) = LO8(ebx);
    MEM32(esp + 0x28) = esi;
    MEM32(esp + 0x2C) = 0x131;
    MEM32(esp + 0x30) = esi;
    MEM32(esp + 0x34) = 0x263;
    MEM32(esp + 0x38) = esi;
    MEM32(esp + 0x3C) = 0x254;
    MEM32(esp + 0x40) = esi;
    MEM32(esp + 0x44) = 0x255;
    MEM32(esp + 0x48) = esi;
    MEM32(esp + 0x4C) = 0x256;
    MEM32(esp + 0x50) = esi;
    MEM32(esp + 0x54) = 0x132;
    MEM32(esp + 0x58) = esi;
    MEM32(esp + 0x5C) = 0x257;
    MEM32(esp + 0x60) = esi;
    MEM32(esp + 0x64) = 0x24F;
    MEM32(esp + 0x68) = esi;
    MEM32(esp + 0x6C) = 0x24E;
    MEM32(esp + 0x70) = esi;
    MEM32(esp + 0x74) = 0x133;
    MEM32(esp + 0x78) = esi;
    MEM32(esp + 0x7C) = 0x258;
    MEM8(esp + 0x80) = LO8(ebx);
    MEM32(esp + 0x84) = eax;
    MEM32(esp + 0x88) = ecx;
    MEM32(esp + 0x8C) = edx;
    MEM8(esp + 0x90) = LO8(ebx);
    MEM32(esp + 0x94) = eax;
    MEM32(esp + 0x98) = ecx;
    MEM32(esp + 0x9C) = edx;
    MEM8(esp + 0xA0) = LO8(ebx);
    MEM32(esp + 0xA4) = eax;
    MEM32(esp + 0xA8) = ecx;
    MEM32(esp + 0xAC) = edx;
    MEM8(esp + 0xB0) = LO8(ebx);
    MEM32(esp + 0xB4) = eax;
    MEM32(esp + 0xB8) = ecx;
    MEM32(esp + 0xBC) = edx;
    MEM8(esp + 0xC0) = LO8(ebx);
    MEM32(esp + 0xC4) = eax;
    MEM32(esp + 0xC8) = ecx;
    MEM32(esp + 0xCC) = edx;
    MEM8(esp + 0xD0) = LO8(ebx);
    MEM32(esp + 0xD4) = eax;
    MEM32(esp + 0xD8) = ecx;
    MEM32(esp + 0xDC) = edx;
    MEM8(esp + 0xE0) = LO8(ebx);
    MEM32(esp + 0xE4) = eax;
    MEM32(esp + 0xE8) = ecx;
    MEM32(esp + 0xEC) = edx;
    MEM8(esp + 0xF0) = LO8(ebx);
    MEM32(esp + 0xF4) = eax;
    MEM32(esp + 0xF8) = ecx;
    MEM32(esp + 0xFC) = edx;
    MEM8(esp + 0x100) = LO8(ebx);
    MEM32(esp + 0x104) = eax;
    MEM32(esp + 0x108) = ecx;
    MEM32(esp + 0x10C) = edx;
    MEM8(esp + 0x110) = LO8(ebx);
    MEM32(esp + 0x114) = eax;
    MEM32(esp + 0x118) = ecx;
    MEM32(esp + 0x11C) = edx;
    MEM8(esp + 0x120) = LO8(ebx);
    MEM32(esp + 0x124) = eax;
    xmm0 = MEMF(0x6490B8); /* movss */
    xmm1 = MEMF(0x6490B4); /* movss */
    xmm2 = MEMF(0x648F78); /* movss */
    xmm3 = MEMF(0x6490B0); /* movss */
    MEM32(esp + 0x128) = ecx;
    SET_LO8(ecx, MEM8(0x7819D5));
    MEM32(esp + 0x12C) = edx;
    eax = esp + 0x8C;
    edi = 0xB;
    /* nop */
    if (CMP_EQ(LO8(ecx), LO8(ebx))) { sub_001858AF(); return; } /* je: equal / zero */

loc_001858A4: ;
    MEMF(eax + -4) = xmm0; /* movss */
    MEMF(eax) = xmm1; /* movss */
    g_seh_ebp = ebp; sub_001858B8(); return; /* tail jmp 0x001858B8 */

}

/**
 * sub_00185950
 * Original: 0x00185950 - 0x001859D9 (137 bytes, 42 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00185950(void)
{
    uint32_t ebp;
    int _flags = 0; /* fallback flag var */
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_00185950: ;
    SET_LO16(eax, MEM16(0x6B77E0));
    (void)0; /* cmp LO16(eax), 0xFFFF - flags set for next jcc */
    PUSH32(esp, ebx);
    PUSH32(esp, ebp);
    PUSH32(esp, esi);
    PUSH32(esp, edi);
    edi = MEM32(0x771B78);
    ebp = edi;
    if (CMP_EQ(LO16(eax), 0xFFFF)) goto loc_00185990; /* je: equal / zero */

loc_00185968: ;
    eax = ZX16(LO16(eax));
    ebx = eax;
    eax = eax & 0xFFF;
    esi = eax;
    ebx = ebx >> 0xC;
    PUSH32(esp, esi);
    PUSH32(esp, 0); sub_000EC120(); /* call 0x000EC120 */

loc_0018597D: ;
    edi = MEM32(0x771B78);
    ebx = ebx << 5;
    ebx = ebx + esi;
    MEM8(ebx + ebp + 0x61C) = 0;

loc_00185990: ;
    SET_LO16(eax, MEM16(0x6B77E4));
    ecx = 0xFFFF;
    (void)0; /* cmp LO16(eax), LO16(ecx) - flags set for next jcc */
    MEM16(0x6B77E0) = LO16(ecx);
    ebp = edi;
    if (CMP_EQ(LO16(eax), LO16(ecx))) { sub_001859D9(); return; } /* je: equal / zero */

loc_001859A9: ;
    eax = ZX16(LO16(eax));
    ebx = eax;
    eax = eax & 0xFFF;
    esi = eax;
    ebx = ebx >> 0xC;
    PUSH32(esp, esi);
    PUSH32(esp, 0); sub_000EC120(); /* call 0x000EC120 */

loc_001859BE: ;
    ebx = ebx << 5;
    POP32(esp, edi);
    ebx = ebx + esi;
    MEM8(ebx + ebp + 0x61C) = 0;
    POP32(esp, esi);
    POP32(esp, ebp);
    MEM16(0x6B77E4) = 0xFFFF;
    POP32(esp, ebx);
    esp += 4; return; /* ret */

}

/**
 * sub_001859F0
 * Original: 0x001859F0 - 0x00185A2E (62 bytes, 24 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_001859F0(void)
{
    int _flags = 0; /* fallback flag var */

loc_001859F0: ;
    SET_LO8(eax, MEM8(0x7819D5));
    if (TEST_NZ(LO8(eax), LO8(eax))) { sub_00185A2E(); return; } /* jne: not equal / not zero */

loc_001859F9: ;
    eax = MEM32(0x7FA1F8);
    if (CMP_EQ(eax, 2)) goto loc_00185A2B; /* je: equal / zero */

loc_00185A03: ;
    if (CMP_EQ(eax, 6)) goto loc_00185A2B; /* je: equal / zero */

loc_00185A08: ;
    if (CMP_EQ(eax, 7)) goto loc_00185A2B; /* je: equal / zero */

loc_00185A0D: ;
    if (CMP_EQ(eax, 0xC)) goto loc_00185A2B; /* je: equal / zero */

loc_00185A12: ;
    if (CMP_EQ(eax, 0x13)) goto loc_00185A2B; /* je: equal / zero */

loc_00185A17: ;
    if (CMP_EQ(eax, 0x14)) goto loc_00185A2B; /* je: equal / zero */

loc_00185A1C: ;
    if (CMP_EQ(eax, 0x29)) goto loc_00185A2B; /* je: equal / zero */

loc_00185A21: ;
    if (CMP_EQ(eax, 0x40)) goto loc_00185A2B; /* je: equal / zero */

loc_00185A26: ;
    if (CMP_NE(eax, 0x49)) { sub_00185A2E(); return; } /* jne: not equal / not zero */

loc_00185A2B: ;
    SET_LO8(eax, 0); /* xor self */
    esp += 4; return; /* ret */

}

/**
 * sub_00185A40
 * Original: 0x00185A40 - 0x00185ACD (141 bytes, 53 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00185A40(void)
{
    uint32_t ebp;
    int _flags = 0; /* fallback flag var */
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_00185A40: ;
    PUSH32(esp, edi);
    edi = MEM32(esp + 0xC);
    (void)0; /* cmp edi, 0x1A - flags set for next jcc */
    MEM8(ecx) = 1;
    MEM8(edx) = 0;
    MEM8(esi) = 0;
    if (CMP_A(edi, 0x1A)) { sub_00185ACD(); return; } /* ja: above (unsigned >) */

loc_00185A53: ;
    g_seh_ebp = ebp; RECOMP_ITAIL(MEM32(edi * 4 + 0x185AD4)); return; /* indirect tail jmp */

    MEM32(eax) = 5;
    SET_LO8(eax, 1);
    POP32(esp, edi);
    esp += 4; return; /* ret */

    MEM32(eax) = 7;
    MEM8(ecx) = 0;
    SET_LO8(eax, 1);
    POP32(esp, edi);
    esp += 4; return; /* ret */

loc_00185A8C: ;
    MEM32(eax) = 8;
    MEM8(esi) = 1;
    MEM8(ecx) = 0;
    SET_LO8(eax, 1);
    POP32(esp, edi);
    esp += 4; return; /* ret */

}

/**
 * sub_00185B40
 * Original: 0x00185B40 - 0x00185B92 (82 bytes, 32 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00185B40(void)
{
    uint32_t ebp;
    int _flags = 0; /* fallback flag var */
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_00185B40: ;
    PUSH32(esp, ecx);
    (void)0; /* cmp MEM8(esp + 8), 0 - flags set for next jcc */
    eax = MEM32(esp + 0xC);
    PUSH32(esp, ebp);
    ebp = MEM32(esp + 0x20);
    PUSH32(esp, esi);
    if (CMP_EQ(MEM8(esp + 8), 0)) { sub_00185B92(); return; } /* je: equal / zero */

loc_00185B52: ;
    (void)0; /* cmp LO16(eax), 0xFFFF - flags set for next jcc */
    ecx = MEM32(esp + 0x1C);
    edx = MEM32(esp + 0x18);
    SET_LO16(ecx, MEM16(edx + ecx * 2));
    if (CMP_NE(LO16(eax), 0xFFFF)) goto loc_00185B70; /* jne: not equal / not zero */

loc_00185B64: ;
    ecx = MEM32(esp + 0x3C);
    eax = 0; /* xor self */
    POP32(esp, esi);
    MEM32(ecx) = eax;
    POP32(esp, ebp);
    POP32(esp, ecx);
    esp += 4; return; /* ret */

loc_00185B70: ;
    edx = MEM32(esp + 0x38);
    PUSH32(esp, edx);
    edx = MEM32(esp + 0x34);
    PUSH32(esp, 0x3F800000);
    PUSH32(esp, edx);
    edx = MEM32(esp + 0x38);
    PUSH32(esp, 0xFFFFFFFFu);
    PUSH32(esp, edx);
    edx = MEM32(esp + 0x3C);
    PUSH32(esp, edx);
    PUSH32(esp, ebp);
    PUSH32(esp, ecx);
    g_seh_ebp = ebp; sub_00185C3C(); return; /* tail jmp 0x00185C3C */

}

/**
 * sub_00185C60
 * Original: 0x00185C60 - 0x00185DA4 (324 bytes, 110 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00185C60(void)
{
    uint32_t ebp;
    int _flags = 0; /* fallback flag var */
    float xmm0, xmm1;
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_00185C60: ;
    esp = esp - 0x24;
    PUSH32(esp, ebx);
    PUSH32(esp, ebp);
    ebp = MEM32(esp + 0x30);
    PUSH32(esp, edi);
    edi = 0; /* xor self */
    ebx = eax;
    eax = MEM32(ebp + 0x88);
    (void)0; /* cmp eax, edi - flags set for next jcc */
    MEM32(esp + 0x10) = edi;
    MEM32(esp + 0x1C) = edi;
    if (CMP_EQ(eax, edi)) goto loc_00185D9D; /* je: equal / zero */

loc_00185C84: ;
    eax = MEM32(eax);
    PUSH32(esp, esi);
    eax = eax & 0x1F;
    PUSH32(esp, eax);
    PUSH32(esp, ebx);
    esi = esp + 0x1B;
    edx = esp + 0x24;
    ecx = esp + 0x40;
    eax = esp + 0x2C;
    PUSH32(esp, 0); sub_00185A40(); /* call 0x00185A40 */

loc_00185CA1: ;
    esp = esp + 8;
    if (TEST_Z(LO8(eax), LO8(eax))) goto loc_00185D9C; /* je: equal / zero */

loc_00185CAC: ;
    SET_LO8(eax, MEM8(esp + 0x38));
    (void)0; /* test LO8(eax), LO8(eax) - flags set for next jcc */
    MEM8(esp + 0x18) = 0;
    if (TEST_Z(LO8(eax), LO8(eax))) goto loc_00185CDB; /* je: equal / zero */

loc_00185CB9: ;
    PUSH32(esp, 0); sub_003E1D70(); /* call 0x003E1D70 */

loc_00185CBE: ;
    xmm1 = MEMF(0x648F94); /* movss */
    /* comiss xmm1, xmm0 - sets EFLAGS */
    if ((xmm1 <= xmm0)) goto loc_00185CDB; /* jbe: below or equal (unsigned <=) */

loc_00185CCB: ;
    ecx = 0; /* xor self */
    (void)0; /* test ebx, ebx - flags set for next jcc */
    SET_LO8(ecx, (TEST_NZ(ebx, ebx)) ? 1 : 0); /* setne */
    MEM8(esp + 0x18) = 1;
    MEM32(esp + 0x14) = ecx;

loc_00185CDB: ;
    ebx = MEM32(esp + 0x1C);
    if (TEST_Z(LO8(ebx), LO8(ebx))) goto loc_00185CE6; /* je: equal / zero */

loc_00185CE3: ;
    edi = ebp + 0x70;

loc_00185CE6: ;
    SET_LO8(eax, MEM8(esp + 0x13));
    if (TEST_Z(LO8(eax), LO8(eax))) goto loc_00185CF6; /* je: equal / zero */

loc_00185CEE: ;
    esi = MEM32(esp + 0x40);
    if (TEST_NZ(esi, esi)) goto loc_00185CFF; /* jne: not equal / not zero */

loc_00185CF6: ;
    esi = esp + 0x28;
    PUSH32(esp, 0); sub_002B01A0(); /* call 0x002B01A0 */

loc_00185CFF: ;
    eax = MEM32(esp + 0x44);
    ecx = MEM32(esp + 0x3C);
    edx = esp + 0x38;
    PUSH32(esp, edx);
    edx = MEM32(esp + 0x18);
    PUSH32(esp, eax);
    PUSH32(esp, ebp);
    PUSH32(esp, 8);
    PUSH32(esp, edi);
    PUSH32(esp, esi);
    PUSH32(esp, ecx);
    ecx = MEM32(esp + 0x34);
    eax = 0; /* xor self */
    SET_LO16(eax, MEM16(0x6B77D8));
    PUSH32(esp, ebx);
    ebx = MEM32(0x6B77E0);
    PUSH32(esp, edx);
    PUSH32(esp, 0x774FFC);
    edi = esp + 0x48;
    edx = 0x774FE0;
    PUSH32(esp, eax);
    PUSH32(esp, ecx);
    ecx = MEM32(esp + 0x54);
    PUSH32(esp, 0); sub_00185B40(); /* call 0x00185B40 */

loc_00185D44: ;
    eax = MEM32(esp + 0x68);
    esp = esp + 0x30;
    if (CMP_NE(eax, 1)) goto loc_00185D9C; /* jne: not equal / not zero */

loc_00185D50: ;
    eax = MEM32(esp + 0x44);
    ecx = MEM32(esp + 0x3C);
    ebx = MEM32(0x6B77E4);
    edx = esp + 0x38;
    PUSH32(esp, edx);
    edx = MEM32(esp + 0x20);
    PUSH32(esp, eax);
    eax = MEM32(esp + 0x1C);
    PUSH32(esp, ebp);
    PUSH32(esp, 0);
    ebp = ebp + 0x70;
    PUSH32(esp, ebp);
    PUSH32(esp, esi);
    PUSH32(esp, ecx);
    PUSH32(esp, edx);
    edx = MEM32(esp + 0x38);
    ecx = 0; /* xor self */
    SET_LO16(ecx, MEM16(0x6B77DC));
    PUSH32(esp, eax);
    PUSH32(esp, 0x774FF8);
    PUSH32(esp, ecx);
    ecx = MEM32(esp + 0x50);
    PUSH32(esp, edx);
    edx = 0x774FC8;
    PUSH32(esp, 0); sub_00185B40(); /* call 0x00185B40 */

loc_00185D99: ;
    esp = esp + 0x30;

loc_00185D9C: ;
    POP32(esp, esi);

loc_00185D9D: ;
    POP32(esp, edi);
    POP32(esp, ebp);
    POP32(esp, ebx);
    esp = esp + 0x24;
    esp += 4; return; /* ret */

}

/**
 * sub_00185DB0
 * Original: 0x00185DB0 - 0x00185E0F (95 bytes, 28 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00185DB0(void)
{
    int _flags = 0; /* fallback flag var */
    float xmm0, xmm1;

loc_00185DB0: ;
    ecx = MEM32(eax + 0xE4);
    esp = esp - 0xC;
    if (CMP_EQ(ecx, 1)) goto loc_00185DC3; /* je: equal / zero */

loc_00185DBE: ;
    if (CMP_NE(ecx, 4)) goto loc_00185E0B; /* jne: not equal / not zero */

loc_00185DC3: ;
    xmm0 = 0.0f; /* xorps self = zero */
    ecx = MEM32(esp + 0x18);
    PUSH32(esp, ecx);
    xmm1 = xmm0; /* movaps */
    xmm1 = xmm1 - MEMF(eax + 0x38); /* subss */
    MEMF(esp + 4) = xmm1; /* movss */
    edx = esp + 4;
    ecx = eax + 8;
    xmm1 = xmm0; /* movaps */
    xmm1 = xmm1 - MEMF(eax + 0x3C); /* subss */
    xmm0 = xmm0 - MEMF(eax + 0x40); /* subss */
    PUSH32(esp, edx);
    eax = eax + 0x50;
    PUSH32(esp, ecx);
    PUSH32(esp, eax);
    eax = MEM32(esp + 0x20);
    MEMF(esp + 0x14) = xmm1; /* movss */
    MEMF(esp + 0x18) = xmm0; /* movss */
    PUSH32(esp, 0); sub_00185C60(); /* call 0x00185C60 */

loc_00185E08: ;
    esp = esp + 0x10;

loc_00185E0B: ;
    esp = esp + 0xC;
    esp += 4; return; /* ret */

}

/**
 * sub_00185E10
 * Original: 0x00185E10 - 0x00185E5D (77 bytes, 23 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00185E10(void)
{
    uint32_t ebp;
    int _flags = 0; /* fallback flag var */
    float xmm0;
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_00185E10: ;
    esp = esp - 0x144;
    PUSH32(esp, ebx);
    ebx = MEM32(esp + 0x154);
    PUSH32(esp, ebp);
    ebp = MEM32(esp + 0x150);
    PUSH32(esp, esi);
    esi = eax;
    PUSH32(esp, edi);
    eax = esp + 0x40;
    edi = ecx;
    PUSH32(esp, 0); sub_000AF180(); /* call 0x000AF180 */

loc_00185E35: ;
    (void)0; /* test ebp, ebp - flags set for next jcc */
    xmm0 = 0.0f; /* xorps self = zero */
    MEMF(esp + 0x8C) = xmm0; /* movss */
    MEM32(esp + 0x88) = 0x303;
    if (TEST_NZ(ebp, ebp)) { sub_00185E5D(); return; } /* jne: not equal / not zero */

loc_00185E50: ;
    POP32(esp, edi);
    POP32(esp, esi);
    POP32(esp, ebp);
    eax = 0; /* xor self */
    POP32(esp, ebx);
    esp = esp + 0x144;
    esp += 4; return; /* ret */

}

/**
 * sub_00186040
 * Original: 0x00186040 - 0x0018618A (330 bytes, 112 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00186040(void)
{
    uint32_t ebp;
    int _flags = 0; /* fallback flag var */

loc_00186040: ;
    PUSH32(esp, ebp);
    ebp = esp;
    esp = esp & 0xFFFFFFF0u;
    esp = esp - 0x54;
    PUSH32(esp, ebx);
    PUSH32(esp, esi);
    esi = MEM32(ebp + 8);
    SET_LO8(edx, MEM8(esi + 0x324));
    eax = MEM32(esi + 0x310);
    SET_LO8(ecx, MEM8(esi + 0x314));
    SET_LO8(edx, LO8(edx) & 0xFE);
    MEM8(esi + 0x324) = LO8(edx);
    SET_LO8(edx, MEM8(eax + 0x10B));
    (void)0; /* cmp LO8(edx), LO8(ecx) - flags set for next jcc */
    PUSH32(esp, edi);
    MEM8(esp + 0xF) = LO8(edx);
    if (CMP_NE(LO8(edx), LO8(ecx))) goto loc_001860DB; /* jne: not equal / not zero */

loc_00186078: ;
    ecx = MEM32(eax + 0x64);
    if (TEST_Z(ecx, ecx)) goto loc_001860DB; /* je: equal / zero */

loc_0018607F: ;
    ecx = MEM32(eax + 0x3C8);
    if (TEST_Z(ecx, ecx)) { sub_0018618A(); return; } /* je: equal / zero */

loc_0018608D: ;
    SET_LO8(ecx, MEM8(eax + 0x16E));
    SET_LO8(ecx, LO8(ecx) & 0xF);
    if (CMP_EQ(LO8(ecx), 0xF)) { sub_0018618A(); return; } /* je: equal / zero */

loc_0018609F: ;
    (void)0; /* cmp MEM16(esi + 0x31C), 0xFFFFFFFFu - flags set for next jcc */
    ecx = esi + 0x40;
    MEM32(esp + 0x18) = ecx;
    ecx = esi + 0x4C;
    MEM32(esp + 0x1C) = ecx;
    ecx = esi + 0x328;
    MEM32(esp + 0x10) = ecx;
    ecx = esi + 0x334;
    MEM32(esp + 0x14) = ecx;
    if (CMP_EQ(MEM16(esi + 0x31C), 0xFFFFFFFFu)) goto loc_00186149; /* je: equal / zero */

loc_001860CB: ;
    edi = 0; /* xor self */
    if (TEST_Z(LO8(edx), LO8(edx))) goto loc_001860DB; /* je: equal / zero */

loc_001860D1: ;
    ecx = MEM32(0x847200);
    if (TEST_NZ(ecx, ecx)) goto loc_001860F0; /* jne: not equal / not zero */

loc_001860DB: ;
    eax = 0; /* xor self */
    POP32(esp, edi);
    POP32(esp, esi);
    POP32(esp, ebx);
    esp = ebp;
    POP32(esp, ebp);
    esp += 4; return; /* ret */

loc_001860E4: ;
    SET_LO8(edx, MEM8(esp + 0xF));
    goto loc_001860F0;

    /* nop */

loc_001860F0: ;
    (void)0; /* cmp MEM8(ecx), LO8(edx) - flags set for next jcc */
    eax = MEM32(ecx + 0xE0);
    if (CMP_NE(MEM8(ecx), LO8(edx))) goto loc_0018610E; /* jne: not equal / not zero */

loc_001860FA: ;
    edx = ZX16(MEM16(ecx + 0xA));
    ebx = (uint32_t)(int32_t)SMEM16(esi + 0x31C);
    if (CMP_NE(edx, ebx)) goto loc_0018610E; /* jne: not equal / not zero */

loc_00186109: ;
    if (TEST_Z(edi, edi)) goto loc_0018611B; /* je: equal / zero */

loc_0018610D: ;
    edi--;

loc_0018610E: ;
    (void)0; /* test eax, eax - flags set for next jcc */
    ecx = eax;
    if (TEST_NZ(eax, eax)) goto loc_001860E4; /* jne: not equal / not zero */

loc_00186114: ;
    POP32(esp, edi);
    POP32(esp, esi);
    POP32(esp, ebx);
    esp = ebp;
    POP32(esp, ebp);
    esp += 4; return; /* ret */

loc_0018611B: ;
    PUSH32(esp, 2);
    eax = esp + 0x14;
    PUSH32(esp, eax);
    eax = MEM32(esi + 0x310);
    edx = esp + 0x20;
    PUSH32(esp, edx);
    PUSH32(esp, eax);
    eax = MEM32(esi + 0x320);
    PUSH32(esp, 0); sub_00111F90(); /* call 0x00111F90 */

loc_00186139: ;
    esp = esp + 0x10;
    if (TEST_NZ(LO8(eax), LO8(eax))) goto loc_00186170; /* jne: not equal / not zero */

loc_00186140: ;
    eax = 0; /* xor self */
    POP32(esp, edi);
    POP32(esp, esi);
    POP32(esp, ebx);
    esp = ebp;
    POP32(esp, ebp);
    esp += 4; return; /* ret */

loc_00186149: ;
    edx = MEM32(esi + 0x318);
    PUSH32(esp, eax);
    eax = esp + 0x24;
    PUSH32(esp, 0); sub_002F7870(); /* call 0x002F7870 */

loc_00186159: ;
    PUSH32(esp, eax);
    ecx = esp + 0x18;
    PUSH32(esp, ecx);
    eax = 2;
    ecx = esp + 0x24;
    PUSH32(esp, 0); sub_00111C60(); /* call 0x00111C60 */

loc_0018616D: ;
    esp = esp + 0xC;

loc_00186170: ;
    SET_LO8(ecx, MEM8(esi + 0x324));
    eax = 1;
    SET_LO8(ecx, LO8(ecx) | LO8(eax));
    MEM8(esi + 0x324) = LO8(ecx);
    POP32(esp, edi);
    POP32(esp, esi);
    POP32(esp, ebx);
    esp = ebp;
    POP32(esp, ebp);
    esp += 4; return; /* ret */

}

/**
 * sub_001861A0
 * Original: 0x001861A0 - 0x001861D4 (52 bytes, 14 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_001861A0(void)
{
    int _flags = 0; /* fallback flag var */

loc_001861A0: ;
    esp = esp - 0x1C;
    eax = (uint32_t)(int32_t)SMEM16(esp + 0x24);
    ecx = MEM32(0x8470DC);
    eax = (uint32_t)((int32_t)eax * (int32_t)0x770);
    PUSH32(esp, ebx);
    ebx = MEM32(esp + 0x24);
    eax = eax + ecx + 0x330;
    (void)0; /* test MEM8(ebx + 0x324), 1 - flags set for next jcc */
    MEM32(esp + 0x28) = eax;
    if (TEST_NZ(MEM8(ebx + 0x324), 1)) { sub_001861D4(); return; } /* jne: not equal / not zero */

loc_001861CD: ;
    eax = 0; /* xor self */
    POP32(esp, ebx);
    esp = esp + 0x1C;
    esp += 4; return; /* ret */

}

/**
 * sub_001864C0
 * Original: 0x001864C0 - 0x00186616 (342 bytes, 81 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_001864C0(void)
{
    int _flags = 0; /* fallback flag var */
    float xmm0, xmm1;

loc_001864C0: ;
    esp = esp - 0x7C;
    PUSH32(esp, esi);
    esi = eax;
    MEM32(esp + 0x2C) = 0x303;
    PUSH32(esp, 0); sub_003E2480(); /* call 0x003E2480 */

loc_001864D3: ;
    eax = eax & 0x80000003u;
    if (((int32_t)eax >= 0)) goto loc_001864DF; /* jns: not sign (positive) */

loc_001864DA: ;
    eax--;
    eax = eax | 0xFFFFFFFCu;
    eax++;

loc_001864DF: ;
    xmm0 = 0.0f; /* xorps self = zero */
    eax = MEM32(eax * 4 + 0x75DE64);
    ecx = MEM32(esp + 0x84);
    SET_LO8(edx, MEM8(esp + 0x88));
    MEM32(esp + 0x30) = eax;
    SET_LO8(eax, 0xFF);
    ecx++;
    MEM16(esp + 4) = LO16(ecx);
    ecx = MEM32(esi + 4);
    MEM8(esp + 0x10) = LO8(eax);
    MEM8(esp + 0x11) = LO8(eax);
    MEM8(esp + 0x12) = LO8(eax);
    eax = MEM32(esi);
    MEM8(esp + 0x13) = LO8(edx);
    edx = MEM32(esi + 8);
    MEMF(esp + 8) = xmm0; /* movss */
    MEMF(esp + 0xC) = xmm0; /* movss */
    MEMF(esp + 0x54) = xmm0; /* movss */
    MEMF(esp + 0x58) = xmm0; /* movss */
    MEMF(esp + 0x5C) = xmm0; /* movss */
    MEMF(esp + 0x60) = xmm0; /* movss */
    MEMF(esp + 0x64) = xmm0; /* movss */
    MEMF(esp + 0x68) = xmm0; /* movss */
    MEMF(esp + 0x6C) = xmm0; /* movss */
    xmm0 = MEMF(0x648D14); /* movss */
    MEMF(esp + 0x44) = xmm1; /* movss */
    MEMF(esp + 0x40) = xmm1; /* movss */
    MEM32(esp + 0x48) = eax;
    MEM32(esp + 0x4C) = ecx;
    MEM32(esp + 0x50) = edx;
    MEM16(esp + 0x34) = 3;
    MEM16(esp + 0x36) = 0x55;
    MEM16(esp + 0x38) = 1;
    MEMF(esp + 0x3C) = xmm0; /* movss */
    PUSH32(esp, 0); sub_003E2480(); /* call 0x003E2480 */

loc_00186591: ;
    esi = eax;
    esi = esi & 1;
    esi = esi << 1;
    PUSH32(esp, 0); sub_003E2480(); /* call 0x003E2480 */

loc_0018659D: ;
    edx = MEM32(esp + 0x90);
    eax = eax & 1;
    esi = esi | eax;
    SET_LO8(eax, LO8(eax) | 0xFF);
    ecx = 0; /* xor self */
    MEM8(esp + 0x78) = LO8(eax);
    MEM8(esp + 0x79) = LO8(eax);
    MEM8(esp + 0x7A) = LO8(eax);
    SET_LO8(eax, MEM8(esp + 0x8C));
    PUSH32(esp, edx);
    PUSH32(esp, ecx);
    MEM8(esp + 0x84) = LO8(eax);
    eax = 2;
    PUSH32(esp, ecx);
    MEM32(esp + 0x20) = eax;
    MEM32(esp + 0x24) = eax;
    MEM32(esp + 0x30) = eax;
    esi = esi << 6;
    eax = esp + 0x10;
    PUSH32(esp, 1);
    esi = esi | 0x84C201;
    PUSH32(esp, eax);
    MEM32(esp + 0x84) = esi;
    MEM8(esp + 0x8F) = LO8(ecx);
    MEM32(esp + 0x30) = ecx;
    MEM32(esp + 0x34) = 4;
    MEM32(esp + 0x3C) = ecx;
    PUSH32(esp, 0); sub_00105450(); /* call 0x00105450 */

loc_0018660E: ;
    esp = esp + 0x14;
    POP32(esp, esi);
    esp = esp + 0x7C;
    esp += 4; return; /* ret */

}

/**
 * sub_00186620
 * Original: 0x00186620 - 0x00186681 (97 bytes, 34 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00186620(void)
{
    int _flags = 0; /* fallback flag var */

loc_00186620: ;
    PUSH32(esp, esi);
    esi = MEM32(esp + 8);
    if (TEST_Z(MEM8(esi + 0x2C), 1)) goto loc_0018663C; /* je: equal / zero */

loc_0018662B: ;
    SET_LO16(eax, MEM16(0x7FA20C));
    MEM16(esi + 0x30) = MEM16(esi + 0x30) - LO16(eax);
    if (CMP_L(MEM16(esi + 0x30), 0)) goto loc_00186655; /* jl: less (signed <) */

loc_0018663C: ;
    SET_LO8(eax, MEM8(esi + 0x2D));
    if (CMP_EQ(LO8(eax), 0xFF)) goto loc_0018667F; /* je: equal / zero */

loc_00186643: ;
    ecx = SX8(LO8(eax));
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, esi);
    PUSH32(esp, 0); RECOMP_ICALL_SAFE(MEM32(ecx * 4 + 0x6B77E8), _icall_esp); /* indirect call */
    }

loc_0018664E: ;
    esp = esp + 4;
    if (TEST_NZ(LO8(eax), LO8(eax))) goto loc_0018667F; /* jne: not equal / not zero */

loc_00186655: ;
    SET_LO8(eax, MEM8(0x8472BD));
    if (TEST_NZ(LO8(eax), LO8(eax))) goto loc_0018667F; /* jne: not equal / not zero */

loc_0018665E: ;
    edx = esi;
    PUSH32(esp, 0); sub_000DAD90(); /* call 0x000DAD90 */

loc_00186665: ;
    eax = MEM32(esi);
    if (CMP_L(eax, 2)) goto loc_0018667F; /* jl: less (signed <) */

loc_0018666C: ;
    eax = (uint32_t)((int32_t)eax * (int32_t)0x70);
    eax = MEM32(eax + 0x5906BC);
    if (TEST_Z(eax, eax)) { sub_00186681(); return; } /* je: equal / zero */

loc_00186679: ;
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, esi);
    PUSH32(esp, 0); RECOMP_ICALL_SAFE(eax, _icall_esp); /* indirect call */
    }

loc_0018667C: ;
    esp = esp + 4;

loc_0018667F: ;
    POP32(esp, esi);
    esp += 4; return; /* ret */

}

/**
 * sub_001866D0
 * Original: 0x001866D0 - 0x001866F6 (38 bytes, 14 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_001866D0(void)
{

loc_001866D0: ;
    eax = MEM32(esp + 4);
    PUSH32(esp, esi);
    PUSH32(esp, edi);
    edi = (uint32_t)(int32_t)SMEM8(0x7FA230);
    edi = edi + 2;
    edi = edi << 6;
    edi = edi + eax;
    ecx = 0x10;
    esi = 0x5A0350;
    memcpy((void*)XBOX_PTR(edi), (void*)XBOX_PTR(esi), ecx * 4);
    esi += ecx * 4; edi += ecx * 4; ecx = 0; /* rep movsd */
    POP32(esp, edi);
    SET_LO8(eax, 1);
    POP32(esp, esi);
    esp += 4; return; /* ret */

}

/**
 * sub_00186700
 * Original: 0x00186700 - 0x0018675A (90 bytes, 31 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00186700(void)
{
    uint32_t ebp;
    int _flags = 0; /* fallback flag var */
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_00186700: ;
    PUSH32(esp, esi);
    PUSH32(esp, edi);
    edi = MEM32(esp + 0xC);
    esi = MEM32(edi + 0x48);
    PUSH32(esp, 2);
    PUSH32(esp, esi);
    PUSH32(esp, 0); sub_003E7230(); /* call 0x003E7230 */

loc_00186711: ;
    esp = esp + 8;
    PUSH32(esp, esi);
    PUSH32(esp, 0); sub_0042C911(); /* call 0x0042C911 */

loc_0018671A: ;
    if (TEST_NZ(eax, eax)) goto loc_00186743; /* jne: not equal / not zero */

loc_0018671E: ;
    if (TEST_Z(esi, esi)) goto loc_00186743; /* je: equal / zero */

loc_00186722: ;
    eax = MEM32(0x7FA490);
    edx = MEM32(0x7FA4B4);
    eax++;
    edx--;
    PUSH32(esp, esi);
    MEM32(0x7FA490) = eax;
    MEM32(0x7FA4B4) = edx;
    PUSH32(esp, 0); sub_003E7080(); /* call 0x003E7080 */

loc_00186740: ;
    esp = esp + 4;

loc_00186743: ;
    SET_LO8(eax, MEM8(0x8472BD));
    if (TEST_NZ(LO8(eax), LO8(eax))) { sub_0018675A(); return; } /* jne: not equal / not zero */

loc_0018674C: ;
    eax = edi;
    POP32(esp, edi);
    edx = 1;
    POP32(esp, esi);
    g_seh_ebp = ebp; sub_000DA5E0(); return; /* tail jmp 0x000DA5E0 */

}

/**
 * sub_00186760
 * Original: 0x00186760 - 0x001867AF (79 bytes, 29 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00186760(void)
{
    int _flags = 0; /* fallback flag var */

loc_00186760: ;
    PUSH32(esp, esi);
    PUSH32(esp, edi);
    edi = MEM32(esp + 0xC);
    esi = MEM32(edi + 0x48);
    PUSH32(esp, 2);
    PUSH32(esp, esi);
    PUSH32(esp, 0); sub_003E7230(); /* call 0x003E7230 */

loc_00186771: ;
    esp = esp + 8;
    PUSH32(esp, esi);
    PUSH32(esp, 0); sub_0042C911(); /* call 0x0042C911 */

loc_0018677A: ;
    if (TEST_NZ(eax, eax)) goto loc_001867A3; /* jne: not equal / not zero */

loc_0018677E: ;
    if (TEST_Z(esi, esi)) goto loc_001867A3; /* je: equal / zero */

loc_00186782: ;
    eax = MEM32(0x7FA490);
    edx = MEM32(0x7FA4B4);
    eax++;
    edx--;
    PUSH32(esp, esi);
    MEM32(0x7FA490) = eax;
    MEM32(0x7FA4B4) = edx;
    PUSH32(esp, 0); sub_003E7080(); /* call 0x003E7080 */

loc_001867A0: ;
    esp = esp + 4;

loc_001867A3: ;
    PUSH32(esp, edi);
    PUSH32(esp, 0); sub_000DAE40(); /* call 0x000DAE40 */

loc_001867A9: ;
    esp = esp + 4;
    POP32(esp, edi);
    POP32(esp, esi);
    esp += 4; return; /* ret */

}

/**
 * sub_001867B0
 * Original: 0x001867B0 - 0x001867C3 (19 bytes, 4 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_001867B0(void)
{
    uint32_t ebp;
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_001867B0: ;
    eax = MEM32(esp + 4);
    ecx = ZX8(MEM8(eax + 0x44));
    MEM32(esp + 4) = eax;
    g_seh_ebp = ebp; RECOMP_ITAIL(MEM32(ecx * 4 + 0x598E28)); return; /* indirect tail jmp */

}

/**
 * sub_00186850
 * Original: 0x00186850 - 0x0018695D (269 bytes, 66 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00186850(void)
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
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_00186850: ;
    esp = esp - 0x20;
    eax = (uint32_t)(int32_t)SMEM8(0x7FA230);
    PUSH32(esp, ebx);
    ebx = MEM32(esp + 0x28);
    PUSH32(esp, ebp);
    PUSH32(esp, esi);
    PUSH32(esp, edi);
    edi = eax + 2;
    edi = edi << 6;
    edi = edi + ebx;
    ecx = 0x10;
    esi = 0x5A0350;
    memcpy((void*)XBOX_PTR(edi), (void*)XBOX_PTR(esi), ecx * 4);
    esi += ecx * 4; edi += ecx * 4; ecx = 0; /* rep movsd */
    eax = MEM32(ebx + 0x4C);
    eax = eax + ebx + 0x100;
    ecx = (uint32_t)(int32_t)SMEM16(esp + 0x38);
    fp_push(MEMF(eax + 0xC)); /* fld float */
    /* FPU: fsin  */
    xmm0 = MEMF(0x6495A8); /* movss */
    ecx = (uint32_t)((int32_t)ecx * (int32_t)0x770);
    edx = MEM32(0x8470DC);
    xmm1 = MEMF(eax); /* movss */
    xmm5 = MEMF(eax); /* movss */
    xmm6 = MEMF(eax + 4); /* movss */
    edx = ecx + edx + 0x330;
    xmm1 = xmm1 * xmm0; /* mulss */
    ecx = (int32_t)xmm1; /* cvttss2si */
    xmm1 = MEMF(0x6490AC); /* movss */
    xmm2 = (float)(int32_t)ecx; /* cvtsi2ss */
    xmm2 = xmm2 * xmm1; /* mulss */
    xmm5 = xmm5 - xmm2; /* subss */
    xmm2 = MEMF(eax + 4); /* movss */
    xmm2 = xmm2 * xmm0; /* mulss */
    ecx = (int32_t)xmm2; /* cvttss2si */
    xmm0 = (float)(int32_t)ecx; /* cvtsi2ss */
    xmm0 = xmm0 * xmm1; /* mulss */
    MEM32(esp + 0x18) = edx;
    xmm6 = xmm6 - xmm0; /* subss */
    edi = 0x598EB8;
    ecx = 0x598E48;
    fp_st1() *= fp_top(); fp_pop(); /* fmul */
    fp_st1() += fp_top(); fp_pop(); /* fadd */
    MEMF(esp + 0x1C) = (float)fp_top(); fp_popp(); /* fstp */
    fp_push(MEMF(eax + 0x10)); /* fld float */
    /* FPU: fsin  */
    fp_st1() *= fp_top(); fp_pop(); /* fmul */
    fp_st1() += fp_top(); fp_pop(); /* fadd */
    MEMF(esp + 0x20) = (float)fp_top(); fp_popp(); /* fstp */
    xmm7 = MEMF(esp + 0x20); /* movss */
    xmm0 = MEMF(ecx); /* movss */
    xmm0 = xmm0 - MEMF(edx); /* subss */
    xmm4 = 0.0f; /* xorps self = zero */
    xmm1 = MEMF(ecx + 8); /* movss */
    xmm1 = xmm1 - MEMF(edx + 8); /* subss */
    /* ucomiss xmm0, xmm4 - sets EFLAGS */
    /* lahf - load AH from flags (used in FPU compare idiom) */
    (void)0; /* test HI8(eax), 0x44 - flags set for next jcc */
    MEMF(esp + 0x24) = xmm0; /* movss */
    MEMF(esp + 0x2C) = xmm1; /* movss */
    if (1 /* jp after test - parity */) { sub_0018695D(); return; } /* jp: parity */

loc_0018694A: ;
    /* ucomiss xmm1, xmm4 - sets EFLAGS */
    /* lahf - load AH from flags (used in FPU compare idiom) */
    if (1 /* jp after test - parity */) { sub_0018695D(); return; } /* jp: parity */

loc_00186953: ;
    xmm3 = MEMF(0x648D14); /* movss */
    g_seh_ebp = ebp; sub_00186997(); return; /* tail jmp 0x00186997 */

    #undef fp_push
    #undef fp_pop
    #undef fp_popp
    #undef fp_top
    #undef fp_st1
}

/**
 * sub_00186A60
 * Original: 0x00186A60 - 0x00186BE6 (390 bytes, 106 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00186A60(void)
{
    int _flags = 0; /* fallback flag var */
    float xmm0, xmm1, xmm2, xmm3, xmm4;
    double _fp_stack[8];
    int _fp_top = 0;
    #define fp_push(v) (_fp_stack[--_fp_top & 7] = (v))
    #define fp_pop() (_fp_top++)
    #define fp_popp() (fp_pop())
    #define fp_top() _fp_stack[_fp_top & 7]
    #define fp_st1() _fp_stack[(_fp_top + 1) & 7]

loc_00186A60: ;
    eax = MEM32(esp + 4);
    ecx = MEM32(eax + 0x4C);
    xmm2 = MEMF(0x7FA24C); /* movss */
    xmm0 = MEMF(0x648D30); /* movss */
    eax = ecx + eax + 0x100;
    xmm1 = xmm2; /* movaps */
    xmm1 = xmm1 * MEMF(0x649594); /* mulss */
    xmm1 = xmm1 + MEMF(eax + 8); /* addss */
    /* comiss xmm1, xmm0 - sets EFLAGS */
    MEMF(eax + 8) = xmm1; /* movss */
    MEMF(esp + 4) = xmm1; /* movss */
    if ((xmm1 <= xmm0)) goto loc_00186AAF; /* jbe: below or equal (unsigned <=) */

loc_00186A9E: ;
    edi = edi;

loc_00186AA0: ;
    xmm1 = xmm1 - xmm0; /* subss */
    /* comiss xmm1, xmm0 - sets EFLAGS */
    if ((xmm1 > xmm0)) goto loc_00186AA0; /* ja: above (unsigned >) */

loc_00186AA9: ;
    MEMF(esp + 4) = xmm1; /* movss */

loc_00186AAF: ;
    xmm4 = 0.0f; /* xorps self = zero */
    /* comiss xmm4, xmm1 - sets EFLAGS */
    if ((xmm4 <= xmm1)) goto loc_00186AC6; /* jbe: below or equal (unsigned <=) */

loc_00186AB7: ;
    xmm1 = xmm1 + xmm0; /* addss */
    /* comiss xmm4, xmm1 - sets EFLAGS */
    if ((xmm4 > xmm1)) goto loc_00186AB7; /* ja: above (unsigned >) */

loc_00186AC0: ;
    MEMF(esp + 4) = xmm1; /* movss */

loc_00186AC6: ;
    fp_push(MEMF(esp + 4)); /* fld float */
    MEMF(eax + 8) = xmm1; /* movss */
    /* FPU: fsin  */
    xmm1 = xmm2; /* movaps */
    xmm1 = xmm1 * MEMF(0x649590); /* mulss */
    xmm1 = xmm1 + MEMF(eax + 0xC); /* addss */
    /* comiss xmm1, xmm0 - sets EFLAGS */
    xmm3 = xmm2; /* movaps */
    xmm3 = xmm3 * MEMF(0x64958C); /* mulss */
    xmm2 = xmm2 * MEMF(0x649588); /* mulss */
    xmm3 = xmm3 + MEMF(eax); /* addss */
    xmm2 = xmm2 + MEMF(eax + 0x10); /* addss */
    MEMF(eax) = xmm3; /* movss */
    MEMF(eax + 0xC) = xmm1; /* movss */
    MEMF(eax + 0x10) = xmm2; /* movss */
    fp_st1() *= fp_top(); fp_pop(); /* fmul */
    MEMF(esp + 4) = (float)fp_top(); fp_pop(); /* fst */
    MEMF(eax + 4) = (float)fp_top(); fp_popp(); /* fstp */
    if ((xmm1 <= xmm0)) goto loc_00186B29; /* jbe: below or equal (unsigned <=) */

loc_00186B1D: ;
    /* nop */

loc_00186B20: ;
    xmm1 = xmm1 - xmm0; /* subss */
    /* comiss xmm1, xmm0 - sets EFLAGS */
    if ((xmm1 > xmm0)) goto loc_00186B20; /* ja: above (unsigned >) */

loc_00186B29: ;
    /* comiss xmm4, xmm1 - sets EFLAGS */
    if ((xmm4 <= xmm1)) goto loc_00186B39; /* jbe: below or equal (unsigned <=) */

loc_00186B2E: ;
    edi = edi;

loc_00186B30: ;
    xmm1 = xmm1 + xmm0; /* addss */
    /* comiss xmm4, xmm1 - sets EFLAGS */
    if ((xmm4 > xmm1)) goto loc_00186B30; /* ja: above (unsigned >) */

loc_00186B39: ;
    MEMF(eax + 0xC) = xmm1; /* movss */
    xmm1 = xmm2; /* movaps */
    /* comiss xmm1, xmm0 - sets EFLAGS */
    if ((xmm1 <= xmm0)) goto loc_00186B4F; /* jbe: below or equal (unsigned <=) */

loc_00186B46: ;
    xmm1 = xmm1 - xmm0; /* subss */
    /* comiss xmm1, xmm0 - sets EFLAGS */
    if ((xmm1 > xmm0)) goto loc_00186B46; /* ja: above (unsigned >) */

loc_00186B4F: ;
    /* comiss xmm4, xmm1 - sets EFLAGS */
    if ((xmm4 <= xmm1)) goto loc_00186B5D; /* jbe: below or equal (unsigned <=) */

loc_00186B54: ;
    xmm1 = xmm1 + xmm0; /* addss */
    /* comiss xmm4, xmm1 - sets EFLAGS */
    if ((xmm4 > xmm1)) goto loc_00186B54; /* ja: above (unsigned >) */

loc_00186B5D: ;
    xmm0 = MEMF(0x649580); /* movss */
    /* comiss xmm3, xmm0 - sets EFLAGS */
    MEMF(eax + 0x10) = xmm1; /* movss */
    if ((xmm3 <= xmm0)) goto loc_00186B86; /* jbe: below or equal (unsigned <=) */

loc_00186B6F: ;
    xmm2 = MEMF(eax); /* movss */

loc_00186B73: ;
    xmm1 = xmm2; /* movaps */
    xmm1 = xmm1 - xmm0; /* subss */
    /* comiss xmm1, xmm0 - sets EFLAGS */
    xmm2 = xmm1; /* movaps */
    if ((xmm1 > xmm0)) goto loc_00186B73; /* ja: above (unsigned >) */

loc_00186B82: ;
    MEMF(eax) = xmm2; /* movss */

loc_00186B86: ;
    /* comiss xmm4, MEMF(eax) - sets EFLAGS */
    if ((xmm4 <= MEMF(eax))) goto loc_00186BA3; /* jbe: below or equal (unsigned <=) */

loc_00186B8B: ;
    xmm2 = MEMF(eax); /* movss */
    /* nop */

loc_00186B90: ;
    xmm1 = xmm2; /* movaps */
    xmm1 = xmm1 + xmm0; /* addss */
    xmm2 = xmm1; /* movaps */
    /* comiss xmm4, xmm2 - sets EFLAGS */
    if ((xmm4 > xmm2)) goto loc_00186B90; /* ja: above (unsigned >) */

loc_00186B9F: ;
    MEMF(eax) = xmm2; /* movss */

loc_00186BA3: ;
    xmm1 = MEMF(esp + 4); /* movss */
    /* comiss xmm1, xmm0 - sets EFLAGS */
    if ((xmm1 <= xmm0)) goto loc_00186BC7; /* jbe: below or equal (unsigned <=) */

loc_00186BAE: ;
    xmm2 = MEMF(eax + 4); /* movss */

loc_00186BB3: ;
    xmm1 = xmm2; /* movaps */
    xmm1 = xmm1 - xmm0; /* subss */
    /* comiss xmm1, xmm0 - sets EFLAGS */
    xmm2 = xmm1; /* movaps */
    if ((xmm1 > xmm0)) goto loc_00186BB3; /* ja: above (unsigned >) */

loc_00186BC2: ;
    MEMF(eax + 4) = xmm2; /* movss */

loc_00186BC7: ;
    /* comiss xmm4, MEMF(eax + 4) - sets EFLAGS */
    if ((xmm4 <= MEMF(eax + 4))) goto loc_00186BE3; /* jbe: below or equal (unsigned <=) */

loc_00186BCD: ;
    /* nop */

loc_00186BD0: ;
    xmm1 = MEMF(eax + 4); /* movss */
    xmm1 = xmm1 + xmm0; /* addss */
    /* comiss xmm4, xmm1 - sets EFLAGS */
    MEMF(eax + 4) = xmm1; /* movss */
    if ((xmm4 > xmm1)) goto loc_00186BD0; /* ja: above (unsigned >) */

loc_00186BE3: ;
    SET_LO8(eax, 1);
    esp += 4; return; /* ret */

    #undef fp_push
    #undef fp_pop
    #undef fp_popp
    #undef fp_top
    #undef fp_st1
}

/**
 * sub_00186BF0
 * Original: 0x00186BF0 - 0x00186FD5 (997 bytes, 219 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00186BF0(void)
{
    uint32_t ebp;
    int _flags = 0; /* fallback flag var */
    float xmm0, xmm1, xmm2, xmm5, xmm6;

loc_00186BF0: ;
    PUSH32(esp, ebp);
    ebp = esp;
    esp = esp & 0xFFFFFFF0u;
    esp = esp - 0x204;
    PUSH32(esp, ebx);
    PUSH32(esp, esi);
    esi = eax;
    (void)0; /* test esi, esi - flags set for next jcc */
    PUSH32(esp, edi);
    if (TEST_Z(esi, esi)) goto loc_00186FCE; /* je: equal / zero */

loc_00186C09: ;
    eax = (int32_t)MEMF(esi + 0x80); /* cvttss2si */
    ecx = (int32_t)MEMF(esi + 0x7C); /* cvttss2si */
    edx = (int32_t)MEMF(esi + 0x78); /* cvttss2si */
    PUSH32(esp, eax);
    PUSH32(esp, ecx);
    PUSH32(esp, edx);
    PUSH32(esp, 2);
    PUSH32(esp, 0); sub_003C7840(); /* call 0x003C7840 */

loc_00186C25: ;
    esp = esp + 0x10;
    if (TEST_NZ(eax, eax)) goto loc_00186FCE; /* jne: not equal / not zero */

loc_00186C30: ;
    eax = (int32_t)MEMF(esi + 0x80); /* cvttss2si */
    ecx = (int32_t)MEMF(esi + 0x7C); /* cvttss2si */
    edx = (int32_t)MEMF(esi + 0x78); /* cvttss2si */
    PUSH32(esp, eax);
    PUSH32(esp, ecx);
    PUSH32(esp, edx);
    PUSH32(esp, 1);
    PUSH32(esp, 0); sub_003C7840(); /* call 0x003C7840 */

loc_00186C4C: ;
    esp = esp + 0x10;
    if (TEST_NZ(eax, eax)) goto loc_00186FCE; /* jne: not equal / not zero */

loc_00186C57: ;
    xmm0 = MEMF(esi + 0x78); /* movss */
    xmm1 = MEMF(esi + 0x78); /* movss */
    xmm1 = xmm1 - MEMF(ebp + 8); /* subss */
    MEMF(esp + 0x68) = xmm0; /* movss */
    xmm0 = MEMF(esi + 0x7C); /* movss */
    xmm0 = xmm0 + MEMF(0x6493A8); /* addss */
    MEMF(esp + 0x6C) = xmm0; /* movss */
    xmm0 = MEMF(esi + 0x80); /* movss */
    MEMF(esp + 0x70) = xmm0; /* movss */
    xmm0 = 0.0f; /* xorps self = zero */
    xmm2 = xmm0; /* movaps */
    xmm2 = xmm2 - xmm1; /* subss */
    xmm1 = MEMF(esi + 0x80); /* movss */
    xmm1 = xmm1 - MEMF(ebp + 0xC); /* subss */
    MEMF(esp + 0x28) = xmm0; /* movss */
    xmm0 = xmm0 - xmm1; /* subss */
    eax = esp + 0x24;
    ebx = esp + 0x74;
    MEMF(esp + 0x24) = xmm2; /* movss */
    MEMF(esp + 0x2C) = xmm0; /* movss */
    PUSH32(esp, 0); sub_00428323(); /* call 0x00428323 */

loc_00186CC7: ;
    eax = ebx;
    PUSH32(esp, eax);
    PUSH32(esp, 0); sub_003E2270(); /* call 0x003E2270 */

loc_00186CCF: ;
    ebx = 0; /* xor self */
    PUSH32(esp, ebx);
    PUSH32(esp, ebx);
    PUSH32(esp, 1);
    PUSH32(esp, ebx);
    PUSH32(esp, ebx);
    ecx = esp + 0x48;
    PUSH32(esp, ecx);
    PUSH32(esp, ebx);
    edx = esp + 0x40;
    PUSH32(esp, edx);
    eax = esp + 0x40;
    PUSH32(esp, eax);
    ecx = esp + 0x40;
    PUSH32(esp, ecx);
    edx = esp + 0x1AC;
    PUSH32(esp, edx);
    eax = esp + 0x98;
    PUSH32(esp, eax);
    ecx = esp + 0xA8;
    PUSH32(esp, 0); sub_002A0580(); /* call 0x002A0580 */

loc_00186D08: ;
    esp = esp + 0x34;
    if (TEST_Z(eax, eax)) goto loc_00186FCE; /* je: equal / zero */

loc_00186D13: ;
    eax = MEM32(esp + 0x30);
    PUSH32(esp, 0); sub_001119F0(); /* call 0x001119F0 */

loc_00186D1C: ;
    (void)0; /* test LO8(eax), LO8(eax) - flags set for next jcc */
    esi = MEM32(esp + 0x18);
    edi = MEM32(esp + 0x1C);
    if (TEST_Z(LO8(eax), LO8(eax))) goto loc_00186E2E; /* je: equal / zero */

loc_00186D2C: ;
    MEM32(esp + 0x64) = 0x303;
    MEM32(esp + 0x3C) = 6;
    MEM8(esp + 0x40) = LO8(ebx);
    MEM32(esp + 0x34) = 0x9B01;
    PUSH32(esp, 0); sub_003E2480(); /* call 0x003E2480 */

loc_00186D4D: ;
    edx = ((int32_t)eax < 0) ? 0xFFFFFFFF : 0; /* cdq */
    ecx = 0x33;
    { int64_t _dividend = ((int64_t)(int32_t)edx << 32) | eax;
      eax = (uint32_t)((int32_t)(_dividend / (int32_t)ecx));
      edx = (uint32_t)((int32_t)(_dividend % (int32_t)ecx)); }
    xmm0 = 0.0f; /* xorps self = zero */
    MEMF(esp + 0x44) = xmm0; /* movss */
    MEMF(esp + 0x48) = xmm0; /* movss */
    edx = edx + 0x64;
    MEM16(esp + 0x38) = LO16(edx);
    PUSH32(esp, 0); sub_003E2480(); /* call 0x003E2480 */

loc_00186D71: ;
    edx = ((int32_t)eax < 0) ? 0xFFFFFFFF : 0; /* cdq */
    ecx = 0x65;
    { int64_t _dividend = ((int64_t)(int32_t)edx << 32) | eax;
      eax = (uint32_t)((int32_t)(_dividend / (int32_t)ecx));
      edx = (uint32_t)((int32_t)(_dividend % (int32_t)ecx)); }
    xmm0 = MEMF(0x648CE4); /* movss */
    SET_LO8(eax, 0xFF);
    MEM8(esp + 0x4D) = LO8(eax);
    MEM8(esp + 0x4E) = LO8(eax);
    MEM8(esp + 0x4F) = LO8(eax);
    MEM8(esp + 0x50) = LO8(eax);
    MEM8(esp + 0x51) = LO8(eax);
    MEM8(esp + 0x52) = LO8(ebx);
    MEM8(esp + 0x53) = 7;
    MEM16(esp + 0x5A) = 0x19;
    MEMF(esp + 0x5C) = xmm0; /* movss */
    SET_LO8(edx, LO8(edx) - LO8(ecx));
    MEM8(esp + 0x4C) = LO8(edx);
    edx = MEM32(ebp + 0x10);
    PUSH32(esp, edx);
    PUSH32(esp, ebx);
    PUSH32(esp, 0x7F);
    PUSH32(esp, 3);
    PUSH32(esp, 0); sub_003E2480(); /* call 0x003E2480 */

loc_00186DC1: ;
    ebx = eax;
    SET_LO8(ebx, LO8(ebx) & 1);
    SET_LO8(ebx, LO8(ebx) << 1);
    PUSH32(esp, 0); sub_003E2480(); /* call 0x003E2480 */

loc_00186DCD: ;
    SET_LO8(eax, LO8(eax) & 1);
    SET_LO8(ebx, LO8(ebx) + LO8(eax));
    PUSH32(esp, ebx);
    PUSH32(esp, 0); sub_003E2480(); /* call 0x003E2480 */

loc_00186DD7: ;
    PUSH32(esp, eax);
    PUSH32(esp, 0); sub_003E1D70(); /* call 0x003E1D70 */

loc_00186DDD: ;
    xmm5 = MEMF(0x64908C); /* movss */
    xmm6 = MEMF(0x6490B8); /* movss */
    xmm0 = xmm0 * xmm5; /* mulss */
    PUSH32(esp, ecx);
    xmm0 = xmm0 + xmm6; /* addss */
    MEMF(esp) = xmm0; /* movss */
    PUSH32(esp, 0); sub_003E1D70(); /* call 0x003E1D70 */

loc_00186E00: ;
    eax = MEM32(esp + 0x3C);
    PUSH32(esp, ecx);
    xmm0 = xmm0 * xmm5; /* mulss */
    xmm0 = xmm0 + xmm6; /* addss */
    MEMF(esp) = xmm0; /* movss */
    PUSH32(esp, eax);
    PUSH32(esp, edi);
    PUSH32(esp, esi);
    ecx = esp + 0x1AC;
    PUSH32(esp, ecx);
    ebx = 0; /* xor self */
    PUSH32(esp, ebx);
    edx = esp + 0x68;
    PUSH32(esp, ebx);
    PUSH32(esp, edx);
    PUSH32(esp, 0); sub_0014F960(); /* call 0x0014F960 */

loc_00186E2B: ;
    esp = esp + 0x3C;

loc_00186E2E: ;
    xmm0 = 0.0f; /* xorps self = zero */
    ecx = MEM32(esp + 0x20);
    edx = MEM32(ebp + 0x10);
    xmm1 = xmm0; /* movaps */
    xmm1 = xmm1 - MEMF(esp + 0x24); /* subss */
    MEMF(esp + 0x90) = xmm1; /* movss */
    xmm1 = xmm0; /* movaps */
    xmm0 = xmm0 - MEMF(esp + 0x2C); /* subss */
    xmm1 = xmm1 - MEMF(esp + 0x28); /* subss */
    MEMF(esp + 0x98) = xmm0; /* movss */
    xmm0 = MEMF(0x64A324); /* movss */
    eax = 0xA;
    MEM32(esp + 0x84) = esi;
    MEM32(esp + 0x88) = edi;
    MEM32(esp + 0x8C) = ecx;
    MEM16(esp + 0x82) = LO16(eax);
    MEM16(esp + 0x80) = 0xF;
    MEMF(esp + 0x94) = xmm1; /* movss */
    ecx = 0x24;
    esi = esp + 0x180;
    edi = esp + 0xA0;
    memcpy((void*)XBOX_PTR(edi), (void*)XBOX_PTR(esi), ecx * 4);
    esi += ecx * 4; edi += ecx * 4; ecx = 0; /* rep movsd */
    MEMF(esp + 0x130) = xmm0; /* movss */
    xmm0 = MEMF(0x648F98); /* movss */
    MEMF(esp + 0x140) = xmm0; /* movss */
    xmm0 = MEMF(0x648CE4); /* movss */
    MEMF(esp + 0x144) = xmm0; /* movss */
    xmm0 = MEMF(0x64A320); /* movss */
    MEMF(esp + 0x150) = xmm0; /* movss */
    xmm0 = MEMF(0x64A31C); /* movss */
    MEMF(esp + 0x154) = xmm0; /* movss */
    xmm0 = MEMF(0x64A318); /* movss */
    MEMF(esp + 0x158) = xmm0; /* movss */
    xmm0 = MEMF(0x64A314); /* movss */
    MEMF(esp + 0x15C) = xmm0; /* movss */
    xmm0 = MEMF(0x64A310); /* movss */
    MEM16(esp + 0x16C) = LO16(eax);
    PUSH32(esp, edx);
    eax = esp + 0x84;
    MEMF(esp + 0x174) = xmm0; /* movss */
    xmm0 = MEMF(0x64A30C); /* movss */
    PUSH32(esp, eax);
    MEM32(esp + 0x13C) = 7;
    MEM8(esp + 0x140) = LO8(ebx);
    MEM16(esp + 0x144) = 0x1A;
    MEM16(esp + 0x146) = 0x14;
    MEM32(esp + 0x150) = 0x400001;
    MEM8(esp + 0x154) = 0x64;
    MEM8(esp + 0x155) = 0x9B;
    MEM8(esp + 0x168) = LO8(ebx);
    MEM8(esp + 0x169) = 7;
    MEM32(esp + 0x16C) = 3;
    MEM32(esp + 0x170) = 0x7F;
    MEM16(esp + 0x176) = 0x19;
    MEMF(esp + 0x17C) = xmm0; /* movss */
    PUSH32(esp, 0); sub_000F39F0(); /* call 0x000F39F0 */

loc_00186FCB: ;
    esp = esp + 8;

loc_00186FCE: ;
    POP32(esp, edi);
    POP32(esp, esi);
    POP32(esp, ebx);
    esp = ebp;
    POP32(esp, ebp);
    esp += 4; return; /* ret */

}

/**
 * sub_00186FE0
 * Original: 0x00186FE0 - 0x00186FFA (26 bytes, 8 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00186FE0(void)
{
    int _flags = 0; /* fallback flag var */

loc_00186FE0: ;
    eax = MEM32(esp + 4);
    if (CMP_GE(MEM16(eax + 0x38), 0x40)) goto loc_00186FF4; /* jge: greater or equal (signed >=) */

loc_00186FEB: ;
    SET_LO8(ecx, MEM8(eax + 0x38));
    SET_LO8(ecx, LO8(ecx) << 2);
    MEM8(eax + 0x4C) = LO8(ecx);

loc_00186FF4: ;
    eax = 1;
    esp += 4; return; /* ret */

}

/**
 * sub_00187000
 * Original: 0x00187000 - 0x0018709F (159 bytes, 29 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00187000(void)
{
    float xmm0, xmm1, xmm2;

loc_00187000: ;
    eax = MEM32(esp + 4);
    xmm0 = MEMF(0x7FA24C); /* movss */
    xmm2 = MEMF(eax + 0x314); /* movss */
    xmm1 = xmm0; /* movaps */
    xmm1 = xmm1 * MEMF(0x649228); /* mulss */
    xmm2 = xmm2 - xmm1; /* subss */
    xmm1 = MEMF(eax + 0x310); /* movss */
    xmm1 = xmm1 * xmm0; /* mulss */
    MEMF(eax + 0x314) = xmm2; /* movss */
    xmm1 = xmm1 + MEMF(eax + 0x40); /* addss */
    MEMF(eax + 0x40) = xmm1; /* movss */
    xmm1 = MEMF(eax + 0x314); /* movss */
    xmm1 = xmm1 * xmm0; /* mulss */
    xmm1 = xmm1 + MEMF(eax + 0x44); /* addss */
    MEMF(eax + 0x44) = xmm1; /* movss */
    xmm1 = MEMF(eax + 0x318); /* movss */
    xmm1 = xmm1 * xmm0; /* mulss */
    xmm1 = xmm1 + MEMF(eax + 0x48); /* addss */
    MEMF(eax + 0x48) = xmm1; /* movss */
    xmm1 = MEMF(eax + 0x31C); /* movss */
    xmm1 = xmm1 * xmm0; /* mulss */
    xmm1 = xmm1 + MEMF(eax + 0x4C); /* addss */
    MEMF(eax + 0x4C) = xmm1; /* movss */
    xmm1 = MEMF(eax + 0x320); /* movss */
    xmm1 = xmm1 * xmm0; /* mulss */
    xmm1 = xmm1 + MEMF(eax + 0x50); /* addss */
    MEMF(eax + 0x50) = xmm1; /* movss */
    eax = 1;
    esp += 4; return; /* ret */

}

/**
 * sub_001870A0
 * Original: 0x001870A0 - 0x001870BC (28 bytes, 8 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_001870A0(void)
{
    int _flags = 0; /* fallback flag var */
    float xmm0, xmm1;

loc_001870A0: ;
    edx = MEM32(esp + 4);
    xmm0 = MEMF(edx + 0x44); /* movss */
    xmm0 = xmm0 - MEMF(edx + 0x324); /* subss */
    xmm1 = 0.0f; /* xorps self = zero */
    /* comiss xmm1, xmm0 - sets EFLAGS */
    if ((xmm1 <= xmm0)) { sub_001870BC(); return; } /* jbe: below or equal (unsigned <=) */

loc_001870B9: ;
    eax = 0; /* xor self */
    esp += 4; return; /* ret */

}

/**
 * sub_00187100
 * Original: 0x00187100 - 0x0018733E (574 bytes, 144 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00187100(void)
{
    int _flags = 0; /* fallback flag var */
    float xmm0, xmm1, xmm2, xmm5, xmm6;
    double _fp_stack[8];
    int _fp_top = 0;
    #define fp_push(v) (_fp_stack[--_fp_top & 7] = (v))
    #define fp_pop() (_fp_top++)
    #define fp_popp() (fp_pop())
    #define fp_top() _fp_stack[_fp_top & 7]
    #define fp_st1() _fp_stack[(_fp_top + 1) & 7]

loc_00187100: ;
    xmm2 = MEMF(0x7FA24C); /* movss */
    xmm0 = MEMF(0x648D14); /* movss */
    esp = esp - 0x24;
    PUSH32(esp, esi);
    esi = MEM32(esp + 0x2C);
    xmm1 = MEMF(esi + 0x70); /* movss */
    xmm1 = xmm1 * xmm2; /* mulss */
    xmm1 = xmm1 + MEMF(esi + 0x74); /* addss */
    /* comiss xmm1, xmm0 - sets EFLAGS */
    MEMF(esi + 0x74) = xmm1; /* movss */
    if ((xmm1 <= xmm0)) goto loc_00187339; /* jbe: below or equal (unsigned <=) */

loc_00187134: ;
    xmm0 = xmm0 / xmm1; /* divss */
    xmm1 = MEMF(esi + 0x6C); /* movss */
    xmm1 = xmm1 + xmm2; /* addss */
    MEMF(esp + 8) = xmm1; /* movss */
    xmm1 = xmm1 * xmm0; /* mulss */
    MEMF(esp + 0x18) = xmm1; /* movss */
    xmm1 = MEMF(esi + 0x5C); /* movss */
    MEMF(esp + 0x2C) = xmm1; /* movss */
    xmm1 = MEMF(esi + 0x60); /* movss */
    MEMF(esp + 4) = xmm1; /* movss */
    xmm1 = MEMF(esi + 0x64); /* movss */
    xmm1 = xmm1 * xmm2; /* mulss */
    xmm1 = xmm1 * xmm0; /* mulss */
    MEMF(esp + 0x10) = xmm1; /* movss */
    xmm1 = MEMF(esi + 0x68); /* movss */
    xmm1 = xmm1 * xmm2; /* mulss */
    PUSH32(esp, edi);
    xmm1 = xmm1 * xmm0; /* mulss */
    MEMF(esp + 0x18) = xmm1; /* movss */
    edi = esi + 0x78;

loc_00187191: ;
    fp_push(MEMF(esp + 0x30)); /* fld float */
    PUSH32(esp, 0xFFFFFFFFu);
    /* FPU: fsin  */
    fp_st1() *= fp_top(); fp_pop(); /* fmul */
    fp_st1() += fp_top(); fp_pop(); /* fadd */
    fp_push(MEMF(esp + 0xC)); /* fld float */
    /* FPU: fsin  */
    fp_st1() *= fp_top(); fp_pop(); /* fmul */
    fp_st1() += fp_top(); fp_pop(); /* fadd */
    /* fld st(0) */
    /* FPU: fcos  */
    MEMF(esp + 0x14) = (float)fp_top(); fp_popp(); /* fstp */
    /* fld st(1) */
    /* FPU: fsin  */
    fp_st1() *= fp_top(); fp_pop(); /* fmul */
    fp_st1() *= fp_top(); fp_pop(); /* fmul */
    MEMF(esp + 0x24) = (float)fp_top(); fp_popp(); /* fstp */
    /* FPU: fsin  */
    fp_st1() *= fp_top(); fp_pop(); /* fmul */
    MEMF(esp + 0x28) = (float)fp_top(); fp_popp(); /* fstp */
    /* FPU: fcos  */
    fp_st1() *= fp_top(); fp_pop(); /* fmul */
    fp_st1() *= fp_top(); fp_pop(); /* fmul */
    MEMF(esp + 0x2C) = (float)fp_top(); fp_popp(); /* fstp */
    PUSH32(esp, 0); sub_003E2480(); /* call 0x003E2480 */

loc_001871E6: ;
    ecx = (uint32_t)(int32_t)SMEM16(esi + 0x8A);
    edx = ((int32_t)eax < 0) ? 0xFFFFFFFF : 0; /* cdq */
    ecx++;
    { int64_t _dividend = ((int64_t)(int32_t)edx << 32) | eax;
      eax = (uint32_t)((int32_t)(_dividend / (int32_t)ecx));
      edx = (uint32_t)((int32_t)(_dividend % (int32_t)ecx)); }
    SET_LO16(edx, LO16(edx) + MEM16(esi + 0x88));
    PUSH32(esp, edx);
    PUSH32(esp, 0); sub_003E2480(); /* call 0x003E2480 */

loc_001871FE: ;
    edx = ((int32_t)eax < 0) ? 0xFFFFFFFF : 0; /* cdq */
    ecx = 0x56;
    { int64_t _dividend = ((int64_t)(int32_t)edx << 32) | eax;
      eax = (uint32_t)((int32_t)(_dividend / (int32_t)ecx));
      edx = (uint32_t)((int32_t)(_dividend % (int32_t)ecx)); }
    eax = 0; /* xor self */
    SET_LO8(eax, MEM8(esi + 4));
    SET_LO8(edx, LO8(edx) - LO8(ecx));
    PUSH32(esp, edx);
    edx = 0; /* xor self */
    SET_LO8(edx, MEM8(esi + 0x8C));
    PUSH32(esp, edx);
    PUSH32(esp, eax);
    PUSH32(esp, 0); sub_003E1D70(); /* call 0x003E1D70 */

loc_0018721D: ;
    xmm0 = xmm0 * MEMF(0x648EC4); /* mulss */
    xmm5 = MEMF(0x64925C); /* movss */
    xmm6 = MEMF(0x648D80); /* movss */
    xmm0 = xmm0 + xmm5; /* addss */
    PUSH32(esp, ecx);
    xmm0 = xmm0 * xmm6; /* mulss */
    MEMF(esp) = xmm0; /* movss */
    PUSH32(esp, 0); sub_003E1D70(); /* call 0x003E1D70 */

loc_00187248: ;
    PUSH32(esp, ecx);
    ecx = MEM32(esi + 0x84);
    xmm0 = xmm0 * xmm5; /* mulss */
    xmm0 = xmm0 + MEMF(0x648EA4); /* addss */
    xmm0 = xmm0 * xmm6; /* mulss */
    MEMF(esp) = xmm0; /* movss */
    PUSH32(esp, ecx);
    eax = esp + 0x40;
    ecx = edi;
    PUSH32(esp, 0); sub_00189170(); /* call 0x00189170 */

loc_00187270: ;
    xmm0 = MEMF(esp + 0x34); /* movss */
    xmm0 = xmm0 + MEMF(esp + 0x50); /* addss */
    MEMF(esp + 0x50) = xmm0; /* movss */
    xmm0 = MEMF(esp + 0x38); /* movss */
    xmm0 = xmm0 + MEMF(esp + 0x28); /* addss */
    MEMF(esp + 0x28) = xmm0; /* movss */
    xmm0 = MEMF(esp + 0x2C); /* movss */
    esp = esp + 0x20;
    xmm0 = xmm0 - MEMF(esp + 0x1C); /* subss */
    xmm1 = MEMF(0x648D14); /* movss */
    MEMF(esp + 0xC) = xmm0; /* movss */
    xmm0 = MEMF(esi + 0x74); /* movss */
    xmm0 = xmm0 - xmm1; /* subss */
    /* comiss xmm0, xmm1 - sets EFLAGS */
    MEMF(esi + 0x74) = xmm0; /* movss */
    if ((xmm0 > xmm1)) goto loc_00187191; /* ja: above (unsigned >) */

loc_001872C8: ;
    xmm0 = MEMF(esp + 0x30); /* movss */
    xmm1 = MEMF(0x648D30); /* movss */
    /* comiss xmm0, xmm1 - sets EFLAGS */
    POP32(esp, edi);
    if ((xmm0 <= xmm1)) goto loc_001872E9; /* jbe: below or equal (unsigned <=) */

loc_001872DC: ;
    /* nop */

loc_001872E0: ;
    xmm0 = xmm0 - xmm1; /* subss */
    /* comiss xmm0, xmm1 - sets EFLAGS */
    if ((xmm0 > xmm1)) goto loc_001872E0; /* ja: above (unsigned >) */

loc_001872E9: ;
    xmm2 = 0.0f; /* xorps self = zero */
    /* comiss xmm2, xmm0 - sets EFLAGS */
    if ((xmm2 <= xmm0)) goto loc_001872FA; /* jbe: below or equal (unsigned <=) */

loc_001872F1: ;
    xmm0 = xmm0 + xmm1; /* addss */
    /* comiss xmm2, xmm0 - sets EFLAGS */
    if ((xmm2 > xmm0)) goto loc_001872F1; /* ja: above (unsigned >) */

loc_001872FA: ;
    MEMF(esi + 0x5C) = xmm0; /* movss */
    xmm0 = MEMF(esp + 4); /* movss */
    /* comiss xmm0, xmm1 - sets EFLAGS */
    if ((xmm0 <= xmm1)) goto loc_00187319; /* jbe: below or equal (unsigned <=) */

loc_0018730A: ;
    /* nop */

loc_00187310: ;
    xmm0 = xmm0 - xmm1; /* subss */
    /* comiss xmm0, xmm1 - sets EFLAGS */
    if ((xmm0 > xmm1)) goto loc_00187310; /* ja: above (unsigned >) */

loc_00187319: ;
    /* comiss xmm2, xmm0 - sets EFLAGS */
    if ((xmm2 <= xmm0)) goto loc_00187329; /* jbe: below or equal (unsigned <=) */

loc_0018731E: ;
    edi = edi;

loc_00187320: ;
    xmm0 = xmm0 + xmm1; /* addss */
    /* comiss xmm2, xmm0 - sets EFLAGS */
    if ((xmm2 > xmm0)) goto loc_00187320; /* ja: above (unsigned >) */

loc_00187329: ;
    MEMF(esi + 0x60) = xmm0; /* movss */
    xmm0 = MEMF(esp + 8); /* movss */
    MEMF(esi + 0x6C) = xmm0; /* movss */

loc_00187339: ;
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
 * sub_00187340
 * Original: 0x00187340 - 0x001873AE (110 bytes, 25 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00187340(void)
{
    int _flags = 0; /* fallback flag var */
    float xmm0, xmm1;

loc_00187340: ;
    PUSH32(esp, esi);
    PUSH32(esp, 0); sub_003E1D70(); /* call 0x003E1D70 */

loc_00187346: ;
    xmm1 = MEMF(0x64957C); /* movss */
    esi = MEM32(0x6B7830);
    /* comiss xmm1, xmm0 - sets EFLAGS */
    if ((xmm1 <= xmm0)) esi = MEM32(0x6B7834); /* cmovbe */
    PUSH32(esp, 0); sub_003E1D70(); /* call 0x003E1D70 */

loc_00187363: ;
    xmm1 = MEMF(esi + 0xC); /* movss */
    xmm1 = xmm1 - MEMF(esi); /* subss */
    eax = MEM32(esp + 8);
    xmm1 = xmm1 * xmm0; /* mulss */
    xmm1 = xmm1 + MEMF(esi); /* addss */
    MEMF(eax) = xmm1; /* movss */
    xmm1 = MEMF(esi + 0x10); /* movss */
    xmm1 = xmm1 - MEMF(esi + 4); /* subss */
    xmm1 = xmm1 * xmm0; /* mulss */
    xmm1 = xmm1 + MEMF(esi + 4); /* addss */
    MEMF(eax + 4) = xmm1; /* movss */
    xmm1 = MEMF(esi + 0x14); /* movss */
    xmm1 = xmm1 - MEMF(esi + 8); /* subss */
    xmm1 = xmm1 * xmm0; /* mulss */
    xmm1 = xmm1 + MEMF(esi + 8); /* addss */
    MEMF(eax + 8) = xmm1; /* movss */
    POP32(esp, esi);
    esp += 4; return; /* ret */

}

/**
 * sub_001873B0
 * Original: 0x001873B0 - 0x001873CD (29 bytes, 10 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_001873B0(void)
{

loc_001873B0: ;
    PUSH32(esp, esi);
    PUSH32(esp, edi);
    PUSH32(esp, 0); sub_003E2480(); /* call 0x003E2480 */

loc_001873B7: ;
    edi = MEM32(esp + 0xC);
    eax = eax & 1;
    esi = MEM32(eax * 4 + 0x7752E4);
    PUSH32(esp, 0); sub_00110B70(); /* call 0x00110B70 */

loc_001873CA: ;
    POP32(esp, edi);
    POP32(esp, esi);
    esp += 4; return; /* ret */

}

/**
 * sub_001873D0
 * Original: 0x001873D0 - 0x00187435 (101 bytes, 25 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_001873D0(void)
{
    float xmm0, xmm1;

loc_001873D0: ;
    PUSH32(esp, esi);
    PUSH32(esp, 0); sub_003E2480(); /* call 0x003E2480 */

loc_001873D6: ;
    edx = ((int32_t)eax < 0) ? 0xFFFFFFFF : 0; /* cdq */
    ecx = 6;
    { int64_t _dividend = ((int64_t)(int32_t)edx << 32) | eax;
      eax = (uint32_t)((int32_t)(_dividend / (int32_t)ecx));
      edx = (uint32_t)((int32_t)(_dividend % (int32_t)ecx)); }
    esi = MEM32(edx * 4 + 0x6B7838);
    PUSH32(esp, 0); sub_003E1D70(); /* call 0x003E1D70 */

loc_001873EA: ;
    xmm1 = MEMF(esi + 0xC); /* movss */
    xmm1 = xmm1 - MEMF(esi); /* subss */
    eax = MEM32(esp + 8);
    xmm1 = xmm1 * xmm0; /* mulss */
    xmm1 = xmm1 + MEMF(esi); /* addss */
    MEMF(eax) = xmm1; /* movss */
    xmm1 = MEMF(esi + 0x10); /* movss */
    xmm1 = xmm1 - MEMF(esi + 4); /* subss */
    xmm1 = xmm1 * xmm0; /* mulss */
    xmm1 = xmm1 + MEMF(esi + 4); /* addss */
    MEMF(eax + 4) = xmm1; /* movss */
    xmm1 = MEMF(esi + 0x14); /* movss */
    xmm1 = xmm1 - MEMF(esi + 8); /* subss */
    xmm1 = xmm1 * xmm0; /* mulss */
    xmm1 = xmm1 + MEMF(esi + 8); /* addss */
    MEMF(eax + 8) = xmm1; /* movss */
    POP32(esp, esi);
    esp += 4; return; /* ret */

}

/**
 * sub_00187440
 * Original: 0x00187440 - 0x0018757C (316 bytes, 91 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00187440(void)
{
    int _flags = 0; /* fallback flag var */
    float xmm0, xmm1, xmm2, xmm3, xmm4, xmm5;

loc_00187440: ;
    PUSH32(esp, ebx);
    ebx = MEM32(esp + 0xC);
    PUSH32(esp, edi);
    edi = MEM32(ebx + 0x538);
    SET_LO8(eax, 0); /* xor self */
    if (TEST_Z(edi, edi)) { sub_0018757C(); return; } /* je: equal / zero */

loc_00187456: ;
    ecx = 0x16;
    goto loc_00187460;

    /* nop */

loc_00187460: ;
    if (TEST_NZ(LO8(eax), LO8(eax))) goto loc_0018747C; /* jne: not equal / not zero */

loc_00187464: ;
    if (CMP_NE(MEM32(edi + 0x38), ecx)) goto loc_0018746D; /* jne: not equal / not zero */

loc_00187469: ;
    SET_LO8(eax, 1);
    goto loc_00187470;

loc_0018746D: ;
    edi = MEM32(edi + 0x30);

loc_00187470: ;
    if (TEST_NZ(edi, edi)) goto loc_00187460; /* jne: not equal / not zero */

loc_00187474: ;
    if (TEST_Z(LO8(eax), LO8(eax))) { sub_0018757C(); return; } /* je: equal / zero */

loc_0018747C: ;
    PUSH32(esp, esi);
    PUSH32(esp, 0); sub_003E1D70(); /* call 0x003E1D70 */

loc_00187482: ;
    xmm4 = MEMF(0x648EA4); /* movss */
    xmm3 = MEMF(0x6493A8); /* movss */
    xmm0 = xmm0 * xmm4; /* mulss */
    xmm0 = xmm0 + xmm3; /* addss */
    PUSH32(esp, 0); sub_003E2480(); /* call 0x003E2480 */

loc_0018749F: ;
    eax = eax & 0xFF;
    ecx = 0; /* xor self */
    SET_LO8(ecx, LO8(eax));
    SET_LO8(ecx, LO8(ecx) - 0x40);
    SET_LO8(edx, LO8(ecx));
    SET_LO8(edx, LO8(edx) & 0xC0);
    if (TEST_Z(LO8(ecx), 0x40)) goto loc_001874C1; /* je: equal / zero */

loc_001874B5: ;
    ecx = ecx & 0x3F;
    esi = 0x40;
    esi = esi - ecx;
    goto loc_001874C6;

loc_001874C1: ;
    ecx = ecx & 0x3F;
    esi = ecx;

loc_001874C6: ;
    (void)0; /* test LO8(edx), LO8(edx) - flags set for next jcc */
    xmm2 = 0.0f; /* xorps self = zero */
    if (TEST_Z(LO8(edx), LO8(edx))) goto loc_001874E0; /* je: equal / zero */

loc_001874CD: ;
    if (CMP_EQ(LO8(edx), 0xC0)) goto loc_001874E0; /* je: equal / zero */

loc_001874D2: ;
    xmm1 = xmm2; /* movaps */
    xmm1 = xmm1 - MEMF(esi * 4 + 0x743090); /* subss */
    goto loc_001874E9;

loc_001874E0: ;
    xmm1 = MEMF(esi * 4 + 0x743090); /* movss */

loc_001874E9: ;
    SET_LO8(edx, LO8(eax));
    SET_LO8(edx, LO8(edx) & 0xC0);
    (void)0; /* test LO8(eax), 0x40 - flags set for next jcc */
    POP32(esp, esi);
    if (TEST_Z(LO8(eax), 0x40)) goto loc_001874FF; /* je: equal / zero */

loc_001874F3: ;
    eax = eax & 0x3F;
    ecx = 0x40;
    ecx = ecx - eax;
    goto loc_00187504;

loc_001874FF: ;
    eax = eax & 0x3F;
    ecx = eax;

loc_00187504: ;
    if (TEST_Z(LO8(edx), LO8(edx))) goto loc_00187516; /* je: equal / zero */

loc_00187508: ;
    (void)0; /* cmp LO8(edx), 0xC0 - flags set for next jcc */
    xmm2 = xmm2 - MEMF(ecx * 4 + 0x743090); /* subss */
    if (CMP_NE(LO8(edx), 0xC0)) goto loc_0018751F; /* jne: not equal / not zero */

loc_00187516: ;
    xmm2 = MEMF(ecx * 4 + 0x743090); /* movss */

loc_0018751F: ;
    eax = MEM32(edi + 0x2C);
    xmm5 = MEMF(eax + 0x54); /* movss */
    ecx = MEM32(esp + 0xC);
    xmm1 = xmm1 * xmm0; /* mulss */
    xmm5 = xmm5 * xmm3; /* mulss */
    xmm1 = xmm1 - xmm5; /* subss */
    xmm1 = xmm1 + MEMF(ebx + 0x78); /* addss */
    MEMF(ecx) = xmm1; /* movss */
    xmm1 = MEMF(eax + 0x58); /* movss */
    xmm5 = MEMF(ebx + 0x7C); /* movss */
    xmm1 = xmm1 * xmm3; /* mulss */
    xmm2 = xmm2 * xmm0; /* mulss */
    xmm5 = xmm5 - xmm1; /* subss */
    xmm5 = xmm5 + xmm4; /* addss */
    MEMF(ecx + 4) = xmm5; /* movss */
    xmm0 = MEMF(eax + 0x5C); /* movss */
    xmm0 = xmm0 * xmm3; /* mulss */
    xmm2 = xmm2 - xmm0; /* subss */
    xmm2 = xmm2 + MEMF(ebx + 0x80); /* addss */
    POP32(esp, edi);
    MEMF(ecx + 8) = xmm2; /* movss */
    POP32(esp, ebx);
    esp += 4; return; /* ret */

}

/**
 * sub_001875A0
 * Original: 0x001875A0 - 0x001875BD (29 bytes, 9 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_001875A0(void)
{

loc_001875A0: ;
    eax = MEM32(esp + 8);
    edx = MEM32(eax + 0x78);
    ecx = MEM32(esp + 4);
    MEM32(ecx) = edx;
    edx = MEM32(eax + 0x7C);
    MEM32(ecx + 4) = edx;
    eax = MEM32(eax + 0x80);
    MEM32(ecx + 8) = eax;
    esp += 4; return; /* ret */

}

/**
 * sub_001875C0
 * Original: 0x001875C0 - 0x0018767E (190 bytes, 52 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_001875C0(void)
{
    float xmm0, xmm5, xmm6;
    double _fp_stack[8];
    int _fp_top = 0;
    #define fp_push(v) (_fp_stack[--_fp_top & 7] = (v))
    #define fp_pop() (_fp_top++)
    #define fp_popp() (fp_pop())
    #define fp_top() _fp_stack[_fp_top & 7]
    #define fp_st1() _fp_stack[(_fp_top + 1) & 7]

loc_001875C0: ;
    PUSH32(esp, esi);
    PUSH32(esp, edi);
    edi = MEM32(esp + 0x14);
    eax = MEM32(edi + 8);
    ecx = MEM32(edi);
    PUSH32(esp, eax);
    PUSH32(esp, ecx);
    PUSH32(esp, 0); sub_003E3CA0(); /* call 0x003E3CA0 */

loc_001875D2: ;
    esi = MEM32(esp + 0x20);
    esp = esp + 8;
    MEMF(esi) = xmm0; /* movss */
    PUSH32(esp, 0); sub_003E1D70(); /* call 0x003E1D70 */

loc_001875E2: ;
    xmm0 = xmm0 * MEMF(0x649578); /* mulss */
    MEMF(esi + 8) = xmm0; /* movss */
    PUSH32(esp, 0); sub_003E1D70(); /* call 0x003E1D70 */

loc_001875F4: ;
    xmm5 = MEMF(0x648D30); /* movss */
    xmm0 = xmm0 * xmm5; /* mulss */
    MEMF(esi + 0x10) = xmm0; /* movss */
    PUSH32(esp, 0); sub_003E1D70(); /* call 0x003E1D70 */

loc_0018760A: ;
    xmm6 = MEMF(0x648D10); /* movss */
    xmm0 = xmm0 * xmm6; /* mulss */
    MEMF(esi + 0x18) = xmm0; /* movss */
    fp_push(MEMF(edi + 8)); /* fld float */
    fp_push(MEMF(edi)); /* fld float */
    edx = MEM32(edi + 4);
    /* fld st(1) */
    PUSH32(esp, edx);
    fp_st1() *= fp_top(); fp_pop(); /* fmulp */
    PUSH32(esp, ecx);
    /* fld st(0) */
    fp_st1() *= fp_top(); fp_pop(); /* fmul */
    fp_st1() += fp_top(); fp_pop(); /* faddp */
    { double _t = fp_top(); fp_top() = fp_st1(); fp_st1() = _t; } /* fxch */
    fp_top() = sqrt(fp_top()); /* fsqrt */
    /* fstp st(1) */
    MEMF(esp) = (float)fp_top(); fp_popp(); /* fstp */
    PUSH32(esp, 0); sub_003E3CA0(); /* call 0x003E3CA0 */

loc_0018763D: ;
    xmm0 = xmm0 - MEMF(0x648DE0); /* subss */
    esp = esp + 8;
    MEMF(esi + 4) = xmm0; /* movss */
    PUSH32(esp, 0); sub_003E1D70(); /* call 0x003E1D70 */

loc_00187652: ;
    xmm0 = xmm0 * MEMF(0x649574); /* mulss */
    MEMF(esi + 0xC) = xmm0; /* movss */
    PUSH32(esp, 0); sub_003E1D70(); /* call 0x003E1D70 */

loc_00187664: ;
    xmm0 = xmm0 * xmm5; /* mulss */
    MEMF(esi + 0x14) = xmm0; /* movss */
    PUSH32(esp, 0); sub_003E1D70(); /* call 0x003E1D70 */

loc_00187672: ;
    xmm0 = xmm0 * xmm6; /* mulss */
    POP32(esp, edi);
    MEMF(esi + 0x1C) = xmm0; /* movss */
    POP32(esp, esi);
    esp += 4; return; /* ret */

    #undef fp_push
    #undef fp_pop
    #undef fp_popp
    #undef fp_top
    #undef fp_st1
}

/**
 * sub_00187680
 * Original: 0x00187680 - 0x0018770D (141 bytes, 31 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00187680(void)
{
    float xmm0, xmm5;

loc_00187680: ;
    eax = MEM32(esp + 0xC);
    ecx = MEM32(eax + 8);
    edx = MEM32(eax);
    PUSH32(esp, esi);
    PUSH32(esp, ecx);
    PUSH32(esp, edx);
    PUSH32(esp, 0); sub_003E3CA0(); /* call 0x003E3CA0 */

loc_00187691: ;
    esi = MEM32(esp + 0x1C);
    MEMF(esi) = xmm0; /* movss */
    xmm0 = MEMF(0x649570); /* movss */
    esp = esp + 8;
    MEMF(esi + 8) = xmm0; /* movss */
    PUSH32(esp, 0); sub_003E1D70(); /* call 0x003E1D70 */

loc_001876AE: ;
    xmm5 = MEMF(0x648D30); /* movss */
    xmm0 = xmm0 * xmm5; /* mulss */
    MEMF(esi + 0x10) = xmm0; /* movss */
    PUSH32(esp, 0); sub_003E1D70(); /* call 0x003E1D70 */

loc_001876C4: ;
    xmm0 = xmm0 * MEMF(0x648E64); /* mulss */
    MEMF(esi + 0x18) = xmm0; /* movss */
    xmm0 = MEMF(0x64956C); /* movss */
    MEMF(esi + 4) = xmm0; /* movss */
    xmm0 = MEMF(0x649568); /* movss */
    MEMF(esi + 0xC) = xmm0; /* movss */
    PUSH32(esp, 0); sub_003E1D70(); /* call 0x003E1D70 */

loc_001876F0: ;
    xmm0 = xmm0 * xmm5; /* mulss */
    MEMF(esi + 0x14) = xmm0; /* movss */
    PUSH32(esp, 0); sub_003E1D70(); /* call 0x003E1D70 */

loc_001876FE: ;
    xmm0 = xmm0 * MEMF(0x648EB0); /* mulss */
    MEMF(esi + 0x1C) = xmm0; /* movss */
    POP32(esp, esi);
    esp += 4; return; /* ret */

}

/**
 * sub_00187710
 * Original: 0x00187710 - 0x001878D1 (449 bytes, 116 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00187710(void)
{
    int _flags = 0; /* fallback flag var */
    float xmm0, xmm1, xmm5, xmm6;

loc_00187710: ;
    esp = esp - 0x10;
    PUSH32(esp, ebx);
    ebx = eax;
    PUSH32(esp, 0); sub_003E1D70(); /* call 0x003E1D70 */

loc_0018771B: ;
    xmm1 = MEMF(0x64AA90); /* movss */
    /* comiss xmm1, xmm0 - sets EFLAGS */
    if ((xmm1 <= xmm0)) goto loc_001878CC; /* jbe: below or equal (unsigned <=) */

loc_0018772C: ;
    PUSH32(esp, esi);
    MEM32(esp + 8) = 4;
    MEM32(esp + 0xC) = 5;
    PUSH32(esp, 0); sub_003E1D70(); /* call 0x003E1D70 */

loc_00187742: ;
    xmm1 = MEMF(0x64AA8C); /* movss */
    /* comiss xmm1, xmm0 - sets EFLAGS */
    if ((xmm1 <= xmm0)) goto loc_001877C4; /* jbe: below or equal (unsigned <=) */

loc_0018774F: ;
    PUSH32(esp, 0); sub_003E1D70(); /* call 0x003E1D70 */

loc_00187754: ;
    xmm0 = xmm0 * MEMF(0x64971C); /* mulss */
    MEMF(esp + 8) = xmm0; /* movss */
    PUSH32(esp, 0); sub_003E1D70(); /* call 0x003E1D70 */

loc_00187767: ;
    xmm0 = xmm0 * MEMF(0x649718); /* mulss */
    MEMF(esp + 0xC) = xmm0; /* movss */
    PUSH32(esp, 0); sub_003E2480(); /* call 0x003E2480 */

loc_0018777A: ;
    PUSH32(esp, 0); sub_003E2480(); /* call 0x003E2480 */

loc_0018777F: ;
    PUSH32(esp, 0); sub_003E2480(); /* call 0x003E2480 */

loc_00187784: ;
    PUSH32(esp, 0); sub_003E2480(); /* call 0x003E2480 */

loc_00187789: ;
    edx = ((int32_t)eax < 0) ? 0xFFFFFFFF : 0; /* cdq */
    ecx = 0xC9;
    { int64_t _dividend = ((int64_t)(int32_t)edx << 32) | eax;
      eax = (uint32_t)((int32_t)(_dividend / (int32_t)ecx));
      edx = (uint32_t)((int32_t)(_dividend % (int32_t)ecx)); }
    esi = edx;
    esi = esi + 0x1F4;
    PUSH32(esp, 0); sub_003E1D70(); /* call 0x003E1D70 */

loc_0018779E: ;
    xmm0 = xmm0 * MEMF(0x648EC8); /* mulss */
    xmm0 = xmm0 + MEMF(0x648EA4); /* addss */
    PUSH32(esp, ecx);
    ecx = esi;
    eax = esp + 0xC;
    MEMF(esp) = xmm0; /* movss */
    PUSH32(esp, 0); sub_001878E0(); /* call 0x001878E0 */

loc_001877BF: ;
    esp = esp + 4;
    goto loc_00187827;

loc_001877C4: ;
    PUSH32(esp, ebx);
    PUSH32(esp, 2);
    edx = esp + 0x10;
    PUSH32(esp, edx);
    PUSH32(esp, 3);
    PUSH32(esp, 0x40);
    PUSH32(esp, 0xFF);
    PUSH32(esp, 0); sub_003E2480(); /* call 0x003E2480 */

loc_001877DA: ;
    edx = ((int32_t)eax < 0) ? 0xFFFFFFFF : 0; /* cdq */
    ecx = 0x1A;
    { int64_t _dividend = ((int64_t)(int32_t)edx << 32) | eax;
      eax = (uint32_t)((int32_t)(_dividend / (int32_t)ecx));
      edx = (uint32_t)((int32_t)(_dividend % (int32_t)ecx)); }
    SET_LO8(edx, LO8(edx) + 0x64);
    PUSH32(esp, edx);
    PUSH32(esp, 9);
    PUSH32(esp, 0); sub_003E2480(); /* call 0x003E2480 */

loc_001877ED: ;
    edx = ((int32_t)eax < 0) ? 0xFFFFFFFF : 0; /* cdq */
    ecx = 0xC9;
    { int64_t _dividend = ((int64_t)(int32_t)edx << 32) | eax;
      eax = (uint32_t)((int32_t)(_dividend / (int32_t)ecx));
      edx = (uint32_t)((int32_t)(_dividend % (int32_t)ecx)); }
    edx = edx + 0x1F4;
    PUSH32(esp, edx);
    PUSH32(esp, 0); sub_003E1D70(); /* call 0x003E1D70 */

loc_00187801: ;
    xmm0 = xmm0 * MEMF(0x648EA4); /* mulss */
    xmm0 = xmm0 + MEMF(0x648EC8); /* addss */
    xmm0 = xmm0 * MEMF(0x648D80); /* mulss */
    PUSH32(esp, ecx);
    MEMF(esp) = xmm0; /* movss */
    PUSH32(esp, 0); sub_001879B0(); /* call 0x001879B0 */

loc_00187824: ;
    esp = esp + 0x28;

loc_00187827: ;
    edx = MEM32(0x847024);
    eax = MEM32(edx + 0x40);
    PUSH32(esp, 0);
    PUSH32(esp, 0);
    PUSH32(esp, 0xFFFFFFFFu);
    PUSH32(esp, 0xFFFFFFFFu);
    PUSH32(esp, 0);
    PUSH32(esp, 0);
    PUSH32(esp, 4);
    PUSH32(esp, eax);
    edx = edx | 0xFFFFFFFFu;
    eax = eax | 0xFFFFFFFFu;
    ecx = 0x360;
    PUSH32(esp, 0); sub_00022D90(); /* call 0x00022D90 */

loc_0018784F: ;
    SET_LO8(ecx, MEM8(esp + 0x1C));
    SET_LO8(eax, LO8(ebx));
    SET_LO8(ebx, 1);
    esi = 0; /* xor self */
    SET_LO8(edx, LO8(ebx));
    PUSH32(esp, 0); sub_000C4C10(); /* call 0x000C4C10 */

loc_00187860: ;
    MEM8(esp + 8) = LO8(ebx);
    PUSH32(esp, 0); sub_003E2480(); /* call 0x003E2480 */

loc_00187869: ;
    edx = ((int32_t)eax < 0) ? 0xFFFFFFFF : 0; /* cdq */
    ecx = 0x1A;
    { int64_t _dividend = ((int64_t)(int32_t)edx << 32) | eax;
      eax = (uint32_t)((int32_t)(_dividend / (int32_t)ecx));
      edx = (uint32_t)((int32_t)(_dividend % (int32_t)ecx)); }
    MEM8(esp + 0x14) = LO8(ebx);
    edx = edx + 0x19;
    MEM16(esp + 0xA) = LO16(edx);
    PUSH32(esp, 0); sub_003E1D70(); /* call 0x003E1D70 */

loc_00187882: ;
    xmm5 = MEMF(0x64A0D4); /* movss */
    xmm6 = MEMF(0x649B80); /* movss */
    xmm0 = xmm0 * xmm5; /* mulss */
    xmm0 = xmm0 + xmm6; /* addss */
    MEMF(esp + 0xC) = xmm0; /* movss */
    PUSH32(esp, 0); sub_003E1D70(); /* call 0x003E1D70 */

loc_001878A5: ;
    PUSH32(esp, 0xFF);
    edx = esp + 0xC;
    xmm0 = xmm0 * xmm5; /* mulss */
    PUSH32(esp, esi);
    xmm0 = xmm0 + xmm6; /* addss */
    PUSH32(esp, edx);
    MEMF(esp + 0x1C) = xmm0; /* movss */
    MEM8(esp + 0x21) = 0xFF;
    PUSH32(esp, 0); sub_0015A3F0(); /* call 0x0015A3F0 */

loc_001878C8: ;
    esp = esp + 0xC;
    POP32(esp, esi);

loc_001878CC: ;
    POP32(esp, ebx);
    esp = esp + 0x10;
    esp += 4; return; /* ret */

}

/**
 * sub_001878E0
 * Original: 0x001878E0 - 0x001879AD (205 bytes, 54 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_001878E0(void)
{
    int _flags = 0; /* fallback flag var */
    float xmm0, xmm1;

loc_001878E0: ;
    esp = esp - 0x20;
    xmm1 = MEMF(eax); /* movss */
    ecx = SX16(LO16(ecx));
    MEMF(esp + 0x14) = xmm1; /* movss */
    xmm1 = MEMF(eax + 4); /* movss */
    xmm0 = (float)(int32_t)ecx; /* cvtsi2ss */
    xmm0 = xmm0 * MEMF(0x6497D0); /* mulss */
    MEMF(esp + 0x18) = xmm1; /* movss */
    xmm1 = 0.0f; /* xorps self = zero */
    PUSH32(esp, edi);
    MEMF(esp + 4) = xmm0; /* movss */
    MEMF(esp + 0x20) = xmm1; /* movss */
    MEM32(esp + 0x10) = 0x250;
    MEM32(esp + 0x14) = 0x251;
    MEM32(esp + 8) = 0x44;
    MEM32(esp + 0xC) = 0x252;
    PUSH32(esp, 0); sub_003E2480(); /* call 0x003E2480 */

loc_0018793C: ;
    eax = eax & 0x80000001u;
    if (((int32_t)eax >= 0)) goto loc_00187948; /* jns: not sign (positive) */

loc_00187943: ;
    eax--;
    eax = eax | 0xFFFFFFFEu;
    eax++;

loc_00187948: ;
    edx = MEM32(esp + eax * 4 + 8);
    PUSH32(esp, 0);
    eax = MEM32(esp + eax * 4 + 0x14);
    PUSH32(esp, 0);
    PUSH32(esp, 0);
    xmm0 = xmm0 * MEMF(0x64909C); /* mulss */
    PUSH32(esp, 0xFF);
    PUSH32(esp, 0xFF);
    PUSH32(esp, 0xFF);
    PUSH32(esp, 0xFF);
    PUSH32(esp, 0xAC);
    PUSH32(esp, 5);
    PUSH32(esp, edx);
    edx = MEM32(esp + 0x50);
    PUSH32(esp, eax);
    PUSH32(esp, ecx);
    ecx = MEM32(esp + 0x34);
    MEMF(esp) = xmm0; /* movss */
    PUSH32(esp, ecx);
    PUSH32(esp, 0);
    PUSH32(esp, edx);
    PUSH32(esp, 0x3F000000);
    eax = esp + 0x58;
    PUSH32(esp, eax);
    PUSH32(esp, 0);
    edi = 0x5A02CC;
    PUSH32(esp, 0); sub_001AF030(); /* call 0x001AF030 */

loc_001879A3: ;
    esp = esp + 0x48;
    eax = 0; /* xor self */
    POP32(esp, edi);
    esp = esp + 0x20;
    esp += 4; return; /* ret */

}

/**
 * sub_001879B0
 * Original: 0x001879B0 - 0x00187BA9 (505 bytes, 109 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_001879B0(void)
{
    uint32_t ebp;
    int _flags = 0; /* fallback flag var */
    float xmm0, xmm5;
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_001879B0: ;
    esp = esp - 0x15C;
    PUSH32(esp, ebx);
    PUSH32(esp, esi);
    PUSH32(esp, edi);
    eax = esp + 0x18;
    PUSH32(esp, 0); sub_000F9430(); /* call 0x000F9430 */

loc_001879C2: ;
    PUSH32(esp, 0); sub_003E2480(); /* call 0x003E2480 */

loc_001879C7: ;
    eax = eax & 0x80000003u;
    if (((int32_t)eax >= 0)) goto loc_001879D3; /* jns: not sign (positive) */

loc_001879CE: ;
    eax--;
    eax = eax | 0xFFFFFFFCu;
    eax++;

loc_001879D3: ;
    ecx = (uint32_t)(int32_t)SMEM16(esp + 0x170);
    esi = ZX8(MEM8(esp + 0x174));
    SET_LO16(edx, MEM16(esp + 0x180));
    xmm5 = MEMF(esp + 0x16C); /* movss */
    xmm0 = (float)(int32_t)ecx; /* cvtsi2ss */
    SET_LO16(ecx, MEM16(esp + 0x184));
    MEM16(esp + 0x32) = LO16(ecx);
    SET_LO8(ecx, 0xFF);
    edi = ZX8(LO8(eax));
    esi = esi & 0xFFFFFFF9u;
    (void)0; /* cmp edi, 3 - flags set for next jcc */
    MEM16(esp + 0x30) = LO16(edx);
    SET_LO8(edx, MEM8(esp + 0x178));
    MEM8(esp + 0x3B) = LO8(ecx);
    MEM8(esp + 0x3F) = LO8(ecx);
    MEM8(esp + 0x3E) = LO8(ecx);
    MEM8(esp + 0x3D) = LO8(ecx);
    MEM8(esp + 0x40) = LO8(ecx);
    SET_LO8(ecx, MEM8(esp + 0x17C));
    MEMF(esp + 0x24) = xmm5; /* movss */
    MEMF(esp + 0x20) = xmm5; /* movss */
    MEMF(esp + 0x28) = xmm0; /* movss */
    MEM32(esp + 0x2C) = esi;
    MEM8(esp + 0x38) = 5;
    MEM32(esp + 0x54) = 1;
    MEM8(esp + 0x3A) = 0xE6;
    MEM8(esp + 0x39) = 0xBE;
    MEM8(esp + 0x3C) = LO8(edx);
    MEM8(esp + 0x41) = LO8(ecx);
    if (CMP_A(edi, 3)) goto loc_00187B70; /* ja: above (unsigned >) */

loc_00187A72: ;
    { uint32_t _jt = MEM32(edi * 4 + 0x187BAC); /* switch: 4 entries, 2 targets */
    if (_jt == 0x00187A79u) goto loc_00187A79;
    if (_jt == 0x00187AF7u) goto loc_00187AF7;
    g_seh_ebp = ebp; RECOMP_ITAIL(_jt); return; }

loc_00187A79: ;
    MEM32(esp + 0xC) = 0x48;
    MEM32(esp + 0x10) = 0x49;
    MEM32(esp + 0x14) = 0x4A;
    PUSH32(esp, 0); sub_003E2480(); /* call 0x003E2480 */

loc_00187A96: ;
    edx = ((int32_t)eax < 0) ? 0xFFFFFFFF : 0; /* cdq */
    ecx = 3;
    { int64_t _dividend = ((int64_t)(int32_t)edx << 32) | eax;
      eax = (uint32_t)((int32_t)(_dividend / (int32_t)ecx));
      edx = (uint32_t)((int32_t)(_dividend % (int32_t)ecx)); }
    edx = MEM32(esp + edx * 4 + 0xC);
    MEM32(esp + 0x58) = edx;
    PUSH32(esp, 0); sub_003E1D70(); /* call 0x003E1D70 */

loc_00187AAB: ;
    edi = edi - 0;
    xmm0 = xmm0 * MEMF(0x649428); /* mulss */
    xmm0 = xmm0 - MEMF(0x6493A8); /* subss */
    MEMF(esp + 0x1C) = xmm0; /* movss */
    if ((edi == 0)) goto loc_00187AE0; /* je: equal / zero */

loc_00187AC6: ;
    edi--;
    if ((edi != 0)) goto loc_00187B70; /* jne: not equal / not zero */

loc_00187ACD: ;
    xmm5 = xmm5 - MEMF(0x649EC4); /* subss */
    MEMF(esp + 0x18) = xmm5; /* movss */
    goto loc_00187B70;

loc_00187AE0: ;
    xmm0 = MEMF(0x649EC4); /* movss */
    xmm0 = xmm0 - xmm5; /* subss */
    MEMF(esp + 0x18) = xmm0; /* movss */
    esi = esi | 2;
    goto loc_00187B6C;

loc_00187AF7: ;
    MEM32(esp + 0xC) = 0x45;
    MEM32(esp + 0x10) = 0x46;
    MEM32(esp + 0x14) = 0x47;
    PUSH32(esp, 0); sub_003E2480(); /* call 0x003E2480 */

loc_00187B14: ;
    edx = ((int32_t)eax < 0) ? 0xFFFFFFFF : 0; /* cdq */
    ecx = 3;
    { int64_t _dividend = ((int64_t)(int32_t)edx << 32) | eax;
      eax = (uint32_t)((int32_t)(_dividend / (int32_t)ecx));
      edx = (uint32_t)((int32_t)(_dividend % (int32_t)ecx)); }
    edx = MEM32(esp + edx * 4 + 0xC);
    MEM32(esp + 0x58) = edx;
    PUSH32(esp, 0); sub_003E1D70(); /* call 0x003E1D70 */

loc_00187B29: ;
    edi = edi - 2;
    xmm0 = xmm0 * MEMF(0x649298); /* mulss */
    xmm0 = xmm0 - MEMF(0x649248); /* subss */
    MEMF(esp + 0x18) = xmm0; /* movss */
    if ((edi == 0)) goto loc_00187B57; /* je: equal / zero */

loc_00187B44: ;
    edi--;
    if ((edi != 0)) goto loc_00187B70; /* jne: not equal / not zero */

loc_00187B47: ;
    xmm5 = xmm5 - MEMF(0x649420); /* subss */
    MEMF(esp + 0x1C) = xmm5; /* movss */
    goto loc_00187B70;

loc_00187B57: ;
    xmm0 = MEMF(0x649420); /* movss */
    xmm0 = xmm0 - xmm5; /* subss */
    MEMF(esp + 0x1C) = xmm0; /* movss */
    esi = esi | 4;

loc_00187B6C: ;
    MEM32(esp + 0x2C) = esi;

loc_00187B70: ;
    eax = MEM32(esp + 0x190);
    xmm0 = 0.0f; /* xorps self = zero */
    ecx = MEM32(esp + 0x188);
    PUSH32(esp, eax);
    eax = MEM32(esp + 0x190);
    PUSH32(esp, 0);
    PUSH32(esp, 0);
    ebx = esp + 0x24;
    MEMF(esp + 0x40) = xmm0; /* movss */
    PUSH32(esp, 0); sub_0015D5E0(); /* call 0x0015D5E0 */

loc_00187B9C: ;
    esp = esp + 0xC;
    POP32(esp, edi);
    POP32(esp, esi);
    POP32(esp, ebx);
    esp = esp + 0x15C;
    esp += 4; return; /* ret */

}

/**
 * sub_00187BC0
 * Original: 0x00187BC0 - 0x00187BCF (15 bytes, 6 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00187BC0(void)
{
    int _flags = 0; /* fallback flag var */

loc_00187BC0: ;
    esp = esp - 0x24;
    if (CMP_GE(LO16(esi), 2)) { sub_00187BCF(); return; } /* jge: greater or equal (signed >=) */

loc_00187BC9: ;
    eax = 0; /* xor self */
    esp = esp + 0x24;
    esp += 4; return; /* ret */

}

/**
 * sub_00187E50
 * Original: 0x00187E50 - 0x00187F4E (254 bytes, 60 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00187E50(void)
{
    int _flags = 0; /* fallback flag var */
    float xmm0, xmm1;

loc_00187E50: ;
    esp = esp - 8;
    PUSH32(esp, esi);
    esi = MEM32(esp + 0x10);
    xmm0 = MEMF(esi + 0x4C); /* movss */
    xmm0 = xmm0 * MEMF(0x7FA24C); /* mulss */
    xmm0 = xmm0 + MEMF(esi + 0x50); /* addss */
    /* comiss xmm0, MEMF(0x648D14) - sets EFLAGS */
    MEMF(esi + 0x50) = xmm0; /* movss */
    if ((xmm0 <= MEMF(0x648D14))) goto loc_00187F32; /* jbe: below or equal (unsigned <=) */

loc_00187E7C: ;
    /* nop */

loc_00187E80: ;
    SET_LO16(eax, MEM16(esi + 0x56));
    if (CMP_EQ(LO16(eax), MEM16(esi + 0x54))) goto loc_00187F32; /* je: equal / zero */

loc_00187E8E: ;
    eax = SX16(LO16(eax));
    xmm0 = MEMF(esi + eax * 8 + 0x58); /* movss */
    eax = esi + eax * 8 + 0x58;
    MEMF(esp + 4) = xmm0; /* movss */
    xmm0 = MEMF(eax + 4); /* movss */
    MEMF(esp + 8) = xmm0; /* movss */
    PUSH32(esp, 0); sub_003E1D70(); /* call 0x003E1D70 */

loc_00187EB1: ;
    PUSH32(esp, 0); sub_003E2480(); /* call 0x003E2480 */

loc_00187EB6: ;
    PUSH32(esp, 0); sub_003E2480(); /* call 0x003E2480 */

loc_00187EBB: ;
    PUSH32(esp, 0); sub_003E1D70(); /* call 0x003E1D70 */

loc_00187EC0: ;
    xmm0 = xmm0 * MEMF(0x649030); /* mulss */
    xmm0 = xmm0 + MEMF(0x648E5C); /* addss */
    PUSH32(esp, ecx);
    ecx = 0x12C;
    eax = esp + 8;
    MEMF(esp) = xmm0; /* movss */
    PUSH32(esp, 0); sub_001878E0(); /* call 0x001878E0 */

loc_00187EE4: ;
    ecx = MEM32(0x847024);
    edx = MEM32(ecx + 0x40);
    esp = esp + 4;
    PUSH32(esp, 0);
    PUSH32(esp, 0);
    PUSH32(esp, 0xFFFFFFFFu);
    PUSH32(esp, 0xFFFFFFFFu);
    PUSH32(esp, 0);
    PUSH32(esp, 0);
    PUSH32(esp, 4);
    PUSH32(esp, edx);
    edx = edx | 0xFFFFFFFFu;
    eax = eax | 0xFFFFFFFFu;
    ecx = 0x360;
    PUSH32(esp, 0); sub_00022D90(); /* call 0x00022D90 */

loc_00187F0F: ;
    xmm1 = MEMF(esi + 0x50); /* movss */
    xmm0 = MEMF(0x648D14); /* movss */
    MEM16(esi + 0x56) = MEM16(esi + 0x56) + 1;
    xmm1 = xmm1 - xmm0; /* subss */
    /* comiss xmm1, xmm0 - sets EFLAGS */
    MEMF(esi + 0x50) = xmm1; /* movss */
    if ((xmm1 > xmm0)) goto loc_00187E80; /* ja: above (unsigned >) */

loc_00187F32: ;
    SET_LO16(eax, MEM16(esi + 0x56));
    if (CMP_L(LO16(eax), MEM16(esi + 0x54))) goto loc_00187F49; /* jl: less (signed <) */

loc_00187F3C: ;
    xmm0 = MEMF(0x648D34); /* movss */
    MEMF(esi + 0x30) = xmm0; /* movss */

loc_00187F49: ;
    POP32(esp, esi);
    esp = esp + 8;
    esp += 4; return; /* ret */

}

/**
 * sub_00187F50
 * Original: 0x00187F50 - 0x00187F9F (79 bytes, 17 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00187F50(void)
{
    uint32_t ebp;
    int _flags = 0; /* fallback flag var */
    float xmm0;
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_00187F50: ;
    esp = esp - 0x34;
    xmm0 = MEMF(0x649030); /* movss */
    ecx = 0; /* xor self */
    edx = 0; /* xor self */
    (void)0; /* cmp LO16(eax), 0xFFFF - flags set for next jcc */
    SET_LO8(ecx, (CMP_NE(LO16(eax), 0xFFFF)) ? 1 : 0); /* setne */
    MEM32(esp + 0x30) = 0x303;
    MEM16(esp + 0x26) = 0x14;
    MEMF(esp + 0x28) = xmm0; /* movss */
    MEM32(esp + 8) = 0x4F;
    MEM8(esp + 0xC) = LO8(edx);
    ecx = ecx | 0x49300;
    (void)0; /* cmp LO16(eax), 0xFFFF - flags set for next jcc */
    MEM32(esp) = ecx;
    if (CMP_NE(LO16(eax), 0xFFFF)) { sub_00187F9F(); return; } /* jne: not equal / not zero */

loc_00187F96: ;
    MEM16(esp + 4) = 0x12C;
    g_seh_ebp = ebp; sub_00187FA7(); return; /* tail jmp 0x00187FA7 */

}

/**
 * sub_00188060
 * Original: 0x00188060 - 0x00188226 (454 bytes, 95 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00188060(void)
{
    uint32_t ebp;
    int _flags = 0; /* fallback flag var */
    float xmm0;
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_00188060: ;
    esp = esp - 0x6C;
    (void)0; /* cmp LO8(eax), 4 - flags set for next jcc */
    PUSH32(esp, ebp);
    ebp = MEM32(esp + 0x74);
    if (CMP_EQ(LO8(eax), 4)) goto loc_0018807C; /* je: equal / zero */

loc_0018806C: ;
    if (CMP_EQ(LO8(eax), 5)) goto loc_0018807C; /* je: equal / zero */

loc_00188070: ;
    if (CMP_EQ(LO8(eax), 6)) goto loc_0018807C; /* je: equal / zero */

loc_00188074: ;
    if (CMP_NE(LO8(eax), 7)) goto loc_00188221; /* jne: not equal / not zero */

loc_0018807C: ;
    eax = ZX8(LO8(eax));
    eax = eax + eax * 2;
    ecx = eax * 4 + 0x599028;
    PUSH32(esp, esi);
    esi = MEM32(ecx);
    edx = MEM32(ecx + 4);
    PUSH32(esp, edi);
    edi = MEM32(ecx + 8);
    MEM32(esp + 0x10) = edx;
    xmm0 = MEMF(esp + 0x10); /* movss */
    xmm0 = xmm0 + MEMF(0x5A005C); /* addss */
    eax = esp + 0xC;
    PUSH32(esp, ebp);
    PUSH32(esp, eax);
    MEM32(esp + 0x14) = esi;
    MEM32(esp + 0x1C) = edi;
    MEMF(esp + 0x18) = xmm0; /* movss */
    PUSH32(esp, 0); sub_0019A300(); /* call 0x0019A300 */

loc_001880BE: ;
    xmm0 = MEMF(0x64A1B4); /* movss */
    ecx = MEM32(esp + 0x18);
    MEMF(esp + 0x40) = xmm0; /* movss */
    xmm0 = MEMF(0x64A510); /* movss */
    MEMF(esp + 0x44) = xmm0; /* movss */
    xmm0 = MEMF(0x64A660); /* movss */
    MEMF(esp + 0x48) = xmm0; /* movss */
    xmm0 = MEMF(0x648E8C); /* movss */
    MEMF(esp + 0x4C) = xmm0; /* movss */
    xmm0 = MEMF(0x64A65C); /* movss */
    MEMF(esp + 0x50) = xmm0; /* movss */
    xmm0 = MEMF(0x64A658); /* movss */
    MEMF(esp + 0x54) = xmm0; /* movss */
    xmm0 = MEMF(0x649B0C); /* movss */
    MEMF(esp + 0x60) = xmm0; /* movss */
    xmm0 = MEMF(0x64A654); /* movss */
    MEMF(esp + 0x64) = xmm0; /* movss */
    xmm0 = MEMF(0x64A650); /* movss */
    eax = 0x64;
    MEM32(esp + 0x34) = esi;
    MEMF(esp + 0x68) = xmm0; /* movss */
    xmm0 = MEMF(0x64920C); /* movss */
    PUSH32(esp, ebp);
    esi = esp + 0x28;
    MEM16(esp + 0x28) = 0;
    MEM16(esp + 0x2A) = 0xFF;
    MEM16(esp + 0x2C) = 0xFFC0;
    MEM16(esp + 0x2E) = 0x4D;
    MEM32(esp + 0x30) = 0xA;
    MEM32(esp + 0x34) = 5;
    MEM32(esp + 0x3C) = ecx;
    MEM32(esp + 0x40) = edi;
    MEM32(esp + 0x5C) = 4;
    MEM32(esp + 0x60) = 7;
    MEMF(esp + 0x70) = xmm0; /* movss */
    MEM16(esp + 0x74) = 0x19;
    MEM16(esp + 0x76) = 0xF;
    MEM16(esp + 0x78) = LO16(eax);
    MEM16(esp + 0x7A) = LO16(eax);
    MEM16(esp + 0x7C) = 0xC;
    MEM16(esp + 0x7E) = 0x14;
    MEM8(esp + 0x80) = 0;
    PUSH32(esp, 0); sub_000F2EA0(); /* call 0x000F2EA0 */

loc_001881D3: ;
    MEM8(esp + 0x18) = 1;
    PUSH32(esp, 0); sub_003E2480(); /* call 0x003E2480 */

loc_001881DD: ;
    edx = ((int32_t)eax < 0) ? 0xFFFFFFFF : 0; /* cdq */
    ecx = 0xB;
    { int64_t _dividend = ((int64_t)(int32_t)edx << 32) | eax;
      eax = (uint32_t)((int32_t)(_dividend / (int32_t)ecx));
      edx = (uint32_t)((int32_t)(_dividend % (int32_t)ecx)); }
    xmm0 = MEMF(0x648D14); /* movss */
    PUSH32(esp, 0xFF);
    PUSH32(esp, 0);
    MEMF(esp + 0x24) = xmm0; /* movss */
    MEMF(esp + 0x28) = xmm0; /* movss */
    MEM8(esp + 0x2D) = 0xFF;
    MEM8(esp + 0x2C) = 1;
    edx = edx + 0x1E;
    MEM16(esp + 0x22) = LO16(edx);
    edx = esp + 0x20;
    PUSH32(esp, edx);
    PUSH32(esp, 0); sub_0015A3F0(); /* call 0x0015A3F0 */

loc_0018821C: ;
    esp = esp + 0x18;
    POP32(esp, edi);
    POP32(esp, esi);

loc_00188221: ;
    POP32(esp, ebp);
    esp = esp + 0x6C;
    esp += 4; return; /* ret */

}

/**
 * sub_00188230
 * Original: 0x00188230 - 0x00188279 (73 bytes, 20 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00188230(void)
{
    uint32_t ebp;
    int _flags = 0; /* fallback flag var */
    float xmm0, xmm1;
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_00188230: ;
    esp = esp - 0x18;
    xmm1 = MEMF(0x648D34); /* movss */
    MEMF(esp + 0xC) = xmm0; /* movss */
    xmm0 = MEMF(esp + 0x20); /* movss */
    PUSH32(esp, ebx);
    ebx = MEM32(eax + 8);
    MEMF(esp + 0x14) = xmm0; /* movss */
    xmm0 = MEMF(0x648F58); /* movss */
    PUSH32(esp, esi);
    esi = MEM32(eax);
    MEMF(esp + 0x1C) = xmm0; /* movss */
    xmm0 = MEMF(esp + 0x24); /* movss */
    PUSH32(esp, edi);
    edi = MEM32(eax + 4);
    /* ucomiss xmm0, xmm1 - sets EFLAGS */
    /* lahf - load AH from flags (used in FPU compare idiom) */
    if (1 /* jp after test - parity */) { sub_00188279(); return; } /* jp: parity */

loc_00188275: ;
    ecx = 0; /* xor self */
    g_seh_ebp = ebp; sub_0018827E(); return; /* tail jmp 0x0018827E */

}

/**
 * sub_001882E0
 * Original: 0x001882E0 - 0x001885C7 (743 bytes, 168 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_001882E0(void)
{
    uint32_t ebp;
    int _flags = 0; /* fallback flag var */
    float xmm0, xmm1, xmm5;
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_001882E0: ;
    esp = esp - 0x8C;
    PUSH32(esp, ebp);
    ebp = MEM32(esp + 0x94);
    ebp = ebp + 0x4C;
    PUSH32(esp, 0); sub_003E1D70(); /* call 0x003E1D70 */

loc_001882F6: ;
    xmm0 = xmm0 * MEMF(0x649608); /* mulss */
    xmm0 = xmm0 + MEMF(0x648D80); /* addss */
    xmm0 = xmm0 * MEMF(0x7FA24C); /* mulss */
    xmm0 = xmm0 + MEMF(ebp + 0x14); /* addss */
    /* comiss xmm0, MEMF(0x648D14) - sets EFLAGS */
    MEMF(ebp + 0x14) = xmm0; /* movss */
    if ((xmm0 <= MEMF(0x648D14))) goto loc_001885BF; /* jbe: below or equal (unsigned <=) */

loc_00188325: ;
    xmm0 = 0.0f; /* xorps self = zero */
    xmm1 = MEMF(0x649E4C); /* movss */
    eax = 1;
    MEM32(esp + 0x3C) = eax;
    MEM16(esp + 0x46) = LO16(eax);
    SET_LO8(eax, LO8(eax) | 0xFF);
    MEM8(esp + 0x89) = LO8(eax);
    MEM8(esp + 0x8A) = LO8(eax);
    eax = ebp;
    ecx = MEM32(eax);
    edx = MEM32(eax + 4);
    eax = MEM32(eax + 8);
    PUSH32(esp, ebx);
    PUSH32(esp, esi);
    MEMF(esp + 0x54) = xmm1; /* movss */
    xmm1 = MEMF(0x648CE0); /* movss */
    PUSH32(esp, edi);
    MEM8(esp + 0x10) = 0;
    MEM8(esp + 0x11) = 0;
    MEM32(esp + 0x4C) = 0xD1;
    MEMF(esp + 0x24) = xmm0; /* movss */
    MEM16(esp + 0x50) = 0xC8;
    ebx = 0x80D017;
    MEM8(esp + 0x94) = 0x19;
    MEM8(esp + 0x97) = 0;
    MEM16(esp + 0x54) = 0x64;
    MEM8(esp + 0x2C) = 0x7B;
    MEM8(esp + 0x2D) = 0x93;
    MEM8(esp + 0x2E) = 0xAA;
    MEM32(esp + 0x64) = ecx;
    MEM32(esp + 0x68) = edx;
    MEM32(esp + 0x6C) = eax;
    MEMF(esp + 0x70) = xmm0; /* movss */
    MEMF(esp + 0x74) = xmm0; /* movss */
    MEMF(esp + 0x78) = xmm0; /* movss */
    MEMF(esp + 0x7C) = xmm0; /* movss */
    MEMF(esp + 0x80) = xmm1; /* movss */
    MEMF(esp + 0x84) = xmm0; /* movss */
    /* nop */

loc_001883F0: ;
    PUSH32(esp, 0); sub_003E2480(); /* call 0x003E2480 */

loc_001883F5: ;
    eax = eax & 0x80000003u;
    if (((int32_t)eax >= 0)) goto loc_00188401; /* jns: not sign (positive) */

loc_001883FC: ;
    eax--;
    eax = eax | 0xFFFFFFFCu;
    eax++;

loc_00188401: ;
    SET_LO8(eax, LO8(eax) + 2);
    MEM8(esp + 0x12) = LO8(eax);
    PUSH32(esp, 0); sub_003E2480(); /* call 0x003E2480 */

loc_0018840C: ;
    eax = eax & 0x80000003u;
    if (((int32_t)eax >= 0)) goto loc_00188418; /* jns: not sign (positive) */

loc_00188413: ;
    eax--;
    eax = eax | 0xFFFFFFFCu;
    eax++;

loc_00188418: ;
    SET_LO8(eax, LO8(eax) + 2);
    MEM8(esp + 0x13) = LO8(eax);
    PUSH32(esp, 0); sub_003E1D70(); /* call 0x003E1D70 */

loc_00188423: ;
    xmm5 = MEMF(0x648CDC); /* movss */
    xmm0 = xmm0 * xmm5; /* mulss */
    MEMF(esp + 0x14) = xmm0; /* movss */
    PUSH32(esp, 0); sub_003E1D70(); /* call 0x003E1D70 */

loc_0018843A: ;
    xmm0 = xmm0 * xmm5; /* mulss */
    MEMF(esp + 0x18) = xmm0; /* movss */
    PUSH32(esp, 0); sub_003E1D70(); /* call 0x003E1D70 */

loc_00188449: ;
    xmm1 = xmm0; /* movaps */
    xmm0 = MEMF(0x648D1C); /* movss */
    xmm1 = xmm1 * xmm0; /* mulss */
    xmm1 = xmm1 + xmm0; /* addss */
    xmm1 = xmm1 * MEMF(0x648D2C); /* mulss */
    MEMF(esp + 0x88) = xmm1; /* movss */
    PUSH32(esp, 0); sub_003E2480(); /* call 0x003E2480 */

loc_00188472: ;
    esi = eax;
    esi = esi & 1;
    esi = esi << 1;
    PUSH32(esp, 0); sub_003E2480(); /* call 0x003E2480 */

loc_0018847E: ;
    eax = eax & 1;
    esi = esi | eax;
    esi = esi << 6;
    ebx = ebx & 0xFFFFFF3Fu;
    ebx = ebx | esi;
    MEM32(esp + 0x8C) = ebx;
    PUSH32(esp, 0); sub_003E2480(); /* call 0x003E2480 */

loc_0018849A: ;
    edx = ((int32_t)eax < 0) ? 0xFFFFFFFF : 0; /* cdq */
    ecx = 0x51;
    { int64_t _dividend = ((int64_t)(int32_t)edx << 32) | eax;
      eax = (uint32_t)((int32_t)(_dividend / (int32_t)ecx));
      edx = (uint32_t)((int32_t)(_dividend % (int32_t)ecx)); }
    SET_LO8(edx, LO8(edx) - 0x74);
    MEM8(esp + 0x2F) = LO8(edx);
    PUSH32(esp, 0); sub_003E2480(); /* call 0x003E2480 */

loc_001884AE: ;
    edx = ((int32_t)eax < 0) ? 0xFFFFFFFF : 0; /* cdq */
    ecx = 0x51;
    { int64_t _dividend = ((int64_t)(int32_t)edx << 32) | eax;
      eax = (uint32_t)((int32_t)(_dividend / (int32_t)ecx));
      edx = (uint32_t)((int32_t)(_dividend % (int32_t)ecx)); }
    xmm0 = (float)(int32_t)MEM32(0x6A33A0); /* cvtsi2ss */
    xmm0 = xmm0 * MEMF(0x648E38); /* mulss */
    edx = edx + 0x96;
    MEM16(esp + 0x20) = LO16(edx);
    edx = SX16(LO16(edx));
    xmm1 = (float)(int32_t)edx; /* cvtsi2ss */
    xmm0 = xmm0 / xmm1; /* divss */
    MEMF(esp + 0x28) = xmm0; /* movss */
    PUSH32(esp, 0); sub_003E1D70(); /* call 0x003E1D70 */

loc_001884E7: ;
    xmm0 = xmm0 * MEMF(ebp + 0x10); /* mulss */
    xmm0 = xmm0 + MEMF(ebp + 0xC); /* addss */
    eax = 2;
    MEM32(esp + 0x30) = eax;
    MEM32(esp + 0x34) = eax;
    MEM32(esp + 0x40) = eax;
    eax = MEM32(esp + 0xA0);
    SET_LO8(ecx, MEM8(eax + 4));
    eax = MEM32(0x771CD0);
    esi = 0; /* xor self */
    (void)0; /* cmp eax, 0x2EE - flags set for next jcc */
    MEMF(esp + 0x60) = xmm0; /* movss */
    MEMF(esp + 0x5C) = xmm0; /* movss */
    MEM32(esp + 0x38) = esi;
    MEM32(esp + 0x3C) = 4;
    MEM32(esp + 0x44) = esi;
    MEM8(esp + 0x1C) = LO8(ecx);
    if (CMP_GE(eax, 0x2EE)) goto loc_0018859D; /* jge: greater or equal (signed >=) */

loc_0018853A: ;
    edx = MEM32(esp + 0x1C);
    PUSH32(esp, edx);
    PUSH32(esp, 0x6C);
    eax = 0x17C;
    PUSH32(esp, 0); sub_000D9C60(); /* call 0x000D9C60 */

loc_0018854B: ;
    esp = esp + 8;
    if (CMP_EQ(eax, esi)) goto loc_0018859D; /* je: equal / zero */

loc_00188552: ;
    edx = eax + 0x2C;
    edi = edx;
    ecx = 0x1F;
    esi = esp + 0x20;
    memcpy((void*)XBOX_PTR(edi), (void*)XBOX_PTR(esi), ecx * 4);
    esi += ecx * 4; edi += ecx * 4; ecx = 0; /* rep movsd */
    SET_LO16(ecx, MEM16(edx));
    edx = MEM32(esp + 0x10);
    MEM16(eax + 0x2E) = LO16(ecx);
    ecx = MEM32(0x771CD0);
    MEM8(eax + 0x154) = 0;
    MEM8(eax + 0x160) = 0;
    ecx++;
    eax = eax + 0x170;
    MEM32(eax) = edx;
    edx = MEM32(esp + 0x18);
    MEM32(0x771CD0) = ecx;
    ecx = MEM32(esp + 0x14);
    MEM32(eax + 4) = ecx;
    MEM32(eax + 8) = edx;

loc_0018859D: ;
    xmm0 = MEMF(ebp + 0x14); /* movss */
    xmm1 = MEMF(0x648D14); /* movss */
    xmm0 = xmm0 - xmm1; /* subss */
    /* comiss xmm0, xmm1 - sets EFLAGS */
    MEMF(ebp + 0x14) = xmm0; /* movss */
    if ((xmm0 > xmm1)) goto loc_001883F0; /* ja: above (unsigned >) */

loc_001885BC: ;
    POP32(esp, edi);
    POP32(esp, esi);
    POP32(esp, ebx);

loc_001885BF: ;
    POP32(esp, ebp);
    esp = esp + 0x8C;
    esp += 4; return; /* ret */

}

/**
 * sub_001885D0
 * Original: 0x001885D0 - 0x001885EE (30 bytes, 11 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_001885D0(void)
{

loc_001885D0: ;
    eax = MEM32(esp + 4);
    edx = eax + 0x170;
    PUSH32(esp, edi);
    ecx = edx + 2;
    PUSH32(esp, ecx);
    edi = edx + 4;
    PUSH32(esp, 0); sub_00106080(); /* call 0x00106080 */

loc_001885E7: ;
    esp = esp + 4;
    SET_LO8(eax, 1);
    POP32(esp, edi);
    esp += 4; return; /* ret */

}

/**
 * sub_001885F0
 * Original: 0x001885F0 - 0x00188656 (102 bytes, 30 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_001885F0(void)
{
    int _flags = 0; /* fallback flag var */
    float xmm0;

loc_001885F0: ;
    PUSH32(esp, ecx);
    xmm0 = MEMF(0x648CE4); /* movss */
    PUSH32(esp, 0xFF);
    PUSH32(esp, 0x2A);
    eax = 0x50;
    MEMF(esp + 8) = xmm0; /* movss */
    PUSH32(esp, 0); sub_000D9C60(); /* call 0x000D9C60 */

loc_00188610: ;
    edx = 0; /* xor self */
    esp = esp + 8;
    if (CMP_EQ(eax, edx)) goto loc_00188654; /* je: equal / zero */

loc_00188619: ;
    xmm0 = MEMF(0x64925C); /* movss */
    SET_LO8(ecx, LO8(ecx) | 0xFF);
    MEM8(eax + 0x38) = LO8(ecx);
    MEM8(eax + 0x3A) = LO8(ecx);
    MEM8(eax + 0x2C) = LO8(edx);
    MEM8(eax + 0x3B) = LO8(edx);
    MEMF(eax + 0x30) = xmm0; /* movss */
    MEMF(eax + 0x34) = xmm0; /* movss */
    MEM8(eax + 0x39) = 0x35;
    ecx = 0; /* xor self */
    edx = eax + 0x3C;
    MEM32(edx) = ecx;
    MEM32(edx + 4) = ecx;
    MEM32(edx + 8) = ecx;
    MEM32(edx + 0xC) = ecx;
    ecx = MEM32(esp);
    MEM32(eax + 0x4C) = ecx;

loc_00188654: ;
    POP32(esp, ecx);
    esp += 4; return; /* ret */

}

/**
 * sub_00188660
 * Original: 0x00188660 - 0x0018869F (63 bytes, 14 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00188660(void)
{
    uint32_t ebp;
    int _flags = 0; /* fallback flag var */
    float xmm0, xmm1;
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_00188660: ;
    xmm1 = 0.0f; /* xorps self = zero */
    PUSH32(esp, esi);
    esi = MEM32(esp + 8);
    xmm0 = MEMF(esi + 0x4C); /* movss */
    xmm0 = xmm0 - MEMF(0x7FA24C); /* subss */
    /* comiss xmm1, xmm0 - sets EFLAGS */
    MEMF(esi + 0x4C) = xmm0; /* movss */
    if ((xmm1 <= xmm0)) { sub_0018869F(); return; } /* jbe: below or equal (unsigned <=) */

loc_0018867F: ;
    PUSH32(esp, 0); sub_003E1D70(); /* call 0x003E1D70 */

loc_00188684: ;
    xmm0 = xmm0 * MEMF(0x64AA88); /* mulss */
    xmm0 = xmm0 + MEMF(0x64A7E8); /* addss */
    MEMF(esi + 0x4C) = xmm0; /* movss */
    POP32(esp, esi);
    g_seh_ebp = ebp; sub_001886B0(); return; /* tail jmp 0x001886B0 */

}

/**
 * sub_001886B0
 * Original: 0x001886B0 - 0x001887BA (266 bytes, 75 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_001886B0(void)
{
    float xmm0, xmm5, xmm6;

loc_001886B0: ;
    esp = esp - 0x10;
    PUSH32(esp, esi);
    PUSH32(esp, 0x1B);
    PUSH32(esp, 0);
    eax = esp + 0xC;
    PUSH32(esp, 2);
    PUSH32(esp, eax);
    MEM32(esp + 0x14) = 0x21;
    MEM32(esp + 0x18) = 0x60;
    PUSH32(esp, 0); sub_000DAA60(); /* call 0x000DAA60 */

loc_001886D4: ;
    SET_LO8(ecx, MEM8(0x7FA200));
    SET_LO8(eax, LO8(eax) | 0xFF);
    esi = 0; /* xor self */
    SET_LO8(edx, 0); /* xor self */
    PUSH32(esp, 0); sub_000C4C10(); /* call 0x000C4C10 */

loc_001886E5: ;
    MEM8(esp + 0x14) = 1;
    PUSH32(esp, 0); sub_003E2480(); /* call 0x003E2480 */

loc_001886EF: ;
    edx = ((int32_t)eax < 0) ? 0xFFFFFFFF : 0; /* cdq */
    ecx = 0x15;
    { int64_t _dividend = ((int64_t)(int32_t)edx << 32) | eax;
      eax = (uint32_t)((int32_t)(_dividend / (int32_t)ecx));
      edx = (uint32_t)((int32_t)(_dividend % (int32_t)ecx)); }
    MEM8(esp + 0x20) = 1;
    edx = edx + 0x14;
    MEM16(esp + 0x16) = LO16(edx);
    PUSH32(esp, 0); sub_003E1D70(); /* call 0x003E1D70 */

loc_00188709: ;
    xmm5 = MEMF(0x64A0D4); /* movss */
    xmm6 = MEMF(0x649B80); /* movss */
    xmm0 = xmm0 * xmm5; /* mulss */
    xmm0 = xmm0 + xmm6; /* addss */
    MEMF(esp + 0x18) = xmm0; /* movss */
    PUSH32(esp, 0); sub_003E1D70(); /* call 0x003E1D70 */

loc_0018872C: ;
    PUSH32(esp, 0xFF);
    edx = esp + 0x18;
    xmm0 = xmm0 * xmm5; /* mulss */
    PUSH32(esp, esi);
    xmm0 = xmm0 + xmm6; /* addss */
    PUSH32(esp, edx);
    MEMF(esp + 0x28) = xmm0; /* movss */
    MEM8(esp + 0x2D) = 0xFF;
    PUSH32(esp, 0); sub_0015A3F0(); /* call 0x0015A3F0 */

loc_0018874F: ;
    PUSH32(esp, 0xBF800000u);
    PUSH32(esp, 0xBF800000u);
    esi = 0x5F498C;
    PUSH32(esp, 0); sub_001DD550(); /* call 0x001DD550 */

loc_00188763: ;
    eax = MEM32(0x847024);
    ecx = MEM32(eax + 0x40);
    esp = esp + 0x24;
    PUSH32(esp, 0);
    PUSH32(esp, 0);
    PUSH32(esp, 0xFFFFFFFFu);
    PUSH32(esp, 0xFFFFFFFFu);
    PUSH32(esp, 0);
    PUSH32(esp, 0);
    PUSH32(esp, 4);
    PUSH32(esp, ecx);
    edx = edx | 0xFFFFFFFFu;
    eax = eax | 0xFFFFFFFFu;
    ecx = 0xBF2;
    PUSH32(esp, 0); sub_00022D90(); /* call 0x00022D90 */

loc_0018878D: ;
    edx = MEM32(0x847024);
    eax = MEM32(edx + 0x40);
    PUSH32(esp, 0);
    PUSH32(esp, 0);
    PUSH32(esp, 0xFFFFFFFFu);
    PUSH32(esp, 0xFFFFFFFFu);
    PUSH32(esp, 0);
    PUSH32(esp, 0);
    PUSH32(esp, 4);
    PUSH32(esp, eax);
    edx = edx | 0xFFFFFFFFu;
    eax = eax | 0xFFFFFFFFu;
    ecx = 0xBF1;
    PUSH32(esp, 0); sub_00022D90(); /* call 0x00022D90 */

loc_001887B5: ;
    POP32(esp, esi);
    esp = esp + 0x10;
    esp += 4; return; /* ret */

}

/**
 * sub_001887C0
 * Original: 0x001887C0 - 0x0018898F (463 bytes, 111 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_001887C0(void)
{
    uint32_t ebp;
    int _flags = 0; /* fallback flag var */
    float xmm0, xmm1, xmm2, xmm3;
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_001887C0: ;
    esp = esp - 0x20;
    eax = MEM32(0x7FA200);
    ecx = MEM32(0x8470DC);
    eax = (uint32_t)((int32_t)eax * (int32_t)0x770);
    PUSH32(esp, ebp);
    ebp = MEM32(esp + 0x28);
    edx = eax + ecx + 0x330;
    MEM32(esp + 0x28) = edx;
    PUSH32(esp, 0); sub_003E1D70(); /* call 0x003E1D70 */

loc_001887E9: ;
    xmm0 = xmm0 * MEMF(ebp + 0x50); /* mulss */
    xmm0 = xmm0 + MEMF(ebp + 0x4C); /* addss */
    xmm0 = xmm0 * MEMF(0x775328); /* mulss */
    xmm0 = xmm0 * MEMF(0x7FA24C); /* mulss */
    xmm0 = xmm0 + MEMF(ebp + 0x54); /* addss */
    /* comiss xmm0, MEMF(0x648E64) - sets EFLAGS */
    MEMF(ebp + 0x54) = xmm0; /* movss */
    if ((xmm0 <= MEMF(0x648E64))) goto loc_0018898A; /* jbe: below or equal (unsigned <=) */

loc_0018881A: ;
    PUSH32(esp, ebx);
    PUSH32(esp, esi);
    PUSH32(esp, edi);
    SET_LO8(ebx, LO8(ebx) | 0xFF);

loc_00188820: ;
    PUSH32(esp, 0); sub_003E1D70(); /* call 0x003E1D70 */

loc_00188825: ;
    eax = MEM32(0x77532C);
    xmm0 = xmm0 * MEMF(0x775328); /* mulss */
    /* comiss xmm0, MEMF(eax + 8) - sets EFLAGS */
    if ((xmm0 <= MEMF(eax + 8))) goto loc_0018884E; /* jbe: below or equal (unsigned <=) */

loc_00188838: ;
    goto loc_00188840;

    /* nop */

loc_00188840: ;
    xmm0 = xmm0 - MEMF(eax + 8); /* subss */
    eax = MEM32(eax + 0xC);
    /* comiss xmm0, MEMF(eax + 8) - sets EFLAGS */
    if ((xmm0 > MEMF(eax + 8))) goto loc_00188840; /* ja: above (unsigned >) */

loc_0018884E: ;
    esi = MEM32(eax);
    edi = esp + 0x18;
    PUSH32(esp, 0); sub_00110B70(); /* call 0x00110B70 */

loc_00188859: ;
    eax = MEM32(esp + 0x34);
    xmm2 = MEMF(esp + 0x20); /* movss */
    xmm2 = xmm2 - MEMF(eax + 8); /* subss */
    xmm1 = MEMF(esp + 0x1C); /* movss */
    xmm1 = xmm1 - MEMF(eax + 4); /* subss */
    xmm0 = MEMF(esp + 0x18); /* movss */
    xmm0 = xmm0 - MEMF(eax); /* subss */
    xmm3 = xmm2; /* movaps */
    xmm3 = xmm3 * xmm2; /* mulss */
    xmm2 = xmm1; /* movaps */
    xmm2 = xmm2 * xmm1; /* mulss */
    xmm1 = xmm0; /* movaps */
    xmm1 = xmm1 * xmm0; /* mulss */
    xmm0 = MEMF(0x649EC0); /* movss */
    xmm3 = xmm3 + xmm2; /* addss */
    xmm3 = xmm3 + xmm1; /* addss */
    /* comiss xmm0, xmm3 - sets EFLAGS */
    if ((xmm0 <= xmm3)) goto loc_00188968; /* jbe: below or equal (unsigned <=) */

loc_001888AB: ;
    xmm0 = MEMF(0x649EBC); /* movss */
    SET_LO8(eax, MEM8(ebp + 4));
    MEMF(esp + 0x24) = xmm0; /* movss */
    xmm0 = MEMF(0x649EB8); /* movss */
    MEMF(esp + 0x28) = xmm0; /* movss */
    xmm0 = 0.0f; /* xorps self = zero */
    MEMF(esp + 0x2C) = xmm0; /* movss */
    MEM8(esp + 0x10) = LO8(eax);
    PUSH32(esp, 0); sub_003E1D70(); /* call 0x003E1D70 */

loc_001888DC: ;
    ecx = MEM32(esp + 0x10);
    xmm0 = xmm0 * MEMF(0x648D10); /* mulss */
    xmm0 = xmm0 + MEMF(0x648E64); /* addss */
    PUSH32(esp, ecx);
    PUSH32(esp, 0x2A);
    eax = 0x64;
    MEMF(esp + 0x1C) = xmm0; /* movss */
    PUSH32(esp, 0); sub_000D9C60(); /* call 0x000D9C60 */

loc_00188903: ;
    esp = esp + 8;
    if (TEST_Z(eax, eax)) goto loc_00188968; /* je: equal / zero */

loc_0018890A: ;
    xmm0 = MEMF(esp + 0x14); /* movss */
    MEMF(eax + 0x30) = xmm0; /* movss */
    MEMF(eax + 0x34) = xmm0; /* movss */
    MEM8(eax + 0x38) = LO8(ebx);
    MEM8(eax + 0x39) = 0x34;
    MEM8(eax + 0x3A) = LO8(ebx);
    MEM8(eax + 0x2C) = 1;
    MEM8(eax + 0x3B) = 0;
    ecx = eax + 0x3C;
    edx = 0; /* xor self */
    MEM32(ecx) = edx;
    MEM32(ecx + 4) = edx;
    MEM32(ecx + 8) = edx;
    MEM32(ecx + 0xC) = edx;
    edx = MEM32(esp + 0x18);
    ecx = MEM32(esp + 0x1C);
    eax = eax + 0x4C;
    MEM32(eax) = edx;
    edx = MEM32(esp + 0x20);
    MEM32(eax + 4) = ecx;
    ecx = MEM32(esp + 0x24);
    MEM32(eax + 8) = edx;
    edx = MEM32(esp + 0x28);
    MEM32(eax + 0xC) = ecx;
    ecx = MEM32(esp + 0x2C);
    MEM32(eax + 0x10) = edx;
    MEM32(eax + 0x14) = ecx;

loc_00188968: ;
    xmm0 = MEMF(ebp + 0x54); /* movss */
    xmm0 = xmm0 - MEMF(0x648D14); /* subss */
    /* comiss xmm0, MEMF(0x648E64) - sets EFLAGS */
    MEMF(ebp + 0x54) = xmm0; /* movss */
    if ((xmm0 > MEMF(0x648E64))) goto loc_00188820; /* ja: above (unsigned >) */

loc_00188987: ;
    POP32(esp, edi);
    POP32(esp, esi);
    POP32(esp, ebx);

loc_0018898A: ;
    POP32(esp, ebp);
    esp = esp + 0x20;
    esp += 4; return; /* ret */

}

/**
 * sub_00188990
 * Original: 0x00188990 - 0x00188C62 (722 bytes, 158 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00188990(void)
{
    uint32_t ebp;
    int _flags = 0; /* fallback flag var */
    float xmm0, xmm1, xmm5;
    double _fp_stack[8];
    int _fp_top = 0;
    #define fp_push(v) (_fp_stack[--_fp_top & 7] = (v))
    #define fp_pop() (_fp_top++)
    #define fp_popp() (fp_pop())
    #define fp_top() _fp_stack[_fp_top & 7]
    #define fp_st1() _fp_stack[(_fp_top + 1) & 7]
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_00188990: ;
    esp = esp - 0x90;
    PUSH32(esp, ebp);
    ebp = MEM32(esp + 0x98);
    PUSH32(esp, 0); sub_003E1D70(); /* call 0x003E1D70 */

loc_001889A3: ;
    xmm0 = xmm0 * MEMF(ebp + 0x5C); /* mulss */
    xmm0 = xmm0 + MEMF(ebp + 0x58); /* addss */
    xmm0 = xmm0 * MEMF(0x7FA24C); /* mulss */
    xmm0 = xmm0 * MEMF(0x648CE0); /* mulss */
    xmm0 = xmm0 + MEMF(ebp + 0x60); /* addss */
    /* comiss xmm0, MEMF(0x648D14) - sets EFLAGS */
    MEMF(ebp + 0x60) = xmm0; /* movss */
    if ((xmm0 <= MEMF(0x648D14))) goto loc_00188C5A; /* jbe: below or equal (unsigned <=) */

loc_001889D4: ;
    xmm0 = 0.0f; /* xorps self = zero */
    PUSH32(esp, ebx);
    PUSH32(esp, esi);
    MEMF(esp + 0x24) = xmm0; /* movss */
    MEMF(esp + 0x28) = xmm0; /* movss */
    MEMF(esp + 0x70) = xmm0; /* movss */
    MEMF(esp + 0x74) = xmm0; /* movss */
    MEMF(esp + 0x78) = xmm0; /* movss */
    MEMF(esp + 0x88) = xmm0; /* movss */
    MEMF(esp + 0x7C) = xmm0; /* movss */
    MEMF(esp + 0x84) = xmm0; /* movss */
    xmm0 = MEMF(0x64A300); /* movss */
    PUSH32(esp, edi);
    MEM32(esp + 0x4C) = 0x303;
    MEM32(esp + 0x50) = 0x16;
    ebx = 0x801E05;
    MEM8(esp + 0x98) = 0x1A;
    MEM8(esp + 0x99) = 0xFF;
    MEM16(esp + 0x54) = 0x1E;
    MEM16(esp + 0x56) = 8;
    MEMF(esp + 0x20) = xmm0; /* movss */

loc_00188A51: ;
    PUSH32(esp, 0); sub_003E2480(); /* call 0x003E2480 */

loc_00188A56: ;
    eax = eax & 0x8000000Fu;
    if (((int32_t)eax >= 0)) goto loc_00188A62; /* jns: not sign (positive) */

loc_00188A5D: ;
    eax--;
    eax = eax | 0xFFFFFFF0u;
    eax++;

loc_00188A62: ;
    eax = eax + 0x28;
    MEM16(esp + 0x24) = LO16(eax);
    MEM16(esp + 0x58) = LO16(eax);
    PUSH32(esp, 0); sub_003E2480(); /* call 0x003E2480 */

loc_00188A74: ;
    edx = ((int32_t)eax < 0) ? 0xFFFFFFFF : 0; /* cdq */
    ecx = 0x77;
    { int64_t _dividend = ((int64_t)(int32_t)edx << 32) | eax;
      eax = (uint32_t)((int32_t)(_dividend / (int32_t)ecx));
      edx = (uint32_t)((int32_t)(_dividend % (int32_t)ecx)); }
    SET_LO8(edx, LO8(edx) + 0x64);
    MEM8(esp + 0x33) = LO8(edx);
    PUSH32(esp, 0); sub_003E1D70(); /* call 0x003E1D70 */

loc_00188A88: ;
    xmm0 = xmm0 * MEMF(0x64A2FC); /* mulss */
    xmm0 = xmm0 + MEMF(0x6493A8); /* addss */
    MEMF(esp + 0x64) = xmm0; /* movss */
    MEMF(esp + 0x60) = xmm0; /* movss */
    PUSH32(esp, 0); sub_003E1D70(); /* call 0x003E1D70 */

loc_00188AA9: ;
    xmm0 = xmm0 * MEMF(0x64A2F8); /* mulss */
    xmm0 = xmm0 + MEMF(0x64A2F4); /* addss */
    xmm0 = xmm0 * MEMF(0x648D24); /* mulss */
    MEMF(esp + 0x5C) = xmm0; /* movss */
    PUSH32(esp, 0); sub_003E2480(); /* call 0x003E2480 */

loc_00188ACC: ;
    esi = eax;
    esi = esi & 1;
    esi = esi << 1;
    PUSH32(esp, 0); sub_003E2480(); /* call 0x003E2480 */

loc_00188AD8: ;
    eax = eax & 1;
    esi = esi | eax;
    esi = esi << 6;
    ebx = ebx & 0xFFFFFF3Fu;
    ebx = ebx | esi;
    MEM32(esp + 0x90) = ebx;
    MEM8(esp + 0x30) = 0x44;
    MEM8(esp + 0x31) = 0x3C;
    MEM8(esp + 0x32) = 0x27;
    PUSH32(esp, 0); sub_003E1D70(); /* call 0x003E1D70 */

loc_00188B03: ;
    xmm0 = xmm0 * MEMF(0x64908C); /* mulss */
    MEMF(esp + 0x10) = xmm0; /* movss */
    PUSH32(esp, 0); sub_003E1D70(); /* call 0x003E1D70 */

loc_00188B16: ;
    xmm5 = MEMF(0x648D30); /* movss */
    xmm0 = xmm0 * xmm5; /* mulss */
    MEMF(esp + 0x18) = xmm0; /* movss */
    PUSH32(esp, 0); sub_003E1D70(); /* call 0x003E1D70 */

loc_00188B2D: ;
    fp_push(MEMF(esp + 0x18)); /* fld float */
    /* FPU: fcos  */
    xmm0 = xmm0 * xmm5; /* mulss */
    MEMF(esp + 0x14) = xmm0; /* movss */
    fp_push(MEMF(esp + 0x14)); /* fld float */
    /* FPU: fsin  */
    fp_st1() *= fp_top(); fp_pop(); /* fmul */
    fp_st1() *= fp_top(); fp_pop(); /* fmul */
    fp_push(MEMF(esp + 0x18)); /* fld float */
    /* FPU: fsin  */
    fp_st1() *= fp_top(); fp_pop(); /* fmul */
    fp_top() = -fp_top(); /* fchs */
    MEMF(esp + 0x6C) = (float)fp_top(); fp_popp(); /* fstp */
    fp_push(MEMF(esp + 0x14)); /* fld float */
    /* FPU: fcos  */
    fp_st1() *= fp_top(); fp_pop(); /* fmul */
    fp_st1() *= fp_top(); fp_pop(); /* fmul */
    MEMF(esp + 0x70) = (float)fp_top(); fp_popp(); /* fstp */
    fp_st1() += fp_top(); fp_pop(); /* fadd */
    MEMF(esp + 0x68) = (float)fp_top(); fp_popp(); /* fstp */
    /* fstp st(0) */
    fp_push(MEMF(esp + 0x6C)); /* fld float */
    fp_st1() += fp_top(); fp_pop(); /* fadd */
    MEMF(esp + 0x6C) = (float)fp_top(); fp_popp(); /* fstp */
    fp_push(MEMF(esp + 0x70)); /* fld float */
    fp_st1() += fp_top(); fp_pop(); /* fadd */
    MEMF(esp + 0x70) = (float)fp_top(); fp_popp(); /* fstp */
    PUSH32(esp, 0); sub_003E1D70(); /* call 0x003E1D70 */

loc_00188B8D: ;
    xmm0 = xmm0 * MEMF(0x64A01C); /* mulss */
    xmm0 = xmm0 - MEMF(0x64A2F0); /* subss */
    xmm0 = xmm0 * MEMF(0x648E54); /* mulss */
    MEMF(esp + 0x84) = xmm0; /* movss */
    eax = 2;
    SET_LO8(edx, MEM8(ebp + 4));
    MEM32(esp + 0x34) = eax;
    MEM32(esp + 0x38) = eax;
    esi = 0; /* xor self */
    MEM32(esp + 0x44) = eax;
    (void)0; /* cmp MEM32(0x771CD0), 0x2EE - flags set for next jcc */
    MEM32(esp + 0x3C) = esi;
    MEM32(esp + 0x40) = 3;
    MEM32(esp + 0x48) = esi;
    MEM8(esp + 0x1C) = LO8(edx);
    if (CMP_GE(MEM32(0x771CD0), 0x2EE)) goto loc_00188C38; /* jge: greater or equal (signed >=) */

loc_00188BE4: ;
    eax = MEM32(esp + 0x1C);
    PUSH32(esp, eax);
    PUSH32(esp, 0x32);
    eax = 0x174;
    PUSH32(esp, 0); sub_000D9C60(); /* call 0x000D9C60 */

loc_00188BF5: ;
    esp = esp + 8;
    if (CMP_EQ(eax, esi)) goto loc_00188C38; /* je: equal / zero */

loc_00188BFC: ;
    edx = eax + 0x2C;
    edi = edx;
    ecx = 0x1F;
    esi = esp + 0x24;
    memcpy((void*)XBOX_PTR(edi), (void*)XBOX_PTR(esi), ecx * 4);
    esi += ecx * 4; edi += ecx * 4; ecx = 0; /* rep movsd */
    SET_LO16(ecx, MEM16(edx));
    edx = MEM32(esp + 0x20);
    MEM16(eax + 0x2E) = LO16(ecx);
    ecx = MEM32(0x771CD0);
    ecx++;
    MEM8(eax + 0x154) = 0;
    MEM8(eax + 0x160) = 0;
    MEM32(0x771CD0) = ecx;
    MEM32(eax + 0x170) = edx;

loc_00188C38: ;
    xmm0 = MEMF(ebp + 0x60); /* movss */
    xmm1 = MEMF(0x648D14); /* movss */
    xmm0 = xmm0 - xmm1; /* subss */
    /* comiss xmm0, xmm1 - sets EFLAGS */
    MEMF(ebp + 0x60) = xmm0; /* movss */
    if ((xmm0 > xmm1)) goto loc_00188A51; /* ja: above (unsigned >) */

loc_00188C57: ;
    POP32(esp, edi);
    POP32(esp, esi);
    POP32(esp, ebx);

loc_00188C5A: ;
    POP32(esp, ebp);
    esp = esp + 0x90;
    esp += 4; return; /* ret */

    #undef fp_push
    #undef fp_pop
    #undef fp_popp
    #undef fp_top
    #undef fp_st1
}

/**
 * sub_00188C70
 * Original: 0x00188C70 - 0x00188E51 (481 bytes, 111 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00188C70(void)
{
    uint32_t ebp;
    int _flags = 0; /* fallback flag var */
    float xmm0, xmm1, xmm2, xmm3;

loc_00188C70: ;
    PUSH32(esp, ebp);
    ebp = esp;
    esp = esp & 0xFFFFFFF0u;
    esp = esp - 0xE4;
    eax = MEM32(0x7FA200);
    ecx = MEM32(0x8470DC);
    eax = (uint32_t)((int32_t)eax * (int32_t)0x770);
    PUSH32(esp, ebx);
    PUSH32(esp, esi);
    edx = eax + ecx + 0x330;
    PUSH32(esp, edi);
    MEM32(esp + 0x1C) = edx;
    PUSH32(esp, 0); sub_003E1D70(); /* call 0x003E1D70 */

loc_00188CA0: ;
    eax = MEM32(ebp + 8);
    xmm0 = xmm0 * MEMF(eax + 0x50); /* mulss */
    xmm0 = xmm0 + MEMF(eax + 0x4C); /* addss */
    xmm0 = xmm0 * MEMF(0x775328); /* mulss */
    xmm0 = xmm0 * MEMF(0x7FA24C); /* mulss */
    xmm0 = xmm0 + MEMF(eax + 0x54); /* addss */
    /* comiss xmm0, MEMF(0x648E64) - sets EFLAGS */
    MEMF(eax + 0x54) = xmm0; /* movss */
    if ((xmm0 <= MEMF(0x648E64))) goto loc_00188E4A; /* jbe: below or equal (unsigned <=) */

loc_00188CD4: ;
    ebx = 0; /* xor self */

loc_00188CD6: ;
    PUSH32(esp, 0); sub_003E1D70(); /* call 0x003E1D70 */

loc_00188CDB: ;
    eax = MEM32(0x77532C);
    xmm0 = xmm0 * MEMF(0x775328); /* mulss */
    /* comiss xmm0, MEMF(eax + 8) - sets EFLAGS */
    if ((xmm0 <= MEMF(eax + 8))) goto loc_00188CFE; /* jbe: below or equal (unsigned <=) */

loc_00188CEE: ;
    edi = edi;

loc_00188CF0: ;
    xmm0 = xmm0 - MEMF(eax + 8); /* subss */
    eax = MEM32(eax + 0xC);
    /* comiss xmm0, MEMF(eax + 8) - sets EFLAGS */
    if ((xmm0 > MEMF(eax + 8))) goto loc_00188CF0; /* ja: above (unsigned >) */

loc_00188CFE: ;
    esi = MEM32(eax);
    edi = esp + 0x20;
    PUSH32(esp, 0); sub_00110B70(); /* call 0x00110B70 */

loc_00188D09: ;
    eax = MEM32(esp + 0x1C);
    xmm2 = MEMF(esp + 0x28); /* movss */
    xmm2 = xmm2 - MEMF(eax + 8); /* subss */
    xmm1 = MEMF(esp + 0x24); /* movss */
    xmm1 = xmm1 - MEMF(eax + 4); /* subss */
    xmm0 = MEMF(esp + 0x20); /* movss */
    xmm0 = xmm0 - MEMF(eax); /* subss */
    esi = MEM32(ebp + 8);
    xmm3 = xmm2; /* movaps */
    xmm3 = xmm3 * xmm2; /* mulss */
    xmm2 = xmm1; /* movaps */
    xmm2 = xmm2 * xmm1; /* mulss */
    xmm1 = xmm0; /* movaps */
    xmm1 = xmm1 * xmm0; /* mulss */
    xmm0 = MEMF(0x649EB4); /* movss */
    xmm3 = xmm3 + xmm2; /* addss */
    xmm3 = xmm3 + xmm1; /* addss */
    /* comiss xmm0, xmm3 - sets EFLAGS */
    if ((xmm0 <= xmm3)) goto loc_00188E2B; /* jbe: below or equal (unsigned <=) */

loc_00188D5E: ;
    xmm0 = MEMF(0x649EB0); /* movss */
    SET_LO8(eax, MEM8(esi + 4));
    MEMF(esp + 0x2C) = xmm0; /* movss */
    xmm0 = MEMF(0x649EAC); /* movss */
    MEMF(esp + 0x30) = xmm0; /* movss */
    xmm0 = 0.0f; /* xorps self = zero */
    MEMF(esp + 0x34) = xmm0; /* movss */
    xmm0 = MEMF(0x6494DC); /* movss */
    MEMF(esp + 0x40) = xmm0; /* movss */
    MEM32(esp + 0xE0) = ebx;
    MEM8(esp + 0xE4) = LO8(ebx);
    MEM8(esp + 0xE5) = LO8(ebx);
    MEM32(esp + 0xE8) = ebx;
    MEM8(esp + 0x14) = LO8(eax);
    PUSH32(esp, 0); sub_003E1D70(); /* call 0x003E1D70 */

loc_00188DB9: ;
    ecx = MEM32(esp + 0x14);
    xmm0 = xmm0 * MEMF(0x648EA8); /* mulss */
    xmm0 = xmm0 + MEMF(0x648E64); /* addss */
    PUSH32(esp, ecx);
    PUSH32(esp, 0x2A);
    eax = 0x11C;
    MEMF(esp + 0x20) = xmm0; /* movss */
    PUSH32(esp, 0); sub_000D9C60(); /* call 0x000D9C60 */

loc_00188DE0: ;
    esp = esp + 8;
    if (CMP_EQ(eax, ebx)) goto loc_00188E2B; /* je: equal / zero */

loc_00188DE7: ;
    xmm0 = MEMF(esp + 0x18); /* movss */
    MEMF(eax + 0x30) = xmm0; /* movss */
    MEMF(eax + 0x34) = xmm0; /* movss */
    MEM8(eax + 0x38) = 0xFF;
    MEM8(eax + 0x39) = 0x37;
    MEM8(eax + 0x3A) = 0xFF;
    MEM8(eax + 0x2C) = 1;
    MEM8(eax + 0x3B) = LO8(ebx);
    edx = 0; /* xor self */
    ecx = eax + 0x3C;
    MEM32(ecx) = edx;
    MEM32(ecx + 4) = edx;
    MEM32(ecx + 8) = edx;
    MEM32(ecx + 0xC) = edx;
    edi = eax + 0x4C;
    ecx = 0x34;
    esi = esp + 0x20;
    memcpy((void*)XBOX_PTR(edi), (void*)XBOX_PTR(esi), ecx * 4);
    esi += ecx * 4; edi += ecx * 4; ecx = 0; /* rep movsd */
    esi = MEM32(ebp + 8);

loc_00188E2B: ;
    xmm0 = MEMF(esi + 0x54); /* movss */
    xmm0 = xmm0 - MEMF(0x648D14); /* subss */
    /* comiss xmm0, MEMF(0x648E64) - sets EFLAGS */
    MEMF(esi + 0x54) = xmm0; /* movss */
    if ((xmm0 > MEMF(0x648E64))) goto loc_00188CD6; /* ja: above (unsigned >) */

loc_00188E4A: ;
    POP32(esp, edi);
    POP32(esp, esi);
    POP32(esp, ebx);
    esp = ebp;
    POP32(esp, ebp);
    esp += 4; return; /* ret */

}

/**
 * sub_00188E60
 * Original: 0x00188E60 - 0x00189166 (774 bytes, 157 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00188E60(void)
{
    uint32_t ebp;
    int _flags = 0; /* fallback flag var */
    float xmm0, xmm1, xmm5, xmm6, xmm7;
    double _fp_stack[8];
    int _fp_top = 0;
    #define fp_push(v) (_fp_stack[--_fp_top & 7] = (v))
    #define fp_pop() (_fp_top++)
    #define fp_popp() (fp_pop())
    #define fp_top() _fp_stack[_fp_top & 7]
    #define fp_st1() _fp_stack[(_fp_top + 1) & 7]

loc_00188E60: ;
    PUSH32(esp, ebp);
    ebp = esp;
    esp = esp & 0xFFFFFFF0u;
    esp = esp - 0x194;
    PUSH32(esp, ebx);
    ebx = MEM32(ebp + 8);
    PUSH32(esp, esi);
    PUSH32(esp, edi);
    PUSH32(esp, 0); sub_003E1D70(); /* call 0x003E1D70 */

loc_00188E77: ;
    xmm0 = xmm0 * MEMF(ebx + 0x5C); /* mulss */
    xmm0 = xmm0 + MEMF(ebx + 0x58); /* addss */
    xmm0 = xmm0 * MEMF(0x7FA24C); /* mulss */
    xmm0 = xmm0 + MEMF(ebx + 0x60); /* addss */
    /* comiss xmm0, MEMF(0x648D80) - sets EFLAGS */
    MEMF(ebx + 0x60) = xmm0; /* movss */
    if ((xmm0 <= MEMF(0x648D80))) goto loc_0018915F; /* jbe: below or equal (unsigned <=) */

loc_00188EA0: ;
    xmm0 = 0.0f; /* xorps self = zero */
    xmm1 = MEMF(0x648D14); /* movss */
    esi = 0; /* xor self */
    eax = 0xFF;
    MEMF(esp + 0x28) = xmm0; /* movss */
    MEMF(esp + 0x2C) = xmm1; /* movss */
    MEMF(esp + 0x50) = xmm1; /* movss */
    MEMF(esp + 0x54) = xmm1; /* movss */
    MEMF(esp + 0x58) = xmm1; /* movss */
    MEM32(esp + 0x90) = 0x9E8;
    MEMF(esp + 0x74) = xmm0; /* movss */
    MEMF(esp + 0x78) = xmm0; /* movss */
    MEMF(esp + 0x7C) = xmm0; /* movss */
    MEMF(esp + 0x84) = xmm0; /* movss */
    MEM8(esp + 0x9C) = 0;
    MEM32(esp + 0xA0) = esi;
    MEM8(esp + 0xA4) = LO8(eax);
    MEM32(esp + 0xAC) = esi;
    MEM32(esp + 0xB0) = esi;
    MEM32(esp + 0xB4) = esi;
    MEM32(esp + 0xB8) = esi;
    MEM32(esp + 0xBC) = esi;
    MEM32(esp + 0xC0) = 0x13E6E0;
    MEM32(esp + 0xC4) = 0x13EC40;
    MEM8(esp + 0xCC) = 2;
    MEM32(esp + 0xD0) = esi;
    MEM8(esp + 0xD4) = 0;
    MEM16(esp + 0xD6) = 1;
    MEM16(esp + 0xD8) = LO16(eax);
    edi = edi;

loc_00188F70: ;
    PUSH32(esp, 0); sub_003E2480(); /* call 0x003E2480 */

loc_00188F75: ;
    MEM32(esp + 0x98) = 7;
    PUSH32(esp, 0); sub_003E1D70(); /* call 0x003E1D70 */

loc_00188F85: ;
    xmm0 = xmm0 * MEMF(0x64AC10); /* mulss */
    xmm0 = xmm0 + MEMF(0x648EC0); /* addss */
    xmm0 = xmm0 * MEMF(0x64AF5C); /* mulss */
    MEMF(esp + 0x34) = xmm0; /* movss */
    MEMF(esp + 0x30) = xmm0; /* movss */
    PUSH32(esp, 0); sub_003E1D70(); /* call 0x003E1D70 */

loc_00188FAE: ;
    xmm5 = MEMF(0x648F60); /* movss */
    xmm0 = xmm0 * xmm5; /* mulss */
    MEMF(esp + 0x38) = xmm0; /* movss */
    PUSH32(esp, 0); sub_003E1D70(); /* call 0x003E1D70 */

loc_00188FC5: ;
    xmm0 = xmm0 * xmm5; /* mulss */
    MEMF(esp + 0x3C) = xmm0; /* movss */
    PUSH32(esp, 0); sub_003E1D70(); /* call 0x003E1D70 */

loc_00188FD4: ;
    xmm0 = xmm0 * xmm5; /* mulss */
    MEMF(esp + 0x40) = xmm0; /* movss */
    PUSH32(esp, 0); sub_003E1D70(); /* call 0x003E1D70 */

loc_00188FE3: ;
    xmm0 = xmm0 * MEMF(0x64AF58); /* mulss */
    xmm0 = xmm0 - MEMF(0x64AF54); /* subss */
    xmm5 = MEMF(0x648D2C); /* movss */
    xmm0 = xmm0 * xmm5; /* mulss */
    MEMF(esp + 0x8C) = xmm0; /* movss */
    PUSH32(esp, 0); sub_003E2480(); /* call 0x003E2480 */

loc_0018900D: ;
    MEM32(esp + 0x94) = 0x64;
    PUSH32(esp, 0); sub_003E1D70(); /* call 0x003E1D70 */

loc_0018901D: ;
    xmm6 = MEMF(0x64AF50); /* movss */
    xmm7 = MEMF(0x64AF4C); /* movss */
    xmm0 = xmm0 * xmm6; /* mulss */
    xmm0 = xmm0 - xmm7; /* subss */
    xmm0 = xmm0 * xmm5; /* mulss */
    MEMF(esp + 0x80) = xmm0; /* movss */
    PUSH32(esp, 0); sub_003E1D70(); /* call 0x003E1D70 */

loc_00189047: ;
    xmm0 = xmm0 * xmm6; /* mulss */
    xmm0 = xmm0 - xmm7; /* subss */
    xmm0 = xmm0 * xmm5; /* mulss */
    MEMF(esp + 0x88) = xmm0; /* movss */
    PUSH32(esp, 0); sub_003E1D70(); /* call 0x003E1D70 */

loc_00189061: ;
    xmm0 = xmm0 * MEMF(0x648F08); /* mulss */
    MEMF(esp + 0x18) = xmm0; /* movss */
    PUSH32(esp, 0); sub_003E1D70(); /* call 0x003E1D70 */

loc_00189074: ;
    xmm5 = MEMF(0x648D30); /* movss */
    xmm0 = xmm0 * xmm5; /* mulss */
    MEMF(esp + 0x20) = xmm0; /* movss */
    PUSH32(esp, 0); sub_003E1D70(); /* call 0x003E1D70 */

loc_0018908B: ;
    fp_push(MEMF(esp + 0x20)); /* fld float */
    /* FPU: fcos  */
    xmm0 = xmm0 * xmm5; /* mulss */
    MEMF(esp + 0x1C) = xmm0; /* movss */
    MEM32(esp + 0xA8) = 0x157100;
    fp_push(MEMF(esp + 0x1C)); /* fld float */
    /* FPU: fsin  */
    fp_st1() *= fp_top(); fp_pop(); /* fmul */
    fp_st1() *= fp_top(); fp_pop(); /* fmul */
    fp_push(MEMF(esp + 0x20)); /* fld float */
    /* FPU: fsin  */
    fp_st1() *= fp_top(); fp_pop(); /* fmul */
    fp_top() = -fp_top(); /* fchs */
    MEMF(esp + 0x60) = (float)fp_top(); fp_popp(); /* fstp */
    fp_push(MEMF(esp + 0x1C)); /* fld float */
    /* FPU: fcos  */
    fp_st1() *= fp_top(); fp_pop(); /* fmul */
    fp_st1() *= fp_top(); fp_pop(); /* fmul */
    MEMF(esp + 0x64) = (float)fp_top(); fp_popp(); /* fstp */
    fp_st1() += fp_top(); fp_pop(); /* fadd */
    MEMF(esp + 0x5C) = (float)fp_top(); fp_popp(); /* fstp */
    /* fstp st(0) */
    fp_push(MEMF(esp + 0x60)); /* fld float */
    fp_st1() += fp_top(); fp_pop(); /* fadd */
    MEMF(esp + 0x60) = (float)fp_top(); fp_popp(); /* fstp */
    fp_push(MEMF(esp + 0x64)); /* fld float */
    fp_st1() += fp_top(); fp_pop(); /* fadd */
    MEMF(esp + 0x64) = (float)fp_top(); fp_popp(); /* fstp */
    eax = 0; /* xor self */
    ecx = 0x28;
    edi = esp + 0x100;
    { uint32_t _i; for (_i = 0; _i < ecx; _i++) MEM32(edi + _i*4) = eax; }
    edi += ecx * 4; ecx = 0; /* rep stosd */
    SET_LO8(eax, MEM8(ebx + 4));
    PUSH32(esp, esi);
    MEM8(esp + 0x28) = LO8(eax);
    ecx = MEM32(esp + 0x28);
    PUSH32(esp, ecx);
    PUSH32(esp, 0xA0);
    PUSH32(esp, esi);
    PUSH32(esp, 0x7F);
    PUSH32(esp, 3);
    edx = esp + 0x40;
    PUSH32(esp, esi);
    PUSH32(esp, edx);
    PUSH32(esp, 0); sub_0013D5D0(); /* call 0x0013D5D0 */

loc_00189123: ;
    esp = esp + 0x20;
    if (CMP_EQ(eax, esi)) goto loc_00189140; /* je: equal / zero */

loc_0018912A: ;
    edi = eax + 0x290;
    ecx = 0x28;
    esi = esp + 0x100;
    memcpy((void*)XBOX_PTR(edi), (void*)XBOX_PTR(esi), ecx * 4);
    esi += ecx * 4; edi += ecx * 4; ecx = 0; /* rep movsd */
    esi = 0; /* xor self */

loc_00189140: ;
    xmm0 = MEMF(ebx + 0x60); /* movss */
    xmm1 = MEMF(0x648D80); /* movss */
    xmm0 = xmm0 - xmm1; /* subss */
    /* comiss xmm0, xmm1 - sets EFLAGS */
    MEMF(ebx + 0x60) = xmm0; /* movss */
    if ((xmm0 > xmm1)) goto loc_00188F70; /* ja: above (unsigned >) */

loc_0018915F: ;
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
 * sub_00189170
 * Original: 0x00189170 - 0x001893DC (620 bytes, 157 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00189170(void)
{
    uint32_t ebp;
    int _flags = 0; /* fallback flag var */
    float xmm0, xmm1, xmm2, xmm3, xmm4, xmm5;

loc_00189170: ;
    PUSH32(esp, ebp);
    ebp = esp;
    esp = esp & 0xFFFFFFF0u;
    esp = esp - 0x1D4;
    PUSH32(esp, ebx);
    PUSH32(esp, esi);
    ebx = eax;
    PUSH32(esp, edi);
    eax = esp + 0x18;
    esi = ecx;
    PUSH32(esp, 0); sub_000AF180(); /* call 0x000AF180 */

loc_0018918C: ;
    xmm1 = MEMF(ebp + 0xC); /* movss */
    xmm0 = 0.0f; /* xorps self = zero */
    eax = 2;
    MEM32(esp + 0x78) = eax;
    MEM32(esp + 0x80) = eax;
    MEM32(esp + 0x94) = eax;
    SET_LO16(eax, MEM16(ebp + 0x20));
    ecx = 0; /* xor self */
    MEM16(esp + 0x1A) = LO16(eax);
    SET_LO8(eax, 0xFF);
    MEM8(esp + 0x5C) = LO8(eax);
    MEM8(esp + 0x5D) = LO8(eax);
    MEM8(esp + 0x5E) = LO8(eax);
    MEM32(esp + 0x84) = ecx;
    MEM32(esp + 0x90) = ecx;
    MEM32(esp + 0x98) = ecx;
    SET_LO8(ecx, MEM8(ebp + 0x1C));
    edx = esi;
    eax = MEM32(edx);
    MEM32(esp + 0x24) = eax;
    MEM8(esp + 0x5F) = LO8(ecx);
    ecx = MEM32(edx + 4);
    edx = MEM32(edx + 8);
    MEM32(esp + 0x28) = ecx;
    eax = ebx;
    ecx = MEM32(eax);
    MEM32(esp + 0x2C) = edx;
    edx = MEM32(eax + 4);
    eax = MEM32(eax + 8);
    MEMF(esp + 0x1C) = xmm1; /* movss */
    xmm1 = MEMF(ebp + 0x10); /* movss */
    MEM32(esp + 0x38) = eax;
    SET_LO8(eax, MEM8(ebp + 0x18));
    (void)0; /* test LO8(eax), LO8(eax) - flags set for next jcc */
    MEM32(esp + 0x30) = ecx;
    SET_LO8(ecx, MEM8(ebp + 0x24));
    MEMF(esp + 0x20) = xmm1; /* movss */
    xmm1 = MEMF(ebp + 8); /* movss */
    MEMF(esp + 0x64) = xmm0; /* movss */
    MEM32(esp + 0x60) = 0x303;
    MEM8(esp + 0x68) = 1;
    MEM32(esp + 0x6C) = 0x41;
    MEM32(esp + 0x88) = 4;
    MEMF(esp + 0x70) = xmm0; /* movss */
    MEMF(esp + 0x74) = xmm0; /* movss */
    MEM32(esp + 0x34) = edx;
    MEMF(esp + 0x3C) = xmm0; /* movss */
    MEMF(esp + 0x40) = xmm1; /* movss */
    MEMF(esp + 0x44) = xmm0; /* movss */
    MEM32(esp + 0x48) = 1;
    MEM8(esp + 0x130) = 0;
    MEM8(esp + 0x1D4) = LO8(ecx);
    if (TEST_Z(LO8(eax), LO8(eax))) goto loc_00189379; /* je: equal / zero */

loc_0018928B: ;
    eax = ebx;
    PUSH32(esp, 0); sub_00428323(); /* call 0x00428323 */

loc_00189292: ;
    PUSH32(esp, 0);
    PUSH32(esp, 0);
    PUSH32(esp, 1);
    PUSH32(esp, 0);
    PUSH32(esp, 0);
    edx = esp + 0x28;
    PUSH32(esp, edx);
    PUSH32(esp, 0);
    eax = esp + 0x158;
    PUSH32(esp, eax);
    ecx = esp + 0x158;
    PUSH32(esp, ecx);
    edx = esp + 0x158;
    PUSH32(esp, edx);
    eax = esp + 0x168;
    PUSH32(esp, eax);
    PUSH32(esp, esi);
    ecx = ebx;
    PUSH32(esp, 0); sub_002A0580(); /* call 0x002A0580 */

loc_001892CB: ;
    esp = esp + 0x30;
    if (TEST_Z(eax, eax)) goto loc_00189379; /* je: equal / zero */

loc_001892D6: ;
    eax = MEM32(esp + 0x14);
    if (TEST_S(eax, eax)) goto loc_001892FE; /* jl: less (signed <) */

loc_001892DE: ;
    ecx = MEM32(0x8471B8);
    eax = (uint32_t)((int32_t)eax * (int32_t)0x150);
    SET_LO8(edx, MEM8(eax + ecx + 0xC3));
    SET_LO8(edx, LO8(edx) & 0x80);
    (void)0; /* cmp LO8(edx), 0x80 - flags set for next jcc */
    SET_LO8(eax, (CMP_EQ(LO8(edx), 0x80)) ? 1 : 0); /* sete */
    if (TEST_Z(LO8(eax), LO8(eax))) goto loc_00189379; /* je: equal / zero */

loc_001892FE: ;
    xmm4 = MEMF(esp + 0x138); /* movss */
    xmm5 = MEMF(esp + 0x13C); /* movss */
    xmm3 = MEMF(esp + 0x134); /* movss */
    SET_LO8(eax, MEM8(esp + 0x130));
    xmm2 = xmm4; /* movaps */
    xmm2 = xmm2 - MEMF(esp + 0x28); /* subss */
    xmm0 = xmm5; /* movaps */
    xmm0 = xmm0 - MEMF(esp + 0x2C); /* subss */
    xmm0 = xmm0 * xmm5; /* mulss */
    xmm1 = xmm3; /* movaps */
    xmm1 = xmm1 - MEMF(esp + 0x24); /* subss */
    xmm2 = xmm2 * xmm4; /* mulss */
    xmm0 = xmm0 + xmm2; /* addss */
    xmm1 = xmm1 * xmm3; /* mulss */
    xmm0 = xmm0 + xmm1; /* addss */
    xmm1 = 0.0f; /* xorps self = zero */
    SET_LO8(eax, LO8(eax) | 1);
    /* comiss xmm1, xmm0 - sets EFLAGS */
    xmm0 = MEMF(0x648D34); /* movss */
    MEM8(esp + 0x130) = LO8(eax);
    if ((xmm1 > xmm0)) goto loc_00189370; /* ja: above (unsigned >) */

loc_00189368: ;
    xmm0 = MEMF(0x648D14); /* movss */

loc_00189370: ;
    MEMF(esp + 0x1D0) = xmm0; /* movss */

loc_00189379: ;
    PUSH32(esp, 0); sub_003E2480(); /* call 0x003E2480 */

loc_0018937E: ;
    ebx = eax;
    SET_LO8(ebx, LO8(ebx) & 1);
    SET_LO8(ebx, LO8(ebx) << 1);
    PUSH32(esp, 0); sub_003E2480(); /* call 0x003E2480 */

loc_0018938A: ;
    SET_LO8(eax, LO8(eax) & 1);
    SET_LO8(ebx, LO8(ebx) | LO8(eax));
    eax = MEM32(ebp + 0x14);
    PUSH32(esp, eax);
    PUSH32(esp, 0xB0);
    PUSH32(esp, 0);
    PUSH32(esp, 0);
    MEM8(esp + 0x24) = LO8(ebx);
    ecx = MEM32(esp + 0x24);
    PUSH32(esp, ecx);
    PUSH32(esp, 0xF);
    PUSH32(esp, 0);
    PUSH32(esp, 0x15);
    PUSH32(esp, 0xF);
    PUSH32(esp, 0x597978);
    eax = esp + 0x40;
    PUSH32(esp, 0); sub_00150630(); /* call 0x00150630 */

loc_001893BA: ;
    esp = esp + 0x28;
    if (TEST_Z(eax, eax)) goto loc_001893D5; /* je: equal / zero */

loc_001893C1: ;
    edi = eax + 0x310;
    ecx = 0x2C;
    esi = esp + 0x130;
    memcpy((void*)XBOX_PTR(edi), (void*)XBOX_PTR(esi), ecx * 4);
    esi += ecx * 4; edi += ecx * 4; ecx = 0; /* rep movsd */

loc_001893D5: ;
    POP32(esp, edi);
    POP32(esp, esi);
    POP32(esp, ebx);
    esp = ebp;
    POP32(esp, ebp);
    esp += 4; return; /* ret */

}

/**
 * sub_001893E0
 * Original: 0x001893E0 - 0x001893FA (26 bytes, 10 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_001893E0(void)
{
    uint32_t ebp;
    int _flags = 0; /* fallback flag var */
    float xmm5, xmm6;

loc_001893E0: ;
    PUSH32(esp, ebp);
    ebp = esp;
    esp = esp & 0xFFFFFFF0u;
    esp = esp - 0x60;
    (void)0; /* test eax, eax - flags set for next jcc */
    xmm5 = 0.0f; /* xorps self = zero */
    if (TEST_NZ(eax, eax)) { sub_001893FA(); return; } /* jne: not equal / not zero */

loc_001893F0: ;
    xmm6 = xmm5; /* movaps */
    MEMF(ebp + 0x10) = xmm5; /* movss */
    g_seh_ebp = ebp; sub_001893FF(); return; /* tail jmp 0x001893FF */

}

/**
 * sub_00189580
 * Original: 0x00189580 - 0x00189836 (694 bytes, 199 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00189580(void)
{
    uint32_t ebp;
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
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_00189580: ;
    esp = esp - 0x40;
    PUSH32(esp, esi);
    esi = eax;
    eax = esi + 0x40;
    ecx = MEM32(eax);
    edx = MEM32(eax + 4);
    eax = MEM32(eax + 8);
    MEM32(esp + 0x3C) = edx;
    MEM32(esp + 0x38) = ecx;
    ecx = esi + 0x4C;
    MEM32(esp + 0x40) = eax;
    edx = ecx;
    eax = MEM32(edx);
    MEM32(esp + 0x14) = eax;
    eax = MEM32(edx + 4);
    edx = MEM32(edx + 8);
    MEM32(esp + 0x1C) = edx;
    fp_push(MEMF(esp + 0x1C)); /* fld float */
    fp_st1() *= fp_top(); fp_pop(); /* fmul */
    MEM32(esp + 0x18) = eax;
    fp_push(MEMF(esp + 0x18)); /* fld float */
    fp_st1() *= fp_top(); fp_pop(); /* fmul */
    fp_st1() += fp_top(); fp_pop(); /* faddp */
    fp_push(MEMF(esp + 0x14)); /* fld float */
    fp_st1() *= fp_top(); fp_pop(); /* fmul */
    fp_st1() += fp_top(); fp_pop(); /* faddp */
    fp_top() = sqrt(fp_top()); /* fsqrt */
    MEMF(esp + 4) = (float)fp_top(); fp_popp(); /* fstp */
    fp_push(MEMF(0x648CF8)); /* fld float */
    fp_push(MEMF(esp + 4)); /* fld float */
    _fpu_cmp = (fp_top() < fp_st1()) ? -1 : (fp_top() > fp_st1()) ? 1 : 0; fp_pop(); /* fucompi */
    /* fstp st(0) */
    /* lahf - load AH from flags (used in FPU compare idiom) */
    if (1 /* jnp after test - parity */) goto loc_00189624; /* jnp: not parity */

loc_001895EC: ;
    xmm0 = MEMF(0x648D14); /* movss */
    xmm0 = xmm0 / MEMF(esp + 4); /* divss */
    xmm1 = xmm0; /* movaps */
    xmm1 = xmm1 * MEMF(esp + 0x14); /* mulss */
    MEMF(esp + 0x14) = xmm1; /* movss */
    xmm1 = xmm0; /* movaps */
    xmm1 = xmm1 * MEMF(esp + 0x18); /* mulss */
    xmm0 = xmm0 * MEMF(esp + 0x1C); /* mulss */
    MEMF(esp + 0x18) = xmm1; /* movss */
    MEMF(esp + 0x1C) = xmm0; /* movss */

loc_00189624: ;
    xmm0 = MEMF(0x7FA24C); /* movss */
    xmm1 = MEMF(esi + 0x5C); /* movss */
    xmm1 = xmm1 * MEMF(ecx); /* mulss */
    xmm3 = MEMF(esi + 0x54); /* movss */
    xmm3 = xmm3 * MEMF(esi + 0x5C); /* mulss */
    xmm2 = MEMF(esi + 0x50); /* movss */
    xmm2 = xmm2 * MEMF(esi + 0x5C); /* mulss */
    xmm4 = xmm0; /* movaps */
    xmm4 = xmm4 * xmm1; /* mulss */
    xmm1 = xmm0; /* movaps */
    xmm0 = xmm0 * xmm3; /* mulss */
    MEMF(esp + 0x28) = xmm0; /* movss */
    fp_push(MEMF(esp + 0x28)); /* fld float */
    fp_st1() *= fp_top(); fp_pop(); /* fmul */
    xmm1 = xmm1 * xmm2; /* mulss */
    MEMF(esp + 0x24) = xmm1; /* movss */
    fp_push(MEMF(esp + 0x24)); /* fld float */
    fp_st1() *= fp_top(); fp_pop(); /* fmul */
    MEMF(esp + 0x20) = xmm4; /* movss */
    SET_LO8(eax, MEM8(esi + 0x1F4));
    (void)0; /* cmp LO8(eax), 1 - flags set for next jcc */
    fp_st1() += fp_top(); fp_pop(); /* faddp */
    fp_push(MEMF(esp + 0x20)); /* fld float */
    fp_st1() *= fp_top(); fp_pop(); /* fmul */
    fp_st1() += fp_top(); fp_pop(); /* faddp */
    fp_top() = sqrt(fp_top()); /* fsqrt */
    MEMF(esp + 0x10) = (float)fp_top(); fp_popp(); /* fstp */
    if (CMP_EQ(LO8(eax), 1)) goto loc_00189831; /* je: equal / zero */

loc_0018969D: ;
    (void)0; /* test LO8(eax), LO8(eax) - flags set for next jcc */
    PUSH32(esp, ebx);
    PUSH32(esp, ebp);
    PUSH32(esp, edi);
    ebp = esi + 0x160;
    if (TEST_NZ(LO8(eax), LO8(eax))) goto loc_001896FD; /* jne: not equal / not zero */

loc_001896AA: ;
    PUSH32(esp, 0);
    PUSH32(esp, 0);
    PUSH32(esp, 0);
    PUSH32(esp, 0);
    eax = esp + 0x20;
    PUSH32(esp, eax);
    ecx = esp + 0x2C;
    PUSH32(esp, ecx);
    edx = esp + 0x2C;
    PUSH32(esp, edx);
    eax = esp + 0x5C;
    PUSH32(esp, eax);
    ecx = esp + 0x5C;
    PUSH32(esp, ecx);
    edx = esp + 0x5C;
    PUSH32(esp, edx);
    eax = esp + 0x6C;
    PUSH32(esp, ebp);
    PUSH32(esp, eax);
    ecx = esp + 0x50;
    PUSH32(esp, 0); sub_002A0580(); /* call 0x002A0580 */

loc_001896DF: ;
    edi = MEM32(esp + 0x40);
    xmm2 = MEMF(esp + 0x44); /* movss */
    ebx = eax;
    SET_LO8(ecx, LO8(ebx));
    esp = esp + 0x30;
    SET_LO8(ecx, LO8(ecx) + 1);
    MEM8(esi + 0x1F4) = LO8(ecx);
    goto loc_001897DB;

loc_001896FD: ;
    edx = esp + 0x18;
    PUSH32(esp, edx);
    eax = esp + 0x14;
    PUSH32(esp, eax);
    ecx = esp + 0x1C;
    PUSH32(esp, ecx);
    PUSH32(esp, 0x3F800000);
    PUSH32(esp, 0x5A02CC);
    edx = ebp + 0x58;
    PUSH32(esp, edx);
    eax = ebp + 0x4C;
    PUSH32(esp, eax);
    ecx = ebp + 0x40;
    PUSH32(esp, ecx);
    edx = esp + 0x4C;
    PUSH32(esp, edx);
    eax = esp + 0x68;
    PUSH32(esp, eax);
    MEM32(0x84B568) = 0;
    PUSH32(esp, 0); sub_003DD570(); /* call 0x003DD570 */

loc_0018973B: ;
    ebx = eax;
    esp = esp + 0x28;
    if (TEST_Z(ebx, ebx)) goto loc_0018982E; /* je: equal / zero */

loc_00189748: ;
    eax = MEM32(ebp + 0x88);
    if (TEST_Z(eax, eax)) goto loc_00189756; /* je: equal / zero */

loc_00189752: ;
    edi = MEM32(eax);
    goto loc_0018975A;

loc_00189756: ;
    edi = MEM32(esp + 0x10);

loc_0018975A: ;
    xmm0 = MEMF(esp + 0x14); /* movss */
    xmm2 = 0.0f; /* xorps self = zero */
    ecx = esp + 0x2C;
    edx = esp + 0x38;
    MEMF(esp + 0x18) = xmm0; /* movss */
    MEM32(esp + 0x10) = ecx;
    MEM32(esp + 0x14) = edx;
    xmm0 = MEMF(esp + 0x18); /* movss */
    /* shufps xmm0, xmm0, 0 */
    edx = MEM32(esp + 0x10);
    xmm1 = MEMF(edx); /* movss */
    xmm1 = MEMD(edx + 4); /* movhps */
    /* mulps: xmm0 *= xmm1 (packed 4xfloat) */
    eax = MEM32(esp + 0x14);
    MEMF(eax) = xmm0; /* movss */
    MEMD(eax + 4) = xmm0; /* movhps */
    eax = esp + 0x38;
    ecx = esp + 0x44;
    edx = eax;
    MEM32(esp + 0x14) = eax;
    MEM32(esp + 0x10) = ecx;
    MEM32(esp + 0x18) = edx;
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

loc_001897DB: ;
    if (TEST_Z(ebx, ebx)) goto loc_0018982E; /* je: equal / zero */

loc_001897DF: ;
    xmm0 = MEMF(esp + 0x1C); /* movss */
    /* comiss xmm0, xmm2 - sets EFLAGS */
    if ((xmm0 <= xmm2)) goto loc_0018982E; /* jbe: below or equal (unsigned <=) */

loc_001897EA: ;
    edi = edi & 0x1F;
    edi = edi + 0xFFFFFFFDu;
    if (CMP_A(edi, 8)) goto loc_0018980A; /* ja: above (unsigned >) */

loc_001897F5: ;
    eax = ZX8(MEM8(edi + 0x189840));
    { uint32_t _jt = MEM32(eax * 4 + 0x189838); /* switch: 2 entries, 2 targets */
    if (_jt == 0x00189803u) goto loc_00189803;
    if (_jt == 0x0018980Au) goto loc_0018980A;
    g_seh_ebp = ebp; RECOMP_ITAIL(_jt); return; }

loc_00189803: ;
    eax = 1;
    goto loc_0018980C;

loc_0018980A: ;
    eax = 0; /* xor self */

loc_0018980C: ;
    PUSH32(esp, 0x3E6978D5);
    PUSH32(esp, 0x3F441893);
    PUSH32(esp, 0x3EB43958);
    PUSH32(esp, esi);
    esi = esp + 0x48;
    edi = esp + 0x30;
    ebx = ebp;
    PUSH32(esp, 0); sub_001893E0(); /* call 0x001893E0 */

loc_0018982B: ;
    esp = esp + 0x10;

loc_0018982E: ;
    POP32(esp, edi);
    POP32(esp, ebp);
    POP32(esp, ebx);

loc_00189831: ;
    POP32(esp, esi);
    esp = esp + 0x40;
    esp += 4; return; /* ret */

    #undef fp_push
    #undef fp_pop
    #undef fp_popp
    #undef fp_top
    #undef fp_st1
}

/**
 * sub_00189C70
 * Original: 0x00189C70 - 0x00189C95 (37 bytes, 12 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00189C70(void)
{
    int _flags = 0; /* fallback flag var */

loc_00189C70: ;
    ecx = MEM32(esp + 4);
    SET_LO16(eax, MEM16(ecx + 0x36));
    if (CMP_GE(LO16(eax), 8)) goto loc_00189C8F; /* jge: greater or equal (signed >=) */

loc_00189C7E: ;
    edx = ZX8(MEM8(ecx + 0x7B));
    eax = SX16(LO16(eax));
    eax = eax << 5;
    if (CMP_LE(edx, eax)) goto loc_00189C8F; /* jle: less or equal (signed <=) */

loc_00189C8C: ;
    MEM8(ecx + 0x7B) = LO8(eax);

loc_00189C8F: ;
    eax = 1;
    esp += 4; return; /* ret */

}

/**
 * sub_00189CA0
 * Original: 0x00189CA0 - 0x00189D40 (160 bytes, 43 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00189CA0(void)
{
    float xmm0;

loc_00189CA0: ;
    esp = esp - 0x34;
    xmm0 = 0.0f; /* xorps self = zero */
    SET_LO8(eax, 0xFF);
    PUSH32(esp, esi);
    esi = MEM32(esp + 0x3C);
    MEM8(esp + 0x1C) = LO8(eax);
    MEM8(esp + 0x1D) = LO8(eax);
    MEM8(esp + 0x21) = LO8(eax);
    eax = 0; /* xor self */
    SET_LO8(eax, MEM8(esi + 4));
    MEM32(esp + 0x34) = 0x303;
    MEM32(esp + 0xC) = 0x3A;
    MEM32(esp + 4) = 1;
    MEM16(esp + 8) = 0x64;
    MEMF(esp + 0x14) = xmm0; /* movss */
    MEMF(esp + 0x18) = xmm0; /* movss */
    PUSH32(esp, eax);
    PUSH32(esp, 0);
    PUSH32(esp, 0);
    MEM8(esp + 0x2A) = 0;
    MEM8(esp + 0x2B) = 0;
    MEM8(esp + 0x2C) = 0;
    PUSH32(esp, 0); sub_003E2480(); /* call 0x003E2480 */

loc_00189D02: ;
    ecx = MEM32(esi + 0x31C);
    edx = MEM32(esi + 0x318);
    PUSH32(esp, eax);
    eax = MEM32(esi + 0x314);
    PUSH32(esp, 0x42480000);
    PUSH32(esp, 0x42480000);
    PUSH32(esp, ecx);
    PUSH32(esp, edx);
    PUSH32(esp, eax);
    esi = esi + 0x320;
    PUSH32(esp, esi);
    PUSH32(esp, 0);
    PUSH32(esp, 0);
    eax = esp + 0x34;
    PUSH32(esp, 0); sub_0014FA50(); /* call 0x0014FA50 */

loc_00189D36: ;
    esp = esp + 0x30;
    SET_LO8(eax, 0); /* xor self */
    POP32(esp, esi);
    esp = esp + 0x34;
    esp += 4; return; /* ret */

}

/**
 * sub_00189D40
 * Original: 0x00189D40 - 0x0018A173 (1075 bytes, 234 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00189D40(void)
{
    uint32_t ebp;
    int _flags = 0; /* fallback flag var */
    float xmm0, xmm5, xmm6;
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_00189D40: ;
    esp = esp - 0xDC;
    PUSH32(esp, ebx);
    PUSH32(esp, ebp);
    ebp = MEM32(esp + 0xE8);
    PUSH32(esp, esi);
    esi = MEM32(esp + 0xF4);
    PUSH32(esp, edi);
    edi = eax;
    MEM32(esp + 0x40) = 0x303;
    PUSH32(esp, 0); sub_003E2480(); /* call 0x003E2480 */

loc_00189D67: ;
    edx = ((int32_t)eax < 0) ? 0xFFFFFFFF : 0; /* cdq */
    ecx = 0x1F;
    { int64_t _dividend = ((int64_t)(int32_t)edx << 32) | eax;
      eax = (uint32_t)((int32_t)(_dividend / (int32_t)ecx));
      edx = (uint32_t)((int32_t)(_dividend % (int32_t)ecx)); }
    eax = 0xFF;
    MEM8(esp + 0x27) = 0xFF;
    edx = edx + 0x14;
    MEM16(esp + 0x18) = LO16(edx);
    MEM16(esp + 0x4C) = LO16(edx);
    MEM16(esp + 0x48) = LO16(edx);
    ecx = SX16(LO16(edx));
    edx = ((int32_t)eax < 0) ? 0xFFFFFFFF : 0; /* cdq */
    { int64_t _dividend = ((int64_t)(int32_t)edx << 32) | eax;
      eax = (uint32_t)((int32_t)(_dividend / (int32_t)ecx));
      edx = (uint32_t)((int32_t)(_dividend % (int32_t)ecx)); }
    MEM16(esp + 0x4A) = LO16(eax);
    PUSH32(esp, 0); sub_003E1D70(); /* call 0x003E1D70 */

loc_00189D9B: ;
    xmm0 = xmm0 * MEMF(0x648FF8); /* mulss */
    xmm0 = xmm0 + MEMF(0x64AF48); /* addss */
    xmm0 = xmm0 * MEMF(esp + 0xF4); /* mulss */
    MEMF(esp + 0x58) = xmm0; /* movss */
    MEMF(esp + 0x54) = xmm0; /* movss */
    PUSH32(esp, 0); sub_003E1D70(); /* call 0x003E1D70 */

loc_00189DC5: ;
    xmm0 = xmm0 * MEMF(0x648CFC); /* mulss */
    xmm0 = xmm0 + MEMF(0x64AF44); /* addss */
    xmm0 = xmm0 * MEMF(0x648D2C); /* mulss */
    MEMF(esp + 0x50) = xmm0; /* movss */
    xmm0 = 0.0f; /* xorps self = zero */
    MEMF(esp + 0x68) = xmm0; /* movss */
    MEMF(esp + 0x6C) = xmm0; /* movss */
    MEMF(esp + 0x70) = xmm0; /* movss */
    MEM32(esp + 0x44) = 0x16;
    MEMF(esp + 0x1C) = xmm0; /* movss */
    MEMF(esp + 0x20) = xmm0; /* movss */
    MEM32(esp + 0x84) = 0x800E05;
    MEM8(esp + 0x8C) = 0xFF;
    MEM8(esp + 0x8D) = 0xFF;
    PUSH32(esp, 0); sub_003E2480(); /* call 0x003E2480 */

loc_00189E2C: ;
    if (TEST_Z(LO8(eax), 1)) goto loc_00189E3B; /* je: equal / zero */

loc_00189E30: ;
    MEM32(esp + 0x84) = 0x800E45;

loc_00189E3B: ;
    PUSH32(esp, 0); sub_003E2480(); /* call 0x003E2480 */

loc_00189E40: ;
    if (TEST_Z(LO8(eax), 1)) goto loc_00189E4F; /* je: equal / zero */

loc_00189E44: ;
    MEM32(esp + 0x84) = MEM32(esp + 0x84) | 0x80;

loc_00189E4F: ;
    edx = ebp;
    eax = MEM32(edx);
    ecx = MEM32(edx + 4);
    edx = MEM32(edx + 8);
    MEM32(esp + 0x5C) = eax;
    eax = MEM32(edi);
    ebx = 0; /* xor self */
    PUSH32(esp, esi);
    MEM32(esp + 0x78) = eax;
    PUSH32(esp, ebx);
    MEM32(esp + 0x68) = ecx;
    ecx = MEM32(edi + 4);
    eax = 4;
    PUSH32(esp, ebx);
    MEM32(esp + 0x34) = eax;
    MEM32(esp + 0x40) = eax;
    MEM32(esp + 0x70) = edx;
    edx = MEM32(edi + 8);
    MEM32(esp + 0x84) = ecx;
    ecx = 2;
    eax = esp + 0x24;
    PUSH32(esp, ebx);
    PUSH32(esp, eax);
    MEM8(esp + 0x38) = 0xFF;
    MEM8(esp + 0x39) = 0x8E;
    MEM8(esp + 0x3A) = 0x13;
    MEM32(esp + 0x90) = edx;
    MEMF(esp + 0x94) = xmm0; /* movss */
    MEM32(esp + 0x40) = ecx;
    MEM32(esp + 0x44) = ebx;
    MEM32(esp + 0x4C) = ecx;
    MEM32(esp + 0x50) = ebx;
    PUSH32(esp, 0); sub_00105450(); /* call 0x00105450 */

loc_00189EC9: ;
    esp = esp + 0x14;
    PUSH32(esp, 0); sub_003E2480(); /* call 0x003E2480 */

loc_00189ED1: ;
    eax = eax & 0x80000007u;
    if (((int32_t)eax >= 0)) goto loc_00189EDD; /* jns: not sign (positive) */

loc_00189ED8: ;
    eax--;
    eax = eax | 0xFFFFFFF8u;
    eax++;

loc_00189EDD: ;
    xmm0 = MEMF(0x648D14); /* movss */
    MEMF(esp + 0x40) = xmm0; /* movss */
    MEMF(esp + 0x44) = xmm0; /* movss */
    MEMF(esp + 0x48) = xmm0; /* movss */
    xmm0 = MEMF(0x648E64); /* movss */
    eax = eax + 5;
    (void)0; /* cmp eax, ebx - flags set for next jcc */
    MEMF(esp + 0x1C) = xmm0; /* movss */
    xmm0 = 0.0f; /* xorps self = zero */
    MEM32(esp + 0x80) = 0x21E8;
    MEM32(esp + 0x88) = 0x1B;
    MEMF(esp + 0x18) = xmm0; /* movss */
    MEMF(esp + 0x28) = xmm0; /* movss */
    MEMF(esp + 0x2C) = xmm0; /* movss */
    MEMF(esp + 0x30) = xmm0; /* movss */
    MEMF(esp + 0x74) = xmm0; /* movss */
    MEM8(esp + 0x8C) = LO8(ebx);
    MEM32(esp + 0x90) = ebx;
    MEM32(esp + 0x98) = 0x13E180;
    MEM32(esp + 0x9C) = ebx;
    MEM32(esp + 0xA0) = ebx;
    MEM32(esp + 0xA4) = ebx;
    MEM32(esp + 0xA8) = ebx;
    MEM32(esp + 0xAC) = ebx;
    MEM32(esp + 0xB0) = 0x13E6E0;
    MEM32(esp + 0xB4) = 0x13E8F0;
    MEM8(esp + 0xBC) = 2;
    MEM32(esp + 0xC0) = ebx;
    MEM8(esp + 0xC4) = LO8(ebx);
    MEM16(esp + 0xC6) = 0x14;
    MEM16(esp + 0xC8) = 0xC;
    if (CMP_LE(eax, ebx)) goto loc_0018A107; /* jle: less or equal (signed <=) */

loc_00189FC3: ;
    MEM32(esp + 0x10) = eax;

loc_00189FC7: ;
    ecx = ebp;
    edx = MEM32(ecx);
    eax = MEM32(ecx + 4);
    ecx = MEM32(ecx + 8);
    MEM32(esp + 0x4C) = edx;
    MEM32(esp + 0x50) = eax;
    MEM32(esp + 0x54) = ecx;
    PUSH32(esp, 0); sub_003E2480(); /* call 0x003E2480 */

loc_00189FE2: ;
    edx = ((int32_t)eax < 0) ? 0xFFFFFFFF : 0; /* cdq */
    ecx = 0x29;
    { int64_t _dividend = ((int64_t)(int32_t)edx << 32) | eax;
      eax = (uint32_t)((int32_t)(_dividend / (int32_t)ecx));
      edx = (uint32_t)((int32_t)(_dividend % (int32_t)ecx)); }
    edx = edx + 0x1D;
    MEM32(esp + 0x84) = edx;
    PUSH32(esp, 0); sub_003E2480(); /* call 0x003E2480 */

loc_00189FF9: ;
    edx = ((int32_t)eax < 0) ? 0xFFFFFFFF : 0; /* cdq */
    ecx = 0x4C;
    { int64_t _dividend = ((int64_t)(int32_t)edx << 32) | eax;
      eax = (uint32_t)((int32_t)(_dividend / (int32_t)ecx));
      edx = (uint32_t)((int32_t)(_dividend % (int32_t)ecx)); }
    SET_LO8(edx, LO8(edx) - LO8(ecx));
    MEM8(esp + 0x94) = LO8(edx);
    PUSH32(esp, 0); sub_003E1D70(); /* call 0x003E1D70 */

loc_0018A00F: ;
    xmm0 = xmm0 * MEMF(0x64AF40); /* mulss */
    xmm0 = xmm0 + MEMF(0x64AF3C); /* addss */
    xmm6 = MEMF(0x648E54); /* movss */
    PUSH32(esp, ecx);
    xmm0 = xmm0 * xmm6; /* mulss */
    MEMF(esp) = xmm0; /* movss */
    PUSH32(esp, 0); sub_003E2480(); /* call 0x003E2480 */

loc_0018A036: ;
    edx = ((int32_t)eax < 0) ? 0xFFFFFFFF : 0; /* cdq */
    ecx = 0x41;
    { int64_t _dividend = ((int64_t)(int32_t)edx << 32) | eax;
      eax = (uint32_t)((int32_t)(_dividend / (int32_t)ecx));
      edx = (uint32_t)((int32_t)(_dividend % (int32_t)ecx)); }
    edx = (uint32_t)(-(int32_t)edx);
    PUSH32(esp, edx);
    PUSH32(esp, 0); sub_003E2480(); /* call 0x003E2480 */

loc_0018A046: ;
    eax = eax & 0xFF;
    PUSH32(esp, eax);
    edi = esp + 0x70;
    PUSH32(esp, 0); sub_00110510(); /* call 0x00110510 */

loc_0018A055: ;
    PUSH32(esp, 0); sub_003E1D70(); /* call 0x003E1D70 */

loc_0018A05A: ;
    xmm0 = xmm0 * MEMF(0x64AF38); /* mulss */
    xmm0 = xmm0 + MEMF(0x64AF44); /* addss */
    xmm0 = xmm0 * MEMF(esp + 0x100); /* mulss */
    xmm0 = xmm0 * MEMF(0x648D54); /* mulss */
    MEMF(esp + 0x30) = xmm0; /* movss */
    MEMF(esp + 0x2C) = xmm0; /* movss */
    PUSH32(esp, 0); sub_003E1D70(); /* call 0x003E1D70 */

loc_0018A08C: ;
    xmm0 = xmm0 * MEMF(0x649DA0); /* mulss */
    xmm0 = xmm0 - MEMF(0x64A47C); /* subss */
    xmm0 = xmm0 * xmm6; /* mulss */
    MEMF(esp + 0x88) = xmm0; /* movss */
    PUSH32(esp, 0); sub_003E1D70(); /* call 0x003E1D70 */

loc_0018A0AE: ;
    xmm5 = MEMF(0x64A4E4); /* movss */
    xmm6 = MEMF(0x6498B4); /* movss */
    xmm0 = xmm0 * xmm5; /* mulss */
    xmm0 = xmm0 - xmm6; /* subss */
    MEMF(esp + 0x7C) = xmm0; /* movss */
    PUSH32(esp, 0); sub_003E1D70(); /* call 0x003E1D70 */

loc_0018A0D1: ;
    PUSH32(esp, ebx);
    PUSH32(esp, esi);
    PUSH32(esp, ebx);
    PUSH32(esp, ebx);
    PUSH32(esp, 0x7F);
    PUSH32(esp, 3);
    edx = esp + 0x3C;
    xmm0 = xmm0 * xmm5; /* mulss */
    PUSH32(esp, ebx);
    xmm0 = xmm0 - xmm6; /* subss */
    PUSH32(esp, edx);
    MEMF(esp + 0xA4) = xmm0; /* movss */
    PUSH32(esp, 0); sub_0013D5D0(); /* call 0x0013D5D0 */

loc_0018A0F5: ;
    eax = MEM32(esp + 0x3C);
    esp = esp + 0x2C;
    eax--;
    MEM32(esp + 0x10) = eax;
    if ((eax != 0)) goto loc_00189FC7; /* jne: not equal / not zero */

loc_0018A107: ;
    MEM8(esp + 0x10) = 3;
    MEM8(esp + 0x11) = 0xFF;
    PUSH32(esp, 0); sub_003E2480(); /* call 0x003E2480 */

loc_0018A116: ;
    edx = ((int32_t)eax < 0) ? 0xFFFFFFFF : 0; /* cdq */
    ecx = 0xD;
    { int64_t _dividend = ((int64_t)(int32_t)edx << 32) | eax;
      eax = (uint32_t)((int32_t)(_dividend / (int32_t)ecx));
      edx = (uint32_t)((int32_t)(_dividend % (int32_t)ecx)); }
    PUSH32(esp, esi);
    PUSH32(esp, ebx);
    PUSH32(esp, 0x7F);
    PUSH32(esp, 0x40000000);
    PUSH32(esp, 0x40000000);
    PUSH32(esp, 0x40000000);
    MEM8(esp + 0x2E) = LO8(ebx);
    edx = edx + 8;
    MEM16(esp + 0x2A) = LO16(edx);
    PUSH32(esp, 0); sub_003E2480(); /* call 0x003E2480 */

loc_0018A142: ;
    edx = ((int32_t)eax < 0) ? 0xFFFFFFFF : 0; /* cdq */
    ecx = 0x1F;
    { int64_t _dividend = ((int64_t)(int32_t)edx << 32) | eax;
      eax = (uint32_t)((int32_t)(_dividend / (int32_t)ecx));
      edx = (uint32_t)((int32_t)(_dividend % (int32_t)ecx)); }
    PUSH32(esp, ecx);
    ecx = ebp;
    edx = edx + 0x46;
    xmm0 = (float)(int32_t)edx; /* cvtsi2ss */
    edx = esp + 0x2C;
    MEMF(esp) = xmm0; /* movss */
    PUSH32(esp, edx);
    SET_LO8(edx, 0); /* xor self */
    PUSH32(esp, 0); sub_0011E790(); /* call 0x0011E790 */

loc_0018A165: ;
    esp = esp + 0x20;
    POP32(esp, edi);
    POP32(esp, esi);
    POP32(esp, ebp);
    POP32(esp, ebx);
    esp = esp + 0xDC;
    esp += 4; return; /* ret */

}

/**
 * sub_0018A180
 * Original: 0x0018A180 - 0x0018A275 (245 bytes, 64 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0018A180(void)
{
    int _flags = 0; /* fallback flag var */
    float xmm0, xmm1, xmm5;

loc_0018A180: ;
    xmm0 = MEMF(0x648D18); /* movss */
    xmm5 = MEMF(0x7FA24C); /* movss */
    esp = esp - 0x18;
    /* comiss xmm0, xmm5 - sets EFLAGS */
    PUSH32(esp, ebx);
    ebx = MEM32(esp + 0x20);
    if ((xmm0 > xmm5)) goto loc_0018A1A0; /* ja: above (unsigned >) */

loc_0018A19D: ;
    xmm5 = xmm0; /* movaps */

loc_0018A1A0: ;
    PUSH32(esp, 0); sub_003E1D70(); /* call 0x003E1D70 */

loc_0018A1A5: ;
    xmm0 = xmm0 * MEMF(ebx + 0x54); /* mulss */
    xmm0 = xmm0 + MEMF(ebx + 0x50); /* addss */
    xmm0 = xmm0 * xmm5; /* mulss */
    xmm0 = xmm0 + MEMF(ebx + 0x60); /* addss */
    /* comiss xmm0, MEMF(0x648D14) - sets EFLAGS */
    MEMF(ebx + 0x60) = xmm0; /* movss */
    if ((xmm0 <= MEMF(0x648D14))) goto loc_0018A270; /* jbe: below or equal (unsigned <=) */

loc_0018A1CA: ;
    PUSH32(esp, esi);
    PUSH32(esp, edi);
    /* nop */

loc_0018A1D0: ;
    PUSH32(esp, 0); sub_003E1D70(); /* call 0x003E1D70 */

loc_0018A1D5: ;
    xmm0 = xmm0 * MEMF(ebx + 0x5C); /* mulss */
    xmm0 = xmm0 + MEMF(ebx + 0x58); /* addss */
    esi = MEM32(ebx + 0x4C);
    edi = esp + 0xC;
    MEMF(esp + 0x28) = xmm0; /* movss */
    PUSH32(esp, 0); sub_00110B70(); /* call 0x00110B70 */

loc_0018A1F1: ;
    PUSH32(esp, 0); sub_003E1D70(); /* call 0x003E1D70 */

loc_0018A1F6: ;
    xmm0 = xmm0 * MEMF(0x648F8C); /* mulss */
    xmm0 = xmm0 * MEMF(0x648E54); /* mulss */
    PUSH32(esp, ecx);
    MEMF(esp) = xmm0; /* movss */
    PUSH32(esp, 0); sub_003E2480(); /* call 0x003E2480 */

loc_0018A211: ;
    edx = ((int32_t)eax < 0) ? 0xFFFFFFFF : 0; /* cdq */
    ecx = 0x81;
    { int64_t _dividend = ((int64_t)(int32_t)edx << 32) | eax;
      eax = (uint32_t)((int32_t)(_dividend / (int32_t)ecx));
      edx = (uint32_t)((int32_t)(_dividend % (int32_t)ecx)); }
    eax = 0x40;
    eax = eax - edx;
    PUSH32(esp, eax);
    PUSH32(esp, 0); sub_003E2480(); /* call 0x003E2480 */

loc_0018A226: ;
    eax = eax & 0xFF;
    PUSH32(esp, eax);
    edi = esp + 0x24;
    PUSH32(esp, 0); sub_00110510(); /* call 0x00110510 */

loc_0018A235: ;
    edx = MEM32(esp + 0x34);
    ecx = 0; /* xor self */
    SET_LO8(ecx, MEM8(ebx + 4));
    eax = esp + 0x18;
    PUSH32(esp, ecx);
    PUSH32(esp, edx);
    PUSH32(esp, eax);
    eax = edi;
    PUSH32(esp, 0); sub_00189D40(); /* call 0x00189D40 */

loc_0018A24C: ;
    xmm1 = MEMF(ebx + 0x60); /* movss */
    xmm0 = MEMF(0x648D14); /* movss */
    xmm1 = xmm1 - xmm0; /* subss */
    esp = esp + 0x18;
    /* comiss xmm1, xmm0 - sets EFLAGS */
    MEMF(ebx + 0x60) = xmm1; /* movss */
    if ((xmm1 > xmm0)) goto loc_0018A1D0; /* ja: above (unsigned >) */

loc_0018A26E: ;
    POP32(esp, edi);
    POP32(esp, esi);

loc_0018A270: ;
    POP32(esp, ebx);
    esp = esp + 0x18;
    esp += 4; return; /* ret */

}

/**
 * sub_0018A280
 * Original: 0x0018A280 - 0x0018A354 (212 bytes, 64 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0018A280(void)
{
    uint32_t ebp;
    int _flags = 0; /* fallback flag var */

loc_0018A280: ;
    PUSH32(esp, ebp);
    ebp = esp;
    esp = esp & 0xFFFFFFF0u;
    esp = esp - 0x58;
    PUSH32(esp, esi);
    PUSH32(esp, edi);
    edi = ZX8(LO8(ebx));
    esi = eax;
    eax = MEM32(edi * 4 + 0x6B785C);
    PUSH32(esp, eax);
    PUSH32(esp, 0); sub_002F7C30(); /* call 0x002F7C30 */

loc_0018A29D: ;
    esp = esp + 4;
    if (TEST_Z(LO8(eax), LO8(eax))) goto loc_0018A34E; /* je: equal / zero */

loc_0018A2A8: ;
    PUSH32(esp, 0xFF);
    PUSH32(esp, ebx);
    PUSH32(esp, esi);
    PUSH32(esp, 0); sub_0018A360(); /* call 0x0018A360 */

loc_0018A2B4: ;
    eax = MEM32(esi + 0x3C8);
    esp = esp + 0xC;
    if (TEST_Z(eax, eax)) goto loc_0018A34E; /* je: equal / zero */

loc_0018A2C5: ;
    edx = MEM32(edi * 4 + 0x6B7854);
    ecx = esp + 0x20;
    PUSH32(esp, ecx);
    PUSH32(esp, edx);
    PUSH32(esp, 0); sub_002F7810(); /* call 0x002F7810 */

loc_0018A2D7: ;
    eax = esp + 0x28;
    PUSH32(esp, eax);
    ecx = esp + 0x20;
    edx = edi + edi * 2;
    PUSH32(esp, ecx);
    eax = edx * 4 + 0x5990D0;
    PUSH32(esp, eax);
    PUSH32(esp, 0); sub_001101F0(); /* call 0x001101F0 */

loc_0018A2F1: ;
    MEM8(esp + 0x20) = 3;
    MEM8(esp + 0x21) = 0xFF;
    PUSH32(esp, 0); sub_003E2480(); /* call 0x003E2480 */

loc_0018A300: ;
    edx = ((int32_t)eax < 0) ? 0xFFFFFFFF : 0; /* cdq */
    ecx = 3;
    { int64_t _dividend = ((int64_t)(int32_t)edx << 32) | eax;
      eax = (uint32_t)((int32_t)(_dividend / (int32_t)ecx));
      edx = (uint32_t)((int32_t)(_dividend % (int32_t)ecx)); }
    PUSH32(esp, 0xFF);
    PUSH32(esp, 0);
    PUSH32(esp, 0x7F);
    PUSH32(esp, 0x40000000);
    PUSH32(esp, 0x40000000);
    PUSH32(esp, 0x40000000);
    PUSH32(esp, 0x437F0000);
    ecx = esp + 0x44;
    MEM8(esp + 0x42) = 0;
    edx = edx + 4;
    MEM16(esp + 0x3E) = LO16(edx);
    edx = esp + 0x3C;
    PUSH32(esp, edx);
    SET_LO8(edx, 0); /* xor self */
    PUSH32(esp, 0); sub_0011E790(); /* call 0x0011E790 */

loc_0018A342: ;
    esp = esp + 0x34;
    eax = esp + 0x14;
    PUSH32(esp, 0); sub_0018BEA0(); /* call 0x0018BEA0 */

loc_0018A34E: ;
    POP32(esp, edi);
    POP32(esp, esi);
    esp = ebp;
    POP32(esp, ebp);
    esp += 4; return; /* ret */

}

/**
 * sub_0018A360
 * Original: 0x0018A360 - 0x0018A3A0 (64 bytes, 17 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0018A360(void)
{
    int _flags = 0; /* fallback flag var */
    float xmm5;

loc_0018A360: ;
    esp = esp - 0x174;
    PUSH32(esp, esi);
    PUSH32(esp, edi);
    eax = esp + 0x68;
    PUSH32(esp, 0); sub_000AF180(); /* call 0x000AF180 */

loc_0018A371: ;
    edi = MEM32(esp + 0x180);
    xmm5 = 0.0f; /* xorps self = zero */
    esi = 0; /* xor self */
    (void)0; /* cmp edi, esi - flags set for next jcc */
    MEMF(esp + 0xB4) = xmm5; /* movss */
    MEM32(esp + 0xB0) = 0x303;
    if (CMP_NE(edi, esi)) { sub_0018A3A0(); return; } /* jne: not equal / not zero */

loc_0018A395: ;
    POP32(esp, edi);
    eax = 0; /* xor self */
    POP32(esp, esi);
    esp = esp + 0x174;
    esp += 4; return; /* ret */

}

/**
 * sub_0018A770
 * Original: 0x0018A770 - 0x0018AAFB (907 bytes, 229 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0018A770(void)
{
    uint32_t ebp;
    int _flags = 0; /* fallback flag var */
    float xmm0, xmm1, xmm2, xmm3, xmm5;
    double _fp_stack[8];
    int _fp_top = 0;
    #define fp_push(v) (_fp_stack[--_fp_top & 7] = (v))
    #define fp_pop() (_fp_top++)
    #define fp_popp() (fp_pop())
    #define fp_top() _fp_stack[_fp_top & 7]
    #define fp_st1() _fp_stack[(_fp_top + 1) & 7]

loc_0018A770: ;
    PUSH32(esp, ebp);
    ebp = esp;
    esp = esp & 0xFFFFFFF0u;
    esp = esp - 0x154;
    PUSH32(esp, ebx);
    ebx = MEM32(ebp + 8);
    SET_LO8(ecx, MEM8(ebx + 0x314));
    PUSH32(esp, esi);
    esi = MEM32(ebx + 0x310);
    SET_LO8(eax, MEM8(esi + 0x10B));
    (void)0; /* cmp LO8(eax), LO8(ecx) - flags set for next jcc */
    PUSH32(esp, edi);
    edi = MEM32(ebx + 0x318);
    MEM32(esp + 0x14) = esi;
    if (CMP_NE(LO8(eax), LO8(ecx))) { sub_0018AAFB(); return; } /* jne: not equal / not zero */

loc_0018A7A6: ;
    eax = MEM32(esi + 0x64);
    if (TEST_Z(eax, eax)) { sub_0018AAFB(); return; } /* je: equal / zero */

loc_0018A7B1: ;
    if (CMP_EQ(MEM32(esi + 0x68), 0xFFFF)) { sub_0018AAFB(); return; } /* je: equal / zero */

loc_0018A7BE: ;
    SET_LO8(ecx, MEM8(edi + 0x10B));
    if (CMP_NE(LO8(ecx), MEM8(ebx + 0x31C))) { sub_0018AAFB(); return; } /* jne: not equal / not zero */

loc_0018A7D0: ;
    eax = MEM32(edi + 0x64);
    if (TEST_Z(eax, eax)) { sub_0018AAFB(); return; } /* je: equal / zero */

loc_0018A7DB: ;
    edx = ZX8(MEM8(ebx + 0x31D));
    eax = MEM32(edx * 4 + 0x6B785C);
    PUSH32(esp, eax);
    PUSH32(esp, 0); sub_002F7C30(); /* call 0x002F7C30 */

loc_0018A7EF: ;
    esp = esp + 4;
    if (TEST_Z(LO8(eax), LO8(eax))) { sub_0018AAFB(); return; } /* je: equal / zero */

loc_0018A7FA: ;
    MEM8(ebx + 0x328) = MEM8(ebx + 0x328) & 0xFE;
    eax = MEM32(esi + 0x3C8);
    if (TEST_Z(eax, eax)) goto loc_0018A92A; /* je: equal / zero */

loc_0018A80F: ;
    edx = ZX8(MEM8(ebx + 0x31D));
    eax = MEM32(edx * 4 + 0x6B7854);
    ecx = esp + 0x20;
    PUSH32(esp, ecx);
    PUSH32(esp, eax);
    PUSH32(esp, 0); sub_002F7810(); /* call 0x002F7810 */

loc_0018A828: ;
    eax = ZX8(MEM8(ebx + 0x31D));
    ecx = esp + 0x28;
    PUSH32(esp, ecx);
    edx = eax + eax * 2;
    esi = ebx + 0x40;
    eax = edx * 4 + 0x5990D0;
    PUSH32(esp, esi);
    PUSH32(esp, eax);
    PUSH32(esp, 0); sub_001101F0(); /* call 0x001101F0 */

loc_0018A848: ;
    ecx = MEM32(edi + 0x78);
    MEM32(ebx + 0x4C) = ecx;
    edx = MEM32(edi + 0x7C);
    xmm0 = MEMF(ebx + 0x4C); /* movss */
    xmm0 = xmm0 - MEMF(esi); /* subss */
    MEM32(ebx + 0x50) = edx;
    eax = MEM32(edi + 0x80);
    MEM32(ebx + 0x54) = eax;
    edx = ebx + 0x340;
    MEMF(edx) = xmm0; /* movss */
    xmm0 = MEMF(ebx + 0x50); /* movss */
    xmm0 = xmm0 - MEMF(ebx + 0x44); /* subss */
    MEMF(ebx + 0x344) = xmm0; /* movss */
    xmm0 = MEMF(ebx + 0x54); /* movss */
    xmm0 = xmm0 - MEMF(ebx + 0x48); /* subss */
    esp = esp + 0x14;
    ecx = ebx + 0x350;
    edi = ebx + 0x34C;
    esi = edx;
    MEMF(ebx + 0x348) = xmm0; /* movss */
    PUSH32(esp, 0); sub_001112B0(); /* call 0x001112B0 */

loc_0018A8AA: ;
    if (TEST_Z(LO8(eax), LO8(eax))) goto loc_0018A8B5; /* je: equal / zero */

loc_0018A8AE: ;
    MEM8(ebx + 0x328) = MEM8(ebx + 0x328) | 1;

loc_0018A8B5: ;
    PUSH32(esp, 0xFF);
    PUSH32(esp, 0);
    PUSH32(esp, 0x7F);
    MEM8(esp + 0x24) = 3;
    MEM8(esp + 0x25) = 0xFF;
    MEM16(esp + 0x26) = 2;
    MEM8(esp + 0x2A) = 0;
    PUSH32(esp, 0); sub_003E1D70(); /* call 0x003E1D70 */

loc_0018A8D9: ;
    xmm0 = xmm0 * MEMF(0x648D10); /* mulss */
    xmm5 = MEMF(0x648D3C); /* movss */
    PUSH32(esp, ecx);
    xmm0 = xmm0 + xmm5; /* addss */
    MEMF(esp) = xmm0; /* movss */
    PUSH32(esp, 0); sub_003E1D70(); /* call 0x003E1D70 */

loc_0018A8F8: ;
    PUSH32(esp, ecx);
    xmm0 = xmm0 * xmm5; /* mulss */
    xmm0 = xmm0 + MEMF(0x649228); /* addss */
    MEMF(esp) = xmm0; /* movss */
    PUSH32(esp, 0x40000000);
    ecx = esp + 0x30;
    PUSH32(esp, 0x47C35000);
    PUSH32(esp, ecx);
    SET_LO8(edx, 0); /* xor self */
    ecx = ebx + 0x40;
    PUSH32(esp, 0); sub_0011E790(); /* call 0x0011E790 */

loc_0018A923: ;
    esi = MEM32(esp + 0x34);
    esp = esp + 0x20;

loc_0018A92A: ;
    xmm2 = MEMF(0x7FA24C); /* movss */
    xmm2 = xmm2 * MEMF(0x64AB10); /* mulss */
    xmm1 = MEMF(0x648D30); /* movss */
    xmm0 = xmm2; /* movaps */
    xmm0 = xmm0 + MEMF(ebx + 0x320); /* addss */
    /* comiss xmm0, xmm1 - sets EFLAGS */
    MEMF(ebx + 0x320) = xmm0; /* movss */
    MEMF(esp + 0x14) = xmm0; /* movss */
    if ((xmm0 <= xmm1)) goto loc_0018A96F; /* jbe: below or equal (unsigned <=) */

loc_0018A960: ;
    xmm0 = xmm0 - xmm1; /* subss */
    /* comiss xmm0, xmm1 - sets EFLAGS */
    if ((xmm0 > xmm1)) goto loc_0018A960; /* ja: above (unsigned >) */

loc_0018A969: ;
    MEMF(esp + 0x14) = xmm0; /* movss */

loc_0018A96F: ;
    xmm3 = 0.0f; /* xorps self = zero */
    /* comiss xmm3, xmm0 - sets EFLAGS */
    if ((xmm3 <= xmm0)) goto loc_0018A986; /* jbe: below or equal (unsigned <=) */

loc_0018A977: ;
    xmm0 = xmm0 + xmm1; /* addss */
    /* comiss xmm3, xmm0 - sets EFLAGS */
    if ((xmm3 > xmm0)) goto loc_0018A977; /* ja: above (unsigned >) */

loc_0018A980: ;
    MEMF(esp + 0x14) = xmm0; /* movss */

loc_0018A986: ;
    fp_push(MEMF(esp + 0x14)); /* fld float */
    MEMF(ebx + 0x320) = xmm0; /* movss */
    /* FPU: fsin  */
    fp_st1() *= fp_top(); fp_pop(); /* fmul */
    fp_st1() += fp_top(); fp_pop(); /* fadd */
    MEMF(ebx + 0x38) = (float)fp_top(); fp_popp(); /* fstp */
    xmm2 = xmm2 + MEMF(ebx + 0x324); /* addss */
    xmm0 = xmm2; /* movaps */
    /* comiss xmm0, xmm1 - sets EFLAGS */
    MEMF(ebx + 0x324) = xmm0; /* movss */
    MEMF(esp + 0x14) = xmm0; /* movss */
    if ((xmm0 <= xmm1)) goto loc_0018A9D0; /* jbe: below or equal (unsigned <=) */

loc_0018A9C1: ;
    xmm0 = xmm0 - xmm1; /* subss */
    /* comiss xmm0, xmm1 - sets EFLAGS */
    if ((xmm0 > xmm1)) goto loc_0018A9C1; /* ja: above (unsigned >) */

loc_0018A9CA: ;
    MEMF(esp + 0x14) = xmm0; /* movss */

loc_0018A9D0: ;
    /* comiss xmm3, xmm0 - sets EFLAGS */
    if ((xmm3 <= xmm0)) goto loc_0018A9E4; /* jbe: below or equal (unsigned <=) */

loc_0018A9D5: ;
    xmm0 = xmm0 + xmm1; /* addss */
    /* comiss xmm3, xmm0 - sets EFLAGS */
    if ((xmm3 > xmm0)) goto loc_0018A9D5; /* ja: above (unsigned >) */

loc_0018A9DE: ;
    MEMF(esp + 0x14) = xmm0; /* movss */

loc_0018A9E4: ;
    fp_push(MEMF(esp + 0x14)); /* fld float */
    MEMF(ebx + 0x324) = xmm0; /* movss */
    /* FPU: fsin  */
    fp_st1() *= fp_top(); fp_pop(); /* fmul */
    fp_st1() += fp_top(); fp_pop(); /* fadd */
    PUSH32(esp, 0); sub_00471288(); /* call 0x00471288 */

loc_0018AA03: ;
    MEM8(ebx + 0x7B) = LO8(eax);
    if (TEST_Z(MEM8(ebx + 0x328), 1)) goto loc_0018AADE; /* je: equal / zero */

loc_0018AA13: ;
    eax = MEM32(ebx + 0x33C);
    if (TEST_Z(eax, eax)) goto loc_0018AA41; /* je: equal / zero */

loc_0018AA1D: ;
    edx = MEM32(eax + 0x34);
    MEM8(edx + 0x5A) = 0;
    eax = MEM32(ebx + 0x33C);
    eax = MEM32(eax + 0x34);
    ecx = MEM32(ebx + 0x40);
    eax = eax + 0xC;
    MEM32(eax) = ecx;
    edx = MEM32(ebx + 0x44);
    MEM32(eax + 4) = edx;
    ecx = MEM32(ebx + 0x48);
    MEM32(eax + 8) = ecx;

loc_0018AA41: ;
    edx = MEM32(ebx + 0x34C);
    PUSH32(esp, 0);
    PUSH32(esp, 0);
    PUSH32(esp, 1);
    PUSH32(esp, 0);
    PUSH32(esp, 4);
    PUSH32(esp, 1);
    PUSH32(esp, 0);
    PUSH32(esp, 1);
    PUSH32(esp, edx);
    eax = esp + 0x84;
    PUSH32(esp, eax);
    ecx = ebx + 0x340;
    PUSH32(esp, ecx);
    ebx = ebx + 0x40;
    PUSH32(esp, ebx);
    eax = esi;
    PUSH32(esp, 0); sub_002D1EE0(); /* call 0x002D1EE0 */

loc_0018AA72: ;
    eax = MEM32(esp + 0x174);
    esp = esp + 0x30;
    if (CMP_L(eax, 2)) goto loc_0018AAEF; /* jl: less (signed <) */

loc_0018AA81: ;
    eax = MEM32(esp + 0x60);
    SET_LO8(ecx, MEM8(eax + 0x1AC));
    if (CMP_EQ(LO8(ecx), 6)) goto loc_0018AAAD; /* je: equal / zero */

loc_0018AA90: ;
    if (CMP_EQ(LO8(ecx), 7)) goto loc_0018AAAD; /* je: equal / zero */

loc_0018AA95: ;
    MEM8(eax + 0x1AD) = 0;
    MEM32(eax + 0x1A8) = 0x90FF0000u;
    MEM8(eax + 0x1AE) = 1;

loc_0018AAAD: ;
    PUSH32(esp, 0x3F800000);
    PUSH32(esp, 0);
    MEM8(eax + 0x1AC) = 6;
    edx = ZX16(MEM16(esi + 0x60));
    PUSH32(esp, 0);
    PUSH32(esp, edx);
    PUSH32(esp, 0);
    PUSH32(esp, 0xA0038);
    PUSH32(esp, esi);
    PUSH32(esp, 0); sub_002F0470(); /* call 0x002F0470 */

loc_0018AACF: ;
    esp = esp + 0x1C;
    eax = 1;
    POP32(esp, edi);
    POP32(esp, esi);
    POP32(esp, ebx);
    esp = ebp;
    POP32(esp, ebp);
    esp += 4; return; /* ret */

loc_0018AADE: ;
    ebx = MEM32(ebx + 0x33C);
    if (TEST_Z(ebx, ebx)) goto loc_0018AAEF; /* je: equal / zero */

loc_0018AAE8: ;
    eax = MEM32(ebx + 0x34);
    MEM8(eax + 0x5A) = 1;

loc_0018AAEF: ;
    eax = 1;
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
 * sub_0018AB10
 * Original: 0x0018AB10 - 0x0018AB1C (12 bytes, 4 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0018AB10(void)
{
    int _flags = 0; /* fallback flag var */

loc_0018AB10: ;
    eax = MEM32(esp + 4);
    (void)0; /* cmp MEM32(eax + 0x68), 0x28 - flags set for next jcc */
    SET_LO8(eax, (CMP_EQ(MEM32(eax + 0x68), 0x28)) ? 1 : 0); /* sete */
    esp += 4; return; /* ret */

}

/**
 * sub_0018AB20
 * Original: 0x0018AB20 - 0x0018ACA4 (388 bytes, 131 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0018AB20(void)
{
    uint32_t ebp;
    int _flags = 0; /* fallback flag var */
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_0018AB20: ;
    PUSH32(esp, ebx);
    ebx = MEM32(esp + 8);
    PUSH32(esp, ebp);
    PUSH32(esp, edi);
    edi = ebx + 0x32C;
    ebp = 2;
    PUSH32(esp, esi);

loc_0018AB33: ;
    esi = MEM32(edi);
    if (TEST_Z(esi, esi)) goto loc_0018AB71; /* je: equal / zero */

loc_0018AB39: ;
    SET_LO8(eax, MEM8(0x8472BD));
    if (TEST_NZ(LO8(eax), LO8(eax))) goto loc_0018AB71; /* jne: not equal / not zero */

loc_0018AB42: ;
    edx = esi;
    PUSH32(esp, 0); sub_000DAD90(); /* call 0x000DAD90 */

loc_0018AB49: ;
    eax = MEM32(esi);
    if (CMP_L(eax, 2)) goto loc_0018AB71; /* jl: less (signed <) */

loc_0018AB50: ;
    eax = (uint32_t)((int32_t)eax * (int32_t)0x70);
    eax = MEM32(eax + 0x5906BC);
    if (TEST_Z(eax, eax)) goto loc_0018AB65; /* je: equal / zero */

loc_0018AB5D: ;
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, esi);
    PUSH32(esp, 0); RECOMP_ICALL_SAFE(eax, _icall_esp); /* indirect call */
    }

loc_0018AB60: ;
    esp = esp + 4;
    goto loc_0018AB71;

loc_0018AB65: ;
    edx = 1;
    eax = esi;
    PUSH32(esp, 0); sub_000DA5E0(); /* call 0x000DA5E0 */

loc_0018AB71: ;
    edi = edi + 4;
    ebp--;
    if ((ebp != 0)) goto loc_0018AB33; /* jne: not equal / not zero */

loc_0018AB77: ;
    esi = MEM32(ebx + 0x334);
    if (TEST_Z(esi, esi)) goto loc_0018ABB9; /* je: equal / zero */

loc_0018AB81: ;
    SET_LO8(eax, MEM8(0x8472BD));
    if (TEST_NZ(LO8(eax), LO8(eax))) goto loc_0018ABB9; /* jne: not equal / not zero */

loc_0018AB8A: ;
    edx = esi;
    PUSH32(esp, 0); sub_000DAD90(); /* call 0x000DAD90 */

loc_0018AB91: ;
    eax = MEM32(esi);
    if (CMP_L(eax, 2)) goto loc_0018ABB9; /* jl: less (signed <) */

loc_0018AB98: ;
    eax = (uint32_t)((int32_t)eax * (int32_t)0x70);
    eax = MEM32(eax + 0x5906BC);
    if (TEST_Z(eax, eax)) goto loc_0018ABAD; /* je: equal / zero */

loc_0018ABA5: ;
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, esi);
    PUSH32(esp, 0); RECOMP_ICALL_SAFE(eax, _icall_esp); /* indirect call */
    }

loc_0018ABA8: ;
    esp = esp + 4;
    goto loc_0018ABB9;

loc_0018ABAD: ;
    edx = 1;
    eax = esi;
    PUSH32(esp, 0); sub_000DA5E0(); /* call 0x000DA5E0 */

loc_0018ABB9: ;
    esi = MEM32(ebx + 0x338);
    if (TEST_Z(esi, esi)) goto loc_0018ABFB; /* je: equal / zero */

loc_0018ABC3: ;
    SET_LO8(eax, MEM8(0x8472BD));
    if (TEST_NZ(LO8(eax), LO8(eax))) goto loc_0018ABFB; /* jne: not equal / not zero */

loc_0018ABCC: ;
    edx = esi;
    PUSH32(esp, 0); sub_000DAD90(); /* call 0x000DAD90 */

loc_0018ABD3: ;
    eax = MEM32(esi);
    if (CMP_L(eax, 2)) goto loc_0018ABFB; /* jl: less (signed <) */

loc_0018ABDA: ;
    eax = (uint32_t)((int32_t)eax * (int32_t)0x70);
    eax = MEM32(eax + 0x5906BC);
    if (TEST_Z(eax, eax)) goto loc_0018ABEF; /* je: equal / zero */

loc_0018ABE7: ;
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, esi);
    PUSH32(esp, 0); RECOMP_ICALL_SAFE(eax, _icall_esp); /* indirect call */
    }

loc_0018ABEA: ;
    esp = esp + 4;
    goto loc_0018ABFB;

loc_0018ABEF: ;
    edx = 1;
    eax = esi;
    PUSH32(esp, 0); sub_000DA5E0(); /* call 0x000DA5E0 */

loc_0018ABFB: ;
    esi = MEM32(ebx + 0x33C);
    if (TEST_Z(esi, esi)) goto loc_0018AC3D; /* je: equal / zero */

loc_0018AC05: ;
    SET_LO8(eax, MEM8(0x8472BD));
    if (TEST_NZ(LO8(eax), LO8(eax))) goto loc_0018AC3D; /* jne: not equal / not zero */

loc_0018AC0E: ;
    edx = esi;
    PUSH32(esp, 0); sub_000DAD90(); /* call 0x000DAD90 */

loc_0018AC15: ;
    eax = MEM32(esi);
    if (CMP_L(eax, 2)) goto loc_0018AC3D; /* jl: less (signed <) */

loc_0018AC1C: ;
    eax = (uint32_t)((int32_t)eax * (int32_t)0x70);
    eax = MEM32(eax + 0x5906BC);
    if (TEST_Z(eax, eax)) goto loc_0018AC31; /* je: equal / zero */

loc_0018AC29: ;
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, esi);
    PUSH32(esp, 0); RECOMP_ICALL_SAFE(eax, _icall_esp); /* indirect call */
    }

loc_0018AC2C: ;
    esp = esp + 4;
    goto loc_0018AC3D;

loc_0018AC31: ;
    edx = 1;
    eax = esi;
    PUSH32(esp, 0); sub_000DA5E0(); /* call 0x000DA5E0 */

loc_0018AC3D: ;
    PUSH32(esp, 0); sub_0014FD70(); /* call 0x0014FD70 */

loc_0018AC42: ;
    SET_LO8(eax, MEM8(0x8472BD));
    (void)0; /* test LO8(eax), LO8(eax) - flags set for next jcc */
    POP32(esp, esi);
    if (TEST_NZ(LO8(eax), LO8(eax))) goto loc_0018ACA0; /* jne: not equal / not zero */

loc_0018AC4C: ;
    eax = MEM32(ebx);
    if (CMP_NE(ebx, MEM32(eax * 4 + 0x7714E0))) goto loc_0018AC61; /* jne: not equal / not zero */

loc_0018AC57: ;
    ecx = MEM32(ebx + 0xC);
    MEM32(eax * 4 + 0x7714E0) = ecx;

loc_0018AC61: ;
    eax = MEM32(ebx + 0xC);
    if (TEST_Z(eax, eax)) goto loc_0018AC6E; /* je: equal / zero */

loc_0018AC68: ;
    edx = MEM32(ebx + 8);
    MEM32(eax + 8) = edx;

loc_0018AC6E: ;
    eax = MEM32(ebx + 8);
    if (TEST_Z(eax, eax)) goto loc_0018AC7B; /* je: equal / zero */

loc_0018AC75: ;
    ecx = MEM32(ebx + 0xC);
    MEM32(eax + 0xC) = ecx;

loc_0018AC7B: ;
    edx = MEM32(0x7714E4);
    eax = edx;
    (void)0; /* test eax, eax - flags set for next jcc */
    MEM32(ebx + 0xC) = edx;
    if (TEST_Z(eax, eax)) goto loc_0018AC8D; /* je: equal / zero */

loc_0018AC8A: ;
    MEM32(eax + 8) = ebx;

loc_0018AC8D: ;
    MEM32(ebx) = 1;
    MEM32(ebx + 8) = 0;
    MEM32(0x7714E4) = ebx;

loc_0018ACA0: ;
    POP32(esp, edi);
    POP32(esp, ebp);
    POP32(esp, ebx);
    esp += 4; return; /* ret */

}

/**
 * sub_0018ACB0
 * Original: 0x0018ACB0 - 0x0018AE0C (348 bytes, 117 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0018ACB0(void)
{
    int _flags = 0; /* fallback flag var */

loc_0018ACB0: ;
    PUSH32(esp, ebx);
    ebx = MEM32(esp + 8);
    PUSH32(esp, esi);
    PUSH32(esp, edi);
    esi = ebx + 0x32C;
    edi = 2;

loc_0018ACC2: ;
    edx = MEM32(esi);
    if (TEST_Z(edx, edx)) goto loc_0018ACF2; /* je: equal / zero */

loc_0018ACC8: ;
    SET_LO8(eax, MEM8(0x8472BD));
    if (TEST_NZ(LO8(eax), LO8(eax))) goto loc_0018ACF2; /* jne: not equal / not zero */

loc_0018ACD1: ;
    PUSH32(esp, 0); sub_000DAD90(); /* call 0x000DAD90 */

loc_0018ACD6: ;
    eax = MEM32(edx);
    eax = (uint32_t)((int32_t)eax * (int32_t)0x70);
    eax = MEM32(eax + 0x5906C0);
    (void)0; /* test eax, eax - flags set for next jcc */
    PUSH32(esp, edx);
    if (TEST_Z(eax, eax)) goto loc_0018ACEA; /* je: equal / zero */

loc_0018ACE6: ;
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, 0); RECOMP_ICALL_SAFE(eax, _icall_esp); /* indirect call */
    }

loc_0018ACE8: ;
    goto loc_0018ACEF;

loc_0018ACEA: ;
    PUSH32(esp, 0); sub_000DAE40(); /* call 0x000DAE40 */

loc_0018ACEF: ;
    esp = esp + 4;

loc_0018ACF2: ;
    esi = esi + 4;
    edi--;
    if ((edi != 0)) goto loc_0018ACC2; /* jne: not equal / not zero */

loc_0018ACF8: ;
    edx = MEM32(ebx + 0x334);
    if (TEST_Z(edx, edx)) goto loc_0018AD2C; /* je: equal / zero */

loc_0018AD02: ;
    SET_LO8(eax, MEM8(0x8472BD));
    if (TEST_NZ(LO8(eax), LO8(eax))) goto loc_0018AD2C; /* jne: not equal / not zero */

loc_0018AD0B: ;
    PUSH32(esp, 0); sub_000DAD90(); /* call 0x000DAD90 */

loc_0018AD10: ;
    ecx = MEM32(edx);
    ecx = (uint32_t)((int32_t)ecx * (int32_t)0x70);
    eax = MEM32(ecx + 0x5906C0);
    (void)0; /* test eax, eax - flags set for next jcc */
    PUSH32(esp, edx);
    if (TEST_Z(eax, eax)) goto loc_0018AD24; /* je: equal / zero */

loc_0018AD20: ;
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, 0); RECOMP_ICALL_SAFE(eax, _icall_esp); /* indirect call */
    }

loc_0018AD22: ;
    goto loc_0018AD29;

loc_0018AD24: ;
    PUSH32(esp, 0); sub_000DAE40(); /* call 0x000DAE40 */

loc_0018AD29: ;
    esp = esp + 4;

loc_0018AD2C: ;
    edx = MEM32(ebx + 0x338);
    if (TEST_Z(edx, edx)) goto loc_0018AD60; /* je: equal / zero */

loc_0018AD36: ;
    SET_LO8(eax, MEM8(0x8472BD));
    if (TEST_NZ(LO8(eax), LO8(eax))) goto loc_0018AD60; /* jne: not equal / not zero */

loc_0018AD3F: ;
    PUSH32(esp, 0); sub_000DAD90(); /* call 0x000DAD90 */

loc_0018AD44: ;
    eax = MEM32(edx);
    eax = (uint32_t)((int32_t)eax * (int32_t)0x70);
    eax = MEM32(eax + 0x5906C0);
    (void)0; /* test eax, eax - flags set for next jcc */
    PUSH32(esp, edx);
    if (TEST_Z(eax, eax)) goto loc_0018AD58; /* je: equal / zero */

loc_0018AD54: ;
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, 0); RECOMP_ICALL_SAFE(eax, _icall_esp); /* indirect call */
    }

loc_0018AD56: ;
    goto loc_0018AD5D;

loc_0018AD58: ;
    PUSH32(esp, 0); sub_000DAE40(); /* call 0x000DAE40 */

loc_0018AD5D: ;
    esp = esp + 4;

loc_0018AD60: ;
    edx = MEM32(ebx + 0x33C);
    if (TEST_Z(edx, edx)) goto loc_0018AD94; /* je: equal / zero */

loc_0018AD6A: ;
    SET_LO8(eax, MEM8(0x8472BD));
    if (TEST_NZ(LO8(eax), LO8(eax))) goto loc_0018AD94; /* jne: not equal / not zero */

loc_0018AD73: ;
    PUSH32(esp, 0); sub_000DAD90(); /* call 0x000DAD90 */

loc_0018AD78: ;
    ecx = MEM32(edx);
    ecx = (uint32_t)((int32_t)ecx * (int32_t)0x70);
    eax = MEM32(ecx + 0x5906C0);
    (void)0; /* test eax, eax - flags set for next jcc */
    PUSH32(esp, edx);
    if (TEST_Z(eax, eax)) goto loc_0018AD8C; /* je: equal / zero */

loc_0018AD88: ;
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, 0); RECOMP_ICALL_SAFE(eax, _icall_esp); /* indirect call */
    }

loc_0018AD8A: ;
    goto loc_0018AD91;

loc_0018AD8C: ;
    PUSH32(esp, 0); sub_000DAE40(); /* call 0x000DAE40 */

loc_0018AD91: ;
    esp = esp + 4;

loc_0018AD94: ;
    PUSH32(esp, 0); sub_0014FD70(); /* call 0x0014FD70 */

loc_0018AD99: ;
    SET_LO8(eax, MEM8(0x8472BD));
    if (TEST_NZ(LO8(eax), LO8(eax))) goto loc_0018AE08; /* jne: not equal / not zero */

loc_0018ADA2: ;
    eax = MEM32(ebx);
    if (CMP_NE(ebx, MEM32(eax * 4 + 0x7714E0))) goto loc_0018ADB7; /* jne: not equal / not zero */

loc_0018ADAD: ;
    edx = MEM32(ebx + 0xC);
    MEM32(eax * 4 + 0x7714E0) = edx;

loc_0018ADB7: ;
    eax = MEM32(ebx + 0xC);
    if (TEST_Z(eax, eax)) goto loc_0018ADC4; /* je: equal / zero */

loc_0018ADBE: ;
    ecx = MEM32(ebx + 8);
    MEM32(eax + 8) = ecx;

loc_0018ADC4: ;
    eax = MEM32(ebx + 8);
    if (TEST_Z(eax, eax)) goto loc_0018ADD1; /* je: equal / zero */

loc_0018ADCB: ;
    edx = MEM32(ebx + 0xC);
    MEM32(eax + 0xC) = edx;

loc_0018ADD1: ;
    eax = MEM32(ebx + 0x10);
    ecx = ebx + 0x10;
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, 0);
    PUSH32(esp, 0); RECOMP_ICALL_SAFE(MEM32(eax), _icall_esp); /* indirect call */
    }

loc_0018ADDB: ;
    PUSH32(esp, ebx);
    PUSH32(esp, 0); sub_0042C911(); /* call 0x0042C911 */

loc_0018ADE1: ;
    if (TEST_NZ(eax, eax)) goto loc_0018AE08; /* jne: not equal / not zero */

loc_0018ADE5: ;
    esi = MEM32(0x7FA490);
    edx = MEM32(0x7FA4B4);
    esi++;
    edx--;
    PUSH32(esp, ebx);
    MEM32(0x7FA490) = esi;
    MEM32(0x7FA4B4) = edx;
    PUSH32(esp, 0); sub_003E7080(); /* call 0x003E7080 */

loc_0018AE05: ;
    esp = esp + 4;

loc_0018AE08: ;
    POP32(esp, edi);
    POP32(esp, esi);
    POP32(esp, ebx);
    esp += 4; return; /* ret */

}

/**
 * sub_0018AE10
 * Original: 0x0018AE10 - 0x0018AEEA (218 bytes, 67 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0018AE10(void)
{
    uint32_t ebp;
    int _flags = 0; /* fallback flag var */
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_0018AE10: ;
    eax = MEM32(esp + 0xC);
    (void)0; /* test eax, eax - flags set for next jcc */
    PUSH32(esp, esi);
    esi = MEM32(esp + 8);
    if (TEST_NZ(eax, eax)) goto loc_0018AE77; /* jne: not equal / not zero */

loc_0018AE1D: ;
    eax = MEM32(esp + 0xC);
    ecx = MEM32(esi + 0x310);
    if (CMP_EQ(ecx, MEM32(eax))) goto loc_0018AE3A; /* je: equal / zero */

loc_0018AE2B: ;
    SET_LO8(edx, MEM8(esi + 0x314));
    if (CMP_NE(LO8(edx), MEM8(eax + 4))) goto loc_0018AED2; /* jne: not equal / not zero */

loc_0018AE3A: ;
    SET_LO8(eax, MEM8(0x8472BD));
    if (TEST_NZ(LO8(eax), LO8(eax))) goto loc_0018AED2; /* jne: not equal / not zero */

loc_0018AE47: ;
    edx = esi;
    PUSH32(esp, 0); sub_000DAD90(); /* call 0x000DAD90 */

loc_0018AE4E: ;
    eax = MEM32(esi);
    if (CMP_L(eax, 2)) goto loc_0018AED2; /* jl: less (signed <) */

loc_0018AE55: ;
    eax = (uint32_t)((int32_t)eax * (int32_t)0x70);
    eax = MEM32(eax + 0x5906BC);
    if (TEST_Z(eax, eax)) goto loc_0018AE6A; /* je: equal / zero */

loc_0018AE62: ;
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, esi);
    PUSH32(esp, 0); RECOMP_ICALL_SAFE(eax, _icall_esp); /* indirect call */
    }

loc_0018AE65: ;
    esp = esp + 4;
    POP32(esp, esi);
    esp += 4; return; /* ret */

loc_0018AE6A: ;
    eax = esi;
    edx = 1;
    POP32(esp, esi);
    g_seh_ebp = ebp; sub_000DA5E0(); return; /* tail jmp 0x000DA5E0 */

loc_0018AE77: ;
    if (CMP_NE(eax, 0x2D)) { sub_0018AEEA(); return; } /* jne: not equal / not zero */

loc_0018AE7C: ;
    eax = MEM32(esp + 0xC);
    ecx = MEM32(esi + 0x310);
    edx = MEM32(eax);
    if (CMP_NE(ecx, edx)) goto loc_0018AEA0; /* jne: not equal / not zero */

loc_0018AE8C: ;
    ecx = MEM32(eax + 4);
    MEM32(esi + 0x310) = ecx;
    SET_LO8(edx, MEM8(eax + 9));
    MEM8(esi + 0x314) = LO8(edx);
    goto loc_0018AEB4;

loc_0018AEA0: ;
    if (CMP_NE(ecx, MEM32(eax + 4))) goto loc_0018AEB4; /* jne: not equal / not zero */

loc_0018AEA5: ;
    MEM32(esi + 0x310) = edx;
    SET_LO8(ecx, MEM8(eax + 8));
    MEM8(esi + 0x314) = LO8(ecx);

loc_0018AEB4: ;
    ecx = MEM32(esi + 0x318);
    edx = MEM32(eax);
    if (CMP_NE(ecx, edx)) goto loc_0018AED4; /* jne: not equal / not zero */

loc_0018AEC0: ;
    edx = MEM32(eax + 4);
    MEM32(esi + 0x318) = edx;
    SET_LO8(eax, MEM8(eax + 9));
    MEM8(esi + 0x31C) = LO8(eax);

loc_0018AED2: ;
    POP32(esp, esi);
    esp += 4; return; /* ret */

loc_0018AED4: ;
    if (CMP_NE(ecx, MEM32(eax + 4))) goto loc_0018AED2; /* jne: not equal / not zero */

loc_0018AED9: ;
    MEM32(esi + 0x318) = edx;
    SET_LO8(ecx, MEM8(eax + 8));
    MEM8(esi + 0x31C) = LO8(ecx);
    POP32(esp, esi);
    esp += 4; return; /* ret */

}

/**
 * sub_0018AF20
 * Original: 0x0018AF20 - 0x0018B00F (239 bytes, 73 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0018AF20(void)
{
    uint32_t ebp;
    int _flags = 0; /* fallback flag var */
    float xmm0;

loc_0018AF20: ;
    PUSH32(esp, ebp);
    ebp = esp;
    esp = esp & 0xFFFFFFF0u;
    esp = esp - 0x44;
    PUSH32(esp, ebx);
    PUSH32(esp, esi);
    PUSH32(esp, edi);
    edi = MEM32(ebp + 8);
    eax = MEM32(edi + 0x7C);
    eax = MEM32(eax + 8);
    if (TEST_Z(MEM8(eax + 0x328), 1)) { sub_0018B00F(); return; } /* je: equal / zero */

loc_0018AF42: ;
    ecx = MEM32(eax + 0x310);
    edx = MEM32(ecx + 0x3C8);
    (void)0; /* test edx, edx - flags set for next jcc */
    MEM32(esp + 0xC) = ecx;
    if (TEST_Z(edx, edx)) { sub_0018B00F(); return; } /* je: equal / zero */

loc_0018AF5A: ;
    SET_LO8(ecx, MEM8(eax + 0x31D));
    esi = eax + 0x40;
    ebx = MEM32(esi);
    edx = edi + 0x4C;
    MEM32(edx) = ebx;
    ebx = MEM32(esi + 4);
    MEM32(edx + 4) = ebx;
    esi = MEM32(esi + 8);
    MEM32(edx + 8) = esi;
    edx = eax + 0x4C;
    ebx = MEM32(edx);
    esi = edi + 0x58;
    MEM32(esi) = ebx;
    ebx = MEM32(edx + 4);
    MEM32(esi + 4) = ebx;
    edx = MEM32(edx + 8);
    MEM32(esi + 8) = edx;
    edx = MEM32(eax + 0x34C);
    esi = MEM32(esp + 0xC);
    MEM32(edi + 0x70) = edx;
    eax = MEM32(eax + 0x350);
    ebx = ZX8(LO8(ecx));
    ecx = esp + 0x10;
    MEM32(edi + 0x74) = eax;
    edx = MEM32(ebx * 4 + 0x6B7854);
    PUSH32(esp, ecx);
    PUSH32(esp, edx);
    PUSH32(esp, 0); sub_002F7810(); /* call 0x002F7810 */

loc_0018AFB7: ;
    eax = esp + 0x18;
    PUSH32(esp, eax);
    ecx = ebx + ebx * 2;
    esi = edi + 0x64;
    edx = ecx * 4 + 0x5990E8;
    PUSH32(esp, esi);
    PUSH32(esp, edx);
    PUSH32(esp, 0); sub_001101F0(); /* call 0x001101F0 */

loc_0018AFD0: ;
    xmm0 = MEMF(esi); /* movss */
    xmm0 = xmm0 - MEMF(edi + 0x4C); /* subss */
    SET_LO8(eax, MEM8(edi + 0x38));
    MEMF(esi) = xmm0; /* movss */
    xmm0 = MEMF(edi + 0x68); /* movss */
    xmm0 = xmm0 - MEMF(edi + 0x50); /* subss */
    esp = esp + 0x14;
    MEMF(edi + 0x68) = xmm0; /* movss */
    xmm0 = MEMF(edi + 0x6C); /* movss */
    xmm0 = xmm0 - MEMF(edi + 0x54); /* subss */
    SET_LO8(eax, LO8(eax) | 2);
    MEM8(edi + 0x38) = LO8(eax);
    MEMF(edi + 0x6C) = xmm0; /* movss */
    SET_LO8(eax, 1);
    POP32(esp, edi);
    POP32(esp, esi);
    POP32(esp, ebx);
    esp = ebp;
    POP32(esp, ebp);
    esp += 4; return; /* ret */

}

/**
 * sub_0018B020
 * Original: 0x0018B020 - 0x0018B243 (547 bytes, 132 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0018B020(void)
{
    uint32_t ebp;
    int _flags = 0; /* fallback flag var */
    float xmm0, xmm1;
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_0018B020: ;
    esp = esp - 0x5C;
    PUSH32(esp, ebp);
    ebp = MEM32(esp + 0x64);
    PUSH32(esp, 0); sub_003E1D70(); /* call 0x003E1D70 */

loc_0018B02D: ;
    xmm0 = xmm0 * MEMF(0x64925C); /* mulss */
    xmm0 = xmm0 + MEMF(0x64A2EC); /* addss */
    xmm0 = xmm0 * MEMF(0x648D2C); /* mulss */
    xmm0 = xmm0 + MEMF(ebp + 0x50); /* addss */
    xmm1 = MEMF(0x648D14); /* movss */
    /* comiss xmm0, xmm1 - sets EFLAGS */
    MEMF(ebp + 0x50) = xmm0; /* movss */
    if ((xmm0 <= xmm1)) goto loc_0018B23E; /* jbe: below or equal (unsigned <=) */

loc_0018B060: ;
    eax = MEM32(ebp + 0x4C);
    SET_LO8(edx, MEM8(eax + 0x328));
    ecx = 1;
    if (TEST_Z(LO8(ecx), LO8(edx))) goto loc_0018B230; /* je: equal / zero */

loc_0018B076: ;
    eax = eax + 0x4C;
    edx = MEM32(eax);
    MEM32(esp + 4) = edx;
    edx = MEM32(eax + 4);
    eax = MEM32(eax + 8);
    PUSH32(esp, esi);
    MEM32(esp + 0xC) = edx;
    MEM32(esp + 0x10) = eax;
    MEM16(esp + 0x16) = 5;
    MEM8(esp + 0x3C) = 4;
    MEM8(esp + 0x3D) = 2;
    MEM8(esp + 0x3E) = 3;
    MEM8(esp + 0x41) = 0xBE;
    MEM8(esp + 0x40) = 0x8E;
    MEM8(esp + 0x3F) = 0x3A;
    MEM8(esp + 0x45) = 0;
    MEM8(esp + 0x44) = 0;
    MEM8(esp + 0x43) = 0;
    MEM8(esp + 0x46) = 0;
    MEM8(esp + 0x47) = 0xFF;
    MEM32(esp + 0x4C) = 0x205;
    MEM32(esp + 0x50) = 0x63000;
    MEM16(esp + 0x54) = 0xC;
    MEM16(esp + 0x56) = 0x15;
    MEM16(esp + 0x58) = LO16(ecx);
    MEM8(esp + 0x5A) = 0;
    MEMF(esp + 0x5C) = xmm1; /* movss */
    MEM8(esp + 0x60) = 0xFF;
    MEM8(esp + 0x61) = 0;
    PUSH32(esp, edi);

loc_0018B105: ;
    PUSH32(esp, 0); sub_003E2480(); /* call 0x003E2480 */

loc_0018B10A: ;
    edx = ((int32_t)eax < 0) ? 0xFFFFFFFF : 0; /* cdq */
    ecx = 3;
    { int64_t _dividend = ((int64_t)(int32_t)edx << 32) | eax;
      eax = (uint32_t)((int32_t)(_dividend / (int32_t)ecx));
      edx = (uint32_t)((int32_t)(_dividend % (int32_t)ecx)); }
    SET_LO8(edx, LO8(edx) + LO8(ecx));
    MEM8(esp + 0x21) = LO8(edx);
    PUSH32(esp, 0); sub_003E2480(); /* call 0x003E2480 */

loc_0018B11D: ;
    eax = eax & 0x8000000Fu;
    if (((int32_t)eax >= 0)) goto loc_0018B129; /* jns: not sign (positive) */

loc_0018B124: ;
    eax--;
    eax = eax | 0xFFFFFFF0u;
    eax++;

loc_0018B129: ;
    eax = eax + 0x28;
    MEM16(esp + 0x18) = LO16(eax);
    PUSH32(esp, 0); sub_003E1D70(); /* call 0x003E1D70 */

loc_0018B136: ;
    xmm0 = xmm0 * MEMF(0x648CE4); /* mulss */
    xmm0 = xmm0 + MEMF(0x648D50); /* addss */
    MEMF(esp + 0x2C) = xmm0; /* movss */
    PUSH32(esp, 0); sub_003E1D70(); /* call 0x003E1D70 */

loc_0018B151: ;
    xmm0 = xmm0 * MEMF(0x648F38); /* mulss */
    xmm0 = xmm0 + MEMF(0x64908C); /* addss */
    PUSH32(esp, ecx);
    MEMF(esp) = xmm0; /* movss */
    PUSH32(esp, 0); sub_003E2480(); /* call 0x003E2480 */

loc_0018B16C: ;
    edx = ((int32_t)eax < 0) ? 0xFFFFFFFF : 0; /* cdq */
    ecx = 0x1F;
    { int64_t _dividend = ((int64_t)(int32_t)edx << 32) | eax;
      eax = (uint32_t)((int32_t)(_dividend / (int32_t)ecx));
      edx = (uint32_t)((int32_t)(_dividend % (int32_t)ecx)); }
    edx = edx - 0x37;
    PUSH32(esp, edx);
    PUSH32(esp, 0); sub_003E2480(); /* call 0x003E2480 */

loc_0018B17D: ;
    eax = eax & 0xFF;
    PUSH32(esp, eax);
    edi = esp + 0x3C;
    PUSH32(esp, 0); sub_00110510(); /* call 0x00110510 */

loc_0018B18C: ;
    PUSH32(esp, 0); sub_003E1D70(); /* call 0x003E1D70 */

loc_0018B191: ;
    xmm0 = xmm0 * MEMF(0x64A2E8); /* mulss */
    xmm0 = xmm0 - MEMF(0x64A2E4); /* subss */
    xmm0 = xmm0 * MEMF(0x648D2C); /* mulss */
    MEMF(esp + 0x48) = xmm0; /* movss */
    PUSH32(esp, 0); sub_003E2480(); /* call 0x003E2480 */

loc_0018B1B4: ;
    edx = ((int32_t)eax < 0) ? 0xFFFFFFFF : 0; /* cdq */
    ecx = 0x65;
    { int64_t _dividend = ((int64_t)(int32_t)edx << 32) | eax;
      eax = (uint32_t)((int32_t)(_dividend / (int32_t)ecx));
      edx = (uint32_t)((int32_t)(_dividend % (int32_t)ecx)); }
    PUSH32(esp, 0);
    PUSH32(esp, 0);
    PUSH32(esp, 0);
    PUSH32(esp, 8);
    PUSH32(esp, 8);
    PUSH32(esp, 8);
    eax = esp + 0x30;
    PUSH32(esp, 0x10);
    PUSH32(esp, eax);
    eax = 0x3C;
    MEM32(esp + 0x48) = 0xA;
    SET_LO8(edx, LO8(edx) - LO8(ecx));
    MEM8(esp + 0x72) = LO8(edx);
    SET_LO8(edx, MEM8(ebp + 4));
    PUSH32(esp, 0); sub_0017A580(); /* call 0x0017A580 */

loc_0018B1EA: ;
    esp = esp + 0x2C;
    if (TEST_Z(eax, eax)) goto loc_0018B202; /* je: equal / zero */

loc_0018B1F1: ;
    edi = MEM32(eax + 0x144);
    ecx = 0xF;
    esi = esp + 0x2C;
    memcpy((void*)XBOX_PTR(edi), (void*)XBOX_PTR(esi), ecx * 4);
    esi += ecx * 4; edi += ecx * 4; ecx = 0; /* rep movsd */

loc_0018B202: ;
    xmm0 = MEMF(ebp + 0x50); /* movss */
    xmm1 = MEMF(0x648D14); /* movss */
    xmm0 = xmm0 - xmm1; /* subss */
    /* comiss xmm0, xmm1 - sets EFLAGS */
    MEMF(ebp + 0x50) = xmm0; /* movss */
    if ((xmm0 > xmm1)) goto loc_0018B105; /* ja: above (unsigned >) */

loc_0018B221: ;
    POP32(esp, edi);
    POP32(esp, esi);
    POP32(esp, ebp);
    esp = esp + 0x5C;
    esp += 4; return; /* ret */

    /* nop */

loc_0018B230: ;
    xmm0 = xmm0 - xmm1; /* subss */
    /* comiss xmm0, xmm1 - sets EFLAGS */
    if ((xmm0 > xmm1)) goto loc_0018B230; /* ja: above (unsigned >) */

loc_0018B239: ;
    MEMF(ebp + 0x50) = xmm0; /* movss */

loc_0018B23E: ;
    POP32(esp, ebp);
    esp = esp + 0x5C;
    esp += 4; return; /* ret */

}

/**
 * sub_0018B250
 * Original: 0x0018B250 - 0x0018B497 (583 bytes, 107 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0018B250(void)
{
    int _flags = 0; /* fallback flag var */
    float xmm0, xmm1;

loc_0018B250: ;
    esp = esp - 0x17C;
    PUSH32(esp, esi);
    eax = esp + 0x6C;
    PUSH32(esp, 0); sub_000AF180(); /* call 0x000AF180 */

loc_0018B260: ;
    SET_LO8(eax, MEM8(edi + 0x10B));
    SET_LO8(ecx, MEM8(esp + 0x184));
    xmm0 = 0.0f; /* xorps self = zero */
    MEMF(esp + 0xB8) = xmm0; /* movss */
    MEM32(esp + 0xB4) = 0x303;
    MEM8(esp + 0x64) = LO8(eax);
    MEM8(esp + 0x65) = LO8(ecx);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, 0); RECOMP_ICALL_SAFE(MEM32(0x5975F8), _icall_esp); /* indirect call */
    }

loc_0018B292: ;
    xmm1 = MEMF(0x648EA4); /* movss */
    xmm0 = 0.0f; /* xorps self = zero */
    MEMF(esp + 0x74) = xmm1; /* movss */
    MEMF(esp + 0x70) = xmm1; /* movss */
    xmm1 = MEMF(0x649428); /* movss */
    esi = 0; /* xor self */
    MEMF(esp + 8) = xmm1; /* movss */
    MEMF(esp + 4) = xmm1; /* movss */
    xmm1 = MEMF(0x6493A8); /* movss */
    SET_LO8(ecx, 0xFF);
    MEMF(esp + 0x10) = xmm1; /* movss */
    MEMF(esp + 0xC) = xmm1; /* movss */
    xmm1 = MEMF(0x648D10); /* movss */
    MEM32(esp + 0xC0) = eax;
    eax = 2;
    MEMF(esp + 0x14) = xmm1; /* movss */
    MEMF(esp + 0x18) = xmm1; /* movss */
    xmm1 = MEMF(0x648D40); /* movss */
    MEM32(esp + 0xCC) = eax;
    MEM32(esp + 0xD4) = eax;
    MEM32(esp + 0xE8) = eax;
    eax = eax | 0xFFFFFFFFu;
    MEMF(esp + 0xC4) = xmm0; /* movss */
    MEMF(esp + 0xC8) = xmm0; /* movss */
    MEMF(esp + 0x78) = xmm0; /* movss */
    MEMF(esp + 0x7C) = xmm0; /* movss */
    MEMF(esp + 0x80) = xmm0; /* movss */
    MEMF(esp + 0x84) = xmm0; /* movss */
    MEMF(esp + 0x88) = xmm0; /* movss */
    MEMF(esp + 0x8C) = xmm0; /* movss */
    xmm0 = MEMF(0x648D14); /* movss */
    MEMF(esp + 0x20) = xmm1; /* movss */
    xmm1 = MEMF(0x649284); /* movss */
    MEM8(esp + 0x6C) = 3;
    MEM8(esp + 0xBC) = 1;
    MEM32(esp + 0xD8) = esi;
    MEM32(esp + 0xDC) = 4;
    MEM32(esp + 0xE4) = esi;
    MEM16(esp + 0x6E) = 0x12C;
    MEM32(esp + 0xEC) = esi;
    MEMF(esp + 0x90) = xmm0; /* movss */
    MEMF(esp + 0x94) = xmm0; /* movss */
    MEMF(esp + 0x98) = xmm0; /* movss */
    MEM32(esp + 0x9C) = 0xC12002;
    MEM8(esp + 0xB3) = LO8(ecx);
    MEM8(esp + 0xB0) = LO8(ecx);
    MEM8(esp + 0xB1) = LO8(ecx);
    MEM8(esp + 0xB2) = LO8(ecx);
    MEM32(esp + 0xA0) = esi;
    MEMF(esp + 0x1C) = xmm0; /* movss */
    MEMF(esp + 0x24) = xmm1; /* movss */
    MEM32(esp + 0x28) = eax;
    MEM32(esp + 0x38) = eax;
    MEM32(esp + 0x2C) = eax;
    MEM32(esp + 0x3C) = eax;
    MEM32(esp + 0x30) = eax;
    MEM32(esp + 0x40) = eax;
    MEM32(esp + 0x34) = eax;
    MEM32(esp + 0x44) = eax;
    MEM32(esp + 0x48) = esi;
    MEMF(esp + 0x4C) = xmm0; /* movss */
    MEM16(esp + 0x50) = LO16(esi);
    MEM16(esp + 0x52) = LO16(esi);
    MEM16(esp + 0x54) = LO16(esi);
    MEM16(esp + 0x56) = LO16(esi);
    MEM8(esp + 0x58) = LO8(ecx);
    MEM8(esp + 0x59) = LO8(ecx);
    MEM8(esp + 0x5A) = LO8(ecx);
    MEM8(esp + 0x5B) = LO8(ecx);
    MEM8(esp + 0x5C) = 0xA;
    edx = MEM32(esp + 0x18C);
    PUSH32(esp, edx);
    PUSH32(esp, eax);
    PUSH32(esp, esi);
    PUSH32(esp, esi);
    MEM8(esp + 0x6D) = LO8(eax);
    PUSH32(esp, 0x1E);
    eax = esp + 0x18;
    PUSH32(esp, 0x68);
    PUSH32(esp, eax);
    SET_LO8(edx, 0); /* xor self */
    eax = esp + 0x88;
    PUSH32(esp, 0); sub_00149680(); /* call 0x00149680 */

loc_0018B46F: ;
    esp = esp + 0x1C;
    (void)0; /* cmp eax, esi - flags set for next jcc */
    POP32(esp, esi);
    if (CMP_EQ(eax, esi)) goto loc_0018B490; /* je: equal / zero */

loc_0018B477: ;
    edx = MEM32(esp + 0x60);
    ecx = eax + 0x36C;
    MEM32(ecx) = edi;
    MEM32(ecx + 4) = edx;
    edx = MEM32(esp + 0x184);
    MEM32(ecx + 8) = edx;

loc_0018B490: ;
    esp = esp + 0x17C;
    esp += 4; return; /* ret */

}

/**
 * sub_0018B4A0
 * Original: 0x0018B4A0 - 0x0018B529 (137 bytes, 37 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0018B4A0(void)
{
    int _flags = 0; /* fallback flag var */
    float xmm0, xmm1;

loc_0018B4A0: ;
    eax = MEM32(esp + 4);
    ecx = MEM32(eax + 0x374);
    if (TEST_Z(MEM8(ecx + 0x328), 1)) { sub_0018B529(); return; } /* je: equal / zero */

loc_0018B4B3: ;
    xmm0 = MEMF(0x5A0060); /* movss */
    PUSH32(esp, ebx);
    PUSH32(esp, esi);
    PUSH32(esp, edi);
    edx = ecx + 0x40;
    esi = eax + 0x40;
    edi = edx;
    ebx = MEM32(edi);
    MEM32(esi) = ebx;
    ebx = MEM32(edi + 4);
    MEM32(esi + 4) = ebx;
    edi = MEM32(edi + 8);
    MEM32(esi + 8) = edi;
    xmm1 = MEMF(ecx + 0x340); /* movss */
    xmm1 = xmm1 * xmm0; /* mulss */
    xmm1 = xmm1 + MEMF(edx); /* addss */
    MEMF(eax + 0x4C) = xmm1; /* movss */
    xmm1 = MEMF(ecx + 0x344); /* movss */
    xmm1 = xmm1 * xmm0; /* mulss */
    xmm1 = xmm1 + MEMF(ecx + 0x44); /* addss */
    MEMF(eax + 0x50) = xmm1; /* movss */
    xmm1 = MEMF(ecx + 0x348); /* movss */
    xmm1 = xmm1 * xmm0; /* mulss */
    xmm1 = xmm1 + MEMF(ecx + 0x48); /* addss */
    ecx = MEM32(eax + 0x64);
    POP32(esp, edi);
    ecx = ecx | 6;
    POP32(esp, esi);
    MEMF(eax + 0x54) = xmm1; /* movss */
    MEM32(eax + 0x64) = ecx;
    POP32(esp, ebx);
    eax = 1;
    esp += 4; return; /* ret */

}

/**
 * sub_0018B540
 * Original: 0x0018B540 - 0x0018B55A (26 bytes, 6 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0018B540(void)
{

loc_0018B540: ;
    eax = MEM32(esp + 4);
    eax = MEM32(eax + 0x7C);
    ecx = ZX8(MEM8(eax + 0xC));
    edx = MEM32(eax + 8);
    MEM32(edx + ecx * 4 + 0x32C) = 0;
    esp += 4; return; /* ret */

}

/**
 * sub_0018B560
 * Original: 0x0018B560 - 0x0018B590 (48 bytes, 13 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0018B560(void)
{
    uint32_t ebp;
    int _flags = 0; /* fallback flag var */
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_0018B560: ;
    PUSH32(esp, esi);
    esi = MEM32(esp + 8);
    eax = MEM32(esi + 0x4C);
    MEM32(eax + 0x334) = 0;
    eax = esi + 0x3C;
    PUSH32(esp, 0); sub_001126F0(); /* call 0x001126F0 */

loc_0018B57A: ;
    SET_LO8(eax, MEM8(0x8472BD));
    if (TEST_NZ(LO8(eax), LO8(eax))) { sub_0018B590(); return; } /* jne: not equal / not zero */

loc_0018B583: ;
    eax = esi;
    edx = 1;
    POP32(esp, esi);
    g_seh_ebp = ebp; sub_000DA5E0(); return; /* tail jmp 0x000DA5E0 */

}

/**
 * sub_0018B5A0
 * Original: 0x0018B5A0 - 0x0018B5C5 (37 bytes, 11 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0018B5A0(void)
{

loc_0018B5A0: ;
    PUSH32(esp, esi);
    esi = MEM32(esp + 8);
    eax = MEM32(esi + 0x4C);
    MEM32(eax + 0x334) = 0;
    eax = esi + 0x3C;
    PUSH32(esp, 0); sub_001126F0(); /* call 0x001126F0 */

loc_0018B5BA: ;
    PUSH32(esp, esi);
    PUSH32(esp, 0); sub_000DAE40(); /* call 0x000DAE40 */

loc_0018B5C0: ;
    esp = esp + 4;
    POP32(esp, esi);
    esp += 4; return; /* ret */

}

/**
 * sub_0018B5D0
 * Original: 0x0018B5D0 - 0x0018B600 (48 bytes, 12 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0018B5D0(void)
{
    uint32_t ebp;
    int _flags = 0; /* fallback flag var */
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_0018B5D0: ;
    PUSH32(esp, ebx);
    ebx = MEM32(esp + 8);
    eax = MEM32(ebx + 0x374);
    MEM32(eax + 0x338) = 0;
    PUSH32(esp, 0); sub_0014FD70(); /* call 0x0014FD70 */

loc_0018B5EA: ;
    SET_LO8(eax, MEM8(0x8472BD));
    if (TEST_NZ(LO8(eax), LO8(eax))) { sub_0018B600(); return; } /* jne: not equal / not zero */

loc_0018B5F3: ;
    eax = ebx;
    edx = 1;
    POP32(esp, ebx);
    g_seh_ebp = ebp; sub_000DA5E0(); return; /* tail jmp 0x000DA5E0 */

}

/**
 * sub_0018B610
 * Original: 0x0018B610 - 0x0018B635 (37 bytes, 10 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0018B610(void)
{

loc_0018B610: ;
    PUSH32(esp, ebx);
    ebx = MEM32(esp + 8);
    eax = MEM32(ebx + 0x374);
    MEM32(eax + 0x338) = 0;
    PUSH32(esp, 0); sub_0014FD70(); /* call 0x0014FD70 */

loc_0018B62A: ;
    PUSH32(esp, ebx);
    PUSH32(esp, 0); sub_000DAE40(); /* call 0x000DAE40 */

loc_0018B630: ;
    esp = esp + 4;
    POP32(esp, ebx);
    esp += 4; return; /* ret */

}

/**
 * sub_0018B640
 * Original: 0x0018B640 - 0x0018B665 (37 bytes, 8 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0018B640(void)
{
    uint32_t ebp;
    int _flags = 0; /* fallback flag var */
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_0018B640: ;
    eax = MEM32(esp + 4);
    ecx = MEM32(eax + 0x38);
    MEM32(ecx + 0x33C) = 0;
    SET_LO8(ecx, MEM8(0x8472BD));
    if (TEST_NZ(LO8(ecx), LO8(ecx))) { sub_0018B665(); return; } /* jne: not equal / not zero */

loc_0018B65B: ;
    edx = 1;
    g_seh_ebp = ebp; sub_000DA5E0(); return; /* tail jmp 0x000DA5E0 */

}

/**
 * sub_0018B670
 * Original: 0x0018B670 - 0x0018B68A (26 bytes, 5 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0018B670(void)
{
    uint32_t ebp;
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_0018B670: ;
    eax = MEM32(esp + 4);
    ecx = MEM32(eax + 0x38);
    MEM32(ecx + 0x33C) = 0;
    MEM32(esp + 4) = eax;
    g_seh_ebp = ebp; sub_000DAE40(); return; /* tail jmp 0x000DAE40 */

}

/**
 * sub_0018B690
 * Original: 0x0018B690 - 0x0018B6C1 (49 bytes, 21 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0018B690(void)
{
    uint32_t ebp;
    int _flags = 0; /* fallback flag var */

loc_0018B690: ;
    PUSH32(esp, ebp);
    ebp = esp;
    esp = esp & 0xFFFFFFF0u;
    esp = esp - 0x338;
    (void)0; /* test ebx, ebx - flags set for next jcc */
    PUSH32(esp, esi);
    PUSH32(esp, edi);
    if (TEST_Z(ebx, ebx)) goto loc_0018B6B9; /* je: equal / zero */

loc_0018B6A2: ;
    if (CMP_A(LO8(eax), 1)) goto loc_0018B6B9; /* ja: above (unsigned >) */

loc_0018B6A6: ;
    ecx = MEM32(ebx + 0x3C8);
    if (TEST_Z(ecx, ecx)) goto loc_0018B6B9; /* je: equal / zero */

loc_0018B6B0: ;
    if (CMP_GE(MEM32(ebx + 0x534), 0x5A)) { sub_0018B6C1(); return; } /* jge: greater or equal (signed >=) */

loc_0018B6B9: ;
    eax = 0; /* xor self */
    POP32(esp, edi);
    POP32(esp, esi);
    esp = ebp;
    POP32(esp, ebp);
    esp += 4; return; /* ret */

}

/**
 * sub_0018BD70
 * Original: 0x0018BD70 - 0x0018BDF8 (136 bytes, 54 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0018BD70(void)
{
    uint32_t ebp;
    int _flags = 0; /* fallback flag var */
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_0018BD70: ;
    ecx = MEM32(esp + 0xC);
    (void)0; /* test ecx, ecx - flags set for next jcc */
    PUSH32(esp, esi);
    esi = MEM32(esp + 8);
    eax = MEM32(esi + 0x7C);
    if (TEST_NZ(ecx, ecx)) goto loc_0018BDCB; /* jne: not equal / not zero */

loc_0018BD80: ;
    ecx = MEM32(esp + 0xC);
    edx = MEM32(ecx);
    if (CMP_EQ(edx, MEM32(eax))) goto loc_0018BD92; /* je: equal / zero */

loc_0018BD8A: ;
    SET_LO8(ecx, MEM8(ecx + 4));
    if (CMP_NE(LO8(ecx), MEM8(eax + 4))) goto loc_0018BDF6; /* jne: not equal / not zero */

loc_0018BD92: ;
    SET_LO8(eax, MEM8(0x8472BD));
    if (TEST_NZ(LO8(eax), LO8(eax))) goto loc_0018BDF6; /* jne: not equal / not zero */

loc_0018BD9B: ;
    edx = esi;
    PUSH32(esp, 0); sub_000DAD90(); /* call 0x000DAD90 */

loc_0018BDA2: ;
    eax = MEM32(esi);
    if (CMP_L(eax, 2)) goto loc_0018BDF6; /* jl: less (signed <) */

loc_0018BDA9: ;
    eax = (uint32_t)((int32_t)eax * (int32_t)0x70);
    eax = MEM32(eax + 0x5906BC);
    if (TEST_Z(eax, eax)) goto loc_0018BDBE; /* je: equal / zero */

loc_0018BDB6: ;
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, esi);
    PUSH32(esp, 0); RECOMP_ICALL_SAFE(eax, _icall_esp); /* indirect call */
    }

loc_0018BDB9: ;
    esp = esp + 4;
    POP32(esp, esi);
    esp += 4; return; /* ret */

loc_0018BDBE: ;
    eax = esi;
    edx = 1;
    POP32(esp, esi);
    g_seh_ebp = ebp; sub_000DA5E0(); return; /* tail jmp 0x000DA5E0 */

loc_0018BDCB: ;
    if (CMP_NE(ecx, 0x2D)) goto loc_0018BDF6; /* jne: not equal / not zero */

loc_0018BDD0: ;
    ecx = MEM32(esp + 0xC);
    edx = MEM32(eax);
    esi = MEM32(ecx);
    if (CMP_NE(edx, esi)) goto loc_0018BDE9; /* jne: not equal / not zero */

loc_0018BDDC: ;
    edx = MEM32(ecx + 4);
    MEM32(eax) = edx;
    SET_LO8(ecx, MEM8(ecx + 9));
    MEM8(eax + 4) = LO8(ecx);
    POP32(esp, esi);
    esp += 4; return; /* ret */

loc_0018BDE9: ;
    if (CMP_NE(edx, MEM32(ecx + 4))) goto loc_0018BDF6; /* jne: not equal / not zero */

loc_0018BDEE: ;
    MEM32(eax) = esi;
    SET_LO8(edx, MEM8(ecx + 8));
    MEM8(eax + 4) = LO8(edx);

loc_0018BDF6: ;
    POP32(esp, esi);
    esp += 4; return; /* ret */

}

/**
 * sub_0018BE00
 * Original: 0x0018BE00 - 0x0018BE9E (158 bytes, 53 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0018BE00(void)
{
    uint32_t ebp;
    int _flags = 0; /* fallback flag var */
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_0018BE00: ;
    eax = MEM32(esp + 0xC);
    (void)0; /* test eax, eax - flags set for next jcc */
    PUSH32(esp, esi);
    esi = MEM32(esp + 8);
    if (TEST_NZ(eax, eax)) goto loc_0018BE5F; /* jne: not equal / not zero */

loc_0018BE0D: ;
    eax = MEM32(esp + 0xC);
    ecx = MEM32(eax);
    if (CMP_EQ(ecx, MEM32(esi + 0x36C))) goto loc_0018BE26; /* je: equal / zero */

loc_0018BE1B: ;
    SET_LO8(edx, MEM8(eax + 4));
    if (CMP_NE(LO8(edx), MEM8(esi + 0x370))) goto loc_0018BE9C; /* jne: not equal / not zero */

loc_0018BE26: ;
    SET_LO8(eax, MEM8(0x8472BD));
    if (TEST_NZ(LO8(eax), LO8(eax))) goto loc_0018BE9C; /* jne: not equal / not zero */

loc_0018BE2F: ;
    edx = esi;
    PUSH32(esp, 0); sub_000DAD90(); /* call 0x000DAD90 */

loc_0018BE36: ;
    eax = MEM32(esi);
    if (CMP_L(eax, 2)) goto loc_0018BE9C; /* jl: less (signed <) */

loc_0018BE3D: ;
    eax = (uint32_t)((int32_t)eax * (int32_t)0x70);
    eax = MEM32(eax + 0x5906BC);
    if (TEST_Z(eax, eax)) goto loc_0018BE52; /* je: equal / zero */

loc_0018BE4A: ;
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, esi);
    PUSH32(esp, 0); RECOMP_ICALL_SAFE(eax, _icall_esp); /* indirect call */
    }

loc_0018BE4D: ;
    esp = esp + 4;
    POP32(esp, esi);
    esp += 4; return; /* ret */

loc_0018BE52: ;
    eax = esi;
    edx = 1;
    POP32(esp, esi);
    g_seh_ebp = ebp; sub_000DA5E0(); return; /* tail jmp 0x000DA5E0 */

loc_0018BE5F: ;
    if (CMP_NE(eax, 0x2D)) goto loc_0018BE9C; /* jne: not equal / not zero */

loc_0018BE64: ;
    eax = MEM32(esp + 0xC);
    ecx = MEM32(esi + 0x36C);
    edx = MEM32(eax);
    if (CMP_NE(ecx, edx)) goto loc_0018BE88; /* jne: not equal / not zero */

loc_0018BE74: ;
    ecx = MEM32(eax + 4);
    MEM32(esi + 0x36C) = ecx;
    SET_LO8(edx, MEM8(eax + 9));
    MEM8(esi + 0x370) = LO8(edx);
    POP32(esp, esi);
    esp += 4; return; /* ret */

loc_0018BE88: ;
    if (CMP_NE(ecx, MEM32(eax + 4))) goto loc_0018BE9C; /* jne: not equal / not zero */

loc_0018BE8D: ;
    MEM32(esi + 0x36C) = edx;
    SET_LO8(eax, MEM8(eax + 8));
    MEM8(esi + 0x370) = LO8(eax);

loc_0018BE9C: ;
    POP32(esp, esi);
    esp += 4; return; /* ret */

}

/**
 * sub_0018BEA0
 * Original: 0x0018BEA0 - 0x0018C008 (360 bytes, 72 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0018BEA0(void)
{
    float xmm0;

loc_0018BEA0: ;
    esp = esp - 0x70;
    xmm0 = MEMF(0x64A2E0); /* movss */
    ecx = MEM32(eax);
    edx = MEM32(eax + 4);
    eax = MEM32(eax + 8);
    MEMF(esp + 0x14) = xmm0; /* movss */
    MEMF(esp + 0x18) = xmm0; /* movss */
    xmm0 = MEMF(0x64A2DC); /* movss */
    MEMF(esp + 0x1C) = xmm0; /* movss */
    xmm0 = MEMF(0x64A1BC); /* movss */
    MEM32(esp + 8) = ecx;
    ecx = 0xFF;
    MEMF(esp + 0x20) = xmm0; /* movss */
    xmm0 = MEMF(0x649060); /* movss */
    MEM32(esp + 0xC) = edx;
    edx = 1;
    MEMF(esp + 0x24) = xmm0; /* movss */
    xmm0 = MEMF(0x648FD8); /* movss */
    PUSH32(esp, ecx);
    MEM16(esp + 0x32) = LO16(ecx);
    MEM8(esp + 0x4B) = LO8(ecx);
    MEM8(esp + 0x4A) = LO8(ecx);
    MEM8(esp + 0x49) = LO8(ecx);
    MEM8(esp + 0x4C) = LO8(ecx);
    MEM8(esp + 0x53) = LO8(ecx);
    MEM8(esp + 0x52) = LO8(ecx);
    MEM8(esp + 0x51) = LO8(ecx);
    MEM8(esp + 0x54) = LO8(ecx);
    MEM8(esp + 0x59) = LO8(ecx);
    MEM32(esp + 0x14) = eax;
    eax = 0; /* xor self */
    MEM16(esp + 0x44) = LO16(edx);
    MEM16(esp + 0x68) = LO16(edx);
    SET_LO8(edx, LO8(edx) | 0xFF);
    ecx = esp + 4;
    MEMF(esp + 0x2C) = xmm0; /* movss */
    xmm0 = MEMF(0x648D14); /* movss */
    PUSH32(esp, ecx);
    MEM32(esp + 8) = 9;
    MEM32(esp + 0xC) = 6;
    MEM16(esp + 0x34) = LO16(eax);
    MEM16(esp + 0x38) = 0xFFE1;
    MEM16(esp + 0x3A) = 0x50;
    MEM32(esp + 0x3C) = 3;
    MEM32(esp + 0x40) = 4;
    MEM16(esp + 0x44) = 0x14;
    MEM16(esp + 0x46) = 0x1E;
    MEM8(esp + 0x4A) = 4;
    MEM8(esp + 0x4B) = 2;
    MEM8(esp + 0x4C) = 3;
    MEM8(esp + 0x53) = LO8(eax);
    MEM8(esp + 0x52) = LO8(eax);
    MEM8(esp + 0x51) = LO8(eax);
    MEM8(esp + 0x54) = LO8(eax);
    MEM8(esp + 0x5B) = LO8(eax);
    MEM8(esp + 0x5A) = LO8(eax);
    MEM8(esp + 0x59) = LO8(eax);
    MEM8(esp + 0x5C) = LO8(eax);
    MEM8(esp + 0x5E) = LO8(eax);
    MEM32(esp + 0x60) = 0x205;
    MEM32(esp + 0x64) = 0x63000;
    MEM16(esp + 0x68) = 8;
    MEM16(esp + 0x6A) = 0x1F;
    MEM8(esp + 0x6E) = LO8(eax);
    MEMF(esp + 0x70) = xmm0; /* movss */
    MEM8(esp + 0x74) = LO8(edx);
    MEM8(esp + 0x75) = LO8(eax);
    MEM8(esp + 0x76) = LO8(edx);
    MEM8(esp + 0x77) = LO8(edx);
    PUSH32(esp, 0); sub_000F4BF0(); /* call 0x000F4BF0 */

loc_0018C004: ;
    esp = esp + 0x78;
    esp += 4; return; /* ret */

}

/**
 * sub_0018C010
 * Original: 0x0018C010 - 0x0018C1DD (461 bytes, 100 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0018C010(void)
{
    int _flags = 0; /* fallback flag var */
    float xmm0, xmm1, xmm5;

loc_0018C010: ;
    esp = esp - 0x90;
    xmm1 = MEMF(0x648EB8); /* movss */
    xmm0 = 0.0f; /* xorps self = zero */
    eax = MEM32(0x595D14);
    ecx = MEM32(0x595D18);
    edx = MEM32(0x595D1C);
    MEMF(esp + 0x54) = xmm1; /* movss */
    MEMF(esp + 0x50) = xmm1; /* movss */
    xmm1 = MEMF(esi + 0x78); /* movss */
    MEMF(esp + 0x58) = xmm1; /* movss */
    xmm1 = MEMF(esi + 0x7C); /* movss */
    PUSH32(esp, ebx);
    ebx = 0xFF;
    MEMF(esp + 0x1C) = xmm0; /* movss */
    MEMF(esp + 0x20) = xmm0; /* movss */
    MEMF(esp + 0x60) = xmm1; /* movss */
    xmm1 = MEMF(esi + 0x80); /* movss */
    MEMF(esp + 0x80) = xmm0; /* movss */
    xmm0 = MEMF(0x648D14); /* movss */
    PUSH32(esp, edi);
    MEM32(esp + 0x44) = 0x303;
    MEM32(esp + 0x48) = 0x2B;
    MEM16(esp + 0x1C) = 0x12C;
    MEM8(esp + 0x28) = LO8(ebx);
    MEM8(esp + 0x29) = 0xD9;
    MEM8(esp + 0x2A) = 0xA0;
    MEM8(esp + 0x2B) = LO8(ebx);
    MEMF(esp + 0x68) = xmm1; /* movss */
    MEM32(esp + 0x6C) = eax;
    MEM32(esp + 0x70) = ecx;
    MEM32(esp + 0x74) = edx;
    MEM32(esp + 0x78) = eax;
    MEM32(esp + 0x7C) = ecx;
    MEM32(esp + 0x80) = edx;
    MEM16(esp + 0x4C) = 1;
    MEM16(esp + 0x4E) = LO16(ebx);
    MEM16(esp + 0x50) = 1;
    MEMF(esp + 0x54) = xmm0; /* movss */
    PUSH32(esp, 0); sub_003E2480(); /* call 0x003E2480 */

loc_0018C0E8: ;
    edi = eax;
    edi = edi & 1;
    edi = edi | 0x980;
    edi = edi << 1;
    PUSH32(esp, 0); sub_003E2480(); /* call 0x003E2480 */

loc_0018C0FA: ;
    eax = eax & 1;
    edi = edi | eax;
    SET_LO8(eax, LO8(eax) | 0xFF);
    edi = edi << 6;
    MEM8(esp + 0x91) = LO8(eax);
    MEM8(esp + 0x92) = LO8(eax);
    SET_LO8(eax, MEM8(esi + 0x10B));
    MEM32(esp + 0x88) = edi;
    edi = 0; /* xor self */
    MEM8(esp + 0x90) = 0x25;
    MEM8(esp + 0x93) = 0xA;
    MEM32(esp + 0x8C) = edi;
    MEM8(esp + 0x94) = LO8(ebx);
    MEM8(esp + 0xC) = LO8(eax);
    PUSH32(esp, 0); sub_003E1D70(); /* call 0x003E1D70 */

loc_0018C148: ;
    xmm5 = MEMF(0x648D30); /* movss */
    xmm0 = xmm0 * xmm5; /* mulss */
    MEMF(esp + 0x10) = xmm0; /* movss */
    PUSH32(esp, 0); sub_003E1D70(); /* call 0x003E1D70 */

loc_0018C15F: ;
    xmm0 = xmm0 * xmm5; /* mulss */
    MEMF(esp + 0x14) = xmm0; /* movss */
    PUSH32(esp, 0); sub_003E1D70(); /* call 0x003E1D70 */

loc_0018C16E: ;
    PUSH32(esp, ebx);
    PUSH32(esp, 0x14);
    ecx = 4;
    PUSH32(esp, edi);
    MEM32(esp + 0x38) = ecx;
    eax = 2;
    MEM32(esp + 0x44) = ecx;
    PUSH32(esp, 1);
    ecx = esp + 0x2C;
    xmm0 = xmm0 * xmm5; /* mulss */
    MEMF(esp + 0x28) = xmm0; /* movss */
    MEM32(esp + 0x40) = eax;
    MEM32(esp + 0x44) = edi;
    MEM32(esp + 0x4C) = eax;
    MEM32(esp + 0x50) = edi;
    PUSH32(esp, ecx);
    PUSH32(esp, 0); sub_00105450(); /* call 0x00105450 */

loc_0018C1AA: ;
    esp = esp + 0x14;
    (void)0; /* cmp eax, edi - flags set for next jcc */
    POP32(esp, edi);
    POP32(esp, ebx);
    if (CMP_EQ(eax, edi)) goto loc_0018C1D6; /* je: equal / zero */

loc_0018C1B3: ;
    edx = MEM32(esp + 4);
    ecx = MEM32(esp + 8);
    eax = eax + 0x170;
    MEM32(eax) = esi;
    MEM32(eax + 4) = edx;
    edx = MEM32(esp + 0xC);
    MEM32(eax + 8) = ecx;
    ecx = MEM32(esp + 0x10);
    MEM32(eax + 0xC) = edx;
    MEM32(eax + 0x10) = ecx;

loc_0018C1D6: ;
    esp = esp + 0x90;
    esp += 4; return; /* ret */

}

/**
 * sub_0018C1E0
 * Original: 0x0018C1E0 - 0x0018C1FD (29 bytes, 9 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0018C1E0(void)
{
    int _flags = 0; /* fallback flag var */

loc_0018C1E0: ;
    PUSH32(esp, esi);
    esi = MEM32(esp + 8);
    eax = MEM32(esi + 0x170);
    SET_LO8(ecx, MEM8(eax + 0x10B));
    if (CMP_EQ(LO8(ecx), MEM8(esi + 0x174))) { sub_0018C1FD(); return; } /* je: equal / zero */

loc_0018C1F9: ;
    SET_LO8(eax, 0); /* xor self */
    POP32(esp, esi);
    esp += 4; return; /* ret */

}

/**
 * sub_0018C350
 * Original: 0x0018C350 - 0x0018C398 (72 bytes, 23 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0018C350(void)
{
    int _flags = 0; /* fallback flag var */

loc_0018C350: ;
    eax = MEM32(esp + 0xC);
    (void)0; /* cmp eax, 0x2D - flags set for next jcc */
    PUSH32(esp, esi);
    esi = MEM32(esp + 8);
    if (CMP_NE(eax, 0x2D)) { sub_0018C398(); return; } /* jne: not equal / not zero */

loc_0018C35E: ;
    eax = MEM32(esp + 0xC);
    ecx = MEM32(esi + 0x170);
    edx = MEM32(eax);
    if (CMP_NE(ecx, edx)) goto loc_0018C382; /* jne: not equal / not zero */

loc_0018C36E: ;
    ecx = MEM32(eax + 4);
    MEM32(esi + 0x170) = ecx;
    SET_LO8(edx, MEM8(eax + 9));
    MEM8(esi + 0x174) = LO8(edx);

loc_0018C380: ;
    POP32(esp, esi);
    esp += 4; return; /* ret */

loc_0018C382: ;
    if (CMP_NE(ecx, MEM32(eax + 4))) goto loc_0018C380; /* jne: not equal / not zero */

loc_0018C387: ;
    MEM32(esi + 0x170) = edx;
    SET_LO8(eax, MEM8(eax + 8));
    MEM8(esi + 0x174) = LO8(eax);
    POP32(esp, esi);
    esp += 4; return; /* ret */

}

/**
 * sub_0018C400
 * Original: 0x0018C400 - 0x0018C4B5 (181 bytes, 47 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0018C400(void)
{
    int _flags = 0; /* fallback flag var */
    float xmm0;

loc_0018C400: ;
    esp = esp - 0x18;
    xmm0 = 0.0f; /* xorps self = zero */
    SET_LO8(eax, MEM8(esi + 0x10B));
    MEMF(esp + 8) = xmm0; /* movss */
    xmm0 = MEMF(esi + 0x78); /* movss */
    MEMF(esp + 0xC) = xmm0; /* movss */
    xmm0 = MEMF(esi + 0x7C); /* movss */
    MEM8(esp + 4) = LO8(eax);
    MEMF(esp + 0x10) = xmm0; /* movss */
    xmm0 = MEMF(esi + 0x80); /* movss */
    PUSH32(esp, 0xFF);
    PUSH32(esp, 0x2A);
    eax = 0x64;
    MEMF(esp + 0x1C) = xmm0; /* movss */
    PUSH32(esp, 0); sub_000D9C60(); /* call 0x000D9C60 */

loc_0018C44B: ;
    esp = esp + 8;
    if (TEST_Z(eax, eax)) goto loc_0018C4B1; /* je: equal / zero */

loc_0018C452: ;
    xmm0 = MEMF(0x64925C); /* movss */
    SET_LO8(ecx, LO8(ecx) | 0xFF);
    MEM8(eax + 0x38) = LO8(ecx);
    MEM8(eax + 0x3A) = LO8(ecx);
    MEMF(eax + 0x30) = xmm0; /* movss */
    MEMF(eax + 0x34) = xmm0; /* movss */
    MEM8(eax + 0x39) = 0x4C;
    MEM8(eax + 0x2C) = 0;
    MEM8(eax + 0x3B) = 0x3A;
    edx = eax + 0x3C;
    ecx = 0; /* xor self */
    MEM32(edx) = ecx;
    MEM32(edx + 4) = ecx;
    MEM32(edx + 8) = ecx;
    MEM32(edx + 0xC) = ecx;
    ecx = MEM32(esp + 4);
    edx = MEM32(esp + 8);
    eax = eax + 0x4C;
    MEM32(eax) = esi;
    MEM32(eax + 4) = ecx;
    ecx = MEM32(esp + 0xC);
    MEM32(eax + 8) = edx;
    edx = MEM32(esp + 0x10);
    MEM32(eax + 0xC) = ecx;
    ecx = MEM32(esp + 0x14);
    MEM32(eax + 0x10) = edx;
    MEM32(eax + 0x14) = ecx;

loc_0018C4B1: ;
    esp = esp + 0x18;
    esp += 4; return; /* ret */

}

/**
 * sub_0018C4C0
 * Original: 0x0018C4C0 - 0x0018C856 (918 bytes, 202 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0018C4C0(void)
{
    uint32_t ebp;
    int _flags = 0; /* fallback flag var */
    float xmm0, xmm1, xmm2, xmm5, xmm6, xmm7;
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_0018C4C0: ;
    esp = esp - 0xA4;
    PUSH32(esp, ebx);
    PUSH32(esp, esi);
    PUSH32(esp, edi);
    edi = MEM32(esp + 0xB4);
    eax = MEM32(edi + 0x4C);
    ecx = edi + 0x58;
    edx = ecx;
    esi = MEM32(edx);
    MEM32(esp + 0xC) = esi;
    esi = MEM32(edx + 4);
    edx = MEM32(edx + 8);
    MEM32(esp + 0x14) = edx;
    edx = MEM32(eax + 0x64);
    (void)0; /* test edx, edx - flags set for next jcc */
    MEM32(esp + 0x10) = esi;
    if (TEST_Z(edx, edx)) goto loc_0018C83F; /* je: equal / zero */

loc_0018C4F7: ;
    SET_LO8(edx, MEM8(eax + 0x10B));
    if (CMP_NE(LO8(edx), MEM8(edi + 0x50))) goto loc_0018C83F; /* jne: not equal / not zero */

loc_0018C506: ;
    edx = MEM32(eax + 0x78);
    MEM32(ecx) = edx;
    edx = MEM32(eax + 0x7C);
    xmm5 = MEMF(ecx); /* movss */
    xmm5 = xmm5 - MEMF(esp + 0xC); /* subss */
    MEM32(edi + 0x5C) = edx;
    xmm7 = MEMF(eax + 0x80); /* movss */
    xmm6 = MEMF(edi + 0x5C); /* movss */
    xmm6 = xmm6 - MEMF(esp + 0x10); /* subss */
    MEMF(edi + 0x60) = xmm7; /* movss */
    xmm7 = xmm7 - MEMF(esp + 0x14); /* subss */
    MEMF(esp + 0x28) = xmm5; /* movss */
    MEMF(esp + 0x2C) = xmm6; /* movss */
    MEMF(esp + 0x30) = xmm7; /* movss */
    PUSH32(esp, 0); sub_003E1D70(); /* call 0x003E1D70 */

loc_0018C550: ;
    xmm0 = xmm0 * MEMF(0x649C18); /* mulss */
    xmm0 = xmm0 + MEMF(0x649EA8); /* addss */
    xmm0 = xmm0 * MEMF(0x7FA24C); /* mulss */
    xmm0 = xmm0 + MEMF(edi + 0x54); /* addss */
    /* comiss xmm0, MEMF(0x648D14) - sets EFLAGS */
    MEMF(edi + 0x54) = xmm0; /* movss */
    if ((xmm0 <= MEMF(0x648D14))) goto loc_0018C84C; /* jbe: below or equal (unsigned <=) */

loc_0018C57F: ;
    xmm0 = MEMF(0x649EA4); /* movss */
    xmm1 = MEMF(0x649EA0); /* movss */
    ecx = 0x23;
    SET_LO8(eax, LO8(eax) | 0xFF);
    MEMF(esp + 0x24) = xmm0; /* movss */
    xmm0 = 0.0f; /* xorps self = zero */
    PUSH32(esp, ebp);
    MEM32(esp + 0x60) = 0x303;
    MEM32(esp + 0x64) = 0x6C;
    MEMF(esp + 0x3C) = xmm0; /* movss */
    MEMF(esp + 0x40) = xmm0; /* movss */
    MEM16(esp + 0x68) = LO16(ecx);
    MEM16(esp + 0x6A) = 7;
    esi = 0x90DE07;
    MEM8(esp + 0xAC) = 0x20;
    MEM8(esp + 0xAD) = LO8(eax);
    MEM8(esp + 0xAE) = LO8(eax);
    MEM8(esp + 0xAF) = 0;
    MEM16(esp + 0x6C) = LO16(ecx);
    MEMF(esp + 0x70) = xmm1; /* movss */
    MEM8(esp + 0x44) = 0x57;
    MEM8(esp + 0x45) = 0x55;
    MEM8(esp + 0x46) = 0x5A;
    MEMF(esp + 0x88) = xmm0; /* movss */
    MEMF(esp + 0x8C) = xmm0; /* movss */
    MEMF(esp + 0x90) = xmm0; /* movss */
    ebp = 2;
    goto loc_0018C640;

loc_0018C627: ;
    xmm6 = MEMF(esp + 0x30); /* movss */
    xmm5 = MEMF(esp + 0x2C); /* movss */
    xmm7 = MEMF(esp + 0x34); /* movss */
    /* nop */

loc_0018C640: ;
    PUSH32(esp, 0); sub_003E1D70(); /* call 0x003E1D70 */

loc_0018C645: ;
    xmm1 = xmm0; /* movaps */
    xmm1 = xmm1 * xmm5; /* mulss */
    xmm1 = xmm1 + MEMF(esp + 0x10); /* addss */
    MEMF(esp + 0x7C) = xmm1; /* movss */
    xmm1 = xmm0; /* movaps */
    xmm0 = xmm0 * xmm7; /* mulss */
    xmm0 = xmm0 + MEMF(esp + 0x18); /* addss */
    MEMF(esp + 0x84) = xmm0; /* movss */
    xmm0 = MEMF(0x7FA248); /* movss */
    xmm1 = xmm1 * xmm6; /* mulss */
    xmm1 = xmm1 + MEMF(esp + 0x14); /* addss */
    xmm2 = xmm0; /* movaps */
    xmm2 = xmm2 * xmm5; /* mulss */
    MEMF(esp + 0x80) = xmm1; /* movss */
    xmm1 = MEMF(0x649274); /* movss */
    xmm2 = xmm2 * xmm1; /* mulss */
    MEMF(esp + 0x94) = xmm2; /* movss */
    xmm2 = xmm0; /* movaps */
    xmm2 = xmm2 * xmm6; /* mulss */
    xmm0 = xmm0 * xmm7; /* mulss */
    xmm2 = xmm2 * xmm1; /* mulss */
    xmm0 = xmm0 * xmm1; /* mulss */
    MEMF(esp + 0x98) = xmm2; /* movss */
    MEMF(esp + 0x9C) = xmm0; /* movss */
    PUSH32(esp, 0); sub_003E2480(); /* call 0x003E2480 */

loc_0018C6CF: ;
    MEM8(esp + 0x1C) = LO8(eax);
    PUSH32(esp, 0); sub_003E2480(); /* call 0x003E2480 */

loc_0018C6D8: ;
    MEM8(esp + 0x1D) = LO8(eax);
    PUSH32(esp, 0); sub_003E2480(); /* call 0x003E2480 */

loc_0018C6E1: ;
    edx = ((int32_t)eax < 0) ? 0xFFFFFFFF : 0; /* cdq */
    ecx = 5;
    { int64_t _dividend = ((int64_t)(int32_t)edx << 32) | eax;
      eax = (uint32_t)((int32_t)(_dividend / (int32_t)ecx));
      edx = (uint32_t)((int32_t)(_dividend % (int32_t)ecx)); }
    SET_LO8(edx, LO8(edx) + 4);
    MEM8(esp + 0x1E) = LO8(edx);
    PUSH32(esp, 0); sub_003E2480(); /* call 0x003E2480 */

loc_0018C6F5: ;
    edx = ((int32_t)eax < 0) ? 0xFFFFFFFF : 0; /* cdq */
    ecx = 5;
    { int64_t _dividend = ((int64_t)(int32_t)edx << 32) | eax;
      eax = (uint32_t)((int32_t)(_dividend / (int32_t)ecx));
      edx = (uint32_t)((int32_t)(_dividend % (int32_t)ecx)); }
    SET_LO8(edx, LO8(edx) + 4);
    MEM8(esp + 0x1F) = LO8(edx);
    PUSH32(esp, 0); sub_003E1D70(); /* call 0x003E1D70 */

loc_0018C709: ;
    xmm5 = MEMF(0x649060); /* movss */
    xmm0 = xmm0 * xmm5; /* mulss */
    MEMF(esp + 0x20) = xmm0; /* movss */
    PUSH32(esp, 0); sub_003E1D70(); /* call 0x003E1D70 */

loc_0018C720: ;
    xmm0 = xmm0 * xmm5; /* mulss */
    MEMF(esp + 0x24) = xmm0; /* movss */
    PUSH32(esp, 0); sub_003E1D70(); /* call 0x003E1D70 */

loc_0018C72F: ;
    xmm0 = xmm0 * MEMF(0x649E9C); /* mulss */
    xmm0 = xmm0 + MEMF(0x649E98); /* addss */
    MEMF(esp + 0xA0) = xmm0; /* movss */
    PUSH32(esp, 0); sub_003E2480(); /* call 0x003E2480 */

loc_0018C74D: ;
    ebx = eax;
    ebx = ebx & 1;
    ebx = ebx << 1;
    PUSH32(esp, 0); sub_003E2480(); /* call 0x003E2480 */

loc_0018C759: ;
    eax = eax & 1;
    ebx = ebx | eax;
    ebx = ebx << 6;
    esi = esi & 0xFFFFFF3Fu;
    esi = esi | ebx;
    MEM32(esp + 0xA4) = esi;
    PUSH32(esp, 0); sub_003E2480(); /* call 0x003E2480 */

loc_0018C775: ;
    edx = ((int32_t)eax < 0) ? 0xFFFFFFFF : 0; /* cdq */
    ecx = 0x47;
    { int64_t _dividend = ((int64_t)(int32_t)edx << 32) | eax;
      eax = (uint32_t)((int32_t)(_dividend / (int32_t)ecx));
      edx = (uint32_t)((int32_t)(_dividend % (int32_t)ecx)); }
    SET_LO8(edx, LO8(edx) + 0x50);
    MEM8(esp + 0x47) = LO8(edx);
    PUSH32(esp, 0); sub_003E2480(); /* call 0x003E2480 */

loc_0018C789: ;
    edx = ((int32_t)eax < 0) ? 0xFFFFFFFF : 0; /* cdq */
    ecx = 0x1F;
    { int64_t _dividend = ((int64_t)(int32_t)edx << 32) | eax;
      eax = (uint32_t)((int32_t)(_dividend / (int32_t)ecx));
      edx = (uint32_t)((int32_t)(_dividend % (int32_t)ecx)); }
    edx = edx + 0x3C;
    MEM16(esp + 0x38) = LO16(edx);
    PUSH32(esp, 0); sub_003E1D70(); /* call 0x003E1D70 */

loc_0018C79E: ;
    xmm0 = xmm0 * MEMF(0x649E94); /* mulss */
    xmm0 = xmm0 + MEMF(0x649E90); /* addss */
    MEMF(esp + 0x78) = xmm0; /* movss */
    MEMF(esp + 0x74) = xmm0; /* movss */
    eax = 4;
    edx = 0; /* xor self */
    SET_LO8(edx, MEM8(edi + 4));
    ebx = 0; /* xor self */
    MEM32(esp + 0x48) = eax;
    MEM32(esp + 0x54) = eax;
    eax = esp + 0x38;
    MEM32(esp + 0x4C) = ebp;
    MEM32(esp + 0x50) = ebx;
    PUSH32(esp, edx);
    PUSH32(esp, 0x10);
    PUSH32(esp, ebx);
    PUSH32(esp, 1);
    PUSH32(esp, eax);
    MEM32(esp + 0x6C) = ebp;
    MEM32(esp + 0x70) = ebx;
    PUSH32(esp, 0); sub_00105450(); /* call 0x00105450 */

loc_0018C7EE: ;
    esp = esp + 0x14;
    if (CMP_EQ(eax, ebx)) goto loc_0018C815; /* je: equal / zero */

loc_0018C7F5: ;
    ecx = MEM32(esp + 0x1C);
    edx = MEM32(esp + 0x20);
    eax = eax + 0x170;
    MEM32(eax) = ecx;
    ecx = MEM32(esp + 0x24);
    MEM32(eax + 4) = edx;
    edx = MEM32(esp + 0x28);
    MEM32(eax + 8) = ecx;
    MEM32(eax + 0xC) = edx;

loc_0018C815: ;
    xmm0 = MEMF(edi + 0x54); /* movss */
    xmm1 = MEMF(0x648D14); /* movss */
    xmm0 = xmm0 - xmm1; /* subss */
    /* comiss xmm0, xmm1 - sets EFLAGS */
    MEMF(edi + 0x54) = xmm0; /* movss */
    if ((xmm0 > xmm1)) goto loc_0018C627; /* ja: above (unsigned >) */

loc_0018C834: ;
    POP32(esp, ebp);
    POP32(esp, edi);
    POP32(esp, esi);
    POP32(esp, ebx);
    esp = esp + 0xA4;
    esp += 4; return; /* ret */

loc_0018C83F: ;
    xmm0 = MEMF(0x648D34); /* movss */
    MEMF(edi + 0x30) = xmm0; /* movss */

loc_0018C84C: ;
    POP32(esp, edi);
    POP32(esp, esi);
    POP32(esp, ebx);
    esp = esp + 0xA4;
    esp += 4; return; /* ret */

}

/**
 * sub_0018C860
 * Original: 0x0018C860 - 0x0018C8CE (110 bytes, 44 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0018C860(void)
{
    uint32_t ebp;
    int _flags = 0; /* fallback flag var */
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_0018C860: ;
    edx = MEM32(esp + 0xC);
    (void)0; /* cmp edx, 0x43 - flags set for next jcc */
    eax = MEM32(esp + 8);
    PUSH32(esp, esi);
    esi = MEM32(esp + 8);
    PUSH32(esp, edi);
    ecx = esi + 0x4C;
    if (CMP_NE(edx, 0x43)) goto loc_0018C8BF; /* jne: not equal / not zero */

loc_0018C876: ;
    edx = MEM32(eax);
    if (CMP_EQ(edx, MEM32(ecx))) goto loc_0018C884; /* je: equal / zero */

loc_0018C87C: ;
    SET_LO8(eax, MEM8(eax + 4));
    if (CMP_NE(LO8(eax), MEM8(ecx + 4))) goto loc_0018C8CB; /* jne: not equal / not zero */

loc_0018C884: ;
    SET_LO8(eax, MEM8(0x8472BD));
    if (TEST_NZ(LO8(eax), LO8(eax))) goto loc_0018C8CB; /* jne: not equal / not zero */

loc_0018C88D: ;
    edx = esi;
    PUSH32(esp, 0); sub_000DAD90(); /* call 0x000DAD90 */

loc_0018C894: ;
    eax = MEM32(esi);
    if (CMP_L(eax, 2)) goto loc_0018C8CB; /* jl: less (signed <) */

loc_0018C89B: ;
    eax = (uint32_t)((int32_t)eax * (int32_t)0x70);
    eax = MEM32(eax + 0x5906BC);
    if (TEST_Z(eax, eax)) goto loc_0018C8B1; /* je: equal / zero */

loc_0018C8A8: ;
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, esi);
    PUSH32(esp, 0); RECOMP_ICALL_SAFE(eax, _icall_esp); /* indirect call */
    }

loc_0018C8AB: ;
    esp = esp + 4;
    POP32(esp, edi);
    POP32(esp, esi);
    esp += 4; return; /* ret */

loc_0018C8B1: ;
    POP32(esp, edi);
    eax = esi;
    edx = 1;
    POP32(esp, esi);
    g_seh_ebp = ebp; sub_000DA5E0(); return; /* tail jmp 0x000DA5E0 */

loc_0018C8BF: ;
    PUSH32(esp, esi);
    edi = ecx + 4;
    PUSH32(esp, 0); sub_000DAEA0(); /* call 0x000DAEA0 */

loc_0018C8C8: ;
    esp = esp + 4;

loc_0018C8CB: ;
    POP32(esp, edi);
    POP32(esp, esi);
    esp += 4; return; /* ret */

}

/**
 * sub_0018C8D0
 * Original: 0x0018C8D0 - 0x0018C91B (75 bytes, 28 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0018C8D0(void)
{
    int _flags = 0; /* fallback flag var */

loc_0018C8D0: ;
    (void)0; /* cmp MEM32(esp + 0xC), 0x43 - flags set for next jcc */
    PUSH32(esp, esi);
    esi = MEM32(esp + 8);
    if (CMP_NE(MEM32(esp + 0xC), 0x43)) goto loc_0018C919; /* jne: not equal / not zero */

loc_0018C8DC: ;
    eax = MEM32(esp + 0xC);
    ecx = MEM32(eax);
    if (CMP_EQ(ecx, MEM32(esi + 0x38))) goto loc_0018C8EF; /* je: equal / zero */

loc_0018C8E7: ;
    SET_LO8(edx, MEM8(eax + 4));
    if (CMP_NE(LO8(edx), MEM8(esi + 0x3C))) goto loc_0018C919; /* jne: not equal / not zero */

loc_0018C8EF: ;
    SET_LO8(eax, MEM8(0x8472BD));
    if (TEST_NZ(LO8(eax), LO8(eax))) goto loc_0018C919; /* jne: not equal / not zero */

loc_0018C8F8: ;
    edx = esi;
    PUSH32(esp, 0); sub_000DAD90(); /* call 0x000DAD90 */

loc_0018C8FF: ;
    eax = MEM32(esi);
    if (CMP_L(eax, 2)) goto loc_0018C919; /* jl: less (signed <) */

loc_0018C906: ;
    eax = (uint32_t)((int32_t)eax * (int32_t)0x70);
    eax = MEM32(eax + 0x5906BC);
    if (TEST_Z(eax, eax)) { sub_0018C91B(); return; } /* je: equal / zero */

loc_0018C913: ;
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, esi);
    PUSH32(esp, 0); RECOMP_ICALL_SAFE(eax, _icall_esp); /* indirect call */
    }

loc_0018C916: ;
    esp = esp + 4;

loc_0018C919: ;
    POP32(esp, esi);
    esp += 4; return; /* ret */

}

/**
 * sub_0018C930
 * Original: 0x0018C930 - 0x0018CB26 (502 bytes, 139 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0018C930(void)
{
    uint32_t ebp;
    int _flags = 0; /* fallback flag var */
    float xmm0;

loc_0018C930: ;
    PUSH32(esp, ebp);
    ebp = esp;
    esp = esp & 0xFFFFFFF0u;
    esp = esp - 0x64;
    PUSH32(esp, ebx);
    SET_LO8(ebx, MEM8(ebp + 8));
    PUSH32(esp, esi);
    esi = eax;
    (void)0; /* test esi, esi - flags set for next jcc */
    PUSH32(esp, edi);
    if (TEST_Z(esi, esi)) goto loc_0018CB1F; /* je: equal / zero */

loc_0018C949: ;
    if (CMP_AE(MEM8(ebp + 0xC), 4)) goto loc_0018CB1F; /* jae: above or equal (unsigned >=) */

loc_0018C953: ;
    if (CMP_AE(LO8(ebx), 2)) goto loc_0018CB1F; /* jae: above or equal (unsigned >=) */

loc_0018C95C: ;
    if (CMP_NE(MEM32(esi + 0x68), 0x23)) goto loc_0018C966; /* jne: not equal / not zero */

loc_0018C962: ;
    SET_LO8(eax, 1);
    goto loc_0018C990;

loc_0018C966: ;
    eax = ZX8(LO8(ebx));
    MEM32(esp + 0x1C) = 0x5F49A0;
    MEM32(esp + 0x20) = 0x5F4998;
    ecx = MEM32(esp + eax * 4 + 0x1C);
    PUSH32(esp, ecx);
    PUSH32(esp, 0); sub_002F7C30(); /* call 0x002F7C30 */

loc_0018C983: ;
    esp = esp + 4;
    if (TEST_Z(LO8(eax), LO8(eax))) goto loc_0018CB1F; /* je: equal / zero */

loc_0018C98E: ;
    SET_LO8(eax, 0); /* xor self */

loc_0018C990: ;
    ecx = MEM32(esi + 0x3C8);
    if (TEST_Z(ecx, ecx)) goto loc_0018CB1F; /* je: equal / zero */

loc_0018C99E: ;
    edx = ZX8(MEM8(ebp + 0xC));
    eax = ZX8(LO8(eax));
    ecx = ZX8(LO8(ebx));
    edx = edx + eax * 4;
    edx = ecx + edx * 2;
    edi = edx + edx * 2;
    eax = ecx + eax * 2;
    edx = esp + 0x24;
    ecx = esp + 0x30;
    MEM32(esp + 0x10) = edx;
    edx = MEM32(eax * 4 + 0x6B786C);
    edi = edi << 2;
    PUSH32(esp, ecx);
    ebx = edi + 0x599130;
    PUSH32(esp, edx);
    MEM32(esp + 0x1C) = ebx;
    MEM32(esp + 0x24) = eax;
    PUSH32(esp, 0); sub_002F7810(); /* call 0x002F7810 */

loc_0018C9DF: ;
    eax = esp + 0x38;
    PUSH32(esp, eax);
    ecx = esp + 0x1C;
    PUSH32(esp, ecx);
    eax = 1;
    ecx = esp + 0x24;
    PUSH32(esp, 0); sub_00111C60(); /* call 0x00111C60 */

loc_0018C9F7: ;
    esp = esp + 0x10;
    MEM8(esp + 0x14) = 3;
    MEM8(esp + 0x15) = 0xFF;
    PUSH32(esp, 0); sub_003E2480(); /* call 0x003E2480 */

loc_0018CA09: ;
    edx = ((int32_t)eax < 0) ? 0xFFFFFFFF : 0; /* cdq */
    ecx = 5;
    { int64_t _dividend = ((int64_t)(int32_t)edx << 32) | eax;
      eax = (uint32_t)((int32_t)(_dividend / (int32_t)ecx));
      edx = (uint32_t)((int32_t)(_dividend % (int32_t)ecx)); }
    MEM8(esp + 0x1A) = 0;
    edx = edx + 4;
    MEM16(esp + 0x16) = LO16(edx);
    edx = MEM32(ebp + 0x10);
    PUSH32(esp, edx);
    PUSH32(esp, 0);
    PUSH32(esp, 0x7F);
    PUSH32(esp, 0x40000000);
    PUSH32(esp, 0x40000000);
    PUSH32(esp, 0x40000000);
    PUSH32(esp, 0); sub_003E2480(); /* call 0x003E2480 */

loc_0018CA3A: ;
    edx = ((int32_t)eax < 0) ? 0xFFFFFFFF : 0; /* cdq */
    ecx = 0x33;
    { int64_t _dividend = ((int64_t)(int32_t)edx << 32) | eax;
      eax = (uint32_t)((int32_t)(_dividend / (int32_t)ecx));
      edx = (uint32_t)((int32_t)(_dividend % (int32_t)ecx)); }
    PUSH32(esp, ecx);
    ecx = esp + 0x40;
    edx = edx + 0x50;
    xmm0 = (float)(int32_t)edx; /* cvtsi2ss */
    edx = esp + 0x30;
    MEMF(esp) = xmm0; /* movss */
    PUSH32(esp, edx);
    SET_LO8(edx, 0); /* xor self */
    PUSH32(esp, 0); sub_0011E790(); /* call 0x0011E790 */

loc_0018CA5F: ;
    esp = esp + 0x20;
    PUSH32(esp, 0); sub_003E1D70(); /* call 0x003E1D70 */

loc_0018CA67: ;
    xmm0 = xmm0 * MEMF(0x64A638); /* mulss */
    xmm0 = xmm0 + MEMF(0x64A634); /* addss */
    xmm0 = xmm0 * MEMF(0x648D2C); /* mulss */
    MEMF(esp + 0x18) = xmm0; /* movss */
    PUSH32(esp, 0); sub_003E1D70(); /* call 0x003E1D70 */

loc_0018CA8A: ;
    xmm0 = xmm0 * MEMF(0x64A630); /* mulss */
    xmm0 = xmm0 + MEMF(0x64A62C); /* addss */
    xmm0 = xmm0 * MEMF(0x648D80); /* mulss */
    MEMF(esp + 0x14) = xmm0; /* movss */
    PUSH32(esp, 0); sub_003E2480(); /* call 0x003E2480 */

loc_0018CAAD: ;
    eax = MEM32(ebp + 0x10);
    PUSH32(esp, eax);
    PUSH32(esp, 0xFFFFFFFFu);
    PUSH32(esp, 0);
    ecx = esp + 0x30;
    PUSH32(esp, 0xFF);
    PUSH32(esp, ecx);
    PUSH32(esp, 0); sub_003E1D70(); /* call 0x003E1D70 */

loc_0018CAC4: ;
    xmm0 = xmm0 * MEMF(0x64A628); /* mulss */
    xmm0 = xmm0 + MEMF(0x64A624); /* addss */
    PUSH32(esp, ecx);
    MEMF(esp) = xmm0; /* movss */
    PUSH32(esp, 0xFF);
    PUSH32(esp, 0); sub_003E2480(); /* call 0x003E2480 */

loc_0018CAE4: ;
    edx = ((int32_t)eax < 0) ? 0xFFFFFFFF : 0; /* cdq */
    ecx = 6;
    { int64_t _dividend = ((int64_t)(int32_t)edx << 32) | eax;
      eax = (uint32_t)((int32_t)(_dividend / (int32_t)ecx));
      edx = (uint32_t)((int32_t)(_dividend % (int32_t)ecx)); }
    eax = MEM32(esp + 0x38);
    ecx = MEM32(eax * 4 + 0x6B786C);
    eax = esi;
    edi = edi + 0x5991F0;
    edx = edx + 8;
    PUSH32(esp, edx);
    edx = esp + 0x34;
    PUSH32(esp, edx);
    PUSH32(esp, ecx);
    PUSH32(esp, 0); sub_002F77D0(); /* call 0x002F77D0 */

loc_0018CB0E: ;
    esp = esp + 4;
    PUSH32(esp, eax);
    PUSH32(esp, esi);
    eax = edi;
    ecx = ebx;
    PUSH32(esp, 0); sub_00185E10(); /* call 0x00185E10 */

loc_0018CB1C: ;
    esp = esp + 0x2C;

loc_0018CB1F: ;
    POP32(esp, edi);
    POP32(esp, esi);
    POP32(esp, ebx);
    esp = ebp;
    POP32(esp, ebp);
    esp += 4; return; /* ret */

}

/**
 * sub_0018CB30
 * Original: 0x0018CB30 - 0x0018CB4F (31 bytes, 10 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0018CB30(void)
{
    int _flags = 0; /* fallback flag var */

loc_0018CB30: ;
    esp = esp - 0x14;
    PUSH32(esp, 0xFF);
    eax = eax + 0x13C;
    PUSH32(esp, 0x5E);
    PUSH32(esp, 0); sub_000D9C60(); /* call 0x000D9C60 */

loc_0018CB44: ;
    esp = esp + 8;
    if (TEST_NZ(eax, eax)) { sub_0018CB4F(); return; } /* jne: not equal / not zero */

loc_0018CB4B: ;
    esp = esp + 0x14;
    esp += 4; return; /* ret */

}

/**
 * sub_0018CBF0
 * Original: 0x0018CBF0 - 0x0018CC0E (30 bytes, 9 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0018CBF0(void)
{
    uint32_t ebp;
    int _flags = 0; /* fallback flag var */
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_0018CBF0: ;
    ecx = MEM32(esp + 4);
    eax = ZX8(MEM8(ecx + 0x54));
    if (TEST_S(eax, eax)) goto loc_0018CC01; /* jl: less (signed <) */

loc_0018CBFC: ;
    if (CMP_L(eax, 2)) goto loc_0018CC03; /* jl: less (signed <) */

loc_0018CC01: ;
    eax = 0; /* xor self */

loc_0018CC03: ;
    MEM32(esp + 4) = ecx;
    g_seh_ebp = ebp; RECOMP_ITAIL(MEM32(eax * 4 + 0x5992BC)); return; /* indirect tail jmp */

}

/**
 * sub_0018CC60
 * Original: 0x0018CC60 - 0x0018CC7E (30 bytes, 12 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0018CC60(void)
{

loc_0018CC60: ;
    PUSH32(esp, ebx);
    PUSH32(esp, esi);
    esi = MEM32(esp + 0xC);
    ebx = MEM32(esi + 0x13C);
    PUSH32(esp, esi);
    PUSH32(esp, 0); sub_001C4D90(); /* call 0x001C4D90 */

loc_0018CC72: ;
    PUSH32(esp, esi);
    PUSH32(esp, 0); sub_000DAE40(); /* call 0x000DAE40 */

loc_0018CC78: ;
    esp = esp + 8;
    POP32(esp, esi);
    POP32(esp, ebx);
    esp += 4; return; /* ret */

}

/**
 * sub_0018CC80
 * Original: 0x0018CC80 - 0x0018CDC8 (328 bytes, 90 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0018CC80(void)
{
    int _flags = 0; /* fallback flag var */
    float xmm0, xmm1, xmm2, xmm3, xmm4, xmm5;

loc_0018CC80: ;
    esp = esp - 0x10;
    PUSH32(esp, esi);
    esi = MEM32(esp + 0x18);
    if (TEST_Z(MEM8(esi + 0x2C), 1)) goto loc_0018CDC3; /* je: equal / zero */

loc_0018CC92: ;
    SET_LO8(eax, MEM8(esi + 0x4C));
    (void)0; /* cmp LO8(eax), 0xFF - flags set for next jcc */
    xmm3 = MEMF(esi + 0x34); /* movss */
    xmm4 = MEMF(esi + 0x38); /* movss */
    xmm5 = MEMF(esi + 0x3C); /* movss */
    xmm3 = xmm3 - MEMF(esi + 0x40); /* subss */
    xmm4 = xmm4 - MEMF(esi + 0x44); /* subss */
    xmm5 = xmm5 - MEMF(esi + 0x48); /* subss */
    MEMF(esp + 8) = xmm3; /* movss */
    MEMF(esp + 0xC) = xmm4; /* movss */
    MEMF(esp + 0x10) = xmm5; /* movss */
    if (CMP_EQ(LO8(eax), 0xFF)) goto loc_0018CCF1; /* je: equal / zero */

loc_0018CCC9: ;
    eax = SX8(LO8(eax));
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, esi);
    PUSH32(esp, 0); RECOMP_ICALL_SAFE(MEM32(eax * 4 + 0x6B787C), _icall_esp); /* indirect call */
    }

loc_0018CCD4: ;
    esp = esp + 4;
    if (TEST_Z(LO8(eax), LO8(eax))) goto loc_0018CD88; /* je: equal / zero */

loc_0018CCDF: ;
    xmm3 = MEMF(esp + 8); /* movss */
    xmm4 = MEMF(esp + 0xC); /* movss */
    xmm5 = MEMF(esp + 0x10); /* movss */

loc_0018CCF1: ;
    xmm0 = MEMF(esi + 0x34); /* movss */
    xmm0 = xmm0 - MEMF(esi + 0x40); /* subss */
    xmm1 = MEMF(esi + 0x38); /* movss */
    xmm2 = MEMF(esi + 0x3C); /* movss */
    xmm1 = xmm1 - MEMF(esi + 0x44); /* subss */
    xmm2 = xmm2 - MEMF(esi + 0x48); /* subss */
    /* ucomiss xmm0, xmm3 - sets EFLAGS */
    /* lahf - load AH from flags (used in FPU compare idiom) */
    (void)0; /* test HI8(eax), 0x44 - flags set for next jcc */
    MEMF(esp + 8) = xmm0; /* movss */
    MEMF(esp + 0xC) = xmm1; /* movss */
    MEMF(esp + 0x10) = xmm2; /* movss */
    if (1 /* jp after test - parity */) goto loc_0018CD40; /* jp: parity */

loc_0018CD2A: ;
    /* ucomiss xmm1, xmm4 - sets EFLAGS */
    /* lahf - load AH from flags (used in FPU compare idiom) */
    if (1 /* jp after test - parity */) goto loc_0018CD40; /* jp: parity */

loc_0018CD33: ;
    /* ucomiss xmm2, xmm5 - sets EFLAGS */
    /* lahf - load AH from flags (used in FPU compare idiom) */
    if (1 /* jnp after test - parity */) goto loc_0018CDC3; /* jnp: not parity */

loc_0018CD40: ;
    ecx = esp + 8;
    MEM32(esp + 0x18) = ecx;
    edx = MEM32(esp + 0x18);
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
    MEMF(esi + 0x138) = xmm0; /* movss */
    POP32(esp, esi);
    esp = esp + 0x10;
    esp += 4; return; /* ret */

loc_0018CD88: ;
    SET_LO8(eax, MEM8(0x8472BD));
    if (TEST_NZ(LO8(eax), LO8(eax))) goto loc_0018CDC3; /* jne: not equal / not zero */

loc_0018CD91: ;
    edx = esi;
    PUSH32(esp, 0); sub_000DAD90(); /* call 0x000DAD90 */

loc_0018CD98: ;
    eax = MEM32(esi);
    if (CMP_L(eax, 2)) goto loc_0018CDC3; /* jl: less (signed <) */

loc_0018CD9F: ;
    eax = (uint32_t)((int32_t)eax * (int32_t)0x70);
    eax = MEM32(eax + 0x5906BC);
    if (TEST_Z(eax, eax)) goto loc_0018CDB7; /* je: equal / zero */

loc_0018CDAC: ;
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, esi);
    PUSH32(esp, 0); RECOMP_ICALL_SAFE(eax, _icall_esp); /* indirect call */
    }

loc_0018CDAF: ;
    esp = esp + 4;
    POP32(esp, esi);
    esp = esp + 0x10;
    esp += 4; return; /* ret */

loc_0018CDB7: ;
    edx = 1;
    eax = esi;
    PUSH32(esp, 0); sub_000DA5E0(); /* call 0x000DA5E0 */

loc_0018CDC3: ;
    POP32(esp, esi);
    esp = esp + 0x10;
    esp += 4; return; /* ret */

}

/**
 * sub_0018CDD0
 * Original: 0x0018CDD0 - 0x0018D17F (943 bytes, 245 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0018CDD0(void)
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
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_0018CDD0: ;
    esp = esp - 0xC;
    PUSH32(esp, ebx);
    ebx = MEM32(esp + 0x14);
    (void)0; /* test MEM8(ebx + 0x2C), 1 - flags set for next jcc */
    PUSH32(esp, esi);
    esi = MEM32(0x8472C4);
    if (TEST_Z(MEM8(ebx + 0x2C), 1)) goto loc_0018D179; /* je: equal / zero */

loc_0018CDE9: ;
    eax = (uint32_t)(int32_t)SMEM8(0x7FA230);
    ecx = (uint32_t)(int32_t)SMEM16(esp + 0x1C);
    eax = (uint32_t)((int32_t)eax * (int32_t)0x70);
    edx = MEM32(0x8470DC);
    ecx = (uint32_t)((int32_t)ecx * (int32_t)0x770);
    PUSH32(esp, ebp);
    PUSH32(esp, edi);
    edi = eax + ebx + 0x58;
    eax = ecx + edx + 0x330;
    MEM32(esp + 0x20) = eax;
    SET_LO8(eax, MEM8(0x75BB04));
    if (CMP_BE(LO8(eax) & LO8(eax), 0)) goto loc_0018CEB8; /* jbe: below or equal (unsigned <=) */

loc_0018CE22: ;
    ebp = MEM32(0x75BB00);
    eax = MEM32(ebp + 8);
    if (TEST_NZ(eax, eax)) goto loc_0018CE58; /* jne: not equal / not zero */

loc_0018CE2F: ;
    ecx = MEM32(ebp);
    PUSH32(esp, ecx);
    PUSH32(esp, 0x5E0D08);
    PUSH32(esp, 0x14);
    eax = 0; /* xor self */
    PUSH32(esp, 0); sub_0005E4E0(); /* call 0x0005E4E0 */

loc_0018CE41: ;
    esp = esp + 0xC;
    PUSH32(esp, 0); sub_0029CDD0(); /* call 0x0029CDD0 */

loc_0018CE49: ;
    edx = MEM32(0x75BB00);
    MEM32(edx + 8) = eax;
    ebp = MEM32(0x75BB00);

loc_0018CE58: ;
    eax = MEM32(ebp + 0x10);
    if (TEST_NZ(eax, eax)) goto loc_0018CE84; /* jne: not equal / not zero */

loc_0018CE5F: ;
    eax = MEM32(ebp + 8);
    PUSH32(esp, 0); sub_0034F320(); /* call 0x0034F320 */

loc_0018CE67: ;
    MEM32(ebp + 0x10) = eax;
    ebp = MEM32(0x75BB00);
    eax = MEM32(ebp + 0x10);
    if (TEST_NZ(eax, eax)) goto loc_0018CE84; /* jne: not equal / not zero */

loc_0018CE77: ;
    MEM32(ebp + 0x10) = 0xFFFFFFFFu;
    ebp = MEM32(0x75BB00);

loc_0018CE84: ;
    ecx = MEM32(ebp + 0x10);
    if (CMP_NE(ecx, 0xFFFFFFFFu)) goto loc_0018CEAE; /* jne: not equal / not zero */

loc_0018CE8C: ;
    ecx = MEM32(ebp + 4);
    (void)0; /* test ecx, ecx - flags set for next jcc */
    eax = ebp + 4;
    if (TEST_NZ(ecx, ecx)) goto loc_0018CEA9; /* jne: not equal / not zero */

loc_0018CE96: ;
    PUSH32(esp, eax);
    eax = MEM32(ebp);
    PUSH32(esp, eax);
    PUSH32(esp, 0); sub_00075E90(); /* call 0x00075E90 */

loc_0018CEA0: ;
    ebp = MEM32(0x75BB00);
    esp = esp + 8;

loc_0018CEA9: ;
    ebp = MEM32(ebp + 4);
    goto loc_0018CEBA;

loc_0018CEAE: ;
    PUSH32(esp, 0); sub_0034F360(); /* call 0x0034F360 */

loc_0018CEB3: ;
    ebp = MEM32(eax + 4);
    goto loc_0018CEBA;

loc_0018CEB8: ;
    ebp = 0; /* xor self */

loc_0018CEBA: ;
    if (CMP_EQ(MEM32(esi + 0x3838), ebp)) goto loc_0018CECD; /* je: equal / zero */

loc_0018CEC2: ;
    PUSH32(esp, 0); sub_0013C160(); /* call 0x0013C160 */

loc_0018CEC7: ;
    MEM32(esi + 0x3838) = ebp;

loc_0018CECD: ;
    eax = MEM32(esp + 0x20);
    xmm0 = MEMF(ebx + 0x44); /* movss */
    xmm0 = xmm0 - MEMF(eax + 4); /* subss */
    xmm2 = MEMF(ebx + 0x48); /* movss */
    xmm2 = xmm2 - MEMF(eax + 8); /* subss */
    xmm6 = MEMF(ebx + 0x44); /* movss */
    xmm6 = xmm6 - MEMF(ebx + 0x38); /* subss */
    xmm7 = MEMF(ebx + 0x48); /* movss */
    xmm7 = xmm7 - MEMF(ebx + 0x3C); /* subss */
    xmm1 = MEMF(ebx + 0x40); /* movss */
    xmm1 = xmm1 - MEMF(eax); /* subss */
    xmm5 = MEMF(ebx + 0x40); /* movss */
    xmm5 = xmm5 - MEMF(ebx + 0x34); /* subss */
    xmm4 = xmm0; /* movaps */
    xmm4 = xmm4 * xmm7; /* mulss */
    xmm3 = xmm2; /* movaps */
    xmm3 = xmm3 * xmm6; /* mulss */
    xmm3 = xmm3 - xmm4; /* subss */
    xmm4 = xmm1; /* movaps */
    xmm1 = xmm1 * xmm6; /* mulss */
    xmm0 = xmm0 * xmm5; /* mulss */
    xmm0 = xmm0 - xmm1; /* subss */
    xmm4 = xmm4 * xmm7; /* mulss */
    xmm2 = xmm2 * xmm5; /* mulss */
    xmm4 = xmm4 - xmm2; /* subss */
    MEMF(esp + 0x18) = xmm0; /* movss */
    xmm0 = xmm0 * xmm0; /* mulss */
    xmm1 = xmm4; /* movaps */
    xmm1 = xmm1 * xmm4; /* mulss */
    xmm0 = xmm0 + xmm1; /* addss */
    xmm1 = xmm3; /* movaps */
    xmm1 = xmm1 * xmm3; /* mulss */
    xmm0 = xmm0 + xmm1; /* addss */
    xmm1 = 0.0f; /* xorps self = zero */
    /* ucomiss xmm0, xmm1 - sets EFLAGS */
    /* lahf - load AH from flags (used in FPU compare idiom) */
    (void)0; /* test HI8(eax), 0x44 - flags set for next jcc */
    MEMF(esp + 0x10) = xmm3; /* movss */
    MEMF(esp + 0x14) = xmm4; /* movss */
    MEMF(esp + 0x20) = xmm0; /* movss */
    if (1 /* jp after test - parity */) goto loc_0018CF82; /* jp: parity */

loc_0018CF77: ;
    xmm3 = xmm1; /* movaps */
    xmm2 = xmm1; /* movaps */
    xmm0 = xmm1; /* movaps */
    goto loc_0018CFBC;

loc_0018CF82: ;
    fp_push(MEMF(esp + 0x20)); /* fld float */
    fp_top() = sqrt(fp_top()); /* fsqrt */
    /* FPU: fdivr dword ptr [0x64b2ac] */
    fp_push(MEMF(esp + 0x10)); /* fld float */
    fp_st1() *= fp_top(); fp_pop(); /* fmul */
    MEMF(esp + 0x10) = (float)fp_top(); fp_popp(); /* fstp */
    fp_push(MEMF(esp + 0x14)); /* fld float */
    xmm3 = MEMF(esp + 0x10); /* movss */
    fp_st1() *= fp_top(); fp_pop(); /* fmul */
    MEMF(esp + 0x14) = (float)fp_top(); fp_popp(); /* fstp */
    xmm2 = MEMF(esp + 0x14); /* movss */
    fp_st1() *= fp_top(); fp_pop(); /* fmul */
    MEMF(esp + 0x18) = (float)fp_top(); fp_popp(); /* fstp */
    xmm0 = MEMF(esp + 0x18); /* movss */

loc_0018CFBC: ;
    xmm4 = MEMF(ebx + 0x138); /* movss */
    xmm4 = xmm4 * MEMF(ebx + 0x50); /* mulss */
    xmm4 = xmm4 * MEMF(0x648E8C); /* mulss */
    eax = (int32_t)xmm4; /* cvttss2si */
    xmm4 = xmm3; /* movaps */
    xmm4 = xmm4 + MEMF(ebx + 0x40); /* addss */
    ecx = (int32_t)xmm4; /* cvttss2si */
    edx = SX16(LO16(ecx));
    xmm4 = (float)(int32_t)edx; /* cvtsi2ss */
    MEMF(edi) = xmm4; /* movss */
    xmm4 = MEMF(ebx + 0x44); /* movss */
    xmm4 = xmm4 + xmm2; /* addss */
    ecx = (int32_t)xmm4; /* cvttss2si */
    edx = SX16(LO16(ecx));
    xmm4 = (float)(int32_t)edx; /* cvtsi2ss */
    MEMF(edi + 4) = xmm4; /* movss */
    xmm4 = MEMF(ebx + 0x48); /* movss */
    MEMF(edi + 0x10) = xmm1; /* movss */
    MEMF(edi + 0x14) = xmm1; /* movss */
    xmm4 = xmm4 + xmm0; /* addss */
    ecx = (int32_t)xmm4; /* cvttss2si */
    edx = SX16(LO16(ecx));
    xmm4 = (float)(int32_t)edx; /* cvtsi2ss */
    MEMF(edi + 8) = xmm4; /* movss */
    ecx = 0xFF;
    MEM8(edi + 0xF) = LO8(ecx);
    xmm4 = MEMF(ebx + 0x40); /* movss */
    xmm4 = xmm4 - xmm3; /* subss */
    edx = (int32_t)xmm4; /* cvttss2si */
    edx = SX16(LO16(edx));
    xmm4 = (float)(int32_t)edx; /* cvtsi2ss */
    MEMF(edi + 0x1C) = xmm4; /* movss */
    xmm4 = MEMF(ebx + 0x44); /* movss */
    edi = edi + 0x1C;
    xmm4 = xmm4 - xmm2; /* subss */
    edx = (int32_t)xmm4; /* cvttss2si */
    edx = SX16(LO16(edx));
    xmm4 = (float)(int32_t)edx; /* cvtsi2ss */
    MEMF(edi + 4) = xmm4; /* movss */
    xmm4 = MEMF(ebx + 0x48); /* movss */
    MEMF(edi + 0x14) = xmm1; /* movss */
    MEM8(edi + 0xF) = LO8(ecx);
    xmm4 = xmm4 - xmm0; /* subss */
    edx = (int32_t)xmm4; /* cvttss2si */
    edx = SX16(LO16(edx));
    xmm4 = (float)(int32_t)edx; /* cvtsi2ss */
    MEMF(edi + 8) = xmm4; /* movss */
    xmm4 = MEMF(0x64B278); /* movss */
    MEMF(edi + 0x10) = xmm4; /* movss */
    xmm5 = MEMF(ebx + 0x34); /* movss */
    xmm5 = xmm5 - xmm3; /* subss */
    edx = (int32_t)xmm5; /* cvttss2si */
    edx = SX16(LO16(edx));
    edi = edi + 0x1C;
    xmm5 = (float)(int32_t)edx; /* cvtsi2ss */
    MEMF(edi) = xmm5; /* movss */
    xmm5 = MEMF(ebx + 0x38); /* movss */
    xmm5 = xmm5 - xmm2; /* subss */
    edx = (int32_t)xmm5; /* cvttss2si */
    edx = SX16(LO16(edx));
    xmm5 = (float)(int32_t)edx; /* cvtsi2ss */
    MEMF(edi + 4) = xmm5; /* movss */
    xmm5 = MEMF(ebx + 0x3C); /* movss */
    xmm5 = xmm5 - xmm0; /* subss */
    edx = (int32_t)xmm5; /* cvttss2si */
    edx = SX16(LO16(edx));
    MEMF(edi + 0x10) = xmm4; /* movss */
    xmm5 = (float)(int32_t)edx; /* cvtsi2ss */
    MEMF(edi + 8) = xmm5; /* movss */
    MEM8(edi + 0xF) = LO8(ecx);
    xmm4 = (float)(int32_t)eax; /* cvtsi2ss */
    MEMF(edi + 0x14) = xmm4; /* movss */
    xmm5 = MEMF(ebx + 0x34); /* movss */
    xmm5 = xmm5 + xmm3; /* addss */
    eax = (int32_t)xmm5; /* cvttss2si */
    edx = SX16(LO16(eax));
    edi = edi + 0x1C;
    xmm3 = (float)(int32_t)edx; /* cvtsi2ss */
    MEMF(edi) = xmm3; /* movss */
    xmm3 = MEMF(ebx + 0x38); /* movss */
    xmm3 = xmm3 + xmm2; /* addss */
    eax = (int32_t)xmm3; /* cvttss2si */
    edx = SX16(LO16(eax));
    xmm2 = (float)(int32_t)edx; /* cvtsi2ss */
    MEMF(edi + 4) = xmm2; /* movss */
    xmm0 = xmm0 + MEMF(ebx + 0x3C); /* addss */
    eax = (int32_t)xmm0; /* cvttss2si */
    edx = SX16(LO16(eax));
    xmm0 = (float)(int32_t)edx; /* cvtsi2ss */
    MEM8(edi + 0xF) = LO8(ecx);
    MEMF(edi + 8) = xmm0; /* movss */
    MEMF(edi + 0x10) = xmm1; /* movss */
    MEMF(edi + 0x14) = xmm4; /* movss */
    PUSH32(esp, ecx);
    edi = edi + 0xFFFFFFACu;
    PUSH32(esp, edi);
    eax = 4;
    ecx = esi;
    PUSH32(esp, 0); sub_0013BB50(); /* call 0x0013BB50 */

loc_0018D158: ;
    PUSH32(esp, 2);
    PUSH32(esp, 1);
    PUSH32(esp, 0);
    eax = esi;
    PUSH32(esp, 0); sub_0013BF00(); /* call 0x0013BF00 */

loc_0018D165: ;
    PUSH32(esp, 3);
    PUSH32(esp, 2);
    PUSH32(esp, 0);
    eax = esi;
    PUSH32(esp, 0); sub_0013BF00(); /* call 0x0013BF00 */

loc_0018D172: ;
    PUSH32(esp, 0); sub_0013C160(); /* call 0x0013C160 */

loc_0018D177: ;
    POP32(esp, edi);
    POP32(esp, ebp);

loc_0018D179: ;
    POP32(esp, esi);
    POP32(esp, ebx);
    esp = esp + 0xC;
    esp += 4; return; /* ret */

    #undef fp_push
    #undef fp_pop
    #undef fp_popp
    #undef fp_top
    #undef fp_st1
}

/**
 * sub_0018D180
 * Original: 0x0018D180 - 0x0018D194 (20 bytes, 7 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0018D180(void)
{
    int _flags = 0; /* fallback flag var */

loc_0018D180: ;
    eax = MEM32(esp + 4);
    ecx = MEM32(eax + 0x13C);
    edx = MEM32(ecx + 0x64);
    if (TEST_NZ(edx, edx)) { sub_0018D194(); return; } /* jne: not equal / not zero */

loc_0018D191: ;
    SET_LO8(eax, 0); /* xor self */
    esp += 4; return; /* ret */

}

/**
 * sub_0018D1C0
 * Original: 0x0018D1C0 - 0x0018D1EF (47 bytes, 18 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0018D1C0(void)
{
    uint32_t ebp;
    int _flags = 0; /* fallback flag var */

loc_0018D1C0: ;
    PUSH32(esp, ebp);
    ebp = esp;
    esp = esp & 0xFFFFFFF0u;
    esp = esp - 0x4C;
    PUSH32(esp, esi);
    esi = MEM32(ebp + 8);
    eax = MEM32(esi + 0x13C);
    ecx = MEM32(eax + 0x64);
    if (TEST_Z(ecx, ecx)) goto loc_0018D1E8; /* je: equal / zero */

loc_0018D1DA: ;
    SET_LO8(ecx, MEM8(eax + 0x10B));
    if (CMP_EQ(LO8(ecx), MEM8(esi + 0x140))) { sub_0018D1EF(); return; } /* je: equal / zero */

loc_0018D1E8: ;
    SET_LO8(eax, 0); /* xor self */
    POP32(esp, esi);
    esp = ebp;
    POP32(esp, ebp);
    esp += 4; return; /* ret */

}

/**
 * sub_0018D250
 * Original: 0x0018D250 - 0x0018D269 (25 bytes, 7 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0018D250(void)
{
    uint32_t ebp;
    int _flags = 0; /* fallback flag var */
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_0018D250: ;
    ecx = MEM32(esp + 4);
    eax = ZX8(MEM8(ecx + 0x54));
    eax = MEM32(eax * 4 + 0x5992CC);
    if (TEST_Z(eax, eax)) { sub_0018D269(); return; } /* je: equal / zero */

loc_0018D263: ;
    MEM32(esp + 4) = ecx;
    g_seh_ebp = ebp; RECOMP_ITAIL(eax); return; /* indirect tail jmp */

}

/**
 * sub_0018D270
 * Original: 0x0018D270 - 0x0018D30E (158 bytes, 53 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0018D270(void)
{
    uint32_t ebp;
    int _flags = 0; /* fallback flag var */
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_0018D270: ;
    eax = MEM32(esp + 0xC);
    (void)0; /* test eax, eax - flags set for next jcc */
    PUSH32(esp, esi);
    esi = MEM32(esp + 8);
    if (TEST_NZ(eax, eax)) goto loc_0018D2CF; /* jne: not equal / not zero */

loc_0018D27D: ;
    eax = MEM32(esp + 0xC);
    ecx = MEM32(eax);
    if (CMP_EQ(ecx, MEM32(esi + 0x13C))) goto loc_0018D296; /* je: equal / zero */

loc_0018D28B: ;
    SET_LO8(edx, MEM8(eax + 4));
    if (CMP_NE(LO8(edx), MEM8(esi + 0x140))) goto loc_0018D30C; /* jne: not equal / not zero */

loc_0018D296: ;
    SET_LO8(eax, MEM8(0x8472BD));
    if (TEST_NZ(LO8(eax), LO8(eax))) goto loc_0018D30C; /* jne: not equal / not zero */

loc_0018D29F: ;
    edx = esi;
    PUSH32(esp, 0); sub_000DAD90(); /* call 0x000DAD90 */

loc_0018D2A6: ;
    eax = MEM32(esi);
    if (CMP_L(eax, 2)) goto loc_0018D30C; /* jl: less (signed <) */

loc_0018D2AD: ;
    eax = (uint32_t)((int32_t)eax * (int32_t)0x70);
    eax = MEM32(eax + 0x5906BC);
    if (TEST_Z(eax, eax)) goto loc_0018D2C2; /* je: equal / zero */

loc_0018D2BA: ;
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, esi);
    PUSH32(esp, 0); RECOMP_ICALL_SAFE(eax, _icall_esp); /* indirect call */
    }

loc_0018D2BD: ;
    esp = esp + 4;
    POP32(esp, esi);
    esp += 4; return; /* ret */

loc_0018D2C2: ;
    eax = esi;
    edx = 1;
    POP32(esp, esi);
    g_seh_ebp = ebp; sub_000DA5E0(); return; /* tail jmp 0x000DA5E0 */

loc_0018D2CF: ;
    if (CMP_NE(eax, 0x2D)) goto loc_0018D30C; /* jne: not equal / not zero */

loc_0018D2D4: ;
    eax = MEM32(esp + 0xC);
    ecx = MEM32(esi + 0x13C);
    edx = MEM32(eax);
    if (CMP_NE(ecx, edx)) goto loc_0018D2F8; /* jne: not equal / not zero */

loc_0018D2E4: ;
    ecx = MEM32(eax + 4);
    MEM32(esi + 0x13C) = ecx;
    SET_LO8(edx, MEM8(eax + 9));
    MEM8(esi + 0x140) = LO8(edx);
    POP32(esp, esi);
    esp += 4; return; /* ret */

loc_0018D2F8: ;
    if (CMP_NE(ecx, MEM32(eax + 4))) goto loc_0018D30C; /* jne: not equal / not zero */

loc_0018D2FD: ;
    MEM32(esi + 0x13C) = edx;
    SET_LO8(eax, MEM8(eax + 8));
    MEM8(esi + 0x140) = LO8(eax);

loc_0018D30C: ;
    POP32(esp, esi);
    esp += 4; return; /* ret */

}

/**
 * sub_0018D310
 * Original: 0x0018D310 - 0x0018D6B5 (933 bytes, 243 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0018D310(void)
{
    uint32_t ebp;
    int _flags = 0; /* fallback flag var */
    float xmm0, xmm1, xmm5, xmm6, xmm7;
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_0018D310: ;
    esp = esp - 0x60;
    xmm6 = 0.0f; /* xorps self = zero */
    PUSH32(esp, ebx);
    ebx = MEM32(esp + 0x68);
    PUSH32(esp, ebp);
    PUSH32(esp, edi);
    edi = MEM32(ebx + 0x4C);
    ebp = 0; /* xor self */
    (void)0; /* cmp edi, ebp - flags set for next jcc */
    MEMF(esp + 0x5C) = xmm6; /* movss */
    if (CMP_EQ(edi, ebp)) goto loc_0018D6AE; /* je: equal / zero */

loc_0018D330: ;
    if (CMP_EQ(MEM32(edi + 0x64), ebp)) goto loc_0018D6AE; /* je: equal / zero */

loc_0018D339: ;
    if (CMP_EQ(MEM32(edi + 0x3C8), ebp)) goto loc_0018D6AE; /* je: equal / zero */

loc_0018D345: ;
    SET_LO8(eax, MEM8(edi + 0x10B));
    if (CMP_NE(LO8(eax), MEM8(ebx + 0x50))) goto loc_0018D6AE; /* jne: not equal / not zero */

loc_0018D354: ;
    eax = ZX8(MEM8(ebx + 0x51));
    PUSH32(esp, esi);
    esi = esp + 0x18;
    edx = edi;
    PUSH32(esp, 0); sub_002F7940(); /* call 0x002F7940 */

loc_0018D364: ;
    xmm0 = MEMF(edi + 0x294); /* movss */
    eax = 1;
    MEM32(esp + 0x28) = eax;
    MEM16(esp + 0x26) = LO16(eax);
    MEM8(esp + 0x54) = 0;
    MEM8(esp + 0x55) = 0xFF;
    MEMF(esp + 0x4C) = xmm0; /* movss */
    MEM32(esp + 0x50) = 8;
    MEM8(esp + 0x59) = 0xFF;
    MEM8(esp + 0x56) = 0xFF;
    MEM8(esp + 0x57) = 0xFF;
    MEM8(esp + 0x58) = 0xFF;
    PUSH32(esp, 0); sub_003E2480(); /* call 0x003E2480 */

loc_0018D3AB: ;
    edx = ((int32_t)eax < 0) ? 0xFFFFFFFF : 0; /* cdq */
    ecx = 9;
    { int64_t _dividend = ((int64_t)(int32_t)edx << 32) | eax;
      eax = (uint32_t)((int32_t)(_dividend / (int32_t)ecx));
      edx = (uint32_t)((int32_t)(_dividend % (int32_t)ecx)); }
    edx = edx + 0xC;
    if ((edx == 0)) goto loc_0018D5A0; /* je: equal / zero */

loc_0018D3BC: ;
    edi = edx;
    goto loc_0018D3C3;

loc_0018D3C0: ;
    xmm6 = 0.0f; /* xorps self = zero */

loc_0018D3C3: ;
    PUSH32(esp, 0); sub_003E2480(); /* call 0x003E2480 */

loc_0018D3C8: ;
    SET_LO8(ebx, LO8(eax));
    PUSH32(esp, 0); sub_003E2480(); /* call 0x003E2480 */

loc_0018D3CF: ;
    edx = ((int32_t)eax < 0) ? 0xFFFFFFFF : 0; /* cdq */
    ecx = 0x33;
    { int64_t _dividend = ((int64_t)(int32_t)edx << 32) | eax;
      eax = (uint32_t)((int32_t)(_dividend / (int32_t)ecx));
      edx = (uint32_t)((int32_t)(_dividend % (int32_t)ecx)); }
    eax = 0; /* xor self */
    SET_LO8(eax, LO8(ebx));
    SET_LO8(ecx, LO8(ebx));
    SET_LO8(ecx, LO8(ecx) & 0xC0);
    eax = eax & 0x3F;
    if (TEST_Z(LO8(ebx), 0x40)) goto loc_0018D3F1; /* je: equal / zero */

loc_0018D3E8: ;
    esi = 0x40;
    esi = esi - eax;
    goto loc_0018D3F3;

loc_0018D3F1: ;
    esi = eax;

loc_0018D3F3: ;
    if (TEST_Z(LO8(ecx), LO8(ecx))) goto loc_0018D40A; /* je: equal / zero */

loc_0018D3F7: ;
    if (CMP_EQ(LO8(ecx), 0xC0)) goto loc_0018D40A; /* je: equal / zero */

loc_0018D3FC: ;
    xmm0 = xmm6; /* movaps */
    xmm0 = xmm0 - MEMF(esi * 4 + 0x743090); /* subss */
    goto loc_0018D413;

loc_0018D40A: ;
    xmm0 = MEMF(esi * 4 + 0x743090); /* movss */

loc_0018D413: ;
    SET_LO8(ebx, LO8(ebx) - 0x40);
    SET_LO8(eax, LO8(ebx));
    SET_LO8(eax, LO8(eax) & 0xC0);
    (void)0; /* test LO8(ebx), 0x40 - flags set for next jcc */
    MEMF(esp + 0x14) = xmm0; /* movss */
    if (TEST_Z(LO8(ebx), 0x40)) goto loc_0018D431; /* je: equal / zero */

loc_0018D425: ;
    ebx = ebx & 0x3F;
    ecx = 0x40;
    ecx = ecx - ebx;
    goto loc_0018D436;

loc_0018D431: ;
    ebx = ebx & 0x3F;
    ecx = ebx;

loc_0018D436: ;
    if (TEST_Z(LO8(eax), LO8(eax))) goto loc_0018D44C; /* je: equal / zero */

loc_0018D43A: ;
    if (CMP_EQ(LO8(eax), 0xC0)) goto loc_0018D44C; /* je: equal / zero */

loc_0018D43E: ;
    xmm0 = xmm6; /* movaps */
    xmm0 = xmm0 - MEMF(ecx * 4 + 0x743090); /* subss */
    goto loc_0018D455;

loc_0018D44C: ;
    xmm0 = MEMF(ecx * 4 + 0x743090); /* movss */

loc_0018D455: ;
    SET_LO8(ecx, LO8(edx));
    SET_LO8(ecx, LO8(ecx) & 0xC0);
    (void)0; /* test LO8(edx), 0x40 - flags set for next jcc */
    MEMF(esp + 0x10) = xmm0; /* movss */
    if (TEST_Z(LO8(edx), 0x40)) goto loc_0018D475; /* je: equal / zero */

loc_0018D465: ;
    ebx = 0; /* xor self */
    SET_LO8(ebx, LO8(edx));
    eax = 0x40;
    ebx = ebx & 0x3F;
    eax = eax - ebx;
    goto loc_0018D47C;

loc_0018D475: ;
    eax = 0; /* xor self */
    SET_LO8(eax, LO8(edx));
    eax = eax & 0x3F;

loc_0018D47C: ;
    if (TEST_Z(LO8(ecx), LO8(ecx))) goto loc_0018D493; /* je: equal / zero */

loc_0018D480: ;
    if (CMP_EQ(LO8(ecx), 0xC0)) goto loc_0018D493; /* je: equal / zero */

loc_0018D485: ;
    xmm7 = xmm6; /* movaps */
    xmm7 = xmm7 - MEMF(eax * 4 + 0x743090); /* subss */
    goto loc_0018D49C;

loc_0018D493: ;
    xmm7 = MEMF(eax * 4 + 0x743090); /* movss */

loc_0018D49C: ;
    SET_LO8(edx, LO8(edx) - 0x40);
    eax = 0; /* xor self */
    SET_LO8(eax, LO8(edx));
    SET_LO8(ecx, LO8(eax));
    SET_LO8(ecx, LO8(ecx) & 0xC0);
    if (TEST_Z(LO8(eax), 0x40)) goto loc_0018D4B8; /* je: equal / zero */

loc_0018D4AC: ;
    eax = eax & 0x3F;
    edx = 0x40;
    edx = edx - eax;
    goto loc_0018D4BD;

loc_0018D4B8: ;
    eax = eax & 0x3F;
    edx = eax;

loc_0018D4BD: ;
    if (TEST_Z(LO8(ecx), LO8(ecx))) goto loc_0018D4CF; /* je: equal / zero */

loc_0018D4C1: ;
    (void)0; /* cmp LO8(ecx), 0xC0 - flags set for next jcc */
    xmm6 = xmm6 - MEMF(edx * 4 + 0x743090); /* subss */
    if (CMP_NE(LO8(ecx), 0xC0)) goto loc_0018D4D8; /* jne: not equal / not zero */

loc_0018D4CF: ;
    xmm6 = MEMF(edx * 4 + 0x743090); /* movss */

loc_0018D4D8: ;
    PUSH32(esp, 0); sub_003E1D70(); /* call 0x003E1D70 */

loc_0018D4DD: ;
    xmm5 = xmm0; /* movaps */
    xmm5 = xmm5 * MEMF(0x648D10); /* mulss */
    xmm5 = xmm5 + MEMF(0x64A2D8); /* addss */
    MEM8(esp + 0x2D) = 4;
    PUSH32(esp, 0); sub_003E2480(); /* call 0x003E2480 */

loc_0018D4FA: ;
    eax = eax & 0xF;
    eax = eax + 0x23;
    MEM16(esp + 0x24) = LO16(eax);
    PUSH32(esp, 0); sub_003E1D70(); /* call 0x003E1D70 */

loc_0018D50A: ;
    xmm0 = xmm0 * MEMF(0x64A2D4); /* mulss */
    xmm0 = xmm0 + MEMF(0x64A2D0); /* addss */
    MEMF(esp + 0x38) = xmm0; /* movss */
    PUSH32(esp, 0); sub_003E1D70(); /* call 0x003E1D70 */

loc_0018D525: ;
    ecx = MEM32(esp + 0x74);
    xmm0 = xmm0 * MEMF(0x648D80); /* mulss */
    xmm0 = xmm0 + MEMF(0x648D40); /* addss */
    edx = 0; /* xor self */
    SET_LO8(edx, MEM8(ecx + 4));
    MEMF(esp + 0x48) = xmm0; /* movss */
    xmm0 = xmm5; /* movaps */
    xmm0 = xmm0 * xmm7; /* mulss */
    xmm1 = xmm0; /* movaps */
    xmm1 = xmm1 * MEMF(esp + 0x10); /* mulss */
    xmm0 = xmm0 * MEMF(esp + 0x14); /* mulss */
    PUSH32(esp, edx);
    PUSH32(esp, ebp);
    PUSH32(esp, ebp);
    PUSH32(esp, ebp);
    PUSH32(esp, ebp);
    PUSH32(esp, ebp);
    PUSH32(esp, ebp);
    PUSH32(esp, ebp);
    PUSH32(esp, 2);
    PUSH32(esp, 1);
    MEMF(esp + 0x64) = xmm1; /* movss */
    xmm1 = 0.0f; /* xorps self = zero */
    eax = esp + 0x60;
    xmm5 = xmm5 * xmm6; /* mulss */
    PUSH32(esp, ebp);
    xmm1 = xmm1 - xmm5; /* subss */
    PUSH32(esp, eax);
    ecx = esp + 0x48;
    MEMF(esp + 0x70) = xmm1; /* movss */
    MEMF(esp + 0x74) = xmm0; /* movss */
    PUSH32(esp, 0); sub_0017AA40(); /* call 0x0017AA40 */

loc_0018D592: ;
    esp = esp + 0x30;
    edi--;
    if ((edi != 0)) goto loc_0018D3C0; /* jne: not equal / not zero */

loc_0018D59C: ;
    ebx = MEM32(esp + 0x74);

loc_0018D5A0: ;
    PUSH32(esp, 0); sub_003E1D70(); /* call 0x003E1D70 */

loc_0018D5A5: ;
    xmm5 = xmm0; /* movaps */
    xmm5 = xmm5 + MEMF(0x648CF4); /* addss */
    PUSH32(esp, 0); sub_003E1D70(); /* call 0x003E1D70 */

loc_0018D5B5: ;
    xmm0 = xmm0 * MEMF(0x5A005C); /* mulss */
    eax = (int32_t)MEMF(esp + 0x18); /* cvttss2si */
    xmm0 = xmm0 + MEMF(0x648F8C); /* addss */
    ecx = (int32_t)xmm0; /* cvttss2si */
    MEM16(esp + 0x48) = LO16(eax);
    SET_LO8(eax, MEM8(ebx + 4));
    MEM16(esp + 0x52) = LO16(ecx);
    ecx = (int32_t)MEMF(esp + 0x1C); /* cvttss2si */
    MEM8(esp + 0x74) = LO8(eax);
    MEM16(esp + 0x4A) = LO16(ecx);
    ecx = MEM32(esp + 0x74);
    xmm0 = xmm0 / xmm5; /* divss */
    edx = (int32_t)xmm0; /* cvttss2si */
    PUSH32(esp, ecx);
    MEM32(esp + 0x40) = edx;
    edx = (int32_t)MEMF(esp + 0x24); /* cvttss2si */
    PUSH32(esp, 8);
    eax = 0x68;
    MEM16(esp + 0x66) = LO16(ebp);
    MEM16(esp + 0x64) = LO16(ebp);
    MEM8(esp + 0x6C) = 0xFF;
    MEM8(esp + 0x6D) = 0xFF;
    MEM8(esp + 0x6E) = 0xFF;
    MEM8(esp + 0x70) = 0;
    MEM8(esp + 0x71) = 0;
    MEM8(esp + 0x72) = 0;
    MEM16(esp + 0x68) = 0x64;
    MEM8(esp + 0x6F) = 0xFF;
    MEM8(esp + 0x6A) = 0;
    MEM32(esp + 0x40) = 0x58DD14;
    MEM16(esp + 0x4C) = LO16(ebp);
    MEM16(esp + 0x4E) = LO16(ebp);
    MEM16(esp + 0x54) = LO16(edx);
    MEM8(esp + 0x5C) = 0;
    MEM8(esp + 0x5E) = 0;
    MEM8(esp + 0x5D) = 0;
    MEM16(esp + 0x56) = LO16(ebp);
    MEM16(esp + 0x58) = LO16(ebp);
    MEM16(esp + 0x62) = LO16(ebp);
    MEM16(esp + 0x60) = LO16(ebp);
    MEM8(esp + 0x5F) = 0xB;
    MEM16(esp + 0x74) = LO16(ebp);
    MEM8(esp + 0x6B) = 0;
    MEM32(esp + 0x48) = ebp;
    PUSH32(esp, 0); sub_000D9C60(); /* call 0x000D9C60 */

loc_0018D694: ;
    esp = esp + 8;
    if (CMP_EQ(eax, ebp)) goto loc_0018D6AD; /* je: equal / zero */

loc_0018D69B: ;
    edi = eax + 0x2C;
    ecx = 0xE;
    esi = esp + 0x38;
    memcpy((void*)XBOX_PTR(edi), (void*)XBOX_PTR(esi), ecx * 4);
    esi += ecx * 4; edi += ecx * 4; ecx = 0; /* rep movsd */
    MEM8(eax + 0x64) = 0xFF;

loc_0018D6AD: ;
    POP32(esp, esi);

loc_0018D6AE: ;
    POP32(esp, edi);
    POP32(esp, ebp);
    POP32(esp, ebx);
    esp = esp + 0x60;
    esp += 4; return; /* ret */

}

/**
 * sub_0018D6C0
 * Original: 0x0018D6C0 - 0x0018D720 (96 bytes, 17 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0018D6C0(void)
{
    int _flags = 0; /* fallback flag var */

loc_0018D6C0: ;
    eax = MEM32(esp + 4);
    SET_LO16(ecx, MEM16(eax + 0x110));
    edx = MEM32(0x7FA20C);
    SET_LO16(ecx, (uint32_t)((int32_t)LO16(ecx) * (int32_t)LO16(edx)));
    MEM16(eax + 0x112) = MEM16(eax + 0x112) + LO16(ecx);
    SET_LO16(ecx, MEM16(eax + 0x112));
    if (CMP_LE(LO16(ecx), 0x1400)) goto loc_0018D6F3; /* jle: less or equal (signed <=) */

loc_0018D6EA: ;
    MEM16(eax + 0x112) = 0x1400;

loc_0018D6F3: ;
    SET_LO16(ecx, (uint32_t)(int32_t)SMEM8(eax + 0x113));
    MEM16(eax + 0x11A) = MEM16(eax + 0x11A) - LO16(ecx);
    MEM16(eax + 0x120) = MEM16(eax + 0x120) + LO16(edx);
    SET_LO16(ecx, MEM16(eax + 0x120));
    if (CMP_LE(LO16(ecx), 0x19)) goto loc_0018D71F; /* jle: less or equal (signed <=) */

loc_0018D716: ;
    MEM16(eax + 0x120) = 0x19;

loc_0018D71F: ;
    esp += 4; return; /* ret */

}

/**
 * sub_0018D760
 * Original: 0x0018D760 - 0x0018D786 (38 bytes, 10 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0018D760(void)
{
    int _flags = 0; /* fallback flag var */

loc_0018D760: ;
    eax = MEM32(esp + 4);
    ecx = MEM32(eax + 0x144);
    eax = (uint32_t)(int32_t)SMEM16(eax + 0x38);
    eax = eax << 3;
    if (CMP_LE(eax, 0xFF)) goto loc_0018D77D; /* jle: less or equal (signed <=) */

loc_0018D778: ;
    eax = 0xFF;

loc_0018D77D: ;
    MEM8(ecx + 0x21) = LO8(eax);
    eax = 1;
    esp += 4; return; /* ret */

}

/**
 * sub_0018D790
 * Original: 0x0018D790 - 0x0018D7AA (26 bytes, 8 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0018D790(void)
{
    int _flags = 0; /* fallback flag var */

loc_0018D790: ;
    eax = MEM32(esp + 4);
    if (CMP_GE(MEM16(eax + 0x38), 0x20)) goto loc_0018D7A4; /* jge: greater or equal (signed >=) */

loc_0018D79B: ;
    SET_LO8(ecx, MEM8(eax + 0x38));
    SET_LO8(ecx, LO8(ecx) << 3);
    MEM8(eax + 0x4C) = LO8(ecx);

loc_0018D7A4: ;
    eax = 1;
    esp += 4; return; /* ret */

}

/**
 * sub_0018D7B0
 * Original: 0x0018D7B0 - 0x0018D7BF (15 bytes, 10 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0018D7B0(void)
{
    int _flags = 0; /* fallback flag var */

loc_0018D7B0: ;
    PUSH32(esp, ebx);
    PUSH32(esp, esi);
    esi = eax;
    ebx = 0; /* xor self */
    if (CMP_NE(esi, ebx)) { sub_0018D7BF(); return; } /* jne: not equal / not zero */

loc_0018D7BA: ;
    POP32(esp, esi);
    eax = 0; /* xor self */
    POP32(esp, ebx);
    esp += 4; return; /* ret */

}

/**
 * sub_0018D880
 * Original: 0x0018D880 - 0x0018DA3B (443 bytes, 145 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0018D880(void)
{
    uint32_t ebp;
    int _flags = 0; /* fallback flag var */
    float xmm0;
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_0018D880: ;
    PUSH32(esp, ecx);
    PUSH32(esp, ebx);
    PUSH32(esp, esi);
    PUSH32(esp, edi);
    edi = MEM32(esp + 0x14);
    SET_LO8(eax, MEM8(edi + 0x48));
    SET_LO8(ecx, MEM8(edi + 0x49));
    SET_LO8(edx, MEM8(edi + 0x4A));
    esi = MEM32(edi + 0x34);
    MEM8(esp + 0xF) = LO8(eax);
    SET_LO8(eax, MEM8(edi + 0x4B));
    MEM8(esp + 0xE) = LO8(ecx);
    SET_LO8(ecx, MEM8(edi + 0x4C));
    MEM8(esp + 0xC) = LO8(eax);
    SET_LO8(eax, MEM8(edi + 0x39));
    MEM8(esp + 0xD) = LO8(edx);
    MEM8(esp + 0x14) = LO8(ecx);
    PUSH32(esp, 0); sub_0018DB20(); /* call 0x0018DB20 */

loc_0018D8B6: ;
    (void)0; /* test LO8(eax), LO8(eax) - flags set for next jcc */
    MEM8(edi + 0x48) = LO8(eax);
    if (TEST_NZ(LO8(eax), LO8(eax))) goto loc_0018D905; /* jne: not equal / not zero */

loc_0018D8BD: ;
    SET_LO8(eax, MEM8(edi + 0x39));
    ecx = MEM32(edi + 0x34);
    edx = ZX8(LO8(eax));
    edx = edx + 0xFFFFFFFEu;
    if (CMP_A(edx, 4)) goto loc_0018D8D5; /* ja: above (unsigned >) */

loc_0018D8CE: ;
    { uint32_t _jt = MEM32(edx * 4 + 0x18DA48); /* switch: 5 entries, 3 targets */
    if (_jt == 0x0018D8D5u) goto loc_0018D8D5;
    if (_jt == 0x0018D8EEu) goto loc_0018D8EE;
    if (_jt == 0x0018D8F2u) goto loc_0018D8F2;
    g_seh_ebp = ebp; RECOMP_ITAIL(_jt); return; }

loc_0018D8D5: ;
    xmm0 = MEMF(ecx + 0x228); /* movss */
    xmm0 = xmm0 - MEMF(0x648FD8); /* subss */
    /* comiss xmm0, MEMF(ecx + 0x294) - sets EFLAGS */
    if ((xmm0 <= MEMF(ecx + 0x294))) goto loc_0018D8F2; /* jbe: below or equal (unsigned <=) */

loc_0018D8EE: ;
    SET_LO8(edx, 1);
    goto loc_0018D8F4;

loc_0018D8F2: ;
    SET_LO8(edx, 0); /* xor self */

loc_0018D8F4: ;
    (void)0; /* test LO8(edx), LO8(edx) - flags set for next jcc */
    MEM8(edi + 0x49) = LO8(edx);
    if (TEST_NZ(LO8(edx), LO8(edx))) { sub_0018DA3B(); return; } /* jne: not equal / not zero */

loc_0018D8FF: ;
    MEM8(edi + 0x4A) = 1;
    goto loc_0018D90D;

loc_0018D905: ;
    MEM8(edi + 0x49) = 2;
    MEM8(edi + 0x4A) = 0;

loc_0018D90D: ;
    SET_LO8(ecx, MEM8(edi + 0x4B));
    edx = MEM32(edi + 0x34);
    esi = edi + 0x3C;
    eax = esi;
    PUSH32(esp, 0); sub_0018DD10(); /* call 0x0018DD10 */

loc_0018D91D: ;
    edx = MEM32(edi + 0x34);
    SET_LO8(ebx, LO8(eax));
    MEM8(edi + 0x4B) = LO8(ebx);
    eax = MEM32(edx + 0x78);
    MEM32(esi) = eax;
    ecx = MEM32(edx + 0x7C);
    MEM32(edi + 0x40) = ecx;
    eax = MEM32(edx + 0x80);
    MEM32(edi + 0x44) = eax;
    SET_LO8(eax, MEM8(edi + 0x39));
    PUSH32(esp, 0); sub_0018DDE0(); /* call 0x0018DDE0 */

loc_0018D941: ;
    (void)0; /* test MEM8(edi + 0x4D), 1 - flags set for next jcc */
    MEM8(edi + 0x4C) = LO8(eax);
    if (TEST_Z(MEM8(edi + 0x4D), 1)) goto loc_0018DA36; /* je: equal / zero */

loc_0018D94E: ;
    ecx = 0; /* xor self */
    SET_LO8(ecx, MEM8(esp + 0x14));
    esi = 1;
    edx = 1;
    PUSH32(esp, ebp);
    ebp = 1;
    ecx = ecx + 0xD;
    esi = esi << LO8(ecx);
    ecx = 0; /* xor self */
    SET_LO8(ecx, MEM8(esp + 0x10));
    ecx = ecx + 9;
    edx = edx << LO8(ecx);
    ecx = 0; /* xor self */
    SET_LO8(ecx, MEM8(esp + 0x11));
    esi = esi | edx;
    edx = 1;
    ecx = ecx + 6;
    edx = edx << LO8(ecx);
    ecx = 0; /* xor self */
    SET_LO8(ecx, MEM8(esp + 0x12));
    esi = esi | edx;
    edx = 1;
    ecx = ecx + 3;
    edx = edx << LO8(ecx);
    SET_LO8(ecx, MEM8(esp + 0x13));
    esi = esi | edx;
    edx = 1;
    edx = edx << LO8(ecx);
    ecx = 0; /* xor self */
    SET_LO8(ecx, MEM8(edi + 0x4A));
    esi = esi | edx;
    edx = 1;
    ecx = ecx + 6;
    ebp = ebp << LO8(ecx);
    ecx = 0; /* xor self */
    SET_LO8(ecx, MEM8(edi + 0x49));
    ecx = ecx + 3;
    edx = edx << LO8(ecx);
    ecx = 0; /* xor self */
    SET_LO8(ecx, LO8(eax));
    eax = 1;
    ebp = ebp | edx;
    edx = 1;
    ecx = ecx + 0xD;
    eax = eax << LO8(ecx);
    ecx = 0; /* xor self */
    SET_LO8(ecx, LO8(ebx));
    ebp = ebp | eax;
    eax = 1;
    ecx = ecx + 9;
    edx = edx << LO8(ecx);
    SET_LO8(ecx, MEM8(edi + 0x48));
    eax = eax << LO8(ecx);
    ebp = ebp | edx;
    ebp = ebp | eax;
    ebx = 0; /* xor self */

loc_0018D9F0: ;
    ecx = ZX8(MEM8(edi + 0x39));
    edx = MEM32(ecx * 4 + 0x599584);
    SET_LO8(ecx, MEM8(ebx + edx));
    if (CMP_EQ(LO8(ecx), 0xFF)) goto loc_0018DA2F; /* je: equal / zero */

loc_0018DA03: ;
    eax = MEM32(ebx * 8 + 0x5993E0);
    edx = eax;
    edx = edx | esi;
    if (CMP_NE(edx, eax)) goto loc_0018DA2F; /* jne: not equal / not zero */

loc_0018DA12: ;
    eax = MEM32(ebx * 8 + 0x5993E4);
    edx = eax;
    edx = edx | ebp;
    if (CMP_NE(edx, eax)) goto loc_0018DA2F; /* jne: not equal / not zero */

loc_0018DA21: ;
    eax = SX8(LO8(ecx));
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, edi);
    PUSH32(esp, 0); RECOMP_ICALL_SAFE(MEM32(eax * 4 + 0x599320), _icall_esp); /* indirect call */
    }

loc_0018DA2C: ;
    esp = esp + 4;

loc_0018DA2F: ;
    ebx++;
    if (CMP_L(ebx, 0x1C)) goto loc_0018D9F0; /* jl: less (signed <) */

loc_0018DA35: ;
    POP32(esp, ebp);

loc_0018DA36: ;
    POP32(esp, edi);
    POP32(esp, esi);
    POP32(esp, ebx);
    POP32(esp, ecx);
    esp += 4; return; /* ret */

}

/**
 * sub_0018DB20
 * Original: 0x0018DB20 - 0x0018DC63 (323 bytes, 93 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0018DB20(void)
{
    uint32_t ebp;
    int _flags = 0; /* fallback flag var */
    float xmm0, xmm1, xmm6;

loc_0018DB20: ;
    PUSH32(esp, ebp);
    ebp = esp;
    esp = esp & 0xFFFFFFF0u;
    esp = esp - 0xC8;
    ecx = MEM32(esi + 0x298);
    eax = ZX8(LO8(eax));
    PUSH32(esp, ebx);
    ecx = ecx & 0x1F;
    (void)0; /* cmp eax, 6 - flags set for next jcc */
    PUSH32(esp, edi);
    if (CMP_A(eax, 6)) goto loc_0018DC23; /* ja: above (unsigned >) */

loc_0018DB43: ;
    { uint32_t _jt = MEM32(eax * 4 + 0x18DC64); /* switch: 7 entries, 5 targets */
    if (_jt == 0x0018DB4Au) goto loc_0018DB4A;
    if (_jt == 0x0018DB62u) goto loc_0018DB62;
    if (_jt == 0x0018DB6Cu) goto loc_0018DB6C;
    if (_jt == 0x0018DC0Bu) goto loc_0018DC0B;
    if (_jt == 0x0018DC23u) goto loc_0018DC23;
    g_seh_ebp = ebp; RECOMP_ITAIL(_jt); return; }

loc_0018DB4A: ;
    edi = esi;
    PUSH32(esp, 0); sub_00195E80(); /* call 0x00195E80 */

loc_0018DB51: ;
    xmm1 = MEMF(esi + 0x228); /* movss */
    /* comiss xmm1, xmm0 - sets EFLAGS */
    if ((xmm1 <= xmm0)) goto loc_0018DC59; /* jbe: below or equal (unsigned <=) */

loc_0018DB62: ;
    SET_LO8(ebx, 0); /* xor self */
    SET_LO8(eax, LO8(ebx));
    POP32(esp, edi);
    POP32(esp, ebx);
    esp = ebp;
    POP32(esp, ebp);
    esp += 4; return; /* ret */

loc_0018DB6C: ;
    xmm0 = MEMF(esi + 0x78); /* movss */
    xmm6 = MEMF(esi + 0x7C); /* movss */
    xmm6 = xmm6 + MEMF(0x648FDC); /* addss */
    MEMF(esp + 0x14) = xmm0; /* movss */
    xmm0 = MEMF(esi + 0x80); /* movss */
    edx = esi;
    eax = esp + 0x20;
    MEMF(esp + 0x18) = xmm6; /* movss */
    MEMF(esp + 0x1C) = xmm0; /* movss */
    PUSH32(esp, 0); sub_002A0430(); /* call 0x002A0430 */

loc_0018DBA3: ;
    xmm0 = MEMF(0x648E60); /* movss */
    xmm6 = xmm6 - MEMF(0x64A8B8); /* subss */
    PUSH32(esp, 0);
    PUSH32(esp, 0);
    PUSH32(esp, eax);
    PUSH32(esp, ecx);
    ecx = 0x2000;
    edi = esp + 0xD0;
    eax = esp + 0x24;
    SET_LO8(ebx, 1);
    MEMF(esi + 0x228) = xmm0; /* movss */
    MEMF(esp) = xmm6; /* movss */
    PUSH32(esp, 0); sub_0029F590(); /* call 0x0029F590 */

loc_0018DBDD: ;
    esp = esp + 0x10;
    if (TEST_Z(LO8(eax), LO8(eax))) goto loc_0018DC5B; /* je: equal / zero */

loc_0018DBE4: ;
    ecx = MEM32(esp + 0xC0);
    ecx = ecx & 0x1F;
    if (CMP_NE(LO8(ecx), 5)) goto loc_0018DC5B; /* jne: not equal / not zero */

loc_0018DBF3: ;
    xmm0 = MEMF(esp + 0x20); /* movss */
    SET_LO8(ebx, 0); /* xor self */
    MEMF(esi + 0x228) = xmm0; /* movss */
    SET_LO8(eax, LO8(ebx));
    POP32(esp, edi);
    POP32(esp, ebx);
    esp = ebp;
    POP32(esp, ebp);
    esp += 4; return; /* ret */

loc_0018DC0B: ;
    SET_LO8(eax, MEM8(0x849438));
    if (TEST_Z(LO8(eax), LO8(eax))) goto loc_0018DC23; /* je: equal / zero */

loc_0018DC14: ;
    MEM8(0x849438) = 0;
    SET_LO8(eax, 1);
    POP32(esp, edi);
    POP32(esp, ebx);
    esp = ebp;
    POP32(esp, ebp);
    esp += 4; return; /* ret */

loc_0018DC23: ;
    xmm0 = MEMF(esi + 0x228); /* movss */
    /* ucomiss xmm0, MEMF(0x648E60) - sets EFLAGS */
    /* lahf - load AH from flags (used in FPU compare idiom) */
    if (1 /* jp after test - parity */) goto loc_0018DC3D; /* jp: parity */

loc_0018DC38: ;
    if (TEST_Z(LO8(ecx), 0x11)) goto loc_0018DC59; /* je: equal / zero */

loc_0018DC3D: ;
    xmm0 = MEMF(esi + 0x7C); /* movss */
    /* comiss xmm0, MEMF(esi + 0x228) - sets EFLAGS */
    if ((xmm0 > MEMF(esi + 0x228))) goto loc_0018DC59; /* ja: above (unsigned >) */

loc_0018DC4B: ;
    SET_LO8(eax, MEM8(esi + 0x24B));
    if (TEST_Z(LO8(eax), LO8(eax))) goto loc_0018DB62; /* je: equal / zero */

loc_0018DC59: ;
    SET_LO8(ebx, 1);

loc_0018DC5B: ;
    POP32(esp, edi);
    SET_LO8(eax, LO8(ebx));
    POP32(esp, ebx);
    esp = ebp;
    POP32(esp, ebp);
    esp += 4; return; /* ret */

}

/**
 * sub_0018DC80
 * Original: 0x0018DC80 - 0x0018DCEE (110 bytes, 26 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0018DC80(void)
{
    uint32_t ebp;
    int _flags = 0; /* fallback flag var */
    float xmm0, xmm1;
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_0018DC80: ;
    eax = ZX8(LO8(eax));
    eax = eax + 0xFFFFFFFEu;
    (void)0; /* cmp eax, 4 - flags set for next jcc */
    PUSH32(esp, edi);
    edi = ecx;
    if (CMP_A(eax, 4)) goto loc_0018DCD0; /* ja: above (unsigned >) */

loc_0018DC8E: ;
    { uint32_t _jt = MEM32(eax * 4 + 0x18DCF4); /* switch: 5 entries, 3 targets */
    if (_jt == 0x0018DC95u) goto loc_0018DC95;
    if (_jt == 0x0018DCB2u) goto loc_0018DCB2;
    if (_jt == 0x0018DCD0u) goto loc_0018DCD0;
    g_seh_ebp = ebp; RECOMP_ITAIL(_jt); return; }

loc_0018DC95: ;
    PUSH32(esp, 0); sub_00195E30(); /* call 0x00195E30 */

loc_0018DC9A: ;
    /* comiss xmm0, MEMF(edi + 0x228) - sets EFLAGS */
    if ((xmm0 <= MEMF(edi + 0x228))) { sub_0018DCEE(); return; } /* jbe: below or equal (unsigned <=) */

loc_0018DCA3: ;
    PUSH32(esp, 0); sub_00195E80(); /* call 0x00195E80 */

loc_0018DCA8: ;
    xmm1 = MEMF(edi + 0x228); /* movss */
    goto loc_0018DCE5;

loc_0018DCB2: ;
    xmm0 = MEMF(edi + 0x264); /* movss */
    xmm0 = xmm0 * MEMF(0x649554); /* mulss */
    xmm0 = xmm0 + MEMF(edi + 0x7C); /* addss */
    /* comiss xmm0, MEMF(edi + 0x228) - sets EFLAGS */
    goto loc_0018DCE8;

loc_0018DCD0: ;
    xmm0 = MEMF(edi + 0x228); /* movss */
    xmm0 = xmm0 - MEMF(0x649550); /* subss */
    xmm1 = MEMF(edi + 0x7C); /* movss */

loc_0018DCE5: ;
    /* comiss xmm1, xmm0 - sets EFLAGS */

loc_0018DCE8: ;
    if ((xmm1 <= xmm0)) { sub_0018DCEE(); return; } /* jbe: below or equal (unsigned <=) */

loc_0018DCEA: ;
    SET_LO8(eax, 1);
    POP32(esp, edi);
    esp += 4; return; /* ret */

}

/**
 * sub_0018DD10
 * Original: 0x0018DD10 - 0x0018DDCC (188 bytes, 51 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0018DD10(void)
{
    int _flags = 0; /* fallback flag var */
    float xmm0, xmm1, xmm2;

loc_0018DD10: ;
    esp = esp - 0x20;
    edx = edx + 0x78;
    PUSH32(esp, esi);
    esi = MEM32(edx);
    MEM32(esp + 0xC) = esi;
    esi = MEM32(edx + 4);
    xmm0 = MEMF(esp + 0xC); /* movss */
    xmm0 = xmm0 - MEMF(eax); /* subss */
    edx = MEM32(edx + 8);
    MEMF(esp + 0xC) = xmm0; /* movss */
    MEM32(esp + 0x10) = esi;
    xmm0 = MEMF(esp + 0x10); /* movss */
    xmm0 = xmm0 - MEMF(eax + 4); /* subss */
    MEM32(esp + 0x14) = edx;
    MEMF(esp + 0x10) = xmm0; /* movss */
    xmm0 = MEMF(esp + 0x14); /* movss */
    xmm0 = xmm0 - MEMF(eax + 8); /* subss */
    eax = MEM32(esp + 0xC);
    edx = MEM32(esp + 0x10);
    MEMF(esp + 0x14) = xmm0; /* movss */
    MEM32(esp + 0x18) = eax;
    eax = MEM32(esp + 0x14);
    MEM32(esp + 0x1C) = edx;
    edx = esp + 0x18;
    MEM32(esp + 0x20) = eax;
    MEM32(esp + 4) = edx;
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
    MEMF(esp + 8) = xmm1; /* movss */
    xmm0 = MEMF(esp + 8); /* movss */
    /* comiss xmm0, MEMF(0x648D80) - sets EFLAGS */
    POP32(esp, esi);
    if ((xmm0 < MEMF(0x648D80))) { sub_0018DDCC(); return; } /* jb: below (unsigned <) */

loc_0018DDB6: ;
    if (CMP_EQ(LO8(ecx), 1)) goto loc_0018DDC6; /* je: equal / zero */

loc_0018DDBB: ;
    if (CMP_EQ(LO8(ecx), 2)) goto loc_0018DDC6; /* je: equal / zero */

loc_0018DDC0: ;
    SET_LO8(eax, 1);
    esp = esp + 0x20;
    esp += 4; return; /* ret */

loc_0018DDC6: ;
    SET_LO8(eax, 2);
    esp = esp + 0x20;
    esp += 4; return; /* ret */

}

/**
 * sub_0018DDE0
 * Original: 0x0018DDE0 - 0x0018DE23 (67 bytes, 27 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0018DDE0(void)
{
    int _flags = 0; /* fallback flag var */

loc_0018DDE0: ;
    PUSH32(esp, ecx);
    (void)0; /* test LO8(eax), LO8(eax) - flags set for next jcc */
    PUSH32(esp, esi);
    if (TEST_NZ(LO8(eax), LO8(eax))) goto loc_0018DE0F; /* jne: not equal / not zero */

loc_0018DDE6: ;
    ecx = MEM32(edx + 0xA4);
    MEM8(esp + 4) = 0x3B;
    MEM8(esp + 5) = 0x3C;
    eax = 1;
    goto loc_0018DE00;

    /* nop */

loc_0018DE00: ;
    esi = ZX8(MEM8(esp + eax + 4));
    eax--;
    if (CMP_EQ(esi, ecx)) goto loc_0018DE1E; /* je: equal / zero */

loc_0018DE0A: ;
    if (CMP_G(eax, 0xFFFFFFFFu)) goto loc_0018DE00; /* jg: greater (signed >) */

loc_0018DE0F: ;
    SET_LO8(eax, MEM8(edx + 0x1B5));
    if (TEST_Z(LO8(eax), LO8(eax))) { sub_0018DE23(); return; } /* je: equal / zero */

loc_0018DE19: ;
    SET_LO8(eax, 2);
    POP32(esp, esi);
    POP32(esp, ecx);
    esp += 4; return; /* ret */

loc_0018DE1E: ;
    SET_LO8(eax, 3);
    POP32(esp, esi);
    POP32(esp, ecx);
    esp += 4; return; /* ret */

}

/**
 * sub_0018DE40
 * Original: 0x0018DE40 - 0x0018DEC2 (130 bytes, 46 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0018DE40(void)
{
    uint32_t ebp;
    int _flags = 0; /* fallback flag var */
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_0018DE40: ;
    SET_LO8(edx, MEM8(0x7819D5));
    SET_LO8(eax, 0); /* xor self */
    if (TEST_Z(LO8(edx), LO8(edx))) goto loc_0018DE50; /* je: equal / zero */

loc_0018DE4C: ;
    MEM8(ecx) = LO8(eax);
    SET_LO8(eax, 1);

loc_0018DE50: ;
    edx = ZX8(MEM8(esi + 0x10B));
    edx--;
    if ((edx != 0)) goto loc_0018DE5F; /* jne: not equal / not zero */

loc_0018DE5A: ;
    MEM8(ecx) = 0;
    SET_LO8(eax, 1);

loc_0018DE5F: ;
    SET_LO8(edx, MEM8(esi + 0xA1));
    if (CMP_EQ(LO8(edx), 5)) goto loc_0018DE6F; /* je: equal / zero */

loc_0018DE6A: ;
    if (CMP_NE(LO8(edx), 2)) goto loc_0018DE74; /* jne: not equal / not zero */

loc_0018DE6F: ;
    MEM8(ecx) = 1;
    SET_LO8(eax, 1);

loc_0018DE74: ;
    edx = MEM32(esi + 0x68);
    if (CMP_A(edx, 0x4A)) goto loc_0018DEA6; /* ja: above (unsigned >) */

loc_0018DE7C: ;
    if (CMP_EQ(edx, 0x4A)) goto loc_0018DEA0; /* je: equal / zero */

loc_0018DE7E: ;
    edx = edx - 8;
    if (CMP_A(edx, 0x22)) goto loc_0018DEC1; /* ja: above (unsigned >) */

loc_0018DE86: ;
    edx = ZX8(MEM8(edx + 0x18DED4));
    { uint32_t _jt = MEM32(edx * 4 + 0x18DEC4); /* switch: 4 entries, 4 targets */
    if (_jt == 0x0018DE94u) goto loc_0018DE94;
    if (_jt == 0x0018DE9Au) goto loc_0018DE9A;
    if (_jt == 0x0018DEB6u) goto loc_0018DEB6;
    if (_jt == 0x0018DEC1u) goto loc_0018DEC1;
    g_seh_ebp = ebp; RECOMP_ITAIL(_jt); return; }

loc_0018DE94: ;
    MEM8(ecx) = 2;
    SET_LO8(eax, 1);
    esp += 4; return; /* ret */

loc_0018DE9A: ;
    MEM8(ecx) = 3;
    SET_LO8(eax, 1);
    esp += 4; return; /* ret */

loc_0018DEA0: ;
    MEM8(ecx) = 6;
    SET_LO8(eax, 1);
    esp += 4; return; /* ret */

loc_0018DEA6: ;
    if (CMP_EQ(edx, 0x93)) goto loc_0018DEBC; /* je: equal / zero */

loc_0018DEAE: ;
    if (CMP_NE(edx, 0x19C)) goto loc_0018DEC1; /* jne: not equal / not zero */

loc_0018DEB6: ;
    MEM8(ecx) = 4;
    SET_LO8(eax, 1);
    esp += 4; return; /* ret */

loc_0018DEBC: ;
    MEM8(ecx) = 5;
    SET_LO8(eax, 1);

loc_0018DEC1: ;
    esp += 4; return; /* ret */

}

/**
 * sub_0018DF00
 * Original: 0x0018DF00 - 0x0018DF41 (65 bytes, 31 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0018DF00(void)
{
    uint32_t ebp;
    int _flags = 0; /* fallback flag var */
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_0018DF00: ;
    PUSH32(esp, ecx);
    PUSH32(esp, ebx);
    PUSH32(esp, ebp);
    ebp = MEM32(esp + 0x10);
    PUSH32(esp, esi);
    PUSH32(esp, edi);
    edi = edx;
    edx = MEM32(eax + 0x538);
    SET_LO8(ebx, 0); /* xor self */
    (void)0; /* test edx, edx - flags set for next jcc */
    MEM8(esp + 0x13) = 0;
    if (TEST_Z(edx, edx)) goto loc_0018DF39; /* je: equal / zero */

loc_0018DF1C: ;
    eax = 0x13;

loc_0018DF21: ;
    if (TEST_NZ(LO8(ebx), LO8(ebx))) { sub_0018DF41(); return; } /* jne: not equal / not zero */

loc_0018DF25: ;
    if (CMP_NE(MEM32(edx + 0x38), eax)) goto loc_0018DF2E; /* jne: not equal / not zero */

loc_0018DF2A: ;
    SET_LO8(ebx, 1);
    goto loc_0018DF31;

loc_0018DF2E: ;
    edx = MEM32(edx + 0x30);

loc_0018DF31: ;
    if (TEST_NZ(edx, edx)) goto loc_0018DF21; /* jne: not equal / not zero */

loc_0018DF35: ;
    if (TEST_NZ(LO8(ebx), LO8(ebx))) { sub_0018DF41(); return; } /* jne: not equal / not zero */

loc_0018DF39: ;
    POP32(esp, edi);
    POP32(esp, esi);
    POP32(esp, ebp);
    SET_LO8(eax, 0); /* xor self */
    POP32(esp, ebx);
    POP32(esp, ecx);
    esp += 4; return; /* ret */

}

/**
 * sub_0018E030
 * Original: 0x0018E030 - 0x0018E128 (248 bytes, 72 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0018E030(void)
{
    uint32_t ebp;
    int _flags = 0; /* fallback flag var */
    float xmm0;
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_0018E030: ;
    esp = esp - 0xC;
    PUSH32(esp, ebx);
    PUSH32(esp, ebp);
    ebp = MEM32(esp + 0x18);
    PUSH32(esp, esi);
    esi = MEM32(esp + 0x20);
    PUSH32(esp, esi);
    PUSH32(esp, ebp);
    SET_LO8(ebx, 1);
    PUSH32(esp, 0); sub_0018E130(); /* call 0x0018E130 */

loc_0018E047: ;
    esp = esp + 8;
    if (TEST_Z(LO8(eax), LO8(eax))) goto loc_0018E11D; /* je: equal / zero */

loc_0018E052: ;
    xmm0 = MEMF(ebp + 0x8C); /* movss */
    /* comiss xmm0, MEMF(0x648CF8) - sets EFLAGS */
    if ((xmm0 <= MEMF(0x648CF8))) goto loc_0018E11F; /* jbe: below or equal (unsigned <=) */

loc_0018E067: ;
    xmm0 = MEMF(ebp + 0x7C); /* movss */
    xmm0 = xmm0 + MEMF(ebp + 0x70); /* addss */
    MEMF(esp + 0xC) = xmm0; /* movss */
    xmm0 = MEMF(esi + 4); /* movss */
    MEMF(esp + 0x10) = xmm0; /* movss */
    xmm0 = MEMF(ebp + 0x84); /* movss */
    xmm0 = xmm0 + MEMF(ebp + 0x78); /* addss */
    esi = esp + 0xC;
    MEMF(esp + 0x14) = xmm0; /* movss */
    PUSH32(esp, 0); sub_001120F0(); /* call 0x001120F0 */

loc_0018E09E: ;
    if (TEST_NZ(LO8(eax), LO8(eax))) goto loc_0018E0A9; /* jne: not equal / not zero */

loc_0018E0A2: ;
    POP32(esp, esi);
    POP32(esp, ebp);
    POP32(esp, ebx);
    esp = esp + 0xC;
    esp += 4; return; /* ret */

loc_0018E0A9: ;
    eax = MEM32(ebp + 0x74);
    PUSH32(esp, eax);
    esi = ebp + 0xB0;
    PUSH32(esp, 0);
    eax = esi;
    ecx = esp + 0x14;
    PUSH32(esp, 0); sub_002A0120(); /* call 0x002A0120 */

loc_0018E0C0: ;
    esp = esp + 8;
    if (TEST_Z(LO8(eax), LO8(eax))) goto loc_0018E11F; /* je: equal / zero */

loc_0018E0C7: ;
    (void)0; /* cmp MEM8(ebp + 0x155), 3 - flags set for next jcc */
    xmm0 = MEMF(esi); /* movss */
    MEMF(esp + 0x10) = xmm0; /* movss */
    if (CMP_NE(MEM8(ebp + 0x155), 3)) goto loc_0018E11D; /* jne: not equal / not zero */

loc_0018E0DA: ;
    PUSH32(esp, edi);
    PUSH32(esp, 0); sub_00141960(); /* call 0x00141960 */

loc_0018E0E0: ;
    xmm0 = MEMF(ebp + 0x170); /* movss */
    xmm0 = xmm0 * MEMF(0x648E64); /* mulss */
    ecx = 0; /* xor self */
    SET_LO8(ecx, MEM8(ebp + 4));
    MEM8(esp + 0x20) = LO8(eax);
    edx = MEM32(esp + 0x20);
    edi = ebp + 0xC0;
    esi = esp + 0x10;
    PUSH32(esp, ecx);
    PUSH32(esp, 0xFF);
    PUSH32(esp, ecx);
    MEMF(esp) = xmm0; /* movss */
    PUSH32(esp, edx);
    PUSH32(esp, 0); sub_00144690(); /* call 0x00144690 */

loc_0018E119: ;
    esp = esp + 0x10;
    POP32(esp, edi);

loc_0018E11D: ;
    SET_LO8(ebx, 0); /* xor self */

loc_0018E11F: ;
    POP32(esp, esi);
    POP32(esp, ebp);
    SET_LO8(eax, LO8(ebx));
    POP32(esp, ebx);
    esp = esp + 0xC;
    esp += 4; return; /* ret */

}

/**
 * sub_0018E130
 * Original: 0x0018E130 - 0x0018E182 (82 bytes, 24 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0018E130(void)
{
    uint32_t ebp;
    int _flags = 0; /* fallback flag var */
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_0018E130: ;
    ecx = MEM32(esp + 4);
    SET_LO8(eax, MEM8(ecx + 0x176));
    SET_LO8(edx, MEM8(ecx + 0x174));
    PUSH32(esp, ebx);
    SET_LO8(ebx, MEM8(0x7FA20C));
    { int64_t _r = (int64_t)(int32_t)eax * (int64_t)(int32_t)LO8(ebx);
      eax = (uint32_t)_r; edx = (uint32_t)(_r >> 32); }
    SET_LO8(edx, LO8(edx) + LO8(eax));
    SET_LO8(eax, MEM8(ecx + 0x177));
    { int64_t _r = (int64_t)(int32_t)eax * (int64_t)(int32_t)LO8(ebx);
      eax = (uint32_t)_r; edx = (uint32_t)(_r >> 32); }
    SET_LO8(ebx, MEM8(ecx + 0x175));
    SET_LO8(ebx, LO8(ebx) + LO8(eax));
    MEM8(ecx + 0x174) = LO8(edx);
    SET_LO8(edx, LO8(edx) - 0x40);
    eax = 0; /* xor self */
    SET_LO8(eax, LO8(edx));
    SET_LO8(edx, LO8(edx) & 0xC0);
    (void)0; /* test LO8(eax), 0x40 - flags set for next jcc */
    PUSH32(esp, esi);
    MEM8(ecx + 0x175) = LO8(ebx);
    if (TEST_Z(LO8(eax), 0x40)) { sub_0018E182(); return; } /* je: equal / zero */

loc_0018E176: ;
    eax = eax & 0x3F;
    esi = 0x40;
    esi = esi - eax;
    g_seh_ebp = ebp; sub_0018E187(); return; /* tail jmp 0x0018E187 */

}

/**
 * sub_0018E360
 * Original: 0x0018E360 - 0x0018E608 (680 bytes, 150 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0018E360(void)
{
    int _flags = 0; /* fallback flag var */
    float xmm0, xmm5, xmm6, xmm7;

loc_0018E360: ;
    esp = esp - 0xA4;
    edx = MEM32(ecx);
    xmm0 = 0.0f; /* xorps self = zero */
    xmm6 = MEMF(0x648E14); /* movss */
    MEM32(esp + 0x6C) = edx;
    edx = MEM32(ecx + 4);
    ecx = MEM32(ecx + 8);
    MEM32(esp + 0x70) = edx;
    edx = MEM32(eax);
    PUSH32(esp, ebx);
    ebx = 0; /* xor self */
    MEMF(esp + 0x34) = xmm0; /* movss */
    MEMF(esp + 0x30) = xmm0; /* movss */
    MEMF(esp + 0x64) = xmm0; /* movss */
    MEMF(esp + 0x7C) = xmm0; /* movss */
    MEMF(esp + 0x80) = xmm0; /* movss */
    MEMF(esp + 0x84) = xmm0; /* movss */
    xmm0 = MEMF(0x59D944); /* movss */
    PUSH32(esp, esi);
    esi = 2;
    MEM32(esp + 0x7C) = ecx;
    ecx = MEM32(eax + 4);
    MEM32(esp + 0x8C) = edx;
    edx = MEM32(eax + 8);
    MEMF(esp + 0x2C) = xmm0; /* movss */
    xmm0 = MEMF(0x648D18); /* movss */
    MEM32(esp + 0x58) = 0x303;
    MEM32(esp + 0x40) = esi;
    MEM32(esp + 0x44) = esi;
    MEM32(esp + 0x48) = ebx;
    MEM32(esp + 0x4C) = 4;
    MEM32(esp + 0x50) = esi;
    MEM32(esp + 0x54) = ebx;
    MEM32(esp + 0x5C) = 0x2F;
    MEM8(esp + 0x3E) = LO8(ebx);
    MEM8(esp + 0x3D) = LO8(ebx);
    MEM8(esp + 0x3C) = LO8(ebx);
    MEM16(esp + 0x64) = LO16(ebx);
    MEM32(esp + 0x9C) = 0x3207;
    MEM8(esp + 0xA4) = 4;
    MEM8(esp + 0xA5) = 0xFF;
    MEM8(esp + 0xC) = LO8(ebx);
    MEM8(esp + 0xD) = LO8(ebx);
    MEMF(esp + 0x18) = xmm0; /* movss */
    MEMF(esp + 0x1C) = xmm6; /* movss */
    MEM8(esp + 0x20) = LO8(ebx);
    MEM8(esp + 0x21) = LO8(ebx);
    MEM32(esp + 0x90) = ecx;
    MEM32(esp + 0x94) = edx;
    PUSH32(esp, 0); sub_003E2480(); /* call 0x003E2480 */

loc_0018E464: ;
    if (TEST_Z(LO8(eax), 1)) goto loc_0018E473; /* je: equal / zero */

loc_0018E468: ;
    MEM32(esp + 0x9C) = 0x3247;

loc_0018E473: ;
    PUSH32(esp, 0); sub_003E2480(); /* call 0x003E2480 */

loc_0018E478: ;
    if (TEST_Z(LO8(eax), 1)) goto loc_0018E487; /* je: equal / zero */

loc_0018E47C: ;
    MEM32(esp + 0x9C) = MEM32(esp + 0x9C) | 0x80;

loc_0018E487: ;
    PUSH32(esp, 0); sub_003E2480(); /* call 0x003E2480 */

loc_0018E48C: ;
    edx = ((int32_t)eax < 0) ? 0xFFFFFFFF : 0; /* cdq */
    ecx = 0x19;
    { int64_t _dividend = ((int64_t)(int32_t)edx << 32) | eax;
      eax = (uint32_t)((int32_t)(_dividend / (int32_t)ecx));
      edx = (uint32_t)((int32_t)(_dividend % (int32_t)ecx)); }
    MEM16(esp + 0x60) = 0x1E;
    MEM16(esp + 0x62) = 8;
    edx = edx + 0x1E;
    MEM16(esp + 0x30) = LO16(edx);
    PUSH32(esp, 0); sub_003E2480(); /* call 0x003E2480 */

loc_0018E4AF: ;
    edx = ((int32_t)eax < 0) ? 0xFFFFFFFF : 0; /* cdq */
    ecx = 0x65;
    { int64_t _dividend = ((int64_t)(int32_t)edx << 32) | eax;
      eax = (uint32_t)((int32_t)(_dividend / (int32_t)ecx));
      edx = (uint32_t)((int32_t)(_dividend % (int32_t)ecx)); }
    SET_LO8(edx, LO8(edx) + 0x64);
    MEM8(esp + 0x3F) = LO8(edx);
    PUSH32(esp, 0); sub_003E1D70(); /* call 0x003E1D70 */

loc_0018E4C3: ;
    xmm5 = xmm0; /* movaps */
    xmm5 = xmm5 * MEMF(0x64908C); /* mulss */
    xmm5 = xmm5 + MEMF(0x6498B4); /* addss */
    MEMF(esp + 0x70) = xmm5; /* movss */
    MEMF(esp + 0x6C) = xmm5; /* movss */
    MEMF(esp + 8) = xmm5; /* movss */
    PUSH32(esp, 0); sub_003E2480(); /* call 0x003E2480 */

loc_0018E4ED: ;
    edx = ((int32_t)eax < 0) ? 0xFFFFFFFF : 0; /* cdq */
    ecx = 5;
    { int64_t _dividend = ((int64_t)(int32_t)edx << 32) | eax;
      eax = (uint32_t)((int32_t)(_dividend / (int32_t)ecx));
      edx = (uint32_t)((int32_t)(_dividend % (int32_t)ecx)); }
    SET_LO8(edx, LO8(edx) + 4);
    MEM8(esp + 0xE) = LO8(edx);
    PUSH32(esp, 0); sub_003E2480(); /* call 0x003E2480 */

loc_0018E501: ;
    edx = ((int32_t)eax < 0) ? 0xFFFFFFFF : 0; /* cdq */
    ecx = 5;
    { int64_t _dividend = ((int64_t)(int32_t)edx << 32) | eax;
      eax = (uint32_t)((int32_t)(_dividend / (int32_t)ecx));
      edx = (uint32_t)((int32_t)(_dividend % (int32_t)ecx)); }
    SET_LO8(edx, LO8(edx) + 4);
    MEM8(esp + 0xF) = LO8(edx);
    PUSH32(esp, 0); sub_003E1D70(); /* call 0x003E1D70 */

loc_0018E515: ;
    xmm7 = MEMF(0x648EB0); /* movss */
    xmm0 = xmm0 * xmm6; /* mulss */
    xmm0 = xmm0 + xmm7; /* addss */
    xmm0 = xmm0 * xmm5; /* mulss */
    MEMF(esp + 0x10) = xmm0; /* movss */
    PUSH32(esp, 0); sub_003E1D70(); /* call 0x003E1D70 */

loc_0018E534: ;
    xmm0 = xmm0 * xmm6; /* mulss */
    xmm0 = xmm0 + xmm7; /* addss */
    xmm0 = xmm0 * xmm5; /* mulss */
    MEMF(esp + 0x14) = xmm0; /* movss */
    PUSH32(esp, 0); sub_003E2480(); /* call 0x003E2480 */

loc_0018E54B: ;
    edx = ((int32_t)eax < 0) ? 0xFFFFFFFF : 0; /* cdq */
    ecx = 5;
    { int64_t _dividend = ((int64_t)(int32_t)edx << 32) | eax;
      eax = (uint32_t)((int32_t)(_dividend / (int32_t)ecx));
      edx = (uint32_t)((int32_t)(_dividend % (int32_t)ecx)); }
    SET_LO8(edx, LO8(edx) + 4);
    MEM8(esp + 0x22) = LO8(edx);
    PUSH32(esp, 0); sub_003E2480(); /* call 0x003E2480 */

loc_0018E55F: ;
    edx = ((int32_t)eax < 0) ? 0xFFFFFFFF : 0; /* cdq */
    ecx = 5;
    { int64_t _dividend = ((int64_t)(int32_t)edx << 32) | eax;
      eax = (uint32_t)((int32_t)(_dividend / (int32_t)ecx));
      edx = (uint32_t)((int32_t)(_dividend % (int32_t)ecx)); }
    SET_LO8(edx, LO8(edx) + 4);
    MEM8(esp + 0x23) = LO8(edx);
    PUSH32(esp, 0); sub_003E1D70(); /* call 0x003E1D70 */

loc_0018E573: ;
    xmm6 = MEMF(0x648D80); /* movss */
    xmm7 = MEMF(0x648EF8); /* movss */
    xmm0 = xmm0 * xmm6; /* mulss */
    xmm0 = xmm0 + xmm7; /* addss */
    xmm0 = xmm0 * xmm5; /* mulss */
    MEMF(esp + 0x24) = xmm0; /* movss */
    PUSH32(esp, 0); sub_003E1D70(); /* call 0x003E1D70 */

loc_0018E59A: ;
    xmm0 = xmm0 * xmm6; /* mulss */
    xmm0 = xmm0 + xmm7; /* addss */
    xmm0 = xmm0 * xmm5; /* mulss */
    MEMF(esp + 0x28) = xmm0; /* movss */
    PUSH32(esp, 0); sub_003E1D70(); /* call 0x003E1D70 */

loc_0018E5B1: ;
    xmm0 = xmm0 * MEMF(0x64A620); /* mulss */
    xmm0 = xmm0 + MEMF(0x64A61C); /* addss */
    xmm0 = xmm0 * MEMF(0x648D2C); /* mulss */
    PUSH32(esp, 0xFF);
    PUSH32(esp, 0x28);
    PUSH32(esp, ebx);
    edx = esp + 0x3C;
    PUSH32(esp, esi);
    PUSH32(esp, edx);
    MEMF(esp + 0xAC) = xmm0; /* movss */
    PUSH32(esp, 0); sub_00105450(); /* call 0x00105450 */

loc_0018E5E5: ;
    esp = esp + 0x14;
    if (CMP_EQ(eax, ebx)) goto loc_0018E5FF; /* je: equal / zero */

loc_0018E5EC: ;
    PUSH32(esp, edi);
    edi = eax + 0x170;
    ecx = 0xA;
    esi = esp + 0xC;
    memcpy((void*)XBOX_PTR(edi), (void*)XBOX_PTR(esi), ecx * 4);
    esi += ecx * 4; edi += ecx * 4; ecx = 0; /* rep movsd */
    POP32(esp, edi);

loc_0018E5FF: ;
    POP32(esp, esi);
    POP32(esp, ebx);
    esp = esp + 0xA4;
    esp += 4; return; /* ret */

}

/**
 * sub_0018E610
 * Original: 0x0018E610 - 0x0018E65B (75 bytes, 16 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0018E610(void)
{
    float xmm0;

loc_0018E610: ;
    esp = esp - 0x18;
    xmm0 = MEMF(esp + 0x1C); /* movss */
    MEMF(esp + 0xC) = xmm0; /* movss */
    xmm0 = MEMF(esp + 0x20); /* movss */
    MEMF(esp + 0x10) = xmm0; /* movss */
    xmm0 = MEMF(esp + 0x24); /* movss */
    MEMF(esp + 0x14) = xmm0; /* movss */
    xmm0 = 0.0f; /* xorps self = zero */
    eax = esp;
    ecx = esp + 0xC;
    MEMF(esp) = xmm0; /* movss */
    MEMF(esp + 4) = xmm0; /* movss */
    MEMF(esp + 8) = xmm0; /* movss */
    PUSH32(esp, 0); sub_0018E360(); /* call 0x0018E360 */

loc_0018E657: ;
    esp = esp + 0x18;
    esp += 4; return; /* ret */

}

/**
 * sub_0018E660
 * Original: 0x0018E660 - 0x0018E6B2 (82 bytes, 24 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0018E660(void)
{
    uint32_t ebp;
    int _flags = 0; /* fallback flag var */
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_0018E660: ;
    ecx = MEM32(esp + 4);
    SET_LO8(eax, MEM8(ecx + 0x176));
    SET_LO8(edx, MEM8(ecx + 0x174));
    PUSH32(esp, ebx);
    SET_LO8(ebx, MEM8(0x7FA20C));
    { int64_t _r = (int64_t)(int32_t)eax * (int64_t)(int32_t)LO8(ebx);
      eax = (uint32_t)_r; edx = (uint32_t)(_r >> 32); }
    SET_LO8(edx, LO8(edx) + LO8(eax));
    SET_LO8(eax, MEM8(ecx + 0x177));
    { int64_t _r = (int64_t)(int32_t)eax * (int64_t)(int32_t)LO8(ebx);
      eax = (uint32_t)_r; edx = (uint32_t)(_r >> 32); }
    SET_LO8(ebx, MEM8(ecx + 0x175));
    SET_LO8(ebx, LO8(ebx) + LO8(eax));
    MEM8(ecx + 0x174) = LO8(edx);
    SET_LO8(edx, LO8(edx) - 0x40);
    eax = 0; /* xor self */
    SET_LO8(eax, LO8(edx));
    SET_LO8(edx, LO8(edx) & 0xC0);
    (void)0; /* test LO8(eax), 0x40 - flags set for next jcc */
    PUSH32(esp, esi);
    MEM8(ecx + 0x175) = LO8(ebx);
    if (TEST_Z(LO8(eax), 0x40)) { sub_0018E6B2(); return; } /* je: equal / zero */

loc_0018E6A6: ;
    eax = eax & 0x3F;
    esi = 0x40;
    esi = esi - eax;
    g_seh_ebp = ebp; sub_0018E6B7(); return; /* tail jmp 0x0018E6B7 */

}

/**
 * sub_0018E7E0
 * Original: 0x0018E7E0 - 0x0018E804 (36 bytes, 13 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0018E7E0(void)
{
    uint32_t ebp;
    int _flags = 0; /* fallback flag var */
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_0018E7E0: ;
    ecx = MEM32(esp + 4);
    eax = 0; /* xor self */
    SET_LO8(eax, MEM8(ecx + 0x174));
    SET_LO8(eax, LO8(eax) - 0x40);
    SET_LO8(edx, LO8(eax));
    SET_LO8(edx, LO8(edx) & 0xC0);
    (void)0; /* test LO8(eax), 0x40 - flags set for next jcc */
    PUSH32(esp, esi);
    if (TEST_Z(LO8(eax), 0x40)) { sub_0018E804(); return; } /* je: equal / zero */

loc_0018E7F8: ;
    eax = eax & 0x3F;
    esi = 0x40;
    esi = esi - eax;
    g_seh_ebp = ebp; sub_0018E809(); return; /* tail jmp 0x0018E809 */

}

/**
 * sub_0018EB40
 * Original: 0x0018EB40 - 0x0018EB6F (47 bytes, 20 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0018EB40(void)
{
    uint32_t ebp;
    int _flags = 0; /* fallback flag var */
    float xmm0;
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_0018EB40: ;
    esp = esp - 0xC;
    PUSH32(esp, ebx);
    PUSH32(esp, ebp);
    ebp = MEM32(esp + 0x18);
    PUSH32(esp, esi);
    esi = MEM32(esp + 0x20);
    PUSH32(esp, esi);
    PUSH32(esp, ebp);
    SET_LO8(ebx, 1);
    PUSH32(esp, 0); sub_0018E7E0(); /* call 0x0018E7E0 */

loc_0018EB57: ;
    xmm0 = 0.0f; /* xorps self = zero */
    esp = esp + 8;
    /* comiss xmm0, MEMF(ebp + 0x8C) - sets EFLAGS */
    if ((xmm0 <= MEMF(ebp + 0x8C))) { sub_0018EB6F(); return; } /* jbe: below or equal (unsigned <=) */

loc_0018EB66: ;
    POP32(esp, esi);
    POP32(esp, ebp);
    SET_LO8(eax, LO8(ebx));
    POP32(esp, ebx);
    esp = esp + 0xC;
    esp += 4; return; /* ret */

}

/**
 * sub_0018EC80
 * Original: 0x0018EC80 - 0x0018ED3E (190 bytes, 50 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0018EC80(void)
{
    int _flags = 0; /* fallback flag var */
    float xmm0;

loc_0018EC80: ;
    ecx = MEM32(esp + 4);
    SET_LO8(eax, MEM8(ecx + 0x1C));
    esp = esp - 0x58;
    if (CMP_AE(LO8(eax), 1)) goto loc_0018ED3A; /* jae: above or equal (unsigned >=) */

loc_0018EC92: ;
    eax = ZX8(LO8(eax));
    eax = (uint32_t)((int32_t)eax * (int32_t)0x38);
    eax = eax + 0x5995A0;
    xmm0 = MEMF(eax); /* movss */
    edx = MEM32(eax + 0xC);
    PUSH32(esp, esi);
    PUSH32(esp, edi);
    MEM32(esp + 0xC) = ecx;
    ecx = MEM32(eax + 8);
    MEMF(esp + 0x10) = xmm0; /* movss */
    xmm0 = MEMF(eax + 4); /* movss */
    esi = eax + 0x10;
    MEM32(esp + 0x30) = ecx;
    eax = esp + 8;
    MEM32(esp + 0x34) = edx;
    PUSH32(esp, 0xFF);
    MEMF(esp + 0x18) = xmm0; /* movss */
    xmm0 = 0.0f; /* xorps self = zero */
    PUSH32(esp, eax);
    ecx = 0xA;
    edi = esp + 0x40;
    edx = 0x30;
    eax = eax | 0xFFFFFFFFu;
    MEM8(esp + 0x10) = 0xF;
    MEMF(esp + 0x20) = xmm0; /* movss */
    MEMF(esp + 0x24) = xmm0; /* movss */
    MEMF(esp + 0x28) = xmm0; /* movss */
    MEMF(esp + 0x2C) = xmm0; /* movss */
    MEMF(esp + 0x30) = xmm0; /* movss */
    MEM8(esp + 0x34) = 0;
    MEM8(esp + 0x35) = 0xFF;
    MEM8(esp + 0x36) = 2;
    memcpy((void*)XBOX_PTR(edi), (void*)XBOX_PTR(esi), ecx * 4);
    esi += ecx * 4; edi += ecx * 4; ecx = 0; /* rep movsd */
    PUSH32(esp, 0); sub_00113440(); /* call 0x00113440 */

loc_0018ED20: ;
    esp = esp + 8;
    if (TEST_Z(eax, eax)) goto loc_0018ED38; /* je: equal / zero */

loc_0018ED27: ;
    edi = eax + 0x13C;
    ecx = 0xC;
    esi = esp + 0x30;
    memcpy((void*)XBOX_PTR(edi), (void*)XBOX_PTR(esi), ecx * 4);
    esi += ecx * 4; edi += ecx * 4; ecx = 0; /* rep movsd */

loc_0018ED38: ;
    POP32(esp, edi);
    POP32(esp, esi);

loc_0018ED3A: ;
    esp = esp + 0x58;
    esp += 4; return; /* ret */

}

/**
 * sub_0018ED40
 * Original: 0x0018ED40 - 0x0018F078 (824 bytes, 181 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0018ED40(void)
{
    uint32_t ebp;
    int _flags = 0; /* fallback flag var */
    float xmm0, xmm1, xmm5, xmm6, xmm7;
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_0018ED40: ;
    esp = esp - 0xA8;
    PUSH32(esp, ebp);
    ebp = MEM32(esp + 0xB0);
    PUSH32(esp, 0); sub_003E1D70(); /* call 0x003E1D70 */

loc_0018ED53: ;
    xmm0 = xmm0 * MEMF(ebp + 0x64); /* mulss */
    xmm0 = xmm0 + MEMF(ebp + 0x60); /* addss */
    xmm0 = xmm0 * MEMF(0x7FA24C); /* mulss */
    xmm0 = xmm0 + MEMF(ebp + 0x4C); /* addss */
    xmm1 = MEMF(0x648D14); /* movss */
    /* comiss xmm0, xmm1 - sets EFLAGS */
    MEMF(ebp + 0x4C) = xmm0; /* movss */
    if ((xmm0 <= xmm1)) goto loc_0018F070; /* jbe: below or equal (unsigned <=) */

loc_0018ED80: ;
    xmm0 = MEMF(ebp + 0x78); /* movss */
    ecx = ebp + 0x50;
    edx = MEM32(ecx);
    eax = 0xFF;
    MEMF(esp + 0x18) = xmm0; /* movss */
    xmm0 = MEMF(ebp + 0x7C); /* movss */
    MEM32(esp + 0x74) = edx;
    edx = MEM32(ecx + 4);
    ecx = MEM32(ecx + 8);
    PUSH32(esp, ebx);
    ebx = 0; /* xor self */
    MEMF(esp + 0x20) = xmm0; /* movss */
    xmm0 = MEMF(ebp + 0x5C); /* movss */
    MEM8(esp + 0x40) = LO8(eax);
    MEM8(esp + 0x41) = LO8(eax);
    MEM8(esp + 0x42) = LO8(eax);
    MEM32(esp + 0x80) = ecx;
    ecx = 1;
    MEM16(esp + 0x66) = LO16(eax);
    SET_LO8(eax, LO8(eax) | 0xFF);
    PUSH32(esp, esi);
    MEMF(esp + 0x34) = xmm0; /* movss */
    xmm0 = 0.0f; /* xorps self = zero */
    PUSH32(esp, edi);
    MEM32(esp + 0x64) = 0x303;
    MEM8(esp + 0x18) = LO8(ebx);
    MEM8(esp + 0x19) = LO8(ebx);
    MEM8(esp + 0x2C) = LO8(ebx);
    MEM8(esp + 0x2D) = LO8(ebx);
    MEM32(esp + 0x68) = 0x2F;
    MEM16(esp + 0x3C) = 0x12C;
    MEMF(esp + 0x40) = xmm0; /* movss */
    MEMF(esp + 0x44) = xmm0; /* movss */
    MEM32(esp + 0x84) = edx;
    MEMF(esp + 0x98) = xmm0; /* movss */
    MEMF(esp + 0x9C) = xmm0; /* movss */
    MEMF(esp + 0xA0) = xmm0; /* movss */
    MEM16(esp + 0x6C) = LO16(ecx);
    MEM16(esp + 0x70) = LO16(ecx);
    MEMF(esp + 0x74) = xmm1; /* movss */
    MEM8(esp + 0xB0) = 4;
    MEM8(esp + 0xB1) = LO8(eax);
    MEM8(esp + 0xB2) = LO8(eax);
    MEM8(esp + 0xB3) = LO8(ebx);
    MEMF(esp + 0x8C) = xmm0; /* movss */
    MEMF(esp + 0x90) = xmm0; /* movss */
    MEMF(esp + 0x94) = xmm0; /* movss */
    /* nop */

loc_0018EE80: ;
    PUSH32(esp, 0); sub_003E2480(); /* call 0x003E2480 */

loc_0018EE85: ;
    edx = ((int32_t)eax < 0) ? 0xFFFFFFFF : 0; /* cdq */
    ecx = 5;
    { int64_t _dividend = ((int64_t)(int32_t)edx << 32) | eax;
      eax = (uint32_t)((int32_t)(_dividend / (int32_t)ecx));
      edx = (uint32_t)((int32_t)(_dividend % (int32_t)ecx)); }
    SET_LO8(edx, LO8(edx) + 4);
    MEM8(esp + 0x1A) = LO8(edx);
    PUSH32(esp, 0); sub_003E2480(); /* call 0x003E2480 */

loc_0018EE99: ;
    edx = ((int32_t)eax < 0) ? 0xFFFFFFFF : 0; /* cdq */
    ecx = 5;
    { int64_t _dividend = ((int64_t)(int32_t)edx << 32) | eax;
      eax = (uint32_t)((int32_t)(_dividend / (int32_t)ecx));
      edx = (uint32_t)((int32_t)(_dividend % (int32_t)ecx)); }
    SET_LO8(edx, LO8(edx) + 4);
    MEM8(esp + 0x1B) = LO8(edx);
    PUSH32(esp, 0); sub_003E1D70(); /* call 0x003E1D70 */

loc_0018EEAD: ;
    xmm5 = xmm0; /* movaps */
    xmm5 = xmm5 * MEMF(ebp + 0x6C); /* mulss */
    xmm5 = xmm5 + MEMF(ebp + 0x68); /* addss */
    MEMF(esp + 0x7C) = xmm5; /* movss */
    MEMF(esp + 0x78) = xmm5; /* movss */
    MEMF(esp + 0x14) = xmm5; /* movss */
    PUSH32(esp, 0); sub_003E1D70(); /* call 0x003E1D70 */

loc_0018EED1: ;
    xmm6 = MEMF(0x648E14); /* movss */
    xmm7 = MEMF(0x648EB0); /* movss */
    xmm0 = xmm0 * xmm6; /* mulss */
    xmm0 = xmm0 + xmm7; /* addss */
    xmm0 = xmm0 * xmm5; /* mulss */
    MEMF(esp + 0x1C) = xmm0; /* movss */
    PUSH32(esp, 0); sub_003E1D70(); /* call 0x003E1D70 */

loc_0018EEF8: ;
    xmm0 = xmm0 * xmm6; /* mulss */
    xmm0 = xmm0 + xmm7; /* addss */
    xmm0 = xmm0 * xmm5; /* mulss */
    MEMF(esp + 0x20) = xmm0; /* movss */
    PUSH32(esp, 0); sub_003E2480(); /* call 0x003E2480 */

loc_0018EF0F: ;
    edx = ((int32_t)eax < 0) ? 0xFFFFFFFF : 0; /* cdq */
    ecx = 5;
    { int64_t _dividend = ((int64_t)(int32_t)edx << 32) | eax;
      eax = (uint32_t)((int32_t)(_dividend / (int32_t)ecx));
      edx = (uint32_t)((int32_t)(_dividend % (int32_t)ecx)); }
    SET_LO8(edx, LO8(edx) + 4);
    MEM8(esp + 0x2E) = LO8(edx);
    PUSH32(esp, 0); sub_003E2480(); /* call 0x003E2480 */

loc_0018EF23: ;
    edx = ((int32_t)eax < 0) ? 0xFFFFFFFF : 0; /* cdq */
    ecx = 5;
    { int64_t _dividend = ((int64_t)(int32_t)edx << 32) | eax;
      eax = (uint32_t)((int32_t)(_dividend / (int32_t)ecx));
      edx = (uint32_t)((int32_t)(_dividend % (int32_t)ecx)); }
    SET_LO8(edx, LO8(edx) + 4);
    MEM8(esp + 0x2F) = LO8(edx);
    PUSH32(esp, 0); sub_003E1D70(); /* call 0x003E1D70 */

loc_0018EF37: ;
    xmm6 = MEMF(0x648D80); /* movss */
    xmm7 = MEMF(0x648EF8); /* movss */
    xmm0 = xmm0 * xmm6; /* mulss */
    xmm0 = xmm0 + xmm7; /* addss */
    xmm0 = xmm0 * xmm5; /* mulss */
    MEMF(esp + 0x30) = xmm0; /* movss */
    PUSH32(esp, 0); sub_003E1D70(); /* call 0x003E1D70 */

loc_0018EF5E: ;
    xmm0 = xmm0 * xmm6; /* mulss */
    xmm0 = xmm0 + xmm7; /* addss */
    xmm0 = xmm0 * xmm5; /* mulss */
    MEMF(esp + 0x34) = xmm0; /* movss */
    PUSH32(esp, 0); sub_003E1D70(); /* call 0x003E1D70 */

loc_0018EF75: ;
    xmm0 = xmm0 * MEMF(ebp + 0x74); /* mulss */
    xmm0 = xmm0 + MEMF(ebp + 0x70); /* addss */
    MEMF(esp + 0xA4) = xmm0; /* movss */
    PUSH32(esp, 0); sub_003E2480(); /* call 0x003E2480 */

loc_0018EF8D: ;
    ecx = ZX8(MEM8(ebp + 0x81));
    edx = ((int32_t)eax < 0) ? 0xFFFFFFFF : 0; /* cdq */
    ecx++;
    { int64_t _dividend = ((int64_t)(int32_t)edx << 32) | eax;
      eax = (uint32_t)((int32_t)(_dividend / (int32_t)ecx));
      edx = (uint32_t)((int32_t)(_dividend % (int32_t)ecx)); }
    SET_LO8(edx, LO8(edx) + MEM8(ebp + 0x80));
    MEM8(esp + 0x4B) = LO8(edx);
    PUSH32(esp, 0); sub_003E2480(); /* call 0x003E2480 */

loc_0018EFA7: ;
    esi = eax;
    esi = esi & 1;
    esi = esi << 1;
    PUSH32(esp, 0); sub_003E2480(); /* call 0x003E2480 */

loc_0018EFB3: ;
    eax = eax & 1;
    esi = esi | eax;
    esi = esi << 6;
    eax = 2;
    esi = esi | 0xF006;
    MEM32(esp + 0xA8) = esi;
    MEM32(esp + 0x4C) = eax;
    MEM32(esp + 0x50) = eax;
    MEM32(esp + 0x54) = ebx;
    SET_LO8(edx, MEM8(ebp + 4));
    MEM32(esp + 0x5C) = eax;
    (void)0; /* cmp MEM32(0x771CD0), 0x2EE - flags set for next jcc */
    MEM32(esp + 0x58) = 4;
    MEM32(esp + 0x60) = ebx;
    MEM8(esp + 0x10) = LO8(edx);
    if (CMP_GE(MEM32(0x771CD0), 0x2EE)) goto loc_0018F04E; /* jge: greater or equal (signed >=) */

loc_0018EFFC: ;
    eax = MEM32(esp + 0x10);
    PUSH32(esp, eax);
    PUSH32(esp, 0x5F);
    eax = 0x198;
    PUSH32(esp, 0); sub_000D9C60(); /* call 0x000D9C60 */

loc_0018F00D: ;
    esp = esp + 8;
    if (CMP_EQ(eax, ebx)) goto loc_0018F04E; /* je: equal / zero */

loc_0018F014: ;
    edx = eax + 0x2C;
    ecx = 0x1F;
    esi = esp + 0x3C;
    edi = edx;
    memcpy((void*)XBOX_PTR(edi), (void*)XBOX_PTR(esi), ecx * 4);
    esi += ecx * 4; edi += ecx * 4; ecx = 0; /* rep movsd */
    SET_LO16(ecx, MEM16(edx));
    MEM16(eax + 0x2E) = LO16(ecx);
    MEM32(0x771CD0) = MEM32(0x771CD0) + 1;
    edi = eax + 0x170;
    ecx = 0xA;
    esi = esp + 0x14;
    MEM8(eax + 0x154) = LO8(ebx);
    MEM8(eax + 0x160) = LO8(ebx);
    memcpy((void*)XBOX_PTR(edi), (void*)XBOX_PTR(esi), ecx * 4);
    esi += ecx * 4; edi += ecx * 4; ecx = 0; /* rep movsd */

loc_0018F04E: ;
    xmm0 = MEMF(ebp + 0x4C); /* movss */
    xmm1 = MEMF(0x648D14); /* movss */
    xmm0 = xmm0 - xmm1; /* subss */
    /* comiss xmm0, xmm1 - sets EFLAGS */
    MEMF(ebp + 0x4C) = xmm0; /* movss */
    if ((xmm0 > xmm1)) goto loc_0018EE80; /* ja: above (unsigned >) */

loc_0018F06D: ;
    POP32(esp, edi);
    POP32(esp, esi);
    POP32(esp, ebx);

loc_0018F070: ;
    POP32(esp, ebp);
    esp = esp + 0xA8;
    esp += 4; return; /* ret */

}

/**
 * sub_0018F080
 * Original: 0x0018F080 - 0x0018F38A (778 bytes, 196 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0018F080(void)
{
    uint32_t ebp;
    int _flags = 0; /* fallback flag var */
    float xmm0, xmm1, xmm2, xmm3;
    double _fp_stack[8];
    int _fp_top = 0;
    #define fp_push(v) (_fp_stack[--_fp_top & 7] = (v))
    #define fp_pop() (_fp_top++)
    #define fp_popp() (fp_pop())
    #define fp_top() _fp_stack[_fp_top & 7]
    #define fp_st1() _fp_stack[(_fp_top + 1) & 7]

loc_0018F080: ;
    PUSH32(esp, ebp);
    ebp = esp;
    esp = esp & 0xFFFFFFF0u;
    esp = esp - 0xE4;
    PUSH32(esp, ebx);
    PUSH32(esp, esi);
    PUSH32(esp, edi);
    PUSH32(esp, 0); sub_003E2480(); /* call 0x003E2480 */

loc_0018F094: ;
    if (TEST_NZ(LO8(eax), 0xF)) goto loc_0018F383; /* jne: not equal / not zero */

loc_0018F09C: ;
    eax = (uint32_t)(int32_t)SMEM16(ebp + 8);
    ecx = MEM32(0x8470DC);
    eax = (uint32_t)((int32_t)eax * (int32_t)0x770);
    xmm0 = MEMF(eax + ecx + 0x3BC); /* movss */
    xmm0 = xmm0 * MEMF(0x649220); /* mulss */
    esi = eax + ecx;
    MEM8(esp + 0x17) = 1;
    edi = (int32_t)xmm0; /* cvttss2si */
    PUSH32(esp, 0); sub_003E2480(); /* call 0x003E2480 */

loc_0018F0CE: ;
    edx = ((int32_t)eax < 0) ? 0xFFFFFFFF : 0; /* cdq */
    ecx = 0x29;
    { int64_t _dividend = ((int64_t)(int32_t)edx << 32) | eax;
      eax = (uint32_t)((int32_t)(_dividend / (int32_t)ecx));
      edx = (uint32_t)((int32_t)(_dividend % (int32_t)ecx)); }
    ebx = edx + edi + -20;
    PUSH32(esp, 0); sub_003E1D70(); /* call 0x003E1D70 */

loc_0018F0DF: ;
    xmm0 = xmm0 * MEMF(0x64A8E0); /* mulss */
    xmm0 = xmm0 + MEMF(0x64A8DC); /* addss */
    SET_LO8(eax, LO8(ebx));
    SET_LO8(eax, LO8(eax) & 0xC0);
    if (TEST_Z(LO8(ebx), 0x40)) goto loc_0018F108; /* je: equal / zero */

loc_0018F0F8: ;
    edx = 0; /* xor self */
    SET_LO8(edx, LO8(ebx));
    edi = 0x40;
    edx = edx & 0x3F;
    edi = edi - edx;
    goto loc_0018F111;

loc_0018F108: ;
    ecx = 0; /* xor self */
    SET_LO8(ecx, LO8(ebx));
    ecx = ecx & 0x3F;
    edi = ecx;

loc_0018F111: ;
    if (TEST_Z(LO8(eax), LO8(eax))) goto loc_0018F127; /* je: equal / zero */

loc_0018F115: ;
    if (CMP_EQ(LO8(eax), 0xC0)) goto loc_0018F127; /* je: equal / zero */

loc_0018F119: ;
    xmm2 = 0.0f; /* xorps self = zero */
    xmm2 = xmm2 - MEMF(edi * 4 + 0x743090); /* subss */
    goto loc_0018F130;

loc_0018F127: ;
    xmm2 = MEMF(edi * 4 + 0x743090); /* movss */

loc_0018F130: ;
    SET_LO8(ebx, LO8(ebx) - 0x40);
    SET_LO8(eax, LO8(ebx));
    SET_LO8(eax, LO8(eax) & 0xC0);
    if (TEST_Z(LO8(ebx), 0x40)) goto loc_0018F148; /* je: equal / zero */

loc_0018F13C: ;
    ebx = ebx & 0x3F;
    ecx = 0x40;
    ecx = ecx - ebx;
    goto loc_0018F14D;

loc_0018F148: ;
    ebx = ebx & 0x3F;
    ecx = ebx;

loc_0018F14D: ;
    if (TEST_Z(LO8(eax), LO8(eax))) goto loc_0018F163; /* je: equal / zero */

loc_0018F151: ;
    if (CMP_EQ(LO8(eax), 0xC0)) goto loc_0018F163; /* je: equal / zero */

loc_0018F155: ;
    xmm1 = 0.0f; /* xorps self = zero */
    xmm1 = xmm1 - MEMF(ecx * 4 + 0x743090); /* subss */
    goto loc_0018F16C;

loc_0018F163: ;
    xmm1 = MEMF(ecx * 4 + 0x743090); /* movss */

loc_0018F16C: ;
    xmm3 = MEMF(esi + 0x330); /* movss */
    xmm1 = xmm1 * xmm0; /* mulss */
    ebx = 0; /* xor self */
    xmm2 = xmm2 * xmm0; /* mulss */
    xmm0 = MEMF(esi + 0x338); /* movss */
    xmm0 = xmm0 - xmm2; /* subss */
    PUSH32(esp, ebx);
    MEMF(esp + 0x34) = xmm0; /* movss */
    MEMF(esp + 0x28) = xmm0; /* movss */
    xmm0 = MEMF(0x648E60); /* movss */
    eax = 0; /* xor self */
    PUSH32(esp, ebx);
    MEMF(esp + 0x48) = xmm0; /* movss */
    MEM32(esp + 0xE8) = ebx;
    MEM8(esp + 0xEC) = LO8(ebx);
    MEM8(esp + 0xED) = LO8(ebx);
    MEM32(esp + 0xF0) = ebx;
    ecx = 0x24;
    edi = esp + 0x58;
    { uint32_t _i; for (_i = 0; _i < ecx; _i++) MEM32(edi + _i*4) = eax; }
    edi += ecx * 4; ecx = 0; /* rep stosd */
    eax = MEM32(esi + 0x334);
    edx = esp + 0x48;
    PUSH32(esp, edx);
    PUSH32(esp, eax);
    xmm3 = xmm3 - xmm1; /* subss */
    xmm1 = MEMF(0x64A8D8); /* movss */
    ecx = esp + 0x2C;
    PUSH32(esp, ebx);
    PUSH32(esp, ecx);
    MEMF(esp + 0x40) = xmm3; /* movss */
    MEMF(esp + 0x34) = xmm3; /* movss */
    MEMF(esp + 0x38) = xmm1; /* movss */
    PUSH32(esp, 0); sub_0029FF30(); /* call 0x0029FF30 */

loc_0018F204: ;
    esp = esp + 0x18;
    if (TEST_Z(LO8(eax), LO8(eax))) { sub_0018F38A(); return; } /* je: equal / zero */

loc_0018F20F: ;
    xmm0 = MEMF(esp + 0x40); /* movss */
    fp_push(MEMF(esi + 0x334)); /* fld float */
    fp_st1() -= fp_top(); fp_pop(); /* fsub */
    MEMF(esp + 0x3C) = xmm0; /* movss */
    xmm0 = MEMF(0x648E60); /* movss */
    PUSH32(esp, ebx);
    MEMF(esp + 0x44) = xmm0; /* movss */
    MEMF(esp + 0x1C) = (float)fp_top(); fp_popp(); /* fstp */
    xmm0 = MEMF(esp + 0x2C); /* movss */
    eax = 0; /* xor self */
    PUSH32(esp, ebx);
    MEM32(esp + 0xE8) = ebx;
    MEM8(esp + 0xEC) = LO8(ebx);
    MEM8(esp + 0xED) = LO8(ebx);
    MEM32(esp + 0xF0) = ebx;
    ecx = 0x24;
    edi = esp + 0x58;
    { uint32_t _i; for (_i = 0; _i < ecx; _i++) MEM32(edi + _i*4) = eax; }
    edi += ecx * 4; ecx = 0; /* rep stosd */
    eax = MEM32(esp + 0x20);
    edx = esp + 0x48;
    PUSH32(esp, edx);
    PUSH32(esp, eax);
    MEMF(esp + 0x2C) = xmm0; /* movss */
    xmm0 = MEMF(esi + 0x334); /* movss */
    ecx = esp + 0x2C;
    MEMF(esp + 0x30) = xmm0; /* movss */
    xmm0 = MEMF(esp + 0x40); /* movss */
    PUSH32(esp, ebx);
    PUSH32(esp, ecx);
    MEMF(esp + 0x3C) = xmm0; /* movss */
    PUSH32(esp, 0); sub_0029FF30(); /* call 0x0029FF30 */

loc_0018F29F: ;
    xmm0 = MEMF(esp + 0x58); /* movss */
    esp = esp + 0x18;
    if (TEST_NZ(LO8(eax), LO8(eax))) goto loc_0018F2B2; /* jne: not equal / not zero */

loc_0018F2AC: ;
    xmm0 = MEMF(esp + 0x18); /* movss */

loc_0018F2B2: ;
    MEMF(esp + 0x2C) = xmm0; /* movss */
    PUSH32(esp, 0); sub_003E1D70(); /* call 0x003E1D70 */

loc_0018F2BD: ;
    SET_LO8(eax, MEM8(esp + 0x17));
    (void)0; /* test LO8(eax), LO8(eax) - flags set for next jcc */
    xmm1 = xmm0; /* movaps */
    xmm0 = 0.0f; /* xorps self = zero */
    xmm1 = xmm1 * xmm0; /* mulss */
    xmm1 = xmm1 + MEMF(0x64A498); /* addss */
    xmm1 = xmm1 * MEMF(0x648D2C); /* mulss */
    MEMF(esp + 0x34) = xmm1; /* movss */
    MEMF(esp + 0x38) = xmm0; /* movss */
    if (TEST_Z(LO8(eax), LO8(eax))) goto loc_0018F383; /* je: equal / zero */

loc_0018F2EF: ;
    PUSH32(esp, 0); sub_003E1D70(); /* call 0x003E1D70 */

loc_0018F2F4: ;
    xmm0 = xmm0 * MEMF(0x648CE0); /* mulss */
    xmm0 = xmm0 + MEMF(0x648D80); /* addss */
    PUSH32(esp, 0xFF);
    PUSH32(esp, 0x2A);
    eax = 0x64;
    MEMF(esp + 0x20) = xmm0; /* movss */
    PUSH32(esp, 0); sub_000D9C60(); /* call 0x000D9C60 */

loc_0018F31B: ;
    esp = esp + 8;
    if (CMP_EQ(eax, ebx)) goto loc_0018F383; /* je: equal / zero */

loc_0018F322: ;
    xmm0 = MEMF(esp + 0x18); /* movss */
    SET_LO8(ecx, LO8(ecx) | 0xFF);
    MEM8(eax + 0x38) = LO8(ecx);
    MEM8(eax + 0x3A) = LO8(ecx);
    MEMF(eax + 0x30) = xmm0; /* movss */
    MEMF(eax + 0x34) = xmm0; /* movss */
    MEM8(eax + 0x39) = 0xC;
    MEM8(eax + 0x2C) = 1;
    MEM8(eax + 0x3B) = 7;
    ecx = eax + 0x3C;
    edx = 0; /* xor self */
    MEM32(ecx) = edx;
    MEM32(ecx + 4) = edx;
    MEM32(ecx + 8) = edx;
    MEM32(ecx + 0xC) = edx;
    edx = MEM32(esp + 0x28);
    ecx = MEM32(esp + 0x2C);
    eax = eax + 0x4C;
    MEM32(eax) = edx;
    edx = MEM32(esp + 0x30);
    MEM32(eax + 4) = ecx;
    ecx = MEM32(esp + 0x34);
    MEM32(eax + 8) = edx;
    edx = MEM32(esp + 0x38);
    MEM32(eax + 0xC) = ecx;
    ecx = MEM32(esp + 0x3C);
    MEM32(eax + 0x10) = edx;
    MEM32(eax + 0x14) = ecx;

loc_0018F383: ;
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
 * sub_0018F700
 * Original: 0x0018F700 - 0x0018F779 (121 bytes, 33 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0018F700(void)
{
    int _flags = 0; /* fallback flag var */

loc_0018F700: ;
    esp = esp - 0x1C;
    PUSH32(esp, 0xB);
    eax = esp + 4;
    PUSH32(esp, eax);
    ecx = esp + 0xC;
    PUSH32(esp, 6);
    PUSH32(esp, ecx);
    MEM16(esp + 0x10) = LO16(esi);
    MEM32(esp + 0x14) = 0x89;
    MEM32(esp + 0x18) = 0x72;
    MEM32(esp + 0x1C) = 0x80;
    MEM32(esp + 0x20) = 0x86;
    MEM32(esp + 0x24) = 0x7A;
    MEM32(esp + 0x28) = 0x79;
    PUSH32(esp, 0); sub_000DAA60(); /* call 0x000DAA60 */

loc_0018F74B: ;
    ecx = MEM32(0x8493BC);
    esp = esp + 0x10;
    if (TEST_Z(ecx, ecx)) goto loc_0018F775; /* je: equal / zero */

loc_0018F758: ;
    SET_LO8(eax, MEM8(ecx + 0x70));
    (void)0; /* test LO8(eax), LO8(eax) - flags set for next jcc */
    SET_LO8(eax, (TEST_NZ(LO8(eax), LO8(eax))) ? 1 : 0); /* setne */
    if (TEST_Z(LO8(eax), LO8(eax))) goto loc_0018F775; /* je: equal / zero */

loc_0018F764: ;
    eax = MEM32(ecx + 0x74);
    PUSH32(esp, eax);
    PUSH32(esp, esi);
    PUSH32(esp, 0);
    SET_LO8(ecx, 0); /* xor self */
    PUSH32(esp, 0); sub_00154140(); /* call 0x00154140 */

loc_0018F772: ;
    esp = esp + 0xC;

loc_0018F775: ;
    esp = esp + 0x1C;
    esp += 4; return; /* ret */

}

/**
 * sub_0018F780
 * Original: 0x0018F780 - 0x0018F7C8 (72 bytes, 25 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0018F780(void)
{
    int _flags = 0; /* fallback flag var */

loc_0018F780: ;
    if (CMP_NE(MEM32(esp + 0xC), 0xB)) goto loc_0018F7C7; /* jne: not equal / not zero */

loc_0018F787: ;
    eax = MEM32(esp + 8);
    SET_LO16(ecx, MEM16(eax));
    PUSH32(esp, esi);
    esi = MEM32(esp + 8);
    if (CMP_NE(LO16(ecx), MEM16(esi + 0x180))) goto loc_0018F7C6; /* jne: not equal / not zero */

loc_0018F79C: ;
    SET_LO8(eax, MEM8(0x8472BD));
    if (TEST_NZ(LO8(eax), LO8(eax))) goto loc_0018F7C6; /* jne: not equal / not zero */

loc_0018F7A5: ;
    edx = esi;
    PUSH32(esp, 0); sub_000DAD90(); /* call 0x000DAD90 */

loc_0018F7AC: ;
    eax = MEM32(esi);
    if (CMP_L(eax, 2)) goto loc_0018F7C6; /* jl: less (signed <) */

loc_0018F7B3: ;
    eax = (uint32_t)((int32_t)eax * (int32_t)0x70);
    eax = MEM32(eax + 0x5906BC);
    if (TEST_Z(eax, eax)) { sub_0018F7C8(); return; } /* je: equal / zero */

loc_0018F7C0: ;
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, esi);
    PUSH32(esp, 0); RECOMP_ICALL_SAFE(eax, _icall_esp); /* indirect call */
    }

loc_0018F7C3: ;
    esp = esp + 4;

loc_0018F7C6: ;
    POP32(esp, esi);

loc_0018F7C7: ;
    esp += 4; return; /* ret */

}

/**
 * sub_0018F860
 * Original: 0x0018F860 - 0x0018F885 (37 bytes, 13 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0018F860(void)
{
    int _flags = 0; /* fallback flag var */

loc_0018F860: ;
    if (CMP_EQ(MEM8(0x76F0E0), 1)) goto loc_0018F884; /* je: equal / zero */

loc_0018F869: ;
    eax = SX16(LO16(esi));
    PUSH32(esp, 0); sub_000FCC90(); /* call 0x000FCC90 */

loc_0018F871: ;
    if (TEST_Z(eax, eax)) goto loc_0018F884; /* je: equal / zero */

loc_0018F875: ;
    PUSH32(esp, 0);
    PUSH32(esp, esi);
    PUSH32(esp, 1);
    SET_LO8(ecx, 1);
    PUSH32(esp, 0); sub_00154140(); /* call 0x00154140 */

loc_0018F881: ;
    esp = esp + 0xC;

loc_0018F884: ;
    esp += 4; return; /* ret */

}

/**
 * sub_0018F890
 * Original: 0x0018F890 - 0x0018FDD3 (1347 bytes, 268 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0018F890(void)
{
    uint32_t ebp;
    int _flags = 0; /* fallback flag var */
    float xmm0, xmm1, xmm2;

loc_0018F890: ;
    PUSH32(esp, ebp);
    ebp = esp;
    esp = esp & 0xFFFFFFF0u;
    esp = esp - 0x168;
    PUSH32(esp, esi);
    esi = MEM32(ebx + 0x34);
    PUSH32(esp, edi);
    edx = esi;
    eax = esp + 0xC0;
    PUSH32(esp, 0); sub_002A0430(); /* call 0x002A0430 */

loc_0018F8AF: ;
    esi = esi + 0x78;
    eax = MEM32(esi);
    ecx = MEM32(esi + 4);
    edx = MEM32(esi + 8);
    MEM32(esp + 0x68) = eax;
    xmm0 = MEMF(esp + 0x68); /* movss */
    MEMF(esp + 0x14) = xmm0; /* movss */
    eax = esp + 0xC0;
    MEM32(esp + 0x6C) = ecx;
    xmm0 = MEMF(esp + 0x6C); /* movss */
    xmm0 = xmm0 - MEMF(0x648F08); /* subss */
    PUSH32(esp, eax);
    MEM32(esp + 0x74) = edx;
    xmm1 = MEMF(esp + 0x74); /* movss */
    MEMF(esp + 0x1C) = xmm0; /* movss */
    xmm0 = xmm0 + MEMF(0x648EC8); /* addss */
    PUSH32(esp, ecx);
    eax = esp + 0x1C;
    MEMF(esp + 0x24) = xmm1; /* movss */
    MEMF(esp) = xmm0; /* movss */
    PUSH32(esp, 0); sub_0029FB70(); /* call 0x0029FB70 */

loc_0018F911: ;
    esp = esp + 8;
    if (TEST_Z(LO8(eax), LO8(eax))) goto loc_0018FDCD; /* je: equal / zero */

loc_0018F91C: ;
    SET_LO8(eax, MEM8(ebp + 8));
    (void)0; /* test LO8(eax), LO8(eax) - flags set for next jcc */
    xmm1 = MEMF(esp + 0x68); /* movss */
    xmm0 = MEMF(esp + 0xC0); /* movss */
    xmm2 = MEMF(esp + 0x70); /* movss */
    MEMF(esp + 0x74) = xmm1; /* movss */
    MEMF(esp + 0x78) = xmm0; /* movss */
    MEMF(esp + 0x7C) = xmm2; /* movss */
    if (TEST_Z(LO8(eax), LO8(eax))) goto loc_0018FADB; /* je: equal / zero */

loc_0018F94E: ;
    ecx = 0x10;
    esi = 0x5A0350;
    edi = esp + 0x80;
    memcpy((void*)XBOX_PTR(edi), (void*)XBOX_PTR(esi), ecx * 4);
    esi += ecx * 4; edi += ecx * 4; ecx = 0; /* rep movsd */
    MEMF(esp + 0xB4) = xmm0; /* movss */
    xmm0 = MEMF(0x648F08); /* movss */
    MEMF(esp + 0x40) = xmm0; /* movss */
    xmm0 = MEMF(0x648FD8); /* movss */
    MEMF(esp + 0x44) = xmm0; /* movss */
    xmm0 = MEMF(0x648F60); /* movss */
    MEMF(esp + 0x5C) = xmm0; /* movss */
    xmm0 = MEMF(0x648CE4); /* movss */
    MEMF(esp + 0x38) = xmm0; /* movss */
    xmm0 = MEMF(0x648D1C); /* movss */
    MEMF(esp + 0x3C) = xmm0; /* movss */
    xmm0 = MEMF(0x59A8D8); /* movss */
    MEMF(esp + 0x60) = xmm0; /* movss */
    xmm0 = MEMF(0x648CDC); /* movss */
    MEMF(esp + 0x64) = xmm0; /* movss */
    MEMF(esp + 0x20) = xmm0; /* movss */
    xmm0 = MEMF(0x648CF0); /* movss */
    MEMF(esp + 0xB0) = xmm1; /* movss */
    xmm1 = MEMF(0x648D14); /* movss */
    MEMF(esp + 0x28) = xmm0; /* movss */
    MEMF(esp + 0x2C) = xmm0; /* movss */
    xmm0 = MEMF(0x648EC8); /* movss */
    MEMF(esp + 0x50) = xmm1; /* movss */
    xmm1 = MEMF(0x648D40); /* movss */
    MEMF(esp + 0x30) = xmm0; /* movss */
    xmm0 = MEMF(0x648EA4); /* movss */
    MEMF(esp + 0xB8) = xmm2; /* movss */
    xmm2 = 0.0f; /* xorps self = zero */
    MEMF(esp + 0x54) = xmm1; /* movss */
    xmm1 = MEMF(0x648CE0); /* movss */
    MEMF(esp + 0x34) = xmm0; /* movss */
    xmm0 = MEMF(0x649ED4); /* movss */
    esi = 2;
    MEMF(esp + 0x58) = xmm2; /* movss */
    MEMF(esp + 0x48) = xmm1; /* movss */
    MEMF(esp + 0x4C) = xmm1; /* movss */
    MEMF(esp + 0x24) = xmm2; /* movss */
    MEMF(esp + 0x14) = xmm0; /* movss */
    MEMF(esp + 0x18) = xmm2; /* movss */
    PUSH32(esp, 0); sub_00190A40(); /* call 0x00190A40 */

loc_0018FA71: ;
    xmm0 = MEMF(0x648D14); /* movss */
    MEMF(0x6B7A20) = xmm0; /* movss */
    xmm0 = 0.0f; /* xorps self = zero */
    PUSH32(esp, 0x1030002);
    MEMF(0x6B7A24) = xmm0; /* movss */
    PUSH32(esp, 0); sub_00191850(); /* call 0x00191850 */

loc_0018FA96: ;
    PUSH32(esp, eax);
    ecx = esp + 0x1C;
    PUSH32(esp, ecx);
    edx = esp + 0x3C;
    PUSH32(esp, edx);
    eax = esp + 0x38;
    PUSH32(esp, eax);
    ecx = esp + 0x34;
    PUSH32(esp, ecx);
    edx = esp + 0x60;
    PUSH32(esp, edx);
    eax = esp + 0x6C;
    PUSH32(esp, eax);
    ecx = esp + 0x58;
    PUSH32(esp, ecx);
    edx = esp + 0x7C;
    PUSH32(esp, edx);
    eax = esp + 0x68;
    PUSH32(esp, eax);
    ecx = esp + 0xAC;
    PUSH32(esp, ecx);
    eax = esp + 0x90;
    PUSH32(esp, 0); sub_00190E40(); /* call 0x00190E40 */

loc_0018FAD8: ;
    esp = esp + 0x30;

loc_0018FADB: ;
    esi = 3;
    PUSH32(esp, 0); sub_00190A40(); /* call 0x00190A40 */

loc_0018FAE5: ;
    xmm0 = MEMF(0x648D14); /* movss */
    MEMF(0x6B7A20) = xmm0; /* movss */
    xmm0 = 0.0f; /* xorps self = zero */
    PUSH32(esp, 0x3E800000);
    esi = ebx + 0xD0;
    ecx = 0; /* xor self */
    eax = esp + 0x78;
    edi = esp + 0x84;
    MEMF(0x6B7A24) = xmm0; /* movss */
    PUSH32(esp, 0); sub_00191890(); /* call 0x00191890 */

loc_0018FB1D: ;
    PUSH32(esp, 0);
    PUSH32(esp, 0x2A8);
    PUSH32(esp, 0x2A7);
    PUSH32(esp, 0x42C80000);
    PUSH32(esp, 0x40800000);
    PUSH32(esp, 0x3F800000);
    eax = edi;
    PUSH32(esp, 0); sub_00191B00(); /* call 0x00191B00 */

loc_0018FB3F: ;
    PUSH32(esp, 0);
    PUSH32(esp, 0x2A8);
    PUSH32(esp, 0x2A7);
    PUSH32(esp, 0x42C80000);
    PUSH32(esp, 0x41600000);
    PUSH32(esp, 0x3F800000);
    eax = edi;
    PUSH32(esp, 0); sub_00191B00(); /* call 0x00191B00 */

loc_0018FB61: ;
    SET_LO8(eax, MEM8(ebp + 0xC));
    esp = esp + 0x34;
    if (TEST_Z(LO8(eax), LO8(eax))) goto loc_0018FDCD; /* je: equal / zero */

loc_0018FB6F: ;
    xmm1 = MEMF(0x648F60); /* movss */
    xmm0 = MEMF(0x64935C); /* movss */
    MEMF(esp + 0x2C) = xmm1; /* movss */
    xmm1 = MEMF(0x648CE4); /* movss */
    MEMF(esp + 0x20) = xmm1; /* movss */
    xmm1 = MEMF(0x64908C); /* movss */
    MEMF(esp + 0x14) = xmm1; /* movss */
    xmm1 = MEMF(0x648D40); /* movss */
    MEMF(esp + 0x48) = xmm1; /* movss */
    xmm1 = MEMF(0x648E64); /* movss */
    MEMF(esp + 0x30) = xmm0; /* movss */
    xmm0 = MEMF(0x648D1C); /* movss */
    MEMF(esp + 0x4C) = xmm1; /* movss */
    xmm1 = MEMF(0x648EC0); /* movss */
    MEMF(esp + 0x34) = xmm0; /* movss */
    xmm0 = 0.0f; /* xorps self = zero */
    MEMF(esp + 0x50) = xmm1; /* movss */
    xmm1 = MEMF(0x648EC8); /* movss */
    MEMF(esp + 0x28) = xmm0; /* movss */
    MEMF(esp + 0x24) = xmm0; /* movss */
    MEMF(esp + 0x18) = xmm0; /* movss */
    MEMF(esp + 0x3C) = xmm0; /* movss */
    MEMF(esp + 0x5C) = xmm0; /* movss */
    MEMF(esp + 0x64) = xmm0; /* movss */
    xmm0 = MEMF(0x648EF8); /* movss */
    MEMF(esp + 0x54) = xmm1; /* movss */
    xmm1 = MEMF(0x64A2CC); /* movss */
    MEMF(0x6B7A20) = xmm0; /* movss */
    xmm0 = MEMF(0x59D950); /* movss */
    MEMF(esp + 0x38) = xmm1; /* movss */
    xmm1 = MEMF(0x648D14); /* movss */
    MEMF(0x6B7A24) = xmm0; /* movss */
    xmm0 = MEMF(esp + 0x68); /* movss */
    MEMF(esp + 0x58) = xmm1; /* movss */
    xmm1 = MEMF(0x648D50); /* movss */
    ecx = 0x10;
    esi = 0x5A0350;
    memcpy((void*)XBOX_PTR(edi), (void*)XBOX_PTR(esi), ecx * 4);
    esi += ecx * 4; edi += ecx * 4; ecx = 0; /* rep movsd */
    MEMF(esp + 0xB0) = xmm0; /* movss */
    xmm0 = MEMF(esp + 0xC0); /* movss */
    xmm0 = xmm0 - MEMF(0x649030); /* subss */
    MEMF(esp + 0x40) = xmm1; /* movss */
    xmm1 = MEMF(0x546060); /* movss */
    MEMF(esp + 0x44) = xmm1; /* movss */
    xmm1 = MEMF(0x64A2C8); /* movss */
    MEMF(esp + 0xB4) = xmm0; /* movss */
    xmm0 = MEMF(esp + 0x70); /* movss */
    esi = 0; /* xor self */
    MEMF(esp + 0x60) = xmm1; /* movss */
    MEMF(esp + 0xB8) = xmm0; /* movss */
    PUSH32(esp, 0); sub_00190A40(); /* call 0x00190A40 */

loc_0018FCC5: ;
    xmm0 = MEMF(0x648D14); /* movss */
    xmm1 = MEMF(0x649030); /* movss */
    PUSH32(esp, 0x1010002);
    PUSH32(esp, 0x191380);
    edx = esp + 0x68;
    PUSH32(esp, edx);
    eax = esp + 0x4C;
    PUSH32(esp, eax);
    ecx = esp + 0x68;
    PUSH32(esp, ecx);
    edx = esp + 0x4C;
    PUSH32(esp, edx);
    eax = esp + 0x68;
    PUSH32(esp, eax);
    ecx = esp + 0x64;
    PUSH32(esp, ecx);
    edx = esp + 0x40;
    PUSH32(esp, edx);
    eax = esp + 0x4C;
    PUSH32(esp, eax);
    ecx = esp + 0x58;
    esi = 1;
    PUSH32(esp, ecx);
    edx = esp + 0xAC;
    MEM32(0x84943C) = esi;
    MEMF(0x6B7A28) = xmm0; /* movss */
    MEMF(0x6B7A2C) = xmm1; /* movss */
    MEMF(0x6B7A30) = xmm0; /* movss */
    PUSH32(esp, edx);
    eax = esp + 0x44;
    PUSH32(esp, 0); sub_00190E40(); /* call 0x00190E40 */

loc_0018FD40: ;
    PUSH32(esp, 0); sub_00190A40(); /* call 0x00190A40 */

loc_0018FD45: ;
    xmm0 = MEMF(0x648D14); /* movss */
    xmm1 = MEMF(0x649030); /* movss */
    PUSH32(esp, 0x1010002);
    PUSH32(esp, 0x191380);
    eax = esp + 0x98;
    PUSH32(esp, eax);
    ecx = esp + 0x7C;
    PUSH32(esp, ecx);
    edx = esp + 0x98;
    PUSH32(esp, edx);
    eax = esp + 0x7C;
    PUSH32(esp, eax);
    ecx = esp + 0x98;
    PUSH32(esp, ecx);
    edx = esp + 0x94;
    PUSH32(esp, edx);
    eax = esp + 0x70;
    PUSH32(esp, eax);
    ecx = esp + 0x7C;
    PUSH32(esp, ecx);
    edx = esp + 0x88;
    PUSH32(esp, edx);
    eax = esp + 0xDC;
    PUSH32(esp, eax);
    eax = esp + 0x74;
    MEM32(0x84943C) = esi;
    MEMF(0x6B7A28) = xmm0; /* movss */
    MEMF(0x6B7A2C) = xmm1; /* movss */
    MEMF(0x6B7A30) = xmm0; /* movss */
    PUSH32(esp, 0); sub_00190E40(); /* call 0x00190E40 */

loc_0018FDCA: ;
    esp = esp + 0x60;

loc_0018FDCD: ;
    POP32(esp, edi);
    POP32(esp, esi);
    esp = ebp;
    POP32(esp, ebp);
    esp += 4; return; /* ret */

}

/**
 * sub_0018FDE0
 * Original: 0x0018FDE0 - 0x0018FE1C (60 bytes, 22 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0018FDE0(void)
{
    uint32_t ebp;
    int _flags = 0; /* fallback flag var */
    float xmm0, xmm1;

loc_0018FDE0: ;
    PUSH32(esp, ebp);
    ebp = esp;
    esp = esp & 0xFFFFFFF0u;
    esp = esp - 0x64;
    xmm0 = 0.0f; /* xorps self = zero */
    PUSH32(esp, ebx);
    ebx = MEM32(ebp + 8);
    xmm1 = MEMF(ebx + 0x124); /* movss */
    /* comiss xmm1, xmm0 - sets EFLAGS */
    PUSH32(esp, esi);
    esi = MEM32(ebx + 0x34);
    PUSH32(esp, edi);
    if ((xmm1 <= xmm0)) { sub_0018FE1C(); return; } /* jbe: below or equal (unsigned <=) */

loc_0018FE02: ;
    xmm0 = xmm1; /* movaps */
    xmm0 = xmm0 - MEMF(0x7FA21C); /* subss */
    MEMF(ebx + 0x124) = xmm0; /* movss */
    POP32(esp, edi);
    POP32(esp, esi);
    POP32(esp, ebx);
    esp = ebp;
    POP32(esp, ebp);
    esp += 4; return; /* ret */

}

/**
 * sub_0018FF60
 * Original: 0x0018FF60 - 0x0018FFB6 (86 bytes, 30 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0018FF60(void)
{

loc_0018FF60: ;
    esp = esp - 8;
    PUSH32(esp, ebx);
    PUSH32(esp, esi);
    esi = MEM32(esp + 0x14);
    eax = MEM32(esi + 0x34);
    SET_LO8(ecx, MEM8(esi + 0x38));
    PUSH32(esp, 0xA);
    edx = esp + 0xC;
    PUSH32(esp, edx);
    PUSH32(esp, 2);
    PUSH32(esp, 0x6B7728);
    MEM32(esp + 0x18) = eax;
    MEM8(esp + 0x1C) = LO8(ecx);
    PUSH32(esp, 0); sub_000DAA60(); /* call 0x000DAA60 */

loc_0018FF8A: ;
    PUSH32(esp, 0xA);
    eax = esp + 0x1C;
    PUSH32(esp, eax);
    PUSH32(esp, 2);
    PUSH32(esp, 0x6B3F84);
    PUSH32(esp, 0); sub_000DAA60(); /* call 0x000DAA60 */

loc_0018FF9D: ;
    PUSH32(esp, 0); sub_001964E0(); /* call 0x001964E0 */

loc_0018FFA2: ;
    PUSH32(esp, 0);
    PUSH32(esp, 1);
    ebx = esi;
    PUSH32(esp, 0); sub_0018F890(); /* call 0x0018F890 */

loc_0018FFAD: ;
    esp = esp + 0x28;
    POP32(esp, esi);
    POP32(esp, ebx);
    esp = esp + 8;
    esp += 4; return; /* ret */

}

/**
 * sub_0018FFC0
 * Original: 0x0018FFC0 - 0x0018FFDC (28 bytes, 12 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0018FFC0(void)
{

loc_0018FFC0: ;
    PUSH32(esp, ebx);
    PUSH32(esp, edi);
    edi = MEM32(esp + 0xC);
    PUSH32(esp, 0); sub_00196550(); /* call 0x00196550 */

loc_0018FFCB: ;
    PUSH32(esp, 0);
    PUSH32(esp, 0);
    ebx = edi;
    PUSH32(esp, 0); sub_0018F890(); /* call 0x0018F890 */

loc_0018FFD6: ;
    esp = esp + 8;
    POP32(esp, edi);
    POP32(esp, ebx);
    esp += 4; return; /* ret */

}

/**
 * sub_0018FFE0
 * Original: 0x0018FFE0 - 0x0018FFFA (26 bytes, 11 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0018FFE0(void)
{
    int _flags = 0; /* fallback flag var */

loc_0018FFE0: ;
    PUSH32(esp, esi);
    PUSH32(esp, edi);
    edi = MEM32(esp + 0xC);
    eax = MEM32(edi + 0x128);
    (void)0; /* test eax, eax - flags set for next jcc */
    esi = MEM32(edi + 0x34);
    if (TEST_Z(eax, eax)) { sub_0018FFFA(); return; } /* je: equal / zero */

loc_0018FFF3: ;
    POP32(esp, edi);
    MEM8(eax + 0x74) = 1;
    POP32(esp, esi);
    esp += 4; return; /* ret */

}

/**
 * sub_00190010
 * Original: 0x00190010 - 0x00190078 (104 bytes, 25 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00190010(void)
{
    uint32_t ebp;
    int _flags = 0; /* fallback flag var */
    float xmm0;
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_00190010: ;
    esp = esp - 0x48;
    xmm0 = MEMF(esi + 0x78); /* movss */
    MEMF(esp + 0xC) = xmm0; /* movss */
    xmm0 = MEMF(esi + 0x7C); /* movss */
    xmm0 = xmm0 + MEMF(0x59D948); /* addss */
    PUSH32(esp, ebp);
    ebp = MEM32(esp + 0x50);
    MEMF(esp + 0x14) = xmm0; /* movss */
    xmm0 = MEMF(esi + 0x80); /* movss */
    PUSH32(esp, edi);
    MEMF(esp + 0x1C) = xmm0; /* movss */
    xmm0 = MEMF(esi + 0x7C); /* movss */
    xmm0 = xmm0 - MEMF(0x648EA4); /* subss */
    PUSH32(esp, ecx);
    edi = ebp + 0x50;
    eax = edi;
    ecx = esp + 0x18;
    MEM8(esp + 0x10) = 1;
    MEMF(esp) = xmm0; /* movss */
    PUSH32(esp, 0); sub_0029F750(); /* call 0x0029F750 */

loc_0019006B: ;
    esp = esp + 4;
    if (TEST_Z(LO8(eax), LO8(eax))) { sub_00190078(); return; } /* je: equal / zero */

loc_00190072: ;
    xmm0 = MEMF(edi); /* movss */
    g_seh_ebp = ebp; sub_00190085(); return; /* tail jmp 0x00190085 */

}

/**
 * sub_00190130
 * Original: 0x00190130 - 0x00190360 (560 bytes, 120 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00190130(void)
{
    uint32_t ebp;
    int _flags = 0; /* fallback flag var */
    float xmm0, xmm1, xmm2, xmm3, xmm5, xmm6, xmm7;

loc_00190130: ;
    PUSH32(esp, ebp);
    ebp = esp;
    esp = esp & 0xFFFFFFF0u;
    esp = esp - 0x68;
    xmm0 = MEMF(ebp + 8); /* movss */
    PUSH32(esp, esi);
    PUSH32(esp, edi);
    edi = MEM32(ebp + 0x20);
    esi = MEM32(edi + 0x38);
    (void)0; /* test esi, esi - flags set for next jcc */
    MEMF(esp + 0x24) = xmm0; /* movss */
    xmm0 = MEMF(ebp + 0xC); /* movss */
    MEMF(esp + 0x28) = xmm0; /* movss */
    xmm0 = MEMF(ebp + 0x10); /* movss */
    MEMF(esp + 0x2C) = xmm0; /* movss */
    if (TEST_Z(esi, esi)) goto loc_001901D0; /* je: equal / zero */

loc_00190166: ;
    eax = esp + 0x30;
    PUSH32(esp, eax);
    PUSH32(esp, 0x5F49CC);
    PUSH32(esp, 0); sub_002F7810(); /* call 0x002F7810 */

loc_00190175: ;
    PUSH32(esp, 0); sub_003E1D70(); /* call 0x003E1D70 */

loc_0019017A: ;
    xmm0 = xmm0 * MEMF(0x64908C); /* mulss */
    xmm0 = xmm0 - MEMF(0x648CE4); /* subss */
    MEMF(esp + 0x20) = xmm0; /* movss */
    PUSH32(esp, 0); sub_003E1D70(); /* call 0x003E1D70 */

loc_00190195: ;
    xmm0 = xmm0 * MEMF(0x648CDC); /* mulss */
    xmm0 = xmm0 - MEMF(0x648D18); /* subss */
    ecx = esp + 0x38;
    PUSH32(esp, ecx);
    edx = esp + 0x30;
    PUSH32(esp, edx);
    eax = esp + 0x28;
    MEMF(esp + 0x2C) = xmm0; /* movss */
    xmm0 = MEMF(0x6490B4); /* movss */
    PUSH32(esp, eax);
    MEMF(esp + 0x34) = xmm0; /* movss */
    PUSH32(esp, 0); sub_001101F0(); /* call 0x001101F0 */

loc_001901CD: ;
    esp = esp + 0x14;

loc_001901D0: ;
    PUSH32(esp, 0); sub_003E1D70(); /* call 0x003E1D70 */

loc_001901D5: ;
    xmm7 = 0.0f; /* xorps self = zero */
    xmm6 = MEMF(0x648D14); /* movss */
    xmm1 = xmm0; /* movaps */
    xmm1 = xmm1 * MEMF(0x648D80); /* mulss */
    xmm1 = xmm1 + xmm6; /* addss */
    xmm1 = xmm1 * MEMF(ebp + 0x14); /* mulss */
    xmm0 = xmm7; /* movaps */
    xmm0 = xmm0 - xmm1; /* subss */
    MEMF(esp + 0x18) = xmm0; /* movss */
    xmm0 = xmm7; /* movaps */
    xmm0 = xmm0 - MEMF(ebp + 0x18); /* subss */
    /* comiss xmm7, xmm0 - sets EFLAGS */
    MEMF(esp + 0x14) = xmm7; /* movss */
    if ((xmm7 > xmm0)) goto loc_0019021A; /* ja: above (unsigned >) */

loc_00190214: ;
    MEMF(esp + 0x14) = xmm0; /* movss */

loc_0019021A: ;
    PUSH32(esp, 0); sub_003E1D70(); /* call 0x003E1D70 */

loc_0019021F: ;
    xmm5 = xmm0; /* movaps */
    xmm5 = xmm5 + xmm6; /* addss */
    xmm5 = xmm5 * MEMF(0x648CE0); /* mulss */
    xmm5 = xmm5 + MEMF(esp + 0x14); /* addss */
    PUSH32(esp, 0); sub_003E1D70(); /* call 0x003E1D70 */

loc_00190239: ;
    xmm2 = MEMF(esp + 0x18); /* movss */
    xmm1 = xmm0; /* movaps */
    xmm1 = xmm1 * MEMF(0x648D80); /* mulss */
    xmm1 = xmm1 + xmm6; /* addss */
    xmm1 = xmm1 * MEMF(ebp + 0x1C); /* mulss */
    xmm0 = xmm7; /* movaps */
    xmm0 = xmm0 - xmm1; /* subss */
    xmm1 = MEMF(0x648E5C); /* movss */
    xmm2 = xmm2 * xmm1; /* mulss */
    xmm5 = xmm5 * xmm1; /* mulss */
    xmm0 = xmm0 * xmm1; /* mulss */
    MEMF(esp + 0x18) = xmm2; /* movss */
    MEMF(esp + 0x1C) = xmm5; /* movss */
    MEMF(esp + 0x20) = xmm0; /* movss */
    PUSH32(esp, 0); sub_003E1D70(); /* call 0x003E1D70 */

loc_00190285: ;
    xmm1 = MEMF(esp + 0x28); /* movss */
    eax = MEM32(edi + 0x38);
    (void)0; /* test eax, eax - flags set for next jcc */
    xmm2 = MEMF(0x648CE0); /* movss */
    xmm3 = xmm1; /* movaps */
    xmm3 = xmm3 + MEMF(0x64925C); /* addss */
    xmm0 = xmm0 + xmm6; /* addss */
    xmm0 = xmm0 * xmm2; /* mulss */
    MEMF(esp + 0x14) = xmm3; /* movss */
    if (TEST_Z(eax, eax)) goto loc_001902DC; /* je: equal / zero */

loc_001902B3: ;
    xmm3 = MEMF(eax + 0x228); /* movss */
    /* ucomiss xmm3, MEMF(0x648E98) - sets EFLAGS */
    /* lahf - load AH from flags (used in FPU compare idiom) */
    (void)0; /* test HI8(eax), 0x44 - flags set for next jcc */
    MEMF(esp + 0x14) = xmm3; /* movss */
    if (1 /* jp after test - parity */) goto loc_001902DC; /* jp: parity */

loc_001902CE: ;
    xmm1 = xmm1 + MEMF(0x648E38); /* addss */
    MEMF(esp + 0x14) = xmm1; /* movss */

loc_001902DC: ;
    ecx = MEM32(esp + 0x14);
    PUSH32(esp, 0x42480000);
    PUSH32(esp, ecx);
    xmm1 = xmm0; /* movaps */
    xmm1 = xmm1 * MEMF(0x648D20); /* mulss */
    xmm0 = xmm0 * MEMF(0x648CE4); /* mulss */
    esp = esp - 8;
    MEMF(esp + 4) = xmm1; /* movss */
    MEMF(esp) = xmm0; /* movss */
    eax = esp + 0x28;
    ecx = esp + 0x34;
    MEMF(0x6B7A08) = xmm6; /* movss */
    MEMF(0x6B7A0C) = xmm7; /* movss */
    MEMF(0x6B7A10) = xmm6; /* movss */
    MEMF(0x6B7A14) = xmm7; /* movss */
    MEMF(0x6B7A18) = xmm6; /* movss */
    MEMF(0x6B7A1C) = xmm7; /* movss */
    MEMF(0x6B7A20) = xmm6; /* movss */
    MEMF(0x6B7A24) = xmm7; /* movss */
    xmm0 = xmm2; /* movaps */
    PUSH32(esp, 0); sub_001915C0(); /* call 0x001915C0 */

loc_00190357: ;
    esp = esp + 0x10;
    POP32(esp, edi);
    POP32(esp, esi);
    esp = ebp;
    POP32(esp, ebp);
    esp += 4; return; /* ret */

}

/**
 * sub_00190380
 * Original: 0x00190380 - 0x00190391 (17 bytes, 4 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00190380(void)
{

loc_00190380: ;
    eax = MEM32(esp + 4);
    MEM32(eax + 0x9C) = 0;
    SET_LO8(eax, 1);
    esp += 4; return; /* ret */

}

/**
 * sub_001903A0
 * Original: 0x001903A0 - 0x001906C5 (805 bytes, 168 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_001903A0(void)
{
    int _flags = 0; /* fallback flag var */
    float xmm0, xmm1, xmm2, xmm3, xmm5, xmm6, xmm7;

loc_001903A0: ;
    esp = esp - 0xA4;
    PUSH32(esp, ebx);
    PUSH32(esp, esi);
    xmm0 = 0.0f; /* xorps self = zero */
    eax = MEM32(esp + 0xB0);
    edx = MEM32(esp + 0xB4);
    ecx = MEM32(esp + 0xC4);
    xmm1 = MEMF(edx + 4); /* movss */
    xmm1 = xmm1 - MEMF(eax + 4); /* subss */
    xmm1 = xmm1 * MEMF(ecx + 0x94); /* mulss */
    xmm2 = MEMF(edx + 8); /* movss */
    xmm2 = xmm2 - MEMF(eax + 8); /* subss */
    xmm2 = xmm2 * MEMF(ecx + 0x94); /* mulss */
    xmm3 = MEMF(esp + 0xC0); /* movss */
    MEMF(esp + 0x38) = xmm0; /* movss */
    MEMF(esp + 0x34) = xmm0; /* movss */
    MEMF(esp + 0x68) = xmm0; /* movss */
    MEMF(esp + 0x80) = xmm0; /* movss */
    MEMF(esp + 0x84) = xmm0; /* movss */
    MEMF(esp + 0x88) = xmm0; /* movss */
    xmm0 = MEMF(0x6492E4); /* movss */
    MEMF(esp + 0x18) = xmm0; /* movss */
    xmm0 = MEMF(0x64A614); /* movss */
    MEMF(esp + 0x1C) = xmm0; /* movss */
    xmm0 = MEMF(edx); /* movss */
    xmm0 = xmm0 - MEMF(eax); /* subss */
    xmm0 = xmm0 * MEMF(ecx + 0x94); /* mulss */
    ecx = MEM32(eax);
    edx = MEM32(eax + 4);
    eax = MEM32(eax + 8);
    ebx = 0; /* xor self */
    esi = 2;
    MEMF(esp + 0x8C) = xmm0; /* movss */
    MEMF(esp + 0x90) = xmm1; /* movss */
    MEMF(esp + 0x94) = xmm2; /* movss */
    MEM32(esp + 0x74) = ecx;
    MEM32(esp + 0x78) = edx;
    MEM32(esp + 0x7C) = eax;
    xmm0 = xmm0 * xmm3; /* mulss */
    xmm0 = xmm0 + MEMF(esp + 0x74); /* addss */
    xmm1 = xmm1 * xmm3; /* mulss */
    xmm1 = xmm1 + MEMF(esp + 0x78); /* addss */
    xmm2 = xmm2 * xmm3; /* mulss */
    xmm2 = xmm2 + MEMF(esp + 0x7C); /* addss */
    MEM32(esp + 0x58) = 0x303;
    MEM32(esp + 0x40) = esi;
    MEM32(esp + 0x44) = esi;
    MEM32(esp + 0x48) = ebx;
    MEM32(esp + 0x4C) = 4;
    MEM32(esp + 0x50) = ebx;
    MEM32(esp + 0x54) = esi;
    MEM32(esp + 0x5C) = 0x2F;
    MEM8(esp + 0x3E) = LO8(ebx);
    MEM8(esp + 0x3D) = LO8(ebx);
    MEM8(esp + 0x3C) = LO8(ebx);
    MEM16(esp + 0x64) = LO16(ebx);
    MEM32(esp + 0x9C) = 0x1207;
    MEM8(esp + 0xA4) = 4;
    MEM8(esp + 0xA5) = 0xFF;
    MEM16(esp + 0x60) = 0x14;
    MEM16(esp + 0x62) = 0xC;
    MEM8(esp + 0xC) = LO8(ebx);
    MEM8(esp + 0xD) = LO8(ebx);
    MEM8(esp + 0x20) = LO8(ebx);
    MEM8(esp + 0x21) = LO8(ebx);
    MEMF(esp + 0x74) = xmm0; /* movss */
    MEMF(esp + 0x78) = xmm1; /* movss */
    MEMF(esp + 0x7C) = xmm2; /* movss */
    PUSH32(esp, 0); sub_003E2480(); /* call 0x003E2480 */

loc_00190527: ;
    if (TEST_Z(LO8(eax), 1)) goto loc_00190536; /* je: equal / zero */

loc_0019052B: ;
    MEM32(esp + 0x9C) = 0x1247;

loc_00190536: ;
    PUSH32(esp, 0); sub_003E2480(); /* call 0x003E2480 */

loc_0019053B: ;
    if (TEST_Z(LO8(eax), 1)) goto loc_0019054A; /* je: equal / zero */

loc_0019053F: ;
    MEM32(esp + 0x9C) = MEM32(esp + 0x9C) | 0x80;

loc_0019054A: ;
    PUSH32(esp, 0); sub_003E2480(); /* call 0x003E2480 */

loc_0019054F: ;
    edx = ((int32_t)eax < 0) ? 0xFFFFFFFF : 0; /* cdq */
    ecx = 0x33;
    { int64_t _dividend = ((int64_t)(int32_t)edx << 32) | eax;
      eax = (uint32_t)((int32_t)(_dividend / (int32_t)ecx));
      edx = (uint32_t)((int32_t)(_dividend % (int32_t)ecx)); }
    edx = edx + 0x32;
    MEM16(esp + 0x30) = LO16(edx);
    PUSH32(esp, 0); sub_003E2480(); /* call 0x003E2480 */

loc_00190564: ;
    edx = ((int32_t)eax < 0) ? 0xFFFFFFFF : 0; /* cdq */
    ecx = 0x65;
    { int64_t _dividend = ((int64_t)(int32_t)edx << 32) | eax;
      eax = (uint32_t)((int32_t)(_dividend / (int32_t)ecx));
      edx = (uint32_t)((int32_t)(_dividend % (int32_t)ecx)); }
    SET_LO8(edx, LO8(edx) + 0x64);
    MEM8(esp + 0x3F) = LO8(edx);
    PUSH32(esp, 0); sub_003E1D70(); /* call 0x003E1D70 */

loc_00190578: ;
    xmm5 = xmm0; /* movaps */
    xmm5 = xmm5 * MEMF(0x649060); /* mulss */
    xmm5 = xmm5 + MEMF(0x649698); /* addss */
    MEMF(esp + 0x70) = xmm5; /* movss */
    MEMF(esp + 0x6C) = xmm5; /* movss */
    MEMF(esp + 8) = xmm5; /* movss */
    PUSH32(esp, 0); sub_003E2480(); /* call 0x003E2480 */

loc_001905A2: ;
    edx = ((int32_t)eax < 0) ? 0xFFFFFFFF : 0; /* cdq */
    ecx = 5;
    { int64_t _dividend = ((int64_t)(int32_t)edx << 32) | eax;
      eax = (uint32_t)((int32_t)(_dividend / (int32_t)ecx));
      edx = (uint32_t)((int32_t)(_dividend % (int32_t)ecx)); }
    SET_LO8(edx, LO8(edx) + 4);
    MEM8(esp + 0xE) = LO8(edx);
    PUSH32(esp, 0); sub_003E2480(); /* call 0x003E2480 */

loc_001905B6: ;
    edx = ((int32_t)eax < 0) ? 0xFFFFFFFF : 0; /* cdq */
    ecx = 5;
    { int64_t _dividend = ((int64_t)(int32_t)edx << 32) | eax;
      eax = (uint32_t)((int32_t)(_dividend / (int32_t)ecx));
      edx = (uint32_t)((int32_t)(_dividend % (int32_t)ecx)); }
    SET_LO8(edx, LO8(edx) + 4);
    MEM8(esp + 0xF) = LO8(edx);
    PUSH32(esp, 0); sub_003E1D70(); /* call 0x003E1D70 */

loc_001905CA: ;
    xmm6 = MEMF(0x648E14); /* movss */
    xmm7 = MEMF(0x648EB0); /* movss */
    xmm0 = xmm0 * xmm6; /* mulss */
    xmm0 = xmm0 + xmm7; /* addss */
    xmm0 = xmm0 * xmm5; /* mulss */
    MEMF(esp + 0x10) = xmm0; /* movss */
    PUSH32(esp, 0); sub_003E1D70(); /* call 0x003E1D70 */

loc_001905F1: ;
    xmm0 = xmm0 * xmm6; /* mulss */
    xmm0 = xmm0 + xmm7; /* addss */
    xmm0 = xmm0 * xmm5; /* mulss */
    MEMF(esp + 0x14) = xmm0; /* movss */
    PUSH32(esp, 0); sub_003E2480(); /* call 0x003E2480 */

loc_00190608: ;
    edx = ((int32_t)eax < 0) ? 0xFFFFFFFF : 0; /* cdq */
    ecx = 5;
    { int64_t _dividend = ((int64_t)(int32_t)edx << 32) | eax;
      eax = (uint32_t)((int32_t)(_dividend / (int32_t)ecx));
      edx = (uint32_t)((int32_t)(_dividend % (int32_t)ecx)); }
    SET_LO8(edx, LO8(edx) + 4);
    MEM8(esp + 0x22) = LO8(edx);
    PUSH32(esp, 0); sub_003E2480(); /* call 0x003E2480 */

loc_0019061C: ;
    edx = ((int32_t)eax < 0) ? 0xFFFFFFFF : 0; /* cdq */
    ecx = 5;
    { int64_t _dividend = ((int64_t)(int32_t)edx << 32) | eax;
      eax = (uint32_t)((int32_t)(_dividend / (int32_t)ecx));
      edx = (uint32_t)((int32_t)(_dividend % (int32_t)ecx)); }
    SET_LO8(edx, LO8(edx) + 4);
    MEM8(esp + 0x23) = LO8(edx);
    PUSH32(esp, 0); sub_003E1D70(); /* call 0x003E1D70 */

loc_00190630: ;
    xmm6 = MEMF(0x648D80); /* movss */
    xmm7 = MEMF(0x648EF8); /* movss */
    xmm0 = xmm0 * xmm6; /* mulss */
    xmm0 = xmm0 + xmm7; /* addss */
    xmm0 = xmm0 * xmm5; /* mulss */
    MEMF(esp + 0x24) = xmm0; /* movss */
    PUSH32(esp, 0); sub_003E1D70(); /* call 0x003E1D70 */

loc_00190657: ;
    xmm0 = xmm0 * xmm6; /* mulss */
    xmm0 = xmm0 + xmm7; /* addss */
    xmm0 = xmm0 * xmm5; /* mulss */
    MEMF(esp + 0x28) = xmm0; /* movss */
    PUSH32(esp, 0); sub_003E1D70(); /* call 0x003E1D70 */

loc_0019066E: ;
    xmm0 = xmm0 * MEMF(0x6490B4); /* mulss */
    xmm0 = xmm0 + MEMF(0x64A610); /* addss */
    xmm0 = xmm0 * MEMF(0x648D2C); /* mulss */
    PUSH32(esp, 0xFF);
    PUSH32(esp, 0x28);
    PUSH32(esp, ebx);
    edx = esp + 0x3C;
    PUSH32(esp, esi);
    PUSH32(esp, edx);
    MEMF(esp + 0xAC) = xmm0; /* movss */
    PUSH32(esp, 0); sub_00105450(); /* call 0x00105450 */

loc_001906A2: ;
    esp = esp + 0x14;
    if (CMP_EQ(eax, ebx)) goto loc_001906BC; /* je: equal / zero */

loc_001906A9: ;
    PUSH32(esp, edi);
    edi = eax + 0x170;
    ecx = 0xA;
    esi = esp + 0xC;
    memcpy((void*)XBOX_PTR(edi), (void*)XBOX_PTR(esi), ecx * 4);
    esi += ecx * 4; edi += ecx * 4; ecx = 0; /* rep movsd */
    POP32(esp, edi);

loc_001906BC: ;
    POP32(esp, esi);
    POP32(esp, ebx);
    esp = esp + 0xA4;
    esp += 4; return; /* ret */

}

/**
 * sub_001906D0
 * Original: 0x001906D0 - 0x001906F8 (40 bytes, 15 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_001906D0(void)
{
    uint32_t ebp;
    int _flags = 0; /* fallback flag var */
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_001906D0: ;
    PUSH32(esp, esi);
    esi = MEM32(esp + 8);
    PUSH32(esp, edi);
    edi = MEM32(esi + 0x9C);
    eax = edi;
    eax = eax >> 0x10;
    SET_LO8(eax, LO8(eax) - 0x40);
    SET_LO8(ecx, LO8(eax));
    SET_LO8(ecx, LO8(ecx) & 0xC0);
    if (TEST_Z(LO8(eax), 0x40)) { sub_001906F8(); return; } /* je: equal / zero */

loc_001906EC: ;
    eax = eax & 0x3F;
    edx = 0x40;
    edx = edx - eax;
    g_seh_ebp = ebp; sub_001906FD(); return; /* tail jmp 0x001906FD */

}

/**
 * sub_00190750
 * Original: 0x00190750 - 0x00190A34 (740 bytes, 152 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00190750(void)
{
    int _flags = 0; /* fallback flag var */
    float xmm0, xmm1, xmm2, xmm5, xmm6, xmm7;

loc_00190750: ;
    esp = esp - 0xA4;
    xmm1 = MEMF(esp + 0xA8); /* movss */
    xmm0 = 0.0f; /* xorps self = zero */
    xmm2 = MEMF(esp + 0xB4); /* movss */
    xmm6 = MEMF(0x648E14); /* movss */
    MEMF(esp + 0x6C) = xmm1; /* movss */
    xmm1 = MEMF(esp + 0xAC); /* movss */
    MEMF(esp + 0x70) = xmm1; /* movss */
    xmm1 = MEMF(esp + 0xB0); /* movss */
    MEMF(esp + 0x74) = xmm1; /* movss */
    xmm1 = MEMF(0x59D944); /* movss */
    PUSH32(esp, ebx);
    ebx = 0; /* xor self */
    MEMF(esp + 0x28) = xmm1; /* movss */
    xmm1 = MEMF(0x648D18); /* movss */
    PUSH32(esp, esi);
    esi = 2;
    MEMF(esp + 0x38) = xmm0; /* movss */
    MEMF(esp + 0x34) = xmm0; /* movss */
    MEMF(esp + 0x68) = xmm0; /* movss */
    MEMF(esp + 0x80) = xmm0; /* movss */
    MEMF(esp + 0x84) = xmm0; /* movss */
    MEMF(esp + 0x88) = xmm0; /* movss */
    MEMF(esp + 0x90) = xmm0; /* movss */
    xmm0 = MEMF(esp + 0xC4); /* movss */
    MEMF(esp + 0x18) = xmm1; /* movss */
    xmm1 = MEMF(0x64A60C); /* movss */
    xmm2 = xmm2 * xmm1; /* mulss */
    xmm0 = xmm0 * xmm1; /* mulss */
    MEM32(esp + 0x58) = 0x303;
    MEM32(esp + 0x40) = esi;
    MEM32(esp + 0x44) = esi;
    MEM32(esp + 0x48) = ebx;
    MEM32(esp + 0x4C) = 4;
    MEM32(esp + 0x50) = ebx;
    MEM32(esp + 0x54) = esi;
    MEM32(esp + 0x5C) = 0x2F;
    MEM8(esp + 0x3E) = LO8(ebx);
    MEM8(esp + 0x3D) = LO8(ebx);
    MEM8(esp + 0x3C) = LO8(ebx);
    MEM16(esp + 0x64) = LO16(ebx);
    MEM32(esp + 0x9C) = 0x3207;
    MEM8(esp + 0xA4) = 4;
    MEM8(esp + 0xA5) = 0xFF;
    MEM16(esp + 0x60) = 0x1E;
    MEM16(esp + 0x62) = 8;
    MEM8(esp + 0xC) = LO8(ebx);
    MEM8(esp + 0xD) = LO8(ebx);
    MEMF(esp + 0x1C) = xmm6; /* movss */
    MEM8(esp + 0x20) = LO8(ebx);
    MEM8(esp + 0x21) = LO8(ebx);
    MEMF(esp + 0x8C) = xmm2; /* movss */
    MEMF(esp + 0x94) = xmm0; /* movss */
    PUSH32(esp, 0); sub_003E2480(); /* call 0x003E2480 */

loc_0019089E: ;
    if (TEST_Z(LO8(eax), 1)) goto loc_001908AD; /* je: equal / zero */

loc_001908A2: ;
    MEM32(esp + 0x9C) = 0x3247;

loc_001908AD: ;
    PUSH32(esp, 0); sub_003E2480(); /* call 0x003E2480 */

loc_001908B2: ;
    if (TEST_Z(LO8(eax), 1)) goto loc_001908C1; /* je: equal / zero */

loc_001908B6: ;
    MEM32(esp + 0x9C) = MEM32(esp + 0x9C) | 0x80;

loc_001908C1: ;
    PUSH32(esp, 0); sub_003E2480(); /* call 0x003E2480 */

loc_001908C6: ;
    edx = ((int32_t)eax < 0) ? 0xFFFFFFFF : 0; /* cdq */
    ecx = 0x33;
    { int64_t _dividend = ((int64_t)(int32_t)edx << 32) | eax;
      eax = (uint32_t)((int32_t)(_dividend / (int32_t)ecx));
      edx = (uint32_t)((int32_t)(_dividend % (int32_t)ecx)); }
    edx = edx + 0x6A;
    MEM16(esp + 0x30) = LO16(edx);
    PUSH32(esp, 0); sub_003E2480(); /* call 0x003E2480 */

loc_001908DB: ;
    edx = ((int32_t)eax < 0) ? 0xFFFFFFFF : 0; /* cdq */
    ecx = 0x65;
    { int64_t _dividend = ((int64_t)(int32_t)edx << 32) | eax;
      eax = (uint32_t)((int32_t)(_dividend / (int32_t)ecx));
      edx = (uint32_t)((int32_t)(_dividend % (int32_t)ecx)); }
    SET_LO8(edx, LO8(edx) + 0x64);
    MEM8(esp + 0x3F) = LO8(edx);
    PUSH32(esp, 0); sub_003E1D70(); /* call 0x003E1D70 */

loc_001908EF: ;
    xmm5 = xmm0; /* movaps */
    xmm5 = xmm5 * MEMF(0x64A608); /* mulss */
    xmm5 = xmm5 + MEMF(0x6498E8); /* addss */
    MEMF(esp + 0x70) = xmm5; /* movss */
    MEMF(esp + 0x6C) = xmm5; /* movss */
    MEMF(esp + 8) = xmm5; /* movss */
    PUSH32(esp, 0); sub_003E2480(); /* call 0x003E2480 */

loc_00190919: ;
    edx = ((int32_t)eax < 0) ? 0xFFFFFFFF : 0; /* cdq */
    ecx = 5;
    { int64_t _dividend = ((int64_t)(int32_t)edx << 32) | eax;
      eax = (uint32_t)((int32_t)(_dividend / (int32_t)ecx));
      edx = (uint32_t)((int32_t)(_dividend % (int32_t)ecx)); }
    SET_LO8(edx, LO8(edx) + 4);
    MEM8(esp + 0xE) = LO8(edx);
    PUSH32(esp, 0); sub_003E2480(); /* call 0x003E2480 */

loc_0019092D: ;
    edx = ((int32_t)eax < 0) ? 0xFFFFFFFF : 0; /* cdq */
    ecx = 5;
    { int64_t _dividend = ((int64_t)(int32_t)edx << 32) | eax;
      eax = (uint32_t)((int32_t)(_dividend / (int32_t)ecx));
      edx = (uint32_t)((int32_t)(_dividend % (int32_t)ecx)); }
    SET_LO8(edx, LO8(edx) + 4);
    MEM8(esp + 0xF) = LO8(edx);
    PUSH32(esp, 0); sub_003E1D70(); /* call 0x003E1D70 */

loc_00190941: ;
    xmm7 = MEMF(0x648EB0); /* movss */
    xmm0 = xmm0 * xmm6; /* mulss */
    xmm0 = xmm0 + xmm7; /* addss */
    xmm0 = xmm0 * xmm5; /* mulss */
    MEMF(esp + 0x10) = xmm0; /* movss */
    PUSH32(esp, 0); sub_003E1D70(); /* call 0x003E1D70 */

loc_00190960: ;
    xmm0 = xmm0 * xmm6; /* mulss */
    xmm0 = xmm0 + xmm7; /* addss */
    xmm0 = xmm0 * xmm5; /* mulss */
    MEMF(esp + 0x14) = xmm0; /* movss */
    PUSH32(esp, 0); sub_003E2480(); /* call 0x003E2480 */

loc_00190977: ;
    edx = ((int32_t)eax < 0) ? 0xFFFFFFFF : 0; /* cdq */
    ecx = 5;
    { int64_t _dividend = ((int64_t)(int32_t)edx << 32) | eax;
      eax = (uint32_t)((int32_t)(_dividend / (int32_t)ecx));
      edx = (uint32_t)((int32_t)(_dividend % (int32_t)ecx)); }
    SET_LO8(edx, LO8(edx) + 4);
    MEM8(esp + 0x22) = LO8(edx);
    PUSH32(esp, 0); sub_003E2480(); /* call 0x003E2480 */

loc_0019098B: ;
    edx = ((int32_t)eax < 0) ? 0xFFFFFFFF : 0; /* cdq */
    ecx = 5;
    { int64_t _dividend = ((int64_t)(int32_t)edx << 32) | eax;
      eax = (uint32_t)((int32_t)(_dividend / (int32_t)ecx));
      edx = (uint32_t)((int32_t)(_dividend % (int32_t)ecx)); }
    SET_LO8(edx, LO8(edx) + 4);
    MEM8(esp + 0x23) = LO8(edx);
    PUSH32(esp, 0); sub_003E1D70(); /* call 0x003E1D70 */

loc_0019099F: ;
    xmm6 = MEMF(0x648D80); /* movss */
    xmm7 = MEMF(0x648EF8); /* movss */
    xmm0 = xmm0 * xmm6; /* mulss */
    xmm0 = xmm0 + xmm7; /* addss */
    xmm0 = xmm0 * xmm5; /* mulss */
    MEMF(esp + 0x24) = xmm0; /* movss */
    PUSH32(esp, 0); sub_003E1D70(); /* call 0x003E1D70 */

loc_001909C6: ;
    xmm0 = xmm0 * xmm6; /* mulss */
    xmm0 = xmm0 + xmm7; /* addss */
    xmm0 = xmm0 * xmm5; /* mulss */
    MEMF(esp + 0x28) = xmm0; /* movss */
    PUSH32(esp, 0); sub_003E1D70(); /* call 0x003E1D70 */

loc_001909DD: ;
    xmm0 = xmm0 * MEMF(0x648E38); /* mulss */
    xmm0 = xmm0 + MEMF(0x649004); /* addss */
    xmm0 = xmm0 * MEMF(0x648D2C); /* mulss */
    PUSH32(esp, 0xFF);
    PUSH32(esp, 0x28);
    PUSH32(esp, ebx);
    edx = esp + 0x3C;
    PUSH32(esp, esi);
    PUSH32(esp, edx);
    MEMF(esp + 0xAC) = xmm0; /* movss */
    PUSH32(esp, 0); sub_00105450(); /* call 0x00105450 */

loc_00190A11: ;
    esp = esp + 0x14;
    if (CMP_EQ(eax, ebx)) goto loc_00190A2B; /* je: equal / zero */

loc_00190A18: ;
    PUSH32(esp, edi);
    edi = eax + 0x170;
    ecx = 0xA;
    esi = esp + 0xC;
    memcpy((void*)XBOX_PTR(edi), (void*)XBOX_PTR(esi), ecx * 4);
    esi += ecx * 4; edi += ecx * 4; ecx = 0; /* rep movsd */
    POP32(esp, edi);

loc_00190A2B: ;
    POP32(esp, esi);
    POP32(esp, ebx);
    esp = esp + 0xA4;
    esp += 4; return; /* ret */

}

/**
 * sub_00190A40
 * Original: 0x00190A40 - 0x00190B13 (211 bytes, 51 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00190A40(void)
{
    uint32_t ebp;
    int _flags = 0; /* fallback flag var */
    int _cf = 0; /* carry flag */
    float xmm0, xmm1;
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_00190A40: ;
    if (TEST_S(esi, esi)) goto loc_00190B12; /* jl: less (signed <) */

loc_00190A48: ;
    if (CMP_G(esi, 4)) goto loc_00190B12; /* jg: greater (signed >) */

loc_00190A51: ;
    ecx = MEM32(0x7FA1F8);
    eax = 0; /* xor self */
    if (CMP_A(ecx, 0x49)) goto loc_00190ABE; /* ja: above (unsigned >) */

loc_00190A5E: ;
    ecx = ZX8(MEM8(ecx + 0x190B3C));
    { uint32_t _jt = MEM32(ecx * 4 + 0x190B14); /* switch: 10 entries, 10 targets */
    if (_jt == 0x00190A6Cu) goto loc_00190A6C;
    if (_jt == 0x00190A70u) goto loc_00190A70;
    if (_jt == 0x00190A77u) goto loc_00190A77;
    if (_jt == 0x00190A8Au) goto loc_00190A8A;
    if (_jt == 0x00190A91u) goto loc_00190A91;
    if (_jt == 0x00190A98u) goto loc_00190A98;
    if (_jt == 0x00190A9Fu) goto loc_00190A9F;
    if (_jt == 0x00190AA6u) goto loc_00190AA6;
    if (_jt == 0x00190AB9u) goto loc_00190AB9;
    if (_jt == 0x00190ABEu) goto loc_00190ABE;
    g_seh_ebp = ebp; RECOMP_ITAIL(_jt); return; }

loc_00190A6C: ;
    eax = 0; /* xor self */
    goto loc_00190ABE;

loc_00190A70: ;
    eax = 1;
    goto loc_00190ABE;

loc_00190A77: ;
    PUSH32(esp, 0); sub_00141960(); /* call 0x00141960 */

loc_00190A7C: ;
    SET_LO8(eax, LO8(eax) - 2);
    SET_LO8(eax, (uint32_t)(-(int32_t)LO8(eax)));
    eax = _cf ? 0xFFFFFFFF : 0; /* sbb self (CF extend) */
    eax = eax & 0xFFFFFFFDu;
    eax = eax + 4;
    goto loc_00190ABE;

loc_00190A8A: ;
    eax = 2;
    goto loc_00190ABE;

loc_00190A91: ;
    eax = 3;
    goto loc_00190ABE;

loc_00190A98: ;
    eax = 4;
    goto loc_00190ABE;

loc_00190A9F: ;
    eax = 5;
    goto loc_00190ABE;

loc_00190AA6: ;
    PUSH32(esp, 0); sub_00141960(); /* call 0x00141960 */

loc_00190AAB: ;
    SET_LO8(eax, LO8(eax) - 0xA);
    SET_LO8(eax, (uint32_t)(-(int32_t)LO8(eax)));
    eax = _cf ? 0xFFFFFFFF : 0; /* sbb self (CF extend) */
    eax = eax & 0xFFFFFFFEu;
    eax = eax + 6;
    goto loc_00190ABE;

loc_00190AB9: ;
    eax = 7;

loc_00190ABE: ;
    eax = esi + eax * 4;
    eax = eax + eax * 2;
    eax = eax << 2;
    xmm0 = MEMF(eax + 0x6B7888); /* movss */
    xmm1 = MEMF(eax + 0x6B788C); /* movss */
    MEMF(0x6B7A08) = xmm0; /* movss */
    xmm0 = 0.0f; /* xorps self = zero */
    MEMF(0x6B7A10) = xmm1; /* movss */
    xmm1 = MEMF(eax + 0x6B7890); /* movss */
    MEMF(0x6B7A0C) = xmm0; /* movss */
    MEMF(0x6B7A14) = xmm0; /* movss */
    MEMF(0x6B7A18) = xmm1; /* movss */
    MEMF(0x6B7A1C) = xmm0; /* movss */

loc_00190B12: ;
    esp += 4; return; /* ret */

}

/**
 * sub_00190B90
 * Original: 0x00190B90 - 0x00190BEA (90 bytes, 15 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00190B90(void)
{
    float xmm0, xmm1, xmm2;

loc_00190B90: ;
    xmm0 = MEMF(0x648CEC); /* movss */
    xmm2 = (float)(int32_t)MEM32(esp + 8); /* cvtsi2ss */
    xmm1 = (float)(int32_t)MEM32(esp + 4); /* cvtsi2ss */
    xmm2 = xmm2 * xmm0; /* mulss */
    xmm1 = xmm1 * xmm0; /* mulss */
    MEMF(0x6B7A10) = xmm2; /* movss */
    xmm2 = (float)(int32_t)MEM32(esp + 0xC); /* cvtsi2ss */
    MEMF(0x6B7A08) = xmm1; /* movss */
    xmm1 = 0.0f; /* xorps self = zero */
    xmm2 = xmm2 * xmm0; /* mulss */
    MEMF(0x6B7A0C) = xmm1; /* movss */
    MEMF(0x6B7A14) = xmm1; /* movss */
    MEMF(0x6B7A18) = xmm2; /* movss */
    MEMF(0x6B7A1C) = xmm1; /* movss */
    esp += 4; return; /* ret */

}

/**
 * sub_00190BF0
 * Original: 0x00190BF0 - 0x00190C04 (20 bytes, 10 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00190BF0(void)
{
    uint32_t ebp;
    int _flags = 0; /* fallback flag var */
    float xmm5;
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_00190BF0: ;
    PUSH32(esp, ebx);
    PUSH32(esp, ebp);
    ebp = MEM32(esp + 0x18);
    PUSH32(esp, esi);
    esi = ecx;
    (void)0; /* test esi, esi - flags set for next jcc */
    ebx = eax;
    if (TEST_NZ(esi, esi)) { sub_00190C04(); return; } /* jne: not equal / not zero */

loc_00190BFF: ;
    xmm5 = 0.0f; /* xorps self = zero */
    g_seh_ebp = ebp; sub_00190C27(); return; /* tail jmp 0x00190C27 */

}

/**
 * sub_00190E40
 * Original: 0x00190E40 - 0x001911E7 (935 bytes, 269 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00190E40(void)
{
    uint32_t ebp;
    int _flags = 0; /* fallback flag var */
    float xmm0, xmm1, xmm2, xmm3, xmm5, xmm6, xmm7;
    double _fp_stack[8];
    int _fp_top = 0;
    #define fp_push(v) (_fp_stack[--_fp_top & 7] = (v))
    #define fp_pop() (_fp_top++)
    #define fp_popp() (fp_pop())
    #define fp_top() _fp_stack[_fp_top & 7]
    #define fp_st1() _fp_stack[(_fp_top + 1) & 7]

loc_00190E40: ;
    PUSH32(esp, ebp);
    ebp = esp;
    esp = esp & 0xFFFFFFF0u;
    esp = esp - 0x94;
    PUSH32(esp, ebx);
    ebx = MEM32(ebp + 0x28);
    PUSH32(esp, esi);
    esi = MEM32(ebp + 0x34);
    (void)0; /* test esi, 0x1000000 - flags set for next jcc */
    PUSH32(esp, edi);
    edi = eax;
    if (TEST_Z(esi, 0x1000000)) goto loc_00190E74; /* je: equal / zero */

loc_00190E5F: ;
    xmm0 = 0.0f; /* xorps self = zero */
    MEM32(0x84943C) = 1;
    MEMF(0x6B7A2C) = xmm0; /* movss */

loc_00190E74: ;
    PUSH32(esp, 0); sub_003E2480(); /* call 0x003E2480 */

loc_00190E79: ;
    ecx = (int32_t)MEMF(edi + 4); /* cvttss2si */
    edx = ((int32_t)eax < 0) ? 0xFFFFFFFF : 0; /* cdq */
    ecx++;
    { int64_t _dividend = ((int64_t)(int32_t)edx << 32) | eax;
      eax = (uint32_t)((int32_t)(_dividend / (int32_t)ecx));
      edx = (uint32_t)((int32_t)(_dividend % (int32_t)ecx)); }
    eax = (int32_t)MEMF(edi); /* cvttss2si */
    MEM32(esp + 0x2C) = 0;
    edx = edx + eax;
    (void)0; /* test edx, edx - flags set for next jcc */
    MEM32(esp + 0x40) = edx;
    if (CMP_LE(edx & edx, 0)) goto loc_001911B6; /* jle: less or equal (signed <=) */

loc_00190E9C: ;
    eax = esi;
    eax = eax & 0x10000;
    MEM32(esp + 0x48) = eax;
    ecx = esp + 0x30;
    xmm0 = (float)(int32_t)edx; /* cvtsi2ss */
    eax = esi;
    eax = eax & 0x20000;
    edx = ecx;
    MEMF(esp + 0x3C) = xmm0; /* movss */
    MEM32(esp + 0x44) = eax;
    MEM32(esp + 0x4C) = ecx;
    MEM32(esp + 0x50) = edx;
    /* nop */

loc_00190ED0: ;
    fp_push((double)SMEM32(esp + 0x2C)); /* fild */
    edx = MEM32(ebp + 0x14);
    ecx = esp + 0x54;
    edi = esp + 0x60;
    fp_st1() /= fp_top(); fp_pop(); /* fdiv */
    MEMF(esp + 0x14) = (float)fp_top(); fp_popp(); /* fstp */
    eax = MEM32(esp + 0x14);
    PUSH32(esp, eax);
    eax = MEM32(ebp + 0x10);
    PUSH32(esp, ecx);
    ecx = MEM32(ebp + 8);
    PUSH32(esp, edx);
    PUSH32(esp, eax);
    PUSH32(esp, ecx);
    ecx = MEM32(ebp + 0xC);
    eax = esi;
    PUSH32(esp, 0); sub_00190BF0(); /* call 0x00190BF0 */

loc_00190F00: ;
    edi = MEM32(ebp + 0x18);
    esp = esp + 0x14;
    if (TEST_NZ(edi, edi)) goto loc_00190F15; /* jne: not equal / not zero */

loc_00190F0A: ;
    xmm7 = 0.0f; /* xorps self = zero */
    MEMF(esp + 0x20) = xmm7; /* movss */
    goto loc_00190F54;

loc_00190F15: ;
    edx = esi;
    edx = edx >> 3;
    if (TEST_Z(LO8(edx), 1)) goto loc_00190F3D; /* je: equal / zero */

loc_00190F1F: ;
    xmm0 = MEMF(edi + 4); /* movss */
    xmm5 = MEMF(esp + 0x14); /* movss */
    xmm7 = 0.0f; /* xorps self = zero */
    xmm0 = xmm0 * xmm5; /* mulss */
    xmm0 = xmm0 + MEMF(edi); /* addss */
    MEMF(esp + 0x20) = xmm0; /* movss */
    goto loc_00190F5A;

loc_00190F3D: ;
    PUSH32(esp, 0); sub_003E1D70(); /* call 0x003E1D70 */

loc_00190F42: ;
    xmm0 = xmm0 * MEMF(edi + 4); /* mulss */
    xmm0 = xmm0 + MEMF(edi); /* addss */
    xmm7 = 0.0f; /* xorps self = zero */
    MEMF(esp + 0x20) = xmm0; /* movss */

loc_00190F54: ;
    xmm5 = MEMF(esp + 0x14); /* movss */

loc_00190F5A: ;
    edi = MEM32(ebp + 0x1C);
    if (TEST_NZ(edi, edi)) goto loc_00190F66; /* jne: not equal / not zero */

loc_00190F61: ;
    xmm6 = xmm7; /* movaps */
    goto loc_00190F8B;

loc_00190F66: ;
    eax = esi;
    eax = eax >> 4;
    if (TEST_Z(LO8(eax), 1)) goto loc_00190F7A; /* je: equal / zero */

loc_00190F6F: ;
    xmm6 = MEMF(edi + 4); /* movss */
    xmm6 = xmm6 * xmm5; /* mulss */
    goto loc_00190F87;

loc_00190F7A: ;
    PUSH32(esp, 0); sub_003E1D70(); /* call 0x003E1D70 */

loc_00190F7F: ;
    xmm6 = xmm0; /* movaps */
    xmm6 = xmm6 * MEMF(edi + 4); /* mulss */

loc_00190F87: ;
    xmm6 = xmm6 + MEMF(edi); /* addss */

loc_00190F8B: ;
    edi = MEM32(ebp + 0x20);
    (void)0; /* test edi, edi - flags set for next jcc */
    MEMF(esp + 0x24) = xmm6; /* movss */
    if (TEST_NZ(edi, edi)) goto loc_00190FA0; /* jne: not equal / not zero */

loc_00190F98: ;
    MEMF(esp + 0x1C) = xmm7; /* movss */
    goto loc_00190FC9;

loc_00190FA0: ;
    ecx = esi;
    ecx = ecx >> 5;
    if (TEST_Z(LO8(ecx), 1)) goto loc_00190FB5; /* je: equal / zero */

loc_00190FAA: ;
    xmm0 = MEMF(edi + 4); /* movss */
    xmm0 = xmm0 * xmm5; /* mulss */
    goto loc_00190FBF;

loc_00190FB5: ;
    PUSH32(esp, 0); sub_003E1D70(); /* call 0x003E1D70 */

loc_00190FBA: ;
    xmm0 = xmm0 * MEMF(edi + 4); /* mulss */

loc_00190FBF: ;
    xmm0 = xmm0 + MEMF(edi); /* addss */
    MEMF(esp + 0x1C) = xmm0; /* movss */

loc_00190FC9: ;
    edi = MEM32(ebp + 0x24);
    if (TEST_NZ(edi, edi)) goto loc_00190FD8; /* jne: not equal / not zero */

loc_00190FD0: ;
    MEMF(esp + 0x18) = xmm7; /* movss */
    goto loc_00191001;

loc_00190FD8: ;
    edx = esi;
    edx = edx >> 6;
    if (TEST_Z(LO8(edx), 1)) goto loc_00190FED; /* je: equal / zero */

loc_00190FE2: ;
    xmm0 = MEMF(edi + 4); /* movss */
    xmm0 = xmm0 * xmm5; /* mulss */
    goto loc_00190FF7;

loc_00190FED: ;
    PUSH32(esp, 0); sub_003E1D70(); /* call 0x003E1D70 */

loc_00190FF2: ;
    xmm0 = xmm0 * MEMF(edi + 4); /* mulss */

loc_00190FF7: ;
    xmm0 = xmm0 + MEMF(edi); /* addss */
    MEMF(esp + 0x18) = xmm0; /* movss */

loc_00191001: ;
    if (TEST_NZ(ebx, ebx)) goto loc_0019100A; /* jne: not equal / not zero */

loc_00191005: ;
    xmm5 = xmm7; /* movaps */
    goto loc_00191031;

loc_0019100A: ;
    eax = esi;
    eax = eax >> 7;
    if (TEST_Z(LO8(eax), 1)) goto loc_00191020; /* je: equal / zero */

loc_00191013: ;
    xmm5 = MEMF(ebx + 4); /* movss */
    xmm5 = xmm5 * MEMF(esp + 0x14); /* mulss */
    goto loc_0019102D;

loc_00191020: ;
    PUSH32(esp, 0); sub_003E1D70(); /* call 0x003E1D70 */

loc_00191025: ;
    xmm5 = xmm0; /* movaps */
    xmm5 = xmm5 * MEMF(ebx + 4); /* mulss */

loc_0019102D: ;
    xmm5 = xmm5 + MEMF(ebx); /* addss */

loc_00191031: ;
    edi = MEM32(ebp + 0x2C);
    if (TEST_NZ(edi, edi)) goto loc_00191040; /* jne: not equal / not zero */

loc_00191038: ;
    MEMF(esp + 0x28) = xmm7; /* movss */
    goto loc_0019106B;

loc_00191040: ;
    ecx = esi;
    ecx = ecx >> 8;
    if (TEST_Z(LO8(ecx), 1)) goto loc_00191057; /* je: equal / zero */

loc_0019104A: ;
    xmm0 = MEMF(edi + 4); /* movss */
    xmm0 = xmm0 * MEMF(esp + 0x14); /* mulss */
    goto loc_00191061;

loc_00191057: ;
    PUSH32(esp, 0); sub_003E1D70(); /* call 0x003E1D70 */

loc_0019105C: ;
    xmm0 = xmm0 * MEMF(edi + 4); /* mulss */

loc_00191061: ;
    xmm0 = xmm0 + MEMF(edi); /* addss */
    MEMF(esp + 0x28) = xmm0; /* movss */

loc_0019106B: ;
    eax = MEM32(esp + 0x48);
    if (TEST_Z(eax, eax)) goto loc_001910B8; /* je: equal / zero */

loc_00191073: ;
    eax = MEM32(ebp + 0x1C);
    /* comiss xmm6, MEMF(eax) - sets EFLAGS */
    xmm0 = xmm7; /* movaps */
    if ((xmm6 <= MEMF(eax))) goto loc_001910A2; /* jbe: below or equal (unsigned <=) */

loc_0019107E: ;
    xmm0 = MEMF(eax); /* movss */
    xmm0 = xmm0 + MEMF(eax + 4); /* addss */
    /* comiss xmm0, xmm6 - sets EFLAGS */
    if ((xmm0 <= xmm6)) goto loc_0019109A; /* jbe: below or equal (unsigned <=) */

loc_0019108C: ;
    xmm6 = xmm6 - MEMF(eax); /* subss */
    xmm6 = xmm6 / MEMF(eax + 4); /* divss */
    xmm0 = xmm6; /* movaps */
    goto loc_001910A2;

loc_0019109A: ;
    xmm0 = MEMF(0x648D14); /* movss */

loc_001910A2: ;
    if (TEST_NZ(ebx, ebx)) goto loc_001910AB; /* jne: not equal / not zero */

loc_001910A6: ;
    xmm5 = xmm7; /* movaps */
    goto loc_001910B8;

loc_001910AB: ;
    xmm5 = MEMF(ebx + 4); /* movss */
    xmm5 = xmm5 * xmm0; /* mulss */
    xmm5 = xmm5 + MEMF(ebx); /* addss */

loc_001910B8: ;
    eax = MEM32(esp + 0x44);
    if (TEST_Z(eax, eax)) goto loc_0019110E; /* je: equal / zero */

loc_001910C0: ;
    /* comiss xmm5, MEMF(ebx) - sets EFLAGS */
    xmm0 = xmm7; /* movaps */
    if ((xmm5 <= MEMF(ebx))) goto loc_001910EC; /* jbe: below or equal (unsigned <=) */

loc_001910C8: ;
    xmm0 = MEMF(ebx); /* movss */
    xmm0 = xmm0 + MEMF(ebx + 4); /* addss */
    /* comiss xmm0, xmm5 - sets EFLAGS */
    if ((xmm0 <= xmm5)) goto loc_001910E4; /* jbe: below or equal (unsigned <=) */

loc_001910D6: ;
    xmm0 = xmm5; /* movaps */
    xmm0 = xmm0 - MEMF(ebx); /* subss */
    xmm0 = xmm0 / MEMF(ebx + 4); /* divss */
    goto loc_001910EC;

loc_001910E4: ;
    xmm0 = MEMF(0x648D14); /* movss */

loc_001910EC: ;
    eax = MEM32(ebp + 0x24);
    if (TEST_NZ(eax, eax)) goto loc_001910FB; /* jne: not equal / not zero */

loc_001910F3: ;
    MEMF(esp + 0x18) = xmm7; /* movss */
    goto loc_0019110E;

loc_001910FB: ;
    xmm1 = MEMF(eax + 4); /* movss */
    xmm1 = xmm1 * xmm0; /* mulss */
    xmm1 = xmm1 + MEMF(eax); /* addss */
    MEMF(esp + 0x18) = xmm1; /* movss */

loc_0019110E: ;
    edx = esp + 0x60;
    PUSH32(esp, edx);
    eax = esp + 0x34;
    PUSH32(esp, eax);
    ecx = eax;
    MEMF(esp + 0x38) = xmm7; /* movss */
    MEMF(esp + 0x3C) = xmm7; /* movss */
    xmm7 = xmm7 - xmm5; /* subss */
    PUSH32(esp, ecx);
    MEMF(esp + 0x44) = xmm7; /* movss */
    PUSH32(esp, 0); sub_00428393(); /* call 0x00428393 */

loc_00191136: ;
    eax = MEM32(esp + 0x4C);
    xmm2 = MEMF(eax); /* movss */
    ecx = MEM32(ebp + 8);
    /* shufps xmm2, xmm2, 0 */
    /* mulps: xmm2 *= MEMF(ecx) (packed 4xfloat) */
    xmm1 = MEMF(eax + 4); /* movss */
    /* shufps xmm1, xmm1, 0 */
    /* mulps: xmm1 *= MEMF(ecx + 0x10) (packed 4xfloat) */
    xmm3 = MEMF(eax + 8); /* movss */
    /* shufps xmm3, xmm3, 0 */
    /* mulps: xmm3 *= MEMF(ecx + 0x20) (packed 4xfloat) */
    /* addps: xmm2 += xmm1 (packed 4xfloat) */
    eax = MEM32(esp + 0x50);
    /* addps: xmm2 += xmm3 (packed 4xfloat) */
    MEMD(eax) = xmm2; /* movlps */
    /* TODO: movhlps xmm2, xmm2 */
    MEMF(eax + 8) = xmm2; /* movss */
    edx = MEM32(esp + 0x28);
    ecx = MEM32(esp + 0x18);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, esi);
    PUSH32(esp, edx);
    edx = MEM32(esp + 0x24);
    eax = esp + 0x38;
    PUSH32(esp, eax);
    eax = MEM32(esp + 0x30);
    PUSH32(esp, ecx);
    PUSH32(esp, edx);
    edx = MEM32(esp + 0x34);
    PUSH32(esp, eax);
    ecx = esp + 0x6C;
    PUSH32(esp, ecx);
    PUSH32(esp, edx);
    PUSH32(esp, 0); RECOMP_ICALL_SAFE(MEM32(ebp + 0x30), _icall_esp); /* indirect call */
    }

loc_0019119E: ;
    eax = MEM32(esp + 0x4C);
    ecx = MEM32(esp + 0x60);
    esp = esp + 0x20;
    eax++;
    (void)0; /* cmp eax, ecx - flags set for next jcc */
    MEM32(esp + 0x2C) = eax;
    if (CMP_L(eax, ecx)) goto loc_00190ED0; /* jl: less (signed <) */

loc_001911B6: ;
    xmm0 = MEMF(0x648D14); /* movss */
    POP32(esp, edi);
    POP32(esp, esi);
    MEM32(0x84943C) = 0;
    MEMF(0x6B7A28) = xmm0; /* movss */
    MEMF(0x6B7A2C) = xmm0; /* movss */
    MEMF(0x6B7A30) = xmm0; /* movss */
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
 * sub_001911F0
 * Original: 0x001911F0 - 0x00191379 (393 bytes, 90 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_001911F0(void)
{
    int _flags = 0; /* fallback flag var */
    float xmm0;
    double _fp_stack[8];
    int _fp_top = 0;
    #define fp_push(v) (_fp_stack[--_fp_top & 7] = (v))
    #define fp_pop() (_fp_top++)
    #define fp_popp() (fp_pop())
    #define fp_top() _fp_stack[_fp_top & 7]
    #define fp_st1() _fp_stack[(_fp_top + 1) & 7]

loc_001911F0: ;
    esp = esp - 0x10;
    PUSH32(esp, edi);
    PUSH32(esp, 0); sub_003E1D70(); /* call 0x003E1D70 */

loc_001911F9: ;
    xmm0 = xmm0 * MEMF(0x6B7A1C); /* mulss */
    xmm0 = xmm0 + MEMF(0x6B7A18); /* addss */
    MEMF(esp + 4) = xmm0; /* movss */
    PUSH32(esp, 0); sub_003E1D70(); /* call 0x003E1D70 */

loc_00191214: ;
    xmm0 = xmm0 * MEMF(0x6B7A14); /* mulss */
    xmm0 = xmm0 + MEMF(0x6B7A10); /* addss */
    MEMF(esp + 8) = xmm0; /* movss */
    PUSH32(esp, 0); sub_003E1D70(); /* call 0x003E1D70 */

loc_0019122F: ;
    xmm0 = xmm0 * MEMF(0x6B7A0C); /* mulss */
    xmm0 = xmm0 + MEMF(0x6B7A08); /* addss */
    MEMF(esp + 0xC) = xmm0; /* movss */
    PUSH32(esp, 0); sub_003E1D70(); /* call 0x003E1D70 */

loc_0019124A: ;
    fp_push(MEMF(esp + 4)); /* fld float */
    xmm0 = xmm0 * MEMF(0x6B7A24); /* mulss */
    fp_st1() *= fp_top(); fp_pop(); /* fmul */
    xmm0 = xmm0 + MEMF(0x6B7A20); /* addss */
    PUSH32(esp, 0);
    PUSH32(esp, 0);
    MEMF(esp + 0x18) = xmm0; /* movss */
    PUSH32(esp, 0);
    PUSH32(esp, 0); sub_00471288(); /* call 0x00471288 */

loc_00191275: ;
    fp_push(MEMF(esp + 0x14)); /* fld float */
    fp_st1() *= fp_top(); fp_pop(); /* fmul */
    PUSH32(esp, eax);
    PUSH32(esp, 0); sub_00471288(); /* call 0x00471288 */

loc_00191285: ;
    fp_push(MEMF(esp + 0x1C)); /* fld float */
    fp_st1() *= fp_top(); fp_pop(); /* fmul */
    PUSH32(esp, eax);
    PUSH32(esp, 0); sub_00471288(); /* call 0x00471288 */

loc_00191295: ;
    fp_push(MEMF(esp + 0x24)); /* fld float */
    fp_st1() *= fp_top(); fp_pop(); /* fmul */
    PUSH32(esp, eax);
    PUSH32(esp, 0); sub_00471288(); /* call 0x00471288 */

loc_001912A5: ;
    xmm0 = MEMF(esp + 0x30); /* movss */
    xmm0 = xmm0 * MEMF(0x6492E8); /* mulss */
    edx = MEM32(esp + 0x38);
    edi = MEM32(esp + 0x44);
    PUSH32(esp, eax);
    eax = MEM32(esp + 0x34);
    PUSH32(esp, 0x1C);
    PUSH32(esp, 0x186);
    PUSH32(esp, 0x299);
    PUSH32(esp, 0x29A);
    PUSH32(esp, ecx);
    ecx = MEM32(esp + 0x54);
    MEMF(esp) = xmm0; /* movss */
    PUSH32(esp, eax);
    eax = MEM32(esp + 0x50);
    PUSH32(esp, ecx);
    PUSH32(esp, edx);
    PUSH32(esp, 0x3DCCCCCD);
    PUSH32(esp, eax);
    PUSH32(esp, 7);
    PUSH32(esp, 0); sub_001AF030(); /* call 0x001AF030 */

loc_001912EF: ;
    esp = esp + 0x48;
    (void)0; /* test eax, eax - flags set for next jcc */
    POP32(esp, edi);
    if (TEST_Z(eax, eax)) goto loc_00191375; /* je: equal / zero */

loc_001912F7: ;
    xmm0 = MEMF(esp + 0x24); /* movss */
    MEMF(eax + 0xF8) = xmm0; /* movss */
    xmm0 = MEMF(esp + 0x2C); /* movss */
    SET_LO8(ecx, 0x80);
    MEM8(eax + 0x100) = LO8(ecx);
    MEM8(eax + 0x101) = LO8(ecx);
    MEM8(eax + 0x102) = LO8(ecx);
    MEMF(eax + 0xFC) = xmm0; /* movss */
    PUSH32(esp, esi);
    ecx = eax + 0x78;
    esi = MEM32(ecx);
    edx = eax + 0x108;
    MEM32(edx) = esi;
    esi = MEM32(ecx + 4);
    MEM32(edx + 4) = esi;
    ecx = MEM32(ecx + 8);
    MEM32(edx + 8) = ecx;
    xmm0 = MEMF(eax + 0x7C); /* movss */
    edx = MEM32(esp + 0x34);
    xmm0 = xmm0 + MEMF(0x648D80); /* addss */
    edx = edx >> 0x1D;
    MEMF(eax + 0x114) = xmm0; /* movss */
    xmm0 = MEMF(esp + 0x24); /* movss */
    SET_LO8(edx, LO8(edx) & 1);
    MEMF(eax + 0x118) = xmm0; /* movss */
    MEM8(eax + 0x11C) = LO8(edx);
    POP32(esp, esi);

loc_00191375: ;
    esp = esp + 0x10;
    esp += 4; return; /* ret */

    #undef fp_push
    #undef fp_pop
    #undef fp_popp
    #undef fp_top
    #undef fp_st1
}

/**
 * sub_00191380
 * Original: 0x00191380 - 0x001915BB (571 bytes, 126 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00191380(void)
{
    float xmm0;
    double _fp_stack[8];
    int _fp_top = 0;
    #define fp_push(v) (_fp_stack[--_fp_top & 7] = (v))
    #define fp_pop() (_fp_top++)
    #define fp_popp() (fp_pop())
    #define fp_top() _fp_stack[_fp_top & 7]
    #define fp_st1() _fp_stack[(_fp_top + 1) & 7]

loc_00191380: ;
    esp = esp - 0x80;
    xmm0 = MEMF(esp + 0x84); /* movss */
    xmm0 = xmm0 * MEMF(0x648E38); /* mulss */
    PUSH32(esp, ebx);
    PUSH32(esp, esi);
    esi = (int32_t)xmm0; /* cvttss2si */
    xmm0 = 0.0f; /* xorps self = zero */
    MEM32(esp + 0x38) = 0x6C;
    MEM16(esp + 0xC) = LO16(esi);
    MEMF(esp + 0x10) = xmm0; /* movss */
    MEMF(esp + 0x14) = xmm0; /* movss */
    PUSH32(esp, 0); sub_003E1D70(); /* call 0x003E1D70 */

loc_001913BE: ;
    MEMF(esp + 8) = xmm0; /* movss */
    fp_push(MEMF(esp + 8)); /* fld float */
    fp_st1() *= fp_top(); fp_pop(); /* fmul */
    fp_st1() += fp_top(); fp_pop(); /* fadd */
    fp_st1() *= fp_top(); fp_pop(); /* fmul */
    PUSH32(esp, 0); sub_00471288(); /* call 0x00471288 */

loc_001913DF: ;
    MEM8(esp + 0x18) = LO8(eax);
    PUSH32(esp, 0); sub_003E1D70(); /* call 0x003E1D70 */

loc_001913E8: ;
    MEMF(esp + 8) = xmm0; /* movss */
    fp_push(MEMF(esp + 8)); /* fld float */
    fp_st1() *= fp_top(); fp_pop(); /* fmul */
    fp_st1() += fp_top(); fp_pop(); /* fadd */
    fp_st1() *= fp_top(); fp_pop(); /* fmul */
    PUSH32(esp, 0); sub_00471288(); /* call 0x00471288 */

loc_00191409: ;
    MEM8(esp + 0x19) = LO8(eax);
    PUSH32(esp, 0); sub_003E1D70(); /* call 0x003E1D70 */

loc_00191412: ;
    MEMF(esp + 8) = xmm0; /* movss */
    fp_push(MEMF(esp + 8)); /* fld float */
    fp_st1() *= fp_top(); fp_pop(); /* fmul */
    fp_st1() += fp_top(); fp_pop(); /* fadd */
    fp_st1() *= fp_top(); fp_pop(); /* fmul */
    PUSH32(esp, 0); sub_00471288(); /* call 0x00471288 */

loc_00191433: ;
    MEM8(esp + 0x1A) = LO8(eax);
    PUSH32(esp, 0); sub_003E1D70(); /* call 0x003E1D70 */

loc_0019143C: ;
    MEMF(esp + 8) = xmm0; /* movss */
    fp_push(MEMF(esp + 8)); /* fld float */
    fp_st1() *= fp_top(); fp_pop(); /* fmul */
    fp_st1() += fp_top(); fp_pop(); /* fadd */
    fp_st1() *= fp_top(); fp_pop(); /* fmul */
    PUSH32(esp, 0); sub_00471288(); /* call 0x00471288 */

loc_0019145D: ;
    xmm0 = MEMF(esp + 0x94); /* movss */
    SET_LO8(ebx, LO8(eax));
    eax = MEM32(esp + 0x90);
    ecx = MEM32(eax);
    edx = MEM32(eax + 4);
    eax = MEM32(eax + 8);
    MEM32(esp + 0x50) = ecx;
    ecx = MEM32(0x595D14);
    MEM32(esp + 0x5C) = ecx;
    ecx = MEM32(esp + 0xA0);
    MEM32(esp + 0x54) = edx;
    edx = MEM32(0x595D18);
    MEM32(esp + 0x58) = eax;
    eax = MEM32(0x595D1C);
    MEM32(esp + 0x60) = edx;
    edx = MEM32(ecx);
    MEM32(esp + 0x64) = eax;
    eax = MEM32(ecx + 4);
    ecx = MEM32(ecx + 8);
    MEMF(esp + 0x4C) = xmm0; /* movss */
    MEMF(esp + 0x48) = xmm0; /* movss */
    xmm0 = MEMF(esp + 0xA4); /* movss */
    MEM32(esp + 0x70) = ecx;
    MEM8(esp + 0x1B) = LO8(ebx);
    MEM32(esp + 0x68) = edx;
    MEM32(esp + 0x6C) = eax;
    MEMF(esp + 0x74) = xmm0; /* movss */
    ecx = SX16(LO16(esi));
    ecx = ecx << 1;
    eax = 0x55555556;
    { int64_t _r = (int64_t)(int32_t)eax * (int64_t)(int32_t)ecx;
      eax = (uint32_t)_r; edx = (uint32_t)(_r >> 32); }
    eax = edx;
    eax = eax >> 0x1F;
    eax = eax + edx;
    MEM16(esp + 0x3C) = LO16(eax);
    ecx = SX16(LO16(eax));
    eax = ZX8(LO8(ebx));
    edx = ((int32_t)eax < 0) ? 0xFFFFFFFF : 0; /* cdq */
    { int64_t _dividend = ((int64_t)(int32_t)edx << 32) | eax;
      eax = (uint32_t)((int32_t)(_dividend / (int32_t)ecx));
      edx = (uint32_t)((int32_t)(_dividend % (int32_t)ecx)); }
    xmm0 = MEMF(esp + 0x98); /* movss */
    xmm0 = xmm0 * MEMF(0x64922C); /* mulss */
    MEM16(esp + 0x40) = LO16(esi);
    MEMF(esp + 0x44) = xmm0; /* movss */
    eax++;
    MEM16(esp + 0x3E) = LO16(eax);
    PUSH32(esp, 0); sub_003E2480(); /* call 0x003E2480 */

loc_00191522: ;
    esi = eax;
    esi = esi & 1;
    esi = esi << 1;
    PUSH32(esp, 0); sub_003E2480(); /* call 0x003E2480 */

loc_0019152E: ;
    eax = eax & 1;
    esi = esi | eax;
    SET_LO8(eax, LO8(eax) | 0xFF);
    PUSH32(esp, 0xFF);
    MEM8(esp + 0x84) = LO8(eax);
    MEM8(esp + 0x85) = LO8(eax);
    MEM8(esp + 0x86) = LO8(eax);
    eax = 0; /* xor self */
    PUSH32(esp, eax);
    edx = 4;
    PUSH32(esp, eax);
    MEM32(esp + 0x28) = edx;
    MEM32(esp + 0x34) = edx;
    esi = esi << 6;
    ecx = 2;
    edx = esp + 0x18;
    PUSH32(esp, 1);
    esi = esi | 0x81C607;
    PUSH32(esp, edx);
    MEM32(esp + 0x8C) = esi;
    MEM8(esp + 0x97) = LO8(eax);
    MEM32(esp + 0x90) = eax;
    MEM8(esp + 0x98) = 0xFF;
    MEM32(esp + 0x34) = ecx;
    MEM32(esp + 0x38) = eax;
    MEM32(esp + 0x40) = ecx;
    MEM32(esp + 0x44) = eax;
    MEM32(esp + 0x48) = 0x303;
    PUSH32(esp, 0); sub_00105450(); /* call 0x00105450 */

loc_001915AF: ;
    esp = esp + 0x14;
    POP32(esp, esi);
    POP32(esp, ebx);
    esp = esp + 0x80;
    esp += 4; return; /* ret */

    #undef fp_push
    #undef fp_pop
    #undef fp_popp
    #undef fp_top
    #undef fp_st1
}

/**
 * sub_001915C0
 * Original: 0x001915C0 - 0x0019184A (650 bytes, 139 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_001915C0(void)
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

loc_001915C0: ;
    esp = esp - 0xA8;
    xmm0 = xmm0 * MEMF(0x648E38); /* mulss */
    PUSH32(esp, ebx);
    PUSH32(esp, ebp);
    PUSH32(esp, esi);
    ebp = (int32_t)xmm0; /* cvttss2si */
    xmm0 = 0.0f; /* xorps self = zero */
    PUSH32(esp, edi);
    esi = eax;
    edi = ecx;
    MEM32(esp + 0x40) = 0x2AA;
    MEM16(esp + 0x14) = LO16(ebp);
    MEMF(esp + 0x18) = xmm0; /* movss */
    MEMF(esp + 0x1C) = xmm0; /* movss */
    PUSH32(esp, 0); sub_003E1D70(); /* call 0x003E1D70 */

loc_001915FB: ;
    MEMF(esp + 0x10) = xmm0; /* movss */
    fp_push(MEMF(esp + 0x10)); /* fld float */
    fp_st1() *= fp_top(); fp_pop(); /* fmul */
    fp_st1() += fp_top(); fp_pop(); /* fadd */
    fp_st1() *= fp_top(); fp_pop(); /* fmul */
    PUSH32(esp, 0); sub_00471288(); /* call 0x00471288 */

loc_0019161C: ;
    MEM8(esp + 0x20) = LO8(eax);
    PUSH32(esp, 0); sub_003E1D70(); /* call 0x003E1D70 */

loc_00191625: ;
    MEMF(esp + 0x10) = xmm0; /* movss */
    fp_push(MEMF(esp + 0x10)); /* fld float */
    fp_st1() *= fp_top(); fp_pop(); /* fmul */
    fp_st1() += fp_top(); fp_pop(); /* fadd */
    fp_st1() *= fp_top(); fp_pop(); /* fmul */
    PUSH32(esp, 0); sub_00471288(); /* call 0x00471288 */

loc_00191646: ;
    MEM8(esp + 0x21) = LO8(eax);
    PUSH32(esp, 0); sub_003E1D70(); /* call 0x003E1D70 */

loc_0019164F: ;
    MEMF(esp + 0x10) = xmm0; /* movss */
    fp_push(MEMF(esp + 0x10)); /* fld float */
    fp_st1() *= fp_top(); fp_pop(); /* fmul */
    fp_st1() += fp_top(); fp_pop(); /* fadd */
    fp_st1() *= fp_top(); fp_pop(); /* fmul */
    PUSH32(esp, 0); sub_00471288(); /* call 0x00471288 */

loc_00191670: ;
    MEM8(esp + 0x22) = LO8(eax);
    PUSH32(esp, 0); sub_003E1D70(); /* call 0x003E1D70 */

loc_00191679: ;
    MEMF(esp + 0x10) = xmm0; /* movss */
    fp_push(MEMF(esp + 0x10)); /* fld float */
    fp_st1() *= fp_top(); fp_pop(); /* fmul */
    fp_st1() += fp_top(); fp_pop(); /* fadd */
    fp_st1() *= fp_top(); fp_pop(); /* fmul */
    PUSH32(esp, 0); sub_00471288(); /* call 0x00471288 */

loc_0019169A: ;
    ecx = MEM32(edi + 4);
    edx = MEM32(edi + 8);
    xmm0 = MEMF(esp + 0xBC); /* movss */
    SET_LO8(ebx, LO8(eax));
    eax = MEM32(edi);
    MEM32(esp + 0x58) = eax;
    eax = MEM32(0x595D14);
    MEM32(esp + 0x5C) = ecx;
    ecx = MEM32(0x595D18);
    MEM32(esp + 0x60) = edx;
    edx = MEM32(0x595D1C);
    MEM32(esp + 0x64) = eax;
    eax = MEM32(esi);
    MEM32(esp + 0x68) = ecx;
    ecx = MEM32(esi + 4);
    MEM32(esp + 0x6C) = edx;
    edx = MEM32(esi + 8);
    MEMF(esp + 0x54) = xmm0; /* movss */
    MEMF(esp + 0x50) = xmm0; /* movss */
    xmm0 = MEMF(esp + 0xC8); /* movss */
    MEM8(esp + 0x23) = LO8(ebx);
    MEM32(esp + 0x70) = eax;
    MEM32(esp + 0x74) = ecx;
    MEM32(esp + 0x78) = edx;
    MEMF(esp + 0x7C) = xmm0; /* movss */
    ecx = LO16(ebp);
    ecx = ecx << 1;
    eax = 0x55555556;
    { int64_t _r = (int64_t)(int32_t)eax * (int64_t)(int32_t)ecx;
      eax = (uint32_t)_r; edx = (uint32_t)(_r >> 32); }
    eax = edx;
    eax = eax >> 0x1F;
    eax = eax + edx;
    ecx = SX16(LO16(eax));
    MEM16(esp + 0x44) = LO16(eax);
    eax = ZX8(LO8(ebx));
    edx = ((int32_t)eax < 0) ? 0xFFFFFFFF : 0; /* cdq */
    { int64_t _dividend = ((int64_t)(int32_t)edx << 32) | eax;
      eax = (uint32_t)((int32_t)(_dividend / (int32_t)ecx));
      edx = (uint32_t)((int32_t)(_dividend % (int32_t)ecx)); }
    xmm0 = 0.0f; /* xorps self = zero */
    PUSH32(esp, 0xFF);
    ebx = 0; /* xor self */
    PUSH32(esp, 0x28);
    PUSH32(esp, ebx);
    ecx = 4;
    edx = esp + 0x20;
    MEM16(esp + 0x54) = 1;
    MEMF(esp + 0x58) = xmm0; /* movss */
    MEM32(esp + 0x8C) = 0x81C201;
    MEM8(esp + 0x94) = 0x2C;
    MEM8(esp + 0x97) = LO8(ebx);
    MEM32(esp + 0x90) = ebx;
    MEM8(esp + 0x98) = 0xFF;
    MEM32(esp + 0x30) = ecx;
    MEM32(esp + 0x38) = ebx;
    MEM32(esp + 0x3C) = ecx;
    MEM32(esp + 0x44) = ebx;
    MEM32(esp + 0x48) = 0x303;
    eax++;
    MEM16(esp + 0x52) = LO16(eax);
    SET_LO8(eax, LO8(eax) | 0xFF);
    MEM8(esp + 0x95) = LO8(eax);
    MEM8(esp + 0x96) = LO8(eax);
    eax = 2;
    PUSH32(esp, eax);
    PUSH32(esp, edx);
    MEM32(esp + 0x3C) = eax;
    MEM32(esp + 0x48) = eax;
    PUSH32(esp, 0); sub_00105450(); /* call 0x00105450 */

loc_001917B8: ;
    esi = eax;
    esp = esp + 0x14;
    if (CMP_EQ(esi, ebx)) goto loc_0019183F; /* je: equal / zero */

loc_001917C1: ;
    xmm0 = MEMF(esp + 0xC4); /* movss */
    MEMF(esp + 0x90) = xmm0; /* movss */
    xmm0 = MEMF(esp + 0xBC); /* movss */
    MEMF(esp + 0x94) = xmm0; /* movss */
    MEMF(esp + 0x98) = xmm0; /* movss */
    xmm0 = MEMF(esp + 0xC0); /* movss */
    MEMF(esp + 0x9C) = xmm0; /* movss */
    PUSH32(esp, 0); sub_003E1D70(); /* call 0x003E1D70 */

loc_00191805: ;
    MEMF(esp + 0xA0) = xmm0; /* movss */
    xmm0 = MEMF(0x649098); /* movss */
    MEMF(esp + 0xA4) = xmm0; /* movss */
    xmm0 = 0.0f; /* xorps self = zero */
    edi = esi + 0x170;
    ecx = 0xA;
    esi = esp + 0x90;
    MEMF(esp + 0xA8) = xmm0; /* movss */
    memcpy((void*)XBOX_PTR(edi), (void*)XBOX_PTR(esi), ecx * 4);
    esi += ecx * 4; edi += ecx * 4; ecx = 0; /* rep movsd */

loc_0019183F: ;
    POP32(esp, edi);
    POP32(esp, esi);
    POP32(esp, ebp);
    POP32(esp, ebx);
    esp = esp + 0xA8;
    esp += 4; return; /* ret */

    #undef fp_push
    #undef fp_pop
    #undef fp_popp
    #undef fp_top
    #undef fp_st1
}

/**
 * sub_00191850
 * Original: 0x00191850 - 0x0019186B (27 bytes, 6 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00191850(void)
{
    uint32_t ebp;
    int _flags = 0; /* fallback flag var */
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_00191850: ;
    PUSH32(esp, 0); sub_00141960(); /* call 0x00141960 */

loc_00191855: ;
    eax = ZX8(LO8(eax));
    if (CMP_A(eax, 0xA)) { sub_0019186B(); return; } /* ja: above (unsigned >) */

loc_0019185D: ;
    eax = ZX8(MEM8(eax + 0x19187C));
    g_seh_ebp = ebp; RECOMP_ITAIL(MEM32(eax * 4 + 0x191874)); return; /* indirect tail jmp */

}

/**
 * sub_00191890
 * Original: 0x00191890 - 0x00191A11 (385 bytes, 92 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00191890(void)
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

loc_00191890: ;
    esp = esp - 0x28;
    PUSH32(esp, ebx);
    PUSH32(esp, ebp);
    (void)0; /* test ecx, ecx - flags set for next jcc */
    xmm0 = MEMF(esp + 0x34); /* movss */
    edx = esi;
    ebx = MEM32(edx);
    MEM32(esp + 0xC) = ebx;
    ebx = MEM32(edx + 4);
    edx = MEM32(edx + 8);
    xmm1 = MEMF(esp + 0xC); /* movss */
    xmm1 = xmm1 * xmm0; /* mulss */
    MEM32(esp + 0x14) = edx;
    MEMF(esp + 0xC) = xmm1; /* movss */
    edx = MEM32(esp + 0xC);
    MEM32(esp + 0x10) = ebx;
    xmm1 = MEMF(esp + 0x10); /* movss */
    xmm1 = xmm1 * xmm0; /* mulss */
    MEM32(esp + 0x18) = edx;
    MEMF(esp + 0x10) = xmm1; /* movss */
    xmm1 = MEMF(esp + 0x14); /* movss */
    edx = MEM32(esp + 0x10);
    xmm1 = xmm1 * xmm0; /* mulss */
    xmm0 = MEMF(esp + 0x18); /* movss */
    MEM32(esp + 0x1C) = edx;
    MEMF(esp + 0x14) = xmm1; /* movss */
    edx = MEM32(esp + 0x14);
    MEM32(esp + 0x20) = edx;
    edx = MEM32(eax);
    MEM32(esp + 0xC) = edx;
    xmm0 = xmm0 + MEMF(esp + 0xC); /* addss */
    edx = MEM32(eax + 4);
    eax = MEM32(eax + 8);
    MEMF(esp + 0xC) = xmm0; /* movss */
    xmm0 = MEMF(esp + 0x1C); /* movss */
    MEM32(esp + 0x10) = edx;
    xmm0 = xmm0 + MEMF(esp + 0x10); /* addss */
    MEMF(esp + 0x10) = xmm0; /* movss */
    xmm0 = MEMF(esp + 0x20); /* movss */
    MEM32(esp + 0x14) = eax;
    xmm0 = xmm0 + MEMF(esp + 0x14); /* addss */
    ebp = MEM32(esp + 0xC);
    MEMF(esp + 0x14) = xmm0; /* movss */
    if (TEST_NZ(ecx, ecx)) goto loc_00191950; /* jne: not equal / not zero */

loc_0019194B: ;
    ecx = 0x75DE9C;

loc_00191950: ;
    xmm0 = MEMF(ecx + 4); /* movss */
    xmm0 = xmm0 * MEMF(esi + 8); /* mulss */
    xmm1 = MEMF(ecx + 8); /* movss */
    xmm1 = xmm1 * MEMF(esi + 4); /* mulss */
    xmm0 = xmm0 - xmm1; /* subss */
    xmm1 = MEMF(esi + 8); /* movss */
    xmm1 = xmm1 * MEMF(ecx); /* mulss */
    MEMF(esp + 0x24) = xmm0; /* movss */
    xmm0 = MEMF(esi); /* movss */
    xmm0 = xmm0 * MEMF(ecx + 8); /* mulss */
    xmm0 = xmm0 - xmm1; /* subss */
    xmm1 = MEMF(ecx + 4); /* movss */
    xmm1 = xmm1 * MEMF(esi); /* mulss */
    MEMF(esp + 0x28) = xmm0; /* movss */
    xmm0 = MEMF(ecx); /* movss */
    ecx = MEM32(esp + 0x24);
    xmm0 = xmm0 * MEMF(esi + 4); /* mulss */
    edx = MEM32(esp + 0x28);
    xmm0 = xmm0 - xmm1; /* subss */
    MEMF(esp + 0x2C) = xmm0; /* movss */
    eax = MEM32(esp + 0x2C);
    MEM32(esp + 0x18) = ecx;
    ecx = esp + 0x18;
    MEM32(esp + 0x1C) = edx;
    MEM32(esp + 0x20) = eax;
    MEM32(esp + 0x34) = ecx;
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
    MEMF(esp + 8) = xmm1; /* movss */
    fp_push(MEMF(esp + 8)); /* fld float */
    fp_top() = fabs(fp_top()); /* fabs */
    fp_push(MEMF(0x648D24)); /* fld float */
    _fpu_cmp = (fp_top() < fp_st1()) ? -1 : (fp_top() > fp_st1()) ? 1 : 0; fp_pop(); /* fcompi */
    /* fstp st(0) */
    if ((_fpu_cmp <= 0) /* fcompi */) { sub_00191A11(); return; } /* jbe: below or equal (unsigned <=) */

loc_00191A01: ;
    xmm0 = 0.0f; /* xorps self = zero */
    xmm2 = MEMF(0x648D14); /* movss */
    xmm1 = xmm0; /* movaps */
    g_seh_ebp = ebp; sub_00191A2E(); return; /* tail jmp 0x00191A2E */

    #undef fp_push
    #undef fp_pop
    #undef fp_popp
    #undef fp_top
    #undef fp_st1
}

/**
 * sub_00191B00
 * Original: 0x00191B00 - 0x00191CBF (447 bytes, 111 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00191B00(void)
{
    uint32_t ebp;
    int _flags = 0; /* fallback flag var */
    float xmm0, xmm1, xmm2;
    double _fp_stack[8];
    int _fp_top = 0;
    #define fp_push(v) (_fp_stack[--_fp_top & 7] = (v))
    #define fp_pop() (_fp_top++)
    #define fp_popp() (fp_pop())
    #define fp_top() _fp_stack[_fp_top & 7]
    #define fp_st1() _fp_stack[(_fp_top + 1) & 7]
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_00191B00: ;
    esp = esp - 0x18;
    PUSH32(esp, ebx);
    ebx = MEM32(esp + 0x30);
    PUSH32(esp, ebp);
    ebp = MEM32(esp + 0x30);
    (void)0; /* cmp ebp, 0xFFFFFFFFu - flags set for next jcc */
    PUSH32(esp, esi);
    esi = eax;
    if (CMP_EQ(ebp, 0xFFFFFFFFu)) goto loc_00191CB8; /* je: equal / zero */

loc_00191B19: ;
    (void)0; /* cmp ebx, 0xFFFFFFFFu - flags set for next jcc */
    xmm0 = MEMF(esi + 0x30); /* movss */
    MEMF(esp + 0x18) = xmm0; /* movss */
    xmm0 = MEMF(esi + 0x34); /* movss */
    MEMF(esp + 0x1C) = xmm0; /* movss */
    xmm0 = MEMF(esi + 0x38); /* movss */
    PUSH32(esp, edi);
    edi = 0x800;
    MEMF(esp + 0x24) = xmm0; /* movss */
    if (CMP_EQ(ebx, 0xFFFFFFFFu)) goto loc_00191B4A; /* je: equal / zero */

loc_00191B45: ;
    edi = 0x804;

loc_00191B4A: ;
    eax = MEM32(esp + 0x40);
    if (((int32_t)(eax & eax) >= 0)) goto loc_00191B58; /* jns: not sign (positive) */

loc_00191B52: ;
    edi = edi | 0x1000;

loc_00191B58: ;
    PUSH32(esp, 0); sub_003E1D70(); /* call 0x003E1D70 */

loc_00191B5D: ;
    xmm0 = xmm0 * MEMF(0x6B7A1C); /* mulss */
    xmm0 = xmm0 + MEMF(0x6B7A18); /* addss */
    MEMF(esp + 0x38) = xmm0; /* movss */
    PUSH32(esp, 0); sub_003E1D70(); /* call 0x003E1D70 */

loc_00191B78: ;
    xmm0 = xmm0 * MEMF(0x6B7A14); /* mulss */
    xmm0 = xmm0 + MEMF(0x6B7A10); /* addss */
    MEMF(esp + 0x10) = xmm0; /* movss */
    PUSH32(esp, 0); sub_003E1D70(); /* call 0x003E1D70 */

loc_00191B93: ;
    xmm0 = xmm0 * MEMF(0x6B7A0C); /* mulss */
    xmm0 = xmm0 + MEMF(0x6B7A08); /* addss */
    MEMF(esp + 0x14) = xmm0; /* movss */
    PUSH32(esp, 0); sub_003E1D70(); /* call 0x003E1D70 */

loc_00191BAE: ;
    fp_push(MEMF(esp + 0x38)); /* fld float */
    xmm0 = xmm0 * MEMF(0x6B7A24); /* mulss */
    fp_st1() *= fp_top(); fp_pop(); /* fmul */
    xmm0 = xmm0 + MEMF(0x6B7A20); /* addss */
    PUSH32(esp, 0);
    PUSH32(esp, 0);
    MEMF(esp + 0x20) = xmm0; /* movss */
    PUSH32(esp, 0);
    PUSH32(esp, 0); sub_00471288(); /* call 0x00471288 */

loc_00191BD9: ;
    fp_push(MEMF(esp + 0x1C)); /* fld float */
    fp_st1() *= fp_top(); fp_pop(); /* fmul */
    PUSH32(esp, eax);
    PUSH32(esp, 0); sub_00471288(); /* call 0x00471288 */

loc_00191BE9: ;
    fp_push(MEMF(esp + 0x24)); /* fld float */
    fp_st1() *= fp_top(); fp_pop(); /* fmul */
    PUSH32(esp, eax);
    PUSH32(esp, 0); sub_00471288(); /* call 0x00471288 */

loc_00191BF9: ;
    fp_push(MEMF(esp + 0x2C)); /* fld float */
    fp_st1() *= fp_top(); fp_pop(); /* fmul */
    PUSH32(esp, eax);
    PUSH32(esp, 0); sub_00471288(); /* call 0x00471288 */

loc_00191C09: ;
    ecx = MEM32(esp + 0x48);
    edx = esp + 0x34;
    PUSH32(esp, eax);
    eax = MEM32(esp + 0x48);
    PUSH32(esp, 0x50);
    PUSH32(esp, edi);
    PUSH32(esp, ebx);
    PUSH32(esp, ebp);
    PUSH32(esp, eax);
    PUSH32(esp, eax);
    eax = MEM32(esp + 0x68);
    PUSH32(esp, eax);
    PUSH32(esp, ecx);
    PUSH32(esp, 0x3DCCCCCD);
    PUSH32(esp, edx);
    PUSH32(esp, 0xA);
    edi = 0x5A02CC;
    PUSH32(esp, 0); sub_001AF030(); /* call 0x001AF030 */

loc_00191C35: ;
    esp = esp + 0x48;
    if (TEST_Z(eax, eax)) goto loc_00191CB7; /* je: equal / zero */

loc_00191C3C: ;
    xmm0 = 0.0f; /* xorps self = zero */
    xmm2 = MEMF(0x648D34); /* movss */
    MEMF(eax + 0x48) = xmm0; /* movss */
    xmm0 = MEMF(eax + 0x38); /* movss */
    xmm0 = xmm0 * MEMF(0x649B00); /* mulss */
    SET_LO8(ecx, 0x80);
    MEM8(eax + 0x100) = LO8(ecx);
    MEM8(eax + 0x101) = LO8(ecx);
    MEM8(eax + 0x102) = LO8(ecx);
    MEMF(eax + 0x4C) = xmm0; /* movss */
    xmm0 = MEMF(0x648D14); /* movss */
    eax = eax + 0x104;
    ecx = 0x10;
    edi = eax;
    memcpy((void*)XBOX_PTR(edi), (void*)XBOX_PTR(esi), ecx * 4);
    esi += ecx * 4; edi += ecx * 4; ecx = 0; /* rep movsd */
    ecx = MEM32(esp + 0x40);
    (void)0; /* test ecx, 0x4000000 - flags set for next jcc */
    xmm1 = xmm2; /* movaps */
    if (TEST_NZ(ecx, 0x4000000)) goto loc_00191C9A; /* jne: not equal / not zero */

loc_00191C97: ;
    xmm1 = xmm0; /* movaps */

loc_00191C9A: ;
    (void)0; /* test ecx, 0x8000000 - flags set for next jcc */
    MEMF(eax + 0x40) = xmm1; /* movss */
    if (TEST_Z(ecx, 0x8000000)) goto loc_00191CAA; /* je: equal / zero */

loc_00191CA7: ;
    xmm0 = xmm2; /* movaps */

loc_00191CAA: ;
    xmm0 = xmm0 * MEMF(0x6B7A34); /* mulss */
    MEMF(eax + 0x44) = xmm0; /* movss */

loc_00191CB7: ;
    POP32(esp, edi);

loc_00191CB8: ;
    POP32(esp, esi);
    POP32(esp, ebp);
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
 * sub_00191CC0
 * Original: 0x00191CC0 - 0x00191D01 (65 bytes, 28 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00191CC0(void)
{
    uint32_t ebp;

loc_00191CC0: ;
    PUSH32(esp, ebp);
    ebp = esp;
    esp = esp & 0xFFFFFFF0u;
    esp = esp - 0x4C;
    PUSH32(esp, edi);
    PUSH32(esp, 0x3E800000);
    ecx = 0; /* xor self */
    edi = esp + 0x14;
    PUSH32(esp, 0); sub_00191890(); /* call 0x00191890 */

loc_00191CDA: ;
    eax = MEM32(ebp + 0x1C);
    ecx = MEM32(ebp + 0x18);
    edx = MEM32(ebp + 0x14);
    PUSH32(esp, eax);
    eax = MEM32(ebp + 0x10);
    PUSH32(esp, ecx);
    ecx = MEM32(ebp + 0xC);
    PUSH32(esp, edx);
    edx = MEM32(ebp + 8);
    PUSH32(esp, eax);
    PUSH32(esp, ecx);
    PUSH32(esp, edx);
    eax = edi;
    PUSH32(esp, 0); sub_00191B00(); /* call 0x00191B00 */

loc_00191CF9: ;
    esp = esp + 0x1C;
    POP32(esp, edi);
    esp = ebp;
    POP32(esp, ebp);
    esp += 4; return; /* ret */

}

/**
 * sub_00191D10
 * Original: 0x00191D10 - 0x00191DD0 (192 bytes, 57 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00191D10(void)
{
    int _flags = 0; /* fallback flag var */
    float xmm0;

loc_00191D10: ;
    SET_LO8(eax, MEM8(0x7819D5));
    esp = esp - 0x10;
    if (TEST_NZ(LO8(eax), LO8(eax))) goto loc_00191DCC; /* jne: not equal / not zero */

loc_00191D20: ;
    PUSH32(esp, esi);
    esi = MEM32(edi + 0x34);
    eax = MEM32(esi + 0x68);
    if (TEST_Z(eax, eax)) goto loc_00191D54; /* je: equal / zero */

loc_00191D2B: ;
    if (CMP_EQ(eax, 1)) goto loc_00191D54; /* je: equal / zero */

loc_00191D30: ;
    if (CMP_EQ(eax, 2)) goto loc_00191D54; /* je: equal / zero */

loc_00191D35: ;
    if (CMP_EQ(eax, 3)) goto loc_00191D54; /* je: equal / zero */

loc_00191D3A: ;
    if (CMP_EQ(eax, 4)) goto loc_00191D54; /* je: equal / zero */

loc_00191D3F: ;
    if (CMP_EQ(eax, 0x111)) goto loc_00191D54; /* je: equal / zero */

loc_00191D46: ;
    if (CMP_EQ(eax, 0x114)) goto loc_00191D54; /* je: equal / zero */

loc_00191D4D: ;
    if (CMP_NE(eax, 0x96)) goto loc_00191DCB; /* jne: not equal / not zero */

loc_00191D54: ;
    SET_LO8(eax, MEM8(esp + 0x18));
    if (TEST_Z(LO8(eax), LO8(eax))) goto loc_00191D7E; /* je: equal / zero */

loc_00191D5C: ;
    SET_LO8(eax, MEM8(esi + 0x10B));
    ecx = esp + 4;
    MEM8(esp + 8) = LO8(eax);
    PUSH32(esp, 0xC);
    PUSH32(esp, ecx);
    eax = 0x28;
    MEM32(esp + 0xC) = esi;
    PUSH32(esp, 0); sub_000DAC40(); /* call 0x000DAC40 */

loc_00191D7B: ;
    esp = esp + 8;

loc_00191D7E: ;
    SET_LO8(edx, MEM8(esi + 0x10B));
    xmm0 = MEMF(0x64925C); /* movss */
    MEM8(esp + 8) = LO8(edx);
    (void)0; /* cmp MEM32(esi + 0x68), 0x96 - flags set for next jcc */
    SET_LO8(eax, (CMP_NE(MEM32(esi + 0x68), 0x96)) ? 1 : 0); /* setne */
    SET_LO8(eax, LO8(eax) - 1);
    ecx = 0; /* xor self */
    SET_LO8(ecx, MEM8(edi + 4));
    MEM32(esp + 4) = esi;
    MEMF(esp + 0xC) = xmm0; /* movss */
    MEM8(esp + 0x10) = 0;
    MEM8(esp + 0x11) = 1;
    eax = eax & 3;
    MEM8(esp + 0x12) = LO8(eax);
    PUSH32(esp, ecx);
    PUSH32(esp, 0);
    eax = esp + 0xC;
    PUSH32(esp, 0); sub_001A0580(); /* call 0x001A0580 */

loc_00191DC8: ;
    esp = esp + 8;

loc_00191DCB: ;
    POP32(esp, esi);

loc_00191DCC: ;
    esp = esp + 0x10;
    esp += 4; return; /* ret */

}

/**
 * sub_00191DD0
 * Original: 0x00191DD0 - 0x00191E90 (192 bytes, 57 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00191DD0(void)
{
    int _flags = 0; /* fallback flag var */
    float xmm0;

loc_00191DD0: ;
    SET_LO8(eax, MEM8(0x7819D5));
    esp = esp - 0x10;
    if (TEST_NZ(LO8(eax), LO8(eax))) goto loc_00191E8C; /* jne: not equal / not zero */

loc_00191DE0: ;
    PUSH32(esp, esi);
    esi = MEM32(edi + 0x34);
    eax = MEM32(esi + 0x68);
    if (TEST_Z(eax, eax)) goto loc_00191E14; /* je: equal / zero */

loc_00191DEB: ;
    if (CMP_EQ(eax, 1)) goto loc_00191E14; /* je: equal / zero */

loc_00191DF0: ;
    if (CMP_EQ(eax, 2)) goto loc_00191E14; /* je: equal / zero */

loc_00191DF5: ;
    if (CMP_EQ(eax, 3)) goto loc_00191E14; /* je: equal / zero */

loc_00191DFA: ;
    if (CMP_EQ(eax, 4)) goto loc_00191E14; /* je: equal / zero */

loc_00191DFF: ;
    if (CMP_EQ(eax, 0x111)) goto loc_00191E14; /* je: equal / zero */

loc_00191E06: ;
    if (CMP_EQ(eax, 0x114)) goto loc_00191E14; /* je: equal / zero */

loc_00191E0D: ;
    if (CMP_NE(eax, 0x96)) goto loc_00191E8B; /* jne: not equal / not zero */

loc_00191E14: ;
    SET_LO8(eax, MEM8(esp + 0x18));
    if (TEST_Z(LO8(eax), LO8(eax))) goto loc_00191E3E; /* je: equal / zero */

loc_00191E1C: ;
    SET_LO8(eax, MEM8(esi + 0x10B));
    ecx = esp + 4;
    MEM8(esp + 8) = LO8(eax);
    PUSH32(esp, 0xC);
    PUSH32(esp, ecx);
    eax = 0x28;
    MEM32(esp + 0xC) = esi;
    PUSH32(esp, 0); sub_000DAC40(); /* call 0x000DAC40 */

loc_00191E3B: ;
    esp = esp + 8;

loc_00191E3E: ;
    SET_LO8(edx, MEM8(esi + 0x10B));
    xmm0 = MEMF(0x58BD48); /* movss */
    MEM8(esp + 8) = LO8(edx);
    (void)0; /* cmp MEM32(esi + 0x68), 0x96 - flags set for next jcc */
    SET_LO8(eax, (CMP_NE(MEM32(esi + 0x68), 0x96)) ? 1 : 0); /* setne */
    SET_LO8(eax, LO8(eax) - 1);
    ecx = 0; /* xor self */
    SET_LO8(ecx, MEM8(edi + 4));
    MEM32(esp + 4) = esi;
    MEMF(esp + 0xC) = xmm0; /* movss */
    MEM8(esp + 0x10) = 0;
    MEM8(esp + 0x11) = 2;
    eax = eax & 3;
    MEM8(esp + 0x12) = LO8(eax);
    PUSH32(esp, ecx);
    PUSH32(esp, 0);
    eax = esp + 0xC;
    PUSH32(esp, 0); sub_001A0580(); /* call 0x001A0580 */

loc_00191E88: ;
    esp = esp + 8;

loc_00191E8B: ;
    POP32(esp, esi);

loc_00191E8C: ;
    esp = esp + 0x10;
    esp += 4; return; /* ret */

}

/**
 * sub_00191E90
 * Original: 0x00191E90 - 0x0019242B (1435 bytes, 288 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00191E90(void)
{
    uint32_t ebp;
    int _flags = 0; /* fallback flag var */
    float xmm0, xmm1, xmm2, xmm3;

loc_00191E90: ;
    PUSH32(esp, ebp);
    ebp = esp;
    esp = esp & 0xFFFFFFF0u;
    esp = esp - 0x174;
    PUSH32(esp, ebx);
    ebx = eax;
    PUSH32(esp, esi);
    esi = MEM32(ebx + 0x34);
    PUSH32(esp, edi);
    edx = esi;
    eax = esp + 0xD0;
    PUSH32(esp, 0); sub_002A0430(); /* call 0x002A0430 */

loc_00191EB2: ;
    esi = esi + 0x78;
    eax = MEM32(esi);
    ecx = MEM32(esi + 4);
    edx = MEM32(esi + 8);
    PUSH32(esp, 0);
    MEM32(esp + 0x70) = eax;
    xmm0 = MEMF(esp + 0x70); /* movss */
    PUSH32(esp, 0);
    MEMF(esp + 0x8C) = xmm0; /* movss */
    MEM32(esp + 0x78) = ecx;
    xmm0 = MEMF(esp + 0x78); /* movss */
    xmm0 = xmm0 + MEMF(0x648F08); /* addss */
    eax = esp + 0xD8;
    PUSH32(esp, eax);
    PUSH32(esp, ecx);
    MEMF(esp + 0x98) = xmm0; /* movss */
    xmm0 = xmm0 - MEMF(0x648EA4); /* subss */
    MEMF(esp) = xmm0; /* movss */
    ecx = esp + 0x94;
    MEM32(esp + 0x84) = edx;
    xmm1 = MEMF(esp + 0x84); /* movss */
    PUSH32(esp, 0);
    PUSH32(esp, ecx);
    MEMF(esp + 0xA4) = xmm1; /* movss */
    PUSH32(esp, 0); sub_0029FF30(); /* call 0x0029FF30 */

loc_00191F2D: ;
    esp = esp + 0x18;
    if (TEST_Z(LO8(eax), LO8(eax))) { sub_0019242B(); return; } /* je: equal / zero */

loc_00191F38: ;
    xmm0 = MEMF(esp + 0x6C); /* movss */
    MEMF(esp + 0x78) = xmm0; /* movss */
    xmm0 = MEMF(esp + 0xD0); /* movss */
    MEMF(esp + 0x7C) = xmm0; /* movss */
    xmm0 = MEMF(esp + 0x74); /* movss */
    PUSH32(esp, 0x3E800000);
    ecx = 0; /* xor self */
    esi = esp + 0x154;
    eax = esp + 0x7C;
    edi = esp + 0x94;
    MEMF(esp + 0x84) = xmm0; /* movss */
    PUSH32(esp, 0); sub_00191890(); /* call 0x00191890 */

loc_00191F80: ;
    xmm0 = MEMF(0x648F08); /* movss */
    xmm1 = MEMF(0x648D14); /* movss */
    xmm2 = 0.0f; /* xorps self = zero */
    MEMF(esp + 0x20) = xmm0; /* movss */
    xmm0 = MEMF(0x648FD8); /* movss */
    MEMF(esp + 0x24) = xmm0; /* movss */
    xmm0 = MEMF(0x648F60); /* movss */
    MEMF(esp + 0x2C) = xmm0; /* movss */
    xmm0 = MEMF(0x648CE4); /* movss */
    MEMF(esp + 0x30) = xmm0; /* movss */
    xmm0 = MEMF(0x648D1C); /* movss */
    MEMF(esp + 0x34) = xmm0; /* movss */
    xmm0 = MEMF(0x6490B8); /* movss */
    MEMF(esp + 0x38) = xmm0; /* movss */
    xmm0 = MEMF(0x648CDC); /* movss */
    MEMF(esp + 0x3C) = xmm0; /* movss */
    MEMF(esp + 0x48) = xmm0; /* movss */
    xmm0 = MEMF(0x648CF0); /* movss */
    MEMF(esp + 0x50) = xmm0; /* movss */
    MEMF(esp + 0x54) = xmm0; /* movss */
    xmm0 = MEMF(0x648EB8); /* movss */
    MEMF(esp + 0x40) = xmm1; /* movss */
    xmm1 = MEMF(0x648D40); /* movss */
    MEMF(esp + 0x58) = xmm0; /* movss */
    xmm0 = MEMF(0x5A005C); /* movss */
    MEMF(esp + 0x44) = xmm1; /* movss */
    xmm1 = MEMF(0x648CE0); /* movss */
    MEMF(esp + 0x5C) = xmm0; /* movss */
    xmm0 = MEMF(0x649ED4); /* movss */
    esi = 2;
    MEMF(esp + 0x28) = xmm2; /* movss */
    MEMF(esp + 0x60) = xmm1; /* movss */
    MEMF(esp + 0x64) = xmm1; /* movss */
    MEMF(esp + 0x4C) = xmm2; /* movss */
    MEMF(esp + 0x68) = xmm0; /* movss */
    MEMF(esp + 0x6C) = xmm2; /* movss */
    PUSH32(esp, 0); sub_00190A40(); /* call 0x00190A40 */

loc_00192075: ;
    xmm0 = MEMF(0x648D14); /* movss */
    MEMF(0x6B7A20) = xmm0; /* movss */
    xmm0 = 0.0f; /* xorps self = zero */
    MEMF(0x6B7A24) = xmm0; /* movss */
    PUSH32(esp, 0); sub_00141960(); /* call 0x00141960 */

loc_00192095: ;
    PUSH32(esp, 0x1030002);
    PUSH32(esp, 0x1911F0);
    edx = ZX8(LO8(eax));
    eax = esp + 0x70;
    PUSH32(esp, eax);
    MEM32(esp + 0x28) = edx;
    ecx = esp + 0x64;
    PUSH32(esp, ecx);
    edx = esp + 0x60;
    PUSH32(esp, edx);
    eax = esp + 0x5C;
    PUSH32(esp, eax);
    ecx = esp + 0x78;
    PUSH32(esp, ecx);
    edx = esp + 0x5C;
    PUSH32(esp, edx);
    eax = esp + 0x50;
    PUSH32(esp, eax);
    ecx = esp + 0x4C;
    PUSH32(esp, ecx);
    edx = esp + 0x48;
    PUSH32(esp, edx);
    eax = edi;
    PUSH32(esp, eax);
    eax = esp + 0x68;
    PUSH32(esp, 0); sub_00190E40(); /* call 0x00190E40 */

loc_001920DF: ;
    esi = 3;
    PUSH32(esp, 0); sub_00190A40(); /* call 0x00190A40 */

loc_001920E9: ;
    xmm0 = MEMF(0x648D14); /* movss */
    MEMF(0x6B7A20) = xmm0; /* movss */
    xmm0 = 0.0f; /* xorps self = zero */
    PUSH32(esp, 0x3E800000);
    esi = ebx + 0xD0;
    ecx = 0; /* xor self */
    eax = esp + 0xB0;
    MEMF(0x6B7A24) = xmm0; /* movss */
    PUSH32(esp, 0); sub_00191890(); /* call 0x00191890 */

loc_0019211D: ;
    PUSH32(esp, 0);
    PUSH32(esp, 0x2A8);
    PUSH32(esp, 0x2A7);
    PUSH32(esp, 0x42C80000);
    PUSH32(esp, 0x40800000);
    PUSH32(esp, 0x3F800000);
    eax = edi;
    PUSH32(esp, 0); sub_00191B00(); /* call 0x00191B00 */

loc_0019213F: ;
    esp = esp + 0x50;
    PUSH32(esp, 0);
    PUSH32(esp, 0x2A8);
    PUSH32(esp, 0x2A7);
    PUSH32(esp, 0x42C80000);
    PUSH32(esp, 0x41600000);
    PUSH32(esp, 0x3F800000);
    eax = edi;
    PUSH32(esp, 0); sub_00191B00(); /* call 0x00191B00 */

loc_00192164: ;
    SET_LO8(eax, MEM8(ebp + 8));
    esp = esp + 0x18;
    (void)0; /* test LO8(eax), LO8(eax) - flags set for next jcc */
    ebx = 1;
    if (TEST_Z(LO8(eax), LO8(eax))) goto loc_00192422; /* je: equal / zero */

loc_00192177: ;
    xmm2 = MEMF(0x648F60); /* movss */
    xmm0 = MEMF(0x64935C); /* movss */
    xmm1 = MEMF(0x6490F4); /* movss */
    xmm3 = MEMF(0x649368); /* movss */
    SET_LO8(eax, MEM8(ebp + 0xC));
    (void)0; /* test LO8(eax), LO8(eax) - flags set for next jcc */
    MEMF(esp + 0x58) = xmm2; /* movss */
    xmm2 = MEMF(0x648D10); /* movss */
    MEMF(esp + 0x24) = xmm2; /* movss */
    xmm2 = MEMF(0x648E64); /* movss */
    MEMF(esp + 0x28) = xmm2; /* movss */
    xmm2 = MEMF(0x64925C); /* movss */
    MEMF(esp + 0x1C) = xmm2; /* movss */
    xmm2 = MEMF(0x648EC8); /* movss */
    MEMF(esp + 0x64) = xmm0; /* movss */
    xmm0 = MEMF(0x648D1C); /* movss */
    MEMF(esp + 0x20) = xmm2; /* movss */
    xmm2 = MEMF(0x64A2CC); /* movss */
    MEMF(esp + 0x18) = xmm1; /* movss */
    MEMF(esp + 0x68) = xmm0; /* movss */
    xmm0 = 0.0f; /* xorps self = zero */
    MEMF(esp + 0x2C) = xmm1; /* movss */
    xmm1 = MEMF(0x64908C); /* movss */
    MEMF(esp + 0x4C) = xmm2; /* movss */
    xmm2 = MEMF(0x648D14); /* movss */
    MEMF(esp + 0x38) = xmm3; /* movss */
    xmm3 = MEMF(0x64A2C8); /* movss */
    MEMF(esp + 0x54) = xmm0; /* movss */
    MEMF(esp + 0x30) = xmm0; /* movss */
    MEMF(esp + 0x3C) = xmm1; /* movss */
    MEMF(esp + 0x40) = xmm0; /* movss */
    MEMF(esp + 0x50) = xmm0; /* movss */
    MEMF(esp + 0x44) = xmm2; /* movss */
    MEMF(esp + 0x48) = xmm0; /* movss */
    MEMF(esp + 0x34) = xmm1; /* movss */
    MEMF(esp + 0x5C) = xmm3; /* movss */
    MEMF(esp + 0x60) = xmm0; /* movss */
    if (TEST_Z(LO8(eax), LO8(eax))) goto loc_001922AB; /* je: equal / zero */

loc_00192267: ;
    xmm0 = MEMF(0x648CE4); /* movss */
    MEMF(esp + 0x2C) = xmm0; /* movss */
    xmm0 = MEMF(0x648E5C); /* movss */
    MEMF(esp + 0x3C) = xmm0; /* movss */
    xmm0 = MEMF(0x58C050); /* movss */
    MEMF(esp + 0x1C) = xmm0; /* movss */
    xmm0 = MEMF(0x648F78); /* movss */
    MEMF(esp + 0x18) = xmm1; /* movss */
    MEMF(esp + 0x24) = xmm2; /* movss */
    MEMF(esp + 0x34) = xmm0; /* movss */

loc_001922AB: ;
    xmm0 = MEMF(0x648EF8); /* movss */
    MEMF(0x6B7A20) = xmm0; /* movss */
    xmm0 = MEMF(0x59D950); /* movss */
    MEMF(0x6B7A24) = xmm0; /* movss */
    xmm0 = MEMF(esp + 0x6C); /* movss */
    ecx = 0x10;
    esi = 0x5A0350;
    edi = esp + 0x90;
    memcpy((void*)XBOX_PTR(edi), (void*)XBOX_PTR(esi), ecx * 4);
    esi += ecx * 4; edi += ecx * 4; ecx = 0; /* rep movsd */
    MEMF(esp + 0xC0) = xmm0; /* movss */
    xmm0 = MEMF(esp + 0xD0); /* movss */
    xmm0 = xmm0 - MEMF(esp + 0x18); /* subss */
    MEMF(esp + 0xC4) = xmm0; /* movss */
    xmm0 = MEMF(esp + 0x74); /* movss */
    esi = 0; /* xor self */
    MEMF(esp + 0xC8) = xmm0; /* movss */
    PUSH32(esp, 0); sub_00190A40(); /* call 0x00190A40 */

loc_0019231B: ;
    xmm0 = MEMF(0x648D14); /* movss */
    xmm1 = MEMF(esp + 0x18); /* movss */
    PUSH32(esp, 0x1010002);
    PUSH32(esp, 0x191380);
    ecx = esp + 0x64;
    PUSH32(esp, ecx);
    edx = esp + 0x40;
    PUSH32(esp, edx);
    eax = esp + 0x54;
    PUSH32(esp, eax);
    ecx = esp + 0x60;
    PUSH32(esp, ecx);
    edx = esp + 0x34;
    PUSH32(esp, edx);
    eax = esp + 0x40;
    PUSH32(esp, eax);
    ecx = esp + 0x4C;
    PUSH32(esp, ecx);
    edx = esp + 0x78;
    PUSH32(esp, edx);
    eax = esp + 0x8C;
    PUSH32(esp, eax);
    ecx = esp + 0xBC;
    PUSH32(esp, ecx);
    eax = esp + 0x6C;
    MEM32(0x84943C) = ebx;
    MEMF(0x6B7A28) = xmm0; /* movss */
    MEMF(0x6B7A2C) = xmm1; /* movss */
    MEMF(0x6B7A30) = xmm0; /* movss */
    PUSH32(esp, 0); sub_00190E40(); /* call 0x00190E40 */

loc_00192392: ;
    esi = ebx;
    PUSH32(esp, 0); sub_00190A40(); /* call 0x00190A40 */

loc_00192399: ;
    xmm0 = MEMF(0x648D14); /* movss */
    xmm1 = MEMF(esp + 0x48); /* movss */
    PUSH32(esp, 0x1010002);
    PUSH32(esp, 0x191380);
    edx = esp + 0x94;
    PUSH32(esp, edx);
    eax = esp + 0x70;
    PUSH32(esp, eax);
    ecx = esp + 0x84;
    PUSH32(esp, ecx);
    edx = esp + 0x90;
    PUSH32(esp, edx);
    eax = esp + 0x64;
    PUSH32(esp, eax);
    ecx = esp + 0x70;
    PUSH32(esp, ecx);
    edx = esp + 0x7C;
    PUSH32(esp, edx);
    eax = esp + 0xA8;
    PUSH32(esp, eax);
    ecx = esp + 0xBC;
    PUSH32(esp, ecx);
    edx = esp + 0xEC;
    PUSH32(esp, edx);
    eax = esp + 0x9C;
    MEM32(0x84943C) = ebx;
    MEMF(0x6B7A28) = xmm0; /* movss */
    MEMF(0x6B7A2C) = xmm1; /* movss */
    MEMF(0x6B7A30) = xmm0; /* movss */
    PUSH32(esp, 0); sub_00190E40(); /* call 0x00190E40 */

loc_0019241F: ;
    esp = esp + 0x60;

loc_00192422: ;
    SET_LO8(eax, LO8(ebx));
    POP32(esp, edi);
    POP32(esp, esi);
    POP32(esp, ebx);
    esp = ebp;
    POP32(esp, ebp);
    esp += 4; return; /* ret */

}

/**
 * sub_00192440
 * Original: 0x00192440 - 0x00192469 (41 bytes, 13 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00192440(void)
{

loc_00192440: ;
    eax = MEM32(esp + 4);
    PUSH32(esp, esi);
    esi = MEM32(eax + 0x34);
    eax = 0x5F49E8;
    PUSH32(esp, 0); sub_0029CDD0(); /* call 0x0029CDD0 */

loc_00192452: ;
    PUSH32(esp, 0xBF800000u);
    PUSH32(esp, 0xBF800000u);
    PUSH32(esp, eax);
    edx = esi;
    PUSH32(esp, 0); sub_001DE960(); /* call 0x001DE960 */

loc_00192464: ;
    esp = esp + 0xC;
    POP32(esp, esi);
    esp += 4; return; /* ret */

}

/**
 * sub_00192470
 * Original: 0x00192470 - 0x001924D0 (96 bytes, 26 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00192470(void)
{
    uint32_t ebp;
    int _flags = 0; /* fallback flag var */
    float xmm0;
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_00192470: ;
    esp = esp - 0xC;
    PUSH32(esp, esi);
    PUSH32(esp, edi);
    edi = MEM32(esp + 0x18);
    esi = MEM32(edi + 0x34);
    SET_LO8(eax, MEM8(esi + 0x10B));
    ecx = esp + 8;
    MEM8(esp + 0xC) = LO8(eax);
    PUSH32(esp, 0xC);
    PUSH32(esp, ecx);
    eax = 0x28;
    MEM32(esp + 0x10) = esi;
    PUSH32(esp, 0); sub_000DAC40(); /* call 0x000DAC40 */

loc_0019249B: ;
    xmm0 = MEMF(esi + 0x228); /* movss */
    edx = esi + 0x78;
    eax = MEM32(edx);
    ecx = MEM32(edx + 4);
    edx = MEM32(edx + 8);
    esp = esp + 8;
    /* comiss xmm0, MEMF(0x6499B8) - sets EFLAGS */
    MEM32(esp + 8) = eax;
    MEM32(esp + 0xC) = ecx;
    MEM32(esp + 0x10) = edx;
    if ((xmm0 <= MEMF(0x6499B8))) { sub_001924D0(); return; } /* jbe: below or equal (unsigned <=) */

loc_001924C6: ;
    xmm0 = xmm0 + MEMF(0x648EA4); /* addss */
    g_seh_ebp = ebp; sub_001924DE(); return; /* tail jmp 0x001924DE */

}

/**
 * sub_00192570
 * Original: 0x00192570 - 0x001925ED (125 bytes, 41 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00192570(void)
{
    int _flags = 0; /* fallback flag var */

loc_00192570: ;
    esp = esp - 8;
    PUSH32(esp, esi);
    PUSH32(esp, edi);
    edi = MEM32(esp + 0x14);
    esi = MEM32(edi + 0x34);
    eax = MEM32(esi + 0x568);
    if (TEST_Z(eax, eax)) goto loc_00192590; /* je: equal / zero */

loc_00192586: ;
    SET_LO8(ecx, MEM8(eax + 0xD7));
    if (TEST_NZ(LO8(ecx), LO8(ecx))) goto loc_001925E7; /* jne: not equal / not zero */

loc_00192590: ;
    SET_LO8(eax, MEM8(esi + 0x10B));
    ecx = esp + 8;
    MEM8(esp + 0xC) = LO8(eax);
    PUSH32(esp, 0xC);
    PUSH32(esp, ecx);
    eax = 0x28;
    MEM32(esp + 0x10) = esi;
    PUSH32(esp, 0); sub_000DAC40(); /* call 0x000DAC40 */

loc_001925AF: ;
    PUSH32(esp, 0);
    PUSH32(esp, 1);
    eax = edi;
    PUSH32(esp, 0); sub_00191E90(); /* call 0x00191E90 */

loc_001925BA: ;
    esp = esp + 0x10;
    if (TEST_Z(LO8(eax), LO8(eax))) goto loc_001925E7; /* je: equal / zero */

loc_001925C1: ;
    edx = MEM32(0x847024);
    eax = MEM32(edx + 0x40);
    PUSH32(esp, 0xBF800000u);
    PUSH32(esp, esi);
    PUSH32(esp, 8);
    PUSH32(esp, eax);
    eax = 2;
    PUSH32(esp, 0); sub_00024FA0(); /* call 0x00024FA0 */

loc_001925DD: ;
    PUSH32(esp, 0);
    PUSH32(esp, 0); sub_00191DD0(); /* call 0x00191DD0 */

loc_001925E4: ;
    esp = esp + 4;

loc_001925E7: ;
    POP32(esp, edi);
    POP32(esp, esi);
    esp = esp + 8;
    esp += 4; return; /* ret */

}

/**
 * sub_001925F0
 * Original: 0x001925F0 - 0x00192628 (56 bytes, 20 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_001925F0(void)
{
    int _flags = 0; /* fallback flag var */

loc_001925F0: ;
    PUSH32(esp, esi);
    esi = MEM32(esp + 8);
    PUSH32(esp, 1);
    PUSH32(esp, 0);
    eax = esi;
    PUSH32(esp, 0); sub_00191E90(); /* call 0x00191E90 */

loc_00192600: ;
    esp = esp + 8;
    if (TEST_Z(LO8(eax), LO8(eax))) goto loc_00192626; /* je: equal / zero */

loc_00192607: ;
    eax = MEM32(esi + 0x34);
    ecx = MEM32(0x847024);
    edx = MEM32(ecx + 0x40);
    PUSH32(esp, 0xBF800000u);
    PUSH32(esp, eax);
    PUSH32(esp, 0x11);
    PUSH32(esp, edx);
    eax = 2;
    PUSH32(esp, 0); sub_00024FA0(); /* call 0x00024FA0 */

loc_00192626: ;
    POP32(esp, esi);
    esp += 4; return; /* ret */

}

/**
 * sub_00192630
 * Original: 0x00192630 - 0x00192699 (105 bytes, 34 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00192630(void)
{
    int _flags = 0; /* fallback flag var */

loc_00192630: ;
    esp = esp - 8;
    PUSH32(esp, edi);
    edi = MEM32(esp + 0x10);
    eax = MEM32(edi + 0x34);
    MEM32(esp + 4) = eax;
    SET_LO8(eax, MEM8(eax + 0x10B));
    ecx = esp + 4;
    MEM8(esp + 8) = LO8(eax);
    PUSH32(esp, 0xC);
    PUSH32(esp, ecx);
    eax = 0x28;
    PUSH32(esp, 0); sub_000DAC40(); /* call 0x000DAC40 */

loc_0019265A: ;
    PUSH32(esp, 1);
    PUSH32(esp, 1);
    eax = edi;
    PUSH32(esp, 0); sub_00191E90(); /* call 0x00191E90 */

loc_00192665: ;
    esp = esp + 0x10;
    if (TEST_Z(LO8(eax), LO8(eax))) goto loc_00192694; /* je: equal / zero */

loc_0019266C: ;
    edx = MEM32(edi + 0x34);
    eax = MEM32(0x847024);
    ecx = MEM32(eax + 0x40);
    PUSH32(esp, 0xBF800000u);
    PUSH32(esp, edx);
    PUSH32(esp, 8);
    PUSH32(esp, ecx);
    eax = 2;
    PUSH32(esp, 0); sub_00024FA0(); /* call 0x00024FA0 */

loc_0019268A: ;
    PUSH32(esp, 0);
    PUSH32(esp, 0); sub_00191DD0(); /* call 0x00191DD0 */

loc_00192691: ;
    esp = esp + 4;

loc_00192694: ;
    POP32(esp, edi);
    esp = esp + 8;
    esp += 4; return; /* ret */

}

/**
 * sub_001926A0
 * Original: 0x001926A0 - 0x00192849 (425 bytes, 92 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_001926A0(void)
{
    uint32_t ebp;
    int _flags = 0; /* fallback flag var */
    float xmm0, xmm1, xmm2, xmm5, xmm6, xmm7;

loc_001926A0: ;
    PUSH32(esp, ebp);
    ebp = esp;
    esp = esp & 0xFFFFFFF0u;
    esp = esp - 0x6C;
    eax = MEM32(ebp + 0x20);
    PUSH32(esp, esi);
    esi = MEM32(eax + 0x38);
    if (TEST_Z(esi, esi)) goto loc_00192844; /* je: equal / zero */

loc_001926B8: ;
    xmm0 = MEMF(esi + 0x228); /* movss */
    /* ucomiss xmm0, MEMF(0x648E60) - sets EFLAGS */
    /* lahf - load AH from flags (used in FPU compare idiom) */
    if (1 /* jnp after test - parity */) goto loc_00192844; /* jnp: not parity */

loc_001926D1: ;
    eax = MEM32(esi + 0x3C8);
    if (TEST_Z(eax, eax)) goto loc_00192844; /* je: equal / zero */

loc_001926DF: ;
    ecx = esp + 0x30;
    PUSH32(esp, ecx);
    PUSH32(esp, 0x5F0CA0);
    PUSH32(esp, 0); sub_002F7810(); /* call 0x002F7810 */

loc_001926EE: ;
    PUSH32(esp, 0); sub_003E1D70(); /* call 0x003E1D70 */

loc_001926F3: ;
    xmm0 = xmm0 * MEMF(0x64908C); /* mulss */
    xmm7 = MEMF(0x648CE4); /* movss */
    xmm5 = 0.0f; /* xorps self = zero */
    edx = esp + 0x38;
    PUSH32(esp, edx);
    eax = esp + 0x30;
    PUSH32(esp, eax);
    ecx = esp + 0x1C;
    xmm0 = xmm0 - xmm7; /* subss */
    PUSH32(esp, ecx);
    MEMF(esp + 0x20) = xmm0; /* movss */
    MEMF(esp + 0x24) = xmm7; /* movss */
    MEMF(esp + 0x28) = xmm5; /* movss */
    PUSH32(esp, 0); sub_001101F0(); /* call 0x001101F0 */

loc_00192730: ;
    esp = esp + 0x14;
    PUSH32(esp, 0); sub_003E1D70(); /* call 0x003E1D70 */

loc_00192738: ;
    xmm0 = xmm0 * MEMF(0x648D80); /* mulss */
    xmm6 = MEMF(0x648D14); /* movss */
    xmm0 = xmm0 + xmm6; /* addss */
    xmm0 = xmm0 * MEMF(ebp + 0x14); /* mulss */
    xmm1 = xmm5; /* movaps */
    xmm1 = xmm1 - xmm0; /* subss */
    xmm0 = xmm5; /* movaps */
    xmm0 = xmm0 - MEMF(ebp + 0x18); /* subss */
    /* comiss xmm5, xmm0 - sets EFLAGS */
    MEMF(esp + 0x18) = xmm1; /* movss */
    MEMF(esp + 8) = xmm5; /* movss */
    if ((xmm5 > xmm0)) goto loc_00192777; /* ja: above (unsigned >) */

loc_00192771: ;
    MEMF(esp + 8) = xmm0; /* movss */

loc_00192777: ;
    PUSH32(esp, 0); sub_003E1D70(); /* call 0x003E1D70 */

loc_0019277C: ;
    xmm0 = xmm0 + xmm6; /* addss */
    xmm0 = xmm0 * MEMF(0x648CE0); /* mulss */
    xmm0 = xmm0 + MEMF(esp + 8); /* addss */
    MEMF(esp + 0x1C) = xmm0; /* movss */
    PUSH32(esp, 0); sub_003E1D70(); /* call 0x003E1D70 */

loc_00192799: ;
    xmm0 = xmm0 * MEMF(0x648D80); /* mulss */
    xmm0 = xmm0 + xmm6; /* addss */
    xmm0 = xmm0 * MEMF(ebp + 0x1C); /* mulss */
    xmm1 = xmm5; /* movaps */
    xmm1 = xmm1 - xmm0; /* subss */
    MEMF(esp + 0x20) = xmm1; /* movss */
    PUSH32(esp, 0); sub_003E1D70(); /* call 0x003E1D70 */

loc_001927BC: ;
    xmm0 = xmm0 + MEMF(0x648CF4); /* addss */
    xmm1 = MEMF(0x648D20); /* movss */
    MEMF(0x6B7A08) = xmm6; /* movss */
    MEMF(0x6B7A0C) = xmm5; /* movss */
    MEMF(0x6B7A10) = xmm6; /* movss */
    MEMF(0x6B7A14) = xmm5; /* movss */
    MEMF(0x6B7A18) = xmm6; /* movss */
    MEMF(0x6B7A1C) = xmm5; /* movss */
    MEMF(0x6B7A20) = xmm6; /* movss */
    MEMF(0x6B7A24) = xmm5; /* movss */
    edx = MEM32(esi + 0x228);
    PUSH32(esp, 0x42480000);
    PUSH32(esp, edx);
    xmm2 = xmm0; /* movaps */
    esp = esp - 8;
    xmm2 = xmm2 * xmm1; /* mulss */
    xmm0 = xmm0 * xmm7; /* mulss */
    MEMF(esp + 4) = xmm2; /* movss */
    MEMF(esp) = xmm0; /* movss */
    eax = esp + 0x28;
    ecx = esp + 0x34;
    xmm0 = xmm1; /* movaps */
    PUSH32(esp, 0); sub_001915C0(); /* call 0x001915C0 */

loc_00192841: ;
    esp = esp + 0x10;

loc_00192844: ;
    POP32(esp, esi);
    esp = ebp;
    POP32(esp, ebp);
    esp += 4; return; /* ret */

}

/**
 * sub_00192850
 * Original: 0x00192850 - 0x001928A1 (81 bytes, 27 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00192850(void)
{
    uint32_t ebp;
    int _flags = 0; /* fallback flag var */
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_00192850: ;
    esp = esp - 0x5C;
    SET_LO8(ecx, MEM8(eax + 0x10B));
    edx = MEM32(eax + 0x4B0);
    PUSH32(esp, ebx);
    PUSH32(esp, esi);
    MEM32(esp + 0x28) = eax;
    eax = MEM32(edx + 0x24);
    PUSH32(esp, edi);
    edx = esp + 0xC;
    PUSH32(esp, edx);
    MEM8(esp + 0x2C) = LO8(ecx);
    ecx = MEM32(eax + 8);
    eax = MEM32(ecx + 0x10);
    PUSH32(esp, 1);
    PUSH32(esp, 0);
    ebx = 0x5F0CA0;
    MEM8(esp + 0x20) = 1;
    PUSH32(esp, 0); sub_00415EC0(); /* call 0x00415EC0 */

loc_0019288B: ;
    esp = esp + 0xC;
    ecx = 0; /* xor self */
    if (TEST_Z(eax, eax)) { sub_001928A1(); return; } /* je: equal / zero */

loc_00192894: ;
    eax = MEM32(esp + 0xC);
    if (CMP_EQ(eax, ecx)) { sub_001928A1(); return; } /* je: equal / zero */

loc_0019289C: ;
    eax = MEM32(eax + 8);
    g_seh_ebp = ebp; sub_001928A3(); return; /* tail jmp 0x001928A3 */

}

/**
 * sub_00192990
 * Original: 0x00192990 - 0x001929D8 (72 bytes, 24 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00192990(void)
{
    int _flags = 0; /* fallback flag var */

loc_00192990: ;
    PUSH32(esp, esi);
    esi = MEM32(esp + 8);
    MEM32(esi + 0xA4) = 0;
    PUSH32(esp, 0); sub_003E2480(); /* call 0x003E2480 */

loc_001929A4: ;
    PUSH32(esp, 0);
    PUSH32(esp, 0);
    PUSH32(esp, 0xFFFFFFFFu);
    PUSH32(esp, 0);
    esi = esi + 0x78;
    (void)0; /* test LO8(eax), 1 - flags set for next jcc */
    PUSH32(esp, esi);
    PUSH32(esp, 0xBF800000u);
    PUSH32(esp, 0);
    if (TEST_Z(LO8(eax), 1)) { sub_001929D8(); return; } /* je: equal / zero */

loc_001929BB: ;
    eax = MEM32(0x847024);
    ecx = MEM32(eax + 0x40);
    PUSH32(esp, ecx);
    ecx = 0xA;
    eax = eax | 0xFFFFFFFFu;
    edx = edx | 0xFFFFFFFFu;
    PUSH32(esp, 0); sub_00022D90(); /* call 0x00022D90 */

loc_001929D4: ;
    SET_LO8(eax, 1);
    POP32(esp, esi);
    esp += 4; return; /* ret */

}

/**
 * sub_00192A00
 * Original: 0x00192A00 - 0x00192D87 (903 bytes, 188 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00192A00(void)
{
    int _flags = 0; /* fallback flag var */
    float xmm0, xmm1, xmm2, xmm3, xmm4, xmm5, xmm6, xmm7;

loc_00192A00: ;
    esp = esp - 0x3C;
    xmm5 = 0.0f; /* xorps self = zero */
    PUSH32(esp, esi);
    esi = MEM32(esp + 0x44);
    eax = esi;
    ecx = MEM32(eax);
    edx = MEM32(eax + 4);
    eax = MEM32(eax + 8);
    PUSH32(esp, edi);
    edi = MEM32(esp + 0x5C);
    MEM32(esp + 0x34) = eax;
    eax = MEM32(edi + 0x38);
    (void)0; /* test eax, eax - flags set for next jcc */
    MEM32(esp + 0x2C) = ecx;
    MEM32(esp + 0x30) = edx;
    MEMF(esp + 0x38) = xmm5; /* movss */
    xmm7 = xmm5; /* movaps */
    xmm6 = xmm5; /* movaps */
    if (TEST_Z(eax, eax)) goto loc_00192B22; /* je: equal / zero */

loc_00192A3D: ;
    xmm1 = MEMF(0x7FA21C); /* movss */
    /* ucomiss xmm1, xmm5 - sets EFLAGS */
    /* lahf - load AH from flags (used in FPU compare idiom) */
    if (1 /* jp after test - parity */) goto loc_00192A53; /* jp: parity */

loc_00192A4E: ;
    xmm0 = xmm5; /* movaps */
    goto loc_00192A5F;

loc_00192A53: ;
    xmm0 = MEMF(0x648D14); /* movss */
    xmm0 = xmm0 / xmm1; /* divss */

loc_00192A5F: ;
    eax = MEM32(edi + 0x38);
    ecx = MEM32(eax + 0x78);
    edx = MEM32(eax + 0x7C);
    MEM32(esp + 8) = ecx;
    xmm1 = MEMF(esp + 8); /* movss */
    xmm1 = xmm1 - MEMF(eax + 0x84); /* subss */
    ecx = MEM32(eax + 0x80);
    MEMF(esp + 8) = xmm1; /* movss */
    MEM32(esp + 0xC) = edx;
    xmm1 = MEMF(esp + 0xC); /* movss */
    xmm1 = xmm1 - MEMF(eax + 0x88); /* subss */
    edx = MEM32(esp + 8);
    MEMF(esp + 0xC) = xmm1; /* movss */
    MEM32(esp + 0x10) = ecx;
    xmm1 = MEMF(esp + 0x10); /* movss */
    xmm1 = xmm1 - MEMF(eax + 0x8C); /* subss */
    eax = MEM32(esp + 0xC);
    MEMF(esp + 0x10) = xmm1; /* movss */
    ecx = MEM32(esp + 0x10);
    MEM32(esp + 0x14) = edx;
    xmm1 = MEMF(esp + 0x14); /* movss */
    xmm1 = xmm1 * xmm0; /* mulss */
    MEMF(esp + 0x14) = xmm1; /* movss */
    edx = MEM32(esp + 0x14);
    MEM32(esp + 0x18) = eax;
    xmm1 = MEMF(esp + 0x18); /* movss */
    xmm1 = xmm1 * xmm0; /* mulss */
    MEM32(esp + 0x1C) = ecx;
    MEMF(esp + 0x18) = xmm1; /* movss */
    xmm1 = MEMF(esp + 0x1C); /* movss */
    eax = MEM32(esp + 0x18);
    xmm1 = xmm1 * xmm0; /* mulss */
    MEMF(esp + 0x1C) = xmm1; /* movss */
    ecx = MEM32(esp + 0x1C);
    MEM32(esp + 0x3C) = eax;
    xmm7 = MEMF(esp + 0x3C); /* movss */
    MEM32(esp + 0x40) = ecx;
    xmm6 = MEMF(esp + 0x40); /* movss */
    MEM32(esp + 0x38) = edx;

loc_00192B22: ;
    PUSH32(esp, 0); sub_003E1D70(); /* call 0x003E1D70 */

loc_00192B27: ;
    edx = MEM32(esp + 0x4C);
    eax = MEM32(edx);
    ecx = MEM32(edx + 4);
    edx = MEM32(edx + 8);
    xmm1 = MEMF(esp + 0x58); /* movss */
    xmm1 = xmm1 * MEMF(0x64922C); /* mulss */
    MEM32(esp + 0x14) = eax;
    xmm2 = MEMF(esp + 0x14); /* movss */
    xmm2 = xmm2 - MEMF(esi); /* subss */
    MEMF(esp + 0x14) = xmm2; /* movss */
    eax = MEM32(esp + 0x14);
    MEM32(esp + 0x18) = ecx;
    xmm2 = MEMF(esp + 0x18); /* movss */
    xmm2 = xmm2 - MEMF(esi + 4); /* subss */
    MEMF(esp + 0x18) = xmm2; /* movss */
    ecx = MEM32(esp + 0x18);
    MEM32(esp + 0x1C) = edx;
    xmm2 = MEMF(esp + 0x1C); /* movss */
    xmm2 = xmm2 - MEMF(esi + 8); /* subss */
    MEMF(esp + 0x1C) = xmm2; /* movss */
    xmm2 = MEMF(edi + 0x94); /* movss */
    xmm2 = xmm2 * MEMF(0x648E38); /* mulss */
    edx = MEM32(esp + 0x1C);
    MEM32(esp + 8) = eax;
    xmm3 = MEMF(esp + 8); /* movss */
    xmm3 = xmm3 * xmm2; /* mulss */
    MEMF(esp + 8) = xmm3; /* movss */
    eax = MEM32(esp + 8);
    MEM32(esp + 0xC) = ecx;
    xmm3 = MEMF(esp + 0xC); /* movss */
    xmm3 = xmm3 * xmm2; /* mulss */
    xmm0 = xmm0 + MEMF(0x648CF4); /* addss */
    MEMF(esp + 0xC) = xmm3; /* movss */
    ecx = MEM32(esp + 0xC);
    MEM32(esp + 0x10) = edx;
    xmm3 = MEMF(esp + 0x10); /* movss */
    xmm3 = xmm3 * xmm2; /* mulss */
    xmm2 = xmm1; /* movaps */
    xmm2 = xmm2 * MEMF(0x648F08); /* mulss */
    MEMF(esp + 0x10) = xmm3; /* movss */
    MEM32(esp + 0x24) = ecx;
    ecx = MEM32(esp + 0x10);
    xmm3 = xmm2; /* movaps */
    xmm3 = xmm3 + MEMF(esp + 0x24); /* addss */
    MEM32(esp + 0x14) = eax;
    xmm4 = MEMF(esp + 0x14); /* movss */
    xmm4 = xmm4 * xmm1; /* mulss */
    MEMF(esp + 0x14) = xmm4; /* movss */
    MEMF(esp + 0x24) = xmm3; /* movss */
    edx = MEM32(esp + 0x24);
    MEM32(esp + 0x18) = edx;
    xmm4 = MEMF(esp + 0x18); /* movss */
    xmm4 = xmm4 * xmm1; /* mulss */
    MEM32(esp + 0x20) = eax;
    eax = MEM32(esp + 0x14);
    MEM32(esp + 0x1C) = ecx;
    MEMF(esp + 0x18) = xmm4; /* movss */
    xmm4 = MEMF(esp + 0x1C); /* movss */
    xmm4 = xmm4 * xmm1; /* mulss */
    MEM32(esp + 0x28) = ecx;
    ecx = MEM32(esp + 0x18);
    MEM32(esp + 8) = eax;
    xmm1 = MEMF(esp + 8); /* movss */
    xmm1 = xmm1 + MEMF(esp + 0x2C); /* addss */
    MEMF(esp + 0x2C) = xmm1; /* movss */
    MEMF(esp + 0x1C) = xmm4; /* movss */
    edx = MEM32(esp + 0x1C);
    MEM32(esp + 0xC) = ecx;
    xmm1 = MEMF(esp + 0xC); /* movss */
    xmm1 = xmm1 + MEMF(esp + 0x30); /* addss */
    MEMF(esp + 0x30) = xmm1; /* movss */
    MEM32(esp + 0x10) = edx;
    xmm1 = MEMF(esp + 0x10); /* movss */
    xmm1 = xmm1 + MEMF(esp + 0x34); /* addss */
    MEMF(esp + 0x34) = xmm1; /* movss */
    xmm1 = MEMF(esp + 0x20); /* movss */
    xmm1 = xmm1 + MEMF(esp + 0x38); /* addss */
    xmm2 = xmm2 + xmm3; /* addss */
    MEMF(esp + 0x20) = xmm1; /* movss */
    xmm2 = xmm2 + xmm7; /* addss */
    xmm1 = MEMF(esp + 0x28); /* movss */
    edi = MEM32(edi + 0x38);
    (void)0; /* test edi, edi - flags set for next jcc */
    xmm1 = xmm1 + xmm6; /* addss */
    MEMF(esp + 0x28) = xmm1; /* movss */
    xmm1 = MEMF(esi + 4); /* movss */
    xmm1 = xmm1 + MEMF(0x64925C); /* addss */
    MEMF(esp + 0x24) = xmm2; /* movss */
    MEMF(esp + 0x48) = xmm1; /* movss */
    if (TEST_Z(edi, edi)) goto loc_00192CF7; /* je: equal / zero */

loc_00192CE9: ;
    xmm1 = MEMF(edi + 0x228); /* movss */
    MEMF(esp + 0x48) = xmm1; /* movss */

loc_00192CF7: ;
    xmm1 = MEMF(0x648D14); /* movss */
    eax = MEM32(esp + 0x48);
    PUSH32(esp, 0x42C80000);
    PUSH32(esp, eax);
    xmm2 = xmm0; /* movaps */
    xmm0 = xmm0 * MEMF(0x648CE4); /* mulss */
    MEMF(0x6B7A08) = xmm1; /* movss */
    MEMF(0x6B7A10) = xmm1; /* movss */
    MEMF(0x6B7A18) = xmm1; /* movss */
    MEMF(0x6B7A20) = xmm1; /* movss */
    xmm1 = MEMF(0x648D20); /* movss */
    esp = esp - 8;
    xmm2 = xmm2 * xmm1; /* mulss */
    MEMF(esp + 4) = xmm2; /* movss */
    MEMF(esp) = xmm0; /* movss */
    eax = esp + 0x30;
    ecx = esp + 0x3C;
    MEMF(0x6B7A0C) = xmm5; /* movss */
    MEMF(0x6B7A14) = xmm5; /* movss */
    MEMF(0x6B7A1C) = xmm5; /* movss */
    MEMF(0x6B7A24) = xmm5; /* movss */
    xmm0 = xmm1; /* movaps */
    PUSH32(esp, 0); sub_001915C0(); /* call 0x001915C0 */

loc_00192D7E: ;
    esp = esp + 0x10;
    POP32(esp, edi);
    POP32(esp, esi);
    esp = esp + 0x3C;
    esp += 4; return; /* ret */

}

/**
 * sub_00192D90
 * Original: 0x00192D90 - 0x00192DB8 (40 bytes, 15 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00192D90(void)
{
    uint32_t ebp;
    int _flags = 0; /* fallback flag var */
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_00192D90: ;
    PUSH32(esp, esi);
    esi = MEM32(esp + 8);
    PUSH32(esp, edi);
    edi = MEM32(esi + 0xA4);
    eax = edi;
    eax = eax >> 0x10;
    SET_LO8(eax, LO8(eax) - 0x40);
    SET_LO8(ecx, LO8(eax));
    SET_LO8(ecx, LO8(ecx) & 0xC0);
    if (TEST_Z(LO8(eax), 0x40)) { sub_00192DB8(); return; } /* je: equal / zero */

loc_00192DAC: ;
    eax = eax & 0x3F;
    edx = 0x40;
    edx = edx - eax;
    g_seh_ebp = ebp; sub_00192DBD(); return; /* tail jmp 0x00192DBD */

}

/**
 * sub_00192E10
 * Original: 0x00192E10 - 0x00192E2C (28 bytes, 9 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00192E10(void)
{
    uint32_t ebp;
    int _flags = 0; /* fallback flag var */
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_00192E10: ;
    PUSH32(esp, esi);
    esi = MEM32(esp + 8);
    eax = MEM32(esi + 0x11C);
    (void)0; /* test eax, eax - flags set for next jcc */
    PUSH32(esp, edi);
    edi = MEM32(esi + 0x34);
    if (TEST_Z(eax, eax)) { sub_00192E2C(); return; } /* je: equal / zero */

loc_00192E23: ;
    MEM8(eax + 0xA0) = 1;
    g_seh_ebp = ebp; sub_00192E3D(); return; /* tail jmp 0x00192E3D */

}

/**
 * sub_00192E70
 * Original: 0x00192E70 - 0x00192E98 (40 bytes, 8 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00192E70(void)
{
    uint32_t ebp;
    int _flags = 0; /* fallback flag var */
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_00192E70: ;
    eax = MEM32(esp + 4);
    ecx = MEM32(eax + 0x9C);
    MEM32(ecx + 0x11C) = 0;
    SET_LO8(ecx, MEM8(0x8472BD));
    if (TEST_NZ(LO8(ecx), LO8(ecx))) { sub_00192E98(); return; } /* jne: not equal / not zero */

loc_00192E8E: ;
    edx = 1;
    g_seh_ebp = ebp; sub_000DA5E0(); return; /* tail jmp 0x000DA5E0 */

}

/**
 * sub_00192EA0
 * Original: 0x00192EA0 - 0x00192EBD (29 bytes, 5 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00192EA0(void)
{
    uint32_t ebp;
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_00192EA0: ;
    eax = MEM32(esp + 4);
    ecx = MEM32(eax + 0x9C);
    MEM32(ecx + 0x11C) = 0;
    MEM32(esp + 4) = eax;
    g_seh_ebp = ebp; sub_000DAE40(); return; /* tail jmp 0x000DAE40 */

}

/**
 * sub_00192EE0
 * Original: 0x00192EE0 - 0x0019321C (828 bytes, 180 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00192EE0(void)
{
    uint32_t ebp;
    int _flags = 0; /* fallback flag var */
    float xmm0, xmm1, xmm2, xmm3, xmm4, xmm5, xmm6;

loc_00192EE0: ;
    PUSH32(esp, ebp);
    ebp = esp;
    esp = esp & 0xFFFFFFF0u;
    esp = esp - 0x158;
    (void)0; /* test ebx, ebx - flags set for next jcc */
    PUSH32(esp, esi);
    PUSH32(esp, edi);
    if (TEST_Z(ebx, ebx)) goto loc_00193216; /* je: equal / zero */

loc_00192EF6: ;
    eax = MEM32(ebx + 0x3C8);
    if (TEST_Z(eax, eax)) goto loc_00193216; /* je: equal / zero */

loc_00192F04: ;
    PUSH32(esp, 0); sub_00141960(); /* call 0x00141960 */

loc_00192F09: ;
    eax = 0; /* xor self */
    SET_LO8(eax, MEM8(ebp + 8));
    eax = eax & 3;
    ecx = MEM32(eax * 4 + 0x6B7A38);
    PUSH32(esp, ecx);
    eax = ebx;
    PUSH32(esp, 0); sub_002F77D0(); /* call 0x002F77D0 */

loc_00192F20: ;
    esp = esp + 4;
    esi = esp + 0xC;
    edx = ebx;
    PUSH32(esp, 0); sub_002F7940(); /* call 0x002F7940 */

loc_00192F2E: ;
    edx = ebx;
    eax = esp + 0xB0;
    PUSH32(esp, 0); sub_002A0430(); /* call 0x002A0430 */

loc_00192F3C: ;
    xmm0 = MEMF(esp + 0xC); /* movss */
    xmm1 = MEMF(esp + 0x14); /* movss */
    PUSH32(esp, 0);
    PUSH32(esp, 0);
    MEMF(esp + 0x6C) = xmm0; /* movss */
    xmm0 = MEMF(esp + 0x18); /* movss */
    xmm0 = xmm0 + MEMF(0x648F08); /* addss */
    edx = eax;
    PUSH32(esp, edx);
    PUSH32(esp, ecx);
    MEMF(esp + 0x78) = xmm0; /* movss */
    xmm0 = xmm0 - MEMF(0x648EA4); /* subss */
    MEMF(esp) = xmm0; /* movss */
    eax = esp + 0x74;
    PUSH32(esp, 0);
    PUSH32(esp, eax);
    MEMF(esp + 0x84) = xmm1; /* movss */
    PUSH32(esp, 0); sub_0029FF30(); /* call 0x0029FF30 */

loc_00192F8C: ;
    esp = esp + 0x18;
    if (TEST_Z(LO8(eax), LO8(eax))) goto loc_00193216; /* je: equal / zero */

loc_00192F97: ;
    xmm0 = MEMF(esp + 0xC); /* movss */
    MEMF(esp + 0x28) = xmm0; /* movss */
    xmm0 = MEMF(esp + 0xB0); /* movss */
    MEMF(esp + 0x2C) = xmm0; /* movss */
    xmm0 = MEMF(esp + 0x14); /* movss */
    PUSH32(esp, 0x3E800000);
    ecx = 0; /* xor self */
    esi = esp + 0x134;
    eax = esp + 0x2C;
    edi = esp + 0x74;
    MEMF(esp + 0x34) = xmm0; /* movss */
    PUSH32(esp, 0); sub_00191890(); /* call 0x00191890 */

loc_00192FD9: ;
    xmm0 = MEMF(0x6490B0); /* movss */
    xmm4 = MEMF(0x648CDC); /* movss */
    xmm1 = 0.0f; /* xorps self = zero */
    xmm2 = MEMF(0x648D40); /* movss */
    SET_LO8(eax, MEM8(ebp + 8));
    xmm3 = MEMF(0x648CE4); /* movss */
    xmm5 = MEMF(0x649550); /* movss */
    xmm6 = MEMF(0x64A7B8); /* movss */
    MEMF(esp + 0x10) = xmm0; /* movss */
    xmm0 = MEMF(0x6490B8); /* movss */
    MEMF(esp + 0x14) = xmm0; /* movss */
    xmm0 = MEMF(0x648F60); /* movss */
    MEMF(esp + 0x30) = xmm0; /* movss */
    xmm0 = MEMF(0x648D1C); /* movss */
    MEMF(esp + 0x60) = xmm0; /* movss */
    xmm0 = MEMF(0x648CE0); /* movss */
    MEMF(esp + 0x48) = xmm4; /* movss */
    xmm4 = MEMF(0x648D20); /* movss */
    esp = esp + 4;
    (void)0; /* test LO8(eax), 2 - flags set for next jcc */
    MEMF(esp + 0x38) = xmm0; /* movss */
    xmm0 = MEMF(0x648D14); /* movss */
    MEMF(esp + 0x40) = xmm2; /* movss */
    xmm2 = MEMF(0x648CF0); /* movss */
    MEMF(esp + 0x54) = xmm4; /* movss */
    xmm4 = MEMF(0x648EC8); /* movss */
    MEMF(esp + 0x28) = xmm1; /* movss */
    MEMF(esp + 0x60) = xmm1; /* movss */
    MEMF(esp + 0x34) = xmm3; /* movss */
    MEMF(esp + 0x3C) = xmm0; /* movss */
    MEMF(esp + 0x18) = xmm2; /* movss */
    MEMF(esp + 0x1C) = xmm2; /* movss */
    MEMF(esp + 0x48) = xmm1; /* movss */
    MEMF(esp + 0x58) = xmm1; /* movss */
    MEMF(esp + 0x20) = xmm4; /* movss */
    MEMF(esp + 0x24) = xmm5; /* movss */
    MEMF(esp + 0x4C) = xmm6; /* movss */
    MEMF(esp + 0x50) = xmm1; /* movss */
    if (TEST_Z(LO8(eax), 2)) goto loc_0019312F; /* je: equal / zero */

loc_001930CE: ;
    xmm1 = MEMF(ebx + 0x110); /* movss */
    xmm1 = xmm1 * MEMF(0x64909C); /* mulss */
    xmm6 = MEMF(0x649228); /* movss */
    /* comiss xmm6, xmm1 - sets EFLAGS */
    if ((xmm6 <= xmm1)) goto loc_001930F0; /* jbe: below or equal (unsigned <=) */

loc_001930EB: ;
    xmm0 = xmm6; /* movaps */
    goto loc_001930F8;

loc_001930F0: ;
    /* comiss xmm1, xmm0 - sets EFLAGS */
    if ((xmm1 > xmm0)) goto loc_001930F8; /* ja: above (unsigned >) */

loc_001930F5: ;
    xmm0 = xmm1; /* movaps */

loc_001930F8: ;
    xmm1 = xmm0; /* movaps */
    xmm1 = xmm1 * xmm3; /* mulss */
    MEMF(esp + 0x34) = xmm1; /* movss */
    xmm1 = xmm0; /* movaps */
    xmm1 = xmm1 * xmm2; /* mulss */
    MEMF(esp + 0x18) = xmm1; /* movss */
    MEMF(esp + 0x1C) = xmm1; /* movss */
    xmm1 = xmm0; /* movaps */
    xmm1 = xmm1 * xmm4; /* mulss */
    xmm0 = xmm0 * xmm5; /* mulss */
    MEMF(esp + 0x20) = xmm1; /* movss */
    MEMF(esp + 0x24) = xmm0; /* movss */

loc_0019312F: ;
    esi = 2;
    PUSH32(esp, 0); sub_00190A40(); /* call 0x00190A40 */

loc_00193139: ;
    xmm0 = MEMF(0x648D14); /* movss */
    MEMF(0x6B7A20) = xmm0; /* movss */
    xmm0 = 0.0f; /* xorps self = zero */
    PUSH32(esp, 0x1000002);
    MEMF(0x6B7A24) = xmm0; /* movss */
    PUSH32(esp, 0); sub_00191850(); /* call 0x00191850 */

loc_0019315E: ;
    PUSH32(esp, eax);
    ecx = esp + 0x54;
    PUSH32(esp, ecx);
    edx = esp + 0x2C;
    PUSH32(esp, edx);
    eax = esp + 0x64;
    PUSH32(esp, eax);
    ecx = esp + 0x58;
    PUSH32(esp, ecx);
    edx = esp + 0x30;
    PUSH32(esp, edx);
    eax = esp + 0x58;
    PUSH32(esp, eax);
    ecx = esp + 0x7C;
    PUSH32(esp, ecx);
    edx = esp + 0x4C;
    PUSH32(esp, edx);
    eax = esp + 0x34;
    PUSH32(esp, eax);
    ecx = esp + 0x9C;
    PUSH32(esp, ecx);
    eax = esp + 0x64;
    PUSH32(esp, 0); sub_00190E40(); /* call 0x00190E40 */

loc_0019319D: ;
    esi = 3;
    PUSH32(esp, 0); sub_00190A40(); /* call 0x00190A40 */

loc_001931A7: ;
    xmm0 = MEMF(0x648D14); /* movss */
    PUSH32(esp, 0);
    PUSH32(esp, 0x2A8);
    PUSH32(esp, 0x2A7);
    PUSH32(esp, 0x42480000);
    MEMF(0x6B7A20) = xmm0; /* movss */
    xmm0 = 0.0f; /* xorps self = zero */
    PUSH32(esp, 0x40800000);
    PUSH32(esp, 0x3F800000);
    eax = esp + 0xB8;
    MEMF(0x6B7A24) = xmm0; /* movss */
    PUSH32(esp, 0); sub_00191B00(); /* call 0x00191B00 */

loc_001931E9: ;
    esp = esp + 0x48;
    PUSH32(esp, 0);
    PUSH32(esp, 0x2A8);
    PUSH32(esp, 0x2A7);
    PUSH32(esp, 0x42480000);
    PUSH32(esp, 0x41600000);
    PUSH32(esp, 0x3F800000);
    eax = esp + 0x88;
    PUSH32(esp, 0); sub_00191B00(); /* call 0x00191B00 */

loc_00193213: ;
    esp = esp + 0x18;

loc_00193216: ;
    POP32(esp, edi);
    POP32(esp, esi);
    esp = ebp;
    POP32(esp, ebp);
    esp += 4; return; /* ret */

}

/**
 * sub_00193220
 * Original: 0x00193220 - 0x0019324E (46 bytes, 13 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00193220(void)
{
    int _flags = 0; /* fallback flag var */

loc_00193220: ;
    eax = MEM32(esp + 4);
    ecx = MEM32(eax + 0x144);
    eax = (uint32_t)(int32_t)SMEM16(eax + 0x38);
    eax = eax << 4;
    if (CMP_LE(eax, 0xFF)) goto loc_0019323D; /* jle: less or equal (signed <=) */

loc_00193238: ;
    eax = 0xFF;

loc_0019323D: ;
    edx = ZX8(MEM8(ecx + 0x21));
    if (CMP_GE(eax, edx)) goto loc_00193248; /* jge: greater or equal (signed >=) */

loc_00193245: ;
    MEM8(ecx + 0x21) = LO8(eax);

loc_00193248: ;
    eax = 1;
    esp += 4; return; /* ret */

}
