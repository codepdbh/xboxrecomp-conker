/**
 * Burnout 3 - Recompiled code chunk 11
 * Functions: 250 (0x000F3880 - 0x0010E000)
 */

#define RECOMP_GENERATED_CODE
#include "recomp_funcs.h"
#include <math.h>

/**
 * sub_000F3880
 * Original: 0x000F3880 - 0x000F39E5 (357 bytes, 104 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_000F3880(void)
{
    uint32_t ebp;
    int _flags = 0; /* fallback flag var */
    float xmm0, xmm1, xmm5, xmm6, xmm7;
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_000F3880: ;
    esp = esp - 0x28;
    xmm6 = MEMF(esi + 0x2C); /* movss */
    xmm6 = xmm6 * MEMF(0x648CE0); /* mulss */
    xmm7 = 0.0f; /* xorps self = zero */
    MEMF(esp) = xmm6; /* movss */
    MEMF(esp + 8) = xmm7; /* movss */
    PUSH32(esp, 0); sub_003E2480(); /* call 0x003E2480 */

loc_000F38A3: ;
    ecx = MEM32(esi + 4);
    edx = ((int32_t)eax < 0) ? 0xFFFFFFFF : 0; /* cdq */
    ecx++;
    { int64_t _dividend = ((int64_t)(int32_t)edx << 32) | eax;
      eax = (uint32_t)((int32_t)(_dividend / (int32_t)ecx));
      edx = (uint32_t)((int32_t)(_dividend % (int32_t)ecx)); }
    edx = edx + MEM32(esi);
    if ((edx == 0)) goto loc_000F39E1; /* je: equal / zero */

loc_000F38B2: ;
    PUSH32(esp, ebx);
    PUSH32(esp, ebp);
    PUSH32(esp, edi);
    ebp = esi + 8;
    ebx = edx;
    goto loc_000F38C5;

loc_000F38BC: ;
    xmm7 = 0.0f; /* xorps self = zero */
    xmm6 = MEMF(esp + 0xC); /* movss */

loc_000F38C5: ;
    PUSH32(esp, 0); sub_003E1D70(); /* call 0x003E1D70 */

loc_000F38CA: ;
    xmm5 = MEMF(0x648F60); /* movss */
    xmm0 = xmm0 * xmm5; /* mulss */
    MEMF(esp + 0x1C) = xmm0; /* movss */
    PUSH32(esp, 0); sub_003E1D70(); /* call 0x003E1D70 */

loc_000F38E1: ;
    xmm0 = xmm0 * xmm5; /* mulss */
    MEMF(esp + 0x20) = xmm0; /* movss */
    PUSH32(esp, 0); sub_003E1D70(); /* call 0x003E1D70 */

loc_000F38F0: ;
    xmm0 = xmm0 * xmm5; /* mulss */
    MEMF(esp + 0x24) = xmm0; /* movss */
    PUSH32(esp, 0); sub_003E1D70(); /* call 0x003E1D70 */

loc_000F38FF: ;
    xmm0 = xmm0 * MEMF(esi + 0x28); /* mulss */
    xmm0 = xmm0 + MEMF(esi + 0x24); /* addss */
    PUSH32(esp, ecx);
    MEMF(esp) = xmm0; /* movss */
    PUSH32(esp, 0); sub_003E2480(); /* call 0x003E2480 */

loc_000F3914: ;
    ecx = (uint32_t)(int32_t)SMEM16(esi + 0x22);
    edx = ((int32_t)eax < 0) ? 0xFFFFFFFF : 0; /* cdq */
    ecx++;
    { int64_t _dividend = ((int64_t)(int32_t)edx << 32) | eax;
      eax = (uint32_t)((int32_t)(_dividend / (int32_t)ecx));
      edx = (uint32_t)((int32_t)(_dividend % (int32_t)ecx)); }
    SET_LO16(edx, LO16(edx) + MEM16(esi + 0x20));
    PUSH32(esp, edx);
    PUSH32(esp, 0); sub_003E2480(); /* call 0x003E2480 */

loc_000F3926: ;
    ecx = (uint32_t)(int32_t)SMEM16(esi + 0x1E);
    edx = ((int32_t)eax < 0) ? 0xFFFFFFFF : 0; /* cdq */
    ecx++;
    { int64_t _dividend = ((int64_t)(int32_t)edx << 32) | eax;
      eax = (uint32_t)((int32_t)(_dividend / (int32_t)ecx));
      edx = (uint32_t)((int32_t)(_dividend % (int32_t)ecx)); }
    edi = esp + 0x30;
    SET_LO16(edx, LO16(edx) + MEM16(esi + 0x1C));
    PUSH32(esp, edx);
    PUSH32(esp, 0); sub_00110510(); /* call 0x00110510 */

loc_000F393C: ;
    esp = esp + 0xC;
    PUSH32(esp, 0); sub_003E1D70(); /* call 0x003E1D70 */

loc_000F3944: ;
    xmm1 = xmm7; /* movaps */
    xmm1 = xmm1 - MEMF(esi + 0x2C); /* subss */
    xmm0 = xmm0 * xmm6; /* mulss */
    xmm0 = xmm0 + xmm1; /* addss */
    MEMF(esp + 0x10) = xmm0; /* movss */
    PUSH32(esp, 0); sub_003E1D70(); /* call 0x003E1D70 */

loc_000F395F: ;
    edx = MEM32(esp + 0x3C);
    eax = MEM32(esp + 0x38);
    xmm7 = xmm7 - MEMF(esi + 0x2C); /* subss */
    PUSH32(esp, edx);
    PUSH32(esp, 0);
    xmm0 = xmm0 * xmm6; /* mulss */
    xmm0 = xmm0 + xmm7; /* addss */
    PUSH32(esp, eax);
    MEMF(esp + 0x24) = xmm0; /* movss */
    PUSH32(esp, 0); sub_003E2480(); /* call 0x003E2480 */

loc_000F3983: ;
    ecx = (uint32_t)(int32_t)SMEM16(esi + 0x40);
    edx = ((int32_t)eax < 0) ? 0xFFFFFFFF : 0; /* cdq */
    ecx++;
    { int64_t _dividend = ((int64_t)(int32_t)edx << 32) | eax;
      eax = (uint32_t)((int32_t)(_dividend / (int32_t)ecx));
      edx = (uint32_t)((int32_t)(_dividend % (int32_t)ecx)); }
    eax = MEM32(esi + 0x38);
    SET_LO16(edx, LO16(edx) + MEM16(esi + 0x3E));
    PUSH32(esp, edx);
    edx = 0; /* xor self */
    SET_LO8(edx, MEM8(esi + 0x3C));
    PUSH32(esp, edx);
    PUSH32(esp, eax);
    PUSH32(esp, 0); sub_003E1D70(); /* call 0x003E1D70 */

loc_000F399F: ;
    xmm5 = xmm0; /* movaps */
    xmm5 = xmm5 * MEMF(esi + 0x34); /* mulss */
    xmm5 = xmm5 + MEMF(esi + 0x30); /* addss */
    PUSH32(esp, 0); sub_003E1D70(); /* call 0x003E1D70 */

loc_000F39B1: ;
    xmm0 = xmm0 * MEMF(esi + 0x18); /* mulss */
    xmm0 = xmm0 + MEMF(esi + 0x14); /* addss */
    PUSH32(esp, ecx);
    MEMF(esp) = xmm0; /* movss */
    PUSH32(esp, ebp);
    eax = esp + 0x30;
    ecx = edi;
    edx = esp + 0x3C;
    xmm0 = xmm5; /* movaps */
    PUSH32(esp, 0); sub_00179B40(); /* call 0x00179B40 */

loc_000F39D4: ;
    esp = esp + 0x20;
    ebx--;
    if ((ebx != 0)) goto loc_000F38BC; /* jne: not equal / not zero */

loc_000F39DE: ;
    POP32(esp, edi);
    POP32(esp, ebp);
    POP32(esp, ebx);

loc_000F39E1: ;
    esp = esp + 0x28;
    esp += 4; return; /* ret */

}

/**
 * sub_000F39F0
 * Original: 0x000F39F0 - 0x000F3E5F (1135 bytes, 251 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_000F39F0(void)
{
    uint32_t ebp;
    int _flags = 0; /* fallback flag var */
    float xmm0, xmm1, xmm2, xmm3, xmm4, xmm5, xmm6, xmm7;

loc_000F39F0: ;
    PUSH32(esp, ebp);
    ebp = esp;
    esp = esp & 0xFFFFFFF8u;
    esp = esp - 0x16C;
    PUSH32(esp, ebx);
    ebx = MEM32(ebp + 8);
    PUSH32(esp, esi);
    PUSH32(esp, edi);
    eax = esp + 0x60;
    PUSH32(esp, 0); sub_000AF180(); /* call 0x000AF180 */

loc_000F3A0B: ;
    SET_LO16(eax, MEM16(ebx + 0xEC));
    SET_LO16(ecx, MEM16(ebx + 0xEE));
    edx = MEM32(ebx + 0xB4);
    xmm0 = MEMF(0x648D14); /* movss */
    xmm6 = 0.0f; /* xorps self = zero */
    MEM16(esp + 0xA2) = LO16(ecx);
    ecx = 0; /* xor self */
    MEM16(esp + 0xA0) = LO16(eax);
    SET_LO8(eax, MEM8(ebx + 0xB8));
    MEM32(esp + 0xCC) = ecx;
    MEM32(esp + 0xD8) = ecx;
    MEM32(esp + 0xE0) = ecx;
    MEM8(esp + 0x60) = LO8(eax);
    MEM32(esp + 0xB4) = edx;
    eax = 2;
    ecx = ebx + 4;
    edx = MEM32(ecx);
    MEM32(esp + 0xC0) = eax;
    MEM32(esp + 0xC8) = eax;
    MEM32(esp + 0xDC) = eax;
    eax = MEM32(ecx + 4);
    ecx = MEM32(ecx + 8);
    MEM32(esp + 0x6C) = edx;
    edx = MEM32(ebx + 0xC8);
    MEM32(esp + 0x70) = eax;
    edx = edx | 0x8000000;
    eax = esp + 0x34;
    PUSH32(esp, eax);
    MEM32(esp + 0x78) = ecx;
    ecx = esp + 0x2C;
    MEM32(esp + 0x94) = edx;
    PUSH32(esp, ecx);
    edx = ebx + 0x20;
    MEMF(esp + 0x8C) = xmm0; /* movss */
    MEMF(esp + 0x90) = xmm0; /* movss */
    MEMF(esp + 0x94) = xmm0; /* movss */
    xmm0 = MEMF(ebx + 0xF0); /* movss */
    PUSH32(esp, edx);
    eax = esp + 0x20;
    MEMF(esp + 0xB8) = xmm6; /* movss */
    MEM32(esp + 0xB4) = 0x303;
    MEM8(esp + 0xBC) = 1;
    MEM32(esp + 0xDC) = 4;
    MEMF(esp + 0xC4) = xmm6; /* movss */
    MEMF(esp + 0xC8) = xmm6; /* movss */
    MEMF(esp + 0x5C) = xmm0; /* movss */
    PUSH32(esp, 0); sub_00111040(); /* call 0x00111040 */

loc_000F3B1F: ;
    esp = esp + 0xC;
    if (TEST_Z(LO8(eax), LO8(eax))) goto loc_000F3E58; /* je: equal / zero */

loc_000F3B2A: ;
    esi = esp + 0x28;
    ecx = esp + 0x10;
    edi = esp + 0x20;
    edx = esi;
    PUSH32(esp, 0); sub_001112B0(); /* call 0x001112B0 */

loc_000F3B3D: ;
    esi = esp + 0x34;
    ecx = esp + 0x20;
    edi = esp + 0x10;
    edx = esi;
    PUSH32(esp, 0); sub_001112B0(); /* call 0x001112B0 */

loc_000F3B50: ;
    esi = esp + 0x14;
    ecx = esp + 0x20;
    edi = esp + 0x10;
    edx = esi;
    PUSH32(esp, 0); sub_001112B0(); /* call 0x001112B0 */

loc_000F3B63: ;
    xmm3 = MEMF(ebx + 0x18); /* movss */
    xmm2 = MEMF(esp + 0x1C); /* movss */
    xmm0 = MEMF(ebx + 0x14); /* movss */
    xmm1 = MEMF(esp + 0x18); /* movss */
    xmm4 = MEMF(ebx + 0x10); /* movss */
    xmm3 = xmm3 * xmm2; /* mulss */
    xmm0 = xmm0 * xmm1; /* mulss */
    xmm3 = xmm3 + xmm0; /* addss */
    xmm0 = MEMF(esp + 0x14); /* movss */
    xmm4 = xmm4 * xmm0; /* mulss */
    xmm3 = xmm3 + xmm4; /* addss */
    /* comiss xmm6, xmm3 - sets EFLAGS */
    if ((xmm6 <= xmm3)) goto loc_000F3BBB; /* jbe: below or equal (unsigned <=) */

loc_000F3B9D: ;
    xmm3 = xmm6; /* movaps */
    xmm3 = xmm3 - xmm0; /* subss */
    xmm0 = xmm3; /* movaps */
    xmm3 = xmm6; /* movaps */
    xmm3 = xmm3 - xmm1; /* subss */
    xmm1 = xmm3; /* movaps */
    xmm3 = xmm6; /* movaps */
    xmm3 = xmm3 - xmm2; /* subss */
    xmm2 = xmm3; /* movaps */

loc_000F3BBB: ;
    xmm3 = MEMF(0x59D944); /* movss */
    xmm0 = xmm0 * xmm3; /* mulss */
    xmm1 = xmm1 * xmm3; /* mulss */
    xmm2 = xmm2 * xmm3; /* mulss */
    MEMF(esp + 0x14) = xmm0; /* movss */
    MEMF(esp + 0x18) = xmm1; /* movss */
    MEMF(esp + 0x1C) = xmm2; /* movss */
    MEMF(esp + 0x58) = xmm6; /* movss */
    PUSH32(esp, 0); sub_003E2480(); /* call 0x003E2480 */

loc_000F3BEC: ;
    ecx = (uint32_t)(int32_t)SMEM16(ebx + 2);
    edx = ((int32_t)eax < 0) ? 0xFFFFFFFF : 0; /* cdq */
    ecx++;
    { int64_t _dividend = ((int64_t)(int32_t)edx << 32) | eax;
      eax = (uint32_t)((int32_t)(_dividend / (int32_t)ecx));
      edx = (uint32_t)((int32_t)(_dividend % (int32_t)ecx)); }
    eax = (uint32_t)(int32_t)SMEM16(ebx);
    edx = edx + eax;
    if ((edx == 0)) goto loc_000F3E58; /* je: equal / zero */

loc_000F3BFF: ;
    MEM32(esp + 0x10) = edx;
    goto loc_000F3C10;

loc_000F3C05: ;
    xmm6 = 0.0f; /* xorps self = zero */
    goto loc_000F3C10;

    /* nop */

loc_000F3C10: ;
    ecx = esp + 0x24;
    PUSH32(esp, ecx);
    edx = esp + 0x24;
    PUSH32(esp, edx);
    PUSH32(esp, 0); sub_003E1D70(); /* call 0x003E1D70 */

loc_000F3C1F: ;
    xmm2 = xmm0; /* movaps */
    xmm2 = xmm2 * MEMF(ebx + 0xB0); /* mulss */
    PUSH32(esp, 0); sub_003E2480(); /* call 0x003E2480 */

loc_000F3C2F: ;
    eax = eax & 0xFF;
    PUSH32(esp, eax);
    PUSH32(esp, 0); sub_00110650(); /* call 0x00110650 */

loc_000F3C3A: ;
    esp = esp + 0xC;
    PUSH32(esp, 0); sub_003E1D70(); /* call 0x003E1D70 */

loc_000F3C42: ;
    xmm5 = xmm0; /* movaps */
    xmm5 = xmm5 * MEMF(ebx + 0xDC); /* mulss */
    xmm5 = xmm5 + MEMF(ebx + 0xD8); /* addss */
    PUSH32(esp, 0); sub_003E1D70(); /* call 0x003E1D70 */

loc_000F3C5A: ;
    eax = (uint32_t)(int32_t)SMEM16(ebx + 0xBE);
    ecx = (uint32_t)(int32_t)SMEM16(ebx + 0xBC);
    xmm1 = (float)(int32_t)eax; /* cvtsi2ss */
    xmm0 = xmm0 * xmm1; /* mulss */
    xmm1 = (float)(int32_t)ecx; /* cvtsi2ss */
    xmm0 = xmm0 + xmm1; /* addss */
    edx = (int32_t)xmm0; /* cvttss2si */
    MEM16(esp + 0x62) = LO16(edx);
    PUSH32(esp, 0); sub_003E1D70(); /* call 0x003E1D70 */

loc_000F3C86: ;
    xmm0 = xmm0 * MEMF(ebx + 0xC4); /* mulss */
    xmm0 = xmm0 + MEMF(ebx + 0xC0); /* addss */
    MEMF(esp + 0x68) = xmm0; /* movss */
    MEMF(esp + 0x64) = xmm0; /* movss */
    PUSH32(esp, 0); sub_003E1D70(); /* call 0x003E1D70 */

loc_000F3CA7: ;
    xmm7 = MEMF(0x648F60); /* movss */
    xmm0 = xmm0 * xmm7; /* mulss */
    MEMF(esp + 0x78) = xmm0; /* movss */
    PUSH32(esp, 0); sub_003E1D70(); /* call 0x003E1D70 */

loc_000F3CBE: ;
    xmm0 = xmm0 * xmm7; /* mulss */
    MEMF(esp + 0x7C) = xmm0; /* movss */
    PUSH32(esp, 0); sub_003E1D70(); /* call 0x003E1D70 */

loc_000F3CCD: ;
    xmm0 = xmm0 * xmm7; /* mulss */
    MEMF(esp + 0x80) = xmm0; /* movss */
    PUSH32(esp, 0); sub_003E2480(); /* call 0x003E2480 */

loc_000F3CDF: ;
    ecx = ZX8(MEM8(ebx + 0xCD));
    xmm0 = MEMF(esp + 0x24); /* movss */
    xmm1 = MEMF(esp + 0x20); /* movss */
    edx = ((int32_t)eax < 0) ? 0xFFFFFFFF : 0; /* cdq */
    ecx++;
    { int64_t _dividend = ((int64_t)(int32_t)edx << 32) | eax;
      eax = (uint32_t)((int32_t)(_dividend / (int32_t)ecx));
      edx = (uint32_t)((int32_t)(_dividend % (int32_t)ecx)); }
    SET_LO8(eax, MEM8(ebx + 0xCC));
    xmm2 = xmm0; /* movaps */
    xmm2 = xmm2 * MEMF(esp + 0x34); /* mulss */
    xmm3 = xmm1; /* movaps */
    xmm3 = xmm3 * MEMF(esp + 0x28); /* mulss */
    xmm2 = xmm2 + xmm3; /* addss */
    xmm2 = xmm2 + MEMF(esp + 0x14); /* addss */
    xmm3 = MEMF(esp + 0x2C); /* movss */
    xmm2 = xmm2 * xmm5; /* mulss */
    MEMF(esp + 0x40) = xmm2; /* movss */
    xmm2 = MEMF(esp + 0x38); /* movss */
    xmm2 = xmm2 * xmm0; /* mulss */
    xmm3 = xmm3 * xmm1; /* mulss */
    xmm2 = xmm2 + xmm3; /* addss */
    xmm2 = xmm2 + MEMF(esp + 0x18); /* addss */
    xmm2 = xmm2 * xmm5; /* mulss */
    MEMF(esp + 0x44) = xmm2; /* movss */
    xmm2 = MEMF(esp + 0x3C); /* movss */
    xmm2 = xmm2 * xmm0; /* mulss */
    xmm0 = MEMF(esp + 0x30); /* movss */
    xmm0 = xmm0 * xmm1; /* mulss */
    xmm2 = xmm2 + xmm0; /* addss */
    xmm2 = xmm2 + MEMF(esp + 0x1C); /* addss */
    xmm2 = xmm2 * xmm5; /* mulss */
    MEMF(esp + 0x48) = xmm2; /* movss */
    SET_LO8(edx, LO8(edx) + LO8(eax));
    MEM8(esp + 0xA7) = LO8(edx);
    PUSH32(esp, 0); sub_003E1D70(); /* call 0x003E1D70 */

loc_000F3D80: ;
    xmm0 = xmm0 * MEMF(ebx + 0xD4); /* mulss */
    xmm0 = xmm0 + MEMF(ebx + 0xD0); /* addss */
    MEMF(esp + 0x4C) = xmm0; /* movss */
    PUSH32(esp, 0); sub_003E1D70(); /* call 0x003E1D70 */

loc_000F3D9B: ;
    xmm1 = MEMF(ebx + 0xF4); /* movss */
    xmm5 = MEMF(0x648CE0); /* movss */
    xmm1 = xmm1 * xmm5; /* mulss */
    xmm0 = xmm0 * xmm1; /* mulss */
    xmm1 = xmm6; /* movaps */
    xmm1 = xmm1 - MEMF(ebx + 0xF4); /* subss */
    xmm0 = xmm0 + xmm1; /* addss */
    MEMF(esp + 0x54) = xmm0; /* movss */
    PUSH32(esp, 0); sub_003E1D70(); /* call 0x003E1D70 */

loc_000F3DCD: ;
    edx = MEM32(ebp + 0xC);
    eax = MEM32(ebx + 0xE8);
    xmm1 = MEMF(ebx + 0xF4); /* movss */
    ecx = MEM32(ebx + 0xE4);
    xmm6 = xmm6 - MEMF(ebx + 0xF4); /* subss */
    PUSH32(esp, edx);
    PUSH32(esp, 0x20);
    PUSH32(esp, eax);
    xmm1 = xmm1 * xmm5; /* mulss */
    xmm0 = xmm0 * xmm1; /* mulss */
    xmm0 = xmm0 + xmm6; /* addss */
    PUSH32(esp, ecx);
    MEMF(esp + 0x6C) = xmm0; /* movss */
    PUSH32(esp, 0); sub_003E2480(); /* call 0x003E2480 */

loc_000F3E08: ;
    SET_LO8(eax, LO8(eax) & 1);
    SET_LO8(eax, LO8(eax) << 1);
    MEM8(esp + 0x1F) = LO8(eax);
    PUSH32(esp, 0); sub_003E2480(); /* call 0x003E2480 */

loc_000F3E15: ;
    ecx = 0; /* xor self */
    SET_LO8(ecx, MEM8(esp + 0x1F));
    SET_LO8(eax, LO8(eax) & 1);
    SET_LO8(ecx, LO8(ecx) + LO8(eax));
    eax = esp + 0x70;
    PUSH32(esp, ecx);
    PUSH32(esp, 0x17);
    PUSH32(esp, 0);
    PUSH32(esp, 0);
    PUSH32(esp, 0x19);
    PUSH32(esp, 0x597978);
    PUSH32(esp, 0); sub_00150630(); /* call 0x00150630 */

loc_000F3E36: ;
    esp = esp + 0x28;
    if (TEST_Z(eax, eax)) goto loc_000F3E4E; /* je: equal / zero */

loc_000F3E3D: ;
    edi = eax + 0x310;
    ecx = 8;
    esi = esp + 0x40;
    memcpy((void*)XBOX_PTR(edi), (void*)XBOX_PTR(esi), ecx * 4);
    esi += ecx * 4; edi += ecx * 4; ecx = 0; /* rep movsd */

loc_000F3E4E: ;
    MEM32(esp + 0x10) = MEM32(esp + 0x10) - 1;
    if ((MEM32(esp + 0x10) != 0)) goto loc_000F3C05; /* jne: not equal / not zero */

loc_000F3E58: ;
    POP32(esp, edi);
    POP32(esp, esi);
    POP32(esp, ebx);
    esp = ebp;
    POP32(esp, ebp);
    esp += 4; return; /* ret */

}

/**
 * sub_000F3E60
 * Original: 0x000F3E60 - 0x000F415B (763 bytes, 230 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_000F3E60(void)
{
    uint32_t ebp;
    int _flags = 0; /* fallback flag var */
    float xmm0, xmm1, xmm5, xmm6, xmm7;
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_000F3E60: ;
    esp = esp - 0x54;
    SET_LO16(eax, ZX8(MEM8(esi + 0x3C)));
    SET_LO8(ecx, MEM8(esi + 0x38));
    SET_LO8(edx, MEM8(esi + 0x58));
    xmm7 = 0.0f; /* xorps self = zero */
    MEM8(esp + 0x44) = LO8(ecx);
    MEM16(esp + 0x16) = LO16(eax);
    eax = ZX8(MEM8(esi + 0x3D));
    MEM8(esp + 0x45) = LO8(edx);
    ecx = esi;
    edx = MEM32(ecx);
    MEM32(esp + 0x40) = eax;
    eax = MEM32(ecx + 4);
    ecx = MEM32(ecx + 8);
    MEM32(esp + 8) = edx;
    SET_LO16(edx, MEM16(esi + 0x64));
    MEM32(esp + 0xC) = eax;
    SET_LO16(eax, MEM16(esi + 0x66));
    MEM32(esp + 0x10) = ecx;
    ecx = MEM32(esi + 0x68);
    MEMF(esp + 0x50) = xmm7; /* movss */
    MEM32(esp + 0x18) = 1;
    MEM16(esp + 0x4A) = LO16(edx);
    MEM16(esp + 0x4C) = LO16(eax);
    MEM32(esp + 0x20) = ecx;
    PUSH32(esp, 0); sub_003E2480(); /* call 0x003E2480 */

loc_000F3EC8: ;
    ecx = (uint32_t)(int32_t)SMEM16(esi + 0x26);
    edx = ((int32_t)eax < 0) ? 0xFFFFFFFF : 0; /* cdq */
    ecx++;
    { int64_t _dividend = ((int64_t)(int32_t)edx << 32) | eax;
      eax = (uint32_t)((int32_t)(_dividend / (int32_t)ecx));
      edx = (uint32_t)((int32_t)(_dividend % (int32_t)ecx)); }
    eax = (uint32_t)(int32_t)SMEM16(esi + 0x24);
    xmm1 = MEMF(0x648E5C); /* movss */
    edx = edx + eax;
    eax = MEM32(0x84A144);
    if (TEST_Z(eax, eax)) goto loc_000F3EEF; /* je: equal / zero */

loc_000F3EE7: ;
    xmm1 = MEMF(0x648F38); /* movss */

loc_000F3EEF: ;
    xmm0 = (float)(int32_t)MEM32(0x849428); /* cvtsi2ss */
    xmm0 = xmm0 / xmm1; /* divss */
    xmm1 = MEMF(0x648D14); /* movss */
    /* comiss xmm0, xmm1 - sets EFLAGS */
    if ((xmm0 >= xmm1)) goto loc_000F3F20; /* jae: above or equal (unsigned >=) */

loc_000F3F08: ;
    xmm1 = xmm1 - xmm0; /* subss */
    xmm0 = (float)(int32_t)edx; /* cvtsi2ss */
    xmm1 = xmm1 * xmm0; /* mulss */
    edx = (int32_t)xmm1; /* cvttss2si */
    if (TEST_NZ(edx, edx)) goto loc_000F3F28; /* jne: not equal / not zero */

loc_000F3F1C: ;
    esp = esp + 0x54;
    esp += 4; return; /* ret */

loc_000F3F20: ;
    if (TEST_Z(edx, edx)) goto loc_000F4157; /* je: equal / zero */

loc_000F3F28: ;
    PUSH32(esp, ebx);
    PUSH32(esp, ebp);
    PUSH32(esp, edi);
    ebp = edx;
    goto loc_000F3F32;

loc_000F3F2F: ;
    xmm7 = 0.0f; /* xorps self = zero */

loc_000F3F32: ;
    PUSH32(esp, 0); sub_003E2480(); /* call 0x003E2480 */

loc_000F3F37: ;
    ecx = (uint32_t)(int32_t)SMEM16(esi + 0x2A);
    edx = ((int32_t)eax < 0) ? 0xFFFFFFFF : 0; /* cdq */
    ecx++;
    { int64_t _dividend = ((int64_t)(int32_t)edx << 32) | eax;
      eax = (uint32_t)((int32_t)(_dividend / (int32_t)ecx));
      edx = (uint32_t)((int32_t)(_dividend % (int32_t)ecx)); }
    ebx = edx;
    SET_LO16(ebx, LO16(ebx) + MEM16(esi + 0x28));
    PUSH32(esp, 0); sub_003E2480(); /* call 0x003E2480 */

loc_000F3F4A: ;
    ecx = (uint32_t)(int32_t)SMEM16(esi + 0x2E);
    ecx++;
    edx = ((int32_t)eax < 0) ? 0xFFFFFFFF : 0; /* cdq */
    { int64_t _dividend = ((int64_t)(int32_t)edx << 32) | eax;
      eax = (uint32_t)((int32_t)(_dividend / (int32_t)ecx));
      edx = (uint32_t)((int32_t)(_dividend % (int32_t)ecx)); }
    ecx = 0; /* xor self */
    SET_LO16(edx, LO16(edx) + MEM16(esi + 0x2C));
    SET_LO8(ecx, LO8(edx));
    SET_LO8(eax, LO8(edx));
    SET_LO8(eax, LO8(eax) & 0xC0);
    ecx = ecx & 0x3F;
    if (TEST_Z(LO8(edx), 0x40)) goto loc_000F3F6F; /* je: equal / zero */

loc_000F3F66: ;
    edi = 0x40;
    edi = edi - ecx;
    goto loc_000F3F71;

loc_000F3F6F: ;
    edi = ecx;

loc_000F3F71: ;
    if (TEST_Z(LO8(eax), LO8(eax))) goto loc_000F3F87; /* je: equal / zero */

loc_000F3F75: ;
    if (CMP_EQ(LO8(eax), 0xC0)) goto loc_000F3F87; /* je: equal / zero */

loc_000F3F79: ;
    xmm6 = xmm7; /* movaps */
    xmm6 = xmm6 - MEMF(edi * 4 + 0x743090); /* subss */
    goto loc_000F3F90;

loc_000F3F87: ;
    xmm6 = MEMF(edi * 4 + 0x743090); /* movss */

loc_000F3F90: ;
    SET_LO8(edx, LO8(edx) - 0x40);
    SET_LO8(eax, LO8(edx));
    SET_LO8(eax, LO8(eax) & 0xC0);
    if (TEST_Z(LO8(edx), 0x40)) goto loc_000F3FA8; /* je: equal / zero */

loc_000F3F9C: ;
    edx = edx & 0x3F;
    ecx = 0x40;
    ecx = ecx - edx;
    goto loc_000F3FAD;

loc_000F3FA8: ;
    edx = edx & 0x3F;
    ecx = edx;

loc_000F3FAD: ;
    if (TEST_Z(LO8(eax), LO8(eax))) goto loc_000F3FC3; /* je: equal / zero */

loc_000F3FB1: ;
    if (CMP_EQ(LO8(eax), 0xC0)) goto loc_000F3FC3; /* je: equal / zero */

loc_000F3FB5: ;
    xmm0 = xmm7; /* movaps */
    xmm0 = xmm0 - MEMF(ecx * 4 + 0x743090); /* subss */
    goto loc_000F3FCC;

loc_000F3FC3: ;
    xmm0 = MEMF(ecx * 4 + 0x743090); /* movss */

loc_000F3FCC: ;
    SET_LO8(ecx, LO8(ebx));
    SET_LO8(ecx, LO8(ecx) & 0xC0);
    (void)0; /* test LO8(ebx), 0x40 - flags set for next jcc */
    MEMF(esp + 0xC) = xmm0; /* movss */
    if (TEST_Z(LO8(ebx), 0x40)) goto loc_000F3FEC; /* je: equal / zero */

loc_000F3FDC: ;
    edx = 0; /* xor self */
    SET_LO8(edx, LO8(ebx));
    eax = 0x40;
    edx = edx & 0x3F;
    eax = eax - edx;
    goto loc_000F3FF3;

loc_000F3FEC: ;
    eax = 0; /* xor self */
    SET_LO8(eax, LO8(ebx));
    eax = eax & 0x3F;

loc_000F3FF3: ;
    if (TEST_Z(LO8(ecx), LO8(ecx))) goto loc_000F400A; /* je: equal / zero */

loc_000F3FF7: ;
    if (CMP_EQ(LO8(ecx), 0xC0)) goto loc_000F400A; /* je: equal / zero */

loc_000F3FFC: ;
    xmm0 = xmm7; /* movaps */
    xmm0 = xmm0 - MEMF(eax * 4 + 0x743090); /* subss */
    goto loc_000F4013;

loc_000F400A: ;
    xmm0 = MEMF(eax * 4 + 0x743090); /* movss */

loc_000F4013: ;
    SET_LO8(ebx, LO8(ebx) - 0x40);
    eax = 0; /* xor self */
    SET_LO8(eax, LO8(ebx));
    SET_LO8(ecx, LO8(eax));
    SET_LO8(ecx, LO8(ecx) & 0xC0);
    (void)0; /* test LO8(eax), 0x40 - flags set for next jcc */
    MEMF(esp + 0x10) = xmm0; /* movss */
    if (TEST_Z(LO8(eax), 0x40)) goto loc_000F4035; /* je: equal / zero */

loc_000F4029: ;
    eax = eax & 0x3F;
    edx = 0x40;
    edx = edx - eax;
    goto loc_000F403A;

loc_000F4035: ;
    eax = eax & 0x3F;
    edx = eax;

loc_000F403A: ;
    if (TEST_Z(LO8(ecx), LO8(ecx))) goto loc_000F404C; /* je: equal / zero */

loc_000F403E: ;
    (void)0; /* cmp LO8(ecx), 0xC0 - flags set for next jcc */
    xmm7 = xmm7 - MEMF(edx * 4 + 0x743090); /* subss */
    if (CMP_NE(LO8(ecx), 0xC0)) goto loc_000F4055; /* jne: not equal / not zero */

loc_000F404C: ;
    xmm7 = MEMF(edx * 4 + 0x743090); /* movss */

loc_000F4055: ;
    PUSH32(esp, 0); sub_003E1D70(); /* call 0x003E1D70 */

loc_000F405A: ;
    xmm5 = xmm0; /* movaps */
    xmm5 = xmm5 * MEMF(esi + 0x20); /* mulss */
    xmm5 = xmm5 + MEMF(esi + 0x1C); /* addss */
    PUSH32(esp, 0); sub_003E2480(); /* call 0x003E2480 */

loc_000F406C: ;
    ecx = ZX8(MEM8(esi + 0x5A));
    edx = ((int32_t)eax < 0) ? 0xFFFFFFFF : 0; /* cdq */
    ecx++;
    { int64_t _dividend = ((int64_t)(int32_t)edx << 32) | eax;
      eax = (uint32_t)((int32_t)(_dividend / (int32_t)ecx));
      edx = (uint32_t)((int32_t)(_dividend % (int32_t)ecx)); }
    SET_LO8(ebx, MEM8(esi + 0x59));
    MEM8(esp + 0x52) = 0xFF;
    MEM8(esp + 0x53) = 0xFF;
    MEM8(esp + 0x54) = 0xFF;
    SET_LO8(edx, LO8(edx) + LO8(ebx));
    MEM8(esp + 0x55) = LO8(edx);
    PUSH32(esp, 0); sub_003E2480(); /* call 0x003E2480 */

loc_000F4091: ;
    ecx = (uint32_t)(int32_t)SMEM16(esi + 0x32);
    edx = ((int32_t)eax < 0) ? 0xFFFFFFFF : 0; /* cdq */
    ecx++;
    { int64_t _dividend = ((int64_t)(int32_t)edx << 32) | eax;
      eax = (uint32_t)((int32_t)(_dividend / (int32_t)ecx));
      edx = (uint32_t)((int32_t)(_dividend % (int32_t)ecx)); }
    SET_LO8(edx, LO8(edx) + MEM8(esi + 0x30));
    MEM8(esp + 0x29) = LO8(edx);
    PUSH32(esp, 0); sub_003E2480(); /* call 0x003E2480 */

loc_000F40A5: ;
    ecx = (uint32_t)(int32_t)SMEM16(esi + 0x36);
    edx = ((int32_t)eax < 0) ? 0xFFFFFFFF : 0; /* cdq */
    ecx++;
    { int64_t _dividend = ((int64_t)(int32_t)edx << 32) | eax;
      eax = (uint32_t)((int32_t)(_dividend / (int32_t)ecx));
      edx = (uint32_t)((int32_t)(_dividend % (int32_t)ecx)); }
    SET_LO16(edx, LO16(edx) + MEM16(esi + 0x34));
    MEM16(esp + 0x20) = LO16(edx);
    PUSH32(esp, 0); sub_003E1D70(); /* call 0x003E1D70 */

loc_000F40BB: ;
    xmm0 = xmm0 * MEMF(esi + 0x10); /* mulss */
    xmm0 = xmm0 + MEMF(esi + 0xC); /* addss */
    MEMF(esp + 0x34) = xmm0; /* movss */
    PUSH32(esp, 0); sub_003E1D70(); /* call 0x003E1D70 */

loc_000F40D0: ;
    edx = MEM32(esp + 0x64);
    eax = MEM32(esi + 0x54);
    ecx = MEM32(esi + 0x50);
    xmm0 = xmm0 * MEMF(esi + 0x18); /* mulss */
    xmm0 = xmm0 + MEMF(esi + 0x14); /* addss */
    PUSH32(esp, edx);
    edx = MEM32(esi + 0x4C);
    xmm1 = 0.0f; /* xorps self = zero */
    PUSH32(esp, 0);
    PUSH32(esp, 0);
    PUSH32(esp, 0);
    PUSH32(esp, eax);
    eax = MEM32(esi + 0x48);
    PUSH32(esp, ecx);
    ecx = MEM32(esi + 0x44);
    PUSH32(esp, edx);
    edx = MEM32(esi + 0x40);
    PUSH32(esp, eax);
    MEMF(esp + 0x64) = xmm0; /* movss */
    PUSH32(esp, ecx);
    xmm0 = xmm5; /* movaps */
    xmm0 = xmm0 * xmm7; /* mulss */
    xmm0 = xmm0 * xmm6; /* mulss */
    PUSH32(esp, edx);
    MEMF(esp + 0x60) = xmm0; /* movss */
    xmm0 = xmm5; /* movaps */
    xmm0 = xmm0 * MEMF(esp + 0x34); /* mulss */
    xmm5 = xmm5 * MEMF(esp + 0x38); /* mulss */
    eax = esp + 0x5C;
    PUSH32(esp, 0);
    xmm1 = xmm1 - xmm0; /* subss */
    xmm5 = xmm5 * xmm6; /* mulss */
    PUSH32(esp, eax);
    ecx = esp + 0x44;
    MEMF(esp + 0x6C) = xmm1; /* movss */
    MEMF(esp + 0x70) = xmm5; /* movss */
    PUSH32(esp, 0); sub_0017AA40(); /* call 0x0017AA40 */

loc_000F414A: ;
    esp = esp + 0x30;
    ebp--;
    if ((ebp != 0)) goto loc_000F3F2F; /* jne: not equal / not zero */

loc_000F4154: ;
    POP32(esp, edi);
    POP32(esp, ebp);
    POP32(esp, ebx);

loc_000F4157: ;
    esp = esp + 0x54;
    esp += 4; return; /* ret */

}

/**
 * sub_000F4160
 * Original: 0x000F4160 - 0x000F4550 (1008 bytes, 220 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_000F4160(void)
{
    uint32_t ebp;
    int _flags = 0; /* fallback flag var */
    float xmm0, xmm1, xmm2, xmm3, xmm4, xmm5, xmm6;

loc_000F4160: ;
    PUSH32(esp, ebp);
    ebp = esp;
    esp = esp & 0xFFFFFFF8u;
    esp = esp - 0x10C;
    PUSH32(esp, ebx);
    ebx = MEM32(ebp + 8);
    PUSH32(esp, esi);
    PUSH32(esp, edi);
    eax = esp + 0x28;
    PUSH32(esp, eax);
    ecx = esp + 0x38;
    PUSH32(esp, ecx);
    edx = ebx + 0x20;
    PUSH32(esp, edx);
    eax = esp + 0x1C;
    PUSH32(esp, 0); sub_00111040(); /* call 0x00111040 */

loc_000F4189: ;
    esp = esp + 0xC;
    if (TEST_Z(LO8(eax), LO8(eax))) goto loc_000F4549; /* je: equal / zero */

loc_000F4194: ;
    esi = esp + 0x34;
    ecx = esp + 0x24;
    edi = esp + 0x1C;
    edx = esi;
    PUSH32(esp, 0); sub_001112B0(); /* call 0x001112B0 */

loc_000F41A7: ;
    esi = esp + 0x28;
    ecx = esp + 0x1C;
    edi = esp + 0x24;
    edx = esi;
    PUSH32(esp, 0); sub_001112B0(); /* call 0x001112B0 */

loc_000F41BA: ;
    esi = esp + 0x10;
    ecx = esp + 0x1C;
    edi = esp + 0x24;
    edx = esi;
    PUSH32(esp, 0); sub_001112B0(); /* call 0x001112B0 */

loc_000F41CD: ;
    xmm3 = MEMF(ebx + 0x1C); /* movss */
    xmm2 = MEMF(esp + 0x18); /* movss */
    xmm0 = MEMF(ebx + 0x18); /* movss */
    xmm1 = MEMF(esp + 0x14); /* movss */
    xmm4 = MEMF(ebx + 0x14); /* movss */
    xmm6 = 0.0f; /* xorps self = zero */
    xmm3 = xmm3 * xmm2; /* mulss */
    xmm0 = xmm0 * xmm1; /* mulss */
    xmm3 = xmm3 + xmm0; /* addss */
    xmm0 = MEMF(esp + 0x10); /* movss */
    xmm4 = xmm4 * xmm0; /* mulss */
    xmm3 = xmm3 + xmm4; /* addss */
    /* comiss xmm6, xmm3 - sets EFLAGS */
    if ((xmm6 <= xmm3)) goto loc_000F4228; /* jbe: below or equal (unsigned <=) */

loc_000F420A: ;
    xmm3 = xmm6; /* movaps */
    xmm3 = xmm3 - xmm0; /* subss */
    xmm0 = xmm3; /* movaps */
    xmm3 = xmm6; /* movaps */
    xmm3 = xmm3 - xmm1; /* subss */
    xmm1 = xmm3; /* movaps */
    xmm3 = xmm6; /* movaps */
    xmm3 = xmm3 - xmm2; /* subss */
    xmm2 = xmm3; /* movaps */

loc_000F4228: ;
    xmm3 = MEMF(0x59D944); /* movss */
    eax = ebx + 8;
    ecx = MEM32(eax);
    edx = MEM32(eax + 4);
    eax = MEM32(eax + 8);
    xmm0 = xmm0 * xmm3; /* mulss */
    MEMF(esp + 0x10) = xmm0; /* movss */
    xmm0 = MEMF(0x648D14); /* movss */
    xmm1 = xmm1 * xmm3; /* mulss */
    xmm2 = xmm2 * xmm3; /* mulss */
    MEMF(esp + 0x14) = xmm1; /* movss */
    MEMF(esp + 0x18) = xmm2; /* movss */
    MEMF(esp + 0x40) = xmm0; /* movss */
    MEMF(esp + 0x44) = xmm0; /* movss */
    MEMF(esp + 0x68) = xmm0; /* movss */
    MEMF(esp + 0x6C) = xmm0; /* movss */
    MEMF(esp + 0x70) = xmm0; /* movss */
    MEM32(esp + 0x74) = ecx;
    MEM32(esp + 0x78) = edx;
    MEM32(esp + 0x7C) = eax;
    MEMF(esp + 0x9C) = xmm6; /* movss */
    MEM32(esp + 0xA8) = 0x29E8;
    PUSH32(esp, 0); sub_003E2480(); /* call 0x003E2480 */

loc_000F42A4: ;
    ecx = MEM32(ebx + 4);
    edx = ((int32_t)eax < 0) ? 0xFFFFFFFF : 0; /* cdq */
    ecx++;
    { int64_t _dividend = ((int64_t)(int32_t)edx << 32) | eax;
      eax = (uint32_t)((int32_t)(_dividend / (int32_t)ecx));
      edx = (uint32_t)((int32_t)(_dividend % (int32_t)ecx)); }
    eax = MEM32(ebx);
    MEM8(esp + 0xB4) = 0;
    MEM8(esp + 0xBC) = 0xFF;
    MEM32(esp + 0xC0) = 0x157100;
    MEM32(esp + 0xD8) = 0x13E6E0;
    MEM32(esp + 0xDC) = 0x13EC40;
    MEM16(esp + 0xEE) = 0xC;
    MEM16(esp + 0xF0) = 0x15;
    edx = edx + eax;
    eax = 0;
    MEM32(esp + 0xB8) = eax;
    MEM32(esp + 0xC4) = eax;
    MEM32(esp + 0xC8) = eax;
    MEM32(esp + 0xCC) = eax;
    MEM32(esp + 0xD0) = eax;
    MEM32(esp + 0xD4) = eax;
    MEM8(esp + 0xE4) = LO8(eax);
    MEM32(esp + 0xE8) = eax;
    MEM8(esp + 0xEC) = LO8(eax);
    if ((edx == 0)) goto loc_000F4549; /* je: equal / zero */

loc_000F433E: ;
    edi = edx;
    goto loc_000F4345;

loc_000F4342: ;
    xmm6 = 0.0f; /* xorps self = zero */

loc_000F4345: ;
    PUSH32(esp, 0); sub_003E1D70(); /* call 0x003E1D70 */

loc_000F434A: ;
    edx = esp + 0x20;
    PUSH32(esp, edx);
    eax = esp + 0x20;
    xmm5 = xmm0; /* movaps */
    xmm5 = xmm5 * MEMF(ebx + 0xB8); /* mulss */
    xmm5 = xmm5 + MEMF(ebx + 0xB4); /* addss */
    PUSH32(esp, eax);
    PUSH32(esp, 0); sub_003E1D70(); /* call 0x003E1D70 */

loc_000F436C: ;
    xmm2 = xmm0; /* movaps */
    xmm2 = xmm2 * MEMF(ebx + 0xB0); /* mulss */
    PUSH32(esp, 0); sub_003E2480(); /* call 0x003E2480 */

loc_000F437C: ;
    eax = eax & 0xFF;
    PUSH32(esp, eax);
    PUSH32(esp, 0); sub_00110650(); /* call 0x00110650 */

loc_000F4387: ;
    xmm0 = MEMF(esp + 0x2C); /* movss */
    xmm1 = MEMF(esp + 0x28); /* movss */
    xmm2 = xmm0; /* movaps */
    xmm2 = xmm2 * MEMF(esp + 0x34); /* mulss */
    xmm3 = xmm1; /* movaps */
    xmm3 = xmm3 * MEMF(esp + 0x40); /* mulss */
    xmm2 = xmm2 + xmm3; /* addss */
    xmm2 = xmm2 + MEMF(esp + 0x1C); /* addss */
    xmm3 = MEMF(esp + 0x44); /* movss */
    xmm2 = xmm2 * xmm5; /* mulss */
    MEMF(esp + 0x98) = xmm2; /* movss */
    xmm2 = MEMF(esp + 0x38); /* movss */
    xmm2 = xmm2 * xmm0; /* mulss */
    xmm3 = xmm3 * xmm1; /* mulss */
    xmm2 = xmm2 + xmm3; /* addss */
    xmm2 = xmm2 + MEMF(esp + 0x20); /* addss */
    xmm2 = xmm2 * xmm5; /* mulss */
    MEMF(esp + 0x9C) = xmm2; /* movss */
    xmm2 = MEMF(esp + 0x3C); /* movss */
    xmm2 = xmm2 * xmm0; /* mulss */
    xmm0 = MEMF(esp + 0x48); /* movss */
    xmm0 = xmm0 * xmm1; /* mulss */
    xmm2 = xmm2 + xmm0; /* addss */
    xmm2 = xmm2 + MEMF(esp + 0x24); /* addss */
    xmm2 = xmm2 * xmm5; /* mulss */
    MEMF(esp + 0xA0) = xmm2; /* movss */
    PUSH32(esp, 0); sub_003E1D70(); /* call 0x003E1D70 */

loc_000F4417: ;
    xmm5 = MEMF(0x648F60); /* movss */
    xmm0 = xmm0 * xmm5; /* mulss */
    MEMF(esp + 0x5C) = xmm0; /* movss */
    PUSH32(esp, 0); sub_003E1D70(); /* call 0x003E1D70 */

loc_000F442E: ;
    xmm0 = xmm0 * xmm5; /* mulss */
    MEMF(esp + 0x60) = xmm0; /* movss */
    PUSH32(esp, 0); sub_003E1D70(); /* call 0x003E1D70 */

loc_000F443D: ;
    xmm0 = xmm0 * xmm5; /* mulss */
    MEMF(esp + 0x64) = xmm0; /* movss */
    PUSH32(esp, 0); sub_003E2480(); /* call 0x003E2480 */

loc_000F444C: ;
    edx = ((int32_t)eax < 0) ? 0xFFFFFFFF : 0; /* cdq */
    { int64_t _dividend = ((int64_t)(int32_t)edx << 32) | eax;
      eax = (uint32_t)((int32_t)(_dividend / (int32_t)MEM32(ebp + 0x14)));
      edx = (uint32_t)((int32_t)(_dividend % (int32_t)MEM32(ebp + 0x14))); }
    ecx = MEM32(ebp + 0xC);
    esi = edx;
    edx = MEM32(ecx + esi * 4);
    MEM32(esp + 0xBC) = edx;
    PUSH32(esp, 0); sub_003E1D70(); /* call 0x003E1D70 */

loc_000F4464: ;
    xmm0 = xmm0 * MEMF(ebx + 0xCC); /* mulss */
    eax = MEM32(ebp + 0x10);
    xmm0 = xmm0 + MEMF(ebx + 0xC8); /* addss */
    xmm0 = xmm0 * MEMF(eax + esi * 4); /* mulss */
    MEMF(esp + 0x58) = xmm0; /* movss */
    MEMF(esp + 0x54) = xmm0; /* movss */
    PUSH32(esp, 0); sub_003E1D70(); /* call 0x003E1D70 */

loc_000F448D: ;
    xmm1 = MEMF(ebx + 0xD0); /* movss */
    xmm5 = MEMF(0x648CE0); /* movss */
    xmm1 = xmm1 * xmm5; /* mulss */
    xmm0 = xmm0 * xmm1; /* mulss */
    xmm1 = xmm6; /* movaps */
    xmm1 = xmm1 - MEMF(ebx + 0xD0); /* subss */
    xmm0 = xmm0 + xmm1; /* addss */
    MEMF(esp + 0xA4) = xmm0; /* movss */
    PUSH32(esp, 0); sub_003E1D70(); /* call 0x003E1D70 */

loc_000F44C2: ;
    xmm1 = MEMF(ebx + 0xD0); /* movss */
    xmm6 = xmm6 - MEMF(ebx + 0xD0); /* subss */
    xmm1 = xmm1 * xmm5; /* mulss */
    xmm0 = xmm0 * xmm1; /* mulss */
    xmm0 = xmm0 + xmm6; /* addss */
    MEMF(esp + 0xAC) = xmm0; /* movss */
    PUSH32(esp, 0); sub_003E1D70(); /* call 0x003E1D70 */

loc_000F44EC: ;
    xmm0 = xmm0 * MEMF(ebx + 0xC0); /* mulss */
    xmm0 = xmm0 + MEMF(ebx + 0xBC); /* addss */
    MEMF(esp + 0xB0) = xmm0; /* movss */
    PUSH32(esp, 0); sub_003E2480(); /* call 0x003E2480 */

loc_000F450A: ;
    ecx = (uint32_t)(int32_t)SMEM16(ebx + 0xC6);
    edx = ((int32_t)eax < 0) ? 0xFFFFFFFF : 0; /* cdq */
    ecx++;
    { int64_t _dividend = ((int64_t)(int32_t)edx << 32) | eax;
      eax = (uint32_t)((int32_t)(_dividend / (int32_t)ecx));
      edx = (uint32_t)((int32_t)(_dividend % (int32_t)ecx)); }
    ecx = MEM32(ebp + 0x18);
    eax = (uint32_t)(int32_t)SMEM16(ebx + 0xC4);
    PUSH32(esp, 0);
    PUSH32(esp, ecx);
    PUSH32(esp, 0);
    PUSH32(esp, 0);
    PUSH32(esp, 0x7F);
    PUSH32(esp, 3);
    PUSH32(esp, 0);
    edx = edx + eax;
    MEM32(esp + 0xD4) = edx;
    edx = esp + 0x68;
    PUSH32(esp, edx);
    PUSH32(esp, 0); sub_0013D5D0(); /* call 0x0013D5D0 */

loc_000F453F: ;
    esp = esp + 0x2C;
    edi--;
    if ((edi != 0)) goto loc_000F4342; /* jne: not equal / not zero */

loc_000F4549: ;
    POP32(esp, edi);
    POP32(esp, esi);
    POP32(esp, ebx);
    esp = ebp;
    POP32(esp, ebp);
    esp += 4; return; /* ret */

}

/**
 * sub_000F4550
 * Original: 0x000F4550 - 0x000F459E (78 bytes, 29 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_000F4550(void)
{
    uint32_t ebp;
    int _flags = 0; /* fallback flag var */

loc_000F4550: ;
    PUSH32(esp, ebp);
    ebp = esp;
    esp = esp & 0xFFFFFFF0u;
    esp = esp - 0x128;
    ecx = MEM32(ebp + 8);
    (void)0; /* cmp MEM32(ecx), 4 - flags set for next jcc */
    PUSH32(esp, ebx);
    PUSH32(esp, edi);
    if (CMP_NE(MEM32(ecx), 4)) { sub_000F459E(); return; } /* jne: not equal / not zero */

loc_000F4566: ;
    edx = MEM32(esi + 0x10);
    eax = MEM32(esi + 0xC);
    ecx = MEM32(esi + 8);
    PUSH32(esp, edx);
    PUSH32(esp, eax);
    PUSH32(esp, ecx);
    eax = esp + 0xFC;
    PUSH32(esp, 0); sub_004288F5(); /* call 0x004288F5 */

loc_000F457E: ;
    PUSH32(esp, 0xBF800000u);
    PUSH32(esp, 0xBF800000u);
    edx = eax;
    PUSH32(esp, 0x5F3A18);
    PUSH32(esp, edx);
    PUSH32(esp, 0); sub_001DD750(); /* call 0x001DD750 */

loc_000F4595: ;
    esp = esp + 0x10;
    POP32(esp, edi);
    POP32(esp, ebx);
    esp = ebp;
    POP32(esp, ebp);
    esp += 4; return; /* ret */

}

/**
 * sub_000F4860
 * Original: 0x000F4860 - 0x000F4A5D (509 bytes, 135 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_000F4860(void)
{
    uint32_t ebp;
    int _flags = 0; /* fallback flag var */
    float xmm0, xmm5;
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_000F4860: ;
    esp = esp - 0x74;
    PUSH32(esp, ebp);
    ebp = MEM32(esp + 0x7C);
    SET_LO8(eax, MEM8(ebp + 0x70));
    ecx = MEM32(ebp + 0x34);
    edx = MEM32(ebp + 0x38);
    xmm0 = MEMF(ebp + 0x24); /* movss */
    SET_LO8(eax, LO8(eax) | 2);
    MEM8(esp + 0x40) = LO8(eax);
    SET_LO8(eax, LO8(eax) | 0xFF);
    MEM8(esp + 0x43) = LO8(eax);
    MEM8(esp + 0x44) = LO8(eax);
    MEM32(esp + 0x48) = ecx;
    eax = ebp + 8;
    ecx = MEM32(eax);
    MEM32(esp + 0x4C) = edx;
    edx = MEM32(eax + 4);
    eax = MEM32(eax + 8);
    MEM32(esp + 0x64) = ecx;
    ecx = MEM32(ebp + 0x68);
    MEM32(esp + 0x68) = edx;
    edx = MEM32(ebp + 0x6C);
    MEM32(esp + 0x6C) = eax;
    SET_LO16(eax, MEM16(ebp + 0x72));
    MEM32(esp + 0x50) = ecx;
    SET_LO16(ecx, MEM16(ebp + 0x74));
    MEM32(esp + 0x54) = edx;
    SET_LO8(edx, MEM8(ebp + 0x71));
    MEM8(esp + 0x58) = 0;
    MEM8(esp + 0x41) = 0;
    MEM8(esp + 0x42) = 1;
    MEM32(esp + 0x5C) = 0;
    MEM8(esp + 0x60) = 0;
    MEM8(esp + 0x61) = 2;
    MEMF(esp + 0x38) = xmm0; /* movss */
    MEM16(esp + 0x74) = LO16(eax);
    MEM16(esp + 0x76) = LO16(ecx);
    MEM8(esp + 0x3C) = LO8(edx);
    PUSH32(esp, 0); sub_003E2480(); /* call 0x003E2480 */

loc_000F48F8: ;
    ecx = MEM32(ebp + 4);
    edx = ((int32_t)eax < 0) ? 0xFFFFFFFF : 0; /* cdq */
    ecx++;
    { int64_t _dividend = ((int64_t)(int32_t)edx << 32) | eax;
      eax = (uint32_t)((int32_t)(_dividend / (int32_t)ecx));
      edx = (uint32_t)((int32_t)(_dividend % (int32_t)ecx)); }
    edx = edx + MEM32(ebp);
    if ((edx == 0)) goto loc_000F4A58; /* je: equal / zero */

loc_000F4908: ;
    PUSH32(esp, esi);
    MEM32(esp + 8) = edx;
    PUSH32(esp, edi);
    edi = edi;

loc_000F4910: ;
    PUSH32(esp, 0); sub_003E2480(); /* call 0x003E2480 */

loc_000F4915: ;
    ecx = (uint32_t)(int32_t)SMEM16(ebp + 0x32);
    edx = ((int32_t)eax < 0) ? 0xFFFFFFFF : 0; /* cdq */
    ecx++;
    { int64_t _dividend = ((int64_t)(int32_t)edx << 32) | eax;
      eax = (uint32_t)((int32_t)(_dividend / (int32_t)ecx));
      edx = (uint32_t)((int32_t)(_dividend % (int32_t)ecx)); }
    SET_LO16(edx, LO16(edx) + MEM16(ebp + 0x30));
    MEM16(esp + 0x4E) = LO16(edx);
    PUSH32(esp, 0); sub_003E1D70(); /* call 0x003E1D70 */

loc_000F492B: ;
    xmm5 = MEMF(0x648F60); /* movss */
    xmm0 = xmm0 * xmm5; /* mulss */
    MEMF(esp + 0x14) = xmm0; /* movss */
    PUSH32(esp, 0); sub_003E1D70(); /* call 0x003E1D70 */

loc_000F4942: ;
    xmm0 = xmm0 * xmm5; /* mulss */
    MEMF(esp + 0x18) = xmm0; /* movss */
    PUSH32(esp, 0); sub_003E1D70(); /* call 0x003E1D70 */

loc_000F4951: ;
    xmm0 = xmm0 * xmm5; /* mulss */
    MEMF(esp + 0x1C) = xmm0; /* movss */
    PUSH32(esp, 0); sub_003E1D70(); /* call 0x003E1D70 */

loc_000F4960: ;
    xmm0 = xmm0 * MEMF(ebp + 0x4C); /* mulss */
    xmm0 = xmm0 + MEMF(ebp + 0x48); /* addss */
    MEMF(esp + 0x20) = xmm0; /* movss */
    PUSH32(esp, 0); sub_003E1D70(); /* call 0x003E1D70 */

loc_000F4975: ;
    xmm0 = xmm0 * MEMF(ebp + 0x20); /* mulss */
    xmm0 = xmm0 + MEMF(ebp + 0x1C); /* addss */
    PUSH32(esp, ecx);
    MEMF(esp) = xmm0; /* movss */
    PUSH32(esp, 0); sub_003E2480(); /* call 0x003E2480 */

loc_000F498A: ;
    ecx = (uint32_t)(int32_t)SMEM16(ebp + 0x1A);
    edx = ((int32_t)eax < 0) ? 0xFFFFFFFF : 0; /* cdq */
    ecx++;
    { int64_t _dividend = ((int64_t)(int32_t)edx << 32) | eax;
      eax = (uint32_t)((int32_t)(_dividend / (int32_t)ecx));
      edx = (uint32_t)((int32_t)(_dividend % (int32_t)ecx)); }
    SET_LO16(edx, LO16(edx) + MEM16(ebp + 0x18));
    PUSH32(esp, edx);
    PUSH32(esp, 0); sub_003E2480(); /* call 0x003E2480 */

loc_000F499C: ;
    ecx = (uint32_t)(int32_t)SMEM16(ebp + 0x16);
    edx = ((int32_t)eax < 0) ? 0xFFFFFFFF : 0; /* cdq */
    ecx++;
    { int64_t _dividend = ((int64_t)(int32_t)edx << 32) | eax;
      eax = (uint32_t)((int32_t)(_dividend / (int32_t)ecx));
      edx = (uint32_t)((int32_t)(_dividend % (int32_t)ecx)); }
    edi = esp + 0x2C;
    SET_LO16(edx, LO16(edx) + MEM16(ebp + 0x14));
    PUSH32(esp, edx);
    PUSH32(esp, 0); sub_00110510(); /* call 0x00110510 */

loc_000F49B2: ;
    PUSH32(esp, 0); sub_003E1D70(); /* call 0x003E1D70 */

loc_000F49B7: ;
    xmm0 = xmm0 * MEMF(ebp + 0x5C); /* mulss */
    xmm0 = xmm0 + MEMF(ebp + 0x50); /* addss */
    MEMF(esp + 0x3C) = xmm0; /* movss */
    PUSH32(esp, 0); sub_003E1D70(); /* call 0x003E1D70 */

loc_000F49CC: ;
    xmm0 = xmm0 * MEMF(ebp + 0x60); /* mulss */
    xmm0 = xmm0 + MEMF(ebp + 0x54); /* addss */
    MEMF(esp + 0x40) = xmm0; /* movss */
    PUSH32(esp, 0); sub_003E1D70(); /* call 0x003E1D70 */

loc_000F49E1: ;
    xmm0 = xmm0 * MEMF(ebp + 0x64); /* mulss */
    xmm0 = xmm0 + MEMF(ebp + 0x58); /* addss */
    MEMF(esp + 0x44) = xmm0; /* movss */
    PUSH32(esp, 0); sub_003E1D70(); /* call 0x003E1D70 */

loc_000F49F6: ;
    xmm0 = xmm0 * MEMF(ebp + 0x2C); /* mulss */
    xmm0 = xmm0 + MEMF(ebp + 0x28); /* addss */
    MEMF(esp + 0x48) = xmm0; /* movss */
    PUSH32(esp, 0); sub_003E1D70(); /* call 0x003E1D70 */

loc_000F4A0B: ;
    xmm0 = xmm0 * MEMF(ebp + 0x44); /* mulss */
    xmm0 = xmm0 + MEMF(ebp + 0x40); /* addss */
    eax = MEM32(ebp + 0x3C);
    PUSH32(esp, ebx);
    PUSH32(esp, 0x34);
    PUSH32(esp, 0);
    MEMF(esp + 0x28) = xmm0; /* movss */
    edx = MEM32(esp + 0x28);
    PUSH32(esp, 0);
    PUSH32(esp, edx);
    PUSH32(esp, eax);
    eax = esp + 0x6C;
    PUSH32(esp, 0); sub_000A65B0(); /* call 0x000A65B0 */

loc_000F4A34: ;
    esp = esp + 0x24;
    if (TEST_Z(eax, eax)) goto loc_000F4A4C; /* je: equal / zero */

loc_000F4A3B: ;
    edi = eax + 0xE0;
    ecx = 0xD;
    esi = esp + 0x14;
    memcpy((void*)XBOX_PTR(edi), (void*)XBOX_PTR(esi), ecx * 4);
    esi += ecx * 4; edi += ecx * 4; ecx = 0; /* rep movsd */

loc_000F4A4C: ;
    MEM32(esp + 0xC) = MEM32(esp + 0xC) - 1;
    if ((MEM32(esp + 0xC) != 0)) goto loc_000F4910; /* jne: not equal / not zero */

loc_000F4A56: ;
    POP32(esp, edi);
    POP32(esp, esi);

loc_000F4A58: ;
    POP32(esp, ebp);
    esp = esp + 0x74;
    esp += 4; return; /* ret */

}

/**
 * sub_000F4A60
 * Original: 0x000F4A60 - 0x000F4B95 (309 bytes, 93 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_000F4A60(void)
{
    uint32_t ebp;
    int _flags = 0; /* fallback flag var */
    float xmm0;
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_000F4A60: ;
    esp = esp - 0x34;
    PUSH32(esp, 0); sub_003E2480(); /* call 0x003E2480 */

loc_000F4A68: ;
    ecx = MEM32(esi + 4);
    edx = ((int32_t)eax < 0) ? 0xFFFFFFFF : 0; /* cdq */
    ecx++;
    { int64_t _dividend = ((int64_t)(int32_t)edx << 32) | eax;
      eax = (uint32_t)((int32_t)(_dividend / (int32_t)ecx));
      edx = (uint32_t)((int32_t)(_dividend % (int32_t)ecx)); }
    eax = MEM32(esi);
    xmm0 = MEMF(esi + 0x24); /* movss */
    MEMF(esp + 0x18) = xmm0; /* movss */
    xmm0 = MEMF(esi + 0x48); /* movss */
    MEMF(esp + 0x30) = xmm0; /* movss */
    edx = edx + eax;
    eax = esi + 8;
    ecx = MEM32(eax);
    MEM32(esp) = ecx;
    ecx = MEM32(eax + 4);
    eax = MEM32(eax + 8);
    MEM32(esp + 4) = ecx;
    MEM32(esp + 8) = eax;
    if ((edx == 0)) goto loc_000F4B91; /* je: equal / zero */

loc_000F4AA5: ;
    PUSH32(esp, ebx);
    PUSH32(esp, ebp);
    PUSH32(esp, edi);
    ebp = edx;
    SET_LO8(ebx, 0xFF);
    /* nop */

loc_000F4AB0: ;
    PUSH32(esp, 0); sub_003E1D70(); /* call 0x003E1D70 */

loc_000F4AB5: ;
    xmm0 = xmm0 * MEMF(esi + 0x20); /* mulss */
    xmm0 = xmm0 + MEMF(esi + 0x1C); /* addss */
    PUSH32(esp, ecx);
    MEMF(esp) = xmm0; /* movss */
    PUSH32(esp, 0); sub_003E2480(); /* call 0x003E2480 */

loc_000F4ACA: ;
    ecx = (uint32_t)(int32_t)SMEM16(esi + 0x1A);
    edx = ((int32_t)eax < 0) ? 0xFFFFFFFF : 0; /* cdq */
    ecx++;
    { int64_t _dividend = ((int64_t)(int32_t)edx << 32) | eax;
      eax = (uint32_t)((int32_t)(_dividend / (int32_t)ecx));
      edx = (uint32_t)((int32_t)(_dividend % (int32_t)ecx)); }
    SET_LO16(edx, LO16(edx) + MEM16(esi + 0x18));
    PUSH32(esp, edx);
    PUSH32(esp, 0); sub_003E2480(); /* call 0x003E2480 */

loc_000F4ADC: ;
    ecx = (uint32_t)(int32_t)SMEM16(esi + 0x16);
    edx = ((int32_t)eax < 0) ? 0xFFFFFFFF : 0; /* cdq */
    ecx++;
    { int64_t _dividend = ((int64_t)(int32_t)edx << 32) | eax;
      eax = (uint32_t)((int32_t)(_dividend / (int32_t)ecx));
      edx = (uint32_t)((int32_t)(_dividend % (int32_t)ecx)); }
    edi = esp + 0x20;
    SET_LO16(edx, LO16(edx) + MEM16(esi + 0x14));
    PUSH32(esp, edx);
    PUSH32(esp, 0); sub_00110510(); /* call 0x00110510 */

loc_000F4AF2: ;
    esp = esp + 0xC;
    PUSH32(esp, 0); sub_003E1D70(); /* call 0x003E1D70 */

loc_000F4AFA: ;
    xmm0 = xmm0 * MEMF(esi + 0x2C); /* mulss */
    xmm0 = xmm0 + MEMF(esi + 0x28); /* addss */
    MEMF(esp + 0x28) = xmm0; /* movss */
    PUSH32(esp, 0); sub_003E2480(); /* call 0x003E2480 */

loc_000F4B0F: ;
    ecx = (uint32_t)(int32_t)SMEM16(esi + 0x34);
    edx = ((int32_t)eax < 0) ? 0xFFFFFFFF : 0; /* cdq */
    ecx++;
    { int64_t _dividend = ((int64_t)(int32_t)edx << 32) | eax;
      eax = (uint32_t)((int32_t)(_dividend / (int32_t)ecx));
      edx = (uint32_t)((int32_t)(_dividend % (int32_t)ecx)); }
    eax = (uint32_t)(int32_t)SMEM16(esi + 0x32);
    edx = edx + eax;
    MEM32(esp + 0x30) = edx;
    PUSH32(esp, 0); sub_003E1D70(); /* call 0x003E1D70 */

loc_000F4B26: ;
    xmm0 = xmm0 * MEMF(esi + 0x40); /* mulss */
    xmm0 = xmm0 + MEMF(esi + 0x38); /* addss */
    MEMF(esp + 0x34) = xmm0; /* movss */
    PUSH32(esp, 0); sub_003E1D70(); /* call 0x003E1D70 */

loc_000F4B3B: ;
    SET_LO8(eax, MEM8(esi + 0x30));
    (void)0; /* cmp LO8(eax), 0xFF - flags set for next jcc */
    xmm0 = xmm0 * MEMF(esi + 0x44); /* mulss */
    xmm0 = xmm0 + MEMF(esi + 0x3C); /* addss */
    MEMF(esp + 0x38) = xmm0; /* movss */
    if (CMP_EQ(LO8(eax), 0xFF)) goto loc_000F4B66; /* je: equal / zero */

loc_000F4B52: ;
    edx = esp + 0x2C;
    ecx = SX8(LO8(eax));
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, edx);
    PUSH32(esp, 0); RECOMP_ICALL_SAFE(MEM32(ecx * 4 + 0x6B3F8C), _icall_esp); /* indirect call */
    }

loc_000F4B61: ;
    esp = esp + 4;
    goto loc_000F4B76;

loc_000F4B66: ;
    MEM8(esp + 0x2E) = LO8(ebx);
    MEM8(esp + 0x2D) = LO8(ebx);
    MEM8(esp + 0x2C) = LO8(ebx);
    MEM8(esp + 0x2F) = LO8(ebx);

loc_000F4B76: ;
    eax = MEM32(esp + 0x44);
    PUSH32(esp, eax);
    eax = esp + 0x10;
    PUSH32(esp, 0); sub_00153790(); /* call 0x00153790 */

loc_000F4B84: ;
    esp = esp + 4;
    ebp--;
    if ((ebp != 0)) goto loc_000F4AB0; /* jne: not equal / not zero */

loc_000F4B8E: ;
    POP32(esp, edi);
    POP32(esp, ebp);
    POP32(esp, ebx);

loc_000F4B91: ;
    esp = esp + 0x34;
    esp += 4; return; /* ret */

}

/**
 * sub_000F4BA0
 * Original: 0x000F4BA0 - 0x000F4BE6 (70 bytes, 21 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_000F4BA0(void)
{

loc_000F4BA0: ;
    PUSH32(esp, esi);
    PUSH32(esp, 0); sub_003E2480(); /* call 0x003E2480 */

loc_000F4BA6: ;
    edx = ((int32_t)eax < 0) ? 0xFFFFFFFF : 0; /* cdq */
    ecx = 5;
    { int64_t _dividend = ((int64_t)(int32_t)edx << 32) | eax;
      eax = (uint32_t)((int32_t)(_dividend / (int32_t)ecx));
      edx = (uint32_t)((int32_t)(_dividend % (int32_t)ecx)); }
    esi = ZX8(LO8(edx));
    PUSH32(esp, 0); sub_003E2480(); /* call 0x003E2480 */

loc_000F4BB6: ;
    edx = ((int32_t)eax < 0) ? 0xFFFFFFFF : 0; /* cdq */
    ecx = 0x65;
    { int64_t _dividend = ((int64_t)(int32_t)edx << 32) | eax;
      eax = (uint32_t)((int32_t)(_dividend / (int32_t)ecx));
      edx = (uint32_t)((int32_t)(_dividend % (int32_t)ecx)); }
    eax = MEM32(esp + 8);
    SET_LO8(edx, LO8(edx) - LO8(ecx));
    MEM8(eax + 3) = LO8(edx);
    SET_LO8(edx, MEM8(esi + esi * 2 + 0x59577C));
    MEM8(eax + 2) = LO8(edx);
    SET_LO8(ecx, MEM8(esi + esi * 2 + 0x59577D));
    MEM8(eax + 1) = LO8(ecx);
    SET_LO8(edx, MEM8(esi + esi * 2 + 0x59577E));
    MEM8(eax) = LO8(edx);
    POP32(esp, esi);
    esp += 4; return; /* ret */

}

/**
 * sub_000F4BF0
 * Original: 0x000F4BF0 - 0x000F4E3C (588 bytes, 185 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_000F4BF0(void)
{
    uint32_t ebp;
    int _flags = 0; /* fallback flag var */
    float xmm0;
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_000F4BF0: ;
    esp = esp - 0x5C;
    PUSH32(esp, ebx);
    SET_LO8(ebx, MEM8(esp + 0x68));
    PUSH32(esp, ebp);
    ebp = MEM32(esp + 0x68);
    PUSH32(esp, 0); sub_003E2480(); /* call 0x003E2480 */

loc_000F4C02: ;
    ecx = MEM32(ebp + 4);
    edx = ((int32_t)eax < 0) ? 0xFFFFFFFF : 0; /* cdq */
    ecx++;
    { int64_t _dividend = ((int64_t)(int32_t)edx << 32) | eax;
      eax = (uint32_t)((int32_t)(_dividend / (int32_t)ecx));
      edx = (uint32_t)((int32_t)(_dividend % (int32_t)ecx)); }
    eax = MEM32(ebp);
    xmm0 = MEMF(ebp + 0x68); /* movss */
    MEM32(esp + 0x18) = 0xA;
    MEMF(esp + 0x5C) = xmm0; /* movss */
    edx = edx + eax;
    eax = ebp + 8;
    ecx = MEM32(eax);
    MEM32(esp + 8) = ecx;
    ecx = MEM32(eax + 4);
    eax = MEM32(eax + 8);
    MEM32(esp + 0xC) = ecx;
    SET_LO16(ecx, MEM16(ebp + 0x40));
    MEM32(esp + 0x10) = eax;
    SET_LO8(eax, MEM8(ebp + 0x42));
    MEM16(esp + 0x16) = LO16(ecx);
    SET_LO8(ecx, MEM8(ebp + 0x43));
    MEM8(esp + 0x3C) = LO8(eax);
    SET_LO8(eax, MEM8(ebp + 0x44));
    MEM8(esp + 0x3D) = LO8(ecx);
    ecx = MEM32(ebp + 0x58);
    MEM8(esp + 0x3E) = LO8(eax);
    eax = MEM32(ebp + 0x5C);
    MEM32(esp + 0x4C) = ecx;
    SET_LO16(ecx, MEM16(ebp + 0x60));
    MEM32(esp + 0x50) = eax;
    SET_LO16(eax, MEM16(ebp + 0x62));
    MEM16(esp + 0x54) = LO16(ecx);
    SET_LO8(ecx, MEM8(ebp + 0x6C));
    MEM16(esp + 0x56) = LO16(eax);
    SET_LO8(eax, MEM8(ebp + 0x6D));
    MEM8(esp + 0x60) = LO8(ecx);
    SET_LO16(ecx, MEM16(ebp + 0x64));
    MEM8(esp + 0x61) = LO8(eax);
    SET_LO8(eax, MEM8(ebp + 0x66));
    MEM16(esp + 0x58) = LO16(ecx);
    MEM8(esp + 0x5A) = LO8(eax);
    if ((edx == 0)) goto loc_000F4E36; /* je: equal / zero */

loc_000F4C9A: ;
    PUSH32(esp, esi);
    MEM32(esp + 0x6C) = edx;
    PUSH32(esp, edi);

loc_000F4CA0: ;
    PUSH32(esp, 0); sub_003E2480(); /* call 0x003E2480 */

loc_000F4CA5: ;
    ecx = MEM32(ebp + 0x38);
    edx = ((int32_t)eax < 0) ? 0xFFFFFFFF : 0; /* cdq */
    ecx++;
    { int64_t _dividend = ((int64_t)(int32_t)edx << 32) | eax;
      eax = (uint32_t)((int32_t)(_dividend / (int32_t)ecx));
      edx = (uint32_t)((int32_t)(_dividend % (int32_t)ecx)); }
    SET_LO8(edx, LO8(edx) + MEM8(ebp + 0x34));
    MEM8(esp + 0x25) = LO8(edx);
    PUSH32(esp, 0); sub_003E2480(); /* call 0x003E2480 */

loc_000F4CB8: ;
    ecx = (uint32_t)(int32_t)SMEM16(ebp + 0x3E);
    edx = ((int32_t)eax < 0) ? 0xFFFFFFFF : 0; /* cdq */
    ecx++;
    { int64_t _dividend = ((int64_t)(int32_t)edx << 32) | eax;
      eax = (uint32_t)((int32_t)(_dividend / (int32_t)ecx));
      edx = (uint32_t)((int32_t)(_dividend % (int32_t)ecx)); }
    SET_LO16(edx, LO16(edx) + MEM16(ebp + 0x3C));
    MEM16(esp + 0x1C) = LO16(edx);
    PUSH32(esp, 0); sub_003E1D70(); /* call 0x003E1D70 */

loc_000F4CCE: ;
    xmm0 = xmm0 * MEMF(ebp + 0x18); /* mulss */
    xmm0 = xmm0 + MEMF(ebp + 0x14); /* addss */
    MEMF(esp + 0x30) = xmm0; /* movss */
    PUSH32(esp, 0); sub_003E1D70(); /* call 0x003E1D70 */

loc_000F4CE3: ;
    xmm0 = xmm0 * MEMF(ebp + 0x20); /* mulss */
    xmm0 = xmm0 + MEMF(ebp + 0x1C); /* addss */
    MEMF(esp + 0x40) = xmm0; /* movss */
    PUSH32(esp, 0); sub_003E1D70(); /* call 0x003E1D70 */

loc_000F4CF8: ;
    xmm0 = xmm0 * MEMF(ebp + 0x28); /* mulss */
    xmm0 = xmm0 + MEMF(ebp + 0x24); /* addss */
    PUSH32(esp, ecx);
    MEMF(esp) = xmm0; /* movss */
    PUSH32(esp, 0); sub_003E2480(); /* call 0x003E2480 */

loc_000F4D0D: ;
    ecx = (uint32_t)(int32_t)SMEM16(ebp + 0x32);
    edx = ((int32_t)eax < 0) ? 0xFFFFFFFF : 0; /* cdq */
    ecx++;
    { int64_t _dividend = ((int64_t)(int32_t)edx << 32) | eax;
      eax = (uint32_t)((int32_t)(_dividend / (int32_t)ecx));
      edx = (uint32_t)((int32_t)(_dividend % (int32_t)ecx)); }
    SET_LO16(edx, LO16(edx) + MEM16(ebp + 0x30));
    PUSH32(esp, edx);
    PUSH32(esp, 0); sub_003E2480(); /* call 0x003E2480 */

loc_000F4D1F: ;
    ecx = (uint32_t)(int32_t)SMEM16(ebp + 0x2E);
    edx = ((int32_t)eax < 0) ? 0xFFFFFFFF : 0; /* cdq */
    ecx++;
    { int64_t _dividend = ((int64_t)(int32_t)edx << 32) | eax;
      eax = (uint32_t)((int32_t)(_dividend / (int32_t)ecx));
      edx = (uint32_t)((int32_t)(_dividend % (int32_t)ecx)); }
    edi = esp + 0x3C;
    SET_LO16(edx, LO16(edx) + MEM16(ebp + 0x2C));
    PUSH32(esp, edx);
    PUSH32(esp, 0); sub_00110510(); /* call 0x00110510 */

loc_000F4D35: ;
    PUSH32(esp, 0); sub_003E2480(); /* call 0x003E2480 */

loc_000F4D3A: ;
    ecx = ZX8(MEM8(ebp + 0x4B));
    edx = ((int32_t)eax < 0) ? 0xFFFFFFFF : 0; /* cdq */
    ecx++;
    { int64_t _dividend = ((int64_t)(int32_t)edx << 32) | eax;
      eax = (uint32_t)((int32_t)(_dividend / (int32_t)ecx));
      edx = (uint32_t)((int32_t)(_dividend % (int32_t)ecx)); }
    SET_LO8(edx, LO8(edx) + MEM8(ebp + 0x47));
    MEM8(esp + 0x55) = LO8(edx);
    PUSH32(esp, 0); sub_003E2480(); /* call 0x003E2480 */

loc_000F4D4E: ;
    ecx = ZX8(MEM8(ebp + 0x4A));
    edx = ((int32_t)eax < 0) ? 0xFFFFFFFF : 0; /* cdq */
    ecx++;
    { int64_t _dividend = ((int64_t)(int32_t)edx << 32) | eax;
      eax = (uint32_t)((int32_t)(_dividend / (int32_t)ecx));
      edx = (uint32_t)((int32_t)(_dividend % (int32_t)ecx)); }
    SET_LO8(edx, LO8(edx) + MEM8(ebp + 0x46));
    MEM8(esp + 0x54) = LO8(edx);
    PUSH32(esp, 0); sub_003E2480(); /* call 0x003E2480 */

loc_000F4D62: ;
    ecx = ZX8(MEM8(ebp + 0x49));
    edx = ((int32_t)eax < 0) ? 0xFFFFFFFF : 0; /* cdq */
    ecx++;
    { int64_t _dividend = ((int64_t)(int32_t)edx << 32) | eax;
      eax = (uint32_t)((int32_t)(_dividend / (int32_t)ecx));
      edx = (uint32_t)((int32_t)(_dividend % (int32_t)ecx)); }
    SET_LO8(edx, LO8(edx) + MEM8(ebp + 0x45));
    MEM8(esp + 0x53) = LO8(edx);
    PUSH32(esp, 0); sub_003E2480(); /* call 0x003E2480 */

loc_000F4D76: ;
    ecx = ZX8(MEM8(ebp + 0x4C));
    edx = ((int32_t)eax < 0) ? 0xFFFFFFFF : 0; /* cdq */
    ecx++;
    { int64_t _dividend = ((int64_t)(int32_t)edx << 32) | eax;
      eax = (uint32_t)((int32_t)(_dividend / (int32_t)ecx));
      edx = (uint32_t)((int32_t)(_dividend % (int32_t)ecx)); }
    SET_LO8(edx, LO8(edx) + MEM8(ebp + 0x48));
    MEM8(esp + 0x56) = LO8(edx);
    PUSH32(esp, 0); sub_003E2480(); /* call 0x003E2480 */

loc_000F4D8A: ;
    ecx = ZX8(MEM8(ebp + 0x53));
    edx = ((int32_t)eax < 0) ? 0xFFFFFFFF : 0; /* cdq */
    ecx++;
    { int64_t _dividend = ((int64_t)(int32_t)edx << 32) | eax;
      eax = (uint32_t)((int32_t)(_dividend / (int32_t)ecx));
      edx = (uint32_t)((int32_t)(_dividend % (int32_t)ecx)); }
    SET_LO8(edx, LO8(edx) + MEM8(ebp + 0x4F));
    MEM8(esp + 0x59) = LO8(edx);
    PUSH32(esp, 0); sub_003E2480(); /* call 0x003E2480 */

loc_000F4D9E: ;
    ecx = ZX8(MEM8(ebp + 0x52));
    edx = ((int32_t)eax < 0) ? 0xFFFFFFFF : 0; /* cdq */
    ecx++;
    { int64_t _dividend = ((int64_t)(int32_t)edx << 32) | eax;
      eax = (uint32_t)((int32_t)(_dividend / (int32_t)ecx));
      edx = (uint32_t)((int32_t)(_dividend % (int32_t)ecx)); }
    SET_LO8(edx, LO8(edx) + MEM8(ebp + 0x4E));
    MEM8(esp + 0x58) = LO8(edx);
    PUSH32(esp, 0); sub_003E2480(); /* call 0x003E2480 */

loc_000F4DB2: ;
    ecx = ZX8(MEM8(ebp + 0x51));
    edx = ((int32_t)eax < 0) ? 0xFFFFFFFF : 0; /* cdq */
    ecx++;
    { int64_t _dividend = ((int64_t)(int32_t)edx << 32) | eax;
      eax = (uint32_t)((int32_t)(_dividend / (int32_t)ecx));
      edx = (uint32_t)((int32_t)(_dividend % (int32_t)ecx)); }
    SET_LO8(edx, LO8(edx) + MEM8(ebp + 0x4D));
    MEM8(esp + 0x57) = LO8(edx);
    PUSH32(esp, 0); sub_003E2480(); /* call 0x003E2480 */

loc_000F4DC6: ;
    ecx = ZX8(MEM8(ebp + 0x54));
    edx = ((int32_t)eax < 0) ? 0xFFFFFFFF : 0; /* cdq */
    ecx++;
    { int64_t _dividend = ((int64_t)(int32_t)edx << 32) | eax;
      eax = (uint32_t)((int32_t)(_dividend / (int32_t)ecx));
      edx = (uint32_t)((int32_t)(_dividend % (int32_t)ecx)); }
    SET_LO8(edx, LO8(edx) + MEM8(ebp + 0x50));
    MEM8(esp + 0x5A) = LO8(edx);
    PUSH32(esp, 0); sub_003E2480(); /* call 0x003E2480 */

loc_000F4DDA: ;
    ecx = ZX8(MEM8(ebp + 0x56));
    edx = ((int32_t)eax < 0) ? 0xFFFFFFFF : 0; /* cdq */
    ecx++;
    { int64_t _dividend = ((int64_t)(int32_t)edx << 32) | eax;
      eax = (uint32_t)((int32_t)(_dividend / (int32_t)ecx));
      edx = (uint32_t)((int32_t)(_dividend % (int32_t)ecx)); }
    SET_LO8(ecx, MEM8(ebp + 0x55));
    PUSH32(esp, 0);
    PUSH32(esp, 0);
    PUSH32(esp, 0);
    PUSH32(esp, 8);
    PUSH32(esp, 8);
    PUSH32(esp, 8);
    PUSH32(esp, 0x10);
    eax = 0x3C;
    MEM32(esp + 0x48) = 0xA;
    SET_LO8(edx, LO8(edx) + LO8(ecx));
    MEM8(esp + 0x77) = LO8(edx);
    edx = esp + 0x38;
    PUSH32(esp, edx);
    SET_LO8(edx, LO8(ebx));
    PUSH32(esp, 0); sub_0017A580(); /* call 0x0017A580 */

loc_000F4E12: ;
    esp = esp + 0x2C;
    if (TEST_Z(eax, eax)) goto loc_000F4E2A; /* je: equal / zero */

loc_000F4E19: ;
    edi = MEM32(eax + 0x144);
    ecx = 0xF;
    esi = esp + 0x30;
    memcpy((void*)XBOX_PTR(edi), (void*)XBOX_PTR(esi), ecx * 4);
    esi += ecx * 4; edi += ecx * 4; ecx = 0; /* rep movsd */

loc_000F4E2A: ;
    MEM32(esp + 0x70) = MEM32(esp + 0x70) - 1;
    if ((MEM32(esp + 0x70) != 0)) goto loc_000F4CA0; /* jne: not equal / not zero */

loc_000F4E34: ;
    POP32(esp, edi);
    POP32(esp, esi);

loc_000F4E36: ;
    POP32(esp, ebp);
    POP32(esp, ebx);
    esp = esp + 0x5C;
    esp += 4; return; /* ret */

}

/**
 * sub_000F4E40
 * Original: 0x000F4E40 - 0x000F5114 (724 bytes, 220 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_000F4E40(void)
{
    uint32_t ebp;
    int _flags = 0; /* fallback flag var */
    float xmm0, xmm1, xmm5, xmm6, xmm7;
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_000F4E40: ;
    esp = esp - 0x54;
    SET_LO8(ecx, MEM8(esi + 0x58));
    edx = ZX8(MEM8(esi + 0x3C));
    xmm7 = 0.0f; /* xorps self = zero */
    eax = 1;
    MEM32(esp + 0x18) = eax;
    MEM16(esp + 0x16) = LO16(eax);
    SET_LO8(eax, MEM8(esi + 0x38));
    MEM8(esp + 0x44) = LO8(eax);
    SET_LO8(eax, MEM8(esi + 0x59));
    MEM8(esp + 0x45) = LO8(ecx);
    MEM8(esp + 0x49) = LO8(eax);
    SET_LO8(eax, 0xFF);
    MEM32(esp + 0x40) = edx;
    ecx = esi;
    edx = MEM32(ecx);
    MEM8(esp + 0x46) = LO8(eax);
    MEM8(esp + 0x47) = LO8(eax);
    MEM8(esp + 0x48) = LO8(eax);
    eax = MEM32(ecx + 4);
    ecx = MEM32(ecx + 8);
    MEMF(esp + 0x50) = xmm7; /* movss */
    MEM32(esp + 8) = edx;
    MEM32(esp + 0xC) = eax;
    MEM32(esp + 0x10) = ecx;
    PUSH32(esp, 0); sub_003E2480(); /* call 0x003E2480 */

loc_000F4EA0: ;
    ecx = (uint32_t)(int32_t)SMEM16(esi + 0x26);
    edx = ((int32_t)eax < 0) ? 0xFFFFFFFF : 0; /* cdq */
    ecx++;
    { int64_t _dividend = ((int64_t)(int32_t)edx << 32) | eax;
      eax = (uint32_t)((int32_t)(_dividend / (int32_t)ecx));
      edx = (uint32_t)((int32_t)(_dividend % (int32_t)ecx)); }
    eax = (uint32_t)(int32_t)SMEM16(esi + 0x24);
    xmm1 = MEMF(0x648E5C); /* movss */
    edx = edx + eax;
    eax = MEM32(0x84A144);
    if (TEST_Z(eax, eax)) goto loc_000F4EC7; /* je: equal / zero */

loc_000F4EBF: ;
    xmm1 = MEMF(0x648F38); /* movss */

loc_000F4EC7: ;
    xmm0 = (float)(int32_t)MEM32(0x849428); /* cvtsi2ss */
    xmm0 = xmm0 / xmm1; /* divss */
    xmm1 = MEMF(0x648D14); /* movss */
    /* comiss xmm0, xmm1 - sets EFLAGS */
    if ((xmm0 >= xmm1)) goto loc_000F4EF8; /* jae: above or equal (unsigned >=) */

loc_000F4EE0: ;
    xmm1 = xmm1 - xmm0; /* subss */
    xmm0 = (float)(int32_t)edx; /* cvtsi2ss */
    xmm1 = xmm1 * xmm0; /* mulss */
    edx = (int32_t)xmm1; /* cvttss2si */
    if (TEST_NZ(edx, edx)) goto loc_000F4F00; /* jne: not equal / not zero */

loc_000F4EF4: ;
    esp = esp + 0x54;
    esp += 4; return; /* ret */

loc_000F4EF8: ;
    if (TEST_Z(edx, edx)) goto loc_000F5110; /* je: equal / zero */

loc_000F4F00: ;
    PUSH32(esp, ebx);
    PUSH32(esp, ebp);
    PUSH32(esp, edi);
    ebp = edx;
    goto loc_000F4F10;

loc_000F4F07: ;
    xmm7 = 0.0f; /* xorps self = zero */
    /* nop */

loc_000F4F10: ;
    PUSH32(esp, 0); sub_003E2480(); /* call 0x003E2480 */

loc_000F4F15: ;
    ecx = (uint32_t)(int32_t)SMEM16(esi + 0x2A);
    edx = ((int32_t)eax < 0) ? 0xFFFFFFFF : 0; /* cdq */
    ecx++;
    { int64_t _dividend = ((int64_t)(int32_t)edx << 32) | eax;
      eax = (uint32_t)((int32_t)(_dividend / (int32_t)ecx));
      edx = (uint32_t)((int32_t)(_dividend % (int32_t)ecx)); }
    ebx = edx;
    SET_LO16(ebx, LO16(ebx) + MEM16(esi + 0x28));
    PUSH32(esp, 0); sub_003E2480(); /* call 0x003E2480 */

loc_000F4F28: ;
    ecx = (uint32_t)(int32_t)SMEM16(esi + 0x2E);
    ecx++;
    edx = ((int32_t)eax < 0) ? 0xFFFFFFFF : 0; /* cdq */
    { int64_t _dividend = ((int64_t)(int32_t)edx << 32) | eax;
      eax = (uint32_t)((int32_t)(_dividend / (int32_t)ecx));
      edx = (uint32_t)((int32_t)(_dividend % (int32_t)ecx)); }
    ecx = 0; /* xor self */
    SET_LO16(edx, LO16(edx) + MEM16(esi + 0x2C));
    SET_LO8(ecx, LO8(edx));
    SET_LO8(eax, LO8(edx));
    SET_LO8(eax, LO8(eax) & 0xC0);
    ecx = ecx & 0x3F;
    if (TEST_Z(LO8(edx), 0x40)) goto loc_000F4F4D; /* je: equal / zero */

loc_000F4F44: ;
    edi = 0x40;
    edi = edi - ecx;
    goto loc_000F4F4F;

loc_000F4F4D: ;
    edi = ecx;

loc_000F4F4F: ;
    if (TEST_Z(LO8(eax), LO8(eax))) goto loc_000F4F65; /* je: equal / zero */

loc_000F4F53: ;
    if (CMP_EQ(LO8(eax), 0xC0)) goto loc_000F4F65; /* je: equal / zero */

loc_000F4F57: ;
    xmm6 = xmm7; /* movaps */
    xmm6 = xmm6 - MEMF(edi * 4 + 0x743090); /* subss */
    goto loc_000F4F6E;

loc_000F4F65: ;
    xmm6 = MEMF(edi * 4 + 0x743090); /* movss */

loc_000F4F6E: ;
    SET_LO8(edx, LO8(edx) - 0x40);
    SET_LO8(eax, LO8(edx));
    SET_LO8(eax, LO8(eax) & 0xC0);
    if (TEST_Z(LO8(edx), 0x40)) goto loc_000F4F86; /* je: equal / zero */

loc_000F4F7A: ;
    edx = edx & 0x3F;
    ecx = 0x40;
    ecx = ecx - edx;
    goto loc_000F4F8B;

loc_000F4F86: ;
    edx = edx & 0x3F;
    ecx = edx;

loc_000F4F8B: ;
    if (TEST_Z(LO8(eax), LO8(eax))) goto loc_000F4FA1; /* je: equal / zero */

loc_000F4F8F: ;
    if (CMP_EQ(LO8(eax), 0xC0)) goto loc_000F4FA1; /* je: equal / zero */

loc_000F4F93: ;
    xmm0 = xmm7; /* movaps */
    xmm0 = xmm0 - MEMF(ecx * 4 + 0x743090); /* subss */
    goto loc_000F4FAA;

loc_000F4FA1: ;
    xmm0 = MEMF(ecx * 4 + 0x743090); /* movss */

loc_000F4FAA: ;
    SET_LO8(ecx, LO8(ebx));
    SET_LO8(ecx, LO8(ecx) & 0xC0);
    (void)0; /* test LO8(ebx), 0x40 - flags set for next jcc */
    MEMF(esp + 0xC) = xmm0; /* movss */
    if (TEST_Z(LO8(ebx), 0x40)) goto loc_000F4FCA; /* je: equal / zero */

loc_000F4FBA: ;
    edx = 0; /* xor self */
    SET_LO8(edx, LO8(ebx));
    eax = 0x40;
    edx = edx & 0x3F;
    eax = eax - edx;
    goto loc_000F4FD1;

loc_000F4FCA: ;
    eax = 0; /* xor self */
    SET_LO8(eax, LO8(ebx));
    eax = eax & 0x3F;

loc_000F4FD1: ;
    if (TEST_Z(LO8(ecx), LO8(ecx))) goto loc_000F4FE8; /* je: equal / zero */

loc_000F4FD5: ;
    if (CMP_EQ(LO8(ecx), 0xC0)) goto loc_000F4FE8; /* je: equal / zero */

loc_000F4FDA: ;
    xmm0 = xmm7; /* movaps */
    xmm0 = xmm0 - MEMF(eax * 4 + 0x743090); /* subss */
    goto loc_000F4FF1;

loc_000F4FE8: ;
    xmm0 = MEMF(eax * 4 + 0x743090); /* movss */

loc_000F4FF1: ;
    SET_LO8(ebx, LO8(ebx) - 0x40);
    eax = 0; /* xor self */
    SET_LO8(eax, LO8(ebx));
    SET_LO8(ecx, LO8(eax));
    SET_LO8(ecx, LO8(ecx) & 0xC0);
    (void)0; /* test LO8(eax), 0x40 - flags set for next jcc */
    MEMF(esp + 0x10) = xmm0; /* movss */
    if (TEST_Z(LO8(eax), 0x40)) goto loc_000F5013; /* je: equal / zero */

loc_000F5007: ;
    eax = eax & 0x3F;
    edx = 0x40;
    edx = edx - eax;
    goto loc_000F5018;

loc_000F5013: ;
    eax = eax & 0x3F;
    edx = eax;

loc_000F5018: ;
    if (TEST_Z(LO8(ecx), LO8(ecx))) goto loc_000F502A; /* je: equal / zero */

loc_000F501C: ;
    (void)0; /* cmp LO8(ecx), 0xC0 - flags set for next jcc */
    xmm7 = xmm7 - MEMF(edx * 4 + 0x743090); /* subss */
    if (CMP_NE(LO8(ecx), 0xC0)) goto loc_000F5033; /* jne: not equal / not zero */

loc_000F502A: ;
    xmm7 = MEMF(edx * 4 + 0x743090); /* movss */

loc_000F5033: ;
    PUSH32(esp, 0); sub_003E1D70(); /* call 0x003E1D70 */

loc_000F5038: ;
    xmm5 = xmm0; /* movaps */
    xmm5 = xmm5 * MEMF(esi + 0x20); /* mulss */
    xmm5 = xmm5 + MEMF(esi + 0x1C); /* addss */
    PUSH32(esp, 0); sub_003E2480(); /* call 0x003E2480 */

loc_000F504A: ;
    ecx = (uint32_t)(int32_t)SMEM16(esi + 0x32);
    edx = ((int32_t)eax < 0) ? 0xFFFFFFFF : 0; /* cdq */
    ecx++;
    { int64_t _dividend = ((int64_t)(int32_t)edx << 32) | eax;
      eax = (uint32_t)((int32_t)(_dividend / (int32_t)ecx));
      edx = (uint32_t)((int32_t)(_dividend % (int32_t)ecx)); }
    SET_LO8(edx, LO8(edx) + MEM8(esi + 0x30));
    MEM8(esp + 0x29) = LO8(edx);
    PUSH32(esp, 0); sub_003E2480(); /* call 0x003E2480 */

loc_000F505E: ;
    ecx = (uint32_t)(int32_t)SMEM16(esi + 0x36);
    edx = ((int32_t)eax < 0) ? 0xFFFFFFFF : 0; /* cdq */
    ecx++;
    { int64_t _dividend = ((int64_t)(int32_t)edx << 32) | eax;
      eax = (uint32_t)((int32_t)(_dividend / (int32_t)ecx));
      edx = (uint32_t)((int32_t)(_dividend % (int32_t)ecx)); }
    SET_LO16(edx, LO16(edx) + MEM16(esi + 0x34));
    MEM16(esp + 0x20) = LO16(edx);
    PUSH32(esp, 0); sub_003E1D70(); /* call 0x003E1D70 */

loc_000F5074: ;
    xmm0 = xmm0 * MEMF(esi + 0x10); /* mulss */
    xmm0 = xmm0 + MEMF(esi + 0xC); /* addss */
    MEMF(esp + 0x34) = xmm0; /* movss */
    PUSH32(esp, 0); sub_003E1D70(); /* call 0x003E1D70 */

loc_000F5089: ;
    edx = MEM32(esp + 0x64);
    eax = MEM32(esi + 0x54);
    ecx = MEM32(esi + 0x50);
    xmm0 = xmm0 * MEMF(esi + 0x18); /* mulss */
    xmm0 = xmm0 + MEMF(esi + 0x14); /* addss */
    PUSH32(esp, edx);
    edx = MEM32(esi + 0x4C);
    xmm1 = 0.0f; /* xorps self = zero */
    PUSH32(esp, 0);
    PUSH32(esp, 0);
    PUSH32(esp, 0);
    PUSH32(esp, eax);
    eax = MEM32(esi + 0x48);
    PUSH32(esp, ecx);
    ecx = MEM32(esi + 0x44);
    PUSH32(esp, edx);
    edx = MEM32(esi + 0x40);
    PUSH32(esp, eax);
    MEMF(esp + 0x64) = xmm0; /* movss */
    PUSH32(esp, ecx);
    xmm0 = xmm5; /* movaps */
    xmm0 = xmm0 * xmm7; /* mulss */
    xmm0 = xmm0 * xmm6; /* mulss */
    PUSH32(esp, edx);
    MEMF(esp + 0x60) = xmm0; /* movss */
    xmm0 = xmm5; /* movaps */
    xmm0 = xmm0 * MEMF(esp + 0x34); /* mulss */
    xmm5 = xmm5 * MEMF(esp + 0x38); /* mulss */
    eax = esp + 0x5C;
    PUSH32(esp, 0);
    xmm1 = xmm1 - xmm0; /* subss */
    xmm5 = xmm5 * xmm6; /* mulss */
    PUSH32(esp, eax);
    ecx = esp + 0x44;
    MEMF(esp + 0x6C) = xmm1; /* movss */
    MEMF(esp + 0x70) = xmm5; /* movss */
    PUSH32(esp, 0); sub_0017AA40(); /* call 0x0017AA40 */

loc_000F5103: ;
    esp = esp + 0x30;
    ebp--;
    if ((ebp != 0)) goto loc_000F4F07; /* jne: not equal / not zero */

loc_000F510D: ;
    POP32(esp, edi);
    POP32(esp, ebp);
    POP32(esp, ebx);

loc_000F5110: ;
    esp = esp + 0x54;
    esp += 4; return; /* ret */

}

/**
 * sub_000F5120
 * Original: 0x000F5120 - 0x000F5412 (754 bytes, 222 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_000F5120(void)
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
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_000F5120: ;
    esp = esp - 0x40;
    PUSH32(esp, ebp);
    ebp = MEM32(esp + 0x48);
    fp_push(MEMF(ebp)); /* fld float */
    eax = (int32_t)MEMF(ebp); /* cvttss2si */
    fp_st1() *= fp_top(); fp_pop(); /* fmul */
    ecx = (int32_t)MEMF(ebp + 4); /* cvttss2si */
    edx = (int32_t)MEMF(ebp + 8); /* cvttss2si */
    MEM16(esp + 0x1C) = LO16(eax);
    MEM16(esp + 0x1E) = LO16(ecx);
    MEM16(esp + 0x20) = LO16(edx);
    PUSH32(esp, 0); sub_00471288(); /* call 0x00471288 */

loc_000F5154: ;
    fp_push(MEMF(ebp + 4)); /* fld float */
    fp_st1() *= fp_top(); fp_pop(); /* fmul */
    MEM8(esp + 0x28) = LO8(eax);
    PUSH32(esp, 0); sub_00471288(); /* call 0x00471288 */

loc_000F5166: ;
    fp_push(MEMF(ebp + 8)); /* fld float */
    fp_st1() *= fp_top(); fp_pop(); /* fmul */
    MEM8(esp + 0x29) = LO8(eax);
    PUSH32(esp, 0); sub_00471288(); /* call 0x00471288 */

loc_000F5178: ;
    SET_LO8(ecx, MEM8(ebp + 0x28));
    SET_LO16(edx, ZX8(MEM8(ebp + 0x29)));
    MEM8(esp + 0x2A) = LO8(eax);
    SET_LO8(eax, MEM8(ebp + 0x3C));
    MEM8(esp + 0x38) = LO8(eax);
    MEM8(esp + 0x39) = LO8(eax);
    MEM8(esp + 0x3A) = LO8(eax);
    SET_LO8(eax, MEM8(ebp + 0x3D));
    MEM8(esp + 0x3B) = LO8(eax);
    SET_LO16(eax, MEM16(ebp + 0x2E));
    MEM8(esp + 0x2B) = LO8(ecx);
    ecx = MEM32(ebp + 0x38);
    MEM8(esp + 0x3C) = 0;
    MEM8(esp + 0x3D) = 0;
    MEM8(esp + 0x3E) = 0;
    MEM16(esp + 0x40) = LO16(edx);
    MEM16(esp + 0x18) = 0;
    MEM16(esp + 0x1A) = LO16(eax);
    MEM32(esp + 0xC) = ecx;
    PUSH32(esp, 0); sub_003E2480(); /* call 0x003E2480 */

loc_000F51CE: ;
    ecx = (uint32_t)(int32_t)SMEM16(ebp + 0xE);
    edx = ((int32_t)eax < 0) ? 0xFFFFFFFF : 0; /* cdq */
    ecx++;
    { int64_t _dividend = ((int64_t)(int32_t)edx << 32) | eax;
      eax = (uint32_t)((int32_t)(_dividend / (int32_t)ecx));
      edx = (uint32_t)((int32_t)(_dividend % (int32_t)ecx)); }
    eax = (uint32_t)(int32_t)SMEM16(ebp + 0xC);
    edx = edx + eax;
    if ((edx == 0)) goto loc_000F540D; /* je: equal / zero */

loc_000F51E2: ;
    PUSH32(esp, ebx);
    PUSH32(esp, esi);
    MEM32(esp + 0x10) = edx;
    PUSH32(esp, edi);
    /* nop */

loc_000F51F0: ;
    PUSH32(esp, 0); sub_003E2480(); /* call 0x003E2480 */

loc_000F51F5: ;
    ecx = (uint32_t)(int32_t)SMEM16(ebp + 0x12);
    edx = ((int32_t)eax < 0) ? 0xFFFFFFFF : 0; /* cdq */
    ecx++;
    { int64_t _dividend = ((int64_t)(int32_t)edx << 32) | eax;
      eax = (uint32_t)((int32_t)(_dividend / (int32_t)ecx));
      edx = (uint32_t)((int32_t)(_dividend % (int32_t)ecx)); }
    ebx = edx;
    SET_LO16(ebx, LO16(ebx) + MEM16(ebp + 0x10));
    PUSH32(esp, 0); sub_003E2480(); /* call 0x003E2480 */

loc_000F5208: ;
    ecx = (uint32_t)(int32_t)SMEM16(ebp + 0x16);
    ecx++;
    edx = ((int32_t)eax < 0) ? 0xFFFFFFFF : 0; /* cdq */
    { int64_t _dividend = ((int64_t)(int32_t)edx << 32) | eax;
      eax = (uint32_t)((int32_t)(_dividend / (int32_t)ecx));
      edx = (uint32_t)((int32_t)(_dividend % (int32_t)ecx)); }
    ecx = 0; /* xor self */
    SET_LO16(edx, LO16(edx) + MEM16(ebp + 0x14));
    SET_LO8(ecx, LO8(edx));
    SET_LO8(eax, LO8(edx));
    SET_LO8(eax, LO8(eax) & 0xC0);
    ecx = ecx & 0x3F;
    if (TEST_Z(LO8(edx), 0x40)) goto loc_000F522D; /* je: equal / zero */

loc_000F5224: ;
    esi = 0x40;
    esi = esi - ecx;
    goto loc_000F522F;

loc_000F522D: ;
    esi = ecx;

loc_000F522F: ;
    if (TEST_Z(LO8(eax), LO8(eax))) goto loc_000F5248; /* je: equal / zero */

loc_000F5233: ;
    if (CMP_EQ(LO8(eax), 0xC0)) goto loc_000F5248; /* je: equal / zero */

loc_000F5237: ;
    xmm7 = 0.0f; /* xorps self = zero */
    xmm5 = xmm7; /* movaps */
    xmm5 = xmm5 - MEMF(esi * 4 + 0x743090); /* subss */
    goto loc_000F5254;

loc_000F5248: ;
    xmm5 = MEMF(esi * 4 + 0x743090); /* movss */
    xmm7 = 0.0f; /* xorps self = zero */

loc_000F5254: ;
    SET_LO8(edx, LO8(edx) - 0x40);
    SET_LO8(eax, LO8(edx));
    SET_LO8(eax, LO8(eax) & 0xC0);
    if (TEST_Z(LO8(edx), 0x40)) goto loc_000F526C; /* je: equal / zero */

loc_000F5260: ;
    edx = edx & 0x3F;
    ecx = 0x40;
    ecx = ecx - edx;
    goto loc_000F5271;

loc_000F526C: ;
    edx = edx & 0x3F;
    ecx = edx;

loc_000F5271: ;
    if (TEST_Z(LO8(eax), LO8(eax))) goto loc_000F5287; /* je: equal / zero */

loc_000F5275: ;
    if (CMP_EQ(LO8(eax), 0xC0)) goto loc_000F5287; /* je: equal / zero */

loc_000F5279: ;
    xmm0 = xmm7; /* movaps */
    xmm0 = xmm0 - MEMF(ecx * 4 + 0x743090); /* subss */
    goto loc_000F5290;

loc_000F5287: ;
    xmm0 = MEMF(ecx * 4 + 0x743090); /* movss */

loc_000F5290: ;
    SET_LO8(ecx, LO8(ebx));
    SET_LO8(ecx, LO8(ecx) & 0xC0);
    (void)0; /* test LO8(ebx), 0x40 - flags set for next jcc */
    MEMF(esp + 0x54) = xmm0; /* movss */
    if (TEST_Z(LO8(ebx), 0x40)) goto loc_000F52B0; /* je: equal / zero */

loc_000F52A0: ;
    edx = 0; /* xor self */
    SET_LO8(edx, LO8(ebx));
    eax = 0x40;
    edx = edx & 0x3F;
    eax = eax - edx;
    goto loc_000F52B7;

loc_000F52B0: ;
    eax = 0; /* xor self */
    SET_LO8(eax, LO8(ebx));
    eax = eax & 0x3F;

loc_000F52B7: ;
    if (TEST_Z(LO8(ecx), LO8(ecx))) goto loc_000F52CE; /* je: equal / zero */

loc_000F52BB: ;
    if (CMP_EQ(LO8(ecx), 0xC0)) goto loc_000F52CE; /* je: equal / zero */

loc_000F52C0: ;
    xmm0 = xmm7; /* movaps */
    xmm0 = xmm0 - MEMF(eax * 4 + 0x743090); /* subss */
    goto loc_000F52D7;

loc_000F52CE: ;
    xmm0 = MEMF(eax * 4 + 0x743090); /* movss */

loc_000F52D7: ;
    SET_LO8(ebx, LO8(ebx) - 0x40);
    eax = 0; /* xor self */
    SET_LO8(eax, LO8(ebx));
    SET_LO8(ecx, LO8(eax));
    SET_LO8(ecx, LO8(ecx) & 0xC0);
    (void)0; /* test LO8(eax), 0x40 - flags set for next jcc */
    MEMF(esp + 0x10) = xmm0; /* movss */
    if (TEST_Z(LO8(eax), 0x40)) goto loc_000F52F9; /* je: equal / zero */

loc_000F52ED: ;
    eax = eax & 0x3F;
    edx = 0x40;
    edx = edx - eax;
    goto loc_000F52FE;

loc_000F52F9: ;
    eax = eax & 0x3F;
    edx = eax;

loc_000F52FE: ;
    if (TEST_Z(LO8(ecx), LO8(ecx))) goto loc_000F5315; /* je: equal / zero */

loc_000F5302: ;
    if (CMP_EQ(LO8(ecx), 0xC0)) goto loc_000F5315; /* je: equal / zero */

loc_000F5307: ;
    xmm6 = xmm7; /* movaps */
    xmm6 = xmm6 - MEMF(edx * 4 + 0x743090); /* subss */
    goto loc_000F531E;

loc_000F5315: ;
    xmm6 = MEMF(edx * 4 + 0x743090); /* movss */

loc_000F531E: ;
    PUSH32(esp, 0); sub_003E1D70(); /* call 0x003E1D70 */

loc_000F5323: ;
    xmm0 = xmm0 * MEMF(ebp + 0x1C); /* mulss */
    xmm0 = xmm0 + MEMF(ebp + 0x18); /* addss */
    PUSH32(esp, 0); sub_003E2480(); /* call 0x003E2480 */

loc_000F5332: ;
    ecx = (uint32_t)(int32_t)SMEM16(ebp + 0x22);
    edx = ((int32_t)eax < 0) ? 0xFFFFFFFF : 0; /* cdq */
    ecx++;
    { int64_t _dividend = ((int64_t)(int32_t)edx << 32) | eax;
      eax = (uint32_t)((int32_t)(_dividend / (int32_t)ecx));
      edx = (uint32_t)((int32_t)(_dividend % (int32_t)ecx)); }
    xmm1 = xmm0; /* movaps */
    xmm1 = xmm1 * xmm6; /* mulss */
    xmm1 = xmm1 * xmm5; /* mulss */
    SET_LO16(edx, LO16(edx) + MEM16(ebp + 0x20));
    MEM16(esp + 0x40) = LO16(edx);
    edx = (int32_t)xmm1; /* cvttss2si */
    xmm1 = xmm0; /* movaps */
    xmm1 = xmm1 * MEMF(esp + 0x54); /* mulss */
    xmm0 = xmm0 * MEMF(esp + 0x10); /* mulss */
    xmm7 = xmm7 - xmm1; /* subss */
    eax = (int32_t)xmm7; /* cvttss2si */
    xmm0 = xmm0 * xmm5; /* mulss */
    ecx = (int32_t)xmm0; /* cvttss2si */
    MEM16(esp + 0x2E) = LO16(edx);
    MEM16(esp + 0x38) = LO16(eax);
    MEM16(esp + 0x30) = LO16(ecx);
    PUSH32(esp, 0); sub_003E2480(); /* call 0x003E2480 */

loc_000F5385: ;
    ecx = (uint32_t)(int32_t)SMEM16(ebp + 0x26);
    edx = ((int32_t)eax < 0) ? 0xFFFFFFFF : 0; /* cdq */
    ecx++;
    { int64_t _dividend = ((int64_t)(int32_t)edx << 32) | eax;
      eax = (uint32_t)((int32_t)(_dividend / (int32_t)ecx));
      edx = (uint32_t)((int32_t)(_dividend % (int32_t)ecx)); }
    SET_LO16(edx, LO16(edx) + MEM16(ebp + 0x24));
    MEM16(esp + 0x3A) = LO16(edx);
    PUSH32(esp, 0); sub_003E2480(); /* call 0x003E2480 */

loc_000F539B: ;
    ecx = (uint32_t)(int32_t)SMEM16(ebp + 0x2C);
    edx = ((int32_t)eax < 0) ? 0xFFFFFFFF : 0; /* cdq */
    ecx++;
    { int64_t _dividend = ((int64_t)(int32_t)edx << 32) | eax;
      eax = (uint32_t)((int32_t)(_dividend / (int32_t)ecx));
      edx = (uint32_t)((int32_t)(_dividend % (int32_t)ecx)); }
    SET_LO8(edx, LO8(edx) + MEM8(ebp + 0x2A));
    MEM8(esp + 0x42) = LO8(edx);
    PUSH32(esp, 0); sub_003E2480(); /* call 0x003E2480 */

loc_000F53AF: ;
    ecx = (uint32_t)(int32_t)SMEM16(ebp + 0x32);
    edx = ((int32_t)eax < 0) ? 0xFFFFFFFF : 0; /* cdq */
    ecx++;
    { int64_t _dividend = ((int64_t)(int32_t)edx << 32) | eax;
      eax = (uint32_t)((int32_t)(_dividend / (int32_t)ecx));
      edx = (uint32_t)((int32_t)(_dividend % (int32_t)ecx)); }
    SET_LO16(edx, LO16(edx) + MEM16(ebp + 0x30));
    MEM16(esp + 0x3C) = LO16(edx);
    PUSH32(esp, 0); sub_003E2480(); /* call 0x003E2480 */

loc_000F53C5: ;
    ecx = (uint32_t)(int32_t)SMEM16(ebp + 0x36);
    edx = ((int32_t)eax < 0) ? 0xFFFFFFFF : 0; /* cdq */
    ecx++;
    { int64_t _dividend = ((int64_t)(int32_t)edx << 32) | eax;
      eax = (uint32_t)((int32_t)(_dividend / (int32_t)ecx));
      edx = (uint32_t)((int32_t)(_dividend % (int32_t)ecx)); }
    eax = 0x68;
    SET_LO16(edx, LO16(edx) + MEM16(ebp + 0x34));
    MEM16(esp + 0x3E) = LO16(edx);
    edx = MEM32(esp + 0x58);
    PUSH32(esp, edx);
    PUSH32(esp, 8);
    PUSH32(esp, 0); sub_000D9C60(); /* call 0x000D9C60 */

loc_000F53E7: ;
    esp = esp + 8;
    if (TEST_Z(eax, eax)) goto loc_000F5400; /* je: equal / zero */

loc_000F53EE: ;
    edi = eax + 0x2C;
    ecx = 0xE;
    esi = esp + 0x18;
    memcpy((void*)XBOX_PTR(edi), (void*)XBOX_PTR(esi), ecx * 4);
    esi += ecx * 4; edi += ecx * 4; ecx = 0; /* rep movsd */
    MEM8(eax + 0x64) = 0xFF;

loc_000F5400: ;
    MEM32(esp + 0x14) = MEM32(esp + 0x14) - 1;
    if ((MEM32(esp + 0x14) != 0)) goto loc_000F51F0; /* jne: not equal / not zero */

loc_000F540A: ;
    POP32(esp, edi);
    POP32(esp, esi);
    POP32(esp, ebx);

loc_000F540D: ;
    POP32(esp, ebp);
    esp = esp + 0x40;
    esp += 4; return; /* ret */

    #undef fp_push
    #undef fp_pop
    #undef fp_popp
    #undef fp_top
    #undef fp_st1
}

/**
 * sub_000F5420
 * Original: 0x000F5420 - 0x000F57A2 (898 bytes, 249 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_000F5420(void)
{
    uint32_t ebp;
    int _flags = 0; /* fallback flag var */
    float xmm0, xmm1, xmm5, xmm6, xmm7;
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_000F5420: ;
    esp = esp - 0x8C;
    PUSH32(esp, ebp);
    ebp = MEM32(esp + 0x94);
    MEM32(esp + 0x3C) = 0x303;
    PUSH32(esp, 0); sub_003E2480(); /* call 0x003E2480 */

loc_000F543B: ;
    ecx = (uint32_t)(int32_t)SMEM16(ebp + 2);
    ecx++;
    edx = ((int32_t)eax < 0) ? 0xFFFFFFFF : 0; /* cdq */
    { int64_t _dividend = ((int64_t)(int32_t)edx << 32) | eax;
      eax = (uint32_t)((int32_t)(_dividend / (int32_t)ecx));
      edx = (uint32_t)((int32_t)(_dividend % (int32_t)ecx)); }
    eax = (uint32_t)(int32_t)SMEM16(ebp);
    ecx = MEM32(ebp + 4);
    xmm0 = MEMF(ebp + 0x6C); /* movss */
    xmm7 = 0.0f; /* xorps self = zero */
    MEM32(esp + 0x40) = ecx;
    SET_LO8(ecx, MEM8(ebp + 0x25));
    MEM8(esp + 0x21) = LO8(ecx);
    ecx = ebp + 0x3C;
    MEMF(esp + 0x10) = xmm0; /* movss */
    xmm0 = MEMF(ebp + 0x30); /* movss */
    MEMF(esp + 0x18) = xmm7; /* movss */
    MEMF(esp + 0x4C) = xmm0; /* movss */
    edx = edx + eax;
    SET_LO8(eax, MEM8(ebp + 0x24));
    MEM8(esp + 0x20) = LO8(eax);
    SET_LO8(eax, MEM8(ebp + 0x26));
    MEM8(esp + 0x22) = LO8(eax);
    eax = MEM32(ecx);
    MEM32(esp + 0x58) = eax;
    eax = MEM32(ecx + 4);
    ecx = MEM32(ecx + 8);
    MEM32(esp + 0x5C) = eax;
    eax = MEM32(ebp + 0x60);
    MEM32(esp + 0x60) = ecx;
    SET_LO8(ecx, MEM8(ebp + 0x64));
    MEM32(esp + 0x80) = eax;
    SET_LO8(eax, MEM8(ebp + 0x65));
    MEM8(esp + 0x88) = LO8(ecx);
    SET_LO16(ecx, MEM16(ebp + 0x2A));
    MEM8(esp + 0x89) = LO8(eax);
    SET_LO16(eax, MEM16(ebp + 0x2C));
    MEM16(esp + 0x44) = LO16(ecx);
    SET_LO16(ecx, MEM16(ebp + 0x2E));
    MEM16(esp + 0x46) = LO16(eax);
    SET_LO8(eax, MEM8(esp + 0x98));
    MEM16(esp + 0x48) = LO16(ecx);
    MEM8(esp + 0x8C) = LO8(eax);
    if ((edx == 0)) goto loc_000F579A; /* je: equal / zero */

loc_000F54E8: ;
    PUSH32(esp, ebx);
    PUSH32(esp, esi);
    PUSH32(esp, edi);
    MEM32(esp + 0x10) = edx;
    goto loc_000F54F4;

loc_000F54F1: ;
    xmm7 = 0.0f; /* xorps self = zero */

loc_000F54F4: ;
    PUSH32(esp, 0); sub_003E2480(); /* call 0x003E2480 */

loc_000F54F9: ;
    ecx = (uint32_t)(int32_t)SMEM16(ebp + 0x4C);
    edx = ((int32_t)eax < 0) ? 0xFFFFFFFF : 0; /* cdq */
    ecx++;
    { int64_t _dividend = ((int64_t)(int32_t)edx << 32) | eax;
      eax = (uint32_t)((int32_t)(_dividend / (int32_t)ecx));
      edx = (uint32_t)((int32_t)(_dividend % (int32_t)ecx)); }
    ebx = edx;
    SET_LO16(ebx, LO16(ebx) + MEM16(ebp + 0x48));
    PUSH32(esp, 0); sub_003E2480(); /* call 0x003E2480 */

loc_000F550C: ;
    ecx = (uint32_t)(int32_t)SMEM16(ebp + 0x4E);
    ecx++;
    edx = ((int32_t)eax < 0) ? 0xFFFFFFFF : 0; /* cdq */
    { int64_t _dividend = ((int64_t)(int32_t)edx << 32) | eax;
      eax = (uint32_t)((int32_t)(_dividend / (int32_t)ecx));
      edx = (uint32_t)((int32_t)(_dividend % (int32_t)ecx)); }
    ecx = 0; /* xor self */
    SET_LO16(edx, LO16(edx) + MEM16(ebp + 0x4A));
    SET_LO8(ecx, LO8(edx));
    SET_LO8(eax, LO8(edx));
    SET_LO8(eax, LO8(eax) & 0xC0);
    ecx = ecx & 0x3F;
    if (TEST_Z(LO8(edx), 0x40)) goto loc_000F5531; /* je: equal / zero */

loc_000F5528: ;
    esi = 0x40;
    esi = esi - ecx;
    goto loc_000F5533;

loc_000F5531: ;
    esi = ecx;

loc_000F5533: ;
    if (TEST_Z(LO8(eax), LO8(eax))) goto loc_000F5549; /* je: equal / zero */

loc_000F5537: ;
    if (CMP_EQ(LO8(eax), 0xC0)) goto loc_000F5549; /* je: equal / zero */

loc_000F553B: ;
    xmm6 = xmm7; /* movaps */
    xmm6 = xmm6 - MEMF(esi * 4 + 0x743090); /* subss */
    goto loc_000F5552;

loc_000F5549: ;
    xmm6 = MEMF(esi * 4 + 0x743090); /* movss */

loc_000F5552: ;
    SET_LO8(edx, LO8(edx) - 0x40);
    SET_LO8(eax, LO8(edx));
    SET_LO8(eax, LO8(eax) & 0xC0);
    if (TEST_Z(LO8(edx), 0x40)) goto loc_000F556A; /* je: equal / zero */

loc_000F555E: ;
    edx = edx & 0x3F;
    ecx = 0x40;
    ecx = ecx - edx;
    goto loc_000F556F;

loc_000F556A: ;
    edx = edx & 0x3F;
    ecx = edx;

loc_000F556F: ;
    if (TEST_Z(LO8(eax), LO8(eax))) goto loc_000F5585; /* je: equal / zero */

loc_000F5573: ;
    if (CMP_EQ(LO8(eax), 0xC0)) goto loc_000F5585; /* je: equal / zero */

loc_000F5577: ;
    xmm0 = xmm7; /* movaps */
    xmm0 = xmm0 - MEMF(ecx * 4 + 0x743090); /* subss */
    goto loc_000F558E;

loc_000F5585: ;
    xmm0 = MEMF(ecx * 4 + 0x743090); /* movss */

loc_000F558E: ;
    SET_LO8(ecx, LO8(ebx));
    SET_LO8(ecx, LO8(ecx) & 0xC0);
    (void)0; /* test LO8(ebx), 0x40 - flags set for next jcc */
    MEMF(esp + 0x14) = xmm0; /* movss */
    if (TEST_Z(LO8(ebx), 0x40)) goto loc_000F55AE; /* je: equal / zero */

loc_000F559E: ;
    edx = 0; /* xor self */
    SET_LO8(edx, LO8(ebx));
    eax = 0x40;
    edx = edx & 0x3F;
    eax = eax - edx;
    goto loc_000F55B5;

loc_000F55AE: ;
    eax = 0; /* xor self */
    SET_LO8(eax, LO8(ebx));
    eax = eax & 0x3F;

loc_000F55B5: ;
    if (TEST_Z(LO8(ecx), LO8(ecx))) goto loc_000F55CC; /* je: equal / zero */

loc_000F55B9: ;
    if (CMP_EQ(LO8(ecx), 0xC0)) goto loc_000F55CC; /* je: equal / zero */

loc_000F55BE: ;
    xmm0 = xmm7; /* movaps */
    xmm0 = xmm0 - MEMF(eax * 4 + 0x743090); /* subss */
    goto loc_000F55D5;

loc_000F55CC: ;
    xmm0 = MEMF(eax * 4 + 0x743090); /* movss */

loc_000F55D5: ;
    SET_LO8(ebx, LO8(ebx) - 0x40);
    eax = 0; /* xor self */
    SET_LO8(eax, LO8(ebx));
    SET_LO8(ecx, LO8(eax));
    SET_LO8(ecx, LO8(ecx) & 0xC0);
    (void)0; /* test LO8(eax), 0x40 - flags set for next jcc */
    MEMF(esp + 0x18) = xmm0; /* movss */
    if (TEST_Z(LO8(eax), 0x40)) goto loc_000F55F7; /* je: equal / zero */

loc_000F55EB: ;
    eax = eax & 0x3F;
    edx = 0x40;
    edx = edx - eax;
    goto loc_000F55FC;

loc_000F55F7: ;
    eax = eax & 0x3F;
    edx = eax;

loc_000F55FC: ;
    if (TEST_Z(LO8(ecx), LO8(ecx))) goto loc_000F560E; /* je: equal / zero */

loc_000F5600: ;
    (void)0; /* cmp LO8(ecx), 0xC0 - flags set for next jcc */
    xmm7 = xmm7 - MEMF(edx * 4 + 0x743090); /* subss */
    if (CMP_NE(LO8(ecx), 0xC0)) goto loc_000F5617; /* jne: not equal / not zero */

loc_000F560E: ;
    xmm7 = MEMF(edx * 4 + 0x743090); /* movss */

loc_000F5617: ;
    PUSH32(esp, 0); sub_003E1D70(); /* call 0x003E1D70 */

loc_000F561C: ;
    xmm5 = xmm0; /* movaps */
    xmm5 = xmm5 * MEMF(ebp + 0x54); /* mulss */
    xmm5 = xmm5 + MEMF(ebp + 0x50); /* addss */
    PUSH32(esp, 0); sub_003E2480(); /* call 0x003E2480 */

loc_000F562E: ;
    ecx = (uint32_t)(int32_t)SMEM16(ebp + 0x16);
    edx = ((int32_t)eax < 0) ? 0xFFFFFFFF : 0; /* cdq */
    ecx++;
    { int64_t _dividend = ((int64_t)(int32_t)edx << 32) | eax;
      eax = (uint32_t)((int32_t)(_dividend / (int32_t)ecx));
      edx = (uint32_t)((int32_t)(_dividend % (int32_t)ecx)); }
    SET_LO16(edx, LO16(edx) + MEM16(ebp + 0x14));
    MEM16(esp + 0x20) = LO16(edx);
    PUSH32(esp, 0); sub_003E2480(); /* call 0x003E2480 */

loc_000F5644: ;
    ecx = MEM32(ebp + 0x1C);
    edx = ((int32_t)eax < 0) ? 0xFFFFFFFF : 0; /* cdq */
    ecx++;
    { int64_t _dividend = ((int64_t)(int32_t)edx << 32) | eax;
      eax = (uint32_t)((int32_t)(_dividend / (int32_t)ecx));
      edx = (uint32_t)((int32_t)(_dividend % (int32_t)ecx)); }
    edx = edx + MEM32(ebp + 0x18);
    xmm0 = (float)(int32_t)edx; /* cvtsi2ss */
    xmm0 = xmm0 * MEMF(0x648E5C); /* mulss */
    MEMF(esp + 0x28) = xmm0; /* movss */
    PUSH32(esp, 0); sub_003E1D70(); /* call 0x003E1D70 */

loc_000F5665: ;
    xmm0 = xmm0 * MEMF(ebp + 0x38); /* mulss */
    xmm0 = xmm0 + MEMF(ebp + 0x34); /* addss */
    xmm1 = 0.0f; /* xorps self = zero */
    MEMF(esp + 0x60) = xmm0; /* movss */
    MEMF(esp + 0x5C) = xmm0; /* movss */
    xmm0 = xmm5; /* movaps */
    xmm0 = xmm0 * xmm7; /* mulss */
    xmm0 = xmm0 * xmm6; /* mulss */
    MEMF(esp + 0x7C) = xmm0; /* movss */
    xmm0 = xmm5; /* movaps */
    xmm0 = xmm0 * MEMF(esp + 0x14); /* mulss */
    xmm5 = xmm5 * MEMF(esp + 0x18); /* mulss */
    xmm1 = xmm1 - xmm0; /* subss */
    xmm5 = xmm5 * xmm6; /* mulss */
    MEMF(esp + 0x80) = xmm1; /* movss */
    MEMF(esp + 0x84) = xmm5; /* movss */
    PUSH32(esp, 0); sub_003E1D70(); /* call 0x003E1D70 */

loc_000F56BD: ;
    xmm0 = xmm0 * MEMF(ebp + 0x5C); /* mulss */
    xmm0 = xmm0 + MEMF(ebp + 0x58); /* addss */
    MEMF(esp + 0x88) = xmm0; /* movss */
    PUSH32(esp, 0); sub_003E2480(); /* call 0x003E2480 */

loc_000F56D5: ;
    ecx = ZX8(MEM8(ebp + 0x28));
    ecx++;
    edx = ((int32_t)eax < 0) ? 0xFFFFFFFF : 0; /* cdq */
    { int64_t _dividend = ((int64_t)(int32_t)edx << 32) | eax;
      eax = (uint32_t)((int32_t)(_dividend / (int32_t)ecx));
      edx = (uint32_t)((int32_t)(_dividend % (int32_t)ecx)); }
    SET_LO8(ecx, MEM8(ebp + 0x27));
    eax = 4;
    MEM32(esp + 0x30) = eax;
    esi = 0; /* xor self */
    MEM32(esp + 0x3C) = eax;
    eax = MEM32(0x771CD0);
    MEM32(esp + 0x38) = esi;
    MEM32(esp + 0x44) = esi;
    SET_LO8(edx, LO8(edx) + LO8(ecx));
    (void)0; /* cmp eax, 0x2EE - flags set for next jcc */
    ecx = 2;
    MEM8(esp + 0x2F) = LO8(edx);
    MEM32(esp + 0x34) = ecx;
    MEM32(esp + 0x40) = ecx;
    if (CMP_GE(eax, 0x2EE)) goto loc_000F578D; /* jge: greater or equal (signed >=) */

loc_000F5716: ;
    eax = ZX8(MEM8(ebp + 0x68));
    eax = eax - esi;
    if ((eax == 0)) goto loc_000F5732; /* je: equal / zero */

loc_000F571E: ;
    eax--;
    if ((eax == 0)) goto loc_000F572B; /* je: equal / zero */

loc_000F5721: ;
    eax--;
    if ((eax != 0)) goto loc_000F5732; /* jne: not equal / not zero */

loc_000F5724: ;
    eax = 0x5F;
    goto loc_000F5737;

loc_000F572B: ;
    eax = 0x6C;
    goto loc_000F5737;

loc_000F5732: ;
    eax = 0x32;

loc_000F5737: ;
    edx = MEM32(esp + 0xA8);
    PUSH32(esp, edx);
    PUSH32(esp, eax);
    eax = 0x174;
    PUSH32(esp, 0); sub_000D9C60(); /* call 0x000D9C60 */

loc_000F574A: ;
    esp = esp + 8;
    if (CMP_EQ(eax, esi)) goto loc_000F578D; /* je: equal / zero */

loc_000F5751: ;
    edx = eax + 0x2C;
    edi = edx;
    ecx = 0x1F;
    esi = esp + 0x20;
    memcpy((void*)XBOX_PTR(edi), (void*)XBOX_PTR(esi), ecx * 4);
    esi += ecx * 4; edi += ecx * 4; ecx = 0; /* rep movsd */
    SET_LO16(ecx, MEM16(edx));
    edx = MEM32(esp + 0x1C);
    MEM16(eax + 0x2E) = LO16(ecx);
    ecx = MEM32(0x771CD0);
    ecx++;
    MEM8(eax + 0x154) = 0;
    MEM8(eax + 0x160) = 0;
    MEM32(0x771CD0) = ecx;
    MEM32(eax + 0x170) = edx;

loc_000F578D: ;
    MEM32(esp + 0x10) = MEM32(esp + 0x10) - 1;
    if ((MEM32(esp + 0x10) != 0)) goto loc_000F54F1; /* jne: not equal / not zero */

loc_000F5797: ;
    POP32(esp, edi);
    POP32(esp, esi);
    POP32(esp, ebx);

loc_000F579A: ;
    POP32(esp, ebp);
    esp = esp + 0x8C;
    esp += 4; return; /* ret */

}

/**
 * sub_000F57B0
 * Original: 0x000F57B0 - 0x000F5A1E (622 bytes, 187 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_000F57B0(void)
{
    uint32_t ebp;
    int _flags = 0; /* fallback flag var */
    float xmm0, xmm1, xmm2, xmm3, xmm4;
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_000F57B0: ;
    esp = esp - 0x3C;
    PUSH32(esp, 0); sub_003E2480(); /* call 0x003E2480 */

loc_000F57B8: ;
    ecx = (uint32_t)(int32_t)SMEM16(edi + 2);
    ecx++;
    edx = ((int32_t)eax < 0) ? 0xFFFFFFFF : 0; /* cdq */
    { int64_t _dividend = ((int64_t)(int32_t)edx << 32) | eax;
      eax = (uint32_t)((int32_t)(_dividend / (int32_t)ecx));
      edx = (uint32_t)((int32_t)(_dividend % (int32_t)ecx)); }
    eax = (uint32_t)(int32_t)SMEM16(edi);
    ecx = edi + 4;
    edx = edx + eax;
    eax = MEM32(ecx);
    MEM32(esp) = eax;
    eax = MEM32(ecx + 4);
    ecx = MEM32(ecx + 8);
    MEM32(esp + 4) = eax;
    SET_LO8(eax, MEM8(edi + 0x28));
    MEM32(esp + 8) = ecx;
    SET_LO8(ecx, MEM8(edi + 0x29));
    MEM8(esp + 0x20) = LO8(eax);
    SET_LO8(eax, MEM8(edi + 0x2A));
    MEM8(esp + 0x21) = LO8(ecx);
    SET_LO8(ecx, MEM8(edi + 0x2B));
    MEM8(esp + 0x22) = LO8(eax);
    SET_LO8(eax, MEM8(edi + 0x2C));
    MEM8(esp + 0x23) = LO8(ecx);
    SET_LO8(ecx, MEM8(edi + 0x2D));
    MEM8(esp + 0x24) = LO8(eax);
    SET_LO8(eax, MEM8(edi + 0x2E));
    MEM8(esp + 0x25) = LO8(ecx);
    SET_LO8(ecx, MEM8(edi + 0x2F));
    MEM8(esp + 0x26) = LO8(eax);
    SET_LO8(eax, MEM8(edi + 0x30));
    MEM8(esp + 0x27) = LO8(ecx);
    SET_LO16(ecx, MEM16(edi + 0x36));
    MEM8(esp + 0x28) = LO8(eax);
    SET_LO16(eax, MEM16(edi + 0x42));
    MEM16(esp + 0x2C) = LO16(ecx);
    SET_LO16(ecx, MEM16(edi + 0x44));
    MEM16(esp + 0x36) = LO16(eax);
    MEM16(esp + 0x38) = LO16(ecx);
    if ((edx == 0)) goto loc_000F5A1A; /* je: equal / zero */

loc_000F583B: ;
    PUSH32(esp, ebx);
    PUSH32(esp, ebp);
    PUSH32(esp, esi);
    ebp = edx;

loc_000F5840: ;
    PUSH32(esp, 0); sub_003E2480(); /* call 0x003E2480 */

loc_000F5845: ;
    ecx = (uint32_t)(int32_t)SMEM16(edi + 0x14);
    edx = ((int32_t)eax < 0) ? 0xFFFFFFFF : 0; /* cdq */
    ecx++;
    { int64_t _dividend = ((int64_t)(int32_t)edx << 32) | eax;
      eax = (uint32_t)((int32_t)(_dividend / (int32_t)ecx));
      edx = (uint32_t)((int32_t)(_dividend % (int32_t)ecx)); }
    ebx = edx;
    SET_LO16(ebx, LO16(ebx) + MEM16(edi + 0x10));
    PUSH32(esp, 0); sub_003E2480(); /* call 0x003E2480 */

loc_000F5858: ;
    ecx = (uint32_t)(int32_t)SMEM16(edi + 0x16);
    ecx++;
    edx = ((int32_t)eax < 0) ? 0xFFFFFFFF : 0; /* cdq */
    { int64_t _dividend = ((int64_t)(int32_t)edx << 32) | eax;
      eax = (uint32_t)((int32_t)(_dividend / (int32_t)ecx));
      edx = (uint32_t)((int32_t)(_dividend % (int32_t)ecx)); }
    ecx = 0; /* xor self */
    SET_LO16(edx, LO16(edx) + MEM16(edi + 0x12));
    SET_LO8(ecx, LO8(edx));
    SET_LO8(eax, LO8(edx));
    SET_LO8(eax, LO8(eax) & 0xC0);
    ecx = ecx & 0x3F;
    if (TEST_Z(LO8(edx), 0x40)) goto loc_000F587D; /* je: equal / zero */

loc_000F5874: ;
    esi = 0x40;
    esi = esi - ecx;
    goto loc_000F587F;

loc_000F587D: ;
    esi = ecx;

loc_000F587F: ;
    if (TEST_Z(LO8(eax), LO8(eax))) goto loc_000F5898; /* je: equal / zero */

loc_000F5883: ;
    if (CMP_EQ(LO8(eax), 0xC0)) goto loc_000F5898; /* je: equal / zero */

loc_000F5887: ;
    xmm0 = 0.0f; /* xorps self = zero */
    xmm3 = xmm0; /* movaps */
    xmm3 = xmm3 - MEMF(esi * 4 + 0x743090); /* subss */
    goto loc_000F58A4;

loc_000F5898: ;
    xmm3 = MEMF(esi * 4 + 0x743090); /* movss */
    xmm0 = 0.0f; /* xorps self = zero */

loc_000F58A4: ;
    SET_LO8(edx, LO8(edx) - 0x40);
    SET_LO8(eax, LO8(edx));
    SET_LO8(eax, LO8(eax) & 0xC0);
    if (TEST_Z(LO8(edx), 0x40)) goto loc_000F58BC; /* je: equal / zero */

loc_000F58B0: ;
    edx = edx & 0x3F;
    ecx = 0x40;
    ecx = ecx - edx;
    goto loc_000F58C1;

loc_000F58BC: ;
    edx = edx & 0x3F;
    ecx = edx;

loc_000F58C1: ;
    if (TEST_Z(LO8(eax), LO8(eax))) goto loc_000F58D7; /* je: equal / zero */

loc_000F58C5: ;
    if (CMP_EQ(LO8(eax), 0xC0)) goto loc_000F58D7; /* je: equal / zero */

loc_000F58C9: ;
    xmm2 = xmm0; /* movaps */
    xmm2 = xmm2 - MEMF(ecx * 4 + 0x743090); /* subss */
    goto loc_000F58E0;

loc_000F58D7: ;
    xmm2 = MEMF(ecx * 4 + 0x743090); /* movss */

loc_000F58E0: ;
    SET_LO8(ecx, LO8(ebx));
    SET_LO8(ecx, LO8(ecx) & 0xC0);
    if (TEST_Z(LO8(ebx), 0x40)) goto loc_000F58FA; /* je: equal / zero */

loc_000F58EA: ;
    edx = 0; /* xor self */
    SET_LO8(edx, LO8(ebx));
    eax = 0x40;
    edx = edx & 0x3F;
    eax = eax - edx;
    goto loc_000F5901;

loc_000F58FA: ;
    eax = 0; /* xor self */
    SET_LO8(eax, LO8(ebx));
    eax = eax & 0x3F;

loc_000F5901: ;
    if (TEST_Z(LO8(ecx), LO8(ecx))) goto loc_000F5918; /* je: equal / zero */

loc_000F5905: ;
    if (CMP_EQ(LO8(ecx), 0xC0)) goto loc_000F5918; /* je: equal / zero */

loc_000F590A: ;
    xmm1 = xmm0; /* movaps */
    xmm1 = xmm1 - MEMF(eax * 4 + 0x743090); /* subss */
    goto loc_000F5921;

loc_000F5918: ;
    xmm1 = MEMF(eax * 4 + 0x743090); /* movss */

loc_000F5921: ;
    SET_LO8(ebx, LO8(ebx) - 0x40);
    eax = 0; /* xor self */
    SET_LO8(eax, LO8(ebx));
    SET_LO8(ecx, LO8(eax));
    SET_LO8(ecx, LO8(ecx) & 0xC0);
    if (TEST_Z(LO8(eax), 0x40)) goto loc_000F593D; /* je: equal / zero */

loc_000F5931: ;
    eax = eax & 0x3F;
    edx = 0x40;
    edx = edx - eax;
    goto loc_000F5942;

loc_000F593D: ;
    eax = eax & 0x3F;
    edx = eax;

loc_000F5942: ;
    if (TEST_Z(LO8(ecx), LO8(ecx))) goto loc_000F5954; /* je: equal / zero */

loc_000F5946: ;
    (void)0; /* cmp LO8(ecx), 0xC0 - flags set for next jcc */
    xmm0 = xmm0 - MEMF(edx * 4 + 0x743090); /* subss */
    if (CMP_NE(LO8(ecx), 0xC0)) goto loc_000F595D; /* jne: not equal / not zero */

loc_000F5954: ;
    xmm0 = MEMF(edx * 4 + 0x743090); /* movss */

loc_000F595D: ;
    xmm4 = MEMF(0x648CE4); /* movss */
    xmm2 = xmm2 * MEMF(0x649368); /* mulss */
    xmm0 = xmm0 * xmm3; /* mulss */
    xmm1 = xmm1 * xmm3; /* mulss */
    xmm0 = xmm0 * xmm4; /* mulss */
    xmm1 = xmm1 * xmm4; /* mulss */
    MEMF(esp + 0x18) = xmm0; /* movss */
    MEMF(esp + 0x1C) = xmm2; /* movss */
    MEMF(esp + 0x20) = xmm1; /* movss */
    PUSH32(esp, 0); sub_003E1D70(); /* call 0x003E1D70 */

loc_000F5994: ;
    xmm0 = xmm0 * MEMF(edi + 0x1C); /* mulss */
    xmm0 = xmm0 + MEMF(edi + 0x18); /* addss */
    MEMF(esp + 0x24) = xmm0; /* movss */
    PUSH32(esp, 0); sub_003E1D70(); /* call 0x003E1D70 */

loc_000F59A9: ;
    xmm0 = xmm0 * MEMF(edi + 0x24); /* mulss */
    xmm0 = xmm0 + MEMF(edi + 0x20); /* addss */
    MEMF(esp + 0x28) = xmm0; /* movss */
    PUSH32(esp, 0); sub_003E2480(); /* call 0x003E2480 */

loc_000F59BE: ;
    ecx = (uint32_t)(int32_t)SMEM16(edi + 0x34);
    edx = ((int32_t)eax < 0) ? 0xFFFFFFFF : 0; /* cdq */
    ecx++;
    { int64_t _dividend = ((int64_t)(int32_t)edx << 32) | eax;
      eax = (uint32_t)((int32_t)(_dividend / (int32_t)ecx));
      edx = (uint32_t)((int32_t)(_dividend % (int32_t)ecx)); }
    SET_LO16(edx, LO16(edx) + MEM16(edi + 0x32));
    MEM16(esp + 0x36) = LO16(edx);
    PUSH32(esp, 0); sub_003E1D70(); /* call 0x003E1D70 */

loc_000F59D4: ;
    xmm0 = xmm0 * MEMF(edi + 0x3C); /* mulss */
    xmm0 = xmm0 + MEMF(edi + 0x38); /* addss */
    MEMF(esp + 0x3C) = xmm0; /* movss */
    PUSH32(esp, 0); sub_003E2480(); /* call 0x003E2480 */

loc_000F59E9: ;
    ecx = ZX8(MEM8(edi + 0x41));
    edx = ((int32_t)eax < 0) ? 0xFFFFFFFF : 0; /* cdq */
    ecx++;
    { int64_t _dividend = ((int64_t)(int32_t)edx << 32) | eax;
      eax = (uint32_t)((int32_t)(_dividend / (int32_t)ecx));
      edx = (uint32_t)((int32_t)(_dividend % (int32_t)ecx)); }
    SET_LO8(ebx, MEM8(edi + 0x40));
    SET_LO8(eax, MEM8(edi + 0x46));
    esi = esp + 0xC;
    SET_LO8(edx, LO8(edx) + LO8(ebx));
    MEM8(esp + 0x40) = LO8(edx);
    edx = MEM32(esp + 0x4C);
    PUSH32(esp, edx);
    PUSH32(esp, 0);
    PUSH32(esp, 0); sub_00178000(); /* call 0x00178000 */

loc_000F5A0D: ;
    esp = esp + 8;
    ebp--;
    if ((ebp != 0)) goto loc_000F5840; /* jne: not equal / not zero */

loc_000F5A17: ;
    POP32(esp, esi);
    POP32(esp, ebp);
    POP32(esp, ebx);

loc_000F5A1A: ;
    esp = esp + 0x3C;
    esp += 4; return; /* ret */

}

/**
 * sub_000F5A20
 * Original: 0x000F5A20 - 0x000F5BB4 (404 bytes, 89 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_000F5A20(void)
{
    float xmm0, xmm1, xmm2;

loc_000F5A20: ;
    esp = esp - 0x68;
    PUSH32(esp, esi);
    PUSH32(esp, 0); sub_003E2480(); /* call 0x003E2480 */

loc_000F5A29: ;
    ecx = (uint32_t)(int32_t)SMEM16(edi + 0x26);
    edx = ((int32_t)eax < 0) ? 0xFFFFFFFF : 0; /* cdq */
    ecx++;
    { int64_t _dividend = ((int64_t)(int32_t)edx << 32) | eax;
      eax = (uint32_t)((int32_t)(_dividend / (int32_t)ecx));
      edx = (uint32_t)((int32_t)(_dividend % (int32_t)ecx)); }
    eax = (uint32_t)(int32_t)SMEM16(edi + 0x24);
    xmm0 = MEMF(edi); /* movss */
    MEMF(esp + 0x28) = xmm0; /* movss */
    xmm0 = MEMF(edi + 4); /* movss */
    MEMF(esp + 0x2C) = xmm0; /* movss */
    xmm0 = MEMF(edi + 8); /* movss */
    MEMF(esp + 0x30) = xmm0; /* movss */
    xmm0 = MEMF(edi + 0xC); /* movss */
    xmm0 = xmm0 * MEMF(0x5A0060); /* mulss */
    MEMF(esp + 0x34) = xmm0; /* movss */
    xmm0 = MEMF(edi + 0x10); /* movss */
    xmm0 = xmm0 * MEMF(0x59D944); /* mulss */
    MEMF(esp + 0x38) = xmm0; /* movss */
    edx = edx + eax;
    eax = 0x55555556;
    { int64_t _r = (int64_t)(int32_t)eax * (int64_t)(int32_t)edx;
      eax = (uint32_t)_r; edx = (uint32_t)(_r >> 32); }
    ecx = edx;
    ecx = ecx >> 0x1F;
    ecx = ecx + edx;
    MEM32(esp + 0x3C) = ecx;
    PUSH32(esp, 0); sub_003E2480(); /* call 0x003E2480 */

loc_000F5A94: ;
    ecx = (uint32_t)(int32_t)SMEM16(edi + 0x2E);
    edx = ((int32_t)eax < 0) ? 0xFFFFFFFF : 0; /* cdq */
    ecx++;
    { int64_t _dividend = ((int64_t)(int32_t)edx << 32) | eax;
      eax = (uint32_t)((int32_t)(_dividend / (int32_t)ecx));
      edx = (uint32_t)((int32_t)(_dividend % (int32_t)ecx)); }
    eax = (uint32_t)(int32_t)SMEM16(edi + 0x2C);
    xmm0 = MEMF(0x6497D0); /* movss */
    ecx = (uint32_t)(int32_t)SMEM16(edi + 0x3C);
    xmm2 = MEMF(0x648D10); /* movss */
    MEM8(esp + 0x5C) = 0;
    MEMF(esp + 8) = xmm2; /* movss */
    MEMF(esp + 0x18) = xmm2; /* movss */
    edx = edx + eax;
    xmm1 = (float)(int32_t)edx; /* cvtsi2ss */
    edx = ZX8(MEM8(edi + 0x34));
    xmm1 = xmm1 * xmm0; /* mulss */
    MEMF(esp + 0x40) = xmm1; /* movss */
    xmm1 = (float)(int32_t)ecx; /* cvtsi2ss */
    xmm1 = xmm1 * xmm0; /* mulss */
    xmm0 = 0.0f; /* xorps self = zero */
    MEMF(esp + 0x44) = xmm1; /* movss */
    xmm1 = MEMF(0x649230); /* movss */
    MEMF(esp + 0x50) = xmm0; /* movss */
    MEMF(esp + 0x60) = xmm0; /* movss */
    MEMF(esp + 0x64) = xmm0; /* movss */
    MEMF(esp + 0x68) = xmm0; /* movss */
    MEMF(esp + 0xC) = xmm0; /* movss */
    xmm0 = MEMF(0x648D14); /* movss */
    MEMF(esp + 4) = xmm1; /* movss */
    MEMF(esp + 0x14) = xmm1; /* movss */
    xmm1 = MEMF(edi + 0x1C); /* movss */
    MEMF(esp + 0x10) = xmm0; /* movss */
    xmm0 = MEMF(0x648E38); /* movss */
    xmm1 = xmm1 * xmm0; /* mulss */
    MEMF(esp + 0x1C) = xmm1; /* movss */
    xmm1 = MEMF(edi + 0x20); /* movss */
    xmm1 = xmm1 * xmm0; /* mulss */
    xmm0 = MEMF(0x64A7B8); /* movss */
    MEMF(esp + 0x20) = xmm1; /* movss */
    MEMF(esp + 0x24) = xmm0; /* movss */
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, 0); RECOMP_ICALL_SAFE(MEM32(edx * 4 + 0x5975C8), _icall_esp); /* indirect call */
    }

loc_000F5B65: ;
    MEM32(esp + 0x48) = eax;
    PUSH32(esp, 0);
    eax = esp + 8;
    esi = esp + 0x2C;
    PUSH32(esp, 0); sub_001A5730(); /* call 0x001A5730 */

loc_000F5B78: ;
    eax = ZX8(MEM8(edi + 0x34));
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, 0); RECOMP_ICALL_SAFE(MEM32(eax * 4 + 0x5975C8), _icall_esp); /* indirect call */
    }

loc_000F5B83: ;
    MEM32(esp + 0x4C) = eax;
    PUSH32(esp, 0);
    eax = esp + 0xC;
    PUSH32(esp, 0); sub_001A5730(); /* call 0x001A5730 */

loc_000F5B92: ;
    ecx = ZX8(MEM8(edi + 0x34));
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, 0); RECOMP_ICALL_SAFE(MEM32(ecx * 4 + 0x5975C8), _icall_esp); /* indirect call */
    }

loc_000F5B9D: ;
    MEM32(esp + 0x50) = eax;
    PUSH32(esp, 0);
    eax = esp + 0x10;
    PUSH32(esp, 0); sub_001A5730(); /* call 0x001A5730 */

loc_000F5BAC: ;
    esp = esp + 0xC;
    POP32(esp, esi);
    esp = esp + 0x68;
    esp += 4; return; /* ret */

}

/**
 * sub_000F5BC0
 * Original: 0x000F5BC0 - 0x000F5D6F (431 bytes, 95 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_000F5BC0(void)
{
    float xmm0, xmm1, xmm2;

loc_000F5BC0: ;
    esp = esp - 0x68;
    PUSH32(esp, esi);
    PUSH32(esp, 0); sub_003E2480(); /* call 0x003E2480 */

loc_000F5BC9: ;
    ecx = (uint32_t)(int32_t)SMEM16(edi + 0x26);
    edx = ((int32_t)eax < 0) ? 0xFFFFFFFF : 0; /* cdq */
    ecx++;
    { int64_t _dividend = ((int64_t)(int32_t)edx << 32) | eax;
      eax = (uint32_t)((int32_t)(_dividend / (int32_t)ecx));
      edx = (uint32_t)((int32_t)(_dividend % (int32_t)ecx)); }
    eax = (uint32_t)(int32_t)SMEM16(edi + 0x24);
    xmm0 = MEMF(edi); /* movss */
    MEMF(esp + 0x28) = xmm0; /* movss */
    xmm0 = MEMF(edi + 4); /* movss */
    MEMF(esp + 0x2C) = xmm0; /* movss */
    xmm0 = MEMF(edi + 8); /* movss */
    MEMF(esp + 0x30) = xmm0; /* movss */
    xmm0 = MEMF(edi + 0xC); /* movss */
    xmm0 = xmm0 * MEMF(0x5A0060); /* mulss */
    MEMF(esp + 0x34) = xmm0; /* movss */
    xmm0 = MEMF(edi + 0x10); /* movss */
    xmm0 = xmm0 * MEMF(0x59D944); /* mulss */
    MEMF(esp + 0x38) = xmm0; /* movss */
    edx = edx + eax;
    eax = 0x55555556;
    { int64_t _r = (int64_t)(int32_t)eax * (int64_t)(int32_t)edx;
      eax = (uint32_t)_r; edx = (uint32_t)(_r >> 32); }
    ecx = edx;
    ecx = ecx >> 0x1F;
    ecx = ecx + edx;
    MEM32(esp + 0x3C) = ecx;
    PUSH32(esp, 0); sub_003E2480(); /* call 0x003E2480 */

loc_000F5C34: ;
    ecx = (uint32_t)(int32_t)SMEM16(edi + 0x2E);
    edx = ((int32_t)eax < 0) ? 0xFFFFFFFF : 0; /* cdq */
    ecx++;
    { int64_t _dividend = ((int64_t)(int32_t)edx << 32) | eax;
      eax = (uint32_t)((int32_t)(_dividend / (int32_t)ecx));
      edx = (uint32_t)((int32_t)(_dividend % (int32_t)ecx)); }
    eax = (uint32_t)(int32_t)SMEM16(edi + 0x2C);
    xmm0 = MEMF(0x6497D0); /* movss */
    ecx = (uint32_t)(int32_t)SMEM16(edi + 0x3C);
    xmm2 = MEMF(0x648D10); /* movss */
    MEM8(esp + 0x5C) = 1;
    MEMF(esp + 8) = xmm2; /* movss */
    MEMF(esp + 0x18) = xmm2; /* movss */
    edx = edx + eax;
    eax = ZX8(MEM8(esp + 0x74));
    xmm1 = (float)(int32_t)edx; /* cvtsi2ss */
    edx = ZX8(MEM8(esp + 0x70));
    xmm1 = xmm1 * xmm0; /* mulss */
    MEMF(esp + 0x40) = xmm1; /* movss */
    xmm1 = (float)(int32_t)ecx; /* cvtsi2ss */
    ecx = ZX8(MEM8(esp + 0x78));
    xmm1 = xmm1 * xmm0; /* mulss */
    xmm0 = 0.0f; /* xorps self = zero */
    MEMF(esp + 0x44) = xmm1; /* movss */
    xmm1 = (float)(int32_t)edx; /* cvtsi2ss */
    edx = ZX8(MEM8(edi + 0x34));
    MEMF(esp + 0x60) = xmm1; /* movss */
    xmm1 = (float)(int32_t)eax; /* cvtsi2ss */
    MEMF(esp + 0x64) = xmm1; /* movss */
    MEMF(esp + 0x50) = xmm0; /* movss */
    xmm1 = (float)(int32_t)ecx; /* cvtsi2ss */
    MEMF(esp + 0x68) = xmm1; /* movss */
    xmm1 = MEMF(0x649230); /* movss */
    MEMF(esp + 0xC) = xmm0; /* movss */
    xmm0 = MEMF(0x648D14); /* movss */
    MEMF(esp + 4) = xmm1; /* movss */
    MEMF(esp + 0x14) = xmm1; /* movss */
    xmm1 = MEMF(edi + 0x1C); /* movss */
    MEMF(esp + 0x10) = xmm0; /* movss */
    xmm0 = MEMF(0x648E38); /* movss */
    xmm1 = xmm1 * xmm0; /* mulss */
    MEMF(esp + 0x1C) = xmm1; /* movss */
    xmm1 = MEMF(edi + 0x20); /* movss */
    xmm1 = xmm1 * xmm0; /* mulss */
    xmm0 = MEMF(0x64A7B8); /* movss */
    MEMF(esp + 0x20) = xmm1; /* movss */
    MEMF(esp + 0x24) = xmm0; /* movss */
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, 0); RECOMP_ICALL_SAFE(MEM32(edx * 4 + 0x5975C8), _icall_esp); /* indirect call */
    }

loc_000F5D20: ;
    MEM32(esp + 0x48) = eax;
    PUSH32(esp, 0);
    eax = esp + 8;
    esi = esp + 0x2C;
    PUSH32(esp, 0); sub_001A5730(); /* call 0x001A5730 */

loc_000F5D33: ;
    eax = ZX8(MEM8(edi + 0x34));
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, 0); RECOMP_ICALL_SAFE(MEM32(eax * 4 + 0x5975C8), _icall_esp); /* indirect call */
    }

loc_000F5D3E: ;
    MEM32(esp + 0x4C) = eax;
    PUSH32(esp, 0);
    eax = esp + 0xC;
    PUSH32(esp, 0); sub_001A5730(); /* call 0x001A5730 */

loc_000F5D4D: ;
    ecx = ZX8(MEM8(edi + 0x34));
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, 0); RECOMP_ICALL_SAFE(MEM32(ecx * 4 + 0x5975C8), _icall_esp); /* indirect call */
    }

loc_000F5D58: ;
    MEM32(esp + 0x50) = eax;
    PUSH32(esp, 0);
    eax = esp + 0x10;
    PUSH32(esp, 0); sub_001A5730(); /* call 0x001A5730 */

loc_000F5D67: ;
    esp = esp + 0xC;
    POP32(esp, esi);
    esp = esp + 0x68;
    esp += 4; return; /* ret */

}

/**
 * sub_000F5D70
 * Original: 0x000F5D70 - 0x000F5D87 (23 bytes, 7 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_000F5D70(void)
{
    int _flags = 0; /* fallback flag var */
    float xmm1, xmm5;

loc_000F5D70: ;
    xmm5 = 0.0f; /* xorps self = zero */
    esp = esp - 0xEC;
    /* comiss xmm5, xmm1 - sets EFLAGS */
    if ((xmm5 < xmm1)) { sub_000F5D87(); return; } /* jb: below (unsigned <) */

loc_000F5D7E: ;
    eax = 0; /* xor self */
    esp = esp + 0xEC;
    esp += 4; return; /* ret */

}

/**
 * sub_000F6020
 * Original: 0x000F6020 - 0x000F609B (123 bytes, 27 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_000F6020(void)
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

loc_000F6020: ;
    PUSH32(esp, esi);
    esi = MEM32(esp + 8);
    fp_push(MEMF(esi + 0x290)); /* fld float */
    fp_top() = sqrt(fp_top()); /* fsqrt */
    fp_st1() *= fp_top(); fp_pop(); /* fmul */
    MEMF(esp + 8) = (float)fp_top(); fp_pop(); /* fst */
    MEMF(esi + 0x34) = (float)fp_top(); fp_popp(); /* fstp */
    SET_LO8(eax, MEM8(esi + 0x2A4));
    if (TEST_NZ(LO8(eax), 1)) goto loc_000F604F; /* jne: not equal / not zero */

loc_000F6044: ;
    xmm0 = MEMF(esp + 8); /* movss */
    MEMF(esi + 0x38) = xmm0; /* movss */

loc_000F604F: ;
    fp_push(MEMF(esi + 0x2A0)); /* fld float */
    fp_st1() *= fp_top(); fp_pop(); /* fmul */
    fp_st1() *= fp_top(); fp_pop(); /* fmul */
    /* FPU: fsubr dword ptr [esi + 0x29c] */
    PUSH32(esp, 0); sub_00471288(); /* call 0x00471288 */

loc_000F606C: ;
    xmm1 = MEMF(0x7FA21C); /* movss */
    MEM8(esi + 0xA8) = LO8(eax);
    xmm0 = MEMF(esi + 0x290); /* movss */
    xmm0 = xmm0 + xmm1; /* addss */
    /* comiss xmm0, MEMF(esi + 0x294) - sets EFLAGS */
    MEMF(esi + 0x290) = xmm0; /* movss */
    if ((xmm0 <= MEMF(esi + 0x294))) { sub_000F609B(); return; } /* jbe: below or equal (unsigned <=) */

loc_000F6097: ;
    eax = 0; /* xor self */
    POP32(esp, esi);
    esp += 4; return; /* ret */

    #undef fp_push
    #undef fp_pop
    #undef fp_popp
    #undef fp_top
    #undef fp_st1
}

/**
 * sub_000F60F0
 * Original: 0x000F60F0 - 0x000F618F (159 bytes, 45 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_000F60F0(void)
{
    int _flags = 0; /* fallback flag var */
    float xmm0, xmm1;

loc_000F60F0: ;
    PUSH32(esp, 0xFF);
    PUSH32(esp, 0x49);
    eax = 0x68;
    PUSH32(esp, 0); sub_000D9C60(); /* call 0x000D9C60 */

loc_000F6101: ;
    esp = esp + 8;
    if (TEST_Z(eax, eax)) goto loc_000F618E; /* je: equal / zero */

loc_000F610C: ;
    ecx = MEM32(esp + 0x1C);
    xmm0 = 0.0f; /* xorps self = zero */
    xmm1 = MEMF(esp + 0x10); /* movss */
    MEM32(eax + 0x2C) = ecx;
    PUSH32(esp, edi);
    ecx = esi;
    edi = MEM32(ecx);
    edx = eax + 0x4C;
    MEM32(edx) = edi;
    edi = MEM32(ecx + 4);
    MEM32(edx + 4) = edi;
    ecx = MEM32(ecx + 8);
    MEM32(edx + 8) = ecx;
    ecx = MEM32(esp + 0x1C);
    edx = MEM32(esp + 8);
    MEMF(eax + 0x3C) = xmm0; /* movss */
    xmm0 = MEMF(esp + 0xC); /* movss */
    MEMF(eax + 0x38) = xmm0; /* movss */
    xmm0 = MEMF(esp + 0x10); /* movss */
    MEM32(eax + 0x40) = ecx;
    MEMF(eax + 0x44) = xmm1; /* movss */
    xmm1 = MEMF(esp + 0x18); /* movss */
    MEMF(eax + 0x58) = xmm0; /* movss */
    MEM8(eax + 0x30) = 0;
    MEM32(eax + 0x34) = edx;
    MEMF(eax + 0x48) = xmm1; /* movss */
    SET_LO8(ecx, 1);
    MEM8(eax + 0x14) = LO8(ecx);
    edx = MEM32(esi);
    MEM32(eax + 0x18) = edx;
    edx = MEM32(esi + 4);
    MEM32(eax + 0x1C) = edx;
    edx = MEM32(esi + 8);
    MEM32(eax + 0x20) = edx;
    MEM8(eax + 0x14) = LO8(ecx);
    MEMF(eax + 0x24) = xmm0; /* movss */
    POP32(esp, edi);

loc_000F618E: ;
    esp += 4; return; /* ret */

}

/**
 * sub_000F6190
 * Original: 0x000F6190 - 0x000F61DC (76 bytes, 23 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_000F6190(void)
{
    int _flags = 0; /* fallback flag var */
    float xmm0;

loc_000F6190: ;
    PUSH32(esp, esi);
    esi = MEM32(esp + 8);
    xmm0 = MEMF(esi + 0x38); /* movss */
    /* ucomiss xmm0, MEMF(0x648D34) - sets EFLAGS */
    /* lahf - load AH from flags (used in FPU compare idiom) */
    if (1 /* jnp after test - parity */) goto loc_000F61BF; /* jnp: not parity */

loc_000F61A7: ;
    xmm0 = MEMF(0x7FA21C); /* movss */
    xmm0 = xmm0 + MEMF(esi + 0x3C); /* addss */
    /* comiss xmm0, MEMF(esi + 0x38) - sets EFLAGS */
    MEMF(esi + 0x3C) = xmm0; /* movss */
    if ((xmm0 >= MEMF(esi + 0x38))) goto loc_000F61D1; /* jae: above or equal (unsigned >=) */

loc_000F61BF: ;
    eax = MEM32(esi + 0x34);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, esi);
    PUSH32(esp, 0); RECOMP_ICALL_SAFE(MEM32(eax * 4 + 0x6B3F98), _icall_esp); /* indirect call */
    }

loc_000F61CA: ;
    esp = esp + 4;
    if (TEST_NZ(LO8(eax), LO8(eax))) goto loc_000F61DA; /* jne: not equal / not zero */

loc_000F61D1: ;
    PUSH32(esp, esi);
    PUSH32(esp, 0); sub_000DAE40(); /* call 0x000DAE40 */

loc_000F61D7: ;
    esp = esp + 4;

loc_000F61DA: ;
    POP32(esp, esi);
    esp += 4; return; /* ret */

}

/**
 * sub_000F61E0
 * Original: 0x000F61E0 - 0x000F6332 (338 bytes, 92 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_000F61E0(void)
{
    uint32_t ebp;
    int _flags = 0; /* fallback flag var */
    float xmm0, xmm1, xmm5;

loc_000F61E0: ;
    PUSH32(esp, ebp);
    ebp = esp;
    esp = esp & 0xFFFFFFF0u;
    esp = esp - 0x44;
    PUSH32(esp, ebx);
    PUSH32(esp, esi);
    PUSH32(esp, edi);
    edi = eax;
    PUSH32(esp, 0xFF);
    PUSH32(esp, 0x6A);
    eax = 0xD0;
    PUSH32(esp, 0); sub_000D9C60(); /* call 0x000D9C60 */

loc_000F61FF: ;
    esi = eax;
    esp = esp + 8;
    if (TEST_Z(esi, esi)) goto loc_000F632B; /* je: equal / zero */

loc_000F620C: ;
    xmm0 = 0.0f; /* xorps self = zero */
    ebx = MEM32(ebp + 8);
    xmm5 = MEMF(ebp + 0x10); /* movss */
    MEMF(esi + 0x34) = xmm0; /* movss */
    xmm0 = MEMF(ebp + 0xC); /* movss */
    MEMF(esi + 0x30) = xmm0; /* movss */
    xmm0 = MEMF(0x5A0060); /* movss */
    MEM32(esi + 0x2C) = 0;
    MEMF(esi + 0x48) = xmm5; /* movss */
    MEMF(esi + 0x4C) = xmm0; /* movss */
    ecx = ebx;
    edx = MEM32(ecx);
    eax = esi + 0x50;
    MEM32(eax) = edx;
    edx = MEM32(ecx + 4);
    MEM32(eax + 4) = edx;
    ecx = MEM32(ecx + 8);
    MEM32(eax + 8) = ecx;
    PUSH32(esp, 0); sub_003E1D70(); /* call 0x003E1D70 */

loc_000F6259: ;
    xmm0 = xmm0 * MEMF(0x648D30); /* mulss */
    xmm1 = MEMF(0x648D88); /* movss */
    xmm1 = xmm1 - xmm0; /* subss */
    MEMF(esi + 0x40) = xmm1; /* movss */
    PUSH32(esp, 0); sub_003E1D70(); /* call 0x003E1D70 */

loc_000F6277: ;
    (void)0; /* cmp edi, 1 - flags set for next jcc */
    xmm1 = MEMF(0x648D10); /* movss */
    edx = MEM32(ebp + 0x14);
    eax = MEM32(ebp + 0x18);
    xmm1 = xmm1 - xmm0; /* subss */
    xmm0 = MEMF(esi + 0x30); /* movss */
    xmm0 = xmm0 * MEMF(0x648D38); /* mulss */
    MEMF(esi + 0xC0) = xmm0; /* movss */
    xmm0 = MEMF(esi + 0x30); /* movss */
    xmm0 = xmm0 * MEMF(0x648F94); /* mulss */
    MEMF(esi + 0x44) = xmm1; /* movss */
    MEM32(esi + 0x38) = edx;
    MEM32(esi + 0x3C) = eax;
    MEM8(esi + 0xBC) = 0;
    MEMF(esi + 0xC4) = xmm0; /* movss */
    MEM32(esi + 0xC8) = edi;
    if (CMP_NE(edi, 1)) goto loc_000F62D6; /* jne: not equal / not zero */

loc_000F62D0: ;
    MEM32(esi + 0xCC) = ebx;

loc_000F62D6: ;
    eax = MEM32(ebp + 0x10);
    PUSH32(esp, 0);
    PUSH32(esp, eax);
    PUSH32(esp, eax);
    eax = esp + 0x1C;
    PUSH32(esp, 0); sub_0042889D(); /* call 0x0042889D */

loc_000F62E6: ;
    edi = 0x590588;
    ebx = esi + 0x5C;
    edi = edi;

loc_000F62F0: ;
    ecx = esp + 0x10;
    PUSH32(esp, ecx);
    PUSH32(esp, edi);
    PUSH32(esp, ebx);
    PUSH32(esp, 0); sub_00428393(); /* call 0x00428393 */

loc_000F62FC: ;
    edi = edi + 0xC;
    ebx = ebx + 0x18;
    if (CMP_L(edi, 0x5905B8)) goto loc_000F62F0; /* jl: less (signed <) */

loc_000F630A: ;
    eax = MEM32(ebp + 8);
    MEM8(esi + 0x14) = 1;
    edx = MEM32(eax);
    MEM32(esi + 0x18) = edx;
    ecx = MEM32(eax + 4);
    MEM32(esi + 0x1C) = ecx;
    edx = MEM32(eax + 8);
    MEM32(esi + 0x20) = edx;
    MEM8(esi + 0x14) = 1;
    MEMF(esi + 0x24) = xmm5; /* movss */

loc_000F632B: ;
    POP32(esp, edi);
    POP32(esp, esi);
    POP32(esp, ebx);
    esp = ebp;
    POP32(esp, ebp);
    esp += 4; return; /* ret */

}

/**
 * sub_000F6340
 * Original: 0x000F6340 - 0x000F637B (59 bytes, 23 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_000F6340(void)
{
    uint32_t ebp;
    int _flags = 0; /* fallback flag var */
    float xmm0, xmm1;

loc_000F6340: ;
    PUSH32(esp, ebp);
    ebp = esp;
    esp = esp & 0xFFFFFFF0u;
    esp = esp - 0x44;
    xmm1 = MEMF(0x7FA21C); /* movss */
    PUSH32(esp, ebx);
    PUSH32(esp, esi);
    esi = MEM32(ebp + 8);
    xmm0 = MEMF(esi + 0x34); /* movss */
    xmm0 = xmm0 + xmm1; /* addss */
    /* comiss xmm0, MEMF(esi + 0x30) - sets EFLAGS */
    PUSH32(esp, edi);
    MEMF(esi + 0x34) = xmm0; /* movss */
    if ((xmm0 < MEMF(esi + 0x30))) { sub_000F637B(); return; } /* jb: below (unsigned <) */

loc_000F636B: ;
    PUSH32(esp, esi);
    PUSH32(esp, 0); sub_000DAE40(); /* call 0x000DAE40 */

loc_000F6371: ;
    esp = esp + 4;
    POP32(esp, edi);
    POP32(esp, esi);
    POP32(esp, ebx);
    esp = ebp;
    POP32(esp, ebp);
    esp += 4; return; /* ret */

}

/**
 * sub_000F6510
 * Original: 0x000F6510 - 0x000F652E (30 bytes, 10 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_000F6510(void)
{

loc_000F6510: ;
    eax = MEM32(esp + 4);
    edx = MEM32(eax + 0xCC);
    ecx = eax + 0x50;
    eax = MEM32(edx);
    MEM32(ecx) = eax;
    eax = MEM32(edx + 4);
    MEM32(ecx + 4) = eax;
    edx = MEM32(edx + 8);
    MEM32(ecx + 8) = edx;
    esp += 4; return; /* ret */

}

/**
 * sub_000F6530
 * Original: 0x000F6530 - 0x000F67DF (687 bytes, 158 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_000F6530(void)
{
    int _flags = 0; /* fallback flag var */

loc_000F6530: ;
    eax = MEM32(0x6B826C);
    (void)0; /* cmp MEM32(0x771760), eax - flags set for next jcc */
    PUSH32(esp, esi);
    PUSH32(esp, edi);
    esi = eax;
    if (CMP_EQ(MEM32(0x771760), eax)) goto loc_000F654D; /* je: equal / zero */

loc_000F6541: ;
    PUSH32(esp, eax);
    PUSH32(esp, 0); sub_00536930(); /* call 0x00536930 */

loc_000F6547: ;
    MEM32(0x771760) = esi;

loc_000F654D: ;
    eax = MEM32(0x77175C);
    PUSH32(esp, ebx);
    ebx = 0; /* xor self */
    if (CMP_EQ(eax, ebx)) goto loc_000F6566; /* je: equal / zero */

loc_000F6559: ;
    eax = 0; /* xor self */
    PUSH32(esp, 0); sub_00538690(); /* call 0x00538690 */

loc_000F6560: ;
    MEM32(0x77175C) = ebx;

loc_000F6566: ;
    esi = (uint32_t)(int32_t)SMEM16(esp + 0x14);
    eax = MEM32(0x84A13C);
    esi = (uint32_t)((int32_t)esi * (int32_t)0x2B0);
    PUSH32(esp, 0x10);
    edx = esi + eax + 0x100;
    ecx = 0x88;
    PUSH32(esp, 0); sub_00536C00(); /* call 0x00536C00 */

loc_000F6589: ;
    ecx = MEM32(0x84A13C);
    edx = esi + ecx + 0xC0;
    PUSH32(esp, 0x10);
    ecx = 0x92;
    PUSH32(esp, 0); sub_00536C00(); /* call 0x00536C00 */

loc_000F65A2: ;
    eax = MEM32(0x77182C);
    esi = 0x1B02;
    if (CMP_EQ(eax, esi)) goto loc_000F65BC; /* je: equal / zero */

loc_000F65B0: ;
    PUSH32(esp, esi);
    PUSH32(esp, 0); sub_00537840(); /* call 0x00537840 */

loc_000F65B6: ;
    MEM32(0x77182C) = esi;

loc_000F65BC: ;
    if (CMP_EQ(MEM32(0x771828), ebx)) goto loc_000F65D0; /* je: equal / zero */

loc_000F65C4: ;
    PUSH32(esp, ebx);
    PUSH32(esp, 0); sub_00537070(); /* call 0x00537070 */

loc_000F65CA: ;
    MEM32(0x771828) = ebx;

loc_000F65D0: ;
    eax = MEM32(0x771824);
    edi = 1;
    if (CMP_EQ(eax, edi)) goto loc_000F65F6; /* je: equal / zero */

loc_000F65DE: ;
    edx = edi;
    ecx = 0x40304;
    PUSH32(esp, 0); sub_00537990(); /* call 0x00537990 */

loc_000F65EA: ;
    MEM32(0x549AE4) = edi;
    MEM32(0x771824) = edi;

loc_000F65F6: ;
    if (CMP_EQ(MEM32(0x771820), ebx)) goto loc_000F6616; /* je: equal / zero */

loc_000F65FE: ;
    edx = 0; /* xor self */
    ecx = 0x40300;
    PUSH32(esp, 0); sub_00537990(); /* call 0x00537990 */

loc_000F660A: ;
    MEM32(0x549AE8) = ebx;
    MEM32(0x771820) = ebx;

loc_000F6616: ;
    if (CMP_EQ(MEM32(0x77181C), edi)) goto loc_000F662A; /* je: equal / zero */

loc_000F661E: ;
    PUSH32(esp, edi);
    PUSH32(esp, 0); sub_00537190(); /* call 0x00537190 */

loc_000F6624: ;
    MEM32(0x77181C) = edi;

loc_000F662A: ;
    eax = MEM32(0x771818);
    esi = 0x203;
    if (CMP_EQ(eax, esi)) goto loc_000F6650; /* je: equal / zero */

loc_000F6638: ;
    edx = esi;
    ecx = 0x40354;
    PUSH32(esp, 0); sub_00537990(); /* call 0x00537990 */

loc_000F6644: ;
    MEM32(0x549ADC) = esi;
    MEM32(0x771818) = esi;

loc_000F6650: ;
    if (CMP_EQ(MEM32(0x771814), ebx)) goto loc_000F6670; /* je: equal / zero */

loc_000F6658: ;
    edx = 0; /* xor self */
    ecx = 0x4035C;
    PUSH32(esp, 0); sub_00537990(); /* call 0x00537990 */

loc_000F6664: ;
    MEM32(0x549AF8) = ebx;
    MEM32(0x771814) = ebx;

loc_000F6670: ;
    if (CMP_EQ(MEM32(0x771810), ebx)) goto loc_000F668E; /* je: equal / zero */

loc_000F6678: ;
    MEM32(0x5499F0) = MEM32(0x5499F0) | 0x1200;
    MEM32(0x549B90) = ebx;
    MEM32(0x771810) = ebx;

loc_000F668E: ;
    PUSH32(esp, ebx);
    esi = 0; /* xor self */
    PUSH32(esp, 0); sub_005379C0(); /* call 0x005379C0 */

loc_000F6696: ;
    eax = MEM32(0x7717E4);
    ecx = 2;
    (void)0; /* cmp eax, ecx - flags set for next jcc */
    eax = MEM32(0x5499F0);
    if (CMP_EQ(eax, ecx)) goto loc_000F66BA; /* je: equal / zero */

loc_000F66A9: ;
    eax = eax | 0x800;
    MEM32(0x547360) = ecx;
    MEM32(0x7717E4) = ecx;

loc_000F66BA: ;
    if (CMP_EQ(MEM32(0x7717C4), ecx)) goto loc_000F66D3; /* je: equal / zero */

loc_000F66C2: ;
    eax = eax | 0x800;
    MEM32(0x547368) = ecx;
    MEM32(0x7717C4) = ecx;

loc_000F66D3: ;
    esi = MEM32(0x7717A4);
    edx = 4;
    if (CMP_EQ(esi, edx)) goto loc_000F66F3; /* je: equal / zero */

loc_000F66E2: ;
    eax = eax | 0x800;
    MEM32(0x547370) = edx;
    MEM32(0x7717A4) = edx;

loc_000F66F3: ;
    if (CMP_EQ(MEM32(0x771784), ecx)) goto loc_000F670C; /* je: equal / zero */

loc_000F66FB: ;
    eax = eax | 0x800;
    MEM32(0x547378) = ecx;
    MEM32(0x771784) = ecx;

loc_000F670C: ;
    if (CMP_EQ(MEM32(0x771774), ebx)) goto loc_000F6725; /* je: equal / zero */

loc_000F6714: ;
    eax = eax | 0x800;
    MEM32(0x54737C) = ebx;
    MEM32(0x771774) = ebx;

loc_000F6725: ;
    ecx = 3;
    MEM32(0x547330) = ecx;
    MEM32(0x547334) = ecx;
    ecx = MEM32(0x7717E8);
    eax = eax | edi;
    if (CMP_EQ(ecx, edi)) goto loc_000F6753; /* je: equal / zero */

loc_000F6742: ;
    eax = eax | 0x800;
    MEM32(0x5473E0) = edi;
    MEM32(0x7717E8) = edi;

loc_000F6753: ;
    if (CMP_EQ(MEM32(0x7717A8), edi)) goto loc_000F676C; /* je: equal / zero */

loc_000F675B: ;
    eax = eax | 0x800;
    MEM32(0x5473F0) = edi;
    MEM32(0x7717A8) = edi;

loc_000F676C: ;
    eax = eax | 0x400;
    edx = 0x8006;
    ecx = 0x40350;
    MEM32(0x5499F0) = eax;
    MEM32(0x547384) = ebx;
    PUSH32(esp, 0); sub_00537990(); /* call 0x00537990 */

loc_000F678B: ;
    eax = MEM32(0x77180C);
    esi = 0x302;
    (void)0; /* cmp eax, esi - flags set for next jcc */
    MEM32(0x549B20) = 0x8006;
    POP32(esp, ebx);
    if (CMP_EQ(eax, esi)) goto loc_000F67BC; /* je: equal / zero */

loc_000F67A4: ;
    edx = esi;
    ecx = 0x40344;
    PUSH32(esp, 0); sub_00537990(); /* call 0x00537990 */

loc_000F67B0: ;
    MEM32(0x549AF0) = esi;
    MEM32(0x77180C) = esi;

loc_000F67BC: ;
    if (CMP_EQ(MEM32(0x771808), edi)) goto loc_000F67DC; /* je: equal / zero */

loc_000F67C4: ;
    edx = edi;
    ecx = 0x40348;
    PUSH32(esp, 0); sub_00537990(); /* call 0x00537990 */

loc_000F67D0: ;
    MEM32(0x549AF4) = edi;
    MEM32(0x771808) = edi;

loc_000F67DC: ;
    POP32(esp, edi);
    POP32(esp, esi);
    esp += 4; return; /* ret */

}

/**
 * sub_000F67E0
 * Original: 0x000F67E0 - 0x000F688A (170 bytes, 50 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_000F67E0(void)
{
    uint32_t ebp;
    int _flags = 0; /* fallback flag var */
    float xmm0, xmm1;

loc_000F67E0: ;
    PUSH32(esp, ebp);
    ebp = esp;
    esp = esp & 0xFFFFFFF0u;
    esp = esp - 0x74;
    PUSH32(esp, ebx);
    ebx = MEM32(ebp + 8);
    eax = MEM32(ebx + 0x40);
    PUSH32(esp, esi);
    PUSH32(esp, edi);
    PUSH32(esp, eax);
    SET_LO8(eax, 0x7A);
    ecx = esp + 0x44;
    PUSH32(esp, 0); sub_003E2640(); /* call 0x003E2640 */

loc_000F67FE: ;
    ecx = (uint32_t)(int32_t)SMEM16(ebp + 0xC);
    edx = MEM32(0x84A13C);
    ecx = (uint32_t)((int32_t)ecx * (int32_t)0x2B0);
    esp = esp + 4;
    eax = ecx + edx + 0x80;
    PUSH32(esp, eax);
    ecx = esp + 0x44;
    PUSH32(esp, ecx);
    edx = ecx;
    PUSH32(esp, edx);
    PUSH32(esp, 0); sub_0042841D(); /* call 0x0042841D */

loc_000F6826: ;
    xmm0 = MEMF(ebx + 0x50); /* movss */
    xmm1 = (float)(int32_t)MEM32(ebx + 0x3C); /* cvtsi2ss */
    MEMF(esp + 0x70) = xmm0; /* movss */
    xmm0 = MEMF(ebx + 0x54); /* movss */
    MEMF(esp + 0x74) = xmm0; /* movss */
    xmm0 = MEMF(ebx + 0x58); /* movss */
    MEMF(esp + 0x78) = xmm0; /* movss */
    xmm0 = MEMF(ebx + 0x34); /* movss */
    xmm0 = xmm0 / MEMF(ebx + 0x30); /* divss */
    eax = esp + 0x18;
    PUSH32(esp, eax);
    eax = MEM32(ebx + 0x38);
    xmm0 = xmm0 * xmm1; /* mulss */
    edi = 0; /* xor self */
    ecx = (int32_t)xmm0; /* cvttss2si */
    MEM32(esp + 0x1C) = edi;
    PUSH32(esp, 0); sub_000761F0(); /* call 0x000761F0 */

loc_000F6871: ;
    esi = eax;
    esp = esp + 4;
    if (CMP_NE(esi, edi)) { sub_000F688A(); return; } /* jne: not equal / not zero */

loc_000F687A: ;
    PUSH32(esp, edi);
    eax = 0; /* xor self */
    PUSH32(esp, 0); sub_00539960(); /* call 0x00539960 */

loc_000F6882: ;
    MEM32(0x771764) = edi;
    g_seh_ebp = ebp; sub_000F68A1(); return; /* tail jmp 0x000F68A1 */

}

/**
 * sub_000F69D0
 * Original: 0x000F69D0 - 0x000F6ABF (239 bytes, 80 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_000F69D0(void)
{
    uint32_t ebp;
    int _flags = 0; /* fallback flag var */
    float xmm0, xmm5;

loc_000F69D0: ;
    PUSH32(esp, ebp);
    ebp = esp;
    esp = esp & 0xFFFFFFF0u;
    esp = esp - 0x44;
    PUSH32(esp, ebx);
    PUSH32(esp, esi);
    PUSH32(esp, edi);
    PUSH32(esp, 0xFF);
    PUSH32(esp, 0x4A);
    eax = 0xB4;
    PUSH32(esp, 0); sub_000D9C60(); /* call 0x000D9C60 */

loc_000F69ED: ;
    esi = eax;
    eax = 0; /* xor self */
    esp = esp + 8;
    if (CMP_EQ(esi, eax)) goto loc_000F6AB8; /* je: equal / zero */

loc_000F69FC: ;
    xmm0 = 0.0f; /* xorps self = zero */
    edx = MEM32(ebp + 8);
    MEMF(esi + 0x34) = xmm0; /* movss */
    xmm0 = MEMF(ebp + 0xC); /* movss */
    xmm5 = MEMF(ebp + 0x18); /* movss */
    MEMF(esi + 0x30) = xmm0; /* movss */
    xmm0 = MEMF(ebp + 0x10); /* movss */
    MEM32(esi + 0x2C) = eax;
    edi = MEM32(edx);
    PUSH32(esp, eax);
    ecx = esi + 0x38;
    MEM32(ecx) = edi;
    edi = MEM32(edx + 4);
    PUSH32(esp, eax);
    MEM32(ecx + 4) = edi;
    edx = MEM32(edx + 8);
    PUSH32(esp, eax);
    MEM32(ecx + 8) = edx;
    edx = MEM32(ebp + 0x1C);
    ecx = MEM32(ebp + 0x20);
    PUSH32(esp, edx);
    PUSH32(esp, eax);
    PUSH32(esp, eax);
    PUSH32(esp, eax);
    MEM8(esi + 0xA8) = LO8(eax);
    eax = MEM32(ebp + 0x18);
    MEM32(esi + 0xA4) = ecx;
    PUSH32(esp, eax);
    ecx = esp + 0x30;
    MEMF(esi + 0xAC) = xmm0; /* movss */
    xmm0 = MEMF(ebp + 0x14); /* movss */
    PUSH32(esp, ecx);
    MEMF(esi + 0xB0) = xmm0; /* movss */
    PUSH32(esp, 0); sub_003E2E60(); /* call 0x003E2E60 */

loc_000F6A6D: ;
    esp = esp + 0x24;
    edi = 0x590588;
    ebx = esi + 0x44;

loc_000F6A78: ;
    edx = esp + 0x10;
    PUSH32(esp, edx);
    PUSH32(esp, edi);
    PUSH32(esp, ebx);
    PUSH32(esp, 0); sub_00428393(); /* call 0x00428393 */

loc_000F6A84: ;
    edi = edi + 0xC;
    ebx = ebx + 0x18;
    if (CMP_L(edi, 0x5905B8)) goto loc_000F6A78; /* jl: less (signed <) */

loc_000F6A92: ;
    eax = MEM32(ebp + 8);
    xmm0 = MEMF(ebp + 0x18); /* movss */
    SET_LO8(ecx, 1);
    MEM8(esi + 0x14) = LO8(ecx);
    edx = MEM32(eax);
    MEM32(esi + 0x18) = edx;
    edx = MEM32(eax + 4);
    MEM32(esi + 0x1C) = edx;
    eax = MEM32(eax + 8);
    MEM32(esi + 0x20) = eax;
    MEM8(esi + 0x14) = LO8(ecx);
    MEMF(esi + 0x24) = xmm0; /* movss */

loc_000F6AB8: ;
    POP32(esp, edi);
    POP32(esp, esi);
    POP32(esp, ebx);
    esp = ebp;
    POP32(esp, ebp);
    esp += 4; return; /* ret */

}

/**
 * sub_000F6AC0
 * Original: 0x000F6AC0 - 0x000F6AF0 (48 bytes, 15 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_000F6AC0(void)
{
    int _flags = 0; /* fallback flag var */
    float xmm0;

loc_000F6AC0: ;
    PUSH32(esp, ecx);
    xmm0 = MEMF(0x7FA21C); /* movss */
    PUSH32(esp, esi);
    esi = MEM32(esp + 0xC);
    xmm0 = xmm0 + MEMF(esi + 0x34); /* addss */
    /* comiss xmm0, MEMF(esi + 0x30) - sets EFLAGS */
    MEMF(esp + 4) = xmm0; /* movss */
    MEMF(esi + 0x34) = xmm0; /* movss */
    if ((xmm0 < MEMF(esi + 0x30))) { sub_000F6AF0(); return; } /* jb: below (unsigned <) */

loc_000F6AE4: ;
    PUSH32(esp, esi);
    PUSH32(esp, 0); sub_000DAE40(); /* call 0x000DAE40 */

loc_000F6AEA: ;
    esp = esp + 4;
    POP32(esp, esi);
    POP32(esp, ecx);
    esp += 4; return; /* ret */

}

/**
 * sub_000F6BD0
 * Original: 0x000F6BD0 - 0x000F6E6C (668 bytes, 156 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_000F6BD0(void)
{
    int _flags = 0; /* fallback flag var */

loc_000F6BD0: ;
    eax = MEM32(0x6B826C);
    (void)0; /* cmp MEM32(0x771760), eax - flags set for next jcc */
    PUSH32(esp, ebx);
    PUSH32(esp, esi);
    esi = eax;
    if (CMP_EQ(MEM32(0x771760), eax)) goto loc_000F6BED; /* je: equal / zero */

loc_000F6BE1: ;
    PUSH32(esp, eax);
    PUSH32(esp, 0); sub_00536930(); /* call 0x00536930 */

loc_000F6BE7: ;
    MEM32(0x771760) = esi;

loc_000F6BED: ;
    esi = (uint32_t)(int32_t)SMEM16(esp + 0x10);
    eax = MEM32(0x84A13C);
    esi = (uint32_t)((int32_t)esi * (int32_t)0x2B0);
    PUSH32(esp, 0x10);
    edx = esi + eax + 0x100;
    ecx = 0x88;
    PUSH32(esp, 0); sub_00536C00(); /* call 0x00536C00 */

loc_000F6C10: ;
    ecx = MEM32(0x84A13C);
    edx = esi + ecx + 0xC0;
    PUSH32(esp, 0x10);
    ecx = 0x92;
    PUSH32(esp, 0); sub_00536C00(); /* call 0x00536C00 */

loc_000F6C29: ;
    eax = MEM32(0x77182C);
    esi = 0x1B02;
    if (CMP_EQ(eax, esi)) goto loc_000F6C43; /* je: equal / zero */

loc_000F6C37: ;
    PUSH32(esp, esi);
    PUSH32(esp, 0); sub_00537840(); /* call 0x00537840 */

loc_000F6C3D: ;
    MEM32(0x77182C) = esi;

loc_000F6C43: ;
    eax = MEM32(0x771828);
    ebx = 0; /* xor self */
    if (CMP_EQ(eax, ebx)) goto loc_000F6C5A; /* je: equal / zero */

loc_000F6C4E: ;
    PUSH32(esp, ebx);
    PUSH32(esp, 0); sub_00537070(); /* call 0x00537070 */

loc_000F6C54: ;
    MEM32(0x771828) = ebx;

loc_000F6C5A: ;
    eax = MEM32(0x771824);
    PUSH32(esp, edi);
    edi = 1;
    if (CMP_EQ(eax, edi)) goto loc_000F6C81; /* je: equal / zero */

loc_000F6C69: ;
    edx = edi;
    ecx = 0x40304;
    PUSH32(esp, 0); sub_00537990(); /* call 0x00537990 */

loc_000F6C75: ;
    MEM32(0x549AE4) = edi;
    MEM32(0x771824) = edi;

loc_000F6C81: ;
    if (CMP_EQ(MEM32(0x771820), ebx)) goto loc_000F6CA1; /* je: equal / zero */

loc_000F6C89: ;
    edx = 0; /* xor self */
    ecx = 0x40300;
    PUSH32(esp, 0); sub_00537990(); /* call 0x00537990 */

loc_000F6C95: ;
    MEM32(0x549AE8) = ebx;
    MEM32(0x771820) = ebx;

loc_000F6CA1: ;
    if (CMP_EQ(MEM32(0x77181C), edi)) goto loc_000F6CB5; /* je: equal / zero */

loc_000F6CA9: ;
    PUSH32(esp, edi);
    PUSH32(esp, 0); sub_00537190(); /* call 0x00537190 */

loc_000F6CAF: ;
    MEM32(0x77181C) = edi;

loc_000F6CB5: ;
    eax = MEM32(0x771818);
    esi = 0x203;
    if (CMP_EQ(eax, esi)) goto loc_000F6CDB; /* je: equal / zero */

loc_000F6CC3: ;
    edx = esi;
    ecx = 0x40354;
    PUSH32(esp, 0); sub_00537990(); /* call 0x00537990 */

loc_000F6CCF: ;
    MEM32(0x549ADC) = esi;
    MEM32(0x771818) = esi;

loc_000F6CDB: ;
    if (CMP_EQ(MEM32(0x771814), ebx)) goto loc_000F6CFB; /* je: equal / zero */

loc_000F6CE3: ;
    edx = 0; /* xor self */
    ecx = 0x4035C;
    PUSH32(esp, 0); sub_00537990(); /* call 0x00537990 */

loc_000F6CEF: ;
    MEM32(0x549AF8) = ebx;
    MEM32(0x771814) = ebx;

loc_000F6CFB: ;
    if (CMP_EQ(MEM32(0x771810), ebx)) goto loc_000F6D19; /* je: equal / zero */

loc_000F6D03: ;
    MEM32(0x5499F0) = MEM32(0x5499F0) | 0x1200;
    MEM32(0x549B90) = ebx;
    MEM32(0x771810) = ebx;

loc_000F6D19: ;
    PUSH32(esp, ebx);
    esi = 0; /* xor self */
    PUSH32(esp, 0); sub_005379C0(); /* call 0x005379C0 */

loc_000F6D21: ;
    eax = MEM32(0x7717E4);
    ecx = 2;
    (void)0; /* cmp eax, ecx - flags set for next jcc */
    eax = MEM32(0x5499F0);
    if (CMP_EQ(eax, ecx)) goto loc_000F6D45; /* je: equal / zero */

loc_000F6D34: ;
    eax = eax | 0x800;
    MEM32(0x547360) = ecx;
    MEM32(0x7717E4) = ecx;

loc_000F6D45: ;
    if (CMP_EQ(MEM32(0x7717C4), ecx)) goto loc_000F6D5E; /* je: equal / zero */

loc_000F6D4D: ;
    eax = eax | 0x800;
    MEM32(0x547368) = ecx;
    MEM32(0x7717C4) = ecx;

loc_000F6D5E: ;
    esi = MEM32(0x7717A4);
    edx = 4;
    if (CMP_EQ(esi, edx)) goto loc_000F6D7E; /* je: equal / zero */

loc_000F6D6D: ;
    eax = eax | 0x800;
    MEM32(0x547370) = edx;
    MEM32(0x7717A4) = edx;

loc_000F6D7E: ;
    if (CMP_EQ(MEM32(0x771784), ecx)) goto loc_000F6D97; /* je: equal / zero */

loc_000F6D86: ;
    eax = eax | 0x800;
    MEM32(0x547378) = ecx;
    MEM32(0x771784) = ecx;

loc_000F6D97: ;
    if (CMP_EQ(MEM32(0x771774), ebx)) goto loc_000F6DB0; /* je: equal / zero */

loc_000F6D9F: ;
    eax = eax | 0x800;
    MEM32(0x54737C) = ebx;
    MEM32(0x771774) = ebx;

loc_000F6DB0: ;
    ecx = 3;
    MEM32(0x547330) = ecx;
    MEM32(0x547334) = ecx;
    ecx = MEM32(0x7717E8);
    eax = eax | edi;
    if (CMP_EQ(ecx, edi)) goto loc_000F6DDE; /* je: equal / zero */

loc_000F6DCD: ;
    eax = eax | 0x800;
    MEM32(0x5473E0) = edi;
    MEM32(0x7717E8) = edi;

loc_000F6DDE: ;
    if (CMP_EQ(MEM32(0x7717A8), edi)) goto loc_000F6DF7; /* je: equal / zero */

loc_000F6DE6: ;
    eax = eax | 0x800;
    MEM32(0x5473F0) = edi;
    MEM32(0x7717A8) = edi;

loc_000F6DF7: ;
    eax = eax | 0x400;
    MEM32(0x5499F0) = eax;
    eax = MEM32(0x77180C);
    esi = 0x302;
    (void)0; /* cmp eax, esi - flags set for next jcc */
    MEM32(0x547384) = ebx;
    POP32(esp, edi);
    if (CMP_EQ(eax, esi)) goto loc_000F6E2E; /* je: equal / zero */

loc_000F6E16: ;
    edx = esi;
    ecx = 0x40344;
    PUSH32(esp, 0); sub_00537990(); /* call 0x00537990 */

loc_000F6E22: ;
    MEM32(0x549AF0) = esi;
    MEM32(0x77180C) = esi;

loc_000F6E2E: ;
    eax = MEM32(0x771808);
    esi = 0x303;
    if (CMP_EQ(eax, esi)) goto loc_000F6E54; /* je: equal / zero */

loc_000F6E3C: ;
    edx = esi;
    ecx = 0x40348;
    PUSH32(esp, 0); sub_00537990(); /* call 0x00537990 */

loc_000F6E48: ;
    MEM32(0x549AF4) = esi;
    MEM32(0x771808) = esi;

loc_000F6E54: ;
    if (CMP_EQ(MEM32(0x77175C), ebx)) goto loc_000F6E69; /* je: equal / zero */

loc_000F6E5C: ;
    eax = 0; /* xor self */
    PUSH32(esp, 0); sub_00538690(); /* call 0x00538690 */

loc_000F6E63: ;
    MEM32(0x77175C) = ebx;

loc_000F6E69: ;
    POP32(esp, esi);
    POP32(esp, ebx);
    esp += 4; return; /* ret */

}

/**
 * sub_000F6E70
 * Original: 0x000F6E70 - 0x000F6EE8 (120 bytes, 33 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_000F6E70(void)
{
    uint32_t ebp;
    int _flags = 0; /* fallback flag var */
    float xmm0;

loc_000F6E70: ;
    PUSH32(esp, ebp);
    ebp = esp;
    esp = esp & 0xFFFFFFF0u;
    esp = esp - 0x44;
    eax = (uint32_t)(int32_t)SMEM16(ebp + 0xC);
    ecx = MEM32(0x84A13C);
    eax = (uint32_t)((int32_t)eax * (int32_t)0x2B0);
    PUSH32(esp, ebx);
    PUSH32(esp, esi);
    esi = eax + ecx + 0x80;
    eax = MEM32(ebp + 8);
    xmm0 = MEMF(eax + 0x38); /* movss */
    PUSH32(esp, edi);
    ecx = 0x10;
    edi = esp + 0x10;
    memcpy((void*)XBOX_PTR(edi), (void*)XBOX_PTR(esi), ecx * 4);
    esi += ecx * 4; edi += ecx * 4; ecx = 0; /* rep movsd */
    MEMF(esp + 0x40) = xmm0; /* movss */
    xmm0 = MEMF(eax + 0x3C); /* movss */
    MEMF(esp + 0x44) = xmm0; /* movss */
    xmm0 = MEMF(eax + 0x40); /* movss */
    eax = MEM32(eax + 0xA4);
    PUSH32(esp, 0);
    ecx = 0; /* xor self */
    MEMF(esp + 0x4C) = xmm0; /* movss */
    PUSH32(esp, 0); sub_000761F0(); /* call 0x000761F0 */

loc_000F6ED1: ;
    esi = eax;
    esp = esp + 4;
    if (TEST_NZ(esi, esi)) { sub_000F6EE8(); return; } /* jne: not equal / not zero */

loc_000F6EDA: ;
    PUSH32(esp, eax);
    PUSH32(esp, 0); sub_00539960(); /* call 0x00539960 */

loc_000F6EE0: ;
    MEM32(0x771764) = esi;
    g_seh_ebp = ebp; sub_000F6EFF(); return; /* tail jmp 0x000F6EFF */

}

/**
 * sub_000F6FB0
 * Original: 0x000F6FB0 - 0x000F7576 (1478 bytes, 314 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_000F6FB0(void)
{
    uint32_t ebp;
    int _flags = 0; /* fallback flag var */
    float xmm0, xmm1, xmm2, xmm3, xmm4, xmm5, xmm6;
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_000F6FB0: ;
    esp = esp - 0x9C;
    PUSH32(esp, ebx);
    PUSH32(esp, ebp);
    ebp = MEM32(esp + 0xA8);
    SET_LO8(eax, MEM8(ebp + 0x30));
    (void)0; /* test LO8(eax), LO8(eax) - flags set for next jcc */
    PUSH32(esp, esi);
    PUSH32(esp, edi);
    if (TEST_NZ(LO8(eax), LO8(eax))) goto loc_000F741C; /* jne: not equal / not zero */

loc_000F6FCC: ;
    xmm0 = MEMF(ebp + 0x58); /* movss */
    xmm0 = xmm0 * MEMF(0x648CE0); /* mulss */
    PUSH32(esp, 0xD3);
    PUSH32(esp, 0);
    PUSH32(esp, ecx);
    MEMF(esp) = xmm0; /* movss */
    PUSH32(esp, 0x3DCCCCCD);
    PUSH32(esp, 0x3CA3D70A);
    ebx = ebp + 0x4C;
    PUSH32(esp, 0x3E000000);
    PUSH32(esp, ebx);
    PUSH32(esp, 0); sub_000F69D0(); /* call 0x000F69D0 */

loc_000F6FFE: ;
    eax = MEM32(0x6A3118);
    ecx = MEM32(ebp + 0x58);
    edx = MEM32(ebp + 0x38);
    PUSH32(esp, eax);
    eax = MEM32(ebp + 0x40);
    PUSH32(esp, 0xD0);
    PUSH32(esp, ecx);
    PUSH32(esp, edx);
    PUSH32(esp, ebx);
    PUSH32(esp, 0); sub_000F61E0(); /* call 0x000F61E0 */

loc_000F701A: ;
    PUSH32(esp, 0xFF);
    PUSH32(esp, ebx);
    PUSH32(esp, 0); sub_0019A300(); /* call 0x0019A300 */

loc_000F7025: ;
    xmm0 = MEMF(ebp + 0x58); /* movss */
    xmm0 = xmm0 * MEMF(0x649734); /* mulss */
    xmm1 = 0.0f; /* xorps self = zero */
    xmm4 = MEMF(0x648D14); /* movss */
    esp = esp + 0x38;
    /* comiss xmm1, xmm0 - sets EFLAGS */
    MEMF(esp + 0x10) = xmm0; /* movss */
    if ((xmm1 <= xmm0)) goto loc_000F7053; /* jbe: below or equal (unsigned <=) */

loc_000F704B: ;
    MEMF(esp + 0x10) = xmm1; /* movss */
    goto loc_000F705E;

loc_000F7053: ;
    /* comiss xmm0, xmm4 - sets EFLAGS */
    if ((xmm0 <= xmm4)) goto loc_000F7064; /* jbe: below or equal (unsigned <=) */

loc_000F7058: ;
    MEMF(esp + 0x10) = xmm4; /* movss */

loc_000F705E: ;
    xmm0 = MEMF(esp + 0x10); /* movss */

loc_000F7064: ;
    xmm2 = MEMF(ebx); /* movss */
    xmm3 = MEMF(0x648D10); /* movss */
    MEMF(esp + 0x48) = xmm2; /* movss */
    xmm2 = MEMF(ebx + 4); /* movss */
    MEMF(esp + 0x4C) = xmm2; /* movss */
    xmm2 = MEMF(ebx + 8); /* movss */
    MEMF(esp + 0x50) = xmm2; /* movss */
    xmm2 = xmm0; /* movaps */
    xmm2 = xmm2 * MEMF(0x648E98); /* mulss */
    MEMF(esp + 0x54) = xmm2; /* movss */
    xmm2 = xmm0; /* movaps */
    xmm0 = xmm0 * MEMF(0x649D64); /* mulss */
    xmm2 = xmm2 * MEMF(0x649C54); /* mulss */
    MEMF(esp + 0x64) = xmm3; /* movss */
    xmm3 = MEMF(0x648EB0); /* movss */
    MEMF(esp + 0x58) = xmm2; /* movss */
    xmm2 = MEMF(0x648CE0); /* movss */
    MEMF(esp + 0x70) = xmm3; /* movss */
    xmm3 = MEMF(0x648D34); /* movss */
    MEMF(esp + 0x38) = xmm0; /* movss */
    MEMF(esp + 0x3C) = xmm0; /* movss */
    xmm0 = MEMF(0x64A7B8); /* movss */
    PUSH32(esp, 0);
    eax = esp + 0x24;
    esi = esp + 0x4C;
    MEM32(esp + 0x60) = 0x14;
    MEMF(esp + 0x64) = xmm2; /* movss */
    MEM32(esp + 0x6C) = 0x105;
    MEM8(esp + 0x80) = 0;
    MEMF(esp + 0x84) = xmm1; /* movss */
    MEMF(esp + 0x88) = xmm1; /* movss */
    MEMF(esp + 0x8C) = xmm1; /* movss */
    MEMF(esp + 0x24) = xmm3; /* movss */
    MEMF(esp + 0x28) = xmm2; /* movss */
    MEMF(esp + 0x2C) = xmm1; /* movss */
    MEMF(esp + 0x30) = xmm4; /* movss */
    MEMF(esp + 0x34) = xmm3; /* movss */
    MEMF(esp + 0x38) = xmm2; /* movss */
    MEMF(esp + 0x44) = xmm0; /* movss */
    PUSH32(esp, 0); sub_001A5730(); /* call 0x001A5730 */

loc_000F7160: ;
    esp = esp + 4;
    PUSH32(esp, 0);
    PUSH32(esp, 0);
    PUSH32(esp, 0);
    PUSH32(esp, 0xFF);
    xmm0 = MEMF(esp + 0x20); /* movss */
    xmm0 = xmm0 * MEMF(0x58BC24); /* mulss */
    PUSH32(esp, 0xFF);
    PUSH32(esp, 0xFF);
    PUSH32(esp, 0xFF);
    PUSH32(esp, 0);
    PUSH32(esp, 2);
    PUSH32(esp, 0xFFFFFFFFu);
    PUSH32(esp, 0xEE);
    PUSH32(esp, 0x3E800000);
    PUSH32(esp, 0x3F000000);
    PUSH32(esp, ecx);
    MEMF(esp) = xmm0; /* movss */
    PUSH32(esp, 0);
    PUSH32(esp, 0x3E800000);
    PUSH32(esp, ebx);
    PUSH32(esp, 0);
    edi = 0x5A02CC;
    PUSH32(esp, 0); sub_001AF030(); /* call 0x001AF030 */

loc_000F71BA: ;
    xmm1 = MEMF(ebp + 0x44); /* movss */
    xmm0 = 0.0f; /* xorps self = zero */
    esp = esp + 0x48;
    /* ucomiss xmm1, xmm0 - sets EFLAGS */
    /* lahf - load AH from flags (used in FPU compare idiom) */
    if (1 /* jp after test - parity */) goto loc_000F71E0; /* jp: parity */

loc_000F71CE: ;
    xmm1 = MEMF(ebp + 0x48); /* movss */
    /* ucomiss xmm1, xmm0 - sets EFLAGS */
    /* lahf - load AH from flags (used in FPU compare idiom) */
    if (1 /* jnp after test - parity */) goto loc_000F7346; /* jnp: not parity */

loc_000F71E0: ;
    MEM32(esp + 0x48) = 0xFD;
    PUSH32(esp, 0); sub_003E2480(); /* call 0x003E2480 */

loc_000F71ED: ;
    edx = ((int32_t)eax < 0) ? 0xFFFFFFFF : 0; /* cdq */
    ecx = 3;
    { int64_t _dividend = ((int64_t)(int32_t)edx << 32) | eax;
      eax = (uint32_t)((int32_t)(_dividend / (int32_t)ecx));
      edx = (uint32_t)((int32_t)(_dividend % (int32_t)ecx)); }
    xmm1 = MEMF(esp + 0x10); /* movss */
    MEMF(esp + 0x60) = xmm0; /* movss */
    MEMF(esp + 0x7C) = xmm0; /* movss */
    MEMF(esp + 0x80) = xmm0; /* movss */
    MEMF(esp + 0x84) = xmm0; /* movss */
    xmm0 = MEMF(ebp + 0x44); /* movss */
    xmm2 = xmm1; /* movaps */
    xmm2 = xmm2 * MEMF(0x648F38); /* mulss */
    MEMF(esp + 0x6C) = xmm2; /* movss */
    MEMF(esp + 0x88) = xmm0; /* movss */
    xmm0 = MEMF(ebp + 0x48); /* movss */
    xmm2 = xmm1; /* movaps */
    xmm2 = xmm2 * MEMF(0x648F78); /* mulss */
    MEMF(esp + 0x70) = xmm2; /* movss */
    MEMF(esp + 0x8C) = xmm0; /* movss */
    xmm0 = MEMF(0x6493B0); /* movss */
    xmm2 = xmm1; /* movaps */
    xmm2 = xmm2 * MEMF(0x64908C); /* mulss */
    MEMF(esp + 0x90) = xmm0; /* movss */
    xmm0 = MEMF(0x64B0E8); /* movss */
    PUSH32(esp, 0xFF);
    MEMF(esp + 0x78) = xmm2; /* movss */
    xmm2 = MEMF(0x648CE4); /* movss */
    MEMF(esp + 0x98) = xmm0; /* movss */
    xmm0 = MEMF(0x649354); /* movss */
    PUSH32(esp, 4);
    edx = edx + 2;
    MEM16(esp + 0x54) = LO16(edx);
    edx = ebx;
    eax = MEM32(edx);
    ecx = MEM32(edx + 4);
    edx = MEM32(edx + 8);
    MEM32(esp + 0x58) = eax;
    eax = 0; /* xor self */
    MEM16(esp + 0x6C) = LO16(eax);
    MEM16(esp + 0x6E) = LO16(eax);
    MEM16(esp + 0x70) = LO16(eax);
    MEM16(esp + 0x72) = LO16(eax);
    eax = esp + 0x50;
    xmm1 = xmm1 * xmm2; /* mulss */
    PUSH32(esp, eax);
    MEM16(esp + 0x68) = 0x15E;
    MEM32(esp + 0x60) = ecx;
    MEM32(esp + 0x64) = edx;
    MEMF(esp + 0x84) = xmm1; /* movss */
    MEMF(esp + 0xA4) = xmm0; /* movss */
    MEMF(esp + 0xA8) = xmm2; /* movss */
    MEM8(esp + 0xB4) = 0;
    MEM8(esp + 0xAC) = 1;
    MEM8(esp + 0xAD) = 0;
    MEM8(esp + 0xAE) = 0;
    MEM16(esp + 0xB0) = 0x64;
    MEM16(esp + 0xB2) = 0x32;
    MEM16(esp + 0xB6) = 1;
    PUSH32(esp, 0); sub_00173610(); /* call 0x00173610 */

loc_000F7343: ;
    esp = esp + 0xC;

loc_000F7346: ;
    eax = MEM32(0x8470DC);
    eax = eax + 0x330;
    PUSH32(esp, ebx);
    PUSH32(esp, eax);
    PUSH32(esp, 0); sub_003E1EE0(); /* call 0x003E1EE0 */

loc_000F7357: ;
    xmm0 = xmm0 * MEMF(0x58F8C0); /* mulss */
    xmm0 = xmm0 * MEMF(0x649734); /* mulss */
    MEMF(esp + 0x28) = xmm0; /* movss */
    xmm0 = MEMF(0x6493C8); /* movss */
    MEMF(esp + 0x40) = xmm0; /* movss */
    xmm0 = MEMF(0x5A0060); /* movss */
    MEMF(esp + 0x3C) = xmm0; /* movss */
    xmm0 = MEMF(0x64AC0C); /* movss */
    MEMF(esp + 0x44) = xmm0; /* movss */
    xmm0 = MEMF(ebx); /* movss */
    MEMF(esp + 0x30) = xmm0; /* movss */
    xmm0 = MEMF(ebx + 4); /* movss */
    MEMF(esp + 0x34) = xmm0; /* movss */
    xmm0 = MEMF(ebx + 8); /* movss */
    PUSH32(esp, 0xFF);
    PUSH32(esp, 0x2A);
    eax = 0x6C;
    MEM8(esp + 0x34) = 5;
    MEMF(esp + 0x40) = xmm0; /* movss */
    PUSH32(esp, 0); sub_000D9C60(); /* call 0x000D9C60 */

loc_000F73CD: ;
    esp = esp + 0x10;
    if (TEST_Z(eax, eax)) goto loc_000F7418; /* je: equal / zero */

loc_000F73D4: ;
    xmm0 = MEMF(0x64925C); /* movss */
    ecx = 0; /* xor self */
    MEMF(eax + 0x30) = xmm0; /* movss */
    MEMF(eax + 0x34) = xmm0; /* movss */
    MEM8(eax + 0x38) = 0xFF;
    MEM8(eax + 0x39) = 0x67;
    MEM8(eax + 0x3A) = 0xFF;
    MEM8(eax + 0x2C) = 0;
    MEM8(eax + 0x3B) = 0;
    edx = eax + 0x3C;
    MEM32(edx) = ecx;
    MEM32(edx + 4) = ecx;
    MEM32(edx + 8) = ecx;
    MEM32(edx + 0xC) = ecx;
    edi = eax + 0x4C;
    ecx = 8;
    esi = esp + 0x20;
    memcpy((void*)XBOX_PTR(edi), (void*)XBOX_PTR(esi), ecx * 4);
    esi += ecx * 4; edi += ecx * 4; ecx = 0; /* rep movsd */

loc_000F7418: ;
    MEM8(ebp + 0x30) = 1;

loc_000F741C: ;
    xmm3 = MEMF(ebp + 0x3C); /* movss */
    xmm5 = MEMF(0x648D14); /* movss */
    xmm0 = xmm5; /* movaps */
    xmm0 = xmm0 / MEMF(ebp + 0x38); /* divss */
    xmm1 = xmm3; /* movaps */
    xmm1 = xmm1 + MEMF(0x7FA21C); /* addss */
    xmm2 = xmm0; /* movaps */
    xmm2 = xmm2 * xmm3; /* mulss */
    xmm0 = xmm0 * xmm1; /* mulss */
    MEMF(ebp + 0x3C) = xmm1; /* movss */
    MEMF(esp + 0x44) = xmm2; /* movss */
    MEMF(esp + 0x10) = xmm0; /* movss */
    edi = 0; /* xor self */
    esi = 0x75CFE0;
    /* nop */

loc_000F7460: ;
    xmm0 = MEMF(esi); /* movss */
    /* comiss xmm0, xmm2 - sets EFLAGS */
    if ((xmm0 <= xmm2)) goto loc_000F7559; /* jbe: below or equal (unsigned <=) */

loc_000F746D: ;
    xmm0 = MEMF(esp + 0x10); /* movss */
    /* comiss xmm0, MEMF(esi) - sets EFLAGS */
    if ((xmm0 < MEMF(esi))) goto loc_000F7559; /* jb: below (unsigned <) */

loc_000F747C: ;
    PUSH32(esp, 0); sub_003E1D70(); /* call 0x003E1D70 */

loc_000F7481: ;
    xmm6 = MEMF(0x648CE0); /* movss */
    xmm0 = xmm0 * xmm6; /* mulss */
    xmm1 = xmm5; /* movaps */
    xmm1 = xmm1 - xmm0; /* subss */
    MEMF(esp + 0x14) = xmm1; /* movss */
    PUSH32(esp, 0); sub_003E1D70(); /* call 0x003E1D70 */

loc_000F749F: ;
    MEMF(esp + 0x18) = xmm0; /* movss */
    PUSH32(esp, 0); sub_003E1D70(); /* call 0x003E1D70 */

loc_000F74AA: ;
    eax = esp + 0x14;
    xmm0 = xmm0 * xmm6; /* mulss */
    xmm5 = xmm5 - xmm0; /* subss */
    ebx = eax;
    MEMF(esp + 0x1C) = xmm5; /* movss */
    PUSH32(esp, 0); sub_00428323(); /* call 0x00428323 */

loc_000F74C3: ;
    xmm0 = MEMF(ebp + 0x58); /* movss */
    xmm0 = xmm0 * MEMF(0x648E64); /* mulss */
    eax = MEM32(esi + 8);
    ecx = MEM32(esi + 4);
    edx = MEM32(ebp + 0x58);
    xmm1 = (float)(int32_t)edi; /* cvtsi2ss */
    xmm0 = xmm0 * xmm1; /* mulss */
    xmm1 = MEMF(ebp + 0x58); /* movss */
    xmm1 = xmm1 * MEMF(0x648D10); /* mulss */
    xmm0 = xmm0 + xmm1; /* addss */
    xmm1 = xmm0; /* movaps */
    xmm1 = xmm1 * MEMF(esp + 0x14); /* mulss */
    xmm1 = xmm1 + MEMF(ebp + 0x4C); /* addss */
    PUSH32(esp, eax);
    MEMF(esp + 0x18) = xmm1; /* movss */
    xmm1 = xmm0; /* movaps */
    xmm0 = xmm0 * MEMF(esp + 0x20); /* mulss */
    xmm0 = xmm0 + MEMF(ebp + 0x54); /* addss */
    xmm1 = xmm1 * MEMF(esp + 0x1C); /* mulss */
    xmm1 = xmm1 + MEMF(ebp + 0x50); /* addss */
    PUSH32(esp, ecx);
    PUSH32(esp, edx);
    MEMF(esp + 0x28) = xmm0; /* movss */
    xmm0 = MEMF(ebp + 0x38); /* movss */
    xmm0 = xmm0 - MEMF(ebp + 0x3C); /* subss */
    PUSH32(esp, ecx);
    eax = ebx;
    MEMF(esp) = xmm0; /* movss */
    PUSH32(esp, eax);
    eax = 0; /* xor self */
    MEMF(esp + 0x2C) = xmm1; /* movss */
    PUSH32(esp, 0); sub_000F61E0(); /* call 0x000F61E0 */

loc_000F7548: ;
    xmm2 = MEMF(esp + 0x58); /* movss */
    xmm5 = MEMF(0x648D14); /* movss */
    esp = esp + 0x14;

loc_000F7559: ;
    esi = esi + 0xC;
    edi++;
    if (CMP_L(esi, 0x75D01C)) goto loc_000F7460; /* jl: less (signed <) */

loc_000F7569: ;
    POP32(esp, edi);
    POP32(esp, esi);
    POP32(esp, ebp);
    SET_LO8(eax, 1);
    POP32(esp, ebx);
    esp = esp + 0x9C;
    esp += 4; return; /* ret */

}

/**
 * sub_000F7580
 * Original: 0x000F7580 - 0x000F79C2 (1090 bytes, 218 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_000F7580(void)
{
    uint32_t ebp;
    int _flags = 0; /* fallback flag var */
    float xmm0, xmm1, xmm2;
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_000F7580: ;
    esp = esp - 0x9C;
    PUSH32(esp, ebx);
    PUSH32(esp, ebp);
    ebp = MEM32(esp + 0xA8);
    SET_LO8(eax, MEM8(ebp + 0x30));
    (void)0; /* test LO8(eax), LO8(eax) - flags set for next jcc */
    PUSH32(esp, esi);
    PUSH32(esp, edi);
    if (TEST_NZ(LO8(eax), LO8(eax))) { sub_000F79C2(); return; } /* jne: not equal / not zero */

loc_000F759C: ;
    xmm0 = MEMF(ebp + 0x58); /* movss */
    xmm0 = xmm0 * MEMF(0x648CE0); /* mulss */
    PUSH32(esp, 0xD3);
    PUSH32(esp, 0);
    PUSH32(esp, ecx);
    MEMF(esp) = xmm0; /* movss */
    PUSH32(esp, 0x3DCCCCCD);
    PUSH32(esp, 0x3CA3D70A);
    ebx = ebp + 0x4C;
    PUSH32(esp, 0x3E000000);
    PUSH32(esp, ebx);
    PUSH32(esp, 0); sub_000F69D0(); /* call 0x000F69D0 */

loc_000F75CE: ;
    eax = MEM32(0x6A3118);
    ecx = MEM32(ebp + 0x58);
    edx = MEM32(ebp + 0x38);
    PUSH32(esp, eax);
    eax = MEM32(ebp + 0x40);
    PUSH32(esp, 0xD0);
    PUSH32(esp, ecx);
    PUSH32(esp, edx);
    PUSH32(esp, ebx);
    PUSH32(esp, 0); sub_000F61E0(); /* call 0x000F61E0 */

loc_000F75EA: ;
    PUSH32(esp, 0xFF);
    PUSH32(esp, ebx);
    PUSH32(esp, 0); sub_0019A300(); /* call 0x0019A300 */

loc_000F75F5: ;
    xmm0 = MEMF(ebx); /* movss */
    xmm2 = MEMF(0x648D34); /* movss */
    xmm1 = MEMF(0x648CE0); /* movss */
    MEMF(esp + 0x80) = xmm0; /* movss */
    xmm0 = MEMF(ebx + 4); /* movss */
    MEMF(esp + 0x84) = xmm0; /* movss */
    xmm0 = MEMF(ebx + 8); /* movss */
    MEMF(esp + 0x88) = xmm0; /* movss */
    xmm0 = MEMF(0x64A7B4); /* movss */
    MEMF(esp + 0x8C) = xmm0; /* movss */
    xmm0 = MEMF(0x648E94); /* movss */
    MEMF(esp + 0x90) = xmm0; /* movss */
    xmm0 = MEMF(0x648D20); /* movss */
    MEMF(esp + 0x98) = xmm0; /* movss */
    xmm0 = MEMF(0x648E64); /* movss */
    MEMF(esp + 0x9C) = xmm0; /* movss */
    xmm0 = MEMF(0x648EB0); /* movss */
    MEMF(esp + 0xA8) = xmm0; /* movss */
    xmm0 = 0.0f; /* xorps self = zero */
    MEMF(esp + 0xB8) = xmm0; /* movss */
    MEMF(esp + 0xBC) = xmm0; /* movss */
    MEMF(esp + 0xC0) = xmm0; /* movss */
    MEMF(esp + 0x5C) = xmm0; /* movss */
    xmm0 = MEMF(0x648D14); /* movss */
    MEMF(esp + 0x60) = xmm0; /* movss */
    xmm0 = MEMF(0x649D64); /* movss */
    MEMF(esp + 0x6C) = xmm0; /* movss */
    MEMF(esp + 0x70) = xmm0; /* movss */
    xmm0 = MEMF(0x648FB0); /* movss */
    PUSH32(esp, 0);
    eax = esp + 0x58;
    esi = esp + 0x84;
    MEM32(esp + 0x98) = 0x1E;
    MEM32(esp + 0xA4) = 0x105;
    MEM8(esp + 0xB8) = 0;
    MEMF(esp + 0x58) = xmm2; /* movss */
    MEMF(esp + 0x5C) = xmm1; /* movss */
    MEMF(esp + 0x68) = xmm2; /* movss */
    MEMF(esp + 0x6C) = xmm1; /* movss */
    MEMF(esp + 0x78) = xmm0; /* movss */
    PUSH32(esp, 0); sub_001A5730(); /* call 0x001A5730 */

loc_000F771F: ;
    PUSH32(esp, 0);
    PUSH32(esp, 0);
    PUSH32(esp, 0);
    PUSH32(esp, 0xFF);
    PUSH32(esp, 0xFF);
    PUSH32(esp, 0xFF);
    PUSH32(esp, 0xFF);
    PUSH32(esp, 0);
    PUSH32(esp, 2);
    PUSH32(esp, 0xFFFFFFFFu);
    PUSH32(esp, 0xEE);
    PUSH32(esp, 0x3E800000);
    PUSH32(esp, 0x3F000000);
    PUSH32(esp, 0x458CA000);
    PUSH32(esp, 0);
    PUSH32(esp, 0x3E800000);
    PUSH32(esp, ebx);
    PUSH32(esp, 0);
    edi = 0x5A02CC;
    PUSH32(esp, 0); sub_001AF030(); /* call 0x001AF030 */

loc_000F7767: ;
    xmm1 = MEMF(ebp + 0x44); /* movss */
    xmm0 = 0.0f; /* xorps self = zero */
    esp = esp + 0x84;
    /* ucomiss xmm1, xmm0 - sets EFLAGS */
    /* lahf - load AH from flags (used in FPU compare idiom) */
    if (1 /* jp after test - parity */) goto loc_000F7790; /* jp: parity */

loc_000F777E: ;
    xmm1 = MEMF(ebp + 0x48); /* movss */
    /* ucomiss xmm1, xmm0 - sets EFLAGS */
    /* lahf - load AH from flags (used in FPU compare idiom) */
    if (1 /* jnp after test - parity */) goto loc_000F78DD; /* jnp: not parity */

loc_000F7790: ;
    MEM32(esp + 0x48) = 0xFD;
    PUSH32(esp, 0); sub_003E2480(); /* call 0x003E2480 */

loc_000F779D: ;
    edx = ((int32_t)eax < 0) ? 0xFFFFFFFF : 0; /* cdq */
    ecx = 6;
    { int64_t _dividend = ((int64_t)(int32_t)edx << 32) | eax;
      eax = (uint32_t)((int32_t)(_dividend / (int32_t)ecx));
      edx = (uint32_t)((int32_t)(_dividend % (int32_t)ecx)); }
    xmm1 = MEMF(0x648F38); /* movss */
    xmm2 = MEMF(0x64908C); /* movss */
    MEMF(esp + 0x60) = xmm0; /* movss */
    MEMF(esp + 0x7C) = xmm0; /* movss */
    MEMF(esp + 0x80) = xmm0; /* movss */
    MEMF(esp + 0x84) = xmm0; /* movss */
    xmm0 = MEMF(ebp + 0x44); /* movss */
    MEMF(esp + 0x88) = xmm0; /* movss */
    xmm0 = MEMF(ebp + 0x48); /* movss */
    MEMF(esp + 0x8C) = xmm0; /* movss */
    xmm0 = MEMF(0x6493B0); /* movss */
    MEMF(esp + 0x90) = xmm0; /* movss */
    xmm0 = MEMF(0x64B0E8); /* movss */
    PUSH32(esp, 0xFF);
    esi = 0; /* xor self */
    MEMF(esp + 0x70) = xmm1; /* movss */
    xmm1 = MEMF(0x648CE4); /* movss */
    MEMF(esp + 0x98) = xmm0; /* movss */
    xmm0 = MEMF(0x649354); /* movss */
    PUSH32(esp, 4);
    MEM16(esp + 0x64) = 0x15E;
    MEMF(esp + 0x78) = xmm1; /* movss */
    MEMF(esp + 0x7C) = xmm2; /* movss */
    MEMF(esp + 0x80) = xmm1; /* movss */
    MEMF(esp + 0xA0) = xmm0; /* movss */
    MEMF(esp + 0xA4) = xmm1; /* movss */
    edx = edx + 3;
    MEM16(esp + 0x54) = LO16(edx);
    edx = ebx;
    eax = MEM32(edx);
    ecx = MEM32(edx + 4);
    edx = MEM32(edx + 8);
    MEM32(esp + 0x58) = eax;
    eax = esp + 0x50;
    PUSH32(esp, eax);
    MEM32(esp + 0x60) = ecx;
    MEM32(esp + 0x64) = edx;
    MEM8(esp + 0xB4) = 0;
    MEM8(esp + 0xAC) = 1;
    MEM8(esp + 0xAD) = 0;
    MEM8(esp + 0xAE) = 0;
    MEM16(esp + 0xB0) = 0x64;
    MEM16(esp + 0xB2) = 0x32;
    MEM16(esp + 0x70) = LO16(esi);
    MEM16(esp + 0x72) = LO16(esi);
    MEM16(esp + 0x74) = LO16(esi);
    MEM16(esp + 0x76) = LO16(esi);
    MEM16(esp + 0xB6) = 1;
    PUSH32(esp, 0); sub_00173610(); /* call 0x00173610 */

loc_000F78D8: ;
    esp = esp + 0xC;
    goto loc_000F78DF;

loc_000F78DD: ;
    esi = 0; /* xor self */

loc_000F78DF: ;
    eax = MEM32(0x8470DC);
    eax = eax + 0x330;
    PUSH32(esp, ebx);
    PUSH32(esp, eax);
    PUSH32(esp, 0); sub_003E1EE0(); /* call 0x003E1EE0 */

loc_000F78F0: ;
    xmm0 = xmm0 * MEMF(0x58F8C0); /* mulss */
    xmm0 = xmm0 * MEMF(0x649734); /* mulss */
    MEMF(esp + 0x24) = xmm0; /* movss */
    xmm0 = MEMF(0x64A7F0); /* movss */
    MEMF(esp + 0x3C) = xmm0; /* movss */
    xmm0 = MEMF(0x648EB8); /* movss */
    MEMF(esp + 0x38) = xmm0; /* movss */
    xmm0 = MEMF(0x64B104); /* movss */
    MEMF(esp + 0x40) = xmm0; /* movss */
    xmm0 = MEMF(ebx); /* movss */
    MEMF(esp + 0x2C) = xmm0; /* movss */
    xmm0 = MEMF(ebx + 4); /* movss */
    MEMF(esp + 0x30) = xmm0; /* movss */
    xmm0 = MEMF(ebx + 8); /* movss */
    PUSH32(esp, 0xFF);
    PUSH32(esp, 0x2A);
    eax = 0x6C;
    MEM8(esp + 0x30) = 6;
    MEMF(esp + 0x3C) = xmm0; /* movss */
    PUSH32(esp, 0); sub_000D9C60(); /* call 0x000D9C60 */

loc_000F7966: ;
    esp = esp + 0x10;
    if (CMP_EQ(eax, esi)) goto loc_000F79B1; /* je: equal / zero */

loc_000F796D: ;
    xmm0 = MEMF(0x64925C); /* movss */
    ecx = 0; /* xor self */
    MEMF(eax + 0x30) = xmm0; /* movss */
    MEMF(eax + 0x34) = xmm0; /* movss */
    MEM8(eax + 0x38) = 0xFF;
    MEM8(eax + 0x39) = 0x67;
    MEM8(eax + 0x3A) = 0xFF;
    MEM8(eax + 0x2C) = 0;
    MEM8(eax + 0x3B) = 0;
    edx = eax + 0x3C;
    MEM32(edx) = ecx;
    MEM32(edx + 4) = ecx;
    MEM32(edx + 8) = ecx;
    MEM32(edx + 0xC) = ecx;
    edi = eax + 0x4C;
    ecx = 8;
    esi = esp + 0x1C;
    memcpy((void*)XBOX_PTR(edi), (void*)XBOX_PTR(esi), ecx * 4);
    esi += ecx * 4; edi += ecx * 4; ecx = 0; /* rep movsd */

loc_000F79B1: ;
    POP32(esp, edi);
    POP32(esp, esi);
    MEM8(ebp + 0x30) = 1;
    POP32(esp, ebp);
    SET_LO8(eax, 0); /* xor self */
    POP32(esp, ebx);
    esp = esp + 0x9C;
    esp += 4; return; /* ret */

}

/**
 * sub_000F7B20
 * Original: 0x000F7B20 - 0x000F7D01 (481 bytes, 110 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_000F7B20(void)
{
    uint32_t ebp;
    int _flags = 0; /* fallback flag var */
    float xmm0, xmm1, xmm2;
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_000F7B20: ;
    esp = esp - 0x70;
    PUSH32(esp, ebx);
    ebx = MEM32(esp + 0x78);
    SET_LO8(eax, MEM8(ebx + 0x30));
    if (TEST_NZ(LO8(eax), LO8(eax))) { sub_000F7D01(); return; } /* jne: not equal / not zero */

loc_000F7B33: ;
    xmm0 = MEMF(ebx + 0x4C); /* movss */
    xmm2 = MEMF(0x649408); /* movss */
    xmm1 = MEMF(0x648EA8); /* movss */
    MEMF(esp + 0x30) = xmm0; /* movss */
    xmm0 = MEMF(ebx + 0x50); /* movss */
    MEMF(esp + 0x34) = xmm0; /* movss */
    xmm0 = MEMF(ebx + 0x54); /* movss */
    PUSH32(esp, ebp);
    ebp = ebx + 0x4C;
    MEMF(esp + 0x3C) = xmm0; /* movss */
    xmm0 = MEMF(0x64A7B4); /* movss */
    MEMF(esp + 0x40) = xmm0; /* movss */
    xmm0 = MEMF(0x649C54); /* movss */
    MEMF(esp + 0x44) = xmm0; /* movss */
    xmm0 = MEMF(0x648CE0); /* movss */
    MEMF(esp + 0x4C) = xmm0; /* movss */
    xmm0 = MEMF(0x648E64); /* movss */
    MEMF(esp + 0x50) = xmm0; /* movss */
    xmm0 = MEMF(0x648EB0); /* movss */
    MEMF(esp + 0x5C) = xmm0; /* movss */
    xmm0 = 0.0f; /* xorps self = zero */
    MEMF(esp + 0x6C) = xmm0; /* movss */
    MEMF(esp + 0x70) = xmm0; /* movss */
    MEMF(esp + 0x74) = xmm0; /* movss */
    xmm0 = MEMF(0x64A60C); /* movss */
    PUSH32(esp, esi);
    MEMF(esp + 0x14) = xmm0; /* movss */
    MEMF(esp + 0x24) = xmm0; /* movss */
    xmm0 = MEMF(0x649D64); /* movss */
    PUSH32(esp, edi);
    MEMF(esp + 0x20) = xmm2; /* movss */
    xmm2 = MEMF(0x648E54); /* movss */
    MEMF(esp + 0x30) = xmm0; /* movss */
    MEMF(esp + 0x34) = xmm0; /* movss */
    xmm0 = MEMF(0x64A2CC); /* movss */
    PUSH32(esp, 0);
    eax = esp + 0x1C;
    esi = esp + 0x40;
    MEM32(esp + 0x54) = 0x32;
    MEM32(esp + 0x60) = 0xEF;
    MEM8(esp + 0x74) = 0;
    MEMF(esp + 0x20) = xmm1; /* movss */
    MEMF(esp + 0x28) = xmm2; /* movss */
    MEMF(esp + 0x30) = xmm1; /* movss */
    MEMF(esp + 0x3C) = xmm0; /* movss */
    PUSH32(esp, 0); sub_001A5730(); /* call 0x001A5730 */

loc_000F7C3F: ;
    PUSH32(esp, 0);
    PUSH32(esp, 0);
    PUSH32(esp, 0);
    PUSH32(esp, 0xFF);
    PUSH32(esp, 0xFF);
    PUSH32(esp, 0xFF);
    PUSH32(esp, 0xFF);
    PUSH32(esp, 0);
    PUSH32(esp, 2);
    PUSH32(esp, 0xFFFFFFFFu);
    PUSH32(esp, 0xEE);
    PUSH32(esp, 0x3E800000);
    PUSH32(esp, 0x3F800000);
    PUSH32(esp, 0x44BB8000);
    PUSH32(esp, 0);
    PUSH32(esp, 0x3E800000);
    PUSH32(esp, ebp);
    PUSH32(esp, 0);
    edi = 0x5A02CC;
    PUSH32(esp, 0); sub_001AF030(); /* call 0x001AF030 */

loc_000F7C87: ;
    esp = esp + 0x4C;
    MEM8(esp + 0x10) = 3;
    MEM8(esp + 0x11) = 0x18;
    PUSH32(esp, 0); sub_003E2480(); /* call 0x003E2480 */

loc_000F7C99: ;
    edx = ((int32_t)eax < 0) ? 0xFFFFFFFF : 0; /* cdq */
    ecx = 0x1F;
    { int64_t _dividend = ((int64_t)(int32_t)edx << 32) | eax;
      eax = (uint32_t)((int32_t)(_dividend / (int32_t)ecx));
      edx = (uint32_t)((int32_t)(_dividend % (int32_t)ecx)); }
    PUSH32(esp, 0xFF);
    PUSH32(esp, 0);
    PUSH32(esp, 0x7F);
    PUSH32(esp, 0x40100000);
    MEM8(esp + 0x26) = 0;
    PUSH32(esp, 0x3F800000);
    edx = edx + 0x23;
    MEM16(esp + 0x26) = LO16(edx);
    PUSH32(esp, 0x3FC00000);
    PUSH32(esp, 0); sub_003E2480(); /* call 0x003E2480 */

loc_000F7CCB: ;
    edx = ((int32_t)eax < 0) ? 0xFFFFFFFF : 0; /* cdq */
    ecx = 0x2711;
    { int64_t _dividend = ((int64_t)(int32_t)edx << 32) | eax;
      eax = (uint32_t)((int32_t)(_dividend / (int32_t)ecx));
      edx = (uint32_t)((int32_t)(_dividend % (int32_t)ecx)); }
    PUSH32(esp, ecx);
    ecx = ebp;
    edx = edx + 0x5B8D80;
    xmm0 = (float)(int32_t)edx; /* cvtsi2ss */
    edx = esp + 0x2C;
    MEMF(esp) = xmm0; /* movss */
    PUSH32(esp, edx);
    SET_LO8(edx, 0); /* xor self */
    PUSH32(esp, 0); sub_0011E790(); /* call 0x0011E790 */

loc_000F7CF1: ;
    esp = esp + 0x20;
    POP32(esp, edi);
    POP32(esp, esi);
    SET_LO8(eax, 1);
    POP32(esp, ebp);
    MEM8(ebx + 0x30) = LO8(eax);
    POP32(esp, ebx);
    esp = esp + 0x70;
    esp += 4; return; /* ret */

}

/**
 * sub_000F7D10
 * Original: 0x000F7D10 - 0x000F85D1 (2241 bytes, 460 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_000F7D10(void)
{
    uint32_t ebp;
    int _flags = 0; /* fallback flag var */
    float xmm0, xmm1, xmm2, xmm5, xmm6;
    double _fp_stack[8];
    int _fp_top = 0;
    #define fp_push(v) (_fp_stack[--_fp_top & 7] = (v))
    #define fp_pop() (_fp_top++)
    #define fp_popp() (fp_pop())
    #define fp_top() _fp_stack[_fp_top & 7]
    #define fp_st1() _fp_stack[(_fp_top + 1) & 7]

loc_000F7D10: ;
    PUSH32(esp, ebp);
    ebp = esp;
    esp = esp & 0xFFFFFFF0u;
    esp = esp - 0x2D4;
    PUSH32(esp, ebx);
    PUSH32(esp, esi);
    PUSH32(esp, edi);
    edi = MEM32(ebp + 8);
    SET_LO8(eax, MEM8(edi + 0x30));
    ebx = 0; /* xor self */
    if (CMP_NE(LO8(eax), LO8(ebx))) { sub_000F85D1(); return; } /* jne: not equal / not zero */

loc_000F7D2F: ;
    xmm0 = MEMF(edi + 0x58); /* movss */
    xmm0 = xmm0 * MEMF(0x648CE0); /* mulss */
    PUSH32(esp, 0xD3);
    PUSH32(esp, ebx);
    PUSH32(esp, ecx);
    MEMF(esp) = xmm0; /* movss */
    PUSH32(esp, 0x3DCCCCCD);
    PUSH32(esp, 0x3CA3D70A);
    esi = edi + 0x4C;
    PUSH32(esp, 0x3E000000);
    PUSH32(esp, esi);
    MEM32(esp + 0x48) = esi;
    PUSH32(esp, 0); sub_000F69D0(); /* call 0x000F69D0 */

loc_000F7D64: ;
    xmm0 = MEMF(esi); /* movss */
    MEMF(esp + 0x94) = xmm0; /* movss */
    xmm0 = MEMF(edi + 0x50); /* movss */
    eax = 2;
    MEMF(esp + 0x98) = xmm0; /* movss */
    xmm0 = MEMF(edi + 0x54); /* movss */
    MEM8(esp + 0x8C) = LO8(ebx);
    MEM8(esp + 0x92) = 7;
    MEM8(esp + 0xC4) = LO8(eax);
    MEM16(esp + 0xD4) = LO16(eax);
    MEM16(esp + 0xD6) = 0xA;
    MEM8(esp + 0xC5) = LO8(ebx);
    MEMF(esp + 0x9C) = xmm0; /* movss */
    PUSH32(esp, 0); sub_003E1D70(); /* call 0x003E1D70 */

loc_000F7DC6: ;
    MEMF(esp + 0x30) = xmm0; /* movss */
    fp_push(MEMF(esp + 0x30)); /* fld float */
    fp_st1() *= fp_top(); fp_pop(); /* fmul */
    PUSH32(esp, 0); sub_00471288(); /* call 0x00471288 */

loc_000F7DDB: ;
    SET_LO8(ecx, 0x19);
    SET_LO8(ecx, LO8(ecx) - LO8(eax));
    MEM8(esp + 0xF2) = LO8(ecx);
    PUSH32(esp, 0); sub_003E1D70(); /* call 0x003E1D70 */

loc_000F7DEB: ;
    MEMF(esp + 0x30) = xmm0; /* movss */
    fp_push(MEMF(esp + 0x30)); /* fld float */
    fp_st1() *= fp_top(); fp_pop(); /* fmul */
    PUSH32(esp, 0); sub_00471288(); /* call 0x00471288 */

loc_000F7E00: ;
    SET_LO8(edx, 0x19);
    SET_LO8(edx, LO8(edx) - LO8(eax));
    MEM8(esp + 0xF1) = LO8(edx);
    PUSH32(esp, 0); sub_003E1D70(); /* call 0x003E1D70 */

loc_000F7E10: ;
    MEMF(esp + 0x30) = xmm0; /* movss */
    fp_push(MEMF(esp + 0x30)); /* fld float */
    fp_st1() *= fp_top(); fp_pop(); /* fmul */
    PUSH32(esp, 0); sub_00471288(); /* call 0x00471288 */

loc_000F7E25: ;
    SET_LO8(ecx, LO8(ecx) | 0xFF);
    SET_LO8(ecx, LO8(ecx) - LO8(eax));
    MEM8(esp + 0xF0) = LO8(ecx);
    PUSH32(esp, 0); sub_003E1D70(); /* call 0x003E1D70 */

loc_000F7E36: ;
    MEMF(esp + 0x30) = xmm0; /* movss */
    fp_push(MEMF(esp + 0x30)); /* fld float */
    fp_st1() *= fp_top(); fp_pop(); /* fmul */
    PUSH32(esp, 0); sub_00471288(); /* call 0x00471288 */

loc_000F7E4B: ;
    xmm1 = MEMF(0x648D10); /* movss */
    xmm0 = 0.0f; /* xorps self = zero */
    MEMF(esp + 0xE0) = xmm1; /* movss */
    xmm1 = MEMF(0x648E64); /* movss */
    PUSH32(esp, ebx);
    MEMF(esp + 0xE0) = xmm1; /* movss */
    xmm1 = MEMF(0x648CE4); /* movss */
    PUSH32(esp, ebx);
    MEMF(esp + 0xEC) = xmm1; /* movss */
    xmm1 = MEMF(0x64908C); /* movss */
    PUSH32(esp, 1);
    SET_LO8(edx, 0x19);
    SET_LO8(edx, LO8(edx) - LO8(eax));
    MEMF(esp + 0xF4) = xmm1; /* movss */
    xmm1 = MEMF(0x648D34); /* movss */
    PUSH32(esp, ebx);
    MEM8(esp + 0x103) = LO8(edx);
    MEMF(esp + 0xE8) = xmm0; /* movss */
    MEMF(esp + 0x150) = xmm0; /* movss */
    MEMF(esp + 0x154) = xmm1; /* movss */
    MEMF(esp + 0x158) = xmm0; /* movss */
    MEM32(0x780AB0) = 0x637EEC;
    MEM32(0x6C0210) = 0x68;
    MEM8(0x84B538) = 1;
    MEM32(0x74FA2C) = 0x4100000;
    PUSH32(esp, 0xFFFFFFFFu);
    PUSH32(esp, 1);
    PUSH32(esp, 1);
    PUSH32(esp, ebx);
    PUSH32(esp, 0x43960000);
    eax = esp + 0x164;
    PUSH32(esp, eax);
    ecx = esp + 0xBC;
    PUSH32(esp, ecx);
    PUSH32(esp, ebx);
    esi = esp + 0x17C;
    PUSH32(esp, 0); sub_002D1F60(); /* call 0x002D1F60 */

loc_000F7F1C: ;
    xmm0 = MEMF(0x64A7B4); /* movss */
    eax = MEM32(esp + 0x260);
    MEMF(esp + 0x130) = xmm0; /* movss */
    xmm0 = MEMF(0x649C54); /* movss */
    MEMF(esp + 0x134) = xmm0; /* movss */
    xmm0 = MEMF(0x6492E4); /* movss */
    MEMF(esp + 0x13C) = xmm0; /* movss */
    xmm0 = MEMF(0x648CF0); /* movss */
    MEMF(esp + 0x140) = xmm0; /* movss */
    xmm0 = MEMF(0x648EB0); /* movss */
    esp = esp + 0x4C;
    (void)0; /* cmp eax, ebx - flags set for next jcc */
    MEMF(esp + 0x100) = xmm0; /* movss */
    xmm0 = 0.0f; /* xorps self = zero */
    MEM8(esp + 0x1F) = (CMP_EQ(eax, ebx)) ? 1 : 0; /* sete */
    MEM32(esp + 0xEC) = 5;
    MEM32(esp + 0xF8) = 0xEF;
    MEM8(esp + 0x10C) = LO8(ebx);
    MEMF(esp + 0x110) = xmm0; /* movss */
    MEMF(esp + 0x114) = xmm0; /* movss */
    MEMF(esp + 0x118) = xmm0; /* movss */
    MEM32(esp + 0x14) = 0xA;
    goto loc_000F7FD0;

loc_000F7FC7: ;
    ebx = 0; /* xor self */
    /* nop */

loc_000F7FD0: ;
    PUSH32(esp, 0); sub_003E1D70(); /* call 0x003E1D70 */

loc_000F7FD5: ;
    xmm6 = MEMF(0x648CE0); /* movss */
    xmm5 = MEMF(0x648D14); /* movss */
    (void)0; /* cmp MEM8(esp + 0x1F), LO8(ebx) - flags set for next jcc */
    xmm0 = xmm0 * xmm6; /* mulss */
    xmm1 = xmm5; /* movaps */
    xmm1 = xmm1 - xmm0; /* subss */
    MEMF(esp + 0x30) = xmm1; /* movss */
    if (CMP_EQ(MEM8(esp + 0x1F), LO8(ebx))) goto loc_000F8014; /* je: equal / zero */

loc_000F7FFC: ;
    PUSH32(esp, 0); sub_003E1D70(); /* call 0x003E1D70 */

loc_000F8001: ;
    xmm0 = xmm0 * xmm6; /* mulss */
    xmm1 = xmm5; /* movaps */
    xmm1 = xmm1 - xmm0; /* subss */
    MEMF(esp + 0x34) = xmm1; /* movss */
    goto loc_000F8027;

loc_000F8014: ;
    PUSH32(esp, 0); sub_003E1D70(); /* call 0x003E1D70 */

loc_000F8019: ;
    xmm0 = xmm0 * MEMF(0x648D10); /* mulss */
    MEMF(esp + 0x34) = xmm0; /* movss */

loc_000F8027: ;
    PUSH32(esp, 0); sub_003E1D70(); /* call 0x003E1D70 */

loc_000F802C: ;
    eax = esp + 0x30;
    xmm0 = xmm0 * xmm6; /* mulss */
    xmm5 = xmm5 - xmm0; /* subss */
    ebx = eax;
    MEMF(esp + 0x38) = xmm5; /* movss */
    PUSH32(esp, 0); sub_00428323(); /* call 0x00428323 */

loc_000F8045: ;
    ebx = 0; /* xor self */
    PUSH32(esp, ebx);
    PUSH32(esp, ebx);
    PUSH32(esp, 1);
    PUSH32(esp, ebx);
    PUSH32(esp, 0xFFFFFFFFu);
    PUSH32(esp, 1);
    PUSH32(esp, 1);
    PUSH32(esp, ebx);
    PUSH32(esp, 0x453B8000);
    edx = esp + 0x54;
    PUSH32(esp, edx);
    eax = esp + 0xA0;
    PUSH32(esp, eax);
    PUSH32(esp, ebx);
    esi = esp + 0x160;
    MEM32(0x780AB0) = 0x637EEC;
    MEM32(0x6C0210) = 0x68;
    MEM8(0x84B538) = 1;
    MEM32(0x74FA2C) = 0x4100000;
    PUSH32(esp, 0); sub_002D1F60(); /* call 0x002D1F60 */

loc_000F8097: ;
    esi = MEM32(esp + 0x244);
    esp = esp + 0x30;
    (void)0; /* cmp esi, ebx - flags set for next jcc */
    MEM32(0x780AB0) = ebx;
    MEM32(0x6C0210) = 0xFFFFFFFFu;
    MEM8(0x84B538) = LO8(ebx);
    MEM32(0x74FA2C) = ebx;
    if (CMP_NE(esi, ebx)) goto loc_000F8119; /* jne: not equal / not zero */

loc_000F80C1: ;
    xmm0 = MEMF(0x6491E4); /* movss */
    xmm1 = MEMF(esp + 0x30); /* movss */
    xmm1 = xmm1 * xmm0; /* mulss */
    xmm1 = xmm1 + MEMF(esp + 0x78); /* addss */
    MEMF(esp + 0x9C) = xmm1; /* movss */
    xmm1 = MEMF(esp + 0x34); /* movss */
    xmm1 = xmm1 * xmm0; /* mulss */
    xmm1 = xmm1 + MEMF(esp + 0x7C); /* addss */
    MEMF(esp + 0xA0) = xmm1; /* movss */
    xmm1 = MEMF(esp + 0x38); /* movss */
    xmm1 = xmm1 * xmm0; /* mulss */
    xmm1 = xmm1 + MEMF(esp + 0x80); /* addss */
    MEMF(esp + 0xA4) = xmm1; /* movss */
    goto loc_000F8143;

loc_000F8119: ;
    ecx = MEM32(esp + 0x138);
    edx = MEM32(esp + 0x13C);
    eax = MEM32(esp + 0x140);
    MEM32(esp + 0x9C) = ecx;
    MEM32(esp + 0xA0) = edx;
    MEM32(esp + 0xA4) = eax;

loc_000F8143: ;
    xmm5 = MEMF(esp + 0x134); /* movss */
    xmm5 = xmm5 * MEMF(0x648D80); /* mulss */
    PUSH32(esp, 2);
    ecx = esp + 0x88;
    PUSH32(esp, ecx);
    edx = esp + 0xA4;
    PUSH32(esp, edx);
    eax = esp + 0x84;
    PUSH32(esp, eax);
    PUSH32(esp, 0); sub_000A95A0(); /* call 0x000A95A0 */

loc_000F8173: ;
    xmm0 = MEMF(0x648F08); /* movss */
    SET_LO8(ebx, 0xFF);
    MEMF(esp + 0xC4) = xmm0; /* movss */
    xmm0 = MEMF(0x64925C); /* movss */
    MEM8(esp + 0xE2) = LO8(ebx);
    MEM8(esp + 0xE1) = LO8(ebx);
    MEM8(esp + 0xE0) = LO8(ebx);
    MEM8(esp + 0xE3) = LO8(ebx);
    MEMF(esp + 0xC0) = xmm0; /* movss */
    PUSH32(esp, 0); sub_003E2480(); /* call 0x003E2480 */

loc_000F81B8: ;
    xmm0 = MEMF(edi + 0x38); /* movss */
    xmm0 = xmm0 * MEMF(0x6499A0); /* mulss */
    ecx = (int32_t)xmm0; /* cvttss2si */
    edx = 1;
    edx = edx - ecx;
    ecx = edx;
    edx = ((int32_t)eax < 0) ? 0xFFFFFFFF : 0; /* cdq */
    { int64_t _dividend = ((int64_t)(int32_t)edx << 32) | eax;
      eax = (uint32_t)((int32_t)(_dividend / (int32_t)ecx));
      edx = (uint32_t)((int32_t)(_dividend % (int32_t)ecx)); }
    xmm0 = MEMF(edi + 0x38); /* movss */
    xmm0 = xmm0 * MEMF(0x6497D4); /* mulss */
    eax = (int32_t)xmm0; /* cvttss2si */
    edx = edx - eax;
    MEM16(esp + 0x84) = LO16(edx);
    PUSH32(esp, 0); sub_003E2480(); /* call 0x003E2480 */

loc_000F81F5: ;
    edx = ((int32_t)eax < 0) ? 0xFFFFFFFF : 0; /* cdq */
    ecx = 0xB;
    { int64_t _dividend = ((int64_t)(int32_t)edx << 32) | eax;
      eax = (uint32_t)((int32_t)(_dividend / (int32_t)ecx));
      edx = (uint32_t)((int32_t)(_dividend % (int32_t)ecx)); }
    SET_LO8(ecx, LO8(ebx));
    edx = edx + 5;
    MEM32(esp + 0xBC) = edx;
    edx = esp + 0x80;
    PUSH32(esp, edx);
    edx = 0; /* xor self */
    PUSH32(esp, 0); sub_000A76D0(); /* call 0x000A76D0 */

loc_000F8218: ;
    xmm0 = MEMF(esp + 0xB0); /* movss */
    MEMF(esp + 0xEC) = xmm0; /* movss */
    xmm0 = MEMF(esp + 0xB4); /* movss */
    esp = esp + 0x14;
    (void)0; /* test esi, esi - flags set for next jcc */
    MEMF(esp + 0xDC) = xmm0; /* movss */
    xmm0 = MEMF(esp + 0xA4); /* movss */
    MEMF(esp + 0xE0) = xmm0; /* movss */
    if (TEST_NZ(esi, esi)) goto loc_000F827E; /* jne: not equal / not zero */

loc_000F8255: ;
    xmm0 = 0.0f; /* xorps self = zero */
    MEMF(esp + 0x3C) = xmm0; /* movss */
    MEMF(esp + 0x40) = xmm0; /* movss */
    MEMF(esp + 0x44) = xmm0; /* movss */
    MEMF(esp + 0x48) = xmm0; /* movss */
    MEMF(esp + 0x4C) = xmm0; /* movss */
    MEMF(esp + 0x50) = xmm0; /* movss */
    goto loc_000F82D9;

loc_000F827E: ;
    xmm0 = MEMF(0x648D3C); /* movss */
    xmm2 = MEMF(esp + 0x1F4); /* movss */
    xmm1 = MEMF(esp + 0x1F0); /* movss */
    xmm2 = xmm2 - xmm0; /* subss */
    xmm1 = xmm1 - xmm0; /* subss */
    MEMF(esp + 0x44) = xmm2; /* movss */
    xmm2 = MEMF(esp + 0x1F8); /* movss */
    MEMF(esp + 0x3C) = xmm1; /* movss */
    xmm1 = MEMF(0x649228); /* movss */
    xmm2 = xmm2 - xmm0; /* subss */
    MEMF(esp + 0x40) = xmm1; /* movss */
    MEMF(esp + 0x48) = xmm1; /* movss */
    MEMF(esp + 0x4C) = xmm2; /* movss */
    MEMF(esp + 0x50) = xmm1; /* movss */

loc_000F82D9: ;
    xmm0 = MEMF(0x649D64); /* movss */
    MEMF(esp + 0x54) = xmm0; /* movss */
    MEMF(esp + 0x58) = xmm0; /* movss */
    xmm0 = MEMF(0x648FB0); /* movss */
    PUSH32(esp, 0);
    eax = esp + 0x40;
    esi = esp + 0xDC;
    MEMF(esp + 0x60) = xmm0; /* movss */
    PUSH32(esp, 0); sub_001A5730(); /* call 0x001A5730 */

loc_000F830D: ;
    eax = MEM32(esp + 0x18);
    esp = esp + 4;
    eax--;
    MEM32(esp + 0x14) = eax;
    if ((eax != 0)) goto loc_000F7FC7; /* jne: not equal / not zero */

loc_000F831F: ;
    ebx = 0; /* xor self */
    PUSH32(esp, ebx);
    PUSH32(esp, ebx);
    PUSH32(esp, ebx);
    PUSH32(esp, 0xFF);
    PUSH32(esp, 0xFF);
    eax = MEM32(esp + 0x40);
    PUSH32(esp, 0xFF);
    PUSH32(esp, 0xFF);
    PUSH32(esp, ebx);
    PUSH32(esp, 2);
    PUSH32(esp, 0xFFFFFFFFu);
    PUSH32(esp, 0xEE);
    PUSH32(esp, 0x3E19999A);
    PUSH32(esp, 0x3F400000);
    PUSH32(esp, 0x451C4000);
    PUSH32(esp, ebx);
    PUSH32(esp, 0x3E800000);
    PUSH32(esp, eax);
    PUSH32(esp, ebx);
    edi = 0x5A02CC;
    PUSH32(esp, 0); sub_001AF030(); /* call 0x001AF030 */

loc_000F8367: ;
    esp = esp + 0x48;
    MEM8(esp + 0x30) = 3;
    MEM8(esp + 0x31) = 0x18;
    PUSH32(esp, 0); sub_003E2480(); /* call 0x003E2480 */

loc_000F8379: ;
    edx = ((int32_t)eax < 0) ? 0xFFFFFFFF : 0; /* cdq */
    ecx = 0x1F;
    { int64_t _dividend = ((int64_t)(int32_t)edx << 32) | eax;
      eax = (uint32_t)((int32_t)(_dividend / (int32_t)ecx));
      edx = (uint32_t)((int32_t)(_dividend % (int32_t)ecx)); }
    PUSH32(esp, 0xFF);
    PUSH32(esp, ebx);
    PUSH32(esp, 0x7F);
    PUSH32(esp, 0x3FA00000);
    PUSH32(esp, 0x3E800000);
    PUSH32(esp, ebx);
    MEM8(esp + 0x4E) = LO8(ebx);
    edx = edx + 0x23;
    MEM16(esp + 0x4A) = LO16(edx);
    PUSH32(esp, 0); sub_003E2480(); /* call 0x003E2480 */

loc_000F83A5: ;
    edx = ((int32_t)eax < 0) ? 0xFFFFFFFF : 0; /* cdq */
    ecx = 0x2711;
    { int64_t _dividend = ((int64_t)(int32_t)edx << 32) | eax;
      eax = (uint32_t)((int32_t)(_dividend / (int32_t)ecx));
      edx = (uint32_t)((int32_t)(_dividend % (int32_t)ecx)); }
    esi = MEM32(esp + 0x44);
    PUSH32(esp, ecx);
    ecx = esi;
    edx = edx + 0x5B8D80;
    xmm0 = (float)(int32_t)edx; /* cvtsi2ss */
    edx = esp + 0x4C;
    MEMF(esp) = xmm0; /* movss */
    PUSH32(esp, edx);
    SET_LO8(edx, 0); /* xor self */
    PUSH32(esp, 0); sub_0011E790(); /* call 0x0011E790 */

loc_000F83CF: ;
    eax = MEM32(ebp + 8);
    xmm0 = MEMF(eax + 0x38); /* movss */
    xmm0 = xmm0 * MEMF(0x648CE0); /* mulss */
    xmm1 = 0.0f; /* xorps self = zero */
    edx = MEM32(esi);
    eax = MEM32(esi + 4);
    MEMF(esp + 0x38) = xmm0; /* movss */
    xmm0 = xmm0 * MEMF(0x648E38); /* mulss */
    ecx = (int32_t)xmm0; /* cvttss2si */
    esp = esp + 0x20;
    MEM16(esp + 0x62) = LO16(ebx);
    MEMF(esp + 0x64) = xmm1; /* movss */
    MEM32(esp + 0x44) = 0xEF;
    MEM8(esp + 0x48) = LO8(ebx);
    MEM32(esp + 0x3C) = 0x41301;
    MEM16(esp + 0x40) = LO16(ecx);
    MEMF(esp + 0x4C) = xmm1; /* movss */
    MEMF(esp + 0x50) = xmm1; /* movss */
    MEM8(esp + 0x54) = 0xFF;
    MEM8(esp + 0x55) = 0xFF;
    MEM8(esp + 0x56) = 0xFF;
    MEM8(esp + 0x57) = 0xFF;
    MEM8(esp + 0x58) = 0xFF;
    MEM8(esp + 0x59) = 0xFF;
    MEM8(esp + 0x5A) = LO8(ebx);
    MEM8(esp + 0x5B) = 6;
    MEM32(esp + 0x6C) = 1;
    MEM32(esp + 0x20) = edx;
    MEM32(esp + 0x24) = eax;
    ecx = MEM32(esi + 8);
    xmm1 = MEMF(0x648E60); /* movss */
    xmm0 = MEMF(esp + 0x24); /* movss */
    xmm0 = xmm0 + MEMF(0x648EA4); /* addss */
    MEM32(esp + 0x28) = ecx;
    eax = 0; /* xor self */
    PUSH32(esp, ebx);
    MEMF(esp + 0x234) = xmm1; /* movss */
    MEM32(esp + 0x2D4) = ebx;
    MEM8(esp + 0x2D8) = LO8(ebx);
    MEM8(esp + 0x2D9) = LO8(ebx);
    MEM32(esp + 0x2DC) = ebx;
    ecx = 0x24;
    edi = esp + 0x244;
    { uint32_t _i; for (_i = 0; _i < ecx; _i++) MEM32(edi + _i*4) = eax; }
    edi += ecx * 4; ecx = 0; /* rep stosd */
    PUSH32(esp, ebx);
    edx = esp + 0x238;
    PUSH32(esp, edx);
    PUSH32(esp, ecx);
    MEMF(esp + 0x34) = xmm0; /* movss */
    xmm0 = xmm0 - MEMF(0x5A005C); /* subss */
    MEMF(esp) = xmm0; /* movss */
    eax = esp + 0x30;
    PUSH32(esp, ebx);
    PUSH32(esp, eax);
    PUSH32(esp, 0); sub_0029FF30(); /* call 0x0029FF30 */

loc_000F84DE: ;
    esp = esp + 0x18;
    if (TEST_Z(LO8(eax), LO8(eax))) goto loc_000F84F0; /* je: equal / zero */

loc_000F84E5: ;
    xmm0 = MEMF(esp + 0x230); /* movss */
    goto loc_000F84F8;

loc_000F84F0: ;
    ecx = MEM32(ebp + 8);
    xmm0 = MEMF(ecx + 0x50); /* movss */

loc_000F84F8: ;
    edx = MEM32(esp + 0x28);
    PUSH32(esp, 0xFF);
    PUSH32(esp, 0xB0);
    PUSH32(esp, ebx);
    PUSH32(esp, ebx);
    MEMF(esp + 0x34) = xmm0; /* movss */
    xmm0 = MEMF(esp + 0x28); /* movss */
    eax = MEM32(esp + 0x34);
    PUSH32(esp, ebx);
    MEMF(esp + 0x144) = xmm0; /* movss */
    xmm0 = MEMF(0x648E14); /* movss */
    PUSH32(esp, ebx);
    MEMF(esp + 0x14C) = xmm0; /* movss */
    xmm0 = MEMF(0x648F58); /* movss */
    PUSH32(esp, ebx);
    MEMF(esp + 0x154) = xmm0; /* movss */
    xmm0 = MEMF(0x6493C8); /* movss */
    PUSH32(esp, ebx);
    MEMF(esp + 0x15C) = xmm0; /* movss */
    xmm0 = 0.0f; /* xorps self = zero */
    PUSH32(esp, edx);
    MEMF(esp + 0x164) = xmm0; /* movss */
    xmm0 = MEMF(0x649788); /* movss */
    PUSH32(esp, eax);
    MEMF(esp + 0x16C) = xmm0; /* movss */
    ecx = 0x24;
    esi = esp + 0x268;
    edi = esp + 0x178;
    memcpy((void*)XBOX_PTR(edi), (void*)XBOX_PTR(esi), ecx * 4);
    esi += ecx * 4; edi += ecx * 4; ecx = 0; /* rep movsd */
    ecx = MEM32(esp + 0x48);
    PUSH32(esp, ecx);
    edx = esp + 0x26C;
    PUSH32(esp, edx);
    PUSH32(esp, ebx);
    eax = esp + 0x70;
    PUSH32(esp, 0xF);
    PUSH32(esp, eax);
    PUSH32(esp, 0); sub_0014F960(); /* call 0x0014F960 */

loc_000F85A6: ;
    esp = esp + 0x3C;
    if (CMP_EQ(eax, ebx)) goto loc_000F85C1; /* je: equal / zero */

loc_000F85AD: ;
    edi = eax + 0x10C;
    ecx = 0x2C;
    esi = esp + 0x130;
    memcpy((void*)XBOX_PTR(edi), (void*)XBOX_PTR(esi), ecx * 4);
    esi += ecx * 4; edi += ecx * 4; ecx = 0; /* rep movsd */

loc_000F85C1: ;
    ecx = MEM32(ebp + 8);
    MEM8(ecx + 0x30) = 1;
    SET_LO8(eax, 1);
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
 * sub_000F8B70
 * Original: 0x000F8B70 - 0x000F8D66 (502 bytes, 116 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_000F8B70(void)
{
    int _flags = 0; /* fallback flag var */
    float xmm0, xmm1, xmm2;

loc_000F8B70: ;
    esp = esp - 0x1A8;
    PUSH32(esp, ebx);
    ebx = MEM32(esp + 0x1B0);
    SET_LO8(eax, MEM8(ebx + 0x30));
    if (TEST_NZ(LO8(eax), LO8(eax))) { sub_000F8D66(); return; } /* jne: not equal / not zero */

loc_000F8B89: ;
    xmm0 = MEMF(ebx + 0x58); /* movss */
    xmm0 = xmm0 * MEMF(0x648CE0); /* mulss */
    PUSH32(esp, esi);
    PUSH32(esp, edi);
    PUSH32(esp, 0xD3);
    PUSH32(esp, 0);
    PUSH32(esp, ecx);
    MEMF(esp) = xmm0; /* movss */
    PUSH32(esp, 0x3DCCCCCD);
    PUSH32(esp, 0x3CA3D70A);
    edi = ebx + 0x4C;
    PUSH32(esp, 0x3E000000);
    PUSH32(esp, edi);
    PUSH32(esp, 0); sub_000F69D0(); /* call 0x000F69D0 */

loc_000F8BBD: ;
    xmm0 = MEMF(edi); /* movss */
    xmm2 = MEMF(0x648D34); /* movss */
    xmm1 = MEMF(0x648CE0); /* movss */
    MEMF(esp + 0x4C) = xmm0; /* movss */
    xmm0 = MEMF(edi + 4); /* movss */
    MEMF(esp + 0x50) = xmm0; /* movss */
    xmm0 = MEMF(edi + 8); /* movss */
    MEMF(esp + 0x54) = xmm0; /* movss */
    xmm0 = MEMF(0x64A7B4); /* movss */
    MEMF(esp + 0x58) = xmm0; /* movss */
    xmm0 = MEMF(0x649C54); /* movss */
    MEMF(esp + 0x5C) = xmm0; /* movss */
    xmm0 = MEMF(0x6492E4); /* movss */
    MEMF(esp + 0x64) = xmm0; /* movss */
    xmm0 = MEMF(0x648CF0); /* movss */
    MEMF(esp + 0x68) = xmm0; /* movss */
    xmm0 = MEMF(0x648EB0); /* movss */
    MEMF(esp + 0x74) = xmm0; /* movss */
    xmm0 = 0.0f; /* xorps self = zero */
    MEMF(esp + 0x84) = xmm0; /* movss */
    MEMF(esp + 0x88) = xmm0; /* movss */
    MEMF(esp + 0x8C) = xmm0; /* movss */
    MEMF(esp + 0x30) = xmm0; /* movss */
    xmm0 = MEMF(0x648D3C); /* movss */
    MEMF(esp + 0x34) = xmm0; /* movss */
    xmm0 = MEMF(0x649D64); /* movss */
    MEMF(esp + 0x40) = xmm0; /* movss */
    MEMF(esp + 0x44) = xmm0; /* movss */
    xmm0 = MEMF(0x648FB0); /* movss */
    PUSH32(esp, 0);
    eax = esp + 0x2C;
    esi = esp + 0x50;
    MEM32(esp + 0x64) = 0x14;
    MEM32(esp + 0x70) = 0xEF;
    MEM8(esp + 0x84) = 0;
    MEMF(esp + 0x2C) = xmm2; /* movss */
    MEMF(esp + 0x30) = xmm1; /* movss */
    MEMF(esp + 0x3C) = xmm2; /* movss */
    MEMF(esp + 0x40) = xmm1; /* movss */
    MEMF(esp + 0x4C) = xmm0; /* movss */
    PUSH32(esp, 0); sub_001A5730(); /* call 0x001A5730 */

loc_000F8CC6: ;
    SET_LO8(eax, MEM8(0x7819D5));
    esp = esp + 0x20;
    if (TEST_Z(LO8(eax), LO8(eax))) goto loc_000F8CF0; /* je: equal / zero */

loc_000F8CD2: ;
    edx = 0; /* xor self */
    eax = esp + 0x74;
    PUSH32(esp, 0); sub_00022100(); /* call 0x00022100 */

loc_000F8CDD: ;
    esi = esp + 0x74;
    PUSH32(esp, 0); sub_00022320(); /* call 0x00022320 */

loc_000F8CE6: ;
    (void)0; /* cmp eax, 4 - flags set for next jcc */
    ecx = 0xC3A;
    if (CMP_G(eax, 4)) goto loc_000F8CF5; /* jg: greater (signed >) */

loc_000F8CF0: ;
    ecx = 0x94F;

loc_000F8CF5: ;
    eax = MEM32(0x847024);
    edx = MEM32(eax + 0x40);
    PUSH32(esp, 0);
    PUSH32(esp, 0);
    PUSH32(esp, 0xFFFFFFFFu);
    PUSH32(esp, 0);
    PUSH32(esp, edi);
    PUSH32(esp, 0xBF800000u);
    PUSH32(esp, 0);
    PUSH32(esp, edx);
    edx = 0; /* xor self */
    eax = 0; /* xor self */
    PUSH32(esp, 0); sub_00022D90(); /* call 0x00022D90 */

loc_000F8D17: ;
    eax = MEM32(0x847024);
    eax = MEM32(eax + 0x40);
    PUSH32(esp, 0);
    PUSH32(esp, 0);
    PUSH32(esp, 0xFFFFFFFFu);
    PUSH32(esp, 0);
    PUSH32(esp, edi);
    PUSH32(esp, 0xBF800000u);
    PUSH32(esp, 0);
    PUSH32(esp, eax);
    edx = 0; /* xor self */
    eax = 0; /* xor self */
    ecx = 0xC39;
    PUSH32(esp, 0); sub_00022D90(); /* call 0x00022D90 */

loc_000F8D3E: ;
    PUSH32(esp, eax);
    PUSH32(esp, 0xFF);
    PUSH32(esp, 0);
    PUSH32(esp, 0x12C);
    SET_LO8(eax, 0); /* xor self */
    ecx = edi;
    PUSH32(esp, 0); sub_00175160(); /* call 0x00175160 */

loc_000F8D54: ;
    esp = esp + 0x10;
    POP32(esp, edi);
    SET_LO8(eax, 1);
    POP32(esp, esi);
    MEM8(ebx + 0x30) = LO8(eax);
    POP32(esp, ebx);
    esp = esp + 0x1A8;
    esp += 4; return; /* ret */

}

/**
 * sub_000F90D0
 * Original: 0x000F90D0 - 0x000F916C (156 bytes, 36 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_000F90D0(void)
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
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_000F90D0: ;
    xmm2 = 0.0f; /* xorps self = zero */
    PUSH32(esp, ebx);
    PUSH32(esp, esi);
    esi = MEM32(esp + 0xC);
    eax = (uint32_t)(int32_t)SMEM16(esi + 0x38);
    xmm0 = MEMF(esi + 0x10C); /* movss */
    xmm1 = (float)(int32_t)eax; /* cvtsi2ss */
    xmm1 = xmm1 * MEMF(0x64922C); /* mulss */
    xmm0 = xmm0 - xmm1; /* subss */
    /* comiss xmm2, xmm0 - sets EFLAGS */
    if ((xmm2 <= xmm0)) goto loc_000F90FD; /* jbe: below or equal (unsigned <=) */

loc_000F90FA: ;
    xmm0 = xmm2; /* movaps */

loc_000F90FD: ;
    xmm3 = MEMF(esi + 0x110); /* movss */
    /* comiss xmm3, xmm0 - sets EFLAGS */
    xmm1 = MEMF(esi + 0x10C); /* movss */
    xmm1 = xmm1 - MEMF(esi + 0x114); /* subss */
    if ((xmm3 <= xmm0)) { sub_000F916C(); return; } /* jbe: below or equal (unsigned <=) */

loc_000F911A: ;
    xmm0 = xmm0 / xmm3; /* divss */
    /* comiss xmm2, xmm0 - sets EFLAGS */
    MEMF(esp + 0xC) = xmm0; /* movss */
    if ((xmm2 <= xmm0)) goto loc_000F912E; /* jbe: below or equal (unsigned <=) */

loc_000F9129: ;
    xmm0 = xmm2; /* movaps */
    goto loc_000F913E;

loc_000F912E: ;
    xmm1 = MEMF(0x648D14); /* movss */
    /* comiss xmm0, xmm1 - sets EFLAGS */
    if ((xmm0 <= xmm1)) goto loc_000F9144; /* jbe: below or equal (unsigned <=) */

loc_000F913B: ;
    xmm0 = xmm1; /* movaps */

loc_000F913E: ;
    MEMF(esp + 0xC) = xmm0; /* movss */

loc_000F9144: ;
    xmm1 = MEMF(esi + 0x118); /* movss */
    xmm1 = xmm1 * xmm0; /* mulss */
    MEMF(esi + 0x11C) = xmm1; /* movss */
    fp_push(MEMF(esp + 0xC)); /* fld float */
    fp_st1() *= fp_top(); fp_pop(); /* fmul */
    PUSH32(esp, 0); sub_00471288(); /* call 0x00471288 */

loc_000F9167: ;
    MEM8(esi + 0x4C) = LO8(eax);
    g_seh_ebp = ebp; sub_000F91D0(); return; /* tail jmp 0x000F91D0 */

    #undef fp_push
    #undef fp_pop
    #undef fp_popp
    #undef fp_top
    #undef fp_st1
}

/**
 * sub_000F9220
 * Original: 0x000F9220 - 0x000F941A (506 bytes, 118 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_000F9220(void)
{
    int _flags = 0; /* fallback flag var */
    float xmm0, xmm1, xmm2;

loc_000F9220: ;
    esp = esp - 0x1A8;
    PUSH32(esp, ebx);
    ebx = MEM32(esp + 0x1B0);
    SET_LO8(eax, MEM8(ebx + 0x30));
    if (TEST_NZ(LO8(eax), LO8(eax))) { sub_000F941A(); return; } /* jne: not equal / not zero */

loc_000F9239: ;
    xmm0 = MEMF(ebx + 0x58); /* movss */
    xmm0 = xmm0 * MEMF(0x648CE0); /* mulss */
    PUSH32(esp, esi);
    PUSH32(esp, edi);
    PUSH32(esp, 0xD3);
    PUSH32(esp, 0);
    PUSH32(esp, ecx);
    MEMF(esp) = xmm0; /* movss */
    PUSH32(esp, 0x3DCCCCCD);
    PUSH32(esp, 0x3CA3D70A);
    edi = ebx + 0x4C;
    PUSH32(esp, 0x3E000000);
    PUSH32(esp, edi);
    PUSH32(esp, 0); sub_000F69D0(); /* call 0x000F69D0 */

loc_000F926D: ;
    xmm0 = MEMF(edi); /* movss */
    xmm2 = MEMF(0x648D34); /* movss */
    xmm1 = MEMF(0x648CE0); /* movss */
    MEMF(esp + 0x4C) = xmm0; /* movss */
    xmm0 = MEMF(edi + 4); /* movss */
    MEMF(esp + 0x50) = xmm0; /* movss */
    xmm0 = MEMF(edi + 8); /* movss */
    MEMF(esp + 0x54) = xmm0; /* movss */
    xmm0 = MEMF(0x64A7B4); /* movss */
    MEMF(esp + 0x58) = xmm0; /* movss */
    xmm0 = MEMF(0x6493C8); /* movss */
    MEMF(esp + 0x5C) = xmm0; /* movss */
    xmm0 = MEMF(0x6492E4); /* movss */
    MEMF(esp + 0x64) = xmm0; /* movss */
    xmm0 = MEMF(0x648CF0); /* movss */
    MEMF(esp + 0x68) = xmm0; /* movss */
    xmm0 = MEMF(0x648EB0); /* movss */
    MEMF(esp + 0x74) = xmm0; /* movss */
    xmm0 = 0.0f; /* xorps self = zero */
    MEMF(esp + 0x84) = xmm0; /* movss */
    MEMF(esp + 0x88) = xmm0; /* movss */
    MEMF(esp + 0x8C) = xmm0; /* movss */
    MEMF(esp + 0x30) = xmm0; /* movss */
    xmm0 = MEMF(0x648D3C); /* movss */
    MEMF(esp + 0x34) = xmm0; /* movss */
    xmm0 = MEMF(0x649D64); /* movss */
    MEMF(esp + 0x40) = xmm0; /* movss */
    MEMF(esp + 0x44) = xmm0; /* movss */
    xmm0 = MEMF(0x648FB0); /* movss */
    PUSH32(esp, 0);
    eax = esp + 0x2C;
    esi = esp + 0x50;
    MEM32(esp + 0x64) = 0xC8;
    MEM32(esp + 0x70) = 0xEF;
    MEM8(esp + 0x84) = 0;
    MEMF(esp + 0x2C) = xmm2; /* movss */
    MEMF(esp + 0x30) = xmm1; /* movss */
    MEMF(esp + 0x3C) = xmm2; /* movss */
    MEMF(esp + 0x40) = xmm1; /* movss */
    MEMF(esp + 0x4C) = xmm0; /* movss */
    PUSH32(esp, 0); sub_001A5730(); /* call 0x001A5730 */

loc_000F9376: ;
    SET_LO8(eax, MEM8(0x7819D5));
    esp = esp + 0x20;
    if (TEST_Z(LO8(eax), LO8(eax))) goto loc_000F93A0; /* je: equal / zero */

loc_000F9382: ;
    edx = 0; /* xor self */
    eax = esp + 0x74;
    PUSH32(esp, 0); sub_00022100(); /* call 0x00022100 */

loc_000F938D: ;
    esi = esp + 0x74;
    PUSH32(esp, 0); sub_00022320(); /* call 0x00022320 */

loc_000F9396: ;
    (void)0; /* cmp eax, 4 - flags set for next jcc */
    ecx = 0xC35;
    if (CMP_G(eax, 4)) goto loc_000F93A5; /* jg: greater (signed >) */

loc_000F93A0: ;
    ecx = 0xA42;

loc_000F93A5: ;
    eax = MEM32(0x847024);
    edx = MEM32(eax + 0x40);
    PUSH32(esp, 0);
    PUSH32(esp, 0);
    PUSH32(esp, 0xFFFFFFFFu);
    PUSH32(esp, 0);
    PUSH32(esp, edi);
    PUSH32(esp, 0xBF800000u);
    PUSH32(esp, 0);
    PUSH32(esp, edx);
    edx = 0; /* xor self */
    eax = 0; /* xor self */
    PUSH32(esp, 0); sub_00022D90(); /* call 0x00022D90 */

loc_000F93C7: ;
    eax = MEM32(0x847024);
    eax = MEM32(eax + 0x40);
    PUSH32(esp, 0);
    PUSH32(esp, 0);
    PUSH32(esp, 0xFFFFFFFFu);
    PUSH32(esp, 0);
    PUSH32(esp, edi);
    PUSH32(esp, 0xBF800000u);
    PUSH32(esp, 0);
    PUSH32(esp, eax);
    edx = 0; /* xor self */
    eax = 0; /* xor self */
    ecx = 0xC34;
    PUSH32(esp, 0); sub_00022D90(); /* call 0x00022D90 */

loc_000F93EE: ;
    ecx = MEM32(ebx + 0x2C);
    PUSH32(esp, eax);
    PUSH32(esp, 0xFF);
    PUSH32(esp, 0);
    PUSH32(esp, 0x12C);
    PUSH32(esp, ecx);
    SET_LO8(eax, 0); /* xor self */
    ecx = edi;
    PUSH32(esp, 0); sub_00175270(); /* call 0x00175270 */

loc_000F9408: ;
    esp = esp + 0x14;
    POP32(esp, edi);
    SET_LO8(eax, 1);
    POP32(esp, esi);
    MEM8(ebx + 0x30) = LO8(eax);
    POP32(esp, ebx);
    esp = esp + 0x1A8;
    esp += 4; return; /* ret */

}

/**
 * sub_000F9430
 * Original: 0x000F9430 - 0x000F95C6 (406 bytes, 83 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_000F9430(void)
{
    float xmm0, xmm1;

loc_000F9430: ;
    PUSH32(esp, esi);
    PUSH32(esp, edi);
    xmm0 = 0.0f; /* xorps self = zero */
    xmm1 = MEMF(0x648D14); /* movss */
    edx = 0; /* xor self */
    MEM32(eax + 0x54) = edx;
    MEM32(eax + 0x5C) = edx;
    MEM32(eax + 0x64) = edx;
    MEM32(eax + 0x6C) = edx;
    ecx = eax + 0x50;
    MEM32(ecx + 0x24) = edx;
    MEM32(ecx + 0x2C) = edx;
    MEM32(ecx + 0x34) = edx;
    MEM32(ecx + 0x3C) = edx;
    ecx = ecx + 0x20;
    MEM32(ecx + 0x24) = edx;
    MEM32(ecx + 0x2C) = edx;
    MEM32(ecx + 0x34) = edx;
    MEM32(ecx + 0x3C) = edx;
    esi = 2;
    MEM32(ecx + -24) = esi;
    MEM32(ecx + -8) = esi;
    MEM32(ecx + 8) = esi;
    MEM32(ecx + 0x18) = esi;
    MEM32(ecx + 0x28) = esi;
    MEM32(ecx + 0x38) = esi;
    ecx = ecx + 0x20;
    MEM32(ecx + 0x24) = edx;
    MEM32(ecx + 0x28) = esi;
    MEM32(ecx + 0x2C) = edx;
    MEM32(ecx + 0x34) = edx;
    MEM32(ecx + 0x38) = esi;
    MEM32(ecx + 0x3C) = edx;
    edi = 4;
    MEM32(ecx + -64) = edi;
    MEM32(ecx + -48) = edi;
    MEM32(ecx + -32) = edi;
    MEM32(ecx + -16) = edi;
    MEM32(ecx) = edi;
    MEM32(ecx + 0x10) = edi;
    MEM32(ecx + 0x20) = edi;
    MEM32(ecx + 0x30) = edi;
    ecx = ecx + 0x20;
    ecx = ecx | 0xFFFFFFFFu;
    MEM32(eax + 0x40) = ecx;
    MEMF(eax + 0xD0) = xmm0; /* movss */
    MEMF(eax + 0xD4) = xmm0; /* movss */
    MEMF(eax + 0xD8) = xmm1; /* movss */
    MEMF(eax + 0xDC) = xmm0; /* movss */
    MEMF(eax + 0xE0) = xmm1; /* movss */
    MEMF(eax + 0xE4) = xmm1; /* movss */
    MEMF(eax + 0xE8) = xmm0; /* movss */
    MEMF(eax + 0xEC) = xmm1; /* movss */
    MEM32(eax + 0x44) = ecx;
    MEMF(eax + 0xF0) = xmm0; /* movss */
    MEMF(eax + 0xF4) = xmm0; /* movss */
    MEMF(eax + 0xF8) = xmm1; /* movss */
    MEMF(eax + 0xFC) = xmm0; /* movss */
    MEMF(eax + 0x100) = xmm1; /* movss */
    MEMF(eax + 0x104) = xmm1; /* movss */
    MEMF(eax + 0x108) = xmm0; /* movss */
    MEMF(eax + 0x10C) = xmm1; /* movss */
    MEM32(eax + 0x48) = ecx;
    MEMF(eax + 0x110) = xmm0; /* movss */
    MEMF(eax + 0x114) = xmm0; /* movss */
    MEMF(eax + 0x118) = xmm1; /* movss */
    MEMF(eax + 0x11C) = xmm0; /* movss */
    MEMF(eax + 0x120) = xmm1; /* movss */
    MEMF(eax + 0x124) = xmm1; /* movss */
    MEMF(eax + 0x128) = xmm0; /* movss */
    MEMF(eax + 0x12C) = xmm1; /* movss */
    MEM32(eax + 0x4C) = ecx;
    MEMF(eax + 0x130) = xmm0; /* movss */
    MEMF(eax + 0x134) = xmm0; /* movss */
    MEMF(eax + 0x138) = xmm1; /* movss */
    MEMF(eax + 0x13C) = xmm0; /* movss */
    MEMF(eax + 0x140) = xmm1; /* movss */
    MEMF(eax + 0x144) = xmm1; /* movss */
    MEMF(eax + 0x148) = xmm0; /* movss */
    MEMF(eax + 0x14C) = xmm1; /* movss */
    POP32(esp, edi);
    POP32(esp, esi);
    esp += 4; return; /* ret */

}

/**
 * sub_000F95D0
 * Original: 0x000F95D0 - 0x000F9607 (55 bytes, 21 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_000F95D0(void)
{
    int _flags = 0; /* fallback flag var */

loc_000F95D0: ;
    PUSH32(esp, esi);
    esi = MEM32(0x771BBC);
    if (TEST_Z(esi, esi)) goto loc_000F9605; /* je: equal / zero */

loc_000F95DB: ;
    SET_LO8(eax, MEM8(0x8472BD));
    if (TEST_NZ(LO8(eax), LO8(eax))) goto loc_000F9605; /* jne: not equal / not zero */

loc_000F95E4: ;
    edx = esi;
    PUSH32(esp, 0); sub_000DAD90(); /* call 0x000DAD90 */

loc_000F95EB: ;
    eax = MEM32(esi);
    if (CMP_L(eax, 2)) goto loc_000F9605; /* jl: less (signed <) */

loc_000F95F2: ;
    eax = (uint32_t)((int32_t)eax * (int32_t)0x70);
    eax = MEM32(eax + 0x5906BC);
    if (TEST_Z(eax, eax)) { sub_000F9607(); return; } /* je: equal / zero */

loc_000F95FF: ;
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, esi);
    PUSH32(esp, 0); RECOMP_ICALL_SAFE(eax, _icall_esp); /* indirect call */
    }

loc_000F9602: ;
    esp = esp + 4;

loc_000F9605: ;
    POP32(esp, esi);
    esp += 4; return; /* ret */

}

/**
 * sub_000F9620
 * Original: 0x000F9620 - 0x000F9638 (24 bytes, 12 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_000F9620(void)
{
    int _flags = 0; /* fallback flag var */

loc_000F9620: ;
    esp = esp - 0x58;
    PUSH32(esp, esi);
    PUSH32(esp, edi);
    edi = eax;
    (void)0; /* cmp MEM8(esp + 0x70), 3 - flags set for next jcc */
    esi = ecx;
    if (CMP_B(MEM8(esp + 0x70), 3)) { sub_000F9638(); return; } /* jb: below (unsigned <) */

loc_000F9630: ;
    POP32(esp, edi);
    eax = 0; /* xor self */
    POP32(esp, esi);
    esp = esp + 0x58;
    esp += 4; return; /* ret */

}

/**
 * sub_000F9A90
 * Original: 0x000F9A90 - 0x000F9AAD (29 bytes, 11 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_000F9A90(void)
{
    uint32_t ebp;
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_000F9A90: ;
    esp = esp - 0x18;
    eax = MEM32(0x84A5F8);
    PUSH32(esp, ebx);
    PUSH32(esp, ebp);
    ebp = MEM32(esp + 0x24);
    PUSH32(esp, esi);
    ebx = 0; /* xor self */
    PUSH32(esp, edi);
    MEM8(esp + 0x2C) = 1;
    MEM32(esp + 0x10) = ebx;
    g_seh_ebp = ebp; sub_000F9AB0(); return; /* tail jmp 0x000F9AB0 */

}

/**
 * sub_000F9D90
 * Original: 0x000F9D90 - 0x000F9DB2 (34 bytes, 9 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_000F9D90(void)
{
    int _flags = 0; /* fallback flag var */

loc_000F9D90: ;
    esp = esp - 0xD8;
    (void)0; /* cmp LO8(edx), 3 - flags set for next jcc */
    MEM8(esp) = 4;
    MEM8(esp + 1) = 2;
    MEM8(esp + 2) = 3;
    if (CMP_B(LO8(edx), 3)) { sub_000F9DB2(); return; } /* jb: below (unsigned <) */

loc_000F9DA9: ;
    eax = 0; /* xor self */
    esp = esp + 0xD8;
    esp += 4; return; /* ret */

}

/**
 * sub_000F9FA0
 * Original: 0x000F9FA0 - 0x000FA173 (467 bytes, 79 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_000F9FA0(void)
{
    float xmm0, xmm1, xmm2;

loc_000F9FA0: ;
    esp = esp - 0x88;
    xmm0 = MEMF(edi); /* movss */
    xmm1 = MEMF(0x648D34); /* movss */
    xmm2 = MEMF(0x648CE0); /* movss */
    MEMF(esp + 0x44) = xmm0; /* movss */
    xmm0 = MEMF(edi + 4); /* movss */
    MEMF(esp + 0x48) = xmm0; /* movss */
    xmm0 = MEMF(edi + 8); /* movss */
    MEMF(esp + 0x4C) = xmm0; /* movss */
    xmm0 = MEMF(0x6491E4); /* movss */
    MEMF(esp + 0x50) = xmm0; /* movss */
    xmm0 = MEMF(0x6493C0); /* movss */
    MEMF(esp + 0x54) = xmm0; /* movss */
    xmm0 = MEMF(0x648CF0); /* movss */
    MEMF(esp + 0x5C) = xmm0; /* movss */
    xmm0 = MEMF(0x648E14); /* movss */
    MEMF(esp + 0x60) = xmm0; /* movss */
    MEMF(esp + 0x6C) = xmm0; /* movss */
    xmm0 = 0.0f; /* xorps self = zero */
    MEMF(esp + 0x7C) = xmm0; /* movss */
    MEMF(esp + 0x80) = xmm0; /* movss */
    MEMF(esp + 0x84) = xmm0; /* movss */
    MEMF(esp + 8) = xmm0; /* movss */
    xmm0 = MEMF(0x648CDC); /* movss */
    MEMF(esp + 0xC) = xmm0; /* movss */
    xmm0 = MEMF(0x648EA4); /* movss */
    PUSH32(esp, esi);
    MEMF(esp + 0x1C) = xmm0; /* movss */
    MEMF(esp + 0x20) = xmm0; /* movss */
    xmm0 = MEMF(0x6491EC); /* movss */
    PUSH32(esp, 0);
    eax = esp + 8;
    esi = esp + 0x4C;
    MEM32(esp + 0x60) = 0x32;
    MEM32(esp + 0x6C) = 0x105;
    MEM8(esp + 0x80) = 0;
    MEMF(esp + 8) = xmm1; /* movss */
    MEMF(esp + 0xC) = xmm2; /* movss */
    MEMF(esp + 0x18) = xmm1; /* movss */
    MEMF(esp + 0x1C) = xmm2; /* movss */
    MEMF(esp + 0x28) = xmm0; /* movss */
    PUSH32(esp, 0); sub_001A5730(); /* call 0x001A5730 */

loc_000FA0A5: ;
    xmm0 = MEMF(0x64A7B0); /* movss */
    eax = MEM32(edi);
    ecx = MEM32(edi + 4);
    edx = MEM32(edi + 8);
    MEMF(esp + 0x1C) = xmm0; /* movss */
    MEMF(esp + 0x20) = xmm0; /* movss */
    xmm0 = MEMF(0x648CDC); /* movss */
    MEMF(esp + 0x2C) = xmm0; /* movss */
    MEMF(esp + 0x30) = xmm0; /* movss */
    xmm0 = MEMF(0x64A7AC); /* movss */
    MEMF(esp + 0x34) = xmm0; /* movss */
    xmm0 = MEMF(0x64A7A8); /* movss */
    MEMF(esp + 0x38) = xmm0; /* movss */
    xmm0 = MEMF(0x64A7A4); /* movss */
    MEMF(esp + 0x3C) = xmm0; /* movss */
    xmm0 = MEMF(0x64A7A0); /* movss */
    PUSH32(esp, 0xFF);
    PUSH32(esp, 1);
    esi = esp + 0x10;
    MEM32(esp + 0x10) = 0x28;
    MEM32(esp + 0x14) = 0;
    MEM32(esp + 0x18) = eax;
    MEM32(esp + 0x1C) = ecx;
    MEM32(esp + 0x20) = edx;
    MEM16(esp + 0x2C) = 0;
    MEM16(esp + 0x2E) = 0xFF;
    MEM16(esp + 0x30) = 0xFFCE;
    MEM16(esp + 0x32) = 0x3C;
    MEMF(esp + 0x48) = xmm0; /* movss */
    MEM8(esp + 0x4C) = 3;
    MEM16(esp + 0x4E) = 0x23;
    MEM16(esp + 0x50) = 0x19;
    PUSH32(esp, 0); sub_000F3880(); /* call 0x000F3880 */

loc_000FA168: ;
    esp = esp + 0xC;
    POP32(esp, esi);
    esp = esp + 0x88;
    esp += 4; return; /* ret */

}

/**
 * sub_000FA180
 * Original: 0x000FA180 - 0x000FA5FF (1151 bytes, 267 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_000FA180(void)
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

loc_000FA180: ;
    esp = esp - 0x1BC;
    PUSH32(esp, 0x57);
    PUSH32(esp, 0);
    PUSH32(esp, 2);
    PUSH32(esp, 0x6B3F84);
    PUSH32(esp, 0); sub_000DAA60(); /* call 0x000DAA60 */

loc_000FA196: ;
    PUSH32(esp, 3);
    eax = 0; /* xor self */
    PUSH32(esp, 0); sub_0032D0D0(); /* call 0x0032D0D0 */

loc_000FA19F: ;
    esp = esp + 0x14;
    if (TEST_Z(eax, eax)) goto loc_000FA1A7; /* je: equal / zero */

loc_000FA1A6: ;
    eax--;

loc_000FA1A7: ;
    if (CMP_LE(eax, 0x63)) goto loc_000FA1B1; /* jle: less or equal (signed <=) */

loc_000FA1AC: ;
    eax = 0x63;

loc_000FA1B1: ;
    fp_push(MEMD(0x64B0F8)); /* fld double */
    edx = ((int32_t)eax < 0) ? 0xFFFFFFFF : 0; /* cdq */
    /* FPU: fsin  */
    ecx = 0xA;
    { int64_t _dividend = ((int64_t)(int32_t)edx << 32) | eax;
      eax = (uint32_t)((int32_t)(_dividend / (int32_t)ecx));
      edx = (uint32_t)((int32_t)(_dividend % (int32_t)ecx)); }
    xmm0 = MEMF(0x649420); /* movss */
    PUSH32(esp, ebx);
    PUSH32(esp, esi);
    ebx = 0; /* xor self */
    esi = 0; /* xor self */
    MEMF(esp + 0x20) = xmm0; /* movss */
    MEM8(esp + 0x28) = 0;
    MEM32(esp + 0x10) = edx;
    edx = MEM32(esp + 0x1C8);
    PUSH32(esp, edx);
    MEM32(esp + 0x10) = eax;
    PUSH32(esp, 0x2A);
    eax = 0x64;
    MEMF(esp + 0x2C) = (float)fp_top(); fp_popp(); /* fstp */
    PUSH32(esp, 0); sub_000D9C60(); /* call 0x000D9C60 */

loc_000FA1FA: ;
    esp = esp + 8;
    if (TEST_Z(eax, eax)) goto loc_000FA5F6; /* je: equal / zero */

loc_000FA205: ;
    xmm0 = MEMF(0x64925C); /* movss */
    MEMF(eax + 0x30) = xmm0; /* movss */
    MEMF(eax + 0x34) = xmm0; /* movss */
    MEM8(eax + 0x39) = 0x60;
    MEM8(eax + 0x2C) = 0;
    MEM8(eax + 0x3B) = 0x49;
    edx = 0; /* xor self */
    PUSH32(esp, ebp);
    PUSH32(esp, edi);
    edi = eax + 0x3C;
    SET_LO8(ecx, LO8(ecx) | 0xFF);
    MEM8(eax + 0x38) = LO8(ecx);
    MEM8(eax + 0x3A) = LO8(ecx);
    MEM32(edi) = edx;
    MEM32(edi + 4) = edx;
    MEM32(edi + 8) = edx;
    ebp = eax + 0x4C;
    MEM32(edi + 0xC) = edx;
    edx = MEM32(esp + 0x28);
    eax = ebp;
    MEM32(eax) = ebx;
    MEM32(eax + 4) = esi;
    MEM32(eax + 8) = esi;
    MEM32(eax + 0xC) = edx;
    edx = MEM32(esp + 0x2C);
    ebx = 0xFF;
    MEM32(eax + 0x10) = edx;
    edx = MEM32(esp + 0x30);
    MEM32(eax + 0x14) = edx;
    SET_LO8(eax, MEM8(0x7FFF88));
    (void)0; /* test LO8(eax), LO8(eax) - flags set for next jcc */
    MEMF(esp + 0x68) = xmm0; /* movss */
    xmm0 = MEMF(0x59A8D8); /* movss */
    MEM8(esp + 0x5C) = 0;
    MEM8(esp + 0x44) = 0xC6;
    MEM8(esp + 0x45) = LO8(ecx);
    MEM8(esp + 0x46) = 5;
    MEM8(esp + 0x47) = 3;
    MEM8(esp + 0x48) = 0;
    MEM16(esp + 0x4A) = 0x12C;
    MEM32(esp + 0x4C) = 0xA3;
    MEM32(esp + 0x50) = 8;
    MEM8(esp + 0x56) = LO8(ebx);
    MEM8(esp + 0x55) = LO8(ebx);
    MEM8(esp + 0x54) = LO8(ebx);
    MEM8(esp + 0x57) = LO8(ebx);
    MEM8(esp + 0x5A) = LO8(ebx);
    MEM8(esp + 0x59) = LO8(ebx);
    MEM8(esp + 0x58) = LO8(ebx);
    MEM8(esp + 0x5B) = LO8(ebx);
    MEM32(esp + 0x60) = esi;
    MEM8(esp + 0x64) = 0;
    MEM8(esp + 0x65) = 2;
    MEM16(esp + 0x78) = 1;
    MEM16(esp + 0x7A) = LO16(ebx);
    if (TEST_NZ(LO8(eax), LO8(eax))) goto loc_000FA2F2; /* jne: not equal / not zero */

loc_000FA2EA: ;
    xmm0 = MEMF(0x6496CC); /* movss */

loc_000FA2F2: ;
    ecx = MEM32(esp + 0x1D0);
    eax = MEM32(0x595D1C);
    esi = MEM32(0x595D14);
    edi = MEM32(0x595D18);
    PUSH32(esp, ecx);
    PUSH32(esp, 0x14);
    PUSH32(esp, 0);
    MEMF(esp + 0x78) = xmm0; /* movss */
    xmm0 = MEMF(0x64B0F0); /* movss */
    PUSH32(esp, 0);
    MEMF(esp + 0x80) = xmm0; /* movss */
    xmm0 = MEMF(0x64B0EC); /* movss */
    MEM32(esp + 0x34) = eax;
    PUSH32(esp, 0x3F800000);
    PUSH32(esp, 0x5F3AB8);
    eax = esp + 0x5C;
    MEMF(esp + 0x44) = xmm0; /* movss */
    MEMF(esp + 0x40) = xmm0; /* movss */
    PUSH32(esp, 0); sub_000A65B0(); /* call 0x000A65B0 */

loc_000FA353: ;
    esp = esp + 0x18;
    (void)0; /* test eax, eax - flags set for next jcc */
    MEM32(ebp) = eax;
    if (TEST_Z(eax, eax)) goto loc_000FA37C; /* je: equal / zero */

loc_000FA35D: ;
    edx = MEM32(esp + 0x24);
    ecx = MEM32(esp + 0x28);
    eax = eax + 0xE0;
    MEM32(eax) = esi;
    MEM32(eax + 4) = edi;
    MEM32(eax + 8) = edx;
    edx = MEM32(esp + 0x2C);
    MEM32(eax + 0xC) = ecx;
    MEM32(eax + 0x10) = edx;

loc_000FA37C: ;
    eax = esp + 0x7C;
    PUSH32(esp, 0); sub_000F9430(); /* call 0x000F9430 */

loc_000FA385: ;
    xmm1 = MEMF(0x648F5C); /* movss */
    SET_LO8(ecx, MEM8(0x7FFF88));
    (void)0; /* test LO8(ecx), LO8(ecx) - flags set for next jcc */
    xmm0 = 0.0f; /* xorps self = zero */
    eax = 1;
    MEMF(esp + 0x7C) = xmm1; /* movss */
    xmm1 = MEMF(0x6496C4); /* movss */
    MEMF(esp + 0x98) = xmm0; /* movss */
    MEM32(esp + 0xB8) = eax;
    MEM32(esp + 0x1C) = 0xC4;
    MEM32(esp + 0x20) = 0xC5;
    MEM32(esp + 0x24) = 0xC6;
    MEM32(esp + 0x28) = 0xC7;
    MEM32(esp + 0x2C) = 0xC8;
    MEM32(esp + 0x30) = 0xC9;
    MEM32(esp + 0x34) = 0xCA;
    MEM32(esp + 0x38) = 0xCB;
    MEM32(esp + 0x3C) = 0xCC;
    MEM32(esp + 0x40) = 0xCD;
    if (TEST_NZ(LO8(ecx), LO8(ecx))) goto loc_000FA415; /* jne: not equal / not zero */

loc_000FA40D: ;
    xmm1 = MEMF(0x6496C0); /* movss */

loc_000FA415: ;
    MEMF(esp + 0x80) = xmm1; /* movss */
    xmm1 = MEMF(0x648D50); /* movss */
    MEMF(esp + 0x88) = xmm1; /* movss */
    MEMF(esp + 0x84) = xmm1; /* movss */
    xmm1 = MEMF(0x64925C); /* movss */
    MEM16(esp + 0x94) = LO16(eax);
    eax = MEM32(esp + 0x14);
    (void)0; /* test eax, eax - flags set for next jcc */
    MEMF(esp + 0x8C) = xmm1; /* movss */
    xmm1 = MEMF(0x648D14); /* movss */
    MEM32(esp + 0x90) = 0x20;
    MEM16(esp + 0x96) = LO16(ebx);
    MEM8(esp + 0x9C) = 0;
    MEM8(esp + 0x9F) = LO8(ebx);
    MEM8(esp + 0x9E) = LO8(ebx);
    MEM8(esp + 0x9D) = LO8(ebx);
    MEM8(esp + 0xA0) = LO8(ebx);
    MEM8(esp + 0xA3) = LO8(ebx);
    MEM8(esp + 0xA2) = LO8(ebx);
    MEM8(esp + 0xA1) = LO8(ebx);
    MEM8(esp + 0xA4) = LO8(ebx);
    MEM8(esp + 0xA5) = LO8(ebx);
    MEM8(esp + 0xA6) = 0;
    MEMF(esp + 0xA8) = xmm1; /* movss */
    MEMF(esp + 0xAC) = xmm1; /* movss */
    MEMF(esp + 0xB0) = xmm0; /* movss */
    MEMF(esp + 0xB4) = xmm0; /* movss */
    if (TEST_NZ(eax, eax)) goto loc_000FA579; /* jne: not equal / not zero */

loc_000FA4EB: ;
    edx = MEM32(esp + 0x1D0);
    eax = MEM32(esp + 0x18);
    ecx = MEM32(esp + eax * 4 + 0x1C);
    PUSH32(esp, edx);
    PUSH32(esp, 0x72);
    eax = 0x180;
    MEM32(esp + 0xC4) = ecx;
    PUSH32(esp, 0); sub_000D9C60(); /* call 0x000D9C60 */

loc_000FA50E: ;
    esp = esp + 8;
    if (TEST_NZ(eax, eax)) goto loc_000FA526; /* jne: not equal / not zero */

loc_000FA515: ;
    POP32(esp, edi);
    MEM32(ebp + 4) = eax;
    MEM32(ebp + 8) = eax;
    POP32(esp, ebp);
    POP32(esp, esi);
    POP32(esp, ebx);
    esp = esp + 0x1BC;
    esp += 4; return; /* ret */

loc_000FA526: ;
    edi = eax + 0x2C;
    ecx = 0x54;
    esi = esp + 0x7C;
    memcpy((void*)XBOX_PTR(edi), (void*)XBOX_PTR(esi), ecx * 4);
    esi += ecx * 4; edi += ecx * 4; ecx = 0; /* rep movsd */
    ecx = MEM32(eax + 0x40);
    (void)0; /* test LO8(ecx), 4 - flags set for next jcc */
    MEM8(eax + 0x17C) = 0;
    if (TEST_Z(LO8(ecx), 4)) goto loc_000FA55E; /* je: equal / zero */

loc_000FA543: ;
    ecx = ecx & 0xFFFFFFFBu;
    POP32(esp, edi);
    MEM32(eax + 0x40) = ecx;
    MEM32(ebp + 4) = eax;
    MEM32(ebp + 8) = 0;
    POP32(esp, ebp);
    POP32(esp, esi);
    POP32(esp, ebx);
    esp = esp + 0x1BC;
    esp += 4; return; /* ret */

loc_000FA55E: ;
    ecx = ecx | 4;
    POP32(esp, edi);
    MEM32(eax + 0x40) = ecx;
    MEM32(ebp + 4) = eax;
    MEM32(ebp + 8) = 0;
    POP32(esp, ebp);
    POP32(esp, esi);
    POP32(esp, ebx);
    esp = esp + 0x1BC;
    esp += 4; return; /* ret */

loc_000FA579: ;
    ebx = esp + 0x14;
    ebp = ebp + 4;
    MEM32(esp + 0x10) = 2;
    goto loc_000FA590;

    /* nop */

loc_000FA590: ;
    edx = MEM32(esp + 0x1D0);
    eax = MEM32(ebx);
    ecx = MEM32(esp + eax * 4 + 0x1C);
    PUSH32(esp, edx);
    PUSH32(esp, 0x72);
    eax = 0x180;
    MEM32(esp + 0xC4) = ecx;
    PUSH32(esp, 0); sub_000D9C60(); /* call 0x000D9C60 */

loc_000FA5B1: ;
    esp = esp + 8;
    if (TEST_Z(eax, eax)) goto loc_000FA5E0; /* je: equal / zero */

loc_000FA5B8: ;
    edi = eax + 0x2C;
    ecx = 0x54;
    esi = esp + 0x7C;
    memcpy((void*)XBOX_PTR(edi), (void*)XBOX_PTR(esi), ecx * 4);
    esi += ecx * 4; edi += ecx * 4; ecx = 0; /* rep movsd */
    ecx = MEM32(eax + 0x40);
    (void)0; /* test LO8(ecx), 4 - flags set for next jcc */
    MEM8(eax + 0x17C) = 0;
    if (TEST_Z(LO8(ecx), 4)) goto loc_000FA5DA; /* je: equal / zero */

loc_000FA5D5: ;
    ecx = ecx & 0xFFFFFFFBu;
    goto loc_000FA5DD;

loc_000FA5DA: ;
    ecx = ecx | 4;

loc_000FA5DD: ;
    MEM32(eax + 0x40) = ecx;

loc_000FA5E0: ;
    MEM32(ebp) = eax;
    eax = MEM32(esp + 0x10);
    ebx = ebx + 4;
    ebp = ebp + 4;
    eax--;
    MEM32(esp + 0x10) = eax;
    if ((eax != 0)) goto loc_000FA590; /* jne: not equal / not zero */

loc_000FA5F4: ;
    POP32(esp, edi);
    POP32(esp, ebp);

loc_000FA5F6: ;
    POP32(esp, esi);
    POP32(esp, ebx);
    esp = esp + 0x1BC;
    esp += 4; return; /* ret */

    #undef fp_push
    #undef fp_pop
    #undef fp_popp
    #undef fp_top
    #undef fp_st1
}

/**
 * sub_000FA600
 * Original: 0x000FA600 - 0x000FA7D0 (464 bytes, 112 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_000FA600(void)
{
    int _flags = 0; /* fallback flag var */
    float xmm0, xmm1, xmm2, xmm3, xmm4, xmm5, xmm6;
    double _fp_stack[8];
    int _fp_top = 0;
    #define fp_push(v) (_fp_stack[--_fp_top & 7] = (v))
    #define fp_pop() (_fp_top++)
    #define fp_popp() (fp_pop())
    #define fp_top() _fp_stack[_fp_top & 7]
    #define fp_st1() _fp_stack[(_fp_top + 1) & 7]

loc_000FA600: ;
    SET_LO8(eax, MEM8(0x7FA274));
    (void)0; /* test LO8(eax), LO8(eax) - flags set for next jcc */
    PUSH32(esp, esi);
    esi = MEM32(esp + 8);
    if (TEST_NZ(LO8(eax), LO8(eax))) { sub_000FA7D0(); return; } /* jne: not equal / not zero */

loc_000FA612: ;
    SET_LO8(eax, MEM8(0x7FA275));
    if (TEST_NZ(LO8(eax), LO8(eax))) { sub_000FA7D0(); return; } /* jne: not equal / not zero */

loc_000FA61F: ;
    xmm6 = 0.0f; /* xorps self = zero */
    PUSH32(esp, ebx);
    SET_LO8(ebx, MEM8(esi + 0x60));
    if (TEST_NZ(LO8(ebx), 1)) goto loc_000FA66F; /* jne: not equal / not zero */

loc_000FA62B: ;
    if (CMP_EQ(MEM8(0x76F0E0), 1)) goto loc_000FA7CD; /* je: equal / zero */

loc_000FA638: ;
    xmm0 = MEMF(0x771C28); /* movss */
    /* ucomiss xmm0, xmm6 - sets EFLAGS */
    /* lahf - load AH from flags (used in FPU compare idiom) */
    if (1 /* jp after test - parity */) goto loc_000FA7CD; /* jp: parity */

loc_000FA64D: ;
    ecx = 0; /* xor self */
    PUSH32(esp, 0); sub_000FB970(); /* call 0x000FB970 */

loc_000FA654: ;
    if (TEST_NZ(eax, eax)) goto loc_000FA7CD; /* jne: not equal / not zero */

loc_000FA65C: ;
    SET_LO8(eax, MEM8(0x7FA23C));
    if (TEST_NZ(LO8(eax), LO8(eax))) goto loc_000FA7CD; /* jne: not equal / not zero */

loc_000FA669: ;
    SET_LO8(ebx, LO8(ebx) | 1);
    MEM8(esi + 0x60) = LO8(ebx);

loc_000FA66F: ;
    xmm0 = MEMF(0x6496E4); /* movss */
    /* comiss xmm0, MEMF(esi + 0x58) - sets EFLAGS */
    if ((xmm0 <= MEMF(esi + 0x58))) goto loc_000FA69A; /* jbe: below or equal (unsigned <=) */

loc_000FA67D: ;
    fp_push(MEMF(esi + 0x58)); /* fld float */

loc_000FA680: ;
    fp_st1() *= fp_top(); fp_pop(); /* fmul */
    fp_st1() *= fp_top(); fp_pop(); /* fmul */
    /* FPU: fsin  */
    MEMF(esp + 0xC) = (float)fp_top(); fp_popp(); /* fstp */
    xmm0 = MEMF(esp + 0xC); /* movss */
    goto loc_000FA6B8;

loc_000FA69A: ;
    xmm0 = MEMF(esi + 0x58); /* movss */
    /* comiss xmm0, MEMF(0x6496D8) - sets EFLAGS */
    if ((xmm0 <= MEMF(0x6496D8))) goto loc_000FA6B3; /* jbe: below or equal (unsigned <=) */

loc_000FA6A8: ;
    fp_push(MEMF(0x649420)); /* fld float */
    fp_st1() -= fp_top(); fp_pop(); /* fsub */
    goto loc_000FA680;

loc_000FA6B3: ;
    xmm0 = MEMF(esi + 0x5C); /* movss */

loc_000FA6B8: ;
    eax = MEM32(esi + 0x4C);
    (void)0; /* test eax, eax - flags set for next jcc */
    SET_LO8(ecx, MEM8(0x7FFF88));
    xmm3 = MEMF(0x6496D4); /* movss */
    if (TEST_Z(eax, eax)) goto loc_000FA705; /* je: equal / zero */

loc_000FA6CD: ;
    (void)0; /* test LO8(ecx), LO8(ecx) - flags set for next jcc */
    xmm1 = xmm0; /* movaps */
    xmm1 = xmm1 * xmm3; /* mulss */
    xmm1 = xmm1 + MEMF(0x6496D0); /* addss */
    MEMF(eax + 0x50) = xmm1; /* movss */
    xmm1 = MEMF(0x59A8D8); /* movss */
    if (TEST_NZ(LO8(ecx), LO8(ecx))) goto loc_000FA6F5; /* jne: not equal / not zero */

loc_000FA6ED: ;
    xmm1 = MEMF(0x6496CC); /* movss */

loc_000FA6F5: ;
    eax = MEM32(esi + 0x4C);
    xmm1 = xmm1 + MEMF(0x648CE4); /* addss */
    MEMF(eax + 0x54) = xmm1; /* movss */

loc_000FA705: ;
    eax = MEM32(esi + 0x50);
    (void)0; /* test eax, eax - flags set for next jcc */
    xmm2 = MEMF(0x6496C8); /* movss */
    xmm4 = MEMF(0x6496C4); /* movss */
    xmm5 = MEMF(0x6496C0); /* movss */
    if (TEST_Z(eax, eax)) goto loc_000FA756; /* je: equal / zero */

loc_000FA724: ;
    (void)0; /* test LO8(ecx), LO8(ecx) - flags set for next jcc */
    xmm1 = xmm0; /* movaps */
    xmm1 = xmm1 * xmm3; /* mulss */
    xmm1 = xmm1 + xmm2; /* addss */
    xmm1 = xmm1 + MEMF(0x6496BC); /* addss */
    xmm1 = xmm1 - MEMF(0x649030); /* subss */
    MEMF(eax + 0x2C) = xmm1; /* movss */
    xmm1 = xmm4; /* movaps */
    if (TEST_NZ(LO8(ecx), LO8(ecx))) goto loc_000FA74E; /* jne: not equal / not zero */

loc_000FA74B: ;
    xmm1 = xmm5; /* movaps */

loc_000FA74E: ;
    edx = MEM32(esi + 0x50);
    MEMF(edx + 0x30) = xmm1; /* movss */

loc_000FA756: ;
    eax = MEM32(esi + 0x54);
    if (TEST_Z(eax, eax)) goto loc_000FA7A1; /* je: equal / zero */

loc_000FA75D: ;
    (void)0; /* test LO8(ecx), LO8(ecx) - flags set for next jcc */
    xmm1 = MEMF(0x64908C); /* movss */
    xmm0 = xmm0 * xmm3; /* mulss */
    xmm0 = xmm0 + xmm2; /* addss */
    xmm0 = xmm0 + MEMF(0x648E38); /* addss */
    xmm0 = xmm0 - xmm1; /* subss */
    MEMF(eax + 0x2C) = xmm0; /* movss */
    eax = MEM32(esi + 0x50);
    xmm0 = MEMF(eax + 0x2C); /* movss */
    xmm0 = xmm0 - xmm1; /* subss */
    MEMF(eax + 0x2C) = xmm0; /* movss */
    xmm0 = xmm4; /* movaps */
    if (TEST_NZ(LO8(ecx), LO8(ecx))) goto loc_000FA799; /* jne: not equal / not zero */

loc_000FA796: ;
    xmm0 = xmm5; /* movaps */

loc_000FA799: ;
    eax = MEM32(esi + 0x54);
    MEMF(eax + 0x30) = xmm0; /* movss */

loc_000FA7A1: ;
    xmm0 = MEMF(esi + 0x58); /* movss */
    xmm0 = xmm0 - MEMF(0x7FA24C); /* subss */
    /* comiss xmm6, xmm0 - sets EFLAGS */
    MEMF(esi + 0x58) = xmm0; /* movss */
    if ((xmm6 <= xmm0)) goto loc_000FA7CD; /* jbe: below or equal (unsigned <=) */

loc_000FA7B8: ;
    SET_LO8(eax, MEM8(esi + 0x2C));
    xmm0 = MEMF(0x648D34); /* movss */
    SET_LO8(eax, LO8(eax) | 1);
    MEMF(esi + 0x30) = xmm0; /* movss */
    MEM8(esi + 0x2C) = LO8(eax);

loc_000FA7CD: ;
    POP32(esp, ebx);
    POP32(esp, esi);
    esp += 4; return; /* ret */

    #undef fp_push
    #undef fp_pop
    #undef fp_popp
    #undef fp_top
    #undef fp_st1
}

/**
 * sub_000FA7F0
 * Original: 0x000FA7F0 - 0x000FA888 (152 bytes, 58 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_000FA7F0(void)
{
    int _flags = 0; /* fallback flag var */

loc_000FA7F0: ;
    PUSH32(esp, ebx);
    PUSH32(esp, esi);
    PUSH32(esp, edi);
    edi = eax;
    esi = MEM32(edi + 0x4C);
    if (TEST_Z(esi, esi)) goto loc_000FA834; /* je: equal / zero */

loc_000FA7FC: ;
    SET_LO8(eax, MEM8(0x8472BD));
    if (TEST_NZ(LO8(eax), LO8(eax))) goto loc_000FA834; /* jne: not equal / not zero */

loc_000FA805: ;
    edx = esi;
    PUSH32(esp, 0); sub_000DAD90(); /* call 0x000DAD90 */

loc_000FA80C: ;
    eax = MEM32(esi);
    if (CMP_L(eax, 2)) goto loc_000FA834; /* jl: less (signed <) */

loc_000FA813: ;
    eax = (uint32_t)((int32_t)eax * (int32_t)0x70);
    eax = MEM32(eax + 0x5906BC);
    if (TEST_Z(eax, eax)) goto loc_000FA828; /* je: equal / zero */

loc_000FA820: ;
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, esi);
    PUSH32(esp, 0); RECOMP_ICALL_SAFE(eax, _icall_esp); /* indirect call */
    }

loc_000FA823: ;
    esp = esp + 4;
    goto loc_000FA834;

loc_000FA828: ;
    edx = 1;
    eax = esi;
    PUSH32(esp, 0); sub_000DA5E0(); /* call 0x000DA5E0 */

loc_000FA834: ;
    edi = edi + 0x50;
    ebx = 2;
    /* nop */

loc_000FA840: ;
    esi = MEM32(edi);
    if (TEST_Z(esi, esi)) goto loc_000FA87E; /* je: equal / zero */

loc_000FA846: ;
    SET_LO8(eax, MEM8(0x8472BD));
    if (TEST_NZ(LO8(eax), LO8(eax))) goto loc_000FA87E; /* jne: not equal / not zero */

loc_000FA84F: ;
    edx = esi;
    PUSH32(esp, 0); sub_000DAD90(); /* call 0x000DAD90 */

loc_000FA856: ;
    eax = MEM32(esi);
    if (CMP_L(eax, 2)) goto loc_000FA87E; /* jl: less (signed <) */

loc_000FA85D: ;
    eax = (uint32_t)((int32_t)eax * (int32_t)0x70);
    eax = MEM32(eax + 0x5906BC);
    if (TEST_Z(eax, eax)) goto loc_000FA872; /* je: equal / zero */

loc_000FA86A: ;
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, esi);
    PUSH32(esp, 0); RECOMP_ICALL_SAFE(eax, _icall_esp); /* indirect call */
    }

loc_000FA86D: ;
    esp = esp + 4;
    goto loc_000FA87E;

loc_000FA872: ;
    edx = 1;
    eax = esi;
    PUSH32(esp, 0); sub_000DA5E0(); /* call 0x000DA5E0 */

loc_000FA87E: ;
    edi = edi + 4;
    ebx--;
    if ((ebx != 0)) goto loc_000FA840; /* jne: not equal / not zero */

loc_000FA884: ;
    POP32(esp, edi);
    POP32(esp, esi);
    POP32(esp, ebx);
    esp += 4; return; /* ret */

}

/**
 * sub_000FA890
 * Original: 0x000FA890 - 0x000FA8BA (42 bytes, 13 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_000FA890(void)
{
    uint32_t ebp;
    int _flags = 0; /* fallback flag var */
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_000FA890: ;
    PUSH32(esp, esi);
    esi = MEM32(esp + 8);
    eax = esi;
    PUSH32(esp, 0); sub_000FA7F0(); /* call 0x000FA7F0 */

loc_000FA89C: ;
    eax = esi + 0x3C;
    PUSH32(esp, 0); sub_001126F0(); /* call 0x001126F0 */

loc_000FA8A4: ;
    SET_LO8(eax, MEM8(0x8472BD));
    if (TEST_NZ(LO8(eax), LO8(eax))) { sub_000FA8BA(); return; } /* jne: not equal / not zero */

loc_000FA8AD: ;
    eax = esi;
    edx = 1;
    POP32(esp, esi);
    g_seh_ebp = ebp; sub_000DA5E0(); return; /* tail jmp 0x000DA5E0 */

}

/**
 * sub_000FA8C0
 * Original: 0x000FA8C0 - 0x000FA8DF (31 bytes, 11 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_000FA8C0(void)
{

loc_000FA8C0: ;
    PUSH32(esp, esi);
    esi = MEM32(esp + 8);
    eax = esi;
    PUSH32(esp, 0); sub_000FA7F0(); /* call 0x000FA7F0 */

loc_000FA8CC: ;
    eax = esi + 0x3C;
    PUSH32(esp, 0); sub_001126F0(); /* call 0x001126F0 */

loc_000FA8D4: ;
    PUSH32(esp, esi);
    PUSH32(esp, 0); sub_000DAE40(); /* call 0x000DAE40 */

loc_000FA8DA: ;
    esp = esp + 4;
    POP32(esp, esi);
    esp += 4; return; /* ret */

}

/**
 * sub_000FA8E0
 * Original: 0x000FA8E0 - 0x000FA918 (56 bytes, 21 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_000FA8E0(void)
{
    int _flags = 0; /* fallback flag var */

loc_000FA8E0: ;
    if (CMP_NE(MEM32(esp + 0xC), 0x57)) goto loc_000FA917; /* jne: not equal / not zero */

loc_000FA8E7: ;
    SET_LO8(eax, MEM8(0x8472BD));
    if (TEST_NZ(LO8(eax), LO8(eax))) goto loc_000FA917; /* jne: not equal / not zero */

loc_000FA8F0: ;
    PUSH32(esp, esi);
    esi = MEM32(esp + 8);
    edx = esi;
    PUSH32(esp, 0); sub_000DAD90(); /* call 0x000DAD90 */

loc_000FA8FC: ;
    eax = MEM32(esi);
    if (CMP_L(eax, 2)) goto loc_000FA916; /* jl: less (signed <) */

loc_000FA903: ;
    eax = (uint32_t)((int32_t)eax * (int32_t)0x70);
    eax = MEM32(eax + 0x5906BC);
    if (TEST_Z(eax, eax)) { sub_000FA918(); return; } /* je: equal / zero */

loc_000FA910: ;
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, esi);
    PUSH32(esp, 0); RECOMP_ICALL_SAFE(eax, _icall_esp); /* indirect call */
    }

loc_000FA913: ;
    esp = esp + 4;

loc_000FA916: ;
    POP32(esp, esi);

loc_000FA917: ;
    esp += 4; return; /* ret */

}

/**
 * sub_000FA930
 * Original: 0x000FA930 - 0x000FADC3 (1171 bytes, 229 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_000FA930(void)
{
    uint32_t ebp;
    int _flags = 0; /* fallback flag var */
    float xmm0, xmm1, xmm5;

loc_000FA930: ;
    PUSH32(esp, ebp);
    ebp = esp;
    esp = esp & 0xFFFFFFF0u;
    esp = esp - 0x1B4;
    xmm5 = MEMF(0x648D14); /* movss */
    PUSH32(esp, ebx);
    PUSH32(esp, esi);
    PUSH32(esp, edi);
    edi = MEM32(ebp + 8);
    xmm0 = MEMF(edi + 0x2C); /* movss */
    xmm0 = xmm0 + MEMF(ebp + 0x18); /* addss */
    xmm0 = xmm0 + xmm5; /* addss */
    MEMF(edi + 0x64) = xmm0; /* movss */
    xmm0 = MEMF(edi + 0x260); /* movss */
    /* comiss xmm0, MEMF(0x648F38) - sets EFLAGS */
    if ((xmm0 <= MEMF(0x648F38))) { sub_000FADC3(); return; } /* jbe: below or equal (unsigned <=) */

loc_000FA972: ;
    xmm0 = MEMF(edi + 0x7C); /* movss */
    /* comiss xmm0, MEMF(0x648D58) - sets EFLAGS */
    if ((xmm0 <= MEMF(0x648D58))) { sub_000FADC3(); return; } /* jbe: below or equal (unsigned <=) */

loc_000FA984: ;
    xmm0 = MEMF(edi + 0x260); /* movss */
    /* comiss xmm0, MEMF(0x648E5C) - sets EFLAGS */
    if ((xmm0 <= MEMF(0x648E5C))) goto loc_000FAD27; /* jbe: below or equal (unsigned <=) */

loc_000FA999: ;
    eax = esp + 0xA8;
    PUSH32(esp, 0); sub_000AF180(); /* call 0x000AF180 */

loc_000FA9A5: ;
    xmm5 = 0.0f; /* xorps self = zero */
    eax = 2;
    ebx = 0; /* xor self */
    esi = 4;
    MEMF(esp + 0xF4) = xmm5; /* movss */
    MEM32(esp + 0xF0) = 0x303;
    MEM16(esp + 0xE8) = 0x32;
    MEM16(esp + 0xEA) = 5;
    MEM32(esp + 0xFC) = esi;
    MEM8(esp + 0xA8) = LO8(ebx);
    MEM8(esp + 0xF8) = 1;
    MEM32(esp + 0x108) = eax;
    MEM32(esp + 0x110) = eax;
    MEM32(esp + 0x114) = ebx;
    MEM32(esp + 0x118) = esi;
    MEM32(esp + 0x120) = ebx;
    MEM32(esp + 0x124) = eax;
    PUSH32(esp, 0); sub_003E2480(); /* call 0x003E2480 */

loc_000FAA21: ;
    edx = ((int32_t)eax < 0) ? 0xFFFFFFFF : 0; /* cdq */
    ecx = 0x1F;
    { int64_t _dividend = ((int64_t)(int32_t)edx << 32) | eax;
      eax = (uint32_t)((int32_t)(_dividend / (int32_t)ecx));
      edx = (uint32_t)((int32_t)(_dividend % (int32_t)ecx)); }
    MEMF(esp + 0x100) = xmm5; /* movss */
    MEMF(esp + 0x104) = xmm5; /* movss */
    MEM32(esp + 0x128) = ebx;
    edx = edx + 0x96;
    MEM16(esp + 0xAA) = LO16(edx);
    PUSH32(esp, 0); sub_003E1D70(); /* call 0x003E1D70 */

loc_000FAA55: ;
    xmm1 = MEMF(0x648F78); /* movss */
    xmm0 = xmm0 * xmm1; /* mulss */
    xmm0 = xmm0 + xmm1; /* addss */
    xmm0 = xmm0 * MEMF(0x648D2C); /* mulss */
    MEMF(esp + 0xB0) = xmm0; /* movss */
    MEMF(esp + 0xAC) = xmm0; /* movss */
    xmm0 = MEMF(ebp + 0xC); /* movss */
    MEMF(esp + 0xB4) = xmm0; /* movss */
    xmm0 = MEMF(ebp + 0x18); /* movss */
    MEMF(esp + 0xB8) = xmm0; /* movss */
    xmm0 = MEMF(ebp + 0x14); /* movss */
    MEMF(esp + 0xBC) = xmm0; /* movss */
    MEMF(esp + 0xC0) = xmm5; /* movss */
    MEMF(esp + 0xC4) = xmm5; /* movss */
    MEMF(esp + 0xC8) = xmm5; /* movss */
    MEMF(esp + 0xCC) = xmm5; /* movss */
    MEMF(esp + 0xD0) = xmm5; /* movss */
    MEMF(esp + 0xD4) = xmm5; /* movss */
    MEM32(esp + 0xD8) = 0xC400001;
    MEM8(esp + 0xEC) = 0xFF;
    MEM8(esp + 0xED) = 0xFF;
    MEM8(esp + 0xEE) = 0xFF;
    MEM8(esp + 0xEF) = 0xFF;
    PUSH32(esp, 0); sub_003E1D70(); /* call 0x003E1D70 */

loc_000FAB0F: ;
    edx = MEM32(edi + 0x250);
    ecx = MEM32(edi + 0x288);
    xmm0 = xmm0 * MEMF(0x6493A8); /* mulss */
    xmm0 = xmm0 + MEMF(0x648F08); /* addss */
    xmm0 = xmm0 * MEMF(0x648D24); /* mulss */
    eax = 0; /* xor self */
    SET_LO8(eax, MEM8(edi + 4));
    MEM32(esp + 0xE4) = edx;
    edx = MEM32(edi + 0x26C);
    MEMF(esp + 0x1C) = xmm0; /* movss */
    PUSH32(esp, eax);
    eax = MEM32(ebp + 0x1C);
    PUSH32(esp, esi);
    PUSH32(esp, ebx);
    PUSH32(esp, ecx);
    PUSH32(esp, edx);
    PUSH32(esp, eax);
    PUSH32(esp, 0x43FA0000);
    PUSH32(esp, 0x43FA0000);
    PUSH32(esp, 0); sub_003E2480(); /* call 0x003E2480 */

loc_000FAB63: ;
    eax = eax & 0xFF;
    PUSH32(esp, eax);
    PUSH32(esp, 0); sub_003E2480(); /* call 0x003E2480 */

loc_000FAB6E: ;
    ebx = eax;
    SET_LO8(ebx, LO8(ebx) & 1);
    SET_LO8(ebx, LO8(ebx) << 1);
    PUSH32(esp, 0); sub_003E2480(); /* call 0x003E2480 */

loc_000FAB7A: ;
    SET_LO8(eax, LO8(eax) & 1);
    SET_LO8(ebx, LO8(ebx) + LO8(eax));
    ecx = esp + 0xCC;
    eax = 0x597978;
    PUSH32(esp, ebx);
    ebx = 0; /* xor self */
    PUSH32(esp, ebx);
    PUSH32(esp, ebx);
    PUSH32(esp, 0x18);
    PUSH32(esp, ecx);
    PUSH32(esp, 0); sub_00150820(); /* call 0x00150820 */

loc_000FAB97: ;
    esp = esp + 0x38;
    if (CMP_EQ(eax, ebx)) goto loc_000FABA8; /* je: equal / zero */

loc_000FAB9E: ;
    edx = MEM32(esp + 0x1C);
    MEM32(eax + 0x328) = edx;

loc_000FABA8: ;
    xmm0 = MEMF(ebp + 0xC); /* movss */
    ecx = MEM32(edi + 0x288);
    edx = MEM32(edi + 0x250);
    eax = 6;
    MEM16(esp + 0x44) = LO16(eax);
    MEM16(esp + 0x46) = LO16(eax);
    eax = 3;
    MEM16(esp + 0x50) = LO16(eax);
    MEM16(esp + 0x52) = LO16(eax);
    MEMF(esp + 0x20) = xmm0; /* movss */
    xmm0 = MEMF(ebp + 0x18); /* movss */
    eax = 1;
    MEM32(esp + 0x58) = eax;
    MEM32(esp + 0x60) = eax;
    eax = MEM32(edi + 0x26C);
    MEMF(esp + 0x24) = xmm0; /* movss */
    xmm0 = MEMF(ebp + 0x14); /* movss */
    MEM32(esp + 0x7C) = eax;
    MEMF(esp + 0x28) = xmm0; /* movss */
    xmm0 = MEMF(0x648D20); /* movss */
    eax = 0; /* xor self */
    SET_LO8(eax, MEM8(edi + 4));
    MEMF(esp + 0x2C) = xmm0; /* movss */
    MEMF(esp + 0x30) = xmm0; /* movss */
    xmm0 = MEMF(0x64AC3C); /* movss */
    MEMF(esp + 0x34) = xmm0; /* movss */
    xmm0 = 0.0f; /* xorps self = zero */
    MEMF(esp + 0x38) = xmm0; /* movss */
    xmm0 = MEMF(0x648CE4); /* movss */
    PUSH32(esp, eax);
    esi = esp + 0x24;
    MEMF(esp + 0x40) = xmm0; /* movss */
    MEMF(esp + 0x44) = xmm0; /* movss */
    MEM16(esp + 0x4C) = LO16(ebx);
    MEM16(esp + 0x4E) = 0xFF;
    MEM16(esp + 0x50) = 0xFFC1;
    MEM16(esp + 0x52) = 0x1D;
    MEM16(esp + 0x58) = 0x32;
    MEM16(esp + 0x5A) = 0x14;
    MEM8(esp + 0x60) = 0x21;
    MEM8(esp + 0x61) = 0x68;
    MEM32(esp + 0x68) = ebx;
    MEM32(esp + 0x6C) = ebx;
    MEM32(esp + 0x70) = ebx;
    MEM32(esp + 0x74) = ebx;
    MEM32(esp + 0x78) = ebx;
    MEM8(esp + 0x7C) = LO8(ebx);
    MEM8(esp + 0x7D) = 0x9B;
    MEM8(esp + 0x7E) = 0x64;
    MEM32(esp + 0x84) = ecx;
    MEM16(esp + 0x88) = 0xA;
    MEM16(esp + 0x8A) = 0x19;
    MEM32(esp + 0x8C) = edx;
    PUSH32(esp, 0); sub_000F3E60(); /* call 0x000F3E60 */

loc_000FACCE: ;
    xmm0 = MEMF(edi + 0x60); /* movss */
    ecx = MEM32(0x847024);
    esi = MEM32(ecx + 0x40);
    MEMF(esp + 0x14) = xmm0; /* movss */
    xmm0 = MEMF(ebp + 0x18); /* movss */
    xmm0 = xmm0 + MEMF(0x648F78); /* addss */
    edx = esp + 0x14;
    esp = esp + 4;
    MEMF(esp + 0x14) = xmm0; /* movss */
    xmm0 = MEMF(edi + 0x68); /* movss */
    PUSH32(esp, edx);
    MEMF(esp + 0x1C) = xmm0; /* movss */
    PUSH32(esp, 0); sub_003E2480(); /* call 0x003E2480 */

loc_000FAD0D: ;
    eax = eax & 1;
    ecx = MEM32(eax * 4 + 0x6B3FB4);
    edx = esi;
    PUSH32(esp, 0); sub_00024F60(); /* call 0x00024F60 */

loc_000FAD1E: ;
    eax = 0; /* xor self */
    POP32(esp, edi);
    POP32(esp, esi);
    POP32(esp, ebx);
    esp = ebp;
    POP32(esp, ebp);
    esp += 4; return; /* ret */

loc_000FAD27: ;
    xmm0 = MEMF(edi + 0x78); /* movss */
    xmm0 = xmm0 * MEMF(edi + 0x30); /* mulss */
    xmm1 = 0.0f; /* xorps self = zero */
    eax = MEM32(0x847024);
    MEMF(edi + 0x78) = xmm0; /* movss */
    xmm0 = MEMF(edi + 0x7C); /* movss */
    xmm0 = xmm0 * MEMF(edi + 0x30); /* mulss */
    xmm1 = xmm1 - xmm0; /* subss */
    xmm0 = MEMF(edi + 0x80); /* movss */
    xmm0 = xmm0 * MEMF(edi + 0x30); /* mulss */
    MEMF(edi + 0x80) = xmm0; /* movss */
    xmm0 = MEMF(edi + 0x84); /* movss */
    xmm0 = xmm0 * MEMF(edi + 0x30); /* mulss */
    MEMF(edi + 0x84) = xmm0; /* movss */
    xmm0 = MEMF(edi + 0x88); /* movss */
    xmm0 = xmm0 * MEMF(edi + 0x30); /* mulss */
    MEMF(edi + 0x88) = xmm0; /* movss */
    xmm0 = MEMF(edi + 0x8C); /* movss */
    xmm0 = xmm0 * MEMF(edi + 0x30); /* mulss */
    MEMF(edi + 0x7C) = xmm1; /* movss */
    MEMF(edi + 0x8C) = xmm0; /* movss */
    ecx = MEM32(0x6B3FBC);
    edx = MEM32(eax + 0x40);
    edi = edi + 0x60;
    PUSH32(esp, edi);
    PUSH32(esp, 0); sub_00024F60(); /* call 0x00024F60 */

loc_000FADB7: ;
    eax = 1;
    POP32(esp, edi);
    POP32(esp, esi);
    POP32(esp, ebx);
    esp = ebp;
    POP32(esp, ebp);
    esp += 4; return; /* ret */

}

/**
 * sub_000FAEE0
 * Original: 0x000FAEE0 - 0x000FAEE3 (3 bytes, 2 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_000FAEE0(void)
{

loc_000FAEE0: ;
    eax = 0; /* xor self */
    esp += 4; return; /* ret */

}

/**
 * sub_000FAEF0
 * Original: 0x000FAEF0 - 0x000FAF5D (109 bytes, 22 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_000FAEF0(void)
{
    int _flags = 0; /* fallback flag var */
    float xmm0, xmm1;

loc_000FAEF0: ;
    eax = MEM32(esp + 4);
    if (CMP_GE(MEM16(eax + 0x36), 0x50)) goto loc_000FAF29; /* jge: greater or equal (signed >=) */

loc_000FAEFB: ;
    xmm0 = MEMF(0x7FA24C); /* movss */
    xmm0 = xmm0 * MEMF(0x648D3C); /* mulss */
    xmm0 = xmm0 + MEMF(eax + 0x310); /* addss */
    MEMF(eax + 0x310) = xmm0; /* movss */
    xmm1 = MEMF(eax + 0x44); /* movss */
    xmm1 = xmm1 - xmm0; /* subss */
    MEMF(eax + 0x44) = xmm1; /* movss */

loc_000FAF29: ;
    SET_LO16(ecx, MEM16(eax + 0x36));
    if (CMP_LE(LO16(ecx), 0x72)) { sub_000FAF5D(); return; } /* jle: less or equal (signed <=) */

loc_000FAF33: ;
    xmm1 = MEMF(eax + 0x38); /* movss */
    xmm0 = MEMF(0x6496B8); /* movss */
    xmm1 = xmm1 * xmm0; /* mulss */
    MEMF(eax + 0x38) = xmm1; /* movss */
    xmm1 = MEMF(eax + 0x3C); /* movss */
    xmm1 = xmm1 * xmm0; /* mulss */
    MEMF(eax + 0x3C) = xmm1; /* movss */
    eax = 1;
    esp += 4; return; /* ret */

}

/**
 * sub_000FAF80
 * Original: 0x000FAF80 - 0x000FAF9A (26 bytes, 8 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_000FAF80(void)
{
    int _flags = 0; /* fallback flag var */

loc_000FAF80: ;
    eax = MEM32(esp + 4);
    if (CMP_GE(MEM16(eax + 0x36), 0x20)) goto loc_000FAF94; /* jge: greater or equal (signed >=) */

loc_000FAF8B: ;
    SET_LO8(ecx, MEM8(eax + 0x36));
    SET_LO8(ecx, LO8(ecx) << 3);
    MEM8(eax + 0x7B) = LO8(ecx);

loc_000FAF94: ;
    eax = 1;
    esp += 4; return; /* ret */

}

/**
 * sub_000FAFA0
 * Original: 0x000FAFA0 - 0x000FAFC5 (37 bytes, 10 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_000FAFA0(void)
{
    uint32_t ebp;
    int _flags = 0; /* fallback flag var */
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_000FAFA0: ;
    esp = esp - 0x13C;
    PUSH32(esp, ebp);
    ebp = MEM32(esp + 0x144);
    SET_LO8(eax, MEM8(ebp + 0x94));
    if (((int32_t)(LO8(eax) & LO8(eax)) >= 0)) { sub_000FAFC5(); return; } /* jns: not sign (positive) */

loc_000FAFB8: ;
    eax = 1;
    POP32(esp, ebp);
    esp = esp + 0x13C;
    esp += 4; return; /* ret */

}

/**
 * sub_000FB5F0
 * Original: 0x000FB5F0 - 0x000FB62F (63 bytes, 28 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_000FB5F0(void)
{

loc_000FB5F0: ;
    eax = MEM32(esp + 8);
    ecx = MEM32(eax + 0x44);
    edx = MEM32(eax + 0x40);
    PUSH32(esp, ecx);
    ecx = MEM32(eax + 0x3C);
    PUSH32(esp, edx);
    edx = MEM32(eax + 0x68);
    PUSH32(esp, ecx);
    ecx = MEM32(eax + 0x64);
    PUSH32(esp, edx);
    edx = MEM32(eax + 0x60);
    PUSH32(esp, ecx);
    ecx = MEM32(eax + 0x5C);
    PUSH32(esp, edx);
    edx = MEM32(eax + 0x58);
    PUSH32(esp, ecx);
    ecx = MEM32(eax + 0x54);
    PUSH32(esp, edx);
    edx = MEM32(eax + 0x38);
    eax = MEM32(eax + 0x34);
    PUSH32(esp, ecx);
    PUSH32(esp, edx);
    PUSH32(esp, eax);
    eax = MEM32(esp + 0x30);
    PUSH32(esp, 0); sub_0010FD50(); /* call 0x0010FD50 */

loc_000FB629: ;
    esp = esp + 0x2C;
    SET_LO8(eax, 1);
    esp += 4; return; /* ret */

}

/**
 * sub_000FB630
 * Original: 0x000FB630 - 0x000FB6AA (122 bytes, 37 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_000FB630(void)
{
    int _flags = 0; /* fallback flag var */
    float xmm0;

loc_000FB630: ;
    eax = MEM32(0x84A5F8);
    PUSH32(esp, ebx);
    ecx = eax;
    edx = 0; /* xor self */
    SET_LO8(ebx, 1);
    PUSH32(esp, esi);
    /* nop */

loc_000FB640: ;
    esi = MEM32(ecx + 0x64);
    if (TEST_Z(esi, esi)) goto loc_000FB64F; /* je: equal / zero */

loc_000FB647: ;
    if (CMP_EQ(MEM8(ecx + 0x10B), LO8(ebx))) goto loc_000FB660; /* je: equal / zero */

loc_000FB64F: ;
    ecx = ecx + 0x6D0;
    edx++;
    if (CMP_L(edx, 0x81)) goto loc_000FB640; /* jl: less (signed <) */

loc_000FB65E: ;
    ecx = 0; /* xor self */

loc_000FB660: ;
    xmm0 = 0.0f; /* xorps self = zero */
    MEM32(0x849364) = ecx;
    MEMF(0x849368) = xmm0; /* movss */
    MEMF(0x84936C) = xmm0; /* movss */
    MEMF(0x849370) = xmm0; /* movss */
    ecx = 0; /* xor self */
    POP32(esp, esi);

loc_000FB684: ;
    edx = MEM32(eax + 0x64);
    if (TEST_Z(edx, edx)) goto loc_000FB693; /* je: equal / zero */

loc_000FB68B: ;
    if (CMP_EQ(MEM8(eax + 0x10B), LO8(ebx))) goto loc_000FB6A3; /* je: equal / zero */

loc_000FB693: ;
    eax = eax + 0x6D0;
    ecx++;
    if (CMP_L(ecx, 0x81)) goto loc_000FB684; /* jl: less (signed <) */

loc_000FB6A1: ;
    eax = 0; /* xor self */

loc_000FB6A3: ;
    MEM32(0x849374) = eax;
    POP32(esp, ebx);
    esp += 4; return; /* ret */

}

/**
 * sub_000FB6B0
 * Original: 0x000FB6B0 - 0x000FB94B (667 bytes, 197 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_000FB6B0(void)
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

loc_000FB6B0: ;
    eax = MEM32(esp + 0x14);
    esp = esp - 0x44;
    if (CMP_NE(eax, 7)) goto loc_000FB6D0; /* jne: not equal / not zero */

loc_000FB6BC: ;
    PUSH32(esp, 0); sub_003E2480(); /* call 0x003E2480 */

loc_000FB6C1: ;
    PUSH32(esp, 0);
    edx = ((int32_t)eax < 0) ? 0xFFFFFFFF : 0; /* cdq */
    PUSH32(esp, 4);
    PUSH32(esp, edx);
    PUSH32(esp, eax);
    PUSH32(esp, 0); sub_004710C0(); /* call 0x004710C0 */

loc_000FB6CD: ;
    eax = eax + 2;

loc_000FB6D0: ;
    PUSH32(esp, ebp);
    ebp = MEM32(esp + 0x60);
    ebp = ebp << 5;
    if (CMP_NE(MEM32(ebp + 0x771C50), eax)) goto loc_000FB6FC; /* jne: not equal / not zero */

loc_000FB6E0: ;
    ecx = MEM32(ebp + 0x771C60);
    if (CMP_LE(ecx, MEM32(ebp + 0x771C5C))) goto loc_000FB6FC; /* jle: less or equal (signed <=) */

loc_000FB6EE: ;
    SET_LO8(ecx, MEM8(ebp + 0x771C64));
    if (TEST_Z(LO8(ecx), LO8(ecx))) goto loc_000FB946; /* je: equal / zero */

loc_000FB6FC: ;
    if (CMP_A(eax, 5)) goto loc_000FB946; /* ja: above (unsigned >) */

loc_000FB705: ;
    { uint32_t _jt = MEM32(eax * 4 + 0xFB94C); /* switch: 6 entries, 2 targets */
    if (_jt == 0x000FB70Cu) goto loc_000FB70C;
    if (_jt == 0x000FB74Du) goto loc_000FB74D;
    g_seh_ebp = ebp; RECOMP_ITAIL(_jt); return; }

loc_000FB70C: ;
    SET_LO8(edx, MEM8(esp + 0x4C));
    SET_LO8(ecx, MEM8(esp + 0x50));
    MEM32(ebp + 0x771C50) = eax;
    MEM8(ebp + 0x771C58) = LO8(edx);
    SET_LO8(edx, MEM8(esp + 0x54));
    MEM8(ebp + 0x771C59) = LO8(ecx);
    ecx = MEM32(esp + 0x58);
    eax = 0; /* xor self */
    MEM32(ebp + 0x771C54) = eax;
    MEM8(ebp + 0x771C5A) = LO8(edx);
    MEM32(ebp + 0x771C5C) = ecx;
    MEM32(ebp + 0x771C60) = eax;
    POP32(esp, ebp);
    esp = esp + 0x44;
    esp += 4; return; /* ret */

loc_000FB74D: ;
    edx = MEM32(0x5499E8);
    PUSH32(esp, ebx);
    PUSH32(esp, esi);
    MEM32(ebp + 0x771C50) = eax;
    PUSH32(esp, edi);
    edi = MEM32(edx + 0x1A18);
    eax = MEM32(edi);
    (void)0; /* test eax, 0xFFFF - flags set for next jcc */
    MEM32(esp + 0x14) = edi;
    if (TEST_NZ(eax, 0xFFFF)) goto loc_000FB788; /* jne: not equal / not zero */

loc_000FB76F: ;
    eax = eax & 0x70000;
    if (CMP_NE(eax, 0x50000)) goto loc_000FB788; /* jne: not equal / not zero */

loc_000FB77B: ;
    eax = MEM32(edi + 0x14);
    if (TEST_Z(eax, eax)) goto loc_000FB788; /* je: equal / zero */

loc_000FB782: ;
    PUSH32(esp, eax);
    PUSH32(esp, 0); sub_0053B830(); /* call 0x0053B830 */

loc_000FB788: ;
    edx = MEM32(edi);
    edx++;
    esi = esp + 0x38;
    ebx = 0; /* xor self */
    MEM32(edi) = edx;
    PUSH32(esp, 0); sub_0053FC70(); /* call 0x0053FC70 */

loc_000FB798: ;
    eax = MEM32(esp + 0x6C);
    (void)0; /* cmp eax, 0xFFFFFFFFu - flags set for next jcc */
    MEM32(esp + 0x20) = ebx;
    MEM32(esp + 0x24) = ebx;
    if (CMP_NE(eax, 0xFFFFFFFFu)) goto loc_000FB7C3; /* jne: not equal / not zero */

loc_000FB7A9: ;
    edi = MEM32(esp + 0x4C);
    eax = MEM32(esp + 0x50);
    MEM32(esp + 0x28) = ebx;
    MEM32(esp + 0x30) = edi;
    MEM32(esp + 0x2C) = ebx;
    MEM32(esp + 0x34) = eax;
    goto loc_000FB81B;

loc_000FB7C3: ;
    ecx = MEM32(0x84A13C);
    eax = (uint32_t)((int32_t)eax * (int32_t)0x2B0);
    fp_push(MEMF(eax + ecx + 0x1F4)); /* fld float */
    esi = eax + ecx;
    PUSH32(esp, 0); sub_00471288(); /* call 0x00471288 */

loc_000FB7DE: ;
    edi = eax;
    fp_push(MEMF(esi + 0x1F8)); /* fld float */
    PUSH32(esp, 0); sub_00471288(); /* call 0x00471288 */

loc_000FB7EB: ;
    edx = (int32_t)MEMF(esi + 0x21C); /* cvttss2si */
    ecx = (int32_t)MEMF(esi + 0x220); /* cvttss2si */
    MEM32(esp + 0x28) = edx;
    edx = (int32_t)MEMF(esi + 0x214); /* cvttss2si */
    MEM32(esp + 0x30) = ecx;
    ecx = (int32_t)MEMF(esi + 0x218); /* cvttss2si */
    MEM32(esp + 0x2C) = edx;
    MEM32(esp + 0x34) = ecx;

loc_000FB81B: ;
    if (CMP_NE(MEM32(ebp + 0x771C6C), ebx)) goto loc_000FB8CA; /* jne: not equal / not zero */

loc_000FB827: ;
    edx = esp + 0x10;
    PUSH32(esp, edx);
    edx = MEM32(esp + 0x3C);
    ecx = esp + 0x6C;
    PUSH32(esp, ecx);
    PUSH32(esp, ebx);
    PUSH32(esp, ebx);
    PUSH32(esp, ebx);
    PUSH32(esp, edx);
    PUSH32(esp, 1);
    edx = eax;
    PUSH32(esp, 1);
    eax = edi;
    PUSH32(esp, 0); sub_0053FFE0(); /* call 0x0053FFE0 */

loc_000FB846: ;
    PUSH32(esp, 0x64800000);
    PUSH32(esp, 0x14);
    edi = eax;
    PUSH32(esp, 0); sub_002AF430(); /* call 0x002AF430 */

loc_000FB854: ;
    esi = eax;
    if (CMP_NE(esi, ebx)) goto loc_000FB85E; /* jne: not equal / not zero */

loc_000FB85A: ;
    esi = 0; /* xor self */
    goto loc_000FB89B;

loc_000FB85E: ;
    PUSH32(esp, 0xB7800000u);
    PUSH32(esp, edi);
    PUSH32(esp, 0); sub_002AF430(); /* call 0x002AF430 */

loc_000FB869: ;
    if (CMP_NE(eax, ebx)) goto loc_000FB87C; /* jne: not equal / not zero */

loc_000FB86D: ;
    PUSH32(esp, 0x24800000);
    PUSH32(esp, esi);
    PUSH32(esp, 0); sub_002AF670(); /* call 0x002AF670 */

loc_000FB878: ;
    esi = 0; /* xor self */
    goto loc_000FB89B;

loc_000FB87C: ;
    ecx = MEM32(esp + 0x10);
    eax = eax & 0xFFFFFFF;
    MEM32(esi + 4) = eax;
    eax = MEM32(esp + 0x68);
    MEM32(esi) = 0x1040001;
    MEM32(esi + 0xC) = eax;
    MEM32(esi + 0x10) = ecx;
    MEM32(esi + 8) = ebx;

loc_000FB89B: ;
    eax = esi;
    (void)0; /* cmp eax, ebx - flags set for next jcc */
    MEM32(ebp + 0x771C6C) = esi;
    if (CMP_NE(eax, ebx)) goto loc_000FB8CA; /* jne: not equal / not zero */

loc_000FB8A7: ;
    edx = MEM32(esp + 0x6C);
    eax = MEM32(esp + 0x64);
    ecx = MEM32(esp + 0x60);
    PUSH32(esp, edx);
    edx = MEM32(esp + 0x60);
    PUSH32(esp, 1);
    PUSH32(esp, eax);
    eax = MEM32(esp + 0x64);
    PUSH32(esp, ecx);
    PUSH32(esp, edx);
    PUSH32(esp, eax);
    PUSH32(esp, 0); sub_000FB6B0(); /* call 0x000FB6B0 */

loc_000FB8C7: ;
    esp = esp + 0x18;

loc_000FB8CA: ;
    edi = MEM32(ebp + 0x771C6C);
    ecx = esp + 0x6C;
    PUSH32(esp, ecx);
    edx = esp + 0x6C;
    PUSH32(esp, edx);
    eax = esp + 0x20;
    PUSH32(esp, eax);
    ecx = esp + 0x28;
    PUSH32(esp, ecx);
    edx = esp + 0x20;
    PUSH32(esp, edx);
    PUSH32(esp, ebx);
    PUSH32(esp, ebx);
    PUSH32(esp, edi);
    PUSH32(esp, 0); sub_0053FD10(); /* call 0x0053FD10 */

loc_000FB8F1: ;
    eax = MEM32(esp + 0x6C);
    ecx = MEM32(esp + 0x68);
    PUSH32(esp, eax);
    eax = MEM32(esp + 0x14);
    PUSH32(esp, ecx);
    PUSH32(esp, 0); sub_0053C720(); /* call 0x0053C720 */

loc_000FB904: ;
    edi = MEM32(esp + 0x14);
    edx = esp + 0x20;
    PUSH32(esp, edx);
    esi = eax;
    PUSH32(esp, esi);
    PUSH32(esp, 1);
    eax = esp + 0x34;
    PUSH32(esp, eax);
    PUSH32(esp, edi);
    PUSH32(esp, 0); sub_00539230(); /* call 0x00539230 */

loc_000FB91D: ;
    PUSH32(esp, edi);
    PUSH32(esp, 0); sub_0053B870(); /* call 0x0053B870 */

loc_000FB923: ;
    PUSH32(esp, esi);
    PUSH32(esp, 0); sub_0053B870(); /* call 0x0053B870 */

loc_000FB929: ;
    xmm0 = MEMF(0x648D14); /* movss */
    POP32(esp, edi);
    POP32(esp, esi);
    MEM32(ebp + 0x771C54) = 1;
    MEMF(ebp + 0x771C68) = xmm0; /* movss */
    POP32(esp, ebx);

loc_000FB946: ;
    POP32(esp, ebp);
    esp = esp + 0x44;
    esp += 4; return; /* ret */

    #undef fp_push
    #undef fp_pop
    #undef fp_popp
    #undef fp_top
    #undef fp_st1
}

/**
 * sub_000FB970
 * Original: 0x000FB970 - 0x000FB981 (17 bytes, 6 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_000FB970(void)
{
    int _flags = 0; /* fallback flag var */

loc_000FB970: ;
    ecx = ecx << 5;
    SET_LO8(eax, MEM8(ecx + 0x771C64));
    if (TEST_Z(LO8(eax), LO8(eax))) { sub_000FB981(); return; } /* je: equal / zero */

loc_000FB97D: ;
    eax = ZX8(LO8(eax));
    esp += 4; return; /* ret */

}

/**
 * sub_000FBA20
 * Original: 0x000FBA20 - 0x000FBA5F (63 bytes, 27 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_000FBA20(void)
{
    int _flags = 0; /* fallback flag var */
    float xmm0, xmm1;

loc_000FBA20: ;
    PUSH32(esp, ebx);
    PUSH32(esp, esi);
    PUSH32(esp, edi);
    edi = MEM32(0x84A144);
    ebx = ebx | 0xFFFFFFFFu;
    esi = 0; /* xor self */
    if (TEST_S(edi, edi)) goto loc_000FBA54; /* jl: less (signed <) */

loc_000FBA32: ;
    xmm1 = 0.0f; /* xorps self = zero */

loc_000FBA35: ;
    ecx = esi;
    PUSH32(esp, 0); sub_000FB970(); /* call 0x000FB970 */

loc_000FBA3C: ;
    if (CMP_G(eax & eax, 0)) goto loc_000FBA4E; /* jg: greater (signed >) */

loc_000FBA40: ;
    xmm0 = MEMF(esi * 4 + 0x771C28); /* movss */
    /* comiss xmm0, xmm1 - sets EFLAGS */
    if ((xmm0 <= xmm1)) goto loc_000FBA4F; /* jbe: below or equal (unsigned <=) */

loc_000FBA4E: ;
    ebx++;

loc_000FBA4F: ;
    esi++;
    if (CMP_LE(esi, edi)) goto loc_000FBA35; /* jle: less or equal (signed <=) */

loc_000FBA54: ;
    eax = 0; /* xor self */
    (void)0; /* cmp ebx, edi - flags set for next jcc */
    POP32(esp, edi);
    POP32(esp, esi);
    SET_LO8(eax, (CMP_EQ(ebx, edi)) ? 1 : 0); /* sete */
    POP32(esp, ebx);
    esp += 4; return; /* ret */

}

/**
 * sub_000FBA60
 * Original: 0x000FBA60 - 0x000FBC79 (537 bytes, 119 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_000FBA60(void)
{
    uint32_t ebp;
    int _flags = 0; /* fallback flag var */
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_000FBA60: ;
    eax = MEM32(0x6B842C);
    PUSH32(esp, esi);
    PUSH32(esp, edi);
    PUSH32(esp, eax);
    PUSH32(esp, 0); sub_00536930(); /* call 0x00536930 */

loc_000FBA6D: ;
    PUSH32(esp, 0x1B02);
    PUSH32(esp, 0); sub_00537840(); /* call 0x00537840 */

loc_000FBA77: ;
    edi = 0; /* xor self */
    PUSH32(esp, edi);
    PUSH32(esp, 0); sub_00537070(); /* call 0x00537070 */

loc_000FBA7F: ;
    edx = 1;
    ecx = 0x40304;
    PUSH32(esp, 0); sub_00537990(); /* call 0x00537990 */

loc_000FBA8E: ;
    edx = 0; /* xor self */
    ecx = 0x40300;
    MEM32(0x549AE4) = 1;
    PUSH32(esp, 0); sub_00537990(); /* call 0x00537990 */

loc_000FBAA4: ;
    esi = MEM32(0x5499E8);
    MEM32(0x549AE8) = edi;
    eax = MEM32(esi);
    if (CMP_B(eax, MEM32(esi + 4))) goto loc_000FBAC6; /* jb: below (unsigned <) */

loc_000FBAB7: ;
    eax = MEM32(0x54A8B8);
    ecx = eax;
    ecx = ecx >> 1;
    PUSH32(esp, ecx);
    PUSH32(esp, 0); sub_0053C300(); /* call 0x0053C300 */

loc_000FBAC6: ;
    MEM32(eax) = 0x4030C;
    MEM32(eax + 4) = edi;
    ecx = MEM32(0x549B40);
    MEM32(eax + 8) = 0x41D78;
    MEM32(eax + 0xC) = ecx;
    eax = eax + 0x10;
    MEM32(esi) = eax;
    eax = MEM32(0x549C34);
    (void)0; /* cmp eax, 2 - flags set for next jcc */
    MEM32(0x549C34) = edi;
    if (CMP_NE(eax, 2)) goto loc_000FBB23; /* jne: not equal / not zero */

loc_000FBAF4: ;
    PUSH32(esp, 0); sub_005384E0(); /* call 0x005384E0 */

loc_000FBAF9: ;
    PUSH32(esp, 0); sub_00536810(); /* call 0x00536810 */

loc_000FBAFE: ;
    eax = MEM32(esi);
    if (CMP_B(eax, MEM32(esi + 4))) goto loc_000FBB14; /* jb: below (unsigned <) */

loc_000FBB05: ;
    eax = MEM32(0x54A8B8);
    edx = eax;
    edx = edx >> 1;
    PUSH32(esp, edx);
    PUSH32(esp, 0); sub_0053C300(); /* call 0x0053C300 */

loc_000FBB14: ;
    PUSH32(esp, esi);
    edx = eax;
    PUSH32(esp, 0); sub_00538030(); /* call 0x00538030 */

loc_000FBB1C: ;
    PUSH32(esp, 0); sub_00537E30(); /* call 0x00537E30 */

loc_000FBB21: ;
    MEM32(esi) = eax;

loc_000FBB23: ;
    edx = 0x203;
    ecx = 0x40354;
    PUSH32(esp, 0); sub_00537990(); /* call 0x00537990 */

loc_000FBB32: ;
    edx = 0; /* xor self */
    ecx = 0x4035C;
    MEM32(0x549ADC) = 0x203;
    PUSH32(esp, 0); sub_00537990(); /* call 0x00537990 */

loc_000FBB48: ;
    (void)0; /* cmp MEM32(0x7FA1F8), 0x18 - flags set for next jcc */
    MEM32(0x549AF8) = edi;
    if (CMP_NE(MEM32(0x7FA1F8), 0x18)) goto loc_000FBBC3; /* jne: not equal / not zero */

loc_000FBB57: ;
    PUSH32(esp, 1);
    PUSH32(esp, 0); sub_00537230(); /* call 0x00537230 */

loc_000FBB5E: ;
    PUSH32(esp, 0x1E00);
    PUSH32(esp, 0); sub_005372E0(); /* call 0x005372E0 */

loc_000FBB68: ;
    edx = 0x1E00;
    ecx = 0x40378;
    PUSH32(esp, 0); sub_00537990(); /* call 0x00537990 */

loc_000FBB77: ;
    edx = edx | 0xFFFFFFFFu;
    ecx = 0x4036C;
    MEM32(0x549B0C) = 0x1E00;
    PUSH32(esp, 0); sub_00537990(); /* call 0x00537990 */

loc_000FBB8E: ;
    edx = 0; /* xor self */
    ecx = 0x40368;
    MEM32(0x549B18) = 0xFFFFFFFFu;
    PUSH32(esp, 0); sub_00537990(); /* call 0x00537990 */

loc_000FBBA4: ;
    edx = 0x202;
    ecx = 0x40364;
    MEM32(0x549B14) = edi;
    PUSH32(esp, 0); sub_00537990(); /* call 0x00537990 */

loc_000FBBB9: ;
    MEM32(0x549B10) = 0x202;

loc_000FBBC3: ;
    esi = MEM32(0x5499F0);
    esi = esi | 0x1200;
    PUSH32(esp, edi);
    eax = 0; /* xor self */
    MEM32(0x5499F0) = esi;
    MEM32(0x549B90) = edi;
    PUSH32(esp, 0); sub_00539960(); /* call 0x00539960 */

loc_000FBBE3: ;
    PUSH32(esp, edi);
    esi = 0; /* xor self */
    PUSH32(esp, 0); sub_005379C0(); /* call 0x005379C0 */

loc_000FBBEB: ;
    eax = 2;
    MEM32(0x547360) = eax;
    MEM32(0x547370) = eax;
    eax = 3;
    MEM32(0x547330) = eax;
    MEM32(0x547334) = eax;
    eax = MEM32(0x5499F0);
    eax = eax | 0xC01;
    edx = 0x302;
    ecx = 0x40344;
    MEM32(0x547368) = ebx;
    MEM32(0x547378) = ebx;
    MEM32(0x5473E0) = 1;
    MEM32(0x5473F0) = 1;
    MEM32(0x5499F0) = eax;
    MEM32(0x547384) = edi;
    PUSH32(esp, 0); sub_00537990(); /* call 0x00537990 */

loc_000FBC4D: ;
    edx = 0x303;
    ecx = 0x40348;
    MEM32(0x549AF0) = 0x302;
    PUSH32(esp, 0); sub_00537990(); /* call 0x00537990 */

loc_000FBC66: ;
    POP32(esp, edi);
    MEM32(0x549AF4) = 0x303;
    eax = 0; /* xor self */
    POP32(esp, esi);
    g_seh_ebp = ebp; sub_00538690(); return; /* tail jmp 0x00538690 */

}

/**
 * sub_000FBC80
 * Original: 0x000FBC80 - 0x000FCBE6 (3942 bytes, 923 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_000FBC80(void)
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
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_000FBC80: ;
    esp = esp - 0x44;
    PUSH32(esp, ebx);
    PUSH32(esp, ebp);
    ebp = MEM32(esp + 0x58);
    PUSH32(esp, edi);
    edi = eax;
    eax = MEM32(0x849C60);
    edx = 2;
    ebx = 0; /* xor self */
    if (CMP_NE(eax, edx)) goto loc_000FBCA8; /* jne: not equal / not zero */

loc_000FBC9C: ;
    if (CMP_NE(MEM8(0x779B94), LO8(ebx))) goto loc_000FCBDF; /* jne: not equal / not zero */

loc_000FBCA8: ;
    (void)0; /* cmp MEM32(0x84A144), ebx - flags set for next jcc */
    PUSH32(esp, esi);
    esi = MEM32(esp + 0x64);
    if (CMP_EQ(MEM32(0x84A144), ebx)) goto loc_000FBCBE; /* je: equal / zero */

loc_000FBCB5: ;
    eax = esi;
    eax = eax - ebx;
    if ((eax == 0)) goto loc_000FBCE9; /* je: equal / zero */

loc_000FBCBB: ;
    eax--;
    if ((eax == 0)) goto loc_000FBCD1; /* je: equal / zero */

loc_000FBCBE: ;
    xmm0 = 0.0f; /* xorps self = zero */
    MEMF(esp + 0x18) = xmm0; /* movss */
    xmm0 = MEMF(0x649718); /* movss */
    goto loc_000FBCFA;

loc_000FBCD1: ;
    xmm0 = MEMF(0x58BD48); /* movss */
    MEMF(esp + 0x18) = xmm0; /* movss */
    xmm0 = MEMF(0x649718); /* movss */
    goto loc_000FBCFA;

loc_000FBCE9: ;
    xmm0 = 0.0f; /* xorps self = zero */
    MEMF(esp + 0x18) = xmm0; /* movss */
    xmm0 = MEMF(0x58BD48); /* movss */

loc_000FBCFA: ;
    eax = esi;
    eax = eax << 5;
    ecx = MEM32(eax + 0x771C50);
    (void)0; /* cmp ecx, 5 - flags set for next jcc */
    MEMF(esp + 0x1C) = xmm0; /* movss */
    MEM32(esp + 0x20) = eax;
    if (CMP_A(ecx, 5)) goto loc_000FCBDE; /* ja: above (unsigned >) */

loc_000FBD18: ;
    { uint32_t _jt = MEM32(ecx * 4 + 0xFCBE8); /* switch: 6 entries, 5 targets */
    if (_jt == 0x000FBD1Fu) goto loc_000FBD1F;
    if (_jt == 0x000FBE00u) goto loc_000FBE00;
    if (_jt == 0x000FC157u) goto loc_000FC157;
    if (_jt == 0x000FC4E2u) goto loc_000FC4E2;
    if (_jt == 0x000FC828u) goto loc_000FC828;
    g_seh_ebp = ebp; RECOMP_ITAIL(_jt); return; }

loc_000FBD1F: ;
    esi = MEM32(esp + 0x58);
    if (CMP_EQ(esi, ebx)) goto loc_000FCBDE; /* je: equal / zero */

loc_000FBD2B: ;
    ebx = 0; /* xor self */
    PUSH32(esp, 0); sub_000FBA60(); /* call 0x000FBA60 */

loc_000FBD32: ;
    eax = MEM32(esp + 0x5C);
    edi = edi & 0xFF;
    esi = esi << 8;
    edi = edi | esi;
    edi = edi << 8;
    eax = eax & 0xFF;
    edi = edi | eax;
    edi = edi << 8;
    ebp = ebp & 0xFF;
    edi = edi | ebp;
    PUSH32(esp, 8);
    MEM32(esp + 0x18) = edi;
    PUSH32(esp, 0x18);
    edi = esp + 0x28;
    MEM32(esp + 0x28) = ebx;
    PUSH32(esp, 0); sub_000A75E0(); /* call 0x000A75E0 */

loc_000FBD6B: ;
    esi = MEM32(esp + 0x20);
    xmm0 = 0.0f; /* xorps self = zero */
    PUSH32(esp, ebx);
    PUSH32(esp, ebx);
    eax = esp + 0x24;
    PUSH32(esp, eax);
    PUSH32(esp, 0x40A00000);
    PUSH32(esp, esi);
    eax = edi;
    PUSH32(esp, 0); sub_000A7660(); /* call 0x000A7660 */

loc_000FBD86: ;
    xmm0 = MEMF(0x64971C); /* movss */
    PUSH32(esp, ebx);
    PUSH32(esp, 0x3F800000);
    ecx = esp + 0x38;
    PUSH32(esp, ecx);
    PUSH32(esp, 0x40A00000);
    PUSH32(esp, esi);
    eax = edi;
    PUSH32(esp, 0); sub_000A7660(); /* call 0x000A7660 */

loc_000FBDA6: ;
    esi = MEM32(esp + 0x4C);
    xmm0 = MEMF(0x64971C); /* movss */
    PUSH32(esp, 0x3F800000);
    PUSH32(esp, 0x3F800000);
    edx = esp + 0x4C;
    PUSH32(esp, edx);
    PUSH32(esp, 0x40A00000);
    PUSH32(esp, esi);
    eax = edi;
    PUSH32(esp, 0); sub_000A7660(); /* call 0x000A7660 */

loc_000FBDCE: ;
    xmm0 = 0.0f; /* xorps self = zero */
    esp = esp + 0x44;
    PUSH32(esp, 0x3F800000);
    PUSH32(esp, ebx);
    eax = esp + 0x1C;
    PUSH32(esp, eax);
    PUSH32(esp, 0x40A00000);
    PUSH32(esp, esi);
    eax = edi;
    PUSH32(esp, 0); sub_000A7660(); /* call 0x000A7660 */

loc_000FBDEC: ;
    esp = esp + 0x14;
    eax = esp + 0x20;
    PUSH32(esp, 0); sub_000A7630(); /* call 0x000A7630 */

loc_000FBDF8: ;
    POP32(esp, esi);
    POP32(esp, edi);
    POP32(esp, ebp);
    POP32(esp, ebx);
    esp = esp + 0x44;
    esp += 4; return; /* ret */

loc_000FBE00: ;
    if (CMP_NE(MEM32(eax + 0x771C54), edx)) goto loc_000FCBDE; /* jne: not equal / not zero */

loc_000FBE0C: ;
    ecx = MEM32(0x6B842C);
    PUSH32(esp, ecx);
    PUSH32(esp, 0); sub_00536930(); /* call 0x00536930 */

loc_000FBE18: ;
    eax = 0; /* xor self */
    PUSH32(esp, 0); sub_00538690(); /* call 0x00538690 */

loc_000FBE1F: ;
    PUSH32(esp, 0x1B02);
    PUSH32(esp, 0); sub_00537840(); /* call 0x00537840 */

loc_000FBE29: ;
    PUSH32(esp, ebx);
    PUSH32(esp, 0); sub_00537070(); /* call 0x00537070 */

loc_000FBE2F: ;
    edx = 1;
    ecx = 0x40304;
    PUSH32(esp, 0); sub_00537990(); /* call 0x00537990 */

loc_000FBE3E: ;
    edx = 0; /* xor self */
    ecx = 0x40300;
    MEM32(0x549AE4) = 1;
    PUSH32(esp, 0); sub_00537990(); /* call 0x00537990 */

loc_000FBE54: ;
    ecx = MEM32(0x5499E8);
    MEM32(0x549AE8) = ebx;
    eax = MEM32(ecx);
    (void)0; /* cmp eax, MEM32(ecx + 4) - flags set for next jcc */
    MEM32(esp + 0x14) = ecx;
    if (CMP_B(eax, MEM32(ecx + 4))) goto loc_000FBE7E; /* jb: below (unsigned <) */

loc_000FBE6B: ;
    eax = MEM32(0x54A8B8);
    edx = eax;
    edx = edx >> 1;
    PUSH32(esp, edx);
    PUSH32(esp, 0); sub_0053C300(); /* call 0x0053C300 */

loc_000FBE7A: ;
    ecx = MEM32(esp + 0x14);

loc_000FBE7E: ;
    MEM32(eax) = 0x4030C;
    MEM32(eax + 4) = ebx;
    edx = MEM32(0x549B40);
    MEM32(eax + 8) = 0x41D78;
    MEM32(eax + 0xC) = edx;
    eax = eax + 0x10;
    MEM32(ecx) = eax;
    eax = MEM32(0x549C34);
    (void)0; /* cmp eax, 2 - flags set for next jcc */
    MEM32(0x549C34) = ebx;
    if (CMP_NE(eax, 2)) goto loc_000FBEE7; /* jne: not equal / not zero */

loc_000FBEAC: ;
    PUSH32(esp, 0); sub_005384E0(); /* call 0x005384E0 */

loc_000FBEB1: ;
    esi = MEM32(esp + 0x14);
    PUSH32(esp, 0); sub_00536810(); /* call 0x00536810 */

loc_000FBEBA: ;
    eax = MEM32(esi);
    if (CMP_B(eax, MEM32(esi + 4))) goto loc_000FBED0; /* jb: below (unsigned <) */

loc_000FBEC1: ;
    eax = MEM32(0x54A8B8);
    ecx = eax;
    ecx = ecx >> 1;
    PUSH32(esp, ecx);
    PUSH32(esp, 0); sub_0053C300(); /* call 0x0053C300 */

loc_000FBED0: ;
    PUSH32(esp, esi);
    edx = eax;
    PUSH32(esp, 0); sub_00538030(); /* call 0x00538030 */

loc_000FBED8: ;
    PUSH32(esp, 0); sub_00537E30(); /* call 0x00537E30 */

loc_000FBEDD: ;
    edx = MEM32(esp + 0x14);
    esi = MEM32(esp + 0x64);
    MEM32(edx) = eax;

loc_000FBEE7: ;
    edx = 0x203;
    ecx = 0x40354;
    PUSH32(esp, 0); sub_00537990(); /* call 0x00537990 */

loc_000FBEF6: ;
    edx = 0; /* xor self */
    ecx = 0x4035C;
    MEM32(0x549ADC) = 0x203;
    PUSH32(esp, 0); sub_00537990(); /* call 0x00537990 */

loc_000FBF0C: ;
    MEM32(0x5499F0) = MEM32(0x5499F0) | 0x1200;
    eax = MEM32(esp + 0x20);
    ecx = MEM32(eax + 0x771C6C);
    PUSH32(esp, ecx);
    eax = 0; /* xor self */
    MEM32(0x549AF8) = ebx;
    MEM32(0x549B90) = ebx;
    PUSH32(esp, 0); sub_00539960(); /* call 0x00539960 */

loc_000FBF34: ;
    PUSH32(esp, ebx);
    eax = 1;
    PUSH32(esp, 0); sub_00539960(); /* call 0x00539960 */

loc_000FBF3F: ;
    edx = MEM32(0x5499F0);
    eax = 3;
    ecx = 2;
    MEM32(0x54736C) = ecx;
    MEM32(0x547370) = ecx;
    ecx = 1;
    edx = edx | 0x803;
    MEM32(0x5473E8) = ecx;
    MEM32(0x5473F8) = ecx;
    MEM32(0x5473E0) = ecx;
    MEM32(0x5499F0) = edx;
    MEM32(0x5473F0) = ecx;
    edx = 0x302;
    ecx = 0x40344;
    MEM32(0x547360) = eax;
    MEM32(0x547368) = ebx;
    MEM32(0x547378) = ebx;
    MEM32(0x547330) = eax;
    MEM32(0x547334) = eax;
    MEM32(0x547338) = eax;
    MEM32(0x5473B0) = eax;
    MEM32(0x5473B4) = eax;
    MEM32(0x5473B8) = eax;
    PUSH32(esp, 0); sub_00537990(); /* call 0x00537990 */

loc_000FBFC2: ;
    edx = 0x303;
    ecx = 0x40348;
    MEM32(0x549AF0) = 0x302;
    PUSH32(esp, 0); sub_00537990(); /* call 0x00537990 */

loc_000FBFDB: ;
    eax = MEM32(esp + 0x5C);
    edi = edi | 0xFFFFFF00u;
    edi = edi << 8;
    eax = eax & 0xFF;
    edi = edi | eax;
    edi = edi << 8;
    ebp = ebp & 0xFF;
    edi = edi | ebp;
    PUSH32(esp, 8);
    MEM32(esp + 0x14) = edi;
    PUSH32(esp, 0x18);
    edi = esp + 0x1C;
    MEM32(0x549AF4) = 0x303;
    MEM32(esp + 0x1C) = ebx;
    PUSH32(esp, 0); sub_000A75E0(); /* call 0x000A75E0 */

loc_000FC019: ;
    esp = esp + 8;
    if (CMP_NE(esi, 0xFFFFFFFFu)) goto loc_000FC046; /* jne: not equal / not zero */

loc_000FC021: ;
    xmm0 = 0.0f; /* xorps self = zero */
    xmm1 = MEMF(esp + 0x18); /* movss */
    MEMF(esp + 0x24) = xmm0; /* movss */
    xmm0 = MEMF(0x64971C); /* movss */
    MEMF(esp + 0x18) = xmm0; /* movss */
    xmm0 = MEMF(esp + 0x1C); /* movss */
    goto loc_000FC083;

loc_000FC046: ;
    edx = MEM32(0x84A13C);
    esi = (uint32_t)((int32_t)esi * (int32_t)0x2B0);
    xmm0 = MEMF(esi + edx + 0x21C); /* movss */
    xmm1 = MEMF(esi + edx + 0x214); /* movss */
    eax = esi + edx;
    MEMF(esp + 0x24) = xmm0; /* movss */
    xmm0 = MEMF(eax + 0x220); /* movss */
    MEMF(esp + 0x18) = xmm0; /* movss */
    xmm0 = MEMF(eax + 0x218); /* movss */

loc_000FC083: ;
    eax = MEM32(esp + 0x20);
    edi = MEM32(esp + 0x24);
    MEMF(esp + 0x1C) = xmm0; /* movss */
    xmm0 = xmm0 - xmm1; /* subss */
    xmm0 = xmm0 * MEMF(eax + 0x771C68); /* mulss */
    MEMF(esp + 0x34) = xmm0; /* movss */
    xmm0 = xmm0 + xmm1; /* addss */
    MEMF(esp + 0x38) = xmm0; /* movss */
    esi = MEM32(esp + 0x38);
    xmm0 = MEMF(esp + 0x24); /* movss */
    PUSH32(esp, esi);
    PUSH32(esp, edi);
    ecx = esp + 0x18;
    PUSH32(esp, ecx);
    MEMF(esp + 0x34) = xmm1; /* movss */
    ebx = MEM32(esp + 0x34);
    PUSH32(esp, 0x3F800000);
    PUSH32(esp, ebx);
    eax = esp + 0x28;
    PUSH32(esp, 0); sub_000A7660(); /* call 0x000A7660 */

loc_000FC0D7: ;
    xmm0 = MEMF(esp + 0x2C); /* movss */
    PUSH32(esp, esi);
    esi = MEM32(esp + 0x30);
    PUSH32(esp, esi);
    edx = esp + 0x2C;
    PUSH32(esp, edx);
    PUSH32(esp, 0x3F800000);
    PUSH32(esp, ebx);
    eax = esp + 0x3C;
    PUSH32(esp, 0); sub_000A7660(); /* call 0x000A7660 */

loc_000FC0F7: ;
    fp_push(MEMF(esp + 0x44)); /* fld float */
    ebx = MEM32(esp + 0x44);
    fp_st1() -= fp_top(); fp_pop(); /* fsub */
    xmm0 = MEMF(esp + 0x40); /* movss */
    PUSH32(esp, ebx);
    PUSH32(esp, esi);
    MEMF(esp + 0x68) = (float)fp_top(); fp_popp(); /* fstp */
    esi = MEM32(esp + 0x68);
    eax = esp + 0x40;
    PUSH32(esp, eax);
    PUSH32(esp, 0x3F800000);
    PUSH32(esp, esi);
    eax = esp + 0x50;
    PUSH32(esp, 0); sub_000A7660(); /* call 0x000A7660 */

loc_000FC127: ;
    xmm0 = MEMF(esp + 0x60); /* movss */
    PUSH32(esp, ebx);
    PUSH32(esp, edi);
    ecx = esp + 0x54;
    PUSH32(esp, ecx);
    PUSH32(esp, 0x3F800000);
    PUSH32(esp, esi);
    eax = esp + 0x64;
    PUSH32(esp, 0); sub_000A7660(); /* call 0x000A7660 */

loc_000FC143: ;
    esp = esp + 0x50;
    eax = esp + 0x14;
    PUSH32(esp, 0); sub_000A7630(); /* call 0x000A7630 */

loc_000FC14F: ;
    POP32(esp, esi);
    POP32(esp, edi);
    POP32(esp, ebp);
    POP32(esp, ebx);
    esp = esp + 0x44;
    esp += 4; return; /* ret */

loc_000FC157: ;
    if (CMP_NE(MEM32(eax + 0x771C54), edx)) goto loc_000FCBDE; /* jne: not equal / not zero */

loc_000FC163: ;
    edx = MEM32(0x6B842C);
    PUSH32(esp, edx);
    PUSH32(esp, 0); sub_00536930(); /* call 0x00536930 */

loc_000FC16F: ;
    eax = 0; /* xor self */
    PUSH32(esp, 0); sub_00538690(); /* call 0x00538690 */

loc_000FC176: ;
    PUSH32(esp, 0x1B02);
    PUSH32(esp, 0); sub_00537840(); /* call 0x00537840 */

loc_000FC180: ;
    PUSH32(esp, ebx);
    PUSH32(esp, 0); sub_00537070(); /* call 0x00537070 */

loc_000FC186: ;
    edx = 1;
    ecx = 0x40304;
    PUSH32(esp, 0); sub_00537990(); /* call 0x00537990 */

loc_000FC195: ;
    edx = 0; /* xor self */
    ecx = 0x40300;
    MEM32(0x549AE4) = 1;
    PUSH32(esp, 0); sub_00537990(); /* call 0x00537990 */

loc_000FC1AB: ;
    PUSH32(esp, ebx);
    MEM32(0x549AE8) = ebx;
    PUSH32(esp, 0); sub_00537190(); /* call 0x00537190 */

loc_000FC1B7: ;
    edx = 0x203;
    ecx = 0x40354;
    PUSH32(esp, 0); sub_00537990(); /* call 0x00537990 */

loc_000FC1C6: ;
    edx = 0; /* xor self */
    ecx = 0x4035C;
    MEM32(0x549ADC) = 0x203;
    PUSH32(esp, 0); sub_00537990(); /* call 0x00537990 */

loc_000FC1DC: ;
    MEM32(0x5499F0) = MEM32(0x5499F0) | 0x1200;
    eax = MEM32(esp + 0x20);
    ecx = MEM32(eax + 0x771C6C);
    PUSH32(esp, ecx);
    eax = 0; /* xor self */
    MEM32(0x549AF8) = ebx;
    MEM32(0x549B90) = ebx;
    PUSH32(esp, 0); sub_00539960(); /* call 0x00539960 */

loc_000FC204: ;
    PUSH32(esp, ebx);
    eax = 1;
    PUSH32(esp, 0); sub_00539960(); /* call 0x00539960 */

loc_000FC20F: ;
    edx = MEM32(0x5499F0);
    eax = 3;
    ecx = 2;
    MEM32(0x54736C) = ecx;
    MEM32(0x547370) = ecx;
    ecx = 1;
    edx = edx | 0x803;
    MEM32(0x5473E8) = ecx;
    MEM32(0x5473F8) = ecx;
    MEM32(0x5473E0) = ecx;
    MEM32(0x5473F0) = ecx;
    MEM32(0x5499F0) = edx;
    edx = 0x302;
    ecx = 0x40344;
    MEM32(0x547360) = eax;
    MEM32(0x547368) = ebx;
    MEM32(0x547378) = ebx;
    MEM32(0x547330) = eax;
    MEM32(0x547334) = eax;
    MEM32(0x547338) = eax;
    MEM32(0x5473B0) = eax;
    MEM32(0x5473B4) = eax;
    MEM32(0x5473B8) = eax;
    PUSH32(esp, 0); sub_00537990(); /* call 0x00537990 */

loc_000FC292: ;
    edx = 0x303;
    ecx = 0x40348;
    MEM32(0x549AF0) = 0x302;
    PUSH32(esp, 0); sub_00537990(); /* call 0x00537990 */

loc_000FC2AB: ;
    eax = MEM32(esp + 0x5C);
    edi = edi | 0xFFFFFF00u;
    edi = edi << 8;
    eax = eax & 0xFF;
    edi = edi | eax;
    edi = edi << 8;
    ebp = ebp & 0xFF;
    edi = edi | ebp;
    PUSH32(esp, 8);
    MEM32(esp + 0x18) = edi;
    MEM32(0x549AF4) = 0x303;
    MEM32(esp + 0x14) = ebx;
    PUSH32(esp, 0x30);
    edi = esp + 0x18;
    PUSH32(esp, 0); sub_000A75E0(); /* call 0x000A75E0 */

loc_000FC2E9: ;
    ecx = MEM32(0x84A13C);
    esp = esp + 8;
    if (CMP_NE(esi, 0xFFFFFFFFu)) goto loc_000FC330; /* jne: not equal / not zero */

loc_000FC2F7: ;
    xmm1 = MEMF(esp + 0x18); /* movss */
    xmm0 = 0.0f; /* xorps self = zero */
    xmm2 = MEMF(0x64994C); /* movss */
    MEMF(esp + 0x18) = xmm1; /* movss */
    xmm1 = MEMF(0x64971C); /* movss */
    MEMF(esp + 0x24) = xmm1; /* movss */
    xmm1 = MEMF(esp + 0x1C); /* movss */
    MEMF(esp + 0x28) = xmm0; /* movss */
    MEMF(esp + 0x2C) = xmm1; /* movss */
    goto loc_000FC383;

loc_000FC330: ;
    edx = esi;
    edx = (uint32_t)((int32_t)edx * (int32_t)0x2B0);
    xmm0 = MEMF(edx + ecx + 0x21C); /* movss */
    xmm2 = MEMF(edx + ecx + 0x224); /* movss */
    eax = edx + ecx;
    MEMF(esp + 0x28) = xmm0; /* movss */
    xmm0 = MEMF(eax + 0x214); /* movss */
    MEMF(esp + 0x18) = xmm0; /* movss */
    xmm0 = MEMF(eax + 0x220); /* movss */
    MEMF(esp + 0x24) = xmm0; /* movss */
    xmm0 = MEMF(eax + 0x218); /* movss */
    MEMF(esp + 0x2C) = xmm0; /* movss */
    xmm0 = MEMF(esp + 0x28); /* movss */

loc_000FC383: ;
    eax = MEM32(esp + 0x20);
    esi = (uint32_t)((int32_t)esi * (int32_t)0x2B0);
    xmm1 = MEMF(esi + ecx + 0x1F4); /* movss */
    xmm1 = xmm1 * MEMF(eax + 0x771C68); /* mulss */
    esi = MEM32(esp + 0x18);
    xmm3 = xmm2; /* movaps */
    xmm3 = xmm3 - xmm1; /* subss */
    MEMF(esp + 0x20) = xmm3; /* movss */
    xmm3 = xmm1; /* movaps */
    MEMF(esp + 0x34) = xmm1; /* movss */
    xmm1 = xmm1 + xmm0; /* addss */
    MEMF(esp + 0x38) = xmm1; /* movss */
    ebp = MEM32(esp + 0x38);
    PUSH32(esp, esi);
    PUSH32(esp, ebp);
    ecx = esp + 0x1C;
    PUSH32(esp, ecx);
    PUSH32(esp, 0x3F800000);
    xmm3 = xmm3 + xmm2; /* addss */
    PUSH32(esp, esi);
    eax = esp + 0x24;
    MEMF(esp + 0x30) = xmm2; /* movss */
    MEMF(esp + 0x44) = xmm3; /* movss */
    PUSH32(esp, 0); sub_000A7660(); /* call 0x000A7660 */

loc_000FC3EC: ;
    ebx = MEM32(esp + 0x30);
    xmm0 = MEMF(esp + 0x34); /* movss */
    PUSH32(esp, esi);
    PUSH32(esp, ebx);
    edx = esp + 0x30;
    PUSH32(esp, edx);
    PUSH32(esp, 0x3F800000);
    PUSH32(esp, esi);
    eax = esp + 0x38;
    PUSH32(esp, 0); sub_000A7660(); /* call 0x000A7660 */

loc_000FC40C: ;
    edi = MEM32(esp + 0x54);
    xmm0 = MEMF(esp + 0x48); /* movss */
    PUSH32(esp, edi);
    PUSH32(esp, ebx);
    eax = esp + 0x44;
    PUSH32(esp, eax);
    PUSH32(esp, 0x3F800000);
    PUSH32(esp, edi);
    eax = esp + 0x4C;
    PUSH32(esp, 0); sub_000A7660(); /* call 0x000A7660 */

loc_000FC42C: ;
    xmm0 = MEMF(esp + 0x64); /* movss */
    PUSH32(esp, edi);
    PUSH32(esp, ebp);
    ecx = esp + 0x58;
    PUSH32(esp, ecx);
    PUSH32(esp, 0x3F800000);
    PUSH32(esp, edi);
    eax = esp + 0x60;
    PUSH32(esp, 0); sub_000A7660(); /* call 0x000A7660 */

loc_000FC448: ;
    xmm0 = MEMF(esp + 0x80); /* movss */
    esp = esp + 0x50;
    PUSH32(esp, esi);
    PUSH32(esp, ebx);
    edx = esp + 0x1C;
    PUSH32(esp, edx);
    PUSH32(esp, 0x3F800000);
    PUSH32(esp, esi);
    eax = esp + 0x24;
    PUSH32(esp, 0); sub_000A7660(); /* call 0x000A7660 */

loc_000FC46A: ;
    fp_push(MEMF(esp + 0x38)); /* fld float */
    fp_st1() -= fp_top(); fp_pop(); /* fsub */
    xmm0 = MEMF(esp + 0x38); /* movss */
    PUSH32(esp, esi);
    eax = esp + 0x2C;
    MEMF(esp + 0x50) = (float)fp_top(); fp_popp(); /* fstp */
    ebp = MEM32(esp + 0x50);
    PUSH32(esp, ebp);
    PUSH32(esp, eax);
    PUSH32(esp, 0x3F800000);
    PUSH32(esp, esi);
    eax = esp + 0x38;
    PUSH32(esp, 0); sub_000A7660(); /* call 0x000A7660 */

loc_000FC496: ;
    PUSH32(esp, edi);
    PUSH32(esp, ebp);
    ecx = esp + 0x44;
    PUSH32(esp, ecx);
    PUSH32(esp, 0x3F800000);
    xmm0 = MEMF(esp + 0x5C); /* movss */
    PUSH32(esp, edi);
    eax = esp + 0x4C;
    PUSH32(esp, 0); sub_000A7660(); /* call 0x000A7660 */

loc_000FC4B2: ;
    xmm0 = MEMF(esp + 0x6C); /* movss */
    PUSH32(esp, edi);
    PUSH32(esp, ebx);
    edx = esp + 0x58;
    PUSH32(esp, edx);
    PUSH32(esp, 0x3F800000);
    PUSH32(esp, edi);
    eax = esp + 0x60;
    PUSH32(esp, 0); sub_000A7660(); /* call 0x000A7660 */

loc_000FC4CE: ;
    esp = esp + 0x50;
    eax = esp + 0x10;
    PUSH32(esp, 0); sub_000A7630(); /* call 0x000A7630 */

loc_000FC4DA: ;
    POP32(esp, esi);
    POP32(esp, edi);
    POP32(esp, ebp);
    POP32(esp, ebx);
    esp = esp + 0x44;
    esp += 4; return; /* ret */

loc_000FC4E2: ;
    if (CMP_NE(MEM32(eax + 0x771C54), edx)) goto loc_000FCBDE; /* jne: not equal / not zero */

loc_000FC4EE: ;
    eax = MEM32(0x6B842C);
    PUSH32(esp, eax);
    PUSH32(esp, 0); sub_00536930(); /* call 0x00536930 */

loc_000FC4F9: ;
    eax = 0; /* xor self */
    PUSH32(esp, 0); sub_00538690(); /* call 0x00538690 */

loc_000FC500: ;
    PUSH32(esp, 0x1B02);
    PUSH32(esp, 0); sub_00537840(); /* call 0x00537840 */

loc_000FC50A: ;
    PUSH32(esp, ebx);
    PUSH32(esp, 0); sub_00537070(); /* call 0x00537070 */

loc_000FC510: ;
    edx = 1;
    ecx = 0x40304;
    PUSH32(esp, 0); sub_00537990(); /* call 0x00537990 */

loc_000FC51F: ;
    edx = 0; /* xor self */
    ecx = 0x40300;
    MEM32(0x549AE4) = 1;
    PUSH32(esp, 0); sub_00537990(); /* call 0x00537990 */

loc_000FC535: ;
    PUSH32(esp, ebx);
    MEM32(0x549AE8) = ebx;
    PUSH32(esp, 0); sub_00537190(); /* call 0x00537190 */

loc_000FC541: ;
    edx = 0x203;
    ecx = 0x40354;
    PUSH32(esp, 0); sub_00537990(); /* call 0x00537990 */

loc_000FC550: ;
    edx = 0; /* xor self */
    ecx = 0x4035C;
    MEM32(0x549ADC) = 0x203;
    PUSH32(esp, 0); sub_00537990(); /* call 0x00537990 */

loc_000FC566: ;
    edx = MEM32(0x5499F0);
    ecx = MEM32(esp + 0x20);
    edx = edx | 0x1200;
    MEM32(0x5499F0) = edx;
    edx = MEM32(ecx + 0x771C6C);
    PUSH32(esp, edx);
    eax = 0; /* xor self */
    MEM32(0x549AF8) = ebx;
    MEM32(0x549B90) = ebx;
    PUSH32(esp, 0); sub_00539960(); /* call 0x00539960 */

loc_000FC596: ;
    PUSH32(esp, ebx);
    eax = 1;
    PUSH32(esp, 0); sub_00539960(); /* call 0x00539960 */

loc_000FC5A1: ;
    edx = MEM32(0x5499F0);
    eax = 3;
    ecx = 2;
    MEM32(0x54736C) = ecx;
    MEM32(0x547370) = ecx;
    ecx = 1;
    edx = edx | 0x803;
    MEM32(0x5473E8) = ecx;
    MEM32(0x5473F8) = ecx;
    MEM32(0x5473E0) = ecx;
    MEM32(0x5473F0) = ecx;
    MEM32(0x5499F0) = edx;
    edx = 0x302;
    ecx = 0x40344;
    MEM32(0x547360) = eax;
    MEM32(0x547368) = ebx;
    MEM32(0x547378) = ebx;
    MEM32(0x547330) = eax;
    MEM32(0x547334) = eax;
    MEM32(0x547338) = eax;
    MEM32(0x5473B0) = eax;
    MEM32(0x5473B4) = eax;
    MEM32(0x5473B8) = eax;
    PUSH32(esp, 0); sub_00537990(); /* call 0x00537990 */

loc_000FC624: ;
    edx = 0x303;
    ecx = 0x40348;
    MEM32(0x549AF0) = 0x302;
    PUSH32(esp, 0); sub_00537990(); /* call 0x00537990 */

loc_000FC63D: ;
    eax = MEM32(esp + 0x5C);
    edi = edi | 0xFFFFFF00u;
    edi = edi << 8;
    eax = eax & 0xFF;
    edi = edi | eax;
    edi = edi << 8;
    ebp = ebp & 0xFF;
    edi = edi | ebp;
    (void)0; /* cmp esi, 0xFFFFFFFFu - flags set for next jcc */
    MEM32(0x549AF4) = 0x303;
    MEM32(esp + 0x14) = edi;
    if (CMP_NE(esi, 0xFFFFFFFFu)) goto loc_000FC6B6; /* jne: not equal / not zero */

loc_000FC66F: ;
    xmm0 = MEMF(esp + 0x18); /* movss */
    xmm1 = MEMF(0x59A8D8); /* movss */
    MEMF(esp + 0x30) = xmm0; /* movss */
    xmm0 = MEMF(esp + 0x1C); /* movss */
    MEMF(esp + 0x2C) = xmm0; /* movss */
    xmm0 = MEMF(0x648D14); /* movss */
    eax = 0x771C68;
    xmm0 = xmm0 - MEMF(eax + -32); /* subss */
    eax = eax - 0x20;
    xmm0 = xmm0 * xmm1; /* mulss */
    MEMF(esp + 0x1C) = xmm1; /* movss */
    MEMF(esp + 0x28) = xmm0; /* movss */
    goto loc_000FC71E;

loc_000FC6B6: ;
    ecx = MEM32(0x84A13C);
    esi = (uint32_t)((int32_t)esi * (int32_t)0x2B0);
    xmm0 = MEMF(esi + ecx + 0x214); /* movss */
    edx = MEM32(esp + 0x20);
    xmm1 = MEMF(0x648D14); /* movss */
    xmm1 = xmm1 - MEMF(edx + 0x771C68); /* subss */
    eax = esi + ecx;
    MEMF(esp + 0x30) = xmm0; /* movss */
    xmm0 = MEMF(eax + 0x218); /* movss */
    MEMF(esp + 0x2C) = xmm0; /* movss */
    xmm0 = MEMF(eax + 0x1F4); /* movss */
    xmm0 = xmm0 * MEMF(0x648D80); /* mulss */
    xmm0 = xmm0 * MEMF(0x648D10); /* mulss */
    xmm1 = xmm1 * xmm0; /* mulss */
    MEMF(esp + 0x1C) = xmm0; /* movss */
    MEMF(esp + 0x28) = xmm1; /* movss */

loc_000FC71E: ;
    PUSH32(esp, 8);
    PUSH32(esp, 0xF0);
    edi = esp + 0x28;
    MEM32(esp + 0x28) = ebx;
    PUSH32(esp, 0); sub_000A75E0(); /* call 0x000A75E0 */

loc_000FC732: ;
    esi = MEM32(esp + 0x38);
    edi = MEM32(esp + 0x34);
    esp = esp + 8;
    ebx = 1;

loc_000FC742: ;
    (void)0; /* test ebx, ebx - flags set for next jcc */
    MEM32(esp + 0x50) = ebx;
    fp_push((double)SMEM32(esp + 0x50)); /* fild */
    if (CMP_GE(ebx & ebx, 0)) goto loc_000FC754; /* jge: greater or equal (signed >=) */

loc_000FC74E: ;
    fp_st1() += fp_top(); fp_pop(); /* fadd */

loc_000FC754: ;
    fp_st1() *= fp_top(); fp_pop(); /* fmul */
    PUSH32(esp, esi);
    eax = esp + 0x18;
    MEMF(esp + 0x28) = (float)fp_top(); fp_popp(); /* fstp */
    xmm0 = MEMF(esp + 0x28); /* movss */
    fp_push(MEMF(esp + 0x28)); /* fld float */
    xmm0 = xmm0 - MEMF(esp + 0x2C); /* subss */
    fp_st1() += fp_top(); fp_pop(); /* fadd */
    MEMF(esp + 0x38) = xmm0; /* movss */
    MEMF(esp + 0x30) = (float)fp_top(); fp_popp(); /* fstp */
    fp_push(MEMF(esp + 0x28)); /* fld float */
    fp_st1() -= fp_top(); fp_pop(); /* fsub */
    MEMF(esp + 0x3C) = (float)fp_top(); fp_popp(); /* fstp */
    ebp = MEM32(esp + 0x3C);
    fp_push(MEMF(esp + 0x28)); /* fld float */
    fp_st1() += fp_top(); fp_pop(); /* fadd */
    PUSH32(esp, ebp);
    PUSH32(esp, eax);
    PUSH32(esp, 0x3F800000);
    PUSH32(esp, esi);
    MEMF(esp + 0x44) = (float)fp_top(); fp_popp(); /* fstp */
    eax = esp + 0x34;
    PUSH32(esp, 0); sub_000A7660(); /* call 0x000A7660 */

loc_000FC7AC: ;
    ecx = MEM32(esp + 0x44);
    xmm0 = MEMF(esp + 0x40); /* movss */
    PUSH32(esp, esi);
    PUSH32(esp, ecx);
    edx = esp + 0x30;
    PUSH32(esp, edx);
    PUSH32(esp, 0x3F800000);
    PUSH32(esp, esi);
    eax = esp + 0x48;
    PUSH32(esp, 0); sub_000A7660(); /* call 0x000A7660 */

loc_000FC7CC: ;
    eax = MEM32(esp + 0x58);
    xmm0 = MEMF(esp + 0x54); /* movss */
    PUSH32(esp, edi);
    PUSH32(esp, eax);
    ecx = esp + 0x44;
    PUSH32(esp, ecx);
    PUSH32(esp, 0x3F800000);
    PUSH32(esp, edi);
    eax = esp + 0x5C;
    PUSH32(esp, 0); sub_000A7660(); /* call 0x000A7660 */

loc_000FC7EC: ;
    xmm0 = MEMF(esp + 0x70); /* movss */
    PUSH32(esp, edi);
    PUSH32(esp, ebp);
    edx = esp + 0x58;
    PUSH32(esp, edx);
    PUSH32(esp, 0x3F800000);
    PUSH32(esp, edi);
    eax = esp + 0x70;
    PUSH32(esp, 0); sub_000A7660(); /* call 0x000A7660 */

loc_000FC808: ;
    ebx = ebx + 2;
    esp = esp + 0x50;
    if (CMP_B(ebx, 0x15)) goto loc_000FC742; /* jb: below (unsigned <) */

loc_000FC817: ;
    eax = esp + 0x20;
    PUSH32(esp, 0); sub_000A7630(); /* call 0x000A7630 */

loc_000FC820: ;
    POP32(esp, esi);
    POP32(esp, edi);
    POP32(esp, ebp);
    POP32(esp, ebx);
    esp = esp + 0x44;
    esp += 4; return; /* ret */

loc_000FC828: ;
    if (CMP_NE(MEM32(eax + 0x771C54), edx)) goto loc_000FCBDE; /* jne: not equal / not zero */

loc_000FC834: ;
    eax = MEM32(0x6B842C);
    PUSH32(esp, eax);
    PUSH32(esp, 0); sub_00536930(); /* call 0x00536930 */

loc_000FC83F: ;
    eax = 0; /* xor self */
    PUSH32(esp, 0); sub_00538690(); /* call 0x00538690 */

loc_000FC846: ;
    PUSH32(esp, 0x1B02);
    PUSH32(esp, 0); sub_00537840(); /* call 0x00537840 */

loc_000FC850: ;
    PUSH32(esp, ebx);
    PUSH32(esp, 0); sub_00537070(); /* call 0x00537070 */

loc_000FC856: ;
    edx = 1;
    ecx = 0x40304;
    PUSH32(esp, 0); sub_00537990(); /* call 0x00537990 */

loc_000FC865: ;
    edx = 0; /* xor self */
    ecx = 0x40300;
    MEM32(0x549AE4) = 1;
    PUSH32(esp, 0); sub_00537990(); /* call 0x00537990 */

loc_000FC87B: ;
    PUSH32(esp, ebx);
    MEM32(0x549AE8) = ebx;
    PUSH32(esp, 0); sub_00537190(); /* call 0x00537190 */

loc_000FC887: ;
    edx = 0x203;
    ecx = 0x40354;
    PUSH32(esp, 0); sub_00537990(); /* call 0x00537990 */

loc_000FC896: ;
    edx = 0; /* xor self */
    ecx = 0x4035C;
    MEM32(0x549ADC) = 0x203;
    PUSH32(esp, 0); sub_00537990(); /* call 0x00537990 */

loc_000FC8AC: ;
    edx = MEM32(0x5499F0);
    ecx = MEM32(esp + 0x20);
    edx = edx | 0x1200;
    MEM32(0x5499F0) = edx;
    edx = MEM32(ecx + 0x771C6C);
    PUSH32(esp, edx);
    eax = 0; /* xor self */
    MEM32(0x549AF8) = ebx;
    MEM32(0x549B90) = ebx;
    PUSH32(esp, 0); sub_00539960(); /* call 0x00539960 */

loc_000FC8DC: ;
    PUSH32(esp, ebx);
    eax = 1;
    PUSH32(esp, 0); sub_00539960(); /* call 0x00539960 */

loc_000FC8E7: ;
    edx = MEM32(0x5499F0);
    eax = 3;
    ecx = 2;
    MEM32(0x54736C) = ecx;
    MEM32(0x547370) = ecx;
    ecx = 1;
    edx = edx | 0x803;
    MEM32(0x5473E8) = ecx;
    MEM32(0x5473F8) = ecx;
    MEM32(0x5473E0) = ecx;
    MEM32(0x5473F0) = ecx;
    MEM32(0x5499F0) = edx;
    edx = 0x302;
    ecx = 0x40344;
    MEM32(0x547360) = eax;
    MEM32(0x547368) = ebx;
    MEM32(0x547378) = ebx;
    MEM32(0x547330) = eax;
    MEM32(0x547334) = eax;
    MEM32(0x547338) = eax;
    MEM32(0x5473B0) = eax;
    MEM32(0x5473B4) = eax;
    MEM32(0x5473B8) = eax;
    PUSH32(esp, 0); sub_00537990(); /* call 0x00537990 */

loc_000FC96A: ;
    edx = 0x303;
    ecx = 0x40348;
    MEM32(0x549AF0) = 0x302;
    PUSH32(esp, 0); sub_00537990(); /* call 0x00537990 */

loc_000FC983: ;
    eax = MEM32(esp + 0x5C);
    edi = edi | 0xFFFFFF00u;
    edi = edi << 8;
    eax = eax & 0xFF;
    edi = edi | eax;
    edi = edi << 8;
    ebp = ebp & 0xFF;
    edi = edi | ebp;
    (void)0; /* cmp esi, 0xFFFFFFFFu - flags set for next jcc */
    MEM32(0x549AF4) = 0x303;
    MEM32(esp + 0x24) = edi;
    if (CMP_NE(esi, 0xFFFFFFFFu)) goto loc_000FC9EE; /* jne: not equal / not zero */

loc_000FC9B5: ;
    xmm0 = MEMF(esp + 0x18); /* movss */
    xmm1 = MEMF(esp + 0x1C); /* movss */
    MEMF(esp + 0x18) = xmm0; /* movss */
    xmm0 = MEMF(0x59A8D8); /* movss */
    eax = 0x771C68;
    MEMF(esp + 0x1C) = xmm0; /* movss */
    xmm0 = MEMF(eax + -32); /* movss */
    eax = eax - 0x20;
    MEMF(esp + 0x28) = xmm1; /* movss */
    xmm0 = xmm0 * xmm1; /* mulss */
    goto loc_000FCA4C;

loc_000FC9EE: ;
    ecx = MEM32(0x84A13C);
    esi = (uint32_t)((int32_t)esi * (int32_t)0x2B0);
    xmm0 = MEMF(esi + ecx + 0x214); /* movss */
    edx = MEM32(esp + 0x20);
    eax = esi + ecx;
    MEMF(esp + 0x18) = xmm0; /* movss */
    xmm0 = MEMF(eax + 0x218); /* movss */
    MEMF(esp + 0x28) = xmm0; /* movss */
    xmm0 = MEMF(eax + 0x1F4); /* movss */
    xmm0 = xmm0 * MEMF(0x648D80); /* mulss */
    xmm0 = xmm0 * MEMF(0x648D10); /* mulss */
    MEMF(esp + 0x1C) = xmm0; /* movss */
    xmm0 = MEMF(edx + 0x771C68); /* movss */
    xmm0 = xmm0 * MEMF(eax + 0x1F8); /* mulss */

loc_000FCA4C: ;
    PUSH32(esp, 8);
    PUSH32(esp, 0xF0);
    edi = esp + 0x28;
    MEMF(esp + 0x38) = xmm0; /* movss */
    MEM32(esp + 0x28) = ebx;
    PUSH32(esp, 0); sub_000A75E0(); /* call 0x000A75E0 */

loc_000FCA66: ;
    xmm3 = MEMF(esp + 0x30); /* movss */
    xmm1 = MEMF(esp + 0x38); /* movss */
    xmm2 = MEMF(esp + 0x20); /* movss */
    xmm0 = xmm3; /* movaps */
    xmm0 = xmm0 - xmm1; /* subss */
    xmm1 = xmm1 + xmm2; /* addss */
    esp = esp + 8;
    MEM32(esp + 0x14) = ebx;
    MEMF(esp + 0x40) = xmm0; /* movss */
    MEMF(esp + 0x3C) = xmm1; /* movss */
    esi = 1;
    goto loc_000FCAB5;

loc_000FCA9D: ;
    xmm3 = MEMF(esp + 0x28); /* movss */
    xmm2 = MEMF(esp + 0x18); /* movss */
    xmm1 = MEMF(esp + 0x3C); /* movss */
    xmm0 = MEMF(esp + 0x40); /* movss */

loc_000FCAB5: ;
    (void)0; /* test esi, esi - flags set for next jcc */
    MEM32(esp + 0x44) = esi;
    fp_push((double)SMEM32(esp + 0x44)); /* fild */
    if (CMP_GE(esi & esi, 0)) goto loc_000FCAC7; /* jge: greater or equal (signed >=) */

loc_000FCAC1: ;
    fp_st1() += fp_top(); fp_pop(); /* fadd */

loc_000FCAC7: ;
    fp_st1() *= fp_top(); fp_pop(); /* fmul */
    SET_LO8(eax, MEM8(esp + 0x14));
    (void)0; /* test LO8(eax), 1 - flags set for next jcc */
    MEMF(esp + 0x44) = (float)fp_top(); fp_popp(); /* fstp */
    if (TEST_Z(LO8(eax), 1)) goto loc_000FCAF1; /* je: equal / zero */

loc_000FCAD7: ;
    MEMF(esp + 0x2C) = xmm1; /* movss */
    MEMF(esp + 0x34) = xmm3; /* movss */
    MEMF(esp + 0x30) = xmm2; /* movss */
    MEMF(esp + 0x10) = xmm0; /* movss */
    goto loc_000FCB09;

loc_000FCAF1: ;
    MEMF(esp + 0x2C) = xmm2; /* movss */
    MEMF(esp + 0x34) = xmm0; /* movss */
    MEMF(esp + 0x30) = xmm1; /* movss */
    MEMF(esp + 0x10) = xmm3; /* movss */

loc_000FCB09: ;
    xmm1 = MEMF(esp + 0x44); /* movss */
    xmm2 = MEMF(esp + 0x1C); /* movss */
    edi = MEM32(esp + 0x30);
    ebx = MEM32(esp + 0x2C);
    xmm0 = xmm1; /* movaps */
    xmm0 = xmm0 - xmm2; /* subss */
    MEMF(esp + 0x48) = xmm0; /* movss */
    ebp = MEM32(esp + 0x48);
    PUSH32(esp, edi);
    PUSH32(esp, ebp);
    eax = esp + 0x2C;
    PUSH32(esp, eax);
    xmm1 = xmm1 + xmm2; /* addss */
    PUSH32(esp, 0x3F800000);
    PUSH32(esp, ebx);
    eax = esp + 0x34;
    MEMF(esp + 0x64) = xmm0; /* movss */
    MEMF(esp + 0x4C) = xmm1; /* movss */
    MEMF(esp + 0x60) = xmm1; /* movss */
    PUSH32(esp, 0); sub_000A7660(); /* call 0x000A7660 */

loc_000FCB5A: ;
    xmm0 = MEMF(esp + 0x4C); /* movss */
    PUSH32(esp, edi);
    edi = MEM32(esp + 0x64);
    PUSH32(esp, edi);
    ecx = esp + 0x40;
    PUSH32(esp, ecx);
    PUSH32(esp, 0x3F800000);
    PUSH32(esp, ebx);
    eax = esp + 0x48;
    PUSH32(esp, 0); sub_000A7660(); /* call 0x000A7660 */

loc_000FCB7A: ;
    ebx = MEM32(esp + 0x38);
    xmm0 = MEMF(esp + 0x60); /* movss */
    PUSH32(esp, ebx);
    PUSH32(esp, edi);
    edi = MEM32(esp + 0x64);
    edx = esp + 0x54;
    PUSH32(esp, edx);
    PUSH32(esp, 0x3F800000);
    PUSH32(esp, edi);
    eax = esp + 0x5C;
    PUSH32(esp, 0); sub_000A7660(); /* call 0x000A7660 */

loc_000FCB9E: ;
    xmm0 = MEMF(esp + 0x8C); /* movss */
    PUSH32(esp, ebx);
    PUSH32(esp, ebp);
    eax = esp + 0x68;
    PUSH32(esp, eax);
    PUSH32(esp, 0x3F800000);
    PUSH32(esp, edi);
    eax = esp + 0x70;
    PUSH32(esp, 0); sub_000A7660(); /* call 0x000A7660 */

loc_000FCBBD: ;
    edx = MEM32(esp + 0x64);
    esp = esp + 0x50;
    edx++;
    esi = esi + 2;
    (void)0; /* cmp esi, 0x15 - flags set for next jcc */
    MEM32(esp + 0x14) = edx;
    if (CMP_B(esi, 0x15)) goto loc_000FCA9D; /* jb: below (unsigned <) */

loc_000FCBD5: ;
    eax = esp + 0x20;
    PUSH32(esp, 0); sub_000A7630(); /* call 0x000A7630 */

loc_000FCBDE: ;
    POP32(esp, esi);

loc_000FCBDF: ;
    POP32(esp, edi);
    POP32(esp, ebp);
    POP32(esp, ebx);
    esp = esp + 0x44;
    esp += 4; return; /* ret */

    #undef fp_push
    #undef fp_pop
    #undef fp_popp
    #undef fp_top
    #undef fp_st1
}

/**
 * sub_000FCC90
 * Original: 0x000FCC90 - 0x000FCD0D (125 bytes, 31 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_000FCC90(void)
{
    int _flags = 0; /* fallback flag var */
    float xmm0;

loc_000FCC90: ;
    PUSH32(esp, esi);
    esi = eax;
    esi = esi << 5;
    eax = MEM32(esi + 0x771C60);
    if (CMP_L(eax, MEM32(esi + 0x771C5C))) { sub_000FCD0D(); return; } /* jl: less (signed <) */

loc_000FCCA4: ;
    if (TEST_Z(eax, eax)) goto loc_000FCCF2; /* je: equal / zero */

loc_000FCCA8: ;
    eax = MEM32(esi + 0x771C50);
    if (TEST_NZ(eax, eax)) goto loc_000FCCF2; /* jne: not equal / not zero */

loc_000FCCB2: ;
    SET_LO8(eax, MEM8(0x84A138));
    if (TEST_Z(LO8(eax), LO8(eax))) goto loc_000FCCF2; /* je: equal / zero */

loc_000FCCBB: ;
    PUSH32(esp, 0); sub_00265DB0(); /* call 0x00265DB0 */

loc_000FCCC0: ;
    if (CMP_NE(MEM8(eax), 0)) goto loc_000FCCD9; /* jne: not equal / not zero */

loc_000FCCC5: ;
    if (CMP_NE(MEM32(eax + 0x560), 0xFFFFFFFFu)) goto loc_000FCCD9; /* jne: not equal / not zero */

loc_000FCCCE: ;
    xmm0 = 0.0f; /* xorps self = zero */
    MEMF(0x849C30) = xmm0; /* movss */

loc_000FCCD9: ;
    MEM8(0x84A138) = 0;
    MEM8(0x7819D0) = 1;
    PUSH32(esp, 0); sub_00265DB0(); /* call 0x00265DB0 */

loc_000FCCEC: ;
    PUSH32(esp, eax);
    PUSH32(esp, 0); sub_002662E0(); /* call 0x002662E0 */

loc_000FCCF2: ;
    MEM32(esi + 0x771C5C) = 0;
    MEM32(esi + 0x771C60) = 0;
    eax = 1;
    POP32(esp, esi);
    esp += 4; return; /* ret */

}

/**
 * sub_000FCD20
 * Original: 0x000FCD20 - 0x000FCD32 (18 bytes, 5 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_000FCD20(void)
{
    uint32_t ebp;
    int _flags = 0; /* fallback flag var */
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_000FCD20: ;
    ecx = MEM32(0x7FA20C);
    if (CMP_GE(ecx, 1)) { sub_000FCD32(); return; } /* jge: greater or equal (signed >=) */

loc_000FCD2B: ;
    ecx = 1;
    g_seh_ebp = ebp; sub_000FCD3C(); return; /* tail jmp 0x000FCD3C */

}

/**
 * sub_000FCE00
 * Original: 0x000FCE00 - 0x000FCE39 (57 bytes, 11 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_000FCE00(void)
{

loc_000FCE00: ;
    SET_LO8(ecx, MEM8(esp + 4));
    SET_LO8(edx, MEM8(esp + 8));
    MEM8(eax + eax * 2 + 0x771BC4) = LO8(ecx);
    SET_LO8(ecx, MEM8(esp + 0xC));
    MEM8(eax + eax * 2 + 0x771BC5) = LO8(edx);
    SET_LO8(edx, MEM8(esp + 0x10));
    MEM8(eax + eax * 2 + 0x771BC6) = LO8(ecx);
    SET_LO16(ecx, MEM16(esp + 0x14));
    MEM8(eax + 0x771BC0) = LO8(edx);
    MEM16(eax * 2 + 0x771BD0) = LO16(ecx);
    esp += 4; return; /* ret */

}

/**
 * sub_000FCE40
 * Original: 0x000FCE40 - 0x000FCF22 (226 bytes, 59 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_000FCE40(void)
{
    int _flags = 0; /* fallback flag var */
    float xmm0, xmm1, xmm2;

loc_000FCE40: ;
    if (CMP_EQ(MEM16(0x771BE0), 0)) goto loc_000FCF21; /* je: equal / zero */

loc_000FCE4E: ;
    PUSH32(esp, ebx);
    SET_LO8(ebx, MEM8(0x771BD9));
    if (TEST_Z(LO8(ebx), LO8(ebx))) goto loc_000FCF20; /* je: equal / zero */

loc_000FCE5D: ;
    SET_LO8(eax, MEM8(0x771BD8));
    (void)0; /* test LO8(eax), LO8(eax) - flags set for next jcc */
    PUSH32(esp, esi);
    PUSH32(esp, edi);
    if (TEST_Z(LO8(eax), LO8(eax))) goto loc_000FCE93; /* je: equal / zero */

loc_000FCE68: ;
    SET_LO8(eax, MEM8(0x771BDB));
    PUSH32(esp, 0); sub_002AF8A0(); /* call 0x002AF8A0 */

loc_000FCE72: ;
    xmm0 = xmm0 + MEMF(0x648D14); /* addss */
    xmm0 = xmm0 * MEMF(0x648D10); /* mulss */
    eax = ZX8(LO8(ebx));
    xmm1 = (float)(int32_t)eax; /* cvtsi2ss */
    xmm0 = xmm0 * xmm1; /* mulss */
    edi = (int32_t)xmm0; /* cvttss2si */
    goto loc_000FCE96;

loc_000FCE93: ;
    edi = ZX8(LO8(ebx));

loc_000FCE96: ;
    eax = ZX8(MEM8(0x771BDA));
    xmm0 = 0.0f; /* xorps self = zero */
    eax = eax + eax * 2;
    eax = eax << 1;
    ecx = ZX8(MEM8(eax + 0x6B3FC6));
    ebx = ZX8(MEM8(eax + 0x6B3FC9));
    edx = ZX8(MEM8(eax + 0x6B3FC5));
    esi = ZX8(MEM8(eax + 0x6B3FC4));
    ebx = ebx - ecx;
    xmm2 = (float)(int32_t)ecx; /* cvtsi2ss */
    xmm1 = (float)(int32_t)ebx; /* cvtsi2ss */
    xmm1 = xmm1 * xmm0; /* mulss */
    xmm1 = xmm1 + xmm2; /* addss */
    ecx = (int32_t)xmm1; /* cvttss2si */
    PUSH32(esp, 0);
    PUSH32(esp, ecx);
    ecx = ZX8(MEM8(eax + 0x6B3FC8));
    eax = ZX8(MEM8(eax + 0x6B3FC7));
    ecx = ecx - edx;
    xmm1 = (float)(int32_t)ecx; /* cvtsi2ss */
    xmm1 = xmm1 * xmm0; /* mulss */
    xmm2 = (float)(int32_t)edx; /* cvtsi2ss */
    xmm1 = xmm1 + xmm2; /* addss */
    edx = (int32_t)xmm1; /* cvttss2si */
    eax = eax - esi;
    xmm1 = (float)(int32_t)eax; /* cvtsi2ss */
    xmm1 = xmm1 * xmm0; /* mulss */
    PUSH32(esp, edx);
    xmm0 = (float)(int32_t)esi; /* cvtsi2ss */
    xmm1 = xmm1 + xmm0; /* addss */
    PUSH32(esp, edi);
    eax = (int32_t)xmm1; /* cvttss2si */
    PUSH32(esp, 0); sub_000FBC80(); /* call 0x000FBC80 */

loc_000FCF1B: ;
    esp = esp + 0x10;
    POP32(esp, edi);
    POP32(esp, esi);

loc_000FCF20: ;
    POP32(esp, ebx);

loc_000FCF21: ;
    esp += 4; return; /* ret */

}

/**
 * sub_000FCF30
 * Original: 0x000FCF30 - 0x000FCF6A (58 bytes, 12 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_000FCF30(void)
{

loc_000FCF30: ;
    SET_LO16(eax, MEM16(esp + 8));
    SET_LO8(ecx, MEM8(esp + 0xC));
    SET_LO8(edx, MEM8(esp + 4));
    MEM16(0x771BE0) = LO16(eax);
    SET_LO8(eax, MEM8(esp + 0x10));
    MEM8(0x771BDC) = LO8(ecx);
    SET_LO8(ecx, MEM8(esp + 0x14));
    MEM8(0x771BDB) = 0;
    MEM8(0x771BDA) = LO8(edx);
    MEM8(0x771BD9) = LO8(eax);
    MEM8(0x771BD8) = LO8(ecx);
    esp += 4; return; /* ret */

}

/**
 * sub_000FCF70
 * Original: 0x000FCF70 - 0x000FCFBF (79 bytes, 25 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_000FCF70(void)
{
    int _flags = 0; /* fallback flag var */

loc_000FCF70: ;
    PUSH32(esp, esi);
    esi = MEM32(0x84A144);
    ecx = 0; /* xor self */
    if (TEST_S(esi, esi)) goto loc_000FCFBD; /* jl: less (signed <) */

loc_000FCF7D: ;
    edx = MEM32(0x7FA20C);
    PUSH32(esp, ebx);
    goto loc_000FCF90;

    /* nop */
    /* nop */

loc_000FCF90: ;
    eax = 0; /* xor self */
    SET_LO16(eax, MEM16(ecx * 2 + 0x771BD0));
    ebx = ZX16(LO16(eax));
    if (CMP_LE(ebx, edx)) goto loc_000FCFAD; /* jle: less or equal (signed <=) */

loc_000FCFA1: ;
    eax = eax - edx;
    MEM16(ecx * 2 + 0x771BD0) = LO16(eax);
    goto loc_000FCFB7;

loc_000FCFAD: ;
    MEM16(ecx * 2 + 0x771BD0) = 0;

loc_000FCFB7: ;
    ecx++;
    if (CMP_LE(ecx, esi)) goto loc_000FCF90; /* jle: less or equal (signed <=) */

loc_000FCFBC: ;
    POP32(esp, ebx);

loc_000FCFBD: ;
    POP32(esp, esi);
    esp += 4; return; /* ret */

}

/**
 * sub_000FCFC0
 * Original: 0x000FCFC0 - 0x000FD07C (188 bytes, 46 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_000FCFC0(void)
{
    uint32_t ebp;
    int _flags = 0; /* fallback flag var */
    float xmm0, xmm1, xmm2, xmm3;
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_000FCFC0: ;
    xmm0 = MEMF(esp + 4); /* movss */
    esp = esp - 0x10;
    if (TEST_NZ(eax, eax)) { sub_000FD07C(); return; } /* jne: not equal / not zero */

loc_000FCFD1: ;
    eax = esp;
    PUSH32(esp, eax);
    eax = MEM32(esp + 0x20);
    ecx = esp + 0x10;
    PUSH32(esp, ecx);
    ecx = MEM32(esp + 0x20);
    edx = esp + 0x10;
    PUSH32(esp, edx);
    PUSH32(esp, eax);
    edx = esi;
    edx = edx << 6;
    edx = edx + 0x76F7C0;
    PUSH32(esp, ecx);
    PUSH32(esp, edx);
    edx = esp + 0x1C;
    PUSH32(esp, 0); sub_0029C210(); /* call 0x0029C210 */

loc_000FCFFE: ;
    xmm1 = MEMF(esp + 0x18); /* movss */
    xmm0 = MEMF(0x648D14); /* movss */
    esp = esp + 0x18;
    /* ucomiss xmm1, MEMF(0x648CF8) - sets EFLAGS */
    /* lahf - load AH from flags (used in FPU compare idiom) */
    if (1 /* jp after test - parity */) goto loc_000FD01F; /* jp: parity */

loc_000FD01C: ;
    xmm1 = xmm0; /* movaps */

loc_000FD01F: ;
    ecx = MEM32(0x84A13C);
    eax = esi;
    eax = (uint32_t)((int32_t)eax * (int32_t)0x2B0);
    xmm0 = xmm0 / xmm1; /* divss */
    xmm1 = MEMF(eax + ecx + 0x200); /* movss */
    eax = eax + ecx;
    xmm2 = xmm0; /* movaps */
    xmm0 = MEMF(eax + 0x1FC); /* movss */
    xmm0 = xmm0 * MEMF(esp + 4); /* mulss */
    xmm3 = xmm1; /* movaps */
    xmm3 = xmm3 * MEMF(esp + 8); /* mulss */
    xmm0 = xmm0 * xmm2; /* mulss */
    xmm0 = xmm0 + MEMF(eax + 0x1FC); /* addss */
    xmm0 = xmm0 + MEMF(eax + 0x21C); /* addss */
    xmm3 = xmm3 * xmm2; /* mulss */
    xmm1 = xmm1 - xmm3; /* subss */
    xmm1 = xmm1 + MEMF(eax + 0x214); /* addss */
    g_seh_ebp = ebp; sub_000FD082(); return; /* tail jmp 0x000FD082 */

}

/**
 * sub_000FD0F0
 * Original: 0x000FD0F0 - 0x000FD29F (431 bytes, 115 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_000FD0F0(void)
{
    int _flags = 0; /* fallback flag var */
    float xmm0, xmm1, xmm2, xmm3, xmm4, xmm5, xmm6, xmm7;

loc_000FD0F0: ;
    PUSH32(esp, ecx);
    xmm3 = MEMF(esp + 0xC); /* movss */
    xmm7 = MEMF(esp + 0x14); /* movss */
    /* comiss xmm3, xmm7 - sets EFLAGS */
    if ((xmm3 <= xmm7)) goto loc_000FD117; /* jbe: below or equal (unsigned <=) */

loc_000FD102: ;
    xmm0 = xmm3; /* movaps */
    MEMF(esp + 0xC) = xmm7; /* movss */
    xmm3 = xmm7; /* movaps */
    MEMF(esp + 0x14) = xmm0; /* movss */
    xmm7 = xmm0; /* movaps */

loc_000FD117: ;
    xmm0 = MEMF(esp + 0x10); /* movss */
    xmm6 = MEMF(esp + 0x18); /* movss */
    /* comiss xmm0, xmm6 - sets EFLAGS */
    if ((xmm0 <= xmm6)) goto loc_000FD13D; /* jbe: below or equal (unsigned <=) */

loc_000FD128: ;
    xmm1 = xmm0; /* movaps */
    xmm0 = xmm6; /* movaps */
    xmm6 = xmm1; /* movaps */
    MEMF(esp + 0x10) = xmm0; /* movss */
    MEMF(esp + 0x18) = xmm6; /* movss */

loc_000FD13D: ;
    ecx = MEM32(0x84A13C);
    eax = (uint32_t)((int32_t)eax * (int32_t)0x2B0);
    xmm4 = MEMF(eax + ecx + 0x218); /* movss */
    xmm1 = MEMF(eax + ecx + 0x21C); /* movss */
    xmm5 = MEMF(eax + ecx + 0x214); /* movss */
    xmm2 = MEMF(eax + ecx + 0x220); /* movss */
    eax = eax + ecx;
    /* comiss xmm0, xmm4 - sets EFLAGS */
    if ((xmm0 >= xmm4)) goto loc_000FD29D; /* jae: above or equal (unsigned >=) */

loc_000FD178: ;
    /* comiss xmm5, xmm6 - sets EFLAGS */
    if ((xmm5 >= xmm6)) goto loc_000FD29D; /* jae: above or equal (unsigned >=) */

loc_000FD181: ;
    /* comiss xmm3, xmm2 - sets EFLAGS */
    if ((xmm3 >= xmm2)) goto loc_000FD29D; /* jae: above or equal (unsigned >=) */

loc_000FD18A: ;
    /* comiss xmm1, xmm7 - sets EFLAGS */
    if ((xmm1 >= xmm7)) goto loc_000FD29D; /* jae: above or equal (unsigned >=) */

loc_000FD193: ;
    /* comiss xmm1, xmm3 - sets EFLAGS */
    if ((xmm1 <= xmm3)) goto loc_000FD1A0; /* jbe: below or equal (unsigned <=) */

loc_000FD198: ;
    MEMF(esp + 0xC) = xmm1; /* movss */
    goto loc_000FD1AB;

loc_000FD1A0: ;
    /* comiss xmm3, xmm2 - sets EFLAGS */
    if ((xmm3 <= xmm2)) goto loc_000FD1AB; /* jbe: below or equal (unsigned <=) */

loc_000FD1A5: ;
    MEMF(esp + 0xC) = xmm2; /* movss */

loc_000FD1AB: ;
    /* comiss xmm5, xmm0 - sets EFLAGS */
    if ((xmm5 <= xmm0)) goto loc_000FD1B8; /* jbe: below or equal (unsigned <=) */

loc_000FD1B0: ;
    MEMF(esp + 0x10) = xmm5; /* movss */
    goto loc_000FD1C3;

loc_000FD1B8: ;
    /* comiss xmm0, xmm4 - sets EFLAGS */
    if ((xmm0 <= xmm4)) goto loc_000FD1C3; /* jbe: below or equal (unsigned <=) */

loc_000FD1BD: ;
    MEMF(esp + 0x10) = xmm4; /* movss */

loc_000FD1C3: ;
    /* comiss xmm1, xmm7 - sets EFLAGS */
    if ((xmm1 <= xmm7)) goto loc_000FD1D0; /* jbe: below or equal (unsigned <=) */

loc_000FD1C8: ;
    MEMF(esp + 0x14) = xmm1; /* movss */
    goto loc_000FD1DB;

loc_000FD1D0: ;
    /* comiss xmm7, xmm2 - sets EFLAGS */
    if ((xmm7 <= xmm2)) goto loc_000FD1DB; /* jbe: below or equal (unsigned <=) */

loc_000FD1D5: ;
    MEMF(esp + 0x14) = xmm2; /* movss */

loc_000FD1DB: ;
    /* comiss xmm5, xmm6 - sets EFLAGS */
    if ((xmm5 <= xmm6)) goto loc_000FD1E8; /* jbe: below or equal (unsigned <=) */

loc_000FD1E0: ;
    MEMF(esp + 0x18) = xmm5; /* movss */
    goto loc_000FD1F3;

loc_000FD1E8: ;
    /* comiss xmm6, xmm4 - sets EFLAGS */
    if ((xmm6 <= xmm4)) goto loc_000FD1F3; /* jbe: below or equal (unsigned <=) */

loc_000FD1ED: ;
    MEMF(esp + 0x18) = xmm4; /* movss */

loc_000FD1F3: ;
    PUSH32(esp, esi);
    PUSH32(esp, edi);
    PUSH32(esp, 8);
    PUSH32(esp, 0x18);
    edi = esp + 0x10;
    MEM32(esp + 0x10) = 0;
    PUSH32(esp, 0); sub_000A75E0(); /* call 0x000A75E0 */

loc_000FD20A: ;
    esi = MEM32(esp + 0x20);
    xmm0 = MEMF(esp + 0x1C); /* movss */
    PUSH32(esp, 0);
    PUSH32(esp, 0);
    edx = esp + 0x20;
    PUSH32(esp, edx);
    PUSH32(esp, 0x40A00000);
    PUSH32(esp, esi);
    eax = edi;
    PUSH32(esp, 0); sub_000A7660(); /* call 0x000A7660 */

loc_000FD22A: ;
    xmm0 = MEMF(esp + 0x38); /* movss */
    PUSH32(esp, 0);
    PUSH32(esp, 0x3F800000);
    eax = esp + 0x34;
    PUSH32(esp, eax);
    PUSH32(esp, 0x40A00000);
    PUSH32(esp, esi);
    eax = edi;
    PUSH32(esp, 0); sub_000A7660(); /* call 0x000A7660 */

loc_000FD249: ;
    esi = MEM32(esp + 0x50);
    xmm0 = MEMF(esp + 0x4C); /* movss */
    PUSH32(esp, 0x3F800000);
    PUSH32(esp, 0x3F800000);
    ecx = esp + 0x48;
    PUSH32(esp, ecx);
    PUSH32(esp, 0x40A00000);
    PUSH32(esp, esi);
    eax = edi;
    PUSH32(esp, 0); sub_000A7660(); /* call 0x000A7660 */

loc_000FD26F: ;
    xmm0 = MEMF(esp + 0x58); /* movss */
    esp = esp + 0x44;
    PUSH32(esp, 0x3F800000);
    PUSH32(esp, 0);
    edx = esp + 0x18;
    PUSH32(esp, edx);
    PUSH32(esp, 0x40A00000);
    PUSH32(esp, esi);
    eax = edi;
    PUSH32(esp, 0); sub_000A7660(); /* call 0x000A7660 */

loc_000FD291: ;
    esp = esp + 0x14;
    eax = edi;
    PUSH32(esp, 0); sub_000A7630(); /* call 0x000A7630 */

loc_000FD29B: ;
    POP32(esp, edi);
    POP32(esp, esi);

loc_000FD29D: ;
    POP32(esp, ecx);
    esp += 4; return; /* ret */

}

/**
 * sub_000FD2A0
 * Original: 0x000FD2A0 - 0x000FD720 (1152 bytes, 277 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_000FD2A0(void)
{
    uint32_t ebp;
    int _flags = 0; /* fallback flag var */
    float xmm0, xmm1, xmm2, xmm3, xmm4, xmm5, xmm6, xmm7;
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_000FD2A0: ;
    PUSH32(esp, ebx);
    PUSH32(esp, esi);
    PUSH32(esp, edi);
    edi = eax;
    eax = MEM32(ecx + 4);
    if (CMP_A(eax, 4)) goto loc_000FD2D2; /* ja: above (unsigned >) */

loc_000FD2AD: ;
    { uint32_t _jt = MEM32(eax * 4 + 0xFD720); /* switch: 5 entries, 5 targets */
    if (_jt == 0x000FD2B4u) goto loc_000FD2B4;
    if (_jt == 0x000FD2BAu) goto loc_000FD2BA;
    if (_jt == 0x000FD2BFu) goto loc_000FD2BF;
    if (_jt == 0x000FD2C5u) goto loc_000FD2C5;
    if (_jt == 0x000FD2D2u) goto loc_000FD2D2;
    g_seh_ebp = ebp; RECOMP_ITAIL(_jt); return; }

loc_000FD2B4: ;
    eax = MEM32(ecx + 0x1C);
    PUSH32(esp, eax);
    goto loc_000FD2CB;

loc_000FD2BA: ;
    ecx = MEM32(ecx + 0x1C);
    goto loc_000FD2CA;

loc_000FD2BF: ;
    edx = MEM32(ecx + 0x1C);
    PUSH32(esp, edx);
    goto loc_000FD2CB;

loc_000FD2C5: ;
    eax = MEM32(ecx + 0x1C);
    ecx = MEM32(eax);

loc_000FD2CA: ;
    PUSH32(esp, ecx);

loc_000FD2CB: ;
    eax = 0; /* xor self */
    PUSH32(esp, 0); sub_00539960(); /* call 0x00539960 */

loc_000FD2D2: ;
    esi = 0x65;
    PUSH32(esp, 0); sub_0053C660(); /* call 0x0053C660 */

loc_000FD2DC: ;
    MEM32(eax) = 0x417FC;
    MEM32(eax + 4) = 8;
    eax = eax + 4;
    MEM32(eax + 4) = 0x41801818;
    ebx = MEM32(0x84A13C);
    eax = eax + 4;
    xmm3 = MEMF(esp + 0x10); /* movss */
    eax = eax + 4;
    eax = eax + 4;
    eax = eax + 4;
    ecx = edi;
    ecx = (uint32_t)((int32_t)ecx * (int32_t)0x2B0);
    xmm1 = MEMF(ecx + ebx + 0x1FC); /* movss */
    xmm1 = xmm1 + MEMF(edi * 8 + 0x771BF8); /* addss */
    xmm0 = MEMF(ecx + ebx + 0x200); /* movss */
    xmm0 = xmm0 + MEMF(edi * 8 + 0x771BFC); /* addss */
    eax = eax + 4;
    eax = eax + 4;
    eax = eax + 4;
    edx = edi * 8 + 0x771BFC;
    esi = edi * 8 + 0x771BF8;
    xmm4 = xmm1; /* movaps */
    MEMF(eax + -20) = xmm4; /* movss */
    xmm2 = xmm0; /* movaps */
    MEMF(eax + -16) = xmm2; /* movss */
    eax = eax + 4;
    xmm0 = xmm0 + xmm3; /* addss */
    xmm5 = xmm0; /* movaps */
    xmm0 = MEMF(0x648D1C); /* movss */
    MEMF(eax + -16) = xmm0; /* movss */
    MEM32(eax + -12) = 0xFFFFFFFFu;
    eax = eax + 4;
    eax = eax + 4;
    xmm1 = xmm1 + xmm3; /* addss */
    xmm6 = xmm1; /* movaps */
    xmm1 = MEMF(0x648D14); /* movss */
    MEMF(eax + -16) = xmm1; /* movss */
    MEMF(eax + -12) = xmm1; /* movss */
    MEMF(eax + -8) = xmm6; /* movss */
    MEMF(eax + -4) = xmm2; /* movss */
    MEMF(eax) = xmm0; /* movss */
    xmm2 = 0.0f; /* xorps self = zero */
    MEM32(eax + 4) = 0xFFFFFFFFu;
    eax = eax + 4;
    MEMF(eax + 4) = xmm2; /* movss */
    eax = eax + 4;
    MEMF(eax + 4) = xmm1; /* movss */
    eax = eax + 4;
    MEMF(eax + 4) = xmm6; /* movss */
    eax = eax + 4;
    MEMF(eax + 4) = xmm5; /* movss */
    eax = eax + 4;
    MEMF(eax + 4) = xmm0; /* movss */
    eax = eax + 4;
    MEM32(eax + 4) = 0xFFFFFFFFu;
    eax = eax + 4;
    MEMF(eax + 4) = xmm2; /* movss */
    eax = eax + 4;
    MEMF(eax + 4) = xmm2; /* movss */
    eax = eax + 4;
    MEMF(eax + 4) = xmm4; /* movss */
    eax = eax + 4;
    MEMF(eax + 4) = xmm5; /* movss */
    eax = eax + 4;
    MEMF(eax + 4) = xmm0; /* movss */
    eax = eax + 4;
    MEM32(eax + 4) = 0xFFFFFFFFu;
    eax = eax + 4;
    MEMF(eax + 4) = xmm1; /* movss */
    eax = eax + 4;
    MEMF(eax + 4) = xmm2; /* movss */
    edi = MEM32(0x84A13C);
    xmm4 = MEMF(ecx + edi + 0x200); /* movss */
    xmm4 = xmm4 + MEMF(edx); /* addss */
    xmm6 = MEMF(ecx + edi + 0x1FC); /* movss */
    eax = eax + 4;
    xmm5 = xmm4; /* movaps */
    eax = eax + 4;
    xmm5 = xmm5 - xmm3; /* subss */
    xmm6 = xmm6 + MEMF(esi); /* addss */
    eax = eax + 4;
    eax = eax + 4;
    eax = eax + 4;
    eax = eax + 4;
    eax = eax + 4;
    eax = eax + 4;
    eax = eax + 4;
    xmm7 = xmm6; /* movaps */
    eax = eax + 4;
    xmm7 = xmm7 - xmm3; /* subss */
    MEMF(eax + -32) = xmm7; /* movss */
    MEMF(eax + -28) = xmm5; /* movss */
    MEMF(eax + -24) = xmm0; /* movss */
    MEM32(eax + -20) = 0xFFFFFFFFu;
    MEMF(eax + -16) = xmm2; /* movss */
    MEMF(eax + -12) = xmm2; /* movss */
    MEMF(eax + -8) = xmm6; /* movss */
    MEMF(eax + -4) = xmm5; /* movss */
    MEMF(eax) = xmm0; /* movss */
    MEM32(eax + 4) = 0xFFFFFFFFu;
    eax = eax + 4;
    MEMF(eax + 4) = xmm1; /* movss */
    eax = eax + 4;
    MEMF(eax + 4) = xmm2; /* movss */
    eax = eax + 4;
    MEMF(eax + 4) = xmm6; /* movss */
    eax = eax + 4;
    MEMF(eax + 4) = xmm4; /* movss */
    eax = eax + 4;
    MEMF(eax + 4) = xmm0; /* movss */
    eax = eax + 4;
    MEM32(eax + 4) = 0xFFFFFFFFu;
    eax = eax + 4;
    MEMF(eax + 4) = xmm1; /* movss */
    eax = eax + 4;
    MEMF(eax + 4) = xmm1; /* movss */
    eax = eax + 4;
    MEMF(eax + 4) = xmm7; /* movss */
    eax = eax + 4;
    MEMF(eax + 4) = xmm4; /* movss */
    eax = eax + 4;
    MEMF(eax + 4) = xmm0; /* movss */
    eax = eax + 4;
    MEM32(eax + 4) = 0xFFFFFFFFu;
    eax = eax + 4;
    MEMF(eax + 4) = xmm2; /* movss */
    eax = eax + 4;
    MEMF(eax + 4) = xmm1; /* movss */
    edi = MEM32(0x84A13C);
    xmm4 = MEMF(ecx + edi + 0x1FC); /* movss */
    xmm4 = xmm4 + MEMF(esi); /* addss */
    xmm5 = MEMF(ecx + edi + 0x200); /* movss */
    xmm5 = xmm5 + MEMF(edx); /* addss */
    eax = eax + 4;
    eax = eax + 4;
    eax = eax + 4;
    eax = eax + 4;
    xmm7 = xmm4; /* movaps */
    MEMF(eax + -8) = xmm7; /* movss */
    eax = eax + 4;
    xmm6 = xmm5; /* movaps */
    xmm6 = xmm6 - xmm3; /* subss */
    MEMF(eax + -8) = xmm6; /* movss */
    MEMF(eax + -4) = xmm0; /* movss */
    MEM32(eax) = 0xFFFFFFFFu;
    MEMF(eax + 4) = xmm1; /* movss */
    eax = eax + 4;
    MEMF(eax + 4) = xmm2; /* movss */
    eax = eax + 4;
    eax = eax + 4;
    eax = eax + 4;
    xmm4 = xmm4 + xmm3; /* addss */
    MEMF(eax + -4) = xmm4; /* movss */
    MEMF(eax) = xmm6; /* movss */
    eax = eax + 4;
    MEMF(eax) = xmm0; /* movss */
    eax = eax + 4;
    MEM32(eax) = 0xFFFFFFFFu;
    eax = eax + 4;
    MEMF(eax) = xmm2; /* movss */
    MEMF(eax + 4) = xmm2; /* movss */
    eax = eax + 4;
    MEMF(eax + 4) = xmm4; /* movss */
    eax = eax + 4;
    MEMF(eax + 4) = xmm5; /* movss */
    eax = eax + 4;
    MEMF(eax + 4) = xmm0; /* movss */
    eax = eax + 4;
    MEM32(eax + 4) = 0xFFFFFFFFu;
    eax = eax + 4;
    MEMF(eax + 4) = xmm2; /* movss */
    eax = eax + 4;
    MEMF(eax + 4) = xmm1; /* movss */
    eax = eax + 4;
    MEMF(eax + 4) = xmm7; /* movss */
    eax = eax + 4;
    MEMF(eax + 4) = xmm5; /* movss */
    eax = eax + 4;
    MEMF(eax + 4) = xmm0; /* movss */
    eax = eax + 4;
    MEM32(eax + 4) = 0xFFFFFFFFu;
    eax = eax + 4;
    MEMF(eax + 4) = xmm1; /* movss */
    eax = eax + 4;
    MEMF(eax + 4) = xmm1; /* movss */
    edi = MEM32(0x84A13C);
    xmm5 = MEMF(ecx + edi + 0x1FC); /* movss */
    xmm5 = xmm5 + MEMF(esi); /* addss */
    xmm4 = MEMF(ecx + edi + 0x200); /* movss */
    xmm4 = xmm4 + MEMF(edx); /* addss */
    eax = eax + 4;
    eax = eax + 4;
    eax = eax + 4;
    eax = eax + 4;
    eax = eax + 4;
    eax = eax + 4;
    eax = eax + 4;
    xmm6 = xmm5; /* movaps */
    xmm6 = xmm6 - xmm3; /* subss */
    MEMF(eax + -20) = xmm6; /* movss */
    xmm7 = xmm4; /* movaps */
    MEMF(eax + -16) = xmm7; /* movss */
    MEMF(eax + -12) = xmm0; /* movss */
    MEM32(eax + -8) = 0xFFFFFFFFu;
    MEMF(eax + -4) = xmm2; /* movss */
    MEMF(eax) = xmm1; /* movss */
    MEMF(eax + 4) = xmm5; /* movss */
    eax = eax + 4;
    MEMF(eax + 4) = xmm7; /* movss */
    eax = eax + 4;
    MEMF(eax + 4) = xmm0; /* movss */
    eax = eax + 4;
    MEM32(eax + 4) = 0xFFFFFFFFu;
    eax = eax + 4;
    MEMF(eax + 4) = xmm1; /* movss */
    eax = eax + 4;
    MEMF(eax + 4) = xmm1; /* movss */
    eax = eax + 4;
    MEMF(eax + 4) = xmm5; /* movss */
    eax = eax + 4;
    eax = eax + 4;
    eax = eax + 4;
    eax = eax + 4;
    xmm4 = xmm4 + xmm3; /* addss */
    MEMF(eax + -8) = xmm4; /* movss */
    MEMF(eax + -4) = xmm0; /* movss */
    MEM32(eax) = 0xFFFFFFFFu;
    MEMF(eax + 4) = xmm1; /* movss */
    eax = eax + 4;
    MEMF(eax + 4) = xmm2; /* movss */
    eax = eax + 4;
    MEMF(eax + 4) = xmm6; /* movss */
    eax = eax + 4;
    eax = eax + 4;
    MEMF(eax) = xmm4; /* movss */
    eax = eax + 4;
    MEMF(eax) = xmm0; /* movss */
    eax = eax + 4;
    MEM32(eax) = 0xFFFFFFFFu;
    eax = eax + 4;
    MEMF(eax) = xmm2; /* movss */
    edx = MEM32(0x5499E8);
    eax = eax + 4;
    MEMF(eax) = xmm2; /* movss */
    eax = eax + 4;
    MEM32(eax) = 0x417FC;
    eax = eax + 4;
    POP32(esp, edi);
    MEM32(eax) = 0;
    eax = eax + 4;
    POP32(esp, esi);
    MEM32(edx) = eax;
    POP32(esp, ebx);
    esp += 4; return; /* ret */

}

/**
 * sub_000FD740
 * Original: 0x000FD740 - 0x000FD800 (192 bytes, 41 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_000FD740(void)
{
    uint32_t ebp;
    int _flags = 0; /* fallback flag var */
    float xmm0, xmm1, xmm2, xmm3;
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_000FD740: ;
    SET_LO8(eax, MEM8(0x771C38));
    xmm2 = 0.0f; /* xorps self = zero */
    esp = esp - 0x68;
    if (TEST_Z(LO8(eax), LO8(eax))) { sub_000FD800(); return; } /* je: equal / zero */

loc_000FD753: ;
    if (CMP_EQ(MEM8(0x76F0E0), 1)) goto loc_000FD777; /* je: equal / zero */

loc_000FD75C: ;
    SET_LO8(eax, MEM8(0x76EC82));
    if (TEST_NZ(LO8(eax), LO8(eax))) goto loc_000FD777; /* jne: not equal / not zero */

loc_000FD765: ;
    xmm0 = MEMF(0x648D14); /* movss */
    MEMF(esp) = xmm0; /* movss */
    g_seh_ebp = ebp; sub_000FD81B(); return; /* tail jmp 0x000FD81B */

loc_000FD777: ;
    eax = MEM32(0x849378);
    xmm0 = MEMF(eax); /* movss */
    xmm3 = MEMF(0x648E54); /* movss */
    xmm1 = MEMF(0x648D14); /* movss */
    xmm0 = xmm0 * xmm3; /* mulss */
    /* comiss xmm0, xmm1 - sets EFLAGS */
    MEMF(esp) = xmm0; /* movss */
    if ((xmm0 <= xmm1)) goto loc_000FD7A5; /* jbe: below or equal (unsigned <=) */

loc_000FD79E: ;
    MEMF(esp) = xmm1; /* movss */
    goto loc_000FD7AF;

loc_000FD7A5: ;
    /* comiss xmm2, xmm0 - sets EFLAGS */
    if ((xmm2 <= xmm0)) goto loc_000FD7B4; /* jbe: below or equal (unsigned <=) */

loc_000FD7AA: ;
    MEMF(esp) = xmm2; /* movss */

loc_000FD7AF: ;
    xmm0 = MEMF(esp); /* movss */

loc_000FD7B4: ;
    ecx = MEM32(0x84937C);
    xmm1 = MEMF(ecx); /* movss */
    eax = MEM32(0x84A13C);
    edx = MEM32(0x849380);
    xmm1 = xmm1 * xmm3; /* mulss */
    xmm1 = xmm1 * MEMF(eax + 0x1F4); /* mulss */
    MEMF(esi * 8 + 0x771BF8) = xmm1; /* movss */
    xmm1 = MEMF(edx); /* movss */
    xmm1 = xmm1 * xmm3; /* mulss */
    xmm3 = xmm2; /* movaps */
    xmm3 = xmm3 - xmm1; /* subss */
    xmm3 = xmm3 * MEMF(eax + 0x1F8); /* mulss */
    MEMF(esi * 8 + 0x771BFC) = xmm3; /* movss */
    g_seh_ebp = ebp; sub_000FD80E(); return; /* tail jmp 0x000FD80E */

}

/**
 * sub_000FDF80
 * Original: 0x000FDF80 - 0x000FE4D7 (1367 bytes, 287 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_000FDF80(void)
{
    uint32_t ebp;
    int _flags = 0; /* fallback flag var */
    int _fpu_cmp = 0; /* FPU compare result: -1/0/1 */
    float xmm0, xmm1, xmm2, xmm3, xmm4, xmm5, xmm6;
    double _fp_stack[8];
    int _fp_top = 0;
    #define fp_push(v) (_fp_stack[--_fp_top & 7] = (v))
    #define fp_pop() (_fp_top++)
    #define fp_popp() (fp_pop())
    #define fp_top() _fp_stack[_fp_top & 7]
    #define fp_st1() _fp_stack[(_fp_top + 1) & 7]
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_000FDF80: ;
    esp = esp - 0x1C;
    PUSH32(esp, ebp);
    PUSH32(esp, esi);
    esi = MEM32(0x84A144);
    ebp = 0; /* xor self */
    if (TEST_S(esi, esi)) goto loc_000FE3A2; /* jl: less (signed <) */

loc_000FDF95: ;
    PUSH32(esp, ebx);
    ebx = MEM32(0x7FA20C);
    eax = 0; /* xor self */
    PUSH32(esp, edi);
    MEM32(esp + 0x1C) = eax;
    goto loc_000FDFB0;

    /* nop */
    /* nop */

loc_000FDFB0: ;
    SET_LO8(ecx, MEM8(ebp + 0x771C44));
    if (TEST_Z(LO8(ecx), LO8(ecx))) goto loc_000FE1D0; /* je: equal / zero */

loc_000FDFBE: ;
    ecx = MEM32(0x84A5F8);
    xmm0 = (float)(int32_t)ebx; /* cvtsi2ss */
    xmm0 = xmm0 * MEMF(ebp * 4 + 0x771C18); /* mulss */
    xmm0 = xmm0 + MEMF(ebp * 4 + 0x771C28); /* addss */
    eax = eax + ecx + 0x568;
    MEMF(ebp * 4 + 0x771C28) = xmm0; /* movss */
    ecx = MEM32(eax);
    if (TEST_NZ(ecx, ecx)) goto loc_000FE006; /* jne: not equal / not zero */

loc_000FDFF0: ;
    xmm0 = MEMF(0x648D14); /* movss */
    MEMF(ebp * 4 + 0x771C28) = xmm0; /* movss */
    goto loc_000FE38A;

loc_000FE006: ;
    ecx = MEM32(ecx + 0x204);
    if (CMP_NE(ecx, 3)) goto loc_000FE04C; /* jne: not equal / not zero */

loc_000FE011: ;
    /* comiss xmm0, MEMF(esi * 4 + 0x5957F0) - sets EFLAGS */
    if ((xmm0 < MEMF(esi * 4 + 0x5957F0))) goto loc_000FE38A; /* jb: below (unsigned <) */

loc_000FE01F: ;
    edx = MEM32(esi * 4 + 0x5957F0);
    MEM32(ebp * 4 + 0x771C28) = edx;
    eax = MEM32(eax);
    MEM32(eax + 0x204) = 4;
    MEM8(ebp + 0x771C40) = 0x1E;
    MEM8(ebp + 0x771C3C) = 0;
    goto loc_000FE38A;

loc_000FE04C: ;
    if (CMP_NE(ecx, 4)) goto loc_000FE103; /* jne: not equal / not zero */

loc_000FE055: ;
    SET_LO8(ecx, MEM8(ebp + 0x771C40));
    if (TEST_Z(LO8(ecx), LO8(ecx))) goto loc_000FE0D9; /* je: equal / zero */

loc_000FE05F: ;
    edx = ZX8(LO8(ecx));
    if (CMP_L(edx, ebx)) goto loc_000FE070; /* jl: less (signed <) */

loc_000FE066: ;
    SET_LO8(ecx, LO8(ecx) - LO8(ebx));
    MEM8(ebp + 0x771C40) = LO8(ecx);
    goto loc_000FE077;

loc_000FE070: ;
    MEM8(ebp + 0x771C40) = 0;

loc_000FE077: ;
    SET_LO8(ecx, 0x14);
    SET_LO8(eax, LO8(ebx));
    { int64_t _r = (int64_t)(int32_t)eax * (int64_t)(int32_t)LO8(ecx);
      eax = (uint32_t)_r; edx = (uint32_t)(_r >> 32); }
    SET_LO8(ecx, MEM8(ebp + 0x771C3C));
    SET_LO8(ecx, LO8(ecx) + LO8(eax));
    MEM8(ebp + 0x771C3C) = LO8(ecx);
    SET_LO8(eax, LO8(ecx));
    SET_LO8(ecx, MEM8(ebp + 0x771C40));
    if (CMP_AE(LO8(ecx), 0x1E)) goto loc_000FE0B1; /* jae: above or equal (unsigned >=) */

loc_000FE098: ;
    edx = ZX8(LO8(ecx));
    xmm1 = (float)(int32_t)edx; /* cvtsi2ss */
    xmm1 = xmm1 * MEMF(0x648E54); /* mulss */
    xmm1 = xmm1 * MEMF(0x6497D0); /* mulss */
    goto loc_000FE0B9;

loc_000FE0B1: ;
    xmm1 = MEMF(0x648E54); /* movss */

loc_000FE0B9: ;
    PUSH32(esp, 0); sub_002AF8A0(); /* call 0x002AF8A0 */

loc_000FE0BE: ;
    xmm0 = xmm0 * xmm1; /* mulss */
    xmm0 = xmm0 + MEMF(esi * 4 + 0x5957F0); /* addss */
    MEMF(ebp * 4 + 0x771C28) = xmm0; /* movss */
    goto loc_000FE38A;

loc_000FE0D9: ;
    ecx = MEM32(esi * 4 + 0x5957F0);
    MEM32(ebp * 4 + 0x771C28) = ecx;
    edx = MEM32(eax);
    MEM32(edx + 0x204) = 5;
    eax = MEM32(eax);
    MEM16(eax + 0x212) = 0xA;
    goto loc_000FE38A;

loc_000FE103: ;
    if (CMP_NE(ecx, 5)) goto loc_000FE11B; /* jne: not equal / not zero */

loc_000FE108: ;
    ecx = MEM32(esi * 4 + 0x5957F0);
    MEM32(ebp * 4 + 0x771C28) = ecx;
    goto loc_000FE38A;

loc_000FE11B: ;
    if (CMP_NE(ecx, 6)) goto loc_000FE17E; /* jne: not equal / not zero */

loc_000FE120: ;
    xmm0 = MEMF(0x649948); /* movss */
    MEMF(ebp * 4 + 0x771C18) = xmm0; /* movss */
    xmm0 = MEMF(ebp * 4 + 0x771C28); /* movss */
    /* comiss xmm0, MEMF(esi * 4 + 0x595800) - sets EFLAGS */
    if ((xmm0 < MEMF(esi * 4 + 0x595800))) goto loc_000FE38A; /* jb: below (unsigned <) */

loc_000FE148: ;
    edx = MEM32(esi * 4 + 0x595800);
    xmm0 = 0.0f; /* xorps self = zero */
    MEM32(ebp * 4 + 0x771C28) = edx;
    ecx = MEM32(eax);
    MEM32(ecx + 0x204) = 7;
    edx = MEM32(eax);
    MEM16(edx + 0x212) = 0x1E;
    MEMF(ebp * 4 + 0x771C18) = xmm0; /* movss */
    goto loc_000FE38A;

loc_000FE17E: ;
    if (CMP_NE(ecx, 8)) goto loc_000FE38A; /* jne: not equal / not zero */

loc_000FE187: ;
    xmm0 = MEMF(0x649734); /* movss */
    MEMF(ebp * 4 + 0x771C18) = xmm0; /* movss */
    xmm0 = MEMF(ebp * 4 + 0x771C28); /* movss */
    /* comiss xmm0, MEMF(0x648D14) - sets EFLAGS */
    if ((xmm0 < MEMF(0x648D14))) goto loc_000FE38A; /* jb: below (unsigned <) */

loc_000FE1AE: ;
    xmm0 = MEMF(0x648D14); /* movss */
    MEMF(ebp * 4 + 0x771C28) = xmm0; /* movss */
    eax = MEM32(eax);
    MEM32(eax + 0x204) = 9;
    goto loc_000FE38A;

loc_000FE1D0: ;
    SET_LO8(ecx, MEM8(ebp + 0x771BEC));
    if (TEST_Z(LO8(ecx), LO8(ecx))) { sub_000FE4D7(); return; } /* je: equal / zero */

loc_000FE1DE: ;
    edx = MEM32(0x84A5F8);
    xmm0 = (float)(int32_t)ebx; /* cvtsi2ss */
    xmm0 = xmm0 * MEMF(ebp * 4 + 0x771C18); /* mulss */
    xmm0 = xmm0 + MEMF(ebp * 4 + 0x771C28); /* addss */
    ecx = esp + 0x14;
    PUSH32(esp, ecx);
    esi = eax + edx;
    edi = esp + 0x24;
    ebx = esp + 0x1C;
    MEMF(ebp * 4 + 0x771C28) = xmm0; /* movss */
    PUSH32(esp, 0); sub_002CE520(); /* call 0x002CE520 */

loc_000FE218: ;
    eax = MEM32(esp + 0x24);
    ecx = MEM32(esp + 0x1C);
    edx = MEM32(esp + 0x18);
    xmm5 = MEMF(ebp * 8 + 0x771BF8); /* movss */
    xmm6 = MEMF(ebp * 8 + 0x771BFC); /* movss */
    PUSH32(esp, eax);
    PUSH32(esp, ecx);
    PUSH32(esp, edx);
    esi = ebp;
    eax = 0; /* xor self */
    MEMF(esp + 0x34) = xmm5; /* movss */
    MEMF(esp + 0x38) = xmm6; /* movss */
    PUSH32(esp, 0); sub_000FCFC0(); /* call 0x000FCFC0 */

loc_000FE24E: ;
    SET_LO8(eax, MEM8(0x7FA23C));
    xmm1 = MEMF(ebp * 8 + 0x771BF8); /* movss */
    xmm2 = MEMF(ebp * 8 + 0x771BFC); /* movss */
    xmm3 = MEMF(0x648D14); /* movss */
    SET_LO8(ecx, 0); /* xor self */
    esp = esp + 0x10;
    (void)0; /* cmp LO8(eax), LO8(ecx) - flags set for next jcc */
    MEMF(esp + 0x14) = xmm1; /* movss */
    MEMF(esp + 0x18) = xmm2; /* movss */
    if (CMP_NE(LO8(eax), LO8(ecx))) goto loc_000FE28A; /* jne: not equal / not zero */

loc_000FE282: ;
    xmm3 = MEMF(0x64909C); /* movss */

loc_000FE28A: ;
    fp_push(MEMF(esp + 0x14)); /* fld float */
    xmm4 = 0.0f; /* xorps self = zero */
    fp_st1() -= fp_top(); fp_pop(); /* fsub */
    MEMF(esp + 0x10) = (float)fp_top(); fp_pop(); /* fst */
    fp_top() = fabs(fp_top()); /* fabs */
    fp_push(MEMF(0x648F38)); /* fld float */
    { double _t = fp_top(); fp_top() = fp_st1(); fp_st1() = _t; } /* fxch */
    _fpu_cmp = (fp_top() < fp_st1()) ? -1 : (fp_top() > fp_st1()) ? 1 : 0; fp_pop(); /* fcompi */
    /* fstp st(0) */
    if ((_fpu_cmp <= 0) /* fcompi */) goto loc_000FE2CF; /* jbe: below or equal (unsigned <=) */

loc_000FE2A9: ;
    /* comiss xmm4, MEMF(esp + 0x10) - sets EFLAGS */
    if ((xmm4 <= MEMF(esp + 0x10))) goto loc_000FE2B5; /* jbe: below or equal (unsigned <=) */

loc_000FE2B0: ;
    eax = eax | 0xFFFFFFFFu;
    goto loc_000FE2BA;

loc_000FE2B5: ;
    eax = 1;

loc_000FE2BA: ;
    xmm0 = (float)(int32_t)eax; /* cvtsi2ss */
    xmm0 = xmm0 * MEMF(0x648F38); /* mulss */
    xmm1 = xmm1 - xmm0; /* subss */
    xmm5 = xmm1; /* movaps */
    goto loc_000FE2D5;

loc_000FE2CF: ;
    xmm0 = MEMF(esp + 0x10); /* movss */

loc_000FE2D5: ;
    fp_push(MEMF(esp + 0x18)); /* fld float */
    xmm0 = xmm0 * xmm3; /* mulss */
    fp_st1() -= fp_top(); fp_pop(); /* fsub */
    xmm0 = xmm0 + xmm5; /* addss */
    xmm1 = xmm0; /* movaps */
    MEMF(esp + 0x10) = (float)fp_top(); fp_pop(); /* fst */
    fp_top() = fabs(fp_top()); /* fabs */
    fp_push(MEMF(0x649944)); /* fld float */
    { double _t = fp_top(); fp_top() = fp_st1(); fp_st1() = _t; } /* fxch */
    _fpu_cmp = (fp_top() < fp_st1()) ? -1 : (fp_top() > fp_st1()) ? 1 : 0; fp_pop(); /* fcompi */
    /* fstp st(0) */
    if ((_fpu_cmp <= 0) /* fcompi */) goto loc_000FE322; /* jbe: below or equal (unsigned <=) */

loc_000FE2FC: ;
    /* comiss xmm4, MEMF(esp + 0x10) - sets EFLAGS */
    if ((xmm4 <= MEMF(esp + 0x10))) goto loc_000FE308; /* jbe: below or equal (unsigned <=) */

loc_000FE303: ;
    eax = eax | 0xFFFFFFFFu;
    goto loc_000FE30D;

loc_000FE308: ;
    eax = 1;

loc_000FE30D: ;
    xmm0 = (float)(int32_t)eax; /* cvtsi2ss */
    xmm0 = xmm0 * MEMF(0x649944); /* mulss */
    xmm2 = xmm2 - xmm0; /* subss */
    xmm6 = xmm2; /* movaps */
    goto loc_000FE328;

loc_000FE322: ;
    xmm0 = MEMF(esp + 0x10); /* movss */

loc_000FE328: ;
    SET_LO8(eax, MEM8(ebp + 0x771BEC));
    (void)0; /* cmp LO8(eax), 1 - flags set for next jcc */
    xmm0 = xmm0 * xmm3; /* mulss */
    xmm0 = xmm0 + xmm6; /* addss */
    MEMF(ebp * 8 + 0x771BF8) = xmm1; /* movss */
    MEMF(ebp * 8 + 0x771BFC) = xmm0; /* movss */
    if (CMP_NE(LO8(eax), 1)) goto loc_000FE3A8; /* jne: not equal / not zero */

loc_000FE34C: ;
    xmm0 = MEMF(0x648E40); /* movss */
    /* comiss xmm0, MEMF(ebp * 4 + 0x771C28) - sets EFLAGS */
    if ((xmm0 < MEMF(ebp * 4 + 0x771C28))) goto loc_000FE37E; /* jb: below (unsigned <) */

loc_000FE35E: ;
    MEMF(ebp * 4 + 0x771C28) = xmm0; /* movss */
    MEM8(ebp + 0x771C40) = 0x1E;
    MEMF(ebp * 4 + 0x771C18) = xmm4; /* movss */
    MEM8(ebp + 0x771BEC) = 2;

loc_000FE37E: ;
    ebx = MEM32(0x7FA20C);

loc_000FE384: ;
    esi = MEM32(0x84A144);

loc_000FE38A: ;
    eax = MEM32(esp + 0x1C);
    ebp++;
    eax = eax + 0x6D0;
    (void)0; /* cmp ebp, esi - flags set for next jcc */
    MEM32(esp + 0x1C) = eax;
    if (CMP_LE(ebp, esi)) goto loc_000FDFB0; /* jle: less or equal (signed <=) */

loc_000FE3A0: ;
    POP32(esp, edi);
    POP32(esp, ebx);

loc_000FE3A2: ;
    POP32(esp, esi);
    POP32(esp, ebp);
    esp = esp + 0x1C;
    esp += 4; return; /* ret */

loc_000FE3A8: ;
    if (CMP_NE(LO8(eax), 2)) goto loc_000FE468; /* jne: not equal / not zero */

loc_000FE3B0: ;
    SET_LO8(eax, MEM8(ebp + 0x771C40));
    if (CMP_EQ(LO8(eax), LO8(ecx))) goto loc_000FE438; /* je: equal / zero */

loc_000FE3BA: ;
    ebx = MEM32(0x7FA20C);
    edx = ZX8(LO8(eax));
    if (CMP_L(edx, ebx)) goto loc_000FE3D1; /* jl: less (signed <) */

loc_000FE3C7: ;
    SET_LO8(eax, LO8(eax) - LO8(ebx));
    MEM8(ebp + 0x771C40) = LO8(eax);
    goto loc_000FE3D7;

loc_000FE3D1: ;
    MEM8(ebp + 0x771C40) = LO8(ecx);

loc_000FE3D7: ;
    SET_LO8(ecx, 0xEC);
    SET_LO8(eax, LO8(ebx));
    { int64_t _r = (int64_t)(int32_t)eax * (int64_t)(int32_t)LO8(ecx);
      eax = (uint32_t)_r; edx = (uint32_t)(_r >> 32); }
    SET_LO8(ecx, MEM8(ebp + 0x771C3C));
    SET_LO8(ecx, LO8(ecx) + LO8(eax));
    MEM8(ebp + 0x771C3C) = LO8(ecx);
    SET_LO8(eax, LO8(ecx));
    SET_LO8(ecx, MEM8(ebp + 0x771C40));
    if (CMP_AE(LO8(ecx), 0x1E)) goto loc_000FE411; /* jae: above or equal (unsigned >=) */

loc_000FE3F8: ;
    edx = ZX8(LO8(ecx));
    xmm1 = (float)(int32_t)edx; /* cvtsi2ss */
    xmm1 = xmm1 * MEMF(0x648E54); /* mulss */
    xmm1 = xmm1 * MEMF(0x6497D0); /* mulss */
    goto loc_000FE419;

loc_000FE411: ;
    xmm1 = MEMF(0x648E54); /* movss */

loc_000FE419: ;
    PUSH32(esp, 0); sub_002AF8A0(); /* call 0x002AF8A0 */

loc_000FE41E: ;
    xmm0 = xmm0 * xmm1; /* mulss */
    xmm0 = xmm0 + MEMF(0x648E40); /* addss */
    MEMF(ebp * 4 + 0x771C28) = xmm0; /* movss */
    goto loc_000FE384;

loc_000FE438: ;
    xmm0 = MEMF(0x648E40); /* movss */
    fp_push(MEMF(0x7F9F5C)); /* fld float */
    MEMF(ebp * 4 + 0x771C28) = xmm0; /* movss */
    MEM8(ebp + 0x771BEC) = 3;
    PUSH32(esp, 0); sub_00471288(); /* call 0x00471288 */

loc_000FE45B: ;
    MEM16(ebp * 2 + 0x771BE4) = LO16(eax);
    goto loc_000FE37E;

loc_000FE468: ;
    if (CMP_NE(LO8(eax), 3)) goto loc_000FE4B5; /* jne: not equal / not zero */

loc_000FE46C: ;
    ebx = MEM32(0x7FA20C);
    esi = MEM32(0x84A144);
    eax = 0; /* xor self */
    SET_LO16(eax, MEM16(ebp * 2 + 0x771BE4));
    ecx = ZX16(LO16(eax));
    if (CMP_LE(ecx, ebx)) goto loc_000FE498; /* jle: less or equal (signed <=) */

loc_000FE489: ;
    eax = eax - ebx;
    MEM16(ebp * 2 + 0x771BE4) = LO16(eax);
    goto loc_000FE38A;

loc_000FE498: ;
    xmm0 = MEMF(0x649940); /* movss */
    MEM8(ebp + 0x771BEC) = 4;
    MEMF(ebp * 4 + 0x771C18) = xmm0; /* movss */
    goto loc_000FE38A;

loc_000FE4B5: ;
    /* comiss xmm4, MEMF(ebp * 4 + 0x771C28) - sets EFLAGS */
    if ((xmm4 < MEMF(ebp * 4 + 0x771C28))) goto loc_000FE37E; /* jb: below (unsigned <) */

loc_000FE4C3: ;
    MEM8(ebp + 0x771BEC) = LO8(ecx);
    MEMF(ebp * 4 + 0x771C28) = xmm4; /* movss */
    goto loc_000FE37E;

    #undef fp_push
    #undef fp_pop
    #undef fp_popp
    #undef fp_top
    #undef fp_st1
}

/**
 * sub_000FE560
 * Original: 0x000FE560 - 0x000FE57C (28 bytes, 7 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_000FE560(void)
{
    int _flags = 0; /* fallback flag var */
    float xmm0;

loc_000FE560: ;
    xmm0 = MEMF(eax * 4 + 0x771C28); /* movss */
    /* ucomiss xmm0, MEMF(0x648CF8) - sets EFLAGS */
    /* lahf - load AH from flags (used in FPU compare idiom) */
    if (1 /* jp after test - parity */) { sub_000FE57C(); return; } /* jp: parity */

loc_000FE576: ;
    eax = 1;
    esp += 4; return; /* ret */

}

/**
 * sub_000FE580
 * Original: 0x000FE580 - 0x000FE650 (208 bytes, 38 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_000FE580(void)
{
    uint32_t ebp;
    int _flags = 0; /* fallback flag var */
    float xmm0;
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_000FE580: ;
    SET_LO8(edx, MEM8(0x7819D5));
    ecx = 0; /* xor self */
    if (CMP_EQ(LO8(edx), LO8(ecx))) goto loc_000FE5FE; /* je: equal / zero */

loc_000FE58C: ;
    eax = eax << 5;
    edx = MEM32(eax + 0x771C50);
    if (CMP_A(edx, 5)) goto loc_000FE64F; /* ja: above (unsigned >) */

loc_000FE59E: ;
    { uint32_t _jt = MEM32(edx * 4 + 0xFE650); /* switch: 6 entries, 2 targets */
    if (_jt == 0x000FE5A5u) goto loc_000FE5A5;
    if (_jt == 0x000FE5C8u) goto loc_000FE5C8;
    g_seh_ebp = ebp; RECOMP_ITAIL(_jt); return; }

loc_000FE5A5: ;
    MEM8(eax + 0x771C58) = LO8(ecx);
    MEM8(eax + 0x771C59) = LO8(ecx);
    MEM8(eax + 0x771C5A) = LO8(ecx);
    MEM32(eax + 0x771C5C) = 0x19;
    MEM32(eax + 0x771C60) = ecx;
    esp += 4; return; /* ret */

loc_000FE5C8: ;
    MEM8(eax + 0x771C58) = LO8(ecx);
    MEM8(eax + 0x771C59) = LO8(ecx);
    MEM8(eax + 0x771C5A) = LO8(ecx);
    MEM32(eax + 0x771C60) = ecx;
    (void)0; /* cmp MEM32(eax + 0x771C54), 1 - flags set for next jcc */
    MEM32(eax + 0x771C5C) = 0x3C;
    if (CMP_NE(MEM32(eax + 0x771C54), 1)) goto loc_000FE64F; /* jne: not equal / not zero */

loc_000FE5F3: ;
    MEM32(eax + 0x771C54) = 2;
    esp += 4; return; /* ret */

loc_000FE5FE: ;
    if (CMP_EQ(MEM8(0x8498D0), LO8(ecx))) goto loc_000FE611; /* je: equal / zero */

loc_000FE606: ;
    MEM8(eax + 0x771BEC) = LO8(ecx);
    eax = eax << 5;
    goto loc_000FE5A5;

loc_000FE611: ;
    xmm0 = MEMF(0x648D14); /* movss */
    MEMF(eax * 4 + 0x771C28) = xmm0; /* movss */
    xmm0 = 0.0f; /* xorps self = zero */
    MEMF(eax * 8 + 0x771BF8) = xmm0; /* movss */
    MEMF(eax * 8 + 0x771BFC) = xmm0; /* movss */
    xmm0 = MEMF(0x649208); /* movss */
    MEM8(eax + 0x771BEC) = 1;
    MEMF(eax * 4 + 0x771C18) = xmm0; /* movss */

loc_000FE64F: ;
    esp += 4; return; /* ret */

}

/**
 * sub_000FE670
 * Original: 0x000FE670 - 0x000FE85E (494 bytes, 133 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_000FE670(void)
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

loc_000FE670: ;
    eax = MEM32(0x7FA1F8);
    esp = esp - 0x18;
    if (TEST_Z(eax, eax)) goto loc_000FE85A; /* je: equal / zero */

loc_000FE680: ;
    eax = MEM32(0x849384);
    if (TEST_Z(eax, eax)) goto loc_000FE85A; /* je: equal / zero */

loc_000FE68D: ;
    xmm0 = MEMF(eax); /* movss */
    xmm0 = xmm0 * MEMF(0x648E54); /* mulss */
    xmm2 = 0.0f; /* xorps self = zero */
    /* comiss xmm2, xmm0 - sets EFLAGS */
    MEMF(esp) = xmm0; /* movss */
    if ((xmm2 > xmm0)) goto loc_000FE85A; /* ja: above (unsigned >) */

loc_000FE6AA: ;
    xmm1 = MEMF(0x648D14); /* movss */
    /* comiss xmm0, xmm1 - sets EFLAGS */
    if ((xmm0 <= xmm1)) goto loc_000FE6BE; /* jbe: below or equal (unsigned <=) */

loc_000FE6B7: ;
    MEMF(esp) = xmm1; /* movss */
    goto loc_000FE6CB;

loc_000FE6BE: ;
    /* ucomiss xmm0, xmm2 - sets EFLAGS */
    /* lahf - load AH from flags (used in FPU compare idiom) */
    if (1 /* jnp after test - parity */) goto loc_000FE85A; /* jnp: not parity */

loc_000FE6CB: ;
    PUSH32(esp, ebx);
    PUSH32(esp, esi);
    PUSH32(esp, edi);
    ebx = 0; /* xor self */
    PUSH32(esp, 0); sub_000FBA60(); /* call 0x000FBA60 */

loc_000FE6D5: ;
    eax = MEM32(0x84A13C);
    fp_push(MEMF(eax + 0x1F8)); /* fld float */
    ecx = MEM32(eax + 0x21C);
    fp_st1() *= fp_top(); fp_pop(); /* fmul */
    edx = MEM32(eax + 0x218);
    MEM32(esp + 0x14) = ecx;
    ecx = MEM32(eax + 0x220);
    esi = MEM32(esp + 0x14);
    fp_st1() += fp_top(); fp_pop(); /* fadd */
    edi = ecx;
    MEM32(esp + 0x1C) = edx;
    edx = MEM32(eax + 0x214);
    fp_st1() *= fp_top(); fp_pop(); /* fmul */
    fp_push(MEMF(eax + 0x214)); /* fld float */
    eax = 0; /* xor self */
    fp_st1() -= fp_top(); fp_pop(); /* fsub */
    MEM32(esp + 0x10) = ecx;
    fp_st1() += fp_top(); fp_pop(); /* faddp */
    MEMF(esp + 0x18) = (float)fp_top(); fp_popp(); /* fstp */
    ebx = MEM32(esp + 0x18);
    PUSH32(esp, ebx);
    PUSH32(esp, edi);
    PUSH32(esp, edx);
    PUSH32(esp, esi);
    PUSH32(esp, 0xFF000000u);
    PUSH32(esp, 0); sub_000FD0F0(); /* call 0x000FD0F0 */

loc_000FE740: ;
    eax = MEM32(0x84A13C);
    fp_push(MEMF(eax + 0x218)); /* fld float */
    fp_st1() += fp_top(); fp_pop(); /* fadd */
    fp_push(MEMF(eax + 0x1F8)); /* fld float */
    eax = MEM32(esp + 0x30);
    fp_st1() *= fp_top(); fp_pop(); /* fmul */
    PUSH32(esp, eax);
    PUSH32(esp, edi);
    fp_st1() += fp_top(); fp_pop(); /* fadd */
    eax = 0; /* xor self */
    fp_st1() *= fp_top(); fp_pop(); /* fmul */
    fp_st1() -= fp_top(); fp_pop(); /* fsubp */
    MEMF(esp + 0x28) = (float)fp_top(); fp_popp(); /* fstp */
    ecx = MEM32(esp + 0x28);
    PUSH32(esp, ecx);
    PUSH32(esp, esi);
    PUSH32(esp, 0xFF000000u);
    PUSH32(esp, 0); sub_000FD0F0(); /* call 0x000FD0F0 */

loc_000FE785: ;
    eax = MEM32(0x849388);
    esp = esp + 0x28;
    if (TEST_NZ(eax, eax)) goto loc_000FE7A5; /* jne: not equal / not zero */

loc_000FE791: ;
    edx = MEM32(0x69DD24);
    PUSH32(esp, 0x849388);
    PUSH32(esp, edx);
    PUSH32(esp, 0); sub_00075E90(); /* call 0x00075E90 */

loc_000FE7A2: ;
    esp = esp + 8;

loc_000FE7A5: ;
    eax = MEM32(0x84938C);
    if (TEST_NZ(eax, eax)) goto loc_000FE7C1; /* jne: not equal / not zero */

loc_000FE7AE: ;
    eax = MEM32(0x69DD10);
    PUSH32(esp, 0x84938C);
    PUSH32(esp, eax);
    PUSH32(esp, 0); sub_00075E90(); /* call 0x00075E90 */

loc_000FE7BE: ;
    esp = esp + 8;

loc_000FE7C1: ;
    eax = MEM32(0x849388);
    ecx = esp + 0x1C;
    PUSH32(esp, 0); sub_003FA5C0(); /* call 0x003FA5C0 */

loc_000FE7CF: ;
    eax = MEM32(0x84938C);
    ecx = esp + 0x20;
    PUSH32(esp, 0); sub_003FA5C0(); /* call 0x003FA5C0 */

loc_000FE7DD: ;
    fp_push(MEMF(esp + 0x10)); /* fld float */
    ecx = MEM32(esp + 0x1C);
    fp_st1() -= fp_top(); fp_pop(); /* fsub */
    xmm0 = MEMF(esp + 0x18); /* movss */
    PUSH32(esp, 0x3F800000);
    PUSH32(esp, ecx);
    MEMF(esp + 0x1C) = (float)fp_top(); fp_popp(); /* fstp */
    edi = MEM32(esp + 0x1C);
    PUSH32(esp, ecx);
    xmm1 = xmm0; /* movaps */
    xmm1 = xmm1 + MEMF(0x648F08); /* addss */
    xmm1 = xmm1 - xmm0; /* subss */
    MEMF(esp) = xmm1; /* movss */
    PUSH32(esp, edi);
    PUSH32(esp, ebx);
    PUSH32(esp, esi);
    PUSH32(esp, 0); sub_00357CF0(); /* call 0x00357CF0 */

loc_000FE81A: ;
    edx = MEM32(esp + 0x38);
    xmm0 = MEMF(esp + 0x24); /* movss */
    esp = esp + 0x18;
    PUSH32(esp, 0x3F800000);
    PUSH32(esp, edx);
    PUSH32(esp, ecx);
    xmm1 = xmm0; /* movaps */
    xmm1 = xmm1 - MEMF(0x648F08); /* subss */
    xmm0 = xmm0 - xmm1; /* subss */
    MEMF(esp) = xmm0; /* movss */
    MEMF(esp + 0x28) = xmm1; /* movss */
    eax = MEM32(esp + 0x28);
    PUSH32(esp, edi);
    PUSH32(esp, eax);
    PUSH32(esp, esi);
    PUSH32(esp, 0); sub_00357CF0(); /* call 0x00357CF0 */

loc_000FE854: ;
    esp = esp + 0x18;
    POP32(esp, edi);
    POP32(esp, esi);
    POP32(esp, ebx);

loc_000FE85A: ;
    esp = esp + 0x18;
    esp += 4; return; /* ret */

    #undef fp_push
    #undef fp_pop
    #undef fp_popp
    #undef fp_top
    #undef fp_st1
}

/**
 * sub_000FE860
 * Original: 0x000FE860 - 0x000FE901 (161 bytes, 46 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_000FE860(void)
{
    int _flags = 0; /* fallback flag var */
    float xmm0;

loc_000FE860: ;
    esp = esp - 0xC;
    if (CMP_L(LO16(ecx), 1)) goto loc_000FE8FD; /* jl: less (signed <) */

loc_000FE86D: ;
    MEM8(esp + 6) = LO8(edx);
    SET_LO8(edx, MEM8(esp + 0x10));
    MEM8(esp + 5) = LO8(edx);
    SET_LO8(edx, MEM8(esp + 0x14));
    MEM8(esp + 7) = LO8(eax);
    eax = ZX8(LO8(eax));
    MEM8(esp + 4) = LO8(edx);
    SET_LO8(edx, MEM8(esp + 0x18));
    MEM8(esp + 8) = LO8(edx);
    ecx = SX16(LO16(ecx));
    edx = ((int32_t)eax < 0) ? 0xFFFFFFFF : 0; /* cdq */
    { int64_t _dividend = ((int64_t)(int32_t)edx << 32) | eax;
      eax = (uint32_t)((int32_t)(_dividend / (int32_t)ecx));
      edx = (uint32_t)((int32_t)(_dividend % (int32_t)ecx)); }
    xmm0 = (float)(int32_t)ecx; /* cvtsi2ss */
    MEMF(esp) = xmm0; /* movss */
    MEM16(esp + 0xA) = LO16(eax);
    eax = MEM32(esp + 0x1C);
    PUSH32(esp, eax);
    PUSH32(esp, 0x2A);
    eax = 0x54;
    PUSH32(esp, 0); sub_000D9C60(); /* call 0x000D9C60 */

loc_000FE8B5: ;
    esp = esp + 8;
    if (TEST_Z(eax, eax)) goto loc_000FE8FD; /* je: equal / zero */

loc_000FE8BC: ;
    xmm0 = MEMF(esp); /* movss */
    MEMF(eax + 0x30) = xmm0; /* movss */
    MEMF(eax + 0x34) = xmm0; /* movss */
    MEM8(eax + 0x38) = 0xFF;
    MEM8(eax + 0x39) = 0x39;
    MEM8(eax + 0x3A) = 3;
    MEM8(eax + 0x2C) = 1;
    MEM8(eax + 0x3B) = 0;
    ecx = 0; /* xor self */
    edx = eax + 0x3C;
    MEM32(edx) = ecx;
    MEM32(edx + 4) = ecx;
    MEM32(edx + 8) = ecx;
    MEM32(edx + 0xC) = ecx;
    ecx = MEM32(esp + 4);
    edx = MEM32(esp + 8);
    MEM32(eax + 0x4C) = ecx;
    MEM32(eax + 0x50) = edx;

loc_000FE8FD: ;
    esp = esp + 0xC;
    esp += 4; return; /* ret */

}

/**
 * sub_000FE910
 * Original: 0x000FE910 - 0x000FE92E (30 bytes, 10 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_000FE910(void)
{
    double _fp_stack[8];
    int _fp_top = 0;
    #define fp_push(v) (_fp_stack[--_fp_top & 7] = (v))
    #define fp_pop() (_fp_top++)
    #define fp_popp() (fp_pop())
    #define fp_top() _fp_stack[_fp_top & 7]
    #define fp_st1() _fp_stack[(_fp_top + 1) & 7]

loc_000FE910: ;
    PUSH32(esp, esi);
    esi = MEM32(esp + 8);
    eax = (uint32_t)(int32_t)SMEM16(esi + 0x52);
    MEM32(esp + 8) = eax;
    fp_push((double)SMEM32(esp + 8)); /* fild */
    fp_st1() *= fp_top(); fp_pop(); /* fmul */
    PUSH32(esp, 0); sub_00471288(); /* call 0x00471288 */

loc_000FE929: ;
    MEM8(esi + 0x4F) = LO8(eax);
    POP32(esp, esi);
    esp += 4; return; /* ret */

    #undef fp_push
    #undef fp_pop
    #undef fp_popp
    #undef fp_top
    #undef fp_st1
}

/**
 * sub_000FE930
 * Original: 0x000FE930 - 0x000FE95E (46 bytes, 16 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_000FE930(void)
{
    int _flags = 0; /* fallback flag var */

loc_000FE930: ;
    ecx = MEM32(esp + 4);
    eax = ZX8(MEM8(ecx + 0x50));
    edx = (uint32_t)(int32_t)SMEM16(esp + 8);
    if (CMP_NE(edx, eax)) goto loc_000FE95D; /* jne: not equal / not zero */

loc_000FE941: ;
    edx = ZX8(MEM8(ecx + 0x4D));
    PUSH32(esp, eax);
    eax = ZX8(MEM8(ecx + 0x4C));
    PUSH32(esp, eax);
    eax = ZX8(MEM8(ecx + 0x4E));
    ecx = ZX8(MEM8(ecx + 0x4F));
    PUSH32(esp, edx);
    PUSH32(esp, ecx);
    PUSH32(esp, 0); sub_000FBC80(); /* call 0x000FBC80 */

loc_000FE95A: ;
    esp = esp + 0x10;

loc_000FE95D: ;
    esp += 4; return; /* ret */

}

/**
 * sub_000FE960
 * Original: 0x000FE960 - 0x000FE9BD (93 bytes, 18 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_000FE960(void)
{
    uint32_t ebp;
    float xmm0;
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_000FE960: ;
    xmm0 = 0.0f; /* xorps self = zero */
    edx = 0; /* xor self */
    ecx = 0; /* xor self */
    MEM32(0x771C18) = ecx;
    MEM32(0x771C1C) = ecx;
    MEM32(0x771C20) = ecx;
    MEM32(0x771C24) = ecx;
    MEM32(0x771C28) = ecx;
    MEM32(0x771C2C) = ecx;
    MEM32(0x771C30) = ecx;
    MEM16(0x771BE0) = LO16(edx);
    MEM8(0x771C38) = LO8(edx);
    eax = 0x771C50;
    MEM32(0x771BEC) = edx;
    MEM32(0x771C34) = ecx;
    MEM32(0x771C44) = edx;
    MEM32(0x771C48) = edx;
    g_seh_ebp = ebp; sub_000FE9C0(); return; /* tail jmp 0x000FE9C0 */

}

/**
 * sub_000FEA00
 * Original: 0x000FEA00 - 0x000FEA37 (55 bytes, 17 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_000FEA00(void)
{
    uint32_t ebp;
    int _flags = 0; /* fallback flag var */
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_000FEA00: ;
    eax = MEM32(esp + 0xC);
    edx = MEM32(esp + 4);
    eax = (uint32_t)((int32_t)eax * (int32_t)0x6D0);
    esp = esp - 0x10;
    PUSH32(esp, ebx);
    ebx = MEM32(0x84A5F8);
    ecx = eax + ebx;
    SET_LO8(eax, MEM8(ecx + 0x3A9));
    (void)0; /* test LO8(eax), LO8(eax) - flags set for next jcc */
    PUSH32(esp, ebp);
    PUSH32(esp, esi);
    PUSH32(esp, edi);
    if (TEST_Z(LO8(eax), LO8(eax))) { sub_000FEA37(); return; } /* je: equal / zero */

loc_000FEA28: ;
    esi = MEM32(ecx + 0x50C);
    eax = ZX8(LO8(eax));
    esi = MEM32(esi + eax * 4 + -4);
    g_seh_ebp = ebp; sub_000FEA3F(); return; /* tail jmp 0x000FEA3F */

}

/**
 * sub_000FED10
 * Original: 0x000FED10 - 0x000FED45 (53 bytes, 14 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_000FED10(void)
{
    uint32_t ebp;
    int _flags = 0; /* fallback flag var */
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_000FED10: ;
    ecx = MEM32(0x84A5F8);
    eax = (uint32_t)((int32_t)eax * (int32_t)0x6D0);
    SET_LO8(edx, MEM8(eax + ecx + 0x3A9));
    esp = esp - 8;
    (void)0; /* test LO8(edx), LO8(edx) - flags set for next jcc */
    PUSH32(esp, ebx);
    PUSH32(esp, esi);
    PUSH32(esp, edi);
    edi = ZX8(MEM8(eax + ecx + 0x511));
    if (TEST_Z(LO8(edx), LO8(edx))) { sub_000FED45(); return; } /* je: equal / zero */

loc_000FED35: ;
    esi = MEM32(eax + ecx + 0x50C);
    edx = ZX8(LO8(edx));
    esi = MEM32(esi + edx * 4 + -4);
    g_seh_ebp = ebp; sub_000FED4E(); return; /* tail jmp 0x000FED4E */

}

/**
 * sub_000FEE20
 * Original: 0x000FEE20 - 0x000FEED5 (181 bytes, 73 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_000FEE20(void)
{
    uint32_t ebp;
    int _flags = 0; /* fallback flag var */
    float xmm0;
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_000FEE20: ;
    eax = MEM32(esp + 0xC);
    esp = esp - 8;
    PUSH32(esp, ebp);
    PUSH32(esp, esi);
    esi = 0; /* xor self */
    ebp = 0; /* xor self */
    if (TEST_Z(eax, eax)) goto loc_000FEECF; /* je: equal / zero */

loc_000FEE35: ;
    PUSH32(esp, ebx);
    PUSH32(esp, edi);
    edi = 0; /* xor self */
    ebx = 0; /* xor self */
    goto loc_000FEE40;

    /* nop */

loc_000FEE40: ;
    eax = MEM32(esp + 0x1C);
    eax = MEM32(eax + 0x10);
    if (TEST_Z(eax, eax)) goto loc_000FEE4F; /* je: equal / zero */

loc_000FEE4B: ;
    ecx = MEM32(eax);
    goto loc_000FEE51;

loc_000FEE4F: ;
    ecx = 0; /* xor self */

loc_000FEE51: ;
    if (CMP_GE(edi, ecx)) goto loc_000FEECD; /* jge: greater or equal (signed >=) */

loc_000FEE55: ;
    if (TEST_Z(eax, eax)) goto loc_000FEE66; /* je: equal / zero */

loc_000FEE59: ;
    if (TEST_S(ebx, ebx)) goto loc_000FEE66; /* jl: less (signed <) */

loc_000FEE5D: ;
    if (CMP_AE(edi, MEM32(eax))) goto loc_000FEEC9; /* jae: above or equal (unsigned >=) */

loc_000FEE61: ;
    esi = MEM32(eax + 4);
    esi = esi + ebx;

loc_000FEE66: ;
    if (TEST_Z(esi, esi)) goto loc_000FEE6C; /* je: equal / zero */

loc_000FEE6A: ;
    ebp = MEM32(esi);

loc_000FEE6C: ;
    ecx = MEM32(esp + 0x24);
    PUSH32(esp, ecx);
    PUSH32(esp, ebp);
    PUSH32(esp, 0); sub_0046F260(); /* call 0x0046F260 */

loc_000FEE77: ;
    esp = esp + 8;
    if (TEST_Z(eax, eax)) goto loc_000FEEC0; /* je: equal / zero */

loc_000FEE7E: ;
    edx = MEM32(esp + 0x1C);
    ecx = MEM32(edx + 0x10);
    if (TEST_Z(ecx, ecx)) goto loc_000FEEC0; /* je: equal / zero */

loc_000FEE89: ;
    if (TEST_S(ebx, ebx)) goto loc_000FEEC0; /* jl: less (signed <) */

loc_000FEE8D: ;
    edx = esp + 0x10;
    eax = edi;
    PUSH32(esp, 0); sub_00416030(); /* call 0x00416030 */

loc_000FEE98: ;
    if (TEST_Z(eax, eax)) goto loc_000FEEC0; /* je: equal / zero */

loc_000FEE9C: ;
    eax = MEM32(esp + 0x10);
    if (TEST_Z(eax, eax)) goto loc_000FEEAB; /* je: equal / zero */

loc_000FEEA4: ;
    eax = MEM32(eax + 8);
    MEM32(esp + 0x14) = eax;

loc_000FEEAB: ;
    ecx = MEM32(esp + 0x20);
    edx = MEM32(ecx);
    eax = MEM32(esp + 0x14);
    xmm0 = MEMF(esp + 0x28); /* movss */
    MEMF(eax + edx) = xmm0; /* movss */

loc_000FEEC0: ;
    edi++;
    ebx = ebx + 0xC;
    goto loc_000FEE40;

loc_000FEEC9: ;
    esi = 0; /* xor self */
    goto loc_000FEE6C;

loc_000FEECD: ;
    POP32(esp, edi);
    POP32(esp, ebx);

loc_000FEECF: ;
    POP32(esp, esi);
    POP32(esp, ebp);
    esp = esp + 8;
    esp += 4; return; /* ret */

}

/**
 * sub_000FEEE0
 * Original: 0x000FEEE0 - 0x000FEF7D (157 bytes, 56 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_000FEEE0(void)
{
    uint32_t ebp;
    int _flags = 0; /* fallback flag var */
    float xmm0;
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_000FEEE0: ;
    PUSH32(esp, ecx);
    ecx = MEM32(0x84A5F8);
    eax = ZX8(MEM8(ecx + 0x511));
    (void)0; /* test eax, eax - flags set for next jcc */
    PUSH32(esp, ebx);
    ebx = MEM32(esp + 0x14);
    if (TEST_NZ(eax, eax)) goto loc_000FEEFE; /* jne: not equal / not zero */

loc_000FEEF7: ;
    eax = 1;
    (void)0; /* test eax, eax - flags set for next jcc */

loc_000FEEFE: ;
    if (CMP_LE(eax & eax, 0)) goto loc_000FEF7A; /* jle: less or equal (signed <=) */

loc_000FEF00: ;
    PUSH32(esp, ebp);
    ebp = MEM32(esp + 0x1C);
    PUSH32(esp, esi);
    PUSH32(esp, edi);
    esi = 0x4C4;
    MEM32(esp + 0x10) = eax;

loc_000FEF10: ;
    eax = MEM32(esi + ecx + -20);
    eax = MEM32(eax + 0x24);
    if (TEST_Z(eax, eax)) goto loc_000FEF69; /* je: equal / zero */

loc_000FEF1B: ;
    (void)0; /* cmp ebx, 0xFFFFFFFFu - flags set for next jcc */
    edi = MEM32(eax + 8);
    if (CMP_EQ(ebx, 0xFFFFFFFFu)) goto loc_000FEF38; /* je: equal / zero */

loc_000FEF23: ;
    ecx = MEM32(esi + ecx);
    PUSH32(esp, ebp);
    PUSH32(esp, ebx);
    PUSH32(esp, ecx);
    PUSH32(esp, edi);
    PUSH32(esp, 0); sub_000FEE20(); /* call 0x000FEE20 */

loc_000FEF2F: ;
    ecx = MEM32(0x84A5F8);
    esp = esp + 0x10;

loc_000FEF38: ;
    eax = MEM32(esp + 0x1C);
    if (CMP_EQ(eax, 0xFFFFFFFFu)) goto loc_000FEF69; /* je: equal / zero */

loc_000FEF41: ;
    xmm0 = MEMF(0x648D14); /* movss */
    xmm0 = xmm0 - MEMF(esp + 0x24); /* subss */
    edx = MEM32(esi + ecx);
    PUSH32(esp, ecx);
    MEMF(esp) = xmm0; /* movss */
    PUSH32(esp, eax);
    PUSH32(esp, edx);
    PUSH32(esp, edi);
    PUSH32(esp, 0); sub_000FEE20(); /* call 0x000FEE20 */

loc_000FEF60: ;
    ecx = MEM32(0x84A5F8);
    esp = esp + 0x10;

loc_000FEF69: ;
    eax = MEM32(esp + 0x10);
    esi = esi + 4;
    eax--;
    MEM32(esp + 0x10) = eax;
    if ((eax != 0)) goto loc_000FEF10; /* jne: not equal / not zero */

loc_000FEF77: ;
    POP32(esp, edi);
    POP32(esp, esi);
    POP32(esp, ebp);

loc_000FEF7A: ;
    POP32(esp, ebx);
    POP32(esp, ecx);
    esp += 4; return; /* ret */

}

/**
 * sub_000FEF80
 * Original: 0x000FEF80 - 0x000FEFFA (122 bytes, 46 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_000FEF80(void)
{
    uint32_t ebp;
    int _flags = 0; /* fallback flag var */
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_000FEF80: ;
    PUSH32(esp, ecx);
    ecx = MEM32(0x84A5F8);
    eax = ZX8(MEM8(ecx + 0x511));
    (void)0; /* test eax, eax - flags set for next jcc */
    PUSH32(esp, ebp);
    ebp = MEM32(esp + 0x10);
    if (TEST_NZ(eax, eax)) goto loc_000FEF9E; /* jne: not equal / not zero */

loc_000FEF97: ;
    eax = 1;
    (void)0; /* test eax, eax - flags set for next jcc */

loc_000FEF9E: ;
    if (CMP_LE(eax & eax, 0)) goto loc_000FEFF7; /* jle: less or equal (signed <=) */

loc_000FEFA0: ;
    PUSH32(esp, esi);
    PUSH32(esp, edi);
    esi = 0x4C4;
    MEM32(esp + 0xC) = eax;
    goto loc_000FEFB0;

    /* nop */

loc_000FEFB0: ;
    eax = MEM32(esi + ecx + -20);
    eax = MEM32(eax + 0x24);
    if (TEST_Z(eax, eax)) goto loc_000FEFE7; /* je: equal / zero */

loc_000FEFBB: ;
    ecx = MEM32(esi + ecx);
    edi = MEM32(eax + 8);
    PUSH32(esp, 0);
    PUSH32(esp, ebp);
    PUSH32(esp, ecx);
    PUSH32(esp, edi);
    PUSH32(esp, 0); sub_000FEE20(); /* call 0x000FEE20 */

loc_000FEFCB: ;
    edx = MEM32(0x84A5F8);
    eax = MEM32(esi + edx);
    PUSH32(esp, 0);
    PUSH32(esp, ebx);
    PUSH32(esp, eax);
    PUSH32(esp, edi);
    PUSH32(esp, 0); sub_000FEE20(); /* call 0x000FEE20 */

loc_000FEFDE: ;
    ecx = MEM32(0x84A5F8);
    esp = esp + 0x20;

loc_000FEFE7: ;
    eax = MEM32(esp + 0xC);
    esi = esi + 4;
    eax--;
    MEM32(esp + 0xC) = eax;
    if ((eax != 0)) goto loc_000FEFB0; /* jne: not equal / not zero */

loc_000FEFF5: ;
    POP32(esp, edi);
    POP32(esp, esi);

loc_000FEFF7: ;
    POP32(esp, ebp);
    POP32(esp, ecx);
    esp += 4; return; /* ret */

}

/**
 * sub_000FF000
 * Original: 0x000FF000 - 0x000FF039 (57 bytes, 15 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_000FF000(void)
{
    int _flags = 0; /* fallback flag var */
    float xmm0;

loc_000FF000: ;
    edx = MEM32(0x84A5F8);
    eax = (uint32_t)((int32_t)eax * (int32_t)0x6D0);
    SET_LO8(ecx, MEM8(esp + 4));
    eax = eax + edx;
    MEM8(eax + 0x248) = LO8(ecx);
    eax = MEM32(eax + 0x46C);
    if (TEST_Z(eax, eax)) goto loc_000FF038; /* je: equal / zero */

loc_000FF022: ;
    SET_LO8(edx, MEM8(esp + 8));
    MEMF(eax) = xmm0; /* movss */
    MEM8(eax + 0xB) = 1;
    MEM8(eax + 0xA) = 2;
    MEM8(eax + 8) = LO8(edx);
    MEM8(eax + 9) = LO8(ecx);

loc_000FF038: ;
    esp += 4; return; /* ret */

}

/**
 * sub_000FF040
 * Original: 0x000FF040 - 0x000FF061 (33 bytes, 11 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_000FF040(void)
{
    uint32_t ebp;
    int _flags = 0; /* fallback flag var */
    float xmm0;
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_000FF040: ;
    esp = esp - 0x14;
    PUSH32(esp, ebp);
    ebp = MEM32(esp + 0x1C);
    eax = MEM32(ebp + 0x4C);
    if (TEST_NZ(eax, eax)) { sub_000FF061(); return; } /* jne: not equal / not zero */

loc_000FF04F: ;
    xmm0 = MEMF(0x648D34); /* movss */
    MEMF(ebp + 0x30) = xmm0; /* movss */
    POP32(esp, ebp);
    esp = esp + 0x14;
    esp += 4; return; /* ret */

}

/**
 * sub_000FF2F0
 * Original: 0x000FF2F0 - 0x000FF6B8 (968 bytes, 275 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_000FF2F0(void)
{
    uint32_t ebp;
    int _flags = 0; /* fallback flag var */
    int _fpu_cmp = 0; /* FPU compare result: -1/0/1 */
    float xmm0, xmm1, xmm2, xmm3, xmm5, xmm6, xmm7;
    double _fp_stack[8];
    int _fp_top = 0;
    #define fp_push(v) (_fp_stack[--_fp_top & 7] = (v))
    #define fp_pop() (_fp_top++)
    #define fp_popp() (fp_pop())
    #define fp_top() _fp_stack[_fp_top & 7]
    #define fp_st1() _fp_stack[(_fp_top + 1) & 7]

loc_000FF2F0: ;
    PUSH32(esp, ebp);
    ebp = esp;
    esp = esp & 0xFFFFFFF0u;
    esp = esp - 0xD4;
    PUSH32(esp, ebx);
    ebx = MEM32(ebp + 8);
    (void)0; /* cmp MEM8(ebx + 0x14), 1 - flags set for next jcc */
    PUSH32(esp, esi);
    PUSH32(esp, edi);
    if (CMP_EQ(MEM8(ebx + 0x14), 1)) goto loc_000FF6B1; /* je: equal / zero */

loc_000FF30C: ;
    eax = MEM32(ebp + 0xC);
    fp_push((double)SMEM32(ebp + 0xC)); /* fild */
    if (CMP_GE(eax & eax, 0)) goto loc_000FF31C; /* jge: greater or equal (signed >=) */

loc_000FF316: ;
    fp_st1() += fp_top(); fp_pop(); /* fadd */

loc_000FF31C: ;
    fp_push(MEMF(0x648D14)); /* fld float */
    { double _t = fp_top(); fp_top() = fp_st1(); fp_st1() = _t; } /* fxch */
    _fpu_cmp = (fp_top() < fp_st1()) ? -1 : (fp_top() > fp_st1()) ? 1 : 0; fp_pop(); /* fcompi */
    /* fstp st(0) */
    if ((_fpu_cmp <= 0) /* fcompi */) goto loc_000FF6B1; /* jbe: below or equal (unsigned <=) */

loc_000FF32E: ;
    edi = edi;

loc_000FF330: ;
    eax = 0; /* xor self */
    SET_LO8(eax, MEM8(ebx + 0x15));
    edi = 0; /* xor self */
    eax = eax & 3;
    eax = eax - edi;
    if ((eax == 0)) goto loc_000FF540; /* je: equal / zero */

loc_000FF342: ;
    eax--;
    if ((eax == 0)) goto loc_000FF476; /* je: equal / zero */

loc_000FF349: ;
    eax--;
    if ((eax == 0)) goto loc_000FF360; /* je: equal / zero */

loc_000FF34C: ;
    ecx = (uint32_t)(int32_t)SMEM16(ebx);
    edx = (uint32_t)(int32_t)SMEM16(ebx + 4);
    xmm1 = (float)(int32_t)ecx; /* cvtsi2ss */
    xmm2 = (float)(int32_t)edx; /* cvtsi2ss */
    goto loc_000FF52A;

loc_000FF360: ;
    fp_push(MEMF(ebx + 0x10)); /* fld float */
    fp_st1() *= fp_top(); fp_pop(); /* fmul */
    PUSH32(esp, 0); sub_00471288(); /* call 0x00471288 */

loc_000FF36E: ;
    ecx = 0; /* xor self */
    SET_LO8(ecx, LO8(eax));
    SET_LO8(ecx, LO8(ecx) - 0x40);
    SET_LO8(edx, LO8(ecx));
    SET_LO8(edx, LO8(edx) & 0xC0);
    if (TEST_Z(LO8(ecx), 0x40)) goto loc_000FF38B; /* je: equal / zero */

loc_000FF37F: ;
    ecx = ecx & 0x3F;
    esi = 0x40;
    esi = esi - ecx;
    goto loc_000FF390;

loc_000FF38B: ;
    ecx = ecx & 0x3F;
    esi = ecx;

loc_000FF390: ;
    if (TEST_Z(LO8(edx), LO8(edx))) goto loc_000FF3A7; /* je: equal / zero */

loc_000FF394: ;
    if (CMP_EQ(LO8(edx), 0xC0)) goto loc_000FF3A7; /* je: equal / zero */

loc_000FF399: ;
    xmm0 = 0.0f; /* xorps self = zero */
    xmm0 = xmm0 - MEMF(esi * 4 + 0x743090); /* subss */
    goto loc_000FF3B0;

loc_000FF3A7: ;
    xmm0 = MEMF(esi * 4 + 0x743090); /* movss */

loc_000FF3B0: ;
    SET_LO8(edx, LO8(eax));
    SET_LO8(edx, LO8(edx) & 0xC0);
    (void)0; /* test LO8(eax), 0x40 - flags set for next jcc */
    MEMF(esp + 0x1C) = xmm0; /* movss */
    if (TEST_Z(LO8(eax), 0x40)) goto loc_000FF3CB; /* je: equal / zero */

loc_000FF3BF: ;
    eax = eax & 0x3F;
    ecx = 0x40;
    ecx = ecx - eax;
    goto loc_000FF3D0;

loc_000FF3CB: ;
    eax = eax & 0x3F;
    ecx = eax;

loc_000FF3D0: ;
    if (TEST_Z(LO8(edx), LO8(edx))) goto loc_000FF3E7; /* je: equal / zero */

loc_000FF3D4: ;
    if (CMP_EQ(LO8(edx), 0xC0)) goto loc_000FF3E7; /* je: equal / zero */

loc_000FF3D9: ;
    xmm7 = 0.0f; /* xorps self = zero */
    xmm7 = xmm7 - MEMF(ecx * 4 + 0x743090); /* subss */
    goto loc_000FF3F0;

loc_000FF3E7: ;
    xmm7 = MEMF(ecx * 4 + 0x743090); /* movss */

loc_000FF3F0: ;
    eax = (uint32_t)(int32_t)SMEM16(ebx + 6);
    xmm6 = (float)(int32_t)eax; /* cvtsi2ss */
    PUSH32(esp, 0); sub_003E1D70(); /* call 0x003E1D70 */

loc_000FF3FD: ;
    ecx = (uint32_t)(int32_t)SMEM16(ebx + 0xA);
    xmm5 = xmm0; /* movaps */
    xmm0 = xmm6; /* movaps */
    xmm0 = xmm0 * MEMF(0x648CE0); /* mulss */
    xmm5 = xmm5 * xmm0; /* mulss */
    xmm5 = xmm5 - xmm6; /* subss */
    xmm6 = (float)(int32_t)ecx; /* cvtsi2ss */
    PUSH32(esp, 0); sub_003E1D70(); /* call 0x003E1D70 */

loc_000FF420: ;
    xmm2 = MEMF(esp + 0x1C); /* movss */
    eax = (uint32_t)(int32_t)SMEM16(ebx + 4);
    edx = (uint32_t)(int32_t)SMEM16(ebx);
    xmm1 = xmm6; /* movaps */
    xmm1 = xmm1 * MEMF(0x648CE0); /* mulss */
    xmm0 = xmm0 * xmm1; /* mulss */
    xmm0 = xmm0 - xmm6; /* subss */
    xmm3 = xmm0; /* movaps */
    xmm3 = xmm3 * xmm2; /* mulss */
    xmm1 = xmm5; /* movaps */
    xmm5 = xmm5 * xmm2; /* mulss */
    xmm1 = xmm1 * xmm7; /* mulss */
    xmm0 = xmm0 * xmm7; /* mulss */
    xmm1 = xmm1 + xmm3; /* addss */
    xmm2 = (float)(int32_t)eax; /* cvtsi2ss */
    xmm0 = xmm0 - xmm5; /* subss */
    xmm3 = (float)(int32_t)edx; /* cvtsi2ss */
    xmm0 = xmm0 + xmm2; /* addss */
    xmm1 = xmm1 + xmm3; /* addss */
    xmm2 = xmm0; /* movaps */
    goto loc_000FF5F4;

loc_000FF476: ;
    PUSH32(esp, 0); sub_003E2480(); /* call 0x003E2480 */

loc_000FF47B: ;
    ecx = 0; /* xor self */
    SET_LO8(ecx, LO8(eax));
    SET_LO8(ecx, LO8(ecx) - 0x40);
    SET_LO8(edx, LO8(ecx));
    SET_LO8(edx, LO8(edx) & 0xC0);
    if (TEST_Z(LO8(ecx), 0x40)) goto loc_000FF498; /* je: equal / zero */

loc_000FF48C: ;
    ecx = ecx & 0x3F;
    esi = 0x40;
    esi = esi - ecx;
    goto loc_000FF49D;

loc_000FF498: ;
    ecx = ecx & 0x3F;
    esi = ecx;

loc_000FF49D: ;
    if (TEST_Z(LO8(edx), LO8(edx))) goto loc_000FF4B4; /* je: equal / zero */

loc_000FF4A1: ;
    if (CMP_EQ(LO8(edx), 0xC0)) goto loc_000FF4B4; /* je: equal / zero */

loc_000FF4A6: ;
    xmm6 = 0.0f; /* xorps self = zero */
    xmm6 = xmm6 - MEMF(esi * 4 + 0x743090); /* subss */
    goto loc_000FF4BD;

loc_000FF4B4: ;
    xmm6 = MEMF(esi * 4 + 0x743090); /* movss */

loc_000FF4BD: ;
    SET_LO8(edx, LO8(eax));
    SET_LO8(edx, LO8(edx) & 0xC0);
    if (TEST_Z(LO8(eax), 0x40)) goto loc_000FF4D2; /* je: equal / zero */

loc_000FF4C6: ;
    eax = eax & 0x3F;
    ecx = 0x40;
    ecx = ecx - eax;
    goto loc_000FF4D7;

loc_000FF4D2: ;
    eax = eax & 0x3F;
    ecx = eax;

loc_000FF4D7: ;
    if (TEST_Z(LO8(edx), LO8(edx))) goto loc_000FF4EE; /* je: equal / zero */

loc_000FF4DB: ;
    if (CMP_EQ(LO8(edx), 0xC0)) goto loc_000FF4EE; /* je: equal / zero */

loc_000FF4E0: ;
    xmm5 = 0.0f; /* xorps self = zero */
    xmm5 = xmm5 - MEMF(ecx * 4 + 0x743090); /* subss */
    goto loc_000FF4F7;

loc_000FF4EE: ;
    xmm5 = MEMF(ecx * 4 + 0x743090); /* movss */

loc_000FF4F7: ;
    PUSH32(esp, 0); sub_003E1D70(); /* call 0x003E1D70 */

loc_000FF4FC: ;
    edx = (uint32_t)(int32_t)SMEM16(ebx + 6);
    eax = (uint32_t)(int32_t)SMEM16(ebx);
    ecx = (uint32_t)(int32_t)SMEM16(ebx + 4);
    xmm1 = (float)(int32_t)edx; /* cvtsi2ss */
    xmm0 = xmm0 * xmm1; /* mulss */
    xmm1 = xmm0; /* movaps */
    xmm2 = (float)(int32_t)eax; /* cvtsi2ss */
    xmm1 = xmm1 * xmm5; /* mulss */
    xmm1 = xmm1 + xmm2; /* addss */
    xmm2 = (float)(int32_t)ecx; /* cvtsi2ss */
    xmm0 = xmm0 * xmm6; /* mulss */
    xmm2 = xmm2 - xmm0; /* subss */

loc_000FF52A: ;
    ecx = (uint32_t)(int32_t)SMEM16(ebx + 8);
    eax = (uint32_t)(int32_t)SMEM16(ebx + 2);
    edx = eax + ecx;
    xmm0 = (float)(int32_t)edx; /* cvtsi2ss */
    eax = eax - ecx;
    goto loc_000FF602;

loc_000FF540: ;
    PUSH32(esp, 0); sub_003E2480(); /* call 0x003E2480 */

loc_000FF545: ;
    ecx = 0; /* xor self */
    SET_LO8(ecx, LO8(eax));
    SET_LO8(ecx, LO8(ecx) - 0x40);
    SET_LO8(edx, LO8(ecx));
    SET_LO8(edx, LO8(edx) & 0xC0);
    if (TEST_Z(LO8(ecx), 0x40)) goto loc_000FF562; /* je: equal / zero */

loc_000FF556: ;
    ecx = ecx & 0x3F;
    esi = 0x40;
    esi = esi - ecx;
    goto loc_000FF567;

loc_000FF562: ;
    ecx = ecx & 0x3F;
    esi = ecx;

loc_000FF567: ;
    if (TEST_Z(LO8(edx), LO8(edx))) goto loc_000FF57E; /* je: equal / zero */

loc_000FF56B: ;
    if (CMP_EQ(LO8(edx), 0xC0)) goto loc_000FF57E; /* je: equal / zero */

loc_000FF570: ;
    xmm6 = 0.0f; /* xorps self = zero */
    xmm6 = xmm6 - MEMF(esi * 4 + 0x743090); /* subss */
    goto loc_000FF587;

loc_000FF57E: ;
    xmm6 = MEMF(esi * 4 + 0x743090); /* movss */

loc_000FF587: ;
    SET_LO8(edx, LO8(eax));
    SET_LO8(edx, LO8(edx) & 0xC0);
    if (TEST_Z(LO8(eax), 0x40)) goto loc_000FF59C; /* je: equal / zero */

loc_000FF590: ;
    eax = eax & 0x3F;
    ecx = 0x40;
    ecx = ecx - eax;
    goto loc_000FF5A1;

loc_000FF59C: ;
    eax = eax & 0x3F;
    ecx = eax;

loc_000FF5A1: ;
    if (TEST_Z(LO8(edx), LO8(edx))) goto loc_000FF5B8; /* je: equal / zero */

loc_000FF5A5: ;
    if (CMP_EQ(LO8(edx), 0xC0)) goto loc_000FF5B8; /* je: equal / zero */

loc_000FF5AA: ;
    xmm5 = 0.0f; /* xorps self = zero */
    xmm5 = xmm5 - MEMF(ecx * 4 + 0x743090); /* subss */
    goto loc_000FF5C1;

loc_000FF5B8: ;
    xmm5 = MEMF(ecx * 4 + 0x743090); /* movss */

loc_000FF5C1: ;
    PUSH32(esp, 0); sub_003E1D70(); /* call 0x003E1D70 */

loc_000FF5C6: ;
    eax = (uint32_t)(int32_t)SMEM16(ebx + 6);
    ecx = (uint32_t)(int32_t)SMEM16(ebx);
    edx = (uint32_t)(int32_t)SMEM16(ebx + 4);
    xmm1 = (float)(int32_t)eax; /* cvtsi2ss */
    xmm0 = xmm0 * xmm1; /* mulss */
    xmm1 = xmm0; /* movaps */
    xmm2 = (float)(int32_t)ecx; /* cvtsi2ss */
    xmm1 = xmm1 * xmm5; /* mulss */
    xmm1 = xmm1 + xmm2; /* addss */
    xmm2 = (float)(int32_t)edx; /* cvtsi2ss */
    xmm0 = xmm0 * xmm6; /* mulss */
    xmm2 = xmm2 - xmm0; /* subss */

loc_000FF5F4: ;
    ecx = (uint32_t)(int32_t)SMEM16(ebx + 8);
    eax = (uint32_t)(int32_t)SMEM16(ebx + 2);
    ecx = ecx + eax;
    xmm0 = (float)(int32_t)ecx; /* cvtsi2ss */

loc_000FF602: ;
    xmm3 = (float)(int32_t)eax; /* cvtsi2ss */
    MEM32(esp + 0xD0) = edi;
    MEM32(esp + 0xD8) = edi;
    eax = 0; /* xor self */
    MEMF(esp + 0x18) = xmm3; /* movss */
    xmm3 = MEMF(0x648E60); /* movss */
    ecx = 0x24;
    edi = esp + 0x40;
    MEMF(esp + 0x30) = xmm3; /* movss */
    MEM8(esp + 0xD4) = 0;
    MEM8(esp + 0xD5) = 0;
    { uint32_t _i; for (_i = 0; _i < ecx; _i++) MEM32(edi + _i*4) = eax; }
    edi += ecx * 4; ecx = 0; /* rep stosd */
    SET_LO8(eax, MEM8(ebp + 0x10));
    if (TEST_Z(LO8(eax), LO8(eax))) goto loc_000FF677; /* je: equal / zero */

loc_000FF64C: ;
    edx = MEM32(esp + 0x18);
    PUSH32(esp, 0);
    PUSH32(esp, edx);
    PUSH32(esp, 0);
    esi = esp + 0x3C;
    edi = esp + 0x2C;
    MEMF(esp + 0x2C) = xmm1; /* movss */
    MEMF(esp + 0x30) = xmm0; /* movss */
    MEMF(esp + 0x34) = xmm2; /* movss */
    PUSH32(esp, 0); sub_002A0180(); /* call 0x002A0180 */

loc_000FF674: ;
    esp = esp + 0xC;

loc_000FF677: ;
    PUSH32(esp, 0); sub_003E1D70(); /* call 0x003E1D70 */

loc_000FF67C: ;
    PUSH32(esp, 0); sub_003E1D70(); /* call 0x003E1D70 */

loc_000FF681: ;
    PUSH32(esp, 0); sub_003E2480(); /* call 0x003E2480 */

loc_000FF686: ;
    eax = MEM32(ebp + 0xC);
    eax--;
    (void)0; /* test eax, eax - flags set for next jcc */
    MEM32(esp + 0x2C) = eax;
    fp_push((double)SMEM32(esp + 0x2C)); /* fild */
    MEM32(ebp + 0xC) = eax;
    if (CMP_GE(eax & eax, 0)) goto loc_000FF69F; /* jge: greater or equal (signed >=) */

loc_000FF699: ;
    fp_st1() += fp_top(); fp_pop(); /* fadd */

loc_000FF69F: ;
    fp_push(MEMF(0x648D14)); /* fld float */
    { double _t = fp_top(); fp_top() = fp_st1(); fp_st1() = _t; } /* fxch */
    _fpu_cmp = (fp_top() < fp_st1()) ? -1 : (fp_top() > fp_st1()) ? 1 : 0; fp_pop(); /* fcompi */
    /* fstp st(0) */
    if ((_fpu_cmp > 0) /* fcompi */) goto loc_000FF330; /* ja: above (unsigned >) */

loc_000FF6B1: ;
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
 * sub_000FF6C0
 * Original: 0x000FF6C0 - 0x000FF70A (74 bytes, 22 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_000FF6C0(void)
{
    uint32_t ebp;
    int _flags = 0; /* fallback flag var */
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_000FF6C0: ;
    PUSH32(esp, esi);
    esi = MEM32(esp + 8);
    eax = MEM32(esi + 0x90);
    (void)0; /* cmp eax, 0xFFFFFFFFu - flags set for next jcc */
    PUSH32(esp, edi);
    edi = esi + 0x90;
    if (CMP_EQ(eax, 0xFFFFFFFFu)) goto loc_000FF6EB; /* je: equal / zero */

loc_000FF6D7: ;
    eax = MEM32(0x847024);
    ecx = MEM32(eax + 0x40);
    PUSH32(esp, ecx);
    ecx = MEM32(esi + 0x94);
    PUSH32(esp, 0); sub_000254D0(); /* call 0x000254D0 */

loc_000FF6EB: ;
    eax = esi + 0x3C;
    PUSH32(esp, 0); sub_001126F0(); /* call 0x001126F0 */

loc_000FF6F3: ;
    SET_LO8(eax, MEM8(0x8472BD));
    (void)0; /* test LO8(eax), LO8(eax) - flags set for next jcc */
    POP32(esp, edi);
    if (TEST_NZ(LO8(eax), LO8(eax))) { sub_000FF70A(); return; } /* jne: not equal / not zero */

loc_000FF6FD: ;
    eax = esi;
    edx = 1;
    POP32(esp, esi);
    g_seh_ebp = ebp; sub_000DA5E0(); return; /* tail jmp 0x000DA5E0 */

}

/**
 * sub_000FF710
 * Original: 0x000FF710 - 0x000FF74F (63 bytes, 20 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_000FF710(void)
{
    int _flags = 0; /* fallback flag var */

loc_000FF710: ;
    PUSH32(esp, esi);
    esi = MEM32(esp + 8);
    eax = MEM32(esi + 0x90);
    (void)0; /* cmp eax, 0xFFFFFFFFu - flags set for next jcc */
    PUSH32(esp, edi);
    edi = esi + 0x90;
    if (CMP_EQ(eax, 0xFFFFFFFFu)) goto loc_000FF73B; /* je: equal / zero */

loc_000FF727: ;
    eax = MEM32(0x847024);
    ecx = MEM32(eax + 0x40);
    PUSH32(esp, ecx);
    ecx = MEM32(esi + 0x94);
    PUSH32(esp, 0); sub_000254D0(); /* call 0x000254D0 */

loc_000FF73B: ;
    eax = esi + 0x3C;
    PUSH32(esp, 0); sub_001126F0(); /* call 0x001126F0 */

loc_000FF743: ;
    PUSH32(esp, esi);
    PUSH32(esp, 0); sub_000DAE40(); /* call 0x000DAE40 */

loc_000FF749: ;
    esp = esp + 4;
    POP32(esp, edi);
    POP32(esp, esi);
    esp += 4; return; /* ret */

}

/**
 * sub_000FF750
 * Original: 0x000FF750 - 0x000FF7CF (127 bytes, 53 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_000FF750(void)
{
    uint32_t ebp;
    int _flags = 0; /* fallback flag var */
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_000FF750: ;
    (void)0; /* cmp MEM32(esp + 0xC), 0x35 - flags set for next jcc */
    PUSH32(esp, esi);
    esi = MEM32(esp + 8);
    if (CMP_NE(MEM32(esp + 0xC), 0x35)) goto loc_000FF7CD; /* jne: not equal / not zero */

loc_000FF75C: ;
    PUSH32(esp, ebp);
    PUSH32(esp, edi);
    edi = MEM32(esp + 0x14);
    ebp = MEM32(edi);
    eax = 0; /* xor self */
    SET_LO8(ecx, 0); /* xor self */
    if (CMP_LE(ebp & ebp, 0)) goto loc_000FF7CB; /* jle: less or equal (signed <=) */

loc_000FF76C: ;
    /* nop */

loc_000FF770: ;
    if (TEST_NZ(LO8(ecx), LO8(ecx))) goto loc_000FF78C; /* jne: not equal / not zero */

loc_000FF774: ;
    edx = MEM32(edi + 4);
    SET_LO8(edx, MEM8(eax + edx));
    if (CMP_NE(LO8(edx), MEM8(esi + 0x50))) goto loc_000FF783; /* jne: not equal / not zero */

loc_000FF77F: ;
    SET_LO8(ecx, 1);
    goto loc_000FF784;

loc_000FF783: ;
    eax++;

loc_000FF784: ;
    if (CMP_L(eax, ebp)) goto loc_000FF770; /* jl: less (signed <) */

loc_000FF788: ;
    if (TEST_Z(LO8(ecx), LO8(ecx))) goto loc_000FF7CB; /* je: equal / zero */

loc_000FF78C: ;
    ecx = MEM32(esi + 0x4C);
    if (CMP_NE(MEM8(ecx + 0x14), 1)) goto loc_000FF7CB; /* jne: not equal / not zero */

loc_000FF795: ;
    edx = 0; /* xor self */
    SET_LO8(edx, MEM8(esi + 4));
    eax = 0; /* xor self */
    SET_LO8(eax, MEM8(esi + 0x58));
    PUSH32(esp, edx);
    edx = 0; /* xor self */
    SET_LO8(edx, LO8(eax));
    eax = eax & 0xFFFFFF01u;
    edx = edx & 0xFFFFFF02u;
    PUSH32(esp, edx);
    PUSH32(esp, eax);
    eax = MEM32(esi + 0x54);
    PUSH32(esp, eax);
    PUSH32(esp, ecx);
    PUSH32(esp, 0); sub_000FF7D0(); /* call 0x000FF7D0 */

loc_000FF7BB: ;
    ecx = MEM32(esi + 0x4C);
    MEM8(ecx + 0x14) = 0;
    edx = MEM32(edi + 8);
    esp = esp + 0x14;
    MEM32(esi + 0x5C) = edx;

loc_000FF7CB: ;
    POP32(esp, edi);
    POP32(esp, ebp);

loc_000FF7CD: ;
    POP32(esp, esi);
    esp += 4; return; /* ret */

}

/**
 * sub_000FF7D0
 * Original: 0x000FF7D0 - 0x000FFAC9 (761 bytes, 170 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_000FF7D0(void)
{
    uint32_t ebp;
    int _flags = 0; /* fallback flag var */
    float xmm0, xmm5;
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_000FF7D0: ;
    esp = esp - 0x148;
    PUSH32(esp, ebx);
    PUSH32(esp, ebp);
    ebp = MEM32(esp + 0x154);
    PUSH32(esp, esi);
    eax = esp + 0x40;
    PUSH32(esp, 0); sub_000AF180(); /* call 0x000AF180 */

loc_000FF7E9: ;
    xmm5 = 0.0f; /* xorps self = zero */
    MEMF(esp + 0x8C) = xmm5; /* movss */
    MEM32(esp + 0x88) = 0x303;
    MEM32(esp + 0x24) = ebp;
    MEMF(esp + 0x28) = xmm5; /* movss */
    PUSH32(esp, 0); sub_003E1D70(); /* call 0x003E1D70 */

loc_000FF80F: ;
    xmm0 = xmm0 * MEMF(0x6493A8); /* mulss */
    xmm0 = xmm0 - MEMF(0x64A438); /* subss */
    MEMF(esp + 0x2C) = xmm0; /* movss */
    PUSH32(esp, 0); sub_003E1D70(); /* call 0x003E1D70 */

loc_000FF82A: ;
    xmm0 = xmm0 * MEMF(0x64AAE8); /* mulss */
    xmm0 = xmm0 + MEMF(0x64AAE4); /* addss */
    esi = 0; /* xor self */
    MEMF(esp + 0x30) = xmm0; /* movss */
    MEM32(esp + 0x34) = esi;
    PUSH32(esp, 0); sub_003E2480(); /* call 0x003E2480 */

loc_000FF84B: ;
    MEM8(esp + 0x38) = LO8(eax);
    PUSH32(esp, 0); sub_003E2480(); /* call 0x003E2480 */

loc_000FF854: ;
    eax = eax & 0x80000003u;
    if (((int32_t)eax >= 0)) goto loc_000FF860; /* jns: not sign (positive) */

loc_000FF85B: ;
    eax--;
    eax = eax | 0xFFFFFFFCu;
    eax++;

loc_000FF860: ;
    edx = (uint32_t)(int32_t)SMEM16(ebp + 6);
    ecx = (int32_t)MEMF(0x7F9F5C); /* cvttss2si */
    SET_LO8(eax, LO8(eax) + 4);
    MEM8(esp + 0x39) = LO8(eax);
    SET_LO8(eax, MEM8(esp + 0x164));
    MEM8(esp + 0x3B) = LO8(eax);
    eax = 2;
    MEM32(esp + 0xA0) = eax;
    MEM32(esp + 0xA8) = eax;
    MEM32(esp + 0xBC) = eax;
    eax = (uint32_t)(int32_t)SMEM16(ebp + 8);
    ecx = ecx << 2;
    xmm0 = (float)(int32_t)edx; /* cvtsi2ss */
    edx = (uint32_t)(int32_t)SMEM16(ebp + 2);
    MEMF(esp + 0x44) = xmm0; /* movss */
    MEM16(esp + 0x42) = LO16(ecx);
    ecx = (uint32_t)(int32_t)SMEM16(ebp);
    xmm0 = (float)(int32_t)eax; /* cvtsi2ss */
    eax = (uint32_t)(int32_t)SMEM16(ebp + 4);
    MEMF(esp + 0x48) = xmm0; /* movss */
    xmm0 = (float)(int32_t)ecx; /* cvtsi2ss */
    ecx = MEM32(esp + 0x15C);
    MEMF(esp + 0x4C) = xmm0; /* movss */
    xmm0 = (float)(int32_t)edx; /* cvtsi2ss */
    edx = MEM32(esp + 0x168);
    PUSH32(esp, edx);
    PUSH32(esp, 0x1C);
    PUSH32(esp, esi);
    PUSH32(esp, esi);
    PUSH32(esp, esi);
    PUSH32(esp, 0x20);
    PUSH32(esp, esi);
    ebx = 0xFF;
    MEMF(esp + 0x6C) = xmm0; /* movss */
    xmm0 = (float)(int32_t)eax; /* cvtsi2ss */
    PUSH32(esp, 0x28);
    MEMF(esp + 0x74) = xmm0; /* movss */
    xmm0 = MEMF(0x648D14); /* movss */
    PUSH32(esp, esi);
    PUSH32(esp, 0x597978);
    eax = esp + 0x68;
    MEM8(esp + 0x62) = LO8(ebx);
    MEMF(esp + 0x64) = xmm5; /* movss */
    MEM32(esp + 0xBC) = 0x6B;
    MEM8(esp + 0x68) = 0xA;
    MEM32(esp + 0xD4) = esi;
    MEM32(esp + 0xD8) = 4;
    MEM32(esp + 0xE0) = esi;
    MEMF(esp + 0xC0) = xmm5; /* movss */
    MEMF(esp + 0xC4) = xmm5; /* movss */
    MEM32(esp + 0xE8) = esi;
    MEMF(esp + 0x80) = xmm5; /* movss */
    MEMF(esp + 0x84) = xmm5; /* movss */
    MEMF(esp + 0x88) = xmm5; /* movss */
    MEMF(esp + 0x8C) = xmm0; /* movss */
    MEMF(esp + 0x90) = xmm0; /* movss */
    MEMF(esp + 0x94) = xmm0; /* movss */
    MEM32(esp + 0x98) = 0x1E00009;
    MEM8(esp + 0xAC) = LO8(ebx);
    MEM8(esp + 0xAD) = LO8(ebx);
    MEM8(esp + 0xAE) = LO8(ebx);
    MEM8(esp + 0xAF) = LO8(ebx);
    MEM32(esp + 0x9C) = ecx;
    MEM8(esp + 0xA0) = LO8(ebx);
    PUSH32(esp, 0); sub_00150630(); /* call 0x00150630 */

loc_000FF9CD: ;
    esp = esp + 0x28;
    if (CMP_EQ(eax, esi)) goto loc_000FFA63; /* je: equal / zero */

loc_000FF9D8: ;
    PUSH32(esp, edi);
    edi = eax + 0x310;
    SET_LO8(eax, MEM8(esp + 0x164));
    (void)0; /* test LO8(eax), LO8(eax) - flags set for next jcc */
    MEM32(esp + 0x24) = edi;
    ecx = 7;
    esi = esp + 0x28;
    memcpy((void*)XBOX_PTR(edi), (void*)XBOX_PTR(esi), ecx * 4);
    esi += ecx * 4; edi += ecx * 4; ecx = 0; /* rep movsd */
    POP32(esp, edi);
    if (TEST_Z(LO8(eax), LO8(eax))) goto loc_000FFABF; /* je: equal / zero */

loc_000FF9FE: ;
    ecx = (uint32_t)(int32_t)SMEM16(ebp + 8);
    edx = (uint32_t)(int32_t)SMEM16(ebp + 2);
    eax = (uint32_t)(int32_t)SMEM16(ebp);
    ecx = (uint32_t)((int32_t)ecx >> 1);
    ecx = ecx + edx;
    MEM32(esp + 0x10) = ecx;
    ecx = MEM32(esp + 0x168);
    PUSH32(esp, ecx);
    PUSH32(esp, 0);
    PUSH32(esp, 0);
    PUSH32(esp, 0x7F);
    MEM32(esp + 0x1C) = eax;
    eax = (uint32_t)(int32_t)SMEM16(ebp + 4);
    PUSH32(esp, 0);
    PUSH32(esp, 0x79);
    edx = esp + 0x30;
    MEM32(esp + 0x2C) = eax;
    PUSH32(esp, ebx);
    PUSH32(esp, edx);
    SET_LO8(eax, 0xE);
    ecx = esp + 0x2C;
    MEM8(esp + 0x38) = 2;
    MEM8(esp + 0x39) = 2;
    MEM16(esp + 0x3A) = 0x12C;
    MEM8(esp + 0x3E) = 6;
    PUSH32(esp, 0); sub_00120000(); /* call 0x00120000 */

loc_000FFA57: ;
    ecx = MEM32(esp + 0x40);
    esp = esp + 0x20;
    MEM32(ecx + 0x10) = eax;
    esi = 0; /* xor self */

loc_000FFA63: ;
    SET_LO8(eax, MEM8(esp + 0x160));
    if (TEST_Z(LO8(eax), LO8(eax))) goto loc_000FFABF; /* je: equal / zero */

loc_000FFA6E: ;
    edx = (uint32_t)(int32_t)SMEM16(ebp);
    eax = (uint32_t)(int32_t)SMEM16(ebp + 2);
    ecx = (uint32_t)(int32_t)SMEM16(ebp + 4);
    PUSH32(esp, esi);
    PUSH32(esp, esi);
    PUSH32(esp, 0xFFFFFFFFu);
    xmm0 = (float)(int32_t)edx; /* cvtsi2ss */
    PUSH32(esp, esi);
    edx = esp + 0x1C;
    PUSH32(esp, edx);
    MEMF(esp + 0x20) = xmm0; /* movss */
    xmm0 = (float)(int32_t)eax; /* cvtsi2ss */
    eax = MEM32(0x847024);
    PUSH32(esp, 0xBF800000u);
    MEMF(esp + 0x28) = xmm0; /* movss */
    xmm0 = (float)(int32_t)ecx; /* cvtsi2ss */
    ecx = MEM32(eax + 0x40);
    PUSH32(esp, esi);
    PUSH32(esp, ecx);
    edx = 0; /* xor self */
    eax = ebp;
    ecx = 0x1AA;
    MEMF(esp + 0x34) = xmm0; /* movss */
    PUSH32(esp, 0); sub_00022D90(); /* call 0x00022D90 */

loc_000FFABF: ;
    POP32(esp, esi);
    POP32(esp, ebp);
    POP32(esp, ebx);
    esp = esp + 0x148;
    esp += 4; return; /* ret */

}

/**
 * sub_000FFAD0
 * Original: 0x000FFAD0 - 0x000FFCB5 (485 bytes, 119 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_000FFAD0(void)
{
    uint32_t ebp;
    float xmm0, xmm1, xmm2, xmm3, xmm4;
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_000FFAD0: ;
    PUSH32(esp, ebx);
    PUSH32(esp, ebp);
    PUSH32(esp, esi);
    PUSH32(esp, edi);
    edx = MEM32(esp + 0x14);
    xmm0 = MEMF(edx + 0x31C); /* movss */
    xmm0 = xmm0 + MEMF(edx + 0x314); /* addss */
    xmm2 = MEMF(edx + 0x40); /* movss */
    eax = (int32_t)MEMF(edx + 0x314); /* cvttss2si */
    esi = (uint32_t)(int32_t)SMEM16(esp + 0x18);
    esi = esi << 2;
    xmm1 = MEMF(esi + 0x77148C); /* movss */
    xmm1 = xmm1 * MEMF(edx + 0x38); /* mulss */
    xmm2 = xmm2 + xmm1; /* addss */
    xmm3 = MEMF(0x649204); /* movss */
    ecx = edx + 0x294;
    ebp = (int32_t)xmm0; /* cvttss2si */
    xmm0 = MEMF(esi + 0x77149C); /* movss */
    xmm0 = xmm0 * MEMF(edx + 0x38); /* mulss */
    esi = (int32_t)xmm2; /* cvttss2si */
    esi = SX16(LO16(esi));
    xmm2 = (float)(int32_t)esi; /* cvtsi2ss */
    MEMF(ecx) = xmm2; /* movss */
    esi = (int32_t)MEMF(edx + 0x44); /* cvttss2si */
    esi = SX16(LO16(esi));
    xmm2 = (float)(int32_t)esi; /* cvtsi2ss */
    MEMF(ecx + 4) = xmm2; /* movss */
    xmm2 = MEMF(edx + 0x48); /* movss */
    xmm2 = xmm2 - xmm0; /* subss */
    MEMF(ecx + 0x14) = xmm3; /* movss */
    esi = (int32_t)xmm2; /* cvttss2si */
    esi = SX16(LO16(esi));
    xmm2 = (float)(int32_t)esi; /* cvtsi2ss */
    MEMF(ecx + 8) = xmm2; /* movss */
    eax = SX16(LO16(eax));
    xmm2 = (float)(int32_t)eax; /* cvtsi2ss */
    MEMF(ecx + 0x10) = xmm2; /* movss */
    SET_LO8(eax, MEM8(edx + 0x326));
    MEM8(ecx + 0xF) = LO8(eax);
    eax = 0; /* xor self */
    MEM16(ecx + 0x18) = LO16(eax);
    xmm4 = MEMF(edx + 0x40); /* movss */
    xmm4 = xmm4 - xmm1; /* subss */
    esi = (int32_t)xmm4; /* cvttss2si */
    esi = SX16(LO16(esi));
    xmm4 = (float)(int32_t)esi; /* cvtsi2ss */
    MEMF(ecx + 0x1C) = xmm4; /* movss */
    esi = (int32_t)MEMF(edx + 0x44); /* cvttss2si */
    esi = SX16(LO16(esi));
    edi = ecx;
    ecx = ecx + 0x1C;
    xmm4 = (float)(int32_t)esi; /* cvtsi2ss */
    MEMF(ecx + 4) = xmm4; /* movss */
    xmm4 = MEMF(edx + 0x48); /* movss */
    xmm4 = xmm4 + xmm0; /* addss */
    MEMF(ecx + 0x10) = xmm2; /* movss */
    esi = (int32_t)xmm4; /* cvttss2si */
    esi = SX16(LO16(esi));
    xmm4 = (float)(int32_t)esi; /* cvtsi2ss */
    MEMF(ecx + 8) = xmm4; /* movss */
    xmm4 = 0.0f; /* xorps self = zero */
    MEMF(ecx + 0x14) = xmm4; /* movss */
    SET_LO8(ebx, MEM8(edx + 0x326));
    MEM8(ecx + 0xF) = LO8(ebx);
    MEM16(ecx + 0x18) = LO16(eax);
    xmm2 = MEMF(edx + 0x40); /* movss */
    xmm2 = xmm2 - xmm1; /* subss */
    esi = (int32_t)xmm2; /* cvttss2si */
    esi = SX16(LO16(esi));
    xmm2 = (float)(int32_t)esi; /* cvtsi2ss */
    MEMF(ecx + 0x1C) = xmm2; /* movss */
    xmm2 = MEMF(edx + 0x44); /* movss */
    xmm2 = xmm2 + MEMF(edx + 0x3C); /* addss */
    ecx = ecx + 0x1C;
    esi = (int32_t)xmm2; /* cvttss2si */
    esi = SX16(LO16(esi));
    xmm2 = (float)(int32_t)esi; /* cvtsi2ss */
    MEMF(ecx + 4) = xmm2; /* movss */
    xmm2 = MEMF(edx + 0x48); /* movss */
    xmm2 = xmm2 + xmm0; /* addss */
    esi = (int32_t)xmm2; /* cvttss2si */
    esi = SX16(LO16(esi));
    xmm2 = (float)(int32_t)esi; /* cvtsi2ss */
    MEMF(ecx + 8) = xmm2; /* movss */
    MEMF(ecx + 0x14) = xmm4; /* movss */
    MEM8(ecx + 0xF) = LO8(eax);
    MEM16(ecx + 0x18) = LO16(eax);
    esi = LO16(ebp);
    xmm2 = (float)(int32_t)esi; /* cvtsi2ss */
    MEMF(ecx + 0x10) = xmm2; /* movss */
    xmm4 = MEMF(edx + 0x40); /* movss */
    xmm4 = xmm4 + xmm1; /* addss */
    ecx = ecx + 0x1C;
    esi = (int32_t)xmm4; /* cvttss2si */
    esi = SX16(LO16(esi));
    xmm1 = (float)(int32_t)esi; /* cvtsi2ss */
    MEMF(ecx) = xmm1; /* movss */
    xmm1 = MEMF(edx + 0x44); /* movss */
    xmm1 = xmm1 + MEMF(edx + 0x3C); /* addss */
    esi = (int32_t)xmm1; /* cvttss2si */
    esi = SX16(LO16(esi));
    xmm1 = (float)(int32_t)esi; /* cvtsi2ss */
    MEMF(ecx + 4) = xmm1; /* movss */
    xmm1 = MEMF(edx + 0x48); /* movss */
    xmm1 = xmm1 - xmm0; /* subss */
    MEM8(ecx + 0xF) = LO8(eax);
    MEM16(ecx + 0x18) = LO16(eax);
    eax = edi;
    POP32(esp, edi);
    edx = (int32_t)xmm1; /* cvttss2si */
    edx = SX16(LO16(edx));
    POP32(esp, esi);
    POP32(esp, ebp);
    xmm0 = (float)(int32_t)edx; /* cvtsi2ss */
    MEMF(ecx + 8) = xmm0; /* movss */
    MEMF(ecx + 0x10) = xmm2; /* movss */
    MEMF(ecx + 0x14) = xmm3; /* movss */
    POP32(esp, ebx);
    esp += 4; return; /* ret */

}

/**
 * sub_000FFCC0
 * Original: 0x000FFCC0 - 0x000FFD77 (183 bytes, 48 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_000FFCC0(void)
{
    uint32_t ebp;
    int _flags = 0; /* fallback flag var */
    float xmm0, xmm1, xmm2;
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_000FFCC0: ;
    esp = esp - 0x80;
    PUSH32(esp, esi);
    esi = MEM32(esp + 0x88);
    SET_LO8(eax, MEM8(esi + 0x327));
    if (TEST_Z(LO8(eax), LO8(eax))) goto loc_000FFCF2; /* je: equal / zero */

loc_000FFCD8: ;
    eax = MEM32(esi + 0x48);
    ecx = MEM32(esi + 0x44);
    xmm0 = MEMF(esi + 0x40); /* movss */
    PUSH32(esp, 0x43FA0000);
    PUSH32(esp, eax);
    PUSH32(esp, ecx);
    PUSH32(esp, 0); sub_00376550(); /* call 0x00376550 */

loc_000FFCEF: ;
    esp = esp + 0xC;

loc_000FFCF2: ;
    xmm0 = MEMF(esi + 0x318); /* movss */
    xmm0 = xmm0 * MEMF(0x7FA24C); /* mulss */
    xmm0 = xmm0 + MEMF(esi + 0x314); /* addss */
    xmm1 = MEMF(0x649924); /* movss */
    /* comiss xmm0, xmm1 - sets EFLAGS */
    MEMF(esi + 0x314) = xmm0; /* movss */
    if ((xmm0 <= xmm1)) goto loc_000FFD29; /* jbe: below or equal (unsigned <=) */

loc_000FFD1F: ;
    /* nop */

loc_000FFD20: ;
    xmm0 = xmm0 - xmm1; /* subss */
    /* comiss xmm0, xmm1 - sets EFLAGS */
    if ((xmm0 > xmm1)) goto loc_000FFD20; /* ja: above (unsigned >) */

loc_000FFD29: ;
    xmm2 = 0.0f; /* xorps self = zero */
    /* comiss xmm2, xmm0 - sets EFLAGS */
    if ((xmm2 <= xmm0)) goto loc_000FFD3A; /* jbe: below or equal (unsigned <=) */

loc_000FFD31: ;
    xmm0 = xmm0 + xmm1; /* addss */
    /* comiss xmm2, xmm0 - sets EFLAGS */
    if ((xmm2 > xmm0)) goto loc_000FFD31; /* ja: above (unsigned >) */

loc_000FFD3A: ;
    SET_LO8(eax, MEM8(esi + 0x325));
    { int64_t _r = (int64_t)(int32_t)eax * (int64_t)(int32_t)MEM8(0x7FA20C);
      eax = (uint32_t)_r; edx = (uint32_t)(_r >> 32); }
    SET_LO8(ecx, MEM8(esi + 0x324));
    SET_LO8(ecx, LO8(ecx) + LO8(eax));
    eax = 0; /* xor self */
    SET_LO8(eax, LO8(ecx));
    SET_LO8(eax, LO8(eax) - 0x40);
    MEM8(esi + 0x324) = LO8(ecx);
    SET_LO8(ecx, LO8(eax));
    SET_LO8(ecx, LO8(ecx) & 0xC0);
    (void)0; /* test LO8(eax), 0x40 - flags set for next jcc */
    MEMF(esi + 0x314) = xmm0; /* movss */
    if (TEST_Z(LO8(eax), 0x40)) { sub_000FFD77(); return; } /* je: equal / zero */

loc_000FFD6B: ;
    eax = eax & 0x3F;
    edx = 0x40;
    edx = edx - eax;
    g_seh_ebp = ebp; sub_000FFD7C(); return; /* tail jmp 0x000FFD7C */

}

/**
 * sub_00100020
 * Original: 0x00100020 - 0x0010007C (92 bytes, 31 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00100020(void)
{
    int _flags = 0; /* fallback flag var */

loc_00100020: ;
    ecx = MEM32(0x847024);
    PUSH32(esp, esi);
    esi = eax;
    eax = MEM32(esi + 0x310);
    MEM8(eax + 0x14) = 1;
    edx = MEM32(ecx + 0x40);
    eax = MEM32(esi + 0x310);
    PUSH32(esp, 0);
    PUSH32(esp, edx);
    ecx = 0; /* xor self */
    PUSH32(esp, 0); sub_00025660(); /* call 0x00025660 */

loc_00100046: ;
    esi = MEM32(esi + 0x320);
    if (TEST_Z(esi, esi)) goto loc_0010007A; /* je: equal / zero */

loc_00100050: ;
    SET_LO8(eax, MEM8(0x8472BD));
    if (TEST_NZ(LO8(eax), LO8(eax))) goto loc_0010007A; /* jne: not equal / not zero */

loc_00100059: ;
    edx = esi;
    PUSH32(esp, 0); sub_000DAD90(); /* call 0x000DAD90 */

loc_00100060: ;
    eax = MEM32(esi);
    if (CMP_L(eax, 2)) goto loc_0010007A; /* jl: less (signed <) */

loc_00100067: ;
    eax = (uint32_t)((int32_t)eax * (int32_t)0x70);
    eax = MEM32(eax + 0x5906BC);
    if (TEST_Z(eax, eax)) { sub_0010007C(); return; } /* je: equal / zero */

loc_00100074: ;
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, esi);
    PUSH32(esp, 0); RECOMP_ICALL_SAFE(eax, _icall_esp); /* indirect call */
    }

loc_00100077: ;
    esp = esp + 4;

loc_0010007A: ;
    POP32(esp, esi);
    esp += 4; return; /* ret */

}

/**
 * sub_001000C0
 * Original: 0x001000C0 - 0x001000DC (28 bytes, 10 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_001000C0(void)
{

loc_001000C0: ;
    PUSH32(esp, ebx);
    ebx = MEM32(esp + 8);
    eax = ebx;
    PUSH32(esp, 0); sub_00100020(); /* call 0x00100020 */

loc_001000CC: ;
    PUSH32(esp, 0); sub_0014FD70(); /* call 0x0014FD70 */

loc_001000D1: ;
    PUSH32(esp, ebx);
    PUSH32(esp, 0); sub_000DAE40(); /* call 0x000DAE40 */

loc_001000D7: ;
    esp = esp + 4;
    POP32(esp, ebx);
    esp += 4; return; /* ret */

}

/**
 * sub_001000E0
 * Original: 0x001000E0 - 0x001000FA (26 bytes, 9 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_001000E0(void)
{
    uint32_t ebp;
    int _flags = 0; /* fallback flag var */
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_001000E0: ;
    edx = MEM32(esp + 8);
    PUSH32(esp, 0); sub_00100130(); /* call 0x00100130 */

loc_001000E9: ;
    if (TEST_Z(eax, eax)) { sub_001000FA(); return; } /* je: equal / zero */

loc_001000ED: ;
    eax = MEM32(eax + 0x5C);
    if (TEST_Z(eax, eax)) { sub_001000FA(); return; } /* je: equal / zero */

loc_001000F4: ;
    eax = ZX16(MEM16(eax + 0x60));
    g_seh_ebp = ebp; sub_001000FD(); return; /* tail jmp 0x001000FD */

}

/**
 * sub_00100130
 * Original: 0x00100130 - 0x0010016C (60 bytes, 22 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00100130(void)
{
    int _flags = 0; /* fallback flag var */

loc_00100130: ;
    PUSH32(esp, ebx);
    SET_LO8(ecx, 0); /* xor self */
    SET_LO8(ebx, 0x2C);

loc_00100135: ;
    eax = ZX8(LO8(ecx));
    eax = MEM32(eax * 4 + 0x6B3F84);
    eax = MEM32(eax * 4 + 0x7714E0);
    if (TEST_Z(eax, eax)) goto loc_00100161; /* je: equal / zero */

loc_0010014A: ;
    /* nop */

loc_00100150: ;
    if (CMP_NE(MEM8(eax + 0x3B), LO8(ebx))) goto loc_0010015A; /* jne: not equal / not zero */

loc_00100155: ;
    if (CMP_EQ(MEM32(eax + 0x4C), edx)) goto loc_0010016A; /* je: equal / zero */

loc_0010015A: ;
    eax = MEM32(eax + 0xC);
    if (TEST_NZ(eax, eax)) goto loc_00100150; /* jne: not equal / not zero */

loc_00100161: ;
    SET_LO8(ecx, LO8(ecx) + 1);
    if (CMP_B(LO8(ecx), 2)) goto loc_00100135; /* jb: below (unsigned <) */

loc_00100168: ;
    eax = 0; /* xor self */

loc_0010016A: ;
    POP32(esp, ebx);
    esp += 4; return; /* ret */

}

/**
 * sub_00100170
 * Original: 0x00100170 - 0x00100644 (1236 bytes, 256 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00100170(void)
{
    uint32_t ebp;
    int _flags = 0; /* fallback flag var */
    float xmm0, xmm1, xmm2, xmm3, xmm4;
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_00100170: ;
    esp = esp - 0x3C;
    xmm3 = MEMF(esp + 0x48); /* movss */
    xmm2 = MEMF(esp + 0x44); /* movss */
    xmm0 = xmm2; /* movaps */
    xmm0 = xmm0 + MEMF(esp + 0x4C); /* addss */
    PUSH32(esp, ebx);
    xmm1 = xmm3; /* movaps */
    xmm1 = xmm1 + MEMF(esp + 0x54); /* addss */
    xmm4 = xmm1; /* movaps */
    xmm4 = xmm4 * xmm0; /* mulss */
    MEMF(esp + 4) = xmm0; /* movss */
    xmm0 = MEMF(esp + 0x5C); /* movss */
    PUSH32(esp, ebp);
    ebp = MEM32(esp + 0x48);
    MEMF(esp + 0xC) = xmm1; /* movss */
    xmm1 = MEMF(0x648D18); /* movss */
    xmm4 = xmm4 * xmm0; /* mulss */
    xmm2 = xmm2 * xmm3; /* mulss */
    PUSH32(esp, edi);
    xmm4 = xmm4 * xmm1; /* mulss */
    xmm2 = xmm2 * xmm0; /* mulss */
    edi = (int32_t)xmm4; /* cvttss2si */
    xmm0 = (float)(int32_t)edi; /* cvtsi2ss */
    /* comiss xmm0, MEMF(0x648D14) - sets EFLAGS */
    xmm2 = xmm2 * xmm1; /* mulss */
    ebx = (int32_t)xmm2; /* cvttss2si */
    if ((xmm0 < MEMF(0x648D14))) goto loc_0010063D; /* jb: below (unsigned <) */

loc_001001E6: ;
    PUSH32(esp, esi);
    PUSH32(esp, 0); sub_003E1D70(); /* call 0x003E1D70 */

loc_001001EC: ;
    xmm0 = xmm0 * MEMF(esp + 0x84); /* mulss */
    xmm0 = xmm0 + MEMF(esp + 0x80); /* addss */
    eax = esp + 0x28;
    MEMF(esp + 0x68) = xmm0; /* movss */
    xmm0 = MEMF(0x648EAC); /* movss */
    PUSH32(esp, 0x94);
    PUSH32(esp, eax);
    MEM32(esp + 0x30) = 0x1B9530;
    MEM32(esp + 0x34) = 0x100650;
    MEM32(esp + 0x38) = 0x108250;
    MEM32(esp + 0x3C) = 0x101660;
    MEM32(esp + 0x40) = 0x134;
    MEM32(esp + 0x44) = 0x303;
    MEMF(esp + 0x48) = xmm0; /* movss */
    MEM32(esp + 0x4C) = edi;
    MEM8(esp + 0x50) = 0;
    PUSH32(esp, 0); sub_00106EC0(); /* call 0x00106EC0 */

loc_0010025A: ;
    esi = eax;
    esp = esp + 8;
    if (TEST_Z(esi, esi)) goto loc_0010063C; /* je: equal / zero */

loc_00100267: ;
    xmm1 = MEMF(esp + 0x64); /* movss */
    SET_LO8(ecx, MEM8(esp + 0x90));
    xmm2 = MEMF(esp + 0x68); /* movss */
    xmm3 = MEMF(esp + 0x6C); /* movss */
    MEM32(esi + 0xB0) = edi;
    MEM8(esi + 0xA8) = LO8(ecx);
    MEM8(esi + 0xA9) = 0;
    xmm0 = (float)(int32_t)ebx; /* cvtsi2ss */
    MEMF(esi + 0xAC) = xmm0; /* movss */
    edi = edi - ebx;
    MEMF(esi + 0xB8) = xmm2; /* movss */
    xmm0 = (float)(int32_t)edi; /* cvtsi2ss */
    xmm0 = xmm0 / xmm1; /* divss */
    MEMF(esi + 0xB4) = xmm0; /* movss */
    xmm0 = MEMF(esp + 0x88); /* movss */
    MEMF(esi + 0xBC) = xmm0; /* movss */
    edx = MEM32(ebp);
    MEM32(esi + 0xC0) = edx;
    eax = MEM32(ebp + 4);
    xmm0 = MEMF(esp + 0x10); /* movss */
    MEM32(esi + 0xC4) = eax;
    ecx = MEM32(ebp + 8);
    MEM32(esi + 0xC8) = ecx;
    MEMF(esi + 0xCC) = xmm0; /* movss */
    xmm0 = MEMF(esp + 0x14); /* movss */
    MEMF(esi + 0xD0) = xmm0; /* movss */
    xmm0 = MEMF(0x6492A4); /* movss */
    xmm3 = xmm3 * xmm0; /* mulss */
    MEMF(esi + 0xD8) = xmm3; /* movss */
    xmm3 = MEMF(esp + 0x70); /* movss */
    xmm3 = xmm3 * xmm0; /* mulss */
    SET_LO8(eax, MEM8(esp + 0x94));
    (void)0; /* test LO8(eax), LO8(eax) - flags set for next jcc */
    SET_LO8(edx, MEM8(esp + 0x7C));
    MEMF(esi + 0xDC) = xmm3; /* movss */
    xmm3 = MEMF(esp + 0x74); /* movss */
    xmm3 = xmm3 * xmm0; /* mulss */
    MEMF(esi + 0xE0) = xmm3; /* movss */
    xmm3 = MEMF(esp + 0x78); /* movss */
    xmm3 = xmm3 * xmm0; /* mulss */
    xmm0 = MEMF(0x648E40); /* movss */
    MEMF(esi + 0xE8) = xmm0; /* movss */
    xmm0 = MEMF(0x648E54); /* movss */
    MEMF(esi + 0xEC) = xmm0; /* movss */
    xmm0 = MEMF(0x64976C); /* movss */
    MEMF(esi + 0x10C) = xmm0; /* movss */
    xmm0 = MEMF(0x648F78); /* movss */
    MEMF(esi + 0xF0) = xmm0; /* movss */
    MEMF(esi + 0xF4) = xmm0; /* movss */
    xmm0 = MEMF(0x648E64); /* movss */
    MEMF(esi + 0xF8) = xmm0; /* movss */
    MEMF(esi + 0x104) = xmm0; /* movss */
    xmm0 = MEMF(0x648D34); /* movss */
    MEMF(esi + 0x114) = xmm0; /* movss */
    MEMF(esi + 0x118) = xmm0; /* movss */
    MEMF(esi + 0x110) = xmm0; /* movss */
    xmm0 = MEMF(esp + 0x54); /* movss */
    MEMF(esi + 0x11C) = xmm0; /* movss */
    xmm0 = MEMF(esp + 0x58); /* movss */
    MEMF(esi + 0xE4) = xmm3; /* movss */
    xmm3 = MEMF(0x648EB0); /* movss */
    MEMF(esi + 0x120) = xmm0; /* movss */
    xmm0 = MEMF(esp + 0x5C); /* movss */
    MEMF(esi + 0xFC) = xmm3; /* movss */
    xmm3 = MEMF(0x648D80); /* movss */
    MEMF(esi + 0x124) = xmm0; /* movss */
    xmm0 = MEMF(esp + 0x60); /* movss */
    MEM8(esi + 0xD4) = LO8(edx);
    MEMF(esi + 0x100) = xmm3; /* movss */
    MEM8(esi + 0x108) = 5;
    MEM8(esi + 0x109) = 0xFA;
    MEMF(esi + 0x128) = xmm0; /* movss */
    MEMF(esi + 0x12C) = xmm1; /* movss */
    if (TEST_Z(LO8(eax), LO8(eax))) goto loc_001004EC; /* je: equal / zero */

loc_00100452: ;
    ecx = MEM32(esp + 0x98);
    if (CMP_EQ(ecx, 0xFFFFFFFFu)) goto loc_00100499; /* je: equal / zero */

loc_0010045E: ;
    if (TEST_Z(ecx, ecx)) goto loc_00100499; /* je: equal / zero */

loc_00100462: ;
    edx = MEM32(0x847024);
    edx = MEM32(edx + 0x40);
    xmm0 = MEMF(0x7F9F5C); /* movss */
    PUSH32(esp, 0);
    PUSH32(esp, 0);
    PUSH32(esp, 0xFFFFFFFFu);
    PUSH32(esp, 2);
    PUSH32(esp, ebp);
    PUSH32(esp, 0xBF800000u);
    PUSH32(esp, 0);
    PUSH32(esp, edx);
    xmm0 = xmm0 * xmm2; /* mulss */
    edx = 0; /* xor self */
    eax = (int32_t)xmm0; /* cvttss2si */
    PUSH32(esp, 0); sub_00022D90(); /* call 0x00022D90 */

loc_00100493: ;
    xmm2 = MEMF(esp + 0x68); /* movss */

loc_00100499: ;
    ecx = MEM32(esp + 0x9C);
    if (CMP_EQ(ecx, 0xFFFFFFFFu)) goto loc_001004EC; /* je: equal / zero */

loc_001004A5: ;
    (void)0; /* test ecx, ecx - flags set for next jcc */
    eax = MEM32(0x847024);
    xmm0 = MEMF(0x7F9F5C); /* movss */
    edx = MEM32(eax + 0x40);
    xmm0 = xmm0 * xmm2; /* mulss */
    eax = (int32_t)xmm0; /* cvttss2si */
    if (TEST_NZ(ecx, ecx)) goto loc_001004CC; /* jne: not equal / not zero */

loc_001004C1: ;
    eax = eax | 0xFFFFFFFFu;
    MEM32(esi + 0x130) = eax;
    goto loc_001004F6;

loc_001004CC: ;
    PUSH32(esp, 0);
    PUSH32(esp, 0);
    PUSH32(esp, 0xFFFFFFFFu);
    PUSH32(esp, 2);
    PUSH32(esp, ebp);
    PUSH32(esp, 0xBF800000u);
    PUSH32(esp, 0);
    PUSH32(esp, edx);
    edx = 0; /* xor self */
    PUSH32(esp, 0); sub_00022D90(); /* call 0x00022D90 */

loc_001004E4: ;
    MEM32(esi + 0x130) = eax;
    goto loc_001004F6;

loc_001004EC: ;
    MEM32(esi + 0x130) = 0xFFFFFFFFu;

loc_001004F6: ;
    edi = MEM32(esi + 0xB0);
    ecx = MEM32(esp + 0x8C);
    edi = (uint32_t)((int32_t)edi * (int32_t)0x2C);
    PUSH32(esp, 0xFFFFFFFFu);
    PUSH32(esp, 0x5C6);
    PUSH32(esp, 0x5F3BAC);
    PUSH32(esp, edi);
    MEM32(esi + 0xA4) = ecx;
    PUSH32(esp, 0); sub_002AF0E0(); /* call 0x002AF0E0 */

loc_0010051E: ;
    edx = eax;
    esp = esp + 0x10;
    if (TEST_Z(edx, edx)) goto loc_0010053B; /* je: equal / zero */

loc_00100527: ;
    ecx = edi;
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

loc_0010053B: ;
    MEM32(esi + 0x134) = edx;
    xmm0 = MEMF(ebp); /* movss */
    MEMF(esp + 0x1C) = xmm0; /* movss */
    xmm0 = MEMF(ebp + 4); /* movss */
    xmm0 = xmm0 + MEMF(esi + 0xE0); /* addss */
    MEMF(esp + 0x20) = xmm0; /* movss */
    xmm0 = MEMF(ebp + 8); /* movss */
    MEMF(esp + 0x24) = xmm0; /* movss */
    xmm0 = 0.0f; /* xorps self = zero */
    MEMF(esp + 0x14) = xmm0; /* movss */
    xmm0 = MEMF(0x648E14); /* movss */
    MEMF(esp + 0x18) = xmm0; /* movss */
    xmm0 = MEMF(esi + 0xB8); /* movss */
    /* ucomiss xmm0, MEMF(0x648D34) - sets EFLAGS */
    /* lahf - load AH from flags (used in FPU compare idiom) */
    if (1 /* jp after test - parity */) goto loc_001005A0; /* jp: parity */

loc_00100596: ;
    xmm0 = MEMF(0x64A740); /* movss */
    goto loc_001005B0;

loc_001005A0: ;
    xmm0 = MEMF(esi + 0xB8); /* movss */
    xmm0 = xmm0 * MEMF(0x648F94); /* mulss */

loc_001005B0: ;
    xmm1 = MEMF(esp + 0x58); /* movss */
    MEMF(esp + 0x5C) = xmm0; /* movss */
    xmm0 = MEMF(esp + 0x54); /* movss */
    /* comiss xmm0, xmm1 - sets EFLAGS */
    if ((xmm0 <= xmm1)) goto loc_001005D7; /* jbe: below or equal (unsigned <=) */

loc_001005C7: ;
    xmm0 = xmm0 * MEMF(0x648D1C); /* mulss */
    MEMF(esp + 0x54) = xmm0; /* movss */
    goto loc_001005E5;

loc_001005D7: ;
    xmm1 = xmm1 * MEMF(0x648D1C); /* mulss */
    MEMF(esp + 0x54) = xmm1; /* movss */

loc_001005E5: ;
    PUSH32(esp, 0);
    PUSH32(esp, 0);
    eax = MEM32(esp + 0x64);
    ecx = MEM32(esi + 0xB8);
    edx = esp + 0x1C;
    PUSH32(esp, edx);
    PUSH32(esp, 0xFF);
    edx = MEM32(esp + 0x64);
    PUSH32(esp, 0xFF);
    PUSH32(esp, 0xFF);
    PUSH32(esp, 0xFF);
    PUSH32(esp, 0);
    PUSH32(esp, 2);
    PUSH32(esp, 0x130);
    PUSH32(esp, 0x12F);
    PUSH32(esp, eax);
    PUSH32(esp, ecx);
    PUSH32(esp, 0);
    PUSH32(esp, edx);
    PUSH32(esp, 0x3D4CCCCD);
    eax = esp + 0x5C;
    PUSH32(esp, eax);
    PUSH32(esp, 0);
    edi = 0x5A02CC;
    PUSH32(esp, 0); sub_001AF030(); /* call 0x001AF030 */

loc_00100639: ;
    esp = esp + 0x48;

loc_0010063C: ;
    POP32(esp, esi);

loc_0010063D: ;
    POP32(esp, edi);
    POP32(esp, ebp);
    POP32(esp, ebx);
    esp = esp + 0x3C;
    esp += 4; return; /* ret */

}

/**
 * sub_00100650
 * Original: 0x00100650 - 0x00100701 (177 bytes, 56 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00100650(void)
{
    uint32_t ebp;
    int _flags = 0; /* fallback flag var */
    float xmm0, xmm1, xmm2;
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_00100650: ;
    PUSH32(esp, ebx);
    ebx = esp;
    esp = esp - 8;
    esp = esp & 0xFFFFFFF0u;
    esp = esp + 4;
    PUSH32(esp, ebp);
    ebp = MEM32(ebx + 4);
    MEM32(esp + 4) = ebp;
    ebp = esp;
    esp = esp - 0x108;
    xmm2 = 0.0f; /* xorps self = zero */
    PUSH32(esp, esi);
    PUSH32(esp, edi);
    edi = MEM32(ebx + 8);
    xmm1 = MEMF(edi + 0xB8); /* movss */
    ecx = 0; /* xor self */
    xmm0 = xmm1; /* movaps */
    xmm0 = xmm0 - MEMF(0x7FA21C); /* subss */
    /* comiss xmm2, xmm0 - sets EFLAGS */
    MEM8(ebp + -5) = LO8(ecx);
    MEM8(ebp + -6) = LO8(ecx);
    MEMF(edi + 0xB8) = xmm0; /* movss */
    if ((xmm2 < xmm0)) { sub_00100701(); return; } /* jb: below (unsigned <) */

loc_0010069C: ;
    if (CMP_EQ(MEM32(edi + 0x130), 0xFFFFFFFFu)) goto loc_001006F6; /* je: equal / zero */

loc_001006A5: ;
    esi = MEM32(0x847024);
    eax = MEM32(esi + 0x40);
    MEM32(ebp + -12) = eax;
    if (CMP_EQ(MEM8(0x846FF8), LO8(ecx))) goto loc_001006CF; /* je: equal / zero */

loc_001006B9: ;
    ecx = MEM32(edi + 0x130);
    PUSH32(esp, ecx);
    PUSH32(esp, 0x5D1AB0);
    PUSH32(esp, 0); sub_00018B30(); /* call 0x00018B30 */

loc_001006CA: ;
    esp = esp + 8;
    ecx = 0; /* xor self */

loc_001006CF: ;
    eax = MEM32(edi + 0x130);
    if (CMP_L(eax, ecx)) goto loc_001006E7; /* jl: less (signed <) */

loc_001006D9: ;
    edx = MEM32(ebp + -12);
    PUSH32(esp, ecx);
    PUSH32(esp, ecx);
    ecx = MEM32(edx + 4);
    PUSH32(esp, ecx);
    PUSH32(esp, 0); sub_0002E660(); /* call 0x0002E660 */

loc_001006E7: ;
    eax = eax | 0xFFFFFFFFu;
    MEM32(edi + 0x130) = eax;
    MEM32(edi + 0x130) = eax;

loc_001006F6: ;
    SET_LO8(eax, 0); /* xor self */
    POP32(esp, edi);
    POP32(esp, esi);
    esp = ebp;
    POP32(esp, ebp);
    esp = ebx;
    POP32(esp, ebx);
    esp += 4; return; /* ret */

}

/**
 * sub_00101660
 * Original: 0x00101660 - 0x00101686 (38 bytes, 12 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00101660(void)
{
    int _flags = 0; /* fallback flag var */

loc_00101660: ;
    PUSH32(esp, esi);
    esi = MEM32(esp + 8);
    eax = MEM32(esi + 0x134);
    esi = esi + 0x134;
    if (TEST_Z(eax, eax)) goto loc_00101684; /* je: equal / zero */

loc_00101675: ;
    PUSH32(esp, esi);
    PUSH32(esp, 0); sub_002AF1C0(); /* call 0x002AF1C0 */

loc_0010167B: ;
    esp = esp + 4;
    MEM32(esi) = 0;

loc_00101684: ;
    POP32(esp, esi);
    esp += 4; return; /* ret */

}

/**
 * sub_00101690
 * Original: 0x00101690 - 0x0010169E (14 bytes, 7 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00101690(void)
{
    int _flags = 0; /* fallback flag var */

loc_00101690: ;
    PUSH32(esp, esi);
    esi = MEM32(eax);
    if (TEST_NZ(esi, esi)) { sub_0010169E(); return; } /* jne: not equal / not zero */

loc_00101697: ;
    eax = eax + 4;
    POP32(esp, esi);
    esp += 8; return; /* ret 4 */

}

/**
 * sub_001016E0
 * Original: 0x001016E0 - 0x001018F4 (532 bytes, 148 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_001016E0(void)
{
    uint32_t ebp;
    int _flags = 0; /* fallback flag var */
    float xmm0, xmm1, xmm2, xmm3;
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_001016E0: ;
    esp = esp - 0x454;
    PUSH32(esp, ebx);
    PUSH32(esp, ebp);
    PUSH32(esp, esi);
    PUSH32(esp, edi);
    edi = eax;
    eax = MEM32(esp + 0x46C);
    MEM32(esp + 0x54) = eax;
    eax = MEM32(edi + 0x34);
    if (TEST_Z(eax, eax)) goto loc_00101704; /* je: equal / zero */

loc_001016FE: ;
    PUSH32(esp, edi);
    PUSH32(esp, 0); sub_00355B40(); /* call 0x00355B40 */

loc_00101704: ;
    MEM32(esp + 0x64) = 0;
    ebx = 1;

loc_00101711: ;
    SET_LO8(eax, MEM8(edi + 0x15));
    esi = MEM32(edi + 0x10);
    ebp = 0; /* xor self */
    (void)0; /* cmp LO8(eax), 1 - flags set for next jcc */
    SET_LO8(eax, MEM8(edi + 0x14));
    if (CMP_NE(LO8(eax), 1)) goto loc_001017FE; /* jne: not equal / not zero */

loc_00101724: ;
    if (CMP_BE(LO8(eax) & LO8(eax), 0)) goto loc_001018C8; /* jbe: below or equal (unsigned <=) */

loc_0010172C: ;
    edx = esp + 0x48;
    ecx = esp + 0x30;
    eax = edx;
    MEM32(esp + 0x10) = ecx;
    MEM32(esp + 0x1C) = edx;
    MEM32(esp + 0x14) = eax;

loc_00101742: ;
    ecx = MEM32(esi + 0x10);
    edx = MEM32(esp + 0x46C);
    MEM32(edx) = ecx;
    eax = esi;
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
    if ((xmm0 <= MEMF(esp + 0x44))) goto loc_001017E9; /* jbe: below or equal (unsigned <=) */

loc_001017E1: ;
    MEM32(esp + 0x46C) = MEM32(esp + 0x46C) + 4;

loc_001017E9: ;
    ecx = ZX8(MEM8(edi + 0x14));
    ebp++;
    esi = esi + 0x20;
    if (CMP_L(ebp, ecx)) goto loc_00101742; /* jl: less (signed <) */

loc_001017F9: ;
    goto loc_001018C8;

loc_001017FE: ;
    if (CMP_BE(LO8(eax) & LO8(eax), 0)) goto loc_001018C8; /* jbe: below or equal (unsigned <=) */

loc_00101806: ;
    eax = esp + 0x58;
    edx = esp + 0x20;
    ecx = eax;
    MEM32(esp + 0x18) = edx;
    MEM32(esp + 0x14) = eax;
    MEM32(esp + 0x1C) = ecx;
    /* nop */

loc_00101820: ;
    edx = esi;
    eax = MEM32(edx);
    ecx = MEM32(edx + 4);
    MEM32(esp + 0x20) = eax;
    eax = MEM32(edx + 8);
    MEM32(esp + 0x24) = ecx;
    ecx = MEM32(edx + 0xC);
    edx = MEM32(esp + 0x468);
    MEM32(esp + 0x28) = eax;
    eax = MEM32(edx);
    MEM32(esp + 0x2C) = ecx;
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
    if ((xmm0 <= MEMF(esp + 0x40))) goto loc_001018B8; /* jbe: below or equal (unsigned <=) */

loc_001018B7: ;
    ebx++;

loc_001018B8: ;
    eax = ZX8(MEM8(edi + 0x14));
    ebp++;
    esi = esi + 0x20;
    if (CMP_L(ebp, eax)) goto loc_00101820; /* jl: less (signed <) */

loc_001018C8: ;
    edi = MEM32(esp + ebx * 4 + 0x60);
    ebx--;
    if (TEST_NZ(edi, edi)) goto loc_00101711; /* jne: not equal / not zero */

loc_001018D5: ;
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
 * sub_00101900
 * Original: 0x00101900 - 0x00101D36 (1078 bytes, 285 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00101900(void)
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

loc_00101900: ;
    esp = esp - 0x74;
    PUSH32(esp, ebp);
    ebp = MEM32(esp + 0x7C);
    xmm0 = MEMF(ebp + 0x60); /* movss */
    xmm0 = xmm0 * MEMF(0x7FA24C); /* mulss */
    xmm0 = xmm0 + MEMF(ebp + 0x5C); /* addss */
    /* comiss xmm0, MEMF(0x648D14) - sets EFLAGS */
    MEMF(ebp + 0x5C) = xmm0; /* movss */
    if ((xmm0 <= MEMF(0x648D14))) goto loc_00101D31; /* jbe: below or equal (unsigned <=) */

loc_0010192C: ;
    eax = 0; /* xor self */
    PUSH32(esp, ebx);
    MEM32(esp + 0x48) = eax;
    MEM16(esp + 0x50) = LO16(eax);
    MEM16(esp + 0x5A) = LO16(eax);
    MEM16(esp + 0x64) = LO16(eax);
    MEM16(esp + 0x5C) = LO16(eax);
    MEM16(esp + 0x66) = LO16(eax);
    MEM8(esp + 0x6E) = LO8(eax);
    MEM8(esp + 0x73) = LO8(eax);
    eax = 0x7D0;
    PUSH32(esp, esi);
    MEM8(esp + 0x74) = 0xFF;
    MEM8(esp + 0x75) = 0xFF;
    MEM8(esp + 0x76) = 0xFF;
    MEM8(esp + 0x78) = 0;
    MEM8(esp + 0x79) = 0;
    MEM8(esp + 0x7A) = 0;
    MEM8(esp + 0x67) = 0x10;
    MEM16(esp + 0x7C) = 0x120;
    MEM32(esp + 0x48) = 0x75BA88;
    MEM16(esp + 0x6E) = LO16(eax);
    MEM16(esp + 0x6C) = LO16(eax);
    PUSH32(esp, edi);

loc_00101997: ;
    PUSH32(esp, 0); sub_003E2480(); /* call 0x003E2480 */

loc_0010199C: ;
    SET_LO8(ebx, LO8(eax));
    PUSH32(esp, 0); sub_003E2480(); /* call 0x003E2480 */

loc_001019A3: ;
    ecx = 0; /* xor self */
    SET_LO8(ecx, LO8(ebx));
    SET_LO8(ecx, LO8(ecx) - 0x40);
    SET_LO8(edx, LO8(ecx));
    SET_LO8(edx, LO8(edx) & 0xC0);
    if (TEST_Z(LO8(ecx), 0x40)) goto loc_001019C0; /* je: equal / zero */

loc_001019B4: ;
    ecx = ecx & 0x3F;
    esi = 0x40;
    esi = esi - ecx;
    goto loc_001019C5;

loc_001019C0: ;
    ecx = ecx & 0x3F;
    esi = ecx;

loc_001019C5: ;
    if (TEST_Z(LO8(edx), LO8(edx))) goto loc_001019DF; /* je: equal / zero */

loc_001019C9: ;
    if (CMP_EQ(LO8(edx), 0xC0)) goto loc_001019DF; /* je: equal / zero */

loc_001019CE: ;
    xmm5 = 0.0f; /* xorps self = zero */
    xmm0 = xmm5; /* movaps */
    xmm0 = xmm0 - MEMF(esi * 4 + 0x743090); /* subss */
    goto loc_001019EB;

loc_001019DF: ;
    xmm0 = MEMF(esi * 4 + 0x743090); /* movss */
    xmm5 = 0.0f; /* xorps self = zero */

loc_001019EB: ;
    SET_LO8(edx, LO8(ebx));
    SET_LO8(edx, LO8(edx) & 0xC0);
    (void)0; /* test LO8(ebx), 0x40 - flags set for next jcc */
    MEMF(esp + 0x10) = xmm0; /* movss */
    if (TEST_Z(LO8(ebx), 0x40)) goto loc_00101A07; /* je: equal / zero */

loc_001019FB: ;
    ebx = ebx & 0x3F;
    ecx = 0x40;
    ecx = ecx - ebx;
    goto loc_00101A0C;

loc_00101A07: ;
    ebx = ebx & 0x3F;
    ecx = ebx;

loc_00101A0C: ;
    if (TEST_Z(LO8(edx), LO8(edx))) goto loc_00101A23; /* je: equal / zero */

loc_00101A10: ;
    if (CMP_EQ(LO8(edx), 0xC0)) goto loc_00101A23; /* je: equal / zero */

loc_00101A15: ;
    xmm7 = xmm5; /* movaps */
    xmm7 = xmm7 - MEMF(ecx * 4 + 0x743090); /* subss */
    goto loc_00101A2C;

loc_00101A23: ;
    xmm7 = MEMF(ecx * 4 + 0x743090); /* movss */

loc_00101A2C: ;
    ecx = 0; /* xor self */
    SET_LO8(ecx, LO8(eax));
    SET_LO8(ecx, LO8(ecx) - 0x40);
    SET_LO8(edx, LO8(ecx));
    SET_LO8(edx, LO8(edx) & 0xC0);
    if (TEST_Z(LO8(ecx), 0x40)) goto loc_00101A49; /* je: equal / zero */

loc_00101A3D: ;
    ecx = ecx & 0x3F;
    esi = 0x40;
    esi = esi - ecx;
    goto loc_00101A4E;

loc_00101A49: ;
    ecx = ecx & 0x3F;
    esi = ecx;

loc_00101A4E: ;
    if (TEST_Z(LO8(edx), LO8(edx))) goto loc_00101A65; /* je: equal / zero */

loc_00101A52: ;
    if (CMP_EQ(LO8(edx), 0xC0)) goto loc_00101A65; /* je: equal / zero */

loc_00101A57: ;
    xmm6 = xmm5; /* movaps */
    xmm6 = xmm6 - MEMF(esi * 4 + 0x743090); /* subss */
    goto loc_00101A6E;

loc_00101A65: ;
    xmm6 = MEMF(esi * 4 + 0x743090); /* movss */

loc_00101A6E: ;
    SET_LO8(edx, LO8(eax));
    SET_LO8(edx, LO8(edx) & 0xC0);
    if (TEST_Z(LO8(eax), 0x40)) goto loc_00101A83; /* je: equal / zero */

loc_00101A77: ;
    eax = eax & 0x3F;
    ecx = 0x40;
    ecx = ecx - eax;
    goto loc_00101A88;

loc_00101A83: ;
    eax = eax & 0x3F;
    ecx = eax;

loc_00101A88: ;
    if (TEST_Z(LO8(edx), LO8(edx))) goto loc_00101A9A; /* je: equal / zero */

loc_00101A8C: ;
    (void)0; /* cmp LO8(edx), 0xC0 - flags set for next jcc */
    xmm5 = xmm5 - MEMF(ecx * 4 + 0x743090); /* subss */
    if (CMP_NE(LO8(edx), 0xC0)) goto loc_00101AA3; /* jne: not equal / not zero */

loc_00101A9A: ;
    xmm5 = MEMF(ecx * 4 + 0x743090); /* movss */

loc_00101AA3: ;
    PUSH32(esp, 0); sub_003E1D70(); /* call 0x003E1D70 */

loc_00101AA8: ;
    xmm0 = xmm0 * MEMF(ebp + 0x58); /* mulss */
    xmm1 = xmm0; /* movaps */
    xmm1 = xmm1 * xmm5; /* mulss */
    xmm2 = xmm1; /* movaps */
    xmm2 = xmm2 * MEMF(esp + 0x10); /* mulss */
    xmm2 = xmm2 + MEMF(ebp + 0x4C); /* addss */
    MEMF(esp + 0x1C) = xmm2; /* movss */
    xmm2 = MEMF(ebp + 0x50); /* movss */
    xmm0 = xmm0 * xmm6; /* mulss */
    xmm1 = xmm1 * xmm7; /* mulss */
    xmm1 = xmm1 + MEMF(ebp + 0x54); /* addss */
    xmm2 = xmm2 - xmm0; /* subss */
    MEMF(esp + 0x20) = xmm2; /* movss */
    MEMF(esp + 0x24) = xmm1; /* movss */
    PUSH32(esp, 0); sub_003E2480(); /* call 0x003E2480 */

loc_00101AEF: ;
    if (TEST_Z(LO8(eax), 1)) goto loc_00101AFB; /* je: equal / zero */

loc_00101AF3: ;
    MEM8(esp + 0x80) = MEM8(esp + 0x80) | 4;

loc_00101AFB: ;
    PUSH32(esp, 0); sub_003E2480(); /* call 0x003E2480 */

loc_00101B00: ;
    if (TEST_Z(LO8(eax), 1)) goto loc_00101B0C; /* je: equal / zero */

loc_00101B04: ;
    MEM8(esp + 0x80) = MEM8(esp + 0x80) | 8;

loc_00101B0C: ;
    PUSH32(esp, 0); sub_003E2480(); /* call 0x003E2480 */

loc_00101B11: ;
    ecx = (uint32_t)(int32_t)SMEM16(ebp + 0x66);
    edx = ((int32_t)eax < 0) ? 0xFFFFFFFF : 0; /* cdq */
    ecx++;
    { int64_t _dividend = ((int64_t)(int32_t)edx << 32) | eax;
      eax = (uint32_t)((int32_t)(_dividend / (int32_t)ecx));
      edx = (uint32_t)((int32_t)(_dividend % (int32_t)ecx)); }
    esi = edx;
    SET_LO16(esi, LO16(esi) + MEM16(ebp + 0x64));
    MEM16(esp + 0x5A) = LO16(esi);
    PUSH32(esp, 0); sub_003E2480(); /* call 0x003E2480 */

loc_00101B29: ;
    fp_push(MEMF(ebp + 0x4C)); /* fld float */
    ecx = (uint32_t)(int32_t)SMEM16(ebp + 0x6A);
    fp_st1() *= fp_top(); fp_pop(); /* fmul */
    edx = ((int32_t)eax < 0) ? 0xFFFFFFFF : 0; /* cdq */
    ecx++;
    { int64_t _dividend = ((int64_t)(int32_t)edx << 32) | eax;
      eax = (uint32_t)((int32_t)(_dividend / (int32_t)ecx));
      edx = (uint32_t)((int32_t)(_dividend % (int32_t)ecx)); }
    ecx = SX16(LO16(esi));
    eax = 0x100;
    ebx = edx;
    edx = ((int32_t)eax < 0) ? 0xFFFFFFFF : 0; /* cdq */
    { int64_t _dividend = ((int64_t)(int32_t)edx << 32) | eax;
      eax = (uint32_t)((int32_t)(_dividend / (int32_t)ecx));
      edx = (uint32_t)((int32_t)(_dividend % (int32_t)ecx)); }
    SET_LO16(edx, ZX8(MEM8(0x75BA8C)));
    SET_LO16(ebx, LO16(ebx) + MEM16(ebp + 0x68));
    ecx = eax;
    ecx = (uint32_t)((int32_t)ecx * (int32_t)edx);
    edx = 0; /* xor self */
    SET_LO16(edx, LO16(ecx));
    SET_LO16(edx, (uint32_t)((int32_t)LO16(edx) >> 2));
    MEM16(esp + 0x74) = LO16(ecx);
    eax = MEM32(esp + 0x74);
    esi = SX16(LO16(ecx));
    MEM16(esp + 0x14) = LO16(edx);
    eax = eax - edx;
    MEM16(esp + 0x2C) = LO16(eax);
    eax = SX16(LO16(eax));
    edi = esi;
    edi = edi - eax;
    eax = 0xFF;
    edx = ((int32_t)eax < 0) ? 0xFFFFFFFF : 0; /* cdq */
    { int64_t _dividend = ((int64_t)(int32_t)edx << 32) | eax;
      eax = (uint32_t)((int32_t)(_dividend / (int32_t)edi));
      edx = (uint32_t)((int32_t)(_dividend % (int32_t)edi)); }
    SET_LO16(edi, LO16(ecx));
    SET_LO16(edi, (uint32_t)((int32_t)LO16(edi) >> 1));
    MEM16(esp + 0x2A) = LO16(ecx);
    MEM16(esp + 0x30) = LO16(ecx);
    ecx = SX16(LO16(ebx));
    edx = SX16(LO16(edi));
    esi = esi - edx;
    MEM16(esp + 0x32) = LO16(edi);
    MEM16(esp + 0x46) = LO16(edi);
    MEM16(esp + 0x28) = LO16(eax);
    eax = ecx;
    edx = ((int32_t)eax < 0) ? 0xFFFFFFFF : 0; /* cdq */
    { int64_t _dividend = ((int64_t)(int32_t)edx << 32) | eax;
      eax = (uint32_t)((int32_t)(_dividend / (int32_t)esi));
      edx = (uint32_t)((int32_t)(_dividend % (int32_t)esi)); }
    MEM16(esp + 0x2E) = LO16(eax);
    SET_LO16(eax, MEM16(esp + 0x14));
    esi = SX16(LO16(eax));
    MEM16(esp + 0x42) = LO16(eax);
    eax = 0xFF;
    edx = ((int32_t)eax < 0) ? 0xFFFFFFFF : 0; /* cdq */
    { int64_t _dividend = ((int64_t)(int32_t)edx << 32) | eax;
      eax = (uint32_t)((int32_t)(_dividend / (int32_t)esi));
      edx = (uint32_t)((int32_t)(_dividend % (int32_t)esi)); }
    esi = SX16(LO16(edi));
    MEM16(esp + 0x44) = LO16(eax);
    eax = ecx;
    edx = ((int32_t)eax < 0) ? 0xFFFFFFFF : 0; /* cdq */
    { int64_t _dividend = ((int64_t)(int32_t)edx << 32) | eax;
      eax = (uint32_t)((int32_t)(_dividend / (int32_t)esi));
      edx = (uint32_t)((int32_t)(_dividend % (int32_t)esi)); }
    ecx = (int32_t)MEMF(ebp + 0x50); /* cvttss2si */
    edx = (int32_t)MEMF(ebp + 0x54); /* cvttss2si */
    MEM16(esp + 0x5E) = LO16(ecx);
    MEM16(esp + 0x60) = LO16(edx);
    MEM16(esp + 0x48) = LO16(eax);
    eax = (int32_t)MEMF(ebp + 0x4C); /* cvttss2si */
    MEM16(esp + 0x5C) = LO16(eax);
    PUSH32(esp, 0); sub_00471288(); /* call 0x00471288 */

loc_00101C03: ;
    fp_push(MEMF(ebp + 0x50)); /* fld float */
    fp_st1() *= fp_top(); fp_pop(); /* fmul */
    MEM8(esp + 0x68) = LO8(eax);
    PUSH32(esp, 0); sub_00471288(); /* call 0x00471288 */

loc_00101C15: ;
    fp_push(MEMF(ebp + 0x54)); /* fld float */
    fp_st1() *= fp_top(); fp_pop(); /* fmul */
    MEM8(esp + 0x6A) = LO8(eax);
    PUSH32(esp, 0); sub_00471288(); /* call 0x00471288 */

loc_00101C27: ;
    MEM8(esp + 0x69) = LO8(eax);
    xmm0 = MEMF(0x648D14); /* movss */
    xmm2 = MEMF(esp + 0x20); /* movss */
    xmm2 = xmm2 - MEMF(ebp + 0x50); /* subss */
    xmm3 = MEMF(esp + 0x24); /* movss */
    xmm3 = xmm3 - MEMF(ebp + 0x54); /* subss */
    eax = SX16(LO16(edi));
    xmm1 = (float)(int32_t)eax; /* cvtsi2ss */
    xmm0 = xmm0 / xmm1; /* divss */
    xmm1 = MEMF(esp + 0x1C); /* movss */
    xmm1 = xmm1 - MEMF(ebp + 0x4C); /* subss */
    xmm1 = xmm1 * xmm0; /* mulss */
    xmm2 = xmm2 * xmm0; /* mulss */
    xmm3 = xmm3 * xmm0; /* mulss */
    xmm0 = xmm3; /* movaps */
    xmm3 = MEMF(0x648E8C); /* movss */
    ecx = (int32_t)xmm1; /* cvttss2si */
    MEM16(esp + 0x36) = LO16(ecx);
    xmm1 = xmm1 * xmm3; /* mulss */
    edx = (int32_t)xmm2; /* cvttss2si */
    ecx = (int32_t)xmm1; /* cvttss2si */
    ecx = ecx & 0xFF;
    MEM16(esp + 0x38) = LO16(edx);
    MEM16(esp + 0x3C) = LO16(ecx);
    SET_LO8(ecx, MEM8(ebp + 4));
    xmm2 = xmm2 * xmm3; /* mulss */
    eax = (int32_t)xmm0; /* cvttss2si */
    edx = (int32_t)xmm2; /* cvttss2si */
    edx = edx & 0xFF;
    MEM16(esp + 0x3A) = LO16(eax);
    MEM8(esp + 0x18) = LO8(ecx);
    MEM16(esp + 0x3E) = LO16(edx);
    edx = MEM32(esp + 0x18);
    xmm0 = xmm0 * xmm3; /* mulss */
    eax = (int32_t)xmm0; /* cvttss2si */
    eax = eax & 0xFF;
    PUSH32(esp, edx);
    MEM16(esp + 0x44) = LO16(eax);
    PUSH32(esp, 8);
    eax = 0x8A;
    MEM16(esp + 0x3C) = LO16(edi);
    PUSH32(esp, 0); sub_000D9C60(); /* call 0x000D9C60 */

loc_00101CE6: ;
    esp = esp + 8;
    if (TEST_Z(eax, eax)) goto loc_00101D0F; /* je: equal / zero */

loc_00101CED: ;
    edi = eax + 0x2C;
    ecx = 0xE;
    esi = esp + 0x4C;
    memcpy((void*)XBOX_PTR(edi), (void*)XBOX_PTR(esi), ecx * 4);
    esi += ecx * 4; edi += ecx * 4; ecx = 0; /* rep movsd */
    MEM8(eax + 0x64) = 0xFF;
    edi = eax + 0x68;
    ecx = 8;
    esi = esp + 0x28;
    memcpy((void*)XBOX_PTR(edi), (void*)XBOX_PTR(esi), ecx * 4);
    esi += ecx * 4; edi += ecx * 4; ecx = 0; /* rep movsd */
    MEM16(edi) = MEM16(esi); esi += 2; edi += 2; /* movsw */

loc_00101D0F: ;
    xmm0 = MEMF(ebp + 0x5C); /* movss */
    xmm1 = MEMF(0x648D14); /* movss */
    xmm0 = xmm0 - xmm1; /* subss */
    /* comiss xmm0, xmm1 - sets EFLAGS */
    MEMF(ebp + 0x5C) = xmm0; /* movss */
    if ((xmm0 > xmm1)) goto loc_00101997; /* ja: above (unsigned >) */

loc_00101D2E: ;
    POP32(esp, edi);
    POP32(esp, esi);
    POP32(esp, ebx);

loc_00101D31: ;
    POP32(esp, ebp);
    esp = esp + 0x74;
    esp += 4; return; /* ret */

    #undef fp_push
    #undef fp_pop
    #undef fp_popp
    #undef fp_top
    #undef fp_st1
}

/**
 * sub_00101D40
 * Original: 0x00101D40 - 0x00101E40 (256 bytes, 78 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00101D40(void)
{
    int _flags = 0; /* fallback flag var */

loc_00101D40: ;
    ecx = MEM32(esp + 4);
    PUSH32(esp, esi);
    SET_LO16(esi, MEM16(ecx + 0x54));
    if (CMP_LE(LO16(esi), MEM16(ecx + 0x6C))) goto loc_00101D5B; /* jle: less or equal (signed <=) */

loc_00101D4F: ;
    SET_LO8(eax, MEM8(ecx + 0x6A));
    SET_LO8(eax, LO8(eax) - MEM8(ecx + 0x54));
    { int64_t _r = (int64_t)(int32_t)eax * (int64_t)(int32_t)MEM8(ecx + 0x68);
      eax = (uint32_t)_r; edx = (uint32_t)(_r >> 32); }
    MEM8(ecx + 0x5B) = LO8(eax);

loc_00101D5B: ;
    if (CMP_LE(LO16(esi), MEM16(ecx + 0x72))) goto loc_00101D75; /* jle: less or equal (signed <=) */

loc_00101D61: ;
    SET_LO16(eax, MEM16(ecx + 0x70));
    SET_LO16(eax, LO16(eax) - LO16(esi));
    SET_LO16(eax, (uint32_t)((int32_t)LO16(eax) * (int32_t)MEM16(ecx + 0x6E)));
    MEM16(ecx + 0x52) = LO16(eax);
    MEM16(ecx + 0x50) = LO16(eax);

loc_00101D75: ;
    if (CMP_LE(LO16(esi), MEM16(ecx + 0x74))) goto loc_00101E0D; /* jle: less or equal (signed <=) */

loc_00101D7F: ;
    eax = (uint32_t)(int32_t)SMEM16(ecx + 0x76);
    edx = (uint32_t)(int32_t)SMEM16(ecx + 0x7C);
    eax = eax << 8;
    eax = eax | edx;
    edx = MEM32(0x7FA20C);
    eax = (uint32_t)((int32_t)eax * (int32_t)edx);
    PUSH32(esp, ebx);
    ebx = ZX8(MEM8(ecx + 0x48));
    PUSH32(esp, edi);
    edi = (uint32_t)(int32_t)SMEM16(ecx + 0x3C);
    edi = edi << 8;
    edi = edi | ebx;
    eax = eax + edi;
    ebx = ZX8(MEM8(ecx + 0x4A));
    edi = eax;
    edi = (uint32_t)((int32_t)edi >> 8);
    MEM8(ecx + 0x48) = LO8(eax);
    MEM16(ecx + 0x3C) = LO16(edi);
    eax = (uint32_t)(int32_t)SMEM16(ecx + 0x78);
    edi = (uint32_t)(int32_t)SMEM16(ecx + 0x7E);
    eax = eax << 8;
    eax = eax | edi;
    edi = (uint32_t)(int32_t)SMEM16(ecx + 0x3E);
    eax = (uint32_t)((int32_t)eax * (int32_t)edx);
    edi = edi << 8;
    edi = edi | ebx;
    eax = eax + edi;
    edi = eax;
    edi = (uint32_t)((int32_t)edi >> 8);
    MEM8(ecx + 0x4A) = LO8(eax);
    MEM16(ecx + 0x3E) = LO16(edi);
    eax = (uint32_t)(int32_t)SMEM16(ecx + 0x7A);
    edi = (uint32_t)(int32_t)SMEM16(ecx + 0x80);
    eax = eax << 8;
    eax = eax | edi;
    edi = ZX8(MEM8(ecx + 0x49));
    eax = (uint32_t)((int32_t)eax * (int32_t)edx);
    edx = (uint32_t)(int32_t)SMEM16(ecx + 0x40);
    edx = edx << 8;
    edx = edx | edi;
    eax = eax + edx;
    edx = eax;
    edx = (uint32_t)((int32_t)edx >> 8);
    POP32(esp, edi);
    MEM16(ecx + 0x40) = LO16(edx);
    MEM8(ecx + 0x49) = LO8(eax);
    POP32(esp, ebx);

loc_00101E0D: ;
    if (CMP_GE(LO16(esi), MEM16(ecx + 0x82))) goto loc_00101E22; /* jge: greater or equal (signed >=) */

loc_00101E16: ;
    SET_LO8(eax, MEM8(ecx + 0x84));
    { int64_t _r = (int64_t)(int32_t)eax * (int64_t)(int32_t)MEM8(ecx + 0x54);
      eax = (uint32_t)_r; edx = (uint32_t)(_r >> 32); }
    MEM8(ecx + 0x5B) = LO8(eax);

loc_00101E22: ;
    if (CMP_GE(LO16(esi), MEM16(ecx + 0x86))) goto loc_00101E3E; /* jge: greater or equal (signed >=) */

loc_00101E2B: ;
    SET_LO16(eax, MEM16(ecx + 0x88));
    SET_LO16(eax, (uint32_t)((int32_t)LO16(eax) * (int32_t)LO16(esi)));
    MEM16(ecx + 0x52) = LO16(eax);
    MEM16(ecx + 0x50) = LO16(eax);

loc_00101E3E: ;
    POP32(esp, esi);
    esp += 4; return; /* ret */

}

/**
 * sub_00101F20
 * Original: 0x00101F20 - 0x001022BC (924 bytes, 256 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00101F20(void)
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

loc_00101F20: ;
    esp = esp - 0x60;
    PUSH32(esp, ebp);
    ebp = MEM32(esp + 0x68);
    xmm0 = MEMF(ebp + 0x60); /* movss */
    xmm0 = xmm0 * MEMF(0x7FA24C); /* mulss */
    xmm0 = xmm0 + MEMF(ebp + 0x5C); /* addss */
    /* comiss xmm0, MEMF(0x648D14) - sets EFLAGS */
    MEMF(ebp + 0x5C) = xmm0; /* movss */
    if ((xmm0 <= MEMF(0x648D14))) goto loc_001022B7; /* jbe: below or equal (unsigned <=) */

loc_00101F4C: ;
    eax = 0; /* xor self */
    PUSH32(esp, ebx);
    MEM32(esp + 0x34) = eax;
    MEM16(esp + 0x3C) = LO16(eax);
    MEM16(esp + 0x46) = LO16(eax);
    MEM16(esp + 0x50) = LO16(eax);
    MEM16(esp + 0x48) = LO16(eax);
    MEM16(esp + 0x52) = LO16(eax);
    MEM8(esp + 0x5A) = LO8(eax);
    MEM8(esp + 0x5F) = LO8(eax);
    eax = 0x7D0;
    PUSH32(esp, esi);
    MEM8(esp + 0x60) = 0xFF;
    MEM8(esp + 0x61) = 0xFF;
    MEM8(esp + 0x62) = 0xFF;
    MEM8(esp + 0x64) = 0;
    MEM8(esp + 0x65) = 0;
    MEM8(esp + 0x66) = 0;
    MEM8(esp + 0x53) = 0x11;
    MEM16(esp + 0x68) = 0x120;
    MEM32(esp + 0x34) = 0x75BA88;
    MEM16(esp + 0x5A) = LO16(eax);
    MEM16(esp + 0x58) = LO16(eax);
    PUSH32(esp, edi);

loc_00101FB7: ;
    PUSH32(esp, 0); sub_003E2480(); /* call 0x003E2480 */

loc_00101FBC: ;
    SET_LO8(ebx, LO8(eax));
    PUSH32(esp, 0); sub_003E2480(); /* call 0x003E2480 */

loc_00101FC3: ;
    ecx = 0; /* xor self */
    SET_LO8(ecx, LO8(ebx));
    SET_LO8(ecx, LO8(ecx) - 0x40);
    SET_LO8(edx, LO8(ecx));
    SET_LO8(edx, LO8(edx) & 0xC0);
    if (TEST_Z(LO8(ecx), 0x40)) goto loc_00101FE0; /* je: equal / zero */

loc_00101FD4: ;
    ecx = ecx & 0x3F;
    esi = 0x40;
    esi = esi - ecx;
    goto loc_00101FE5;

loc_00101FE0: ;
    ecx = ecx & 0x3F;
    esi = ecx;

loc_00101FE5: ;
    if (TEST_Z(LO8(edx), LO8(edx))) goto loc_00101FFF; /* je: equal / zero */

loc_00101FE9: ;
    if (CMP_EQ(LO8(edx), 0xC0)) goto loc_00101FFF; /* je: equal / zero */

loc_00101FEE: ;
    xmm5 = 0.0f; /* xorps self = zero */
    xmm0 = xmm5; /* movaps */
    xmm0 = xmm0 - MEMF(esi * 4 + 0x743090); /* subss */
    goto loc_0010200B;

loc_00101FFF: ;
    xmm0 = MEMF(esi * 4 + 0x743090); /* movss */
    xmm5 = 0.0f; /* xorps self = zero */

loc_0010200B: ;
    SET_LO8(edx, LO8(ebx));
    SET_LO8(edx, LO8(edx) & 0xC0);
    (void)0; /* test LO8(ebx), 0x40 - flags set for next jcc */
    MEMF(esp + 0x10) = xmm0; /* movss */
    if (TEST_Z(LO8(ebx), 0x40)) goto loc_00102027; /* je: equal / zero */

loc_0010201B: ;
    ebx = ebx & 0x3F;
    ecx = 0x40;
    ecx = ecx - ebx;
    goto loc_0010202C;

loc_00102027: ;
    ebx = ebx & 0x3F;
    ecx = ebx;

loc_0010202C: ;
    if (TEST_Z(LO8(edx), LO8(edx))) goto loc_00102043; /* je: equal / zero */

loc_00102030: ;
    if (CMP_EQ(LO8(edx), 0xC0)) goto loc_00102043; /* je: equal / zero */

loc_00102035: ;
    xmm7 = xmm5; /* movaps */
    xmm7 = xmm7 - MEMF(ecx * 4 + 0x743090); /* subss */
    goto loc_0010204C;

loc_00102043: ;
    xmm7 = MEMF(ecx * 4 + 0x743090); /* movss */

loc_0010204C: ;
    ecx = 0; /* xor self */
    SET_LO8(ecx, LO8(eax));
    SET_LO8(ecx, LO8(ecx) - 0x40);
    SET_LO8(edx, LO8(ecx));
    SET_LO8(edx, LO8(edx) & 0xC0);
    if (TEST_Z(LO8(ecx), 0x40)) goto loc_00102069; /* je: equal / zero */

loc_0010205D: ;
    ecx = ecx & 0x3F;
    esi = 0x40;
    esi = esi - ecx;
    goto loc_0010206E;

loc_00102069: ;
    ecx = ecx & 0x3F;
    esi = ecx;

loc_0010206E: ;
    if (TEST_Z(LO8(edx), LO8(edx))) goto loc_00102085; /* je: equal / zero */

loc_00102072: ;
    if (CMP_EQ(LO8(edx), 0xC0)) goto loc_00102085; /* je: equal / zero */

loc_00102077: ;
    xmm6 = xmm5; /* movaps */
    xmm6 = xmm6 - MEMF(esi * 4 + 0x743090); /* subss */
    goto loc_0010208E;

loc_00102085: ;
    xmm6 = MEMF(esi * 4 + 0x743090); /* movss */

loc_0010208E: ;
    SET_LO8(edx, LO8(eax));
    SET_LO8(edx, LO8(edx) & 0xC0);
    if (TEST_Z(LO8(eax), 0x40)) goto loc_001020A3; /* je: equal / zero */

loc_00102097: ;
    eax = eax & 0x3F;
    ecx = 0x40;
    ecx = ecx - eax;
    goto loc_001020A8;

loc_001020A3: ;
    eax = eax & 0x3F;
    ecx = eax;

loc_001020A8: ;
    if (TEST_Z(LO8(edx), LO8(edx))) goto loc_001020BA; /* je: equal / zero */

loc_001020AC: ;
    (void)0; /* cmp LO8(edx), 0xC0 - flags set for next jcc */
    xmm5 = xmm5 - MEMF(ecx * 4 + 0x743090); /* subss */
    if (CMP_NE(LO8(edx), 0xC0)) goto loc_001020C3; /* jne: not equal / not zero */

loc_001020BA: ;
    xmm5 = MEMF(ecx * 4 + 0x743090); /* movss */

loc_001020C3: ;
    PUSH32(esp, 0); sub_003E1D70(); /* call 0x003E1D70 */

loc_001020C8: ;
    xmm0 = xmm0 * MEMF(ebp + 0x58); /* mulss */
    xmm3 = MEMF(ebp + 0x50); /* movss */
    xmm1 = xmm0; /* movaps */
    xmm1 = xmm1 * xmm5; /* mulss */
    xmm2 = xmm1; /* movaps */
    xmm2 = xmm2 * MEMF(esp + 0x10); /* mulss */
    xmm2 = xmm2 + MEMF(ebp + 0x4C); /* addss */
    xmm0 = xmm0 * xmm6; /* mulss */
    xmm1 = xmm1 * xmm7; /* mulss */
    xmm1 = xmm1 + MEMF(ebp + 0x54); /* addss */
    xmm3 = xmm3 - xmm0; /* subss */
    MEMF(esp + 0x18) = xmm2; /* movss */
    MEMF(esp + 0x1C) = xmm3; /* movss */
    MEMF(esp + 0x20) = xmm1; /* movss */
    PUSH32(esp, 0); sub_003E2480(); /* call 0x003E2480 */

loc_0010210F: ;
    if (TEST_Z(LO8(eax), 1)) goto loc_00102118; /* je: equal / zero */

loc_00102113: ;
    MEM8(esp + 0x6C) = MEM8(esp + 0x6C) | 4;

loc_00102118: ;
    PUSH32(esp, 0); sub_003E2480(); /* call 0x003E2480 */

loc_0010211D: ;
    if (TEST_Z(LO8(eax), 1)) goto loc_00102126; /* je: equal / zero */

loc_00102121: ;
    MEM8(esp + 0x6C) = MEM8(esp + 0x6C) | 8;

loc_00102126: ;
    PUSH32(esp, 0); sub_003E2480(); /* call 0x003E2480 */

loc_0010212B: ;
    ecx = (uint32_t)(int32_t)SMEM16(ebp + 0x66);
    edx = ((int32_t)eax < 0) ? 0xFFFFFFFF : 0; /* cdq */
    ecx++;
    { int64_t _dividend = ((int64_t)(int32_t)edx << 32) | eax;
      eax = (uint32_t)((int32_t)(_dividend / (int32_t)ecx));
      edx = (uint32_t)((int32_t)(_dividend % (int32_t)ecx)); }
    esi = edx;
    SET_LO16(esi, LO16(esi) + MEM16(ebp + 0x64));
    MEM16(esp + 0x46) = LO16(esi);
    PUSH32(esp, 0); sub_003E2480(); /* call 0x003E2480 */

loc_00102143: ;
    fp_push(MEMF(esp + 0x18)); /* fld float */
    ecx = (uint32_t)(int32_t)SMEM16(ebp + 0x6A);
    fp_st1() *= fp_top(); fp_pop(); /* fmul */
    edx = ((int32_t)eax < 0) ? 0xFFFFFFFF : 0; /* cdq */
    ecx++;
    { int64_t _dividend = ((int64_t)(int32_t)edx << 32) | eax;
      eax = (uint32_t)((int32_t)(_dividend / (int32_t)ecx));
      edx = (uint32_t)((int32_t)(_dividend % (int32_t)ecx)); }
    ecx = SX16(LO16(esi));
    eax = 0x100;
    edi = edx;
    edx = ((int32_t)eax < 0) ? 0xFFFFFFFF : 0; /* cdq */
    { int64_t _dividend = ((int64_t)(int32_t)edx << 32) | eax;
      eax = (uint32_t)((int32_t)(_dividend / (int32_t)ecx));
      edx = (uint32_t)((int32_t)(_dividend % (int32_t)ecx)); }
    SET_LO16(edx, ZX8(MEM8(0x75BA8C)));
    SET_LO16(edi, LO16(edi) + MEM16(ebp + 0x68));
    ebp = 0; /* xor self */
    edi = SX16(LO16(edi));
    ecx = eax;
    ecx = (uint32_t)((int32_t)ecx * (int32_t)edx);
    SET_LO16(ebp, LO16(ecx));
    SET_LO16(ebp, (uint32_t)((int32_t)LO16(ebp) >> 2));
    MEM16(esp + 0x60) = LO16(ecx);
    eax = MEM32(esp + 0x60);
    esi = SX16(LO16(ecx));
    ebx = esi;
    eax = eax - ebp;
    MEM16(esp + 0x28) = LO16(eax);
    eax = SX16(LO16(eax));
    ebx = ebx - eax;
    eax = 0xFF;
    edx = ((int32_t)eax < 0) ? 0xFFFFFFFF : 0; /* cdq */
    { int64_t _dividend = ((int64_t)(int32_t)edx << 32) | eax;
      eax = (uint32_t)((int32_t)(_dividend / (int32_t)ebx));
      edx = (uint32_t)((int32_t)(_dividend % (int32_t)ebx)); }
    MEM16(esp + 0x26) = LO16(ecx);
    MEM16(esp + 0x2C) = LO16(ecx);
    SET_LO16(ecx, (uint32_t)((int32_t)LO16(ecx) >> 1));
    MEM16(esp + 0x34) = LO16(ecx);
    MEM16(esp + 0x30) = LO16(ebp);
    MEM16(esp + 0x24) = LO16(eax);
    SET_LO16(eax, LO16(ecx));
    edx = SX16(LO16(eax));
    MEM16(esp + 0x2E) = LO16(eax);
    esi = esi - edx;
    eax = edi;
    edx = ((int32_t)eax < 0) ? 0xFFFFFFFF : 0; /* cdq */
    { int64_t _dividend = ((int64_t)(int32_t)edx << 32) | eax;
      eax = (uint32_t)((int32_t)(_dividend / (int32_t)esi));
      edx = (uint32_t)((int32_t)(_dividend % (int32_t)esi)); }
    esi = LO16(ebp);
    ecx = SX16(LO16(ecx));
    MEM16(esp + 0x2A) = LO16(eax);
    eax = 0xFF;
    edx = ((int32_t)eax < 0) ? 0xFFFFFFFF : 0; /* cdq */
    { int64_t _dividend = ((int64_t)(int32_t)edx << 32) | eax;
      eax = (uint32_t)((int32_t)(_dividend / (int32_t)esi));
      edx = (uint32_t)((int32_t)(_dividend % (int32_t)esi)); }
    MEM16(esp + 0x32) = LO16(eax);
    eax = edi;
    edx = ((int32_t)eax < 0) ? 0xFFFFFFFF : 0; /* cdq */
    { int64_t _dividend = ((int64_t)(int32_t)edx << 32) | eax;
      eax = (uint32_t)((int32_t)(_dividend / (int32_t)ecx));
      edx = (uint32_t)((int32_t)(_dividend % (int32_t)ecx)); }
    edx = (int32_t)xmm2; /* cvttss2si */
    ecx = (int32_t)xmm1; /* cvttss2si */
    MEM16(esp + 0x48) = LO16(edx);
    MEM16(esp + 0x4C) = LO16(ecx);
    MEM16(esp + 0x36) = LO16(eax);
    eax = (int32_t)xmm3; /* cvttss2si */
    MEM16(esp + 0x4A) = LO16(eax);
    PUSH32(esp, 0); sub_00471288(); /* call 0x00471288 */

loc_00102211: ;
    fp_push(MEMF(esp + 0x1C)); /* fld float */
    fp_st1() *= fp_top(); fp_pop(); /* fmul */
    MEM8(esp + 0x54) = LO8(eax);
    PUSH32(esp, 0); sub_00471288(); /* call 0x00471288 */

loc_00102224: ;
    fp_push(MEMF(esp + 0x20)); /* fld float */
    fp_st1() *= fp_top(); fp_pop(); /* fmul */
    MEM8(esp + 0x56) = LO8(eax);
    PUSH32(esp, 0); sub_00471288(); /* call 0x00471288 */

loc_00102237: ;
    ebp = MEM32(esp + 0x74);
    SET_LO8(edx, MEM8(ebp + 4));
    MEM8(esp + 0x55) = LO8(eax);
    MEM8(esp + 0x14) = LO8(edx);
    eax = MEM32(esp + 0x14);
    PUSH32(esp, eax);
    PUSH32(esp, 8);
    eax = 0x7C;
    PUSH32(esp, 0); sub_000D9C60(); /* call 0x000D9C60 */

loc_00102257: ;
    esp = esp + 8;
    if (TEST_Z(eax, eax)) goto loc_00102295; /* je: equal / zero */

loc_0010225E: ;
    edx = MEM32(esp + 0x28);
    edi = eax + 0x2C;
    MEM8(eax + 0x64) = 0xFF;
    ecx = 0xE;
    esi = esp + 0x38;
    memcpy((void*)XBOX_PTR(edi), (void*)XBOX_PTR(esi), ecx * 4);
    esi += ecx * 4; edi += ecx * 4; ecx = 0; /* rep movsd */
    ecx = MEM32(esp + 0x24);
    eax = eax + 0x68;
    MEM32(eax) = ecx;
    ecx = MEM32(esp + 0x2C);
    MEM32(eax + 4) = edx;
    edx = MEM32(esp + 0x30);
    MEM32(eax + 8) = ecx;
    ecx = MEM32(esp + 0x34);
    MEM32(eax + 0xC) = edx;
    MEM32(eax + 0x10) = ecx;

loc_00102295: ;
    xmm0 = MEMF(ebp + 0x5C); /* movss */
    xmm1 = MEMF(0x648D14); /* movss */
    xmm0 = xmm0 - xmm1; /* subss */
    /* comiss xmm0, xmm1 - sets EFLAGS */
    MEMF(ebp + 0x5C) = xmm0; /* movss */
    if ((xmm0 > xmm1)) goto loc_00101FB7; /* ja: above (unsigned >) */

loc_001022B4: ;
    POP32(esp, edi);
    POP32(esp, esi);
    POP32(esp, ebx);

loc_001022B7: ;
    POP32(esp, ebp);
    esp = esp + 0x60;
    esp += 4; return; /* ret */

    #undef fp_push
    #undef fp_pop
    #undef fp_popp
    #undef fp_top
    #undef fp_st1
}

/**
 * sub_001022C0
 * Original: 0x001022C0 - 0x0010231D (93 bytes, 30 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_001022C0(void)
{
    int _flags = 0; /* fallback flag var */

loc_001022C0: ;
    ecx = MEM32(esp + 4);
    SET_LO16(edx, MEM16(ecx + 0x54));
    if (CMP_LE(LO16(edx), MEM16(ecx + 0x6C))) goto loc_001022DD; /* jle: less or equal (signed <=) */

loc_001022CE: ;
    SET_LO8(eax, MEM8(ecx + 0x6A));
    PUSH32(esp, ebx);
    SET_LO8(ebx, LO8(edx));
    SET_LO8(eax, LO8(eax) - LO8(ebx));
    { int64_t _r = (int64_t)(int32_t)eax * (int64_t)(int32_t)MEM8(ecx + 0x68);
      eax = (uint32_t)_r; edx = (uint32_t)(_r >> 32); }
    MEM8(ecx + 0x5B) = LO8(eax);
    POP32(esp, ebx);

loc_001022DD: ;
    if (CMP_LE(LO16(edx), MEM16(ecx + 0x72))) goto loc_001022F7; /* jle: less or equal (signed <=) */

loc_001022E3: ;
    SET_LO16(eax, MEM16(ecx + 0x70));
    SET_LO16(eax, LO16(eax) - LO16(edx));
    SET_LO16(eax, (uint32_t)((int32_t)LO16(eax) * (int32_t)MEM16(ecx + 0x6E)));
    MEM16(ecx + 0x52) = LO16(eax);
    MEM16(ecx + 0x50) = LO16(eax);

loc_001022F7: ;
    if (CMP_GE(LO16(edx), MEM16(ecx + 0x74))) goto loc_00102306; /* jge: greater or equal (signed >=) */

loc_001022FD: ;
    SET_LO8(eax, MEM8(ecx + 0x76));
    { int64_t _r = (int64_t)(int32_t)eax * (int64_t)(int32_t)MEM8(ecx + 0x54);
      eax = (uint32_t)_r; edx = (uint32_t)(_r >> 32); }
    MEM8(ecx + 0x5B) = LO8(eax);

loc_00102306: ;
    if (CMP_GE(LO16(edx), MEM16(ecx + 0x78))) goto loc_0010231C; /* jge: greater or equal (signed >=) */

loc_0010230C: ;
    SET_LO16(eax, MEM16(ecx + 0x7A));
    SET_LO16(eax, (uint32_t)((int32_t)LO16(eax) * (int32_t)LO16(edx)));
    MEM16(ecx + 0x52) = LO16(eax);
    MEM16(ecx + 0x50) = LO16(eax);

loc_0010231C: ;
    esp += 4; return; /* ret */

}

/**
 * sub_00102320
 * Original: 0x00102320 - 0x0010240D (237 bytes, 66 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00102320(void)
{
    int _flags = 0; /* fallback flag var */
    float xmm0;

loc_00102320: ;
    esp = esp - 0x28;
    ecx = MEM32(esp + 0x2C);
    eax = ecx + 0x4C;
    xmm0 = MEMF(eax + 0xC); /* movss */
    SET_LO8(ecx, MEM8(ecx + 4));
    edx = eax;
    PUSH32(esp, esi);
    esi = MEM32(edx);
    MEM32(esp + 8) = esi;
    esi = MEM32(edx + 4);
    edx = MEM32(edx + 8);
    MEM32(esp + 0x10) = edx;
    SET_LO16(edx, MEM16(eax + 0x16));
    MEM16(esp + 0x20) = LO16(edx);
    SET_LO16(edx, MEM16(eax + 0x18));
    MEM16(esp + 0x22) = LO16(edx);
    SET_LO16(edx, MEM16(eax + 0x1A));
    MEM16(esp + 0x24) = LO16(edx);
    SET_LO16(edx, MEM16(eax + 0x1C));
    MEM16(esp + 0x26) = LO16(edx);
    SET_LO16(edx, MEM16(eax + 0x1E));
    MEMF(esp + 0x14) = xmm0; /* movss */
    xmm0 = 0.0f; /* xorps self = zero */
    MEM16(esp + 0x28) = LO16(edx);
    SET_LO16(edx, MEM16(eax + 0x20));
    MEMF(esp + 0x18) = xmm0; /* movss */
    xmm0 = MEMF(eax + 0x10); /* movss */
    MEM16(esp + 0x2A) = LO16(edx);
    edx = (uint32_t)(int32_t)SMEM16(eax + 0x14);
    MEM8(esp + 0x30) = LO8(ecx);
    eax = MEM32(esp + 0x30);
    PUSH32(esp, eax);
    MEMF(esp + 0x20) = xmm0; /* movss */
    xmm0 = (float)(int32_t)edx; /* cvtsi2ss */
    PUSH32(esp, 0x2A);
    eax = 0x70;
    MEM32(esp + 0x14) = esi;
    MEMF(esp + 0xC) = xmm0; /* movss */
    PUSH32(esp, 0); sub_000D9C60(); /* call 0x000D9C60 */

loc_001023BC: ;
    esp = esp + 8;
    if (TEST_Z(eax, eax)) goto loc_00102408; /* je: equal / zero */

loc_001023C3: ;
    xmm0 = MEMF(esp + 4); /* movss */
    SET_LO8(ecx, LO8(ecx) | 0xFF);
    MEM8(eax + 0x38) = LO8(ecx);
    MEM8(eax + 0x3A) = LO8(ecx);
    ecx = 0; /* xor self */
    MEMF(eax + 0x30) = xmm0; /* movss */
    MEMF(eax + 0x34) = xmm0; /* movss */
    MEM8(eax + 0x39) = 4;
    MEM8(eax + 0x2C) = 1;
    MEM8(eax + 0x3B) = 0;
    edx = eax + 0x3C;
    MEM32(edx) = ecx;
    MEM32(edx + 4) = ecx;
    MEM32(edx + 8) = ecx;
    PUSH32(esp, edi);
    MEM32(edx + 0xC) = ecx;
    edi = eax + 0x4C;
    ecx = 9;
    esi = esp + 0xC;
    memcpy((void*)XBOX_PTR(edi), (void*)XBOX_PTR(esi), ecx * 4);
    esi += ecx * 4; edi += ecx * 4; ecx = 0; /* rep movsd */
    POP32(esp, edi);

loc_00102408: ;
    POP32(esp, esi);
    esp = esp + 0x28;
    esp += 4; return; /* ret */

}

/**
 * sub_00102410
 * Original: 0x00102410 - 0x001027DC (972 bytes, 267 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00102410(void)
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

loc_00102410: ;
    esp = esp - 0x6C;
    PUSH32(esp, ebp);
    ebp = MEM32(esp + 0x74);
    xmm0 = MEMF(ebp + 0x60); /* movss */
    xmm0 = xmm0 * MEMF(0x7FA24C); /* mulss */
    xmm0 = xmm0 + MEMF(ebp + 0x5C); /* addss */
    /* comiss xmm0, MEMF(0x648D14) - sets EFLAGS */
    MEMF(ebp + 0x5C) = xmm0; /* movss */
    if ((xmm0 <= MEMF(0x648D14))) goto loc_001027D7; /* jbe: below or equal (unsigned <=) */

loc_0010243C: ;
    eax = 0; /* xor self */
    PUSH32(esp, ebx);
    MEM32(esp + 0x40) = eax;
    MEM16(esp + 0x48) = LO16(eax);
    MEM16(esp + 0x52) = LO16(eax);
    MEM16(esp + 0x5C) = LO16(eax);
    MEM16(esp + 0x54) = LO16(eax);
    MEM16(esp + 0x5E) = LO16(eax);
    MEM8(esp + 0x66) = LO8(eax);
    MEM8(esp + 0x6B) = LO8(eax);
    eax = 0x7D0;
    PUSH32(esp, esi);
    MEM8(esp + 0x6C) = 5;
    MEM8(esp + 0x6D) = 0;
    MEM8(esp + 0x6E) = 0;
    MEM8(esp + 0x70) = 0;
    MEM8(esp + 0x71) = 0;
    MEM8(esp + 0x72) = 0;
    MEM8(esp + 0x5F) = 0x12;
    MEM16(esp + 0x74) = 0x120;
    MEM32(esp + 0x40) = 0x75BA88;
    MEM16(esp + 0x66) = LO16(eax);
    MEM16(esp + 0x64) = LO16(eax);
    PUSH32(esp, edi);

loc_001024A7: ;
    PUSH32(esp, 0); sub_003E2480(); /* call 0x003E2480 */

loc_001024AC: ;
    SET_LO8(ebx, LO8(eax));
    PUSH32(esp, 0); sub_003E2480(); /* call 0x003E2480 */

loc_001024B3: ;
    ecx = 0; /* xor self */
    SET_LO8(ecx, LO8(ebx));
    SET_LO8(ecx, LO8(ecx) - 0x40);
    SET_LO8(edx, LO8(ecx));
    SET_LO8(edx, LO8(edx) & 0xC0);
    if (TEST_Z(LO8(ecx), 0x40)) goto loc_001024D0; /* je: equal / zero */

loc_001024C4: ;
    ecx = ecx & 0x3F;
    esi = 0x40;
    esi = esi - ecx;
    goto loc_001024D5;

loc_001024D0: ;
    ecx = ecx & 0x3F;
    esi = ecx;

loc_001024D5: ;
    if (TEST_Z(LO8(edx), LO8(edx))) goto loc_001024EF; /* je: equal / zero */

loc_001024D9: ;
    if (CMP_EQ(LO8(edx), 0xC0)) goto loc_001024EF; /* je: equal / zero */

loc_001024DE: ;
    xmm5 = 0.0f; /* xorps self = zero */
    xmm0 = xmm5; /* movaps */
    xmm0 = xmm0 - MEMF(esi * 4 + 0x743090); /* subss */
    goto loc_001024FB;

loc_001024EF: ;
    xmm0 = MEMF(esi * 4 + 0x743090); /* movss */
    xmm5 = 0.0f; /* xorps self = zero */

loc_001024FB: ;
    SET_LO8(edx, LO8(ebx));
    SET_LO8(edx, LO8(edx) & 0xC0);
    (void)0; /* test LO8(ebx), 0x40 - flags set for next jcc */
    MEMF(esp + 0x80) = xmm0; /* movss */
    if (TEST_Z(LO8(ebx), 0x40)) goto loc_0010251A; /* je: equal / zero */

loc_0010250E: ;
    ebx = ebx & 0x3F;
    ecx = 0x40;
    ecx = ecx - ebx;
    goto loc_0010251F;

loc_0010251A: ;
    ebx = ebx & 0x3F;
    ecx = ebx;

loc_0010251F: ;
    if (TEST_Z(LO8(edx), LO8(edx))) goto loc_00102536; /* je: equal / zero */

loc_00102523: ;
    if (CMP_EQ(LO8(edx), 0xC0)) goto loc_00102536; /* je: equal / zero */

loc_00102528: ;
    xmm7 = xmm5; /* movaps */
    xmm7 = xmm7 - MEMF(ecx * 4 + 0x743090); /* subss */
    goto loc_0010253F;

loc_00102536: ;
    xmm7 = MEMF(ecx * 4 + 0x743090); /* movss */

loc_0010253F: ;
    ecx = 0; /* xor self */
    SET_LO8(ecx, LO8(eax));
    SET_LO8(ecx, LO8(ecx) - 0x40);
    SET_LO8(edx, LO8(ecx));
    SET_LO8(edx, LO8(edx) & 0xC0);
    if (TEST_Z(LO8(ecx), 0x40)) goto loc_0010255C; /* je: equal / zero */

loc_00102550: ;
    ecx = ecx & 0x3F;
    esi = 0x40;
    esi = esi - ecx;
    goto loc_00102561;

loc_0010255C: ;
    ecx = ecx & 0x3F;
    esi = ecx;

loc_00102561: ;
    if (TEST_Z(LO8(edx), LO8(edx))) goto loc_00102578; /* je: equal / zero */

loc_00102565: ;
    if (CMP_EQ(LO8(edx), 0xC0)) goto loc_00102578; /* je: equal / zero */

loc_0010256A: ;
    xmm6 = xmm5; /* movaps */
    xmm6 = xmm6 - MEMF(esi * 4 + 0x743090); /* subss */
    goto loc_00102581;

loc_00102578: ;
    xmm6 = MEMF(esi * 4 + 0x743090); /* movss */

loc_00102581: ;
    SET_LO8(edx, LO8(eax));
    SET_LO8(edx, LO8(edx) & 0xC0);
    if (TEST_Z(LO8(eax), 0x40)) goto loc_00102596; /* je: equal / zero */

loc_0010258A: ;
    eax = eax & 0x3F;
    ecx = 0x40;
    ecx = ecx - eax;
    goto loc_0010259B;

loc_00102596: ;
    eax = eax & 0x3F;
    ecx = eax;

loc_0010259B: ;
    if (TEST_Z(LO8(edx), LO8(edx))) goto loc_001025AD; /* je: equal / zero */

loc_0010259F: ;
    (void)0; /* cmp LO8(edx), 0xC0 - flags set for next jcc */
    xmm5 = xmm5 - MEMF(ecx * 4 + 0x743090); /* subss */
    if (CMP_NE(LO8(edx), 0xC0)) goto loc_001025B6; /* jne: not equal / not zero */

loc_001025AD: ;
    xmm5 = MEMF(ecx * 4 + 0x743090); /* movss */

loc_001025B6: ;
    PUSH32(esp, 0); sub_003E1D70(); /* call 0x003E1D70 */

loc_001025BB: ;
    xmm0 = xmm0 * MEMF(ebp + 0x58); /* mulss */
    xmm3 = MEMF(ebp + 0x50); /* movss */
    xmm1 = xmm0; /* movaps */
    xmm1 = xmm1 * xmm5; /* mulss */
    xmm2 = xmm1; /* movaps */
    xmm2 = xmm2 * MEMF(esp + 0x80); /* mulss */
    xmm2 = xmm2 + MEMF(ebp + 0x4C); /* addss */
    xmm0 = xmm0 * xmm6; /* mulss */
    xmm1 = xmm1 * xmm7; /* mulss */
    xmm1 = xmm1 + MEMF(ebp + 0x54); /* addss */
    xmm3 = xmm3 - xmm0; /* subss */
    MEMF(esp + 0x1C) = xmm2; /* movss */
    MEMF(esp + 0x20) = xmm3; /* movss */
    MEMF(esp + 0x24) = xmm1; /* movss */
    PUSH32(esp, 0); sub_003E2480(); /* call 0x003E2480 */

loc_00102605: ;
    if (TEST_Z(LO8(eax), 1)) goto loc_0010260E; /* je: equal / zero */

loc_00102609: ;
    MEM8(esp + 0x78) = MEM8(esp + 0x78) | 4;

loc_0010260E: ;
    PUSH32(esp, 0); sub_003E2480(); /* call 0x003E2480 */

loc_00102613: ;
    if (TEST_Z(LO8(eax), 1)) goto loc_0010261C; /* je: equal / zero */

loc_00102617: ;
    MEM8(esp + 0x78) = MEM8(esp + 0x78) | 8;

loc_0010261C: ;
    PUSH32(esp, 0); sub_003E2480(); /* call 0x003E2480 */

loc_00102621: ;
    ecx = (uint32_t)(int32_t)SMEM16(ebp + 0x66);
    edx = ((int32_t)eax < 0) ? 0xFFFFFFFF : 0; /* cdq */
    ecx++;
    { int64_t _dividend = ((int64_t)(int32_t)edx << 32) | eax;
      eax = (uint32_t)((int32_t)(_dividend / (int32_t)ecx));
      edx = (uint32_t)((int32_t)(_dividend % (int32_t)ecx)); }
    esi = edx;
    SET_LO16(esi, LO16(esi) + MEM16(ebp + 0x64));
    MEM16(esp + 0x52) = LO16(esi);
    PUSH32(esp, 0); sub_003E2480(); /* call 0x003E2480 */

loc_00102639: ;
    ecx = (uint32_t)(int32_t)SMEM16(ebp + 0x6A);
    edx = ((int32_t)eax < 0) ? 0xFFFFFFFF : 0; /* cdq */
    ecx++;
    { int64_t _dividend = ((int64_t)(int32_t)edx << 32) | eax;
      eax = (uint32_t)((int32_t)(_dividend / (int32_t)ecx));
      edx = (uint32_t)((int32_t)(_dividend % (int32_t)ecx)); }
    ecx = SX16(LO16(esi));
    eax = 0x100;
    ebx = edx;
    edx = ((int32_t)eax < 0) ? 0xFFFFFFFF : 0; /* cdq */
    { int64_t _dividend = ((int64_t)(int32_t)edx << 32) | eax;
      eax = (uint32_t)((int32_t)(_dividend / (int32_t)ecx));
      edx = (uint32_t)((int32_t)(_dividend % (int32_t)ecx)); }
    SET_LO16(edx, ZX8(MEM8(0x75BA8C)));
    SET_LO16(ebx, LO16(ebx) + MEM16(ebp + 0x68));
    ecx = eax;
    ecx = (uint32_t)((int32_t)ecx * (int32_t)edx);
    edx = 0; /* xor self */
    SET_LO16(edx, LO16(ecx));
    SET_LO16(edx, (uint32_t)((int32_t)LO16(edx) >> 2));
    MEM16(esp + 0x6C) = LO16(ecx);
    eax = MEM32(esp + 0x6C);
    esi = SX16(LO16(ecx));
    MEM16(esp + 0x14) = LO16(edx);
    eax = eax - edx;
    MEM16(esp + 0x2C) = LO16(eax);
    eax = SX16(LO16(eax));
    edi = esi;
    edi = edi - eax;
    eax = 0xFF;
    edx = ((int32_t)eax < 0) ? 0xFFFFFFFF : 0; /* cdq */
    { int64_t _dividend = ((int64_t)(int32_t)edx << 32) | eax;
      eax = (uint32_t)((int32_t)(_dividend / (int32_t)edi));
      edx = (uint32_t)((int32_t)(_dividend % (int32_t)edi)); }
    SET_LO16(edi, LO16(ecx));
    MEM16(esp + 0x2A) = LO16(ecx);
    MEM16(esp + 0x30) = LO16(ecx);
    SET_LO16(edi, (uint32_t)((int32_t)LO16(edi) >> 1));
    ecx = SX16(LO16(edi));
    MEM16(esp + 0x32) = LO16(edi);
    MEM16(esp + 0x34) = LO16(edi);
    MEM16(esp + 0x3C) = LO16(edi);
    MEM16(esp + 0x28) = LO16(eax);
    eax = esi;
    eax = eax - ecx;
    ecx = eax;
    eax = SX16(LO16(ebx));
    edx = ((int32_t)eax < 0) ? 0xFFFFFFFF : 0; /* cdq */
    { int64_t _dividend = ((int64_t)(int32_t)edx << 32) | eax;
      eax = (uint32_t)((int32_t)(_dividend / (int32_t)ecx));
      edx = (uint32_t)((int32_t)(_dividend % (int32_t)ecx)); }
    ecx = esi;
    ecx = (uint32_t)((int32_t)ecx >> 1);
    esi = (uint32_t)((int32_t)esi >> 2);
    MEM16(esp + 0x2E) = LO16(eax);
    eax = 0xFF;
    edx = ((int32_t)eax < 0) ? 0xFFFFFFFF : 0; /* cdq */
    { int64_t _dividend = ((int64_t)(int32_t)edx << 32) | eax;
      eax = (uint32_t)((int32_t)(_dividend / (int32_t)ecx));
      edx = (uint32_t)((int32_t)(_dividend % (int32_t)ecx)); }
    SET_LO16(edx, MEM16(esp + 0x14));
    MEM16(esp + 0x38) = LO16(edx);
    MEM16(esp + 0x36) = LO16(eax);
    eax = 0xFF;
    edx = ((int32_t)eax < 0) ? 0xFFFFFFFF : 0; /* cdq */
    { int64_t _dividend = ((int64_t)(int32_t)edx << 32) | eax;
      eax = (uint32_t)((int32_t)(_dividend / (int32_t)esi));
      edx = (uint32_t)((int32_t)(_dividend % (int32_t)esi)); }
    MEM16(esp + 0x3A) = LO16(eax);
    PUSH32(esp, 0); sub_003E2480(); /* call 0x003E2480 */

loc_001026F7: ;
    ecx = (uint32_t)(int32_t)SMEM16(ebp + 0x6E);
    edx = ((int32_t)eax < 0) ? 0xFFFFFFFF : 0; /* cdq */
    ecx++;
    { int64_t _dividend = ((int64_t)(int32_t)edx << 32) | eax;
      eax = (uint32_t)((int32_t)(_dividend / (int32_t)ecx));
      edx = (uint32_t)((int32_t)(_dividend % (int32_t)ecx)); }
    MEM16(esp + 0x40) = LO16(edi);
    SET_LO16(edx, LO16(edx) + MEM16(ebp + 0x6C));
    MEM16(esp + 0x3E) = LO16(edx);
    PUSH32(esp, 0); sub_003E2480(); /* call 0x003E2480 */

loc_00102712: ;
    edx = ((int32_t)eax < 0) ? 0xFFFFFFFF : 0; /* cdq */
    ecx = 0x51;
    { int64_t _dividend = ((int64_t)(int32_t)edx << 32) | eax;
      eax = (uint32_t)((int32_t)(_dividend / (int32_t)ecx));
      edx = (uint32_t)((int32_t)(_dividend % (int32_t)ecx)); }
    edx = edx + 0x50;
    MEM16(esp + 0x42) = LO16(edx);
    fp_push(MEMF(esp + 0x1C)); /* fld float */
    edx = (int32_t)xmm2; /* cvttss2si */
    fp_st1() *= fp_top(); fp_pop(); /* fmul */
    eax = (int32_t)xmm3; /* cvttss2si */
    ecx = (int32_t)xmm1; /* cvttss2si */
    MEM16(esp + 0x54) = LO16(edx);
    MEM16(esp + 0x56) = LO16(eax);
    MEM16(esp + 0x58) = LO16(ecx);
    PUSH32(esp, 0); sub_00471288(); /* call 0x00471288 */

loc_0010274C: ;
    fp_push(MEMF(esp + 0x20)); /* fld float */
    fp_st1() *= fp_top(); fp_pop(); /* fmul */
    MEM8(esp + 0x60) = LO8(eax);
    PUSH32(esp, 0); sub_00471288(); /* call 0x00471288 */

loc_0010275F: ;
    fp_push(MEMF(esp + 0x24)); /* fld float */
    fp_st1() *= fp_top(); fp_pop(); /* fmul */
    MEM8(esp + 0x62) = LO8(eax);
    PUSH32(esp, 0); sub_00471288(); /* call 0x00471288 */

loc_00102772: ;
    SET_LO8(edx, MEM8(ebp + 4));
    MEM8(esp + 0x61) = LO8(eax);
    MEM8(esp + 0x18) = LO8(edx);
    eax = MEM32(esp + 0x18);
    PUSH32(esp, eax);
    PUSH32(esp, 8);
    eax = 0x84;
    PUSH32(esp, 0); sub_000D9C60(); /* call 0x000D9C60 */

loc_0010278E: ;
    esp = esp + 8;
    if (TEST_Z(eax, eax)) goto loc_001027B5; /* je: equal / zero */

loc_00102795: ;
    edi = eax + 0x2C;
    ecx = 0xE;
    esi = esp + 0x44;
    memcpy((void*)XBOX_PTR(edi), (void*)XBOX_PTR(esi), ecx * 4);
    esi += ecx * 4; edi += ecx * 4; ecx = 0; /* rep movsd */
    edi = eax + 0x68;
    ecx = 7;
    esi = esp + 0x28;
    MEM8(eax + 0x64) = 0xFF;
    memcpy((void*)XBOX_PTR(edi), (void*)XBOX_PTR(esi), ecx * 4);
    esi += ecx * 4; edi += ecx * 4; ecx = 0; /* rep movsd */

loc_001027B5: ;
    xmm0 = MEMF(ebp + 0x5C); /* movss */
    xmm1 = MEMF(0x648D14); /* movss */
    xmm0 = xmm0 - xmm1; /* subss */
    /* comiss xmm0, xmm1 - sets EFLAGS */
    MEMF(ebp + 0x5C) = xmm0; /* movss */
    if ((xmm0 > xmm1)) goto loc_001024A7; /* ja: above (unsigned >) */

loc_001027D4: ;
    POP32(esp, edi);
    POP32(esp, esi);
    POP32(esp, ebx);

loc_001027D7: ;
    POP32(esp, ebp);
    esp = esp + 0x6C;
    esp += 4; return; /* ret */

    #undef fp_push
    #undef fp_pop
    #undef fp_popp
    #undef fp_top
    #undef fp_st1
}

/**
 * sub_001027E0
 * Original: 0x001027E0 - 0x00102884 (164 bytes, 45 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_001027E0(void)
{
    int _flags = 0; /* fallback flag var */

loc_001027E0: ;
    ecx = MEM32(esp + 4);
    SET_LO16(edx, MEM16(ecx + 0x54));
    if (CMP_LE(LO16(edx), MEM16(ecx + 0x6C))) goto loc_001027FD; /* jle: less or equal (signed <=) */

loc_001027EE: ;
    SET_LO8(eax, MEM8(ecx + 0x6A));
    PUSH32(esp, ebx);
    SET_LO8(ebx, LO8(edx));
    SET_LO8(eax, LO8(eax) - LO8(ebx));
    { int64_t _r = (int64_t)(int32_t)eax * (int64_t)(int32_t)MEM8(ecx + 0x68);
      eax = (uint32_t)_r; edx = (uint32_t)(_r >> 32); }
    MEM8(ecx + 0x5B) = LO8(eax);
    POP32(esp, ebx);

loc_001027FD: ;
    if (CMP_LE(LO16(edx), MEM16(ecx + 0x72))) goto loc_00102817; /* jle: less or equal (signed <=) */

loc_00102803: ;
    SET_LO16(eax, MEM16(ecx + 0x70));
    SET_LO16(eax, LO16(eax) - LO16(edx));
    SET_LO16(eax, (uint32_t)((int32_t)LO16(eax) * (int32_t)MEM16(ecx + 0x6E)));
    MEM16(ecx + 0x52) = LO16(eax);
    MEM16(ecx + 0x50) = LO16(eax);

loc_00102817: ;
    if (CMP_GE(LO16(edx), MEM16(ecx + 0x78))) goto loc_00102826; /* jge: greater or equal (signed >=) */

loc_0010281D: ;
    SET_LO8(eax, MEM8(ecx + 0x7A));
    { int64_t _r = (int64_t)(int32_t)eax * (int64_t)(int32_t)MEM8(ecx + 0x54);
      eax = (uint32_t)_r; edx = (uint32_t)(_r >> 32); }
    MEM8(ecx + 0x5B) = LO8(eax);

loc_00102826: ;
    if (CMP_GE(LO16(edx), MEM16(ecx + 0x7C))) goto loc_00102840; /* jge: greater or equal (signed >=) */

loc_0010282C: ;
    SET_LO16(eax, MEM16(ecx + 0x7E));
    SET_LO16(eax, (uint32_t)((int32_t)LO16(eax) * (int32_t)MEM16(0x7FA20C)));
    MEM16(ecx + 0x50) = MEM16(ecx + 0x50) + LO16(eax);
    MEM16(ecx + 0x52) = MEM16(ecx + 0x52) + LO16(eax);

loc_00102840: ;
    if (CMP_GE(LO16(edx), MEM16(ecx + 0x74))) goto loc_00102866; /* jge: greater or equal (signed >=) */

loc_00102846: ;
    MEM16(ecx + 0x60) = MEM16(ecx + 0x60) | 0x101;
    MEM8(ecx + 0x4B) = 0x13;
    SET_LO8(eax, MEM8(ecx + 0x76));
    { int64_t _r = (int64_t)(int32_t)eax * (int64_t)(int32_t)MEM8(ecx + 0x54);
      eax = (uint32_t)_r; edx = (uint32_t)(_r >> 32); }
    MEM8(ecx + 0x5E) = LO8(eax);
    MEM8(ecx + 0x5D) = LO8(eax);
    MEM8(ecx + 0x5C) = LO8(eax);
    MEM32(ecx + 0x30) = 0;

loc_00102866: ;
    if (CMP_GE(LO16(edx), MEM16(ecx + 0x80))) goto loc_00102883; /* jge: greater or equal (signed >=) */

loc_0010286F: ;
    SET_LO16(eax, MEM16(ecx + 0x82));
    MEM16(ecx + 0x4E) = LO16(eax);
    MEM16(ecx + 0x80) = 0xD8F1;

loc_00102883: ;
    esp += 4; return; /* ret */

}

/**
 * sub_00102890
 * Original: 0x00102890 - 0x0010291D (141 bytes, 40 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00102890(void)
{
    int _flags = 0; /* fallback flag var */

loc_00102890: ;
    ecx = MEM32(esp + 4);
    SET_LO16(edx, MEM16(ecx + 0x54));
    if (CMP_LE(LO16(edx), MEM16(ecx + 0x6C))) goto loc_001028AD; /* jle: less or equal (signed <=) */

loc_0010289E: ;
    SET_LO8(eax, MEM8(ecx + 0x6A));
    PUSH32(esp, ebx);
    SET_LO8(ebx, LO8(edx));
    SET_LO8(eax, LO8(eax) - LO8(ebx));
    { int64_t _r = (int64_t)(int32_t)eax * (int64_t)(int32_t)MEM8(ecx + 0x68);
      eax = (uint32_t)_r; edx = (uint32_t)(_r >> 32); }
    MEM8(ecx + 0x5B) = LO8(eax);
    POP32(esp, ebx);

loc_001028AD: ;
    if (CMP_LE(LO16(edx), MEM16(ecx + 0x72))) goto loc_001028C7; /* jle: less or equal (signed <=) */

loc_001028B3: ;
    SET_LO16(eax, MEM16(ecx + 0x70));
    SET_LO16(eax, LO16(eax) - LO16(edx));
    SET_LO16(eax, (uint32_t)((int32_t)LO16(eax) * (int32_t)MEM16(ecx + 0x6E)));
    MEM16(ecx + 0x52) = LO16(eax);
    MEM16(ecx + 0x50) = LO16(eax);

loc_001028C7: ;
    if (CMP_GE(LO16(edx), MEM16(ecx + 0x78))) goto loc_001028D6; /* jge: greater or equal (signed >=) */

loc_001028CD: ;
    SET_LO8(eax, MEM8(ecx + 0x7A));
    { int64_t _r = (int64_t)(int32_t)eax * (int64_t)(int32_t)MEM8(ecx + 0x54);
      eax = (uint32_t)_r; edx = (uint32_t)(_r >> 32); }
    MEM8(ecx + 0x5B) = LO8(eax);

loc_001028D6: ;
    if (CMP_GE(LO16(edx), MEM16(ecx + 0x7C))) goto loc_001028F0; /* jge: greater or equal (signed >=) */

loc_001028DC: ;
    SET_LO16(eax, MEM16(ecx + 0x7E));
    SET_LO16(eax, (uint32_t)((int32_t)LO16(eax) * (int32_t)MEM16(0x7FA20C)));
    MEM16(ecx + 0x50) = MEM16(ecx + 0x50) + LO16(eax);
    MEM16(ecx + 0x52) = MEM16(ecx + 0x52) + LO16(eax);

loc_001028F0: ;
    if (CMP_GE(LO16(edx), MEM16(ecx + 0x80))) goto loc_0010290D; /* jge: greater or equal (signed >=) */

loc_001028F9: ;
    SET_LO16(eax, MEM16(ecx + 0x82));
    MEM16(ecx + 0x4E) = LO16(eax);
    MEM16(ecx + 0x80) = 0xD8F1;

loc_0010290D: ;
    SET_LO8(eax, MEM8(ecx + 0x76));
    { int64_t _r = (int64_t)(int32_t)eax * (int64_t)(int32_t)MEM8(ecx + 0x54);
      eax = (uint32_t)_r; edx = (uint32_t)(_r >> 32); }
    MEM8(ecx + 0x5E) = LO8(eax);
    MEM8(ecx + 0x5D) = LO8(eax);
    MEM8(ecx + 0x5C) = LO8(eax);
    esp += 4; return; /* ret */

}

/**
 * sub_00102920
 * Original: 0x00102920 - 0x00102B21 (513 bytes, 124 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00102920(void)
{
    uint32_t ebp;
    int _flags = 0; /* fallback flag var */
    float xmm0, xmm1;
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_00102920: ;
    esp = esp - 0x88;
    PUSH32(esp, ebx);
    PUSH32(esp, ebp);
    ebp = MEM32(esp + 0xA8);
    (void)0; /* cmp LO16(ebp), 1 - flags set for next jcc */
    PUSH32(esp, esi);
    PUSH32(esp, edi);
    edi = MEM32(esp + 0x9C);
    esi = edx;
    if (CMP_GE(LO16(ebp), 1)) goto loc_00102945; /* jge: greater or equal (signed >=) */

loc_00102940: ;
    ebp = 1;

loc_00102945: ;
    if (CMP_GE(LO16(eax), 1)) goto loc_00102950; /* jge: greater or equal (signed >=) */

loc_0010294B: ;
    eax = 1;

loc_00102950: ;
    ebx = SX16(LO16(eax));
    MEM16(esp + 0x10) = LO16(eax);
    eax = 0xFF;
    edx = ((int32_t)eax < 0) ? 0xFFFFFFFF : 0; /* cdq */
    { int64_t _dividend = ((int64_t)(int32_t)edx << 32) | eax;
      eax = (uint32_t)((int32_t)(_dividend / (int32_t)ebx));
      edx = (uint32_t)((int32_t)(_dividend % (int32_t)ebx)); }
    ebx = 0xFF;
    MEM16(esp + 0x4C) = LO16(ebp);
    ebp = LO16(ebp);
    MEMF(esp + 0x18) = xmm0; /* movss */
    xmm0 = 0.0f; /* xorps self = zero */
    MEMF(esp + 0x20) = xmm0; /* movss */
    MEM32(esp + 0x48) = 0xD0;
    MEM8(esp + 0x28) = LO8(ebx);
    MEM8(esp + 0x29) = LO8(ebx);
    MEM8(esp + 0x2A) = LO8(ebx);
    MEM16(esp + 0x12) = LO16(eax);
    eax = ebx;
    edx = ((int32_t)eax < 0) ? 0xFFFFFFFF : 0; /* cdq */
    { int64_t _dividend = ((int64_t)(int32_t)edx << 32) | eax;
      eax = (uint32_t)((int32_t)(_dividend / (int32_t)ebp));
      edx = (uint32_t)((int32_t)(_dividend % (int32_t)ebp)); }
    SET_LO8(edx, MEM8(esp + 0xB8));
    MEM8(esp + 0x16) = LO8(edx);
    edx = ZX8(MEM8(0x75BFD4));
    xmm0 = (float)(int32_t)edx; /* cvtsi2ss */
    SET_LO8(edx, MEM8(esp + 0xAC));
    MEM8(esp + 0x2B) = LO8(edx);
    edx = MEM32(edi + 4);
    MEM32(esp + 0x64) = edx;
    edx = MEM32(esi);
    MEM32(esp + 0x6C) = edx;
    edx = MEM32(esi + 8);
    MEM32(esp + 0x74) = edx;
    edx = MEM32(ecx + 4);
    MEM32(esp + 0x7C) = edx;
    MEM16(esp + 0x4E) = LO16(eax);
    SET_LO16(eax, MEM16(esp + 0xB4));
    MEM16(esp + 0x14) = LO16(eax);
    SET_LO16(eax, MEM16(esp + 0xA8));
    MEM16(esp + 0x1C) = LO16(eax);
    eax = SX16(LO16(eax));
    xmm1 = (float)(int32_t)eax; /* cvtsi2ss */
    eax = MEM32(edi);
    xmm1 = xmm1 * MEMF(0x6497D0); /* mulss */
    MEM32(esp + 0x60) = eax;
    eax = MEM32(edi + 8);
    MEM32(esp + 0x68) = eax;
    eax = MEM32(esi + 4);
    xmm0 = xmm0 / xmm1; /* divss */
    MEMF(esp + 0x24) = xmm0; /* movss */
    xmm0 = MEMF(esp + 0xA4); /* movss */
    MEM32(esp + 0x70) = eax;
    eax = MEM32(ecx);
    MEMF(esp + 0x5C) = xmm0; /* movss */
    MEMF(esp + 0x58) = xmm0; /* movss */
    xmm0 = MEMF(esp + 0xA0); /* movss */
    MEM32(esp + 0x78) = eax;
    eax = MEM32(ecx + 8);
    MEMF(esp + 0x84) = xmm0; /* movss */
    xmm0 = MEMF(0x648D14); /* movss */
    edi = 1;
    MEM32(esp + 0x80) = eax;
    MEM16(esp + 0x50) = LO16(edi);
    MEMF(esp + 0x54) = xmm0; /* movss */
    PUSH32(esp, 0); sub_003E2480(); /* call 0x003E2480 */

loc_00102A76: ;
    esi = eax;
    esi = esi & edi;
    esi = esi << 1;
    PUSH32(esp, 0); sub_003E2480(); /* call 0x003E2480 */

loc_00102A81: ;
    eax = eax & edi;
    esi = esi | eax;
    SET_LO8(eax, LO8(eax) | 0xFF);
    esi = esi << 6;
    esi = esi | 0x80D207;
    MEM32(esp + 0x88) = esi;
    MEM8(esp + 0x90) = LO8(eax);
    MEM8(esp + 0x91) = LO8(eax);
    MEM8(esp + 0x92) = LO8(eax);
    eax = 2;
    esi = 0; /* xor self */
    MEM32(esp + 0x2C) = eax;
    MEM32(esp + 0x30) = eax;
    MEM32(esp + 0x34) = esi;
    ecx = MEM32(esp + 0xBC);
    PUSH32(esp, ecx);
    PUSH32(esp, 0xC);
    PUSH32(esp, esi);
    edx = esp + 0x28;
    PUSH32(esp, edi);
    PUSH32(esp, edx);
    MEM32(esp + 0x4C) = 4;
    MEM32(esp + 0x50) = eax;
    MEM32(esp + 0x54) = esi;
    MEM32(esp + 0x58) = edi;
    MEM8(esp + 0xA7) = LO8(eax);
    PUSH32(esp, 0); sub_00105450(); /* call 0x00105450 */

loc_00102AF0: ;
    esp = esp + 0x14;
    POP32(esp, edi);
    (void)0; /* cmp eax, esi - flags set for next jcc */
    POP32(esp, esi);
    POP32(esp, ebp);
    POP32(esp, ebx);
    if (CMP_EQ(eax, esi)) goto loc_00102B18; /* je: equal / zero */

loc_00102AFB: ;
    ecx = MEM32(esp + 8);
    edx = MEM32(esp);
    MEM32(eax + 0x170) = ecx;
    ecx = MEM32(esp + 4);
    MEM32(eax + 0x174) = edx;
    MEM32(eax + 0x178) = ecx;

loc_00102B18: ;
    eax = 0; /* xor self */
    esp = esp + 0x88;
    esp += 4; return; /* ret */

}

/**
 * sub_00102B30
 * Original: 0x00102B30 - 0x00102B89 (89 bytes, 24 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00102B30(void)
{
    int _flags = 0; /* fallback flag var */
    float xmm0;

loc_00102B30: ;
    SET_LO8(eax, MEM8(0x7819D5));
    (void)0; /* test LO8(eax), LO8(eax) - flags set for next jcc */
    PUSH32(esp, esi);
    esi = MEM32(esp + 8);
    if (TEST_NZ(LO8(eax), LO8(eax))) goto loc_00102B72; /* jne: not equal / not zero */

loc_00102B3E: ;
    SET_LO16(ecx, MEM16(esi + 0x178));
    if (CMP_EQ(LO16(ecx), 0xFFFFFFFFu)) goto loc_00102B72; /* je: equal / zero */

loc_00102B4B: ;
    SET_LO8(eax, MEM8(esi + 0x17A));
    if (CMP_EQ(LO8(eax), 0xFF)) goto loc_00102B72; /* je: equal / zero */

loc_00102B55: ;
    if (CMP_G(MEM16(esi + 0x2C), LO16(ecx))) goto loc_00102B72; /* jg: greater (signed >) */

loc_00102B5B: ;
    eax = SX8(LO8(eax));
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, esi);
    PUSH32(esp, 0); RECOMP_ICALL_SAFE(MEM32(eax * 4 + 0x5959CC), _icall_esp); /* indirect call */
    }

loc_00102B66: ;
    esp = esp + 4;
    MEM16(esi + 0x178) = 0xFFFF;

loc_00102B72: ;
    xmm0 = MEMF(esi + 0x170); /* movss */
    eax = esi + 0x88;
    PUSH32(esp, 0); sub_00106150(); /* call 0x00106150 */

loc_00102B85: ;
    SET_LO8(eax, 1);
    POP32(esp, esi);
    esp += 4; return; /* ret */

}

/**
 * sub_00102B90
 * Original: 0x00102B90 - 0x00102BCF (63 bytes, 14 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00102B90(void)
{
    float xmm0, xmm1;

loc_00102B90: ;
    eax = MEM32(esp + 4);
    xmm1 = MEMF(eax); /* movss */
    ecx = MEM32(esp + 0x18);
    xmm0 = MEMF(0x648D14); /* movss */
    xmm0 = xmm0 - MEMF(esp + 0x14); /* subss */
    xmm1 = xmm1 * xmm0; /* mulss */
    MEMF(ecx) = xmm1; /* movss */
    xmm1 = MEMF(eax + 4); /* movss */
    xmm1 = xmm1 * xmm0; /* mulss */
    MEMF(ecx + 4) = xmm1; /* movss */
    xmm1 = MEMF(eax + 8); /* movss */
    xmm1 = xmm1 * xmm0; /* mulss */
    MEMF(ecx + 8) = xmm1; /* movss */
    esp += 4; return; /* ret */

}

/**
 * sub_00102BD0
 * Original: 0x00102BD0 - 0x00102C03 (51 bytes, 15 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00102BD0(void)
{
    float xmm0;

loc_00102BD0: ;
    xmm0 = MEMF(0x648D14); /* movss */
    xmm0 = xmm0 - MEMF(esp + 0x14); /* subss */
    xmm0 = xmm0 * MEMF(esp + 0x10); /* mulss */
    eax = MEM32(esp + 0xC);
    PUSH32(esp, edi);
    edi = MEM32(esp + 0x1C);
    PUSH32(esp, ecx);
    ecx = MEM32(esp + 0x10);
    MEMF(esp) = xmm0; /* movss */
    PUSH32(esp, eax);
    PUSH32(esp, ecx);
    PUSH32(esp, 0); sub_00110510(); /* call 0x00110510 */

loc_00102BFE: ;
    esp = esp + 0xC;
    POP32(esp, edi);
    esp += 4; return; /* ret */

}

/**
 * sub_00102C10
 * Original: 0x00102C10 - 0x00102E19 (521 bytes, 139 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00102C10(void)
{
    uint32_t ebp;
    int _flags = 0; /* fallback flag var */
    float xmm0, xmm1;
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_00102C10: ;
    esp = esp - 0x30;
    SET_LO8(ecx, MEM8(esp + 0x80));
    PUSH32(esp, ebx);
    ebx = eax;
    eax = 0; /* xor self */
    (void)0; /* cmp LO8(ecx), LO8(eax) - flags set for next jcc */
    MEM32(esp + 4) = 0x102B90;
    if (CMP_EQ(LO8(ecx), LO8(eax))) goto loc_00102C33; /* je: equal / zero */

loc_00102C2B: ;
    MEM32(esp + 4) = 0x102BD0;

loc_00102C33: ;
    edx = MEM32(esp + 0x74);
    ecx = MEM32(esp + 0x78);
    (void)0; /* cmp LO16(edx), LO16(ecx) - flags set for next jcc */
    MEM32(esp + 8) = edx;
    if (CMP_L(LO16(edx), LO16(ecx))) goto loc_00102C48; /* jl: less (signed <) */

loc_00102C44: ;
    MEM32(esp + 8) = ecx;

loc_00102C48: ;
    (void)0; /* cmp ebx, eax - flags set for next jcc */
    xmm0 = MEMF(0x648D14); /* movss */
    xmm1 = (float)(int32_t)ebx; /* cvtsi2ss */
    xmm0 = xmm0 / xmm1; /* divss */
    MEMF(esp + 0x14) = xmm0; /* movss */
    xmm0 = 0.0f; /* xorps self = zero */
    MEMF(esp + 0x84) = xmm0; /* movss */
    if (CMP_EQ(ebx, eax)) goto loc_00102E14; /* je: equal / zero */

loc_00102C72: ;
    ecx = (uint32_t)(int32_t)SMEM16(esp + 0x68);
    MEM8(esp + 0x1C) = LO8(eax);
    MEM8(esp + 0x1D) = LO8(eax);
    MEM8(esp + 0x1E) = LO8(eax);
    MEM8(esp + 0x20) = LO8(eax);
    MEM8(esp + 0x21) = LO8(eax);
    SET_LO8(eax, 0x80);
    MEM8(esp + 0x25) = LO8(eax);
    MEM8(esp + 0x26) = LO8(eax);
    MEM8(esp + 0x27) = LO8(eax);
    eax = (uint32_t)(int32_t)SMEM16(esp + 0x70);
    PUSH32(esp, ebp);
    ecx++;
    eax++;
    PUSH32(esp, esi);
    MEM32(esp + 0x14) = ecx;
    MEM8(esp + 0x27) = 0x59;
    MEM8(esp + 0x2A) = 0xFF;
    MEM8(esp + 0x2B) = 0xFF;
    MEM8(esp + 0x2C) = 0xFF;
    MEM32(esp + 0x18) = eax;
    PUSH32(esp, edi);
    /* nop */

loc_00102CC0: ;
    PUSH32(esp, 0); sub_003E2480(); /* call 0x003E2480 */

loc_00102CC5: ;
    edx = ((int32_t)eax < 0) ? 0xFFFFFFFF : 0; /* cdq */
    { int64_t _dividend = ((int64_t)(int32_t)edx << 32) | eax;
      eax = (uint32_t)((int32_t)(_dividend / (int32_t)MEM32(esp + 0x18)));
      edx = (uint32_t)((int32_t)(_dividend % (int32_t)MEM32(esp + 0x18))); }
    edi = MEM32(esp + 0x70);
    ebp = edx;
    ebp = ebp + edi;
    PUSH32(esp, 0); sub_003E1D70(); /* call 0x003E1D70 */

loc_00102CD7: ;
    xmm0 = xmm0 * MEMF(esp + 0x60); /* mulss */
    PUSH32(esp, ecx);
    MEMF(esp) = xmm0; /* movss */
    PUSH32(esp, 0); sub_003E2480(); /* call 0x003E2480 */

loc_00102CE8: ;
    eax = eax & 0xFF;
    PUSH32(esp, eax);
    PUSH32(esp, 0); sub_003E2480(); /* call 0x003E2480 */

loc_00102CF3: ;
    eax = eax & 0xFF;
    PUSH32(esp, eax);
    edi = esp + 0x40;
    PUSH32(esp, 0); sub_00110510(); /* call 0x00110510 */

loc_00102D02: ;
    ecx = MEM32(esp + 0x9C);
    edx = MEM32(esp + 0x60);
    eax = esp + 0x34;
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, eax);
    eax = MEM32(esp + 0x60);
    PUSH32(esp, ecx);
    ecx = MEM32(esp + 0x60);
    PUSH32(esp, edx);
    edx = MEM32(esp + 0x60);
    PUSH32(esp, eax);
    PUSH32(esp, ecx);
    PUSH32(esp, edx);
    PUSH32(esp, 0); RECOMP_ICALL_SAFE(MEM32(esp + 0x34), _icall_esp); /* indirect call */
    }

loc_00102D27: ;
    esp = esp + 0x24;
    PUSH32(esp, 0); sub_003E2480(); /* call 0x003E2480 */

loc_00102D2F: ;
    esi = eax;
    esi = esi & 0x80000003u;
    if (((int32_t)esi >= 0)) goto loc_00102D3E; /* jns: not sign (positive) */

loc_00102D39: ;
    esi--;
    esi = esi | 0xFFFFFFFCu;
    esi++;

loc_00102D3E: ;
    PUSH32(esp, 0); sub_003E1D70(); /* call 0x003E1D70 */

loc_00102D43: ;
    xmm1 = MEMF(0x64A50C); /* movss */
    /* comiss xmm1, xmm0 - sets EFLAGS */
    if ((xmm1 <= xmm0)) goto loc_00102D57; /* jbe: below or equal (unsigned <=) */

loc_00102D50: ;
    eax = 0x19;
    goto loc_00102D5A;

loc_00102D57: ;
    eax = eax | 0xFFFFFFFFu;

loc_00102D5A: ;
    edx = MEM32(esp + 0x8C);
    ecx = esi + esi * 2;
    PUSH32(esp, edx);
    edx = MEM32(esp + 0x84);
    MEM32(esp + 0x28) = ecx;
    ecx = MEM32(esp + 0x8C);
    PUSH32(esp, ecx);
    PUSH32(esp, eax);
    PUSH32(esp, edx);
    PUSH32(esp, 0); sub_003E2480(); /* call 0x003E2480 */

loc_00102D7F: ;
    edx = ((int32_t)eax < 0) ? 0xFFFFFFFF : 0; /* cdq */
    { int64_t _dividend = ((int64_t)(int32_t)edx << 32) | eax;
      eax = (uint32_t)((int32_t)(_dividend / (int32_t)MEM32(esp + 0x2C)));
      edx = (uint32_t)((int32_t)(_dividend % (int32_t)MEM32(esp + 0x2C))); }
    SET_LO8(eax, MEM8(esp + 0x88));
    xmm0 = MEMF(esp + 0xA0); /* movss */
    xmm0 = xmm0 * MEMF(esp + 0x6C); /* mulss */
    xmm0 = xmm0 + MEMF(esp + 0x68); /* addss */
    SET_LO8(edx, LO8(edx) + LO8(eax));
    eax = MEM32(esp + 0x24);
    ebp = ebp + eax;
    PUSH32(esp, edx);
    PUSH32(esp, ebp);
    PUSH32(esp, ecx);
    MEMF(esp) = xmm0; /* movss */
    PUSH32(esp, 0); sub_003E1D70(); /* call 0x003E1D70 */

loc_00102DB5: ;
    xmm0 = xmm0 * MEMF(esp + 0x88); /* mulss */
    xmm0 = xmm0 + MEMF(esp + 0x84); /* addss */
    eax = MEM32(esp + 0xA0);
    PUSH32(esp, ecx);
    ecx = MEM32(esp + 0x64);
    MEMF(esp) = xmm0; /* movss */
    xmm0 = MEMF(esp + 0x84); /* movss */
    PUSH32(esp, ecx);
    ecx = esp + 0x4C;
    edx = esp + 0x58;
    PUSH32(esp, 0); sub_00102920(); /* call 0x00102920 */

loc_00102DEF: ;
    xmm0 = MEMF(esp + 0xB4); /* movss */
    xmm0 = xmm0 + MEMF(esp + 0x44); /* addss */
    esp = esp + 0x24;
    ebx--;
    MEMF(esp + 0x90) = xmm0; /* movss */
    if ((ebx != 0)) goto loc_00102CC0; /* jne: not equal / not zero */

loc_00102E11: ;
    POP32(esp, edi);
    POP32(esp, esi);
    POP32(esp, ebp);

loc_00102E14: ;
    POP32(esp, ebx);
    esp = esp + 0x30;
    esp += 4; return; /* ret */

}

/**
 * sub_00102E20
 * Original: 0x00102E20 - 0x00102FF7 (471 bytes, 98 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00102E20(void)
{
    int _flags = 0; /* fallback flag var */
    float xmm0, xmm1;

loc_00102E20: ;
    esp = esp - 0x70;
    edx = MEM32(esp + 0x74);
    eax = edx + 0x70;
    ecx = MEM32(eax);
    MEM32(esp + 8) = ecx;
    ecx = MEM32(eax + 4);
    eax = MEM32(eax + 8);
    MEM32(esp + 0x10) = eax;
    eax = MEM32(edx + 0x98);
    (void)0; /* test HI8(eax), 0x10 - flags set for next jcc */
    MEM32(esp) = 8;
    MEM32(esp + 4) = 6;
    MEM32(esp + 0xC) = ecx;
    if (TEST_Z(HI8(eax), 0x10)) goto loc_00102E91; /* je: equal / zero */

loc_00102E58: ;
    xmm0 = MEMF(edx + 0x7C); /* movss */
    xmm0 = xmm0 + MEMF(esp + 8); /* addss */
    MEMF(esp + 8) = xmm0; /* movss */
    xmm0 = MEMF(edx + 0x80); /* movss */
    xmm0 = xmm0 + MEMF(esp + 0xC); /* addss */
    MEMF(esp + 0xC) = xmm0; /* movss */
    xmm0 = MEMF(edx + 0x84); /* movss */
    xmm0 = xmm0 + MEMF(esp + 0x10); /* addss */
    MEMF(esp + 0x10) = xmm0; /* movss */

loc_00102E91: ;
    xmm0 = MEMF(edx + 0x6C); /* movss */
    xmm0 = xmm0 + MEMF(edx + 0x68); /* addss */
    xmm0 = xmm0 * MEMF(0x648D10); /* mulss */
    ecx = 0xFF;
    xmm1 = xmm0; /* movaps */
    xmm0 = xmm0 * MEMF(0x64A508); /* mulss */
    xmm1 = xmm1 * MEMF(0x649418); /* mulss */
    MEM16(esp + 0x2E) = LO16(ecx);
    MEM8(esp + 0x47) = LO8(ecx);
    MEM8(esp + 0x48) = LO8(ecx);
    MEM8(esp + 0x4F) = LO8(ecx);
    MEM8(esp + 0x4E) = LO8(ecx);
    MEM8(esp + 0x4D) = LO8(ecx);
    MEM8(esp + 0x50) = LO8(ecx);
    MEM8(esp + 0x55) = LO8(ecx);
    SET_LO8(ecx, LO8(ecx) | 0xFF);
    MEMF(esp + 0x18) = xmm0; /* movss */
    xmm0 = MEMF(0x64A504); /* movss */
    MEM8(esp + 0x6C) = LO8(ecx);
    MEM8(esp + 0x6E) = LO8(ecx);
    MEM8(esp + 0x6F) = LO8(ecx);
    ecx = 0; /* xor self */
    SET_LO8(ecx, MEM8(edx + 4));
    PUSH32(esp, ebx);
    MEMF(esp + 0x20) = xmm0; /* movss */
    xmm0 = 0.0f; /* xorps self = zero */
    eax = 0; /* xor self */
    ebx = 3;
    MEMF(esp + 0x24) = xmm0; /* movss */
    xmm0 = MEMF(0x648CDC); /* movss */
    MEM32(esp + 0x38) = ebx;
    MEM8(esp + 0x48) = LO8(ebx);
    SET_LO8(ebx, 0xC8);
    MEMF(esp + 0x28) = xmm0; /* movss */
    xmm0 = MEMF(0x648CE4); /* movss */
    MEM8(esp + 0x4A) = LO8(ebx);
    MEM8(esp + 0x49) = LO8(ebx);
    PUSH32(esp, ecx);
    edx = esp + 8;
    MEMF(esp + 0x30) = xmm0; /* movss */
    xmm0 = MEMF(0x648D14); /* movss */
    SET_LO8(ebx, 0x37);
    PUSH32(esp, edx);
    MEMF(esp + 0x20) = xmm1; /* movss */
    MEM16(esp + 0x38) = LO16(eax);
    MEM16(esp + 0x3C) = 0xFFC0;
    MEM16(esp + 0x3E) = 0x56;
    MEM32(esp + 0x44) = 1;
    MEM16(esp + 0x48) = 0x11;
    MEM16(esp + 0x4A) = 0x12;
    MEM16(esp + 0x4C) = 1;
    MEM8(esp + 0x4E) = 4;
    MEM8(esp + 0x4F) = 2;
    MEM8(esp + 0x57) = LO8(eax);
    MEM8(esp + 0x56) = LO8(ebx);
    MEM8(esp + 0x55) = LO8(ebx);
    MEM8(esp + 0x58) = LO8(eax);
    MEM8(esp + 0x5F) = LO8(eax);
    MEM8(esp + 0x5E) = LO8(eax);
    MEM8(esp + 0x5D) = LO8(eax);
    MEM8(esp + 0x60) = LO8(eax);
    MEM8(esp + 0x62) = LO8(eax);
    MEM32(esp + 0x64) = 0x205;
    MEM32(esp + 0x68) = 0x63000;
    MEM16(esp + 0x6C) = 7;
    MEM16(esp + 0x6E) = 0x24;
    MEM16(esp + 0x70) = 1;
    MEM8(esp + 0x72) = LO8(eax);
    MEMF(esp + 0x74) = xmm0; /* movss */
    MEM8(esp + 0x79) = LO8(eax);
    PUSH32(esp, 0); sub_000F4BF0(); /* call 0x000F4BF0 */

loc_00102FEF: ;
    esp = esp + 8;
    POP32(esp, ebx);
    esp = esp + 0x70;
    esp += 4; return; /* ret */

}

/**
 * sub_00103000
 * Original: 0x00103000 - 0x001031CF (463 bytes, 97 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00103000(void)
{
    int _flags = 0; /* fallback flag var */
    float xmm0, xmm1;

loc_00103000: ;
    esp = esp - 0x70;
    edx = MEM32(esp + 0x74);
    eax = edx + 0x70;
    ecx = MEM32(eax);
    MEM32(esp + 8) = ecx;
    ecx = MEM32(eax + 4);
    eax = MEM32(eax + 8);
    MEM32(esp + 0x10) = eax;
    eax = MEM32(edx + 0x98);
    (void)0; /* test HI8(eax), 0x10 - flags set for next jcc */
    MEM32(esp) = 0xA;
    MEM32(esp + 4) = 0xF;
    MEM32(esp + 0xC) = ecx;
    if (TEST_Z(HI8(eax), 0x10)) goto loc_00103071; /* je: equal / zero */

loc_00103038: ;
    xmm0 = MEMF(edx + 0x7C); /* movss */
    xmm0 = xmm0 + MEMF(esp + 8); /* addss */
    MEMF(esp + 8) = xmm0; /* movss */
    xmm0 = MEMF(edx + 0x80); /* movss */
    xmm0 = xmm0 + MEMF(esp + 0xC); /* addss */
    MEMF(esp + 0xC) = xmm0; /* movss */
    xmm0 = MEMF(edx + 0x84); /* movss */
    xmm0 = xmm0 + MEMF(esp + 0x10); /* addss */
    MEMF(esp + 0x10) = xmm0; /* movss */

loc_00103071: ;
    xmm0 = MEMF(edx + 0x6C); /* movss */
    xmm0 = xmm0 + MEMF(edx + 0x68); /* addss */
    xmm0 = xmm0 * MEMF(0x648D10); /* mulss */
    ecx = 0xFF;
    MEM16(esp + 0x2E) = LO16(ecx);
    MEM8(esp + 0x47) = LO8(ecx);
    MEM8(esp + 0x48) = LO8(ecx);
    MEM8(esp + 0x4F) = LO8(ecx);
    MEM8(esp + 0x4E) = LO8(ecx);
    MEM8(esp + 0x4D) = LO8(ecx);
    MEM8(esp + 0x50) = LO8(ecx);
    MEM8(esp + 0x55) = LO8(ecx);
    SET_LO8(ecx, LO8(ecx) | 0xFF);
    xmm1 = xmm0; /* movaps */
    xmm0 = xmm0 * MEMF(0x64A500); /* mulss */
    xmm1 = xmm1 * MEMF(0x64A4FC); /* mulss */
    MEM8(esp + 0x6C) = LO8(ecx);
    MEM8(esp + 0x6E) = LO8(ecx);
    MEM8(esp + 0x6F) = LO8(ecx);
    ecx = 0; /* xor self */
    SET_LO8(ecx, MEM8(edx + 4));
    PUSH32(esp, ebx);
    MEMF(esp + 0x1C) = xmm0; /* movss */
    xmm0 = MEMF(0x64A4F8); /* movss */
    eax = 0; /* xor self */
    ebx = 2;
    MEMF(esp + 0x20) = xmm0; /* movss */
    xmm0 = 0.0f; /* xorps self = zero */
    MEM32(esp + 0x3C) = ebx;
    MEM8(esp + 0x47) = LO8(ebx);
    SET_LO8(ebx, 0xC8);
    MEMF(esp + 0x24) = xmm0; /* movss */
    xmm0 = MEMF(0x648CDC); /* movss */
    MEM8(esp + 0x4A) = LO8(ebx);
    MEM8(esp + 0x49) = LO8(ebx);
    PUSH32(esp, ecx);
    edx = esp + 8;
    MEMF(esp + 0x2C) = xmm0; /* movss */
    MEMF(esp + 0x30) = xmm0; /* movss */
    xmm0 = MEMF(0x648D14); /* movss */
    SET_LO8(ebx, 0x37);
    PUSH32(esp, edx);
    MEMF(esp + 0x20) = xmm1; /* movss */
    MEM16(esp + 0x38) = LO16(eax);
    MEM16(esp + 0x3C) = 0xFFC0;
    MEM16(esp + 0x3E) = 0x56;
    MEM32(esp + 0x40) = 3;
    MEM16(esp + 0x48) = 0xF;
    MEM16(esp + 0x4A) = 0x1E;
    MEM16(esp + 0x4C) = 1;
    MEM8(esp + 0x4E) = 4;
    MEM8(esp + 0x50) = 3;
    MEM8(esp + 0x57) = LO8(eax);
    MEM8(esp + 0x56) = LO8(ebx);
    MEM8(esp + 0x55) = LO8(ebx);
    MEM8(esp + 0x58) = LO8(eax);
    MEM8(esp + 0x5F) = LO8(eax);
    MEM8(esp + 0x5E) = LO8(eax);
    MEM8(esp + 0x5D) = LO8(eax);
    MEM8(esp + 0x60) = LO8(eax);
    MEM8(esp + 0x62) = LO8(eax);
    MEM32(esp + 0x64) = 0x205;
    MEM32(esp + 0x68) = 0x63000;
    MEM16(esp + 0x6C) = 0xF;
    MEM16(esp + 0x6E) = 0x11;
    MEM16(esp + 0x70) = 1;
    MEM8(esp + 0x72) = LO8(eax);
    MEMF(esp + 0x74) = xmm0; /* movss */
    MEM8(esp + 0x79) = LO8(eax);
    PUSH32(esp, 0); sub_000F4BF0(); /* call 0x000F4BF0 */

loc_001031C7: ;
    esp = esp + 8;
    POP32(esp, ebx);
    esp = esp + 0x70;
    esp += 4; return; /* ret */

}

/**
 * sub_001031D0
 * Original: 0x001031D0 - 0x0010321D (77 bytes, 23 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_001031D0(void)
{
    uint32_t ebp;
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_001031D0: ;
    esp = esp - 0x18;
    eax = ZX8(LO8(eax));
    PUSH32(esp, esi);
    PUSH32(esp, edi);
    edi = eax;
    edi = (uint32_t)((int32_t)edi * (int32_t)0x38);
    eax = eax + eax * 4;
    eax = eax << 2;
    ecx = MEM32(eax + 0x774974);
    edx = MEM32(eax + 0x774978);
    edi = edi + 0x6B6A18;
    eax = edi + 0x20;
    MEM32(esp + 0xC) = ecx;
    MEM32(esp + 8) = edx;
    MEM32(esp + 0x10) = eax;
    ecx = edi + 0x24;
    edx = edi + 0x18;
    eax = edi + 0x1C;
    MEM32(esp + 0x14) = ecx;
    MEM32(esp + 0x18) = edx;
    MEM32(esp + 0x1C) = eax;
    esi = 0; /* xor self */
    g_seh_ebp = ebp; sub_00103220(); return; /* tail jmp 0x00103220 */

}

/**
 * sub_001032F0
 * Original: 0x001032F0 - 0x0010349D (429 bytes, 85 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_001032F0(void)
{
    int _flags = 0; /* fallback flag var */
    float xmm0, xmm1;

loc_001032F0: ;
    PUSH32(esp, esi);
    esi = MEM32(esp + 8);
    PUSH32(esp, edi);
    edi = MEM32(0x7FA20C);
    MEM16(esi + 0x31C) = MEM16(esi + 0x31C) - LO16(edi);
    SET_LO16(eax, MEM16(esi + 0x31C));
    if (((int32_t)MEM16(esi + 0x31C) >= 0)) goto loc_0010334B; /* jns: not sign (positive) */

loc_0010330C: ;
    PUSH32(esp, 0); sub_003E2480(); /* call 0x003E2480 */

loc_00103311: ;
    ecx = (uint32_t)(int32_t)SMEM16(esi + 0x31E);
    edx = ((int32_t)eax < 0) ? 0xFFFFFFFF : 0; /* cdq */
    { int64_t _dividend = ((int64_t)(int32_t)edx << 32) | eax;
      eax = (uint32_t)((int32_t)(_dividend / (int32_t)ecx));
      edx = (uint32_t)((int32_t)(_dividend % (int32_t)ecx)); }
    MEM16(esi + 0x31C) = LO16(edx);
    PUSH32(esp, 0); sub_003E1D70(); /* call 0x003E1D70 */

loc_00103327: ;
    xmm1 = MEMF(esi + 0x310); /* movss */
    xmm1 = xmm1 - MEMF(esi + 0x314); /* subss */
    xmm0 = xmm0 * xmm1; /* mulss */
    xmm0 = xmm0 + MEMF(esi + 0x314); /* addss */
    MEMF(esi + 0x318) = xmm0; /* movss */

loc_0010334B: ;
    xmm0 = MEMF(esi + 0x318); /* movss */
    xmm0 = xmm0 - MEMF(esi + 0x38); /* subss */
    xmm0 = xmm0 * MEMF(esi + 0x320); /* mulss */
    xmm0 = xmm0 + MEMF(esi + 0x38); /* addss */
    MEMF(esi + 0x38) = xmm0; /* movss */
    MEM16(esi + 0x334) = MEM16(esi + 0x334) - LO16(edi);
    if (CMP_GE(MEM16(esi + 0x334), 0)) goto loc_001033E6; /* jge: greater or equal (signed >=) */

loc_0010337B: ;
    PUSH32(esp, 0); sub_003E2480(); /* call 0x003E2480 */

loc_00103380: ;
    ecx = (uint32_t)(int32_t)SMEM16(esi + 0x336);
    edx = ((int32_t)eax < 0) ? 0xFFFFFFFF : 0; /* cdq */
    { int64_t _dividend = ((int64_t)(int32_t)edx << 32) | eax;
      eax = (uint32_t)((int32_t)(_dividend / (int32_t)ecx));
      edx = (uint32_t)((int32_t)(_dividend % (int32_t)ecx)); }
    MEM16(esi + 0x334) = LO16(edx);
    PUSH32(esp, 0); sub_003E2480(); /* call 0x003E2480 */

loc_00103396: ;
    if (TEST_Z(LO8(eax), 3)) goto loc_001033BD; /* je: equal / zero */

loc_0010339A: ;
    PUSH32(esp, 0); sub_003E1D70(); /* call 0x003E1D70 */

loc_0010339F: ;
    xmm1 = MEMF(esi + 0x324); /* movss */
    xmm1 = xmm1 - MEMF(esi + 0x328); /* subss */
    xmm0 = xmm0 * xmm1; /* mulss */
    xmm0 = xmm0 + MEMF(esi + 0x328); /* addss */
    goto loc_001033DE;

loc_001033BD: ;
    PUSH32(esp, 0); sub_003E1D70(); /* call 0x003E1D70 */

loc_001033C2: ;
    xmm1 = MEMF(esi + 0x32C); /* movss */
    xmm1 = xmm1 - MEMF(esi + 0x324); /* subss */
    xmm0 = xmm0 * xmm1; /* mulss */
    xmm0 = xmm0 + MEMF(esi + 0x324); /* addss */

loc_001033DE: ;
    MEMF(esi + 0x330) = xmm0; /* movss */

loc_001033E6: ;
    xmm0 = MEMF(esi + 0x330); /* movss */
    xmm0 = xmm0 - MEMF(esi + 0x3C); /* subss */
    xmm0 = xmm0 * MEMF(esi + 0x338); /* mulss */
    xmm0 = xmm0 + MEMF(esi + 0x3C); /* addss */
    MEMF(esi + 0x3C) = xmm0; /* movss */
    MEM16(esi + 0x348) = MEM16(esi + 0x348) - LO16(edi);
    if (CMP_GE(MEM16(esi + 0x348), 0)) goto loc_0010344B; /* jge: greater or equal (signed >=) */

loc_00103416: ;
    PUSH32(esp, 0); sub_003E2480(); /* call 0x003E2480 */

loc_0010341B: ;
    ecx = (uint32_t)(int32_t)SMEM16(esi + 0x34A);
    edx = ((int32_t)eax < 0) ? 0xFFFFFFFF : 0; /* cdq */
    { int64_t _dividend = ((int64_t)(int32_t)edx << 32) | eax;
      eax = (uint32_t)((int32_t)(_dividend / (int32_t)ecx));
      edx = (uint32_t)((int32_t)(_dividend % (int32_t)ecx)); }
    edi = MEM32(esi + 0x340);
    MEM16(esi + 0x348) = LO16(edx);
    PUSH32(esp, 0); sub_003E2480(); /* call 0x003E2480 */

loc_00103437: ;
    ecx = MEM32(esi + 0x33C);
    ecx = ecx - edi;
    ecx++;
    edx = ((int32_t)eax < 0) ? 0xFFFFFFFF : 0; /* cdq */
    { int64_t _dividend = ((int64_t)(int32_t)edx << 32) | eax;
      eax = (uint32_t)((int32_t)(_dividend / (int32_t)ecx));
      edx = (uint32_t)((int32_t)(_dividend % (int32_t)ecx)); }
    edx = edx + edi;
    MEM32(esi + 0x344) = edx;

loc_0010344B: ;
    (void)0; /* cmp MEM16(esi + 0x36), 5 - flags set for next jcc */
    xmm0 = (float)(int32_t)MEM32(esi + 0x344); /* cvtsi2ss */
    xmm0 = xmm0 - MEMF(esi + 0x8C); /* subss */
    xmm0 = xmm0 * MEMF(esi + 0x34C); /* mulss */
    xmm0 = xmm0 + MEMF(esi + 0x8C); /* addss */
    MEMF(esi + 0x8C) = xmm0; /* movss */
    if (CMP_GE(MEM16(esi + 0x36), 5)) goto loc_00103495; /* jge: greater or equal (signed >=) */

loc_0010347A: ;
    SET_LO8(eax, MEM8(esi + 0x358));
    MEM8(esi + 0x149) = LO8(eax);
    eax = MEM32(esi + 0x64);
    eax = eax & 0xFFFFFFFEu;
    MEM16(esi + 0x36) = 0x12C;
    MEM32(esi + 0x64) = eax;

loc_00103495: ;
    POP32(esp, edi);
    eax = 1;
    POP32(esp, esi);
    esp += 4; return; /* ret */

}

/**
 * sub_001034A0
 * Original: 0x001034A0 - 0x0010356D (205 bytes, 46 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_001034A0(void)
{
    int _flags = 0; /* fallback flag var */
    float xmm0, xmm1, xmm2;

loc_001034A0: ;
    eax = MEM32(esp + 4);
    SET_LO8(ecx, MEM8(eax + 0x14D));
    (void)0; /* test LO8(ecx), 2 - flags set for next jcc */
    xmm1 = MEMF(0x6490A0); /* movss */
    SET_LO8(edx, 1);
    if (TEST_NZ(LO8(ecx), 2)) goto loc_001034F6; /* jne: not equal / not zero */

loc_001034B9: ;
    xmm0 = MEMF(eax + 0x318); /* movss */
    xmm0 = xmm0 - MEMF(eax + 0x38); /* subss */
    xmm0 = xmm0 * MEMF(eax + 0x354); /* mulss */
    xmm0 = xmm0 + MEMF(eax + 0x38); /* addss */
    MEMF(eax + 0x38) = xmm0; /* movss */
    xmm2 = MEMF(eax + 0x318); /* movss */
    xmm2 = xmm2 * xmm1; /* mulss */
    /* comiss xmm0, xmm2 - sets EFLAGS */
    if ((xmm0 <= xmm2)) goto loc_001034F4; /* jbe: below or equal (unsigned <=) */

loc_001034E9: ;
    SET_LO8(ecx, LO8(ecx) | 2);
    MEM8(eax + 0x14D) = LO8(ecx);
    goto loc_001034F6;

loc_001034F4: ;
    SET_LO8(edx, 0); /* xor self */

loc_001034F6: ;
    SET_LO8(ecx, MEM8(eax + 0x14D));
    if (TEST_NZ(LO8(ecx), 8)) goto loc_0010353A; /* jne: not equal / not zero */

loc_00103501: ;
    xmm0 = MEMF(eax + 0x330); /* movss */
    xmm0 = xmm0 - MEMF(eax + 0x3C); /* subss */
    xmm0 = xmm0 * MEMF(eax + 0x354); /* mulss */
    xmm0 = xmm0 + MEMF(eax + 0x3C); /* addss */
    MEMF(eax + 0x3C) = xmm0; /* movss */
    xmm2 = MEMF(eax + 0x330); /* movss */
    xmm2 = xmm2 * xmm1; /* mulss */
    /* comiss xmm0, xmm2 - sets EFLAGS */
    if ((xmm0 <= xmm2)) goto loc_00103545; /* jbe: below or equal (unsigned <=) */

loc_00103531: ;
    SET_LO8(ecx, LO8(ecx) | 8);
    MEM8(eax + 0x14D) = LO8(ecx);

loc_0010353A: ;
    if (TEST_Z(LO8(edx), LO8(edx))) goto loc_00103545; /* je: equal / zero */

loc_0010353E: ;
    MEM8(eax + 0x149) = 0xD;

loc_00103545: ;
    if (CMP_GE(MEM16(eax + 0x36), 5)) goto loc_00103567; /* jge: greater or equal (signed >=) */

loc_0010354C: ;
    SET_LO8(ecx, MEM8(eax + 0x358));
    MEM8(eax + 0x149) = LO8(ecx);
    ecx = MEM32(eax + 0x64);
    ecx = ecx & 0xFFFFFFFEu;
    MEM16(eax + 0x36) = 0x64;
    MEM32(eax + 0x64) = ecx;

loc_00103567: ;
    eax = 1;
    esp += 4; return; /* ret */

}

/**
 * sub_00103570
 * Original: 0x00103570 - 0x001035C3 (83 bytes, 18 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00103570(void)
{
    int _flags = 0; /* fallback flag var */
    float xmm0, xmm1;

loc_00103570: ;
    eax = MEM32(esp + 4);
    xmm0 = MEMF(eax + 0x350); /* movss */
    xmm0 = xmm0 * MEMF(eax + 0x38); /* mulss */
    xmm1 = MEMF(eax + 0x38); /* movss */
    xmm1 = xmm1 - xmm0; /* subss */
    xmm0 = MEMF(eax + 0x3C); /* movss */
    MEMF(eax + 0x38) = xmm1; /* movss */
    xmm1 = MEMF(eax + 0x350); /* movss */
    xmm1 = xmm1 * MEMF(eax + 0x3C); /* mulss */
    xmm0 = xmm0 - xmm1; /* subss */
    xmm1 = MEMF(0x648CE0); /* movss */
    /* comiss xmm1, MEMF(eax + 0x38) - sets EFLAGS */
    MEMF(eax + 0x3C) = xmm0; /* movss */
    if ((xmm1 > MEMF(eax + 0x38))) { sub_001035C3(); return; } /* ja: above (unsigned >) */

loc_001035B8: ;
    /* comiss xmm1, xmm0 - sets EFLAGS */
    if ((xmm1 > xmm0)) { sub_001035C3(); return; } /* ja: above (unsigned >) */

loc_001035BD: ;
    eax = 1;
    esp += 4; return; /* ret */

}

/**
 * sub_001035D0
 * Original: 0x001035D0 - 0x00103656 (134 bytes, 28 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_001035D0(void)
{
    int _flags = 0; /* fallback flag var */
    float xmm0, xmm1;

loc_001035D0: ;
    eax = MEM32(esp + 4);
    xmm0 = MEMF(eax + 0x350); /* movss */
    xmm0 = xmm0 * MEMF(eax + 0x38); /* mulss */
    xmm1 = MEMF(eax + 0x38); /* movss */
    xmm1 = xmm1 - xmm0; /* subss */
    MEMF(eax + 0x38) = xmm1; /* movss */
    xmm0 = MEMF(eax + 0x350); /* movss */
    xmm0 = xmm0 * MEMF(eax + 0x3C); /* mulss */
    xmm1 = MEMF(eax + 0x3C); /* movss */
    xmm1 = xmm1 - xmm0; /* subss */
    xmm0 = MEMF(eax + 0x58); /* movss */
    MEMF(eax + 0x3C) = xmm1; /* movss */
    xmm1 = MEMF(0x7FA24C); /* movss */
    xmm0 = xmm0 * xmm1; /* mulss */
    xmm0 = xmm0 + MEMF(eax + 0x5C); /* addss */
    MEMF(eax + 0x5C) = xmm0; /* movss */
    xmm0 = xmm0 * xmm1; /* mulss */
    xmm0 = xmm0 + MEMF(eax + 0x44); /* addss */
    MEMF(eax + 0x44) = xmm0; /* movss */
    /* comiss xmm0, MEMF(eax + 0x35C) - sets EFLAGS */
    if ((xmm0 > MEMF(eax + 0x35C))) { sub_00103656(); return; } /* ja: above (unsigned >) */

loc_0010363C: ;
    xmm0 = MEMF(0x648D18); /* movss */
    /* comiss xmm0, MEMF(eax + 0x38) - sets EFLAGS */
    if ((xmm0 > MEMF(eax + 0x38))) { sub_00103656(); return; } /* ja: above (unsigned >) */

loc_0010364A: ;
    /* comiss xmm0, MEMF(eax + 0x3C) - sets EFLAGS */
    if ((xmm0 > MEMF(eax + 0x3C))) { sub_00103656(); return; } /* ja: above (unsigned >) */

loc_00103650: ;
    eax = 1;
    esp += 4; return; /* ret */

}

/**
 * sub_00103660
 * Original: 0x00103660 - 0x00103735 (213 bytes, 48 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00103660(void)
{
    float xmm0, xmm1, xmm2;

loc_00103660: ;
    ecx = MEM32(esp + 4);
    xmm2 = MEMF(ecx + 0x40); /* movss */
    edx = (uint32_t)(int32_t)SMEM16(esp + 8);
    edx = edx << 2;
    xmm1 = MEMF(edx + 0x77148C); /* movss */
    xmm0 = MEMF(edx + 0x77149C); /* movss */
    xmm1 = xmm1 * MEMF(ecx + 0x38); /* mulss */
    xmm0 = xmm0 * MEMF(ecx + 0x38); /* mulss */
    xmm2 = xmm2 + xmm1; /* addss */
    eax = ecx + 0x294;
    edx = (int32_t)xmm2; /* cvttss2si */
    edx = SX16(LO16(edx));
    xmm2 = (float)(int32_t)edx; /* cvtsi2ss */
    MEMF(eax + 0x54) = xmm2; /* movss */
    MEMF(eax) = xmm2; /* movss */
    edx = (int32_t)MEMF(ecx + 0x44); /* cvttss2si */
    edx = SX16(LO16(edx));
    xmm2 = (float)(int32_t)edx; /* cvtsi2ss */
    MEMF(eax + 0x20) = xmm2; /* movss */
    MEMF(eax + 4) = xmm2; /* movss */
    xmm2 = MEMF(ecx + 0x48); /* movss */
    xmm2 = xmm2 - xmm0; /* subss */
    edx = (int32_t)xmm2; /* cvttss2si */
    edx = SX16(LO16(edx));
    xmm2 = (float)(int32_t)edx; /* cvtsi2ss */
    MEMF(eax + 0x5C) = xmm2; /* movss */
    MEMF(eax + 8) = xmm2; /* movss */
    xmm2 = MEMF(ecx + 0x40); /* movss */
    xmm2 = xmm2 - xmm1; /* subss */
    edx = (int32_t)xmm2; /* cvttss2si */
    edx = SX16(LO16(edx));
    xmm1 = (float)(int32_t)edx; /* cvtsi2ss */
    MEMF(eax + 0x38) = xmm1; /* movss */
    MEMF(eax + 0x1C) = xmm1; /* movss */
    xmm1 = MEMF(ecx + 0x3C); /* movss */
    xmm1 = xmm1 + MEMF(ecx + 0x44); /* addss */
    edx = (int32_t)xmm1; /* cvttss2si */
    edx = SX16(LO16(edx));
    xmm1 = (float)(int32_t)edx; /* cvtsi2ss */
    MEMF(eax + 0x58) = xmm1; /* movss */
    MEMF(eax + 0x3C) = xmm1; /* movss */
    xmm0 = xmm0 + MEMF(ecx + 0x48); /* addss */
    ecx = (int32_t)xmm0; /* cvttss2si */
    edx = SX16(LO16(ecx));
    xmm0 = (float)(int32_t)edx; /* cvtsi2ss */
    MEMF(eax + 0x40) = xmm0; /* movss */
    MEMF(eax + 0x24) = xmm0; /* movss */
    esp += 4; return; /* ret */

}

/**
 * sub_00103740
 * Original: 0x00103740 - 0x0010378A (74 bytes, 17 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00103740(void)
{
    float xmm0;

loc_00103740: ;
    PUSH32(esp, 0); sub_003E2480(); /* call 0x003E2480 */

loc_00103745: ;
    PUSH32(esp, 0); sub_003E2480(); /* call 0x003E2480 */

loc_0010374A: ;
    PUSH32(esp, 0); sub_003E2480(); /* call 0x003E2480 */

loc_0010374F: ;
    PUSH32(esp, 0); sub_003E2480(); /* call 0x003E2480 */

loc_00103754: ;
    PUSH32(esp, 0); sub_003E2480(); /* call 0x003E2480 */

loc_00103759: ;
    PUSH32(esp, 0); sub_003E2480(); /* call 0x003E2480 */

loc_0010375E: ;
    PUSH32(esp, 0); sub_003E2480(); /* call 0x003E2480 */

loc_00103763: ;
    eax = MEM32(esp + 4);
    xmm0 = MEMF(0x5A005C); /* movss */
    PUSH32(esp, 0x42480000);
    PUSH32(esp, 0x42700000);
    eax = eax + 0x40;
    SET_LO8(edx, LO8(edx) | 0xFF);
    PUSH32(esp, 0); sub_00188230(); /* call 0x00188230 */

loc_00103784: ;
    esp = esp + 8;
    SET_LO8(eax, 0); /* xor self */
    esp += 4; return; /* ret */

}

/**
 * sub_00103790
 * Original: 0x00103790 - 0x00103877 (231 bytes, 53 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00103790(void)
{
    float xmm0, xmm1, xmm2;

loc_00103790: ;
    ecx = MEM32(esp + 4);
    edx = (uint32_t)(int32_t)SMEM16(esp + 8);
    eax = ecx + 0x294;
    edx = edx << 2;
    xmm0 = MEMF(edx + 0x77149C); /* movss */
    xmm1 = MEMF(edx + 0x77148C); /* movss */
    xmm1 = xmm1 * MEMF(ecx + 0x38); /* mulss */
    xmm0 = xmm0 * MEMF(ecx + 0x38); /* mulss */
    edx = 0; /* xor self */
    MEM16(eax + 0x18) = LO16(edx);
    MEM16(eax + 0x34) = LO16(edx);
    MEM16(eax + 0x50) = LO16(edx);
    MEM16(eax + 0x6C) = LO16(edx);
    xmm2 = MEMF(ecx + 0x40); /* movss */
    xmm2 = xmm2 + xmm1; /* addss */
    edx = (int32_t)xmm2; /* cvttss2si */
    edx = SX16(LO16(edx));
    xmm2 = (float)(int32_t)edx; /* cvtsi2ss */
    MEMF(eax + 0x54) = xmm2; /* movss */
    MEMF(eax) = xmm2; /* movss */
    edx = (int32_t)MEMF(ecx + 0x44); /* cvttss2si */
    edx = SX16(LO16(edx));
    xmm2 = (float)(int32_t)edx; /* cvtsi2ss */
    MEMF(eax + 0x20) = xmm2; /* movss */
    MEMF(eax + 4) = xmm2; /* movss */
    xmm2 = MEMF(ecx + 0x48); /* movss */
    xmm2 = xmm2 - xmm0; /* subss */
    edx = (int32_t)xmm2; /* cvttss2si */
    edx = SX16(LO16(edx));
    xmm2 = (float)(int32_t)edx; /* cvtsi2ss */
    MEMF(eax + 0x5C) = xmm2; /* movss */
    MEMF(eax + 8) = xmm2; /* movss */
    xmm2 = MEMF(ecx + 0x40); /* movss */
    xmm2 = xmm2 - xmm1; /* subss */
    edx = (int32_t)xmm2; /* cvttss2si */
    edx = SX16(LO16(edx));
    xmm1 = (float)(int32_t)edx; /* cvtsi2ss */
    MEMF(eax + 0x38) = xmm1; /* movss */
    MEMF(eax + 0x1C) = xmm1; /* movss */
    xmm1 = MEMF(ecx + 0x3C); /* movss */
    xmm1 = xmm1 + MEMF(ecx + 0x44); /* addss */
    edx = (int32_t)xmm1; /* cvttss2si */
    edx = SX16(LO16(edx));
    xmm1 = (float)(int32_t)edx; /* cvtsi2ss */
    MEMF(eax + 0x58) = xmm1; /* movss */
    MEMF(eax + 0x3C) = xmm1; /* movss */
    xmm0 = xmm0 + MEMF(ecx + 0x48); /* addss */
    ecx = (int32_t)xmm0; /* cvttss2si */
    edx = SX16(LO16(ecx));
    xmm0 = (float)(int32_t)edx; /* cvtsi2ss */
    MEMF(eax + 0x40) = xmm0; /* movss */
    MEMF(eax + 0x24) = xmm0; /* movss */
    esp += 4; return; /* ret */

}

/**
 * sub_00103880
 * Original: 0x00103880 - 0x00103A17 (407 bytes, 76 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00103880(void)
{
    int _flags = 0; /* fallback flag var */
    float xmm0, xmm1;

loc_00103880: ;
    PUSH32(esp, esi);
    esi = MEM32(esp + 8);
    PUSH32(esp, edi);
    edi = MEM32(0x7FA20C);
    MEM16(esi + 0x32E) = MEM16(esi + 0x32E) - LO16(edi);
    SET_LO16(eax, MEM16(esi + 0x32E));
    if (((int32_t)MEM16(esi + 0x32E) >= 0)) goto loc_00103905; /* jns: not sign (positive) */

loc_0010389C: ;
    PUSH32(esp, 0); sub_003E2480(); /* call 0x003E2480 */

loc_001038A1: ;
    edx = ((int32_t)eax < 0) ? 0xFFFFFFFF : 0; /* cdq */
    ecx = 6;
    { int64_t _dividend = ((int64_t)(int32_t)edx << 32) | eax;
      eax = (uint32_t)((int32_t)(_dividend / (int32_t)ecx));
      edx = (uint32_t)((int32_t)(_dividend % (int32_t)ecx)); }
    MEM16(esi + 0x32E) = LO16(edx);
    PUSH32(esp, 0); sub_003E2480(); /* call 0x003E2480 */

loc_001038B5: ;
    if (TEST_Z(LO8(eax), 3)) goto loc_001038DC; /* je: equal / zero */

loc_001038B9: ;
    PUSH32(esp, 0); sub_003E1D70(); /* call 0x003E1D70 */

loc_001038BE: ;
    xmm1 = MEMF(esi + 0x31C); /* movss */
    xmm1 = xmm1 - MEMF(esi + 0x320); /* subss */
    xmm0 = xmm0 * xmm1; /* mulss */
    xmm0 = xmm0 + MEMF(esi + 0x320); /* addss */
    goto loc_001038FD;

loc_001038DC: ;
    PUSH32(esp, 0); sub_003E1D70(); /* call 0x003E1D70 */

loc_001038E1: ;
    xmm1 = MEMF(esi + 0x324); /* movss */
    xmm1 = xmm1 - MEMF(esi + 0x31C); /* subss */
    xmm0 = xmm0 * xmm1; /* mulss */
    xmm0 = xmm0 + MEMF(esi + 0x31C); /* addss */

loc_001038FD: ;
    MEMF(esi + 0x328) = xmm0; /* movss */

loc_00103905: ;
    xmm0 = MEMF(esi + 0x328); /* movss */
    xmm0 = xmm0 - MEMF(esi + 0x3C); /* subss */
    xmm0 = xmm0 * MEMF(0x6496B4); /* mulss */
    xmm0 = xmm0 + MEMF(esi + 0x3C); /* addss */
    MEMF(esi + 0x3C) = xmm0; /* movss */
    MEM16(esi + 0x32C) = MEM16(esi + 0x32C) - LO16(edi);
    if (CMP_GE(MEM16(esi + 0x32C), 0)) goto loc_00103972; /* jge: greater or equal (signed >=) */

loc_00103935: ;
    PUSH32(esp, 0); sub_003E2480(); /* call 0x003E2480 */

loc_0010393A: ;
    edx = ((int32_t)eax < 0) ? 0xFFFFFFFF : 0; /* cdq */
    ecx = 0x11;
    { int64_t _dividend = ((int64_t)(int32_t)edx << 32) | eax;
      eax = (uint32_t)((int32_t)(_dividend / (int32_t)ecx));
      edx = (uint32_t)((int32_t)(_dividend % (int32_t)ecx)); }
    MEM16(esi + 0x32C) = LO16(edx);
    PUSH32(esp, 0); sub_003E1D70(); /* call 0x003E1D70 */

loc_0010394E: ;
    xmm1 = MEMF(esi + 0x310); /* movss */
    xmm1 = xmm1 - MEMF(esi + 0x314); /* subss */
    xmm0 = xmm0 * xmm1; /* mulss */
    xmm0 = xmm0 + MEMF(esi + 0x314); /* addss */
    MEMF(esi + 0x318) = xmm0; /* movss */

loc_00103972: ;
    xmm0 = MEMF(esi + 0x318); /* movss */
    xmm0 = xmm0 - MEMF(esi + 0x38); /* subss */
    xmm0 = xmm0 * MEMF(0x6496B0); /* mulss */
    xmm0 = xmm0 + MEMF(esi + 0x38); /* addss */
    MEMF(esi + 0x38) = xmm0; /* movss */
    MEM16(esi + 0x354) = MEM16(esi + 0x354) - LO16(edi);
    if (CMP_GE(MEM16(esi + 0x354), 0)) goto loc_001039DF; /* jge: greater or equal (signed >=) */

loc_001039A2: ;
    PUSH32(esp, 0); sub_003E2480(); /* call 0x003E2480 */

loc_001039A7: ;
    edx = ((int32_t)eax < 0) ? 0xFFFFFFFF : 0; /* cdq */
    ecx = 0xF;
    { int64_t _dividend = ((int64_t)(int32_t)edx << 32) | eax;
      eax = (uint32_t)((int32_t)(_dividend / (int32_t)ecx));
      edx = (uint32_t)((int32_t)(_dividend % (int32_t)ecx)); }
    MEM16(esi + 0x354) = LO16(edx);
    PUSH32(esp, 0); sub_003E1D70(); /* call 0x003E1D70 */

loc_001039BB: ;
    xmm1 = MEMF(esi + 0x348); /* movss */
    xmm1 = xmm1 - MEMF(esi + 0x34C); /* subss */
    xmm0 = xmm0 * xmm1; /* mulss */
    xmm0 = xmm0 + MEMF(esi + 0x34C); /* addss */
    MEMF(esi + 0x350) = xmm0; /* movss */

loc_001039DF: ;
    xmm0 = MEMF(esi + 0x350); /* movss */
    xmm0 = xmm0 - MEMF(esi + 0x8C); /* subss */
    xmm0 = xmm0 * MEMF(0x6496AC); /* mulss */
    edx = (int32_t)xmm0; /* cvttss2si */
    xmm0 = (float)(int32_t)edx; /* cvtsi2ss */
    xmm0 = xmm0 + MEMF(esi + 0x8C); /* addss */
    POP32(esp, edi);
    MEMF(esi + 0x8C) = xmm0; /* movss */
    eax = 1;
    POP32(esp, esi);
    esp += 4; return; /* ret */

}

/**
 * sub_00103A20
 * Original: 0x00103A20 - 0x00103ACB (171 bytes, 39 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00103A20(void)
{
    int _flags = 0; /* fallback flag var */
    float xmm0, xmm1, xmm2, xmm3;

loc_00103A20: ;
    eax = MEM32(esp + 4);
    SET_LO8(ecx, MEM8(eax + 0x14D));
    (void)0; /* test LO8(ecx), 2 - flags set for next jcc */
    xmm1 = MEMF(0x648D40); /* movss */
    xmm2 = MEMF(0x6490A0); /* movss */
    SET_LO8(edx, 1);
    if (TEST_NZ(LO8(ecx), 2)) goto loc_00103A7A; /* jne: not equal / not zero */

loc_00103A41: ;
    xmm0 = MEMF(eax + 0x318); /* movss */
    xmm0 = xmm0 - MEMF(eax + 0x38); /* subss */
    xmm0 = xmm0 * xmm1; /* mulss */
    xmm0 = xmm0 + MEMF(eax + 0x38); /* addss */
    MEMF(eax + 0x38) = xmm0; /* movss */
    xmm3 = MEMF(eax + 0x318); /* movss */
    xmm3 = xmm3 * xmm2; /* mulss */
    /* comiss xmm0, xmm3 - sets EFLAGS */
    if ((xmm0 <= xmm3)) goto loc_00103A78; /* jbe: below or equal (unsigned <=) */

loc_00103A6D: ;
    SET_LO8(ecx, LO8(ecx) | 2);
    MEM8(eax + 0x14D) = LO8(ecx);
    goto loc_00103A7A;

loc_00103A78: ;
    SET_LO8(edx, 0); /* xor self */

loc_00103A7A: ;
    SET_LO8(ecx, MEM8(eax + 0x14D));
    if (TEST_NZ(LO8(ecx), 8)) goto loc_00103ABA; /* jne: not equal / not zero */

loc_00103A85: ;
    xmm0 = MEMF(eax + 0x328); /* movss */
    xmm0 = xmm0 - MEMF(eax + 0x3C); /* subss */
    xmm0 = xmm0 * xmm1; /* mulss */
    xmm0 = xmm0 + MEMF(eax + 0x3C); /* addss */
    MEMF(eax + 0x3C) = xmm0; /* movss */
    xmm1 = MEMF(eax + 0x328); /* movss */
    xmm1 = xmm1 * xmm2; /* mulss */
    /* comiss xmm0, xmm1 - sets EFLAGS */
    if ((xmm0 <= xmm1)) goto loc_00103AC5; /* jbe: below or equal (unsigned <=) */

loc_00103AB1: ;
    SET_LO8(ecx, LO8(ecx) | 8);
    MEM8(eax + 0x14D) = LO8(ecx);

loc_00103ABA: ;
    if (TEST_Z(LO8(edx), LO8(edx))) goto loc_00103AC5; /* je: equal / zero */

loc_00103ABE: ;
    MEM8(eax + 0x149) = 4;

loc_00103AC5: ;
    eax = 1;
    esp += 4; return; /* ret */

}

/**
 * sub_00103AD0
 * Original: 0x00103AD0 - 0x00103B29 (89 bytes, 19 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00103AD0(void)
{
    int _flags = 0; /* fallback flag var */
    float xmm0, xmm1;

loc_00103AD0: ;
    ecx = MEM32(esp + 4);
    xmm0 = MEMF(ecx + 0x344); /* movss */
    xmm0 = xmm0 * MEMF(ecx + 0x3C); /* mulss */
    xmm1 = MEMF(ecx + 0x3C); /* movss */
    SET_LO16(eax, MEM16(ecx + 0x36));
    xmm1 = xmm1 - xmm0; /* subss */
    MEMF(ecx + 0x3C) = xmm1; /* movss */
    xmm0 = MEMF(ecx + 0x344); /* movss */
    xmm0 = xmm0 * MEMF(ecx + 0x38); /* mulss */
    xmm1 = MEMF(ecx + 0x38); /* movss */
    xmm1 = xmm1 - xmm0; /* subss */
    MEMF(ecx + 0x38) = xmm1; /* movss */
    if (CMP_GE(LO16(eax), MEM16(ecx + 0x356))) goto loc_00103B23; /* jge: greater or equal (signed >=) */

loc_00103B17: ;
    SET_LO8(eax, MEM8(ecx + 0x358));
    { int64_t _r = (int64_t)(int32_t)eax * (int64_t)(int32_t)MEM8(ecx + 0x36);
      eax = (uint32_t)_r; edx = (uint32_t)(_r >> 32); }
    MEM8(ecx + 0x7B) = LO8(eax);

loc_00103B23: ;
    eax = 1;
    esp += 4; return; /* ret */

}

/**
 * sub_00103B30
 * Original: 0x00103B30 - 0x00103BE2 (178 bytes, 38 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00103B30(void)
{
    float xmm0, xmm1, xmm2;

loc_00103B30: ;
    eax = MEM32(esp + 4);
    xmm1 = MEMF(0x7FA24C); /* movss */
    PUSH32(esp, esi);
    ecx = eax + 0x40;
    PUSH32(esp, edi);
    edx = eax + 0x4C;
    esi = ecx;
    edi = MEM32(esi);
    MEM32(edx) = edi;
    edi = MEM32(esi + 4);
    esi = MEM32(esi + 8);
    MEM32(edx + 4) = edi;
    MEM32(edx + 8) = esi;
    xmm2 = MEMF(eax + 0x33C); /* movss */
    xmm0 = MEMF(eax + 0x330); /* movss */
    xmm0 = xmm0 * MEMF(eax + 0x340); /* mulss */
    MEMF(eax + 0x330) = xmm0; /* movss */
    xmm2 = xmm2 * xmm1; /* mulss */
    xmm2 = xmm2 + MEMF(eax + 0x334); /* addss */
    MEMF(eax + 0x334) = xmm2; /* movss */
    xmm2 = MEMF(eax + 0x340); /* movss */
    xmm2 = xmm2 * MEMF(eax + 0x338); /* mulss */
    MEMF(eax + 0x338) = xmm2; /* movss */
    xmm0 = xmm0 * xmm1; /* mulss */
    xmm0 = xmm0 + MEMF(ecx); /* addss */
    MEMF(ecx) = xmm0; /* movss */
    xmm0 = MEMF(eax + 0x334); /* movss */
    xmm0 = xmm0 * xmm1; /* mulss */
    xmm0 = xmm0 + MEMF(eax + 0x44); /* addss */
    MEMF(eax + 0x44) = xmm0; /* movss */
    xmm0 = MEMF(eax + 0x338); /* movss */
    xmm0 = xmm0 * xmm1; /* mulss */
    xmm0 = xmm0 + MEMF(eax + 0x48); /* addss */
    POP32(esp, edi);
    MEMF(eax + 0x48) = xmm0; /* movss */
    eax = 1;
    POP32(esp, esi);
    esp += 4; return; /* ret */

}

/**
 * sub_00103BF0
 * Original: 0x00103BF0 - 0x00103CD5 (229 bytes, 44 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00103BF0(void)
{
    float xmm0, xmm1, xmm2, xmm3, xmm4, xmm5, xmm6;

loc_00103BF0: ;
    eax = MEM32(esp + 4);
    xmm1 = MEMF(eax + 0x330); /* movss */
    xmm1 = xmm1 * MEMF(eax + 0x340); /* mulss */
    xmm0 = MEMF(eax + 0x33C); /* movss */
    xmm2 = MEMF(eax + 0x340); /* movss */
    xmm2 = xmm2 * MEMF(eax + 0x338); /* mulss */
    xmm3 = MEMF(0x7FA24C); /* movss */
    MEMF(eax + 0x330) = xmm1; /* movss */
    MEMF(eax + 0x338) = xmm2; /* movss */
    xmm0 = xmm0 * xmm3; /* mulss */
    xmm0 = xmm0 + MEMF(eax + 0x334); /* addss */
    MEMF(eax + 0x334) = xmm0; /* movss */
    xmm6 = MEMF(eax + 0x4C); /* movss */
    xmm4 = MEMF(eax + 0x44); /* movss */
    xmm5 = MEMF(eax + 0x48); /* movss */
    xmm0 = xmm0 * xmm3; /* mulss */
    xmm1 = xmm1 * xmm3; /* mulss */
    xmm6 = xmm6 + xmm1; /* addss */
    xmm2 = xmm2 * xmm3; /* mulss */
    xmm3 = MEMF(eax + 0x40); /* movss */
    xmm3 = xmm3 + xmm1; /* addss */
    xmm1 = MEMF(eax + 0x50); /* movss */
    xmm4 = xmm4 + xmm0; /* addss */
    xmm1 = xmm1 + xmm0; /* addss */
    xmm0 = MEMF(eax + 0x54); /* movss */
    xmm5 = xmm5 + xmm2; /* addss */
    xmm0 = xmm0 + xmm2; /* addss */
    xmm6 = xmm6 - xmm3; /* subss */
    xmm6 = xmm6 * MEMF(eax + 0x60); /* mulss */
    xmm1 = xmm1 - xmm4; /* subss */
    xmm1 = xmm1 * MEMF(eax + 0x60); /* mulss */
    xmm0 = xmm0 - xmm5; /* subss */
    xmm0 = xmm0 * MEMF(eax + 0x60); /* mulss */
    xmm6 = xmm6 + xmm3; /* addss */
    xmm1 = xmm1 + xmm4; /* addss */
    xmm0 = xmm0 + xmm5; /* addss */
    MEMF(eax + 0x40) = xmm3; /* movss */
    MEMF(eax + 0x44) = xmm4; /* movss */
    MEMF(eax + 0x48) = xmm5; /* movss */
    MEMF(eax + 0x4C) = xmm6; /* movss */
    MEMF(eax + 0x50) = xmm1; /* movss */
    MEMF(eax + 0x54) = xmm0; /* movss */
    eax = 1;
    esp += 4; return; /* ret */

}

/**
 * sub_00103CE0
 * Original: 0x00103CE0 - 0x00103E76 (406 bytes, 99 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00103CE0(void)
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

loc_00103CE0: ;
    esp = esp - 0x24;
    PUSH32(esp, ebx);
    PUSH32(esp, esi);
    PUSH32(esp, edi);
    ecx = MEM32(esp + 0x34);
    xmm1 = MEMF(ecx + 0x4C); /* movss */
    xmm1 = xmm1 - MEMF(ecx + 0x40); /* subss */
    xmm0 = MEMF(ecx + 0x3C); /* movss */
    xmm2 = MEMF(ecx + 0x50); /* movss */
    xmm2 = xmm2 - MEMF(ecx + 0x44); /* subss */
    eax = (uint32_t)(int32_t)SMEM16(esp + 0x38);
    xmm3 = MEMF(ecx + 0x54); /* movss */
    eax = (uint32_t)((int32_t)eax * (int32_t)0x770);
    xmm3 = xmm3 - MEMF(ecx + 0x48); /* subss */
    xmm0 = xmm0 * xmm1; /* mulss */
    xmm1 = MEMF(ecx + 0x3C); /* movss */
    xmm0 = xmm0 + MEMF(ecx + 0x40); /* addss */
    xmm1 = xmm1 * xmm2; /* mulss */
    xmm2 = MEMF(ecx + 0x3C); /* movss */
    xmm1 = xmm1 + MEMF(ecx + 0x44); /* addss */
    xmm2 = xmm2 * xmm3; /* mulss */
    xmm2 = xmm2 + MEMF(ecx + 0x48); /* addss */
    MEMF(esp + 0x1C) = xmm1; /* movss */
    xmm1 = xmm1 - MEMF(ecx + 0x44); /* subss */
    MEMF(esp + 0x20) = xmm2; /* movss */
    xmm2 = xmm2 - MEMF(ecx + 0x48); /* subss */
    xmm3 = xmm2; /* movaps */
    xmm3 = xmm3 * xmm2; /* mulss */
    xmm4 = xmm1; /* movaps */
    xmm4 = xmm4 * xmm1; /* mulss */
    xmm3 = xmm3 + xmm4; /* addss */
    MEMF(esp + 0x18) = xmm0; /* movss */
    xmm0 = xmm0 - MEMF(ecx + 0x40); /* subss */
    xmm4 = xmm0; /* movaps */
    xmm4 = xmm4 * xmm0; /* mulss */
    xmm3 = xmm3 + xmm4; /* addss */
    xmm4 = MEMF(ecx + 0x58); /* movss */
    esi = MEM32(0x8470DC);
    xmm5 = xmm4; /* movaps */
    edx = ecx + 0x294;
    xmm5 = xmm5 * xmm4; /* mulss */
    /* comiss xmm5, xmm3 - sets EFLAGS */
    ebx = edx;
    esi = eax + esi + 0x330;
    MEMF(esp + 0x38) = xmm3; /* movss */
    if ((xmm5 <= xmm3)) goto loc_00103DE3; /* jbe: below or equal (unsigned <=) */

loc_00103DA7: ;
    fp_push(MEMF(esp + 0x38)); /* fld float */
    fp_top() = sqrt(fp_top()); /* fsqrt */
    fp_st1() /= fp_top(); fp_pop(); /* fdiv */
    /* FPU: fsubr dword ptr [0x648d14] */
    MEMF(esp + 0x38) = (float)fp_top(); fp_popp(); /* fstp */
    xmm3 = MEMF(esp + 0x38); /* movss */
    xmm3 = xmm3 + MEMF(0x648D14); /* addss */
    xmm4 = xmm3; /* movaps */
    xmm4 = xmm4 * xmm0; /* mulss */
    xmm0 = xmm4; /* movaps */
    xmm4 = xmm3; /* movaps */
    xmm4 = xmm4 * xmm1; /* mulss */
    xmm3 = xmm3 * xmm2; /* mulss */
    xmm1 = xmm4; /* movaps */
    xmm2 = xmm3; /* movaps */

loc_00103DE3: ;
    xmm3 = MEMF(ecx + 0x44); /* movss */
    xmm3 = xmm3 - MEMF(esi + 4); /* subss */
    xmm5 = MEMF(ecx + 0x48); /* movss */
    xmm5 = xmm5 - MEMF(esi + 8); /* subss */
    xmm4 = MEMF(ecx + 0x40); /* movss */
    xmm4 = xmm4 - MEMF(esi); /* subss */
    xmm7 = xmm3; /* movaps */
    xmm6 = xmm5; /* movaps */
    xmm7 = xmm7 * xmm2; /* mulss */
    xmm6 = xmm6 * xmm1; /* mulss */
    xmm6 = xmm6 - xmm7; /* subss */
    xmm7 = xmm4; /* movaps */
    xmm4 = xmm4 * xmm1; /* mulss */
    xmm3 = xmm3 * xmm0; /* mulss */
    xmm3 = xmm3 - xmm4; /* subss */
    xmm5 = xmm5 * xmm0; /* mulss */
    xmm7 = xmm7 * xmm2; /* mulss */
    xmm7 = xmm7 - xmm5; /* subss */
    xmm5 = 0.0f; /* xorps self = zero */
    MEMF(esp + 0x14) = xmm3; /* movss */
    xmm3 = xmm3 * xmm3; /* mulss */
    xmm4 = xmm7; /* movaps */
    xmm4 = xmm4 * xmm7; /* mulss */
    xmm3 = xmm3 + xmm4; /* addss */
    xmm4 = xmm6; /* movaps */
    xmm4 = xmm4 * xmm6; /* mulss */
    xmm3 = xmm3 + xmm4; /* addss */
    /* ucomiss xmm3, xmm5 - sets EFLAGS */
    /* lahf - load AH from flags (used in FPU compare idiom) */
    (void)0; /* test HI8(eax), 0x44 - flags set for next jcc */
    MEMF(esp + 0xC) = xmm6; /* movss */
    MEMF(esp + 0x10) = xmm7; /* movss */
    MEMF(esp + 0x38) = xmm3; /* movss */
    if (1 /* jp after test - parity */) { sub_00103E76(); return; } /* jp: parity */

loc_00103E6B: ;
    xmm6 = xmm5; /* movaps */
    xmm4 = xmm5; /* movaps */
    xmm3 = xmm5; /* movaps */
    g_seh_ebp = ebp; sub_00103EAD(); return; /* tail jmp 0x00103EAD */

    #undef fp_push
    #undef fp_pop
    #undef fp_popp
    #undef fp_top
    #undef fp_st1
}

/**
 * sub_001040E0
 * Original: 0x001040E0 - 0x00104111 (49 bytes, 15 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_001040E0(void)
{
    int _flags = 0; /* fallback flag var */

loc_001040E0: ;
    PUSH32(esp, esi);
    esi = eax;
    if (CMP_L(LO16(esi), 1)) goto loc_0010410F; /* jl: less (signed <) */

loc_001040E9: ;
    /* nop */

loc_001040F0: ;
    PUSH32(esp, 0); sub_003E2480(); /* call 0x003E2480 */

loc_001040F5: ;
    PUSH32(esp, 0); sub_003E1D70(); /* call 0x003E1D70 */

loc_001040FA: ;
    PUSH32(esp, 0); sub_003E1D70(); /* call 0x003E1D70 */

loc_001040FF: ;
    PUSH32(esp, 0); sub_003E1D70(); /* call 0x003E1D70 */

loc_00104104: ;
    PUSH32(esp, 0); sub_003E2480(); /* call 0x003E2480 */

loc_00104109: ;
    esi--;
    if (TEST_NZ(LO16(esi), LO16(esi))) goto loc_001040F0; /* jne: not equal / not zero */

loc_0010410F: ;
    POP32(esp, esi);
    esp += 4; return; /* ret */

}

/**
 * sub_00104120
 * Original: 0x00104120 - 0x001041DA (186 bytes, 41 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00104120(void)
{
    int _flags = 0; /* fallback flag var */
    float xmm0, xmm2, xmm5, xmm6, xmm7;

loc_00104120: ;
    esp = esp - 0x48;
    PUSH32(esp, 0); sub_003E1D70(); /* call 0x003E1D70 */

loc_00104128: ;
    xmm6 = MEMF(0x648D14); /* movss */
    xmm5 = xmm0; /* movaps */
    xmm5 = xmm5 * MEMF(0x64908C); /* mulss */
    xmm5 = xmm5 + MEMF(0x64A4F4); /* addss */
    xmm5 = xmm5 * MEMF(0x64A4F0); /* mulss */
    /* comiss xmm5, xmm6 - sets EFLAGS */
    if ((xmm5 <= xmm6)) goto loc_001041D6; /* jbe: below or equal (unsigned <=) */

loc_00104154: ;
    xmm7 = MEMF(0x6490C0); /* movss */
    /* nop */

loc_00104160: ;
    eax = esp + 8;
    PUSH32(esp, eax);
    ecx = esp + 4;
    PUSH32(esp, ecx);
    PUSH32(esp, 0); sub_003E1D70(); /* call 0x003E1D70 */

loc_0010416F: ;
    xmm2 = xmm0; /* movaps */
    xmm2 = xmm2 * xmm7; /* mulss */
    PUSH32(esp, 0); sub_003E2480(); /* call 0x003E2480 */

loc_0010417B: ;
    eax = eax & 0xFF;
    PUSH32(esp, eax);
    PUSH32(esp, 0); sub_00110650(); /* call 0x00110650 */

loc_00104186: ;
    xmm0 = MEMF(esi); /* movss */
    xmm0 = xmm0 + MEMF(esp + 0xC); /* addss */
    MEMF(esp + 0xC) = xmm0; /* movss */
    xmm0 = MEMF(esp + 0x14); /* movss */
    xmm0 = xmm0 + MEMF(esi + 8); /* addss */
    esp = esp + 0xC;
    MEMF(esp + 8) = xmm0; /* movss */
    PUSH32(esp, 0); sub_003E1D70(); /* call 0x003E1D70 */

loc_001041AF: ;
    PUSH32(esp, 0); sub_003E1D70(); /* call 0x003E1D70 */

loc_001041B4: ;
    PUSH32(esp, 0); sub_003E1D70(); /* call 0x003E1D70 */

loc_001041B9: ;
    PUSH32(esp, 0); sub_003E1D70(); /* call 0x003E1D70 */

loc_001041BE: ;
    PUSH32(esp, 0); sub_003E2480(); /* call 0x003E2480 */

loc_001041C3: ;
    PUSH32(esp, 0); sub_003E1D70(); /* call 0x003E1D70 */

loc_001041C8: ;
    PUSH32(esp, 0); sub_003E2480(); /* call 0x003E2480 */

loc_001041CD: ;
    xmm5 = xmm5 - xmm6; /* subss */
    /* comiss xmm5, xmm6 - sets EFLAGS */
    if ((xmm5 > xmm6)) goto loc_00104160; /* ja: above (unsigned >) */

loc_001041D6: ;
    esp = esp + 0x48;
    esp += 4; return; /* ret */

}

/**
 * sub_001041E0
 * Original: 0x001041E0 - 0x001044FD (797 bytes, 155 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_001041E0(void)
{
    uint32_t ebp;
    int _flags = 0; /* fallback flag var */
    float xmm0, xmm1;
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_001041E0: ;
    esp = esp - 0x88;
    xmm0 = MEMF(eax); /* movss */
    xmm1 = MEMF(eax + 4); /* movss */
    PUSH32(esp, ebx);
    PUSH32(esp, ebp);
    PUSH32(esp, esi);
    esi = MEM32(esp + 0x98);
    ecx = eax;
    ebp = MEM32(ecx);
    edx = MEM32(ecx + 4);
    ecx = MEM32(ecx + 8);
    PUSH32(esp, edi);
    MEMF(esp + 0x8C) = xmm0; /* movss */
    xmm0 = MEMF(0x5A005C); /* movss */
    xmm1 = xmm1 + xmm0; /* addss */
    MEMF(esp + 0x90) = xmm1; /* movss */
    xmm1 = MEMF(eax + 8); /* movss */
    ebx = 0; /* xor self */
    MEMF(esp + 0x94) = xmm1; /* movss */
    xmm1 = MEMF(eax + 4); /* movss */
    PUSH32(esp, ebx);
    PUSH32(esp, ecx);
    xmm1 = xmm1 - xmm0; /* subss */
    MEMF(esp) = xmm1; /* movss */
    PUSH32(esp, ebx);
    edi = esp + 0x98;
    MEM32(esp + 0x8C) = ebp;
    MEM32(esp + 0x90) = edx;
    MEM32(esp + 0x94) = ecx;
    PUSH32(esp, 0); sub_002A0180(); /* call 0x002A0180 */

loc_00104264: ;
    esp = esp + 0xC;
    if (TEST_Z(LO8(eax), LO8(eax))) goto loc_001044F2; /* je: equal / zero */

loc_0010426F: ;
    xmm0 = MEMF(0x64A9C0); /* movss */
    edx = MEM32(esp + 0xA0);
    esi = MEM32(esp + 0x84);
    edi = MEM32(esp + 0x88);
    MEMF(esp + 0x24) = xmm0; /* movss */
    xmm0 = MEMF(0x649004); /* movss */
    MEMF(esp + 0x28) = xmm0; /* movss */
    xmm0 = MEMF(0x64A9BC); /* movss */
    eax = 0x1E;
    MEM16(esp + 0x4C) = LO16(eax);
    MEM16(esp + 0x4E) = LO16(eax);
    MEMF(esp + 0x2C) = xmm0; /* movss */
    xmm0 = MEMF(0x64A9B8); /* movss */
    SET_LO8(eax, 0x64);
    MEMF(esp + 0x30) = xmm0; /* movss */
    xmm0 = MEMF(0x648E5C); /* movss */
    MEM8(esp + 0x5A) = LO8(eax);
    MEM8(esp + 0x5C) = LO8(eax);
    SET_LO8(eax, LO8(eax) | 0xFF);
    MEMF(esp + 0x34) = xmm0; /* movss */
    xmm0 = MEMF(0x64A9B4); /* movss */
    MEM8(esp + 0x7C) = LO8(eax);
    MEM8(esp + 0x7E) = LO8(eax);
    MEM8(esp + 0x7F) = LO8(eax);
    ecx = 1;
    PUSH32(esp, edx);
    eax = esp + 0x14;
    MEMF(esp + 0x3C) = xmm0; /* movss */
    xmm0 = MEMF(0x648D14); /* movss */
    PUSH32(esp, eax);
    MEM32(esp + 0x18) = 0xA;
    MEM32(esp + 0x1C) = ebx;
    MEM16(esp + 0x44) = LO16(ebx);
    MEM16(esp + 0x46) = 0xFF;
    MEM16(esp + 0x48) = 0xFFC1;
    MEM16(esp + 0x4A) = 0x2B;
    MEM32(esp + 0x4C) = 4;
    MEM32(esp + 0x50) = 5;
    MEM16(esp + 0x58) = LO16(ecx);
    MEM8(esp + 0x5A) = 0xC;
    MEM8(esp + 0x5B) = 2;
    MEM8(esp + 0x5C) = 3;
    MEM8(esp + 0x5F) = 0xB4;
    MEM8(esp + 0x5E) = LO8(ebx);
    MEM8(esp + 0x5D) = LO8(ebx);
    MEM8(esp + 0x60) = 0x9B;
    MEM8(esp + 0x63) = 0x32;
    MEM8(esp + 0x61) = LO8(ebx);
    MEM8(esp + 0x67) = 0xFF;
    MEM8(esp + 0x66) = 0xFF;
    MEM8(esp + 0x65) = 0xFF;
    MEM8(esp + 0x68) = 0xFF;
    MEM8(esp + 0x6B) = LO8(ebx);
    MEM8(esp + 0x6A) = LO8(ebx);
    MEM8(esp + 0x69) = LO8(ebx);
    MEM8(esp + 0x6C) = LO8(ebx);
    MEM8(esp + 0x6D) = 0xFF;
    MEM8(esp + 0x6E) = LO8(ebx);
    MEM32(esp + 0x70) = 0x205;
    MEM32(esp + 0x74) = 0x63000;
    MEM16(esp + 0x78) = 0x14;
    MEM16(esp + 0x7A) = 0xC;
    MEM16(esp + 0x7C) = LO16(ecx);
    MEM8(esp + 0x7E) = LO8(ebx);
    MEMF(esp + 0x80) = xmm0; /* movss */
    MEM8(esp + 0x85) = LO8(ebx);
    MEM32(esp + 0x20) = ebp;
    MEM32(esp + 0x24) = esi;
    MEM32(esp + 0x28) = edi;
    PUSH32(esp, 0); sub_000F4BF0(); /* call 0x000F4BF0 */

loc_001043EC: ;
    xmm0 = MEMF(0x648CE0); /* movss */
    MEMF(esp + 0x24) = xmm0; /* movss */
    xmm0 = MEMF(0x6490F4); /* movss */
    MEMF(esp + 0x28) = xmm0; /* movss */
    xmm0 = MEMF(0x649CF8); /* movss */
    MEMF(esp + 0x2C) = xmm0; /* movss */
    xmm0 = MEMF(0x64A1F4); /* movss */
    MEM32(esp + 0x18) = ebp;
    MEM32(esp + 0x1C) = esi;
    MEM32(esp + 0x20) = edi;
    MEMF(esp + 0x30) = xmm0; /* movss */
    xmm0 = MEMF(0x64A9B0); /* movss */
    MEMF(esp + 0x34) = xmm0; /* movss */
    xmm0 = MEMF(0x64A9AC); /* movss */
    MEMF(esp + 0x38) = xmm0; /* movss */
    MEM16(esp + 0x3C) = 0x10;
    MEM16(esp + 0x3E) = 8;
    MEM16(esp + 0x40) = LO16(ebx);
    MEM16(esp + 0x42) = 0xFF;
    MEM16(esp + 0x44) = 0xFFC0;
    MEM16(esp + 0x46) = 0x2C;
    MEM16(esp + 0x48) = 5;
    MEM16(esp + 0x4A) = 4;
    MEM16(esp + 0x4C) = 0x42;
    MEM16(esp + 0x4E) = 0x1E;
    MEM32(esp + 0x50) = 0xA;
    MEM8(esp + 0x54) = 1;
    MEM32(esp + 0x58) = 1;
    MEM32(esp + 0x5C) = 0xC;
    MEM32(esp + 0x60) = ebx;
    MEM32(esp + 0x64) = ebx;
    MEM32(esp + 0x68) = ebx;
    MEM32(esp + 0x6C) = ebx;
    MEM8(esp + 0x70) = 0xFF;
    PUSH32(esp, 0); sub_003E2480(); /* call 0x003E2480 */

loc_001044C7: ;
    edx = ((int32_t)eax < 0) ? 0xFFFFFFFF : 0; /* cdq */
    ecx = 0x65;
    { int64_t _dividend = ((int64_t)(int32_t)edx << 32) | eax;
      eax = (uint32_t)((int32_t)(_dividend / (int32_t)ecx));
      edx = (uint32_t)((int32_t)(_dividend % (int32_t)ecx)); }
    PUSH32(esp, 0xFF);
    esi = esp + 0x1C;
    SET_LO8(edx, LO8(edx) - LO8(ecx));
    MEM8(esp + 0x75) = LO8(edx);
    PUSH32(esp, 0); sub_000F4E40(); /* call 0x000F4E40 */

loc_001044E3: ;
    esp = esp + 0xC;
    esi = esp + 0x80;
    PUSH32(esp, 0); sub_00104120(); /* call 0x00104120 */

loc_001044F2: ;
    POP32(esp, edi);
    POP32(esp, esi);
    POP32(esp, ebp);
    POP32(esp, ebx);
    esp = esp + 0x88;
    esp += 4; return; /* ret */

}

/**
 * sub_00104500
 * Original: 0x00104500 - 0x0010452B (43 bytes, 13 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00104500(void)
{
    int _flags = 0; /* fallback flag var */

loc_00104500: ;
    eax = MEM32(esp + 4);
    ecx = MEM32(eax + 0x144);
    SET_LO16(eax, MEM16(eax + 0x38));
    if (CMP_GE(LO16(eax), 0x10)) goto loc_00104525; /* jge: greater or equal (signed >=) */

loc_00104514: ;
    edx = ZX8(MEM8(ecx + 0x21));
    eax = SX16(LO16(eax));
    eax = eax << 4;
    if (CMP_LE(edx, eax)) goto loc_00104525; /* jle: less or equal (signed <=) */

loc_00104522: ;
    MEM8(ecx + 0x21) = LO8(eax);

loc_00104525: ;
    eax = 1;
    esp += 4; return; /* ret */

}

/**
 * sub_00104530
 * Original: 0x00104530 - 0x0010455E (46 bytes, 10 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00104530(void)
{
    float xmm0, xmm1;

loc_00104530: ;
    eax = MEM32(esp + 4);
    xmm0 = MEMF(eax + 0x58); /* movss */
    xmm0 = xmm0 * MEMF(0x7FA24C); /* mulss */
    xmm1 = xmm0; /* movaps */
    xmm1 = xmm1 + MEMF(eax + 0x38); /* addss */
    xmm0 = xmm0 + MEMF(eax + 0x3C); /* addss */
    MEMF(eax + 0x38) = xmm1; /* movss */
    MEMF(eax + 0x3C) = xmm0; /* movss */
    eax = 1;
    esp += 4; return; /* ret */

}

/**
 * sub_00104560
 * Original: 0x00104560 - 0x00104585 (37 bytes, 12 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00104560(void)
{
    int _flags = 0; /* fallback flag var */

loc_00104560: ;
    ecx = MEM32(esp + 4);
    SET_LO16(eax, MEM16(ecx + 0x36));
    if (CMP_GE(LO16(eax), 0x10)) goto loc_0010457F; /* jge: greater or equal (signed >=) */

loc_0010456E: ;
    edx = ZX8(MEM8(ecx + 0x7B));
    eax = SX16(LO16(eax));
    eax = eax << 4;
    if (CMP_LE(edx, eax)) goto loc_0010457F; /* jle: less or equal (signed <=) */

loc_0010457C: ;
    MEM8(ecx + 0x7B) = LO8(eax);

loc_0010457F: ;
    eax = 1;
    esp += 4; return; /* ret */

}

/**
 * sub_00104590
 * Original: 0x00104590 - 0x001045E9 (89 bytes, 24 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00104590(void)
{
    uint32_t ebp;
    int _flags = 0; /* fallback flag var */
    float xmm0;
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_00104590: ;
    esp = esp - 0x164;
    PUSH32(esp, ebx);
    PUSH32(esp, ebp);
    SET_LO16(ebp, MEM16(esp + 0x170));
    PUSH32(esp, esi);
    PUSH32(esp, edi);
    edi = eax;
    eax = esp + 0x60;
    esi = ecx;
    PUSH32(esp, 0); sub_000AF180(); /* call 0x000AF180 */

loc_001045AF: ;
    eax = MEM32(esp + 0x180);
    xmm0 = 0.0f; /* xorps self = zero */
    ebx = 0; /* xor self */
    (void)0; /* cmp eax, ebx - flags set for next jcc */
    MEMF(esp + 0xAC) = xmm0; /* movss */
    MEM32(esp + 0xA8) = 0x303;
    if (CMP_EQ(eax, ebx)) { sub_001045E9(); return; } /* je: equal / zero */

loc_001045D3: ;
    ecx = MEM32(eax);
    edx = MEM32(eax + 4);
    eax = MEM32(eax + 8);
    MEM32(esp + 0x48) = ecx;
    MEM32(esp + 0x4C) = edx;
    MEM32(esp + 0x50) = eax;
    g_seh_ebp = ebp; sub_001045FB(); return; /* tail jmp 0x001045FB */

}

/**
 * sub_001048B0
 * Original: 0x001048B0 - 0x001049A1 (241 bytes, 58 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_001048B0(void)
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

loc_001048B0: ;
    PUSH32(esp, ecx);
    xmm0 = MEMF(ecx + 0x44); /* movss */
    xmm5 = MEMF(0x648EA4); /* movss */
    xmm2 = MEMF(ecx + 0x48); /* movss */
    xmm2 = xmm2 - MEMF(ecx + 0x54); /* subss */
    xmm2 = xmm2 * MEMF(ecx + 0x35C); /* mulss */
    xmm1 = MEMF(ecx + 0x40); /* movss */
    xmm1 = xmm1 - MEMF(ecx + 0x4C); /* subss */
    xmm2 = xmm2 + MEMF(ecx + 0x54); /* addss */
    xmm2 = xmm2 - MEMF(ecx + 0x48); /* subss */
    xmm1 = xmm1 * MEMF(ecx + 0x35C); /* mulss */
    xmm1 = xmm1 + MEMF(ecx + 0x4C); /* addss */
    xmm1 = xmm1 - MEMF(ecx + 0x40); /* subss */
    xmm0 = xmm0 + xmm5; /* addss */
    xmm0 = xmm0 - MEMF(ecx + 0x50); /* subss */
    xmm0 = xmm0 * MEMF(ecx + 0x35C); /* mulss */
    xmm0 = xmm0 + MEMF(ecx + 0x50); /* addss */
    xmm0 = xmm0 - MEMF(ecx + 0x44); /* subss */
    xmm3 = xmm0; /* movaps */
    edx = ecx + 0x40;
    PUSH32(esp, esi);
    esi = ecx + 0x4C;
    xmm0 = xmm2; /* movaps */
    xmm0 = xmm0 * xmm2; /* mulss */
    xmm4 = xmm3; /* movaps */
    xmm4 = xmm4 * xmm3; /* mulss */
    xmm0 = xmm0 + xmm4; /* addss */
    xmm4 = xmm1; /* movaps */
    xmm4 = xmm4 * xmm1; /* mulss */
    xmm0 = xmm0 + xmm4; /* addss */
    /* ucomiss xmm0, MEMF(0x648CF8) - sets EFLAGS */
    /* lahf - load AH from flags (used in FPU compare idiom) */
    (void)0; /* test HI8(eax), 0x44 - flags set for next jcc */
    MEMF(esp + 4) = xmm0; /* movss */
    if (1 /* jnp after test - parity */) { sub_001049A1(); return; } /* jnp: not parity */

loc_0010494B: ;
    fp_push(MEMF(esp + 4)); /* fld float */
    fp_top() = sqrt(fp_top()); /* fsqrt */
    /* FPU: fdivr dword ptr [0x648d14] */
    MEMF(esp + 4) = (float)fp_top(); fp_popp(); /* fstp */
    xmm4 = MEMF(esp + 4); /* movss */
    xmm0 = xmm4; /* movaps */
    xmm0 = xmm0 * xmm1; /* mulss */
    xmm1 = xmm4; /* movaps */
    xmm4 = xmm4 * xmm2; /* mulss */
    xmm1 = xmm1 * xmm3; /* mulss */
    xmm2 = xmm4; /* movaps */
    xmm0 = xmm0 * xmm5; /* mulss */
    xmm0 = xmm0 + MEMF(edx); /* addss */
    xmm1 = xmm1 * xmm5; /* mulss */
    xmm1 = xmm1 + MEMF(ecx + 0x44); /* addss */
    xmm2 = xmm2 * xmm5; /* mulss */
    xmm2 = xmm2 + MEMF(ecx + 0x48); /* addss */
    MEMF(esi) = xmm0; /* movss */
    MEMF(ecx + 0x50) = xmm1; /* movss */
    MEMF(ecx + 0x54) = xmm2; /* movss */
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
 * sub_001049C0
 * Original: 0x001049C0 - 0x00104AC3 (259 bytes, 47 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_001049C0(void)
{
    int _flags = 0; /* fallback flag var */
    float xmm0, xmm5, xmm6;

loc_001049C0: ;
    xmm5 = MEMF(0x7FA24C); /* movss */
    xmm6 = 0.0f; /* xorps self = zero */
    PUSH32(esp, esi);
    esi = MEM32(esp + 8);
    xmm0 = MEMF(esi + 0x32C); /* movss */
    xmm0 = xmm0 - xmm5; /* subss */
    /* comiss xmm6, xmm0 - sets EFLAGS */
    MEMF(esi + 0x32C) = xmm0; /* movss */
    if ((xmm6 <= xmm0)) goto loc_00104A1B; /* jbe: below or equal (unsigned <=) */

loc_001049E9: ;
    PUSH32(esp, 0); sub_003E1D70(); /* call 0x003E1D70 */

loc_001049EE: ;
    xmm0 = xmm0 * MEMF(0x648D18); /* mulss */
    MEMF(esi + 0x32C) = xmm0; /* movss */
    PUSH32(esp, 0); sub_003E1D70(); /* call 0x003E1D70 */

loc_00104A03: ;
    xmm0 = xmm0 * MEMF(esi + 0x318); /* mulss */
    xmm0 = xmm0 + MEMF(esi + 0x310); /* addss */
    MEMF(esi + 0x320) = xmm0; /* movss */

loc_00104A1B: ;
    xmm0 = MEMF(esi + 0x320); /* movss */
    xmm0 = xmm0 - MEMF(esi + 0x38); /* subss */
    xmm0 = xmm0 * MEMF(0x648F20); /* mulss */
    xmm0 = xmm0 + MEMF(esi + 0x38); /* addss */
    MEMF(esi + 0x38) = xmm0; /* movss */
    xmm0 = MEMF(esi + 0x330); /* movss */
    xmm0 = xmm0 - xmm5; /* subss */
    /* comiss xmm6, xmm0 - sets EFLAGS */
    MEMF(esi + 0x330) = xmm0; /* movss */
    if ((xmm6 <= xmm0)) goto loc_00104A9D; /* jbe: below or equal (unsigned <=) */

loc_00104A53: ;
    PUSH32(esp, 0); sub_003E1D70(); /* call 0x003E1D70 */

loc_00104A58: ;
    xmm0 = xmm0 * MEMF(0x649278); /* mulss */
    MEMF(esi + 0x330) = xmm0; /* movss */
    PUSH32(esp, 0); sub_003E2480(); /* call 0x003E2480 */

loc_00104A6D: ;
    if (TEST_Z(LO8(eax), 1)) goto loc_00104A80; /* je: equal / zero */

loc_00104A71: ;
    PUSH32(esp, 0); sub_003E1D70(); /* call 0x003E1D70 */

loc_00104A76: ;
    xmm0 = xmm0 * MEMF(esi + 0x31C); /* mulss */
    goto loc_00104A8D;

loc_00104A80: ;
    PUSH32(esp, 0); sub_003E1D70(); /* call 0x003E1D70 */

loc_00104A85: ;
    xmm0 = xmm0 * MEMF(esi + 0x328); /* mulss */

loc_00104A8D: ;
    xmm0 = xmm0 + MEMF(esi + 0x314); /* addss */
    MEMF(esi + 0x324) = xmm0; /* movss */

loc_00104A9D: ;
    xmm0 = MEMF(esi + 0x324); /* movss */
    xmm0 = xmm0 - MEMF(esi + 0x3C); /* subss */
    xmm0 = xmm0 * MEMF(0x648EA8); /* mulss */
    xmm0 = xmm0 + MEMF(esi + 0x3C); /* addss */
    MEMF(esi + 0x3C) = xmm0; /* movss */
    eax = 1;
    POP32(esp, esi);
    esp += 4; return; /* ret */

}

/**
 * sub_00104AD0
 * Original: 0x00104AD0 - 0x00104C10 (320 bytes, 73 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00104AD0(void)
{
    int _flags = 0; /* fallback flag var */
    float xmm0, xmm1, xmm2, xmm3, xmm4, xmm5, xmm6, xmm7;

loc_00104AD0: ;
    esp = esp - 0xC;
    ecx = eax + 0x348;
    PUSH32(esp, esi);
    edx = ecx;
    esi = MEM32(edx);
    MEM32(esp + 4) = esi;
    esi = MEM32(edx + 4);
    edx = MEM32(edx + 8);
    MEM32(esp + 0xC) = edx;
    edx = MEM32(0x7FA20C);
    (void)0; /* test edx, edx - flags set for next jcc */
    MEM32(esp + 8) = esi;
    POP32(esp, esi);
    if (TEST_Z(edx, edx)) goto loc_00104B4C; /* je: equal / zero */

loc_00104AFB: ;
    xmm0 = MEMF(eax + 0x358); /* movss */
    xmm1 = MEMF(ecx); /* movss */
    xmm2 = MEMF(eax + 0x34C); /* movss */
    xmm3 = MEMF(eax + 0x350); /* movss */

loc_00104B17: ;
    edx--;
    xmm4 = xmm0; /* movaps */
    xmm4 = xmm4 * xmm1; /* mulss */
    xmm1 = xmm4; /* movaps */
    xmm4 = xmm0; /* movaps */
    xmm4 = xmm4 * xmm2; /* mulss */
    xmm2 = xmm4; /* movaps */
    xmm4 = xmm0; /* movaps */
    xmm4 = xmm4 * xmm3; /* mulss */
    xmm3 = xmm4; /* movaps */
    if ((edx != 0)) goto loc_00104B17; /* jne: not equal / not zero */

loc_00104B38: ;
    MEMF(ecx) = xmm1; /* movss */
    MEMF(eax + 0x34C) = xmm2; /* movss */
    MEMF(eax + 0x350) = xmm3; /* movss */

loc_00104B4C: ;
    xmm1 = MEMF(0x7FA24C); /* movss */
    xmm0 = MEMF(eax + 0x354); /* movss */
    xmm2 = MEMF(ecx); /* movss */
    xmm3 = MEMF(eax + 0x350); /* movss */
    xmm4 = MEMF(0x7FA248); /* movss */
    xmm5 = MEMF(esp); /* movss */
    xmm6 = MEMF(esp + 4); /* movss */
    xmm7 = MEMF(esp + 8); /* movss */
    xmm0 = xmm0 * xmm1; /* mulss */
    xmm0 = xmm0 + MEMF(eax + 0x34C); /* addss */
    MEMF(eax + 0x34C) = xmm0; /* movss */
    xmm0 = xmm0 - xmm6; /* subss */
    xmm0 = xmm0 * xmm4; /* mulss */
    xmm2 = xmm2 - xmm5; /* subss */
    xmm2 = xmm2 * xmm4; /* mulss */
    xmm3 = xmm3 - xmm7; /* subss */
    xmm3 = xmm3 * xmm4; /* mulss */
    xmm4 = xmm1; /* movaps */
    xmm4 = xmm4 * xmm2; /* mulss */
    xmm2 = MEMF(0x648D10); /* movss */
    xmm4 = xmm4 * xmm2; /* mulss */
    xmm4 = xmm4 + xmm5; /* addss */
    xmm4 = xmm4 * xmm1; /* mulss */
    xmm4 = xmm4 + MEMF(eax + 0x40); /* addss */
    MEMF(eax + 0x40) = xmm4; /* movss */
    xmm4 = xmm1; /* movaps */
    xmm4 = xmm4 * xmm0; /* mulss */
    xmm4 = xmm4 * xmm2; /* mulss */
    xmm0 = xmm1; /* movaps */
    xmm0 = xmm0 * xmm3; /* mulss */
    xmm0 = xmm0 * xmm2; /* mulss */
    xmm4 = xmm4 + xmm6; /* addss */
    xmm0 = xmm0 + xmm7; /* addss */
    xmm4 = xmm4 * xmm1; /* mulss */
    xmm4 = xmm4 + MEMF(eax + 0x44); /* addss */
    xmm0 = xmm0 * xmm1; /* mulss */
    xmm0 = xmm0 + MEMF(eax + 0x48); /* addss */
    MEMF(eax + 0x44) = xmm4; /* movss */
    MEMF(eax + 0x48) = xmm0; /* movss */
    esp = esp + 0xC;
    esp += 4; return; /* ret */

}

/**
 * sub_00104C30
 * Original: 0x00104C30 - 0x00104C5D (45 bytes, 11 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00104C30(void)
{
    float xmm0;

loc_00104C30: ;
    eax = MEM32(esp + 4);
    PUSH32(esp, 0); sub_00104AD0(); /* call 0x00104AD0 */

loc_00104C39: ;
    ecx = MEM32(eax + 0x40);
    xmm0 = MEMF(eax + 0x44); /* movss */
    edx = MEM32(eax + 0x48);
    xmm0 = xmm0 + MEMF(0x648EA4); /* addss */
    MEM32(eax + 0x4C) = ecx;
    MEMF(eax + 0x50) = xmm0; /* movss */
    MEM32(eax + 0x54) = edx;
    eax = 1;
    esp += 4; return; /* ret */

}

/**
 * sub_00104C60
 * Original: 0x00104C60 - 0x00104C93 (51 bytes, 10 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00104C60(void)
{

loc_00104C60: ;
    eax = MEM32(esp + 4);
    MEM8(eax + 0x14A) = 0;
    MEM8(eax + 0x149) = 0x24;
    SET_LO16(ecx, MEM16(eax + 0x364));
    MEM16(eax + 0x36) = LO16(ecx);
    edx = MEM32(eax + 0x360);
    MEM32(eax + 0x354) = edx;
    MEM32(eax + 0x64) = MEM32(eax + 0x64) | 0x8000000;
    SET_LO8(eax, 1);
    esp += 4; return; /* ret */

}

/**
 * sub_00104CA0
 * Original: 0x00104CA0 - 0x00104DDD (317 bytes, 70 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00104CA0(void)
{
    uint32_t ebp;
    int _flags = 0; /* fallback flag var */
    float xmm0, xmm1, xmm2, xmm3, xmm4, xmm5, xmm6, xmm7;
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_00104CA0: ;
    xmm3 = MEMF(0x648D34); /* movss */
    xmm6 = MEMF(0x7FA21C); /* movss */
    xmm2 = 0.0f; /* xorps self = zero */
    xmm4 = MEMF(0x648D14); /* movss */
    xmm7 = MEMF(0x648CE0); /* movss */
    PUSH32(esp, esi);
    esi = MEM32(esp + 8);
    xmm1 = MEMF(esi + 0x314); /* movss */
    xmm5 = MEMF(esi + 0x310); /* movss */
    /* ucomiss xmm1, xmm3 - sets EFLAGS */
    /* lahf - load AH from flags (used in FPU compare idiom) */
    (void)0; /* test HI8(eax), 0x44 - flags set for next jcc */
    xmm0 = xmm5; /* movaps */
    xmm0 = xmm0 + xmm6; /* addss */
    MEMF(esi + 0x310) = xmm0; /* movss */
    if (1 /* jnp after test - parity */) goto loc_00104D74; /* jnp: not parity */

loc_00104CF4: ;
    /* comiss xmm0, xmm1 - sets EFLAGS */
    if ((xmm0 < xmm1)) goto loc_00104CFD; /* jb: below (unsigned <) */

loc_00104CF9: ;
    eax = 0; /* xor self */
    POP32(esp, esi);
    esp += 4; return; /* ret */

loc_00104CFD: ;
    xmm1 = MEMF(esi + 0x314); /* movss */
    xmm1 = xmm1 - xmm0; /* subss */
    xmm0 = MEMF(esi + 0x318); /* movss */
    xmm0 = xmm0 * xmm7; /* mulss */
    /* comiss xmm0, xmm1 - sets EFLAGS */
    if ((xmm0 <= xmm1)) goto loc_00104D74; /* jbe: below or equal (unsigned <=) */

loc_00104D1A: ;
    xmm1 = xmm1 / xmm0; /* divss */
    /* comiss xmm2, xmm1 - sets EFLAGS */
    if ((xmm2 <= xmm1)) goto loc_00104D28; /* jbe: below or equal (unsigned <=) */

loc_00104D23: ;
    xmm1 = xmm2; /* movaps */
    goto loc_00104D30;

loc_00104D28: ;
    /* comiss xmm1, xmm4 - sets EFLAGS */
    if ((xmm1 <= xmm4)) goto loc_00104D30; /* jbe: below or equal (unsigned <=) */

loc_00104D2D: ;
    xmm1 = xmm4; /* movaps */

loc_00104D30: ;
    xmm0 = MEMF(esi + 0x31C); /* movss */
    xmm0 = xmm0 * xmm1; /* mulss */
    MEMF(esi + 0x38) = xmm0; /* movss */
    eax = MEM32(esi + 0x38);
    xmm0 = MEMF(esi + 0x320); /* movss */
    xmm0 = xmm0 * xmm1; /* mulss */
    MEMF(esi + 0x3C) = xmm0; /* movss */
    MEM32(esi + 0x328) = eax;
    ecx = MEM32(esi + 0x3C);
    MEM32(esi + 0x330) = ecx;
    MEMF(esi + 0x324) = xmm3; /* movss */
    MEMF(esi + 0x32C) = xmm3; /* movss */

loc_00104D74: ;
    xmm0 = MEMF(esi + 0x318); /* movss */
    /* comiss xmm0, MEMF(esi + 0x310) - sets EFLAGS */
    if ((xmm0 <= MEMF(esi + 0x310))) { sub_00104DDD(); return; } /* jbe: below or equal (unsigned <=) */

loc_00104D85: ;
    xmm0 = MEMF(esi + 0x310); /* movss */
    xmm0 = xmm0 / MEMF(esi + 0x318); /* divss */
    /* comiss xmm2, xmm0 - sets EFLAGS */
    if ((xmm2 <= xmm0)) goto loc_00104D9F; /* jbe: below or equal (unsigned <=) */

loc_00104D9A: ;
    xmm0 = xmm2; /* movaps */
    goto loc_00104DA7;

loc_00104D9F: ;
    /* comiss xmm0, xmm4 - sets EFLAGS */
    if ((xmm0 <= xmm4)) goto loc_00104DA7; /* jbe: below or equal (unsigned <=) */

loc_00104DA4: ;
    xmm0 = xmm4; /* movaps */

loc_00104DA7: ;
    xmm1 = MEMF(esi + 0x31C); /* movss */
    xmm1 = xmm1 * xmm0; /* mulss */
    MEMF(esi + 0x38) = xmm1; /* movss */
    xmm1 = MEMF(esi + 0x320); /* movss */
    edx = MEM32(esi + 0x38);
    xmm1 = xmm1 * xmm0; /* mulss */
    MEMF(esi + 0x3C) = xmm1; /* movss */
    MEM32(esi + 0x328) = edx;
    eax = MEM32(esi + 0x3C);
    MEM32(esi + 0x330) = eax;
    g_seh_ebp = ebp; sub_00104E0C(); return; /* tail jmp 0x00104E0C */

}

/**
 * sub_00104F00
 * Original: 0x00104F00 - 0x00104F60 (96 bytes, 23 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00104F00(void)
{
    int _flags = 0; /* fallback flag var */
    float xmm0;

loc_00104F00: ;
    PUSH32(esp, 0xFF);
    PUSH32(esp, 0x4F);
    eax = 0x4C;
    PUSH32(esp, 0); sub_000D9C60(); /* call 0x000D9C60 */

loc_00104F11: ;
    esp = esp + 8;
    if (TEST_Z(eax, eax)) goto loc_00104F5F; /* je: equal / zero */

loc_00104F18: ;
    xmm0 = MEMF(esp + 8); /* movss */
    ecx = MEM32(esp + 4);
    edx = MEM32(esp + 0x10);
    MEMF(eax + 0x38) = xmm0; /* movss */
    MEMF(eax + 0x3C) = xmm0; /* movss */
    xmm0 = MEMF(esp + 0xC); /* movss */
    MEMF(eax + 0x30) = xmm0; /* movss */
    xmm0 = 0.0f; /* xorps self = zero */
    MEMF(eax + 0x34) = xmm0; /* movss */
    xmm0 = MEMF(esp + 0x14); /* movss */
    MEMF(eax + 0x44) = xmm0; /* movss */
    xmm0 = MEMF(esp + 0x18); /* movss */
    MEM32(eax + 0x2C) = ecx;
    MEM32(eax + 0x40) = edx;
    MEMF(eax + 0x48) = xmm0; /* movss */

loc_00104F5F: ;
    esp += 4; return; /* ret */

}

/**
 * sub_00104FF0
 * Original: 0x00104FF0 - 0x0010526C (636 bytes, 157 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00104FF0(void)
{
    uint32_t ebp;
    int _flags = 0; /* fallback flag var */
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_00104FF0: ;
    eax = MEM32(0x6B83F4);
    (void)0; /* cmp MEM32(0x771760), eax - flags set for next jcc */
    PUSH32(esp, esi);
    esi = eax;
    if (CMP_EQ(MEM32(0x771760), eax)) goto loc_0010500C; /* je: equal / zero */

loc_00105000: ;
    PUSH32(esp, eax);
    PUSH32(esp, 0); sub_00536930(); /* call 0x00536930 */

loc_00105006: ;
    MEM32(0x771760) = esi;

loc_0010500C: ;
    eax = MEM32(0x77175C);
    PUSH32(esp, ebp);
    PUSH32(esp, edi);
    edi = 0; /* xor self */
    if (CMP_EQ(eax, edi)) goto loc_00105026; /* je: equal / zero */

loc_00105019: ;
    eax = 0; /* xor self */
    PUSH32(esp, 0); sub_00538690(); /* call 0x00538690 */

loc_00105020: ;
    MEM32(0x77175C) = edi;

loc_00105026: ;
    eax = MEM32(0x77182C);
    esi = 0x1B02;
    if (CMP_EQ(eax, esi)) goto loc_00105040; /* je: equal / zero */

loc_00105034: ;
    PUSH32(esp, esi);
    PUSH32(esp, 0); sub_00537840(); /* call 0x00537840 */

loc_0010503A: ;
    MEM32(0x77182C) = esi;

loc_00105040: ;
    if (CMP_EQ(MEM32(0x771828), edi)) goto loc_00105054; /* je: equal / zero */

loc_00105048: ;
    PUSH32(esp, edi);
    PUSH32(esp, 0); sub_00537070(); /* call 0x00537070 */

loc_0010504E: ;
    MEM32(0x771828) = edi;

loc_00105054: ;
    eax = MEM32(0x771824);
    ebp = 1;
    if (CMP_EQ(eax, ebp)) goto loc_0010507A; /* je: equal / zero */

loc_00105062: ;
    edx = ebp;
    ecx = 0x40304;
    PUSH32(esp, 0); sub_00537990(); /* call 0x00537990 */

loc_0010506E: ;
    MEM32(0x549AE4) = ebp;
    MEM32(0x771824) = ebp;

loc_0010507A: ;
    if (CMP_EQ(MEM32(0x771820), edi)) goto loc_0010509A; /* je: equal / zero */

loc_00105082: ;
    edx = 0; /* xor self */
    ecx = 0x40300;
    PUSH32(esp, 0); sub_00537990(); /* call 0x00537990 */

loc_0010508E: ;
    MEM32(0x549AE8) = edi;
    MEM32(0x771820) = edi;

loc_0010509A: ;
    (void)0; /* cmp MEM32(0x77181C), edi - flags set for next jcc */
    PUSH32(esp, ebx);
    ebx = 2;
    if (CMP_EQ(MEM32(0x77181C), edi)) goto loc_00105126; /* je: equal / zero */

loc_001050A8: ;
    esi = MEM32(0x5499E8);
    eax = MEM32(esi);
    if (CMP_B(eax, MEM32(esi + 4))) goto loc_001050C4; /* jb: below (unsigned <) */

loc_001050B5: ;
    eax = MEM32(0x54A8B8);
    ecx = eax;
    ecx = ecx >> 1;
    PUSH32(esp, ecx);
    PUSH32(esp, 0); sub_0053C300(); /* call 0x0053C300 */

loc_001050C4: ;
    MEM32(eax) = 0x4030C;
    MEM32(eax + 4) = edi;
    ecx = MEM32(0x549B40);
    MEM32(eax + 8) = 0x41D78;
    MEM32(eax + 0xC) = ecx;
    eax = eax + 0x10;
    MEM32(esi) = eax;
    eax = MEM32(0x549C34);
    (void)0; /* cmp eax, ebx - flags set for next jcc */
    MEM32(0x549C34) = edi;
    if (CMP_NE(eax, ebx)) goto loc_00105120; /* jne: not equal / not zero */

loc_001050F1: ;
    PUSH32(esp, 0); sub_005384E0(); /* call 0x005384E0 */

loc_001050F6: ;
    PUSH32(esp, 0); sub_00536810(); /* call 0x00536810 */

loc_001050FB: ;
    eax = MEM32(esi);
    if (CMP_B(eax, MEM32(esi + 4))) goto loc_00105111; /* jb: below (unsigned <) */

loc_00105102: ;
    eax = MEM32(0x54A8B8);
    edx = eax;
    edx = edx >> 1;
    PUSH32(esp, edx);
    PUSH32(esp, 0); sub_0053C300(); /* call 0x0053C300 */

loc_00105111: ;
    PUSH32(esp, esi);
    edx = eax;
    PUSH32(esp, 0); sub_00538030(); /* call 0x00538030 */

loc_00105119: ;
    PUSH32(esp, 0); sub_00537E30(); /* call 0x00537E30 */

loc_0010511E: ;
    MEM32(esi) = eax;

loc_00105120: ;
    MEM32(0x77181C) = edi;

loc_00105126: ;
    if (CMP_EQ(MEM32(0x771814), edi)) goto loc_00105146; /* je: equal / zero */

loc_0010512E: ;
    edx = 0; /* xor self */
    ecx = 0x4035C;
    PUSH32(esp, 0); sub_00537990(); /* call 0x00537990 */

loc_0010513A: ;
    MEM32(0x549AF8) = edi;
    MEM32(0x771814) = edi;

loc_00105146: ;
    if (CMP_EQ(MEM32(0x771810), edi)) goto loc_00105164; /* je: equal / zero */

loc_0010514E: ;
    MEM32(0x5499F0) = MEM32(0x5499F0) | 0x1200;
    MEM32(0x549B90) = edi;
    MEM32(0x771810) = edi;

loc_00105164: ;
    if (CMP_EQ(MEM32(0x771764), edi)) goto loc_0010517A; /* je: equal / zero */

loc_0010516C: ;
    PUSH32(esp, edi);
    eax = 0; /* xor self */
    PUSH32(esp, 0); sub_00539960(); /* call 0x00539960 */

loc_00105174: ;
    MEM32(0x771764) = edi;

loc_0010517A: ;
    (void)0; /* cmp MEM32(0x7717E4), ebx - flags set for next jcc */
    eax = 0x800;
    if (CMP_EQ(MEM32(0x7717E4), ebx)) goto loc_00105199; /* je: equal / zero */

loc_00105187: ;
    MEM32(0x5499F0) = MEM32(0x5499F0) | eax;
    MEM32(0x547360) = ebx;
    MEM32(0x7717E4) = ebx;

loc_00105199: ;
    if (CMP_EQ(MEM32(0x7717C4), edi)) goto loc_001051B3; /* je: equal / zero */

loc_001051A1: ;
    MEM32(0x5499F0) = MEM32(0x5499F0) | eax;
    MEM32(0x547368) = edi;
    MEM32(0x7717C4) = edi;

loc_001051B3: ;
    if (CMP_EQ(MEM32(0x7717A4), ebx)) goto loc_001051CD; /* je: equal / zero */

loc_001051BB: ;
    MEM32(0x5499F0) = MEM32(0x5499F0) | eax;
    MEM32(0x547370) = ebx;
    MEM32(0x7717A4) = ebx;

loc_001051CD: ;
    (void)0; /* cmp MEM32(0x771784), edi - flags set for next jcc */
    POP32(esp, ebx);
    if (CMP_EQ(MEM32(0x771784), edi)) goto loc_001051E8; /* je: equal / zero */

loc_001051D6: ;
    MEM32(0x5499F0) = MEM32(0x5499F0) | eax;
    MEM32(0x547378) = edi;
    MEM32(0x771784) = edi;

loc_001051E8: ;
    if (CMP_EQ(MEM32(0x7717E8), ebp)) goto loc_00105202; /* je: equal / zero */

loc_001051F0: ;
    MEM32(0x5499F0) = MEM32(0x5499F0) | eax;
    MEM32(0x5473E0) = ebp;
    MEM32(0x7717E8) = ebp;

loc_00105202: ;
    if (CMP_EQ(MEM32(0x7717A8), ebp)) goto loc_0010521C; /* je: equal / zero */

loc_0010520A: ;
    MEM32(0x5499F0) = MEM32(0x5499F0) | eax;
    MEM32(0x5473F0) = ebp;
    MEM32(0x7717A8) = ebp;

loc_0010521C: ;
    eax = MEM32(0x77180C);
    esi = 0x302;
    (void)0; /* cmp eax, esi - flags set for next jcc */
    POP32(esp, edi);
    POP32(esp, ebp);
    if (CMP_EQ(eax, esi)) goto loc_00105244; /* je: equal / zero */

loc_0010522C: ;
    edx = esi;
    ecx = 0x40344;
    PUSH32(esp, 0); sub_00537990(); /* call 0x00537990 */

loc_00105238: ;
    MEM32(0x549AF0) = esi;
    MEM32(0x77180C) = esi;

loc_00105244: ;
    eax = MEM32(0x771808);
    esi = 0x303;
    if (CMP_EQ(eax, esi)) goto loc_0010526A; /* je: equal / zero */

loc_00105252: ;
    edx = esi;
    ecx = 0x40348;
    PUSH32(esp, 0); sub_00537990(); /* call 0x00537990 */

loc_0010525E: ;
    MEM32(0x549AF4) = esi;
    MEM32(0x771808) = esi;

loc_0010526A: ;
    POP32(esp, esi);
    esp += 4; return; /* ret */

}

/**
 * sub_00105270
 * Original: 0x00105270 - 0x001053CE (350 bytes, 81 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00105270(void)
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

loc_00105270: ;
    eax = MEM32(esp + 4);
    ecx = MEM32(eax + 0x2C);
    edx = ZX8(MEM8(ecx + 0x2A8));
    esp = esp - 8;
    PUSH32(esp, esi);
    esi = (uint32_t)(int32_t)SMEM16(esp + 0x14);
    if (CMP_NE(edx, esi)) goto loc_001053C9; /* jne: not equal / not zero */

loc_0010528F: ;
    fp_push(MEMF(eax + 0x3C)); /* fld float */
    PUSH32(esp, edi);
    fp_st1() *= fp_top(); fp_pop(); /* fmul */
    PUSH32(esp, 0); sub_00471288(); /* call 0x00471288 */

loc_0010529E: ;
    esi = (uint32_t)((int32_t)esi * (int32_t)0x2B0);
    edi = eax;
    eax = MEM32(0x84A13C);
    xmm0 = MEMF(eax + esi + 0x21C); /* movss */
    eax = eax + esi;
    MEMF(esp + 0x18) = xmm0; /* movss */
    xmm0 = MEMF(eax + 0x214); /* movss */
    MEMF(esp + 0x14) = xmm0; /* movss */
    xmm0 = MEMF(eax + 0x220); /* movss */
    MEMF(esp + 8) = xmm0; /* movss */
    xmm0 = MEMF(eax + 0x218); /* movss */
    edi = edi << 0x18;
    esi = 0x15;
    edi = edi | 0xFFFFFF;
    MEMF(esp + 0xC) = xmm0; /* movss */
    PUSH32(esp, 0); sub_0053C660(); /* call 0x0053C660 */

loc_001052F9: ;
    MEM32(eax) = 0x417FC;
    MEM32(eax + 4) = 8;
    xmm1 = MEMF(esp + 0x18); /* movss */
    xmm2 = MEMF(esp + 0x14); /* movss */
    xmm0 = MEMF(0x648D1C); /* movss */
    eax = eax + 4;
    MEM32(eax + 4) = 0x40401818;
    eax = eax + 4;
    MEMF(eax + 4) = xmm1; /* movss */
    xmm3 = MEMF(esp + 8); /* movss */
    eax = eax + 4;
    MEMF(eax + 4) = xmm2; /* movss */
    eax = eax + 4;
    MEMF(eax + 4) = xmm0; /* movss */
    eax = eax + 4;
    MEM32(eax + 4) = edi;
    eax = eax + 4;
    MEMF(eax + 4) = xmm3; /* movss */
    eax = eax + 4;
    MEMF(eax + 4) = xmm2; /* movss */
    xmm2 = MEMF(esp + 0xC); /* movss */
    eax = eax + 4;
    MEMF(eax + 4) = xmm0; /* movss */
    eax = eax + 4;
    MEM32(eax + 4) = edi;
    eax = eax + 4;
    MEMF(eax + 4) = xmm3; /* movss */
    eax = eax + 4;
    MEMF(eax + 4) = xmm2; /* movss */
    eax = eax + 4;
    MEMF(eax + 4) = xmm0; /* movss */
    eax = eax + 4;
    MEM32(eax + 4) = edi;
    ecx = MEM32(0x5499E8);
    eax = eax + 4;
    MEMF(eax + 4) = xmm1; /* movss */
    eax = eax + 4;
    MEMF(eax + 4) = xmm2; /* movss */
    eax = eax + 4;
    MEMF(eax + 4) = xmm0; /* movss */
    eax = eax + 4;
    MEM32(eax + 4) = edi;
    eax = eax + 4;
    eax = eax + 4;
    MEM32(eax) = 0x417FC;
    eax = eax + 4;
    MEM32(eax) = 0;
    eax = eax + 4;
    MEM32(ecx) = eax;
    POP32(esp, edi);

loc_001053C9: ;
    POP32(esp, esi);
    esp = esp + 8;
    esp += 4; return; /* ret */

    #undef fp_push
    #undef fp_pop
    #undef fp_popp
    #undef fp_top
    #undef fp_st1
}

/**
 * sub_001053D0
 * Original: 0x001053D0 - 0x001053EB (27 bytes, 6 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_001053D0(void)
{
    int _flags = 0; /* fallback flag var */

loc_001053D0: ;
    if (CMP_EQ(MEM32(0x77181C), 1)) goto loc_001053EA; /* je: equal / zero */

loc_001053D9: ;
    PUSH32(esp, 1);
    PUSH32(esp, 0); sub_00537190(); /* call 0x00537190 */

loc_001053E0: ;
    MEM32(0x77181C) = 1;

loc_001053EA: ;
    esp += 4; return; /* ret */

}

/**
 * sub_001053F0
 * Original: 0x001053F0 - 0x0010543F (79 bytes, 29 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_001053F0(void)
{
    int _flags = 0; /* fallback flag var */

loc_001053F0: ;
    eax = MEM32(esp + 0xC);
    if (TEST_Z(eax, eax)) goto loc_001053FD; /* je: equal / zero */

loc_001053F8: ;
    if (CMP_NE(eax, 3)) goto loc_0010543E; /* jne: not equal / not zero */

loc_001053FD: ;
    eax = MEM32(esp + 8);
    ecx = MEM32(eax);
    edx = MEM32(ecx + 0x564);
    PUSH32(esp, esi);
    esi = MEM32(esp + 8);
    if (CMP_NE(edx, MEM32(esi + 0x2C))) goto loc_0010543D; /* jne: not equal / not zero */

loc_00105413: ;
    SET_LO8(eax, MEM8(0x8472BD));
    if (TEST_NZ(LO8(eax), LO8(eax))) goto loc_0010543D; /* jne: not equal / not zero */

loc_0010541C: ;
    edx = esi;
    PUSH32(esp, 0); sub_000DAD90(); /* call 0x000DAD90 */

loc_00105423: ;
    eax = MEM32(esi);
    if (CMP_L(eax, 2)) goto loc_0010543D; /* jl: less (signed <) */

loc_0010542A: ;
    eax = (uint32_t)((int32_t)eax * (int32_t)0x70);
    eax = MEM32(eax + 0x5906BC);
    if (TEST_Z(eax, eax)) { sub_0010543F(); return; } /* je: equal / zero */

loc_00105437: ;
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, esi);
    PUSH32(esp, 0); RECOMP_ICALL_SAFE(eax, _icall_esp); /* indirect call */
    }

loc_0010543A: ;
    esp = esp + 4;

loc_0010543D: ;
    POP32(esp, esi);

loc_0010543E: ;
    esp += 4; return; /* ret */

}

/**
 * sub_00105450
 * Original: 0x00105450 - 0x001054A3 (83 bytes, 28 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00105450(void)
{
    uint32_t ebp;
    int _flags = 0; /* fallback flag var */
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_00105450: ;
    (void)0; /* cmp MEM32(0x771CD0), 0x2EE - flags set for next jcc */
    PUSH32(esp, ebp);
    ebp = MEM32(esp + 0x10);
    if (CMP_GE(MEM32(0x771CD0), 0x2EE)) goto loc_0010549F; /* jge: greater or equal (signed >=) */

loc_00105461: ;
    eax = ZX8(MEM8(esp + 0xC));
    eax = eax - 0;
    if ((eax == 0)) goto loc_0010547F; /* je: equal / zero */

loc_0010546B: ;
    eax--;
    if ((eax == 0)) goto loc_00105478; /* je: equal / zero */

loc_0010546E: ;
    eax--;
    if ((eax != 0)) goto loc_0010547F; /* jne: not equal / not zero */

loc_00105471: ;
    ecx = 0x5F;
    goto loc_00105484;

loc_00105478: ;
    ecx = 0x6C;
    goto loc_00105484;

loc_0010547F: ;
    ecx = 0x32;

loc_00105484: ;
    eax = MEM32(esp + 0x18);
    PUSH32(esp, eax);
    eax = MEM32(esp + 0x18);
    eax = eax + 0x170;
    PUSH32(esp, ecx);
    PUSH32(esp, 0); sub_000D9C60(); /* call 0x000D9C60 */

loc_00105498: ;
    esp = esp + 8;
    if (TEST_NZ(eax, eax)) { sub_001054A3(); return; } /* jne: not equal / not zero */

loc_0010549F: ;
    eax = 0; /* xor self */
    POP32(esp, ebp);
    esp += 4; return; /* ret */

}

/**
 * sub_00105840
 * Original: 0x00105840 - 0x00105A7D (573 bytes, 137 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00105840(void)
{
    uint32_t ebp;
    int _flags = 0; /* fallback flag var */
    float xmm0;
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_00105840: ;
    eax = MEM32(0x6B888C);
    ecx = MEM32(0x771760);
    esp = esp - 0x10;
    (void)0; /* cmp ecx, eax - flags set for next jcc */
    PUSH32(esp, ebp);
    PUSH32(esp, esi);
    PUSH32(esp, edi);
    esi = eax;
    if (CMP_EQ(ecx, eax)) goto loc_00105863; /* je: equal / zero */

loc_00105857: ;
    PUSH32(esp, eax);
    PUSH32(esp, 0); sub_00536930(); /* call 0x00536930 */

loc_0010585D: ;
    MEM32(0x771760) = esi;

loc_00105863: ;
    edi = (uint32_t)(int32_t)SMEM16(esp + 0x24);
    eax = MEM32(0x84A13C);
    edi = (uint32_t)((int32_t)edi * (int32_t)0x2B0);
    PUSH32(esp, 0x10);
    edx = edi + eax + 0x100;
    ecx = 0x88;
    PUSH32(esp, 0); sub_00536C00(); /* call 0x00536C00 */

loc_00105886: ;
    ecx = MEM32(0x84A13C);
    edx = edi + ecx + 0xC0;
    PUSH32(esp, 0x10);
    ecx = 0x92;
    PUSH32(esp, 0); sub_00536C00(); /* call 0x00536C00 */

loc_0010589F: ;
    eax = MEM32(0x77182C);
    esi = 0x1B02;
    if (CMP_EQ(eax, esi)) goto loc_001058B9; /* je: equal / zero */

loc_001058AD: ;
    PUSH32(esp, esi);
    PUSH32(esp, 0); sub_00537840(); /* call 0x00537840 */

loc_001058B3: ;
    MEM32(0x77182C) = esi;

loc_001058B9: ;
    eax = MEM32(0x771828);
    ebp = 0; /* xor self */
    if (CMP_EQ(eax, ebp)) goto loc_001058D0; /* je: equal / zero */

loc_001058C4: ;
    PUSH32(esp, ebp);
    PUSH32(esp, 0); sub_00537070(); /* call 0x00537070 */

loc_001058CA: ;
    MEM32(0x771828) = ebp;

loc_001058D0: ;
    eax = MEM32(0x771824);
    PUSH32(esp, ebx);
    ebx = 1;
    if (CMP_EQ(eax, ebx)) goto loc_001058F7; /* je: equal / zero */

loc_001058DF: ;
    edx = ebx;
    ecx = 0x40304;
    PUSH32(esp, 0); sub_00537990(); /* call 0x00537990 */

loc_001058EB: ;
    MEM32(0x549AE4) = ebx;
    MEM32(0x771824) = ebx;

loc_001058F7: ;
    if (CMP_EQ(MEM32(0x771820), ebp)) goto loc_00105917; /* je: equal / zero */

loc_001058FF: ;
    edx = 0; /* xor self */
    ecx = 0x40300;
    PUSH32(esp, 0); sub_00537990(); /* call 0x00537990 */

loc_0010590B: ;
    MEM32(0x549AE8) = ebp;
    MEM32(0x771820) = ebp;

loc_00105917: ;
    if (CMP_EQ(MEM32(0x77181C), ebx)) goto loc_0010592B; /* je: equal / zero */

loc_0010591F: ;
    PUSH32(esp, ebx);
    PUSH32(esp, 0); sub_00537190(); /* call 0x00537190 */

loc_00105925: ;
    MEM32(0x77181C) = ebx;

loc_0010592B: ;
    eax = MEM32(0x771818);
    esi = 0x203;
    if (CMP_EQ(eax, esi)) goto loc_00105951; /* je: equal / zero */

loc_00105939: ;
    edx = esi;
    ecx = 0x40354;
    PUSH32(esp, 0); sub_00537990(); /* call 0x00537990 */

loc_00105945: ;
    MEM32(0x549ADC) = esi;
    MEM32(0x771818) = esi;

loc_00105951: ;
    if (CMP_EQ(MEM32(0x771814), ebp)) goto loc_00105971; /* je: equal / zero */

loc_00105959: ;
    edx = 0; /* xor self */
    ecx = 0x4035C;
    PUSH32(esp, 0); sub_00537990(); /* call 0x00537990 */

loc_00105965: ;
    MEM32(0x549AF8) = ebp;
    MEM32(0x771814) = ebp;

loc_00105971: ;
    if (CMP_EQ(MEM32(0x771810), ebp)) goto loc_0010598F; /* je: equal / zero */

loc_00105979: ;
    MEM32(0x5499F0) = MEM32(0x5499F0) | 0x1200;
    MEM32(0x549B90) = ebp;
    MEM32(0x771810) = ebp;

loc_0010598F: ;
    PUSH32(esp, ebp);
    esi = 0; /* xor self */
    PUSH32(esp, 0); sub_005379C0(); /* call 0x005379C0 */

loc_00105997: ;
    eax = MEM32(0x5499F0);
    ecx = 3;
    MEM32(0x547330) = ecx;
    MEM32(0x547334) = ecx;
    ecx = MEM32(0x7717E8);
    eax = eax | ebx;
    if (CMP_EQ(ecx, ebx)) goto loc_001059CA; /* je: equal / zero */

loc_001059B9: ;
    eax = eax | 0x800;
    MEM32(0x5473E0) = ebx;
    MEM32(0x7717E8) = ebx;

loc_001059CA: ;
    if (CMP_EQ(MEM32(0x7717A8), ebx)) goto loc_001059E3; /* je: equal / zero */

loc_001059D2: ;
    eax = eax | 0x800;
    MEM32(0x5473F0) = ebx;
    MEM32(0x7717A8) = ebx;

loc_001059E3: ;
    eax = eax | 0x400;
    MEM32(0x5499F0) = eax;
    eax = MEM32(0x77180C);
    esi = 0x302;
    (void)0; /* cmp eax, esi - flags set for next jcc */
    MEM32(0x547384) = ebp;
    POP32(esp, ebx);
    if (CMP_EQ(eax, esi)) goto loc_00105A1A; /* je: equal / zero */

loc_00105A02: ;
    edx = esi;
    ecx = 0x40344;
    PUSH32(esp, 0); sub_00537990(); /* call 0x00537990 */

loc_00105A0E: ;
    MEM32(0x549AF0) = esi;
    MEM32(0x77180C) = esi;

loc_00105A1A: ;
    if (CMP_EQ(MEM32(0x77175C), ebp)) goto loc_00105A2F; /* je: equal / zero */

loc_00105A22: ;
    eax = 0; /* xor self */
    PUSH32(esp, 0); sub_00538690(); /* call 0x00538690 */

loc_00105A29: ;
    MEM32(0x77175C) = ebp;

loc_00105A2F: ;
    edx = MEM32(0x84A13C);
    PUSH32(esp, 0x10);
    edx = edi + edx + 0x40;
    ecx = 0xA6;
    PUSH32(esp, 0); sub_00536C00(); /* call 0x00536C00 */

loc_00105A45: ;
    xmm0 = MEMF(0x648D14); /* movss */
    MEMF(esp + 0xC) = xmm0; /* movss */
    xmm0 = 0.0f; /* xorps self = zero */
    edx = esp + 0xC;
    ecx = 0xBA;
    MEMF(esp + 0x10) = xmm0; /* movss */
    MEMF(esp + 0x14) = xmm0; /* movss */
    MEMF(esp + 0x18) = xmm0; /* movss */
    PUSH32(esp, 0); sub_00536B00(); /* call 0x00536B00 */

loc_00105A76: ;
    POP32(esp, edi);
    POP32(esp, esi);
    POP32(esp, ebp);
    esp = esp + 0x10;
    esp += 4; return; /* ret */

}

/**
 * sub_00105A80
 * Original: 0x00105A80 - 0x00105EAF (1071 bytes, 279 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00105A80(void)
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

loc_00105A80: ;
    PUSH32(esp, ebp);
    ebp = esp;
    esp = esp & 0xFFFFFFF0u;
    esp = esp - 0x84;
    edx = MEM32(ebp + 0xC);
    PUSH32(esp, ebx);
    PUSH32(esp, esi);
    esi = MEM32(ebp + 8);
    eax = MEM32(esi + 0x98);
    (void)0; /* test eax, 0x40000 - flags set for next jcc */
    PUSH32(esp, edi);
    if (TEST_Z(eax, 0x40000)) goto loc_00105AB7; /* je: equal / zero */

loc_00105AA2: ;
    SET_LO8(ecx, LO8(edx));
    ebx = 1;
    ebx = ebx << LO8(ecx);
    if (TEST_Z(MEM8(esi + 0xA4), LO8(ebx))) goto loc_00105EA8; /* je: equal / zero */

loc_00105AB7: ;
    if (((int32_t)(HI8(eax) & HI8(eax)) >= 0)) goto loc_00105ADC; /* jns: not sign (positive) */

loc_00105ABB: ;
    SET_LO8(eax, MEM8(esi + 0xA2));
    if (CMP_EQ(LO8(eax), 0xFF)) goto loc_00105ADC; /* je: equal / zero */

loc_00105AC5: ;
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, edx);
    eax = SX8(LO8(eax));
    PUSH32(esp, esi);
    PUSH32(esp, 0); RECOMP_ICALL_SAFE(MEM32(eax * 4 + 0x6B4090), _icall_esp); /* indirect call */
    }

loc_00105AD1: ;
    esp = esp + 8;
    if (TEST_Z(LO8(eax), LO8(eax))) goto loc_00105EA8; /* je: equal / zero */

loc_00105ADC: ;
    xmm0 = MEMF(0x648D80); /* movss */
    xmm1 = MEMF(esi + 0x6C); /* movss */
    ebx = 0; /* xor self */
    PUSH32(esp, ebx);
    esp = esp - 8;
    xmm1 = xmm1 * xmm0; /* mulss */
    MEMF(esp + 4) = xmm1; /* movss */
    xmm1 = MEMF(esi + 0x68); /* movss */
    xmm1 = xmm1 * xmm0; /* mulss */
    eax = esp + 0x5C;
    MEMF(esp) = xmm1; /* movss */
    PUSH32(esp, 0); sub_0042889D(); /* call 0x0042889D */

loc_00105B10: ;
    PUSH32(esp, 0x10);
    edx = eax;
    ecx = 0x9C;
    PUSH32(esp, 0); sub_00536C00(); /* call 0x00536C00 */

loc_00105B1E: ;
    eax = MEM32(esi + 0x98);
    if (TEST_Z(HI8(eax), 0x10)) goto loc_00105B82; /* je: equal / zero */

loc_00105B29: ;
    eax = esi + 0x70;
    ecx = eax;
    edx = MEM32(ecx);
    MEM32(esp + 0x24) = edx;
    edx = MEM32(ecx + 4);
    ecx = MEM32(ecx + 8);
    MEM32(esp + 0x28) = edx;
    MEM32(esp + 0x20) = eax;
    edx = esi + 0x7C;
    eax = esp + 0x24;
    MEM32(esp + 0x2C) = ecx;
    MEM32(esp + 0x1C) = edx;
    MEM32(esp + 0x18) = eax;
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
    edx = esp + 0x24;
    goto loc_00105B85;

loc_00105B82: ;
    edx = esi + 0x70;

loc_00105B85: ;
    ecx = 0xB0;
    PUSH32(esp, 0); sub_00536B00(); /* call 0x00536B00 */

loc_00105B8F: ;
    fp_push(MEMF(esi + 0x30)); /* fld float */
    ecx = esp + 0x18;
    MEM32(esp + 0x18) = ebx;
    PUSH32(esp, ecx);
    PUSH32(esp, 0); sub_00471288(); /* call 0x00471288 */

loc_00105BA0: ;
    ecx = eax;
    eax = MEM32(esi + 0x58);
    PUSH32(esp, 0); sub_000761F0(); /* call 0x000761F0 */

loc_00105BAA: ;
    edi = eax;
    esp = esp + 4;
    if (CMP_NE(edi, ebx)) goto loc_00105BC1; /* jne: not equal / not zero */

loc_00105BB3: ;
    PUSH32(esp, ebx);
    eax = 0; /* xor self */
    PUSH32(esp, 0); sub_00539960(); /* call 0x00539960 */

loc_00105BBB: ;
    MEM32(0x771764) = ebx;

loc_00105BC1: ;
    if (CMP_EQ(MEM32(0x771764), edi)) goto loc_00105BD8; /* je: equal / zero */

loc_00105BC9: ;
    eax = 0; /* xor self */
    ecx = edi;
    PUSH32(esp, 0); sub_003FA570(); /* call 0x003FA570 */

loc_00105BD2: ;
    MEM32(0x771764) = edi;

loc_00105BD8: ;
    ebx = MEM32(esp + 0x18);
    if (TEST_Z(ebx, ebx)) goto loc_00105C38; /* je: equal / zero */

loc_00105BE0: ;
    xmm0 = MEMF(ebx + 8); /* movss */
    MEMF(esp + 0x30) = xmm0; /* movss */
    xmm0 = MEMF(ebx + 0x10); /* movss */
    MEMF(esp + 0x34) = xmm0; /* movss */
    xmm0 = MEMF(ebx + 0xC); /* movss */
    MEMF(esp + 0x38) = xmm0; /* movss */
    xmm0 = MEMF(ebx + 0x10); /* movss */
    MEMF(esp + 0x3C) = xmm0; /* movss */
    xmm0 = MEMF(ebx + 8); /* movss */
    MEMF(esp + 0x40) = xmm0; /* movss */
    xmm0 = MEMF(ebx + 0x14); /* movss */
    MEMF(esp + 0x44) = xmm0; /* movss */
    xmm0 = MEMF(ebx + 0xC); /* movss */
    MEMF(esp + 0x48) = xmm0; /* movss */
    xmm0 = MEMF(ebx + 0x14); /* movss */
    MEMF(esp + 0x4C) = xmm0; /* movss */

loc_00105C38: ;
    eax = MEM32(0x7717E4);
    ecx = MEM32(esi + 0x3C);
    (void)0; /* cmp ecx, eax - flags set for next jcc */
    eax = MEM32(0x5499F0);
    if (CMP_EQ(ecx, eax)) goto loc_00105C5A; /* je: equal / zero */

loc_00105C49: ;
    eax = eax | 0x800;
    MEM32(0x547360) = ecx;
    MEM32(0x7717E4) = ecx;

loc_00105C5A: ;
    ecx = MEM32(esi + 0x40);
    if (CMP_EQ(ecx, MEM32(0x7717C4))) goto loc_00105C76; /* je: equal / zero */

loc_00105C65: ;
    eax = eax | 0x800;
    MEM32(0x547368) = ecx;
    MEM32(0x7717C4) = ecx;

loc_00105C76: ;
    ecx = MEM32(esi + 0x44);
    if (CMP_EQ(ecx, MEM32(0x7717B4))) goto loc_00105C92; /* je: equal / zero */

loc_00105C81: ;
    eax = eax | 0x800;
    MEM32(0x54736C) = ecx;
    MEM32(0x7717B4) = ecx;

loc_00105C92: ;
    ecx = MEM32(esi + 0x48);
    if (CMP_EQ(ecx, MEM32(0x7717A4))) goto loc_00105CAE; /* je: equal / zero */

loc_00105C9D: ;
    eax = eax | 0x800;
    MEM32(0x547370) = ecx;
    MEM32(0x7717A4) = ecx;

loc_00105CAE: ;
    ecx = MEM32(esi + 0x4C);
    if (CMP_EQ(ecx, MEM32(0x771784))) goto loc_00105CCA; /* je: equal / zero */

loc_00105CB9: ;
    eax = eax | 0x800;
    MEM32(0x547378) = ecx;
    MEM32(0x771784) = ecx;

loc_00105CCA: ;
    ecx = MEM32(esi + 0x50);
    if (CMP_EQ(ecx, MEM32(0x771774))) goto loc_00105CE6; /* je: equal / zero */

loc_00105CD5: ;
    eax = eax | 0x800;
    MEM32(0x54737C) = ecx;
    MEM32(0x771774) = ecx;

loc_00105CE6: ;
    eax = eax | 1;
    MEM32(0x5499F0) = eax;
    eax = MEM32(0x771808);
    MEM32(0x54735C) = 4;
    edi = MEM32(esi + 0x54);
    if (CMP_EQ(edi, eax)) goto loc_00105D1C; /* je: equal / zero */

loc_00105D04: ;
    edx = edi;
    ecx = 0x40348;
    PUSH32(esp, 0); sub_00537990(); /* call 0x00537990 */

loc_00105D10: ;
    MEM32(0x549AF4) = edi;
    MEM32(0x771808) = edi;

loc_00105D1C: ;
    eax = ZX8(MEM8(esi + 0x39));
    ecx = ZX8(MEM8(esi + 0x3A));
    edx = 0; /* xor self */
    SET_HI8(edx, MEM8(esi + 0x3B));
    SET_LO8(edx, MEM8(esi + 0x38));
    esi = 0x1D;
    edx = edx << 8;
    edx = edx | eax;
    edx = edx << 8;
    edx = edx | ecx;
    edi = edx;
    PUSH32(esp, 0); sub_0053C660(); /* call 0x0053C660 */

loc_00105D42: ;
    MEM32(eax) = 0x417FC;
    MEM32(eax + 4) = 6;
    eax = eax + 4;
    MEM32(eax + 4) = 0x40601818;
    ecx = MEM32(0x590588);
    eax = eax + 4;
    eax = eax + 4;
    edx = eax;
    MEM32(edx) = ecx;
    ecx = MEM32(0x59058C);
    MEM32(edx + 4) = ecx;
    ecx = MEM32(0x590590);
    esi = 0; /* xor self */
    (void)0; /* cmp ebx, esi - flags set for next jcc */
    MEM32(edx + 8) = ecx;
    MEM32(eax + 0xC) = edi;
    if (CMP_EQ(ebx, esi)) goto loc_00105D91; /* je: equal / zero */

loc_00105D84: ;
    edx = MEM32(esp + 0x30);
    ecx = MEM32(esp + 0x34);
    MEM32(eax + 0x10) = edx;
    goto loc_00105DA0;

loc_00105D91: ;
    edx = MEM32(0x5905B8);
    MEM32(eax + 0x10) = edx;
    ecx = MEM32(0x5905BC);

loc_00105DA0: ;
    (void)0; /* cmp ebx, esi - flags set for next jcc */
    MEM32(eax + 0x14) = ecx;
    ecx = MEM32(0x590594);
    edx = eax + 0x18;
    MEM32(edx) = ecx;
    ecx = MEM32(0x590598);
    MEM32(edx + 4) = ecx;
    ecx = MEM32(0x59059C);
    MEM32(edx + 8) = ecx;
    MEM32(eax + 0x24) = edi;
    if (CMP_EQ(ebx, esi)) goto loc_00105DD4; /* je: equal / zero */

loc_00105DC7: ;
    edx = MEM32(esp + 0x38);
    ecx = MEM32(esp + 0x3C);
    MEM32(eax + 0x28) = edx;
    goto loc_00105DE3;

loc_00105DD4: ;
    edx = MEM32(0x5905C0);
    MEM32(eax + 0x28) = edx;
    ecx = MEM32(0x5905C4);

loc_00105DE3: ;
    (void)0; /* cmp ebx, esi - flags set for next jcc */
    MEM32(eax + 0x2C) = ecx;
    ecx = MEM32(0x5905A0);
    edx = eax + 0x30;
    MEM32(edx) = ecx;
    ecx = MEM32(0x5905A4);
    MEM32(edx + 4) = ecx;
    ecx = MEM32(0x5905A8);
    MEM32(edx + 8) = ecx;
    MEM32(eax + 0x3C) = edi;
    if (CMP_EQ(ebx, esi)) goto loc_00105E17; /* je: equal / zero */

loc_00105E0A: ;
    edx = MEM32(esp + 0x40);
    ecx = MEM32(esp + 0x44);
    MEM32(eax + 0x40) = edx;
    goto loc_00105E26;

loc_00105E17: ;
    edx = MEM32(0x5905C8);
    MEM32(eax + 0x40) = edx;
    ecx = MEM32(0x5905CC);

loc_00105E26: ;
    (void)0; /* cmp ebx, esi - flags set for next jcc */
    MEM32(eax + 0x44) = ecx;
    ecx = MEM32(0x5905AC);
    edx = eax + 0x48;
    MEM32(edx) = ecx;
    ecx = MEM32(0x5905B0);
    MEM32(edx + 4) = ecx;
    ecx = MEM32(0x5905B4);
    MEM32(edx + 8) = ecx;
    MEM32(eax + 0x54) = edi;
    if (CMP_EQ(ebx, esi)) goto loc_00105E5A; /* je: equal / zero */

loc_00105E4D: ;
    edx = MEM32(esp + 0x48);
    ecx = MEM32(esp + 0x4C);
    MEM32(eax + 0x58) = edx;
    goto loc_00105E69;

loc_00105E5A: ;
    edx = MEM32(0x5905D0);
    MEM32(eax + 0x58) = edx;
    ecx = MEM32(0x5905D4);

loc_00105E69: ;
    edx = MEM32(0x5499E8);
    MEM32(eax + 0x5C) = ecx;
    eax = eax + 0x60;
    MEM32(eax) = 0x417FC;
    eax = eax + 4;
    MEM32(eax) = esi;
    eax = eax + 4;
    MEM32(edx) = eax;
    if (CMP_EQ(MEM32(0x771764), esi)) goto loc_00105E9B; /* je: equal / zero */

loc_00105E8D: ;
    PUSH32(esp, esi);
    eax = 0; /* xor self */
    PUSH32(esp, 0); sub_00539960(); /* call 0x00539960 */

loc_00105E95: ;
    MEM32(0x771764) = esi;

loc_00105E9B: ;
    MEM32(0x5499F0) = MEM32(0x5499F0) | 1;
    MEM32(0x54735C) = esi;

loc_00105EA8: ;
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
 * sub_00105EB0
 * Original: 0x00105EB0 - 0x00105F19 (105 bytes, 31 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00105EB0(void)
{
    int _flags = 0; /* fallback flag var */
    float xmm0, xmm1;

loc_00105EB0: ;
    ecx = MEM32(0x7FA20C);
    (void)0; /* cmp ecx, 4 - flags set for next jcc */
    edx = MEM32(esp + 4);
    xmm0 = MEMF(edx + 0x170); /* movss */
    if (CMP_L(ecx, 4)) goto loc_00105EFB; /* jl: less (signed <) */

loc_00105EC7: ;
    xmm1 = MEMF(edx + 0x8C); /* movss */
    eax = ecx + -4;
    eax = eax >> 2;
    PUSH32(esp, esi);
    eax++;
    esi = eax;
    esi = (uint32_t)(-(int32_t)esi);
    ecx = ecx + esi * 4;
    POP32(esp, esi);
    /* nop */

loc_00105EE0: ;
    eax--;
    xmm1 = xmm1 * xmm0; /* mulss */
    xmm1 = xmm1 * xmm0; /* mulss */
    xmm1 = xmm1 * xmm0; /* mulss */
    xmm1 = xmm1 * xmm0; /* mulss */
    if ((eax != 0)) goto loc_00105EE0; /* jne: not equal / not zero */

loc_00105EF3: ;
    MEMF(edx + 0x8C) = xmm1; /* movss */

loc_00105EFB: ;
    if (CMP_LE(ecx & ecx, 0)) goto loc_00105F16; /* jle: less or equal (signed <=) */

loc_00105EFF: ;
    xmm1 = MEMF(edx + 0x8C); /* movss */

loc_00105F07: ;
    ecx--;
    xmm1 = xmm1 * xmm0; /* mulss */
    if ((ecx != 0)) goto loc_00105F07; /* jne: not equal / not zero */

loc_00105F0E: ;
    MEMF(edx + 0x8C) = xmm1; /* movss */

loc_00105F16: ;
    SET_LO8(eax, 1);
    esp += 4; return; /* ret */

}

/**
 * sub_00105F20
 * Original: 0x00105F20 - 0x00105FBE (158 bytes, 40 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00105F20(void)
{
    int _flags = 0; /* fallback flag var */
    float xmm0, xmm1, xmm2;

loc_00105F20: ;
    ecx = MEM32(0x7FA20C);
    (void)0; /* cmp ecx, 4 - flags set for next jcc */
    edx = MEM32(esp + 4);
    xmm0 = MEMF(edx + 0x170); /* movss */
    if (CMP_L(ecx, 4)) goto loc_00105F8A; /* jl: less (signed <) */

loc_00105F37: ;
    xmm1 = MEMF(edx + 0x88); /* movss */
    xmm2 = MEMF(edx + 0x90); /* movss */
    eax = ecx + -4;
    eax = eax >> 2;
    PUSH32(esp, esi);
    eax++;
    esi = eax;
    esi = (uint32_t)(-(int32_t)esi);
    ecx = ecx + esi * 4;
    POP32(esp, esi);

loc_00105F57: ;
    eax--;
    xmm1 = xmm1 * xmm0; /* mulss */
    xmm2 = xmm2 * xmm0; /* mulss */
    xmm1 = xmm1 * xmm0; /* mulss */
    xmm2 = xmm2 * xmm0; /* mulss */
    xmm1 = xmm1 * xmm0; /* mulss */
    xmm2 = xmm2 * xmm0; /* mulss */
    xmm1 = xmm1 * xmm0; /* mulss */
    xmm2 = xmm2 * xmm0; /* mulss */
    if ((eax != 0)) goto loc_00105F57; /* jne: not equal / not zero */

loc_00105F7A: ;
    MEMF(edx + 0x88) = xmm1; /* movss */
    MEMF(edx + 0x90) = xmm2; /* movss */

loc_00105F8A: ;
    if (CMP_LE(ecx & ecx, 0)) goto loc_00105FBB; /* jle: less or equal (signed <=) */

loc_00105F8E: ;
    xmm1 = MEMF(edx + 0x88); /* movss */
    xmm2 = MEMF(edx + 0x90); /* movss */
    edi = edi;

loc_00105FA0: ;
    ecx--;
    xmm1 = xmm1 * xmm0; /* mulss */
    xmm2 = xmm2 * xmm0; /* mulss */
    if ((ecx != 0)) goto loc_00105FA0; /* jne: not equal / not zero */

loc_00105FAB: ;
    MEMF(edx + 0x88) = xmm1; /* movss */
    MEMF(edx + 0x90) = xmm2; /* movss */

loc_00105FBB: ;
    SET_LO8(eax, 1);
    esp += 4; return; /* ret */

}

/**
 * sub_00105FC0
 * Original: 0x00105FC0 - 0x00105FDA (26 bytes, 6 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00105FC0(void)
{
    float xmm0;

loc_00105FC0: ;
    ecx = MEM32(esp + 4);
    xmm0 = MEMF(ecx + 0x170); /* movss */
    eax = ecx + 0x88;
    PUSH32(esp, 0); sub_00106150(); /* call 0x00106150 */

loc_00105FD7: ;
    SET_LO8(eax, 1);
    esp += 4; return; /* ret */

}

/**
 * sub_00105FE0
 * Original: 0x00105FE0 - 0x00105FF7 (23 bytes, 6 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00105FE0(void)
{
    uint32_t ebp;
    int _flags = 0; /* fallback flag var */
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_00105FE0: ;
    SET_LO8(eax, MEM8(0x8472BD));
    if (TEST_NZ(LO8(eax), LO8(eax))) { sub_00105FF7(); return; } /* jne: not equal / not zero */

loc_00105FE9: ;
    eax = MEM32(esp + 4);
    edx = 1;
    g_seh_ebp = ebp; sub_000DA5E0(); return; /* tail jmp 0x000DA5E0 */

}

/**
 * sub_00106000
 * Original: 0x00106000 - 0x00106019 (25 bytes, 7 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00106000(void)
{
    uint32_t ebp;
    int _flags = 0; /* fallback flag var */
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_00106000: ;
    PUSH32(esp, esi);
    esi = MEM32(esp + 8);
    eax = MEM32(esi + 0x98);
    if (TEST_Z(HI8(eax), 0x40)) { sub_00106019(); return; } /* je: equal / zero */

loc_00106010: ;
    ecx = ZX8(MEM8(esi + 0xA3));
    g_seh_ebp = ebp; sub_0010601B(); return; /* tail jmp 0x0010601B */

}

/**
 * sub_00106040
 * Original: 0x00106040 - 0x00106059 (25 bytes, 7 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00106040(void)
{
    uint32_t ebp;
    int _flags = 0; /* fallback flag var */
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_00106040: ;
    PUSH32(esp, esi);
    esi = MEM32(esp + 8);
    eax = MEM32(esi + 0x98);
    if (TEST_Z(HI8(eax), 0x40)) { sub_00106059(); return; } /* je: equal / zero */

loc_00106050: ;
    ecx = ZX8(MEM8(esi + 0xA3));
    g_seh_ebp = ebp; sub_0010605B(); return; /* tail jmp 0x0010605B */

}

/**
 * sub_00106080
 * Original: 0x00106080 - 0x001060A4 (36 bytes, 16 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00106080(void)
{
    uint32_t ebp;
    int _flags = 0; /* fallback flag var */
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_00106080: ;
    PUSH32(esp, ebx);
    ebx = eax;
    eax = 0; /* xor self */
    SET_LO8(eax, MEM8(edx));
    SET_LO8(eax, LO8(eax) - 0x40);
    SET_LO8(ecx, LO8(eax));
    PUSH32(esp, ebp);
    ebp = MEM32(esp + 0xC);
    SET_LO8(ecx, LO8(ecx) & 0xC0);
    (void)0; /* test LO8(eax), 0x40 - flags set for next jcc */
    PUSH32(esp, esi);
    if (TEST_Z(LO8(eax), 0x40)) { sub_001060A4(); return; } /* je: equal / zero */

loc_00106098: ;
    eax = eax & 0x3F;
    esi = 0x40;
    esi = esi - eax;
    g_seh_ebp = ebp; sub_001060A9(); return; /* tail jmp 0x001060A9 */

}

/**
 * sub_00106150
 * Original: 0x00106150 - 0x001061F1 (161 bytes, 46 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00106150(void)
{
    int _flags = 0; /* fallback flag var */
    float xmm0, xmm1, xmm2, xmm3;

loc_00106150: ;
    edx = MEM32(0x7FA20C);
    if (CMP_L(edx, 4)) goto loc_001061C1; /* jl: less (signed <) */

loc_0010615B: ;
    xmm1 = MEMF(eax); /* movss */
    xmm2 = MEMF(eax + 4); /* movss */
    xmm3 = MEMF(eax + 8); /* movss */
    ecx = edx + -4;
    ecx = ecx >> 2;
    PUSH32(esp, esi);
    ecx++;
    esi = ecx;
    esi = (uint32_t)(-(int32_t)esi);
    edx = edx + esi * 4;
    POP32(esp, esi);
    /* nop */

loc_00106180: ;
    ecx--;
    xmm1 = xmm1 * xmm0; /* mulss */
    xmm2 = xmm2 * xmm0; /* mulss */
    xmm3 = xmm3 * xmm0; /* mulss */
    xmm1 = xmm1 * xmm0; /* mulss */
    xmm2 = xmm2 * xmm0; /* mulss */
    xmm3 = xmm3 * xmm0; /* mulss */
    xmm1 = xmm1 * xmm0; /* mulss */
    xmm2 = xmm2 * xmm0; /* mulss */
    xmm3 = xmm3 * xmm0; /* mulss */
    xmm1 = xmm1 * xmm0; /* mulss */
    xmm2 = xmm2 * xmm0; /* mulss */
    xmm3 = xmm3 * xmm0; /* mulss */
    if ((ecx != 0)) goto loc_00106180; /* jne: not equal / not zero */

loc_001061B3: ;
    MEMF(eax) = xmm1; /* movss */
    MEMF(eax + 4) = xmm2; /* movss */
    MEMF(eax + 8) = xmm3; /* movss */

loc_001061C1: ;
    if (CMP_LE(edx & edx, 0)) goto loc_001061F0; /* jle: less or equal (signed <=) */

loc_001061C5: ;
    xmm1 = MEMF(eax); /* movss */
    xmm2 = MEMF(eax + 4); /* movss */
    xmm3 = MEMF(eax + 8); /* movss */

loc_001061D3: ;
    edx--;
    xmm1 = xmm1 * xmm0; /* mulss */
    xmm2 = xmm2 * xmm0; /* mulss */
    xmm3 = xmm3 * xmm0; /* mulss */
    if ((edx != 0)) goto loc_001061D3; /* jne: not equal / not zero */

loc_001061E2: ;
    MEMF(eax) = xmm1; /* movss */
    MEMF(eax + 4) = xmm2; /* movss */
    MEMF(eax + 8) = xmm3; /* movss */

loc_001061F0: ;
    esp += 4; return; /* ret */

}

/**
 * sub_00106200
 * Original: 0x00106200 - 0x0010621B (27 bytes, 10 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00106200(void)
{

loc_00106200: ;
    ecx = MEM32(esp + 8);
    eax = MEM32(esp + 4);
    PUSH32(esp, ebx);
    PUSH32(esp, ecx);
    ebx = eax + 0x170;
    PUSH32(esp, eax);
    PUSH32(esp, 0); sub_00106220(); /* call 0x00106220 */

loc_00106216: ;
    esp = esp + 8;
    POP32(esp, ebx);
    esp += 4; return; /* ret */

}

/**
 * sub_00106220
 * Original: 0x00106220 - 0x00106347 (295 bytes, 74 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00106220(void)
{
    uint32_t ebp;
    int _flags = 0; /* fallback flag var */
    float xmm0, xmm1;
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_00106220: ;
    esp = esp - 0x1C;
    (void)0; /* test MEM8(ebx), 1 - flags set for next jcc */
    PUSH32(esp, ebp);
    ebp = MEM32(esp + 0x24);
    PUSH32(esp, esi);
    MEM8(esp + 0xB) = 1;
    if (TEST_Z(MEM8(ebx), 1)) goto loc_0010633D; /* je: equal / zero */

loc_00106237: ;
    SET_LO8(eax, MEM8(ebx + 1));
    if (CMP_EQ(LO8(eax), 0xFF)) goto loc_0010633D; /* je: equal / zero */

loc_00106242: ;
    eax = SX8(LO8(eax));
    ecx = MEM32(eax * 4 + 0x595B34);
    if (TEST_Z(ecx, ecx)) goto loc_0010633D; /* je: equal / zero */

loc_00106254: ;
    eax = MEM32(esp + 0x2C);
    xmm0 = MEMF(eax + 4); /* movss */
    /* comiss xmm0, MEMF(ebp + 0x74) - sets EFLAGS */
    if ((xmm0 <= MEMF(ebp + 0x74))) goto loc_0010633D; /* jbe: below or equal (unsigned <=) */

loc_00106267: ;
    xmm0 = MEMF(ebp + 0x70); /* movss */
    MEMF(esp + 0xC) = xmm0; /* movss */
    xmm0 = MEMF(eax + 4); /* movss */
    MEMF(esp + 0x10) = xmm0; /* movss */
    xmm0 = MEMF(ebp + 0x78); /* movss */
    esi = esp + 0xC;
    MEMF(esp + 0x14) = xmm0; /* movss */
    PUSH32(esp, 0); sub_001120F0(); /* call 0x001120F0 */

loc_00106291: ;
    if (TEST_NZ(LO8(eax), LO8(eax))) goto loc_0010629B; /* jne: not equal / not zero */

loc_00106295: ;
    POP32(esp, esi);
    POP32(esp, ebp);
    esp = esp + 0x1C;
    esp += 4; return; /* ret */

loc_0010629B: ;
    xmm0 = MEMF(ebp + 0x6C); /* movss */
    xmm0 = xmm0 * MEMF(0x6496A8); /* mulss */
    xmm1 = MEMF(ebp + 0x74); /* movss */
    PUSH32(esp, edi);
    PUSH32(esp, 0);
    PUSH32(esp, ecx);
    xmm1 = xmm1 - xmm0; /* subss */
    MEMF(esp) = xmm1; /* movss */
    esi = ebp + 0xB0;
    PUSH32(esp, 0);
    edi = esp + 0x1C;
    MEM32(0x780AB0) = 0x5F3BD4;
    MEM32(0x6C0210) = 0x39C;
    MEM8(0x84B538) = 1;
    MEM32(0x74FA2C) = 0x4000;
    PUSH32(esp, 0); sub_002A0230(); /* call 0x002A0230 */

loc_001062F0: ;
    esp = esp + 0xC;
    (void)0; /* test LO8(eax), LO8(eax) - flags set for next jcc */
    POP32(esp, edi);
    if (TEST_Z(LO8(eax), LO8(eax))) goto loc_00106338; /* je: equal / zero */

loc_001062F8: ;
    xmm0 = MEMF(esp + 0xC); /* movss */
    eax = MEM32(esp + 0x2C);
    ecx = (uint32_t)(int32_t)SMEM8(ebx + 1);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, ebx);
    edx = esp + 0x1C;
    PUSH32(esp, edx);
    MEMF(esp + 0x20) = xmm0; /* movss */
    xmm0 = MEMF(esi); /* movss */
    PUSH32(esp, eax);
    MEMF(esp + 0x28) = xmm0; /* movss */
    xmm0 = MEMF(esp + 0x20); /* movss */
    PUSH32(esp, ebp);
    MEMF(esp + 0x30) = xmm0; /* movss */
    PUSH32(esp, 0); RECOMP_ICALL_SAFE(MEM32(ecx * 4 + 0x595B34), _icall_esp); /* indirect call */
    }

loc_00106331: ;
    esp = esp + 0x10;
    MEM8(esp + 0xB) = LO8(eax);

loc_00106338: ;
    PUSH32(esp, 0); sub_0004A030(); /* call 0x0004A030 */

loc_0010633D: ;
    SET_LO8(eax, MEM8(esp + 0xB));
    POP32(esp, esi);
    POP32(esp, ebp);
    esp = esp + 0x1C;
    esp += 4; return; /* ret */

}

/**
 * sub_00106350
 * Original: 0x00106350 - 0x00106380 (48 bytes, 15 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00106350(void)
{
    float xmm0;

loc_00106350: ;
    PUSH32(esp, ebx);
    PUSH32(esp, esi);
    esi = MEM32(esp + 0xC);
    xmm0 = MEMF(esi + 0x170); /* movss */
    eax = esi + 0x88;
    PUSH32(esp, 0); sub_00106150(); /* call 0x00106150 */

loc_00106369: ;
    eax = MEM32(esp + 0x10);
    PUSH32(esp, eax);
    ebx = esi + 0x174;
    PUSH32(esp, esi);
    PUSH32(esp, 0); sub_00106220(); /* call 0x00106220 */

loc_0010637A: ;
    esp = esp + 8;
    POP32(esp, esi);
    POP32(esp, ebx);
    esp += 4; return; /* ret */

}

/**
 * sub_00106440
 * Original: 0x00106440 - 0x001064ED (173 bytes, 33 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00106440(void)
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

loc_00106440: ;
    eax = MEM32(esp + 4);
    ecx = MEM32(esp + 0xC);
    xmm0 = MEMF(eax + 0x6C); /* movss */
    xmm0 = xmm0 * MEMF(0x6496A8); /* mulss */
    xmm0 = xmm0 + MEMF(ecx + 4); /* addss */
    ecx = MEM32(esp + 0x10);
    xmm1 = MEMF(eax + 0x8C); /* movss */
    MEMF(eax + 0x74) = xmm0; /* movss */
    xmm0 = MEMF(eax + 0x88); /* movss */
    xmm0 = xmm0 * MEMF(ecx + 4); /* mulss */
    MEMF(eax + 0x88) = xmm0; /* movss */
    xmm1 = xmm1 * MEMF(ecx + 4); /* mulss */
    xmm0 = 0.0f; /* xorps self = zero */
    xmm2 = xmm0; /* movaps */
    xmm2 = xmm2 - xmm1; /* subss */
    xmm1 = MEMF(eax + 0x90); /* movss */
    MEMF(eax + 0x8C) = xmm2; /* movss */
    fp_push(MEMF(eax + 0x8C)); /* fld float */
    xmm1 = xmm1 * MEMF(ecx + 4); /* mulss */
    fp_top() = fabs(fp_top()); /* fabs */
    fp_push(MEMF(0x6496A4)); /* fld float */
    _fpu_cmp = (fp_top() < fp_st1()) ? -1 : (fp_top() > fp_st1()) ? 1 : 0; fp_pop(); /* fcompi */
    /* fstp st(0) */
    MEMF(eax + 0x90) = xmm1; /* movss */
    if ((_fpu_cmp <= 0) /* fcompi */) goto loc_001064EA; /* jbe: below or equal (unsigned <=) */

loc_001064C0: ;
    MEMF(eax + 0x88) = xmm0; /* movss */
    MEMF(eax + 0x8C) = xmm0; /* movss */
    MEMF(eax + 0x90) = xmm0; /* movss */
    MEMF(eax + 0x94) = xmm0; /* movss */
    MEM8(ecx) = MEM8(ecx) & 0xFE;
    MEM32(eax + 0x98) = MEM32(eax + 0x98) & 0xFFFFFFF9u;

loc_001064EA: ;
    SET_LO8(eax, 1);
    esp += 4; return; /* ret */

    #undef fp_push
    #undef fp_pop
    #undef fp_popp
    #undef fp_top
    #undef fp_st1
}

/**
 * sub_001064F0
 * Original: 0x001064F0 - 0x00106517 (39 bytes, 10 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_001064F0(void)
{
    uint32_t ebp;
    int _flags = 0; /* fallback flag var */
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_001064F0: ;
    ecx = MEM32(esp + 4);
    eax = MEM32(ecx + 0x98);
    if (TEST_Z(HI8(eax), 0x40)) { sub_00106517(); return; } /* je: equal / zero */

loc_001064FF: ;
    eax = ZX8(MEM8(ecx + 0xA3));
    eax = MEM32(eax * 4 + 0x595B38);
    if (TEST_Z(eax, eax)) { sub_00106517(); return; } /* je: equal / zero */

loc_00106511: ;
    MEM32(esp + 4) = ecx;
    g_seh_ebp = ebp; RECOMP_ITAIL(eax); return; /* indirect tail jmp */

}

/**
 * sub_00106520
 * Original: 0x00106520 - 0x0010655C (60 bytes, 25 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00106520(void)
{
    uint32_t ebp;
    int _flags = 0; /* fallback flag var */
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_00106520: ;
    SET_LO8(edx, MEM8(0x7FA20C));
    PUSH32(esp, ebx);
    SET_LO8(ebx, MEM8(ecx));
    PUSH32(esp, esi);
    esi = eax;
    SET_LO8(eax, MEM8(esi));
    { int64_t _r = (int64_t)(int32_t)eax * (int64_t)(int32_t)LO8(edx);
      eax = (uint32_t)_r; edx = (uint32_t)(_r >> 32); }
    SET_LO8(ebx, LO8(ebx) + LO8(eax));
    MEM8(ecx) = LO8(ebx);
    SET_LO8(eax, MEM8(esi + 1));
    { int64_t _r = (int64_t)(int32_t)eax * (int64_t)(int32_t)LO8(edx);
      eax = (uint32_t)_r; edx = (uint32_t)(_r >> 32); }
    SET_LO8(edx, MEM8(ecx + 1));
    SET_LO8(edx, LO8(edx) + LO8(eax));
    eax = 0; /* xor self */
    SET_LO8(eax, LO8(ebx));
    SET_LO8(eax, LO8(eax) - 0x40);
    MEM8(ecx + 1) = LO8(edx);
    SET_LO8(edx, LO8(eax));
    SET_LO8(edx, LO8(edx) & 0xC0);
    if (TEST_Z(LO8(eax), 0x40)) { sub_0010655C(); return; } /* je: equal / zero */

loc_00106550: ;
    eax = eax & 0x3F;
    esi = 0x40;
    esi = esi - eax;
    g_seh_ebp = ebp; sub_00106561(); return; /* tail jmp 0x00106561 */

}

/**
 * sub_00106600
 * Original: 0x00106600 - 0x00106629 (41 bytes, 16 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00106600(void)
{

loc_00106600: ;
    eax = MEM32(esp + 4);
    ecx = eax + 0x170;
    edx = eax + 0x6C;
    PUSH32(esp, edi);
    eax = eax + 0x68;
    PUSH32(esp, edx);
    PUSH32(esp, eax);
    eax = MEM32(ecx + 4);
    PUSH32(esp, eax);
    edi = ecx + 8;
    eax = ecx + 2;
    PUSH32(esp, 0); sub_00106520(); /* call 0x00106520 */

loc_00106622: ;
    esp = esp + 0xC;
    SET_LO8(eax, 1);
    POP32(esp, edi);
    esp += 4; return; /* ret */

}

/**
 * sub_00106630
 * Original: 0x00106630 - 0x0010668E (94 bytes, 21 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00106630(void)
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

loc_00106630: ;
    PUSH32(esp, esi);
    esi = MEM32(esp + 8);
    fp_push(MEMF(esi + 0x170)); /* fld float */
    fp_top() = sqrt(fp_top()); /* fsqrt */
    fp_st1() *= fp_top(); fp_pop(); /* fmul */
    MEMF(esi + 0x6C) = (float)fp_top(); fp_pop(); /* fst */
    MEMF(esi + 0x68) = (float)fp_top(); fp_popp(); /* fstp */
    fp_push(MEMF(esi + 0x180)); /* fld float */
    fp_st1() *= fp_top(); fp_pop(); /* fmul */
    fp_st1() *= fp_top(); fp_pop(); /* fmul */
    /* FPU: fsubr dword ptr [esi + 0x17c] */
    PUSH32(esp, 0); sub_00471288(); /* call 0x00471288 */

loc_00106666: ;
    MEM8(esi + 0x3B) = LO8(eax);
    xmm0 = MEMF(esi + 0x170); /* movss */
    xmm0 = xmm0 + MEMF(0x7FA24C); /* addss */
    /* comiss xmm0, MEMF(esi + 0x174) - sets EFLAGS */
    MEMF(esi + 0x170) = xmm0; /* movss */
    POP32(esp, esi);
    if ((xmm0 <= MEMF(esi + 0x174))) { sub_0010668E(); return; } /* jbe: below or equal (unsigned <=) */

loc_0010668B: ;
    SET_LO8(eax, 0); /* xor self */
    esp += 4; return; /* ret */

    #undef fp_push
    #undef fp_pop
    #undef fp_popp
    #undef fp_top
    #undef fp_st1
}

/**
 * sub_001066A0
 * Original: 0x001066A0 - 0x001066E9 (73 bytes, 15 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_001066A0(void)
{
    float xmm0;
    double _fp_stack[8];
    int _fp_top = 0;
    #define fp_push(v) (_fp_stack[--_fp_top & 7] = (v))
    #define fp_pop() (_fp_top++)
    #define fp_popp() (fp_pop())
    #define fp_top() _fp_stack[_fp_top & 7]
    #define fp_st1() _fp_stack[(_fp_top + 1) & 7]

loc_001066A0: ;
    eax = MEM32(esp + 4);
    xmm0 = MEMF(eax + 0x174); /* movss */
    xmm0 = xmm0 + MEMF(0x7FA21C); /* addss */
    MEMF(esp + 4) = xmm0; /* movss */
    fp_push(MEMF(esp + 4)); /* fld float */
    MEMF(eax + 0x174) = xmm0; /* movss */
    fp_st1() /= fp_top(); fp_pop(); /* fdiv */
    fp_st1() *= fp_top(); fp_pop(); /* fmul */
    /* FPU: fsin  */
    fp_st1() *= fp_top(); fp_pop(); /* fmul */
    fp_st1() *= fp_top(); fp_pop(); /* fmul */
    MEMF(eax + 0x6C) = (float)fp_top(); fp_pop(); /* fst */
    MEMF(eax + 0x68) = (float)fp_top(); fp_popp(); /* fstp */
    SET_LO8(eax, 1);
    esp += 4; return; /* ret */

    #undef fp_push
    #undef fp_pop
    #undef fp_popp
    #undef fp_top
    #undef fp_st1
}

/**
 * sub_001066F0
 * Original: 0x001066F0 - 0x00106902 (530 bytes, 114 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_001066F0(void)
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

loc_001066F0: ;
    esp = esp - 0x90;
    xmm0 = 0.0f; /* xorps self = zero */
    PUSH32(esp, ebx);
    PUSH32(esp, ebp);
    PUSH32(esp, esi);
    MEMF(esp + 0xC) = xmm0; /* movss */
    xmm0 = MEMF(esp + 0xA0); /* movss */
    xmm0 = xmm0 * MEMF(0x64A0E8); /* mulss */
    esi = eax;
    eax = 2;
    MEM32(esp + 0x48) = 0x303;
    MEM32(esp + 0x30) = eax;
    MEM32(esp + 0x34) = eax;
    MEM32(esp + 0x38) = 0;
    MEM32(esp + 0x3C) = 4;
    MEM32(esp + 0x40) = 0;
    MEM32(esp + 0x44) = eax;
    MEMF(esp + 0x14) = xmm0; /* movss */
    PUSH32(esp, 0); sub_003E1D70(); /* call 0x003E1D70 */

loc_00106751: ;
    xmm5 = xmm0; /* movaps */
    xmm5 = xmm5 * MEMF(0x648CE0); /* mulss */
    xmm5 = xmm5 + MEMF(0x648D1C); /* addss */
    MEMF(esp + 0x10) = xmm5; /* movss */
    PUSH32(esp, 0); sub_003E1D70(); /* call 0x003E1D70 */

loc_0010676F: ;
    xmm0 = xmm0 * MEMF(0x648F38); /* mulss */
    xmm0 = xmm0 + MEMF(0x58BD48); /* addss */
    MEMF(esp + 0x18) = xmm0; /* movss */
    fp_push(MEMF(esp + 0x18)); /* fld float */
    xmm1 = xmm5; /* movaps */
    xmm1 = xmm1 * xmm5; /* mulss */
    xmm0 = xmm0 / xmm1; /* divss */
    MEMF(esp + 0x1C) = xmm0; /* movss */
    PUSH32(esp, 0); sub_00471288(); /* call 0x00471288 */

loc_0010679F: ;
    ecx = MEM32(esi + 4);
    edx = MEM32(esi + 8);
    xmm0 = 0.0f; /* xorps self = zero */
    xmm1 = MEMF(0x648D14); /* movss */
    MEM8(esp + 0x2F) = LO8(eax);
    eax = MEM32(esi);
    ebx = 0xFF;
    MEM32(esp + 0x64) = eax;
    eax = MEM32(0x595D14);
    MEM32(esp + 0x68) = ecx;
    ecx = MEM32(0x595D18);
    MEM32(esp + 0x6C) = edx;
    edx = MEM32(0x595D1C);
    esi = 1;
    MEM32(esp + 0x4C) = 0x69;
    MEMF(esp + 0x24) = xmm0; /* movss */
    MEMF(esp + 0x28) = xmm0; /* movss */
    MEM8(esp + 0x2C) = LO8(ebx);
    MEM8(esp + 0x2D) = LO8(ebx);
    MEM8(esp + 0x2E) = LO8(ebx);
    MEM32(esp + 0x70) = eax;
    MEM32(esp + 0x74) = ecx;
    MEM32(esp + 0x78) = edx;
    MEM16(esp + 0x50) = LO16(esi);
    MEM16(esp + 0x52) = LO16(ebx);
    MEM16(esp + 0x54) = LO16(esi);
    MEMF(esp + 0x58) = xmm1; /* movss */
    PUSH32(esp, 0); sub_003E2480(); /* call 0x003E2480 */

loc_00106823: ;
    ebp = eax;
    ebp = ebp & esi;
    ebp = ebp | 0x980;
    ebp = ebp << 1;
    PUSH32(esp, 0); sub_003E2480(); /* call 0x003E2480 */

loc_00106834: ;
    ecx = MEM32(0x595D18);
    edx = MEM32(0x595D1C);
    eax = eax & esi;
    ebp = ebp | eax;
    ebp = ebp << 6;
    SET_LO8(eax, LO8(eax) | 0xFF);
    MEM8(esp + 0x95) = LO8(eax);
    MEM8(esp + 0x96) = LO8(eax);
    eax = MEM32(0x595D14);
    MEM32(esp + 0x8C) = ebp;
    MEM8(esp + 0x94) = 0x27;
    MEM8(esp + 0x97) = 0;
    MEM32(esp + 0x90) = 0;
    MEM8(esp + 0x98) = LO8(ebx);
    MEM32(esp + 0x7C) = eax;
    MEM32(esp + 0x80) = ecx;
    eax = MEM32(esp + 0xA4);
    PUSH32(esp, eax);
    PUSH32(esp, 0x14);
    PUSH32(esp, 0);
    ecx = esp + 0x2C;
    PUSH32(esp, esi);
    PUSH32(esp, ecx);
    MEM32(esp + 0x98) = edx;
    MEM16(esp + 0x34) = 0x12C;
    MEMF(esp + 0x74) = xmm0; /* movss */
    MEMF(esp + 0x70) = xmm0; /* movss */
    MEMF(esp + 0x9C) = xmm0; /* movss */
    PUSH32(esp, 0); sub_00105450(); /* call 0x00105450 */

loc_001068CA: ;
    esp = esp + 0x14;
    (void)0; /* test eax, eax - flags set for next jcc */
    POP32(esp, esi);
    POP32(esp, ebp);
    POP32(esp, ebx);
    if (TEST_Z(eax, eax)) goto loc_001068FB; /* je: equal / zero */

loc_001068D4: ;
    ecx = MEM32(esp);
    edx = eax + 0x170;
    MEM32(edx) = ecx;
    ecx = MEM32(esp + 4);
    MEM32(edx + 4) = ecx;
    ecx = MEM32(esp + 8);
    MEM32(edx + 8) = ecx;
    ecx = MEM32(esp + 0xC);
    MEM32(edx + 0xC) = ecx;
    ecx = MEM32(esp + 0x10);
    MEM32(edx + 0x10) = ecx;

loc_001068FB: ;
    esp = esp + 0x90;
    esp += 4; return; /* ret */

    #undef fp_push
    #undef fp_pop
    #undef fp_popp
    #undef fp_top
    #undef fp_st1
}

/**
 * sub_00106910
 * Original: 0x00106910 - 0x0010696D (93 bytes, 24 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00106910(void)
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

loc_00106910: ;
    PUSH32(esp, esi);
    esi = MEM32(esp + 8);
    SET_LO16(eax, MEM16(esi + 0x2E));
    SET_LO16(ecx, LO16(eax));
    SET_LO16(ecx, LO16(ecx) - MEM16(esi + 0x2C));
    eax = SX16(LO16(eax));
    edx = SX16(LO16(ecx));
    xmm1 = (float)(int32_t)eax; /* cvtsi2ss */
    xmm0 = (float)(int32_t)edx; /* cvtsi2ss */
    xmm0 = xmm0 / xmm1; /* divss */
    xmm1 = MEMF(0x648F20); /* movss */
    /* comiss xmm0, xmm1 - sets EFLAGS */
    MEMF(esp + 8) = xmm0; /* movss */
    if ((xmm0 <= xmm1)) { sub_0010696D(); return; } /* jbe: below or equal (unsigned <=) */

loc_00106945: ;
    fp_push(MEMF(esp + 8)); /* fld float */
    fp_st1() -= fp_top(); fp_pop(); /* fsub */
    fp_st1() *= fp_top(); fp_pop(); /* fmul */
    /* FPU: fsubr dword ptr [0x648d14] */
    fp_st1() *= fp_top(); fp_pop(); /* fmul */
    PUSH32(esp, 0); sub_00471288(); /* call 0x00471288 */

loc_00106966: ;
    MEM8(esi + 0x3B) = LO8(eax);
    SET_LO8(eax, 1);
    POP32(esp, esi);
    esp += 4; return; /* ret */

    #undef fp_push
    #undef fp_pop
    #undef fp_popp
    #undef fp_top
    #undef fp_st1
}

/**
 * sub_00106990
 * Original: 0x00106990 - 0x001069E0 (80 bytes, 23 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00106990(void)
{
    int _flags = 0; /* fallback flag var */
    float xmm0, xmm1;

loc_00106990: ;
    esp = esp - 0x10;
    PUSH32(esp, esi);
    esi = MEM32(esp + 0x18);
    SET_LO16(eax, MEM16(esi + 0x2E));
    SET_LO16(ecx, LO16(eax));
    SET_LO16(ecx, LO16(ecx) - MEM16(esi + 0x2C));
    eax = SX16(LO16(eax));
    edx = SX16(LO16(ecx));
    xmm0 = (float)(int32_t)edx; /* cvtsi2ss */
    xmm1 = (float)(int32_t)eax; /* cvtsi2ss */
    xmm0 = xmm0 / xmm1; /* divss */
    /* comiss xmm0, MEMF(esi + 0x178) - sets EFLAGS */
    if ((xmm0 <= MEMF(esi + 0x178))) { sub_001069E0(); return; } /* jbe: below or equal (unsigned <=) */

loc_001069BE: ;
    SET_LO8(ecx, MEM8(esi + 0x173));
    MEM8(esi + 0x38) = LO8(ecx);
    SET_LO8(edx, MEM8(esi + 0x174));
    MEM8(esi + 0x39) = LO8(edx);
    SET_LO8(eax, MEM8(esi + 0x175));
    MEM8(esi + 0x3A) = LO8(eax);
    SET_LO8(eax, 1);
    POP32(esp, esi);
    esp = esp + 0x10;
    esp += 4; return; /* ret */

}

/**
 * sub_00106AB0
 * Original: 0x00106AB0 - 0x00106BA3 (243 bytes, 55 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00106AB0(void)
{
    uint32_t ebp;
    int _flags = 0; /* fallback flag var */
    float xmm0, xmm1, xmm2, xmm5, xmm6, xmm7;
    double _fp_stack[8];
    int _fp_top = 0;
    #define fp_push(v) (_fp_stack[--_fp_top & 7] = (v))
    #define fp_pop() (_fp_top++)
    #define fp_popp() (fp_pop())
    #define fp_top() _fp_stack[_fp_top & 7]
    #define fp_st1() _fp_stack[(_fp_top + 1) & 7]

loc_00106AB0: ;
    PUSH32(esp, ebp);
    ebp = esp;
    esp = esp & 0xFFFFFFF0u;
    esp = esp - 0x74;
    eax = MEM32(0x7FA20C);
    (void)0; /* test eax, eax - flags set for next jcc */
    xmm7 = MEMF(0x7FA21C); /* movss */
    xmm0 = MEMF(0x648D14); /* movss */
    PUSH32(esp, ebx);
    ebx = MEM32(ebp + 8);
    PUSH32(esp, esi);
    PUSH32(esp, edi);
    xmm5 = xmm7; /* movaps */
    xmm6 = xmm0; /* movaps */
    if (TEST_Z(eax, eax)) goto loc_00106AF3; /* je: equal / zero */

loc_00106ADE: ;
    xmm1 = MEMF(ebx + 0x184); /* movss */

loc_00106AE6: ;
    eax--;
    xmm2 = xmm1; /* movaps */
    xmm2 = xmm2 * xmm6; /* mulss */
    xmm6 = xmm2; /* movaps */
    if ((eax != 0)) goto loc_00106AE6; /* jne: not equal / not zero */

loc_00106AF3: ;
    xmm1 = 0.0f; /* xorps self = zero */
    /* comiss xmm1, MEMF(ebx + 0x188) - sets EFLAGS */
    esi = ebx + 0x88;
    eax = esi;
    edi = MEM32(eax);
    ecx = MEM32(eax + 4);
    edx = MEM32(eax + 8);
    MEM32(esp + 0x38) = ecx;
    MEM32(esp + 0x3C) = edx;
    if ((xmm1 < MEMF(ebx + 0x188))) { sub_00106BA3(); return; } /* jb: below (unsigned <) */

loc_00106B1B: ;
    PUSH32(esp, 0); sub_003E1D70(); /* call 0x003E1D70 */

loc_00106B20: ;
    xmm0 = xmm0 * MEMF(0x648D30); /* mulss */
    MEMF(esp + 0x10) = xmm0; /* movss */
    fp_push(MEMF(esp + 0x10)); /* fld float */
    /* FPU: fsincos  */
    MEMF(esp + 0x18) = (float)fp_top(); fp_popp(); /* fstp */
    MEMF(esp + 0x14) = (float)fp_top(); fp_popp(); /* fstp */
    PUSH32(esp, 0); sub_003E1D70(); /* call 0x003E1D70 */

loc_00106B41: ;
    xmm0 = xmm0 * MEMF(0x6490B8); /* mulss */
    xmm0 = xmm0 + MEMF(0x64908C); /* addss */
    xmm1 = MEMF(esp + 0x14); /* movss */
    xmm1 = xmm1 * xmm0; /* mulss */
    MEMF(ebx + 0x18C) = xmm1; /* movss */
    eax = MEM32(ebx + 0x94);
    xmm1 = MEMF(esp + 0x18); /* movss */
    xmm1 = xmm1 * xmm0; /* mulss */
    MEM32(ebx + 0x190) = eax;
    MEMF(ebx + 0x194) = xmm1; /* movss */
    PUSH32(esp, 0); sub_003E1D70(); /* call 0x003E1D70 */

loc_00106B86: ;
    xmm0 = xmm0 + MEMF(0x648D14); /* addss */
    xmm1 = 0.0f; /* xorps self = zero */
    MEMF(ebx + 0x188) = xmm0; /* movss */
    xmm0 = MEMF(0x648D14); /* movss */
    g_seh_ebp = ebp; sub_00106BB7(); return; /* tail jmp 0x00106BB7 */

    #undef fp_push
    #undef fp_pop
    #undef fp_popp
    #undef fp_top
    #undef fp_st1
}

/**
 * sub_00106EC0
 * Original: 0x00106EC0 - 0x00106EED (45 bytes, 20 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00106EC0(void)
{
    int _flags = 0; /* fallback flag var */

loc_00106EC0: ;
    esp = esp - 0x20;
    PUSH32(esp, ebx);
    ebx = MEM32(esp + 0x28);
    SET_LO8(eax, MEM8(ebx + 0x20));
    PUSH32(esp, esi);
    esi = 0; /* xor self */
    if (TEST_Z(LO8(eax), LO8(eax))) { sub_00106EED(); return; } /* je: equal / zero */

loc_00106ED2: ;
    eax = MEM32(ebx + 0x1C);
    (void)0; /* cmp eax, esi - flags set for next jcc */
    ecx = ebx + 0x1C;
    if (CMP_EQ(eax, esi)) goto loc_00106EE5; /* je: equal / zero */

loc_00106EDC: ;
    PUSH32(esp, 0); sub_001082B0(); /* call 0x001082B0 */

loc_00106EE1: ;
    if (TEST_NZ(LO8(eax), LO8(eax))) { sub_00106EED(); return; } /* jne: not equal / not zero */

loc_00106EE5: ;
    POP32(esp, esi);
    eax = 0; /* xor self */
    POP32(esp, ebx);
    esp = esp + 0x20;
    esp += 4; return; /* ret */

}

/**
 * sub_00107070
 * Original: 0x00107070 - 0x001070A2 (50 bytes, 18 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00107070(void)
{
    uint32_t ebp;
    int _flags = 0; /* fallback flag var */
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_00107070: ;
    PUSH32(esp, esi);
    esi = MEM32(esp + 8);
    eax = MEM32(esi + 0x70);
    if (TEST_Z(eax, eax)) goto loc_00107087; /* je: equal / zero */

loc_0010707C: ;
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, esi);
    PUSH32(esp, 0); RECOMP_ICALL_SAFE(MEM32(esi + 0x30), _icall_esp); /* indirect call */
    }

loc_00107080: ;
    esp = esp + 4;
    if (TEST_NZ(LO8(eax), LO8(eax))) { sub_001070A2(); return; } /* jne: not equal / not zero */

loc_00107087: ;
    PUSH32(esp, 0); sub_00107660(); /* call 0x00107660 */

loc_0010708C: ;
    SET_LO8(eax, MEM8(0x8472BD));
    if (TEST_NZ(LO8(eax), LO8(eax))) { sub_001070A2(); return; } /* jne: not equal / not zero */

loc_00107095: ;
    eax = esi;
    edx = 1;
    POP32(esp, esi);
    g_seh_ebp = ebp; sub_000DA5E0(); return; /* tail jmp 0x000DA5E0 */

}

/**
 * sub_001070B0
 * Original: 0x001070B0 - 0x0010733F (655 bytes, 151 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_001070B0(void)
{
    uint32_t ebp;
    int _flags = 0; /* fallback flag var */
    float xmm0, xmm1, xmm2;

loc_001070B0: ;
    PUSH32(esp, ebp);
    ebp = esp;
    esp = esp & 0xFFFFFFF0u;
    esp = esp - 0x64;
    eax = MEM32(0x84A13C);
    PUSH32(esp, ebx);
    PUSH32(esp, esi);
    esi = (uint32_t)(int32_t)SMEM16(ebp + 0xC);
    esi = (uint32_t)((int32_t)esi * (int32_t)0x2B0);
    PUSH32(esp, edi);
    edi = MEM32(esi + eax + 0x144);
    PUSH32(esp, 0x10);
    edx = esi + eax + 0x100;
    ecx = 0x88;
    PUSH32(esp, 0); sub_00536C00(); /* call 0x00536C00 */

loc_001070E5: ;
    eax = MEM32(0x84A13C);
    PUSH32(esp, 0x10);
    edx = esi + eax + 0xC0;
    ecx = 0x92;
    PUSH32(esp, 0); sub_00536C00(); /* call 0x00536C00 */

loc_001070FD: ;
    xmm1 = MEMF(0x648D10); /* movss */
    xmm0 = 0.0f; /* xorps self = zero */
    xmm2 = MEMF(0x648CE0); /* movss */
    MEMF(esp + 0x14) = xmm1; /* movss */
    xmm1 = MEMF(0x648D14); /* movss */
    edx = esp + 0x10;
    ecx = 0x9C;
    MEMF(esp + 0x10) = xmm0; /* movss */
    MEMF(esp + 0x18) = xmm1; /* movss */
    MEMF(esp + 0x1C) = xmm2; /* movss */
    PUSH32(esp, 0); sub_00536B00(); /* call 0x00536B00 */

loc_0010713E: ;
    esi = edi + 0x10;
    ecx = 0x10;
    edi = esp + 0x30;
    memcpy((void*)XBOX_PTR(edi), (void*)XBOX_PTR(esi), ecx * 4);
    esi += ecx * 4; edi += ecx * 4; ecx = 0; /* rep movsd */
    PUSH32(esp, 0x10);
    edx = esp + 0x34;
    ecx = 0xB0;
    MEMF(esp + 0x64) = xmm0; /* movss */
    MEMF(esp + 0x68) = xmm0; /* movss */
    MEMF(esp + 0x6C) = xmm0; /* movss */
    PUSH32(esp, 0); sub_00536C00(); /* call 0x00536C00 */

loc_0010716E: ;
    edx = esp + 0x20;
    ecx = 0x60;
    MEMF(esp + 0x20) = xmm0; /* movss */
    MEMF(esp + 0x24) = xmm0; /* movss */
    MEMF(esp + 0x28) = xmm0; /* movss */
    MEMF(esp + 0x2C) = xmm1; /* movss */
    PUSH32(esp, 0); sub_00536B00(); /* call 0x00536B00 */

loc_00107194: ;
    eax = MEM32(0x77182C);
    esi = 0x1B02;
    if (CMP_EQ(eax, esi)) goto loc_001071AE; /* je: equal / zero */

loc_001071A2: ;
    PUSH32(esp, esi);
    PUSH32(esp, 0); sub_00537840(); /* call 0x00537840 */

loc_001071A8: ;
    MEM32(0x77182C) = esi;

loc_001071AE: ;
    eax = MEM32(0x771828);
    ebx = 0; /* xor self */
    if (CMP_EQ(eax, ebx)) goto loc_001071C5; /* je: equal / zero */

loc_001071B9: ;
    PUSH32(esp, ebx);
    PUSH32(esp, 0); sub_00537070(); /* call 0x00537070 */

loc_001071BF: ;
    MEM32(0x771828) = ebx;

loc_001071C5: ;
    eax = MEM32(0x771824);
    edi = 1;
    if (CMP_EQ(eax, edi)) goto loc_001071EB; /* je: equal / zero */

loc_001071D3: ;
    edx = edi;
    ecx = 0x40304;
    PUSH32(esp, 0); sub_00537990(); /* call 0x00537990 */

loc_001071DF: ;
    MEM32(0x549AE4) = edi;
    MEM32(0x771824) = edi;

loc_001071EB: ;
    edx = edi;
    ecx = 0x40340;
    PUSH32(esp, 0); sub_00537990(); /* call 0x00537990 */

loc_001071F7: ;
    (void)0; /* cmp MEM32(0x771820), edi - flags set for next jcc */
    MEM32(0x549AEC) = edi;
    if (CMP_EQ(MEM32(0x771820), edi)) goto loc_0010721D; /* je: equal / zero */

loc_00107205: ;
    edx = edi;
    ecx = 0x40300;
    PUSH32(esp, 0); sub_00537990(); /* call 0x00537990 */

loc_00107211: ;
    MEM32(0x549AE8) = edi;
    MEM32(0x771820) = edi;

loc_0010721D: ;
    edx = 0x206;
    ecx = 0x4033C;
    PUSH32(esp, 0); sub_00537990(); /* call 0x00537990 */

loc_0010722C: ;
    (void)0; /* cmp MEM32(0x77181C), edi - flags set for next jcc */
    MEM32(0x549AE0) = 0x206;
    if (CMP_EQ(MEM32(0x77181C), edi)) goto loc_0010724A; /* je: equal / zero */

loc_0010723E: ;
    PUSH32(esp, edi);
    PUSH32(esp, 0); sub_00537190(); /* call 0x00537190 */

loc_00107244: ;
    MEM32(0x77181C) = edi;

loc_0010724A: ;
    eax = MEM32(0x771818);
    esi = 0x203;
    if (CMP_EQ(eax, esi)) goto loc_00107270; /* je: equal / zero */

loc_00107258: ;
    edx = esi;
    ecx = 0x40354;
    PUSH32(esp, 0); sub_00537990(); /* call 0x00537990 */

loc_00107264: ;
    MEM32(0x549ADC) = esi;
    MEM32(0x771818) = esi;

loc_00107270: ;
    if (CMP_EQ(MEM32(0x771814), ebx)) goto loc_00107290; /* je: equal / zero */

loc_00107278: ;
    edx = 0; /* xor self */
    ecx = 0x4035C;
    PUSH32(esp, 0); sub_00537990(); /* call 0x00537990 */

loc_00107284: ;
    MEM32(0x549AF8) = ebx;
    MEM32(0x771814) = ebx;

loc_00107290: ;
    if (CMP_EQ(MEM32(0x771810), ebx)) goto loc_001072AE; /* je: equal / zero */

loc_00107298: ;
    MEM32(0x5499F0) = MEM32(0x5499F0) | 0x1200;
    MEM32(0x549B90) = ebx;
    MEM32(0x771810) = ebx;

loc_001072AE: ;
    PUSH32(esp, ebx);
    esi = 0; /* xor self */
    PUSH32(esp, 0); sub_005379C0(); /* call 0x005379C0 */

loc_001072B6: ;
    edx = MEM32(0x5499F0);
    ecx = MEM32(0x7717E8);
    eax = 3;
    edx = edx | edi;
    (void)0; /* cmp ecx, edi - flags set for next jcc */
    MEM32(0x547330) = eax;
    MEM32(0x547334) = eax;
    MEM32(0x5499F0) = edx;
    eax = 0x800;
    if (CMP_EQ(ecx, edi)) goto loc_001072F8; /* je: equal / zero */

loc_001072E2: ;
    ecx = edx;
    ecx = ecx | eax;
    MEM32(0x5499F0) = ecx;
    MEM32(0x5473E0) = edi;
    MEM32(0x7717E8) = edi;

loc_001072F8: ;
    if (CMP_EQ(MEM32(0x7717A8), edi)) goto loc_00107312; /* je: equal / zero */

loc_00107300: ;
    MEM32(0x5499F0) = MEM32(0x5499F0) | eax;
    MEM32(0x5473F0) = edi;
    MEM32(0x7717A8) = edi;

loc_00107312: ;
    eax = MEM32(0x77180C);
    esi = 0x302;
    if (CMP_EQ(eax, esi)) goto loc_00107338; /* je: equal / zero */

loc_00107320: ;
    edx = esi;
    ecx = 0x40344;
    PUSH32(esp, 0); sub_00537990(); /* call 0x00537990 */

loc_0010732C: ;
    MEM32(0x549AF0) = esi;
    MEM32(0x77180C) = esi;

loc_00107338: ;
    POP32(esp, edi);
    POP32(esp, esi);
    POP32(esp, ebx);
    esp = ebp;
    POP32(esp, ebp);
    esp += 4; return; /* ret */

}

/**
 * sub_00107340
 * Original: 0x00107340 - 0x00107610 (720 bytes, 189 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00107340(void)
{
    int _flags = 0; /* fallback flag var */
    float xmm0;

loc_00107340: ;
    esp = esp - 0x1C;
    PUSH32(esp, ebx);
    ebx = MEM32(esp + 0x24);
    SET_LO8(eax, MEM8(ebx + 0x2C));
    if (TEST_NZ(LO8(eax), LO8(eax))) goto loc_0010760B; /* jne: not equal / not zero */

loc_00107353: ;
    eax = (uint32_t)(int32_t)SMEM16(esp + 0x28);
    eax = (uint32_t)((int32_t)eax * (int32_t)0x2B0);
    PUSH32(esp, esi);
    esi = MEM32(0x84A13C);
    PUSH32(esp, edi);
    eax = eax + esi + 0x148;
    edi = ebx + 0xA0;
    ecx = ebx + 0x8C;
    edx = ebx + 0x7C;
    PUSH32(esp, eax);
    PUSH32(esp, 0); sub_003E0DD0(); /* call 0x003E0DD0 */

loc_00107382: ;
    esp = esp + 4;
    if (TEST_Z(eax, eax)) goto loc_00107609; /* je: equal / zero */

loc_0010738D: ;
    eax = MEM32(0x8493BC);
    if (TEST_Z(eax, eax)) goto loc_00107465; /* je: equal / zero */

loc_0010739A: ;
    SET_LO8(edx, MEM8(eax + 0x84));
    (void)0; /* test LO8(edx), LO8(edx) - flags set for next jcc */
    SET_LO8(eax, (TEST_NZ(LO8(edx), LO8(edx))) ? 1 : 0); /* setne */
    if (TEST_Z(LO8(eax), LO8(eax))) goto loc_00107465; /* je: equal / zero */

loc_001073AD: ;
    eax = MEM32(0x6B88FC);
    (void)0; /* cmp MEM32(0x771760), eax - flags set for next jcc */
    esi = eax;
    if (CMP_EQ(MEM32(0x771760), eax)) goto loc_001073C8; /* je: equal / zero */

loc_001073BC: ;
    PUSH32(esp, eax);
    PUSH32(esp, 0); sub_00536930(); /* call 0x00536930 */

loc_001073C2: ;
    MEM32(0x771760) = esi;

loc_001073C8: ;
    eax = MEM32(0x6B8CC4);
    (void)0; /* cmp MEM32(0x77175C), eax - flags set for next jcc */
    esi = eax;
    if (CMP_EQ(MEM32(0x77175C), eax)) goto loc_001073E2; /* je: equal / zero */

loc_001073D7: ;
    PUSH32(esp, 0); sub_00538690(); /* call 0x00538690 */

loc_001073DC: ;
    MEM32(0x77175C) = esi;

loc_001073E2: ;
    xmm0 = MEMF(0x648E14); /* movss */
    MEMF(esp + 0xC) = xmm0; /* movss */
    xmm0 = MEMF(0x648D80); /* movss */
    ecx = esp + 0xC;
    MEMF(esp + 0x10) = xmm0; /* movss */
    xmm0 = MEMF(0x648EF8); /* movss */
    PUSH32(esp, ecx);
    MEMF(esp + 0x18) = xmm0; /* movss */
    PUSH32(esp, 0); sub_001306C0(); /* call 0x001306C0 */

loc_00107416: ;
    xmm0 = MEMF(0x648EAC); /* movss */
    esp = esp + 4;
    edx = esp + 0x18;
    MEMF(esp + 0x18) = xmm0; /* movss */
    MEMF(esp + 0x1C) = xmm0; /* movss */
    MEMF(esp + 0x20) = xmm0; /* movss */
    xmm0 = MEMF(0x648D14); /* movss */
    PUSH32(esp, edx);
    eax = 1;
    ecx = 0; /* xor self */
    MEMF(esp + 0x28) = xmm0; /* movss */
    PUSH32(esp, 0); sub_005388A0(); /* call 0x005388A0 */

loc_00107452: ;
    eax = MEM32(ebx + 0x40);
    PUSH32(esp, 0);
    ecx = 0; /* xor self */
    PUSH32(esp, 0); sub_000761F0(); /* call 0x000761F0 */

loc_0010745E: ;
    esi = 1;
    goto loc_001074A8;

loc_00107465: ;
    eax = MEM32(0x6B88C4);
    (void)0; /* cmp MEM32(0x771760), eax - flags set for next jcc */
    esi = eax;
    if (CMP_EQ(MEM32(0x771760), eax)) goto loc_00107480; /* je: equal / zero */

loc_00107474: ;
    PUSH32(esp, eax);
    PUSH32(esp, 0); sub_00536930(); /* call 0x00536930 */

loc_0010747A: ;
    MEM32(0x771760) = esi;

loc_00107480: ;
    eax = MEM32(0x77175C);
    if (TEST_Z(eax, eax)) goto loc_0010749A; /* je: equal / zero */

loc_00107489: ;
    eax = 0; /* xor self */
    PUSH32(esp, 0); sub_00538690(); /* call 0x00538690 */

loc_00107490: ;
    MEM32(0x77175C) = 0;

loc_0010749A: ;
    eax = MEM32(ebx + 0x40);
    PUSH32(esp, 0);
    ecx = 0; /* xor self */
    PUSH32(esp, 0); sub_000761F0(); /* call 0x000761F0 */

loc_001074A6: ;
    esi = 0; /* xor self */

loc_001074A8: ;
    edi = eax;
    esp = esp + 4;
    PUSH32(esp, 0); sub_000DB460(); /* call 0x000DB460 */

loc_001074B2: ;
    esi = MEM32(ebx + 0x64);
    if (CMP_EQ(esi, MEM32(0x771808))) goto loc_001074D5; /* je: equal / zero */

loc_001074BD: ;
    edx = esi;
    ecx = 0x40348;
    PUSH32(esp, 0); sub_00537990(); /* call 0x00537990 */

loc_001074C9: ;
    MEM32(0x549AF4) = esi;
    MEM32(0x771808) = esi;

loc_001074D5: ;
    eax = MEM32(ebx + 0x44);
    (void)0; /* cmp eax, MEM32(0x7717E4) - flags set for next jcc */
    ecx = 0x800;
    if (CMP_EQ(eax, MEM32(0x7717E4))) goto loc_001074F5; /* je: equal / zero */

loc_001074E5: ;
    MEM32(0x5499F0) = MEM32(0x5499F0) | ecx;
    MEM32(0x547360) = eax;
    MEM32(0x7717E4) = eax;

loc_001074F5: ;
    eax = MEM32(ebx + 0x4C);
    if (CMP_EQ(eax, MEM32(0x7717C4))) goto loc_00107510; /* je: equal / zero */

loc_00107500: ;
    MEM32(0x5499F0) = MEM32(0x5499F0) | ecx;
    MEM32(0x547368) = eax;
    MEM32(0x7717C4) = eax;

loc_00107510: ;
    eax = MEM32(ebx + 0x50);
    if (CMP_EQ(eax, MEM32(0x7717B4))) goto loc_0010752B; /* je: equal / zero */

loc_0010751B: ;
    MEM32(0x5499F0) = MEM32(0x5499F0) | ecx;
    MEM32(0x54736C) = eax;
    MEM32(0x7717B4) = eax;

loc_0010752B: ;
    eax = MEM32(ebx + 0x54);
    if (CMP_EQ(eax, MEM32(0x7717A4))) goto loc_00107546; /* je: equal / zero */

loc_00107536: ;
    MEM32(0x5499F0) = MEM32(0x5499F0) | ecx;
    MEM32(0x547370) = eax;
    MEM32(0x7717A4) = eax;

loc_00107546: ;
    eax = MEM32(ebx + 0x5C);
    if (CMP_EQ(eax, MEM32(0x771784))) goto loc_00107561; /* je: equal / zero */

loc_00107551: ;
    MEM32(0x5499F0) = MEM32(0x5499F0) | ecx;
    MEM32(0x547378) = eax;
    MEM32(0x771784) = eax;

loc_00107561: ;
    eax = MEM32(ebx + 0x60);
    if (CMP_EQ(eax, MEM32(0x771774))) goto loc_0010757C; /* je: equal / zero */

loc_0010756C: ;
    MEM32(0x5499F0) = MEM32(0x5499F0) | ecx;
    MEM32(0x54737C) = eax;
    MEM32(0x771774) = eax;

loc_0010757C: ;
    eax = MEM32(ebx + 0x68);
    PUSH32(esp, 0);
    PUSH32(esp, eax);
    PUSH32(esp, 0); sub_000DB6F0(); /* call 0x000DB6F0 */

loc_00107587: ;
    eax = MEM32(ebx + 0x6C);
    esi = MEM32(ebx + 0x70);
    esp = esp + 8;
    if (TEST_NZ(eax, eax)) goto loc_001075A4; /* jne: not equal / not zero */

loc_00107594: ;
    ecx = MEM32(ebx + 0x9C);
    PUSH32(esp, ecx);
    eax = esi * 4;
    goto loc_001075F6;

loc_001075A4: ;
    edx = MEM32(ebx + 0x6C);
    eax = MEM32(ebx + 0x9C);
    ecx = edx + edx * 2;
    ecx = ecx << 5;
    ecx = ecx + eax;
    eax = esi;
    eax = eax - edx;
    if (((int32_t)eax >= 0)) goto loc_001075BF; /* jns: not sign (positive) */

loc_001075BB: ;
    eax = 0; /* xor self */
    goto loc_001075C5;

loc_001075BF: ;
    if (CMP_LE(eax, esi)) goto loc_001075C5; /* jle: less or equal (signed <=) */

loc_001075C3: ;
    eax = esi;

loc_001075C5: ;
    PUSH32(esp, ecx);
    PUSH32(esp, 4);
    PUSH32(esp, 8);
    eax = eax << 2;
    PUSH32(esp, 0x18);
    PUSH32(esp, 0); sub_001121E0(); /* call 0x001121E0 */

loc_001075D4: ;
    eax = MEM32(ebx + 0x9C);
    ebx = MEM32(ebx + 0x6C);
    esp = esp + 0x10;
    if (CMP_GE(ebx & ebx, 0)) goto loc_001075E8; /* jge: greater or equal (signed >=) */

loc_001075E4: ;
    ebx = 0; /* xor self */
    goto loc_001075EE;

loc_001075E8: ;
    if (CMP_LE(ebx, esi)) goto loc_001075EE; /* jle: less or equal (signed <=) */

loc_001075EC: ;
    ebx = esi;

loc_001075EE: ;
    PUSH32(esp, eax);
    eax = ebx * 4;

loc_001075F6: ;
    PUSH32(esp, 4);
    PUSH32(esp, 8);
    PUSH32(esp, 0x18);
    PUSH32(esp, 0); sub_001121E0(); /* call 0x001121E0 */

loc_00107601: ;
    esp = esp + 0x10;
    PUSH32(esp, 0); sub_000DB8E0(); /* call 0x000DB8E0 */

loc_00107609: ;
    POP32(esp, edi);
    POP32(esp, esi);

loc_0010760B: ;
    POP32(esp, ebx);
    esp = esp + 0x1C;
    esp += 4; return; /* ret */

}

/**
 * sub_00107640
 * Original: 0x00107640 - 0x00107655 (21 bytes, 8 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00107640(void)
{

loc_00107640: ;
    PUSH32(esp, esi);
    esi = MEM32(esp + 8);
    PUSH32(esp, 0); sub_00107660(); /* call 0x00107660 */

loc_0010764A: ;
    PUSH32(esp, esi);
    PUSH32(esp, 0); sub_000DAE40(); /* call 0x000DAE40 */

loc_00107650: ;
    esp = esp + 4;
    POP32(esp, esi);
    esp += 4; return; /* ret */

}

/**
 * sub_00107660
 * Original: 0x00107660 - 0x001076AF (79 bytes, 27 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00107660(void)
{
    int _flags = 0; /* fallback flag var */

loc_00107660: ;
    eax = MEM32(esi + 0x9C);
    (void)0; /* test eax, eax - flags set for next jcc */
    PUSH32(esp, edi);
    edi = esi + 0x9C;
    if (TEST_Z(eax, eax)) goto loc_00107680; /* je: equal / zero */

loc_00107671: ;
    PUSH32(esp, edi);
    PUSH32(esp, 0); sub_002AF1C0(); /* call 0x002AF1C0 */

loc_00107677: ;
    esp = esp + 4;
    MEM32(edi) = 0;

loc_00107680: ;
    eax = MEM32(esi + 0x38);
    if (TEST_Z(eax, eax)) goto loc_0010768D; /* je: equal / zero */

loc_00107687: ;
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, esi);
    PUSH32(esp, 0); RECOMP_ICALL_SAFE(eax, _icall_esp); /* indirect call */
    }

loc_0010768A: ;
    esp = esp + 4;

loc_0010768D: ;
    SET_LO8(eax, MEM8(esi + 0x78));
    if (TEST_Z(LO8(eax), LO8(eax))) goto loc_001076AD; /* je: equal / zero */

loc_00107694: ;
    eax = MEM32(0x771CD4);
    eax = eax - MEM32(esi + 0x70);
    ecx = 0;
    SET_LO8(ecx, (((int32_t)eax < 0)) ? 1 : 0); /* sets */
    ecx--;
    ecx = ecx & eax;
    MEM32(0x771CD4) = ecx;

loc_001076AD: ;
    POP32(esp, edi);
    esp += 4; return; /* ret */

}

/**
 * sub_001076B0
 * Original: 0x001076B0 - 0x001076C1 (17 bytes, 6 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_001076B0(void)
{
    uint32_t ebp;
    int _flags = 0; /* fallback flag var */
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_001076B0: ;
    ecx = MEM32(esp + 4);
    eax = MEM32(ecx + 0x34);
    if (TEST_Z(eax, eax)) { sub_001076C1(); return; } /* je: equal / zero */

loc_001076BB: ;
    MEM32(esp + 4) = ecx;
    g_seh_ebp = ebp; RECOMP_ITAIL(eax); return; /* indirect tail jmp */

}

/**
 * sub_001076D0
 * Original: 0x001076D0 - 0x0010823C (2924 bytes, 669 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_001076D0(void)
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

loc_001076D0: ;
    esp = esp - 0x44;
    xmm0 = MEMF(0x7FA21C); /* movss */
    PUSH32(esp, ebx);
    PUSH32(esp, ebp);
    PUSH32(esp, esi);
    esi = MEM32(esp + 0x54);
    xmm1 = MEMF(esi + 0xC4); /* movss */
    eax = MEM32(esi + 0x70);
    xmm2 = MEMF(esi + 0xC0); /* movss */
    xmm1 = xmm1 * xmm0; /* mulss */
    MEMF(esp + 0x1C) = xmm1; /* movss */
    xmm1 = MEMF(esi + 0xBC); /* movss */
    ebx = 0; /* xor self */
    ecx = 0; /* xor self */
    (void)0; /* cmp eax, ebx - flags set for next jcc */
    xmm2 = xmm2 * xmm0; /* mulss */
    xmm1 = xmm1 * xmm0; /* mulss */
    PUSH32(esp, edi);
    MEMF(esp + 0x24) = xmm2; /* movss */
    MEMF(esp + 0x1C) = xmm1; /* movss */
    MEM32(esp + 0x14) = 0xFFFFFFFFu;
    MEM32(esp + 0x10) = ecx;
    MEM8(esp + 0x58) = LO8(ecx);
    MEM32(esp + 0x18) = ebx;
    if (CMP_LE(eax, ebx)) goto loc_00107B60; /* jle: less or equal (signed <=) */

loc_0010773C: ;
    ebp = 0; /* xor self */
    edi = 0x30;
    goto loc_00107750;

    /* nop */
    /* nop */

loc_00107750: ;
    eax = MEM32(esi + 0xC8);
    xmm3 = MEMF(eax + ebp + 0x10); /* movss */
    xmm1 = 0.0f; /* xorps self = zero */
    edx = eax + ebp;
    /* ucomiss xmm3, xmm1 - sets EFLAGS */
    /* lahf - load AH from flags (used in FPU compare idiom) */
    if (1 /* jnp after test - parity */) goto loc_00107B44; /* jnp: not parity */

loc_0010776F: ;
    xmm3 = xmm2; /* movaps */
    xmm3 = xmm3 + MEMF(edx + 0xC); /* addss */
    MEMF(edx + 0xC) = xmm3; /* movss */
    edx = MEM32(esi + 0xC8);
    eax = ZX8(MEM8(esi + 0x3C));
    ebx = (int32_t)MEMF(edx + ebp + 0xC); /* cvttss2si */
    edx = edx + ebp;
    if (CMP_GE(ebx, eax)) goto loc_00107AE6; /* jge: greater or equal (signed >=) */

loc_00107796: ;
    xmm3 = MEMF(edx + 0x14); /* movss */
    /* ucomiss xmm3, xmm1 - sets EFLAGS */
    /* lahf - load AH from flags (used in FPU compare idiom) */
    if (1 /* jnp after test - parity */) goto loc_00107AE6; /* jnp: not parity */

loc_001077A8: ;
    eax = MEM32(esi + 0x9C);
    eax = eax + edi + -44;
    xmm2 = xmm0; /* movaps */
    xmm2 = xmm2 * MEMF(edx); /* mulss */
    edx = (uint32_t)(int32_t)SMEM16(eax);
    xmm3 = (float)(int32_t)edx; /* cvtsi2ss */
    xmm2 = xmm2 + xmm3; /* addss */
    edx = (int32_t)xmm2; /* cvttss2si */
    MEM16(eax) = LO16(edx);
    eax = MEM32(esi + 0x9C);
    edx = MEM32(esi + 0xC8);
    xmm2 = MEMF(edx + ebp + 4); /* movss */
    edx = (uint32_t)(int32_t)SMEM16(eax + edi + -42);
    eax = eax + edi + -42;
    xmm3 = (float)(int32_t)edx; /* cvtsi2ss */
    xmm2 = xmm2 * xmm0; /* mulss */
    xmm2 = xmm2 + xmm3; /* addss */
    edx = (int32_t)xmm2; /* cvttss2si */
    MEM16(eax) = LO16(edx);
    eax = MEM32(esi + 0x9C);
    edx = MEM32(esi + 0xC8);
    xmm2 = MEMF(edx + ebp + 8); /* movss */
    edx = (uint32_t)(int32_t)SMEM16(eax + edi + -40);
    eax = eax + edi + -40;
    xmm2 = xmm2 * xmm0; /* mulss */
    xmm0 = (float)(int32_t)edx; /* cvtsi2ss */
    xmm2 = xmm2 + xmm0; /* addss */
    edx = (int32_t)xmm2; /* cvttss2si */
    MEM16(eax) = LO16(edx);
    eax = MEM32(esi + 0x9C);
    SET_LO16(edx, MEM16(edi + eax + -44));
    MEM16(edi + eax + 0x1C) = LO16(edx);
    eax = MEM32(esi + 0x9C);
    SET_LO16(edx, MEM16(edi + eax + 0x1C));
    MEM16(edi + eax + 4) = LO16(edx);
    eax = MEM32(esi + 0x9C);
    SET_LO16(edx, MEM16(edi + eax + 4));
    MEM16(edi + eax + -20) = LO16(edx);
    eax = MEM32(esi + 0x9C);
    SET_LO16(edx, MEM16(edi + eax + -42));
    MEM16(edi + eax + 0x1E) = LO16(edx);
    eax = MEM32(esi + 0x9C);
    SET_LO16(edx, MEM16(edi + eax + 0x1E));
    MEM16(edi + eax + 6) = LO16(edx);
    eax = MEM32(esi + 0x9C);
    SET_LO16(edx, MEM16(edi + eax + 6));
    MEM16(edi + eax + -18) = LO16(edx);
    eax = MEM32(esi + 0x9C);
    SET_LO16(edx, MEM16(edi + eax + -40));
    MEM16(edi + eax + 0x20) = LO16(edx);
    eax = MEM32(esi + 0x9C);
    SET_LO16(edx, MEM16(edi + eax + 0x20));
    MEM16(edi + eax + 8) = LO16(edx);
    eax = MEM32(esi + 0x9C);
    SET_LO16(edx, MEM16(edi + eax + 8));
    MEM16(edi + eax + -16) = LO16(edx);
    if (CMP_EQ(ebx, MEM32(esp + 0x14))) goto loc_001078DA; /* je: equal / zero */

loc_001078BD: ;
    eax = esp + 0x10;
    PUSH32(esp, eax);
    eax = MEM32(esi + 0x40);
    ecx = ebx;
    PUSH32(esp, 0); sub_000761F0(); /* call 0x000761F0 */

loc_001078CC: ;
    xmm1 = 0.0f; /* xorps self = zero */
    ecx = MEM32(esp + 0x14);
    esp = esp + 4;
    MEM32(esp + 0x14) = ebx;

loc_001078DA: ;
    if (TEST_Z(ecx, ecx)) goto loc_00107945; /* je: equal / zero */

loc_001078DE: ;
    edx = MEM32(esi + 0x9C);
    xmm0 = MEMF(ecx + 0x10); /* movss */
    eax = edx + edi + -32;
    edx = MEM32(ecx + 8);
    MEM32(eax) = edx;
    MEMF(eax + 4) = xmm0; /* movss */
    eax = MEM32(esi + 0x9C);
    edx = MEM32(ecx + 0xC);
    xmm0 = MEMF(ecx + 0x10); /* movss */
    MEM32(eax + edi + -8) = edx;
    MEMF(eax + edi + -4) = xmm0; /* movss */
    xmm0 = MEMF(ecx + 0x14); /* movss */
    edx = MEM32(ecx + 0xC);
    eax = eax + edi + -8;
    eax = MEM32(esi + 0x9C);
    eax = eax + edi + 0x10;
    MEM32(eax) = edx;
    MEMF(eax + 4) = xmm0; /* movss */
    eax = MEM32(esi + 0x9C);
    xmm0 = MEMF(ecx + 0x14); /* movss */
    ecx = MEM32(ecx + 8);
    eax = eax + edi + 0x28;
    MEM32(eax) = ecx;
    MEMF(eax + 4) = xmm0; /* movss */

loc_00107945: ;
    edx = MEM32(esi + 0xC8);
    xmm0 = MEMF(edx + ebp + 0x14); /* movss */
    xmm0 = xmm0 - MEMF(esp + 0x20); /* subss */
    eax = edx + ebp + 0x14;
    MEMF(eax) = xmm0; /* movss */
    eax = MEM32(esi + 0xC8);
    /* comiss xmm1, MEMF(eax + ebp + 0x14) - sets EFLAGS */
    eax = eax + ebp + 0x14;
    xmm0 = xmm1; /* movaps */
    if ((xmm1 > MEMF(eax + ebp + 0x14))) goto loc_00107977; /* ja: above (unsigned >) */

loc_00107973: ;
    xmm0 = MEMF(eax); /* movss */

loc_00107977: ;
    MEMF(eax) = xmm0; /* movss */
    ecx = MEM32(esi + 0xC8);
    fp_push(MEMF(ecx + ebp + 0x14)); /* fld float */
    PUSH32(esp, 0); sub_00471288(); /* call 0x00471288 */

loc_0010798A: ;
    edx = MEM32(esi + 0x9C);
    MEM8(edx + edi + -33) = 0;
    ecx = edx + edi + -36;
    ecx = MEM32(esi + 0x9C);
    ebx = MEM32(ecx + edi + -36);
    ecx = ecx + edi + -36;
    eax = ZX8(LO8(eax));
    eax = eax << 0x18;
    ebx = ebx | eax;
    MEM32(ecx) = ebx;
    edx = MEM32(esi + 0x9C);
    MEM8(edx + edi + -9) = 0;
    ecx = edx + edi + -12;
    ecx = MEM32(esi + 0x9C);
    edx = MEM32(ecx + edi + -12);
    edx = edx | eax;
    MEM32(ecx + edi + -12) = edx;
    edx = MEM32(esi + 0x9C);
    MEM8(edx + edi + 0xF) = 0;
    ecx = ecx + edi + -12;
    ecx = edx + edi + 0xC;
    ecx = MEM32(esi + 0x9C);
    ebx = MEM32(ecx + edi + 0xC);
    ecx = ecx + edi + 0xC;
    ebx = ebx | eax;
    MEM32(ecx) = ebx;
    edx = MEM32(esi + 0x9C);
    MEM8(edx + edi + 0x27) = 0;
    ecx = edx + edi + 0x24;
    ecx = MEM32(esi + 0x9C);
    edx = MEM32(ecx + edi + 0x24);
    edx = edx | eax;
    MEM32(ecx + edi + 0x24) = edx;
    edx = MEM32(esi + 0xC8);
    xmm0 = MEMF(edx + ebp + 0x10); /* movss */
    xmm0 = xmm0 + MEMF(esp + 0x1C); /* addss */
    MEMF(edx + ebp + 0x10) = xmm0; /* movss */
    ecx = ecx + edi + 0x24;
    eax = edx + ebp + 0x10;
    eax = MEM32(esi + 0xC8);
    ecx = (int32_t)MEMF(eax + ebp + 0x10); /* cvttss2si */
    edx = MEM32(esi + 0x9C);
    MEM16(edi + edx) = LO16(ecx);
    eax = MEM32(esi + 0x9C);
    SET_LO16(ecx, MEM16(edi + eax));
    MEM16(edi + eax + -22) = LO16(ecx);
    edx = MEM32(esi + 0x9C);
    SET_LO16(ecx, MEM16(edx + edi + -22));
    xmm0 = 0.0f; /* xorps self = zero */
    MEM16(edx + edi + -24) = LO16(ecx);
    eax = edx + edi + -24;
    eax = MEM32(esi + 0x9C);
    SET_LO16(edx, MEM16(edi + eax + -24));
    MEM16(edi + eax + -46) = LO16(edx);
    eax = MEM32(esi + 0xC8);
    xmm0 = xmm0 - MEMF(eax + ebp + 0x10); /* subss */
    edx = MEM32(esi + 0x9C);
    xmm2 = MEMF(esp + 0x24); /* movss */
    ecx = (int32_t)xmm0; /* cvttss2si */
    xmm0 = MEMF(0x7FA21C); /* movss */
    MEM16(edx + edi + 0x1A) = LO16(ecx);
    eax = MEM32(esi + 0x9C);
    SET_LO16(ecx, MEM16(eax + edi + 0x1A));
    eax = eax + edi + 0x18;
    MEM16(eax) = LO16(ecx);
    eax = MEM32(esi + 0x9C);
    SET_LO16(edx, MEM16(edi + eax + 0x18));
    MEM16(edi + eax + 2) = LO16(edx);
    eax = MEM32(esi + 0x9C);
    SET_LO16(ecx, MEM16(edi + eax + 2));
    MEM16(edi + eax + -48) = LO16(ecx);
    ecx = MEM32(esp + 0x10);
    MEM8(esp + 0x58) = 1;
    goto loc_00107B44;

loc_00107AE6: ;
    MEMF(edx + 0x10) = xmm1; /* movss */
    edx = MEM32(esi + 0x9C);
    eax = 0; /* xor self */
    MEM16(edx + edi + 0x1A) = LO16(eax);
    edx = MEM32(esi + 0x9C);
    MEM16(edi + edx + 0x18) = LO16(eax);
    edx = MEM32(esi + 0x9C);
    MEM16(edx + edi + 2) = LO16(eax);
    edx = MEM32(esi + 0x9C);
    MEM16(edi + edx) = LO16(eax);
    edx = MEM32(esi + 0x9C);
    MEM16(edx + edi + -22) = LO16(eax);
    edx = MEM32(esi + 0x9C);
    MEM16(edi + edx + -24) = LO16(eax);
    edx = MEM32(esi + 0x9C);
    MEM16(edx + edi + -46) = LO16(eax);
    edx = MEM32(esi + 0x9C);
    MEM16(edi + edx + -48) = LO16(eax);

loc_00107B44: ;
    eax = MEM32(esp + 0x18);
    edx = MEM32(esi + 0x70);
    eax++;
    edi = edi + 0x60;
    ebp = ebp + 0x1C;
    (void)0; /* cmp eax, edx - flags set for next jcc */
    MEM32(esp + 0x18) = eax;
    if (CMP_L(eax, edx)) goto loc_00107750; /* jl: less (signed <) */

loc_00107B5E: ;
    ebx = 0; /* xor self */

loc_00107B60: ;
    eax = MEM32(esi + 0xA8);
    if (CMP_NE(eax, ebx)) goto loc_00107B80; /* jne: not equal / not zero */

loc_00107B6A: ;
    SET_LO8(eax, MEM8(esp + 0x58));
    if (TEST_NZ(LO8(eax), LO8(eax))) goto loc_00108232; /* jne: not equal / not zero */

loc_00107B76: ;
    POP32(esp, edi);
    POP32(esp, esi);
    POP32(esp, ebp);
    SET_LO8(eax, 0); /* xor self */
    POP32(esp, ebx);
    esp = esp + 0x44;
    esp += 4; return; /* ret */

loc_00107B80: ;
    xmm1 = MEMF(esi + 0xAC); /* movss */
    edi = MEM32(esi + 0xB4);
    ecx = MEM32(esi + 0xA4);
    xmm1 = xmm1 * xmm0; /* mulss */
    xmm1 = xmm1 + MEMF(esi + 0xB0); /* addss */
    ebp = (int32_t)xmm1; /* cvttss2si */
    ebp = ebp - edi;
    ecx--;
    MEMF(esi + 0xB0) = xmm1; /* movss */
    MEM32(esp + 0x20) = ebp;
    if ((ecx == 0)) goto loc_00107BFB; /* je: equal / zero */

loc_00107BB5: ;
    ecx--;
    if ((ecx != 0)) goto loc_00107C5B; /* jne: not equal / not zero */

loc_00107BBC: ;
    edi = eax + 0x6C;
    eax = eax + 0x60;
    MEM32(esp + 0x1C) = eax;
    eax = esp + 0x30;
    MEM32(esp + 0x24) = edi;
    MEM32(esp + 0x58) = eax;
    ecx = MEM32(esp + 0x1C);
    xmm0 = MEMF(ecx); /* movss */
    xmm0 = MEMD(ecx + 4); /* movhps */
    edx = MEM32(esp + 0x24);
    xmm1 = MEMF(edx); /* movss */
    xmm1 = MEMD(edx + 4); /* movhps */
    /* subps: xmm0 -= xmm1 (packed 4xfloat) */
    eax = MEM32(esp + 0x58);
    MEMF(eax) = xmm0; /* movss */
    MEMD(eax + 4) = xmm0; /* movhps */
    goto loc_00107C3B;

loc_00107BFB: ;
    edi = eax + 0x84;
    eax = eax + 0x78;
    ecx = esp + 0x30;
    MEM32(esp + 0x24) = edi;
    MEM32(esp + 0x1C) = eax;
    MEM32(esp + 0x58) = ecx;
    ecx = MEM32(esp + 0x1C);
    xmm0 = MEMF(ecx); /* movss */
    xmm0 = MEMD(ecx + 4); /* movhps */
    edx = MEM32(esp + 0x24);
    xmm1 = MEMF(edx); /* movss */
    xmm1 = MEMD(edx + 4); /* movhps */
    /* subps: xmm0 -= xmm1 (packed 4xfloat) */
    eax = MEM32(esp + 0x58);
    MEMF(eax) = xmm0; /* movss */
    MEMD(eax + 4) = xmm0; /* movhps */

loc_00107C3B: ;
    xmm0 = MEMF(edi); /* movss */
    MEMF(esp + 0x48) = xmm0; /* movss */
    xmm0 = MEMF(edi + 4); /* movss */
    MEMF(esp + 0x4C) = xmm0; /* movss */
    xmm0 = MEMF(edi + 8); /* movss */
    MEMF(esp + 0x50) = xmm0; /* movss */

loc_00107C5B: ;
    eax = MEM32(esi + 0x40);
    edx = esp + 0x18;
    PUSH32(esp, edx);
    ecx = 0; /* xor self */
    MEM32(esp + 0x1C) = ebx;
    PUSH32(esp, 0); sub_000761F0(); /* call 0x000761F0 */

loc_00107C6E: ;
    edi = eax;
    esp = esp + 4;
    if (CMP_NE(edi, ebx)) goto loc_00107C87; /* jne: not equal / not zero */

loc_00107C77: ;
    PUSH32(esp, ebx);
    eax = 0; /* xor self */
    PUSH32(esp, 0); sub_00539960(); /* call 0x00539960 */

loc_00107C7F: ;
    MEM32(0x771764) = ebx;
    goto loc_00107CC2;

loc_00107C87: ;
    if (CMP_EQ(MEM32(0x771764), edi)) goto loc_00107CC2; /* je: equal / zero */

loc_00107C8F: ;
    eax = MEM32(edi + 4);
    if (CMP_A(eax, 4)) goto loc_00107CBC; /* ja: above (unsigned >) */

loc_00107C97: ;
    { uint32_t _jt = MEM32(eax * 4 + 0x10823C); /* switch: 5 entries, 5 targets */
    if (_jt == 0x00107C9Eu) goto loc_00107C9E;
    if (_jt == 0x00107CA4u) goto loc_00107CA4;
    if (_jt == 0x00107CA9u) goto loc_00107CA9;
    if (_jt == 0x00107CAFu) goto loc_00107CAF;
    if (_jt == 0x00107CBCu) goto loc_00107CBC;
    g_seh_ebp = ebp; RECOMP_ITAIL(_jt); return; }

loc_00107C9E: ;
    eax = MEM32(edi + 0x1C);
    PUSH32(esp, eax);
    goto loc_00107CB5;

loc_00107CA4: ;
    ecx = MEM32(edi + 0x1C);
    goto loc_00107CB4;

loc_00107CA9: ;
    edx = MEM32(edi + 0x1C);
    PUSH32(esp, edx);
    goto loc_00107CB5;

loc_00107CAF: ;
    eax = MEM32(edi + 0x1C);
    ecx = MEM32(eax);

loc_00107CB4: ;
    PUSH32(esp, ecx);

loc_00107CB5: ;
    eax = 0; /* xor self */
    PUSH32(esp, 0); sub_00539960(); /* call 0x00539960 */

loc_00107CBC: ;
    MEM32(0x771764) = edi;

loc_00107CC2: ;
    eax = MEM32(0x84A13C);
    xmm0 = MEMF(eax + 0x88); /* movss */
    xmm1 = MEMF(eax + 0x84); /* movss */
    xmm2 = MEMF(eax + 0x80); /* movss */
    eax = esp + 0x3C;
    ebx = eax;
    MEMF(esp + 0x3C) = xmm2; /* movss */
    MEMF(esp + 0x40) = xmm1; /* movss */
    MEMF(esp + 0x44) = xmm0; /* movss */
    PUSH32(esp, 0); sub_00428323(); /* call 0x00428323 */

loc_00107CFC: ;
    (void)0; /* test ebp, ebp - flags set for next jcc */
    eax = MEM32(esi + 0xB4);
    MEM32(esp + 0x10) = eax;
    MEM32(esp + 0x1C) = 0;
    if (CMP_LE(ebp & ebp, 0)) goto loc_00108220; /* jle: less or equal (signed <=) */

loc_00107D16: ;
    edx = esp + 0x30;
    MEM32(esp + 0x28) = edx;
    edi = edi;

loc_00107D20: ;
    ecx = MEM32(esi + 0x70);
    if (CMP_L(eax, ecx)) goto loc_00107D30; /* jl: less (signed <) */

loc_00107D27: ;
    edx = ((int32_t)eax < 0) ? 0xFFFFFFFF : 0; /* cdq */
    { int64_t _dividend = ((int64_t)(int32_t)edx << 32) | eax;
      eax = (uint32_t)((int32_t)(_dividend / (int32_t)ecx));
      edx = (uint32_t)((int32_t)(_dividend % (int32_t)ecx)); }
    MEM32(esp + 0x10) = edx;
    eax = edx;

loc_00107D30: ;
    edx = MEM32(esi + 0xC8);
    xmm0 = MEMF(0x648EEC); /* movss */
    ecx = eax * 4;
    eax = (uint32_t)((int32_t)eax * (int32_t)0x1C);
    MEMF(eax + edx + 0x14) = xmm0; /* movss */
    edi = MEM32(esi + 0x9C);
    edx = ecx + ecx * 2;
    xmm7 = 0.0f; /* xorps self = zero */
    edx = edx << 3;
    ebx = ecx + ecx * 2 + 3;
    MEM32(esp + 0x14) = edx;
    ebp = ebp | 0xFFFFFFFFu;
    MEM32(edi + edx + 0xC) = ebp;
    edx = MEM32(esi + 0x9C);
    edi = ecx + ecx * 2 + 6;
    ebx = ebx << 3;
    MEM32(edx + ebx + 0xC) = ebp;
    edx = MEM32(esi + 0x9C);
    edi = edi << 3;
    MEM32(edx + edi + 0xC) = ebp;
    ebp = ecx + ecx * 2 + 9;
    ecx = MEM32(esi + 0x9C);
    ebp = ebp << 3;
    MEM32(ecx + ebp + 0xC) = 0xFFFFFFFFu;
    edx = MEM32(esi + 0xC8);
    ecx = MEM32(esi + 0xB8);
    MEM32(eax + edx + 0x10) = ecx;
    MEM32(esp + 0x58) = eax;
    eax = MEM32(esi + 0x9C);
    xmm0 = xmm7; /* movaps */
    xmm0 = xmm0 - MEMF(esi + 0xB8); /* subss */
    edx = (int32_t)xmm0; /* cvttss2si */
    MEM16(eax + ebp + 2) = LO16(edx);
    ecx = MEM32(esi + 0x9C);
    SET_LO16(edx, MEM16(ecx + ebp + 2));
    MEM16(ecx + ebp) = LO16(edx);
    eax = ecx + ebp;
    eax = MEM32(esi + 0x9C);
    SET_LO16(ecx, MEM16(eax + ebp));
    MEM16(edi + eax + 2) = LO16(ecx);
    ecx = MEM32(esi + 0x9C);
    SET_LO16(edx, MEM16(edi + ecx + 2));
    eax = MEM32(esp + 0x14);
    MEM16(eax + ecx) = LO16(edx);
    edx = MEM32(esi + 0x9C);
    ecx = (int32_t)MEMF(esi + 0xB8); /* cvttss2si */
    MEM16(edi + edx) = LO16(ecx);
    ecx = MEM32(esi + 0x9C);
    SET_LO16(edx, MEM16(edi + ecx));
    MEM16(ebx + ecx + 2) = LO16(edx);
    ecx = MEM32(esi + 0x9C);
    SET_LO16(edx, MEM16(ecx + ebx + 2));
    xmm0 = (float)(int32_t)MEM32(esp + 0x20); /* cvtsi2ss */
    MEM16(ecx + ebx) = LO16(edx);
    ecx = ecx + ebx;
    ecx = MEM32(esi + 0x9C);
    SET_LO16(edx, MEM16(ebx + ecx));
    MEM16(eax + ecx + 2) = LO16(edx);
    ecx = MEM32(esp + 0x1C);
    edx = MEM32(esi + 0x9C);
    xmm2 = MEMF(esp + 0x34); /* movss */
    xmm3 = MEMF(esp + 0x38); /* movss */
    ecx++;
    xmm1 = (float)(int32_t)ecx; /* cvtsi2ss */
    xmm1 = xmm1 / xmm0; /* divss */
    xmm0 = MEMF(esp + 0x30); /* movss */
    MEM32(esp + 0x1C) = ecx;
    xmm0 = xmm0 * xmm1; /* mulss */
    xmm0 = xmm0 + MEMF(esp + 0x48); /* addss */
    ecx = (int32_t)xmm0; /* cvttss2si */
    MEM16(edx + ebp + 4) = LO16(ecx);
    ecx = MEM32(esi + 0x9C);
    SET_LO16(edx, MEM16(ecx + ebp + 4));
    MEM16(edi + ecx + 4) = LO16(edx);
    ecx = MEM32(esi + 0x9C);
    SET_LO16(edx, MEM16(edi + ecx + 4));
    xmm2 = xmm2 * xmm1; /* mulss */
    xmm2 = xmm2 + MEMF(esp + 0x4C); /* addss */
    xmm3 = xmm3 * xmm1; /* mulss */
    xmm3 = xmm3 + MEMF(esp + 0x50); /* addss */
    MEM16(ebx + ecx + 4) = LO16(edx);
    ecx = MEM32(esi + 0x9C);
    SET_LO16(edx, MEM16(ebx + ecx + 4));
    MEM16(eax + ecx + 4) = LO16(edx);
    edx = MEM32(esi + 0x9C);
    ecx = (int32_t)xmm2; /* cvttss2si */
    MEM16(edx + ebp + 6) = LO16(ecx);
    ecx = MEM32(esi + 0x9C);
    SET_LO16(edx, MEM16(ecx + ebp + 6));
    MEM16(edi + ecx + 6) = LO16(edx);
    ecx = MEM32(esi + 0x9C);
    SET_LO16(edx, MEM16(edi + ecx + 6));
    MEM16(ebx + ecx + 6) = LO16(edx);
    ecx = MEM32(esi + 0x9C);
    SET_LO16(edx, MEM16(ebx + ecx + 6));
    MEM16(eax + ecx + 6) = LO16(edx);
    edx = MEM32(esi + 0x9C);
    ecx = (int32_t)xmm3; /* cvttss2si */
    MEM16(edx + ebp + 8) = LO16(ecx);
    ecx = MEM32(esi + 0x9C);
    SET_LO16(edx, MEM16(ecx + ebp + 8));
    MEM16(edi + ecx + 8) = LO16(edx);
    ecx = MEM32(esi + 0x9C);
    SET_LO16(edx, MEM16(edi + ecx + 8));
    MEM16(ebx + ecx + 8) = LO16(edx);
    ecx = MEM32(esi + 0x9C);
    SET_LO16(edx, MEM16(ebx + ecx + 8));
    MEM16(eax + ecx + 8) = LO16(edx);
    xmm1 = MEMF(esi + 0x8C); /* movss */
    /* comiss xmm1, xmm0 - sets EFLAGS */
    if ((xmm1 <= xmm0)) goto loc_00107F55; /* jbe: below or equal (unsigned <=) */

loc_00107F53: ;
    goto loc_00107F58;

loc_00107F55: ;
    xmm1 = xmm0; /* movaps */

loc_00107F58: ;
    MEMF(esi + 0x8C) = xmm1; /* movss */
    xmm1 = MEMF(esi + 0x90); /* movss */
    /* comiss xmm1, xmm2 - sets EFLAGS */
    if ((xmm1 <= xmm2)) goto loc_00107F6F; /* jbe: below or equal (unsigned <=) */

loc_00107F6D: ;
    goto loc_00107F72;

loc_00107F6F: ;
    xmm1 = xmm2; /* movaps */

loc_00107F72: ;
    MEMF(esi + 0x90) = xmm1; /* movss */
    xmm1 = MEMF(esi + 0x94); /* movss */
    /* comiss xmm1, xmm3 - sets EFLAGS */
    if ((xmm1 <= xmm3)) goto loc_00107F89; /* jbe: below or equal (unsigned <=) */

loc_00107F87: ;
    goto loc_00107F8C;

loc_00107F89: ;
    xmm1 = xmm3; /* movaps */

loc_00107F8C: ;
    MEMF(esi + 0x94) = xmm1; /* movss */
    /* comiss xmm0, MEMF(esi + 0x7C) - sets EFLAGS */
    if ((xmm0 <= MEMF(esi + 0x7C))) goto loc_00107F9F; /* jbe: below or equal (unsigned <=) */

loc_00107F9A: ;
    xmm0 = MEMF(esi + 0x7C); /* movss */

loc_00107F9F: ;
    /* comiss xmm2, MEMF(esi + 0x80) - sets EFLAGS */
    MEMF(esi + 0x7C) = xmm0; /* movss */
    if ((xmm2 <= MEMF(esi + 0x80))) goto loc_00107FB5; /* jbe: below or equal (unsigned <=) */

loc_00107FAD: ;
    xmm2 = MEMF(esi + 0x80); /* movss */

loc_00107FB5: ;
    /* comiss xmm3, MEMF(esi + 0x84) - sets EFLAGS */
    MEMF(esi + 0x80) = xmm2; /* movss */
    if ((xmm3 <= MEMF(esi + 0x84))) goto loc_00107FCE; /* jbe: below or equal (unsigned <=) */

loc_00107FC6: ;
    xmm3 = MEMF(esi + 0x84); /* movss */

loc_00107FCE: ;
    xmm1 = MEMF(0x7FA21C); /* movss */
    /* ucomiss xmm1, xmm7 - sets EFLAGS */
    /* lahf - load AH from flags (used in FPU compare idiom) */
    (void)0; /* test HI8(eax), 0x44 - flags set for next jcc */
    MEMF(esi + 0x84) = xmm3; /* movss */
    if (1 /* jp after test - parity */) goto loc_00107FEC; /* jp: parity */

loc_00107FE7: ;
    xmm0 = xmm7; /* movaps */
    goto loc_00108000;

loc_00107FEC: ;
    xmm0 = MEMF(0x648D14); /* movss */
    xmm0 = xmm0 / xmm1; /* divss */
    xmm0 = xmm0 * MEMF(0x648D10); /* mulss */

loc_00108000: ;
    eax = MEM32(esi + 0xC8);
    eax = eax + MEM32(esp + 0x58);
    MEM32(esp + 0x24) = eax;
    MEMF(esp + 0x2C) = xmm0; /* movss */
    xmm0 = MEMF(esp + 0x2C); /* movss */
    /* shufps xmm0, xmm0, 0 */
    edx = MEM32(esp + 0x28);
    xmm1 = MEMF(edx); /* movss */
    xmm1 = MEMD(edx + 4); /* movhps */
    /* mulps: xmm0 *= xmm1 (packed 4xfloat) */
    eax = MEM32(esp + 0x24);
    MEMF(eax) = xmm0; /* movss */
    MEMD(eax + 4) = xmm0; /* movhps */
    PUSH32(esp, 0); sub_003E1D70(); /* call 0x003E1D70 */

loc_0010803E: ;
    ecx = MEM32(esi + 0xC8);
    edx = MEM32(esp + 0x58);
    xmm6 = xmm0; /* movaps */
    xmm0 = MEMF(edx + ecx); /* movss */
    xmm6 = xmm6 * MEMF(0x648EA8); /* mulss */
    xmm6 = xmm6 + MEMF(0x648E68); /* addss */
    eax = edx + ecx;
    xmm0 = xmm0 * xmm6; /* mulss */
    MEMF(eax) = xmm0; /* movss */
    PUSH32(esp, 0); sub_003E1D70(); /* call 0x003E1D70 */

loc_00108070: ;
    eax = MEM32(esi + 0xC8);
    ecx = MEM32(esp + 0x58);
    xmm5 = xmm0; /* movaps */
    xmm5 = xmm5 * MEMF(0x648EA8); /* mulss */
    xmm5 = xmm5 + MEMF(0x648E68); /* addss */
    eax = ecx + eax + 4;
    xmm5 = xmm5 * xmm6; /* mulss */
    xmm0 = xmm5; /* movaps */
    xmm0 = xmm0 * MEMF(eax); /* mulss */
    MEMF(eax) = xmm0; /* movss */
    PUSH32(esp, 0); sub_003E1D70(); /* call 0x003E1D70 */

loc_001080A5: ;
    edx = MEM32(esi + 0xC8);
    ecx = MEM32(esp + 0x58);
    xmm0 = xmm0 * MEMF(0x648EA8); /* mulss */
    xmm0 = xmm0 + MEMF(0x648E68); /* addss */
    eax = ecx + edx + 8;
    xmm0 = xmm0 * xmm5; /* mulss */
    xmm0 = xmm0 * MEMF(eax); /* mulss */
    MEMF(eax) = xmm0; /* movss */
    eax = MEM32(esi + 0xC8);
    MEMF(ecx + eax + 0xC) = xmm7; /* movss */
    edx = MEM32(esi + 0xC8);
    MEM8(ecx + edx + 0x18) = 0;
    PUSH32(esp, 0); sub_003E2480(); /* call 0x003E2480 */

loc_001080EB: ;
    if (TEST_Z(LO8(eax), 1)) goto loc_00108100; /* je: equal / zero */

loc_001080EF: ;
    eax = MEM32(esi + 0xC8);
    ecx = MEM32(esp + 0x58);
    eax = ecx + eax + 0x18;
    MEM8(eax) = MEM8(eax) | 1;

loc_00108100: ;
    PUSH32(esp, 0); sub_003E2480(); /* call 0x003E2480 */

loc_00108105: ;
    if (TEST_Z(LO8(eax), 1)) goto loc_00108120; /* je: equal / zero */

loc_00108109: ;
    edx = MEM32(esi + 0xC8);
    eax = MEM32(esp + 0x58);
    SET_LO8(ecx, MEM8(eax + edx + 0x18));
    eax = eax + edx + 0x18;
    SET_LO8(ecx, LO8(ecx) | 2);
    MEM8(eax) = LO8(ecx);

loc_00108120: ;
    eax = MEM32(esp + 0x18);
    if (TEST_Z(eax, eax)) goto loc_00108196; /* je: equal / zero */

loc_00108128: ;
    ecx = MEM32(esi + 0x9C);
    xmm0 = MEMF(eax + 0x10); /* movss */
    edx = MEM32(esp + 0x14);
    ecx = ecx + edx + 0x10;
    edx = MEM32(eax + 8);
    MEM32(ecx) = edx;
    MEMF(ecx + 4) = xmm0; /* movss */
    ecx = MEM32(esi + 0x9C);
    edx = MEM32(eax + 0xC);
    xmm0 = MEMF(eax + 0x10); /* movss */
    MEM32(ecx + ebx + 0x10) = edx;
    MEMF(ecx + ebx + 0x14) = xmm0; /* movss */
    edx = MEM32(eax + 0xC);
    xmm0 = MEMF(eax + 0x14); /* movss */
    ebx = ecx + ebx + 0x10;
    ecx = MEM32(esi + 0x9C);
    edi = ecx + edi + 0x10;
    MEM32(edi) = edx;
    MEMF(edi + 4) = xmm0; /* movss */
    ecx = MEM32(esi + 0x9C);
    edx = MEM32(eax + 8);
    xmm0 = MEMF(eax + 0x14); /* movss */
    ebp = ecx + ebp + 0x10;
    MEM32(ebp) = edx;
    MEMF(ebp + 4) = xmm0; /* movss */
    goto loc_001081F4;

loc_00108196: ;
    eax = MEM32(esi + 0x9C);
    ecx = MEM32(esp + 0x14);
    xmm0 = MEMF(0x648D14); /* movss */
    MEMF(eax + ecx + 0x10) = xmm7; /* movss */
    MEMF(eax + ecx + 0x14) = xmm7; /* movss */
    edx = MEM32(esi + 0x9C);
    eax = eax + ecx + 0x10;
    MEMF(edx + ebx + 0x10) = xmm0; /* movss */
    MEMF(edx + ebx + 0x14) = xmm7; /* movss */
    eax = MEM32(esi + 0x9C);
    ebx = edx + ebx + 0x10;
    edi = eax + edi + 0x10;
    MEMF(edi) = xmm0; /* movss */
    MEMF(edi + 4) = xmm0; /* movss */
    ecx = MEM32(esi + 0x9C);
    eax = ecx + ebp + 0x10;
    MEMF(eax) = xmm7; /* movss */
    MEMF(eax + 4) = xmm0; /* movss */

loc_001081F4: ;
    edi = MEM32(esi + 0xB4);
    eax = MEM32(esp + 0x1C);
    edx = MEM32(esp + 0x10);
    ecx = MEM32(esp + 0x20);
    edi++;
    edx++;
    MEM32(esp + 0x1C) = eax;
    (void)0; /* cmp eax, ecx - flags set for next jcc */
    MEM32(esi + 0xB4) = edi;
    MEM32(esp + 0x10) = edx;
    eax = edx;
    if (CMP_L(eax, ecx)) goto loc_00107D20; /* jl: less (signed <) */

loc_00108220: ;
    ecx = MEM32(esi + 0x70);
    eax++;
    (void)0; /* cmp eax, ecx - flags set for next jcc */
    MEM32(esi + 0x6C) = eax;
    if (CMP_NE(eax, ecx)) goto loc_00108232; /* jne: not equal / not zero */

loc_0010822B: ;
    MEM32(esi + 0x6C) = 0;

loc_00108232: ;
    POP32(esp, edi);
    POP32(esp, esi);
    POP32(esp, ebp);
    SET_LO8(eax, 1);
    POP32(esp, ebx);
    esp = esp + 0x44;
    esp += 4; return; /* ret */

    #undef fp_push
    #undef fp_pop
    #undef fp_popp
    #undef fp_top
    #undef fp_st1
}

/**
 * sub_001082B0
 * Original: 0x001082B0 - 0x001082E5 (53 bytes, 12 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_001082B0(void)
{
    int _flags = 0; /* fallback flag var */
    float xmm0, xmm1;

loc_001082B0: ;
    eax = MEM32(0x84A144);
    (void)0; /* test eax, eax - flags set for next jcc */
    xmm1 = MEMF(0x5A0060); /* movss */
    if (TEST_Z(eax, eax)) goto loc_001082C9; /* je: equal / zero */

loc_001082C1: ;
    xmm1 = MEMF(0x648EB8); /* movss */

loc_001082C9: ;
    xmm0 = (float)(int32_t)MEM32(0x771CD4); /* cvtsi2ss */
    xmm0 = xmm0 / xmm1; /* divss */
    xmm1 = MEMF(0x648D14); /* movss */
    /* comiss xmm0, xmm1 - sets EFLAGS */
    if ((xmm0 < xmm1)) { sub_001082E5(); return; } /* jb: below (unsigned <) */

loc_001082E2: ;
    SET_LO8(eax, 0); /* xor self */
    esp += 4; return; /* ret */

}

/**
 * sub_00108310
 * Original: 0x00108310 - 0x00108336 (38 bytes, 12 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00108310(void)
{
    int _flags = 0; /* fallback flag var */

loc_00108310: ;
    PUSH32(esp, esi);
    esi = MEM32(esp + 8);
    eax = MEM32(esi + 0xC8);
    esi = esi + 0xC8;
    if (TEST_Z(eax, eax)) goto loc_00108334; /* je: equal / zero */

loc_00108325: ;
    PUSH32(esp, esi);
    PUSH32(esp, 0); sub_002AF1C0(); /* call 0x002AF1C0 */

loc_0010832B: ;
    esp = esp + 4;
    MEM32(esi) = 0;

loc_00108334: ;
    POP32(esp, esi);
    esp += 4; return; /* ret */

}

/**
 * sub_00108340
 * Original: 0x00108340 - 0x00108883 (1347 bytes, 227 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00108340(void)
{
    uint32_t ebp;
    int _flags = 0; /* fallback flag var */
    float xmm0, xmm1;
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_00108340: ;
    esp = esp - 0x154;
    SET_LO8(edx, MEM8(esp + 0x158));
    xmm0 = 0.0f; /* xorps self = zero */
    PUSH32(esp, ebx);
    PUSH32(esp, esi);
    ebx = 0; /* xor self */
    esi = ZX8(LO8(edx));
    PUSH32(esp, edi);
    edi = 5;
    (void)0; /* cmp esi, edi - flags set for next jcc */
    MEMF(esp + 0x58) = xmm0; /* movss */
    MEM8(esp + 0x78) = LO8(ebx);
    MEM16(esp + 0x26) = LO16(ebx);
    MEM8(esp + 0x6C) = LO8(ebx);
    if (CMP_A(esi, edi)) goto loc_00108853; /* ja: above (unsigned >) */

loc_00108378: ;
    { uint32_t _jt = MEM32(esi * 4 + 0x1088C4); /* switch: 10 entries, 6 targets */
    if (_jt == 0x0010837Fu) goto loc_0010837F;
    if (_jt == 0x001087D7u) goto loc_001087D7;
    if (_jt == 0x00108841u) goto loc_00108841;
    if (_jt == 0x0010885Fu) goto loc_0010885F;
    if (_jt == 0x0010886Bu) goto loc_0010886B;
    if (_jt == 0x00108877u) goto loc_00108877;
    g_seh_ebp = ebp; RECOMP_ITAIL(_jt); return; }

loc_0010837F: ;
    if (CMP_EQ(LO8(edx), LO8(ebx))) goto loc_0010841E; /* je: equal / zero */

loc_00108387: ;
    if (CMP_NE(LO8(edx), 5)) goto loc_0010848E; /* jne: not equal / not zero */

loc_00108390: ;
    xmm0 = MEMF(0x649BF4); /* movss */
    MEMF(esp + 0x18) = xmm0; /* movss */
    xmm0 = MEMF(0x649BF0); /* movss */
    eax = MEM32(esp + 0x18);
    MEMF(esp + 0x1C) = xmm0; /* movss */
    xmm0 = MEMF(0x649BEC); /* movss */
    ecx = MEM32(esp + 0x1C);
    MEMF(esp + 0x20) = xmm0; /* movss */
    xmm0 = MEMF(0x649BE8); /* movss */
    edx = MEM32(esp + 0x20);
    MEMF(esp + 0x5C) = xmm0; /* movss */
    MEM32(esp + 0xC) = eax;
    xmm0 = MEMF(esp + 0xC); /* movss */
    xmm0 = xmm0 + MEMF(0x648D1C); /* addss */
    MEMF(esp + 0xC) = xmm0; /* movss */
    MEM32(esp + 0x10) = ecx;
    xmm0 = MEMF(esp + 0x10); /* movss */
    xmm0 = xmm0 + MEMF(0x64908C); /* addss */
    MEM32(esp + 0x14) = edx;
    MEMF(esp + 0x10) = xmm0; /* movss */
    xmm0 = MEMF(esp + 0x14); /* movss */
    xmm0 = xmm0 - MEMF(0x648CE4); /* subss */
    MEMF(esp + 0x14) = xmm0; /* movss */
    goto loc_0010848E;

loc_0010841E: ;
    MEMF(esp + 0x18) = xmm0; /* movss */
    xmm0 = MEMF(0x649BE4); /* movss */
    eax = MEM32(esp + 0x18);
    MEMF(esp + 0x1C) = xmm0; /* movss */
    xmm0 = MEMF(0x649BE0); /* movss */
    ecx = MEM32(esp + 0x1C);
    MEMF(esp + 0x20) = xmm0; /* movss */
    xmm0 = MEMF(0x649BDC); /* movss */
    edx = MEM32(esp + 0x20);
    MEM32(esp + 0x10) = ecx;
    xmm1 = MEMF(esp + 0x10); /* movss */
    MEMF(esp + 0x5C) = xmm0; /* movss */
    xmm0 = MEMF(0x64908C); /* movss */
    xmm1 = xmm1 + xmm0; /* addss */
    MEM32(esp + 0x14) = edx;
    MEMF(esp + 0x10) = xmm1; /* movss */
    xmm1 = MEMF(esp + 0x14); /* movss */
    xmm1 = xmm1 - xmm0; /* subss */
    MEM32(esp + 0xC) = eax;
    MEMF(esp + 0x14) = xmm1; /* movss */

loc_0010848E: ;
    PUSH32(esp, 0xFF);
    eax = esp + 0x10;
    PUSH32(esp, 0); sub_00146D70(); /* call 0x00146D70 */

loc_0010849C: ;
    xmm1 = MEMF(0x6490F4); /* movss */
    xmm0 = MEMF(esp + 0x20); /* movss */
    xmm0 = xmm0 + MEMF(0x648F08); /* addss */
    MEMF(esp + 0x3C) = xmm1; /* movss */
    xmm1 = MEMF(0x649BD8); /* movss */
    MEMF(esp + 0x44) = xmm1; /* movss */
    xmm1 = MEMF(0x648E68); /* movss */
    MEMF(esp + 0xE0) = xmm1; /* movss */
    xmm1 = MEMF(0x648F78); /* movss */
    MEMF(esp + 0xE8) = xmm1; /* movss */
    xmm1 = MEMF(0x649BD4); /* movss */
    MEMF(esp + 0x20) = xmm0; /* movss */
    xmm0 = MEMF(esp + 0x1C); /* movss */
    MEMF(esp + 0xF0) = xmm1; /* movss */
    xmm1 = MEMF(0x649BD0); /* movss */
    MEMF(esp + 0x4C) = xmm0; /* movss */
    xmm0 = MEMF(esp + 0x24); /* movss */
    MEMF(esp + 0xF4) = xmm1; /* movss */
    xmm1 = MEMF(0x648CE0); /* movss */
    MEMF(esp + 0x50) = xmm0; /* movss */
    xmm0 = MEMF(0x649BCC); /* movss */
    MEMF(esp + 0xF8) = xmm1; /* movss */
    xmm1 = MEMF(0x648CF0); /* movss */
    MEMF(esp + 0x54) = xmm0; /* movss */
    xmm0 = MEMF(0x649BC8); /* movss */
    MEMF(esp + 0xFC) = xmm1; /* movss */
    xmm1 = MEMF(0x648E2C); /* movss */
    MEMF(esp + 0x58) = xmm0; /* movss */
    xmm0 = MEMF(0x649240); /* movss */
    MEMF(esp + 0x100) = xmm1; /* movss */
    xmm1 = MEMF(0x649BC4); /* movss */
    MEMF(esp + 0x68) = xmm0; /* movss */
    xmm0 = MEMF(0x648D18); /* movss */
    eax = 2;
    MEMF(esp + 0x104) = xmm1; /* movss */
    xmm1 = MEMF(0x649BC0); /* movss */
    edx = 0xC;
    ecx = 1;
    MEMF(esp + 0x6C) = xmm0; /* movss */
    xmm0 = 0.0f; /* xorps self = zero */
    MEMF(esp + 0x110) = xmm1; /* movss */
    xmm1 = MEMF(0x649BBC); /* movss */
    esp = esp + 4;
    MEM8(esp + 0x2D) = 0x19;
    MEM16(esp + 0x24) = 0x4B;
    MEM16(esp + 0x15C) = 0x78;
    MEM8(esp + 0x60) = 0xFF;
    MEM8(esp + 0x61) = LO8(ebx);
    MEM16(esp + 0x6E) = LO16(edx);
    MEMF(esp + 0x70) = xmm0; /* movss */
    MEM8(esp + 0x74) = LO8(eax);
    MEM16(esp + 0x76) = LO16(eax);
    MEM8(esp + 0x3C) = LO8(ebx);
    MEM16(esp + 0x3E) = 0xA;
    MEM8(esp + 0x44) = LO8(ebx);
    MEM16(esp + 0x46) = LO16(edi);
    MEM16(esp + 0x26) = LO16(ecx);
    MEM32(esp + 0x7C) = 0x18;
    MEM32(esp + 0x84) = 8;
    MEM32(esp + 0x88) = ebx;
    MEM32(esp + 0x8C) = ebx;
    MEM32(esp + 0x90) = ebx;
    MEM32(esp + 0x94) = ebx;
    MEM32(esp + 0x98) = edi;
    MEM32(esp + 0x9C) = ebx;
    MEM8(esp + 0xA0) = LO8(ecx);
    MEMF(esp + 0xA4) = xmm0; /* movss */
    MEMF(esp + 0xA8) = xmm0; /* movss */
    MEMF(esp + 0xE0) = xmm0; /* movss */
    MEM16(esp + 0xE8) = 0xFFC1;
    MEM16(esp + 0xEA) = 0x2B;
    MEM16(esp + 0x104) = 0x56;
    MEM16(esp + 0x106) = LO16(eax);
    MEM16(esp + 0x108) = LO16(eax);
    MEM8(esp + 0x10A) = LO8(edx);
    MEMF(esp + 0x110) = xmm0; /* movss */
    MEMF(esp + 0x114) = xmm1; /* movss */
    MEM16(esp + 0x118) = 0xFFC2;
    xmm1 = MEMF(0x6494C4); /* movss */
    SET_LO8(edx, MEM8(esp + 0x164));
    MEMF(esp + 0x11C) = xmm1; /* movss */
    xmm1 = MEMF(0x649BB8); /* movss */
    MEMF(esp + 0x120) = xmm1; /* movss */
    xmm1 = MEMF(0x648EC8); /* movss */
    eax = 7;
    MEMF(esp + 0x130) = xmm1; /* movss */
    xmm1 = MEMF(0x648E38); /* movss */
    MEMF(esp + 0x144) = xmm0; /* movss */
    MEMF(esp + 0x148) = xmm0; /* movss */
    xmm0 = MEMF(0x648E5C); /* movss */
    MEM16(esp + 0x11A) = LO16(eax);
    MEM16(esp + 0x124) = 0x38;
    MEM16(esp + 0x126) = 0xFFC7;
    MEM16(esp + 0x128) = 0x15;
    MEM16(esp + 0x12A) = LO16(eax);
    MEM16(esp + 0x12C) = 3;
    MEM16(esp + 0x12E) = 0xC8;
    MEM32(esp + 0x134) = 0x58DAF4;
    MEM32(esp + 0x138) = ebx;
    MEM8(esp + 0x13C) = 0xFF;
    MEMF(esp + 0x140) = xmm1; /* movss */
    MEMF(esp + 0x14C) = xmm0; /* movss */
    MEMF(esp + 0x150) = xmm0; /* movss */

loc_001087A6: ;
    (void)0; /* cmp LO8(edx), LO8(ebx) - flags set for next jcc */
    MEM32(esp + 0x28) = edi;
    MEM32(esp + 0x158) = 0x1B8;
    MEM8(esp + 0x154) = LO8(ebx);
    if (CMP_EQ(LO8(edx), LO8(ebx))) { sub_00108883(); return; } /* je: equal / zero */

loc_001087C4: ;
    if (CMP_EQ(LO8(edx), 5)) { sub_00108883(); return; } /* je: equal / zero */

loc_001087CD: ;
    eax = 4;
    g_seh_ebp = ebp; sub_00108885(); return; /* tail jmp 0x00108885 */

loc_001087D7: ;
    eax = MEM32(0x84A5F8);
    ecx = 0; /* xor self */
    edi = edi;

loc_001087E0: ;
    if (CMP_EQ(MEM32(eax + 0x64), ebx)) goto loc_001087EE; /* je: equal / zero */

loc_001087E5: ;
    if (CMP_EQ(MEM8(eax + 0x10B), 6)) goto loc_00108808; /* je: equal / zero */

loc_001087EE: ;
    eax = eax + 0x6D0;
    ecx++;
    if (CMP_L(ecx, 0x81)) goto loc_001087E0; /* jl: less (signed <) */

loc_001087FC: ;
    POP32(esp, edi);
    POP32(esp, esi);
    eax = 0; /* xor self */
    POP32(esp, ebx);
    esp = esp + 0x154;
    esp += 4; return; /* ret */

loc_00108808: ;
    eax = MEM32(eax + 0xA4);
    if (CMP_EQ(eax, 6)) goto loc_00108820; /* je: equal / zero */

loc_00108813: ;
    (void)0; /* cmp eax, 9 - flags set for next jcc */
    xmm0 = MEMF(0x649BB4); /* movss */
    if (CMP_NE(eax, 9)) goto loc_00108828; /* jne: not equal / not zero */

loc_00108820: ;
    xmm0 = MEMF(0x649BB0); /* movss */

loc_00108828: ;
    eax = esi + -1;
    (void)0; /* cmp eax, 3 - flags set for next jcc */
    MEMF(esp + 0x5C) = xmm0; /* movss */
    if (CMP_A(eax, 3)) goto loc_001087A6; /* ja: above (unsigned >) */

loc_0010883A: ;
    { uint32_t _jt = MEM32(eax * 4 + 0x1088DC); /* switch: 4 entries, 4 targets */
    if (_jt == 0x00108841u) goto loc_00108841;
    if (_jt == 0x0010885Fu) goto loc_0010885F;
    if (_jt == 0x0010886Bu) goto loc_0010886B;
    if (_jt == 0x00108877u) goto loc_00108877;
    g_seh_ebp = ebp; RECOMP_ITAIL(_jt); return; }

loc_00108841: ;
    PUSH32(esp, 0xFF);
    eax = 0x6B40A0;

loc_0010884B: ;
    PUSH32(esp, 0); sub_001468C0(); /* call 0x001468C0 */

loc_00108850: ;
    esp = esp + 4;

loc_00108853: ;
    eax = 0; /* xor self */
    POP32(esp, edi);
    POP32(esp, esi);
    POP32(esp, ebx);
    esp = esp + 0x154;
    esp += 4; return; /* ret */

loc_0010885F: ;
    PUSH32(esp, 0xFF);
    eax = 0x6B40AC;
    goto loc_0010884B;

loc_0010886B: ;
    PUSH32(esp, 0xFF);
    eax = 0x6B40B8;
    goto loc_0010884B;

loc_00108877: ;
    PUSH32(esp, 0xFF);
    eax = 0x6B40C4;
    goto loc_0010884B;

}

/**
 * sub_00109260
 * Original: 0x00109260 - 0x0010929E (62 bytes, 18 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00109260(void)
{
    uint32_t ebp;
    int _flags = 0; /* fallback flag var */
    float xmm5;
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_00109260: ;
    esp = esp - 0x58;
    PUSH32(esp, ebx);
    ebx = MEM32(esp + 0x60);
    PUSH32(esp, ebp);
    ebp = MEM32(ebx + 0x144);
    eax = MEM32(ebp + 0x70);
    ecx = eax;
    PUSH32(esp, edi);
    edi = MEM32(ebx + 0x140);
    ecx = ecx & 0x7F800000;
    (void)0; /* cmp ecx, 0x7F800000 - flags set for next jcc */
    MEM32(esp + 0x20) = edi;
    if (CMP_NE(ecx, 0x7F800000)) { sub_0010929E(); return; } /* jne: not equal / not zero */

loc_0010928D: ;
    if (TEST_Z(eax, 0x7FFFFF)) { sub_0010929E(); return; } /* je: equal / zero */

loc_00109294: ;
    xmm5 = 0.0f; /* xorps self = zero */
    MEMF(ebp + 0x70) = xmm5; /* movss */
    g_seh_ebp = ebp; sub_001092A1(); return; /* tail jmp 0x001092A1 */

}

/**
 * sub_00109980
 * Original: 0x00109980 - 0x00109E98 (1304 bytes, 355 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00109980(void)
{
    uint32_t ebp;
    int _flags = 0; /* fallback flag var */
    float xmm0, xmm1, xmm2, xmm3, xmm4, xmm5, xmm6;
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_00109980: ;
    esp = esp - 0x40;
    PUSH32(esp, ebx);
    ebx = MEM32(esp + 0x48);
    if (CMP_LE(MEM8(ebx + 0x4C), 1)) goto loc_00109E93; /* jle: less or equal (signed <=) */

loc_00109992: ;
    PUSH32(esp, esi);
    esi = (uint32_t)(int32_t)SMEM16(esp + 0x50);
    PUSH32(esp, edi);
    edi = ZX8(MEM8(ebx + 0x41));
    esi = esi << 2;
    eax = MEM32(esi + ebx + 0x130);
    edi = edi + 5;
    edi = (uint32_t)((int32_t)edi * (int32_t)0x38);
    if (TEST_NZ(eax, eax)) goto loc_001099D5; /* jne: not equal / not zero */

loc_001099B1: ;
    PUSH32(esp, 0xFFFFFFFFu);
    PUSH32(esp, 0x26);
    eax = edi + edi;
    PUSH32(esp, 0x5F3E90);
    PUSH32(esp, eax);
    PUSH32(esp, 0); sub_002AF0E0(); /* call 0x002AF0E0 */

loc_001099C3: ;
    esp = esp + 0x10;
    (void)0; /* test eax, eax - flags set for next jcc */
    MEM32(esi + ebx + 0x130) = eax;
    if (TEST_Z(eax, eax)) goto loc_00109E91; /* je: equal / zero */

loc_001099D5: ;
    SET_LO8(eax, MEM8(0x7FA230));
    ecx = 0; /* xor self */
    (void)0; /* test LO8(eax), LO8(eax) - flags set for next jcc */
    eax = MEM32(esi + ebx + 0x130);
    SET_LO8(ecx, (TEST_NZ(LO8(eax), LO8(eax))) ? 1 : 0); /* setne */
    PUSH32(esp, ebp);
    ecx--;
    ecx = ecx & edi;
    ecx = ecx + eax;
    ebp = ecx;
    if ((ecx == 0)) goto loc_00109E90; /* je: equal / zero */

loc_001099F6: ;
    ecx = MEM32(ebx + 0x144);
    xmm0 = MEMF(esi + 0x77149C); /* movss */
    SET_LO8(eax, MEM8(ecx + 0x68));
    edx = MEM32(ebx + 0x140);
    edi = 0; /* xor self */
    (void)0; /* cmp LO8(eax), 2 - flags set for next jcc */
    MEMF(esp + 0x28) = xmm0; /* movss */
    xmm0 = MEMF(esi + 0x77148C); /* movss */
    MEM32(esp + 0x20) = ecx;
    MEM32(esp + 0x1C) = edx;
    MEMF(esp + 0x24) = xmm0; /* movss */
    if (CMP_NE(LO8(eax), 2)) goto loc_00109A3B; /* jne: not equal / not zero */

loc_00109A2F: ;
    MEM8(esp + 0x14) = 1;
    MEM8(esp + 0x15) = 0;
    goto loc_00109A45;

loc_00109A3B: ;
    MEM8(esp + 0x14) = 0;
    MEM8(esp + 0x15) = 1;

loc_00109A45: ;
    SET_LO8(eax, 2);
    PUSH32(esp, 0); sub_000D9910(); /* call 0x000D9910 */

loc_00109A4C: ;
    esi = eax;
    eax = MEM32(ecx + 0x44);
    PUSH32(esp, 0);
    ecx = 0; /* xor self */
    MEM32(esp + 0x38) = esi;
    PUSH32(esp, 0); sub_000761F0(); /* call 0x000761F0 */

loc_00109A5E: ;
    ecx = MEM32(esi + 0x3838);
    esp = esp + 4;
    (void)0; /* cmp ecx, eax - flags set for next jcc */
    MEM32(esp + 0x2C) = eax;
    if (CMP_EQ(ecx, eax)) goto loc_00109A7E; /* je: equal / zero */

loc_00109A6F: ;
    PUSH32(esp, 0); sub_0013C160(); /* call 0x0013C160 */

loc_00109A74: ;
    eax = MEM32(esp + 0x2C);
    MEM32(esi + 0x3838) = eax;

loc_00109A7E: ;
    if (TEST_Z(MEM8(ebx + 0x3A), 2)) goto loc_00109ADC; /* je: equal / zero */

loc_00109A84: ;
    eax = (uint32_t)(int32_t)SMEM8(ebx + 0x4E);
    eax--;
    MEM32(esp + 0x18) = eax;
    if (((int32_t)eax >= 0)) goto loc_00109A98; /* jns: not sign (positive) */

loc_00109A8F: ;
    eax = ZX8(MEM8(ebx + 0x41));
    eax--;
    MEM32(esp + 0x18) = eax;

loc_00109A98: ;
    ebx = ebx + 0x2C;
    ecx = MEM32(ebx);
    edx = MEM32(ebx + 4);
    MEM32(esp + 0x44) = ecx;
    ecx = MEM32(ebx + 8);
    MEM32(esp + 0x48) = edx;
    edx = eax + eax * 2;
    eax = MEM32(esp + 0x1C);
    MEM32(esp + 0x4C) = ecx;
    eax = eax + edx * 8;
    ecx = eax;
    edx = MEM32(ecx);
    MEM32(esp + 0x38) = edx;
    edx = MEM32(ecx + 4);
    ecx = MEM32(ecx + 8);
    MEM32(esp + 0x40) = ecx;
    SET_LO8(ecx, MEM8(eax + 0x16));
    MEM32(esp + 0x3C) = edx;
    MEM8(esp + 0x12) = LO8(ecx);
    MEM8(esp + 0x13) = LO8(ecx);
    goto loc_00109B4A;

loc_00109ADC: ;
    edi = (uint32_t)(int32_t)SMEM8(ebx + 0x4E);
    edi--;
    if (((int32_t)edi >= 0)) goto loc_00109AE8; /* jns: not sign (positive) */

loc_00109AE3: ;
    edi = ZX8(MEM8(ebx + 0x41));
    edi--;

loc_00109AE8: ;
    ecx = edi + -1;
    (void)0; /* test ecx, ecx - flags set for next jcc */
    MEM32(esp + 0x18) = ecx;
    if (CMP_GE(ecx & ecx, 0)) goto loc_00109AFE; /* jge: greater or equal (signed >=) */

loc_00109AF3: ;
    eax = ZX8(MEM8(ebx + 0x41));
    eax--;
    MEM32(esp + 0x18) = eax;
    ecx = eax;

loc_00109AFE: ;
    eax = MEM32(esp + 0x1C);
    edx = edi + edi * 2;
    edx = eax + edx * 8;
    ecx = ecx + ecx * 2;
    esi = edx;
    ebx = MEM32(esi);
    SET_LO8(edx, MEM8(edx + 0x16));
    eax = eax + ecx * 8;
    MEM32(esp + 0x44) = ebx;
    ebx = MEM32(esi + 4);
    esi = MEM32(esi + 8);
    MEM32(esp + 0x4C) = esi;
    ecx = eax;
    esi = MEM32(ecx);
    MEM32(esp + 0x38) = esi;
    esi = MEM32(ecx + 4);
    ecx = MEM32(ecx + 8);
    MEM32(esp + 0x40) = ecx;
    SET_LO8(ecx, MEM8(eax + 0x16));
    MEM8(esp + 0x12) = LO8(ecx);
    MEM32(esp + 0x48) = ebx;
    MEM32(esp + 0x3C) = esi;
    MEM8(esp + 0x13) = LO8(edx);
    SET_LO8(ecx, LO8(edx));

loc_00109B4A: ;
    edx = MEM32(esp + 0x20);
    edx = MEM32(edx + 0x44);
    edx = MEM32(edx * 8 + 0x75B950);
    edx = MEM32(edx + 4);
    SET_LO16(edx, MEM16(edx + 0xC));
    xmm2 = MEMF(esp + 0x24); /* movss */
    xmm0 = MEMF(esp + 0x44); /* movss */
    xmm4 = MEMF(esp + 0x4C); /* movss */
    MEM16(esp + 0x20) = LO16(edx);
    xmm1 = xmm2; /* movaps */
    xmm1 = xmm1 * MEMF(eax + 0x10); /* mulss */
    xmm1 = xmm1 + xmm0; /* addss */
    edx = (int32_t)xmm1; /* cvttss2si */
    edx = SX16(LO16(edx));
    xmm1 = (float)(int32_t)edx; /* cvtsi2ss */
    edx = (int32_t)MEMF(esp + 0x48); /* cvttss2si */
    MEMF(ebp) = xmm1; /* movss */
    xmm1 = MEMF(esp + 0x28); /* movss */
    edx = SX16(LO16(edx));
    xmm3 = (float)(int32_t)edx; /* cvtsi2ss */
    MEMF(ebp + 4) = xmm3; /* movss */
    xmm5 = xmm1; /* movaps */
    xmm5 = xmm5 * MEMF(eax + 0x10); /* mulss */
    xmm6 = xmm4; /* movaps */
    xmm6 = xmm6 - xmm5; /* subss */
    esi = ZX8(LO8(ecx));
    edx = (int32_t)xmm6; /* cvttss2si */
    edx = SX16(LO16(edx));
    xmm5 = (float)(int32_t)edx; /* cvtsi2ss */
    SET_LO8(edx, MEM8(esp + 0x14));
    MEMF(ebp + 8) = xmm5; /* movss */
    ebx = ZX8(LO8(edx));
    esi = esi << 6;
    ecx = esi;
    xmm5 = (float)(int32_t)ecx; /* cvtsi2ss */
    ecx = ZX8(MEM8(esp + 0x15));
    MEMF(ebp + ebx * 4 + 0x10) = xmm5; /* movss */
    xmm5 = 0.0f; /* xorps self = zero */
    MEMF(ebp + ecx * 4 + 0x10) = xmm5; /* movss */
    MEM8(ebp + 0xC) = 0xFF;
    MEM8(ebp + 0xD) = 0xFF;
    MEM8(ebp + 0xE) = 0xFF;
    edx = edi + edi * 2;
    edi = MEM32(esp + 0x1C);
    edi = edi + edx * 8 + 0x14;
    SET_LO8(edx, MEM8(edi));
    MEM8(ebp + 0xF) = LO8(edx);
    MEM16(ebp + 0x18) = 0;
    ebp = ebp + 0x1C;
    xmm5 = xmm2; /* movaps */
    xmm5 = xmm5 * MEMF(eax + 0x10); /* mulss */
    xmm0 = xmm0 - xmm5; /* subss */
    edx = (int32_t)xmm0; /* cvttss2si */
    edx = SX16(LO16(edx));
    xmm0 = (float)(int32_t)edx; /* cvtsi2ss */
    MEMF(ebp) = xmm0; /* movss */
    MEMF(ebp + 4) = xmm3; /* movss */
    xmm0 = xmm1; /* movaps */
    xmm0 = xmm0 * MEMF(eax + 0x10); /* mulss */
    xmm0 = xmm0 + xmm4; /* addss */
    edx = (int32_t)xmm0; /* cvttss2si */
    edx = SX16(LO16(edx));
    xmm0 = (float)(int32_t)edx; /* cvtsi2ss */
    SET_LO8(edx, MEM8(esp + 0x15));
    (void)0; /* test LO8(edx), LO8(edx) - flags set for next jcc */
    edx = ZX16(MEM16(esp + 0x20));
    MEMF(ebp + 8) = xmm0; /* movss */
    edx = edx << 6;
    edx = edx + 0xFFFFFFC0u;
    xmm0 = (float)(int32_t)esi; /* cvtsi2ss */
    MEMF(ebp + ebx * 4 + 0x10) = xmm0; /* movss */
    xmm0 = (float)(int32_t)edx; /* cvtsi2ss */
    MEMF(ebp + ecx * 4 + 0x10) = xmm0; /* movss */
    MEM32(esp + 0x2C) = edx;
    MEM8(ebp + 0xC) = 0xFF;
    MEM8(ebp + 0xD) = 0xFF;
    MEM8(ebp + 0xE) = 0xFF;
    SET_LO8(edx, MEM8(edi));
    MEM32(esp + 0x30) = ecx;
    MEM8(ebp + 0xF) = LO8(edx);
    MEM16(ebp + 0x18) = 0;
    ebp = ebp + 0x1C;
    edi = ebp + -56;
    goto loc_00109CAE;

loc_00109C9E: ;
    xmm2 = MEMF(esp + 0x24); /* movss */
    xmm1 = MEMF(esp + 0x28); /* movss */
    ecx = MEM32(esp + 0x30);

loc_00109CAE: ;
    xmm0 = MEMF(esp + 0x38); /* movss */
    xmm4 = MEMF(esp + 0x40); /* movss */
    SET_LO8(edx, MEM8(esp + 0x12));
    xmm3 = xmm2; /* movaps */
    xmm3 = xmm3 * MEMF(eax + 0x10); /* mulss */
    xmm3 = xmm3 + xmm0; /* addss */
    esi = (int32_t)xmm3; /* cvttss2si */
    esi = SX16(LO16(esi));
    xmm3 = (float)(int32_t)esi; /* cvtsi2ss */
    esi = (int32_t)MEMF(esp + 0x3C); /* cvttss2si */
    MEMF(ebp) = xmm3; /* movss */
    esi = SX16(LO16(esi));
    xmm3 = (float)(int32_t)esi; /* cvtsi2ss */
    MEMF(ebp + 4) = xmm3; /* movss */
    xmm5 = xmm1; /* movaps */
    xmm5 = xmm5 * MEMF(eax + 0x10); /* mulss */
    xmm6 = xmm4; /* movaps */
    xmm6 = xmm6 - xmm5; /* subss */
    esi = (int32_t)xmm6; /* cvttss2si */
    esi = SX16(LO16(esi));
    xmm5 = (float)(int32_t)esi; /* cvtsi2ss */
    MEMF(ebp + 8) = xmm5; /* movss */
    esi = ZX8(LO8(edx));
    esi = esi << 6;
    xmm5 = (float)(int32_t)esi; /* cvtsi2ss */
    MEMF(ebp + ebx * 4 + 0x10) = xmm5; /* movss */
    xmm5 = 0.0f; /* xorps self = zero */
    MEMF(ebp + ecx * 4 + 0x10) = xmm5; /* movss */
    MEM8(ebp + 0xC) = 0xFF;
    MEM8(ebp + 0xD) = 0xFF;
    MEM8(ebp + 0xE) = 0xFF;
    SET_LO8(edx, MEM8(eax + 0x14));
    MEM8(ebp + 0xF) = LO8(edx);
    MEM16(ebp + 0x18) = 0;
    xmm2 = xmm2 * MEMF(eax + 0x10); /* mulss */
    ebp = ebp + 0x1C;
    xmm0 = xmm0 - xmm2; /* subss */
    edx = (int32_t)xmm0; /* cvttss2si */
    edx = SX16(LO16(edx));
    xmm0 = (float)(int32_t)edx; /* cvtsi2ss */
    MEMF(ebp) = xmm0; /* movss */
    MEMF(ebp + 4) = xmm3; /* movss */
    xmm1 = xmm1 * MEMF(eax + 0x10); /* mulss */
    xmm1 = xmm1 + xmm4; /* addss */
    edx = (int32_t)xmm1; /* cvttss2si */
    edx = SX16(LO16(edx));
    xmm0 = (float)(int32_t)edx; /* cvtsi2ss */
    MEMF(ebp + 8) = xmm0; /* movss */
    xmm0 = (float)(int32_t)esi; /* cvtsi2ss */
    esi = MEM32(esp + 0x34);
    MEMF(ebp + ebx * 4 + 0x10) = xmm0; /* movss */
    xmm0 = (float)(int32_t)MEM32(esp + 0x2C); /* cvtsi2ss */
    MEMF(ebp + ecx * 4 + 0x10) = xmm0; /* movss */
    MEM8(ebp + 0xC) = 0xFF;
    MEM8(ebp + 0xD) = 0xFF;
    MEM8(ebp + 0xE) = 0xFF;
    SET_LO8(eax, MEM8(eax + 0x14));
    MEM8(ebp + 0xF) = LO8(eax);
    MEM16(ebp + 0x18) = 0;
    ebp = ebp + 0x1C;
    PUSH32(esp, 0xFF);
    ecx = ebp + -112;
    edi = edi + 0x1C;
    PUSH32(esp, ecx);
    edi = edi + 0x1C;
    eax = 4;
    ecx = esi;
    MEM32(esp + 0x28) = edi;
    PUSH32(esp, 0); sub_0013BB50(); /* call 0x0013BB50 */

loc_00109DCA: ;
    PUSH32(esp, 2);
    PUSH32(esp, 1);
    PUSH32(esp, 0);
    eax = esi;
    PUSH32(esp, 0); sub_0013BF00(); /* call 0x0013BF00 */

loc_00109DD7: ;
    PUSH32(esp, 2);
    PUSH32(esp, 3);
    PUSH32(esp, 1);
    eax = esi;
    PUSH32(esp, 0); sub_0013BF00(); /* call 0x0013BF00 */

loc_00109DE4: ;
    SET_LO8(edx, MEM8(esp + 0x12));
    if (CMP_BE(LO8(edx), MEM8(esp + 0x13))) goto loc_00109E37; /* jbe: below or equal (unsigned <=) */

loc_00109DEE: ;
    xmm0 = MEMF(0x649130); /* movss */
    eax = MEM32(esp + 0x20);
    esi = edi;
    edi = ebp;
    ecx = 0xE;
    memcpy((void*)XBOX_PTR(edi), (void*)XBOX_PTR(esi), ecx * 4);
    esi += ecx * 4; edi += ecx * 4; ecx = 0; /* rep movsd */
    xmm1 = MEMF(ebp + ebx * 4 + -40); /* movss */
    xmm1 = xmm1 - xmm0; /* subss */
    MEMF(ebp + ebx * 4 + -40) = xmm1; /* movss */
    xmm1 = MEMF(ebp + ebx * 4 + -12); /* movss */
    ebp = ebp + 0x1C;
    xmm1 = xmm1 - xmm0; /* subss */
    eax = eax + 0x1C;
    MEMF(ebp + ebx * 4 + -40) = xmm1; /* movss */
    ebp = ebp + 0x1C;
    eax = eax + 0x1C;
    MEM32(esp + 0x20) = eax;
    edi = eax;

loc_00109E37: ;
    eax = MEM32(esp + 0x18);
    MEM32(esp + 0x20) = eax;
    eax--;
    MEM32(esp + 0x18) = eax;
    if (((int32_t)eax >= 0)) goto loc_00109E53; /* jns: not sign (positive) */

loc_00109E46: ;
    eax = MEM32(esp + 0x54);
    eax = ZX8(MEM8(eax + 0x41));
    eax--;
    MEM32(esp + 0x18) = eax;

loc_00109E53: ;
    ecx = eax + eax * 2;
    eax = MEM32(esp + 0x1C);
    eax = eax + ecx * 8;
    ecx = eax;
    esi = MEM32(ecx);
    MEM32(esp + 0x38) = esi;
    esi = MEM32(ecx + 4);
    ecx = MEM32(ecx + 8);
    MEM8(esp + 0x13) = LO8(edx);
    SET_LO8(edx, MEM8(eax + 0x16));
    MEM32(esp + 0x40) = ecx;
    ecx = MEM32(esp + 0x54);
    MEM8(esp + 0x12) = LO8(edx);
    edx = (uint32_t)(int32_t)SMEM8(ecx + 0x4D);
    (void)0; /* cmp MEM32(esp + 0x20), edx - flags set for next jcc */
    MEM32(esp + 0x3C) = esi;
    if (CMP_NE(MEM32(esp + 0x20), edx)) goto loc_00109C9E; /* jne: not equal / not zero */

loc_00109E90: ;
    POP32(esp, ebp);

loc_00109E91: ;
    POP32(esp, edi);
    POP32(esp, esi);

loc_00109E93: ;
    POP32(esp, ebx);
    esp = esp + 0x40;
    esp += 4; return; /* ret */

}

/**
 * sub_00109EA0
 * Original: 0x00109EA0 - 0x00109F25 (133 bytes, 42 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00109EA0(void)
{
    uint32_t ebp;
    int _flags = 0; /* fallback flag var */
    float xmm0;
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_00109EA0: ;
    PUSH32(esp, esi);
    PUSH32(esp, 0xFF);
    PUSH32(esp, 0x2A);
    eax = 0x4D;
    PUSH32(esp, 0); sub_000D9C60(); /* call 0x000D9C60 */

loc_00109EB2: ;
    esi = eax;
    esp = esp + 8;
    if (TEST_Z(esi, esi)) goto loc_00109F11; /* je: equal / zero */

loc_00109EBB: ;
    xmm0 = MEMF(0x648EA4); /* movss */
    edx = MEM32(esp + 8);
    SET_LO8(eax, LO8(eax) | 0xFF);
    MEM8(esi + 0x39) = LO8(eax);
    MEM8(esi + 0x3A) = LO8(eax);
    eax = 0; /* xor self */
    MEMF(esi + 0x30) = xmm0; /* movss */
    MEMF(esi + 0x34) = xmm0; /* movss */
    MEM8(esi + 0x38) = 2;
    MEM8(esi + 0x2C) = 1;
    MEM8(esi + 0x3B) = 0;
    ecx = esi + 0x3C;
    MEM32(ecx) = eax;
    MEM32(ecx + 4) = eax;
    MEM32(ecx + 8) = eax;
    MEM32(ecx + 0xC) = eax;
    eax = ZX8(MEM8(edx + 0xC6));
    eax = eax + 0xFFFFFF05u;
    if (CMP_A(eax, 3)) { sub_00109F25(); return; } /* ja: above (unsigned >) */

loc_00109F06: ;
    { uint32_t _jt = MEM32(eax * 4 + 0x109F60); /* switch: 4 entries, 4 targets */
    if (_jt == 0x00109F0Du) goto loc_00109F0D;
    if (_jt == 0x00109F13u) goto loc_00109F13;
    if (_jt == 0x00109F19u) goto loc_00109F19;
    if (_jt == 0x00109F1Fu) goto loc_00109F1F;
    g_seh_ebp = ebp; RECOMP_ITAIL(_jt); return; }

loc_00109F0D: ;
    MEM8(esi + 0x4C) = 1;

loc_00109F11: ;
    POP32(esp, esi);
    esp += 4; return; /* ret */

loc_00109F13: ;
    MEM8(esi + 0x4C) = 2;
    POP32(esp, esi);
    esp += 4; return; /* ret */

loc_00109F19: ;
    MEM8(esi + 0x4C) = 4;
    POP32(esp, esi);
    esp += 4; return; /* ret */

loc_00109F1F: ;
    MEM8(esi + 0x4C) = 3;
    POP32(esp, esi);
    esp += 4; return; /* ret */

}

/**
 * sub_0010A090
 * Original: 0x0010A090 - 0x0010A18A (250 bytes, 75 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0010A090(void)
{
    int _flags = 0; /* fallback flag var */
    float xmm0, xmm1;

loc_0010A090: ;
    esp = esp - 0x34;
    PUSH32(esp, ebx);
    PUSH32(esp, esi);
    esi = MEM32(esp + 0x40);
    ebx = MEM32(esi + 0x144);
    PUSH32(esp, edi);
    edi = MEM32(esi + 0x140);
    MEM32(esp + 0x3C) = 0x303;
    PUSH32(esp, 0); sub_003E1D70(); /* call 0x003E1D70 */

loc_0010A0B3: ;
    xmm1 = xmm0; /* movaps */
    xmm0 = MEMF(0x648CE4); /* movss */
    xmm1 = xmm1 * xmm0; /* mulss */
    xmm1 = xmm1 + xmm0; /* addss */
    MEMF(esp + 0x44) = xmm1; /* movss */
    MEM8(ebx + 0x2C) = 4;
    PUSH32(esp, 0); sub_003E2480(); /* call 0x003E2480 */

loc_0010A0D5: ;
    eax = eax & 1;
    ecx = 0; /* xor self */
    eax = eax - ecx;
    if ((eax == 0)) goto loc_0010A0EB; /* je: equal / zero */

loc_0010A0DE: ;
    eax--;
    if ((eax != 0)) goto loc_0010A0F3; /* jne: not equal / not zero */

loc_0010A0E1: ;
    MEM32(esp + 0x14) = 0x1C;
    goto loc_0010A0F3;

loc_0010A0EB: ;
    MEM32(esp + 0x14) = 0x1B;

loc_0010A0F3: ;
    xmm0 = 0.0f; /* xorps self = zero */
    edx = 0; /* xor self */
    SET_LO8(edx, MEM8(esi + 4));
    SET_LO8(eax, 0xFF);
    MEM8(esp + 0x24) = LO8(eax);
    MEM8(esp + 0x25) = LO8(eax);
    eax = (uint32_t)(int32_t)SMEM8(esi + 0x4D);
    PUSH32(esp, edx);
    eax = eax + eax * 4;
    PUSH32(esp, ecx);
    MEMF(esp + 0x24) = xmm0; /* movss */
    MEMF(esp + 0x28) = xmm0; /* movss */
    MEM32(esp + 0x14) = 0x11;
    MEM16(esp + 0x18) = 0x64;
    MEM8(esp + 0x2E) = LO8(ecx);
    MEM8(esp + 0x2F) = LO8(ecx);
    MEM8(esp + 0x30) = LO8(ecx);
    MEM8(esp + 0x31) = 0xAA;
    edi = edi + eax * 4;
    PUSH32(esp, 0); sub_003E2480(); /* call 0x003E2480 */

loc_0010A142: ;
    ebx = eax;
    SET_LO8(ebx, LO8(ebx) & 1);
    PUSH32(esp, 0); sub_003E2480(); /* call 0x003E2480 */

loc_0010A14C: ;
    SET_LO8(eax, LO8(eax) & 1);
    SET_LO8(ebx, LO8(ebx) + LO8(eax));
    PUSH32(esp, ebx);
    PUSH32(esp, 0); sub_003E2480(); /* call 0x003E2480 */

loc_0010A156: ;
    ecx = MEM32(esp + 0x60);
    edx = MEM32(edi);
    PUSH32(esp, eax);
    eax = MEM32(esp + 0x54);
    PUSH32(esp, eax);
    PUSH32(esp, eax);
    eax = MEM32(edi + 8);
    PUSH32(esp, eax);
    eax = MEM32(esp + 0x74);
    PUSH32(esp, ecx);
    PUSH32(esp, edx);
    PUSH32(esp, eax);
    PUSH32(esp, 0);
    PUSH32(esp, 5);
    eax = esp + 0x3C;
    PUSH32(esp, 0); sub_0014FA50(); /* call 0x0014FA50 */

loc_0010A17B: ;
    esp = esp + 0x30;
    POP32(esp, edi);
    POP32(esp, esi);
    eax = 1;
    POP32(esp, ebx);
    esp = esp + 0x34;
    esp += 4; return; /* ret */

}

/**
 * sub_0010A190
 * Original: 0x0010A190 - 0x0010A1BC (44 bytes, 12 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0010A190(void)
{
    int _flags = 0; /* fallback flag var */

loc_0010A190: ;
    eax = MEM32(esp + 4);
    edx = 0xFFFFFFE6u;
    MEM16(eax + 0x50) = MEM16(eax + 0x50) + LO16(edx);
    SET_LO16(ecx, MEM16(eax + 0x50));
    MEM16(eax + 0x52) = MEM16(eax + 0x52) + LO16(edx);
    (void)0; /* cmp LO16(ecx), 0xA - flags set for next jcc */
    SET_LO16(edx, MEM16(eax + 0x52));
    if (CMP_L(LO16(ecx), 0xA)) goto loc_0010A1B5; /* jl: less (signed <) */

loc_0010A1AF: ;
    if (CMP_GE(LO16(edx), 0xA)) goto loc_0010A1BB; /* jge: greater or equal (signed >=) */

loc_0010A1B5: ;
    MEM16(eax + 0x54) = 0;

loc_0010A1BB: ;
    esp += 4; return; /* ret */

}

/**
 * sub_0010A1C0
 * Original: 0x0010A1C0 - 0x0010A256 (150 bytes, 40 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0010A1C0(void)
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

loc_0010A1C0: ;
    PUSH32(esp, ecx);
    SET_LO8(eax, MEM8(ecx + 0x10));
    if (TEST_Z(LO8(eax), LO8(eax))) { sub_0010A256(); return; } /* je: equal / zero */

loc_0010A1CC: ;
    SET_LO8(eax, MEM8(0x7FA23C));
    (void)0; /* test LO8(eax), LO8(eax) - flags set for next jcc */
    xmm0 = 0.0f; /* xorps self = zero */
    if (TEST_NZ(LO8(eax), LO8(eax))) goto loc_0010A1E0; /* jne: not equal / not zero */

loc_0010A1D8: ;
    xmm0 = MEMF(0x7F9F4C); /* movss */

loc_0010A1E0: ;
    MEMF(esp) = xmm0; /* movss */
    fp_push(MEMF(esp)); /* fld float */
    xmm0 = MEMF(ecx + 4); /* movss */
    fp_st1() *= fp_top(); fp_pop(); /* fmul */
    fp_st1() *= fp_top(); fp_pop(); /* fmul */
    /* FPU: fcos  */
    fp_st1() *= fp_top(); fp_pop(); /* fmul */
    fp_st1() += fp_top(); fp_pop(); /* fadd */
    MEMF(esp) = (float)fp_top(); fp_popp(); /* fstp */
    xmm1 = MEMF(esp); /* movss */
    /* ucomiss xmm1, xmm0 - sets EFLAGS */
    /* lahf - load AH from flags (used in FPU compare idiom) */
    if (1 /* jp after test - parity */) goto loc_0010A216; /* jp: parity */

loc_0010A20E: ;
    xmm1 = xmm1 + MEMF(0x648D54); /* addss */

loc_0010A216: ;
    /* ucomiss xmm1, xmm0 - sets EFLAGS */
    /* lahf - load AH from flags (used in FPU compare idiom) */
    (void)0; /* test HI8(eax), 0x44 - flags set for next jcc */
    MEMF(0x750308) = xmm1; /* movss */
    MEMF(0x75030C) = xmm0; /* movss */
    if (1 /* jp after test - parity */) goto loc_0010A24A; /* jp: parity */

loc_0010A22F: ;
    xmm0 = xmm0 + MEMF(0x648D80); /* addss */
    MEMF(0x75030C) = xmm0; /* movss */
    eax = ZX8(MEM8(ecx + 0x10));
    MEM32(0x750324) = eax;
    POP32(esp, ecx);
    esp += 4; return; /* ret */

loc_0010A24A: ;
    ecx = ZX8(MEM8(ecx + 0x10));
    MEM32(0x750324) = ecx;
    POP32(esp, ecx);
    esp += 4; return; /* ret */

    #undef fp_push
    #undef fp_pop
    #undef fp_popp
    #undef fp_top
    #undef fp_st1
}

/**
 * sub_0010A270
 * Original: 0x0010A270 - 0x0010A2AA (58 bytes, 13 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0010A270(void)
{
    int _flags = 0; /* fallback flag var */
    float xmm0, xmm1;

loc_0010A270: ;
    /* ucomiss xmm1, xmm0 - sets EFLAGS */
    /* lahf - load AH from flags (used in FPU compare idiom) */
    if (1 /* jp after test - parity */) goto loc_0010A284; /* jp: parity */

loc_0010A279: ;
    xmm0 = xmm1; /* movaps */
    xmm0 = xmm0 + MEMF(0x648D2C); /* addss */

loc_0010A284: ;
    eax = MEM32(esp + 4);
    MEMF(0x771CE8) = xmm1; /* movss */
    MEMF(0x771CE4) = xmm0; /* movss */
    MEM32(0x771CE0) = eax;
    MEM32(0x771CDC) = ecx;
    MEM32(0x771CD8) = edx;
    esp += 4; return; /* ret */

}

/**
 * sub_0010A2B0
 * Original: 0x0010A2B0 - 0x0010A418 (360 bytes, 84 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0010A2B0(void)
{
    uint32_t ebp;
    int _flags = 0; /* fallback flag var */
    float xmm0, xmm1;
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_0010A2B0: ;
    xmm0 = MEMF(0x771CE4); /* movss */
    /* ucomiss xmm0, MEMF(0x648CF8) - sets EFLAGS */
    /* lahf - load AH from flags (used in FPU compare idiom) */
    (void)0; /* test HI8(eax), 0x44 - flags set for next jcc */
    edx = 0xFF;
    if (1 /* jnp after test - parity */) goto loc_0010A38B; /* jnp: not parity */

loc_0010A2CE: ;
    ecx = MEM32(0x5499F0);
    xmm1 = MEMF(0x771CE8); /* movss */
    eax = 1;
    ecx = ecx | 0x2000;
    MEM32(0x7502EC) = eax;
    MEM32(0x5499F0) = ecx;
    MEM32(0x549B68) = eax;
    eax = MEM32(0x771CE0);
    ecx = 0; /* xor self */
    (void)0; /* cmp eax, ecx - flags set for next jcc */
    MEMF(0x7502F0) = xmm1; /* movss */
    MEMF(0x7502F4) = xmm0; /* movss */
    if (CMP_GE(eax, ecx)) goto loc_0010A31A; /* jge: greater or equal (signed >=) */

loc_0010A312: ;
    MEM8(0x7502E8) = LO8(ecx);
    goto loc_0010A329;

loc_0010A31A: ;
    (void)0; /* cmp eax, edx - flags set for next jcc */
    MEM8(0x7502E8) = LO8(edx);
    if (CMP_G(eax, edx)) goto loc_0010A329; /* jg: greater (signed >) */

loc_0010A324: ;
    MEM8(0x7502E8) = LO8(eax);

loc_0010A329: ;
    eax = MEM32(0x771CDC);
    if (CMP_GE(eax, ecx)) goto loc_0010A33A; /* jge: greater or equal (signed >=) */

loc_0010A332: ;
    MEM8(0x7502E9) = LO8(ecx);
    goto loc_0010A349;

loc_0010A33A: ;
    (void)0; /* cmp eax, edx - flags set for next jcc */
    MEM8(0x7502E9) = LO8(edx);
    if (CMP_G(eax, edx)) goto loc_0010A349; /* jg: greater (signed >) */

loc_0010A344: ;
    MEM8(0x7502E9) = LO8(eax);

loc_0010A349: ;
    eax = MEM32(0x771CD8);
    if (CMP_GE(eax, ecx)) goto loc_0010A368; /* jge: greater or equal (signed >=) */

loc_0010A352: ;
    MEM8(0x7502EA) = LO8(ecx);
    MEM8(0x7502EB) = LO8(edx);
    ecx = 0x85D060;
    g_seh_ebp = ebp; sub_0010A1C0(); return; /* tail jmp 0x0010A1C0 */

loc_0010A368: ;
    (void)0; /* cmp eax, edx - flags set for next jcc */
    MEM8(0x7502EA) = LO8(edx);
    if (CMP_G(eax, edx)) goto loc_0010A408; /* jg: greater (signed >) */

loc_0010A376: ;
    MEM8(0x7502EA) = LO8(eax);
    MEM8(0x7502EB) = LO8(edx);
    ecx = 0x85D060;
    g_seh_ebp = ebp; sub_0010A1C0(); return; /* tail jmp 0x0010A1C0 */

loc_0010A38B: ;
    eax = MEM32(0x771CE0);
    ecx = 0; /* xor self */
    if (CMP_GE(eax, ecx)) goto loc_0010A39E; /* jge: greater or equal (signed >=) */

loc_0010A396: ;
    MEM8(0x7502E8) = LO8(ecx);
    goto loc_0010A3AD;

loc_0010A39E: ;
    (void)0; /* cmp eax, edx - flags set for next jcc */
    MEM8(0x7502E8) = LO8(edx);
    if (CMP_G(eax, edx)) goto loc_0010A3AD; /* jg: greater (signed >) */

loc_0010A3A8: ;
    MEM8(0x7502E8) = LO8(eax);

loc_0010A3AD: ;
    eax = MEM32(0x771CDC);
    if (CMP_GE(eax, ecx)) goto loc_0010A3BE; /* jge: greater or equal (signed >=) */

loc_0010A3B6: ;
    MEM8(0x7502E9) = LO8(ecx);
    goto loc_0010A3CD;

loc_0010A3BE: ;
    (void)0; /* cmp eax, edx - flags set for next jcc */
    MEM8(0x7502E9) = LO8(edx);
    if (CMP_G(eax, edx)) goto loc_0010A3CD; /* jg: greater (signed >) */

loc_0010A3C8: ;
    MEM8(0x7502E9) = LO8(eax);

loc_0010A3CD: ;
    eax = MEM32(0x771CD8);
    if (CMP_GE(eax, ecx)) goto loc_0010A3DE; /* jge: greater or equal (signed >=) */

loc_0010A3D6: ;
    MEM8(0x7502EA) = LO8(ecx);
    goto loc_0010A3ED;

loc_0010A3DE: ;
    (void)0; /* cmp eax, edx - flags set for next jcc */
    MEM8(0x7502EA) = LO8(edx);
    if (CMP_G(eax, edx)) goto loc_0010A3ED; /* jg: greater (signed >) */

loc_0010A3E8: ;
    MEM8(0x7502EA) = LO8(eax);

loc_0010A3ED: ;
    eax = MEM32(0x5499F0);
    eax = eax | 0x2000;
    MEM32(0x7502EC) = ecx;
    MEM32(0x5499F0) = eax;
    MEM32(0x549B68) = ecx;

loc_0010A408: ;
    MEM8(0x7502EB) = LO8(edx);
    ecx = 0x85D060;
    g_seh_ebp = ebp; sub_0010A1C0(); return; /* tail jmp 0x0010A1C0 */

}

/**
 * sub_0010A420
 * Original: 0x0010A420 - 0x0010A43F (31 bytes, 7 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0010A420(void)
{

loc_0010A420: ;
    ecx = MEM32(0x5499F0);
    eax = 0; /* xor self */
    ecx = ecx | 0x2000;
    MEM32(0x7502EC) = eax;
    MEM32(0x5499F0) = ecx;
    MEM32(0x549B68) = eax;
    esp += 4; return; /* ret */

}

/**
 * sub_0010A440
 * Original: 0x0010A440 - 0x0010A4E7 (167 bytes, 41 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0010A440(void)
{
    int _flags = 0; /* fallback flag var */
    float xmm0;

loc_0010A440: ;
    eax = MEM32(0x8471A4);
    SET_LO16(ecx, MEM16(eax + 0x42));
    if (CMP_NE(LO16(ecx), MEM16(eax + 0x46))) goto loc_0010A45A; /* jne: not equal / not zero */

loc_0010A44F: ;
    if (TEST_NZ(LO16(ecx), LO16(ecx))) goto loc_0010A45A; /* jne: not equal / not zero */

loc_0010A454: ;
    MEM16(eax + 0x46) = 0x64;

loc_0010A45A: ;
    SET_LO8(ecx, MEM8(eax + 0x48));
    MEM8(0x6B40D0) = LO8(ecx);
    SET_LO8(edx, MEM8(eax + 0x49));
    MEM8(0x6B40D1) = LO8(edx);
    SET_LO8(ecx, MEM8(eax + 0x4A));
    MEM8(0x6B40D2) = LO8(ecx);
    SET_LO8(edx, MEM8(eax + 0x4B));
    MEM8(0x6B40D3) = LO8(edx);
    SET_LO16(ecx, MEM16(eax + 0x40));
    MEM16(0x6B40D4) = LO16(ecx);
    SET_LO16(edx, MEM16(eax + 0x42));
    MEM16(0x6B40D6) = LO16(edx);
    SET_LO16(ecx, MEM16(eax + 0x44));
    MEM16(0x6B40D8) = LO16(ecx);
    SET_LO16(edx, MEM16(eax + 0x46));
    MEM16(0x6B40DA) = LO16(edx);
    xmm0 = MEMF(eax + 0x28); /* movss */
    MEMF(0x6B40DC) = xmm0; /* movss */
    xmm0 = MEMF(eax + 0x24); /* movss */
    MEMF(0x6B40E0) = xmm0; /* movss */
    SET_LO8(eax, MEM8(eax + 0x4C));
    PUSH32(esp, edi);
    edi = 0; /* xor self */
    if (CMP_EQ(LO8(eax), 0xFF)) { sub_0010A4E7(); return; } /* je: equal / zero */

loc_0010A4CE: ;
    eax = SX8(LO8(eax));
    PUSH32(esp, eax);
    PUSH32(esp, eax);
    eax = eax | 0xFFFFFFFFu;
    MEM8(0x771D0C) = 1;
    PUSH32(esp, 0); sub_0010A500(); /* call 0x0010A500 */

loc_0010A4E2: ;
    esp = esp + 8;
    POP32(esp, edi);
    esp += 4; return; /* ret */

}

/**
 * sub_0010A500
 * Original: 0x0010A500 - 0x0010A549 (73 bytes, 15 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0010A500(void)
{
    uint32_t ebp;
    int _flags = 0; /* fallback flag var */
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_0010A500: ;
    esp = esp - 0x18;
    (void)0; /* cmp eax, 0xFFFFFFFFu - flags set for next jcc */
    PUSH32(esp, ebx);
    PUSH32(esp, ebp);
    PUSH32(esp, esi);
    MEM16(0x771CEC) = LO16(edi);
    if (CMP_NE(eax, 0xFFFFFFFFu)) { sub_0010A549(); return; } /* jne: not equal / not zero */

loc_0010A512: ;
    ebp = 0x771D08;
    MEM32(esp + 0xC) = 0x771CFC;
    MEM32(esp + 0x10) = 0x771CF8;
    MEM32(esp + 0x14) = 0x771D04;
    MEM32(esp + 0x18) = 0x771D00;
    MEM32(esp + 0x1C) = 0x771CF4;
    MEM32(esp + 0x20) = 0x771CF0;
    g_seh_ebp = ebp; sub_0010A591(); return; /* tail jmp 0x0010A591 */

}

/**
 * sub_0010A810
 * Original: 0x0010A810 - 0x0010A889 (121 bytes, 38 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0010A810(void)
{
    int _flags = 0; /* fallback flag var */

loc_0010A810: ;
    PUSH32(esp, esi);
    esi = MEM32(0x8471A4);
    SET_LO8(ecx, MEM8(esi + 0x4C));
    eax = eax | 0xFFFFFFFFu;
    if (CMP_NE(LO8(ecx), LO8(eax))) goto loc_0010A887; /* jne: not equal / not zero */

loc_0010A821: ;
    ecx = MEM32(0x8470DC);
    edx = MEM32(ecx + 4);
    SET_LO8(ecx, MEM8(edx + 0x8C2));
    PUSH32(esp, edi);
    edi = 0; /* xor self */
    if (CMP_NE(LO8(ecx), 1)) goto loc_0010A861; /* jne: not equal / not zero */

loc_0010A838: ;
    PUSH32(esp, 6);
    PUSH32(esp, 6);
    PUSH32(esp, 0); sub_0010A500(); /* call 0x0010A500 */

loc_0010A841: ;
    eax = MEM32(0x771D08);
    esp = esp + 8;
    MEM8(0x76F51C) = LO8(eax);
    SET_LO8(eax, MEM8(0x771D0A));
    POP32(esp, edi);
    MEM8(0x76F51D) = HI8(eax);
    MEM8(0x76F51E) = LO8(eax);
    POP32(esp, esi);
    esp += 4; return; /* ret */

loc_0010A861: ;
    PUSH32(esp, 0);
    PUSH32(esp, 0);
    PUSH32(esp, 0); sub_0010A500(); /* call 0x0010A500 */

loc_0010A86A: ;
    SET_LO8(ecx, MEM8(esi));
    MEM8(0x76F51C) = LO8(ecx);
    SET_LO8(edx, MEM8(esi + 1));
    MEM8(0x76F51D) = LO8(edx);
    SET_LO8(eax, MEM8(esi + 2));
    esp = esp + 8;
    MEM8(0x76F51E) = LO8(eax);
    POP32(esp, edi);

loc_0010A887: ;
    POP32(esp, esi);
    esp += 4; return; /* ret */

}

/**
 * sub_0010A890
 * Original: 0x0010A890 - 0x0010A8B9 (41 bytes, 15 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0010A890(void)
{
    uint32_t ebp;
    int _flags = 0; /* fallback flag var */
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_0010A890: ;
    PUSH32(esp, ebx);
    PUSH32(esp, esi);
    esi = MEM32(esp + 0xC);
    ebx = MEM32(esi + 0x54);
    PUSH32(esp, esi);
    PUSH32(esp, 0); sub_001C4D90(); /* call 0x001C4D90 */

loc_0010A89F: ;
    SET_LO8(eax, MEM8(0x8472BD));
    esp = esp + 4;
    if (TEST_NZ(LO8(eax), LO8(eax))) { sub_0010A8B9(); return; } /* jne: not equal / not zero */

loc_0010A8AB: ;
    eax = esi;
    POP32(esp, esi);
    edx = 1;
    POP32(esp, ebx);
    g_seh_ebp = ebp; sub_000DA5E0(); return; /* tail jmp 0x000DA5E0 */

}

/**
 * sub_0010A8C0
 * Original: 0x0010A8C0 - 0x0010A949 (137 bytes, 53 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0010A8C0(void)
{
    uint32_t ebp;
    int _flags = 0; /* fallback flag var */
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_0010A8C0: ;
    eax = MEM32(esp + 0xC);
    (void)0; /* test eax, eax - flags set for next jcc */
    PUSH32(esp, esi);
    esi = MEM32(esp + 8);
    if (TEST_NZ(eax, eax)) goto loc_0010A919; /* jne: not equal / not zero */

loc_0010A8CD: ;
    eax = MEM32(esp + 0xC);
    ecx = MEM32(eax);
    if (CMP_EQ(ecx, MEM32(esi + 0x54))) goto loc_0010A8E0; /* je: equal / zero */

loc_0010A8D8: ;
    SET_LO8(edx, MEM8(eax + 4));
    if (CMP_NE(LO8(edx), MEM8(esi + 0x58))) goto loc_0010A947; /* jne: not equal / not zero */

loc_0010A8E0: ;
    SET_LO8(eax, MEM8(0x8472BD));
    if (TEST_NZ(LO8(eax), LO8(eax))) goto loc_0010A947; /* jne: not equal / not zero */

loc_0010A8E9: ;
    edx = esi;
    PUSH32(esp, 0); sub_000DAD90(); /* call 0x000DAD90 */

loc_0010A8F0: ;
    eax = MEM32(esi);
    if (CMP_L(eax, 2)) goto loc_0010A947; /* jl: less (signed <) */

loc_0010A8F7: ;
    eax = (uint32_t)((int32_t)eax * (int32_t)0x70);
    eax = MEM32(eax + 0x5906BC);
    if (TEST_Z(eax, eax)) goto loc_0010A90C; /* je: equal / zero */

loc_0010A904: ;
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, esi);
    PUSH32(esp, 0); RECOMP_ICALL_SAFE(eax, _icall_esp); /* indirect call */
    }

loc_0010A907: ;
    esp = esp + 4;
    POP32(esp, esi);
    esp += 4; return; /* ret */

loc_0010A90C: ;
    eax = esi;
    edx = 1;
    POP32(esp, esi);
    g_seh_ebp = ebp; sub_000DA5E0(); return; /* tail jmp 0x000DA5E0 */

loc_0010A919: ;
    if (CMP_NE(eax, 0x2D)) goto loc_0010A947; /* jne: not equal / not zero */

loc_0010A91E: ;
    eax = MEM32(esp + 0xC);
    ecx = MEM32(esi + 0x54);
    edx = MEM32(eax);
    if (CMP_NE(ecx, edx)) goto loc_0010A939; /* jne: not equal / not zero */

loc_0010A92B: ;
    ecx = MEM32(eax + 4);
    MEM32(esi + 0x54) = ecx;
    SET_LO8(edx, MEM8(eax + 9));
    MEM8(esi + 0x58) = LO8(edx);
    POP32(esp, esi);
    esp += 4; return; /* ret */

loc_0010A939: ;
    if (CMP_NE(ecx, MEM32(eax + 4))) goto loc_0010A947; /* jne: not equal / not zero */

loc_0010A93E: ;
    MEM32(esi + 0x54) = edx;
    SET_LO8(eax, MEM8(eax + 8));
    MEM8(esi + 0x58) = LO8(eax);

loc_0010A947: ;
    POP32(esp, esi);
    esp += 4; return; /* ret */

}

/**
 * sub_0010A950
 * Original: 0x0010A950 - 0x0010AB1E (462 bytes, 113 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0010A950(void)
{
    float xmm0, xmm1;

loc_0010A950: ;
    esp = esp - 0xC;
    xmm0 = MEMF(0x648D14); /* movss */
    MEM32(ecx + 4) = 0x239;
    xmm1 = MEMF(0x648D10); /* movss */
    edx = 1;
    MEM32(ecx) = edx;
    MEM32(ecx + 8) = edx;
    MEM32(ecx + 0xC) = 0x23A;
    MEM32(ecx + 0x10) = edx;
    MEM32(ecx + 0x14) = 0x23B;
    MEM32(ecx + 0x18) = edx;
    MEM32(ecx + 0x1C) = 0x28E;
    MEM32(ecx + 0x20) = edx;
    MEM32(ecx + 0x24) = 0x23C;
    MEM32(ecx + 0x28) = edx;
    MEM32(ecx + 0x2C) = 0x23D;
    MEM32(ecx + 0x30) = edx;
    MEM32(ecx + 0x34) = 0x23E;
    MEM32(ecx + 0x38) = edx;
    MEM32(ecx + 0x3C) = 0x2AE;
    PUSH32(esp, esi);
    MEMF(esp + 4) = xmm0; /* movss */
    esi = MEM32(esp + 4);
    edx = eax + 4;
    MEM32(edx) = esi;
    MEMF(esp + 8) = xmm1; /* movss */
    esi = MEM32(esp + 8);
    MEM32(edx + 4) = esi;
    SET_LO8(ecx, 0); /* xor self */
    MEM8(eax) = LO8(ecx);
    MEMF(esp + 0xC) = xmm0; /* movss */
    esi = MEM32(esp + 0xC);
    MEM32(edx + 8) = esi;
    MEMF(esp + 4) = xmm0; /* movss */
    esi = MEM32(esp + 4);
    MEM8(eax + 0x10) = LO8(ecx);
    edx = eax + 0x14;
    MEM32(edx) = esi;
    MEMF(esp + 8) = xmm1; /* movss */
    esi = MEM32(esp + 8);
    MEM32(edx + 4) = esi;
    MEMF(esp + 0xC) = xmm0; /* movss */
    esi = MEM32(esp + 0xC);
    MEM32(edx + 8) = esi;
    MEMF(esp + 4) = xmm0; /* movss */
    esi = MEM32(esp + 4);
    edx = eax + 0x24;
    MEM32(edx) = esi;
    MEMF(esp + 8) = xmm1; /* movss */
    esi = MEM32(esp + 8);
    MEM32(edx + 4) = esi;
    MEM8(eax + 0x20) = LO8(ecx);
    MEMF(esp + 0xC) = xmm0; /* movss */
    esi = MEM32(esp + 0xC);
    MEM32(edx + 8) = esi;
    MEMF(esp + 4) = xmm0; /* movss */
    esi = MEM32(esp + 4);
    edx = eax + 0x34;
    MEM32(edx) = esi;
    MEMF(esp + 8) = xmm1; /* movss */
    esi = MEM32(esp + 8);
    MEM32(edx + 4) = esi;
    MEMF(esp + 0xC) = xmm0; /* movss */
    esi = MEM32(esp + 0xC);
    MEM32(edx + 8) = esi;
    MEM8(eax + 0x30) = LO8(ecx);
    MEMF(esp + 4) = xmm0; /* movss */
    esi = MEM32(esp + 4);
    edx = eax + 0x44;
    MEM32(edx) = esi;
    MEMF(esp + 8) = xmm1; /* movss */
    esi = MEM32(esp + 8);
    MEM32(edx + 4) = esi;
    MEMF(esp + 0xC) = xmm0; /* movss */
    esi = MEM32(esp + 0xC);
    MEM32(edx + 8) = esi;
    MEM8(eax + 0x40) = LO8(ecx);
    MEMF(esp + 4) = xmm0; /* movss */
    MEMF(esp + 8) = xmm1; /* movss */
    MEMF(esp + 0xC) = xmm0; /* movss */
    MEM8(eax + 0x50) = LO8(ecx);
    edx = eax + 0x54;
    esi = MEM32(esp + 4);
    MEM32(edx) = esi;
    esi = MEM32(esp + 8);
    MEM32(edx + 4) = esi;
    esi = MEM32(esp + 0xC);
    MEM32(edx + 8) = esi;
    edx = eax + 0x64;
    MEMF(esp + 4) = xmm0; /* movss */
    esi = MEM32(esp + 4);
    MEM32(edx) = esi;
    MEMF(esp + 8) = xmm1; /* movss */
    esi = MEM32(esp + 8);
    MEM32(edx + 4) = esi;
    MEM8(eax + 0x60) = LO8(ecx);
    MEMF(esp + 0xC) = xmm0; /* movss */
    esi = MEM32(esp + 0xC);
    MEM32(edx + 8) = esi;
    MEM8(eax + 0x70) = LO8(ecx);
    MEMF(esp + 4) = xmm0; /* movss */
    ecx = MEM32(esp + 4);
    eax = eax + 0x74;
    MEM32(eax) = ecx;
    MEMF(esp + 8) = xmm1; /* movss */
    edx = MEM32(esp + 8);
    MEMF(esp + 0xC) = xmm0; /* movss */
    ecx = MEM32(esp + 0xC);
    MEM32(eax + 4) = edx;
    MEM32(eax + 8) = ecx;
    POP32(esp, esi);
    esp = esp + 0xC;
    esp += 4; return; /* ret */

}

/**
 * sub_0010AB20
 * Original: 0x0010AB20 - 0x0010ACEE (462 bytes, 113 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0010AB20(void)
{
    float xmm0, xmm1;

loc_0010AB20: ;
    esp = esp - 0xC;
    xmm0 = MEMF(0x648D14); /* movss */
    MEM32(ecx + 4) = 0x23F;
    xmm1 = MEMF(0x648D10); /* movss */
    edx = 1;
    MEM32(ecx) = edx;
    MEM32(ecx + 8) = edx;
    MEM32(ecx + 0xC) = 0x240;
    MEM32(ecx + 0x10) = edx;
    MEM32(ecx + 0x14) = 0x241;
    MEM32(ecx + 0x18) = edx;
    MEM32(ecx + 0x1C) = 0x28F;
    MEM32(ecx + 0x20) = edx;
    MEM32(ecx + 0x24) = 0x242;
    MEM32(ecx + 0x28) = edx;
    MEM32(ecx + 0x2C) = 0x243;
    MEM32(ecx + 0x30) = edx;
    MEM32(ecx + 0x34) = 0x244;
    MEM32(ecx + 0x38) = edx;
    MEM32(ecx + 0x3C) = 0x2AE;
    PUSH32(esp, esi);
    MEMF(esp + 4) = xmm0; /* movss */
    esi = MEM32(esp + 4);
    edx = eax + 4;
    MEM32(edx) = esi;
    MEMF(esp + 8) = xmm1; /* movss */
    esi = MEM32(esp + 8);
    MEM32(edx + 4) = esi;
    SET_LO8(ecx, 0); /* xor self */
    MEM8(eax) = LO8(ecx);
    MEMF(esp + 0xC) = xmm0; /* movss */
    esi = MEM32(esp + 0xC);
    MEM32(edx + 8) = esi;
    MEMF(esp + 4) = xmm0; /* movss */
    esi = MEM32(esp + 4);
    MEM8(eax + 0x10) = LO8(ecx);
    edx = eax + 0x14;
    MEM32(edx) = esi;
    MEMF(esp + 8) = xmm1; /* movss */
    esi = MEM32(esp + 8);
    MEM32(edx + 4) = esi;
    MEMF(esp + 0xC) = xmm0; /* movss */
    esi = MEM32(esp + 0xC);
    MEM32(edx + 8) = esi;
    MEMF(esp + 4) = xmm0; /* movss */
    esi = MEM32(esp + 4);
    edx = eax + 0x24;
    MEM32(edx) = esi;
    MEMF(esp + 8) = xmm1; /* movss */
    esi = MEM32(esp + 8);
    MEM32(edx + 4) = esi;
    MEM8(eax + 0x20) = LO8(ecx);
    MEMF(esp + 0xC) = xmm0; /* movss */
    esi = MEM32(esp + 0xC);
    MEM32(edx + 8) = esi;
    MEMF(esp + 4) = xmm0; /* movss */
    esi = MEM32(esp + 4);
    edx = eax + 0x34;
    MEM32(edx) = esi;
    MEMF(esp + 8) = xmm1; /* movss */
    esi = MEM32(esp + 8);
    MEM32(edx + 4) = esi;
    MEMF(esp + 0xC) = xmm0; /* movss */
    esi = MEM32(esp + 0xC);
    MEM32(edx + 8) = esi;
    MEM8(eax + 0x30) = LO8(ecx);
    MEMF(esp + 4) = xmm0; /* movss */
    esi = MEM32(esp + 4);
    edx = eax + 0x44;
    MEM32(edx) = esi;
    MEMF(esp + 8) = xmm1; /* movss */
    esi = MEM32(esp + 8);
    MEM32(edx + 4) = esi;
    MEMF(esp + 0xC) = xmm0; /* movss */
    esi = MEM32(esp + 0xC);
    MEM32(edx + 8) = esi;
    MEM8(eax + 0x40) = LO8(ecx);
    MEMF(esp + 4) = xmm0; /* movss */
    MEMF(esp + 8) = xmm1; /* movss */
    MEMF(esp + 0xC) = xmm0; /* movss */
    MEM8(eax + 0x50) = LO8(ecx);
    edx = eax + 0x54;
    esi = MEM32(esp + 4);
    MEM32(edx) = esi;
    esi = MEM32(esp + 8);
    MEM32(edx + 4) = esi;
    esi = MEM32(esp + 0xC);
    MEM32(edx + 8) = esi;
    edx = eax + 0x64;
    MEMF(esp + 4) = xmm0; /* movss */
    esi = MEM32(esp + 4);
    MEM32(edx) = esi;
    MEMF(esp + 8) = xmm1; /* movss */
    esi = MEM32(esp + 8);
    MEM32(edx + 4) = esi;
    MEM8(eax + 0x60) = LO8(ecx);
    MEMF(esp + 0xC) = xmm0; /* movss */
    esi = MEM32(esp + 0xC);
    MEM32(edx + 8) = esi;
    MEM8(eax + 0x70) = LO8(ecx);
    MEMF(esp + 4) = xmm0; /* movss */
    ecx = MEM32(esp + 4);
    eax = eax + 0x74;
    MEM32(eax) = ecx;
    MEMF(esp + 8) = xmm1; /* movss */
    edx = MEM32(esp + 8);
    MEMF(esp + 0xC) = xmm0; /* movss */
    ecx = MEM32(esp + 0xC);
    MEM32(eax + 4) = edx;
    MEM32(eax + 8) = ecx;
    POP32(esp, esi);
    esp = esp + 0xC;
    esp += 4; return; /* ret */

}

/**
 * sub_0010ACF0
 * Original: 0x0010ACF0 - 0x0010AEBA (458 bytes, 113 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0010ACF0(void)
{
    float xmm0, xmm1;

loc_0010ACF0: ;
    esp = esp - 0xC;
    MEM32(ecx + 4) = 0x245;
    xmm0 = MEMF(0x648D14); /* movss */
    xmm1 = MEMF(0x648D10); /* movss */
    PUSH32(esp, esi);
    esi = 1;
    MEM32(ecx) = esi;
    MEM32(ecx + 8) = esi;
    MEM32(ecx + 0xC) = 0x246;
    MEM32(ecx + 0x10) = esi;
    MEM32(ecx + 0x14) = 0x247;
    MEM32(ecx + 0x18) = esi;
    edx = 0; /* xor self */
    MEM32(ecx + 0x1C) = edx;
    MEM32(ecx + 0x20) = esi;
    MEM32(ecx + 0x24) = 0x248;
    MEM32(ecx + 0x28) = esi;
    MEM32(ecx + 0x2C) = 0x23D;
    MEM32(ecx + 0x30) = esi;
    MEM32(ecx + 0x34) = 0x24A;
    MEM32(ecx + 0x38) = esi;
    MEM32(ecx + 0x3C) = 0x2AE;
    MEM8(eax) = LO8(edx);
    MEMF(esp + 4) = xmm0; /* movss */
    esi = MEM32(esp + 4);
    ecx = eax + 4;
    MEM32(ecx) = esi;
    MEMF(esp + 8) = xmm1; /* movss */
    esi = MEM32(esp + 8);
    MEM32(ecx + 4) = esi;
    MEMF(esp + 0xC) = xmm0; /* movss */
    esi = MEM32(esp + 0xC);
    MEM32(ecx + 8) = esi;
    MEMF(esp + 4) = xmm0; /* movss */
    esi = MEM32(esp + 4);
    MEM8(eax + 0x10) = LO8(edx);
    ecx = eax + 0x14;
    MEM32(ecx) = esi;
    MEMF(esp + 8) = xmm1; /* movss */
    esi = MEM32(esp + 8);
    MEM32(ecx + 4) = esi;
    MEMF(esp + 0xC) = xmm0; /* movss */
    esi = MEM32(esp + 0xC);
    MEM32(ecx + 8) = esi;
    MEMF(esp + 4) = xmm0; /* movss */
    esi = MEM32(esp + 4);
    ecx = eax + 0x24;
    MEM32(ecx) = esi;
    MEMF(esp + 8) = xmm1; /* movss */
    esi = MEM32(esp + 8);
    MEM32(ecx + 4) = esi;
    MEM8(eax + 0x20) = LO8(edx);
    MEMF(esp + 0xC) = xmm0; /* movss */
    esi = MEM32(esp + 0xC);
    MEM32(ecx + 8) = esi;
    MEMF(esp + 4) = xmm0; /* movss */
    esi = MEM32(esp + 4);
    ecx = eax + 0x34;
    MEM32(ecx) = esi;
    MEMF(esp + 8) = xmm1; /* movss */
    esi = MEM32(esp + 8);
    MEM32(ecx + 4) = esi;
    MEMF(esp + 0xC) = xmm0; /* movss */
    esi = MEM32(esp + 0xC);
    MEM32(ecx + 8) = esi;
    MEM8(eax + 0x30) = LO8(edx);
    MEMF(esp + 4) = xmm0; /* movss */
    esi = MEM32(esp + 4);
    ecx = eax + 0x44;
    MEM32(ecx) = esi;
    MEMF(esp + 8) = xmm1; /* movss */
    esi = MEM32(esp + 8);
    MEM32(ecx + 4) = esi;
    MEMF(esp + 0xC) = xmm0; /* movss */
    esi = MEM32(esp + 0xC);
    MEM32(ecx + 8) = esi;
    MEM8(eax + 0x40) = LO8(edx);
    MEMF(esp + 4) = xmm0; /* movss */
    MEMF(esp + 8) = xmm1; /* movss */
    MEMF(esp + 0xC) = xmm0; /* movss */
    MEM8(eax + 0x50) = LO8(edx);
    ecx = eax + 0x54;
    esi = MEM32(esp + 4);
    MEM32(ecx) = esi;
    esi = MEM32(esp + 8);
    MEM32(ecx + 4) = esi;
    esi = MEM32(esp + 0xC);
    MEM32(ecx + 8) = esi;
    ecx = eax + 0x64;
    MEMF(esp + 4) = xmm0; /* movss */
    esi = MEM32(esp + 4);
    MEM32(ecx) = esi;
    MEMF(esp + 8) = xmm1; /* movss */
    esi = MEM32(esp + 8);
    MEM32(ecx + 4) = esi;
    MEM8(eax + 0x60) = LO8(edx);
    MEMF(esp + 0xC) = xmm0; /* movss */
    esi = MEM32(esp + 0xC);
    MEM32(ecx + 8) = esi;
    MEM8(eax + 0x70) = LO8(edx);
    MEMF(esp + 4) = xmm0; /* movss */
    edx = MEM32(esp + 4);
    eax = eax + 0x74;
    MEM32(eax) = edx;
    MEMF(esp + 8) = xmm1; /* movss */
    ecx = MEM32(esp + 8);
    MEMF(esp + 0xC) = xmm0; /* movss */
    edx = MEM32(esp + 0xC);
    MEM32(eax + 4) = ecx;
    MEM32(eax + 8) = edx;
    POP32(esp, esi);
    esp = esp + 0xC;
    esp += 4; return; /* ret */

}

/**
 * sub_0010AEC0
 * Original: 0x0010AEC0 - 0x0010B072 (434 bytes, 113 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0010AEC0(void)
{
    float xmm0, xmm1;

loc_0010AEC0: ;
    esp = esp - 0xC;
    xmm0 = MEMF(0x648D14); /* movss */
    xmm1 = MEMF(0x648D10); /* movss */
    PUSH32(esp, esi);
    edx = 0; /* xor self */
    MEM32(ecx + 4) = edx;
    esi = 1;
    MEM32(ecx) = esi;
    MEM32(ecx + 8) = esi;
    MEM32(ecx + 0xC) = edx;
    MEM32(ecx + 0x10) = esi;
    MEM32(ecx + 0x14) = edx;
    MEM32(ecx + 0x18) = esi;
    MEM32(ecx + 0x1C) = 0x264;
    MEM32(ecx + 0x20) = esi;
    MEM32(ecx + 0x24) = edx;
    MEM32(ecx + 0x28) = esi;
    MEM32(ecx + 0x2C) = edx;
    MEM32(ecx + 0x30) = esi;
    MEM32(ecx + 0x34) = edx;
    MEM32(ecx + 0x38) = esi;
    MEM32(ecx + 0x3C) = edx;
    MEM8(eax) = LO8(edx);
    MEMF(esp + 4) = xmm0; /* movss */
    esi = MEM32(esp + 4);
    ecx = eax + 4;
    MEM32(ecx) = esi;
    MEMF(esp + 8) = xmm1; /* movss */
    esi = MEM32(esp + 8);
    MEM32(ecx + 4) = esi;
    MEMF(esp + 0xC) = xmm0; /* movss */
    esi = MEM32(esp + 0xC);
    MEM32(ecx + 8) = esi;
    MEMF(esp + 4) = xmm0; /* movss */
    esi = MEM32(esp + 4);
    MEM8(eax + 0x10) = LO8(edx);
    ecx = eax + 0x14;
    MEM32(ecx) = esi;
    MEMF(esp + 8) = xmm1; /* movss */
    esi = MEM32(esp + 8);
    MEM32(ecx + 4) = esi;
    MEMF(esp + 0xC) = xmm0; /* movss */
    esi = MEM32(esp + 0xC);
    MEM32(ecx + 8) = esi;
    MEMF(esp + 4) = xmm0; /* movss */
    esi = MEM32(esp + 4);
    ecx = eax + 0x24;
    MEM32(ecx) = esi;
    MEMF(esp + 8) = xmm1; /* movss */
    esi = MEM32(esp + 8);
    MEM32(ecx + 4) = esi;
    MEM8(eax + 0x20) = LO8(edx);
    MEMF(esp + 0xC) = xmm0; /* movss */
    esi = MEM32(esp + 0xC);
    MEM32(ecx + 8) = esi;
    MEMF(esp + 4) = xmm0; /* movss */
    esi = MEM32(esp + 4);
    ecx = eax + 0x34;
    MEM32(ecx) = esi;
    MEMF(esp + 8) = xmm1; /* movss */
    esi = MEM32(esp + 8);
    MEM32(ecx + 4) = esi;
    MEMF(esp + 0xC) = xmm0; /* movss */
    esi = MEM32(esp + 0xC);
    MEM32(ecx + 8) = esi;
    MEM8(eax + 0x30) = LO8(edx);
    MEMF(esp + 4) = xmm0; /* movss */
    esi = MEM32(esp + 4);
    ecx = eax + 0x44;
    MEM32(ecx) = esi;
    MEMF(esp + 8) = xmm1; /* movss */
    esi = MEM32(esp + 8);
    MEM32(ecx + 4) = esi;
    MEMF(esp + 0xC) = xmm0; /* movss */
    esi = MEM32(esp + 0xC);
    MEM32(ecx + 8) = esi;
    MEM8(eax + 0x40) = LO8(edx);
    MEMF(esp + 4) = xmm0; /* movss */
    MEMF(esp + 8) = xmm1; /* movss */
    MEMF(esp + 0xC) = xmm0; /* movss */
    MEM8(eax + 0x50) = LO8(edx);
    ecx = eax + 0x54;
    esi = MEM32(esp + 4);
    MEM32(ecx) = esi;
    esi = MEM32(esp + 8);
    MEM32(ecx + 4) = esi;
    esi = MEM32(esp + 0xC);
    MEM32(ecx + 8) = esi;
    ecx = eax + 0x64;
    MEMF(esp + 4) = xmm0; /* movss */
    esi = MEM32(esp + 4);
    MEM32(ecx) = esi;
    MEMF(esp + 8) = xmm1; /* movss */
    esi = MEM32(esp + 8);
    MEM32(ecx + 4) = esi;
    MEM8(eax + 0x60) = LO8(edx);
    MEMF(esp + 0xC) = xmm0; /* movss */
    esi = MEM32(esp + 0xC);
    MEM32(ecx + 8) = esi;
    MEM8(eax + 0x70) = LO8(edx);
    MEMF(esp + 4) = xmm0; /* movss */
    edx = MEM32(esp + 4);
    eax = eax + 0x74;
    MEM32(eax) = edx;
    MEMF(esp + 8) = xmm1; /* movss */
    ecx = MEM32(esp + 8);
    MEMF(esp + 0xC) = xmm0; /* movss */
    edx = MEM32(esp + 0xC);
    MEM32(eax + 4) = ecx;
    MEM32(eax + 8) = edx;
    POP32(esp, esi);
    esp = esp + 0xC;
    esp += 4; return; /* ret */

}

/**
 * sub_0010B080
 * Original: 0x0010B080 - 0x0010B232 (434 bytes, 113 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0010B080(void)
{
    float xmm0, xmm1;

loc_0010B080: ;
    esp = esp - 0xC;
    xmm0 = MEMF(0x648D14); /* movss */
    xmm1 = MEMF(0x648D10); /* movss */
    PUSH32(esp, esi);
    edx = 0; /* xor self */
    MEM32(ecx + 4) = edx;
    esi = 1;
    MEM32(ecx) = esi;
    MEM32(ecx + 8) = esi;
    MEM32(ecx + 0xC) = edx;
    MEM32(ecx + 0x10) = esi;
    MEM32(ecx + 0x14) = edx;
    MEM32(ecx + 0x18) = esi;
    MEM32(ecx + 0x1C) = 0x290;
    MEM32(ecx + 0x20) = esi;
    MEM32(ecx + 0x24) = edx;
    MEM32(ecx + 0x28) = esi;
    MEM32(ecx + 0x2C) = edx;
    MEM32(ecx + 0x30) = esi;
    MEM32(ecx + 0x34) = edx;
    MEM32(ecx + 0x38) = esi;
    MEM32(ecx + 0x3C) = edx;
    MEM8(eax) = LO8(edx);
    MEMF(esp + 4) = xmm0; /* movss */
    esi = MEM32(esp + 4);
    ecx = eax + 4;
    MEM32(ecx) = esi;
    MEMF(esp + 8) = xmm1; /* movss */
    esi = MEM32(esp + 8);
    MEM32(ecx + 4) = esi;
    MEMF(esp + 0xC) = xmm0; /* movss */
    esi = MEM32(esp + 0xC);
    MEM32(ecx + 8) = esi;
    MEMF(esp + 4) = xmm0; /* movss */
    esi = MEM32(esp + 4);
    MEM8(eax + 0x10) = LO8(edx);
    ecx = eax + 0x14;
    MEM32(ecx) = esi;
    MEMF(esp + 8) = xmm1; /* movss */
    esi = MEM32(esp + 8);
    MEM32(ecx + 4) = esi;
    MEMF(esp + 0xC) = xmm0; /* movss */
    esi = MEM32(esp + 0xC);
    MEM32(ecx + 8) = esi;
    MEMF(esp + 4) = xmm0; /* movss */
    esi = MEM32(esp + 4);
    ecx = eax + 0x24;
    MEM32(ecx) = esi;
    MEMF(esp + 8) = xmm1; /* movss */
    esi = MEM32(esp + 8);
    MEM32(ecx + 4) = esi;
    MEM8(eax + 0x20) = LO8(edx);
    MEMF(esp + 0xC) = xmm0; /* movss */
    esi = MEM32(esp + 0xC);
    MEM32(ecx + 8) = esi;
    MEMF(esp + 4) = xmm0; /* movss */
    esi = MEM32(esp + 4);
    ecx = eax + 0x34;
    MEM32(ecx) = esi;
    MEMF(esp + 8) = xmm1; /* movss */
    esi = MEM32(esp + 8);
    MEM32(ecx + 4) = esi;
    MEMF(esp + 0xC) = xmm0; /* movss */
    esi = MEM32(esp + 0xC);
    MEM32(ecx + 8) = esi;
    MEM8(eax + 0x30) = LO8(edx);
    MEMF(esp + 4) = xmm0; /* movss */
    esi = MEM32(esp + 4);
    ecx = eax + 0x44;
    MEM32(ecx) = esi;
    MEMF(esp + 8) = xmm1; /* movss */
    esi = MEM32(esp + 8);
    MEM32(ecx + 4) = esi;
    MEMF(esp + 0xC) = xmm0; /* movss */
    esi = MEM32(esp + 0xC);
    MEM32(ecx + 8) = esi;
    MEM8(eax + 0x40) = LO8(edx);
    MEMF(esp + 4) = xmm0; /* movss */
    MEMF(esp + 8) = xmm1; /* movss */
    MEMF(esp + 0xC) = xmm0; /* movss */
    MEM8(eax + 0x50) = LO8(edx);
    ecx = eax + 0x54;
    esi = MEM32(esp + 4);
    MEM32(ecx) = esi;
    esi = MEM32(esp + 8);
    MEM32(ecx + 4) = esi;
    esi = MEM32(esp + 0xC);
    MEM32(ecx + 8) = esi;
    ecx = eax + 0x64;
    MEMF(esp + 4) = xmm0; /* movss */
    esi = MEM32(esp + 4);
    MEM32(ecx) = esi;
    MEMF(esp + 8) = xmm1; /* movss */
    esi = MEM32(esp + 8);
    MEM32(ecx + 4) = esi;
    MEM8(eax + 0x60) = LO8(edx);
    MEMF(esp + 0xC) = xmm0; /* movss */
    esi = MEM32(esp + 0xC);
    MEM32(ecx + 8) = esi;
    MEM8(eax + 0x70) = LO8(edx);
    MEMF(esp + 4) = xmm0; /* movss */
    edx = MEM32(esp + 4);
    eax = eax + 0x74;
    MEM32(eax) = edx;
    MEMF(esp + 8) = xmm1; /* movss */
    ecx = MEM32(esp + 8);
    MEMF(esp + 0xC) = xmm0; /* movss */
    edx = MEM32(esp + 0xC);
    MEM32(eax + 4) = ecx;
    MEM32(eax + 8) = edx;
    POP32(esp, esi);
    esp = esp + 0xC;
    esp += 4; return; /* ret */

}

/**
 * sub_0010B240
 * Original: 0x0010B240 - 0x0010B3EE (430 bytes, 113 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0010B240(void)
{
    float xmm0, xmm1;

loc_0010B240: ;
    esp = esp - 0xC;
    xmm0 = MEMF(0x648D14); /* movss */
    xmm1 = MEMF(0x648D10); /* movss */
    PUSH32(esp, esi);
    edx = 0; /* xor self */
    MEM32(ecx + 4) = edx;
    esi = 1;
    MEM32(ecx) = esi;
    MEM32(ecx + 8) = esi;
    MEM32(ecx + 0xC) = edx;
    MEM32(ecx + 0x10) = esi;
    MEM32(ecx + 0x14) = edx;
    MEM32(ecx + 0x18) = esi;
    MEM32(ecx + 0x1C) = edx;
    MEM32(ecx + 0x20) = esi;
    MEM32(ecx + 0x24) = edx;
    MEM32(ecx + 0x28) = esi;
    MEM32(ecx + 0x2C) = edx;
    MEM32(ecx + 0x30) = esi;
    MEM32(ecx + 0x34) = edx;
    MEM32(ecx + 0x38) = esi;
    MEM32(ecx + 0x3C) = edx;
    MEM8(eax) = LO8(edx);
    MEMF(esp + 4) = xmm0; /* movss */
    esi = MEM32(esp + 4);
    ecx = eax + 4;
    MEM32(ecx) = esi;
    MEMF(esp + 8) = xmm1; /* movss */
    esi = MEM32(esp + 8);
    MEM32(ecx + 4) = esi;
    MEMF(esp + 0xC) = xmm0; /* movss */
    esi = MEM32(esp + 0xC);
    MEM32(ecx + 8) = esi;
    MEMF(esp + 4) = xmm0; /* movss */
    esi = MEM32(esp + 4);
    MEM8(eax + 0x10) = LO8(edx);
    ecx = eax + 0x14;
    MEM32(ecx) = esi;
    MEMF(esp + 8) = xmm1; /* movss */
    esi = MEM32(esp + 8);
    MEM32(ecx + 4) = esi;
    MEMF(esp + 0xC) = xmm0; /* movss */
    esi = MEM32(esp + 0xC);
    MEM32(ecx + 8) = esi;
    MEMF(esp + 4) = xmm0; /* movss */
    esi = MEM32(esp + 4);
    ecx = eax + 0x24;
    MEM32(ecx) = esi;
    MEMF(esp + 8) = xmm1; /* movss */
    esi = MEM32(esp + 8);
    MEM32(ecx + 4) = esi;
    MEM8(eax + 0x20) = LO8(edx);
    MEMF(esp + 0xC) = xmm0; /* movss */
    esi = MEM32(esp + 0xC);
    MEM32(ecx + 8) = esi;
    MEMF(esp + 4) = xmm0; /* movss */
    esi = MEM32(esp + 4);
    ecx = eax + 0x34;
    MEM32(ecx) = esi;
    MEMF(esp + 8) = xmm1; /* movss */
    esi = MEM32(esp + 8);
    MEM32(ecx + 4) = esi;
    MEMF(esp + 0xC) = xmm0; /* movss */
    esi = MEM32(esp + 0xC);
    MEM32(ecx + 8) = esi;
    MEM8(eax + 0x30) = LO8(edx);
    MEMF(esp + 4) = xmm0; /* movss */
    esi = MEM32(esp + 4);
    ecx = eax + 0x44;
    MEM32(ecx) = esi;
    MEMF(esp + 8) = xmm1; /* movss */
    esi = MEM32(esp + 8);
    MEM32(ecx + 4) = esi;
    MEMF(esp + 0xC) = xmm0; /* movss */
    esi = MEM32(esp + 0xC);
    MEM32(ecx + 8) = esi;
    MEM8(eax + 0x40) = LO8(edx);
    MEMF(esp + 4) = xmm0; /* movss */
    MEMF(esp + 8) = xmm1; /* movss */
    MEMF(esp + 0xC) = xmm0; /* movss */
    MEM8(eax + 0x50) = LO8(edx);
    ecx = eax + 0x54;
    esi = MEM32(esp + 4);
    MEM32(ecx) = esi;
    esi = MEM32(esp + 8);
    MEM32(ecx + 4) = esi;
    esi = MEM32(esp + 0xC);
    MEM32(ecx + 8) = esi;
    ecx = eax + 0x64;
    MEMF(esp + 4) = xmm0; /* movss */
    esi = MEM32(esp + 4);
    MEM32(ecx) = esi;
    MEMF(esp + 8) = xmm1; /* movss */
    esi = MEM32(esp + 8);
    MEM32(ecx + 4) = esi;
    MEM8(eax + 0x60) = LO8(edx);
    MEMF(esp + 0xC) = xmm0; /* movss */
    esi = MEM32(esp + 0xC);
    MEM32(ecx + 8) = esi;
    MEM8(eax + 0x70) = LO8(edx);
    MEMF(esp + 4) = xmm0; /* movss */
    edx = MEM32(esp + 4);
    eax = eax + 0x74;
    MEM32(eax) = edx;
    MEMF(esp + 8) = xmm1; /* movss */
    ecx = MEM32(esp + 8);
    MEMF(esp + 0xC) = xmm0; /* movss */
    edx = MEM32(esp + 0xC);
    MEM32(eax + 4) = ecx;
    MEM32(eax + 8) = edx;
    POP32(esp, esi);
    esp = esp + 0xC;
    esp += 4; return; /* ret */

}

/**
 * sub_0010B3F0
 * Original: 0x0010B3F0 - 0x0010B4CF (223 bytes, 46 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0010B3F0(void)
{
    float xmm0;

loc_0010B3F0: ;
    esp = esp - 0x490;
    xmm0 = MEMF(0x648D38); /* movss */
    MEMF(esp + 4) = xmm0; /* movss */
    xmm0 = MEMF(0x648D20); /* movss */
    MEMF(esp + 8) = xmm0; /* movss */
    xmm0 = MEMF(0x648CE0); /* movss */
    eax = esp + 0x190;
    ecx = esp + 0x10;
    MEMF(esp + 0xC) = xmm0; /* movss */
    PUSH32(esp, 0); sub_0010A950(); /* call 0x0010A950 */

loc_0010B430: ;
    eax = esp + 0x210;
    ecx = esp + 0x50;
    PUSH32(esp, 0); sub_0010AB20(); /* call 0x0010AB20 */

loc_0010B440: ;
    eax = esp + 0x290;
    ecx = esp + 0x90;
    PUSH32(esp, 0); sub_0010ACF0(); /* call 0x0010ACF0 */

loc_0010B453: ;
    eax = esp + 0x310;
    ecx = esp + 0xD0;
    PUSH32(esp, 0); sub_0010AEC0(); /* call 0x0010AEC0 */

loc_0010B466: ;
    eax = esp + 0x390;
    ecx = esp + 0x110;
    PUSH32(esp, 0); sub_0010B080(); /* call 0x0010B080 */

loc_0010B479: ;
    eax = esp + 0x410;
    ecx = esp + 0x150;
    PUSH32(esp, 0); sub_0010B240(); /* call 0x0010B240 */

loc_0010B48C: ;
    eax = esp + 3;
    PUSH32(esp, eax);
    PUSH32(esp, 0x771D10);
    PUSH32(esp, 0x6B4298);
    PUSH32(esp, 0);
    ecx = esp + 0x1A0;
    PUSH32(esp, ecx);
    ecx = MEM32(0x771B78);
    edx = esp + 0x24;
    PUSH32(esp, edx);
    PUSH32(esp, 0x30);
    PUSH32(esp, 0xFFFFFFFFu);
    eax = esp + 0x24;
    PUSH32(esp, eax);
    PUSH32(esp, 0);
    PUSH32(esp, 1);
    PUSH32(esp, ecx);
    eax = 0x40;
    PUSH32(esp, 0); sub_000EC290(); /* call 0x000EC290 */

loc_0010B4C8: ;
    esp = esp + 0x490;
    esp += 4; return; /* ret */

}

/**
 * sub_0010B4D0
 * Original: 0x0010B4D0 - 0x0010B518 (72 bytes, 25 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0010B4D0(void)
{
    uint32_t ebp;
    int _flags = 0; /* fallback flag var */
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_0010B4D0: ;
    SET_LO16(eax, MEM16(0x6B4298));
    (void)0; /* cmp LO16(eax), 0xFFFF - flags set for next jcc */
    PUSH32(esp, ebp);
    PUSH32(esp, edi);
    edi = MEM32(0x771B78);
    ebp = edi;
    if (CMP_EQ(LO16(eax), 0xFFFF)) goto loc_0010B50C; /* je: equal / zero */

loc_0010B4E6: ;
    eax = ZX16(LO16(eax));
    PUSH32(esp, ebx);
    ebx = eax;
    PUSH32(esp, esi);
    eax = eax & 0xFFF;
    esi = eax;
    ebx = ebx >> 0xC;
    PUSH32(esp, esi);
    PUSH32(esp, 0); sub_000EC120(); /* call 0x000EC120 */

loc_0010B4FD: ;
    ebx = ebx << 5;
    ebx = ebx + esi;
    POP32(esp, esi);
    MEM8(ebx + ebp + 0x61C) = 0;
    POP32(esp, ebx);

loc_0010B50C: ;
    POP32(esp, edi);
    MEM16(0x6B4298) = 0xFFFF;
    POP32(esp, ebp);
    esp += 4; return; /* ret */

}

/**
 * sub_0010B520
 * Original: 0x0010B520 - 0x0010B554 (52 bytes, 15 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0010B520(void)
{
    uint32_t ebp;
    int _flags = 0; /* fallback flag var */
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_0010B520: ;
    eax = MEM32(eax + 0x568);
    if (TEST_Z(eax, eax)) { sub_0010B554(); return; } /* je: equal / zero */

loc_0010B52A: ;
    eax = MEM32(eax + 0x444);
    if (TEST_Z(eax, eax)) { sub_0010B554(); return; } /* je: equal / zero */

loc_0010B534: ;
    eax = MEM32(eax + 8);
    eax--;
    if (CMP_A(eax, 0x21)) { sub_0010B554(); return; } /* ja: above (unsigned >) */

loc_0010B53D: ;
    edx = ZX8(MEM8(eax + 0x10B560));
    g_seh_ebp = ebp; RECOMP_ITAIL(MEM32(edx * 4 + 0x10B558)); return; /* indirect tail jmp */

    MEM32(ecx) = 1;
    SET_LO8(eax, 1);
    esp += 4; return; /* ret */

}

/**
 * sub_0010B680
 * Original: 0x0010B680 - 0x0010B6C4 (68 bytes, 23 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0010B680(void)
{
    uint32_t ebp;
    int _flags = 0; /* fallback flag var */
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_0010B680: ;
    edx = MEM32(eax + 0x238);
    edx = MEM32(edx);
    edx = edx - 0;
    if ((edx == 0)) goto loc_0010B6AB; /* je: equal / zero */

loc_0010B68D: ;
    edx--;
    if ((edx != 0)) goto loc_0010B6BC; /* jne: not equal / not zero */

loc_0010B690: ;
    edx = MEM32(0x6BD92C);
    edx = MEM32(edx + 4);
    edx = edx - 0;
    if ((edx == 0)) goto loc_0010B6A6; /* je: equal / zero */

loc_0010B69E: ;
    edx--;
    if ((edx != 0)) goto loc_0010B6BC; /* jne: not equal / not zero */

loc_0010B6A1: ;
    g_seh_ebp = ebp; sub_0010B600(); return; /* tail jmp 0x0010B600 */

loc_0010B6A6: ;
    g_seh_ebp = ebp; sub_0010B590(); return; /* tail jmp 0x0010B590 */

loc_0010B6AB: ;
    edx = MEM32(0x6BD92C);
    edx = MEM32(edx + 4);
    edx = edx - 0;
    if ((edx == 0)) { sub_0010B6C4(); return; } /* je: equal / zero */

loc_0010B6B9: ;
    edx--;
    if ((edx == 0)) goto loc_0010B6BF; /* je: equal / zero */

loc_0010B6BC: ;
    SET_LO8(eax, 0); /* xor self */
    esp += 4; return; /* ret */

loc_0010B6BF: ;
    g_seh_ebp = ebp; sub_0010B520(); return; /* tail jmp 0x0010B520 */

}

/**
 * sub_0010B6D0
 * Original: 0x0010B6D0 - 0x0010B6DF (15 bytes, 5 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0010B6D0(void)
{
    int _flags = 0; /* fallback flag var */

loc_0010B6D0: ;
    if (CMP_NE(MEM32(eax + 0x64), 1)) { sub_0010B6DF(); return; } /* jne: not equal / not zero */

loc_0010B6D6: ;
    MEM32(ecx) = 1;
    SET_LO8(eax, 1);
    esp += 4; return; /* ret */

}

/**
 * sub_0010B730
 * Original: 0x0010B730 - 0x0010B7F2 (194 bytes, 51 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0010B730(void)
{
    uint32_t ebp;
    int _flags = 0; /* fallback flag var */
    float xmm0;
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_0010B730: ;
    edx = MEM32(esp + 4);
    edx = edx + 0xFFFFFFFDu;
    if (CMP_A(edx, 0x17)) { sub_0010B7F2(); return; } /* ja: above (unsigned >) */

loc_0010B740: ;
    edx = ZX8(MEM8(edx + 0x10B818));
    g_seh_ebp = ebp; RECOMP_ITAIL(MEM32(edx * 4 + 0x10B7F8)); return; /* indirect tail jmp */

    xmm0 = MEMF(0x648D14); /* movss */
    MEM32(eax) = 2;
    MEMF(ecx) = xmm0; /* movss */
    SET_LO8(eax, 1);
    esp += 4; return; /* ret */

    if (CMP_EQ(edx, 0x14)) goto loc_0010B793; /* je: equal / zero */

loc_0010B783: ;
    xmm0 = 0.0f; /* xorps self = zero */
    MEM32(eax) = 4;
    MEMF(ecx) = xmm0; /* movss */
    SET_LO8(eax, 1);
    esp += 4; return; /* ret */

loc_0010B793: ;
    xmm0 = 0.0f; /* xorps self = zero */
    MEM32(eax) = 3;
    MEMF(ecx) = xmm0; /* movss */
    SET_LO8(eax, 1);
    esp += 4; return; /* ret */

}

/**
 * sub_0010B830
 * Original: 0x0010B830 - 0x0010B84E (30 bytes, 15 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0010B830(void)
{
    uint32_t ebp;
    int _flags = 0; /* fallback flag var */
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_0010B830: ;
    PUSH32(esp, ecx);
    eax = MEM32(esp + 8);
    eax = MEM32(eax + 0x10);
    PUSH32(esp, ebx);
    PUSH32(esp, ebp);
    PUSH32(esp, esi);
    PUSH32(esp, edi);
    edi = 0; /* xor self */
    esi = 0; /* xor self */
    ebx = 0; /* xor self */
    if (CMP_EQ(eax, edi)) { sub_0010B84E(); return; } /* je: equal / zero */

loc_0010B846: ;
    ecx = MEM32(eax);
    MEM32(esp + 0x10) = ecx;
    g_seh_ebp = ebp; sub_0010B852(); return; /* tail jmp 0x0010B852 */

}

/**
 * sub_0010B900
 * Original: 0x0010B900 - 0x0010B97E (126 bytes, 38 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0010B900(void)
{
    uint32_t ebp;
    float xmm0, xmm1, xmm2, xmm3;

loc_0010B900: ;
    PUSH32(esp, ebp);
    ebp = esp;
    esp = esp & 0xFFFFFFF0u;
    esp = esp - 0x4C;
    PUSH32(esp, esi);
    esi = MEM32(ebp + 8);
    PUSH32(esp, eax);
    eax = esp + 0x14;
    PUSH32(esp, 0); sub_002F7870(); /* call 0x002F7870 */

loc_0010B917: ;
    xmm0 = 0.0f; /* xorps self = zero */
    MEMF(esi) = xmm0; /* movss */
    MEMF(esi + 4) = xmm0; /* movss */
    xmm0 = MEMF(0x648D14); /* movss */
    ecx = eax;
    esp = esp + 4;
    MEMF(esi + 8) = xmm0; /* movss */
    MEM32(esp + 0xC) = ecx;
    eax = MEM32(ebp + 8);
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
    eax = MEM32(ebp + 8);
    /* addps: xmm2 += xmm3 (packed 4xfloat) */
    MEMD(eax) = xmm2; /* movlps */
    /* TODO: movhlps xmm2, xmm2 */
    MEMF(eax + 8) = xmm2; /* movss */
    POP32(esp, esi);
    esp = ebp;
    POP32(esp, ebp);
    esp += 4; return; /* ret */

}

/**
 * sub_0010B980
 * Original: 0x0010B980 - 0x0010B9F7 (119 bytes, 41 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0010B980(void)
{
    uint32_t ebp;
    int _flags = 0; /* fallback flag var */
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_0010B980: ;
    esp = esp - 0x18;
    eax = MEM32(edi + 0x4B0);
    edx = MEM32(edi + 0x3C4);
    ecx = MEM32(eax + 0x24);
    edx = MEM32(edx);
    eax = MEM32(ecx + 8);
    edx = MEM32(edx + 0x34);
    ecx = MEM32(edi + 0x3C8);
    PUSH32(esp, ebx);
    ebx = MEM32(esp + 0x24);
    PUSH32(esp, ebp);
    ebp = MEM32(esp + 0x34);
    PUSH32(esp, esi);
    esi = MEM32(esp + 0x40);
    PUSH32(esp, esi);
    PUSH32(esp, ebp);
    PUSH32(esp, ebx);
    PUSH32(esp, edx);
    PUSH32(esp, ecx);
    PUSH32(esp, eax);
    PUSH32(esp, 0); sub_0010B830(); /* call 0x0010B830 */

loc_0010B9BA: ;
    ebx = MEM32(esp + 0x48);
    MEM8(esp + 0x27) = LO8(eax);
    eax = MEM32(edi + 0x4B0);
    ecx = MEM32(eax + 0x24);
    edx = MEM32(ecx + 8);
    eax = MEM32(edx + 0x10);
    ecx = esp + 0x28;
    PUSH32(esp, ecx);
    PUSH32(esp, 1);
    PUSH32(esp, 0);
    PUSH32(esp, 0); sub_00415EC0(); /* call 0x00415EC0 */

loc_0010B9DF: ;
    esp = esp + 0x24;
    if (TEST_Z(eax, eax)) { sub_0010B9F7(); return; } /* je: equal / zero */

loc_0010B9E6: ;
    eax = MEM32(esp + 0x10);
    if (TEST_Z(eax, eax)) { sub_0010B9F7(); return; } /* je: equal / zero */

loc_0010B9EE: ;
    edx = MEM32(eax + 8);
    MEM32(esp + 0x10) = edx;
    g_seh_ebp = ebp; sub_0010B9FF(); return; /* tail jmp 0x0010B9FF */

}

/**
 * sub_0010BB20
 * Original: 0x0010BB20 - 0x0010BC64 (324 bytes, 118 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0010BB20(void)
{
    uint32_t ebp;
    int _flags = 0; /* fallback flag var */
    float xmm0;
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_0010BB20: ;
    edx = MEM32(esp + 0xC);
    PUSH32(esp, ebx);
    ebx = MEM32(esp + 0x18);
    PUSH32(esp, ebp);
    ebp = MEM32(esp + 0xC);
    ebp--;
    (void)0; /* cmp ebp, 7 - flags set for next jcc */
    PUSH32(esp, edi);
    edi = MEM32(esp + 0x14);
    MEM32(ebx) = 0;
    if (CMP_A(ebp, 7)) { sub_0010BC64(); return; } /* ja: above (unsigned >) */

loc_0010BB43: ;
    g_seh_ebp = ebp; RECOMP_ITAIL(MEM32(ebp * 4 + 0x10BC6C)); return; /* indirect tail jmp */

    (void)0; /* cmp MEM32(esp + 0x1C), 3 - flags set for next jcc */
    PUSH32(esp, esi);
    PUSH32(esp, eax);
    PUSH32(esp, ecx);
    PUSH32(esp, 0x5F3234);
    if (CMP_NE(MEM32(esp + 0x1C), 3)) goto loc_0010BB82; /* jne: not equal / not zero */

loc_0010BB59: ;
    PUSH32(esp, 0x5F3D08);
    PUSH32(esp, 0x5F3CFC);
    PUSH32(esp, edx);
    PUSH32(esp, 0); sub_0010B980(); /* call 0x0010B980 */

loc_0010BB69: ;
    xmm0 = MEMF(esi); /* movss */
    xmm0 = xmm0 * MEMF(0x649BAC); /* mulss */
    esp = esp + 0x1C;
    POP32(esp, edi);
    POP32(esp, ebp);
    MEMF(esi) = xmm0; /* movss */
    SET_LO8(eax, 1);
    POP32(esp, ebx);
    esp += 4; return; /* ret */

loc_0010BB82: ;
    PUSH32(esp, 0x5E7494);
    PUSH32(esp, 0x5F3CFC);
    PUSH32(esp, edx);
    PUSH32(esp, 0); sub_0010B980(); /* call 0x0010B980 */

loc_0010BB92: ;
    esp = esp + 0x1C;
    POP32(esp, edi);
    POP32(esp, ebp);
    SET_LO8(eax, 1);
    POP32(esp, ebx);
    esp += 4; return; /* ret */

    PUSH32(esp, 0x5F3CF4);
    PUSH32(esp, 0x5F3CE8);
    PUSH32(esp, edx);
    PUSH32(esp, 0); sub_0010B980(); /* call 0x0010B980 */

loc_0010BBBA: ;
    xmm0 = MEMF(esi); /* movss */
    xmm0 = xmm0 * MEMF(0x649BAC); /* mulss */
    esp = esp + 0x1C;
    MEMF(esi) = xmm0; /* movss */
    eax = MEM32(ebx);
    POP32(esp, edi);
    eax = eax | 1;
    MEM32(ebx) = eax;
    POP32(esp, ebp);
    SET_LO8(eax, 1);
    POP32(esp, ebx);
    esp += 4; return; /* ret */

loc_0010BBDA: ;
    PUSH32(esp, 0x5F3628);
    PUSH32(esp, 0x5F3CE8);
    goto loc_0010BC4E;

    PUSH32(esp, esi);
    PUSH32(esp, eax);
    PUSH32(esp, ecx);
    PUSH32(esp, 0x5F3CDC);
    PUSH32(esp, 0x5F3CD0);
    PUSH32(esp, 0x5F3CBC);
    PUSH32(esp, edx);
    PUSH32(esp, 0); sub_0010B980(); /* call 0x0010B980 */

loc_0010BBFE: ;
    esp = esp + 0x1C;
    POP32(esp, edi);
    POP32(esp, ebp);
    SET_LO8(eax, 1);
    POP32(esp, ebx);
    esp += 4; return; /* ret */

    PUSH32(esp, esi);
    PUSH32(esp, eax);
    PUSH32(esp, ecx);
    PUSH32(esp, 0x5F3C80);
    PUSH32(esp, 0x5F0704);
    PUSH32(esp, 0x5F3C6C);
    PUSH32(esp, edx);
    PUSH32(esp, 0); sub_0010B980(); /* call 0x0010B980 */

loc_0010BC33: ;
    esp = esp + 0x1C;
    POP32(esp, edi);
    POP32(esp, ebp);
    SET_LO8(eax, 1);
    POP32(esp, ebx);
    esp += 4; return; /* ret */

loc_0010BC4E: ;
    PUSH32(esp, edx);
    PUSH32(esp, 0); sub_0010B980(); /* call 0x0010B980 */

loc_0010BC54: ;
    eax = MEM32(ebx);
    esp = esp + 0x1C;
    POP32(esp, edi);
    eax = eax | 1;
    MEM32(ebx) = eax;
    POP32(esp, ebp);
    SET_LO8(eax, 1);
    POP32(esp, ebx);
    esp += 4; return; /* ret */

}

/**
 * sub_0010BC90
 * Original: 0x0010BC90 - 0x0010BE84 (500 bytes, 157 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0010BC90(void)
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

loc_0010BC90: ;
    PUSH32(esp, ebp);
    ebp = esp;
    esp = esp & 0xFFFFFFF0u;
    esp = esp - 0x84;
    PUSH32(esp, ebx);
    PUSH32(esp, esi);
    esi = MEM32(ebp + 8);
    eax = MEM32(esi + 0x3C8);
    (void)0; /* test eax, eax - flags set for next jcc */
    PUSH32(esp, edi);
    if (TEST_Z(eax, eax)) goto loc_0010BE7A; /* je: equal / zero */

loc_0010BCB0: ;
    edi = esi + 0x2A0;
    if (TEST_Z(edi, edi)) goto loc_0010BE7A; /* je: equal / zero */

loc_0010BCBE: ;
    xmm1 = MEMF(edi + 0x40); /* movss */
    xmm0 = MEMF(0x648F40); /* movss */
    /* ucomiss xmm1, xmm0 - sets EFLAGS */
    /* lahf - load AH from flags (used in FPU compare idiom) */
    if (1 /* jp after test - parity */) goto loc_0010BD5C; /* jp: parity */

loc_0010BCD8: ;
    xmm1 = MEMF(edi + 0x44); /* movss */
    /* ucomiss xmm1, xmm0 - sets EFLAGS */
    /* lahf - load AH from flags (used in FPU compare idiom) */
    if (1 /* jp after test - parity */) goto loc_0010BD5C; /* jp: parity */

loc_0010BCE6: ;
    xmm1 = MEMF(edi + 0x48); /* movss */
    /* ucomiss xmm1, xmm0 - sets EFLAGS */
    /* lahf - load AH from flags (used in FPU compare idiom) */
    if (1 /* jp after test - parity */) goto loc_0010BD5C; /* jp: parity */

loc_0010BCF4: ;
    xmm2 = MEMF(edi + 0x4C); /* movss */
    xmm1 = MEMF(0x648F3C); /* movss */
    /* ucomiss xmm2, xmm1 - sets EFLAGS */
    /* lahf - load AH from flags (used in FPU compare idiom) */
    if (1 /* jp after test - parity */) goto loc_0010BD5C; /* jp: parity */

loc_0010BD0A: ;
    xmm2 = MEMF(edi + 0x50); /* movss */
    /* ucomiss xmm2, xmm0 - sets EFLAGS */
    /* lahf - load AH from flags (used in FPU compare idiom) */
    if (1 /* jp after test - parity */) goto loc_0010BD5C; /* jp: parity */

loc_0010BD18: ;
    xmm2 = MEMF(edi + 0x54); /* movss */
    /* ucomiss xmm2, xmm0 - sets EFLAGS */
    /* lahf - load AH from flags (used in FPU compare idiom) */
    if (1 /* jp after test - parity */) goto loc_0010BD5C; /* jp: parity */

loc_0010BD26: ;
    xmm2 = MEMF(edi + 0x58); /* movss */
    /* ucomiss xmm2, xmm1 - sets EFLAGS */
    /* lahf - load AH from flags (used in FPU compare idiom) */
    if (1 /* jp after test - parity */) goto loc_0010BD5C; /* jp: parity */

loc_0010BD34: ;
    xmm2 = MEMF(edi + 0x5C); /* movss */
    /* ucomiss xmm2, xmm0 - sets EFLAGS */
    /* lahf - load AH from flags (used in FPU compare idiom) */
    if (1 /* jp after test - parity */) goto loc_0010BD5C; /* jp: parity */

loc_0010BD42: ;
    xmm0 = MEMF(edi + 0x60); /* movss */
    /* ucomiss xmm0, xmm1 - sets EFLAGS */
    /* lahf - load AH from flags (used in FPU compare idiom) */
    if (1 /* jp after test - parity */) goto loc_0010BD5C; /* jp: parity */

loc_0010BD50: ;
    eax = 0xFFFFFFFFu;
    POP32(esp, edi);
    POP32(esp, esi);
    POP32(esp, ebx);
    esp = ebp;
    POP32(esp, ebp);
    esp += 4; return; /* ret */

loc_0010BD5C: ;
    ebx = MEM32(edi + 0x88);
    if (TEST_Z(ebx, ebx)) goto loc_0010BE7A; /* je: equal / zero */

loc_0010BD6A: ;
    fp_push(MEMF(edi + 0x78)); /* fld float */
    eax = edi + 0x70;
    fp_st1() += fp_top(); fp_pop(); /* fadd */
    MEM32(esp + 0x20) = eax;
    fp_st1() *= fp_top(); fp_pop(); /* fmul */
    fp_push(MEMF(eax + 4)); /* fld float */
    fp_st1() *= fp_top(); fp_pop(); /* fmul */
    fp_st1() -= fp_top(); fp_pop(); /* fsubp */
    fp_push(MEMD(0x64A8F0)); /* fld double */
    /* FPU: fcos  */
    { double _t = fp_top(); fp_top() = fp_st1(); fp_st1() = _t; } /* fxch */
    _fpu_cmp = (fp_top() < fp_st1()) ? -1 : (fp_top() > fp_st1()) ? 1 : 0; fp_pop(); /* fcompi */
    /* fstp st(0) */
    if ((_fpu_cmp > 0) /* fcompi */) goto loc_0010BE7A; /* ja: above (unsigned >) */

loc_0010BD9B: ;
    SET_LO8(eax, MEM8(0x7819D5));
    (void)0; /* test LO8(eax), LO8(eax) - flags set for next jcc */
    ecx = esp + 0x1C;
    eax = esi;
    if (TEST_Z(LO8(eax), LO8(eax))) goto loc_0010BDB1; /* je: equal / zero */

loc_0010BDAA: ;
    PUSH32(esp, 0); sub_0010B680(); /* call 0x0010B680 */

loc_0010BDAF: ;
    goto loc_0010BDB6;

loc_0010BDB1: ;
    PUSH32(esp, 0); sub_0010B6D0(); /* call 0x0010B6D0 */

loc_0010BDB6: ;
    if (TEST_Z(LO8(eax), LO8(eax))) goto loc_0010BE7A; /* je: equal / zero */

loc_0010BDBE: ;
    eax = MEM32(ebp + 0x14);
    if (CMP_EQ(eax, 0xFFFFFFFFu)) goto loc_0010BDE5; /* je: equal / zero */

loc_0010BDC6: ;
    (void)0; /* cmp eax, 8 - flags set for next jcc */
    MEM32(esp + 0x18) = eax;
    if (CMP_GE(eax, 8)) goto loc_0010BDDD; /* jge: greater or equal (signed >=) */

loc_0010BDCF: ;
    xmm0 = MEMF(eax * 4 + 0x6B4230); /* movss */
    xmm3 = xmm0; /* movaps */
    goto loc_0010BE05;

loc_0010BDDD: ;
    xmm0 = 0.0f; /* xorps self = zero */
    xmm3 = xmm0; /* movaps */
    goto loc_0010BE05;

loc_0010BDE5: ;
    eax = MEM32(ebx);
    eax = eax & 0x1F;
    PUSH32(esp, eax);
    ecx = esp + 0x18;
    eax = esp + 0x1C;
    PUSH32(esp, 0); sub_0010B730(); /* call 0x0010B730 */

loc_0010BDF8: ;
    esp = esp + 4;
    if (TEST_Z(LO8(eax), LO8(eax))) goto loc_0010BE7A; /* je: equal / zero */

loc_0010BDFF: ;
    xmm3 = MEMF(esp + 0x14); /* movss */

loc_0010BE05: ;
    eax = esi + 0x78;
    PUSH32(esp, eax);
    ecx = esi + 0x84;
    PUSH32(esp, ecx);
    MEM32(esp + 0x2C) = eax;
    PUSH32(esp, 0); sub_003E1EE0(); /* call 0x003E1EE0 */

loc_0010BE19: ;
    xmm0 = xmm0 * MEMF(0x7FA21C); /* mulss */
    xmm0 = xmm0 * MEMF(0x648D18); /* mulss */
    xmm1 = MEMF(0x648D14); /* movss */
    esp = esp + 8;
    /* comiss xmm0, xmm1 - sets EFLAGS */
    if ((xmm0 <= xmm1)) goto loc_0010BE44; /* jbe: below or equal (unsigned <=) */

loc_0010BE39: ;
    xmm0 = 0.0f; /* xorps self = zero */
    MEMF(esp + 0x14) = xmm0; /* movss */
    goto loc_0010BE52;

loc_0010BE44: ;
    xmm1 = xmm1 - xmm0; /* subss */
    xmm1 = xmm1 * xmm3; /* mulss */
    MEMF(esp + 0x14) = xmm1; /* movss */

loc_0010BE52: ;
    ebx = MEM32(esp + 0x1C);
    eax = MEM32(ebp + 0xC);
    edx = esp + 0x28;
    PUSH32(esp, edx);
    PUSH32(esp, ebx);
    PUSH32(esp, edi);
    PUSH32(esp, esi);
    PUSH32(esp, eax);
    esi = esp + 0x30;
    eax = esp + 0x4C;
    ecx = esp + 0x58;
    PUSH32(esp, 0); sub_0010BB20(); /* call 0x0010BB20 */

loc_0010BE73: ;
    esp = esp + 0x14;
    if (TEST_NZ(LO8(eax), LO8(eax))) { sub_0010BE84(); return; } /* jne: not equal / not zero */

loc_0010BE7A: ;
    eax = eax | 0xFFFFFFFFu;
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
 * sub_0010C010
 * Original: 0x0010C010 - 0x0010C105 (245 bytes, 87 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0010C010(void)
{
    uint32_t ebp;
    int _flags = 0; /* fallback flag var */
    float xmm0;
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_0010C010: ;
    PUSH32(esp, ecx);
    PUSH32(esp, ebp);
    ebp = MEM32(esp + 0xC);
    PUSH32(esp, esi);
    PUSH32(esp, edi);
    PUSH32(esp, 0xFFFFFFFFu);
    PUSH32(esp, 0x3F800000);
    PUSH32(esp, ebp);
    PUSH32(esp, ebx);
    PUSH32(esp, 0); sub_0010BC90(); /* call 0x0010BC90 */

loc_0010C026: ;
    edi = eax;
    esp = esp + 0x10;
    eax = ebx;
    MEM32(esp + 0xC) = edi;
    PUSH32(esp, 0); sub_0010C110(); /* call 0x0010C110 */

loc_0010C036: ;
    esi = MEM32(eax * 4 + 0x595BA8);
    if (TEST_Z(esi, esi)) goto loc_0010C090; /* je: equal / zero */

loc_0010C041: ;
    edx = MEM32(ebx + 0x298);
    PUSH32(esp, ebx);
    edx = edx & 0x1F;
    PUSH32(esp, 0); sub_0010C2D0(); /* call 0x0010C2D0 */

loc_0010C050: ;
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, eax);
    PUSH32(esp, 0); RECOMP_ICALL_SAFE(esi, _icall_esp); /* indirect call */
    }

loc_0010C053: ;
    esp = esp + 8;
    if (CMP_EQ(eax, 0xFFFFFFFFu)) goto loc_0010C090; /* je: equal / zero */

loc_0010C05B: ;
    ecx = MEM32(eax * 8 + 0x6B4188);
    if (TEST_Z(ecx, ecx)) goto loc_0010C090; /* je: equal / zero */

loc_0010C066: ;
    xmm0 = MEMF(eax * 8 + 0x6B418C); /* movss */
    /* comiss xmm0, MEMF(0x648CF8) - sets EFLAGS */
    if ((xmm0 <= MEMF(0x648CF8))) goto loc_0010C087; /* jbe: below or equal (unsigned <=) */

loc_0010C078: ;
    esi = eax;
    PUSH32(esp, edi);
    eax = ebx;
    PUSH32(esp, 0); sub_0010C3E0(); /* call 0x0010C3E0 */

loc_0010C082: ;
    esp = esp + 4;
    goto loc_0010C090;

loc_0010C087: ;
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, 0);
    PUSH32(esp, ebp);
    PUSH32(esp, ebx);
    PUSH32(esp, 0); RECOMP_ICALL_SAFE(ecx, _icall_esp); /* indirect call */
    }

loc_0010C08D: ;
    esp = esp + 0xC;

loc_0010C090: ;
    edi = MEM32(ebx + 0x538);

loc_0010C096: ;
    SET_LO8(eax, 0); /* xor self */
    if (TEST_Z(edi, edi)) { sub_0010C105(); return; } /* je: equal / zero */

loc_0010C09C: ;
    /* nop */

loc_0010C0A0: ;
    if (TEST_NZ(LO8(eax), LO8(eax))) goto loc_0010C0B9; /* jne: not equal / not zero */

loc_0010C0A4: ;
    if (CMP_NE(MEM32(edi + 0x38), 0x1A)) goto loc_0010C0AE; /* jne: not equal / not zero */

loc_0010C0AA: ;
    SET_LO8(eax, 1);
    goto loc_0010C0B1;

loc_0010C0AE: ;
    edi = MEM32(edi + 0x30);

loc_0010C0B1: ;
    if (TEST_NZ(edi, edi)) goto loc_0010C0A0; /* jne: not equal / not zero */

loc_0010C0B5: ;
    if (TEST_Z(LO8(eax), LO8(eax))) { sub_0010C105(); return; } /* je: equal / zero */

loc_0010C0B9: ;
    esi = MEM32(edi + 0x2C);
    eax = MEM32(esi + 0x4C);
    eax = MEM32(eax * 8 + 0x6B4188);
    if (TEST_Z(eax, eax)) goto loc_0010C100; /* je: equal / zero */

loc_0010C0CA: ;
    ecx = MEM32(esi + 0x30);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, ecx);
    PUSH32(esp, ebp);
    PUSH32(esp, ebx);
    PUSH32(esp, 0); RECOMP_ICALL_SAFE(eax, _icall_esp); /* indirect call */
    }

loc_0010C0D2: ;
    eax = MEM32(esp + 0x18);
    esp = esp + 0xC;
    if (CMP_NE(eax, 0xFFFFFFFFu)) goto loc_0010C100; /* jne: not equal / not zero */

loc_0010C0DE: ;
    edx = MEM32(esi + 0x50);
    xmm0 = MEMF(esi + 0x30); /* movss */
    xmm0 = xmm0 / MEMF(esi + 0x34); /* divss */
    PUSH32(esp, edx);
    PUSH32(esp, ecx);
    MEMF(esp) = xmm0; /* movss */
    PUSH32(esp, ebp);
    PUSH32(esp, ebx);
    PUSH32(esp, 0); sub_0010BC90(); /* call 0x0010BC90 */

loc_0010C0F9: ;
    esp = esp + 0x10;
    MEM32(esp + 0xC) = eax;

loc_0010C100: ;
    edi = MEM32(edi + 0x30);
    goto loc_0010C096;

}

/**
 * sub_0010C110
 * Original: 0x0010C110 - 0x0010C18A (122 bytes, 37 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0010C110(void)
{
    uint32_t ebp;
    int _flags = 0; /* fallback flag var */
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_0010C110: ;
    eax = MEM32(eax + 0x68);
    if (CMP_A(eax, 0x58)) goto loc_0010C151; /* ja: above (unsigned >) */

loc_0010C118: ;
    if (CMP_EQ(eax, 0x58)) goto loc_0010C14B; /* je: equal / zero */

loc_0010C11A: ;
    if (CMP_A(eax, 0x54)) { sub_0010C18A(); return; } /* ja: above (unsigned >) */

loc_0010C11F: ;
    ecx = ZX8(MEM8(eax + 0x10C1B4));
    g_seh_ebp = ebp; RECOMP_ITAIL(MEM32(ecx * 4 + 0x10C190)); return; /* indirect tail jmp */

    eax = 9;
    esp += 4; return; /* ret */

loc_0010C14B: ;
    eax = 7;
    esp += 4; return; /* ret */

loc_0010C151: ;
    eax = eax - 0x79;
    if (CMP_A(eax, 0x9B)) { sub_0010C18A(); return; } /* ja: above (unsigned >) */

loc_0010C15B: ;
    edx = ZX8(MEM8(eax + 0x10C228));
    g_seh_ebp = ebp; RECOMP_ITAIL(MEM32(edx * 4 + 0x10C20C)); return; /* indirect tail jmp */

    eax = 0xA;
    esp += 4; return; /* ret */

}

/**
 * sub_0010C2D0
 * Original: 0x0010C2D0 - 0x0010C304 (52 bytes, 14 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0010C2D0(void)
{
    uint32_t ebp;
    int _flags = 0; /* fallback flag var */
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_0010C2D0: ;
    ecx = MEM32(0x7FA1F8);
    eax = ecx + -25;
    if (CMP_A(eax, 0x29)) { sub_0010C304(); return; } /* ja: above (unsigned >) */

loc_0010C2DE: ;
    eax = ZX8(MEM8(eax + 0x10C368));
    g_seh_ebp = ebp; RECOMP_ITAIL(MEM32(eax * 4 + 0x10C354)); return; /* indirect tail jmp */

    eax = 6;
    esp += 4; return; /* ret */

}

/**
 * sub_0010C3E0
 * Original: 0x0010C3E0 - 0x0010C431 (81 bytes, 32 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0010C3E0(void)
{
    uint32_t ebp;
    int _flags = 0; /* fallback flag var */
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_0010C3E0: ;
    esp = esp - 0x14;
    PUSH32(esp, ebx);
    PUSH32(esp, edi);
    edi = eax;
    eax = MEM32(edi + 0x538);
    edx = 0; /* xor self */
    ebx = 0x1A;
    PUSH32(esp, ebp);

loc_0010C3F5: ;
    SET_LO8(ecx, 0); /* xor self */
    if (TEST_Z(eax, eax)) { sub_0010C431(); return; } /* je: equal / zero */

loc_0010C3FB: ;
    goto loc_0010C400;

    /* nop */

loc_0010C400: ;
    if (TEST_NZ(LO8(ecx), LO8(ecx))) goto loc_0010C418; /* jne: not equal / not zero */

loc_0010C404: ;
    if (CMP_NE(MEM32(eax + 0x38), ebx)) goto loc_0010C40D; /* jne: not equal / not zero */

loc_0010C409: ;
    SET_LO8(ecx, 1);
    goto loc_0010C410;

loc_0010C40D: ;
    eax = MEM32(eax + 0x30);

loc_0010C410: ;
    if (TEST_NZ(eax, eax)) goto loc_0010C400; /* jne: not equal / not zero */

loc_0010C414: ;
    if (TEST_Z(LO8(ecx), LO8(ecx))) { sub_0010C431(); return; } /* je: equal / zero */

loc_0010C418: ;
    ecx = MEM32(eax + 0x2C);
    if (CMP_NE(MEM32(ecx + 0x4C), esi)) goto loc_0010C42C; /* jne: not equal / not zero */

loc_0010C420: ;
    ebp = MEM32(esi * 8 + 0x6B418C);
    edx = eax;
    MEM32(ecx + 0x30) = ebp;

loc_0010C42C: ;
    eax = MEM32(eax + 0x30);
    goto loc_0010C3F5;

}

/**
 * sub_0010C4D0
 * Original: 0x0010C4D0 - 0x0010C5D5 (261 bytes, 75 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0010C4D0(void)
{
    int _flags = 0; /* fallback flag var */
    float xmm0;

loc_0010C4D0: ;
    esp = esp - 0x34;
    PUSH32(esp, ebx);
    PUSH32(esp, esi);
    esi = ecx;
    MEM32(esp + 0x38) = 0x303;
    MEM32(esp + 0x10) = eax;
    MEM8(esp + 0x14) = 0;
    MEM32(esp + 8) = 0x6F301;
    PUSH32(esp, 0); sub_003E2480(); /* call 0x003E2480 */

loc_0010C4F5: ;
    edx = ((int32_t)eax < 0) ? 0xFFFFFFFF : 0; /* cdq */
    ecx = 0x3D;
    { int64_t _dividend = ((int64_t)(int32_t)edx << 32) | eax;
      eax = (uint32_t)((int32_t)(_dividend / (int32_t)ecx));
      edx = (uint32_t)((int32_t)(_dividend % (int32_t)ecx)); }
    xmm0 = 0.0f; /* xorps self = zero */
    MEMF(esp + 0x18) = xmm0; /* movss */
    MEMF(esp + 0x1C) = xmm0; /* movss */
    edx = edx + 0x64;
    MEM16(esp + 0xC) = LO16(edx);
    PUSH32(esp, 0); sub_003E2480(); /* call 0x003E2480 */

loc_0010C519: ;
    eax = eax & 0x8000007Fu;
    if (((int32_t)eax >= 0)) goto loc_0010C525; /* jns: not sign (positive) */

loc_0010C520: ;
    eax--;
    eax = eax | 0xFFFFFF80u;
    eax++;

loc_0010C525: ;
    edx = MEM32(esi + 0xA0);
    xmm0 = MEMF(0x6490F4); /* movss */
    ebx = 0xFF;
    SET_LO8(eax, LO8(eax) + 0x80);
    MEM8(esp + 0x20) = LO8(eax);
    MEM8(esp + 0x21) = LO8(ebx);
    MEM8(esp + 0x22) = LO8(ebx);
    MEM8(esp + 0x23) = LO8(ebx);
    MEM8(esp + 0x24) = LO8(ebx);
    MEM8(esp + 0x25) = LO8(ebx);
    MEM8(esp + 0x26) = 0;
    MEM8(esp + 0x27) = 7;
    MEM8(esp + 0x2C) = LO8(ebx);
    MEM32(esp + 0x28) = edx;
    MEM16(esp + 0x2E) = 0x28;
    MEMF(esp + 0x30) = xmm0; /* movss */
    PUSH32(esp, 0); sub_003E1D70(); /* call 0x003E1D70 */

loc_0010C576: ;
    SET_LO8(edx, MEM8(esp + 0x48));
    xmm0 = xmm0 * MEMF(0x648D1C); /* mulss */
    xmm0 = xmm0 + MEMF(0x648CE4); /* addss */
    xmm0 = xmm0 * MEMF(esp + 0x40); /* mulss */
    ecx = MEM32(esp + 0x44);
    PUSH32(esp, ebx);
    PUSH32(esp, 0);
    PUSH32(esp, 1);
    (void)0; /* cmp LO8(edx), 2 - flags set for next jcc */
    edx = MEM32(edi + 8);
    PUSH32(esp, 3);
    SET_LO8(eax, (CMP_EQ(LO8(edx), 2)) ? 1 : 0); /* sete */
    MEMF(esp + 0x50) = xmm0; /* movss */
    esi = esi + 0x10;
    PUSH32(esp, eax);
    eax = MEM32(esp + 0x54);
    PUSH32(esp, ecx);
    ecx = MEM32(edi);
    PUSH32(esp, eax);
    PUSH32(esp, eax);
    eax = MEM32(esi + -16);
    PUSH32(esp, edx);
    PUSH32(esp, eax);
    PUSH32(esp, ecx);
    PUSH32(esp, esi);
    PUSH32(esp, 0);
    edx = esp + 0x3C;
    PUSH32(esp, 0);
    PUSH32(esp, edx);
    PUSH32(esp, 0); sub_0014F960(); /* call 0x0014F960 */

loc_0010C5CC: ;
    esp = esp + 0x3C;
    POP32(esp, esi);
    POP32(esp, ebx);
    esp = esp + 0x34;
    esp += 4; return; /* ret */

}

/**
 * sub_0010C5E0
 * Original: 0x0010C5E0 - 0x0010C632 (82 bytes, 19 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0010C5E0(void)
{
    int _flags = 0; /* fallback flag var */

loc_0010C5E0: ;
    esp = esp - 0x18;
    PUSH32(esp, ebx);
    ebx = ZX16(MEM16(ecx + 0x60));
    eax = esp + 4;
    PUSH32(esp, eax);
    PUSH32(esp, 6);
    MEM32(esp + 0xC) = 0x402E;
    MEM32(esp + 0x10) = 0x402F;
    MEM32(esp + 0x14) = 0x4030;
    MEM32(esp + 0x18) = 0x4031;
    MEM32(esp + 0x1C) = 0x4032;
    MEM32(esp + 0x20) = 0x4033;
    PUSH32(esp, 0); sub_003C6D70(); /* call 0x003C6D70 */

loc_0010C624: ;
    esp = esp + 8;
    (void)0; /* cmp eax, 0xFFFFFFFFu - flags set for next jcc */
    SET_LO8(eax, (CMP_NE(eax, 0xFFFFFFFFu)) ? 1 : 0); /* setne */
    POP32(esp, ebx);
    esp = esp + 0x18;
    esp += 4; return; /* ret */

}

/**
 * sub_0010C640
 * Original: 0x0010C640 - 0x0010C84D (525 bytes, 138 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0010C640(void)
{
    uint32_t ebp;
    int _flags = 0; /* fallback flag var */
    float xmm0, xmm1;
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_0010C640: ;
    esp = esp - 0x50;
    ecx = MEM32(eax);
    edx = MEM32(eax + 4);
    eax = MEM32(eax + 8);
    xmm1 = xmm0; /* movaps */
    xmm0 = xmm0 * MEMF(0x648CE0); /* mulss */
    xmm1 = xmm1 * MEMF(0x6492E4); /* mulss */
    MEMF(esp + 0x1C) = xmm0; /* movss */
    xmm0 = MEMF(0x64A898); /* movss */
    MEMF(esp + 0x20) = xmm0; /* movss */
    xmm0 = MEMF(0x64909C); /* movss */
    PUSH32(esp, ebx);
    ebx = MEM32(esp + 0x58);
    MEMF(esp + 0x28) = xmm0; /* movss */
    xmm0 = MEMF(esp + 0x5C); /* movss */
    xmm0 = xmm0 * MEMF(0x648CF4); /* mulss */
    PUSH32(esp, ebp);
    PUSH32(esp, edi);
    MEMF(esp + 0x34) = xmm0; /* movss */
    MEMF(esp + 0x38) = xmm0; /* movss */
    xmm0 = MEMF(0x648D10); /* movss */
    ebp = 0xA;
    edi = esp + 0x18;
    MEM32(esp + 0x18) = ecx;
    MEM32(esp + 0x1C) = edx;
    MEM32(esp + 0x20) = eax;
    MEMF(esp + 0x24) = xmm1; /* movss */
    MEM16(esp + 0x3C) = LO16(ebp);
    MEM16(esp + 0x3E) = LO16(ebp);
    MEM16(esp + 0x40) = 3;
    MEM16(esp + 0x42) = 1;
    MEM16(esp + 0x44) = 9;
    MEM16(esp + 0x46) = 0xF;
    MEM16(esp + 0x48) = 0xE1;
    MEM16(esp + 0x4A) = 0x1E;
    MEMF(esp + 0x50) = xmm0; /* movss */
    MEM16(esp + 0x54) = 0xC;
    MEM16(esp + 0x56) = 0x15;
    MEM32(esp + 0x58) = esi;
    MEM8(esp + 0x4C) = LO8(ebx);
    PUSH32(esp, 0); sub_000F5A20(); /* call 0x000F5A20 */

loc_0010C719: ;
    PUSH32(esp, 0); sub_003E2480(); /* call 0x003E2480 */

loc_0010C71E: ;
    edx = ((int32_t)eax < 0) ? 0xFFFFFFFF : 0; /* cdq */
    ecx = 0xB;
    { int64_t _dividend = ((int64_t)(int32_t)edx << 32) | eax;
      eax = (uint32_t)((int32_t)(_dividend / (int32_t)ecx));
      edx = (uint32_t)((int32_t)(_dividend % (int32_t)ecx)); }
    eax = 0x55555556;
    edx = edx + ebp;
    { int64_t _r = (int64_t)(int32_t)eax * (int64_t)(int32_t)edx;
      eax = (uint32_t)_r; edx = (uint32_t)(_r >> 32); }
    eax = edx;
    eax = eax >> 0x1F;
    eax = eax + edx;
    if ((eax == 0)) goto loc_0010C846; /* je: equal / zero */

loc_0010C73C: ;
    ebp = eax;
    edi = edi;

loc_0010C740: ;
    PUSH32(esp, 0); sub_003E1D70(); /* call 0x003E1D70 */

loc_0010C745: ;
    xmm0 = xmm0 * MEMF(esp + 0x38); /* mulss */
    xmm0 = xmm0 + MEMF(esp + 0x34); /* addss */
    PUSH32(esp, ecx);
    MEMF(esp) = xmm0; /* movss */
    PUSH32(esp, 0); sub_003E2480(); /* call 0x003E2480 */

loc_0010C75C: ;
    edx = ((int32_t)eax < 0) ? 0xFFFFFFFF : 0; /* cdq */
    ecx = 0xB;
    { int64_t _dividend = ((int64_t)(int32_t)edx << 32) | eax;
      eax = (uint32_t)((int32_t)(_dividend / (int32_t)ecx));
      edx = (uint32_t)((int32_t)(_dividend % (int32_t)ecx)); }
    edx = edx - 0x19;
    PUSH32(esp, edx);
    PUSH32(esp, 0); sub_003E2480(); /* call 0x003E2480 */

loc_0010C76D: ;
    eax = eax & 0x800000FFu;
    if (((int32_t)eax >= 0)) goto loc_0010C77B; /* jns: not sign (positive) */

loc_0010C774: ;
    eax--;
    eax = eax | 0xFFFFFF00u;
    eax++;

loc_0010C77B: ;
    PUSH32(esp, eax);
    edi = esp + 0x18;
    PUSH32(esp, 0); sub_00110510(); /* call 0x00110510 */

loc_0010C785: ;
    esp = esp + 0xC;
    PUSH32(esp, 0); sub_003E1D70(); /* call 0x003E1D70 */

loc_0010C78D: ;
    xmm1 = MEMF(0x648D10); /* movss */
    /* comiss xmm1, xmm0 - sets EFLAGS */
    if ((xmm1 <= xmm0)) goto loc_0010C7A1; /* jbe: below or equal (unsigned <=) */

loc_0010C79A: ;
    eax = 1;
    goto loc_0010C7A3;

loc_0010C7A1: ;
    eax = 0; /* xor self */

loc_0010C7A3: ;
    PUSH32(esp, 0);
    PUSH32(esp, 0);
    PUSH32(esp, 0);
    PUSH32(esp, 0xFF);
    PUSH32(esp, esi);
    PUSH32(esp, 0x15);
    PUSH32(esp, 0xC);
    PUSH32(esp, 0);
    PUSH32(esp, ebx);
    PUSH32(esp, 1);
    PUSH32(esp, 0x3FD9999A);
    PUSH32(esp, 0x3FD9999A);
    PUSH32(esp, eax);
    PUSH32(esp, 0); sub_003E2480(); /* call 0x003E2480 */

loc_0010C7C8: ;
    eax = eax & 0x80000001u;
    if (((int32_t)eax >= 0)) goto loc_0010C7D4; /* jns: not sign (positive) */

loc_0010C7CF: ;
    eax--;
    eax = eax | 0xFFFFFFFEu;
    eax++;

loc_0010C7D4: ;
    eax = eax + 3;
    PUSH32(esp, eax);
    PUSH32(esp, 0); sub_003E1D70(); /* call 0x003E1D70 */

loc_0010C7DD: ;
    xmm0 = xmm0 * MEMF(esp + 0x60); /* mulss */
    xmm0 = xmm0 + MEMF(esp + 0x5C); /* addss */
    PUSH32(esp, ecx);
    MEMF(esp) = xmm0; /* movss */
    PUSH32(esp, 0); sub_003E2480(); /* call 0x003E2480 */

loc_0010C7F4: ;
    edx = ((int32_t)eax < 0) ? 0xFFFFFFFF : 0; /* cdq */
    ecx = 0x1F;
    { int64_t _dividend = ((int64_t)(int32_t)edx << 32) | eax;
      eax = (uint32_t)((int32_t)(_dividend / (int32_t)ecx));
      edx = (uint32_t)((int32_t)(_dividend % (int32_t)ecx)); }
    SET_LO8(edx, LO8(edx) - LO8(ecx));
    PUSH32(esp, edx);
    PUSH32(esp, 0); sub_003E2480(); /* call 0x003E2480 */

loc_0010C804: ;
    eax = eax & 0x8000000Fu;
    if (((int32_t)eax >= 0)) goto loc_0010C810; /* jns: not sign (positive) */

loc_0010C80B: ;
    eax--;
    eax = eax | 0xFFFFFFF0u;
    eax++;

loc_0010C810: ;
    eax = eax + 9;
    PUSH32(esp, eax);
    PUSH32(esp, 0); sub_003E1D70(); /* call 0x003E1D70 */

loc_0010C819: ;
    xmm0 = xmm0 * MEMF(0x64909C); /* mulss */
    xmm0 = xmm0 + MEMF(0x64A898); /* addss */
    PUSH32(esp, ecx);
    eax = esp + 0x54;
    ecx = esp + 0x60;
    MEMF(esp) = xmm0; /* movss */
    PUSH32(esp, 0); sub_00143530(); /* call 0x00143530 */

loc_0010C83C: ;
    esp = esp + 0x48;
    ebp--;
    if ((ebp != 0)) goto loc_0010C740; /* jne: not equal / not zero */

loc_0010C846: ;
    POP32(esp, edi);
    POP32(esp, ebp);
    POP32(esp, ebx);
    esp = esp + 0x50;
    esp += 4; return; /* ret */

}

/**
 * sub_0010C850
 * Original: 0x0010C850 - 0x0010C88E (62 bytes, 28 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0010C850(void)
{
    uint32_t ebp;
    int _flags = 0; /* fallback flag var */

loc_0010C850: ;
    PUSH32(esp, ebp);
    ebp = esp;
    esp = esp & 0xFFFFFFF0u;
    esp = esp - 0x54;
    (void)0; /* cmp LO8(eax), 1 - flags set for next jcc */
    PUSH32(esp, ebx);
    ebx = MEM32(ebp + 0xC);
    PUSH32(esp, esi);
    PUSH32(esp, edi);
    edi = MEM32(ebp + 8);
    esi = ecx;
    if (CMP_EQ(LO8(eax), 1)) goto loc_0010C875; /* je: equal / zero */

loc_0010C868: ;
    if (CMP_EQ(LO8(eax), 2)) { sub_0010C88E(); return; } /* je: equal / zero */

loc_0010C86C: ;
    SET_LO8(eax, 0); /* xor self */
    POP32(esp, edi);
    POP32(esp, esi);
    POP32(esp, ebx);
    esp = ebp;
    POP32(esp, ebp);
    esp += 4; return; /* ret */

loc_0010C875: ;
    eax = esp + 0x20;
    PUSH32(esp, eax);
    PUSH32(esp, 0x5E7494);
    PUSH32(esp, 0); sub_002F7810(); /* call 0x002F7810 */

loc_0010C884: ;
    esp = esp + 8;
    eax = 0x595C00;
    g_seh_ebp = ebp; sub_0010C8A5(); return; /* tail jmp 0x0010C8A5 */

}

/**
 * sub_0010C920
 * Original: 0x0010C920 - 0x0010C9E1 (193 bytes, 58 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0010C920(void)
{
    uint32_t ebp;
    int _flags = 0; /* fallback flag var */
    float xmm0;

loc_0010C920: ;
    PUSH32(esp, ebp);
    ebp = esp;
    esp = esp & 0xFFFFFFF0u;
    esp = esp - 0xC0;
    ecx = MEM32(ebp + 8);
    if (TEST_Z(ecx, ecx)) goto loc_0010C9DD; /* je: equal / zero */

loc_0010C937: ;
    eax = MEM32(ecx + 0x3C8);
    if (TEST_Z(eax, eax)) goto loc_0010C9DD; /* je: equal / zero */

loc_0010C945: ;
    eax = esp + 0x10;
    PUSH32(esp, eax);
    SET_LO8(eax, MEM8(ebp + 0xC));
    edx = esp + 8;
    PUSH32(esp, edx);
    PUSH32(esp, 0); sub_0010C850(); /* call 0x0010C850 */

loc_0010C957: ;
    esp = esp + 8;
    if (TEST_Z(LO8(eax), LO8(eax))) goto loc_0010C9DD; /* je: equal / zero */

loc_0010C95E: ;
    if (CMP_NE(MEM32(0x7FA1F8), 0x14)) goto loc_0010C986; /* jne: not equal / not zero */

loc_0010C967: ;
    PUSH32(esp, 0xBF800000u);
    PUSH32(esp, 0xBF800000u);
    PUSH32(esp, 0x5F3D10);
    eax = esp + 0x10;
    PUSH32(esp, 0); sub_001DD7C0(); /* call 0x001DD7C0 */

loc_0010C97F: ;
    esp = esp + 0xC;
    if (TEST_NZ(LO8(eax), LO8(eax))) goto loc_0010C9DD; /* jne: not equal / not zero */

loc_0010C986: ;
    PUSH32(esp, 0); sub_003E2480(); /* call 0x003E2480 */

loc_0010C98B: ;
    edx = ((int32_t)eax < 0) ? 0xFFFFFFFF : 0; /* cdq */
    ecx = 7;
    { int64_t _dividend = ((int64_t)(int32_t)edx << 32) | eax;
      eax = (uint32_t)((int32_t)(_dividend / (int32_t)ecx));
      edx = (uint32_t)((int32_t)(_dividend % (int32_t)ecx)); }
    PUSH32(esp, 0xFF);
    PUSH32(esp, 0);
    PUSH32(esp, 0);
    PUSH32(esp, 0);
    PUSH32(esp, 0x10);
    edx = edx + 0xC;
    PUSH32(esp, edx);
    PUSH32(esp, 0);
    PUSH32(esp, 0); sub_003E1D70(); /* call 0x003E1D70 */

loc_0010C9AB: ;
    xmm0 = xmm0 * MEMF(0x649D04); /* mulss */
    xmm0 = xmm0 + MEMF(0x64A4F4); /* addss */
    edx = MEM32(esp + 0x28);
    eax = MEM32(esp + 0x24);
    PUSH32(esp, ecx);
    ecx = MEM32(esp + 0x24);
    MEMF(esp) = xmm0; /* movss */
    PUSH32(esp, edx);
    PUSH32(esp, eax);
    PUSH32(esp, ecx);
    eax = 0xFF;
    PUSH32(esp, 0); sub_00112C50(); /* call 0x00112C50 */

loc_0010C9DA: ;
    esp = esp + 0x2C;

loc_0010C9DD: ;
    esp = ebp;
    POP32(esp, ebp);
    esp += 4; return; /* ret */

}

/**
 * sub_0010C9F0
 * Original: 0x0010C9F0 - 0x0010CA4D (93 bytes, 25 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0010C9F0(void)
{
    int _flags = 0; /* fallback flag var */
    float xmm0, xmm1;

loc_0010C9F0: ;
    eax = MEM32(esp + 4);
    if (TEST_Z(MEM8(eax + 0x64), 1)) goto loc_0010CA47; /* je: equal / zero */

loc_0010C9FA: ;
    SET_LO16(edx, MEM16(eax + 0x36));
    if (CMP_GE(LO16(edx), 0x20)) goto loc_0010CA17; /* jge: greater or equal (signed >=) */

loc_0010CA04: ;
    PUSH32(esp, esi);
    esi = ZX8(MEM8(eax + 0x7B));
    ecx = SX16(LO16(edx));
    ecx = ecx << 3;
    (void)0; /* cmp esi, ecx - flags set for next jcc */
    POP32(esp, esi);
    if (CMP_LE(esi, ecx)) goto loc_0010CA17; /* jle: less or equal (signed <=) */

loc_0010CA14: ;
    MEM8(eax + 0x7B) = LO8(ecx);

loc_0010CA17: ;
    if (CMP_LE(LO16(edx), MEM16(eax + 0x328))) goto loc_0010CA47; /* jle: less or equal (signed <=) */

loc_0010CA20: ;
    xmm0 = MEMF(eax + 0x32C); /* movss */
    xmm0 = xmm0 * MEMF(0x7FA24C); /* mulss */
    xmm1 = xmm0; /* movaps */
    xmm1 = xmm1 + MEMF(eax + 0x38); /* addss */
    xmm0 = xmm0 + MEMF(eax + 0x3C); /* addss */
    MEMF(eax + 0x38) = xmm1; /* movss */
    MEMF(eax + 0x3C) = xmm0; /* movss */

loc_0010CA47: ;
    eax = 1;
    esp += 4; return; /* ret */

}

/**
 * sub_0010CA50
 * Original: 0x0010CA50 - 0x0010CC10 (448 bytes, 99 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0010CA50(void)
{
    uint32_t ebp;
    int _flags = 0; /* fallback flag var */
    float xmm0, xmm6;
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_0010CA50: ;
    esp = esp - 0x84;
    PUSH32(esp, ebx);
    PUSH32(esp, ebp);
    PUSH32(esp, esi);
    PUSH32(esp, edi);
    PUSH32(esp, 0); sub_003E2480(); /* call 0x003E2480 */

loc_0010CA5F: ;
    eax = eax & 0x8000000Fu;
    if (((int32_t)eax >= 0)) goto loc_0010CA6B; /* jns: not sign (positive) */

loc_0010CA66: ;
    eax--;
    eax = eax | 0xFFFFFFF0u;
    eax++;

loc_0010CA6B: ;
    xmm6 = 0.0f; /* xorps self = zero */
    ebx = 0; /* xor self */
    eax = eax + 0x19;
    MEM16(esp + 0x18) = LO16(eax);
    MEMF(esp + 0x1C) = xmm6; /* movss */
    MEMF(esp + 0x20) = xmm6; /* movss */
    MEM8(esp + 0x24) = LO8(ebx);
    MEM8(esp + 0x25) = LO8(ebx);
    MEM8(esp + 0x26) = LO8(ebx);
    PUSH32(esp, 0); sub_003E2480(); /* call 0x003E2480 */

loc_0010CA95: ;
    edx = ((int32_t)eax < 0) ? 0xFFFFFFFF : 0; /* cdq */
    ecx = 0x11;
    { int64_t _dividend = ((int64_t)(int32_t)edx << 32) | eax;
      eax = (uint32_t)((int32_t)(_dividend / (int32_t)ecx));
      edx = (uint32_t)((int32_t)(_dividend % (int32_t)ecx)); }
    xmm0 = MEMF(0x64A32C); /* movss */
    eax = 4;
    esi = 2;
    MEM32(esp + 0x28) = eax;
    MEM32(esp + 0x2C) = esi;
    MEM32(esp + 0x30) = ebx;
    MEM32(esp + 0x34) = eax;
    MEM32(esp + 0x38) = esi;
    MEM32(esp + 0x3C) = ebx;
    MEM32(esp + 0x40) = 0x303;
    MEM32(esp + 0x44) = 0x6C;
    MEM16(esp + 0x48) = 0xF;
    MEM16(esp + 0x4A) = LO16(ecx);
    MEM16(esp + 0x4C) = 0x19;
    MEMF(esp + 0x50) = xmm0; /* movss */
    SET_LO8(edx, LO8(edx) + 0x20);
    MEM8(esp + 0x27) = LO8(edx);
    PUSH32(esp, 0); sub_003E1D70(); /* call 0x003E1D70 */

loc_0010CAFC: ;
    xmm0 = xmm0 * MEMF(0x64A0A8); /* mulss */
    xmm0 = xmm0 + MEMF(0x64A4E4); /* addss */
    MEMF(esp + 0x58) = xmm0; /* movss */
    MEMF(esp + 0x54) = xmm0; /* movss */
    xmm0 = MEMF(esp + 0xA0); /* movss */
    MEMF(esp + 0x5C) = xmm0; /* movss */
    xmm0 = MEMF(esp + 0xA4); /* movss */
    MEMF(esp + 0x60) = xmm0; /* movss */
    xmm0 = MEMF(esp + 0xA8); /* movss */
    MEMF(esp + 0x64) = xmm0; /* movss */
    PUSH32(esp, 0); sub_003E1D70(); /* call 0x003E1D70 */

loc_0010CB4A: ;
    xmm0 = xmm0 * MEMF(0x64A4EC); /* mulss */
    xmm0 = xmm0 + MEMF(0x5A0060); /* addss */
    xmm0 = xmm0 * MEMF(0x648E54); /* mulss */
    PUSH32(esp, ecx);
    MEMF(esp) = xmm0; /* movss */
    PUSH32(esp, 0); sub_003E2480(); /* call 0x003E2480 */

loc_0010CB6D: ;
    edx = ((int32_t)eax < 0) ? 0xFFFFFFFF : 0; /* cdq */
    ecx = 0x15;
    { int64_t _dividend = ((int64_t)(int32_t)edx << 32) | eax;
      eax = (uint32_t)((int32_t)(_dividend / (int32_t)ecx));
      edx = (uint32_t)((int32_t)(_dividend % (int32_t)ecx)); }
    edi = esp + 0x78;
    edx = edx - 0x14;
    PUSH32(esp, edx);
    edx = MEM32(esp + 0xC0);
    PUSH32(esp, edx);
    PUSH32(esp, 0); sub_00110510(); /* call 0x00110510 */

loc_0010CB8A: ;
    esp = esp + 0xC;
    MEMF(esp + 0x80) = xmm6; /* movss */
    PUSH32(esp, 0); sub_003E2480(); /* call 0x003E2480 */

loc_0010CB9B: ;
    edi = eax;
    edi = edi & 1;
    edi = edi << 1;
    PUSH32(esp, 0); sub_003E2480(); /* call 0x003E2480 */

loc_0010CBA7: ;
    xmm0 = MEMF(0x64A4E8); /* movss */
    eax = eax & 1;
    edi = edi | eax;
    edi = edi << 6;
    edi = edi | 0xE05;
    SET_LO8(eax, LO8(eax) | 0xFF);
    MEMF(esp + 0x14) = xmm0; /* movss */
    ebp = MEM32(esp + 0x14);
    MEM32(esp + 0x84) = edi;
    MEM8(esp + 0x8C) = 0xA;
    MEM8(esp + 0x8D) = LO8(eax);
    MEM8(esp + 0x8E) = LO8(eax);
    MEM32(esp + 0x10) = esi;
    /* nop */
    eax = MEM32(0x7FA1F8);
    (void)0; /* cmp eax, 2 - flags set for next jcc */
    SET_LO8(ecx, MEM8(esp + 0x25));
    SET_LO8(edx, MEM8(esp + 0x24));
    if (CMP_NE(eax, 2)) { sub_0010CC10(); return; } /* jne: not equal / not zero */

loc_0010CC02: ;
    SET_LO8(eax, MEM8(esp + 0x26));
    SET_LO8(edx, LO8(edx) + 0x1D);
    SET_LO8(ecx, LO8(ecx) + 0x13);
    SET_LO8(eax, LO8(eax) + 9);
    g_seh_ebp = ebp; sub_0010CC2B(); return; /* tail jmp 0x0010CC2B */

}

/**
 * sub_0010CCD0
 * Original: 0x0010CCD0 - 0x0010CD7B (171 bytes, 41 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0010CCD0(void)
{
    uint32_t ebp;
    int _flags = 0; /* fallback flag var */
    float xmm5, xmm6;

loc_0010CCD0: ;
    PUSH32(esp, ebp);
    ebp = esp;
    esp = esp & 0xFFFFFFF0u;
    esp = esp - 0x60;
    eax = ZX8(LO8(eax));
    eax = eax + 0xFFFFFFFDu;
    if (CMP_A(eax, 3)) { sub_0010CD7B(); return; } /* ja: above (unsigned >) */

loc_0010CCE8: ;
    { uint32_t _jt = MEM32(eax * 4 + 0x10CDE4); /* switch: 4 entries, 4 targets */
    if (_jt == 0x0010CCEFu) goto loc_0010CCEF;
    if (_jt == 0x0010CD12u) goto loc_0010CD12;
    if (_jt == 0x0010CD35u) goto loc_0010CD35;
    if (_jt == 0x0010CD58u) goto loc_0010CD58;
    g_seh_ebp = ebp; RECOMP_ITAIL(_jt); return; }

loc_0010CCEF: ;
    PUSH32(esp, 0x5F3D5C);
    eax = esi;
    PUSH32(esp, 0); sub_002F77D0(); /* call 0x002F77D0 */

loc_0010CCFB: ;
    xmm5 = MEMF(0x58BD5C); /* movss */
    xmm6 = MEMF(0x648E5C); /* movss */
    esp = esp + 4;
    edx = eax;
    g_seh_ebp = ebp; sub_0010CD8B(); return; /* tail jmp 0x0010CD8B */

loc_0010CD12: ;
    PUSH32(esp, 0x5F3D54);
    eax = esi;
    PUSH32(esp, 0); sub_002F77D0(); /* call 0x002F77D0 */

loc_0010CD1E: ;
    xmm5 = MEMF(0x6493F4); /* movss */
    xmm6 = MEMF(0x648FD8); /* movss */
    esp = esp + 4;
    edx = eax;
    g_seh_ebp = ebp; sub_0010CD8B(); return; /* tail jmp 0x0010CD8B */

loc_0010CD35: ;
    PUSH32(esp, 0x5F3D4C);
    eax = esi;
    PUSH32(esp, 0); sub_002F77D0(); /* call 0x002F77D0 */

loc_0010CD41: ;
    xmm5 = MEMF(0x648D1C); /* movss */
    xmm6 = MEMF(0x64908C); /* movss */
    esp = esp + 4;
    edx = eax;
    g_seh_ebp = ebp; sub_0010CD8B(); return; /* tail jmp 0x0010CD8B */

loc_0010CD58: ;
    PUSH32(esp, 0x5F3D44);
    eax = esi;
    PUSH32(esp, 0); sub_002F77D0(); /* call 0x002F77D0 */

loc_0010CD64: ;
    xmm5 = MEMF(0x648D1C); /* movss */
    xmm6 = MEMF(0x649698); /* movss */
    esp = esp + 4;
    edx = eax;
    g_seh_ebp = ebp; sub_0010CD8B(); return; /* tail jmp 0x0010CD8B */

}

/**
 * sub_0010CE00
 * Original: 0x0010CE00 - 0x0010CE5A (90 bytes, 32 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0010CE00(void)
{
    uint32_t ebp;
    int _flags = 0; /* fallback flag var */

loc_0010CE00: ;
    PUSH32(esp, ebp);
    ebp = esp;
    esp = esp & 0xFFFFFFF0u;
    esp = esp - 0x58;
    PUSH32(esp, esi);
    esi = MEM32(ebp + 8);
    eax = MEM32(esi + 0x3C8);
    (void)0; /* test eax, eax - flags set for next jcc */
    PUSH32(esp, edi);
    if (TEST_Z(eax, eax)) goto loc_0010CE54; /* je: equal / zero */

loc_0010CE18: ;
    SET_LO8(eax, MEM8(ebp + 0xC));
    edi = esp + 0x14;
    PUSH32(esp, 0); sub_0010CCD0(); /* call 0x0010CCD0 */

loc_0010CE24: ;
    eax = MEM32(esp + 0x1C);
    ecx = MEM32(esp + 0x18);
    edx = MEM32(esp + 0x14);
    PUSH32(esp, eax);
    PUSH32(esp, ecx);
    PUSH32(esp, edx);
    eax = esp + 0x2C;
    PUSH32(esp, 0); sub_004288F5(); /* call 0x004288F5 */

loc_0010CE3C: ;
    PUSH32(esp, 0xBF800000u);
    PUSH32(esp, 0xBF800000u);
    PUSH32(esp, 0x5F3D2C);
    PUSH32(esp, eax);
    PUSH32(esp, 0); sub_001DD750(); /* call 0x001DD750 */

loc_0010CE51: ;
    esp = esp + 0x10;

loc_0010CE54: ;
    POP32(esp, edi);
    POP32(esp, esi);
    esp = ebp;
    POP32(esp, ebp);
    esp += 4; return; /* ret */

}

/**
 * sub_0010CE60
 * Original: 0x0010CE60 - 0x0010CE95 (53 bytes, 21 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0010CE60(void)
{
    uint32_t ebp;
    int _flags = 0; /* fallback flag var */
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_0010CE60: ;
    esp = esp - 0xC;
    PUSH32(esp, ebx);
    ebx = MEM32(esp + 0x18);
    eax = ZX8(LO8(eax));
    eax = eax - 4;
    PUSH32(esp, esi);
    esi = MEM32(esp + 0x18);
    PUSH32(esp, edi);
    edi = ecx;
    if ((eax == 0)) { sub_0010CE95(); return; } /* je: equal / zero */

loc_0010CE78: ;
    eax--;
    if ((eax == 0)) goto loc_0010CE8E; /* je: equal / zero */

loc_0010CE7B: ;
    eax--;
    eax = edi;
    if ((eax == 0)) goto loc_0010CE87; /* je: equal / zero */

loc_0010CE80: ;
    PUSH32(esp, 0x5F3CB0);
    g_seh_ebp = ebp; sub_0010CE9C(); return; /* tail jmp 0x0010CE9C */

loc_0010CE87: ;
    PUSH32(esp, 0x5F3CDC);
    g_seh_ebp = ebp; sub_0010CE9C(); return; /* tail jmp 0x0010CE9C */

loc_0010CE8E: ;
    PUSH32(esp, 0x5F3C80);
    g_seh_ebp = ebp; sub_0010CE9A(); return; /* tail jmp 0x0010CE9A */

}

/**
 * sub_0010CF20
 * Original: 0x0010CF20 - 0x0010CF33 (19 bytes, 7 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0010CF20(void)
{
    int _flags = 0; /* fallback flag var */

loc_0010CF20: ;
    eax = MEM32(esp + 4);
    if (TEST_S(eax, eax)) { sub_0010CF33(); return; } /* jl: less (signed <) */

loc_0010CF28: ;
    if (CMP_G(eax, 1)) { sub_0010CF33(); return; } /* jg: greater (signed >) */

loc_0010CF2D: ;
    eax = 0x11;
    esp += 4; return; /* ret */

}

/**
 * sub_0010CF40
 * Original: 0x0010CF40 - 0x0010D02F (239 bytes, 70 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0010CF40(void)
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

loc_0010CF40: ;
    PUSH32(esp, ebp);
    ebp = esp;
    esp = esp & 0xFFFFFFF0u;
    esp = esp - 0x104;
    PUSH32(esp, ebx);
    PUSH32(esp, esi);
    esi = MEM32(ebp + 8);
    eax = MEM32(esi + 0x3C8);
    (void)0; /* test eax, eax - flags set for next jcc */
    PUSH32(esp, edi);
    if (TEST_Z(eax, eax)) goto loc_0010D028; /* je: equal / zero */

loc_0010CF60: ;
    ebx = MEM32(ebp + 0xC);
    eax = esp + 0x60;
    PUSH32(esp, eax);
    ecx = esp + 0x18;
    PUSH32(esp, ecx);
    SET_LO8(eax, LO8(ebx));
    ecx = esi;
    PUSH32(esp, 0); sub_0010CE60(); /* call 0x0010CE60 */

loc_0010CF76: ;
    esp = esp + 8;
    if (TEST_Z(LO8(eax), LO8(eax))) goto loc_0010D028; /* je: equal / zero */

loc_0010CF81: ;
    edx = MEM32(esp + 0x1C);
    eax = MEM32(esp + 0x18);
    ecx = MEM32(esp + 0x14);
    PUSH32(esp, edx);
    PUSH32(esp, eax);
    PUSH32(esp, ecx);
    eax = esp + 0x2C;
    PUSH32(esp, 0); sub_004288F5(); /* call 0x004288F5 */

loc_0010CF99: ;
    PUSH32(esp, 0xBF800000u);
    PUSH32(esp, 0xBF800000u);
    edx = eax;
    PUSH32(esp, 0x5F3D64);
    PUSH32(esp, edx);
    PUSH32(esp, 0); sub_001DD750(); /* call 0x001DD750 */

loc_0010CFB0: ;
    esp = esp + 0x10;
    if (TEST_NZ(LO8(eax), LO8(eax))) goto loc_0010D028; /* jne: not equal / not zero */

loc_0010CFB7: ;
    fp_push(MEMF(esi + 0x114)); /* fld float */
    PUSH32(esp, ebx);
    fp_st1() *= fp_top(); fp_pop(); /* fmul */
    PUSH32(esp, 0); sub_00471288(); /* call 0x00471288 */

loc_0010CFC9: ;
    xmm0 = MEMF(ebp + 0x10); /* movss */
    xmm0 = xmm0 * MEMF(0x64A9F8); /* mulss */
    xmm0 = xmm0 * MEMF(0x64AA10); /* mulss */
    edi = esp + 0x18;
    PUSH32(esp, eax);
    PUSH32(esp, ecx);
    ecx = esp + 0x6C;
    eax = 0xB;
    MEMF(esp) = xmm0; /* movss */
    PUSH32(esp, 0); sub_0010C4D0(); /* call 0x0010C4D0 */

loc_0010CFF7: ;
    xmm0 = MEMF(ebp + 0x10); /* movss */
    esp = esp + 0xC;
    /* comiss xmm0, MEMF(0x64A9F4) - sets EFLAGS */
    if ((xmm0 <= MEMF(0x64A9F4))) goto loc_0010D028; /* jbe: below or equal (unsigned <=) */

loc_0010D008: ;
    esi = MEM32(esp + 0x100);
    xmm0 = MEMF(0x64A9F0); /* movss */
    PUSH32(esp, 0x401BE76D);
    PUSH32(esp, 2);
    eax = edi;
    PUSH32(esp, 0); sub_0010C640(); /* call 0x0010C640 */

loc_0010D025: ;
    esp = esp + 8;

loc_0010D028: ;
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
 * sub_0010D030
 * Original: 0x0010D030 - 0x0010D06E (62 bytes, 27 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0010D030(void)
{
    uint32_t ebp;
    int _flags = 0; /* fallback flag var */
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_0010D030: ;
    esp = esp - 0x10;
    (void)0; /* cmp LO8(eax), 1 - flags set for next jcc */
    PUSH32(esp, ebx);
    PUSH32(esp, ebp);
    ebp = MEM32(esp + 0x20);
    PUSH32(esp, esi);
    esi = MEM32(esp + 0x20);
    PUSH32(esp, edi);
    edi = ecx;
    if (CMP_EQ(LO8(eax), 1)) goto loc_0010D053; /* je: equal / zero */

loc_0010D045: ;
    if (CMP_EQ(LO8(eax), 2)) { sub_0010D06E(); return; } /* je: equal / zero */

loc_0010D049: ;
    POP32(esp, edi);
    POP32(esp, esi);
    POP32(esp, ebp);
    SET_LO8(eax, 0); /* xor self */
    POP32(esp, ebx);
    esp = esp + 0x10;
    esp += 4; return; /* ret */

loc_0010D053: ;
    eax = MEM32(edi + 0x4B0);
    ecx = MEM32(eax + 0x24);
    edx = MEM32(ecx + 8);
    eax = MEM32(edx + 0x10);
    ecx = esp + 0x10;
    PUSH32(esp, ecx);
    ebx = 0x5E7494;
    g_seh_ebp = ebp; sub_0010D087(); return; /* tail jmp 0x0010D087 */

}

/**
 * sub_0010D120
 * Original: 0x0010D120 - 0x0010D144 (36 bytes, 11 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0010D120(void)
{
    int _flags = 0; /* fallback flag var */
    int _cf = 0; /* carry flag */

loc_0010D120: ;
    if (CMP_NE(MEM32(esp + 4), 3)) { sub_0010D144(); return; } /* jne: not equal / not zero */

loc_0010D127: ;
    if (CMP_NE(MEM32(0x7FA1F8), 4)) { sub_0010D144(); return; } /* jne: not equal / not zero */

loc_0010D130: ;
    ecx = MEM32(esp + 8);
    PUSH32(esp, 0); sub_0010C5E0(); /* call 0x0010C5E0 */

loc_0010D139: ;
    SET_LO8(eax, (uint32_t)(-(int32_t)LO8(eax)));
    eax = _cf ? 0xFFFFFFFF : 0; /* sbb self (CF extend) */
    eax = eax & 3;
    eax = eax + 3;
    esp += 4; return; /* ret */

}

/**
 * sub_0010D150
 * Original: 0x0010D150 - 0x0010D182 (50 bytes, 18 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0010D150(void)
{
    uint32_t ebp;
    int _flags = 0; /* fallback flag var */

loc_0010D150: ;
    PUSH32(esp, ebp);
    ebp = esp;
    esp = esp & 0xFFFFFFF0u;
    esp = esp - 0xC0;
    ecx = MEM32(ebp + 8);
    eax = MEM32(ecx + 0x3C8);
    if (TEST_Z(eax, eax)) goto loc_0010D17E; /* je: equal / zero */

loc_0010D169: ;
    eax = esp + 0x10;
    PUSH32(esp, eax);
    SET_LO8(eax, MEM8(ebp + 0xC));
    edx = esp + 8;
    PUSH32(esp, edx);
    PUSH32(esp, 0); sub_0010D030(); /* call 0x0010D030 */

loc_0010D17B: ;
    esp = esp + 8;

loc_0010D17E: ;
    esp = ebp;
    POP32(esp, ebp);
    esp += 4; return; /* ret */

}

/**
 * sub_0010D190
 * Original: 0x0010D190 - 0x0010D1AD (29 bytes, 14 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0010D190(void)
{
    uint32_t ebp;
    int _flags = 0; /* fallback flag var */
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_0010D190: ;
    esp = esp - 0x10;
    (void)0; /* cmp LO8(eax), 1 - flags set for next jcc */
    PUSH32(esp, ebp);
    ebp = MEM32(esp + 0x18);
    PUSH32(esp, edi);
    edi = MEM32(esp + 0x20);
    if (CMP_EQ(LO8(eax), 1)) { sub_0010D1AD(); return; } /* je: equal / zero */

loc_0010D1A1: ;
    if (CMP_EQ(LO8(eax), 2)) { sub_0010D1AD(); return; } /* je: equal / zero */

loc_0010D1A5: ;
    POP32(esp, edi);
    SET_LO8(eax, 0); /* xor self */
    POP32(esp, ebp);
    esp = esp + 0x10;
    esp += 4; return; /* ret */

}

/**
 * sub_0010D270
 * Original: 0x0010D270 - 0x0010D2CA (90 bytes, 29 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0010D270(void)
{
    uint32_t ebp;
    int _flags = 0; /* fallback flag var */
    int _cf = 0; /* carry flag */
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_0010D270: ;
    eax = MEM32(esp + 4);
    if (CMP_A(eax, 8)) { sub_0010D2CA(); return; } /* ja: above (unsigned >) */

loc_0010D279: ;
    g_seh_ebp = ebp; RECOMP_ITAIL(MEM32(eax * 4 + 0x10D2D0)); return; /* indirect tail jmp */

    eax = 0x10;
    esp += 4; return; /* ret */

    ecx = MEM32(esp + 8);
    PUSH32(esp, 0); sub_0010C5E0(); /* call 0x0010C5E0 */

loc_0010D2AD: ;
    SET_LO8(eax, (uint32_t)(-(int32_t)LO8(eax)));
    eax = _cf ? 0xFFFFFFFF : 0; /* sbb self (CF extend) */
    eax = eax & 3;
    eax = eax + 3;
    esp += 4; return; /* ret */

loc_0010D2B8: ;
    eax = 1;
    esp += 4; return; /* ret */

}

/**
 * sub_0010D330
 * Original: 0x0010D330 - 0x0010D5D6 (678 bytes, 133 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0010D330(void)
{
    uint32_t ebp;
    int _flags = 0; /* fallback flag var */
    float xmm0, xmm1, xmm2, xmm3, xmm4, xmm5;

loc_0010D330: ;
    PUSH32(esp, ebp);
    ebp = esp;
    esp = esp & 0xFFFFFFF0u;
    esp = esp - 0x9C;
    (void)0; /* test eax, eax - flags set for next jcc */
    PUSH32(esp, edi);
    if (TEST_Z(eax, eax)) goto loc_0010D5D1; /* je: equal / zero */

loc_0010D345: ;
    xmm0 = MEMF(eax + 0x648); /* movss */
    xmm0 = xmm0 * MEMF(0x649BAC); /* mulss */
    xmm1 = MEMF(eax + 0x110); /* movss */
    /* comiss xmm1, xmm0 - sets EFLAGS */
    if ((xmm1 <= xmm0)) goto loc_0010D365; /* jbe: below or equal (unsigned <=) */

loc_0010D362: ;
    xmm0 = xmm1; /* movaps */

loc_0010D365: ;
    xmm1 = MEMF(0x648CE4); /* movss */
    /* comiss xmm0, xmm1 - sets EFLAGS */
    if ((xmm0 < xmm1)) goto loc_0010D5D1; /* jb: below (unsigned <) */

loc_0010D376: ;
    xmm2 = MEMF(0x648F78); /* movss */
    /* comiss xmm0, xmm2 - sets EFLAGS */
    if ((xmm0 <= xmm2)) goto loc_0010D386; /* jbe: below or equal (unsigned <=) */

loc_0010D383: ;
    xmm0 = xmm2; /* movaps */

loc_0010D386: ;
    eax = MEM32(ebp + 8);
    xmm0 = xmm0 - xmm1; /* subss */
    xmm0 = xmm0 * MEMF(0x648F54); /* mulss */
    xmm1 = MEMF(0x648D10); /* movss */
    xmm0 = xmm0 * xmm1; /* mulss */
    xmm0 = xmm0 + xmm1; /* addss */
    xmm0 = xmm0 * MEMF(ebp + 0x10); /* mulss */
    PUSH32(esp, 0x3E800000);
    ecx = 0; /* xor self */
    edi = esp + 0x64;
    MEMF(esp + 0x14) = xmm0; /* movss */
    PUSH32(esp, 0); sub_00191890(); /* call 0x00191890 */

loc_0010D3C0: ;
    xmm0 = MEMF(0x648E5C); /* movss */
    xmm5 = MEMF(0x648CE0); /* movss */
    xmm2 = MEMF(0x6490F4); /* movss */
    eax = MEM32(ebp + 0xC);
    xmm1 = 0.0f; /* xorps self = zero */
    xmm4 = MEMF(0x648D18); /* movss */
    MEMF(esp + 0x44) = xmm0; /* movss */
    MEMF(esp + 0x48) = xmm0; /* movss */
    xmm0 = MEMF(0x648F60); /* movss */
    MEMF(esp + 0x38) = xmm0; /* movss */
    xmm0 = MEMF(ebp + 0x10); /* movss */
    xmm0 = xmm0 * xmm0; /* mulss */
    xmm3 = xmm0; /* movaps */
    xmm3 = xmm3 * xmm2; /* mulss */
    xmm0 = xmm0 * xmm5; /* mulss */
    MEMF(esp + 0x24) = xmm2; /* movss */
    MEMF(esp + 0x58) = xmm0; /* movss */
    xmm0 = MEMF(esp + 0x14); /* movss */
    xmm2 = xmm0; /* movaps */
    xmm2 = xmm2 * MEMF(0x648CF0); /* mulss */
    MEMF(esp + 0x3C) = xmm2; /* movss */
    MEMF(esp + 0x40) = xmm2; /* movss */
    xmm2 = xmm0; /* movaps */
    xmm0 = xmm0 * MEMF(0x649550); /* mulss */
    xmm2 = xmm2 * MEMF(0x648EC8); /* mulss */
    eax = eax + 0xFFFFFFFDu;
    esp = esp + 4;
    (void)0; /* cmp eax, 0x17 - flags set for next jcc */
    MEMF(esp + 0x50) = xmm3; /* movss */
    xmm3 = MEMF(0x648D14); /* movss */
    MEMF(esp + 0x5C) = xmm0; /* movss */
    xmm0 = MEMF(0x6491DC); /* movss */
    MEMF(esp + 0x30) = xmm1; /* movss */
    MEMF(esp + 0x24) = xmm4; /* movss */
    MEMF(esp + 0x18) = xmm3; /* movss */
    MEMF(esp + 0x1C) = xmm1; /* movss */
    MEMF(esp + 0x48) = xmm4; /* movss */
    MEMF(esp + 0x4C) = xmm1; /* movss */
    MEMF(esp + 0x28) = xmm5; /* movss */
    MEMF(esp + 0x2C) = xmm3; /* movss */
    MEMF(esp + 0x58) = xmm2; /* movss */
    MEMF(esp + 0x10) = xmm0; /* movss */
    MEMF(esp + 0x14) = xmm1; /* movss */
    if (CMP_A(eax, 0x17)) goto loc_0010D573; /* ja: above (unsigned >) */

loc_0010D4BD: ;
    eax = ZX8(MEM8(eax + 0x10D5F0));
    { uint32_t _jt = MEM32(eax * 4 + 0x10D5D8); /* switch: 6 entries, 6 targets */
    if (_jt == 0x0010D4CBu) goto loc_0010D4CB;
    if (_jt == 0x0010D4E5u) goto loc_0010D4E5;
    if (_jt == 0x0010D507u) goto loc_0010D507;
    if (_jt == 0x0010D521u) goto loc_0010D521;
    if (_jt == 0x0010D53Bu) goto loc_0010D53B;
    if (_jt == 0x0010D573u) goto loc_0010D573;
    g_seh_ebp = ebp; RECOMP_ITAIL(_jt); return; }

loc_0010D4CB: ;
    xmm0 = MEMF(0x649BA8); /* movss */
    MEMF(0x6B7A10) = xmm0; /* movss */
    xmm0 = MEMF(0x649BA4); /* movss */
    goto loc_0010D54B;

loc_0010D4E5: ;
    xmm0 = MEMF(0x649BA0); /* movss */
    MEMF(0x6B7A08) = xmm0; /* movss */
    xmm0 = MEMF(0x649B9C); /* movss */
    MEMF(0x6B7A10) = xmm3; /* movss */
    goto loc_0010D553;

loc_0010D507: ;
    xmm0 = MEMF(0x649BA0); /* movss */
    MEMF(0x6B7A10) = xmm0; /* movss */
    xmm0 = MEMF(0x649B98); /* movss */
    goto loc_0010D54B;

loc_0010D521: ;
    xmm0 = MEMF(0x649B98); /* movss */
    MEMF(0x6B7A08) = xmm0; /* movss */
    MEMF(0x6B7A10) = xmm3; /* movss */
    goto loc_0010D553;

loc_0010D53B: ;
    xmm0 = MEMF(0x649B98); /* movss */
    MEMF(0x6B7A10) = xmm0; /* movss */

loc_0010D54B: ;
    MEMF(0x6B7A08) = xmm3; /* movss */

loc_0010D553: ;
    MEMF(0x6B7A0C) = xmm1; /* movss */
    MEMF(0x6B7A14) = xmm1; /* movss */
    MEMF(0x6B7A18) = xmm0; /* movss */
    MEMF(0x6B7A1C) = xmm1; /* movss */

loc_0010D573: ;
    PUSH32(esp, 0x21030000);
    PUSH32(esp, 0x1911F0);
    ecx = esp + 0x18;
    PUSH32(esp, ecx);
    edx = esp + 0x64;
    PUSH32(esp, edx);
    eax = esp + 0x38;
    PUSH32(esp, eax);
    ecx = esp + 0x5C;
    PUSH32(esp, ecx);
    edx = esp + 0x50;
    PUSH32(esp, edx);
    eax = esp + 0x34;
    PUSH32(esp, eax);
    ecx = esp + 0x40;
    PUSH32(esp, ecx);
    edx = esp + 0x54;
    PUSH32(esp, edx);
    eax = esp + 0x68;
    PUSH32(esp, eax);
    ecx = esp + 0x8C;
    PUSH32(esp, ecx);
    eax = esp + 0x80;
    MEMF(0x6B7A20) = xmm3; /* movss */
    MEMF(0x6B7A24) = xmm1; /* movss */
    PUSH32(esp, 0); sub_00190E40(); /* call 0x00190E40 */

loc_0010D5CE: ;
    esp = esp + 0x30;

loc_0010D5D1: ;
    POP32(esp, edi);
    esp = ebp;
    POP32(esp, ebp);
    esp += 4; return; /* ret */

}

/**
 * sub_0010D610
 * Original: 0x0010D610 - 0x0010D669 (89 bytes, 33 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0010D610(void)
{
    uint32_t ebp;
    int _flags = 0; /* fallback flag var */

loc_0010D610: ;
    PUSH32(esp, ebp);
    ebp = esp;
    esp = esp & 0xFFFFFFF0u;
    esp = esp - 0xBC;
    eax = MEM32(edi + 0x3C8);
    (void)0; /* test eax, eax - flags set for next jcc */
    PUSH32(esp, esi);
    if (TEST_Z(eax, eax)) goto loc_0010D664; /* je: equal / zero */

loc_0010D627: ;
    eax = esp + 0x10;
    PUSH32(esp, eax);
    SET_LO8(eax, MEM8(ebp + 8));
    ecx = esp + 8;
    PUSH32(esp, edi);
    PUSH32(esp, ecx);
    edx = 0x6B429C;
    PUSH32(esp, 0); sub_0010D190(); /* call 0x0010D190 */

loc_0010D63F: ;
    esp = esp + 0xC;
    if (TEST_Z(LO8(eax), LO8(eax))) goto loc_0010D664; /* je: equal / zero */

loc_0010D646: ;
    edx = MEM32(ebp + 0x10);
    eax = MEM32(ebp + 0xC);
    PUSH32(esp, edx);
    PUSH32(esp, eax);
    ecx = esp + 0xC;
    PUSH32(esp, ecx);
    esi = esp + 0x9C;
    eax = edi;
    PUSH32(esp, 0); sub_0010D330(); /* call 0x0010D330 */

loc_0010D661: ;
    esp = esp + 0xC;

loc_0010D664: ;
    POP32(esp, esi);
    esp = ebp;
    POP32(esp, ebp);
    esp += 4; return; /* ret */

}

/**
 * sub_0010D670
 * Original: 0x0010D670 - 0x0010D68B (27 bytes, 10 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0010D670(void)
{

loc_0010D670: ;
    eax = MEM32(esp + 8);
    PUSH32(esp, edi);
    edi = MEM32(esp + 8);
    PUSH32(esp, 0x3F800000);
    PUSH32(esp, 0xA);
    PUSH32(esp, eax);
    PUSH32(esp, 0); sub_0010D610(); /* call 0x0010D610 */

loc_0010D686: ;
    esp = esp + 0xC;
    POP32(esp, edi);
    esp += 4; return; /* ret */

}

/**
 * sub_0010D690
 * Original: 0x0010D690 - 0x0010D6AB (27 bytes, 10 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0010D690(void)
{

loc_0010D690: ;
    eax = MEM32(esp + 8);
    PUSH32(esp, edi);
    edi = MEM32(esp + 8);
    PUSH32(esp, 0x3FDD70A4);
    PUSH32(esp, 3);
    PUSH32(esp, eax);
    PUSH32(esp, 0); sub_0010D610(); /* call 0x0010D610 */

loc_0010D6A6: ;
    esp = esp + 0xC;
    POP32(esp, edi);
    esp += 4; return; /* ret */

}

/**
 * sub_0010D6B0
 * Original: 0x0010D6B0 - 0x0010D6CB (27 bytes, 10 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0010D6B0(void)
{

loc_0010D6B0: ;
    eax = MEM32(esp + 8);
    PUSH32(esp, edi);
    edi = MEM32(esp + 8);
    PUSH32(esp, 0x3F800000);
    PUSH32(esp, 0x11);
    PUSH32(esp, eax);
    PUSH32(esp, 0); sub_0010D610(); /* call 0x0010D610 */

loc_0010D6C6: ;
    esp = esp + 0xC;
    POP32(esp, edi);
    esp += 4; return; /* ret */

}

/**
 * sub_0010D6D0
 * Original: 0x0010D6D0 - 0x0010D6EB (27 bytes, 10 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0010D6D0(void)
{

loc_0010D6D0: ;
    eax = MEM32(esp + 8);
    PUSH32(esp, edi);
    edi = MEM32(esp + 8);
    PUSH32(esp, 0x3F800000);
    PUSH32(esp, 0x19);
    PUSH32(esp, eax);
    PUSH32(esp, 0); sub_0010D610(); /* call 0x0010D610 */

loc_0010D6E6: ;
    esp = esp + 0xC;
    POP32(esp, edi);
    esp += 4; return; /* ret */

}

/**
 * sub_0010D6F0
 * Original: 0x0010D6F0 - 0x0010D70B (27 bytes, 10 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0010D6F0(void)
{

loc_0010D6F0: ;
    eax = MEM32(esp + 8);
    PUSH32(esp, edi);
    edi = MEM32(esp + 8);
    PUSH32(esp, 0x3FDD70A4);
    PUSH32(esp, 0x1A);
    PUSH32(esp, eax);
    PUSH32(esp, 0); sub_0010D610(); /* call 0x0010D610 */

loc_0010D706: ;
    esp = esp + 0xC;
    POP32(esp, edi);
    esp += 4; return; /* ret */

}

/**
 * sub_0010D710
 * Original: 0x0010D710 - 0x0010D72B (27 bytes, 10 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0010D710(void)
{

loc_0010D710: ;
    eax = MEM32(esp + 8);
    PUSH32(esp, edi);
    edi = MEM32(esp + 8);
    PUSH32(esp, 0x3FDD70A4);
    PUSH32(esp, 0x17);
    PUSH32(esp, eax);
    PUSH32(esp, 0); sub_0010D610(); /* call 0x0010D610 */

loc_0010D726: ;
    esp = esp + 0xC;
    POP32(esp, edi);
    esp += 4; return; /* ret */

}

/**
 * sub_0010D730
 * Original: 0x0010D730 - 0x0010D976 (582 bytes, 120 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0010D730(void)
{
    uint32_t ebp;
    int _flags = 0; /* fallback flag var */
    float xmm0, xmm1, xmm2, xmm3, xmm4, xmm5, xmm6, xmm7;

loc_0010D730: ;
    PUSH32(esp, ebp);
    ebp = esp;
    esp = esp & 0xFFFFFFF0u;
    esp = esp - 0x148;
    eax = MEM32(ebp + 8);
    ecx = MEM32(eax + 0x3C8);
    (void)0; /* test ecx, ecx - flags set for next jcc */
    PUSH32(esp, esi);
    PUSH32(esp, edi);
    if (TEST_Z(ecx, ecx)) goto loc_0010D970; /* je: equal / zero */

loc_0010D74F: ;
    ecx = esp + 0xA0;
    PUSH32(esp, ecx);
    PUSH32(esp, eax);
    SET_LO8(eax, MEM8(ebp + 0xC));
    edx = esp + 0x14;
    PUSH32(esp, edx);
    edx = 0x6B429C;
    PUSH32(esp, 0); sub_0010D190(); /* call 0x0010D190 */

loc_0010D76A: ;
    esp = esp + 0xC;
    if (TEST_Z(LO8(eax), LO8(eax))) goto loc_0010D970; /* je: equal / zero */

loc_0010D775: ;
    PUSH32(esp, 0x40A00000);
    ecx = 0; /* xor self */
    esi = esp + 0x124;
    eax = esp + 0x10;
    edi = esp + 0x64;
    PUSH32(esp, 0); sub_00191890(); /* call 0x00191890 */

loc_0010D790: ;
    xmm1 = MEMF(0x648F60); /* movss */
    xmm0 = 0.0f; /* xorps self = zero */
    esi = MEM32(0x7FA1F8);
    MEMF(esp + 0x30) = xmm1; /* movss */
    xmm1 = MEMF(0x648D1C); /* movss */
    xmm6 = MEMF(0x648D3C); /* movss */
    xmm7 = MEMF(0x648D80); /* movss */
    xmm2 = MEMF(0x64A888); /* movss */
    xmm3 = MEMF(0x64909C); /* movss */
    xmm4 = MEMF(0x648EB0); /* movss */
    xmm5 = MEMF(0x59D950); /* movss */
    MEMF(esp + 0x24) = xmm1; /* movss */
    xmm1 = MEMF(0x648D14); /* movss */
    MEMF(esp + 0x28) = xmm1; /* movss */
    xmm1 = MEMF(0x649030); /* movss */
    MEMF(esp + 0x10) = xmm1; /* movss */
    xmm1 = MEMF(0x648D10); /* movss */
    MEMF(esp + 0x1C) = xmm1; /* movss */
    xmm1 = MEMF(0x6493A8); /* movss */
    MEMF(esp + 0x54) = xmm1; /* movss */
    xmm1 = MEMF(0x64908C); /* movss */
    MEMF(esp + 0x58) = xmm1; /* movss */
    xmm1 = MEMF(0x649428); /* movss */
    MEMF(esp + 0x34) = xmm1; /* movss */
    xmm1 = MEMF(0x648CF0); /* movss */
    MEMF(esp + 0x5C) = xmm1; /* movss */
    MEMF(esp + 0x60) = xmm1; /* movss */
    xmm1 = MEMF(0x648CE0); /* movss */
    MEMF(esp + 0x4C) = xmm1; /* movss */
    xmm1 = MEMF(0x648E64); /* movss */
    MEMF(esp + 0x50) = xmm1; /* movss */
    xmm1 = MEMF(0x649418); /* movss */
    esp = esp + 4;
    MEMF(esp + 0x38) = xmm0; /* movss */
    MEMF(esp + 0x3C) = xmm0; /* movss */
    MEMF(esp + 0x28) = xmm0; /* movss */
    MEMF(esp + 0x10) = xmm0; /* movss */
    MEMF(esp + 0x1C) = xmm0; /* movss */
    MEMF(esp + 0x34) = xmm0; /* movss */
    MEMF(esp + 0x40) = xmm1; /* movss */
    MEMF(esp + 0x44) = xmm0; /* movss */
    eax = esi;
    xmm0 = xmm6; /* movaps */
    xmm1 = xmm7; /* movaps */
    PUSH32(esp, 0); sub_00064030(); /* call 0x00064030 */

loc_0010D8B1: ;
    if (TEST_NZ(LO8(eax), LO8(eax))) goto loc_0010D8BA; /* jne: not equal / not zero */

loc_0010D8B5: ;
    if (CMP_NE(esi, 0x3B)) goto loc_0010D8E5; /* jne: not equal / not zero */

loc_0010D8BA: ;
    xmm0 = MEMF(0x64AA0C); /* movss */
    xmm2 = MEMF(0x64AA08); /* movss */
    xmm4 = MEMF(0x64AA04); /* movss */
    xmm5 = MEMF(0x64AA00); /* movss */
    xmm1 = xmm3; /* movaps */
    xmm3 = MEMF(0x64A9FC); /* movss */

loc_0010D8E5: ;
    PUSH32(esp, 0x1030002);
    PUSH32(esp, 0x191380);
    eax = esp + 0x48;
    PUSH32(esp, eax);
    ecx = esp + 0x54;
    PUSH32(esp, ecx);
    edx = esp + 0x68;
    PUSH32(esp, edx);
    eax = esp + 0x44;
    PUSH32(esp, eax);
    ecx = esp + 0x68;
    PUSH32(esp, ecx);
    edx = esp + 0x34;
    PUSH32(esp, edx);
    eax = esp + 0x40;
    PUSH32(esp, eax);
    ecx = esp + 0x4C;
    PUSH32(esp, ecx);
    edx = esp + 0x60;
    PUSH32(esp, edx);
    eax = esp + 0x8C;
    PUSH32(esp, eax);
    eax = esp + 0x3C;
    MEMF(0x6B7A08) = xmm0; /* movss */
    MEMF(0x6B7A0C) = xmm1; /* movss */
    MEMF(0x6B7A10) = xmm2; /* movss */
    MEMF(0x6B7A14) = xmm3; /* movss */
    MEMF(0x6B7A18) = xmm4; /* movss */
    MEMF(0x6B7A1C) = xmm5; /* movss */
    MEMF(0x6B7A20) = xmm6; /* movss */
    MEMF(0x6B7A24) = xmm7; /* movss */
    PUSH32(esp, 0); sub_00190E40(); /* call 0x00190E40 */

loc_0010D96D: ;
    esp = esp + 0x30;

loc_0010D970: ;
    POP32(esp, edi);
    POP32(esp, esi);
    esp = ebp;
    POP32(esp, ebp);
    esp += 4; return; /* ret */

}

/**
 * sub_0010D980
 * Original: 0x0010D980 - 0x0010DA01 (129 bytes, 42 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0010D980(void)
{
    int _flags = 0; /* fallback flag var */
    float xmm0;

loc_0010D980: ;
    eax = MEM32(esp + 4);
    ecx = MEM32(eax + 0x3C8);
    esp = esp - 0xC;
    if (TEST_Z(ecx, ecx)) goto loc_0010D9FD; /* je: equal / zero */

loc_0010D991: ;
    PUSH32(esp, 0);
    PUSH32(esp, eax);
    eax = esp + 8;
    PUSH32(esp, eax);
    SET_LO8(eax, MEM8(esp + 0x20));
    edx = 0x6B429C;
    PUSH32(esp, 0); sub_0010D190(); /* call 0x0010D190 */

loc_0010D9A7: ;
    esp = esp + 0xC;
    PUSH32(esp, 0); sub_003E2480(); /* call 0x003E2480 */

loc_0010D9AF: ;
    eax = eax & 0x80000003u;
    if (((int32_t)eax >= 0)) goto loc_0010D9BB; /* jns: not sign (positive) */

loc_0010D9B6: ;
    eax--;
    eax = eax | 0xFFFFFFFCu;
    eax++;

loc_0010D9BB: ;
    PUSH32(esp, 0xFF);
    PUSH32(esp, 0);
    PUSH32(esp, 0);
    PUSH32(esp, 0);
    eax = eax + 6;
    PUSH32(esp, 0x16);
    PUSH32(esp, eax);
    PUSH32(esp, 0);
    PUSH32(esp, 0); sub_003E1D70(); /* call 0x003E1D70 */

loc_0010D9D3: ;
    xmm0 = xmm0 * MEMF(0x64912C); /* mulss */
    edx = MEM32(esp + 0x20);
    eax = MEM32(esp + 0x1C);
    PUSH32(esp, ecx);
    ecx = MEM32(esp + 0x28);
    MEMF(esp) = xmm0; /* movss */
    PUSH32(esp, ecx);
    PUSH32(esp, edx);
    PUSH32(esp, eax);
    eax = 0xFF;
    PUSH32(esp, 0); sub_00112C50(); /* call 0x00112C50 */

loc_0010D9FA: ;
    esp = esp + 0x2C;

loc_0010D9FD: ;
    esp = esp + 0xC;
    esp += 4; return; /* ret */

}

/**
 * sub_0010DA10
 * Original: 0x0010DA10 - 0x0010DCCF (703 bytes, 160 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0010DA10(void)
{
    uint32_t ebp;
    int _flags = 0; /* fallback flag var */
    float xmm0, xmm1, xmm2, xmm5, xmm6;
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_0010DA10: ;
    eax = MEM32(0x84A5F8);
    xmm5 = MEMF(0x648E14); /* movss */
    esp = esp - 0x84;
    PUSH32(esp, ebx);
    PUSH32(esp, ebp);
    PUSH32(esp, esi);
    PUSH32(esp, edi);
    edi = 0; /* xor self */
    if (CMP_EQ(eax, edi)) goto loc_0010DA85; /* je: equal / zero */

loc_0010DA2D: ;
    xmm0 = MEMF(eax + 0x648); /* movss */
    xmm0 = xmm0 * MEMF(0x649BAC); /* mulss */
    xmm1 = MEMF(eax + 0x110); /* movss */
    /* comiss xmm1, xmm0 - sets EFLAGS */
    if ((xmm1 <= xmm0)) goto loc_0010DA4D; /* jbe: below or equal (unsigned <=) */

loc_0010DA4A: ;
    xmm0 = xmm1; /* movaps */

loc_0010DA4D: ;
    xmm2 = MEMF(0x648CE4); /* movss */
    /* comiss xmm0, xmm2 - sets EFLAGS */
    if ((xmm0 < xmm2)) goto loc_0010DA85; /* jb: below (unsigned <) */

loc_0010DA5A: ;
    xmm1 = MEMF(0x648F78); /* movss */
    /* comiss xmm0, xmm1 - sets EFLAGS */
    if ((xmm0 <= xmm1)) goto loc_0010DA6A; /* jbe: below or equal (unsigned <=) */

loc_0010DA67: ;
    xmm0 = xmm1; /* movaps */

loc_0010DA6A: ;
    xmm0 = xmm0 - xmm2; /* subss */
    xmm0 = xmm0 * MEMF(0x648F54); /* mulss */
    xmm0 = xmm0 * MEMF(0x648F58); /* mulss */
    xmm0 = xmm0 + xmm5; /* addss */
    xmm5 = xmm0; /* movaps */

loc_0010DA85: ;
    PUSH32(esp, 0); sub_003E2480(); /* call 0x003E2480 */

loc_0010DA8A: ;
    eax = eax & 0x8000000Fu;
    if (((int32_t)eax >= 0)) goto loc_0010DA96; /* jns: not sign (positive) */

loc_0010DA91: ;
    eax--;
    eax = eax | 0xFFFFFFF0u;
    eax++;

loc_0010DA96: ;
    xmm6 = 0.0f; /* xorps self = zero */
    eax = eax + 0x14;
    MEM16(esp + 0x18) = LO16(eax);
    MEMF(esp + 0x1C) = xmm6; /* movss */
    MEMF(esp + 0x20) = xmm6; /* movss */
    PUSH32(esp, 0); sub_003E2480(); /* call 0x003E2480 */

loc_0010DAB2: ;
    edx = ((int32_t)eax < 0) ? 0xFFFFFFFF : 0; /* cdq */
    ecx = 0x11;
    { int64_t _dividend = ((int64_t)(int32_t)edx << 32) | eax;
      eax = (uint32_t)((int32_t)(_dividend / (int32_t)ecx));
      edx = (uint32_t)((int32_t)(_dividend % (int32_t)ecx)); }
    eax = 4;
    esi = 2;
    xmm0 = xmm5; /* movaps */
    xmm0 = xmm0 * MEMF(0x649E48); /* mulss */
    MEM32(esp + 0x28) = eax;
    MEM32(esp + 0x2C) = esi;
    MEM32(esp + 0x30) = edi;
    MEM32(esp + 0x34) = eax;
    MEM32(esp + 0x38) = esi;
    MEM32(esp + 0x3C) = edi;
    MEM32(esp + 0x40) = 0x303;
    MEM32(esp + 0x44) = 0x6C;
    MEM16(esp + 0x48) = 0x14;
    MEM16(esp + 0x4A) = 0xC;
    MEM16(esp + 0x4C) = 0x1B;
    MEMF(esp + 0x50) = xmm0; /* movss */
    SET_LO8(edx, LO8(edx) + 0x20);
    MEM8(esp + 0x27) = LO8(edx);
    PUSH32(esp, 0); sub_003E1D70(); /* call 0x003E1D70 */

loc_0010DB1E: ;
    xmm0 = xmm0 * MEMF(0x649024); /* mulss */
    xmm0 = xmm0 + MEMF(0x64A4E4); /* addss */
    xmm0 = xmm0 * xmm5; /* mulss */
    MEMF(esp + 0x58) = xmm0; /* movss */
    MEMF(esp + 0x54) = xmm0; /* movss */
    xmm0 = MEMF(esp + 0xA0); /* movss */
    MEMF(esp + 0x5C) = xmm0; /* movss */
    xmm0 = MEMF(esp + 0xA4); /* movss */
    MEMF(esp + 0x60) = xmm0; /* movss */
    xmm0 = MEMF(esp + 0xA8); /* movss */
    MEMF(esp + 0x64) = xmm0; /* movss */
    PUSH32(esp, 0); sub_003E1D70(); /* call 0x003E1D70 */

loc_0010DB70: ;
    xmm0 = xmm0 * MEMF(0x6491B0); /* mulss */
    xmm0 = xmm0 + MEMF(0x64A0A8); /* addss */
    PUSH32(esp, ecx);
    xmm0 = xmm0 * xmm5; /* mulss */
    xmm0 = xmm0 * MEMF(0x648E54); /* mulss */
    MEMF(esp) = xmm0; /* movss */
    PUSH32(esp, 0); sub_003E2480(); /* call 0x003E2480 */

loc_0010DB97: ;
    edx = ((int32_t)eax < 0) ? 0xFFFFFFFF : 0; /* cdq */
    ecx = 0xB;
    { int64_t _dividend = ((int64_t)(int32_t)edx << 32) | eax;
      eax = (uint32_t)((int32_t)(_dividend / (int32_t)ecx));
      edx = (uint32_t)((int32_t)(_dividend % (int32_t)ecx)); }
    edi = esp + 0x78;
    edx = edx - ecx;
    PUSH32(esp, edx);
    edx = MEM32(esp + 0xC0);
    PUSH32(esp, edx);
    PUSH32(esp, 0); sub_00110510(); /* call 0x00110510 */

loc_0010DBB3: ;
    esp = esp + 0xC;
    MEMF(esp + 0x80) = xmm6; /* movss */
    PUSH32(esp, 0); sub_003E2480(); /* call 0x003E2480 */

loc_0010DBC4: ;
    edi = eax;
    edi = edi & 1;
    edi = edi << 1;
    PUSH32(esp, 0); sub_003E2480(); /* call 0x003E2480 */

loc_0010DBD0: ;
    xmm0 = MEMF(0x64A0C8); /* movss */
    eax = eax & 1;
    edi = edi | eax;
    edi = edi << 6;
    SET_LO8(eax, LO8(eax) | 0xFF);
    edi = edi | 0xE05;
    MEMF(esp + 0x14) = xmm0; /* movss */
    ebp = MEM32(esp + 0x14);
    MEM32(esp + 0x84) = edi;
    MEM8(esp + 0x8C) = 0xA;
    MEM8(esp + 0x8D) = LO8(eax);
    MEM8(esp + 0x8E) = LO8(eax);
    MEM8(esp + 0x26) = 0;
    MEM8(esp + 0x25) = 0;
    SET_LO8(ebx, 0); /* xor self */
    MEM32(esp + 0x10) = esi;
    /* nop */

loc_0010DC20: ;
    SET_LO8(edx, MEM8(esp + 0x25));
    SET_LO8(ecx, MEM8(esp + 0x26));
    eax = MEM32(0x771CD0);
    SET_LO8(ebx, LO8(ebx) + 0x3A);
    SET_LO8(edx, LO8(edx) + 0x26);
    SET_LO8(ecx, LO8(ecx) + 0x13);
    (void)0; /* cmp eax, 0x2EE - flags set for next jcc */
    MEM8(esp + 0x24) = LO8(ebx);
    MEM8(esp + 0x25) = LO8(edx);
    MEM8(esp + 0x26) = LO8(ecx);
    if (CMP_GE(eax, 0x2EE)) goto loc_0010DC9C; /* jge: greater or equal (signed >=) */

loc_0010DC49: ;
    eax = MEM32(esp + 0xD0);
    PUSH32(esp, eax);
    PUSH32(esp, 0x6C);
    eax = 0x174;
    PUSH32(esp, 0); sub_000D9C60(); /* call 0x000D9C60 */

loc_0010DC5D: ;
    esp = esp + 8;
    if (TEST_Z(eax, eax)) goto loc_0010DC9C; /* je: equal / zero */

loc_0010DC64: ;
    edx = eax + 0x2C;
    ecx = 0x1F;
    esi = esp + 0x18;
    edi = edx;
    memcpy((void*)XBOX_PTR(edi), (void*)XBOX_PTR(esi), ecx * 4);
    esi += ecx * 4; edi += ecx * 4; ecx = 0; /* rep movsd */
    SET_LO16(ecx, MEM16(edx));
    MEM16(eax + 0x2E) = LO16(ecx);
    ecx = MEM32(0x771CD0);
    ecx++;
    MEM8(eax + 0x154) = 0;
    MEM8(eax + 0x160) = 0;
    MEM32(0x771CD0) = ecx;
    MEM32(eax + 0x170) = ebp;

loc_0010DC9C: ;
    eax = MEM32(esp + 0x10);
    xmm0 = MEMF(esp + 0x60); /* movss */
    xmm0 = xmm0 + MEMF(0x648CE4); /* addss */
    eax--;
    MEMF(esp + 0x60) = xmm0; /* movss */
    MEM32(esp + 0x10) = eax;
    if ((eax != 0)) goto loc_0010DC20; /* jne: not equal / not zero */

loc_0010DCBF: ;
    POP32(esp, edi);
    POP32(esp, esi);
    POP32(esp, ebp);
    eax = 1;
    POP32(esp, ebx);
    esp = esp + 0x84;
    esp += 4; return; /* ret */

}

/**
 * sub_0010DCD0
 * Original: 0x0010DCD0 - 0x0010DCD6 (6 bytes, 2 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0010DCD0(void)
{

loc_0010DCD0: ;
    eax = 0x13;
    esp += 4; return; /* ret */

}

/**
 * sub_0010DCE0
 * Original: 0x0010DCE0 - 0x0010DEED (525 bytes, 106 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0010DCE0(void)
{
    uint32_t ebp;
    int _flags = 0; /* fallback flag var */
    float xmm0, xmm1, xmm2;

loc_0010DCE0: ;
    PUSH32(esp, ebp);
    ebp = esp;
    esp = esp & 0xFFFFFFF0u;
    esp = esp - 0x148;
    eax = MEM32(ebp + 8);
    ecx = MEM32(eax + 0x3C8);
    (void)0; /* test ecx, ecx - flags set for next jcc */
    PUSH32(esp, esi);
    PUSH32(esp, edi);
    if (TEST_Z(ecx, ecx)) goto loc_0010DEE7; /* je: equal / zero */

loc_0010DCFF: ;
    ecx = esp + 0xA0;
    PUSH32(esp, ecx);
    PUSH32(esp, eax);
    SET_LO8(eax, MEM8(ebp + 0xC));
    edx = esp + 0x14;
    PUSH32(esp, edx);
    edx = 0x6B429C;
    PUSH32(esp, 0); sub_0010D190(); /* call 0x0010D190 */

loc_0010DD1A: ;
    esp = esp + 0xC;
    if (TEST_Z(LO8(eax), LO8(eax))) goto loc_0010DEE7; /* je: equal / zero */

loc_0010DD25: ;
    PUSH32(esp, 0x40A00000);
    ecx = 0; /* xor self */
    esi = esp + 0x124;
    eax = esp + 0x10;
    edi = esp + 0x64;
    PUSH32(esp, 0); sub_00191890(); /* call 0x00191890 */

loc_0010DD40: ;
    xmm1 = MEMF(0x648F60); /* movss */
    xmm0 = MEMF(0x648FD8); /* movss */
    xmm2 = MEMF(0x649550); /* movss */
    PUSH32(esp, 0x1030002);
    PUSH32(esp, 0x191380);
    MEMF(esp + 0x38) = xmm1; /* movss */
    xmm1 = MEMF(0x648CDC); /* movss */
    eax = esp + 0x4C;
    PUSH32(esp, eax);
    MEMF(esp + 0x30) = xmm1; /* movss */
    xmm1 = MEMF(0x648D18); /* movss */
    ecx = esp + 0x58;
    PUSH32(esp, ecx);
    edx = esp + 0x6C;
    PUSH32(esp, edx);
    MEMF(esp + 0x3C) = xmm1; /* movss */
    xmm1 = MEMF(0x648D50); /* movss */
    eax = esp + 0x48;
    PUSH32(esp, eax);
    MEMF(esp + 0x54) = xmm0; /* movss */
    xmm0 = MEMF(0x64908C); /* movss */
    MEMF(esp + 0x28) = xmm1; /* movss */
    xmm1 = MEMF(0x648D10); /* movss */
    MEMF(esp + 0x6C) = xmm2; /* movss */
    xmm2 = MEMF(0x648F78); /* movss */
    ecx = esp + 0x6C;
    PUSH32(esp, ecx);
    edx = esp + 0x38;
    PUSH32(esp, edx);
    MEMF(esp + 0x60) = xmm0; /* movss */
    xmm0 = 0.0f; /* xorps self = zero */
    MEMF(esp + 0x3C) = xmm1; /* movss */
    xmm1 = MEMF(0x648E64); /* movss */
    MEMF(esp + 0x78) = xmm2; /* movss */
    xmm2 = MEMF(0x5A005C); /* movss */
    eax = esp + 0x44;
    PUSH32(esp, eax);
    MEMF(esp + 0x50) = xmm0; /* movss */
    MEMF(esp + 0x38) = xmm0; /* movss */
    MEMF(esp + 0x44) = xmm1; /* movss */
    MEMF(esp + 0x58) = xmm2; /* movss */
    xmm2 = MEMF(0x648EA4); /* movss */
    MEMF(esp + 0x74) = xmm1; /* movss */
    xmm1 = MEMF(0x648D58); /* movss */
    MEMF(esp + 0x6C) = xmm0; /* movss */
    xmm0 = MEMF(0x648EB0); /* movss */
    ecx = esp + 0x50;
    PUSH32(esp, ecx);
    edx = esp + 0x64;
    MEMF(esp + 0x60) = xmm2; /* movss */
    xmm2 = MEMF(0x648CF0); /* movss */
    MEMF(esp + 0x6C) = xmm1; /* movss */
    xmm1 = MEMF(0x649A10); /* movss */
    MEMF(0x6B7A08) = xmm0; /* movss */
    xmm0 = MEMF(0x59D950); /* movss */
    PUSH32(esp, edx);
    eax = edi;
    MEMF(esp + 0x88) = xmm2; /* movss */
    MEMF(esp + 0x8C) = xmm2; /* movss */
    xmm2 = MEMF(0x648F58); /* movss */
    MEMF(0x6B7A0C) = xmm0; /* movss */
    MEMF(0x6B7A10) = xmm1; /* movss */
    xmm1 = MEMF(0x648D80); /* movss */
    MEMF(0x6B7A14) = xmm0; /* movss */
    MEMF(0x6B7A1C) = xmm0; /* movss */
    xmm0 = MEMF(0x648D3C); /* movss */
    PUSH32(esp, eax);
    eax = esp + 0x40;
    MEMF(esp + 0x7C) = xmm2; /* movss */
    MEMF(0x6B7A18) = xmm1; /* movss */
    MEMF(0x6B7A20) = xmm0; /* movss */
    MEMF(0x6B7A24) = xmm1; /* movss */
    PUSH32(esp, 0); sub_00190E40(); /* call 0x00190E40 */

loc_0010DEE4: ;
    esp = esp + 0x34;

loc_0010DEE7: ;
    POP32(esp, edi);
    POP32(esp, esi);
    esp = ebp;
    POP32(esp, ebp);
    esp += 4; return; /* ret */

}

/**
 * sub_0010DEF0
 * Original: 0x0010DEF0 - 0x0010DF03 (19 bytes, 7 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0010DEF0(void)
{
    int _flags = 0; /* fallback flag var */

loc_0010DEF0: ;
    eax = MEM32(esp + 4);
    if (TEST_S(eax, eax)) { sub_0010DF03(); return; } /* jl: less (signed <) */

loc_0010DEF8: ;
    if (CMP_G(eax, 1)) { sub_0010DF03(); return; } /* jg: greater (signed >) */

loc_0010DEFD: ;
    eax = 0x12;
    esp += 4; return; /* ret */

}

/**
 * sub_0010DF10
 * Original: 0x0010DF10 - 0x0010DFFF (239 bytes, 70 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0010DF10(void)
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

loc_0010DF10: ;
    PUSH32(esp, ebp);
    ebp = esp;
    esp = esp & 0xFFFFFFF0u;
    esp = esp - 0x104;
    PUSH32(esp, ebx);
    PUSH32(esp, esi);
    esi = MEM32(ebp + 8);
    eax = MEM32(esi + 0x3C8);
    (void)0; /* test eax, eax - flags set for next jcc */
    PUSH32(esp, edi);
    if (TEST_Z(eax, eax)) goto loc_0010DFF8; /* je: equal / zero */

loc_0010DF30: ;
    ebx = MEM32(ebp + 0xC);
    eax = esp + 0x60;
    PUSH32(esp, eax);
    ecx = esp + 0x18;
    PUSH32(esp, ecx);
    SET_LO8(eax, LO8(ebx));
    ecx = esi;
    PUSH32(esp, 0); sub_0010CE60(); /* call 0x0010CE60 */

loc_0010DF46: ;
    esp = esp + 8;
    if (TEST_Z(LO8(eax), LO8(eax))) goto loc_0010DFF8; /* je: equal / zero */

loc_0010DF51: ;
    edx = MEM32(esp + 0x1C);
    eax = MEM32(esp + 0x18);
    ecx = MEM32(esp + 0x14);
    PUSH32(esp, edx);
    PUSH32(esp, eax);
    PUSH32(esp, ecx);
    eax = esp + 0x2C;
    PUSH32(esp, 0); sub_004288F5(); /* call 0x004288F5 */

loc_0010DF69: ;
    PUSH32(esp, 0xBF800000u);
    PUSH32(esp, 0xBF800000u);
    edx = eax;
    PUSH32(esp, 0x5F3D78);
    PUSH32(esp, edx);
    PUSH32(esp, 0); sub_001DD750(); /* call 0x001DD750 */

loc_0010DF80: ;
    esp = esp + 0x10;
    if (TEST_NZ(LO8(eax), LO8(eax))) goto loc_0010DFF8; /* jne: not equal / not zero */

loc_0010DF87: ;
    fp_push(MEMF(esi + 0x114)); /* fld float */
    PUSH32(esp, ebx);
    fp_st1() *= fp_top(); fp_pop(); /* fmul */
    PUSH32(esp, 0); sub_00471288(); /* call 0x00471288 */

loc_0010DF99: ;
    xmm0 = MEMF(ebp + 0x10); /* movss */
    xmm0 = xmm0 * MEMF(0x64A9F8); /* mulss */
    xmm0 = xmm0 * MEMF(0x648CE0); /* mulss */
    edi = esp + 0x18;
    PUSH32(esp, eax);
    PUSH32(esp, ecx);
    ecx = esp + 0x6C;
    eax = 0xB;
    MEMF(esp) = xmm0; /* movss */
    PUSH32(esp, 0); sub_0010C4D0(); /* call 0x0010C4D0 */

loc_0010DFC7: ;
    xmm0 = MEMF(ebp + 0x10); /* movss */
    esp = esp + 0xC;
    /* comiss xmm0, MEMF(0x64A9F4) - sets EFLAGS */
    if ((xmm0 <= MEMF(0x64A9F4))) goto loc_0010DFF8; /* jbe: below or equal (unsigned <=) */

loc_0010DFD8: ;
    esi = MEM32(esp + 0x100);
    xmm0 = MEMF(0x64A9F0); /* movss */
    PUSH32(esp, 0x401BE76D);
    PUSH32(esp, 2);
    eax = edi;
    PUSH32(esp, 0); sub_0010C640(); /* call 0x0010C640 */

loc_0010DFF5: ;
    esp = esp + 8;

loc_0010DFF8: ;
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
 * sub_0010E000
 * Original: 0x0010E000 - 0x0010E0C4 (196 bytes, 67 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0010E000(void)
{
    uint32_t ebp;
    int _flags = 0; /* fallback flag var */
    float xmm0;

loc_0010E000: ;
    PUSH32(esp, ebp);
    ebp = esp;
    esp = esp & 0xFFFFFFF0u;
    esp = esp - 0x54;
    eax = MEM32(ebp + 8);
    ecx = MEM32(eax + 0x78);
    edx = MEM32(eax + 0x294);
    eax = MEM32(eax + 0x80);
    PUSH32(esp, ebx);
    PUSH32(esp, esi);
    PUSH32(esp, edi);
    esi = eax;
    PUSH32(esp, esi);
    edi = edx;
    PUSH32(esp, edi);
    ebx = ecx;
    MEM32(esp + 0x24) = eax;
    PUSH32(esp, ebx);
    eax = esp + 0x2C;
    MEM32(esp + 0x20) = ecx;
    MEM32(esp + 0x24) = edx;
    PUSH32(esp, 0); sub_004288F5(); /* call 0x004288F5 */

loc_0010E03C: ;
    PUSH32(esp, 0xBF800000u);
    PUSH32(esp, 0xBF800000u);
    ecx = eax;
    PUSH32(esp, 0x5F3D8C);
    PUSH32(esp, ecx);
    PUSH32(esp, 0); sub_001DD750(); /* call 0x001DD750 */

loc_0010E053: ;
    esp = esp + 0x10;
    if (TEST_NZ(LO8(eax), LO8(eax))) goto loc_0010E0BD; /* jne: not equal / not zero */

loc_0010E05A: ;
    PUSH32(esp, 0xFF);
    PUSH32(esp, 0);
    PUSH32(esp, 0);
    PUSH32(esp, 0);
    PUSH32(esp, 7);
    PUSH32(esp, 0); sub_003E2480(); /* call 0x003E2480 */

loc_0010E06C: ;
    edx = ((int32_t)eax < 0) ? 0xFFFFFFFF : 0; /* cdq */
    ecx = 0xF;
    { int64_t _dividend = ((int64_t)(int32_t)edx << 32) | eax;
      eax = (uint32_t)((int32_t)(_dividend / (int32_t)ecx));
      edx = (uint32_t)((int32_t)(_dividend % (int32_t)ecx)); }
    eax = 0xFF;
    edx = edx + 0x1B;
    PUSH32(esp, edx);
    PUSH32(esp, 0);
    PUSH32(esp, 0x43070000);
    PUSH32(esp, esi);
    PUSH32(esp, edi);
    PUSH32(esp, ebx);
    PUSH32(esp, 0); sub_00112C50(); /* call 0x00112C50 */

loc_0010E08C: ;
    xmm0 = MEMF(0x64A244); /* movss */
    PUSH32(esp, 0xF);
    PUSH32(esp, 0xC);
    PUSH32(esp, 0x39AEC33E);
    PUSH32(esp, 0x453B8000);
    eax = esp + 0x50;
    PUSH32(esp, 0); sub_0019B600(); /* call 0x0019B600 */

loc_0010E0AB: ;
    edx = esp + 0x50;
    PUSH32(esp, 0xFF);
    PUSH32(esp, edx);
    PUSH32(esp, 0); sub_0019A300(); /* call 0x0019A300 */

loc_0010E0BA: ;
    esp = esp + 0x44;

loc_0010E0BD: ;
    POP32(esp, edi);
    POP32(esp, esi);
    POP32(esp, ebx);
    esp = ebp;
    POP32(esp, ebp);
    esp += 4; return; /* ret */

}
