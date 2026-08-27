/**
 * Burnout 3 - Recompiled code chunk 13
 * Functions: 250 (0x00122610 - 0x00139520)
 */

#define RECOMP_GENERATED_CODE
#include "recomp_funcs.h"
#include <math.h>

/**
 * sub_00122610
 * Original: 0x00122610 - 0x00122695 (133 bytes, 30 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00122610(void)
{
    int _flags = 0; /* fallback flag var */
    float xmm0;

loc_00122610: ;
    eax = MEM32(esp + 4);
    xmm0 = MEMF(eax + 0x50); /* movss */
    xmm0 = xmm0 + MEMF(0x7FA24C); /* addss */
    /* comiss xmm0, MEMF(eax + 0x5C) - sets EFLAGS */
    MEMF(eax + 0x50) = xmm0; /* movss */
    if ((xmm0 <= MEMF(eax + 0x5C))) goto loc_00122645; /* jbe: below or equal (unsigned <=) */

loc_0012262C: ;
    /* nop */

loc_00122630: ;
    xmm0 = MEMF(eax + 0x50); /* movss */
    xmm0 = xmm0 - MEMF(eax + 0x5C); /* subss */
    MEMF(eax + 0x50) = xmm0; /* movss */
    /* comiss xmm0, MEMF(eax + 0x5C) - sets EFLAGS */
    if ((xmm0 > MEMF(eax + 0x5C))) goto loc_00122630; /* ja: above (unsigned >) */

loc_00122645: ;
    xmm0 = MEMF(eax + 0x54); /* movss */
    /* comiss xmm0, MEMF(eax + 0x50) - sets EFLAGS */
    if ((xmm0 < MEMF(eax + 0x50))) goto loc_00122690; /* jb: below (unsigned <) */

loc_00122650: ;
    SET_LO8(edx, MEM8(0x773CD0));
    ecx = 1;
    MEM8(eax + 0x4C) = LO8(ecx);
    SET_LO8(eax, 0xFF);
    if (CMP_A(LO8(edx), LO8(eax))) goto loc_00122694; /* ja: above (unsigned >) */

loc_00122664: ;
    xmm0 = MEMF(0x648EEC); /* movss */
    MEMF(0x773CC4) = xmm0; /* movss */
    MEMF(0x773CC8) = xmm0; /* movss */
    MEMF(0x773CCC) = xmm0; /* movss */
    MEM32(0x773C68) = ecx;
    MEM8(0x773CD0) = LO8(eax);
    esp += 4; return; /* ret */

loc_00122690: ;
    MEM8(eax + 0x4C) = 0;

loc_00122694: ;
    esp += 4; return; /* ret */

}

/**
 * sub_001226A0
 * Original: 0x001226A0 - 0x001226D1 (49 bytes, 14 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_001226A0(void)
{
    uint32_t ebp;
    int _flags = 0; /* fallback flag var */
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_001226A0: ;
    SET_LO8(ecx, MEM8(0x77379C));
    PUSH32(esp, esi);
    esi = MEM32(esp + 8);
    SET_LO8(ecx, LO8(ecx) - 1);
    eax = esi + 0x3C;
    MEM8(0x77379C) = LO8(ecx);
    PUSH32(esp, 0); sub_001126F0(); /* call 0x001126F0 */

loc_001226BB: ;
    SET_LO8(eax, MEM8(0x8472BD));
    if (TEST_NZ(LO8(eax), LO8(eax))) { sub_001226D1(); return; } /* jne: not equal / not zero */

loc_001226C4: ;
    eax = esi;
    edx = 1;
    POP32(esp, esi);
    g_seh_ebp = ebp; sub_000DA5E0(); return; /* tail jmp 0x000DA5E0 */

}

/**
 * sub_001226E0
 * Original: 0x001226E0 - 0x00122706 (38 bytes, 12 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_001226E0(void)
{

loc_001226E0: ;
    SET_LO8(edx, MEM8(0x77379C));
    PUSH32(esp, esi);
    esi = MEM32(esp + 8);
    SET_LO8(edx, LO8(edx) - 1);
    eax = esi + 0x3C;
    MEM8(0x77379C) = LO8(edx);
    PUSH32(esp, 0); sub_001126F0(); /* call 0x001126F0 */

loc_001226FB: ;
    PUSH32(esp, esi);
    PUSH32(esp, 0); sub_000DAE40(); /* call 0x000DAE40 */

loc_00122701: ;
    esp = esp + 4;
    POP32(esp, esi);
    esp += 4; return; /* ret */

}

/**
 * sub_00122710
 * Original: 0x00122710 - 0x0012273D (45 bytes, 13 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00122710(void)
{
    int _flags = 0; /* fallback flag var */

loc_00122710: ;
    eax = MEM32(esp + 4);
    (void)0; /* cmp MEM8(eax + 0x4C), 1 - flags set for next jcc */
    ecx = (uint32_t)(int32_t)SMEM16(esp + 8);
    PUSH32(esp, ecx);
    if (CMP_NE(MEM8(eax + 0x4C), 1)) { sub_0012273D(); return; } /* jne: not equal / not zero */

loc_00122720: ;
    edx = ZX8(MEM8(eax + 0x60));
    PUSH32(esp, 0xFF);
    PUSH32(esp, 0xFF);
    eax = 0xFF;
    PUSH32(esp, edx);
    PUSH32(esp, 0); sub_000FBC80(); /* call 0x000FBC80 */

loc_00122739: ;
    esp = esp + 0x10;
    esp += 4; return; /* ret */

}

/**
 * sub_00122760
 * Original: 0x00122760 - 0x001227B3 (83 bytes, 30 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00122760(void)
{
    int _flags = 0; /* fallback flag var */
    float xmm0, xmm1;

loc_00122760: ;
    eax = MEM32(0x7FA20C);
    PUSH32(esp, esi);
    esi = MEM32(esp + 8);
    MEM32(esi + 0x54) = MEM32(esi + 0x54) - eax;
    if (((int32_t)MEM32(esi + 0x54) >= 0)) goto loc_001227B1; /* jns: not sign (positive) */

loc_0012276F: ;
    ecx = 0; /* xor self */
    SET_LO8(ecx, MEM8(esi + 4));
    PUSH32(esp, ecx);
    PUSH32(esp, 0); sub_003E2480(); /* call 0x003E2480 */

loc_0012277A: ;
    ecx = (uint32_t)(int32_t)SMEM16(esi + 0x5A);
    edx = ((int32_t)eax < 0) ? 0xFFFFFFFF : 0; /* cdq */
    ecx++;
    { int64_t _dividend = ((int64_t)(int32_t)edx << 32) | eax;
      eax = (uint32_t)((int32_t)(_dividend / (int32_t)ecx));
      edx = (uint32_t)((int32_t)(_dividend % (int32_t)ecx)); }
    SET_LO8(ecx, MEM8(esi + 0x65));
    SET_LO8(eax, MEM8(esi + 0x64));
    xmm1 = MEMF(esi + 0x60); /* movss */
    xmm0 = MEMF(esi + 0x5C); /* movss */
    SET_LO16(edx, LO16(edx) + MEM16(esi + 0x58));
    PUSH32(esp, edx);
    PUSH32(esp, 0); sub_00122540(); /* call 0x00122540 */

loc_0012279C: ;
    esp = esp + 8;
    PUSH32(esp, 0); sub_003E2480(); /* call 0x003E2480 */

loc_001227A4: ;
    ecx = MEM32(esi + 0x50);
    edx = ((int32_t)eax < 0) ? 0xFFFFFFFF : 0; /* cdq */
    ecx++;
    { int64_t _dividend = ((int64_t)(int32_t)edx << 32) | eax;
      eax = (uint32_t)((int32_t)(_dividend / (int32_t)ecx));
      edx = (uint32_t)((int32_t)(_dividend % (int32_t)ecx)); }
    edx = edx + MEM32(esi + 0x4C);
    MEM32(esi + 0x54) = edx;

loc_001227B1: ;
    POP32(esp, esi);
    esp += 4; return; /* ret */

}

/**
 * sub_001227C0
 * Original: 0x001227C0 - 0x00122CF0 (1328 bytes, 219 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_001227C0(void)
{
    uint32_t ebp;
    int _flags = 0; /* fallback flag var */
    float xmm0, xmm1, xmm5;
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_001227C0: ;
    esp = esp - 0x280;
    xmm0 = MEMF(0x64ADA8); /* movss */
    xmm5 = 0.0f; /* xorps self = zero */
    PUSH32(esp, ebx);
    PUSH32(esp, ebp);
    MEMF(esp + 0x70) = xmm5; /* movss */
    MEMF(esp + 0x74) = xmm0; /* movss */
    MEMF(esp + 0x80) = xmm0; /* movss */
    PUSH32(esp, 0); sub_003E1D70(); /* call 0x003E1D70 */

loc_001227ED: ;
    ebp = ZX8(MEM8(esp + 0x290));
    xmm0 = xmm0 * MEMF(0x648D30); /* mulss */
    xmm1 = MEMF(ebp * 4 + 0x596B70); /* movss */
    ebx = 0; /* xor self */
    eax = ebp + ebp * 2;
    ecx = eax * 4 + 0x596B28;
    edx = MEM32(ecx);
    eax = MEM32(ecx + 4);
    ecx = MEM32(ecx + 8);
    PUSH32(esp, ebx);
    MEM32(esp + 0xCC) = edx;
    edx = MEM32(esp + 0x298);
    PUSH32(esp, edx);
    PUSH32(esp, 0x24);
    PUSH32(esp, ebx);
    PUSH32(esp, 0x7F);
    MEMF(esp + 0x8C) = xmm0; /* movss */
    xmm0 = MEMF(0x64ADA4); /* movss */
    PUSH32(esp, 3);
    MEM32(esp + 0xE4) = eax;
    eax = esp + 0xAC;
    MEMF(esp + 0x94) = xmm0; /* movss */
    MEMF(esp + 0x9C) = xmm0; /* movss */
    xmm0 = MEMF(0x648D14); /* movss */
    PUSH32(esp, ebx);
    PUSH32(esp, eax);
    MEMF(esp + 0xA8) = xmm5; /* movss */
    MEMF(esp + 0xAC) = xmm5; /* movss */
    MEMF(esp + 0xB0) = xmm5; /* movss */
    MEMF(esp + 0xB4) = xmm0; /* movss */
    MEMF(esp + 0xB8) = xmm0; /* movss */
    MEMF(esp + 0xC0) = xmm1; /* movss */
    MEMF(esp + 0xBC) = xmm1; /* movss */
    MEMF(esp + 0xC4) = xmm5; /* movss */
    MEMF(esp + 0xC8) = xmm5; /* movss */
    MEMF(esp + 0xCC) = xmm5; /* movss */
    MEMF(esp + 0xDC) = xmm0; /* movss */
    MEMF(esp + 0xE0) = xmm0; /* movss */
    MEMF(esp + 0xE4) = xmm0; /* movss */
    MEM32(esp + 0xF0) = ecx;
    MEMF(esp + 0x100) = xmm5; /* movss */
    MEMF(esp + 0x104) = xmm5; /* movss */
    MEMF(esp + 0x108) = xmm5; /* movss */
    MEMF(esp + 0x10C) = xmm5; /* movss */
    MEMF(esp + 0x110) = xmm5; /* movss */
    MEMF(esp + 0x114) = xmm5; /* movss */
    MEMF(esp + 0x118) = xmm5; /* movss */
    MEM32(esp + 0x120) = 0x12C;
    MEM32(esp + 0x124) = 0x22;
    MEM32(esp + 0x12C) = ebx;
    MEM32(esp + 0x11C) = 0x900;
    MEM8(esp + 0x128) = LO8(ebx);
    MEM8(esp + 0x130) = 0xFF;
    MEM32(esp + 0x134) = 0x122CF0;
    MEM32(esp + 0x138) = ebx;
    MEM32(esp + 0x13C) = ebx;
    MEM32(esp + 0x140) = ebx;
    MEM32(esp + 0x144) = ebx;
    MEM32(esp + 0x148) = ebx;
    MEM32(esp + 0x14C) = 0x13E6E0;
    MEM32(esp + 0x150) = 0x122E20;
    MEM8(esp + 0x158) = 2;
    MEM32(esp + 0x15C) = ebx;
    MEM8(esp + 0x160) = LO8(ebx);
    MEM16(esp + 0x162) = 1;
    MEM16(esp + 0x164) = 0xFF;
    PUSH32(esp, 0); sub_0013D5D0(); /* call 0x0013D5D0 */

loc_001229D2: ;
    esp = esp + 0x20;
    (void)0; /* cmp eax, ebx - flags set for next jcc */
    MEM32(esp + 0x10) = eax;
    if (CMP_EQ(eax, ebx)) goto loc_00122CE7; /* je: equal / zero */

loc_001229E1: ;
    xmm0 = MEMF(0x648D14); /* movss */
    PUSH32(esp, esi);
    PUSH32(esp, edi);
    edi = eax + 0x290;
    ecx = 9;
    esi = esp + 0x78;
    memcpy((void*)XBOX_PTR(edi), (void*)XBOX_PTR(esi), ecx * 4);
    esi += ecx * 4; edi += ecx * 4; ecx = 0; /* rep movsd */
    edi = MEM32(esp + 0x29C);
    xmm0 = xmm0 / MEMF(ebp * 4 + 0x596B70); /* divss */
    PUSH32(esp, edi);
    PUSH32(esp, 0x3C);
    eax = 0x44;
    MEMF(esp + 0x180) = xmm0; /* movss */
    MEM8(esp + 0x18) = LO8(ebx);
    MEM8(esp + 0x19) = 7;
    MEM16(esp + 0x1A) = 0x12C;
    MEM8(esp + 0x1E) = 0x12;
    PUSH32(esp, 0); sub_000D9C60(); /* call 0x000D9C60 */

loc_00122A37: ;
    esp = esp + 8;
    if (CMP_EQ(eax, ebx)) goto loc_00122CE5; /* je: equal / zero */

loc_00122A42: ;
    ecx = MEM32(esp + 0x10);
    edx = MEM32(esp + 0x14);
    MEM32(eax + 0x2C) = ecx;
    ecx = MEM32(esp + 0x294);
    MEM32(eax + 0x30) = edx;
    MEM32(eax + 0x34) = ecx;
    ecx = MEM32(esp + 0x178);
    esi = eax + 0x38;
    eax = MEM32(esp + 0x18);
    edx = esi;
    MEM32(edx) = eax;
    MEM32(edx + 4) = ebx;
    eax = esp + 0x17C;
    MEM32(edx + 8) = ecx;
    PUSH32(esp, 0); sub_000AF180(); /* call 0x000AF180 */

loc_00122A7E: ;
    xmm0 = MEMF(ebp * 4 + 0x596B70); /* movss */
    xmm0 = xmm0 * MEMF(0x64ADA0); /* mulss */
    xmm1 = 0.0f; /* xorps self = zero */
    edx = MEM32(esp + 0xD0);
    MEMF(esp + 0x20) = xmm0; /* movss */
    MEMF(esp + 0x1C) = xmm0; /* movss */
    xmm0 = MEMF(ebp * 4 + 0x596B70); /* movss */
    xmm0 = xmm0 * MEMF(0x64AC6C); /* mulss */
    MEMF(esp + 0x28) = xmm0; /* movss */
    MEMF(esp + 0x24) = xmm0; /* movss */
    xmm0 = MEMF(0x648E64); /* movss */
    MEMF(esp + 0x2C) = xmm0; /* movss */
    xmm0 = MEMF(0x648E14); /* movss */
    MEMF(esp + 0x30) = xmm0; /* movss */
    xmm0 = MEMF(0x648E68); /* movss */
    eax = eax | 0xFFFFFFFFu;
    MEMF(esp + 0x34) = xmm0; /* movss */
    xmm0 = MEMF(0x649228); /* movss */
    ecx = 2;
    MEMF(esp + 0x38) = xmm0; /* movss */
    xmm0 = MEMF(0x649284); /* movss */
    MEM32(esp + 0x1DC) = ecx;
    MEM32(esp + 0x1E4) = ecx;
    MEM32(esp + 0x1F8) = ecx;
    ecx = MEM32(esp + 0xD4);
    MEM32(esp + 0x188) = edx;
    edx = MEM32(esp + 0xD8);
    MEMF(esp + 0x1C8) = xmm1; /* movss */
    MEMF(esp + 0x3C) = xmm0; /* movss */
    xmm0 = MEMF(0x648D14); /* movss */
    MEMF(esp + 0x1D4) = xmm1; /* movss */
    MEMF(esp + 0x1D8) = xmm1; /* movss */
    xmm1 = MEMF(0x648EA4); /* movss */
    MEM32(esp + 0x1C4) = 0x303;
    MEM32(esp + 0x40) = eax;
    MEM32(esp + 0x50) = eax;
    MEM32(esp + 0x44) = eax;
    MEM32(esp + 0x54) = eax;
    MEM32(esp + 0x48) = eax;
    MEM32(esp + 0x58) = eax;
    MEM32(esp + 0x4C) = eax;
    MEM32(esp + 0x5C) = eax;
    MEM32(esp + 0x60) = ebx;
    MEMF(esp + 0x64) = xmm0; /* movss */
    MEM16(esp + 0x68) = LO16(ebx);
    MEM16(esp + 0x6A) = LO16(ebx);
    MEM16(esp + 0x6C) = LO16(ebx);
    MEM16(esp + 0x6E) = LO16(ebx);
    MEM8(esp + 0x70) = LO8(ebx);
    MEM8(esp + 0x71) = LO8(ebx);
    MEM8(esp + 0x72) = LO8(ebx);
    MEM8(esp + 0x73) = LO8(ebx);
    MEM8(esp + 0x74) = LO8(ebx);
    MEM8(esp + 0x75) = LO8(eax);
    MEM8(esp + 0x1CC) = 1;
    MEM32(esp + 0x1D0) = 0x69;
    MEM8(esp + 0x17C) = 3;
    MEM32(esp + 0x1E8) = ebx;
    MEM32(esp + 0x1EC) = 4;
    MEM32(esp + 0x1F4) = ebx;
    MEM16(esp + 0x17E) = 0x12C;
    MEM32(esp + 0x1FC) = ebx;
    MEMF(esp + 0x180) = xmm1; /* movss */
    MEMF(esp + 0x184) = xmm1; /* movss */
    MEM32(esp + 0x18C) = ecx;
    MEM32(esp + 0x190) = edx;
    xmm1 = MEMF(esp + 0xD0); /* movss */
    ecx = MEM32(esp + 0x114);
    PUSH32(esp, edi);
    PUSH32(esp, eax);
    PUSH32(esp, ebx);
    PUSH32(esp, ebx);
    MEMF(esp + 0x1A4) = xmm1; /* movss */
    xmm1 = MEMF(esp + 0xE4); /* movss */
    xmm1 = xmm1 - MEMF(0x5A0060); /* subss */
    PUSH32(esp, ebx);
    edx = esp + 0x30;
    PUSH32(esp, 0x5C);
    MEMF(esp + 0x1B0) = xmm1; /* movss */
    xmm1 = MEMF(esp + 0xF0); /* movss */
    PUSH32(esp, edx);
    SET_LO8(edx, 0); /* xor self */
    eax = esp + 0x198;
    MEMF(esp + 0x1B8) = xmm1; /* movss */
    MEMF(esp + 0x1BC) = xmm0; /* movss */
    MEMF(esp + 0x1C0) = xmm0; /* movss */
    MEMF(esp + 0x1C4) = xmm0; /* movss */
    MEM32(esp + 0x1C8) = 0x1C12006;
    MEM8(esp + 0x1DF) = 0xFF;
    MEM8(esp + 0x1DC) = 0xFF;
    MEM8(esp + 0x1DD) = 0xFF;
    MEM8(esp + 0x1DE) = 0xFF;
    MEM32(esp + 0x1CC) = ecx;
    MEM8(esp + 0x1D0) = 0xFF;
    PUSH32(esp, 0); sub_00149680(); /* call 0x00149680 */

loc_00122CDF: ;
    esp = esp + 0x1C;
    MEM32(esi + 4) = eax;

loc_00122CE5: ;
    POP32(esp, edi);
    POP32(esp, esi);

loc_00122CE7: ;
    POP32(esp, ebp);
    POP32(esp, ebx);
    esp = esp + 0x280;
    esp += 4; return; /* ret */

}

/**
 * sub_00122E20
 * Original: 0x00122E20 - 0x00122F35 (277 bytes, 66 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00122E20(void)
{
    float xmm0, xmm1, xmm2, xmm3, xmm5;

loc_00122E20: ;
    edx = MEM32(esp + 4);
    xmm5 = MEMF(0x648D14); /* movss */
    PUSH32(esp, esi);
    esi = MEM32(esp + 0xC);
    xmm0 = MEMF(esi + 0x290); /* movss */
    xmm0 = xmm0 * MEMF(0x648E18); /* mulss */
    PUSH32(esp, 0);
    PUSH32(esp, 0);
    PUSH32(esp, 0);
    PUSH32(esp, ecx);
    MEMF(esp) = xmm0; /* movss */
    PUSH32(esp, 0);
    PUSH32(esp, 0);
    PUSH32(esp, 0x3F800000);
    PUSH32(esp, 0x3F800000);
    PUSH32(esp, edx);
    PUSH32(esp, 0); sub_003E2E60(); /* call 0x003E2E60 */

loc_00122E61: ;
    eax = MEM32(esi + 0x60);
    xmm0 = MEMF(esi + 0x68); /* movss */
    xmm1 = MEMF(esi + 0x64); /* movss */
    xmm3 = MEMF(edx); /* movss */
    MEMF(edx + 0x34) = xmm1; /* movss */
    MEM32(edx + 0x30) = eax;
    MEMF(edx + 0x38) = xmm0; /* movss */
    xmm0 = MEMF(esi + 0x34); /* movss */
    xmm1 = MEMF(esi + 0x38); /* movss */
    xmm2 = xmm0; /* movaps */
    xmm3 = xmm3 * xmm2; /* mulss */
    MEMF(edx) = xmm3; /* movss */
    xmm3 = MEMF(edx + 4); /* movss */
    xmm3 = xmm3 * xmm2; /* mulss */
    MEMF(edx + 4) = xmm3; /* movss */
    xmm3 = MEMF(edx + 8); /* movss */
    xmm3 = xmm3 * xmm2; /* mulss */
    MEMF(edx + 8) = xmm3; /* movss */
    xmm3 = MEMF(edx + 0xC); /* movss */
    xmm3 = xmm3 * xmm2; /* mulss */
    xmm2 = MEMF(edx + 0x10); /* movss */
    xmm2 = xmm2 * xmm1; /* mulss */
    MEMF(edx + 0x10) = xmm2; /* movss */
    xmm2 = MEMF(edx + 0x14); /* movss */
    xmm2 = xmm2 * xmm1; /* mulss */
    MEMF(edx + 0x14) = xmm2; /* movss */
    xmm2 = MEMF(edx + 0x18); /* movss */
    xmm2 = xmm2 * xmm1; /* mulss */
    MEMF(edx + 0x18) = xmm2; /* movss */
    xmm2 = MEMF(edx + 0x1C); /* movss */
    xmm2 = xmm2 * xmm1; /* mulss */
    xmm1 = MEMF(edx + 0x20); /* movss */
    xmm1 = xmm1 * xmm0; /* mulss */
    MEMF(edx + 0x20) = xmm1; /* movss */
    xmm1 = MEMF(edx + 0x24); /* movss */
    xmm1 = xmm1 * xmm0; /* mulss */
    MEMF(edx + 0x24) = xmm1; /* movss */
    xmm1 = MEMF(edx + 0x28); /* movss */
    xmm1 = xmm1 * xmm0; /* mulss */
    MEMF(edx + 0x28) = xmm1; /* movss */
    xmm1 = MEMF(edx + 0x2C); /* movss */
    esp = esp + 0x24;
    xmm1 = xmm1 * xmm0; /* mulss */
    MEMF(edx + 0xC) = xmm3; /* movss */
    MEMF(edx + 0x1C) = xmm2; /* movss */
    MEMF(edx + 0x2C) = xmm1; /* movss */
    SET_LO8(eax, 1);
    POP32(esp, esi);
    esp += 4; return; /* ret */

}

/**
 * sub_00122F40
 * Original: 0x00122F40 - 0x001231AC (620 bytes, 143 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00122F40(void)
{
    uint32_t ebp;
    int _flags = 0; /* fallback flag var */
    float xmm0, xmm1, xmm2, xmm3, xmm4, xmm5, xmm6;

loc_00122F40: ;
    PUSH32(esp, ebp);
    ebp = esp;
    esp = esp & 0xFFFFFFF0u;
    esp = esp - 0x58;
    PUSH32(esp, esi);
    xmm5 = MEMF(0x648D14); /* movss */
    PUSH32(esp, edi);
    edi = MEM32(ebp + 8);
    esi = MEM32(edi + 0x38);
    xmm0 = MEMF(esi + 0x290); /* movss */
    xmm0 = xmm0 * MEMF(0x648E18); /* mulss */
    PUSH32(esp, 0);
    PUSH32(esp, 0);
    PUSH32(esp, 0);
    PUSH32(esp, ecx);
    MEMF(esp) = xmm0; /* movss */
    PUSH32(esp, 0);
    PUSH32(esp, 0);
    PUSH32(esp, 0x3F800000);
    eax = esp + 0x3C;
    PUSH32(esp, 0x3F800000);
    PUSH32(esp, eax);
    PUSH32(esp, 0); sub_003E2E60(); /* call 0x003E2E60 */

loc_00122F8D: ;
    xmm0 = MEMF(esi + 0x68); /* movss */
    xmm1 = MEMF(esi + 0x64); /* movss */
    xmm2 = MEMF(esi + 0x60); /* movss */
    xmm3 = MEMF(esp + 0x44); /* movss */
    MEMF(esp + 0x74) = xmm2; /* movss */
    MEMF(esp + 0x78) = xmm1; /* movss */
    MEMF(esp + 0x7C) = xmm0; /* movss */
    xmm0 = MEMF(esi + 0x34); /* movss */
    xmm1 = MEMF(esi + 0x38); /* movss */
    xmm2 = xmm0; /* movaps */
    xmm3 = xmm3 * xmm2; /* mulss */
    MEMF(esp + 0x44) = xmm3; /* movss */
    xmm3 = MEMF(esp + 0x48); /* movss */
    xmm3 = xmm3 * xmm2; /* mulss */
    xmm4 = 0.0f; /* xorps self = zero */
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
    esp = esp + 0x24;
    xmm1 = xmm1 * xmm0; /* mulss */
    ecx = esp + 0x20;
    PUSH32(esp, ecx);
    MEMF(esp + 0x4C) = xmm1; /* movss */
    xmm1 = MEMF(esp + 0x50); /* movss */
    edx = esp + 0xC;
    xmm1 = xmm1 * xmm0; /* mulss */
    xmm0 = MEMF(0x6495E8); /* movss */
    PUSH32(esp, edx);
    eax = esp + 0x1C;
    PUSH32(esp, eax);
    MEMF(esp + 0x38) = xmm3; /* movss */
    MEMF(esp + 0x48) = xmm2; /* movss */
    MEMF(esp + 0x58) = xmm1; /* movss */
    MEMF(esp + 0x14) = xmm4; /* movss */
    MEMF(esp + 0x18) = xmm0; /* movss */
    MEMF(esp + 0x1C) = xmm4; /* movss */
    PUSH32(esp, 0); sub_00428393(); /* call 0x00428393 */

loc_001230AF: ;
    ecx = MEM32(edi + 0x34);
    xmm1 = MEMF(esp + 0x14); /* movss */
    MEMF(ecx + 0xC) = xmm1; /* movss */
    edx = MEM32(edi + 0x34);
    xmm5 = MEMF(esp + 0x18); /* movss */
    xmm6 = MEMF(esp + 0x1C); /* movss */
    MEMF(edx + 0x10) = xmm5; /* movss */
    eax = MEM32(edi + 0x34);
    MEMF(eax + 0x14) = xmm6; /* movss */
    eax = MEM32(edi + 0x3C);
    if (TEST_Z(eax, eax)) goto loc_001231A4; /* je: equal / zero */

loc_001230E4: ;
    xmm1 = xmm1 - MEMF(esi + 0x60); /* subss */
    xmm2 = MEMF(edi + 0x40); /* movss */
    xmm2 = xmm2 * MEMF(0x64967C); /* mulss */
    xmm6 = xmm6 - MEMF(esi + 0x68); /* subss */
    xmm5 = xmm5 - MEMF(esi + 0x64); /* subss */
    xmm3 = MEMF(esi + 0x38); /* movss */
    xmm3 = xmm3 * MEMF(0x64944C); /* mulss */
    xmm0 = xmm4; /* movaps */
    xmm1 = xmm1 * xmm2; /* mulss */
    xmm0 = xmm0 - xmm1; /* subss */
    xmm1 = xmm4; /* movaps */
    xmm6 = xmm6 * xmm2; /* mulss */
    xmm4 = xmm4 - xmm6; /* subss */
    xmm5 = xmm5 * xmm2; /* mulss */
    xmm2 = xmm4; /* movaps */
    xmm4 = xmm0; /* movaps */
    xmm4 = xmm4 * xmm3; /* mulss */
    xmm4 = xmm4 + MEMF(esi + 0x60); /* addss */
    ecx = eax;
    MEMF(ecx + 0x40) = xmm4; /* movss */
    edx = MEM32(edi + 0x3C);
    xmm1 = xmm1 - xmm5; /* subss */
    xmm4 = xmm1; /* movaps */
    xmm4 = xmm4 * xmm3; /* mulss */
    xmm4 = xmm4 + MEMF(esi + 0x64); /* addss */
    MEMF(edx + 0x44) = xmm4; /* movss */
    eax = MEM32(edi + 0x3C);
    xmm4 = xmm2; /* movaps */
    xmm4 = xmm4 * xmm3; /* mulss */
    xmm4 = xmm4 + MEMF(esi + 0x68); /* addss */
    xmm3 = MEMF(0x5A0060); /* movss */
    MEMF(eax + 0x48) = xmm4; /* movss */
    eax = MEM32(edi + 0x3C);
    xmm0 = xmm0 * xmm3; /* mulss */
    xmm0 = xmm0 + MEMF(eax + 0x40); /* addss */
    MEMF(eax + 0x4C) = xmm0; /* movss */
    eax = MEM32(edi + 0x3C);
    xmm1 = xmm1 * xmm3; /* mulss */
    xmm1 = xmm1 + MEMF(eax + 0x44); /* addss */
    MEMF(eax + 0x50) = xmm1; /* movss */
    edi = MEM32(edi + 0x3C);
    xmm2 = xmm2 * xmm3; /* mulss */
    xmm2 = xmm2 + MEMF(edi + 0x48); /* addss */
    MEMF(edi + 0x54) = xmm2; /* movss */

loc_001231A4: ;
    POP32(esp, edi);
    SET_LO8(eax, 1);
    POP32(esp, esi);
    esp = ebp;
    POP32(esp, ebp);
    esp += 4; return; /* ret */

}

/**
 * sub_001231B0
 * Original: 0x001231B0 - 0x001231CB (27 bytes, 12 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_001231B0(void)
{
    int _flags = 0; /* fallback flag var */

loc_001231B0: ;
    PUSH32(esp, edi);
    PUSH32(esp, eax);
    PUSH32(esp, 0x6B);
    eax = 0xD0;
    PUSH32(esp, 0); sub_000D9C60(); /* call 0x000D9C60 */

loc_001231BE: ;
    edi = eax;
    eax = 0; /* xor self */
    esp = esp + 8;
    if (CMP_NE(edi, eax)) { sub_001231CB(); return; } /* jne: not equal / not zero */

loc_001231C9: ;
    POP32(esp, edi);
    esp += 4; return; /* ret */

}

/**
 * sub_00123210
 * Original: 0x00123210 - 0x00123281 (113 bytes, 34 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00123210(void)
{
    int _flags = 0; /* fallback flag var */
    float xmm0;

loc_00123210: ;
    PUSH32(esp, esi);
    esi = eax;
    eax = MEM32(0x77168C);
    if (TEST_Z(eax, eax)) goto loc_0012322F; /* je: equal / zero */

loc_0012321C: ;
    /* nop */

loc_00123220: ;
    ecx = ZX8(MEM8(eax + 0x2E));
    if (CMP_EQ(ecx, esi)) goto loc_00123241; /* je: equal / zero */

loc_00123228: ;
    eax = MEM32(eax + 0xC);
    if (TEST_NZ(eax, eax)) goto loc_00123220; /* jne: not equal / not zero */

loc_0012322F: ;
    PUSH32(esp, esi);
    eax = 0xFF;
    PUSH32(esp, 0); sub_001231B0(); /* call 0x001231B0 */

loc_0012323A: ;
    esp = esp + 4;
    if (TEST_Z(eax, eax)) goto loc_0012327F; /* je: equal / zero */

loc_00123241: ;
    xmm0 = MEMF(esp + 0xC); /* movss */
    esi = (uint32_t)((int32_t)esi * (int32_t)0x6D0);
    edx = MEM32(0x84A5F8);
    MEMF(eax + 0xC0) = xmm0; /* movss */
    SET_LO8(ecx, MEM8(esi + edx + 0x1B5));
    if (TEST_Z(LO8(ecx), LO8(ecx))) goto loc_00123272; /* je: equal / zero */

loc_00123266: ;
    MEM16(eax + 0x2C) = 0;
    MEM8(eax + 0x2F) = 0;
    POP32(esp, esi);
    esp += 4; return; /* ret */

loc_00123272: ;
    SET_LO16(ecx, MEM16(esp + 8));
    MEM8(eax + 0x2F) = 3;
    MEM16(eax + 0x2C) = LO16(ecx);

loc_0012327F: ;
    POP32(esp, esi);
    esp += 4; return; /* ret */

}

/**
 * sub_00123290
 * Original: 0x00123290 - 0x001235F0 (864 bytes, 235 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00123290(void)
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

loc_00123290: ;
    edx = MEM32(0x84A5F8);
    esp = esp - 0xC;
    PUSH32(esp, esi);
    esi = MEM32(esp + 0x14);
    eax = ZX8(MEM8(esi + 0x2F));
    PUSH32(esp, edi);
    edi = ZX8(MEM8(esi + 0x2E));
    edi = (uint32_t)((int32_t)edi * (int32_t)0x6D0);
    edi = edi + edx;
    if (CMP_A(eax, 3)) goto loc_001235EA; /* ja: above (unsigned >) */

loc_001232B8: ;
    { uint32_t _jt = MEM32(eax * 4 + 0x1235F0); /* switch: 4 entries, 4 targets */
    if (_jt == 0x001232BFu) goto loc_001232BF;
    if (_jt == 0x00123378u) goto loc_00123378;
    if (_jt == 0x001234F7u) goto loc_001234F7;
    if (_jt == 0x00123528u) goto loc_00123528;
    g_seh_ebp = ebp; RECOMP_ITAIL(_jt); return; }

loc_001232BF: ;
    ecx = MEM32(edi + 0x568);
    if (TEST_Z(ecx, ecx)) goto loc_001232D2; /* je: equal / zero */

loc_001232C9: ;
    eax = ZX8(MEM8(ecx + 0x97));
    goto loc_001232D4;

loc_001232D2: ;
    eax = 0; /* xor self */

loc_001232D4: ;
    if (TEST_S(LO8(eax), LO8(eax))) goto loc_0012350B; /* js: sign (negative) */

loc_001232DC: ;
    if (CMP_EQ(eax, 0x2A)) goto loc_0012350B; /* je: equal / zero */

loc_001232E5: ;
    if (CMP_EQ(eax, 0x2B)) goto loc_0012350B; /* je: equal / zero */

loc_001232EE: ;
    if (CMP_NE(eax, 0x42)) goto loc_00123302; /* jne: not equal / not zero */

loc_001232F3: ;
    if (TEST_NZ(MEM8(0x801A12), 8)) goto loc_0012350B; /* jne: not equal / not zero */

loc_00123300: ;
    goto loc_0012330B;

loc_00123302: ;
    if (CMP_EQ(eax, 0x2C)) goto loc_0012350B; /* je: equal / zero */

loc_0012330B: ;
    edx = MEM32(ecx + 0x2B0);
    if (TEST_NZ(edx, edx)) goto loc_0012350B; /* jne: not equal / not zero */

loc_00123319: ;
    if (TEST_Z(eax, eax)) goto loc_0012350B; /* je: equal / zero */

loc_00123321: ;
    if (CMP_EQ(eax, 0x1F)) goto loc_0012350B; /* je: equal / zero */

loc_0012332A: ;
    SET_LO8(eax, MEM8(edi + 0x1B5));
    if (TEST_NZ(LO8(eax), LO8(eax))) goto loc_0012350B; /* jne: not equal / not zero */

loc_00123338: ;
    eax = (int32_t)MEMF(0x7F9F5C); /* cvttss2si */
    ecx = MEM32(0x847024);
    PUSH32(esp, 0);
    PUSH32(esp, 0);
    PUSH32(esp, 0xFFFFFFFFu);
    PUSH32(esp, 0xFFFFFFFFu);
    PUSH32(esp, 0);
    eax = eax << 1;
    PUSH32(esp, 0);
    MEM16(esi + 0x2C) = LO16(eax);
    MEM8(esi + 0x2F) = 1;
    edx = MEM32(ecx + 0x40);
    PUSH32(esp, 4);
    PUSH32(esp, edx);
    edx = edx | 0xFFFFFFFFu;
    eax = eax | 0xFFFFFFFFu;
    ecx = 0x1EB;
    PUSH32(esp, 0); sub_00022D90(); /* call 0x00022D90 */

loc_00123372: ;
    POP32(esp, edi);
    POP32(esp, esi);
    esp = esp + 0xC;
    esp += 4; return; /* ret */

loc_00123378: ;
    eax = MEM32(edi + 0x568);
    ecx = MEM32(eax + 0xA0);
    if (TEST_Z(ecx, ecx)) goto loc_0012338E; /* je: equal / zero */

loc_00123388: ;
    MEM16(esi + 0x2C) = 0;

loc_0012338E: ;
    eax = (uint32_t)(int32_t)SMEM16(esi + 0x2C);
    ecx = MEM32(0x7FA20C);
    eax = eax - ecx;
    if (CMP_LE(eax & eax, 0)) goto loc_001233AD; /* jle: less or equal (signed <=) */

loc_0012339E: ;
    edx = MEM32(edi + 0x568);
    if (CMP_NE(MEM8(edx + 0x97), 0)) goto loc_001233B3; /* jne: not equal / not zero */

loc_001233AD: ;
    MEM8(esi + 0x2F) = 2;
    eax = 0; /* xor self */

loc_001233B3: ;
    xmm1 = MEMF(0x64935C); /* movss */
    MEM16(esi + 0x2C) = LO16(eax);
    SET_LO8(eax, MEM8(esi + 0x30));
    SET_LO8(ecx, LO8(ecx) << 1);
    SET_LO8(eax, LO8(eax) + LO8(ecx));
    ecx = MEM32(esi + 0x34);
    (void)0; /* test ecx, ecx - flags set for next jcc */
    MEM8(esi + 0x30) = LO8(eax);
    if (TEST_Z(ecx, ecx)) goto loc_0012342F; /* je: equal / zero */

loc_001233D0: ;
    eax = MEM32(edi + 0x568);
    if (CMP_EQ(MEM8(eax + 0x97), 5)) goto loc_001233E2; /* je: equal / zero */

loc_001233DF: ;
    xmm1 = 0.0f; /* xorps self = zero */

loc_001233E2: ;
    edx = MEM32(edi + 0x78);
    MEM32(ecx + 0xC) = edx;
    SET_LO8(eax, MEM8(esi + 0x30));
    PUSH32(esp, 0); sub_002AF8A0(); /* call 0x002AF8A0 */

loc_001233F0: ;
    xmm2 = MEMF(esi + 0xC0); /* movss */
    xmm2 = xmm2 + MEMF(edi + 0x7C); /* addss */
    eax = MEM32(esi + 0x34);
    xmm0 = xmm0 * MEMF(0x648F38); /* mulss */
    xmm2 = xmm2 + xmm1; /* addss */
    xmm2 = xmm2 + MEMF(0x649428); /* addss */
    xmm0 = xmm0 + xmm2; /* addss */
    MEMF(eax + 0x10) = xmm0; /* movss */
    edx = MEM32(edi + 0x80);
    ecx = MEM32(esi + 0x34);
    POP32(esp, edi);
    MEM32(ecx + 0x14) = edx;
    POP32(esp, esi);
    esp = esp + 0xC;
    esp += 4; return; /* ret */

loc_0012342F: ;
    ecx = MEM32(edi + 0x568);
    if (CMP_EQ(MEM8(ecx + 0x97), 5)) goto loc_00123441; /* je: equal / zero */

loc_0012343E: ;
    xmm1 = 0.0f; /* xorps self = zero */

loc_00123441: ;
    xmm0 = MEMF(edi + 0x78); /* movss */
    MEMF(esp + 8) = xmm0; /* movss */
    PUSH32(esp, 0); sub_002AF8A0(); /* call 0x002AF8A0 */

loc_00123451: ;
    xmm0 = xmm0 * MEMF(0x648F38); /* mulss */
    xmm0 = xmm0 + MEMF(esi + 0xC0); /* addss */
    xmm0 = xmm0 + MEMF(edi + 0x7C); /* addss */
    eax = MEM32(0x7FA1F8);
    (void)0; /* cmp eax, 0x36 - flags set for next jcc */
    xmm0 = xmm0 + xmm1; /* addss */
    xmm0 = xmm0 + MEMF(0x649428); /* addss */
    MEMF(esp + 0xC) = xmm0; /* movss */
    xmm0 = MEMF(edi + 0x80); /* movss */
    MEMF(esp + 0x10) = xmm0; /* movss */
    xmm0 = MEMF(0x648EB0); /* movss */
    MEMF(esp + 0x18) = xmm0; /* movss */
    if (CMP_NE(eax, 0x36)) goto loc_001234A8; /* jne: not equal / not zero */

loc_0012349E: ;
    xmm0 = MEMF(0x64AAE0); /* movss */
    goto loc_001234B5;

loc_001234A8: ;
    if (CMP_NE(eax, 0x29)) goto loc_001234BB; /* jne: not equal / not zero */

loc_001234AD: ;
    xmm0 = MEMF(0x6496F4); /* movss */

loc_001234B5: ;
    MEMF(esp + 0x18) = xmm0; /* movss */

loc_001234BB: ;
    fp_push(MEMF(esp + 0x18)); /* fld float */
    edx = MEM32(esp + 0x10);
    ecx = MEM32(esp + 8);
    fp_st1() += fp_top(); fp_pop(); /* fadd */
    PUSH32(esp, 0x7F);
    PUSH32(esp, 0);
    PUSH32(esp, 0x7F);
    MEMF(esp + 0x24) = (float)fp_top(); fp_popp(); /* fstp */
    eax = MEM32(esp + 0x24);
    PUSH32(esp, eax);
    PUSH32(esp, eax);
    PUSH32(esp, eax);
    eax = MEM32(esp + 0x24);
    PUSH32(esp, 0x476A6000);
    PUSH32(esp, edx);
    PUSH32(esp, eax);
    PUSH32(esp, ecx);
    PUSH32(esp, 0); sub_00124100(); /* call 0x00124100 */

loc_001234EB: ;
    esp = esp + 0x28;
    POP32(esp, edi);
    MEM32(esi + 0x34) = eax;
    POP32(esp, esi);
    esp = esp + 0xC;
    esp += 4; return; /* ret */

loc_001234F7: ;
    edx = MEM32(edi + 0x568);
    SET_LO8(eax, MEM8(edx + 0x97));
    if (TEST_NZ(LO8(eax), LO8(eax))) goto loc_0012350B; /* jne: not equal / not zero */

loc_00123507: ;
    MEM8(esi + 0x2F) = 0;

loc_0012350B: ;
    eax = MEM32(esi + 0x34);
    if (TEST_Z(eax, eax)) goto loc_001235EA; /* je: equal / zero */

loc_00123516: ;
    PUSH32(esp, 0); sub_00128E00(); /* call 0x00128E00 */

loc_0012351B: ;
    POP32(esp, edi);
    MEM32(esi + 0x34) = 0;
    POP32(esp, esi);
    esp = esp + 0xC;
    esp += 4; return; /* ret */

loc_00123528: ;
    eax = (uint32_t)(int32_t)SMEM16(esi + 0x2C);
    ecx = MEM32(0x7FA20C);
    eax = eax - ecx;
    if (CMP_G(eax & eax, 0)) goto loc_00123548; /* jg: greater (signed >) */

loc_00123538: ;
    POP32(esp, edi);
    MEM8(esi + 0x2F) = 2;
    MEM16(esi + 0x2C) = 0;
    POP32(esp, esi);
    esp = esp + 0xC;
    esp += 4; return; /* ret */

loc_00123548: ;
    SET_LO8(edx, MEM8(esi + 0x30));
    SET_LO8(ecx, LO8(ecx) << 1);
    MEM16(esi + 0x2C) = LO16(eax);
    eax = MEM32(esi + 0x34);
    SET_LO8(edx, LO8(edx) + LO8(ecx));
    (void)0; /* test eax, eax - flags set for next jcc */
    MEM8(esi + 0x30) = LO8(edx);
    if (TEST_Z(eax, eax)) goto loc_0012359A; /* je: equal / zero */

loc_0012355D: ;
    ecx = MEM32(edi + 0x78);
    MEM32(eax + 0xC) = ecx;
    SET_LO8(eax, MEM8(esi + 0x30));
    PUSH32(esp, 0); sub_002AF8A0(); /* call 0x002AF8A0 */

loc_0012356B: ;
    xmm0 = xmm0 * MEMF(0x648F38); /* mulss */
    xmm0 = xmm0 + MEMF(edi + 0x7C); /* addss */
    edx = MEM32(esi + 0x34);
    xmm0 = xmm0 + MEMF(0x649428); /* addss */
    MEMF(edx + 0x10) = xmm0; /* movss */
    ecx = MEM32(edi + 0x80);
    eax = MEM32(esi + 0x34);
    POP32(esp, edi);
    MEM32(eax + 0x14) = ecx;
    POP32(esp, esi);
    esp = esp + 0xC;
    esp += 4; return; /* ret */

loc_0012359A: ;
    (void)0; /* cmp MEM32(0x7FA1F8), 0x29 - flags set for next jcc */
    xmm0 = MEMF(0x648D10); /* movss */
    if (CMP_EQ(MEM32(0x7FA1F8), 0x29)) goto loc_001235B3; /* je: equal / zero */

loc_001235AB: ;
    xmm0 = MEMF(0x648D14); /* movss */

loc_001235B3: ;
    MEMF(esp + 0x18) = xmm0; /* movss */
    fp_push(MEMF(esp + 0x18)); /* fld float */
    PUSH32(esp, 0);
    fp_st1() *= fp_top(); fp_pop(); /* fmul */
    PUSH32(esp, 0);
    PUSH32(esp, 0x7F);
    MEMF(esp + 0x24) = (float)fp_top(); fp_popp(); /* fstp */
    eax = MEM32(esp + 0x24);
    PUSH32(esp, eax);
    PUSH32(esp, eax);
    PUSH32(esp, eax);
    PUSH32(esp, 0x476A6000);
    PUSH32(esp, 0);
    PUSH32(esp, 0);
    PUSH32(esp, 0);
    PUSH32(esp, 0); sub_00124100(); /* call 0x00124100 */

loc_001235E4: ;
    esp = esp + 0x28;
    MEM32(esi + 0x34) = eax;

loc_001235EA: ;
    POP32(esp, edi);
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
 * sub_00123A10
 * Original: 0x00123A10 - 0x00123A6E (94 bytes, 30 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00123A10(void)
{
    uint32_t ebp;
    int _flags = 0; /* fallback flag var */
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_00123A10: ;
    PUSH32(esp, ebx);
    PUSH32(esp, esi);
    PUSH32(esp, edi);
    edi = MEM32(esp + 0x10);
    ebx = MEM32(edi + 0x34);
    if (TEST_Z(ebx, ebx)) goto loc_00123A45; /* je: equal / zero */

loc_00123A1E: ;
    edx = ebx;
    PUSH32(esp, 0); sub_00123F50(); /* call 0x00123F50 */

loc_00123A25: ;
    eax = MEM32(ebx + 4);
    (void)0; /* test eax, eax - flags set for next jcc */
    ecx = MEM32(ebx);
    MEM32(ecx + 4) = eax;
    if (TEST_Z(eax, eax)) goto loc_00123A33; /* je: equal / zero */

loc_00123A31: ;
    MEM32(eax) = ecx;

loc_00123A33: ;
    MEM32(ebx) = 0;
    MEM32(ebx + 4) = 0;
    PUSH32(esp, 0); sub_00128E60(); /* call 0x00128E60 */

loc_00123A45: ;
    esi = MEM32(edi + 0xC8);
    ecx = edi + 0xCC;
    PUSH32(esp, 0); sub_0010F760(); /* call 0x0010F760 */

loc_00123A56: ;
    SET_LO8(eax, MEM8(0x8472BD));
    if (TEST_NZ(LO8(eax), LO8(eax))) { sub_00123A6E(); return; } /* jne: not equal / not zero */

loc_00123A5F: ;
    eax = edi;
    POP32(esp, edi);
    POP32(esp, esi);
    edx = 1;
    POP32(esp, ebx);
    g_seh_ebp = ebp; sub_000DA5E0(); return; /* tail jmp 0x000DA5E0 */

}

/**
 * sub_00123A80
 * Original: 0x00123A80 - 0x00123ABA (58 bytes, 21 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00123A80(void)
{
    int _flags = 0; /* fallback flag var */

loc_00123A80: ;
    eax = MEM32(0x77168C);
    if (TEST_Z(eax, eax)) goto loc_00123AB9; /* je: equal / zero */

loc_00123A89: ;
    ecx = MEM32(esp + 4);
    SET_LO16(ecx, MEM16(ecx + 0x60));

loc_00123A91: ;
    SET_LO16(edx, ZX8(MEM8(eax + 0x2E)));
    if (CMP_EQ(LO16(edx), LO16(ecx))) goto loc_00123AA3; /* je: equal / zero */

loc_00123A9B: ;
    eax = MEM32(eax + 0xC);
    if (TEST_NZ(eax, eax)) goto loc_00123A91; /* jne: not equal / not zero */

loc_00123AA2: ;
    esp += 4; return; /* ret */

loc_00123AA3: ;
    SET_LO8(ecx, MEM8(eax + 0x2F));
    if (CMP_NE(LO8(ecx), 2)) goto loc_00123AB0; /* jne: not equal / not zero */

loc_00123AAB: ;
    MEM8(eax + 0x2F) = 0;
    esp += 4; return; /* ret */

loc_00123AB0: ;
    if (CMP_NE(LO8(ecx), 3)) goto loc_00123AB9; /* jne: not equal / not zero */

loc_00123AB5: ;
    MEM8(eax + 0x2F) = 2;

loc_00123AB9: ;
    esp += 4; return; /* ret */

}

/**
 * sub_00123AC0
 * Original: 0x00123AC0 - 0x00123AEB (43 bytes, 15 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00123AC0(void)
{
    int _flags = 0; /* fallback flag var */

loc_00123AC0: ;
    eax = MEM32(0x77168C);
    if (TEST_Z(eax, eax)) goto loc_00123AEA; /* je: equal / zero */

loc_00123AC9: ;
    /* nop */

loc_00123AD0: ;
    edx = ZX8(MEM8(eax + 0x2E));
    if (CMP_EQ(edx, ecx)) goto loc_00123AE0; /* je: equal / zero */

loc_00123AD8: ;
    eax = MEM32(eax + 0xC);
    if (TEST_NZ(eax, eax)) goto loc_00123AD0; /* jne: not equal / not zero */

loc_00123ADF: ;
    esp += 4; return; /* ret */

loc_00123AE0: ;
    if (CMP_NE(MEM8(eax + 0x2F), 3)) goto loc_00123AEA; /* jne: not equal / not zero */

loc_00123AE6: ;
    MEM8(eax + 0x2F) = 1;

loc_00123AEA: ;
    esp += 4; return; /* ret */

}

/**
 * sub_00123AF0
 * Original: 0x00123AF0 - 0x00123B68 (120 bytes, 45 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00123AF0(void)
{
    int _flags = 0; /* fallback flag var */

loc_00123AF0: ;
    eax = MEM32(esp + 0xC);
    (void)0; /* test eax, eax - flags set for next jcc */
    PUSH32(esp, esi);
    if (TEST_NZ(eax, eax)) goto loc_00123B21; /* jne: not equal / not zero */

loc_00123AF9: ;
    eax = MEM32(esp + 0xC);
    ecx = MEM32(eax);
    eax = ZX16(MEM16(ecx + 0x60));
    if (TEST_S(eax, eax)) goto loc_00123B66; /* jl: less (signed <) */

loc_00123B07: ;
    if (CMP_GE(eax, 0x80)) goto loc_00123B66; /* jge: greater or equal (signed >=) */

loc_00123B0E: ;
    esi = MEM32(esp + 8);
    edx = ZX8(MEM8(esi + 0x2E));
    if (CMP_NE(eax, edx)) goto loc_00123B66; /* jne: not equal / not zero */

loc_00123B1A: ;
    PUSH32(esp, 0); sub_000DADD0(); /* call 0x000DADD0 */

loc_00123B1F: ;
    POP32(esp, esi);
    esp += 4; return; /* ret */

loc_00123B21: ;
    if (CMP_NE(eax, 0x2D)) goto loc_00123B66; /* jne: not equal / not zero */

loc_00123B26: ;
    ecx = MEM32(esp + 0xC);
    eax = MEM32(ecx);
    eax = ZX16(MEM16(eax + 0x60));
    (void)0; /* test eax, eax - flags set for next jcc */
    ecx = MEM32(ecx + 4);
    ecx = ZX16(MEM16(ecx + 0x60));
    if (TEST_S(eax, eax)) goto loc_00123B66; /* jl: less (signed <) */

loc_00123B3B: ;
    if (CMP_GE(eax, 0x80)) goto loc_00123B66; /* jge: greater or equal (signed >=) */

loc_00123B42: ;
    if (TEST_S(ecx, ecx)) goto loc_00123B66; /* jl: less (signed <) */

loc_00123B46: ;
    if (CMP_GE(ecx, 0x80)) goto loc_00123B66; /* jge: greater or equal (signed >=) */

loc_00123B4E: ;
    esi = MEM32(esp + 8);
    edx = ZX8(MEM8(esi + 0x2E));
    if (CMP_NE(eax, edx)) goto loc_00123B5F; /* jne: not equal / not zero */

loc_00123B5A: ;
    MEM8(esi + 0x2E) = LO8(ecx);
    POP32(esp, esi);
    esp += 4; return; /* ret */

loc_00123B5F: ;
    if (CMP_NE(ecx, edx)) goto loc_00123B66; /* jne: not equal / not zero */

loc_00123B63: ;
    MEM8(esi + 0x2E) = LO8(eax);

loc_00123B66: ;
    POP32(esp, esi);
    esp += 4; return; /* ret */

}

/**
 * sub_00123B70
 * Original: 0x00123B70 - 0x00123BDD (109 bytes, 29 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00123B70(void)
{
    float xmm0, xmm1, xmm2;

loc_00123B70: ;
    esp = esp - 0x10;
    eax = esp + 4;
    MEM32(esp) = eax;
    ecx = MEM32(esp + 0x18);
    xmm0 = MEMF(ecx); /* movss */
    xmm0 = MEMD(ecx + 4); /* movhps */
    edx = MEM32(esp + 0x14);
    xmm1 = MEMF(edx); /* movss */
    xmm1 = MEMD(edx + 4); /* movhps */
    /* subps: xmm0 -= xmm1 (packed 4xfloat) */
    eax = MEM32(esp);
    MEMF(eax) = xmm0; /* movss */
    MEMD(eax + 4) = xmm0; /* movhps */
    ecx = esp + 4;
    MEM32(esp + 0x14) = ecx;
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
    MEMF(esp + 0x18) = xmm1; /* movss */
    xmm0 = MEMF(esp + 0x18); /* movss */
    esp = esp + 0x10;
    esp += 12; return; /* ret 8 */

}

/**
 * sub_00123BE0
 * Original: 0x00123BE0 - 0x00123C9A (186 bytes, 53 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00123BE0(void)
{
    int _flags = 0; /* fallback flag var */
    float xmm0, xmm1;

loc_00123BE0: ;
    eax = ZX8(MEM8(ecx + 0xC));
    eax--;
    xmm0 = 0.0f; /* xorps self = zero */
    if ((eax == 0)) { sub_00123C9A(); return; } /* je: equal / zero */

loc_00123BEE: ;
    eax--;
    SET_LO8(eax, MEM8(0x7FA23C));
    if ((eax == 0)) goto loc_00123C46; /* je: equal / zero */

loc_00123BF6: ;
    if (TEST_NZ(LO8(eax), LO8(eax))) goto loc_00123C02; /* jne: not equal / not zero */

loc_00123BFA: ;
    xmm0 = MEMF(0x7F9F4C); /* movss */

loc_00123C02: ;
    xmm0 = xmm0 * MEMF(0x648FDC); /* mulss */
    xmm0 = xmm0 / MEMF(ecx + 8); /* divss */
    edx = (int32_t)xmm0; /* cvttss2si */
    eax = edx;
    eax = eax & 0x8000007Fu;
    if (((int32_t)eax >= 0)) goto loc_00123C21; /* jns: not sign (positive) */

loc_00123C1C: ;
    eax--;
    eax = eax | 0xFFFFFF80u;
    eax++;

loc_00123C21: ;
    ecx = eax + 1;
    ecx = ecx & 0x8000007Fu;
    if (((int32_t)ecx >= 0)) goto loc_00123C31; /* jns: not sign (positive) */

loc_00123C2C: ;
    ecx--;
    ecx = ecx | 0xFFFFFF80u;
    ecx++;

loc_00123C31: ;
    xmm1 = (float)(int32_t)edx; /* cvtsi2ss */
    edx = MEM32(esp + 4);
    MEM32(esi) = ecx;
    xmm0 = xmm0 - xmm1; /* subss */
    MEMF(edx) = xmm0; /* movss */
    esp += 8; return; /* ret 4 */

loc_00123C46: ;
    if (TEST_NZ(LO8(eax), LO8(eax))) goto loc_00123C52; /* jne: not equal / not zero */

loc_00123C4A: ;
    xmm0 = MEMF(0x7F9F4C); /* movss */

loc_00123C52: ;
    xmm0 = xmm0 - MEMF(ecx + 0x10); /* subss */
    xmm0 = xmm0 * MEMF(0x648FDC); /* mulss */
    xmm0 = xmm0 / MEMF(ecx + 8); /* divss */
    edx = (int32_t)xmm0; /* cvttss2si */
    eax = edx;
    if (CMP_LE(eax, 0x7F)) goto loc_00123C78; /* jle: less or equal (signed <=) */

loc_00123C6F: ;
    eax = 0x7F;
    MEM8(ecx + 0x14) = 1;

loc_00123C78: ;
    ecx = eax + 1;
    if (CMP_L(ecx, 0x7F)) goto loc_00123C85; /* jl: less (signed <) */

loc_00123C80: ;
    ecx = 0x7F;

loc_00123C85: ;
    xmm1 = (float)(int32_t)edx; /* cvtsi2ss */
    edx = MEM32(esp + 4);
    MEM32(esi) = ecx;
    xmm0 = xmm0 - xmm1; /* subss */
    MEMF(edx) = xmm0; /* movss */
    esp += 8; return; /* ret 4 */

}

/**
 * sub_00123D20
 * Original: 0x00123D20 - 0x00123DE5 (197 bytes, 52 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00123D20(void)
{
    float xmm0, xmm1, xmm2, xmm3, xmm4, xmm5, xmm6, xmm7;

loc_00123D20: ;
    esp = esp - 8;
    PUSH32(esp, esi);
    eax = esp + 4;
    PUSH32(esp, eax);
    esi = esp + 0xC;
    ecx = ebx;
    PUSH32(esp, 0); sub_00123BE0(); /* call 0x00123BE0 */

loc_00123D34: ;
    edx = MEM32(ebx + 4);
    xmm0 = MEMF(0x648CEC); /* movss */
    ecx = edx + eax * 2;
    ecx = ecx + eax;
    eax = ZX8(MEM8(ecx + 2));
    xmm4 = (float)(int32_t)eax; /* cvtsi2ss */
    eax = ZX8(MEM8(ecx + 1));
    ecx = ZX8(MEM8(ecx));
    xmm6 = (float)(int32_t)ecx; /* cvtsi2ss */
    ecx = MEM32(esp + 8);
    xmm5 = (float)(int32_t)eax; /* cvtsi2ss */
    eax = edx + ecx * 2;
    edx = ZX8(MEM8(eax + ecx + 2));
    eax = eax + ecx;
    ecx = ZX8(MEM8(eax + 1));
    xmm1 = (float)(int32_t)edx; /* cvtsi2ss */
    edx = ZX8(MEM8(eax));
    xmm1 = xmm1 * xmm0; /* mulss */
    xmm4 = xmm4 * xmm0; /* mulss */
    xmm5 = xmm5 * xmm0; /* mulss */
    xmm6 = xmm6 * xmm0; /* mulss */
    xmm2 = (float)(int32_t)ecx; /* cvtsi2ss */
    xmm2 = xmm2 * xmm0; /* mulss */
    xmm3 = (float)(int32_t)edx; /* cvtsi2ss */
    xmm3 = xmm3 * xmm0; /* mulss */
    xmm0 = MEMF(0x648D14); /* movss */
    xmm0 = xmm0 - MEMF(esp + 4); /* subss */
    xmm7 = xmm0; /* movaps */
    xmm7 = xmm7 * xmm4; /* mulss */
    xmm4 = MEMF(esp + 4); /* movss */
    xmm1 = xmm1 * xmm4; /* mulss */
    xmm7 = xmm7 + xmm1; /* addss */
    xmm1 = xmm0; /* movaps */
    xmm1 = xmm1 * xmm5; /* mulss */
    xmm2 = xmm2 * xmm4; /* mulss */
    xmm0 = xmm0 * xmm6; /* mulss */
    xmm3 = xmm3 * xmm4; /* mulss */
    xmm1 = xmm1 + xmm2; /* addss */
    xmm0 = xmm0 + xmm3; /* addss */
    MEMF(edi) = xmm7; /* movss */
    MEMF(edi + 4) = xmm1; /* movss */
    MEMF(edi + 8) = xmm0; /* movss */
    POP32(esp, esi);
    esp = esp + 8;
    esp += 4; return; /* ret */

}

/**
 * sub_00123DF0
 * Original: 0x00123DF0 - 0x00123E01 (17 bytes, 9 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00123DF0(void)
{

loc_00123DF0: ;
    PUSH32(esp, ebx);
    PUSH32(esp, edi);
    edi = MEM32(ecx);
    edi = edi + 0x18;
    ebx = ecx;
    PUSH32(esp, 0); sub_00123D20(); /* call 0x00123D20 */

loc_00123DFE: ;
    POP32(esp, edi);
    POP32(esp, ebx);
    esp += 4; return; /* ret */

}

/**
 * sub_00123E10
 * Original: 0x00123E10 - 0x00123EA5 (149 bytes, 45 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00123E10(void)
{
    int _flags = 0; /* fallback flag var */

loc_00123E10: ;
    eax = MEM32(0x84A19C);
    if (TEST_NZ(eax, eax)) goto loc_00123E1E; /* jne: not equal / not zero */

loc_00123E19: ;
    PUSH32(esp, 0); sub_002AED70(); /* call 0x002AED70 */

loc_00123E1E: ;
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
    if (TEST_Z(esi, esi)) goto loc_00123E6A; /* je: equal / zero */

loc_00123E46: ;
    if (CMP_B(MEM32(esi + 0x80), 0xC)) goto loc_00123E6A; /* jb: below (unsigned <) */

loc_00123E4F: ;
    ecx = 4;
    PUSH32(esp, 0); sub_003E62A0(); /* call 0x003E62A0 */

loc_00123E59: ;
    PUSH32(esp, 0xC);
    PUSH32(esp, edi);
    PUSH32(esp, 0); sub_003E6BD0(); /* call 0x003E6BD0 */

loc_00123E61: ;
    esi = eax;
    esp = esp + 8;
    if (TEST_NZ(esi, esi)) goto loc_00123E8D; /* jne: not equal / not zero */

loc_00123E6A: ;
    esi = MEM32(0x84A184);
    ecx = 4;
    edi = esi;
    PUSH32(esp, 0); sub_003E62A0(); /* call 0x003E62A0 */

loc_00123E7C: ;
    PUSH32(esp, 0xC);
    PUSH32(esp, edi);
    PUSH32(esp, 0); sub_003E6BD0(); /* call 0x003E6BD0 */

loc_00123E84: ;
    esi = eax;
    esp = esp + 8;
    if (TEST_Z(esi, esi)) { sub_00123EA5(); return; } /* je: equal / zero */

loc_00123E8D: ;
    PUSH32(esp, 0); sub_00129220(); /* call 0x00129220 */

loc_00123E92: ;
    POP32(esp, edi);
    MEM32(esi + 4) = eax;
    MEM32(esi + 8) = 0;
    MEM32(0x7737A0) = esi;
    POP32(esp, esi);
    esp += 4; return; /* ret */

}

/**
 * sub_00123EC0
 * Original: 0x00123EC0 - 0x00123F48 (136 bytes, 45 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00123EC0(void)
{
    int _flags = 0; /* fallback flag var */
    float xmm0, xmm1;

loc_00123EC0: ;
    esp = esp - 0x18;
    if (CMP_LE(eax, 0xFFFFFFFFu)) goto loc_00123F44; /* jle: less or equal (signed <=) */

loc_00123EC8: ;
    xmm0 = 0.0f; /* xorps self = zero */
    /* comiss xmm1, xmm0 - sets EFLAGS */
    if ((xmm1 <= xmm0)) goto loc_00123F44; /* jbe: below or equal (unsigned <=) */

loc_00123ED0: ;
    edx = eax + eax * 2;
    SET_LO8(eax, MEM8(esp + 0x1C));
    MEM32(esp) = ecx;
    ecx = MEM32(0x7737A4);
    edx = edx << 7;
    MEM8(esp + 0xC) = LO8(eax);
    SET_LO8(eax, MEM8(0x7FA23C));
    edx = edx + ecx;
    (void)0; /* test LO8(eax), LO8(eax) - flags set for next jcc */
    MEM32(esp + 4) = edx;
    MEMF(esp + 8) = xmm1; /* movss */
    if (TEST_NZ(LO8(eax), LO8(eax))) goto loc_00123F04; /* jne: not equal / not zero */

loc_00123EFC: ;
    xmm0 = MEMF(0x7F9F4C); /* movss */

loc_00123F04: ;
    eax = MEM32(0x7737A0);
    PUSH32(esp, ebx);
    PUSH32(esp, esi);
    esi = MEM32(eax + 4);
    edx = MEM32(esi + 4);
    PUSH32(esp, edi);
    ecx = esp + 0xC;
    PUSH32(esp, ecx);
    PUSH32(esp, edx);
    PUSH32(esp, esi);
    MEMF(esp + 0x28) = xmm0; /* movss */
    MEM8(esp + 0x2C) = 0;
    ebx = eax;
    PUSH32(esp, 0); sub_001292C0(); /* call 0x001292C0 */

loc_00123F2B: ;
    ecx = 1;
    edx = ebx;
    edi = eax;
    PUSH32(esp, 0); sub_00129360(); /* call 0x00129360 */

loc_00123F39: ;
    MEM32(esi + 4) = edi;
    eax = MEM32(edi + 4);
    MEM32(eax) = edi;
    POP32(esp, edi);
    POP32(esp, esi);
    POP32(esp, ebx);

loc_00123F44: ;
    esp = esp + 0x18;
    esp += 4; return; /* ret */

}

/**
 * sub_00123F50
 * Original: 0x00123F50 - 0x00123F9A (74 bytes, 31 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00123F50(void)
{
    int _flags = 0; /* fallback flag var */

loc_00123F50: ;
    PUSH32(esp, ecx);
    PUSH32(esp, esi);
    esi = MEM32(0x7737A0);
    ecx = MEM32(esi + 4);
    eax = MEM32(ecx);
    if (CMP_EQ(eax, ecx)) goto loc_00123F97; /* je: equal / zero */

loc_00123F61: ;
    if (CMP_EQ(MEM32(eax + 8), edx)) goto loc_00123F6C; /* je: equal / zero */

loc_00123F66: ;
    eax = MEM32(eax);
    if (CMP_NE(eax, ecx)) goto loc_00123F61; /* jne: not equal / not zero */

loc_00123F6C: ;
    if (CMP_EQ(eax, ecx)) goto loc_00123F97; /* je: equal / zero */

loc_00123F70: ;
    ecx = MEM32(eax + 4);
    edx = MEM32(eax);
    MEM32(ecx) = edx;
    ecx = MEM32(eax);
    edx = MEM32(eax + 4);
    MEM32(esp + 4) = eax;
    eax = esp + 4;
    PUSH32(esp, eax);
    MEM32(ecx + 4) = edx;
    PUSH32(esp, 0); sub_002AF1C0(); /* call 0x002AF1C0 */

loc_00123F8D: ;
    eax = MEM32(esi + 8);
    esp = esp + 4;
    eax--;
    MEM32(esi + 8) = eax;

loc_00123F97: ;
    POP32(esp, esi);
    POP32(esp, ecx);
    esp += 4; return; /* ret */

}

/**
 * sub_00123FA0
 * Original: 0x00123FA0 - 0x00124024 (132 bytes, 42 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00123FA0(void)
{
    int _flags = 0; /* fallback flag var */

loc_00123FA0: ;
    eax = MEM32(0x84A19C);
    if (TEST_NZ(eax, eax)) goto loc_00123FAE; /* jne: not equal / not zero */

loc_00123FA9: ;
    PUSH32(esp, 0); sub_002AED70(); /* call 0x002AED70 */

loc_00123FAE: ;
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
    if (TEST_Z(esi, esi)) goto loc_00123FF8; /* je: equal / zero */

loc_00123FD6: ;
    if (CMP_B(MEM32(esi + 0x80), 0xC)) goto loc_00123FF8; /* jb: below (unsigned <) */

loc_00123FDF: ;
    ecx = 4;
    PUSH32(esp, 0); sub_003E62A0(); /* call 0x003E62A0 */

loc_00123FE9: ;
    PUSH32(esp, 0xC);
    PUSH32(esp, edi);
    PUSH32(esp, 0); sub_003E6BD0(); /* call 0x003E6BD0 */

loc_00123FF1: ;
    esp = esp + 8;
    if (TEST_NZ(eax, eax)) goto loc_00124015; /* jne: not equal / not zero */

loc_00123FF8: ;
    esi = MEM32(0x84A184);
    ecx = 4;
    edi = esi;
    PUSH32(esp, 0); sub_003E62A0(); /* call 0x003E62A0 */

loc_0012400A: ;
    PUSH32(esp, 0xC);
    PUSH32(esp, edi);
    PUSH32(esp, 0); sub_003E6BD0(); /* call 0x003E6BD0 */

loc_00124012: ;
    esp = esp + 8;

loc_00124015: ;
    ecx = 0; /* xor self */
    edx = eax;
    MEM32(edx) = ecx;
    MEM32(edx + 4) = ecx;
    POP32(esp, edi);
    MEM32(edx + 8) = ecx;
    POP32(esp, esi);
    esp += 4; return; /* ret */

}

/**
 * sub_00124030
 * Original: 0x00124030 - 0x001240F4 (196 bytes, 62 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00124030(void)
{
    int _flags = 0; /* fallback flag var */

loc_00124030: ;
    eax = MEM32(0x84A19C);
    if (TEST_NZ(eax, eax)) goto loc_0012403E; /* jne: not equal / not zero */

loc_00124039: ;
    PUSH32(esp, 0); sub_002AED70(); /* call 0x002AED70 */

loc_0012403E: ;
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
    if (TEST_Z(esi, esi)) goto loc_0012408A; /* je: equal / zero */

loc_00124066: ;
    if (CMP_B(MEM32(esi + 0x80), 0x7C)) goto loc_0012408A; /* jb: below (unsigned <) */

loc_0012406F: ;
    ecx = 0x10;
    PUSH32(esp, 0); sub_003E62A0(); /* call 0x003E62A0 */

loc_00124079: ;
    PUSH32(esp, 0x7C);
    PUSH32(esp, edi);
    PUSH32(esp, 0); sub_003E6BD0(); /* call 0x003E6BD0 */

loc_00124081: ;
    edx = eax;
    esp = esp + 8;
    if (TEST_NZ(edx, edx)) goto loc_001240AD; /* jne: not equal / not zero */

loc_0012408A: ;
    esi = MEM32(0x84A184);
    ecx = 0x10;
    edi = esi;
    PUSH32(esp, 0); sub_003E62A0(); /* call 0x003E62A0 */

loc_0012409C: ;
    PUSH32(esp, 0x7C);
    PUSH32(esp, edi);
    PUSH32(esp, 0); sub_003E6BD0(); /* call 0x003E6BD0 */

loc_001240A4: ;
    edx = eax;
    esp = esp + 8;
    if (TEST_Z(edx, edx)) goto loc_001240EF; /* je: equal / zero */

loc_001240AD: ;
    eax = 0; /* xor self */
    ecx = 0x1F;
    edi = edx;
    { uint32_t _i; for (_i = 0; _i < ecx; _i++) MEM32(edi + _i*4) = eax; }
    edi += ecx * 4; ecx = 0; /* rep stosd */
    ecx = MEM32(0x8493A4);
    (void)0; /* test ecx, ecx - flags set for next jcc */
    eax = 0x8493A0;
    if (TEST_Z(ecx, ecx)) goto loc_001240DC; /* je: equal / zero */

loc_001240C7: ;
    ecx = 0x8493A4;
    /* nop */

loc_001240D0: ;
    eax = MEM32(ecx);
    esi = MEM32(eax + 4);
    (void)0; /* test esi, esi - flags set for next jcc */
    ecx = eax + 4;
    if (TEST_NZ(esi, esi)) goto loc_001240D0; /* jne: not equal / not zero */

loc_001240DC: ;
    MEM32(eax + 4) = edx;
    MEM32(edx) = eax;
    SET_LO8(eax, MEM8(esp + 0xC));
    MEM32(edx + 4) = 0;
    MEM8(edx + 0x58) = LO8(eax);

loc_001240EF: ;
    POP32(esp, edi);
    eax = edx;
    POP32(esp, esi);
    esp += 4; return; /* ret */

}

/**
 * sub_00124100
 * Original: 0x00124100 - 0x0012420B (267 bytes, 70 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00124100(void)
{
    int _flags = 0; /* fallback flag var */
    float xmm0, xmm1, xmm2;

loc_00124100: ;
    esp = esp - 0x10;
    PUSH32(esp, esi);
    PUSH32(esp, 0);
    PUSH32(esp, 0); sub_00124030(); /* call 0x00124030 */

loc_0012410B: ;
    esi = eax;
    esp = esp + 4;
    if (TEST_Z(esi, esi)) goto loc_00124204; /* je: equal / zero */

loc_00124118: ;
    xmm0 = MEMF(esp + 0x24); /* movss */
    xmm1 = MEMF(esp + 0x1C); /* movss */
    xmm2 = MEMF(esp + 0x20); /* movss */
    MEMF(esi + 0x24) = xmm0; /* movss */
    MEMF(esi + 0x4C) = xmm0; /* movss */
    xmm0 = MEMF(esp + 0x18); /* movss */
    /* ucomiss xmm0, MEMF(0x649194) - sets EFLAGS */
    /* lahf - load AH from flags (used in FPU compare idiom) */
    (void)0; /* test HI8(eax), 0x44 - flags set for next jcc */
    PUSH32(esp, ebx);
    ecx = esi + 0xC;
    PUSH32(esp, edi);
    MEM32(esi + 8) = 0xA;
    MEM32(esi + 0x50) = 1;
    MEMF(ecx) = xmm0; /* movss */
    MEMF(esi + 0x10) = xmm1; /* movss */
    MEMF(esi + 0x14) = xmm2; /* movss */
    if (1 /* jnp after test - parity */) goto loc_00124174; /* jnp: not parity */

loc_00124168: ;
    edi = ecx;
    edx = MEM32(edi);
    eax = MEM32(edi + 4);
    edi = MEM32(edi + 8);
    goto loc_001241AA;

loc_00124174: ;
    MEMF(esp + 0xC) = xmm1; /* movss */
    eax = MEM32(esp + 0xC);
    xmm0 = MEMF(eax); /* movss */
    MEMF(esp + 0x10) = xmm0; /* movss */
    xmm0 = MEMF(eax + 4); /* movss */
    edx = MEM32(esp + 0x10);
    MEMF(esp + 0x14) = xmm0; /* movss */
    xmm0 = MEMF(eax + 8); /* movss */
    eax = MEM32(esp + 0x14);
    MEMF(esp + 0x18) = xmm0; /* movss */
    edi = MEM32(esp + 0x18);

loc_001241AA: ;
    xmm0 = MEMF(esp + 0x30); /* movss */
    ebx = ecx;
    MEM32(ebx) = edx;
    SET_LO8(edx, MEM8(esp + 0x40));
    MEM32(ebx + 4) = eax;
    SET_LO8(eax, MEM8(esp + 0x3C));
    MEM8(esi + 0x59) = LO8(eax);
    SET_LO8(eax, MEM8(esp + 0x44));
    MEMF(esi + 0x18) = xmm0; /* movss */
    xmm0 = MEMF(esp + 0x34); /* movss */
    MEMF(esi + 0x1C) = xmm0; /* movss */
    xmm0 = MEMF(esp + 0x38); /* movss */
    MEM8(esi + 0x5C) = LO8(eax);
    eax = ecx;
    MEM32(ebx + 8) = edi;
    MEMF(esi + 0x20) = xmm0; /* movss */
    MEM8(esi + 0x5A) = LO8(edx);
    MEM8(esi + 0x5B) = 0;
    PUSH32(esp, 0); sub_003CBB40(); /* call 0x003CBB40 */

loc_001241F5: ;
    PUSH32(esp, 0x870EEC);
    MEM32(esi + 0x60) = eax;
    PUSH32(esp, 0); sub_00129470(); /* call 0x00129470 */

loc_00124202: ;
    POP32(esp, edi);
    POP32(esp, ebx);

loc_00124204: ;
    eax = esi;
    POP32(esp, esi);
    esp = esp + 0x10;
    esp += 4; return; /* ret */

}

/**
 * sub_00124210
 * Original: 0x00124210 - 0x001242E7 (215 bytes, 70 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00124210(void)
{
    int _flags = 0; /* fallback flag var */
    float xmm0, xmm1;

loc_00124210: ;
    PUSH32(esp, esi);
    PUSH32(esp, 0);
    PUSH32(esp, 0); sub_00124030(); /* call 0x00124030 */

loc_00124218: ;
    esi = eax;
    esp = esp + 4;
    if (TEST_Z(esi, esi)) goto loc_001242E3; /* je: equal / zero */

loc_00124225: ;
    eax = MEM32(edi + 0x28);
    ecx = MEM32(eax * 4 + 0x6B4D50);
    xmm0 = 0.0f; /* xorps self = zero */
    ecx = ecx | 2;
    MEM32(esi + 8) = ecx;
    edx = MEM32(edi + 0x18);
    MEM32(esi + 0x18) = edx;
    eax = MEM32(edi + 0x1C);
    MEM32(esi + 0x1C) = eax;
    ecx = MEM32(edi + 0x20);
    MEM32(esi + 0x20) = ecx;
    edx = MEM32(edi + 0x28);
    MEM32(esi + 0x50) = edx;
    MEMF(esi + 0x54) = xmm0; /* movss */
    eax = MEM32(edi + 0x24);
    MEM32(esi + 0x24) = eax;
    ecx = MEM32(edi + 0x24);
    MEM32(esi + 0x4C) = ecx;
    edx = edi + 0xC;
    ecx = MEM32(edx);
    eax = esi + 0x38;
    MEM32(eax) = ecx;
    ecx = MEM32(edx + 4);
    MEM32(eax + 4) = ecx;
    edx = MEM32(edx + 8);
    MEM32(eax + 8) = edx;
    ecx = edi;
    edx = MEM32(ecx);
    eax = esi + 0xC;
    MEM32(eax) = edx;
    edx = MEM32(ecx + 4);
    MEM32(eax + 4) = edx;
    ecx = MEM32(ecx + 8);
    SET_LO8(edx, MEM8(esp + 8));
    MEM32(eax + 8) = ecx;
    SET_LO8(eax, MEM8(esp + 0xC));
    SET_LO8(ecx, MEM8(esp + 0x10));
    MEM8(esi + 0x5A) = LO8(eax);
    eax = edi;
    MEM8(esi + 0x59) = LO8(edx);
    MEM8(esi + 0x5C) = LO8(ecx);
    MEM8(esi + 0x5B) = 0;
    PUSH32(esp, 0); sub_003CBB40(); /* call 0x003CBB40 */

loc_001242AC: ;
    MEM32(esi + 0x60) = eax;
    if (TEST_Z(MEM8(edi + 0x2C), 2)) goto loc_001242B9; /* je: equal / zero */

loc_001242B5: ;
    MEM8(esi + 0x78) = 1;

loc_001242B9: ;
    PUSH32(esp, 0x870EEC);
    PUSH32(esp, 0); sub_00129470(); /* call 0x00129470 */

loc_001242C3: ;
    eax = 0; /* xor self */
    SET_LO8(eax, MEM8(edi + 0x2C));
    if (TEST_Z(LO8(eax), 8)) goto loc_001242E3; /* je: equal / zero */

loc_001242CC: ;
    xmm1 = MEMF(edi + 0x30); /* movss */
    SET_LO8(eax, LO8(eax) >> 4);
    ecx = esi;
    PUSH32(esp, eax);
    eax = ZX8(MEM8(edi + 0x2D));
    PUSH32(esp, 0); sub_00123EC0(); /* call 0x00123EC0 */

loc_001242E0: ;
    esp = esp + 4;

loc_001242E3: ;
    eax = esi;
    POP32(esp, esi);
    esp += 4; return; /* ret */

}

/**
 * sub_001242F0
 * Original: 0x001242F0 - 0x001243D1 (225 bytes, 73 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_001242F0(void)
{
    int _flags = 0; /* fallback flag var */
    float xmm0, xmm1;

loc_001242F0: ;
    PUSH32(esp, esi);
    PUSH32(esp, 1);
    PUSH32(esp, 0); sub_00124030(); /* call 0x00124030 */

loc_001242F8: ;
    esi = eax;
    esp = esp + 4;
    if (TEST_Z(esi, esi)) goto loc_001243CD; /* je: equal / zero */

loc_00124305: ;
    eax = MEM32(edi + 0x2C);
    ecx = MEM32(eax * 4 + 0x6B4D50);
    xmm0 = 0.0f; /* xorps self = zero */
    ecx = ecx | 1;
    MEM32(esi + 8) = ecx;
    edx = MEM32(edi + 0x18);
    MEM32(esi + 0x18) = edx;
    eax = MEM32(edi + 0x1C);
    MEM32(esi + 0x1C) = eax;
    ecx = MEM32(edi + 0x20);
    MEM32(esi + 0x20) = ecx;
    edx = MEM32(edi + 0x2C);
    MEM32(esi + 0x50) = edx;
    MEMF(esi + 0x54) = xmm0; /* movss */
    eax = MEM32(edi + 0x28);
    MEM32(esi + 0x24) = eax;
    ecx = MEM32(edi + 0x28);
    MEM32(esi + 0x4C) = ecx;
    edx = edi + 0xC;
    ecx = MEM32(edx);
    eax = esi + 0x38;
    MEM32(eax) = ecx;
    ecx = MEM32(edx + 4);
    MEM32(eax + 4) = ecx;
    edx = MEM32(edx + 8);
    MEM32(eax + 8) = edx;
    ecx = edi;
    edx = MEM32(ecx);
    eax = esi + 0xC;
    MEM32(eax) = edx;
    edx = MEM32(ecx + 4);
    MEM32(eax + 4) = edx;
    ecx = MEM32(ecx + 8);
    SET_LO8(edx, MEM8(esp + 8));
    MEM32(eax + 8) = ecx;
    SET_LO8(eax, MEM8(esp + 0xC));
    SET_LO8(ecx, MEM8(esp + 0x10));
    MEM8(esi + 0x5A) = LO8(eax);
    eax = edi;
    MEM8(esi + 0x59) = LO8(edx);
    MEM8(esi + 0x5C) = LO8(ecx);
    MEM8(esi + 0x5B) = 0;
    PUSH32(esp, 0); sub_003CBB40(); /* call 0x003CBB40 */

loc_0012438C: ;
    MEM32(esi + 0x60) = eax;
    MEM8(esi + 0x5D) = 0xFF;
    if (TEST_Z(MEM8(edi + 0x30), 2)) goto loc_0012439D; /* je: equal / zero */

loc_00124399: ;
    MEM8(esi + 0x78) = 1;

loc_0012439D: ;
    if (TEST_Z(MEM8(edi + 0x30), 1)) goto loc_001243AD; /* je: equal / zero */

loc_001243A3: ;
    PUSH32(esp, 0x870EEC);
    PUSH32(esp, 0); sub_00129470(); /* call 0x00129470 */

loc_001243AD: ;
    eax = 0; /* xor self */
    SET_LO8(eax, MEM8(edi + 0x30));
    if (TEST_Z(LO8(eax), 8)) goto loc_001243CD; /* je: equal / zero */

loc_001243B6: ;
    xmm1 = MEMF(edi + 0x34); /* movss */
    SET_LO8(eax, LO8(eax) >> 4);
    ecx = esi;
    PUSH32(esp, eax);
    eax = ZX8(MEM8(edi + 0x31));
    PUSH32(esp, 0); sub_00123EC0(); /* call 0x00123EC0 */

loc_001243CA: ;
    esp = esp + 4;

loc_001243CD: ;
    eax = esi;
    POP32(esp, esi);
    esp += 4; return; /* ret */

}

/**
 * sub_001243E0
 * Original: 0x001243E0 - 0x001244C7 (231 bytes, 74 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_001243E0(void)
{
    int _flags = 0; /* fallback flag var */
    float xmm0, xmm1;

loc_001243E0: ;
    PUSH32(esp, esi);
    PUSH32(esp, 0);
    PUSH32(esp, 0); sub_00124030(); /* call 0x00124030 */

loc_001243E8: ;
    esi = eax;
    esp = esp + 4;
    if (TEST_Z(esi, esi)) goto loc_001244C3; /* je: equal / zero */

loc_001243F5: ;
    eax = MEM32(edi + 0x28);
    ecx = MEM32(eax * 4 + 0x6B4D50);
    ecx = ecx | 3;
    MEM32(esi + 8) = ecx;
    edx = MEM32(edi + 0x18);
    MEM32(esi + 0x18) = edx;
    eax = MEM32(edi + 0x1C);
    MEM32(esi + 0x1C) = eax;
    ecx = MEM32(edi + 0x20);
    MEM32(esi + 0x20) = ecx;
    edx = MEM32(edi + 0x28);
    MEM32(esi + 0x50) = edx;
    xmm0 = MEMF(edi + 0x2C); /* movss */
    xmm0 = xmm0 * MEMF(0x648D10); /* mulss */
    MEMF(esi + 0x54) = xmm0; /* movss */
    eax = MEM32(edi + 0x24);
    MEM32(esi + 0x24) = eax;
    ecx = MEM32(edi + 0x24);
    MEM32(esi + 0x4C) = ecx;
    edx = edi + 0xC;
    ecx = MEM32(edx);
    eax = esi + 0x38;
    MEM32(eax) = ecx;
    ecx = MEM32(edx + 4);
    MEM32(eax + 4) = ecx;
    edx = MEM32(edx + 8);
    MEM32(eax + 8) = edx;
    ecx = edi;
    edx = MEM32(ecx);
    eax = esi + 0xC;
    MEM32(eax) = edx;
    edx = MEM32(ecx + 4);
    MEM32(eax + 4) = edx;
    ecx = MEM32(ecx + 8);
    SET_LO8(edx, MEM8(esp + 8));
    MEM32(eax + 8) = ecx;
    SET_LO8(eax, MEM8(esp + 0xC));
    SET_LO8(ecx, MEM8(esp + 0x10));
    MEM8(esi + 0x5A) = LO8(eax);
    eax = edi;
    MEM8(esi + 0x59) = LO8(edx);
    MEM8(esi + 0x5C) = LO8(ecx);
    MEM8(esi + 0x5B) = 0;
    PUSH32(esp, 0); sub_003CBB40(); /* call 0x003CBB40 */

loc_00124486: ;
    MEM32(esi + 0x60) = eax;
    (void)0; /* test MEM8(edi + 0x30), 2 - flags set for next jcc */
    SET_LO8(eax, 1);
    if (TEST_Z(MEM8(edi + 0x30), 2)) goto loc_00124494; /* je: equal / zero */

loc_00124491: ;
    MEM8(esi + 0x78) = LO8(eax);

loc_00124494: ;
    if (TEST_Z(MEM8(edi + 0x30), LO8(eax))) goto loc_001244A3; /* je: equal / zero */

loc_00124499: ;
    PUSH32(esp, 0x870EEC);
    PUSH32(esp, 0); sub_00129470(); /* call 0x00129470 */

loc_001244A3: ;
    eax = 0; /* xor self */
    SET_LO8(eax, MEM8(edi + 0x30));
    if (TEST_Z(LO8(eax), 8)) goto loc_001244C3; /* je: equal / zero */

loc_001244AC: ;
    xmm1 = MEMF(edi + 0x34); /* movss */
    SET_LO8(eax, LO8(eax) >> 4);
    ecx = esi;
    PUSH32(esp, eax);
    eax = ZX8(MEM8(edi + 0x31));
    PUSH32(esp, 0); sub_00123EC0(); /* call 0x00123EC0 */

loc_001244C0: ;
    esp = esp + 4;

loc_001244C3: ;
    eax = esi;
    POP32(esp, esi);
    esp += 4; return; /* ret */

}

/**
 * sub_001244D0
 * Original: 0x001244D0 - 0x0012481B (843 bytes, 203 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_001244D0(void)
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

loc_001244D0: ;
    PUSH32(esp, ecx);
    eax = MEM32(0x7737A0);
    eax = MEM32(eax + 4);
    ecx = MEM32(eax);
    PUSH32(esp, 0x123DF0);
    PUSH32(esp, eax);
    PUSH32(esp, ecx);
    ecx = esp + 0xC;
    PUSH32(esp, ecx);
    PUSH32(esp, 0); sub_00129430(); /* call 0x00129430 */

loc_001244EC: ;
    ecx = MEM32(0x8493A4);
    esp = esp + 0x10;
    if (TEST_Z(ecx, ecx)) goto loc_001245A6; /* je: equal / zero */

loc_001244FD: ;
    xmm0 = 0.0f; /* xorps self = zero */
    xmm2 = MEMF(0x648D14); /* movss */
    goto loc_00124510;

    /* nop */

loc_00124510: ;
    xmm1 = MEMF(ecx + 0x24); /* movss */
    /* ucomiss xmm1, xmm0 - sets EFLAGS */
    /* lahf - load AH from flags (used in FPU compare idiom) */
    if (1 /* jnp after test - parity */) goto loc_0012459B; /* jnp: not parity */

loc_0012451E: ;
    eax = MEM32(ecx + 8);
    edx = eax;
    edx = edx & 3;
    if (CMP_NE(LO8(edx), 3)) goto loc_00124533; /* jne: not equal / not zero */

loc_0012452B: ;
    fp_push(MEMF(ecx + 0x54)); /* fld float */
    /* FPU: fcos  */
    MEMF(ecx + 0x44) = (float)fp_top(); fp_popp(); /* fstp */

loc_00124533: ;
    eax = eax & 0x1C;
    if (CMP_EQ(eax, 4)) goto loc_00124582; /* je: equal / zero */

loc_0012453B: ;
    if (CMP_EQ(eax, 8)) goto loc_0012456C; /* je: equal / zero */

loc_00124540: ;
    if (CMP_EQ(eax, 0x10)) goto loc_00124551; /* je: equal / zero */

loc_00124545: ;
    MEMF(ecx + 0x28) = xmm2; /* movss */
    MEMF(ecx + 0x2C) = xmm0; /* movss */
    goto loc_00124591;

loc_00124551: ;
    xmm1 = MEMF(ecx + 0x24); /* movss */
    MEMF(ecx + 0x28) = xmm0; /* movss */
    MEMF(ecx + 0x2C) = xmm0; /* movss */
    MEMF(ecx + 0x30) = xmm0; /* movss */
    MEMF(ecx + 0x34) = xmm1; /* movss */
    goto loc_0012459B;

loc_0012456C: ;
    xmm1 = MEMF(ecx + 0x24); /* movss */
    MEMF(ecx + 0x28) = xmm0; /* movss */
    MEMF(ecx + 0x2C) = xmm0; /* movss */
    MEMF(ecx + 0x30) = xmm1; /* movss */
    goto loc_00124596;

loc_00124582: ;
    xmm1 = MEMF(ecx + 0x24); /* movss */
    MEMF(ecx + 0x28) = xmm0; /* movss */
    MEMF(ecx + 0x2C) = xmm1; /* movss */

loc_00124591: ;
    MEMF(ecx + 0x30) = xmm0; /* movss */

loc_00124596: ;
    MEMF(ecx + 0x34) = xmm0; /* movss */

loc_0012459B: ;
    ecx = MEM32(ecx + 4);
    if (TEST_NZ(ecx, ecx)) goto loc_00124510; /* jne: not equal / not zero */

loc_001245A6: ;
    if (CMP_NE(MEM32(0x8472A0), 4)) goto loc_00124819; /* jne: not equal / not zero */

loc_001245B3: ;
    eax = MEM32(0x773C70);
    (void)0; /* cmp eax, 0xFFFFFFFFu - flags set for next jcc */
    edx = MEM32(0x84B4A0);
    xmm0 = MEMF(0x648CEC); /* movss */
    if (CMP_EQ(eax, 0xFFFFFFFFu)) goto loc_00124639; /* je: equal / zero */

loc_001245CB: ;
    eax = (uint32_t)((int32_t)eax * (int32_t)0x78);
    ecx = ZX8(MEM8(eax + edx + 0x1A));
    eax = eax + edx + 0x18;
    xmm1 = (float)(int32_t)ecx; /* cvtsi2ss */
    ecx = ZX8(MEM8(eax + 1));
    xmm2 = (float)(int32_t)ecx; /* cvtsi2ss */
    SET_LO8(ecx, MEM8(0x773CD0));
    (void)0; /* test LO8(ecx), LO8(ecx) - flags set for next jcc */
    xmm1 = xmm1 * xmm0; /* mulss */
    xmm2 = xmm2 * xmm0; /* mulss */
    if (CMP_A(LO8(ecx) & LO8(ecx), 0)) goto loc_00124639; /* ja: above (unsigned >) */

loc_001245F5: ;
    eax = MEM32(eax);
    eax = eax & 0xFF;
    (void)0; /* test eax, eax - flags set for next jcc */
    MEM32(esp) = eax;
    fp_push((double)SMEM32(esp)); /* fild */
    if (CMP_GE(eax & eax, 0)) goto loc_0012460C; /* jge: greater or equal (signed >=) */

loc_00124606: ;
    fp_st1() += fp_top(); fp_pop(); /* fadd */

loc_0012460C: ;
    fp_st1() *= fp_top(); fp_pop(); /* fmul */
    MEMF(0x773CC8) = xmm2; /* movss */
    MEMF(0x773CCC) = xmm1; /* movss */
    MEM32(0x773C68) = 1;
    MEMF(0x773CC4) = (float)fp_top(); fp_popp(); /* fstp */
    MEM8(0x773CD0) = 0;

loc_00124639: ;
    eax = MEM32(0x773C6C);
    if (CMP_EQ(eax, 0xFFFFFFFFu)) goto loc_0012470F; /* je: equal / zero */

loc_00124647: ;
    eax = (uint32_t)((int32_t)eax * (int32_t)0x78);
    ecx = MEM32(eax + edx + 0x18);
    eax = eax + edx;
    ecx = ecx & 0xFF;
    (void)0; /* test ecx, ecx - flags set for next jcc */
    MEM32(esp) = ecx;
    fp_push((double)SMEM32(esp)); /* fild */
    if (CMP_GE(ecx & ecx, 0)) goto loc_00124666; /* jge: greater or equal (signed >=) */

loc_00124660: ;
    fp_st1() += fp_top(); fp_pop(); /* fadd */

loc_00124666: ;
    fp_st1() *= fp_top(); fp_pop(); /* fmul */
    MEMF(0x773CB8) = (float)fp_top(); fp_popp(); /* fstp */
    ecx = ZX8(MEM8(eax + 0x19));
    xmm1 = (float)(int32_t)ecx; /* cvtsi2ss */
    xmm1 = xmm1 * xmm0; /* mulss */
    MEMF(0x773CBC) = xmm1; /* movss */
    ecx = ZX8(MEM8(eax + 0x1A));
    xmm1 = (float)(int32_t)ecx; /* cvtsi2ss */
    xmm1 = xmm1 * xmm0; /* mulss */
    MEMF(0x773CC0) = xmm1; /* movss */
    ecx = MEM32(eax + 0x1C);
    ecx = ecx & 0xFF;
    (void)0; /* test ecx, ecx - flags set for next jcc */
    MEM32(esp) = ecx;
    fp_push((double)SMEM32(esp)); /* fild */
    if (CMP_GE(ecx & ecx, 0)) goto loc_001246B3; /* jge: greater or equal (signed >=) */

loc_001246AD: ;
    fp_st1() += fp_top(); fp_pop(); /* fadd */

loc_001246B3: ;
    fp_st1() *= fp_top(); fp_pop(); /* fmul */
    MEMF(0x773CAC) = (float)fp_top(); fp_popp(); /* fstp */
    ecx = ZX8(MEM8(eax + 0x1D));
    xmm1 = (float)(int32_t)ecx; /* cvtsi2ss */
    xmm1 = xmm1 * xmm0; /* mulss */
    MEMF(0x773CB0) = xmm1; /* movss */
    ecx = ZX8(MEM8(eax + 0x1E));
    xmm1 = (float)(int32_t)ecx; /* cvtsi2ss */
    xmm1 = xmm1 * xmm0; /* mulss */
    MEMF(0x773CB4) = xmm1; /* movss */
    ecx = ZX8(MEM8(eax + 0x1F));
    xmm1 = (float)(int32_t)ecx; /* cvtsi2ss */
    xmm1 = xmm1 * xmm0; /* mulss */
    MEMF(0x773C78) = xmm1; /* movss */
    eax = ZX8(MEM8(eax + 0x1B));
    xmm1 = (float)(int32_t)eax; /* cvtsi2ss */
    xmm1 = xmm1 * xmm0; /* mulss */
    MEMF(0x773C74) = xmm1; /* movss */

loc_0012470F: ;
    ecx = MEM32(0x8493A4);
    if (TEST_Z(ecx, ecx)) goto loc_00124819; /* je: equal / zero */

loc_0012471D: ;
    goto loc_00124730;

loc_0012471F: ;
    edx = MEM32(0x84B4A0);
    goto loc_00124730;

    /* nop */
    edi = edi;

loc_00124730: ;
    eax = MEM32(ecx + 0x60);
    if (CMP_EQ(eax, 0xFFFFFFFFu)) goto loc_0012480E; /* je: equal / zero */

loc_0012473C: ;
    eax = (uint32_t)((int32_t)eax * (int32_t)0x78);
    edx = MEM32(eax + edx + 0x18);
    edx = edx & 0xFF;
    (void)0; /* test edx, edx - flags set for next jcc */
    MEM32(esp) = edx;
    fp_push((double)SMEM32(esp)); /* fild */
    if (CMP_GE(edx & edx, 0)) goto loc_00124759; /* jge: greater or equal (signed >=) */

loc_00124753: ;
    fp_st1() += fp_top(); fp_pop(); /* fadd */

loc_00124759: ;
    fp_st1() *= fp_top(); fp_pop(); /* fmul */
    MEMF(ecx + 0x18) = (float)fp_top(); fp_popp(); /* fstp */
    edx = MEM32(0x84B4A0);
    edx = ZX8(MEM8(eax + edx + 0x19));
    xmm1 = (float)(int32_t)edx; /* cvtsi2ss */
    xmm1 = xmm1 * xmm0; /* mulss */
    MEMF(ecx + 0x1C) = xmm1; /* movss */
    edx = MEM32(0x84B4A0);
    edx = ZX8(MEM8(eax + edx + 0x1A));
    xmm1 = (float)(int32_t)edx; /* cvtsi2ss */
    edx = MEM32(ecx + 8);
    edx = edx & 3;
    edx = edx - 2;
    xmm1 = xmm1 * xmm0; /* mulss */
    MEMF(ecx + 0x20) = xmm1; /* movss */
    if ((edx != 0)) goto loc_0012480E; /* jne: not equal / not zero */

loc_0012479D: ;
    edx = MEM32(0x84B4A0);
    edx = (uint32_t)(int32_t)SMEM16(eax + edx);
    xmm1 = (float)(int32_t)edx; /* cvtsi2ss */
    MEMF(ecx + 0xC) = xmm1; /* movss */
    edx = MEM32(0x84B4A0);
    edx = (uint32_t)(int32_t)SMEM16(eax + edx + 2);
    xmm1 = (float)(int32_t)edx; /* cvtsi2ss */
    MEMF(ecx + 0x10) = xmm1; /* movss */
    edx = MEM32(0x84B4A0);
    edx = (uint32_t)(int32_t)SMEM16(eax + edx + 4);
    xmm1 = (float)(int32_t)edx; /* cvtsi2ss */
    MEMF(ecx + 0x14) = xmm1; /* movss */
    edx = MEM32(0x84B4A0);
    edx = ZX8(MEM8(eax + edx + 0x1D));
    xmm1 = (float)(int32_t)edx; /* cvtsi2ss */
    MEMF(ecx + 0x4C) = xmm1; /* movss */
    edx = MEM32(0x84B4A0);
    SET_LO8(edx, MEM8(eax + edx + 0x1B));
    SET_LO8(edx, LO8(edx) & 0x7F);
    MEM8(ecx + 0x59) = LO8(edx);
    edx = MEM32(0x84B4A0);
    eax = MEM32(eax + edx + 0x18);
    eax = eax >> 0x1F;
    SET_LO8(eax, LO8(eax) & 1);
    MEM8(ecx + 0x5A) = LO8(eax);

loc_0012480E: ;
    ecx = MEM32(ecx + 4);
    if (TEST_NZ(ecx, ecx)) goto loc_0012471F; /* jne: not equal / not zero */

loc_00124819: ;
    POP32(esp, ecx);
    esp += 4; return; /* ret */

    #undef fp_push
    #undef fp_pop
    #undef fp_popp
    #undef fp_top
    #undef fp_st1
}

/**
 * sub_00124820
 * Original: 0x00124820 - 0x00124837 (23 bytes, 5 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00124820(void)
{

loc_00124820: ;
    eax = 0; /* xor self */
    MEM32(0x819FE0) = eax;
    MEM32(0x819FE4) = eax;
    MEM32(0x81B7C0) = MEM32(0x81B7C0) & 0x80000000u;
    esp += 4; return; /* ret */

}

/**
 * sub_00124840
 * Original: 0x00124840 - 0x001248FC (188 bytes, 41 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00124840(void)
{
    int _flags = 0; /* fallback flag var */
    float xmm0, xmm1;

loc_00124840: ;
    xmm0 = 0.0f; /* xorps self = zero */
    xmm1 = MEMF(0x648D14); /* movss */
    eax = 0; /* xor self */
    MEM32(0x819FE0) = eax;
    MEM32(0x819FE4) = eax;
    eax = MEM32(0x81B7C0);
    eax = eax & 0x80000000u;
    PUSH32(esp, esi);
    MEM32(0x81B7C0) = eax;
    esi = 0x773D68;
    /* nop */

loc_00124870: ;
    edx = MEM32(esi + -48);
    ecx = MEM32(0x5A02CC);
    MEMF(esi + -4) = xmm0; /* movss */
    MEMF(esi) = xmm0; /* movss */
    MEMF(esi + 4) = xmm1; /* movss */
    edx = edx | 8;
    MEM32(esi + -48) = edx;
    edx = MEM32(0x5A02D0);
    eax = esi + -16;
    MEM32(eax) = ecx;
    ecx = MEM32(0x5A02D4);
    MEM32(eax + 4) = edx;
    MEM32(eax + 8) = ecx;
    MEMF(esi + -44) = xmm0; /* movss */
    MEMF(esi + -40) = xmm0; /* movss */
    MEMF(esi + -36) = xmm0; /* movss */
    MEMF(esi + -32) = xmm1; /* movss */
    ecx = esi + -56;
    MEM32(esi + -48) = 0xA;
    PUSH32(esp, 0); sub_003EA070(); /* call 0x003EA070 */

loc_001248C7: ;
    esi = esi + 0x4C;
    if (CMP_L(esi, 0x773F7C)) goto loc_00124870; /* jl: less (signed <) */

loc_001248D2: ;
    xmm0 = MEMF(0x648E14); /* movss */
    MEMF(0x74FB30) = xmm0; /* movss */
    MEMF(0x74FB34) = xmm0; /* movss */
    MEMF(0x74FB38) = xmm0; /* movss */
    MEMF(0x74FB3C) = xmm1; /* movss */
    POP32(esp, esi);
    esp += 4; return; /* ret */

}

/**
 * sub_00124900
 * Original: 0x00124900 - 0x00124A22 (290 bytes, 83 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00124900(void)
{
    uint32_t ebp;
    int _flags = 0; /* fallback flag var */
    float xmm0, xmm1, xmm3, xmm5;
    double _fp_stack[8];
    int _fp_top = 0;
    #define fp_push(v) (_fp_stack[--_fp_top & 7] = (v))
    #define fp_pop() (_fp_top++)
    #define fp_popp() (fp_pop())
    #define fp_top() _fp_stack[_fp_top & 7]
    #define fp_st1() _fp_stack[(_fp_top + 1) & 7]
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_00124900: ;
    ecx = MEM32(esi + 8);
    xmm3 = 0.0f; /* xorps self = zero */
    xmm5 = MEMF(0x648D14); /* movss */
    esp = esp - 0x10;
    PUSH32(esp, edi);
    edi = eax;
    eax = ecx;
    eax = eax & 3;
    eax--;
    if ((eax == 0)) goto loc_00124967; /* je: equal / zero */

loc_0012491C: ;
    eax--;
    if ((eax == 0)) goto loc_00124962; /* je: equal / zero */

loc_0012491F: ;
    eax--;
    if ((eax != 0)) goto loc_0012496E; /* jne: not equal / not zero */

loc_00124922: ;
    MEM32(edi + 8) = 3;
    fp_push(MEMF(esi + 0x54)); /* fld float */
    /* FPU: fcos  */
    MEMF(edi + 0x48) = xmm3; /* movss */
    MEMF(esp + 4) = (float)fp_top(); fp_popp(); /* fstp */
    fp_push(MEMF(0x648D14)); /* fld float */
    fp_st1() -= fp_top(); fp_pop(); /* fsub */
    xmm0 = MEMF(esp + 4); /* movss */
    xmm1 = xmm0; /* movaps */
    xmm1 = xmm1 - xmm5; /* subss */
    xmm0 = xmm0 / xmm1; /* divss */
    /* FPU: fdivr dword ptr [0x648d14] */
    MEMF(edi + 0x40) = xmm0; /* movss */
    MEMF(edi + 0x44) = (float)fp_top(); fp_popp(); /* fstp */
    goto loc_0012496E;

loc_00124962: ;
    MEM32(edi + 8) = ecx;
    goto loc_0012496E;

loc_00124967: ;
    MEM32(edi + 8) = 1;

loc_0012496E: ;
    eax = MEM32(esi + 8);
    eax = eax & 0xC;
    if (CMP_EQ(eax, 4)) goto loc_001249C3; /* je: equal / zero */

loc_00124979: ;
    if (CMP_NE(eax, 8)) goto loc_00124A05; /* jne: not equal / not zero */

loc_00124982: ;
    xmm0 = MEMF(esi + 0x24); /* movss */
    xmm1 = MEMF(0x649284); /* movss */
    /* comiss xmm0, xmm1 - sets EFLAGS */
    if ((xmm0 <= xmm1)) goto loc_00124997; /* jbe: below or equal (unsigned <=) */

loc_00124994: ;
    xmm1 = xmm0; /* movaps */

loc_00124997: ;
    xmm0 = xmm5; /* movaps */
    xmm0 = xmm0 / xmm1; /* divss */
    /* ucomiss xmm0, xmm3 - sets EFLAGS */
    /* lahf - load AH from flags (used in FPU compare idiom) */
    (void)0; /* test HI8(eax), 0x44 - flags set for next jcc */
    MEMF(esi + 0x24) = xmm1; /* movss */
    MEMF(edi + 0x34) = xmm3; /* movss */
    MEMF(edi + 0x38) = xmm3; /* movss */
    MEMF(edi + 0x3C) = xmm0; /* movss */
    if (1 /* jnp after test - parity */) goto loc_00124A05; /* jnp: not parity */

loc_001249BB: ;
    eax = MEM32(edi + 8);
    eax = eax | 8;
    goto loc_00124A02;

loc_001249C3: ;
    xmm0 = MEMF(esi + 0x24); /* movss */
    xmm1 = MEMF(0x649284); /* movss */
    /* comiss xmm0, xmm1 - sets EFLAGS */
    if ((xmm0 <= xmm1)) goto loc_001249D8; /* jbe: below or equal (unsigned <=) */

loc_001249D5: ;
    xmm1 = xmm0; /* movaps */

loc_001249D8: ;
    xmm0 = xmm5; /* movaps */
    xmm0 = xmm0 / xmm1; /* divss */
    /* ucomiss xmm0, xmm3 - sets EFLAGS */
    /* lahf - load AH from flags (used in FPU compare idiom) */
    (void)0; /* test HI8(eax), 0x44 - flags set for next jcc */
    MEMF(esi + 0x24) = xmm1; /* movss */
    MEMF(edi + 0x34) = xmm3; /* movss */
    MEMF(edi + 0x38) = xmm0; /* movss */
    MEMF(edi + 0x3C) = xmm3; /* movss */
    if (1 /* jnp after test - parity */) goto loc_00124A05; /* jnp: not parity */

loc_001249FC: ;
    eax = MEM32(edi + 8);
    eax = eax | 4;

loc_00124A02: ;
    MEM32(edi + 8) = eax;

loc_00124A05: ;
    xmm0 = MEMF(esi + 0xC); /* movss */
    /* ucomiss xmm0, MEMF(0x649194) - sets EFLAGS */
    /* lahf - load AH from flags (used in FPU compare idiom) */
    if (1 /* jnp after test - parity */) { sub_00124A22(); return; } /* jnp: not parity */

loc_00124A17: ;
    ecx = MEM32(esi + 0xC);
    eax = MEM32(esi + 0x10);
    edx = MEM32(esi + 0x14);
    g_seh_ebp = ebp; sub_00124A5D(); return; /* tail jmp 0x00124A5D */

    #undef fp_push
    #undef fp_pop
    #undef fp_popp
    #undef fp_top
    #undef fp_st1
}

/**
 * sub_00124B30
 * Original: 0x00124B30 - 0x00124B69 (57 bytes, 14 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00124B30(void)
{
    uint32_t ebp;
    int _flags = 0; /* fallback flag var */
    float xmm0, xmm1, xmm2, xmm3, xmm4;
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_00124B30: ;
    xmm4 = MEMF(0x648D18); /* movss */
    MEM32(ecx + 8) = 1;
    xmm1 = MEMF(eax + 8); /* movss */
    xmm2 = MEMF(eax + 4); /* movss */
    xmm0 = MEMF(eax); /* movss */
    xmm0 = xmm0 * xmm3; /* mulss */
    xmm1 = xmm1 * xmm3; /* mulss */
    xmm2 = xmm2 * xmm3; /* mulss */
    xmm3 = 0.0f; /* xorps self = zero */
    esp = esp - 0xC;
    /* comiss xmm3, xmm0 - sets EFLAGS */
    if ((xmm3 <= xmm0)) { sub_00124B69(); return; } /* jbe: below or equal (unsigned <=) */

loc_00124B64: ;
    xmm0 = xmm3; /* movaps */
    g_seh_ebp = ebp; sub_00124B71(); return; /* tail jmp 0x00124B71 */

}

/**
 * sub_00124C10
 * Original: 0x00124C10 - 0x00124C96 (134 bytes, 34 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00124C10(void)
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

loc_00124C10: ;
    PUSH32(esp, ecx);
    xmm0 = MEMF(ecx + 0x20); /* movss */
    xmm0 = xmm0 * MEMF(0x649670); /* mulss */
    xmm1 = MEMF(ecx + 0x1C); /* movss */
    xmm1 = xmm1 * MEMF(0x649674); /* mulss */
    xmm0 = xmm0 + xmm1; /* addss */
    xmm1 = MEMF(ecx + 0x18); /* movss */
    xmm1 = xmm1 * MEMF(0x648D3C); /* mulss */
    xmm0 = xmm0 + xmm1; /* addss */
    /* ucomiss xmm0, MEMF(0x648CF8) - sets EFLAGS */
    xmm1 = MEMF(esp + 8); /* movss */
    /* lahf - load AH from flags (used in FPU compare idiom) */
    if (1 /* jnp after test - parity */) goto loc_00124C5D; /* jnp: not parity */

loc_00124C53: ;
    xmm1 = xmm1 / xmm0; /* divss */
    MEMF(esp + 8) = xmm1; /* movss */

loc_00124C5D: ;
    eax = MEM32(ecx + 8);
    eax = eax & 0xC;
    if (CMP_EQ(eax, 4)) { sub_00124C96(); return; } /* je: equal / zero */

loc_00124C68: ;
    if (CMP_EQ(eax, 8)) goto loc_00124C77; /* je: equal / zero */

loc_00124C6D: ;
    xmm0 = MEMF(0x648E84); /* movss */
    POP32(esp, ecx);
    esp += 4; return; /* ret */

loc_00124C77: ;
    fp_push(MEMF(0x648D14)); /* fld float */
    fp_st1() /= fp_top(); fp_pop(); /* fdiv */
    fp_st1() *= fp_top(); fp_pop(); /* fmul */
    /* FPU: fdivr dword ptr [0x648d14] */
    fp_top() = sqrt(fp_top()); /* fsqrt */
    MEMF(esp) = (float)fp_top(); fp_popp(); /* fstp */
    xmm0 = MEMF(esp); /* movss */
    POP32(esp, ecx);
    esp += 4; return; /* ret */

    #undef fp_push
    #undef fp_pop
    #undef fp_popp
    #undef fp_top
    #undef fp_st1
}

/**
 * sub_00124CB0
 * Original: 0x00124CB0 - 0x00124CD2 (34 bytes, 13 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00124CB0(void)
{
    int _flags = 0; /* fallback flag var */
    float xmm0;

loc_00124CB0: ;
    edx = MEM32(esp + 4);
    esp = esp - 0x40;
    PUSH32(esp, edi);
    edi = eax;
    SET_LO8(eax, MEM8(edi + 0x78));
    if (TEST_Z(LO8(eax), LO8(eax))) { sub_00124CD2(); return; } /* je: equal / zero */

loc_00124CC1: ;
    if (CMP_EQ(MEM8(0x76F0E0), 1)) { sub_00124CD2(); return; } /* je: equal / zero */

loc_00124CCA: ;
    xmm0 = 0.0f; /* xorps self = zero */
    POP32(esp, edi);
    esp = esp + 0x40;
    esp += 4; return; /* ret */

}

/**
 * sub_00124F90
 * Original: 0x00124F90 - 0x00125000 (112 bytes, 25 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00124F90(void)
{
    int _flags = 0; /* fallback flag var */

loc_00124F90: ;
    eax = MEM32(0x81B7C0);
    PUSH32(esp, esi);
    esi = 0; /* xor self */
    MEM32(0x819FE0) = esi;
    MEM32(0x819FE4) = esi;
    eax = eax & 0x80000000u;
    MEM32(0x81B7C0) = eax;
    eax = MEM32(0x85D5B4);
    ecx = eax + 0x200;
    MEM32(ecx) = esi;
    MEM32(ecx + 4) = esi;
    MEM32(eax + 0x24C) = esi;
    MEM32(eax + 0x250) = esi;
    MEM32(eax + 0x298) = esi;
    MEM32(eax + 0x29C) = esi;
    MEM32(eax + 0x2E4) = esi;
    MEM32(eax + 0x2E8) = esi;

loc_00124FE2: ;
    eax = MEM32(0x85D5B4);
    ecx = esi + eax + 0x200;
    PUSH32(esp, 0); sub_003EA070(); /* call 0x003EA070 */

loc_00124FF3: ;
    esi = esi + 0x4C;
    if (CMP_L(esi, 0x130)) goto loc_00124FE2; /* jl: less (signed <) */

loc_00124FFE: ;
    POP32(esp, esi);
    esp += 4; return; /* ret */

}

/**
 * sub_00125000
 * Original: 0x00125000 - 0x0012506D (109 bytes, 32 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00125000(void)
{
    uint32_t ebp;
    int _flags = 0; /* fallback flag var */
    float xmm0;

loc_00125000: ;
    PUSH32(esp, ebp);
    ebp = esp;
    esp = esp & 0xFFFFFFF0u;
    esp = esp - 0xA4;
    MEMF(esp + 0x1C) = xmm0; /* movss */
    xmm0 = MEMF(ebp + 8); /* movss */
    eax = MEM32(esp + 0x1C);
    MEMF(esp + 0x20) = xmm0; /* movss */
    xmm0 = MEMF(ebp + 0xC); /* movss */
    ecx = MEM32(esp + 0x20);
    PUSH32(esp, ebx);
    SET_LO8(ebx, MEM8(ebp + 0x14));
    MEMF(esp + 0x28) = xmm0; /* movss */
    edx = MEM32(esp + 0x28);
    xmm0 = MEMF(0x648CE4); /* movss */
    PUSH32(esp, esi);
    PUSH32(esp, edi);
    esi = esp + 0x40;
    MEM32(esp + 0x40) = eax;
    MEM32(esp + 0x44) = ecx;
    MEM32(esp + 0x48) = edx;
    MEMF(esp + 0x4C) = xmm0; /* movss */
    PUSH32(esp, 0); sub_0012E260(); /* call 0x0012E260 */

loc_0012505D: ;
    if (TEST_Z(LO8(eax), LO8(eax))) { sub_0012506D(); return; } /* je: equal / zero */

loc_00125061: ;
    PUSH32(esp, 0); sub_00124F90(); /* call 0x00124F90 */

loc_00125066: ;
    POP32(esp, edi);
    POP32(esp, esi);
    POP32(esp, ebx);
    esp = ebp;
    POP32(esp, ebp);
    esp += 4; return; /* ret */

}

/**
 * sub_001254A0
 * Original: 0x001254A0 - 0x001254FF (95 bytes, 46 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_001254A0(void)
{
    uint32_t ebp;
    int _flags = 0; /* fallback flag var */

loc_001254A0: ;
    PUSH32(esp, ebp);
    ebp = esp;
    esp = esp & 0xFFFFFFF0u;
    esp = esp - 0x554;
    eax = MEM32(0x8493BC);
    (void)0; /* test eax, eax - flags set for next jcc */
    PUSH32(esp, ebx);
    PUSH32(esp, esi);
    PUSH32(esp, edi);
    if (TEST_NZ(eax, eax)) { sub_001254FF(); return; } /* jne: not equal / not zero */

loc_001254B8: ;
    eax = MEM32(ebp + 0x3C);
    ecx = MEM32(ebp + 0x38);
    edx = MEM32(ebp + 0x34);
    PUSH32(esp, eax);
    eax = MEM32(ebp + 0x30);
    PUSH32(esp, ecx);
    ecx = MEM32(ebp + 0x2C);
    PUSH32(esp, edx);
    edx = MEM32(ebp + 0x28);
    PUSH32(esp, eax);
    eax = MEM32(ebp + 0x24);
    PUSH32(esp, ecx);
    ecx = MEM32(ebp + 0x20);
    PUSH32(esp, edx);
    edx = MEM32(ebp + 0x1C);
    PUSH32(esp, eax);
    eax = MEM32(ebp + 0x18);
    PUSH32(esp, ecx);
    ecx = MEM32(ebp + 0x14);
    PUSH32(esp, edx);
    edx = MEM32(ebp + 0x10);
    PUSH32(esp, eax);
    eax = MEM32(ebp + 0xC);
    PUSH32(esp, ecx);
    ecx = MEM32(ebp + 8);
    PUSH32(esp, edx);
    PUSH32(esp, eax);
    PUSH32(esp, ecx);
    PUSH32(esp, 0); sub_00127B60(); /* call 0x00127B60 */

loc_001254F5: ;
    esp = esp + 0x38;
    POP32(esp, edi);
    POP32(esp, esi);
    POP32(esp, ebx);
    esp = ebp;
    POP32(esp, ebp);
    esp += 4; return; /* ret */

}

/**
 * sub_001265A0
 * Original: 0x001265A0 - 0x001276C1 (4385 bytes, 999 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_001265A0(void)
{
    uint32_t ebp;
    int _flags = 0; /* fallback flag var */
    float xmm0, xmm1, xmm2, xmm3, xmm4, xmm5, xmm6, xmm7;

loc_001265A0: ;
    PUSH32(esp, ebp);
    ebp = esp;
    esp = esp & 0xFFFFFFF0u;
    esp = esp - 0x564;
    eax = MEM32(0x8493BC);
    (void)0; /* test eax, eax - flags set for next jcc */
    PUSH32(esp, ebx);
    ebx = MEM32(ebp + 0x1C);
    PUSH32(esp, esi);
    PUSH32(esp, edi);
    if (TEST_Z(eax, eax)) goto loc_001276BA; /* je: equal / zero */

loc_001265BF: ;
    edx = MEM32(0x85D5B4);
    esi = MEM32(ebp + 8);
    MEM32(edx + 0xE0) = 0;
    eax = 0; /* xor self */
    ecx = 0x24;
    edi = edx;
    { uint32_t _i; for (_i = 0; _i < ecx; _i++) MEM32(edi + _i*4) = eax; }
    edi += ecx * 4; ecx = 0; /* rep stosd */
    MEM8(edx + 0x338) = 1;
    eax = MEM32(0x85D5B4);
    esi = esi + 0x10;
    edi = eax + 0xA0;
    ecx = 0x10;
    memcpy((void*)XBOX_PTR(edi), (void*)XBOX_PTR(esi), ecx * 4);
    esi += ecx * 4; edi += ecx * 4; ecx = 0; /* rep movsd */
    MEM32(eax + 0x334) = MEM32(eax + 0x334) + 1;
    ecx = MEM32(0x7F9F60);
    MEM32(eax + 0x330) = ecx;
    SET_LO8(eax, MEM8(ebp + 0x34));
    (void)0; /* test LO8(eax), LO8(eax) - flags set for next jcc */
    MEM8(0x8493C8) = 1;
    if (TEST_Z(LO8(eax), LO8(eax))) goto loc_00126649; /* je: equal / zero */

loc_00126619: ;
    PUSH32(esp, 0);
    PUSH32(esp, 0x3FC90FDB);
    PUSH32(esp, 0x3DCCCCCD);
    PUSH32(esp, 0x3FC00000);
    edi = esp + 0x30;
    esi = esp + 0x2C;
    PUSH32(esp, 0); sub_001276E0(); /* call 0x001276E0 */

loc_00126637: ;
    edx = MEM32(esp + 0x30);
    eax = MEM32(esp + 0x2C);
    PUSH32(esp, edx);
    PUSH32(esp, eax);
    PUSH32(esp, 0); sub_0012F1D0(); /* call 0x0012F1D0 */

loc_00126646: ;
    esp = esp + 0x18;

loc_00126649: ;
    eax = MEM32(0x85D5B4);
    xmm0 = MEMF(ebp + 0xC); /* movss */
    MEMF(esp + 0x24) = xmm0; /* movss */
    xmm0 = MEMF(ebp + 0x10); /* movss */
    esi = MEM32(esp + 0x24);
    MEMF(esp + 0x28) = xmm0; /* movss */
    xmm0 = MEMF(ebp + 0x14); /* movss */
    edi = MEM32(esp + 0x28);
    ecx = eax + 0x90;
    MEM32(ecx) = esi;
    MEMF(esp + 0x2C) = xmm0; /* movss */
    edx = MEM32(esp + 0x2C);
    xmm0 = MEMF(ebp + 0x38); /* movss */
    MEM32(ecx + 4) = edi;
    PUSH32(esp, eax);
    MEM32(ecx + 8) = edx;
    MEMF(eax + 0x9C) = xmm0; /* movss */
    PUSH32(esp, 0); sub_0012D380(); /* call 0x0012D380 */

loc_0012669C: ;
    if (TEST_Z(ebx, ebx)) goto loc_001266CF; /* je: equal / zero */

loc_001266A0: ;
    eax = MEM32(0x85D5B4);
    xmm0 = MEMF(ebx + 8); /* movss */
    xmm1 = MEMF(ebx + 4); /* movss */
    xmm2 = MEMF(eax); /* movss */
    xmm2 = xmm2 + MEMF(ebx); /* addss */
    xmm1 = xmm1 + MEMF(eax + 0x30); /* addss */
    xmm0 = xmm0 + MEMF(eax + 0x60); /* addss */
    MEMF(eax) = xmm2; /* movss */
    MEMF(eax + 0x30) = xmm1; /* movss */
    MEMF(eax + 0x60) = xmm0; /* movss */

loc_001266CF: ;
    eax = esp + 0x24;
    PUSH32(esp, 0); sub_003CBB40(); /* call 0x003CBB40 */

loc_001266D8: ;
    ecx = MEM32(ebp + 0x24);
    edx = MEM32(esp + 0x2C);
    xmm0 = MEMF(ebp + 0x38); /* movss */
    ebx = eax;
    eax = MEM32(ebp + 0x28);
    esp = esp - 0x20;
    MEM32(esp + 0xA0) = ecx;
    MEM32(esp + 0x9C) = eax;
    eax = MEM32(ebp + 0x18);
    MEM32(esp + 0xA8) = esi;
    MEM32(esp + 0xAC) = edi;
    edi = esp;
    MEM32(esp + 0xB0) = edx;
    MEMF(esp + 0xB4) = xmm0; /* movss */
    ecx = 8;
    esi = esp + 0x98;
    MEM32(esp + 0x98) = 0;
    MEM32(esp + 0xA4) = ebx;
    memcpy((void*)XBOX_PTR(edi), (void*)XBOX_PTR(esi), ecx * 4);
    esi += ecx * 4; edi += ecx * 4; ecx = 0; /* rep movsd */
    ecx = eax * 4 + -1;
    PUSH32(esp, ecx);
    edx = esp + 0x134;
    PUSH32(esp, edx);
    PUSH32(esp, 0x870EEC);
    eax = esp + 0x50;
    PUSH32(esp, 0); sub_00129520(); /* call 0x00129520 */

loc_0012675B: ;
    edi = eax;
    eax = MEM32(ebp + 0x20);
    (void)0; /* test eax, eax - flags set for next jcc */
    MEM32(esp + 0x50) = edi;
    if (TEST_Z(eax, eax)) goto loc_0012676B; /* je: equal / zero */

loc_00126768: ;
    MEM8(eax) = 0;

loc_0012676B: ;
    eax = MEM32(ebp + 0x2C);
    esi = 0; /* xor self */
    if (TEST_NZ(eax, eax)) goto loc_00126871; /* jne: not equal / not zero */

loc_00126778: ;
    if (CMP_LE(edi & edi, 0)) goto loc_0012684A; /* jle: less or equal (signed <=) */

loc_00126780: ;
    eax = esp + 0x1F0;
    MEM32(esp + 0x30) = eax;
    goto loc_00126790;

    /* nop */

loc_00126790: ;
    xmm0 = MEMF(0x648D14); /* movss */
    MEMF(esp + 0x18) = xmm0; /* movss */
    xmm0 = MEMF(ebp + 0x38); /* movss */
    /* ucomiss xmm0, MEMF(0x648CF8) - sets EFLAGS */
    /* lahf - load AH from flags (used in FPU compare idiom) */
    if (1 /* jnp after test - parity */) goto loc_001267FE; /* jnp: not parity */

loc_001267B0: ;
    eax = MEM32(esp + esi * 4 + 0x110);
    ecx = MEM32(esp + 0x24);
    edx = MEM32(esp + 0x28);
    edi = eax + 0xC;
    PUSH32(esp, edi);
    esp = esp - 0x10;
    edi = esp;
    MEM32(edi) = ecx;
    ecx = MEM32(esp + 0x40);
    MEM32(edi + 4) = edx;
    MEM32(edi + 8) = ecx;
    MEMF(esp + 0x98) = xmm0; /* movss */
    ecx = MEM32(esp + 0x98);
    MEM32(edi + 0xC) = ecx;
    ecx = MEM32(eax + 0x60);
    edx = ebx;
    PUSH32(esp, 0); sub_003CB6D0(); /* call 0x003CB6D0 */

loc_001267F1: ;
    edi = MEM32(esp + 0x64);
    esp = esp + 0x14;
    MEMF(esp + 0x18) = xmm0; /* movss */

loc_001267FE: ;
    edx = MEM32(esp + 0x18);
    eax = MEM32(esp + 0x30);
    ecx = MEM32(esp + esi * 4 + 0x110);
    PUSH32(esp, edx);
    PUSH32(esp, eax);
    PUSH32(esp, ecx);
    PUSH32(esp, 0); sub_0012EAB0(); /* call 0x0012EAB0 */

loc_00126815: ;
    ecx = MEM32(esp + 0x3C);
    esp = esp + 0xC;
    esi++;
    ecx = ecx + 0x10;
    (void)0; /* cmp esi, edi - flags set for next jcc */
    MEM32(esp + 0x30) = ecx;
    if (CMP_L(esi, edi)) goto loc_00126790; /* jl: less (signed <) */

loc_0012682C: ;
    if (CMP_LE(edi & edi, 0)) goto loc_0012684A; /* jle: less or equal (signed <=) */

loc_00126830: ;
    edx = MEM32(0x85D5B4);
    eax = MEM32(esp + 0x110);
    PUSH32(esp, 0x3F800000);
    PUSH32(esp, 0);
    PUSH32(esp, edx);
    PUSH32(esp, 0); sub_0012D7D0(); /* call 0x0012D7D0 */

loc_0012684A: ;
    if (CMP_LE(edi, 1)) goto loc_001274E6; /* jle: less or equal (signed <=) */

loc_00126853: ;
    eax = MEM32(0x85D5B4);
    PUSH32(esp, 0x3F800000);
    PUSH32(esp, 1);
    PUSH32(esp, eax);
    eax = MEM32(esp + 0x120);
    PUSH32(esp, 0); sub_0012D7D0(); /* call 0x0012D7D0 */

loc_0012686C: ;
    goto loc_001274E6;

loc_00126871: ;
    if (CMP_LE(edi & edi, 0)) goto loc_0012692C; /* jle: less or equal (signed <=) */

loc_00126879: ;
    ecx = esp + 0x1F0;
    MEM32(esp + 0x30) = ecx;
    goto loc_00126890;

    /* nop */
    /* nop */

loc_00126890: ;
    xmm0 = MEMF(0x648D14); /* movss */
    MEMF(esp + 0x18) = xmm0; /* movss */
    xmm0 = MEMF(ebp + 0x38); /* movss */
    /* ucomiss xmm0, MEMF(0x648CF8) - sets EFLAGS */
    /* lahf - load AH from flags (used in FPU compare idiom) */
    if (1 /* jnp after test - parity */) goto loc_001268FE; /* jnp: not parity */

loc_001268B0: ;
    eax = MEM32(esp + esi * 4 + 0x110);
    ecx = MEM32(esp + 0x24);
    edx = MEM32(esp + 0x28);
    edi = eax + 0xC;
    PUSH32(esp, edi);
    esp = esp - 0x10;
    edi = esp;
    MEM32(edi) = ecx;
    ecx = MEM32(esp + 0x40);
    MEM32(edi + 4) = edx;
    MEMF(esp + 0x98) = xmm0; /* movss */
    edx = MEM32(esp + 0x98);
    MEM32(edi + 8) = ecx;
    ecx = MEM32(eax + 0x60);
    MEM32(edi + 0xC) = edx;
    edx = ebx;
    PUSH32(esp, 0); sub_003CB6D0(); /* call 0x003CB6D0 */

loc_001268F1: ;
    edi = MEM32(esp + 0x64);
    esp = esp + 0x14;
    MEMF(esp + 0x18) = xmm0; /* movss */

loc_001268FE: ;
    eax = MEM32(esp + 0x18);
    ecx = MEM32(esp + 0x30);
    edx = MEM32(esp + esi * 4 + 0x110);
    PUSH32(esp, eax);
    PUSH32(esp, ecx);
    PUSH32(esp, edx);
    PUSH32(esp, 0); sub_0012EAB0(); /* call 0x0012EAB0 */

loc_00126915: ;
    ecx = MEM32(esp + 0x3C);
    esp = esp + 0xC;
    esi++;
    ecx = ecx + 0x10;
    (void)0; /* cmp esi, edi - flags set for next jcc */
    MEM32(esp + 0x30) = ecx;
    if (CMP_L(esi, edi)) goto loc_00126890; /* jl: less (signed <) */

loc_0012692C: ;
    ebx = 0; /* xor self */
    ecx = 0; /* xor self */
    (void)0; /* test edi, edi - flags set for next jcc */
    MEM32(esp + 0x20) = ebx;
    if (CMP_LE(edi & edi, 0)) goto loc_001269A0; /* jle: less or equal (signed <=) */

loc_00126938: ;
    eax = esp + 0x1F0;
    edx = eax;
    MEM32(esp + 0x30) = eax;
    MEM32(esp + 0x50) = edx;
    /* nop */

loc_00126950: ;
    eax = MEM32(esp + ecx * 4 + 0x110);
    if (TEST_NZ(MEM8(eax + 0x59), 1)) goto loc_0012698C; /* jne: not equal / not zero */

loc_0012695D: ;
    edx = MEM32(esp + 0x30);
    MEM32(esp + ebx * 4 + 0x110) = eax;
    eax = MEM32(esp + 0x50);
    esi = MEM32(eax);
    MEM32(edx) = esi;
    esi = MEM32(eax + 4);
    MEM32(edx + 4) = esi;
    esi = MEM32(eax + 8);
    MEM32(edx + 8) = esi;
    eax = MEM32(eax + 0xC);
    MEM32(edx + 0xC) = eax;
    eax = edx;
    ebx++;
    eax = eax + 0x10;
    MEM32(esp + 0x30) = eax;

loc_0012698C: ;
    edx = MEM32(esp + 0x50);
    ecx++;
    edx = edx + 0x10;
    (void)0; /* cmp ecx, edi - flags set for next jcc */
    MEM32(esp + 0x50) = edx;
    if (CMP_L(ecx, edi)) goto loc_00126950; /* jl: less (signed <) */

loc_0012699C: ;
    MEM32(esp + 0x20) = ebx;

loc_001269A0: ;
    ecx = MEM32(ebp + 0x2C);
    eax = MEM32(ecx);
    xmm1 = MEMF(0x648D34); /* movss */
    xmm0 = 0.0f; /* xorps self = zero */
    xmm3 = MEMF(0x648CEC); /* movss */
    esi = MEM32(0x85D5B4);
    edx = eax;
    edx = edx >> 0x10;
    ecx = ZX8(LO8(edx));
    edx = eax;
    MEMF(esp + 0x38) = xmm1; /* movss */
    edx = edx >> 8;
    xmm1 = (float)(int32_t)ecx; /* cvtsi2ss */
    xmm1 = xmm1 * xmm3; /* mulss */
    ecx = ZX8(LO8(edx));
    MEMF(esp + 0x34) = xmm0; /* movss */
    MEMF(esp + 0x3C) = xmm0; /* movss */
    edx = ZX8(LO8(eax));
    xmm0 = (float)(int32_t)ecx; /* cvtsi2ss */
    xmm0 = xmm0 * xmm3; /* mulss */
    xmm2 = (float)(int32_t)edx; /* cvtsi2ss */
    xmm2 = xmm2 * xmm3; /* mulss */
    xmm3 = xmm2; /* movaps */
    xmm3 = xmm3 * xmm2; /* mulss */
    esp = esp - 8;
    MEMF(esp + 0x88) = xmm2; /* movss */
    xmm2 = MEMF(0x648E64); /* movss */
    xmm3 = xmm3 * xmm2; /* mulss */
    MEMF(esp + 4) = xmm3; /* movss */
    xmm3 = xmm0; /* movaps */
    xmm3 = xmm3 * xmm0; /* mulss */
    MEMF(esp + 0x84) = xmm0; /* movss */
    xmm3 = xmm3 * xmm2; /* mulss */
    eax = esp + 0x3C;
    MEMF(esp) = xmm3; /* movss */
    xmm0 = xmm1; /* movaps */
    xmm0 = xmm0 * xmm1; /* mulss */
    PUSH32(esp, eax);
    MEM32(esp + 0x5C) = ebx;
    MEMF(esp + 0x84) = xmm1; /* movss */
    xmm0 = xmm0 * xmm2; /* mulss */
    PUSH32(esp, 0); sub_0012E100(); /* call 0x0012E100 */

loc_00126A5B: ;
    eax = MEM32(0x8493BC);
    if (TEST_Z(eax, eax)) goto loc_001274A5; /* je: equal / zero */

loc_00126A68: ;
    SET_LO8(ecx, MEM8(eax + 0x5C));
    edi = MEM32(ebp + 0x30);
    (void)0; /* test LO8(ecx), LO8(ecx) - flags set for next jcc */
    SET_LO8(ecx, (TEST_NZ(LO8(ecx), LO8(ecx))) ? 1 : 0); /* setne */
    if (TEST_Z(LO8(ecx), LO8(ecx))) goto loc_00126D6B; /* je: equal / zero */

loc_00126A7B: ;
    if (TEST_Z(edi, edi)) goto loc_00126D6B; /* je: equal / zero */

loc_00126A83: ;
    SET_LO8(ecx, MEM8(ebp + 0x34));
    if (TEST_NZ(LO8(ecx), LO8(ecx))) goto loc_00126D6B; /* jne: not equal / not zero */

loc_00126A8E: ;
    if (CMP_G(ebx, 2)) goto loc_00126D6B; /* jg: greater (signed >) */

loc_00126A97: ;
    if (CMP_L(ebx, 1)) goto loc_00126D6B; /* jl: less (signed <) */

loc_00126AA0: ;
    xmm0 = 0.0f; /* xorps self = zero */
    xmm1 = MEMF(0x648D14); /* movss */
    ecx = esp + 0x34;
    PUSH32(esp, ecx);
    edx = esp + 0xAC;
    MEMF(esp + 0x38) = xmm0; /* movss */
    MEMF(esp + 0x3C) = xmm1; /* movss */
    MEMF(esp + 0x40) = xmm0; /* movss */
    PUSH32(esp, 0); sub_0012F160(); /* call 0x0012F160 */

loc_00126ACE: ;
    edx = MEM32(0x8493BC);
    xmm0 = MEMF(edx + 0x60); /* movss */
    eax = esp + 0xAC;
    ecx = eax;
    esp = esp + 4;
    MEMF(esp + 0x18) = xmm0; /* movss */
    MEM32(esp + 0x1C) = eax;
    MEM32(esp + 0x20) = ecx;
    xmm0 = MEMF(esp + 0x18); /* movss */
    /* shufps xmm0, xmm0, 0 */
    edx = MEM32(esp + 0x1C);
    xmm1 = MEMF(edx); /* movss */
    xmm1 = MEMD(edx + 4); /* movhps */
    /* mulps: xmm0 *= xmm1 (packed 4xfloat) */
    eax = MEM32(esp + 0x20);
    MEMF(eax) = xmm0; /* movss */
    MEMD(eax + 4) = xmm0; /* movhps */
    xmm0 = MEMF(esp + 0x78); /* movss */
    xmm0 = xmm0 - MEMF(esp + 0xA8); /* subss */
    xmm1 = xmm0; /* movaps */
    xmm0 = MEMF(esp + 0x7C); /* movss */
    xmm0 = xmm0 - MEMF(esp + 0xAC); /* subss */
    xmm2 = xmm0; /* movaps */
    xmm0 = MEMF(esp + 0x80); /* movss */
    xmm0 = xmm0 - MEMF(esp + 0xB0); /* subss */
    xmm0 = xmm0 + xmm2; /* addss */
    xmm0 = xmm0 + xmm1; /* addss */
    xmm1 = MEMF(0x649BCC); /* movss */
    /* comiss xmm1, xmm0 - sets EFLAGS */
    if ((xmm1 <= xmm0)) goto loc_00126BBB; /* jbe: below or equal (unsigned <=) */

loc_00126B63: ;
    edx = MEM32(esp + 0x1F0);
    eax = MEM32(esp + 0x1F4);
    ecx = MEM32(esp + 0x1F8);
    MEM32(esp + 0x54) = edx;
    edx = MEM32(esp + 0x1FC);
    MEM32(esp + 0x58) = eax;
    eax = MEM32(esp + 0x110);
    MEM32(esp + 0x5C) = ecx;
    MEM32(esp + 0x60) = edx;
    xmm0 = MEMF(eax + 0x18); /* movss */
    MEMF(esp + 0x44) = xmm0; /* movss */
    xmm0 = MEMF(eax + 0x1C); /* movss */
    MEMF(esp + 0x48) = xmm0; /* movss */
    xmm0 = MEMF(eax + 0x20); /* movss */
    MEM32(esp + 0x50) = 0;
    goto loc_00126C15;

loc_00126BBB: ;
    eax = MEM32(0x85D5B4);
    PUSH32(esp, 0x3F800000);
    PUSH32(esp, 0);
    PUSH32(esp, eax);
    eax = MEM32(esp + 0x11C);
    PUSH32(esp, 0); sub_0012D7D0(); /* call 0x0012D7D0 */

loc_00126BD4: ;
    ecx = MEM32(esp + 0x1F0);
    xmm0 = 0.0f; /* xorps self = zero */
    edx = MEM32(esp + 0x1F4);
    eax = MEM32(esp + 0x1F8);
    MEM32(esp + 0x54) = ecx;
    ecx = MEM32(esp + 0x1FC);
    MEM32(esp + 0x60) = ecx;
    MEMF(esp + 0x44) = xmm0; /* movss */
    MEMF(esp + 0x48) = xmm0; /* movss */
    MEM32(esp + 0x58) = edx;
    MEM32(esp + 0x5C) = eax;
    MEMF(esp + 0x60) = xmm0; /* movss */

loc_00126C15: ;
    xmm3 = MEMF(0x648D40); /* movss */
    edx = esp + 0x98;
    MEMF(esp + 0x4C) = xmm0; /* movss */
    MEMF(esp + 0x1C) = xmm3; /* movss */
    MEM32(esp + 0x20) = edx;
    xmm0 = MEMF(esp + 0x1C); /* movss */
    /* shufps xmm0, xmm0, 0 */
    ecx = MEM32(ebp + 0x30);
    xmm1 = MEMF(ecx); /* movups */
    /* mulps: xmm0 *= xmm1 (packed 4xfloat) */
    eax = MEM32(esp + 0x20);
    MEMF(eax) = xmm0; /* movups */
    xmm4 = MEMF(0x648D3C); /* movss */
    eax = esp + 0x54;
    ecx = eax;
    MEMF(esp + 0x18) = xmm4; /* movss */
    MEM32(esp + 0x1C) = eax;
    MEM32(esp + 0x20) = ecx;
    xmm0 = MEMF(esp + 0x18); /* movss */
    /* shufps xmm0, xmm0, 0 */
    ecx = MEM32(esp + 0x1C);
    xmm1 = MEMF(ecx); /* movups */
    /* mulps: xmm0 *= xmm1 (packed 4xfloat) */
    eax = MEM32(esp + 0x20);
    MEMF(eax) = xmm0; /* movups */
    edx = esp + 0x54;
    eax = esp + 0x98;
    MEM32(esp + 0x20) = edx;
    MEM32(esp + 0x1C) = eax;
    edx = MEM32(esp + 0x1C);
    xmm1 = MEMF(edx); /* movups */
    ecx = MEM32(esp + 0x20);
    xmm2 = MEMF(ecx); /* movups */
    /* addps: xmm1 += xmm2 (packed 4xfloat) */
    eax = MEM32(ebp + 0x30);
    MEMF(eax) = xmm1; /* movups */
    esi = edi + 0x20;
    ecx = esp + 0x24;
    MEM32(esp + 0x1C) = esi;
    MEMF(esp + 0x18) = xmm3; /* movss */
    MEM32(esp + 0x20) = ecx;
    xmm0 = MEMF(esp + 0x18); /* movss */
    /* shufps xmm0, xmm0, 0 */
    edx = MEM32(esp + 0x1C);
    xmm1 = MEMF(edx); /* movss */
    xmm1 = MEMD(edx + 4); /* movhps */
    /* mulps: xmm0 *= xmm1 (packed 4xfloat) */
    eax = MEM32(esp + 0x20);
    MEMF(eax) = xmm0; /* movss */
    MEMD(eax + 4) = xmm0; /* movhps */
    edx = esp + 0x44;
    eax = edx;
    MEMF(esp + 0x18) = xmm4; /* movss */
    MEM32(esp + 0x1C) = edx;
    MEM32(esp + 0x20) = eax;
    xmm0 = MEMF(esp + 0x18); /* movss */
    /* shufps xmm0, xmm0, 0 */
    edx = MEM32(esp + 0x1C);
    xmm1 = MEMF(edx); /* movss */
    xmm1 = MEMD(edx + 4); /* movhps */
    /* mulps: xmm0 *= xmm1 (packed 4xfloat) */
    eax = MEM32(esp + 0x20);
    MEMF(eax) = xmm0; /* movss */
    MEMD(eax + 4) = xmm0; /* movhps */
    ecx = esp + 0x44;
    edx = esp + 0x24;
    MEM32(esp + 0x20) = esi;
    MEM32(esp + 0x1C) = ecx;
    MEM32(esp + 0x18) = edx;
    ecx = MEM32(esp + 0x18);
    xmm0 = MEMF(ecx); /* movss */
    xmm0 = MEMD(ecx + 4); /* movhps */
    edx = MEM32(esp + 0x1C);
    xmm1 = MEMF(edx); /* movss */
    xmm1 = MEMD(edx + 4); /* movhps */
    /* addps: xmm0 += xmm1 (packed 4xfloat) */
    eax = MEM32(esp + 0x20);
    MEMF(eax) = xmm0; /* movss */
    MEMD(eax + 4) = xmm0; /* movhps */
    edx = esi;
    eax = edi;
    PUSH32(esp, 0); sub_0012EDB0(); /* call 0x0012EDB0 */

loc_00126D66: ;
    goto loc_001274E2;

loc_00126D6B: ;
    SET_LO8(edx, MEM8(eax + 0x5C));
    (void)0; /* test LO8(edx), LO8(edx) - flags set for next jcc */
    SET_LO8(eax, (TEST_NZ(LO8(edx), LO8(edx))) ? 1 : 0); /* setne */
    if (TEST_Z(LO8(eax), LO8(eax))) goto loc_001274A5; /* je: equal / zero */

loc_00126D7B: ;
    if (TEST_Z(edi, edi)) goto loc_001274A5; /* je: equal / zero */

loc_00126D83: ;
    if (CMP_LE(ebx, 2)) goto loc_001274A5; /* jle: less or equal (signed <=) */

loc_00126D8C: ;
    xmm0 = 0.0f; /* xorps self = zero */
    xmm1 = MEMF(0x648D14); /* movss */
    eax = esp + 0x34;
    PUSH32(esp, eax);
    edx = esp + 0x28;
    MEMF(esp + 0x38) = xmm0; /* movss */
    MEMF(esp + 0x3C) = xmm1; /* movss */
    MEMF(esp + 0x40) = xmm0; /* movss */
    PUSH32(esp, 0); sub_0012F160(); /* call 0x0012F160 */

loc_00126DB7: ;
    xmm0 = MEMF(esp + 0x7C); /* movss */
    MEMF(esp + 0x48) = xmm0; /* movss */
    xmm0 = MEMF(esp + 0x80); /* movss */
    ecx = esp + 0x38;
    MEMF(esp + 0x4C) = xmm0; /* movss */
    xmm0 = MEMF(esp + 0x84); /* movss */
    PUSH32(esp, ecx);
    edx = esp + 0x10C;
    MEMF(esp + 0x54) = xmm0; /* movss */
    PUSH32(esp, 0); sub_0012F160(); /* call 0x0012F160 */

loc_00126DF2: ;
    esi = MEM32(esp + 0x118);
    PUSH32(esp, esi);
    PUSH32(esp, 0); sub_0012EE70(); /* call 0x0012EE70 */

loc_00126DFF: ;
    edx = esp + 0x40;
    PUSH32(esp, edx);
    edx = esp + 0xE4;
    PUSH32(esp, 0); sub_0012F160(); /* call 0x0012F160 */

loc_00126E10: ;
    ebx = MEM32(esp + 0x124);
    PUSH32(esp, ebx);
    PUSH32(esp, 0); sub_0012EE70(); /* call 0x0012EE70 */

loc_00126E1D: ;
    eax = esp + 0x48;
    PUSH32(esp, eax);
    edx = esp + 0x104;
    PUSH32(esp, 0); sub_0012F160(); /* call 0x0012F160 */

loc_00126E2E: ;
    PUSH32(esp, esi);
    PUSH32(esp, 0); sub_0012E600(); /* call 0x0012E600 */

loc_00126E34: ;
    ecx = esp + 0x50;
    PUSH32(esp, ecx);
    edx = esp + 0x100;
    PUSH32(esp, 0); sub_0012F160(); /* call 0x0012F160 */

loc_00126E45: ;
    PUSH32(esp, ebx);
    PUSH32(esp, 0); sub_0012E600(); /* call 0x0012E600 */

loc_00126E4B: ;
    edi = MEM32(esp + 0x13C);
    PUSH32(esp, edi);
    PUSH32(esp, 0); sub_0012EE70(); /* call 0x0012EE70 */

loc_00126E58: ;
    edx = esp + 0x5C;
    PUSH32(esp, edx);
    edx = esp + 0x124;
    PUSH32(esp, 0); sub_0012F160(); /* call 0x0012F160 */

loc_00126E69: ;
    PUSH32(esp, edi);
    PUSH32(esp, 0); sub_0012E600(); /* call 0x0012E600 */

loc_00126E6F: ;
    xmm3 = MEMF(0x64A050); /* movss */
    eax = esp + 0x74;
    ecx = esp + 0x54;
    MEM32(esp + 0xEC) = eax;
    edx = ecx;
    eax = esp + 0x104;
    esp = esp + 0x30;
    MEM32(esp + 0x1C) = 0xFFFFFFFFu;
    MEM32(esp + 0x30) = 0;
    MEM32(esp + 0x74) = ecx;
    MEM32(esp + 0xB4) = edx;
    MEM32(esp + 0x18) = eax;

loc_00126EB1: ;
    ecx = MEM32(esp + 0x18);
    MEM32(esp + 0x40) = ecx;
    ecx = MEM32(esp + 0x40);
    xmm0 = MEMF(ecx); /* movss */
    xmm0 = MEMD(ecx + 4); /* movhps */
    edx = MEM32(esp + 0xBC);
    xmm1 = MEMF(edx); /* movss */
    xmm1 = MEMD(edx + 4); /* movhps */
    /* subps: xmm0 -= xmm1 (packed 4xfloat) */
    eax = MEM32(esp + 0x74);
    MEMF(eax) = xmm0; /* movss */
    MEMD(eax + 4) = xmm0; /* movhps */
    edx = MEM32(esp + 0xB4);
    xmm1 = MEMF(edx); /* movss */
    xmm1 = MEMD(edx + 4); /* movhps */
    xmm2 = xmm1; /* movaps */
    /* mulps: xmm1 *= xmm2 (packed 4xfloat) */
    xmm0 = xmm1; /* movaps */
    /* shufps xmm0, xmm0, 0x32 */
    /* addps: xmm1 += xmm0 (packed 4xfloat) */
    /* shufps xmm0, xmm0, 0x32 */
    /* addps: xmm1 += xmm0 (packed 4xfloat) */
    MEMF(esp + 0xB8) = xmm1; /* movss */
    xmm0 = MEMF(esp + 0xB8); /* movss */
    /* comiss xmm3, xmm0 - sets EFLAGS */
    if ((xmm3 <= xmm0)) goto loc_00126F2B; /* jbe: below or equal (unsigned <=) */

loc_00126F20: ;
    edx = MEM32(esp + 0x30);
    MEM32(esp + 0x1C) = edx;
    xmm3 = xmm0; /* movaps */

loc_00126F2B: ;
    eax = MEM32(esp + 0x30);
    edx = MEM32(esp + 0x18);
    eax++;
    edx = edx + 0xC;
    (void)0; /* cmp eax, 5 - flags set for next jcc */
    MEM32(esp + 0x30) = eax;
    MEM32(esp + 0x18) = edx;
    if (CMP_L(eax, 5)) goto loc_00126EB1; /* jl: less (signed <) */

loc_00126F48: ;
    eax = MEM32(esp + 0x1C);
    if (CMP_A(eax, 4)) goto loc_00127057; /* ja: above (unsigned >) */

loc_00126F55: ;
    { uint32_t _jt = MEM32(eax * 4 + 0x1276C4); /* switch: 5 entries, 5 targets */
    if (_jt == 0x00126F5Cu) goto loc_00126F5C;
    if (_jt == 0x00126FA7u) goto loc_00126FA7;
    if (_jt == 0x001270DDu) goto loc_001270DD;
    if (_jt == 0x001271BCu) goto loc_001271BC;
    if (_jt == 0x0012726Eu) goto loc_0012726E;
    g_seh_ebp = ebp; RECOMP_ITAIL(_jt); return; }

loc_00126F5C: ;
    eax = MEM32(esp + 0x1F0);
    ecx = MEM32(esp + 0x1F4);
    edx = MEM32(esp + 0x1F8);
    MEM32(esp + 0x54) = eax;
    eax = MEM32(esp + 0x1FC);
    MEM32(esp + 0x60) = eax;
    MEM32(esp + 0x58) = ecx;
    MEM32(esp + 0x5C) = edx;
    xmm0 = MEMF(esi + 0x18); /* movss */
    MEMF(esp + 0x78) = xmm0; /* movss */
    xmm0 = MEMF(esi + 0x1C); /* movss */
    MEMF(esp + 0x7C) = xmm0; /* movss */
    xmm0 = MEMF(esi + 0x20); /* movss */
    eax = ebx;
    goto loc_00126FF0;

loc_00126FA7: ;
    eax = MEM32(esp + 0x200);
    ecx = MEM32(esp + 0x204);
    edx = MEM32(esp + 0x208);
    MEM32(esp + 0x54) = eax;
    eax = MEM32(esp + 0x20C);
    MEM32(esp + 0x60) = eax;
    MEM32(esp + 0x58) = ecx;
    MEM32(esp + 0x5C) = edx;
    xmm0 = MEMF(ebx + 0x18); /* movss */
    MEMF(esp + 0x78) = xmm0; /* movss */
    xmm0 = MEMF(ebx + 0x1C); /* movss */
    MEMF(esp + 0x7C) = xmm0; /* movss */
    xmm0 = MEMF(ebx + 0x20); /* movss */
    eax = esi;

loc_00126FF0: ;
    ecx = MEM32(0x85D5B4);
    PUSH32(esp, 0x3F800000);
    PUSH32(esp, 0);
    MEMF(esp + 0x88) = xmm0; /* movss */
    xmm0 = 0.0f; /* xorps self = zero */
    PUSH32(esp, ecx);
    MEMF(esp + 0x70) = xmm0; /* movss */
    MEMF(esp + 0x74) = xmm0; /* movss */
    MEMF(esp + 0x78) = xmm0; /* movss */
    MEMF(esp + 0x7C) = xmm0; /* movss */
    MEMF(esp + 0x90) = xmm0; /* movss */
    MEMF(esp + 0x94) = xmm0; /* movss */
    MEMF(esp + 0x98) = xmm0; /* movss */
    PUSH32(esp, 0); sub_0012D7D0(); /* call 0x0012D7D0 */

loc_00127042: ;
    edx = MEM32(0x85D5B4);
    PUSH32(esp, 0x3F800000);
    PUSH32(esp, 1);
    PUSH32(esp, edx);
    eax = edi;

loc_00127052: ;
    PUSH32(esp, 0); sub_0012D7D0(); /* call 0x0012D7D0 */

loc_00127057: ;
    edi = MEM32(ebp + 0x30);

loc_0012705A: ;
    xmm0 = MEMF(0x648E40); /* movss */
    xmm1 = MEMF(0x64A04C); /* movss */
    eax = esp + 0x98;
    edx = esp + 0x24;
    ecx = eax;
    MEM32(esp + 0xB4) = eax;
    eax = edx;
    MEM32(esp + 0xD0) = edx;
    MEM32(esp + 0xC8) = eax;
    eax = MEM32(ebp + 0x30);
    edx = esp + 0x54;
    ebx = eax + 0x20;
    edx = edx - eax;
    esi = edi;
    MEMF(esp + 0xBC) = xmm0; /* movss */
    MEMF(esp + 0x18) = xmm1; /* movss */
    MEM32(esp + 0x30) = ecx;
    MEMF(esp + 0xC0) = xmm0; /* movss */
    MEMF(esp + 0xC4) = xmm1; /* movss */
    edi = esp + 0x78;
    MEM32(esp + 0x20) = ebx;
    MEM32(esp + 0xB8) = edx;
    MEM32(esp + 0x1C) = 2;
    goto loc_00127330;

loc_001270DD: ;
    eax = MEM32(esp + 0x1F0);
    ecx = MEM32(esp + 0x1F4);
    edx = MEM32(esp + 0x1F8);
    MEM32(esp + 0x54) = eax;
    eax = MEM32(esp + 0x1FC);
    MEM32(esp + 0x58) = ecx;
    ecx = MEM32(esp + 0x200);
    MEM32(esp + 0x5C) = edx;
    edx = MEM32(esp + 0x204);
    MEM32(esp + 0x60) = eax;
    xmm0 = MEMF(esi + 0x18); /* movss */
    eax = MEM32(esp + 0x208);
    MEMF(esp + 0x78) = xmm0; /* movss */
    xmm0 = MEMF(esi + 0x1C); /* movss */
    MEMF(esp + 0x7C) = xmm0; /* movss */
    xmm0 = MEMF(esi + 0x20); /* movss */
    MEM32(esp + 0x64) = ecx;
    ecx = MEM32(esp + 0x20C);
    MEM32(esp + 0x68) = edx;
    edx = MEM32(0x85D5B4);
    MEM32(esp + 0x6C) = eax;
    MEMF(esp + 0x80) = xmm0; /* movss */
    MEM32(esp + 0x70) = ecx;
    xmm0 = MEMF(ebx + 0x18); /* movss */
    PUSH32(esp, 0x3F800000);
    MEMF(esp + 0x88) = xmm0; /* movss */
    xmm0 = MEMF(ebx + 0x1C); /* movss */
    PUSH32(esp, 0);
    MEMF(esp + 0x90) = xmm0; /* movss */
    xmm0 = MEMF(ebx + 0x20); /* movss */
    PUSH32(esp, edx);
    eax = edi;
    MEMF(esp + 0x98) = xmm0; /* movss */
    PUSH32(esp, 0); sub_0012D7D0(); /* call 0x0012D7D0 */

loc_00127198: ;
    if (CMP_LE(MEM32(esp + 0x20), 3)) goto loc_00127057; /* jle: less or equal (signed <=) */

loc_001271A3: ;
    eax = MEM32(0x85D5B4);
    PUSH32(esp, 0x3F800000);
    PUSH32(esp, 1);
    PUSH32(esp, eax);
    eax = MEM32(esp + 0x128);
    goto loc_00127052;

loc_001271BC: ;
    ecx = MEM32(esp + 0x210);
    edx = MEM32(esp + 0x214);
    eax = MEM32(esp + 0x218);
    MEM32(esp + 0x54) = ecx;
    ecx = MEM32(esp + 0x21C);
    MEM32(esp + 0x58) = edx;
    edx = MEM32(0x85D5B4);
    MEM32(esp + 0x5C) = eax;
    MEM32(esp + 0x60) = ecx;
    xmm0 = MEMF(edi + 0x18); /* movss */
    MEMF(esp + 0x78) = xmm0; /* movss */
    xmm0 = MEMF(edi + 0x1C); /* movss */
    PUSH32(esp, 0x3F800000);
    MEMF(esp + 0x80) = xmm0; /* movss */
    xmm0 = MEMF(edi + 0x20); /* movss */
    PUSH32(esp, 0);
    MEMF(esp + 0x88) = xmm0; /* movss */
    xmm0 = 0.0f; /* xorps self = zero */
    PUSH32(esp, edx);
    eax = esi;
    MEMF(esp + 0x70) = xmm0; /* movss */
    MEMF(esp + 0x74) = xmm0; /* movss */
    MEMF(esp + 0x78) = xmm0; /* movss */
    MEMF(esp + 0x7C) = xmm0; /* movss */
    MEMF(esp + 0x90) = xmm0; /* movss */
    MEMF(esp + 0x94) = xmm0; /* movss */
    MEMF(esp + 0x98) = xmm0; /* movss */
    PUSH32(esp, 0); sub_0012D7D0(); /* call 0x0012D7D0 */

loc_0012725A: ;
    eax = MEM32(0x85D5B4);
    PUSH32(esp, 0x3F800000);
    PUSH32(esp, 1);
    PUSH32(esp, eax);
    eax = ebx;
    goto loc_00127052;

loc_0012726E: ;
    edi = MEM32(ebp + 0x30);
    xmm1 = MEMF(edi); /* movss */
    xmm0 = 0.0f; /* xorps self = zero */
    ecx = MEM32(0x85D5B4);
    MEMF(esp + 0x54) = xmm1; /* movss */
    xmm1 = MEMF(edi + 4); /* movss */
    MEMF(esp + 0x58) = xmm1; /* movss */
    xmm1 = MEMF(edi + 8); /* movss */
    MEMF(esp + 0x5C) = xmm1; /* movss */
    xmm1 = MEMF(edi + 0x10); /* movss */
    PUSH32(esp, 0x3F800000);
    MEMF(esp + 0x68) = xmm1; /* movss */
    xmm1 = MEMF(edi + 0x14); /* movss */
    PUSH32(esp, 0);
    MEMF(esp + 0x70) = xmm1; /* movss */
    xmm1 = MEMF(edi + 0x18); /* movss */
    PUSH32(esp, ecx);
    eax = esi;
    MEMF(esp + 0x84) = xmm0; /* movss */
    MEMF(esp + 0x88) = xmm0; /* movss */
    MEMF(esp + 0x8C) = xmm0; /* movss */
    MEMF(esp + 0x6C) = xmm0; /* movss */
    MEMF(esp + 0x90) = xmm0; /* movss */
    MEMF(esp + 0x94) = xmm0; /* movss */
    MEMF(esp + 0x98) = xmm0; /* movss */
    MEMF(esp + 0x78) = xmm1; /* movss */
    MEMF(esp + 0x7C) = xmm0; /* movss */
    PUSH32(esp, 0); sub_0012D7D0(); /* call 0x0012D7D0 */

loc_0012730C: ;
    edx = MEM32(0x85D5B4);
    PUSH32(esp, 0x3F800000);
    PUSH32(esp, 1);
    PUSH32(esp, edx);
    eax = ebx;
    PUSH32(esp, 0); sub_0012D7D0(); /* call 0x0012D7D0 */

loc_00127321: ;
    goto loc_0012705A;

loc_00127326: ;
    edx = MEM32(esp + 0xB8);
    /* nop */

loc_00127330: ;
    MEM32(esp + 0x40) = esi;
    xmm0 = MEMF(esp + 0xBC); /* movss */
    /* shufps xmm0, xmm0, 0 */
    ecx = MEM32(esp + 0x40);
    xmm1 = MEMF(ecx); /* movups */
    /* mulps: xmm0 *= xmm1 (packed 4xfloat) */
    eax = MEM32(esp + 0xB4);
    MEMF(eax) = xmm0; /* movups */
    edx = edx + esi;
    MEM32(esp + 0x40) = edx;
    MEM32(esp + 0x74) = edx;
    xmm0 = MEMF(esp + 0x18); /* movss */
    /* shufps xmm0, xmm0, 0 */
    ecx = MEM32(esp + 0x74);
    xmm1 = MEMF(ecx); /* movups */
    /* mulps: xmm0 *= xmm1 (packed 4xfloat) */
    eax = MEM32(esp + 0x40);
    MEMF(eax) = xmm0; /* movups */
    MEM32(esp + 0x40) = esi;
    MEM32(esp + 0x74) = edx;
    edx = MEM32(esp + 0x30);
    xmm1 = MEMF(edx); /* movups */
    ecx = MEM32(esp + 0x74);
    xmm2 = MEMF(ecx); /* movups */
    /* addps: xmm1 += xmm2 (packed 4xfloat) */
    eax = MEM32(esp + 0x40);
    MEMF(eax) = xmm1; /* movups */
    MEM32(esp + 0x40) = esi;
    edx = MEM32(esp + 0x40);
    xmm1 = MEMF(edx); /* movss */
    xmm1 = MEMD(edx + 4); /* movhps */
    xmm2 = xmm1; /* movaps */
    /* mulps: xmm1 *= xmm2 (packed 4xfloat) */
    xmm0 = xmm1; /* movaps */
    /* shufps xmm0, xmm0, 0x32 */
    /* addps: xmm1 += xmm0 (packed 4xfloat) */
    /* shufps xmm0, xmm0, 0x32 */
    /* addps: xmm1 += xmm0 (packed 4xfloat) */
    MEMF(esp + 0xCC) = xmm1; /* movss */
    xmm0 = MEMF(esp + 0xCC); /* movss */
    /* ucomiss xmm0, MEMF(0x648CF8) - sets EFLAGS */
    /* lahf - load AH from flags (used in FPU compare idiom) */
    if (1 /* jnp after test - parity */) goto loc_001273ED; /* jnp: not parity */

loc_001273E0: ;
    eax = esi;
    ebx = esi;
    PUSH32(esp, 0); sub_00428323(); /* call 0x00428323 */

loc_001273E9: ;
    ebx = MEM32(esp + 0x20);

loc_001273ED: ;
    MEM32(esp + 0x40) = ebx;
    xmm0 = MEMF(esp + 0xC0); /* movss */
    /* shufps xmm0, xmm0, 0 */
    edx = MEM32(esp + 0x40);
    xmm1 = MEMF(edx); /* movss */
    xmm1 = MEMD(edx + 4); /* movhps */
    /* mulps: xmm0 *= xmm1 (packed 4xfloat) */
    eax = MEM32(esp + 0xD0);
    MEMF(eax) = xmm0; /* movss */
    MEMD(eax + 4) = xmm0; /* movhps */
    MEM32(esp + 0x40) = edi;
    MEM32(esp + 0x74) = edi;
    xmm0 = MEMF(esp + 0xC4); /* movss */
    /* shufps xmm0, xmm0, 0 */
    edx = MEM32(esp + 0x74);
    xmm1 = MEMF(edx); /* movss */
    xmm1 = MEMD(edx + 4); /* movhps */
    /* mulps: xmm0 *= xmm1 (packed 4xfloat) */
    eax = MEM32(esp + 0x40);
    MEMF(eax) = xmm0; /* movss */
    MEMD(eax + 4) = xmm0; /* movhps */
    MEM32(esp + 0x40) = ebx;
    MEM32(esp + 0x74) = edi;
    ecx = MEM32(esp + 0xC8);
    xmm0 = MEMF(ecx); /* movss */
    xmm0 = MEMD(ecx + 4); /* movhps */
    edx = MEM32(esp + 0x74);
    xmm1 = MEMF(edx); /* movss */
    xmm1 = MEMD(edx + 4); /* movhps */
    /* addps: xmm0 += xmm1 (packed 4xfloat) */
    eax = MEM32(esp + 0x40);
    MEMF(eax) = xmm0; /* movss */
    MEMD(eax + 4) = xmm0; /* movhps */
    edx = ebx;
    eax = esi;
    PUSH32(esp, 0); sub_0012EDB0(); /* call 0x0012EDB0 */

loc_00127487: ;
    eax = MEM32(esp + 0x1C);
    ebx = ebx + 0xC;
    edi = edi + 0xC;
    esi = esi + 0x10;
    eax--;
    MEM32(esp + 0x20) = ebx;
    MEM32(esp + 0x1C) = eax;
    if ((eax != 0)) goto loc_00127326; /* jne: not equal / not zero */

loc_001274A3: ;
    goto loc_001274E2;

loc_001274A5: ;
    if (CMP_LE(ebx & ebx, 0)) goto loc_001274C3; /* jle: less or equal (signed <=) */

loc_001274A9: ;
    ecx = MEM32(0x85D5B4);
    eax = MEM32(esp + 0x110);
    PUSH32(esp, 0x3F800000);
    PUSH32(esp, 0);
    PUSH32(esp, ecx);
    PUSH32(esp, 0); sub_0012D7D0(); /* call 0x0012D7D0 */

loc_001274C3: ;
    if (CMP_LE(ebx, 1)) goto loc_001274E2; /* jle: less or equal (signed <=) */

loc_001274C8: ;
    edx = MEM32(0x85D5B4);
    eax = MEM32(esp + 0x114);
    PUSH32(esp, 0x3F800000);
    PUSH32(esp, 1);
    PUSH32(esp, edx);
    PUSH32(esp, 0); sub_0012D7D0(); /* call 0x0012D7D0 */

loc_001274E2: ;
    edi = MEM32(esp + 0x50);

loc_001274E6: ;
    ecx = MEM32(0x81B7C0);
    ebx = 0; /* xor self */
    ecx = ecx & 0x80000000u;
    (void)0; /* cmp edi, ebx - flags set for next jcc */
    MEM32(0x819FE0) = ebx;
    MEM32(0x819FE4) = ebx;
    MEM32(0x81B7C0) = ecx;
    if (CMP_EQ(edi, ebx)) goto loc_00127645; /* je: equal / zero */

loc_0012750E: ;
    (void)0; /* cmp edi, 4 - flags set for next jcc */
    MEM32(esp + 0x18) = 4;
    if (CMP_G(edi, 4)) goto loc_0012751F; /* jg: greater (signed >) */

loc_0012751B: ;
    MEM32(esp + 0x18) = edi;

loc_0012751F: ;
    if (CMP_LE(MEM32(esp + 0x18), ebx)) goto loc_001276B3; /* jle: less or equal (signed <=) */

loc_00127529: ;
    xmm7 = MEMF(0x648D18); /* movss */
    edi = esp + 0x1F8;
    esi = 0x7737B4;
    /* nop */

loc_00127540: ;
    eax = MEM32(esp + ebx * 4 + 0x110);
    xmm0 = MEMF(edi + 4); /* movss */
    xmm0 = xmm0 * MEMF(0x6490F4); /* mulss */
    xmm3 = 0.0f; /* xorps self = zero */
    eax = eax + 0x18;
    MEM32(esi + -4) = 1;
    xmm1 = MEMF(eax + 8); /* movss */
    xmm2 = MEMF(eax + 4); /* movss */
    xmm1 = xmm1 * xmm0; /* mulss */
    xmm2 = xmm2 * xmm0; /* mulss */
    xmm0 = xmm0 * MEMF(eax); /* mulss */
    /* comiss xmm3, xmm0 - sets EFLAGS */
    xmm4 = xmm3; /* movaps */
    xmm4 = xmm4 - MEMF(edi); /* subss */
    xmm5 = xmm3; /* movaps */
    xmm5 = xmm5 - MEMF(edi + -4); /* subss */
    xmm6 = xmm3; /* movaps */
    xmm6 = xmm6 - MEMF(edi + -8); /* subss */
    if ((xmm3 <= xmm0)) goto loc_00127598; /* jbe: below or equal (unsigned <=) */

loc_00127593: ;
    xmm0 = xmm3; /* movaps */
    goto loc_001275A0;

loc_00127598: ;
    /* comiss xmm0, xmm7 - sets EFLAGS */
    if ((xmm0 <= xmm7)) goto loc_001275A0; /* jbe: below or equal (unsigned <=) */

loc_0012759D: ;
    xmm0 = xmm7; /* movaps */

loc_001275A0: ;
    /* comiss xmm3, xmm2 - sets EFLAGS */
    if ((xmm3 <= xmm2)) goto loc_001275AA; /* jbe: below or equal (unsigned <=) */

loc_001275A5: ;
    xmm2 = xmm3; /* movaps */
    goto loc_001275B2;

loc_001275AA: ;
    /* comiss xmm2, xmm7 - sets EFLAGS */
    if ((xmm2 <= xmm7)) goto loc_001275B2; /* jbe: below or equal (unsigned <=) */

loc_001275AF: ;
    xmm2 = xmm7; /* movaps */

loc_001275B2: ;
    /* comiss xmm3, xmm1 - sets EFLAGS */
    if ((xmm3 <= xmm1)) goto loc_001275BC; /* jbe: below or equal (unsigned <=) */

loc_001275B7: ;
    xmm1 = xmm3; /* movaps */
    goto loc_001275C4;

loc_001275BC: ;
    /* comiss xmm1, xmm7 - sets EFLAGS */
    if ((xmm1 <= xmm7)) goto loc_001275C4; /* jbe: below or equal (unsigned <=) */

loc_001275C1: ;
    xmm1 = xmm7; /* movaps */

loc_001275C4: ;
    xmm3 = MEMF(0x648E14); /* movss */
    MEMF(esp + 0x24) = xmm6; /* movss */
    ecx = MEM32(esp + 0x24);
    eax = esi + 0x10;
    MEM32(eax) = ecx;
    MEMF(esp + 0x28) = xmm5; /* movss */
    edx = MEM32(esp + 0x28);
    MEMF(esp + 0x2C) = xmm4; /* movss */
    ecx = MEM32(esp + 0x2C);
    MEM32(eax + 4) = edx;
    xmm0 = xmm0 * xmm3; /* mulss */
    MEMF(esi) = xmm0; /* movss */
    xmm0 = MEMF(0x648D14); /* movss */
    MEM32(eax + 8) = ecx;
    xmm2 = xmm2 * xmm3; /* mulss */
    xmm1 = xmm1 * xmm3; /* mulss */
    ecx = esi + -12;
    MEMF(esi + 4) = xmm2; /* movss */
    MEMF(esi + 8) = xmm1; /* movss */
    MEMF(esi + 0xC) = xmm0; /* movss */
    PUSH32(esp, 0); sub_003EA070(); /* call 0x003EA070 */

loc_00127624: ;
    eax = MEM32(esp + 0x18);
    ebx++;
    edi = edi + 0x10;
    esi = esi + 0x4C;
    if (CMP_L(ebx, eax)) goto loc_00127540; /* jl: less (signed <) */

loc_00127637: ;
    MEM8(0x819FE8) = 1;
    POP32(esp, edi);
    POP32(esp, esi);
    POP32(esp, ebx);
    esp = ebp;
    POP32(esp, ebp);
    esp += 4; return; /* ret */

loc_00127645: ;
    xmm0 = 0.0f; /* xorps self = zero */
    xmm1 = MEMF(0x648D14); /* movss */
    MEMF(esp + 0x2C) = xmm0; /* movss */
    ecx = MEM32(esp + 0x2C);
    MEMF(esp + 0x24) = xmm0; /* movss */
    edx = MEM32(esp + 0x24);
    MEMF(esp + 0x28) = xmm1; /* movss */
    eax = MEM32(esp + 0x28);
    MEM32(0x7737CC) = ecx;
    ecx = 0x7737A8;
    MEM32(0x7737B0) = 1;
    MEMF(0x7737B4) = xmm0; /* movss */
    MEMF(0x7737B8) = xmm0; /* movss */
    MEMF(0x7737BC) = xmm0; /* movss */
    MEMF(0x7737C0) = xmm1; /* movss */
    MEM32(0x7737C4) = edx;
    MEM32(0x7737C8) = eax;
    PUSH32(esp, 0); sub_003EA070(); /* call 0x003EA070 */

loc_001276B3: ;
    MEM8(0x819FE8) = 1;

loc_001276BA: ;
    POP32(esp, edi);
    POP32(esp, esi);
    POP32(esp, ebx);
    esp = ebp;
    POP32(esp, ebp);
    esp += 4; return; /* ret */

}

/**
 * sub_001276E0
 * Original: 0x001276E0 - 0x00127796 (182 bytes, 45 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_001276E0(void)
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

loc_001276E0: ;
    SET_LO8(eax, MEM8(0x7FA23C));
    (void)0; /* test LO8(eax), LO8(eax) - flags set for next jcc */
    xmm0 = 0.0f; /* xorps self = zero */
    if (TEST_NZ(LO8(eax), LO8(eax))) goto loc_001276F4; /* jne: not equal / not zero */

loc_001276EC: ;
    xmm0 = MEMF(0x7F9F4C); /* movss */

loc_001276F4: ;
    xmm1 = xmm0; /* movaps */
    xmm1 = xmm1 * MEMF(esp + 4); /* mulss */
    xmm0 = xmm0 * MEMF(esp + 8); /* mulss */
    MEMF(esi) = xmm1; /* movss */
    MEMF(edi) = xmm0; /* movss */
    fp_push(MEMF(esi)); /* fld float */
    fp_push(MEMF(esp + 0xC)); /* fld float */
    PUSH32(esp, 0); sub_0047F05E(); /* call 0x0047F05E */

loc_00127716: ;
    xmm1 = MEMF(esp + 0xC); /* movss */
    MEMF(esp + 4) = (float)fp_top(); fp_pop(); /* fst */
    xmm2 = MEMF(esp + 4); /* movss */
    MEMF(esi) = (float)fp_top(); fp_popp(); /* fstp */
    xmm0 = xmm1; /* movaps */
    xmm0 = xmm0 * MEMF(0x648D10); /* mulss */
    /* comiss xmm2, xmm0 - sets EFLAGS */
    MEMF(esp + 8) = xmm0; /* movss */
    if ((xmm2 <= xmm0)) goto loc_00127746; /* jbe: below or equal (unsigned <=) */

loc_0012773E: ;
    xmm1 = xmm1 - xmm2; /* subss */
    MEMF(esi) = xmm1; /* movss */

loc_00127746: ;
    xmm0 = MEMF(esi); /* movss */
    xmm0 = xmm0 + MEMF(esp + 0x10); /* addss */
    MEMF(esi) = xmm0; /* movss */
    fp_push(MEMF(edi)); /* fld float */
    fp_push(MEMF(esp + 0xC)); /* fld float */
    PUSH32(esp, 0); sub_0047F05E(); /* call 0x0047F05E */

loc_0012775F: ;
    MEMF(esp + 4) = (float)fp_top(); fp_popp(); /* fstp */
    fp_push(MEMF(esp + 8)); /* fld float */
    eax = MEM32(esp + 4);
    fp_push(MEMF(esp + 4)); /* fld float */
    MEM32(edi) = eax;
    _fpu_cmp = (fp_top() < fp_st1()) ? -1 : (fp_top() > fp_st1()) ? 1 : 0; fp_pop(); /* fcompi */
    /* fstp st(0) */
    if ((_fpu_cmp <= 0) /* fcompi */) goto loc_00127787; /* jbe: below or equal (unsigned <=) */

loc_00127777: ;
    xmm0 = MEMF(esp + 0xC); /* movss */
    xmm0 = xmm0 - MEMF(esp + 4); /* subss */
    MEMF(edi) = xmm0; /* movss */

loc_00127787: ;
    xmm0 = MEMF(edi); /* movss */
    xmm0 = xmm0 + MEMF(esp + 0x10); /* addss */
    MEMF(edi) = xmm0; /* movss */
    esp += 4; return; /* ret */

    #undef fp_push
    #undef fp_pop
    #undef fp_popp
    #undef fp_top
    #undef fp_st1
}

/**
 * sub_001277A0
 * Original: 0x001277A0 - 0x00127B57 (951 bytes, 221 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_001277A0(void)
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

loc_001277A0: ;
    eax = MEM32(0x8493BC);
    esp = esp - 0x54;
    if (TEST_Z(eax, eax)) goto loc_00127B53; /* je: equal / zero */

loc_001277B0: ;
    xmm0 = MEMF(0x648D34); /* movss */
    xmm5 = 0.0f; /* xorps self = zero */
    xmm2 = MEMF(ebx + 0x7C); /* movss */
    xmm2 = xmm2 - MEMF(ebx + 0x228); /* subss */
    xmm2 = xmm2 + MEMF(0x648EA4); /* addss */
    MEMF(esp + 0x28) = xmm0; /* movss */
    xmm0 = MEMF(0x5A0060); /* movss */
    /* comiss xmm0, xmm2 - sets EFLAGS */
    PUSH32(esp, esi);
    PUSH32(esp, edi);
    MEMF(esp + 0x10) = xmm5; /* movss */
    MEMF(esp + 0xC) = xmm5; /* movss */
    MEMF(esp + 0x2C) = xmm5; /* movss */
    MEMF(esp + 0x34) = xmm5; /* movss */
    if ((xmm0 <= xmm2)) goto loc_00127992; /* jbe: below or equal (unsigned <=) */

loc_00127801: ;
    eax = esp + 0x14;
    PUSH32(esp, eax);
    ecx = esp + 0x24;
    PUSH32(esp, 0); sub_0012BA10(); /* call 0x0012BA10 */

loc_0012780F: ;
    xmm4 = MEMF(0x648D14); /* movss */
    esp = esp + 4;
    /* comiss xmm2, xmm5 - sets EFLAGS */
    MEMF(esp + 8) = xmm4; /* movss */
    if ((xmm2 <= xmm5)) goto loc_00127853; /* jbe: below or equal (unsigned <=) */

loc_00127825: ;
    xmm0 = MEMF(0x648E98); /* movss */
    xmm1 = xmm2; /* movaps */
    xmm1 = xmm1 * xmm2; /* mulss */
    xmm0 = xmm0 / xmm1; /* divss */
    xmm1 = MEMF(0x648D10); /* movss */
    /* comiss xmm1, xmm0 - sets EFLAGS */
    if ((xmm1 > xmm0)) goto loc_00127848; /* ja: above (unsigned >) */

loc_00127845: ;
    xmm0 = xmm1; /* movaps */

loc_00127848: ;
    MEMF(esp + 8) = xmm0; /* movss */
    goto loc_00127966;

loc_00127853: ;
    xmm3 = MEMF(esp + 0x14); /* movss */
    xmm3 = xmm3 * MEMF(0x5A005C); /* mulss */
    ecx = esp + 0x20;
    edx = esp + 0x38;
    eax = ecx;
    MEMF(esp + 0x38) = xmm4; /* movss */
    MEMF(esp + 0x3C) = xmm4; /* movss */
    MEMF(esp + 0x40) = xmm4; /* movss */
    MEM32(esp + 0x18) = ecx;
    MEM32(esp + 0x1C) = edx;
    MEM32(esp + 0x14) = eax;
    ecx = MEM32(esp + 0x1C);
    xmm0 = MEMF(ecx); /* movss */
    xmm0 = MEMD(ecx + 4); /* movhps */
    edx = MEM32(esp + 0x18);
    xmm1 = MEMF(edx); /* movss */
    xmm1 = MEMD(edx + 4); /* movhps */
    /* subps: xmm0 -= xmm1 (packed 4xfloat) */
    eax = MEM32(esp + 0x14);
    MEMF(eax) = xmm0; /* movss */
    MEMD(eax + 4) = xmm0; /* movhps */
    xmm0 = xmm5; /* movaps */
    xmm0 = xmm0 - xmm2; /* subss */
    /* comiss xmm0, xmm3 - sets EFLAGS */
    if ((xmm0 <= xmm3)) goto loc_001278BF; /* jbe: below or equal (unsigned <=) */

loc_001278BC: ;
    xmm0 = xmm3; /* movaps */

loc_001278BF: ;
    ecx = (uint32_t)(int32_t)SMEM16(ebx + 0x230);
    xmm2 = MEMF(ebx + 0x228); /* movss */
    xmm1 = (float)(int32_t)ecx; /* cvtsi2ss */
    /* ucomiss xmm2, xmm1 - sets EFLAGS */
    /* lahf - load AH from flags (used in FPU compare idiom) */
    (void)0; /* test HI8(eax), 0x44 - flags set for next jcc */
    xmm0 = xmm0 / xmm3; /* divss */
    if (1 /* jp after test - parity */) goto loc_001278E2; /* jp: parity */

loc_001278DF: ;
    xmm0 = xmm4; /* movaps */

loc_001278E2: ;
    edx = esp + 0x20;
    eax = edx;
    MEMF(esp + 0x14) = xmm0; /* movss */
    MEM32(esp + 0x18) = edx;
    MEM32(esp + 0x1C) = eax;
    xmm0 = MEMF(esp + 0x14); /* movss */
    /* shufps xmm0, xmm0, 0 */
    edx = MEM32(esp + 0x18);
    xmm1 = MEMF(edx); /* movss */
    xmm1 = MEMD(edx + 4); /* movhps */
    /* mulps: xmm0 *= xmm1 (packed 4xfloat) */
    eax = MEM32(esp + 0x1C);
    MEMF(eax) = xmm0; /* movss */
    MEMD(eax + 4) = xmm0; /* movhps */
    ecx = esp + 0x20;
    edx = esp + 0x38;
    eax = ecx;
    MEM32(esp + 0x18) = ecx;
    MEM32(esp + 0x14) = edx;
    MEM32(esp + 0x1C) = eax;
    ecx = MEM32(esp + 0x14);
    xmm0 = MEMF(ecx); /* movss */
    xmm0 = MEMD(ecx + 4); /* movhps */
    edx = MEM32(esp + 0x18);
    xmm1 = MEMF(edx); /* movss */
    xmm1 = MEMD(edx + 4); /* movhps */
    /* subps: xmm0 -= xmm1 (packed 4xfloat) */
    eax = MEM32(esp + 0x1C);
    MEMF(eax) = xmm0; /* movss */
    MEMD(eax + 4) = xmm0; /* movhps */
    eax = MEM32(0x85D5B4);
    edx = esp + 0x20;
    PUSH32(esp, 0); sub_0012D1A0(); /* call 0x0012D1A0 */

loc_00127966: ;
    PUSH32(esp, 0x3FC90FDB);
    PUSH32(esp, 0x3F860A92);
    PUSH32(esp, 0x40800000);
    PUSH32(esp, 0x40800000);
    edi = esp + 0x1C;
    esi = esp + 0x20;
    PUSH32(esp, 0); sub_001276E0(); /* call 0x001276E0 */

loc_00127987: ;
    xmm2 = 0.0f; /* xorps self = zero */
    esp = esp + 0x10;
    goto loc_00127A51;

loc_00127992: ;
    SET_LO8(ecx, MEM8(ebx + 0x298));
    SET_LO8(ecx, LO8(ecx) & 0x1F);
    if (CMP_NE(LO8(ecx), 8)) goto loc_00127B51; /* jne: not equal / not zero */

loc_001279A4: ;
    xmm0 = MEMF(0x648D40); /* movss */
    esi = MEM32(0x85D5B4);
    MEMF(esp + 0x20) = xmm0; /* movss */
    xmm0 = MEMF(0x648D80); /* movss */
    PUSH32(esp, 0);
    MEMF(esp + 0x28) = xmm0; /* movss */
    MEMF(esp + 0x2C) = xmm0; /* movss */
    xmm0 = MEMF(0x648EA8); /* movss */
    PUSH32(esp, 0x3F333333);
    edx = esp + 0x34;
    MEMF(esp + 0x10) = xmm0; /* movss */
    xmm0 = MEMF(0x648D14); /* movss */
    PUSH32(esp, edx);
    PUSH32(esp, 0); sub_0012E100(); /* call 0x0012E100 */

loc_001279F3: ;
    PUSH32(esp, 0x3FC90FDB);
    PUSH32(esp, 0x3F860A92);
    PUSH32(esp, 0x3F800000);
    PUSH32(esp, 0x40000000);
    edi = esp + 0x1C;
    esi = esp + 0x20;
    PUSH32(esp, 0); sub_001276E0(); /* call 0x001276E0 */

loc_00127A14: ;
    xmm0 = MEMF(ebx + 0x7C); /* movss */
    xmm0 = xmm0 - MEMF(ebx + 0x294); /* subss */
    xmm2 = 0.0f; /* xorps self = zero */
    esp = esp + 0x10;
    /* ucomiss xmm0, xmm2 - sets EFLAGS */
    /* lahf - load AH from flags (used in FPU compare idiom) */
    if (1 /* jnp after test - parity */) goto loc_00127A77; /* jnp: not parity */

loc_00127A30: ;
    xmm1 = xmm0; /* movaps */
    xmm1 = xmm1 * xmm0; /* mulss */
    xmm0 = MEMF(0x648EA4); /* movss */
    xmm0 = xmm0 / xmm1; /* divss */
    xmm0 = xmm0 * MEMF(0x648EA8); /* mulss */
    MEMF(esp + 8) = xmm0; /* movss */

loc_00127A51: ;
    xmm0 = MEMF(esp + 8); /* movss */
    /* comiss xmm0, xmm2 - sets EFLAGS */
    if ((xmm0 > xmm2)) goto loc_00127A64; /* ja: above (unsigned >) */

loc_00127A5C: ;
    MEMF(esp + 8) = xmm2; /* movss */
    goto loc_00127A77;

loc_00127A64: ;
    xmm1 = MEMF(0x648D14); /* movss */
    /* comiss xmm1, xmm0 - sets EFLAGS */
    if ((xmm1 > xmm0)) goto loc_00127A77; /* ja: above (unsigned >) */

loc_00127A71: ;
    MEMF(esp + 8) = xmm1; /* movss */

loc_00127A77: ;
    xmm0 = MEMF(esp + 8); /* movss */
    eax = esp + 0x20;
    ecx = esp + 0x44;
    MEMF(esp + 0x14) = xmm0; /* movss */
    MEM32(esp + 0x18) = eax;
    MEM32(esp + 0x1C) = ecx;
    xmm0 = MEMF(esp + 0x14); /* movss */
    /* shufps xmm0, xmm0, 0 */
    edx = MEM32(esp + 0x18);
    xmm1 = MEMF(edx); /* movss */
    xmm1 = MEMD(edx + 4); /* movhps */
    /* mulps: xmm0 *= xmm1 (packed 4xfloat) */
    eax = MEM32(esp + 0x1C);
    MEMF(eax) = xmm0; /* movss */
    MEMD(eax + 4) = xmm0; /* movhps */
    fp_push(MEMF(esp + 0xC)); /* fld float */
    fp_push(MEMF(esp + 0x10)); /* fld float */
    xmm0 = MEMF(0x648D14); /* movss */
    /* fld st(0) */
    edx = esp + 0x38;
    /* FPU: fcos  */
    PUSH32(esp, edx);
    edx = esp + 0x54;
    MEMF(esp + 0x3C) = xmm2; /* movss */
    MEMF(esp + 0x40) = xmm0; /* movss */
    MEMF(esp + 0x44) = xmm2; /* movss */
    MEMF(esp + 0x14) = (float)fp_top(); fp_popp(); /* fstp */
    /* fld st(1) */
    /* FPU: fsin  */
    fp_st1() *= fp_top(); fp_pop(); /* fmul */
    fp_top() = -fp_top(); /* fchs */
    MEMF(esp + 0x30) = (float)fp_top(); fp_popp(); /* fstp */
    /* FPU: fsin  */
    fp_top() = -fp_top(); /* fchs */
    MEMF(esp + 0x34) = (float)fp_top(); fp_popp(); /* fstp */
    /* FPU: fcos  */
    fp_st1() *= fp_top(); fp_pop(); /* fmul */
    fp_top() = -fp_top(); /* fchs */
    MEMF(esp + 0x38) = (float)fp_top(); fp_popp(); /* fstp */
    PUSH32(esp, 0); sub_0012F160(); /* call 0x0012F160 */

loc_00127B12: ;
    xmm0 = MEMF(esp + 0x5C); /* movss */
    xmm0 = xmm0 * MEMF(esp + 0x50); /* mulss */
    esi = MEM32(0x85D5B4);
    MEMF(esp) = xmm0; /* movss */
    xmm0 = MEMF(esp + 0x58); /* movss */
    xmm0 = xmm0 * MEMF(esp + 0x4C); /* mulss */
    PUSH32(esp, ecx);
    MEMF(esp) = xmm0; /* movss */
    xmm0 = MEMF(esp + 0x58); /* movss */
    xmm0 = xmm0 * MEMF(esp + 0x4C); /* mulss */
    eax = esp + 0x34;
    PUSH32(esp, eax);
    PUSH32(esp, 0); sub_0012E100(); /* call 0x0012E100 */

loc_00127B51: ;
    POP32(esp, edi);
    POP32(esp, esi);

loc_00127B53: ;
    esp = esp + 0x54;
    esp += 4; return; /* ret */

    #undef fp_push
    #undef fp_pop
    #undef fp_popp
    #undef fp_top
    #undef fp_st1
}

/**
 * sub_00127B60
 * Original: 0x00127B60 - 0x00128364 (2052 bytes, 496 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00127B60(void)
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

loc_00127B60: ;
    xmm0 = MEMF(0x648E14); /* movss */
    edx = MEM32(0x81B7C0);
    esp = esp - 0xE0;
    eax = 0; /* xor self */
    PUSH32(esp, edi);
    ecx = 0x130;
    edi = 0x7737A8;
    { uint32_t _i; for (_i = 0; _i < ecx; _i++) MEM32(edi + _i*4) = eax; }
    edi += ecx * 4; ecx = 0; /* rep stosd */
    ecx = MEM32(esp + 0x104);
    edx = edx & 0x80000000u;
    (void)0; /* cmp ecx, eax - flags set for next jcc */
    MEMF(0x74FB30) = xmm0; /* movss */
    MEMF(0x74FB34) = xmm0; /* movss */
    MEMF(0x74FB38) = xmm0; /* movss */
    xmm0 = MEMF(0x648D14); /* movss */
    MEM32(0x819FE0) = eax;
    MEM32(0x819FE4) = eax;
    MEM32(0x81B7C0) = edx;
    MEM8(0x819FE8) = LO8(eax);
    MEMF(0x74FB3C) = xmm0; /* movss */
    if (CMP_EQ(ecx, eax)) goto loc_0012835C; /* je: equal / zero */

loc_00127BD5: ;
    edi = MEM32(esp + 0xF0);
    PUSH32(esp, ebx);
    ebx = MEM32(esp + 0x110);
    PUSH32(esp, ebp);
    ebp = MEM32(esp + 0xFC);
    PUSH32(esp, esi);
    esi = MEM32(esp + 0xF8);
    PUSH32(esp, eax);
    eax = MEM32(esp + 0x124);
    PUSH32(esp, eax);
    ecx = esp + 0x1C;
    PUSH32(esp, ecx);
    PUSH32(esp, ebp);
    PUSH32(esp, edi);
    PUSH32(esp, esi);
    PUSH32(esp, 0); sub_00128370(); /* call 0x00128370 */

loc_00127C0A: ;
    eax = MEM32(esp + 0x138);
    esp = esp + 0x18;
    eax = eax & 2;
    MEM32(esp + 0x30) = eax;
    if ((eax == 0)) goto loc_00127CAF; /* je: equal / zero */

loc_00127C21: ;
    edx = MEM32(esp + 0x128);
    PUSH32(esp, edx);
    eax = esp + 0x24;
    PUSH32(esp, eax);
    ecx = esp + 0x18;
    PUSH32(esp, ecx);
    PUSH32(esp, ebp);
    PUSH32(esp, edi);
    PUSH32(esp, esi);
    esi = esp + 0xE0;
    edi = esp + 0x4C;
    PUSH32(esp, 0); sub_00128710(); /* call 0x00128710 */

loc_00127C46: ;
    xmm1 = MEMF(esp + 0x38); /* movss */
    xmm2 = MEMF(esp + 0x28); /* movss */
    esp = esp + 0x18;
    eax = 0; /* xor self */
    goto loc_00127C60;

    /* nop */

loc_00127C60: ;
    xmm0 = MEMF(0x648D14); /* movss */
    xmm0 = xmm0 - MEMF(esp + eax + 0x14); /* subss */
    xmm3 = xmm0; /* movaps */
    xmm3 = xmm3 * xmm2; /* mulss */
    xmm3 = xmm3 + MEMF(esp + eax + 0x14); /* addss */
    xmm3 = xmm3 * MEMF(esp + eax + 0x34); /* mulss */
    xmm0 = xmm0 * xmm1; /* mulss */
    xmm0 = xmm0 + MEMF(esp + eax + 0x14); /* addss */
    xmm0 = xmm0 * MEMF(esp + eax + 0xC8); /* mulss */
    MEMF(esp + eax + 0x54) = xmm3; /* movss */
    MEMF(esp + eax + 0x14) = xmm0; /* movss */
    eax = eax + 4;
    if (CMP_L(eax, 0xC)) goto loc_00127C60; /* jl: less (signed <) */

loc_00127CA8: ;
    edi = MEM32(esp + 0xFC);

loc_00127CAF: ;
    ecx = MEM32(esp + 0x11C);
    esi = MEM32(esp + 0x110);
    xmm0 = MEMF(0x648D20); /* movss */
    edx = esp + 0x14;
    eax = 0; /* xor self */
    ecx = ecx - edx;
    esi = esi - edx;
    /* nop */

loc_00127CD0: ;
    edx = MEM32(esp + 0x11C);
    if (TEST_Z(edx, edx)) goto loc_00127D11; /* je: equal / zero */

loc_00127CDB: ;
    if (TEST_NZ(MEM8(esp + 0x120), 8)) goto loc_00127D06; /* jne: not equal / not zero */

loc_00127CE5: ;
    edx = ecx + eax * 4;
    xmm1 = MEMF(esp + edx + 0x14); /* movss */
    xmm1 = xmm1 * xmm0; /* mulss */
    xmm1 = xmm1 + MEMF(esp + eax * 4 + 0x14); /* addss */
    xmm1 = xmm1 * MEMF(0x648E14); /* mulss */
    MEMF(esp + eax * 4 + 0x14) = xmm1; /* movss */

loc_00127D06: ;
    ebx = MEM32(esp + eax * 4 + 0x14);
    edx = ecx + eax * 4;
    MEM32(esp + edx + 0x14) = ebx;

loc_00127D11: ;
    ebx = MEM32(esp + eax * 4 + 0x14);
    edx = esi + eax * 4;
    eax++;
    (void)0; /* cmp eax, 3 - flags set for next jcc */
    MEM32(esp + edx + 0x14) = ebx;
    if (CMP_L(eax, 3)) goto loc_00127CD0; /* jl: less (signed <) */

loc_00127D22: ;
    eax = MEM32(esp + 0x110);
    xmm0 = MEMF(eax); /* movss */
    xmm3 = 0.0f; /* xorps self = zero */
    /* comiss xmm3, xmm0 - sets EFLAGS */
    xmm1 = MEMF(eax + 8); /* movss */
    xmm2 = MEMF(eax + 4); /* movss */
    xmm4 = MEMF(0x648D18); /* movss */
    if ((xmm3 <= xmm0)) goto loc_00127D4C; /* jbe: below or equal (unsigned <=) */

loc_00127D47: ;
    xmm0 = xmm3; /* movaps */
    goto loc_00127D54;

loc_00127D4C: ;
    /* comiss xmm0, xmm4 - sets EFLAGS */
    if ((xmm0 <= xmm4)) goto loc_00127D54; /* jbe: below or equal (unsigned <=) */

loc_00127D51: ;
    xmm0 = xmm4; /* movaps */

loc_00127D54: ;
    /* comiss xmm3, xmm2 - sets EFLAGS */
    if ((xmm3 <= xmm2)) goto loc_00127D5E; /* jbe: below or equal (unsigned <=) */

loc_00127D59: ;
    xmm2 = xmm3; /* movaps */
    goto loc_00127D66;

loc_00127D5E: ;
    /* comiss xmm2, xmm4 - sets EFLAGS */
    if ((xmm2 <= xmm4)) goto loc_00127D66; /* jbe: below or equal (unsigned <=) */

loc_00127D63: ;
    xmm2 = xmm4; /* movaps */

loc_00127D66: ;
    /* comiss xmm3, xmm1 - sets EFLAGS */
    if ((xmm3 <= xmm1)) goto loc_00127D70; /* jbe: below or equal (unsigned <=) */

loc_00127D6B: ;
    xmm1 = xmm3; /* movaps */
    goto loc_00127D78;

loc_00127D70: ;
    /* comiss xmm1, xmm4 - sets EFLAGS */
    if ((xmm1 <= xmm4)) goto loc_00127D78; /* jbe: below or equal (unsigned <=) */

loc_00127D75: ;
    xmm1 = xmm4; /* movaps */

loc_00127D78: ;
    eax = MEM32(esp + 0x120);
    edx = MEM32(esp + 0xF8);
    xmm4 = MEMF(0x648E14); /* movss */
    xmm5 = MEMF(0x648D14); /* movss */
    PUSH32(esp, eax);
    ecx = esp + 0xB0;
    PUSH32(esp, ecx);
    PUSH32(esp, ebp);
    ebp = MEM32(esp + 0x100);
    PUSH32(esp, edi);
    edi = MEM32(esp + 0x11C);
    PUSH32(esp, edx);
    xmm0 = xmm0 * xmm4; /* mulss */
    xmm2 = xmm2 * xmm4; /* mulss */
    xmm1 = xmm1 * xmm4; /* mulss */
    edx = ebp;
    esi = esp + 0x5C;
    ecx = edi;
    MEMF(0x74FB30) = xmm0; /* movss */
    MEMF(0x74FB34) = xmm2; /* movss */
    MEMF(0x74FB38) = xmm1; /* movss */
    MEMF(0x74FB3C) = xmm5; /* movss */
    PUSH32(esp, 0); sub_00128F20(); /* call 0x00128F20 */

loc_00127DE9: ;
    esi = MEM32(0x8493A4);
    edx = 0; /* xor self */
    esp = esp + 0x14;
    (void)0; /* test esi, esi - flags set for next jcc */
    MEM32(esp + 0x10) = edx;
    if (TEST_Z(esi, esi)) goto loc_00127FD1; /* je: equal / zero */

loc_00127E00: ;
    xmm6 = MEMF(0x648D80); /* movss */
    xmm7 = MEMF(0x649B7C); /* movss */
    ebx = 1;
    ecx = ebp;
    ebx = ebx << LO8(ecx);
    MEM32(esp + 0x24) = ebx;
    /* nop */

loc_00127E20: ;
    SET_LO8(eax, MEM8(esp + 0x118));
    if (TEST_Z(MEM8(esi + 0x59), LO8(eax))) goto loc_00127FC2; /* je: equal / zero */

loc_00127E30: ;
    if (CMP_EQ(MEM8(esi + 0x5A), 1)) goto loc_00127FC2; /* je: equal / zero */

loc_00127E3A: ;
    if (TEST_NZ(MEM8(esi + 0x5B), LO8(ebx))) goto loc_00127FC2; /* jne: not equal / not zero */

loc_00127E43: ;
    xmm0 = MEMF(esi + 0xC); /* movss */
    /* ucomiss xmm0, MEMF(0x649194) - sets EFLAGS */
    /* lahf - load AH from flags (used in FPU compare idiom) */
    if (1 /* jnp after test - parity */) goto loc_00127E6C; /* jnp: not parity */

loc_00127E55: ;
    ecx = MEM32(esi + 0xC);
    edx = MEM32(esi + 0x10);
    eax = MEM32(esi + 0x14);
    MEM32(esp + 0x14) = ecx;
    MEM32(esp + 0x18) = edx;
    MEM32(esp + 0x1C) = eax;
    goto loc_00127E9B;

loc_00127E6C: ;
    xmm0 = MEMF(esi + 0x10); /* movss */
    MEMF(esp + 0x20) = xmm0; /* movss */
    eax = MEM32(esp + 0x20);
    xmm0 = MEMF(eax); /* movss */
    MEMF(esp + 0x14) = xmm0; /* movss */
    xmm0 = MEMF(eax + 4); /* movss */
    MEMF(esp + 0x18) = xmm0; /* movss */
    xmm0 = MEMF(eax + 8); /* movss */
    MEMF(esp + 0x1C) = xmm0; /* movss */

loc_00127E9B: ;
    SET_LO8(eax, MEM8(esi + 0x58));
    if (TEST_Z(LO8(eax), LO8(eax))) goto loc_00127EAA; /* je: equal / zero */

loc_00127EA2: ;
    xmm0 = xmm6; /* movaps */
    goto loc_00127F51;

loc_00127EAA: ;
    ecx = esp + 0x14;
    edx = esp + 0x48;
    eax = esp + 0x34;
    MEM32(esp + 0x40) = ecx;
    MEM32(esp + 0x28) = edx;
    MEM32(esp + 0x44) = eax;
    ecx = MEM32(esp + 0x28);
    xmm0 = MEMF(ecx); /* movss */
    xmm0 = MEMD(ecx + 4); /* movhps */
    edx = MEM32(esp + 0x40);
    xmm1 = MEMF(edx); /* movss */
    xmm1 = MEMD(edx + 4); /* movhps */
    /* subps: xmm0 -= xmm1 (packed 4xfloat) */
    eax = MEM32(esp + 0x44);
    MEMF(eax) = xmm0; /* movss */
    MEMD(eax + 4) = xmm0; /* movhps */
    ecx = esp + 0x34;
    MEM32(esp + 0x28) = ecx;
    edx = MEM32(esp + 0x28);
    xmm1 = MEMF(edx); /* movss */
    xmm1 = MEMD(edx + 4); /* movhps */
    xmm2 = xmm1; /* movaps */
    /* mulps: xmm1 *= xmm2 (packed 4xfloat) */
    xmm0 = xmm1; /* movaps */
    /* shufps xmm0, xmm0, 0x32 */
    /* addps: xmm1 += xmm0 (packed 4xfloat) */
    /* shufps xmm0, xmm0, 0x32 */
    /* addps: xmm1 += xmm0 (packed 4xfloat) */
    MEMF(esp + 0x2C) = xmm1; /* movss */
    (void)0; /* test MEM8(esp + 0x120), 4 - flags set for next jcc */
    xmm1 = MEMF(esi + 0x4C); /* movss */
    xmm0 = MEMF(esp + 0x2C); /* movss */
    xmm1 = xmm1 + xmm7; /* addss */
    xmm0 = xmm0 / xmm1; /* divss */
    if (TEST_NZ(MEM8(esp + 0x120), 4)) goto loc_00127F51; /* jne: not equal / not zero */

loc_00127F37: ;
    xmm1 = MEMF(esi + 0x4C); /* movss */
    xmm1 = xmm1 * MEMF(0x6494E0); /* mulss */
    /* comiss xmm0, xmm1 - sets EFLAGS */
    if ((xmm0 <= xmm1)) goto loc_00127F51; /* jbe: below or equal (unsigned <=) */

loc_00127F49: ;
    xmm0 = MEMF(0x64A490); /* movss */

loc_00127F51: ;
    edx = edi + -1;
    ecx = 0; /* xor self */
    if (CMP_LE(edx & edx, 0)) goto loc_00127FC2; /* jle: less or equal (signed <=) */

loc_00127F5A: ;
    /* nop */

loc_00127F60: ;
    xmm1 = MEMF(esp + ecx * 4 + 0xAC); /* movss */
    /* comiss xmm1, xmm0 - sets EFLAGS */
    if ((xmm1 > xmm0)) goto loc_00127F75; /* ja: above (unsigned >) */

loc_00127F6E: ;
    ecx++;
    if (CMP_L(ecx, edx)) goto loc_00127F60; /* jl: less (signed <) */

loc_00127F73: ;
    goto loc_00127FC2;

loc_00127F75: ;
    eax = edi + -2;
    if (CMP_LE(eax, ecx)) goto loc_00127FA5; /* jle: less or equal (signed <=) */

loc_00127F7C: ;
    /* nop */

loc_00127F80: ;
    ebx = MEM32(esp + eax * 4 + 0xA8);
    MEM32(esp + eax * 4 + 0xAC) = ebx;
    ebx = MEM32(esp + eax * 4 + 0xD0);
    MEM32(esp + eax * 4 + 0xD4) = ebx;
    eax--;
    if (CMP_G(eax, ecx)) goto loc_00127F80; /* jg: greater (signed >) */

loc_00127FA1: ;
    ebx = MEM32(esp + 0x24);

loc_00127FA5: ;
    eax = MEM32(esp + 0x10);
    (void)0; /* cmp eax, edx - flags set for next jcc */
    MEMF(esp + ecx * 4 + 0xAC) = xmm0; /* movss */
    MEM32(esp + ecx * 4 + 0xD4) = esi;
    if (CMP_EQ(eax, edx)) goto loc_00127FC2; /* je: equal / zero */

loc_00127FBD: ;
    eax++;
    MEM32(esp + 0x10) = eax;

loc_00127FC2: ;
    esi = MEM32(esi + 4);
    if (TEST_NZ(esi, esi)) goto loc_00127E20; /* jne: not equal / not zero */

loc_00127FCD: ;
    edx = MEM32(esp + 0x10);

loc_00127FD1: ;
    eax = MEM32(esp + 0x114);
    if (TEST_Z(eax, eax)) goto loc_00127FDE; /* je: equal / zero */

loc_00127FDC: ;
    MEM8(eax) = LO8(edx);

loc_00127FDE: ;
    if (TEST_Z(edi, edi)) goto loc_001281F7; /* je: equal / zero */

loc_00127FE6: ;
    eax = 0; /* xor self */
    if (CMP_LE(edx & edx, 0)) goto loc_00128093; /* jle: less or equal (signed <=) */

loc_00127FF0: ;
    eax = MEM32(esp + 0x124);
    ecx = MEM32(esp + 0x120);
    ebp = MEM32(esp + 0x108);
    esi = esp + 0xD4;
    ecx = ecx & 0x20;
    esi = esi - eax;
    MEM32(esp + 0x20) = edx;
    edx = MEM32(esp + 0x10);
    MEM32(esp + 0x24) = ecx;
    ebx = 0x7737A8;
    edi = eax;
    MEM32(esp + 0x2C) = esi;
    ebp = ebp - eax;
    MEM32(esp + 0x28) = edx;
    goto loc_00128040;

loc_00128030: ;
    ecx = MEM32(esp + 0x24);
    eax = MEM32(esp + 0x124);
    esi = MEM32(esp + 0x2C);
    /* nop */

loc_00128040: ;
    (void)0; /* test eax, eax - flags set for next jcc */
    esi = MEM32(esi + edi);
    if (TEST_Z(eax, eax)) goto loc_00128049; /* je: equal / zero */

loc_00128047: ;
    MEM32(edi) = esi;

loc_00128049: ;
    if (TEST_Z(ecx, ecx)) goto loc_0012805B; /* je: equal / zero */

loc_0012804D: ;
    ecx = MEM32(esp + 0xF4);
    SET_LO8(eax, 1);
    SET_LO8(eax, LO8(eax) << LO8(ecx));
    MEM8(esi + 0x5D) = MEM8(esi + 0x5D) | LO8(eax);

loc_0012805B: ;
    eax = ebx;
    MEM32(edi + ebp) = esi;
    PUSH32(esp, 0); sub_00124900(); /* call 0x00124900 */

loc_00128065: ;
    eax = MEM32(esp + 0x20);
    edi = edi + 4;
    ebx = ebx + 0x4C;
    eax--;
    MEM32(esp + 0x20) = eax;
    if ((eax != 0)) goto loc_00128030; /* jne: not equal / not zero */

loc_00128076: ;
    xmm3 = 0.0f; /* xorps self = zero */
    xmm5 = MEMF(0x648D14); /* movss */
    ebp = MEM32(esp + 0xF4);
    eax = MEM32(esp + 0x28);
    edi = MEM32(esp + 0x10C);

loc_00128093: ;
    if (CMP_GE(eax, 7)) goto loc_0012810F; /* jge: greater or equal (signed >=) */

loc_00128098: ;
    edi = 7;
    esi = 0x773D68;
    edi = edi - eax;
    ebx = 0xA;
    /* nop */

loc_001280B0: ;
    edx = MEM32(esi + -48);
    eax = MEM32(0x5A02D0);
    MEMF(esi + -4) = xmm3; /* movss */
    MEMF(esi) = xmm3; /* movss */
    MEMF(esi + 4) = xmm5; /* movss */
    edx = edx | 8;
    MEM32(esi + -48) = edx;
    edx = MEM32(0x5A02CC);
    ecx = esi + -16;
    MEM32(ecx) = edx;
    edx = MEM32(0x5A02D4);
    MEM32(ecx + 4) = eax;
    MEM32(ecx + 8) = edx;
    MEMF(esi + -44) = xmm3; /* movss */
    MEMF(esi + -40) = xmm3; /* movss */
    MEMF(esi + -36) = xmm3; /* movss */
    MEMF(esi + -32) = xmm5; /* movss */
    ecx = esi + -56;
    MEM32(esi + -48) = ebx;
    PUSH32(esp, 0); sub_003EA070(); /* call 0x003EA070 */

loc_00128102: ;
    esi = esi + 0x4C;
    edi--;
    if ((edi != 0)) goto loc_001280B0; /* jne: not equal / not zero */

loc_00128108: ;
    edi = MEM32(esp + 0x10C);

loc_0012810F: ;
    eax = MEM32(esp + 0x30);
    if (TEST_Z(eax, eax)) goto loc_001281E6; /* je: equal / zero */

loc_0012811B: ;
    if (CMP_LE(edi & edi, 0)) goto loc_001281E6; /* jle: less or equal (signed <=) */

loc_00128123: ;
    eax = MEM32(ebp * 4 + 0x76FDE4);
    xmm0 = MEMF(esp + 0x54); /* movss */
    MEM32(eax + 8) = 1;
    ecx = MEM32(ebp * 4 + 0x76FDE4);
    MEMF(ecx + 0x18) = xmm0; /* movss */
    edx = MEM32(ebp * 4 + 0x76FDE4);
    xmm0 = MEMF(esp + 0x58); /* movss */
    MEMF(edx + 0x1C) = xmm0; /* movss */
    eax = MEM32(ebp * 4 + 0x76FDE4);
    xmm0 = MEMF(esp + 0x5C); /* movss */
    MEMF(eax + 0x20) = xmm0; /* movss */
    eax = MEM32(ebp * 4 + 0x76FDE4);
    eax = eax + 0x38;
    ecx = ebp + ebp * 2;
    edx = ecx * 4 + 0x773C7C;
    ecx = MEM32(edx);
    MEM32(eax) = ecx;
    ecx = MEM32(edx + 4);
    MEM32(eax + 4) = ecx;
    edx = MEM32(edx + 8);
    MEM32(eax + 8) = edx;
    ecx = MEM32(0x8470DC);
    eax = ebp;
    eax = (uint32_t)((int32_t)eax * (int32_t)0x770);
    edx = eax + ecx + 0x330;
    ecx = MEM32(edx);
    eax = MEM32(ebp * 4 + 0x76FDE4);
    eax = eax + 0xC;
    MEM32(eax) = ecx;
    ecx = MEM32(edx + 4);
    MEM32(eax + 4) = ecx;
    edx = MEM32(edx + 8);
    ecx = MEM32(esp + 0x108);
    MEM32(eax + 8) = edx;
    eax = MEM32(ebp * 4 + 0x76FDE4);
    edx = edi;
    edx = (uint32_t)((int32_t)edx * (int32_t)0x4C);
    MEM32(ecx + edi * 4 + -4) = eax;
    esi = MEM32(ebp * 4 + 0x76FDE4);
    eax = edx + 0x77375C;
    PUSH32(esp, 0); sub_00124900(); /* call 0x00124900 */

loc_001281E4: ;
    goto loc_00128217;

loc_001281E6: ;
    eax = MEM32(esp + 0x108);
    MEM32(eax + edi * 4 + -4) = 0;
    goto loc_00128217;

loc_001281F7: ;
    MEMF(0x74FB30) = xmm4; /* movss */
    MEMF(0x74FB34) = xmm4; /* movss */
    MEMF(0x74FB38) = xmm4; /* movss */
    MEMF(0x74FB3C) = xmm5; /* movss */

loc_00128217: ;
    ecx = MEM32(esp + 0x10);
    ebx = MEM32(esp + 0x108);
    PUSH32(esp, edi);
    PUSH32(esp, ecx);
    PUSH32(esp, 0); sub_00129050(); /* call 0x00129050 */

loc_00128229: ;
    eax = MEM32(0x84A13C);
    edx = ebp;
    edx = (uint32_t)((int32_t)edx * (int32_t)0x2B0);
    ecx = edx + eax + 0x40;
    PUSH32(esp, ecx);
    PUSH32(esp, 0); sub_003EA230(); /* call 0x003EA230 */

loc_00128240: ;
    eax = MEM32(0x819FE4);
    edi = 0; /* xor self */
    esp = esp + 0xC;
    esi = 0; /* xor self */
    if (CMP_EQ(eax, edi)) goto loc_0012826D; /* je: equal / zero */

loc_00128250: ;
    if (CMP_AE(LO16(esi), 4)) goto loc_00128264; /* jae: above or equal (unsigned >=) */

loc_00128256: ;
    if (CMP_NE(MEM32(eax + 8), 1)) goto loc_0012825D; /* jne: not equal / not zero */

loc_0012825C: ;
    esi++;

loc_0012825D: ;
    eax = MEM32(eax + 4);
    if (CMP_NE(eax, edi)) goto loc_00128250; /* jne: not equal / not zero */

loc_00128264: ;
    if (CMP_NE(LO16(esi), LO16(edi))) goto loc_0012832B; /* jne: not equal / not zero */

loc_0012826D: ;
    if (CMP_EQ(MEM32(esp + 0x30), edi)) goto loc_0012832B; /* je: equal / zero */

loc_00128277: ;
    edx = ebp + ebp * 2;
    ebp = MEM32(ebp * 4 + 0x76FDE4);
    eax = edx * 4 + 0x773C7C;
    ecx = MEM32(eax);
    edx = MEM32(eax + 4);
    eax = MEM32(eax + 8);
    MEM32(esp + 0x7C) = ecx;
    MEM32(esp + 0x80) = edx;
    MEM32(esp + 0x84) = eax;
    MEM32(esp + 0x68) = 1;
    fp_push(MEMF(ebp + 0x20)); /* fld float */
    fp_st1() *= fp_top(); fp_pop(); /* fmul */
    PUSH32(esp, 0); sub_00471288(); /* call 0x00471288 */

loc_001282B9: ;
    fp_push(MEMF(ebp + 0x1C)); /* fld float */
    fp_st1() *= fp_top(); fp_pop(); /* fmul */
    ecx = ZX8(LO8(eax));
    xmm0 = (float)(int32_t)ecx; /* cvtsi2ss */
    MEMF(esp + 0x2C) = xmm0; /* movss */
    PUSH32(esp, 0); sub_00471288(); /* call 0x00471288 */

loc_001282D4: ;
    fp_push(MEMF(ebp + 0x18)); /* fld float */
    fp_st1() *= fp_top(); fp_pop(); /* fmul */
    edx = ZX8(LO8(eax));
    xmm0 = (float)(int32_t)edx; /* cvtsi2ss */
    MEMF(esp + 0x24) = xmm0; /* movss */
    PUSH32(esp, 0); sub_00471288(); /* call 0x00471288 */

loc_001282EF: ;
    eax = ZX8(LO8(eax));
    xmm0 = (float)(int32_t)eax; /* cvtsi2ss */
    MEMF(esp + 0x6C) = xmm0; /* movss */
    xmm0 = MEMF(esp + 0x24); /* movss */
    MEMF(esp + 0x70) = xmm0; /* movss */
    xmm0 = MEMF(esp + 0x2C); /* movss */
    MEMF(esp + 0x74) = xmm0; /* movss */
    xmm0 = MEMF(0x648EEC); /* movss */
    ecx = esp + 0x60;
    MEMF(esp + 0x78) = xmm0; /* movss */
    PUSH32(esp, 0); sub_003EA070(); /* call 0x003EA070 */

loc_0012832B: ;
    PUSH32(esp, 0); sub_003EA180(); /* call 0x003EA180 */

loc_00128330: ;
    (void)0; /* cmp LO16(esi), LO16(edi) - flags set for next jcc */
    POP32(esp, esi);
    POP32(esp, ebp);
    POP32(esp, ebx);
    if (CMP_NE(LO16(esi), LO16(edi))) goto loc_0012835C; /* jne: not equal / not zero */

loc_00128338: ;
    if (CMP_EQ(MEM32(esp + 0x24), edi)) goto loc_0012835C; /* je: equal / zero */

loc_0012833E: ;
    eax = MEM32(esp + 0x58);
    (void)0; /* cmp eax, edi - flags set for next jcc */
    ecx = MEM32(esp + 0x54);
    MEM32(ecx + 4) = eax;
    if (CMP_EQ(eax, edi)) goto loc_0012834F; /* je: equal / zero */

loc_0012834D: ;
    MEM32(eax) = ecx;

loc_0012834F: ;
    MEM32(esp + 0x54) = edi;
    MEM32(esp + 0x58) = edi;
    PUSH32(esp, 0); sub_003EA030(); /* call 0x003EA030 */

loc_0012835C: ;
    POP32(esp, edi);
    esp = esp + 0xE0;
    esp += 4; return; /* ret */

    #undef fp_push
    #undef fp_pop
    #undef fp_popp
    #undef fp_top
    #undef fp_st1
}

/**
 * sub_00128370
 * Original: 0x00128370 - 0x001283EA (122 bytes, 35 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00128370(void)
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

loc_00128370: ;
    eax = MEM32(esp + 4);
    esp = esp - 0x1C;
    PUSH32(esp, ebp);
    ebp = MEM32(esp + 0x30);
    PUSH32(esp, esi);
    esi = MEM32(esp + 0x30);
    PUSH32(esp, edi);
    edi = MEM32(esp + 0x30);
    PUSH32(esp, esi);
    PUSH32(esp, edi);
    PUSH32(esp, eax);
    eax = MEM32(0x8493A8);
    PUSH32(esp, 0); sub_00128A00(); /* call 0x00128A00 */

loc_00128393: ;
    esp = esp + 0xC;
    if (TEST_Z(eax, eax)) { sub_001283EA(); return; } /* je: equal / zero */

loc_0012839A: ;
    ecx = MEM32(eax + 0x18);
    ecx = ecx & 0xFF;
    (void)0; /* test ecx, ecx - flags set for next jcc */
    MEM32(esp + 0xC) = ecx;
    fp_push((double)SMEM32(esp + 0xC)); /* fild */
    if (CMP_GE(ecx & ecx, 0)) goto loc_001283B5; /* jge: greater or equal (signed >=) */

loc_001283AF: ;
    fp_st1() += fp_top(); fp_pop(); /* fadd */

loc_001283B5: ;
    fp_st1() *= fp_top(); fp_pop(); /* fmul */
    xmm0 = MEMF(0x648CEC); /* movss */
    MEMF(ebp) = (float)fp_top(); fp_popp(); /* fstp */
    edx = ZX8(MEM8(eax + 0x19));
    xmm1 = (float)(int32_t)edx; /* cvtsi2ss */
    xmm1 = xmm1 * xmm0; /* mulss */
    MEMF(ebp + 4) = xmm1; /* movss */
    eax = ZX8(MEM8(eax + 0x1A));
    xmm1 = (float)(int32_t)eax; /* cvtsi2ss */
    xmm1 = xmm1 * xmm0; /* mulss */
    MEMF(ebp + 8) = xmm1; /* movss */
    g_seh_ebp = ebp; sub_00128411(); return; /* tail jmp 0x00128411 */

    #undef fp_push
    #undef fp_pop
    #undef fp_popp
    #undef fp_top
    #undef fp_st1
}

/**
 * sub_00128530
 * Original: 0x00128530 - 0x00128690 (352 bytes, 102 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00128530(void)
{
    uint32_t ebp;
    int _flags = 0; /* fallback flag var */
    float xmm0, xmm1, xmm2, xmm3, xmm4, xmm5;
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_00128530: ;
    ecx = MEM32(0x81B7C0);
    PUSH32(esp, ebx);
    ebx = ZX8(MEM8(esp + 0x14));
    PUSH32(esp, ebp);
    PUSH32(esp, esi);
    PUSH32(esp, edi);
    ebp = 0; /* xor self */
    ecx = ecx & 0x80000000u;
    edi = ebx;
    edi = edi & 0x7F;
    MEM8(0x819FE8) = 0;
    MEM32(0x819FE0) = ebp;
    MEM32(0x819FE4) = ebp;
    MEM32(0x81B7C0) = ecx;
    if (((int32_t)edi <= 0)) goto loc_00128590; /* jle: less or equal (signed <=) */

loc_00128567: ;
    MEM32(esp + 0x20) = 0x7737A8;
    /* nop */

loc_00128570: ;
    eax = MEM32(esp + 0x18);
    esi = MEM32(eax + ebp * 4);
    eax = MEM32(esp + 0x20);
    PUSH32(esp, 0); sub_00124900(); /* call 0x00124900 */

loc_00128580: ;
    ecx = MEM32(esp + 0x20);
    ebp++;
    ecx = ecx + 0x4C;
    (void)0; /* cmp ebp, edi - flags set for next jcc */
    MEM32(esp + 0x20) = ecx;
    if (CMP_L(ebp, edi)) goto loc_00128570; /* jl: less (signed <) */

loc_00128590: ;
    ecx = ZX8(MEM8(esp + 0x1C));
    edx = MEM32(esp + 0x18);
    esi = MEM32(edx + ecx * 4 + -4);
    (void)0; /* test esi, esi - flags set for next jcc */
    xmm0 = 0.0f; /* xorps self = zero */
    if (TEST_Z(esi, esi)) goto loc_001285E0; /* je: equal / zero */

loc_001285A4: ;
    xmm1 = MEMF(esi + 0x18); /* movss */
    /* ucomiss xmm1, xmm0 - sets EFLAGS */
    /* lahf - load AH from flags (used in FPU compare idiom) */
    if (1 /* jp after test - parity */) goto loc_001285CE; /* jp: parity */

loc_001285B2: ;
    xmm1 = MEMF(esi + 0x1C); /* movss */
    /* ucomiss xmm1, xmm0 - sets EFLAGS */
    /* lahf - load AH from flags (used in FPU compare idiom) */
    if (1 /* jp after test - parity */) goto loc_001285CE; /* jp: parity */

loc_001285C0: ;
    xmm1 = MEMF(esi + 0x20); /* movss */
    /* ucomiss xmm1, xmm0 - sets EFLAGS */
    /* lahf - load AH from flags (used in FPU compare idiom) */
    if (1 /* jnp after test - parity */) goto loc_001285E0; /* jnp: not parity */

loc_001285CE: ;
    eax = ebp;
    eax = (uint32_t)((int32_t)eax * (int32_t)0x4C);
    eax = eax + 0x7737A8;
    PUSH32(esp, 0); sub_00124900(); /* call 0x00124900 */

loc_001285DD: ;
    xmm0 = 0.0f; /* xorps self = zero */

loc_001285E0: ;
    (void)0; /* cmp ebx, 7 - flags set for next jcc */
    xmm5 = MEMF(0x648D14); /* movss */
    if (CMP_GE(ebx, 7)) goto loc_00128668; /* jge: greater or equal (signed >=) */

loc_001285ED: ;
    esi = ebx;
    esi = esi - ebp;
    esi = (uint32_t)((int32_t)esi * (int32_t)0x4C);
    edi = 7;
    esi = esi + 0x773D68;
    edi = edi - ebx;
    ebp = 8;
    ebx = 0xA;
    goto loc_00128610;

    /* nop */

loc_00128610: ;
    edx = MEM32(esi + -48);
    ecx = MEM32(0x5A02CC);
    MEMF(esi + -4) = xmm0; /* movss */
    MEMF(esi) = xmm0; /* movss */
    MEMF(esi + 4) = xmm5; /* movss */
    edx = edx | ebp;
    MEM32(esi + -48) = edx;
    edx = MEM32(0x5A02D0);
    eax = esi + -16;
    MEM32(eax) = ecx;
    ecx = MEM32(0x5A02D4);
    MEM32(eax + 4) = edx;
    MEM32(eax + 8) = ecx;
    MEMF(esi + -44) = xmm0; /* movss */
    MEMF(esi + -40) = xmm0; /* movss */
    MEMF(esi + -36) = xmm0; /* movss */
    MEMF(esi + -32) = xmm5; /* movss */
    ecx = esi + -56;
    MEM32(esi + -48) = ebx;
    PUSH32(esp, 0); sub_003EA070(); /* call 0x003EA070 */

loc_00128662: ;
    esi = esi + 0x4C;
    edi--;
    if ((edi != 0)) goto loc_00128610; /* jne: not equal / not zero */

loc_00128668: ;
    eax = MEM32(esp + 0x24);
    xmm1 = MEMF(eax); /* movss */
    /* comiss xmm0, xmm1 - sets EFLAGS */
    xmm2 = MEMF(eax + 8); /* movss */
    xmm3 = MEMF(eax + 4); /* movss */
    xmm4 = MEMF(0x648D18); /* movss */
    POP32(esp, edi);
    POP32(esp, esi);
    POP32(esp, ebp);
    POP32(esp, ebx);
    if ((xmm0 <= xmm1)) { sub_00128690(); return; } /* jbe: below or equal (unsigned <=) */

loc_0012868B: ;
    xmm1 = xmm0; /* movaps */
    g_seh_ebp = ebp; sub_00128698(); return; /* tail jmp 0x00128698 */

}

/**
 * sub_00128710
 * Original: 0x00128710 - 0x001287F1 (225 bytes, 60 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00128710(void)
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

loc_00128710: ;
    PUSH32(esp, ecx);
    eax = MEM32(esp + 0x10);
    ecx = MEM32(esp + 0xC);
    edx = MEM32(esp + 8);
    PUSH32(esp, ebx);
    PUSH32(esp, ebp);
    ebp = MEM32(esp + 0x20);
    PUSH32(esp, eax);
    eax = MEM32(0x8493AC);
    PUSH32(esp, ecx);
    PUSH32(esp, edx);
    ebx = 0; /* xor self */
    PUSH32(esp, 0); sub_00128A00(); /* call 0x00128A00 */

loc_00128732: ;
    xmm0 = MEMF(0x648CEC); /* movss */
    esp = esp + 0xC;
    if (TEST_Z(eax, eax)) { sub_001287F1(); return; } /* je: equal / zero */

loc_00128745: ;
    ecx = MEM32(eax + 0x18);
    ecx = ecx & 0xFF;
    (void)0; /* test ecx, ecx - flags set for next jcc */
    MEM32(esp + 8) = ecx;
    fp_push((double)SMEM32(esp + 8)); /* fild */
    if (CMP_GE(ecx & ecx, 0)) goto loc_00128760; /* jge: greater or equal (signed >=) */

loc_0012875A: ;
    fp_st1() += fp_top(); fp_pop(); /* fadd */

loc_00128760: ;
    fp_st1() *= fp_top(); fp_pop(); /* fmul */
    MEMF(edi) = (float)fp_top(); fp_popp(); /* fstp */
    edx = ZX8(MEM8(eax + 0x19));
    xmm1 = (float)(int32_t)edx; /* cvtsi2ss */
    xmm1 = xmm1 * xmm0; /* mulss */
    MEMF(edi + 4) = xmm1; /* movss */
    ecx = ZX8(MEM8(eax + 0x1A));
    xmm1 = (float)(int32_t)ecx; /* cvtsi2ss */
    xmm1 = xmm1 * xmm0; /* mulss */
    MEMF(edi + 8) = xmm1; /* movss */
    edx = MEM32(eax + 0x1C);
    edx = edx & 0xFF;
    (void)0; /* test edx, edx - flags set for next jcc */
    MEM32(esp + 8) = edx;
    fp_push((double)SMEM32(esp + 8)); /* fild */
    if (CMP_GE(edx & edx, 0)) goto loc_001287A5; /* jge: greater or equal (signed >=) */

loc_0012879F: ;
    fp_st1() += fp_top(); fp_pop(); /* fadd */

loc_001287A5: ;
    fp_st1() *= fp_top(); fp_pop(); /* fmul */
    MEMF(esi) = (float)fp_top(); fp_popp(); /* fstp */
    ecx = ZX8(MEM8(eax + 0x1D));
    xmm1 = (float)(int32_t)ecx; /* cvtsi2ss */
    xmm1 = xmm1 * xmm0; /* mulss */
    MEMF(esi + 4) = xmm1; /* movss */
    edx = ZX8(MEM8(eax + 0x1E));
    xmm1 = (float)(int32_t)edx; /* cvtsi2ss */
    xmm1 = xmm1 * xmm0; /* mulss */
    MEMF(esi + 8) = xmm1; /* movss */
    ecx = ZX8(MEM8(eax + 0x1F));
    xmm1 = (float)(int32_t)ecx; /* cvtsi2ss */
    ecx = MEM32(esp + 0x1C);
    xmm1 = xmm1 * xmm0; /* mulss */
    MEMF(ecx) = xmm1; /* movss */
    edx = ZX8(MEM8(eax + 0x1B));
    xmm1 = (float)(int32_t)edx; /* cvtsi2ss */
    xmm1 = xmm1 * xmm0; /* mulss */
    g_seh_ebp = ebp; sub_00128857(); return; /* tail jmp 0x00128857 */

    #undef fp_push
    #undef fp_pop
    #undef fp_popp
    #undef fp_top
    #undef fp_st1
}

/**
 * sub_00128930
 * Original: 0x00128930 - 0x00128965 (53 bytes, 12 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00128930(void)
{
    uint32_t ebp;
    int _flags = 0; /* fallback flag var */
    float xmm0, xmm1, xmm4;
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_00128930: ;
    xmm1 = 0.0f; /* xorps self = zero */
    xmm4 = MEMF(0x648D18); /* movss */
    ecx = 0; /* xor self */
    MEM32(0x819FE0) = ecx;
    MEM32(0x819FE4) = ecx;
    ecx = MEM32(0x81B7C0);
    ecx = ecx & 0x80000000u;
    /* comiss xmm1, xmm0 - sets EFLAGS */
    MEM32(0x81B7C0) = ecx;
    if ((xmm1 <= xmm0)) { sub_00128965(); return; } /* jbe: below or equal (unsigned <=) */

loc_00128960: ;
    xmm0 = xmm1; /* movaps */
    g_seh_ebp = ebp; sub_0012896D(); return; /* tail jmp 0x0012896D */

}

/**
 * sub_00128A00
 * Original: 0x00128A00 - 0x00128D9F (927 bytes, 239 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00128A00(void)
{
    uint32_t ebp;
    int _flags = 0; /* fallback flag var */
    int _fpu_cmp = 0; /* FPU compare result: -1/0/1 */
    float xmm0, xmm1, xmm2, xmm3, xmm4, xmm5, xmm6, xmm7;
    double _fp_stack[8];
    int _fp_top = 0;
    #define fp_push(v) (_fp_stack[--_fp_top & 7] = (v))
    #define fp_pop() (_fp_top++)
    #define fp_popp() (fp_pop())
    #define fp_top() _fp_stack[_fp_top & 7]
    #define fp_st1() _fp_stack[(_fp_top + 1) & 7]

loc_00128A00: ;
    PUSH32(esp, ebp);
    ebp = esp;
    esp = esp & 0xFFFFFFF0u;
    esp = esp - 0x70C;
    PUSH32(esp, esi);
    esi = eax;
    eax = esp + 0x40;
    PUSH32(esp, 0); sub_00128DC0(); /* call 0x00128DC0 */

loc_00128A18: ;
    if (TEST_Z(esi, esi)) goto loc_00128D98; /* je: equal / zero */

loc_00128A20: ;
    xmm7 = 0.0f; /* xorps self = zero */

loc_00128A23: ;
    eax = MEM32(esi + 4);
    SET_LO8(ecx, MEM8(eax + 0x14));
    if (TEST_NZ(LO8(ecx), LO8(ecx))) goto loc_00128D8E; /* jne: not equal / not zero */

loc_00128A31: ;
    if (TEST_Z(ebx, ebx)) goto loc_00128A3E; /* je: equal / zero */

loc_00128A35: ;
    if (TEST_Z(MEM8(eax + 0x1B), LO8(ebx))) goto loc_00128D8E; /* je: equal / zero */

loc_00128A3E: ;
    SET_LO8(ecx, MEM8(eax + 0x15));
    SET_LO8(ecx, LO8(ecx) & 0xFC);
    if (CMP_EQ(LO8(ecx), 0x60)) goto loc_00128A54; /* je: equal / zero */

loc_00128A49: ;
    ecx = MEM32(eax + 0x18);
    if (TEST_S(ecx, ecx)) goto loc_00128D8E; /* js: sign (negative) */

loc_00128A54: ;
    if (TEST_Z(eax, eax)) goto loc_00128D8E; /* je: equal / zero */

loc_00128A5C: ;
    if (CMP_EQ(MEM8(eax + 0x14), 1)) goto loc_00128D8E; /* je: equal / zero */

loc_00128A66: ;
    edx = (uint32_t)(int32_t)SMEM16(eax);
    ecx = (uint32_t)(int32_t)SMEM16(eax + 2);
    xmm4 = MEMF(ebp + 8); /* movss */
    xmm1 = MEMF(ebp + 0xC); /* movss */
    xmm0 = (float)(int32_t)edx; /* cvtsi2ss */
    edx = (uint32_t)(int32_t)SMEM16(eax + 4);
    xmm4 = xmm4 - xmm0; /* subss */
    xmm0 = (float)(int32_t)ecx; /* cvtsi2ss */
    (void)0; /* test MEM8(eax + 0x16), 1 - flags set for next jcc */
    xmm1 = xmm1 - xmm0; /* subss */
    xmm0 = MEMF(ebp + 0x10); /* movss */
    xmm2 = (float)(int32_t)edx; /* cvtsi2ss */
    xmm0 = xmm0 - xmm2; /* subss */
    xmm3 = xmm4; /* movaps */
    MEMF(esp + 0x30) = xmm1; /* movss */
    MEMF(esp + 0x14) = xmm1; /* movss */
    xmm5 = xmm0; /* movaps */
    if (TEST_Z(MEM8(eax + 0x16), 1)) goto loc_00128AC1; /* je: equal / zero */

loc_00128AB0: ;
    xmm2 = MEMF(0x648D1C); /* movss */
    /* comiss xmm2, xmm7 - sets EFLAGS */
    if ((xmm2 < xmm7)) goto loc_00128D8E; /* jb: below (unsigned <) */

loc_00128AC1: ;
    ecx = 0; /* xor self */
    SET_LO8(ecx, MEM8(eax + 0x15));
    ecx = ecx & 3;
    if (CMP_A(ecx, 3)) goto loc_00128D8E; /* ja: above (unsigned >) */

loc_00128AD2: ;
    { uint32_t _jt = MEM32(ecx * 4 + 0x128DA8); /* switch: 4 entries, 4 targets */
    if (_jt == 0x00128AD9u) goto loc_00128AD9;
    if (_jt == 0x00128B9Eu) goto loc_00128B9E;
    if (_jt == 0x00128BCDu) goto loc_00128BCD;
    if (_jt == 0x00128C79u) goto loc_00128C79;
    g_seh_ebp = ebp; RECOMP_ITAIL(_jt); return; }

loc_00128AD9: ;
    xmm2 = MEMF(eax + 0xC); /* movss */
    xmm0 = MEMF(0x648E54); /* movss */
    /* comiss xmm2, xmm0 - sets EFLAGS */
    if ((xmm2 > xmm0)) goto loc_00128AF5; /* ja: above (unsigned >) */

loc_00128AEB: ;
    xmm2 = MEMF(eax + 0x10); /* movss */
    /* comiss xmm2, xmm0 - sets EFLAGS */
    if ((xmm2 <= xmm0)) goto loc_00128B4E; /* jbe: below or equal (unsigned <=) */

loc_00128AF5: ;
    xmm2 = MEMF(eax + 0x30); /* movss */
    xmm4 = MEMF(eax + 0x2C); /* movss */
    xmm6 = xmm2; /* movaps */
    xmm6 = xmm6 * xmm3; /* mulss */
    xmm2 = xmm2 * xmm5; /* mulss */
    xmm0 = xmm3; /* movaps */
    xmm0 = xmm0 * xmm4; /* mulss */
    xmm0 = xmm0 + xmm2; /* addss */
    xmm2 = MEMF(eax + 0x28); /* movss */
    xmm3 = xmm4; /* movaps */
    xmm4 = MEMF(eax + 0x24); /* movss */
    xmm3 = xmm3 * xmm5; /* mulss */
    xmm6 = xmm6 - xmm3; /* subss */
    xmm5 = xmm0; /* movaps */
    xmm3 = xmm6; /* movaps */
    xmm5 = xmm5 * xmm2; /* mulss */
    xmm2 = xmm2 * xmm1; /* mulss */
    xmm6 = xmm4; /* movaps */
    xmm6 = xmm6 * xmm1; /* mulss */
    xmm0 = xmm0 * xmm4; /* mulss */
    xmm0 = xmm0 + xmm2; /* addss */
    xmm5 = xmm5 - xmm6; /* subss */
    xmm1 = xmm0; /* movaps */

loc_00128B4E: ;
    xmm0 = xmm5; /* movaps */
    xmm2 = xmm3; /* movaps */
    xmm0 = xmm0 * xmm5; /* mulss */
    xmm2 = xmm2 * xmm3; /* mulss */
    xmm0 = xmm0 + xmm2; /* addss */
    MEMF(esp + 0x24) = xmm0; /* movss */
    xmm0 = sqrtf(MEMF(esp + 0x24)); /* sqrtss */
    MEMF(esp + 0x1C) = xmm0; /* movss */
    ecx = (uint32_t)(int32_t)SMEM16(eax + 6);
    xmm0 = (float)(int32_t)ecx; /* cvtsi2ss */
    /* comiss xmm0, MEMF(esp + 0x1C) - sets EFLAGS */
    if ((xmm0 <= MEMF(esp + 0x1C))) goto loc_00128D8E; /* jbe: below or equal (unsigned <=) */

loc_00128B85: ;
    /* comiss xmm1, xmm7 - sets EFLAGS */
    if ((xmm1 <= xmm7)) goto loc_00128D8E; /* jbe: below or equal (unsigned <=) */

loc_00128B8E: ;
    edx = (uint32_t)(int32_t)SMEM16(eax + 8);
    xmm0 = (float)(int32_t)edx; /* cvtsi2ss */
    /* comiss xmm0, xmm1 - sets EFLAGS */
    goto loc_00128D8C;

loc_00128B9E: ;
    ecx = esp + 0x34;
    PUSH32(esp, ecx);
    MEMF(esp + 0x38) = xmm3; /* movss */
    MEMF(esp + 0x3C) = xmm1; /* movss */
    MEMF(esp + 0x40) = xmm5; /* movss */
    PUSH32(esp, 0); sub_003E1F60(); /* call 0x003E1F60 */

loc_00128BBA: ;
    edx = (uint32_t)(int32_t)SMEM16(eax + 6);
    esp = esp + 4;
    xmm1 = (float)(int32_t)edx; /* cvtsi2ss */
    /* comiss xmm1, xmm0 - sets EFLAGS */
    goto loc_00128D8C;

loc_00128BCD: ;
    xmm2 = MEMF(eax + 0x30); /* movss */
    xmm6 = MEMF(eax + 0x2C); /* movss */
    ecx = (uint32_t)(int32_t)SMEM16(eax + 6);
    xmm0 = xmm3; /* movaps */
    xmm4 = xmm2; /* movaps */
    xmm4 = xmm4 * xmm3; /* mulss */
    xmm3 = xmm6; /* movaps */
    xmm3 = xmm3 * xmm5; /* mulss */
    xmm4 = xmm4 - xmm3; /* subss */
    xmm3 = (float)(int32_t)ecx; /* cvtsi2ss */
    /* comiss xmm3, xmm4 - sets EFLAGS */
    if ((xmm3 <= xmm4)) goto loc_00128D8E; /* jbe: below or equal (unsigned <=) */

loc_00128BFD: ;
    ecx = (uint32_t)(-(int32_t)ecx);
    xmm3 = (float)(int32_t)ecx; /* cvtsi2ss */
    /* comiss xmm4, xmm3 - sets EFLAGS */
    if ((xmm4 <= xmm3)) goto loc_00128D8E; /* jbe: below or equal (unsigned <=) */

loc_00128C0C: ;
    xmm4 = MEMF(eax + 0x24); /* movss */
    ecx = (uint32_t)(int32_t)SMEM16(eax + 0xA);
    xmm3 = MEMF(eax + 0x28); /* movss */
    xmm2 = xmm2 * xmm5; /* mulss */
    xmm0 = xmm0 * xmm6; /* mulss */
    xmm0 = xmm0 + xmm2; /* addss */
    xmm2 = xmm0; /* movaps */
    xmm5 = xmm4; /* movaps */
    xmm5 = xmm5 * xmm1; /* mulss */
    xmm0 = xmm0 * xmm3; /* mulss */
    xmm0 = xmm0 - xmm5; /* subss */
    xmm5 = (float)(int32_t)ecx; /* cvtsi2ss */
    /* comiss xmm5, xmm0 - sets EFLAGS */
    if ((xmm5 <= xmm0)) goto loc_00128D8E; /* jbe: below or equal (unsigned <=) */

loc_00128C45: ;
    ecx = (uint32_t)(-(int32_t)ecx);
    xmm5 = (float)(int32_t)ecx; /* cvtsi2ss */
    /* comiss xmm0, xmm5 - sets EFLAGS */
    if ((xmm0 <= xmm5)) goto loc_00128D8E; /* jbe: below or equal (unsigned <=) */

loc_00128C54: ;
    eax = (uint32_t)(int32_t)SMEM16(eax + 8);
    xmm2 = xmm2 * xmm4; /* mulss */
    xmm3 = xmm3 * xmm1; /* mulss */
    xmm2 = xmm2 + xmm3; /* addss */
    xmm0 = (float)(int32_t)eax; /* cvtsi2ss */
    /* comiss xmm0, xmm2 - sets EFLAGS */
    if ((xmm0 <= xmm2)) goto loc_00128D8E; /* jbe: below or equal (unsigned <=) */

loc_00128C71: ;
    /* comiss xmm2, xmm7 - sets EFLAGS */
    goto loc_00128D8C;

loc_00128C79: ;
    xmm1 = MEMF(eax + 0x2C); /* movss */
    xmm2 = MEMF(eax + 0x30); /* movss */
    xmm7 = xmm1; /* movaps */
    xmm7 = xmm7 * xmm5; /* mulss */
    xmm6 = xmm2; /* movaps */
    xmm6 = xmm6 * xmm3; /* mulss */
    xmm6 = xmm6 - xmm7; /* subss */
    MEMF(esp + 0x20) = xmm6; /* movss */
    xmm6 = xmm4; /* movaps */
    xmm6 = xmm6 * xmm2; /* mulss */
    xmm7 = xmm0; /* movaps */
    xmm7 = xmm7 * xmm1; /* mulss */
    xmm6 = xmm6 - xmm7; /* subss */
    xmm4 = xmm4 * xmm1; /* mulss */
    xmm3 = xmm3 * xmm1; /* mulss */
    MEMF(esp + 0x10) = xmm6; /* movss */
    xmm6 = xmm2; /* movaps */
    xmm0 = xmm0 * xmm2; /* mulss */
    xmm6 = xmm6 * xmm5; /* mulss */
    xmm5 = MEMF(eax + 0x28); /* movss */
    xmm0 = xmm0 + xmm4; /* addss */
    xmm4 = MEMF(eax + 0x24); /* movss */
    xmm3 = xmm3 + xmm6; /* addss */
    xmm6 = MEMF(esp + 0x30); /* movss */
    xmm2 = xmm3; /* movaps */
    xmm1 = xmm4; /* movaps */
    xmm1 = xmm1 * MEMF(esp + 0x14); /* mulss */
    xmm2 = xmm2 * xmm5; /* mulss */
    xmm2 = xmm2 - xmm1; /* subss */
    xmm1 = xmm0; /* movaps */
    xmm7 = xmm6; /* movaps */
    xmm7 = xmm7 * xmm4; /* mulss */
    xmm1 = xmm1 * xmm5; /* mulss */
    xmm1 = xmm1 - xmm7; /* subss */
    xmm7 = 0.0f; /* xorps self = zero */
    /* comiss xmm7, xmm1 - sets EFLAGS */
    MEMF(esp + 0x2C) = xmm2; /* movss */
    MEMF(esp + 0xC) = xmm1; /* movss */
    if ((xmm7 <= xmm1)) goto loc_00128D8E; /* jbe: below or equal (unsigned <=) */

loc_00128D18: ;
    /* comiss xmm2, xmm7 - sets EFLAGS */
    if ((xmm2 < xmm7)) goto loc_00128D8E; /* jb: below (unsigned <) */

loc_00128D1D: ;
    fp_push(MEMF(esp + 0xC)); /* fld float */
    ecx = (uint32_t)(int32_t)SMEM16(eax + 6);
    fp_st1() -= fp_top(); fp_pop(); /* fsub */
    MEM32(esp + 0x28) = ecx;
    xmm1 = xmm5; /* movaps */
    /* FPU: fdivr dword ptr [esp + 0xc] */
    xmm1 = xmm1 * MEMF(esp + 0x14); /* mulss */
    xmm3 = xmm3 * xmm4; /* mulss */
    xmm6 = xmm6 * xmm5; /* mulss */
    xmm0 = xmm0 * xmm4; /* mulss */
    xmm3 = xmm3 + xmm1; /* addss */
    xmm6 = xmm6 + xmm0; /* addss */
    MEMF(esp + 0x18) = (float)fp_top(); fp_popp(); /* fstp */
    fp_push(MEMF(esp + 0x20)); /* fld float */
    fp_st1() -= fp_top(); fp_pop(); /* fsub */
    fp_st1() *= fp_top(); fp_pop(); /* fmul */
    fp_st1() += fp_top(); fp_pop(); /* fadd */
    fp_top() = fabs(fp_top()); /* fabs */
    fp_push((double)SMEM32(esp + 0x28)); /* fild */
    _fpu_cmp = (fp_top() < fp_st1()) ? -1 : (fp_top() > fp_st1()) ? 1 : 0; fp_pop(); /* fcompi */
    /* fstp st(0) */
    if ((_fpu_cmp <= 0) /* fcompi */) goto loc_00128D8E; /* jbe: below or equal (unsigned <=) */

loc_00128D6E: ;
    xmm3 = xmm3 - xmm6; /* subss */
    xmm3 = xmm3 * MEMF(esp + 0x18); /* mulss */
    xmm3 = xmm3 + xmm6; /* addss */
    /* comiss xmm3, xmm7 - sets EFLAGS */
    if ((xmm3 < xmm7)) goto loc_00128D8E; /* jb: below (unsigned <) */

loc_00128D81: ;
    edx = (uint32_t)(int32_t)SMEM16(eax + 8);
    xmm0 = (float)(int32_t)edx; /* cvtsi2ss */
    /* comiss xmm0, xmm3 - sets EFLAGS */

loc_00128D8C: ;
    if ((xmm0 > xmm3)) { sub_00128D9F(); return; } /* ja: above (unsigned >) */

loc_00128D8E: ;
    esi = MEM32(esi);
    if (TEST_NZ(esi, esi)) goto loc_00128A23; /* jne: not equal / not zero */

loc_00128D98: ;
    eax = 0; /* xor self */
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
 * sub_00128DC0
 * Original: 0x00128DC0 - 0x00128DFA (58 bytes, 22 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00128DC0(void)
{
    int _flags = 0; /* fallback flag var */

loc_00128DC0: ;
    PUSH32(esp, ebx);
    PUSH32(esp, esi);
    PUSH32(esp, edi);
    ecx = eax + 0x5A0;
    edx = 2;
    ebx = 0; /* xor self */

loc_00128DD0: ;
    MEM32(ecx) = 0xFFFFFFFFu;
    MEM8(ecx + 4) = LO8(ebx);
    MEM16(ecx + 6) = LO16(ebx);
    edi = ecx + 8;
    esi = 1;
    MEM32(edi) = esi;
    MEM32(edi + 4) = esi;
    MEM32(edi + 8) = esi;
    ecx = ecx + 0x18;
    edx--;
    MEM32(edi + 0xC) = esi;
    if ((edx != 0)) goto loc_00128DD0; /* jne: not equal / not zero */

loc_00128DF6: ;
    POP32(esp, edi);
    POP32(esp, esi);
    POP32(esp, ebx);
    esp += 4; return; /* ret */

}

/**
 * sub_00128E00
 * Original: 0x00128E00 - 0x00128E2C (44 bytes, 15 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00128E00(void)
{
    int _flags = 0; /* fallback flag var */

loc_00128E00: ;
    PUSH32(esp, ebx);
    ebx = eax;
    edx = ebx;
    PUSH32(esp, 0); sub_00123F50(); /* call 0x00123F50 */

loc_00128E0A: ;
    eax = MEM32(ebx + 4);
    (void)0; /* test eax, eax - flags set for next jcc */
    ecx = MEM32(ebx);
    MEM32(ecx + 4) = eax;
    if (TEST_Z(eax, eax)) goto loc_00128E18; /* je: equal / zero */

loc_00128E16: ;
    MEM32(eax) = ecx;

loc_00128E18: ;
    MEM32(ebx) = 0;
    MEM32(ebx + 4) = 0;
    PUSH32(esp, 0); sub_00128E60(); /* call 0x00128E60 */

loc_00128E2A: ;
    POP32(esp, ebx);
    esp += 4; return; /* ret */

}

/**
 * sub_00128E30
 * Original: 0x00128E30 - 0x00128E54 (36 bytes, 14 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00128E30(void)
{
    int _flags = 0; /* fallback flag var */

loc_00128E30: ;
    eax = MEM32(0x8493A4);
    if (TEST_Z(eax, eax)) goto loc_00128E53; /* je: equal / zero */

loc_00128E39: ;
    PUSH32(esp, esi);
    /* nop */

loc_00128E40: ;
    esi = ZX8(MEM8(eax + 0x5C));
    if (CMP_NE(esi, edx)) goto loc_00128E4B; /* jne: not equal / not zero */

loc_00128E48: ;
    MEM8(eax + 0x5A) = LO8(ecx);

loc_00128E4B: ;
    eax = MEM32(eax + 4);
    if (TEST_NZ(eax, eax)) goto loc_00128E40; /* jne: not equal / not zero */

loc_00128E52: ;
    POP32(esp, esi);

loc_00128E53: ;
    esp += 4; return; /* ret */

}

/**
 * sub_00128E60
 * Original: 0x00128E60 - 0x00128ED1 (113 bytes, 38 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00128E60(void)
{
    int _flags = 0; /* fallback flag var */

loc_00128E60: ;
    PUSH32(esp, esi);
    PUSH32(esp, edi);
    edi = MEM32(ebx + 0x64);
    if (TEST_Z(edi, edi)) goto loc_00128EA1; /* je: equal / zero */

loc_00128E69: ;
    esi = MEM32(0x870EEC);
    eax = MEM32(esi + 0x34);
    if (TEST_Z(eax, eax)) goto loc_00128E7C; /* je: equal / zero */

loc_00128E76: ;
    PUSH32(esp, esi);
    PUSH32(esp, 0); sub_00355B40(); /* call 0x00355B40 */

loc_00128E7C: ;
    eax = MEM32(edi);
    PUSH32(esp, esi);
    PUSH32(esp, 0); sub_00356290(); /* call 0x00356290 */

loc_00128E84: ;
    MEM32(edi) = 0;
    eax = MEM32(esi + 0x20);
    if (TEST_Z(eax, eax)) goto loc_00128E9A; /* je: equal / zero */

loc_00128E91: ;
    ecx = MEM32(esi + 0x24);
    MEM32(eax + ecx * 4) = edi;
    MEM32(esi + 0x24) = MEM32(esi + 0x24) + 1;

loc_00128E9A: ;
    MEM32(ebx + 0x64) = 0;

loc_00128EA1: ;
    PUSH32(esp, ebx);
    PUSH32(esp, 0); sub_0042C911(); /* call 0x0042C911 */

loc_00128EA7: ;
    if (TEST_NZ(eax, eax)) goto loc_00128ECE; /* jne: not equal / not zero */

loc_00128EAB: ;
    esi = MEM32(0x7FA490);
    edx = MEM32(0x7FA4B4);
    esi++;
    edx--;
    PUSH32(esp, ebx);
    MEM32(0x7FA490) = esi;
    MEM32(0x7FA4B4) = edx;
    PUSH32(esp, 0); sub_003E7080(); /* call 0x003E7080 */

loc_00128ECB: ;
    esp = esp + 4;

loc_00128ECE: ;
    POP32(esp, edi);
    POP32(esp, esi);
    esp += 4; return; /* ret */

}

/**
 * sub_00128EE0
 * Original: 0x00128EE0 - 0x00128F19 (57 bytes, 21 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00128EE0(void)
{
    int _flags = 0; /* fallback flag var */

loc_00128EE0: ;
    PUSH32(esp, ebx);
    ebx = MEM32(0x8493A4);
    if (TEST_Z(ebx, ebx)) goto loc_00128F17; /* je: equal / zero */

loc_00128EEB: ;
    PUSH32(esp, esi);
    /* nop */

loc_00128EF0: ;
    esi = MEM32(ebx + 4);
    (void)0; /* test esi, esi - flags set for next jcc */
    eax = MEM32(ebx);
    MEM32(eax + 4) = esi;
    if (TEST_Z(esi, esi)) goto loc_00128EFE; /* je: equal / zero */

loc_00128EFC: ;
    MEM32(esi) = eax;

loc_00128EFE: ;
    MEM32(ebx) = 0;
    MEM32(ebx + 4) = 0;
    PUSH32(esp, 0); sub_00128E60(); /* call 0x00128E60 */

loc_00128F10: ;
    (void)0; /* test esi, esi - flags set for next jcc */
    ebx = esi;
    if (TEST_NZ(esi, esi)) goto loc_00128EF0; /* jne: not equal / not zero */

loc_00128F16: ;
    POP32(esp, esi);

loc_00128F17: ;
    POP32(esp, ebx);
    esp += 4; return; /* ret */

}

/**
 * sub_00128F20
 * Original: 0x00128F20 - 0x0012901E (254 bytes, 56 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00128F20(void)
{
    int _flags = 0; /* fallback flag var */
    float xmm0, xmm1, xmm2;

loc_00128F20: ;
    esp = esp - 0x10;
    if (CMP_LE(ecx & ecx, 0)) goto loc_00128F34; /* jle: less or equal (signed <=) */

loc_00128F27: ;
    PUSH32(esp, edi);
    edi = MEM32(esp + 0x24);
    eax = 0x5368D487;
    { uint32_t _i; for (_i = 0; _i < ecx; _i++) MEM32(edi + _i*4) = eax; }
    edi += ecx * 4; ecx = 0; /* rep stosd */
    POP32(esp, edi);

loc_00128F34: ;
    if (TEST_Z(MEM8(esp + 0x24), 1)) { sub_0012901E(); return; } /* je: equal / zero */

loc_00128F3F: ;
    eax = MEM32(0x8470DC);
    edx = (uint32_t)((int32_t)edx * (int32_t)0x770);
    xmm0 = MEMF(eax + edx + 0x2F4); /* movss */
    xmm0 = xmm0 - MEMF(eax + edx + 0x330); /* subss */
    eax = eax + edx;
    MEMF(esp + 4) = xmm0; /* movss */
    xmm0 = MEMF(eax + 0x2F8); /* movss */
    xmm0 = xmm0 - MEMF(eax + 0x334); /* subss */
    MEMF(esp + 8) = xmm0; /* movss */
    xmm0 = MEMF(eax + 0x2FC); /* movss */
    xmm0 = xmm0 - MEMF(eax + 0x338); /* subss */
    ecx = esp + 4;
    MEMF(esp + 0xC) = xmm0; /* movss */
    MEM32(esp + 0x24) = ecx;
    edx = MEM32(esp + 0x24);
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
    MEMF(esp) = xmm1; /* movss */
    xmm1 = MEMF(esp); /* movss */
    /* ucomiss xmm1, MEMF(0x648CF8) - sets EFLAGS */
    /* lahf - load AH from flags (used in FPU compare idiom) */
    if (1 /* jnp after test - parity */) { sub_0012901E(); return; } /* jnp: not parity */

loc_00128FD6: ;
    xmm0 = MEMF(0x59D944); /* movss */
    xmm0 = xmm0 / xmm1; /* divss */
    xmm1 = xmm0; /* movaps */
    xmm1 = xmm1 * MEMF(esp + 4); /* mulss */
    xmm1 = xmm1 + MEMF(esp + 0x14); /* addss */
    MEMF(esi) = xmm1; /* movss */
    xmm1 = xmm0; /* movaps */
    xmm1 = xmm1 * MEMF(esp + 8); /* mulss */
    xmm0 = xmm0 * MEMF(esp + 0xC); /* mulss */
    xmm1 = xmm1 + MEMF(esp + 0x18); /* addss */
    xmm0 = xmm0 + MEMF(esp + 0x1C); /* addss */
    MEMF(esi + 4) = xmm1; /* movss */
    MEMF(esi + 8) = xmm0; /* movss */
    esp = esp + 0x10;
    esp += 4; return; /* ret */

}

/**
 * sub_00129050
 * Original: 0x00129050 - 0x0012920D (445 bytes, 135 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00129050(void)
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

loc_00129050: ;
    PUSH32(esp, ebp);
    ebp = esp;
    esp = esp & 0xFFFFFFF8u;
    esp = esp - 0x18;
    eax = MEM32(ebp + 8);
    PUSH32(esp, esi);
    PUSH32(esp, edi);
    edi = 0; /* xor self */
    if (CMP_LE(eax & eax, 0)) goto loc_00129202; /* jle: less or equal (signed <=) */

loc_00129068: ;
    esi = MEM32(ebx + edi * 4);
    eax = MEM32(esi + 8);
    if (TEST_Z(eax, eax)) { sub_0012920D(); return; } /* je: equal / zero */

loc_00129076: ;
    ecx = MEM32(ebp + 0xC);
    if (CMP_LE(ecx & ecx, 0)) goto loc_00129090; /* jle: less or equal (signed <=) */

loc_0012907D: ;
    ecx = MEM32(ebx + ecx * 4 + -4);
    if (TEST_Z(ecx, ecx)) goto loc_00129090; /* je: equal / zero */

loc_00129085: ;
    edx = MEM32(ecx + 8);
    if (TEST_Z(edx, edx)) { sub_0012920D(); return; } /* je: equal / zero */

loc_00129090: ;
    eax = eax & 3;
    if (0) { sub_0012920D(); return; } /* jbe: below or equal (unsigned <=) */

loc_00129099: ;
    if (CMP_A(eax, 3)) { sub_0012920D(); return; } /* ja: above (unsigned >) */

loc_001290A2: ;
    eax = MEM32(esi + 0xC);
    MEM32(esp + 8) = eax;
    fp_push(MEMF(esp + 8)); /* fld float */
    esp = esp - 8;
    MEMD(esp) = fp_top(); fp_popp(); /* fstp */
    PUSH32(esp, 0); sub_0046EB27(); /* call 0x0046EB27 */

loc_001290B8: ;
    esp = esp + 8;
    if (TEST_NZ(eax, eax)) { sub_0012920D(); return; } /* jne: not equal / not zero */

loc_001290C3: ;
    fp_push(MEMF(esp + 8)); /* fld float */
    esp = esp - 8;
    MEMD(esp) = fp_top(); fp_popp(); /* fstp */
    PUSH32(esp, 0); sub_0046EB12(); /* call 0x0046EB12 */

loc_001290D2: ;
    esp = esp + 8;
    if (TEST_Z(eax, eax)) { sub_0012920D(); return; } /* je: equal / zero */

loc_001290DD: ;
    ecx = MEM32(esi + 0x10);
    MEM32(esp + 0xC) = ecx;
    fp_push(MEMF(esp + 0xC)); /* fld float */
    esp = esp - 8;
    MEMD(esp) = fp_top(); fp_popp(); /* fstp */
    PUSH32(esp, 0); sub_0046EB27(); /* call 0x0046EB27 */

loc_001290F3: ;
    esp = esp + 8;
    if (TEST_NZ(eax, eax)) { sub_0012920D(); return; } /* jne: not equal / not zero */

loc_001290FE: ;
    fp_push(MEMF(esp + 0xC)); /* fld float */
    esp = esp - 8;
    MEMD(esp) = fp_top(); fp_popp(); /* fstp */
    PUSH32(esp, 0); sub_0046EB12(); /* call 0x0046EB12 */

loc_0012910D: ;
    esp = esp + 8;
    if (TEST_Z(eax, eax)) { sub_0012920D(); return; } /* je: equal / zero */

loc_00129118: ;
    edx = MEM32(esi + 0x14);
    MEM32(esp + 0x10) = edx;
    fp_push(MEMF(esp + 0x10)); /* fld float */
    esp = esp - 8;
    MEMD(esp) = fp_top(); fp_popp(); /* fstp */
    PUSH32(esp, 0); sub_0046EB27(); /* call 0x0046EB27 */

loc_0012912E: ;
    esp = esp + 8;
    if (TEST_NZ(eax, eax)) { sub_0012920D(); return; } /* jne: not equal / not zero */

loc_00129139: ;
    fp_push(MEMF(esp + 0x10)); /* fld float */
    esp = esp - 8;
    MEMD(esp) = fp_top(); fp_popp(); /* fstp */
    PUSH32(esp, 0); sub_0046EB12(); /* call 0x0046EB12 */

loc_00129148: ;
    esp = esp + 8;
    if (TEST_Z(eax, eax)) { sub_0012920D(); return; } /* je: equal / zero */

loc_00129153: ;
    esi = MEM32(ebx + edi * 4);
    eax = MEM32(esi + 0x38);
    esi = esi + 0x38;
    MEM32(esp + 0x14) = eax;
    fp_push(MEMF(esp + 0x14)); /* fld float */
    esp = esp - 8;
    MEMD(esp) = fp_top(); fp_popp(); /* fstp */
    PUSH32(esp, 0); sub_0046EB27(); /* call 0x0046EB27 */

loc_0012916F: ;
    esp = esp + 8;
    if (TEST_NZ(eax, eax)) { sub_0012920D(); return; } /* jne: not equal / not zero */

loc_0012917A: ;
    fp_push(MEMF(esp + 0x14)); /* fld float */
    esp = esp - 8;
    MEMD(esp) = fp_top(); fp_popp(); /* fstp */
    PUSH32(esp, 0); sub_0046EB12(); /* call 0x0046EB12 */

loc_00129189: ;
    esp = esp + 8;
    if (TEST_Z(eax, eax)) { sub_0012920D(); return; } /* je: equal / zero */

loc_00129190: ;
    ecx = MEM32(esi + 4);
    MEM32(esp + 0x18) = ecx;
    fp_push(MEMF(esp + 0x18)); /* fld float */
    esp = esp - 8;
    MEMD(esp) = fp_top(); fp_popp(); /* fstp */
    PUSH32(esp, 0); sub_0046EB27(); /* call 0x0046EB27 */

loc_001291A6: ;
    esp = esp + 8;
    if (TEST_NZ(eax, eax)) { sub_0012920D(); return; } /* jne: not equal / not zero */

loc_001291AD: ;
    fp_push(MEMF(esp + 0x18)); /* fld float */
    esp = esp - 8;
    MEMD(esp) = fp_top(); fp_popp(); /* fstp */
    PUSH32(esp, 0); sub_0046EB12(); /* call 0x0046EB12 */

loc_001291BC: ;
    esp = esp + 8;
    if (TEST_Z(eax, eax)) { sub_0012920D(); return; } /* je: equal / zero */

loc_001291C3: ;
    edx = MEM32(esi + 8);
    MEM32(esp + 0x1C) = edx;
    fp_push(MEMF(esp + 0x1C)); /* fld float */
    esp = esp - 8;
    MEMD(esp) = fp_top(); fp_popp(); /* fstp */
    PUSH32(esp, 0); sub_0046EB27(); /* call 0x0046EB27 */

loc_001291D9: ;
    esp = esp + 8;
    if (TEST_NZ(eax, eax)) { sub_0012920D(); return; } /* jne: not equal / not zero */

loc_001291E0: ;
    fp_push(MEMF(esp + 0x1C)); /* fld float */
    esp = esp - 8;
    MEMD(esp) = fp_top(); fp_popp(); /* fstp */
    PUSH32(esp, 0); sub_0046EB12(); /* call 0x0046EB12 */

loc_001291EF: ;
    esp = esp + 8;
    if (TEST_Z(eax, eax)) { sub_0012920D(); return; } /* je: equal / zero */

loc_001291F6: ;
    eax = MEM32(ebp + 8);
    edi++;
    if (CMP_L(edi, eax)) goto loc_00129068; /* jl: less (signed <) */

loc_00129202: ;
    eax = 1;
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
 * sub_00129220
 * Original: 0x00129220 - 0x0012929B (123 bytes, 41 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00129220(void)
{
    uint32_t ebp;
    int _flags = 0; /* fallback flag var */

loc_00129220: ;
    PUSH32(esp, ebp);
    ebp = esp;
    PUSH32(esp, 0xFFFFFFFFu);
    PUSH32(esp, 0x47F680);
    eax = MEM32(0);
    PUSH32(esp, eax);
    MEM32(0) = esp;
    esp = esp - 0x20;
    PUSH32(esp, ebx);
    PUSH32(esp, esi);
    PUSH32(esp, edi);
    MEM32(ebp + -16) = esp;
    PUSH32(esp, 0xFFFFFFFFu);
    PUSH32(esp, 0x461);
    PUSH32(esp, 0x606A34);
    PUSH32(esp, 0x20);
    PUSH32(esp, 0); sub_002AF0E0(); /* call 0x002AF0E0 */

loc_00129254: ;
    esp = esp + 0x10;
    MEM32(ebp + -20) = eax;
    MEM32(ebp + -4) = 0;
    MEM32(ebp + -28) = eax;
    MEM32(ebp + -32) = eax;
    if (TEST_Z(eax, eax)) goto loc_0012926D; /* je: equal / zero */

loc_0012926B: ;
    MEM32(eax) = eax;

loc_0012926D: ;
    MEM32(ebp + -36) = 1;
    ecx = eax + 4;
    MEM32(ebp + -40) = ecx;
    MEM32(ebp + -44) = ecx;
    if (TEST_Z(ecx, ecx)) goto loc_00129283; /* je: equal / zero */

loc_00129281: ;
    MEM32(ecx) = eax;

loc_00129283: ;
    MEM32(ebp + -4) = 0xFFFFFFFFu;
    ecx = MEM32(ebp + -12);
    MEM32(0) = ecx;
    POP32(esp, edi);
    POP32(esp, esi);
    POP32(esp, ebx);
    esp = ebp;
    POP32(esp, ebp);
    esp += 4; return; /* ret */

}

/**
 * sub_001292C0
 * Original: 0x001292C0 - 0x00129337 (119 bytes, 40 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_001292C0(void)
{
    uint32_t ebp;
    int _flags = 0; /* fallback flag var */

loc_001292C0: ;
    PUSH32(esp, ebp);
    ebp = esp;
    PUSH32(esp, 0xFFFFFFFFu);
    PUSH32(esp, 0x47F670);
    eax = MEM32(0);
    PUSH32(esp, eax);
    MEM32(0) = esp;
    esp = esp - 0x10;
    PUSH32(esp, ebx);
    PUSH32(esp, esi);
    PUSH32(esp, edi);
    MEM32(ebp + -16) = esp;
    PUSH32(esp, 0xFFFFFFFFu);
    PUSH32(esp, 0x461);
    PUSH32(esp, 0x606A34);
    PUSH32(esp, 0x20);
    PUSH32(esp, 0); sub_002AF0E0(); /* call 0x002AF0E0 */

loc_001292F4: ;
    esp = esp + 0x10;
    esi = eax;
    MEM32(ebp + -20) = esi;
    MEM32(ebp + -4) = 0;
    MEM32(ebp + -28) = esi;
    if (TEST_Z(esi, esi)) goto loc_0012931B; /* je: equal / zero */

loc_0012930A: ;
    eax = MEM32(ebp + 0xC);
    PUSH32(esp, eax);
    ecx = MEM32(ebp + 0x10);
    edx = MEM32(ebp + 8);
    eax = esi;
    PUSH32(esp, 0); sub_001293F0(); /* call 0x001293F0 */

loc_0012931B: ;
    MEM32(ebp + -4) = 0xFFFFFFFFu;
    eax = esi;
    ecx = MEM32(ebp + -12);
    MEM32(0) = ecx;
    POP32(esp, edi);
    POP32(esp, esi);
    POP32(esp, ebx);
    esp = ebp;
    POP32(esp, ebp);
    esp += 16; return; /* ret 12 */

}

/**
 * sub_00129360
 * Original: 0x00129360 - 0x001293E6 (134 bytes, 40 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00129360(void)
{
    int _flags = 0; /* fallback flag var */

loc_00129360: ;
    eax = MEM32(edx + 8);
    esp = esp - 0x44;
    PUSH32(esp, esi);
    esi = 0xAAAAAAA;
    esi = esi - eax;
    if (CMP_AE(esi, ecx)) goto loc_001293DC; /* jae: above or equal (unsigned >=) */

loc_00129372: ;
    PUSH32(esp, ebx);
    PUSH32(esp, 0x10);
    ebx = 0; /* xor self */
    esi = 0xF;
    PUSH32(esp, 0x5D8874);
    ecx = esp + 0x10;
    MEM32(esp + 0x28) = esi;
    MEM32(esp + 0x24) = ebx;
    MEM8(esp + 0x14) = LO8(ebx);
    PUSH32(esp, 0); sub_000143C0(); /* call 0x000143C0 */

loc_00129396: ;
    ecx = esp + 0x24;
    PUSH32(esp, 0); sub_0046E531(); /* call 0x0046E531 */

loc_0012939F: ;
    PUSH32(esp, 0xFFFFFFFFu);
    PUSH32(esp, ebx);
    eax = esp + 0x10;
    PUSH32(esp, eax);
    ecx = esp + 0x3C;
    MEM32(esp + 0x30) = 0x5AC69C;
    MEM32(esp + 0x54) = esi;
    MEM32(esp + 0x50) = ebx;
    MEM8(esp + 0x40) = LO8(ebx);
    PUSH32(esp, 0); sub_000144B0(); /* call 0x000144B0 */

loc_001293C4: ;
    PUSH32(esp, 0x64B640);
    ecx = esp + 0x28;
    PUSH32(esp, ecx);
    MEM32(esp + 0x2C) = 0x5AC694;
    PUSH32(esp, 0); sub_004720B3(); /* call 0x004720B3 */

loc_001293DB: ;
    POP32(esp, ebx);

loc_001293DC: ;
    eax = eax + ecx;
    MEM32(edx + 8) = eax;
    POP32(esp, esi);
    esp = esp + 0x44;
    esp += 4; return; /* ret */

}

/**
 * sub_001293F0
 * Original: 0x001293F0 - 0x00129423 (51 bytes, 19 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_001293F0(void)
{

loc_001293F0: ;
    MEM32(eax) = edx;
    edx = MEM32(esp + 4);
    MEM32(eax + 4) = edx;
    PUSH32(esp, esi);
    esi = MEM32(ecx);
    edx = eax + 8;
    MEM32(edx) = esi;
    esi = MEM32(ecx + 4);
    MEM32(edx + 4) = esi;
    esi = MEM32(ecx + 8);
    MEM32(edx + 8) = esi;
    esi = MEM32(ecx + 0xC);
    MEM32(edx + 0xC) = esi;
    esi = MEM32(ecx + 0x10);
    MEM32(edx + 0x10) = esi;
    ecx = MEM32(ecx + 0x14);
    MEM32(edx + 0x14) = ecx;
    POP32(esp, esi);
    esp += 8; return; /* ret 4 */

}

/**
 * sub_00129430
 * Original: 0x00129430 - 0x0012945D (45 bytes, 22 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00129430(void)
{
    uint32_t ebp;
    int _flags = 0; /* fallback flag var */
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_00129430: ;
    PUSH32(esp, ebp);
    ebp = MEM32(esp + 8);
    PUSH32(esp, esi);
    esi = MEM32(esp + 0x10);
    PUSH32(esp, edi);
    edi = MEM32(esp + 0x18);
    if (CMP_EQ(esi, edi)) { sub_0012945D(); return; } /* je: equal / zero */

loc_00129443: ;
    PUSH32(esp, ebx);
    ebx = MEM32(esp + 0x20);

loc_00129448: ;
    ecx = esi + 8;
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, 0); RECOMP_ICALL_SAFE(ebx, _icall_esp); /* indirect call */
    }

loc_0012944D: ;
    esi = MEM32(esi);
    if (CMP_NE(esi, edi)) goto loc_00129448; /* jne: not equal / not zero */

loc_00129453: ;
    MEM32(ebp) = ebx;
    POP32(esp, ebx);
    POP32(esp, edi);
    POP32(esp, esi);
    eax = ebp;
    POP32(esp, ebp);
    esp += 4; return; /* ret */

}

/**
 * sub_00129470
 * Original: 0x00129470 - 0x001294AF (63 bytes, 18 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00129470(void)
{
    uint32_t ebp;
    int _flags = 0; /* fallback flag var */
    float xmm0, xmm1;
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_00129470: ;
    esp = esp - 0x24;
    PUSH32(esp, 0x3C23D70A);
    ecx = esi;
    PUSH32(esp, 0); sub_00124C10(); /* call 0x00124C10 */

loc_0012947F: ;
    xmm1 = MEMF(0x648E84); /* movss */
    esp = esp + 4;
    /* comiss xmm0, xmm1 - sets EFLAGS */
    if ((xmm0 <= xmm1)) goto loc_00129492; /* jbe: below or equal (unsigned <=) */

loc_0012948F: ;
    xmm0 = xmm1; /* movaps */

loc_00129492: ;
    xmm1 = MEMF(esi + 0xC); /* movss */
    /* ucomiss xmm1, MEMF(0x649194) - sets EFLAGS */
    /* lahf - load AH from flags (used in FPU compare idiom) */
    if (1 /* jnp after test - parity */) { sub_001294AF(); return; } /* jnp: not parity */

loc_001294A4: ;
    eax = MEM32(esi + 0xC);
    ecx = MEM32(esi + 0x10);
    edx = MEM32(esi + 0x14);
    g_seh_ebp = ebp; sub_001294E8(); return; /* tail jmp 0x001294E8 */

}

/**
 * sub_00129520
 * Original: 0x00129520 - 0x00129572 (82 bytes, 28 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00129520(void)
{

loc_00129520: ;
    esp = esp - 0x10;
    ecx = MEM32(eax);
    edx = MEM32(eax + 4);
    eax = MEM32(eax + 8);
    PUSH32(esp, esi);
    PUSH32(esp, edi);
    MEM32(esp + 0xC) = ecx;
    esp = esp - 0x20;
    MEM32(esp + 0x30) = edx;
    edx = MEM32(esp + 0x40);
    ecx = esp + 0x2C;
    MEM32(esp + 0x28) = ecx;
    edi = esp;
    MEM32(esp + 0x34) = eax;
    PUSH32(esp, edx);
    edx = MEM32(esp + 0x40);
    eax = esp + 0x2C;
    ecx = 8;
    esi = esp + 0x4C;
    memcpy((void*)XBOX_PTR(edi), (void*)XBOX_PTR(esi), ecx * 4);
    esi += ecx * 4; edi += ecx * 4; ecx = 0; /* rep movsd */
    ecx = MEM32(esp + 0x48);
    PUSH32(esp, eax);
    eax = MEM32(edx);
    PUSH32(esp, 0); sub_00129580(); /* call 0x00129580 */

loc_0012956A: ;
    POP32(esp, edi);
    POP32(esp, esi);
    esp = esp + 0x10;
    esp += 48; return; /* ret 44 */

}

/**
 * sub_00129580
 * Original: 0x00129580 - 0x001295BF (63 bytes, 27 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00129580(void)
{
    uint32_t ebp;
    int _flags = 0; /* fallback flag var */

loc_00129580: ;
    PUSH32(esp, ebp);
    ebp = esp;
    esp = esp & 0xFFFFFFF0u;
    esp = esp - 0x664;
    PUSH32(esp, ebx);
    PUSH32(esp, esi);
    esi = eax;
    PUSH32(esp, edi);
    edi = esi;
    eax = esp + 0x60;
    MEM32(esp + 0x10) = edi;
    PUSH32(esp, 0); sub_00129980(); /* call 0x00129980 */

loc_001295A0: ;
    eax = MEM32(esi + 0x34);
    ebx = 0; /* xor self */
    if (CMP_EQ(eax, ebx)) goto loc_001295AF; /* je: equal / zero */

loc_001295A9: ;
    PUSH32(esp, esi);
    PUSH32(esp, 0); sub_00355B40(); /* call 0x00355B40 */

loc_001295AF: ;
    if (CMP_NE(MEM32(esi + 0x4C), ebx)) { sub_001295BF(); return; } /* jne: not equal / not zero */

loc_001295B4: ;
    eax = 0; /* xor self */
    POP32(esp, edi);
    POP32(esp, esi);
    POP32(esp, ebx);
    esp = ebp;
    POP32(esp, ebp);
    esp += 44; return; /* ret 40 */

}

/**
 * sub_00129980
 * Original: 0x00129980 - 0x001299D5 (85 bytes, 23 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00129980(void)
{
    int _flags = 0; /* fallback flag var */
    float xmm0;

loc_00129980: ;
    xmm0 = MEMF(0x648E84); /* movss */
    edx = ecx + ecx;
    PUSH32(esp, esi);
    esi = ecx + -1;
    MEM32(eax + 0x204) = ecx;
    MEM32(eax + 0x20C) = ecx;
    ecx = 0; /* xor self */
    (void)0; /* test edx, edx - flags set for next jcc */
    MEM32(eax + 0x200) = edx;
    MEM32(eax + 0x208) = esi;
    /* shufps xmm0, xmm0, 0 */
    if (CMP_BE(edx & edx, 0)) goto loc_001299D3; /* jbe: below or equal (unsigned <=) */

loc_001299B1: ;
    edx = eax + 0x100;
    goto loc_001299C0;

    /* nop */

loc_001299C0: ;
    MEMF(edx) = xmm0; /* movaps */
    esi = MEM32(eax + 0x200);
    ecx = ecx + 4;
    edx = edx + 0x10;
    if (CMP_B(ecx, esi)) goto loc_001299C0; /* jb: below (unsigned <) */

loc_001299D3: ;
    POP32(esp, esi);
    esp += 4; return; /* ret */

}

/**
 * sub_001299E0
 * Original: 0x001299E0 - 0x00129B05 (293 bytes, 51 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_001299E0(void)
{
    int _flags = 0; /* fallback flag var */
    float xmm0, xmm1;

loc_001299E0: ;
    xmm1 = MEMF(0x648D14); /* movss */
    eax = 0; /* xor self */
    PUSH32(esp, ebx);
    SET_LO8(ebx, MEM8(0x773CD0));
    edx = edx | 0xFFFFFFFFu;
    ecx = 1;
    (void)0; /* cmp LO8(ebx), LO8(eax) - flags set for next jcc */
    MEM32(0x8493A0) = eax;
    MEM32(0x8493A4) = eax;
    MEM32(0x773C68) = ecx;
    MEM32(0x8493A8) = eax;
    MEM32(0x8493AC) = eax;
    MEM32(0x773C6C) = edx;
    POP32(esp, ebx);
    if (CMP_A(LO8(ebx), LO8(eax))) goto loc_00129A41; /* ja: above (unsigned >) */

loc_00129A1E: ;
    MEMF(0x773CC4) = xmm1; /* movss */
    MEMF(0x773CC8) = xmm1; /* movss */
    MEMF(0x773CCC) = xmm1; /* movss */
    MEM32(0x773C68) = ecx;
    MEM8(0x773CD0) = LO8(eax);

loc_00129A41: ;
    xmm0 = 0.0f; /* xorps self = zero */
    PUSH32(esp, edi);
    MEM8(0x773F91) = LO8(eax);
    MEM8(0x773F90) = LO8(eax);
    ecx = 0x16;
    eax = 0; /* xor self */
    edi = 0x773CD8;
    { uint32_t _i; for (_i = 0; _i < ecx; _i++) MEM32(edi + _i*4) = eax; }
    edi += ecx * 4; ecx = 0; /* rep stosd */
    MEM32(0x773C70) = edx;
    MEMF(0x773CB8) = xmm0; /* movss */
    MEMF(0x773CBC) = xmm0; /* movss */
    MEMF(0x773CC0) = xmm0; /* movss */
    MEMF(0x773CAC) = xmm1; /* movss */
    MEMF(0x773CB0) = xmm1; /* movss */
    MEMF(0x773CB4) = xmm1; /* movss */
    MEMF(0x773C7C) = xmm1; /* movss */
    MEMF(0x773C80) = xmm0; /* movss */
    MEMF(0x773C84) = xmm0; /* movss */
    MEMF(0x773C88) = xmm1; /* movss */
    MEMF(0x773C8C) = xmm0; /* movss */
    MEMF(0x773C90) = xmm0; /* movss */
    MEMF(0x773C94) = xmm1; /* movss */
    MEMF(0x773C98) = xmm0; /* movss */
    MEMF(0x773C9C) = xmm0; /* movss */
    MEMF(0x773CA0) = xmm1; /* movss */
    MEMF(0x773CA4) = xmm0; /* movss */
    MEMF(0x773CA8) = xmm0; /* movss */
    MEMF(0x773C78) = xmm0; /* movss */
    MEMF(0x773C74) = xmm0; /* movss */
    POP32(esp, edi);
    esp += 4; return; /* ret */

}

/**
 * sub_00129B10
 * Original: 0x00129B10 - 0x00129B96 (134 bytes, 47 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00129B10(void)
{
    int _flags = 0; /* fallback flag var */

loc_00129B10: ;
    PUSH32(esp, esi);
    esi = MEM32(0x8493A8);
    (void)0; /* test esi, esi - flags set for next jcc */
    PUSH32(esp, edi);
    if (TEST_Z(esi, esi)) goto loc_00129B53; /* je: equal / zero */

loc_00129B1C: ;
    /* nop */

loc_00129B20: ;
    edi = MEM32(esi);
    PUSH32(esp, esi);
    PUSH32(esp, 0); sub_0042C911(); /* call 0x0042C911 */

loc_00129B28: ;
    if (TEST_NZ(eax, eax)) goto loc_00129B4D; /* jne: not equal / not zero */

loc_00129B2C: ;
    eax = MEM32(0x7FA490);
    edx = MEM32(0x7FA4B4);
    eax++;
    edx--;
    PUSH32(esp, esi);
    MEM32(0x7FA490) = eax;
    MEM32(0x7FA4B4) = edx;
    PUSH32(esp, 0); sub_003E7080(); /* call 0x003E7080 */

loc_00129B4A: ;
    esp = esp + 4;

loc_00129B4D: ;
    (void)0; /* test edi, edi - flags set for next jcc */
    esi = edi;
    if (TEST_NZ(edi, edi)) goto loc_00129B20; /* jne: not equal / not zero */

loc_00129B53: ;
    esi = MEM32(0x8493AC);
    if (TEST_Z(esi, esi)) goto loc_00129B93; /* je: equal / zero */

loc_00129B5D: ;
    /* nop */

loc_00129B60: ;
    edi = MEM32(esi);
    PUSH32(esp, esi);
    PUSH32(esp, 0); sub_0042C911(); /* call 0x0042C911 */

loc_00129B68: ;
    if (TEST_NZ(eax, eax)) goto loc_00129B8D; /* jne: not equal / not zero */

loc_00129B6C: ;
    eax = MEM32(0x7FA490);
    edx = MEM32(0x7FA4B4);
    eax++;
    edx--;
    PUSH32(esp, esi);
    MEM32(0x7FA490) = eax;
    MEM32(0x7FA4B4) = edx;
    PUSH32(esp, 0); sub_003E7080(); /* call 0x003E7080 */

loc_00129B8A: ;
    esp = esp + 4;

loc_00129B8D: ;
    (void)0; /* test edi, edi - flags set for next jcc */
    esi = edi;
    if (TEST_NZ(edi, edi)) goto loc_00129B60; /* jne: not equal / not zero */

loc_00129B93: ;
    POP32(esp, edi);
    POP32(esp, esi);
    esp += 4; return; /* ret */

}

/**
 * sub_00129BA0
 * Original: 0x00129BA0 - 0x00129BAD (13 bytes, 2 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00129BA0(void)
{
    uint32_t ebp;
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_00129BA0: ;
    MEM32(esp + 8) = 0xFF;
    g_seh_ebp = ebp; sub_0011F2B0(); return; /* tail jmp 0x0011F2B0 */

}

/**
 * sub_00129BC0
 * Original: 0x00129BC0 - 0x00129C24 (100 bytes, 26 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00129BC0(void)
{
    int _flags = 0; /* fallback flag var */

loc_00129BC0: ;
    esp = esp - 0xC;
    eax = MEM32(esp + 0x14);
    MEM8(esp) = 1;
    MEM8(esp + 1) = 2;
    MEM8(esp + 2) = 3;
    MEM8(esp + 3) = 4;
    SET_LO8(ecx, MEM8(esp + eax + -3));
    PUSH32(esp, 0xFF);
    PUSH32(esp, 0x3C);
    eax = 0x38;
    MEM8(esp + 0xC) = 0;
    MEM8(esp + 0xD) = 0xFF;
    MEM16(esp + 0xE) = 0x12C;
    MEM8(esp + 0x12) = LO8(ecx);
    PUSH32(esp, 0); sub_000D9C60(); /* call 0x000D9C60 */

loc_00129C04: ;
    esp = esp + 8;
    if (TEST_Z(eax, eax)) goto loc_00129C20; /* je: equal / zero */

loc_00129C0B: ;
    edx = MEM32(esp + 4);
    ecx = MEM32(esp + 8);
    MEM32(eax + 0x2C) = edx;
    edx = MEM32(esp + 0x10);
    MEM32(eax + 0x30) = ecx;
    MEM32(eax + 0x34) = edx;

loc_00129C20: ;
    esp = esp + 0xC;
    esp += 4; return; /* ret */

}

/**
 * sub_00129C30
 * Original: 0x00129C30 - 0x00129C3D (13 bytes, 2 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00129C30(void)
{
    uint32_t ebp;
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_00129C30: ;
    MEM32(esp + 8) = 0xFF;
    g_seh_ebp = ebp; sub_0011F440(); return; /* tail jmp 0x0011F440 */

}

/**
 * sub_00129CB0
 * Original: 0x00129CB0 - 0x00129CBE (14 bytes, 6 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00129CB0(void)
{

loc_00129CB0: ;
    eax = MEM32(esp + 4);
    PUSH32(esp, eax);
    SET_LO8(eax, LO8(eax) | 0xFF);
    PUSH32(esp, 0); sub_0011F4D0(); /* call 0x0011F4D0 */

loc_00129CBC: ;
    POP32(esp, ecx);
    esp += 4; return; /* ret */

}

/**
 * sub_00129CC0
 * Original: 0x00129CC0 - 0x00129CD3 (19 bytes, 5 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00129CC0(void)
{
    uint32_t ebp;
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_00129CC0: ;
    SET_LO8(eax, 0); /* xor self */
    MEM32(esp + 8) = 0xFF;
    SET_LO8(edx, 0xE);
    SET_LO8(ecx, 0); /* xor self */
    g_seh_ebp = ebp; sub_0011F620(); return; /* tail jmp 0x0011F620 */

}

/**
 * sub_00129D20
 * Original: 0x00129D20 - 0x00129D35 (21 bytes, 7 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00129D20(void)
{

loc_00129D20: ;
    eax = MEM32(esp + 4);
    PUSH32(esp, 0xFF);
    PUSH32(esp, 0);
    PUSH32(esp, eax);
    PUSH32(esp, 0); sub_001227C0(); /* call 0x001227C0 */

loc_00129D31: ;
    esp = esp + 0xC;
    esp += 4; return; /* ret */

}

/**
 * sub_00129D40
 * Original: 0x00129D40 - 0x00129D55 (21 bytes, 7 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00129D40(void)
{

loc_00129D40: ;
    eax = MEM32(esp + 4);
    PUSH32(esp, 0xFF);
    PUSH32(esp, 1);
    PUSH32(esp, eax);
    PUSH32(esp, 0); sub_001227C0(); /* call 0x001227C0 */

loc_00129D51: ;
    esp = esp + 0xC;
    esp += 4; return; /* ret */

}

/**
 * sub_00129D60
 * Original: 0x00129D60 - 0x00129D73 (19 bytes, 5 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00129D60(void)
{
    uint32_t ebp;
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_00129D60: ;
    MEM32(esp + 8) = 0xFF;
    SET_LO8(edx, 0xE);
    SET_LO8(eax, 0); /* xor self */
    SET_LO8(ecx, 1);
    g_seh_ebp = ebp; sub_0011F620(); return; /* tail jmp 0x0011F620 */

}

/**
 * sub_00129D90
 * Original: 0x00129D90 - 0x00129DB0 (32 bytes, 11 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00129D90(void)
{

loc_00129D90: ;
    eax = MEM32(esp + 4);
    PUSH32(esp, 0xFF);
    PUSH32(esp, 0x12C);
    PUSH32(esp, 0);
    PUSH32(esp, 6);
    PUSH32(esp, eax);
    SET_LO8(ecx, 2);
    SET_LO8(eax, 1);
    PUSH32(esp, 0); sub_0011FEE0(); /* call 0x0011FEE0 */

loc_00129DAC: ;
    esp = esp + 0x14;
    esp += 4; return; /* ret */

}

/**
 * sub_00129E00
 * Original: 0x00129E00 - 0x00129E52 (82 bytes, 22 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00129E00(void)
{
    int _flags = 0; /* fallback flag var */

loc_00129E00: ;
    esp = esp - 8;
    eax = MEM32(esp + 0x10);
    SET_LO8(ecx, MEM8(eax + 0x5F3F9B));
    PUSH32(esp, 0xFF);
    PUSH32(esp, 0x3C);
    eax = 0x38;
    MEM8(esp + 8) = 2;
    MEM8(esp + 9) = 0xFF;
    MEM16(esp + 0xA) = 0x12C;
    MEM8(esp + 0xE) = LO8(ecx);
    PUSH32(esp, 0); sub_000D9C60(); /* call 0x000D9C60 */

loc_00129E33: ;
    esp = esp + 8;
    if (TEST_Z(eax, eax)) goto loc_00129E4E; /* je: equal / zero */

loc_00129E3A: ;
    edx = MEM32(esp);
    ecx = MEM32(esp + 4);
    MEM32(eax + 0x2C) = edx;
    edx = MEM32(esp + 0xC);
    MEM32(eax + 0x30) = ecx;
    MEM32(eax + 0x34) = edx;

loc_00129E4E: ;
    esp = esp + 8;
    esp += 4; return; /* ret */

}

/**
 * sub_00129E60
 * Original: 0x00129E60 - 0x00129E80 (32 bytes, 11 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00129E60(void)
{

loc_00129E60: ;
    eax = MEM32(esp + 4);
    PUSH32(esp, 0xFF);
    PUSH32(esp, 0xD);
    PUSH32(esp, 0x12C);
    PUSH32(esp, 2);
    PUSH32(esp, 0);
    PUSH32(esp, eax);
    SET_LO8(eax, 1);
    PUSH32(esp, 0); sub_00120480(); /* call 0x00120480 */

loc_00129E7C: ;
    esp = esp + 0x18;
    esp += 4; return; /* ret */

}

/**
 * sub_00129F60
 * Original: 0x00129F60 - 0x00129FD4 (116 bytes, 36 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00129F60(void)
{
    int _flags = 0; /* fallback flag var */
    float xmm0, xmm1;

loc_00129F60: ;
    esp = esp - 0xC;
    xmm0 = 0.0f; /* xorps self = zero */
    xmm1 = MEMF(0x648F08); /* movss */
    PUSH32(esp, esi);
    PUSH32(esp, 0xFF);
    PUSH32(esp, 0xDC);
    PUSH32(esp, 0xDC);
    PUSH32(esp, 0);
    SET_LO8(edx, 0); /* xor self */
    SET_LO8(eax, 0); /* xor self */
    esi = 0; /* xor self */
    MEMF(esp + 0x18) = xmm0; /* movss */
    MEMF(esp + 0x1C) = xmm1; /* movss */
    PUSH32(esp, 0); sub_0012A890(); /* call 0x0012A890 */

loc_00129F97: ;
    PUSH32(esp, 0xFF);
    PUSH32(esp, 0xC);
    esi = eax;
    eax = MEM32(esp + 0x2C);
    PUSH32(esp, 0);
    PUSH32(esp, 0x12C);
    PUSH32(esp, eax);
    SET_LO8(ecx, 0x10);
    SET_LO8(eax, 2);
    PUSH32(esp, 0); sub_00120860(); /* call 0x00120860 */

loc_00129FB5: ;
    esp = esp + 0x24;
    if (TEST_Z(eax, eax)) goto loc_00129FCF; /* je: equal / zero */

loc_00129FBC: ;
    ecx = MEM32(esp + 8);
    edx = MEM32(esp + 0xC);
    eax = eax + 0x38;
    MEM32(eax) = esi;
    MEM32(eax + 4) = ecx;
    MEM32(eax + 8) = edx;

loc_00129FCF: ;
    POP32(esp, esi);
    esp = esp + 0xC;
    esp += 4; return; /* ret */

}

/**
 * sub_00129FE0
 * Original: 0x00129FE0 - 0x00129FFE (30 bytes, 10 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00129FE0(void)
{

loc_00129FE0: ;
    eax = MEM32(esp + 4);
    PUSH32(esp, 0xFF);
    PUSH32(esp, 0);
    PUSH32(esp, 0x12C);
    PUSH32(esp, 5);
    PUSH32(esp, eax);
    SET_LO8(eax, 1);
    PUSH32(esp, 0); sub_00120700(); /* call 0x00120700 */

loc_00129FFA: ;
    esp = esp + 0x14;
    esp += 4; return; /* ret */

}

/**
 * sub_0012A000
 * Original: 0x0012A000 - 0x0012A01E (30 bytes, 10 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0012A000(void)
{

loc_0012A000: ;
    eax = MEM32(esp + 4);
    PUSH32(esp, 0xFF);
    PUSH32(esp, 0);
    PUSH32(esp, 0x12C);
    PUSH32(esp, 5);
    PUSH32(esp, eax);
    SET_LO8(eax, 2);
    PUSH32(esp, 0); sub_00120700(); /* call 0x00120700 */

loc_0012A01A: ;
    esp = esp + 0x14;
    esp += 4; return; /* ret */

}

/**
 * sub_0012A020
 * Original: 0x0012A020 - 0x0012A040 (32 bytes, 11 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0012A020(void)
{

loc_0012A020: ;
    eax = MEM32(esp + 4);
    PUSH32(esp, 0xFF);
    PUSH32(esp, 0x12C);
    PUSH32(esp, 0);
    PUSH32(esp, 6);
    PUSH32(esp, eax);
    SET_LO8(ecx, 2);
    SET_LO8(eax, 4);
    PUSH32(esp, 0); sub_0011FEE0(); /* call 0x0011FEE0 */

loc_0012A03C: ;
    esp = esp + 0x14;
    esp += 4; return; /* ret */

}

/**
 * sub_0012A0A0
 * Original: 0x0012A0A0 - 0x0012A0E9 (73 bytes, 20 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0012A0A0(void)
{
    int _flags = 0; /* fallback flag var */

loc_0012A0A0: ;
    esp = esp - 8;
    PUSH32(esp, 0xFF);
    PUSH32(esp, 0x3C);
    eax = 0x38;
    MEM8(esp + 8) = 0;
    MEM8(esp + 9) = 0xFF;
    MEM16(esp + 0xA) = 0xA;
    MEM8(esp + 0xE) = 0x20;
    PUSH32(esp, 0); sub_000D9C60(); /* call 0x000D9C60 */

loc_0012A0CA: ;
    esp = esp + 8;
    if (TEST_Z(eax, eax)) goto loc_0012A0E5; /* je: equal / zero */

loc_0012A0D1: ;
    ecx = MEM32(esp);
    edx = MEM32(esp + 4);
    MEM32(eax + 0x2C) = ecx;
    ecx = MEM32(esp + 0xC);
    MEM32(eax + 0x30) = edx;
    MEM32(eax + 0x34) = ecx;

loc_0012A0E5: ;
    esp = esp + 8;
    esp += 4; return; /* ret */

}

/**
 * sub_0012A0F0
 * Original: 0x0012A0F0 - 0x0012A103 (19 bytes, 5 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0012A0F0(void)
{
    uint32_t ebp;
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_0012A0F0: ;
    MEM32(esp + 8) = 0xFF;
    SET_LO8(edx, 0x23);
    SET_LO8(eax, 3);
    SET_LO8(ecx, 1);
    g_seh_ebp = ebp; sub_0011F620(); return; /* tail jmp 0x0011F620 */

}

/**
 * sub_0012A130
 * Original: 0x0012A130 - 0x0012A1A9 (121 bytes, 37 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0012A130(void)
{
    int _flags = 0; /* fallback flag var */
    float xmm0;

loc_0012A130: ;
    esp = esp - 0xC;
    xmm0 = 0.0f; /* xorps self = zero */
    PUSH32(esp, esi);
    PUSH32(esp, 0x64);
    PUSH32(esp, 0x64);
    MEMF(esp + 0x10) = xmm0; /* movss */
    xmm0 = MEMF(0x648E38); /* movss */
    SET_LO8(edx, 0x64);
    PUSH32(esp, 0xFF);
    MEMF(esp + 0x18) = xmm0; /* movss */
    xmm0 = MEMF(0x648D80); /* movss */
    PUSH32(esp, 0x64);
    SET_LO8(eax, LO8(edx));
    esi = 1;
    PUSH32(esp, 0); sub_0012A890(); /* call 0x0012A890 */

loc_0012A16C: ;
    PUSH32(esp, 0xFF);
    PUSH32(esp, 0xC);
    esi = eax;
    eax = MEM32(esp + 0x2C);
    PUSH32(esp, 0);
    PUSH32(esp, 0x12C);
    PUSH32(esp, eax);
    SET_LO8(ecx, 0x10);
    SET_LO8(eax, 2);
    PUSH32(esp, 0); sub_00120860(); /* call 0x00120860 */

loc_0012A18A: ;
    esp = esp + 0x24;
    if (TEST_Z(eax, eax)) goto loc_0012A1A4; /* je: equal / zero */

loc_0012A191: ;
    ecx = MEM32(esp + 8);
    edx = MEM32(esp + 0xC);
    eax = eax + 0x38;
    MEM32(eax) = esi;
    MEM32(eax + 4) = ecx;
    MEM32(eax + 8) = edx;

loc_0012A1A4: ;
    POP32(esp, esi);
    esp = esp + 0xC;
    esp += 4; return; /* ret */

}

/**
 * sub_0012A1B0
 * Original: 0x0012A1B0 - 0x0012A1CE (30 bytes, 10 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0012A1B0(void)
{

loc_0012A1B0: ;
    eax = MEM32(esp + 4);
    PUSH32(esp, 0xFF);
    PUSH32(esp, 0);
    PUSH32(esp, 0x12C);
    PUSH32(esp, 5);
    PUSH32(esp, eax);
    SET_LO8(eax, 5);
    PUSH32(esp, 0); sub_00120700(); /* call 0x00120700 */

loc_0012A1CA: ;
    esp = esp + 0x14;
    esp += 4; return; /* ret */

}

/**
 * sub_0012A1D0
 * Original: 0x0012A1D0 - 0x0012A1EE (30 bytes, 10 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0012A1D0(void)
{

loc_0012A1D0: ;
    eax = MEM32(esp + 4);
    PUSH32(esp, 0xFF);
    PUSH32(esp, 0);
    PUSH32(esp, 0x12C);
    PUSH32(esp, 5);
    PUSH32(esp, eax);
    SET_LO8(eax, 6);
    PUSH32(esp, 0); sub_00120700(); /* call 0x00120700 */

loc_0012A1EA: ;
    esp = esp + 0x14;
    esp += 4; return; /* ret */

}

/**
 * sub_0012A1F0
 * Original: 0x0012A1F0 - 0x0012A210 (32 bytes, 11 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0012A1F0(void)
{

loc_0012A1F0: ;
    eax = MEM32(esp + 4);
    PUSH32(esp, 0xFF);
    PUSH32(esp, 0x12C);
    PUSH32(esp, 0);
    PUSH32(esp, 6);
    PUSH32(esp, eax);
    SET_LO8(ecx, 2);
    SET_LO8(eax, 7);
    PUSH32(esp, 0); sub_0011FEE0(); /* call 0x0011FEE0 */

loc_0012A20C: ;
    esp = esp + 0x14;
    esp += 4; return; /* ret */

}

/**
 * sub_0012A2B0
 * Original: 0x0012A2B0 - 0x0012A2D0 (32 bytes, 11 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0012A2B0(void)
{

loc_0012A2B0: ;
    eax = MEM32(esp + 4);
    PUSH32(esp, 0xFF);
    PUSH32(esp, 0xD);
    PUSH32(esp, 0x12C);
    PUSH32(esp, 2);
    PUSH32(esp, 0);
    PUSH32(esp, eax);
    SET_LO8(eax, 2);
    PUSH32(esp, 0); sub_00120480(); /* call 0x00120480 */

loc_0012A2CC: ;
    esp = esp + 0x18;
    esp += 4; return; /* ret */

}

/**
 * sub_0012A310
 * Original: 0x0012A310 - 0x0012A334 (36 bytes, 11 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0012A310(void)
{

loc_0012A310: ;
    PUSH32(esp, ecx);
    eax = MEM32(esp + 8);
    edx = MEM32(esp + 0xC);
    PUSH32(esp, eax);
    MEM8(esp + 4) = 0;
    MEM8(esp + 5) = 1;
    SET_LO8(eax, MEM8(esp + edx + -52));
    SET_LO8(ecx, LO8(ecx) | 0xFF);
    PUSH32(esp, 0); sub_00120E10(); /* call 0x00120E10 */

loc_0012A330: ;
    esp = esp + 8;
    esp += 4; return; /* ret */

}

/**
 * sub_0012A340
 * Original: 0x0012A340 - 0x0012A35E (30 bytes, 10 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0012A340(void)
{

loc_0012A340: ;
    eax = MEM32(esp + 4);
    PUSH32(esp, 0xFF);
    PUSH32(esp, 0);
    PUSH32(esp, 0x12C);
    PUSH32(esp, 5);
    PUSH32(esp, eax);
    SET_LO8(eax, 8);
    PUSH32(esp, 0); sub_00120700(); /* call 0x00120700 */

loc_0012A35A: ;
    esp = esp + 0x14;
    esp += 4; return; /* ret */

}

/**
 * sub_0012A360
 * Original: 0x0012A360 - 0x0012A37E (30 bytes, 10 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0012A360(void)
{

loc_0012A360: ;
    eax = MEM32(esp + 4);
    PUSH32(esp, 0xFF);
    PUSH32(esp, 0);
    PUSH32(esp, 0x12C);
    PUSH32(esp, 0x28);
    PUSH32(esp, eax);
    SET_LO8(eax, 9);
    PUSH32(esp, 0); sub_00120700(); /* call 0x00120700 */

loc_0012A37A: ;
    esp = esp + 0x14;
    esp += 4; return; /* ret */

}

/**
 * sub_0012A380
 * Original: 0x0012A380 - 0x0012A3A0 (32 bytes, 11 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0012A380(void)
{

loc_0012A380: ;
    eax = MEM32(esp + 4);
    PUSH32(esp, 0xFF);
    PUSH32(esp, 0x12C);
    PUSH32(esp, 0);
    PUSH32(esp, 6);
    PUSH32(esp, eax);
    SET_LO8(ecx, 2);
    SET_LO8(eax, 0xF);
    PUSH32(esp, 0); sub_0011FEE0(); /* call 0x0011FEE0 */

loc_0012A39C: ;
    esp = esp + 0x14;
    esp += 4; return; /* ret */

}

/**
 * sub_0012A3C0
 * Original: 0x0012A3C0 - 0x0012A3D3 (19 bytes, 5 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0012A3C0(void)
{
    uint32_t ebp;
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_0012A3C0: ;
    MEM32(esp + 8) = 0xFF;
    SET_LO8(edx, 0xE);
    SET_LO8(eax, 5);
    SET_LO8(ecx, 0); /* xor self */
    g_seh_ebp = ebp; sub_0011F620(); return; /* tail jmp 0x0011F620 */

}

/**
 * sub_0012A400
 * Original: 0x0012A400 - 0x0012A41E (30 bytes, 10 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0012A400(void)
{

loc_0012A400: ;
    eax = MEM32(esp + 4);
    PUSH32(esp, 0xFF);
    PUSH32(esp, 0);
    PUSH32(esp, 0x12C);
    PUSH32(esp, 0x29);
    PUSH32(esp, eax);
    SET_LO8(eax, 0xC);
    PUSH32(esp, 0); sub_00120700(); /* call 0x00120700 */

loc_0012A41A: ;
    esp = esp + 0x14;
    esp += 4; return; /* ret */

}

/**
 * sub_0012A420
 * Original: 0x0012A420 - 0x0012A43E (30 bytes, 10 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0012A420(void)
{

loc_0012A420: ;
    eax = MEM32(esp + 4);
    PUSH32(esp, 0xFF);
    PUSH32(esp, 0);
    PUSH32(esp, 0x12C);
    PUSH32(esp, 0x29);
    PUSH32(esp, eax);
    SET_LO8(eax, 0xD);
    PUSH32(esp, 0); sub_00120700(); /* call 0x00120700 */

loc_0012A43A: ;
    esp = esp + 0x14;
    esp += 4; return; /* ret */

}

/**
 * sub_0012A440
 * Original: 0x0012A440 - 0x0012A460 (32 bytes, 11 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0012A440(void)
{

loc_0012A440: ;
    eax = MEM32(esp + 4);
    PUSH32(esp, 0xFF);
    PUSH32(esp, 0x12C);
    PUSH32(esp, 0xFFFFFFFFu);
    PUSH32(esp, 0);
    PUSH32(esp, 0x16);
    PUSH32(esp, eax);
    SET_LO8(eax, 1);
    PUSH32(esp, 0); sub_0011FD50(); /* call 0x0011FD50 */

loc_0012A45C: ;
    esp = esp + 0x18;
    esp += 4; return; /* ret */

}

/**
 * sub_0012A5F0
 * Original: 0x0012A5F0 - 0x0012A610 (32 bytes, 11 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0012A5F0(void)
{

loc_0012A5F0: ;
    eax = MEM32(esp + 4);
    PUSH32(esp, 0xFF);
    PUSH32(esp, 0x12C);
    PUSH32(esp, 0);
    PUSH32(esp, 6);
    PUSH32(esp, eax);
    SET_LO8(ecx, 2);
    SET_LO8(eax, 0x16);
    PUSH32(esp, 0); sub_0011FEE0(); /* call 0x0011FEE0 */

loc_0012A60C: ;
    esp = esp + 0x14;
    esp += 4; return; /* ret */

}

/**
 * sub_0012A700
 * Original: 0x0012A700 - 0x0012A713 (19 bytes, 5 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0012A700(void)
{
    uint32_t ebp;
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_0012A700: ;
    MEM32(esp + 8) = 0xFF;
    SET_LO8(edx, 0xE);
    SET_LO8(eax, 6);
    SET_LO8(ecx, 0); /* xor self */
    g_seh_ebp = ebp; sub_0011F620(); return; /* tail jmp 0x0011F620 */

}

/**
 * sub_0012A740
 * Original: 0x0012A740 - 0x0012A881 (321 bytes, 71 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0012A740(void)
{
    int _flags = 0; /* fallback flag var */
    float xmm0, xmm1, xmm2;

loc_0012A740: ;
    esp = esp - 0x30;
    xmm0 = MEMF(0x64A044); /* movss */
    MEMF(esp) = xmm0; /* movss */
    MEMF(esp + 4) = xmm0; /* movss */
    xmm0 = MEMF(0x64A040); /* movss */
    MEMF(esp + 8) = xmm0; /* movss */
    xmm0 = MEMF(0x64A03C); /* movss */
    MEMF(esp + 0xC) = xmm0; /* movss */
    xmm0 = MEMF(0x64A038); /* movss */
    MEMF(esp + 0x10) = xmm0; /* movss */
    xmm0 = MEMF(0x649F50); /* movss */
    MEMF(esp + 0x14) = xmm0; /* movss */
    PUSH32(esp, 0); sub_003E2480(); /* call 0x003E2480 */

loc_0012A793: ;
    xmm0 = MEMF(0x649694); /* movss */
    xmm1 = MEMF(0x648D30); /* movss */
    eax = eax & 0xFFFF;
    xmm2 = (float)(int32_t)eax; /* cvtsi2ss */
    xmm2 = xmm2 * xmm0; /* mulss */
    xmm2 = xmm2 * xmm1; /* mulss */
    MEMF(esp + 0x18) = xmm2; /* movss */
    PUSH32(esp, 0); sub_003E2480(); /* call 0x003E2480 */

loc_0012A7BF: ;
    eax = eax & 0xFFFF;
    xmm2 = (float)(int32_t)eax; /* cvtsi2ss */
    xmm2 = xmm2 * xmm0; /* mulss */
    xmm2 = xmm2 * xmm1; /* mulss */
    MEMF(esp + 0x1C) = xmm2; /* movss */
    PUSH32(esp, 0); sub_003E2480(); /* call 0x003E2480 */

loc_0012A7DB: ;
    eax = eax & 0xFFFF;
    xmm2 = (float)(int32_t)eax; /* cvtsi2ss */
    xmm2 = xmm2 * xmm0; /* mulss */
    xmm0 = MEMF(0x64A034); /* movss */
    MEMF(esp + 0x24) = xmm0; /* movss */
    xmm0 = MEMF(0x64A030); /* movss */
    MEMF(esp + 0x28) = xmm0; /* movss */
    xmm0 = MEMF(0x64A02C); /* movss */
    PUSH32(esp, 0xFF);
    xmm2 = xmm2 * xmm1; /* mulss */
    PUSH32(esp, 0x2A);
    eax = 0x7C;
    MEMF(esp + 0x28) = xmm2; /* movss */
    MEMF(esp + 0x34) = xmm0; /* movss */
    PUSH32(esp, 0); sub_000D9C60(); /* call 0x000D9C60 */

loc_0012A82D: ;
    edx = 0; /* xor self */
    esp = esp + 8;
    if (CMP_EQ(eax, edx)) goto loc_0012A87D; /* je: equal / zero */

loc_0012A836: ;
    xmm0 = MEMF(0x64925C); /* movss */
    SET_LO8(ecx, LO8(ecx) | 0xFF);
    MEM8(eax + 0x38) = LO8(ecx);
    MEM8(eax + 0x3A) = LO8(ecx);
    MEM8(eax + 0x2C) = LO8(edx);
    MEM8(eax + 0x3B) = LO8(edx);
    ecx = 0; /* xor self */
    MEMF(eax + 0x30) = xmm0; /* movss */
    MEMF(eax + 0x34) = xmm0; /* movss */
    MEM8(eax + 0x39) = 0x2D;
    edx = eax + 0x3C;
    MEM32(edx) = ecx;
    MEM32(edx + 4) = ecx;
    PUSH32(esp, esi);
    MEM32(edx + 8) = ecx;
    PUSH32(esp, edi);
    MEM32(edx + 0xC) = ecx;
    edi = eax + 0x4C;
    ecx = 0xC;
    esi = esp + 8;
    memcpy((void*)XBOX_PTR(edi), (void*)XBOX_PTR(esi), ecx * 4);
    esi += ecx * 4; edi += ecx * 4; ecx = 0; /* rep movsd */
    POP32(esp, edi);
    POP32(esp, esi);

loc_0012A87D: ;
    esp = esp + 0x30;
    esp += 4; return; /* ret */

}

/**
 * sub_0012A890
 * Original: 0x0012A890 - 0x0012A914 (132 bytes, 32 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0012A890(void)
{
    int _flags = 0; /* fallback flag var */
    float xmm0;

loc_0012A890: ;
    ecx = MEM32(0x773F94);
    (void)0; /* cmp ecx, 5 - flags set for next jcc */
    PUSH32(esp, ebx);
    SET_LO8(ebx, LO8(eax));
    if (CMP_GE(ecx, 5)) { sub_0012A914(); return; } /* jge: greater or equal (signed >=) */

loc_0012A89E: ;
    eax = ecx + ecx * 8;
    eax = eax << 2;
    MEM32(eax + 0x773FA8) = esi;
    MEMF(eax + 0x773FAC) = xmm0; /* movss */
    MEM8(eax + 0x773F9E) = LO8(ebx);
    MEM8(eax + 0x773F98) = LO8(ebx);
    SET_LO8(ebx, MEM8(esp + 8));
    MEM8(eax + 0x773F9F) = LO8(ebx);
    MEM8(eax + 0x773F99) = LO8(ebx);
    MEM8(eax + 0x773FA0) = LO8(edx);
    MEM8(eax + 0x773F9A) = LO8(edx);
    SET_LO8(edx, MEM8(esp + 0xC));
    MEM8(eax + 0x773F9B) = LO8(edx);
    SET_LO8(edx, MEM8(esp + 0x10));
    MEM8(eax + 0x773F9C) = LO8(edx);
    SET_LO8(edx, MEM8(esp + 0x14));
    MEM8(eax + 0x773F9D) = LO8(edx);
    edx = 0; /* xor self */
    eax = eax + 0x773FB0;
    MEM32(eax) = edx;
    MEM32(eax + 4) = edx;
    ecx++;
    MEM32(eax + 8) = edx;
    MEM32(0x773F94) = ecx;
    eax = ecx + -1;
    POP32(esp, ebx);
    esp += 4; return; /* ret */

}

/**
 * sub_0012A920
 * Original: 0x0012A920 - 0x0012ABCE (686 bytes, 193 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0012A920(void)
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

loc_0012A920: ;
    eax = MEM32(0x773F94);
    esp = esp - 8;
    PUSH32(esp, ebx);
    ebx = 0; /* xor self */
    if (CMP_LE(eax, ebx)) goto loc_0012ABC9; /* jle: less or equal (signed <=) */

loc_0012A933: ;
    PUSH32(esp, ebp);
    PUSH32(esp, esi);
    PUSH32(esp, edi);
    edi = MEM32(0x7FA20C);
    esi = 0x773FB8;
    ebp = eax;

loc_0012A943: ;
    eax = MEM32(esi + -16);
    eax--;
    if ((eax == 0)) goto loc_0012AB0C; /* je: equal / zero */

loc_0012A94D: ;
    eax--;
    if ((eax == 0)) goto loc_0012AAB6; /* je: equal / zero */

loc_0012A954: ;
    eax--;
    if ((eax != 0)) goto loc_0012AB4D; /* jne: not equal / not zero */

loc_0012A95B: ;
    eax = MEM32(esi + -4);
    if (CMP_A(eax, 3)) goto loc_0012AB4D; /* ja: above (unsigned >) */

loc_0012A967: ;
    g_seh_ebp = ebp; RECOMP_ITAIL(MEM32(eax * 4 + 0x12ABD0)); return; /* indirect tail jmp */

    xmm0 = (float)(int32_t)edi; /* cvtsi2ss */
    xmm0 = xmm0 * MEMF(esi + -12); /* mulss */
    xmm0 = xmm0 + MEMF(esi + -20); /* addss */
    /* comiss xmm0, MEMF(esi) - sets EFLAGS */
    MEMF(esi + -20) = xmm0; /* movss */
    if ((xmm0 < MEMF(esi))) goto loc_0012AB4D; /* jb: below (unsigned <) */

loc_0012A98A: ;
    xmm0 = MEMF(esi); /* movss */
    /* ucomiss xmm0, MEMF(0x648D14) - sets EFLAGS */
    /* lahf - load AH from flags (used in FPU compare idiom) */
    (void)0; /* test HI8(eax), 0x44 - flags set for next jcc */
    MEMF(esi + -20) = xmm0; /* movss */
    if (1 /* jp after test - parity */) goto loc_0012A9CE; /* jp: parity */

loc_0012A9A0: ;
    PUSH32(esp, 0); sub_003E2480(); /* call 0x003E2480 */

loc_0012A9A5: ;
    eax = eax & 0x80000001u;
    if (((int32_t)eax >= 0)) goto loc_0012A9B1; /* jns: not sign (positive) */

loc_0012A9AC: ;
    eax--;
    eax = eax | 0xFFFFFFFEu;
    eax++;

loc_0012A9B1: ;
    xmm0 = 0.0f; /* xorps self = zero */
    if ((eax == 0)) goto loc_0012A9BE; /* je: equal / zero */

loc_0012A9B6: ;
    xmm0 = MEMF(0x648D10); /* movss */

loc_0012A9BE: ;
    MEMF(esi) = xmm0; /* movss */
    MEM32(esi + -4) = 2;
    goto loc_0012AB4D;

loc_0012A9CE: ;
    MEM32(esi + -4) = 1;

loc_0012A9D5: ;
    PUSH32(esp, 0); sub_003E2480(); /* call 0x003E2480 */

loc_0012A9DA: ;
    edx = ((int32_t)eax < 0) ? 0xFFFFFFFF : 0; /* cdq */
    ecx = 0x1E;
    { int64_t _dividend = ((int64_t)(int32_t)edx << 32) | eax;
      eax = (uint32_t)((int32_t)(_dividend / (int32_t)ecx));
      edx = (uint32_t)((int32_t)(_dividend % (int32_t)ecx)); }
    edx = edx + ecx;
    MEM32(esi) = edx;
    goto loc_0012AB4D;

    ecx = MEM32(esi);
    ecx = ecx - edi;
    eax = ecx;
    (void)0; /* cmp eax, ebx - flags set for next jcc */
    MEM32(esi) = ecx;
    if (CMP_G(eax, ebx)) goto loc_0012AB4D; /* jg: greater (signed >) */

loc_0012A9FB: ;
    PUSH32(esp, 0); sub_003E2480(); /* call 0x003E2480 */

loc_0012AA00: ;
    eax = eax & 0x80000001u;
    if (((int32_t)eax >= 0)) goto loc_0012AA0C; /* jns: not sign (positive) */

loc_0012AA07: ;
    eax--;
    eax = eax | 0xFFFFFFFEu;
    eax++;

loc_0012AA0C: ;
    eax = eax << 1;
    (void)0; /* cmp eax, ebx - flags set for next jcc */
    MEM32(esi + -4) = eax;
    if (CMP_NE(eax, ebx)) goto loc_0012AA26; /* jne: not equal / not zero */

loc_0012AA15: ;
    xmm0 = MEMF(0x648D14); /* movss */
    MEMF(esi) = xmm0; /* movss */
    goto loc_0012AB4D;

loc_0012AA26: ;
    xmm0 = 0.0f; /* xorps self = zero */
    MEMF(esi) = xmm0; /* movss */
    goto loc_0012AB4D;

    xmm0 = MEMF(esi + -20); /* movss */
    xmm1 = (float)(int32_t)edi; /* cvtsi2ss */
    xmm1 = xmm1 * MEMF(esi + -12); /* mulss */
    xmm0 = xmm0 - xmm1; /* subss */
    xmm1 = MEMF(esi); /* movss */
    /* comiss xmm1, xmm0 - sets EFLAGS */
    MEMF(esi + -20) = xmm0; /* movss */
    if ((xmm1 < xmm0)) goto loc_0012AB4D; /* jb: below (unsigned <) */

loc_0012AA56: ;
    xmm0 = xmm1; /* movaps */
    /* ucomiss xmm0, MEMF(0x648CF8) - sets EFLAGS */
    /* lahf - load AH from flags (used in FPU compare idiom) */
    (void)0; /* test HI8(eax), 0x44 - flags set for next jcc */
    MEMF(esi + -20) = xmm0; /* movss */
    if (1 /* jp after test - parity */) goto loc_0012A9CE; /* jp: parity */

loc_0012AA6F: ;
    MEM32(esi + -4) = 3;
    goto loc_0012A9D5;

    ecx = MEM32(esi);
    ecx = ecx - edi;
    eax = ecx;
    (void)0; /* cmp eax, ebx - flags set for next jcc */
    MEM32(esi) = ecx;
    if (CMP_G(eax, ebx)) goto loc_0012AB4D; /* jg: greater (signed >) */

loc_0012AA8B: ;
    MEM32(esi + -4) = ebx;
    PUSH32(esp, 0); sub_003E2480(); /* call 0x003E2480 */

loc_0012AA93: ;
    eax = eax & 0x80000001u;
    if (((int32_t)eax >= 0)) goto loc_0012AA9F; /* jns: not sign (positive) */

loc_0012AA9A: ;
    eax--;
    eax = eax | 0xFFFFFFFEu;
    eax++;

loc_0012AA9F: ;
    if ((eax != 0)) goto loc_0012AA15; /* jne: not equal / not zero */

loc_0012AAA5: ;
    xmm0 = MEMF(0x648D10); /* movss */
    MEMF(esi) = xmm0; /* movss */
    goto loc_0012AB4D;

loc_0012AAB6: ;
    eax = MEM32(esi);
    if (CMP_NE(eax, ebx)) goto loc_0012AAD1; /* jne: not equal / not zero */

loc_0012AABC: ;
    xmm0 = MEMF(0x648D14); /* movss */
    MEM32(esi) = 0xFFFFFFF8u;
    MEMF(esi + -20) = xmm0; /* movss */
    goto loc_0012AB4D;

loc_0012AAD1: ;
    if (CMP_GE(eax, ebx)) goto loc_0012AB02; /* jge: greater or equal (signed >=) */

loc_0012AAD3: ;
    eax = eax + edi;
    (void)0; /* cmp eax, ebx - flags set for next jcc */
    MEM32(esi) = eax;
    if (CMP_L(eax, ebx)) goto loc_0012AB4D; /* jl: less (signed <) */

loc_0012AADB: ;
    ecx = MEM32(esi + -4);
    xmm0 = 0.0f; /* xorps self = zero */
    ecx++;
    eax = ecx;
    (void)0; /* cmp eax, 8 - flags set for next jcc */
    MEMF(esi + -20) = xmm0; /* movss */
    MEM32(esi + -4) = ecx;
    if (CMP_B(eax, 8)) goto loc_0012AAF4; /* jb: below (unsigned <) */

loc_0012AAF1: ;
    MEM32(esi + -4) = ebx;

loc_0012AAF4: ;
    edx = MEM32(esi + -4);
    eax = ZX8(MEM8(edx + 0x596D4C));
    MEM32(esi) = eax;
    goto loc_0012AB4D;

loc_0012AB02: ;
    eax = eax - edi;
    MEM32(esi) = eax;
    if (((int32_t)eax >= 0)) goto loc_0012AB4D; /* jns: not sign (positive) */

loc_0012AB08: ;
    MEM32(esi) = ebx;
    goto loc_0012AB4D;

loc_0012AB0C: ;
    fp_push(MEMF(esi + -4)); /* fld float */
    xmm0 = MEMF(esi + -12); /* movss */
    /* FPU: fsin  */
    xmm0 = xmm0 * MEMF(0x7FA24C); /* mulss */
    xmm0 = xmm0 + MEMF(esi + -4); /* addss */
    xmm1 = MEMF(0x648D30); /* movss */
    /* comiss xmm0, xmm1 - sets EFLAGS */
    MEMF(esi + -4) = xmm0; /* movss */
    fp_st1() += fp_top(); fp_pop(); /* fadd */
    fp_st1() *= fp_top(); fp_pop(); /* fmul */
    MEMF(esi + -20) = (float)fp_top(); fp_popp(); /* fstp */
    if ((xmm0 < xmm1)) goto loc_0012AB4D; /* jb: below (unsigned <) */

loc_0012AB44: ;
    xmm0 = xmm0 - xmm1; /* subss */
    MEMF(esi + -4) = xmm0; /* movss */

loc_0012AB4D: ;
    eax = ZX8(MEM8(esi + -32));
    ecx = ZX8(MEM8(esi + -29));
    ecx = ecx - eax;
    MEM32(esp + 0x10) = ecx;
    MEM32(esp + 0x14) = eax;
    fp_push((double)SMEM32(esp + 0x10)); /* fild */
    fp_st1() *= fp_top(); fp_pop(); /* fmul */
    /* FPU: fiadd dword ptr [esp + 0x14] */
    PUSH32(esp, 0); sub_00471288(); /* call 0x00471288 */

loc_0012AB6F: ;
    edx = ZX8(MEM8(esi + -28));
    MEM8(esi + -26) = LO8(eax);
    eax = ZX8(MEM8(esi + -31));
    edx = edx - eax;
    MEM32(esp + 0x14) = edx;
    MEM32(esp + 0x10) = eax;
    fp_push((double)SMEM32(esp + 0x14)); /* fild */
    fp_st1() *= fp_top(); fp_pop(); /* fmul */
    /* FPU: fiadd dword ptr [esp + 0x10] */
    PUSH32(esp, 0); sub_00471288(); /* call 0x00471288 */

loc_0012AB94: ;
    ecx = ZX8(MEM8(esi + -27));
    MEM8(esi + -25) = LO8(eax);
    eax = ZX8(MEM8(esi + -30));
    ecx = ecx - eax;
    MEM32(esp + 0x14) = ecx;
    MEM32(esp + 0x10) = eax;
    fp_push((double)SMEM32(esp + 0x14)); /* fild */
    fp_st1() *= fp_top(); fp_pop(); /* fmul */
    /* FPU: fiadd dword ptr [esp + 0x10] */
    PUSH32(esp, 0); sub_00471288(); /* call 0x00471288 */

loc_0012ABB9: ;
    MEM8(esi + -24) = LO8(eax);
    esi = esi + 0x24;
    ebp--;
    if ((ebp != 0)) goto loc_0012A943; /* jne: not equal / not zero */

loc_0012ABC6: ;
    POP32(esp, edi);
    POP32(esp, esi);
    POP32(esp, ebp);

loc_0012ABC9: ;
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
 * sub_0012ABE0
 * Original: 0x0012ABE0 - 0x0012AE5E (638 bytes, 197 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0012ABE0(void)
{
    uint32_t ebp;
    int _flags = 0; /* fallback flag var */
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_0012ABE0: ;
    eax = 0x281C;
    PUSH32(esp, 0); sub_00470E50(); /* call 0x00470E50 */

loc_0012ABEA: ;
    PUSH32(esp, ebx);
    PUSH32(esp, ebp);
    PUSH32(esp, esi);
    PUSH32(esp, edi);
    PUSH32(esp, 0x3FF);
    PUSH32(esp, 0x5F4134);
    eax = esp + 0x434;
    PUSH32(esp, eax);
    PUSH32(esp, 0); sub_0042DD7A(); /* call 0x0042DD7A */

loc_0012AC05: ;
    ecx = MEM32(esp + 0x2834);
    eax = 0; /* xor self */
    (void)0; /* test ecx, ecx - flags set for next jcc */
    MEM8(esp + 0x2C) = 0;
    MEM8(esp + 0x42B) = 0;
    if (CMP_LE(ecx & ecx, 0)) goto loc_0012AE51; /* jle: less or equal (signed <=) */

loc_0012AC23: ;
    ecx = esp + 0x42C;
    esi = esp + 0x182C;
    esi = esi - ecx;
    edx = esp + 0x142C;
    ecx = esp + 0x102C;
    ebx = esp + 0x1C2C;
    ebx = ebx - edx;
    ebp = esp + 0x242C;
    ebp = ebp - ecx;
    ecx = esp + 0x2C;
    edx = esp + 0x82C;
    ecx = ecx - edx;
    MEM32(esp + 0x20) = esi;
    MEM32(esp + 0x10) = ebx;
    MEM32(esp + 0x14) = ebp;
    MEM32(esp + 0x24) = ecx;

loc_0012AC70: ;
    PUSH32(esp, 0xA);
    ecx = esp + 0xC30;
    eax++;
    PUSH32(esp, ecx);
    PUSH32(esp, eax);
    MEM32(esp + 0x34) = eax;
    PUSH32(esp, 0); sub_00479B08(); /* call 0x00479B08 */

loc_0012AC85: ;
    esp = esp + 0xC;
    PUSH32(esp, 0x3FF);
    PUSH32(esp, 0x5F4130);
    edx = esp + 0x2034;
    PUSH32(esp, edx);
    MEM8(esp + 0x1037) = 0;
    PUSH32(esp, 0); sub_0042DD7A(); /* call 0x0042DD7A */

loc_0012ACA7: ;
    eax = esp + 0x42C;
    edi = edi;

loc_0012ACB0: ;
    SET_LO8(ecx, MEM8(eax));
    MEM8(esi + eax) = LO8(ecx);
    eax++;
    if (TEST_NZ(LO8(ecx), LO8(ecx))) goto loc_0012ACB0; /* jne: not equal / not zero */

loc_0012ACBA: ;
    eax = MEM32(esp + 0x2830);
    PUSH32(esp, eax);
    edi = esp + 0x1830;
    PUSH32(esp, 0); sub_000687F0(); /* call 0x000687F0 */

loc_0012ACCE: ;
    edx = esp + 0x142C;

loc_0012ACD5: ;
    SET_LO8(ecx, MEM8(eax));
    eax++;
    MEM8(edx) = LO8(ecx);
    edx++;
    if (TEST_NZ(LO8(ecx), LO8(ecx))) goto loc_0012ACD5; /* jne: not equal / not zero */

loc_0012ACDF: ;
    eax = esp + 0x142C;

loc_0012ACE6: ;
    SET_LO8(ecx, MEM8(eax));
    MEM8(ebx + eax) = LO8(ecx);
    eax++;
    if (TEST_NZ(LO8(ecx), LO8(ecx))) goto loc_0012ACE6; /* jne: not equal / not zero */

loc_0012ACF0: ;
    ecx = esp + 0x202C;
    PUSH32(esp, ecx);
    edi = esp + 0x1C30;
    PUSH32(esp, 0); sub_000687F0(); /* call 0x000687F0 */

loc_0012AD04: ;
    edx = esp + 0x102C;
    goto loc_0012AD10;

    /* nop */

loc_0012AD10: ;
    SET_LO8(ecx, MEM8(eax));
    eax++;
    MEM8(edx) = LO8(ecx);
    edx++;
    if (TEST_NZ(LO8(ecx), LO8(ecx))) goto loc_0012AD10; /* jne: not equal / not zero */

loc_0012AD1A: ;
    eax = esp + 0x102C;

loc_0012AD21: ;
    SET_LO8(ecx, MEM8(eax));
    MEM8(eax + ebp) = LO8(ecx);
    eax++;
    if (TEST_NZ(LO8(ecx), LO8(ecx))) goto loc_0012AD21; /* jne: not equal / not zero */

loc_0012AD2B: ;
    edx = esp + 0xC2C;
    PUSH32(esp, edx);
    edi = esp + 0x2430;
    PUSH32(esp, 0); sub_000687F0(); /* call 0x000687F0 */

loc_0012AD3F: ;
    edx = esp + 0x82C;

loc_0012AD46: ;
    SET_LO8(ecx, MEM8(eax));
    eax++;
    MEM8(edx) = LO8(ecx);
    edx++;
    if (TEST_NZ(LO8(ecx), LO8(ecx))) goto loc_0012AD46; /* jne: not equal / not zero */

loc_0012AD50: ;
    eax = esp + 0x82C;

loc_0012AD57: ;
    SET_LO8(ecx, MEM8(eax));
    edx = MEM32(esp + 0x24);
    MEM8(edx + eax) = LO8(ecx);
    eax++;
    if (TEST_NZ(LO8(ecx), LO8(ecx))) goto loc_0012AD57; /* jne: not equal / not zero */

loc_0012AD65: ;
    PUSH32(esp, 0x5F4120);
    edi = esp + 0x30;
    PUSH32(esp, 0); sub_000687F0(); /* call 0x000687F0 */

loc_0012AD73: ;
    PUSH32(esp, 0x84D458);
    eax = edi;
    PUSH32(esp, 0); sub_00061ED0(); /* call 0x00061ED0 */

loc_0012AD7F: ;
    if (TEST_NZ(eax, eax)) goto loc_0012AE40; /* jne: not equal / not zero */

loc_0012AD87: ;
    PUSH32(esp, 0); sub_00061000(); /* call 0x00061000 */

loc_0012AD8C: ;
    ebp = eax;
    (void)0; /* cmp MEM8(esp + 0x2C), 0x5C - flags set for next jcc */
    ebx = edi;
    if (CMP_NE(MEM8(esp + 0x2C), 0x5C)) goto loc_0012AD9B; /* jne: not equal / not zero */

loc_0012AD97: ;
    ebx = esp + 0x2D;

loc_0012AD9B: ;
    eax = ebx;
    edx = eax + 1;

loc_0012ADA0: ;
    SET_LO8(ecx, MEM8(eax));
    eax++;
    if (TEST_NZ(LO8(ecx), LO8(ecx))) goto loc_0012ADA0; /* jne: not equal / not zero */

loc_0012ADA7: ;
    eax = eax - edx;
    edi = eax;
    if ((eax == 0)) goto loc_0012ADC0; /* je: equal / zero */

loc_0012ADAD: ;
    PUSH32(esp, 0x5C);
    PUSH32(esp, ebx);
    PUSH32(esp, 0); sub_0046F000(); /* call 0x0046F000 */

loc_0012ADB5: ;
    esp = esp + 8;
    if (TEST_Z(eax, eax)) goto loc_0012ADC0; /* je: equal / zero */

loc_0012ADBC: ;
    eax = eax - ebx;
    edi = eax;

loc_0012ADC0: ;
    esi = MEM32(ebp + 4);
    (void)0; /* test esi, esi - flags set for next jcc */
    MEM32(esp + 0x1C) = edi;
    MEM32(esp + 0x18) = ebx;
    if (TEST_Z(esi, esi)) goto loc_0012AE22; /* je: equal / zero */

loc_0012ADCF: ;
    /* nop */

loc_0012ADD0: ;
    eax = ZX8(MEM8(esi + 0x40));
    if (CMP_NE(edi, eax)) goto loc_0012ADEA; /* jne: not equal / not zero */

loc_0012ADD8: ;
    PUSH32(esp, edi);
    ecx = esi + 0x10;
    PUSH32(esp, ebx);
    PUSH32(esp, ecx);
    PUSH32(esp, 0); sub_00470DFA(); /* call 0x00470DFA */

loc_0012ADE3: ;
    esp = esp + 0xC;
    if (TEST_Z(eax, eax)) goto loc_0012ADF1; /* je: equal / zero */

loc_0012ADEA: ;
    esi = MEM32(esi + 0xC);
    if (TEST_NZ(esi, esi)) goto loc_0012ADD0; /* jne: not equal / not zero */

loc_0012ADF1: ;
    if (TEST_Z(esi, esi)) goto loc_0012AE22; /* je: equal / zero */

loc_0012ADF5: ;
    edx = esp + 0x18;
    PUSH32(esp, edx);
    ebx = esp + 0x20;
    PUSH32(esp, 0); sub_00061430(); /* call 0x00061430 */

loc_0012AE03: ;
    eax = MEM32(esp + 0x1C);
    if (TEST_Z(eax, eax)) goto loc_0012AE1E; /* je: equal / zero */

loc_0012AE0B: ;
    esi = MEM32(esi + 4);
    PUSH32(esp, esi);
    PUSH32(esp, eax);
    eax = MEM32(esp + 0x20);
    PUSH32(esp, eax);
    ecx = ebp;
    PUSH32(esp, 0); sub_000613A0(); /* call 0x000613A0 */

loc_0012AE1C: ;
    esi = eax;

loc_0012AE1E: ;
    if (TEST_NZ(esi, esi)) goto loc_0012AE34; /* jne: not equal / not zero */

loc_0012AE22: ;
    PUSH32(esp, 0);
    eax = esp + 0x30;
    PUSH32(esp, 0); sub_0029CD50(); /* call 0x0029CD50 */

loc_0012AE2D: ;
    esp = esp + 4;
    if (CMP_NE(LO8(eax), 1)) { sub_0012AE5E(); return; } /* jne: not equal / not zero */

loc_0012AE34: ;
    esi = MEM32(esp + 0x20);
    ebx = MEM32(esp + 0x10);
    ebp = MEM32(esp + 0x14);

loc_0012AE40: ;
    eax = MEM32(esp + 0x28);
    if (CMP_L(eax, MEM32(esp + 0x2834))) goto loc_0012AC70; /* jl: less (signed <) */

loc_0012AE51: ;
    POP32(esp, edi);
    POP32(esp, esi);
    POP32(esp, ebp);
    SET_LO8(eax, 1);
    POP32(esp, ebx);
    esp = esp + 0x281C;
    esp += 4; return; /* ret */

}

/**
 * sub_0012AE70
 * Original: 0x0012AE70 - 0x0012B0E3 (627 bytes, 186 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0012AE70(void)
{
    uint32_t ebp;
    int _flags = 0; /* fallback flag var */
    float xmm0;
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_0012AE70: ;
    esp = esp - 0x614;
    PUSH32(esp, esi);
    esi = MEM32(esp + 0x61C);
    PUSH32(esp, edi);
    edi = MEM32(esp + 0x628);
    PUSH32(esp, 0x7F);
    PUSH32(esp, 0x5F4110);
    eax = esp + 0x324;
    PUSH32(esp, eax);
    MEM32(esi + 4) = edi;
    MEMF(esi + 8) = xmm0; /* movss */
    PUSH32(esp, 0); sub_0042DD7A(); /* call 0x0042DD7A */

loc_0012AEA2: ;
    ecx = edi + edi * 4;
    ecx = ecx << 2;
    PUSH32(esp, ecx);
    PUSH32(esp, 0); sub_0046DAB2(); /* call 0x0046DAB2 */

loc_0012AEAE: ;
    MEM32(esi) = eax;
    esp = esp + 4;
    eax = 0; /* xor self */
    if (CMP_LE(edi & edi, 0)) goto loc_0012B0D6; /* jle: less or equal (signed <=) */

loc_0012AEBD: ;
    edx = esp + 0x11C;
    edi = esp + 0x41C;
    edi = edi - edx;
    edx = esp + 0x21C;
    ecx = esp + 0x51C;
    ecx = ecx - edx;
    MEM32(esp + 0x10) = ecx;
    edx = esp + 0x9C;
    ecx = esp + 0x49C;
    ecx = ecx - edx;
    MEM32(esp + 8) = ecx;
    ecx = esp + 0x59C;
    edx = esp + 0x19C;
    PUSH32(esp, ebx);
    ecx = ecx - edx;
    PUSH32(esp, ebp);
    MEM32(esp + 0x20) = edi;
    MEM32(esp + 0x14) = ecx;
    ebp = 0; /* xor self */
    goto loc_0012AF20;

loc_0012AF13: ;
    edi = MEM32(esp + 0x20);
    goto loc_0012AF20;

    /* nop */

loc_0012AF20: ;
    PUSH32(esp, 0xA);
    ecx = esp + 0x2A8;
    eax++;
    PUSH32(esp, ecx);
    PUSH32(esp, eax);
    MEM32(esp + 0x28) = eax;
    PUSH32(esp, 0); sub_00479B08(); /* call 0x00479B08 */

loc_0012AF35: ;
    esp = esp + 0xC;
    PUSH32(esp, 0x7F);
    PUSH32(esp, 0x5F4130);
    edx = esp + 0x3AC;
    PUSH32(esp, edx);
    MEM8(esp + 0x32F) = 0;
    PUSH32(esp, 0); sub_0042DD7A(); /* call 0x0042DD7A */

loc_0012AF54: ;
    PUSH32(esp, 0x7F);
    PUSH32(esp, 0x5F410C);
    eax = esp + 0x12C;
    PUSH32(esp, eax);
    PUSH32(esp, 0); sub_0042DD7A(); /* call 0x0042DD7A */

loc_0012AF68: ;
    eax = esp + 0x124;
    /* nop */

loc_0012AF70: ;
    SET_LO8(ecx, MEM8(eax));
    MEM8(edi + eax) = LO8(ecx);
    eax++;
    if (TEST_NZ(LO8(ecx), LO8(ecx))) goto loc_0012AF70; /* jne: not equal / not zero */

loc_0012AF7A: ;
    ebx = esp + 0x324;
    edi = esp + 0x424;
    PUSH32(esp, 0); sub_00065540(); /* call 0x00065540 */

loc_0012AF8D: ;
    edx = esp + 0x224;

loc_0012AF94: ;
    SET_LO8(ecx, MEM8(eax));
    eax++;
    MEM8(edx) = LO8(ecx);
    edx++;
    if (TEST_NZ(LO8(ecx), LO8(ecx))) goto loc_0012AF94; /* jne: not equal / not zero */

loc_0012AF9E: ;
    eax = esp + 0x224;

loc_0012AFA5: ;
    SET_LO8(ecx, MEM8(eax));
    edx = MEM32(esp + 0x18);
    MEM8(edx + eax) = LO8(ecx);
    eax++;
    if (TEST_NZ(LO8(ecx), LO8(ecx))) goto loc_0012AFA5; /* jne: not equal / not zero */

loc_0012AFB3: ;
    ebx = MEM32(esp + 0x62C);
    edi = esp + 0x524;
    PUSH32(esp, 0); sub_00065540(); /* call 0x00065540 */

loc_0012AFC6: ;
    edx = esp + 0xA4;
    /* nop */

loc_0012AFD0: ;
    SET_LO8(ecx, MEM8(eax));
    eax++;
    MEM8(edx) = LO8(ecx);
    edx++;
    if (TEST_NZ(LO8(ecx), LO8(ecx))) goto loc_0012AFD0; /* jne: not equal / not zero */

loc_0012AFDA: ;
    eax = esp + 0xA4;

loc_0012AFE1: ;
    SET_LO8(ecx, MEM8(eax));
    edx = MEM32(esp + 0x10);
    MEM8(edx + eax) = LO8(ecx);
    eax++;
    if (TEST_NZ(LO8(ecx), LO8(ecx))) goto loc_0012AFE1; /* jne: not equal / not zero */

loc_0012AFEF: ;
    ebx = esp + 0x3A4;
    edi = esp + 0x4A4;
    PUSH32(esp, 0); sub_00065540(); /* call 0x00065540 */

loc_0012B002: ;
    edx = esp + 0x1A4;
    /* nop */

loc_0012B010: ;
    SET_LO8(ecx, MEM8(eax));
    eax++;
    MEM8(edx) = LO8(ecx);
    edx++;
    if (TEST_NZ(LO8(ecx), LO8(ecx))) goto loc_0012B010; /* jne: not equal / not zero */

loc_0012B01A: ;
    eax = esp + 0x1A4;

loc_0012B021: ;
    SET_LO8(ecx, MEM8(eax));
    edx = MEM32(esp + 0x14);
    MEM8(edx + eax) = LO8(ecx);
    eax++;
    if (TEST_NZ(LO8(ecx), LO8(ecx))) goto loc_0012B021; /* jne: not equal / not zero */

loc_0012B02F: ;
    ebx = esp + 0x2A4;
    edi = esp + 0x5A4;
    PUSH32(esp, 0); sub_00065540(); /* call 0x00065540 */

loc_0012B042: ;
    edx = esp + 0x24;

loc_0012B046: ;
    SET_LO8(ecx, MEM8(eax));
    eax++;
    MEM8(edx) = LO8(ecx);
    edx++;
    if (TEST_NZ(LO8(ecx), LO8(ecx))) goto loc_0012B046; /* jne: not equal / not zero */

loc_0012B050: ;
    eax = esp + 0x24;
    edx = eax + 1;

loc_0012B057: ;
    SET_LO8(ecx, MEM8(eax));
    eax++;
    if (TEST_NZ(LO8(ecx), LO8(ecx))) goto loc_0012B057; /* jne: not equal / not zero */

loc_0012B05E: ;
    PUSH32(esp, 0xFFFFFFFFu);
    eax = eax - edx;
    PUSH32(esp, 0x1BD);
    eax++;
    PUSH32(esp, 0x5F40D4);
    PUSH32(esp, eax);
    PUSH32(esp, 0); sub_002AF0E0(); /* call 0x002AF0E0 */

loc_0012B073: ;
    esp = esp + 0x10;
    if (TEST_Z(eax, eax)) goto loc_0012B095; /* je: equal / zero */

loc_0012B07A: ;
    ecx = esp + 0x24;
    esi = eax;
    edx = ecx;
    esi = esi - edx;

loc_0012B084: ;
    SET_LO8(edx, MEM8(ecx));
    MEM8(esi + ecx) = LO8(edx);
    ecx++;
    if (TEST_NZ(LO8(edx), LO8(edx))) goto loc_0012B084; /* jne: not equal / not zero */

loc_0012B08E: ;
    esi = MEM32(esp + 0x628);

loc_0012B095: ;
    ecx = MEM32(esi);
    MEM32(ecx + ebp) = eax;
    edx = MEM32(esi);
    MEM32(edx + ebp + 4) = 0;
    eax = MEM32(esi);
    eax = eax + ebp;
    edx = MEM32(eax + 4);
    (void)0; /* test edx, edx - flags set for next jcc */
    ecx = eax + 4;
    if (TEST_NZ(edx, edx)) goto loc_0012B0BE; /* jne: not equal / not zero */

loc_0012B0B2: ;
    eax = MEM32(eax);
    PUSH32(esp, ecx);
    PUSH32(esp, eax);
    PUSH32(esp, 0); sub_00075E90(); /* call 0x00075E90 */

loc_0012B0BB: ;
    esp = esp + 8;

loc_0012B0BE: ;
    eax = MEM32(esp + 0x1C);
    ecx = MEM32(esp + 0x630);
    ebp = ebp + 0x14;
    if (CMP_L(eax, ecx)) goto loc_0012AF13; /* jl: less (signed <) */

loc_0012B0D4: ;
    POP32(esp, ebp);
    POP32(esp, ebx);

loc_0012B0D6: ;
    POP32(esp, edi);
    eax = esi;
    POP32(esp, esi);
    esp = esp + 0x614;
    esp += 16; return; /* ret 12 */

}

/**
 * sub_0012B0F0
 * Original: 0x0012B0F0 - 0x0012B175 (133 bytes, 51 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0012B0F0(void)
{
    uint32_t ebp;
    int _flags = 0; /* fallback flag var */
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_0012B0F0: ;
    PUSH32(esp, ecx);
    eax = MEM32(edi + 4);
    PUSH32(esp, ebp);
    ebp = 0; /* xor self */
    (void)0; /* cmp eax, ebp - flags set for next jcc */
    MEM32(esp + 4) = ebp;
    if (CMP_LE(eax, ebp)) goto loc_0012B167; /* jle: less or equal (signed <=) */

loc_0012B0FF: ;
    PUSH32(esp, ebx);
    PUSH32(esp, esi);

loc_0012B101: ;
    eax = MEM32(edi);
    eax = eax + ebp;
    ebx = eax + 4;
    if (CMP_EQ(MEM32(ebx), 0)) goto loc_0012B112; /* je: equal / zero */

loc_0012B10D: ;
    PUSH32(esp, 0); sub_00076380(); /* call 0x00076380 */

loc_0012B112: ;
    esi = MEM32(edi);
    eax = MEM32(esi + ebp);
    esi = esi + ebp;
    PUSH32(esp, eax);
    PUSH32(esp, 0); sub_0042C911(); /* call 0x0042C911 */

loc_0012B11F: ;
    if (TEST_NZ(eax, eax)) goto loc_0012B152; /* jne: not equal / not zero */

loc_0012B123: ;
    eax = MEM32(esi);
    if (TEST_Z(eax, eax)) goto loc_0012B152; /* je: equal / zero */

loc_0012B129: ;
    ebx = MEM32(0x7FA490);
    edx = MEM32(0x7FA4B4);
    ebx++;
    edx--;
    PUSH32(esp, eax);
    MEM32(0x7FA490) = ebx;
    MEM32(0x7FA4B4) = edx;
    PUSH32(esp, 0); sub_003E7080(); /* call 0x003E7080 */

loc_0012B149: ;
    esp = esp + 4;
    MEM32(esi) = 0;

loc_0012B152: ;
    eax = MEM32(esp + 0xC);
    ecx = MEM32(edi + 4);
    eax++;
    ebp = ebp + 0x14;
    (void)0; /* cmp eax, ecx - flags set for next jcc */
    MEM32(esp + 0xC) = eax;
    if (CMP_L(eax, ecx)) goto loc_0012B101; /* jl: less (signed <) */

loc_0012B165: ;
    POP32(esp, esi);
    POP32(esp, ebx);

loc_0012B167: ;
    ecx = MEM32(edi);
    PUSH32(esp, ecx);
    PUSH32(esp, 0); sub_0046E4B6(); /* call 0x0046E4B6 */

loc_0012B16F: ;
    esp = esp + 4;
    POP32(esp, ebp);
    POP32(esp, ecx);
    esp += 4; return; /* ret */

}

/**
 * sub_0012B180
 * Original: 0x0012B180 - 0x0012B1C8 (72 bytes, 26 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0012B180(void)
{
    int _flags = 0; /* fallback flag var */
    float xmm0, xmm1;

loc_0012B180: ;
    SET_LO8(eax, MEM8(0x7FA23C));
    (void)0; /* test LO8(eax), LO8(eax) - flags set for next jcc */
    xmm0 = 0.0f; /* xorps self = zero */
    if (TEST_NZ(LO8(eax), LO8(eax))) goto loc_0012B194; /* jne: not equal / not zero */

loc_0012B18C: ;
    xmm0 = MEMF(0x7F9F4C); /* movss */

loc_0012B194: ;
    xmm1 = MEMF(ecx + 8); /* movss */
    xmm1 = xmm1 * xmm0; /* mulss */
    eax = (int32_t)xmm1; /* cvttss2si */
    edx = ((int32_t)eax < 0) ? 0xFFFFFFFF : 0; /* cdq */
    { int64_t _dividend = ((int64_t)(int32_t)edx << 32) | eax;
      eax = (uint32_t)((int32_t)(_dividend / (int32_t)MEM32(ecx + 4)));
      edx = (uint32_t)((int32_t)(_dividend % (int32_t)MEM32(ecx + 4))); }
    ecx = MEM32(ecx);
    PUSH32(esp, esi);
    eax = edx + edx * 4;
    eax = ecx + eax * 4;
    ecx = MEM32(eax + 4);
    (void)0; /* test ecx, ecx - flags set for next jcc */
    esi = eax + 4;
    if (TEST_NZ(ecx, ecx)) goto loc_0012B1C4; /* jne: not equal / not zero */

loc_0012B1B8: ;
    edx = MEM32(eax);
    PUSH32(esp, esi);
    PUSH32(esp, edx);
    PUSH32(esp, 0); sub_00075E90(); /* call 0x00075E90 */

loc_0012B1C1: ;
    esp = esp + 8;

loc_0012B1C4: ;
    eax = MEM32(esi);
    POP32(esp, esi);
    esp += 4; return; /* ret */

}

/**
 * sub_0012B1D0
 * Original: 0x0012B1D0 - 0x0012B256 (134 bytes, 37 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0012B1D0(void)
{
    uint32_t ebp;
    int _flags = 0; /* fallback flag var */
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_0012B1D0: ;
    eax = MEM32(0x8493BC);
    if (TEST_NZ(eax, eax)) { sub_0012B256(); return; } /* jne: not equal / not zero */

loc_0012B1D9: ;
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, edi);
    PUSH32(esp, 0x77404C);
    PUSH32(esp, 0); RECOMP_ICALL_SAFE(MEM32(0x561000), _icall_esp); /* indirect call */
    }

loc_0012B1E5: ;
    PUSH32(esp, 0); sub_0012E3D0(); /* call 0x0012E3D0 */

loc_0012B1EA: ;
    (void)0; /* test esi, esi - flags set for next jcc */
    MEM8(0x8493C0) = 0;
    if (TEST_Z(esi, esi)) goto loc_0012B212; /* je: equal / zero */

loc_0012B1F5: ;
    PUSH32(esp, 0x8493BC);
    edi = 0x1C0;
    eax = esi;
    ecx = 0x5F40C4;
    PUSH32(esp, 0); sub_0005EE70(); /* call 0x0005EE70 */

loc_0012B20B: ;
    esp = esp + 4;
    if (TEST_Z(eax, eax)) goto loc_0012B22E; /* je: equal / zero */

loc_0012B212: ;
    PUSH32(esp, 0x8493BC);
    edi = 0x1C0;
    eax = 0x5F40BC;
    ecx = 0x5F40C4;
    PUSH32(esp, 0); sub_0005EEE0(); /* call 0x0005EEE0 */

loc_0012B22B: ;
    esp = esp + 4;

loc_0012B22E: ;
    PUSH32(esp, 0);
    PUSH32(esp, 0); sub_0012B2B0(); /* call 0x0012B2B0 */

loc_0012B235: ;
    esp = esp + 4;
    (void)0; /* test esi, esi - flags set for next jcc */
    POP32(esp, edi);
    if (TEST_Z(esi, esi)) { sub_0012B256(); return; } /* je: equal / zero */

loc_0012B23D: ;
    eax = MEM32(0x7FA1F8);
    if (CMP_NE(eax, 0xB)) goto loc_0012B24C; /* jne: not equal / not zero */

loc_0012B247: ;
    g_seh_ebp = ebp; sub_0012BB50(); return; /* tail jmp 0x0012BB50 */

loc_0012B24C: ;
    if (CMP_NE(eax, 2)) { sub_0012B256(); return; } /* jne: not equal / not zero */

loc_0012B251: ;
    g_seh_ebp = ebp; sub_0012BB90(); return; /* tail jmp 0x0012BB90 */

}

/**
 * sub_0012B260
 * Original: 0x0012B260 - 0x0012B27D (29 bytes, 6 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0012B260(void)
{
    uint32_t ebp;
    int _flags = 0; /* fallback flag var */
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_0012B260: ;
    eax = MEM32(0x8493BC);
    if (TEST_Z(eax, eax)) { sub_0012B27D(); return; } /* je: equal / zero */

loc_0012B269: ;
    PUSH32(esp, 0); sub_0005F0C0(); /* call 0x0005F0C0 */

loc_0012B26E: ;
    MEM32(0x8493BC) = 0;
    g_seh_ebp = ebp; sub_0012E940(); return; /* tail jmp 0x0012E940 */

}

/**
 * sub_0012B280
 * Original: 0x0012B280 - 0x0012B29D (29 bytes, 8 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0012B280(void)
{
    int _flags = 0; /* fallback flag var */

loc_0012B280: ;
    eax = MEM32(0x8470DC);
    ecx = MEM32(eax + 4);
    SET_LO8(eax, MEM8(ecx + 0x8C2));
    (void)0; /* test LO8(eax), LO8(eax) - flags set for next jcc */
    eax = MEM32(0x8493BC);
    if (TEST_Z(LO8(eax), LO8(eax))) { sub_0012B29D(); return; } /* je: equal / zero */

loc_0012B297: ;
    eax = eax + 0x134;
    esp += 4; return; /* ret */

}

/**
 * sub_0012B2B0
 * Original: 0x0012B2B0 - 0x0012B321 (113 bytes, 31 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0012B2B0(void)
{
    uint32_t ebp;
    int _flags = 0; /* fallback flag var */
    float xmm0, xmm1;
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_0012B2B0: ;
    eax = MEM32(0x8470DC);
    ecx = MEM32(eax + 4);
    SET_LO8(eax, MEM8(ecx + 0x8C2));
    esp = esp - 0x810;
    PUSH32(esp, ebx);
    PUSH32(esp, ebp);
    ebp = MEM32(0x8493BC);
    ebx = 0; /* xor self */
    (void)0; /* cmp LO8(eax), LO8(ebx) - flags set for next jcc */
    PUSH32(esp, edi);
    ecx = ebp + 0x10C;
    if (CMP_NE(LO8(eax), LO8(ebx))) goto loc_0012B2DB; /* jne: not equal / not zero */

loc_0012B2D9: ;
    ecx = ebp;

loc_0012B2DB: ;
    (void)0; /* cmp MEM8(ecx), LO8(ebx) - flags set for next jcc */
    xmm1 = MEMF(ecx + 4); /* movss */
    edi = ZX8(MEM8(ecx + 0xF));
    edx = ZX8(MEM8(ecx + 0xD));
    PUSH32(esp, esi);
    esi = ZX8(MEM8(ecx + 0xE));
    if (CMP_EQ(MEM8(ecx), LO8(ebx))) { sub_0012B321(); return; } /* je: equal / zero */

loc_0012B2F1: ;
    xmm0 = MEMF(ecx + 8); /* movss */
    /* ucomiss xmm1, xmm0 - sets EFLAGS */
    /* lahf - load AH from flags (used in FPU compare idiom) */
    if (1 /* jp after test - parity */) goto loc_0012B30A; /* jp: parity */

loc_0012B2FF: ;
    xmm0 = xmm1; /* movaps */
    xmm0 = xmm0 + MEMF(0x648D2C); /* addss */

loc_0012B30A: ;
    MEMF(0x771CE4) = xmm0; /* movss */
    xmm0 = MEMF(0x648D14); /* movss */
    xmm0 = xmm0 - MEMF(ecx + 0x10); /* subss */
    g_seh_ebp = ebp; sub_0012B348(); return; /* tail jmp 0x0012B348 */

}

/**
 * sub_0012B860
 * Original: 0x0012B860 - 0x0012BA07 (423 bytes, 107 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0012B860(void)
{
    int _flags = 0; /* fallback flag var */
    float xmm0, xmm1;

loc_0012B860: ;
    eax = MEM32(0x8493BC);
    SET_LO8(ecx, MEM8(eax + 0x28));
    esp = esp - 0x30;
    if (TEST_Z(LO8(ecx), LO8(ecx))) goto loc_0012B9A3; /* je: equal / zero */

loc_0012B873: ;
    ecx = MEM32(eax + 0x2C);
    xmm0 = MEMF(0x648CEC); /* movss */
    edx = ecx;
    edx = edx >> 0x18;
    xmm1 = (float)(int32_t)edx; /* cvtsi2ss */
    edx = ecx;
    edx = edx >> 0x10;
    edx = ZX8(LO8(edx));
    xmm1 = xmm1 * xmm0; /* mulss */
    MEMF(esp) = xmm1; /* movss */
    xmm1 = (float)(int32_t)edx; /* cvtsi2ss */
    edx = MEM32(esp);
    ecx = ecx >> 8;
    xmm1 = xmm1 * xmm0; /* mulss */
    MEMF(esp + 4) = xmm1; /* movss */
    ecx = ZX8(LO8(ecx));
    MEM32(esp + 0x24) = edx;
    xmm1 = (float)(int32_t)ecx; /* cvtsi2ss */
    ecx = MEM32(esp + 4);
    xmm1 = xmm1 * xmm0; /* mulss */
    MEMF(esp + 8) = xmm1; /* movss */
    edx = MEM32(esp + 8);
    MEM32(esp + 0x2C) = edx;
    MEM32(esp + 0x28) = ecx;
    ecx = MEM32(eax + 0x34);
    edx = ecx;
    edx = edx >> 0x18;
    xmm1 = (float)(int32_t)edx; /* cvtsi2ss */
    edx = ecx;
    edx = edx >> 0x10;
    edx = ZX8(LO8(edx));
    xmm1 = xmm1 * xmm0; /* mulss */
    MEMF(esp) = xmm1; /* movss */
    ecx = ecx >> 8;
    xmm1 = (float)(int32_t)edx; /* cvtsi2ss */
    edx = MEM32(esp);
    xmm1 = xmm1 * xmm0; /* mulss */
    ecx = ZX8(LO8(ecx));
    MEMF(esp + 4) = xmm1; /* movss */
    xmm1 = (float)(int32_t)ecx; /* cvtsi2ss */
    ecx = MEM32(esp + 4);
    xmm1 = xmm1 * xmm0; /* mulss */
    MEM32(esp + 0x18) = edx;
    MEMF(esp + 8) = xmm1; /* movss */
    edx = MEM32(esp + 8);
    MEM32(esp + 0x1C) = ecx;
    ecx = MEM32(eax + 0x30);
    MEM32(esp + 0x20) = edx;
    edx = ecx;
    edx = edx >> 0x18;
    xmm1 = (float)(int32_t)edx; /* cvtsi2ss */
    edx = ecx;
    edx = edx >> 0x10;
    xmm1 = xmm1 * xmm0; /* mulss */
    edx = ZX8(LO8(edx));
    ecx = ecx >> 8;
    MEMF(esp) = xmm1; /* movss */
    ecx = ZX8(LO8(ecx));
    xmm1 = (float)(int32_t)edx; /* cvtsi2ss */
    edx = MEM32(esp);
    xmm1 = xmm1 * xmm0; /* mulss */
    MEMF(esp + 4) = xmm1; /* movss */
    xmm1 = (float)(int32_t)ecx; /* cvtsi2ss */
    ecx = MEM32(esp + 4);
    PUSH32(esp, ebx);
    SET_LO8(ebx, MEM8(eax + 0x29));
    xmm1 = xmm1 * xmm0; /* mulss */
    xmm0 = MEMF(eax + 0x38); /* movss */
    MEM32(esp + 0x10) = edx;
    MEMF(esp + 0xC) = xmm1; /* movss */
    edx = MEM32(esp + 0xC);
    MEM32(esp + 0x14) = ecx;
    ecx = esp + 0x10;
    PUSH32(esp, ecx);
    MEM32(esp + 0x1C) = edx;
    edx = esp + 0x20;
    (void)0; /* test LO8(ebx), LO8(ebx) - flags set for next jcc */
    PUSH32(esp, edx);
    ecx = esp + 0x30;
    SET_LO8(ebx, (TEST_NZ(LO8(ebx), LO8(ebx))) ? 1 : 0); /* setne */
    PUSH32(esp, ecx);
    PUSH32(esp, 0); sub_0012D410(); /* call 0x0012D410 */

loc_0012B99F: ;
    esp = esp + 0xC;
    POP32(esp, ebx);

loc_0012B9A3: ;
    xmm0 = 0.0f; /* xorps self = zero */
    xmm1 = MEMF(0x648D10); /* movss */
    MEMF(esp) = xmm0; /* movss */
    edx = MEM32(esp);
    MEMF(esp + 4) = xmm0; /* movss */
    eax = MEM32(esp + 4);
    MEMF(esp + 8) = xmm0; /* movss */
    xmm0 = MEMF(0x648D14); /* movss */
    ecx = MEM32(esp + 8);
    MEMF(0x774860) = xmm0; /* movss */
    MEMF(0x774864) = xmm0; /* movss */
    MEMF(0x774868) = xmm1; /* movss */
    MEMF(0x77486C) = xmm0; /* movss */
    MEM32(0x774448) = edx;
    MEM32(0x77444C) = eax;
    MEM32(0x774450) = ecx;
    esp = esp + 0x30;
    esp += 4; return; /* ret */

}

/**
 * sub_0012BA10
 * Original: 0x0012BA10 - 0x0012BA87 (119 bytes, 34 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0012BA10(void)
{
    float xmm0, xmm1;

loc_0012BA10: ;
    esp = esp - 0xC;
    xmm0 = MEMF(0x648CEC); /* movss */
    PUSH32(esp, esi);
    esi = MEM32(0x8493BC);
    eax = MEM32(esi + 0x68);
    esi = esi + 0x68;
    edx = eax;
    edx = edx >> 0x18;
    xmm1 = (float)(int32_t)edx; /* cvtsi2ss */
    edx = eax;
    edx = edx >> 0x10;
    xmm1 = xmm1 * xmm0; /* mulss */
    edx = ZX8(LO8(edx));
    MEMF(esp + 4) = xmm1; /* movss */
    eax = eax >> 8;
    eax = ZX8(LO8(eax));
    xmm1 = (float)(int32_t)edx; /* cvtsi2ss */
    edx = MEM32(esp + 4);
    xmm1 = xmm1 * xmm0; /* mulss */
    MEMF(esp + 8) = xmm1; /* movss */
    MEM32(ecx) = edx;
    xmm1 = (float)(int32_t)eax; /* cvtsi2ss */
    eax = MEM32(esp + 8);
    xmm1 = xmm1 * xmm0; /* mulss */
    MEM32(ecx + 4) = eax;
    MEMF(esp + 0xC) = xmm1; /* movss */
    edx = MEM32(esp + 0xC);
    MEM32(ecx + 8) = edx;
    eax = MEM32(esi + 4);
    ecx = MEM32(esp + 0x14);
    MEM32(ecx) = eax;
    POP32(esp, esi);
    esp = esp + 0xC;
    esp += 4; return; /* ret */

}

/**
 * sub_0012BA90
 * Original: 0x0012BA90 - 0x0012BAD7 (71 bytes, 16 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0012BA90(void)
{
    double _fp_stack[8];
    int _fp_top = 0;
    #define fp_push(v) (_fp_stack[--_fp_top & 7] = (v))
    #define fp_pop() (_fp_top++)
    #define fp_popp() (fp_pop())
    #define fp_top() _fp_stack[_fp_top & 7]
    #define fp_st1() _fp_stack[(_fp_top + 1) & 7]

loc_0012BA90: ;
    eax = MEM32(0x8493BC);
    ecx = MEM32(eax + 0x194);
    MEM32(edx) = ecx;
    eax = MEM32(0x8493BC);
    fp_push(MEMF(eax + 0x198)); /* fld float */
    fp_st1() *= fp_top(); fp_pop(); /* fmul */
    PUSH32(esp, 0); sub_00471288(); /* call 0x00471288 */

loc_0012BAB3: ;
    ecx = MEM32(esp + 4);
    MEM8(ecx) = LO8(eax);
    edx = MEM32(0x8493BC);
    fp_push(MEMF(edx + 0x19C)); /* fld float */
    fp_st1() *= fp_top(); fp_pop(); /* fmul */
    PUSH32(esp, 0); sub_00471288(); /* call 0x00471288 */

loc_0012BAD0: ;
    ecx = MEM32(esp + 8);
    MEM8(ecx) = LO8(eax);
    esp += 4; return; /* ret */

    #undef fp_push
    #undef fp_pop
    #undef fp_popp
    #undef fp_top
    #undef fp_st1
}

/**
 * sub_0012BAE0
 * Original: 0x0012BAE0 - 0x0012BB12 (50 bytes, 14 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0012BAE0(void)
{
    int _flags = 0; /* fallback flag var */

loc_0012BAE0: ;
    eax = MEM32(0x8470DC);
    ecx = MEM32(eax + 4);
    SET_LO8(eax, MEM8(ecx + 0x8C2));
    (void)0; /* test LO8(eax), LO8(eax) - flags set for next jcc */
    eax = MEM32(0x8493BC);
    if (TEST_Z(LO8(eax), LO8(eax))) { sub_0012BB12(); return; } /* je: equal / zero */

loc_0012BAF7: ;
    edx = MEM32(eax + 0x140);
    ecx = MEM32(esp + 4);
    eax = eax + 0x134;
    MEM32(ecx) = edx;
    edx = MEM32(eax + 0x10);
    eax = MEM32(esp + 8);
    MEM32(eax) = edx;
    esp += 4; return; /* ret */

}

/**
 * sub_0012BB30
 * Original: 0x0012BB30 - 0x0012BB3F (15 bytes, 4 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0012BB30(void)
{
    uint32_t ebp;
    int _flags = 0; /* fallback flag var */
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_0012BB30: ;
    ecx = MEM32(0x8493B8);
    if (TEST_Z(ecx, ecx)) { sub_0012BB3F(); return; } /* je: equal / zero */

loc_0012BB3A: ;
    g_seh_ebp = ebp; sub_0012B180(); return; /* tail jmp 0x0012B180 */

}

/**
 * sub_0012BB90
 * Original: 0x0012BB90 - 0x0012BBCE (62 bytes, 22 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0012BB90(void)
{
    int _flags = 0; /* fallback flag var */

loc_0012BB90: ;
    PUSH32(esp, ecx);
    PUSH32(esp, edi);
    eax = esp + 4;
    PUSH32(esp, eax);
    edi = 0x1C0;
    eax = 0x5F3FF0;
    ecx = 0x5F40C4;
    PUSH32(esp, 0); sub_0005EE70(); /* call 0x0005EE70 */

loc_0012BBAB: ;
    esp = esp + 4;
    if (TEST_NZ(eax, eax)) goto loc_0012BBCB; /* jne: not equal / not zero */

loc_0012BBB2: ;
    eax = MEM32(esp + 4);
    PUSH32(esp, esi);
    esi = eax;
    ecx = 0xA;
    edi = 0x7740F0;
    memcpy((void*)XBOX_PTR(edi), (void*)XBOX_PTR(esi), ecx * 4);
    esi += ecx * 4; edi += ecx * 4; ecx = 0; /* rep movsd */
    PUSH32(esp, 0); sub_0005F0C0(); /* call 0x0005F0C0 */

loc_0012BBCA: ;
    POP32(esp, esi);

loc_0012BBCB: ;
    POP32(esp, edi);
    POP32(esp, ecx);
    esp += 4; return; /* ret */

}

/**
 * sub_0012BBD0
 * Original: 0x0012BBD0 - 0x0012BF49 (889 bytes, 193 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0012BBD0(void)
{
    int _flags = 0; /* fallback flag var */
    float xmm0, xmm1, xmm2, xmm3;
    double _fp_stack[8];
    int _fp_top = 0;
    #define fp_push(v) (_fp_stack[--_fp_top & 7] = (v))
    #define fp_pop() (_fp_top++)
    #define fp_popp() (fp_pop())
    #define fp_top() _fp_stack[_fp_top & 7]
    #define fp_st1() _fp_stack[(_fp_top + 1) & 7]

loc_0012BBD0: ;
    xmm0 = MEMF(esp + 4); /* movss */
    esp = esp - 0xC;
    /* comiss xmm0, MEMF(0x648CF8) - sets EFLAGS */
    PUSH32(esp, esi);
    esi = MEM32(0x8493BC);
    PUSH32(esp, edi);
    if ((xmm0 <= MEMF(0x648CF8))) goto loc_0012BE8A; /* jbe: below or equal (unsigned <=) */

loc_0012BBEE: ;
    SET_LO8(eax, MEM8(0x774118));
    (void)0; /* test LO8(eax), LO8(eax) - flags set for next jcc */
    eax = ZX8(MEM8(esi + 0xD));
    PUSH32(esp, ebx);
    if (TEST_Z(LO8(eax), LO8(eax))) goto loc_0012BCFF; /* je: equal / zero */

loc_0012BC00: ;
    ecx = ZX8(MEM8(0x774125));
    ecx = ecx - eax;
    MEM32(esp + 0xC) = ecx;
    MEM32(esp + 0x10) = eax;
    fp_push((double)SMEM32(esp + 0xC)); /* fild */
    fp_st1() *= fp_top(); fp_pop(); /* fmul */
    /* FPU: fiadd dword ptr [esp + 0x10] */
    PUSH32(esp, 0); sub_00471288(); /* call 0x00471288 */

loc_0012BC22: ;
    edx = ZX8(MEM8(0x774126));
    edi = ZX8(LO8(eax));
    eax = ZX8(MEM8(esi + 0xE));
    edx = edx - eax;
    MEM32(esp + 0x10) = edx;
    MEM32(esp + 0xC) = eax;
    fp_push((double)SMEM32(esp + 0x10)); /* fild */
    fp_st1() *= fp_top(); fp_pop(); /* fmul */
    /* FPU: fiadd dword ptr [esp + 0xc] */
    PUSH32(esp, 0); sub_00471288(); /* call 0x00471288 */

loc_0012BC4B: ;
    ecx = ZX8(MEM8(0x774127));
    ebx = ZX8(LO8(eax));
    eax = ZX8(MEM8(esi + 0xF));
    ecx = ecx - eax;
    MEM32(esp + 0x10) = ecx;
    MEM32(esp + 0xC) = eax;
    fp_push((double)SMEM32(esp + 0x10)); /* fild */
    fp_st1() *= fp_top(); fp_pop(); /* fmul */
    /* FPU: fiadd dword ptr [esp + 0xc] */
    PUSH32(esp, 0); sub_00471288(); /* call 0x00471288 */

loc_0012BC74: ;
    xmm0 = MEMF(0x774120); /* movss */
    xmm0 = xmm0 - MEMF(esi + 8); /* subss */
    xmm2 = MEMF(esp + 0x1C); /* movss */
    xmm1 = MEMF(0x77411C); /* movss */
    xmm1 = xmm1 - MEMF(esi + 4); /* subss */
    xmm0 = xmm0 * xmm2; /* mulss */
    xmm0 = xmm0 + MEMF(esi + 8); /* addss */
    xmm1 = xmm1 * xmm2; /* mulss */
    xmm1 = xmm1 + MEMF(esi + 4); /* addss */
    /* ucomiss xmm1, xmm0 - sets EFLAGS */
    /* lahf - load AH from flags (used in FPU compare idiom) */
    (void)0; /* test HI8(eax), 0x44 - flags set for next jcc */
    ecx = ZX8(LO8(eax));
    if (1 /* jp after test - parity */) goto loc_0012BCBD; /* jp: parity */

loc_0012BCB2: ;
    xmm0 = xmm1; /* movaps */
    xmm0 = xmm0 + MEMF(0x648D2C); /* addss */

loc_0012BCBD: ;
    xmm3 = MEMF(0x648D14); /* movss */
    MEMF(0x771CE4) = xmm0; /* movss */
    xmm0 = MEMF(0x774128); /* movss */
    xmm0 = xmm0 - MEMF(esi + 0x10); /* subss */
    MEMF(0x771CE8) = xmm1; /* movss */
    xmm0 = xmm0 * xmm2; /* mulss */
    xmm0 = xmm0 + MEMF(esi + 0x10); /* addss */
    xmm1 = xmm3; /* movaps */
    xmm1 = xmm1 - xmm0; /* subss */
    MEMF(0x750300) = xmm1; /* movss */
    goto loc_0012BDCB;

loc_0012BCFF: ;
    edx = ZX8(MEM8(0x774125));
    edx = edx - eax;
    MEM32(esp + 0x10) = edx;
    MEM32(esp + 0xC) = eax;
    fp_push((double)SMEM32(esp + 0x10)); /* fild */
    fp_st1() *= fp_top(); fp_pop(); /* fmul */
    /* FPU: fiadd dword ptr [esp + 0xc] */
    PUSH32(esp, 0); sub_00471288(); /* call 0x00471288 */

loc_0012BD21: ;
    ecx = ZX8(MEM8(0x774126));
    edi = ZX8(LO8(eax));
    eax = ZX8(MEM8(esi + 0xE));
    ecx = ecx - eax;
    MEM32(esp + 0x10) = ecx;
    MEM32(esp + 0xC) = eax;
    fp_push((double)SMEM32(esp + 0x10)); /* fild */
    fp_st1() *= fp_top(); fp_pop(); /* fmul */
    /* FPU: fiadd dword ptr [esp + 0xc] */
    PUSH32(esp, 0); sub_00471288(); /* call 0x00471288 */

loc_0012BD4A: ;
    edx = ZX8(MEM8(0x774127));
    ebx = ZX8(LO8(eax));
    eax = ZX8(MEM8(esi + 0xF));
    edx = edx - eax;
    MEM32(esp + 0x10) = edx;
    MEM32(esp + 0xC) = eax;
    fp_push((double)SMEM32(esp + 0x10)); /* fild */
    fp_st1() *= fp_top(); fp_pop(); /* fmul */
    /* FPU: fiadd dword ptr [esp + 0xc] */
    PUSH32(esp, 0); sub_00471288(); /* call 0x00471288 */

loc_0012BD73: ;
    xmm0 = MEMF(0x77411C); /* movss */
    xmm0 = xmm0 - MEMF(esi + 4); /* subss */
    xmm0 = xmm0 * MEMF(esp + 0x1C); /* mulss */
    xmm1 = 0.0f; /* xorps self = zero */
    xmm0 = xmm0 + MEMF(esi + 4); /* addss */
    /* ucomiss xmm0, xmm1 - sets EFLAGS */
    /* lahf - load AH from flags (used in FPU compare idiom) */
    (void)0; /* test HI8(eax), 0x44 - flags set for next jcc */
    ecx = ZX8(LO8(eax));
    if (1 /* jp after test - parity */) goto loc_0012BDA5; /* jp: parity */

loc_0012BD9A: ;
    xmm1 = xmm0; /* movaps */
    xmm1 = xmm1 + MEMF(0x648D2C); /* addss */

loc_0012BDA5: ;
    xmm3 = MEMF(0x648D14); /* movss */
    xmm2 = MEMF(esp + 0x1C); /* movss */
    MEMF(0x771CE8) = xmm0; /* movss */
    MEMF(0x771CE4) = xmm1; /* movss */
    MEMF(0x750300) = xmm3; /* movss */

loc_0012BDCB: ;
    SET_LO8(eax, MEM8(esi + 0x14));
    (void)0; /* test LO8(eax), LO8(eax) - flags set for next jcc */
    MEM32(0x771CDC) = ebx;
    MEM32(0x771CE0) = ecx;
    MEM32(0x771CD8) = edi;
    POP32(esp, ebx);
    if (TEST_NZ(LO8(eax), LO8(eax))) goto loc_0012BDF2; /* jne: not equal / not zero */

loc_0012BDE5: ;
    SET_LO8(eax, MEM8(0x77412C));
    if (TEST_Z(LO8(eax), LO8(eax))) { sub_0012BF49(); return; } /* je: equal / zero */

loc_0012BDF2: ;
    xmm0 = MEMF(0x774130); /* movss */
    xmm0 = xmm0 - MEMF(esi + 0x18); /* subss */
    xmm1 = MEMF(0x77413C); /* movss */
    xmm1 = xmm1 - MEMF(esi + 0x24); /* subss */
    xmm0 = xmm0 * xmm2; /* mulss */
    xmm0 = xmm0 + MEMF(esi + 0x18); /* addss */
    MEMF(esp + 0xC) = xmm0; /* movss */
    xmm0 = MEMF(0x774134); /* movss */
    xmm0 = xmm0 - MEMF(esi + 0x1C); /* subss */
    eax = MEM32(esp + 0xC);
    xmm0 = xmm0 * xmm2; /* mulss */
    xmm0 = xmm0 + MEMF(esi + 0x1C); /* addss */
    MEMF(esp + 0x10) = xmm0; /* movss */
    xmm0 = MEMF(0x774138); /* movss */
    xmm0 = xmm0 - MEMF(esi + 0x20); /* subss */
    ecx = MEM32(esp + 0x10);
    xmm1 = xmm1 * xmm2; /* mulss */
    xmm1 = xmm1 + MEMF(esi + 0x24); /* addss */
    xmm0 = xmm0 * xmm2; /* mulss */
    xmm0 = xmm0 + MEMF(esi + 0x20); /* addss */
    POP32(esp, edi);
    xmm3 = xmm3 / xmm1; /* divss */
    MEM8(0x85D070) = 1;
    MEM32(0x85D060) = eax;
    MEM32(0x85D064) = ecx;
    MEMF(0x85D068) = xmm0; /* movss */
    MEMF(0x85D06C) = xmm3; /* movss */
    POP32(esp, esi);
    esp = esp + 0xC;
    esp += 4; return; /* ret */

loc_0012BE8A: ;
    xmm0 = MEMF(esi + 8); /* movss */
    xmm1 = MEMF(esi + 4); /* movss */
    ecx = ZX8(MEM8(esi + 0xD));
    edx = ZX8(MEM8(esi + 0xE));
    edi = ZX8(MEM8(esi + 0xF));
    /* ucomiss xmm1, xmm0 - sets EFLAGS */
    /* lahf - load AH from flags (used in FPU compare idiom) */
    if (1 /* jp after test - parity */) goto loc_0012BEB4; /* jp: parity */

loc_0012BEA9: ;
    xmm0 = xmm1; /* movaps */
    xmm0 = xmm0 + MEMF(0x648D2C); /* addss */

loc_0012BEB4: ;
    MEMF(0x771CE8) = xmm1; /* movss */
    MEMF(0x771CE4) = xmm0; /* movss */
    xmm0 = MEMF(0x648D14); /* movss */
    xmm1 = xmm0; /* movaps */
    xmm1 = xmm1 - MEMF(esi + 0x10); /* subss */
    MEMF(0x750300) = xmm1; /* movss */
    SET_LO8(eax, MEM8(esi + 0x14));
    (void)0; /* test LO8(eax), LO8(eax) - flags set for next jcc */
    MEM32(0x771CE0) = edi;
    MEM32(0x771CDC) = edx;
    MEM32(0x771CD8) = ecx;
    if (TEST_Z(LO8(eax), LO8(eax))) { sub_0012BF49(); return; } /* je: equal / zero */

loc_0012BEF5: ;
    xmm1 = MEMF(esi + 0x18); /* movss */
    xmm2 = MEMF(esi + 0x24); /* movss */
    MEMF(esp + 0xC) = xmm1; /* movss */
    xmm1 = MEMF(esi + 0x1C); /* movss */
    edx = MEM32(esp + 0xC);
    MEMF(esp + 0x10) = xmm1; /* movss */
    xmm1 = MEMF(esi + 0x20); /* movss */
    eax = MEM32(esp + 0x10);
    POP32(esp, edi);
    xmm0 = xmm0 / xmm2; /* divss */
    MEM8(0x85D070) = 1;
    MEM32(0x85D060) = edx;
    MEM32(0x85D064) = eax;
    MEMF(0x85D068) = xmm1; /* movss */
    MEMF(0x85D06C) = xmm0; /* movss */
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
 * sub_0012BF60
 * Original: 0x0012BF60 - 0x0012C2D9 (889 bytes, 193 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0012BF60(void)
{
    int _flags = 0; /* fallback flag var */
    float xmm0, xmm1, xmm2, xmm3;
    double _fp_stack[8];
    int _fp_top = 0;
    #define fp_push(v) (_fp_stack[--_fp_top & 7] = (v))
    #define fp_pop() (_fp_top++)
    #define fp_popp() (fp_pop())
    #define fp_top() _fp_stack[_fp_top & 7]
    #define fp_st1() _fp_stack[(_fp_top + 1) & 7]

loc_0012BF60: ;
    xmm0 = MEMF(esp + 4); /* movss */
    esp = esp - 0xC;
    /* comiss xmm0, MEMF(0x648CF8) - sets EFLAGS */
    PUSH32(esp, esi);
    esi = MEM32(0x8493BC);
    PUSH32(esp, edi);
    if ((xmm0 <= MEMF(0x648CF8))) goto loc_0012C21A; /* jbe: below or equal (unsigned <=) */

loc_0012BF7E: ;
    SET_LO8(eax, MEM8(0x7740F0));
    (void)0; /* test LO8(eax), LO8(eax) - flags set for next jcc */
    eax = ZX8(MEM8(esi + 0xD));
    PUSH32(esp, ebx);
    if (TEST_Z(LO8(eax), LO8(eax))) goto loc_0012C08F; /* je: equal / zero */

loc_0012BF90: ;
    ecx = ZX8(MEM8(0x7740FD));
    ecx = ecx - eax;
    MEM32(esp + 0xC) = ecx;
    MEM32(esp + 0x10) = eax;
    fp_push((double)SMEM32(esp + 0xC)); /* fild */
    fp_st1() *= fp_top(); fp_pop(); /* fmul */
    /* FPU: fiadd dword ptr [esp + 0x10] */
    PUSH32(esp, 0); sub_00471288(); /* call 0x00471288 */

loc_0012BFB2: ;
    edx = ZX8(MEM8(0x7740FE));
    edi = ZX8(LO8(eax));
    eax = ZX8(MEM8(esi + 0xE));
    edx = edx - eax;
    MEM32(esp + 0x10) = edx;
    MEM32(esp + 0xC) = eax;
    fp_push((double)SMEM32(esp + 0x10)); /* fild */
    fp_st1() *= fp_top(); fp_pop(); /* fmul */
    /* FPU: fiadd dword ptr [esp + 0xc] */
    PUSH32(esp, 0); sub_00471288(); /* call 0x00471288 */

loc_0012BFDB: ;
    ecx = ZX8(MEM8(0x7740FF));
    ebx = ZX8(LO8(eax));
    eax = ZX8(MEM8(esi + 0xF));
    ecx = ecx - eax;
    MEM32(esp + 0x10) = ecx;
    MEM32(esp + 0xC) = eax;
    fp_push((double)SMEM32(esp + 0x10)); /* fild */
    fp_st1() *= fp_top(); fp_pop(); /* fmul */
    /* FPU: fiadd dword ptr [esp + 0xc] */
    PUSH32(esp, 0); sub_00471288(); /* call 0x00471288 */

loc_0012C004: ;
    xmm0 = MEMF(0x7740F8); /* movss */
    xmm0 = xmm0 - MEMF(esi + 8); /* subss */
    xmm2 = MEMF(esp + 0x1C); /* movss */
    xmm1 = MEMF(0x7740F4); /* movss */
    xmm1 = xmm1 - MEMF(esi + 4); /* subss */
    xmm0 = xmm0 * xmm2; /* mulss */
    xmm0 = xmm0 + MEMF(esi + 8); /* addss */
    xmm1 = xmm1 * xmm2; /* mulss */
    xmm1 = xmm1 + MEMF(esi + 4); /* addss */
    /* ucomiss xmm1, xmm0 - sets EFLAGS */
    /* lahf - load AH from flags (used in FPU compare idiom) */
    (void)0; /* test HI8(eax), 0x44 - flags set for next jcc */
    ecx = ZX8(LO8(eax));
    if (1 /* jp after test - parity */) goto loc_0012C04D; /* jp: parity */

loc_0012C042: ;
    xmm0 = xmm1; /* movaps */
    xmm0 = xmm0 + MEMF(0x648D2C); /* addss */

loc_0012C04D: ;
    xmm3 = MEMF(0x648D14); /* movss */
    MEMF(0x771CE4) = xmm0; /* movss */
    xmm0 = MEMF(0x774100); /* movss */
    xmm0 = xmm0 - MEMF(esi + 0x10); /* subss */
    MEMF(0x771CE8) = xmm1; /* movss */
    xmm0 = xmm0 * xmm2; /* mulss */
    xmm0 = xmm0 + MEMF(esi + 0x10); /* addss */
    xmm1 = xmm3; /* movaps */
    xmm1 = xmm1 - xmm0; /* subss */
    MEMF(0x750300) = xmm1; /* movss */
    goto loc_0012C15B;

loc_0012C08F: ;
    edx = ZX8(MEM8(0x7740FD));
    edx = edx - eax;
    MEM32(esp + 0x10) = edx;
    MEM32(esp + 0xC) = eax;
    fp_push((double)SMEM32(esp + 0x10)); /* fild */
    fp_st1() *= fp_top(); fp_pop(); /* fmul */
    /* FPU: fiadd dword ptr [esp + 0xc] */
    PUSH32(esp, 0); sub_00471288(); /* call 0x00471288 */

loc_0012C0B1: ;
    ecx = ZX8(MEM8(0x7740FE));
    edi = ZX8(LO8(eax));
    eax = ZX8(MEM8(esi + 0xE));
    ecx = ecx - eax;
    MEM32(esp + 0x10) = ecx;
    MEM32(esp + 0xC) = eax;
    fp_push((double)SMEM32(esp + 0x10)); /* fild */
    fp_st1() *= fp_top(); fp_pop(); /* fmul */
    /* FPU: fiadd dword ptr [esp + 0xc] */
    PUSH32(esp, 0); sub_00471288(); /* call 0x00471288 */

loc_0012C0DA: ;
    edx = ZX8(MEM8(0x7740FF));
    ebx = ZX8(LO8(eax));
    eax = ZX8(MEM8(esi + 0xF));
    edx = edx - eax;
    MEM32(esp + 0x10) = edx;
    MEM32(esp + 0xC) = eax;
    fp_push((double)SMEM32(esp + 0x10)); /* fild */
    fp_st1() *= fp_top(); fp_pop(); /* fmul */
    /* FPU: fiadd dword ptr [esp + 0xc] */
    PUSH32(esp, 0); sub_00471288(); /* call 0x00471288 */

loc_0012C103: ;
    xmm0 = MEMF(0x7740F4); /* movss */
    xmm0 = xmm0 - MEMF(esi + 4); /* subss */
    xmm0 = xmm0 * MEMF(esp + 0x1C); /* mulss */
    xmm1 = 0.0f; /* xorps self = zero */
    xmm0 = xmm0 + MEMF(esi + 4); /* addss */
    /* ucomiss xmm0, xmm1 - sets EFLAGS */
    /* lahf - load AH from flags (used in FPU compare idiom) */
    (void)0; /* test HI8(eax), 0x44 - flags set for next jcc */
    ecx = ZX8(LO8(eax));
    if (1 /* jp after test - parity */) goto loc_0012C135; /* jp: parity */

loc_0012C12A: ;
    xmm1 = xmm0; /* movaps */
    xmm1 = xmm1 + MEMF(0x648D2C); /* addss */

loc_0012C135: ;
    xmm3 = MEMF(0x648D14); /* movss */
    xmm2 = MEMF(esp + 0x1C); /* movss */
    MEMF(0x771CE8) = xmm0; /* movss */
    MEMF(0x771CE4) = xmm1; /* movss */
    MEMF(0x750300) = xmm3; /* movss */

loc_0012C15B: ;
    SET_LO8(eax, MEM8(esi + 0x14));
    (void)0; /* test LO8(eax), LO8(eax) - flags set for next jcc */
    MEM32(0x771CDC) = ebx;
    MEM32(0x771CE0) = ecx;
    MEM32(0x771CD8) = edi;
    POP32(esp, ebx);
    if (TEST_NZ(LO8(eax), LO8(eax))) goto loc_0012C182; /* jne: not equal / not zero */

loc_0012C175: ;
    SET_LO8(eax, MEM8(0x774104));
    if (TEST_Z(LO8(eax), LO8(eax))) { sub_0012C2D9(); return; } /* je: equal / zero */

loc_0012C182: ;
    xmm0 = MEMF(0x774108); /* movss */
    xmm0 = xmm0 - MEMF(esi + 0x18); /* subss */
    xmm1 = MEMF(0x774114); /* movss */
    xmm1 = xmm1 - MEMF(esi + 0x24); /* subss */
    xmm0 = xmm0 * xmm2; /* mulss */
    xmm0 = xmm0 + MEMF(esi + 0x18); /* addss */
    MEMF(esp + 0xC) = xmm0; /* movss */
    xmm0 = MEMF(0x77410C); /* movss */
    xmm0 = xmm0 - MEMF(esi + 0x1C); /* subss */
    eax = MEM32(esp + 0xC);
    xmm0 = xmm0 * xmm2; /* mulss */
    xmm0 = xmm0 + MEMF(esi + 0x1C); /* addss */
    MEMF(esp + 0x10) = xmm0; /* movss */
    xmm0 = MEMF(0x774110); /* movss */
    xmm0 = xmm0 - MEMF(esi + 0x20); /* subss */
    ecx = MEM32(esp + 0x10);
    xmm1 = xmm1 * xmm2; /* mulss */
    xmm1 = xmm1 + MEMF(esi + 0x24); /* addss */
    xmm0 = xmm0 * xmm2; /* mulss */
    xmm0 = xmm0 + MEMF(esi + 0x20); /* addss */
    POP32(esp, edi);
    xmm3 = xmm3 / xmm1; /* divss */
    MEM8(0x85D070) = 1;
    MEM32(0x85D060) = eax;
    MEM32(0x85D064) = ecx;
    MEMF(0x85D068) = xmm0; /* movss */
    MEMF(0x85D06C) = xmm3; /* movss */
    POP32(esp, esi);
    esp = esp + 0xC;
    esp += 4; return; /* ret */

loc_0012C21A: ;
    xmm0 = MEMF(esi + 8); /* movss */
    xmm1 = MEMF(esi + 4); /* movss */
    ecx = ZX8(MEM8(esi + 0xD));
    edx = ZX8(MEM8(esi + 0xE));
    edi = ZX8(MEM8(esi + 0xF));
    /* ucomiss xmm1, xmm0 - sets EFLAGS */
    /* lahf - load AH from flags (used in FPU compare idiom) */
    if (1 /* jp after test - parity */) goto loc_0012C244; /* jp: parity */

loc_0012C239: ;
    xmm0 = xmm1; /* movaps */
    xmm0 = xmm0 + MEMF(0x648D2C); /* addss */

loc_0012C244: ;
    MEMF(0x771CE8) = xmm1; /* movss */
    MEMF(0x771CE4) = xmm0; /* movss */
    xmm0 = MEMF(0x648D14); /* movss */
    xmm1 = xmm0; /* movaps */
    xmm1 = xmm1 - MEMF(esi + 0x10); /* subss */
    MEMF(0x750300) = xmm1; /* movss */
    SET_LO8(eax, MEM8(esi + 0x14));
    (void)0; /* test LO8(eax), LO8(eax) - flags set for next jcc */
    MEM32(0x771CE0) = edi;
    MEM32(0x771CDC) = edx;
    MEM32(0x771CD8) = ecx;
    if (TEST_Z(LO8(eax), LO8(eax))) { sub_0012C2D9(); return; } /* je: equal / zero */

loc_0012C285: ;
    xmm1 = MEMF(esi + 0x18); /* movss */
    xmm2 = MEMF(esi + 0x24); /* movss */
    MEMF(esp + 0xC) = xmm1; /* movss */
    xmm1 = MEMF(esi + 0x1C); /* movss */
    edx = MEM32(esp + 0xC);
    MEMF(esp + 0x10) = xmm1; /* movss */
    xmm1 = MEMF(esi + 0x20); /* movss */
    eax = MEM32(esp + 0x10);
    POP32(esp, edi);
    xmm0 = xmm0 / xmm2; /* divss */
    MEM8(0x85D070) = 1;
    MEM32(0x85D060) = edx;
    MEM32(0x85D064) = eax;
    MEMF(0x85D068) = xmm1; /* movss */
    MEMF(0x85D06C) = xmm0; /* movss */
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
 * sub_0012C2F0
 * Original: 0x0012C2F0 - 0x0012C3F2 (258 bytes, 69 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0012C2F0(void)
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

loc_0012C2F0: ;
    esp = esp - 0x10;
    PUSH32(esp, esi);
    esi = MEM32(esp + 0x18);
    xmm4 = MEMF(esi + 0x18); /* movss */
    eax = esp + 8;
    MEM32(esp + 4) = eax;
    ecx = MEM32(esp + 0x1C);
    xmm0 = MEMF(ecx); /* movss */
    xmm0 = MEMD(ecx + 4); /* movhps */
    edx = MEM32(esp + 0x18);
    xmm1 = MEMF(edx); /* movss */
    xmm1 = MEMD(edx + 4); /* movhps */
    /* subps: xmm0 -= xmm1 (packed 4xfloat) */
    eax = MEM32(esp + 4);
    MEMF(eax) = xmm0; /* movss */
    MEMD(eax + 4) = xmm0; /* movhps */
    xmm2 = MEMF(esp + 0x10); /* movss */
    xmm3 = MEMF(esp + 0xC); /* movss */
    xmm0 = MEMF(esi + 0x14); /* movss */
    xmm1 = MEMF(esi + 0x10); /* movss */
    xmm5 = MEMF(esi + 0xC); /* movss */
    ecx = MEM32(esp + 0x1C);
    xmm0 = xmm0 * xmm2; /* mulss */
    xmm1 = xmm1 * xmm3; /* mulss */
    xmm0 = xmm0 + xmm1; /* addss */
    xmm1 = MEMF(esp + 8); /* movss */
    xmm5 = xmm5 * xmm1; /* mulss */
    xmm0 = xmm0 + xmm5; /* addss */
    xmm5 = xmm2; /* movaps */
    xmm5 = xmm5 * xmm2; /* mulss */
    xmm1 = xmm1 * xmm1; /* mulss */
    xmm2 = xmm3; /* movaps */
    xmm2 = xmm2 * xmm3; /* mulss */
    xmm3 = 0.0f; /* xorps self = zero */
    /* comiss xmm3, xmm0 - sets EFLAGS */
    xmm1 = xmm1 + xmm5; /* addss */
    xmm1 = xmm1 + xmm2; /* addss */
    xmm2 = MEMF(ecx + 0xC); /* movss */
    xmm2 = xmm2 * xmm2; /* mulss */
    MEMF(esp + 0x18) = xmm2; /* movss */
    POP32(esp, esi);
    if ((xmm3 <= xmm0)) goto loc_0012C39C; /* jbe: below or equal (unsigned <=) */

loc_0012C397: ;
    /* comiss xmm1, xmm2 - sets EFLAGS */
    if ((xmm1 > xmm2)) { sub_0012C3F2(); return; } /* ja: above (unsigned >) */

loc_0012C39C: ;
    xmm5 = xmm0; /* movaps */
    xmm5 = xmm5 * xmm0; /* mulss */
    xmm3 = xmm1; /* movaps */
    xmm3 = xmm3 - xmm5; /* subss */
    /* comiss xmm3, xmm2 - sets EFLAGS */
    MEMF(esp + 0x18) = xmm3; /* movss */
    if ((xmm3 > xmm2)) { sub_0012C3F2(); return; } /* ja: above (unsigned >) */

loc_0012C3B5: ;
    /* comiss xmm1, xmm2 - sets EFLAGS */
    fp_push(MEMF(esp + 0x14)); /* fld float */
    fp_st1() -= fp_top(); fp_pop(); /* fsub */
    fp_top() = sqrt(fp_top()); /* fsqrt */
    MEMF(esp + 0x14) = (float)fp_top(); fp_popp(); /* fstp */
    if ((xmm1 <= xmm2)) goto loc_0012C3D3; /* jbe: below or equal (unsigned <=) */

loc_0012C3C8: ;
    xmm0 = xmm0 - MEMF(esp + 0x14); /* subss */
    xmm1 = xmm0; /* movaps */
    goto loc_0012C3DD;

loc_0012C3D3: ;
    xmm1 = MEMF(esp + 0x14); /* movss */
    xmm1 = xmm1 + xmm0; /* addss */

loc_0012C3DD: ;
    /* comiss xmm4, xmm1 - sets EFLAGS */
    edx = MEM32(esp + 0x1C);
    MEMF(edx) = xmm1; /* movss */
    if ((xmm4 <= xmm1)) { sub_0012C3F2(); return; } /* jbe: below or equal (unsigned <=) */

loc_0012C3EA: ;
    SET_LO8(eax, 1);
    esp = esp + 0x10;
    esp += 16; return; /* ret 12 */

    #undef fp_push
    #undef fp_pop
    #undef fp_popp
    #undef fp_top
    #undef fp_st1
}

/**
 * sub_0012C400
 * Original: 0x0012C400 - 0x0012C4E7 (231 bytes, 59 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0012C400(void)
{
    int _flags = 0; /* fallback flag var */
    float xmm0, xmm1, xmm2, xmm3;

loc_0012C400: ;
    esp = esp - 0x2C;
    eax = esi;
    ecx = MEM32(eax);
    edx = MEM32(eax + 4);
    eax = MEM32(eax + 8);
    MEM32(esp + 0x14) = ecx;
    ecx = esi + 0xC;
    MEM32(esp + 0x18) = edx;
    edx = MEM32(ecx);
    MEM32(esp + 0x1C) = eax;
    eax = MEM32(ecx + 4);
    ecx = MEM32(ecx + 8);
    MEM32(esp + 0x20) = edx;
    MEM32(esp + 0x24) = eax;
    edx = esp + 0x14;
    eax = esp + 8;
    MEM32(esp + 0x28) = ecx;
    MEM32(esp + 4) = edx;
    MEM32(esp) = eax;
    ecx = MEM32(esp + 0x30);
    xmm0 = MEMF(ecx); /* movss */
    xmm0 = MEMD(ecx + 4); /* movhps */
    edx = MEM32(esp + 4);
    xmm1 = MEMF(edx); /* movss */
    xmm1 = MEMD(edx + 4); /* movhps */
    /* subps: xmm0 -= xmm1 (packed 4xfloat) */
    eax = MEM32(esp);
    MEMF(eax) = xmm0; /* movss */
    MEMD(eax + 4) = xmm0; /* movhps */
    xmm3 = MEMF(esp + 0x10); /* movss */
    xmm3 = xmm3 * MEMF(esp + 0x28); /* mulss */
    xmm0 = MEMF(esp + 0xC); /* movss */
    xmm0 = xmm0 * MEMF(esp + 0x24); /* mulss */
    xmm3 = xmm3 + xmm0; /* addss */
    xmm0 = MEMF(esp + 8); /* movss */
    xmm0 = xmm0 * MEMF(esp + 0x20); /* mulss */
    ecx = esp + 8;
    xmm3 = xmm3 + xmm0; /* addss */
    MEM32(esp + 0x30) = ecx;
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
    MEMF(esp + 4) = xmm1; /* movss */
    xmm0 = MEMF(esi + 0x2C); /* movss */
    xmm0 = xmm0 * MEMF(esp + 4); /* mulss */
    /* comiss xmm0, xmm3 - sets EFLAGS */
    xmm0 = 0.0f; /* xorps self = zero */
    if ((xmm0 > xmm3)) goto loc_0012C4E1; /* ja: above (unsigned >) */

loc_0012C4D9: ;
    xmm0 = MEMF(0x648D14); /* movss */

loc_0012C4E1: ;
    esp = esp + 0x2C;
    esp += 8; return; /* ret 4 */

}

/**
 * sub_0012C4F0
 * Original: 0x0012C4F0 - 0x0012C52A (58 bytes, 23 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0012C4F0(void)
{
    uint32_t ebp;
    int _flags = 0; /* fallback flag var */
    float xmm0, xmm3;
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_0012C4F0: ;
    xmm3 = 0.0f; /* xorps self = zero */
    esp = esp - 0x44;
    PUSH32(esp, ebp);
    ebp = MEM32(esp + 0x50);
    PUSH32(esp, esi);
    PUSH32(esp, edi);
    edi = MEM32(esp + 0x54);
    xmm0 = MEMF(edi + 0xC); /* movss */
    /* ucomiss xmm0, xmm3 - sets EFLAGS */
    esi = eax;
    /* lahf - load AH from flags (used in FPU compare idiom) */
    if (1 /* jp after test - parity */) { sub_0012C52A(); return; } /* jp: parity */

loc_0012C511: ;
    MEMF(ebp) = xmm3; /* movss */
    eax = MEM32(edi + 0xC);
    PUSH32(esp, edi);
    MEM32(ebx) = eax;
    PUSH32(esp, 0); sub_0012C400(); /* call 0x0012C400 */

loc_0012C521: ;
    POP32(esp, edi);
    POP32(esp, esi);
    POP32(esp, ebp);
    esp = esp + 0x44;
    esp += 12; return; /* ret 8 */

}

/**
 * sub_0012C7B0
 * Original: 0x0012C7B0 - 0x0012C805 (85 bytes, 32 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0012C7B0(void)
{
    float xmm0;
    double _fp_stack[8];
    int _fp_top = 0;
    #define fp_push(v) (_fp_stack[--_fp_top & 7] = (v))
    #define fp_pop() (_fp_top++)
    #define fp_popp() (fp_pop())
    #define fp_top() _fp_stack[_fp_top & 7]
    #define fp_st1() _fp_stack[(_fp_top + 1) & 7]

loc_0012C7B0: ;
    fp_push(MEMF(esp + 4)); /* fld float */
    PUSH32(esp, esi);
    fp_st1() *= fp_top(); fp_pop(); /* fmul */
    PUSH32(esp, edi);
    edi = MEM32(edx);
    esi = eax;
    /* fld st(0) */
    MEM32(esi) = edi;
    /* FPU: fptan  */
    edi = MEM32(edx + 4);
    MEM32(esi + 4) = edi;
    edx = MEM32(edx + 8);
    MEM32(esi + 8) = edx;
    esi = MEM32(ecx);
    edx = eax + 0xC;
    MEM32(edx) = esi;
    esi = MEM32(ecx + 4);
    MEM32(edx + 4) = esi;
    ecx = MEM32(ecx + 8);
    POP32(esp, edi);
    MEM32(edx + 8) = ecx;
    MEMF(eax + 0x18) = xmm0; /* movss */
    MEMF(eax + 0x1C) = xmm0; /* movss */
    POP32(esp, esi);
    /* fstp st(0) */
    MEMF(eax + 0x24) = (float)fp_top(); fp_popp(); /* fstp */
    /* fld st(0) */
    /* FPU: fsin  */
    MEMF(eax + 0x28) = (float)fp_top(); fp_popp(); /* fstp */
    /* FPU: fcos  */
    MEMF(eax + 0x2C) = (float)fp_top(); fp_popp(); /* fstp */
    esp += 8; return; /* ret 4 */

    #undef fp_push
    #undef fp_pop
    #undef fp_popp
    #undef fp_top
    #undef fp_st1
}

/**
 * sub_0012C810
 * Original: 0x0012C810 - 0x0012C9C4 (436 bytes, 102 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0012C810(void)
{
    uint32_t ebp;
    float xmm0, xmm1, xmm2, xmm3, xmm4, xmm5;

loc_0012C810: ;
    PUSH32(esp, ebp);
    ebp = esp;
    esp = esp & 0xFFFFFFF0u;
    esp = esp - 0x30;
    xmm2 = MEMF(ecx + 4); /* movss */
    xmm0 = xmm1; /* movaps */
    xmm0 = xmm0 * MEMF(0x649188); /* mulss */
    MEMF(esp) = xmm0; /* movss */
    xmm0 = xmm1; /* movaps */
    xmm0 = xmm0 * MEMF(0x649184); /* mulss */
    xmm2 = xmm2 * xmm0; /* mulss */
    MEMF(esp + 4) = xmm2; /* movss */
    xmm2 = MEMF(ecx + 8); /* movss */
    xmm2 = xmm2 * xmm0; /* mulss */
    MEMF(esp + 8) = xmm2; /* movss */
    xmm2 = MEMF(ecx); /* movss */
    xmm2 = xmm2 * xmm0; /* mulss */
    MEMF(esp + 0xC) = xmm2; /* movss */
    xmm2 = MEMF(ecx + 4); /* movss */
    xmm2 = xmm2 * MEMF(ecx); /* mulss */
    xmm5 = MEMF(eax); /* movaps */
    xmm0 = xmm1; /* movaps */
    xmm0 = xmm0 * MEMF(0x649180); /* mulss */
    xmm2 = xmm2 * xmm0; /* mulss */
    MEMF(esp + 0x10) = xmm2; /* movss */
    xmm2 = MEMF(ecx + 8); /* movss */
    xmm2 = xmm2 * MEMF(ecx + 4); /* mulss */
    xmm2 = xmm2 * xmm0; /* mulss */
    MEMF(esp + 0x14) = xmm2; /* movss */
    xmm2 = MEMF(ecx + 8); /* movss */
    xmm2 = xmm2 * MEMF(ecx); /* mulss */
    xmm2 = xmm2 * xmm0; /* mulss */
    xmm0 = MEMF(ecx + 8); /* movss */
    MEMF(esp + 0x1C) = xmm2; /* movss */
    xmm2 = xmm0; /* movaps */
    xmm2 = xmm2 * xmm0; /* mulss */
    xmm2 = xmm2 * MEMF(0x648D20); /* mulss */
    xmm2 = xmm2 - MEMF(0x648D14); /* subss */
    xmm0 = xmm1; /* movaps */
    xmm0 = xmm0 * MEMF(0x64917C); /* mulss */
    xmm1 = xmm1 * MEMF(0x649178); /* mulss */
    xmm2 = xmm2 * xmm0; /* mulss */
    xmm0 = MEMF(ecx); /* movss */
    MEMF(esp + 0x18) = xmm2; /* movss */
    xmm2 = MEMF(ecx + 4); /* movss */
    xmm3 = xmm2; /* movaps */
    xmm3 = xmm3 * xmm2; /* mulss */
    xmm0 = xmm0 * xmm0; /* mulss */
    xmm0 = xmm0 - xmm3; /* subss */
    xmm0 = xmm0 * xmm1; /* mulss */
    xmm1 = MEMF(edx); /* movss */
    /* shufps xmm1, xmm1, 0 */
    xmm4 = xmm1; /* movaps */
    ecx = esp;
    MEMF(esp + 0x20) = xmm0; /* movss */
    xmm2 = MEMF(ecx); /* movaps */
    /* mulps: xmm4 *= xmm2 (packed 4xfloat) */
    /* addps: xmm5 += xmm4 (packed 4xfloat) */
    MEMF(eax) = xmm5; /* movaps */
    xmm4 = MEMF(eax + 0x10); /* movaps */
    ecx = esp + 0x10;
    xmm3 = MEMF(ecx); /* movaps */
    /* mulps: xmm1 *= xmm3 (packed 4xfloat) */
    /* addps: xmm4 += xmm1 (packed 4xfloat) */
    MEMF(eax + 0x10) = xmm4; /* movaps */
    xmm4 = MEMF(edx); /* movss */
    xmm1 = MEMF(edx + 4); /* movss */
    xmm4 = xmm4 * xmm0; /* mulss */
    xmm4 = xmm4 + MEMF(eax + 0x20); /* addss */
    MEMF(eax + 0x20) = xmm4; /* movss */
    xmm5 = MEMF(eax + 0x30); /* movaps */
    /* shufps xmm1, xmm1, 0 */
    xmm4 = xmm1; /* movaps */
    /* mulps: xmm4 *= xmm2 (packed 4xfloat) */
    /* addps: xmm5 += xmm4 (packed 4xfloat) */
    MEMF(eax + 0x30) = xmm5; /* movaps */
    xmm4 = MEMF(eax + 0x40); /* movaps */
    /* mulps: xmm1 *= xmm3 (packed 4xfloat) */
    /* addps: xmm4 += xmm1 (packed 4xfloat) */
    MEMF(eax + 0x40) = xmm4; /* movaps */
    xmm4 = MEMF(edx + 4); /* movss */
    xmm1 = MEMF(edx + 8); /* movss */
    xmm4 = xmm4 * xmm0; /* mulss */
    xmm4 = xmm4 + MEMF(eax + 0x50); /* addss */
    /* shufps xmm1, xmm1, 0 */
    MEMF(eax + 0x50) = xmm4; /* movss */
    xmm4 = xmm1; /* movaps */
    /* mulps: xmm4 *= xmm2 (packed 4xfloat) */
    xmm2 = MEMF(eax + 0x60); /* movaps */
    /* addps: xmm2 += xmm4 (packed 4xfloat) */
    MEMF(eax + 0x60) = xmm2; /* movaps */
    xmm2 = MEMF(eax + 0x70); /* movaps */
    /* mulps: xmm1 *= xmm3 (packed 4xfloat) */
    /* addps: xmm2 += xmm1 (packed 4xfloat) */
    MEMF(eax + 0x70) = xmm2; /* movaps */
    xmm1 = MEMF(edx + 8); /* movss */
    xmm1 = xmm1 * xmm0; /* mulss */
    xmm1 = xmm1 + MEMF(eax + 0x80); /* addss */
    MEMF(eax + 0x80) = xmm1; /* movss */
    esp = ebp;
    POP32(esp, ebp);
    esp += 4; return; /* ret */

}

/**
 * sub_0012C9D0
 * Original: 0x0012C9D0 - 0x0012CDAE (990 bytes, 215 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0012C9D0(void)
{
    int _flags = 0; /* fallback flag var */
    float xmm0, xmm1, xmm2, xmm3, xmm4, xmm5, xmm6, xmm7;

loc_0012C9D0: ;
    xmm1 = MEMF(0x64918C); /* movss */
    /* comiss xmm1, MEMF(edx) - sets EFLAGS */
    if ((xmm1 <= MEMF(edx))) goto loc_0012C9E1; /* jbe: below or equal (unsigned <=) */

loc_0012C9DD: ;
    xmm1 = MEMF(edx); /* movss */

loc_0012C9E1: ;
    xmm6 = MEMF(0x649188); /* movss */
    xmm2 = xmm1; /* movaps */
    xmm2 = xmm2 * xmm0; /* mulss */
    xmm2 = xmm2 * xmm6; /* mulss */
    xmm2 = xmm2 + MEMF(eax); /* addss */
    MEMF(eax) = xmm2; /* movss */
    xmm3 = MEMF(ecx + 4); /* movss */
    xmm2 = MEMF(0x649184); /* movss */
    xmm3 = xmm3 * xmm2; /* mulss */
    xmm3 = xmm3 * xmm1; /* mulss */
    xmm3 = xmm3 * xmm0; /* mulss */
    xmm3 = xmm3 + MEMF(eax + 4); /* addss */
    MEMF(eax + 4) = xmm3; /* movss */
    xmm3 = MEMF(ecx + 8); /* movss */
    xmm3 = xmm3 * xmm2; /* mulss */
    xmm3 = xmm3 * xmm1; /* mulss */
    xmm3 = xmm3 * xmm0; /* mulss */
    xmm3 = xmm3 + MEMF(eax + 8); /* addss */
    MEMF(eax + 8) = xmm3; /* movss */
    xmm3 = MEMF(ecx); /* movss */
    xmm3 = xmm3 * xmm2; /* mulss */
    xmm3 = xmm3 * xmm1; /* mulss */
    xmm3 = xmm3 * xmm0; /* mulss */
    xmm3 = xmm3 + MEMF(eax + 0xC); /* addss */
    MEMF(eax + 0xC) = xmm3; /* movss */
    xmm4 = MEMF(ecx + 4); /* movss */
    xmm4 = xmm4 * MEMF(ecx); /* mulss */
    xmm3 = MEMF(0x649180); /* movss */
    xmm4 = xmm4 * xmm3; /* mulss */
    xmm4 = xmm4 * xmm1; /* mulss */
    xmm4 = xmm4 * xmm0; /* mulss */
    xmm4 = xmm4 + MEMF(eax + 0x10); /* addss */
    MEMF(eax + 0x10) = xmm4; /* movss */
    xmm4 = MEMF(ecx + 4); /* movss */
    xmm4 = xmm4 * MEMF(ecx + 8); /* mulss */
    xmm4 = xmm4 * xmm3; /* mulss */
    xmm4 = xmm4 * xmm1; /* mulss */
    xmm4 = xmm4 * xmm0; /* mulss */
    xmm4 = xmm4 + MEMF(eax + 0x14); /* addss */
    MEMF(eax + 0x14) = xmm4; /* movss */
    xmm4 = MEMF(ecx); /* movss */
    xmm4 = xmm4 * MEMF(ecx + 8); /* mulss */
    xmm4 = xmm4 * xmm3; /* mulss */
    xmm4 = xmm4 * xmm1; /* mulss */
    xmm4 = xmm4 * xmm0; /* mulss */
    xmm4 = xmm4 + MEMF(eax + 0x1C); /* addss */
    MEMF(eax + 0x1C) = xmm4; /* movss */
    xmm4 = MEMF(ecx + 8); /* movss */
    xmm5 = xmm4; /* movaps */
    xmm5 = xmm5 * xmm4; /* mulss */
    xmm5 = xmm5 * MEMF(0x648D20); /* mulss */
    xmm5 = xmm5 - MEMF(0x648D14); /* subss */
    xmm5 = xmm5 * MEMF(0x64917C); /* mulss */
    xmm5 = xmm5 * xmm1; /* mulss */
    xmm5 = xmm5 * xmm0; /* mulss */
    xmm5 = xmm5 + MEMF(eax + 0x18); /* addss */
    MEMF(eax + 0x18) = xmm5; /* movss */
    xmm4 = MEMF(ecx); /* movss */
    xmm5 = MEMF(ecx + 4); /* movss */
    xmm7 = xmm4; /* movaps */
    xmm7 = xmm7 * xmm4; /* mulss */
    xmm4 = xmm5; /* movaps */
    xmm4 = xmm4 * xmm5; /* mulss */
    xmm7 = xmm7 - xmm4; /* subss */
    xmm7 = xmm7 * MEMF(0x649178); /* mulss */
    xmm7 = xmm7 * xmm1; /* mulss */
    xmm1 = MEMF(0x64918C); /* movss */
    xmm7 = xmm7 * xmm0; /* mulss */
    xmm7 = xmm7 + MEMF(eax + 0x20); /* addss */
    MEMF(eax + 0x20) = xmm7; /* movss */
    /* comiss xmm1, MEMF(edx + 4) - sets EFLAGS */
    if ((xmm1 <= MEMF(edx + 4))) goto loc_0012CB38; /* jbe: below or equal (unsigned <=) */

loc_0012CB33: ;
    xmm1 = MEMF(edx + 4); /* movss */

loc_0012CB38: ;
    xmm4 = xmm1; /* movaps */
    xmm4 = xmm4 * xmm0; /* mulss */
    xmm4 = xmm4 * xmm6; /* mulss */
    xmm4 = xmm4 + MEMF(eax + 0x30); /* addss */
    MEMF(eax + 0x30) = xmm4; /* movss */
    xmm4 = MEMF(ecx + 4); /* movss */
    xmm4 = xmm4 * xmm2; /* mulss */
    xmm4 = xmm4 * xmm1; /* mulss */
    xmm4 = xmm4 * xmm0; /* mulss */
    xmm4 = xmm4 + MEMF(eax + 0x34); /* addss */
    MEMF(eax + 0x34) = xmm4; /* movss */
    xmm4 = MEMF(ecx + 8); /* movss */
    xmm4 = xmm4 * xmm2; /* mulss */
    xmm4 = xmm4 * xmm1; /* mulss */
    xmm4 = xmm4 * xmm0; /* mulss */
    xmm4 = xmm4 + MEMF(eax + 0x38); /* addss */
    MEMF(eax + 0x38) = xmm4; /* movss */
    xmm4 = MEMF(ecx); /* movss */
    xmm4 = xmm4 * xmm2; /* mulss */
    xmm4 = xmm4 * xmm1; /* mulss */
    xmm4 = xmm4 * xmm0; /* mulss */
    xmm4 = xmm4 + MEMF(eax + 0x3C); /* addss */
    MEMF(eax + 0x3C) = xmm4; /* movss */
    xmm4 = MEMF(ecx + 4); /* movss */
    xmm4 = xmm4 * MEMF(ecx); /* mulss */
    xmm4 = xmm4 * xmm3; /* mulss */
    xmm4 = xmm4 * xmm1; /* mulss */
    xmm4 = xmm4 * xmm0; /* mulss */
    xmm4 = xmm4 + MEMF(eax + 0x40); /* addss */
    MEMF(eax + 0x40) = xmm4; /* movss */
    xmm4 = MEMF(ecx + 4); /* movss */
    xmm4 = xmm4 * MEMF(ecx + 8); /* mulss */
    xmm4 = xmm4 * xmm3; /* mulss */
    xmm4 = xmm4 * xmm1; /* mulss */
    xmm4 = xmm4 * xmm0; /* mulss */
    xmm4 = xmm4 + MEMF(eax + 0x44); /* addss */
    MEMF(eax + 0x44) = xmm4; /* movss */
    xmm4 = MEMF(ecx); /* movss */
    xmm4 = xmm4 * MEMF(ecx + 8); /* mulss */
    xmm4 = xmm4 * xmm3; /* mulss */
    xmm4 = xmm4 * xmm1; /* mulss */
    xmm4 = xmm4 * xmm0; /* mulss */
    xmm4 = xmm4 + MEMF(eax + 0x4C); /* addss */
    MEMF(eax + 0x4C) = xmm4; /* movss */
    xmm4 = MEMF(ecx + 8); /* movss */
    xmm5 = xmm4; /* movaps */
    xmm5 = xmm5 * xmm4; /* mulss */
    xmm5 = xmm5 * MEMF(0x648D20); /* mulss */
    xmm5 = xmm5 - MEMF(0x648D14); /* subss */
    xmm5 = xmm5 * MEMF(0x64917C); /* mulss */
    xmm5 = xmm5 * xmm1; /* mulss */
    xmm5 = xmm5 * xmm0; /* mulss */
    xmm5 = xmm5 + MEMF(eax + 0x48); /* addss */
    MEMF(eax + 0x48) = xmm5; /* movss */
    xmm4 = MEMF(ecx); /* movss */
    xmm5 = MEMF(ecx + 4); /* movss */
    xmm7 = xmm4; /* movaps */
    xmm7 = xmm7 * xmm4; /* mulss */
    xmm4 = xmm5; /* movaps */
    xmm4 = xmm4 * xmm5; /* mulss */
    xmm7 = xmm7 - xmm4; /* subss */
    xmm4 = MEMF(0x649178); /* movss */
    xmm7 = xmm7 * xmm4; /* mulss */
    xmm7 = xmm7 * xmm1; /* mulss */
    xmm1 = MEMF(0x64918C); /* movss */
    xmm7 = xmm7 * xmm0; /* mulss */
    xmm7 = xmm7 + MEMF(eax + 0x50); /* addss */
    MEMF(eax + 0x50) = xmm7; /* movss */
    /* comiss xmm1, MEMF(edx + 8) - sets EFLAGS */
    if ((xmm1 <= MEMF(edx + 8))) goto loc_0012CC7D; /* jbe: below or equal (unsigned <=) */

loc_0012CC78: ;
    xmm1 = MEMF(edx + 8); /* movss */

loc_0012CC7D: ;
    xmm5 = xmm1; /* movaps */
    xmm5 = xmm5 * xmm0; /* mulss */
    xmm5 = xmm5 * xmm6; /* mulss */
    xmm5 = xmm5 + MEMF(eax + 0x60); /* addss */
    MEMF(eax + 0x60) = xmm5; /* movss */
    xmm5 = MEMF(ecx + 4); /* movss */
    xmm5 = xmm5 * xmm2; /* mulss */
    xmm5 = xmm5 * xmm1; /* mulss */
    xmm5 = xmm5 * xmm0; /* mulss */
    xmm5 = xmm5 + MEMF(eax + 0x64); /* addss */
    MEMF(eax + 0x64) = xmm5; /* movss */
    xmm5 = MEMF(ecx + 8); /* movss */
    xmm5 = xmm5 * xmm2; /* mulss */
    xmm5 = xmm5 * xmm1; /* mulss */
    xmm5 = xmm5 * xmm0; /* mulss */
    xmm5 = xmm5 + MEMF(eax + 0x68); /* addss */
    MEMF(eax + 0x68) = xmm5; /* movss */
    xmm5 = MEMF(ecx); /* movss */
    xmm5 = xmm5 * xmm2; /* mulss */
    xmm5 = xmm5 * xmm1; /* mulss */
    xmm5 = xmm5 * xmm0; /* mulss */
    xmm5 = xmm5 + MEMF(eax + 0x6C); /* addss */
    MEMF(eax + 0x6C) = xmm5; /* movss */
    xmm2 = MEMF(ecx + 4); /* movss */
    xmm2 = xmm2 * MEMF(ecx); /* mulss */
    xmm2 = xmm2 * xmm3; /* mulss */
    xmm2 = xmm2 * xmm1; /* mulss */
    xmm2 = xmm2 * xmm0; /* mulss */
    xmm2 = xmm2 + MEMF(eax + 0x70); /* addss */
    MEMF(eax + 0x70) = xmm2; /* movss */
    xmm2 = MEMF(ecx + 4); /* movss */
    xmm2 = xmm2 * MEMF(ecx + 8); /* mulss */
    xmm2 = xmm2 * xmm3; /* mulss */
    xmm2 = xmm2 * xmm1; /* mulss */
    xmm2 = xmm2 * xmm0; /* mulss */
    xmm2 = xmm2 + MEMF(eax + 0x74); /* addss */
    MEMF(eax + 0x74) = xmm2; /* movss */
    xmm2 = MEMF(ecx); /* movss */
    xmm2 = xmm2 * MEMF(ecx + 8); /* mulss */
    xmm2 = xmm2 * xmm3; /* mulss */
    xmm2 = xmm2 * xmm1; /* mulss */
    xmm2 = xmm2 * xmm0; /* mulss */
    xmm2 = xmm2 + MEMF(eax + 0x7C); /* addss */
    MEMF(eax + 0x7C) = xmm2; /* movss */
    xmm2 = MEMF(ecx + 8); /* movss */
    xmm3 = xmm2; /* movaps */
    xmm3 = xmm3 * xmm2; /* mulss */
    xmm3 = xmm3 * MEMF(0x648D20); /* mulss */
    xmm3 = xmm3 - MEMF(0x648D14); /* subss */
    xmm3 = xmm3 * MEMF(0x64917C); /* mulss */
    xmm3 = xmm3 * xmm1; /* mulss */
    xmm3 = xmm3 * xmm0; /* mulss */
    xmm3 = xmm3 + MEMF(eax + 0x78); /* addss */
    MEMF(eax + 0x78) = xmm3; /* movss */
    xmm2 = MEMF(ecx); /* movss */
    xmm3 = MEMF(ecx + 4); /* movss */
    xmm5 = xmm2; /* movaps */
    xmm5 = xmm5 * xmm2; /* mulss */
    xmm2 = xmm3; /* movaps */
    xmm2 = xmm2 * xmm3; /* mulss */
    xmm5 = xmm5 - xmm2; /* subss */
    xmm5 = xmm5 * xmm4; /* mulss */
    xmm5 = xmm5 * xmm1; /* mulss */
    xmm5 = xmm5 * xmm0; /* mulss */
    xmm5 = xmm5 + MEMF(eax + 0x80); /* addss */
    MEMF(eax + 0x80) = xmm5; /* movss */
    esp += 4; return; /* ret */

}

/**
 * sub_0012CDB0
 * Original: 0x0012CDB0 - 0x0012D019 (617 bytes, 135 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0012CDB0(void)
{
    float xmm0, xmm1, xmm2, xmm3, xmm4, xmm5, xmm6, xmm7;

loc_0012CDB0: ;
    xmm0 = MEMF(eax); /* movss */
    xmm1 = MEMF(eax + 4); /* movss */
    xmm2 = MEMF(eax + 8); /* movss */
    xmm3 = MEMF(ecx); /* movss */
    xmm4 = MEMF(ecx + 0x18); /* movss */
    xmm6 = MEMF(ecx + 0x1C); /* movss */
    xmm6 = xmm6 * MEMF(eax); /* mulss */
    xmm7 = MEMF(ecx + 8); /* movss */
    xmm7 = xmm7 * MEMF(eax + 8); /* mulss */
    xmm5 = xmm0; /* movaps */
    xmm5 = xmm5 * xmm0; /* mulss */
    xmm0 = xmm1; /* movaps */
    xmm0 = xmm0 * xmm1; /* mulss */
    xmm1 = MEMF(0x649174); /* movss */
    xmm5 = xmm5 - xmm0; /* subss */
    xmm5 = xmm5 * MEMF(ecx + 0x20); /* mulss */
    xmm0 = MEMF(0x649170); /* movss */
    xmm5 = xmm5 * xmm0; /* mulss */
    xmm2 = xmm2 * xmm2; /* mulss */
    xmm2 = xmm2 * MEMF(ecx + 0x18); /* mulss */
    xmm2 = xmm2 * xmm1; /* mulss */
    xmm5 = xmm5 + xmm2; /* addss */
    xmm2 = MEMF(0x64916C); /* movss */
    xmm3 = xmm3 * xmm2; /* mulss */
    xmm5 = xmm5 + xmm3; /* addss */
    xmm3 = MEMF(0x649168); /* movss */
    xmm4 = xmm4 * xmm3; /* mulss */
    xmm5 = xmm5 - xmm4; /* subss */
    xmm4 = MEMF(ecx + 0x14); /* movss */
    xmm4 = xmm4 * MEMF(eax + 4); /* mulss */
    xmm6 = xmm6 + xmm4; /* addss */
    xmm6 = xmm6 * MEMF(eax + 8); /* mulss */
    xmm4 = MEMF(ecx + 0x10); /* movss */
    xmm4 = xmm4 * MEMF(eax + 4); /* mulss */
    xmm4 = xmm4 * MEMF(eax); /* mulss */
    xmm6 = xmm6 + xmm4; /* addss */
    xmm4 = MEMF(0x649164); /* movss */
    xmm6 = xmm6 * xmm4; /* mulss */
    xmm5 = xmm5 + xmm6; /* addss */
    xmm6 = MEMF(ecx + 0xC); /* movss */
    xmm6 = xmm6 * MEMF(eax); /* mulss */
    xmm6 = xmm6 + xmm7; /* addss */
    xmm7 = MEMF(ecx + 4); /* movss */
    xmm7 = xmm7 * MEMF(eax + 4); /* mulss */
    xmm6 = xmm6 + xmm7; /* addss */
    xmm6 = xmm6 * MEMF(0x649160); /* mulss */
    xmm5 = xmm5 + xmm6; /* addss */
    MEMF(edx) = xmm5; /* movss */
    xmm5 = MEMF(eax); /* movss */
    xmm6 = MEMF(eax + 4); /* movss */
    xmm7 = xmm5; /* movaps */
    xmm7 = xmm7 * xmm5; /* mulss */
    xmm5 = xmm6; /* movaps */
    xmm5 = xmm5 * xmm6; /* mulss */
    xmm7 = xmm7 - xmm5; /* subss */
    xmm7 = xmm7 * MEMF(ecx + 0x50); /* mulss */
    xmm5 = MEMF(ecx + 0x48); /* movss */
    xmm5 = xmm5 * MEMF(eax + 8); /* mulss */
    xmm5 = xmm5 * MEMF(eax + 8); /* mulss */
    xmm6 = MEMF(ecx + 0x44); /* movss */
    xmm6 = xmm6 * MEMF(eax + 4); /* mulss */
    xmm5 = xmm5 * xmm1; /* mulss */
    xmm7 = xmm7 * xmm0; /* mulss */
    xmm7 = xmm7 + xmm5; /* addss */
    xmm5 = MEMF(ecx + 0x30); /* movss */
    xmm5 = xmm5 * xmm2; /* mulss */
    xmm7 = xmm7 + xmm5; /* addss */
    xmm5 = MEMF(ecx + 0x48); /* movss */
    xmm5 = xmm5 * xmm3; /* mulss */
    xmm7 = xmm7 - xmm5; /* subss */
    xmm5 = MEMF(ecx + 0x4C); /* movss */
    xmm5 = xmm5 * MEMF(eax); /* mulss */
    xmm5 = xmm5 + xmm6; /* addss */
    xmm5 = xmm5 * MEMF(eax + 8); /* mulss */
    xmm6 = MEMF(ecx + 0x40); /* movss */
    xmm6 = xmm6 * MEMF(eax + 4); /* mulss */
    xmm6 = xmm6 * MEMF(eax); /* mulss */
    xmm5 = xmm5 + xmm6; /* addss */
    xmm5 = xmm5 * xmm4; /* mulss */
    xmm7 = xmm7 + xmm5; /* addss */
    xmm5 = MEMF(ecx + 0x3C); /* movss */
    xmm5 = xmm5 * MEMF(eax); /* mulss */
    xmm6 = MEMF(ecx + 0x38); /* movss */
    xmm6 = xmm6 * MEMF(eax + 8); /* mulss */
    xmm5 = xmm5 + xmm6; /* addss */
    xmm6 = MEMF(ecx + 0x34); /* movss */
    xmm6 = xmm6 * MEMF(eax + 4); /* mulss */
    xmm5 = xmm5 + xmm6; /* addss */
    xmm5 = xmm5 * MEMF(0x649160); /* mulss */
    xmm7 = xmm7 + xmm5; /* addss */
    MEMF(edx + 4) = xmm7; /* movss */
    xmm5 = MEMF(eax); /* movss */
    xmm6 = MEMF(eax + 4); /* movss */
    xmm7 = xmm5; /* movaps */
    xmm7 = xmm7 * xmm5; /* mulss */
    xmm5 = xmm6; /* movaps */
    xmm5 = xmm5 * xmm6; /* mulss */
    xmm7 = xmm7 - xmm5; /* subss */
    xmm7 = xmm7 * MEMF(ecx + 0x80); /* mulss */
    xmm7 = xmm7 * xmm0; /* mulss */
    xmm0 = MEMF(ecx + 0x78); /* movss */
    xmm0 = xmm0 * MEMF(eax + 8); /* mulss */
    xmm0 = xmm0 * MEMF(eax + 8); /* mulss */
    xmm0 = xmm0 * xmm1; /* mulss */
    xmm1 = MEMF(ecx + 0x74); /* movss */
    xmm7 = xmm7 + xmm0; /* addss */
    xmm0 = MEMF(ecx + 0x60); /* movss */
    xmm0 = xmm0 * xmm2; /* mulss */
    xmm7 = xmm7 + xmm0; /* addss */
    xmm0 = MEMF(ecx + 0x78); /* movss */
    xmm0 = xmm0 * xmm3; /* mulss */
    xmm7 = xmm7 - xmm0; /* subss */
    xmm0 = MEMF(ecx + 0x7C); /* movss */
    xmm0 = xmm0 * MEMF(eax); /* mulss */
    xmm1 = xmm1 * xmm6; /* mulss */
    xmm0 = xmm0 + xmm1; /* addss */
    xmm0 = xmm0 * MEMF(eax + 8); /* mulss */
    xmm1 = MEMF(ecx + 0x70); /* movss */
    xmm1 = xmm1 * xmm6; /* mulss */
    xmm1 = xmm1 * MEMF(eax); /* mulss */
    xmm0 = xmm0 + xmm1; /* addss */
    xmm1 = MEMF(ecx + 0x68); /* movss */
    xmm1 = xmm1 * MEMF(eax + 8); /* mulss */
    xmm0 = xmm0 * xmm4; /* mulss */
    xmm7 = xmm7 + xmm0; /* addss */
    xmm0 = MEMF(ecx + 0x6C); /* movss */
    xmm0 = xmm0 * MEMF(eax); /* mulss */
    xmm0 = xmm0 + xmm1; /* addss */
    xmm1 = MEMF(ecx + 0x64); /* movss */
    xmm1 = xmm1 * xmm6; /* mulss */
    xmm0 = xmm0 + xmm1; /* addss */
    xmm0 = xmm0 * MEMF(0x649160); /* mulss */
    xmm7 = xmm7 + xmm0; /* addss */
    MEMF(edx + 8) = xmm7; /* movss */
    esp += 4; return; /* ret */

}

/**
 * sub_0012D020
 * Original: 0x0012D020 - 0x0012D15C (316 bytes, 61 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0012D020(void)
{
    float xmm0;

loc_0012D020: ;
    PUSH32(esp, esi);
    PUSH32(esp, edi);
    xmm0 = 0.0f; /* xorps self = zero */
    MEMF(eax + 0x20C) = xmm0; /* movss */
    MEMF(eax + 0x210) = xmm0; /* movss */
    MEMF(eax + 0x214) = xmm0; /* movss */
    MEMF(eax + 0x218) = xmm0; /* movss */
    edx = MEM32(0x5A02E4);
    ecx = eax + 0x21C;
    MEM32(ecx) = edx;
    edx = MEM32(0x5A02E8);
    MEM32(ecx + 4) = edx;
    edx = MEM32(0x5A02EC);
    MEM32(ecx + 8) = edx;
    ecx = 1;
    MEM32(eax + 0x208) = ecx;
    MEMF(eax + 0x258) = xmm0; /* movss */
    MEMF(eax + 0x25C) = xmm0; /* movss */
    MEMF(eax + 0x260) = xmm0; /* movss */
    MEMF(eax + 0x264) = xmm0; /* movss */
    esi = MEM32(0x5A02E4);
    edx = eax + 0x268;
    MEM32(edx) = esi;
    esi = MEM32(0x5A02E8);
    MEM32(edx + 4) = esi;
    esi = MEM32(0x5A02EC);
    MEM32(edx + 8) = esi;
    MEM32(eax + 0x254) = ecx;
    MEMF(eax + 0x2A4) = xmm0; /* movss */
    MEMF(eax + 0x2A8) = xmm0; /* movss */
    MEMF(eax + 0x2AC) = xmm0; /* movss */
    MEMF(eax + 0x2B0) = xmm0; /* movss */
    esi = MEM32(0x5A02E4);
    edx = eax + 0x2B4;
    MEM32(edx) = esi;
    esi = MEM32(0x5A02E8);
    MEM32(edx + 4) = esi;
    esi = MEM32(0x5A02EC);
    MEM32(edx + 8) = esi;
    MEM32(eax + 0x2A0) = ecx;
    MEMF(eax + 0x2F0) = xmm0; /* movss */
    MEMF(eax + 0x2F4) = xmm0; /* movss */
    MEMF(eax + 0x2F8) = xmm0; /* movss */
    MEMF(eax + 0x2FC) = xmm0; /* movss */
    esi = MEM32(0x5A02E4);
    edx = eax + 0x300;
    MEM32(edx) = esi;
    esi = MEM32(0x5A02E8);
    MEM32(edx + 4) = esi;
    esi = MEM32(0x5A02EC);
    MEM32(edx + 8) = esi;
    MEM32(eax + 0x2EC) = ecx;
    edx = eax + 0x340;
    ecx = 0x8C;
    eax = 0; /* xor self */
    edi = edx;
    { uint32_t _i; for (_i = 0; _i < ecx; _i++) MEM32(edi + _i*4) = eax; }
    edi += ecx * 4; ecx = 0; /* rep stosd */
    POP32(esp, edi);
    MEM32(edx) = 0xFFFFFFFFu;
    POP32(esp, esi);
    esp += 4; return; /* ret */

}

/**
 * sub_0012D160
 * Original: 0x0012D160 - 0x0012D194 (52 bytes, 16 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0012D160(void)
{

loc_0012D160: ;
    PUSH32(esp, esi);
    PUSH32(esp, edi);
    eax = 0; /* xor self */
    edi = ebx + 0xA0;
    ecx = 0x10;
    esi = 0x5A0350;
    memcpy((void*)XBOX_PTR(edi), (void*)XBOX_PTR(esi), ecx * 4);
    esi += ecx * 4; edi += ecx * 4; ecx = 0; /* rep movsd */
    MEM32(ebx + 0x330) = eax;
    MEM32(ebx + 0x334) = eax;
    MEM8(ebx + 0x338) = LO8(eax);
    eax = ebx;
    PUSH32(esp, 0); sub_0012D020(); /* call 0x0012D020 */

loc_0012D18F: ;
    POP32(esp, edi);
    eax = ebx;
    POP32(esp, esi);
    esp += 4; return; /* ret */

}

/**
 * sub_0012D1A0
 * Original: 0x0012D1A0 - 0x0012D37B (475 bytes, 109 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0012D1A0(void)
{
    int _flags = 0; /* fallback flag var */
    float xmm0, xmm1, xmm2, xmm3;

loc_0012D1A0: ;
    PUSH32(esp, esi);
    xmm2 = MEMF(edx); /* movss */
    xmm1 = MEMF(edx + 4); /* movss */
    xmm0 = MEMF(edx + 8); /* movss */
    xmm3 = MEMF(eax); /* movss */
    xmm3 = xmm3 * xmm2; /* mulss */
    MEMF(eax) = xmm3; /* movss */
    xmm3 = MEMF(eax + 4); /* movss */
    xmm3 = xmm3 * xmm2; /* mulss */
    MEMF(eax + 4) = xmm3; /* movss */
    xmm3 = MEMF(eax + 8); /* movss */
    xmm3 = xmm3 * xmm2; /* mulss */
    MEMF(eax + 8) = xmm3; /* movss */
    xmm3 = MEMF(eax + 0xC); /* movss */
    xmm3 = xmm3 * xmm2; /* mulss */
    MEMF(eax + 0xC) = xmm3; /* movss */
    xmm3 = MEMF(eax + 0x10); /* movss */
    xmm3 = xmm3 * xmm2; /* mulss */
    MEMF(eax + 0x10) = xmm3; /* movss */
    xmm3 = MEMF(eax + 0x14); /* movss */
    xmm3 = xmm3 * xmm2; /* mulss */
    MEMF(eax + 0x14) = xmm3; /* movss */
    xmm3 = MEMF(eax + 0x18); /* movss */
    xmm3 = xmm3 * xmm2; /* mulss */
    MEMF(eax + 0x18) = xmm3; /* movss */
    xmm3 = MEMF(eax + 0x1C); /* movss */
    xmm3 = xmm3 * xmm2; /* mulss */
    MEMF(eax + 0x1C) = xmm3; /* movss */
    xmm3 = MEMF(eax + 0x20); /* movss */
    xmm3 = xmm3 * xmm2; /* mulss */
    MEMF(eax + 0x20) = xmm3; /* movss */
    xmm2 = xmm1; /* movaps */
    xmm2 = xmm2 * MEMF(eax + 0x30); /* mulss */
    MEMF(eax + 0x30) = xmm2; /* movss */
    xmm2 = MEMF(eax + 0x34); /* movss */
    xmm2 = xmm2 * xmm1; /* mulss */
    MEMF(eax + 0x34) = xmm2; /* movss */
    xmm2 = MEMF(eax + 0x38); /* movss */
    xmm2 = xmm2 * xmm1; /* mulss */
    MEMF(eax + 0x38) = xmm2; /* movss */
    xmm2 = MEMF(eax + 0x3C); /* movss */
    xmm2 = xmm2 * xmm1; /* mulss */
    MEMF(eax + 0x3C) = xmm2; /* movss */
    xmm2 = MEMF(eax + 0x40); /* movss */
    xmm2 = xmm2 * xmm1; /* mulss */
    MEMF(eax + 0x40) = xmm2; /* movss */
    xmm2 = MEMF(eax + 0x44); /* movss */
    xmm2 = xmm2 * xmm1; /* mulss */
    MEMF(eax + 0x44) = xmm2; /* movss */
    xmm2 = MEMF(eax + 0x48); /* movss */
    xmm2 = xmm2 * xmm1; /* mulss */
    MEMF(eax + 0x48) = xmm2; /* movss */
    xmm2 = MEMF(eax + 0x4C); /* movss */
    xmm2 = xmm2 * xmm1; /* mulss */
    MEMF(eax + 0x4C) = xmm2; /* movss */
    xmm2 = MEMF(eax + 0x50); /* movss */
    xmm2 = xmm2 * xmm1; /* mulss */
    MEMF(eax + 0x50) = xmm2; /* movss */
    xmm1 = MEMF(eax + 0x60); /* movss */
    xmm1 = xmm1 * xmm0; /* mulss */
    MEMF(eax + 0x60) = xmm1; /* movss */
    xmm1 = MEMF(eax + 0x64); /* movss */
    xmm1 = xmm1 * xmm0; /* mulss */
    MEMF(eax + 0x64) = xmm1; /* movss */
    xmm1 = MEMF(eax + 0x68); /* movss */
    xmm1 = xmm1 * xmm0; /* mulss */
    MEMF(eax + 0x68) = xmm1; /* movss */
    xmm1 = MEMF(eax + 0x6C); /* movss */
    xmm1 = xmm1 * xmm0; /* mulss */
    MEMF(eax + 0x6C) = xmm1; /* movss */
    xmm1 = MEMF(eax + 0x70); /* movss */
    xmm1 = xmm1 * xmm0; /* mulss */
    MEMF(eax + 0x70) = xmm1; /* movss */
    xmm1 = MEMF(eax + 0x74); /* movss */
    xmm1 = xmm1 * xmm0; /* mulss */
    MEMF(eax + 0x74) = xmm1; /* movss */
    xmm1 = MEMF(eax + 0x78); /* movss */
    xmm1 = xmm1 * xmm0; /* mulss */
    MEMF(eax + 0x78) = xmm1; /* movss */
    xmm1 = MEMF(eax + 0x7C); /* movss */
    xmm1 = xmm1 * xmm0; /* mulss */
    MEMF(eax + 0x7C) = xmm1; /* movss */
    xmm1 = MEMF(eax + 0x80); /* movss */
    xmm1 = xmm1 * xmm0; /* mulss */
    MEMF(eax + 0x80) = xmm1; /* movss */
    ecx = MEM32(eax + 0xE0);
    esi = 0; /* xor self */
    if (CMP_LE(ecx & ecx, 0)) goto loc_0012D379; /* jle: less or equal (signed <=) */

loc_0012D338: ;
    ecx = eax + 0x100;
    PUSH32(esp, edi);
    /* nop */

loc_0012D340: ;
    xmm0 = MEMF(ecx + -4); /* movss */
    xmm0 = xmm0 * MEMF(edx); /* mulss */
    MEMF(ecx + -4) = xmm0; /* movss */
    xmm0 = MEMF(edx + 4); /* movss */
    xmm0 = xmm0 * MEMF(ecx); /* mulss */
    MEMF(ecx) = xmm0; /* movss */
    xmm0 = MEMF(ecx + 4); /* movss */
    xmm0 = xmm0 * MEMF(edx + 8); /* mulss */
    MEMF(ecx + 4) = xmm0; /* movss */
    edi = MEM32(eax + 0xE0);
    esi++;
    ecx = ecx + 0x7C;
    if (CMP_L(esi, edi)) goto loc_0012D340; /* jl: less (signed <) */

loc_0012D378: ;
    POP32(esp, edi);

loc_0012D379: ;
    POP32(esp, esi);
    esp += 4; return; /* ret */

}

/**
 * sub_0012D380
 * Original: 0x0012D380 - 0x0012D407 (135 bytes, 41 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0012D380(void)
{
    uint32_t ebp;
    int _flags = 0; /* fallback flag var */
    float xmm0, xmm1;
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_0012D380: ;
    SET_LO8(eax, MEM8(0x8493C2));
    (void)0; /* test LO8(eax), LO8(eax) - flags set for next jcc */
    PUSH32(esp, ebp);
    ebp = MEM32(esp + 8);
    if (TEST_Z(LO8(eax), LO8(eax))) goto loc_0012D403; /* je: equal / zero */

loc_0012D38E: ;
    xmm0 = MEMF(0x649284); /* movss */
    PUSH32(esp, esi);
    esi = ebp + 0xA0;
    PUSH32(esp, edi);
    eax = esi;
    ecx = 0x774910;
    PUSH32(esp, 0); sub_003E2810(); /* call 0x003E2810 */

loc_0012D3AA: ;
    if (TEST_NZ(eax, eax)) goto loc_0012D3F3; /* jne: not equal / not zero */

loc_0012D3AE: ;
    ecx = 0x24;
    edi = 0x774880;
    PUSH32(esp, ebx);
    { uint32_t _i; for (_i = 0; _i < ecx; _i++) MEM32(edi + _i*4) = eax; }
    edi += ecx * 4; ecx = 0; /* rep stosd */
    ebx = 0x774148;
    edi = 0x77446C;

loc_0012D3C5: ;
    xmm1 = MEMF(edi); /* movss */
    ecx = edi + -12;
    edx = ebx;
    eax = 0x774880;
    PUSH32(esp, 0); sub_0012C810(); /* call 0x0012C810 */

loc_0012D3D8: ;
    edi = edi + 0x10;
    ebx = ebx + 0xC;
    if (CMP_L(edi, 0x77488C)) goto loc_0012D3C5; /* jl: less (signed <) */

loc_0012D3E6: ;
    ecx = 0x10;
    edi = 0x774910;
    memcpy((void*)XBOX_PTR(edi), (void*)XBOX_PTR(esi), ecx * 4);
    esi += ecx * 4; edi += ecx * 4; ecx = 0; /* rep movsd */
    POP32(esp, ebx);

loc_0012D3F3: ;
    ecx = 0x24;
    esi = 0x774880;
    edi = ebp;
    memcpy((void*)XBOX_PTR(edi), (void*)XBOX_PTR(esi), ecx * 4);
    esi += ecx * 4; edi += ecx * 4; ecx = 0; /* rep movsd */
    POP32(esp, edi);
    POP32(esp, esi);

loc_0012D403: ;
    POP32(esp, ebp);
    esp += 8; return; /* ret 4 */

}

/**
 * sub_0012D410
 * Original: 0x0012D410 - 0x0012D591 (385 bytes, 84 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0012D410(void)
{
    uint32_t ebp;
    int _flags = 0; /* fallback flag var */
    float xmm0, xmm1, xmm2, xmm3, xmm4;
    double _fp_stack[8];
    int _fp_top = 0;
    #define fp_push(v) (_fp_stack[--_fp_top & 7] = (v))
    #define fp_pop() (_fp_top++)
    #define fp_popp() (fp_pop())
    #define fp_top() _fp_stack[_fp_top & 7]
    #define fp_st1() _fp_stack[(_fp_top + 1) & 7]
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_0012D410: ;
    esp = esp - 0x90;
    xmm0 = xmm0 * MEMF(0x648E7C); /* mulss */
    PUSH32(esp, ebp);
    PUSH32(esp, esi);
    PUSH32(esp, edi);
    MEM8(0x8493C2) = 1;
    MEM32(esp + 0x28) = 0;
    MEMF(esp + 0x80) = xmm0; /* movss */
    esi = 0x774468;
    edi = 0x774148;
    fp_push((double)SMEM32(esp + 0x28)); /* fild */
    ebp = 0; /* xor self */
    MEM32(esp + 0x10) = ebp;
    fp_st1() *= fp_top(); fp_pop(); /* fmul */
    /* FPU: fsubr dword ptr [0x648d14] */
    fp_top() = sqrt(fp_top()); /* fsqrt */
    MEMF(esp + 0x24) = (float)fp_top(); fp_pop(); /* fst */
    PUSH32(esp, 0); sub_00470F54(); /* call 0x00470F54 */

loc_0012D464: ;
    fp_st1() += fp_top(); fp_pop(); /* fadd */
    /* fld st(0) */
    /* FPU: fcos  */
    MEMF(esp + 0x94) = (float)fp_top(); fp_popp(); /* fstp */
    xmm3 = MEMF(esp + 0x94); /* movss */
    /* FPU: fsin  */
    MEMF(esp + 0x24) = (float)fp_top(); fp_popp(); /* fstp */
    (void)0; /* test LO8(ebx), LO8(ebx) - flags set for next jcc */
    fp_push((double)SMEM32(esp + 0x10)); /* fild */
    fp_st1() *= fp_top(); fp_pop(); /* fmul */
    fp_st1() *= fp_top(); fp_pop(); /* fmul */
    /* fld st(0) */
    /* FPU: fcos  */
    fp_st1() *= fp_top(); fp_pop(); /* fmul */
    MEMF(esp + 0x90) = (float)fp_top(); fp_popp(); /* fstp */
    /* FPU: fsin  */
    fp_st1() *= fp_top(); fp_pop(); /* fmul */
    MEMF(esp + 0x98) = (float)fp_top(); fp_popp(); /* fstp */
    if (TEST_Z(LO8(ebx), LO8(ebx))) { sub_0012D591(); return; } /* je: equal / zero */

loc_0012D4B4: ;
    xmm4 = MEMF(0x648D14); /* movss */
    xmm2 = xmm3; /* movaps */
    xmm2 = xmm2 * MEMF(0x648CE0); /* mulss */
    xmm2 = xmm2 + xmm4; /* addss */
    xmm2 = xmm2 * MEMF(0x648F94); /* mulss */
    eax = esp + 0x2C;
    MEMF(esp + 0x84) = xmm2; /* movss */
    MEM32(esp + 0x10) = eax;
    xmm0 = MEMF(esp + 0x84); /* movss */
    /* shufps xmm0, xmm0, 0 */
    edx = MEM32(esp + 0xA0);
    xmm1 = MEMF(edx); /* movss */
    xmm1 = MEMD(edx + 4); /* movhps */
    /* mulps: xmm0 *= xmm1 (packed 4xfloat) */
    eax = MEM32(esp + 0x10);
    MEMF(eax) = xmm0; /* movss */
    MEMD(eax + 4) = xmm0; /* movhps */
    ecx = esp + 0x44;
    xmm4 = xmm4 - xmm2; /* subss */
    MEMF(esp + 0x88) = xmm4; /* movss */
    MEM32(esp + 0x10) = ecx;
    xmm0 = MEMF(esp + 0x88); /* movss */
    /* shufps xmm0, xmm0, 0 */
    edx = MEM32(esp + 0xA4);
    xmm1 = MEMF(edx); /* movss */
    xmm1 = MEMD(edx + 4); /* movhps */
    /* mulps: xmm0 *= xmm1 (packed 4xfloat) */
    eax = MEM32(esp + 0x10);
    MEMF(eax) = xmm0; /* movss */
    MEMD(eax + 4) = xmm0; /* movhps */
    edx = ecx;
    eax = esp + 0x2C;
    ecx = esp + 0x14;
    MEM32(esp + 0x20) = edx;
    MEM32(esp + 0xC) = eax;
    MEM32(esp + 0x10) = ecx;
    ecx = MEM32(esp + 0xC);
    xmm0 = MEMF(ecx); /* movss */
    xmm0 = MEMD(ecx + 4); /* movhps */
    edx = MEM32(esp + 0x20);
    xmm1 = MEMF(edx); /* movss */
    xmm1 = MEMD(edx + 4); /* movhps */
    /* addps: xmm0 += xmm1 (packed 4xfloat) */
    eax = MEM32(esp + 0x10);
    MEMF(eax) = xmm0; /* movss */
    MEMD(eax + 4) = xmm0; /* movhps */
    g_seh_ebp = ebp; sub_0012D725(); return; /* tail jmp 0x0012D725 */

    #undef fp_push
    #undef fp_pop
    #undef fp_popp
    #undef fp_top
    #undef fp_st1
}

/**
 * sub_0012D7D0
 * Original: 0x0012D7D0 - 0x0012DAA4 (724 bytes, 191 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0012D7D0(void)
{
    uint32_t ebp;
    int _flags = 0; /* fallback flag var */
    float xmm0, xmm1, xmm2, xmm3, xmm4;
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_0012D7D0: ;
    esp = esp - 0x68;
    PUSH32(esp, ebp);
    ebp = MEM32(esp + 0x70);
    PUSH32(esp, esi);
    esi = eax;
    eax = MEM32(esp + 0x78);
    if (TEST_S(eax, eax)) goto loc_0012DA9C; /* jl: less (signed <) */

loc_0012D7E7: ;
    if (CMP_GE(eax, 2)) goto loc_0012DA9C; /* jge: greater or equal (signed >=) */

loc_0012D7F0: ;
    xmm0 = MEMF(esi + 0xC); /* movss */
    xmm0 = xmm0 - MEMF(ebp + 0x90); /* subss */
    xmm4 = 0.0f; /* xorps self = zero */
    PUSH32(esp, ebx);
    PUSH32(esp, edi);
    ebx = esi + 0xC;
    edi = ebp + 0x90;
    xmm1 = xmm0; /* movaps */
    xmm1 = xmm1 * xmm0; /* mulss */
    /* comiss xmm4, xmm1 - sets EFLAGS */
    if ((xmm4 < xmm1)) goto loc_0012D81E; /* jb: below (unsigned <) */

loc_0012D817: ;
    ecx = 1;
    goto loc_0012D820;

loc_0012D81E: ;
    ecx = 0; /* xor self */

loc_0012D820: ;
    xmm0 = MEMF(ebx + 4); /* movss */
    xmm0 = xmm0 - MEMF(edi + 4); /* subss */
    xmm1 = xmm0; /* movaps */
    xmm1 = xmm1 * xmm0; /* mulss */
    /* comiss xmm4, xmm1 - sets EFLAGS */
    if ((xmm4 < xmm1)) goto loc_0012D83D; /* jb: below (unsigned <) */

loc_0012D836: ;
    eax = 1;
    goto loc_0012D83F;

loc_0012D83D: ;
    eax = 0; /* xor self */

loc_0012D83F: ;
    xmm0 = MEMF(ebx + 8); /* movss */
    xmm0 = xmm0 - MEMF(edi + 8); /* subss */
    xmm1 = xmm0; /* movaps */
    ecx = ecx & eax;
    xmm1 = xmm1 * xmm0; /* mulss */
    /* comiss xmm4, xmm1 - sets EFLAGS */
    if ((xmm4 < xmm1)) goto loc_0012D85E; /* jb: below (unsigned <) */

loc_0012D857: ;
    eax = 1;
    goto loc_0012D860;

loc_0012D85E: ;
    eax = 0; /* xor self */

loc_0012D860: ;
    if (TEST_NZ(ecx, eax)) goto loc_0012DA9A; /* jne: not equal / not zero */

loc_0012D868: ;
    eax = esp + 0x1C;
    MEM32(esp + 0x7C) = eax;
    MEM32(esp + 0x14) = edi;
    MEM32(esp + 0x10) = ebx;
    ecx = MEM32(esp + 0x14);
    xmm0 = MEMF(ecx); /* movss */
    xmm0 = MEMD(ecx + 4); /* movhps */
    edx = MEM32(esp + 0x10);
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
    xmm1 = 1.0f / sqrtf(xmm1); /* rsqrtss */
    MEMF(esp + 0x18) = xmm1; /* movss */
    /* shufps xmm1, xmm1, 0 */
    /* mulps: xmm3 *= xmm1 (packed 4xfloat) */
    eax = MEM32(esp + 0x7C);
    MEMF(eax) = xmm3; /* movss */
    MEMD(eax + 4) = xmm3; /* movhps */
    eax = MEM32(esi + 8);
    xmm3 = MEMF(0x648D14); /* movss */
    eax = eax & 3;
    eax--;
    if ((eax == 0)) goto loc_0012D94E; /* je: equal / zero */

loc_0012D8DB: ;
    eax = eax - 2;
    if ((eax != 0)) goto loc_0012D978; /* jne: not equal / not zero */

loc_0012D8E4: ;
    xmm0 = MEMF(esi + 0x54); /* movss */
    xmm0 = xmm0 * MEMF(0x649080); /* mulss */
    PUSH32(esp, ecx);
    MEMF(esp) = xmm0; /* movss */
    xmm0 = MEMF(0x649A90); /* movss */
    ecx = esi + 0x38;
    edx = ebx;
    eax = esp + 0x4C;
    PUSH32(esp, 0); sub_0012C7B0(); /* call 0x0012C7B0 */

loc_0012D90D: ;
    ecx = MEM32(edi);
    edx = MEM32(edi + 4);
    eax = MEM32(edi + 8);
    xmm0 = MEMF(ebp + 0x9C); /* movss */
    MEM32(esp + 0x38) = ecx;
    ecx = esp + 0x7C;
    MEM32(esp + 0x3C) = edx;
    PUSH32(esp, ecx);
    edx = esp + 0x3C;
    MEM32(esp + 0x44) = eax;
    PUSH32(esp, edx);
    ebx = esp + 0x1C;
    eax = esp + 0x50;
    MEMF(esp + 0x4C) = xmm0; /* movss */
    PUSH32(esp, 0); sub_0012C4F0(); /* call 0x0012C4F0 */

loc_0012D946: ;
    xmm4 = 0.0f; /* xorps self = zero */
    xmm3 = xmm0; /* movaps */
    goto loc_0012D978;

loc_0012D94E: ;
    xmm0 = xmm4; /* movaps */
    xmm0 = xmm0 - MEMF(esi + 0x38); /* subss */
    MEMF(esp + 0x1C) = xmm0; /* movss */
    xmm0 = xmm4; /* movaps */
    xmm0 = xmm0 - MEMF(esi + 0x3C); /* subss */
    MEMF(esp + 0x20) = xmm0; /* movss */
    xmm0 = xmm4; /* movaps */
    xmm0 = xmm0 - MEMF(esi + 0x40); /* subss */
    MEMF(esp + 0x24) = xmm0; /* movss */

loc_0012D978: ;
    xmm1 = MEMF(esp + 0x18); /* movss */
    xmm0 = MEMF(0x648D14); /* movss */
    MEMF(esp + 0x28) = xmm0; /* movss */
    xmm0 = xmm1; /* movaps */
    xmm0 = xmm0 * xmm1; /* mulss */
    MEMF(esp + 0x30) = xmm0; /* movss */
    eax = esi + 0x28;
    ecx = esp + 0x28;
    xmm0 = xmm0 * xmm1; /* mulss */
    MEMF(esp + 0x2C) = xmm1; /* movss */
    MEMF(esp + 0x34) = xmm0; /* movss */
    MEM32(esp + 0x7C) = eax;
    MEM32(esp + 0x18) = ecx;
    edx = MEM32(esp + 0x18);
    xmm1 = MEMF(edx); /* movups */
    ecx = MEM32(esp + 0x7C);
    xmm2 = MEMF(ecx); /* movups */
    /* mulps: xmm1 *= xmm2 (packed 4xfloat) */
    xmm0 = xmm1; /* movaps */
    /* shufps xmm0, xmm0, 0x93 */
    /* addps: xmm1 += xmm0 (packed 4xfloat) */
    /* shufps xmm0, xmm0, 0x93 */
    /* addps: xmm1 += xmm0 (packed 4xfloat) */
    /* shufps xmm0, xmm0, 0x93 */
    /* addps: xmm1 += xmm0 (packed 4xfloat) */
    MEMF(esp + 0x14) = xmm1; /* movss */
    xmm0 = MEMF(esp + 0x14); /* movss */
    /* comiss xmm3, xmm0 - sets EFLAGS */
    if ((xmm3 <= xmm0)) goto loc_0012D9F5; /* jbe: below or equal (unsigned <=) */

loc_0012D9F2: ;
    xmm3 = xmm0; /* movaps */

loc_0012D9F5: ;
    xmm0 = MEMF(esp + 0x1C); /* movss */
    xmm1 = MEMF(esp + 0x24); /* movss */
    xmm2 = MEMF(esp + 0x20); /* movss */
    /* ucomiss xmm0, xmm4 - sets EFLAGS */
    /* lahf - load AH from flags (used in FPU compare idiom) */
    if (1 /* jp after test - parity */) goto loc_0012DA22; /* jp: parity */

loc_0012DA10: ;
    /* ucomiss xmm2, xmm4 - sets EFLAGS */
    /* lahf - load AH from flags (used in FPU compare idiom) */
    if (1 /* jp after test - parity */) goto loc_0012DA22; /* jp: parity */

loc_0012DA19: ;
    /* ucomiss xmm1, xmm4 - sets EFLAGS */
    /* lahf - load AH from flags (used in FPU compare idiom) */
    if (1 /* jnp after test - parity */) goto loc_0012DA9A; /* jnp: not parity */

loc_0012DA22: ;
    edx = MEM32(esp + 0x80);
    xmm3 = xmm3 * MEMF(esp + 0x84); /* mulss */
    edx = (uint32_t)((int32_t)edx * (int32_t)0x7C);
    edi = edx + ebp + 0xE4;
    ecx = 0x1F;
    memcpy((void*)XBOX_PTR(edi), (void*)XBOX_PTR(esi), ecx * 4);
    esi += ecx * 4; edi += ecx * 4; ecx = 0; /* rep movsd */
    ecx = MEM32(esp + 0x80);
    eax = ecx;
    eax = eax << 4;
    MEMF(eax + ebp + 0x1EC) = xmm3; /* movss */
    eax = ecx + 0x1E;
    eax = eax << 4;
    eax = eax + ebp;
    MEMF(eax) = xmm0; /* movss */
    MEMF(eax + 4) = xmm2; /* movss */
    MEMF(eax + 8) = xmm1; /* movss */
    edx = MEM32(ebp + 0xE0);
    eax = ecx + 1;
    (void)0; /* cmp edx, eax - flags set for next jcc */
    if (CMP_G(edx, eax)) eax = edx; /* cmovg */
    (void)0; /* cmp eax, 2 - flags set for next jcc */
    MEM32(ebp + 0xE0) = eax;
    if (CMP_LE(eax, 2)) goto loc_0012DA8C; /* jle: less or equal (signed <=) */

loc_0012DA87: ;
    eax = 2;

loc_0012DA8C: ;
    MEM32(ebp + 0xE0) = eax;
    MEM8(ecx + ebp + 0x1DC) = 0;

loc_0012DA9A: ;
    POP32(esp, edi);
    POP32(esp, ebx);

loc_0012DA9C: ;
    POP32(esp, esi);
    POP32(esp, ebp);
    esp = esp + 0x68;
    esp += 16; return; /* ret 12 */

}

/**
 * sub_0012DAB0
 * Original: 0x0012DAB0 - 0x0012DAD0 (32 bytes, 12 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0012DAB0(void)
{
    uint32_t ebp;
    int _flags = 0; /* fallback flag var */

loc_0012DAB0: ;
    PUSH32(esp, ebp);
    ebp = esp;
    esp = esp & 0xFFFFFFF0u;
    esp = esp - 0x74;
    ecx = MEM32(eax + 0xE0);
    (void)0; /* test ecx, ecx - flags set for next jcc */
    PUSH32(esp, ebx);
    PUSH32(esp, esi);
    PUSH32(esp, edi);
    if (TEST_NZ(ecx, ecx)) { sub_0012DAD0(); return; } /* jne: not equal / not zero */

loc_0012DAC6: ;
    esi = 0x5A0350;
    g_seh_ebp = ebp; sub_0012DCB6(); return; /* tail jmp 0x0012DCB6 */

}

/**
 * sub_0012DCD0
 * Original: 0x0012DCD0 - 0x0012DEE4 (532 bytes, 137 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0012DCD0(void)
{
    uint32_t ebp;
    int _flags = 0; /* fallback flag var */
    int _fpu_cmp = 0; /* FPU compare result: -1/0/1 */
    float xmm0, xmm1, xmm2, xmm3;
    double _fp_stack[8];
    int _fp_top = 0;
    #define fp_push(v) (_fp_stack[--_fp_top & 7] = (v))
    #define fp_pop() (_fp_top++)
    #define fp_popp() (fp_pop())
    #define fp_top() _fp_stack[_fp_top & 7]
    #define fp_st1() _fp_stack[(_fp_top + 1) & 7]
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_0012DCD0: ;
    esp = esp - 0x2C;
    edx = MEM32(esp + 0x30);
    eax = edi;
    eax = (uint32_t)((int32_t)eax * (int32_t)0x7C);
    xmm0 = 0.0f; /* xorps self = zero */
    eax = eax + esi;
    ecx = eax + 0xF0;
    MEM32(esp + 4) = ecx;
    PUSH32(esp, ebx);
    ebx = MEM32(esp + 0x3C);
    PUSH32(esp, ebp);
    ebp = MEM32(ecx);
    MEM32(edx) = ebp;
    ebp = MEM32(ecx + 4);
    MEM32(edx + 4) = ebp;
    ecx = MEM32(ecx + 8);
    MEM32(edx + 8) = ecx;
    edx = MEM32(eax + 0xFC);
    MEM32(ebx) = edx;
    ecx = MEM32(eax + 0x100);
    MEM32(ebx + 4) = ecx;
    edx = MEM32(eax + 0x104);
    MEM32(ebx + 8) = edx;
    eax = edi;
    eax = eax << 4;
    eax = eax + esi;
    ecx = edi + 0x1E;
    MEM32(esp + 0x14) = eax;
    xmm1 = xmm0; /* movaps */
    xmm1 = xmm1 - MEMF(eax + 0x1E8); /* subss */
    xmm2 = xmm0; /* movaps */
    xmm2 = xmm2 - MEMF(eax + 0x1E4); /* subss */
    ecx = ecx << 4;
    eax = ecx + esi;
    xmm3 = xmm0; /* movaps */
    xmm3 = xmm3 - MEMF(eax); /* subss */
    MEM32(esp + 0x10) = eax;
    eax = MEM32(esp + 0x3C);
    ebp = esi + 0xA0;
    MEMF(eax) = xmm3; /* movss */
    MEMF(eax + 4) = xmm2; /* movss */
    MEMF(eax + 8) = xmm1; /* movss */
    MEM32(esp + 8) = ebp;
    eax = MEM32(esp + 0x3C);
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
    eax = MEM32(esp + 0x3C);
    /* addps: xmm2 += xmm3 (packed 4xfloat) */
    MEMD(eax) = xmm2; /* movlps */
    /* TODO: movhlps xmm2, xmm2 */
    MEMF(eax + 8) = xmm2; /* movss */
    edx = MEM32(esp + 0xC);
    eax = MEM32(esp + 0x38);
    PUSH32(esp, ebp);
    PUSH32(esp, edx);
    PUSH32(esp, eax);
    PUSH32(esp, 0); sub_00428393(); /* call 0x00428393 */

loc_0012DDBE: ;
    SET_LO8(eax, MEM8(edi + esi + 0x1DC));
    if (TEST_NZ(LO8(eax), LO8(eax))) goto loc_0012DEA5; /* jne: not equal / not zero */

loc_0012DDCD: ;
    eax = MEM32(esp + 0x10);
    edx = MEM32(eax + 4);
    xmm1 = MEMF(0x75DE28); /* movss */
    ecx = MEM32(eax);
    MEM32(esp + 0x28) = edx;
    edx = MEM32(eax + 0xC);
    MEM32(esp + 0x30) = edx;
    xmm1 = xmm1 * MEMF(esp + 0x30); /* mulss */
    xmm0 = xmm0 - xmm1; /* subss */
    MEMF(esp + 0x3C) = xmm0; /* movss */
    fp_push(MEMF(esp + 0x3C)); /* fld float */
    fp_top() = fabs(fp_top()); /* fabs */
    MEM32(esp + 0x24) = ecx;
    xmm2 = MEMF(esp + 0x24); /* movss */
    ecx = MEM32(eax + 8);
    fp_push(MEMF(0x648D54)); /* fld float */
    MEMF(esp + 0x18) = xmm2; /* movss */
    xmm2 = MEMF(esp + 0x28); /* movss */
    MEM32(esp + 0x2C) = ecx;
    MEMF(esp + 0x1C) = xmm2; /* movss */
    xmm2 = MEMF(esp + 0x2C); /* movss */
    _fpu_cmp = (fp_top() < fp_st1()) ? -1 : (fp_top() > fp_st1()) ? 1 : 0; fp_pop(); /* fcompi */
    /* fstp st(0) */
    MEMF(esp + 0x20) = xmm2; /* movss */
    if ((_fpu_cmp > 0) /* fcompi */) goto loc_0012DE9D; /* ja: above (unsigned >) */

loc_0012DE3A: ;
    eax = esp + 0x18;
    ecx = esp + 0x24;
    MEM32(esp + 0x38) = ebp;
    MEM32(esp + 0x10) = eax;
    MEM32(esp + 0x3C) = ecx;
    eax = MEM32(esp + 0x10);
    xmm2 = MEMF(eax); /* movss */
    ecx = MEM32(esp + 0x38);
    /* shufps xmm2, xmm2, 0 */
    /* mulps: xmm2 *= MEMF(ecx) (packed 4xfloat) */
    xmm1 = MEMF(eax + 4); /* movss */
    /* shufps xmm1, xmm1, 0 */
    /* mulps: xmm1 *= MEMF(ecx + 0x10) (packed 4xfloat) */
    xmm3 = MEMF(eax + 8); /* movss */
    /* shufps xmm3, xmm3, 0 */
    /* mulps: xmm3 *= MEMF(ecx + 0x20) (packed 4xfloat) */
    /* addps: xmm2 += xmm1 (packed 4xfloat) */
    eax = MEM32(esp + 0x3C);
    /* addps: xmm2 += xmm3 (packed 4xfloat) */
    MEMD(eax) = xmm2; /* movlps */
    /* TODO: movhlps xmm2, xmm2 */
    MEMF(eax + 8) = xmm2; /* movss */
    ecx = esp + 0x24;
    edx = ebx;
    eax = esi;
    PUSH32(esp, 0); sub_0012C9D0(); /* call 0x0012C9D0 */

loc_0012DE9D: ;
    MEM8(edi + esi + 0x1DC) = 1;

loc_0012DEA5: ;
    edx = MEM32(esp + 0x14);
    xmm0 = MEMF(edx + 0x1EC); /* movss */
    MEMF(esp + 0x3C) = xmm0; /* movss */
    xmm0 = MEMF(esp + 0x3C); /* movss */
    /* shufps xmm0, xmm0, 0 */
    edx = MEM32(esp + 0x40);
    xmm1 = MEMF(edx); /* movss */
    xmm1 = MEMD(edx + 4); /* movhps */
    /* mulps: xmm0 *= xmm1 (packed 4xfloat) */
    eax = MEM32(esp + 0x40);
    MEMF(eax) = xmm0; /* movss */
    MEMD(eax + 4) = xmm0; /* movhps */
    POP32(esp, ebp);
    POP32(esp, ebx);
    esp = esp + 0x2C;
    esp += 16; return; /* ret 12 */

    #undef fp_push
    #undef fp_pop
    #undef fp_popp
    #undef fp_top
    #undef fp_st1
}

/**
 * sub_0012DEF0
 * Original: 0x0012DEF0 - 0x0012DF22 (50 bytes, 14 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0012DEF0(void)
{
    int _flags = 0; /* fallback flag var */
    float xmm0, xmm1;

loc_0012DEF0: ;
    ecx = MEM32(edx + 0xE0);
    esp = esp - 0xC;
    (void)0; /* cmp ecx, eax - flags set for next jcc */
    PUSH32(esp, edi);
    edi = MEM32(esp + 0x14);
    if (CMP_G(ecx, eax)) { sub_0012DF22(); return; } /* jg: greater (signed >) */

loc_0012DF02: ;
    xmm0 = 0.0f; /* xorps self = zero */
    xmm1 = MEMF(0x648D34); /* movss */
    MEMF(edi) = xmm0; /* movss */
    MEMF(edi + 4) = xmm1; /* movss */
    MEMF(edi + 8) = xmm0; /* movss */
    POP32(esp, edi);
    esp = esp + 0xC;
    esp += 8; return; /* ret 4 */

}

/**
 * sub_0012E050
 * Original: 0x0012E050 - 0x0012E066 (22 bytes, 7 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0012E050(void)
{
    int _flags = 0; /* fallback flag var */
    float xmm0;

loc_0012E050: ;
    edx = MEM32(ecx + 0xE0);
    esp = esp - 0x14;
    if (CMP_G(edx, eax)) { sub_0012E066(); return; } /* jg: greater (signed >) */

loc_0012E05D: ;
    xmm0 = 0.0f; /* xorps self = zero */
    esp = esp + 0x14;
    esp += 8; return; /* ret 4 */

}

/**
 * sub_0012E100
 * Original: 0x0012E100 - 0x0012E1A4 (164 bytes, 40 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0012E100(void)
{
    int _flags = 0; /* fallback flag var */
    int _fpu_cmp = 0; /* FPU compare result: -1/0/1 */
    float xmm0, xmm1, xmm2, xmm3;
    double _fp_stack[8];
    int _fp_top = 0;
    #define fp_push(v) (_fp_stack[--_fp_top & 7] = (v))
    #define fp_pop() (_fp_top++)
    #define fp_popp() (fp_pop())
    #define fp_top() _fp_stack[_fp_top & 7]
    #define fp_st1() _fp_stack[(_fp_top + 1) & 7]

loc_0012E100: ;
    esp = esp - 0x18;
    fp_push(MEMD(0x648D08)); /* fld double */
    MEMF(esp + 0xC) = xmm0; /* movss */
    xmm0 = MEMF(esp + 0x20); /* movss */
    fp_top() = fabs(fp_top()); /* fabs */
    fp_push(MEMF(0x648D54)); /* fld float */
    MEMF(esp + 0x10) = xmm0; /* movss */
    xmm0 = MEMF(esp + 0x24); /* movss */
    _fpu_cmp = (fp_top() < fp_st1()) ? -1 : (fp_top() > fp_st1()) ? 1 : 0; fp_pop(); /* fcompi */
    /* fstp st(0) */
    MEMF(esp + 0x14) = xmm0; /* movss */
    if ((_fpu_cmp > 0) /* fcompi */) goto loc_0012E19E; /* ja: above (unsigned >) */

loc_0012E135: ;
    eax = esi + 0xA0;
    ecx = esp;
    MEM32(esp + 0x24) = eax;
    MEM32(esp + 0x20) = ecx;
    eax = MEM32(esp + 0x1C);
    xmm2 = MEMF(eax); /* movss */
    ecx = MEM32(esp + 0x24);
    /* shufps xmm2, xmm2, 0 */
    /* mulps: xmm2 *= MEMF(ecx) (packed 4xfloat) */
    xmm1 = MEMF(eax + 4); /* movss */
    /* shufps xmm1, xmm1, 0 */
    /* mulps: xmm1 *= MEMF(ecx + 0x10) (packed 4xfloat) */
    xmm3 = MEMF(eax + 8); /* movss */
    /* shufps xmm3, xmm3, 0 */
    /* mulps: xmm3 *= MEMF(ecx + 0x20) (packed 4xfloat) */
    /* addps: xmm2 += xmm1 (packed 4xfloat) */
    eax = MEM32(esp + 0x20);
    /* addps: xmm2 += xmm3 (packed 4xfloat) */
    MEMD(eax) = xmm2; /* movlps */
    /* TODO: movhlps xmm2, xmm2 */
    MEMF(eax + 8) = xmm2; /* movss */
    xmm0 = MEMF(0x648D14); /* movss */
    ecx = esp;
    edx = esp + 0xC;
    eax = esi;
    PUSH32(esp, 0); sub_0012C9D0(); /* call 0x0012C9D0 */

loc_0012E19E: ;
    esp = esp + 0x18;
    esp += 16; return; /* ret 12 */

    #undef fp_push
    #undef fp_pop
    #undef fp_popp
    #undef fp_top
    #undef fp_st1
}

/**
 * sub_0012E1B0
 * Original: 0x0012E1B0 - 0x0012E1FE (78 bytes, 31 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0012E1B0(void)
{
    int _flags = 0; /* fallback flag var */

loc_0012E1B0: ;
    PUSH32(esp, edi);
    edi = eax;
    if (CMP_NE(MEM32(esi), 0)) goto loc_0012E1E4; /* jne: not equal / not zero */

loc_0012E1B8: ;
    eax = MEM32(edi);
    if (TEST_NZ(eax, eax)) goto loc_0012E1DC; /* jne: not equal / not zero */

loc_0012E1BE: ;
    PUSH32(esp, 0x570);
    PUSH32(esp, 0); sub_00130BC0(); /* call 0x00130BC0 */

loc_0012E1C8: ;
    esp = esp + 4;
    if (TEST_Z(eax, eax)) goto loc_0012E1DA; /* je: equal / zero */

loc_0012E1CF: ;
    PUSH32(esp, ebx);
    ebx = eax;
    PUSH32(esp, 0); sub_0012D160(); /* call 0x0012D160 */

loc_0012E1D7: ;
    POP32(esp, ebx);
    goto loc_0012E1DC;

loc_0012E1DA: ;
    eax = 0; /* xor self */

loc_0012E1DC: ;
    MEM32(esi) = eax;
    MEM32(edi) = 0;

loc_0012E1E4: ;
    edi = edi + 4;
    ecx = MEM32(edi);
    eax = esi + 4;
    MEM32(eax) = ecx;
    edx = MEM32(edi + 4);
    MEM32(eax + 4) = edx;
    ecx = MEM32(edi + 8);
    MEM32(eax + 8) = ecx;
    eax = esi;
    POP32(esp, edi);
    esp += 4; return; /* ret */

}

/**
 * sub_0012E200
 * Original: 0x0012E200 - 0x0012E254 (84 bytes, 24 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0012E200(void)
{
    int _flags = 0; /* fallback flag var */

loc_0012E200: ;
    PUSH32(esp, ecx);
    eax = MEM32(eax);
    if (TEST_Z(eax, eax)) goto loc_0012E217; /* je: equal / zero */

loc_0012E207: ;
    ecx = esp;
    PUSH32(esp, ecx);
    MEM32(esp + 4) = eax;
    PUSH32(esp, 0); sub_002AF1C0(); /* call 0x002AF1C0 */

loc_0012E214: ;
    esp = esp + 4;

loc_0012E217: ;
    SET_LO8(ecx, MEM8(0x875E00));
    eax = 1;
    if (TEST_NZ(LO8(eax), LO8(ecx))) { sub_0012E254(); return; } /* jne: not equal / not zero */

loc_0012E226: ;
    edx = MEM32(0x875E00);
    edx = edx | eax;
    eax = 0; /* xor self */
    MEM32(0x875E00) = edx;
    edx = MEM32(0x7F9F60);
    eax--;
    MEM32(0x875DF4) = edx;
    MEM32(0x875DF8) = 0;
    MEM32(0x875DFC) = eax;
    POP32(esp, ecx);
    esp += 4; return; /* ret */

}

/**
 * sub_0012E260
 * Original: 0x0012E260 - 0x0012E2B5 (85 bytes, 29 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0012E260(void)
{

loc_0012E260: ;
    PUSH32(esp, ecx);
    eax = (int32_t)MEMF(esi + 8); /* cvttss2si */
    edx = ((int32_t)eax < 0) ? 0xFFFFFFFF : 0; /* cdq */
    eax = eax ^ edx;
    eax = eax - edx;
    edx = ((int32_t)eax < 0) ? 0xFFFFFFFF : 0; /* cdq */
    edx = edx & 0xFF;
    eax = eax + edx;
    ecx = eax;
    eax = (int32_t)MEMF(esi); /* cvttss2si */
    edx = ((int32_t)eax < 0) ? 0xFFFFFFFF : 0; /* cdq */
    eax = eax ^ edx;
    eax = eax - edx;
    edx = ((int32_t)eax < 0) ? 0xFFFFFFFF : 0; /* cdq */
    edx = edx & 0xFF;
    eax = eax + edx;
    eax = (uint32_t)((int32_t)eax >> 8);
    eax = (uint32_t)((int32_t)eax * (int32_t)0x101);
    ecx = (uint32_t)((int32_t)ecx >> 8);
    ecx = ecx + eax;
    ecx = (uint32_t)((int32_t)ecx * (int32_t)0x101);
    eax = esp;
    ecx = ecx + 0x237;
    PUSH32(esp, eax);
    eax = ecx;
    MEM32(esp + 4) = esi;
    PUSH32(esp, 0); sub_00130F60(); /* call 0x00130F60 */

loc_0012E2B1: ;
    esp = esp + 8;
    esp += 4; return; /* ret */

}

/**
 * sub_0012E2C0
 * Original: 0x0012E2C0 - 0x0012E2EA (42 bytes, 12 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0012E2C0(void)
{
    int _flags = 0; /* fallback flag var */

loc_0012E2C0: ;
    SET_LO8(ecx, MEM8(eax + 0x762E40));
    if (TEST_NZ(LO8(ecx), LO8(ecx))) { sub_0012E2EA(); return; } /* jne: not equal / not zero */

loc_0012E2CA: ;
    eax = MEM32(0x85D5B4);
    ecx = MEM32(eax + 0x334);
    if (TEST_Z(ecx, ecx)) { sub_0012E2EA(); return; } /* je: equal / zero */

loc_0012E2D9: ;
    ecx = MEM32(eax + 0x330);
    if (CMP_EQ(ecx, MEM32(0x7F9F60))) { sub_0012E2EA(); return; } /* je: equal / zero */

loc_0012E2E7: ;
    eax = 0; /* xor self */
    esp += 4; return; /* ret */

}

/**
 * sub_0012E2F0
 * Original: 0x0012E2F0 - 0x0012E356 (102 bytes, 31 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0012E2F0(void)
{
    int _flags = 0; /* fallback flag var */

loc_0012E2F0: ;
    PUSH32(esp, ebx);
    PUSH32(esp, esi);
    esi = eax;
    eax = MEM32(esi * 4 + 0x85D5B8);
    if (TEST_NZ(eax, eax)) goto loc_0012E322; /* jne: not equal / not zero */

loc_0012E2FF: ;
    PUSH32(esp, 0x570);
    PUSH32(esp, 0); sub_00130BC0(); /* call 0x00130BC0 */

loc_0012E309: ;
    esp = esp + 4;
    if (TEST_Z(eax, eax)) goto loc_0012E319; /* je: equal / zero */

loc_0012E310: ;
    ebx = eax;
    PUSH32(esp, 0); sub_0012D160(); /* call 0x0012D160 */

loc_0012E317: ;
    goto loc_0012E31B;

loc_0012E319: ;
    eax = 0; /* xor self */

loc_0012E31B: ;
    MEM32(esi * 4 + 0x85D5B8) = eax;

loc_0012E322: ;
    eax = MEM32(esi * 4 + 0x85D5B8);
    ebx = MEM32(0x84A5F8);
    ecx = esi;
    ecx = (uint32_t)((int32_t)ecx * (int32_t)0x6D0);
    ecx = ecx + ebx;
    esi = esi + esi * 2;
    PUSH32(esp, ecx);
    esi = esi * 4 + 0x85D7B8;
    MEM32(0x85D5B4) = eax;
    PUSH32(esp, 0); sub_001310D0(); /* call 0x001310D0 */

loc_0012E34E: ;
    (void)0; /* test LO8(eax), LO8(eax) - flags set for next jcc */
    POP32(esp, esi);
    SET_LO8(eax, (TEST_NZ(LO8(eax), LO8(eax))) ? 1 : 0); /* setne */
    POP32(esp, ebx);
    esp += 4; return; /* ret */

}

/**
 * sub_0012E360
 * Original: 0x0012E360 - 0x0012E36D (13 bytes, 5 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0012E360(void)
{
    int _flags = 0; /* fallback flag var */

loc_0012E360: ;
    ecx = MEM32(0x8493BC);
    if (TEST_NZ(ecx, ecx)) { sub_0012E36D(); return; } /* jne: not equal / not zero */

loc_0012E36A: ;
    SET_LO8(eax, 0); /* xor self */
    esp += 4; return; /* ret */

}

/**
 * sub_0012E3D0
 * Original: 0x0012E3D0 - 0x0012E40B (59 bytes, 19 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0012E3D0(void)
{
    int _flags = 0; /* fallback flag var */

loc_0012E3D0: ;
    eax = MEM32(0x8493C4);
    if (TEST_NZ(eax, eax)) goto loc_0012E405; /* jne: not equal / not zero */

loc_0012E3D9: ;
    PUSH32(esp, 0x570);
    PUSH32(esp, 0); sub_00130BC0(); /* call 0x00130BC0 */

loc_0012E3E3: ;
    esp = esp + 4;
    if (TEST_Z(eax, eax)) goto loc_0012E3FE; /* je: equal / zero */

loc_0012E3EA: ;
    PUSH32(esp, ebx);
    ebx = eax;
    PUSH32(esp, 0); sub_0012D160(); /* call 0x0012D160 */

loc_0012E3F2: ;
    POP32(esp, ebx);
    MEM32(0x8493C4) = eax;
    MEM32(0x85D5B4) = eax;
    esp += 4; return; /* ret */

loc_0012E3FE: ;
    eax = 0; /* xor self */
    MEM32(0x8493C4) = eax;

loc_0012E405: ;
    MEM32(0x85D5B4) = eax;
    esp += 4; return; /* ret */

}

/**
 * sub_0012E410
 * Original: 0x0012E410 - 0x0012E5F6 (486 bytes, 136 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0012E410(void)
{
    uint32_t ebp;
    int _flags = 0; /* fallback flag var */
    int _fpu_cmp = 0; /* FPU compare result: -1/0/1 */
    float xmm0, xmm1, xmm2, xmm3;
    double _fp_stack[8];
    int _fp_top = 0;
    #define fp_push(v) (_fp_stack[--_fp_top & 7] = (v))
    #define fp_pop() (_fp_top++)
    #define fp_popp() (fp_pop())
    #define fp_top() _fp_stack[_fp_top & 7]
    #define fp_st1() _fp_stack[(_fp_top + 1) & 7]
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_0012E410: ;
    esp = esp - 0x40;
    eax = MEM32(0x85D5B4);
    ecx = edi + 0x28;
    edx = MEM32(ecx);
    PUSH32(esp, ebx);
    PUSH32(esp, ebp);
    ebp = eax;
    MEM32(esp + 0x20) = edx;
    edx = MEM32(ecx + 4);
    ecx = MEM32(ecx + 8);
    eax = eax + 0x90;
    MEM32(esp + 0x24) = edx;
    MEM32(esp + 8) = eax;
    edx = esp + 0x20;
    eax = esp + 0x2C;
    PUSH32(esp, esi);
    MEM32(esp + 0x2C) = ecx;
    MEM32(esp + 0x14) = edx;
    MEM32(esp + 0x10) = eax;
    ecx = MEM32(esp + 0x14);
    xmm0 = MEMF(ecx); /* movss */
    xmm0 = MEMD(ecx + 4); /* movhps */
    edx = MEM32(esp + 0xC);
    xmm1 = MEMF(edx); /* movss */
    xmm1 = MEMD(edx + 4); /* movhps */
    /* subps: xmm0 -= xmm1 (packed 4xfloat) */
    eax = MEM32(esp + 0x10);
    MEMF(eax) = xmm0; /* movss */
    MEMD(eax + 4) = xmm0; /* movhps */
    esi = MEM32(edi + 8);
    eax = esi;
    eax = eax & 3;
    eax--;
    if ((eax == 0)) goto loc_0012E494; /* je: equal / zero */

loc_0012E47F: ;
    eax--;
    if ((eax == 0)) goto loc_0012E485; /* je: equal / zero */

loc_0012E482: ;
    eax--;
    if ((eax != 0)) goto loc_0012E4AB; /* jne: not equal / not zero */

loc_0012E485: ;
    eax = esp + 0x30;
    ebx = esp + 0x18;
    PUSH32(esp, 0); sub_00428323(); /* call 0x00428323 */

loc_0012E492: ;
    goto loc_0012E4AB;

loc_0012E494: ;
    ecx = edi + 0x1C;
    edx = MEM32(ecx);
    eax = MEM32(ecx + 4);
    ecx = MEM32(ecx + 8);
    MEM32(esp + 0x18) = edx;
    MEM32(esp + 0x1C) = eax;
    MEM32(esp + 0x20) = ecx;

loc_0012E4AB: ;
    edx = edi + 0x34;
    eax = MEM32(edx);
    ecx = MEM32(edx + 4);
    edx = MEM32(edx + 8);
    MEM32(esp + 0x40) = eax;
    eax = esp + 0x30;
    MEM32(esp + 0x44) = ecx;
    MEM32(esp + 0x48) = edx;
    MEM32(esp + 0x14) = eax;
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
    MEMF(esp + 0x10) = xmm1; /* movss */
    xmm1 = MEMF(0x648D14); /* movss */
    esi = esi & 0xC;
    (void)0; /* cmp esi, 4 - flags set for next jcc */
    xmm0 = xmm1; /* movaps */
    MEMF(esp + 0xC) = xmm0; /* movss */
    if (CMP_EQ(esi, 4)) goto loc_0012E529; /* je: equal / zero */

loc_0012E50C: ;
    if (CMP_NE(esi, 8)) goto loc_0012E551; /* jne: not equal / not zero */

loc_0012E511: ;
    xmm2 = MEMF(esp + 0x10); /* movss */
    xmm2 = xmm2 * MEMF(esp + 0x48); /* mulss */
    xmm0 = xmm0 / xmm2; /* divss */
    MEMF(esp + 0xC) = xmm0; /* movss */
    goto loc_0012E543;

loc_0012E529: ;
    fp_push(MEMF(esp + 0x10)); /* fld float */
    fp_top() = sqrt(fp_top()); /* fsqrt */
    fp_st1() *= fp_top(); fp_pop(); /* fmul */
    /* FPU: fdivr dword ptr [0x648d14] */
    MEMF(esp + 0xC) = (float)fp_top(); fp_popp(); /* fstp */
    xmm0 = MEMF(esp + 0xC); /* movss */

loc_0012E543: ;
    /* comiss xmm0, xmm1 - sets EFLAGS */
    if ((xmm0 <= xmm1)) goto loc_0012E551; /* jbe: below or equal (unsigned <=) */

loc_0012E548: ;
    xmm0 = xmm1; /* movaps */
    MEMF(esp + 0xC) = xmm0; /* movss */

loc_0012E551: ;
    fp_push(MEMF(esp + 0xC)); /* fld float */
    xmm1 = MEMF(edi + 0xC); /* movss */
    fp_top() = fabs(fp_top()); /* fabs */
    MEMF(esp + 0x30) = xmm1; /* movss */
    xmm1 = MEMF(edi + 0x10); /* movss */
    fp_push(MEMF(0x648D54)); /* fld float */
    MEMF(esp + 0x34) = xmm1; /* movss */
    xmm1 = MEMF(edi + 0x14); /* movss */
    _fpu_cmp = (fp_top() < fp_st1()) ? -1 : (fp_top() > fp_st1()) ? 1 : 0; fp_pop(); /* fcompi */
    /* fstp st(0) */
    MEMF(esp + 0x38) = xmm1; /* movss */
    if ((_fpu_cmp > 0) /* fcompi */) goto loc_0012E5EF; /* ja: above (unsigned >) */

loc_0012E584: ;
    ecx = ebp + 0xA0;
    edx = esp + 0x18;
    eax = esp + 0x40;
    MEM32(esp + 0x10) = ecx;
    MEM32(esp + 0xC) = edx;
    MEM32(esp + 0x14) = eax;
    eax = MEM32(esp + 0xC);
    xmm2 = MEMF(eax); /* movss */
    ecx = MEM32(esp + 0x10);
    /* shufps xmm2, xmm2, 0 */
    /* mulps: xmm2 *= MEMF(ecx) (packed 4xfloat) */
    xmm1 = MEMF(eax + 4); /* movss */
    /* shufps xmm1, xmm1, 0 */
    /* mulps: xmm1 *= MEMF(ecx + 0x10) (packed 4xfloat) */
    xmm3 = MEMF(eax + 8); /* movss */
    /* shufps xmm3, xmm3, 0 */
    /* mulps: xmm3 *= MEMF(ecx + 0x20) (packed 4xfloat) */
    /* addps: xmm2 += xmm1 (packed 4xfloat) */
    eax = MEM32(esp + 0x14);
    /* addps: xmm2 += xmm3 (packed 4xfloat) */
    MEMD(eax) = xmm2; /* movlps */
    /* TODO: movhlps xmm2, xmm2 */
    MEMF(eax + 8) = xmm2; /* movss */
    ecx = esp + 0x40;
    edx = esp + 0x30;
    eax = ebp;
    PUSH32(esp, 0); sub_0012C9D0(); /* call 0x0012C9D0 */

loc_0012E5EF: ;
    POP32(esp, esi);
    POP32(esp, ebp);
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
 * sub_0012E600
 * Original: 0x0012E600 - 0x0012E645 (69 bytes, 20 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0012E600(void)
{
    uint32_t ebp;
    int _flags = 0; /* fallback flag var */
    float xmm0, xmm1, xmm4;
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_0012E600: ;
    esp = esp - 0x7C;
    eax = MEM32(0x85D5B4);
    xmm4 = 0.0f; /* xorps self = zero */
    PUSH32(esp, ebx);
    PUSH32(esp, ebp);
    ebp = MEM32(esp + 0x88);
    xmm0 = MEMF(ebp + 0xC); /* movss */
    xmm0 = xmm0 - MEMF(eax + 0x90); /* subss */
    PUSH32(esp, esi);
    PUSH32(esp, edi);
    edi = ebp + 0xC;
    esi = eax + 0x90;
    xmm1 = xmm0; /* movaps */
    ebx = eax;
    xmm1 = xmm1 * xmm0; /* mulss */
    /* comiss xmm4, xmm1 - sets EFLAGS */
    MEM32(esp + 0x1C) = ebx;
    if ((xmm4 < xmm1)) { sub_0012E645(); return; } /* jb: below (unsigned <) */

loc_0012E63E: ;
    ecx = 1;
    g_seh_ebp = ebp; sub_0012E647(); return; /* tail jmp 0x0012E647 */

}

/**
 * sub_0012E940
 * Original: 0x0012E940 - 0x0012E997 (87 bytes, 30 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0012E940(void)
{
    int _flags = 0; /* fallback flag var */

loc_0012E940: ;
    PUSH32(esp, ecx);
    edx = MEM32(0x85D5B4);
    PUSH32(esp, ebx);
    PUSH32(esp, esi);
    ebx = 0; /* xor self */
    PUSH32(esp, edi);
    eax = 0; /* xor self */
    ecx = 0x24;
    edi = edx;
    MEM32(edx + 0xE0) = ebx;
    { uint32_t _i; for (_i = 0; _i < ecx; _i++) MEM32(edi + _i*4) = eax; }
    edi += ecx * 4; ecx = 0; /* rep stosd */
    eax = MEM32(0x774140);
    (void)0; /* cmp eax, ebx - flags set for next jcc */
    MEM8(edx + 0x338) = 1;
    MEM8(0x8493C2) = LO8(ebx);
    esi = eax;
    if (CMP_EQ(eax, ebx)) goto loc_0012E98C; /* je: equal / zero */

loc_0012E975: ;
    PUSH32(esp, eax);
    PUSH32(esp, 0); sub_0012E9A0(); /* call 0x0012E9A0 */

loc_0012E97B: ;
    eax = esp + 0xC;
    PUSH32(esp, eax);
    MEM32(esp + 0x10) = esi;
    PUSH32(esp, 0); sub_002AF1C0(); /* call 0x002AF1C0 */

loc_0012E989: ;
    esp = esp + 4;

loc_0012E98C: ;
    POP32(esp, edi);
    POP32(esp, esi);
    MEM32(0x774140) = ebx;
    POP32(esp, ebx);
    POP32(esp, ecx);
    esp += 4; return; /* ret */

}

/**
 * sub_0012E9A0
 * Original: 0x0012E9A0 - 0x0012EAAC (268 bytes, 77 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0012E9A0(void)
{
    uint32_t ebp;
    int _flags = 0; /* fallback flag var */
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_0012E9A0: ;
    PUSH32(esp, ebx);
    PUSH32(esp, ebp);
    ebp = MEM32(esp + 0xC);
    PUSH32(esp, esi);
    PUSH32(esp, edi);
    edi = ebp + 0xA7C;
    ebx = 0x43;

loc_0012E9B3: ;
    esi = MEM32(edi + -20);
    edi = edi - 0x14;
    if (TEST_Z(esi, esi)) goto loc_0012E9E8; /* je: equal / zero */

loc_0012E9BD: ;
    PUSH32(esp, esi);
    PUSH32(esp, 0); sub_0042C911(); /* call 0x0042C911 */

loc_0012E9C3: ;
    if (TEST_NZ(eax, eax)) goto loc_0012E9E8; /* jne: not equal / not zero */

loc_0012E9C7: ;
    eax = MEM32(0x7FA490);
    edx = MEM32(0x7FA4B4);
    eax++;
    edx--;
    PUSH32(esp, esi);
    MEM32(0x7FA490) = eax;
    MEM32(0x7FA4B4) = edx;
    PUSH32(esp, 0); sub_003E7080(); /* call 0x003E7080 */

loc_0012E9E5: ;
    esp = esp + 4;

loc_0012E9E8: ;
    if (TEST_NZ(MEM8(0x875E00), 1)) goto loc_0012EA0E; /* jne: not equal / not zero */

loc_0012E9F1: ;
    MEM32(0x875E00) = MEM32(0x875E00) | 1;
    eax = MEM32(0x7F9F60);
    MEM32(0x875DF4) = eax;
    eax = 0; /* xor self */
    MEM32(0x875DF8) = eax;
    MEM32(0x875DFC) = eax;

loc_0012EA0E: ;
    ecx = MEM32(0x875DFC);
    ecx--;
    ebx--;
    MEM32(0x875DFC) = ecx;
    if ((ebx != 0)) goto loc_0012E9B3; /* jne: not equal / not zero */

loc_0012EA1E: ;
    edi = ebp + 0x540;
    ebx = 0x43;
    /* nop */

loc_0012EA30: ;
    esi = MEM32(edi + -20);
    edi = edi - 0x14;
    if (TEST_Z(esi, esi)) goto loc_0012EA67; /* je: equal / zero */

loc_0012EA3A: ;
    PUSH32(esp, esi);
    PUSH32(esp, 0); sub_0042C911(); /* call 0x0042C911 */

loc_0012EA40: ;
    if (TEST_NZ(eax, eax)) goto loc_0012EA67; /* jne: not equal / not zero */

loc_0012EA44: ;
    ebp = MEM32(0x7FA490);
    edx = MEM32(0x7FA4B4);
    ebp++;
    edx--;
    PUSH32(esp, esi);
    MEM32(0x7FA490) = ebp;
    MEM32(0x7FA4B4) = edx;
    PUSH32(esp, 0); sub_003E7080(); /* call 0x003E7080 */

loc_0012EA64: ;
    esp = esp + 4;

loc_0012EA67: ;
    if (TEST_NZ(MEM8(0x875E00), 1)) goto loc_0012EA95; /* jne: not equal / not zero */

loc_0012EA70: ;
    eax = MEM32(0x875E00);
    ecx = MEM32(0x7F9F60);
    eax = eax | 1;
    MEM32(0x875E00) = eax;
    eax = 0; /* xor self */
    MEM32(0x875DF4) = ecx;
    MEM32(0x875DF8) = eax;
    MEM32(0x875DFC) = eax;

loc_0012EA95: ;
    ecx = MEM32(0x875DFC);
    ecx--;
    ebx--;
    MEM32(0x875DFC) = ecx;
    if ((ebx != 0)) goto loc_0012EA30; /* jne: not equal / not zero */

loc_0012EAA5: ;
    POP32(esp, edi);
    POP32(esp, esi);
    POP32(esp, ebp);
    POP32(esp, ebx);
    esp += 8; return; /* ret 4 */

}

/**
 * sub_0012EAB0
 * Original: 0x0012EAB0 - 0x0012EAF5 (69 bytes, 20 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0012EAB0(void)
{
    uint32_t ebp;
    int _flags = 0; /* fallback flag var */
    float xmm0, xmm1, xmm4;
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_0012EAB0: ;
    esp = esp - 0x7C;
    eax = MEM32(0x85D5B4);
    xmm4 = 0.0f; /* xorps self = zero */
    PUSH32(esp, ebx);
    PUSH32(esp, ebp);
    ebp = MEM32(esp + 0x88);
    xmm0 = MEMF(ebp + 0xC); /* movss */
    xmm0 = xmm0 - MEMF(eax + 0x90); /* subss */
    PUSH32(esp, esi);
    PUSH32(esp, edi);
    edi = ebp + 0xC;
    esi = eax + 0x90;
    xmm1 = xmm0; /* movaps */
    ebx = eax;
    xmm1 = xmm1 * xmm0; /* mulss */
    /* comiss xmm4, xmm1 - sets EFLAGS */
    MEM32(esp + 0x1C) = ebx;
    if ((xmm4 < xmm1)) { sub_0012EAF5(); return; } /* jb: below (unsigned <) */

loc_0012EAEE: ;
    ecx = 1;
    g_seh_ebp = ebp; sub_0012EAF7(); return; /* tail jmp 0x0012EAF7 */

}

/**
 * sub_0012EDB0
 * Original: 0x0012EDB0 - 0x0012EE64 (180 bytes, 48 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0012EDB0(void)
{
    int _flags = 0; /* fallback flag var */
    int _fpu_cmp = 0; /* FPU compare result: -1/0/1 */
    float xmm0, xmm1, xmm2, xmm3;
    double _fp_stack[8];
    int _fp_top = 0;
    #define fp_push(v) (_fp_stack[--_fp_top & 7] = (v))
    #define fp_pop() (_fp_top++)
    #define fp_popp() (fp_pop())
    #define fp_top() _fp_stack[_fp_top & 7]
    #define fp_st1() _fp_stack[(_fp_top + 1) & 7]

loc_0012EDB0: ;
    esp = esp - 0x28;
    fp_push(MEMF(eax + 0xC)); /* fld float */
    xmm0 = MEMF(eax); /* movss */
    ecx = MEM32(0x85D5B4);
    fp_top() = -fp_top(); /* fchs */
    MEMF(esp) = (float)fp_top(); fp_pop(); /* fst */
    MEMF(esp + 0x10) = xmm0; /* movss */
    xmm0 = MEMF(eax + 4); /* movss */
    fp_top() = fabs(fp_top()); /* fabs */
    fp_push(MEMF(0x648D54)); /* fld float */
    MEMF(esp + 0x14) = xmm0; /* movss */
    xmm0 = MEMF(eax + 8); /* movss */
    PUSH32(esp, esi);
    _fpu_cmp = (fp_top() < fp_st1()) ? -1 : (fp_top() > fp_st1()) ? 1 : 0; fp_pop(); /* fcompi */
    /* fstp st(0) */
    esi = ecx;
    MEMF(esp + 0x1C) = xmm0; /* movss */
    if ((_fpu_cmp > 0) /* fcompi */) goto loc_0012EE5F; /* ja: above (unsigned >) */

loc_0012EDF2: ;
    ecx = ecx + 0xA0;
    MEM32(esp + 0xC) = ecx;
    eax = esp + 0x14;
    ecx = esp + 0x20;
    MEM32(esp + 0x10) = eax;
    MEM32(esp + 8) = ecx;
    eax = MEM32(esp + 0x10);
    xmm2 = MEMF(eax); /* movss */
    ecx = MEM32(esp + 0xC);
    /* shufps xmm2, xmm2, 0 */
    /* mulps: xmm2 *= MEMF(ecx) (packed 4xfloat) */
    xmm1 = MEMF(eax + 4); /* movss */
    /* shufps xmm1, xmm1, 0 */
    /* mulps: xmm1 *= MEMF(ecx + 0x10) (packed 4xfloat) */
    xmm3 = MEMF(eax + 8); /* movss */
    /* shufps xmm3, xmm3, 0 */
    /* mulps: xmm3 *= MEMF(ecx + 0x20) (packed 4xfloat) */
    /* addps: xmm2 += xmm1 (packed 4xfloat) */
    eax = MEM32(esp + 8);
    /* addps: xmm2 += xmm3 (packed 4xfloat) */
    MEMD(eax) = xmm2; /* movlps */
    /* TODO: movhlps xmm2, xmm2 */
    MEMF(eax + 8) = xmm2; /* movss */
    xmm0 = MEMF(esp + 4); /* movss */
    ecx = esp + 0x20;
    eax = esi;
    PUSH32(esp, 0); sub_0012C9D0(); /* call 0x0012C9D0 */

loc_0012EE5F: ;
    POP32(esp, esi);
    esp = esp + 0x28;
    esp += 4; return; /* ret */

    #undef fp_push
    #undef fp_pop
    #undef fp_popp
    #undef fp_top
    #undef fp_st1
}

/**
 * sub_0012EE70
 * Original: 0x0012EE70 - 0x0012EEB3 (67 bytes, 20 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0012EE70(void)
{
    uint32_t ebp;
    int _flags = 0; /* fallback flag var */
    float xmm0, xmm1, xmm4;
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_0012EE70: ;
    esp = esp - 0x6C;
    xmm4 = 0.0f; /* xorps self = zero */
    PUSH32(esp, ebx);
    PUSH32(esp, ebp);
    ebp = MEM32(esp + 0x78);
    xmm0 = MEMF(ebp + 0xC); /* movss */
    PUSH32(esp, esi);
    esi = MEM32(0x85D5B4);
    xmm0 = xmm0 - MEMF(esi + 0x90); /* subss */
    PUSH32(esp, edi);
    ebx = esi;
    esi = esi + 0x90;
    edi = ebp + 0xC;
    xmm1 = xmm0; /* movaps */
    xmm1 = xmm1 * xmm0; /* mulss */
    /* comiss xmm4, xmm1 - sets EFLAGS */
    MEM32(esp + 0x18) = ebx;
    if ((xmm4 < xmm1)) { sub_0012EEB3(); return; } /* jb: below (unsigned <) */

loc_0012EEAC: ;
    ecx = 1;
    g_seh_ebp = ebp; sub_0012EEB5(); return; /* tail jmp 0x0012EEB5 */

}

/**
 * sub_0012F160
 * Original: 0x0012F160 - 0x0012F1CE (110 bytes, 31 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0012F160(void)
{
    float xmm1, xmm2, xmm3;

loc_0012F160: ;
    esp = esp - 0x14;
    eax = MEM32(0x85D5B4);
    PUSH32(esp, esi);
    esi = eax;
    eax = eax + 0xA0;
    MEM32(esp + 8) = eax;
    eax = esp + 0xC;
    MEM32(esp + 4) = eax;
    eax = MEM32(esp + 0x1C);
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
    eax = MEM32(esp + 4);
    /* addps: xmm2 += xmm3 (packed 4xfloat) */
    MEMD(eax) = xmm2; /* movlps */
    /* TODO: movhlps xmm2, xmm2 */
    MEMF(eax + 8) = xmm2; /* movss */
    eax = esp + 0xC;
    ecx = esi;
    PUSH32(esp, 0); sub_0012CDB0(); /* call 0x0012CDB0 */

loc_0012F1C9: ;
    POP32(esp, esi);
    esp = esp + 0x14;
    esp += 4; return; /* ret */

}

/**
 * sub_0012F1D0
 * Original: 0x0012F1D0 - 0x0012F20F (63 bytes, 25 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0012F1D0(void)
{
    uint32_t ebp;

loc_0012F1D0: ;
    PUSH32(esp, ebp);
    ebp = esp;
    esp = esp & 0xFFFFFFF0u;
    esp = esp - 0x4C;
    eax = MEM32(ebp + 0xC);
    ecx = MEM32(ebp + 8);
    PUSH32(esp, esi);
    esi = MEM32(0x85D5B4);
    PUSH32(esp, 0);
    PUSH32(esp, eax);
    PUSH32(esp, ecx);
    eax = esp + 0x1C;
    edx = 0; /* xor self */
    PUSH32(esp, 0); sub_003E48E0(); /* call 0x003E48E0 */

loc_0012F1F5: ;
    esp = esp + 0xC;
    eax = esi + 0xA0;
    edx = esp + 0x10;
    PUSH32(esp, edx);
    PUSH32(esp, eax);
    PUSH32(esp, eax);
    PUSH32(esp, 0); sub_0042841D(); /* call 0x0042841D */

loc_0012F20A: ;
    POP32(esp, esi);
    esp = ebp;
    POP32(esp, ebp);
    esp += 4; return; /* ret */

}

/**
 * sub_0012F210
 * Original: 0x0012F210 - 0x0012F242 (50 bytes, 13 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0012F210(void)
{
    int _flags = 0; /* fallback flag var */
    float xmm0;

loc_0012F210: ;
    esp = esp - 0xC;
    /* ucomiss xmm0, MEMF(0x648D14) - sets EFLAGS */
    /* lahf - load AH from flags (used in FPU compare idiom) */
    if (1 /* jnp after test - parity */) goto loc_0012F23E; /* jnp: not parity */

loc_0012F220: ;
    eax = MEM32(0x85D5B4);
    edx = esp;
    MEMF(esp) = xmm0; /* movss */
    MEMF(esp + 4) = xmm0; /* movss */
    MEMF(esp + 8) = xmm0; /* movss */
    PUSH32(esp, 0); sub_0012D1A0(); /* call 0x0012D1A0 */

loc_0012F23E: ;
    esp = esp + 0xC;
    esp += 4; return; /* ret */

}

/**
 * sub_0012F250
 * Original: 0x0012F250 - 0x0012F4F3 (675 bytes, 145 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0012F250(void)
{
    uint32_t ebp;
    float xmm0, xmm1, xmm2, xmm3, xmm4, xmm5, xmm6, xmm7;
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_0012F250: ;
    xmm0 = MEMF(0x649170); /* movss */
    xmm1 = MEMF(0x649190); /* movss */
    xmm7 = MEMF(0x649174); /* movss */
    esp = esp - 0x30;
    PUSH32(esp, ebx);
    ebx = MEM32(esp + 0x38);
    PUSH32(esp, ebp);
    PUSH32(esp, esi);
    esi = MEM32(0x85D5B4);
    PUSH32(esp, edi);
    ebp = esi;
    ecx = 0xC;
    edi = esp + 0x10;
    memcpy((void*)XBOX_PTR(edi), (void*)XBOX_PTR(esi), ecx * 4);
    esi += ecx * 4; edi += ecx * 4; ecx = 0; /* rep movsd */
    xmm3 = MEMF(esp + 0x20); /* movss */
    xmm2 = MEMF(esp + 0x30); /* movss */
    xmm4 = MEMF(esp + 0x2C); /* movss */
    xmm5 = MEMF(esp + 0x1C); /* movss */
    xmm2 = xmm2 * xmm0; /* mulss */
    MEMF(ebx) = xmm2; /* movss */
    xmm4 = xmm4 * xmm0; /* mulss */
    MEMF(ebx + 0x20) = xmm4; /* movss */
    MEMF(ebx + 8) = xmm4; /* movss */
    xmm4 = MEMF(esp + 0x28); /* movss */
    xmm3 = xmm3 * xmm0; /* mulss */
    MEMF(ebx + 0x10) = xmm3; /* movss */
    MEMF(ebx + 4) = xmm3; /* movss */
    xmm3 = 0.0f; /* xorps self = zero */
    xmm6 = xmm3; /* movaps */
    xmm6 = xmm6 - xmm2; /* subss */
    xmm2 = MEMF(esp + 0x24); /* movss */
    xmm2 = xmm2 * xmm0; /* mulss */
    MEMF(ebx + 0x24) = xmm2; /* movss */
    MEMF(ebx + 0x18) = xmm2; /* movss */
    MEMF(ebx + 0x14) = xmm6; /* movss */
    xmm6 = MEMF(esp + 0x14); /* movss */
    xmm2 = xmm4; /* movaps */
    xmm4 = xmm4 * MEMF(0x649168); /* mulss */
    xmm2 = xmm2 * xmm7; /* mulss */
    MEMF(ebx + 0x28) = xmm2; /* movss */
    xmm2 = MEMF(esp + 0x18); /* movss */
    xmm2 = xmm2 * xmm1; /* mulss */
    MEMF(ebx + 0x38) = xmm2; /* movss */
    MEMF(ebx + 0x2C) = xmm2; /* movss */
    xmm2 = MEMF(esp + 0x10); /* movss */
    xmm2 = xmm2 * MEMF(0x64916C); /* mulss */
    xmm2 = xmm2 - xmm4; /* subss */
    MEMF(ebx + 0x3C) = xmm2; /* movss */
    xmm5 = xmm5 * xmm1; /* mulss */
    MEMF(ebx + 0x30) = xmm5; /* movss */
    MEMF(ebx + 0xC) = xmm5; /* movss */
    xmm6 = xmm6 * xmm1; /* mulss */
    MEMF(ebx + 0x34) = xmm6; /* movss */
    MEMF(ebx + 0x1C) = xmm6; /* movss */
    esi = ebp + 0x30;
    ecx = 0xC;
    edi = esp + 0x10;
    memcpy((void*)XBOX_PTR(edi), (void*)XBOX_PTR(esi), ecx * 4);
    esi += ecx * 4; edi += ecx * 4; ecx = 0; /* rep movsd */
    xmm4 = MEMF(esp + 0x20); /* movss */
    xmm2 = MEMF(esp + 0x30); /* movss */
    xmm5 = MEMF(esp + 0x2C); /* movss */
    xmm6 = MEMF(esp + 0x1C); /* movss */
    xmm4 = xmm4 * xmm0; /* mulss */
    MEMF(edx + 0x10) = xmm4; /* movss */
    MEMF(edx + 4) = xmm4; /* movss */
    xmm2 = xmm2 * xmm0; /* mulss */
    xmm4 = xmm3; /* movaps */
    xmm4 = xmm4 - xmm2; /* subss */
    MEMF(edx) = xmm2; /* movss */
    xmm2 = MEMF(esp + 0x24); /* movss */
    MEMF(edx + 0x14) = xmm4; /* movss */
    xmm4 = MEMF(esp + 0x14); /* movss */
    xmm5 = xmm5 * xmm0; /* mulss */
    xmm6 = xmm6 * xmm1; /* mulss */
    xmm2 = xmm2 * xmm0; /* mulss */
    xmm4 = xmm4 * xmm1; /* mulss */
    MEMF(edx + 0x20) = xmm5; /* movss */
    MEMF(edx + 0x30) = xmm6; /* movss */
    MEMF(edx + 0x24) = xmm2; /* movss */
    MEMF(edx + 0x34) = xmm4; /* movss */
    MEMF(edx + 8) = xmm5; /* movss */
    xmm5 = MEMF(esp + 0x28); /* movss */
    MEMF(edx + 0x18) = xmm2; /* movss */
    MEMF(edx + 0xC) = xmm6; /* movss */
    MEMF(edx + 0x1C) = xmm4; /* movss */
    xmm2 = xmm5; /* movaps */
    xmm5 = xmm5 * MEMF(0x649168); /* mulss */
    xmm2 = xmm2 * xmm7; /* mulss */
    MEMF(edx + 0x28) = xmm2; /* movss */
    xmm2 = MEMF(esp + 0x18); /* movss */
    xmm2 = xmm2 * xmm1; /* mulss */
    MEMF(edx + 0x38) = xmm2; /* movss */
    MEMF(edx + 0x2C) = xmm2; /* movss */
    xmm2 = MEMF(esp + 0x10); /* movss */
    xmm2 = xmm2 * MEMF(0x64916C); /* mulss */
    xmm2 = xmm2 - xmm5; /* subss */
    MEMF(edx + 0x3C) = xmm2; /* movss */
    esi = ebp + 0x60;
    ecx = 0xC;
    edi = esp + 0x10;
    memcpy((void*)XBOX_PTR(edi), (void*)XBOX_PTR(esi), ecx * 4);
    esi += ecx * 4; edi += ecx * 4; ecx = 0; /* rep movsd */
    xmm2 = MEMF(esp + 0x30); /* movss */
    xmm4 = MEMF(esp + 0x20); /* movss */
    xmm5 = MEMF(esp + 0x2C); /* movss */
    xmm6 = MEMF(esp + 0x1C); /* movss */
    xmm2 = xmm2 * xmm0; /* mulss */
    xmm3 = xmm3 - xmm2; /* subss */
    MEMF(eax) = xmm2; /* movss */
    xmm2 = MEMF(esp + 0x24); /* movss */
    xmm2 = xmm2 * xmm0; /* mulss */
    xmm4 = xmm4 * xmm0; /* mulss */
    xmm5 = xmm5 * xmm0; /* mulss */
    xmm0 = MEMF(esp + 0x14); /* movss */
    MEMF(eax + 0x24) = xmm2; /* movss */
    xmm0 = xmm0 * xmm1; /* mulss */
    MEMF(eax + 0x18) = xmm2; /* movss */
    MEMF(eax + 0x14) = xmm3; /* movss */
    xmm3 = MEMF(esp + 0x28); /* movss */
    POP32(esp, edi);
    MEMF(eax + 0x34) = xmm0; /* movss */
    xmm2 = xmm3; /* movaps */
    xmm3 = xmm3 * MEMF(0x649168); /* mulss */
    xmm2 = xmm2 * xmm7; /* mulss */
    MEMF(eax + 0x1C) = xmm0; /* movss */
    xmm0 = MEMF(esp + 0xC); /* movss */
    xmm0 = xmm0 * MEMF(0x64916C); /* mulss */
    POP32(esp, esi);
    MEMF(eax + 0x28) = xmm2; /* movss */
    xmm2 = MEMF(esp + 0x10); /* movss */
    xmm6 = xmm6 * xmm1; /* mulss */
    xmm2 = xmm2 * xmm1; /* mulss */
    POP32(esp, ebp);
    xmm0 = xmm0 - xmm3; /* subss */
    MEMF(eax + 0x10) = xmm4; /* movss */
    MEMF(eax + 0x20) = xmm5; /* movss */
    MEMF(eax + 0x30) = xmm6; /* movss */
    MEMF(eax + 4) = xmm4; /* movss */
    MEMF(eax + 8) = xmm5; /* movss */
    MEMF(eax + 0x38) = xmm2; /* movss */
    MEMF(eax + 0xC) = xmm6; /* movss */
    MEMF(eax + 0x2C) = xmm2; /* movss */
    MEMF(eax + 0x3C) = xmm0; /* movss */
    POP32(esp, ebx);
    esp = esp + 0x30;
    esp += 4; return; /* ret */

}

/**
 * sub_0012F500
 * Original: 0x0012F500 - 0x0012F56C (108 bytes, 29 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0012F500(void)
{
    uint32_t ebp;
    int _flags = 0; /* fallback flag var */
    float xmm0, xmm6;

loc_0012F500: ;
    PUSH32(esp, ebp);
    ebp = esp;
    esp = esp & 0xFFFFFFF0u;
    esp = esp - 0x144;
    (void)0; /* test eax, eax - flags set for next jcc */
    PUSH32(esp, ebx);
    SET_LO8(ebx, MEM8(ebp + 0x10));
    PUSH32(esp, esi);
    PUSH32(esp, edi);
    if (CMP_LE(eax & eax, 0)) { sub_0012F56C(); return; } /* jle: less or equal (signed <=) */

loc_0012F516: ;
    esi = MEM32(0x85D5B4);
    eax = esp + 0x74;
    PUSH32(esp, eax);
    ecx = esp + 0x2C;
    PUSH32(esp, ecx);
    edx = esp + 0x14C;
    PUSH32(esp, edx);
    edi = 0; /* xor self */
    PUSH32(esp, 0); sub_0012DCD0(); /* call 0x0012DCD0 */

loc_0012F535: ;
    xmm0 = MEMF(esp + 0x74); /* movss */
    xmm6 = 0.0f; /* xorps self = zero */
    MEMF(esp + 0x18) = xmm0; /* movss */
    xmm0 = MEMF(esp + 0x78); /* movss */
    MEMF(esp + 0x1C) = xmm0; /* movss */
    xmm0 = MEMF(esp + 0x7C); /* movss */
    MEMF(esp + 0x20) = xmm0; /* movss */
    xmm0 = MEMF(0x648D80); /* movss */
    MEMF(esp + 0x24) = xmm0; /* movss */
    g_seh_ebp = ebp; sub_0012F5A9(); return; /* tail jmp 0x0012F5A9 */

}

/**
 * sub_0012FAC0
 * Original: 0x0012FAC0 - 0x0012FB5E (158 bytes, 41 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0012FAC0(void)
{
    int _flags = 0; /* fallback flag var */
    float xmm0;

loc_0012FAC0: ;
    esp = esp - 0x40;
    xmm0 = 0.0f; /* xorps self = zero */
    PUSH32(esp, edi);
    eax = 0; /* xor self */
    MEMF(esp + 4) = xmm0; /* movss */
    ecx = 0xF;
    edi = esp + 8;
    { uint32_t _i; for (_i = 0; _i < ecx; _i++) MEM32(edi + _i*4) = eax; }
    edi += ecx * 4; ecx = 0; /* rep stosd */
    edx = esp + 4;
    ecx = 0xB3;
    PUSH32(esp, 0); sub_00536AA0(); /* call 0x00536AA0 */

loc_0012FAE8: ;
    edx = esp + 4;
    ecx = 0xB4;
    PUSH32(esp, 0); sub_00536AA0(); /* call 0x00536AA0 */

loc_0012FAF6: ;
    edx = esp + 4;
    ecx = 0xA6;
    PUSH32(esp, 0); sub_00536B50(); /* call 0x00536B50 */

loc_0012FB04: ;
    edx = esp + 4;
    ecx = 0xAA;
    PUSH32(esp, 0); sub_00536B50(); /* call 0x00536B50 */

loc_0012FB12: ;
    edx = esp + 4;
    ecx = 0xAE;
    PUSH32(esp, 0); sub_00536B50(); /* call 0x00536B50 */

loc_0012FB20: ;
    edx = esp + 4;
    ecx = 0xBD;
    PUSH32(esp, 0); sub_00536AA0(); /* call 0x00536AA0 */

loc_0012FB2E: ;
    if (TEST_NZ(MEM8(0x547548), 0x10)) goto loc_0012FB49; /* jne: not equal / not zero */

loc_0012FB37: ;
    PUSH32(esp, esi);
    ecx = 0x30;
    esi = esp + 8;
    edi = 0x54A5B8;
    memcpy((void*)XBOX_PTR(edi), (void*)XBOX_PTR(esi), ecx * 4);
    esi += ecx * 4; edi += ecx * 4; ecx = 0; /* rep movsd */
    POP32(esp, esi);

loc_0012FB49: ;
    PUSH32(esp, 0x30);
    edx = esp + 8;
    ecx = 0x92;
    PUSH32(esp, 0); sub_00536C00(); /* call 0x00536C00 */

loc_0012FB59: ;
    POP32(esp, edi);
    esp = esp + 0x40;
    esp += 4; return; /* ret */

}

/**
 * sub_0012FB60
 * Original: 0x0012FB60 - 0x0012FBAD (77 bytes, 28 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0012FB60(void)
{
    uint32_t ebp;

loc_0012FB60: ;
    PUSH32(esp, ebp);
    ebp = esp;
    esp = esp & 0xFFFFFFF0u;
    esp = esp - 0x4C;
    ecx = MEM32(0x84A13C);
    eax = (uint32_t)((int32_t)eax * (int32_t)0x2B0);
    PUSH32(esp, esi);
    eax = eax + ecx + 0x40;
    ecx = esp + 0xC;
    esi = esp + 0x10;
    PUSH32(esp, 0); sub_0042851B(); /* call 0x0042851B */

loc_0012FB87: ;
    PUSH32(esp, 0x5A0350);
    edx = esi;
    PUSH32(esp, edx);
    eax = esi;
    PUSH32(esp, eax);
    PUSH32(esp, 0); sub_0042841D(); /* call 0x0042841D */

loc_0012FB97: ;
    PUSH32(esp, 0);
    ecx = esi;
    PUSH32(esp, 1);
    PUSH32(esp, ecx);
    eax = 0; /* xor self */
    PUSH32(esp, 0); sub_00083DE0(); /* call 0x00083DE0 */

loc_0012FBA5: ;
    esp = esp + 0xC;
    POP32(esp, esi);
    esp = ebp;
    POP32(esp, ebp);
    esp += 4; return; /* ret */

}

/**
 * sub_0012FBB0
 * Original: 0x0012FBB0 - 0x0012FE55 (677 bytes, 155 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0012FBB0(void)
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

loc_0012FBB0: ;
    esp = esp - 0x58;
    PUSH32(esp, edi);
    edi = MEM32(esp + 0x60);
    PUSH32(esp, 0); sub_0012FAC0(); /* call 0x0012FAC0 */

loc_0012FBBD: ;
    eax = MEM32(0x775EF4);
    ecx = MEM32(0x775EF8);
    edx = MEM32(0x775EFC);
    xmm3 = MEMF(0x648CEC); /* movss */
    xmm5 = MEMF(esi + 0x9C); /* movss */
    MEM32(esp + 0x24) = eax;
    eax = MEM32(esi + 0x330);
    MEM32(esp + 0x28) = ecx;
    ecx = eax;
    ecx = ecx >> 0x10;
    MEM32(esp + 0x2C) = edx;
    edx = ZX8(LO8(ecx));
    ecx = eax;
    ecx = ecx >> 8;
    xmm1 = (float)(int32_t)edx; /* cvtsi2ss */
    edx = ZX8(LO8(ecx));
    eax = ZX8(LO8(eax));
    xmm2 = (float)(int32_t)edx; /* cvtsi2ss */
    xmm0 = (float)(int32_t)eax; /* cvtsi2ss */
    xmm0 = xmm0 * xmm3; /* mulss */
    xmm0 = xmm0 * MEMF(0x648E64); /* mulss */
    xmm1 = xmm1 * xmm3; /* mulss */
    xmm1 = xmm1 * MEMF(0x648D3C); /* mulss */
    xmm2 = xmm2 * xmm3; /* mulss */
    xmm2 = xmm2 * MEMF(0x648D10); /* mulss */
    xmm0 = xmm0 + xmm2; /* addss */
    xmm0 = xmm0 + xmm1; /* addss */
    xmm1 = MEMF(0x648EAC); /* movss */
    /* comiss xmm0, xmm1 - sets EFLAGS */
    MEM32(0x8493CC) = 0;
    if ((xmm0 > xmm1)) goto loc_0012FC55; /* ja: above (unsigned >) */

loc_0012FC52: ;
    xmm0 = xmm1; /* movaps */

loc_0012FC55: ;
    xmm4 = MEMF(0x75DE24); /* movss */
    xmm4 = xmm4 * xmm5; /* mulss */
    xmm5 = 0.0f; /* xorps self = zero */
    xmm4 = xmm4 * xmm0; /* mulss */
    xmm4 = xmm4 * xmm0; /* mulss */
    xmm0 = MEMF(esp + 0x28); /* movss */
    /* comiss xmm0, MEMF(0x648E1C) - sets EFLAGS */
    if ((xmm0 <= MEMF(0x648E1C))) goto loc_0012FCA1; /* jbe: below or equal (unsigned <=) */

loc_0012FC7B: ;
    xmm1 = xmm5; /* movaps */
    xmm1 = xmm1 - xmm0; /* subss */
    xmm1 = xmm1 - MEMF(0x6492EC); /* subss */
    xmm1 = xmm1 * MEMF(0x648D20); /* mulss */
    xmm1 = xmm1 * MEMF(0x75DE20); /* mulss */
    xmm1 = xmm1 * xmm4; /* mulss */
    xmm4 = xmm1; /* movaps */

loc_0012FCA1: ;
    xmm0 = MEMF(esi + 0x78); /* movss */
    PUSH32(esp, edi);
    MEMF(esp + 0x10) = xmm0; /* movss */
    xmm0 = MEMF(esi + 0x294); /* movss */
    ecx = esp + 0x10;
    PUSH32(esp, ecx);
    edx = esp + 0x38;
    MEMF(esp + 0x18) = xmm0; /* movss */
    xmm0 = MEMF(esi + 0x80); /* movss */
    PUSH32(esp, edx);
    MEMF(esp + 0x20) = xmm0; /* movss */
    PUSH32(esp, 0); sub_00428393(); /* call 0x00428393 */

loc_0012FCD8: ;
    eax = MEM32(0x8493BC);
    xmm0 = MEMF(eax + 0x54); /* movss */
    PUSH32(esp, edi);
    ecx = esp + 0x10;
    PUSH32(esp, ecx);
    edx = ecx;
    xmm0 = xmm0 * xmm4; /* mulss */
    xmm0 = xmm0 + MEMF(esp + 0x18); /* addss */
    PUSH32(esp, edx);
    MEMF(esp + 0x1C) = xmm0; /* movss */
    PUSH32(esp, 0); sub_00428393(); /* call 0x00428393 */

loc_0012FD00: ;
    eax = esp + 0x30;
    PUSH32(esp, eax);
    ecx = esp + 0x10;
    PUSH32(esp, ecx);
    PUSH32(esp, 0); sub_003E1EE0(); /* call 0x003E1EE0 */

loc_0012FD0F: ;
    esp = esp + 8;
    /* ucomiss xmm0, xmm5 - sets EFLAGS */
    /* lahf - load AH from flags (used in FPU compare idiom) */
    (void)0; /* test HI8(eax), 0x44 - flags set for next jcc */
    MEMF(esp + 0x58) = xmm0; /* movss */
    POP32(esp, edi);
    if (1 /* jp after test - parity */) goto loc_0012FD30; /* jp: parity */

loc_0012FD22: ;
    xmm0 = MEMF(0x64A48C); /* movss */
    MEMF(esp + 0x54) = xmm0; /* movss */

loc_0012FD30: ;
    (void)0; /* test MEM8(esi + 0x137), 2 - flags set for next jcc */
    fp_push(MEMF(esp + 0x28)); /* fld float */
    fp_st1() += fp_top(); fp_pop(); /* fadd */
    xmm0 = MEMF(0x648D14); /* movss */
    MEMF(esp + 0x18) = xmm0; /* movss */
    MEMF(esp + 0x14) = xmm5; /* movss */
    fp_st1() *= fp_top(); fp_pop(); /* fmul */
    MEMF(esp + 0x1C) = xmm5; /* movss */
    xmm0 = xmm5; /* movaps */
    fp_st1() -= fp_top(); fp_pop(); /* fsub */
    fp_top() = fabs(fp_top()); /* fabs */
    fp_st1() *= fp_top(); fp_pop(); /* fmul */
    /* FPU: fdivr dword ptr [0x648d14] */
    MEMF(esp + 0x54) = (float)fp_top(); fp_popp(); /* fstp */
    if (TEST_NZ(MEM8(esi + 0x137), 2)) goto loc_0012FD7E; /* jne: not equal / not zero */

loc_0012FD78: ;
    xmm0 = MEMF(esp + 0x54); /* movss */

loc_0012FD7E: ;
    edx = esp + 0x14;
    eax = edx;
    MEM32(esp + 4) = edx;
    MEM32(esp) = eax;
    eax = MEM32(esp + 4);
    xmm2 = MEMF(eax); /* movss */
    ecx = MEM32(esp + 0x5C);
    /* shufps xmm2, xmm2, 0 */
    /* mulps: xmm2 *= MEMF(ecx) (packed 4xfloat) */
    xmm1 = MEMF(eax + 4); /* movss */
    /* shufps xmm1, xmm1, 0 */
    /* mulps: xmm1 *= MEMF(ecx + 0x10) (packed 4xfloat) */
    xmm3 = MEMF(eax + 8); /* movss */
    /* shufps xmm3, xmm3, 0 */
    /* mulps: xmm3 *= MEMF(ecx + 0x20) (packed 4xfloat) */
    /* addps: xmm2 += xmm1 (packed 4xfloat) */
    eax = MEM32(esp);
    /* addps: xmm2 += xmm3 (packed 4xfloat) */
    MEMD(eax) = xmm2; /* movlps */
    /* TODO: movhlps xmm2, xmm2 */
    MEMF(eax + 8) = xmm2; /* movss */
    xmm1 = MEMF(esp + 0x14); /* movss */
    xmm2 = xmm1; /* movaps */
    xmm2 = xmm2 * xmm0; /* mulss */
    MEMF(esp + 0x38) = xmm2; /* movss */
    xmm2 = MEMF(esp + 0x18); /* movss */
    xmm3 = xmm2; /* movaps */
    xmm3 = xmm3 * xmm0; /* mulss */
    MEMF(esp + 0x3C) = xmm3; /* movss */
    xmm3 = MEMF(esp + 0x1C); /* movss */
    xmm4 = xmm3; /* movaps */
    xmm4 = xmm4 * xmm0; /* mulss */
    MEMF(esp + 0x40) = xmm4; /* movss */
    xmm4 = MEMF(esp + 0x2C); /* movss */
    xmm4 = xmm4 * xmm1; /* mulss */
    xmm1 = MEMF(esp + 0x30); /* movss */
    xmm1 = xmm1 * xmm2; /* mulss */
    xmm4 = xmm4 + xmm1; /* addss */
    xmm1 = MEMF(esp + 0x34); /* movss */
    xmm1 = xmm1 * xmm3; /* mulss */
    xmm4 = xmm4 + xmm1; /* addss */
    xmm4 = xmm4 * xmm0; /* mulss */
    xmm5 = xmm5 - xmm4; /* subss */
    edx = esp + 0x38;
    ecx = 0xB5;
    MEMF(esp + 0x44) = xmm5; /* movss */
    PUSH32(esp, 0); sub_00536AA0(); /* call 0x00536AA0 */

loc_0012FE47: ;
    PUSH32(esp, 0x901);
    PUSH32(esp, 0); sub_00537070(); /* call 0x00537070 */

loc_0012FE51: ;
    esp = esp + 0x58;
    esp += 4; return; /* ret */

    #undef fp_push
    #undef fp_pop
    #undef fp_popp
    #undef fp_top
    #undef fp_st1
}

/**
 * sub_0012FE60
 * Original: 0x0012FE60 - 0x00130414 (1460 bytes, 366 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0012FE60(void)
{
    uint32_t ebp;
    int _flags = 0; /* fallback flag var */
    float xmm0, xmm1, xmm2, xmm4;

loc_0012FE60: ;
    PUSH32(esp, ebp);
    ebp = esp;
    esp = esp & 0xFFFFFFF0u;
    esp = esp - 0x2D4;
    eax = MEM32(0x8493BC);
    (void)0; /* test eax, eax - flags set for next jcc */
    PUSH32(esp, ebx);
    PUSH32(esp, esi);
    PUSH32(esp, edi);
    if (TEST_Z(eax, eax)) goto loc_0013040D; /* je: equal / zero */

loc_0012FE7C: ;
    (void)0; /* test LO8(ecx), LO8(ecx) - flags set for next jcc */
    edx = MEM32(0x85D5B4);
    if (TEST_NZ(LO8(ecx), LO8(ecx))) goto loc_0013000F; /* jne: not equal / not zero */

loc_0012FE8A: ;
    ecx = MEM32(edx + 0x340);
    if (CMP_NE(ecx, MEM32(0x7F9F60))) goto loc_0013000F; /* jne: not equal / not zero */

loc_0012FE9C: ;
    ebx = MEM32(ebp + 8);
    eax = ebx;
    PUSH32(esp, 0); sub_00395ED0(); /* call 0x00395ED0 */

loc_0012FEA6: ;
    if (TEST_NZ(eax, eax)) goto loc_0012FF12; /* jne: not equal / not zero */

loc_0012FEAA: ;
    edx = ebx;
    PUSH32(esp, 0); sub_00130A60(); /* call 0x00130A60 */

loc_0012FEB1: ;
    if (TEST_Z(LO8(eax), LO8(eax))) goto loc_0012FF12; /* je: equal / zero */

loc_0012FEB5: ;
    xmm0 = 0.0f; /* xorps self = zero */
    xmm0 = xmm0 - MEMF(ebx + 0x294); /* subss */
    ecx = 0x10;
    esi = 0x7740B0;
    edi = esp + 0xE0;
    memcpy((void*)XBOX_PTR(edi), (void*)XBOX_PTR(esi), ecx * 4);
    esi += ecx * 4; edi += ecx * 4; ecx = 0; /* rep movsd */
    edx = esp + 0xE0;
    PUSH32(esp, edx);
    eax = esp + 0x54;
    ecx = 0x10;
    esi = 0x5A0350;
    edi = esp + 0x54;
    memcpy((void*)XBOX_PTR(edi), (void*)XBOX_PTR(esi), ecx * 4);
    esi += ecx * 4; edi += ecx * 4; ecx = 0; /* rep movsd */
    PUSH32(esp, eax);
    ecx = eax;
    PUSH32(esp, ecx);
    MEMF(esp + 0x90) = xmm0; /* movss */
    PUSH32(esp, 0); sub_0042841D(); /* call 0x0042841D */

loc_0012FF01: ;
    PUSH32(esp, 0);
    edx = esp + 0x54;
    PUSH32(esp, 1);
    PUSH32(esp, edx);
    PUSH32(esp, 0); sub_0012BB30(); /* call 0x0012BB30 */

loc_0012FF0F: ;
    PUSH32(esp, eax);
    goto loc_0012FF1D;

loc_0012FF12: ;
    PUSH32(esp, 0);
    PUSH32(esp, 1);
    PUSH32(esp, 0x5A0350);
    PUSH32(esp, 0);

loc_0012FF1D: ;
    eax = MEM32(ebp + 0xC);
    PUSH32(esp, 0); sub_00130830(); /* call 0x00130830 */

loc_0012FF25: ;
    esp = esp + 0x10;
    PUSH32(esp, 0x900);
    PUSH32(esp, 0); sub_00537070(); /* call 0x00537070 */

loc_0012FF32: ;
    ebx = MEM32(0x5499F0);
    edx = MEM32(0x85D5B4);
    ebx = ebx | 0x2000;
    PUSH32(esp, 0xC);
    edx = edx + 0x530;
    ecx = 0x9F;
    MEM32(0x5499F0) = ebx;
    MEM32(0x549B68) = 1;
    PUSH32(esp, 0); sub_00536C00(); /* call 0x00536C00 */

loc_0012FF66: ;
    edx = MEM32(0x85D5B4);
    edx = edx + 0x344;
    ecx = 0xB3;
    PUSH32(esp, 0); sub_00536B00(); /* call 0x00536B00 */

loc_0012FF7C: ;
    edx = MEM32(0x85D5B4);
    edx = edx + 0x350;
    ecx = 0xB4;
    PUSH32(esp, 0); sub_00536B00(); /* call 0x00536B00 */

loc_0012FF92: ;
    edx = MEM32(0x85D5B4);
    PUSH32(esp, 0x10);
    edx = edx + 0x360;
    ecx = 0xA6;
    PUSH32(esp, 0); sub_00536C00(); /* call 0x00536C00 */

loc_0012FFAA: ;
    edx = MEM32(0x85D5B4);
    PUSH32(esp, 0x10);
    edx = edx + 0x3A0;
    ecx = 0xAA;
    PUSH32(esp, 0); sub_00536C00(); /* call 0x00536C00 */

loc_0012FFC2: ;
    edx = MEM32(0x85D5B4);
    PUSH32(esp, 0x10);
    edx = edx + 0x3E0;
    ecx = 0xAE;
    PUSH32(esp, 0); sub_00536C00(); /* call 0x00536C00 */

loc_0012FFDA: ;
    edx = MEM32(0x85D5B4);
    edx = edx + 0x420;
    ecx = 0xBD;
    PUSH32(esp, 0); sub_00536B00(); /* call 0x00536B00 */

loc_0012FFF0: ;
    edx = MEM32(0x85D5B4);
    PUSH32(esp, 0x30);
    edx = edx + 0x430;
    ecx = 0x92;
    PUSH32(esp, 0); sub_00536C00(); /* call 0x00536C00 */

loc_00130008: ;
    POP32(esp, edi);
    POP32(esp, esi);
    POP32(esp, ebx);
    esp = ebp;
    POP32(esp, ebp);
    esp += 4; return; /* ret */

loc_0013000F: ;
    SET_LO8(ecx, MEM8(edx + 0x338));
    if (TEST_Z(LO8(ecx), LO8(ecx))) goto loc_0013040D; /* je: equal / zero */

loc_0013001D: ;
    SET_LO8(ebx, MEM8(eax + 0x41));
    esi = MEM32(ebp + 0xC);
    (void)0; /* test LO8(ebx), LO8(ebx) - flags set for next jcc */
    eax = esi;
    MEM8(esp + 0x1B) = (TEST_NZ(LO8(ebx), LO8(ebx))) ? 1 : 0; /* setne */
    PUSH32(esp, 0); sub_00394760(); /* call 0x00394760 */

loc_00130031: ;
    if (TEST_Z(LO8(eax), LO8(eax))) goto loc_00130053; /* je: equal / zero */

loc_00130035: ;
    eax = esi;
    PUSH32(esp, 0); sub_00394720(); /* call 0x00394720 */

loc_0013003C: ;
    edi = MEM32(ebp + 8);
    if (CMP_NE(edi, eax)) goto loc_00130056; /* jne: not equal / not zero */

loc_00130043: ;
    PUSH32(esp, 0); sub_00395ED0(); /* call 0x00395ED0 */

loc_00130048: ;
    if (TEST_Z(eax, eax)) goto loc_00130056; /* je: equal / zero */

loc_0013004C: ;
    MEM8(esp + 0x1B) = 0;
    goto loc_00130056;

loc_00130053: ;
    edi = MEM32(ebp + 8);

loc_00130056: ;
    eax = esp + 0x1C;
    PUSH32(esp, eax);
    eax = 0; /* xor self */
    PUSH32(esp, 0); sub_0012DEF0(); /* call 0x0012DEF0 */

loc_00130062: ;
    xmm0 = MEMF(0x64B16C); /* movss */
    ecx = esp + 0x1C;
    edx = ecx;
    MEMF(esp + 0x28) = xmm0; /* movss */
    MEM32(esp + 0x2C) = ecx;
    MEM32(esp + 0x30) = edx;
    xmm0 = MEMF(esp + 0x28); /* movss */
    /* shufps xmm0, xmm0, 0 */
    edx = MEM32(esp + 0x2C);
    xmm1 = MEMF(edx); /* movss */
    xmm1 = MEMD(edx + 4); /* movhps */
    /* mulps: xmm0 *= xmm1 (packed 4xfloat) */
    eax = MEM32(esp + 0x30);
    MEMF(eax) = xmm0; /* movss */
    MEMD(eax + 4) = xmm0; /* movhps */
    xmm1 = MEMF(0x649760); /* movss */
    xmm0 = MEMF(edi + 0x36C); /* movss */
    xmm2 = MEMF(edi + 0x374); /* movss */
    ebx = edi + 0x36C;
    xmm0 = xmm0 * xmm1; /* mulss */
    xmm0 = xmm0 + MEMF(esp + 0x1C); /* addss */
    MEMF(esp + 0x1C) = xmm0; /* movss */
    xmm0 = MEMF(ebx + 4); /* movss */
    xmm0 = xmm0 * xmm1; /* mulss */
    xmm0 = xmm0 + MEMF(esp + 0x20); /* addss */
    xmm2 = xmm2 * xmm1; /* mulss */
    xmm1 = MEMF(0x64AA7C); /* movss */
    /* comiss xmm0, xmm1 - sets EFLAGS */
    xmm2 = xmm2 + MEMF(esp + 0x24); /* addss */
    MEMF(esp + 0x20) = xmm0; /* movss */
    MEMF(esp + 0x24) = xmm2; /* movss */
    if ((xmm0 <= xmm1)) goto loc_00130109; /* jbe: below or equal (unsigned <=) */

loc_00130103: ;
    MEMF(esp + 0x20) = xmm1; /* movss */

loc_00130109: ;
    eax = esp + 0x1C;
    PUSH32(esp, 0); sub_00428323(); /* call 0x00428323 */

loc_00130112: ;
    eax = MEM32(0x85D5B4);
    ecx = MEM32(eax + 0xE0);
    (void)0; /* test ecx, ecx - flags set for next jcc */
    xmm4 = 0.0f; /* xorps self = zero */
    if (CMP_G(ecx & ecx, 0)) goto loc_0013013C; /* jg: greater (signed >) */

loc_00130124: ;
    MEMF(edi + 0x378) = xmm4; /* movss */
    MEMF(edi + 0x37C) = xmm4; /* movss */
    MEMF(edi + 0x380) = xmm4; /* movss */

loc_0013013C: ;
    ecx = MEM32(eax + 0xF0);
    MEM32(edi + 0x378) = ecx;
    edx = MEM32(eax + 0xF4);
    MEM32(edi + 0x37C) = edx;
    eax = MEM32(eax + 0xF8);
    MEM32(edi + 0x380) = eax;
    eax = MEM32(edi + 0x68);
    if (CMP_EQ(eax, 0xDF)) { sub_00130414(); return; } /* je: equal / zero */

loc_0013016E: ;
    if (CMP_EQ(eax, 0xE9)) { sub_00130414(); return; } /* je: equal / zero */

loc_00130179: ;
    if (CMP_EQ(eax, 0x12F)) { sub_00130414(); return; } /* je: equal / zero */

loc_00130184: ;
    if (CMP_EQ(eax, 0xEC)) { sub_00130414(); return; } /* je: equal / zero */

loc_0013018F: ;
    edx = edi;
    PUSH32(esp, 0); sub_00130A60(); /* call 0x00130A60 */

loc_00130196: ;
    if (TEST_Z(LO8(eax), LO8(eax))) { sub_00130414(); return; } /* je: equal / zero */

loc_0013019E: ;
    ecx = 0x10;
    esi = 0x7740B0;
    edi = esp + 0x1A0;
    memcpy((void*)XBOX_PTR(edi), (void*)XBOX_PTR(esi), ecx * 4);
    esi += ecx * 4; edi += ecx * 4; ecx = 0; /* rep movsd */
    ecx = 0x10;
    esi = 0x5A0350;
    edi = esp + 0x120;
    memcpy((void*)XBOX_PTR(edi), (void*)XBOX_PTR(esi), ecx * 4);
    esi += ecx * 4; edi += ecx * 4; ecx = 0; /* rep movsd */
    esi = MEM32(ebp + 8);
    xmm4 = xmm4 - MEMF(esi + 0x294); /* subss */
    ecx = esp + 0x1A0;
    PUSH32(esp, ecx);
    edx = esp + 0x124;
    PUSH32(esp, edx);
    eax = edx;
    PUSH32(esp, eax);
    MEMF(esp + 0x160) = xmm4; /* movss */
    PUSH32(esp, 0); sub_0042841D(); /* call 0x0042841D */

loc_001301F0: ;
    PUSH32(esp, 0);
    ecx = edx;
    PUSH32(esp, 1);
    PUSH32(esp, ecx);
    PUSH32(esp, 0); sub_0012BB30(); /* call 0x0012BB30 */

loc_001301FC: ;
    PUSH32(esp, eax);
    eax = MEM32(ebp + 0xC);
    PUSH32(esp, 0); sub_00130830(); /* call 0x00130830 */

loc_00130205: ;
    esp = esp + 0x10;
    if (CMP_NE(MEM16(esi + 0x60), 0)) goto loc_0013023E; /* jne: not equal / not zero */

loc_0013020F: ;
    ecx = 0x10;
    esi = 0x7740B0;
    edi = esp + 0x160;
    memcpy((void*)XBOX_PTR(edi), (void*)XBOX_PTR(esi), ecx * 4);
    esi += ecx * 4; edi += ecx * 4; ecx = 0; /* rep movsd */
    PUSH32(esp, 0); sub_0012BB30(); /* call 0x0012BB30 */

loc_00130227: ;
    edx = MEM32(ebp + 8);
    edx = edx + 0x78;
    PUSH32(esp, edx);
    ecx = esp + 0x164;
    PUSH32(esp, ecx);
    PUSH32(esp, 0); sub_00130900(); /* call 0x00130900 */

loc_0013023B: ;
    esp = esp + 8;

loc_0013023E: ;
    esi = MEM32(ebp + 0xC);
    eax = MEM32(0x85D5B4);
    edx = esp + 0x50;
    PUSH32(esp, edx);
    PUSH32(esp, 0); sub_0012DAB0(); /* call 0x0012DAB0 */

loc_00130250: ;
    esi = (uint32_t)((int32_t)esi * (int32_t)0x2B0);
    eax = MEM32(0x84A13C);
    eax = esi + eax + 0x40;
    ecx = esp + 0x28;
    esi = esp + 0xE0;
    PUSH32(esp, 0); sub_0042851B(); /* call 0x0042851B */

loc_0013026F: ;
    ecx = esp + 0x50;
    PUSH32(esp, ecx);
    edx = esi;
    PUSH32(esp, edx);
    eax = esp + 0xA8;
    PUSH32(esp, eax);
    PUSH32(esp, 0); sub_0042841D(); /* call 0x0042841D */

loc_00130284: ;
    ecx = esp + 0xA0;
    PUSH32(esp, ecx);
    edx = ecx;
    PUSH32(esp, edx);
    PUSH32(esp, 0); sub_003E27C0(); /* call 0x003E27C0 */

loc_00130294: ;
    edi = MEM32(0x85D5B4);
    esi = edx;
    esp = esp + 8;
    edi = edi + 0x530;
    ecx = 0x10;
    memcpy((void*)XBOX_PTR(edi), (void*)XBOX_PTR(esi), ecx * 4);
    esi += ecx * 4; edi += ecx * 4; ecx = 0; /* rep movsd */
    PUSH32(esp, 0xC);
    ecx = 0x9F;
    PUSH32(esp, 0); sub_00536C00(); /* call 0x00536C00 */

loc_001302B8: ;
    esi = MEM32(ebp + 8);
    eax = 0; /* xor self */
    PUSH32(esp, 8);
    ecx = 0x40;
    edi = esp + 0x1E4;
    { uint32_t _i; for (_i = 0; _i < ecx; _i++) MEM32(edi + _i*4) = eax; }
    edi += ecx * 4; ecx = 0; /* rep stosd */
    eax = MEM32(esi + 0x598);
    PUSH32(esp, 0);
    ecx = esp + 0x58;
    PUSH32(esp, ecx);
    PUSH32(esp, esi);
    ebx = esp + 0x1F0;
    PUSH32(esp, 0); sub_002D0360(); /* call 0x002D0360 */

loc_001302E7: ;
    esp = esp + 0x10;
    edx = esp + 0x34;
    ebx = eax;
    PUSH32(esp, edx);
    edx = MEM32(0x85D5B4);
    eax = 0; /* xor self */
    edi = 0; /* xor self */
    PUSH32(esp, 0); sub_0012DEF0(); /* call 0x0012DEF0 */

loc_00130300: ;
    eax = esp + 0x34;
    PUSH32(esp, eax);
    PUSH32(esp, 0); sub_003E2270(); /* call 0x003E2270 */

loc_0013030A: ;
    esp = esp + 4;
    if (TEST_Z(eax, eax)) goto loc_00130316; /* je: equal / zero */

loc_00130311: ;
    edi = 1;

loc_00130316: ;
    edx = MEM32(0x85D5B4);
    if (CMP_LE(MEM32(edx + 0xE0), edi)) goto loc_001303AF; /* jle: less or equal (signed <=) */

loc_00130328: ;
    ecx = esp + 0x94;
    PUSH32(esp, ecx);
    eax = edi;
    PUSH32(esp, 0); sub_0012DEF0(); /* call 0x0012DEF0 */

loc_00130337: ;
    xmm0 = MEMF(esi + 0x9C); /* movss */
    edx = esi + 0x90;
    eax = MEM32(edx);
    ecx = MEM32(edx + 4);
    edx = MEM32(edx + 8);
    MEM32(esp + 0x40) = eax;
    eax = 0; /* xor self */
    (void)0; /* test ebx, ebx - flags set for next jcc */
    SET_LO8(eax, (TEST_NZ(ebx, ebx)) ? 1 : 0); /* setne */
    MEM32(esp + 0x44) = ecx;
    ecx = esp + 0x50;
    MEM32(esp + 0x48) = edx;
    edx = esp + 0x1E0;
    MEMF(esp + 0x4C) = xmm0; /* movss */
    eax = eax * 8 + 4;
    PUSH32(esp, eax);
    PUSH32(esp, ecx);
    PUSH32(esp, edx);
    eax = esp + 0x4C;
    PUSH32(esp, eax);
    PUSH32(esp, esi);
    ecx = esi + 0x78;
    PUSH32(esp, ecx);
    ecx = MEM32(0x85D5B4);
    eax = edi;
    PUSH32(esp, 0); sub_0012E050(); /* call 0x0012E050 */

loc_00130392: ;
    PUSH32(esp, ecx);
    ecx = ebx;
    eax = esp + 0xAC;
    MEMF(esp) = xmm0; /* movss */
    PUSH32(esp, 0); sub_00130AC0(); /* call 0x00130AC0 */

loc_001303A6: ;
    edx = MEM32(0x85D5B4);
    esp = esp + 0x18;

loc_001303AF: ;
    SET_LO8(eax, MEM8(esp + 0x1B));
    if (TEST_NZ(LO8(eax), LO8(eax))) goto loc_001303C7; /* jne: not equal / not zero */

loc_001303B7: ;
    ecx = 0x40;
    eax = 0; /* xor self */
    edi = esp + 0x1E0;
    { uint32_t _i; for (_i = 0; _i < ecx; _i++) MEM32(edi + _i*4) = eax; }
    edi += ecx * 4; ecx = 0; /* rep stosd */

loc_001303C7: ;
    edx = MEM32(edx + 0xE0);
    (void)0; /* cmp edx, 1 - flags set for next jcc */
    eax = 1;
    if (CMP_G(edx, 1)) goto loc_001303D9; /* jg: greater (signed >) */

loc_001303D7: ;
    eax = edx;

loc_001303D9: ;
    if (CMP_LE(eax, 1)) goto loc_001303E3; /* jle: less or equal (signed <=) */

loc_001303DE: ;
    eax = 1;

loc_001303E3: ;
    ecx = MEM32(esi + 0x260);
    PUSH32(esp, 1);
    edx = esp + 0x1E4;
    PUSH32(esp, edx);
    PUSH32(esp, ecx);
    PUSH32(esp, 0); sub_0012F500(); /* call 0x0012F500 */

loc_001303F9: ;
    edx = MEM32(0x85D5B4);
    eax = MEM32(0x7F9F60);
    esp = esp + 0xC;
    MEM32(edx + 0x340) = eax;

loc_0013040D: ;
    POP32(esp, edi);
    POP32(esp, esi);
    POP32(esp, ebx);
    esp = ebp;
    POP32(esp, ebp);
    esp += 4; return; /* ret */

}

/**
 * sub_00130430
 * Original: 0x00130430 - 0x00130670 (576 bytes, 171 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00130430(void)
{
    uint32_t ebp;
    int _flags = 0; /* fallback flag var */
    float xmm0;

loc_00130430: ;
    PUSH32(esp, ebp);
    ebp = esp;
    esp = esp & 0xFFFFFFF0u;
    esp = esp - 0x264;
    eax = MEM32(0x8493BC);
    (void)0; /* test eax, eax - flags set for next jcc */
    PUSH32(esp, ebx);
    ebx = MEM32(ebp + 0xC);
    PUSH32(esp, esi);
    PUSH32(esp, edi);
    if (TEST_Z(eax, eax)) goto loc_00130669; /* je: equal / zero */

loc_0013044F: ;
    eax = esp + 0x14;
    PUSH32(esp, eax);
    PUSH32(esp, 0x5F5384);
    ecx = 0x822670;
    PUSH32(esp, 0); sub_003EF530(); /* call 0x003EF530 */

loc_00130463: ;
    ecx = MEM32(esp + 0x1C);
    MEM32(ecx + 0x50) = 0x6B8ED4;
    edx = MEM32(0x85D5B4);
    SET_LO8(eax, MEM8(edx + 0x338));
    esp = esp + 8;
    if (TEST_Z(LO8(eax), LO8(eax))) goto loc_00130669; /* je: equal / zero */

loc_00130485: ;
    eax = MEM32(0x8493BC);
    if (TEST_NZ(eax, eax)) goto loc_00130494; /* jne: not equal / not zero */

loc_0013048E: ;
    MEM8(esp + 0x13) = LO8(eax);
    goto loc_001304A0;

loc_00130494: ;
    SET_LO8(ecx, MEM8(eax + 0x41));
    (void)0; /* test LO8(ecx), LO8(ecx) - flags set for next jcc */
    MEM8(esp + 0x13) = (TEST_NZ(LO8(ecx), LO8(ecx))) ? 1 : 0; /* setne */
    edi = edi;

loc_001304A0: ;
    SET_LO8(ecx, MEM8(ebp + 0x14));
    if (TEST_Z(LO8(ecx), LO8(ecx))) goto loc_0013053A; /* je: equal / zero */

loc_001304AB: ;
    if (TEST_Z(eax, eax)) goto loc_00130525; /* je: equal / zero */

loc_001304AF: ;
    SET_LO8(edx, MEM8(eax + 0x84));
    (void)0; /* test LO8(edx), LO8(edx) - flags set for next jcc */
    SET_LO8(eax, (TEST_NZ(LO8(edx), LO8(edx))) ? 1 : 0); /* setne */
    if (TEST_Z(LO8(eax), LO8(eax))) goto loc_00130525; /* je: equal / zero */

loc_001304BE: ;
    eax = esp + 0xF0;
    PUSH32(esp, eax);
    eax = MEM32(ebp + 8);
    ecx = 0x10;
    esi = 0x7740B0;
    edi = esp + 0xF4;
    memcpy((void*)XBOX_PTR(edi), (void*)XBOX_PTR(esi), ecx * 4);
    esi += ecx * 4; edi += ecx * 4; ecx = 0; /* rep movsd */
    PUSH32(esp, 0); sub_00130890(); /* call 0x00130890 */

loc_001304E1: ;
    esp = esp + 4;
    if (TEST_Z(LO8(eax), LO8(eax))) goto loc_0013053A; /* je: equal / zero */

loc_001304E8: ;
    xmm0 = 0.0f; /* xorps self = zero */
    ecx = 0x10;
    esi = 0x5A0350;
    edi = esp + 0x30;
    memcpy((void*)XBOX_PTR(edi), (void*)XBOX_PTR(esi), ecx * 4);
    esi += ecx * 4; edi += ecx * 4; ecx = 0; /* rep movsd */
    ecx = esp + 0xF0;
    PUSH32(esp, ecx);
    edx = esp + 0x34;
    PUSH32(esp, edx);
    eax = edx;
    PUSH32(esp, eax);
    MEMF(esp + 0x70) = xmm0; /* movss */
    PUSH32(esp, 0); sub_0042841D(); /* call 0x0042841D */

loc_00130516: ;
    PUSH32(esp, 0);
    ecx = edx;
    PUSH32(esp, 1);
    PUSH32(esp, ecx);
    PUSH32(esp, 0); sub_0012BB30(); /* call 0x0012BB30 */

loc_00130522: ;
    PUSH32(esp, eax);
    goto loc_00130530;

loc_00130525: ;
    PUSH32(esp, 0);
    PUSH32(esp, 1);
    PUSH32(esp, 0x5A0350);
    PUSH32(esp, 0);

loc_00130530: ;
    eax = ebx;
    PUSH32(esp, 0); sub_00130830(); /* call 0x00130830 */

loc_00130537: ;
    esp = esp + 0x10;

loc_0013053A: ;
    eax = MEM32(0x85D5B4);
    edx = esp + 0xB0;
    PUSH32(esp, edx);
    PUSH32(esp, 0); sub_0012DAB0(); /* call 0x0012DAB0 */

loc_0013054C: ;
    ebx = (uint32_t)((int32_t)ebx * (int32_t)0x2B0);
    eax = MEM32(0x84A13C);
    eax = ebx + eax + 0x40;
    ecx = esp + 0x14;
    esi = esp + 0x130;
    PUSH32(esp, 0); sub_0042851B(); /* call 0x0042851B */

loc_0013056B: ;
    ecx = esp + 0xB0;
    PUSH32(esp, ecx);
    edx = esi;
    PUSH32(esp, edx);
    eax = esp + 0x78;
    PUSH32(esp, eax);
    PUSH32(esp, 0); sub_0042841D(); /* call 0x0042841D */

loc_00130580: ;
    ecx = esp + 0x70;
    PUSH32(esp, ecx);
    edx = ecx;
    PUSH32(esp, edx);
    PUSH32(esp, 0); sub_003E27C0(); /* call 0x003E27C0 */

loc_0013058D: ;
    esp = esp + 8;
    PUSH32(esp, 0xC);
    ecx = 0x9F;
    PUSH32(esp, 0); sub_00536C00(); /* call 0x00536C00 */

loc_0013059C: ;
    eax = 0; /* xor self */
    ecx = 0x40;
    edi = esp + 0x170;
    { uint32_t _i; for (_i = 0; _i < ecx; _i++) MEM32(edi + _i*4) = eax; }
    edi += ecx * 4; ecx = 0; /* rep stosd */
    SET_LO8(eax, MEM8(esp + 0x13));
    if (TEST_Z(LO8(eax), LO8(eax))) goto loc_0013063D; /* je: equal / zero */

loc_001305B8: ;
    SET_LO8(eax, MEM8(ebp + 0x10));
    if (TEST_Z(LO8(eax), LO8(eax))) goto loc_0013063D; /* je: equal / zero */

loc_001305BF: ;
    edx = MEM32(0x85D5B4);
    eax = esp + 0x18;
    PUSH32(esp, eax);
    eax = 0; /* xor self */
    esi = 0; /* xor self */
    PUSH32(esp, 0); sub_0012DEF0(); /* call 0x0012DEF0 */

loc_001305D3: ;
    ecx = esp + 0x18;
    PUSH32(esp, ecx);
    PUSH32(esp, 0); sub_003E2270(); /* call 0x003E2270 */

loc_001305DD: ;
    esp = esp + 4;
    if (TEST_Z(eax, eax)) goto loc_001305E9; /* je: equal / zero */

loc_001305E4: ;
    esi = 1;

loc_001305E9: ;
    edx = MEM32(0x85D5B4);
    if (CMP_LE(MEM32(edx + 0xE0), esi)) goto loc_0013063D; /* jle: less or equal (signed <=) */

loc_001305F7: ;
    eax = esp + 0x24;
    PUSH32(esp, eax);
    eax = esi;
    PUSH32(esp, 0); sub_0012DEF0(); /* call 0x0012DEF0 */

loc_00130603: ;
    eax = MEM32(ebp + 8);
    PUSH32(esp, 4);
    ecx = esp + 0xB4;
    PUSH32(esp, ecx);
    ecx = MEM32(0x85D5B4);
    edx = esp + 0x178;
    PUSH32(esp, edx);
    PUSH32(esp, eax);
    PUSH32(esp, 0);
    PUSH32(esp, eax);
    eax = esi;
    PUSH32(esp, 0); sub_0012E050(); /* call 0x0012E050 */

loc_00130629: ;
    PUSH32(esp, ecx);
    ecx = 0; /* xor self */
    eax = esp + 0x3C;
    MEMF(esp) = xmm0; /* movss */
    PUSH32(esp, 0); sub_00130AC0(); /* call 0x00130AC0 */

loc_0013063A: ;
    esp = esp + 0x18;

loc_0013063D: ;
    eax = MEM32(0x85D5B4);
    eax = MEM32(eax + 0xE0);
    if (CMP_LE(eax, 1)) goto loc_00130652; /* jle: less or equal (signed <=) */

loc_0013064D: ;
    eax = 1;

loc_00130652: ;
    PUSH32(esp, 0);
    ecx = esp + 0x174;
    PUSH32(esp, ecx);
    PUSH32(esp, 0x3F800000);
    PUSH32(esp, 0); sub_0012F500(); /* call 0x0012F500 */

loc_00130666: ;
    esp = esp + 0xC;

loc_00130669: ;
    POP32(esp, edi);
    POP32(esp, esi);
    POP32(esp, ebx);
    esp = ebp;
    POP32(esp, ebp);
    esp += 4; return; /* ret */

}

/**
 * sub_00130670
 * Original: 0x00130670 - 0x001306B8 (72 bytes, 20 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00130670(void)
{
    int _flags = 0; /* fallback flag var */

loc_00130670: ;
    PUSH32(esp, ecx);
    eax = ZX16(MEM16(esi + 0x60));
    ecx = MEM32(eax * 4 + 0x85D5B8);
    if (TEST_Z(ecx, ecx)) goto loc_001306B6; /* je: equal / zero */

loc_00130680: ;
    eax = ecx;
    (void)0; /* test eax, eax - flags set for next jcc */
    MEM32(esp) = eax;
    if (TEST_Z(eax, eax)) goto loc_00130695; /* je: equal / zero */

loc_00130689: ;
    eax = esp;
    PUSH32(esp, eax);
    PUSH32(esp, 0); sub_002AF1C0(); /* call 0x002AF1C0 */

loc_00130692: ;
    esp = esp + 4;

loc_00130695: ;
    ecx = ZX16(MEM16(esi + 0x60));
    MEM32(ecx * 4 + 0x85D5B8) = 0;
    eax = ZX16(MEM16(esi + 0x60));
    edx = eax + eax * 2;
    MEM32(edx * 4 + 0x85D7B8) = 0xFFFFFFFEu;

loc_001306B6: ;
    POP32(esp, ecx);
    esp += 4; return; /* ret */

}

/**
 * sub_001306C0
 * Original: 0x001306C0 - 0x001307AE (238 bytes, 60 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_001306C0(void)
{
    uint32_t ebp;
    int _flags = 0; /* fallback flag var */
    float xmm0, xmm1, xmm2, xmm3, xmm4, xmm5;

loc_001306C0: ;
    PUSH32(esp, ebp);
    ebp = esp;
    esp = esp & 0xFFFFFFF0u;
    esp = esp - 0x64;
    edx = MEM32(0x5499F0);
    PUSH32(esp, ebx);
    ebx = MEM32(ebp + 8);
    PUSH32(esp, esi);
    PUSH32(esp, edi);
    ecx = 0x10;
    esi = 0x7740B0;
    edi = esp + 0x30;
    eax = esp + 0x30;
    memcpy((void*)XBOX_PTR(edi), (void*)XBOX_PTR(esi), ecx * 4);
    esi += ecx * 4; edi += ecx * 4; ecx = 0; /* rep movsd */
    edx = edx | 0x3000;
    ecx = eax;
    MEM32(0x5499F0) = edx;
    MEM32(0x549B94) = 1;
    MEM32(esp + 0x1C) = eax;
    MEM32(esp + 0x18) = ecx;
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
    PUSH32(esp, 8);
    edx = esp + 0x34;
    ecx = 0xA6;
    PUSH32(esp, 0); sub_00536C00(); /* call 0x00536C00 */

loc_00130761: ;
    xmm0 = MEMF(ebx); /* movss */
    MEMF(esp + 0x20) = xmm0; /* movss */
    xmm0 = MEMF(ebx + 4); /* movss */
    MEMF(esp + 0x24) = xmm0; /* movss */
    xmm0 = MEMF(ebx + 8); /* movss */
    MEMF(esp + 0x28) = xmm0; /* movss */
    xmm0 = MEMF(0x648D14); /* movss */
    edx = esp + 0x20;
    ecx = 0xA1;
    MEMF(esp + 0x2C) = xmm0; /* movss */
    PUSH32(esp, 0); sub_00536B00(); /* call 0x00536B00 */

loc_0013079D: ;
    ecx = MEM32(0x8493B8);
    if (TEST_Z(ecx, ecx)) { sub_001307AE(); return; } /* je: equal / zero */

loc_001307A7: ;
    PUSH32(esp, 0); sub_0012B180(); /* call 0x0012B180 */

loc_001307AC: ;
    g_seh_ebp = ebp; sub_001307BA(); return; /* tail jmp 0x001307BA */

}

/**
 * sub_00130830
 * Original: 0x00130830 - 0x00130881 (81 bytes, 31 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00130830(void)
{
    uint32_t ebp;

loc_00130830: ;
    PUSH32(esp, ebp);
    ebp = esp;
    esp = esp & 0xFFFFFFF0u;
    esp = esp - 0x4C;
    ecx = MEM32(0x84A13C);
    eax = (uint32_t)((int32_t)eax * (int32_t)0x2B0);
    PUSH32(esp, esi);
    eax = eax + ecx + 0x40;
    ecx = esp + 0xC;
    esi = esp + 0x10;
    PUSH32(esp, 0); sub_0042851B(); /* call 0x0042851B */

loc_00130857: ;
    edx = MEM32(ebp + 0xC);
    PUSH32(esp, edx);
    eax = esi;
    PUSH32(esp, eax);
    ecx = esi;
    PUSH32(esp, ecx);
    PUSH32(esp, 0); sub_0042841D(); /* call 0x0042841D */

loc_00130866: ;
    edx = MEM32(ebp + 0x14);
    eax = MEM32(ebp + 0x10);
    PUSH32(esp, edx);
    PUSH32(esp, eax);
    eax = MEM32(ebp + 8);
    ecx = esi;
    PUSH32(esp, ecx);
    PUSH32(esp, 0); sub_00083DE0(); /* call 0x00083DE0 */

loc_00130879: ;
    esp = esp + 0xC;
    POP32(esp, esi);
    esp = ebp;
    POP32(esp, ebp);
    esp += 4; return; /* ret */

}

/**
 * sub_00130890
 * Original: 0x00130890 - 0x001308F1 (97 bytes, 30 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00130890(void)
{
    int _flags = 0; /* fallback flag var */
    float xmm0, xmm1, xmm2;

loc_00130890: ;
    esp = esp - 0xC;
    ecx = MEM32(eax);
    edx = MEM32(eax + 4);
    eax = MEM32(eax + 8);
    xmm0 = 0.0f; /* xorps self = zero */
    MEM32(esp) = ecx;
    ecx = MEM32(esp + 0x10);
    MEM32(esp + 4) = edx;
    PUSH32(esp, ecx);
    edx = esp + 4;
    MEM32(esp + 0xC) = eax;
    PUSH32(esp, edx);
    eax = edx;
    PUSH32(esp, eax);
    MEMF(esp + 0x10) = xmm0; /* movss */
    PUSH32(esp, 0); sub_00428393(); /* call 0x00428393 */

loc_001308C1: ;
    xmm1 = MEMF(esp); /* movss */
    /* comiss xmm1, xmm0 - sets EFLAGS */
    if ((xmm1 < xmm0)) { sub_001308F1(); return; } /* jb: below (unsigned <) */

loc_001308CB: ;
    xmm2 = MEMF(0x648D14); /* movss */
    /* comiss xmm2, xmm1 - sets EFLAGS */
    if ((xmm2 < xmm1)) { sub_001308F1(); return; } /* jb: below (unsigned <) */

loc_001308D8: ;
    xmm1 = MEMF(esp + 8); /* movss */
    /* comiss xmm1, xmm0 - sets EFLAGS */
    if ((xmm1 < xmm0)) { sub_001308F1(); return; } /* jb: below (unsigned <) */

loc_001308E3: ;
    /* comiss xmm2, xmm1 - sets EFLAGS */
    if ((xmm2 < xmm1)) { sub_001308F1(); return; } /* jb: below (unsigned <) */

loc_001308E8: ;
    eax = 1;
    esp = esp + 0xC;
    esp += 4; return; /* ret */

}

/**
 * sub_00130900
 * Original: 0x00130900 - 0x00130A55 (341 bytes, 78 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00130900(void)
{
    int _flags = 0; /* fallback flag var */
    float xmm0, xmm1, xmm2, xmm3;

loc_00130900: ;
    esp = esp - 0x688;
    PUSH32(esp, ebx);
    PUSH32(esp, esi);
    esi = eax;
    SET_LO8(eax, MEM8(0x8493D0));
    ebx = 0; /* xor self */
    if (CMP_EQ(LO8(eax), LO8(ebx))) goto loc_00130A4C; /* je: equal / zero */

loc_00130919: ;
    (void)0; /* cmp esi, ebx - flags set for next jcc */
    xmm0 = MEMF(0x648D14); /* movss */
    MEMF(esp + 0x67C) = xmm0; /* movss */
    MEM32(esp + 0x680) = ebx;
    MEM32(esp + 0x684) = ebx;
    MEM32(esp + 0x68C) = ebx;
    if (CMP_EQ(esi, ebx)) goto loc_00130A4C; /* je: equal / zero */

loc_00130947: ;
    PUSH32(esp, edi);
    eax = esp + 0x18;
    PUSH32(esp, eax);
    PUSH32(esp, 0); sub_0037C4A0(); /* call 0x0037C4A0 */

loc_00130952: ;
    ecx = MEM32(0x5499F0);
    edx = MEM32(esp + 0x69C);
    ecx = ecx | 0x2000;
    MEM32(0x5499F0) = ecx;
    ecx = MEM32(esp + 0x698);
    PUSH32(esp, ecx);
    PUSH32(esp, edx);
    eax = esp + 0x14;
    PUSH32(esp, eax);
    MEM32(0x549B68) = ebx;
    PUSH32(esp, 0); sub_00428393(); /* call 0x00428393 */

loc_00130984: ;
    PUSH32(esp, 2);
    PUSH32(esp, 0); sub_003598A0(); /* call 0x003598A0 */

loc_0013098B: ;
    eax = 0; /* xor self */
    ecx = esi;
    PUSH32(esp, 0); sub_003FA570(); /* call 0x003FA570 */

loc_00130994: ;
    xmm2 = MEMF(0x648E8C); /* movss */
    xmm1 = MEMF(0x648FDC); /* movss */
    PUSH32(esp, 0x437F0000);
    PUSH32(esp, ebx);
    PUSH32(esp, 0x43000000);
    xmm3 = xmm2; /* movaps */
    PUSH32(esp, 0); sub_003596B0(); /* call 0x003596B0 */

loc_001309B7: ;
    xmm0 = MEMF(0x648E8C); /* movss */
    xmm1 = MEMF(esp + 0x20); /* movss */
    xmm2 = MEMF(0x648D18); /* movss */
    esp = esp + 0x10;
    PUSH32(esp, 0x437F0000);
    PUSH32(esp, ebx);
    xmm1 = xmm1 * xmm0; /* mulss */
    PUSH32(esp, ecx);
    MEMF(esp) = xmm1; /* movss */
    xmm1 = MEMF(esp + 0x18); /* movss */
    xmm1 = xmm1 * xmm0; /* mulss */
    xmm3 = xmm2; /* movaps */
    PUSH32(esp, 0); sub_003596B0(); /* call 0x003596B0 */

loc_001309F2: ;
    xmm0 = MEMF(0x648E8C); /* movss */
    xmm3 = MEMF(esp + 0x1C); /* movss */
    xmm1 = MEMF(esp + 0x18); /* movss */
    esp = esp + 0xC;
    PUSH32(esp, 0x41000000);
    PUSH32(esp, 0x41000000);
    esi = 0xFFFF0000u;
    edi = esp + 0x20;
    xmm3 = xmm3 * xmm0; /* mulss */
    xmm1 = xmm1 * xmm0; /* mulss */
    PUSH32(esp, 0); sub_0037C3D0(); /* call 0x0037C3D0 */

loc_00130A29: ;
    ebx = edi;
    PUSH32(esp, 0); sub_0037C7C0(); /* call 0x0037C7C0 */

loc_00130A30: ;
    edx = 0; /* xor self */
    ecx = 0x40300;
    PUSH32(esp, 0); sub_00537990(); /* call 0x00537990 */

loc_00130A3C: ;
    MEM32(0x549AE8) = 0;
    PUSH32(esp, 0); sub_001F6060(); /* call 0x001F6060 */

loc_00130A4B: ;
    POP32(esp, edi);

loc_00130A4C: ;
    POP32(esp, esi);
    POP32(esp, ebx);
    esp = esp + 0x688;
    esp += 4; return; /* ret */

}

/**
 * sub_00130A60
 * Original: 0x00130A60 - 0x00130AB0 (80 bytes, 31 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00130A60(void)
{
    uint32_t ebp;
    int _flags = 0; /* fallback flag var */

loc_00130A60: ;
    PUSH32(esp, ebp);
    ebp = esp;
    esp = esp & 0xFFFFFFF0u;
    esp = esp - 0x48;
    eax = MEM32(0x8493BC);
    (void)0; /* test eax, eax - flags set for next jcc */
    PUSH32(esp, esi);
    PUSH32(esp, edi);
    if (TEST_Z(eax, eax)) { sub_00130AB0(); return; } /* je: equal / zero */

loc_00130A74: ;
    SET_LO8(ecx, MEM8(eax + 0x84));
    (void)0; /* test LO8(ecx), LO8(ecx) - flags set for next jcc */
    SET_LO8(eax, (TEST_NZ(LO8(ecx), LO8(ecx))) ? 1 : 0); /* setne */
    if (TEST_Z(LO8(eax), LO8(eax))) { sub_00130AB0(); return; } /* je: equal / zero */

loc_00130A83: ;
    eax = MEM32(edx + 0x74);
    if (TEST_Z(eax, eax)) { sub_00130AB0(); return; } /* je: equal / zero */

loc_00130A8A: ;
    eax = esp + 0x10;
    PUSH32(esp, eax);
    ecx = 0x10;
    esi = 0x7740B0;
    edi = esp + 0x14;
    eax = edx + 0x78;
    memcpy((void*)XBOX_PTR(edi), (void*)XBOX_PTR(esi), ecx * 4);
    esi += ecx * 4; edi += ecx * 4; ecx = 0; /* rep movsd */
    PUSH32(esp, 0); sub_00130890(); /* call 0x00130890 */

loc_00130AA7: ;
    esp = esp + 4;
    POP32(esp, edi);
    POP32(esp, esi);
    esp = ebp;
    POP32(esp, ebp);
    esp += 4; return; /* ret */

}

/**
 * sub_00130AC0
 * Original: 0x00130AC0 - 0x00130BB1 (241 bytes, 77 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00130AC0(void)
{
    uint32_t ebp;
    int _flags = 0; /* fallback flag var */
    float xmm0, xmm1;
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_00130AC0: ;
    esp = esp - 0x4C;
    xmm0 = 0.0f; /* xorps self = zero */
    PUSH32(esp, ebx);
    xmm1 = xmm0; /* movaps */
    xmm1 = xmm1 - MEMF(eax); /* subss */
    MEMF(esp + 4) = xmm1; /* movss */
    PUSH32(esp, ebp);
    xmm1 = xmm0; /* movaps */
    xmm1 = xmm1 - MEMF(eax + 4); /* subss */
    xmm0 = xmm0 - MEMF(eax + 8); /* subss */
    PUSH32(esp, esi);
    eax = esp + 0xC;
    PUSH32(esp, edi);
    edi = MEM32(esp + 0x68);
    ebx = eax;
    esi = ecx;
    MEMF(esp + 0x14) = xmm1; /* movss */
    MEMF(esp + 0x18) = xmm0; /* movss */
    PUSH32(esp, 0); sub_00428323(); /* call 0x00428323 */

loc_00130B01: ;
    xmm0 = MEMF(esp + 0x60); /* movss */
    eax = edi;
    ecx = MEM32(eax);
    edx = MEM32(eax + 4);
    eax = MEM32(eax + 8);
    MEM32(esp + 0x1C) = ecx;
    ecx = MEM32(esp + 0x10);
    MEM32(esp + 0x28) = ecx;
    MEM32(esp + 0x20) = edx;
    edx = MEM32(esp + 0x14);
    MEM32(esp + 0x24) = eax;
    eax = MEM32(esp + 0x18);
    ecx = esp + 0x1C;
    MEM32(esp + 0x68) = ecx;
    MEM32(esp + 0x2C) = edx;
    edx = MEM32(esp + 0x68);
    MEM32(esp + 0x30) = eax;
    PUSH32(esp, edx);
    eax = esp + 0x40;
    PUSH32(esp, eax);
    eax = MEM32(0x870ED4);
    ecx = esp + 0x70;
    MEMF(esp + 0x3C) = xmm0; /* movss */
    xmm0 = MEMF(edi + 0xC); /* movss */
    PUSH32(esp, ecx);
    ecx = 8;
    MEMF(esp + 0x44) = xmm0; /* movss */
    PUSH32(esp, 0); sub_00131410(); /* call 0x00131410 */

loc_00130B6C: ;
    ebp = eax;
    edi = 0; /* xor self */
    if (CMP_LE(ebp & ebp, 0)) goto loc_00130BA7; /* jle: less or equal (signed <=) */

loc_00130B74: ;
    edx = MEM32(esp + 0x74);
    if (CMP_GE(esi, edx)) goto loc_00130BA7; /* jge: greater or equal (signed >=) */

loc_00130B7C: ;
    ecx = MEM32(esp + edi * 4 + 0x3C);
    if (CMP_EQ(MEM32(esp + 0x64), ecx)) goto loc_00130BA2; /* je: equal / zero */

loc_00130B86: ;
    eax = MEM32(ecx + 0x59C);
    ebx = MEM32(esp + 0x6C);
    PUSH32(esp, edx);
    edx = MEM32(esp + 0x74);
    PUSH32(esp, esi);
    PUSH32(esp, edx);
    PUSH32(esp, ecx);
    PUSH32(esp, 0); sub_002D0360(); /* call 0x002D0360 */

loc_00130B9D: ;
    esp = esp + 0x10;
    esi = esi + eax;

loc_00130BA2: ;
    edi++;
    if (CMP_L(edi, ebp)) goto loc_00130B74; /* jl: less (signed <) */

loc_00130BA7: ;
    POP32(esp, edi);
    eax = esi;
    POP32(esp, esi);
    POP32(esp, ebp);
    POP32(esp, ebx);
    esp = esp + 0x4C;
    esp += 4; return; /* ret */

}

/**
 * sub_00130BC0
 * Original: 0x00130BC0 - 0x00130C44 (132 bytes, 34 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00130BC0(void)
{
    int _flags = 0; /* fallback flag var */

loc_00130BC0: ;
    esp = esp - 0x200;
    SET_LO8(eax, MEM8(0x84B680));
    (void)0; /* test LO8(eax), LO8(eax) - flags set for next jcc */
    MEM8(esp) = 0;
    MEM8(esp + 0xFF) = 0;
    if (TEST_Z(LO8(eax), LO8(eax))) { sub_00130C44(); return; } /* je: equal / zero */

loc_00130BDB: ;
    PUSH32(esp, 0xFF);
    PUSH32(esp, 0x84B680);
    eax = esp + 8;
    PUSH32(esp, eax);
    PUSH32(esp, 0); sub_0046EEC0(); /* call 0x0046EEC0 */

loc_00130BEF: ;
    SET_LO8(eax, MEM8(esp + 0xC));
    esp = esp + 0xC;
    if (TEST_Z(LO8(eax), LO8(eax))) goto loc_00130C24; /* je: equal / zero */

loc_00130BFA: ;
    ecx = 0x75DDF0;
    PUSH32(esp, 0); sub_0046EA5A(); /* call 0x0046EA5A */

loc_00130C04: ;
    PUSH32(esp, eax);
    edx = esp + 4;
    PUSH32(esp, edx);
    PUSH32(esp, 0x5AC800);
    eax = esp + 0x10C;
    PUSH32(esp, 0x100);
    PUSH32(esp, eax);
    PUSH32(esp, 0); sub_0046E9AD(); /* call 0x0046E9AD */

loc_00130C21: ;
    esp = esp + 0x14;

loc_00130C24: ;
    ecx = MEM32(esp + 0x204);
    PUSH32(esp, 0xFFFFFFFFu);
    PUSH32(esp, 0x461);
    PUSH32(esp, 0x606A34);
    PUSH32(esp, ecx);
    PUSH32(esp, 0); sub_002AF0E0(); /* call 0x002AF0E0 */

loc_00130C3D: ;
    esp = esp + 0x210;
    esp += 4; return; /* ret */

}

/**
 * sub_00130C70
 * Original: 0x00130C70 - 0x00130CE7 (119 bytes, 23 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00130C70(void)
{
    int _flags = 0; /* fallback flag var */
    float xmm0;

loc_00130C70: ;
    ecx = MEM32(0x875E00);
    (void)0; /* test LO8(ecx), 1 - flags set for next jcc */
    edx = MEM32(0x7F9F60);
    MEM32(eax) = 0xFFFFFFFEu;
    if (TEST_NZ(LO8(ecx), 1)) goto loc_00130CAA; /* jne: not equal / not zero */

loc_00130C87: ;
    ecx = ecx | 1;
    MEM32(0x875E00) = ecx;
    MEM32(0x875DF4) = edx;
    MEM32(0x875DF8) = 0;
    MEM32(0x875DFC) = 0;

loc_00130CAA: ;
    (void)0; /* test LO8(ecx), 1 - flags set for next jcc */
    xmm0 = (float)(int32_t)MEM32(0x875DFC); /* cvtsi2ss */
    xmm0 = xmm0 * MEMF(0x648E90); /* mulss */
    MEMF(eax + 4) = xmm0; /* movss */
    if (TEST_NZ(LO8(ecx), 1)) { sub_00130CE7(); return; } /* jne: not equal / not zero */

loc_00130CC4: ;
    ecx = ecx | 1;
    MEM32(0x875E00) = ecx;
    ecx = 0; /* xor self */
    ecx++;
    MEM32(0x875DF4) = edx;
    MEM32(0x875DF8) = 0;
    MEM32(0x875DFC) = ecx;
    esp += 4; return; /* ret */

}

/**
 * sub_00130CF0
 * Original: 0x00130CF0 - 0x00130D5F (111 bytes, 26 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00130CF0(void)
{
    int _flags = 0; /* fallback flag var */
    float xmm0;

loc_00130CF0: ;
    edx = MEM32(0x875DF0);
    eax = ecx;
    ecx = 0; /* xor self */
    (void)0; /* test LO8(edx), 1 - flags set for next jcc */
    PUSH32(esp, esi);
    esi = MEM32(0x7F9F60);
    MEM32(eax) = 0xFFFFFFFEu;
    if (TEST_NZ(LO8(edx), 1)) goto loc_00130D27; /* jne: not equal / not zero */

loc_00130D0C: ;
    edx = edx | 1;
    MEM32(0x875DF0) = edx;
    MEM32(0x875DE4) = esi;
    MEM32(0x875DE8) = ecx;
    MEM32(0x875DEC) = ecx;

loc_00130D27: ;
    (void)0; /* test LO8(edx), 1 - flags set for next jcc */
    xmm0 = (float)(int32_t)MEM32(0x875DEC); /* cvtsi2ss */
    xmm0 = xmm0 * MEMF(0x64915C); /* mulss */
    MEMF(eax + 4) = xmm0; /* movss */
    if (TEST_NZ(LO8(edx), 1)) { sub_00130D5F(); return; } /* jne: not equal / not zero */

loc_00130D41: ;
    edx = edx | 1;
    MEM32(0x875DE8) = ecx;
    ecx++;
    MEM32(0x875DE4) = esi;
    MEM32(0x875DF0) = edx;
    MEM32(0x875DEC) = ecx;
    POP32(esp, esi);
    esp += 4; return; /* ret */

}

/**
 * sub_00130D70
 * Original: 0x00130D70 - 0x00130DA9 (57 bytes, 14 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00130D70(void)
{
    int _flags = 0; /* fallback flag var */

loc_00130D70: ;
    SET_LO8(ecx, MEM8(0x875E00));
    eax = 1;
    if (TEST_NZ(LO8(eax), LO8(ecx))) goto loc_00130DA3; /* jne: not equal / not zero */

loc_00130D7F: ;
    ecx = MEM32(0x875E00);
    ecx = ecx | eax;
    eax = MEM32(0x7F9F60);
    MEM32(0x875DF4) = eax;
    eax = 0; /* xor self */
    MEM32(0x875E00) = ecx;
    MEM32(0x875DF8) = eax;
    MEM32(0x875DFC) = eax;

loc_00130DA3: ;
    eax = 0x875DF4;
    esp += 4; return; /* ret */

}

/**
 * sub_00130DB0
 * Original: 0x00130DB0 - 0x00130DE9 (57 bytes, 14 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00130DB0(void)
{
    int _flags = 0; /* fallback flag var */

loc_00130DB0: ;
    SET_LO8(ecx, MEM8(0x875DF0));
    eax = 1;
    if (TEST_NZ(LO8(eax), LO8(ecx))) goto loc_00130DE3; /* jne: not equal / not zero */

loc_00130DBF: ;
    ecx = MEM32(0x875DF0);
    ecx = ecx | eax;
    eax = MEM32(0x7F9F60);
    MEM32(0x875DE4) = eax;
    eax = 0; /* xor self */
    MEM32(0x875DF0) = ecx;
    MEM32(0x875DE8) = eax;
    MEM32(0x875DEC) = eax;

loc_00130DE3: ;
    eax = 0x875DE4;
    esp += 4; return; /* ret */

}

/**
 * sub_00130DF0
 * Original: 0x00130DF0 - 0x00130EB2 (194 bytes, 58 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00130DF0(void)
{
    uint32_t ebp;
    int _flags = 0; /* fallback flag var */
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_00130DF0: ;
    esp = esp - 0x10;
    PUSH32(esp, ebx);
    PUSH32(esp, esi);
    esi = MEM32(0x774140);
    (void)0; /* test esi, esi - flags set for next jcc */
    PUSH32(esp, edi);
    ebx = eax;
    if (TEST_NZ(esi, esi)) goto loc_00130E98; /* jne: not equal / not zero */

loc_00130E06: ;
    eax = MEM32(0x84A19C);
    if (TEST_NZ(eax, eax)) goto loc_00130E14; /* jne: not equal / not zero */

loc_00130E0F: ;
    PUSH32(esp, 0); sub_002AED70(); /* call 0x002AED70 */

loc_00130E14: ;
    edx = MEM32(0x7FA494);
    ecx = MEM32(0x7FA4B4);
    esi = MEM32(0x84A190);
    edx++;
    ecx++;
    (void)0; /* test esi, esi - flags set for next jcc */
    MEM32(0x7FA494) = edx;
    MEM32(0x7FA4B4) = ecx;
    edi = esi;
    if (TEST_Z(esi, esi)) goto loc_00130E62; /* je: equal / zero */

loc_00130E3A: ;
    if (CMP_B(MEM32(esi + 0x80), 0xA7C)) goto loc_00130E62; /* jb: below (unsigned <) */

loc_00130E46: ;
    ecx = 0x10;
    PUSH32(esp, 0); sub_003E62A0(); /* call 0x003E62A0 */

loc_00130E50: ;
    PUSH32(esp, 0xA7C);
    PUSH32(esp, edi);
    PUSH32(esp, 0); sub_003E6BD0(); /* call 0x003E6BD0 */

loc_00130E5B: ;
    esp = esp + 8;
    if (TEST_NZ(eax, eax)) goto loc_00130E86; /* jne: not equal / not zero */

loc_00130E62: ;
    esi = MEM32(0x84A184);
    ecx = 0x10;
    edi = esi;
    PUSH32(esp, 0); sub_003E62A0(); /* call 0x003E62A0 */

loc_00130E74: ;
    PUSH32(esp, 0xA7C);
    PUSH32(esp, edi);
    PUSH32(esp, 0); sub_003E6BD0(); /* call 0x003E6BD0 */

loc_00130E7F: ;
    esp = esp + 8;
    if (TEST_Z(eax, eax)) goto loc_00130E90; /* je: equal / zero */

loc_00130E86: ;
    PUSH32(esp, eax);
    PUSH32(esp, 0); sub_00131150(); /* call 0x00131150 */

loc_00130E8C: ;
    esi = eax;
    goto loc_00130E92;

loc_00130E90: ;
    esi = 0; /* xor self */

loc_00130E92: ;
    MEM32(0x774140) = esi;

loc_00130E98: ;
    edx = 0; /* xor self */
    ecx = 0x43;
    eax = ebx;
    { uint64_t _dividend = ((uint64_t)edx << 32) | eax;
      eax = (uint32_t)(_dividend / (uint32_t)ecx);
      edx = (uint32_t)(_dividend % (uint32_t)ecx); }
    edx = edx + edx * 4;
    ecx = esi + edx * 4;
    if (CMP_NE(MEM32(ecx), ebx)) { sub_00130EB2(); return; } /* jne: not equal / not zero */

loc_00130EAD: ;
    edi = ecx + 4;
    g_seh_ebp = ebp; sub_00130ECD(); return; /* tail jmp 0x00130ECD */

}

/**
 * sub_00130F60
 * Original: 0x00130F60 - 0x00131022 (194 bytes, 58 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00130F60(void)
{
    uint32_t ebp;
    int _flags = 0; /* fallback flag var */
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_00130F60: ;
    esp = esp - 0x10;
    PUSH32(esp, ebx);
    PUSH32(esp, esi);
    esi = MEM32(0x774140);
    (void)0; /* test esi, esi - flags set for next jcc */
    PUSH32(esp, edi);
    ebx = eax;
    if (TEST_NZ(esi, esi)) goto loc_00131008; /* jne: not equal / not zero */

loc_00130F76: ;
    eax = MEM32(0x84A19C);
    if (TEST_NZ(eax, eax)) goto loc_00130F84; /* jne: not equal / not zero */

loc_00130F7F: ;
    PUSH32(esp, 0); sub_002AED70(); /* call 0x002AED70 */

loc_00130F84: ;
    edx = MEM32(0x7FA494);
    ecx = MEM32(0x7FA4B4);
    esi = MEM32(0x84A190);
    edx++;
    ecx++;
    (void)0; /* test esi, esi - flags set for next jcc */
    MEM32(0x7FA494) = edx;
    MEM32(0x7FA4B4) = ecx;
    edi = esi;
    if (TEST_Z(esi, esi)) goto loc_00130FD2; /* je: equal / zero */

loc_00130FAA: ;
    if (CMP_B(MEM32(esi + 0x80), 0xA7C)) goto loc_00130FD2; /* jb: below (unsigned <) */

loc_00130FB6: ;
    ecx = 0x10;
    PUSH32(esp, 0); sub_003E62A0(); /* call 0x003E62A0 */

loc_00130FC0: ;
    PUSH32(esp, 0xA7C);
    PUSH32(esp, edi);
    PUSH32(esp, 0); sub_003E6BD0(); /* call 0x003E6BD0 */

loc_00130FCB: ;
    esp = esp + 8;
    if (TEST_NZ(eax, eax)) goto loc_00130FF6; /* jne: not equal / not zero */

loc_00130FD2: ;
    esi = MEM32(0x84A184);
    ecx = 0x10;
    edi = esi;
    PUSH32(esp, 0); sub_003E62A0(); /* call 0x003E62A0 */

loc_00130FE4: ;
    PUSH32(esp, 0xA7C);
    PUSH32(esp, edi);
    PUSH32(esp, 0); sub_003E6BD0(); /* call 0x003E6BD0 */

loc_00130FEF: ;
    esp = esp + 8;
    if (TEST_Z(eax, eax)) goto loc_00131000; /* je: equal / zero */

loc_00130FF6: ;
    PUSH32(esp, eax);
    PUSH32(esp, 0); sub_00131150(); /* call 0x00131150 */

loc_00130FFC: ;
    esi = eax;
    goto loc_00131002;

loc_00131000: ;
    esi = 0; /* xor self */

loc_00131002: ;
    MEM32(0x774140) = esi;

loc_00131008: ;
    edx = 0; /* xor self */
    ecx = 0x43;
    eax = ebx;
    { uint64_t _dividend = ((uint64_t)edx << 32) | eax;
      eax = (uint32_t)(_dividend / (uint32_t)ecx);
      edx = (uint32_t)(_dividend % (uint32_t)ecx); }
    edx = edx + edx * 4;
    ecx = esi + edx * 4;
    if (CMP_NE(MEM32(ecx), ebx)) { sub_00131022(); return; } /* jne: not equal / not zero */

loc_0013101D: ;
    edi = ecx + 4;
    g_seh_ebp = ebp; sub_0013103D(); return; /* tail jmp 0x0013103D */

}

/**
 * sub_001310D0
 * Original: 0x001310D0 - 0x00131149 (121 bytes, 35 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_001310D0(void)
{
    int _flags = 0; /* fallback flag var */
    float xmm0;

loc_001310D0: ;
    eax = MEM32(esi);
    PUSH32(esp, edi);
    edi = MEM32(0x7F9F60);
    if (CMP_EQ(eax, edi)) { sub_00131149(); return; } /* je: equal / zero */

loc_001310DD: ;
    ecx = edi;
    ecx = ecx - eax;
    if (CMP_NE(ecx, 1)) goto loc_001310F6; /* jne: not equal / not zero */

loc_001310E6: ;
    eax = MEM32(esp + 8);
    PUSH32(esp, 0); sub_000978D0(); /* call 0x000978D0 */

loc_001310EF: ;
    xmm0 = xmm0 + MEMF(esi + 4); /* addss */
    goto loc_00131103;

loc_001310F6: ;
    xmm0 = MEMF(esi + 4); /* movss */
    xmm0 = xmm0 + MEMF(0x648D14); /* addss */

loc_00131103: ;
    /* comiss xmm0, MEMF(0x648D14) - sets EFLAGS */
    MEMF(esi + 4) = xmm0; /* movss */
    MEM32(esi) = edi;
    if ((xmm0 <= MEMF(0x648D14))) { sub_00131149(); return; } /* jbe: below or equal (unsigned <=) */

loc_00131113: ;
    PUSH32(esp, 0); sub_00130DB0(); /* call 0x00130DB0 */

loc_00131118: ;
    if (CMP_EQ(MEM32(eax), edi)) goto loc_00131123; /* je: equal / zero */

loc_0013111C: ;
    MEM32(eax + 4) = 0;

loc_00131123: ;
    edx = MEM32(eax + 4);
    edx++;
    ecx = edx;
    (void)0; /* cmp ecx, 4 - flags set for next jcc */
    MEM32(eax + 4) = edx;
    if (CMP_G(ecx, 4)) { sub_00131149(); return; } /* jg: greater (signed >) */

loc_00131131: ;
    xmm0 = MEMF(esi + 4); /* movss */
    xmm0 = xmm0 - MEMF(0x648D14); /* subss */
    MEMF(esi + 4) = xmm0; /* movss */
    SET_LO8(eax, 1);
    POP32(esp, edi);
    esp += 8; return; /* ret 4 */

}

/**
 * sub_00131150
 * Original: 0x00131150 - 0x001311B7 (103 bytes, 38 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00131150(void)
{
    uint32_t ebp;
    int _flags = 0; /* fallback flag var */
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_00131150: ;
    PUSH32(esp, ebx);
    PUSH32(esp, ebp);
    ebp = MEM32(esp + 0xC);
    PUSH32(esp, esi);
    PUSH32(esp, edi);
    esi = ebp + 4;
    edi = 0x43;
    ebx = 0; /* xor self */

loc_00131162: ;
    MEM32(esi + -4) = ebx;
    eax = esi + 4;
    MEM32(esi) = ebx;
    PUSH32(esp, 0); sub_00130C70(); /* call 0x00130C70 */

loc_0013116F: ;
    esi = esi + 0x14;
    edi--;
    if ((edi != 0)) goto loc_00131162; /* jne: not equal / not zero */

loc_00131175: ;
    esi = ebp + 0x53C;
    edi = 0x43;

loc_00131180: ;
    MEM32(esi) = ebx;
    eax = esi + 8;
    MEM32(esi + 4) = ebx;
    PUSH32(esp, 0); sub_00130C70(); /* call 0x00130C70 */

loc_0013118D: ;
    esi = esi + 0x14;
    edi--;
    if ((edi != 0)) goto loc_00131180; /* jne: not equal / not zero */

loc_00131193: ;
    eax = ebp;
    ecx = 0x43;
    /* nop */

loc_001311A0: ;
    MEM32(eax) = ebx;
    MEM32(eax + 0x53C) = ebx;
    eax = eax + 0x14;
    ecx--;
    if ((ecx != 0)) goto loc_001311A0; /* jne: not equal / not zero */

loc_001311AE: ;
    POP32(esp, edi);
    POP32(esp, esi);
    eax = ebp;
    POP32(esp, ebp);
    POP32(esp, ebx);
    esp += 8; return; /* ret 4 */

}

/**
 * sub_001311C0
 * Original: 0x001311C0 - 0x001311DE (30 bytes, 13 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_001311C0(void)
{
    int _flags = 0; /* fallback flag var */

loc_001311C0: ;
    edx = 0; /* xor self */
    PUSH32(esp, edi);
    edi = 0x43;
    eax = ecx;
    { uint64_t _dividend = ((uint64_t)edx << 32) | eax;
      eax = (uint32_t)(_dividend / (uint32_t)edi);
      edx = (uint32_t)(_dividend % (uint32_t)edi); }
    edx = edx + edx * 4;
    edi = MEM32(esi + edx * 4);
    (void)0; /* cmp edi, ecx - flags set for next jcc */
    edx = esi + edx * 4;
    if (CMP_NE(edi, ecx)) { sub_001311DE(); return; } /* jne: not equal / not zero */

loc_001311D9: ;
    eax = edx + 4;
    POP32(esp, edi);
    esp += 4; return; /* ret */

}

/**
 * sub_00131200
 * Original: 0x00131200 - 0x001312D5 (213 bytes, 79 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00131200(void)
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

loc_00131200: ;
    PUSH32(esp, ebx);
    PUSH32(esp, ebp);
    ebp = MEM32(esp + 0xC);
    ebx = eax;
    edx = 0; /* xor self */
    eax = ebp;
    ecx = 0x43;
    { uint64_t _dividend = ((uint64_t)edx << 32) | eax;
      eax = (uint32_t)(_dividend / (uint32_t)ecx);
      edx = (uint32_t)(_dividend % (uint32_t)ecx); }
    PUSH32(esp, esi);
    PUSH32(esp, edi);
    edx = edx + edx * 4;
    edi = MEM32(ebx + edx * 4);
    (void)0; /* test edi, edi - flags set for next jcc */
    esi = ebx + edx * 4;
    if (TEST_Z(edi, edi)) goto loc_0013126D; /* je: equal / zero */

loc_00131222: ;
    if (CMP_EQ(edi, ebp)) goto loc_0013126D; /* je: equal / zero */

loc_00131226: ;
    edx = 0; /* xor self */
    { uint64_t _dividend = ((uint64_t)edx << 32) | eax;
      eax = (uint32_t)(_dividend / (uint32_t)ecx);
      edx = (uint32_t)(_dividend % (uint32_t)ecx); }
    edx = edx + ecx;
    edx = edx + edx * 4;
    eax = MEM32(ebx + edx * 4);
    (void)0; /* test eax, eax - flags set for next jcc */
    ecx = ebx + edx * 4;
    if (TEST_Z(eax, eax)) { sub_001312D5(); return; } /* je: equal / zero */

loc_0013123D: ;
    if (CMP_EQ(eax, ebp)) { sub_001312D5(); return; } /* je: equal / zero */

loc_00131245: ;
    eax = 0x7A44C6B;
    { uint64_t _r = (uint64_t)eax * (uint64_t)edi;
      eax = (uint32_t)_r; edx = (uint32_t)(_r >> 32); }
    eax = edx;
    eax = eax >> 1;
    edx = 0; /* xor self */
    edi = 0x43;
    { uint64_t _dividend = ((uint64_t)edx << 32) | eax;
      eax = (uint32_t)(_dividend / (uint32_t)edi);
      edx = (uint32_t)(_dividend % (uint32_t)edi); }
    edx = edx + edi;
    eax = edx + edx * 4;
    edi = ebx + eax * 4;
    if (CMP_NE(MEM32(edi), 0)) goto loc_00131282; /* jne: not equal / not zero */

loc_00131266: ;
    eax = esi;
    PUSH32(esp, 0); sub_001312F0(); /* call 0x001312F0 */

loc_0013126D: ;
    eax = MEM32(esp + 0x18);
    MEM32(esi) = ebp;
    esi = esi + 4;
    PUSH32(esp, 0); sub_0012E1B0(); /* call 0x0012E1B0 */

loc_0013127B: ;
    POP32(esp, edi);
    POP32(esp, esi);
    POP32(esp, ebp);
    POP32(esp, ebx);
    esp += 12; return; /* ret 8 */

loc_00131282: ;
    eax = MEM32(0x7F9F60);
    ebx = MEM32(ecx + 8);
    edi = eax;
    edi = edi - ebx;
    (void)0; /* test edi, edi - flags set for next jcc */
    MEM32(esp + 0x14) = edi;
    fp_push((double)SMEM32(esp + 0x14)); /* fild */
    edx = esi;
    if (CMP_GE(edi & edi, 0)) goto loc_001312A2; /* jge: greater or equal (signed >=) */

loc_0013129C: ;
    fp_st1() += fp_top(); fp_pop(); /* fadd */

loc_001312A2: ;
    eax = eax - MEM32(esi + 8);
    (void)0; /* test eax, eax - flags set for next jcc */
    MEM32(esp + 0x14) = eax;
    fp_push((double)SMEM32(esp + 0x14)); /* fild */
    if (CMP_GE(eax & eax, 0)) goto loc_001312B7; /* jge: greater or equal (signed >=) */

loc_001312B1: ;
    fp_st1() += fp_top(); fp_pop(); /* fadd */

loc_001312B7: ;
    eax = MEM32(esp + 0x18);
    { double _t = fp_top(); fp_top() = fp_st1(); fp_st1() = _t; } /* fxch */
    _fpu_cmp = (fp_top() < fp_st1()) ? -1 : (fp_top() > fp_st1()) ? 1 : 0; fp_pop(); /* fcompi */
    /* fstp st(0) */
    if ((_fpu_cmp > 0) /* fcompi */) edx = ecx; /* cmova */
    esi = edx + 4;
    MEM32(edx) = ebp;
    PUSH32(esp, 0); sub_0012E1B0(); /* call 0x0012E1B0 */

loc_001312CE: ;
    POP32(esp, edi);
    POP32(esp, esi);
    POP32(esp, ebp);
    POP32(esp, ebx);
    esp += 12; return; /* ret 8 */

    #undef fp_push
    #undef fp_pop
    #undef fp_popp
    #undef fp_top
    #undef fp_st1
}

/**
 * sub_001312F0
 * Original: 0x001312F0 - 0x00131304 (20 bytes, 9 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_001312F0(void)
{

loc_001312F0: ;
    ecx = MEM32(eax);
    PUSH32(esp, esi);
    eax = eax + 4;
    esi = edi + 4;
    MEM32(edi) = ecx;
    PUSH32(esp, 0); sub_0012E1B0(); /* call 0x0012E1B0 */

loc_00131300: ;
    eax = edi;
    POP32(esp, esi);
    esp += 4; return; /* ret */

}

/**
 * sub_00131310
 * Original: 0x00131310 - 0x00131381 (113 bytes, 33 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00131310(void)
{
    int _flags = 0; /* fallback flag var */
    float xmm0;

loc_00131310: ;
    eax = MEM32(esi);
    PUSH32(esp, edi);
    edi = MEM32(0x7F9F60);
    if (CMP_EQ(eax, edi)) { sub_00131381(); return; } /* je: equal / zero */

loc_0013131D: ;
    xmm0 = MEMF(esi + 4); /* movss */
    ecx = edi;
    ecx = ecx - eax;
    if (CMP_NE(ecx, 1)) goto loc_00131335; /* jne: not equal / not zero */

loc_0013132B: ;
    xmm0 = xmm0 + MEMF(0x648D3C); /* addss */
    goto loc_0013133D;

loc_00131335: ;
    xmm0 = xmm0 + MEMF(0x648D14); /* addss */

loc_0013133D: ;
    /* comiss xmm0, MEMF(0x648D14) - sets EFLAGS */
    MEMF(esi + 4) = xmm0; /* movss */
    MEM32(esi) = edi;
    if ((xmm0 <= MEMF(0x648D14))) { sub_00131381(); return; } /* jbe: below or equal (unsigned <=) */

loc_0013134D: ;
    PUSH32(esp, 0); sub_00130D70(); /* call 0x00130D70 */

loc_00131352: ;
    if (CMP_EQ(MEM32(eax), edi)) goto loc_0013135D; /* je: equal / zero */

loc_00131356: ;
    MEM32(eax + 4) = 0;

loc_0013135D: ;
    edx = MEM32(eax + 4);
    edx++;
    ecx = edx;
    (void)0; /* cmp ecx, 8 - flags set for next jcc */
    MEM32(eax + 4) = edx;
    if (CMP_G(ecx, 8)) { sub_00131381(); return; } /* jg: greater (signed >) */

loc_0013136B: ;
    xmm0 = MEMF(esi + 4); /* movss */
    xmm0 = xmm0 - MEMF(0x648D14); /* subss */
    MEMF(esi + 4) = xmm0; /* movss */
    SET_LO8(eax, 1);
    POP32(esp, edi);
    esp += 4; return; /* ret */

}

/**
 * sub_00131390
 * Original: 0x00131390 - 0x00131401 (113 bytes, 33 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00131390(void)
{
    int _flags = 0; /* fallback flag var */
    float xmm0;

loc_00131390: ;
    eax = MEM32(esi);
    PUSH32(esp, edi);
    edi = MEM32(0x7F9F60);
    if (CMP_EQ(eax, edi)) { sub_00131401(); return; } /* je: equal / zero */

loc_0013139D: ;
    xmm0 = MEMF(esi + 4); /* movss */
    ecx = edi;
    ecx = ecx - eax;
    if (CMP_NE(ecx, 1)) goto loc_001313B5; /* jne: not equal / not zero */

loc_001313AB: ;
    xmm0 = xmm0 + MEMF(0x648D80); /* addss */
    goto loc_001313BD;

loc_001313B5: ;
    xmm0 = xmm0 + MEMF(0x648D14); /* addss */

loc_001313BD: ;
    /* comiss xmm0, MEMF(0x648D14) - sets EFLAGS */
    MEMF(esi + 4) = xmm0; /* movss */
    MEM32(esi) = edi;
    if ((xmm0 <= MEMF(0x648D14))) { sub_00131401(); return; } /* jbe: below or equal (unsigned <=) */

loc_001313CD: ;
    PUSH32(esp, 0); sub_00130D70(); /* call 0x00130D70 */

loc_001313D2: ;
    if (CMP_EQ(MEM32(eax), edi)) goto loc_001313DD; /* je: equal / zero */

loc_001313D6: ;
    MEM32(eax + 4) = 0;

loc_001313DD: ;
    edx = MEM32(eax + 4);
    edx++;
    ecx = edx;
    (void)0; /* cmp ecx, 8 - flags set for next jcc */
    MEM32(eax + 4) = edx;
    if (CMP_G(ecx, 8)) { sub_00131401(); return; } /* jg: greater (signed >) */

loc_001313EB: ;
    xmm0 = MEMF(esi + 4); /* movss */
    xmm0 = xmm0 - MEMF(0x648D14); /* subss */
    MEMF(esi + 4) = xmm0; /* movss */
    SET_LO8(eax, 1);
    POP32(esp, edi);
    esp += 4; return; /* ret */

}

/**
 * sub_00131410
 * Original: 0x00131410 - 0x0013144D (61 bytes, 26 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00131410(void)
{
    uint32_t ebp;
    int _flags = 0; /* fallback flag var */

loc_00131410: ;
    PUSH32(esp, ebp);
    ebp = esp;
    esp = esp & 0xFFFFFFF0u;
    esp = esp - 0x664;
    PUSH32(esp, ebx);
    PUSH32(esp, esi);
    esi = eax;
    PUSH32(esp, edi);
    eax = esp + 0x60;
    MEM32(esp + 0x10) = esi;
    PUSH32(esp, 0); sub_00129980(); /* call 0x00129980 */

loc_0013142E: ;
    eax = MEM32(esi + 0x34);
    edi = 0; /* xor self */
    if (CMP_EQ(eax, edi)) goto loc_0013143D; /* je: equal / zero */

loc_00131437: ;
    PUSH32(esp, esi);
    PUSH32(esp, 0); sub_00355B40(); /* call 0x00355B40 */

loc_0013143D: ;
    if (CMP_NE(MEM32(esi + 0x4C), edi)) { sub_0013144D(); return; } /* jne: not equal / not zero */

loc_00131442: ;
    eax = 0; /* xor self */
    POP32(esp, edi);
    POP32(esp, esi);
    POP32(esp, ebx);
    esp = ebp;
    POP32(esp, ebp);
    esp += 16; return; /* ret 12 */

}

/**
 * sub_001316F0
 * Original: 0x001316F0 - 0x00131739 (73 bytes, 16 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_001316F0(void)
{
    uint32_t ebp;
    int _flags = 0; /* fallback flag var */
    float xmm0, xmm1;
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_001316F0: ;
    xmm0 = MEMF(0x648CE4); /* movss */
    xmm1 = MEMF(0x6490F4); /* movss */
    esp = esp - 0x70;
    PUSH32(esp, ebx);
    ebx = 0; /* xor self */
    (void)0; /* cmp LO8(eax), LO8(ebx) - flags set for next jcc */
    PUSH32(esp, edi);
    ecx = 4;
    edx = 8;
    if (CMP_EQ(LO8(eax), LO8(ebx))) { sub_00131739(); return; } /* je: equal / zero */

loc_00131715: ;
    MEM32(esp + 8) = 0x1E;
    MEM32(esp + 0xC) = 0x14;
    MEMF(esp + 0x1C) = xmm0; /* movss */
    MEM16(esp + 0x44) = 0xA;
    MEM16(esp + 0x46) = LO16(edx);
    g_seh_ebp = ebp; sub_00131762(); return; /* tail jmp 0x00131762 */

}

/**
 * sub_001318F0
 * Original: 0x001318F0 - 0x00131A9F (431 bytes, 90 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_001318F0(void)
{
    uint32_t ebp;
    int _flags = 0; /* fallback flag var */
    float xmm0, xmm1, xmm7;
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_001318F0: ;
    esp = esp - 0x34;
    xmm0 = MEMF(eax + 0x78); /* movss */
    (void)0; /* cmp MEM32(eax + 0x68), 0x5E - flags set for next jcc */
    xmm1 = MEMF(eax + 0x80); /* movss */
    MEMF(esp + 0x10) = xmm0; /* movss */
    xmm0 = MEMF(eax + 0x7C); /* movss */
    xmm0 = xmm0 + MEMF(0x648F08); /* addss */
    MEMF(esp + 0x14) = xmm0; /* movss */
    MEMF(esp + 0x18) = xmm1; /* movss */
    if (CMP_NE(MEM32(eax + 0x68), 0x5E)) goto loc_00131933; /* jne: not equal / not zero */

loc_00131925: ;
    xmm0 = xmm0 + MEMF(0x6493A8); /* addss */
    MEMF(esp + 0x14) = xmm0; /* movss */

loc_00131933: ;
    ecx = MEM32(esp + 0x38);
    ecx = ecx + 0x78;
    edx = MEM32(ecx);
    MEM32(esp + 4) = edx;
    edx = MEM32(ecx + 4);
    xmm0 = MEMF(esp + 4); /* movss */
    xmm0 = xmm0 - MEMF(eax + 0x78); /* subss */
    ecx = MEM32(ecx + 8);
    MEMF(esp + 4) = xmm0; /* movss */
    MEM32(esp + 8) = edx;
    xmm0 = MEMF(esp + 8); /* movss */
    xmm0 = xmm0 - MEMF(eax + 0x7C); /* subss */
    edx = MEM32(esp + 4);
    MEM32(esp + 0xC) = ecx;
    MEMF(esp + 8) = xmm0; /* movss */
    xmm0 = MEMF(esp + 0xC); /* movss */
    xmm0 = xmm0 - MEMF(eax + 0x80); /* subss */
    eax = MEM32(esp + 8);
    PUSH32(esp, ebx);
    PUSH32(esp, ebp);
    MEM32(esp + 0x34) = eax;
    PUSH32(esp, esi);
    MEMF(esp + 0x18) = xmm0; /* movss */
    ecx = MEM32(esp + 0x18);
    eax = esp + 0x34;
    PUSH32(esp, edi);
    ebx = eax;
    MEM32(esp + 0x38) = edx;
    MEM32(esp + 0x40) = ecx;
    PUSH32(esp, 0); sub_00428323(); /* call 0x00428323 */

loc_001319AB: ;
    eax = MEM32(esp + 0x38);
    xmm0 = MEMF(0x648F08); /* movss */
    ecx = MEM32(esp + 0x3C);
    edx = MEM32(esp + 0x40);
    xmm7 = MEMF(0x648F98); /* movss */
    MEM32(esp + 0x14) = eax;
    xmm1 = MEMF(esp + 0x14); /* movss */
    xmm1 = xmm1 * xmm0; /* mulss */
    MEMF(esp + 0x14) = xmm1; /* movss */
    esi = MEM32(esp + 0x14);
    MEM32(esp + 0x18) = ecx;
    xmm1 = MEMF(esp + 0x18); /* movss */
    xmm1 = xmm1 * xmm0; /* mulss */
    MEMF(esp + 0x18) = xmm1; /* movss */
    MEM32(esp + 0x1C) = edx;
    xmm1 = MEMF(esp + 0x1C); /* movss */
    xmm1 = xmm1 * xmm0; /* mulss */
    MEM32(esp + 0x2C) = esi;
    esi = MEM32(esp + 0x18);
    xmm0 = MEMF(esp + 0x2C); /* movss */
    xmm0 = xmm0 + MEMF(esp + 0x20); /* addss */
    MEMF(esp + 0x20) = xmm0; /* movss */
    MEMF(esp + 0x1C) = xmm1; /* movss */
    MEM32(esp + 0x30) = esi;
    esi = MEM32(esp + 0x1C);
    xmm0 = MEMF(esp + 0x30); /* movss */
    xmm0 = xmm0 + MEMF(esp + 0x24); /* addss */
    MEMF(esp + 0x24) = xmm0; /* movss */
    MEM32(esp + 0x34) = esi;
    xmm0 = MEMF(esp + 0x34); /* movss */
    xmm0 = xmm0 + MEMF(esp + 0x28); /* addss */
    MEMF(esp + 0x28) = xmm0; /* movss */
    MEM32(esp + 0x14) = eax;
    xmm0 = MEMF(esp + 0x14); /* movss */
    xmm0 = xmm0 * xmm7; /* mulss */
    MEMF(esp + 0x14) = xmm0; /* movss */
    ebp = MEM32(esp + 0x14);
    MEM32(esp + 0x18) = ecx;
    xmm0 = MEMF(esp + 0x18); /* movss */
    xmm0 = xmm0 * xmm7; /* mulss */
    MEMF(esp + 0x18) = xmm0; /* movss */
    ebx = MEM32(esp + 0x18);
    MEM32(esp + 0x1C) = edx;
    xmm0 = MEMF(esp + 0x1C); /* movss */
    xmm0 = xmm0 * xmm7; /* mulss */
    MEMF(esp + 0x1C) = xmm0; /* movss */
    MEM32(esp + 0x48) = 0x28;
    g_seh_ebp = ebp; sub_00131AB0(); return; /* tail jmp 0x00131AB0 */

}

/**
 * sub_00131BF0
 * Original: 0x00131BF0 - 0x00131D18 (296 bytes, 84 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00131BF0(void)
{
    uint32_t ebp;
    int _flags = 0; /* fallback flag var */
    float xmm0, xmm5, xmm6;
    double _fp_stack[8];
    int _fp_top = 0;
    #define fp_push(v) (_fp_stack[--_fp_top & 7] = (v))
    #define fp_pop() (_fp_top++)
    #define fp_popp() (fp_pop())
    #define fp_top() _fp_stack[_fp_top & 7]
    #define fp_st1() _fp_stack[(_fp_top + 1) & 7]
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_00131BF0: ;
    esp = esp - 0x14;
    PUSH32(esp, ebx);
    PUSH32(esp, ebp);
    ebp = MEM32(esp + 0x24);
    PUSH32(esp, esi);
    PUSH32(esp, edi);
    esi = eax;
    MEM32(esp + 0x10) = 0x28;

loc_00131C05: ;
    PUSH32(esp, 0); sub_003E1D70(); /* call 0x003E1D70 */

loc_00131C0A: ;
    xmm5 = MEMF(0x648D10); /* movss */
    xmm6 = MEMF(0x648CFC); /* movss */
    xmm0 = xmm0 - xmm5; /* subss */
    xmm0 = xmm0 * xmm6; /* mulss */
    MEMF(esp + 0x18) = xmm0; /* movss */
    PUSH32(esp, 0); sub_003E1D70(); /* call 0x003E1D70 */

loc_00131C2D: ;
    xmm0 = xmm0 - xmm5; /* subss */
    xmm0 = xmm0 * MEMF(0x648CE4); /* mulss */
    MEMF(esp + 0x1C) = xmm0; /* movss */
    PUSH32(esp, 0); sub_003E1D70(); /* call 0x003E1D70 */

loc_00131C44: ;
    xmm0 = xmm0 - xmm5; /* subss */
    xmm0 = xmm0 * xmm6; /* mulss */
    MEMF(esp + 0x20) = xmm0; /* movss */
    PUSH32(esp, 0); sub_003E2480(); /* call 0x003E2480 */

loc_00131C57: ;
    edx = ((int32_t)eax < 0) ? 0xFFFFFFFF : 0; /* cdq */
    ecx = 5;
    { int64_t _dividend = ((int64_t)(int32_t)edx << 32) | eax;
      eax = (uint32_t)((int32_t)(_dividend / (int32_t)ecx));
      edx = (uint32_t)((int32_t)(_dividend % (int32_t)ecx)); }
    PUSH32(esp, ebp);
    PUSH32(esp, 0);
    PUSH32(esp, 0);
    PUSH32(esp, 0);
    PUSH32(esp, 1);
    PUSH32(esp, 0);
    PUSH32(esp, 0);
    PUSH32(esp, 0);
    ebx = edx;
    ebx = ebx + 8;
    PUSH32(esp, 0); sub_003E1D70(); /* call 0x003E1D70 */

loc_00131C78: ;
    xmm0 = xmm0 * MEMF(0x648E38); /* mulss */
    xmm0 = xmm0 + MEMF(0x649428); /* addss */
    PUSH32(esp, ecx);
    MEMF(esp) = xmm0; /* movss */
    PUSH32(esp, 0); sub_003E2480(); /* call 0x003E2480 */

loc_00131C93: ;
    edx = ((int32_t)eax < 0) ? 0xFFFFFFFF : 0; /* cdq */
    ecx = 0x15;
    { int64_t _dividend = ((int64_t)(int32_t)edx << 32) | eax;
      eax = (uint32_t)((int32_t)(_dividend / (int32_t)ecx));
      edx = (uint32_t)((int32_t)(_dividend % (int32_t)ecx)); }
    eax = esp + 0x3C;
    ecx = esi;
    SET_LO8(edx, LO8(edx) + 0x3C);
    PUSH32(esp, edx);
    PUSH32(esp, ebx);
    PUSH32(esp, 0);
    PUSH32(esp, 0x10);
    PUSH32(esp, 0); sub_00141FC0(); /* call 0x00141FC0 */

loc_00131CAF: ;
    edi = eax;
    esp = esp + 0x34;
    if (TEST_Z(edi, edi)) goto loc_00131CF9; /* je: equal / zero */

loc_00131CB8: ;
    MEM32(edi + 0x3C) = 4;
    PUSH32(esp, 0); sub_003E1D70(); /* call 0x003E1D70 */

loc_00131CC4: ;
    MEMF(esp + 0x14) = xmm0; /* movss */
    fp_push(MEMF(esp + 0x14)); /* fld float */
    fp_st1() *= fp_top(); fp_pop(); /* fmul */
    PUSH32(esp, 0); sub_00471288(); /* call 0x00471288 */

loc_00131CD9: ;
    SET_LO8(ecx, 0x46);
    SET_LO8(ecx, LO8(ecx) - LO8(eax));
    ebx = ebx + 9;
    MEM8(edi + 0x38) = LO8(ecx);
    MEM8(edi + 0x39) = LO8(ecx);
    MEM8(edi + 0x3A) = LO8(ecx);
    MEM16(edi + 0x2C) = LO16(ebx);
    MEM16(edi + 0x5C) = 9;
    MEM16(edi + 0x5E) = 0x1C;

loc_00131CF9: ;
    MEM32(esp + 0x10) = MEM32(esp + 0x10) - 1;
    if ((MEM32(esp + 0x10) != 0)) goto loc_00131C05; /* jne: not equal / not zero */

loc_00131D03: ;
    SET_LO8(eax, MEM8(esp + 0x28));
    PUSH32(esp, ebp);
    PUSH32(esp, 0); sub_001316F0(); /* call 0x001316F0 */

loc_00131D0D: ;
    esp = esp + 4;
    POP32(esp, edi);
    POP32(esp, esi);
    POP32(esp, ebp);
    POP32(esp, ebx);
    esp = esp + 0x14;
    esp += 4; return; /* ret */

    #undef fp_push
    #undef fp_pop
    #undef fp_popp
    #undef fp_top
    #undef fp_st1
}

/**
 * sub_00131D20
 * Original: 0x00131D20 - 0x00131D61 (65 bytes, 22 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00131D20(void)
{
    int _flags = 0; /* fallback flag var */

loc_00131D20: ;
    PUSH32(esp, esi);
    esi = MEM32(esp + 0xC);
    PUSH32(esp, 0xBF800000u);
    PUSH32(esp, 0xBF800000u);
    PUSH32(esp, 0x5F4234);
    PUSH32(esp, 0);
    edx = esi;
    PUSH32(esp, 0); sub_001DD890(); /* call 0x001DD890 */

loc_00131D3D: ;
    esp = esp + 0x10;
    if (TEST_NZ(LO8(eax), LO8(eax))) goto loc_00131D4E; /* jne: not equal / not zero */

loc_00131D44: ;
    PUSH32(esp, 1);
    PUSH32(esp, 0); sub_00131D70(); /* call 0x00131D70 */

loc_00131D4B: ;
    esp = esp + 4;

loc_00131D4E: ;
    eax = MEM32(esp + 8);
    PUSH32(esp, 1);
    PUSH32(esp, eax);
    eax = esi;
    PUSH32(esp, 0); sub_001318F0(); /* call 0x001318F0 */

loc_00131D5C: ;
    esp = esp + 8;
    POP32(esp, esi);
    esp += 4; return; /* ret */

}

/**
 * sub_00131D70
 * Original: 0x00131D70 - 0x0013249B (1835 bytes, 417 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00131D70(void)
{
    uint32_t ebp;
    int _flags = 0; /* fallback flag var */

loc_00131D70: ;
    PUSH32(esp, ebp);
    ebp = esp;
    esp = esp & 0xFFFFFFF0u;
    esp = esp - 0x10C;
    PUSH32(esp, edi);
    edx = esi;
    eax = esp + 0x10;
    PUSH32(esp, 0); sub_002A0430(); /* call 0x002A0430 */

loc_00131D88: ;
    eax = MEM32(0x5F4228);
    ecx = MEM32(0x5F422C);
    SET_LO16(edx, MEM16(0x5F4230));
    MEM32(esp + 0x10) = eax;
    MEM32(esp + 0x14) = ecx;
    MEM16(esp + 0x18) = LO16(edx);
    edx = MEM32(esi + 0x68);
    eax = 0; /* xor self */
    (void)0; /* cmp edx, 6 - flags set for next jcc */
    ecx = 0x3D;
    edi = esp + 0x1A;
    { uint32_t _i; for (_i = 0; _i < ecx; _i++) MEM32(edi + _i*4) = eax; }
    edi += ecx * 4; ecx = 0; /* rep stosd */
    MEM16(edi) = LO16(eax); edi += 2; /* stosw */
    if (CMP_EQ(edx, 6)) goto loc_0013243C; /* je: equal / zero */

loc_00131DC2: ;
    if (CMP_EQ(edx, 9)) goto loc_0013243C; /* je: equal / zero */

loc_00131DCB: ;
    if (CMP_EQ(edx, 0xC)) goto loc_0013243C; /* je: equal / zero */

loc_00131DD4: ;
    if (CMP_EQ(edx, 0xF)) goto loc_0013243C; /* je: equal / zero */

loc_00131DDD: ;
    if (CMP_EQ(edx, 0x10)) goto loc_0013243C; /* je: equal / zero */

loc_00131DE6: ;
    if (CMP_EQ(edx, 0x12)) goto loc_0013243C; /* je: equal / zero */

loc_00131DEF: ;
    if (CMP_EQ(edx, 0x17)) goto loc_0013243C; /* je: equal / zero */

loc_00131DF8: ;
    eax = edx;
    PUSH32(esp, 0); sub_00301180(); /* call 0x00301180 */

loc_00131DFF: ;
    if (TEST_NZ(eax, eax)) goto loc_0013243C; /* jne: not equal / not zero */

loc_00131E07: ;
    if (CMP_EQ(edx, 0x1E)) goto loc_0013243C; /* je: equal / zero */

loc_00131E10: ;
    if (CMP_EQ(edx, 0x28)) goto loc_0013243C; /* je: equal / zero */

loc_00131E19: ;
    if (CMP_EQ(edx, 0x29)) goto loc_0013243C; /* je: equal / zero */

loc_00131E22: ;
    if (CMP_EQ(edx, 0x2A)) goto loc_0013243C; /* je: equal / zero */

loc_00131E2B: ;
    if (CMP_EQ(edx, 0x2B)) goto loc_0013243C; /* je: equal / zero */

loc_00131E34: ;
    if (CMP_EQ(edx, 0x2C)) goto loc_0013243C; /* je: equal / zero */

loc_00131E3D: ;
    if (CMP_EQ(edx, 0x2D)) goto loc_0013243C; /* je: equal / zero */

loc_00131E46: ;
    if (CMP_EQ(edx, 0x2E)) goto loc_0013243C; /* je: equal / zero */

loc_00131E4F: ;
    if (CMP_EQ(edx, 0x30)) goto loc_0013243C; /* je: equal / zero */

loc_00131E58: ;
    if (CMP_EQ(edx, 0x34)) goto loc_0013243C; /* je: equal / zero */

loc_00131E61: ;
    if (CMP_EQ(edx, 0x38)) goto loc_0013243C; /* je: equal / zero */

loc_00131E6A: ;
    if (CMP_EQ(edx, 0x3A)) goto loc_0013243C; /* je: equal / zero */

loc_00131E73: ;
    if (CMP_EQ(edx, 0x41)) goto loc_0013243C; /* je: equal / zero */

loc_00131E7C: ;
    if (CMP_EQ(edx, 0x42)) goto loc_0013243C; /* je: equal / zero */

loc_00131E85: ;
    if (CMP_EQ(edx, 0x4B)) goto loc_0013243C; /* je: equal / zero */

loc_00131E8E: ;
    if (CMP_EQ(edx, 0x46)) goto loc_0013243C; /* je: equal / zero */

loc_00131E97: ;
    if (CMP_EQ(edx, 0x47)) goto loc_0013243C; /* je: equal / zero */

loc_00131EA0: ;
    if (CMP_EQ(edx, 0x49)) goto loc_0013243C; /* je: equal / zero */

loc_00131EA9: ;
    if (CMP_EQ(edx, 0x4A)) goto loc_0013243C; /* je: equal / zero */

loc_00131EB2: ;
    if (CMP_EQ(edx, 0x4C)) goto loc_0013243C; /* je: equal / zero */

loc_00131EBB: ;
    if (CMP_EQ(edx, 0x4D)) goto loc_0013243C; /* je: equal / zero */

loc_00131EC4: ;
    if (CMP_EQ(edx, 0x4E)) goto loc_0013243C; /* je: equal / zero */

loc_00131ECD: ;
    if (CMP_EQ(edx, 0x4F)) goto loc_0013243C; /* je: equal / zero */

loc_00131ED6: ;
    if (CMP_EQ(edx, 0x51)) goto loc_0013243C; /* je: equal / zero */

loc_00131EDF: ;
    if (CMP_EQ(edx, 0x52)) goto loc_0013243C; /* je: equal / zero */

loc_00131EE8: ;
    if (CMP_EQ(edx, 0x55)) goto loc_0013243C; /* je: equal / zero */

loc_00131EF1: ;
    if (CMP_EQ(edx, 0x56)) goto loc_0013243C; /* je: equal / zero */

loc_00131EFA: ;
    if (CMP_EQ(edx, 0x5D)) goto loc_0013243C; /* je: equal / zero */

loc_00131F03: ;
    if (CMP_EQ(edx, 0x60)) goto loc_0013243C; /* je: equal / zero */

loc_00131F0C: ;
    if (CMP_EQ(edx, 0x61)) goto loc_0013243C; /* je: equal / zero */

loc_00131F15: ;
    if (CMP_EQ(edx, 0x62)) goto loc_0013243C; /* je: equal / zero */

loc_00131F1E: ;
    if (CMP_EQ(edx, 0x63)) goto loc_0013243C; /* je: equal / zero */

loc_00131F27: ;
    if (CMP_EQ(edx, 0x66)) goto loc_0013243C; /* je: equal / zero */

loc_00131F30: ;
    if (CMP_EQ(edx, 0x67)) goto loc_0013243C; /* je: equal / zero */

loc_00131F39: ;
    if (CMP_EQ(edx, 0x6F)) goto loc_0013243C; /* je: equal / zero */

loc_00131F42: ;
    if (CMP_EQ(edx, 0x70)) goto loc_0013243C; /* je: equal / zero */

loc_00131F4B: ;
    if (CMP_EQ(edx, 0x73)) goto loc_0013243C; /* je: equal / zero */

loc_00131F54: ;
    if (CMP_EQ(edx, 0x77)) goto loc_0013243C; /* je: equal / zero */

loc_00131F5D: ;
    if (CMP_EQ(edx, 0x7B)) goto loc_0013243C; /* je: equal / zero */

loc_00131F66: ;
    if (CMP_EQ(edx, 0x7D)) goto loc_0013243C; /* je: equal / zero */

loc_00131F6F: ;
    if (CMP_EQ(edx, 0x7F)) goto loc_0013243C; /* je: equal / zero */

loc_00131F78: ;
    if (CMP_EQ(edx, 0x82)) goto loc_0013243C; /* je: equal / zero */

loc_00131F84: ;
    if (CMP_EQ(edx, 0x83)) goto loc_0013243C; /* je: equal / zero */

loc_00131F90: ;
    if (CMP_EQ(edx, 0x84)) goto loc_0013243C; /* je: equal / zero */

loc_00131F9C: ;
    if (CMP_EQ(edx, 0x89)) goto loc_0013243C; /* je: equal / zero */

loc_00131FA8: ;
    if (CMP_EQ(edx, 0x8C)) goto loc_0013243C; /* je: equal / zero */

loc_00131FB4: ;
    if (CMP_EQ(edx, 0x8E)) goto loc_0013243C; /* je: equal / zero */

loc_00131FC0: ;
    if (CMP_EQ(edx, 0x8F)) goto loc_0013243C; /* je: equal / zero */

loc_00131FCC: ;
    if (CMP_EQ(edx, 0x91)) goto loc_0013243C; /* je: equal / zero */

loc_00131FD8: ;
    if (CMP_EQ(edx, 0x94)) goto loc_0013243C; /* je: equal / zero */

loc_00131FE4: ;
    if (CMP_EQ(edx, 0x9E)) goto loc_0013243C; /* je: equal / zero */

loc_00131FF0: ;
    if (CMP_EQ(edx, 0xA1)) goto loc_0013243C; /* je: equal / zero */

loc_00131FFC: ;
    if (CMP_EQ(edx, 0xA6)) goto loc_0013243C; /* je: equal / zero */

loc_00132008: ;
    if (CMP_EQ(edx, 0xAB)) goto loc_0013243C; /* je: equal / zero */

loc_00132014: ;
    if (CMP_EQ(edx, 0xAC)) goto loc_0013243C; /* je: equal / zero */

loc_00132020: ;
    if (CMP_EQ(edx, 0xB2)) goto loc_0013243C; /* je: equal / zero */

loc_0013202C: ;
    if (CMP_EQ(edx, 0xB4)) goto loc_0013243C; /* je: equal / zero */

loc_00132038: ;
    if (CMP_EQ(edx, 0xB7)) goto loc_0013243C; /* je: equal / zero */

loc_00132044: ;
    if (CMP_EQ(edx, 0xB8)) goto loc_0013243C; /* je: equal / zero */

loc_00132050: ;
    if (CMP_EQ(edx, 0xB9)) goto loc_0013243C; /* je: equal / zero */

loc_0013205C: ;
    if (CMP_EQ(edx, 5)) goto loc_0013241C; /* je: equal / zero */

loc_00132065: ;
    if (CMP_EQ(edx, 7)) goto loc_0013241C; /* je: equal / zero */

loc_0013206E: ;
    if (CMP_EQ(edx, 0x13)) goto loc_0013241C; /* je: equal / zero */

loc_00132077: ;
    if (CMP_EQ(edx, 0x20)) goto loc_0013241C; /* je: equal / zero */

loc_00132080: ;
    if (CMP_EQ(edx, 0x23)) goto loc_0013241C; /* je: equal / zero */

loc_00132089: ;
    if (CMP_EQ(edx, 0x44)) goto loc_0013241C; /* je: equal / zero */

loc_00132092: ;
    if (CMP_EQ(edx, 0x5A)) goto loc_0013241C; /* je: equal / zero */

loc_0013209B: ;
    if (CMP_EQ(edx, 0x5C)) goto loc_0013241C; /* je: equal / zero */

loc_001320A4: ;
    if (CMP_EQ(edx, 0x5E)) goto loc_0013241C; /* je: equal / zero */

loc_001320AD: ;
    if (CMP_EQ(edx, 0x5F)) goto loc_0013241C; /* je: equal / zero */

loc_001320B6: ;
    if (CMP_EQ(edx, 0x6D)) goto loc_0013241C; /* je: equal / zero */

loc_001320BF: ;
    if (CMP_EQ(edx, 0x74)) goto loc_0013241C; /* je: equal / zero */

loc_001320C8: ;
    eax = MEM32(esi + 0x70);
    if (CMP_EQ(eax, 0x75)) goto loc_0013241C; /* je: equal / zero */

loc_001320D4: ;
    if (CMP_EQ(edx, 0x78)) goto loc_0013241C; /* je: equal / zero */

loc_001320DD: ;
    if (CMP_EQ(edx, 0x7A)) goto loc_0013241C; /* je: equal / zero */

loc_001320E6: ;
    if (CMP_EQ(edx, 0x8A)) goto loc_0013241C; /* je: equal / zero */

loc_001320F2: ;
    if (CMP_EQ(edx, 0x8D)) goto loc_0013241C; /* je: equal / zero */

loc_001320FE: ;
    if (CMP_EQ(edx, 0x13F)) goto loc_0013241C; /* je: equal / zero */

loc_0013210A: ;
    if (CMP_EQ(edx, 0xAD)) goto loc_0013241C; /* je: equal / zero */

loc_00132116: ;
    if (CMP_EQ(edx, 0xAE)) goto loc_0013241C; /* je: equal / zero */

loc_00132122: ;
    if (CMP_EQ(edx, 0xAF)) goto loc_0013241C; /* je: equal / zero */

loc_0013212E: ;
    if (CMP_EQ(edx, 0xB1)) goto loc_0013241C; /* je: equal / zero */

loc_0013213A: ;
    if (TEST_Z(edx, edx)) goto loc_001323F6; /* je: equal / zero */

loc_00132142: ;
    if (CMP_EQ(edx, 1)) goto loc_001323F6; /* je: equal / zero */

loc_0013214B: ;
    if (CMP_EQ(edx, 2)) goto loc_001323F6; /* je: equal / zero */

loc_00132154: ;
    if (CMP_EQ(edx, 3)) goto loc_001323F6; /* je: equal / zero */

loc_0013215D: ;
    if (CMP_EQ(edx, 4)) goto loc_001323F6; /* je: equal / zero */

loc_00132166: ;
    if (CMP_EQ(edx, 0x111)) goto loc_001323F6; /* je: equal / zero */

loc_00132172: ;
    if (CMP_EQ(edx, 0x114)) goto loc_001323F6; /* je: equal / zero */

loc_0013217E: ;
    if (CMP_EQ(edx, 0x96)) goto loc_001323F6; /* je: equal / zero */

loc_0013218A: ;
    if (CMP_EQ(edx, 8)) goto loc_001323F6; /* je: equal / zero */

loc_00132193: ;
    if (CMP_EQ(edx, 0xA)) goto loc_001323F6; /* je: equal / zero */

loc_0013219C: ;
    if (CMP_EQ(edx, 0x11)) goto loc_001323F6; /* je: equal / zero */

loc_001321A5: ;
    if (CMP_EQ(edx, 0x14)) goto loc_001323F6; /* je: equal / zero */

loc_001321AE: ;
    if (CMP_EQ(edx, 0x16)) goto loc_001323F6; /* je: equal / zero */

loc_001321B7: ;
    if (CMP_EQ(edx, 0x1A)) goto loc_001323F6; /* je: equal / zero */

loc_001321C0: ;
    if (CMP_EQ(edx, 0x21)) goto loc_001323F6; /* je: equal / zero */

loc_001321C9: ;
    if (CMP_EQ(edx, 0x22)) goto loc_001323F6; /* je: equal / zero */

loc_001321D2: ;
    if (CMP_EQ(edx, 0x26)) goto loc_001323F6; /* je: equal / zero */

loc_001321DB: ;
    if (CMP_EQ(edx, 0x27)) goto loc_001323F6; /* je: equal / zero */

loc_001321E4: ;
    if (CMP_EQ(edx, 0x31)) goto loc_001323F6; /* je: equal / zero */

loc_001321ED: ;
    if (CMP_EQ(edx, 0x36)) goto loc_001323F6; /* je: equal / zero */

loc_001321F6: ;
    if (CMP_EQ(edx, 0x3B)) goto loc_001323F6; /* je: equal / zero */

loc_001321FF: ;
    if (CMP_EQ(edx, 0x3E)) goto loc_001323F6; /* je: equal / zero */

loc_00132208: ;
    if (CMP_EQ(edx, 0x50)) goto loc_001323F6; /* je: equal / zero */

loc_00132211: ;
    if (CMP_EQ(edx, 0x53)) goto loc_001323F6; /* je: equal / zero */

loc_0013221A: ;
    if (CMP_EQ(edx, 0x54)) goto loc_001323F6; /* je: equal / zero */

loc_00132223: ;
    if (CMP_EQ(edx, 0x58)) goto loc_001323F6; /* je: equal / zero */

loc_0013222C: ;
    if (CMP_EQ(edx, 0x5B)) goto loc_001323F6; /* je: equal / zero */

loc_00132235: ;
    if (CMP_EQ(edx, 0x64)) goto loc_001323F6; /* je: equal / zero */

loc_0013223E: ;
    if (CMP_EQ(edx, 0x69)) goto loc_001323F6; /* je: equal / zero */

loc_00132247: ;
    if (CMP_EQ(edx, 0x71)) goto loc_001323F6; /* je: equal / zero */

loc_00132250: ;
    if (CMP_EQ(edx, 0x6B)) goto loc_001323F6; /* je: equal / zero */

loc_00132259: ;
    if (CMP_EQ(edx, 0x72)) goto loc_001323F6; /* je: equal / zero */

loc_00132262: ;
    if (CMP_EQ(edx, 0x76)) goto loc_001323F6; /* je: equal / zero */

loc_0013226B: ;
    if (CMP_EQ(edx, 0x79)) goto loc_001323F6; /* je: equal / zero */

loc_00132274: ;
    if (CMP_EQ(eax, 0x80)) goto loc_001323F6; /* je: equal / zero */

loc_0013227F: ;
    if (CMP_EQ(edx, 0x86)) goto loc_001323F6; /* je: equal / zero */

loc_0013228B: ;
    if (CMP_EQ(edx, 0x87)) goto loc_001323F6; /* je: equal / zero */

loc_00132297: ;
    if (CMP_EQ(edx, 0x88)) goto loc_001323F6; /* je: equal / zero */

loc_001322A3: ;
    if (CMP_EQ(edx, 0x90)) goto loc_001323F6; /* je: equal / zero */

loc_001322AF: ;
    if (CMP_EQ(edx, 0x97)) goto loc_001323F6; /* je: equal / zero */

loc_001322BB: ;
    if (CMP_EQ(edx, 0x98)) goto loc_001323F6; /* je: equal / zero */

loc_001322C7: ;
    if (CMP_EQ(edx, 0x9A)) goto loc_001323F6; /* je: equal / zero */

loc_001322D3: ;
    if (CMP_EQ(edx, 0x9B)) goto loc_001323F6; /* je: equal / zero */

loc_001322DF: ;
    if (CMP_EQ(edx, 0x9C)) goto loc_001323F6; /* je: equal / zero */

loc_001322EB: ;
    if (CMP_EQ(edx, 0x9D)) goto loc_001323F6; /* je: equal / zero */

loc_001322F7: ;
    if (CMP_EQ(edx, 0x9F)) goto loc_001323F6; /* je: equal / zero */

loc_00132303: ;
    if (CMP_EQ(edx, 0xA0)) goto loc_001323F6; /* je: equal / zero */

loc_0013230F: ;
    if (CMP_EQ(edx, 0xA2)) goto loc_001323F6; /* je: equal / zero */

loc_0013231B: ;
    if (CMP_EQ(edx, 0xA4)) goto loc_001323F6; /* je: equal / zero */

loc_00132327: ;
    if (CMP_EQ(edx, 0xA5)) goto loc_001323F6; /* je: equal / zero */

loc_00132333: ;
    if (CMP_EQ(edx, 0xA7)) goto loc_001323F6; /* je: equal / zero */

loc_0013233F: ;
    if (CMP_EQ(edx, 0xB0)) goto loc_001323F6; /* je: equal / zero */

loc_0013234B: ;
    if (CMP_EQ(edx, 0xB3)) goto loc_001323F6; /* je: equal / zero */

loc_00132357: ;
    if (CMP_EQ(edx, 0xB5)) goto loc_001323F6; /* je: equal / zero */

loc_00132363: ;
    if (CMP_EQ(edx, 0xB6)) goto loc_001323F6; /* je: equal / zero */

loc_0013236F: ;
    if (CMP_EQ(edx, 0x25)) goto loc_001323DF; /* je: equal / zero */

loc_00132374: ;
    if (CMP_EQ(edx, 0x92)) goto loc_001323DF; /* je: equal / zero */

loc_0013237C: ;
    if (CMP_EQ(edx, 0x95)) goto loc_001323DF; /* je: equal / zero */

loc_00132384: ;
    if (CMP_NE(edx, 0x3F)) goto loc_001323AD; /* jne: not equal / not zero */

loc_00132389: ;
    edi = esp + 0x10;
    edi--;
    edi = edi;

loc_00132390: ;
    SET_LO8(eax, MEM8(edi + 1));
    edi++;
    if (TEST_NZ(LO8(eax), LO8(eax))) goto loc_00132390; /* jne: not equal / not zero */

loc_00132398: ;
    eax = MEM32(0x5F4204);
    SET_LO8(ecx, MEM8(0x5F4208));
    MEM32(edi) = eax;
    MEM8(edi + 4) = LO8(ecx);
    goto loc_0013245B;

loc_001323AD: ;
    if (CMP_NE(edx, 0x93)) goto loc_00132496; /* jne: not equal / not zero */

loc_001323B9: ;
    edi = esp + 0x10;
    edi--;
    edi = edi;

loc_001323C0: ;
    SET_LO8(eax, MEM8(edi + 1));
    edi++;
    if (TEST_NZ(LO8(eax), LO8(eax))) goto loc_001323C0; /* jne: not equal / not zero */

loc_001323C8: ;
    edx = MEM32(0x5F41FC);
    SET_LO16(eax, MEM16(0x5F4200));
    MEM32(edi) = edx;
    MEM16(edi + 4) = LO16(eax);
    goto loc_0013245B;

loc_001323DF: ;
    edi = esp + 0x10;
    edi--;

loc_001323E4: ;
    SET_LO8(eax, MEM8(edi + 1));
    edi++;
    if (TEST_NZ(LO8(eax), LO8(eax))) goto loc_001323E4; /* jne: not equal / not zero */

loc_001323EC: ;
    ecx = MEM32(0x5F420C);
    MEM32(edi) = ecx;
    goto loc_0013245B;

loc_001323F6: ;
    edi = esp + 0x10;
    edi--;
    goto loc_00132400;

    /* nop */

loc_00132400: ;
    SET_LO8(eax, MEM8(edi + 1));
    edi++;
    if (TEST_NZ(LO8(eax), LO8(eax))) goto loc_00132400; /* jne: not equal / not zero */

loc_00132408: ;
    edx = MEM32(0x5F4210);
    SET_LO16(eax, MEM16(0x5F4214));
    MEM32(edi) = edx;
    MEM16(edi + 4) = LO16(eax);
    goto loc_0013245B;

loc_0013241C: ;
    edi = esp + 0x10;
    edi--;

loc_00132421: ;
    SET_LO8(eax, MEM8(edi + 1));
    edi++;
    if (TEST_NZ(LO8(eax), LO8(eax))) goto loc_00132421; /* jne: not equal / not zero */

loc_00132429: ;
    ecx = MEM32(0x5F4218);
    SET_LO8(edx, MEM8(0x5F421C));
    MEM32(edi) = ecx;
    MEM8(edi + 4) = LO8(edx);
    goto loc_0013245B;

loc_0013243C: ;
    edi = esp + 0x10;
    edi--;

loc_00132441: ;
    SET_LO8(eax, MEM8(edi + 1));
    edi++;
    if (TEST_NZ(LO8(eax), LO8(eax))) goto loc_00132441; /* jne: not equal / not zero */

loc_00132449: ;
    eax = MEM32(0x5F4220);
    SET_LO16(ecx, MEM16(0x5F4224));
    MEM32(edi) = eax;
    MEM16(edi + 4) = LO16(ecx);

loc_0013245B: ;
    SET_LO8(eax, MEM8(ebp + 8));
    edi = esp + 0x10;
    edi--;
    if (TEST_Z(LO8(eax), LO8(eax))) goto loc_00132486; /* je: equal / zero */

loc_00132467: ;
    SET_LO8(eax, MEM8(edi + 1));
    edi++;
    if (TEST_NZ(LO8(eax), LO8(eax))) goto loc_00132467; /* jne: not equal / not zero */

loc_0013246F: ;
    edx = MEM32(0x5F41F4);
    SET_LO16(eax, MEM16(0x5F41F8));
    MEM32(edi) = edx;
    MEM16(edi + 4) = LO16(eax);
    POP32(esp, edi);
    esp = ebp;
    POP32(esp, ebp);
    esp += 4; return; /* ret */

loc_00132486: ;
    SET_LO8(eax, MEM8(edi + 1));
    edi++;
    if (TEST_NZ(LO8(eax), LO8(eax))) goto loc_00132486; /* jne: not equal / not zero */

loc_0013248E: ;
    ecx = MEM32(0x5F41F0);
    MEM32(edi) = ecx;

loc_00132496: ;
    POP32(esp, edi);
    esp = ebp;
    POP32(esp, ebp);
    esp += 4; return; /* ret */

}

/**
 * sub_001324A0
 * Original: 0x001324A0 - 0x001324B1 (17 bytes, 7 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_001324A0(void)
{

loc_001324A0: ;
    PUSH32(esp, esi);
    esi = MEM32(esp + 0xC);
    PUSH32(esp, 0);
    PUSH32(esp, 0); sub_00131D70(); /* call 0x00131D70 */

loc_001324AC: ;
    esp = esp + 4;
    POP32(esp, esi);
    esp += 4; return; /* ret */

}

/**
 * sub_001324C0
 * Original: 0x001324C0 - 0x0013255D (157 bytes, 35 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_001324C0(void)
{
    float xmm0, xmm1;

loc_001324C0: ;
    esp = esp - 0x24;
    xmm1 = MEMF(0x648D14); /* movss */
    PUSH32(esp, ebx);
    PUSH32(esp, esi);
    esi = MEM32(esp + 0x34);
    xmm0 = MEMF(esi + 0x78); /* movss */
    MEMF(esp + 0x20) = xmm0; /* movss */
    xmm0 = MEMF(esi + 0x7C); /* movss */
    xmm0 = xmm0 + MEMF(0x64908C); /* addss */
    MEMF(esp + 0x24) = xmm0; /* movss */
    xmm0 = MEMF(esi + 0x80); /* movss */
    MEMF(esp + 0x28) = xmm0; /* movss */
    xmm0 = MEMF(esi + 0x78); /* movss */
    MEMF(esp + 0x14) = xmm0; /* movss */
    xmm0 = MEMF(esi + 0x7C); /* movss */
    xmm0 = xmm0 + MEMF(0x6490B8); /* addss */
    MEMF(esp + 0x18) = xmm0; /* movss */
    xmm0 = MEMF(esi + 0x80); /* movss */
    eax = esp + 8;
    PUSH32(esp, eax);
    ecx = esp + 0x18;
    MEMF(esp + 0x20) = xmm0; /* movss */
    xmm0 = 0.0f; /* xorps self = zero */
    PUSH32(esp, ecx);
    SET_LO8(ebx, LO8(ebx) | 0xFF);
    eax = esp + 0x28;
    MEMF(esp + 0x10) = xmm0; /* movss */
    MEMF(esp + 0x14) = xmm1; /* movss */
    MEMF(esp + 0x18) = xmm0; /* movss */
    PUSH32(esp, 0); sub_000B29A0(); /* call 0x000B29A0 */

loc_00132554: ;
    esp = esp + 8;
    POP32(esp, esi);
    POP32(esp, ebx);
    esp = esp + 0x24;
    esp += 4; return; /* ret */

}

/**
 * sub_00132560
 * Original: 0x00132560 - 0x00132594 (52 bytes, 20 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00132560(void)
{
    int _flags = 0; /* fallback flag var */

loc_00132560: ;
    PUSH32(esp, esi);
    esi = MEM32(esp + 0xC);
    eax = MEM32(esi + 0x68);
    if (CMP_A(eax, 0x111)) goto loc_00132578; /* ja: above (unsigned >) */

loc_0013256F: ;
    if (CMP_EQ(eax, 0x111)) goto loc_0013257F; /* je: equal / zero */

loc_00132571: ;
    if (CMP_BE(eax, 4)) goto loc_0013257F; /* jbe: below or equal (unsigned <=) */

loc_00132576: ;
    POP32(esp, esi);
    esp += 4; return; /* ret */

loc_00132578: ;
    if (CMP_NE(eax, 0x114)) goto loc_00132592; /* jne: not equal / not zero */

loc_0013257F: ;
    PUSH32(esp, 0xFF);
    PUSH32(esp, 1);
    PUSH32(esp, 0);
    PUSH32(esp, 0xA);
    PUSH32(esp, 0); sub_000C6BF0(); /* call 0x000C6BF0 */

loc_0013258F: ;
    esp = esp + 0x10;

loc_00132592: ;
    POP32(esp, esi);
    esp += 4; return; /* ret */

}

/**
 * sub_001325A0
 * Original: 0x001325A0 - 0x001325D4 (52 bytes, 20 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_001325A0(void)
{
    int _flags = 0; /* fallback flag var */

loc_001325A0: ;
    PUSH32(esp, esi);
    esi = MEM32(esp + 0xC);
    eax = MEM32(esi + 0x68);
    if (CMP_A(eax, 0x111)) goto loc_001325B8; /* ja: above (unsigned >) */

loc_001325AF: ;
    if (CMP_EQ(eax, 0x111)) goto loc_001325BF; /* je: equal / zero */

loc_001325B1: ;
    if (CMP_BE(eax, 4)) goto loc_001325BF; /* jbe: below or equal (unsigned <=) */

loc_001325B6: ;
    POP32(esp, esi);
    esp += 4; return; /* ret */

loc_001325B8: ;
    if (CMP_NE(eax, 0x114)) goto loc_001325D2; /* jne: not equal / not zero */

loc_001325BF: ;
    PUSH32(esp, 0xFF);
    PUSH32(esp, 1);
    PUSH32(esp, 0);
    PUSH32(esp, 0xC);
    PUSH32(esp, 0); sub_000C6BF0(); /* call 0x000C6BF0 */

loc_001325CF: ;
    esp = esp + 0x10;

loc_001325D2: ;
    POP32(esp, esi);
    esp += 4; return; /* ret */

}

/**
 * sub_001325E0
 * Original: 0x001325E0 - 0x00132723 (323 bytes, 71 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_001325E0(void)
{
    uint32_t ebp;
    int _flags = 0; /* fallback flag var */
    float xmm0;

loc_001325E0: ;
    PUSH32(esp, ebp);
    ebp = esp;
    esp = esp & 0xFFFFFFF0u;
    esp = esp - 0xF8;
    PUSH32(esp, esi);
    esi = eax;
    eax = MEM32(esi + 0x68);
    (void)0; /* cmp eax, 0x111 - flags set for next jcc */
    PUSH32(esp, edi);
    if (CMP_A(eax, 0x111)) goto loc_00132607; /* ja: above (unsigned >) */

loc_001325FA: ;
    if (CMP_EQ(eax, 0x111)) goto loc_00132612; /* je: equal / zero */

loc_001325FC: ;
    if (CMP_BE(eax, 4)) goto loc_00132612; /* jbe: below or equal (unsigned <=) */

loc_00132601: ;
    POP32(esp, edi);
    POP32(esp, esi);
    esp = ebp;
    POP32(esp, ebp);
    esp += 4; return; /* ret */

loc_00132607: ;
    if (CMP_NE(eax, 0x114)) goto loc_0013271D; /* jne: not equal / not zero */

loc_00132612: ;
    PUSH32(esp, 0xFF);
    PUSH32(esp, 0x3F19999A);
    edi = 0x5A;
    PUSH32(esp, 0); sub_000B8A70(); /* call 0x000B8A70 */

loc_00132626: ;
    esp = esp + 8;
    edx = esi;
    eax = esp + 0x50;
    PUSH32(esp, 0); sub_002A0430(); /* call 0x002A0430 */

loc_00132634: ;
    xmm0 = MEMF(esi + 0x78); /* movss */
    MEMF(esp + 8) = xmm0; /* movss */
    xmm0 = MEMF(esi + 0x7C); /* movss */
    xmm0 = xmm0 + MEMF(0x648F08); /* addss */
    MEMF(esp + 0xC) = xmm0; /* movss */
    xmm0 = MEMF(esi + 0x80); /* movss */
    MEMF(esp + 0x10) = xmm0; /* movss */
    xmm0 = MEMF(0x6490F4); /* movss */
    MEMF(esp + 0x14) = xmm0; /* movss */
    xmm0 = MEMF(0x648D20); /* movss */
    MEMF(esp + 0x18) = xmm0; /* movss */
    xmm0 = MEMF(0x64A888); /* movss */
    MEMF(esp + 0x1C) = xmm0; /* movss */
    xmm0 = MEMF(0x64A884); /* movss */
    eax = 0x1E;
    MEMF(esp + 0x20) = xmm0; /* movss */
    xmm0 = MEMF(0x6498C4); /* movss */
    MEM16(esp + 0x34) = LO16(eax);
    MEM16(esp + 0x36) = LO16(eax);
    eax = 0x64;
    MEMF(esp + 0x24) = xmm0; /* movss */
    xmm0 = MEMF(0x648CDC); /* movss */
    MEM16(esp + 0x38) = LO16(eax);
    MEM16(esp + 0x3A) = LO16(eax);
    eax = 0; /* xor self */
    MEMF(esp + 0x28) = xmm0; /* movss */
    xmm0 = MEMF(0x648D3C); /* movss */
    edi = esp + 8;
    MEM16(esp + 0x2C) = 0xC;
    MEM16(esp + 0x2E) = 5;
    MEM16(esp + 0x30) = 3;
    MEM16(esp + 0x32) = 2;
    MEMF(esp + 0x40) = xmm0; /* movss */
    MEM16(esp + 0x44) = 0x10;
    MEM16(esp + 0x46) = 0xF;
    MEM32(esp + 0x48) = eax;
    MEM8(esp + 0x3C) = LO8(eax);
    PUSH32(esp, 0); sub_000F5A20(); /* call 0x000F5A20 */

loc_0013271D: ;
    POP32(esp, edi);
    POP32(esp, esi);
    esp = ebp;
    POP32(esp, ebp);
    esp += 4; return; /* ret */

}

/**
 * sub_00132730
 * Original: 0x00132730 - 0x0013274B (27 bytes, 9 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00132730(void)
{
    uint32_t ebp;
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_00132730: ;
    PUSH32(esp, esi);
    esi = MEM32(esp + 8);
    PUSH32(esp, edi);
    edi = 0x1F4;
    PUSH32(esp, 0); sub_000B93E0(); /* call 0x000B93E0 */

loc_00132740: ;
    eax = MEM32(esp + 0x10);
    POP32(esp, edi);
    POP32(esp, esi);
    g_seh_ebp = ebp; sub_001325E0(); return; /* tail jmp 0x001325E0 */

}

/**
 * sub_00132750
 * Original: 0x00132750 - 0x001328A2 (338 bytes, 70 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00132750(void)
{
    uint32_t ebp;
    int _flags = 0; /* fallback flag var */
    float xmm0;

loc_00132750: ;
    PUSH32(esp, ebp);
    ebp = esp;
    esp = esp & 0xFFFFFFF0u;
    esp = esp - 0x108;
    PUSH32(esp, esi);
    esi = MEM32(ebp + 0xC);
    xmm0 = MEMF(esi + 0x78); /* movss */
    MEMF(esp + 8) = xmm0; /* movss */
    xmm0 = MEMF(esi + 0x7C); /* movss */
    xmm0 = xmm0 + MEMF(0x6494C4); /* addss */
    MEMF(esp + 0xC) = xmm0; /* movss */
    xmm0 = MEMF(esi + 0x80); /* movss */
    PUSH32(esp, edi);
    edx = esi;
    eax = esp + 0x60;
    MEMF(esp + 0x14) = xmm0; /* movss */
    PUSH32(esp, 0); sub_002A0430(); /* call 0x002A0430 */

loc_00132798: ;
    eax = esi;
    PUSH32(esp, 0); sub_000AFD20(); /* call 0x000AFD20 */

loc_0013279F: ;
    if (CMP_EQ(eax, 0x63)) goto loc_0013289C; /* je: equal / zero */

loc_001327A8: ;
    eax = eax << 4;
    SET_LO8(eax, MEM8(eax + 0x58EEC6));
    if (CMP_EQ(LO8(eax), 2)) goto loc_0013289C; /* je: equal / zero */

loc_001327B9: ;
    xmm0 = MEMF(0x64A558); /* movss */
    ecx = MEM32(esp + 0xC);
    edx = MEM32(esp + 0x10);
    MEMF(esp + 0x24) = xmm0; /* movss */
    xmm0 = MEMF(0x64A55C); /* movss */
    MEMF(esp + 0x28) = xmm0; /* movss */
    xmm0 = MEMF(0x64A554); /* movss */
    MEMF(esp + 0x2C) = xmm0; /* movss */
    xmm0 = 0.0f; /* xorps self = zero */
    MEMF(esp + 0x30) = xmm0; /* movss */
    xmm0 = MEMF(0x64A560); /* movss */
    MEM32(esp + 0x18) = ecx;
    ecx = MEM32(esp + 0x14);
    MEMF(esp + 0x34) = xmm0; /* movss */
    xmm0 = MEMF(0x64A564); /* movss */
    (void)0; /* cmp LO8(eax), 1 - flags set for next jcc */
    MEM32(esp + 0x1C) = edx;
    MEM32(esp + 0x20) = ecx;
    ecx = 0xF;
    MEMF(esp + 0x38) = xmm0; /* movss */
    xmm0 = MEMF(0x648D10); /* movss */
    SET_LO8(edx, (CMP_EQ(LO8(eax), 1)) ? 1 : 0); /* sete */
    edi = esp + 0x18;
    MEM16(esp + 0x3C) = LO16(ecx);
    MEM16(esp + 0x3E) = 0xC;
    MEM16(esp + 0x40) = 3;
    MEM16(esp + 0x42) = 1;
    MEM16(esp + 0x44) = 0x1F;
    MEM16(esp + 0x46) = 0x13;
    MEM16(esp + 0x48) = 0x9B;
    MEM16(esp + 0x4A) = 0x64;
    MEMF(esp + 0x50) = xmm0; /* movss */
    MEM16(esp + 0x54) = 0x10;
    MEM16(esp + 0x56) = LO16(ecx);
    MEM32(esp + 0x58) = 0;
    MEM8(esp + 0x4C) = LO8(edx);
    PUSH32(esp, 0); sub_000F5A20(); /* call 0x000F5A20 */

loc_0013288F: ;
    PUSH32(esp, 0xFF);
    PUSH32(esp, 0); sub_000B96D0(); /* call 0x000B96D0 */

loc_00132899: ;
    esp = esp + 4;

loc_0013289C: ;
    POP32(esp, edi);
    POP32(esp, esi);
    esp = ebp;
    POP32(esp, ebp);
    esp += 4; return; /* ret */

}

/**
 * sub_001328B0
 * Original: 0x001328B0 - 0x001328F8 (72 bytes, 25 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_001328B0(void)
{
    int _flags = 0; /* fallback flag var */

loc_001328B0: ;
    PUSH32(esp, esi);
    ecx = edi;
    esi = eax;
    PUSH32(esp, 0); sub_000B7350(); /* call 0x000B7350 */

loc_001328BA: ;
    PUSH32(esp, 0xFF);
    PUSH32(esp, edi);
    ecx = 0x3E8;
    eax = esi;
    PUSH32(esp, 0); sub_000B79A0(); /* call 0x000B79A0 */

loc_001328CC: ;
    eax = MEM32(esi + 0x68);
    esp = esp + 8;
    if (CMP_A(eax, 0x111)) goto loc_001328E2; /* ja: above (unsigned >) */

loc_001328D9: ;
    if (CMP_EQ(eax, 0x111)) goto loc_001328E9; /* je: equal / zero */

loc_001328DB: ;
    if (CMP_BE(eax, 4)) goto loc_001328E9; /* jbe: below or equal (unsigned <=) */

loc_001328E0: ;
    POP32(esp, esi);
    esp += 4; return; /* ret */

loc_001328E2: ;
    if (CMP_NE(eax, 0x114)) goto loc_001328F6; /* jne: not equal / not zero */

loc_001328E9: ;
    PUSH32(esp, 0xFF);
    PUSH32(esp, 0); sub_000B91D0(); /* call 0x000B91D0 */

loc_001328F3: ;
    esp = esp + 4;

loc_001328F6: ;
    POP32(esp, esi);
    esp += 4; return; /* ret */

}

/**
 * sub_00132900
 * Original: 0x00132900 - 0x00132A8B (395 bytes, 85 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00132900(void)
{
    uint32_t ebp;
    int _flags = 0; /* fallback flag var */
    float xmm0, xmm1;

loc_00132900: ;
    PUSH32(esp, ebp);
    ebp = esp;
    esp = esp & 0xFFFFFFF0u;
    esp = esp - 0x10C;
    edx = MEM32(ebp + 0xC);
    eax = MEM32(edx + 0x68);
    (void)0; /* cmp eax, 0x111 - flags set for next jcc */
    PUSH32(esp, edi);
    if (CMP_A(eax, 0x111)) goto loc_0013292B; /* ja: above (unsigned >) */

loc_0013291A: ;
    if (CMP_EQ(eax, 0x111)) goto loc_00132936; /* je: equal / zero */

loc_0013291C: ;
    if (CMP_BE(eax, 4)) goto loc_00132936; /* jbe: below or equal (unsigned <=) */

loc_00132921: ;
    if (CMP_EQ(eax, 0x53)) goto loc_00132936; /* je: equal / zero */

loc_00132926: ;
    POP32(esp, edi);
    esp = ebp;
    POP32(esp, ebp);
    esp += 4; return; /* ret */

loc_0013292B: ;
    if (CMP_NE(eax, 0x114)) goto loc_00132A86; /* jne: not equal / not zero */

loc_00132936: ;
    xmm0 = MEMF(edx + 0x78); /* movss */
    MEMF(esp + 8) = xmm0; /* movss */
    xmm0 = MEMF(edx + 0x7C); /* movss */
    xmm0 = xmm0 + MEMF(0x649024); /* addss */
    MEMF(esp + 0xC) = xmm0; /* movss */
    xmm0 = MEMF(edx + 0x80); /* movss */
    eax = esp + 0x60;
    MEMF(esp + 0x10) = xmm0; /* movss */
    PUSH32(esp, 0); sub_002A0430(); /* call 0x002A0430 */

loc_0013296B: ;
    xmm0 = MEMF(0x648CE4); /* movss */
    eax = MEM32(esp + 8);
    xmm1 = MEMF(0x64A880); /* movss */
    ecx = MEM32(esp + 0xC);
    edx = MEM32(esp + 0x10);
    MEMF(esp + 0x24) = xmm0; /* movss */
    xmm0 = MEMF(0x648D1C); /* movss */
    MEMF(esp + 0x28) = xmm0; /* movss */
    MEMF(esp + 0x34) = xmm0; /* movss */
    xmm0 = MEMF(0x64A87C); /* movss */
    MEM32(esp + 0x18) = eax;
    eax = 0xF;
    MEMF(esp + 0x2C) = xmm1; /* movss */
    xmm1 = MEMF(0x6496AC); /* movss */
    MEMF(esp + 0x38) = xmm0; /* movss */
    xmm0 = MEMF(0x648D10); /* movss */
    edi = esp + 0x18;
    MEM32(esp + 0x1C) = ecx;
    MEM32(esp + 0x20) = edx;
    MEMF(esp + 0x30) = xmm1; /* movss */
    MEM16(esp + 0x3C) = LO16(eax);
    MEM16(esp + 0x3E) = 0xA;
    MEM16(esp + 0x40) = 3;
    MEM16(esp + 0x42) = 2;
    MEM16(esp + 0x44) = 0x46;
    MEM16(esp + 0x46) = 0x16;
    MEM16(esp + 0x48) = 0x9B;
    MEM16(esp + 0x4A) = 0x64;
    MEMF(esp + 0x50) = xmm0; /* movss */
    MEM16(esp + 0x54) = 0x10;
    MEM16(esp + 0x56) = LO16(eax);
    MEM32(esp + 0x58) = 0;
    MEM8(esp + 0x4C) = 0;
    PUSH32(esp, 0); sub_000F5A20(); /* call 0x000F5A20 */

loc_00132A3A: ;
    MEM8(esp + 8) = 1;
    PUSH32(esp, 0); sub_003E2480(); /* call 0x003E2480 */

loc_00132A44: ;
    edx = ((int32_t)eax < 0) ? 0xFFFFFFFF : 0; /* cdq */
    ecx = 0xB;
    { int64_t _dividend = ((int64_t)(int32_t)edx << 32) | eax;
      eax = (uint32_t)((int32_t)(_dividend / (int32_t)ecx));
      edx = (uint32_t)((int32_t)(_dividend % (int32_t)ecx)); }
    xmm0 = MEMF(0x648D14); /* movss */
    PUSH32(esp, 0xFF);
    PUSH32(esp, 0);
    MEMF(esp + 0x14) = xmm0; /* movss */
    MEMF(esp + 0x18) = xmm0; /* movss */
    MEM8(esp + 0x1D) = 0xFF;
    MEM8(esp + 0x1C) = 1;
    edx = edx + 0x14;
    MEM16(esp + 0x12) = LO16(edx);
    edx = esp + 0x10;
    PUSH32(esp, edx);
    PUSH32(esp, 0); sub_0015A3F0(); /* call 0x0015A3F0 */

loc_00132A83: ;
    esp = esp + 0xC;

loc_00132A86: ;
    POP32(esp, edi);
    esp = ebp;
    POP32(esp, ebp);
    esp += 4; return; /* ret */

}

/**
 * sub_00132A90
 * Original: 0x00132A90 - 0x00132A95 (5 bytes, 1 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00132A90(void)
{
    uint32_t ebp;
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_00132A90: ;
    g_seh_ebp = ebp; sub_003E2480(); return; /* tail jmp 0x003E2480 */

}

/**
 * sub_00132B10
 * Original: 0x00132B10 - 0x00132BDE (206 bytes, 64 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00132B10(void)
{
    int _flags = 0; /* fallback flag var */

loc_00132B10: ;
    PUSH32(esp, esi);
    esi = MEM32(esp + 8);
    eax = MEM32(esi + 0x568);
    if (TEST_Z(eax, eax)) goto loc_00132BDC; /* je: equal / zero */

loc_00132B23: ;
    PUSH32(esp, edi);
    edi = MEM32(eax + 0xA0);
    eax = MEM32(eax + 0x444);
    PUSH32(esp, 0); sub_0032FDA0(); /* call 0x0032FDA0 */

loc_00132B35: ;
    if (TEST_Z(eax, eax)) goto loc_00132B97; /* je: equal / zero */

loc_00132B39: ;
    eax = MEM32(eax + 0x1C);
    ecx = MEM32(eax + 0x2C);
    PUSH32(esp, ebx);
    ebx = MEM32(ecx + 0x58);
    SET_LO8(ecx, MEM8(esi + 0x10B));
    edi = 0; /* xor self */
    if (TEST_Z(LO8(ecx), LO8(ecx))) goto loc_00132B96; /* je: equal / zero */

loc_00132B4F: ;
    edx = MEM32(0x847200);
    if (TEST_Z(edx, edx)) goto loc_00132B96; /* je: equal / zero */

loc_00132B59: ;
    /* nop */

loc_00132B60: ;
    (void)0; /* cmp MEM8(edx), LO8(ecx) - flags set for next jcc */
    eax = MEM32(edx + 0xE0);
    if (CMP_NE(MEM8(edx), LO8(ecx))) goto loc_00132B77; /* jne: not equal / not zero */

loc_00132B6A: ;
    esi = ZX16(MEM16(edx + 0xA));
    if (CMP_NE(esi, ebx)) goto loc_00132B77; /* jne: not equal / not zero */

loc_00132B72: ;
    if (TEST_Z(edi, edi)) goto loc_00132B7F; /* je: equal / zero */

loc_00132B76: ;
    edi--;

loc_00132B77: ;
    (void)0; /* test eax, eax - flags set for next jcc */
    edx = eax;
    if (TEST_NZ(eax, eax)) goto loc_00132B60; /* jne: not equal / not zero */

loc_00132B7D: ;
    goto loc_00132B96;

loc_00132B7F: ;
    PUSH32(esp, 0xBF800000u);
    PUSH32(esp, 0xBF800000u);
    esi = 0x5F41D8;
    PUSH32(esp, 0); sub_001DEA20(); /* call 0x001DEA20 */

loc_00132B93: ;
    esp = esp + 8;

loc_00132B96: ;
    POP32(esp, ebx);

loc_00132B97: ;
    eax = MEM32(esp + 0x10);
    (void)0; /* cmp MEM32(eax + 0x64), 1 - flags set for next jcc */
    POP32(esp, edi);
    PUSH32(esp, 0xBF800000u);
    PUSH32(esp, eax);
    if (CMP_NE(MEM32(eax + 0x64), 1)) goto loc_00132BC3; /* jne: not equal / not zero */

loc_00132BA8: ;
    edx = MEM32(0x847024);
    eax = MEM32(edx + 0x40);
    PUSH32(esp, 0xC87);
    PUSH32(esp, eax);
    eax = 1;
    PUSH32(esp, 0); sub_00024FA0(); /* call 0x00024FA0 */

loc_00132BC1: ;
    POP32(esp, esi);
    esp += 4; return; /* ret */

loc_00132BC3: ;
    ecx = MEM32(0x847024);
    edx = MEM32(ecx + 0x40);
    PUSH32(esp, 0xC02);
    PUSH32(esp, edx);
    eax = 1;
    PUSH32(esp, 0); sub_00024FA0(); /* call 0x00024FA0 */

loc_00132BDC: ;
    POP32(esp, esi);
    esp += 4; return; /* ret */

}

/**
 * sub_00132BE0
 * Original: 0x00132BE0 - 0x00132CCB (235 bytes, 73 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00132BE0(void)
{
    int _flags = 0; /* fallback flag var */

loc_00132BE0: ;
    PUSH32(esp, edi);
    edi = eax;
    if (TEST_Z(edi, edi)) goto loc_00132CAA; /* je: equal / zero */

loc_00132BEB: ;
    PUSH32(esp, ebx);
    PUSH32(esp, 0);
    PUSH32(esp, 0x5F41CC);
    PUSH32(esp, 0); sub_002F7A50(); /* call 0x002F7A50 */

loc_00132BF8: ;
    eax = MEM32(edi + 0x5D4);
    esp = esp + 8;
    if (TEST_Z(eax, eax)) goto loc_00132C2B; /* je: equal / zero */

loc_00132C05: ;
    ecx = MEM32(edi + 0x4B0);
    if (TEST_Z(ecx, ecx)) goto loc_00132C2B; /* je: equal / zero */

loc_00132C0F: ;
    ecx = MEM32(ecx + 0x24);
    if (TEST_Z(ecx, ecx)) goto loc_00132C2B; /* je: equal / zero */

loc_00132C16: ;
    ecx = MEM32(ecx + 0x18);
    ecx = MEM32(ecx + 0x14);
    PUSH32(esp, 0);
    ebx = 0x5F41CC;
    PUSH32(esp, 0); sub_003D6980(); /* call 0x003D6980 */

loc_00132C28: ;
    esp = esp + 4;

loc_00132C2B: ;
    PUSH32(esp, 0);
    PUSH32(esp, 0x5F41C0);
    PUSH32(esp, 0); sub_002F7A50(); /* call 0x002F7A50 */

loc_00132C37: ;
    eax = MEM32(edi + 0x5D4);
    esp = esp + 8;
    if (TEST_Z(eax, eax)) goto loc_00132C6A; /* je: equal / zero */

loc_00132C44: ;
    ecx = MEM32(edi + 0x4B0);
    if (TEST_Z(ecx, ecx)) goto loc_00132C6A; /* je: equal / zero */

loc_00132C4E: ;
    ecx = MEM32(ecx + 0x24);
    if (TEST_Z(ecx, ecx)) goto loc_00132C6A; /* je: equal / zero */

loc_00132C55: ;
    edx = MEM32(ecx + 0x18);
    ecx = MEM32(edx + 0x14);
    PUSH32(esp, 0);
    ebx = 0x5F41C0;
    PUSH32(esp, 0); sub_003D6980(); /* call 0x003D6980 */

loc_00132C67: ;
    esp = esp + 4;

loc_00132C6A: ;
    PUSH32(esp, 1);
    PUSH32(esp, 0x5F41B4);
    PUSH32(esp, 0); sub_002F7A50(); /* call 0x002F7A50 */

loc_00132C76: ;
    eax = MEM32(edi + 0x5D4);
    esp = esp + 8;
    if (TEST_Z(eax, eax)) goto loc_00132CA9; /* je: equal / zero */

loc_00132C83: ;
    ecx = MEM32(edi + 0x4B0);
    if (TEST_Z(ecx, ecx)) goto loc_00132CA9; /* je: equal / zero */

loc_00132C8D: ;
    ecx = MEM32(ecx + 0x24);
    if (TEST_Z(ecx, ecx)) goto loc_00132CA9; /* je: equal / zero */

loc_00132C94: ;
    ecx = MEM32(ecx + 0x18);
    ecx = MEM32(ecx + 0x14);
    PUSH32(esp, 1);
    ebx = 0x5F41B4;
    PUSH32(esp, 0); sub_003D6980(); /* call 0x003D6980 */

loc_00132CA6: ;
    esp = esp + 4;

loc_00132CA9: ;
    POP32(esp, ebx);

loc_00132CAA: ;
    eax = 0x5F41A4;
    PUSH32(esp, 0); sub_0029CDD0(); /* call 0x0029CDD0 */

loc_00132CB4: ;
    PUSH32(esp, 0xBF800000u);
    PUSH32(esp, 0xBF800000u);
    PUSH32(esp, eax);
    edx = edi;
    PUSH32(esp, 0); sub_001DE960(); /* call 0x001DE960 */

loc_00132CC6: ;
    esp = esp + 0xC;
    POP32(esp, edi);
    esp += 4; return; /* ret */

}

/**
 * sub_00132CD0
 * Original: 0x00132CD0 - 0x00132D23 (83 bytes, 27 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00132CD0(void)
{
    uint32_t ebp;
    int _flags = 0; /* fallback flag var */
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_00132CD0: ;
    eax = esi;
    PUSH32(esp, 0); sub_000AFD20(); /* call 0x000AFD20 */

loc_00132CD7: ;
    if (CMP_EQ(eax, 0x63)) goto loc_00132CEC; /* je: equal / zero */

loc_00132CDC: ;
    PUSH32(esp, edi);
    edi = eax;
    PUSH32(esp, 0);
    eax = esi;
    PUSH32(esp, 0); sub_000B31E0(); /* call 0x000B31E0 */

loc_00132CE8: ;
    esp = esp + 4;
    POP32(esp, edi);

loc_00132CEC: ;
    PUSH32(esp, 0xFF);
    PUSH32(esp, 1);
    PUSH32(esp, 1);
    PUSH32(esp, esi);
    PUSH32(esp, 0);
    PUSH32(esp, 0); sub_000B2100(); /* call 0x000B2100 */

loc_00132CFD: ;
    eax = 0x5F41A4;
    PUSH32(esp, 0); sub_0029CDD0(); /* call 0x0029CDD0 */

loc_00132D07: ;
    PUSH32(esp, 0xBF800000u);
    PUSH32(esp, 0xBF800000u);
    PUSH32(esp, eax);
    edx = esi;
    PUSH32(esp, 0); sub_001DE960(); /* call 0x001DE960 */

loc_00132D19: ;
    esp = esp + 0x20;
    eax = esi;
    g_seh_ebp = ebp; sub_00132BE0(); return; /* tail jmp 0x00132BE0 */

}

/**
 * sub_00132D70
 * Original: 0x00132D70 - 0x00132D75 (5 bytes, 1 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00132D70(void)
{
    uint32_t ebp;
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_00132D70: ;
    g_seh_ebp = ebp; sub_00132D80(); return; /* tail jmp 0x00132D80 */

}

/**
 * sub_00132D80
 * Original: 0x00132D80 - 0x00133509 (1929 bytes, 476 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00132D80(void)
{
    uint32_t ebp;
    int _flags = 0; /* fallback flag var */
    float xmm0;
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_00132D80: ;
    esp = esp - 0xC;
    PUSH32(esp, ebx);
    PUSH32(esp, ebp);
    ebp = MEM32(esp + 0x1C);
    eax = MEM32(ebp + 0x68);
    (void)0; /* cmp eax, 0x7C - flags set for next jcc */
    PUSH32(esp, esi);
    PUSH32(esp, edi);
    if (CMP_A(eax, 0x7C)) goto loc_00132E04; /* ja: above (unsigned >) */

loc_00132D93: ;
    if (CMP_EQ(eax, 0x7C)) goto loc_00132DC7; /* je: equal / zero */

loc_00132D95: ;
    if (CMP_A(eax, 0x7A)) goto loc_00133188; /* ja: above (unsigned >) */

loc_00132D9E: ;
    eax = ZX8(MEM8(eax + 0x13351C));
    { uint32_t _jt = MEM32(eax * 4 + 0x13350C); /* switch: 4 entries, 4 targets */
    if (_jt == 0x00132DACu) goto loc_00132DAC;
    if (_jt == 0x00132E22u) goto loc_00132E22;
    if (_jt == 0x00133188u) goto loc_00133188;
    if (_jt == 0x00133501u) goto loc_00133501;
    g_seh_ebp = ebp; RECOMP_ITAIL(_jt); return; }

loc_00132DAC: ;
    PUSH32(esp, 0xFF);
    PUSH32(esp, 1);
    PUSH32(esp, 1);
    PUSH32(esp, ebp);
    PUSH32(esp, 0);
    PUSH32(esp, 0); sub_000B2100(); /* call 0x000B2100 */

loc_00132DBD: ;
    esp = esp + 0x14;
    eax = ebp;
    PUSH32(esp, 0); sub_00111960(); /* call 0x00111960 */

loc_00132DC7: ;
    SET_LO8(eax, MEM8(ebp + 0x135));
    ecx = 0; /* xor self */
    if (CMP_EQ(LO8(eax), LO8(ecx))) goto loc_00133501; /* je: equal / zero */

loc_00132DD7: ;
    edx = MEM32(0x84A5F8);
    eax = ZX8(LO8(eax));
    eax--;
    eax = (uint32_t)((int32_t)eax * (int32_t)0x6D0);
    POP32(esp, edi);
    eax = eax + edx;
    POP32(esp, esi);
    MEM8(eax + 0x43D) = 0xA;
    MEM32(eax + 0x420) = ecx;
    MEM8(ebp + 0x135) = LO8(ecx);
    POP32(esp, ebp);
    POP32(esp, ebx);
    esp = esp + 0xC;
    esp += 4; return; /* ret */

loc_00132E04: ;
    eax = eax - 0x87;
    if (CMP_A(eax, 0x8D)) goto loc_00133188; /* ja: above (unsigned >) */

loc_00132E14: ;
    eax = ZX8(MEM8(eax + 0x1335A0));
    { uint32_t _jt = MEM32(eax * 4 + 0x133598); /* switch: 2 entries, 2 targets */
    if (_jt == 0x00132E22u) goto loc_00132E22;
    if (_jt == 0x00133188u) goto loc_00133188;
    g_seh_ebp = ebp; RECOMP_ITAIL(_jt); return; }

loc_00132E22: ;
    PUSH32(esp, 0xFF);
    PUSH32(esp, 1);
    PUSH32(esp, 1);
    PUSH32(esp, ebp);
    ebx = 0; /* xor self */
    PUSH32(esp, ebx);
    PUSH32(esp, 0); sub_000B2100(); /* call 0x000B2100 */

loc_00132E34: ;
    esp = esp + 0x14;
    eax = ebp;
    PUSH32(esp, 0); sub_00111960(); /* call 0x00111960 */

loc_00132E3E: ;
    eax = MEM32(ebp + 0x568);
    if (CMP_EQ(eax, ebx)) goto loc_00133156; /* je: equal / zero */

loc_00132E4C: ;
    ecx = ZX16(MEM16(ebp + 0x60));
    edx = (uint32_t)(int32_t)SMEM8(0x6BCFEB);
    (void)0; /* cmp ecx, edx - flags set for next jcc */
    MEM32(esp + 0x10) = ecx;
    if (CMP_GE(ecx, edx)) goto loc_00133156; /* jge: greater or equal (signed >=) */

loc_00132E63: ;
    if (CMP_EQ(MEM8(eax + 0x2BC), LO8(ebx))) goto loc_00132E7D; /* je: equal / zero */

loc_00132E6B: ;
    MEM8(eax + 0x2BC) = LO8(ebx);
    eax = MEM32(ebp + 0x568);
    MEM32(eax + 0xA0) = ebx;

loc_00132E7D: ;
    eax = MEM32(ebp + 0x568);
    if (CMP_NE(MEM32(eax + 0x204), ebx)) goto loc_00133156; /* jne: not equal / not zero */

loc_00132E8F: ;
    MEM32(eax + 0x208) = 6;
    eax = esp + 0x24;
    MEM32(esp + 0x24) = ebp;
    PUSH32(esp, 0); sub_00267470(); /* call 0x00267470 */

loc_00132EA6: ;
    SET_LO8(ecx, MEM8(ebp + 0x10B));
    PUSH32(esp, 3);
    edx = esp + 0x18;
    PUSH32(esp, edx);
    PUSH32(esp, 0x98);
    eax = 0; /* xor self */
    MEM32(esp + 0x20) = ebp;
    MEM8(esp + 0x24) = LO8(ecx);
    PUSH32(esp, 0); sub_000DA880(); /* call 0x000DA880 */

loc_00132EC7: ;
    eax = MEM32(ebp + 0x568);
    SET_LO8(ecx, MEM8(eax + 0x2DA));
    edi = edi | 0xFFFFFFFFu;
    esp = esp + 0xC;
    (void)0; /* cmp LO8(ecx), LO8(ebx) - flags set for next jcc */
    esi = edi;
    MEM8(0x7FCB46) = LO8(ebx);
    if (CMP_EQ(LO8(ecx), LO8(ebx))) goto loc_00132EEC; /* je: equal / zero */

loc_00132EE5: ;
    MEM8(0x7FCB46) = 2;

loc_00132EEC: ;
    ecx = MEM32(ebp + 0x64);
    if (CMP_EQ(ecx, 1)) goto loc_00132F0A; /* je: equal / zero */

loc_00132EF4: ;
    if (CMP_EQ(ecx, 0x15)) goto loc_00132F0A; /* je: equal / zero */

loc_00132EF9: ;
    if (CMP_EQ(MEM8(ebp + 0xA1), 3)) goto loc_00132F0A; /* je: equal / zero */

loc_00132F02: ;
    if (CMP_EQ(MEM8(ebp + 0x135), LO8(ebx))) goto loc_00132F0F; /* je: equal / zero */

loc_00132F0A: ;
    esi = 0x170;

loc_00132F0F: ;
    if (CMP_NE(MEM32(0x7FA1F8), 0xE)) goto loc_00132F26; /* jne: not equal / not zero */

loc_00132F18: ;
    if (CMP_EQ(MEM8(ebp + 0x135), LO8(ebx))) goto loc_00132F26; /* je: equal / zero */

loc_00132F20: ;
    MEM8(ebp + 0x135) = LO8(ebx);

loc_00132F26: ;
    if (CMP_EQ(MEM32(eax + 0x444), ebx)) goto loc_00132F38; /* je: equal / zero */

loc_00132F2E: ;
    if (CMP_EQ(MEM32(ebp + 0x3D8), ebx)) goto loc_00132F38; /* je: equal / zero */

loc_00132F36: ;
    esi = edi;

loc_00132F38: ;
    if (CMP_EQ(MEM8(0x7819D5), LO8(ebx))) goto loc_00132F60; /* je: equal / zero */

loc_00132F40: ;
    if (CMP_EQ(eax, ebx)) goto loc_00132F60; /* je: equal / zero */

loc_00132F44: ;
    ecx = MEM32(eax + 0x648);
    if (CMP_EQ(ecx, ebx)) goto loc_00132F60; /* je: equal / zero */

loc_00132F4E: ;
    if (CMP_NE(MEM32(eax + 0xBC), ebx)) goto loc_00132F60; /* jne: not equal / not zero */

loc_00132F56: ;
    PUSH32(esp, ecx);
    ebx = ebp;
    PUSH32(esp, 0); sub_00345B30(); /* call 0x00345B30 */

loc_00132F5E: ;
    ebx = 0; /* xor self */

loc_00132F60: ;
    if (CMP_EQ(esi, edi)) goto loc_00132FB6; /* je: equal / zero */

loc_00132F64: ;
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

loc_00132F9D: ;
    SET_LO8(eax, MEM8(0x7819D5));
    esp = esp + 0x18;
    if (CMP_EQ(LO8(eax), LO8(ebx))) goto loc_00132FB6; /* je: equal / zero */

loc_00132FA9: ;
    eax = MEM32(ebp + 0x568);
    MEM8(eax + 0x48D) = 1;

loc_00132FB6: ;
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
    if (CMP_EQ(eax, ebx)) goto loc_00133045; /* je: equal / zero */

loc_00133034: ;
    if (CMP_EQ(MEM8(0x7819D5), LO8(ebx))) goto loc_00133045; /* je: equal / zero */

loc_0013303C: ;
    edx = MEM32(eax + 4);
    MEM8(edx + 0x8CF) = LO8(ebx);

loc_00133045: ;
    if (CMP_EQ(MEM8(ebp + 0x250), LO8(ebx))) goto loc_00133054; /* je: equal / zero */

loc_0013304D: ;
    esi = ebp;
    PUSH32(esp, 0); sub_002D53D0(); /* call 0x002D53D0 */

loc_00133054: ;
    ebx = ebp;
    PUSH32(esp, 0); sub_003B6C50(); /* call 0x003B6C50 */

loc_0013305B: ;
    PUSH32(esp, ebp);
    PUSH32(esp, 0); sub_00389400(); /* call 0x00389400 */

loc_00133061: ;
    PUSH32(esp, 6);
    eax = 0x78;
    esi = ebp;
    PUSH32(esp, 0); sub_002CB810(); /* call 0x002CB810 */

loc_0013306F: ;
    SET_LO8(eax, MEM8(0x7819D5));
    esp = esp + 8;
    if (TEST_NZ(LO8(eax), LO8(eax))) goto loc_00133088; /* jne: not equal / not zero */

loc_0013307B: ;
    if (CMP_NE(MEM32(0x7FA1F8), 0x48)) goto loc_00133109; /* jne: not equal / not zero */

loc_00133088: ;
    eax = MEM32(ebp + 0x568);
    if (CMP_NE(MEM32(eax + 0xBC), 2)) goto loc_001330B7; /* jne: not equal / not zero */

loc_00133097: ;
    xmm0 = MEMF(0x648D1C); /* movss */
    MEM32(eax + 0x204) = 0xD;
    eax = MEM32(ebp + 0x568);
    MEMF(eax + 0x5F4) = xmm0; /* movss */

loc_001330B7: ;
    ecx = MEM32(ebp + 0x568);
    eax = MEM32(ecx + 0xBC);
    if (TEST_NZ(eax, eax)) goto loc_001330F7; /* jne: not equal / not zero */

loc_001330C7: ;
    PUSH32(esp, 1);
    PUSH32(esp, 0); sub_00344650(); /* call 0x00344650 */

loc_001330CE: ;
    edx = eax;
    eax = ebp;
    ecx = 0x5F8C6C;
    PUSH32(esp, 0); sub_00344C40(); /* call 0x00344C40 */

loc_001330DC: ;
    eax = MEM32(ebp + 0x564);
    ecx = 1;
    PUSH32(esp, 0); sub_0003E460(); /* call 0x0003E460 */

loc_001330EC: ;
    PUSH32(esp, 1);
    PUSH32(esp, ebp);
    PUSH32(esp, 0); sub_001FF3B0(); /* call 0x001FF3B0 */

loc_001330F4: ;
    esp = esp + 8;

loc_001330F7: ;
    edx = MEM32(0x847024);
    eax = MEM32(edx + 0x40);
    edi = MEM32(eax + 4);
    PUSH32(esp, ebp);
    PUSH32(esp, 0); sub_0002E860(); /* call 0x0002E860 */

loc_00133109: ;
    eax = MEM32(esp + 0x10);
    if (TEST_NZ(eax, eax)) goto loc_00133154; /* jne: not equal / not zero */

loc_00133111: ;
    if (CMP_NE(MEM32(0x7FA1F8), 4)) goto loc_00133154; /* jne: not equal / not zero */

loc_0013311A: ;
    PUSH32(esp, 0xFF);
    PUSH32(esp, 0); sub_003E1D70(); /* call 0x003E1D70 */

loc_00133124: ;
    xmm0 = xmm0 * MEMF(0x648D80); /* mulss */
    xmm0 = xmm0 + MEMF(0x648D3C); /* addss */
    PUSH32(esp, ecx);
    MEMF(esp) = xmm0; /* movss */
    PUSH32(esp, 0); sub_003E2480(); /* call 0x003E2480 */

loc_0013313F: ;
    edx = ((int32_t)eax < 0) ? 0xFFFFFFFF : 0; /* cdq */
    ecx = 3;
    { int64_t _dividend = ((int64_t)(int32_t)edx << 32) | eax;
      eax = (uint32_t)((int32_t)(_dividend / (int32_t)ecx));
      edx = (uint32_t)((int32_t)(_dividend % (int32_t)ecx)); }
    esi = edx;
    esi = esi + 4;
    PUSH32(esp, 0); sub_00187BC0(); /* call 0x00187BC0 */

loc_00133151: ;
    esp = esp + 8;

loc_00133154: ;
    ebx = 0; /* xor self */

loc_00133156: ;
    eax = MEM32(ebp + 0x568);
    (void)0; /* cmp eax, ebx - flags set for next jcc */
    MEM8(0x7FCB46) = 3;
    if (CMP_EQ(eax, ebx)) goto loc_00133501; /* je: equal / zero */

loc_0013316B: ;
    if (CMP_EQ(MEM8(eax + 0x2C2), LO8(ebx))) goto loc_00133501; /* je: equal / zero */

loc_00133177: ;
    eax = 0; /* xor self */
    ecx = ebp;
    PUSH32(esp, 0); sub_002FBDE0(); /* call 0x002FBDE0 */

loc_00133180: ;
    POP32(esp, edi);
    POP32(esp, esi);
    POP32(esp, ebp);
    POP32(esp, ebx);
    esp = esp + 0xC;
    esp += 4; return; /* ret */

loc_00133188: ;
    eax = MEM32(ebp + 0x70);
    if (CMP_EQ(eax, 0x80)) goto loc_0013319B; /* je: equal / zero */

loc_00133192: ;
    if (CMP_NE(eax, 0x75)) goto loc_00133501; /* jne: not equal / not zero */

loc_0013319B: ;
    edx = MEM32(esp + 0x20);
    PUSH32(esp, 0xFF);
    PUSH32(esp, 1);
    PUSH32(esp, 1);
    PUSH32(esp, ebp);
    PUSH32(esp, edx);
    PUSH32(esp, 0); sub_000B2100(); /* call 0x000B2100 */

loc_001331AF: ;
    esp = esp + 0x14;
    eax = ebp;
    PUSH32(esp, 0); sub_00111960(); /* call 0x00111960 */

loc_001331B9: ;
    eax = MEM32(ebp + 0x568);
    ebx = 0; /* xor self */
    if (CMP_EQ(eax, ebx)) goto loc_001334D3; /* je: equal / zero */

loc_001331C9: ;
    ecx = ZX16(MEM16(ebp + 0x60));
    edx = (uint32_t)(int32_t)SMEM8(0x6BCFEB);
    (void)0; /* cmp ecx, edx - flags set for next jcc */
    MEM32(esp + 0x10) = ecx;
    if (CMP_GE(ecx, edx)) goto loc_001334D3; /* jge: greater or equal (signed >=) */

loc_001331E0: ;
    if (CMP_EQ(MEM8(eax + 0x2BC), LO8(ebx))) goto loc_001331FA; /* je: equal / zero */

loc_001331E8: ;
    MEM8(eax + 0x2BC) = LO8(ebx);
    eax = MEM32(ebp + 0x568);
    MEM32(eax + 0xA0) = ebx;

loc_001331FA: ;
    eax = MEM32(ebp + 0x568);
    if (CMP_NE(MEM32(eax + 0x204), ebx)) goto loc_001334D3; /* jne: not equal / not zero */

loc_0013320C: ;
    MEM32(eax + 0x208) = 6;
    eax = esp + 0x24;
    MEM32(esp + 0x24) = ebp;
    PUSH32(esp, 0); sub_00267470(); /* call 0x00267470 */

loc_00133223: ;
    SET_LO8(ecx, MEM8(ebp + 0x10B));
    PUSH32(esp, 3);
    edx = esp + 0x18;
    PUSH32(esp, edx);
    PUSH32(esp, 0x98);
    eax = 0; /* xor self */
    MEM32(esp + 0x20) = ebp;
    MEM8(esp + 0x24) = LO8(ecx);
    PUSH32(esp, 0); sub_000DA880(); /* call 0x000DA880 */

loc_00133244: ;
    eax = MEM32(ebp + 0x568);
    SET_LO8(ecx, MEM8(eax + 0x2DA));
    edi = edi | 0xFFFFFFFFu;
    esp = esp + 0xC;
    (void)0; /* cmp LO8(ecx), LO8(ebx) - flags set for next jcc */
    esi = edi;
    MEM8(0x7FCB46) = LO8(ebx);
    if (CMP_EQ(LO8(ecx), LO8(ebx))) goto loc_00133269; /* je: equal / zero */

loc_00133262: ;
    MEM8(0x7FCB46) = 2;

loc_00133269: ;
    ecx = MEM32(ebp + 0x64);
    if (CMP_EQ(ecx, 1)) goto loc_00133287; /* je: equal / zero */

loc_00133271: ;
    if (CMP_EQ(ecx, 0x15)) goto loc_00133287; /* je: equal / zero */

loc_00133276: ;
    if (CMP_EQ(MEM8(ebp + 0xA1), 3)) goto loc_00133287; /* je: equal / zero */

loc_0013327F: ;
    if (CMP_EQ(MEM8(ebp + 0x135), LO8(ebx))) goto loc_0013328C; /* je: equal / zero */

loc_00133287: ;
    esi = 0x170;

loc_0013328C: ;
    if (CMP_NE(MEM32(0x7FA1F8), 0xE)) goto loc_001332A3; /* jne: not equal / not zero */

loc_00133295: ;
    if (CMP_EQ(MEM8(ebp + 0x135), LO8(ebx))) goto loc_001332A3; /* je: equal / zero */

loc_0013329D: ;
    MEM8(ebp + 0x135) = LO8(ebx);

loc_001332A3: ;
    if (CMP_EQ(MEM32(eax + 0x444), ebx)) goto loc_001332B5; /* je: equal / zero */

loc_001332AB: ;
    if (CMP_EQ(MEM32(ebp + 0x3D8), ebx)) goto loc_001332B5; /* je: equal / zero */

loc_001332B3: ;
    esi = edi;

loc_001332B5: ;
    if (CMP_EQ(MEM8(0x7819D5), LO8(ebx))) goto loc_001332DD; /* je: equal / zero */

loc_001332BD: ;
    if (CMP_EQ(eax, ebx)) goto loc_001332DD; /* je: equal / zero */

loc_001332C1: ;
    ecx = MEM32(eax + 0x648);
    if (CMP_EQ(ecx, ebx)) goto loc_001332DD; /* je: equal / zero */

loc_001332CB: ;
    if (CMP_NE(MEM32(eax + 0xBC), ebx)) goto loc_001332DD; /* jne: not equal / not zero */

loc_001332D3: ;
    PUSH32(esp, ecx);
    ebx = ebp;
    PUSH32(esp, 0); sub_00345B30(); /* call 0x00345B30 */

loc_001332DB: ;
    ebx = 0; /* xor self */

loc_001332DD: ;
    if (CMP_EQ(esi, edi)) goto loc_00133333; /* je: equal / zero */

loc_001332E1: ;
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

loc_0013331A: ;
    SET_LO8(eax, MEM8(0x7819D5));
    esp = esp + 0x18;
    if (CMP_EQ(LO8(eax), LO8(ebx))) goto loc_00133333; /* je: equal / zero */

loc_00133326: ;
    eax = MEM32(ebp + 0x568);
    MEM8(eax + 0x48D) = 1;

loc_00133333: ;
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
    if (CMP_EQ(eax, ebx)) goto loc_001333C2; /* je: equal / zero */

loc_001333B1: ;
    if (CMP_EQ(MEM8(0x7819D5), LO8(ebx))) goto loc_001333C2; /* je: equal / zero */

loc_001333B9: ;
    edx = MEM32(eax + 4);
    MEM8(edx + 0x8CF) = LO8(ebx);

loc_001333C2: ;
    if (CMP_EQ(MEM8(ebp + 0x250), LO8(ebx))) goto loc_001333D1; /* je: equal / zero */

loc_001333CA: ;
    esi = ebp;
    PUSH32(esp, 0); sub_002D53D0(); /* call 0x002D53D0 */

loc_001333D1: ;
    ebx = ebp;
    PUSH32(esp, 0); sub_003B6C50(); /* call 0x003B6C50 */

loc_001333D8: ;
    PUSH32(esp, ebp);
    PUSH32(esp, 0); sub_00389400(); /* call 0x00389400 */

loc_001333DE: ;
    PUSH32(esp, 6);
    eax = 0x78;
    esi = ebp;
    PUSH32(esp, 0); sub_002CB810(); /* call 0x002CB810 */

loc_001333EC: ;
    SET_LO8(eax, MEM8(0x7819D5));
    esp = esp + 8;
    if (TEST_NZ(LO8(eax), LO8(eax))) goto loc_00133405; /* jne: not equal / not zero */

loc_001333F8: ;
    if (CMP_NE(MEM32(0x7FA1F8), 0x48)) goto loc_00133486; /* jne: not equal / not zero */

loc_00133405: ;
    eax = MEM32(ebp + 0x568);
    if (CMP_NE(MEM32(eax + 0xBC), 2)) goto loc_00133434; /* jne: not equal / not zero */

loc_00133414: ;
    xmm0 = MEMF(0x648D1C); /* movss */
    MEM32(eax + 0x204) = 0xD;
    eax = MEM32(ebp + 0x568);
    MEMF(eax + 0x5F4) = xmm0; /* movss */

loc_00133434: ;
    ecx = MEM32(ebp + 0x568);
    eax = MEM32(ecx + 0xBC);
    if (TEST_NZ(eax, eax)) goto loc_00133474; /* jne: not equal / not zero */

loc_00133444: ;
    PUSH32(esp, 1);
    PUSH32(esp, 0); sub_00344650(); /* call 0x00344650 */

loc_0013344B: ;
    edx = eax;
    eax = ebp;
    ecx = 0x5F8C6C;
    PUSH32(esp, 0); sub_00344C40(); /* call 0x00344C40 */

loc_00133459: ;
    eax = MEM32(ebp + 0x564);
    ecx = 1;
    PUSH32(esp, 0); sub_0003E460(); /* call 0x0003E460 */

loc_00133469: ;
    PUSH32(esp, 1);
    PUSH32(esp, ebp);
    PUSH32(esp, 0); sub_001FF3B0(); /* call 0x001FF3B0 */

loc_00133471: ;
    esp = esp + 8;

loc_00133474: ;
    edx = MEM32(0x847024);
    eax = MEM32(edx + 0x40);
    edi = MEM32(eax + 4);
    PUSH32(esp, ebp);
    PUSH32(esp, 0); sub_0002E860(); /* call 0x0002E860 */

loc_00133486: ;
    eax = MEM32(esp + 0x10);
    if (TEST_NZ(eax, eax)) goto loc_001334D1; /* jne: not equal / not zero */

loc_0013348E: ;
    if (CMP_NE(MEM32(0x7FA1F8), 4)) goto loc_001334D1; /* jne: not equal / not zero */

loc_00133497: ;
    PUSH32(esp, 0xFF);
    PUSH32(esp, 0); sub_003E1D70(); /* call 0x003E1D70 */

loc_001334A1: ;
    xmm0 = xmm0 * MEMF(0x648D80); /* mulss */
    xmm0 = xmm0 + MEMF(0x648D3C); /* addss */
    PUSH32(esp, ecx);
    MEMF(esp) = xmm0; /* movss */
    PUSH32(esp, 0); sub_003E2480(); /* call 0x003E2480 */

loc_001334BC: ;
    edx = ((int32_t)eax < 0) ? 0xFFFFFFFF : 0; /* cdq */
    ecx = 3;
    { int64_t _dividend = ((int64_t)(int32_t)edx << 32) | eax;
      eax = (uint32_t)((int32_t)(_dividend / (int32_t)ecx));
      edx = (uint32_t)((int32_t)(_dividend % (int32_t)ecx)); }
    esi = edx;
    esi = esi + 4;
    PUSH32(esp, 0); sub_00187BC0(); /* call 0x00187BC0 */

loc_001334CE: ;
    esp = esp + 8;

loc_001334D1: ;
    ebx = 0; /* xor self */

loc_001334D3: ;
    eax = MEM32(ebp + 0x568);
    if (CMP_EQ(eax, ebx)) goto loc_001334EE; /* je: equal / zero */

loc_001334DD: ;
    if (CMP_EQ(MEM8(eax + 0x2C2), LO8(ebx))) goto loc_001334EE; /* je: equal / zero */

loc_001334E5: ;
    eax = 0; /* xor self */
    ecx = ebp;
    PUSH32(esp, 0); sub_002FBDE0(); /* call 0x002FBDE0 */

loc_001334EE: ;
    xmm0 = 0.0f; /* xorps self = zero */
    MEMF(ebp + 0xD4) = xmm0; /* movss */
    MEMF(ebp + 0xD0) = xmm0; /* movss */

loc_00133501: ;
    POP32(esp, edi);
    POP32(esp, esi);
    POP32(esp, ebp);
    POP32(esp, ebx);
    esp = esp + 0xC;
    esp += 4; return; /* ret */

}

/**
 * sub_00133650
 * Original: 0x00133650 - 0x00133666 (22 bytes, 9 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00133650(void)
{

loc_00133650: ;
    eax = MEM32(esp + 4);
    PUSH32(esp, ebx);
    PUSH32(esp, eax);
    eax = MEM32(esp + 0x10);
    SET_LO8(ebx, 1);
    PUSH32(esp, 0); sub_00133C40(); /* call 0x00133C40 */

loc_00133661: ;
    esp = esp + 4;
    POP32(esp, ebx);
    esp += 4; return; /* ret */

}

/**
 * sub_00133670
 * Original: 0x00133670 - 0x0013369C (44 bytes, 17 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00133670(void)
{
    uint32_t ebp;
    int _flags = 0; /* fallback flag var */

loc_00133670: ;
    PUSH32(esp, ebp);
    ebp = esp;
    esp = esp & 0xFFFFFFF0u;
    esp = esp - 0xB8;
    SET_LO8(eax, MEM8(0x7819D5));
    (void)0; /* test LO8(eax), LO8(eax) - flags set for next jcc */
    PUSH32(esp, ebx);
    PUSH32(esp, esi);
    esi = MEM32(ebp + 0xC);
    if (TEST_Z(LO8(eax), LO8(eax))) { sub_0013369C(); return; } /* je: equal / zero */

loc_0013368A: ;
    eax = MEM32(ebp + 8);
    PUSH32(esp, eax);
    SET_LO8(ebx, 1);
    eax = esi;
    PUSH32(esp, 0); sub_00133C40(); /* call 0x00133C40 */

loc_00133697: ;
    esp = esp + 4;
    g_seh_ebp = ebp; sub_001336AF(); return; /* tail jmp 0x001336AF */

}

/**
 * sub_001336E0
 * Original: 0x001336E0 - 0x00133767 (135 bytes, 44 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_001336E0(void)
{
    uint32_t ebp;
    int _flags = 0; /* fallback flag var */

loc_001336E0: ;
    PUSH32(esp, ebp);
    ebp = esp;
    esp = esp & 0xFFFFFFF0u;
    esp = esp - 0xB4;
    PUSH32(esp, ebx);
    PUSH32(esp, esi);
    esi = MEM32(ebp + 0xC);
    PUSH32(esp, edi);
    edx = esi;
    eax = esp + 0x10;
    PUSH32(esp, 0); sub_002A0430(); /* call 0x002A0430 */

loc_001336FD: ;
    eax = 0x5D5850;
    PUSH32(esp, 0); sub_0029CDD0(); /* call 0x0029CDD0 */

loc_00133707: ;
    PUSH32(esp, 0xBF800000u);
    PUSH32(esp, 0x40400000);
    PUSH32(esp, eax);
    edx = esi;
    PUSH32(esp, 0); sub_001DE960(); /* call 0x001DE960 */

loc_00133719: ;
    eax = MEM32(0x7FA1F8);
    esp = esp + 0xC;
    if (CMP_NE(eax, 0x35)) { sub_00133767(); return; } /* jne: not equal / not zero */

loc_00133726: ;
    eax = MEM32(0x847024);
    ecx = MEM32(eax + 0x40);
    PUSH32(esp, 0xBF800000u);
    PUSH32(esp, esi);
    PUSH32(esp, 0xD13);
    PUSH32(esp, ecx);
    eax = 0; /* xor self */
    PUSH32(esp, 0); sub_00024FA0(); /* call 0x00024FA0 */

loc_00133741: ;
    edx = MEM32(0x847024);
    eax = MEM32(edx + 0x40);
    PUSH32(esp, 0xBF800000u);
    PUSH32(esp, esi);
    PUSH32(esp, 0x167);
    PUSH32(esp, eax);
    eax = 1;
    PUSH32(esp, 0); sub_00024FA0(); /* call 0x00024FA0 */

loc_00133760: ;
    POP32(esp, edi);
    POP32(esp, esi);
    POP32(esp, ebx);
    esp = ebp;
    POP32(esp, ebp);
    esp += 4; return; /* ret */

}

/**
 * sub_001337F0
 * Original: 0x001337F0 - 0x00133836 (70 bytes, 21 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_001337F0(void)
{
    int _flags = 0; /* fallback flag var */

loc_001337F0: ;
    eax = MEM32(esp + 8);
    ecx = MEM32(eax + 0x68);
    if (CMP_NE(ecx, 0xA6)) goto loc_00133817; /* jne: not equal / not zero */

loc_001337FF: ;
    SET_LO8(ecx, MEM8(eax + 0x20C));
    if (TEST_NZ(LO8(ecx), LO8(ecx))) goto loc_00133835; /* jne: not equal / not zero */

loc_00133809: ;
    PUSH32(esp, 0x126);
    PUSH32(esp, 0); sub_00135AC0(); /* call 0x00135AC0 */

loc_00133813: ;
    esp = esp + 4;
    esp += 4; return; /* ret */

loc_00133817: ;
    if (CMP_NE(ecx, 0x3E)) goto loc_00133835; /* jne: not equal / not zero */

loc_0013381C: ;
    SET_LO8(ecx, MEM8(eax + 0x20C));
    if (TEST_NZ(LO8(ecx), LO8(ecx))) goto loc_00133835; /* jne: not equal / not zero */

loc_00133826: ;
    ecx = MEM32(esp + 4);
    PUSH32(esp, 0xFF);
    PUSH32(esp, 0); sub_001A29C0(); /* call 0x001A29C0 */

loc_00133834: ;
    POP32(esp, ecx);

loc_00133835: ;
    esp += 4; return; /* ret */

}

/**
 * sub_00133840
 * Original: 0x00133840 - 0x001338A6 (102 bytes, 32 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00133840(void)
{
    int _flags = 0; /* fallback flag var */

loc_00133840: ;
    PUSH32(esp, esi);
    esi = MEM32(esp + 0xC);
    eax = MEM32(esi + 0x564);
    if (TEST_Z(eax, eax)) goto loc_00133891; /* je: equal / zero */

loc_0013384F: ;
    PUSH32(esp, 0); sub_003E2480(); /* call 0x003E2480 */

loc_00133854: ;
    eax = MEM32(esi + 0x564);
    ecx = 0; /* xor self */
    SET_LO8(ecx, MEM8(eax + 0x2A8));
    PUSH32(esp, 0xFF);
    PUSH32(esp, ecx);
    PUSH32(esp, 0); sub_003E2480(); /* call 0x003E2480 */

loc_0013386D: ;
    edx = ((int32_t)eax < 0) ? 0xFFFFFFFF : 0; /* cdq */
    ecx = 0xB;
    { int64_t _dividend = ((int64_t)(int32_t)edx << 32) | eax;
      eax = (uint32_t)((int32_t)(_dividend / (int32_t)ecx));
      edx = (uint32_t)((int32_t)(_dividend % (int32_t)ecx)); }
    PUSH32(esp, 0xFF);
    PUSH32(esp, 0xFF);
    SET_LO8(eax, LO8(eax) | 0xFF);
    ecx = edx;
    ecx = ecx + 0x23;
    SET_LO8(edx, LO8(edx) | 0xFF);
    PUSH32(esp, 0); sub_000FE860(); /* call 0x000FE860 */

loc_0013388E: ;
    esp = esp + 0x10;

loc_00133891: ;
    eax = MEM32(esp + 8);
    edx = esp + 0xC;
    PUSH32(esp, edx);
    PUSH32(esp, esi);
    PUSH32(esp, eax);
    PUSH32(esp, 0); sub_00132D80(); /* call 0x00132D80 */

loc_001338A1: ;
    esp = esp + 0xC;
    POP32(esp, esi);
    esp += 4; return; /* ret */

}

/**
 * sub_001338B0
 * Original: 0x001338B0 - 0x00133C39 (905 bytes, 215 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_001338B0(void)
{
    int _flags = 0; /* fallback flag var */
    float xmm0;

loc_001338B0: ;
    esp = esp - 0x10;
    PUSH32(esp, ebx);
    PUSH32(esp, esi);
    esi = MEM32(esp + 0x20);
    xmm0 = MEMF(esi + 0x78); /* movss */
    MEMF(esp + 0xC) = xmm0; /* movss */
    xmm0 = MEMF(esi + 0x7C); /* movss */
    xmm0 = xmm0 + MEMF(0x648F08); /* addss */
    PUSH32(esp, 0xFF);
    eax = esp + 0x10;
    PUSH32(esp, 1);
    MEMF(esp + 0x18) = xmm0; /* movss */
    xmm0 = MEMF(esi + 0x80); /* movss */
    PUSH32(esp, eax);
    eax = esi;
    MEMF(esp + 0x20) = xmm0; /* movss */
    PUSH32(esp, 0); sub_000AC560(); /* call 0x000AC560 */

loc_001338F8: ;
    PUSH32(esp, 0xFF);
    PUSH32(esp, 1);
    ebx = 0; /* xor self */
    PUSH32(esp, ebx);
    PUSH32(esp, esi);
    PUSH32(esp, ebx);
    PUSH32(esp, 0); sub_000B2100(); /* call 0x000B2100 */

loc_00133909: ;
    esp = esp + 0x20;
    eax = esi;
    PUSH32(esp, 0); sub_00111960(); /* call 0x00111960 */

loc_00133913: ;
    eax = MEM32(esi + 0x568);
    if (CMP_EQ(eax, ebx)) goto loc_00133C33; /* je: equal / zero */

loc_00133921: ;
    ecx = ZX16(MEM16(esi + 0x60));
    edx = (uint32_t)(int32_t)SMEM8(0x6BCFEB);
    (void)0; /* cmp ecx, edx - flags set for next jcc */
    MEM32(esp + 8) = ecx;
    if (CMP_GE(ecx, edx)) goto loc_00133C33; /* jge: greater or equal (signed >=) */

loc_00133938: ;
    if (CMP_EQ(MEM8(eax + 0x2BC), LO8(ebx))) goto loc_00133952; /* je: equal / zero */

loc_00133940: ;
    MEM8(eax + 0x2BC) = LO8(ebx);
    eax = MEM32(esi + 0x568);
    MEM32(eax + 0xA0) = ebx;

loc_00133952: ;
    eax = MEM32(esi + 0x568);
    if (CMP_NE(MEM32(eax + 0x204), ebx)) goto loc_00133C33; /* jne: not equal / not zero */

loc_00133964: ;
    MEM32(eax + 0x208) = 6;
    PUSH32(esp, edi);
    eax = esp + 0x24;
    MEM32(esp + 0x24) = esi;
    PUSH32(esp, 0); sub_00267470(); /* call 0x00267470 */

loc_0013397C: ;
    SET_LO8(ecx, MEM8(esi + 0x10B));
    PUSH32(esp, 3);
    edx = esp + 0x14;
    PUSH32(esp, edx);
    PUSH32(esp, 0x98);
    eax = 0; /* xor self */
    MEM32(esp + 0x1C) = esi;
    MEM8(esp + 0x20) = LO8(ecx);
    PUSH32(esp, 0); sub_000DA880(); /* call 0x000DA880 */

loc_0013399D: ;
    eax = MEM32(esi + 0x568);
    SET_LO8(ecx, MEM8(eax + 0x2DA));
    esp = esp + 0xC;
    edi = edi | 0xFFFFFFFFu;
    (void)0; /* cmp LO8(ecx), LO8(ebx) - flags set for next jcc */
    MEM8(0x7FCB46) = LO8(ebx);
    if (CMP_EQ(LO8(ecx), LO8(ebx))) goto loc_001339C0; /* je: equal / zero */

loc_001339B9: ;
    MEM8(0x7FCB46) = 2;

loc_001339C0: ;
    ecx = MEM32(esi + 0x64);
    if (CMP_EQ(ecx, 1)) goto loc_001339DE; /* je: equal / zero */

loc_001339C8: ;
    if (CMP_EQ(ecx, 0x15)) goto loc_001339DE; /* je: equal / zero */

loc_001339CD: ;
    if (CMP_EQ(MEM8(esi + 0xA1), 3)) goto loc_001339DE; /* je: equal / zero */

loc_001339D6: ;
    if (CMP_EQ(MEM8(esi + 0x135), LO8(ebx))) goto loc_001339E3; /* je: equal / zero */

loc_001339DE: ;
    edi = 0x170;

loc_001339E3: ;
    if (CMP_NE(MEM32(0x7FA1F8), 0xE)) goto loc_001339FA; /* jne: not equal / not zero */

loc_001339EC: ;
    if (CMP_EQ(MEM8(esi + 0x135), LO8(ebx))) goto loc_001339FA; /* je: equal / zero */

loc_001339F4: ;
    MEM8(esi + 0x135) = LO8(ebx);

loc_001339FA: ;
    if (CMP_EQ(MEM32(eax + 0x444), ebx)) goto loc_00133A0D; /* je: equal / zero */

loc_00133A02: ;
    if (CMP_EQ(MEM32(esi + 0x3D8), ebx)) goto loc_00133A0D; /* je: equal / zero */

loc_00133A0A: ;
    edi = edi | 0xFFFFFFFFu;

loc_00133A0D: ;
    if (CMP_EQ(MEM8(0x7819D5), LO8(ebx))) goto loc_00133A35; /* je: equal / zero */

loc_00133A15: ;
    if (CMP_EQ(eax, ebx)) goto loc_00133A35; /* je: equal / zero */

loc_00133A19: ;
    ecx = MEM32(eax + 0x648);
    if (CMP_EQ(ecx, ebx)) goto loc_00133A35; /* je: equal / zero */

loc_00133A23: ;
    if (CMP_NE(MEM32(eax + 0xBC), ebx)) goto loc_00133A35; /* jne: not equal / not zero */

loc_00133A2B: ;
    PUSH32(esp, ecx);
    ebx = esi;
    PUSH32(esp, 0); sub_00345B30(); /* call 0x00345B30 */

loc_00133A33: ;
    ebx = 0; /* xor self */

loc_00133A35: ;
    if (CMP_EQ(edi, 0xFFFFFFFFu)) goto loc_00133A98; /* je: equal / zero */

loc_00133A3A: ;
    eax = MEM32(esi + 0x568);
    PUSH32(esp, ebx);
    MEM32(eax + 0x474) = 0xFFFFFFFFu;
    ecx = MEM32(esi + 0x568);
    PUSH32(esp, ebx);
    PUSH32(esp, ebx);
    MEM32(ecx + 0x478) = 0xFFFFFFFFu;
    edx = MEM32(esi + 0x568);
    PUSH32(esp, 0x40400000);
    MEM32(edx + 0x3DC) = 0xFFFFFFFFu;
    PUSH32(esp, 0x3F800000);
    PUSH32(esp, esi);
    edx = edi;
    PUSH32(esp, 0); sub_002F1620(); /* call 0x002F1620 */

loc_00133A7F: ;
    SET_LO8(eax, MEM8(0x7819D5));
    esp = esp + 0x18;
    if (CMP_EQ(LO8(eax), LO8(ebx))) goto loc_00133A98; /* je: equal / zero */

loc_00133A8B: ;
    eax = MEM32(esi + 0x568);
    MEM8(eax + 0x48D) = 1;

loc_00133A98: ;
    edx = MEM32(esi + 0x200);
    ecx = MEM32(esi + 0x568);
    xmm0 = 0.0f; /* xorps self = zero */
    edx = edx | 0x200;
    MEM32(esi + 0x200) = edx;
    MEM16(esi + 0x3AE) = LO16(ebx);
    MEM8(esi + 0x234) = 0xFF;
    MEM8(esi + 0x20C) = 0xFF;
    MEM8(esi + 0x180) = 0xFF;
    MEMF(esi + 0x110) = xmm0; /* movss */
    MEM16(esi + 0x1EC) = LO16(ebx);
    MEM16(esi + 0x1EE) = LO16(ebx);
    MEM16(ecx + 0x5E) = LO16(ebx);
    edx = MEM32(esi + 0x568);
    MEM8(edx + 0x2D2) = LO8(ebx);
    eax = MEM32(esi + 0x568);
    MEMF(eax + 0x30C) = xmm0; /* movss */
    ecx = MEM32(esi + 0x568);
    MEM8(ecx + 0x70) = LO8(ebx);
    eax = MEM32(esi + 0x564);
    if (CMP_EQ(eax, ebx)) goto loc_00133B27; /* je: equal / zero */

loc_00133B16: ;
    if (CMP_EQ(MEM8(0x7819D5), LO8(ebx))) goto loc_00133B27; /* je: equal / zero */

loc_00133B1E: ;
    edx = MEM32(eax + 4);
    MEM8(edx + 0x8CF) = LO8(ebx);

loc_00133B27: ;
    if (CMP_EQ(MEM8(esi + 0x250), LO8(ebx))) goto loc_00133B34; /* je: equal / zero */

loc_00133B2F: ;
    PUSH32(esp, 0); sub_002D53D0(); /* call 0x002D53D0 */

loc_00133B34: ;
    ebx = esi;
    PUSH32(esp, 0); sub_003B6C50(); /* call 0x003B6C50 */

loc_00133B3B: ;
    PUSH32(esp, esi);
    PUSH32(esp, 0); sub_00389400(); /* call 0x00389400 */

loc_00133B41: ;
    PUSH32(esp, 6);
    eax = 0x78;
    PUSH32(esp, 0); sub_002CB810(); /* call 0x002CB810 */

loc_00133B4D: ;
    SET_LO8(eax, MEM8(0x7819D5));
    esp = esp + 8;
    if (TEST_NZ(LO8(eax), LO8(eax))) goto loc_00133B66; /* jne: not equal / not zero */

loc_00133B59: ;
    if (CMP_NE(MEM32(0x7FA1F8), 0x48)) goto loc_00133BE7; /* jne: not equal / not zero */

loc_00133B66: ;
    eax = MEM32(esi + 0x568);
    if (CMP_NE(MEM32(eax + 0xBC), 2)) goto loc_00133B95; /* jne: not equal / not zero */

loc_00133B75: ;
    xmm0 = MEMF(0x648D1C); /* movss */
    MEM32(eax + 0x204) = 0xD;
    eax = MEM32(esi + 0x568);
    MEMF(eax + 0x5F4) = xmm0; /* movss */

loc_00133B95: ;
    ecx = MEM32(esi + 0x568);
    eax = MEM32(ecx + 0xBC);
    if (TEST_NZ(eax, eax)) goto loc_00133BD5; /* jne: not equal / not zero */

loc_00133BA5: ;
    PUSH32(esp, 1);
    PUSH32(esp, 0); sub_00344650(); /* call 0x00344650 */

loc_00133BAC: ;
    edx = eax;
    eax = esi;
    ecx = 0x5F8C6C;
    PUSH32(esp, 0); sub_00344C40(); /* call 0x00344C40 */

loc_00133BBA: ;
    eax = MEM32(esi + 0x564);
    ecx = 1;
    PUSH32(esp, 0); sub_0003E460(); /* call 0x0003E460 */

loc_00133BCA: ;
    PUSH32(esp, 1);
    PUSH32(esp, esi);
    PUSH32(esp, 0); sub_001FF3B0(); /* call 0x001FF3B0 */

loc_00133BD2: ;
    esp = esp + 8;

loc_00133BD5: ;
    edx = MEM32(0x847024);
    eax = MEM32(edx + 0x40);
    edi = MEM32(eax + 4);
    PUSH32(esp, esi);
    PUSH32(esp, 0); sub_0002E860(); /* call 0x0002E860 */

loc_00133BE7: ;
    eax = MEM32(esp + 0xC);
    (void)0; /* test eax, eax - flags set for next jcc */
    POP32(esp, edi);
    if (TEST_NZ(eax, eax)) goto loc_00133C33; /* jne: not equal / not zero */

loc_00133BF0: ;
    if (CMP_NE(MEM32(0x7FA1F8), 4)) goto loc_00133C33; /* jne: not equal / not zero */

loc_00133BF9: ;
    PUSH32(esp, 0xFF);
    PUSH32(esp, 0); sub_003E1D70(); /* call 0x003E1D70 */

loc_00133C03: ;
    xmm0 = xmm0 * MEMF(0x648D80); /* mulss */
    xmm0 = xmm0 + MEMF(0x648D3C); /* addss */
    PUSH32(esp, ecx);
    MEMF(esp) = xmm0; /* movss */
    PUSH32(esp, 0); sub_003E2480(); /* call 0x003E2480 */

loc_00133C1E: ;
    edx = ((int32_t)eax < 0) ? 0xFFFFFFFF : 0; /* cdq */
    ecx = 3;
    { int64_t _dividend = ((int64_t)(int32_t)edx << 32) | eax;
      eax = (uint32_t)((int32_t)(_dividend / (int32_t)ecx));
      edx = (uint32_t)((int32_t)(_dividend % (int32_t)ecx)); }
    esi = edx;
    esi = esi + 4;
    PUSH32(esp, 0); sub_00187BC0(); /* call 0x00187BC0 */

loc_00133C30: ;
    esp = esp + 8;

loc_00133C33: ;
    POP32(esp, esi);
    POP32(esp, ebx);
    esp = esp + 0x10;
    esp += 4; return; /* ret */

}

/**
 * sub_00133C40
 * Original: 0x00133C40 - 0x00133D70 (304 bytes, 95 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00133C40(void)
{
    uint32_t ebp;
    int _flags = 0; /* fallback flag var */
    int _cf = 0; /* carry flag */
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_00133C40: ;
    esp = esp - 8;
    PUSH32(esp, ebp);
    ebp = MEM32(esp + 0x10);
    PUSH32(esp, esi);
    esi = eax;
    SET_LO8(eax, MEM8(esi + 0x10B));
    ecx = esp + 8;
    MEM8(esp + 0xC) = LO8(eax);
    PUSH32(esp, 0x2A);
    PUSH32(esp, ecx);
    eax = 0x45;
    MEM32(esp + 0x10) = esi;
    PUSH32(esp, 0); sub_000DAC40(); /* call 0x000DAC40 */

loc_00133C6A: ;
    ecx = MEM32(esi + 0x68);
    eax = ecx;
    esp = esp + 8;
    if (CMP_A(eax, 0x96)) goto loc_00133C94; /* ja: above (unsigned >) */

loc_00133C79: ;
    if (CMP_EQ(eax, 0x96)) goto loc_00133CB0; /* je: equal / zero */

loc_00133C7B: ;
    if (CMP_A(eax, 0x90)) { sub_00133D70(); return; } /* ja: above (unsigned >) */

loc_00133C86: ;
    edx = ZX8(MEM8(eax + 0x133DA8));
    g_seh_ebp = ebp; RECOMP_ITAIL(MEM32(edx * 4 + 0x133DA0)); return; /* indirect tail jmp */

loc_00133C94: ;
    eax = eax - 0x98;
    if (CMP_A(eax, 0x7C)) { sub_00133D70(); return; } /* ja: above (unsigned >) */

loc_00133CA2: ;
    eax = ZX8(MEM8(eax + 0x133E44));
    g_seh_ebp = ebp; RECOMP_ITAIL(MEM32(eax * 4 + 0x133E3C)); return; /* indirect tail jmp */

loc_00133CB0: ;
    SET_LO8(eax, MEM8(0x7819D5));
    (void)0; /* test LO8(eax), LO8(eax) - flags set for next jcc */
    PUSH32(esp, edi);
    if (TEST_Z(LO8(eax), LO8(eax))) goto loc_00133D4B; /* je: equal / zero */

loc_00133CBE: ;
    if (CMP_NE(MEM32(ebp + 0x68), 0xFFFF)) goto loc_00133CE3; /* jne: not equal / not zero */

loc_00133CC7: ;
    eax = MEM32(ebp + 0x23C);
    PUSH32(esp, 0); sub_00315260(); /* call 0x00315260 */

loc_00133CD2: ;
    if (TEST_Z(eax, eax)) goto loc_00133CE3; /* je: equal / zero */

loc_00133CD6: ;
    eax = MEM32(ebp + 0x23C);
    PUSH32(esp, 0); sub_00315260(); /* call 0x00315260 */

loc_00133CE1: ;
    ebp = eax;

loc_00133CE3: ;
    (void)0; /* test LO8(ebx), LO8(ebx) - flags set for next jcc */
    SET_LO8(eax, (TEST_NZ(LO8(ebx), LO8(ebx))) ? 1 : 0); /* setne */
    SET_LO8(eax, LO8(eax) - 1);
    SET_LO8(ecx, LO8(ebx));
    SET_LO8(ecx, (uint32_t)(-(int32_t)LO8(ecx)));
    PUSH32(esp, 0xFF);
    edi = 0xFA;
    ecx = _cf ? 0xFFFFFFFF : 0; /* sbb self (CF extend) */
    ecx = ecx & 0xC;
    (void)0; /* test LO8(ebx), LO8(ebx) - flags set for next jcc */
    SET_LO8(edx, (TEST_NZ(LO8(ebx), LO8(ebx))) ? 1 : 0); /* setne */
    PUSH32(esp, ecx);
    PUSH32(esp, edx);
    PUSH32(esp, 8);
    PUSH32(esp, eax);
    PUSH32(esp, eax);
    PUSH32(esp, 0);
    PUSH32(esp, 0); sub_000C7E80(); /* call 0x000C7E80 */

loc_00133D0F: ;
    esp = esp + 0x1C;
    if (TEST_Z(eax, eax)) goto loc_00133D44; /* je: equal / zero */

loc_00133D16: ;
    if (TEST_Z(LO8(ebx), LO8(ebx))) goto loc_00133D44; /* je: equal / zero */

loc_00133D1A: ;
    eax = eax + 0xA4;
    ecx = eax;
    eax = 0x7D;
    MEM32(ecx) = eax;
    eax = 5;
    MEM32(ecx + 4) = eax;
    MEM32(ecx + 8) = ebp;
    esi = MEM32(esi + 0x568);
    if (TEST_Z(esi, esi)) goto loc_00133D44; /* je: equal / zero */

loc_00133D3D: ;
    MEM8(esi + 0x2DA) = 1;

loc_00133D44: ;
    POP32(esp, edi);
    POP32(esp, esi);
    POP32(esp, ebp);
    esp = esp + 8;
    esp += 4; return; /* ret */

loc_00133D4B: ;
    PUSH32(esp, 0xFF);
    PUSH32(esp, 0);
    PUSH32(esp, 0);
    PUSH32(esp, 8);
    PUSH32(esp, 0xFFFFFFFFu);
    PUSH32(esp, 0xFFFFFFFFu);
    PUSH32(esp, 0);
    edi = 0x12C;
    PUSH32(esp, 0); sub_000C7E80(); /* call 0x000C7E80 */

loc_00133D66: ;
    esp = esp + 0x1C;
    POP32(esp, edi);
    POP32(esp, esi);
    POP32(esp, ebp);
    esp = esp + 8;
    esp += 4; return; /* ret */

}

/**
 * sub_00133ED0
 * Original: 0x00133ED0 - 0x00133EFB (43 bytes, 15 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00133ED0(void)
{
    uint32_t ebp;
    int _flags = 0; /* fallback flag var */
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_00133ED0: ;
    esp = esp - 0x14;
    PUSH32(esp, ebx);
    PUSH32(esp, ebp);
    PUSH32(esp, esi);
    PUSH32(esp, edi);
    ecx = 0x10;
    edi = eax;
    PUSH32(esp, 0); sub_002F2CE0(); /* call 0x002F2CE0 */

loc_00133EE3: ;
    ebp = eax;
    SET_LO16(eax, MEM16(ebp + 0x60));
    (void)0; /* cmp LO16(eax), 0xFFFF - flags set for next jcc */
    MEM32(ebp + 0x64) = 0x28;
    if (CMP_EQ(LO16(eax), 0xFFFF)) { sub_00133EFB(); return; } /* je: equal / zero */

loc_00133EF6: ;
    eax = ZX16(LO16(eax));
    g_seh_ebp = ebp; sub_00133F18(); return; /* tail jmp 0x00133F18 */

}

/**
 * sub_00134350
 * Original: 0x00134350 - 0x00134676 (806 bytes, 195 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00134350(void)
{
    uint32_t ebp;
    int _flags = 0; /* fallback flag var */
    float xmm0;
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_00134350: ;
    esp = esp - 0xC;
    PUSH32(esp, ebx);
    PUSH32(esp, ebp);
    ebp = MEM32(esp + 0x18);
    eax = MEM32(ebp + 0x568);
    ebx = 0; /* xor self */
    (void)0; /* cmp eax, ebx - flags set for next jcc */
    MEM16(ebp + 0x3AE) = LO16(ebx);
    if (CMP_EQ(eax, ebx)) goto loc_00134650; /* je: equal / zero */

loc_00134370: ;
    ecx = ZX16(MEM16(ebp + 0x60));
    edx = (uint32_t)(int32_t)SMEM8(0x6BCFEB);
    (void)0; /* cmp ecx, edx - flags set for next jcc */
    MEM32(esp + 8) = ecx;
    if (CMP_GE(ecx, edx)) goto loc_00134650; /* jge: greater or equal (signed >=) */

loc_00134387: ;
    if (CMP_EQ(MEM8(eax + 0x2BC), LO8(ebx))) goto loc_001343A1; /* je: equal / zero */

loc_0013438F: ;
    MEM8(eax + 0x2BC) = LO8(ebx);
    eax = MEM32(ebp + 0x568);
    MEM32(eax + 0xA0) = ebx;

loc_001343A1: ;
    eax = MEM32(ebp + 0x568);
    if (CMP_NE(MEM32(eax + 0x204), ebx)) goto loc_00134650; /* jne: not equal / not zero */

loc_001343B3: ;
    MEM32(eax + 0x208) = 5;
    PUSH32(esp, esi);
    eax = esp + 0x1C;
    MEM32(esp + 0x1C) = ebp;
    PUSH32(esp, 0); sub_00267470(); /* call 0x00267470 */

loc_001343CB: ;
    SET_LO8(ecx, MEM8(ebp + 0x10B));
    PUSH32(esp, 3);
    edx = esp + 0x14;
    PUSH32(esp, edx);
    PUSH32(esp, 0x98);
    eax = 0; /* xor self */
    MEM32(esp + 0x1C) = ebp;
    MEM8(esp + 0x20) = LO8(ecx);
    PUSH32(esp, 0); sub_000DA880(); /* call 0x000DA880 */

loc_001343EC: ;
    eax = MEM32(0x7FA1F8);
    esp = esp + 0xC;
    (void)0; /* cmp eax, 0xE - flags set for next jcc */
    esi = 0x8A6;
    MEM8(0x7FCB46) = 3;
    if (CMP_NE(eax, 0xE)) goto loc_00134413; /* jne: not equal / not zero */

loc_00134405: ;
    if (CMP_EQ(MEM8(ebp + 0x135), LO8(ebx))) goto loc_00134413; /* je: equal / zero */

loc_0013440D: ;
    MEM8(ebp + 0x135) = LO8(ebx);

loc_00134413: ;
    eax = MEM32(ebp + 0x568);
    ecx = MEM32(eax + 0x444);
    PUSH32(esp, edi);
    edi = edi | 0xFFFFFFFFu;
    if (CMP_EQ(ecx, ebx)) goto loc_00134431; /* je: equal / zero */

loc_00134427: ;
    if (CMP_EQ(MEM32(ebp + 0x3D8), ebx)) goto loc_00134431; /* je: equal / zero */

loc_0013442F: ;
    esi = edi;

loc_00134431: ;
    if (CMP_EQ(MEM8(0x7819D5), LO8(ebx))) goto loc_00134459; /* je: equal / zero */

loc_00134439: ;
    if (CMP_EQ(eax, ebx)) goto loc_00134459; /* je: equal / zero */

loc_0013443D: ;
    ecx = MEM32(eax + 0x648);
    if (CMP_EQ(ecx, ebx)) goto loc_00134459; /* je: equal / zero */

loc_00134447: ;
    if (CMP_NE(MEM32(eax + 0xBC), ebx)) goto loc_00134459; /* jne: not equal / not zero */

loc_0013444F: ;
    PUSH32(esp, ecx);
    ebx = ebp;
    PUSH32(esp, 0); sub_00345B30(); /* call 0x00345B30 */

loc_00134457: ;
    ebx = 0; /* xor self */

loc_00134459: ;
    if (CMP_EQ(esi, edi)) goto loc_001344AF; /* je: equal / zero */

loc_0013445D: ;
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

loc_00134496: ;
    SET_LO8(eax, MEM8(0x7819D5));
    esp = esp + 0x18;
    if (CMP_EQ(LO8(eax), LO8(ebx))) goto loc_001344AF; /* je: equal / zero */

loc_001344A2: ;
    eax = MEM32(ebp + 0x568);
    MEM8(eax + 0x48D) = 1;

loc_001344AF: ;
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
    if (CMP_EQ(eax, ebx)) goto loc_0013453D; /* je: equal / zero */

loc_0013452C: ;
    if (CMP_EQ(MEM8(0x7819D5), LO8(ebx))) goto loc_0013453D; /* je: equal / zero */

loc_00134534: ;
    edx = MEM32(eax + 4);
    MEM8(edx + 0x8CF) = LO8(ebx);

loc_0013453D: ;
    if (CMP_EQ(MEM8(ebp + 0x250), LO8(ebx))) goto loc_0013454C; /* je: equal / zero */

loc_00134545: ;
    esi = ebp;
    PUSH32(esp, 0); sub_002D53D0(); /* call 0x002D53D0 */

loc_0013454C: ;
    ebx = ebp;
    PUSH32(esp, 0); sub_003B6C50(); /* call 0x003B6C50 */

loc_00134553: ;
    PUSH32(esp, ebp);
    PUSH32(esp, 0); sub_00389400(); /* call 0x00389400 */

loc_00134559: ;
    PUSH32(esp, 5);
    eax = 0x78;
    esi = ebp;
    PUSH32(esp, 0); sub_002CB810(); /* call 0x002CB810 */

loc_00134567: ;
    SET_LO8(eax, MEM8(0x7819D5));
    esp = esp + 8;
    if (TEST_NZ(LO8(eax), LO8(eax))) goto loc_00134580; /* jne: not equal / not zero */

loc_00134573: ;
    if (CMP_NE(MEM32(0x7FA1F8), 0x48)) goto loc_00134601; /* jne: not equal / not zero */

loc_00134580: ;
    eax = MEM32(ebp + 0x568);
    if (CMP_NE(MEM32(eax + 0xBC), 2)) goto loc_001345AF; /* jne: not equal / not zero */

loc_0013458F: ;
    xmm0 = MEMF(0x648D1C); /* movss */
    MEM32(eax + 0x204) = 0xD;
    eax = MEM32(ebp + 0x568);
    MEMF(eax + 0x5F4) = xmm0; /* movss */

loc_001345AF: ;
    ecx = MEM32(ebp + 0x568);
    eax = MEM32(ecx + 0xBC);
    if (TEST_NZ(eax, eax)) goto loc_001345EF; /* jne: not equal / not zero */

loc_001345BF: ;
    PUSH32(esp, 1);
    PUSH32(esp, 0); sub_00344650(); /* call 0x00344650 */

loc_001345C6: ;
    edx = eax;
    eax = ebp;
    ecx = 0x5F8C6C;
    PUSH32(esp, 0); sub_00344C40(); /* call 0x00344C40 */

loc_001345D4: ;
    eax = MEM32(ebp + 0x564);
    ecx = 1;
    PUSH32(esp, 0); sub_0003E460(); /* call 0x0003E460 */

loc_001345E4: ;
    PUSH32(esp, 1);
    PUSH32(esp, ebp);
    PUSH32(esp, 0); sub_001FF3B0(); /* call 0x001FF3B0 */

loc_001345EC: ;
    esp = esp + 8;

loc_001345EF: ;
    edx = MEM32(0x847024);
    eax = MEM32(edx + 0x40);
    edi = MEM32(eax + 4);
    PUSH32(esp, ebp);
    PUSH32(esp, 0); sub_0002E860(); /* call 0x0002E860 */

loc_00134601: ;
    eax = MEM32(esp + 0x10);
    (void)0; /* test eax, eax - flags set for next jcc */
    POP32(esp, edi);
    if (TEST_NZ(eax, eax)) goto loc_0013464D; /* jne: not equal / not zero */

loc_0013460A: ;
    if (CMP_NE(MEM32(0x7FA1F8), 4)) goto loc_0013464D; /* jne: not equal / not zero */

loc_00134613: ;
    PUSH32(esp, 0xFF);
    PUSH32(esp, 0); sub_003E1D70(); /* call 0x003E1D70 */

loc_0013461D: ;
    xmm0 = xmm0 * MEMF(0x648D80); /* mulss */
    xmm0 = xmm0 + MEMF(0x648D3C); /* addss */
    PUSH32(esp, ecx);
    MEMF(esp) = xmm0; /* movss */
    PUSH32(esp, 0); sub_003E2480(); /* call 0x003E2480 */

loc_00134638: ;
    edx = ((int32_t)eax < 0) ? 0xFFFFFFFF : 0; /* cdq */
    ecx = 3;
    { int64_t _dividend = ((int64_t)(int32_t)edx << 32) | eax;
      eax = (uint32_t)((int32_t)(_dividend / (int32_t)ecx));
      edx = (uint32_t)((int32_t)(_dividend % (int32_t)ecx)); }
    esi = edx;
    esi = esi + 4;
    PUSH32(esp, 0); sub_00187BC0(); /* call 0x00187BC0 */

loc_0013464A: ;
    esp = esp + 8;

loc_0013464D: ;
    ebx = 0; /* xor self */
    POP32(esp, esi);

loc_00134650: ;
    eax = ebp;
    PUSH32(esp, 0); sub_00132BE0(); /* call 0x00132BE0 */

loc_00134657: ;
    SET_LO16(eax, MEM16(ebp + 0x60));
    (void)0; /* cmp LO16(eax), 0xFFFF - flags set for next jcc */
    MEM32(ebp + 0x64) = 0x28;
    if (CMP_EQ(LO16(eax), 0xFFFF)) { sub_00134676(); return; } /* je: equal / zero */

loc_00134668: ;
    edx = ZX16(LO16(eax));
    eax = MEM32(0x84A5FC);
    MEM8(edx + eax) = 0x28;
    g_seh_ebp = ebp; sub_0013469D(); return; /* tail jmp 0x0013469D */

}

/**
 * sub_00134730
 * Original: 0x00134730 - 0x00134752 (34 bytes, 9 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00134730(void)
{
    uint32_t ebp;
    int _flags = 0; /* fallback flag var */
    float xmm0;
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_00134730: ;
    eax = MEM32(esp + 4);
    esp = esp - 0x24;
    (void)0; /* test eax, eax - flags set for next jcc */
    PUSH32(esp, esi);
    esi = MEM32(esp + 0x30);
    if (TEST_Z(eax, eax)) { sub_00134752(); return; } /* je: equal / zero */

loc_00134740: ;
    xmm0 = MEMF(eax + 0x114); /* movss */
    xmm0 = xmm0 - MEMF(0x648E3C); /* subss */
    g_seh_ebp = ebp; sub_00134775(); return; /* tail jmp 0x00134775 */

}

/**
 * sub_00134840
 * Original: 0x00134840 - 0x0013486B (43 bytes, 16 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00134840(void)
{

loc_00134840: ;
    PUSH32(esp, esi);
    esi = MEM32(esp + 0xC);
    PUSH32(esp, edi);
    edi = MEM32(esp + 0xC);
    eax = esi;
    ecx = edi;
    PUSH32(esp, 0); sub_000B7350(); /* call 0x000B7350 */

loc_00134853: ;
    PUSH32(esp, 0xFF);
    PUSH32(esp, edi);
    ecx = 0x3E8;
    eax = esi;
    PUSH32(esp, 0); sub_000B79A0(); /* call 0x000B79A0 */

loc_00134865: ;
    esp = esp + 8;
    POP32(esp, edi);
    POP32(esp, esi);
    esp += 4; return; /* ret */

}

/**
 * sub_00134870
 * Original: 0x00134870 - 0x00134BE8 (888 bytes, 211 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00134870(void)
{
    int _flags = 0; /* fallback flag var */
    float xmm0;

loc_00134870: ;
    esp = esp - 0xC;
    PUSH32(esp, ebx);
    PUSH32(esp, esi);
    esi = MEM32(esp + 0x1C);
    ebx = 0; /* xor self */
    if (CMP_NE(MEM16(esi + 0x3AE), LO16(ebx))) goto loc_00134BD1; /* jne: not equal / not zero */

loc_00134888: ;
    if (CMP_EQ(MEM8(esi + 0x236), 0xFF)) goto loc_00134BD1; /* je: equal / zero */

loc_00134895: ;
    PUSH32(esp, 0xFF);
    PUSH32(esp, 1);
    PUSH32(esp, 1);
    PUSH32(esp, esi);
    PUSH32(esp, ebx);
    PUSH32(esp, 0); sub_000B2100(); /* call 0x000B2100 */

loc_001348A5: ;
    esp = esp + 0x14;
    eax = esi;
    PUSH32(esp, 0); sub_00111960(); /* call 0x00111960 */

loc_001348AF: ;
    eax = MEM32(esi + 0x568);
    if (CMP_EQ(eax, ebx)) goto loc_00134BD1; /* je: equal / zero */

loc_001348BD: ;
    ecx = ZX16(MEM16(esi + 0x60));
    edx = (uint32_t)(int32_t)SMEM8(0x6BCFEB);
    (void)0; /* cmp ecx, edx - flags set for next jcc */
    MEM32(esp + 8) = ecx;
    if (CMP_GE(ecx, edx)) goto loc_00134BD1; /* jge: greater or equal (signed >=) */

loc_001348D4: ;
    if (CMP_EQ(MEM8(eax + 0x2BC), LO8(ebx))) goto loc_001348EE; /* je: equal / zero */

loc_001348DC: ;
    MEM8(eax + 0x2BC) = LO8(ebx);
    eax = MEM32(esi + 0x568);
    MEM32(eax + 0xA0) = ebx;

loc_001348EE: ;
    eax = MEM32(esi + 0x568);
    if (CMP_NE(MEM32(eax + 0x204), ebx)) goto loc_00134BD1; /* jne: not equal / not zero */

loc_00134900: ;
    MEM32(eax + 0x208) = 6;
    PUSH32(esp, edi);
    eax = esp + 0x20;
    MEM32(esp + 0x20) = esi;
    PUSH32(esp, 0); sub_00267470(); /* call 0x00267470 */

loc_00134918: ;
    SET_LO8(ecx, MEM8(esi + 0x10B));
    PUSH32(esp, 3);
    edx = esp + 0x14;
    PUSH32(esp, edx);
    PUSH32(esp, 0x98);
    eax = 0; /* xor self */
    MEM32(esp + 0x1C) = esi;
    MEM8(esp + 0x20) = LO8(ecx);
    PUSH32(esp, 0); sub_000DA880(); /* call 0x000DA880 */

loc_00134939: ;
    eax = MEM32(esi + 0x568);
    SET_LO8(ecx, MEM8(eax + 0x2DA));
    esp = esp + 0xC;
    edi = edi | 0xFFFFFFFFu;
    (void)0; /* cmp LO8(ecx), LO8(ebx) - flags set for next jcc */
    MEM8(0x7FCB46) = LO8(ebx);
    if (CMP_EQ(LO8(ecx), LO8(ebx))) goto loc_0013495C; /* je: equal / zero */

loc_00134955: ;
    MEM8(0x7FCB46) = 2;

loc_0013495C: ;
    ecx = MEM32(esi + 0x64);
    if (CMP_EQ(ecx, 1)) goto loc_0013497A; /* je: equal / zero */

loc_00134964: ;
    if (CMP_EQ(ecx, 0x15)) goto loc_0013497A; /* je: equal / zero */

loc_00134969: ;
    if (CMP_EQ(MEM8(esi + 0xA1), 3)) goto loc_0013497A; /* je: equal / zero */

loc_00134972: ;
    if (CMP_EQ(MEM8(esi + 0x135), LO8(ebx))) goto loc_0013497F; /* je: equal / zero */

loc_0013497A: ;
    edi = 0x170;

loc_0013497F: ;
    if (CMP_NE(MEM32(0x7FA1F8), 0xE)) goto loc_00134996; /* jne: not equal / not zero */

loc_00134988: ;
    if (CMP_EQ(MEM8(esi + 0x135), LO8(ebx))) goto loc_00134996; /* je: equal / zero */

loc_00134990: ;
    MEM8(esi + 0x135) = LO8(ebx);

loc_00134996: ;
    if (CMP_EQ(MEM32(eax + 0x444), ebx)) goto loc_001349A9; /* je: equal / zero */

loc_0013499E: ;
    if (CMP_EQ(MEM32(esi + 0x3D8), ebx)) goto loc_001349A9; /* je: equal / zero */

loc_001349A6: ;
    edi = edi | 0xFFFFFFFFu;

loc_001349A9: ;
    if (CMP_EQ(MEM8(0x7819D5), LO8(ebx))) goto loc_001349D1; /* je: equal / zero */

loc_001349B1: ;
    if (CMP_EQ(eax, ebx)) goto loc_001349D1; /* je: equal / zero */

loc_001349B5: ;
    ecx = MEM32(eax + 0x648);
    if (CMP_EQ(ecx, ebx)) goto loc_001349D1; /* je: equal / zero */

loc_001349BF: ;
    if (CMP_NE(MEM32(eax + 0xBC), ebx)) goto loc_001349D1; /* jne: not equal / not zero */

loc_001349C7: ;
    PUSH32(esp, ecx);
    ebx = esi;
    PUSH32(esp, 0); sub_00345B30(); /* call 0x00345B30 */

loc_001349CF: ;
    ebx = 0; /* xor self */

loc_001349D1: ;
    if (CMP_EQ(edi, 0xFFFFFFFFu)) goto loc_00134A34; /* je: equal / zero */

loc_001349D6: ;
    eax = MEM32(esi + 0x568);
    PUSH32(esp, ebx);
    MEM32(eax + 0x474) = 0xFFFFFFFFu;
    ecx = MEM32(esi + 0x568);
    PUSH32(esp, ebx);
    PUSH32(esp, ebx);
    MEM32(ecx + 0x478) = 0xFFFFFFFFu;
    edx = MEM32(esi + 0x568);
    PUSH32(esp, 0x40400000);
    MEM32(edx + 0x3DC) = 0xFFFFFFFFu;
    PUSH32(esp, 0x3F800000);
    PUSH32(esp, esi);
    edx = edi;
    PUSH32(esp, 0); sub_002F1620(); /* call 0x002F1620 */

loc_00134A1B: ;
    SET_LO8(eax, MEM8(0x7819D5));
    esp = esp + 0x18;
    if (CMP_EQ(LO8(eax), LO8(ebx))) goto loc_00134A34; /* je: equal / zero */

loc_00134A27: ;
    eax = MEM32(esi + 0x568);
    MEM8(eax + 0x48D) = 1;

loc_00134A34: ;
    edx = MEM32(esi + 0x200);
    ecx = MEM32(esi + 0x568);
    xmm0 = 0.0f; /* xorps self = zero */
    edx = edx | 0x200;
    MEM32(esi + 0x200) = edx;
    MEM16(esi + 0x3AE) = LO16(ebx);
    MEM8(esi + 0x234) = 0xFF;
    MEM8(esi + 0x20C) = 0xFF;
    MEM8(esi + 0x180) = 0xFF;
    MEMF(esi + 0x110) = xmm0; /* movss */
    MEM16(esi + 0x1EC) = LO16(ebx);
    MEM16(esi + 0x1EE) = LO16(ebx);
    MEM16(ecx + 0x5E) = LO16(ebx);
    edx = MEM32(esi + 0x568);
    MEM8(edx + 0x2D2) = LO8(ebx);
    eax = MEM32(esi + 0x568);
    MEMF(eax + 0x30C) = xmm0; /* movss */
    ecx = MEM32(esi + 0x568);
    MEM8(ecx + 0x70) = LO8(ebx);
    eax = MEM32(esi + 0x564);
    if (CMP_EQ(eax, ebx)) goto loc_00134AC3; /* je: equal / zero */

loc_00134AB2: ;
    if (CMP_EQ(MEM8(0x7819D5), LO8(ebx))) goto loc_00134AC3; /* je: equal / zero */

loc_00134ABA: ;
    edx = MEM32(eax + 4);
    MEM8(edx + 0x8CF) = LO8(ebx);

loc_00134AC3: ;
    if (CMP_EQ(MEM8(esi + 0x250), LO8(ebx))) goto loc_00134AD0; /* je: equal / zero */

loc_00134ACB: ;
    PUSH32(esp, 0); sub_002D53D0(); /* call 0x002D53D0 */

loc_00134AD0: ;
    ebx = esi;
    PUSH32(esp, 0); sub_003B6C50(); /* call 0x003B6C50 */

loc_00134AD7: ;
    PUSH32(esp, esi);
    PUSH32(esp, 0); sub_00389400(); /* call 0x00389400 */

loc_00134ADD: ;
    PUSH32(esp, 6);
    eax = 0x78;
    PUSH32(esp, 0); sub_002CB810(); /* call 0x002CB810 */

loc_00134AE9: ;
    SET_LO8(eax, MEM8(0x7819D5));
    esp = esp + 8;
    if (TEST_NZ(LO8(eax), LO8(eax))) goto loc_00134B02; /* jne: not equal / not zero */

loc_00134AF5: ;
    if (CMP_NE(MEM32(0x7FA1F8), 0x48)) goto loc_00134B83; /* jne: not equal / not zero */

loc_00134B02: ;
    eax = MEM32(esi + 0x568);
    if (CMP_NE(MEM32(eax + 0xBC), 2)) goto loc_00134B31; /* jne: not equal / not zero */

loc_00134B11: ;
    xmm0 = MEMF(0x648D1C); /* movss */
    MEM32(eax + 0x204) = 0xD;
    eax = MEM32(esi + 0x568);
    MEMF(eax + 0x5F4) = xmm0; /* movss */

loc_00134B31: ;
    ecx = MEM32(esi + 0x568);
    eax = MEM32(ecx + 0xBC);
    if (TEST_NZ(eax, eax)) goto loc_00134B71; /* jne: not equal / not zero */

loc_00134B41: ;
    PUSH32(esp, 1);
    PUSH32(esp, 0); sub_00344650(); /* call 0x00344650 */

loc_00134B48: ;
    edx = eax;
    eax = esi;
    ecx = 0x5F8C6C;
    PUSH32(esp, 0); sub_00344C40(); /* call 0x00344C40 */

loc_00134B56: ;
    eax = MEM32(esi + 0x564);
    ecx = 1;
    PUSH32(esp, 0); sub_0003E460(); /* call 0x0003E460 */

loc_00134B66: ;
    PUSH32(esp, 1);
    PUSH32(esp, esi);
    PUSH32(esp, 0); sub_001FF3B0(); /* call 0x001FF3B0 */

loc_00134B6E: ;
    esp = esp + 8;

loc_00134B71: ;
    edx = MEM32(0x847024);
    eax = MEM32(edx + 0x40);
    edi = MEM32(eax + 4);
    PUSH32(esp, esi);
    PUSH32(esp, 0); sub_0002E860(); /* call 0x0002E860 */

loc_00134B83: ;
    eax = MEM32(esp + 0xC);
    (void)0; /* test eax, eax - flags set for next jcc */
    POP32(esp, edi);
    if (TEST_NZ(eax, eax)) goto loc_00134BCF; /* jne: not equal / not zero */

loc_00134B8C: ;
    if (CMP_NE(MEM32(0x7FA1F8), 4)) goto loc_00134BCF; /* jne: not equal / not zero */

loc_00134B95: ;
    PUSH32(esp, 0xFF);
    PUSH32(esp, 0); sub_003E1D70(); /* call 0x003E1D70 */

loc_00134B9F: ;
    xmm0 = xmm0 * MEMF(0x648D80); /* mulss */
    xmm0 = xmm0 + MEMF(0x648D3C); /* addss */
    PUSH32(esp, ecx);
    MEMF(esp) = xmm0; /* movss */
    PUSH32(esp, 0); sub_003E2480(); /* call 0x003E2480 */

loc_00134BBA: ;
    edx = ((int32_t)eax < 0) ? 0xFFFFFFFF : 0; /* cdq */
    ecx = 3;
    { int64_t _dividend = ((int64_t)(int32_t)edx << 32) | eax;
      eax = (uint32_t)((int32_t)(_dividend / (int32_t)ecx));
      edx = (uint32_t)((int32_t)(_dividend % (int32_t)ecx)); }
    esi = edx;
    esi = esi + 4;
    PUSH32(esp, 0); sub_00187BC0(); /* call 0x00187BC0 */

loc_00134BCC: ;
    esp = esp + 8;

loc_00134BCF: ;
    ebx = 0; /* xor self */

loc_00134BD1: ;
    eax = MEM32(esp + 0x18);
    if (CMP_NE(MEM32(eax + 0x68), 0x47)) goto loc_00134BE2; /* jne: not equal / not zero */

loc_00134BDB: ;
    MEM16(eax + 0x3AE) = LO16(ebx);

loc_00134BE2: ;
    POP32(esp, esi);
    POP32(esp, ebx);
    esp = esp + 0xC;
    esp += 4; return; /* ret */

}

/**
 * sub_00134BF0
 * Original: 0x00134BF0 - 0x00134C3F (79 bytes, 20 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00134BF0(void)
{
    float xmm0;

loc_00134BF0: ;
    esp = esp - 0x10;
    MEM8(esp) = 1;
    PUSH32(esp, 0); sub_003E2480(); /* call 0x003E2480 */

loc_00134BFC: ;
    edx = ((int32_t)eax < 0) ? 0xFFFFFFFF : 0; /* cdq */
    ecx = 0xB;
    { int64_t _dividend = ((int64_t)(int32_t)edx << 32) | eax;
      eax = (uint32_t)((int32_t)(_dividend / (int32_t)ecx));
      edx = (uint32_t)((int32_t)(_dividend % (int32_t)ecx)); }
    xmm0 = MEMF(0x648D14); /* movss */
    PUSH32(esp, 0xFF);
    PUSH32(esp, 0);
    MEMF(esp + 0xC) = xmm0; /* movss */
    MEMF(esp + 0x10) = xmm0; /* movss */
    MEM8(esp + 0x15) = 0xFF;
    MEM8(esp + 0x14) = 1;
    edx = edx + 0x14;
    MEM16(esp + 0xA) = LO16(edx);
    edx = esp + 8;
    PUSH32(esp, edx);
    PUSH32(esp, 0); sub_0015A3F0(); /* call 0x0015A3F0 */

loc_00134C3B: ;
    esp = esp + 0x1C;
    esp += 4; return; /* ret */

}

/**
 * sub_00134C40
 * Original: 0x00134C40 - 0x00134E8E (590 bytes, 138 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00134C40(void)
{
    uint32_t ebp;
    int _flags = 0; /* fallback flag var */
    float xmm0;
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_00134C40: ;
    esp = esp - 0x78;
    PUSH32(esp, esi);
    esi = MEM32(esp + 0x84);
    eax = MEM32(esi + 0x568);
    if (TEST_Z(eax, eax)) goto loc_00134E89; /* je: equal / zero */

loc_00134C59: ;
    ecx = MEM32(eax + 0x444);
    if (TEST_Z(ecx, ecx)) goto loc_00134C78; /* je: equal / zero */

loc_00134C63: ;
    ecx = MEM32(ecx + 0x280);
    if (TEST_Z(ecx, ecx)) goto loc_00134C78; /* je: equal / zero */

loc_00134C6D: ;
    SET_LO8(edx, MEM8(ecx + 3));
    if (TEST_NZ(LO8(edx), LO8(edx))) goto loc_00134E89; /* jne: not equal / not zero */

loc_00134C78: ;
    ecx = MEM32(0x84A6A4);
    xmm0 = MEMF(ecx + 0x74); /* movss */
    xmm0 = xmm0 * MEMF(0x7F9F5C); /* mulss */
    MEM16(eax + 0xE) = 0xAD;
    edx = MEM32(esi + 0x568);
    MEM8(edx + 0x22) = 2;
    eax = MEM32(esi + 0x568);
    PUSH32(esp, ebx);
    PUSH32(esp, ebp);
    ebp = (int32_t)xmm0; /* cvttss2si */
    xmm0 = 0.0f; /* xorps self = zero */
    MEM16(eax + 8) = LO16(ebp);
    ecx = MEM32(esi + 0x568);
    SET_LO8(ebx, 1);
    MEM8(ecx + 0x2DC) = LO8(ebx);
    edx = MEM32(esi + 0x568);
    MEMF(edx + 0x284) = xmm0; /* movss */
    SET_LO8(ecx, MEM8(esi + 0x141));
    SET_LO8(eax, 0x2A);
    if (CMP_EQ(LO8(ecx), LO8(eax))) goto loc_00134CE3; /* je: equal / zero */

loc_00134CD6: ;
    MEM8(esi + 0x141) = LO8(eax);
    eax = esi;
    PUSH32(esp, 0); sub_002CF1C0(); /* call 0x002CF1C0 */

loc_00134CE3: ;
    eax = MEM32(esi + 0x568);
    if (CMP_EQ(MEM32(eax + 0xBC), 2)) goto loc_00134D0E; /* je: equal / zero */

loc_00134CF2: ;
    SET_LO8(ecx, MEM8(eax + 0x2E2));
    if (TEST_Z(LO8(ecx), LO8(ecx))) goto loc_00134D0E; /* je: equal / zero */

loc_00134CFC: ;
    PUSH32(esp, 0);
    eax = esp + 0x13;
    PUSH32(esp, eax);
    PUSH32(esp, 2);
    PUSH32(esp, esi);
    PUSH32(esp, 0); sub_002F7DF0(); /* call 0x002F7DF0 */

loc_00134D0B: ;
    esp = esp + 0x10;

loc_00134D0E: ;
    PUSH32(esp, edi);
    edi = 8;
    eax = esi;
    PUSH32(esp, 0); sub_002C48F0(); /* call 0x002C48F0 */

loc_00134D1B: ;
    eax = MEM32(esi + 0x564);
    (void)0; /* test eax, eax - flags set for next jcc */
    POP32(esp, edi);
    if (TEST_Z(eax, eax)) goto loc_00134E87; /* je: equal / zero */

loc_00134D2A: ;
    ecx = MEM32(0x847024);
    eax = MEM32(ecx + 0x44);
    eax = MEM32(eax + 0xC);
    PUSH32(esp, 0);
    PUSH32(esp, esi);
    eax = eax + 8;
    eax = MEM32(eax);
    PUSH32(esp, eax);
    eax = MEM32(ecx + 0x40);
    PUSH32(esp, 2);
    edx = esi + 0x78;
    PUSH32(esp, edx);
    PUSH32(esp, 0xBF800000u);
    PUSH32(esp, 0);
    PUSH32(esp, eax);
    edx = 0; /* xor self */
    eax = ebp;
    ecx = 0x8EB;
    PUSH32(esp, 0); sub_00022D90(); /* call 0x00022D90 */

loc_00134D5E: ;
    xmm0 = MEMF(0x648D80); /* movss */
    ecx = MEM32(esi + 0x564);
    SET_LO8(edx, MEM8(ecx + 0x2A8));
    MEMF(esp + 0x4C) = xmm0; /* movss */
    MEMF(esp + 0x50) = xmm0; /* movss */
    MEMF(esp + 0x54) = xmm0; /* movss */
    MEMF(esp + 0x64) = xmm0; /* movss */
    MEMF(esp + 0x68) = xmm0; /* movss */
    MEMF(esp + 0x6C) = xmm0; /* movss */
    MEMF(esp + 0x40) = xmm0; /* movss */
    MEMF(esp + 0x44) = xmm0; /* movss */
    MEMF(esp + 0x48) = xmm0; /* movss */
    MEMF(esp + 0x58) = xmm0; /* movss */
    MEMF(esp + 0x5C) = xmm0; /* movss */
    MEMF(esp + 0x60) = xmm0; /* movss */
    SET_LO8(eax, LO8(eax) | 0xFF);
    MEM8(esp + 0x70) = LO8(ebx);
    xmm0 = (float)(int32_t)ebp; /* cvtsi2ss */
    xmm0 = xmm0 * MEMF(0x64922C); /* mulss */
    PUSH32(esp, 0xFF);
    PUSH32(esp, 0);
    ebx = esp + 0x3C;
    MEM8(esp + 0x44) = LO8(edx);
    MEM16(esp + 0x42) = LO16(ebp);
    MEM8(esp + 0x3C) = 5;
    MEM8(esp + 0x3D) = LO8(eax);
    MEM8(esp + 0x3E) = LO8(eax);
    MEMF(esp + 0x18) = xmm0; /* movss */
    MEMF(esp + 0x88) = xmm0; /* movss */
    PUSH32(esp, 0); sub_000C4660(); /* call 0x000C4660 */

loc_00134E01: ;
    eax = MEM32(esi + 0x564);
    SET_LO16(ecx, ZX8(MEM8(eax + 0x2A8)));
    xmm0 = MEMF(esp + 0x18); /* movss */
    SET_LO8(eax, 1);
    MEMF(esp + 0x20) = xmm0; /* movss */
    MEM8(esp + 0x25) = LO8(eax);
    MEM8(esp + 0x26) = LO8(eax);
    eax = MEM32(esp + 0x90);
    xmm0 = MEMF(eax + 0x78); /* movss */
    MEMF(esp + 0x28) = xmm0; /* movss */
    xmm0 = MEMF(eax + 0x7C); /* movss */
    MEMF(esp + 0x2C) = xmm0; /* movss */
    xmm0 = MEMF(eax + 0x80); /* movss */
    MEMF(esp + 0x30) = xmm0; /* movss */
    xmm0 = MEMF(0x5A0060); /* movss */
    MEMF(esp + 0x34) = xmm0; /* movss */
    xmm0 = MEMF(0x6493C8); /* movss */
    PUSH32(esp, 0xFF);
    esi = esp + 0x20;
    MEM16(esp + 0x20) = LO16(ecx);
    MEM8(esp + 0x28) = 0xE1;
    MEMF(esp + 0x3C) = xmm0; /* movss */
    PUSH32(esp, 0); sub_000C6580(); /* call 0x000C6580 */

loc_00134E84: ;
    esp = esp + 0xC;

loc_00134E87: ;
    POP32(esp, ebp);
    POP32(esp, ebx);

loc_00134E89: ;
    POP32(esp, esi);
    esp = esp + 0x78;
    esp += 4; return; /* ret */

}

/**
 * sub_00134E90
 * Original: 0x00134E90 - 0x00134EEA (90 bytes, 25 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00134E90(void)
{
    float xmm0;

loc_00134E90: ;
    esp = esp - 0xC;
    PUSH32(esp, esi);
    PUSH32(esp, 0);
    PUSH32(esp, 0);
    eax = eax + 0x78;
    ecx = MEM32(eax);
    edx = MEM32(eax + 4);
    eax = MEM32(eax + 8);
    PUSH32(esp, 0x3E19999A);
    PUSH32(esp, 0x3DCCCCCD);
    PUSH32(esp, 0x43898000);
    MEM32(esp + 0x1C) = edx;
    xmm0 = MEMF(esp + 0x1C); /* movss */
    xmm0 = xmm0 + MEMF(0x648F08); /* addss */
    PUSH32(esp, 0x3F400000);
    PUSH32(esp, 3);
    esi = esp + 0x20;
    MEM32(esp + 0x20) = ecx;
    MEM32(esp + 0x28) = eax;
    MEMF(esp + 0x24) = xmm0; /* movss */
    PUSH32(esp, 0); sub_000F60F0(); /* call 0x000F60F0 */

loc_00134EE2: ;
    esp = esp + 0x1C;
    POP32(esp, esi);
    esp = esp + 0xC;
    esp += 4; return; /* ret */

}

/**
 * sub_00134EF0
 * Original: 0x00134EF0 - 0x00134F20 (48 bytes, 14 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00134EF0(void)
{
    int _flags = 0; /* fallback flag var */
    float xmm0;

loc_00134EF0: ;
    PUSH32(esp, esi);
    esi = MEM32(esp + 0xC);
    eax = MEM32(esi + 0x64);
    if (CMP_NE(eax, 0x35)) { sub_00134F20(); return; } /* jne: not equal / not zero */

loc_00134EFD: ;
    eax = esi;
    PUSH32(esp, 0); sub_00134E90(); /* call 0x00134E90 */

loc_00134F04: ;
    esi = MEM32(esi + 0x570);
    if (TEST_Z(esi, esi)) goto loc_00134F1E; /* je: equal / zero */

loc_00134F0E: ;
    xmm0 = MEMF(0x648CE4); /* movss */
    MEMF(esi + 0xC68) = xmm0; /* movss */

loc_00134F1E: ;
    POP32(esp, esi);
    esp += 4; return; /* ret */

}

/**
 * sub_00135440
 * Original: 0x00135440 - 0x001354AF (111 bytes, 23 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00135440(void)
{
    uint32_t ebp;
    int _flags = 0; /* fallback flag var */
    float xmm0, xmm1;
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_00135440: ;
    PUSH32(esp, esi);
    PUSH32(esp, edi);
    edi = MEM32(esp + 0xC);
    eax = MEM32(edi + 0x23C);
    PUSH32(esp, 0); sub_00315260(); /* call 0x00315260 */

loc_00135451: ;
    esi = eax;
    if (TEST_Z(esi, esi)) goto loc_0013546B; /* je: equal / zero */

loc_00135457: ;
    PUSH32(esp, 0); sub_00346820(); /* call 0x00346820 */

loc_0013545C: ;
    ecx = ZX16(MEM16(esi + 0x60));
    MEM32(eax + ecx * 4 + 0x600) = 1;

loc_0013546B: ;
    eax = MEM32(esp + 0x10);
    xmm0 = 0.0f; /* xorps self = zero */
    xmm1 = MEMF(0x648D14); /* movss */
    MEMF(eax + 0x624) = xmm0; /* movss */
    MEMF(eax + 0x62C) = xmm0; /* movss */
    xmm0 = MEMF(0x648CF0); /* movss */
    MEMF(eax + 0x628) = xmm1; /* movss */
    MEMF(eax + 0x630) = xmm0; /* movss */
    eax = MEM32(edi + 0x23C);
    POP32(esp, edi);
    POP32(esp, esi);
    g_seh_ebp = ebp; sub_00315260(); return; /* tail jmp 0x00315260 */

}

/**
 * sub_00135520
 * Original: 0x00135520 - 0x00135654 (308 bytes, 86 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00135520(void)
{
    int _flags = 0; /* fallback flag var */
    float xmm0, xmm1;

loc_00135520: ;
    PUSH32(esp, ebx);
    PUSH32(esp, esi);
    PUSH32(esp, edi);
    edi = MEM32(esp + 0x10);
    eax = MEM32(edi + 0x23C);
    PUSH32(esp, 0); sub_00315260(); /* call 0x00315260 */

loc_00135532: ;
    esi = eax;
    if (TEST_Z(esi, esi)) goto loc_0013554C; /* je: equal / zero */

loc_00135538: ;
    PUSH32(esp, 0); sub_00346820(); /* call 0x00346820 */

loc_0013553D: ;
    ecx = ZX16(MEM16(esi + 0x60));
    MEM32(eax + ecx * 4 + 0x600) = 0;

loc_0013554C: ;
    ebx = MEM32(esp + 0x14);
    if (CMP_NE(MEM32(ebx + 0x64), 0x44)) goto loc_001355A1; /* jne: not equal / not zero */

loc_00135556: ;
    PUSH32(esp, 0); sub_002BE750(); /* call 0x002BE750 */

loc_0013555B: ;
    eax = MEM32(ebx + 0x570);
    if (TEST_Z(eax, eax)) goto loc_001355D4; /* je: equal / zero */

loc_00135565: ;
    eax = MEM32(eax + 0x18);
    if (TEST_Z(eax, eax)) goto loc_001355D4; /* je: equal / zero */

loc_0013556C: ;
    xmm0 = 0.0f; /* xorps self = zero */
    xmm1 = MEMF(0x648D14); /* movss */
    MEMF(eax + 0x624) = xmm0; /* movss */
    MEMF(eax + 0x62C) = xmm0; /* movss */
    xmm0 = MEMF(0x648D1C); /* movss */
    MEMF(eax + 0x628) = xmm1; /* movss */
    MEMF(eax + 0x630) = xmm0; /* movss */
    goto loc_001355D4;

loc_001355A1: ;
    xmm0 = 0.0f; /* xorps self = zero */
    xmm1 = MEMF(0x648D14); /* movss */
    MEMF(ebx + 0x624) = xmm0; /* movss */
    MEMF(ebx + 0x62C) = xmm0; /* movss */
    xmm0 = MEMF(0x648D1C); /* movss */
    MEMF(ebx + 0x628) = xmm1; /* movss */
    MEMF(ebx + 0x630) = xmm0; /* movss */

loc_001355D4: ;
    SET_LO8(eax, MEM8(0x862C5C));
    if (TEST_NZ(LO8(eax), LO8(eax))) goto loc_001355E6; /* jne: not equal / not zero */

loc_001355DD: ;
    SET_LO8(eax, MEM8(0x863D11));
    if (TEST_NZ(LO8(eax), LO8(eax))) goto loc_00135650; /* jne: not equal / not zero */

loc_001355E6: ;
    edx = ebx;
    PUSH32(esp, 0); sub_003433A0(); /* call 0x003433A0 */

loc_001355ED: ;
    esi = eax;
    if (TEST_Z(esi, esi)) goto loc_00135650; /* je: equal / zero */

loc_001355F3: ;
    PUSH32(esp, 0); sub_002CB1D0(); /* call 0x002CB1D0 */

loc_001355F8: ;
    ecx = MEM32(eax);
    eax = MEM32(ecx + 0xC);
    if (CMP_EQ(eax, ecx)) goto loc_00135612; /* je: equal / zero */

loc_00135601: ;
    edx = 0x54;

loc_00135606: ;
    if (CMP_EQ(MEM32(eax + 4), edx)) goto loc_00135614; /* je: equal / zero */

loc_0013560B: ;
    eax = MEM32(eax + 0xC);
    if (CMP_NE(eax, ecx)) goto loc_00135606; /* jne: not equal / not zero */

loc_00135612: ;
    eax = ecx;

loc_00135614: ;
    if (CMP_NE(eax, ecx)) goto loc_0013561C; /* jne: not equal / not zero */

loc_00135618: ;
    eax = 0; /* xor self */
    goto loc_0013561E;

loc_0013561C: ;
    eax = MEM32(eax);

loc_0013561E: ;
    eax = MEM32(eax);
    if (TEST_Z(eax, eax)) goto loc_00135650; /* je: equal / zero */

loc_00135624: ;
    xmm0 = MEMF(eax + 0x20); /* movss */
    eax = MEM32(edi + 0x23C);
    MEMF(esp + 0x10) = xmm0; /* movss */
    PUSH32(esp, 0); sub_00315260(); /* call 0x00315260 */

loc_0013563A: ;
    ecx = MEM32(esp + 0x10);
    edx = MEM32(esi);
    (void)0; /* test eax, eax - flags set for next jcc */
    if (TEST_Z(eax, eax)) eax = edi; /* cmove */
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, eax);
    eax = MEM32(ebx + 0x64);
    PUSH32(esp, eax);
    PUSH32(esp, ecx);
    ecx = esi;
    PUSH32(esp, 0); RECOMP_ICALL_SAFE(MEM32(edx + 0x10), _icall_esp); /* indirect call */
    }

loc_00135650: ;
    POP32(esp, edi);
    POP32(esp, esi);
    POP32(esp, ebx);
    esp += 4; return; /* ret */

}

/**
 * sub_00135660
 * Original: 0x00135660 - 0x0013568B (43 bytes, 18 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00135660(void)
{
    uint32_t ebp;
    int _flags = 0; /* fallback flag var */
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_00135660: ;
    PUSH32(esp, ebx);
    PUSH32(esp, esi);
    PUSH32(esp, 0); sub_002CB1D0(); /* call 0x002CB1D0 */

loc_00135667: ;
    ecx = MEM32(eax);
    eax = MEM32(ecx + 0xC);
    if (CMP_EQ(eax, ecx)) goto loc_00135681; /* je: equal / zero */

loc_00135670: ;
    edx = 0x5A;

loc_00135675: ;
    if (CMP_EQ(MEM32(eax + 4), edx)) goto loc_00135683; /* je: equal / zero */

loc_0013567A: ;
    eax = MEM32(eax + 0xC);
    if (CMP_NE(eax, ecx)) goto loc_00135675; /* jne: not equal / not zero */

loc_00135681: ;
    eax = ecx;

loc_00135683: ;
    if (CMP_NE(eax, ecx)) { sub_0013568B(); return; } /* jne: not equal / not zero */

loc_00135687: ;
    eax = 0; /* xor self */
    g_seh_ebp = ebp; sub_0013568D(); return; /* tail jmp 0x0013568D */

}

/**
 * sub_00135750
 * Original: 0x00135750 - 0x00135AB6 (870 bytes, 217 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00135750(void)
{
    uint32_t ebp;
    int _flags = 0; /* fallback flag var */
    float xmm0;
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_00135750: ;
    eax = MEM32(esp + 4);
    esp = esp - 0xC;
    PUSH32(esp, ebx);
    PUSH32(esp, ebp);
    ebp = MEM32(esp + 0x1C);
    PUSH32(esp, 0xFF);
    PUSH32(esp, 1);
    PUSH32(esp, 1);
    PUSH32(esp, ebp);
    PUSH32(esp, eax);
    PUSH32(esp, 0); sub_000B2100(); /* call 0x000B2100 */

loc_0013576D: ;
    esp = esp + 0x14;
    eax = ebp;
    PUSH32(esp, 0); sub_00111960(); /* call 0x00111960 */

loc_00135777: ;
    eax = MEM32(ebp + 0x568);
    ebx = 0; /* xor self */
    if (CMP_EQ(eax, ebx)) goto loc_00135A95; /* je: equal / zero */

loc_00135787: ;
    ecx = ZX16(MEM16(ebp + 0x60));
    edx = (uint32_t)(int32_t)SMEM8(0x6BCFEB);
    (void)0; /* cmp ecx, edx - flags set for next jcc */
    MEM32(esp + 8) = ecx;
    if (CMP_GE(ecx, edx)) goto loc_00135A95; /* jge: greater or equal (signed >=) */

loc_0013579E: ;
    if (CMP_EQ(MEM8(eax + 0x2BC), LO8(ebx))) goto loc_001357B8; /* je: equal / zero */

loc_001357A6: ;
    MEM8(eax + 0x2BC) = LO8(ebx);
    eax = MEM32(ebp + 0x568);
    MEM32(eax + 0xA0) = ebx;

loc_001357B8: ;
    eax = MEM32(ebp + 0x568);
    if (CMP_NE(MEM32(eax + 0x204), ebx)) goto loc_00135A95; /* jne: not equal / not zero */

loc_001357CA: ;
    PUSH32(esp, esi);
    MEM32(eax + 0x208) = 6;
    PUSH32(esp, edi);
    eax = esp + 0x24;
    MEM32(esp + 0x24) = ebp;
    PUSH32(esp, 0); sub_00267470(); /* call 0x00267470 */

loc_001357E3: ;
    SET_LO8(ecx, MEM8(ebp + 0x10B));
    PUSH32(esp, 3);
    edx = esp + 0x18;
    PUSH32(esp, edx);
    PUSH32(esp, 0x98);
    eax = 0; /* xor self */
    MEM32(esp + 0x20) = ebp;
    MEM8(esp + 0x24) = LO8(ecx);
    PUSH32(esp, 0); sub_000DA880(); /* call 0x000DA880 */

loc_00135804: ;
    eax = MEM32(ebp + 0x568);
    SET_LO8(ecx, MEM8(eax + 0x2DA));
    edi = edi | 0xFFFFFFFFu;
    esp = esp + 0xC;
    (void)0; /* cmp LO8(ecx), LO8(ebx) - flags set for next jcc */
    esi = edi;
    MEM8(0x7FCB46) = LO8(ebx);
    if (CMP_EQ(LO8(ecx), LO8(ebx))) goto loc_00135829; /* je: equal / zero */

loc_00135822: ;
    MEM8(0x7FCB46) = 2;

loc_00135829: ;
    ecx = MEM32(ebp + 0x64);
    if (CMP_EQ(ecx, 1)) goto loc_00135847; /* je: equal / zero */

loc_00135831: ;
    if (CMP_EQ(ecx, 0x15)) goto loc_00135847; /* je: equal / zero */

loc_00135836: ;
    if (CMP_EQ(MEM8(ebp + 0xA1), 3)) goto loc_00135847; /* je: equal / zero */

loc_0013583F: ;
    if (CMP_EQ(MEM8(ebp + 0x135), LO8(ebx))) goto loc_0013584C; /* je: equal / zero */

loc_00135847: ;
    esi = 0x170;

loc_0013584C: ;
    if (CMP_NE(MEM32(0x7FA1F8), 0xE)) goto loc_00135863; /* jne: not equal / not zero */

loc_00135855: ;
    if (CMP_EQ(MEM8(ebp + 0x135), LO8(ebx))) goto loc_00135863; /* je: equal / zero */

loc_0013585D: ;
    MEM8(ebp + 0x135) = LO8(ebx);

loc_00135863: ;
    if (CMP_EQ(MEM32(eax + 0x444), ebx)) goto loc_00135875; /* je: equal / zero */

loc_0013586B: ;
    if (CMP_EQ(MEM32(ebp + 0x3D8), ebx)) goto loc_00135875; /* je: equal / zero */

loc_00135873: ;
    esi = edi;

loc_00135875: ;
    if (CMP_EQ(MEM8(0x7819D5), LO8(ebx))) goto loc_0013589D; /* je: equal / zero */

loc_0013587D: ;
    if (CMP_EQ(eax, ebx)) goto loc_0013589D; /* je: equal / zero */

loc_00135881: ;
    ecx = MEM32(eax + 0x648);
    if (CMP_EQ(ecx, ebx)) goto loc_0013589D; /* je: equal / zero */

loc_0013588B: ;
    if (CMP_NE(MEM32(eax + 0xBC), ebx)) goto loc_0013589D; /* jne: not equal / not zero */

loc_00135893: ;
    PUSH32(esp, ecx);
    ebx = ebp;
    PUSH32(esp, 0); sub_00345B30(); /* call 0x00345B30 */

loc_0013589B: ;
    ebx = 0; /* xor self */

loc_0013589D: ;
    if (CMP_EQ(esi, edi)) goto loc_001358F3; /* je: equal / zero */

loc_001358A1: ;
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

loc_001358DA: ;
    SET_LO8(eax, MEM8(0x7819D5));
    esp = esp + 0x18;
    if (CMP_EQ(LO8(eax), LO8(ebx))) goto loc_001358F3; /* je: equal / zero */

loc_001358E6: ;
    eax = MEM32(ebp + 0x568);
    MEM8(eax + 0x48D) = 1;

loc_001358F3: ;
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
    if (CMP_EQ(eax, ebx)) goto loc_00135982; /* je: equal / zero */

loc_00135971: ;
    if (CMP_EQ(MEM8(0x7819D5), LO8(ebx))) goto loc_00135982; /* je: equal / zero */

loc_00135979: ;
    edx = MEM32(eax + 4);
    MEM8(edx + 0x8CF) = LO8(ebx);

loc_00135982: ;
    if (CMP_EQ(MEM8(ebp + 0x250), LO8(ebx))) goto loc_00135991; /* je: equal / zero */

loc_0013598A: ;
    esi = ebp;
    PUSH32(esp, 0); sub_002D53D0(); /* call 0x002D53D0 */

loc_00135991: ;
    ebx = ebp;
    PUSH32(esp, 0); sub_003B6C50(); /* call 0x003B6C50 */

loc_00135998: ;
    PUSH32(esp, ebp);
    PUSH32(esp, 0); sub_00389400(); /* call 0x00389400 */

loc_0013599E: ;
    PUSH32(esp, 6);
    eax = 0x78;
    esi = ebp;
    PUSH32(esp, 0); sub_002CB810(); /* call 0x002CB810 */

loc_001359AC: ;
    SET_LO8(eax, MEM8(0x7819D5));
    esp = esp + 8;
    if (TEST_NZ(LO8(eax), LO8(eax))) goto loc_001359C5; /* jne: not equal / not zero */

loc_001359B8: ;
    if (CMP_NE(MEM32(0x7FA1F8), 0x48)) goto loc_00135A46; /* jne: not equal / not zero */

loc_001359C5: ;
    eax = MEM32(ebp + 0x568);
    if (CMP_NE(MEM32(eax + 0xBC), 2)) goto loc_001359F4; /* jne: not equal / not zero */

loc_001359D4: ;
    xmm0 = MEMF(0x648D1C); /* movss */
    MEM32(eax + 0x204) = 0xD;
    eax = MEM32(ebp + 0x568);
    MEMF(eax + 0x5F4) = xmm0; /* movss */

loc_001359F4: ;
    ecx = MEM32(ebp + 0x568);
    eax = MEM32(ecx + 0xBC);
    if (TEST_NZ(eax, eax)) goto loc_00135A34; /* jne: not equal / not zero */

loc_00135A04: ;
    PUSH32(esp, 1);
    PUSH32(esp, 0); sub_00344650(); /* call 0x00344650 */

loc_00135A0B: ;
    edx = eax;
    eax = ebp;
    ecx = 0x5F8C6C;
    PUSH32(esp, 0); sub_00344C40(); /* call 0x00344C40 */

loc_00135A19: ;
    eax = MEM32(ebp + 0x564);
    ecx = 1;
    PUSH32(esp, 0); sub_0003E460(); /* call 0x0003E460 */

loc_00135A29: ;
    PUSH32(esp, 1);
    PUSH32(esp, ebp);
    PUSH32(esp, 0); sub_001FF3B0(); /* call 0x001FF3B0 */

loc_00135A31: ;
    esp = esp + 8;

loc_00135A34: ;
    edx = MEM32(0x847024);
    eax = MEM32(edx + 0x40);
    edi = MEM32(eax + 4);
    PUSH32(esp, ebp);
    PUSH32(esp, 0); sub_0002E860(); /* call 0x0002E860 */

loc_00135A46: ;
    eax = MEM32(esp + 0x10);
    if (TEST_NZ(eax, eax)) goto loc_00135A91; /* jne: not equal / not zero */

loc_00135A4E: ;
    if (CMP_NE(MEM32(0x7FA1F8), 4)) goto loc_00135A91; /* jne: not equal / not zero */

loc_00135A57: ;
    PUSH32(esp, 0xFF);
    PUSH32(esp, 0); sub_003E1D70(); /* call 0x003E1D70 */

loc_00135A61: ;
    xmm0 = xmm0 * MEMF(0x648D80); /* mulss */
    xmm0 = xmm0 + MEMF(0x648D3C); /* addss */
    PUSH32(esp, ecx);
    MEMF(esp) = xmm0; /* movss */
    PUSH32(esp, 0); sub_003E2480(); /* call 0x003E2480 */

loc_00135A7C: ;
    edx = ((int32_t)eax < 0) ? 0xFFFFFFFF : 0; /* cdq */
    ecx = 3;
    { int64_t _dividend = ((int64_t)(int32_t)edx << 32) | eax;
      eax = (uint32_t)((int32_t)(_dividend / (int32_t)ecx));
      edx = (uint32_t)((int32_t)(_dividend % (int32_t)ecx)); }
    esi = edx;
    esi = esi + 4;
    PUSH32(esp, 0); sub_00187BC0(); /* call 0x00187BC0 */

loc_00135A8E: ;
    esp = esp + 8;

loc_00135A91: ;
    POP32(esp, edi);
    ebx = 0; /* xor self */
    POP32(esp, esi);

loc_00135A95: ;
    eax = MEM32(ebp + 0x568);
    if (CMP_EQ(eax, ebx)) goto loc_00135AB0; /* je: equal / zero */

loc_00135A9F: ;
    if (CMP_EQ(MEM8(eax + 0x2C2), LO8(ebx))) goto loc_00135AB0; /* je: equal / zero */

loc_00135AA7: ;
    eax = 0; /* xor self */
    ecx = ebp;
    PUSH32(esp, 0); sub_002FBDE0(); /* call 0x002FBDE0 */

loc_00135AB0: ;
    POP32(esp, ebp);
    POP32(esp, ebx);
    esp = esp + 0xC;
    esp += 4; return; /* ret */

}

/**
 * sub_00135AC0
 * Original: 0x00135AC0 - 0x00135B48 (136 bytes, 40 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00135AC0(void)
{
    uint32_t ebp;
    int _flags = 0; /* fallback flag var */
    float xmm0, xmm2, xmm3, xmm4;

loc_00135AC0: ;
    PUSH32(esp, ebp);
    ebp = esp;
    esp = esp & 0xFFFFFFF0u;
    esp = esp - 0x324;
    PUSH32(esp, ebx);
    PUSH32(esp, esi);
    esi = eax;
    eax = MEM32(esi + 0x3C8);
    (void)0; /* test eax, eax - flags set for next jcc */
    PUSH32(esp, edi);
    if (TEST_Z(eax, eax)) { sub_00135B48(); return; } /* je: equal / zero */

loc_00135ADB: ;
    eax = esp + 0x140;
    PUSH32(esp, eax);
    PUSH32(esp, 0x5F0724);
    PUSH32(esp, 0); sub_002F7810(); /* call 0x002F7810 */

loc_00135AED: ;
    ecx = esp + 0x60;
    PUSH32(esp, ecx);
    edx = esp + 0x60;
    PUSH32(esp, edx);
    eax = esp + 0x60;
    PUSH32(esp, eax);
    ecx = esp + 0x60;
    PUSH32(esp, ecx);
    edx = esp + 0x60;
    PUSH32(esp, edx);
    eax = esp + 0x60;
    PUSH32(esp, eax);
    ecx = esp + 0x80;
    PUSH32(esp, ecx);
    edx = esp + 0x164;
    PUSH32(esp, edx);
    edx = esp + 0x8C;
    eax = esp + 0x84;
    PUSH32(esp, 0); sub_00088740(); /* call 0x00088740 */

loc_00135B2E: ;
    xmm4 = MEMF(esp + 0x74); /* movss */
    xmm3 = MEMF(esp + 0x70); /* movss */
    xmm2 = MEMF(esp + 0x6C); /* movss */
    xmm0 = 0.0f; /* xorps self = zero */
    esp = esp + 0x28;
    g_seh_ebp = ebp; sub_00135B54(); return; /* tail jmp 0x00135B54 */

}

/**
 * sub_00136050
 * Original: 0x00136050 - 0x001360EB (155 bytes, 45 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00136050(void)
{
    uint32_t ebp;
    int _flags = 0; /* fallback flag var */
    float xmm1, xmm2, xmm3, xmm4;

loc_00136050: ;
    PUSH32(esp, ebp);
    ebp = esp;
    esp = esp & 0xFFFFFFF0u;
    esp = esp - 0x324;
    PUSH32(esp, ebx);
    PUSH32(esp, esi);
    PUSH32(esp, edi);
    ecx = 0x10;
    esi = 0x5A0350;
    edi = esp + 0x140;
    memcpy((void*)XBOX_PTR(edi), (void*)XBOX_PTR(esi), ecx * 4);
    esi += ecx * 4; edi += ecx * 4; ecx = 0; /* rep movsd */
    esi = MEM32(ebp + 8);
    eax = MEM32(esi + 0x3C8);
    if (TEST_Z(eax, eax)) { sub_001360EB(); return; } /* je: equal / zero */

loc_0013607F: ;
    ecx = MEM32(ebp + 0xC);
    eax = esp + 0x140;
    PUSH32(esp, eax);
    PUSH32(esp, ecx);
    PUSH32(esp, 0); sub_002F7810(); /* call 0x002F7810 */

loc_00136090: ;
    edx = esp + 0x60;
    PUSH32(esp, edx);
    eax = esp + 0x60;
    PUSH32(esp, eax);
    ecx = esp + 0x60;
    PUSH32(esp, ecx);
    edx = esp + 0x60;
    PUSH32(esp, edx);
    eax = esp + 0x60;
    PUSH32(esp, eax);
    ecx = esp + 0x60;
    PUSH32(esp, ecx);
    edx = esp + 0x80;
    PUSH32(esp, edx);
    eax = esp + 0x164;
    PUSH32(esp, eax);
    edx = esp + 0x8C;
    eax = esp + 0x84;
    PUSH32(esp, 0); sub_00088740(); /* call 0x00088740 */

loc_001360D1: ;
    xmm4 = MEMF(esp + 0x74); /* movss */
    xmm3 = MEMF(esp + 0x70); /* movss */
    xmm2 = MEMF(esp + 0x6C); /* movss */
    xmm1 = 0.0f; /* xorps self = zero */
    esp = esp + 0x28;
    g_seh_ebp = ebp; sub_001360F7(); return; /* tail jmp 0x001360F7 */

}

/**
 * sub_00136790
 * Original: 0x00136790 - 0x00136952 (450 bytes, 81 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00136790(void)
{
    uint32_t ebp;
    float xmm0;
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_00136790: ;
    esp = esp - 0x218;
    PUSH32(esp, ebx);
    PUSH32(esp, ebp);
    PUSH32(esp, esi);
    PUSH32(esp, edi);
    esi = eax;
    eax = esp + 0x44;
    PUSH32(esp, eax);
    ecx = esp + 0x44;
    PUSH32(esp, ecx);
    edx = esp + 0x44;
    PUSH32(esp, edx);
    eax = esp + 0x44;
    PUSH32(esp, eax);
    ecx = esp + 0x44;
    PUSH32(esp, ecx);
    edx = esp + 0x44;
    PUSH32(esp, edx);
    eax = esp + 0x64;
    PUSH32(esp, eax);
    ecx = esi + 0x20;
    PUSH32(esp, ecx);
    edx = esp + 0x70;
    eax = esp + 0x68;
    PUSH32(esp, 0); sub_00088740(); /* call 0x00088740 */

loc_001367D0: ;
    xmm0 = MEMF(0x648D14); /* movss */
    edx = MEM32(esp + 0x24C);
    eax = 0; /* xor self */
    ecx = 0x35;
    edi = esp + 0x74;
    { uint32_t _i; for (_i = 0; _i < ecx; _i++) MEM32(edi + _i*4) = eax; }
    edi += ecx * 4; ecx = 0; /* rep stosd */
    ecx = (uint32_t)(int32_t)SMEM16(esi + 0x16);
    MEMF(esp + 0x74) = xmm0; /* movss */
    MEMF(esp + 0x9C) = xmm0; /* movss */
    MEMF(esp + 0xA0) = xmm0; /* movss */
    MEMF(esp + 0xA4) = xmm0; /* movss */
    xmm0 = MEMF(0x648EA8); /* movss */
    MEMF(esp + 0x78) = xmm0; /* movss */
    xmm0 = MEMF(esi + 0x7C); /* movss */
    MEMF(esp + 0x7C) = xmm0; /* movss */
    xmm0 = MEMF(esi + 0x80); /* movss */
    MEMF(esp + 0x80) = xmm0; /* movss */
    xmm0 = MEMF(esp + 0x50); /* movss */
    MEMF(esp + 0x90) = xmm0; /* movss */
    xmm0 = MEMF(esp + 0x54); /* movss */
    MEMF(esp + 0x94) = xmm0; /* movss */
    xmm0 = MEMF(esp + 0x58); /* movss */
    MEMF(esp + 0x98) = xmm0; /* movss */
    xmm0 = 0.0f; /* xorps self = zero */
    MEM8(esp + 0xE8) = LO8(eax);
    eax = (uint32_t)(int32_t)SMEM16(esi + 0x14);
    MEMF(esp + 0x84) = xmm0; /* movss */
    MEMF(esp + 0x88) = xmm0; /* movss */
    MEMF(esp + 0x8C) = xmm0; /* movss */
    MEM32(esp + 0xE4) = edx;
    edx = (uint32_t)(int32_t)SMEM16(esi + 0x18);
    xmm0 = (float)(int32_t)eax; /* cvtsi2ss */
    MEMF(esp + 0xA8) = xmm0; /* movss */
    xmm0 = (float)(int32_t)ecx; /* cvtsi2ss */
    esp = esp + 0x20;
    edi = 0; /* xor self */
    MEMF(esp + 0x8C) = xmm0; /* movss */
    xmm0 = (float)(int32_t)edx; /* cvtsi2ss */
    MEM32(esp + 0xF4) = 0xCF570;
    MEM32(esp + 0xEC) = 0x13E6E0;
    MEM8(esp + 0xD0) = 0xFF;
    MEM8(esp + 0xF8) = 1;
    MEM32(esp + 0xFC) = edi;
    MEM8(esp + 0x100) = 0;
    MEM16(esp + 0x102) = 0x1E;
    MEM16(esp + 0x104) = 8;
    MEM32(esp + 0xBC) = 0x1039ED;
    MEM32(esp + 0xD4) = 0x13EF80;
    MEM32(esp + 0xD8) = edi;
    MEM32(esp + 0xF0) = 0x13EC80;
    MEM32(esp + 0xDC) = 0x136FD0;
    MEMF(esp + 0x90) = xmm0; /* movss */
    MEM32(esp + 0x18) = edi;
    MEM32(esp + 0x14) = edi;
    MEM32(esp + 0x1C) = edi;
    g_seh_ebp = ebp; sub_00136954(); return; /* tail jmp 0x00136954 */

}

/**
 * sub_00136C00
 * Original: 0x00136C00 - 0x00136FC5 (965 bytes, 237 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00136C00(void)
{
    uint32_t ebp;
    int _flags = 0; /* fallback flag var */
    float xmm0, xmm1, xmm5, xmm6;
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_00136C00: ;
    esp = esp - 0x1F4;
    xmm0 = MEMF(0x648D14); /* movss */
    xmm1 = MEMF(0x648EA8); /* movss */
    PUSH32(esp, ebx);
    PUSH32(esp, ebp);
    PUSH32(esp, esi);
    PUSH32(esp, edi);
    eax = 0; /* xor self */
    esi = 0; /* xor self */
    ecx = 0x35;
    edi = esp + 0x30;
    { uint32_t _i; for (_i = 0; _i < ecx; _i++) MEM32(edi + _i*4) = eax; }
    edi += ecx * 4; ecx = 0; /* rep stosd */
    MEMF(esp + 0x30) = xmm0; /* movss */
    MEMF(esp + 0x58) = xmm0; /* movss */
    MEMF(esp + 0x5C) = xmm0; /* movss */
    MEMF(esp + 0x60) = xmm0; /* movss */
    MEMF(esp + 0x38) = xmm0; /* movss */
    MEMF(esp + 0x3C) = xmm0; /* movss */
    xmm0 = 0.0f; /* xorps self = zero */
    MEM8(esp + 0xA4) = LO8(eax);
    MEM32(esp + 0xD0) = 0xCF570;
    MEM32(esp + 0xC8) = 0x13E6E0;
    MEM8(esp + 0xAC) = 0xFF;
    MEMF(esp + 0x34) = xmm1; /* movss */
    MEMF(esp + 0x64) = xmm0; /* movss */
    MEMF(esp + 0x68) = xmm0; /* movss */
    MEMF(esp + 0x6C) = xmm0; /* movss */
    MEMF(esp + 0x4C) = xmm0; /* movss */
    MEMF(esp + 0x50) = xmm0; /* movss */
    MEMF(esp + 0x54) = xmm0; /* movss */
    MEMF(esp + 0x40) = xmm0; /* movss */
    MEMF(esp + 0x44) = xmm0; /* movss */
    MEMF(esp + 0x48) = xmm0; /* movss */
    MEM8(esp + 0xD4) = 1;
    MEM32(esp + 0xD8) = esi;
    MEM8(esp + 0xDC) = 0;
    MEM16(esp + 0xDE) = 0xC8;
    MEM16(esp + 0xE0) = 1;
    MEM32(esp + 0x98) = 0x1039ED;
    MEM32(esp + 0xB0) = 0x13EF80;
    MEM32(esp + 0xB4) = esi;
    MEM32(esp + 0xCC) = 0x13EC80;
    MEM32(esp + 0xB8) = 0x136FD0;
    MEM32(esp + 0xA0) = esi;
    MEM32(esp + 0x18) = esi;
    MEM32(esp + 0x14) = esi;
    MEM32(esp + 0x1C) = esi;

loc_00136D22: ;
    eax = MEM32(esp + 0x208);
    PUSH32(esp, eax);
    PUSH32(esp, 0xFF);
    PUSH32(esp, esi);
    PUSH32(esp, esi);
    PUSH32(esp, 0x7F);
    PUSH32(esp, 3);
    ecx = esp + 0x48;
    PUSH32(esp, esi);
    PUSH32(esp, ecx);
    PUSH32(esp, 0); sub_0013D5D0(); /* call 0x0013D5D0 */

loc_00136D40: ;
    ebp = eax;
    esp = esp + 0x20;
    if (CMP_EQ(ebp, esi)) goto loc_00136F9A; /* je: equal / zero */

loc_00136D4D: ;
    eax = MEM32(ebp + 0x100);
    if (CMP_EQ(eax, esi)) goto loc_00136F9A; /* je: equal / zero */

loc_00136D5B: ;
    ecx = MEM32(eax + 0x10);
    if (CMP_EQ(ecx, esi)) goto loc_00136F9A; /* je: equal / zero */

loc_00136D66: ;
    if (CMP_EQ(MEM32(ecx + 0x24), esi)) goto loc_00136F9A; /* je: equal / zero */

loc_00136D6F: ;
    edx = ecx;
    eax = MEM32(edx + 0x24);
    eax = MEM32(eax + 8);
    ebx = MEM32(eax + 0x14);
    edx = MEM32(ebx + 4);
    ecx = MEM32(ebx);
    MEM32(esp + 0x10) = eax;
    eax = MEM32(esp + 0x1C);
    esi = MEM32(eax + edx + 4);
    MEM32(esp + 0x28) = ebx;
    MEM32(esp + 0x14) = ecx;
    esi = esi + 5;
    edi = ebp + 0x78;
    PUSH32(esp, 0); sub_003E1D70(); /* call 0x003E1D70 */

loc_00136D9E: ;
    xmm0 = xmm0 * MEMF(0x648E5C); /* mulss */
    xmm0 = xmm0 + MEMF(0x648E38); /* addss */
    PUSH32(esp, ecx);
    MEMF(esp) = xmm0; /* movss */
    PUSH32(esp, 0); sub_003E2480(); /* call 0x003E2480 */

loc_00136DB9: ;
    eax = eax & 0x8000000Fu;
    if (((int32_t)eax >= 0)) goto loc_00136DC5; /* jns: not sign (positive) */

loc_00136DC0: ;
    eax--;
    eax = eax | 0xFFFFFFF0u;
    eax++;

loc_00136DC5: ;
    eax = eax - 0x3C;
    PUSH32(esp, eax);
    PUSH32(esp, 0); sub_003E2480(); /* call 0x003E2480 */

loc_00136DCE: ;
    eax = eax & 0xFF;
    PUSH32(esp, eax);
    PUSH32(esp, 0); sub_00110510(); /* call 0x00110510 */

loc_00136DD9: ;
    esp = esp + 0xC;
    PUSH32(esp, 0); sub_003E1D70(); /* call 0x003E1D70 */

loc_00136DE1: ;
    xmm5 = MEMF(0x649278); /* movss */
    xmm6 = MEMF(0x6495E4); /* movss */
    xmm0 = xmm0 * xmm5; /* mulss */
    xmm0 = xmm0 - xmm6; /* subss */
    MEMF(ebp + 0x84) = xmm0; /* movss */
    PUSH32(esp, 0); sub_003E1D70(); /* call 0x003E1D70 */

loc_00136E06: ;
    xmm0 = xmm0 * xmm5; /* mulss */
    xmm0 = xmm0 - xmm6; /* subss */
    MEMF(ebp + 0x8C) = xmm0; /* movss */
    PUSH32(esp, 0); sub_003E1D70(); /* call 0x003E1D70 */

loc_00136E1B: ;
    xmm0 = xmm0 - MEMF(0x6492E4); /* subss */
    MEMF(ebp + 0x90) = xmm0; /* movss */
    PUSH32(esp, 0); sub_003E2480(); /* call 0x003E2480 */

loc_00136E30: ;
    edx = ((int32_t)eax < 0) ? 0xFFFFFFFF : 0; /* cdq */
    ecx = 0x12D;
    { int64_t _dividend = ((int64_t)(int32_t)edx << 32) | eax;
      eax = (uint32_t)((int32_t)(_dividend / (int32_t)ecx));
      edx = (uint32_t)((int32_t)(_dividend % (int32_t)ecx)); }
    edx = edx + 0x258;
    MEM32(ebp + 0x98) = edx;
    eax = MEM32(0x5F4190);
    edx = MEM32(0x5F418C);
    SET_LO8(ecx, MEM8(0x5F4194));
    MEM32(esp + 0x108) = eax;
    MEM32(esp + 0x104) = edx;
    MEM8(esp + 0x10C) = LO8(ecx);
    eax = esi;
    /* nop */

loc_00136E70: ;
    SET_LO8(ecx, MEM8(eax));
    eax++;
    if (TEST_NZ(LO8(ecx), LO8(ecx))) goto loc_00136E70; /* jne: not equal / not zero */

loc_00136E77: ;
    edi = esp + 0x104;
    eax = eax - esi;
    edi--;

loc_00136E81: ;
    SET_LO8(ecx, MEM8(edi + 1));
    edi++;
    if (TEST_NZ(LO8(ecx), LO8(ecx))) goto loc_00136E81; /* jne: not equal / not zero */

loc_00136E89: ;
    ecx = eax;
    ecx = ecx >> 2;
    memcpy((void*)XBOX_PTR(edi), (void*)XBOX_PTR(esi), ecx * 4);
    esi += ecx * 4; edi += ecx * 4; ecx = 0; /* rep movsd */
    ecx = eax;
    PUSH32(esp, 0);
    edx = esp + 0x28;
    ecx = ecx & 3;
    PUSH32(esp, edx);
    eax = esp + 0x10C;
    memcpy((void*)XBOX_PTR(edi), (void*)XBOX_PTR(esi), ecx);
    esi += ecx; edi += ecx; ecx = 0; /* rep movsb */
    edi = MEM32(esp + 0x18);
    PUSH32(esp, eax);
    PUSH32(esp, edi);
    PUSH32(esp, 0); sub_0029CF60(); /* call 0x0029CF60 */

loc_00136EB0: ;
    eax = MEM32(esp + 0x34);
    esp = esp + 0x10;
    esi = ebp + 0xE8;
    ecx = edi;
    PUSH32(esp, 0); sub_003ECDF0(); /* call 0x003ECDF0 */

loc_00136EC4: ;
    ecx = MEM32(esp + 0x14);
    eax = 0; /* xor self */
    (void)0; /* cmp ecx, eax - flags set for next jcc */
    MEM8(ebp + 0xE4) = 1;
    MEM32(esp + 0x10) = eax;
    if (CMP_BE(ecx, eax)) goto loc_00136F98; /* jbe: below or equal (unsigned <=) */

loc_00136EDD: ;
    MEM32(esp + 0x20) = eax;

loc_00136EE1: ;
    if (CMP_EQ(MEM32(esp + 0x18), eax)) goto loc_00136F78; /* je: equal / zero */

loc_00136EEB: ;
    eax = MEM32(ebx + 4);
    edx = MEM32(esp + 0x20);
    edi = MEM32(eax + edx + 4);
    ecx = MEM32(ebp + 0x100);
    esi = MEM32(ecx + 0x14);
    eax = eax + edx;
    eax = MEM32(eax);
    edx = esp + 0x2C;
    PUSH32(esp, edx);
    PUSH32(esp, eax);
    eax = ebx;
    PUSH32(esp, 0); sub_003EDAC0(); /* call 0x003EDAC0 */

loc_00136F10: ;
    eax = MEM32(esp + 0x34);
    esp = esp + 8;
    if (CMP_EQ(eax, 0xFFFFFFFFu)) goto loc_00136F78; /* je: equal / zero */

loc_00136F1C: ;
    edx = MEM32(ebx + 4);
    esi = MEM32(esi + 0xC);
    ecx = eax + eax * 4;
    ecx = MEM32(edx + ecx * 4 + 8);
    eax = ecx;
    ecx = ecx & 7;
    edx = 0x80;
    edx = (uint32_t)((int32_t)edx >> LO8(ecx));
    eax = eax >> 3;
    SET_LO8(ecx, MEM8(eax + esi));
    SET_LO8(edx, ~LO8(edx));
    SET_LO8(ecx, LO8(ecx) & LO8(edx));
    MEM8(eax + esi) = LO8(ecx);
    SET_LO8(eax, MEM8(ebp + 0x19C));
    if (TEST_Z(LO8(eax), LO8(eax))) goto loc_00136F78; /* je: equal / zero */

loc_00136F4C: ;
    if (TEST_Z(edi, edi)) goto loc_00136F78; /* je: equal / zero */

loc_00136F50: ;
    eax = MEM32(ebp + 0x100);
    ecx = MEM32(eax + 0x10);
    edx = MEM32(ecx + 0x24);
    ecx = MEM32(edx + 0x18);
    eax = MEM32(ebp + 0x1A8);
    ecx = MEM32(ecx + 0x14);
    PUSH32(esp, 0);
    ebx = edi;
    PUSH32(esp, 0); sub_003D6980(); /* call 0x003D6980 */

loc_00136F71: ;
    ebx = MEM32(esp + 0x2C);
    esp = esp + 4;

loc_00136F78: ;
    eax = MEM32(esp + 0x10);
    edx = MEM32(esp + 0x20);
    ecx = MEM32(esp + 0x14);
    eax++;
    edx = edx + 0x14;
    (void)0; /* cmp eax, ecx - flags set for next jcc */
    MEM32(esp + 0x10) = eax;
    MEM32(esp + 0x20) = edx;
    if (CMP_B(eax, ecx)) goto loc_00136EE1; /* jb: below (unsigned <) */

loc_00136F98: ;
    esi = 0; /* xor self */

loc_00136F9A: ;
    eax = MEM32(esp + 0x18);
    edx = MEM32(esp + 0x1C);
    ecx = MEM32(esp + 0x14);
    eax++;
    edx = edx + 0x14;
    (void)0; /* cmp eax, ecx - flags set for next jcc */
    MEM32(esp + 0x18) = eax;
    MEM32(esp + 0x1C) = edx;
    if (CMP_B(eax, ecx)) goto loc_00136D22; /* jb: below (unsigned <) */

loc_00136FBA: ;
    POP32(esp, edi);
    POP32(esp, esi);
    POP32(esp, ebp);
    POP32(esp, ebx);
    esp = esp + 0x1F4;
    esp += 4; return; /* ret */

}

/**
 * sub_00136FD0
 * Original: 0x00136FD0 - 0x00137060 (144 bytes, 35 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00136FD0(void)
{
    int _flags = 0; /* fallback flag var */
    float xmm0, xmm1, xmm2, xmm3;

loc_00136FD0: ;
    PUSH32(esp, ecx);
    eax = MEM32(esp + 0x1C);
    xmm0 = MEMF(eax + 0x78); /* movss */
    xmm0 = xmm0 + MEMF(eax + 0x70); /* addss */
    xmm3 = 0.0f; /* xorps self = zero */
    xmm0 = xmm0 * xmm3; /* mulss */
    xmm0 = xmm0 + MEMF(eax + 0x74); /* addss */
    /* comiss xmm0, MEMF(0x648EB0) - sets EFLAGS */
    if ((xmm0 <= MEMF(0x648EB0))) goto loc_00137059; /* jbe: below or equal (unsigned <=) */

loc_00136FF4: ;
    ecx = MEM32(esp + 8);
    eax = ecx + 0x78;
    MEM32(esp + 0x1C) = eax;
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
    xmm1 = sqrtf(xmm1); /* sqrtss */
    MEMF(esp) = xmm1; /* movss */
    xmm0 = MEMF(0x648CDC); /* movss */
    /* comiss xmm0, MEMF(esp) - sets EFLAGS */
    if ((xmm0 <= MEMF(esp))) goto loc_00137059; /* jbe: below or equal (unsigned <=) */

loc_00137039: ;
    MEMF(eax) = xmm3; /* movss */
    MEMF(eax + 4) = xmm3; /* movss */
    MEMF(eax + 8) = xmm3; /* movss */
    MEMF(ecx + 0x90) = xmm3; /* movss */
    MEM32(ecx + 0xAC) = 0;

loc_00137059: ;
    eax = 1;
    POP32(esp, ecx);
    esp += 4; return; /* ret */

}

/**
 * sub_00137060
 * Original: 0x00137060 - 0x00137181 (289 bytes, 97 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00137060(void)
{
    uint32_t ebp;
    int _flags = 0; /* fallback flag var */
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_00137060: ;
    SET_LO8(eax, MEM8(0x7819D5));
    (void)0; /* test LO8(eax), LO8(eax) - flags set for next jcc */
    PUSH32(esp, esi);
    esi = MEM32(esp + 0xC);
    PUSH32(esp, edi);
    edi = MEM32(esp + 0xC);
    if (TEST_NZ(LO8(eax), LO8(eax))) goto loc_001370BF; /* jne: not equal / not zero */

loc_00137073: ;
    if (TEST_Z(edi, edi)) goto loc_001370BF; /* je: equal / zero */

loc_00137077: ;
    eax = edi;
    PUSH32(esp, 0); sub_0032FD50(); /* call 0x0032FD50 */

loc_0013707E: ;
    if (TEST_Z(eax, eax)) goto loc_0013708A; /* je: equal / zero */

loc_00137082: ;
    eax = MEM32(eax + 0x1C);
    if (CMP_EQ(MEM32(eax), 0x47)) goto loc_001370A1; /* je: equal / zero */

loc_0013708A: ;
    ecx = MEM32(0x847024);
    edx = MEM32(ecx + 0x40);
    PUSH32(esp, 0xBF800000u);
    PUSH32(esp, esi);
    PUSH32(esp, 0xC98);
    PUSH32(esp, edx);
    goto loc_001370B5;

loc_001370A1: ;
    eax = MEM32(0x847024);
    ecx = MEM32(eax + 0x40);
    PUSH32(esp, 0xBF800000u);
    PUSH32(esp, esi);
    PUSH32(esp, 0xDC4);
    PUSH32(esp, ecx);

loc_001370B5: ;
    eax = 2;
    PUSH32(esp, 0); sub_00024FA0(); /* call 0x00024FA0 */

loc_001370BF: ;
    eax = MEM32(esi + 0x68);
    if (CMP_A(eax, 0x46)) goto loc_001370E3; /* ja: above (unsigned >) */

loc_001370C7: ;
    if (CMP_EQ(eax, 0x46)) goto loc_001370FF; /* je: equal / zero */

loc_001370C9: ;
    eax = eax - 0xF;
    if (CMP_A(eax, 0x2D)) goto loc_0013717E; /* ja: above (unsigned >) */

loc_001370D5: ;
    edx = ZX8(MEM8(eax + 0x137190));
    { uint32_t _jt = MEM32(edx * 4 + 0x137184); /* switch: 3 entries, 3 targets */
    if (_jt == 0x001370FFu) goto loc_001370FF;
    if (_jt == 0x00137171u) goto loc_00137171;
    if (_jt == 0x0013717Eu) goto loc_0013717E;
    g_seh_ebp = ebp; RECOMP_ITAIL(_jt); return; }

loc_001370E3: ;
    if (CMP_A(eax, 0x93)) goto loc_0013710F; /* ja: above (unsigned >) */

loc_001370EA: ;
    if (CMP_EQ(eax, 0x93)) goto loc_00137171; /* je: equal / zero */

loc_001370F0: ;
    eax = eax - 0x4C;
    if ((eax == 0)) goto loc_001370FF; /* je: equal / zero */

loc_001370F5: ;
    eax = eax - 6;
    if ((eax == 0)) goto loc_001370FF; /* je: equal / zero */

loc_001370FA: ;
    eax = eax - 0x3A;
    if ((eax != 0)) goto loc_0013717E; /* jne: not equal / not zero */

loc_001370FF: ;
    PUSH32(esp, 1);
    eax = esi;
    PUSH32(esp, edi);
    PUSH32(esp, 0); sub_001318F0(); /* call 0x001318F0 */

loc_00137109: ;
    esp = esp + 8;
    POP32(esp, edi);
    POP32(esp, esi);
    esp += 4; return; /* ret */

loc_0013710F: ;
    eax = eax - 0x194;
    if ((eax == 0)) goto loc_00137129; /* je: equal / zero */

loc_00137116: ;
    eax--;
    if ((eax != 0)) goto loc_0013717E; /* jne: not equal / not zero */

loc_00137119: ;
    PUSH32(esp, 0);
    eax = esi;
    PUSH32(esp, edi);
    PUSH32(esp, 0); sub_001318F0(); /* call 0x001318F0 */

loc_00137123: ;
    esp = esp + 8;
    POP32(esp, edi);
    POP32(esp, esi);
    esp += 4; return; /* ret */

loc_00137129: ;
    if (CMP_NE(MEM16(esi + 0x3AE), 0)) goto loc_0013716D; /* jne: not equal / not zero */

loc_00137133: ;
    PUSH32(esp, 0x5F4180);
    eax = esi;
    PUSH32(esp, 0); sub_002F7BE0(); /* call 0x002F7BE0 */

loc_0013713F: ;
    PUSH32(esp, 0x5F4174);
    eax = esi;
    PUSH32(esp, 0); sub_002F7B90(); /* call 0x002F7B90 */

loc_0013714B: ;
    PUSH32(esp, 0x125);
    eax = esi;
    PUSH32(esp, 0); sub_00135AC0(); /* call 0x00135AC0 */

loc_00137157: ;
    PUSH32(esp, 0xFFFFFFFFu);
    PUSH32(esp, 0xFF);
    PUSH32(esp, esi);
    PUSH32(esp, 0); sub_000B3CF0(); /* call 0x000B3CF0 */

loc_00137164: ;
    PUSH32(esp, esi);
    PUSH32(esp, 0); sub_000B6FA0(); /* call 0x000B6FA0 */

loc_0013716A: ;
    esp = esp + 0x1C;

loc_0013716D: ;
    if (TEST_Z(edi, edi)) goto loc_0013717E; /* je: equal / zero */

loc_00137171: ;
    PUSH32(esp, 0);
    eax = esi;
    PUSH32(esp, edi);
    PUSH32(esp, 0); sub_001318F0(); /* call 0x001318F0 */

loc_0013717B: ;
    esp = esp + 8;

loc_0013717E: ;
    POP32(esp, edi);
    POP32(esp, esi);
    esp += 4; return; /* ret */

}

/**
 * sub_00137520
 * Original: 0x00137520 - 0x0013752C (12 bytes, 5 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00137520(void)
{

loc_00137520: ;
    PUSH32(esp, esi);
    esi = MEM32(esp + 0xC);
    PUSH32(esp, 0); sub_000AD960(); /* call 0x000AD960 */

loc_0013752A: ;
    POP32(esp, esi);
    esp += 4; return; /* ret */

}

/**
 * sub_00137530
 * Original: 0x00137530 - 0x001375B4 (132 bytes, 34 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00137530(void)
{
    int _flags = 0; /* fallback flag var */

loc_00137530: ;
    esp = esp - 0x200;
    SET_LO8(eax, MEM8(0x84B680));
    (void)0; /* test LO8(eax), LO8(eax) - flags set for next jcc */
    MEM8(esp) = 0;
    MEM8(esp + 0xFF) = 0;
    if (TEST_Z(LO8(eax), LO8(eax))) { sub_001375B4(); return; } /* je: equal / zero */

loc_0013754B: ;
    PUSH32(esp, 0xFF);
    PUSH32(esp, 0x84B680);
    eax = esp + 8;
    PUSH32(esp, eax);
    PUSH32(esp, 0); sub_0046EEC0(); /* call 0x0046EEC0 */

loc_0013755F: ;
    SET_LO8(eax, MEM8(esp + 0xC));
    esp = esp + 0xC;
    if (TEST_Z(LO8(eax), LO8(eax))) goto loc_00137594; /* je: equal / zero */

loc_0013756A: ;
    ecx = 0x75DE2C;
    PUSH32(esp, 0); sub_0046EA5A(); /* call 0x0046EA5A */

loc_00137574: ;
    PUSH32(esp, eax);
    edx = esp + 4;
    PUSH32(esp, edx);
    PUSH32(esp, 0x5AC800);
    eax = esp + 0x10C;
    PUSH32(esp, 0x100);
    PUSH32(esp, eax);
    PUSH32(esp, 0); sub_0046E9AD(); /* call 0x0046E9AD */

loc_00137591: ;
    esp = esp + 0x14;

loc_00137594: ;
    ecx = MEM32(esp + 0x204);
    PUSH32(esp, 0xFFFFFFFFu);
    PUSH32(esp, 0x461);
    PUSH32(esp, 0x606A34);
    PUSH32(esp, ecx);
    PUSH32(esp, 0); sub_002AF0E0(); /* call 0x002AF0E0 */

loc_001375AD: ;
    esp = esp + 0x210;
    esp += 4; return; /* ret */

}

/**
 * sub_001376A0
 * Original: 0x001376A0 - 0x00137712 (114 bytes, 47 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_001376A0(void)
{
    uint32_t ebp;
    int _flags = 0; /* fallback flag var */
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_001376A0: ;
    PUSH32(esp, ebx);
    SET_LO8(ebx, MEM8(esp + 8));
    PUSH32(esp, ebp);
    ebp = 0; /* xor self */
    (void)0; /* cmp edi, ebp - flags set for next jcc */
    PUSH32(esp, esi);
    esi = eax;
    if (CMP_NE(edi, ebp)) goto loc_001376C7; /* jne: not equal / not zero */

loc_001376AF: ;
    if (TEST_Z(LO8(ebx), LO8(ebx))) goto loc_0013770C; /* je: equal / zero */

loc_001376B3: ;
    eax = ZX8(LO8(ebx));
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, esi);
    PUSH32(esp, 0); RECOMP_ICALL_SAFE(MEM32(eax * 4 + 0x6B6A04), _icall_esp); /* indirect call */
    }

loc_001376BE: ;
    esp = esp + 4;
    POP32(esp, esi);
    POP32(esp, ebp);
    eax = 0; /* xor self */
    POP32(esp, ebx);
    esp += 4; return; /* ret */

loc_001376C7: ;
    PUSH32(esp, 0xFF);
    PUSH32(esp, 0x26);
    eax = 0x3C;
    PUSH32(esp, 0); sub_000D9C60(); /* call 0x000D9C60 */

loc_001376D8: ;
    esp = esp + 8;
    if (CMP_EQ(eax, ebp)) goto loc_001376FA; /* je: equal / zero */

loc_001376DF: ;
    MEM32(eax + 0x2C) = esi;
    MEM8(eax + 0x38) = LO8(ebx);
    MEM32(eax + 0x30) = ebp;
    MEM32(eax + 0x34) = ebp;
    ecx = MEM32(edi + 0x2C);
    (void)0; /* cmp ecx, ebp - flags set for next jcc */
    MEM32(eax + 0x30) = ecx;
    if (CMP_EQ(ecx, ebp)) { sub_00137712(); return; } /* je: equal / zero */

loc_001376F5: ;
    MEM32(ecx + 0x34) = eax;
    g_seh_ebp = ebp; sub_00137715(); return; /* tail jmp 0x00137715 */

loc_001376FA: ;
    if (TEST_Z(LO8(ebx), LO8(ebx))) goto loc_0013770C; /* je: equal / zero */

loc_001376FE: ;
    ecx = ZX8(LO8(ebx));
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, esi);
    PUSH32(esp, 0); RECOMP_ICALL_SAFE(MEM32(ecx * 4 + 0x6B6A04), _icall_esp); /* indirect call */
    }

loc_00137709: ;
    esp = esp + 4;

loc_0013770C: ;
    POP32(esp, esi);
    POP32(esp, ebp);
    eax = 0; /* xor self */
    POP32(esp, ebx);
    esp += 4; return; /* ret */

}

/**
 * sub_00137780
 * Original: 0x00137780 - 0x001377C1 (65 bytes, 23 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00137780(void)
{
    int _flags = 0; /* fallback flag var */

loc_00137780: ;
    if (TEST_Z(edi, edi)) goto loc_001377C0; /* je: equal / zero */

loc_00137784: ;
    eax = MEM32(edi + 0x2C);
    if (TEST_Z(eax, eax)) goto loc_001377B2; /* je: equal / zero */

loc_0013778B: ;
    PUSH32(esp, esi);
    /* nop */

loc_00137790: ;
    SET_LO8(ecx, MEM8(eax + 0x38));
    (void)0; /* test LO8(ecx), LO8(ecx) - flags set for next jcc */
    esi = MEM32(eax + 0x30);
    if (TEST_Z(LO8(ecx), LO8(ecx))) goto loc_001377AB; /* je: equal / zero */

loc_0013779A: ;
    edx = MEM32(eax + 0x2C);
    ecx = ZX8(LO8(ecx));
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, edx);
    PUSH32(esp, 0); RECOMP_ICALL_SAFE(MEM32(ecx * 4 + 0x6B6A04), _icall_esp); /* indirect call */
    }

loc_001377A8: ;
    esp = esp + 4;

loc_001377AB: ;
    (void)0; /* test esi, esi - flags set for next jcc */
    eax = esi;
    if (TEST_NZ(esi, esi)) goto loc_00137790; /* jne: not equal / not zero */

loc_001377B1: ;
    POP32(esp, esi);

loc_001377B2: ;
    MEM32(edi + 0x30) = 0;
    MEM32(edi + 0x2C) = 0;

loc_001377C0: ;
    esp += 4; return; /* ret */

}

/**
 * sub_001377D0
 * Original: 0x001377D0 - 0x00137CAF (1247 bytes, 304 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_001377D0(void)
{
    uint32_t ebp;
    int _flags = 0; /* fallback flag var */
    int _fpu_cmp = 0; /* FPU compare result: -1/0/1 */
    float xmm0, xmm1, xmm2, xmm5, xmm6;
    double _fp_stack[8];
    int _fp_top = 0;
    #define fp_push(v) (_fp_stack[--_fp_top & 7] = (v))
    #define fp_pop() (_fp_top++)
    #define fp_popp() (fp_pop())
    #define fp_top() _fp_stack[_fp_top & 7]
    #define fp_st1() _fp_stack[(_fp_top + 1) & 7]

loc_001377D0: ;
    PUSH32(esp, ebp);
    ebp = esp;
    esp = esp & 0xFFFFFFF0u;
    esp = esp - 0xF4;
    PUSH32(esp, ebx);
    PUSH32(esp, esi);
    esi = ecx;
    (void)0; /* test esi, esi - flags set for next jcc */
    PUSH32(esp, edi);
    SET_LO8(ebx, LO8(eax));
    if (TEST_Z(esi, esi)) goto loc_00137CA6; /* je: equal / zero */

loc_001377EB: ;
    if (CMP_A(LO8(ebx), 1)) goto loc_00137CA6; /* ja: above (unsigned >) */

loc_001377F4: ;
    eax = MEM32(esi + 0x3C8);
    if (TEST_Z(eax, eax)) goto loc_00137CA6; /* je: equal / zero */

loc_00137802: ;
    edx = esp + 0x80;
    PUSH32(esp, edx);
    eax = esp + 0x60;
    ecx = esp + 0x18;
    PUSH32(esp, 0x5F4294);
    MEM32(esp + 0x30) = 0x596D98;
    MEM32(esp + 0x34) = 0x596DA4;
    MEM32(esp + 0x50) = eax;
    MEM32(esp + 0x54) = ecx;
    PUSH32(esp, 0); sub_002F7810(); /* call 0x002F7810 */

loc_00137834: ;
    eax = esp + 0x88;
    PUSH32(esp, eax);
    ecx = esp + 0x54;
    PUSH32(esp, ecx);
    eax = 2;
    ecx = esp + 0x38;
    PUSH32(esp, 0); sub_00111C60(); /* call 0x00111C60 */

loc_0013784F: ;
    fp_push(MEMF(esp + 0x24)); /* fld float */
    fp_st1() -= fp_top(); fp_pop(); /* fsub */
    edi = ZX8(LO8(ebx));
    ecx = MEM32(edi * 4 + 0x6B6A10);
    ebx = edi + edi * 2;
    MEMF(esp + 0x24) = (float)fp_top(); fp_popp(); /* fstp */
    ebx = ebx << 2;
    fp_push(MEMF(esp + 0x28)); /* fld float */
    eax = ebx + 0x596DB0;
    fp_st1() -= fp_top(); fp_pop(); /* fsub */
    MEM32(esp + 0x58) = eax;
    MEM32(esp + 0x4C) = eax;
    eax = esp + 0xD0;
    MEMF(esp + 0x28) = (float)fp_top(); fp_popp(); /* fstp */
    PUSH32(esp, eax);
    fp_push(MEMF(esp + 0x30)); /* fld float */
    edx = esp + 0x64;
    fp_st1() -= fp_top(); fp_pop(); /* fsub */
    PUSH32(esp, ecx);
    MEM32(esp + 0x40) = edx;
    MEMF(esp + 0x34) = (float)fp_top(); fp_popp(); /* fstp */
    PUSH32(esp, 0); sub_002F7810(); /* call 0x002F7810 */

loc_001378A7: ;
    edx = esp + 0xD8;
    PUSH32(esp, edx);
    eax = esp + 0x44;
    PUSH32(esp, eax);
    eax = 1;
    ecx = esp + 0x5C;
    PUSH32(esp, 0); sub_00111C60(); /* call 0x00111C60 */

loc_001378C2: ;
    fp_push(MEMF(esp + 0x3C)); /* fld float */
    fp_st1() *= fp_top(); fp_pop(); /* fmul */
    esp = esp + 0x20;
    fp_push(MEMF(esp + 0x18)); /* fld float */
    fp_st1() *= fp_top(); fp_pop(); /* fmul */
    fp_st1() += fp_top(); fp_pop(); /* faddp */
    fp_push(MEMF(esp + 0x14)); /* fld float */
    fp_st1() *= fp_top(); fp_pop(); /* fmul */
    fp_st1() += fp_top(); fp_pop(); /* faddp */
    fp_top() = sqrt(fp_top()); /* fsqrt */
    MEMF(esp + 0x20) = (float)fp_top(); fp_popp(); /* fstp */
    fp_push(MEMF(0x648CF8)); /* fld float */
    fp_push(MEMF(esp + 0x20)); /* fld float */
    _fpu_cmp = (fp_top() < fp_st1()) ? -1 : (fp_top() > fp_st1()) ? 1 : 0; fp_pop(); /* fucompi */
    /* fstp st(0) */
    /* lahf - load AH from flags (used in FPU compare idiom) */
    if (1 /* jnp after test - parity */) goto loc_00137933; /* jnp: not parity */

loc_001378FB: ;
    xmm0 = MEMF(0x648D14); /* movss */
    xmm0 = xmm0 / MEMF(esp + 0x20); /* divss */
    xmm1 = xmm0; /* movaps */
    xmm1 = xmm1 * MEMF(esp + 0x14); /* mulss */
    MEMF(esp + 0x14) = xmm1; /* movss */
    xmm1 = xmm0; /* movaps */
    xmm1 = xmm1 * MEMF(esp + 0x18); /* mulss */
    xmm0 = xmm0 * MEMF(esp + 0x1C); /* mulss */
    MEMF(esp + 0x18) = xmm1; /* movss */
    MEMF(esp + 0x1C) = xmm0; /* movss */

loc_00137933: ;
    PUSH32(esp, 0);
    PUSH32(esp, 0);
    PUSH32(esp, 1);
    PUSH32(esp, 0);
    PUSH32(esp, 0);
    PUSH32(esp, 0);
    PUSH32(esp, 0);
    ecx = esp + 0x60;
    PUSH32(esp, ecx);
    edx = esp + 0x60;
    PUSH32(esp, edx);
    eax = esp + 0x60;
    PUSH32(esp, eax);
    ecx = esp + 0x84;
    PUSH32(esp, 0);
    PUSH32(esp, ecx);
    ecx = esp + 0x44;
    MEM32(0x780AB0) = 0x5F4248;
    MEM32(0x6C0210) = 0xD8;
    MEM8(0x84B538) = 1;
    MEM32(0x74FA2C) = 0x4100000;
    PUSH32(esp, 0); sub_002A0580(); /* call 0x002A0580 */

loc_00137988: ;
    xmm6 = MEMF(0x648D14); /* movss */
    esp = esp + 0x30;
    (void)0; /* test eax, eax - flags set for next jcc */
    MEM8(0x84B538) = 0;
    MEM32(0x6C0210) = 0xFFFFFFFFu;
    if (TEST_Z(eax, eax)) goto loc_00137A4F; /* je: equal / zero */

loc_001379AC: ;
    xmm5 = MEMF(0x648D20); /* movss */
    eax = 0; /* xor self */
    MEM32(0x780AB0) = eax;
    MEM32(0x74FA2C) = eax;
    if (CMP_EQ(MEM32(0x7FA1F8), 0xE)) goto loc_001379CC; /* je: equal / zero */

loc_001379C9: ;
    xmm5 = xmm6; /* movaps */

loc_001379CC: ;
    edx = esp + 0x2C;
    PUSH32(esp, edx);
    eax = esp + 0x2C;
    PUSH32(esp, eax);
    PUSH32(esp, 0); sub_003E1D70(); /* call 0x003E1D70 */

loc_001379DB: ;
    xmm2 = xmm0; /* movaps */
    xmm2 = xmm2 * xmm5; /* mulss */
    xmm2 = xmm2 * MEMF(0x6493A8); /* mulss */
    PUSH32(esp, 0); sub_003E2480(); /* call 0x003E2480 */

loc_001379EF: ;
    eax = eax & 0xFF;
    PUSH32(esp, eax);
    PUSH32(esp, 0); sub_00110650(); /* call 0x00110650 */

loc_001379FA: ;
    xmm0 = MEMF(esp + 0x48); /* movss */
    xmm0 = xmm0 + MEMF(esp + 0x34); /* addss */
    xmm0 = xmm0 - MEMF(esp + 0x5C); /* subss */
    xmm1 = MEMF(esp + 0x50); /* movss */
    xmm1 = xmm1 + MEMF(esp + 0x38); /* addss */
    xmm1 = xmm1 - MEMF(esp + 0x64); /* subss */
    MEMF(esp + 0x80) = xmm0; /* movss */
    xmm0 = MEMF(esp + 0x4C); /* movss */
    xmm0 = xmm0 - MEMF(esp + 0x60); /* subss */
    ecx = esp + 0x80;
    esp = esp + 0xC;
    MEMF(esp + 0x78) = xmm0; /* movss */
    MEMF(esp + 0x7C) = xmm1; /* movss */
    MEM32(esp + 0x20) = ecx;
    goto loc_00137A63;

loc_00137A4F: ;
    eax = 0; /* xor self */
    edx = esp + 0x14;
    MEM32(0x780AB0) = eax;
    MEM32(0x74FA2C) = eax;
    MEM32(esp + 0x20) = edx;

loc_00137A63: ;
    (void)0; /* cmp MEM32(0x7FA1F8), 0xE - flags set for next jcc */
    xmm5 = xmm6; /* movaps */
    MEMF(esp + 0x28) = xmm6; /* movss */
    if (CMP_NE(MEM32(0x7FA1F8), 0xE)) goto loc_00137AA2; /* jne: not equal / not zero */

loc_00137A75: ;
    xmm0 = MEMF(0x648D40); /* movss */
    xmm5 = MEMF(0x648D18); /* movss */
    MEMF(esp + 0x28) = xmm0; /* movss */
    PUSH32(esp, 0); sub_003E1D70(); /* call 0x003E1D70 */

loc_00137A90: ;
    xmm0 = xmm0 * MEMF(0x649F58); /* mulss */
    xmm0 = xmm0 + MEMF(0x648F40); /* addss */
    goto loc_00137AB7;

loc_00137AA2: ;
    PUSH32(esp, 0); sub_003E1D70(); /* call 0x003E1D70 */

loc_00137AA7: ;
    xmm0 = xmm0 * MEMF(0x649030); /* mulss */
    xmm0 = xmm0 + MEMF(0x648E3C); /* addss */

loc_00137AB7: ;
    eax = MEM32(esp + 0x20);
    ecx = MEM32(eax);
    edx = MEM32(eax + 4);
    eax = MEM32(eax + 8);
    MEM32(esp + 0x38) = eax;
    fp_push(MEMF(esp + 0x38)); /* fld float */
    fp_st1() *= fp_top(); fp_pop(); /* fmul */
    MEM32(esp + 0x34) = edx;
    fp_push(MEMF(esp + 0x34)); /* fld float */
    MEM32(esp + 0x30) = ecx;
    fp_st1() *= fp_top(); fp_pop(); /* fmul */
    MEMF(esp + 0x3C) = xmm0; /* movss */
    xmm0 = 0.0f; /* xorps self = zero */
    fp_st1() += fp_top(); fp_pop(); /* faddp */
    fp_push(MEMF(esp + 0x30)); /* fld float */
    MEMF(esp + 0x70) = xmm0; /* movss */
    fp_st1() *= fp_top(); fp_pop(); /* fmul */
    MEMF(esp + 0x6C) = xmm0; /* movss */
    MEMF(esp + 0x68) = xmm0; /* movss */
    fp_st1() += fp_top(); fp_pop(); /* faddp */
    fp_top() = sqrt(fp_top()); /* fsqrt */
    MEMF(esp + 0x20) = (float)fp_top(); fp_popp(); /* fstp */
    fp_push(MEMF(0x648CF8)); /* fld float */
    fp_push(MEMF(esp + 0x20)); /* fld float */
    _fpu_cmp = (fp_top() < fp_st1()) ? -1 : (fp_top() > fp_st1()) ? 1 : 0; fp_pop(); /* fcompi */
    /* fstp st(0) */
    if ((_fpu_cmp <= 0) /* fcompi */) goto loc_00137B4F; /* jbe: below or equal (unsigned <=) */

loc_00137B1C: ;
    xmm0 = xmm6; /* movaps */
    xmm0 = xmm0 / MEMF(esp + 0x20); /* divss */
    xmm1 = xmm0; /* movaps */
    xmm1 = xmm1 * MEMF(esp + 0x30); /* mulss */
    MEMF(esp + 0x30) = xmm1; /* movss */
    xmm1 = xmm0; /* movaps */
    xmm1 = xmm1 * MEMF(esp + 0x34); /* mulss */
    xmm0 = xmm0 * MEMF(esp + 0x38); /* mulss */
    MEMF(esp + 0x34) = xmm1; /* movss */
    MEMF(esp + 0x38) = xmm0; /* movss */

loc_00137B4F: ;
    ecx = MEM32(ebp + 0xC);
    eax = MEM32(ebp + 8);
    xmm5 = xmm5 * MEMF(0x64941C); /* mulss */
    PUSH32(esp, 0);
    PUSH32(esp, 0x5F336C);
    PUSH32(esp, 0x36);
    PUSH32(esp, ecx);
    edx = esp + 0x78;
    PUSH32(esp, edx);
    PUSH32(esp, eax);
    PUSH32(esp, 0xFFFFFFFFu);
    PUSH32(esp, 0x1A);
    PUSH32(esp, 3);
    PUSH32(esp, 0x40400000);
    PUSH32(esp, ecx);
    ecx = esp + 0x5C;
    MEMF(esp) = xmm5; /* movss */
    PUSH32(esp, ecx);
    eax = esp + 0x80;
    PUSH32(esp, 0); sub_000BF3B0(); /* call 0x000BF3B0 */

loc_00137B8F: ;
    edx = MEM32(ebp + 8);
    eax = MEM32(esp + 0x6C);
    PUSH32(esp, edx);
    PUSH32(esp, 0);
    PUSH32(esp, 0x7F);
    PUSH32(esp, 0x40000000);
    PUSH32(esp, 0x40000000);
    PUSH32(esp, 0x40000000);
    PUSH32(esp, eax);
    ecx = esp + 0x6C;
    PUSH32(esp, ecx);
    SET_LO8(edx, 0); /* xor self */
    ecx = esp + 0xA0;
    MEM8(esp + 0x70) = 3;
    MEM8(esp + 0x71) = 0x18;
    MEM16(esp + 0x72) = 3;
    MEM8(esp + 0x76) = 0;
    PUSH32(esp, 0); sub_0011E790(); /* call 0x0011E790 */

loc_00137BD4: ;
    esp = esp + 0x50;
    PUSH32(esp, 0); sub_003E1D70(); /* call 0x003E1D70 */

loc_00137BDC: ;
    xmm0 = xmm0 * MEMF(0x64B3BC); /* mulss */
    xmm0 = xmm0 + MEMF(0x64B3B8); /* addss */
    MEMF(esp + 0x40) = xmm0; /* movss */
    PUSH32(esp, 0); sub_003E1D70(); /* call 0x003E1D70 */

loc_00137BF7: ;
    xmm0 = xmm0 * MEMF(0x64A590); /* mulss */
    xmm0 = xmm0 + MEMF(0x64954C); /* addss */
    MEMF(esp + 0x3C) = xmm0; /* movss */
    PUSH32(esp, 0); sub_003E2480(); /* call 0x003E2480 */

loc_00137C12: ;
    edx = MEM32(ebp + 8);
    PUSH32(esp, edx);
    PUSH32(esp, 0xFFFFFFFFu);
    PUSH32(esp, 0);
    eax = esp + 0x5C;
    PUSH32(esp, 0xFF);
    PUSH32(esp, eax);
    PUSH32(esp, 0); sub_003E1D70(); /* call 0x003E1D70 */

loc_00137C29: ;
    xmm0 = xmm0 * MEMF(0x64B3B4); /* mulss */
    xmm0 = xmm0 + MEMF(0x649834); /* addss */
    xmm0 = xmm0 * MEMF(esp + 0x3C); /* mulss */
    PUSH32(esp, ecx);
    MEMF(esp) = xmm0; /* movss */
    PUSH32(esp, 0xFF);
    PUSH32(esp, 0); sub_003E2480(); /* call 0x003E2480 */

loc_00137C4F: ;
    edx = ((int32_t)eax < 0) ? 0xFFFFFFFF : 0; /* cdq */
    ecx = 6;
    { int64_t _dividend = ((int64_t)(int32_t)edx << 32) | eax;
      eax = (uint32_t)((int32_t)(_dividend / (int32_t)ecx));
      edx = (uint32_t)((int32_t)(_dividend % (int32_t)ecx)); }
    eax = MEM32(edi * 4 + 0x6B6A10);
    ebx = ebx + 0x596DC8;
    edx = edx + ecx;
    PUSH32(esp, edx);
    edx = esp + 0x5C;
    PUSH32(esp, edx);
    PUSH32(esp, eax);
    eax = esi;
    PUSH32(esp, 0); sub_002F77D0(); /* call 0x002F77D0 */

loc_00137C74: ;
    ecx = MEM32(esp + 0x70);
    esp = esp + 4;
    PUSH32(esp, eax);
    PUSH32(esp, esi);
    eax = ebx;
    PUSH32(esp, 0); sub_00185E10(); /* call 0x00185E10 */

loc_00137C84: ;
    ecx = MEM32(0x7FA1F8);
    esp = esp + 0x2C;
    if (CMP_NE(ecx, 0xE)) goto loc_00137CA6; /* jne: not equal / not zero */

loc_00137C92: ;
    if (TEST_Z(eax, eax)) goto loc_00137CA6; /* je: equal / zero */

loc_00137C96: ;
    xmm0 = MEMF(0x648D14); /* movss */
    MEMF(eax + 0x80) = xmm0; /* movss */

loc_00137CA6: ;
    POP32(esp, edi);
    POP32(esp, esi);
    eax = 0; /* xor self */
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
 * sub_00137CB0
 * Original: 0x00137CB0 - 0x00137CCB (27 bytes, 9 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00137CB0(void)
{

loc_00137CB0: ;
    PUSH32(esp, edi);
    edi = MEM32(esp + 8);
    PUSH32(esp, 0);
    PUSH32(esp, 0x3F800000);
    PUSH32(esp, 0x3F800000);
    PUSH32(esp, 0); sub_000BD480(); /* call 0x000BD480 */

loc_00137CC6: ;
    esp = esp + 0xC;
    POP32(esp, edi);
    esp += 4; return; /* ret */

}

/**
 * sub_00137CD0
 * Original: 0x00137CD0 - 0x00137F11 (577 bytes, 176 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00137CD0(void)
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

loc_00137CD0: ;
    PUSH32(esp, esi);
    esi = MEM32(esp + 8);
    eax = ZX8(MEM8(esi + 0x36));
    if (CMP_A(eax, 3)) goto loc_00137F0F; /* ja: above (unsigned >) */

loc_00137CE2: ;
    PUSH32(esp, edi);
    { uint32_t _jt = MEM32(eax * 4 + 0x137F14); /* switch: 4 entries, 4 targets */
    if (_jt == 0x00137CEAu) goto loc_00137CEA;
    if (_jt == 0x00137E1Cu) goto loc_00137E1C;
    if (_jt == 0x00137E55u) goto loc_00137E55;
    if (_jt == 0x00137E99u) goto loc_00137E99;
    g_seh_ebp = ebp; RECOMP_ITAIL(_jt); return; }

loc_00137CEA: ;
    SET_LO8(eax, MEM8(esi + 0x38));
    if (TEST_NZ(LO8(eax), LO8(eax))) goto loc_00137DF4; /* jne: not equal / not zero */

loc_00137CF5: ;
    eax = MEM32(esi + 0x2C);
    eax = MEM32(eax + 0x3C4);
    edx = 0; /* xor self */
    PUSH32(esp, 0); sub_00036EF0(); /* call 0x00036EF0 */

loc_00137D05: ;
    /* comiss xmm0, MEMF(0x649C4C) - sets EFLAGS */
    if ((xmm0 < MEMF(0x649C4C))) goto loc_00137F0E; /* jb: below (unsigned <) */

loc_00137D12: ;
    eax = MEM32(0x847024);
    edi = MEM32(esi + 0x2C);
    PUSH32(esp, ebp);
    ebp = MEM32(esi + 0x30);
    PUSH32(esp, 0);
    PUSH32(esp, 0);
    PUSH32(esp, 0xFFFFFFFFu);
    PUSH32(esp, 0xFFFFFFFFu);
    PUSH32(esp, 0);
    PUSH32(esp, 0);
    MEM8(esi + 0x36) = 1;
    ecx = MEM32(eax + 0x40);
    PUSH32(esp, 4);
    PUSH32(esp, ecx);
    edx = edx | 0xFFFFFFFFu;
    eax = eax | 0xFFFFFFFFu;
    ecx = 0x5B2;
    MEM8(0x7FA204) = 1;
    PUSH32(esp, 0); sub_00022D90(); /* call 0x00022D90 */

loc_00137D4B: ;
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
    ecx = 0x5B2;
    PUSH32(esp, 0); sub_00022D90(); /* call 0x00022D90 */

loc_00137D73: ;
    ecx = MEM32(0x847024);
    edx = MEM32(ecx + 0x40);
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
    ecx = 0x5B2;
    PUSH32(esp, 0); sub_00022D90(); /* call 0x00022D90 */

loc_00137D9B: ;
    eax = MEM32(0x847024);
    ecx = MEM32(eax + 0x40);
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
    ecx = 0x5B2;
    PUSH32(esp, 0); sub_00022D90(); /* call 0x00022D90 */

loc_00137DC2: ;
    eax = ZX16(MEM16(ebp + 0x60));
    ecx = MEM32(edi + 0x564);
    MEM8(0x774A6A) = 0xD2;
    MEM8(0x774A69) = 2;
    PUSH32(esp, 0); sub_0003E350(); /* call 0x0003E350 */

loc_00137DDF: ;
    edx = MEM32(edi + 0x564);
    xmm0 = 0.0f; /* xorps self = zero */
    POP32(esp, ebp);
    POP32(esp, edi);
    MEMF(edx + 0x50C) = xmm0; /* movss */
    POP32(esp, esi);
    esp += 4; return; /* ret */

loc_00137DF4: ;
    if (CMP_NE(LO8(eax), 1)) goto loc_00137F0E; /* jne: not equal / not zero */

loc_00137DFC: ;
    ecx = MEM32(0x7FA20C);
    eax = 0; /* xor self */
    SET_LO16(eax, MEM16(esi + 0x34));
    edx = ZX16(LO16(eax));
    if (CMP_LE(edx, ecx)) goto loc_00137D12; /* jle: less or equal (signed <=) */

loc_00137E13: ;
    eax = eax - ecx;
    POP32(esp, edi);
    MEM16(esi + 0x34) = LO16(eax);
    POP32(esp, esi);
    esp += 4; return; /* ret */

loc_00137E1C: ;
    eax = MEM32(0x7FA208);
    ecx = ZX8(MEM8(esi + 0x37));
    eax = eax + eax * 4;
    eax = ecx + eax * 2;
    if (CMP_L(eax, 0xFF)) goto loc_00137E4F; /* jl: less (signed <) */

loc_00137E32: ;
    fp_push(MEMF(0x7F9F5C)); /* fld float */
    MEM8(esi + 0x37) = 0xFF;
    MEM8(esi + 0x36) = 2;
    PUSH32(esp, 0); sub_00471288(); /* call 0x00471288 */

loc_00137E45: ;
    POP32(esp, edi);
    edx = eax + eax * 2;
    MEM16(esi + 0x34) = LO16(edx);
    POP32(esp, esi);
    esp += 4; return; /* ret */

loc_00137E4F: ;
    POP32(esp, edi);
    MEM8(esi + 0x37) = LO8(eax);
    POP32(esp, esi);
    esp += 4; return; /* ret */

loc_00137E55: ;
    ecx = MEM32(0x7FA208);
    eax = 0; /* xor self */
    SET_LO16(eax, MEM16(esi + 0x34));
    edx = ZX16(LO16(eax));
    if (CMP_G(edx, ecx)) goto loc_00137E13; /* jg: greater (signed >) */

loc_00137E68: ;
    edi = MEM32(esi + 0x2C);
    eax = ZX16(MEM16(edi + 0x60));
    ecx = MEM32(edi + 0x564);
    MEM8(0x7FA204) = 0;
    PUSH32(esp, 0); sub_0003E350(); /* call 0x0003E350 */

loc_00137E81: ;
    eax = MEM32(edi + 0x564);
    xmm0 = 0.0f; /* xorps self = zero */
    MEMF(eax + 0x50C) = xmm0; /* movss */
    POP32(esp, edi);
    MEM8(esi + 0x36) = 3;
    POP32(esp, esi);
    esp += 4; return; /* ret */

loc_00137E99: ;
    eax = MEM32(0x7FA208);
    ecx = eax + eax * 4;
    ecx = ecx << 1;
    edx = ecx;
    ecx = ZX8(MEM8(esi + 0x37));
    ecx = ecx - edx;
    edi = 0; /* xor self */
    if (CMP_G(ecx, edi)) goto loc_00137ED5; /* jg: greater (signed >) */

loc_00137EB1: ;
    PUSH32(esp, 0); sub_000DADD0(); /* call 0x000DADD0 */

loc_00137EB6: ;
    (void)0; /* cmp MEM32(0x8493E0), edi - flags set for next jcc */
    MEM8(0x774A6A) = 0;
    MEM8(0x774A69) = 0;
    if (CMP_EQ(MEM32(0x8493E0), edi)) goto loc_00137F0E; /* je: equal / zero */

loc_00137ECC: ;
    MEM32(0x8493E0) = edi;
    POP32(esp, edi);
    POP32(esp, esi);
    esp += 4; return; /* ret */

loc_00137ED5: ;
    eax = ecx;
    eax = (uint32_t)((int32_t)eax * (int32_t)0xD2);
    eax = (uint32_t)((int32_t)eax >> 8);
    (void)0; /* cmp eax, edi - flags set for next jcc */
    MEM8(0x774A6A) = LO8(eax);
    if (CMP_EQ(eax, edi)) goto loc_00137EF6; /* je: equal / zero */

loc_00137EE9: ;
    POP32(esp, edi);
    MEM8(esi + 0x37) = LO8(ecx);
    MEM8(0x774A69) = 2;
    POP32(esp, esi);
    esp += 4; return; /* ret */

loc_00137EF6: ;
    (void)0; /* cmp MEM32(0x8493E0), edi - flags set for next jcc */
    MEM8(0x774A69) = 0;
    if (CMP_EQ(MEM32(0x8493E0), edi)) goto loc_00137F0B; /* je: equal / zero */

loc_00137F05: ;
    MEM32(0x8493E0) = edi;

loc_00137F0B: ;
    MEM8(esi + 0x37) = LO8(ecx);

loc_00137F0E: ;
    POP32(esp, edi);

loc_00137F0F: ;
    POP32(esp, esi);
    esp += 4; return; /* ret */

    #undef fp_push
    #undef fp_pop
    #undef fp_popp
    #undef fp_top
    #undef fp_st1
}

/**
 * sub_00137F60
 * Original: 0x00137F60 - 0x0013840C (1196 bytes, 291 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00137F60(void)
{
    uint32_t ebp;
    int _flags = 0; /* fallback flag var */
    int _cf = 0; /* carry flag */
    float xmm0, xmm1, xmm2, xmm3, xmm4, xmm5, xmm6, xmm7;
    double _fp_stack[8];
    int _fp_top = 0;
    #define fp_push(v) (_fp_stack[--_fp_top & 7] = (v))
    #define fp_pop() (_fp_top++)
    #define fp_popp() (fp_pop())
    #define fp_top() _fp_stack[_fp_top & 7]
    #define fp_st1() _fp_stack[(_fp_top + 1) & 7]

loc_00137F60: ;
    PUSH32(esp, ebp);
    ebp = esp;
    esp = esp & 0xFFFFFFF0u;
    esp = esp - 0x254;
    SET_LO8(edx, MEM8(ebp + 0x14));
    PUSH32(esp, ebx);
    PUSH32(esp, esi);
    esi = ecx;
    SET_LO8(ecx, 0); /* xor self */
    (void)0; /* test LO8(edx), LO8(edx) - flags set for next jcc */
    PUSH32(esp, edi);
    edi = eax;
    if (TEST_Z(LO8(edx), LO8(edx))) goto loc_00137F93; /* je: equal / zero */

loc_00137F7C: ;
    eax = MEM32(ebp + 0x10);
    ebx = MEM32(eax);
    MEM32(esp + 0x10) = ebx;
    ebx = MEM32(eax + 4);
    eax = MEM32(eax + 8);
    MEM32(esp + 0x14) = ebx;
    MEM32(esp + 0x18) = eax;

loc_00137F93: ;
    SET_LO8(eax, MEM8(ebp + 0x2C));
    SET_LO8(ebx, MEM8(ebp + 0x30));
    (void)0; /* test LO8(eax), LO8(eax) - flags set for next jcc */
    SET_LO8(eax, (TEST_NZ(LO8(eax), LO8(eax))) ? 1 : 0); /* setne */
    (void)0; /* test LO8(ebx), LO8(ebx) - flags set for next jcc */
    SET_LO8(ebx, (TEST_Z(LO8(ebx), LO8(ebx))) ? 1 : 0); /* sete */
    SET_LO8(ebx, LO8(ebx) - 1);
    ebx = ebx & 2;
    SET_LO8(eax, LO8(eax) | LO8(ebx));
    SET_LO8(ebx, MEM8(ebp + 0x34));
    (void)0; /* test LO8(ebx), LO8(ebx) - flags set for next jcc */
    SET_LO8(ebx, (TEST_Z(LO8(ebx), LO8(ebx))) ? 1 : 0); /* sete */
    SET_LO8(ebx, LO8(ebx) - 1);
    ebx = ebx & 4;
    SET_LO8(eax, LO8(eax) | LO8(ebx));
    MEM8(esp + 0x20C) = LO8(eax);
    SET_LO8(eax, MEM8(ebp + 0x3C));
    MEM8(esp + 0x24C) = LO8(eax);
    eax = MEM32(ebp + 0xC);
    ebx = 0; /* xor self */
    if (CMP_EQ(eax, ebx)) goto loc_0013804D; /* je: equal / zero */

loc_00137FD3: ;
    eax = MEM32(ebp + 0x10);
    if (CMP_EQ(eax, ebx)) goto loc_0013804D; /* je: equal / zero */

loc_00137FDA: ;
    if (CMP_NE(MEM8(ebp + 0x14), LO8(ebx))) goto loc_001380BC; /* jne: not equal / not zero */

loc_00137FE3: ;
    xmm2 = MEMF(eax + 4); /* movss */
    xmm1 = MEMF(eax + 8); /* movss */
    xmm0 = MEMF(eax); /* movss */
    xmm3 = xmm2; /* movaps */
    xmm3 = xmm3 * xmm2; /* mulss */
    xmm0 = xmm0 * xmm0; /* mulss */
    xmm2 = xmm1; /* movaps */
    xmm0 = xmm0 + xmm3; /* addss */
    xmm2 = xmm2 * xmm1; /* mulss */
    xmm0 = xmm0 + xmm2; /* addss */
    /* ucomiss xmm0, MEMF(0x648CF8) - sets EFLAGS */
    /* lahf - load AH from flags (used in FPU compare idiom) */
    (void)0; /* test HI8(eax), 0x44 - flags set for next jcc */
    MEMF(esp + 0xC) = xmm0; /* movss */
    if (1 /* jnp after test - parity */) goto loc_00138405; /* jnp: not parity */

loc_00138022: ;
    fp_push(MEMF(esp + 0xC)); /* fld float */
    eax = MEM32(ebp + 0x10);
    fp_top() = sqrt(fp_top()); /* fsqrt */
    SET_LO8(edx, 1);
    /* FPU: fdivr dword ptr [0x648d14] */
    /* fld st(0) */
    fp_st1() *= fp_top(); fp_pop(); /* fmul */
    MEMF(esp + 0x10) = (float)fp_top(); fp_popp(); /* fstp */
    /* fld st(0) */
    fp_st1() *= fp_top(); fp_pop(); /* fmul */
    MEMF(esp + 0x14) = (float)fp_top(); fp_popp(); /* fstp */
    fp_st1() *= fp_top(); fp_pop(); /* fmul */
    MEMF(esp + 0x18) = (float)fp_top(); fp_popp(); /* fstp */
    goto loc_001380BC;

loc_0013804D: ;
    eax = MEM32(ebp + 8);
    if (CMP_EQ(eax, ebx)) goto loc_001380BC; /* je: equal / zero */

loc_00138054: ;
    xmm2 = MEMF(eax + 4); /* movss */
    xmm1 = MEMF(eax + 8); /* movss */
    xmm0 = MEMF(eax); /* movss */
    xmm3 = xmm2; /* movaps */
    xmm3 = xmm3 * xmm2; /* mulss */
    xmm0 = xmm0 * xmm0; /* mulss */
    xmm2 = xmm1; /* movaps */
    xmm0 = xmm0 + xmm3; /* addss */
    xmm2 = xmm2 * xmm1; /* mulss */
    xmm0 = xmm0 + xmm2; /* addss */
    /* ucomiss xmm0, MEMF(0x648CF8) - sets EFLAGS */
    /* lahf - load AH from flags (used in FPU compare idiom) */
    (void)0; /* test HI8(eax), 0x44 - flags set for next jcc */
    MEMF(esp + 0xC) = xmm0; /* movss */
    if (1 /* jnp after test - parity */) goto loc_00138405; /* jnp: not parity */

loc_00138093: ;
    fp_push(MEMF(esp + 0xC)); /* fld float */
    eax = MEM32(ebp + 8);
    fp_top() = sqrt(fp_top()); /* fsqrt */
    SET_LO8(ecx, 1);
    /* FPU: fdivr dword ptr [0x648d14] */
    /* fld st(0) */
    fp_st1() *= fp_top(); fp_pop(); /* fmul */
    MEMF(esp + 0x1C) = (float)fp_top(); fp_popp(); /* fstp */
    /* fld st(0) */
    fp_st1() *= fp_top(); fp_pop(); /* fmul */
    MEMF(esp + 0x20) = (float)fp_top(); fp_popp(); /* fstp */
    fp_st1() *= fp_top(); fp_pop(); /* fmul */
    MEMF(esp + 0x24) = (float)fp_top(); fp_popp(); /* fstp */

loc_001380BC: ;
    eax = MEM32(ebp + 0x44);
    PUSH32(esp, 1);
    PUSH32(esp, eax);
    eax = MEM32(ebp + 0x34);
    PUSH32(esp, eax);
    eax = MEM32(ebp + 0x30);
    PUSH32(esp, eax);
    eax = MEM32(ebp + 0x3C);
    PUSH32(esp, eax);
    eax = MEM32(ebp + 0x24);
    PUSH32(esp, edi);
    PUSH32(esp, eax);
    SET_LO8(edx, (uint32_t)(-(int32_t)LO8(edx)));
    PUSH32(esp, 1);
    eax = esp + 0x22C;
    PUSH32(esp, eax);
    eax = esp + 0x34;
    edx = _cf ? 0xFFFFFFFF : 0; /* sbb self (CF extend) */
    edx = edx & eax;
    eax = MEM32(ebp + 0x28);
    PUSH32(esp, edx);
    edx = MEM32(ebp + 0xC);
    PUSH32(esp, edx);
    edx = MEM32(ebp + 0x20);
    SET_LO8(ecx, (uint32_t)(-(int32_t)LO8(ecx)));
    PUSH32(esp, eax);
    PUSH32(esp, edx);
    eax = esp + 0x238;
    PUSH32(esp, eax);
    edx = esp + 0x54;
    eax = esp + 0x138;
    ecx = _cf ? 0xFFFFFFFF : 0; /* sbb self (CF extend) */
    ecx = ecx & edx;
    PUSH32(esp, ecx);
    ecx = MEM32(ebp + 0x18);
    PUSH32(esp, esi);
    PUSH32(esp, 0); sub_000BE540(); /* call 0x000BE540 */

loc_00138117: ;
    esp = esp + 0x40;
    if (TEST_Z(LO8(eax), LO8(eax))) goto loc_00138405; /* je: equal / zero */

loc_00138122: ;
    eax = esp + 0x21C;
    PUSH32(esp, eax);
    edx = esp + 0x214;
    ecx = esp + 0x13C;
    PUSH32(esp, 0); sub_00111D50(); /* call 0x00111D50 */

loc_0013813D: ;
    esp = esp + 4;
    if (TEST_Z(LO8(eax), LO8(eax))) goto loc_00138405; /* je: equal / zero */

loc_00138148: ;
    xmm0 = MEMF(0x648E38); /* movss */
    xmm1 = MEMF(ebp + 0x20); /* movss */
    xmm5 = MEMF(esp + 0x138); /* movss */
    xmm6 = MEMF(esp + 0x13C); /* movss */
    ecx = MEM32(ebp + 0x38);
    xmm7 = MEMF(esp + 0x140); /* movss */
    xmm1 = xmm1 * xmm0; /* mulss */
    MEMF(esp + 0x230) = xmm1; /* movss */
    xmm1 = 0.0f; /* xorps self = zero */
    MEMF(esp + 0x22C) = xmm1; /* movss */
    MEMF(esp + 0x228) = xmm1; /* movss */
    xmm1 = xmm5; /* movaps */
    xmm1 = xmm1 * xmm0; /* mulss */
    MEMF(esp + 0x240) = xmm1; /* movss */
    xmm1 = xmm6; /* movaps */
    xmm1 = xmm1 * xmm0; /* mulss */
    edx = esi;
    eax = MEM32(edx);
    MEMF(esp + 0x244) = xmm1; /* movss */
    xmm1 = xmm7; /* movaps */
    xmm1 = xmm1 * xmm0; /* mulss */
    xmm0 = MEMF(ebp + 0x1C); /* movss */
    MEM32(esp + 0x200) = ecx;
    ecx = MEM32(edx + 4);
    edx = MEM32(edx + 8);
    MEMF(esp + 0x208) = xmm0; /* movss */
    xmm0 = MEMF(esp + 0x104); /* movss */
    /* comiss xmm0, MEMF(0x648EC8) - sets EFLAGS */
    MEM32(esp + 0x234) = eax;
    MEM32(esp + 0x238) = ecx;
    MEM32(esp + 0x23C) = edx;
    MEMF(esp + 0x248) = xmm1; /* movss */
    if ((xmm0 <= MEMF(0x648EC8))) goto loc_00138212; /* jbe: below or equal (unsigned <=) */

loc_0013820B: ;
    eax = 1;
    goto loc_00138214;

loc_00138212: ;
    eax = 0; /* xor self */

loc_00138214: ;
    SET_LO8(ecx, MEM8(esp + 0x20C));
    xmm0 = MEMF(0x64A1EC); /* movss */
    xmm4 = MEMF(0x648D14); /* movss */
    SET_LO8(ecx, LO8(ecx) | LO8(eax));
    eax = esp + 0x3C;
    PUSH32(esp, eax);
    edx = esp + 0x3C;
    eax = esp + 0x13C;
    MEM8(esp + 0x210) = LO8(ecx);
    MEMF(esp + 0x2C) = xmm4; /* movss */
    MEMF(esp + 0x30) = xmm4; /* movss */
    MEMF(esp + 0x38) = xmm0; /* movss */
    MEMF(esp + 0x34) = xmm0; /* movss */
    PUSH32(esp, 0); sub_001118D0(); /* call 0x001118D0 */

loc_00138261: ;
    ecx = MEM32(esi);
    eax = MEM32(esi + 8);
    edx = MEM32(esi + 4);
    xmm0 = MEMF(ebp + 0x1C); /* movss */
    esi = MEM32(ebp + 0x40);
    xmm1 = 0.0f; /* xorps self = zero */
    MEM32(esp + 0x60) = ecx;
    ecx = MEM32(0x595D14);
    MEM32(esp + 0x68) = eax;
    eax = MEM32(0x595D1C);
    MEM32(esp + 0x64) = edx;
    edx = MEM32(0x595D18);
    MEM32(esp + 0x84) = ecx;
    SET_LO8(ecx, MEM8(edi + 0x10B));
    MEM32(esp + 0x8C) = eax;
    eax = 0xFF;
    esp = esp + 4;
    (void)0; /* cmp esi, ebx - flags set for next jcc */
    xmm5 = xmm5 * xmm0; /* mulss */
    xmm6 = xmm6 * xmm0; /* mulss */
    xmm7 = xmm7 * xmm0; /* mulss */
    MEMF(esp + 0x40) = xmm1; /* movss */
    MEMF(esp + 0x50) = xmm4; /* movss */
    MEMF(esp + 0x54) = xmm4; /* movss */
    MEMF(esp + 0x58) = xmm4; /* movss */
    MEMF(esp + 0x74) = xmm5; /* movss */
    MEMF(esp + 0x78) = xmm6; /* movss */
    MEMF(esp + 0x7C) = xmm7; /* movss */
    MEM32(esp + 0x84) = edx;
    MEMF(esp + 0x8C) = xmm1; /* movss */
    MEM32(esp + 0x90) = 0x120;
    MEM32(esp + 0x94) = 0x12C;
    MEM32(esp + 0x98) = 0x2F;
    MEM8(esp + 0x9C) = LO8(ebx);
    MEM32(esp + 0xA0) = ebx;
    MEM8(esp + 0xA4) = LO8(eax);
    MEM32(esp + 0xC8) = 0xCF570;
    MEM32(esp + 0xA8) = 0x138410;
    MEM32(esp + 0xAC) = ebx;
    MEM32(esp + 0xB0) = ebx;
    MEM32(esp + 0xB4) = ebx;
    MEM32(esp + 0xB8) = ebx;
    MEM32(esp + 0xBC) = ebx;
    MEM32(esp + 0xC0) = 0x13E6E0;
    MEM32(esp + 0xC4) = 0x13E8F0;
    MEM8(esp + 0xCC) = LO8(ebx);
    MEM32(esp + 0xD0) = edi;
    MEM8(esp + 0xD4) = LO8(ecx);
    MEM16(esp + 0xD6) = 1;
    MEM16(esp + 0xD8) = LO16(eax);
    if (CMP_EQ(esi, ebx)) goto loc_001383C1; /* je: equal / zero */

loc_001383A3: ;
    edx = MEM32(0x847024);
    edx = MEM32(edx + 0x40);
    eax = esp + 0x5C;
    PUSH32(esp, eax);
    ecx = esi;
    PUSH32(esp, 0); sub_00024F60(); /* call 0x00024F60 */

loc_001383B8: ;
    MEM32(esp + 0xF8) = esi;
    goto loc_001383CB;

loc_001383C1: ;
    eax = eax | 0xFFFFFFFFu;
    MEM32(esp + 0xF8) = eax;

loc_001383CB: ;
    ecx = MEM32(ebp + 0x48);
    PUSH32(esp, ebx);
    PUSH32(esp, ecx);
    PUSH32(esp, 0x160);
    PUSH32(esp, ebx);
    PUSH32(esp, ebx);
    PUSH32(esp, ebx);
    edx = esp + 0x40;
    PUSH32(esp, ebx);
    PUSH32(esp, edx);
    MEM32(esp + 0x114) = eax;
    PUSH32(esp, 0); sub_0013D5D0(); /* call 0x0013D5D0 */

loc_001383EA: ;
    esp = esp + 0x20;
    if (CMP_EQ(eax, ebx)) goto loc_00138405; /* je: equal / zero */

loc_001383F1: ;
    ecx = 0x58;
    esi = esp + 0x100;
    edi = eax + 0x290;
    memcpy((void*)XBOX_PTR(edi), (void*)XBOX_PTR(esi), ecx * 4);
    esi += ecx * 4; edi += ecx * 4; ecx = 0; /* rep movsd */

loc_00138405: ;
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
 * sub_00138410
 * Original: 0x00138410 - 0x00138451 (65 bytes, 16 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00138410(void)
{
    uint32_t ebp;
    int _flags = 0; /* fallback flag var */
    float xmm0, xmm1;

loc_00138410: ;
    PUSH32(esp, ebp);
    ebp = esp;
    esp = esp & 0xFFFFFFF0u;
    esp = esp - 0x114;
    xmm0 = MEMF(0x7FA24C); /* movss */
    PUSH32(esp, ebx);
    PUSH32(esp, esi);
    esi = MEM32(ebp + 8);
    /* comiss xmm0, MEMF(esi + 0x394) - sets EFLAGS */
    ebx = MEM32(esi + 0xD4);
    PUSH32(esp, edi);
    MEM32(esp + 0x14) = 1;
    if ((xmm0 <= MEMF(esi + 0x394))) { sub_00138451(); return; } /* jbe: below or equal (unsigned <=) */

loc_00138441: ;
    xmm1 = MEMF(esi + 0x394); /* movss */
    MEMF(esp + 0x1C) = xmm1; /* movss */
    g_seh_ebp = ebp; sub_0013845A(); return; /* tail jmp 0x0013845A */

}

/**
 * sub_001386E0
 * Original: 0x001386E0 - 0x001386E6 (6 bytes, 2 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_001386E0(void)
{

loc_001386E0: ;
    eax = 1;
    esp += 4; return; /* ret */

}

/**
 * sub_001386F0
 * Original: 0x001386F0 - 0x00138702 (18 bytes, 4 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_001386F0(void)
{
    uint32_t ebp;
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_001386F0: ;
    ecx = MEM32(esp + 4);
    eax = ecx + 0x310;
    edx = eax + 0xC;
    g_seh_ebp = ebp; sub_00153160(); return; /* tail jmp 0x00153160 */

}

/**
 * sub_00138710
 * Original: 0x00138710 - 0x0013876C (92 bytes, 26 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00138710(void)
{
    float xmm0, xmm1, xmm6;

loc_00138710: ;
    PUSH32(esp, esi);
    PUSH32(esp, edi);
    edi = MEM32(esp + 0xC);
    PUSH32(esp, edi);
    esi = eax;
    PUSH32(esp, 0); sub_003E1D70(); /* call 0x003E1D70 */

loc_0013871E: ;
    xmm1 = xmm0; /* movaps */
    xmm0 = MEMF(0x6490B4); /* movss */
    xmm1 = xmm1 * xmm0; /* mulss */
    PUSH32(esp, ecx);
    xmm1 = xmm1 + xmm0; /* addss */
    MEMF(esp) = xmm1; /* movss */
    PUSH32(esp, 0); sub_003E1D70(); /* call 0x003E1D70 */

loc_0013873C: ;
    xmm6 = 0.0f; /* xorps self = zero */
    xmm1 = xmm0; /* movaps */
    xmm1 = xmm1 * MEMF(0x648D80); /* mulss */
    xmm1 = xmm1 + MEMF(0x648D3C); /* addss */
    xmm0 = MEMF(0x64B0E4); /* movss */
    PUSH32(esp, 0); sub_000F5D70(); /* call 0x000F5D70 */

loc_0013875F: ;
    PUSH32(esp, edi);
    PUSH32(esp, esi);
    PUSH32(esp, 0); sub_0019A290(); /* call 0x0019A290 */

loc_00138766: ;
    esp = esp + 0x10;
    POP32(esp, edi);
    POP32(esp, esi);
    esp += 4; return; /* ret */

}

/**
 * sub_00138770
 * Original: 0x00138770 - 0x0013897E (526 bytes, 95 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00138770(void)
{
    int _flags = 0; /* fallback flag var */
    float xmm0, xmm1, xmm2;

loc_00138770: ;
    esp = esp - 0xE8;
    ecx = MEM32(0x595D18);
    eax = MEM32(0x595D14);
    xmm1 = MEMF(0x648D14); /* movss */
    xmm2 = MEMF(0x64A1EC); /* movss */
    xmm0 = MEMF(esi); /* movss */
    edx = MEM32(0x595D1C);
    PUSH32(esp, ebx);
    ebx = 0; /* xor self */
    PUSH32(esp, ebx);
    MEM32(esp + 0x78) = ecx;
    ecx = MEM32(esp + 0xF8);
    PUSH32(esp, ecx);
    PUSH32(esp, 0x160);
    MEM32(esp + 0x7C) = eax;
    eax = (uint32_t)(int32_t)SMEM16(esp + 0xFC);
    PUSH32(esp, ebx);
    MEMF(esp + 0x18) = xmm0; /* movss */
    xmm0 = MEMF(esi + 4); /* movss */
    MEMF(esp + 0x28) = xmm1; /* movss */
    MEMF(esp + 0x2C) = xmm1; /* movss */
    MEMF(esp + 0x34) = xmm2; /* movss */
    MEMF(esp + 0x30) = xmm2; /* movss */
    xmm2 = MEMF(esi + 0xC); /* movss */
    MEMF(esp + 0x50) = xmm1; /* movss */
    MEMF(esp + 0x54) = xmm1; /* movss */
    MEMF(esp + 0x58) = xmm1; /* movss */
    xmm1 = MEMF(esi); /* movss */
    PUSH32(esp, 0x7F);
    MEM32(esp + 0x98) = eax;
    eax = 0xFF;
    MEMF(esp + 0x20) = xmm0; /* movss */
    xmm0 = MEMF(esi + 8); /* movss */
    MEMF(esp + 0x3C) = xmm2; /* movss */
    xmm2 = MEMF(esi + 0x10); /* movss */
    MEMF(esp + 0x60) = xmm1; /* movss */
    xmm1 = MEMF(esi + 4); /* movss */
    PUSH32(esp, 3);
    MEM32(esp + 0x90) = edx;
    MEM8(esp + 0xAC) = LO8(eax);
    MEM16(esp + 0xE0) = LO16(eax);
    eax = eax | 0xFFFFFFFFu;
    edx = esp + 0x30;
    MEMF(esp + 0x28) = xmm0; /* movss */
    xmm0 = 0.0f; /* xorps self = zero */
    MEMF(esp + 0x44) = xmm2; /* movss */
    xmm2 = MEMF(esi + 0x14); /* movss */
    MEMF(esp + 0x68) = xmm1; /* movss */
    xmm1 = MEMF(esi + 8); /* movss */
    PUSH32(esp, ebx);
    PUSH32(esp, edx);
    MEMF(esp + 0x34) = xmm0; /* movss */
    MEMF(esp + 0x50) = xmm2; /* movss */
    MEMF(esp + 0x74) = xmm1; /* movss */
    MEMF(esp + 0x84) = xmm0; /* movss */
    MEMF(esp + 0x88) = xmm0; /* movss */
    MEMF(esp + 0x8C) = xmm0; /* movss */
    MEMF(esp + 0x9C) = xmm0; /* movss */
    MEM32(esp + 0xA0) = 0x980;
    MEM32(esp + 0xA8) = 0x2F;
    MEM8(esp + 0xAC) = LO8(ebx);
    MEM32(esp + 0xB0) = ebx;
    MEM32(esp + 0xD8) = 0xCF570;
    MEM32(esp + 0xB8) = 0x138980;
    MEM32(esp + 0xBC) = ebx;
    MEM32(esp + 0xC0) = ebx;
    MEM32(esp + 0xC4) = ebx;
    MEM32(esp + 0xC8) = ebx;
    MEM32(esp + 0xCC) = ebx;
    MEM32(esp + 0xD0) = 0x13E6E0;
    MEM32(esp + 0xD4) = 0x13E8F0;
    MEM8(esp + 0xDC) = LO8(ebx);
    MEM32(esp + 0xE0) = ebx;
    MEM8(esp + 0xE4) = LO8(ebx);
    MEM16(esp + 0xE6) = 1;
    MEM32(esp + 0x100) = ebx;
    MEM32(esp + 0x104) = eax;
    MEM32(esp + 0x108) = eax;
    PUSH32(esp, 0); sub_0013D5D0(); /* call 0x0013D5D0 */

loc_0013894C: ;
    esp = esp + 0x20;
    (void)0; /* cmp eax, ebx - flags set for next jcc */
    POP32(esp, ebx);
    if (CMP_EQ(eax, ebx)) goto loc_00138977; /* je: equal / zero */

loc_00138954: ;
    ecx = MEM32(esp + 4);
    edx = MEM32(esp + 8);
    eax = eax + 0x290;
    MEM32(eax) = esi;
    MEM32(eax + 4) = ecx;
    ecx = MEM32(esp + 0xC);
    MEM32(eax + 8) = edx;
    edx = MEM32(esp + 0x10);
    MEM32(eax + 0xC) = ecx;
    MEM32(eax + 0x10) = edx;

loc_00138977: ;
    esp = esp + 0xE8;
    esp += 4; return; /* ret */

}

/**
 * sub_00138980
 * Original: 0x00138980 - 0x00138B90 (528 bytes, 116 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00138980(void)
{
    int _flags = 0; /* fallback flag var */
    float xmm0, xmm1, xmm2, xmm3, xmm4, xmm5, xmm6, xmm7;
    double _fp_stack[8];
    int _fp_top = 0;
    #define fp_push(v) (_fp_stack[--_fp_top & 7] = (v))
    #define fp_pop() (_fp_top++)
    #define fp_popp() (fp_pop())
    #define fp_top() _fp_stack[_fp_top & 7]
    #define fp_st1() _fp_stack[(_fp_top + 1) & 7]

loc_00138980: ;
    esp = esp - 0x10;
    PUSH32(esp, ebx);
    PUSH32(esp, esi);
    esi = MEM32(esp + 0x1C);
    eax = MEM32(esi + 0x290);
    ecx = MEM32(eax);
    MEM32(esi + 0x60) = ecx;
    edx = MEM32(esi + 0x290);
    eax = MEM32(edx + 4);
    MEM32(esi + 0x64) = eax;
    ecx = MEM32(esi + 0x290);
    edx = MEM32(ecx + 8);
    xmm4 = MEMF(esi + 0x64); /* movss */
    xmm2 = MEMF(esi + 0x60); /* movss */
    MEM32(esi + 0x68) = edx;
    eax = MEM32(esi + 0x290);
    ecx = MEM32(eax + 0xC);
    xmm5 = MEMF(esi + 0x68); /* movss */
    MEM32(esi + 0x3C) = ecx;
    edx = MEM32(esi + 0x290);
    eax = MEM32(edx + 0x10);
    MEM32(esi + 0x40) = eax;
    ecx = MEM32(esi + 0x290);
    edx = MEM32(ecx + 0x14);
    MEM32(esi + 0x44) = edx;
    xmm4 = xmm4 - MEMF(esi + 0x298); /* subss */
    xmm5 = xmm5 - MEMF(esi + 0x29C); /* subss */
    xmm2 = xmm2 - MEMF(esi + 0x294); /* subss */
    xmm7 = MEMF(esi + 0x2A0); /* movss */
    xmm7 = xmm7 + MEMF(0x7FA24C); /* addss */
    ebx = esi + 0x294;
    xmm0 = xmm5; /* movaps */
    xmm0 = xmm0 * xmm5; /* mulss */
    xmm1 = xmm4; /* movaps */
    xmm1 = xmm1 * xmm4; /* mulss */
    xmm0 = xmm0 + xmm1; /* addss */
    xmm1 = xmm2; /* movaps */
    xmm1 = xmm1 * xmm2; /* mulss */
    xmm0 = xmm0 + xmm1; /* addss */
    /* ucomiss xmm0, MEMF(0x648CF8) - sets EFLAGS */
    /* lahf - load AH from flags (used in FPU compare idiom) */
    (void)0; /* test HI8(eax), 0x44 - flags set for next jcc */
    MEMF(esi + 0x2A0) = xmm7; /* movss */
    MEMF(esp + 0x1C) = xmm0; /* movss */
    if (1 /* jnp after test - parity */) goto loc_00138B85; /* jnp: not parity */

loc_00138A49: ;
    fp_push(MEMF(esp + 0x1C)); /* fld float */
    xmm6 = MEMF(0x648D14); /* movss */
    fp_top() = sqrt(fp_top()); /* fsqrt */
    xmm0 = xmm6; /* movaps */
    MEMF(esp + 0x1C) = (float)fp_top(); fp_popp(); /* fstp */
    xmm3 = MEMF(esp + 0x1C); /* movss */
    xmm0 = xmm0 / xmm3; /* divss */
    xmm3 = xmm3 * MEMF(0x64909C); /* mulss */
    /* comiss xmm3, xmm6 - sets EFLAGS */
    xmm1 = xmm0; /* movaps */
    xmm1 = xmm1 * xmm2; /* mulss */
    xmm2 = xmm0; /* movaps */
    xmm2 = xmm2 * xmm4; /* mulss */
    xmm4 = MEMF(0x64908C); /* movss */
    xmm0 = xmm0 * xmm5; /* mulss */
    xmm1 = xmm1 * xmm4; /* mulss */
    xmm2 = xmm2 * xmm4; /* mulss */
    xmm0 = xmm0 * xmm4; /* mulss */
    MEMF(esp + 0xC) = xmm1; /* movss */
    MEMF(esp + 0x10) = xmm2; /* movss */
    MEMF(esp + 0x14) = xmm0; /* movss */
    MEMF(esp + 0x1C) = xmm3; /* movss */
    if ((xmm3 <= xmm6)) goto loc_00138B85; /* jbe: below or equal (unsigned <=) */

loc_00138AB7: ;
    xmm7 = xmm7 / xmm3; /* divss */
    MEMF(esp + 8) = xmm7; /* movss */
    PUSH32(esp, edi);

loc_00138AC2: ;
    PUSH32(esp, 0);
    PUSH32(esp, 0);
    PUSH32(esp, 0);
    PUSH32(esp, 0xFF);
    PUSH32(esp, 0xFF);
    PUSH32(esp, 0xFF);
    PUSH32(esp, 0xFF);
    PUSH32(esp, 0);
    PUSH32(esp, 2);
    PUSH32(esp, 0x2A8);
    PUSH32(esp, 0x2A7);
    PUSH32(esp, 0x3E4CCCCD);
    PUSH32(esp, 0x3ECCCCCD);
    PUSH32(esp, 0x42480000);
    PUSH32(esp, 0x41200000);
    PUSH32(esp, 0x3DCCCCCD);
    PUSH32(esp, ebx);
    PUSH32(esp, 0);
    edi = 0x5A02CC;
    PUSH32(esp, 0); sub_001AF030(); /* call 0x001AF030 */

loc_00138B10: ;
    xmm0 = MEMF(esp + 0x58); /* movss */
    xmm0 = xmm0 + MEMF(ebx); /* addss */
    xmm1 = MEMF(0x648D14); /* movss */
    MEMF(ebx) = xmm0; /* movss */
    xmm0 = MEMF(esi + 0x298); /* movss */
    xmm0 = xmm0 + MEMF(esp + 0x5C); /* addss */
    MEMF(esi + 0x298) = xmm0; /* movss */
    xmm0 = MEMF(esi + 0x29C); /* movss */
    xmm0 = xmm0 + MEMF(esp + 0x60); /* addss */
    MEMF(esi + 0x29C) = xmm0; /* movss */
    xmm0 = MEMF(esi + 0x2A0); /* movss */
    xmm0 = xmm0 - MEMF(esp + 0x54); /* subss */
    MEMF(esi + 0x2A0) = xmm0; /* movss */
    xmm0 = MEMF(esp + 0x68); /* movss */
    xmm0 = xmm0 - xmm1; /* subss */
    esp = esp + 0x48;
    /* comiss xmm0, xmm1 - sets EFLAGS */
    MEMF(esp + 0x20) = xmm0; /* movss */
    if ((xmm0 > xmm1)) goto loc_00138AC2; /* ja: above (unsigned >) */

loc_00138B84: ;
    POP32(esp, edi);

loc_00138B85: ;
    POP32(esp, esi);
    eax = 1;
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
 * sub_00138B90
 * Original: 0x00138B90 - 0x00138DD1 (577 bytes, 150 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00138B90(void)
{
    uint32_t ebp;
    int _flags = 0; /* fallback flag var */
    float xmm0, xmm1, xmm2, xmm3;

loc_00138B90: ;
    PUSH32(esp, ebp);
    ebp = esp;
    esp = esp & 0xFFFFFFF0u;
    esp = esp - 0x168;
    PUSH32(esp, esi);
    PUSH32(esp, edi);
    edi = MEM32(ebp + 8);
    if (TEST_Z(edi, edi)) goto loc_00138DCB; /* je: equal / zero */

loc_00138BA9: ;
    xmm3 = MEMF(edi + 0x520); /* movss */
    /* ucomiss xmm3, MEMF(0x648CF8) - sets EFLAGS */
    xmm0 = MEMF(edi + 0x7C); /* movss */
    xmm1 = MEMF(edi + 0x78); /* movss */
    xmm0 = xmm0 + MEMF(0x6496C8); /* addss */
    xmm2 = MEMF(edi + 0x80); /* movss */
    /* lahf - load AH from flags (used in FPU compare idiom) */
    (void)0; /* test HI8(eax), 0x44 - flags set for next jcc */
    MEMF(esp + 0xC) = xmm1; /* movss */
    MEMF(esp + 0x10) = xmm0; /* movss */
    MEMF(esp + 0x14) = xmm2; /* movss */
    if (1 /* jnp after test - parity */) goto loc_00138BF4; /* jnp: not parity */

loc_00138BEA: ;
    MEM8(esp + 0xB) = 1;
    goto loc_00138C9D;

loc_00138BF4: ;
    (void)0; /* cmp MEM32(0x7FA1F8), 0x28 - flags set for next jcc */
    MEM8(esp + 0xB) = 0;
    if (CMP_EQ(MEM32(0x7FA1F8), 0x28)) goto loc_00138C9D; /* je: equal / zero */

loc_00138C06: ;
    edx = edi;
    eax = esp + 0x30;
    MEMF(esp + 0x18) = xmm1; /* movss */
    MEMF(esp + 0x1C) = xmm0; /* movss */
    MEMF(esp + 0x20) = xmm2; /* movss */
    PUSH32(esp, 0); sub_002A0430(); /* call 0x002A0430 */

loc_00138C23: ;
    xmm0 = MEMF(esp + 0x10); /* movss */
    xmm0 = xmm0 - MEMF(0x5A005C); /* subss */
    PUSH32(esp, 0);
    PUSH32(esp, ecx);
    MEMF(esp) = xmm0; /* movss */
    PUSH32(esp, 0);
    esi = eax;
    edi = esp + 0x24;
    PUSH32(esp, 0); sub_002A0180(); /* call 0x002A0180 */

loc_00138C46: ;
    esp = esp + 0xC;
    if (TEST_Z(LO8(eax), LO8(eax))) goto loc_00138C9A; /* je: equal / zero */

loc_00138C4D: ;
    if (TEST_Z(MEM8(esp + 0xD4), 1)) goto loc_00138C9A; /* je: equal / zero */

loc_00138C57: ;
    xmm0 = MEMF(esp + 0x18); /* movss */
    MEMF(esp + 0x24) = xmm0; /* movss */
    xmm0 = MEMF(esp + 0x30); /* movss */
    xmm0 = xmm0 + MEMF(0x648CE0); /* addss */
    eax = esp + 0xB0;
    PUSH32(esp, eax);
    ecx = esp + 0x28;
    PUSH32(esp, ecx);
    MEMF(esp + 0x30) = xmm0; /* movss */
    xmm0 = MEMF(esp + 0x28); /* movss */
    PUSH32(esp, 0);
    MEMF(esp + 0x38) = xmm0; /* movss */
    PUSH32(esp, 0); sub_001CDAD0(); /* call 0x001CDAD0 */

loc_00138C97: ;
    esp = esp + 0xC;

loc_00138C9A: ;
    edi = MEM32(ebp + 8);

loc_00138C9D: ;
    xmm0 = MEMF(0x64A200); /* movss */
    PUSH32(esp, 0x14);
    PUSH32(esp, 0xF);
    PUSH32(esp, 0x3A8163D3);
    PUSH32(esp, 0x447D4000);
    eax = esp + 0x1C;
    PUSH32(esp, 0); sub_0019B600(); /* call 0x0019B600 */

loc_00138CBC: ;
    xmm2 = MEMF(0x64A59C); /* movss */
    xmm1 = MEMF(0x64A598); /* movss */
    xmm0 = MEMF(0x64A200); /* movss */
    PUSH32(esp, ebx);
    PUSH32(esp, 5);
    eax = esp + 0x24;
    PUSH32(esp, 0); sub_0019B530(); /* call 0x0019B530 */

loc_00138CE0: ;
    PUSH32(esp, ebx);
    eax = esp + 0x28;
    PUSH32(esp, 0); sub_0019B6C0(); /* call 0x0019B6C0 */

loc_00138CEA: ;
    edx = esp + 0x28;
    PUSH32(esp, ebx);
    PUSH32(esp, edx);
    PUSH32(esp, 0); sub_0019A300(); /* call 0x0019A300 */

loc_00138CF5: ;
    PUSH32(esp, 0);
    PUSH32(esp, 0);
    PUSH32(esp, 0);
    PUSH32(esp, 0);
    PUSH32(esp, 0x437A0000);
    PUSH32(esp, 0x3F800000);
    PUSH32(esp, 1);
    esi = esp + 0x4C;
    PUSH32(esp, 0); sub_000F60F0(); /* call 0x000F60F0 */

loc_00138D12: ;
    esp = esp + 0x40;
    PUSH32(esp, 0x43FA0000);
    PUSH32(esp, 0); sub_003E1D70(); /* call 0x003E1D70 */

loc_00138D1F: ;
    xmm0 = xmm0 * MEMF(0x648CE0); /* mulss */
    xmm0 = xmm0 + MEMF(0x648D18); /* addss */
    PUSH32(esp, ecx);
    MEMF(esp) = xmm0; /* movss */
    xmm0 = MEMF(0x6493C0); /* movss */
    SET_LO8(edx, LO8(ebx));
    eax = esi;
    PUSH32(esp, 0); sub_00188230(); /* call 0x00188230 */

loc_00138D46: ;
    SET_LO8(eax, MEM8(esp + 0x13));
    esp = esp + 8;
    if (TEST_NZ(LO8(eax), LO8(eax))) goto loc_00138D61; /* jne: not equal / not zero */

loc_00138D51: ;
    PUSH32(esp, ebx);
    PUSH32(esp, 1);
    PUSH32(esp, 0);
    PUSH32(esp, edi);
    PUSH32(esp, 0);
    PUSH32(esp, 0); sub_000B2100(); /* call 0x000B2100 */

loc_00138D5E: ;
    esp = esp + 0x14;

loc_00138D61: ;
    SET_LO8(eax, MEM8(0x7819D5));
    if (TEST_Z(LO8(eax), LO8(eax))) goto loc_00138D88; /* je: equal / zero */

loc_00138D6A: ;
    edx = 0; /* xor self */
    eax = esp + 0x30;
    PUSH32(esp, 0); sub_00022100(); /* call 0x00022100 */

loc_00138D75: ;
    esi = esp + 0x30;
    PUSH32(esp, 0); sub_00022320(); /* call 0x00022320 */

loc_00138D7E: ;
    (void)0; /* cmp eax, 4 - flags set for next jcc */
    ecx = 0xC3B;
    if (CMP_G(eax, 4)) goto loc_00138D8D; /* jg: greater (signed >) */

loc_00138D88: ;
    ecx = 0x8B7;

loc_00138D8D: ;
    edx = MEM32(0x847024);
    PUSH32(esp, 0);
    PUSH32(esp, 0);
    PUSH32(esp, 0xFFFFFFFFu);
    PUSH32(esp, 0);
    eax = esp + 0x1C;
    PUSH32(esp, eax);
    eax = MEM32(edx + 0x40);
    PUSH32(esp, 0xBF800000u);
    PUSH32(esp, 0);
    PUSH32(esp, eax);
    ecx = ecx & 0x7FFF;
    edx = edx | 0xFFFFFFFFu;
    eax = eax | 0xFFFFFFFFu;
    PUSH32(esp, 0); sub_00022D90(); /* call 0x00022D90 */

loc_00138DBC: ;
    SET_LO8(eax, MEM8(esp + 0xB));
    if (TEST_Z(LO8(eax), LO8(eax))) goto loc_00138DCB; /* je: equal / zero */

loc_00138DC4: ;
    eax = edi;
    PUSH32(esp, 0); sub_00138DE0(); /* call 0x00138DE0 */

loc_00138DCB: ;
    POP32(esp, edi);
    POP32(esp, esi);
    esp = ebp;
    POP32(esp, ebp);
    esp += 4; return; /* ret */

}

/**
 * sub_00138DE0
 * Original: 0x00138DE0 - 0x00138F9B (443 bytes, 89 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00138DE0(void)
{
    uint32_t ebp;
    float xmm0, xmm1;

loc_00138DE0: ;
    PUSH32(esp, ebp);
    ebp = esp;
    esp = esp & 0xFFFFFFF0u;
    esp = esp - 0x98;
    xmm1 = MEMF(0x648F60); /* movss */
    xmm0 = MEMF(eax + 0x78); /* movss */
    MEMF(esp + 0x30) = xmm1; /* movss */
    xmm1 = MEMF(0x648CE4); /* movss */
    MEMF(esp + 0x1C) = xmm1; /* movss */
    xmm1 = MEMF(0x648D1C); /* movss */
    MEMF(esp + 0x20) = xmm1; /* movss */
    xmm1 = MEMF(0x59A8D8); /* movss */
    MEMF(esp + 0x44) = xmm1; /* movss */
    MEMF(esp + 0x48) = xmm1; /* movss */
    xmm1 = MEMF(0x648CE0); /* movss */
    MEMF(esp + 0xC) = xmm1; /* movss */
    xmm1 = MEMF(0x648D40); /* movss */
    MEMF(esp + 0x10) = xmm1; /* movss */
    xmm1 = MEMF(0x64A028); /* movss */
    MEMF(esp + 4) = xmm1; /* movss */
    xmm1 = MEMF(0x64A024); /* movss */
    MEMF(esp + 8) = xmm1; /* movss */
    xmm1 = MEMF(0x648CDC); /* movss */
    PUSH32(esp, esi);
    MEMF(esp + 0x38) = xmm1; /* movss */
    xmm1 = MEMF(0x648CF4); /* movss */
    PUSH32(esp, edi);
    MEMF(esp + 0x2C) = xmm1; /* movss */
    xmm1 = MEMF(0x648CF0); /* movss */
    ecx = 0x10;
    esi = 0x5A0350;
    edi = esp + 0x60;
    memcpy((void*)XBOX_PTR(edi), (void*)XBOX_PTR(esi), ecx * 4);
    esi += ecx * 4; edi += ecx * 4; ecx = 0; /* rep movsd */
    MEMF(esp + 0x90) = xmm0; /* movss */
    xmm0 = MEMF(eax + 0x7C); /* movss */
    MEMF(esp + 0x94) = xmm0; /* movss */
    xmm0 = MEMF(eax + 0x80); /* movss */
    MEMF(esp + 0x30) = xmm1; /* movss */
    xmm1 = MEMF(0x648F8C); /* movss */
    MEMF(esp + 0x98) = xmm0; /* movss */
    xmm0 = MEMF(0x6490B4); /* movss */
    MEMF(esp + 0x44) = xmm1; /* movss */
    xmm1 = MEMF(0x5A0060); /* movss */
    MEMF(esp + 0x54) = xmm0; /* movss */
    xmm0 = MEMF(0x648F38); /* movss */
    MEMF(esp + 0x48) = xmm1; /* movss */
    xmm1 = MEMF(0x649ED4); /* movss */
    MEMF(esp + 0x58) = xmm0; /* movss */
    xmm0 = 0.0f; /* xorps self = zero */
    MEMF(esp + 0x1C) = xmm1; /* movss */
    xmm1 = MEMF(0x648D14); /* movss */
    MEMF(esp + 0x34) = xmm0; /* movss */
    MEMF(esp + 0x40) = xmm0; /* movss */
    MEMF(esp + 0x20) = xmm0; /* movss */
    MEMF(0x6B7A20) = xmm1; /* movss */
    MEMF(0x6B7A24) = xmm0; /* movss */
    PUSH32(esp, 0); sub_00141960(); /* call 0x00141960 */

loc_00138F43: ;
    PUSH32(esp, 0x1030002);
    PUSH32(esp, 0x1911F0);
    eax = ZX8(LO8(eax));
    MEM32(esp + 0x64) = eax;
    ecx = esp + 0x24;
    PUSH32(esp, ecx);
    edx = esp + 0x50;
    PUSH32(esp, edx);
    eax = esp + 0x3C;
    PUSH32(esp, eax);
    ecx = esp + 0x50;
    PUSH32(esp, ecx);
    edx = esp + 0x24;
    PUSH32(esp, edx);
    eax = esp + 0x30;
    PUSH32(esp, eax);
    ecx = esp + 0x44;
    PUSH32(esp, ecx);
    edx = esp + 0x58;
    PUSH32(esp, edx);
    eax = esp + 0x7C;
    PUSH32(esp, eax);
    ecx = esp + 0x8C;
    PUSH32(esp, ecx);
    eax = esp + 0x7C;
    PUSH32(esp, 0); sub_00190E40(); /* call 0x00190E40 */

loc_00138F92: ;
    esp = esp + 0x30;
    POP32(esp, edi);
    POP32(esp, esi);
    esp = ebp;
    POP32(esp, ebp);
    esp += 4; return; /* ret */

}

/**
 * sub_00138FA0
 * Original: 0x00138FA0 - 0x00138FBB (27 bytes, 9 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00138FA0(void)
{
    int _flags = 0; /* fallback flag var */

loc_00138FA0: ;
    eax = MEM32(esp + 4);
    ecx = MEM32(eax + 0x38);
    SET_LO8(edx, MEM8(ecx + 0x140));
    eax = MEM32(eax + 0x34);
    (void)0; /* test LO8(edx), LO8(edx) - flags set for next jcc */
    SET_LO8(edx, (TEST_NZ(LO8(edx), LO8(edx))) ? 1 : 0); /* setne */
    MEM8(eax + 0x5A) = LO8(edx);
    SET_LO8(eax, 1);
    esp += 4; return; /* ret */

}

/**
 * sub_00138FC0
 * Original: 0x00138FC0 - 0x00138FDE (30 bytes, 9 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00138FC0(void)
{
    int _flags = 0; /* fallback flag var */

loc_00138FC0: ;
    eax = MEM32(esp + 4);
    ecx = MEM32(eax + 0x384);
    SET_LO8(edx, MEM8(ecx + 0x140));
    if (TEST_NZ(LO8(edx), LO8(edx))) { sub_00138FDE(); return; } /* jne: not equal / not zero */

loc_00138FD4: ;
    edx = MEM32(esp + 8);
    MEM8(edx) = 1;
    SET_LO8(eax, 1);
    esp += 4; return; /* ret */

}

/**
 * sub_00138FF0
 * Original: 0x00138FF0 - 0x0013901F (47 bytes, 23 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00138FF0(void)
{
    uint32_t ebp;
    int _flags = 0; /* fallback flag var */
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_00138FF0: ;
    PUSH32(esp, ebx);
    PUSH32(esp, ebp);
    ebp = MEM32(esp + 0x18);
    PUSH32(esp, esi);
    PUSH32(esp, edi);
    ebx = eax;
    esi = edx;
    edi = 0; /* xor self */
    edi = edi;

loc_00139000: ;
    SET_LO8(eax, MEM8(edi + 0x77496C));
    if (TEST_Z(LO8(eax), LO8(eax))) goto loc_00139010; /* je: equal / zero */

loc_0013900A: ;
    edi++;
    if (CMP_L(edi, 4)) goto loc_00139000; /* jl: less (signed <) */

loc_00139010: ;
    if (CMP_NE(edi, 4)) { sub_0013901F(); return; } /* jne: not equal / not zero */

loc_00139015: ;
    POP32(esp, edi);
    POP32(esp, esi);
    POP32(esp, ebp);
    eax = 0xFFFFFFFFu;
    POP32(esp, ebx);
    esp += 4; return; /* ret */

}

/**
 * sub_001393B0
 * Original: 0x001393B0 - 0x0013941B (107 bytes, 28 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_001393B0(void)
{
    int _flags = 0; /* fallback flag var */

loc_001393B0: ;
    PUSH32(esp, esi);
    esi = edx + edx * 4;
    esi = esi << 2;
    eax = MEM32(esi + 0x774970);
    if (TEST_NZ(eax, eax)) goto loc_001393C6; /* jne: not equal / not zero */

loc_001393C1: ;
    PUSH32(esp, 0); sub_001394D0(); /* call 0x001394D0 */

loc_001393C6: ;
    eax = MEM32(esi + 0x774984);
    if (TEST_NZ(eax, eax)) goto loc_00139419; /* jne: not equal / not zero */

loc_001393D0: ;
    eax = edx + 0xAE;
    PUSH32(esp, eax);
    PUSH32(esp, 9);
    PUSH32(esp, 0); sub_000FAEE0(); /* call 0x000FAEE0 */

loc_001393DE: ;
    esp = esp + 8;
    if (TEST_Z(eax, eax)) goto loc_00139419; /* je: equal / zero */

loc_001393E5: ;
    MEM32(esi + 0x774984) = eax;
    ecx = MEM32(eax);
    MEM32(esi + 0x774988) = ecx;
    eax = MEM32(eax + 8);
    ecx = MEM32(esi + 0x77497C);
    MEM32(esi + 0x77498C) = eax;
    MEM32(esi + 0x774990) = ecx;
    MEM32(esi + 0x774994) = 0;
    MEM8(edx + 0x77495D) = 1;

loc_00139419: ;
    POP32(esp, esi);
    esp += 4; return; /* ret */

}

/**
 * sub_00139420
 * Original: 0x00139420 - 0x00139454 (52 bytes, 16 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00139420(void)
{
    int _flags = 0; /* fallback flag var */

loc_00139420: ;
    PUSH32(esp, esi);
    esi = edx + edx * 4;
    esi = esi << 2;
    eax = MEM32(esi + 0x774970);
    if (TEST_NZ(eax, eax)) goto loc_00139436; /* jne: not equal / not zero */

loc_00139431: ;
    PUSH32(esp, 0); sub_001394D0(); /* call 0x001394D0 */

loc_00139436: ;
    eax = MEM32(esi + 0x774984);
    if (TEST_NZ(eax, eax)) goto loc_00139452; /* jne: not equal / not zero */

loc_00139440: ;
    edx++;
    PUSH32(esp, 0); sub_001394D0(); /* call 0x001394D0 */

loc_00139446: ;
    eax = MEM32(esi + 0x77497C);
    MEM32(esi + 0x774990) = eax;

loc_00139452: ;
    POP32(esp, esi);
    esp += 4; return; /* ret */

}

/**
 * sub_00139460
 * Original: 0x00139460 - 0x001394CE (110 bytes, 30 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00139460(void)
{
    int _flags = 0; /* fallback flag var */

loc_00139460: ;
    PUSH32(esp, edi);
    edi = edx + edx * 4;
    eax = MEM32(edi * 4 + 0x774970);
    if (TEST_NZ(eax, eax)) goto loc_00139474; /* jne: not equal / not zero */

loc_0013946F: ;
    PUSH32(esp, 0); sub_001394D0(); /* call 0x001394D0 */

loc_00139474: ;
    eax = MEM32(edi * 4 + 0x774970);
    (void)0; /* test eax, eax - flags set for next jcc */
    POP32(esp, edi);
    if (TEST_Z(eax, eax)) goto loc_001394CD; /* je: equal / zero */

loc_00139480: ;
    ecx = esi + esi * 4;
    ecx = ecx << 2;
    eax = MEM32(ecx + 0x774970);
    if (TEST_NZ(eax, eax)) goto loc_001394CD; /* jne: not equal / not zero */

loc_00139490: ;
    eax = esi + 0xAD;
    PUSH32(esp, eax);
    PUSH32(esp, 9);
    PUSH32(esp, 0); sub_000FAEE0(); /* call 0x000FAEE0 */

loc_0013949E: ;
    esp = esp + 8;
    if (TEST_Z(eax, eax)) goto loc_001394CD; /* je: equal / zero */

loc_001394A5: ;
    MEM32(ecx + 0x774970) = eax;
    edx = MEM32(eax);
    MEM32(ecx + 0x774974) = edx;
    eax = MEM32(eax + 8);
    MEM32(ecx + 0x774978) = eax;
    MEM32(ecx + 0x774980) = 0;
    MEM8(esi + 0x77495C) = 1;

loc_001394CD: ;
    esp += 4; return; /* ret */

}

/**
 * sub_001394D0
 * Original: 0x001394D0 - 0x00139516 (70 bytes, 21 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_001394D0(void)
{
    int _flags = 0; /* fallback flag var */

loc_001394D0: ;
    ecx = edx + edx * 4;
    ecx = ecx << 2;
    eax = MEM32(ecx + 0x774970);
    if (TEST_NZ(eax, eax)) goto loc_00139515; /* jne: not equal / not zero */

loc_001394E0: ;
    eax = edx + 0xAD;
    PUSH32(esp, eax);
    PUSH32(esp, 9);
    PUSH32(esp, 0); sub_000FAEE0(); /* call 0x000FAEE0 */

loc_001394EE: ;
    esp = esp + 8;
    if (TEST_Z(eax, eax)) goto loc_00139515; /* je: equal / zero */

loc_001394F5: ;
    PUSH32(esp, esi);
    MEM32(ecx + 0x774970) = eax;
    esi = MEM32(eax);
    MEM32(ecx + 0x774974) = esi;
    eax = MEM32(eax + 8);
    MEM32(ecx + 0x774978) = eax;
    MEM8(edx + 0x77495C) = 1;
    POP32(esp, esi);

loc_00139515: ;
    esp += 4; return; /* ret */

}

/**
 * sub_00139520
 * Original: 0x00139520 - 0x00139528 (8 bytes, 3 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00139520(void)
{
    uint32_t ebp;
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_00139520: ;
    ecx = MEM32(esp + 4);
    eax = 0; /* xor self */
    g_seh_ebp = ebp; sub_00139530(); return; /* tail jmp 0x00139530 */

}
