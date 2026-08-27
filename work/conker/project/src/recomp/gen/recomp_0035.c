/**
 * Burnout 3 - Recompiled code chunk 35
 * Functions: 250 (0x00306CA0 - 0x00317450)
 */

#define RECOMP_GENERATED_CODE
#include "recomp_funcs.h"
#include <math.h>

/**
 * sub_00306CA0
 * Original: 0x00306CA0 - 0x00306CB6 (22 bytes, 8 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00306CA0(void)
{

loc_00306CA0: ;
    PUSH32(esp, ebx);
    ebx = MEM32(esp + 8);
    PUSH32(esp, 0xFF);
    PUSH32(esp, 2);
    PUSH32(esp, 0); sub_00555B20(); /* call 0x00555B20 */

loc_00306CB1: ;
    esp = esp + 8;
    POP32(esp, ebx);
    esp += 4; return; /* ret */

}

/**
 * sub_00306CC0
 * Original: 0x00306CC0 - 0x00306CCC (12 bytes, 5 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00306CC0(void)
{

loc_00306CC0: ;
    PUSH32(esp, ebx);
    ebx = MEM32(esp + 8);
    PUSH32(esp, 0); sub_005561C0(); /* call 0x005561C0 */

loc_00306CCA: ;
    POP32(esp, ebx);
    esp += 4; return; /* ret */

}

/**
 * sub_00306CD0
 * Original: 0x00306CD0 - 0x00306CF5 (37 bytes, 13 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00306CD0(void)
{

loc_00306CD0: ;
    PUSH32(esp, esi);
    esi = MEM32(esp + 8);
    eax = 0; /* xor self */
    ecx = esi;
    PUSH32(esp, 0); sub_000B7350(); /* call 0x000B7350 */

loc_00306CDE: ;
    PUSH32(esp, 0xFF);
    PUSH32(esp, esi);
    ecx = 0x3E8;
    eax = 0; /* xor self */
    PUSH32(esp, 0); sub_000B79A0(); /* call 0x000B79A0 */

loc_00306CF0: ;
    esp = esp + 8;
    POP32(esp, esi);
    esp += 4; return; /* ret */

}

/**
 * sub_00306D00
 * Original: 0x00306D00 - 0x00306D14 (20 bytes, 7 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00306D00(void)
{

loc_00306D00: ;
    PUSH32(esp, ebx);
    ebx = MEM32(esp + 8);
    PUSH32(esp, 0xFF);
    PUSH32(esp, 0); sub_000B8F00(); /* call 0x000B8F00 */

loc_00306D0F: ;
    esp = esp + 4;
    POP32(esp, ebx);
    esp += 4; return; /* ret */

}

/**
 * sub_00306D20
 * Original: 0x00306D20 - 0x00306D34 (20 bytes, 7 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00306D20(void)
{

loc_00306D20: ;
    PUSH32(esp, ebx);
    ebx = MEM32(esp + 8);
    PUSH32(esp, 0xFF);
    PUSH32(esp, 0); sub_000B74E0(); /* call 0x000B74E0 */

loc_00306D2F: ;
    esp = esp + 4;
    POP32(esp, ebx);
    esp += 4; return; /* ret */

}

/**
 * sub_00306D40
 * Original: 0x00306D40 - 0x00306D54 (20 bytes, 7 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00306D40(void)
{

loc_00306D40: ;
    PUSH32(esp, edi);
    edi = MEM32(esp + 8);
    PUSH32(esp, 0xFF);
    PUSH32(esp, 0); sub_001402B0(); /* call 0x001402B0 */

loc_00306D4F: ;
    esp = esp + 4;
    POP32(esp, edi);
    esp += 4; return; /* ret */

}

/**
 * sub_00306D60
 * Original: 0x00306D60 - 0x00306D69 (9 bytes, 2 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00306D60(void)
{
    uint32_t ebp;
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_00306D60: ;
    eax = MEM32(esp + 4);
    g_seh_ebp = ebp; sub_00140450(); return; /* tail jmp 0x00140450 */

}

/**
 * sub_00306DB0
 * Original: 0x00306DB0 - 0x00306DBE (14 bytes, 6 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00306DB0(void)
{

loc_00306DB0: ;
    PUSH32(esp, esi);
    esi = MEM32(esp + 8);
    SET_LO8(eax, LO8(eax) | 0xFF);
    PUSH32(esp, 0); sub_000E6FA0(); /* call 0x000E6FA0 */

loc_00306DBC: ;
    POP32(esp, esi);
    esp += 4; return; /* ret */

}

/**
 * sub_00306DC0
 * Original: 0x00306DC0 - 0x00306DD3 (19 bytes, 8 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00306DC0(void)
{

loc_00306DC0: ;
    eax = MEM32(esp + 4);
    PUSH32(esp, ebx);
    PUSH32(esp, eax);
    SET_LO8(ebx, LO8(ebx) | 0xFF);
    PUSH32(esp, 0); sub_00138B90(); /* call 0x00138B90 */

loc_00306DCE: ;
    esp = esp + 4;
    POP32(esp, ebx);
    esp += 4; return; /* ret */

}

/**
 * sub_00306DE0
 * Original: 0x00306DE0 - 0x00306E4F (111 bytes, 32 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00306DE0(void)
{
    float xmm0;

loc_00306DE0: ;
    esp = esp - 8;
    MEM8(esp) = 3;
    MEM8(esp + 1) = 0xFF;
    PUSH32(esp, 0); sub_003E2480(); /* call 0x003E2480 */

loc_00306DF1: ;
    edx = ((int32_t)eax < 0) ? 0xFFFFFFFF : 0; /* cdq */
    ecx = 5;
    { int64_t _dividend = ((int64_t)(int32_t)edx << 32) | eax;
      eax = (uint32_t)((int32_t)(_dividend / (int32_t)ecx));
      edx = (uint32_t)((int32_t)(_dividend % (int32_t)ecx)); }
    PUSH32(esp, 0xFF);
    PUSH32(esp, 0);
    PUSH32(esp, 0x7F);
    PUSH32(esp, 0x437F0000);
    PUSH32(esp, 0x437F0000);
    PUSH32(esp, 0x437F0000);
    MEM8(esp + 0x1E) = 0;
    edx = edx + 4;
    MEM16(esp + 0x1A) = LO16(edx);
    PUSH32(esp, 0); sub_003E2480(); /* call 0x003E2480 */

loc_00306E23: ;
    edx = ((int32_t)eax < 0) ? 0xFFFFFFFF : 0; /* cdq */
    ecx = 3;
    { int64_t _dividend = ((int64_t)(int32_t)edx << 32) | eax;
      eax = (uint32_t)((int32_t)(_dividend / (int32_t)ecx));
      edx = (uint32_t)((int32_t)(_dividend % (int32_t)ecx)); }
    PUSH32(esp, ecx);
    ecx = MEM32(esp + 0x28);
    ecx = ecx + 0x78;
    edx = edx + 4;
    xmm0 = (float)(int32_t)edx; /* cvtsi2ss */
    edx = esp + 0x1C;
    MEMF(esp) = xmm0; /* movss */
    PUSH32(esp, edx);
    SET_LO8(edx, 0); /* xor self */
    PUSH32(esp, 0); sub_0011E790(); /* call 0x0011E790 */

loc_00306E4B: ;
    esp = esp + 0x28;
    esp += 4; return; /* ret */

}

/**
 * sub_00306E50
 * Original: 0x00306E50 - 0x00306EB5 (101 bytes, 32 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00306E50(void)
{
    uint32_t ebp;
    int _flags = 0; /* fallback flag var */

loc_00306E50: ;
    PUSH32(esp, ebp);
    ebp = esp;
    esp = esp & 0xFFFFFFF0u;
    esp = esp - 0x84;
    PUSH32(esp, ebx);
    ebx = MEM32(ebp + 8);
    eax = MEM32(ebx + 0x68);
    PUSH32(esp, esi);
    PUSH32(esp, edi);
    edi = 0; /* xor self */
    if (CMP_NE(eax, 0x77)) { sub_00306EB5(); return; } /* jne: not equal / not zero */

loc_00306E6C: ;
    SET_LO8(eax, MEM8(ebx + 0x60));
    (void)0; /* cmp LO8(eax), 2 - flags set for next jcc */
    MEM32(esp + 0x14) = ebx;
    MEM8(esp + 0x13) = 1;
    if (CMP_AE(LO8(eax), 2)) goto loc_00306EA0; /* jae: above or equal (unsigned >=) */

loc_00306E7C: ;
    eax = ZX8(LO8(eax));
    SET_LO8(eax, MEM8(eax + 0x776564));
    if (TEST_Z(LO8(eax), LO8(eax))) goto loc_00306EA0; /* je: equal / zero */

loc_00306E89: ;
    edi = SX8(LO8(eax));
    eax = MEM32(0x84A5F8);
    edi = (uint32_t)((int32_t)edi * (int32_t)0x6D0);
    edi = edi + eax;
    MEM8(esp + 0x12) = 1;
    g_seh_ebp = ebp; sub_00306EF2(); return; /* tail jmp 0x00306EF2 */

loc_00306EA0: ;
    ecx = MEM32(ebx + 0x568);
    eax = MEM32(ecx + 0x2B0);
    (void)0; /* test eax, eax - flags set for next jcc */
    MEM8(esp + 0x12) = (TEST_NZ(eax, eax)) ? 1 : 0; /* setne */
    g_seh_ebp = ebp; sub_00306EF2(); return; /* tail jmp 0x00306EF2 */

}

/**
 * sub_00307090
 * Original: 0x00307090 - 0x003070A3 (19 bytes, 7 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00307090(void)
{

loc_00307090: ;
    eax = MEM32(esp + 4);
    PUSH32(esp, ebx);
    SET_LO8(ebx, MEM8(esp + 0xC));
    SET_LO8(ebx, LO8(ebx) - 0x3E);
    PUSH32(esp, 0); sub_0018A280(); /* call 0x0018A280 */

loc_003070A1: ;
    POP32(esp, ebx);
    esp += 4; return; /* ret */

}

/**
 * sub_003070B0
 * Original: 0x003070B0 - 0x003070E7 (55 bytes, 16 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_003070B0(void)
{

loc_003070B0: ;
    esp = esp - 8;
    eax = MEM32(esp + 0xC);
    SET_LO8(ecx, MEM8(esp + 0x10));
    PUSH32(esp, 0x43);
    edx = esp + 4;
    PUSH32(esp, edx);
    MEM32(esp + 8) = eax;
    SET_LO8(eax, MEM8(eax + 0x10B));
    SET_LO8(ecx, LO8(ecx) - 0x3E);
    PUSH32(esp, 4);
    PUSH32(esp, 0x6B710C);
    MEM8(esp + 0x14) = LO8(eax);
    MEM8(esp + 0x15) = LO8(ecx);
    PUSH32(esp, 0); sub_000DAA60(); /* call 0x000DAA60 */

loc_003070E3: ;
    esp = esp + 0x18;
    esp += 4; return; /* ret */

}

/**
 * sub_003070F0
 * Original: 0x003070F0 - 0x0030713B (75 bytes, 25 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_003070F0(void)
{
    int _flags = 0; /* fallback flag var */

loc_003070F0: ;
    PUSH32(esp, ebx);
    PUSH32(esp, esi);
    esi = MEM32(esp + 0xC);
    PUSH32(esp, 0x605B44);
    PUSH32(esp, 0); sub_002F7C30(); /* call 0x002F7C30 */

loc_00307100: ;
    esp = esp + 4;
    if (CMP_NE(LO8(eax), 1)) goto loc_00307118; /* jne: not equal / not zero */

loc_00307107: ;
    PUSH32(esp, 0xFF);
    SET_LO8(eax, 0); /* xor self */
    ebx = esi;
    PUSH32(esp, 0); sub_0018B690(); /* call 0x0018B690 */

loc_00307115: ;
    esp = esp + 4;

loc_00307118: ;
    PUSH32(esp, 0x605B4C);
    PUSH32(esp, 0); sub_002F7C30(); /* call 0x002F7C30 */

loc_00307122: ;
    esp = esp + 4;
    if (CMP_NE(LO8(eax), 1)) goto loc_00307138; /* jne: not equal / not zero */

loc_00307129: ;
    PUSH32(esp, 0xFF);
    ebx = esi;
    PUSH32(esp, 0); sub_0018B690(); /* call 0x0018B690 */

loc_00307135: ;
    esp = esp + 4;

loc_00307138: ;
    POP32(esp, esi);
    POP32(esp, ebx);
    esp += 4; return; /* ret */

}

/**
 * sub_00307140
 * Original: 0x00307140 - 0x00307156 (22 bytes, 7 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00307140(void)
{

loc_00307140: ;
    ecx = MEM32(esp + 4);
    PUSH32(esp, 0);
    PUSH32(esp, 0xFF);
    SET_LO8(eax, 0); /* xor self */
    PUSH32(esp, 0); sub_001377D0(); /* call 0x001377D0 */

loc_00307152: ;
    esp = esp + 8;
    esp += 4; return; /* ret */

}

/**
 * sub_00307160
 * Original: 0x00307160 - 0x00307176 (22 bytes, 7 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00307160(void)
{

loc_00307160: ;
    ecx = MEM32(esp + 4);
    PUSH32(esp, 0);
    PUSH32(esp, 0xFF);
    SET_LO8(eax, 1);
    PUSH32(esp, 0); sub_001377D0(); /* call 0x001377D0 */

loc_00307172: ;
    esp = esp + 8;
    esp += 4; return; /* ret */

}

/**
 * sub_00307180
 * Original: 0x00307180 - 0x0030718D (13 bytes, 2 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00307180(void)
{
    uint32_t ebp;
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_00307180: ;
    MEM32(esp + 8) = 0xFF;
    g_seh_ebp = ebp; sub_0019FC30(); return; /* tail jmp 0x0019FC30 */

}

/**
 * sub_003071B0
 * Original: 0x003071B0 - 0x003071BD (13 bytes, 2 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_003071B0(void)
{
    uint32_t ebp;
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_003071B0: ;
    MEM32(esp + 8) = 0xFF;
    g_seh_ebp = ebp; sub_0019E2C0(); return; /* tail jmp 0x0019E2C0 */

}

/**
 * sub_003071E0
 * Original: 0x003071E0 - 0x003071EC (12 bytes, 5 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_003071E0(void)
{

loc_003071E0: ;
    PUSH32(esp, esi);
    esi = MEM32(esp + 8);
    PUSH32(esp, 0); sub_000D0920(); /* call 0x000D0920 */

loc_003071EA: ;
    POP32(esp, esi);
    esp += 4; return; /* ret */

}

/**
 * sub_003071F0
 * Original: 0x003071F0 - 0x0030725E (110 bytes, 31 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_003071F0(void)
{
    int _flags = 0; /* fallback flag var */
    float xmm0;

loc_003071F0: ;
    esp = esp - 0xC;
    xmm0 = MEMF(esi + 0x78); /* movss */
    eax = MEM32(esi + 0x23C);
    MEMF(esp) = xmm0; /* movss */
    xmm0 = MEMF(esi + 0x7C); /* movss */
    MEMF(esp + 4) = xmm0; /* movss */
    xmm0 = MEMF(esi + 0x80); /* movss */
    MEMF(esp + 8) = xmm0; /* movss */
    PUSH32(esp, 0); sub_00315260(); /* call 0x00315260 */

loc_00307221: ;
    if (TEST_Z(eax, eax)) goto loc_00307237; /* je: equal / zero */

loc_00307225: ;
    eax = MEM32(esi + 0x23C);
    PUSH32(esp, 0); sub_00315260(); /* call 0x00315260 */

loc_00307230: ;
    ecx = MEM32(eax + 0x64);
    if (TEST_NZ(ecx, ecx)) goto loc_00307239; /* jne: not equal / not zero */

loc_00307237: ;
    eax = esi;

loc_00307239: ;
    ecx = MEM32(esi + 0x5E0);
    edx = MEM32(esp + 0x10);
    PUSH32(esp, 1);
    PUSH32(esp, ecx);
    PUSH32(esp, 0xFF);
    PUSH32(esp, 0);
    PUSH32(esp, edx);
    ecx = esp + 0x14;
    PUSH32(esp, ecx);
    PUSH32(esp, esi);
    PUSH32(esp, eax);
    PUSH32(esp, 0); sub_0019BE40(); /* call 0x0019BE40 */

loc_0030725A: ;
    esp = esp + 0x2C;
    esp += 4; return; /* ret */

}

/**
 * sub_00307260
 * Original: 0x00307260 - 0x00307271 (17 bytes, 7 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00307260(void)
{

loc_00307260: ;
    PUSH32(esp, esi);
    esi = MEM32(esp + 8);
    PUSH32(esp, 1);
    PUSH32(esp, 0); sub_003071F0(); /* call 0x003071F0 */

loc_0030726C: ;
    esp = esp + 4;
    POP32(esp, esi);
    esp += 4; return; /* ret */

}

/**
 * sub_00307280
 * Original: 0x00307280 - 0x00307291 (17 bytes, 7 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00307280(void)
{

loc_00307280: ;
    PUSH32(esp, esi);
    esi = MEM32(esp + 8);
    PUSH32(esp, 0);
    PUSH32(esp, 0); sub_003071F0(); /* call 0x003071F0 */

loc_0030728C: ;
    esp = esp + 4;
    POP32(esp, esi);
    esp += 4; return; /* ret */

}

/**
 * sub_003072A0
 * Original: 0x003072A0 - 0x003073F4 (340 bytes, 100 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_003072A0(void)
{
    uint32_t ebp;
    int _flags = 0; /* fallback flag var */
    float xmm0;

loc_003072A0: ;
    PUSH32(esp, ebp);
    ebp = esp;
    esp = esp & 0xFFFFFFF0u;
    esp = esp - 0x64;
    PUSH32(esp, ebx);
    PUSH32(esp, esi);
    PUSH32(esp, edi);
    PUSH32(esp, 0xFF);
    PUSH32(esp, 0x4E);
    eax = 0x44;
    PUSH32(esp, 0); sub_000D9C60(); /* call 0x000D9C60 */

loc_003072BD: ;
    esi = MEM32(ebp + 8);
    edi = eax;
    eax = 0; /* xor self */
    esp = esp + 8;
    if (CMP_EQ(edi, eax)) goto loc_00307317; /* je: equal / zero */

loc_003072CB: ;
    xmm0 = MEMF(0x648D80); /* movss */
    MEMF(edi + 0x38) = xmm0; /* movss */
    xmm0 = 0.0f; /* xorps self = zero */
    MEM32(edi + 0x34) = eax;
    MEM32(edi + 0x30) = eax;
    eax = esi;
    MEM32(edi + 0x2C) = esi;
    MEMF(edi + 0x3C) = xmm0; /* movss */
    PUSH32(esp, 0); sub_001A7EF0(); /* call 0x001A7EF0 */

loc_003072F0: ;
    ebx = eax;
    if (TEST_Z(ebx, ebx)) goto loc_00307313; /* je: equal / zero */

loc_003072F6: ;
    PUSH32(esp, 0); sub_003E2480(); /* call 0x003E2480 */

loc_003072FB: ;
    edx = ((int32_t)eax < 0) ? 0xFFFFFFFF : 0; /* cdq */
    { int64_t _dividend = ((int64_t)(int32_t)edx << 32) | eax;
      eax = (uint32_t)((int32_t)(_dividend / (int32_t)ebx));
      edx = (uint32_t)((int32_t)(_dividend % (int32_t)ebx)); }
    MEM32(edi + 0x34) = edx;
    eax = MEM32(edx * 4 + 0x6B8CE8);
    PUSH32(esp, eax);
    eax = esi;
    PUSH32(esp, 0); sub_002F7B90(); /* call 0x002F7B90 */

loc_00307310: ;
    esp = esp + 4;

loc_00307313: ;
    MEM8(edi + 0x40) = MEM8(edi + 0x40) | 1;

loc_00307317: ;
    xmm0 = 0.0f; /* xorps self = zero */
    eax = MEM32(esi + 0x3C8);
    (void)0; /* test eax, eax - flags set for next jcc */
    MEMF(esp + 0x18) = xmm0; /* movss */
    MEMF(esp + 0x1C) = xmm0; /* movss */
    xmm0 = MEMF(0x649DB8); /* movss */
    MEMF(esp + 0x20) = xmm0; /* movss */
    if (TEST_Z(eax, eax)) goto loc_003073ED; /* je: equal / zero */

loc_00307342: ;
    SET_LO8(ecx, MEM8(esi + 0x16E));
    SET_LO8(ecx, LO8(ecx) & 0xF);
    if (CMP_EQ(LO8(ecx), 0xF)) goto loc_003073ED; /* je: equal / zero */

loc_00307354: ;
    PUSH32(esp, 0); sub_003E1D70(); /* call 0x003E1D70 */

loc_00307359: ;
    PUSH32(esp, 0); sub_003E1D70(); /* call 0x003E1D70 */

loc_0030735E: ;
    edx = esp + 0x30;
    PUSH32(esp, edx);
    PUSH32(esp, 0x5F47CC);
    PUSH32(esp, 0); sub_002F7810(); /* call 0x002F7810 */

loc_0030736D: ;
    eax = esp + 0x38;
    PUSH32(esp, eax);
    ecx = esp + 0x30;
    PUSH32(esp, ecx);
    edx = esp + 0x28;
    PUSH32(esp, edx);
    PUSH32(esp, 0); sub_001101F0(); /* call 0x001101F0 */

loc_00307381: ;
    esp = esp + 0x14;
    MEM8(esp + 0x10) = 3;
    MEM8(esp + 0x11) = 0xFF;
    PUSH32(esp, 0); sub_003E2480(); /* call 0x003E2480 */

loc_00307393: ;
    edx = ((int32_t)eax < 0) ? 0xFFFFFFFF : 0; /* cdq */
    ecx = 6;
    { int64_t _dividend = ((int64_t)(int32_t)edx << 32) | eax;
      eax = (uint32_t)((int32_t)(_dividend / (int32_t)ecx));
      edx = (uint32_t)((int32_t)(_dividend % (int32_t)ecx)); }
    PUSH32(esp, 0xFF);
    PUSH32(esp, 0);
    PUSH32(esp, 0x7F);
    PUSH32(esp, 0x437F0000);
    PUSH32(esp, 0x437F0000);
    PUSH32(esp, 0x437F0000);
    MEM8(esp + 0x2E) = 0;
    edx = edx + 0xA;
    MEM16(esp + 0x2A) = LO16(edx);
    PUSH32(esp, 0); sub_003E2480(); /* call 0x003E2480 */

loc_003073C5: ;
    edx = ((int32_t)eax < 0) ? 0xFFFFFFFF : 0; /* cdq */
    ecx = 0xC9;
    { int64_t _dividend = ((int64_t)(int32_t)edx << 32) | eax;
      eax = (uint32_t)((int32_t)(_dividend / (int32_t)ecx));
      edx = (uint32_t)((int32_t)(_dividend % (int32_t)ecx)); }
    PUSH32(esp, ecx);
    ecx = esp + 0x40;
    edx = edx + 0x37;
    xmm0 = (float)(int32_t)edx; /* cvtsi2ss */
    edx = esp + 0x2C;
    MEMF(esp) = xmm0; /* movss */
    PUSH32(esp, edx);
    SET_LO8(edx, 0); /* xor self */
    PUSH32(esp, 0); sub_0011E790(); /* call 0x0011E790 */

loc_003073EA: ;
    esp = esp + 0x20;

loc_003073ED: ;
    POP32(esp, edi);
    POP32(esp, esi);
    POP32(esp, ebx);
    esp = ebp;
    POP32(esp, ebp);
    esp += 4; return; /* ret */

}

/**
 * sub_00307400
 * Original: 0x00307400 - 0x0030760C (524 bytes, 140 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00307400(void)
{
    uint32_t ebp;
    int _flags = 0; /* fallback flag var */
    float xmm0, xmm1, xmm2;

loc_00307400: ;
    PUSH32(esp, ebp);
    ebp = esp;
    esp = esp & 0xFFFFFFF0u;
    esp = esp - 0x78;
    xmm0 = 0.0f; /* xorps self = zero */
    xmm1 = MEMF(0x64A5A0); /* movss */
    PUSH32(esp, esi);
    esi = eax;
    eax = MEM32(esi + 0x3C8);
    (void)0; /* test eax, eax - flags set for next jcc */
    MEMF(esp + 0x18) = xmm0; /* movss */
    MEMF(esp + 0x1C) = xmm0; /* movss */
    MEMF(esp + 0x30) = xmm0; /* movss */
    MEMF(esp + 0x34) = xmm0; /* movss */
    xmm0 = MEMF(0x649014); /* movss */
    PUSH32(esp, edi);
    MEMF(esp + 0x24) = xmm1; /* movss */
    MEMF(esp + 0x3C) = xmm0; /* movss */
    if (TEST_Z(eax, eax)) goto loc_00307606; /* je: equal / zero */

loc_00307452: ;
    SET_LO8(eax, MEM8(esi + 0x16E));
    SET_LO8(eax, LO8(eax) & 0xF);
    if (CMP_EQ(LO8(eax), 0xF)) goto loc_00307606; /* je: equal / zero */

loc_00307462: ;
    PUSH32(esp, 0); sub_003E1D70(); /* call 0x003E1D70 */

loc_00307467: ;
    xmm0 = xmm0 * MEMF(0x648E6C); /* mulss */
    xmm0 = xmm0 + MEMF(0x648EC8); /* addss */
    MEMF(esp + 0x14) = xmm0; /* movss */
    PUSH32(esp, 0); sub_003E1D70(); /* call 0x003E1D70 */

loc_00307482: ;
    (void)0; /* test LO8(ebx), LO8(ebx) - flags set for next jcc */
    xmm0 = xmm0 * MEMF(0x648CE0); /* mulss */
    xmm0 = xmm0 + MEMF(0x648CF4); /* addss */
    MEMF(esp + 0x18) = xmm0; /* movss */
    if (TEST_Z(LO8(ebx), LO8(ebx))) goto loc_003074A8; /* je: equal / zero */

loc_0030749C: ;
    ecx = esp + 0x40;
    PUSH32(esp, ecx);
    PUSH32(esp, 0x5F47CC);
    goto loc_003074B2;

loc_003074A8: ;
    edx = esp + 0x40;
    PUSH32(esp, edx);
    PUSH32(esp, 0x638334);

loc_003074B2: ;
    PUSH32(esp, 0); sub_002F7810(); /* call 0x002F7810 */

loc_003074B7: ;
    esp = esp + 8;
    eax = esp + 0x40;
    PUSH32(esp, eax);
    ecx = esp + 0x2C;
    PUSH32(esp, ecx);
    edx = esp + 0x24;
    PUSH32(esp, edx);
    PUSH32(esp, 0); sub_001101F0(); /* call 0x001101F0 */

loc_003074CE: ;
    esp = esp + 0xC;
    (void)0; /* test LO8(ebx), LO8(ebx) - flags set for next jcc */
    eax = esi;
    if (TEST_Z(LO8(ebx), LO8(ebx))) goto loc_003074DE; /* je: equal / zero */

loc_003074D7: ;
    PUSH32(esp, 0x5F47CC);
    goto loc_003074E3;

loc_003074DE: ;
    PUSH32(esp, 0x638334);

loc_003074E3: ;
    PUSH32(esp, 0); sub_002F77D0(); /* call 0x002F77D0 */

loc_003074E8: ;
    esp = esp + 4;
    PUSH32(esp, 0xFF);
    PUSH32(esp, 0xFFFFFFFFu);
    PUSH32(esp, 0);
    edi = eax;
    eax = esp + 0x34;
    PUSH32(esp, 0xFF);
    PUSH32(esp, eax);
    PUSH32(esp, 0); sub_003E1D70(); /* call 0x003E1D70 */

loc_00307505: ;
    xmm1 = xmm0; /* movaps */
    xmm0 = MEMF(0x649834); /* movss */
    PUSH32(esp, ecx);
    xmm1 = xmm1 * xmm0; /* mulss */
    xmm1 = xmm1 + xmm0; /* addss */
    MEMF(esp) = xmm1; /* movss */
    PUSH32(esp, 0); sub_003E2480(); /* call 0x003E2480 */

loc_00307523: ;
    edx = ((int32_t)eax < 0) ? 0xFFFFFFFF : 0; /* cdq */
    ecx = 0x9C;
    { int64_t _dividend = ((int64_t)(int32_t)edx << 32) | eax;
      eax = (uint32_t)((int32_t)(_dividend / (int32_t)ecx));
      edx = (uint32_t)((int32_t)(_dividend % (int32_t)ecx)); }
    SET_LO8(edx, LO8(edx) + 0x64);
    PUSH32(esp, edx);
    PUSH32(esp, 0); sub_003E2480(); /* call 0x003E2480 */

loc_00307534: ;
    edx = ((int32_t)eax < 0) ? 0xFFFFFFFF : 0; /* cdq */
    ecx = 5;
    { int64_t _dividend = ((int64_t)(int32_t)edx << 32) | eax;
      eax = (uint32_t)((int32_t)(_dividend / (int32_t)ecx));
      edx = (uint32_t)((int32_t)(_dividend % (int32_t)ecx)); }
    eax = esp + 0x50;
    edx = edx + ecx;
    PUSH32(esp, edx);
    edx = esp + 0x34;
    PUSH32(esp, edx);
    PUSH32(esp, edi);
    PUSH32(esp, esi);
    ecx = esp + 0x48;
    PUSH32(esp, 0); sub_00185E10(); /* call 0x00185E10 */

loc_00307553: ;
    esp = esp + 0x2C;
    MEM8(esp + 0x14) = 3;
    MEM8(esp + 0x15) = 0xFF;
    PUSH32(esp, 0); sub_003E2480(); /* call 0x003E2480 */

loc_00307565: ;
    edx = ((int32_t)eax < 0) ? 0xFFFFFFFF : 0; /* cdq */
    ecx = 5;
    { int64_t _dividend = ((int64_t)(int32_t)edx << 32) | eax;
      eax = (uint32_t)((int32_t)(_dividend / (int32_t)ecx));
      edx = (uint32_t)((int32_t)(_dividend % (int32_t)ecx)); }
    PUSH32(esp, 0xFF);
    PUSH32(esp, 0);
    PUSH32(esp, 0x7F);
    PUSH32(esp, 0x437F0000);
    PUSH32(esp, 0x437F0000);
    PUSH32(esp, 0x437F0000);
    MEM8(esp + 0x32) = 0;
    edx = edx + 3;
    MEM16(esp + 0x2E) = LO16(edx);
    PUSH32(esp, 0); sub_003E2480(); /* call 0x003E2480 */

loc_00307597: ;
    edx = ((int32_t)eax < 0) ? 0xFFFFFFFF : 0; /* cdq */
    ecx = 0xC9;
    { int64_t _dividend = ((int64_t)(int32_t)edx << 32) | eax;
      eax = (uint32_t)((int32_t)(_dividend / (int32_t)ecx));
      edx = (uint32_t)((int32_t)(_dividend % (int32_t)ecx)); }
    PUSH32(esp, ecx);
    ecx = esp + 0x44;
    edx = edx + 0x37;
    xmm0 = (float)(int32_t)edx; /* cvtsi2ss */
    edx = esp + 0x30;
    MEMF(esp) = xmm0; /* movss */
    PUSH32(esp, edx);
    SET_LO8(edx, 0); /* xor self */
    PUSH32(esp, 0); sub_0011E790(); /* call 0x0011E790 */

loc_003075BC: ;
    xmm0 = MEMF(0x64A200); /* movss */
    PUSH32(esp, 0x14);
    PUSH32(esp, 0xF);
    PUSH32(esp, 0x3A8163D3);
    PUSH32(esp, 0x447D4000);
    eax = esp + 0x58;
    PUSH32(esp, 0); sub_0019B600(); /* call 0x0019B600 */

loc_003075DB: ;
    xmm2 = MEMF(0x64A59C); /* movss */
    xmm1 = MEMF(0x64A598); /* movss */
    xmm0 = MEMF(0x64A200); /* movss */
    PUSH32(esp, 0xFF);
    PUSH32(esp, 5);
    eax = esp + 0x60;
    PUSH32(esp, 0); sub_0019B530(); /* call 0x0019B530 */

loc_00307603: ;
    esp = esp + 0x38;

loc_00307606: ;
    POP32(esp, edi);
    POP32(esp, esi);
    esp = ebp;
    POP32(esp, ebp);
    esp += 4; return; /* ret */

}

/**
 * sub_00307610
 * Original: 0x00307610 - 0x0030761E (14 bytes, 6 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00307610(void)
{

loc_00307610: ;
    eax = MEM32(esp + 4);
    PUSH32(esp, ebx);
    SET_LO8(ebx, 0); /* xor self */
    PUSH32(esp, 0); sub_00307400(); /* call 0x00307400 */

loc_0030761C: ;
    POP32(esp, ebx);
    esp += 4; return; /* ret */

}

/**
 * sub_00307620
 * Original: 0x00307620 - 0x0030762E (14 bytes, 6 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00307620(void)
{

loc_00307620: ;
    eax = MEM32(esp + 4);
    PUSH32(esp, ebx);
    SET_LO8(ebx, 1);
    PUSH32(esp, 0); sub_00307400(); /* call 0x00307400 */

loc_0030762C: ;
    POP32(esp, ebx);
    esp += 4; return; /* ret */

}

/**
 * sub_00307630
 * Original: 0x00307630 - 0x0030764E (30 bytes, 6 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00307630(void)
{
    uint32_t ebp;
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_00307630: ;
    eax = MEM32(esp + 4);
    SET_LO16(edx, MEM16(eax + 0xA4));
    MEM32(esp + 8) = 0;
    MEM32(esp + 4) = eax;
    SET_LO8(ecx, 1);
    g_seh_ebp = ebp; sub_000E8120(); return; /* tail jmp 0x000E8120 */

}

/**
 * sub_00307700
 * Original: 0x00307700 - 0x00307766 (102 bytes, 35 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00307700(void)
{
    uint32_t ebp;
    int _flags = 0; /* fallback flag var */
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_00307700: ;
    eax = MEM32(0x84A5F8);
    eax = MEM32(eax + 0x568);
    esp = esp - 0x10;
    (void)0; /* test eax, eax - flags set for next jcc */
    PUSH32(esp, esi);
    if (TEST_Z(eax, eax)) { sub_00307766(); return; } /* je: equal / zero */

loc_00307713: ;
    SET_LO8(ecx, MEM8(eax + 0xB2));
    if (TEST_Z(LO8(ecx), LO8(ecx))) { sub_00307766(); return; } /* je: equal / zero */

loc_0030771D: ;
    esi = MEM32(esp + 0x18);
    PUSH32(esp, 0xFF);
    PUSH32(esp, esi);
    PUSH32(esp, 0); sub_0019DCF0(); /* call 0x0019DCF0 */

loc_0030772C: ;
    ecx = MEM32(0x847024);
    eax = MEM32(ecx + 0x40);
    esp = esp + 8;
    if (TEST_Z(esi, esi)) goto loc_00307750; /* je: equal / zero */

loc_0030773C: ;
    ecx = MEM32(esi + 0x564);
    if (TEST_Z(ecx, ecx)) goto loc_00307750; /* je: equal / zero */

loc_00307746: ;
    PUSH32(esp, 0);
    PUSH32(esp, esi);
    ecx = 0xC9B;
    g_seh_ebp = ebp; sub_003077CF(); return; /* tail jmp 0x003077CF */

loc_00307750: ;
    PUSH32(esp, 0);
    PUSH32(esp, esi);
    PUSH32(esp, 0xFFFFFFFFu);
    PUSH32(esp, 0);
    edx = esi + 0x78;
    PUSH32(esp, edx);
    PUSH32(esp, 0);
    PUSH32(esp, 0);
    ecx = 0xC9B;
    g_seh_ebp = ebp; sub_003077D9(); return; /* tail jmp 0x003077D9 */

}

/**
 * sub_00307870
 * Original: 0x00307870 - 0x00307886 (22 bytes, 9 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00307870(void)
{

loc_00307870: ;
    eax = MEM32(esp + 4);
    PUSH32(esp, ebx);
    PUSH32(esp, 0);
    PUSH32(esp, 1);
    SET_LO8(ebx, LO8(ebx) | 0xFF);
    PUSH32(esp, 0); sub_0019EC20(); /* call 0x0019EC20 */

loc_00307881: ;
    esp = esp + 8;
    POP32(esp, ebx);
    esp += 4; return; /* ret */

}

/**
 * sub_00307890
 * Original: 0x00307890 - 0x003078A6 (22 bytes, 9 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00307890(void)
{

loc_00307890: ;
    eax = MEM32(esp + 4);
    PUSH32(esp, ebx);
    PUSH32(esp, 0);
    PUSH32(esp, 0);
    SET_LO8(ebx, LO8(ebx) | 0xFF);
    PUSH32(esp, 0); sub_0019EC20(); /* call 0x0019EC20 */

loc_003078A1: ;
    esp = esp + 8;
    POP32(esp, ebx);
    esp += 4; return; /* ret */

}

/**
 * sub_003078B0
 * Original: 0x003078B0 - 0x003078C6 (22 bytes, 9 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_003078B0(void)
{

loc_003078B0: ;
    eax = MEM32(esp + 4);
    PUSH32(esp, ebx);
    PUSH32(esp, 1);
    PUSH32(esp, 0);
    SET_LO8(ebx, LO8(ebx) | 0xFF);
    PUSH32(esp, 0); sub_0019EC20(); /* call 0x0019EC20 */

loc_003078C1: ;
    esp = esp + 8;
    POP32(esp, ebx);
    esp += 4; return; /* ret */

}

/**
 * sub_003078D0
 * Original: 0x003078D0 - 0x0030790D (61 bytes, 21 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_003078D0(void)
{
    uint32_t ebp;
    int _flags = 0; /* fallback flag var */
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_003078D0: ;
    PUSH32(esp, ebx);
    ebx = MEM32(0x6B8160);
    PUSH32(esp, esi);
    esi = MEM32(esp + 0xC);
    eax = MEM32(esi + 0x4B0);
    ecx = MEM32(eax + 0x24);
    edx = MEM32(ecx + 8);
    eax = MEM32(edx + 0x10);
    ecx = esp + 0xC;
    PUSH32(esp, ecx);
    PUSH32(esp, 1);
    PUSH32(esp, 0);
    PUSH32(esp, 0); sub_00415EC0(); /* call 0x00415EC0 */

loc_003078F9: ;
    esp = esp + 0xC;
    if (TEST_Z(eax, eax)) { sub_0030790D(); return; } /* je: equal / zero */

loc_00307900: ;
    eax = MEM32(esp + 0xC);
    if (TEST_Z(eax, eax)) { sub_0030790D(); return; } /* je: equal / zero */

loc_00307908: ;
    edx = MEM32(eax + 8);
    g_seh_ebp = ebp; sub_0030790F(); return; /* tail jmp 0x0030790F */

}

/**
 * sub_00307980
 * Original: 0x00307980 - 0x003079C1 (65 bytes, 21 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00307980(void)
{

loc_00307980: ;
    esp = esp - 8;
    PUSH32(esp, esi);
    esi = MEM32(esp + 0x10);
    SET_LO8(eax, MEM8(esi + 0x10B));
    PUSH32(esp, 0x3C);
    ecx = esp + 8;
    PUSH32(esp, ecx);
    PUSH32(esp, 2);
    PUSH32(esp, 0x6B3F84);
    MEM32(esp + 0x14) = esi;
    MEM8(esp + 0x18) = LO8(eax);
    PUSH32(esp, 0); sub_000DAA60(); /* call 0x000DAA60 */

loc_003079A9: ;
    PUSH32(esp, 0xFF);
    PUSH32(esp, 0x78);
    SET_LO8(ecx, 2);
    eax = esi;
    PUSH32(esp, 0); sub_0019A800(); /* call 0x0019A800 */

loc_003079B9: ;
    esp = esp + 0x18;
    POP32(esp, esi);
    esp = esp + 8;
    esp += 4; return; /* ret */

}

/**
 * sub_003079D0
 * Original: 0x003079D0 - 0x00307A11 (65 bytes, 21 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_003079D0(void)
{

loc_003079D0: ;
    esp = esp - 8;
    PUSH32(esp, esi);
    esi = MEM32(esp + 0x10);
    SET_LO8(eax, MEM8(esi + 0x10B));
    PUSH32(esp, 0x3C);
    ecx = esp + 8;
    PUSH32(esp, ecx);
    PUSH32(esp, 2);
    PUSH32(esp, 0x6B3F84);
    MEM32(esp + 0x14) = esi;
    MEM8(esp + 0x18) = LO8(eax);
    PUSH32(esp, 0); sub_000DAA60(); /* call 0x000DAA60 */

loc_003079F9: ;
    PUSH32(esp, 0xFF);
    PUSH32(esp, 0x78);
    SET_LO8(ecx, 3);
    eax = esi;
    PUSH32(esp, 0); sub_0019A800(); /* call 0x0019A800 */

loc_00307A09: ;
    esp = esp + 0x18;
    POP32(esp, esi);
    esp = esp + 8;
    esp += 4; return; /* ret */

}

/**
 * sub_00307A20
 * Original: 0x00307A20 - 0x00307A3B (27 bytes, 9 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00307A20(void)
{

loc_00307A20: ;
    SET_LO8(ecx, MEM8(esp + 8));
    PUSH32(esp, esi);
    esi = MEM32(esp + 8);
    PUSH32(esp, 0xFF);
    SET_LO8(ecx, LO8(ecx) - 0x55);
    PUSH32(esp, 0); sub_0014CD70(); /* call 0x0014CD70 */

loc_00307A36: ;
    esp = esp + 4;
    POP32(esp, esi);
    esp += 4; return; /* ret */

}

/**
 * sub_00307A40
 * Original: 0x00307A40 - 0x00307A6C (44 bytes, 13 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00307A40(void)
{

loc_00307A40: ;
    esp = esp - 8;
    eax = MEM32(esp + 0xC);
    PUSH32(esp, 0x18);
    ecx = esp + 4;
    PUSH32(esp, ecx);
    MEM32(esp + 8) = eax;
    SET_LO8(eax, MEM8(eax + 0x10B));
    PUSH32(esp, 2);
    PUSH32(esp, 0x6B3F84);
    MEM8(esp + 0x14) = LO8(eax);
    PUSH32(esp, 0); sub_000DAA60(); /* call 0x000DAA60 */

loc_00307A68: ;
    esp = esp + 0x18;
    esp += 4; return; /* ret */

}

/**
 * sub_00307A70
 * Original: 0x00307A70 - 0x00307ACE (94 bytes, 33 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00307A70(void)
{
    uint32_t ebp;
    int _flags = 0; /* fallback flag var */

loc_00307A70: ;
    PUSH32(esp, ebp);
    ebp = esp;
    esp = esp & 0xFFFFFFF0u;
    esp = esp - 0x58;
    PUSH32(esp, esi);
    esi = MEM32(ebp + 8);
    eax = MEM32(esi + 0x3C8);
    (void)0; /* test eax, eax - flags set for next jcc */
    PUSH32(esp, edi);
    if (TEST_Z(eax, eax)) goto loc_00307AC8; /* je: equal / zero */

loc_00307A88: ;
    SET_LO8(eax, MEM8(esi + 0x16E));
    SET_LO8(eax, LO8(eax) & 0xF);
    if (CMP_EQ(LO8(eax), 0xF)) goto loc_00307AC8; /* je: equal / zero */

loc_00307A94: ;
    ecx = esp + 0x20;
    PUSH32(esp, ecx);
    PUSH32(esp, 0x5F45C8);
    PUSH32(esp, 0); sub_002F7810(); /* call 0x002F7810 */

loc_00307AA3: ;
    edx = esp + 0x28;
    PUSH32(esp, edx);
    eax = esp + 0x20;
    PUSH32(esp, eax);
    PUSH32(esp, 0x597F70);
    PUSH32(esp, 0); sub_001101F0(); /* call 0x001101F0 */

loc_00307AB7: ;
    PUSH32(esp, 0xFF);
    edi = esp + 0x2C;
    PUSH32(esp, 0); sub_0015DAF0(); /* call 0x0015DAF0 */

loc_00307AC5: ;
    esp = esp + 0x18;

loc_00307AC8: ;
    POP32(esp, edi);
    POP32(esp, esi);
    esp = ebp;
    POP32(esp, ebp);
    esp += 4; return; /* ret */

}

/**
 * sub_00307AD0
 * Original: 0x00307AD0 - 0x00307B1E (78 bytes, 17 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00307AD0(void)
{
    float xmm0;

loc_00307AD0: ;
    esp = esp - 0xC;
    eax = MEM32(esp + 0x10);
    xmm0 = MEMF(eax + 0x78); /* movss */
    PUSH32(esp, 0xF);
    MEMF(esp + 4) = xmm0; /* movss */
    xmm0 = MEMF(eax + 0x7C); /* movss */
    PUSH32(esp, 0xC);
    MEMF(esp + 0xC) = xmm0; /* movss */
    xmm0 = MEMF(eax + 0x80); /* movss */
    PUSH32(esp, 0x39AEC33E);
    MEMF(esp + 0x14) = xmm0; /* movss */
    xmm0 = MEMF(0x64A244); /* movss */
    PUSH32(esp, 0x453B8000);
    eax = esp + 0x10;
    PUSH32(esp, 0); sub_0019B600(); /* call 0x0019B600 */

loc_00307B1A: ;
    esp = esp + 0x1C;
    esp += 4; return; /* ret */

}

/**
 * sub_00307B20
 * Original: 0x00307B20 - 0x00307B2D (13 bytes, 5 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00307B20(void)
{
    uint32_t ebp;
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_00307B20: ;
    PUSH32(esp, esi);
    esi = MEM32(0x84A5F8);
    eax = 0; /* xor self */
    SET_LO8(ecx, 0x12);
    g_seh_ebp = ebp; sub_00307B30(); return; /* tail jmp 0x00307B30 */

}

/**
 * sub_00307B90
 * Original: 0x00307B90 - 0x00307BC2 (50 bytes, 18 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00307B90(void)
{
    int _flags = 0; /* fallback flag var */

loc_00307B90: ;
    eax = MEM32(0x84A5F8);
    esp = esp - 0x14;
    ecx = 0; /* xor self */
    SET_LO8(edx, 0x12);
    PUSH32(esp, esi);
    /* nop */

loc_00307BA0: ;
    esi = MEM32(eax + 0x64);
    if (TEST_Z(esi, esi)) goto loc_00307BAF; /* je: equal / zero */

loc_00307BA7: ;
    if (CMP_EQ(MEM8(eax + 0x10B), LO8(edx))) { sub_00307BC2(); return; } /* je: equal / zero */

loc_00307BAF: ;
    eax = eax + 0x6D0;
    ecx++;
    if (CMP_L(ecx, 0x81)) goto loc_00307BA0; /* jl: less (signed <) */

loc_00307BBD: ;
    POP32(esp, esi);
    esp = esp + 0x14;
    esp += 4; return; /* ret */

}

/**
 * sub_00307C20
 * Original: 0x00307C20 - 0x00307C2D (13 bytes, 2 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00307C20(void)
{
    uint32_t ebp;
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_00307C20: ;
    MEM32(esp + 8) = 0xFF;
    g_seh_ebp = ebp; sub_0016D7E0(); return; /* tail jmp 0x0016D7E0 */

}

/**
 * sub_00307CA0
 * Original: 0x00307CA0 - 0x003081D0 (1328 bytes, 259 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00307CA0(void)
{
    uint32_t ebp;
    int _flags = 0; /* fallback flag var */
    float xmm0, xmm1, xmm2, xmm3, xmm5;

loc_00307CA0: ;
    PUSH32(esp, ebp);
    ebp = esp;
    esp = esp & 0xFFFFFFF0u;
    esp = esp - 0x108;
    PUSH32(esp, ebx);
    PUSH32(esp, esi);
    esi = MEM32(ebp + 8);
    eax = MEM32(esi + 0x3C8);
    ebx = 0; /* xor self */
    if (CMP_EQ(eax, ebx)) goto loc_003081CA; /* je: equal / zero */

loc_00307CC1: ;
    eax = MEM32(esi + 0x68);
    (void)0; /* cmp eax, ebx - flags set for next jcc */
    MEM32(esp + 0xC0) = 0x606204;
    MEM32(esp + 0xC4) = 0x6061E4;
    MEM32(esp + 0xC8) = 0x6061B8;
    MEM32(esp + 0xCC) = 0x6061A8;
    MEM32(esp + 0x14) = 0x60647C;
    MEM32(esp + 0x18) = 0x5F44D0;
    MEM32(esp + 0x1C) = 0x5F2480;
    MEM32(esp + 0x20) = 0x5F3558;
    if (CMP_NE(eax, ebx)) goto loc_00307D51; /* jne: not equal / not zero */

loc_00307D14: ;
    xmm0 = MEMF(0x648CE4); /* movss */
    MEMF(esp + 0xB4) = xmm0; /* movss */
    xmm0 = MEMF(0x64938C); /* movss */
    MEMF(esp + 0xB8) = xmm0; /* movss */
    xmm0 = MEMF(0x648E3C); /* movss */
    MEMF(esp + 0xBC) = xmm0; /* movss */
    eax = 0x5D58C4;
    goto loc_00307DDC;

loc_00307D51: ;
    (void)0; /* cmp eax, 0x99 - flags set for next jcc */
    xmm0 = 0.0f; /* xorps self = zero */
    MEMF(esp + 0xB4) = xmm0; /* movss */
    MEMF(esp + 0xB8) = xmm0; /* movss */
    MEMF(esp + 0xBC) = xmm0; /* movss */
    if (CMP_NE(eax, 0x99)) goto loc_00307DC4; /* jne: not equal / not zero */

loc_00307D76: ;
    eax = MEM32(ebp + 0xC);
    eax--;
    if ((eax == 0)) goto loc_00307DAD; /* je: equal / zero */

loc_00307D7C: ;
    eax--;
    if ((eax == 0)) goto loc_00307D96; /* je: equal / zero */

loc_00307D7F: ;
    PUSH32(esp, 0); sub_003E2480(); /* call 0x003E2480 */

loc_00307D84: ;
    eax = eax & 0x80000003u;
    if (((int32_t)eax >= 0)) goto loc_00307D90; /* jns: not sign (positive) */

loc_00307D8B: ;
    eax--;
    eax = eax | 0xFFFFFFFCu;
    eax++;

loc_00307D90: ;
    eax = MEM32(esp + eax * 4 + 0x14);
    goto loc_00307DDC;

loc_00307D96: ;
    PUSH32(esp, 0); sub_003E2480(); /* call 0x003E2480 */

loc_00307D9B: ;
    eax = eax & 0x80000001u;
    if (((int32_t)eax >= 0)) goto loc_00307DA7; /* jns: not sign (positive) */

loc_00307DA2: ;
    eax--;
    eax = eax | 0xFFFFFFFEu;
    eax++;

loc_00307DA7: ;
    eax = MEM32(esp + eax * 4 + 0x1C);
    goto loc_00307DDC;

loc_00307DAD: ;
    PUSH32(esp, 0); sub_003E2480(); /* call 0x003E2480 */

loc_00307DB2: ;
    eax = eax & 0x80000001u;
    if (((int32_t)eax >= 0)) goto loc_00307DBE; /* jns: not sign (positive) */

loc_00307DB9: ;
    eax--;
    eax = eax | 0xFFFFFFFEu;
    eax++;

loc_00307DBE: ;
    eax = MEM32(esp + eax * 4 + 0x14);
    goto loc_00307DDC;

loc_00307DC4: ;
    PUSH32(esp, 0); sub_003E2480(); /* call 0x003E2480 */

loc_00307DC9: ;
    eax = eax & 0x80000003u;
    if (((int32_t)eax >= 0)) goto loc_00307DD5; /* jns: not sign (positive) */

loc_00307DD0: ;
    eax--;
    eax = eax | 0xFFFFFFFCu;
    eax++;

loc_00307DD5: ;
    eax = MEM32(esp + eax * 4 + 0xC0);

loc_00307DDC: ;
    ecx = esp + 0xD0;
    PUSH32(esp, ecx);
    PUSH32(esp, eax);
    PUSH32(esp, 0); sub_002F7810(); /* call 0x002F7810 */

loc_00307DEA: ;
    edx = esp + 0xD8;
    PUSH32(esp, edx);
    eax = esp + 0x30;
    PUSH32(esp, eax);
    ecx = esp + 0xC4;
    PUSH32(esp, ecx);
    PUSH32(esp, 0); sub_001101F0(); /* call 0x001101F0 */

loc_00307E04: ;
    eax = MEM32(esi + 0x68);
    xmm1 = MEMF(esi + 0x294); /* movss */
    xmm3 = MEMF(0x648D14); /* movss */
    xmm1 = xmm1 + MEMF(0x64908C); /* addss */
    xmm2 = MEMF(0x648D20); /* movss */
    esp = esp + 0x14;
    (void)0; /* cmp eax, 0x5E - flags set for next jcc */
    xmm0 = xmm3; /* movaps */
    MEMF(esp + 0x28) = xmm1; /* movss */
    MEMF(esp + 0x10) = xmm0; /* movss */
    if (CMP_NE(eax, 0x5E)) goto loc_00307E4D; /* jne: not equal / not zero */

loc_00307E3E: ;
    MEMF(esp + 0x28) = xmm1; /* movss */
    MEMF(esp + 0x10) = xmm2; /* movss */
    xmm0 = xmm2; /* movaps */

loc_00307E4D: ;
    eax = MEM32(esp + 0x24);
    ecx = MEM32(esp + 0x28);
    xmm1 = xmm0; /* movaps */
    xmm1 = xmm1 * MEMF(0x648F98); /* mulss */
    edx = (int32_t)xmm1; /* cvttss2si */
    xmm1 = xmm0; /* movaps */
    xmm1 = xmm1 * MEMF(0x6490F4); /* mulss */
    MEMF(esp + 0x48) = xmm1; /* movss */
    xmm1 = MEMF(0x648D34); /* movss */
    MEM32(esp + 0x38) = eax;
    MEMF(esp + 0x4C) = xmm1; /* movss */
    xmm1 = MEMF(0x648D10); /* movss */
    eax = (int32_t)xmm0; /* cvttss2si */
    MEMF(esp + 0x50) = xmm1; /* movss */
    MEM32(esp + 0x68) = eax;
    SET_LO8(eax, 0xB4);
    MEM32(esp + 0x3C) = ecx;
    xmm1 = xmm0; /* movaps */
    xmm1 = xmm1 * MEMF(0x648D1C); /* mulss */
    MEM32(esp + 0x34) = edx;
    edx = MEM32(esp + 0x2C);
    MEM8(esp + 0x77) = LO8(eax);
    MEM8(esp + 0x76) = LO8(eax);
    SET_LO8(eax, 0xC8);
    ecx = esp + 0x30;
    MEMF(esp + 0x54) = xmm1; /* movss */
    xmm1 = MEMF(0x648CE4); /* movss */
    PUSH32(esp, 0xFF);
    esi = 2;
    PUSH32(esp, ecx);
    MEM32(esp + 0x38) = 0x14;
    MEM32(esp + 0x48) = edx;
    MEMF(esp + 0x4C) = xmm2; /* movss */
    MEMF(esp + 0x60) = xmm1; /* movss */
    MEM16(esp + 0x64) = LO16(ebx);
    MEM16(esp + 0x66) = 0xFF;
    MEM16(esp + 0x68) = 0xFFC0;
    MEM16(esp + 0x6A) = 0x50;
    MEM32(esp + 0x6C) = esi;
    MEM16(esp + 0x74) = 0xA;
    MEM16(esp + 0x76) = 0xF;
    MEM16(esp + 0x78) = 1;
    MEM8(esp + 0x7A) = 4;
    MEM8(esp + 0x7B) = 2;
    MEM8(esp + 0x7C) = 3;
    MEM8(esp + 0x7D) = 0xFF;
    MEM8(esp + 0x80) = 0xFF;
    MEM8(esp + 0x83) = LO8(ebx);
    MEM8(esp + 0x82) = LO8(ebx);
    MEM8(esp + 0x81) = LO8(ebx);
    MEM8(esp + 0x84) = LO8(ebx);
    MEM8(esp + 0x87) = LO8(eax);
    MEM8(esp + 0x86) = LO8(eax);
    MEM8(esp + 0x85) = 0xFF;
    MEM8(esp + 0x88) = 0xFF;
    MEM8(esp + 0x8B) = LO8(ebx);
    MEM8(esp + 0x8A) = LO8(ebx);
    MEM8(esp + 0x89) = LO8(ebx);
    MEM8(esp + 0x8C) = LO8(ebx);
    MEM8(esp + 0x8D) = 0xFF;
    MEM8(esp + 0x8E) = LO8(ebx);
    MEM32(esp + 0x90) = 0x205;
    MEM32(esp + 0x94) = 0x63000;
    MEM16(esp + 0x98) = 8;
    MEM16(esp + 0x9A) = 0x1F;
    MEM16(esp + 0x9C) = 1;
    MEM8(esp + 0x9E) = LO8(ebx);
    MEMF(esp + 0xA0) = xmm3; /* movss */
    MEM8(esp + 0xA4) = 0xFF;
    MEM8(esp + 0xA5) = LO8(ebx);
    MEM8(esp + 0xA6) = 0xFF;
    MEM8(esp + 0xA7) = 0xFF;
    PUSH32(esp, 0); sub_000F4BF0(); /* call 0x000F4BF0 */

loc_00308011: ;
    MEM32(esp + 0x64) = 0x2B;
    PUSH32(esp, 0); sub_003E2480(); /* call 0x003E2480 */

loc_0030801E: ;
    xmm5 = 0.0f; /* xorps self = zero */
    MEM16(esp + 0x38) = 5;
    MEMF(esp + 0x3C) = xmm5; /* movss */
    MEMF(esp + 0x40) = xmm5; /* movss */
    MEM8(esp + 0x44) = 0xFF;
    MEM8(esp + 0x45) = 0xFF;
    MEM8(esp + 0x46) = 0xFF;
    MEM8(esp + 0x47) = 0xFF;
    PUSH32(esp, 0); sub_003E1D70(); /* call 0x003E1D70 */

loc_0030804D: ;
    xmm0 = xmm0 * MEMF(0x6493A8); /* mulss */
    xmm0 = xmm0 + MEMF(0x648EA0); /* addss */
    edx = MEM32(esp + 0x2C);
    eax = MEM32(esp + 0x30);
    ecx = MEM32(esp + 0x34);
    MEMF(esp + 0x78) = xmm0; /* movss */
    MEMF(esp + 0x74) = xmm0; /* movss */
    xmm0 = MEMF(0x648D14); /* movss */
    MEM32(esp + 0x7C) = edx;
    MEM32(esp + 0x80) = eax;
    MEM32(esp + 0x84) = ecx;
    MEMF(esp + 0x88) = xmm5; /* movss */
    MEMF(esp + 0x8C) = xmm5; /* movss */
    MEMF(esp + 0x90) = xmm5; /* movss */
    MEMF(esp + 0x94) = xmm5; /* movss */
    MEMF(esp + 0x98) = xmm5; /* movss */
    MEMF(esp + 0x9C) = xmm5; /* movss */
    MEMF(esp + 0xA0) = xmm5; /* movss */
    MEM16(esp + 0x68) = 4;
    MEM16(esp + 0x6A) = 0x3F;
    MEM16(esp + 0x6C) = 1;
    MEMF(esp + 0x70) = xmm0; /* movss */
    PUSH32(esp, 0); sub_003E2480(); /* call 0x003E2480 */

loc_003080EE: ;
    eax = eax & 1;
    eax = eax << 1;
    MEM32(esp + 0x1C) = eax;
    PUSH32(esp, 0); sub_003E2480(); /* call 0x003E2480 */

loc_003080FC: ;
    ecx = MEM32(esp + 0x1C);
    PUSH32(esp, 0xFF);
    eax = eax & 1;
    PUSH32(esp, ebx);
    ecx = ecx | eax;
    PUSH32(esp, ebx);
    ecx = ecx << 6;
    edx = esp + 0x44;
    ecx = ecx | 0xC201;
    PUSH32(esp, 1);
    PUSH32(esp, edx);
    MEM32(esp + 0xB8) = ecx;
    MEM8(esp + 0xC0) = 0xFF;
    MEM8(esp + 0xC1) = 0xFF;
    MEM8(esp + 0xC2) = 0xFF;
    MEM8(esp + 0xC3) = 4;
    MEM32(esp + 0x5C) = esi;
    MEM32(esp + 0x60) = esi;
    MEM32(esp + 0x64) = ebx;
    MEM32(esp + 0x68) = 4;
    MEM32(esp + 0x6C) = esi;
    MEM32(esp + 0x70) = ebx;
    MEM32(esp + 0x74) = 0x303;
    PUSH32(esp, 0); sub_00105450(); /* call 0x00105450 */

loc_0030816C: ;
    xmm0 = MEMF(esp + 0x2C); /* movss */
    xmm0 = xmm0 * MEMF(0x59D948); /* mulss */
    xmm0 = xmm0 + MEMF(0x64A240); /* addss */
    esp = esp + 0x1C;
    PUSH32(esp, 0xFF);
    PUSH32(esp, ebx);
    PUSH32(esp, 0x7F);
    PUSH32(esp, 0x3F800000);
    PUSH32(esp, 0x3F800000);
    PUSH32(esp, 0x3F800000);
    PUSH32(esp, ecx);
    eax = esp + 0x30;
    MEMF(esp) = xmm0; /* movss */
    PUSH32(esp, eax);
    SET_LO8(edx, 0); /* xor self */
    ecx = esp + 0x44;
    MEM8(esp + 0x34) = 3;
    MEM8(esp + 0x35) = 0x18;
    MEM16(esp + 0x36) = 6;
    MEM8(esp + 0x3A) = LO8(ebx);
    PUSH32(esp, 0); sub_0011E790(); /* call 0x0011E790 */

loc_003081C7: ;
    esp = esp + 0x20;

loc_003081CA: ;
    POP32(esp, esi);
    POP32(esp, ebx);
    esp = ebp;
    POP32(esp, ebp);
    esp += 4; return; /* ret */

}

/**
 * sub_003081D0
 * Original: 0x003081D0 - 0x003081F4 (36 bytes, 15 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_003081D0(void)
{
    uint32_t ebp;
    int _flags = 0; /* fallback flag var */

loc_003081D0: ;
    PUSH32(esp, ebp);
    ebp = esp;
    eax = MEM32(0x84A5F8);
    ecx = MEM32(eax + 0x64);
    esp = esp & 0xFFFFFFF0u;
    if (TEST_Z(ecx, ecx)) goto loc_003081F0; /* je: equal / zero */

loc_003081E2: ;
    PUSH32(esp, 1);
    PUSH32(esp, eax);
    eax = MEM32(ebp + 8);
    PUSH32(esp, 0); sub_001318F0(); /* call 0x001318F0 */

loc_003081ED: ;
    esp = esp + 8;

loc_003081F0: ;
    esp = ebp;
    POP32(esp, ebp);
    esp += 4; return; /* ret */

}

/**
 * sub_00308200
 * Original: 0x00308200 - 0x003082C1 (193 bytes, 56 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00308200(void)
{
    uint32_t ebp;
    int _flags = 0; /* fallback flag var */
    float xmm0;

loc_00308200: ;
    PUSH32(esp, ebp);
    ebp = esp;
    esp = esp & 0xFFFFFFF0u;
    esp = esp - 0xFC;
    PUSH32(esp, esi);
    esi = MEM32(ebp + 8);
    eax = MEM32(esi + 0x3C8);
    if (TEST_Z(eax, eax)) goto loc_003082BC; /* je: equal / zero */

loc_0030821E: ;
    SET_LO8(eax, MEM8(esi + 0x16E));
    SET_LO8(eax, LO8(eax) & 0xF);
    if (CMP_EQ(LO8(eax), 0xF)) goto loc_003082BC; /* je: equal / zero */

loc_0030822E: ;
    eax = MEM32(0x84A5F8);
    SET_LO8(ecx, MEM8(eax + 0x20C));
    if (TEST_Z(LO8(ecx), LO8(ecx))) goto loc_003082BC; /* je: equal / zero */

loc_0030823D: ;
    if (CMP_B(MEM16(eax + 0x3AE), 1)) goto loc_003082BC; /* jb: below (unsigned <) */

loc_00308247: ;
    edx = esi;
    eax = esp + 0x50;
    PUSH32(esp, 0); sub_002A0430(); /* call 0x002A0430 */

loc_00308252: ;
    ecx = esp + 0x10;
    PUSH32(esp, ecx);
    PUSH32(esp, 0x5F0CA0);
    PUSH32(esp, 0); sub_002F7810(); /* call 0x002F7810 */

loc_00308261: ;
    edx = esp + 0x18;
    PUSH32(esp, edx);
    eax = esp + 0x10;
    PUSH32(esp, eax);
    PUSH32(esp, 0x59DC74);
    PUSH32(esp, 0); sub_001101F0(); /* call 0x001101F0 */

loc_00308275: ;
    esp = esp + 0x14;
    esi = 3;
    /* nop */

loc_00308280: ;
    PUSH32(esp, 0xFF);
    ecx = esp + 0x54;
    PUSH32(esp, 0);
    PUSH32(esp, ecx);
    eax = esp + 0x10;
    PUSH32(esp, 0); sub_00144C70(); /* call 0x00144C70 */

loc_00308295: ;
    esp = esp + 0xC;
    esi--;
    if ((esi != 0)) goto loc_00308280; /* jne: not equal / not zero */

loc_0030829B: ;
    PUSH32(esp, 0); sub_003E1D70(); /* call 0x003E1D70 */

loc_003082A0: ;
    xmm0 = xmm0 * MEMF(0x6493F4); /* mulss */
    edx = (int32_t)xmm0; /* cvttss2si */
    eax = 2;
    eax = eax - edx;
    PUSH32(esp, eax);
    PUSH32(esp, 0); sub_000B6F30(); /* call 0x000B6F30 */

loc_003082B9: ;
    esp = esp + 4;

loc_003082BC: ;
    POP32(esp, esi);
    esp = ebp;
    POP32(esp, ebp);
    esp += 4; return; /* ret */

}

/**
 * sub_003082D0
 * Original: 0x003082D0 - 0x00308466 (406 bytes, 94 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_003082D0(void)
{
    uint32_t ebp;
    int _flags = 0; /* fallback flag var */
    float xmm0;

loc_003082D0: ;
    PUSH32(esp, ebp);
    ebp = esp;
    esp = esp & 0xFFFFFFF0u;
    esp = esp - 0x13C;
    PUSH32(esp, esi);
    esi = MEM32(ebp + 8);
    eax = MEM32(esi + 0x3C8);
    if (TEST_Z(eax, eax)) goto loc_00308461; /* je: equal / zero */

loc_003082EE: ;
    SET_LO8(eax, MEM8(esi + 0x16E));
    SET_LO8(eax, LO8(eax) & 0xF);
    if (CMP_EQ(LO8(eax), 0xF)) goto loc_00308461; /* je: equal / zero */

loc_003082FE: ;
    ecx = esp + 0x50;
    PUSH32(esp, ecx);
    PUSH32(esp, 0x5D58CC);
    PUSH32(esp, 0); sub_002F7810(); /* call 0x002F7810 */

loc_0030830D: ;
    esp = esp + 8;
    edx = esp + 0x50;
    PUSH32(esp, edx);
    eax = esp + 0xC;
    PUSH32(esp, eax);
    PUSH32(esp, 0); sub_003E2480(); /* call 0x003E2480 */

loc_0030831F: ;
    edx = ((int32_t)eax < 0) ? 0xFFFFFFFF : 0; /* cdq */
    ecx = 3;
    { int64_t _dividend = ((int64_t)(int32_t)edx << 32) | eax;
      eax = (uint32_t)((int32_t)(_dividend / (int32_t)ecx));
      edx = (uint32_t)((int32_t)(_dividend % (int32_t)ecx)); }
    edx = edx + edx * 2;
    eax = edx * 4 + 0x59DC80;
    PUSH32(esp, eax);
    PUSH32(esp, 0); sub_001101F0(); /* call 0x001101F0 */

loc_00308337: ;
    esp = esp + 0xC;
    edx = esi;
    eax = esp + 0x90;
    PUSH32(esp, 0); sub_002A0430(); /* call 0x002A0430 */

loc_00308348: ;
    PUSH32(esp, 0); sub_003E2480(); /* call 0x003E2480 */

loc_0030834D: ;
    if (TEST_Z(LO8(eax), 1)) goto loc_00308384; /* je: equal / zero */

loc_00308351: ;
    PUSH32(esp, 0); sub_003E2480(); /* call 0x003E2480 */

loc_00308356: ;
    PUSH32(esp, 0xFF);
    (void)0; /* test LO8(eax), 1 - flags set for next jcc */
    PUSH32(esp, 0);
    eax = esp + 0x10;
    if (TEST_Z(LO8(eax), 1)) goto loc_00308374; /* je: equal / zero */

loc_00308365: ;
    ecx = esp + 0x98;
    PUSH32(esp, ecx);
    PUSH32(esp, 0); sub_00144AA0(); /* call 0x00144AA0 */

loc_00308372: ;
    goto loc_00308381;

loc_00308374: ;
    edx = esp + 0x98;
    PUSH32(esp, edx);
    PUSH32(esp, 0); sub_00144C70(); /* call 0x00144C70 */

loc_00308381: ;
    esp = esp + 0xC;

loc_00308384: ;
    PUSH32(esp, 0); sub_003E2480(); /* call 0x003E2480 */

loc_00308389: ;
    if (TEST_Z(LO8(eax), 1)) goto loc_00308461; /* je: equal / zero */

loc_00308391: ;
    xmm0 = MEMF(0x648CE4); /* movss */
    eax = MEM32(esp + 8);
    ecx = MEM32(esp + 0xC);
    edx = MEM32(esp + 0x10);
    MEMF(esp + 0x30) = xmm0; /* movss */
    MEMF(esp + 0x34) = xmm0; /* movss */
    xmm0 = MEMF(0x64AE50); /* movss */
    MEMF(esp + 0x38) = xmm0; /* movss */
    xmm0 = MEMF(0x649564); /* movss */
    PUSH32(esp, 0xFF);
    MEMF(esp + 0x40) = xmm0; /* movss */
    xmm0 = MEMF(0x64AE4C); /* movss */
    PUSH32(esp, 0x41C80000);
    MEMF(esp + 0x4C) = xmm0; /* movss */
    xmm0 = MEMF(0x649574); /* movss */
    PUSH32(esp, 6);
    MEM32(esp + 0x28) = eax;
    MEMF(esp + 0x54) = xmm0; /* movss */
    xmm0 = MEMF(0x64AE48); /* movss */
    PUSH32(esp, 0x638304);
    PUSH32(esp, 0x63831C);
    SET_LO8(eax, 0); /* xor self */
    esi = esp + 0x28;
    MEM32(esp + 0x28) = 8;
    MEM32(esp + 0x2C) = 5;
    MEM32(esp + 0x34) = ecx;
    MEM32(esp + 0x38) = edx;
    MEM16(esp + 0x3C) = 0;
    MEM16(esp + 0x3E) = 0xFF;
    MEM16(esp + 0x40) = 0xFFC0;
    MEM16(esp + 0x42) = 0x3C;
    MEM16(esp + 0x54) = 0x19;
    MEM16(esp + 0x56) = 0x14;
    MEMF(esp + 0x60) = xmm0; /* movss */
    PUSH32(esp, 0); sub_000F4550(); /* call 0x000F4550 */

loc_0030845E: ;
    esp = esp + 0x14;

loc_00308461: ;
    POP32(esp, esi);
    esp = ebp;
    POP32(esp, ebp);
    esp += 4; return; /* ret */

}

/**
 * sub_00308470
 * Original: 0x00308470 - 0x00308480 (16 bytes, 5 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00308470(void)
{

loc_00308470: ;
    eax = MEM32(esp + 4);
    PUSH32(esp, 0xFF);
    PUSH32(esp, 0); sub_0016B6D0(); /* call 0x0016B6D0 */

loc_0030847E: ;
    POP32(esp, ecx);
    esp += 4; return; /* ret */

}

/**
 * sub_003084A0
 * Original: 0x003084A0 - 0x003084D5 (53 bytes, 17 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_003084A0(void)
{

loc_003084A0: ;
    esp = esp - 8;
    PUSH32(esp, esi);
    esi = MEM32(esp + 0x10);
    SET_LO8(eax, MEM8(esi + 0x10B));
    ecx = esp + 4;
    MEM8(esp + 8) = LO8(eax);
    PUSH32(esp, 0x6A);
    PUSH32(esp, ecx);
    eax = 0x57;
    MEM32(esp + 0xC) = esi;
    PUSH32(esp, 0); sub_000DAC40(); /* call 0x000DAC40 */

loc_003084C7: ;
    PUSH32(esp, esi);
    PUSH32(esp, 0); sub_0030AA60(); /* call 0x0030AA60 */

loc_003084CD: ;
    esp = esp + 0xC;
    POP32(esp, esi);
    esp = esp + 8;
    esp += 4; return; /* ret */

}

/**
 * sub_003084E0
 * Original: 0x003084E0 - 0x0030850D (45 bytes, 10 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_003084E0(void)
{
    int _flags = 0; /* fallback flag var */

loc_003084E0: ;
    eax = MEM32(esp + 4);
    ecx = MEM32(eax + 0x568);
    if (TEST_Z(ecx, ecx)) goto loc_0030850C; /* je: equal / zero */

loc_003084EE: ;
    edx = MEM32(eax + 0xA4);
    MEM32(ecx + 0x480) = edx;
    ecx = MEM32(eax + 0x568);
    edx = MEM32(eax + 0xA4);
    MEM32(ecx + 0x484) = edx;

loc_0030850C: ;
    esp += 4; return; /* ret */

}

/**
 * sub_00308510
 * Original: 0x00308510 - 0x0030852D (29 bytes, 10 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00308510(void)
{
    int _flags = 0; /* fallback flag var */

loc_00308510: ;
    ecx = MEM32(0x7FDBF8);
    eax = MEM32(ecx * 4 + 0x59DCA8);
    if (TEST_Z(eax, eax)) goto loc_0030852C; /* je: equal / zero */

loc_00308521: ;
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, ecx);
    ecx = MEM32(esp + 8);
    PUSH32(esp, ecx);
    PUSH32(esp, 0); RECOMP_ICALL_SAFE(eax, _icall_esp); /* indirect call */
    }

loc_00308529: ;
    esp = esp + 8;

loc_0030852C: ;
    esp += 4; return; /* ret */

}

/**
 * sub_00308530
 * Original: 0x00308530 - 0x0030855A (42 bytes, 16 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00308530(void)
{
    int _flags = 0; /* fallback flag var */

loc_00308530: ;
    eax = MEM32(esp + 4);
    PUSH32(esp, ebx);
    ebx = 0; /* xor self */
    PUSH32(esp, 0); sub_00308AA0(); /* call 0x00308AA0 */

loc_0030853C: ;
    (void)0; /* test eax, eax - flags set for next jcc */
    POP32(esp, ebx);
    if (TEST_Z(eax, eax)) goto loc_00308559; /* je: equal / zero */

loc_00308541: ;
    edx = MEM32(0x7FDBF8);
    ecx = MEM32(edx * 4 + 0x59DCA8);
    if (TEST_Z(ecx, ecx)) goto loc_00308559; /* je: equal / zero */

loc_00308552: ;
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, edx);
    PUSH32(esp, eax);
    PUSH32(esp, 0); RECOMP_ICALL_SAFE(ecx, _icall_esp); /* indirect call */
    }

loc_00308556: ;
    esp = esp + 8;

loc_00308559: ;
    esp += 4; return; /* ret */

}

/**
 * sub_00308560
 * Original: 0x00308560 - 0x00308575 (21 bytes, 8 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00308560(void)
{

loc_00308560: ;
    eax = MEM32(0x7FDBF8);
    PUSH32(esp, ebx);
    ebx = MEM32(esp + 8);
    PUSH32(esp, eax);
    PUSH32(esp, 0); sub_0010C010(); /* call 0x0010C010 */

loc_00308570: ;
    esp = esp + 4;
    POP32(esp, ebx);
    esp += 4; return; /* ret */

}

/**
 * sub_00308580
 * Original: 0x00308580 - 0x00308589 (9 bytes, 2 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00308580(void)
{
    uint32_t ebp;
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_00308580: ;
    edx = MEM32(esp + 4);
    g_seh_ebp = ebp; sub_00174280(); return; /* tail jmp 0x00174280 */

}

/**
 * sub_00308590
 * Original: 0x00308590 - 0x0030862B (155 bytes, 48 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00308590(void)
{
    uint32_t ebp;
    int _flags = 0; /* fallback flag var */
    float xmm0;

loc_00308590: ;
    PUSH32(esp, ebp);
    ebp = esp;
    esp = esp & 0xFFFFFFF0u;
    esp = esp - 0x5C;
    PUSH32(esp, esi);
    esi = MEM32(ebp + 8);
    if (TEST_Z(esi, esi)) goto loc_00308626; /* je: equal / zero */

loc_003085A5: ;
    eax = MEM32(esi + 0x3C8);
    if (TEST_Z(eax, eax)) goto loc_003085EC; /* je: equal / zero */

loc_003085AF: ;
    eax = esp + 0x20;
    PUSH32(esp, eax);
    PUSH32(esp, 0x5D4CB4);
    PUSH32(esp, 0); sub_002F7810(); /* call 0x002F7810 */

loc_003085BE: ;
    xmm0 = 0.0f; /* xorps self = zero */
    ecx = esp + 0x28;
    PUSH32(esp, ecx);
    edx = esp + 0x14;
    PUSH32(esp, edx);
    eax = esp + 0x24;
    PUSH32(esp, eax);
    MEMF(esp + 0x28) = xmm0; /* movss */
    MEMF(esp + 0x2C) = xmm0; /* movss */
    MEMF(esp + 0x30) = xmm0; /* movss */
    PUSH32(esp, 0); sub_001101F0(); /* call 0x001101F0 */

loc_003085E7: ;
    esp = esp + 0x14;
    goto loc_00308603;

loc_003085EC: ;
    ecx = esi + 0x78;
    edx = MEM32(ecx);
    eax = MEM32(ecx + 4);
    ecx = MEM32(ecx + 8);
    MEM32(esp + 8) = edx;
    MEM32(esp + 0xC) = eax;
    MEM32(esp + 0x10) = ecx;

loc_00308603: ;
    xmm0 = MEMF(esi + 0x7C); /* movss */
    xmm0 = xmm0 + MEMF(0x648D14); /* addss */
    edx = esp + 8;
    PUSH32(esp, edx);
    PUSH32(esp, 3);
    PUSH32(esp, esi);
    MEMF(esp + 0x18) = xmm0; /* movss */
    PUSH32(esp, 0); sub_00119F50(); /* call 0x00119F50 */

loc_00308623: ;
    esp = esp + 0xC;

loc_00308626: ;
    POP32(esp, esi);
    esp = ebp;
    POP32(esp, ebp);
    esp += 4; return; /* ret */

}

/**
 * sub_00308630
 * Original: 0x00308630 - 0x00308641 (17 bytes, 5 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00308630(void)
{
    uint32_t ebp;
    int _flags = 0; /* fallback flag var */
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_00308630: ;
    eax = MEM32(esp + 4);
    if (TEST_Z(eax, eax)) { sub_00308641(); return; } /* je: equal / zero */

loc_00308638: ;
    MEM32(esp + 4) = eax;
    g_seh_ebp = ebp; sub_0014EFA0(); return; /* tail jmp 0x0014EFA0 */

}

/**
 * sub_00308650
 * Original: 0x00308650 - 0x003086F9 (169 bytes, 52 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00308650(void)
{
    int _flags = 0; /* fallback flag var */

loc_00308650: ;
    esp = esp - 8;
    PUSH32(esp, esi);
    esi = MEM32(esp + 0x10);
    if (TEST_Z(esi, esi)) goto loc_003086F4; /* je: equal / zero */

loc_00308660: ;
    eax = MEM32(0x7FDBF8);
    (void)0; /* test eax, eax - flags set for next jcc */
    eax = MEM32(0x7FDBF4);
    if (TEST_Z(eax, eax)) goto loc_003086CF; /* je: equal / zero */

loc_0030866E: ;
    (void)0; /* test eax, eax - flags set for next jcc */
    eax = esi;
    if (TEST_Z(eax, eax)) goto loc_0030867B; /* je: equal / zero */

loc_00308674: ;
    PUSH32(esp, 0x5F4A48);
    goto loc_00308680;

loc_0030867B: ;
    PUSH32(esp, 0x60D4C4);

loc_00308680: ;
    PUSH32(esp, 0); sub_002F7B90(); /* call 0x002F7B90 */

loc_00308685: ;
    esp = esp + 4;
    PUSH32(esp, 0xFF);
    PUSH32(esp, 0);
    PUSH32(esp, 0x7F);
    PUSH32(esp, 0);
    PUSH32(esp, 0x40000000);
    PUSH32(esp, 0x40000000);
    eax = esp + 0x1C;
    PUSH32(esp, 0x49F42400);
    ecx = esi + 0x78;
    PUSH32(esp, eax);
    SET_LO8(edx, 0); /* xor self */
    MEM8(esp + 0x24) = 3;
    MEM8(esp + 0x25) = 0x18;
    MEM16(esp + 0x26) = 0x14;
    MEM8(esp + 0x2A) = 0;
    PUSH32(esp, 0); sub_0011E790(); /* call 0x0011E790 */

loc_003086C7: ;
    esp = esp + 0x20;
    POP32(esp, esi);
    esp = esp + 8;
    esp += 4; return; /* ret */

loc_003086CF: ;
    (void)0; /* test eax, eax - flags set for next jcc */
    eax = esi;
    if (TEST_Z(eax, eax)) goto loc_003086E7; /* je: equal / zero */

loc_003086D5: ;
    PUSH32(esp, 0x5F4A48);
    PUSH32(esp, 0); sub_002F7BE0(); /* call 0x002F7BE0 */

loc_003086DF: ;
    esp = esp + 4;
    POP32(esp, esi);
    esp = esp + 8;
    esp += 4; return; /* ret */

loc_003086E7: ;
    PUSH32(esp, 0x60D4C4);
    PUSH32(esp, 0); sub_002F7BE0(); /* call 0x002F7BE0 */

loc_003086F1: ;
    esp = esp + 4;

loc_003086F4: ;
    POP32(esp, esi);
    esp = esp + 8;
    esp += 4; return; /* ret */

}

/**
 * sub_00308700
 * Original: 0x00308700 - 0x00308711 (17 bytes, 4 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00308700(void)
{

loc_00308700: ;
    eax = MEM32(esp + 4);
    SET_LO8(ecx, MEM8(0x7FDBF8));
    MEM8(eax + 0x453) = LO8(ecx);
    esp += 4; return; /* ret */

}

/**
 * sub_00308720
 * Original: 0x00308720 - 0x00308731 (17 bytes, 4 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00308720(void)
{

loc_00308720: ;
    eax = MEM32(esp + 4);
    SET_LO8(ecx, MEM8(0x7FDBF8));
    MEM8(eax + 0x454) = LO8(ecx);
    esp += 4; return; /* ret */

}

/**
 * sub_00308740
 * Original: 0x00308740 - 0x0030878F (79 bytes, 22 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00308740(void)
{
    double _fp_stack[8];
    int _fp_top = 0;
    #define fp_push(v) (_fp_stack[--_fp_top & 7] = (v))
    #define fp_pop() (_fp_top++)
    #define fp_popp() (fp_pop())
    #define fp_top() _fp_stack[_fp_top & 7]
    #define fp_st1() _fp_stack[(_fp_top + 1) & 7]

loc_00308740: ;
    PUSH32(esp, ecx);
    eax = MEM32(0x7FDBF8);
    ecx = eax;
    ecx = ecx & 0xFF;
    MEM32(esp) = ecx;
    fp_push((double)SMEM32(esp)); /* fild */
    ecx = MEM32(esp + 8);
    PUSH32(esp, 0);
    PUSH32(esp, 0);
    MEMF(0x7FDBE4) = (float)fp_top(); fp_popp(); /* fstp */
    edx = MEM32(0x7FDBE4);
    PUSH32(esp, edx);
    eax = (uint32_t)((int32_t)eax >> 8);
    eax = eax & 0xFF;
    PUSH32(esp, 0x40400000);
    PUSH32(esp, 0x3F99999A);
    edx = ZX16(LO16(eax));
    PUSH32(esp, ecx);
    MEM16(ecx + 0x450) = LO16(eax);
    PUSH32(esp, 0); sub_002F1620(); /* call 0x002F1620 */

loc_0030878B: ;
    esp = esp + 0x1C;
    esp += 4; return; /* ret */

    #undef fp_push
    #undef fp_pop
    #undef fp_popp
    #undef fp_top
    #undef fp_st1
}

/**
 * sub_00308790
 * Original: 0x00308790 - 0x0030883D (173 bytes, 52 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00308790(void)
{
    int _flags = 0; /* fallback flag var */

loc_00308790: ;
    PUSH32(esp, esi);
    esi = MEM32(esp + 8);
    eax = MEM32(esi + 0x568);
    if (TEST_Z(eax, eax)) goto loc_003087A6; /* je: equal / zero */

loc_0030879F: ;
    MEM8(eax + 0x48D) = 0;

loc_003087A6: ;
    eax = MEM32(esi + 0x68);
    if (CMP_EQ(eax, 0xFFFF)) goto loc_0030882A; /* je: equal / zero */

loc_003087B0: ;
    if (CMP_GE(eax, 0x205)) goto loc_0030882A; /* jge: greater or equal (signed >=) */

loc_003087B7: ;
    ecx = MEM32(esi + 0x74);
    if (TEST_Z(ecx, ecx)) goto loc_0030882A; /* je: equal / zero */

loc_003087BE: ;
    ecx = MEM32(ecx + 0x50);
    if (TEST_Z(ecx, ecx)) goto loc_0030882A; /* je: equal / zero */

loc_003087C5: ;
    ecx = MEM32(ecx + 0x42C);
    if (TEST_Z(ecx, ecx)) goto loc_0030882A; /* je: equal / zero */

loc_003087CF: ;
    if (CMP_NE(ecx, 0x3E7)) goto loc_003087DE; /* jne: not equal / not zero */

loc_003087D7: ;
    PUSH32(esp, 0); sub_002F65F0(); /* call 0x002F65F0 */

loc_003087DC: ;
    goto loc_0030882A;

loc_003087DE: ;
    if (CMP_A(MEM16(eax * 2 + 0x770390), 0x59)) goto loc_003087F0; /* ja: above (unsigned >) */

loc_003087E9: ;
    PUSH32(esp, 0); sub_002F65F0(); /* call 0x002F65F0 */

loc_003087EE: ;
    goto loc_0030882A;

loc_003087F0: ;
    eax = MEM32(esi + 0x74);
    eax = MEM32(eax + 0x50);
    edx = MEM32(eax + 0x434);
    PUSH32(esp, 0);
    PUSH32(esp, 0);
    ecx = 0; /* xor self */
    SET_LO16(ecx, MEM16(eax + 0x430));
    eax = MEM32(eax + 0x42C);
    PUSH32(esp, 0x40400000);
    PUSH32(esp, 0x3F800000);
    PUSH32(esp, ecx);
    PUSH32(esp, edx);
    PUSH32(esp, 0x59);
    PUSH32(esp, eax);
    SET_LO8(edx, 1);
    eax = esi;
    PUSH32(esp, 0); sub_002F1790(); /* call 0x002F1790 */

loc_00308827: ;
    esp = esp + 0x20;

loc_0030882A: ;
    esi = MEM32(esi + 0x568);
    if (TEST_Z(esi, esi)) goto loc_0030883B; /* je: equal / zero */

loc_00308834: ;
    MEM8(esi + 0x48D) = 1;

loc_0030883B: ;
    POP32(esp, esi);
    esp += 4; return; /* ret */

}

/**
 * sub_00308840
 * Original: 0x00308840 - 0x003088EF (175 bytes, 49 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00308840(void)
{
    int _flags = 0; /* fallback flag var */

loc_00308840: ;
    PUSH32(esp, esi);
    esi = MEM32(esp + 8);
    eax = MEM32(esi + 0x568);
    MEM8(eax + 0x48D) = 0;
    eax = MEM32(esi + 0x68);
    if (CMP_EQ(eax, 0xFFFF)) goto loc_003088E0; /* je: equal / zero */

loc_00308860: ;
    if (CMP_GE(eax, 0x205)) goto loc_003088E0; /* jge: greater or equal (signed >=) */

loc_00308867: ;
    ecx = MEM32(esi + 0x74);
    if (TEST_Z(ecx, ecx)) goto loc_003088E0; /* je: equal / zero */

loc_0030886E: ;
    ecx = MEM32(ecx + 0x50);
    if (TEST_Z(ecx, ecx)) goto loc_003088E0; /* je: equal / zero */

loc_00308875: ;
    ecx = MEM32(ecx + 0x1B0);
    if (TEST_Z(ecx, ecx)) goto loc_003088E0; /* je: equal / zero */

loc_0030887F: ;
    if (CMP_EQ(ecx, 0x3E7)) goto loc_00308892; /* je: equal / zero */

loc_00308887: ;
    if (CMP_A(MEM16(eax * 2 + 0x770390), 0x24)) goto loc_003088A6; /* ja: above (unsigned >) */

loc_00308892: ;
    PUSH32(esp, 0); sub_002F65F0(); /* call 0x002F65F0 */

loc_00308897: ;
    eax = MEM32(esi + 0x568);
    MEM8(eax + 0x48D) = 1;
    POP32(esp, esi);
    esp += 4; return; /* ret */

loc_003088A6: ;
    ecx = MEM32(esi + 0x74);
    eax = MEM32(ecx + 0x50);
    ecx = MEM32(eax + 0x1B8);
    PUSH32(esp, 0);
    edx = 0; /* xor self */
    SET_LO16(edx, MEM16(eax + 0x1B4));
    PUSH32(esp, 0);
    PUSH32(esp, 0x40400000);
    PUSH32(esp, 0x3F800000);
    PUSH32(esp, edx);
    edx = MEM32(eax + 0x1B0);
    PUSH32(esp, ecx);
    PUSH32(esp, 0x24);
    PUSH32(esp, edx);
    SET_LO8(edx, 1);
    eax = esi;
    PUSH32(esp, 0); sub_002F1790(); /* call 0x002F1790 */

loc_003088DD: ;
    esp = esp + 0x20;

loc_003088E0: ;
    eax = MEM32(esi + 0x568);
    MEM8(eax + 0x48D) = 1;
    POP32(esp, esi);
    esp += 4; return; /* ret */

}

/**
 * sub_003088F0
 * Original: 0x003088F0 - 0x00308919 (41 bytes, 13 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_003088F0(void)
{
    int _flags = 0; /* fallback flag var */

loc_003088F0: ;
    PUSH32(esp, esi);
    esi = MEM32(esp + 8);
    eax = MEM32(esi + 0x568);
    if (TEST_Z(eax, eax)) goto loc_00308908; /* je: equal / zero */

loc_003088FF: ;
    if (CMP_EQ(MEM32(eax + 0xBC), 2)) goto loc_00308917; /* je: equal / zero */

loc_00308908: ;
    eax = MEM32(0x7FDBF8);
    PUSH32(esp, 0xFFFFFFFFu);
    PUSH32(esp, 0); sub_002CB810(); /* call 0x002CB810 */

loc_00308914: ;
    esp = esp + 4;

loc_00308917: ;
    POP32(esp, esi);
    esp += 4; return; /* ret */

}

/**
 * sub_00308920
 * Original: 0x00308920 - 0x00308934 (20 bytes, 5 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00308920(void)
{
    int _flags = 0; /* fallback flag var */

loc_00308920: ;
    if (CMP_NE(MEM8(0x76F0E0), 1)) goto loc_00308933; /* jne: not equal / not zero */

loc_00308929: ;
    eax = MEM32(esp + 4);
    MEM8(eax + 0x24C) = MEM8(eax + 0x24C) + 1;

loc_00308933: ;
    esp += 4; return; /* ret */

}

/**
 * sub_00308940
 * Original: 0x00308940 - 0x00308963 (35 bytes, 8 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00308940(void)
{
    int _flags = 0; /* fallback flag var */
    float xmm0;

loc_00308940: ;
    ecx = MEM32(esp + 4);
    xmm0 = MEMF(ecx + 0xDC); /* movss */
    /* ucomiss xmm0, MEMF(0x648CF8) - sets EFLAGS */
    /* lahf - load AH from flags (used in FPU compare idiom) */
    if (1 /* jp after test - parity */) goto loc_00308962; /* jp: parity */

loc_00308959: ;
    MEM16(ecx + 0x21A) = 0;

loc_00308962: ;
    esp += 4; return; /* ret */

}

/**
 * sub_00308970
 * Original: 0x00308970 - 0x00308A6F (255 bytes, 67 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00308970(void)
{
    uint32_t ebp;
    int _flags = 0; /* fallback flag var */
    float xmm0;
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_00308970: ;
    PUSH32(esp, ecx);
    eax = MEM32(0x7FDBF8);
    (void)0; /* test eax, eax - flags set for next jcc */
    PUSH32(esp, ebx);
    PUSH32(esp, esi);
    esi = MEM32(0x84A5F8);
    PUSH32(esp, edi);
    edi = MEM32(esp + 0x14);
    MEM32(esp + 0xC) = 0x194;
    if (TEST_NZ(eax, eax)) goto loc_003089FF; /* jne: not equal / not zero */

loc_0030898F: ;
    ecx = ZX16(MEM16(edi + 0x60));
    PUSH32(esp, ebp);
    ecx++;
    ebp = ebp | 0xFFFFFFFFu;
    eax = 0; /* xor self */
    ebx = esi + 0x135;

loc_003089A0: ;
    edx = MEM32(0x84A5FC);
    if (CMP_EQ(MEM8(edx + eax), 0)) goto loc_003089B3; /* je: equal / zero */

loc_003089AC: ;
    edx = ZX8(MEM8(ebx));
    if (CMP_EQ(edx, ecx)) goto loc_003089C3; /* je: equal / zero */

loc_003089B3: ;
    eax++;
    ebx = ebx + 0x6D0;
    if (CMP_L(eax, 0x80)) goto loc_003089A0; /* jl: less (signed <) */

loc_003089C1: ;
    goto loc_003089C5;

loc_003089C3: ;
    ebp = eax;

loc_003089C5: ;
    eax = ZX8(MEM8(esi + 0x470));
    eax--;
    (void)0; /* cmp eax, ebp - flags set for next jcc */
    POP32(esp, ebp);
    if (CMP_NE(eax, ebp)) goto loc_00308A6A; /* jne: not equal / not zero */

loc_003089D6: ;
    SET_LO16(ecx, MEM16(edi + 0x170));
    xmm0 = MEMF(0x58BC2C); /* movss */
    edx = MEM32(esp + 0xC);
    SET_LO16(ecx, LO16(ecx) + 0x8000);
    MEM16(esi + 0x170) = LO16(ecx);
    MEMF(esi + 0x3B8) = xmm0; /* movss */
    goto loc_00308A19;

loc_003089FF: ;
    xmm0 = 0.0f; /* xorps self = zero */
    MEMF(edi + 0x528) = xmm0; /* movss */
    edx = 0x2E5;
    MEM32(edi + 0x52C) = 0x32;

loc_00308A19: ;
    eax = MEM32(edi + 0x520);
    PUSH32(esp, 0);
    PUSH32(esp, 0);
    PUSH32(esp, 0x40C00000);
    MEM32(esi + 0xD0) = eax;
    ecx = MEM32(edi + 0x524);
    PUSH32(esp, 0x40000000);
    MEM32(esi + 0xD4) = ecx;
    eax = MEM32(edi + 0x528);
    PUSH32(esp, 0x3F800000);
    SET_LO8(ebx, 1);
    PUSH32(esp, esi);
    MEM32(esi + 0x110) = eax;
    MEM8(esi + 0x17B) = LO8(ebx);
    PUSH32(esp, 0); sub_002F1620(); /* call 0x002F1620 */

loc_00308A5E: ;
    ecx = MEM32(esi + 0x568);
    esp = esp + 0x18;
    MEM8(ecx + 0x45) = LO8(ebx);

loc_00308A6A: ;
    POP32(esp, edi);
    POP32(esp, esi);
    POP32(esp, ebx);
    POP32(esp, ecx);
    esp += 4; return; /* ret */

}

/**
 * sub_00308A70
 * Original: 0x00308A70 - 0x00308A94 (36 bytes, 12 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00308A70(void)
{

loc_00308A70: ;
    ecx = MEM32(0x7FDBF8);
    edx = 0; /* xor self */
    SET_LO8(edx, MEM8(0x7FDBFA));
    eax = ecx;
    eax = (uint32_t)((int32_t)eax >> 8);
    PUSH32(esp, eax);
    eax = MEM32(esp + 8);
    PUSH32(esp, edx);
    SET_LO8(edx, 0); /* xor self */
    PUSH32(esp, 0); sub_002F5D20(); /* call 0x002F5D20 */

loc_00308A90: ;
    esp = esp + 8;
    esp += 4; return; /* ret */

}

/**
 * sub_00308AA0
 * Original: 0x00308AA0 - 0x00308AE1 (65 bytes, 26 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00308AA0(void)
{
    uint32_t ebp;
    int _flags = 0; /* fallback flag var */
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_00308AA0: ;
    edx = ZX16(MEM16(eax + 0x60));
    eax = MEM32(0x84A5F8);
    PUSH32(esp, ebp);
    PUSH32(esp, esi);
    PUSH32(esp, edi);
    edi = MEM32(0x84A5FC);
    edx++;
    esi = 0; /* xor self */
    ecx = 0; /* xor self */

loc_00308AB7: ;
    if (CMP_EQ(MEM8(edi + ecx), 0)) goto loc_00308ACD; /* je: equal / zero */

loc_00308ABD: ;
    ebp = ZX8(MEM8(eax + 0x135));
    if (CMP_NE(ebp, edx)) goto loc_00308ACD; /* jne: not equal / not zero */

loc_00308AC8: ;
    if (CMP_EQ(esi, ebx)) goto loc_00308ADD; /* je: equal / zero */

loc_00308ACC: ;
    esi++;

loc_00308ACD: ;
    ecx++;
    eax = eax + 0x6D0;
    if (CMP_L(ecx, 0x80)) goto loc_00308AB7; /* jl: less (signed <) */

loc_00308ADB: ;
    eax = 0; /* xor self */

loc_00308ADD: ;
    POP32(esp, edi);
    POP32(esp, esi);
    POP32(esp, ebp);
    esp += 4; return; /* ret */

}

/**
 * sub_00308AF0
 * Original: 0x00308AF0 - 0x00308B37 (71 bytes, 20 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00308AF0(void)
{
    uint32_t ebp;
    int _flags = 0; /* fallback flag var */
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_00308AF0: ;
    eax = MEM32(esp + 4);
    PUSH32(esp, ebx);
    ebx = 0; /* xor self */
    PUSH32(esp, 0); sub_00308AA0(); /* call 0x00308AA0 */

loc_00308AFC: ;
    if (TEST_Z(eax, eax)) { sub_00308B37(); return; } /* je: equal / zero */

loc_00308B00: ;
    ecx = MEM32(0x7FDBF8);
    edx = ecx;
    SET_LO8(ebx, 2);
    edx = (uint32_t)((int32_t)edx >> 8);
    ecx = ecx & 0xFF;
    if (CMP_A(MEM8(eax + 0xB7), LO8(ebx))) { sub_00308B37(); return; } /* ja: above (unsigned >) */

loc_00308B1B: ;
    MEM8(eax + 0xB7) = LO8(ebx);
    MEM8(eax + 0xB5) = LO8(edx);
    MEM8(eax + 0xB6) = LO8(ecx);
    edx = 0; /* xor self */
    ecx = eax;
    POP32(esp, ebx);
    g_seh_ebp = ebp; sub_002F60E0(); return; /* tail jmp 0x002F60E0 */

}

/**
 * sub_00308B40
 * Original: 0x00308B40 - 0x00308B55 (21 bytes, 6 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00308B40(void)
{

loc_00308B40: ;
    eax = MEM32(0x7FDBF8);
    ecx = MEM32(esp + 4);
    eax = eax | 1;
    eax = ~eax;
    MEM32(ecx + 0x19C) = eax;
    esp += 4; return; /* ret */

}

/**
 * sub_00308B60
 * Original: 0x00308B60 - 0x00308BCB (107 bytes, 39 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00308B60(void)
{
    int _flags = 0; /* fallback flag var */

loc_00308B60: ;
    eax = MEM32(0x7FDBF8);
    (void)0; /* test eax, eax - flags set for next jcc */
    PUSH32(esp, esi);
    esi = MEM32(esp + 8);
    if (TEST_Z(eax, eax)) goto loc_00308B79; /* je: equal / zero */

loc_00308B6E: ;
    PUSH32(esp, eax);
    eax = esi;
    PUSH32(esp, 0); sub_002F7B90(); /* call 0x002F7B90 */

loc_00308B76: ;
    esp = esp + 4;

loc_00308B79: ;
    eax = MEM32(0x7FDBF4);
    if (TEST_Z(eax, eax)) goto loc_00308B8D; /* je: equal / zero */

loc_00308B82: ;
    PUSH32(esp, eax);
    eax = esi;
    PUSH32(esp, 0); sub_002F7B90(); /* call 0x002F7B90 */

loc_00308B8A: ;
    esp = esp + 4;

loc_00308B8D: ;
    eax = MEM32(0x7FDBF0);
    if (TEST_Z(eax, eax)) goto loc_00308BA1; /* je: equal / zero */

loc_00308B96: ;
    PUSH32(esp, eax);
    eax = esi;
    PUSH32(esp, 0); sub_002F7B90(); /* call 0x002F7B90 */

loc_00308B9E: ;
    esp = esp + 4;

loc_00308BA1: ;
    eax = MEM32(0x7FDBEC);
    if (TEST_Z(eax, eax)) goto loc_00308BB5; /* je: equal / zero */

loc_00308BAA: ;
    PUSH32(esp, eax);
    eax = esi;
    PUSH32(esp, 0); sub_002F7B90(); /* call 0x002F7B90 */

loc_00308BB2: ;
    esp = esp + 4;

loc_00308BB5: ;
    eax = MEM32(0x7FDBE8);
    if (TEST_Z(eax, eax)) goto loc_00308BC9; /* je: equal / zero */

loc_00308BBE: ;
    PUSH32(esp, eax);
    eax = esi;
    PUSH32(esp, 0); sub_002F7B90(); /* call 0x002F7B90 */

loc_00308BC6: ;
    esp = esp + 4;

loc_00308BC9: ;
    POP32(esp, esi);
    esp += 4; return; /* ret */

}

/**
 * sub_00308BD0
 * Original: 0x00308BD0 - 0x00308C3B (107 bytes, 39 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00308BD0(void)
{
    int _flags = 0; /* fallback flag var */

loc_00308BD0: ;
    eax = MEM32(0x7FDBF8);
    (void)0; /* test eax, eax - flags set for next jcc */
    PUSH32(esp, esi);
    esi = MEM32(esp + 8);
    if (TEST_Z(eax, eax)) goto loc_00308BE9; /* je: equal / zero */

loc_00308BDE: ;
    PUSH32(esp, eax);
    eax = esi;
    PUSH32(esp, 0); sub_002F7BE0(); /* call 0x002F7BE0 */

loc_00308BE6: ;
    esp = esp + 4;

loc_00308BE9: ;
    eax = MEM32(0x7FDBF4);
    if (TEST_Z(eax, eax)) goto loc_00308BFD; /* je: equal / zero */

loc_00308BF2: ;
    PUSH32(esp, eax);
    eax = esi;
    PUSH32(esp, 0); sub_002F7BE0(); /* call 0x002F7BE0 */

loc_00308BFA: ;
    esp = esp + 4;

loc_00308BFD: ;
    eax = MEM32(0x7FDBF0);
    if (TEST_Z(eax, eax)) goto loc_00308C11; /* je: equal / zero */

loc_00308C06: ;
    PUSH32(esp, eax);
    eax = esi;
    PUSH32(esp, 0); sub_002F7BE0(); /* call 0x002F7BE0 */

loc_00308C0E: ;
    esp = esp + 4;

loc_00308C11: ;
    eax = MEM32(0x7FDBEC);
    if (TEST_Z(eax, eax)) goto loc_00308C25; /* je: equal / zero */

loc_00308C1A: ;
    PUSH32(esp, eax);
    eax = esi;
    PUSH32(esp, 0); sub_002F7BE0(); /* call 0x002F7BE0 */

loc_00308C22: ;
    esp = esp + 4;

loc_00308C25: ;
    eax = MEM32(0x7FDBE8);
    if (TEST_Z(eax, eax)) goto loc_00308C39; /* je: equal / zero */

loc_00308C2E: ;
    PUSH32(esp, eax);
    eax = esi;
    PUSH32(esp, 0); sub_002F7BE0(); /* call 0x002F7BE0 */

loc_00308C36: ;
    esp = esp + 4;

loc_00308C39: ;
    POP32(esp, esi);
    esp += 4; return; /* ret */

}

/**
 * sub_00308C40
 * Original: 0x00308C40 - 0x00308C5D (29 bytes, 10 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00308C40(void)
{
    int _flags = 0; /* fallback flag var */

loc_00308C40: ;
    SET_LO8(edx, MEM8(0x7FDBF8));
    PUSH32(esp, 0); sub_002B3F70(); /* call 0x002B3F70 */

loc_00308C4B: ;
    if (TEST_Z(eax, eax)) goto loc_00308C5C; /* je: equal / zero */

loc_00308C4F: ;
    PUSH32(esp, 1);
    PUSH32(esp, 0);
    PUSH32(esp, eax);
    PUSH32(esp, 0); sub_002F50C0(); /* call 0x002F50C0 */

loc_00308C59: ;
    esp = esp + 0xC;

loc_00308C5C: ;
    esp += 4; return; /* ret */

}

/**
 * sub_00308C60
 * Original: 0x00308C60 - 0x00308C87 (39 bytes, 13 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00308C60(void)
{
    int _flags = 0; /* fallback flag var */

loc_00308C60: ;
    SET_LO8(edx, MEM8(0x7FDBF8));
    PUSH32(esp, 0); sub_002B3F70(); /* call 0x002B3F70 */

loc_00308C6B: ;
    if (TEST_Z(eax, eax)) goto loc_00308C86; /* je: equal / zero */

loc_00308C6F: ;
    SET_LO8(ecx, MEM8(eax + 0x135));
    if (TEST_Z(LO8(ecx), LO8(ecx))) goto loc_00308C86; /* je: equal / zero */

loc_00308C79: ;
    PUSH32(esp, 1);
    PUSH32(esp, 0);
    PUSH32(esp, eax);
    PUSH32(esp, 0); sub_002F50C0(); /* call 0x002F50C0 */

loc_00308C83: ;
    esp = esp + 0xC;

loc_00308C86: ;
    esp += 4; return; /* ret */

}

/**
 * sub_00308C90
 * Original: 0x00308C90 - 0x00308E38 (424 bytes, 118 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00308C90(void)
{
    uint32_t ebp;
    int _flags = 0; /* fallback flag var */
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_00308C90: ;
    PUSH32(esp, ecx);
    eax = MEM32(0x7FDBEC);
    SET_LO8(edx, MEM8(0x7FDBF8));
    PUSH32(esp, ebx);
    ebx = MEM32(0x7FDBF0);
    PUSH32(esp, ebp);
    PUSH32(esp, esi);
    MEM32(esp + 0xC) = eax;
    PUSH32(esp, 0); sub_002B3F20(); /* call 0x002B3F20 */

loc_00308CAE: ;
    esi = eax;
    ebp = ebp | 0xFFFFFFFFu;
    if (CMP_EQ(esi, ebp)) goto loc_00308E33; /* je: equal / zero */

loc_00308CBB: ;
    (void)0; /* test LO8(ebx), LO8(ebx) - flags set for next jcc */
    ecx = MEM32(0x84A1B0);
    PUSH32(esp, edi);
    MEM8(ecx + esi) = 0;
    if (TEST_S(LO8(ebx), LO8(ebx))) goto loc_00308CE8; /* js: sign (negative) */

loc_00308CCA: ;
    PUSH32(esp, 0); sub_002F2E20(); /* call 0x002F2E20 */

loc_00308CCF: ;
    edi = eax;
    if (TEST_Z(edi, edi)) goto loc_00308CE8; /* je: equal / zero */

loc_00308CD5: ;
    PUSH32(esp, 1);
    PUSH32(esp, 0);
    PUSH32(esp, edi);
    PUSH32(esp, 0); sub_002F50C0(); /* call 0x002F50C0 */

loc_00308CDF: ;
    PUSH32(esp, edi);
    PUSH32(esp, 0); sub_002F2E90(); /* call 0x002F2E90 */

loc_00308CE5: ;
    esp = esp + 0x10;

loc_00308CE8: ;
    edx = MEM32(0x84A1AC);
    eax = esi;
    eax = (uint32_t)((int32_t)eax * (int32_t)0x54);
    MEM8(eax + edx + 0xA) = 0;
    ecx = MEM32(0x84A1AC);
    PUSH32(esp, 0);
    eax = eax + ecx;
    PUSH32(esp, esi);
    PUSH32(esp, eax);
    eax = 0; /* xor self */
    PUSH32(esp, 0); sub_002B2690(); /* call 0x002B2690 */

loc_00308D0B: ;
    esp = esp + 0xC;
    if (TEST_Z(eax, eax)) goto loc_00308E32; /* je: equal / zero */

loc_00308D16: ;
    edx = MEM32(0x84A5F8);
    eax = (uint32_t)((int32_t)eax * (int32_t)0x6D0);
    esi = eax + edx + -1744;
    eax = MEM32(0x7FDBF4);
    MEM32(esi + 0x580) = ebp;
    MEM32(esi + 0x184) = ebp;
    MEM32(esi + 0x188) = ebp;
    MEM32(esi + 0x18C) = ebp;
    MEM32(esi + 0x190) = ebp;
    ebp = MEM32(esp + 0x18);
    PUSH32(esp, eax);
    eax = ebp;
    MEM8(esi + 0x584) = 0;
    MEM8(esi + 0x194) = 0;
    MEM8(esi + 0x195) = 0;
    PUSH32(esp, 0); sub_002F77D0(); /* call 0x002F77D0 */

loc_00308D6D: ;
    SET_LO8(ecx, MEM8(ebp + 0x60));
    edi = MEM32(esi + 0x23C);
    esp = esp + 4;
    SET_LO8(ecx, LO8(ecx) + 1);
    MEM8(esi + 0x135) = LO8(ecx);
    ecx = MEM32(esp + 0x10);
    (void)0; /* test ecx, ecx - flags set for next jcc */
    SET_LO8(edx, (TEST_NZ(ecx, ecx)) ? 1 : 0); /* setne */
    SET_LO8(edx, LO8(edx) - 1);
    MEM32(esi + 0x12C) = eax;
    SET_LO8(ebx, LO8(ebx) & 0x7F);
    eax = ebp;
    MEM8(esi + 0x43D) = LO8(ebx);
    edx = edx & 4;
    MEM8(esi + 0x209) = LO8(edx);
    PUSH32(esp, 0); sub_003153A0(); /* call 0x003153A0 */

loc_00308DAB: ;
    eax = ebp + 0x78;
    edx = MEM32(eax);
    ecx = esi + 0x78;
    MEM32(ecx) = edx;
    edx = MEM32(eax + 4);
    MEM32(ecx + 4) = edx;
    eax = MEM32(eax + 8);
    MEM32(ecx + 8) = eax;
    SET_LO8(eax, MEM8(0x7819D5));
    if (TEST_Z(LO8(eax), LO8(eax))) goto loc_00308DD9; /* je: equal / zero */

loc_00308DCA: ;
    if (CMP_NE(MEM32(ebp + 0x68), 0x53)) goto loc_00308DD9; /* jne: not equal / not zero */

loc_00308DD0: ;
    SET_LO8(ecx, MEM8(esi + 0x60));
    MEM8(ebp + 0x42E) = LO8(ecx);

loc_00308DD9: ;
    if (CMP_NE(MEM32(0x7FA1F8), 0x3F)) goto loc_00308DF7; /* jne: not equal / not zero */

loc_00308DE2: ;
    if (CMP_NE(MEM32(esi + 0x68), 0x16)) goto loc_00308E32; /* jne: not equal / not zero */

loc_00308DE8: ;
    PUSH32(esp, 0x6382FC);
    eax = esi;
    PUSH32(esp, 0); sub_002F7BE0(); /* call 0x002F7BE0 */

loc_00308DF4: ;
    esp = esp + 4;

loc_00308DF7: ;
    if (CMP_NE(MEM32(0x7FA1F8), 0x35)) goto loc_00308E32; /* jne: not equal / not zero */

loc_00308E00: ;
    if (CMP_NE(MEM32(esi + 0x68), 0x25)) goto loc_00308E32; /* jne: not equal / not zero */

loc_00308E06: ;
    edx = MEM32(esi + 0x238);
    MEM32(edx) = 1;
    eax = MEM32(ebp + 0x23C);
    PUSH32(esp, 0); sub_00315260(); /* call 0x00315260 */

loc_00308E1D: ;
    (void)0; /* test eax, eax - flags set for next jcc */
    if (TEST_NZ(eax, eax)) ebp = eax; /* cmovne */
    if (TEST_Z(ebp, ebp)) goto loc_00308E32; /* je: equal / zero */

loc_00308E26: ;
    eax = MEM32(ebp + 0x238);
    MEM32(eax) = 1;

loc_00308E32: ;
    POP32(esp, edi);

loc_00308E33: ;
    POP32(esp, esi);
    POP32(esp, ebp);
    POP32(esp, ebx);
    POP32(esp, ecx);
    esp += 4; return; /* ret */

}

/**
 * sub_00308E40
 * Original: 0x00308E40 - 0x00308F4E (270 bytes, 68 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00308E40(void)
{
    int _flags = 0; /* fallback flag var */
    float xmm0;

loc_00308E40: ;
    SET_LO8(eax, MEM8(0x7819D5));
    esp = esp - 8;
    (void)0; /* test LO8(eax), LO8(eax) - flags set for next jcc */
    PUSH32(esp, esi);
    esi = MEM32(esp + 0x10);
    if (TEST_NZ(LO8(eax), LO8(eax))) goto loc_00308E5F; /* jne: not equal / not zero */

loc_00308E51: ;
    SET_LO8(eax, MEM8(esi + 0x42E));
    if (TEST_Z(LO8(eax), LO8(eax))) goto loc_00308F49; /* je: equal / zero */

loc_00308E5F: ;
    ecx = MEM32(esi + 0x4B0);
    edx = MEM32(ecx + 0x24);
    eax = MEM32(0x7FDBF8);
    PUSH32(esp, ebx);
    ebx = MEM32(0x7FDBF4);
    ecx = esp + 8;
    PUSH32(esp, ecx);
    MEM32(esp + 0x10) = eax;
    eax = MEM32(edx + 8);
    eax = MEM32(eax + 0x10);
    PUSH32(esp, 1);
    PUSH32(esp, 0);
    PUSH32(esp, 0); sub_00415EC0(); /* call 0x00415EC0 */

loc_00308E8C: ;
    esp = esp + 0xC;
    edx = 0; /* xor self */
    if (TEST_Z(eax, eax)) goto loc_00308EA2; /* je: equal / zero */

loc_00308E95: ;
    eax = MEM32(esp + 8);
    if (CMP_EQ(eax, edx)) goto loc_00308EA2; /* je: equal / zero */

loc_00308E9D: ;
    ecx = MEM32(eax + 8);
    goto loc_00308EA4;

loc_00308EA2: ;
    ecx = 0; /* xor self */

loc_00308EA4: ;
    eax = ZX8(MEM8(esi + 0x42E));
    eax = (uint32_t)((int32_t)eax * (int32_t)0x6D0);
    PUSH32(esp, edi);
    eax = eax + MEM32(0x84A5F8);
    edi = MEM32(eax + 0x68);
    if (CMP_EQ(edi, 0x33)) goto loc_00308F47; /* je: equal / zero */

loc_00308EC4: ;
    SET_LO8(ebx, MEM8(esi + 0x60));
    xmm0 = MEMF(0x648D14); /* movss */
    MEM32(eax + 0x12C) = ecx;
    SET_LO8(ecx, MEM8(esp + 0x10));
    SET_LO8(ebx, LO8(ebx) + 1);
    MEM8(eax + 0x135) = LO8(ebx);
    MEM8(eax + 0x209) = 4;
    MEM8(eax + 0x20C) = LO8(edx);
    MEM8(eax + 0x234) = 0xFF;
    MEM32(eax + 0x420) = edx;
    MEM8(eax + 0x43D) = LO8(ecx);
    MEM16(eax + 0x1EC) = LO16(edx);
    MEM16(eax + 0x1EE) = LO16(edx);
    MEMF(eax + 0x1F4) = xmm0; /* movss */
    MEMF(eax + 0x1F8) = xmm0; /* movss */
    MEMF(eax + 0x1E4) = xmm0; /* movss */
    MEMF(eax + 0x1E8) = xmm0; /* movss */
    if (CMP_NE(MEM32(esi + 0x68), 0x53)) goto loc_00308F47; /* jne: not equal / not zero */

loc_00308F35: ;
    if (CMP_NE(edi, 0x16)) goto loc_00308F47; /* jne: not equal / not zero */

loc_00308F3A: ;
    PUSH32(esp, 0xFF);
    PUSH32(esp, 0); sub_000B9900(); /* call 0x000B9900 */

loc_00308F44: ;
    esp = esp + 4;

loc_00308F47: ;
    POP32(esp, edi);
    POP32(esp, ebx);

loc_00308F49: ;
    POP32(esp, esi);
    esp = esp + 8;
    esp += 4; return; /* ret */

}

/**
 * sub_00308F50
 * Original: 0x00308F50 - 0x00308F8D (61 bytes, 21 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00308F50(void)
{
    uint32_t ebp;
    int _flags = 0; /* fallback flag var */
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_00308F50: ;
    PUSH32(esp, ebx);
    ebx = MEM32(0x7FDBF8);
    PUSH32(esp, esi);
    esi = MEM32(esp + 0xC);
    eax = MEM32(esi + 0x4B0);
    ecx = MEM32(eax + 0x24);
    edx = MEM32(ecx + 8);
    eax = MEM32(edx + 0x10);
    ecx = esp + 0xC;
    PUSH32(esp, ecx);
    PUSH32(esp, 1);
    PUSH32(esp, 0);
    PUSH32(esp, 0); sub_00415EC0(); /* call 0x00415EC0 */

loc_00308F79: ;
    esp = esp + 0xC;
    if (TEST_Z(eax, eax)) { sub_00308F8D(); return; } /* je: equal / zero */

loc_00308F80: ;
    eax = MEM32(esp + 0xC);
    if (TEST_Z(eax, eax)) { sub_00308F8D(); return; } /* je: equal / zero */

loc_00308F88: ;
    ecx = MEM32(eax + 8);
    g_seh_ebp = ebp; sub_00308F8F(); return; /* tail jmp 0x00308F8F */

}

/**
 * sub_00308FE0
 * Original: 0x00308FE0 - 0x00309023 (67 bytes, 19 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00308FE0(void)
{
    int _flags = 0; /* fallback flag var */
    float xmm2;

loc_00308FE0: ;
    PUSH32(esp, ecx);
    xmm2 = (float)(int32_t)MEM32(0x7FDBF8); /* cvtsi2ss */
    xmm2 = xmm2 * MEMF(0x648D80); /* mulss */
    PUSH32(esp, esi);
    esi = MEM32(esp + 0xC);
    eax = MEM32(esi + 0x3C4);
    (void)0; /* test eax, eax - flags set for next jcc */
    MEMF(esp + 4) = xmm2; /* movss */
    if (TEST_Z(eax, eax)) goto loc_00309018; /* je: equal / zero */

loc_00309006: ;
    ecx = MEM32(esp + 4);
    PUSH32(esp, ecx);
    eax = eax + 4;
    edx = 0; /* xor self */
    PUSH32(esp, 0); sub_00036830(); /* call 0x00036830 */

loc_00309015: ;
    esp = esp + 4;

loc_00309018: ;
    MEMF(esi + 0x120) = xmm2; /* movss */
    POP32(esp, esi);
    POP32(esp, ecx);
    esp += 4; return; /* ret */

}

/**
 * sub_00309030
 * Original: 0x00309030 - 0x0030904D (29 bytes, 9 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00309030(void)
{
    uint32_t ebp;
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_00309030: ;
    ecx = MEM32(0x84A5F8);
    PUSH32(esp, ebx);
    PUSH32(esp, esi);
    esi = MEM32(0x84A5FC);
    PUSH32(esp, edi);
    edi = MEM32(esp + 0x10);
    eax = 0; /* xor self */
    ecx = ecx + 0x420;
    g_seh_ebp = ebp; sub_00309050(); return; /* tail jmp 0x00309050 */

}

/**
 * sub_00309090
 * Original: 0x00309090 - 0x003090A2 (18 bytes, 7 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00309090(void)
{

loc_00309090: ;
    eax = MEM32(esp + 4);
    PUSH32(esp, 1);
    PUSH32(esp, 0);
    PUSH32(esp, eax);
    PUSH32(esp, 0); sub_002F50C0(); /* call 0x002F50C0 */

loc_0030909E: ;
    esp = esp + 0xC;
    esp += 4; return; /* ret */

}

/**
 * sub_003090B0
 * Original: 0x003090B0 - 0x003090C2 (18 bytes, 7 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_003090B0(void)
{

loc_003090B0: ;
    eax = MEM32(esp + 4);
    PUSH32(esp, 1);
    PUSH32(esp, 1);
    PUSH32(esp, eax);
    PUSH32(esp, 0); sub_002F50C0(); /* call 0x002F50C0 */

loc_003090BE: ;
    esp = esp + 0xC;
    esp += 4; return; /* ret */

}

/**
 * sub_003090D0
 * Original: 0x003090D0 - 0x0030915F (143 bytes, 44 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_003090D0(void)
{
    int _flags = 0; /* fallback flag var */

loc_003090D0: ;
    PUSH32(esp, esi);
    esi = MEM32(esp + 8);
    eax = MEM32(esi + 0x68);
    if (CMP_EQ(eax, 0xFFFF)) goto loc_00309156; /* je: equal / zero */

loc_003090DF: ;
    if (CMP_GE(eax, 0x205)) goto loc_00309156; /* jge: greater or equal (signed >=) */

loc_003090E6: ;
    ecx = MEM32(esi + 0x74);
    if (TEST_Z(ecx, ecx)) goto loc_00309156; /* je: equal / zero */

loc_003090ED: ;
    edx = MEM32(ecx + 0x50);
    if (TEST_Z(edx, edx)) goto loc_00309156; /* je: equal / zero */

loc_003090F4: ;
    edx = MEM32(edx + 0x210);
    if (TEST_Z(edx, edx)) goto loc_00309156; /* je: equal / zero */

loc_003090FE: ;
    if (CMP_EQ(edx, 0x3E7)) goto loc_00309111; /* je: equal / zero */

loc_00309106: ;
    if (CMP_A(MEM16(eax * 2 + 0x770390), 0x2C)) goto loc_0030911F; /* ja: above (unsigned >) */

loc_00309111: ;
    PUSH32(esp, 0); sub_002F65F0(); /* call 0x002F65F0 */

loc_00309116: ;
    MEM8(esi + 0x180) = 0x19;
    POP32(esp, esi);
    esp += 4; return; /* ret */

loc_0030911F: ;
    eax = MEM32(ecx + 0x50);
    edx = MEM32(eax + 0x218);
    PUSH32(esp, 0);
    PUSH32(esp, 0);
    ecx = 0; /* xor self */
    SET_LO16(ecx, MEM16(eax + 0x214));
    eax = MEM32(eax + 0x210);
    PUSH32(esp, 0x41400000);
    PUSH32(esp, 0x3FC00000);
    PUSH32(esp, ecx);
    PUSH32(esp, edx);
    PUSH32(esp, 0x2C);
    PUSH32(esp, eax);
    SET_LO8(edx, 1);
    eax = esi;
    PUSH32(esp, 0); sub_002F1790(); /* call 0x002F1790 */

loc_00309153: ;
    esp = esp + 0x20;

loc_00309156: ;
    MEM8(esi + 0x180) = 0x19;
    POP32(esp, esi);
    esp += 4; return; /* ret */

}

/**
 * sub_00309160
 * Original: 0x00309160 - 0x00309171 (17 bytes, 4 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00309160(void)
{

loc_00309160: ;
    eax = MEM32(esp + 4);
    ecx = MEM32(0x7FDBF8);
    MEM32(eax + 0x52C) = ecx;
    esp += 4; return; /* ret */

}

/**
 * sub_00309180
 * Original: 0x00309180 - 0x003091C3 (67 bytes, 19 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00309180(void)
{
    int _flags = 0; /* fallback flag var */

loc_00309180: ;
    PUSH32(esp, esi);
    esi = MEM32(esp + 8);
    eax = MEM32(esi + 0x568);
    MEM16(eax + 8) = 1;
    SET_LO8(ecx, MEM8(esi + 0x141));
    SET_LO8(eax, 0x15);
    if (CMP_EQ(LO8(ecx), LO8(eax))) goto loc_003091AA; /* je: equal / zero */

loc_0030919D: ;
    MEM8(esi + 0x141) = LO8(eax);
    eax = esi;
    PUSH32(esp, 0); sub_002CF1C0(); /* call 0x002CF1C0 */

loc_003091AA: ;
    SET_LO8(eax, 0); /* xor self */
    PUSH32(esp, esi);
    MEM8(esi + 0x180) = LO8(eax);
    MEM8(esi + 0x17D) = LO8(eax);
    PUSH32(esp, 0); sub_0030FFA0(); /* call 0x0030FFA0 */

loc_003091BE: ;
    esp = esp + 4;
    POP32(esp, esi);
    esp += 4; return; /* ret */

}

/**
 * sub_003091D0
 * Original: 0x003091D0 - 0x003091EC (28 bytes, 5 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_003091D0(void)
{
    uint32_t ebp;
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_003091D0: ;
    eax = MEM32(esp + 4);
    ecx = MEM32(eax + 0x568);
    MEM16(ecx + 0x80) = 0;
    MEM32(esp + 4) = eax;
    g_seh_ebp = ebp; sub_0030FFA0(); return; /* tail jmp 0x0030FFA0 */

}

/**
 * sub_003092E0
 * Original: 0x003092E0 - 0x00309420 (320 bytes, 80 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_003092E0(void)
{
    int _flags = 0; /* fallback flag var */

loc_003092E0: ;
    esp = esp - 8;
    PUSH32(esp, esi);
    esi = MEM32(esp + 0x10);
    eax = MEM32(esi + 0x568);
    (void)0; /* test eax, eax - flags set for next jcc */
    MEM8(esp + 7) = 0;
    MEM8(esp + 8) = 0;
    MEM8(esp + 9) = 0;
    MEM8(esp + 0xA) = 0;
    MEM8(esp + 0xB) = 0;
    if (TEST_Z(eax, eax)) { sub_00309420(); return; } /* je: equal / zero */

loc_0030930F: ;
    ecx = MEM32(esi + 0xA4);
    PUSH32(esp, ebx);
    (void)0; /* cmp MEM32(eax + 0x474), ecx - flags set for next jcc */
    SET_LO8(edx, 1);
    if (CMP_NE(MEM32(eax + 0x474), ecx)) goto loc_00309324; /* jne: not equal / not zero */

loc_00309320: ;
    MEM8(esp + 0xB) = LO8(edx);

loc_00309324: ;
    if (CMP_NE(MEM32(eax + 0x478), ecx)) goto loc_00309330; /* jne: not equal / not zero */

loc_0030932C: ;
    MEM8(esp + 0xC) = LO8(edx);

loc_00309330: ;
    if (CMP_NE(MEM32(eax + 0x47C), ecx)) goto loc_0030933C; /* jne: not equal / not zero */

loc_00309338: ;
    MEM8(esp + 0xD) = LO8(edx);

loc_0030933C: ;
    if (CMP_EQ(ecx, 0xFFFFFFFFu)) goto loc_0030934D; /* je: equal / zero */

loc_00309341: ;
    if (CMP_NE(MEM32(eax + 0x480), ecx)) goto loc_0030934D; /* jne: not equal / not zero */

loc_00309349: ;
    MEM8(esp + 0xE) = LO8(edx);

loc_0030934D: ;
    if (CMP_NE(MEM32(eax + 0x484), ecx)) goto loc_00309359; /* jne: not equal / not zero */

loc_00309355: ;
    MEM8(esp + 0xF) = LO8(edx);

loc_00309359: ;
    eax = MEM32(esi + 0x568);
    SET_LO8(ebx, MEM8(eax + 0x48D));
    PUSH32(esp, 0);
    PUSH32(esp, 0);
    PUSH32(esp, 0);
    PUSH32(esp, 0x40C00000);
    MEM8(eax + 0x48D) = 0;
    edx = MEM32(esi + 0xA4);
    PUSH32(esp, 0x3F800000);
    edx++;
    PUSH32(esp, esi);
    PUSH32(esp, 0); sub_002F1620(); /* call 0x002F1620 */

loc_00309389: ;
    eax = MEM32(esi + 0x568);
    MEM8(eax + 0x48D) = LO8(ebx);
    SET_LO8(eax, MEM8(esp + 0x23));
    esp = esp + 0x18;
    (void)0; /* test LO8(eax), LO8(eax) - flags set for next jcc */
    POP32(esp, ebx);
    if (TEST_Z(LO8(eax), LO8(eax))) goto loc_003093B3; /* je: equal / zero */

loc_003093A1: ;
    ecx = MEM32(esi + 0x568);
    edx = MEM32(esi + 0xA4);
    MEM32(ecx + 0x474) = edx;

loc_003093B3: ;
    SET_LO8(eax, MEM8(esp + 8));
    if (TEST_Z(LO8(eax), LO8(eax))) goto loc_003093CD; /* je: equal / zero */

loc_003093BB: ;
    eax = MEM32(esi + 0x568);
    ecx = MEM32(esi + 0xA4);
    MEM32(eax + 0x478) = ecx;

loc_003093CD: ;
    SET_LO8(eax, MEM8(esp + 9));
    if (TEST_Z(LO8(eax), LO8(eax))) goto loc_003093E7; /* je: equal / zero */

loc_003093D5: ;
    edx = MEM32(esi + 0x568);
    eax = MEM32(esi + 0xA4);
    MEM32(edx + 0x47C) = eax;

loc_003093E7: ;
    SET_LO8(eax, MEM8(esp + 0xA));
    if (TEST_Z(LO8(eax), LO8(eax))) goto loc_00309401; /* je: equal / zero */

loc_003093EF: ;
    ecx = MEM32(esi + 0x568);
    edx = MEM32(esi + 0xA4);
    MEM32(ecx + 0x480) = edx;

loc_00309401: ;
    SET_LO8(eax, MEM8(esp + 0xB));
    if (TEST_Z(LO8(eax), LO8(eax))) goto loc_0030941B; /* je: equal / zero */

loc_00309409: ;
    eax = MEM32(esi + 0x568);
    ecx = MEM32(esi + 0xA4);
    MEM32(eax + 0x484) = ecx;

loc_0030941B: ;
    POP32(esp, esi);
    esp = esp + 8;
    esp += 4; return; /* ret */

}

/**
 * sub_00309450
 * Original: 0x00309450 - 0x003094D0 (128 bytes, 41 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00309450(void)
{
    uint32_t ebp;
    int _flags = 0; /* fallback flag var */
    float xmm0, xmm1;
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_00309450: ;
    PUSH32(esp, ecx);
    xmm0 = 0.0f; /* xorps self = zero */
    PUSH32(esp, ebx);
    ebx = MEM32(esp + 0xC);
    eax = MEM32(ebx + 0x568);
    MEM32(eax + 0x47C) = 0xFFFFFFFFu;
    xmm1 = MEMF(ebx + 0xDC); /* movss */
    /* comiss xmm1, xmm0 - sets EFLAGS */
    if ((xmm1 <= xmm0)) { sub_003094D0(); return; } /* jbe: below or equal (unsigned <=) */

loc_00309476: ;
    PUSH32(esp, ebp);
    ebp = MEM32(ebx + 0x568);
    eax = MEM32(ebp + 0x444);
    PUSH32(esp, esi);
    PUSH32(esp, edi);
    edi = MEM32(ebp + 0xA0);
    ecx = esp + 0x18;
    PUSH32(esp, ecx);
    edx = esp + 0x14;
    PUSH32(esp, edx);
    PUSH32(esp, 0); sub_0032FDA0(); /* call 0x0032FDA0 */

loc_0030949A: ;
    edi = MEM32(ebp + 0x5A4);
    PUSH32(esp, eax);
    esi = 8;
    eax = ebx;
    PUSH32(esp, 0); sub_002B14A0(); /* call 0x002B14A0 */

loc_003094AD: ;
    eax = MEM32(esp + 0x24);
    edx = MEM32(esp + 0x1C);
    PUSH32(esp, 0);
    PUSH32(esp, 0);
    PUSH32(esp, 0);
    PUSH32(esp, 0x40C00000);
    PUSH32(esp, eax);
    PUSH32(esp, ebx);
    PUSH32(esp, 0); sub_002F1620(); /* call 0x002F1620 */

loc_003094C7: ;
    esp = esp + 0x24;
    POP32(esp, edi);
    POP32(esp, esi);
    POP32(esp, ebp);
    POP32(esp, ebx);
    POP32(esp, ecx);
    esp += 4; return; /* ret */

}

/**
 * sub_00309500
 * Original: 0x00309500 - 0x00309580 (128 bytes, 41 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00309500(void)
{
    uint32_t ebp;
    int _flags = 0; /* fallback flag var */
    float xmm0, xmm1;
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_00309500: ;
    PUSH32(esp, ecx);
    xmm0 = 0.0f; /* xorps self = zero */
    PUSH32(esp, ebx);
    ebx = MEM32(esp + 0xC);
    eax = MEM32(ebx + 0x568);
    MEM32(eax + 0x47C) = 0xFFFFFFFFu;
    xmm1 = MEMF(ebx + 0xDC); /* movss */
    /* comiss xmm1, xmm0 - sets EFLAGS */
    if ((xmm1 <= xmm0)) { sub_00309580(); return; } /* jbe: below or equal (unsigned <=) */

loc_00309526: ;
    PUSH32(esp, ebp);
    ebp = MEM32(ebx + 0x568);
    eax = MEM32(ebp + 0x444);
    PUSH32(esp, esi);
    PUSH32(esp, edi);
    edi = MEM32(ebp + 0xA0);
    ecx = esp + 0x18;
    PUSH32(esp, ecx);
    edx = esp + 0x14;
    PUSH32(esp, edx);
    PUSH32(esp, 0); sub_0032FDA0(); /* call 0x0032FDA0 */

loc_0030954A: ;
    edi = MEM32(ebp + 0x5A4);
    PUSH32(esp, eax);
    esi = 8;
    eax = ebx;
    PUSH32(esp, 0); sub_002B14A0(); /* call 0x002B14A0 */

loc_0030955D: ;
    eax = MEM32(esp + 0x24);
    edx = MEM32(esp + 0x1C);
    PUSH32(esp, 0);
    PUSH32(esp, 0);
    PUSH32(esp, 0);
    PUSH32(esp, 0x40C00000);
    PUSH32(esp, eax);
    PUSH32(esp, ebx);
    PUSH32(esp, 0); sub_002F1620(); /* call 0x002F1620 */

loc_00309577: ;
    esp = esp + 0x24;
    POP32(esp, edi);
    POP32(esp, esi);
    POP32(esp, ebp);
    POP32(esp, ebx);
    POP32(esp, ecx);
    esp += 4; return; /* ret */

}

/**
 * sub_003095F0
 * Original: 0x003095F0 - 0x00309773 (387 bytes, 97 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_003095F0(void)
{
    uint32_t ebp;
    int _flags = 0; /* fallback flag var */
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_003095F0: ;
    PUSH32(esp, esi);
    esi = MEM32(esp + 8);
    ecx = MEM32(esi + 0xA4);
    (void)0; /* cmp ecx, 0x176 - flags set for next jcc */
    eax = 1;
    if (CMP_G(ecx, 0x176)) goto loc_003096BB; /* jg: greater (signed >) */

loc_0030960C: ;
    if (CMP_EQ(ecx, 0x176)) goto loc_00309740; /* je: equal / zero */

loc_00309612: ;
    if (CMP_G(ecx, 0x12C)) goto loc_0030966F; /* jg: greater (signed >) */

loc_0030961A: ;
    if (CMP_EQ(ecx, 0x12C)) goto loc_0030968C; /* je: equal / zero */

loc_0030961C: ;
    edx = ecx + -53;
    if (CMP_A(edx, 0xD7)) { sub_00309773(); return; } /* ja: above (unsigned >) */

loc_0030962B: ;
    edx = ZX8(MEM8(edx + 0x3097B8));
    g_seh_ebp = ebp; RECOMP_ITAIL(MEM32(edx * 4 + 0x3097A4)); return; /* indirect tail jmp */

    edx = 0x3A;
    eax = 0; /* xor self */
    goto loc_003096EF;

    edx = 0xFE;
    goto loc_003096EF;

    eax = MEM32(esi + 0x568);
    ecx = MEM32(eax + 0x2B0);
    if (TEST_Z(ecx, ecx)) goto loc_00309768; /* je: equal / zero */

loc_00309663: ;
    edx = 0x10A;
    eax = 0; /* xor self */
    goto loc_003096EF;

loc_0030966F: ;
    eax = ecx + -312;
    if (CMP_A(eax, 0x3D)) { sub_00309773(); return; } /* ja: above (unsigned >) */

loc_0030967E: ;
    edx = ZX8(MEM8(eax + 0x3098A8));
    g_seh_ebp = ebp; RECOMP_ITAIL(MEM32(edx * 4 + 0x309890)); return; /* indirect tail jmp */

loc_0030968C: ;
    edx = 0x12D;
    eax = 0; /* xor self */
    goto loc_003096EF;

    edx = 0x3E;
    eax = 0; /* xor self */
    goto loc_003096EF;

    eax = MEM32(esi + 0x568);
    ecx = MEM32(eax + 0x2B0);
    if (TEST_Z(ecx, ecx)) goto loc_00309768; /* je: equal / zero */

loc_003096B2: ;
    edx = 0x165;
    eax = 0; /* xor self */
    goto loc_003096EF;

loc_003096BB: ;
    if (CMP_G(ecx, 0x274)) goto loc_00309727; /* jg: greater (signed >) */

loc_003096C3: ;
    if (CMP_EQ(ecx, 0x274)) goto loc_00309720; /* je: equal / zero */

loc_003096C5: ;
    edx = ecx + -461;
    if (CMP_A(edx, 0xA6)) { sub_00309773(); return; } /* ja: above (unsigned >) */

loc_003096D7: ;
    edx = ZX8(MEM8(edx + 0x3098FC));
    g_seh_ebp = ebp; RECOMP_ITAIL(MEM32(edx * 4 + 0x3098E8)); return; /* indirect tail jmp */

    edx = ecx + 1;
    eax = 0; /* xor self */
    if (CMP_EQ(edx, 0xFFFFFFFFu)) goto loc_00309707; /* je: equal / zero */

loc_003096EF: ;
    PUSH32(esp, eax);
    PUSH32(esp, 0);
    PUSH32(esp, 0);
    PUSH32(esp, 0x40800000);
    PUSH32(esp, 0x3F800000);
    PUSH32(esp, esi);
    PUSH32(esp, 0); sub_002F1620(); /* call 0x002F1620 */

loc_00309704: ;
    esp = esp + 0x18;

loc_00309707: ;
    POP32(esp, esi);
    esp += 4; return; /* ret */

    edx = 0x1D8;
    goto loc_003096EF;

    edx = 0x1CE;
    eax = 0; /* xor self */
    goto loc_003096EF;

loc_00309720: ;
    edx = 0x26F;
    goto loc_003096EF;

loc_00309727: ;
    eax = ecx + -865;
    if (CMP_A(eax, 0xF)) { sub_00309773(); return; } /* ja: above (unsigned >) */

loc_00309732: ;
    eax = ZX8(MEM8(eax + 0x3099B0));
    g_seh_ebp = ebp; RECOMP_ITAIL(MEM32(eax * 4 + 0x3099A4)); return; /* indirect tail jmp */

loc_00309740: ;
    edx = 0x177;
    eax = 0; /* xor self */
    goto loc_003096EF;

    ecx = MEM32(esi + 0x568);
    eax = MEM32(ecx + 0x2B0);
    if (TEST_Z(eax, eax)) goto loc_00309768; /* je: equal / zero */

loc_00309759: ;
    eax = 0; /* xor self */
    edx = 0x157;
    MEM8(esi + 0x17D) = LO8(eax);
    goto loc_003096EF;

loc_00309768: ;
    PUSH32(esp, esi);
    PUSH32(esp, 0); sub_0030FFA0(); /* call 0x0030FFA0 */

loc_0030976E: ;
    esp = esp + 4;
    POP32(esp, esi);
    esp += 4; return; /* ret */

}

/**
 * sub_003099F0
 * Original: 0x003099F0 - 0x00309A25 (53 bytes, 17 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_003099F0(void)
{
    uint32_t ebp;
    int _flags = 0; /* fallback flag var */
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_003099F0: ;
    edx = MEM32(0x7FDBF4);
    (void)0; /* test edx, edx - flags set for next jcc */
    eax = MEM32(0x7FDBF8);
    PUSH32(esp, ebx);
    PUSH32(esp, esi);
    esi = MEM32(esp + 0xC);
    if (TEST_Z(edx, edx)) { sub_00309A25(); return; } /* je: equal / zero */

loc_00309A05: ;
    ecx = MEM32(esi + 0x568);
    if (TEST_Z(ecx, ecx)) { sub_00309A25(); return; } /* je: equal / zero */

loc_00309A0F: ;
    SET_LO8(ebx, MEM8(ecx + 0xB1));
    if (TEST_Z(LO8(ebx), LO8(ebx))) { sub_00309A25(); return; } /* je: equal / zero */

loc_00309A19: ;
    eax = edx;
    edx = MEM32(0x7FDBEC);
    (void)0; /* test edx, edx - flags set for next jcc */
    g_seh_ebp = ebp; sub_00309A37(); return; /* tail jmp 0x00309A37 */

}

/**
 * sub_00309A70
 * Original: 0x00309A70 - 0x00309AAB (59 bytes, 19 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00309A70(void)
{
    uint32_t ebp;
    int _flags = 0; /* fallback flag var */
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_00309A70: ;
    edx = MEM32(0x7FDBF4);
    (void)0; /* test edx, edx - flags set for next jcc */
    eax = MEM32(0x7FDBF8);
    PUSH32(esp, esi);
    esi = MEM32(esp + 8);
    PUSH32(esp, edi);
    edi = MEM32(0x7FDBE8);
    if (TEST_Z(edx, edx)) { sub_00309AAB(); return; } /* je: equal / zero */

loc_00309A8B: ;
    ecx = MEM32(esi + 0x568);
    if (TEST_Z(ecx, ecx)) { sub_00309AAB(); return; } /* je: equal / zero */

loc_00309A95: ;
    PUSH32(esp, ebx);
    SET_LO8(ebx, MEM8(ecx + 0xB0));
    (void)0; /* test LO8(ebx), LO8(ebx) - flags set for next jcc */
    POP32(esp, ebx);
    if (TEST_Z(LO8(ebx), LO8(ebx))) { sub_00309AAB(); return; } /* je: equal / zero */

loc_00309AA1: ;
    ecx = MEM32(0x7FDBEC);
    eax = edx;
    g_seh_ebp = ebp; sub_00309AB1(); return; /* tail jmp 0x00309AB1 */

}

/**
 * sub_00309B30
 * Original: 0x00309B30 - 0x00309B88 (88 bytes, 17 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00309B30(void)
{
    int _flags = 0; /* fallback flag var */

loc_00309B30: ;
    eax = MEM32(esp + 4);
    ecx = MEM32(eax + 0x568);
    if (TEST_Z(ecx, ecx)) goto loc_00309B87; /* je: equal / zero */

loc_00309B3E: ;
    if (CMP_NE(MEM32(ecx + 0x1F8), 1)) goto loc_00309B87; /* jne: not equal / not zero */

loc_00309B47: ;
    MEM32(ecx + 0x1F8) = 2;
    ecx = MEM32(eax + 0x568);
    edx = MEM32(ecx + 0x2F8);
    MEM32(ecx + 0x2FC) = edx;
    ecx = MEM32(eax + 0x568);
    edx = MEM32(ecx + 0x300);
    MEM32(ecx + 0x304) = edx;
    eax = MEM32(eax + 0x568);
    SET_LO8(ecx, MEM8(eax + 0xB1));
    MEM8(eax + 0xB0) = LO8(ecx);

loc_00309B87: ;
    esp += 4; return; /* ret */

}

/**
 * sub_00309B90
 * Original: 0x00309B90 - 0x00309BDF (79 bytes, 15 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00309B90(void)
{
    int _flags = 0; /* fallback flag var */

loc_00309B90: ;
    eax = MEM32(esp + 4);
    ecx = MEM32(eax + 0x568);
    if (TEST_Z(ecx, ecx)) goto loc_00309BDE; /* je: equal / zero */

loc_00309B9E: ;
    MEM32(ecx + 0x1F8) = 0;
    ecx = MEM32(eax + 0x568);
    edx = MEM32(ecx + 0x2F8);
    MEM32(ecx + 0x2FC) = edx;
    ecx = MEM32(eax + 0x568);
    edx = MEM32(ecx + 0x300);
    MEM32(ecx + 0x304) = edx;
    eax = MEM32(eax + 0x568);
    SET_LO8(ecx, MEM8(eax + 0xB1));
    MEM8(eax + 0xB0) = LO8(ecx);

loc_00309BDE: ;
    esp += 4; return; /* ret */

}

/**
 * sub_00309BE0
 * Original: 0x00309BE0 - 0x00309C03 (35 bytes, 12 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00309BE0(void)
{
    uint32_t ebp;
    int _flags = 0; /* fallback flag var */
    int _cf = 0; /* carry flag */
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_00309BE0: ;
    eax = MEM32(0x7FDBF4);
    ecx = MEM32(esp + 4);
    edx = 0; /* xor self */
    (void)0; /* cmp eax, edx - flags set for next jcc */
    PUSH32(esp, esi);
    if (CMP_NE(eax, edx)) { sub_00309C03(); return; } /* jne: not equal / not zero */

loc_00309BF0: ;
    SET_LO8(eax, MEM8(0x7819D5));
    SET_LO8(eax, (uint32_t)(-(int32_t)LO8(eax)));
    eax = _cf ? 0xFFFFFFFF : 0; /* sbb self (CF extend) */
    eax = eax & 0x94;
    eax = eax + 0x2D;
    g_seh_ebp = ebp; sub_00309C23(); return; /* tail jmp 0x00309C23 */

}

/**
 * sub_00309C50
 * Original: 0x00309C50 - 0x00309C80 (48 bytes, 14 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00309C50(void)
{
    float xmm0;

loc_00309C50: ;
    xmm0 = MEMF(0x648EFC); /* movss */
    ecx = 0; /* xor self */
    edx = eax;
    MEM32(edx) = ecx;
    MEM32(edx + 4) = ecx;
    MEM32(edx + 8) = ecx;
    MEM32(edx + 0xC) = ecx;
    MEM32(edx + 0x10) = ecx;
    MEM32(edx + 0x14) = ecx;
    MEM32(edx + 0x18) = ecx;
    MEMF(eax + 0x14) = xmm0; /* movss */
    MEM32(eax + 8) = 0x1A;
    MEM32(eax + 0xC) = ecx;
    esp += 4; return; /* ret */

}

/**
 * sub_00309CB0
 * Original: 0x00309CB0 - 0x00309CF8 (72 bytes, 25 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00309CB0(void)
{

loc_00309CB0: ;
    ecx = 0; /* xor self */
    MEM32(0x7FDBF8) = eax;
    edx = MEM32(eax + 0x18);
    MEM32(0x7FDBF4) = ecx;
    MEM32(0x7FDBF0) = ecx;
    MEM32(0x7FDBEC) = ecx;
    MEM32(0x7FDBE8) = ecx;
    ecx = MEM32(eax + 0x14);
    PUSH32(esp, ecx);
    ecx = MEM32(eax + 0x10);
    PUSH32(esp, edx);
    edx = MEM32(eax + 0xC);
    PUSH32(esp, ecx);
    ecx = MEM32(eax + 8);
    PUSH32(esp, edx);
    edx = MEM32(eax + 4);
    eax = MEM32(eax);
    PUSH32(esp, ecx);
    ecx = MEM32(esp + 0x18);
    PUSH32(esp, edx);
    PUSH32(esp, eax);
    PUSH32(esp, ecx);
    PUSH32(esp, 0); sub_000E8CD0(); /* call 0x000E8CD0 */

loc_00309CF4: ;
    esp = esp + 0x20;
    esp += 4; return; /* ret */

}

/**
 * sub_00309D00
 * Original: 0x00309D00 - 0x00309D13 (19 bytes, 4 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00309D00(void)
{

loc_00309D00: ;
    eax = MEM32(esp + 4);
    SET_LO16(ecx, MEM16(0x7FDBF8));
    MEM16(eax + 0x21A) = LO16(ecx);
    esp += 4; return; /* ret */

}

/**
 * sub_00309D20
 * Original: 0x00309D20 - 0x00309D47 (39 bytes, 12 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00309D20(void)
{
    uint32_t ebp;
    int _flags = 0; /* fallback flag var */
    float xmm0;
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_00309D20: ;
    eax = MEM32(esp + 4);
    PUSH32(esp, esi);
    esi = MEM32(eax + 0x3C4);
    if (TEST_Z(esi, esi)) { sub_00309D47(); return; } /* je: equal / zero */

loc_00309D2F: ;
    eax = esi + 4;
    edx = 0; /* xor self */
    PUSH32(esp, 0); sub_00036760(); /* call 0x00036760 */

loc_00309D39: ;
    if (TEST_Z(eax, eax)) { sub_00309D47(); return; } /* je: equal / zero */

loc_00309D3D: ;
    xmm0 = MEMF(eax + 0xE4); /* movss */
    g_seh_ebp = ebp; sub_00309D4A(); return; /* tail jmp 0x00309D4A */

}

/**
 * sub_00309D70
 * Original: 0x00309D70 - 0x00309D97 (39 bytes, 12 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00309D70(void)
{
    uint32_t ebp;
    int _flags = 0; /* fallback flag var */
    float xmm0;
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_00309D70: ;
    PUSH32(esp, esi);
    esi = MEM32(esp + 8);
    eax = MEM32(esi + 0x3C4);
    if (TEST_Z(eax, eax)) { sub_00309D97(); return; } /* je: equal / zero */

loc_00309D7F: ;
    eax = eax + 4;
    edx = 0; /* xor self */
    PUSH32(esp, 0); sub_00036760(); /* call 0x00036760 */

loc_00309D89: ;
    if (TEST_Z(eax, eax)) { sub_00309D97(); return; } /* je: equal / zero */

loc_00309D8D: ;
    xmm0 = MEMF(eax + 0xE4); /* movss */
    g_seh_ebp = ebp; sub_00309D9A(); return; /* tail jmp 0x00309D9A */

}

/**
 * sub_00309DC0
 * Original: 0x00309DC0 - 0x00309DD1 (17 bytes, 4 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00309DC0(void)
{

loc_00309DC0: ;
    eax = MEM32(esp + 4);
    SET_LO8(ecx, MEM8(0x7FDBF8));
    MEM8(eax + 0x20C) = LO8(ecx);
    esp += 4; return; /* ret */

}

/**
 * sub_00309DE0
 * Original: 0x00309DE0 - 0x00309EC4 (228 bytes, 64 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00309DE0(void)
{
    float xmm0;
    double _fp_stack[8];
    int _fp_top = 0;
    #define fp_push(v) (_fp_stack[--_fp_top & 7] = (v))
    #define fp_pop() (_fp_top++)
    #define fp_popp() (fp_pop())
    #define fp_top() _fp_stack[_fp_top & 7]
    #define fp_st1() _fp_stack[(_fp_top + 1) & 7]

loc_00309DE0: ;
    esp = esp - 0xC;
    PUSH32(esp, esi);
    esi = MEM32(esp + 0x14);
    eax = MEM32(esi + 0x568);
    MEM16(eax + 0x36) = MEM16(eax + 0x36) - 1;
    fp_push(MEMF(esi + 0x3BC)); /* fld float */
    fp_st1() *= fp_top(); fp_pop(); /* fmul */
    eax = MEM32(esi + 0x568);
    /* fld st(0) */
    /* FPU: fsin  */
    fp_st1() *= fp_top(); fp_pop(); /* fmul */
    { double _t = fp_top(); fp_top() = fp_st1(); fp_st1() = _t; } /* fxch */
    /* FPU: fcos  */
    fp_st1() *= fp_top(); fp_pop(); /* fmul */
    fp_push(MEMF(eax + 0x14)); /* fld float */
    fp_st1() *= fp_top(); fp_pop(); /* fmul */
    PUSH32(esp, 0); sub_00471288(); /* call 0x00471288 */

loc_00309E26: ;
    SET_LO16(ecx, MEM16(esi + 0x174));
    SET_LO16(ecx, LO16(ecx) - LO16(eax));
    edx = ZX16(LO16(ecx));
    MEM32(esp + 0x14) = edx;
    eax = ZX16(MEM16(esi + 0x60));
    fp_push((double)SMEM32(esp + 0x14)); /* fild */
    PUSH32(esp, 0x12);
    PUSH32(esp, eax);
    fp_st1() *= fp_top(); fp_pop(); /* fmul */
    /* fld st(0) */
    /* FPU: fcos  */
    fp_st1() *= fp_top(); fp_pop(); /* fmul */
    MEMF(esp + 0xC) = (float)fp_top(); fp_popp(); /* fstp */
    /* FPU: fsin  */
    fp_st1() *= fp_top(); fp_pop(); /* fmulp */
    fp_top() = -fp_top(); /* fchs */
    fp_push(MEMF(esp + 0xC)); /* fld float */
    fp_st1() *= fp_top(); fp_pop(); /* fmul */
    fp_st1() += fp_top(); fp_pop(); /* fadd */
    MEMF(esp + 0xC) = (float)fp_top(); fp_popp(); /* fstp */
    eax = MEM32(esp + 0xC);
    fp_st1() *= fp_top(); fp_pop(); /* fmul */
    fp_st1() += fp_top(); fp_pop(); /* fadd */
    MEMF(esp + 0x14) = (float)fp_top(); fp_popp(); /* fstp */
    ecx = MEM32(esp + 0x14);
    PUSH32(esp, ecx);
    fp_st1() *= fp_top(); fp_pop(); /* fmul */
    ecx = MEM32(esi + 0x80);
    fp_st1() += fp_top(); fp_pop(); /* fadd */
    MEMF(esp + 0x14) = (float)fp_top(); fp_popp(); /* fstp */
    edx = MEM32(esp + 0x14);
    PUSH32(esp, edx);
    edx = (uint32_t)(int32_t)SMEM16(esi + 0x1DE);
    PUSH32(esp, eax);
    eax = MEM32(esi + 0x78);
    PUSH32(esp, ecx);
    PUSH32(esp, ecx);
    xmm0 = (float)(int32_t)edx; /* cvtsi2ss */
    xmm0 = xmm0 + MEMF(esi + 0x7C); /* addss */
    MEMF(esp) = xmm0; /* movss */
    PUSH32(esp, eax);
    PUSH32(esp, esi);
    PUSH32(esp, 0); sub_002BA800(); /* call 0x002BA800 */

loc_00309EBC: ;
    esp = esp + 0x24;
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
 * sub_00309ED0
 * Original: 0x00309ED0 - 0x00309EE3 (19 bytes, 4 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00309ED0(void)
{

loc_00309ED0: ;
    eax = MEM32(esp + 4);
    SET_LO16(ecx, MEM16(0x7FDBF8));
    MEM16(eax + 0x43A) = LO16(ecx);
    esp += 4; return; /* ret */

}

/**
 * sub_00309EF0
 * Original: 0x00309EF0 - 0x00309F09 (25 bytes, 4 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00309EF0(void)
{
    uint32_t ebp;
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_00309EF0: ;
    ecx = MEM32(0x7FDBF8);
    edx = MEM32(0x8470DC);
    MEM32(esp + 4) = 1;
    g_seh_ebp = ebp; sub_00047FA0(); return; /* tail jmp 0x00047FA0 */

}

/**
 * sub_00309F30
 * Original: 0x00309F30 - 0x00309F45 (21 bytes, 5 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00309F30(void)
{
    int _flags = 0; /* fallback flag var */

loc_00309F30: ;
    (void)0; /* cmp MEM32(0x7FDBF8), 1 - flags set for next jcc */
    eax = MEM32(esp + 4);
    if (CMP_NE(MEM32(0x7FDBF8), 1)) { sub_00309F45(); return; } /* jne: not equal / not zero */

loc_00309F3D: ;
    MEM8(eax + 0x541) = MEM8(eax + 0x541) | 1;
    esp += 4; return; /* ret */

}

/**
 * sub_00309F50
 * Original: 0x00309F50 - 0x0030A003 (179 bytes, 47 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00309F50(void)
{
    uint32_t ebp;
    int _flags = 0; /* fallback flag var */
    float xmm0, xmm1, xmm2;

loc_00309F50: ;
    PUSH32(esp, ebp);
    ebp = esp;
    esp = esp & 0xFFFFFFF0u;
    esp = esp - 0x64;
    PUSH32(esp, ebx);
    PUSH32(esp, esi);
    PUSH32(esp, edi);
    ecx = 0x10;
    edi = eax;
    PUSH32(esp, 0); sub_002F2CE0(); /* call 0x002F2CE0 */

loc_00309F68: ;
    xmm0 = MEMF(ebp + 0x28); /* movss */
    ebx = MEM32(ebp + 8);
    esi = eax;
    SET_LO8(eax, MEM8(ebp + 0x2C));
    MEMF(esi + 0xD4) = xmm0; /* movss */
    xmm0 = MEMF(ebp + 0x24); /* movss */
    MEMF(esi + 0xD0) = xmm0; /* movss */
    xmm0 = MEMF(ebp + 0x20); /* movss */
    MEMF(esi + 0x110) = xmm0; /* movss */
    MEM8(esi + 0x17D) = LO8(eax);
    eax = MEM32(ebx + 0x3C8);
    if (TEST_Z(eax, eax)) { sub_0030A003(); return; } /* je: equal / zero */

loc_00309FA7: ;
    edx = MEM32(ebp + 0xC);
    if (CMP_EQ(edx, 0xFFFFFFFFu)) { sub_0030A003(); return; } /* je: equal / zero */

loc_00309FAF: ;
    PUSH32(esp, ebx);
    eax = esp + 0x34;
    PUSH32(esp, 0); sub_002F7870(); /* call 0x002F7870 */

loc_00309FB9: ;
    xmm0 = MEMF(ebp + 0x10); /* movss */
    esp = esp + 4;
    ecx = eax;
    PUSH32(esp, ecx);
    MEMF(esp + 0x18) = xmm0; /* movss */
    xmm0 = MEMF(ebp + 0x14); /* movss */
    edx = esp + 0x18;
    PUSH32(esp, edx);
    eax = esp + 0x28;
    MEMF(esp + 0x20) = xmm0; /* movss */
    xmm0 = MEMF(ebp + 0x18); /* movss */
    PUSH32(esp, eax);
    MEMF(esp + 0x28) = xmm0; /* movss */
    PUSH32(esp, 0); sub_00428393(); /* call 0x00428393 */

loc_00309FEF: ;
    xmm0 = MEMF(esp + 0x20); /* movss */
    xmm1 = MEMF(esp + 0x24); /* movss */
    xmm2 = MEMF(esp + 0x28); /* movss */
    g_seh_ebp = ebp; sub_0030A015(); return; /* tail jmp 0x0030A015 */

}

/**
 * sub_0030A2D0
 * Original: 0x0030A2D0 - 0x0030A5B1 (737 bytes, 187 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0030A2D0(void)
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

loc_0030A2D0: ;
    eax = MEM32(0x7FDBF8);
    esp = esp - 0x1C;
    (void)0; /* test eax, eax - flags set for next jcc */
    PUSH32(esp, esi);
    if (TEST_NZ(eax, eax)) { sub_0030A5B1(); return; } /* jne: not equal / not zero */

loc_0030A2E1: ;
    PUSH32(esp, ebx);
    PUSH32(esp, ebp);
    ebp = MEM32(esp + 0x2C);
    ecx = MEM32(ebp + 0x4B0);
    edx = MEM32(ecx + 0x24);
    MEM32(esp + 0x14) = eax;
    eax = MEM32(ebp + 0x564);
    PUSH32(esp, edi);
    ecx = esp + 0x10;
    PUSH32(esp, ecx);
    MEM32(esp + 0x18) = eax;
    eax = MEM32(edx + 8);
    eax = MEM32(eax + 0x10);
    PUSH32(esp, 1);
    PUSH32(esp, 0);
    ebx = 0x5F3628;
    PUSH32(esp, 0); sub_00415EC0(); /* call 0x00415EC0 */

loc_0030A318: ;
    esp = esp + 0xC;
    if (TEST_Z(eax, eax)) goto loc_0030A32C; /* je: equal / zero */

loc_0030A31F: ;
    eax = MEM32(esp + 0x10);
    if (TEST_Z(eax, eax)) goto loc_0030A32C; /* je: equal / zero */

loc_0030A327: ;
    eax = MEM32(eax + 8);
    goto loc_0030A32E;

loc_0030A32C: ;
    eax = 0; /* xor self */

loc_0030A32E: ;
    ecx = MEM32(ebp + 0x3C8);
    edx = MEM32(0x84A5F8);
    eax = eax << 6;
    eax = eax + ecx;
    edi = eax;
    eax = ZX16(MEM16(ebp + 0x60));
    eax = (uint32_t)((int32_t)eax * (int32_t)0x6D0);
    ecx = MEM32(edx + eax + 0x3C8);
    edx = edx + eax;
    if (TEST_Z(ecx, ecx)) goto loc_0030A449; /* je: equal / zero */

loc_0030A35C: ;
    eax = edi;
    eax = eax - ecx;
    eax = (uint32_t)((int32_t)eax >> 6);
    esi = esp + 0x20;
    PUSH32(esp, 0); sub_002F7940(); /* call 0x002F7940 */

loc_0030A36C: ;
    eax = MEM32(esp + 0x14);
    xmm1 = MEMF(eax + 0x334); /* movss */
    xmm1 = xmm1 - MEMF(esp + 0x24); /* subss */
    xmm2 = MEMF(eax + 0x338); /* movss */
    xmm2 = xmm2 - MEMF(esp + 0x28); /* subss */
    xmm3 = MEMF(edi + 8); /* movss */
    xmm4 = MEMF(edi + 4); /* movss */
    xmm0 = MEMF(eax + 0x330); /* movss */
    xmm0 = xmm0 - MEMF(esp + 0x20); /* subss */
    xmm3 = xmm3 * xmm2; /* mulss */
    xmm4 = xmm4 * xmm1; /* mulss */
    xmm3 = xmm3 + xmm4; /* addss */
    xmm4 = MEMF(edi); /* movss */
    xmm4 = xmm4 * xmm0; /* mulss */
    xmm3 = xmm3 + xmm4; /* addss */
    MEMF(esp + 0x1C) = xmm3; /* movss */
    xmm3 = MEMF(edi + 0x28); /* movss */
    ecx = MEM32(esp + 0x1C);
    xmm3 = xmm3 * xmm2; /* mulss */
    xmm2 = MEMF(edi + 0x24); /* movss */
    xmm2 = xmm2 * xmm1; /* mulss */
    xmm1 = MEMF(edi + 0x20); /* movss */
    xmm3 = xmm3 + xmm2; /* addss */
    xmm1 = xmm1 * xmm0; /* mulss */
    xmm3 = xmm3 + xmm1; /* addss */
    MEMF(esp + 0x10) = xmm3; /* movss */
    eax = MEM32(esp + 0x10);
    PUSH32(esp, eax);
    PUSH32(esp, ecx);
    PUSH32(esp, 0); sub_003E3CA0(); /* call 0x003E3CA0 */

loc_0030A3FA: ;
    xmm0 = xmm0 * MEMF(0x648D78); /* mulss */
    esp = esp + 8;
    /* comiss xmm0, MEMF(0x648E6C) - sets EFLAGS */
    if ((xmm0 <= MEMF(0x648E6C))) goto loc_0030A416; /* jbe: below or equal (unsigned <=) */

loc_0030A40E: ;
    xmm0 = xmm0 - MEMF(0x648F60); /* subss */

loc_0030A416: ;
    xmm1 = MEMF(0x648E5C); /* movss */
    /* comiss xmm1, xmm0 - sets EFLAGS */
    if ((xmm1 <= xmm0)) goto loc_0030A449; /* jbe: below or equal (unsigned <=) */

loc_0030A423: ;
    /* comiss xmm0, MEMF(0x649388) - sets EFLAGS */
    if ((xmm0 <= MEMF(0x649388))) goto loc_0030A449; /* jbe: below or equal (unsigned <=) */

loc_0030A42C: ;
    PUSH32(esp, 0); sub_003E2480(); /* call 0x003E2480 */

loc_0030A431: ;
    edx = ((int32_t)eax < 0) ? 0xFFFFFFFF : 0; /* cdq */
    ecx = 0x3E8;
    { int64_t _dividend = ((int64_t)(int32_t)edx << 32) | eax;
      eax = (uint32_t)((int32_t)(_dividend / (int32_t)ecx));
      edx = (uint32_t)((int32_t)(_dividend % (int32_t)ecx)); }
    if (CMP_GE(edx, 0xC8)) goto loc_0030A449; /* jge: greater or equal (signed >=) */

loc_0030A441: ;
    MEM32(esp + 0x18) = 1;

loc_0030A449: ;
    edx = MEM32(ebp + 0x4B0);
    eax = MEM32(edx + 0x24);
    ecx = MEM32(eax + 8);
    eax = MEM32(ecx + 0x10);
    edx = esp + 0x1C;
    PUSH32(esp, edx);
    PUSH32(esp, 1);
    PUSH32(esp, 0);
    ebx = 0x5F3628;
    PUSH32(esp, 0); sub_00415EC0(); /* call 0x00415EC0 */

loc_0030A46B: ;
    esp = esp + 0xC;
    if (TEST_Z(eax, eax)) goto loc_0030A47F; /* je: equal / zero */

loc_0030A472: ;
    eax = MEM32(esp + 0x1C);
    if (TEST_Z(eax, eax)) goto loc_0030A47F; /* je: equal / zero */

loc_0030A47A: ;
    eax = MEM32(eax + 8);
    goto loc_0030A481;

loc_0030A47F: ;
    eax = 0; /* xor self */

loc_0030A481: ;
    PUSH32(esp, 0x64);
    PUSH32(esp, 0x4039999A);
    PUSH32(esp, 0x4247999A);
    PUSH32(esp, 0x422B3333);
    PUSH32(esp, 0);
    PUSH32(esp, 0x41800000);
    PUSH32(esp, 0);
    PUSH32(esp, 0);
    PUSH32(esp, eax);
    PUSH32(esp, ebp);
    eax = 0x1F;
    PUSH32(esp, 0); sub_00309F50(); /* call 0x00309F50 */

loc_0030A4A9: ;
    esp = esp + 0x28;
    esi = eax;
    ecx = MEM32(esi + 0x200);
    eax = MEM32(esp + 0x18);
    POP32(esp, edi);
    ecx = ecx | 0x1000000;
    (void)0; /* test eax, eax - flags set for next jcc */
    POP32(esp, ebp);
    MEM32(esi + 0x200) = ecx;
    POP32(esp, ebx);
    if (TEST_Z(eax, eax)) goto loc_0030A5A2; /* je: equal / zero */

loc_0030A4CF: ;
    eax = MEM32(esp + 8);
    fp_push(MEMF(eax + 0x330)); /* fld float */
    xmm0 = MEMF(eax + 0x334); /* movss */
    fp_st1() -= fp_top(); fp_pop(); /* fsub */
    xmm0 = xmm0 - MEMF(esi + 0x7C); /* subss */
    MEMF(esp + 0x10) = xmm0; /* movss */
    MEMF(esp + 8) = (float)fp_top(); fp_popp(); /* fstp */
    fp_push(MEMF(eax + 0x338)); /* fld float */
    ecx = MEM32(esp + 8);
    fp_st1() -= fp_top(); fp_pop(); /* fsub */
    MEMF(esp + 4) = (float)fp_top(); fp_popp(); /* fstp */
    eax = MEM32(esp + 4);
    PUSH32(esp, eax);
    PUSH32(esp, ecx);
    PUSH32(esp, 0); sub_003E3CA0(); /* call 0x003E3CA0 */

loc_0030A512: ;
    xmm0 = xmm0 * MEMF(0x648D78); /* mulss */
    esp = esp + 8;
    /* comiss xmm0, MEMF(0x648E6C) - sets EFLAGS */
    MEMF(esp + 0xC) = xmm0; /* movss */
    if ((xmm0 <= MEMF(0x648E6C))) goto loc_0030A53A; /* jbe: below or equal (unsigned <=) */

loc_0030A52C: ;
    xmm0 = xmm0 - MEMF(0x648F60); /* subss */
    MEMF(esp + 0xC) = xmm0; /* movss */

loc_0030A53A: ;
    fp_push(MEMF(esp + 0x10)); /* fld float */
    xmm0 = 0.0f; /* xorps self = zero */
    fp_st1() *= fp_top(); fp_pop(); /* fmul */
    MEMF(esi + 0xD4) = xmm0; /* movss */
    fp_push(MEMF(esp + 4)); /* fld float */
    MEM32(esi + 0x52C) = 1;
    fp_st1() *= fp_top(); fp_pop(); /* fmul */
    fp_push(MEMF(esp + 8)); /* fld float */
    fp_st1() *= fp_top(); fp_pop(); /* fmul */
    fp_st1() += fp_top(); fp_pop(); /* faddp */
    fp_top() = sqrt(fp_top()); /* fsqrt */
    { double _t = fp_top(); fp_top() = fp_st1(); fp_st1() = _t; } /* fxch */
    { double _t = fp_top(); fp_top() = fp_st1(); fp_st1() = _t; } /* fxch */
    fp_st1() /= fp_top(); fp_pop(); /* fdivp */
    MEMF(esi + 0xD0) = (float)fp_top(); fp_popp(); /* fstp */
    fp_push(MEMF(esp + 0xC)); /* fld float */
    fp_st1() *= fp_top(); fp_pop(); /* fmul */
    PUSH32(esp, 0); sub_00471288(); /* call 0x00471288 */

loc_0030A588: ;
    ecx = 0xC000;
    ecx = ecx - eax;
    MEM16(esi + 0x174) = LO16(ecx);
    MEM16(esi + 0x170) = LO16(ecx);
    POP32(esp, esi);
    esp = esp + 0x1C;
    esp += 4; return; /* ret */

loc_0030A5A2: ;
    MEM32(esi + 0x52C) = 0;
    POP32(esp, esi);
    esp = esp + 0x1C;
    esp += 4; return; /* ret */

    #undef fp_push
    #undef fp_pop
    #undef fp_popp
    #undef fp_top
    #undef fp_st1
}

/**
 * sub_0030A7B0
 * Original: 0x0030A7B0 - 0x0030A8A6 (246 bytes, 65 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0030A7B0(void)
{
    uint32_t ebp;
    int _flags = 0; /* fallback flag var */
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_0030A7B0: ;
    PUSH32(esp, esi);
    esi = MEM32(esp + 8);
    SET_LO8(ecx, MEM8(esi + 0x250));
    SET_LO8(eax, LO8(ecx));
    edx = 0; /* xor self */
    SET_LO8(eax, LO8(eax) - 1);
    if (CMP_EQ(LO8(ecx), LO8(edx))) goto loc_0030A8A4; /* je: equal / zero */

loc_0030A7C9: ;
    ecx = MEM32(0x84A5F8);
    eax = ZX8(LO8(eax));
    eax = (uint32_t)((int32_t)eax * (int32_t)0x6D0);
    ecx = ecx + eax;
    MEM8(esi + 0x250) = LO8(edx);
    MEM32(ecx + 0x200) = 0x8200;
    MEM8(ecx + 0x251) = LO8(edx);
    SET_LO16(eax, MEM16(esi + 0x174));
    MEM16(ecx + 0x170) = LO16(eax);
    MEM8(ecx + 0x135) = LO8(edx);
    MEM8(ecx + 0x43D) = 6;
    MEM32(ecx + 0x420) = edx;
    MEM8(ecx + 0x20C) = LO8(edx);
    MEM16(ecx + 0x174) = 0xE000;
    MEM8(ecx + 0x544) = LO8(edx);
    eax = MEM32(esi + 0x68);
    if (CMP_EQ(eax, 0xFFFF)) goto loc_0030A8A4; /* je: equal / zero */

loc_0030A830: ;
    if (CMP_GE(eax, 0x205)) goto loc_0030A8A4; /* jge: greater or equal (signed >=) */

loc_0030A837: ;
    ecx = MEM32(esi + 0x74);
    if (CMP_EQ(ecx, edx)) goto loc_0030A8A4; /* je: equal / zero */

loc_0030A83E: ;
    PUSH32(esp, edi);
    edi = MEM32(ecx + 0x50);
    if (CMP_EQ(edi, edx)) goto loc_0030A8A3; /* je: equal / zero */

loc_0030A846: ;
    edi = MEM32(edi + 0x714);
    if (CMP_EQ(edi, edx)) goto loc_0030A8A3; /* je: equal / zero */

loc_0030A850: ;
    if (CMP_EQ(edi, 0x3E7)) goto loc_0030A864; /* je: equal / zero */

loc_0030A858: ;
    if (CMP_A(MEM16(eax * 2 + 0x770390), 0x97)) goto loc_0030A86B; /* ja: above (unsigned >) */

loc_0030A864: ;
    POP32(esp, edi);
    POP32(esp, esi);
    g_seh_ebp = ebp; sub_002F65F0(); return; /* tail jmp 0x002F65F0 */

loc_0030A86B: ;
    eax = MEM32(ecx + 0x50);
    PUSH32(esp, edx);
    PUSH32(esp, edx);
    edx = MEM32(eax + 0x71C);
    ecx = 0; /* xor self */
    SET_LO16(ecx, MEM16(eax + 0x718));
    eax = MEM32(eax + 0x714);
    PUSH32(esp, 0x40A00000);
    PUSH32(esp, 0x3F800000);
    PUSH32(esp, ecx);
    PUSH32(esp, edx);
    PUSH32(esp, 0x97);
    PUSH32(esp, eax);
    SET_LO8(edx, 1);
    eax = esi;
    PUSH32(esp, 0); sub_002F1790(); /* call 0x002F1790 */

loc_0030A8A0: ;
    esp = esp + 0x20;

loc_0030A8A3: ;
    POP32(esp, edi);

loc_0030A8A4: ;
    POP32(esp, esi);
    esp += 4; return; /* ret */

}

/**
 * sub_0030A8B0
 * Original: 0x0030A8B0 - 0x0030A8C1 (17 bytes, 4 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0030A8B0(void)
{

loc_0030A8B0: ;
    eax = MEM32(esp + 4);
    SET_LO8(ecx, MEM8(0x7FDBF8));
    MEM8(eax + 0x134) = LO8(ecx);
    esp += 4; return; /* ret */

}

/**
 * sub_0030A8D0
 * Original: 0x0030A8D0 - 0x0030A90B (59 bytes, 11 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0030A8D0(void)
{
    int _flags = 0; /* fallback flag var */
    float xmm0;

loc_0030A8D0: ;
    eax = MEM32(esp + 4);
    SET_LO8(edx, MEM8(eax + 0x134));
    SET_LO8(ecx, MEM8(0x7FA250));
    SET_LO8(edx, LO8(edx) - LO8(ecx));
    MEM8(eax + 0x134) = LO8(edx);
    if (((int32_t)LO8(edx) < 0)) goto loc_0030A90A; /* js: sign (negative) */

loc_0030A8EA: ;
    MEM8(eax + 0x24C) = MEM8(eax + 0x24C) - 1;
    xmm0 = (float)(int32_t)MEM32(0x7FDBF8); /* cvtsi2ss */
    MEM32(0x7FDBD8) = 0;
    MEMF(0x7FDBE4) = xmm0; /* movss */

loc_0030A90A: ;
    esp += 4; return; /* ret */

}

/**
 * sub_0030A910
 * Original: 0x0030A910 - 0x0030A925 (21 bytes, 4 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0030A910(void)
{
    float xmm0;

loc_0030A910: ;
    eax = MEM32(esp + 4);
    xmm0 = (float)(int32_t)MEM32(0x7FDBF8); /* cvtsi2ss */
    MEMF(eax + 0x118) = xmm0; /* movss */
    esp += 4; return; /* ret */

}

/**
 * sub_0030A930
 * Original: 0x0030A930 - 0x0030A9FD (205 bytes, 58 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0030A930(void)
{
    uint32_t ebp;
    int _flags = 0; /* fallback flag var */
    float xmm0;
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_0030A930: ;
    PUSH32(esp, ebx);
    PUSH32(esp, esi);
    PUSH32(esp, edi);
    edi = MEM32(esp + 0x10);
    eax = MEM32(edi + 0x23C);
    PUSH32(esp, 0); sub_00315260(); /* call 0x00315260 */

loc_0030A942: ;
    esi = eax;
    ebx = 0; /* xor self */
    if (CMP_EQ(esi, ebx)) goto loc_0030A9F9; /* je: equal / zero */

loc_0030A94E: ;
    if (CMP_EQ(MEM8(esi + 0x135), LO8(ebx))) goto loc_0030A9F9; /* je: equal / zero */

loc_0030A95A: ;
    PUSH32(esp, ebp);
    ebp = MEM32(0x7FDBF8);
    PUSH32(esp, 0x3F800000);
    MEM8(edi + 0x250) = LO8(ebx);
    PUSH32(esp, ebx);
    MEM8(esi + 0x234) = LO8(ebx);
    eax = ZX16(MEM16(edi + 0x60));
    ecx = MEM32(0x7FDBF8);
    PUSH32(esp, ebx);
    PUSH32(esp, eax);
    PUSH32(esp, ebx);
    ecx = ecx & 0xFF00FF;
    PUSH32(esp, ecx);
    PUSH32(esp, edi);
    eax = esi;
    PUSH32(esp, 0); sub_002F0470(); /* call 0x002F0470 */

loc_0030A98F: ;
    xmm0 = MEMF(0x648E94); /* movss */
    esp = esp + 0x1C;
    (void)0; /* test ebp, 0x40000000 - flags set for next jcc */
    MEMF(esi + 0x3B8) = xmm0; /* movss */
    if (TEST_Z(ebp, 0x40000000)) goto loc_0030A9B3; /* je: equal / zero */

loc_0030A9AA: ;
    edx = MEM32(edi + 0x7C);
    MEM32(esi + 0x3B8) = edx;

loc_0030A9B3: ;
    MEM8(esi + 0x234) = 0x14;
    SET_LO16(eax, MEM16(edi + 0x174));
    SET_LO16(eax, LO16(eax) + LO16(ebp));
    MEM16(esi + 0x170) = LO16(eax);
    eax = MEM32(edi + 0x68);
    eax = eax - 0x53;
    POP32(esp, ebp);
    if ((eax == 0)) goto loc_0030A9D9; /* je: equal / zero */

loc_0030A9D4: ;
    eax = eax - 0x3B;
    if ((eax != 0)) goto loc_0030A9F9; /* jne: not equal / not zero */

loc_0030A9D9: ;
    eax = MEM32(edi + 0x23C);
    PUSH32(esp, 0); sub_00315260(); /* call 0x00315260 */

loc_0030A9E4: ;
    if (TEST_Z(eax, eax)) goto loc_0030A9F9; /* je: equal / zero */

loc_0030A9E8: ;
    edi = MEM32(edi + 0x23C);
    MEM8(edi + 0x10) = LO8(ebx);
    MEM8(edi + 8) = LO8(ebx);
    MEM32(edi) = ebx;
    MEM32(edi + 4) = ebx;

loc_0030A9F9: ;
    POP32(esp, edi);
    POP32(esp, esi);
    POP32(esp, ebx);
    esp += 4; return; /* ret */

}

/**
 * sub_0030AA00
 * Original: 0x0030AA00 - 0x0030AA4A (74 bytes, 14 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0030AA00(void)
{
    float xmm0;

loc_0030AA00: ;
    ecx = MEM32(0x7FDBF8);
    eax = MEM32(esp + 4);
    edx = MEM32(eax + 0x568);
    ecx = ecx & 0xFFFF;
    xmm0 = (float)(int32_t)ecx; /* cvtsi2ss */
    MEMF(edx + 0xE8) = xmm0; /* movss */
    ecx = MEM32(eax + 0x568);
    SET_LO8(edx, MEM8(0x7FDBFA));
    MEM8(ecx + 0xEC) = LO8(edx);
    ecx = MEM32(0x7FDBF8);
    edx = MEM32(eax + 0x568);
    ecx = (uint32_t)((int32_t)ecx >> 0x17);
    MEM8(edx + 0xED) = LO8(ecx);
    esp += 4; return; /* ret */

}

/**
 * sub_0030AA50
 * Original: 0x0030AA50 - 0x0030AA55 (5 bytes, 1 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0030AA50(void)
{
    uint32_t ebp;
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_0030AA50: ;
    g_seh_ebp = ebp; sub_0030FFA0(); return; /* tail jmp 0x0030FFA0 */

}

/**
 * sub_0030AA60
 * Original: 0x0030AA60 - 0x0030AB51 (241 bytes, 68 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0030AA60(void)
{
    int _flags = 0; /* fallback flag var */
    float xmm0;

loc_0030AA60: ;
    PUSH32(esp, ecx);
    PUSH32(esp, ebx);
    ebx = MEM32(esp + 0xC);
    eax = MEM32(ebx + 0x568);
    if (TEST_Z(eax, eax)) goto loc_0030AAB7; /* je: equal / zero */

loc_0030AA70: ;
    ecx = eax;
    eax = eax | 0xFFFFFFFFu;
    MEM32(ecx + 0x474) = eax;
    edx = MEM32(ebx + 0x568);
    MEM32(edx + 0x478) = eax;
    ecx = MEM32(ebx + 0x568);
    MEM32(ecx + 0x3DC) = eax;
    edx = MEM32(ebx + 0x568);
    MEM32(edx + 0x47C) = eax;
    ecx = MEM32(ebx + 0x568);
    MEM32(ecx + 0x480) = eax;
    edx = MEM32(ebx + 0x568);
    MEM32(edx + 0x484) = eax;

loc_0030AAB7: ;
    eax = ebx;
    PUSH32(esp, 0); sub_0030FF20(); /* call 0x0030FF20 */

loc_0030AABE: ;
    xmm0 = MEMF(ebx + 0xDC); /* movss */
    /* comiss xmm0, MEMF(0x648CF8) - sets EFLAGS */
    if ((xmm0 <= MEMF(0x648CF8))) goto loc_0030AB40; /* jbe: below or equal (unsigned <=) */

loc_0030AACF: ;
    eax = MEM32(ebx + 0x568);
    xmm0 = MEMF(0x648D14); /* movss */
    PUSH32(esp, esi);
    PUSH32(esp, edi);
    edi = MEM32(eax + 0xA0);
    eax = MEM32(eax + 0x444);
    ecx = esp + 0xC;
    PUSH32(esp, ecx);
    edx = esp + 0x18;
    PUSH32(esp, edx);
    MEM32(esp + 0x1C) = 0;
    MEMF(esp + 0x14) = xmm0; /* movss */
    PUSH32(esp, 0); sub_0032FDA0(); /* call 0x0032FDA0 */

loc_0030AB08: ;
    PUSH32(esp, eax);
    esi = 8;
    edi = 0; /* xor self */
    eax = ebx;
    PUSH32(esp, 0); sub_002B14A0(); /* call 0x002B14A0 */

loc_0030AB17: ;
    edx = MEM32(esp + 0x20);
    esp = esp + 0xC;
    (void)0; /* test edx, edx - flags set for next jcc */
    POP32(esp, edi);
    POP32(esp, esi);
    if (TEST_Z(edx, edx)) goto loc_0030AB4E; /* je: equal / zero */

loc_0030AB24: ;
    eax = MEM32(esp + 4);
    PUSH32(esp, 0);
    PUSH32(esp, 0);
    PUSH32(esp, 0);
    PUSH32(esp, 0x40800000);
    PUSH32(esp, eax);
    PUSH32(esp, ebx);
    PUSH32(esp, 0); sub_002F1620(); /* call 0x002F1620 */

loc_0030AB3A: ;
    esp = esp + 0x18;
    POP32(esp, ebx);
    POP32(esp, ecx);
    esp += 4; return; /* ret */

loc_0030AB40: ;
    PUSH32(esp, 0);
    PUSH32(esp, 0);
    eax = ebx;
    PUSH32(esp, 0); sub_002D5B30(); /* call 0x002D5B30 */

loc_0030AB4B: ;
    esp = esp + 8;

loc_0030AB4E: ;
    POP32(esp, ebx);
    POP32(esp, ecx);
    esp += 4; return; /* ret */

}

/**
 * sub_0030AB60
 * Original: 0x0030AB60 - 0x0030AB8B (43 bytes, 8 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0030AB60(void)
{

loc_0030AB60: ;
    eax = MEM32(esp + 4);
    ecx = ZX8(MEM8(eax + 0x42E));
    edx = MEM32(0x84A5F8);
    ecx = (uint32_t)((int32_t)ecx * (int32_t)0x6D0);
    ecx = (int32_t)MEMF(ecx + edx + 0x7C); /* cvttss2si */
    ecx = ecx + MEM32(0x7FDBF8);
    MEM16(eax + 0x430) = LO16(ecx);
    esp += 4; return; /* ret */

}

/**
 * sub_0030AB90
 * Original: 0x0030AB90 - 0x0030ABB4 (36 bytes, 10 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0030AB90(void)
{
    int _flags = 0; /* fallback flag var */

loc_0030AB90: ;
    PUSH32(esp, esi);
    esi = 0x53;
    PUSH32(esp, 0); sub_002F2E60(); /* call 0x002F2E60 */

loc_0030AB9B: ;
    (void)0; /* test eax, eax - flags set for next jcc */
    POP32(esp, esi);
    if (TEST_Z(eax, eax)) goto loc_0030ABB3; /* je: equal / zero */

loc_0030ABA0: ;
    if (CMP_NE(MEM16(eax + 0x450), 0x1F)) goto loc_0030ABB3; /* jne: not equal / not zero */

loc_0030ABAA: ;
    MEM16(eax + 0x428) = 0;

loc_0030ABB3: ;
    esp += 4; return; /* ret */

}

/**
 * sub_0030ABC0
 * Original: 0x0030ABC0 - 0x0030AC1A (90 bytes, 20 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0030ABC0(void)
{
    int _flags = 0; /* fallback flag var */
    float xmm0, xmm1, xmm2;

loc_0030ABC0: ;
    eax = MEM32(esp + 4);
    xmm0 = (float)(int32_t)MEM32(0x7FDBF8); /* cvtsi2ss */
    SET_LO16(edx, MEM16(eax + 0x1EE));
    (void)0; /* test LO16(edx), LO16(edx) - flags set for next jcc */
    xmm0 = xmm0 * MEMF(eax + 0x260); /* mulss */
    ecx = (int32_t)xmm0; /* cvttss2si */
    MEM16(eax + 0x1EC) = LO16(ecx);
    if (TEST_Z(LO16(edx), LO16(edx))) { sub_0030AC1A(); return; } /* je: equal / zero */

loc_0030ABEB: ;
    if (TEST_Z(LO16(ecx), LO16(ecx))) { sub_0030AC1A(); return; } /* je: equal / zero */

loc_0030ABF0: ;
    ecx = SX16(LO16(ecx));
    edx = SX16(LO16(edx));
    xmm1 = (float)(int32_t)ecx; /* cvtsi2ss */
    xmm0 = (float)(int32_t)edx; /* cvtsi2ss */
    xmm2 = xmm1; /* movaps */
    xmm2 = xmm2 / xmm0; /* divss */
    xmm0 = xmm0 / xmm1; /* divss */
    MEMF(eax + 0x1F4) = xmm2; /* movss */
    MEMF(eax + 0x1F8) = xmm0; /* movss */
    esp += 4; return; /* ret */

}

/**
 * sub_0030AC30
 * Original: 0x0030AC30 - 0x0030AC8A (90 bytes, 20 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0030AC30(void)
{
    int _flags = 0; /* fallback flag var */
    float xmm0, xmm1, xmm2;

loc_0030AC30: ;
    eax = MEM32(esp + 4);
    xmm0 = (float)(int32_t)MEM32(0x7FDBF8); /* cvtsi2ss */
    xmm0 = xmm0 * MEMF(eax + 0x264); /* mulss */
    ecx = (int32_t)xmm0; /* cvttss2si */
    (void)0; /* test LO16(ecx), LO16(ecx) - flags set for next jcc */
    MEM16(eax + 0x1EE) = LO16(ecx);
    if (TEST_Z(LO16(ecx), LO16(ecx))) { sub_0030AC8A(); return; } /* je: equal / zero */

loc_0030AC54: ;
    SET_LO16(edx, MEM16(eax + 0x1EC));
    if (TEST_Z(LO16(edx), LO16(edx))) { sub_0030AC8A(); return; } /* je: equal / zero */

loc_0030AC60: ;
    edx = SX16(LO16(edx));
    ecx = SX16(LO16(ecx));
    xmm1 = (float)(int32_t)edx; /* cvtsi2ss */
    xmm0 = (float)(int32_t)ecx; /* cvtsi2ss */
    xmm2 = xmm1; /* movaps */
    xmm2 = xmm2 / xmm0; /* divss */
    xmm0 = xmm0 / xmm1; /* divss */
    MEMF(eax + 0x1F4) = xmm2; /* movss */
    MEMF(eax + 0x1F8) = xmm0; /* movss */
    esp += 4; return; /* ret */

}

/**
 * sub_0030ACA0
 * Original: 0x0030ACA0 - 0x0030ACB7 (23 bytes, 6 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0030ACA0(void)
{
    int _flags = 0; /* fallback flag var */

loc_0030ACA0: ;
    SET_LO8(edx, MEM8(0x7FDBF8));
    PUSH32(esp, 0); sub_002B3F70(); /* call 0x002B3F70 */

loc_0030ACAB: ;
    if (TEST_Z(eax, eax)) goto loc_0030ACB6; /* je: equal / zero */

loc_0030ACAF: ;
    MEM8(eax + 0x135) = 0;

loc_0030ACB6: ;
    esp += 4; return; /* ret */

}

/**
 * sub_0030ACC0
 * Original: 0x0030ACC0 - 0x0030ACD7 (23 bytes, 8 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0030ACC0(void)
{
    uint32_t ebp;
    int _flags = 0; /* fallback flag var */
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_0030ACC0: ;
    eax = MEM32(0x7FDBF8);
    ecx = MEM32(esp + 4);
    PUSH32(esp, esi);
    esi = 0; /* xor self */
    if (TEST_Z(eax, eax)) { sub_0030ACD7(); return; } /* je: equal / zero */

loc_0030ACD0: ;
    eax = 0x12;
    g_seh_ebp = ebp; sub_0030AD0C(); return; /* tail jmp 0x0030AD0C */

}

/**
 * sub_0030AD80
 * Original: 0x0030AD80 - 0x0030AE0F (143 bytes, 39 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0030AD80(void)
{
    int _flags = 0; /* fallback flag var */
    float xmm0, xmm5;

loc_0030AD80: ;
    esp = esp - 0xC;
    eax = MEM32(0x7FDBF8);
    (void)0; /* test eax, eax - flags set for next jcc */
    xmm0 = 0.0f; /* xorps self = zero */
    xmm5 = MEMF(0x649148); /* movss */
    MEMF(esp + 8) = xmm5; /* movss */
    MEMF(esp + 4) = xmm0; /* movss */
    MEMF(esp) = xmm0; /* movss */
    if (CMP_LE(eax & eax, 0)) goto loc_0030ADD2; /* jle: less or equal (signed <=) */

loc_0030ADA8: ;
    PUSH32(esp, 0); sub_003E1D70(); /* call 0x003E1D70 */

loc_0030ADAD: ;
    xmm0 = xmm0 * xmm5; /* mulss */
    xmm0 = xmm0 + MEMF(0x649420); /* addss */
    MEMF(esp + 8) = xmm0; /* movss */
    xmm0 = (float)(int32_t)MEM32(0x7FDBF4); /* cvtsi2ss */
    MEMF(esp + 4) = xmm0; /* movss */
    MEMF(esp) = xmm0; /* movss */

loc_0030ADD2: ;
    eax = MEM32(esp);
    ecx = MEM32(esp + 4);
    PUSH32(esp, eax);
    eax = MEM32(esp + 0x14);
    edx = MEM32(esp + 0xC);
    PUSH32(esp, ecx);
    ecx = MEM32(eax + 0x114);
    PUSH32(esp, 0);
    PUSH32(esp, 1);
    PUSH32(esp, 6);
    PUSH32(esp, 0x3F4CCCCD);
    PUSH32(esp, 0x42200000);
    PUSH32(esp, 0xB);
    PUSH32(esp, 0x64);
    PUSH32(esp, 0);
    PUSH32(esp, 0);
    PUSH32(esp, edx);
    PUSH32(esp, ecx);
    PUSH32(esp, eax);
    eax = 0; /* xor self */
    PUSH32(esp, 0); sub_003030C0(); /* call 0x003030C0 */

loc_0030AE0B: ;
    esp = esp + 0x44;
    esp += 4; return; /* ret */

}

/**
 * sub_0030AE10
 * Original: 0x0030AE10 - 0x0030AE48 (56 bytes, 20 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0030AE10(void)
{

loc_0030AE10: ;
    eax = MEM32(esp + 4);
    PUSH32(esp, 0);
    ecx = MEM32(eax + 0x114);
    PUSH32(esp, 0);
    PUSH32(esp, 0);
    PUSH32(esp, 1);
    PUSH32(esp, 6);
    PUSH32(esp, 0x3F4CCCCD);
    PUSH32(esp, 0x42200000);
    PUSH32(esp, 0xC);
    PUSH32(esp, 0x64);
    PUSH32(esp, 0);
    PUSH32(esp, 0);
    PUSH32(esp, 0x430C0000);
    PUSH32(esp, ecx);
    PUSH32(esp, eax);
    eax = 0; /* xor self */
    PUSH32(esp, 0); sub_003030C0(); /* call 0x003030C0 */

loc_0030AE44: ;
    esp = esp + 0x38;
    esp += 4; return; /* ret */

}

/**
 * sub_0030AE50
 * Original: 0x0030AE50 - 0x0030AEA4 (84 bytes, 29 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0030AE50(void)
{
    int _flags = 0; /* fallback flag var */

loc_0030AE50: ;
    eax = MEM32(esp + 4);
    SET_LO8(edx, MEM8(eax + 0x10B));
    PUSH32(esp, esi);
    esi = 0; /* xor self */
    if (TEST_Z(LO8(edx), LO8(edx))) goto loc_0030AEA2; /* je: equal / zero */

loc_0030AE61: ;
    eax = MEM32(0x847200);
    if (TEST_Z(eax, eax)) goto loc_0030AEA2; /* je: equal / zero */

loc_0030AE6A: ;
    /* nop */

loc_0030AE70: ;
    (void)0; /* cmp MEM8(eax), LO8(edx) - flags set for next jcc */
    ecx = MEM32(eax + 0xE0);
    if (CMP_NE(MEM8(eax), LO8(edx))) goto loc_0030AE86; /* jne: not equal / not zero */

loc_0030AE7A: ;
    if (CMP_NE(MEM16(eax + 0xA), 0x3C)) goto loc_0030AE86; /* jne: not equal / not zero */

loc_0030AE81: ;
    if (TEST_Z(esi, esi)) goto loc_0030AE8E; /* je: equal / zero */

loc_0030AE85: ;
    esi--;

loc_0030AE86: ;
    (void)0; /* test ecx, ecx - flags set for next jcc */
    eax = ecx;
    if (TEST_NZ(ecx, ecx)) goto loc_0030AE70; /* jne: not equal / not zero */

loc_0030AE8C: ;
    POP32(esp, esi);
    esp += 4; return; /* ret */

loc_0030AE8E: ;
    ecx = (int32_t)MEMF(0x7F9F5C); /* cvttss2si */
    ecx = ecx + ecx * 4;
    ecx = ecx << 3;
    MEM32(eax + 0xB0) = ecx;

loc_0030AEA2: ;
    POP32(esp, esi);
    esp += 4; return; /* ret */

}

/**
 * sub_0030AEB0
 * Original: 0x0030AEB0 - 0x0030AEC1 (17 bytes, 4 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0030AEB0(void)
{

loc_0030AEB0: ;
    eax = MEM32(esp + 4);
    SET_LO8(ecx, MEM8(0x7FDBF8));
    MEM8(eax + 0x519) = LO8(ecx);
    esp += 4; return; /* ret */

}

/**
 * sub_0030AED0
 * Original: 0x0030AED0 - 0x0030AEEB (27 bytes, 7 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0030AED0(void)
{

loc_0030AED0: ;
    eax = MEM32(esp + 4);
    SET_LO8(ecx, MEM8(0x7FDBF8));
    SET_LO8(edx, MEM8(eax + 0x218));
    SET_LO8(ecx, ~LO8(ecx));
    SET_LO8(edx, LO8(edx) & LO8(ecx));
    MEM8(eax + 0x218) = LO8(edx);
    esp += 4; return; /* ret */

}

/**
 * sub_0030AEF0
 * Original: 0x0030AEF0 - 0x0030AEF9 (9 bytes, 2 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0030AEF0(void)
{
    uint32_t ebp;
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_0030AEF0: ;
    edx = MEM32(esp + 4);
    g_seh_ebp = ebp; sub_0031FED0(); return; /* tail jmp 0x0031FED0 */

}

/**
 * sub_0030AF80
 * Original: 0x0030AF80 - 0x0030B1DF (607 bytes, 147 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0030AF80(void)
{
    uint32_t ebp;
    int _flags = 0; /* fallback flag var */
    int _cf = 0; /* carry flag */
    float xmm0;

loc_0030AF80: ;
    PUSH32(esp, ebp);
    ebp = esp;
    esp = esp & 0xFFFFFFF0u;
    esp = esp - 0x174;
    eax = MEM32(ebp + 8);
    xmm0 = MEMF(0x648D34); /* movss */
    eax = MEM32(eax + 0x568);
    (void)0; /* test eax, eax - flags set for next jcc */
    PUSH32(esp, ebx);
    PUSH32(esp, esi);
    esi = MEM32(ebp + 0xC);
    MEMF(esp + 0x24) = xmm0; /* movss */
    xmm0 = MEMF(0x648D18); /* movss */
    PUSH32(esp, edi);
    MEM8(esp + 0x1E) = 0;
    MEMF(esp + 0x18) = xmm0; /* movss */
    MEM8(esp + 0x1F) = 0;
    if (TEST_Z(eax, eax)) goto loc_0030AFDC; /* je: equal / zero */

loc_0030AFC5: ;
    if (CMP_NE(MEM32(eax + 0xBC), 2)) goto loc_0030AFDC; /* jne: not equal / not zero */

loc_0030AFCE: ;
    SET_LO8(ecx, MEM8(eax + 0x314));
    if (TEST_Z(LO8(ecx), LO8(ecx))) goto loc_0030B1D6; /* je: equal / zero */

loc_0030AFDC: ;
    PUSH32(esp, 0); sub_002B3FF0(); /* call 0x002B3FF0 */

loc_0030AFE1: ;
    if (CMP_NE(eax, 0xFFFFFFFFu)) goto loc_0030B1A1; /* jne: not equal / not zero */

loc_0030AFEA: ;
    (void)0; /* cmp esi, 0x60728B5 - flags set for next jcc */
    xmm0 = MEMF(0x648D14); /* movss */
    MEMF(esp + 0x28) = xmm0; /* movss */
    if (CMP_A(esi, 0x60728B5)) goto loc_0030B0FB; /* ja: above (unsigned >) */

loc_0030B004: ;
    if (CMP_EQ(esi, 0x60728B5)) goto loc_0030B0D3; /* je: equal / zero */

loc_0030B00A: ;
    if (CMP_A(esi, 0x425DAB5)) goto loc_0030B09D; /* ja: above (unsigned >) */

loc_0030B016: ;
    if (CMP_EQ(esi, 0x425DAB5)) goto loc_0030B083; /* je: equal / zero */

loc_0030B018: ;
    if (CMP_EQ(esi, 0x66BF94)) goto loc_0030B056; /* je: equal / zero */

loc_0030B020: ;
    if (CMP_NE(esi, 0xDEF7B5)) goto loc_0030B1D6; /* jne: not equal / not zero */

loc_0030B02C: ;
    ecx = MEM32(0x6BD92C);
    edx = MEM32(ecx + 4);
    xmm0 = MEMF(0x648CF0); /* movss */
    edx--;
    edx = (uint32_t)(-(int32_t)edx);
    edx = _cf ? 0xFFFFFFFF : 0; /* sbb self (CF extend) */
    edx = edx & 0x43;
    edx = edx + 0xE3;
    MEMF(esp + 0x28) = xmm0; /* movss */
    goto loc_0030B18E;

loc_0030B056: ;
    xmm0 = 0.0f; /* xorps self = zero */
    MEM32(0x7478A0) = 0x121;
    MEM8(esp + 0x1E) = 1;
    MEMF(esp + 0x18) = xmm0; /* movss */
    MEM8(esp + 0x1F) = 1;
    ecx = 0x747890;
    MEM32(0x747894) = esi;
    goto loc_0030B1B8;

loc_0030B083: ;
    MEM32(0x7478A0) = 0x7E;
    ecx = 0x747890;
    MEM32(0x747894) = esi;
    goto loc_0030B1B8;

loc_0030B09D: ;
    if (CMP_NE(esi, 0x4CE50B5)) goto loc_0030B1D6; /* jne: not equal / not zero */

loc_0030B0A9: ;
    ecx = MEM32(0x6BD92C);
    edx = MEM32(ecx + 4);
    xmm0 = MEMF(0x648E2C); /* movss */
    edx--;
    edx = (uint32_t)(-(int32_t)edx);
    edx = _cf ? 0xFFFFFFFF : 0; /* sbb self (CF extend) */
    edx = edx & 0x5C;
    edx = edx + 0xC8;
    MEMF(esp + 0x28) = xmm0; /* movss */
    goto loc_0030B18E;

loc_0030B0D3: ;
    xmm0 = MEMF(0x648D10); /* movss */
    MEM32(0x7478A0) = 0xCB;
    MEMF(esp + 0x28) = xmm0; /* movss */
    ecx = 0x747890;
    MEM32(0x747894) = esi;
    goto loc_0030B1B8;

loc_0030B0FB: ;
    if (CMP_A(esi, 0xE8C47C5)) goto loc_0030B16F; /* ja: above (unsigned >) */

loc_0030B103: ;
    if (CMP_EQ(esi, 0xE8C47C5)) goto loc_0030B150; /* je: equal / zero */

loc_0030B105: ;
    if (CMP_EQ(esi, 0x6E46F85)) goto loc_0030B132; /* je: equal / zero */

loc_0030B10D: ;
    if (CMP_NE(esi, 0x92187C5)) goto loc_0030B1D6; /* jne: not equal / not zero */

loc_0030B119: ;
    ecx = MEM32(0x6BD92C);
    edx = MEM32(ecx + 4);
    edx--;
    edx = (uint32_t)(-(int32_t)edx);
    edx = _cf ? 0xFFFFFFFF : 0; /* sbb self (CF extend) */
    edx = edx & 0x5C;
    edx = edx + 0xC7;
    goto loc_0030B18E;

loc_0030B132: ;
    ecx = MEM32(0x6BD92C);
    edx = MEM32(ecx + 4);
    edx--;
    edx = (uint32_t)(-(int32_t)edx);
    edx = _cf ? 0xFFFFFFFF : 0; /* sbb self (CF extend) */
    edx = edx & 0x5C;
    edx = edx + 0xC9;
    MEM8(esp + 0x1E) = 1;
    goto loc_0030B18E;

loc_0030B150: ;
    ecx = MEM32(0x6BD92C);
    edx = MEM32(ecx + 4);
    edx--;
    edx = (uint32_t)(-(int32_t)edx);
    edx = _cf ? 0xFFFFFFFF : 0; /* sbb self (CF extend) */
    edx = edx & 0x10D;
    edx = edx + 0x1B;
    MEMF(esp + 0x28) = xmm0; /* movss */
    goto loc_0030B18E;

loc_0030B16F: ;
    if (CMP_NE(esi, 0xEE7C2C5)) goto loc_0030B1D6; /* jne: not equal / not zero */

loc_0030B177: ;
    ecx = MEM32(0x6BD92C);
    edx = MEM32(ecx + 4);
    edx--;
    edx = (uint32_t)(-(int32_t)edx);
    edx = _cf ? 0xFFFFFFFF : 0; /* sbb self (CF extend) */
    edx = edx & 0x42;
    edx = edx + 0xE5;

loc_0030B18E: ;
    MEM32(0x7478A0) = edx;
    ecx = 0x747890;
    MEM32(0x747894) = esi;
    goto loc_0030B1B8;

loc_0030B1A1: ;
    edx = MEM32(0x84A1AC);
    ecx = eax;
    ecx = (uint32_t)((int32_t)ecx * (int32_t)0x54);
    ecx = ecx + edx;
    edx = MEM32(0x84A1B0);
    MEM8(edx + eax) = 0;

loc_0030B1B8: ;
    PUSH32(esp, 0);
    PUSH32(esp, eax);
    PUSH32(esp, ecx);
    eax = 0; /* xor self */
    MEM32(esp + 0x2C) = 1;
    PUSH32(esp, 0); sub_002B2690(); /* call 0x002B2690 */

loc_0030B1CB: ;
    esp = esp + 0xC;
    (void)0; /* test eax, eax - flags set for next jcc */
    MEM32(esp + 0x48) = eax;
    if (TEST_NZ(eax, eax)) { sub_0030B1DF(); return; } /* jne: not equal / not zero */

loc_0030B1D6: ;
    eax = 0; /* xor self */
    POP32(esp, edi);
    POP32(esp, esi);
    POP32(esp, ebx);
    esp = ebp;
    POP32(esp, ebp);
    esp += 4; return; /* ret */

}

/**
 * sub_0030BF60
 * Original: 0x0030BF60 - 0x0030C044 (228 bytes, 71 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0030BF60(void)
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

loc_0030BF60: ;
    esp = esp - 0xC;
    xmm0 = 0.0f; /* xorps self = zero */
    PUSH32(esp, ebp);
    ebp = MEM32(esp + 0x1C);
    fp_push(MEMF(ebp)); /* fld float */
    PUSH32(esp, esi);
    fp_top() = fabs(fp_top()); /* fabs */
    MEMF(esp + 0x20) = xmm0; /* movss */
    fp_push(MEMF(0x648D24)); /* fld float */
    _fpu_cmp = (fp_top() < fp_st1()) ? -1 : (fp_top() > fp_st1()) ? 1 : 0; fp_pop(); /* fcompi */
    /* fstp st(0) */
    if ((_fpu_cmp <= 0) /* fcompi */) goto loc_0030BF94; /* jbe: below or equal (unsigned <=) */

loc_0030BF83: ;
    fp_push(MEMF(ebp + 8)); /* fld float */
    fp_top() = fabs(fp_top()); /* fabs */
    fp_push(MEMF(0x648D24)); /* fld float */
    _fpu_cmp = (fp_top() < fp_st1()) ? -1 : (fp_top() > fp_st1()) ? 1 : 0; fp_pop(); /* fcompi */
    /* fstp st(0) */
    if ((_fpu_cmp > 0) /* fcompi */) goto loc_0030BFB2; /* ja: above (unsigned >) */

loc_0030BF94: ;
    eax = MEM32(ebp + 8);
    ecx = MEM32(ebp);
    PUSH32(esp, eax);
    PUSH32(esp, ecx);
    PUSH32(esp, 0); sub_003E3CA0(); /* call 0x003E3CA0 */

loc_0030BFA1: ;
    xmm0 = xmm0 * MEMF(0x648D78); /* mulss */
    esp = esp + 8;
    MEMF(esp + 0x20) = xmm0; /* movss */

loc_0030BFB2: ;
    xmm0 = MEMF(ebp + 8); /* movss */
    xmm1 = MEMF(ebp); /* movss */
    xmm2 = xmm0; /* movaps */
    xmm2 = xmm2 * xmm0; /* mulss */
    xmm0 = xmm1; /* movaps */
    xmm0 = xmm0 * xmm1; /* mulss */
    xmm2 = xmm2 + xmm0; /* addss */
    MEMF(esp + 0xC) = xmm2; /* movss */
    xmm0 = sqrtf(MEMF(esp + 0xC)); /* sqrtss */
    MEMF(esp + 8) = xmm0; /* movss */
    fp_push(MEMF(esp + 8)); /* fld float */
    fp_st1() *= fp_top(); fp_pop(); /* fmul */
    eax = MEM32(esp + 0x28);
    PUSH32(esp, 0);
    PUSH32(esp, 0);
    PUSH32(esp, edx);
    MEMF(esp + 0x18) = (float)fp_top(); fp_popp(); /* fstp */
    fp_push(MEMF(ebp + 4)); /* fld float */
    edx = MEM32(esp + 0x18);
    fp_st1() *= fp_top(); fp_pop(); /* fmul */
    PUSH32(esp, 1);
    PUSH32(esp, 0);
    PUSH32(esp, 0x3F000000);
    PUSH32(esp, 0x42700000);
    MEMF(esp + 0x24) = (float)fp_top(); fp_popp(); /* fstp */
    ecx = MEM32(esp + 0x24);
    PUSH32(esp, eax);
    eax = MEM32(esp + 0x40);
    PUSH32(esp, 0xC8);
    PUSH32(esp, 0);
    PUSH32(esp, ecx);
    ecx = MEM32(esp + 0x44);
    PUSH32(esp, edx);
    PUSH32(esp, eax);
    PUSH32(esp, ecx);
    eax = 0; /* xor self */
    PUSH32(esp, 0); sub_003030C0(); /* call 0x003030C0 */

loc_0030C035: ;
    esi = eax;
    esp = esp + 0x38;
    if (TEST_NZ(esi, esi)) { sub_0030C044(); return; } /* jne: not equal / not zero */

loc_0030C03E: ;
    POP32(esp, esi);
    POP32(esp, ebp);
    esp = esp + 0xC;
    esp += 4; return; /* ret */

    #undef fp_push
    #undef fp_pop
    #undef fp_popp
    #undef fp_top
    #undef fp_st1
}

/**
 * sub_0030C240
 * Original: 0x0030C240 - 0x0030C271 (49 bytes, 21 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0030C240(void)
{
    uint32_t ebp;
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
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_0030C240: ;
    esp = esp - 0x10;
    PUSH32(esp, ebx);
    PUSH32(esp, ebp);
    PUSH32(esp, esi);
    esi = eax;
    fp_push(MEMF(esi)); /* fld float */
    PUSH32(esp, edi);
    fp_top() = fabs(fp_top()); /* fabs */
    ebx = ecx;
    fp_push(MEMF(0x648D24)); /* fld float */
    _fpu_cmp = (fp_top() < fp_st1()) ? -1 : (fp_top() > fp_st1()) ? 1 : 0; fp_pop(); /* fcompi */
    /* fstp st(0) */
    if ((_fpu_cmp <= 0) /* fcompi */) { sub_0030C271(); return; } /* jbe: below or equal (unsigned <=) */

loc_0030C25B: ;
    fp_push(MEMF(esi + 8)); /* fld float */
    fp_top() = fabs(fp_top()); /* fabs */
    fp_push(MEMF(0x648D24)); /* fld float */
    _fpu_cmp = (fp_top() < fp_st1()) ? -1 : (fp_top() > fp_st1()) ? 1 : 0; fp_pop(); /* fcompi */
    /* fstp st(0) */
    if ((_fpu_cmp <= 0) /* fcompi */) { sub_0030C271(); return; } /* jbe: below or equal (unsigned <=) */

loc_0030C26C: ;
    xmm0 = 0.0f; /* xorps self = zero */
    g_seh_ebp = ebp; sub_0030C288(); return; /* tail jmp 0x0030C288 */

    #undef fp_push
    #undef fp_pop
    #undef fp_popp
    #undef fp_top
    #undef fp_st1
}

/**
 * sub_0030C8D0
 * Original: 0x0030C8D0 - 0x0030C9B4 (228 bytes, 73 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0030C8D0(void)
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

loc_0030C8D0: ;
    esp = esp - 0xC;
    xmm0 = 0.0f; /* xorps self = zero */
    PUSH32(esp, ebx);
    ebx = MEM32(esp + 0x1C);
    fp_push(MEMF(ebx)); /* fld float */
    PUSH32(esp, ebp);
    ebp = MEM32(esp + 0x1C);
    fp_top() = fabs(fp_top()); /* fabs */
    fp_push(MEMF(0x648D24)); /* fld float */
    PUSH32(esp, esi);
    _fpu_cmp = (fp_top() < fp_st1()) ? -1 : (fp_top() > fp_st1()) ? 1 : 0; fp_pop(); /* fcompi */
    /* fstp st(0) */
    MEMF(esp + 0xC) = xmm0; /* movss */
    if ((_fpu_cmp <= 0) /* fcompi */) goto loc_0030C908; /* jbe: below or equal (unsigned <=) */

loc_0030C8F7: ;
    fp_push(MEMF(ebx + 8)); /* fld float */
    fp_top() = fabs(fp_top()); /* fabs */
    fp_push(MEMF(0x648D24)); /* fld float */
    _fpu_cmp = (fp_top() < fp_st1()) ? -1 : (fp_top() > fp_st1()) ? 1 : 0; fp_pop(); /* fcompi */
    /* fstp st(0) */
    if ((_fpu_cmp > 0) /* fcompi */) goto loc_0030C925; /* ja: above (unsigned >) */

loc_0030C908: ;
    eax = MEM32(ebx + 8);
    ecx = MEM32(ebx);
    PUSH32(esp, eax);
    PUSH32(esp, ecx);
    PUSH32(esp, 0); sub_003E3CA0(); /* call 0x003E3CA0 */

loc_0030C914: ;
    xmm0 = xmm0 * MEMF(0x648D78); /* mulss */
    esp = esp + 8;
    MEMF(esp + 0xC) = xmm0; /* movss */

loc_0030C925: ;
    xmm0 = MEMF(ebx + 8); /* movss */
    xmm1 = MEMF(ebx); /* movss */
    xmm2 = xmm0; /* movaps */
    xmm2 = xmm2 * xmm0; /* mulss */
    xmm0 = xmm1; /* movaps */
    xmm0 = xmm0 * xmm1; /* mulss */
    xmm2 = xmm2 + xmm0; /* addss */
    MEMF(esp + 0x10) = xmm2; /* movss */
    xmm0 = sqrtf(MEMF(esp + 0x10)); /* sqrtss */
    MEMF(esp + 0x14) = xmm0; /* movss */
    fp_push(MEMF(esp + 0x14)); /* fld float */
    fp_st1() *= fp_top(); fp_pop(); /* fmul */
    PUSH32(esp, 0);
    PUSH32(esp, 0);
    PUSH32(esp, edx);
    edx = MEM32(esp + 0x18);
    MEMF(esp + 0x1C) = (float)fp_top(); fp_popp(); /* fstp */
    fp_push(MEMF(ebx + 4)); /* fld float */
    ecx = MEM32(esp + 0x1C);
    fp_st1() *= fp_top(); fp_pop(); /* fmul */
    PUSH32(esp, 1);
    PUSH32(esp, 0);
    PUSH32(esp, 0x3F000000);
    PUSH32(esp, 0x42700000);
    MEMF(esp + 0x30) = (float)fp_top(); fp_popp(); /* fstp */
    eax = MEM32(esp + 0x30);
    PUSH32(esp, 0x18);
    PUSH32(esp, 0xC8);
    PUSH32(esp, 0);
    PUSH32(esp, eax);
    eax = MEM32(esp + 0x48);
    PUSH32(esp, ecx);
    PUSH32(esp, edx);
    PUSH32(esp, eax);
    eax = ebp;
    PUSH32(esp, 0); sub_003030C0(); /* call 0x003030C0 */

loc_0030C9A4: ;
    esi = eax;
    esp = esp + 0x38;
    if (TEST_NZ(esi, esi)) { sub_0030C9B4(); return; } /* jne: not equal / not zero */

loc_0030C9AD: ;
    POP32(esp, esi);
    POP32(esp, ebp);
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
 * sub_0030CB70
 * Original: 0x0030CB70 - 0x0030CC54 (228 bytes, 75 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0030CB70(void)
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

loc_0030CB70: ;
    esp = esp - 0x14;
    xmm0 = 0.0f; /* xorps self = zero */
    PUSH32(esp, ebx);
    ebx = MEM32(esp + 0x1C);
    PUSH32(esp, ebp);
    ebp = MEM32(esp + 0x24);
    PUSH32(esp, esi);
    PUSH32(esp, edi);
    edi = eax;
    fp_push(MEMF(edi)); /* fld float */
    MEMF(esp + 0x14) = xmm0; /* movss */
    fp_top() = fabs(fp_top()); /* fabs */
    fp_push(MEMF(0x648D24)); /* fld float */
    _fpu_cmp = (fp_top() < fp_st1()) ? -1 : (fp_top() > fp_st1()) ? 1 : 0; fp_pop(); /* fcompi */
    /* fstp st(0) */
    if ((_fpu_cmp <= 0) /* fcompi */) goto loc_0030CBAB; /* jbe: below or equal (unsigned <=) */

loc_0030CB9A: ;
    fp_push(MEMF(edi + 8)); /* fld float */
    fp_top() = fabs(fp_top()); /* fabs */
    fp_push(MEMF(0x648D24)); /* fld float */
    _fpu_cmp = (fp_top() < fp_st1()) ? -1 : (fp_top() > fp_st1()) ? 1 : 0; fp_pop(); /* fcompi */
    /* fstp st(0) */
    if ((_fpu_cmp > 0) /* fcompi */) goto loc_0030CBC8; /* ja: above (unsigned >) */

loc_0030CBAB: ;
    eax = MEM32(edi + 8);
    ecx = MEM32(edi);
    PUSH32(esp, eax);
    PUSH32(esp, ecx);
    PUSH32(esp, 0); sub_003E3CA0(); /* call 0x003E3CA0 */

loc_0030CBB7: ;
    xmm0 = xmm0 * MEMF(0x648D78); /* mulss */
    esp = esp + 8;
    MEMF(esp + 0x14) = xmm0; /* movss */

loc_0030CBC8: ;
    xmm0 = MEMF(edi + 8); /* movss */
    xmm1 = MEMF(edi); /* movss */
    xmm2 = xmm0; /* movaps */
    xmm2 = xmm2 * xmm0; /* mulss */
    xmm0 = xmm1; /* movaps */
    xmm0 = xmm0 * xmm1; /* mulss */
    xmm2 = xmm2 + xmm0; /* addss */
    MEMF(esp + 0x1C) = xmm2; /* movss */
    xmm0 = sqrtf(MEMF(esp + 0x1C)); /* sqrtss */
    MEMF(esp + 0x18) = xmm0; /* movss */
    fp_push(MEMF(esp + 0x18)); /* fld float */
    fp_st1() *= fp_top(); fp_pop(); /* fmul */
    PUSH32(esp, 0);
    PUSH32(esp, 0);
    PUSH32(esp, edx);
    edx = MEM32(esp + 0x20);
    MEMF(esp + 0x28) = (float)fp_top(); fp_popp(); /* fstp */
    fp_push(MEMF(edi + 4)); /* fld float */
    ecx = MEM32(esp + 0x28);
    fp_st1() *= fp_top(); fp_pop(); /* fmul */
    PUSH32(esp, 1);
    PUSH32(esp, 0);
    PUSH32(esp, 0x3F000000);
    PUSH32(esp, 0x42700000);
    MEMF(esp + 0x34) = (float)fp_top(); fp_popp(); /* fstp */
    eax = MEM32(esp + 0x34);
    PUSH32(esp, 0x19);
    PUSH32(esp, 0xC8);
    PUSH32(esp, 0);
    PUSH32(esp, eax);
    PUSH32(esp, ecx);
    PUSH32(esp, edx);
    PUSH32(esp, ebx);
    eax = ebp;
    PUSH32(esp, 0); sub_003030C0(); /* call 0x003030C0 */

loc_0030CC43: ;
    esi = eax;
    esp = esp + 0x38;
    if (TEST_NZ(esi, esi)) { sub_0030CC54(); return; } /* jne: not equal / not zero */

loc_0030CC4C: ;
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
 * sub_0030CDD0
 * Original: 0x0030CDD0 - 0x0030CE9D (205 bytes, 70 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0030CDD0(void)
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

loc_0030CDD0: ;
    esp = esp - 0x10;
    xmm0 = 0.0f; /* xorps self = zero */
    PUSH32(esp, ebp);
    ebp = MEM32(esp + 0x1C);
    PUSH32(esp, esi);
    PUSH32(esp, edi);
    edi = eax;
    fp_push(MEMF(edi)); /* fld float */
    MEMF(esp + 0x10) = xmm0; /* movss */
    fp_top() = fabs(fp_top()); /* fabs */
    fp_push(MEMF(0x648D24)); /* fld float */
    _fpu_cmp = (fp_top() < fp_st1()) ? -1 : (fp_top() > fp_st1()) ? 1 : 0; fp_pop(); /* fcompi */
    /* fstp st(0) */
    if ((_fpu_cmp <= 0) /* fcompi */) goto loc_0030CE06; /* jbe: below or equal (unsigned <=) */

loc_0030CDF5: ;
    fp_push(MEMF(edi + 8)); /* fld float */
    fp_top() = fabs(fp_top()); /* fabs */
    fp_push(MEMF(0x648D24)); /* fld float */
    _fpu_cmp = (fp_top() < fp_st1()) ? -1 : (fp_top() > fp_st1()) ? 1 : 0; fp_pop(); /* fcompi */
    /* fstp st(0) */
    if ((_fpu_cmp > 0) /* fcompi */) goto loc_0030CE23; /* ja: above (unsigned >) */

loc_0030CE06: ;
    eax = MEM32(edi + 8);
    ecx = MEM32(edi);
    PUSH32(esp, eax);
    PUSH32(esp, ecx);
    PUSH32(esp, 0); sub_003E3CA0(); /* call 0x003E3CA0 */

loc_0030CE12: ;
    xmm0 = xmm0 * MEMF(0x648D78); /* mulss */
    esp = esp + 8;
    MEMF(esp + 0x10) = xmm0; /* movss */

loc_0030CE23: ;
    xmm0 = MEMF(edi + 8); /* movss */
    xmm1 = MEMF(edi); /* movss */
    xmm2 = xmm0; /* movaps */
    xmm2 = xmm2 * xmm0; /* mulss */
    xmm0 = xmm1; /* movaps */
    xmm0 = xmm0 * xmm1; /* mulss */
    xmm2 = xmm2 + xmm0; /* addss */
    MEMF(esp + 0x14) = xmm2; /* movss */
    xmm0 = sqrtf(MEMF(esp + 0x14)); /* sqrtss */
    MEMF(esp + 0x18) = xmm0; /* movss */
    eax = MEM32(esp + 0x2C);
    ecx = MEM32(esp + 0x28);
    edx = MEM32(edi + 4);
    PUSH32(esp, 0);
    PUSH32(esp, 0);
    PUSH32(esp, eax);
    eax = MEM32(esp + 0x24);
    PUSH32(esp, 1);
    PUSH32(esp, 0);
    PUSH32(esp, 0x3F000000);
    PUSH32(esp, 0x42700000);
    PUSH32(esp, ebp);
    PUSH32(esp, ecx);
    ecx = MEM32(esp + 0x34);
    PUSH32(esp, 0);
    PUSH32(esp, edx);
    PUSH32(esp, eax);
    MEM32(esp + 0x44) = edx;
    edx = MEM32(esp + 0x50);
    PUSH32(esp, ecx);
    PUSH32(esp, edx);
    eax = ebx;
    PUSH32(esp, 0); sub_003030C0(); /* call 0x003030C0 */

loc_0030CE8D: ;
    esi = eax;
    esp = esp + 0x38;
    if (TEST_NZ(esi, esi)) { sub_0030CE9D(); return; } /* jne: not equal / not zero */

loc_0030CE96: ;
    POP32(esp, edi);
    POP32(esp, esi);
    POP32(esp, ebp);
    esp = esp + 0x10;
    esp += 4; return; /* ret */

    #undef fp_push
    #undef fp_pop
    #undef fp_popp
    #undef fp_top
    #undef fp_st1
}

/**
 * sub_0030D030
 * Original: 0x0030D030 - 0x0030D0B4 (132 bytes, 48 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0030D030(void)
{
    int _flags = 0; /* fallback flag var */

loc_0030D030: ;
    PUSH32(esp, ebx);
    PUSH32(esp, esi);
    PUSH32(esp, edi);
    PUSH32(esp, eax);
    eax = MEM32(esp + 0x14);
    PUSH32(esp, 0x64);
    edi = edx;
    PUSH32(esp, 0x1A);
    ebx = ecx;
    PUSH32(esp, edi);
    PUSH32(esp, 0); sub_0030CDD0(); /* call 0x0030CDD0 */

loc_0030D046: ;
    ecx = MEM32(ebx);
    PUSH32(esp, 0xFF);
    PUSH32(esp, 0);
    esi = eax;
    PUSH32(esp, 0x3F000000);
    MEM32(esi + 0x78) = ecx;
    edx = MEM32(ebx + 4);
    PUSH32(esp, 0x3F800000);
    PUSH32(esp, 0x492AE600);
    MEM32(esi + 0x7C) = edx;
    eax = MEM32(ebx + 8);
    PUSH32(esp, 2);
    PUSH32(esp, 3);
    ecx = 0x12C;
    MEM32(esi + 0x80) = eax;
    PUSH32(esp, 0); sub_0011F960(); /* call 0x0011F960 */

loc_0030D080: ;
    SET_LO8(eax, MEM8(0x863D11));
    esp = esp + 0x2C;
    if (TEST_Z(LO8(eax), LO8(eax))) goto loc_0030D0AE; /* je: equal / zero */

loc_0030D08C: ;
    edi = MEM32(edi + 0x568);
    eax = MEM32(edi + 0xBC);
    (void)0; /* test eax, eax - flags set for next jcc */
    eax = esi;
    if (TEST_NZ(eax, eax)) goto loc_0030D0B0; /* jne: not equal / not zero */

loc_0030D09E: ;
    ecx = MEM32(edi + 0x368);
    SET_LO8(edx, MEM8(esp + 0x14));
    POP32(esp, edi);
    POP32(esp, esi);
    MEM8(ecx) = LO8(edx);
    POP32(esp, ebx);
    esp += 4; return; /* ret */

loc_0030D0AE: ;
    eax = esi;

loc_0030D0B0: ;
    POP32(esp, edi);
    POP32(esp, esi);
    POP32(esp, ebx);
    esp += 4; return; /* ret */

}

/**
 * sub_0030D0C0
 * Original: 0x0030D0C0 - 0x0030D0FD (61 bytes, 21 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0030D0C0(void)
{

loc_0030D0C0: ;
    PUSH32(esp, esi);
    PUSH32(esp, eax);
    eax = MEM32(esp + 0xC);
    PUSH32(esp, 0x64);
    PUSH32(esp, 0x1C);
    PUSH32(esp, ecx);
    PUSH32(esp, 0); sub_0030CDD0(); /* call 0x0030CDD0 */

loc_0030D0D0: ;
    PUSH32(esp, 0xFF);
    PUSH32(esp, 0);
    PUSH32(esp, 0x3F000000);
    PUSH32(esp, 0x3F800000);
    PUSH32(esp, 0x492AE600);
    PUSH32(esp, 2);
    esi = eax;
    PUSH32(esp, 3);
    ecx = 0x12C;
    PUSH32(esp, 0); sub_0011F960(); /* call 0x0011F960 */

loc_0030D0F6: ;
    esp = esp + 0x2C;
    eax = esi;
    POP32(esp, esi);
    esp += 4; return; /* ret */

}

/**
 * sub_0030D100
 * Original: 0x0030D100 - 0x0030D1CD (205 bytes, 70 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0030D100(void)
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

loc_0030D100: ;
    esp = esp - 0xC;
    xmm0 = 0.0f; /* xorps self = zero */
    PUSH32(esp, ebp);
    ebp = MEM32(esp + 0x1C);
    PUSH32(esp, esi);
    PUSH32(esp, edi);
    edi = eax;
    fp_push(MEMF(edi)); /* fld float */
    MEMF(esp + 0xC) = xmm0; /* movss */
    fp_top() = fabs(fp_top()); /* fabs */
    fp_push(MEMF(0x648D24)); /* fld float */
    _fpu_cmp = (fp_top() < fp_st1()) ? -1 : (fp_top() > fp_st1()) ? 1 : 0; fp_pop(); /* fcompi */
    /* fstp st(0) */
    if ((_fpu_cmp <= 0) /* fcompi */) goto loc_0030D136; /* jbe: below or equal (unsigned <=) */

loc_0030D125: ;
    fp_push(MEMF(edi + 8)); /* fld float */
    fp_top() = fabs(fp_top()); /* fabs */
    fp_push(MEMF(0x648D24)); /* fld float */
    _fpu_cmp = (fp_top() < fp_st1()) ? -1 : (fp_top() > fp_st1()) ? 1 : 0; fp_pop(); /* fcompi */
    /* fstp st(0) */
    if ((_fpu_cmp > 0) /* fcompi */) goto loc_0030D153; /* ja: above (unsigned >) */

loc_0030D136: ;
    eax = MEM32(edi + 8);
    ecx = MEM32(edi);
    PUSH32(esp, eax);
    PUSH32(esp, ecx);
    PUSH32(esp, 0); sub_003E3CA0(); /* call 0x003E3CA0 */

loc_0030D142: ;
    xmm0 = xmm0 * MEMF(0x648D78); /* mulss */
    esp = esp + 8;
    MEMF(esp + 0xC) = xmm0; /* movss */

loc_0030D153: ;
    xmm0 = MEMF(edi + 8); /* movss */
    xmm1 = MEMF(edi); /* movss */
    xmm2 = xmm0; /* movaps */
    xmm2 = xmm2 * xmm0; /* mulss */
    xmm0 = xmm1; /* movaps */
    xmm0 = xmm0 * xmm1; /* mulss */
    xmm2 = xmm2 + xmm0; /* addss */
    MEMF(esp + 0x10) = xmm2; /* movss */
    xmm0 = sqrtf(MEMF(esp + 0x10)); /* sqrtss */
    MEMF(esp + 0x14) = xmm0; /* movss */
    eax = MEM32(esp + 0x2C);
    ecx = MEM32(esp + 0x28);
    edx = MEM32(edi + 4);
    PUSH32(esp, 0);
    PUSH32(esp, 0);
    PUSH32(esp, eax);
    eax = MEM32(esp + 0x20);
    PUSH32(esp, 1);
    PUSH32(esp, 0);
    PUSH32(esp, 0x3F000000);
    PUSH32(esp, 0x42700000);
    PUSH32(esp, ebp);
    PUSH32(esp, ecx);
    ecx = MEM32(esp + 0x30);
    PUSH32(esp, 0);
    PUSH32(esp, edx);
    PUSH32(esp, eax);
    MEM32(esp + 0x40) = edx;
    edx = MEM32(esp + 0x4C);
    PUSH32(esp, ecx);
    PUSH32(esp, edx);
    eax = ebx;
    PUSH32(esp, 0); sub_003030C0(); /* call 0x003030C0 */

loc_0030D1BD: ;
    esi = eax;
    esp = esp + 0x38;
    if (TEST_NZ(esi, esi)) { sub_0030D1CD(); return; } /* jne: not equal / not zero */

loc_0030D1C6: ;
    POP32(esp, edi);
    POP32(esp, esi);
    POP32(esp, ebp);
    esp = esp + 0xC;
    esp += 4; return; /* ret */

    #undef fp_push
    #undef fp_pop
    #undef fp_popp
    #undef fp_top
    #undef fp_st1
}

/**
 * sub_0030D330
 * Original: 0x0030D330 - 0x0030D378 (72 bytes, 26 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0030D330(void)
{

loc_0030D330: ;
    edx = MEM32(esp + 4);
    PUSH32(esp, ebx);
    ebx = MEM32(esp + 0xC);
    PUSH32(esp, esi);
    PUSH32(esp, eax);
    eax = MEM32(esp + 0x18);
    PUSH32(esp, 0x64);
    PUSH32(esp, 0x1B);
    PUSH32(esp, ecx);
    PUSH32(esp, edx);
    PUSH32(esp, 0); sub_0030D100(); /* call 0x0030D100 */

loc_0030D34A: ;
    PUSH32(esp, 0xFF);
    PUSH32(esp, 0);
    PUSH32(esp, 0x3F000000);
    PUSH32(esp, 0x3F800000);
    PUSH32(esp, 0x492AE600);
    PUSH32(esp, 2);
    esi = eax;
    PUSH32(esp, 3);
    ecx = 0x12C;
    PUSH32(esp, 0); sub_0011F960(); /* call 0x0011F960 */

loc_0030D370: ;
    esp = esp + 0x30;
    eax = esi;
    POP32(esp, esi);
    POP32(esp, ebx);
    esp += 4; return; /* ret */

}

/**
 * sub_0030D380
 * Original: 0x0030D380 - 0x0030D3C7 (71 bytes, 25 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0030D380(void)
{

loc_0030D380: ;
    PUSH32(esp, ebx);
    ebx = MEM32(esp + 8);
    PUSH32(esp, esi);
    PUSH32(esp, eax);
    eax = MEM32(esp + 0x14);
    PUSH32(esp, 0x1F4);
    PUSH32(esp, 0x1D);
    PUSH32(esp, ecx);
    PUSH32(esp, edx);
    PUSH32(esp, 0); sub_0030D100(); /* call 0x0030D100 */

loc_0030D399: ;
    PUSH32(esp, 0xFF);
    PUSH32(esp, 0);
    PUSH32(esp, 0x3F000000);
    PUSH32(esp, 0x3F800000);
    PUSH32(esp, 0x492AE600);
    PUSH32(esp, 2);
    esi = eax;
    PUSH32(esp, 3);
    ecx = 0x12C;
    PUSH32(esp, 0); sub_0011F960(); /* call 0x0011F960 */

loc_0030D3BF: ;
    esp = esp + 0x30;
    eax = esi;
    POP32(esp, esi);
    POP32(esp, ebx);
    esp += 4; return; /* ret */

}

/**
 * sub_0030D3D0
 * Original: 0x0030D3D0 - 0x0030D47C (172 bytes, 56 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0030D3D0(void)
{
    int _flags = 0; /* fallback flag var */
    float xmm0, xmm1, xmm2;

loc_0030D3D0: ;
    esp = esp - 0xC;
    xmm1 = MEMF(eax); /* movss */
    xmm0 = MEMF(eax + 8); /* movss */
    xmm2 = xmm1; /* movaps */
    xmm2 = xmm2 * xmm1; /* mulss */
    PUSH32(esp, esi);
    xmm1 = xmm0; /* movaps */
    xmm1 = xmm1 * xmm0; /* mulss */
    PUSH32(esp, edi);
    edi = MEM32(esp + 0x18);
    xmm2 = xmm2 + xmm1; /* addss */
    esi = ecx;
    MEMF(esp + 0xC) = xmm2; /* movss */
    xmm0 = sqrtf(MEMF(esp + 0xC)); /* sqrtss */
    MEMF(esp + 8) = xmm0; /* movss */
    xmm1 = MEMF(esp + 8); /* movss */
    xmm0 = 0.0f; /* xorps self = zero */
    /* comiss xmm1, xmm0 - sets EFLAGS */
    if ((xmm1 <= xmm0)) goto loc_0030D42D; /* jbe: below or equal (unsigned <=) */

loc_0030D416: ;
    ecx = MEM32(eax + 8);
    edx = MEM32(eax);
    PUSH32(esp, ecx);
    PUSH32(esp, edx);
    PUSH32(esp, 0); sub_003E3CA0(); /* call 0x003E3CA0 */

loc_0030D422: ;
    xmm0 = xmm0 * MEMF(0x648D78); /* mulss */
    esp = esp + 8;

loc_0030D42D: ;
    ecx = MEM32(esp + 0x1C);
    eax = MEM32(eax + 4);
    PUSH32(esp, 0);
    PUSH32(esp, 0);
    PUSH32(esp, ecx);
    PUSH32(esp, 1);
    PUSH32(esp, 0);
    PUSH32(esp, 0x3F000000);
    PUSH32(esp, 0x42700000);
    PUSH32(esp, 0x24);
    PUSH32(esp, 0xC8);
    PUSH32(esp, 0);
    edx = eax;
    MEM32(esp + 0x38) = eax;
    eax = MEM32(esp + 0x30);
    PUSH32(esp, edx);
    PUSH32(esp, eax);
    MEMF(esp + 0x3C) = xmm0; /* movss */
    ecx = MEM32(esp + 0x3C);
    PUSH32(esp, ecx);
    PUSH32(esp, edi);
    eax = esi;
    PUSH32(esp, 0); sub_003030C0(); /* call 0x003030C0 */

loc_0030D46F: ;
    esp = esp + 0x38;
    if (TEST_NZ(eax, eax)) { sub_0030D47C(); return; } /* jne: not equal / not zero */

loc_0030D476: ;
    POP32(esp, edi);
    POP32(esp, esi);
    esp = esp + 0xC;
    esp += 4; return; /* ret */

}

/**
 * sub_0030D4F0
 * Original: 0x0030D4F0 - 0x0030D507 (23 bytes, 5 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0030D4F0(void)
{

loc_0030D4F0: ;
    eax = MEM32(esp + 4);
    ecx = MEM32(eax + 0x568);
    edx = MEM32(0x7FDBF8);
    MEM32(ecx + 0x1F8) = edx;
    esp += 4; return; /* ret */

}

/**
 * sub_0030D510
 * Original: 0x0030D510 - 0x0030D585 (117 bytes, 31 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0030D510(void)
{
    int _flags = 0; /* fallback flag var */
    float xmm0, xmm1;

loc_0030D510: ;
    PUSH32(esp, esi);
    esi = MEM32(esp + 8);
    eax = MEM32(esi + 0x568);
    if (TEST_Z(eax, eax)) goto loc_0030D583; /* je: equal / zero */

loc_0030D51F: ;
    if (CMP_NE(MEM32(0x7FDBF8), 1)) goto loc_0030D532; /* jne: not equal / not zero */

loc_0030D528: ;
    xmm0 = MEMF(0x648E14); /* movss */
    goto loc_0030D543;

loc_0030D532: ;
    if (CMP_NE(MEM8(eax + 0xD6), 1)) goto loc_0030D571; /* jne: not equal / not zero */

loc_0030D53B: ;
    xmm0 = MEMF(0x648D14); /* movss */

loc_0030D543: ;
    edx = MEM32(0x847010);
    ecx = MEM32(edx + 0x34);
    xmm1 = MEMF(ecx + 4); /* movss */
    /* ucomiss xmm1, xmm0 - sets EFLAGS */
    /* lahf - load AH from flags (used in FPU compare idiom) */
    if (1 /* jnp after test - parity */) goto loc_0030D55F; /* jnp: not parity */

loc_0030D55A: ;
    MEMF(ecx + 4) = xmm0; /* movss */

loc_0030D55F: ;
    MEM8(ecx + 9) = 0;
    eax = MEM32(edx + 0x34);
    SET_LO8(ecx, MEM8(eax + 8));
    if (TEST_NZ(LO8(ecx), LO8(ecx))) goto loc_0030D571; /* jne: not equal / not zero */

loc_0030D56D: ;
    MEM8(eax + 8) = 1;

loc_0030D571: ;
    eax = MEM32(esi + 0x568);
    SET_LO8(ecx, MEM8(0x7FDBF8));
    MEM8(eax + 0xD6) = LO8(ecx);

loc_0030D583: ;
    POP32(esp, esi);
    esp += 4; return; /* ret */

}

/**
 * sub_0030D590
 * Original: 0x0030D590 - 0x0030D5A8 (24 bytes, 10 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0030D590(void)
{
    uint32_t ebp;
    int _flags = 0; /* fallback flag var */
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_0030D590: ;
    SET_LO8(eax, MEM8(0x7819D5));
    edx = MEM32(esp + 4);
    esp = esp - 0xC;
    PUSH32(esp, ebx);
    ebx = 0; /* xor self */
    (void)0; /* cmp LO8(eax), LO8(ebx) - flags set for next jcc */
    PUSH32(esp, esi);
    if (CMP_EQ(LO8(eax), LO8(ebx))) { sub_0030D5A8(); return; } /* je: equal / zero */

loc_0030D5A4: ;
    esi = edx;
    g_seh_ebp = ebp; sub_0030D5BA(); return; /* tail jmp 0x0030D5BA */

}

/**
 * sub_0030D9B0
 * Original: 0x0030D9B0 - 0x0030D9CF (31 bytes, 8 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0030D9B0(void)
{
    int _flags = 0; /* fallback flag var */

loc_0030D9B0: ;
    eax = MEM32(esp + 4);
    ecx = MEM32(eax + 0x568);
    if (TEST_Z(ecx, ecx)) goto loc_0030D9CE; /* je: equal / zero */

loc_0030D9BE: ;
    eax = ecx;
    SET_LO16(ecx, MEM16(0x7FDBF8));
    MEM16(eax + 0x2D8) = MEM16(eax + 0x2D8) + LO16(ecx);

loc_0030D9CE: ;
    esp += 4; return; /* ret */

}

/**
 * sub_0030D9D0
 * Original: 0x0030D9D0 - 0x0030D9E1 (17 bytes, 4 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0030D9D0(void)
{

loc_0030D9D0: ;
    eax = MEM32(esp + 4);
    SET_LO8(ecx, MEM8(0x7FDBF8));
    MEM8(eax + 0x45A) = LO8(ecx);
    esp += 4; return; /* ret */

}

/**
 * sub_0030D9F0
 * Original: 0x0030D9F0 - 0x0030DA26 (54 bytes, 18 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0030D9F0(void)
{
    int _flags = 0; /* fallback flag var */

loc_0030D9F0: ;
    eax = MEM32(0x7FDBF8);
    edx = MEM32(esp + 4);
    PUSH32(esp, ebx);
    SET_LO16(ebx, MEM16(0x7FDBFA));
    PUSH32(esp, esi);
    SET_LO8(ecx, LO8(eax));
    esi = ZX8(LO8(ebx));
    eax = (uint32_t)((int32_t)eax >> 8);
    SET_LO8(ecx, LO8(ecx) & 1);
    if (TEST_Z(MEM8(edx + esi * 4 + 0x52C), LO8(eax))) goto loc_0030DA19; /* je: equal / zero */

loc_0030DA16: ;
    SET_LO8(ecx, LO8(ecx) ^ 1);

loc_0030DA19: ;
    if (TEST_Z(LO8(ecx), LO8(ecx))) goto loc_0030DA23; /* je: equal / zero */

loc_0030DA1D: ;
    MEM8(edx + 0x24C) = MEM8(edx + 0x24C) + HI8(ebx);

loc_0030DA23: ;
    POP32(esp, esi);
    POP32(esp, ebx);
    esp += 4; return; /* ret */

}

/**
 * sub_0030DA30
 * Original: 0x0030DA30 - 0x0030DA42 (18 bytes, 4 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0030DA30(void)
{

loc_0030DA30: ;
    eax = MEM32(0x84A5F8);
    SET_LO8(ecx, MEM8(0x7FDBF8));
    MEM8(eax + 0x214) = LO8(ecx);
    esp += 4; return; /* ret */

}

/**
 * sub_0030DA50
 * Original: 0x0030DA50 - 0x0030DA96 (70 bytes, 18 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0030DA50(void)
{
    int _flags = 0; /* fallback flag var */

loc_0030DA50: ;
    eax = MEM32(esp + 4);
    SET_LO8(ecx, MEM8(eax + 0x250));
    SET_LO8(eax, LO8(ecx));
    edx = 0; /* xor self */
    SET_LO8(eax, LO8(eax) - 1);
    if (CMP_EQ(LO8(ecx), LO8(edx))) goto loc_0030DA95; /* je: equal / zero */

loc_0030DA64: ;
    ecx = ZX8(LO8(eax));
    eax = MEM32(0x84A5F8);
    ecx = (uint32_t)((int32_t)ecx * (int32_t)0x6D0);
    eax = eax + ecx;
    if (CMP_B(MEM8(eax + 0x251), 1)) goto loc_0030DA95; /* jb: below (unsigned <) */

loc_0030DA7D: ;
    SET_LO8(ecx, MEM8(0x7FDBF8));
    MEM8(eax + 0x43D) = LO8(ecx);
    MEM32(eax + 0x420) = edx;
    MEM8(eax + 0x20C) = LO8(edx);

loc_0030DA95: ;
    esp += 4; return; /* ret */

}

/**
 * sub_0030DAA0
 * Original: 0x0030DAA0 - 0x0030DB21 (129 bytes, 45 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0030DAA0(void)
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

loc_0030DAA0: ;
    PUSH32(esp, ecx);
    eax = MEM32(0x7FDBF8);
    ecx = eax * 8;
    xmm0 = (float)(int32_t)ecx; /* cvtsi2ss */
    ecx = (uint32_t)(int32_t)SMEM8(0x6BCFEB);
    (void)0; /* test ecx, ecx - flags set for next jcc */
    MEMF(esp) = xmm0; /* movss */
    if (CMP_LE(ecx & ecx, 0)) goto loc_0030DB1F; /* jle: less or equal (signed <=) */

loc_0030DAC1: ;
    eax = MEM32(0x84A5F8);
    PUSH32(esp, esi);
    esi = MEM32(esp + 0xC);
    eax = eax + 0x80;
    edx = ecx;

loc_0030DAD2: ;
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
    fp_push(MEMF(esp + 4)); /* fld float */
    _fpu_cmp = (fp_top() < fp_st1()) ? -1 : (fp_top() > fp_st1()) ? 1 : 0; fp_pop(); /* fcompi */
    /* fstp st(0) */
    if ((_fpu_cmp <= 0) /* fcompi */) goto loc_0030DB16; /* jbe: below or equal (unsigned <=) */

loc_0030DB08: ;
    ecx = MEM32(eax + 0x4E8);
    if (TEST_Z(ecx, ecx)) goto loc_0030DB16; /* je: equal / zero */

loc_0030DB12: ;
    MEM8(ecx + 0x63) = 0x14;

loc_0030DB16: ;
    eax = eax + 0x6D0;
    edx--;
    if ((edx != 0)) goto loc_0030DAD2; /* jne: not equal / not zero */

loc_0030DB1E: ;
    POP32(esp, esi);

loc_0030DB1F: ;
    POP32(esp, ecx);
    esp += 4; return; /* ret */

    #undef fp_push
    #undef fp_pop
    #undef fp_popp
    #undef fp_top
    #undef fp_st1
}

/**
 * sub_0030DB30
 * Original: 0x0030DB30 - 0x0030DB48 (24 bytes, 7 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0030DB30(void)
{
    int _flags = 0; /* fallback flag var */

loc_0030DB30: ;
    eax = MEM32(esp + 4);
    eax = MEM32(eax + 0x568);
    if (TEST_Z(eax, eax)) goto loc_0030DB47; /* je: equal / zero */

loc_0030DB3E: ;
    SET_LO8(ecx, MEM8(0x7FDBF8));
    MEM8(eax + 0x38) = LO8(ecx);

loc_0030DB47: ;
    esp += 4; return; /* ret */

}

/**
 * sub_0030DB50
 * Original: 0x0030DB50 - 0x0030DB65 (21 bytes, 6 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0030DB50(void)
{
    int _flags = 0; /* fallback flag var */

loc_0030DB50: ;
    eax = MEM32(esp + 4);
    SET_LO8(ecx, MEM8(eax + 0x250));
    if (TEST_NZ(LO8(ecx), LO8(ecx))) goto loc_0030DB64; /* jne: not equal / not zero */

loc_0030DB5E: ;
    MEM8(eax + 0x24C) = MEM8(eax + 0x24C) + 1;

loc_0030DB64: ;
    esp += 4; return; /* ret */

}

/**
 * sub_0030DB70
 * Original: 0x0030DB70 - 0x0030DBE8 (120 bytes, 32 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0030DB70(void)
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

loc_0030DB70: ;
    ecx = MEM32(0x84A5F8);
    eax = MEM32(esp + 4);
    fp_push(MEMF(ecx + 0x78)); /* fld float */
    fp_st1() -= fp_top(); fp_pop(); /* fsub */
    xmm0 = MEMF(0x648E64); /* movss */
    /* comiss xmm0, MEMF(eax + 0x25C) - sets EFLAGS */
    fp_push(MEMF(ecx + 0x80)); /* fld float */
    fp_st1() -= fp_top(); fp_pop(); /* fsub */
    fp_push(MEMF(ecx + 0x7C)); /* fld float */
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
    MEMF(esp + 4) = (float)fp_top(); fp_popp(); /* fstp */
    if ((xmm0 <= MEMF(eax + 0x25C))) goto loc_0030DBCB; /* jbe: below or equal (unsigned <=) */

loc_0030DBBF: ;
    ecx = MEM32(eax + 0x268);
    MEM32(eax + 0x25C) = ecx;

loc_0030DBCB: ;
    xmm1 = MEMF(0x5A005C); /* movss */
    xmm0 = MEMF(esp + 4); /* movss */
    /* comiss xmm1, xmm0 - sets EFLAGS */
    if ((xmm1 <= xmm0)) { sub_0030DBE8(); return; } /* jbe: below or equal (unsigned <=) */

loc_0030DBDE: ;
    xmm0 = MEMF(0x648D3C); /* movss */
    g_seh_ebp = ebp; sub_0030DC23(); return; /* tail jmp 0x0030DC23 */

    #undef fp_push
    #undef fp_pop
    #undef fp_popp
    #undef fp_top
    #undef fp_st1
}

/**
 * sub_0030DC50
 * Original: 0x0030DC50 - 0x0030DC97 (71 bytes, 15 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0030DC50(void)
{
    int _flags = 0; /* fallback flag var */
    float xmm0;

loc_0030DC50: ;
    eax = MEM32(0x7FDBF8);
    ecx = 0; /* xor self */
    (void)0; /* cmp eax, ecx - flags set for next jcc */
    xmm0 = (float)(int32_t)eax; /* cvtsi2ss */
    MEM32(0x7FDBD8) = ecx;
    MEMF(0x7FDBE4) = xmm0; /* movss */
    if (CMP_NE(eax, ecx)) goto loc_0030DC96; /* jne: not equal / not zero */

loc_0030DC6D: ;
    eax = MEM32(esp + 4);
    SET_LO8(edx, MEM8(eax + 0x3FC));
    xmm0 = MEMF(0x648D80); /* movss */
    SET_LO8(edx, LO8(edx) | 4);
    MEMF(0x7FDBE4) = xmm0; /* movss */
    MEM8(eax + 0x3FC) = LO8(edx);
    MEM8(eax + 0x24C) = LO8(ecx);

loc_0030DC96: ;
    esp += 4; return; /* ret */

}

/**
 * sub_0030DCA0
 * Original: 0x0030DCA0 - 0x0030DCE8 (72 bytes, 20 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0030DCA0(void)
{
    int _flags = 0; /* fallback flag var */
    float xmm0;

loc_0030DCA0: ;
    PUSH32(esp, ecx);
    eax = MEM32(0x7FDBEC);
    (void)0; /* test eax, eax - flags set for next jcc */
    xmm0 = MEMF(0x648EF8); /* movss */
    ecx = MEM32(0x7FDBF0);
    edx = MEM32(0x7FDBE8);
    MEMF(esp) = xmm0; /* movss */
    if (TEST_Z(eax, eax)) goto loc_0030DCD4; /* je: equal / zero */

loc_0030DCC3: ;
    xmm0 = (float)(int32_t)eax; /* cvtsi2ss */
    xmm0 = xmm0 * MEMF(0x648E54); /* mulss */
    MEMF(esp) = xmm0; /* movss */

loc_0030DCD4: ;
    eax = MEM32(esp);
    PUSH32(esp, ecx);
    ecx = MEM32(esp + 0xC);
    PUSH32(esp, edx);
    PUSH32(esp, eax);
    PUSH32(esp, ecx);
    PUSH32(esp, 0); sub_001A7F50(); /* call 0x001A7F50 */

loc_0030DCE4: ;
    esp = esp + 0x14;
    esp += 4; return; /* ret */

}

/**
 * sub_0030DCF0
 * Original: 0x0030DCF0 - 0x0030DD5D (109 bytes, 28 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0030DCF0(void)
{
    uint32_t ebp;
    int _flags = 0; /* fallback flag var */
    float xmm0;

loc_0030DCF0: ;
    PUSH32(esp, ebp);
    ebp = esp;
    esp = esp & 0xFFFFFFF0u;
    esp = esp - 0xC0;
    edx = MEM32(ebp + 0xC);
    SET_LO8(eax, MEM8(edx + 0x444));
    SET_LO8(eax, LO8(eax) & 0x7F);
    if (CMP_NE(LO8(eax), 5)) goto loc_0030DD59; /* jne: not equal / not zero */

loc_0030DD0B: ;
    eax = esp + 0x10;
    PUSH32(esp, 0); sub_002A0430(); /* call 0x002A0430 */

loc_0030DD14: ;
    xmm0 = MEMF(0x7FDC90); /* movss */
    PUSH32(esp, 0xFF);
    ecx = eax;
    MEMF(esp + 8) = xmm0; /* movss */
    xmm0 = MEMF(0x7FDC8C); /* movss */
    PUSH32(esp, 1);
    MEMF(esp + 0x10) = xmm0; /* movss */
    xmm0 = MEMF(0x7FDC88); /* movss */
    PUSH32(esp, ecx);
    ecx = 0x16;
    eax = esp + 0x10;
    MEMF(esp + 0x18) = xmm0; /* movss */
    PUSH32(esp, 0); sub_00160DA0(); /* call 0x00160DA0 */

loc_0030DD56: ;
    esp = esp + 0xC;

loc_0030DD59: ;
    esp = ebp;
    POP32(esp, ebp);
    esp += 4; return; /* ret */

}

/**
 * sub_0030DD60
 * Original: 0x0030DD60 - 0x0030DEE3 (387 bytes, 122 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0030DD60(void)
{
    uint32_t ebp;
    int _flags = 0; /* fallback flag var */
    float xmm0, xmm1;
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_0030DD60: ;
    esp = esp - 8;
    PUSH32(esp, ebp);
    ebp = MEM32(esp + 0x14);
    PUSH32(esp, esi);
    esi = MEM32(esp + 0x14);
    if (CMP_NE(MEM16(esi + 0x476), 0x11)) goto loc_0030DD86; /* jne: not equal / not zero */

loc_0030DD77: ;
    eax = MEM32(esp + 0x1C);
    PUSH32(esp, eax);
    PUSH32(esp, ebp);
    PUSH32(esp, esi);
    PUSH32(esp, 0); sub_001324C0(); /* call 0x001324C0 */

loc_0030DD83: ;
    esp = esp + 0xC;

loc_0030DD86: ;
    SET_LO16(eax, MEM16(esi + 0x476));
    if (CMP_EQ(LO16(eax), 2)) goto loc_0030DDBB; /* je: equal / zero */

loc_0030DD93: ;
    if (CMP_EQ(LO16(eax), 0x14)) goto loc_0030DDBB; /* je: equal / zero */

loc_0030DD99: ;
    if (CMP_EQ(LO16(eax), 0x15)) goto loc_0030DDBB; /* je: equal / zero */

loc_0030DD9F: ;
    if (CMP_EQ(LO16(eax), 0x16)) goto loc_0030DDBB; /* je: equal / zero */

loc_0030DDA5: ;
    if (CMP_EQ(LO16(eax), 0x12)) goto loc_0030DDBB; /* je: equal / zero */

loc_0030DDAB: ;
    if (CMP_EQ(LO16(eax), 3)) goto loc_0030DDBB; /* je: equal / zero */

loc_0030DDB1: ;
    if (CMP_NE(LO16(eax), 6)) goto loc_0030DE74; /* jne: not equal / not zero */

loc_0030DDBB: ;
    if (CMP_NE(MEM16(ebp + 0x3AE), 0)) goto loc_0030DE6B; /* jne: not equal / not zero */

loc_0030DDC9: ;
    (void)0; /* cmp LO16(eax), 2 - flags set for next jcc */
    PUSH32(esp, ebx);
    PUSH32(esp, edi);
    if (CMP_NE(LO16(eax), 2)) goto loc_0030DDD8; /* jne: not equal / not zero */

loc_0030DDD1: ;
    edi = 0x2A;
    goto loc_0030DE1E;

loc_0030DDD8: ;
    if (CMP_NE(LO16(eax), 0x14)) goto loc_0030DDE5; /* jne: not equal / not zero */

loc_0030DDDE: ;
    edi = 0xBC;
    goto loc_0030DE1E;

loc_0030DDE5: ;
    if (CMP_NE(LO16(eax), 0x15)) goto loc_0030DDF2; /* jne: not equal / not zero */

loc_0030DDEB: ;
    edi = 0xEF;
    goto loc_0030DE1E;

loc_0030DDF2: ;
    if (CMP_NE(LO16(eax), 0x16)) goto loc_0030DDFF; /* jne: not equal / not zero */

loc_0030DDF8: ;
    edi = 0xF0;
    goto loc_0030DE1E;

loc_0030DDFF: ;
    if (CMP_NE(LO16(eax), 0x12)) goto loc_0030DE0C; /* jne: not equal / not zero */

loc_0030DE05: ;
    edi = 0x2F;
    goto loc_0030DE1E;

loc_0030DE0C: ;
    ecx = 0; /* xor self */
    (void)0; /* cmp LO16(eax), 3 - flags set for next jcc */
    SET_LO8(ecx, (CMP_NE(LO16(eax), 3)) ? 1 : 0); /* setne */
    ecx--;
    ecx = ecx & 0xFFFFFFE8u;
    ecx = ecx + 0x51;
    edi = ecx;

loc_0030DE1E: ;
    edx = MEM32(esi + 0x4B0);
    eax = MEM32(edx + 0x24);
    ecx = MEM32(eax + 8);
    eax = MEM32(ecx + 0x10);
    edx = esp + 0x1C;
    PUSH32(esp, edx);
    PUSH32(esp, 1);
    PUSH32(esp, 0);
    ebx = 0x5D4CB4;
    PUSH32(esp, 0); sub_00415EC0(); /* call 0x00415EC0 */

loc_0030DE40: ;
    esp = esp + 0xC;
    if (TEST_Z(eax, eax)) goto loc_0030DE54; /* je: equal / zero */

loc_0030DE47: ;
    eax = MEM32(esp + 0x1C);
    if (TEST_Z(eax, eax)) goto loc_0030DE54; /* je: equal / zero */

loc_0030DE4F: ;
    eax = MEM32(eax + 8);
    goto loc_0030DE56;

loc_0030DE54: ;
    eax = 0; /* xor self */

loc_0030DE56: ;
    PUSH32(esp, 0);
    PUSH32(esp, 0);
    PUSH32(esp, 1);
    PUSH32(esp, edi);
    ecx = ebp;
    ebx = esi;
    PUSH32(esp, 0); sub_0007C450(); /* call 0x0007C450 */

loc_0030DE66: ;
    esp = esp + 0x10;
    POP32(esp, edi);
    POP32(esp, ebx);

loc_0030DE6B: ;
    MEM16(esi + 0x3AE) = 0;

loc_0030DE74: ;
    if (CMP_NE(MEM32(ebp + 0x64), 0x19)) { sub_0030DEE3(); return; } /* jne: not equal / not zero */

loc_0030DE7A: ;
    eax = (int32_t)MEMF(esi + 0x80); /* cvttss2si */
    ecx = (int32_t)MEMF(esi + 0x7C); /* cvttss2si */
    edx = (int32_t)MEMF(esi + 0x78); /* cvttss2si */
    PUSH32(esp, 0);
    PUSH32(esp, 0x14);
    PUSH32(esp, 0x10);
    PUSH32(esp, eax);
    eax = ZX8(MEM8(esi + 0x171));
    PUSH32(esp, ecx);
    PUSH32(esp, edx);
    edx = MEM32(esi + 0x110);
    ecx = 0xC0;
    ecx = ecx - eax;
    eax = MEM32(esi + 0xD0);
    PUSH32(esp, ecx);
    PUSH32(esp, edx);
    PUSH32(esp, eax);
    PUSH32(esp, 0); sub_003E3CA0(); /* call 0x003E3CA0 */

loc_0030DEB7: ;
    xmm0 = xmm0 * MEMF(0x649730); /* mulss */
    xmm1 = MEMF(0x648E8C); /* movss */
    xmm1 = xmm1 - xmm0; /* subss */
    esp = esp + 8;
    ecx = (int32_t)xmm1; /* cvttss2si */
    PUSH32(esp, ecx);
    SET_LO8(eax, LO8(eax) | 0xFF);
    PUSH32(esp, 0); sub_000DF270(); /* call 0x000DF270 */

loc_0030DEDA: ;
    esp = esp + 0x20;
    POP32(esp, esi);
    POP32(esp, ebp);
    esp = esp + 8;
    esp += 4; return; /* ret */

}

/**
 * sub_0030DF40
 * Original: 0x0030DF40 - 0x0030DF4F (15 bytes, 3 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0030DF40(void)
{

loc_0030DF40: ;
    eax = MEM32(esp + 4);
    MEM32(eax + 0x530) = 1;
    esp += 4; return; /* ret */

}

/**
 * sub_0030DF50
 * Original: 0x0030DF50 - 0x0030DF97 (71 bytes, 24 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0030DF50(void)
{

loc_0030DF50: ;
    edx = MEM32(0x84A5F8);
    PUSH32(esp, esi);
    esi = MEM32(esp + 0xC);
    ecx = esi;
    ecx = ecx - edx;
    eax = 0x964FDA6Du;
    { int64_t _r = (int64_t)(int32_t)eax * (int64_t)(int32_t)ecx;
      eax = (uint32_t)_r; edx = (uint32_t)(_r >> 32); }
    edx = edx + ecx;
    edx = (uint32_t)((int32_t)edx >> 0xA);
    eax = edx;
    PUSH32(esp, 0xFF);
    eax = eax >> 0x1F;
    eax = eax + edx;
    PUSH32(esp, 0xB4);
    PUSH32(esp, eax);
    PUSH32(esp, 0); sub_000DE770(); /* call 0x000DE770 */

loc_0030DF82: ;
    PUSH32(esp, 0xFF);
    PUSH32(esp, 1);
    PUSH32(esp, 0);
    PUSH32(esp, 0xB);
    PUSH32(esp, 0); sub_000C6BF0(); /* call 0x000C6BF0 */

loc_0030DF92: ;
    esp = esp + 0x1C;
    POP32(esp, esi);
    esp += 4; return; /* ret */

}

/**
 * sub_0030DFA0
 * Original: 0x0030DFA0 - 0x0030E02F (143 bytes, 41 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0030DFA0(void)
{
    int _flags = 0; /* fallback flag var */

loc_0030DFA0: ;
    PUSH32(esp, esi);
    esi = MEM32(esp + 0xC);
    PUSH32(esp, edi);
    edi = MEM32(esp + 0xC);
    eax = esi;
    ecx = edi;
    PUSH32(esp, 0); sub_000B7350(); /* call 0x000B7350 */

loc_0030DFB3: ;
    PUSH32(esp, 0xFF);
    PUSH32(esp, edi);
    ecx = 0x3E8;
    eax = esi;
    PUSH32(esp, 0); sub_000B79A0(); /* call 0x000B79A0 */

loc_0030DFC5: ;
    eax = MEM32(esi + 0x68);
    esp = esp + 8;
    if (CMP_A(eax, 0x111)) goto loc_0030DFDB; /* ja: above (unsigned >) */

loc_0030DFD2: ;
    if (CMP_EQ(eax, 0x111)) goto loc_0030DFE2; /* je: equal / zero */

loc_0030DFD4: ;
    if (CMP_BE(eax, 4)) goto loc_0030DFE2; /* jbe: below or equal (unsigned <=) */

loc_0030DFD9: ;
    goto loc_0030DFEF;

loc_0030DFDB: ;
    if (CMP_NE(eax, 0x114)) goto loc_0030DFEF; /* jne: not equal / not zero */

loc_0030DFE2: ;
    PUSH32(esp, 0xFF);
    PUSH32(esp, 0); sub_000B91D0(); /* call 0x000B91D0 */

loc_0030DFEC: ;
    esp = esp + 4;

loc_0030DFEF: ;
    if (CMP_NE(MEM32(esi + 0x64), 1)) goto loc_0030E02C; /* jne: not equal / not zero */

loc_0030DFF5: ;
    eax = 0; /* xor self */
    MEM8(edi + 0x234) = 0xFF;
    MEM8(esi + 0x234) = 0xC8;
    PUSH32(esp, edi);
    MEM32(0x7FDBF8) = 0x5F0678;
    MEM32(0x7FDBF4) = eax;
    MEM32(0x7FDBF0) = eax;
    MEM32(0x7FDBEC) = eax;
    MEM32(0x7FDBE8) = eax;
    PUSH32(esp, 0); sub_00308F50(); /* call 0x00308F50 */

loc_0030E029: ;
    esp = esp + 4;

loc_0030E02C: ;
    POP32(esp, edi);
    POP32(esp, esi);
    esp += 4; return; /* ret */

}

/**
 * sub_0030E030
 * Original: 0x0030E030 - 0x0030E05E (46 bytes, 11 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0030E030(void)
{
    int _flags = 0; /* fallback flag var */

loc_0030E030: ;
    ecx = MEM32(esp + 8);
    if (CMP_NE(MEM32(ecx + 0x64), 1)) goto loc_0030E05D; /* jne: not equal / not zero */

loc_0030E03A: ;
    eax = MEM32(esp + 4);
    MEM8(eax + 0x234) = 0xFF;
    MEM8(ecx + 0x234) = 0xC8;
    PUSH32(esp, eax);
    MEM32(0x7FDBF8) = 0x5F0678;
    PUSH32(esp, 0); sub_00308F50(); /* call 0x00308F50 */

loc_0030E05C: ;
    POP32(esp, ecx);

loc_0030E05D: ;
    esp += 4; return; /* ret */

}

/**
 * sub_0030E060
 * Original: 0x0030E060 - 0x0030E07F (31 bytes, 6 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0030E060(void)
{

loc_0030E060: ;
    eax = MEM32(esp + 8);
    SET_LO8(ecx, MEM8(eax + 0x216));
    eax = MEM32(esp + 4);
    MEM8(eax + 0x43D) = LO8(ecx);
    MEM32(eax + 0x420) = 0;
    esp += 4; return; /* ret */

}

/**
 * sub_0030E080
 * Original: 0x0030E080 - 0x0030E0C8 (72 bytes, 19 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0030E080(void)
{
    uint32_t ebp;
    int _flags = 0; /* fallback flag var */
    float xmm0, xmm1, xmm2;
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_0030E080: ;
    esp = esp - 8;
    eax = MEM32(esp + 0xC);
    xmm0 = MEMF(0x64A8A0); /* movss */
    xmm0 = xmm0 - MEMF(eax + 0x78); /* subss */
    xmm1 = MEMF(eax + 0x80); /* movss */
    xmm2 = 0.0f; /* xorps self = zero */
    xmm1 = xmm1 - MEMF(0x64A89C); /* subss */
    /* ucomiss xmm0, xmm2 - sets EFLAGS */
    /* lahf - load AH from flags (used in FPU compare idiom) */
    (void)0; /* test HI8(eax), 0x44 - flags set for next jcc */
    MEMF(esp) = xmm0; /* movss */
    MEMF(esp + 0xC) = xmm1; /* movss */
    if (1 /* jp after test - parity */) { sub_0030E0C8(); return; } /* jp: parity */

loc_0030E0BB: ;
    /* ucomiss xmm1, xmm2 - sets EFLAGS */
    /* lahf - load AH from flags (used in FPU compare idiom) */
    if (1 /* jp after test - parity */) { sub_0030E0C8(); return; } /* jp: parity */

loc_0030E0C4: ;
    eax = 0; /* xor self */
    g_seh_ebp = ebp; sub_0030E0F4(); return; /* tail jmp 0x0030E0F4 */

}

/**
 * sub_0030E210
 * Original: 0x0030E210 - 0x0030E25F (79 bytes, 19 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0030E210(void)
{
    int _flags = 0; /* fallback flag var */

loc_0030E210: ;
    PUSH32(esp, esi);
    esi = MEM32(esp + 0xC);
    if (CMP_NE(MEM32(esi + 0x64), 1)) goto loc_0030E253; /* jne: not equal / not zero */

loc_0030E21B: ;
    eax = MEM32(esp + 8);
    MEM8(eax + 0x234) = 0xFF;
    MEM8(esi + 0x234) = 0xC8;
    (void)0; /* cmp MEM32(eax + 0x68), 0x8E - flags set for next jcc */
    MEM32(0x7FDBF8) = 0x5F3558;
    if (CMP_EQ(MEM32(eax + 0x68), 0x8E)) goto loc_0030E24A; /* je: equal / zero */

loc_0030E240: ;
    MEM32(0x7FDBF8) = 0x605D84;

loc_0030E24A: ;
    PUSH32(esp, eax);
    PUSH32(esp, 0); sub_00308F50(); /* call 0x00308F50 */

loc_0030E250: ;
    esp = esp + 4;

loc_0030E253: ;
    PUSH32(esp, 0);
    PUSH32(esp, 0); sub_00131D70(); /* call 0x00131D70 */

loc_0030E25A: ;
    esp = esp + 4;
    POP32(esp, esi);
    esp += 4; return; /* ret */

}

/**
 * sub_0030E260
 * Original: 0x0030E260 - 0x0030E2DD (125 bytes, 29 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0030E260(void)
{
    int _flags = 0; /* fallback flag var */
    float xmm0, xmm1;

loc_0030E260: ;
    eax = MEM32(esp + 4);
    xmm1 = MEMF(eax + 0x110); /* movss */
    /* comiss xmm1, MEMF(0x648CF8) - sets EFLAGS */
    xmm0 = MEMF(0x648D1C); /* movss */
    MEMF(eax + 0x1C0) = xmm0; /* movss */
    if ((xmm1 <= MEMF(0x648CF8))) goto loc_0030E295; /* jbe: below or equal (unsigned <=) */

loc_0030E285: ;
    xmm1 = MEMF(0x649354); /* movss */
    MEMF(eax + 0x1C0) = xmm1; /* movss */

loc_0030E295: ;
    xmm1 = MEMF(0x649030); /* movss */
    MEMF(eax + 0xD0) = xmm1; /* movss */
    MEMF(eax + 0xD4) = xmm0; /* movss */
    SET_LO8(eax, MEM8(0x7819D5));
    if (TEST_NZ(LO8(eax), LO8(eax))) goto loc_0030E2DC; /* jne: not equal / not zero */

loc_0030E2B6: ;
    PUSH32(esp, esi);
    esi = MEM32(esp + 0xC);
    if (CMP_NE(MEM32(esi + 0x68), 0x5A)) goto loc_0030E2DB; /* jne: not equal / not zero */

loc_0030E2C1: ;
    PUSH32(esp, 0xFF);
    PUSH32(esp, 1);
    PUSH32(esp, 1);
    PUSH32(esp, esi);
    PUSH32(esp, 0);
    PUSH32(esp, 0); sub_000B2100(); /* call 0x000B2100 */

loc_0030E2D2: ;
    PUSH32(esp, esi);
    PUSH32(esp, 0); sub_000B6FA0(); /* call 0x000B6FA0 */

loc_0030E2D8: ;
    esp = esp + 0x18;

loc_0030E2DB: ;
    POP32(esp, esi);

loc_0030E2DC: ;
    esp += 4; return; /* ret */

}

/**
 * sub_0030E2E0
 * Original: 0x0030E2E0 - 0x0030E2F5 (21 bytes, 4 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0030E2E0(void)
{
    float xmm0;

loc_0030E2E0: ;
    eax = MEM32(esp + 4);
    xmm0 = MEMF(0x648D1C); /* movss */
    MEMF(eax + 0xD4) = xmm0; /* movss */
    esp += 4; return; /* ret */

}

/**
 * sub_0030E300
 * Original: 0x0030E300 - 0x0030E315 (21 bytes, 4 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0030E300(void)
{

loc_0030E300: ;
    eax = MEM32(esp + 4);
    ecx = MEM32(eax + 0x568);
    MEM32(ecx + 0x474) = 0xFFFFFFFFu;
    esp += 4; return; /* ret */

}

/**
 * sub_0030E320
 * Original: 0x0030E320 - 0x0030E663 (835 bytes, 196 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0030E320(void)
{
    int _flags = 0; /* fallback flag var */
    float xmm0;

loc_0030E320: ;
    esp = esp - 0xC;
    PUSH32(esp, esi);
    esi = MEM32(esp + 0x18);
    (void)0; /* cmp MEM32(esi + 0x68), 0x88 - flags set for next jcc */
    PUSH32(esp, edi);
    edi = MEM32(esp + 0x18);
    if (CMP_NE(MEM32(esi + 0x68), 0x88)) goto loc_0030E346; /* jne: not equal / not zero */

loc_0030E336: ;
    if (CMP_AE(MEM8(edi + 0x214), 0x37)) goto loc_0030E346; /* jae: above or equal (unsigned >=) */

loc_0030E33F: ;
    MEM8(edi + 0x24C) = MEM8(edi + 0x24C) + 3;

loc_0030E346: ;
    eax = esi;
    PUSH32(esp, 0); sub_001328B0(); /* call 0x001328B0 */

loc_0030E34D: ;
    if (CMP_EQ(MEM32(esi + 0x68), 0x53)) goto loc_0030E65D; /* je: equal / zero */

loc_0030E357: ;
    PUSH32(esp, ebx);
    eax = esi;
    PUSH32(esp, 0); sub_00111960(); /* call 0x00111960 */

loc_0030E35F: ;
    eax = MEM32(esi + 0x568);
    ebx = 0; /* xor self */
    (void)0; /* cmp eax, ebx - flags set for next jcc */
    MEM16(esi + 0x3AE) = LO16(ebx);
    if (CMP_EQ(eax, ebx)) goto loc_0030E655; /* je: equal / zero */

loc_0030E376: ;
    ecx = ZX16(MEM16(esi + 0x60));
    edx = (uint32_t)(int32_t)SMEM8(0x6BCFEB);
    (void)0; /* cmp ecx, edx - flags set for next jcc */
    MEM32(esp + 0xC) = ecx;
    if (CMP_GE(ecx, edx)) goto loc_0030E655; /* jge: greater or equal (signed >=) */

loc_0030E38D: ;
    if (CMP_EQ(MEM8(eax + 0x2BC), LO8(ebx))) goto loc_0030E3A7; /* je: equal / zero */

loc_0030E395: ;
    MEM8(eax + 0x2BC) = LO8(ebx);
    eax = MEM32(esi + 0x568);
    MEM32(eax + 0xA0) = ebx;

loc_0030E3A7: ;
    eax = MEM32(esi + 0x568);
    if (CMP_NE(MEM32(eax + 0x204), ebx)) goto loc_0030E655; /* jne: not equal / not zero */

loc_0030E3B9: ;
    MEM32(eax + 0x208) = 8;
    eax = esp + 0x20;
    MEM32(esp + 0x20) = esi;
    PUSH32(esp, 0); sub_00267470(); /* call 0x00267470 */

loc_0030E3D0: ;
    SET_LO8(ecx, MEM8(esi + 0x10B));
    PUSH32(esp, 3);
    edx = esp + 0x14;
    PUSH32(esp, edx);
    PUSH32(esp, 0x98);
    eax = 0; /* xor self */
    MEM32(esp + 0x1C) = esi;
    MEM8(esp + 0x20) = LO8(ecx);
    PUSH32(esp, 0); sub_000DA880(); /* call 0x000DA880 */

loc_0030E3F1: ;
    eax = MEM32(0x7FA1F8);
    esp = esp + 0xC;
    (void)0; /* cmp eax, 0xE - flags set for next jcc */
    edi = 0x170;
    MEM8(0x7FCB46) = 3;
    if (CMP_NE(eax, 0xE)) goto loc_0030E418; /* jne: not equal / not zero */

loc_0030E40A: ;
    if (CMP_EQ(MEM8(esi + 0x135), LO8(ebx))) goto loc_0030E418; /* je: equal / zero */

loc_0030E412: ;
    MEM8(esi + 0x135) = LO8(ebx);

loc_0030E418: ;
    eax = MEM32(esi + 0x568);
    if (CMP_EQ(MEM32(eax + 0x444), ebx)) goto loc_0030E431; /* je: equal / zero */

loc_0030E426: ;
    if (CMP_EQ(MEM32(esi + 0x3D8), ebx)) goto loc_0030E431; /* je: equal / zero */

loc_0030E42E: ;
    edi = edi | 0xFFFFFFFFu;

loc_0030E431: ;
    if (CMP_EQ(MEM8(0x7819D5), LO8(ebx))) goto loc_0030E459; /* je: equal / zero */

loc_0030E439: ;
    if (CMP_EQ(eax, ebx)) goto loc_0030E459; /* je: equal / zero */

loc_0030E43D: ;
    ecx = MEM32(eax + 0x648);
    if (CMP_EQ(ecx, ebx)) goto loc_0030E459; /* je: equal / zero */

loc_0030E447: ;
    if (CMP_NE(MEM32(eax + 0xBC), ebx)) goto loc_0030E459; /* jne: not equal / not zero */

loc_0030E44F: ;
    PUSH32(esp, ecx);
    ebx = esi;
    PUSH32(esp, 0); sub_00345B30(); /* call 0x00345B30 */

loc_0030E457: ;
    ebx = 0; /* xor self */

loc_0030E459: ;
    if (CMP_EQ(edi, 0xFFFFFFFFu)) goto loc_0030E4BC; /* je: equal / zero */

loc_0030E45E: ;
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

loc_0030E4A3: ;
    SET_LO8(eax, MEM8(0x7819D5));
    esp = esp + 0x18;
    if (CMP_EQ(LO8(eax), LO8(ebx))) goto loc_0030E4BC; /* je: equal / zero */

loc_0030E4AF: ;
    eax = MEM32(esi + 0x568);
    MEM8(eax + 0x48D) = 1;

loc_0030E4BC: ;
    edx = MEM32(esi + 0x200);
    ecx = MEM32(esi + 0x568);
    xmm0 = 0.0f; /* xorps self = zero */
    SET_LO8(eax, 0xFF);
    MEM8(esi + 0x234) = LO8(eax);
    MEM8(esi + 0x20C) = LO8(eax);
    MEM8(esi + 0x180) = LO8(eax);
    edx = edx | 0x200;
    MEM32(esi + 0x200) = edx;
    MEM16(esi + 0x3AE) = LO16(ebx);
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
    if (CMP_EQ(eax, ebx)) goto loc_0030E54A; /* je: equal / zero */

loc_0030E539: ;
    if (CMP_EQ(MEM8(0x7819D5), LO8(ebx))) goto loc_0030E54A; /* je: equal / zero */

loc_0030E541: ;
    edx = MEM32(eax + 4);
    MEM8(edx + 0x8CF) = LO8(ebx);

loc_0030E54A: ;
    if (CMP_EQ(MEM8(esi + 0x250), LO8(ebx))) goto loc_0030E557; /* je: equal / zero */

loc_0030E552: ;
    PUSH32(esp, 0); sub_002D53D0(); /* call 0x002D53D0 */

loc_0030E557: ;
    ebx = esi;
    PUSH32(esp, 0); sub_003B6C50(); /* call 0x003B6C50 */

loc_0030E55E: ;
    PUSH32(esp, esi);
    PUSH32(esp, 0); sub_00389400(); /* call 0x00389400 */

loc_0030E564: ;
    PUSH32(esp, 8);
    eax = 0x78;
    PUSH32(esp, 0); sub_002CB810(); /* call 0x002CB810 */

loc_0030E570: ;
    SET_LO8(eax, MEM8(0x7819D5));
    esp = esp + 8;
    if (TEST_NZ(LO8(eax), LO8(eax))) goto loc_0030E589; /* jne: not equal / not zero */

loc_0030E57C: ;
    if (CMP_NE(MEM32(0x7FA1F8), 0x48)) goto loc_0030E60A; /* jne: not equal / not zero */

loc_0030E589: ;
    eax = MEM32(esi + 0x568);
    if (CMP_NE(MEM32(eax + 0xBC), 2)) goto loc_0030E5B8; /* jne: not equal / not zero */

loc_0030E598: ;
    xmm0 = MEMF(0x648D1C); /* movss */
    MEM32(eax + 0x204) = 0xD;
    eax = MEM32(esi + 0x568);
    MEMF(eax + 0x5F4) = xmm0; /* movss */

loc_0030E5B8: ;
    ecx = MEM32(esi + 0x568);
    eax = MEM32(ecx + 0xBC);
    if (TEST_NZ(eax, eax)) goto loc_0030E5F8; /* jne: not equal / not zero */

loc_0030E5C8: ;
    PUSH32(esp, 1);
    PUSH32(esp, 0); sub_00344650(); /* call 0x00344650 */

loc_0030E5CF: ;
    edx = eax;
    eax = esi;
    ecx = 0x5F8C6C;
    PUSH32(esp, 0); sub_00344C40(); /* call 0x00344C40 */

loc_0030E5DD: ;
    eax = MEM32(esi + 0x564);
    ecx = 1;
    PUSH32(esp, 0); sub_0003E460(); /* call 0x0003E460 */

loc_0030E5ED: ;
    PUSH32(esp, 1);
    PUSH32(esp, esi);
    PUSH32(esp, 0); sub_001FF3B0(); /* call 0x001FF3B0 */

loc_0030E5F5: ;
    esp = esp + 8;

loc_0030E5F8: ;
    edx = MEM32(0x847024);
    eax = MEM32(edx + 0x40);
    edi = MEM32(eax + 4);
    PUSH32(esp, esi);
    PUSH32(esp, 0); sub_0002E860(); /* call 0x0002E860 */

loc_0030E60A: ;
    eax = MEM32(esp + 0xC);
    if (TEST_NZ(eax, eax)) goto loc_0030E655; /* jne: not equal / not zero */

loc_0030E612: ;
    if (CMP_NE(MEM32(0x7FA1F8), 4)) goto loc_0030E655; /* jne: not equal / not zero */

loc_0030E61B: ;
    PUSH32(esp, 0xFF);
    PUSH32(esp, 0); sub_003E1D70(); /* call 0x003E1D70 */

loc_0030E625: ;
    xmm0 = xmm0 * MEMF(0x648D80); /* mulss */
    xmm0 = xmm0 + MEMF(0x648D3C); /* addss */
    PUSH32(esp, ecx);
    MEMF(esp) = xmm0; /* movss */
    PUSH32(esp, 0); sub_003E2480(); /* call 0x003E2480 */

loc_0030E640: ;
    edx = ((int32_t)eax < 0) ? 0xFFFFFFFF : 0; /* cdq */
    ecx = 3;
    { int64_t _dividend = ((int64_t)(int32_t)edx << 32) | eax;
      eax = (uint32_t)((int32_t)(_dividend / (int32_t)ecx));
      edx = (uint32_t)((int32_t)(_dividend % (int32_t)ecx)); }
    esi = edx;
    esi = esi + 4;
    PUSH32(esp, 0); sub_00187BC0(); /* call 0x00187BC0 */

loc_0030E652: ;
    esp = esp + 8;

loc_0030E655: ;
    edx = MEM32(esp + 0x24);
    MEM8(edx) = 0x27;
    POP32(esp, ebx);

loc_0030E65D: ;
    POP32(esp, edi);
    POP32(esp, esi);
    esp = esp + 0xC;
    esp += 4; return; /* ret */

}

/**
 * sub_0030E670
 * Original: 0x0030E670 - 0x0030E6B1 (65 bytes, 22 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0030E670(void)
{
    int _flags = 0; /* fallback flag var */

loc_0030E670: ;
    edx = ZX16(MEM16(eax + 0x60));
    eax = MEM32(0x84A5F8);
    PUSH32(esp, ebx);
    PUSH32(esp, esi);
    esi = MEM32(0x84A5FC);
    edx++;
    ecx = 0; /* xor self */

loc_0030E684: ;
    if (CMP_EQ(MEM8(esi + ecx), 0)) goto loc_0030E69E; /* je: equal / zero */

loc_0030E68A: ;
    if (CMP_EQ(MEM32(eax + 0x68), 0xFFFF)) goto loc_0030E69E; /* je: equal / zero */

loc_0030E693: ;
    ebx = ZX8(MEM8(eax + 0x135));
    if (CMP_EQ(ebx, edx)) goto loc_0030E6AE; /* je: equal / zero */

loc_0030E69E: ;
    eax = eax + 0x6D0;
    ecx++;
    if (CMP_L(ecx, 0x81)) goto loc_0030E684; /* jl: less (signed <) */

loc_0030E6AC: ;
    eax = 0; /* xor self */

loc_0030E6AE: ;
    POP32(esp, esi);
    POP32(esp, ebx);
    esp += 4; return; /* ret */

}

/**
 * sub_0030E6C0
 * Original: 0x0030E6C0 - 0x0030E73B (123 bytes, 36 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0030E6C0(void)
{
    uint32_t ebp;
    int _flags = 0; /* fallback flag var */
    float xmm0;

loc_0030E6C0: ;
    PUSH32(esp, ebp);
    ebp = esp;
    esp = esp & 0xFFFFFFF0u;
    esp = esp - 0x4C;
    PUSH32(esp, esi);
    esi = eax;
    eax = MEM32(esi + 0x3C8);
    if (TEST_Z(eax, eax)) { sub_0030E73B(); return; } /* je: equal / zero */

loc_0030E6D6: ;
    eax = MEM32(esi + 0x568);
    if (TEST_Z(eax, eax)) goto loc_0030E6EA; /* je: equal / zero */

loc_0030E6E0: ;
    ecx = MEM32(eax + 0x444);
    if (TEST_Z(ecx, ecx)) { sub_0030E73B(); return; } /* je: equal / zero */

loc_0030E6EA: ;
    xmm0 = MEMF(0x6499AC); /* movss */
    MEMF(esp + 4) = xmm0; /* movss */
    xmm0 = MEMF(0x6499A8); /* movss */
    eax = esp + 0x10;
    PUSH32(esp, eax);
    MEMF(esp + 0xC) = xmm0; /* movss */
    xmm0 = MEMF(0x6499A4); /* movss */
    PUSH32(esp, 0x5D58C4);
    MEMF(esp + 0x14) = xmm0; /* movss */
    PUSH32(esp, 0); sub_002F7810(); /* call 0x002F7810 */

loc_0030E723: ;
    ecx = esp + 0x18;
    PUSH32(esp, ecx);
    edx = esp + 0x10;
    PUSH32(esp, edi);
    PUSH32(esp, edx);
    PUSH32(esp, 0); sub_001101F0(); /* call 0x001101F0 */

loc_0030E733: ;
    esp = esp + 0x14;
    POP32(esp, esi);
    esp = ebp;
    POP32(esp, ebp);
    esp += 4; return; /* ret */

}

/**
 * sub_0030E770
 * Original: 0x0030E770 - 0x0030E92B (443 bytes, 126 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0030E770(void)
{
    uint32_t ebp;
    int _flags = 0; /* fallback flag var */
    float xmm0, xmm1, xmm2;

loc_0030E770: ;
    PUSH32(esp, ebp);
    ebp = esp;
    esp = esp & 0xFFFFFFF0u;
    esp = esp - 0xA4;
    xmm0 = MEMF(eax + 0x7C); /* movss */
    edx = MEM32(eax + 0x78);
    xmm1 = MEMF(eax + 0x80); /* movss */
    ecx = MEM32(ebp + 8);
    xmm2 = MEMF(0x648EA4); /* movss */
    MEM32(ecx) = edx;
    MEMF(ecx + 8) = xmm1; /* movss */
    xmm0 = xmm0 + xmm2; /* addss */
    MEMF(ecx + 4) = xmm0; /* movss */
    xmm0 = MEMF(eax + 0x7C); /* movss */
    ecx = MEM32(ebp + 0xC);
    edx = MEM32(eax + 0x78);
    xmm1 = MEMF(eax + 0x80); /* movss */
    PUSH32(esp, ebx);
    xmm0 = xmm0 + xmm2; /* addss */
    MEM32(ecx) = edx;
    MEMF(ecx + 4) = xmm0; /* movss */
    MEMF(ecx + 8) = xmm1; /* movss */
    ecx = MEM32(eax + 0x3C8);
    (void)0; /* test ecx, ecx - flags set for next jcc */
    PUSH32(esp, esi);
    PUSH32(esp, edi);
    if (TEST_Z(ecx, ecx)) goto loc_0030E924; /* je: equal / zero */

loc_0030E7DB: ;
    ecx = MEM32(eax + 0x568);
    if (TEST_Z(ecx, ecx)) goto loc_0030E7F3; /* je: equal / zero */

loc_0030E7E5: ;
    edx = MEM32(ecx + 0x444);
    if (TEST_Z(edx, edx)) goto loc_0030E924; /* je: equal / zero */

loc_0030E7F3: ;
    ecx = 0; /* xor self */
    PUSH32(esp, 0); sub_001A8720(); /* call 0x001A8720 */

loc_0030E7FA: ;
    edi = eax;
    if (TEST_Z(edi, edi)) goto loc_0030E924; /* je: equal / zero */

loc_0030E804: ;
    eax = MEM32(edi + 0x54);
    ecx = MEM32(eax + 0x24);
    ebx = MEM32(ecx + 8);
    PUSH32(esp, 0x5D5828);
    esi = esp + 0x14;
    eax = ebx;
    MEM32(esp + 0x14) = 0;
    PUSH32(esp, 0); sub_003EE2B0(); /* call 0x003EE2B0 */

loc_0030E825: ;
    edx = MEM32(edi + 0xC4);
    eax = MEM32(edx);
    ecx = MEM32(eax);
    edx = MEM32(esp + 0x14);
    edi = MEM32(eax + 0xC);
    esi = edx;
    MEM32(esp + 0x18) = ecx;
    eax = MEM32(esp + 0x18);
    esi = esi << 6;
    esi = esi + edi;
    ecx = 0x10;
    edi = esp + 0x34;
    memcpy((void*)XBOX_PTR(edi), (void*)XBOX_PTR(esi), ecx * 4);
    esi += ecx * 4; edi += ecx * 4; ecx = 0; /* rep movsd */
    ecx = MEM32(eax + 0x34);
    edx = edx + edx * 8;
    xmm1 = MEMF(ecx + edx * 4 + 0x14); /* movss */
    xmm0 = MEMF(ecx + edx * 4 + 0x10); /* movss */
    eax = ecx + edx * 4;
    edx = MEM32(eax + 0xC);
    PUSH32(esp, edx);
    ecx = esp + 0x78;
    eax = esp + 0x38;
    PUSH32(esp, 0); sub_003E26B0(); /* call 0x003E26B0 */

loc_0030E876: ;
    xmm0 = MEMF(esp + 0xA8); /* movss */
    PUSH32(esp, 0);
    eax = esp + 0x20;
    PUSH32(esp, eax);
    MEMF(esp + 0x70) = xmm0; /* movss */
    xmm0 = MEMF(esp + 0xB4); /* movss */
    MEMF(esp + 0x74) = xmm0; /* movss */
    xmm0 = MEMF(esp + 0xB8); /* movss */
    PUSH32(esp, 0x638224);
    PUSH32(esp, ebx);
    MEMF(esp + 0x80) = xmm0; /* movss */
    PUSH32(esp, 0); sub_0029CF60(); /* call 0x0029CF60 */

loc_0030E8B8: ;
    PUSH32(esp, 0);
    ecx = esp + 0x2C;
    PUSH32(esp, ecx);
    PUSH32(esp, 0x638210);
    PUSH32(esp, ebx);
    esi = eax;
    PUSH32(esp, 0); sub_0029CF60(); /* call 0x0029CF60 */

loc_0030E8CC: ;
    esp = esp + 0x28;
    if (TEST_Z(esi, esi)) goto loc_0030E924; /* je: equal / zero */

loc_0030E8D3: ;
    if (TEST_Z(eax, eax)) goto loc_0030E924; /* je: equal / zero */

loc_0030E8D7: ;
    eax = MEM32(esp + 0x14);
    PUSH32(esp, 0);
    PUSH32(esp, 0);
    esi = esp + 0x20;
    ecx = ebx;
    PUSH32(esp, 0); sub_003ECC70(); /* call 0x003ECC70 */

loc_0030E8EA: ;
    eax = MEM32(esp + 0x18);
    PUSH32(esp, 0);
    PUSH32(esp, 0);
    esi = esp + 0x34;
    ecx = ebx;
    PUSH32(esp, 0); sub_003ECC70(); /* call 0x003ECC70 */

loc_0030E8FD: ;
    ecx = MEM32(ebp + 0xC);
    esp = esp + 0x10;
    edx = esp + 0x30;
    PUSH32(esp, edx);
    eax = esp + 0x1C;
    PUSH32(esp, eax);
    PUSH32(esp, ecx);
    PUSH32(esp, 0); sub_00428393(); /* call 0x00428393 */

loc_0030E913: ;
    ecx = MEM32(ebp + 8);
    edx = esp + 0x30;
    PUSH32(esp, edx);
    eax = esi;
    PUSH32(esp, eax);
    PUSH32(esp, ecx);
    PUSH32(esp, 0); sub_00428393(); /* call 0x00428393 */

loc_0030E924: ;
    POP32(esp, edi);
    POP32(esp, esi);
    POP32(esp, ebx);
    esp = ebp;
    POP32(esp, ebp);
    esp += 4; return; /* ret */

}

/**
 * sub_0030E930
 * Original: 0x0030E930 - 0x0030EB57 (551 bytes, 132 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0030E930(void)
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

loc_0030E930: ;
    esp = esp - 0x48;
    eax = MEM32(esi + 0xFC);
    ecx = ZX16(MEM16(eax + 8));
    fp_push((double)SMEM32(eax + 0x14)); /* fild */
    edx = ZX16(MEM16(eax + 0xA));
    PUSH32(esp, ebx);
    ebx = ZX16(MEM16(eax + 0xC));
    MEM32(esp + 0x20) = ecx;
    ecx = MEM32(eax + 0x14);
    (void)0; /* test ecx, ecx - flags set for next jcc */
    PUSH32(esp, ebp);
    ebp = MEM32(esp + 0x54);
    MEM32(esp + 0x10) = edx;
    MEM32(esp + 8) = ebx;
    if (CMP_GE(ecx & ecx, 0)) goto loc_0030E967; /* jge: greater or equal (signed >=) */

loc_0030E961: ;
    fp_st1() += fp_top(); fp_pop(); /* fadd */

loc_0030E967: ;
    edx = ZX16(MEM16(eax + 0x10));
    fp_st1() *= fp_top(); fp_pop(); /* fmul */
    ecx = ZX16(MEM16(eax + 0x12));
    MEMF(esp + 0x14) = (float)fp_top(); fp_popp(); /* fstp */
    xmm0 = (float)(int32_t)edx; /* cvtsi2ss */
    edx = MEM32(esi + 0xF8);
    MEMF(esp + 0x28) = xmm0; /* movss */
    xmm0 = MEMF(eax + 0x18); /* movss */
    MEMF(esp + 0x1C) = xmm0; /* movss */
    xmm0 = (float)(int32_t)ecx; /* cvtsi2ss */
    MEMF(esp + 0x54) = xmm0; /* movss */
    xmm0 = MEMF(eax + 0x1C); /* movss */
    eax = ZX16(MEM16(eax + 0xE));
    (void)0; /* cmp ebp, eax - flags set for next jcc */
    MEMF(esp + 0xC) = xmm0; /* movss */
    MEM32(esp + 0x18) = edx;
    if (CMP_LE(ebp, eax)) goto loc_0030EADB; /* jle: less or equal (signed <=) */

loc_0030E9B9: ;
    eax = MEM32(esi + 0x100);
    if (TEST_NZ(LO8(eax), 2)) goto loc_0030EADB; /* jne: not equal / not zero */

loc_0030E9C7: ;
    SET_LO8(edx, MEM8(esi + 0x10B));
    eax = eax | 2;
    ecx = 0; /* xor self */
    (void)0; /* test LO8(edx), LO8(edx) - flags set for next jcc */
    MEM32(esi + 0x100) = eax;
    if (TEST_Z(LO8(edx), LO8(edx))) goto loc_0030EADB; /* je: equal / zero */

loc_0030E9E0: ;
    PUSH32(esp, edi);
    edi = MEM32(0x847200);
    if (TEST_Z(edi, edi)) goto loc_0030EADA; /* je: equal / zero */

loc_0030E9EF: ;
    ebx = 0xEE;

loc_0030E9F4: ;
    (void)0; /* cmp MEM8(edi), LO8(edx) - flags set for next jcc */
    eax = MEM32(edi + 0xE0);
    if (CMP_NE(MEM8(edi), LO8(edx))) goto loc_0030EA09; /* jne: not equal / not zero */

loc_0030E9FE: ;
    if (CMP_NE(MEM16(edi + 0xA), LO16(ebx))) goto loc_0030EA09; /* jne: not equal / not zero */

loc_0030EA04: ;
    if (TEST_Z(ecx, ecx)) goto loc_0030EA14; /* je: equal / zero */

loc_0030EA08: ;
    ecx--;

loc_0030EA09: ;
    (void)0; /* test eax, eax - flags set for next jcc */
    edi = eax;
    if (TEST_NZ(eax, eax)) goto loc_0030E9F4; /* jne: not equal / not zero */

loc_0030EA0F: ;
    goto loc_0030EAD6;

loc_0030EA14: ;
    xmm0 = MEMF(esi + 0x84); /* movss */
    eax = MEM32(0x59CA34);
    (void)0; /* test eax, eax - flags set for next jcc */
    MEMF(0x7FCB64) = xmm0; /* movss */
    xmm0 = MEMF(esi + 0x88); /* movss */
    MEMF(0x7FCB68) = xmm0; /* movss */
    xmm0 = MEMF(esi + 0x8C); /* movss */
    MEMF(0x7FCB6C) = xmm0; /* movss */
    xmm0 = MEMF(0x7FDD38); /* movss */
    MEMF(0x7FCB58) = xmm0; /* movss */
    xmm0 = MEMF(0x7FDD34); /* movss */
    MEMF(0x7FCB5C) = xmm0; /* movss */
    xmm0 = MEMF(0x7FDD30); /* movss */
    MEMF(0x7FCB60) = xmm0; /* movss */
    if (TEST_Z(eax, eax)) goto loc_0030EA85; /* je: equal / zero */

loc_0030EA7D: ;
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, 0);
    PUSH32(esp, esi);
    PUSH32(esp, 0); RECOMP_ICALL_SAFE(eax, _icall_esp); /* indirect call */
    }

loc_0030EA82: ;
    esp = esp + 8;

loc_0030EA85: ;
    ecx = MEM32(edi + 0x54);
    eax = MEM32(ecx + 0x24);
    if (TEST_Z(eax, eax)) goto loc_0030EAD6; /* je: equal / zero */

loc_0030EA8F: ;
    edx = MEM32(eax + 8);
    ebx = MEM32(edi + 0x58);
    edi = MEM32(edx + 0x14);
    if (TEST_Z(edi, edi)) goto loc_0030EAD6; /* je: equal / zero */

loc_0030EA9C: ;
    eax = esp + 0x24;
    PUSH32(esp, eax);
    PUSH32(esp, 0x638238);
    PUSH32(esp, 0); sub_0029CE70(); /* call 0x0029CE70 */

loc_0030EAAB: ;
    eax = MEM32(esp + 0x2C);
    esp = esp + 8;
    if (CMP_EQ(eax, 0xFFFFFFFFu)) goto loc_0030EAD6; /* je: equal / zero */

loc_0030EAB7: ;
    edx = MEM32(edi + 4);
    edi = MEM32(ebx + 0xC);
    ecx = eax + eax * 4;
    ecx = MEM32(edx + ecx * 4 + 8);
    eax = ecx;
    ecx = ecx & 7;
    edx = 0x80;
    eax = eax >> 3;
    edx = (uint32_t)((int32_t)edx >> LO8(ecx));
    MEM8(eax + edi) = MEM8(eax + edi) | LO8(edx);

loc_0030EAD6: ;
    ebx = MEM32(esp + 0xC);

loc_0030EADA: ;
    POP32(esp, edi);

loc_0030EADB: ;
    edx = MEM32(esp + 0x24);
    (void)0; /* test edx, edx - flags set for next jcc */
    xmm5 = MEMF(esp + 0x14); /* movss */
    xmm6 = MEMF(0x7F9F5C); /* movss */
    xmm7 = MEMF(0x648D14); /* movss */
    if (TEST_Z(edx, edx)) { sub_0030EB57(); return; } /* je: equal / zero */

loc_0030EAF9: ;
    xmm3 = MEMF(esi + 0xF0); /* movss */
    xmm2 = MEMF(esi + 0xF4); /* movss */
    (void)0; /* cmp ebp, edx - flags set for next jcc */
    eax = ebp;
    if (CMP_GE(ebp, edx)) eax = edx; /* cmovge */
    xmm0 = xmm7; /* movaps */
    xmm0 = xmm0 / xmm6; /* divss */
    xmm1 = (float)(int32_t)eax; /* cvtsi2ss */
    xmm0 = xmm0 * xmm1; /* mulss */
    xmm0 = xmm0 * MEMF(esp + 0xC); /* mulss */
    xmm1 = MEMF(esi + 0xEC); /* movss */
    xmm0 = xmm0 * xmm5; /* mulss */
    xmm1 = xmm1 * xmm0; /* mulss */
    xmm1 = xmm1 + MEMF(esi + 0xE0); /* addss */
    xmm3 = xmm3 * xmm0; /* mulss */
    xmm3 = xmm3 + MEMF(esi + 0xE4); /* addss */
    xmm2 = xmm2 * xmm0; /* mulss */
    xmm2 = xmm2 + MEMF(esi + 0xE8); /* addss */
    g_seh_ebp = ebp; sub_0030EB6F(); return; /* tail jmp 0x0030EB6F */

    #undef fp_push
    #undef fp_pop
    #undef fp_popp
    #undef fp_top
    #undef fp_st1
}

/**
 * sub_0030F030
 * Original: 0x0030F030 - 0x0030F04E (30 bytes, 8 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0030F030(void)
{
    uint32_t ebp;
    int _flags = 0; /* fallback flag var */
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_0030F030: ;
    eax = MEM32(0x7FDBF8);
    (void)0; /* test eax, eax - flags set for next jcc */
    ecx = MEM32(esp + 4);
    if (TEST_Z(eax, eax)) goto loc_0030F045; /* je: equal / zero */

loc_0030F03D: ;
    if (CMP_NE(MEM32(ecx + 0xA4), eax)) { sub_0030F04E(); return; } /* jne: not equal / not zero */

loc_0030F045: ;
    MEM32(esp + 4) = ecx;
    g_seh_ebp = ebp; sub_001CE0E0(); return; /* tail jmp 0x001CE0E0 */

}

/**
 * sub_0030F050
 * Original: 0x0030F050 - 0x0030F0E2 (146 bytes, 37 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0030F050(void)
{
    float xmm0, xmm1;
    double _fp_stack[8];
    int _fp_top = 0;
    #define fp_push(v) (_fp_stack[--_fp_top & 7] = (v))
    #define fp_pop() (_fp_top++)
    #define fp_popp() (fp_pop())
    #define fp_top() _fp_stack[_fp_top & 7]
    #define fp_st1() _fp_stack[(_fp_top + 1) & 7]

loc_0030F050: ;
    PUSH32(esp, ecx);
    xmm0 = MEMF(esi + 0x114); /* movss */
    fp_push(MEMF(esi + 0x110)); /* fld float */
    xmm0 = xmm0 * MEMF(0x648E18); /* mulss */
    MEMF(esp) = xmm0; /* movss */
    fp_push(MEMF(esp)); /* fld float */
    xmm1 = MEMF(esi + 0xD0); /* movss */
    /* FPU: fsin  */
    eax = esi + 0xEC;
    PUSH32(esp, ebx);
    ebx = eax;
    MEMF(eax + 4) = xmm1; /* movss */
    fp_st1() *= fp_top(); fp_pop(); /* fmul */
    MEMF(eax) = (float)fp_top(); fp_popp(); /* fstp */
    fp_push(MEMF(esp + 4)); /* fld float */
    /* FPU: fcos  */
    fp_st1() *= fp_top(); fp_pop(); /* fmul */
    MEMF(eax + 8) = (float)fp_top(); fp_popp(); /* fstp */
    /* fstp st(0) */
    PUSH32(esp, 0); sub_00428323(); /* call 0x00428323 */

loc_0030F09D: ;
    eax = MEM32(esi + 0x78);
    MEM32(esi + 0xE0) = eax;
    ecx = MEM32(esi + 0x7C);
    eax = MEM32(esp + 0xC);
    MEM32(esi + 0xE4) = ecx;
    edx = MEM32(esi + 0x80);
    eax = eax + 0xA0;
    MEM32(esi + 0xE8) = edx;
    MEM32(esi + 0xFC) = eax;
    SET_LO8(eax, MEM8(esp + 0x10));
    (void)0; /* test LO8(eax), LO8(eax) - flags set for next jcc */
    eax = MEM32(esi + 0x100);
    eax = eax | 1;
    POP32(esp, ebx);
    MEM32(esi + 0x100) = eax;
    POP32(esp, ecx);
    esp += 4; return; /* ret */

    #undef fp_push
    #undef fp_pop
    #undef fp_popp
    #undef fp_top
    #undef fp_st1
}

/**
 * sub_0030F0F0
 * Original: 0x0030F0F0 - 0x0030F130 (64 bytes, 10 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0030F0F0(void)
{
    float xmm0, xmm1, xmm2;

loc_0030F0F0: ;
    xmm0 = (float)(int32_t)MEM32(0x7FDBF8); /* cvtsi2ss */
    eax = MEM32(esp + 4);
    xmm1 = 0.0f; /* xorps self = zero */
    xmm0 = xmm0 * MEMF(0x648E54); /* mulss */
    xmm2 = MEMF(0x648D14); /* movss */
    MEMF(eax + 0x624) = xmm1; /* movss */
    MEMF(eax + 0x628) = xmm2; /* movss */
    MEMF(eax + 0x62C) = xmm1; /* movss */
    MEMF(eax + 0x630) = xmm0; /* movss */
    esp += 4; return; /* ret */

}

/**
 * sub_0030F130
 * Original: 0x0030F130 - 0x0030F1CA (154 bytes, 46 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0030F130(void)
{
    int _flags = 0; /* fallback flag var */

loc_0030F130: ;
    PUSH32(esp, ecx);
    if (CMP_NE(MEM32(esi + 0x64), 0x35)) goto loc_0030F1C8; /* jne: not equal / not zero */

loc_0030F13B: ;
    eax = MEM32(esi + 0x6AC);
    (void)0; /* test eax, eax - flags set for next jcc */
    PUSH32(esp, edi);
    edi = MEM32(esi + 0x5D4);
    if (TEST_NZ(eax, eax)) goto loc_0030F197; /* jne: not equal / not zero */

loc_0030F14C: ;
    eax = MEM32(esi + 0x4B0);
    ecx = MEM32(eax + 0x24);
    edx = MEM32(ecx + 0x18);
    eax = MEM32(edx + 0x14);
    eax = MEM32(eax + 0x10);
    PUSH32(esp, ebx);
    ecx = esp + 8;
    PUSH32(esp, ecx);
    PUSH32(esp, 1);
    PUSH32(esp, 0);
    ebx = 0x638200;
    PUSH32(esp, 0); sub_00415EC0(); /* call 0x00415EC0 */

loc_0030F172: ;
    esp = esp + 0xC;
    (void)0; /* test eax, eax - flags set for next jcc */
    POP32(esp, ebx);
    if (TEST_Z(eax, eax)) goto loc_0030F18D; /* je: equal / zero */

loc_0030F17A: ;
    eax = MEM32(esp + 4);
    if (TEST_Z(eax, eax)) goto loc_0030F18D; /* je: equal / zero */

loc_0030F182: ;
    eax = MEM32(eax + 8);
    MEM32(esi + 0x6AC) = eax;
    goto loc_0030F197;

loc_0030F18D: ;
    MEM32(esi + 0x6AC) = 0xFFFFFFFFu;

loc_0030F197: ;
    if (CMP_EQ(MEM32(esi + 0x6AC), 0xFFFFFFFFu)) goto loc_0030F1C7; /* je: equal / zero */

loc_0030F1A0: ;
    SET_LO8(ecx, MEM8(esp + 0xC));
    eax = MEM32(0x812A18);
    edx = 0; /* xor self */
    (void)0; /* test LO8(ecx), LO8(ecx) - flags set for next jcc */
    MEM32(0x812A18) = edi;
    ecx = MEM32(esi + 0x6AC);
    ecx = MEM32(ecx + 0x14);
    SET_LO8(edx, (TEST_Z(LO8(ecx), LO8(ecx))) ? 1 : 0); /* sete */
    MEM32(edi + ecx) = edx;
    MEM32(0x812A18) = eax;

loc_0030F1C7: ;
    POP32(esp, edi);

loc_0030F1C8: ;
    POP32(esp, ecx);
    esp += 4; return; /* ret */

}

/**
 * sub_0030F1D0
 * Original: 0x0030F1D0 - 0x0030F231 (97 bytes, 34 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0030F1D0(void)
{
    int _flags = 0; /* fallback flag var */

loc_0030F1D0: ;
    PUSH32(esp, esi);
    esi = MEM32(0x84A630);
    if (TEST_Z(esi, esi)) goto loc_0030F22F; /* je: equal / zero */

loc_0030F1DB: ;
    PUSH32(esp, edi);
    /* nop */

loc_0030F1E0: ;
    edi = MEM32(esi + 4);
    ecx = MEM32(esi);
    eax = edi;
    (void)0; /* test eax, eax - flags set for next jcc */
    MEM32(ecx + 4) = eax;
    if (TEST_Z(eax, eax)) goto loc_0030F1F0; /* je: equal / zero */

loc_0030F1EE: ;
    MEM32(eax) = ecx;

loc_0030F1F0: ;
    PUSH32(esp, esi);
    MEM32(esi) = 0;
    MEM32(esi + 4) = 0;
    PUSH32(esp, 0); sub_0042C911(); /* call 0x0042C911 */

loc_0030F203: ;
    if (TEST_NZ(eax, eax)) goto loc_0030F228; /* jne: not equal / not zero */

loc_0030F207: ;
    eax = MEM32(0x7FA490);
    edx = MEM32(0x7FA4B4);
    eax++;
    edx--;
    PUSH32(esp, esi);
    MEM32(0x7FA490) = eax;
    MEM32(0x7FA4B4) = edx;
    PUSH32(esp, 0); sub_003E7080(); /* call 0x003E7080 */

loc_0030F225: ;
    esp = esp + 4;

loc_0030F228: ;
    (void)0; /* test edi, edi - flags set for next jcc */
    esi = edi;
    if (TEST_NZ(edi, edi)) goto loc_0030F1E0; /* jne: not equal / not zero */

loc_0030F22E: ;
    POP32(esp, edi);

loc_0030F22F: ;
    POP32(esp, esi);
    esp += 4; return; /* ret */

}

/**
 * sub_0030F240
 * Original: 0x0030F240 - 0x0030F320 (224 bytes, 66 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0030F240(void)
{
    int _flags = 0; /* fallback flag var */
    float xmm0;

loc_0030F240: ;
    eax = MEM32(0x84A19C);
    if (TEST_NZ(eax, eax)) goto loc_0030F24E; /* jne: not equal / not zero */

loc_0030F249: ;
    PUSH32(esp, 0); sub_002AED70(); /* call 0x002AED70 */

loc_0030F24E: ;
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
    if (TEST_Z(esi, esi)) goto loc_0030F298; /* je: equal / zero */

loc_0030F276: ;
    if (CMP_B(MEM32(esi + 0x80), 0x28)) goto loc_0030F298; /* jb: below (unsigned <) */

loc_0030F27F: ;
    ecx = 0x10;
    PUSH32(esp, 0); sub_003E62A0(); /* call 0x003E62A0 */

loc_0030F289: ;
    PUSH32(esp, 0x28);
    PUSH32(esp, edi);
    PUSH32(esp, 0); sub_003E6BD0(); /* call 0x003E6BD0 */

loc_0030F291: ;
    esp = esp + 8;
    if (TEST_NZ(eax, eax)) goto loc_0030F2B5; /* jne: not equal / not zero */

loc_0030F298: ;
    esi = MEM32(0x84A184);
    ecx = 0x10;
    edi = esi;
    PUSH32(esp, 0); sub_003E62A0(); /* call 0x003E62A0 */

loc_0030F2AA: ;
    PUSH32(esp, 0x28);
    PUSH32(esp, edi);
    PUSH32(esp, 0); sub_003E6BD0(); /* call 0x003E6BD0 */

loc_0030F2B2: ;
    esp = esp + 8;

loc_0030F2B5: ;
    ecx = MEM32(esp + 0xC);
    edx = MEM32(esp + 0x14);
    xmm0 = MEMF(esp + 0x10); /* movss */
    MEM32(eax + 8) = ecx;
    ecx = MEM32(esp + 0x18);
    MEM32(eax + 0x14) = ecx;
    ecx = MEM32(esp + 0x20);
    MEM32(eax + 0x10) = edx;
    edx = MEM32(esp + 0x1C);
    MEM32(eax + 0x1C) = ecx;
    ecx = MEM32(esp + 0x28);
    MEM32(eax + 0x18) = edx;
    edx = MEM32(esp + 0x24);
    MEM32(eax + 0x24) = ecx;
    MEMF(eax + 0xC) = xmm0; /* movss */
    MEM32(eax + 0x20) = edx;
    edx = MEM32(0x84A630);
    (void)0; /* test edx, edx - flags set for next jcc */
    ecx = 0x84A62C;
    if (TEST_Z(edx, edx)) goto loc_0030F311; /* je: equal / zero */

loc_0030F300: ;
    edx = 0x84A630;

loc_0030F305: ;
    ecx = MEM32(edx);
    esi = MEM32(ecx + 4);
    (void)0; /* test esi, esi - flags set for next jcc */
    edx = ecx + 4;
    if (TEST_NZ(esi, esi)) goto loc_0030F305; /* jne: not equal / not zero */

loc_0030F311: ;
    MEM32(ecx + 4) = eax;
    POP32(esp, edi);
    MEM32(eax) = ecx;
    MEM32(eax + 4) = 0;
    POP32(esp, esi);
    esp += 4; return; /* ret */

}

/**
 * sub_0030F320
 * Original: 0x0030F320 - 0x0030F402 (226 bytes, 66 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0030F320(void)
{
    uint32_t ebp;
    int _flags = 0; /* fallback flag var */
    float xmm0, xmm1;
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_0030F320: ;
    esp = esp - 8;
    PUSH32(esp, esi);
    esi = MEM32(0x84A630);
    if (TEST_Z(esi, esi)) goto loc_0030F3FD; /* je: equal / zero */

loc_0030F332: ;
    PUSH32(esp, ebx);
    PUSH32(esp, ebp);
    PUSH32(esp, edi);

loc_0030F335: ;
    eax = MEM32(esi + 4);
    ecx = MEM32(esp + 0x1C);
    MEM32(esp + 0x14) = eax;
    eax = MEM32(esi + 0x10);
    (void)0; /* cmp eax, ecx - flags set for next jcc */
    MEM32(esp + 0x10) = eax;
    if (CMP_NE(eax, ecx)) goto loc_0030F3EE; /* jne: not equal / not zero */

loc_0030F34F: ;
    xmm0 = MEMF(esi + 0xC); /* movss */
    xmm0 = xmm0 - MEMF(0x7FA21C); /* subss */
    xmm1 = 0.0f; /* xorps self = zero */
    /* comiss xmm1, xmm0 - sets EFLAGS */
    MEMF(esi + 0xC) = xmm0; /* movss */
    if ((xmm1 < xmm0)) goto loc_0030F3EE; /* jb: below (unsigned <) */

loc_0030F36D: ;
    ecx = MEM32(esi + 0x20);
    eax = MEM32(esi + 0x24);
    edx = MEM32(esi + 0x1C);
    edi = MEM32(esi + 0x18);
    ebp = MEM32(esi + 0x14);
    ebx = MEM32(esi + 8);
    MEM32(0x7FDBEC) = ecx;
    ecx = MEM32(esp + 0x10);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, ecx);
    MEM32(0x7FDBF8) = ebp;
    MEM32(0x7FDBF4) = edi;
    MEM32(0x7FDBF0) = edx;
    MEM32(0x7FDBE8) = eax;
    PUSH32(esp, 0); RECOMP_ICALL_SAFE(ebx, _icall_esp); /* indirect call */
    }

loc_0030F3A3: ;
    eax = MEM32(esi + 4);
    ecx = MEM32(esi);
    esp = esp + 4;
    (void)0; /* test eax, eax - flags set for next jcc */
    MEM32(ecx + 4) = eax;
    if (TEST_Z(eax, eax)) goto loc_0030F3B4; /* je: equal / zero */

loc_0030F3B2: ;
    MEM32(eax) = ecx;

loc_0030F3B4: ;
    PUSH32(esp, esi);
    MEM32(esi) = 0;
    MEM32(esi + 4) = 0;
    PUSH32(esp, 0); sub_0042C911(); /* call 0x0042C911 */

loc_0030F3C7: ;
    if (TEST_NZ(eax, eax)) goto loc_0030F3EE; /* jne: not equal / not zero */

loc_0030F3CB: ;
    edi = MEM32(0x7FA490);
    edx = MEM32(0x7FA4B4);
    edi++;
    edx--;
    PUSH32(esp, esi);
    MEM32(0x7FA490) = edi;
    MEM32(0x7FA4B4) = edx;
    PUSH32(esp, 0); sub_003E7080(); /* call 0x003E7080 */

loc_0030F3EB: ;
    esp = esp + 4;

loc_0030F3EE: ;
    esi = MEM32(esp + 0x14);
    if (TEST_NZ(esi, esi)) goto loc_0030F335; /* jne: not equal / not zero */

loc_0030F3FA: ;
    POP32(esp, edi);
    POP32(esp, ebp);
    POP32(esp, ebx);

loc_0030F3FD: ;
    POP32(esp, esi);
    esp = esp + 8;
    esp += 4; return; /* ret */

}

/**
 * sub_0030F410
 * Original: 0x0030F410 - 0x0030F476 (102 bytes, 37 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0030F410(void)
{
    uint32_t ebp;
    int _flags = 0; /* fallback flag var */
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_0030F410: ;
    PUSH32(esp, ebp);
    ebp = MEM32(esp + 8);
    PUSH32(esp, esi);
    esi = MEM32(0x84A630);
    if (TEST_Z(esi, esi)) goto loc_0030F473; /* je: equal / zero */

loc_0030F420: ;
    PUSH32(esp, edi);

loc_0030F421: ;
    (void)0; /* cmp MEM32(esi + 0x10), ebp - flags set for next jcc */
    edi = MEM32(esi + 4);
    if (CMP_NE(MEM32(esi + 0x10), ebp)) goto loc_0030F46C; /* jne: not equal / not zero */

loc_0030F429: ;
    (void)0; /* test edi, edi - flags set for next jcc */
    eax = MEM32(esi);
    MEM32(eax + 4) = edi;
    if (TEST_Z(edi, edi)) goto loc_0030F434; /* je: equal / zero */

loc_0030F432: ;
    MEM32(edi) = eax;

loc_0030F434: ;
    PUSH32(esp, esi);
    MEM32(esi) = 0;
    MEM32(esi + 4) = 0;
    PUSH32(esp, 0); sub_0042C911(); /* call 0x0042C911 */

loc_0030F447: ;
    if (TEST_NZ(eax, eax)) goto loc_0030F46C; /* jne: not equal / not zero */

loc_0030F44B: ;
    eax = MEM32(0x7FA490);
    edx = MEM32(0x7FA4B4);
    eax++;
    edx--;
    PUSH32(esp, esi);
    MEM32(0x7FA490) = eax;
    MEM32(0x7FA4B4) = edx;
    PUSH32(esp, 0); sub_003E7080(); /* call 0x003E7080 */

loc_0030F469: ;
    esp = esp + 4;

loc_0030F46C: ;
    (void)0; /* test edi, edi - flags set for next jcc */
    esi = edi;
    if (TEST_NZ(edi, edi)) goto loc_0030F421; /* jne: not equal / not zero */

loc_0030F472: ;
    POP32(esp, edi);

loc_0030F473: ;
    POP32(esp, esi);
    POP32(esp, ebp);
    esp += 4; return; /* ret */

}

/**
 * sub_0030F480
 * Original: 0x0030F480 - 0x0030F4C9 (73 bytes, 24 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0030F480(void)
{
    int _flags = 0; /* fallback flag var */

loc_0030F480: ;
    eax = MEM32(esp + 4);
    esp = esp - 8;
    PUSH32(esp, esi);
    PUSH32(esp, edi);
    PUSH32(esp, eax);
    esi = esp + 0x10;
    edi = esp + 0xC;
    PUSH32(esp, 0); sub_0001B2C0(); /* call 0x0001B2C0 */

loc_0030F497: ;
    esp = esp + 4;
    (void)0; /* test LO8(eax), LO8(eax) - flags set for next jcc */
    POP32(esp, edi);
    POP32(esp, esi);
    if (TEST_Z(LO8(eax), LO8(eax))) goto loc_0030F4C5; /* je: equal / zero */

loc_0030F4A0: ;
    ecx = MEM32(esp);
    edx = MEM32(0x84A5F8);
    eax = MEM32(esp + 4);
    PUSH32(esp, ecx);
    ecx = ZX8(MEM8(0x7FDC00));
    ecx = (uint32_t)((int32_t)ecx * (int32_t)0x6D0);
    ecx = ecx + edx;
    PUSH32(esp, 0); sub_0030F4D0(); /* call 0x0030F4D0 */

loc_0030F4C2: ;
    esp = esp + 4;

loc_0030F4C5: ;
    esp = esp + 8;
    esp += 4; return; /* ret */

}

/**
 * sub_0030F4D0
 * Original: 0x0030F4D0 - 0x0030F568 (152 bytes, 60 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0030F4D0(void)
{
    uint32_t ebp;
    int _flags = 0; /* fallback flag var */
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_0030F4D0: ;
    PUSH32(esp, ebp);
    ebp = MEM32(esp + 8);
    PUSH32(esp, esi);
    PUSH32(esp, edi);
    edi = ecx;
    (void)0; /* test edi, edi - flags set for next jcc */
    esi = eax;
    if (TEST_Z(edi, edi)) goto loc_0030F564; /* je: equal / zero */

loc_0030F4E3: ;
    eax = edi;
    PUSH32(esp, 0); sub_002CF120(); /* call 0x002CF120 */

loc_0030F4EA: ;
    if (CMP_LE(eax & eax, 0)) goto loc_0030F54D; /* jle: less or equal (signed <=) */

loc_0030F4EE: ;
    if (TEST_NZ(ebp, ebp)) goto loc_0030F510; /* jne: not equal / not zero */

loc_0030F4F2: ;
    PUSH32(esp, 0xA);
    PUSH32(esp, ebp);
    MEM32(0x7FDC0C) = ebp;
    MEM16(edi + 0x144) = 0x14;
    PUSH32(esp, 0); sub_002CED40(); /* call 0x002CED40 */

loc_0030F509: ;
    esp = esp + 8;
    POP32(esp, edi);
    POP32(esp, esi);
    POP32(esp, ebp);
    esp += 4; return; /* ret */

loc_0030F510: ;
    (void)0; /* test esi, esi - flags set for next jcc */
    MEM16(edi + 0x144) = 0xFFFE;
    if (TEST_Z(esi, esi)) goto loc_0030F53F; /* je: equal / zero */

loc_0030F51D: ;
    if (CMP_LE(esi, 0x14)) goto loc_0030F535; /* jle: less or equal (signed <=) */

loc_0030F522: ;
    esi = 0x14;
    PUSH32(esp, esi);
    PUSH32(esp, ebp);
    PUSH32(esp, 0); sub_002CED40(); /* call 0x002CED40 */

loc_0030F52E: ;
    esp = esp + 8;
    POP32(esp, edi);
    POP32(esp, esi);
    POP32(esp, ebp);
    esp += 4; return; /* ret */

loc_0030F535: ;
    if (CMP_GE(esi, 1)) goto loc_0030F53F; /* jge: greater or equal (signed >=) */

loc_0030F53A: ;
    esi = 1;

loc_0030F53F: ;
    PUSH32(esp, esi);
    PUSH32(esp, ebp);
    PUSH32(esp, 0); sub_002CED40(); /* call 0x002CED40 */

loc_0030F546: ;
    esp = esp + 8;
    POP32(esp, edi);
    POP32(esp, esi);
    POP32(esp, ebp);
    esp += 4; return; /* ret */

loc_0030F54D: ;
    eax = 0; /* xor self */
    (void)0; /* test ebp, ebp - flags set for next jcc */
    SET_LO8(eax, (TEST_NZ(ebp, ebp)) ? 1 : 0); /* setne */
    (void)0; /* test ebp, ebp - flags set for next jcc */
    MEM32(0x7FDC0C) = eax;
    if (TEST_NZ(ebp, ebp)) goto loc_0030F564; /* jne: not equal / not zero */

loc_0030F55D: ;
    MEM8(edi + 0x3FF) = 0;

loc_0030F564: ;
    POP32(esp, edi);
    POP32(esp, esi);
    POP32(esp, ebp);
    esp += 4; return; /* ret */

}

/**
 * sub_0030F570
 * Original: 0x0030F570 - 0x0030F5A9 (57 bytes, 24 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0030F570(void)
{
    int _flags = 0; /* fallback flag var */

loc_0030F570: ;
    PUSH32(esp, esi);
    esi = eax;
    eax = ZX8(MEM8(esi + 0x59E2E4));
    PUSH32(esp, edi);
    edi = MEM32(edx);
    ecx = edi + eax;
    if (CMP_GE(ecx, 0x28)) goto loc_0030F5A6; /* jge: greater or equal (signed >=) */

loc_0030F585: ;
    esi = MEM32(esi * 4 + 0x59E2AC);
    PUSH32(esp, ebx);
    ebx = MEM32(esp + 0x10);
    edi = edi + ebx;
    ecx = eax;
    ebx = ecx;
    ecx = ecx >> 2;
    memcpy((void*)XBOX_PTR(edi), (void*)XBOX_PTR(esi), ecx * 4);
    esi += ecx * 4; edi += ecx * 4; ecx = 0; /* rep movsd */
    ecx = ebx;
    ecx = ecx & 3;
    memcpy((void*)XBOX_PTR(edi), (void*)XBOX_PTR(esi), ecx);
    esi += ecx; edi += ecx; ecx = 0; /* rep movsb */
    MEM32(edx) = MEM32(edx) + eax;
    POP32(esp, ebx);

loc_0030F5A6: ;
    POP32(esp, edi);
    POP32(esp, esi);
    esp += 4; return; /* ret */

}

/**
 * sub_0030F5B0
 * Original: 0x0030F5B0 - 0x0030F651 (161 bytes, 69 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0030F5B0(void)
{
    uint32_t ebp;
    int _flags = 0; /* fallback flag var */
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_0030F5B0: ;
    esp = esp - 8;
    PUSH32(esp, ebx);
    PUSH32(esp, ebp);
    ebp = MEM32(esp + 0x14);
    PUSH32(esp, edi);
    edi = 0; /* xor self */
    (void)0; /* test ebp, ebp - flags set for next jcc */
    MEM32(esi) = 0;
    if (CMP_LE(ebp & ebp, 0)) goto loc_0030F60C; /* jle: less or equal (signed <=) */

loc_0030F5C6: ;
    ebx = MEM32(esi);
    ecx = 0; /* xor self */
    if (CMP_LE(ebx & ebx, 0)) goto loc_0030F5E1; /* jle: less or equal (signed <=) */

loc_0030F5CE: ;
    SET_LO8(edx, MEM8(edi + eax));

loc_0030F5D1: ;
    ebp = MEM32(esp + 0x1C);
    if (CMP_EQ(MEM8(ecx + ebp), LO8(edx))) goto loc_0030F5FE; /* je: equal / zero */

loc_0030F5DA: ;
    ebp = MEM32(esi);
    ecx++;
    if (CMP_L(ecx, ebp)) goto loc_0030F5D1; /* jl: less (signed <) */

loc_0030F5E1: ;
    SET_LO8(edx, MEM8(edi + eax));
    ecx = 0; /* xor self */

loc_0030F5E6: ;
    ebp = MEM32(esp + 0x20);
    if (CMP_EQ(MEM8(ecx + ebp), LO8(edx))) goto loc_0030F5FE; /* je: equal / zero */

loc_0030F5EF: ;
    ecx++;
    if (CMP_L(ecx, 5)) goto loc_0030F5E6; /* jl: less (signed <) */

loc_0030F5F5: ;
    ecx = MEM32(esp + 0x1C);
    MEM8(ebx + ecx) = LO8(edx);
    MEM32(esi) = MEM32(esi) + 1;

loc_0030F5FE: ;
    ebp = MEM32(esp + 0x18);
    edi++;
    if (CMP_L(edi, ebp)) goto loc_0030F5C6; /* jl: less (signed <) */

loc_0030F607: ;
    if (CMP_NE(MEM32(esi), 0)) goto loc_0030F648; /* jne: not equal / not zero */

loc_0030F60C: ;
    ebx = 0; /* xor self */
    edi = 0; /* xor self */

loc_0030F610: ;
    edx = MEM32(esp + 0x20);
    SET_LO8(edx, MEM8(edi + edx));
    if (TEST_Z(LO8(edx), LO8(edx))) goto loc_0030F632; /* je: equal / zero */

loc_0030F61B: ;
    ecx = 0; /* xor self */
    if (CMP_LE(ebp & ebp, 0)) goto loc_0030F632; /* jle: less or equal (signed <=) */

loc_0030F621: ;
    if (CMP_EQ(LO8(edx), MEM8(ecx + eax))) goto loc_0030F62D; /* je: equal / zero */

loc_0030F626: ;
    ecx++;
    if (CMP_L(ecx, ebp)) goto loc_0030F621; /* jl: less (signed <) */

loc_0030F62B: ;
    goto loc_0030F632;

loc_0030F62D: ;
    MEM8(esp + ebx + 0xC) = LO8(edx);
    ebx++;

loc_0030F632: ;
    edi++;
    if (CMP_L(edi, 5)) goto loc_0030F610; /* jl: less (signed <) */

loc_0030F638: ;
    if (TEST_NZ(ebx, ebx)) { sub_0030F651(); return; } /* jne: not equal / not zero */

loc_0030F63C: ;
    eax = MEM32(esp + 0x1C);
    MEM8(eax) = LO8(ebx);
    MEM32(esi) = 1;

loc_0030F648: ;
    POP32(esp, edi);
    POP32(esp, ebp);
    eax = 0; /* xor self */
    POP32(esp, ebx);
    esp = esp + 8;
    esp += 4; return; /* ret */

}

/**
 * sub_0030F690
 * Original: 0x0030F690 - 0x0030F6C9 (57 bytes, 21 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0030F690(void)
{
    int _flags = 0; /* fallback flag var */

loc_0030F690: ;
    (void)0; /* cmp LO8(ecx), 0x11 - flags set for next jcc */
    SET_LO8(edx, MEM8(eax + 3));
    MEM8(eax + 4) = LO8(edx);
    SET_LO8(edx, MEM8(eax + 2));
    MEM8(eax + 3) = LO8(edx);
    SET_LO8(edx, MEM8(eax + 1));
    MEM8(eax + 2) = LO8(edx);
    SET_LO8(edx, MEM8(eax));
    MEM8(eax + 1) = LO8(edx);
    MEM8(eax) = LO8(ecx);
    if (CMP_NE(LO8(ecx), 0x11)) { sub_0030F6C9(); return; } /* jne: not equal / not zero */

loc_0030F6AE: ;
    SET_LO8(ecx, MEM8(eax + 3));
    SET_LO8(edx, MEM8(eax + 2));
    MEM8(eax + 4) = LO8(ecx);
    SET_LO8(ecx, MEM8(eax + 1));
    MEM8(eax + 3) = LO8(edx);
    SET_LO8(edx, MEM8(eax));
    MEM8(eax + 2) = LO8(ecx);
    MEM8(eax + 1) = LO8(edx);
    MEM8(eax) = 0x12;
    esp += 4; return; /* ret */

}

/**
 * sub_0030F6F0
 * Original: 0x0030F6F0 - 0x0030F740 (80 bytes, 29 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0030F6F0(void)
{
    int _flags = 0; /* fallback flag var */

loc_0030F6F0: ;
    PUSH32(esp, esi);
    esi = MEM32(eax + 0x568);
    SET_LO8(eax, MEM8(esi + 0x7C));
    esi = esi + 0x70;
    if (TEST_Z(LO8(eax), LO8(eax))) goto loc_0030F736; /* je: equal / zero */

loc_0030F701: ;
    if (CMP_NE(LO8(eax), 1)) goto loc_0030F71A; /* jne: not equal / not zero */

loc_0030F705: ;
    PUSH32(esp, 0); sub_003E2480(); /* call 0x003E2480 */

loc_0030F70A: ;
    if (CMP_B(MEM8(esi + 0xD), 3)) goto loc_0030F73E; /* jb: below (unsigned <) */

loc_0030F710: ;
    MEM8(esi + 0xC) = 2;
    MEM8(esi + 0xD) = 0;
    POP32(esp, esi);
    esp += 4; return; /* ret */

loc_0030F71A: ;
    PUSH32(esp, 0); sub_003E2480(); /* call 0x003E2480 */

loc_0030F71F: ;
    eax = eax & 0x80000003u;
    if (((int32_t)eax >= 0)) goto loc_0030F72B; /* jns: not sign (positive) */

loc_0030F726: ;
    eax--;
    eax = eax | 0xFFFFFFFCu;
    eax++;

loc_0030F72B: ;
    ecx = ZX8(MEM8(esi + 0xD));
    eax = eax + 8;
    if (CMP_L(ecx, eax)) goto loc_0030F73E; /* jl: less (signed <) */

loc_0030F736: ;
    MEM8(esi + 0xC) = 1;
    MEM8(esi + 0xD) = 0;

loc_0030F73E: ;
    POP32(esp, esi);
    esp += 4; return; /* ret */

}

/**
 * sub_0030F740
 * Original: 0x0030F740 - 0x0030FAC3 (899 bytes, 241 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0030F740(void)
{
    uint32_t ebp;
    int _flags = 0; /* fallback flag var */
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_0030F740: ;
    esp = esp - 0x58;
    PUSH32(esp, ebx);
    PUSH32(esp, ebp);
    PUSH32(esp, esi);
    esi = eax;
    ecx = MEM32(esi + 0x568);
    SET_LO8(edx, MEM8(esi + 0x24E));
    eax = 0; /* xor self */
    (void)0; /* test LO8(edx), LO8(edx) - flags set for next jcc */
    ebp = ecx + 0x70;
    PUSH32(esp, edi);
    MEM32(esp + 0x14) = ebp;
    MEM32(esp + 0x10) = eax;
    if (TEST_Z(LO8(edx), LO8(edx))) goto loc_0030F783; /* je: equal / zero */

loc_0030F766: ;
    SET_LO8(ecx, MEM8(esi + 0x24D));
    if (CMP_AE(LO8(ecx), 0x24)) goto loc_0030FA94; /* jae: above or equal (unsigned >=) */

loc_0030F775: ;
    MEM8(esp + 0x18) = LO8(ecx);
    eax = 1;
    goto loc_0030FA94;

loc_0030F783: ;
    SET_LO8(ebx, MEM8(0x7FDC60));
    if (TEST_Z(LO8(ebx), 2)) goto loc_0030F7A4; /* je: equal / zero */

loc_0030F78E: ;
    MEM8(esp + 0x18) = 3;
    eax = 1;
    MEM8(0x7FDC60) = 0;
    goto loc_0030FA94;

loc_0030F7A4: ;
    if (CMP_EQ(MEM16(ecx + 0x80), LO16(eax))) goto loc_0030F803; /* je: equal / zero */

loc_0030F7AD: ;
    if (CMP_NE(MEM32(ecx + 0xA0), eax)) goto loc_0030F803; /* jne: not equal / not zero */

loc_0030F7B5: ;
    edi = ZX16(MEM16(ebp + 2));
    edx = (int32_t)MEMF(0x7F9F5C); /* cvttss2si */
    edx = edx << 1;
    if (CMP_LE(edi, edx)) goto loc_0030F7F0; /* jle: less or equal (signed <=) */

loc_0030F7C7: ;
    MEM16(ecx + 0x80) = LO16(eax);
    MEM16(ebp + 2) = LO16(eax);
    eax = esi;
    ebx = 0xC;
    MEM8(ebp + 0xC) = 0;
    PUSH32(esp, 0); sub_00310BE0(); /* call 0x00310BE0 */

loc_0030F7E2: ;
    MEM8(esp + 0x18) = LO8(ebx);
    eax = 1;
    goto loc_0030FA94;

loc_0030F7F0: ;
    ebx = 0xB;
    MEM8(esp + 0x18) = LO8(ebx);
    eax = 1;
    goto loc_0030FA94;

loc_0030F803: ;
    if (CMP_AE(MEM16(esi + 0x3AE), 2)) goto loc_0030F81C; /* jae: above or equal (unsigned >=) */

loc_0030F80D: ;
    MEM8(esp + 0x18) = 0;
    eax = 1;
    goto loc_0030FA94;

loc_0030F81C: ;
    PUSH32(esp, 0xFFFFFFFFu);
    PUSH32(esp, 0xFFFFFFFFu);
    PUSH32(esp, eax);
    edx = edx | 0xFFFFFFFFu;
    ecx = 0; /* xor self */
    eax = esi;
    PUSH32(esp, 0); sub_0018DF00(); /* call 0x0018DF00 */

loc_0030F82D: ;
    esp = esp + 0xC;
    if (TEST_Z(LO8(eax), LO8(eax))) goto loc_0030F843; /* je: equal / zero */

loc_0030F834: ;
    MEM8(esp + 0x18) = 0;
    eax = 1;
    goto loc_0030FA94;

loc_0030F843: ;
    eax = ZX8(MEM8(ebp + 0xC));
    PUSH32(esp, 0); sub_0030FCD0(); /* call 0x0030FCD0 */

loc_0030F84C: ;
    ecx = ZX16(MEM16(ebp + 2));
    if (CMP_L(ecx, eax)) goto loc_0030F80D; /* jl: less (signed <) */

loc_0030F854: ;
    eax = esi;
    PUSH32(esp, 0); sub_0030F6F0(); /* call 0x0030F6F0 */

loc_0030F85B: ;
    ebp = ebp | 0xFFFFFFFFu;
    if (TEST_Z(MEM8(esi + 0x541), 2)) goto loc_0030F87B; /* je: equal / zero */

loc_0030F867: ;
    ebp = 3;
    MEM32(esp + 0x10) = 0;
    eax = ebp;
    goto loc_0030FA7B;

loc_0030F87B: ;
    ecx = MEM32(esi + 0x568);
    edx = MEM32(ecx + 0xA0);
    eax = edx;
    PUSH32(esp, 0); sub_00301050(); /* call 0x00301050 */

loc_0030F88E: ;
    if (TEST_Z(LO8(eax), LO8(eax))) goto loc_0030F8B4; /* je: equal / zero */

loc_0030F892: ;
    SET_LO8(eax, MEM8(ecx + 0xB1));
    if (TEST_NZ(LO8(eax), LO8(eax))) goto loc_0030FA30; /* jne: not equal / not zero */

loc_0030F8A0: ;
    ebp = 6;
    MEM32(esp + 0x10) = 0;
    eax = ebp;
    goto loc_0030FA7B;

loc_0030F8B4: ;
    eax = edx;
    PUSH32(esp, 0); sub_00301110(); /* call 0x00301110 */

loc_0030F8BB: ;
    if (TEST_Z(LO8(eax), LO8(eax))) goto loc_0030F8E0; /* je: equal / zero */

loc_0030F8BF: ;
    SET_LO8(ebx, MEM8(ecx + 0xB1));
    edx = 0; /* xor self */
    (void)0; /* test LO8(ebx), LO8(ebx) - flags set for next jcc */
    SET_LO8(edx, (TEST_NZ(LO8(ebx), LO8(ebx))) ? 1 : 0); /* setne */
    MEM32(esp + 0x10) = 0;
    edx = edx + 0xC;
    ebp = edx;
    eax = ebp;
    goto loc_0030FA7B;

loc_0030F8E0: ;
    eax = edx;
    eax = eax & 0xFFFFFF7Fu;
    if (CMP_NE(eax, 0x23)) goto loc_0030F900; /* jne: not equal / not zero */

loc_0030F8EC: ;
    ebp = 0xA;
    MEM32(esp + 0x10) = 0;
    eax = ebp;
    goto loc_0030FA7B;

loc_0030F900: ;
    eax = edx;
    PUSH32(esp, 0); sub_00301090(); /* call 0x00301090 */

loc_0030F907: ;
    if (TEST_Z(LO8(eax), LO8(eax))) goto loc_0030F91F; /* je: equal / zero */

loc_0030F90B: ;
    ebp = 0xB;
    MEM32(esp + 0x10) = 0;
    eax = ebp;
    goto loc_0030FA7B;

loc_0030F91F: ;
    SET_LO8(edx, MEM8(esi + 0x10B));
    edi = 0; /* xor self */
    if (TEST_Z(LO8(edx), LO8(edx))) goto loc_0030F961; /* je: equal / zero */

loc_0030F92B: ;
    eax = MEM32(0x847200);
    if (TEST_Z(eax, eax)) goto loc_0030F961; /* je: equal / zero */

loc_0030F934: ;
    ebx = 0x17;
    /* nop */

loc_0030F940: ;
    (void)0; /* cmp MEM8(eax), LO8(edx) - flags set for next jcc */
    ecx = MEM32(eax + 0xE0);
    if (CMP_NE(MEM8(eax), LO8(edx))) goto loc_0030F955; /* jne: not equal / not zero */

loc_0030F94A: ;
    if (CMP_NE(MEM16(eax + 0xA), LO16(ebx))) goto loc_0030F955; /* jne: not equal / not zero */

loc_0030F950: ;
    if (TEST_Z(edi, edi)) goto loc_0030F986; /* je: equal / zero */

loc_0030F954: ;
    edi--;

loc_0030F955: ;
    (void)0; /* test ecx, ecx - flags set for next jcc */
    eax = ecx;
    if (TEST_NZ(ecx, ecx)) goto loc_0030F940; /* jne: not equal / not zero */

loc_0030F95B: ;
    SET_LO8(ebx, MEM8(0x7FDC60));

loc_0030F961: ;
    eax = MEM32(0x7FA1F8);
    if (CMP_NE(eax, 0x31)) goto loc_0030F99A; /* jne: not equal / not zero */

loc_0030F96B: ;
    ebp = ZX8(LO8(ebx));
    ebp = ebp & 4;
    ebp = ebp | 0x20;
    ebp = ebp >> 2;
    MEM32(esp + 0x10) = 0;
    eax = ebp;
    goto loc_0030FA7B;

loc_0030F986: ;
    ebp = 7;
    MEM32(esp + 0x10) = 0;
    eax = ebp;
    goto loc_0030FA7B;

loc_0030F99A: ;
    if (CMP_EQ(MEM32(esi + 0x68), 0x96)) goto loc_0030F867; /* je: equal / zero */

loc_0030F9A7: ;
    if (CMP_EQ(eax, 0x10)) goto loc_0030F867; /* je: equal / zero */

loc_0030F9B0: ;
    if (CMP_EQ(eax, 0x1B)) goto loc_0030F867; /* je: equal / zero */

loc_0030F9B9: ;
    if (CMP_EQ(eax, 0x1E)) goto loc_0030F867; /* je: equal / zero */

loc_0030F9C2: ;
    if (CMP_EQ(eax, 0x26)) goto loc_0030F867; /* je: equal / zero */

loc_0030F9CB: ;
    if (CMP_EQ(eax, 0x2F)) goto loc_0030F867; /* je: equal / zero */

loc_0030F9D4: ;
    if (CMP_EQ(eax, 0xE)) goto loc_0030F867; /* je: equal / zero */

loc_0030F9DD: ;
    if (CMP_EQ(eax, 0x28)) goto loc_0030F867; /* je: equal / zero */

loc_0030F9E6: ;
    if (CMP_EQ(eax, 0x23)) goto loc_0030F867; /* je: equal / zero */

loc_0030F9EF: ;
    if (CMP_EQ(eax, 0x1C)) goto loc_0030F867; /* je: equal / zero */

loc_0030F9F8: ;
    if (CMP_EQ(eax, 0x36)) goto loc_0030F867; /* je: equal / zero */

loc_0030FA01: ;
    if (CMP_EQ(eax, 0x3A)) goto loc_0030F867; /* je: equal / zero */

loc_0030FA0A: ;
    if (TEST_Z(LO8(ebx), LO8(ebx))) goto loc_0030FA30; /* je: equal / zero */

loc_0030FA0E: ;
    if (TEST_Z(LO8(ebx), 1)) goto loc_0030FA18; /* je: equal / zero */

loc_0030FA13: ;
    ebp = 5;

loc_0030FA18: ;
    (void)0; /* cmp ebp, 0xFFFFFFFFu - flags set for next jcc */
    MEM8(0x7FDC60) = 0;
    if (CMP_EQ(ebp, 0xFFFFFFFFu)) goto loc_0030FA30; /* je: equal / zero */

loc_0030FA24: ;
    MEM32(esp + 0x10) = 0;
    eax = ebp;
    goto loc_0030FA7B;

loc_0030FA30: ;
    edi = MEM32(esp + 0x14);
    if (CMP_NE(MEM8(edi + 0xC), 1)) goto loc_0030FA46; /* jne: not equal / not zero */

loc_0030FA3A: ;
    edx = esp + 0x18;
    PUSH32(esp, edx);
    eax = 1;
    goto loc_0030FA80;

loc_0030FA46: ;
    eax = esp + 0x18;
    PUSH32(esp, eax);
    eax = 2;
    edx = esp + 0x14;
    PUSH32(esp, 0); sub_0030F570(); /* call 0x0030F570 */

loc_0030FA59: ;
    SET_LO8(eax, MEM8(edi + 0xC));
    esp = esp + 4;
    if (CMP_NE(LO8(eax), 2)) goto loc_0030FA8C; /* jne: not equal / not zero */

loc_0030FA63: ;
    if (CMP_BE(MEM8(edi + 0xD), 3)) goto loc_0030FA8C; /* jbe: below or equal (unsigned <=) */

loc_0030FA69: ;
    PUSH32(esp, esi);
    PUSH32(esp, 0); sub_00310C40(); /* call 0x00310C40 */

loc_0030FA6F: ;
    esp = esp + 4;
    if (TEST_Z(eax, eax)) goto loc_0030FA8C; /* je: equal / zero */

loc_0030FA76: ;
    eax = 4;

loc_0030FA7B: ;
    ecx = esp + 0x18;
    PUSH32(esp, ecx);

loc_0030FA80: ;
    edx = esp + 0x14;
    PUSH32(esp, 0); sub_0030F570(); /* call 0x0030F570 */

loc_0030FA89: ;
    esp = esp + 4;

loc_0030FA8C: ;
    eax = MEM32(esp + 0x10);
    ebp = MEM32(esp + 0x14);

loc_0030FA94: ;
    edi = ebp + 7;
    PUSH32(esp, edi);
    edx = esp + 0x44;
    PUSH32(esp, edx);
    PUSH32(esp, eax);
    esi = esp + 0x20;
    eax = esp + 0x24;
    PUSH32(esp, 0); sub_0030F5B0(); /* call 0x0030F5B0 */

loc_0030FAAB: ;
    esi = MEM32(esp + 0x20);
    esp = esp + 0xC;
    (void)0; /* cmp esi, 1 - flags set for next jcc */
    ebx = eax;
    if (CMP_LE(esi, 1)) { sub_0030FAC3(); return; } /* jle: less or equal (signed <=) */

loc_0030FAB9: ;
    PUSH32(esp, 0); sub_003E2480(); /* call 0x003E2480 */

loc_0030FABE: ;
    edx = ((int32_t)eax < 0) ? 0xFFFFFFFF : 0; /* cdq */
    { int64_t _dividend = ((int64_t)(int32_t)edx << 32) | eax;
      eax = (uint32_t)((int32_t)(_dividend / (int32_t)esi));
      edx = (uint32_t)((int32_t)(_dividend % (int32_t)esi)); }
    g_seh_ebp = ebp; sub_0030FAC5(); return; /* tail jmp 0x0030FAC5 */

}

/**
 * sub_0030FB30
 * Original: 0x0030FB30 - 0x0030FB69 (57 bytes, 17 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0030FB30(void)
{
    int _flags = 0; /* fallback flag var */

loc_0030FB30: ;
    eax = MEM32(eax + 0x568);
    SET_LO8(ecx, MEM8(eax + 0x74));
    eax = eax + 0x70;
    if (TEST_Z(LO8(ecx), LO8(ecx))) goto loc_0030FB63; /* je: equal / zero */

loc_0030FB40: ;
    SET_LO8(edx, MEM8(eax + 5));
    SET_LO8(edx, LO8(edx) + 1);
    MEM8(eax + 5) = LO8(edx);
    ecx = ZX8(LO8(ecx));
    ecx = MEM32(ecx * 4 + 0x59E1D0);
    edx = ZX8(LO8(edx));
    if (CMP_NE(MEM8(edx + ecx), 0)) { sub_0030FB69(); return; } /* jne: not equal / not zero */

loc_0030FB5B: ;
    MEM8(eax + 4) = 0;
    MEM8(eax + 5) = 0;

loc_0030FB63: ;
    eax = 1;
    esp += 4; return; /* ret */

}

/**
 * sub_0030FB70
 * Original: 0x0030FB70 - 0x0030FBB8 (72 bytes, 21 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0030FB70(void)
{
    uint32_t ebp;
    int _flags = 0; /* fallback flag var */
    float xmm0;
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_0030FB70: ;
    esp = esp - 0x1C;
    PUSH32(esp, ebx);
    PUSH32(esp, ebp);
    ebp = edi + 0x78;
    eax = ebp;
    ecx = MEM32(eax);
    edx = MEM32(eax + 4);
    eax = MEM32(eax + 8);
    MEM32(esp + 0x14) = ecx;
    ecx = (uint32_t)(int32_t)SMEM16(edi + 0x1EC);
    MEM32(esp + 0x1C) = eax;
    eax = MEM32(0x870ED4);
    (void)0; /* test eax, eax - flags set for next jcc */
    xmm0 = (float)(int32_t)ecx; /* cvtsi2ss */
    xmm0 = xmm0 + MEMF(0x64908C); /* addss */
    PUSH32(esp, esi);
    MEM32(esp + 0x1C) = edx;
    MEMF(esp + 0x24) = xmm0; /* movss */
    if (TEST_NZ(eax, eax)) { sub_0030FBB8(); return; } /* jne: not equal / not zero */

loc_0030FBB1: ;
    esi = 0x870ED8;
    g_seh_ebp = ebp; sub_0030FBE6(); return; /* tail jmp 0x0030FBE6 */

}

/**
 * sub_0030FCD0
 * Original: 0x0030FCD0 - 0x0030FCF2 (34 bytes, 15 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0030FCD0(void)
{
    int _flags = 0; /* fallback flag var */

loc_0030FCD0: ;
    (void)0; /* test eax, eax - flags set for next jcc */
    PUSH32(esp, esi);
    PUSH32(esp, edi);
    if (TEST_NZ(eax, eax)) { sub_0030FCF2(); return; } /* jne: not equal / not zero */

loc_0030FCD6: ;
    eax = (int32_t)MEMF(0x7F9F5C); /* cvttss2si */
    esi = eax + eax * 2;
    edi = eax;
    PUSH32(esp, 0); sub_003E2480(); /* call 0x003E2480 */

loc_0030FCE8: ;
    edx = ((int32_t)eax < 0) ? 0xFFFFFFFF : 0; /* cdq */
    { int64_t _dividend = ((int64_t)(int32_t)edx << 32) | eax;
      eax = (uint32_t)((int32_t)(_dividend / (int32_t)edi));
      edx = (uint32_t)((int32_t)(_dividend % (int32_t)edi)); }
    POP32(esp, edi);
    eax = edx;
    eax = eax + esi;
    POP32(esp, esi);
    esp += 4; return; /* ret */

}

/**
 * sub_0030FD40
 * Original: 0x0030FD40 - 0x0030FE3F (255 bytes, 70 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0030FD40(void)
{
    uint32_t ebp;
    int _flags = 0; /* fallback flag var */
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_0030FD40: ;
    SET_LO8(eax, MEM8(esi + 0x250));
    if (CMP_B(LO8(eax), 1)) goto loc_0030FDC3; /* jb: below (unsigned <) */

loc_0030FD4A: ;
    ecx = MEM32(0x84A5F8);
    eax = ZX8(LO8(eax));
    eax = (uint32_t)((int32_t)eax * (int32_t)0x6D0);
    eax = MEM32(eax + ecx + -1640);
    eax = eax + 0xFFFFFFA9u;
    if (CMP_A(eax, 0xC1)) goto loc_0030FDA4; /* ja: above (unsigned >) */

loc_0030FD6A: ;
    edx = ZX8(MEM8(eax + 0x30FE58));
    { uint32_t _jt = MEM32(edx * 4 + 0x30FE40); /* switch: 6 entries, 6 targets */
    if (_jt == 0x0030FD78u) goto loc_0030FD78;
    if (_jt == 0x0030FD7Fu) goto loc_0030FD7F;
    if (_jt == 0x0030FD86u) goto loc_0030FD86;
    if (_jt == 0x0030FD9Du) goto loc_0030FD9D;
    if (_jt == 0x0030FDA4u) goto loc_0030FDA4;
    if (_jt == 0x0030FE3Eu) goto loc_0030FE3E;
    g_seh_ebp = ebp; RECOMP_ITAIL(_jt); return; }

loc_0030FD78: ;
    edx = 0x115;
    goto loc_0030FDA9;

loc_0030FD7F: ;
    edx = 0x1A5;
    goto loc_0030FDA9;

loc_0030FD86: ;
    (void)0; /* cmp MEM32(esi + 0xA4), 0x28D - flags set for next jcc */
    edx = 0x1AF;
    if (CMP_EQ(MEM32(esi + 0xA4), 0x28D)) goto loc_0030FE3E; /* je: equal / zero */

loc_0030FD9B: ;
    goto loc_0030FDA9;

loc_0030FD9D: ;
    edx = 0x1FA;
    goto loc_0030FDA9;

loc_0030FDA4: ;
    edx = 0xD8;

loc_0030FDA9: ;
    PUSH32(esp, 0);
    PUSH32(esp, 0);
    PUSH32(esp, 0);
    PUSH32(esp, 0x40800000);
    PUSH32(esp, 0x3F800000);
    PUSH32(esp, esi);
    PUSH32(esp, 0); sub_002F1620(); /* call 0x002F1620 */

loc_0030FDBF: ;
    esp = esp + 0x18;
    esp += 4; return; /* ret */

loc_0030FDC3: ;
    eax = MEM32(esi + 0x68);
    if (CMP_EQ(eax, 0xFFFF)) goto loc_0030FE3E; /* je: equal / zero */

loc_0030FDCD: ;
    if (CMP_GE(eax, 0x205)) goto loc_0030FE3E; /* jge: greater or equal (signed >=) */

loc_0030FDD4: ;
    ecx = MEM32(esi + 0x74);
    if (TEST_Z(ecx, ecx)) goto loc_0030FE3E; /* je: equal / zero */

loc_0030FDDB: ;
    ecx = MEM32(ecx + 0x50);
    if (TEST_Z(ecx, ecx)) goto loc_0030FE3E; /* je: equal / zero */

loc_0030FDE2: ;
    ecx = MEM32(ecx + 0xB4);
    if (TEST_Z(ecx, ecx)) goto loc_0030FE3E; /* je: equal / zero */

loc_0030FDEC: ;
    if (CMP_EQ(ecx, 0x3E7)) goto loc_0030FDFF; /* je: equal / zero */

loc_0030FDF4: ;
    if (CMP_A(MEM16(eax * 2 + 0x770390), 0xF)) goto loc_0030FE04; /* ja: above (unsigned >) */

loc_0030FDFF: ;
    g_seh_ebp = ebp; sub_002F65F0(); return; /* tail jmp 0x002F65F0 */

loc_0030FE04: ;
    eax = MEM32(esi + 0x74);
    ecx = MEM32(eax + 0x50);
    eax = MEM32(ecx + 0xBC);
    PUSH32(esp, 0);
    edx = 0; /* xor self */
    SET_LO16(edx, MEM16(ecx + 0xB8));
    ecx = MEM32(ecx + 0xB4);
    PUSH32(esp, 0);
    PUSH32(esp, 0x40400000);
    PUSH32(esp, 0x3F800000);
    PUSH32(esp, edx);
    PUSH32(esp, eax);
    PUSH32(esp, 0xF);
    PUSH32(esp, ecx);
    SET_LO8(edx, 1);
    eax = esi;
    PUSH32(esp, 0); sub_002F1790(); /* call 0x002F1790 */

loc_0030FE3B: ;
    esp = esp + 0x20;

loc_0030FE3E: ;
    esp += 4; return; /* ret */

}

/**
 * sub_0030FF20
 * Original: 0x0030FF20 - 0x0030FF94 (116 bytes, 26 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0030FF20(void)
{
    int _flags = 0; /* fallback flag var */

loc_0030FF20: ;
    SET_LO8(ecx, MEM8(eax + 0x180));
    edx = 0; /* xor self */
    if (CMP_B(LO8(ecx), 0xFA)) goto loc_0030FF33; /* jb: below (unsigned <) */

loc_0030FF2D: ;
    MEM8(eax + 0x180) = LO8(edx);

loc_0030FF33: ;
    if (CMP_NE(MEM8(eax + 0x181), 0xFF)) goto loc_0030FF42; /* jne: not equal / not zero */

loc_0030FF3C: ;
    MEM8(eax + 0x181) = LO8(edx);

loc_0030FF42: ;
    ecx = MEM32(eax + 0x568);
    (void)0; /* cmp ecx, edx - flags set for next jcc */
    PUSH32(esp, ebx);
    if (CMP_EQ(ecx, edx)) goto loc_0030FF5C; /* je: equal / zero */

loc_0030FF4D: ;
    if (CMP_NE(MEM8(ecx + 0x52C), 0xFF)) goto loc_0030FF5C; /* jne: not equal / not zero */

loc_0030FF56: ;
    MEM8(ecx + 0x52C) = LO8(edx);

loc_0030FF5C: ;
    SET_LO8(ebx, MEM8(eax + 0x208));
    SET_LO16(ecx, MEM16(eax + 0x174));
    MEM8(eax + 0x540) = MEM8(eax + 0x540) & 0xF8;
    SET_LO8(ebx, LO8(ebx) & 0xFE);
    MEM8(eax + 0x208) = LO8(ebx);
    MEM8(eax + 0x17D) = LO8(edx);
    MEM8(eax + 0x1B2) = LO8(edx);
    MEM16(eax + 0x170) = LO16(ecx);
    MEM8(eax + 0x20C) = LO8(edx);
    POP32(esp, ebx);
    esp += 4; return; /* ret */

}

/**
 * sub_0030FFA0
 * Original: 0x0030FFA0 - 0x003107D2 (2098 bytes, 581 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0030FFA0(void)
{
    uint32_t ebp;
    int _flags = 0; /* fallback flag var */
    int _cf = 0; /* carry flag */
    float xmm0, xmm6, xmm7;
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_0030FFA0: ;
    esp = esp - 0x14;
    (void)0; /* cmp MEM8(0x76F0E0), 1 - flags set for next jcc */
    xmm6 = MEMF(0x648D14); /* movss */
    xmm0 = MEMF(0x648D18); /* movss */
    MEMF(esp + 4) = xmm6; /* movss */
    MEMF(esp + 8) = xmm0; /* movss */
    if (CMP_EQ(MEM8(0x76F0E0), 1)) goto loc_003107CE; /* je: equal / zero */

loc_0030FFCC: ;
    PUSH32(esp, ebp);
    ebp = MEM32(esp + 0x1C);
    if (CMP_EQ(MEM8(ebp + 0xA1), 4)) goto loc_003107CD; /* je: equal / zero */

loc_0030FFDE: ;
    eax = MEM32(0x8498D4);
    if (TEST_Z(eax, eax)) goto loc_0030FFF1; /* je: equal / zero */

loc_0030FFE7: ;
    if (CMP_EQ(MEM8(eax + 4), 1)) goto loc_003107CD; /* je: equal / zero */

loc_0030FFF1: ;
    eax = ZX16(MEM16(ebp + 0x60));
    ecx = (uint32_t)(int32_t)SMEM8(0x6BCFEB);
    (void)0; /* cmp eax, ecx - flags set for next jcc */
    eax = MEM32(0x7FA1F8);
    if (CMP_L(eax, ecx)) goto loc_00310013; /* jl: less (signed <) */

loc_00310005: ;
    if (CMP_EQ(eax, 0x1D)) goto loc_00310013; /* je: equal / zero */

loc_0031000A: ;
    if (CMP_NE(eax, 0x46)) goto loc_003107CD; /* jne: not equal / not zero */

loc_00310013: ;
    edx = MEM32(ebp + 0x568);
    edx = edx + 0x70;
    MEM8(edx) = 1;
    (void)0; /* test MEM8(ebp + 0x540), 0x20 - flags set for next jcc */
    MEM32(esp + 0x14) = edx;
    if (TEST_NZ(MEM8(ebp + 0x540), 0x20)) goto loc_003107CD; /* jne: not equal / not zero */

loc_00310030: ;
    ecx = MEM32(ebp + 0x568);
    if (TEST_Z(ecx, ecx)) goto loc_00310051; /* je: equal / zero */

loc_0031003A: ;
    eax = MEM32(ecx + 0x204);
    if (TEST_Z(eax, eax)) goto loc_00310051; /* je: equal / zero */

loc_00310044: ;
    if (CMP_NE(MEM32(ecx + 0x208), 0x14)) goto loc_003107CD; /* jne: not equal / not zero */

loc_00310051: ;
    SET_LO8(eax, MEM8(edx + 1));
    if (CMP_BE(LO8(eax) & LO8(eax), 0)) goto loc_00310068; /* jbe: below or equal (unsigned <=) */

loc_00310058: ;
    SET_LO8(eax, LO8(eax) - 1);
    MEM8(edx + 1) = LO8(eax);
    MEM16(edx + 2) = 0;
    POP32(esp, ebp);
    esp = esp + 0x14;
    esp += 4; return; /* ret */

loc_00310068: ;
    eax = MEM32(ecx + 0x204);
    if (TEST_NZ(eax, eax)) goto loc_00310097; /* jne: not equal / not zero */

loc_00310072: ;
    if (CMP_NE(MEM16(ebp + 0x3AE), 0)) goto loc_00310097; /* jne: not equal / not zero */

loc_0031007C: ;
    if (CMP_NE(MEM16(ebp + 0x21A), 0)) goto loc_00310097; /* jne: not equal / not zero */

loc_00310086: ;
    PUSH32(esp, 0);
    eax = ebp;
    PUSH32(esp, 0); sub_002CC0A0(); /* call 0x002CC0A0 */

loc_0031008F: ;
    esp = esp + 4;
    POP32(esp, ebp);
    esp = esp + 0x14;
    esp += 4; return; /* ret */

loc_00310097: ;
    PUSH32(esp, esi);
    PUSH32(esp, edi);
    eax = ebp;
    PUSH32(esp, 0); sub_0030FF20(); /* call 0x0030FF20 */

loc_003100A0: ;
    eax = MEM32(ebp + 0x568);
    edi = ZX8(MEM8(eax + 0x97));
    ecx = MEM32(eax + 0xAC);
    esi = esi | 0xFFFFFFFFu;
    edi = edi & 0xFFFFFF7Fu;
    (void)0; /* test ecx, ecx - flags set for next jcc */
    MEM32(esp + 0xC) = esi;
    MEM32(esp + 0x18) = edi;
    if (TEST_Z(ecx, ecx)) goto loc_003100D8; /* je: equal / zero */

loc_003100C8: ;
    if (TEST_NZ(edi, edi)) goto loc_003100D8; /* jne: not equal / not zero */

loc_003100CC: ;
    edx = eax;
    edi = MEM32(edx + 0xAC);
    MEM32(esp + 0x18) = edi;

loc_003100D8: ;
    (void)0; /* cmp edi, 9 - flags set for next jcc */
    PUSH32(esp, ebx);
    if (CMP_EQ(edi, 9)) goto loc_0031016D; /* je: equal / zero */

loc_003100E2: ;
    if (CMP_NE(edi, 0x37)) goto loc_003101B5; /* jne: not equal / not zero */

loc_003100EB: ;
    eax = MEM32(ebp + 0x568);
    ecx = MEM32(eax + 0xA0);
    (void)0; /* test ecx, ecx - flags set for next jcc */
    esi = 0x5FB;
    MEM32(esp + 0x10) = esi;
    if (TEST_NZ(ecx, ecx)) goto loc_0031012E; /* jne: not equal / not zero */

loc_00310104: ;
    eax = MEM32(eax + 0x444);
    ecx = esp + 0x14;
    PUSH32(esp, 1);
    PUSH32(esp, ecx);
    PUSH32(esp, 0); sub_0032FDA0(); /* call 0x0032FDA0 */

loc_00310116: ;
    ebx = esp + 0x18;
    edi = eax;
    esi = ebp;
    PUSH32(esp, 0); sub_00310FD0(); /* call 0x00310FD0 */

loc_00310123: ;
    esi = MEM32(esp + 0x18);
    edi = MEM32(esp + 0x24);
    esp = esp + 8;

loc_0031012E: ;
    eax = MEM32(ebp + 0x568);
    SET_LO8(ecx, MEM8(eax + 0x66));
    if (CMP_EQ(LO8(ecx), 1)) goto loc_00310141; /* je: equal / zero */

loc_0031013C: ;
    if (CMP_NE(LO8(ecx), 0x81)) goto loc_003101B5; /* jne: not equal / not zero */

loc_00310141: ;
    if (CMP_EQ(esi, 0x5FB)) goto loc_00310162; /* je: equal / zero */

loc_00310149: ;
    if (CMP_NE(esi, 0x6EA)) goto loc_003101B5; /* jne: not equal / not zero */

loc_00310151: ;
    esi = 0x7DE;
    MEM32(esp + 0x10) = esi;
    MEM32(eax + 0x478) = esi;
    goto loc_003101B5;

loc_00310162: ;
    esi = 0x7DF;
    MEM32(esp + 0x10) = esi;
    goto loc_003101B5;

loc_0031016D: ;
    eax = MEM32(ebp + 0x568);
    ecx = MEM32(eax + 0xA0);
    (void)0; /* test ecx, ecx - flags set for next jcc */
    esi = 0x70D;
    MEM32(esp + 0x10) = esi;
    if (TEST_NZ(ecx, ecx)) goto loc_003101B5; /* jne: not equal / not zero */

loc_00310186: ;
    eax = MEM32(eax + 0x444);
    edx = esp + 0x14;
    PUSH32(esp, 1);
    PUSH32(esp, edx);
    edi = 9;
    PUSH32(esp, 0); sub_0032FDA0(); /* call 0x0032FDA0 */

loc_0031019D: ;
    ebx = esp + 0x18;
    edi = eax;
    esi = ebp;
    PUSH32(esp, 0); sub_00310FD0(); /* call 0x00310FD0 */

loc_003101AA: ;
    esi = MEM32(esp + 0x18);
    edi = MEM32(esp + 0x24);
    esp = esp + 8;

loc_003101B5: ;
    eax = MEM32(ebp + 0x568);
    eax = MEM32(eax + 0xA0);
    eax = eax + 0xFFFFFFFEu;
    if (CMP_A(eax, 0x75)) goto loc_003102E2; /* ja: above (unsigned >) */

loc_003101CD: ;
    ecx = ZX8(MEM8(eax + 0x310810));
    { uint32_t _jt = MEM32(ecx * 4 + 0x3107D4); /* switch: 15 entries, 15 targets */
    if (_jt == 0x003101DBu) goto loc_003101DB;
    if (_jt == 0x003101E9u) goto loc_003101E9;
    if (_jt == 0x003101F7u) goto loc_003101F7;
    if (_jt == 0x00310205u) goto loc_00310205;
    if (_jt == 0x00310213u) goto loc_00310213;
    if (_jt == 0x00310221u) goto loc_00310221;
    if (_jt == 0x0031022Fu) goto loc_0031022F;
    if (_jt == 0x0031023Du) goto loc_0031023D;
    if (_jt == 0x0031024Bu) goto loc_0031024B;
    if (_jt == 0x00310259u) goto loc_00310259;
    if (_jt == 0x00310264u) goto loc_00310264;
    if (_jt == 0x0031026Fu) goto loc_0031026F;
    if (_jt == 0x0031027Au) goto loc_0031027A;
    if (_jt == 0x00310285u) goto loc_00310285;
    if (_jt == 0x003102E2u) goto loc_003102E2;
    g_seh_ebp = ebp; RECOMP_ITAIL(_jt); return; }

loc_003101DB: ;
    esi = 0x1DF;
    MEM32(esp + 0x10) = esi;
    goto loc_003102E2;

loc_003101E9: ;
    esi = 0x1EA;
    MEM32(esp + 0x10) = esi;
    goto loc_003102E2;

loc_003101F7: ;
    esi = 0x177;
    MEM32(esp + 0x10) = esi;
    goto loc_003102E2;

loc_00310205: ;
    esi = 0x1FA;
    MEM32(esp + 0x10) = esi;
    goto loc_003102E2;

loc_00310213: ;
    esi = 0xD8;
    MEM32(esp + 0x10) = esi;
    goto loc_003102E2;

loc_00310221: ;
    esi = 0x1AF;
    MEM32(esp + 0x10) = esi;
    goto loc_003102E2;

loc_0031022F: ;
    esi = 0xE2;
    MEM32(esp + 0x10) = esi;
    goto loc_003102E2;

loc_0031023D: ;
    esi = 0xF9;
    MEM32(esp + 0x10) = esi;
    goto loc_003102E2;

loc_0031024B: ;
    esi = 0x15A;
    MEM32(esp + 0x10) = esi;
    goto loc_003102E2;

loc_00310259: ;
    esi = 0x10F;
    MEM32(esp + 0x10) = esi;
    goto loc_003102E2;

loc_00310264: ;
    esi = 0x10A;
    MEM32(esp + 0x10) = esi;
    goto loc_003102E2;

loc_0031026F: ;
    esi = 0xC5;
    MEM32(esp + 0x10) = esi;
    goto loc_003102E2;

loc_0031027A: ;
    esi = 0x153;
    MEM32(esp + 0x10) = esi;
    goto loc_003102E2;

loc_00310285: ;
    eax = MEM32(ebp + 0x568);
    edi = MEM32(eax + 0xA0);
    eax = MEM32(eax + 0x444);
    PUSH32(esp, 0); sub_0032FDA0(); /* call 0x0032FDA0 */

loc_0031029C: ;
    esi = eax;
    eax = ebp;
    PUSH32(esp, 0); sub_003120B0(); /* call 0x003120B0 */

loc_003102A5: ;
    edx = esp + 0x10;
    PUSH32(esp, 0);
    PUSH32(esp, edx);
    ebx = esp + 0x1C;
    ecx = ebp;
    PUSH32(esp, 0); sub_00312010(); /* call 0x00312010 */

loc_003102B7: ;
    xmm0 = MEMF(0x648CDC); /* movss */
    eax = ebx;
    PUSH32(esp, 0);
    edi = esi;
    PUSH32(esp, eax);
    ebx = esp + 0x20;
    esi = ebp;
    MEMF(esp + 0x28) = xmm0; /* movss */
    PUSH32(esp, 0); sub_00310FD0(); /* call 0x00310FD0 */

loc_003102D7: ;
    esi = MEM32(esp + 0x20);
    edi = MEM32(esp + 0x2C);
    esp = esp + 0x10;

loc_003102E2: ;
    ecx = MEM32(ebp + 0x568);
    eax = MEM32(ecx + 0xA0);
    PUSH32(esp, 0); sub_00300FE0(); /* call 0x00300FE0 */

loc_003102F3: ;
    if (TEST_Z(LO8(eax), LO8(eax))) goto loc_0031034D; /* je: equal / zero */

loc_003102F7: ;
    eax = ecx;
    edi = MEM32(eax + 0xA0);
    eax = MEM32(eax + 0x444);
    PUSH32(esp, 0); sub_0032FDA0(); /* call 0x0032FDA0 */

loc_0031030A: ;
    edx = esp + 0x10;
    esi = eax;
    PUSH32(esp, 0);
    PUSH32(esp, edx);
    SET_LO8(eax, 0); /* xor self */
    ebx = esp + 0x1C;
    ecx = ebp;
    PUSH32(esp, 0); sub_00312010(); /* call 0x00312010 */

loc_00310320: ;
    xmm7 = MEMF(0x648CDC); /* movss */
    eax = ebx;
    PUSH32(esp, 0);
    edi = esi;
    PUSH32(esp, eax);
    ebx = esp + 0x20;
    esi = ebp;
    MEMF(esp + 0x28) = xmm7; /* movss */
    PUSH32(esp, 0); sub_00310FD0(); /* call 0x00310FD0 */

loc_00310340: ;
    esi = MEM32(esp + 0x20);
    edi = MEM32(esp + 0x2C);
    esp = esp + 0x10;
    goto loc_00310355;

loc_0031034D: ;
    xmm7 = MEMF(0x648CDC); /* movss */

loc_00310355: ;
    eax = MEM32(ebp + 0x568);
    ecx = MEM32(eax + 0x444);
    if (TEST_Z(ecx, ecx)) goto loc_00310381; /* je: equal / zero */

loc_00310365: ;
    ecx = MEM32(ecx + 0x280);
    SET_LO8(edx, MEM8(ecx + 3));
    if (TEST_Z(LO8(edx), LO8(edx))) goto loc_00310381; /* je: equal / zero */

loc_00310372: ;
    esi = 0x499;
    MEM32(esp + 0x10) = esi;
    MEMF(esp + 0x14) = xmm6; /* movss */

loc_00310381: ;
    SET_LO8(ecx, MEM8(eax + 0x66));
    SET_LO8(ebx, 2);
    if (CMP_NE(LO8(ecx), LO8(ebx))) goto loc_00310393; /* jne: not equal / not zero */

loc_0031038A: ;
    esi = 5;
    MEM32(esp + 0x10) = esi;

loc_00310393: ;
    if (CMP_EQ(MEM16(eax + 8), 0)) goto loc_003103EF; /* je: equal / zero */

loc_0031039A: ;
    (void)0; /* cmp MEM8(eax + 0x22), LO8(ebx) - flags set for next jcc */
    xmm0 = MEMF(0x648CF0); /* movss */
    MEMF(esp + 0x18) = xmm7; /* movss */
    MEMF(esp + 0x14) = xmm0; /* movss */
    if (CMP_NE(MEM8(eax + 0x22), LO8(ebx))) goto loc_003103CF; /* jne: not equal / not zero */

loc_003103B3: ;
    PUSH32(esp, 0xBF800000u);
    esi = 0x38B;
    PUSH32(esp, 0x23);
    eax = ebp;
    MEM32(esp + 0x18) = esi;
    PUSH32(esp, 0); sub_00021840(); /* call 0x00021840 */

loc_003103CA: ;
    esp = esp + 8;
    goto loc_003103EF;

loc_003103CF: ;
    eax = MEM32(0x7FA1F8);
    edx = 0; /* xor self */
    (void)0; /* cmp eax, 0x29 - flags set for next jcc */
    SET_LO8(edx, (CMP_NE(eax, 0x29)) ? 1 : 0); /* setne */
    edx--;
    edx = edx & 0x112;
    edx = edx + 0xAB;
    esi = edx;
    MEM32(esp + 0x10) = esi;

loc_003103EF: ;
    ecx = MEM32(ebp + 0x568);
    SET_LO8(eax, MEM8(ecx + 0x26));
    (void)0; /* test LO8(eax), LO8(eax) - flags set for next jcc */
    xmm0 = MEMF(0x648CDC); /* movss */
    if (TEST_Z(LO8(eax), LO8(eax))) goto loc_00310413; /* je: equal / zero */

loc_00310404: ;
    esi = 0x63;
    MEM32(esp + 0x10) = esi;
    MEMF(esp + 0x18) = xmm0; /* movss */

loc_00310413: ;
    SET_LO16(eax, MEM16(ecx + 0x46));
    if (TEST_Z(LO8(ebx), LO8(eax))) goto loc_00310422; /* je: equal / zero */

loc_0031041B: ;
    esi = 0x6B;
    goto loc_0031042B;

loc_00310422: ;
    if (TEST_Z(LO8(eax), 1)) goto loc_00310435; /* je: equal / zero */

loc_00310426: ;
    esi = 0xAF;

loc_0031042B: ;
    MEM32(esp + 0x10) = esi;
    MEMF(esp + 0x18) = xmm0; /* movss */

loc_00310435: ;
    eax = MEM32(ebp + 0x6A4);
    if (TEST_Z(eax, eax)) goto loc_00310459; /* je: equal / zero */

loc_0031043F: ;
    edx = MEM32(eax + 0x10);
    if (CMP_LE(edx & edx, 0)) goto loc_00310459; /* jle: less or equal (signed <=) */

loc_00310446: ;
    if (TEST_NZ(edi, edi)) goto loc_00310459; /* jne: not equal / not zero */

loc_0031044A: ;
    if (CMP_NE(MEM32(eax + 0x18), 0x31)) goto loc_00310459; /* jne: not equal / not zero */

loc_00310450: ;
    esi = 0x556;
    MEM32(esp + 0x10) = esi;

loc_00310459: ;
    if (CMP_NE(MEM32(0x7FA1F8), 0x46)) goto loc_00310488; /* jne: not equal / not zero */

loc_00310462: ;
    eax = MEM32(ecx + 0x444);
    if (TEST_Z(eax, eax)) goto loc_00310488; /* je: equal / zero */

loc_0031046C: ;
    eax = esp + 0x18;
    PUSH32(esp, eax);
    ecx = esp + 0x18;
    PUSH32(esp, ecx);
    edx = esp + 0x18;
    PUSH32(esp, edx);
    PUSH32(esp, ebp);
    PUSH32(esp, 0); sub_00310EF0(); /* call 0x00310EF0 */

loc_00310481: ;
    esi = MEM32(esp + 0x20);
    esp = esp + 0x10;

loc_00310488: ;
    if (CMP_NE(esi, 0xFFFFFFFFu)) goto loc_003104C8; /* jne: not equal / not zero */

loc_0031048D: ;
    if (CMP_NE(MEM32(ebp + 0x68), 0x111)) goto loc_003104C8; /* jne: not equal / not zero */

loc_00310496: ;
    SET_LO8(eax, MEM8(0x7FDC60));
    if (TEST_Z(LO8(eax), LO8(eax))) goto loc_003104C3; /* je: equal / zero */

loc_0031049F: ;
    if (TEST_Z(LO8(ebx), LO8(eax))) goto loc_003104C8; /* je: equal / zero */

loc_003104A3: ;
    edi = ebp;
    PUSH32(esp, 0); sub_0030FB70(); /* call 0x0030FB70 */

loc_003104AA: ;
    if (TEST_NZ(LO8(eax), LO8(eax))) goto loc_003104C3; /* jne: not equal / not zero */

loc_003104AE: ;
    xmm0 = MEMF(0x648CDC); /* movss */
    esi = 0xAF;
    MEMF(esp + 0x18) = xmm0; /* movss */
    goto loc_003104C8;

loc_003104C3: ;
    esi = 0xF;

loc_003104C8: ;
    SET_LO8(eax, MEM8(0x7819D5));
    (void)0; /* test LO8(eax), LO8(eax) - flags set for next jcc */
    ecx = MEM32(0x84A5F8);
    if (TEST_NZ(LO8(eax), LO8(eax))) goto loc_00310504; /* jne: not equal / not zero */

loc_003104D7: ;
    SET_LO8(eax, MEM8(ebp + 0x250));
    if (CMP_B(LO8(eax), 1)) goto loc_00310504; /* jb: below (unsigned <) */

loc_003104E1: ;
    eax = ZX8(LO8(eax));
    eax = (uint32_t)((int32_t)eax * (int32_t)0x6D0);
    SET_LO8(edx, MEM8(eax + ecx + -1564));
    if (TEST_Z(LO8(edx), LO8(edx))) goto loc_00310504; /* je: equal / zero */

loc_003104F5: ;
    esi = ebp;
    PUSH32(esp, 0); sub_0030FD40(); /* call 0x0030FD40 */

loc_003104FC: ;
    POP32(esp, ebx);
    POP32(esp, edi);
    POP32(esp, esi);
    POP32(esp, ebp);
    esp = esp + 0x14;
    esp += 4; return; /* ret */

loc_00310504: ;
    if (CMP_EQ(esi, 0xFFFFFFFFu)) goto loc_0031052C; /* je: equal / zero */

loc_00310509: ;
    ecx = MEM32(esp + 0x18);
    edx = MEM32(esp + 0x14);
    PUSH32(esp, 0);
    PUSH32(esp, 0);
    PUSH32(esp, 0);
    PUSH32(esp, ecx);
    PUSH32(esp, edx);
    edx = esi;
    PUSH32(esp, ebp);
    PUSH32(esp, 0); sub_002F1620(); /* call 0x002F1620 */

loc_00310521: ;
    esp = esp + 0x18;
    POP32(esp, ebx);
    POP32(esp, edi);
    POP32(esp, esi);
    POP32(esp, ebp);
    esp = esp + 0x14;
    esp += 4; return; /* ret */

loc_0031052C: ;
    SET_LO8(eax, MEM8(ebp + 0x250));
    if (CMP_B(LO8(eax), 1)) goto loc_0031054A; /* jb: below (unsigned <) */

loc_00310536: ;
    eax = ZX8(LO8(eax));
    eax = (uint32_t)((int32_t)eax * (int32_t)0x6D0);
    SET_LO8(edx, MEM8(eax + ecx + -1564));
    if (TEST_NZ(LO8(edx), LO8(edx))) goto loc_003104F5; /* jne: not equal / not zero */

loc_0031054A: ;
    ecx = MEM32(0x7FA1F8);
    PUSH32(esp, ecx);
    PUSH32(esp, 0); sub_002B4ED0(); /* call 0x002B4ED0 */

loc_00310556: ;
    esp = esp + 4;
    if (TEST_NZ(LO8(eax), LO8(eax))) goto loc_0031076A; /* jne: not equal / not zero */

loc_00310561: ;
    if (CMP_EQ(ecx, 0x1D)) goto loc_0031076A; /* je: equal / zero */

loc_0031056A: ;
    if (CMP_EQ(ecx, 0x46)) goto loc_0031076A; /* je: equal / zero */

loc_00310573: ;
    ecx = MEM32(ebp + 0x568);
    eax = MEM32(ecx + 0xA0);
    PUSH32(esp, 0); sub_00301050(); /* call 0x00301050 */

loc_00310584: ;
    if (TEST_Z(LO8(eax), LO8(eax))) goto loc_003105C7; /* je: equal / zero */

loc_00310588: ;
    SET_LO8(eax, MEM8(ecx + 0xB1));
    if (TEST_Z(LO8(eax), LO8(eax))) goto loc_003105C7; /* je: equal / zero */

loc_00310592: ;
    esi = MEM32(ecx + 0x2B0);
    edx = 0; /* xor self */
    PUSH32(esp, 0);
    PUSH32(esp, 0);
    (void)0; /* test esi, esi - flags set for next jcc */
    SET_LO8(edx, (TEST_NZ(esi, esi)) ? 1 : 0); /* setne */
    PUSH32(esp, 0);
    PUSH32(esp, 0x40400000);
    PUSH32(esp, 0x3F800000);
    PUSH32(esp, ebp);
    edx = edx * 4 + 0x379;
    PUSH32(esp, 0); sub_002F1620(); /* call 0x002F1620 */

loc_003105BC: ;
    esp = esp + 0x18;
    POP32(esp, ebx);
    POP32(esp, edi);
    POP32(esp, esi);
    POP32(esp, ebp);
    esp = esp + 0x14;
    esp += 4; return; /* ret */

loc_003105C7: ;
    eax = ebp;
    PUSH32(esp, 0); sub_0030FB30(); /* call 0x0030FB30 */

loc_003105CE: ;
    (void)0; /* test eax, eax - flags set for next jcc */
    edi = MEM32(esp + 0x20);
    if (TEST_Z(eax, eax)) goto loc_0031068C; /* je: equal / zero */

loc_003105DA: ;
    eax = MEM32(ebp + 0x568);
    ecx = MEM32(eax + 0x2B8);
    if (TEST_Z(ecx, ecx)) goto loc_00310685; /* je: equal / zero */

loc_003105EE: ;
    SET_LO8(ecx, MEM8(edi + 4));
    if (TEST_NZ(LO8(ecx), LO8(ecx))) goto loc_00310685; /* jne: not equal / not zero */

loc_003105F9: ;
    ecx = MEM32(eax + 0xA0);
    ecx = ecx + 0xFFFFFFFDu;
    if (CMP_A(ecx, 0x56)) goto loc_003104F5; /* ja: above (unsigned >) */

loc_0031060B: ;
    ecx = ZX8(MEM8(ecx + 0x31089C));
    { uint32_t _jt = MEM32(ecx * 4 + 0x310888); /* switch: 5 entries, 5 targets */
    if (_jt == 0x003104F5u) goto loc_003104F5;
    if (_jt == 0x00310619u) goto loc_00310619;
    if (_jt == 0x00310620u) goto loc_00310620;
    if (_jt == 0x00310647u) goto loc_00310647;
    if (_jt == 0x0031064Eu) goto loc_0031064E;
    g_seh_ebp = ebp; RECOMP_ITAIL(_jt); return; }

loc_00310619: ;
    edx = 0x2C;
    goto loc_00310664;

loc_00310620: ;
    SET_LO8(ecx, MEM8(eax + 0xB1));
    if (TEST_Z(LO8(ecx), LO8(ecx))) goto loc_00310640; /* je: equal / zero */

loc_0031062A: ;
    ecx = MEM32(eax + 0x2B0);
    edx = 0; /* xor self */
    (void)0; /* test ecx, ecx - flags set for next jcc */
    SET_LO8(edx, (TEST_NZ(ecx, ecx)) ? 1 : 0); /* setne */
    edx = edx * 4 + 0x379;
    goto loc_00310664;

loc_00310640: ;
    edx = 0x7F;
    goto loc_00310664;

loc_00310647: ;
    edx = 0x165;
    goto loc_00310664;

loc_0031064E: ;
    SET_LO8(edx, MEM8(eax + 0xB1));
    SET_LO8(edx, (uint32_t)(-(int32_t)LO8(edx)));
    edx = _cf ? 0xFFFFFFFF : 0; /* sbb self (CF extend) */
    edx = edx & 0x238;
    edx = edx + 0x122;

loc_00310664: ;
    PUSH32(esp, 0);
    PUSH32(esp, 0);
    PUSH32(esp, 0);
    PUSH32(esp, 0x40800000);
    PUSH32(esp, 0x3F800000);
    PUSH32(esp, ebp);
    PUSH32(esp, 0); sub_002F1620(); /* call 0x002F1620 */

loc_0031067A: ;
    esp = esp + 0x18;
    POP32(esp, ebx);
    POP32(esp, edi);
    POP32(esp, esi);
    POP32(esp, ebp);
    esp = esp + 0x14;
    esp += 4; return; /* ret */

loc_00310685: ;
    eax = ebp;
    PUSH32(esp, 0); sub_0030F740(); /* call 0x0030F740 */

loc_0031068C: ;
    SET_LO8(eax, MEM8(edi + 4));
    SET_LO8(ecx, MEM8(edi + 5));
    edx = ZX8(LO8(eax));
    eax = ZX8(LO8(ecx));
    ecx = MEM32(edx * 4 + 0x59E1D0);
    SET_LO8(eax, MEM8(eax + ecx));
    (void)0; /* test LO8(eax), LO8(eax) - flags set for next jcc */
    esi = ZX8(LO8(eax));
    esi = esi * 8 + 0x59DEA8;
    if (TEST_NZ(LO8(eax), LO8(eax))) goto loc_00310719; /* jne: not equal / not zero */

loc_003106B0: ;
    eax = MEM32(ebp + 0x568);
    ecx = MEM32(eax + 0xA0);
    ecx = ecx + 0xFFFFFFF7u;
    if (CMP_A(ecx, 0x50)) goto loc_003106F5; /* ja: above (unsigned >) */

loc_003106C4: ;
    edx = ZX8(MEM8(ecx + 0x310904));
    { uint32_t _jt = MEM32(edx * 4 + 0x3108F4); /* switch: 4 entries, 4 targets */
    if (_jt == 0x003106D2u) goto loc_003106D2;
    if (_jt == 0x003106D9u) goto loc_003106D9;
    if (_jt == 0x003106EEu) goto loc_003106EE;
    if (_jt == 0x003106F5u) goto loc_003106F5;
    g_seh_ebp = ebp; RECOMP_ITAIL(_jt); return; }

loc_003106D2: ;
    eax = 0x3A;
    goto loc_00310712;

loc_003106D9: ;
    SET_LO8(edx, MEM8(eax + 0xB1));
    ecx = 0; /* xor self */
    (void)0; /* test LO8(edx), LO8(edx) - flags set for next jcc */
    SET_LO8(ecx, (TEST_NZ(LO8(edx), LO8(edx))) ? 1 : 0); /* setne */
    ecx = ecx + ecx + 0x46;
    eax = ecx;
    goto loc_00310712;

loc_003106EE: ;
    eax = 0x42;
    goto loc_00310712;

loc_003106F5: ;
    if (CMP_NE(MEM16(ebp + 0x3AE), 1)) goto loc_00310706; /* jne: not equal / not zero */

loc_003106FF: ;
    eax = 0xE;
    goto loc_00310712;

loc_00310706: ;
    SET_LO8(ecx, MEM8(eax + 0x26));
    if (TEST_Z(LO8(ecx), LO8(ecx))) goto loc_00310719; /* je: equal / zero */

loc_0031070D: ;
    eax = 0x25;

loc_00310712: ;
    esi = eax * 8 + 0x59DEA8;

loc_00310719: ;
    edx = ZX8(MEM8(esi + 4));
    eax = ZX8(MEM8(esi + 3));
    PUSH32(esp, 0);
    PUSH32(esp, 0);
    PUSH32(esp, 0);
    xmm0 = (float)(int32_t)edx; /* cvtsi2ss */
    xmm0 = xmm0 * MEMF(0x648D80); /* mulss */
    edx = ZX16(MEM16(esi));
    esp = esp - 8;
    MEMF(esp + 4) = xmm0; /* movss */
    xmm0 = (float)(int32_t)eax; /* cvtsi2ss */
    xmm0 = xmm0 * MEMF(0x648E54); /* mulss */
    MEMF(esp) = xmm0; /* movss */
    PUSH32(esp, ebp);
    PUSH32(esp, 0); sub_002F1620(); /* call 0x002F1620 */

loc_00310756: ;
    SET_LO8(ecx, MEM8(esi + 5));
    esp = esp + 0x18;
    POP32(esp, ebx);
    MEM8(edi + 1) = LO8(ecx);
    MEM8(edi) = 1;
    POP32(esp, edi);
    POP32(esp, esi);
    POP32(esp, ebp);
    esp = esp + 0x14;
    esp += 4; return; /* ret */

loc_0031076A: ;
    edx = MEM32(ebp + 0x568);
    eax = MEM32(edx + 0x448);
    eax = MEM32(eax);
    edx = MEM32(eax);
    xmm0 = MEMF(eax + 4); /* movss */
    PUSH32(esp, ecx);
    MEM32(esp + 0x14) = edx;
    MEMF(esp + 0x18) = xmm0; /* movss */
    PUSH32(esp, 0); sub_002B4ED0(); /* call 0x002B4ED0 */

loc_0031078F: ;
    esp = esp + 4;
    if (TEST_Z(LO8(eax), LO8(eax))) goto loc_003107AD; /* je: equal / zero */

loc_00310796: ;
    eax = esp + 0x14;
    PUSH32(esp, 0);
    PUSH32(esp, eax);
    ebx = esp + 0x18;
    edi = 0; /* xor self */
    esi = ebp;
    PUSH32(esp, 0); sub_00310FD0(); /* call 0x00310FD0 */

loc_003107AA: ;
    esp = esp + 8;

loc_003107AD: ;
    ecx = MEM32(esp + 0x14);
    edx = MEM32(esp + 0x10);
    PUSH32(esp, 0);
    PUSH32(esp, 0);
    PUSH32(esp, 0);
    PUSH32(esp, 0x41000000);
    PUSH32(esp, ecx);
    PUSH32(esp, ebp);
    PUSH32(esp, 0); sub_002F1620(); /* call 0x002F1620 */

loc_003107C7: ;
    esp = esp + 0x18;
    POP32(esp, ebx);
    POP32(esp, edi);
    POP32(esp, esi);

loc_003107CD: ;
    POP32(esp, ebp);

loc_003107CE: ;
    esp = esp + 0x14;
    esp += 4; return; /* ret */

}

/**
 * sub_00310960
 * Original: 0x00310960 - 0x00310998 (56 bytes, 17 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00310960(void)
{
    uint32_t ebp;
    int _flags = 0; /* fallback flag var */
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_00310960: ;
    PUSH32(esp, ecx);
    PUSH32(esp, ebp);
    ebp = MEM32(esp + 0xC);
    PUSH32(esp, esi);
    PUSH32(esp, edi);
    edi = MEM32(ebp + 0x568);
    SET_LO8(eax, MEM8(edi + 0x74));
    edi = edi + 0x70;
    if (TEST_Z(LO8(eax), LO8(eax))) { sub_00310998(); return; } /* je: equal / zero */

loc_00310978: ;
    ecx = ZX8(MEM8(edi + 5));
    eax = ZX8(LO8(eax));
    edx = MEM32(eax * 4 + 0x59E1D0);
    eax = ZX8(MEM8(edx + ecx));
    ecx = ZX8(MEM8(eax * 8 + 0x59DEAF));
    MEM32(esp + 0x14) = ecx;
    g_seh_ebp = ebp; sub_003109A0(); return; /* tail jmp 0x003109A0 */

}

/**
 * sub_00310B10
 * Original: 0x00310B10 - 0x00310BD1 (193 bytes, 60 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00310B10(void)
{
    uint32_t ebp;
    int _flags = 0; /* fallback flag var */
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_00310B10: ;
    eax = MEM32(esi + 0x568);
    PUSH32(esp, ebx);
    ebx = 0; /* xor self */
    if (CMP_EQ(eax, ebx)) goto loc_00310BCF; /* je: equal / zero */

loc_00310B21: ;
    if (CMP_EQ(MEM8(esi + 0x236), 0xFF)) goto loc_00310BCF; /* je: equal / zero */

loc_00310B2E: ;
    SET_LO8(ecx, MEM8(esi + 0x24E));
    if (CMP_EQ(LO8(ecx), LO8(ebx))) goto loc_00310B40; /* je: equal / zero */

loc_00310B38: ;
    SET_LO8(ecx, LO8(ecx) - 1);
    MEM8(esi + 0x24E) = LO8(ecx);

loc_00310B40: ;
    SET_LO8(edx, MEM8(eax + 0x70));
    SET_LO8(ecx, 1);
    (void)0; /* cmp LO8(edx), LO8(ecx) - flags set for next jcc */
    edx = MEM32(0x7FA20C);
    if (CMP_NE(LO8(edx), LO8(ecx))) goto loc_00310B77; /* jne: not equal / not zero */

loc_00310B4F: ;
    if (CMP_EQ(MEM8(0x76F0E0), LO8(ecx))) goto loc_00310B77; /* je: equal / zero */

loc_00310B57: ;
    PUSH32(esp, ebp);
    PUSH32(esp, edi);
    ecx = 0; /* xor self */
    SET_LO16(ecx, MEM16(eax + 0x72));
    ebp = ZX16(LO16(ecx));
    edi = 0xFFFF;
    edi = edi - edx;
    (void)0; /* cmp ebp, edi - flags set for next jcc */
    POP32(esp, edi);
    POP32(esp, ebp);
    if (CMP_GE(ebp, edi)) goto loc_00310B87; /* jge: greater or equal (signed >=) */

loc_00310B6F: ;
    ecx = ecx + edx;
    MEM16(eax + 0x72) = LO16(ecx);
    goto loc_00310B87;

loc_00310B77: ;
    MEM16(eax + 0x72) = LO16(ebx);
    MEM8(eax + 0x74) = LO8(ebx);
    MEM8(eax + 0x75) = LO8(ebx);
    MEM8(eax + 0x7C) = LO8(ebx);
    MEM8(eax + 0x7D) = LO8(ebx);

loc_00310B87: ;
    eax = MEM32(esi + 0x568);
    SET_LO16(ecx, MEM16(eax + 0x80));
    if (CMP_EQ(LO16(ecx), LO16(ebx))) goto loc_00310BC6; /* je: equal / zero */

loc_00310B99: ;
    ecx = SX16(LO16(ecx));
    if (CMP_LE(ecx, edx)) goto loc_00310BB2; /* jle: less or equal (signed <=) */

loc_00310BA0: ;
    MEM16(eax + 0x80) = MEM16(eax + 0x80) - LO16(edx);
    PUSH32(esp, esi);
    PUSH32(esp, 0); sub_00310960(); /* call 0x00310960 */

loc_00310BAD: ;
    esp = esp + 4;
    POP32(esp, ebx);
    esp += 4; return; /* ret */

loc_00310BB2: ;
    eax = esi;
    PUSH32(esp, 0); sub_00310BE0(); /* call 0x00310BE0 */

loc_00310BB9: ;
    edx = MEM32(esi + 0x568);
    MEM16(edx + 0x80) = LO16(ebx);

loc_00310BC6: ;
    PUSH32(esp, esi);
    PUSH32(esp, 0); sub_00310960(); /* call 0x00310960 */

loc_00310BCC: ;
    esp = esp + 4;

loc_00310BCF: ;
    POP32(esp, ebx);
    esp += 4; return; /* ret */

}

/**
 * sub_00310BE0
 * Original: 0x00310BE0 - 0x00310C36 (86 bytes, 26 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00310BE0(void)
{

loc_00310BE0: ;
    esp = esp - 0xC;
    PUSH32(esp, 0xD);
    ecx = esp + 8;
    PUSH32(esp, ecx);
    MEM32(esp + 0xC) = eax;
    SET_LO8(eax, MEM8(eax + 0x10B));
    PUSH32(esp, 2);
    PUSH32(esp, 0x6B3F84);
    MEM8(esp + 0x18) = LO8(eax);
    MEM32(esp + 0x10) = 0x28;
    PUSH32(esp, 0); sub_000DAA60(); /* call 0x000DAA60 */

loc_00310C0C: ;
    PUSH32(esp, 0xD);
    edx = esp + 0x18;
    PUSH32(esp, edx);
    eax = esp + 0x18;
    PUSH32(esp, 1);
    PUSH32(esp, eax);
    PUSH32(esp, 0); sub_000DAA60(); /* call 0x000DAA60 */

loc_00310C1F: ;
    PUSH32(esp, 0xD);
    ecx = esp + 0x28;
    PUSH32(esp, ecx);
    PUSH32(esp, 2);
    PUSH32(esp, 0x6B3F84);
    PUSH32(esp, 0); sub_000DAA60(); /* call 0x000DAA60 */

loc_00310C32: ;
    esp = esp + 0x3C;
    esp += 4; return; /* ret */

}

/**
 * sub_00310C40
 * Original: 0x00310C40 - 0x00310E88 (584 bytes, 144 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00310C40(void)
{
    uint32_t ebp;
    int _flags = 0; /* fallback flag var */
    float xmm0, xmm1, xmm2, xmm3, xmm4, xmm5, xmm6, xmm7;

loc_00310C40: ;
    PUSH32(esp, ebp);
    ebp = esp;
    esp = esp & 0xFFFFFFF0u;
    esp = esp - 0x64;
    PUSH32(esp, ebx);
    ebx = MEM32(ebp + 8);
    eax = (int32_t)MEMF(ebx + 0x80); /* cvttss2si */
    ecx = (int32_t)MEMF(ebx + 0x7C); /* cvttss2si */
    edx = (int32_t)MEMF(ebx + 0x78); /* cvttss2si */
    PUSH32(esp, esi);
    PUSH32(esp, edi);
    PUSH32(esp, eax);
    PUSH32(esp, ecx);
    PUSH32(esp, edx);
    PUSH32(esp, 5);
    PUSH32(esp, 4);
    PUSH32(esp, 0); sub_003C7CF0(); /* call 0x003C7CF0 */

loc_00310C6D: ;
    esp = esp + 0x14;
    if (TEST_NZ(eax, eax)) goto loc_00310C9D; /* jne: not equal / not zero */

loc_00310C74: ;
    eax = (int32_t)MEMF(ebx + 0x80); /* cvttss2si */
    ecx = (int32_t)MEMF(ebx + 0x7C); /* cvttss2si */
    edx = (int32_t)MEMF(ebx + 0x78); /* cvttss2si */
    PUSH32(esp, eax);
    PUSH32(esp, ecx);
    PUSH32(esp, edx);
    PUSH32(esp, 0xB);
    PUSH32(esp, 4);
    PUSH32(esp, 0); sub_003C7CF0(); /* call 0x003C7CF0 */

loc_00310C92: ;
    esp = esp + 0x14;
    if (TEST_Z(eax, eax)) goto loc_00310E7F; /* je: equal / zero */

loc_00310C9D: ;
    eax = ZX16(MEM16(ebx + 0x60));
    xmm7 = MEMF(0x6493BC); /* movss */
    xmm5 = MEMF(0x648D78); /* movss */
    xmm6 = MEMF(0x648E6C); /* movss */
    MEM32(esp + 0x18) = eax;
    eax = 0; /* xor self */
    MEM32(esp + 0x24) = 0x18;
    MEM32(esp + 0x28) = 0x19;
    MEM32(esp + 0x2C) = 0x1A;
    MEM32(esp + 0x14) = eax;
    goto loc_00310CE0;

    /* nop */

loc_00310CE0: ;
    ecx = MEM32(esp + eax * 4 + 0x24);
    edi = MEM32(ecx * 4 + 0x7714E0);
    if (TEST_Z(edi, edi)) goto loc_00310E71; /* je: equal / zero */

loc_00310CF3: ;
    xmm2 = MEMF(edi + 0xB8); /* movss */
    xmm2 = xmm2 - MEMF(ebx + 0x78); /* subss */
    xmm1 = MEMF(edi + 0xBC); /* movss */
    xmm1 = xmm1 - MEMF(ebx + 0x7C); /* subss */
    xmm0 = MEMF(edi + 0xC0); /* movss */
    xmm0 = xmm0 - MEMF(ebx + 0x80); /* subss */
    xmm3 = xmm2; /* movaps */
    xmm3 = xmm3 * xmm2; /* mulss */
    xmm2 = xmm1; /* movaps */
    xmm2 = xmm2 * xmm1; /* mulss */
    xmm1 = xmm0; /* movaps */
    xmm3 = xmm3 + xmm2; /* addss */
    xmm1 = xmm1 * xmm0; /* mulss */
    xmm3 = xmm3 + xmm1; /* addss */
    /* comiss xmm7, xmm3 - sets EFLAGS */
    if ((xmm7 <= xmm3)) goto loc_00310E62; /* jbe: below or equal (unsigned <=) */

loc_00310D43: ;
    edx = MEM32(esp + 0x18);
    eax = MEM32(0x84A5F8);
    edx = (uint32_t)((int32_t)edx * (int32_t)0x6D0);
    esi = MEM32(ebx + 0x3C8);
    ecx = edx + eax;
    edx = MEM32(ecx + 0x3C8);
    if (TEST_Z(edx, edx)) goto loc_00310E62; /* je: equal / zero */

loc_00310D69: ;
    eax = esi;
    eax = eax - edx;
    edx = ZX8(MEM8(ecx + 0x3A8));
    edx = MEM32(ecx + edx * 4 + 0x4EC);
    edx = MEM32(edx + 0x34);
    eax = (uint32_t)((int32_t)eax >> 6);
    ebx = eax + eax * 8;
    xmm1 = MEMF(edx + ebx * 4 + 0x14); /* movss */
    xmm0 = MEMF(edx + ebx * 4 + 0x10); /* movss */
    edx = edx + ebx * 4;
    ebx = MEM32(edx + 0xC);
    PUSH32(esp, ebx);
    ebx = MEM32(ecx + 0x3C8);
    eax = eax << 6;
    eax = eax + ebx;
    ecx = esp + 0x34;
    PUSH32(esp, 0); sub_003E26B0(); /* call 0x003E26B0 */

loc_00310DAB: ;
    xmm1 = MEMF(edi + 0xBC); /* movss */
    xmm1 = xmm1 - MEMF(esp + 0x68); /* subss */
    xmm2 = MEMF(edi + 0xC0); /* movss */
    xmm2 = xmm2 - MEMF(esp + 0x6C); /* subss */
    xmm3 = MEMF(esi + 8); /* movss */
    xmm4 = MEMF(esi + 4); /* movss */
    xmm0 = MEMF(edi + 0xB8); /* movss */
    xmm0 = xmm0 - MEMF(esp + 0x64); /* subss */
    xmm3 = xmm3 * xmm2; /* mulss */
    xmm4 = xmm4 * xmm1; /* mulss */
    xmm3 = xmm3 + xmm4; /* addss */
    xmm4 = MEMF(esi); /* movss */
    xmm4 = xmm4 * xmm0; /* mulss */
    xmm3 = xmm3 + xmm4; /* addss */
    MEMF(esp + 0x24) = xmm3; /* movss */
    xmm3 = MEMF(esi + 0x28); /* movss */
    ecx = MEM32(esp + 0x24);
    xmm3 = xmm3 * xmm2; /* mulss */
    xmm2 = MEMF(esi + 0x24); /* movss */
    xmm2 = xmm2 * xmm1; /* mulss */
    xmm1 = MEMF(esi + 0x20); /* movss */
    xmm3 = xmm3 + xmm2; /* addss */
    xmm1 = xmm1 * xmm0; /* mulss */
    xmm3 = xmm3 + xmm1; /* addss */
    MEMF(esp + 0x20) = xmm3; /* movss */
    eax = MEM32(esp + 0x20);
    PUSH32(esp, eax);
    PUSH32(esp, ecx);
    PUSH32(esp, 0); sub_003E3CA0(); /* call 0x003E3CA0 */

loc_00310E35: ;
    esp = esp + 0xC;
    xmm0 = xmm0 * xmm5; /* mulss */
    /* comiss xmm0, xmm6 - sets EFLAGS */
    if ((xmm0 <= xmm6)) goto loc_00310E49; /* jbe: below or equal (unsigned <=) */

loc_00310E41: ;
    xmm0 = xmm0 - MEMF(0x648F60); /* subss */

loc_00310E49: ;
    xmm1 = MEMF(0x648E3C); /* movss */
    /* comiss xmm1, xmm0 - sets EFLAGS */
    if ((xmm1 <= xmm0)) goto loc_00310E5F; /* jbe: below or equal (unsigned <=) */

loc_00310E56: ;
    /* comiss xmm0, MEMF(0x6492BC) - sets EFLAGS */
    if ((xmm0 > MEMF(0x6492BC))) { sub_00310E88(); return; } /* ja: above (unsigned >) */

loc_00310E5F: ;
    ebx = MEM32(ebp + 8);

loc_00310E62: ;
    edi = MEM32(edi + 0xC);
    if (TEST_NZ(edi, edi)) goto loc_00310CF3; /* jne: not equal / not zero */

loc_00310E6D: ;
    eax = MEM32(esp + 0x14);

loc_00310E71: ;
    eax++;
    (void)0; /* cmp eax, 3 - flags set for next jcc */
    MEM32(esp + 0x14) = eax;
    if (CMP_L(eax, 3)) goto loc_00310CE0; /* jl: less (signed <) */

loc_00310E7F: ;
    eax = 0; /* xor self */
    POP32(esp, edi);
    POP32(esp, esi);
    POP32(esp, ebx);
    esp = ebp;
    POP32(esp, ebp);
    esp += 4; return; /* ret */

}

/**
 * sub_00310EA0
 * Original: 0x00310EA0 - 0x00310ED9 (57 bytes, 25 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00310EA0(void)
{
    uint32_t ebp;
    int _flags = 0; /* fallback flag var */
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_00310EA0: ;
    PUSH32(esp, ebp);
    ebp = MEM32(esp + 8);
    PUSH32(esp, esi);
    esi = 0; /* xor self */
    eax = 0; /* xor self */
    ecx = 0x747D88;
    edx = 0; /* xor self */

loc_00310EB1: ;
    if (CMP_NE(MEM32(ecx), ebp)) goto loc_00310EC5; /* jne: not equal / not zero */

loc_00310EB5: ;
    if (CMP_NE(MEM32(ecx + 4), ebx)) goto loc_00310EBF; /* jne: not equal / not zero */

loc_00310EBA: ;
    if (CMP_EQ(MEM32(ecx + 8), edi)) { sub_00310ED9(); return; } /* je: equal / zero */

loc_00310EBF: ;
    if (TEST_NZ(esi, esi)) goto loc_00310EC5; /* jne: not equal / not zero */

loc_00310EC3: ;
    esi = ecx;

loc_00310EC5: ;
    edx = edx + 0x34;
    eax++;
    ecx = ecx + 0x34;
    if (CMP_B(edx, 0x3DC)) goto loc_00310EB1; /* jb: below (unsigned <) */

loc_00310ED4: ;
    eax = esi;
    POP32(esp, esi);
    POP32(esp, ebp);
    esp += 4; return; /* ret */

}

/**
 * sub_00310EF0
 * Original: 0x00310EF0 - 0x00310FC5 (213 bytes, 70 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00310EF0(void)
{
    uint32_t ebp;
    int _flags = 0; /* fallback flag var */
    float xmm0;
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_00310EF0: ;
    PUSH32(esp, ebp);
    ebp = MEM32(esp + 8);
    eax = MEM32(ebp + 0x568);
    if (TEST_Z(eax, eax)) goto loc_00310FC3; /* je: equal / zero */

loc_00310F03: ;
    ecx = MEM32(eax + 0x444);
    if (TEST_Z(ecx, ecx)) goto loc_00310FC3; /* je: equal / zero */

loc_00310F11: ;
    eax = MEM32(eax + 0x3F4);
    ecx = MEM32(ecx + 8);
    PUSH32(esp, ebx);
    ebx = MEM32(eax + 8);
    PUSH32(esp, edi);
    edi = MEM32(eax + 0x18);
    PUSH32(esp, ecx);
    PUSH32(esp, 0); sub_00310EA0(); /* call 0x00310EA0 */

loc_00310F28: ;
    edi = eax;
    esp = esp + 4;
    if (TEST_Z(edi, edi)) goto loc_00310FC1; /* je: equal / zero */

loc_00310F35: ;
    edx = MEM32(edi + 0xC);
    ebx = MEM32(esp + 0x14);
    MEM32(ebx) = edx;
    PUSH32(esp, 0); sub_003E2480(); /* call 0x003E2480 */

loc_00310F43: ;
    edx = ((int32_t)eax < 0) ? 0xFFFFFFFF : 0; /* cdq */
    ecx = 0x64;
    { int64_t _dividend = ((int64_t)(int32_t)edx << 32) | eax;
      eax = (uint32_t)((int32_t)(_dividend / (int32_t)ecx));
      edx = (uint32_t)((int32_t)(_dividend % (int32_t)ecx)); }
    if (CMP_GE(edx, 0x14)) goto loc_00310F97; /* jge: greater or equal (signed >=) */

loc_00310F50: ;
    PUSH32(esp, esi);
    esi = 0; /* xor self */
    eax = edi + 0x10;

loc_00310F56: ;
    if (CMP_EQ(MEM32(eax), 0)) goto loc_00310F64; /* je: equal / zero */

loc_00310F5B: ;
    esi++;
    eax = eax + 4;
    if (CMP_NE(esi, 4)) goto loc_00310F56; /* jne: not equal / not zero */

loc_00310F64: ;
    if (TEST_Z(esi, esi)) goto loc_00310F96; /* je: equal / zero */

loc_00310F68: ;
    PUSH32(esp, 0); sub_003E2480(); /* call 0x003E2480 */

loc_00310F6D: ;
    edx = ((int32_t)eax < 0) ? 0xFFFFFFFF : 0; /* cdq */
    { int64_t _dividend = ((int64_t)(int32_t)edx << 32) | eax;
      eax = (uint32_t)((int32_t)(_dividend / (int32_t)esi));
      edx = (uint32_t)((int32_t)(_dividend % (int32_t)esi)); }
    ecx = MEM32(ebp + 0xA4);
    eax = MEM32(edi + edx * 4 + 0x10);
    if (CMP_NE(ecx, eax)) goto loc_00310F90; /* jne: not equal / not zero */

loc_00310F7E: ;
    edx++;
    edx = edx & 0x80000003u;
    if (((int32_t)edx >= 0)) goto loc_00310F8C; /* jns: not sign (positive) */

loc_00310F87: ;
    edx--;
    edx = edx | 0xFFFFFFFCu;
    edx++;

loc_00310F8C: ;
    eax = MEM32(edi + edx * 4 + 0x10);

loc_00310F90: ;
    if (TEST_Z(eax, eax)) goto loc_00310F96; /* je: equal / zero */

loc_00310F94: ;
    MEM32(ebx) = eax;

loc_00310F96: ;
    POP32(esp, esi);

loc_00310F97: ;
    xmm0 = MEMF(0x648D14); /* movss */
    edx = MEM32(esp + 0x18);
    eax = MEM32(esp + 0x1C);
    MEMF(edx) = xmm0; /* movss */
    xmm0 = MEMF(0x648D18); /* movss */
    MEMF(eax) = xmm0; /* movss */
    SET_LO16(ecx, MEM16(ebx));
    MEM16(ebp + 0x450) = LO16(ecx);

loc_00310FC1: ;
    POP32(esp, edi);
    POP32(esp, ebx);

loc_00310FC3: ;
    POP32(esp, ebp);
    esp += 4; return; /* ret */

}

/**
 * sub_00310FD0
 * Original: 0x00310FD0 - 0x00311049 (121 bytes, 31 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00310FD0(void)
{
    uint32_t ebp;
    int _flags = 0; /* fallback flag var */
    float xmm0, xmm5;
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_00310FD0: ;
    (void)0; /* test edi, edi - flags set for next jcc */
    xmm5 = 0.0f; /* xorps self = zero */
    PUSH32(esp, ebp);
    ebp = MEM32(esp + 8);
    if (TEST_Z(edi, edi)) goto loc_0031101D; /* je: equal / zero */

loc_00310FDC: ;
    ecx = MEM32(esi + 0x568);
    xmm0 = MEMF(ecx + 0x30C); /* movss */
    /* comiss xmm0, xmm5 - sets EFLAGS */
    if ((xmm0 > xmm5)) goto loc_00310FF9; /* ja: above (unsigned >) */

loc_00310FEF: ;
    if (CMP_BE(MEM16(ecx + 0x2C6), 0)) goto loc_0031101D; /* jbe: below or equal (unsigned <=) */

loc_00310FF9: ;
    eax = MEM32(edi + 8);
    edx = MEM32(edi + 0x1C);
    eax = (uint32_t)((int32_t)eax * (int32_t)0xD8);
    xmm0 = MEMF(eax + edx + 0xB8); /* movss */
    eax = eax + edx;
    /* ucomiss xmm0, MEMF(eax + 0xBC) - sets EFLAGS */
    /* lahf - load AH from flags (used in FPU compare idiom) */
    if (1 /* jnp after test - parity */) goto loc_0031103F; /* jnp: not parity */

loc_0031101D: ;
    ecx = MEM32(esi + 0x568);
    if (TEST_NZ(MEM8(ecx + 0x2E7), 4)) goto loc_0031103F; /* jne: not equal / not zero */

loc_0031102C: ;
    if (CMP_EQ(MEM32(ecx + 0x2B0), 2)) goto loc_0031103F; /* je: equal / zero */

loc_00311035: ;
    eax = MEM32(ecx + 0x530);
    if (TEST_Z(eax, eax)) { sub_00311049(); return; } /* je: equal / zero */

loc_0031103F: ;
    MEMF(ecx + 0x5FC) = xmm5; /* movss */
    POP32(esp, ebp);
    esp += 4; return; /* ret */

}

/**
 * sub_00311100
 * Original: 0x00311100 - 0x003113CE (718 bytes, 179 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00311100(void)
{
    uint32_t ebp;
    int _flags = 0; /* fallback flag var */
    float xmm0, xmm1, xmm2, xmm3, xmm4, xmm5;
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_00311100: ;
    esp = esp - 0xC;
    edx = (uint32_t)(int32_t)SMEM8(0x6BCFEB);
    PUSH32(esp, edi);
    edi = eax;
    ecx = MEM32(edi + 0x568);
    SET_LO8(eax, MEM8(ecx + 0x3A0));
    MEM8(esp + 7) = LO8(eax);
    eax = ZX16(MEM16(edi + 0x60));
    if (CMP_L(eax, edx)) goto loc_0031112A; /* jl: less (signed <) */

loc_00311125: ;
    eax = 0x14;

loc_0031112A: ;
    xmm5 = 0.0f; /* xorps self = zero */
    eax = (uint32_t)((int32_t)eax * (int32_t)0x1B0);
    PUSH32(esp, ebx);
    PUSH32(esp, ebp);
    eax = eax + 0x763260;
    MEM8(ecx + 0x3A1) = 1;
    PUSH32(esp, esi);
    esi = MEM32(edi + 0x568);
    ebp = eax;
    if (TEST_NZ(MEM8(esi + 0x66), 0xF)) { sub_003113CE(); return; } /* jne: not equal / not zero */

loc_00311154: ;
    SET_LO8(eax, MEM8(edi + 0x135));
    if (TEST_NZ(LO8(eax), LO8(eax))) { sub_003113CE(); return; } /* jne: not equal / not zero */

loc_00311162: ;
    if (CMP_EQ(MEM16(edi + 0x3AE), 0)) { sub_003113CE(); return; } /* je: equal / zero */

loc_00311170: ;
    eax = edi;
    PUSH32(esp, 0); sub_002E5250(); /* call 0x002E5250 */

loc_00311177: ;
    if (TEST_Z(LO8(eax), LO8(eax))) { sub_003113CE(); return; } /* je: equal / zero */

loc_0031117F: ;
    eax = MEM32(edi + 0x564);
    if (TEST_Z(eax, eax)) goto loc_00311197; /* je: equal / zero */

loc_00311189: ;
    SET_LO8(ecx, MEM8(eax + 0x6DE));
    if (TEST_NZ(LO8(ecx), LO8(ecx))) { sub_003113CE(); return; } /* jne: not equal / not zero */

loc_00311197: ;
    ecx = MEM32(esi + 0xBC);
    if (CMP_EQ(ecx, 2)) { sub_003113CE(); return; } /* je: equal / zero */

loc_003111A6: ;
    SET_LO8(eax, MEM8(edi + 0x20C));
    if (TEST_Z(LO8(eax), LO8(eax))) goto loc_003111BE; /* je: equal / zero */

loc_003111B0: ;
    SET_LO8(eax, MEM8(edi + 0x218));
    if (((int32_t)(LO8(eax) & LO8(eax)) >= 0)) { sub_003113CE(); return; } /* jns: not sign (positive) */

loc_003111BE: ;
    edx = MEM32(esi + 0xA0);
    eax = edx;
    PUSH32(esp, 0); sub_00301050(); /* call 0x00301050 */

loc_003111CB: ;
    SET_LO8(ebx, LO8(eax));
    if (TEST_Z(LO8(ebx), LO8(ebx))) goto loc_003111E4; /* je: equal / zero */

loc_003111D1: ;
    eax = MEM32(esi + 0x2B0);
    if (TEST_Z(eax, eax)) goto loc_003111E4; /* je: equal / zero */

loc_003111DB: ;
    if (CMP_NE(ecx, 1)) { sub_003113CE(); return; } /* jne: not equal / not zero */

loc_003111E4: ;
    if (CMP_LE(MEM16(esi + 8), 0)) goto loc_003111F6; /* jle: less or equal (signed <=) */

loc_003111EB: ;
    SET_LO8(eax, MEM8(esi + 0xD));
    if (TEST_Z(LO8(eax), LO8(eax))) { sub_003113CE(); return; } /* je: equal / zero */

loc_003111F6: ;
    ecx = edi;
    PUSH32(esp, 0); sub_002D3CC0(); /* call 0x002D3CC0 */

loc_003111FD: ;
    if (TEST_NZ(LO8(eax), LO8(eax))) { sub_003113CE(); return; } /* jne: not equal / not zero */

loc_00311205: ;
    SET_LO8(eax, MEM8(0x7819D5));
    if (TEST_NZ(LO8(eax), LO8(eax))) goto loc_0031124E; /* jne: not equal / not zero */

loc_0031120E: ;
    if (TEST_Z(LO8(ebx), LO8(ebx))) goto loc_0031121C; /* je: equal / zero */

loc_00311212: ;
    SET_LO8(eax, MEM8(esi + 0xB2));
    if (TEST_Z(LO8(eax), LO8(eax))) goto loc_0031124E; /* je: equal / zero */

loc_0031121C: ;
    eax = edx;
    PUSH32(esp, 0); sub_00301090(); /* call 0x00301090 */

loc_00311223: ;
    if (TEST_NZ(LO8(eax), LO8(eax))) goto loc_0031124E; /* jne: not equal / not zero */

loc_00311227: ;
    if (CMP_EQ(edx, 0x3B)) goto loc_0031124E; /* je: equal / zero */

loc_0031122C: ;
    if (CMP_EQ(edx, 0xC)) goto loc_0031124E; /* je: equal / zero */

loc_00311231: ;
    if (CMP_EQ(edx, 3)) goto loc_0031124E; /* je: equal / zero */

loc_00311236: ;
    if (CMP_EQ(edx, 0x75)) goto loc_0031124E; /* je: equal / zero */

loc_0031123B: ;
    if (CMP_EQ(edx, 0x76)) goto loc_0031124E; /* je: equal / zero */

loc_00311240: ;
    if (CMP_EQ(edx, 0x37)) goto loc_0031124E; /* je: equal / zero */

loc_00311245: ;
    if (CMP_NE(edx, 0x77)) { sub_003113CE(); return; } /* jne: not equal / not zero */

loc_0031124E: ;
    PUSH32(esp, 0x42080000);
    PUSH32(esp, 0); sub_002DF4A0(); /* call 0x002DF4A0 */

loc_00311258: ;
    xmm1 = (float)(int32_t)MEM32(ebp + 0xC); /* cvtsi2ss */
    xmm3 = MEMF(0x648E7C); /* movss */
    xmm2 = MEMF(0x648D34); /* movss */
    xmm4 = MEMF(0x648D14); /* movss */
    esp = esp + 4;
    xmm1 = xmm1 * xmm3; /* mulss */
    /* comiss xmm2, xmm1 - sets EFLAGS */
    if ((xmm2 <= xmm1)) goto loc_00311286; /* jbe: below or equal (unsigned <=) */

loc_00311281: ;
    xmm1 = xmm2; /* movaps */
    goto loc_0031128E;

loc_00311286: ;
    /* comiss xmm1, xmm4 - sets EFLAGS */
    if ((xmm1 <= xmm4)) goto loc_0031128E; /* jbe: below or equal (unsigned <=) */

loc_0031128B: ;
    xmm1 = xmm4; /* movaps */

loc_0031128E: ;
    xmm1 = xmm1 * xmm0; /* mulss */
    MEMF(edi + 0x644) = xmm1; /* movss */
    xmm1 = (float)(int32_t)MEM32(ebp + 0x10); /* cvtsi2ss */
    xmm1 = xmm1 * xmm3; /* mulss */
    /* comiss xmm2, xmm1 - sets EFLAGS */
    if ((xmm2 <= xmm1)) goto loc_003112AD; /* jbe: below or equal (unsigned <=) */

loc_003112A8: ;
    xmm1 = xmm2; /* movaps */
    goto loc_003112B5;

loc_003112AD: ;
    /* comiss xmm1, xmm4 - sets EFLAGS */
    if ((xmm1 <= xmm4)) goto loc_003112B5; /* jbe: below or equal (unsigned <=) */

loc_003112B2: ;
    xmm1 = xmm4; /* movaps */

loc_003112B5: ;
    SET_LO8(eax, MEM8(edi + 0x3FC));
    (void)0; /* test LO8(eax), 1 - flags set for next jcc */
    xmm1 = xmm1 * xmm0; /* mulss */
    MEMF(edi + 0x640) = xmm1; /* movss */
    if (TEST_Z(LO8(eax), 1)) goto loc_003112E4; /* je: equal / zero */

loc_003112CB: ;
    SET_LO8(eax, LO8(eax) & 0xFE);
    MEM8(edi + 0x3FC) = LO8(eax);
    eax = MEM32(edi + 0x3C4);
    ecx = MEM32(eax + 0x28);
    MEM32(edi + 0x640) = ecx;
    goto loc_003112EC;

loc_003112E4: ;
    MEMF(edi + 0x640) = xmm1; /* movss */

loc_003112EC: ;
    SET_LO8(eax, MEM8(edi + 0x3FC));
    if (TEST_Z(LO8(eax), 0x10)) goto loc_00311314; /* je: equal / zero */

loc_003112F6: ;
    edx = MEM32(edi + 0x3C4);
    SET_LO8(eax, LO8(eax) & 0xEF);
    MEM8(edi + 0x3FC) = LO8(eax);
    xmm0 = xmm5; /* movaps */
    xmm0 = xmm0 - MEMF(edx + 0x20); /* subss */
    MEMF(edi + 0x644) = xmm0; /* movss */

loc_00311314: ;
    eax = MEM32(edi + 0x568);
    MEMF(eax + 0x39C) = xmm5; /* movss */
    xmm0 = MEMF(edi + 0x644); /* movss */
    /* ucomiss xmm0, xmm5 - sets EFLAGS */
    /* lahf - load AH from flags (used in FPU compare idiom) */
    if (1 /* jp after test - parity */) goto loc_00311364; /* jp: parity */

loc_00311333: ;
    xmm0 = MEMF(edi + 0x640); /* movss */
    /* ucomiss xmm0, xmm5 - sets EFLAGS */
    /* lahf - load AH from flags (used in FPU compare idiom) */
    if (1 /* jp after test - parity */) goto loc_00311364; /* jp: parity */

loc_00311344: ;
    ecx = MEM32(edi + 0x568);
    xmm0 = MEMF(ecx + 0x39C); /* movss */
    /* ucomiss xmm0, xmm5 - sets EFLAGS */
    /* lahf - load AH from flags (used in FPU compare idiom) */
    if (1 /* jp after test - parity */) goto loc_00311364; /* jp: parity */

loc_0031135B: ;
    MEM8(ecx + 0x3A0) = 0;
    goto loc_00311371;

loc_00311364: ;
    ecx = MEM32(edi + 0x568);
    MEM8(ecx + 0x3A0) = 1;

loc_00311371: ;
    edx = MEM32(edi + 0x568);
    xmm0 = MEMF(edx + 0x39C); /* movss */
    xmm1 = MEMF(edi + 0x644); /* movss */
    xmm2 = MEMF(edi + 0x640); /* movss */
    xmm3 = xmm0; /* movaps */
    xmm3 = xmm3 * xmm0; /* mulss */
    xmm0 = xmm1; /* movaps */
    xmm0 = xmm0 * xmm1; /* mulss */
    xmm3 = xmm3 + xmm0; /* addss */
    xmm0 = xmm2; /* movaps */
    xmm0 = xmm0 * xmm2; /* mulss */
    xmm3 = xmm3 + xmm0; /* addss */
    MEMF(esp + 0x14) = xmm3; /* movss */
    xmm0 = sqrtf(MEMF(esp + 0x14)); /* sqrtss */
    MEMF(esp + 0x18) = xmm0; /* movss */
    xmm0 = MEMF(esp + 0x18); /* movss */
    MEMF(edi + 0x648) = xmm0; /* movss */
    g_seh_ebp = ebp; sub_00311408(); return; /* tail jmp 0x00311408 */

}

/**
 * sub_003114C0
 * Original: 0x003114C0 - 0x00311548 (136 bytes, 28 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_003114C0(void)
{
    int _flags = 0; /* fallback flag var */
    float xmm0, xmm1;

loc_003114C0: ;
    eax = MEM32(esi + 0x3C4);
    (void)0; /* test eax, eax - flags set for next jcc */
    xmm0 = MEMF(0x648E14); /* movss */
    xmm1 = MEMF(0x6493F4); /* movss */
    if (TEST_Z(eax, eax)) goto loc_003114FB; /* je: equal / zero */

loc_003114DA: ;
    eax = eax + 4;
    edx = 1;
    PUSH32(esp, 0); sub_00036760(); /* call 0x00036760 */

loc_003114E7: ;
    if (TEST_Z(eax, eax)) goto loc_003114FB; /* je: equal / zero */

loc_003114EB: ;
    MEMF(eax + 0x1BC) = xmm0; /* movss */
    MEMF(eax + 0x1C4) = xmm1; /* movss */

loc_003114FB: ;
    eax = MEM32(esi + 0x3C4);
    if (TEST_Z(eax, eax)) { sub_00311548(); return; } /* je: equal / zero */

loc_00311505: ;
    eax = eax + 4;
    edx = 2;
    PUSH32(esp, 0); sub_00036760(); /* call 0x00036760 */

loc_00311512: ;
    if (TEST_Z(eax, eax)) goto loc_00311537; /* je: equal / zero */

loc_00311516: ;
    MEMF(eax + 0x1BC) = xmm0; /* movss */
    MEMF(eax + 0x1C4) = xmm1; /* movss */
    eax = MEM32(esi + 0x568);
    MEM32(eax + 0x454) = 0xFFFFFFFFu;
    esp += 4; return; /* ret */

loc_00311537: ;
    ecx = MEM32(esi + 0x568);
    MEM32(ecx + 0x454) = 0xFFFFFFFFu;
    esp += 4; return; /* ret */

}

/**
 * sub_00311560
 * Original: 0x00311560 - 0x003115DD (125 bytes, 34 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00311560(void)
{
    uint32_t ebp;
    int _flags = 0; /* fallback flag var */
    float xmm0, xmm1;
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_00311560: ;
    esp = esp - 0xC;
    if (TEST_Z(LO8(eax), LO8(eax))) goto loc_003115A9; /* je: equal / zero */

loc_00311567: ;
    xmm1 = MEMF(esi + 0x640); /* movss */
    xmm0 = 0.0f; /* xorps self = zero */
    /* ucomiss xmm1, xmm0 - sets EFLAGS */
    /* lahf - load AH from flags (used in FPU compare idiom) */
    if (1 /* jp after test - parity */) goto loc_0031158C; /* jp: parity */

loc_0031157B: ;
    xmm1 = MEMF(esi + 0x644); /* movss */
    /* ucomiss xmm1, xmm0 - sets EFLAGS */
    /* lahf - load AH from flags (used in FPU compare idiom) */
    if (1 /* jnp after test - parity */) goto loc_003115D4; /* jnp: not parity */

loc_0031158C: ;
    xmm1 = MEMF(esi + 0x640); /* movss */
    MEMF(esp + 4) = xmm0; /* movss */
    xmm0 = MEMF(esi + 0x644); /* movss */
    MEMF(esp) = xmm1; /* movss */
    g_seh_ebp = ebp; sub_003115FE(); return; /* tail jmp 0x003115FE */

loc_003115A9: ;
    ecx = MEM32(esi + 0x568);
    xmm0 = MEMF(ecx + 0x398); /* movss */
    xmm1 = 0.0f; /* xorps self = zero */
    /* ucomiss xmm0, xmm1 - sets EFLAGS */
    /* lahf - load AH from flags (used in FPU compare idiom) */
    if (1 /* jp after test - parity */) { sub_003115DD(); return; } /* jp: parity */

loc_003115C3: ;
    xmm0 = MEMF(ecx + 0x394); /* movss */
    /* ucomiss xmm0, xmm1 - sets EFLAGS */
    /* lahf - load AH from flags (used in FPU compare idiom) */
    if (1 /* jp after test - parity */) { sub_003115DD(); return; } /* jp: parity */

loc_003115D4: ;
    eax = 4;
    esp = esp + 0xC;
    esp += 4; return; /* ret */

}

/**
 * sub_003116E0
 * Original: 0x003116E0 - 0x00311830 (336 bytes, 109 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_003116E0(void)
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

loc_003116E0: ;
    PUSH32(esp, ecx);
    PUSH32(esp, ebx);
    PUSH32(esp, ebp);
    PUSH32(esp, esi);
    esi = eax;
    eax = MEM32(esp + 0x28);
    (void)0; /* test eax, eax - flags set for next jcc */
    PUSH32(esp, edi);
    if (TEST_Z(eax, eax)) goto loc_003116F6; /* je: equal / zero */

loc_003116EF: ;
    xmm0 = 0.0f; /* xorps self = zero */
    MEMF(eax) = xmm0; /* movss */

loc_003116F6: ;
    eax = MEM32(esi + 0x568);
    fp_push(MEMF(eax + 0x390)); /* fld float */
    MEM8(esp + 0x13) = 0;
    fp_top() = fabs(fp_top()); /* fabs */
    fp_push(MEMF(0x64908C)); /* fld float */
    { double _t = fp_top(); fp_top() = fp_st1(); fp_st1() = _t; } /* fxch */
    _fpu_cmp = (fp_top() < fp_st1()) ? -1 : (fp_top() > fp_st1()) ? 1 : 0; fp_pop(); /* fcompi */
    /* fstp st(0) */
    if ((_fpu_cmp <= 0) /* fcompi */) goto loc_0031171C; /* jbe: below or equal (unsigned <=) */

loc_00311717: ;
    MEM8(esp + 0x13) = 1;

loc_0031171C: ;
    xmm0 = MEMF(eax + 0x390); /* movss */
    xmm0 = xmm0 * MEMF(0x648EF8); /* mulss */
    xmm1 = MEMF(0x648D80); /* movss */
    /* comiss xmm1, xmm0 - sets EFLAGS */
    if ((xmm1 > xmm0)) goto loc_00311746; /* ja: above (unsigned >) */

loc_00311739: ;
    xmm1 = MEMF(0x648D20); /* movss */
    /* comiss xmm0, xmm1 - sets EFLAGS */
    if ((xmm0 <= xmm1)) goto loc_00311749; /* jbe: below or equal (unsigned <=) */

loc_00311746: ;
    xmm0 = xmm1; /* movaps */

loc_00311749: ;
    eax = MEM32(esp + 0x24);
    MEMF(eax) = xmm0; /* movss */
    edx = MEM32(esi + 0x568);
    ebx = MEM32(edx + 0x448);
    ebp = 0; /* xor self */
    if (CMP_EQ(ecx, 0x13)) goto loc_0031176D; /* je: equal / zero */

loc_00311764: ;
    eax = esi;
    PUSH32(esp, 0); sub_00330280(); /* call 0x00330280 */

loc_0031176B: ;
    ebp = eax;

loc_0031176D: ;
    SET_LO8(eax, 0); /* xor self */
    edi = 0; /* xor self */
    PUSH32(esp, 0); sub_00311560(); /* call 0x00311560 */

loc_00311776: ;
    if (CMP_A(eax, 4)) goto loc_0031180D; /* ja: above (unsigned >) */

loc_0031177F: ;
    { uint32_t _jt = MEM32(eax * 4 + 0x311830); /* switch: 5 entries, 4 targets */
    if (_jt == 0x00311786u) goto loc_00311786;
    if (_jt == 0x003117A7u) goto loc_003117A7;
    if (_jt == 0x003117C8u) goto loc_003117C8;
    if (_jt == 0x003117E9u) goto loc_003117E9;
    g_seh_ebp = ebp; RECOMP_ITAIL(_jt); return; }

loc_00311786: ;
    eax = MEM32(esp + 0x20);
    ecx = MEM32(esp + 0x18);
    PUSH32(esp, eax);
    SET_LO8(eax, MEM8(esp + 0x20));
    PUSH32(esp, ecx);
    SET_LO8(ecx, MEM8(esp + 0x1B));
    PUSH32(esp, ebx);
    PUSH32(esp, esi);
    esi = MEM32(esp + 0x3C);
    edx = ebp;
    PUSH32(esp, 0); sub_00312350(); /* call 0x00312350 */

loc_003117A5: ;
    goto loc_00311808;

loc_003117A7: ;
    edx = MEM32(esp + 0x20);
    eax = MEM32(esp + 0x18);
    SET_LO8(ecx, MEM8(esp + 0x13));
    PUSH32(esp, edx);
    PUSH32(esp, eax);
    SET_LO8(eax, MEM8(esp + 0x24));
    PUSH32(esp, ebx);
    PUSH32(esp, esi);
    esi = MEM32(esp + 0x3C);
    edx = ebp;
    PUSH32(esp, 0); sub_00312630(); /* call 0x00312630 */

loc_003117C6: ;
    goto loc_00311808;

loc_003117C8: ;
    ecx = MEM32(esp + 0x20);
    edx = MEM32(esp + 0x18);
    SET_LO8(eax, MEM8(esp + 0x1C));
    PUSH32(esp, ecx);
    SET_LO8(ecx, MEM8(esp + 0x17));
    PUSH32(esp, edx);
    PUSH32(esp, ebx);
    PUSH32(esp, esi);
    esi = MEM32(esp + 0x3C);
    edx = ebp;
    PUSH32(esp, 0); sub_003128D0(); /* call 0x003128D0 */

loc_003117E7: ;
    goto loc_00311808;

loc_003117E9: ;
    eax = MEM32(esp + 0x20);
    ecx = MEM32(esp + 0x18);
    PUSH32(esp, eax);
    SET_LO8(eax, MEM8(esp + 0x20));
    PUSH32(esp, ecx);
    SET_LO8(ecx, MEM8(esp + 0x1B));
    PUSH32(esp, ebx);
    PUSH32(esp, esi);
    esi = MEM32(esp + 0x3C);
    edx = ebp;
    PUSH32(esp, 0); sub_00312BB0(); /* call 0x00312BB0 */

loc_00311808: ;
    esp = esp + 0x10;
    edi = eax;

loc_0031180D: ;
    edx = MEM32(edi);
    eax = MEM32(esp + 0x28);
    MEM32(eax) = edx;
    xmm0 = MEMF(edi + 4); /* movss */
    eax = MEM32(esp + 0x24);
    xmm0 = xmm0 * MEMF(eax); /* mulss */
    POP32(esp, edi);
    POP32(esp, esi);
    POP32(esp, ebp);
    MEMF(eax) = xmm0; /* movss */
    SET_LO8(eax, MEM8(esp + 7));
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
 * sub_00311850
 * Original: 0x00311850 - 0x003118B6 (102 bytes, 34 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00311850(void)
{
    int _flags = 0; /* fallback flag var */

loc_00311850: ;
    PUSH32(esp, ecx);
    if (CMP_NE(MEM16(0x74818C), 0xFFFF)) goto loc_003118B4; /* jne: not equal / not zero */

loc_0031185C: ;
    PUSH32(esp, ebx);
    PUSH32(esp, esi);
    esi = 0; /* xor self */

loc_00311860: ;
    eax = MEM32(edi + 0x4B0);
    ecx = MEM32(eax + 0x24);
    edx = MEM32(ecx + 8);
    ebx = MEM32(esi * 4 + 0x748164);
    eax = MEM32(edx + 0x10);
    ecx = esp + 8;
    PUSH32(esp, ecx);
    PUSH32(esp, 1);
    PUSH32(esp, 0);
    PUSH32(esp, 0); sub_00415EC0(); /* call 0x00415EC0 */

loc_00311884: ;
    esp = esp + 0xC;
    if (TEST_Z(eax, eax)) goto loc_00311898; /* je: equal / zero */

loc_0031188B: ;
    eax = MEM32(esp + 8);
    if (TEST_Z(eax, eax)) goto loc_00311898; /* je: equal / zero */

loc_00311893: ;
    eax = MEM32(eax + 8);
    goto loc_0031189A;

loc_00311898: ;
    eax = 0; /* xor self */

loc_0031189A: ;
    MEM16(esi * 2 + 0x74818C) = LO16(eax);
    esi++;
    if (CMP_B(esi, 0xA)) goto loc_00311860; /* jb: below (unsigned <) */

loc_003118A8: ;
    MEM16(esi * 2 + 0x74818C) = 0xFFFF;
    POP32(esp, esi);
    POP32(esp, ebx);

loc_003118B4: ;
    POP32(esp, ecx);
    esp += 4; return; /* ret */

}

/**
 * sub_003118C0
 * Original: 0x003118C0 - 0x00311D16 (1110 bytes, 319 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_003118C0(void)
{
    uint32_t ebp;
    int _flags = 0; /* fallback flag var */
    float xmm0, xmm1;
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_003118C0: ;
    esp = esp - 0x14;
    PUSH32(esp, esi);
    esi = eax;
    eax = MEM32(esi + 0x3C4);
    if (TEST_Z(eax, eax)) goto loc_00311D11; /* je: equal / zero */

loc_003118D4: ;
    eax = MEM32(esi + 0x568);
    ecx = MEM32(eax + 0x444);
    if (TEST_NZ(ecx, ecx)) goto loc_003118EE; /* jne: not equal / not zero */

loc_003118E4: ;
    PUSH32(esp, 0); sub_003114C0(); /* call 0x003114C0 */

loc_003118E9: ;
    POP32(esp, esi);
    esp = esp + 0x14;
    esp += 4; return; /* ret */

loc_003118EE: ;
    xmm0 = MEMF(0x648E14); /* movss */
    PUSH32(esp, edi);
    edi = esi;
    MEMF(esp + 0x10) = xmm0; /* movss */
    PUSH32(esp, 0); sub_00311850(); /* call 0x00311850 */

loc_00311904: ;
    eax = MEM32(esi + 0xA4);
    SET_LO8(edx, 0); /* xor self */
    (void)0; /* cmp eax, 0x19D - flags set for next jcc */
    MEM8(esp + 0xB) = 0;
    if (CMP_A(eax, 0x19D)) goto loc_0031193A; /* ja: above (unsigned >) */

loc_00311918: ;
    if (CMP_EQ(eax, 0x19D)) goto loc_00311963; /* je: equal / zero */

loc_0031191A: ;
    if (CMP_A(eax, 0xD8)) goto loc_00311931; /* ja: above (unsigned >) */

loc_00311921: ;
    if (CMP_EQ(eax, 0xD8)) goto loc_00311963; /* je: equal / zero */

loc_00311923: ;
    if (CMP_EQ(eax, 0x36)) goto loc_00311963; /* je: equal / zero */

loc_00311928: ;
    if (CMP_EQ(eax, 0xC3)) goto loc_00311963; /* je: equal / zero */

loc_0031192F: ;
    goto loc_00311968;

loc_00311931: ;
    if (CMP_EQ(eax, 0x154)) goto loc_00311963; /* je: equal / zero */

loc_00311938: ;
    goto loc_00311968;

loc_0031193A: ;
    if (CMP_A(eax, 0x602)) goto loc_0031195C; /* ja: above (unsigned >) */

loc_00311941: ;
    if (CMP_EQ(eax, 0x602)) goto loc_00311963; /* je: equal / zero */

loc_00311943: ;
    if (CMP_EQ(eax, 0x370)) goto loc_00311963; /* je: equal / zero */

loc_0031194A: ;
    if (CMP_BE(eax, 0x37C)) goto loc_00311968; /* jbe: below or equal (unsigned <=) */

loc_00311951: ;
    if (CMP_A(eax, 0x37E)) goto loc_00311968; /* ja: above (unsigned >) */

loc_00311958: ;
    SET_LO8(edx, 1);
    goto loc_00311968;

loc_0031195C: ;
    if (CMP_NE(eax, 0x693)) goto loc_00311968; /* jne: not equal / not zero */

loc_00311963: ;
    MEM8(esp + 0xB) = 1;

loc_00311968: ;
    if (CMP_G(eax, 0x2E7)) goto loc_00311981; /* jg: greater (signed >) */

loc_0031196F: ;
    if (CMP_EQ(eax, 0x2E7)) goto loc_0031198F; /* je: equal / zero */

loc_00311971: ;
    if (CMP_EQ(eax, 0x19A)) goto loc_0031198F; /* je: equal / zero */

loc_00311978: ;
    if (CMP_EQ(eax, 0x22D)) goto loc_0031198F; /* je: equal / zero */

loc_0031197F: ;
    goto loc_00311991;

loc_00311981: ;
    if (CMP_L(eax, 0x386)) goto loc_00311991; /* jl: less (signed <) */

loc_00311988: ;
    if (CMP_G(eax, 0x387)) goto loc_00311991; /* jg: greater (signed >) */

loc_0031198F: ;
    SET_LO8(edx, 1);

loc_00311991: ;
    PUSH32(esp, ebx);
    ebx = MEM32(esi + 0x568);
    edi = MEM32(ebx + 0xA0);
    if (CMP_NE(edi, 0x77)) goto loc_003119AF; /* jne: not equal / not zero */

loc_003119A3: ;
    SET_LO8(ecx, MEM8(esi + 0x250));
    if (TEST_Z(LO8(ecx), LO8(ecx))) goto loc_003119AF; /* je: equal / zero */

loc_003119AD: ;
    SET_LO8(edx, 1);

loc_003119AF: ;
    ecx = MEM32(ebx + 0x530);
    if (TEST_NZ(ecx, ecx)) goto loc_003119C2; /* jne: not equal / not zero */

loc_003119B9: ;
    if (CMP_NE(MEM8(0x76F0E0), 1)) goto loc_003119C4; /* jne: not equal / not zero */

loc_003119C2: ;
    SET_LO8(edx, 1);

loc_003119C4: ;
    if (CMP_EQ(MEM16(esi + 0x3AE), 0)) goto loc_003119F9; /* je: equal / zero */

loc_003119CE: ;
    SET_LO8(ecx, MEM8(esi + 0x20C));
    if (TEST_NZ(LO8(ecx), LO8(ecx))) goto loc_003119F9; /* jne: not equal / not zero */

loc_003119D8: ;
    if (CMP_EQ(MEM16(ebx + 8), 0)) goto loc_003119E6; /* je: equal / zero */

loc_003119DF: ;
    SET_LO8(ecx, MEM8(ebx + 0xD));
    if (TEST_Z(LO8(ecx), LO8(ecx))) goto loc_003119F9; /* je: equal / zero */

loc_003119E6: ;
    if (CMP_EQ(eax, MEM32(ebx + 0x47C))) goto loc_003119F9; /* je: equal / zero */

loc_003119EE: ;
    ecx = esi;
    PUSH32(esp, 0); sub_002D3CC0(); /* call 0x002D3CC0 */

loc_003119F5: ;
    if (TEST_Z(LO8(eax), LO8(eax))) goto loc_003119FB; /* je: equal / zero */

loc_003119F9: ;
    SET_LO8(edx, 1);

loc_003119FB: ;
    SET_LO8(eax, MEM8(ebx + 0x3A1));
    if (TEST_NZ(LO8(eax), LO8(eax))) goto loc_00311A10; /* jne: not equal / not zero */

loc_00311A05: ;
    if (CMP_EQ(MEM16(ebx + 0x20), 0)) goto loc_00311D0A; /* je: equal / zero */

loc_00311A10: ;
    if (TEST_NZ(LO8(edx), LO8(edx))) goto loc_00311D0A; /* jne: not equal / not zero */

loc_00311A18: ;
    xmm1 = MEMF(ebx + 0x390); /* movss */
    xmm0 = 0.0f; /* xorps self = zero */
    /* ucomiss xmm1, xmm0 - sets EFLAGS */
    /* lahf - load AH from flags (used in FPU compare idiom) */
    if (1 /* jnp after test - parity */) goto loc_00311B51; /* jnp: not parity */

loc_00311A30: ;
    xmm1 = MEMF(esi + 0xDC); /* movss */
    /* ucomiss xmm1, xmm0 - sets EFLAGS */
    /* lahf - load AH from flags (used in FPU compare idiom) */
    if (1 /* jp after test - parity */) goto loc_00311B51; /* jp: parity */

loc_00311A45: ;
    edx = esi;
    MEMF(esp + 0x10) = xmm0; /* movss */
    PUSH32(esp, 0); sub_00330030(); /* call 0x00330030 */

loc_00311A52: ;
    PUSH32(esp, 0); sub_0032FDA0(); /* call 0x0032FDA0 */

loc_00311A57: ;
    ecx = eax;
    (void)0; /* test ecx, ecx - flags set for next jcc */
    edi = 0x13;
    if (TEST_Z(ecx, ecx)) goto loc_00311A65; /* je: equal / zero */

loc_00311A62: ;
    edi = MEM32(ecx + 0x14);

loc_00311A65: ;
    edx = esp + 0x10;
    PUSH32(esp, edx);
    eax = esp + 0x1C;
    PUSH32(esp, eax);
    edx = esp + 0x24;
    PUSH32(esp, edx);
    eax = esi;
    PUSH32(esp, 0); sub_003120B0(); /* call 0x003120B0 */

loc_00311A7B: ;
    PUSH32(esp, eax);
    eax = esi;
    PUSH32(esp, 0); sub_00312060(); /* call 0x00312060 */

loc_00311A83: ;
    ecx = edi;
    PUSH32(esp, eax);
    PUSH32(esp, 0);
    eax = esi;
    PUSH32(esp, 0); sub_003116E0(); /* call 0x003116E0 */

loc_00311A8F: ;
    xmm0 = MEMF(esp + 0x28); /* movss */
    ebx = MEM32(esp + 0x30);
    esp = esp + 0x18;
    /* ucomiss xmm0, MEMF(0x648CF8) - sets EFLAGS */
    /* lahf - load AH from flags (used in FPU compare idiom) */
    if (1 /* jp after test - parity */) goto loc_00311AB5; /* jp: parity */

loc_00311AA9: ;
    if (CMP_EQ(MEM32(esi + 0xA4), ebx)) goto loc_00311D0A; /* je: equal / zero */

loc_00311AB5: ;
    if (CMP_NE(MEM32(esi + 0xA8), ebx)) goto loc_00311ACB; /* jne: not equal / not zero */

loc_00311ABD: ;
    xmm0 = MEMF(0x648D14); /* movss */
    MEMF(esp + 0x14) = xmm0; /* movss */

loc_00311ACB: ;
    eax = MEM32(esp + 0x14);
    ecx = MEM32(esp + 0x1C);
    PUSH32(esp, 0x74818C);
    PUSH32(esp, 4);
    PUSH32(esp, 0);
    PUSH32(esp, 1);
    PUSH32(esp, eax);
    PUSH32(esp, 1);
    PUSH32(esp, 0);
    PUSH32(esp, 0x3E800000);
    PUSH32(esp, ecx);
    PUSH32(esp, esi);
    PUSH32(esp, 0); sub_002F1BD0(); /* call 0x002F1BD0 */

loc_00311AEF: ;
    eax = MEM32(esi + 0xA8);
    esp = esp + 0x28;
    if (CMP_NE(eax, ebx)) goto loc_00311B24; /* jne: not equal / not zero */

loc_00311AFC: ;
    eax = MEM32(esi + 0x568);
    xmm1 = MEMF(eax + 0x3E4); /* movss */
    eax = MEM32(esi + 0x3C4);
    edx = 1;
    PUSH32(esp, 0); sub_00036E90(); /* call 0x00036E90 */

loc_00311B1A: ;
    MEM32(esi + 0xA8) = 0xFFFFFFFFu;

loc_00311B24: ;
    eax = MEM32(esi + 0x568);
    ecx = 0; /* xor self */
    if (CMP_EQ(eax, ecx)) goto loc_00311D0F; /* je: equal / zero */

loc_00311B34: ;
    MEM8(eax + 0x70) = LO8(ecx);
    edx = MEM32(esi + 0x568);
    POP32(esp, ebx);
    MEM16(edx + 0x72) = LO16(ecx);
    eax = MEM32(esi + 0x568);
    POP32(esp, edi);
    MEM8(eax + 0x71) = LO8(ecx);
    POP32(esp, esi);
    esp = esp + 0x14;
    esp += 4; return; /* ret */

loc_00311B51: ;
    ecx = esi;
    PUSH32(esp, 0); sub_002D6390(); /* call 0x002D6390 */

loc_00311B58: ;
    if (TEST_NZ(LO8(eax), LO8(eax))) goto loc_00311B68; /* jne: not equal / not zero */

loc_00311B5C: ;
    SET_LO8(eax, MEM8(esp + 0xF));
    if (TEST_Z(LO8(eax), LO8(eax))) goto loc_00311C37; /* je: equal / zero */

loc_00311B68: ;
    xmm1 = MEMF(ebx + 0x398); /* movss */
    /* comiss xmm1, xmm0 - sets EFLAGS */
    if ((xmm1 <= xmm0)) goto loc_00311C37; /* jbe: below or equal (unsigned <=) */

loc_00311B79: ;
    ecx = MEM32(ebx + 0x448);
    edx = MEM32(ecx);
    eax = MEM32(esi + 0xA8);
    (void)0; /* cmp eax, MEM32(edx + 0x30) - flags set for next jcc */
    xmm0 = xmm1; /* movaps */
    xmm0 = xmm0 * MEMF(0x648EF8); /* mulss */
    if (CMP_NE(eax, MEM32(edx + 0x30))) goto loc_00311BA9; /* jne: not equal / not zero */

loc_00311B97: ;
    ecx = MEM32(ebx + 0x448);
    eax = MEM32(ecx);
    ebx = MEM32(eax + 0x30);
    xmm1 = MEMF(eax + 0x34); /* movss */
    goto loc_00311BB9;

loc_00311BA9: ;
    edx = MEM32(ebx + 0x448);
    eax = MEM32(edx);
    ebx = MEM32(eax + 0x38);
    xmm1 = MEMF(eax + 0x3C); /* movss */

loc_00311BB9: ;
    PUSH32(esp, 0x74818C);
    PUSH32(esp, 4);
    PUSH32(esp, 0);
    PUSH32(esp, 0);
    PUSH32(esp, 0x3E800000);
    PUSH32(esp, 1);
    xmm1 = xmm1 * xmm0; /* mulss */
    PUSH32(esp, 0);
    MEMF(esp + 0x30) = xmm1; /* movss */
    eax = MEM32(esp + 0x30);
    PUSH32(esp, 0x3E800000);
    PUSH32(esp, eax);
    PUSH32(esp, esi);
    PUSH32(esp, 0); sub_002F1BD0(); /* call 0x002F1BD0 */

loc_00311BE7: ;
    eax = MEM32(esi + 0x568);
    ecx = MEM32(eax + 0x448);
    ecx = MEM32(ecx);
    edx = MEM32(esi + 0xA8);
    edi = MEM32(ecx + 0x38);
    esp = esp + 0x28;
    if (CMP_EQ(edx, edi)) goto loc_00311C0E; /* je: equal / zero */

loc_00311C05: ;
    if (CMP_NE(edx, MEM32(ecx + 0x30))) goto loc_00311D0F; /* jne: not equal / not zero */

loc_00311C0E: ;
    xmm1 = MEMF(eax + 0x3E0); /* movss */
    eax = MEM32(esi + 0x3C4);
    edx = 1;
    PUSH32(esp, 0); sub_00036E90(); /* call 0x00036E90 */

loc_00311C26: ;
    POP32(esp, ebx);
    POP32(esp, edi);
    MEM32(esi + 0xA8) = 0xFFFFFFFFu;
    POP32(esp, esi);
    esp = esp + 0x14;
    esp += 4; return; /* ret */

loc_00311C37: ;
    SET_LO16(ecx, MEM16(ebx + 0x20));
    if (TEST_Z(LO16(ecx), LO16(ecx))) goto loc_00311D0A; /* je: equal / zero */

loc_00311C44: ;
    xmm1 = MEMF(esi + 0x110); /* movss */
    /* ucomiss xmm1, xmm0 - sets EFLAGS */
    /* lahf - load AH from flags (used in FPU compare idiom) */
    if (1 /* jp after test - parity */) goto loc_00311D0A; /* jp: parity */

loc_00311C59: ;
    xmm1 = MEMF(ebx + 0x390); /* movss */
    /* ucomiss xmm1, xmm0 - sets EFLAGS */
    /* lahf - load AH from flags (used in FPU compare idiom) */
    if (1 /* jp after test - parity */) goto loc_00311D0A; /* jp: parity */

loc_00311C6E: ;
    SET_LO8(eax, MEM8(esi + 0x135));
    if (TEST_NZ(LO8(eax), LO8(eax))) goto loc_00311D0A; /* jne: not equal / not zero */

loc_00311C7C: ;
    edx = 0; /* xor self */
    (void)0; /* test LO16(ecx), LO16(ecx) - flags set for next jcc */
    SET_LO8(edx, (CMP_G(LO16(ecx) & LO16(ecx), 0)) ? 1 : 0); /* setg */
    PUSH32(esp, ebp);
    eax = esi;
    ebp = edx;
    PUSH32(esp, 0); sub_003132F0(); /* call 0x003132F0 */

loc_00311C8E: ;
    eax = MEM32(ebx + 0x444);
    xmm1 = xmm0; /* movaps */
    PUSH32(esp, 0); sub_0032FDA0(); /* call 0x0032FDA0 */

loc_00311C9C: ;
    edi = eax;
    ecx = edi;
    edx = esi;
    PUSH32(esp, 0); sub_00311DD0(); /* call 0x00311DD0 */

loc_00311CA7: ;
    (void)0; /* test ebp, ebp - flags set for next jcc */
    POP32(esp, ebp);
    edx = esi;
    ecx = edi;
    PUSH32(esp, 0);
    if (TEST_NZ(ebp, ebp)) goto loc_00311CB9; /* jne: not equal / not zero */

loc_00311CB2: ;
    PUSH32(esp, 0); sub_002B1B70(); /* call 0x002B1B70 */

loc_00311CB7: ;
    goto loc_00311CBE;

loc_00311CB9: ;
    PUSH32(esp, 0); sub_002B1CC0(); /* call 0x002B1CC0 */

loc_00311CBE: ;
    ebx = MEM32(eax);
    xmm0 = MEMF(eax + 4); /* movss */
    eax = MEM32(esi + 0xA4);
    esp = esp + 4;
    (void)0; /* cmp eax, ebx - flags set for next jcc */
    xmm0 = xmm0 * xmm1; /* mulss */
    MEMF(esp + 0x1C) = xmm0; /* movss */
    if (CMP_EQ(eax, ebx)) goto loc_00311D0A; /* je: equal / zero */

loc_00311CDC: ;
    eax = MEM32(esp + 0x1C);
    PUSH32(esp, 0x74818C);
    PUSH32(esp, 4);
    PUSH32(esp, 0);
    PUSH32(esp, 0);
    PUSH32(esp, 0x3E800000);
    PUSH32(esp, 1);
    PUSH32(esp, 0);
    PUSH32(esp, 0x3E800000);
    PUSH32(esp, eax);
    PUSH32(esp, esi);
    PUSH32(esp, 0); sub_002F1BD0(); /* call 0x002F1BD0 */

loc_00311D00: ;
    esp = esp + 0x28;
    POP32(esp, ebx);
    POP32(esp, edi);
    POP32(esp, esi);
    esp = esp + 0x14;
    esp += 4; return; /* ret */

loc_00311D0A: ;
    PUSH32(esp, 0); sub_003114C0(); /* call 0x003114C0 */

loc_00311D0F: ;
    POP32(esp, ebx);
    POP32(esp, edi);

loc_00311D11: ;
    POP32(esp, esi);
    esp = esp + 0x14;
    esp += 4; return; /* ret */

}

/**
 * sub_00311D20
 * Original: 0x00311D20 - 0x00311D6A (74 bytes, 20 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00311D20(void)
{
    int _flags = 0; /* fallback flag var */
    float xmm0;

loc_00311D20: ;
    ecx = MEM32(eax + 0x568);
    edx = MEM32(ecx + 0x454);
    if (CMP_NE(edx, MEM32(esp + 4))) goto loc_00311D69; /* jne: not equal / not zero */

loc_00311D32: ;
    eax = MEM32(eax + 0x3C4);
    if (TEST_Z(eax, eax)) goto loc_00311D5E; /* je: equal / zero */

loc_00311D3C: ;
    eax = eax + 4;
    edx = 1;
    PUSH32(esp, 0); sub_00036760(); /* call 0x00036760 */

loc_00311D49: ;
    if (TEST_Z(eax, eax)) goto loc_00311D5E; /* je: equal / zero */

loc_00311D4D: ;
    xmm0 = MEMF(eax + 0xDC); /* movss */
    eax = MEM32(esp + 8);
    MEMF(eax) = xmm0; /* movss */
    esp += 4; return; /* ret */

loc_00311D5E: ;
    eax = MEM32(esp + 8);
    xmm0 = 0.0f; /* xorps self = zero */
    MEMF(eax) = xmm0; /* movss */

loc_00311D69: ;
    esp += 4; return; /* ret */

}

/**
 * sub_00311D70
 * Original: 0x00311D70 - 0x00311DC8 (88 bytes, 26 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00311D70(void)
{
    int _flags = 0; /* fallback flag var */
    float xmm0;

loc_00311D70: ;
    ecx = MEM32(esi + 0x568);
    eax = MEM32(esi + 0xA4);
    edx = MEM32(ecx + 0x3DC);
    if (CMP_NE(eax, edx)) goto loc_00311D8B; /* jne: not equal / not zero */

loc_00311D86: ;
    if (CMP_NE(edx, 0xFFFFFFFFu)) goto loc_00311DC5; /* jne: not equal / not zero */

loc_00311D8B: ;
    edx = MEM32(ecx + 0x474);
    if (CMP_NE(eax, edx)) goto loc_00311D9A; /* jne: not equal / not zero */

loc_00311D95: ;
    if (CMP_NE(edx, 0xFFFFFFFFu)) goto loc_00311DC5; /* jne: not equal / not zero */

loc_00311D9A: ;
    edx = MEM32(ecx + 0x478);
    if (CMP_NE(eax, edx)) { sub_00311DC8(); return; } /* jne: not equal / not zero */

loc_00311DA4: ;
    if (CMP_EQ(edx, 0xFFFFFFFFu)) { sub_00311DC8(); return; } /* je: equal / zero */

loc_00311DA9: ;
    xmm0 = MEMF(esi + 0x648); /* movss */
    /* ucomiss xmm0, MEMF(0x648CF8) - sets EFLAGS */
    /* lahf - load AH from flags (used in FPU compare idiom) */
    if (1 /* jp after test - parity */) { sub_00311DC8(); return; } /* jp: parity */

loc_00311DBE: ;
    if (CMP_NE(MEM16(ecx + 0x20), 0)) { sub_00311DC8(); return; } /* jne: not equal / not zero */

loc_00311DC5: ;
    SET_LO8(eax, 1);
    esp += 4; return; /* ret */

}

/**
 * sub_00311DD0
 * Original: 0x00311DD0 - 0x00311E1D (77 bytes, 19 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00311DD0(void)
{
    uint32_t ebp;
    int _flags = 0; /* fallback flag var */
    float xmm0;
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_00311DD0: ;
    if (TEST_Z(ecx, ecx)) { sub_00311E1D(); return; } /* je: equal / zero */

loc_00311DD4: ;
    eax = MEM32(edx + 0x568);
    xmm0 = MEMF(eax + 0x30C); /* movss */
    /* comiss xmm0, MEMF(0x648CF8) - sets EFLAGS */
    if ((xmm0 > MEMF(0x648CF8))) goto loc_00311DF5; /* ja: above (unsigned >) */

loc_00311DEB: ;
    if (CMP_BE(MEM16(eax + 0x2C6), 0)) { sub_00311E1D(); return; } /* jbe: below or equal (unsigned <=) */

loc_00311DF5: ;
    eax = MEM32(ecx + 8);
    ecx = MEM32(ecx + 0x1C);
    eax = (uint32_t)((int32_t)eax * (int32_t)0xD8);
    xmm0 = MEMF(eax + ecx + 0xB8); /* movss */
    eax = eax + ecx;
    /* ucomiss xmm0, MEMF(eax + 0xBC) - sets EFLAGS */
    /* lahf - load AH from flags (used in FPU compare idiom) */
    if (1 /* jp after test - parity */) { sub_00311E1D(); return; } /* jp: parity */

loc_00311E19: ;
    SET_LO8(ecx, 1);
    g_seh_ebp = ebp; sub_00311E1F(); return; /* tail jmp 0x00311E1F */

}

/**
 * sub_00311E60
 * Original: 0x00311E60 - 0x00311E7C (28 bytes, 12 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00311E60(void)
{
    int _flags = 0; /* fallback flag var */

loc_00311E60: ;
    PUSH32(esp, esi);
    PUSH32(esp, edi);
    esi = ebx;
    edi = eax;
    PUSH32(esp, 0); sub_00311D70(); /* call 0x00311D70 */

loc_00311E6B: ;
    if (TEST_Z(LO8(eax), LO8(eax))) { sub_00311E7C(); return; } /* je: equal / zero */

loc_00311E6F: ;
    eax = MEM32(esp + 0xC);
    POP32(esp, edi);
    MEM32(eax) = 0xFFFFFFFFu;
    POP32(esp, esi);
    esp += 4; return; /* ret */

}

/**
 * sub_00312010
 * Original: 0x00312010 - 0x0031204C (60 bytes, 22 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00312010(void)
{
    int _flags = 0; /* fallback flag var */
    float xmm0, xmm1;

loc_00312010: ;
    PUSH32(esp, ecx);
    xmm1 = 0.0f; /* xorps self = zero */
    PUSH32(esp, edi);
    PUSH32(esp, eax);
    SET_LO8(eax, MEM8(esp + 0x14));
    edi = esp + 8;
    MEMF(esp + 8) = xmm1; /* movss */
    PUSH32(esp, 0); sub_00312E90(); /* call 0x00312E90 */

loc_00312029: ;
    xmm0 = MEMF(esp + 8); /* movss */
    ecx = eax;
    eax = MEM32(esp + 0x10);
    edx = MEM32(ecx);
    esp = esp + 4;
    /* ucomiss xmm0, xmm1 - sets EFLAGS */
    MEM32(eax) = edx;
    /* lahf - load AH from flags (used in FPU compare idiom) */
    (void)0; /* test HI8(eax), 0x44 - flags set for next jcc */
    POP32(esp, edi);
    if (1 /* jnp after test - parity */) { sub_0031204C(); return; } /* jnp: not parity */

loc_00312046: ;
    MEMF(ebx) = xmm0; /* movss */
    POP32(esp, ecx);
    esp += 4; return; /* ret */

}

/**
 * sub_00312060
 * Original: 0x00312060 - 0x003120AC (76 bytes, 19 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00312060(void)
{
    int _flags = 0; /* fallback flag var */
    float xmm0;

loc_00312060: ;
    if (TEST_Z(ecx, ecx)) { sub_003120AC(); return; } /* je: equal / zero */

loc_00312064: ;
    eax = MEM32(eax + 0x568);
    xmm0 = MEMF(eax + 0x30C); /* movss */
    /* comiss xmm0, MEMF(0x648CF8) - sets EFLAGS */
    if ((xmm0 > MEMF(0x648CF8))) goto loc_00312085; /* ja: above (unsigned >) */

loc_0031207B: ;
    if (CMP_BE(MEM16(eax + 0x2C6), 0)) { sub_003120AC(); return; } /* jbe: below or equal (unsigned <=) */

loc_00312085: ;
    edx = MEM32(ecx + 8);
    eax = MEM32(ecx + 0x1C);
    edx = (uint32_t)((int32_t)edx * (int32_t)0xD8);
    xmm0 = MEMF(eax + edx + 0xB8); /* movss */
    eax = eax + edx;
    /* ucomiss xmm0, MEMF(eax + 0xBC) - sets EFLAGS */
    /* lahf - load AH from flags (used in FPU compare idiom) */
    if (1 /* jp after test - parity */) { sub_003120AC(); return; } /* jp: parity */

loc_003120A9: ;
    SET_LO8(eax, 1);
    esp += 4; return; /* ret */

}

/**
 * sub_003120B0
 * Original: 0x003120B0 - 0x003120C2 (18 bytes, 5 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_003120B0(void)
{
    int _flags = 0; /* fallback flag var */

loc_003120B0: ;
    eax = MEM32(eax + 0x568);
    if (TEST_Z(MEM8(eax + 0x2E7), 4)) { sub_003120C2(); return; } /* je: equal / zero */

loc_003120BF: ;
    SET_LO8(eax, 1);
    esp += 4; return; /* ret */

}

/**
 * sub_003120D0
 * Original: 0x003120D0 - 0x003120F8 (40 bytes, 17 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_003120D0(void)
{
    uint32_t ebp;
    int _flags = 0; /* fallback flag var */
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_003120D0: ;
    esp = esp - 8;
    PUSH32(esp, ebp);
    ebp = MEM32(esp + 0x10);
    PUSH32(esp, esi);
    PUSH32(esp, edi);
    esi = ebp;
    edi = eax;
    PUSH32(esp, 0); sub_00311D70(); /* call 0x00311D70 */

loc_003120E3: ;
    if (TEST_Z(LO8(eax), LO8(eax))) { sub_003120F8(); return; } /* je: equal / zero */

loc_003120E7: ;
    eax = MEM32(esp + 0x1C);
    POP32(esp, edi);
    POP32(esp, esi);
    MEM32(eax) = 0xFFFFFFFFu;
    POP32(esp, ebp);
    esp = esp + 8;
    esp += 4; return; /* ret */

}

/**
 * sub_00312350
 * Original: 0x00312350 - 0x0031262A (730 bytes, 274 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00312350(void)
{
    uint32_t ebp;
    int _flags = 0; /* fallback flag var */
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_00312350: ;
    esp = esp - 8;
    (void)0; /* test LO8(ecx), LO8(ecx) - flags set for next jcc */
    PUSH32(esp, ebx);
    ebx = MEM32(esp + 0x10);
    PUSH32(esp, ebp);
    ebp = MEM32(esp + 0x18);
    PUSH32(esp, edi);
    edi = edx;
    if (TEST_Z(LO8(ecx), LO8(ecx))) goto loc_003124D0; /* je: equal / zero */

loc_00312368: ;
    if (TEST_Z(edi, edi)) goto loc_003124C3; /* je: equal / zero */

loc_00312370: ;
    if (TEST_Z(LO8(eax), LO8(eax))) goto loc_003123D7; /* je: equal / zero */

loc_00312374: ;
    PUSH32(esp, esi);
    PUSH32(esp, 0x68);
    PUSH32(esp, 0);
    PUSH32(esp, 0);
    eax = 0x2C;
    PUSH32(esp, 0); sub_002B13F0(); /* call 0x002B13F0 */

loc_00312385: ;
    esp = esp + 0x10;
    if (TEST_NZ(eax, eax)) goto loc_00312623; /* jne: not equal / not zero */

loc_00312390: ;
    SET_LO8(eax, MEM8(esp + 0x20));
    if (TEST_Z(LO8(eax), LO8(eax))) goto loc_003123D7; /* je: equal / zero */

loc_00312398: ;
    eax = MEM32(ebx + 0x568);
    eax = MEM32(eax + 0x530);
    eax = eax - 0;
    if ((eax == 0)) goto loc_003123B9; /* je: equal / zero */

loc_003123A9: ;
    eax--;
    if ((eax == 0)) goto loc_003123B4; /* je: equal / zero */

loc_003123AC: ;
    eax--;
    if ((eax != 0)) goto loc_003123D7; /* jne: not equal / not zero */

loc_003123AF: ;
    PUSH32(esp, esi);
    PUSH32(esp, 0x10);
    goto loc_003123BC;

loc_003123B4: ;
    PUSH32(esp, esi);
    PUSH32(esp, 8);
    goto loc_003123BC;

loc_003123B9: ;
    PUSH32(esp, esi);
    PUSH32(esp, 0);

loc_003123BC: ;
    PUSH32(esp, 0);
    edx = edi;
    eax = 0x2C;
    PUSH32(esp, 0);
    PUSH32(esp, 0); sub_002B13F0(); /* call 0x002B13F0 */

loc_003123CC: ;
    esp = esp + 0x10;
    if (TEST_NZ(eax, eax)) goto loc_00312623; /* jne: not equal / not zero */

loc_003123D7: ;
    SET_LO8(eax, MEM8(esp + 0x24));
    if (TEST_Z(LO8(eax), LO8(eax))) goto loc_00312444; /* je: equal / zero */

loc_003123DF: ;
    PUSH32(esp, esi);
    PUSH32(esp, 0x68);
    PUSH32(esp, 0);
    PUSH32(esp, 0);
    eax = 0x30;
    edx = edi;
    PUSH32(esp, 0); sub_002B13F0(); /* call 0x002B13F0 */

loc_003123F2: ;
    esp = esp + 0x10;
    if (TEST_NZ(eax, eax)) goto loc_00312623; /* jne: not equal / not zero */

loc_003123FD: ;
    SET_LO8(eax, MEM8(esp + 0x20));
    if (TEST_Z(LO8(eax), LO8(eax))) goto loc_00312444; /* je: equal / zero */

loc_00312405: ;
    ecx = MEM32(ebx + 0x568);
    eax = MEM32(ecx + 0x530);
    eax = eax - 0;
    if ((eax == 0)) goto loc_00312426; /* je: equal / zero */

loc_00312416: ;
    eax--;
    if ((eax == 0)) goto loc_00312421; /* je: equal / zero */

loc_00312419: ;
    eax--;
    if ((eax != 0)) goto loc_00312444; /* jne: not equal / not zero */

loc_0031241C: ;
    PUSH32(esp, esi);
    PUSH32(esp, 0x10);
    goto loc_00312429;

loc_00312421: ;
    PUSH32(esp, esi);
    PUSH32(esp, 8);
    goto loc_00312429;

loc_00312426: ;
    PUSH32(esp, esi);
    PUSH32(esp, 0);

loc_00312429: ;
    PUSH32(esp, 0);
    edx = edi;
    eax = 0x30;
    PUSH32(esp, 0);
    PUSH32(esp, 0); sub_002B13F0(); /* call 0x002B13F0 */

loc_00312439: ;
    esp = esp + 0x10;
    if (TEST_NZ(eax, eax)) goto loc_00312623; /* jne: not equal / not zero */

loc_00312444: ;
    eax = 0; /* xor self */
    edx = esp + 0x10;
    MEM32(esp + 0xC) = eax;
    MEM32(esp + 0x10) = eax;
    PUSH32(esp, edx);
    eax = esp + 0x10;
    PUSH32(esp, eax);
    edx = edi;
    PUSH32(esp, 0); sub_002B1210(); /* call 0x002B1210 */

loc_0031245F: ;
    esp = esp + 8;
    if (TEST_Z(LO8(eax), LO8(eax))) goto loc_003124A4; /* je: equal / zero */

loc_00312466: ;
    eax = MEM32(esp + 0xC);
    if (TEST_Z(eax, eax)) goto loc_00312487; /* je: equal / zero */

loc_0031246E: ;
    eax = eax + 0x28;
    if ((eax == 0)) goto loc_00312487; /* je: equal / zero */

loc_00312473: ;
    eax = MEM32(eax);
    if (TEST_Z(eax, eax)) goto loc_00312487; /* je: equal / zero */

loc_00312479: ;
    ecx = MEM32(eax + 0x68);
    eax = eax + 0x68;
    if (TEST_NZ(ecx, ecx)) goto loc_00312623; /* jne: not equal / not zero */

loc_00312487: ;
    eax = MEM32(esp + 0x10);
    eax = eax + 0x28;
    if ((eax == 0)) goto loc_003124A4; /* je: equal / zero */

loc_00312490: ;
    eax = MEM32(eax);
    if (TEST_Z(eax, eax)) goto loc_003124A4; /* je: equal / zero */

loc_00312496: ;
    ecx = MEM32(eax + 0x68);
    eax = eax + 0x68;
    if (TEST_NZ(ecx, ecx)) goto loc_00312623; /* jne: not equal / not zero */

loc_003124A4: ;
    SET_LO8(eax, MEM8(esp + 0x20));
    if (TEST_Z(LO8(eax), LO8(eax))) goto loc_003124C3; /* je: equal / zero */

loc_003124AC: ;
    PUSH32(esp, esi);
    PUSH32(esp, 0);
    SET_LO8(edx, 0); /* xor self */
    eax = ebx;
    PUSH32(esp, 0); sub_002B1640(); /* call 0x002B1640 */

loc_003124B8: ;
    esp = esp + 8;
    if (TEST_NZ(eax, eax)) goto loc_00312623; /* jne: not equal / not zero */

loc_003124C3: ;
    eax = MEM32(ebp);
    POP32(esp, edi);
    POP32(esp, ebp);
    eax = eax + 0x68;
    POP32(esp, ebx);
    esp = esp + 8;
    esp += 4; return; /* ret */

loc_003124D0: ;
    if (TEST_Z(edi, edi)) goto loc_0031261D; /* je: equal / zero */

loc_003124D8: ;
    if (TEST_Z(LO8(eax), LO8(eax))) goto loc_00312541; /* je: equal / zero */

loc_003124DC: ;
    PUSH32(esp, esi);
    PUSH32(esp, 0x60);
    PUSH32(esp, 0);
    PUSH32(esp, 0);
    eax = 0x2C;
    edx = edi;
    PUSH32(esp, 0); sub_002B13F0(); /* call 0x002B13F0 */

loc_003124EF: ;
    esp = esp + 0x10;
    if (TEST_NZ(eax, eax)) goto loc_00312623; /* jne: not equal / not zero */

loc_003124FA: ;
    SET_LO8(eax, MEM8(esp + 0x20));
    if (TEST_Z(LO8(eax), LO8(eax))) goto loc_00312541; /* je: equal / zero */

loc_00312502: ;
    ecx = MEM32(ebx + 0x568);
    eax = MEM32(ecx + 0x530);
    eax = eax - 0;
    if ((eax == 0)) goto loc_00312523; /* je: equal / zero */

loc_00312513: ;
    eax--;
    if ((eax == 0)) goto loc_0031251E; /* je: equal / zero */

loc_00312516: ;
    eax--;
    if ((eax != 0)) goto loc_00312541; /* jne: not equal / not zero */

loc_00312519: ;
    PUSH32(esp, esi);
    PUSH32(esp, 0x10);
    goto loc_00312526;

loc_0031251E: ;
    PUSH32(esp, esi);
    PUSH32(esp, 8);
    goto loc_00312526;

loc_00312523: ;
    PUSH32(esp, esi);
    PUSH32(esp, 0);

loc_00312526: ;
    PUSH32(esp, 0);
    edx = edi;
    eax = 0x2C;
    PUSH32(esp, 0);
    PUSH32(esp, 0); sub_002B13F0(); /* call 0x002B13F0 */

loc_00312536: ;
    esp = esp + 0x10;
    if (TEST_NZ(eax, eax)) goto loc_00312623; /* jne: not equal / not zero */

loc_00312541: ;
    SET_LO8(eax, MEM8(esp + 0x24));
    if (TEST_Z(LO8(eax), LO8(eax))) goto loc_003125AA; /* je: equal / zero */

loc_00312549: ;
    PUSH32(esp, esi);
    PUSH32(esp, 0x60);
    PUSH32(esp, 0);
    PUSH32(esp, 0);
    eax = 0x30;
    edx = edi;
    PUSH32(esp, 0); sub_002B13F0(); /* call 0x002B13F0 */

loc_0031255C: ;
    esp = esp + 0x10;
    if (TEST_NZ(eax, eax)) goto loc_00312623; /* jne: not equal / not zero */

loc_00312567: ;
    SET_LO8(eax, MEM8(esp + 0x20));
    if (TEST_Z(LO8(eax), LO8(eax))) goto loc_003125AA; /* je: equal / zero */

loc_0031256F: ;
    edx = MEM32(ebx + 0x568);
    eax = MEM32(edx + 0x530);
    eax = eax - 0;
    if ((eax == 0)) goto loc_00312590; /* je: equal / zero */

loc_00312580: ;
    eax--;
    if ((eax == 0)) goto loc_0031258B; /* je: equal / zero */

loc_00312583: ;
    eax--;
    if ((eax != 0)) goto loc_003125AA; /* jne: not equal / not zero */

loc_00312586: ;
    PUSH32(esp, esi);
    PUSH32(esp, 0x10);
    goto loc_00312593;

loc_0031258B: ;
    PUSH32(esp, esi);
    PUSH32(esp, 8);
    goto loc_00312593;

loc_00312590: ;
    PUSH32(esp, esi);
    PUSH32(esp, 0);

loc_00312593: ;
    PUSH32(esp, 0);
    edx = edi;
    eax = 0x30;
    PUSH32(esp, 0);
    PUSH32(esp, 0); sub_002B13F0(); /* call 0x002B13F0 */

loc_003125A3: ;
    esp = esp + 0x10;
    if (TEST_NZ(eax, eax)) goto loc_00312623; /* jne: not equal / not zero */

loc_003125AA: ;
    eax = 0; /* xor self */
    MEM32(esp + 0x10) = eax;
    MEM32(esp + 0xC) = eax;
    eax = esp + 0xC;
    PUSH32(esp, eax);
    ecx = esp + 0x14;
    PUSH32(esp, ecx);
    edx = edi;
    PUSH32(esp, 0); sub_002B1210(); /* call 0x002B1210 */

loc_003125C5: ;
    esp = esp + 8;
    if (TEST_Z(LO8(eax), LO8(eax))) goto loc_00312602; /* je: equal / zero */

loc_003125CC: ;
    eax = MEM32(esp + 0x10);
    if (TEST_Z(eax, eax)) goto loc_003125E9; /* je: equal / zero */

loc_003125D4: ;
    eax = eax + 0x28;
    if ((eax == 0)) goto loc_003125E9; /* je: equal / zero */

loc_003125D9: ;
    eax = MEM32(eax);
    if (TEST_Z(eax, eax)) goto loc_003125E9; /* je: equal / zero */

loc_003125DF: ;
    ecx = MEM32(eax + 0x60);
    eax = eax + 0x60;
    if (TEST_NZ(ecx, ecx)) goto loc_00312623; /* jne: not equal / not zero */

loc_003125E9: ;
    eax = MEM32(esp + 0xC);
    eax = eax + 0x28;
    if ((eax == 0)) goto loc_00312602; /* je: equal / zero */

loc_003125F2: ;
    eax = MEM32(eax);
    if (TEST_Z(eax, eax)) goto loc_00312602; /* je: equal / zero */

loc_003125F8: ;
    ecx = MEM32(eax + 0x60);
    eax = eax + 0x60;
    if (TEST_NZ(ecx, ecx)) goto loc_00312623; /* jne: not equal / not zero */

loc_00312602: ;
    SET_LO8(eax, MEM8(esp + 0x20));
    if (TEST_Z(LO8(eax), LO8(eax))) goto loc_0031261D; /* je: equal / zero */

loc_0031260A: ;
    PUSH32(esp, esi);
    PUSH32(esp, 0);
    SET_LO8(edx, 0); /* xor self */
    eax = ebx;
    PUSH32(esp, 0); sub_002B1640(); /* call 0x002B1640 */

loc_00312616: ;
    esp = esp + 8;
    if (TEST_NZ(eax, eax)) goto loc_00312623; /* jne: not equal / not zero */

loc_0031261D: ;
    eax = MEM32(ebp);
    eax = eax + 0x60;

loc_00312623: ;
    POP32(esp, edi);
    POP32(esp, ebp);
    POP32(esp, ebx);
    esp = esp + 8;
    esp += 4; return; /* ret */

}

/**
 * sub_00312630
 * Original: 0x00312630 - 0x003128C8 (664 bytes, 250 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00312630(void)
{
    uint32_t ebp;
    int _flags = 0; /* fallback flag var */
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_00312630: ;
    esp = esp - 8;
    (void)0; /* test LO8(ecx), LO8(ecx) - flags set for next jcc */
    PUSH32(esp, ebx);
    ebx = MEM32(esp + 0x10);
    PUSH32(esp, ebp);
    ebp = MEM32(esp + 0x18);
    PUSH32(esp, edi);
    edi = edx;
    if (TEST_Z(LO8(ecx), LO8(ecx))) goto loc_0031276E; /* je: equal / zero */

loc_00312648: ;
    if (TEST_Z(edi, edi)) goto loc_00312761; /* je: equal / zero */

loc_00312650: ;
    if (TEST_Z(LO8(eax), LO8(eax))) goto loc_003126B7; /* je: equal / zero */

loc_00312654: ;
    PUSH32(esp, esi);
    PUSH32(esp, 0x38);
    PUSH32(esp, 0);
    PUSH32(esp, 0);
    eax = 0x2C;
    PUSH32(esp, 0); sub_002B13F0(); /* call 0x002B13F0 */

loc_00312665: ;
    esp = esp + 0x10;
    if (TEST_NZ(eax, eax)) goto loc_003128C1; /* jne: not equal / not zero */

loc_00312670: ;
    SET_LO8(eax, MEM8(esp + 0x20));
    if (TEST_Z(LO8(eax), LO8(eax))) goto loc_003126B7; /* je: equal / zero */

loc_00312678: ;
    eax = MEM32(ebx + 0x568);
    eax = MEM32(eax + 0x530);
    eax = eax - 0;
    if ((eax == 0)) goto loc_00312699; /* je: equal / zero */

loc_00312689: ;
    eax--;
    if ((eax == 0)) goto loc_00312694; /* je: equal / zero */

loc_0031268C: ;
    eax--;
    if ((eax != 0)) goto loc_003126B7; /* jne: not equal / not zero */

loc_0031268F: ;
    PUSH32(esp, esi);
    PUSH32(esp, 0x10);
    goto loc_0031269C;

loc_00312694: ;
    PUSH32(esp, esi);
    PUSH32(esp, 8);
    goto loc_0031269C;

loc_00312699: ;
    PUSH32(esp, esi);
    PUSH32(esp, 0);

loc_0031269C: ;
    PUSH32(esp, 0);
    edx = edi;
    eax = 0x2C;
    PUSH32(esp, 0);
    PUSH32(esp, 0); sub_002B13F0(); /* call 0x002B13F0 */

loc_003126AC: ;
    esp = esp + 0x10;
    if (TEST_NZ(eax, eax)) goto loc_003128C1; /* jne: not equal / not zero */

loc_003126B7: ;
    SET_LO8(eax, MEM8(esp + 0x24));
    if (TEST_Z(LO8(eax), LO8(eax))) goto loc_00312724; /* je: equal / zero */

loc_003126BF: ;
    PUSH32(esp, esi);
    PUSH32(esp, 0x38);
    PUSH32(esp, 0);
    PUSH32(esp, 0);
    eax = 0x30;
    edx = edi;
    PUSH32(esp, 0); sub_002B13F0(); /* call 0x002B13F0 */

loc_003126D2: ;
    esp = esp + 0x10;
    if (TEST_NZ(eax, eax)) goto loc_003128C1; /* jne: not equal / not zero */

loc_003126DD: ;
    SET_LO8(eax, MEM8(esp + 0x20));
    if (TEST_Z(LO8(eax), LO8(eax))) goto loc_00312724; /* je: equal / zero */

loc_003126E5: ;
    ecx = MEM32(ebx + 0x568);
    eax = MEM32(ecx + 0x530);
    eax = eax - 0;
    if ((eax == 0)) goto loc_00312706; /* je: equal / zero */

loc_003126F6: ;
    eax--;
    if ((eax == 0)) goto loc_00312701; /* je: equal / zero */

loc_003126F9: ;
    eax--;
    if ((eax != 0)) goto loc_00312724; /* jne: not equal / not zero */

loc_003126FC: ;
    PUSH32(esp, esi);
    PUSH32(esp, 0x10);
    goto loc_00312709;

loc_00312701: ;
    PUSH32(esp, esi);
    PUSH32(esp, 8);
    goto loc_00312709;

loc_00312706: ;
    PUSH32(esp, esi);
    PUSH32(esp, 0);

loc_00312709: ;
    PUSH32(esp, 0);
    edx = edi;
    eax = 0x30;
    PUSH32(esp, 0);
    PUSH32(esp, 0); sub_002B13F0(); /* call 0x002B13F0 */

loc_00312719: ;
    esp = esp + 0x10;
    if (TEST_NZ(eax, eax)) goto loc_003128C1; /* jne: not equal / not zero */

loc_00312724: ;
    PUSH32(esp, esi);
    PUSH32(esp, 0x38);
    PUSH32(esp, 0);
    PUSH32(esp, 0);
    eax = 0x28;
    edx = edi;
    PUSH32(esp, 0); sub_002B13F0(); /* call 0x002B13F0 */

loc_00312737: ;
    esp = esp + 0x10;
    if (TEST_NZ(eax, eax)) goto loc_003128C1; /* jne: not equal / not zero */

loc_00312742: ;
    SET_LO8(eax, MEM8(esp + 0x20));
    if (TEST_Z(LO8(eax), LO8(eax))) goto loc_00312761; /* je: equal / zero */

loc_0031274A: ;
    PUSH32(esp, esi);
    PUSH32(esp, 0);
    SET_LO8(edx, 0); /* xor self */
    eax = ebx;
    PUSH32(esp, 0); sub_002B1640(); /* call 0x002B1640 */

loc_00312756: ;
    esp = esp + 8;
    if (TEST_NZ(eax, eax)) goto loc_003128C1; /* jne: not equal / not zero */

loc_00312761: ;
    eax = MEM32(ebp);
    POP32(esp, edi);
    POP32(esp, ebp);
    eax = eax + 0x38;
    POP32(esp, ebx);
    esp = esp + 8;
    esp += 4; return; /* ret */

loc_0031276E: ;
    if (TEST_Z(edi, edi)) goto loc_003128BB; /* je: equal / zero */

loc_00312776: ;
    if (TEST_Z(LO8(eax), LO8(eax))) goto loc_003127DF; /* je: equal / zero */

loc_0031277A: ;
    PUSH32(esp, esi);
    PUSH32(esp, 0x30);
    PUSH32(esp, 0);
    PUSH32(esp, 0);
    eax = 0x2C;
    edx = edi;
    PUSH32(esp, 0); sub_002B13F0(); /* call 0x002B13F0 */

loc_0031278D: ;
    esp = esp + 0x10;
    if (TEST_NZ(eax, eax)) goto loc_003128C1; /* jne: not equal / not zero */

loc_00312798: ;
    SET_LO8(eax, MEM8(esp + 0x20));
    if (TEST_Z(LO8(eax), LO8(eax))) goto loc_003127DF; /* je: equal / zero */

loc_003127A0: ;
    edx = MEM32(ebx + 0x568);
    eax = MEM32(edx + 0x530);
    eax = eax - 0;
    if ((eax == 0)) goto loc_003127C1; /* je: equal / zero */

loc_003127B1: ;
    eax--;
    if ((eax == 0)) goto loc_003127BC; /* je: equal / zero */

loc_003127B4: ;
    eax--;
    if ((eax != 0)) goto loc_003127DF; /* jne: not equal / not zero */

loc_003127B7: ;
    PUSH32(esp, esi);
    PUSH32(esp, 0x10);
    goto loc_003127C4;

loc_003127BC: ;
    PUSH32(esp, esi);
    PUSH32(esp, 8);
    goto loc_003127C4;

loc_003127C1: ;
    PUSH32(esp, esi);
    PUSH32(esp, 0);

loc_003127C4: ;
    PUSH32(esp, 0);
    edx = edi;
    eax = 0x2C;
    PUSH32(esp, 0);
    PUSH32(esp, 0); sub_002B13F0(); /* call 0x002B13F0 */

loc_003127D4: ;
    esp = esp + 0x10;
    if (TEST_NZ(eax, eax)) goto loc_003128C1; /* jne: not equal / not zero */

loc_003127DF: ;
    SET_LO8(eax, MEM8(esp + 0x24));
    if (TEST_Z(LO8(eax), LO8(eax))) goto loc_00312848; /* je: equal / zero */

loc_003127E7: ;
    PUSH32(esp, esi);
    PUSH32(esp, 0x30);
    PUSH32(esp, 0);
    PUSH32(esp, 0);
    eax = 0x30;
    edx = edi;
    PUSH32(esp, 0); sub_002B13F0(); /* call 0x002B13F0 */

loc_003127FA: ;
    esp = esp + 0x10;
    if (TEST_NZ(eax, eax)) goto loc_003128C1; /* jne: not equal / not zero */

loc_00312805: ;
    SET_LO8(eax, MEM8(esp + 0x20));
    if (TEST_Z(LO8(eax), LO8(eax))) goto loc_00312848; /* je: equal / zero */

loc_0031280D: ;
    eax = MEM32(ebx + 0x568);
    eax = MEM32(eax + 0x530);
    eax = eax - 0;
    if ((eax == 0)) goto loc_0031282E; /* je: equal / zero */

loc_0031281E: ;
    eax--;
    if ((eax == 0)) goto loc_00312829; /* je: equal / zero */

loc_00312821: ;
    eax--;
    if ((eax != 0)) goto loc_00312848; /* jne: not equal / not zero */

loc_00312824: ;
    PUSH32(esp, esi);
    PUSH32(esp, 0x10);
    goto loc_00312831;

loc_00312829: ;
    PUSH32(esp, esi);
    PUSH32(esp, 8);
    goto loc_00312831;

loc_0031282E: ;
    PUSH32(esp, esi);
    PUSH32(esp, 0);

loc_00312831: ;
    PUSH32(esp, 0);
    edx = edi;
    eax = 0x30;
    PUSH32(esp, 0);
    PUSH32(esp, 0); sub_002B13F0(); /* call 0x002B13F0 */

loc_00312841: ;
    esp = esp + 0x10;
    if (TEST_NZ(eax, eax)) goto loc_003128C1; /* jne: not equal / not zero */

loc_00312848: ;
    ecx = esp + 0x10;
    PUSH32(esp, ecx);
    edx = esp + 0x10;
    eax = 0; /* xor self */
    PUSH32(esp, edx);
    edx = edi;
    MEM32(esp + 0x14) = eax;
    MEM32(esp + 0x18) = eax;
    PUSH32(esp, 0); sub_002B1210(); /* call 0x002B1210 */

loc_00312863: ;
    esp = esp + 8;
    if (TEST_Z(LO8(eax), LO8(eax))) goto loc_003128A0; /* je: equal / zero */

loc_0031286A: ;
    eax = MEM32(esp + 0xC);
    if (TEST_Z(eax, eax)) goto loc_00312887; /* je: equal / zero */

loc_00312872: ;
    eax = eax + 0x28;
    if ((eax == 0)) goto loc_00312887; /* je: equal / zero */

loc_00312877: ;
    eax = MEM32(eax);
    if (TEST_Z(eax, eax)) goto loc_00312887; /* je: equal / zero */

loc_0031287D: ;
    ecx = MEM32(eax + 0x30);
    eax = eax + 0x30;
    if (TEST_NZ(ecx, ecx)) goto loc_003128C1; /* jne: not equal / not zero */

loc_00312887: ;
    eax = MEM32(esp + 0x10);
    eax = eax + 0x28;
    if ((eax == 0)) goto loc_003128A0; /* je: equal / zero */

loc_00312890: ;
    eax = MEM32(eax);
    if (TEST_Z(eax, eax)) goto loc_003128A0; /* je: equal / zero */

loc_00312896: ;
    ecx = MEM32(eax + 0x30);
    eax = eax + 0x30;
    if (TEST_NZ(ecx, ecx)) goto loc_003128C1; /* jne: not equal / not zero */

loc_003128A0: ;
    SET_LO8(eax, MEM8(esp + 0x20));
    if (TEST_Z(LO8(eax), LO8(eax))) goto loc_003128BB; /* je: equal / zero */

loc_003128A8: ;
    PUSH32(esp, esi);
    PUSH32(esp, 0);
    SET_LO8(edx, 0); /* xor self */
    eax = ebx;
    PUSH32(esp, 0); sub_002B1640(); /* call 0x002B1640 */

loc_003128B4: ;
    esp = esp + 8;
    if (TEST_NZ(eax, eax)) goto loc_003128C1; /* jne: not equal / not zero */

loc_003128BB: ;
    eax = MEM32(ebp);
    eax = eax + 0x30;

loc_003128C1: ;
    POP32(esp, edi);
    POP32(esp, ebp);
    POP32(esp, ebx);
    esp = esp + 8;
    esp += 4; return; /* ret */

}

/**
 * sub_003128D0
 * Original: 0x003128D0 - 0x00312BAA (730 bytes, 274 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_003128D0(void)
{
    uint32_t ebp;
    int _flags = 0; /* fallback flag var */
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_003128D0: ;
    esp = esp - 8;
    (void)0; /* test LO8(ecx), LO8(ecx) - flags set for next jcc */
    PUSH32(esp, ebx);
    ebx = MEM32(esp + 0x10);
    PUSH32(esp, ebp);
    ebp = MEM32(esp + 0x18);
    PUSH32(esp, edi);
    edi = edx;
    if (TEST_Z(LO8(ecx), LO8(ecx))) goto loc_00312A50; /* je: equal / zero */

loc_003128E8: ;
    if (TEST_Z(edi, edi)) goto loc_00312A43; /* je: equal / zero */

loc_003128F0: ;
    if (TEST_Z(LO8(eax), LO8(eax))) goto loc_00312957; /* je: equal / zero */

loc_003128F4: ;
    PUSH32(esp, esi);
    PUSH32(esp, 0x50);
    PUSH32(esp, 0);
    PUSH32(esp, 0);
    eax = 0x2C;
    PUSH32(esp, 0); sub_002B13F0(); /* call 0x002B13F0 */

loc_00312905: ;
    esp = esp + 0x10;
    if (TEST_NZ(eax, eax)) goto loc_00312BA3; /* jne: not equal / not zero */

loc_00312910: ;
    SET_LO8(eax, MEM8(esp + 0x20));
    if (TEST_Z(LO8(eax), LO8(eax))) goto loc_00312957; /* je: equal / zero */

loc_00312918: ;
    eax = MEM32(ebx + 0x568);
    eax = MEM32(eax + 0x530);
    eax = eax - 0;
    if ((eax == 0)) goto loc_00312939; /* je: equal / zero */

loc_00312929: ;
    eax--;
    if ((eax == 0)) goto loc_00312934; /* je: equal / zero */

loc_0031292C: ;
    eax--;
    if ((eax != 0)) goto loc_00312957; /* jne: not equal / not zero */

loc_0031292F: ;
    PUSH32(esp, esi);
    PUSH32(esp, 0x10);
    goto loc_0031293C;

loc_00312934: ;
    PUSH32(esp, esi);
    PUSH32(esp, 8);
    goto loc_0031293C;

loc_00312939: ;
    PUSH32(esp, esi);
    PUSH32(esp, 0);

loc_0031293C: ;
    PUSH32(esp, 0);
    edx = edi;
    eax = 0x2C;
    PUSH32(esp, 0);
    PUSH32(esp, 0); sub_002B13F0(); /* call 0x002B13F0 */

loc_0031294C: ;
    esp = esp + 0x10;
    if (TEST_NZ(eax, eax)) goto loc_00312BA3; /* jne: not equal / not zero */

loc_00312957: ;
    SET_LO8(eax, MEM8(esp + 0x24));
    if (TEST_Z(LO8(eax), LO8(eax))) goto loc_003129C4; /* je: equal / zero */

loc_0031295F: ;
    PUSH32(esp, esi);
    PUSH32(esp, 0x50);
    PUSH32(esp, 0);
    PUSH32(esp, 0);
    eax = 0x30;
    edx = edi;
    PUSH32(esp, 0); sub_002B13F0(); /* call 0x002B13F0 */

loc_00312972: ;
    esp = esp + 0x10;
    if (TEST_NZ(eax, eax)) goto loc_00312BA3; /* jne: not equal / not zero */

loc_0031297D: ;
    SET_LO8(eax, MEM8(esp + 0x20));
    if (TEST_Z(LO8(eax), LO8(eax))) goto loc_003129C4; /* je: equal / zero */

loc_00312985: ;
    ecx = MEM32(ebx + 0x568);
    eax = MEM32(ecx + 0x530);
    eax = eax - 0;
    if ((eax == 0)) goto loc_003129A6; /* je: equal / zero */

loc_00312996: ;
    eax--;
    if ((eax == 0)) goto loc_003129A1; /* je: equal / zero */

loc_00312999: ;
    eax--;
    if ((eax != 0)) goto loc_003129C4; /* jne: not equal / not zero */

loc_0031299C: ;
    PUSH32(esp, esi);
    PUSH32(esp, 0x10);
    goto loc_003129A9;

loc_003129A1: ;
    PUSH32(esp, esi);
    PUSH32(esp, 8);
    goto loc_003129A9;

loc_003129A6: ;
    PUSH32(esp, esi);
    PUSH32(esp, 0);

loc_003129A9: ;
    PUSH32(esp, 0);
    edx = edi;
    eax = 0x30;
    PUSH32(esp, 0);
    PUSH32(esp, 0); sub_002B13F0(); /* call 0x002B13F0 */

loc_003129B9: ;
    esp = esp + 0x10;
    if (TEST_NZ(eax, eax)) goto loc_00312BA3; /* jne: not equal / not zero */

loc_003129C4: ;
    eax = 0; /* xor self */
    edx = esp + 0x10;
    MEM32(esp + 0xC) = eax;
    MEM32(esp + 0x10) = eax;
    PUSH32(esp, edx);
    eax = esp + 0x10;
    PUSH32(esp, eax);
    edx = edi;
    PUSH32(esp, 0); sub_002B1210(); /* call 0x002B1210 */

loc_003129DF: ;
    esp = esp + 8;
    if (TEST_Z(LO8(eax), LO8(eax))) goto loc_00312A24; /* je: equal / zero */

loc_003129E6: ;
    eax = MEM32(esp + 0xC);
    if (TEST_Z(eax, eax)) goto loc_00312A07; /* je: equal / zero */

loc_003129EE: ;
    eax = eax + 0x28;
    if ((eax == 0)) goto loc_00312A07; /* je: equal / zero */

loc_003129F3: ;
    eax = MEM32(eax);
    if (TEST_Z(eax, eax)) goto loc_00312A07; /* je: equal / zero */

loc_003129F9: ;
    ecx = MEM32(eax + 0x50);
    eax = eax + 0x50;
    if (TEST_NZ(ecx, ecx)) goto loc_00312BA3; /* jne: not equal / not zero */

loc_00312A07: ;
    eax = MEM32(esp + 0x10);
    eax = eax + 0x28;
    if ((eax == 0)) goto loc_00312A24; /* je: equal / zero */

loc_00312A10: ;
    eax = MEM32(eax);
    if (TEST_Z(eax, eax)) goto loc_00312A24; /* je: equal / zero */

loc_00312A16: ;
    ecx = MEM32(eax + 0x50);
    eax = eax + 0x50;
    if (TEST_NZ(ecx, ecx)) goto loc_00312BA3; /* jne: not equal / not zero */

loc_00312A24: ;
    SET_LO8(eax, MEM8(esp + 0x20));
    if (TEST_Z(LO8(eax), LO8(eax))) goto loc_00312A43; /* je: equal / zero */

loc_00312A2C: ;
    PUSH32(esp, esi);
    PUSH32(esp, 0);
    SET_LO8(edx, 0); /* xor self */
    eax = ebx;
    PUSH32(esp, 0); sub_002B1640(); /* call 0x002B1640 */

loc_00312A38: ;
    esp = esp + 8;
    if (TEST_NZ(eax, eax)) goto loc_00312BA3; /* jne: not equal / not zero */

loc_00312A43: ;
    eax = MEM32(ebp);
    POP32(esp, edi);
    POP32(esp, ebp);
    eax = eax + 0x50;
    POP32(esp, ebx);
    esp = esp + 8;
    esp += 4; return; /* ret */

loc_00312A50: ;
    if (TEST_Z(edi, edi)) goto loc_00312B9D; /* je: equal / zero */

loc_00312A58: ;
    if (TEST_Z(LO8(eax), LO8(eax))) goto loc_00312AC1; /* je: equal / zero */

loc_00312A5C: ;
    PUSH32(esp, esi);
    PUSH32(esp, 0x40);
    PUSH32(esp, 0);
    PUSH32(esp, 0);
    eax = 0x2C;
    edx = edi;
    PUSH32(esp, 0); sub_002B13F0(); /* call 0x002B13F0 */

loc_00312A6F: ;
    esp = esp + 0x10;
    if (TEST_NZ(eax, eax)) goto loc_00312BA3; /* jne: not equal / not zero */

loc_00312A7A: ;
    SET_LO8(eax, MEM8(esp + 0x20));
    if (TEST_Z(LO8(eax), LO8(eax))) goto loc_00312AC1; /* je: equal / zero */

loc_00312A82: ;
    ecx = MEM32(ebx + 0x568);
    eax = MEM32(ecx + 0x530);
    eax = eax - 0;
    if ((eax == 0)) goto loc_00312AA3; /* je: equal / zero */

loc_00312A93: ;
    eax--;
    if ((eax == 0)) goto loc_00312A9E; /* je: equal / zero */

loc_00312A96: ;
    eax--;
    if ((eax != 0)) goto loc_00312AC1; /* jne: not equal / not zero */

loc_00312A99: ;
    PUSH32(esp, esi);
    PUSH32(esp, 0x10);
    goto loc_00312AA6;

loc_00312A9E: ;
    PUSH32(esp, esi);
    PUSH32(esp, 8);
    goto loc_00312AA6;

loc_00312AA3: ;
    PUSH32(esp, esi);
    PUSH32(esp, 0);

loc_00312AA6: ;
    PUSH32(esp, 0);
    edx = edi;
    eax = 0x2C;
    PUSH32(esp, 0);
    PUSH32(esp, 0); sub_002B13F0(); /* call 0x002B13F0 */

loc_00312AB6: ;
    esp = esp + 0x10;
    if (TEST_NZ(eax, eax)) goto loc_00312BA3; /* jne: not equal / not zero */

loc_00312AC1: ;
    SET_LO8(eax, MEM8(esp + 0x24));
    if (TEST_Z(LO8(eax), LO8(eax))) goto loc_00312B2A; /* je: equal / zero */

loc_00312AC9: ;
    PUSH32(esp, esi);
    PUSH32(esp, 0x40);
    PUSH32(esp, 0);
    PUSH32(esp, 0);
    eax = 0x30;
    edx = edi;
    PUSH32(esp, 0); sub_002B13F0(); /* call 0x002B13F0 */

loc_00312ADC: ;
    esp = esp + 0x10;
    if (TEST_NZ(eax, eax)) goto loc_00312BA3; /* jne: not equal / not zero */

loc_00312AE7: ;
    SET_LO8(eax, MEM8(esp + 0x20));
    if (TEST_Z(LO8(eax), LO8(eax))) goto loc_00312B2A; /* je: equal / zero */

loc_00312AEF: ;
    edx = MEM32(ebx + 0x568);
    eax = MEM32(edx + 0x530);
    eax = eax - 0;
    if ((eax == 0)) goto loc_00312B10; /* je: equal / zero */

loc_00312B00: ;
    eax--;
    if ((eax == 0)) goto loc_00312B0B; /* je: equal / zero */

loc_00312B03: ;
    eax--;
    if ((eax != 0)) goto loc_00312B2A; /* jne: not equal / not zero */

loc_00312B06: ;
    PUSH32(esp, esi);
    PUSH32(esp, 0x10);
    goto loc_00312B13;

loc_00312B0B: ;
    PUSH32(esp, esi);
    PUSH32(esp, 8);
    goto loc_00312B13;

loc_00312B10: ;
    PUSH32(esp, esi);
    PUSH32(esp, 0);

loc_00312B13: ;
    PUSH32(esp, 0);
    edx = edi;
    eax = 0x30;
    PUSH32(esp, 0);
    PUSH32(esp, 0); sub_002B13F0(); /* call 0x002B13F0 */

loc_00312B23: ;
    esp = esp + 0x10;
    if (TEST_NZ(eax, eax)) goto loc_00312BA3; /* jne: not equal / not zero */

loc_00312B2A: ;
    eax = 0; /* xor self */
    MEM32(esp + 0x10) = eax;
    MEM32(esp + 0xC) = eax;
    eax = esp + 0xC;
    PUSH32(esp, eax);
    ecx = esp + 0x14;
    PUSH32(esp, ecx);
    edx = edi;
    PUSH32(esp, 0); sub_002B1210(); /* call 0x002B1210 */

loc_00312B45: ;
    esp = esp + 8;
    if (TEST_Z(LO8(eax), LO8(eax))) goto loc_00312B82; /* je: equal / zero */

loc_00312B4C: ;
    eax = MEM32(esp + 0x10);
    if (TEST_Z(eax, eax)) goto loc_00312B69; /* je: equal / zero */

loc_00312B54: ;
    eax = eax + 0x28;
    if ((eax == 0)) goto loc_00312B69; /* je: equal / zero */

loc_00312B59: ;
    eax = MEM32(eax);
    if (TEST_Z(eax, eax)) goto loc_00312B69; /* je: equal / zero */

loc_00312B5F: ;
    ecx = MEM32(eax + 0x40);
    eax = eax + 0x40;
    if (TEST_NZ(ecx, ecx)) goto loc_00312BA3; /* jne: not equal / not zero */

loc_00312B69: ;
    eax = MEM32(esp + 0xC);
    eax = eax + 0x28;
    if ((eax == 0)) goto loc_00312B82; /* je: equal / zero */

loc_00312B72: ;
    eax = MEM32(eax);
    if (TEST_Z(eax, eax)) goto loc_00312B82; /* je: equal / zero */

loc_00312B78: ;
    ecx = MEM32(eax + 0x40);
    eax = eax + 0x40;
    if (TEST_NZ(ecx, ecx)) goto loc_00312BA3; /* jne: not equal / not zero */

loc_00312B82: ;
    SET_LO8(eax, MEM8(esp + 0x20));
    if (TEST_Z(LO8(eax), LO8(eax))) goto loc_00312B9D; /* je: equal / zero */

loc_00312B8A: ;
    PUSH32(esp, esi);
    PUSH32(esp, 0);
    SET_LO8(edx, 0); /* xor self */
    eax = ebx;
    PUSH32(esp, 0); sub_002B1640(); /* call 0x002B1640 */

loc_00312B96: ;
    esp = esp + 8;
    if (TEST_NZ(eax, eax)) goto loc_00312BA3; /* jne: not equal / not zero */

loc_00312B9D: ;
    eax = MEM32(ebp);
    eax = eax + 0x40;

loc_00312BA3: ;
    POP32(esp, edi);
    POP32(esp, ebp);
    POP32(esp, ebx);
    esp = esp + 8;
    esp += 4; return; /* ret */

}

/**
 * sub_00312BB0
 * Original: 0x00312BB0 - 0x00312E8A (730 bytes, 274 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00312BB0(void)
{
    uint32_t ebp;
    int _flags = 0; /* fallback flag var */
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_00312BB0: ;
    esp = esp - 8;
    (void)0; /* test LO8(ecx), LO8(ecx) - flags set for next jcc */
    PUSH32(esp, ebx);
    ebx = MEM32(esp + 0x10);
    PUSH32(esp, ebp);
    ebp = MEM32(esp + 0x18);
    PUSH32(esp, edi);
    edi = edx;
    if (TEST_Z(LO8(ecx), LO8(ecx))) goto loc_00312D30; /* je: equal / zero */

loc_00312BC8: ;
    if (TEST_Z(edi, edi)) goto loc_00312D23; /* je: equal / zero */

loc_00312BD0: ;
    if (TEST_Z(LO8(eax), LO8(eax))) goto loc_00312C37; /* je: equal / zero */

loc_00312BD4: ;
    PUSH32(esp, esi);
    PUSH32(esp, 0x58);
    PUSH32(esp, 0);
    PUSH32(esp, 0);
    eax = 0x2C;
    PUSH32(esp, 0); sub_002B13F0(); /* call 0x002B13F0 */

loc_00312BE5: ;
    esp = esp + 0x10;
    if (TEST_NZ(eax, eax)) goto loc_00312E83; /* jne: not equal / not zero */

loc_00312BF0: ;
    SET_LO8(eax, MEM8(esp + 0x20));
    if (TEST_Z(LO8(eax), LO8(eax))) goto loc_00312C37; /* je: equal / zero */

loc_00312BF8: ;
    eax = MEM32(ebx + 0x568);
    eax = MEM32(eax + 0x530);
    eax = eax - 0;
    if ((eax == 0)) goto loc_00312C19; /* je: equal / zero */

loc_00312C09: ;
    eax--;
    if ((eax == 0)) goto loc_00312C14; /* je: equal / zero */

loc_00312C0C: ;
    eax--;
    if ((eax != 0)) goto loc_00312C37; /* jne: not equal / not zero */

loc_00312C0F: ;
    PUSH32(esp, esi);
    PUSH32(esp, 0x10);
    goto loc_00312C1C;

loc_00312C14: ;
    PUSH32(esp, esi);
    PUSH32(esp, 8);
    goto loc_00312C1C;

loc_00312C19: ;
    PUSH32(esp, esi);
    PUSH32(esp, 0);

loc_00312C1C: ;
    PUSH32(esp, 0);
    edx = edi;
    eax = 0x2C;
    PUSH32(esp, 0);
    PUSH32(esp, 0); sub_002B13F0(); /* call 0x002B13F0 */

loc_00312C2C: ;
    esp = esp + 0x10;
    if (TEST_NZ(eax, eax)) goto loc_00312E83; /* jne: not equal / not zero */

loc_00312C37: ;
    SET_LO8(eax, MEM8(esp + 0x24));
    if (TEST_Z(LO8(eax), LO8(eax))) goto loc_00312CA4; /* je: equal / zero */

loc_00312C3F: ;
    PUSH32(esp, esi);
    PUSH32(esp, 0x58);
    PUSH32(esp, 0);
    PUSH32(esp, 0);
    eax = 0x30;
    edx = edi;
    PUSH32(esp, 0); sub_002B13F0(); /* call 0x002B13F0 */

loc_00312C52: ;
    esp = esp + 0x10;
    if (TEST_NZ(eax, eax)) goto loc_00312E83; /* jne: not equal / not zero */

loc_00312C5D: ;
    SET_LO8(eax, MEM8(esp + 0x20));
    if (TEST_Z(LO8(eax), LO8(eax))) goto loc_00312CA4; /* je: equal / zero */

loc_00312C65: ;
    ecx = MEM32(ebx + 0x568);
    eax = MEM32(ecx + 0x530);
    eax = eax - 0;
    if ((eax == 0)) goto loc_00312C86; /* je: equal / zero */

loc_00312C76: ;
    eax--;
    if ((eax == 0)) goto loc_00312C81; /* je: equal / zero */

loc_00312C79: ;
    eax--;
    if ((eax != 0)) goto loc_00312CA4; /* jne: not equal / not zero */

loc_00312C7C: ;
    PUSH32(esp, esi);
    PUSH32(esp, 0x10);
    goto loc_00312C89;

loc_00312C81: ;
    PUSH32(esp, esi);
    PUSH32(esp, 8);
    goto loc_00312C89;

loc_00312C86: ;
    PUSH32(esp, esi);
    PUSH32(esp, 0);

loc_00312C89: ;
    PUSH32(esp, 0);
    edx = edi;
    eax = 0x30;
    PUSH32(esp, 0);
    PUSH32(esp, 0); sub_002B13F0(); /* call 0x002B13F0 */

loc_00312C99: ;
    esp = esp + 0x10;
    if (TEST_NZ(eax, eax)) goto loc_00312E83; /* jne: not equal / not zero */

loc_00312CA4: ;
    eax = 0; /* xor self */
    edx = esp + 0x10;
    MEM32(esp + 0xC) = eax;
    MEM32(esp + 0x10) = eax;
    PUSH32(esp, edx);
    eax = esp + 0x10;
    PUSH32(esp, eax);
    edx = edi;
    PUSH32(esp, 0); sub_002B1210(); /* call 0x002B1210 */

loc_00312CBF: ;
    esp = esp + 8;
    if (TEST_Z(LO8(eax), LO8(eax))) goto loc_00312D04; /* je: equal / zero */

loc_00312CC6: ;
    eax = MEM32(esp + 0xC);
    if (TEST_Z(eax, eax)) goto loc_00312CE7; /* je: equal / zero */

loc_00312CCE: ;
    eax = eax + 0x28;
    if ((eax == 0)) goto loc_00312CE7; /* je: equal / zero */

loc_00312CD3: ;
    eax = MEM32(eax);
    if (TEST_Z(eax, eax)) goto loc_00312CE7; /* je: equal / zero */

loc_00312CD9: ;
    ecx = MEM32(eax + 0x58);
    eax = eax + 0x58;
    if (TEST_NZ(ecx, ecx)) goto loc_00312E83; /* jne: not equal / not zero */

loc_00312CE7: ;
    eax = MEM32(esp + 0x10);
    eax = eax + 0x28;
    if ((eax == 0)) goto loc_00312D04; /* je: equal / zero */

loc_00312CF0: ;
    eax = MEM32(eax);
    if (TEST_Z(eax, eax)) goto loc_00312D04; /* je: equal / zero */

loc_00312CF6: ;
    ecx = MEM32(eax + 0x58);
    eax = eax + 0x58;
    if (TEST_NZ(ecx, ecx)) goto loc_00312E83; /* jne: not equal / not zero */

loc_00312D04: ;
    SET_LO8(eax, MEM8(esp + 0x20));
    if (TEST_Z(LO8(eax), LO8(eax))) goto loc_00312D23; /* je: equal / zero */

loc_00312D0C: ;
    PUSH32(esp, esi);
    PUSH32(esp, 0);
    SET_LO8(edx, 0); /* xor self */
    eax = ebx;
    PUSH32(esp, 0); sub_002B1640(); /* call 0x002B1640 */

loc_00312D18: ;
    esp = esp + 8;
    if (TEST_NZ(eax, eax)) goto loc_00312E83; /* jne: not equal / not zero */

loc_00312D23: ;
    eax = MEM32(ebp);
    POP32(esp, edi);
    POP32(esp, ebp);
    eax = eax + 0x58;
    POP32(esp, ebx);
    esp = esp + 8;
    esp += 4; return; /* ret */

loc_00312D30: ;
    if (TEST_Z(edi, edi)) goto loc_00312E7D; /* je: equal / zero */

loc_00312D38: ;
    if (TEST_Z(LO8(eax), LO8(eax))) goto loc_00312DA1; /* je: equal / zero */

loc_00312D3C: ;
    PUSH32(esp, esi);
    PUSH32(esp, 0x48);
    PUSH32(esp, 0);
    PUSH32(esp, 0);
    eax = 0x2C;
    edx = edi;
    PUSH32(esp, 0); sub_002B13F0(); /* call 0x002B13F0 */

loc_00312D4F: ;
    esp = esp + 0x10;
    if (TEST_NZ(eax, eax)) goto loc_00312E83; /* jne: not equal / not zero */

loc_00312D5A: ;
    SET_LO8(eax, MEM8(esp + 0x20));
    if (TEST_Z(LO8(eax), LO8(eax))) goto loc_00312DA1; /* je: equal / zero */

loc_00312D62: ;
    ecx = MEM32(ebx + 0x568);
    eax = MEM32(ecx + 0x530);
    eax = eax - 0;
    if ((eax == 0)) goto loc_00312D83; /* je: equal / zero */

loc_00312D73: ;
    eax--;
    if ((eax == 0)) goto loc_00312D7E; /* je: equal / zero */

loc_00312D76: ;
    eax--;
    if ((eax != 0)) goto loc_00312DA1; /* jne: not equal / not zero */

loc_00312D79: ;
    PUSH32(esp, esi);
    PUSH32(esp, 0x10);
    goto loc_00312D86;

loc_00312D7E: ;
    PUSH32(esp, esi);
    PUSH32(esp, 8);
    goto loc_00312D86;

loc_00312D83: ;
    PUSH32(esp, esi);
    PUSH32(esp, 0);

loc_00312D86: ;
    PUSH32(esp, 0);
    edx = edi;
    eax = 0x2C;
    PUSH32(esp, 0);
    PUSH32(esp, 0); sub_002B13F0(); /* call 0x002B13F0 */

loc_00312D96: ;
    esp = esp + 0x10;
    if (TEST_NZ(eax, eax)) goto loc_00312E83; /* jne: not equal / not zero */

loc_00312DA1: ;
    SET_LO8(eax, MEM8(esp + 0x24));
    if (TEST_Z(LO8(eax), LO8(eax))) goto loc_00312E0A; /* je: equal / zero */

loc_00312DA9: ;
    PUSH32(esp, esi);
    PUSH32(esp, 0x48);
    PUSH32(esp, 0);
    PUSH32(esp, 0);
    eax = 0x30;
    edx = edi;
    PUSH32(esp, 0); sub_002B13F0(); /* call 0x002B13F0 */

loc_00312DBC: ;
    esp = esp + 0x10;
    if (TEST_NZ(eax, eax)) goto loc_00312E83; /* jne: not equal / not zero */

loc_00312DC7: ;
    SET_LO8(eax, MEM8(esp + 0x20));
    if (TEST_Z(LO8(eax), LO8(eax))) goto loc_00312E0A; /* je: equal / zero */

loc_00312DCF: ;
    edx = MEM32(ebx + 0x568);
    eax = MEM32(edx + 0x530);
    eax = eax - 0;
    if ((eax == 0)) goto loc_00312DF0; /* je: equal / zero */

loc_00312DE0: ;
    eax--;
    if ((eax == 0)) goto loc_00312DEB; /* je: equal / zero */

loc_00312DE3: ;
    eax--;
    if ((eax != 0)) goto loc_00312E0A; /* jne: not equal / not zero */

loc_00312DE6: ;
    PUSH32(esp, esi);
    PUSH32(esp, 0x10);
    goto loc_00312DF3;

loc_00312DEB: ;
    PUSH32(esp, esi);
    PUSH32(esp, 8);
    goto loc_00312DF3;

loc_00312DF0: ;
    PUSH32(esp, esi);
    PUSH32(esp, 0);

loc_00312DF3: ;
    PUSH32(esp, 0);
    edx = edi;
    eax = 0x30;
    PUSH32(esp, 0);
    PUSH32(esp, 0); sub_002B13F0(); /* call 0x002B13F0 */

loc_00312E03: ;
    esp = esp + 0x10;
    if (TEST_NZ(eax, eax)) goto loc_00312E83; /* jne: not equal / not zero */

loc_00312E0A: ;
    eax = 0; /* xor self */
    MEM32(esp + 0x10) = eax;
    MEM32(esp + 0xC) = eax;
    eax = esp + 0xC;
    PUSH32(esp, eax);
    ecx = esp + 0x14;
    PUSH32(esp, ecx);
    edx = edi;
    PUSH32(esp, 0); sub_002B1210(); /* call 0x002B1210 */

loc_00312E25: ;
    esp = esp + 8;
    if (TEST_Z(LO8(eax), LO8(eax))) goto loc_00312E62; /* je: equal / zero */

loc_00312E2C: ;
    eax = MEM32(esp + 0x10);
    if (TEST_Z(eax, eax)) goto loc_00312E49; /* je: equal / zero */

loc_00312E34: ;
    eax = eax + 0x28;
    if ((eax == 0)) goto loc_00312E49; /* je: equal / zero */

loc_00312E39: ;
    eax = MEM32(eax);
    if (TEST_Z(eax, eax)) goto loc_00312E49; /* je: equal / zero */

loc_00312E3F: ;
    ecx = MEM32(eax + 0x48);
    eax = eax + 0x48;
    if (TEST_NZ(ecx, ecx)) goto loc_00312E83; /* jne: not equal / not zero */

loc_00312E49: ;
    eax = MEM32(esp + 0xC);
    eax = eax + 0x28;
    if ((eax == 0)) goto loc_00312E62; /* je: equal / zero */

loc_00312E52: ;
    eax = MEM32(eax);
    if (TEST_Z(eax, eax)) goto loc_00312E62; /* je: equal / zero */

loc_00312E58: ;
    ecx = MEM32(eax + 0x48);
    eax = eax + 0x48;
    if (TEST_NZ(ecx, ecx)) goto loc_00312E83; /* jne: not equal / not zero */

loc_00312E62: ;
    SET_LO8(eax, MEM8(esp + 0x20));
    if (TEST_Z(LO8(eax), LO8(eax))) goto loc_00312E7D; /* je: equal / zero */

loc_00312E6A: ;
    PUSH32(esp, esi);
    PUSH32(esp, 0);
    SET_LO8(edx, 0); /* xor self */
    eax = ebx;
    PUSH32(esp, 0); sub_002B1640(); /* call 0x002B1640 */

loc_00312E76: ;
    esp = esp + 8;
    if (TEST_NZ(eax, eax)) goto loc_00312E83; /* jne: not equal / not zero */

loc_00312E7D: ;
    eax = MEM32(ebp);
    eax = eax + 0x48;

loc_00312E83: ;
    POP32(esp, edi);
    POP32(esp, ebp);
    POP32(esp, ebx);
    esp = esp + 8;
    esp += 4; return; /* ret */

}

/**
 * sub_00312E90
 * Original: 0x00312E90 - 0x00312F74 (228 bytes, 90 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00312E90(void)
{
    int _flags = 0; /* fallback flag var */
    int _cf = 0; /* carry flag */

loc_00312E90: ;
    (void)0; /* test esi, esi - flags set for next jcc */
    PUSH32(esp, ebx);
    ebx = ecx;
    if (TEST_Z(esi, esi)) goto loc_00312F21; /* je: equal / zero */

loc_00312E9B: ;
    if (TEST_Z(LO8(eax), LO8(eax))) goto loc_00312EDE; /* je: equal / zero */

loc_00312E9F: ;
    eax = MEM32(ebx + 0x568);
    eax = MEM32(eax + 0x530);
    eax = eax - 0;
    if ((eax == 0)) goto loc_00312EC0; /* je: equal / zero */

loc_00312EB0: ;
    eax--;
    if ((eax == 0)) goto loc_00312EBB; /* je: equal / zero */

loc_00312EB3: ;
    eax--;
    if ((eax != 0)) goto loc_00312EDE; /* jne: not equal / not zero */

loc_00312EB6: ;
    PUSH32(esp, edi);
    PUSH32(esp, 0x10);
    goto loc_00312EC3;

loc_00312EBB: ;
    PUSH32(esp, edi);
    PUSH32(esp, 8);
    goto loc_00312EC3;

loc_00312EC0: ;
    PUSH32(esp, edi);
    PUSH32(esp, 0);

loc_00312EC3: ;
    PUSH32(esp, 0);
    edx = esi;
    eax = 0x2C;
    PUSH32(esp, 0);
    PUSH32(esp, 0); sub_002B13F0(); /* call 0x002B13F0 */

loc_00312ED3: ;
    esp = esp + 0x10;
    if (TEST_NZ(eax, eax)) goto loc_00312F72; /* jne: not equal / not zero */

loc_00312EDE: ;
    SET_LO8(eax, MEM8(esp + 8));
    if (TEST_Z(LO8(eax), LO8(eax))) goto loc_00312F21; /* je: equal / zero */

loc_00312EE6: ;
    ecx = MEM32(ebx + 0x568);
    eax = MEM32(ecx + 0x530);
    eax = eax - 0;
    if ((eax == 0)) goto loc_00312F07; /* je: equal / zero */

loc_00312EF7: ;
    eax--;
    if ((eax == 0)) goto loc_00312F02; /* je: equal / zero */

loc_00312EFA: ;
    eax--;
    if ((eax != 0)) goto loc_00312F21; /* jne: not equal / not zero */

loc_00312EFD: ;
    PUSH32(esp, edi);
    PUSH32(esp, 0x10);
    goto loc_00312F0A;

loc_00312F02: ;
    PUSH32(esp, edi);
    PUSH32(esp, 8);
    goto loc_00312F0A;

loc_00312F07: ;
    PUSH32(esp, edi);
    PUSH32(esp, 0);

loc_00312F0A: ;
    PUSH32(esp, 0);
    edx = esi;
    eax = 0x30;
    PUSH32(esp, 0);
    PUSH32(esp, 0); sub_002B13F0(); /* call 0x002B13F0 */

loc_00312F1A: ;
    esp = esp + 0x10;
    if (TEST_NZ(eax, eax)) goto loc_00312F72; /* jne: not equal / not zero */

loc_00312F21: ;
    edx = MEM32(ebx + 0x568);
    eax = MEM32(edx + 0x530);
    eax = eax - 0;
    if ((eax == 0)) goto loc_00312F42; /* je: equal / zero */

loc_00312F32: ;
    eax--;
    if ((eax == 0)) goto loc_00312F3D; /* je: equal / zero */

loc_00312F35: ;
    eax--;
    if ((eax != 0)) goto loc_00312F5C; /* jne: not equal / not zero */

loc_00312F38: ;
    PUSH32(esp, edi);
    PUSH32(esp, 0x10);
    goto loc_00312F45;

loc_00312F3D: ;
    PUSH32(esp, edi);
    PUSH32(esp, 8);
    goto loc_00312F45;

loc_00312F42: ;
    PUSH32(esp, edi);
    PUSH32(esp, 0);

loc_00312F45: ;
    PUSH32(esp, 0);
    edx = esi;
    eax = 0x28;
    PUSH32(esp, 0);
    PUSH32(esp, 0); sub_002B13F0(); /* call 0x002B13F0 */

loc_00312F55: ;
    esp = esp + 0x10;
    if (TEST_NZ(eax, eax)) goto loc_00312F72; /* jne: not equal / not zero */

loc_00312F5C: ;
    eax = MEM32(ebx + 0x568);
    ecx = MEM32(eax + 0x448);
    ecx = MEM32(ecx);
    eax = MEM32(ecx);
    eax = (uint32_t)(-(int32_t)eax);
    eax = _cf ? 0xFFFFFFFF : 0; /* sbb self (CF extend) */
    eax = eax & ecx;

loc_00312F72: ;
    POP32(esp, ebx);
    esp += 4; return; /* ret */

}

/**
 * sub_00312F80
 * Original: 0x00312F80 - 0x00312FBC (60 bytes, 20 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00312F80(void)
{
    uint32_t ebp;
    int _flags = 0; /* fallback flag var */
    float xmm0, xmm1, xmm3;
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_00312F80: ;
    esp = esp - 0x28;
    PUSH32(esp, ebx);
    PUSH32(esp, esi);
    esi = eax;
    PUSH32(esp, edi);
    edi = esi + 0x84;
    ebx = esi + 0x78;
    PUSH32(esp, edi);
    PUSH32(esp, ebx);
    PUSH32(esp, 0); sub_003E1EE0(); /* call 0x003E1EE0 */

loc_00312F98: ;
    xmm1 = MEMF(esi + 0x648); /* movss */
    xmm3 = 0.0f; /* xorps self = zero */
    xmm0 = xmm0 * MEMF(0x648CE0); /* mulss */
    esp = esp + 8;
    /* ucomiss xmm1, xmm3 - sets EFLAGS */
    /* lahf - load AH from flags (used in FPU compare idiom) */
    if (1 /* jp after test - parity */) { sub_00312FBC(); return; } /* jp: parity */

loc_00312FB7: ;
    xmm0 = xmm3; /* movaps */
    g_seh_ebp = ebp; sub_00312FDE(); return; /* tail jmp 0x00312FDE */

}

/**
 * sub_003132F0
 * Original: 0x003132F0 - 0x00313322 (50 bytes, 14 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_003132F0(void)
{
    int _flags = 0; /* fallback flag var */
    float xmm0, xmm1;

loc_003132F0: ;
    ecx = MEM32(eax + 0x568);
    ecx = (uint32_t)(int32_t)SMEM16(ecx + 0x20);
    xmm1 = MEMF(0x648D20); /* movss */
    eax = ecx;
    eax = (uint32_t)((int32_t)eax >> 0x1F);
    edx = eax;
    edx = edx ^ ecx;
    edx = edx - eax;
    xmm0 = (float)(int32_t)edx; /* cvtsi2ss */
    xmm0 = xmm0 * MEMF(0x648D2C); /* mulss */
    /* comiss xmm0, xmm1 - sets EFLAGS */
    if ((xmm0 <= xmm1)) goto loc_00313321; /* jbe: below or equal (unsigned <=) */

loc_0031331E: ;
    xmm0 = xmm1; /* movaps */

loc_00313321: ;
    esp += 4; return; /* ret */

}

/**
 * sub_00313330
 * Original: 0x00313330 - 0x0031335D (45 bytes, 18 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00313330(void)
{
    int _flags = 0; /* fallback flag var */

loc_00313330: ;
    eax = MEM32(esp + 8);
    PUSH32(esp, esi);
    esi = MEM32(esp + 8);
    PUSH32(esp, eax);
    PUSH32(esp, esi);
    PUSH32(esp, 0); sub_0046F260(); /* call 0x0046F260 */

loc_00313340: ;
    esp = esp + 8;
    if (TEST_Z(eax, eax)) { sub_0031335D(); return; } /* je: equal / zero */

loc_00313347: ;
    PUSH32(esp, 0x5DF8E0);
    PUSH32(esp, esi);
    PUSH32(esp, 0); sub_0046F260(); /* call 0x0046F260 */

loc_00313352: ;
    esp = esp + 8;
    if (TEST_Z(eax, eax)) { sub_0031335D(); return; } /* je: equal / zero */

loc_00313359: ;
    eax = 0; /* xor self */
    POP32(esp, esi);
    esp += 4; return; /* ret */

}

/**
 * sub_00313370
 * Original: 0x00313370 - 0x00313626 (694 bytes, 228 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00313370(void)
{
    uint32_t ebp;
    int _flags = 0; /* fallback flag var */
    float xmm0;
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_00313370: ;
    esp = esp - 0xC;
    PUSH32(esp, ebx);
    PUSH32(esp, ebp);
    PUSH32(esp, esi);
    PUSH32(esp, edi);
    edi = eax;
    ebp = ZX8(MEM8(edi + 0x511));
    if (TEST_NZ(ebp, ebp)) goto loc_0031338B; /* jne: not equal / not zero */

loc_00313384: ;
    ebp = 1;
    (void)0; /* test ebp, ebp - flags set for next jcc */

loc_0031338B: ;
    if (CMP_LE(ebp & ebp, 0)) goto loc_003133C5; /* jle: less or equal (signed <=) */

loc_0031338D: ;
    esi = edi + 0x4B0;
    MEM32(esp + 0x14) = ebp;

loc_00313397: ;
    eax = MEM32(esi);
    if (TEST_Z(eax, eax)) goto loc_003133B7; /* je: equal / zero */

loc_0031339D: ;
    eax = MEM32(eax + 0x24);
    if (TEST_Z(eax, eax)) goto loc_003133B7; /* je: equal / zero */

loc_003133A4: ;
    ecx = MEM32(esi + 0x14);
    edx = MEM32(eax + 8);
    PUSH32(esp, ecx);
    PUSH32(esp, edx);
    ebx = esi + 0x28;
    PUSH32(esp, 0); sub_003F9110(); /* call 0x003F9110 */

loc_003133B4: ;
    esp = esp + 8;

loc_003133B7: ;
    eax = MEM32(esp + 0x14);
    esi = esi + 4;
    eax--;
    MEM32(esp + 0x14) = eax;
    if ((eax != 0)) goto loc_00313397; /* jne: not equal / not zero */

loc_003133C5: ;
    if (CMP_NE(MEM32(edi + 0x68), 0x28)) goto loc_00313438; /* jne: not equal / not zero */

loc_003133CB: ;
    PUSH32(esp, 0);
    PUSH32(esp, 0x5E06CC);
    PUSH32(esp, 0);
    PUSH32(esp, 0x63844C);
    PUSH32(esp, 0x315470);
    ebx = edi;
    eax = edi;
    PUSH32(esp, 0); sub_002F7FC0(); /* call 0x002F7FC0 */

loc_003133E7: ;
    PUSH32(esp, 0);
    PUSH32(esp, 0x5E06CC);
    PUSH32(esp, 0);
    PUSH32(esp, 0x638430);
    PUSH32(esp, 0x315560);
    eax = edi;
    PUSH32(esp, 0); sub_002F7FC0(); /* call 0x002F7FC0 */

loc_00313401: ;
    PUSH32(esp, 0);
    PUSH32(esp, 0x5E06CC);
    PUSH32(esp, 0);
    PUSH32(esp, 0x638414);
    PUSH32(esp, 0x315650);
    eax = edi;
    PUSH32(esp, 0); sub_002F7FC0(); /* call 0x002F7FC0 */

loc_0031341B: ;
    PUSH32(esp, 0);
    PUSH32(esp, 0x5E06CC);
    PUSH32(esp, 0);
    PUSH32(esp, 0x6383F8);
    PUSH32(esp, 0x315780);
    eax = edi;
    PUSH32(esp, 0); sub_002F7FC0(); /* call 0x002F7FC0 */

loc_00313435: ;
    esp = esp + 0x50;

loc_00313438: ;
    if (CMP_LE(ebp & ebp, 0)) goto loc_0031361E; /* jle: less or equal (signed <=) */

loc_00313440: ;
    esi = edi + 0x4D8;
    edi = edi + 0x14B;
    MEM32(esp + 0x18) = ebp;
    SET_LO8(ebx, LO8(ebx) | 0xFF);

loc_00313453: ;
    eax = MEM32(esi + -40);
    MEM8(edi + -1) = LO8(ebx);
    MEM8(edi) = LO8(ebx);
    MEM8(edi + 1) = LO8(ebx);
    MEM8(edi + 2) = LO8(ebx);
    MEM8(edi + -5) = LO8(ebx);
    MEM8(edi + -4) = LO8(ebx);
    MEM8(edi + -3) = LO8(ebx);
    MEM8(edi + -2) = LO8(ebx);
    eax = MEM32(eax + 0x24);
    if (TEST_Z(eax, eax)) goto loc_00313609; /* je: equal / zero */

loc_00313478: ;
    ecx = MEM32(esi);
    if (TEST_Z(ecx, ecx)) goto loc_00313609; /* je: equal / zero */

loc_00313482: ;
    eax = MEM32(eax + 8);
    edx = esp + 0x14;
    PUSH32(esp, edx);
    edx = esp + 0x14;
    PUSH32(esp, edx);
    edx = MEM32(esi + -20);
    PUSH32(esp, 0x6383E4);
    PUSH32(esp, 0);
    PUSH32(esp, 0x6383D8);
    PUSH32(esp, edx);
    PUSH32(esp, eax);
    PUSH32(esp, ecx);
    eax = 0x313330;
    PUSH32(esp, 0); sub_003F9880(); /* call 0x003F9880 */

loc_003134AB: ;
    esp = esp + 0x20;
    if (TEST_Z(eax, eax)) goto loc_003134D8; /* je: equal / zero */

loc_003134B2: ;
    ecx = MEM32(esi);
    edx = MEM32(ecx + 4);
    ecx = MEM32(esp + 0x14);
    eax = MEM32(esp + 0x10);
    edx = MEM32(edx + eax * 4);
    edx = MEM32(edx + 4);
    xmm0 = 0.0f; /* xorps self = zero */
    ebp = ecx;
    ebp = (uint32_t)((int32_t)ebp * (int32_t)0x78);
    MEMF(edx + ebp + 0x1C) = xmm0; /* movss */
    MEM8(edi + -1) = LO8(eax);
    MEM8(edi) = LO8(ecx);

loc_003134D8: ;
    eax = MEM32(esi);
    if (TEST_Z(eax, eax)) goto loc_00313609; /* je: equal / zero */

loc_003134E2: ;
    ecx = esp + 0x14;
    PUSH32(esp, ecx);
    ecx = MEM32(esi + -20);
    edx = esp + 0x14;
    PUSH32(esp, edx);
    edx = MEM32(esi + -40);
    PUSH32(esp, 0x5E9788);
    PUSH32(esp, 0);
    PUSH32(esp, 0x5E977C);
    PUSH32(esp, ecx);
    ecx = MEM32(edx + 0x24);
    edx = MEM32(ecx + 8);
    PUSH32(esp, edx);
    PUSH32(esp, eax);
    eax = 0x313330;
    PUSH32(esp, 0); sub_003F9880(); /* call 0x003F9880 */

loc_00313511: ;
    esp = esp + 0x20;
    if (TEST_Z(eax, eax)) goto loc_0031353F; /* je: equal / zero */

loc_00313518: ;
    eax = MEM32(esi);
    ecx = MEM32(eax + 4);
    eax = MEM32(esp + 0x10);
    edx = MEM32(ecx + eax * 4);
    ecx = MEM32(esp + 0x14);
    edx = MEM32(edx + 4);
    xmm0 = 0.0f; /* xorps self = zero */
    ebp = ecx;
    ebp = (uint32_t)((int32_t)ebp * (int32_t)0x78);
    MEMF(edx + ebp + 0x1C) = xmm0; /* movss */
    MEM8(edi + 1) = LO8(eax);
    MEM8(edi + 2) = LO8(ecx);

loc_0031353F: ;
    eax = MEM32(esi);
    if (TEST_Z(eax, eax)) goto loc_00313609; /* je: equal / zero */

loc_00313549: ;
    ecx = esp + 0x14;
    PUSH32(esp, ecx);
    ecx = MEM32(esi + -20);
    edx = esp + 0x14;
    PUSH32(esp, edx);
    edx = MEM32(esi + -40);
    PUSH32(esp, 0x6383C4);
    PUSH32(esp, 0);
    PUSH32(esp, 0x6383D8);
    PUSH32(esp, ecx);
    ecx = MEM32(edx + 0x24);
    edx = MEM32(ecx + 8);
    PUSH32(esp, edx);
    PUSH32(esp, eax);
    eax = 0x313330;
    PUSH32(esp, 0); sub_003F9880(); /* call 0x003F9880 */

loc_00313578: ;
    esp = esp + 0x20;
    if (TEST_Z(eax, eax)) goto loc_003135A6; /* je: equal / zero */

loc_0031357F: ;
    eax = MEM32(esi);
    ecx = MEM32(eax + 4);
    eax = MEM32(esp + 0x10);
    edx = MEM32(ecx + eax * 4);
    ecx = MEM32(esp + 0x14);
    edx = MEM32(edx + 4);
    xmm0 = 0.0f; /* xorps self = zero */
    ebp = ecx;
    ebp = (uint32_t)((int32_t)ebp * (int32_t)0x78);
    MEMF(edx + ebp + 0x1C) = xmm0; /* movss */
    MEM8(edi + -5) = LO8(eax);
    MEM8(edi + -4) = LO8(ecx);

loc_003135A6: ;
    eax = MEM32(esi);
    if (TEST_Z(eax, eax)) goto loc_00313609; /* je: equal / zero */

loc_003135AC: ;
    ecx = esp + 0x14;
    PUSH32(esp, ecx);
    ecx = MEM32(esi + -20);
    edx = esp + 0x14;
    PUSH32(esp, edx);
    edx = MEM32(esi + -40);
    PUSH32(esp, 0x6383B0);
    PUSH32(esp, 0);
    PUSH32(esp, 0x5E977C);
    PUSH32(esp, ecx);
    ecx = MEM32(edx + 0x24);
    edx = MEM32(ecx + 8);
    PUSH32(esp, edx);
    PUSH32(esp, eax);
    eax = 0x313330;
    PUSH32(esp, 0); sub_003F9880(); /* call 0x003F9880 */

loc_003135DB: ;
    esp = esp + 0x20;
    if (TEST_Z(eax, eax)) goto loc_00313609; /* je: equal / zero */

loc_003135E2: ;
    eax = MEM32(esi);
    ecx = MEM32(eax + 4);
    eax = MEM32(esp + 0x10);
    edx = MEM32(ecx + eax * 4);
    ecx = MEM32(esp + 0x14);
    edx = MEM32(edx + 4);
    xmm0 = 0.0f; /* xorps self = zero */
    ebp = ecx;
    ebp = (uint32_t)((int32_t)ebp * (int32_t)0x78);
    MEMF(edx + ebp + 0x1C) = xmm0; /* movss */
    MEM8(edi + -3) = LO8(eax);
    MEM8(edi + -2) = LO8(ecx);

loc_00313609: ;
    eax = MEM32(esp + 0x18);
    esi = esi + 4;
    edi = edi + 8;
    eax--;
    MEM32(esp + 0x18) = eax;
    if ((eax != 0)) goto loc_00313453; /* jne: not equal / not zero */

loc_0031361E: ;
    POP32(esp, edi);
    POP32(esp, esi);
    POP32(esp, ebp);
    POP32(esp, ebx);
    esp = esp + 0xC;
    esp += 4; return; /* ret */

}

/**
 * sub_00313630
 * Original: 0x00313630 - 0x00313731 (257 bytes, 73 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00313630(void)
{
    uint32_t ebp;
    int _flags = 0; /* fallback flag var */
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_00313630: ;
    eax = ZX8(MEM8(ecx + 0x511));
    esp = esp - 8;
    PUSH32(esp, ebx);
    ebx = 0; /* xor self */
    (void)0; /* cmp eax, ebx - flags set for next jcc */
    PUSH32(esp, ebp);
    ebp = MEM32(esp + 0x14);
    if (CMP_NE(eax, ebx)) goto loc_0031364B; /* jne: not equal / not zero */

loc_00313646: ;
    eax = 1;

loc_0031364B: ;
    (void)0; /* cmp eax, ebx - flags set for next jcc */
    MEM32(esi + 0x334) = ebx;
    MEM8(esp + 0xB) = LO8(ebx);
    if (CMP_LE(eax, ebx)) goto loc_0031371E; /* jle: less or equal (signed <=) */

loc_0031365D: ;
    PUSH32(esp, edi);
    edi = ecx + 0x4B0;
    MEM32(esp + 0x10) = eax;
    goto loc_00313670;

    /* nop */

loc_00313670: ;
    eax = MEM32(esi + 0x334);
    eax = eax + eax * 4;
    eax = eax << 4;
    MEM32(eax + esi) = 0xFFFFFFFFu;
    eax = MEM32(esi + 0x334);
    eax = eax + 5;
    ecx = eax + eax * 4;
    ecx = ecx << 4;
    MEM32(ecx + esi) = 0xFFFFFFFFu;
    edx = MEM32(esi + 0x334);
    MEM32(esi + edx * 4 + 0x320) = ebx;
    eax = MEM32(esi + 0x334);
    ecx = eax + eax * 4 + 0x19;
    PUSH32(esp, 0x14);
    ecx = ecx << 4;
    edx = eax + eax * 4;
    eax = MEM32(edi + 0x14);
    ecx = ecx + esi;
    PUSH32(esp, ecx);
    ecx = MEM32(edi);
    edx = edx << 4;
    edx = edx + esi;
    PUSH32(esp, edx);
    edx = MEM32(ecx + 0x24);
    ecx = MEM32(edi + 0x28);
    PUSH32(esp, ebp);
    PUSH32(esp, eax);
    eax = MEM32(edx + 8);
    PUSH32(esp, eax);
    PUSH32(esp, ecx);
    PUSH32(esp, 0); sub_003F9AB0(); /* call 0x003F9AB0 */

loc_003136D8: ;
    edx = MEM32(esi + 0x334);
    MEM32(esi + edx * 4 + 0x320) = eax;
    eax = MEM32(esi + 0x334);
    ecx = MEM32(esi + eax * 4 + 0x320);
    esp = esp + 0x1C;
    if (CMP_EQ(ecx, ebx)) goto loc_003136FE; /* je: equal / zero */

loc_003136F9: ;
    MEM8(esp + 0xF) = 1;

loc_003136FE: ;
    eax++;
    MEM32(esi + 0x334) = eax;
    eax = MEM32(esp + 0x10);
    edi = edi + 4;
    eax--;
    MEM32(esp + 0x10) = eax;
    if ((eax != 0)) goto loc_00313670; /* jne: not equal / not zero */

loc_00313717: ;
    (void)0; /* cmp MEM8(esp + 0xF), LO8(ebx) - flags set for next jcc */
    POP32(esp, edi);
    if (CMP_NE(MEM8(esp + 0xF), LO8(ebx))) goto loc_00313724; /* jne: not equal / not zero */

loc_0031371E: ;
    MEM32(esi + 0x334) = ebx;

loc_00313724: ;
    POP32(esp, ebp);
    MEM8(esi + 0x338) = 1;
    POP32(esp, ebx);
    esp = esp + 8;
    esp += 4; return; /* ret */

}

/**
 * sub_00313740
 * Original: 0x00313740 - 0x003138AF (367 bytes, 102 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00313740(void)
{
    uint32_t ebp;
    int _flags = 0; /* fallback flag var */
    float xmm0, xmm1, xmm2, xmm3, xmm4, xmm5;
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_00313740: ;
    esp = esp - 0x354;
    PUSH32(esp, ebp);
    ebp = MEM32(esp + 0x35C);
    PUSH32(esp, esi);
    esi = eax;
    if (TEST_NZ(esi, esi)) goto loc_00313760; /* jne: not equal / not zero */

loc_00313755: ;
    esi = esp + 0x20;
    MEM8(esp + 0x358) = LO8(eax);

loc_00313760: ;
    SET_LO8(eax, MEM8(esi + 0x338));
    (void)0; /* test LO8(eax), LO8(eax) - flags set for next jcc */
    MEM32(esp + 0x1C) = esi;
    if (TEST_NZ(LO8(eax), LO8(eax))) goto loc_00313780; /* jne: not equal / not zero */

loc_0031376E: ;
    eax = MEM32(esp + 0x364);
    PUSH32(esp, eax);
    ecx = ebp;
    PUSH32(esp, 0); sub_00313630(); /* call 0x00313630 */

loc_0031377D: ;
    esp = esp + 4;

loc_00313780: ;
    eax = MEM32(esi + 0x334);
    (void)0; /* test eax, eax - flags set for next jcc */
    MEM32(esp + 0x14) = 0;
    if (CMP_LE(eax & eax, 0)) goto loc_003138A6; /* jle: less or equal (signed <=) */

loc_00313796: ;
    xmm1 = MEMF(esp + 0x368); /* movss */
    xmm0 = MEMF(0x648CE0); /* movss */
    xmm2 = MEMF(0x648D14); /* movss */
    xmm3 = 0.0f; /* xorps self = zero */
    ecx = esi + 0x320;
    PUSH32(esp, ebx);
    MEM32(esp + 0x10) = 0x64;
    MEM32(esp + 0xC) = esi;
    ebp = ebp + 0x4D8;
    MEM32(esp + 0x1C) = ecx;
    PUSH32(esp, edi);

loc_003137D0: ;
    eax = MEM32(ecx);
    ebx = 0; /* xor self */
    if (CMP_LE(eax & eax, 0)) goto loc_0031386D; /* jle: less or equal (signed <=) */

loc_003137DC: ;
    eax = MEM32(esp + 0x10);
    MEM32(esp + 0x18) = eax;

loc_003137E4: ;
    edi = MEM32(eax);
    if (CMP_EQ(edi, 0xFFFFFFFFu)) goto loc_0031385B; /* je: equal / zero */

loc_003137EB: ;
    ecx = MEM32(esp + 0x14);
    ecx = ecx + ebx;
    eax = MEM32(esi + ecx * 4);
    edx = esi + ecx * 4;
    eax = (uint32_t)((int32_t)eax * (int32_t)0x78);
    ecx = MEM32(ebp);
    esi = MEM32(ecx + 4);
    esi = MEM32(esi + edi * 4);
    esi = MEM32(esi + 4);
    if (CMP_EQ(MEM32(esi + eax + 0x44), 0)) goto loc_00313836; /* je: equal / zero */

loc_0031380D: ;
    ecx = MEM32(ecx + 4);
    ecx = MEM32(ecx + edi * 4);
    ecx = MEM32(ecx + 4);
    xmm5 = (float)(int32_t)MEM32(eax + ecx + 0x48); /* cvtsi2ss */
    eax = eax + ecx;
    xmm4 = xmm1; /* movaps */
    xmm4 = xmm4 * xmm0; /* mulss */
    xmm4 = xmm4 + xmm2; /* addss */
    xmm5 = xmm5 * xmm0; /* mulss */
    xmm4 = xmm4 / xmm5; /* divss */
    MEMF(eax + 0xC) = xmm4; /* movss */

loc_00313836: ;
    edx = MEM32(edx);
    ecx = MEM32(ebp);
    edx = (uint32_t)((int32_t)edx * (int32_t)0x78);
    ecx = MEM32(ecx + 4);
    eax = MEM32(esp + 0x18);
    esi = MEM32(eax);
    ecx = MEM32(ecx + esi * 4);
    ecx = MEM32(ecx + 4);
    esi = MEM32(esp + 0x24);
    MEMF(ecx + edx + 0x1C) = xmm3; /* movss */
    ecx = MEM32(esp + 0x20);

loc_0031385B: ;
    edx = MEM32(ecx);
    ebx++;
    eax = eax + 4;
    (void)0; /* cmp ebx, edx - flags set for next jcc */
    MEM32(esp + 0x18) = eax;
    if (CMP_L(ebx, edx)) goto loc_003137E4; /* jl: less (signed <) */

loc_0031386D: ;
    edx = MEM32(esp + 0x10);
    eax = MEM32(esp + 0x1C);
    edi = MEM32(esp + 0x14);
    edx = edx + 0x50;
    eax++;
    MEM32(esp + 0x10) = edx;
    edx = MEM32(esi + 0x334);
    ecx = ecx + 4;
    edi = edi + 0x14;
    ebp = ebp + 4;
    (void)0; /* cmp eax, edx - flags set for next jcc */
    MEM32(esp + 0x1C) = eax;
    MEM32(esp + 0x20) = ecx;
    MEM32(esp + 0x14) = edi;
    if (CMP_L(eax, edx)) goto loc_003137D0; /* jl: less (signed <) */

loc_003138A4: ;
    POP32(esp, edi);
    POP32(esp, ebx);

loc_003138A6: ;
    POP32(esp, esi);
    POP32(esp, ebp);
    esp = esp + 0x354;
    esp += 4; return; /* ret */

}

/**
 * sub_003138B0
 * Original: 0x003138B0 - 0x00313A29 (377 bytes, 98 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_003138B0(void)
{
    uint32_t ebp;
    int _flags = 0; /* fallback flag var */
    float xmm0, xmm1;
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_003138B0: ;
    esp = esp - 0x348;
    PUSH32(esp, ebx);
    PUSH32(esp, ebp);
    PUSH32(esp, esi);
    esi = eax;
    (void)0; /* test esi, esi - flags set for next jcc */
    PUSH32(esp, edi);
    edi = ecx;
    if (TEST_NZ(esi, esi)) goto loc_003138CD; /* jne: not equal / not zero */

loc_003138C2: ;
    esi = esp + 0x1C;
    MEM8(esp + 0x354) = LO8(eax);

loc_003138CD: ;
    SET_LO8(eax, MEM8(esi + 0x338));
    if (TEST_NZ(LO8(eax), LO8(eax))) goto loc_003138E9; /* jne: not equal / not zero */

loc_003138D7: ;
    eax = MEM32(esp + 0x35C);
    PUSH32(esp, eax);
    ecx = edi;
    PUSH32(esp, 0); sub_00313630(); /* call 0x00313630 */

loc_003138E6: ;
    esp = esp + 4;

loc_003138E9: ;
    eax = MEM32(esi + 0x334);
    (void)0; /* test eax, eax - flags set for next jcc */
    MEM32(esp + 0x18) = 0;
    if (CMP_LE(eax & eax, 0)) goto loc_00313A1C; /* jle: less or equal (signed <=) */

loc_003138FF: ;
    xmm0 = MEMF(0x648D2C); /* movss */
    ebx = 0x64;
    MEM32(esp + 0x10) = esi;
    edi = edi + 0x4D8;
    ebp = esi + 0x320;
    /* nop */

loc_00313920: ;
    eax = MEM32(ebp);
    edx = 0; /* xor self */
    if (CMP_LE(eax & eax, 0)) goto loc_003139F1; /* jle: less or equal (signed <=) */

loc_0031392D: ;
    ecx = MEM32(esp + 0x10);
    MEM32(esp + 0x14) = ecx;

loc_00313935: ;
    eax = MEM32(esp + 0x14);
    eax = MEM32(eax);
    if (CMP_EQ(eax, 0xFFFFFFFFu)) goto loc_003139DA; /* je: equal / zero */

loc_00313944: ;
    ecx = MEM32(edi);
    ecx = MEM32(ecx + 4);
    ecx = MEM32(ecx + eax * 4);
    eax = ebx + edx;
    eax = MEM32(esi + eax * 4);
    eax = (uint32_t)((int32_t)eax * (int32_t)0x78);
    eax = eax + MEM32(ecx + 4);
    ecx = MEM32(esp + 0x360);
    ecx--;
    if (CMP_A(ecx, 0xB)) goto loc_003139DA; /* ja: above (unsigned >) */

loc_00313965: ;
    g_seh_ebp = ebp; RECOMP_ITAIL(MEM32(ecx * 4 + 0x313ADC)); return; /* indirect tail jmp */

    xmm1 = (float)(int32_t)MEM32(esp + 0x364); /* cvtsi2ss */
    MEMF(eax + 0x10) = xmm1; /* movss */
    goto loc_003139DA;

    xmm1 = (float)(int32_t)MEM32(esp + 0x364); /* cvtsi2ss */
    MEMF(eax + 0x20) = xmm1; /* movss */
    goto loc_003139DA;

    xmm1 = (float)(int32_t)MEM32(esp + 0x364); /* cvtsi2ss */
    xmm1 = xmm1 * xmm0; /* mulss */
    MEMF(eax + 4) = xmm1; /* movss */
    goto loc_003139DA;

    xmm1 = (float)(int32_t)MEM32(esp + 0x364); /* cvtsi2ss */
    xmm1 = xmm1 * xmm0; /* mulss */
    MEMF(eax + 0x14) = xmm1; /* movss */
    goto loc_003139DA;

    xmm1 = (float)(int32_t)MEM32(esp + 0x364); /* cvtsi2ss */
    xmm1 = xmm1 * xmm0; /* mulss */
    MEMF(eax + 8) = xmm1; /* movss */
    goto loc_003139DA;

    xmm1 = (float)(int32_t)MEM32(esp + 0x364); /* cvtsi2ss */
    xmm1 = xmm1 * xmm0; /* mulss */
    MEMF(eax + 0x18) = xmm1; /* movss */

loc_003139DA: ;
    ecx = MEM32(esp + 0x14);
    eax = MEM32(ebp);
    edx++;
    ecx = ecx + 4;
    (void)0; /* cmp edx, eax - flags set for next jcc */
    MEM32(esp + 0x14) = ecx;
    if (CMP_L(edx, eax)) goto loc_00313935; /* jl: less (signed <) */

loc_003139F1: ;
    eax = MEM32(esp + 0x18);
    edx = MEM32(esp + 0x10);
    ecx = MEM32(esi + 0x334);
    eax++;
    edx = edx + 0x50;
    ebp = ebp + 4;
    edi = edi + 4;
    ebx = ebx + 0x14;
    (void)0; /* cmp eax, ecx - flags set for next jcc */
    MEM32(esp + 0x18) = eax;
    MEM32(esp + 0x10) = edx;
    if (CMP_L(eax, ecx)) goto loc_00313920; /* jl: less (signed <) */

loc_00313A1C: ;
    POP32(esp, edi);
    POP32(esp, esi);
    POP32(esp, ebp);
    eax = 0; /* xor self */
    POP32(esp, ebx);
    esp = esp + 0x348;
    esp += 4; return; /* ret */

}

/**
 * sub_00313B10
 * Original: 0x00313B10 - 0x00313B66 (86 bytes, 29 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00313B10(void)
{
    int _flags = 0; /* fallback flag var */

loc_00313B10: ;
    PUSH32(esp, ebx);
    PUSH32(esp, esi);
    PUSH32(esp, edi);
    esi = 0; /* xor self */
    ebx = 1;
    /* nop */

loc_00313B20: ;
    edi = MEM32(0x5499E8);
    eax = MEM32(edi);
    if (CMP_B(eax, MEM32(edi + 4))) goto loc_00313B3C; /* jb: below (unsigned <) */

loc_00313B2D: ;
    eax = MEM32(0x54A8B8);
    ecx = eax;
    ecx = ecx >> 1;
    PUSH32(esp, ecx);
    PUSH32(esp, 0); sub_0053C300(); /* call 0x0053C300 */

loc_00313B3C: ;
    MEM32(eax) = 0x817C8;
    MEM32(eax + 4) = ebx;
    MEM32(eax + 8) = ebx;
    eax = eax + 0xC;
    MEM32(edi) = eax;
    eax = esi;
    PUSH32(esp, 0); sub_00539C00(); /* call 0x00539C00 */

loc_00313B54: ;
    esi = esi + 0x100;
    if (CMP_L(esi, 0x200)) goto loc_00313B20; /* jl: less (signed <) */

loc_00313B62: ;
    POP32(esp, edi);
    POP32(esp, esi);
    POP32(esp, ebx);
    esp += 4; return; /* ret */

}

/**
 * sub_00313B70
 * Original: 0x00313B70 - 0x00313B75 (5 bytes, 3 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00313B70(void)
{
    uint32_t ebp;
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_00313B70: ;
    eax = 0; /* xor self */
    PUSH32(esp, esi);
    g_seh_ebp = ebp; sub_00313B80(); return; /* tail jmp 0x00313B80 */

}

/**
 * sub_00313BD0
 * Original: 0x00313BD0 - 0x00313C10 (64 bytes, 23 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00313BD0(void)
{
    int _flags = 0; /* fallback flag var */

loc_00313BD0: ;
    PUSH32(esp, esi);
    esi = eax;
    if (CMP_EQ(MEM32(esi), 0xFFFFFFFFu)) { sub_00313C10(); return; } /* je: equal / zero */

loc_00313BD8: ;
    eax = MEM32(0x7FDD50);
    if (CMP_EQ(eax, MEM32(0x7F9F60))) { sub_00313C10(); return; } /* je: equal / zero */

loc_00313BE5: ;
    SET_LO8(eax, MEM8(edx + 0x762E40));
    if (TEST_NZ(LO8(eax), LO8(eax))) { sub_00313C10(); return; } /* jne: not equal / not zero */

loc_00313BEF: ;
    edx = edx + edx * 2;
    SET_LO8(eax, 0); /* xor self */
    ecx = 0; /* xor self */
    edx = esi + edx * 8 + 8;
    /* nop */

loc_00313C00: ;
    if (CMP_NE(MEM32(edx), 0)) { sub_00313C10(); return; } /* jne: not equal / not zero */

loc_00313C05: ;
    ecx++;
    edx = edx + 4;
    if (CMP_L(ecx, 4)) goto loc_00313C00; /* jl: less (signed <) */

loc_00313C0E: ;
    POP32(esp, esi);
    esp += 4; return; /* ret */

}

/**
 * sub_00313C20
 * Original: 0x00313C20 - 0x00313C67 (71 bytes, 31 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00313C20(void)
{
    uint32_t ebp;
    int _flags = 0; /* fallback flag var */
    float xmm0, xmm1, xmm2, xmm3;

loc_00313C20: ;
    PUSH32(esp, ebp);
    ebp = esp;
    esp = esp & 0xFFFFFFF0u;
    esp = esp - 0xD4;
    xmm0 = MEMF(ebp + 0x14); /* movss */
    xmm3 = 0.0f; /* xorps self = zero */
    xmm1 = MEMF(ebp + 0x1C); /* movss */
    xmm2 = MEMF(ebp + 0x18); /* movss */
    PUSH32(esp, ebx);
    /* ucomiss xmm0, xmm3 - sets EFLAGS */
    ebx = eax;
    /* lahf - load AH from flags (used in FPU compare idiom) */
    (void)0; /* test HI8(eax), 0x44 - flags set for next jcc */
    PUSH32(esp, esi);
    PUSH32(esp, edi);
    if (1 /* jp after test - parity */) { sub_00313C67(); return; } /* jp: parity */

loc_00313C4C: ;
    /* ucomiss xmm2, xmm3 - sets EFLAGS */
    /* lahf - load AH from flags (used in FPU compare idiom) */
    if (1 /* jp after test - parity */) { sub_00313C67(); return; } /* jp: parity */

loc_00313C55: ;
    /* ucomiss xmm1, xmm3 - sets EFLAGS */
    /* lahf - load AH from flags (used in FPU compare idiom) */
    if (1 /* jp after test - parity */) { sub_00313C67(); return; } /* jp: parity */

loc_00313C5E: ;
    SET_LO8(eax, 0); /* xor self */
    POP32(esp, edi);
    POP32(esp, esi);
    POP32(esp, ebx);
    esp = ebp;
    POP32(esp, ebp);
    esp += 4; return; /* ret */

}

/**
 * sub_003140D0
 * Original: 0x003140D0 - 0x00314ED0 (3584 bytes, 798 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_003140D0(void)
{
    uint32_t ebp;
    float xmm0;
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_003140D0: ;
    PUSH32(esp, ebx);
    PUSH32(esp, ebp);
    PUSH32(esp, esi);
    PUSH32(esp, edi);
    PUSH32(esp, 1);
    eax = 0; /* xor self */
    PUSH32(esp, 0x52);
    PUSH32(esp, 2);
    ebx = 0x638864;
    MEM32(0x84A638) = eax;
    MEM32(0x84A63C) = eax;
    PUSH32(esp, 0); sub_00314ED0(); /* call 0x00314ED0 */

loc_003140F0: ;
    PUSH32(esp, 0);
    ebp = 0x63884C;
    PUSH32(esp, 0x52);
    esi = esi | 0xFFFFFFFFu;
    edi = 0x638858;
    PUSH32(esp, 2);
    ebx = 0x638834;
    MEM32(eax + 0x58) = 0xC8;
    MEM32(eax + 0x64) = esi;
    MEM32(eax + 0x118) = 0x5E0694;
    MEM32(eax + 0x124) = edi;
    MEM32(eax + 0x128) = ebp;
    MEM32(eax + 0x12C) = ebp;
    MEM32(eax + 0x130) = ebp;
    MEM32(eax + 0x134) = ebp;
    PUSH32(esp, 0); sub_00314ED0(); /* call 0x00314ED0 */

loc_0031413F: ;
    PUSH32(esp, 1);
    PUSH32(esp, 0x58);
    PUSH32(esp, 9);
    ebx = 0x638820;
    MEM32(eax + 0x58) = 0xD8;
    MEM32(eax + 0x64) = esi;
    MEM32(eax + 0x118) = 0x5E0694;
    MEM32(eax + 0x124) = edi;
    MEM32(eax + 0x128) = ebp;
    MEM32(eax + 0x12C) = ebp;
    MEM32(eax + 0x130) = ebp;
    MEM32(eax + 0x134) = ebp;
    PUSH32(esp, 0); sub_00314ED0(); /* call 0x00314ED0 */

loc_00314181: ;
    PUSH32(esp, 0);
    edi = 0x638818;
    PUSH32(esp, 0x58);
    PUSH32(esp, 9);
    ebx = 0x638800;
    MEM32(eax + 0x58) = 0xCF;
    MEM32(eax + 0x64) = esi;
    MEM32(eax + 0x118) = 0x5E068C;
    MEM32(eax + 0x124) = 0x5EB174;
    MEM32(eax + 0x11C) = edi;
    MEM32(eax + 0x120) = edi;
    MEM32(eax + 0x128) = ebp;
    MEM32(eax + 0x12C) = edi;
    MEM32(eax + 0x130) = ebp;
    MEM32(eax + 0x134) = edi;
    PUSH32(esp, 0); sub_00314ED0(); /* call 0x00314ED0 */

loc_003141D8: ;
    PUSH32(esp, 1);
    PUSH32(esp, 0x57);
    PUSH32(esp, 8);
    ebx = 0x6387F4;
    MEM32(eax + 0x58) = 0xDF;
    MEM32(eax + 0x64) = esi;
    MEM32(eax + 0x118) = 0x5E068C;
    MEM32(eax + 0x124) = 0x5EB174;
    MEM32(eax + 0x11C) = edi;
    MEM32(eax + 0x120) = edi;
    MEM32(eax + 0x128) = ebp;
    MEM32(eax + 0x12C) = edi;
    MEM32(eax + 0x130) = ebp;
    MEM32(eax + 0x134) = edi;
    PUSH32(esp, 0); sub_00314ED0(); /* call 0x00314ED0 */

loc_0031422A: ;
    edi = 0x6387E0;
    MEM32(eax + 0x58) = 0xCD;
    MEM32(eax + 0x64) = esi;
    MEM32(eax + 0x118) = 0x5E0684;
    MEM32(eax + 0x124) = 0x6387E8;
    MEM32(eax + 0x128) = edi;
    MEM32(eax + 0x12C) = edi;
    MEM32(eax + 0x130) = edi;
    MEM32(eax + 0x134) = edi;
    PUSH32(esp, 0);
    PUSH32(esp, 0x57);
    PUSH32(esp, 8);
    ebx = 0x6387D0;
    PUSH32(esp, 0); sub_00314ED0(); /* call 0x00314ED0 */

loc_00314275: ;
    esp = esp + 0x48;
    PUSH32(esp, 1);
    PUSH32(esp, 0x5C);
    PUSH32(esp, 0xB);
    ebx = 0x6387BC;
    MEM32(eax + 0x58) = 0xDD;
    MEM32(eax + 0x64) = esi;
    MEM32(eax + 0x118) = 0x5E0684;
    MEM32(eax + 0x124) = 0x6387E8;
    MEM32(eax + 0x128) = edi;
    MEM32(eax + 0x12C) = edi;
    MEM32(eax + 0x130) = edi;
    MEM32(eax + 0x134) = edi;
    PUSH32(esp, 0); sub_00314ED0(); /* call 0x00314ED0 */

loc_003142BE: ;
    PUSH32(esp, 0);
    PUSH32(esp, 0x5C);
    PUSH32(esp, 0xB);
    ebx = 0x6387A4;
    MEM32(eax + 0x58) = 0xD3;
    MEM32(eax + 0x64) = esi;
    MEM32(eax + 0x118) = 0x5E0684;
    MEM32(eax + 0x124) = 0x6387E8;
    MEM32(eax + 0x128) = edi;
    MEM32(eax + 0x12C) = edi;
    MEM32(eax + 0x130) = edi;
    MEM32(eax + 0x134) = edi;
    PUSH32(esp, 0); sub_00314ED0(); /* call 0x00314ED0 */

loc_00314304: ;
    PUSH32(esp, 1);
    PUSH32(esp, 0x53);
    PUSH32(esp, 3);
    ebx = 0x5EAF48;
    MEM32(eax + 0x58) = 0xE3;
    MEM32(eax + 0x64) = esi;
    MEM32(eax + 0x118) = 0x5E0684;
    MEM32(eax + 0x124) = 0x6387E8;
    MEM32(eax + 0x128) = edi;
    MEM32(eax + 0x12C) = edi;
    MEM32(eax + 0x130) = edi;
    MEM32(eax + 0x134) = edi;
    PUSH32(esp, 0); sub_00314ED0(); /* call 0x00314ED0 */

loc_0031434A: ;
    PUSH32(esp, 0);
    PUSH32(esp, 0x53);
    PUSH32(esp, 3);
    ebx = 0x5EAE8C;
    MEM32(eax + 0x58) = 0xC6;
    MEM32(eax + 0x64) = esi;
    MEM32(eax + 0x118) = 0x5E0684;
    MEM32(eax + 0x124) = 0x6387E8;
    MEM32(eax + 0x128) = edi;
    MEM32(eax + 0x12C) = edi;
    MEM32(eax + 0x130) = edi;
    MEM32(eax + 0x134) = edi;
    PUSH32(esp, 0); sub_00314ED0(); /* call 0x00314ED0 */

loc_00314390: ;
    PUSH32(esp, 1);
    PUSH32(esp, 0x70);
    PUSH32(esp, 0x2D);
    ebx = 0x5EA9C0;
    MEM32(eax + 0x58) = 0xD6;
    MEM32(eax + 0x64) = esi;
    MEM32(eax + 0x118) = 0x5E0684;
    MEM32(eax + 0x124) = 0x6387E8;
    MEM32(eax + 0x128) = edi;
    MEM32(eax + 0x12C) = edi;
    MEM32(eax + 0x130) = edi;
    MEM32(eax + 0x134) = edi;
    PUSH32(esp, 0); sub_00314ED0(); /* call 0x00314ED0 */

loc_003143D6: ;
    PUSH32(esp, 0);
    PUSH32(esp, 0x70);
    PUSH32(esp, 0x2D);
    ebx = 0x5EA9B0;
    MEM32(eax + 0x58) = 0xD4;
    MEM32(eax + 0x64) = esi;
    PUSH32(esp, 0); sub_00314ED0(); /* call 0x00314ED0 */

loc_003143F0: ;
    esp = esp + 0x48;
    MEM32(eax + 0x58) = 0xE4;
    MEM32(eax + 0x64) = esi;
    PUSH32(esp, 1);
    PUSH32(esp, 0x71);
    PUSH32(esp, 0x31);
    ebx = 0x638798;
    PUSH32(esp, 0); sub_00314ED0(); /* call 0x00314ED0 */

loc_0031440D: ;
    PUSH32(esp, 1);
    PUSH32(esp, 0x51);
    PUSH32(esp, 4);
    ebx = 0x638790;
    PUSH32(esp, 0); sub_00314ED0(); /* call 0x00314ED0 */

loc_0031441D: ;
    PUSH32(esp, 0);
    PUSH32(esp, 0x51);
    edi = 0x638784;
    PUSH32(esp, 4);
    ebx = 0x638774;
    MEM32(eax + 0x58) = 0xC7;
    MEM32(eax + 0x64) = esi;
    MEM32(eax + 0x118) = 0x638780;
    MEM32(eax + 0x124) = edi;
    MEM32(eax + 0x128) = ebp;
    MEM32(eax + 0x12C) = ebp;
    MEM32(eax + 0x130) = ebp;
    MEM32(eax + 0x134) = ebp;
    PUSH32(esp, 0); sub_00314ED0(); /* call 0x00314ED0 */

loc_00314464: ;
    PUSH32(esp, 1);
    PUSH32(esp, 0x59);
    PUSH32(esp, 0xA);
    ebx = 0x63876C;
    MEM32(eax + 0x58) = 0xD7;
    MEM32(eax + 0x64) = esi;
    MEM32(eax + 0x118) = 0x638780;
    MEM32(eax + 0x124) = edi;
    MEM32(eax + 0x128) = ebp;
    MEM32(eax + 0x12C) = ebp;
    MEM32(eax + 0x130) = ebp;
    MEM32(eax + 0x134) = ebp;
    PUSH32(esp, 0); sub_00314ED0(); /* call 0x00314ED0 */

loc_003144A6: ;
    PUSH32(esp, 0);
    PUSH32(esp, 0x59);
    ebp = 0x5E069C;
    edi = 0x63875C;
    PUSH32(esp, 0xA);
    MEM32(eax + 0x58) = 0xD0;
    MEM32(eax + 0x64) = esi;
    MEM32(eax + 0x118) = ebp;
    MEM32(eax + 0x124) = edi;
    PUSH32(esp, 0); sub_00314ED0(); /* call 0x00314ED0 */

loc_003144D1: ;
    PUSH32(esp, 1);
    PUSH32(esp, 0x54);
    PUSH32(esp, 5);
    ebx = 0x638754;
    MEM32(eax + 0x58) = 0xE0;
    MEM32(eax + 0x64) = esi;
    MEM32(eax + 0x118) = ebp;
    MEM32(eax + 0x124) = edi;
    PUSH32(esp, 0); sub_00314ED0(); /* call 0x00314ED0 */

loc_003144F7: ;
    esp = esp + 0x48;
    PUSH32(esp, 0);
    ebp = 0x638724;
    edi = 0x638730;
    PUSH32(esp, 0x54);
    PUSH32(esp, 5);
    ebx = 0x638718;
    MEM32(eax + 0x58) = 0xC9;
    MEM32(eax + 0x64) = esi;
    MEM32(eax + 0x118) = 0x638740;
    MEM32(eax + 0x124) = 0x638748;
    MEM32(eax + 0x128) = ebp;
    MEM32(eax + 0x12C) = ebp;
    MEM32(eax + 0x130) = edi;
    MEM32(eax + 0x134) = edi;
    PUSH32(esp, 0); sub_00314ED0(); /* call 0x00314ED0 */

loc_0031454A: ;
    MEM32(eax + 0x58) = 0xD9;
    MEM32(eax + 0x64) = esi;
    MEM32(eax + 0x118) = 0x638740;
    MEM32(eax + 0x124) = 0x638748;
    MEM32(eax + 0x128) = ebp;
    MEM32(eax + 0x12C) = ebp;
    MEM32(eax + 0x130) = edi;
    MEM32(eax + 0x134) = edi;
    PUSH32(esp, 1);
    PUSH32(esp, 0x57);
    PUSH32(esp, 8);
    ebx = 0x638710;
    PUSH32(esp, 0); sub_00314ED0(); /* call 0x00314ED0 */

loc_00314590: ;
    PUSH32(esp, 0);
    edi = 0x6386EC;
    PUSH32(esp, 0x57);
    ebp = 0x638700;
    PUSH32(esp, 8);
    ebx = 0x6386E0;
    MEM32(eax + 0x58) = 0xCD;
    MEM32(eax + 0x64) = esi;
    MEM32(eax + 0x118) = 0x6386F8;
    MEM32(eax + 0x124) = ebp;
    MEM32(eax + 0x128) = edi;
    MEM32(eax + 0x12C) = edi;
    MEM32(eax + 0x130) = edi;
    MEM32(eax + 0x134) = edi;
    PUSH32(esp, 0); sub_00314ED0(); /* call 0x00314ED0 */

loc_003145DC: ;
    PUSH32(esp, 1);
    PUSH32(esp, 0x55);
    PUSH32(esp, 1);
    ebx = 0x6386D0;
    MEM32(eax + 0x58) = 0xDD;
    MEM32(eax + 0x64) = esi;
    MEM32(eax + 0x118) = 0x6386F8;
    MEM32(eax + 0x124) = ebp;
    MEM32(eax + 0x128) = edi;
    MEM32(eax + 0x12C) = edi;
    MEM32(eax + 0x130) = edi;
    MEM32(eax + 0x134) = edi;
    PUSH32(esp, 0); sub_00314ED0(); /* call 0x00314ED0 */

loc_0031461E: ;
    PUSH32(esp, 0);
    PUSH32(esp, 0x55);
    PUSH32(esp, 1);
    ebx = 0x6386BC;
    MEM32(eax + 0x58) = 0xCA;
    MEM32(eax + 0x64) = esi;
    MEM32(eax + 0x118) = 0x6386F8;
    MEM32(eax + 0x124) = ebp;
    MEM32(eax + 0x128) = edi;
    MEM32(eax + 0x12C) = edi;
    MEM32(eax + 0x130) = edi;
    MEM32(eax + 0x134) = edi;
    PUSH32(esp, 0); sub_00314ED0(); /* call 0x00314ED0 */

loc_00314660: ;
    PUSH32(esp, 1);
    PUSH32(esp, 0x72);
    PUSH32(esp, 0x32);
    ebx = 0x6386AC;
    MEM32(eax + 0x58) = 0xDA;
    MEM32(eax + 0x64) = esi;
    MEM32(eax + 0x118) = 0x6386F8;
    MEM32(eax + 0x124) = ebp;
    MEM32(eax + 0x128) = edi;
    MEM32(eax + 0x12C) = edi;
    MEM32(eax + 0x130) = edi;
    MEM32(eax + 0x134) = edi;
    PUSH32(esp, 0); sub_00314ED0(); /* call 0x00314ED0 */

loc_003146A2: ;
    esp = esp + 0x48;
    PUSH32(esp, 1);
    PUSH32(esp, 0x5D);
    PUSH32(esp, 0x3B);
    ebx = 0x638698;
    MEM32(eax + 0x58) = 0xD5;
    MEM32(eax + 0x64) = esi;
    PUSH32(esp, 0); sub_00314ED0(); /* call 0x00314ED0 */

loc_003146BF: ;
    PUSH32(esp, 0);
    edi = 0x638680;
    ebp = 0x638690;
    PUSH32(esp, 0x5D);
    PUSH32(esp, 0x3B);
    MEM32(eax + 0x58) = 0xE5;
    MEM32(eax + 0x64) = esi;
    MEM32(eax + 0x118) = ebp;
    MEM32(eax + 0x124) = ebp;
    MEM32(eax + 0x128) = edi;
    MEM32(eax + 0x12C) = edi;
    MEM32(eax + 0x130) = edi;
    MEM32(eax + 0x134) = edi;
    PUSH32(esp, 0); sub_00314ED0(); /* call 0x00314ED0 */

loc_00314702: ;
    MEM32(eax + 0x58) = 0xFB;
    PUSH32(esp, 0);
    PUSH32(esp, 0x5E);
    PUSH32(esp, 0x3C);
    ebx = 0x638670;
    MEM32(eax + 0x64) = esi;
    MEM32(eax + 0x118) = ebp;
    MEM32(eax + 0x124) = ebp;
    MEM32(eax + 0x128) = edi;
    MEM32(eax + 0x12C) = edi;
    MEM32(eax + 0x130) = edi;
    MEM32(eax + 0x134) = edi;
    PUSH32(esp, 0); sub_00314ED0(); /* call 0x00314ED0 */

loc_00314740: ;
    ecx = 0x638668;
    PUSH32(esp, 1);
    MEM32(eax + 0x118) = ecx;
    MEM32(eax + 0x124) = ecx;
    ecx = 0x638658;
    PUSH32(esp, 0x5F);
    PUSH32(esp, 0x3D);
    ebx = 0x638648;
    MEM32(eax + 0x58) = 0xE5;
    MEM32(eax + 0x64) = esi;
    MEM32(eax + 0x128) = ecx;
    MEM32(eax + 0x12C) = ecx;
    MEM32(eax + 0x130) = ecx;
    MEM32(eax + 0x134) = ecx;
    PUSH32(esp, 0); sub_00314ED0(); /* call 0x00314ED0 */

loc_00314788: ;
    PUSH32(esp, 0);
    PUSH32(esp, 0x5F);
    PUSH32(esp, 0x3D);
    MEM32(eax + 0x58) = 0xE7;
    MEM32(eax + 0x64) = esi;
    MEM32(eax + 0x118) = ebp;
    MEM32(eax + 0x124) = ebp;
    MEM32(eax + 0x128) = edi;
    MEM32(eax + 0x12C) = edi;
    MEM32(eax + 0x130) = edi;
    MEM32(eax + 0x134) = edi;
    PUSH32(esp, 0); sub_00314ED0(); /* call 0x00314ED0 */

loc_003147C1: ;
    PUSH32(esp, 1);
    PUSH32(esp, 0x60);
    PUSH32(esp, 0x3E);
    ebx = 0x638638;
    MEM32(eax + 0x58) = 0xFD;
    MEM32(eax + 0x64) = esi;
    MEM32(eax + 0x118) = ebp;
    MEM32(eax + 0x124) = ebp;
    MEM32(eax + 0x128) = edi;
    MEM32(eax + 0x12C) = edi;
    MEM32(eax + 0x130) = edi;
    MEM32(eax + 0x134) = edi;
    PUSH32(esp, 0); sub_00314ED0(); /* call 0x00314ED0 */

loc_003147FF: ;
    esp = esp + 0x48;
    PUSH32(esp, 0);
    PUSH32(esp, 0x60);
    PUSH32(esp, 0x3E);
    MEM32(eax + 0x58) = 0xE8;
    MEM32(eax + 0x64) = esi;
    MEM32(eax + 0x118) = ebp;
    MEM32(eax + 0x124) = ebp;
    MEM32(eax + 0x128) = edi;
    MEM32(eax + 0x12C) = edi;
    MEM32(eax + 0x130) = edi;
    MEM32(eax + 0x134) = edi;
    PUSH32(esp, 0); sub_00314ED0(); /* call 0x00314ED0 */

loc_0031483B: ;
    PUSH32(esp, 1);
    PUSH32(esp, 0x61);
    PUSH32(esp, 0x3F);
    ebx = 0x638628;
    MEM32(eax + 0x58) = 0xFE;
    MEM32(eax + 0x64) = esi;
    MEM32(eax + 0x118) = ebp;
    MEM32(eax + 0x124) = ebp;
    MEM32(eax + 0x128) = edi;
    MEM32(eax + 0x12C) = edi;
    MEM32(eax + 0x130) = edi;
    MEM32(eax + 0x134) = edi;
    PUSH32(esp, 0); sub_00314ED0(); /* call 0x00314ED0 */

loc_00314879: ;
    MEM32(eax + 0x58) = 0xE6;
    MEM32(eax + 0x64) = esi;
    MEM32(eax + 0x118) = ebp;
    PUSH32(esp, 0);
    PUSH32(esp, 0x61);
    PUSH32(esp, 0x3F);
    MEM32(eax + 0x124) = ebp;
    MEM32(eax + 0x128) = edi;
    MEM32(eax + 0x12C) = edi;
    MEM32(eax + 0x130) = edi;
    MEM32(eax + 0x134) = edi;
    PUSH32(esp, 0); sub_00314ED0(); /* call 0x00314ED0 */

loc_003148B2: ;
    PUSH32(esp, 1);
    PUSH32(esp, 0x62);
    PUSH32(esp, 0x40);
    ebx = 0x638618;
    MEM32(eax + 0x58) = 0xFC;
    MEM32(eax + 0x64) = esi;
    MEM32(eax + 0x118) = ebp;
    MEM32(eax + 0x124) = ebp;
    MEM32(eax + 0x128) = edi;
    MEM32(eax + 0x12C) = edi;
    MEM32(eax + 0x130) = edi;
    MEM32(eax + 0x134) = edi;
    PUSH32(esp, 0); sub_00314ED0(); /* call 0x00314ED0 */

loc_003148F0: ;
    PUSH32(esp, 0);
    PUSH32(esp, 0x62);
    PUSH32(esp, 0x40);
    MEM32(eax + 0x58) = 0xE9;
    MEM32(eax + 0x64) = esi;
    MEM32(eax + 0x118) = ebp;
    MEM32(eax + 0x124) = ebp;
    MEM32(eax + 0x128) = edi;
    MEM32(eax + 0x12C) = edi;
    MEM32(eax + 0x130) = edi;
    MEM32(eax + 0x134) = edi;
    PUSH32(esp, 0); sub_00314ED0(); /* call 0x00314ED0 */

loc_00314929: ;
    PUSH32(esp, 1);
    PUSH32(esp, 0x63);
    PUSH32(esp, 0x41);
    ebx = 0x63860C;
    MEM32(eax + 0x58) = 0xFF;
    MEM32(eax + 0x64) = esi;
    MEM32(eax + 0x118) = ebp;
    MEM32(eax + 0x124) = ebp;
    MEM32(eax + 0x128) = edi;
    MEM32(eax + 0x12C) = edi;
    MEM32(eax + 0x130) = edi;
    MEM32(eax + 0x134) = edi;
    PUSH32(esp, 0); sub_00314ED0(); /* call 0x00314ED0 */

loc_00314967: ;
    esp = esp + 0x48;
    PUSH32(esp, 0);
    PUSH32(esp, 0x63);
    PUSH32(esp, 0x41);
    MEM32(eax + 0x58) = 0xEA;
    MEM32(eax + 0x64) = esi;
    MEM32(eax + 0x118) = ebp;
    MEM32(eax + 0x124) = ebp;
    MEM32(eax + 0x128) = edi;
    MEM32(eax + 0x12C) = edi;
    MEM32(eax + 0x130) = edi;
    MEM32(eax + 0x134) = edi;
    PUSH32(esp, 0); sub_00314ED0(); /* call 0x00314ED0 */

loc_003149A3: ;
    PUSH32(esp, 1);
    PUSH32(esp, 0x6A);
    PUSH32(esp, 0x20);
    ebx = 0x6385FC;
    MEM32(eax + 0x58) = 0x100;
    MEM32(eax + 0x64) = esi;
    MEM32(eax + 0x118) = ebp;
    MEM32(eax + 0x124) = ebp;
    MEM32(eax + 0x128) = edi;
    MEM32(eax + 0x12C) = edi;
    MEM32(eax + 0x130) = edi;
    MEM32(eax + 0x134) = edi;
    PUSH32(esp, 0); sub_00314ED0(); /* call 0x00314ED0 */

loc_003149E1: ;
    ebp = 0; /* xor self */
    edi = 0x5E0668;
    PUSH32(esp, ebp);
    MEM32(eax + 0x58) = 0xF2;
    MEM32(eax + 0x64) = esi;
    MEM32(eax + 0x118) = edi;
    MEM32(eax + 0x124) = edi;
    PUSH32(esp, 0x6A);
    PUSH32(esp, 0x20);
    PUSH32(esp, 0); sub_00314ED0(); /* call 0x00314ED0 */

loc_00314A08: ;
    PUSH32(esp, 1);
    PUSH32(esp, 0x6B);
    PUSH32(esp, 0x21);
    ebx = 0x6385E8;
    MEM32(eax + 0x58) = 0xF9;
    MEM32(eax + 0x64) = esi;
    MEM32(eax + 0x118) = edi;
    MEM32(eax + 0x124) = edi;
    PUSH32(esp, 0); sub_00314ED0(); /* call 0x00314ED0 */

loc_00314A2E: ;
    PUSH32(esp, ebp);
    PUSH32(esp, 0x6B);
    PUSH32(esp, 0x21);
    MEM32(eax + 0x58) = 0xF1;
    MEM32(eax + 0x64) = esi;
    MEM32(eax + 0x118) = edi;
    MEM32(eax + 0x124) = edi;
    PUSH32(esp, 0); sub_00314ED0(); /* call 0x00314ED0 */

loc_00314A4E: ;
    PUSH32(esp, 1);
    PUSH32(esp, 0x6E);
    PUSH32(esp, 0x1F);
    ebx = 0x6385D8;
    MEM32(eax + 0x58) = 0xF8;
    MEM32(eax + 0x64) = esi;
    MEM32(eax + 0x118) = edi;
    MEM32(eax + 0x124) = edi;
    PUSH32(esp, 0); sub_00314ED0(); /* call 0x00314ED0 */

loc_00314A74: ;
    esp = esp + 0x48;
    PUSH32(esp, ebp);
    PUSH32(esp, 0x6E);
    PUSH32(esp, 0x1F);
    MEM32(eax + 0x58) = 0xF3;
    MEM32(eax + 0x64) = 1;
    MEM32(eax + 0x118) = edi;
    MEM32(eax + 0x124) = edi;
    PUSH32(esp, 0); sub_00314ED0(); /* call 0x00314ED0 */

loc_00314A9B: ;
    PUSH32(esp, 1);
    PUSH32(esp, 0x73);
    PUSH32(esp, 0x42);
    ebx = 0x6385C0;
    MEM32(eax + 0x58) = 0xFA;
    MEM32(eax + 0x64) = ebp;
    MEM32(eax + 0x118) = edi;
    MEM32(eax + 0x124) = edi;
    PUSH32(esp, 0); sub_00314ED0(); /* call 0x00314ED0 */

loc_00314AC1: ;
    PUSH32(esp, ebp);
    PUSH32(esp, 0x73);
    PUSH32(esp, 0x42);
    MEM32(eax + 0x58) = 0x109;
    MEM32(eax + 0x64) = 1;
    MEM32(eax + 0x118) = edi;
    MEM32(eax + 0x124) = edi;
    PUSH32(esp, 0); sub_00314ED0(); /* call 0x00314ED0 */

loc_00314AE5: ;
    PUSH32(esp, 1);
    PUSH32(esp, 0x25);
    PUSH32(esp, 0x39);
    ebx = 0x608220;
    MEM32(eax + 0x58) = 0x10A;
    MEM32(eax + 0x64) = ebp;
    MEM32(eax + 0x118) = edi;
    MEM32(eax + 0x124) = edi;
    PUSH32(esp, 0); sub_00314ED0(); /* call 0x00314ED0 */

loc_00314B0B: ;
    PUSH32(esp, 1);
    PUSH32(esp, 0x44);
    ebp = 0x60;
    PUSH32(esp, 0x3A);
    ebx = 0x6385B0;
    MEM32(eax + 0x58) = ebp;
    MEM32(eax + 0x64) = esi;
    PUSH32(esp, 0); sub_00314ED0(); /* call 0x00314ED0 */

loc_00314B26: ;
    PUSH32(esp, 1);
    PUSH32(esp, 0x65);
    PUSH32(esp, 0x19);
    ebx = 0x608370;
    MEM32(eax + 0x58) = ebp;
    MEM32(eax + 0x64) = esi;
    PUSH32(esp, 0); sub_00314ED0(); /* call 0x00314ED0 */

loc_00314B3C: ;
    esp = esp + 0x48;
    MEM32(eax + 0x118) = edi;
    MEM32(eax + 0x124) = edi;
    PUSH32(esp, 1);
    PUSH32(esp, 0x66);
    PUSH32(esp, 0x1A);
    ebx = 0x63859C;
    PUSH32(esp, 0); sub_00314ED0(); /* call 0x00314ED0 */

loc_00314B5B: ;
    PUSH32(esp, 1);
    PUSH32(esp, 0x67);
    PUSH32(esp, 0x1B);
    ebx = 0x63858C;
    MEM32(eax + 0x118) = edi;
    MEM32(eax + 0x124) = edi;
    PUSH32(esp, 0); sub_00314ED0(); /* call 0x00314ED0 */

loc_00314B77: ;
    PUSH32(esp, 1);
    PUSH32(esp, 0x68);
    PUSH32(esp, 0x1C);
    ebx = 0x63857C;
    MEM32(eax + 0x118) = edi;
    MEM32(eax + 0x124) = edi;
    PUSH32(esp, 0); sub_00314ED0(); /* call 0x00314ED0 */

loc_00314B93: ;
    PUSH32(esp, 1);
    PUSH32(esp, 0x69);
    PUSH32(esp, 0x22);
    ebx = 0x638568;
    MEM32(eax + 0x118) = edi;
    MEM32(eax + 0x124) = edi;
    PUSH32(esp, 0); sub_00314ED0(); /* call 0x00314ED0 */

loc_00314BAF: ;
    PUSH32(esp, 1);
    PUSH32(esp, 0x6C);
    PUSH32(esp, 0x1D);
    ebx = 0x638550;
    MEM32(eax + 0x118) = edi;
    MEM32(eax + 0x124) = edi;
    PUSH32(esp, 0); sub_00314ED0(); /* call 0x00314ED0 */

loc_00314BCB: ;
    PUSH32(esp, 1);
    PUSH32(esp, 0x6D);
    PUSH32(esp, 0x1E);
    ebx = 0x638544;
    MEM32(eax + 0x118) = edi;
    MEM32(eax + 0x124) = edi;
    PUSH32(esp, 0); sub_00314ED0(); /* call 0x00314ED0 */

loc_00314BE7: ;
    esp = esp + 0x48;
    PUSH32(esp, 1);
    PUSH32(esp, 0);
    PUSH32(esp, 0);
    ebx = 0x5DF8CC;
    MEM32(eax + 0x118) = edi;
    MEM32(eax + 0x124) = edi;
    PUSH32(esp, 0); sub_00314ED0(); /* call 0x00314ED0 */

loc_00314C06: ;
    PUSH32(esp, 0);
    PUSH32(esp, 0);
    PUSH32(esp, 0);
    PUSH32(esp, 0); sub_00314ED0(); /* call 0x00314ED0 */

loc_00314C11: ;
    PUSH32(esp, 1);
    PUSH32(esp, 0);
    PUSH32(esp, 0x13);
    PUSH32(esp, 0); sub_00314ED0(); /* call 0x00314ED0 */

loc_00314C1C: ;
    PUSH32(esp, 0);
    PUSH32(esp, 0);
    PUSH32(esp, 0x13);
    PUSH32(esp, 0); sub_00314ED0(); /* call 0x00314ED0 */

loc_00314C27: ;
    PUSH32(esp, 1);
    PUSH32(esp, 0x1A);
    PUSH32(esp, 0x35);
    ebx = 0x63853C;
    PUSH32(esp, 0); sub_00314ED0(); /* call 0x00314ED0 */

loc_00314C37: ;
    ecx = 1;
    PUSH32(esp, ecx);
    PUSH32(esp, 2);
    PUSH32(esp, 0x27);
    ebx = 0x638530;
    MEM32(eax + 0xEC) = ecx;
    MEM8(eax + 0xF6) = LO8(ecx);
    PUSH32(esp, 0); sub_00314ED0(); /* call 0x00314ED0 */

loc_00314C57: ;
    esp = esp + 0x48;
    PUSH32(esp, 1);
    PUSH32(esp, 0x13);
    edi = 0x107;
    PUSH32(esp, 0x45);
    MEM32(eax + 0x58) = edi;
    MEM32(eax + 0x64) = esi;
    PUSH32(esp, 0); sub_00314ED0(); /* call 0x00314ED0 */

loc_00314C70: ;
    PUSH32(esp, 1);
    PUSH32(esp, 0x12);
    PUSH32(esp, 0x2B);
    ebx = 0x638520;
    MEM32(eax + 0x58) = edi;
    MEM32(eax + 0x64) = esi;
    PUSH32(esp, 0); sub_00314ED0(); /* call 0x00314ED0 */

loc_00314C86: ;
    ecx = 1;
    PUSH32(esp, ecx);
    PUSH32(esp, 0x10);
    PUSH32(esp, 0x34);
    ebx = 0x63850C;
    MEM32(eax + 0xEC) = ecx;
    MEM8(eax + 0xF6) = LO8(ecx);
    PUSH32(esp, 0); sub_00314ED0(); /* call 0x00314ED0 */

loc_00314CA6: ;
    ecx = 1;
    PUSH32(esp, ecx);
    PUSH32(esp, 0xA);
    PUSH32(esp, 0x26);
    ebx = 0x6384FC;
    MEM32(eax + 0xEC) = ecx;
    MEM8(eax + 0xF6) = LO8(ecx);
    PUSH32(esp, 0); sub_00314ED0(); /* call 0x00314ED0 */

loc_00314CC6: ;
    PUSH32(esp, 1);
    PUSH32(esp, 0x34);
    PUSH32(esp, 0x28);
    ebx = 0x6384F0;
    MEM32(eax + 0x58) = 0x10C;
    MEM32(eax + 0x64) = esi;
    PUSH32(esp, 0); sub_00314ED0(); /* call 0x00314ED0 */

loc_00314CE0: ;
    PUSH32(esp, 1);
    PUSH32(esp, 9);
    PUSH32(esp, 0x24);
    ebx = 0x638790;
    MEM32(eax + 0x58) = 0x108;
    MEM32(eax + 0x64) = esi;
    PUSH32(esp, 0); sub_00314ED0(); /* call 0x00314ED0 */

loc_00314CFA: ;
    esp = esp + 0x48;
    ecx = 0x63884C;
    PUSH32(esp, 1);
    PUSH32(esp, 0x75);
    PUSH32(esp, 0x46);
    ebx = 0x6384E0;
    MEM32(eax + 0x58) = 0xF4;
    MEM32(eax + 0x64) = esi;
    MEM32(eax + 0x118) = 0x638780;
    MEM32(eax + 0x124) = 0x638784;
    MEM32(eax + 0x128) = ecx;
    MEM32(eax + 0x12C) = ecx;
    MEM32(eax + 0x130) = ecx;
    MEM32(eax + 0x134) = ecx;
    PUSH32(esp, 0); sub_00314ED0(); /* call 0x00314ED0 */

loc_00314D48: ;
    PUSH32(esp, 1);
    PUSH32(esp, 0x76);
    edi = 0x110;
    PUSH32(esp, 0x47);
    ebx = 0x6384D4;
    MEM32(eax + 0x58) = edi;
    MEM32(eax + 0x64) = esi;
    PUSH32(esp, 0); sub_00314ED0(); /* call 0x00314ED0 */

loc_00314D63: ;
    PUSH32(esp, 1);
    PUSH32(esp, 0x77);
    PUSH32(esp, 0x4B);
    ebx = 0x5EFF28;
    MEM32(eax + 0x58) = 0x113;
    MEM32(eax + 0x64) = esi;
    PUSH32(esp, 0); sub_00314ED0(); /* call 0x00314ED0 */

loc_00314D7D: ;
    PUSH32(esp, 1);
    PUSH32(esp, 0x20);
    PUSH32(esp, 0x38);
    ebx = 0x6384C8;
    MEM32(eax + 0x58) = edi;
    MEM32(eax + 0x64) = esi;
    PUSH32(esp, 0); sub_00314ED0(); /* call 0x00314ED0 */

loc_00314D93: ;
    ecx = 0x5E0660;
    edi = 0x2D;
    MEM32(eax + 0x58) = edi;
    MEM32(eax + 0x64) = esi;
    MEM32(eax + 0x118) = ecx;
    MEM32(eax + 0x124) = ecx;
    PUSH32(esp, 1);
    PUSH32(esp, 0x18);
    PUSH32(esp, 0x2B);
    ebx = 0x5F03C8;
    PUSH32(esp, 0); sub_00314ED0(); /* call 0x00314ED0 */

loc_00314DBF: ;
    xmm0 = MEMF(0x648D18); /* movss */
    PUSH32(esp, 1);
    PUSH32(esp, 0x3B);
    PUSH32(esp, 0x33);
    ebx = 0x6384B0;
    MEM32(eax + 0x58) = 0x55;
    MEM32(eax + 0x64) = esi;
    MEM32(eax + 0x6C) = 0xFB;
    MEMF(eax + 0x74) = xmm0; /* movss */
    MEM32(eax + 0x84) = 0xC6;
    MEMF(eax + 0x8C) = xmm0; /* movss */
    PUSH32(esp, 0); sub_00314ED0(); /* call 0x00314ED0 */

loc_00314DFF: ;
    esp = esp + 0x48;
    PUSH32(esp, 1);
    PUSH32(esp, 0x37);
    PUSH32(esp, 0x23);
    ebx = 0x6384A4;
    MEM32(eax + 0x58) = 0x89;
    MEM32(eax + 0x64) = esi;
    PUSH32(esp, 0); sub_00314ED0(); /* call 0x00314ED0 */

loc_00314E1C: ;
    PUSH32(esp, 1);
    PUSH32(esp, 0x3A);
    PUSH32(esp, 0x37);
    ebx = 0x5F01F4;
    MEM32(eax + 0x58) = 0x114;
    MEM32(eax + 0x64) = esi;
    PUSH32(esp, 0); sub_00314ED0(); /* call 0x00314ED0 */

loc_00314E36: ;
    xmm0 = MEMF(0x648D18); /* movss */
    PUSH32(esp, 1);
    MEMF(eax + 0x74) = xmm0; /* movss */
    xmm0 = MEMF(0x648D34); /* movss */
    PUSH32(esp, 0xC);
    PUSH32(esp, 0x25);
    ebx = 0x63849C;
    MEM32(eax + 0x58) = 0x86;
    MEM32(eax + 0x64) = esi;
    MEM32(eax + 0x6C) = 0x1F9;
    MEM32(eax + 0x84) = esi;
    MEMF(eax + 0x8C) = xmm0; /* movss */
    PUSH32(esp, 0); sub_00314ED0(); /* call 0x00314ED0 */

loc_00314E7A: ;
    PUSH32(esp, 1);
    PUSH32(esp, 0x16);
    ebp = 0xD6;
    PUSH32(esp, 0x43);
    MEM32(eax + 0x58) = ebp;
    MEM32(eax + 0x64) = esi;
    PUSH32(esp, 0); sub_00314ED0(); /* call 0x00314ED0 */

loc_00314E90: ;
    PUSH32(esp, 1);
    PUSH32(esp, 3);
    PUSH32(esp, 0x36);
    ebx = 0x638494;
    MEM32(eax + 0x58) = ebp;
    MEM32(eax + 0x64) = esi;
    PUSH32(esp, 0); sub_00314ED0(); /* call 0x00314ED0 */

loc_00314EA6: ;
    xmm0 = MEMF(0x648D18); /* movss */
    esp = esp + 0x3C;
    MEM32(eax + 0x84) = edi;
    POP32(esp, edi);
    POP32(esp, esi);
    POP32(esp, ebp);
    MEM32(eax + 0x6C) = 0x2E;
    MEMF(eax + 0x74) = xmm0; /* movss */
    MEMF(eax + 0x8C) = xmm0; /* movss */
    POP32(esp, ebx);
    esp += 4; return; /* ret */

}

/**
 * sub_00314ED0
 * Original: 0x00314ED0 - 0x00314FEA (282 bytes, 84 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00314ED0(void)
{
    uint32_t ebp;
    int _flags = 0; /* fallback flag var */
    float xmm0;
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_00314ED0: ;
    PUSH32(esp, ebp);
    PUSH32(esp, esi);
    PUSH32(esp, edi);
    ebp = ebp | 0xFFFFFFFFu;
    PUSH32(esp, ebp);
    PUSH32(esp, 0x279);
    PUSH32(esp, 0x638464);
    PUSH32(esp, 0x138);
    PUSH32(esp, 0); sub_002AF0E0(); /* call 0x002AF0E0 */

loc_00314EEB: ;
    esi = eax;
    esp = esp + 0x10;
    if (TEST_Z(esi, esi)) goto loc_00314EFF; /* je: equal / zero */

loc_00314EF4: ;
    ecx = 0x4E;
    eax = 0; /* xor self */
    edi = esi;
    { uint32_t _i; for (_i = 0; _i < ecx; _i++) MEM32(edi + _i*4) = eax; }
    edi += ecx * 4; ecx = 0; /* rep stosd */

loc_00314EFF: ;
    eax = esi + 8;
    edi = eax;
    ecx = ebx;
    edi = edi - ebx;

loc_00314F08: ;
    SET_LO8(edx, MEM8(ecx));
    MEM8(edi + ecx) = LO8(edx);
    ecx++;
    if (TEST_NZ(LO8(edx), LO8(edx))) goto loc_00314F08; /* jne: not equal / not zero */

loc_00314F12: ;
    PUSH32(esp, 0); sub_0029CDD0(); /* call 0x0029CDD0 */

loc_00314F17: ;
    ecx = MEM32(esp + 0x14);
    edx = MEM32(esp + 0x18);
    xmm0 = MEMF(0x648D14); /* movss */
    MEM32(esi + 0x48) = eax;
    eax = MEM32(esp + 0x10);
    MEM32(esi + 0x4C) = eax;
    MEM32(esi + 0x50) = ecx;
    MEM32(esi + 0x54) = edx;
    edi = 0; /* xor self */
    edx = 0; /* xor self */
    ecx = esi + 0xFC;
    eax = esi + 0x64;

loc_00314F44: ;
    MEM32(eax + -12) = ebp;
    MEM32(eax) = ebp;
    MEM32(eax + 8) = ebp;
    MEMF(eax + 0x10) = xmm0; /* movss */
    MEM32(eax + 0x20) = ebp;
    MEMF(eax + 0x28) = xmm0; /* movss */
    MEM8(esi + edx + 0xF4) = 0;
    MEM32(ecx + -4) = ebp;
    MEM32(ecx) = ebp;
    MEM32(ecx + 0xC) = ebp;
    MEM32(ecx + 0x10) = ebp;
    edx++;
    eax = eax + 4;
    ecx = ecx + 8;
    if (CMP_L(edx, 2)) goto loc_00314F44; /* jl: less (signed <) */

loc_00314F78: ;
    MEM32(esi + 0xEC) = edi;
    eax = 0x5DF8CC;
    MEM32(esi + 0x118) = eax;
    MEM32(esi + 0x11C) = eax;
    MEM32(esi + 0x120) = eax;
    MEM32(esi + 0x124) = eax;
    MEM32(esi + 0x128) = eax;
    MEM32(esi + 0x12C) = eax;
    MEM32(esi + 0x130) = eax;
    MEM32(esi + 0x134) = eax;
    MEM8(esi + 0xF6) = 0;
    (void)0; /* cmp MEM32(0x84A63C), edi - flags set for next jcc */
    eax = 0x84A638;
    if (CMP_EQ(MEM32(0x84A63C), edi)) goto loc_00314FDC; /* je: equal / zero */

loc_00314FC7: ;
    ecx = 0x84A63C;
    /* nop */

loc_00314FD0: ;
    eax = MEM32(ecx);
    edx = MEM32(eax + 4);
    (void)0; /* cmp edx, edi - flags set for next jcc */
    ecx = eax + 4;
    if (CMP_NE(edx, edi)) goto loc_00314FD0; /* jne: not equal / not zero */

loc_00314FDC: ;
    MEM32(eax + 4) = esi;
    MEM32(esi + 4) = edi;
    MEM32(esi) = eax;
    POP32(esp, edi);
    eax = esi;
    POP32(esp, esi);
    POP32(esp, ebp);
    esp += 4; return; /* ret */

}

/**
 * sub_00314FF0
 * Original: 0x00314FF0 - 0x00315016 (38 bytes, 16 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00314FF0(void)
{
    int _flags = 0; /* fallback flag var */

loc_00314FF0: ;
    eax = MEM32(0x84A63C);
    ecx = 0; /* xor self */
    if (TEST_Z(eax, eax)) goto loc_00315013; /* je: equal / zero */

loc_00314FFB: ;
    goto loc_00315000;

    /* nop */

loc_00315000: ;
    if (CMP_NE(MEM32(eax + 0x50), esi)) goto loc_0031500C; /* jne: not equal / not zero */

loc_00315005: ;
    if (CMP_EQ(MEM32(eax + 0x54), edx)) goto loc_00315015; /* je: equal / zero */

loc_0031500A: ;
    ecx = eax;

loc_0031500C: ;
    eax = MEM32(eax + 4);
    if (TEST_NZ(eax, eax)) goto loc_00315000; /* jne: not equal / not zero */

loc_00315013: ;
    eax = ecx;

loc_00315015: ;
    esp += 4; return; /* ret */

}

/**
 * sub_00315020
 * Original: 0x00315020 - 0x00315046 (38 bytes, 16 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00315020(void)
{
    int _flags = 0; /* fallback flag var */

loc_00315020: ;
    eax = MEM32(0x84A63C);
    ecx = 0; /* xor self */
    if (TEST_Z(eax, eax)) goto loc_00315043; /* je: equal / zero */

loc_0031502B: ;
    goto loc_00315030;

    /* nop */

loc_00315030: ;
    if (CMP_NE(MEM32(eax + 0x4C), esi)) goto loc_0031503C; /* jne: not equal / not zero */

loc_00315035: ;
    if (CMP_EQ(MEM32(eax + 0x54), edx)) goto loc_00315045; /* je: equal / zero */

loc_0031503A: ;
    ecx = eax;

loc_0031503C: ;
    eax = MEM32(eax + 4);
    if (TEST_NZ(eax, eax)) goto loc_00315030; /* jne: not equal / not zero */

loc_00315043: ;
    eax = ecx;

loc_00315045: ;
    esp += 4; return; /* ret */

}

/**
 * sub_00315050
 * Original: 0x00315050 - 0x00315063 (19 bytes, 5 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00315050(void)
{
    int _flags = 0; /* fallback flag var */

loc_00315050: ;
    eax = MEM32(ecx + eax * 4 + 0x84);
    if (CMP_NE(eax, 0xFFFFFFFFu)) goto loc_00315062; /* jne: not equal / not zero */

loc_0031505C: ;
    eax = MEM32(ecx + 0x84);

loc_00315062: ;
    esp += 4; return; /* ret */

}

/**
 * sub_00315070
 * Original: 0x00315070 - 0x0031507D (13 bytes, 4 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00315070(void)
{
    int _flags = 0; /* fallback flag var */
    float xmm0;

loc_00315070: ;
    if (TEST_NZ(ecx, ecx)) { sub_0031507D(); return; } /* jne: not equal / not zero */

loc_00315074: ;
    xmm0 = MEMF(0x648D14); /* movss */
    esp += 4; return; /* ret */

}

/**
 * sub_003150B0
 * Original: 0x003150B0 - 0x003150B9 (9 bytes, 5 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_003150B0(void)
{
    int _flags = 0; /* fallback flag var */

loc_003150B0: ;
    if (TEST_NZ(eax, eax)) { sub_003150B9(); return; } /* jne: not equal / not zero */

loc_003150B4: ;
    MEM32(edx) = eax;
    MEM32(ecx) = eax;
    esp += 4; return; /* ret */

}

/**
 * sub_003150E0
 * Original: 0x003150E0 - 0x00315191 (177 bytes, 40 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_003150E0(void)
{
    int _flags = 0; /* fallback flag var */

loc_003150E0: ;
    ecx = MEM32(eax + 0x568);
    MEM32(ecx + 0x1F8) = 0;
    ecx = MEM32(eax + 0x568);
    edx = MEM32(ecx + 0x2F8);
    MEM32(ecx + 0x2FC) = edx;
    ecx = MEM32(eax + 0x568);
    edx = MEM32(ecx + 0x300);
    MEM32(ecx + 0x304) = edx;
    ecx = MEM32(eax + 0x568);
    SET_LO8(edx, MEM8(ecx + 0xB1));
    MEM8(ecx + 0xB0) = LO8(edx);
    ecx = MEM32(eax + 0x568);
    edx = MEM32(0x6BD92C);
    MEM32(ecx + 0x2F8) = 0;
    ecx = MEM32(eax + 0x568);
    PUSH32(esp, esi);
    esi = MEM32(edx + 4);
    PUSH32(esp, edi);
    edi = MEM32(ecx + 0x2F8);
    ecx = MEM32(0x84A63C);
    edx = 0; /* xor self */
    if (TEST_Z(ecx, ecx)) goto loc_00315173; /* je: equal / zero */

loc_00315159: ;
    /* nop */

loc_00315160: ;
    if (CMP_NE(MEM32(ecx + 0x4C), edi)) goto loc_0031516C; /* jne: not equal / not zero */

loc_00315165: ;
    if (CMP_EQ(MEM32(ecx + 0x54), esi)) goto loc_00315175; /* je: equal / zero */

loc_0031516A: ;
    edx = ecx;

loc_0031516C: ;
    ecx = MEM32(ecx + 4);
    if (TEST_NZ(ecx, ecx)) goto loc_00315160; /* jne: not equal / not zero */

loc_00315173: ;
    ecx = edx;

loc_00315175: ;
    edx = MEM32(eax + 0x568);
    POP32(esp, edi);
    MEM32(edx + 0x300) = ecx;
    eax = MEM32(eax + 0x568);
    POP32(esp, esi);
    MEM8(eax + 0xB1) = 0;
    esp += 4; return; /* ret */

}

/**
 * sub_003151A0
 * Original: 0x003151A0 - 0x00315208 (104 bytes, 29 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_003151A0(void)
{
    int _flags = 0; /* fallback flag var */

loc_003151A0: ;
    PUSH32(esp, edi);
    eax = esi;
    PUSH32(esp, 0); sub_003150E0(); /* call 0x003150E0 */

loc_003151A8: ;
    eax = MEM32(esi + 0x568);
    ecx = MEM32(esp + 8);
    edx = MEM32(0x6BD92C);
    MEM32(eax + 0x2F8) = ecx;
    eax = MEM32(esi + 0x568);
    edi = MEM32(eax + 0x2F8);
    eax = MEM32(0x84A63C);
    edx = MEM32(edx + 4);
    ecx = 0; /* xor self */
    if (TEST_Z(eax, eax)) goto loc_003151EB; /* je: equal / zero */

loc_003151D8: ;
    if (CMP_NE(MEM32(eax + 0x4C), edi)) goto loc_003151E4; /* jne: not equal / not zero */

loc_003151DD: ;
    if (CMP_EQ(MEM32(eax + 0x54), edx)) goto loc_003151ED; /* je: equal / zero */

loc_003151E2: ;
    ecx = eax;

loc_003151E4: ;
    eax = MEM32(eax + 4);
    if (TEST_NZ(eax, eax)) goto loc_003151D8; /* jne: not equal / not zero */

loc_003151EB: ;
    eax = ecx;

loc_003151ED: ;
    ecx = MEM32(esi + 0x568);
    MEM32(ecx + 0x300) = eax;
    edx = MEM32(esi + 0x568);
    POP32(esp, edi);
    MEM8(edx + 0xB1) = 0;
    esp += 4; return; /* ret */

}

/**
 * sub_00315210
 * Original: 0x00315210 - 0x00315254 (68 bytes, 28 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00315210(void)
{
    uint32_t ebp;
    int _flags = 0; /* fallback flag var */
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_00315210: ;
    PUSH32(esp, 9);
    PUSH32(esp, eax);
    PUSH32(esp, 0xC);
    PUSH32(esp, 0); sub_000FAEE0(); /* call 0x000FAEE0 */

loc_0031521A: ;
    esp = esp + 0xC;
    if (CMP_LE(eax & eax, 0)) goto loc_0031524F; /* jle: less or equal (signed <=) */

loc_00315221: ;
    ecx = MEM32(0x7481A4);
    (void)0; /* cmp MEM32(ecx), 0 - flags set for next jcc */
    PUSH32(esp, esi);
    edx = 1;
    if (CMP_EQ(MEM32(ecx), 0)) goto loc_0031523F; /* je: equal / zero */

loc_00315232: ;
    eax = ecx;

loc_00315234: ;
    esi = MEM32(eax + 8);
    eax = eax + 8;
    edx++;
    if (TEST_NZ(esi, esi)) goto loc_00315234; /* jne: not equal / not zero */

loc_0031523F: ;
    eax = 0; /* xor self */
    edx--;
    if (CMP_LE(edx & edx, 0)) goto loc_0031524E; /* jle: less or equal (signed <=) */

loc_00315246: ;
    MEM32(ecx + eax * 8) = MEM32(ecx + eax * 8) + ecx;
    eax++;
    if (CMP_L(eax, edx)) goto loc_00315246; /* jl: less (signed <) */

loc_0031524E: ;
    POP32(esp, esi);

loc_0031524F: ;
    g_seh_ebp = ebp; sub_003C6600(); return; /* tail jmp 0x003C6600 */

}

/**
 * sub_00315260
 * Original: 0x00315260 - 0x0031529B (59 bytes, 28 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00315260(void)
{
    int _flags = 0; /* fallback flag var */

loc_00315260: ;
    PUSH32(esp, ebx);
    PUSH32(esp, esi);
    PUSH32(esp, edi);
    edi = eax;
    esi = MEM32(edi);
    if (TEST_Z(esi, esi)) goto loc_00315295; /* je: equal / zero */

loc_0031526B: ;
    PUSH32(esp, 0); sub_002F82C0(); /* call 0x002F82C0 */

loc_00315270: ;
    if (TEST_Z(LO8(eax), LO8(eax))) goto loc_00315295; /* je: equal / zero */

loc_00315274: ;
    SET_LO8(eax, MEM8(edi + 0x18));
    if (TEST_Z(LO8(eax), LO8(eax))) goto loc_00315288; /* je: equal / zero */

loc_0031527B: ;
    eax = MEM32(edi);
    ecx = MEM32(eax + 0xB0);
    if (CMP_NE(ecx, MEM32(edi + 4))) goto loc_00315295; /* jne: not equal / not zero */

loc_00315288: ;
    ebx = MEM32(edi);
    eax = MEM32(ebx + 0x64);
    if (TEST_Z(eax, eax)) goto loc_00315295; /* je: equal / zero */

loc_00315291: ;
    if (TEST_NZ(ebx, ebx)) { sub_0031529B(); return; } /* jne: not equal / not zero */

loc_00315295: ;
    POP32(esp, edi);
    POP32(esp, esi);
    eax = 0; /* xor self */
    POP32(esp, ebx);
    esp += 4; return; /* ret */

}

/**
 * sub_003153A0
 * Original: 0x003153A0 - 0x003153B6 (22 bytes, 10 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_003153A0(void)
{
    int _flags = 0; /* fallback flag var */

loc_003153A0: ;
    PUSH32(esp, esi);
    esi = eax;
    (void)0; /* test esi, esi - flags set for next jcc */
    MEM8(edi + 0x10) = 0;
    MEM8(edi + 8) = 0;
    if (TEST_NZ(esi, esi)) { sub_003153B6(); return; } /* jne: not equal / not zero */

loc_003153AF: ;
    MEM32(edi) = eax;
    MEM32(edi + 4) = eax;
    POP32(esp, esi);
    esp += 4; return; /* ret */

}

/**
 * sub_00315470
 * Original: 0x00315470 - 0x003154D6 (102 bytes, 21 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00315470(void)
{
    uint32_t ebp;
    int _flags = 0; /* fallback flag var */
    float xmm0, xmm1, xmm2;
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_00315470: ;
    edx = MEM32(esp + 0xC);
    eax = ZX16(MEM16(edx + 0x170));
    ecx = ZX16(MEM16(0x84A648));
    xmm0 = MEMF(edx + 0x110); /* movss */
    xmm0 = xmm0 * MEMF(0x648EF4); /* mulss */
    eax = eax - ecx;
    if (CMP_LE(eax, 0x8000)) goto loc_003154A0; /* jle: less or equal (signed <=) */

loc_0031549B: ;
    eax = eax - 0xFFFF;

loc_003154A0: ;
    if (CMP_GE(eax, 0xFFFF8000u)) goto loc_003154AC; /* jge: greater or equal (signed >=) */

loc_003154A7: ;
    eax = eax + 0xFFFF;

loc_003154AC: ;
    xmm2 = MEMF(0x648D34); /* movss */
    xmm1 = (float)(int32_t)eax; /* cvtsi2ss */
    xmm1 = xmm1 * MEMF(0x648D2C); /* mulss */
    xmm0 = xmm0 - xmm1; /* subss */
    xmm1 = MEMF(0x648D14); /* movss */
    /* comiss xmm0, xmm1 - sets EFLAGS */
    if ((xmm0 <= xmm1)) { sub_003154D6(); return; } /* jbe: below or equal (unsigned <=) */

loc_003154D1: ;
    xmm0 = xmm1; /* movaps */
    g_seh_ebp = ebp; sub_003154DE(); return; /* tail jmp 0x003154DE */

}

/**
 * sub_00315560
 * Original: 0x00315560 - 0x003155C6 (102 bytes, 21 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00315560(void)
{
    uint32_t ebp;
    int _flags = 0; /* fallback flag var */
    float xmm0, xmm1, xmm2;
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_00315560: ;
    edx = MEM32(esp + 0xC);
    eax = ZX16(MEM16(edx + 0x170));
    ecx = ZX16(MEM16(0x84A64C));
    xmm1 = MEMF(edx + 0x110); /* movss */
    xmm1 = xmm1 * MEMF(0x648EF4); /* mulss */
    eax = eax - ecx;
    if (CMP_LE(eax, 0x8000)) goto loc_00315590; /* jle: less or equal (signed <=) */

loc_0031558B: ;
    eax = eax - 0xFFFF;

loc_00315590: ;
    if (CMP_GE(eax, 0xFFFF8000u)) goto loc_0031559C; /* jge: greater or equal (signed >=) */

loc_00315597: ;
    eax = eax + 0xFFFF;

loc_0031559C: ;
    xmm2 = MEMF(0x648D34); /* movss */
    xmm0 = (float)(int32_t)eax; /* cvtsi2ss */
    xmm0 = xmm0 * MEMF(0x648D2C); /* mulss */
    xmm0 = xmm0 + xmm1; /* addss */
    xmm1 = MEMF(0x648D14); /* movss */
    /* comiss xmm0, xmm1 - sets EFLAGS */
    if ((xmm0 <= xmm1)) { sub_003155C6(); return; } /* jbe: below or equal (unsigned <=) */

loc_003155C1: ;
    xmm0 = xmm1; /* movaps */
    g_seh_ebp = ebp; sub_003155CE(); return; /* tail jmp 0x003155CE */

}

/**
 * sub_00315650
 * Original: 0x00315650 - 0x00315776 (294 bytes, 74 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00315650(void)
{
    uint32_t ebp;
    int _flags = 0; /* fallback flag var */
    float xmm0, xmm1;

loc_00315650: ;
    PUSH32(esp, ebp);
    ebp = esp;
    esp = esp & 0xFFFFFFF0u;
    esp = esp - 0xC8;
    ecx = ZX16(MEM16(0x84A650));
    PUSH32(esp, esi);
    PUSH32(esp, edi);
    edi = MEM32(ebp + 0x10);
    eax = ZX16(MEM16(edi + 0x170));
    xmm0 = MEMF(edi + 0x110); /* movss */
    xmm0 = xmm0 * MEMF(0x648EF4); /* mulss */
    eax = eax - ecx;
    if (CMP_LE(eax, 0x8000)) goto loc_0031568D; /* jle: less or equal (signed <=) */

loc_00315688: ;
    eax = eax - 0xFFFF;

loc_0031568D: ;
    if (CMP_GE(eax, 0xFFFF8000u)) goto loc_00315699; /* jge: greater or equal (signed >=) */

loc_00315694: ;
    eax = eax + 0xFFFF;

loc_00315699: ;
    xmm1 = (float)(int32_t)eax; /* cvtsi2ss */
    xmm1 = xmm1 * MEMF(0x648D2C); /* mulss */
    xmm0 = xmm0 - xmm1; /* subss */
    xmm1 = MEMF(0x648D14); /* movss */
    /* comiss xmm0, xmm1 - sets EFLAGS */
    if ((xmm0 > xmm1)) goto loc_003156C3; /* ja: above (unsigned >) */

loc_003156B6: ;
    xmm1 = MEMF(0x648D34); /* movss */
    /* comiss xmm1, xmm0 - sets EFLAGS */
    if ((xmm1 <= xmm0)) goto loc_003156C6; /* jbe: below or equal (unsigned <=) */

loc_003156C3: ;
    xmm0 = xmm1; /* movaps */

loc_003156C6: ;
    xmm0 = xmm0 * MEMF(ebp + 0xC); /* mulss */
    esi = MEM32(ebp + 8);
    xmm0 = xmm0 * MEMF(0x648EF0); /* mulss */
    xmm0 = xmm0 * MEMF(0x648F94); /* mulss */
    xmm1 = MEMF(esi + 0x10); /* movss */
    xmm0 = xmm0 * MEMF(0x648F60); /* mulss */
    PUSH32(esp, 0);
    PUSH32(esp, 0xBF000000u);
    xmm1 = xmm1 - xmm0; /* subss */
    PUSH32(esp, 0xBF000000u);
    eax = esp + 0x1C;
    MEMF(esi + 0x10) = xmm1; /* movss */
    PUSH32(esp, 0); sub_004288F5(); /* call 0x004288F5 */

loc_00315709: ;
    xmm1 = xmm1 * MEMF(0x648E18); /* mulss */
    PUSH32(esp, ecx);
    SET_LO8(eax, 0x7A);
    ecx = esp + 0x54;
    MEMF(esp) = xmm1; /* movss */
    PUSH32(esp, 0); sub_003E2640(); /* call 0x003E2640 */

loc_00315722: ;
    esp = esp + 4;
    edx = ecx;
    PUSH32(esp, edx);
    eax = esp + 0x14;
    PUSH32(esp, eax);
    ecx = esp + 0x98;
    PUSH32(esp, ecx);
    PUSH32(esp, 0); sub_0042841D(); /* call 0x0042841D */

loc_0031573A: ;
    PUSH32(esp, 0);
    PUSH32(esp, 0x3F000000);
    PUSH32(esp, 0x3F000000);
    eax = esp + 0x1C;
    PUSH32(esp, 0); sub_004288F5(); /* call 0x004288F5 */

loc_0031574F: ;
    ecx = MEM32(esi);
    edx = eax;
    PUSH32(esp, edx);
    eax = esp + 0x94;
    PUSH32(esp, eax);
    PUSH32(esp, ecx);
    PUSH32(esp, 0); sub_0042841D(); /* call 0x0042841D */

loc_00315762: ;
    SET_LO16(edx, MEM16(edi + 0x170));
    POP32(esp, edi);
    MEM16(0x84A650) = LO16(edx);
    POP32(esp, esi);
    esp = ebp;
    POP32(esp, ebp);
    esp += 4; return; /* ret */

}

/**
 * sub_00315780
 * Original: 0x00315780 - 0x003158A6 (294 bytes, 74 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00315780(void)
{
    uint32_t ebp;
    int _flags = 0; /* fallback flag var */
    float xmm0, xmm1;

loc_00315780: ;
    PUSH32(esp, ebp);
    ebp = esp;
    esp = esp & 0xFFFFFFF0u;
    esp = esp - 0xC8;
    ecx = ZX16(MEM16(0x84A654));
    PUSH32(esp, esi);
    PUSH32(esp, edi);
    edi = MEM32(ebp + 0x10);
    eax = ZX16(MEM16(edi + 0x170));
    xmm1 = MEMF(edi + 0x110); /* movss */
    xmm1 = xmm1 * MEMF(0x648EF4); /* mulss */
    eax = eax - ecx;
    if (CMP_LE(eax, 0x8000)) goto loc_003157BD; /* jle: less or equal (signed <=) */

loc_003157B8: ;
    eax = eax - 0xFFFF;

loc_003157BD: ;
    if (CMP_GE(eax, 0xFFFF8000u)) goto loc_003157C9; /* jge: greater or equal (signed >=) */

loc_003157C4: ;
    eax = eax + 0xFFFF;

loc_003157C9: ;
    xmm0 = (float)(int32_t)eax; /* cvtsi2ss */
    xmm0 = xmm0 * MEMF(0x648D2C); /* mulss */
    xmm0 = xmm0 + xmm1; /* addss */
    xmm1 = MEMF(0x648D14); /* movss */
    /* comiss xmm0, xmm1 - sets EFLAGS */
    if ((xmm0 > xmm1)) goto loc_003157F3; /* ja: above (unsigned >) */

loc_003157E6: ;
    xmm1 = MEMF(0x648D34); /* movss */
    /* comiss xmm1, xmm0 - sets EFLAGS */
    if ((xmm1 <= xmm0)) goto loc_003157F6; /* jbe: below or equal (unsigned <=) */

loc_003157F3: ;
    xmm0 = xmm1; /* movaps */

loc_003157F6: ;
    xmm0 = xmm0 * MEMF(ebp + 0xC); /* mulss */
    esi = MEM32(ebp + 8);
    xmm0 = xmm0 * MEMF(0x648EF0); /* mulss */
    xmm0 = xmm0 * MEMF(0x648F94); /* mulss */
    xmm1 = MEMF(esi + 0x10); /* movss */
    xmm0 = xmm0 * MEMF(0x648F60); /* mulss */
    PUSH32(esp, 0);
    PUSH32(esp, 0xBF000000u);
    xmm1 = xmm1 - xmm0; /* subss */
    PUSH32(esp, 0xBF000000u);
    eax = esp + 0x1C;
    MEMF(esi + 0x10) = xmm1; /* movss */
    PUSH32(esp, 0); sub_004288F5(); /* call 0x004288F5 */

loc_00315839: ;
    xmm1 = xmm1 * MEMF(0x648E18); /* mulss */
    PUSH32(esp, ecx);
    SET_LO8(eax, 0x7A);
    ecx = esp + 0x54;
    MEMF(esp) = xmm1; /* movss */
    PUSH32(esp, 0); sub_003E2640(); /* call 0x003E2640 */

loc_00315852: ;
    esp = esp + 4;
    edx = ecx;
    PUSH32(esp, edx);
    eax = esp + 0x14;
    PUSH32(esp, eax);
    ecx = esp + 0x98;
    PUSH32(esp, ecx);
    PUSH32(esp, 0); sub_0042841D(); /* call 0x0042841D */

loc_0031586A: ;
    PUSH32(esp, 0);
    PUSH32(esp, 0x3F000000);
    PUSH32(esp, 0x3F000000);
    eax = esp + 0x1C;
    PUSH32(esp, 0); sub_004288F5(); /* call 0x004288F5 */

loc_0031587F: ;
    ecx = MEM32(esi);
    edx = eax;
    PUSH32(esp, edx);
    eax = esp + 0x94;
    PUSH32(esp, eax);
    PUSH32(esp, ecx);
    PUSH32(esp, 0); sub_0042841D(); /* call 0x0042841D */

loc_00315892: ;
    SET_LO16(edx, MEM16(edi + 0x170));
    POP32(esp, edi);
    MEM16(0x84A654) = LO16(edx);
    POP32(esp, esi);
    esp = ebp;
    POP32(esp, ebp);
    esp += 4; return; /* ret */

}

/**
 * sub_003158B0
 * Original: 0x003158B0 - 0x003158CD (29 bytes, 7 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_003158B0(void)
{
    int _flags = 0; /* fallback flag var */

loc_003158B0: ;
    eax = 0x7FFE75;

loc_003158B5: ;
    MEM8(eax) = 0;
    eax = eax + 0x10;
    if (CMP_L(eax, 0x7FFF95)) goto loc_003158B5; /* jl: less (signed <) */

loc_003158C2: ;
    MEM32(0x7FFE60) = 0;
    esp += 4; return; /* ret */

}

/**
 * sub_003158D0
 * Original: 0x003158D0 - 0x0031591B (75 bytes, 19 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_003158D0(void)
{
    uint32_t ebp;
    int _flags = 0; /* fallback flag var */
    float xmm0, xmm1, xmm2, xmm3;

loc_003158D0: ;
    PUSH32(esp, ebp);
    ebp = esp;
    esp = esp & 0xFFFFFFF0u;
    esp = esp - 0x1D4;
    xmm1 = 0.0f; /* xorps self = zero */
    xmm2 = MEMF(0x648E68); /* movss */
    xmm0 = MEMF(ebp + 0xC); /* movss */
    /* comiss xmm2, xmm0 - sets EFLAGS */
    xmm3 = MEMF(0x648D14); /* movss */
    PUSH32(esp, ebx);
    ebx = MEM32(ebp + 8);
    PUSH32(esp, esi);
    PUSH32(esp, edi);
    MEMF(esp + 0x14) = xmm1; /* movss */
    MEMF(esp + 0x18) = xmm3; /* movss */
    MEMF(esp + 0x1C) = xmm1; /* movss */
    if ((xmm2 <= xmm0)) { sub_0031591B(); return; } /* jbe: below or equal (unsigned <=) */

loc_00315911: ;
    esi = 0x5A0350;
    g_seh_ebp = ebp; sub_00315ADD(); return; /* tail jmp 0x00315ADD */

}

/**
 * sub_00315B50
 * Original: 0x00315B50 - 0x00315BC3 (115 bytes, 27 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00315B50(void)
{
    int _flags = 0; /* fallback flag var */
    float xmm0, xmm1;

loc_00315B50: ;
    xmm1 = MEMF(0x648EB0); /* movss */
    /* comiss xmm1, xmm0 - sets EFLAGS */
    SET_LO8(eax, MEM8(esp + 4));
    if ((xmm1 > xmm0)) goto loc_00315BB0; /* ja: above (unsigned >) */

loc_00315B61: ;
    xmm1 = MEMF(0x648D3C); /* movss */
    /* comiss xmm1, xmm0 - sets EFLAGS */
    if ((xmm1 <= xmm0)) goto loc_00315B82; /* jbe: below or equal (unsigned <=) */

loc_00315B6E: ;
    eax = MEM32(0x84A5F8);
    SET_LO8(ecx, 2);
    MEM8(eax + 0x13D) = LO8(ecx);
    MEM8(eax + 0x13E) = LO8(ecx);
    esp += 4; return; /* ret */

loc_00315B82: ;
    xmm1 = MEMF(0x648D40); /* movss */
    /* comiss xmm1, xmm0 - sets EFLAGS */
    if ((xmm1 <= xmm0)) goto loc_00315BA3; /* jbe: below or equal (unsigned <=) */

loc_00315B8F: ;
    eax = MEM32(0x84A5F8);
    SET_LO8(ecx, 3);
    MEM8(eax + 0x13D) = LO8(ecx);
    MEM8(eax + 0x13E) = LO8(ecx);
    esp += 4; return; /* ret */

loc_00315BA3: ;
    xmm1 = MEMF(0x648E74); /* movss */
    /* comiss xmm1, xmm0 - sets EFLAGS */
    if ((xmm1 > xmm0)) goto loc_00315B6E; /* ja: above (unsigned >) */

loc_00315BB0: ;
    ecx = MEM32(0x84A5F8);
    MEM8(ecx + 0x13D) = LO8(eax);
    MEM8(ecx + 0x13E) = LO8(eax);
    esp += 4; return; /* ret */

}

/**
 * sub_00315BD0
 * Original: 0x00315BD0 - 0x00315C82 (178 bytes, 54 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00315BD0(void)
{
    uint32_t ebp;
    int _flags = 0; /* fallback flag var */
    float xmm0, xmm2;
    double _fp_stack[8];
    int _fp_top = 0;
    #define fp_push(v) (_fp_stack[--_fp_top & 7] = (v))
    #define fp_pop() (_fp_top++)
    #define fp_popp() (fp_pop())
    #define fp_top() _fp_stack[_fp_top & 7]
    #define fp_st1() _fp_stack[(_fp_top + 1) & 7]
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_00315BD0: ;
    esp = esp - 8;
    eax = MEM32(0x84A5F8);
    edx = MEM32(esp + 0xC);
    PUSH32(esp, ebx);
    PUSH32(esp, ebp);
    PUSH32(esp, esi);
    esi = 0; /* xor self */
    SET_LO16(esi, MEM16(eax + 0x478));
    ebx = 0; /* xor self */
    SET_LO16(ebx, MEM16(eax + 0x47C));
    ecx = edx;
    PUSH32(esp, edi);
    edi = MEM32(esp + 0x20);
    ecx = ecx - esi;
    esi = 0; /* xor self */
    SET_LO16(esi, MEM16(eax + 0x47A));
    ecx = SX16(LO16(ecx));
    edx = edx - esi;
    esi = edi;
    esi = esi - ebx;
    ebx = 0; /* xor self */
    SET_LO16(ebx, MEM16(eax + 0x47E));
    esi = SX16(LO16(esi));
    ebp = esi;
    ebp = (uint32_t)((int32_t)ebp * (int32_t)esi);
    edi = edi - ebx;
    ebx = ecx;
    ebx = (uint32_t)((int32_t)ebx * (int32_t)ecx);
    ebx = ebx + ebp;
    MEM32(esp + 0x10) = ebx;
    edi = SX16(LO16(edi));
    fp_push((double)SMEM32(esp + 0x10)); /* fild */
    edx = SX16(LO16(edx));
    fp_top() = sqrt(fp_top()); /* fsqrt */
    ebx = edx;
    ebp = edi;
    ebx = (uint32_t)((int32_t)ebx * (int32_t)edx);
    ebp = (uint32_t)((int32_t)ebp * (int32_t)edi);
    ebx = ebx + ebp;
    MEM32(esp + 0x10) = ebx;
    ebx = (uint32_t)(int32_t)SMEM16(esp + 0x24);
    MEMF(esp + 0x14) = (float)fp_top(); fp_popp(); /* fstp */
    fp_push((double)SMEM32(esp + 0x10)); /* fild */
    xmm2 = MEMF(esp + 0x14); /* movss */
    xmm0 = (float)(int32_t)ebx; /* cvtsi2ss */
    /* comiss xmm0, xmm2 - sets EFLAGS */
    fp_top() = sqrt(fp_top()); /* fsqrt */
    MEMF(esp + 0x10) = (float)fp_top(); fp_popp(); /* fstp */
    if ((xmm0 <= xmm2)) { sub_00315C82(); return; } /* jbe: below or equal (unsigned <=) */

loc_00315C68: ;
    SET_LO16(ecx, MEM16(esp + 0x1C));
    MEM16(eax + 0x478) = LO16(ecx);
    SET_LO16(ecx, MEM16(esp + 0x20));
    MEM16(eax + 0x47C) = LO16(ecx);
    g_seh_ebp = ebp; sub_00315CCF(); return; /* tail jmp 0x00315CCF */

    #undef fp_push
    #undef fp_pop
    #undef fp_popp
    #undef fp_top
    #undef fp_st1
}

/**
 * sub_00315D50
 * Original: 0x00315D50 - 0x00315F03 (435 bytes, 89 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00315D50(void)
{
    uint32_t ebp;
    int _flags = 0; /* fallback flag var */
    float xmm0, xmm1, xmm2;

loc_00315D50: ;
    PUSH32(esp, ebp);
    ebp = esp;
    esp = esp & 0xFFFFFFF0u;
    esp = esp - 0x1D4;
    xmm0 = MEMF(ebp + 8); /* movss */
    xmm1 = 0.0f; /* xorps self = zero */
    /* comiss xmm1, xmm0 - sets EFLAGS */
    PUSH32(esp, ebx);
    PUSH32(esp, esi);
    PUSH32(esp, edi);
    MEMF(esp + 0x18) = xmm0; /* movss */
    if ((xmm1 > xmm0)) goto loc_00315D7F; /* ja: above (unsigned >) */

loc_00315D72: ;
    xmm1 = MEMF(0x648D14); /* movss */
    /* comiss xmm0, xmm1 - sets EFLAGS */
    if ((xmm0 <= xmm1)) goto loc_00315D84; /* jbe: below or equal (unsigned <=) */

loc_00315D7F: ;
    MEMF(ebp + 8) = xmm1; /* movss */

loc_00315D84: ;
    eax = MEM32(0x84A5F8);
    ecx = esp + 0x10;
    esi = esp + 0x30;
    MEM8(0x847206) = 1;
    MEM8(0x84A668) = 1;
    PUSH32(esp, 0); sub_0042851B(); /* call 0x0042851B */

loc_00315DA4: ;
    xmm0 = MEMF(0x648D14); /* movss */
    xmm2 = MEMF(esp + 0x30); /* movss */
    xmm1 = 0.0f; /* xorps self = zero */
    ebx = MEM32(0x84A5F8);
    MEMF(esp + 0x6C) = xmm0; /* movss */
    xmm0 = MEMF(0x648D10); /* movss */
    xmm2 = xmm2 * xmm0; /* mulss */
    MEMF(esp + 0x30) = xmm2; /* movss */
    xmm2 = MEMF(esp + 0x34); /* movss */
    xmm2 = xmm2 * xmm0; /* mulss */
    MEMF(esp + 0x34) = xmm2; /* movss */
    xmm2 = MEMF(esp + 0x38); /* movss */
    xmm2 = xmm2 * xmm0; /* mulss */
    MEMF(esp + 0x38) = xmm2; /* movss */
    xmm2 = MEMF(esp + 0x40); /* movss */
    xmm2 = xmm2 * xmm0; /* mulss */
    eax = MEM32(ebp + 8);
    MEMF(esp + 0x40) = xmm2; /* movss */
    xmm2 = MEMF(esp + 0x44); /* movss */
    xmm2 = xmm2 * xmm0; /* mulss */
    MEMF(esp + 0x44) = xmm2; /* movss */
    xmm2 = MEMF(esp + 0x48); /* movss */
    xmm2 = xmm2 * xmm0; /* mulss */
    MEMF(esp + 0x48) = xmm2; /* movss */
    xmm2 = MEMF(esp + 0x50); /* movss */
    xmm2 = xmm2 * xmm0; /* mulss */
    MEMF(esp + 0x50) = xmm2; /* movss */
    xmm2 = MEMF(esp + 0x54); /* movss */
    xmm2 = xmm2 * xmm0; /* mulss */
    MEMF(esp + 0x54) = xmm2; /* movss */
    xmm2 = MEMF(esp + 0x58); /* movss */
    xmm2 = xmm2 * xmm0; /* mulss */
    MEMF(esp + 0x68) = xmm1; /* movss */
    MEMF(esp + 0x64) = xmm1; /* movss */
    MEMF(esp + 0x60) = xmm1; /* movss */
    MEMF(esp + 0x58) = xmm2; /* movss */
    ecx = 0x10;
    esi = 0x5A0350;
    edi = esp + 0xB0;
    memcpy((void*)XBOX_PTR(edi), (void*)XBOX_PTR(esi), ecx * 4);
    esi += ecx * 4; edi += ecx * 4; ecx = 0; /* rep movsd */
    xmm0 = xmm1; /* movaps */
    xmm0 = xmm0 - MEMF(ebx + 0x78); /* subss */
    MEMF(esp + 0xE0) = xmm0; /* movss */
    xmm0 = xmm1; /* movaps */
    xmm0 = xmm0 - MEMF(ebx + 0x7C); /* subss */
    PUSH32(esp, eax);
    ecx = esp + 0x174;
    MEMF(esp + 0xE8) = xmm0; /* movss */
    xmm1 = xmm1 - MEMF(ebx + 0x80); /* subss */
    PUSH32(esp, ecx);
    MEMF(esp + 0xF0) = xmm1; /* movss */
    PUSH32(esp, 0); sub_003158D0(); /* call 0x003158D0 */

loc_00315EBC: ;
    esi = eax;
    eax = MEM32(0x7FA1F8);
    esp = esp + 8;
    (void)0; /* cmp eax, 0x23 - flags set for next jcc */
    ecx = 0x10;
    edi = esp + 0x70;
    memcpy((void*)XBOX_PTR(edi), (void*)XBOX_PTR(esi), ecx * 4);
    esi += ecx * 4; edi += ecx * 4; ecx = 0; /* rep movsd */
    if (CMP_NE(eax, 0x23)) { sub_00315F03(); return; } /* jne: not equal / not zero */

loc_00315ED6: ;
    xmm1 = MEMF(esp + 0xA0); /* movss */
    xmm0 = MEMF(0x6490B4); /* movss */
    xmm1 = xmm1 + xmm0; /* addss */
    MEMF(esp + 0xA0) = xmm1; /* movss */
    xmm1 = MEMF(esp + 0xA4); /* movss */
    xmm1 = xmm1 - xmm0; /* subss */
    g_seh_ebp = ebp; sub_00315F2E(); return; /* tail jmp 0x00315F2E */

}

/**
 * sub_00316C30
 * Original: 0x00316C30 - 0x00316CCD (157 bytes, 37 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00316C30(void)
{
    int _flags = 0; /* fallback flag var */

loc_00316C30: ;
    PUSH32(esp, 0); sub_00316CD0(); /* call 0x00316CD0 */

loc_00316C35: ;
    PUSH32(esp, 0); sub_003174C0(); /* call 0x003174C0 */

loc_00316C3A: ;
    PUSH32(esp, 0); sub_00318990(); /* call 0x00318990 */

loc_00316C3F: ;
    SET_LO8(eax, MEM8(0x84A668));
    if (TEST_Z(LO8(eax), LO8(eax))) goto loc_00316CCC; /* je: equal / zero */

loc_00316C4C: ;
    eax = MEM32(0x84A5F8);
    if (CMP_NE(MEM16(eax + 0x1B8), 0)) goto loc_00316CCC; /* jne: not equal / not zero */

loc_00316C5B: ;
    eax = MEM32(eax + 0x4B0);
    ecx = MEM32(eax + 0x24);
    edx = MEM32(ecx + 8);
    PUSH32(esp, ebx);
    PUSH32(esp, 0x5F3B98);
    PUSH32(esp, edx);
    ebx = 0x5F3B70;
    PUSH32(esp, 0); sub_000FEF80(); /* call 0x000FEF80 */

loc_00316C78: ;
    eax = MEM32(0x84A5F8);
    ecx = MEM32(eax + 0x4B0);
    edx = MEM32(ecx + 0x24);
    eax = MEM32(edx + 8);
    PUSH32(esp, 0x5F3B90);
    PUSH32(esp, eax);
    ebx = 0x5F3B8C;
    PUSH32(esp, 0); sub_000FEF80(); /* call 0x000FEF80 */

loc_00316C99: ;
    eax = MEM32(0x84A5F8);
    esp = esp + 0x10;
    ecx = 0; /* xor self */
    SET_LO8(edx, 4);
    MEM8(0x84A668) = LO8(ecx);
    MEM8(0x847206) = LO8(ecx);
    MEM8(eax + 0x13D) = LO8(edx);
    MEM8(eax + 0x13E) = LO8(edx);
    MEM16(0x84A66C) = LO16(ecx);
    MEM16(0x84A670) = LO16(ecx);
    POP32(esp, ebx);

loc_00316CCC: ;
    esp += 4; return; /* ret */

}

/**
 * sub_00316CD0
 * Original: 0x00316CD0 - 0x00317278 (1448 bytes, 331 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00316CD0(void)
{
    int _flags = 0; /* fallback flag var */
    float xmm0, xmm1, xmm2, xmm3, xmm4, xmm5, xmm6, xmm7;

loc_00316CD0: ;
    PUSH32(esp, ebx);
    PUSH32(esp, esi);
    esi = MEM32(0x84A660);
    (void)0; /* test esi, esi - flags set for next jcc */
    PUSH32(esp, edi);
    ecx = 0x84A660;
    if (TEST_Z(esi, esi)) goto loc_00316DF6; /* je: equal / zero */

loc_00316CE6: ;
    edi = MEM32(0x7FA20C);
    xmm1 = MEMF(0x648D1C); /* movss */
    goto loc_00316D00;

    /* nop */
    /* nop */

loc_00316D00: ;
    xmm0 = MEMF(esi + 0x94); /* movss */
    eax = ZX8(MEM8(esi + 0xB4));
    xmm2 = MEMF(esi + 0x90); /* movss */
    xmm2 = xmm2 + MEMF(esi + 0x84); /* addss */
    xmm0 = xmm0 - xmm1; /* subss */
    MEMF(esi + 0x94) = xmm0; /* movss */
    xmm0 = xmm0 + MEMF(esi + 0x88); /* addss */
    MEMF(esi + 0x88) = xmm0; /* movss */
    xmm0 = MEMF(esi + 0x98); /* movss */
    xmm0 = xmm0 + MEMF(esi + 0x8C); /* addss */
    MEMF(esi + 0x8C) = xmm0; /* movss */
    xmm0 = MEMF(esi + 0xA8); /* movss */
    xmm0 = xmm0 + MEMF(esi + 0x9C); /* addss */
    MEMF(esi + 0x9C) = xmm0; /* movss */
    xmm0 = MEMF(esi + 0xAC); /* movss */
    xmm0 = xmm0 + MEMF(esi + 0xA0); /* addss */
    MEMF(esi + 0xA0) = xmm0; /* movss */
    xmm0 = MEMF(esi + 0xB0); /* movss */
    xmm0 = xmm0 + MEMF(esi + 0xA4); /* addss */
    eax = eax - edi;
    (void)0; /* test eax, eax - flags set for next jcc */
    MEMF(esi + 0x84) = xmm2; /* movss */
    MEMF(esi + 0xA4) = xmm0; /* movss */
    if (CMP_LE(eax & eax, 0)) goto loc_00316DC1; /* jle: less or equal (signed <=) */

loc_00316DA9: ;
    ecx = esi + 0x80;
    MEM8(esi + 0xB4) = LO8(eax);
    esi = MEM32(ecx);
    if (TEST_NZ(esi, esi)) goto loc_00316D00; /* jne: not equal / not zero */

loc_00316DBF: ;
    goto loc_00316DFC;

loc_00316DC1: ;
    eax = MEM32(esi + 0x80);
    PUSH32(esp, esi);
    MEM32(ecx) = eax;
    PUSH32(esp, 0); sub_0042C911(); /* call 0x0042C911 */

loc_00316DCF: ;
    if (TEST_NZ(eax, eax)) goto loc_00316DF6; /* jne: not equal / not zero */

loc_00316DD3: ;
    edi = MEM32(0x7FA490);
    edx = MEM32(0x7FA4B4);
    edi++;
    edx--;
    PUSH32(esp, esi);
    MEM32(0x7FA490) = edi;
    MEM32(0x7FA4B4) = edx;
    PUSH32(esp, 0); sub_003E7080(); /* call 0x003E7080 */

loc_00316DF3: ;
    esp = esp + 4;

loc_00316DF6: ;
    edi = MEM32(0x7FA20C);

loc_00316DFC: ;
    esi = MEM32(0x84A5F8);
    SET_LO16(eax, MEM16(esi + 0x3AE));
    SET_LO16(ecx, MEM16(0x7FFF8C));
    if (CMP_BE(LO16(ecx), LO16(eax))) goto loc_00316FD3; /* jbe: below or equal (unsigned <=) */

loc_00316E19: ;
    xmm0 = MEMF(0x7FFFB8); /* movss */
    MEM32(0x7FFF9C) = 0xF0;
    goto loc_00316E30;

    /* nop */

loc_00316E30: ;
    xmm1 = MEMF(0x64A2CC); /* movss */
    SET_LO16(ecx, LO16(ecx) - 1);
    /* ucomiss xmm0, xmm1 - sets EFLAGS */
    /* lahf - load AH from flags (used in FPU compare idiom) */
    (void)0; /* test HI8(eax), 0x44 - flags set for next jcc */
    MEM16(0x7FFF8C) = LO16(ecx);
    if (1 /* jp after test - parity */) goto loc_00316E72; /* jp: parity */

loc_00316E4A: ;
    PUSH32(esp, 0); sub_00317280(); /* call 0x00317280 */

loc_00316E4F: ;
    edi = MEM32(0x7FA20C);
    SET_LO16(ecx, MEM16(0x7FFF8C));
    esi = MEM32(0x84A5F8);
    xmm0 = MEMF(0x7FFFB8); /* movss */
    xmm1 = MEMF(0x64A2CC); /* movss */

loc_00316E72: ;
    if (CMP_NE(LO16(ecx), MEM16(esi + 0x3AE))) goto loc_00316E30; /* jne: not equal / not zero */

loc_00316E7B: ;
    if (CMP_BE(MEM32(0x84A11C), 0xA)) goto loc_00316EC9; /* jbe: below or equal (unsigned <=) */

loc_00316E84: ;
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
    ecx = 0x1A6;
    PUSH32(esp, 0); sub_00022D90(); /* call 0x00022D90 */

loc_00316EAC: ;
    edi = MEM32(0x7FA20C);
    SET_LO16(ecx, MEM16(0x7FFF8C));

loc_00316EB9: ;
    xmm0 = MEMF(0x7FFFB8); /* movss */
    xmm1 = MEMF(0x64A2CC); /* movss */

loc_00316EC9: ;
    ebx = MEM32(0x7FFF9C);
    if (TEST_Z(ebx, ebx)) goto loc_003170EA; /* je: equal / zero */

loc_00316ED7: ;
    /* ucomiss xmm0, xmm1 - sets EFLAGS */
    /* lahf - load AH from flags (used in FPU compare idiom) */
    if (1 /* jp after test - parity */) goto loc_00317030; /* jp: parity */

loc_00316EE4: ;
    ebx = ebx - edi;
    (void)0; /* test ebx, ebx - flags set for next jcc */
    MEM32(0x7FFF9C) = ebx;
    if (CMP_G(ebx & ebx, 0)) goto loc_00316EFA; /* jg: greater (signed >) */

loc_00316EF0: ;
    MEM32(0x7FFF9C) = 0;

loc_00316EFA: ;
    xmm4 = MEMF(0x648D80); /* movss */
    xmm5 = MEMF(0x648E74); /* movss */
    xmm2 = MEMF(0x648F60); /* movss */
    xmm6 = MEMF(0x649344); /* movss */
    eax = 0; /* xor self */
    /* nop */

loc_00316F20: ;
    if (CMP_LE(edi & edi, 0)) goto loc_00316FC2; /* jle: less or equal (signed <=) */

loc_00316F28: ;
    xmm1 = MEMF(eax + 0x7FFFA0); /* movss */
    xmm3 = (float)(int32_t)edi; /* cvtsi2ss */
    ecx = edi;
    goto loc_00316F40;

    /* nop */
    /* nop */

loc_00316F40: ;
    xmm0 = MEMF(eax + 0x7FFFAC); /* movss */
    xmm0 = xmm0 * xmm4; /* mulss */
    xmm1 = xmm1 - xmm0; /* subss */
    xmm1 = xmm1 * xmm5; /* mulss */
    xmm0 = xmm3; /* movaps */
    xmm0 = xmm0 * xmm1; /* mulss */
    xmm0 = xmm0 + MEMF(eax + 0x7FFFAC); /* addss */
    /* comiss xmm0, xmm2 - sets EFLAGS */
    MEMF(eax + 0x7FFFAC) = xmm0; /* movss */
    if ((xmm0 <= xmm2)) goto loc_00316F8A; /* jbe: below or equal (unsigned <=) */

loc_00316F70: ;
    xmm7 = xmm0; /* movaps */

loc_00316F73: ;
    xmm0 = xmm7; /* movaps */
    xmm0 = xmm0 - xmm2; /* subss */
    /* comiss xmm0, xmm2 - sets EFLAGS */
    xmm7 = xmm0; /* movaps */
    if ((xmm0 > xmm2)) goto loc_00316F73; /* ja: above (unsigned >) */

loc_00316F82: ;
    MEMF(eax + 0x7FFFAC) = xmm7; /* movss */

loc_00316F8A: ;
    /* comiss xmm6, MEMF(eax + 0x7FFFAC) - sets EFLAGS */
    if ((xmm6 <= MEMF(eax + 0x7FFFAC))) goto loc_00316FB7; /* jbe: below or equal (unsigned <=) */

loc_00316F93: ;
    xmm7 = MEMF(eax + 0x7FFFAC); /* movss */
    goto loc_00316FA0;

    /* nop */

loc_00316FA0: ;
    xmm0 = xmm7; /* movaps */
    xmm0 = xmm0 + xmm2; /* addss */
    xmm7 = xmm0; /* movaps */
    /* comiss xmm6, xmm7 - sets EFLAGS */
    if ((xmm6 > xmm7)) goto loc_00316FA0; /* ja: above (unsigned >) */

loc_00316FAF: ;
    MEMF(eax + 0x7FFFAC) = xmm7; /* movss */

loc_00316FB7: ;
    ecx--;
    if ((ecx != 0)) goto loc_00316F40; /* jne: not equal / not zero */

loc_00316FBA: ;
    MEMF(eax + 0x7FFFA0) = xmm1; /* movss */

loc_00316FC2: ;
    eax = eax + 8;
    if (CMP_L(eax, 0xC)) goto loc_00316F20; /* jl: less (signed <) */

loc_00316FCE: ;
    goto loc_00317138;

loc_00316FD3: ;
    if (CMP_AE(eax, 0xC)) goto loc_00316EB9; /* jae: above or equal (unsigned >=) */

loc_00316FD9: ;
    xmm0 = MEMF(0x7FFFB8); /* movss */
    ebx = 0xF0;
    MEM32(0x7FFF9C) = ebx;
    /* nop */

loc_00316FF0: ;
    SET_LO16(ecx, LO16(ecx) + 1);
    /* ucomiss xmm0, MEMF(0x64A2CC) - sets EFLAGS */
    /* lahf - load AH from flags (used in FPU compare idiom) */
    (void)0; /* test HI8(eax), 0x44 - flags set for next jcc */
    MEM16(0x7FFF8C) = LO16(ecx);
    if (1 /* jp after test - parity */) goto loc_0031701A; /* jp: parity */

loc_00317006: ;
    PUSH32(esp, 0); sub_00317450(); /* call 0x00317450 */

loc_0031700B: ;
    SET_LO16(ecx, MEM16(0x7FFF8C));
    xmm0 = MEMF(0x7FFFB8); /* movss */

loc_0031701A: ;
    if (CMP_NE(LO16(ecx), MEM16(esi + 0x3AE))) goto loc_00316FF0; /* jne: not equal / not zero */

loc_00317023: ;
    xmm1 = MEMF(0x64A2CC); /* movss */
    goto loc_00316ED7;

loc_00317030: ;
    SET_LO16(eax, MEM16(0x7FFF90));
    (void)0; /* cmp LO16(eax), LO16(ecx) - flags set for next jcc */
    xmm2 = (float)(int32_t)edi; /* cvtsi2ss */
    xmm2 = xmm2 * MEMF(0x648F08); /* mulss */
    xmm2 = xmm2 + xmm0; /* addss */
    MEMF(0x7FFFB8) = xmm2; /* movss */
    if (CMP_BE(LO16(eax), LO16(ecx))) goto loc_003170BD; /* jbe: below or equal (unsigned <=) */

loc_00317053: ;
    /* comiss xmm2, xmm1 - sets EFLAGS */
    if ((xmm2 < xmm1)) goto loc_00317138; /* jb: below (unsigned <) */

loc_0031705C: ;
    eax = ZX16(LO16(eax));
    ecx = ZX16(LO16(ecx));
    eax = eax - ecx;
    (void)0; /* test eax, eax - flags set for next jcc */
    MEMF(0x7FFFB8) = xmm1; /* movss */
    if (CMP_LE(eax & eax, 0)) goto loc_00317080; /* jle: less or equal (signed <=) */

loc_00317070: ;
    esi = eax;

loc_00317072: ;
    PUSH32(esp, 0); sub_00317280(); /* call 0x00317280 */

loc_00317077: ;
    esi--;
    if ((esi != 0)) goto loc_00317072; /* jne: not equal / not zero */

loc_0031707A: ;
    edi = MEM32(0x7FA20C);

loc_00317080: ;
    if (CMP_BE(MEM32(0x84A11C), 0xA)) goto loc_00317138; /* jbe: below or equal (unsigned <=) */

loc_0031708D: ;
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
    ecx = 0x1A6;
    PUSH32(esp, 0); sub_00022D90(); /* call 0x00022D90 */

loc_003170B5: ;
    edi = MEM32(0x7FA20C);
    goto loc_00317138;

loc_003170BD: ;
    /* comiss xmm2, xmm1 - sets EFLAGS */
    if ((xmm2 < xmm1)) goto loc_00317138; /* jb: below (unsigned <) */

loc_003170C2: ;
    (void)0; /* cmp LO16(ecx), LO16(eax) - flags set for next jcc */
    MEMF(0x7FFFB8) = xmm1; /* movss */
    if (CMP_B(LO16(ecx), LO16(eax))) goto loc_00317138; /* jb: below (unsigned <) */

loc_003170CF: ;
    edx = ZX16(LO16(eax));
    eax = ZX16(LO16(ecx));
    eax = eax - edx;
    if (CMP_LE(eax & eax, 0)) goto loc_00317138; /* jle: less or equal (signed <=) */

loc_003170DB: ;
    esi = eax;
    /* nop */

loc_003170E0: ;
    PUSH32(esp, 0); sub_00317450(); /* call 0x00317450 */

loc_003170E5: ;
    esi--;
    if ((esi != 0)) goto loc_003170E0; /* jne: not equal / not zero */

loc_003170E8: ;
    goto loc_00317138;

loc_003170EA: ;
    xmm3 = MEMF(0x648FA4); /* movss */
    /* ucomiss xmm0, xmm3 - sets EFLAGS */
    /* lahf - load AH from flags (used in FPU compare idiom) */
    if (1 /* jnp after test - parity */) goto loc_00317138; /* jnp: not parity */

loc_003170FB: ;
    xmm2 = MEMF(0x648E54); /* movss */
    xmm1 = xmm1 - xmm0; /* subss */
    xmm1 = xmm1 * MEMF(0x648D80); /* mulss */
    /* comiss xmm2, xmm1 - sets EFLAGS */
    if ((xmm2 <= xmm1)) goto loc_00317117; /* jbe: below or equal (unsigned <=) */

loc_00317114: ;
    xmm1 = xmm2; /* movaps */

loc_00317117: ;
    xmm2 = (float)(int32_t)edi; /* cvtsi2ss */
    xmm2 = xmm2 * xmm1; /* mulss */
    xmm0 = xmm0 - xmm2; /* subss */
    /* comiss xmm3, xmm0 - sets EFLAGS */
    MEMF(0x7FFFB8) = xmm0; /* movss */
    if ((xmm3 <= xmm0)) goto loc_00317138; /* jbe: below or equal (unsigned <=) */

loc_00317130: ;
    MEMF(0x7FFFB8) = xmm3; /* movss */

loc_00317138: ;
    xmm3 = MEMF(0x7FFFC4); /* movss */
    xmm0 = MEMF(0x648D14); /* movss */
    xmm2 = MEMF(0x6496F0); /* movss */
    /* ucomiss xmm3, xmm0 - sets EFLAGS */
    /* lahf - load AH from flags (used in FPU compare idiom) */
    if (1 /* jnp after test - parity */) goto loc_0031717A; /* jnp: not parity */

loc_00317159: ;
    xmm1 = (float)(int32_t)edi; /* cvtsi2ss */
    xmm1 = xmm1 * xmm2; /* mulss */
    xmm1 = xmm1 + xmm3; /* addss */
    /* comiss xmm1, xmm0 - sets EFLAGS */
    MEMF(0x7FFFC4) = xmm1; /* movss */
    if ((xmm1 <= xmm0)) goto loc_0031717A; /* jbe: below or equal (unsigned <=) */

loc_00317172: ;
    MEMF(0x7FFFC4) = xmm0; /* movss */

loc_0031717A: ;
    xmm3 = MEMF(0x7FFFC8); /* movss */
    /* ucomiss xmm3, xmm0 - sets EFLAGS */
    /* lahf - load AH from flags (used in FPU compare idiom) */
    if (1 /* jnp after test - parity */) goto loc_003171AC; /* jnp: not parity */

loc_0031718B: ;
    xmm1 = (float)(int32_t)edi; /* cvtsi2ss */
    xmm1 = xmm1 * xmm2; /* mulss */
    xmm1 = xmm1 + xmm3; /* addss */
    /* comiss xmm1, xmm0 - sets EFLAGS */
    MEMF(0x7FFFC8) = xmm1; /* movss */
    if ((xmm1 <= xmm0)) goto loc_003171AC; /* jbe: below or equal (unsigned <=) */

loc_003171A4: ;
    MEMF(0x7FFFC8) = xmm0; /* movss */

loc_003171AC: ;
    xmm3 = MEMF(0x7FFFCC); /* movss */
    /* ucomiss xmm3, xmm0 - sets EFLAGS */
    /* lahf - load AH from flags (used in FPU compare idiom) */
    if (1 /* jnp after test - parity */) goto loc_003171DE; /* jnp: not parity */

loc_003171BD: ;
    xmm1 = (float)(int32_t)edi; /* cvtsi2ss */
    xmm1 = xmm1 * xmm2; /* mulss */
    xmm1 = xmm1 + xmm3; /* addss */
    /* comiss xmm1, xmm0 - sets EFLAGS */
    MEMF(0x7FFFCC) = xmm1; /* movss */
    if ((xmm1 <= xmm0)) goto loc_003171DE; /* jbe: below or equal (unsigned <=) */

loc_003171D6: ;
    MEMF(0x7FFFCC) = xmm0; /* movss */

loc_003171DE: ;
    xmm3 = MEMF(0x7FFFD0); /* movss */
    /* ucomiss xmm3, xmm0 - sets EFLAGS */
    /* lahf - load AH from flags (used in FPU compare idiom) */
    if (1 /* jnp after test - parity */) goto loc_00317210; /* jnp: not parity */

loc_003171EF: ;
    xmm1 = (float)(int32_t)edi; /* cvtsi2ss */
    xmm1 = xmm1 * xmm2; /* mulss */
    xmm1 = xmm1 + xmm3; /* addss */
    /* comiss xmm1, xmm0 - sets EFLAGS */
    MEMF(0x7FFFD0) = xmm1; /* movss */
    if ((xmm1 <= xmm0)) goto loc_00317210; /* jbe: below or equal (unsigned <=) */

loc_00317208: ;
    MEMF(0x7FFFD0) = xmm0; /* movss */

loc_00317210: ;
    xmm3 = MEMF(0x7FFFD4); /* movss */
    /* ucomiss xmm3, xmm0 - sets EFLAGS */
    /* lahf - load AH from flags (used in FPU compare idiom) */
    if (1 /* jnp after test - parity */) goto loc_00317242; /* jnp: not parity */

loc_00317221: ;
    xmm1 = (float)(int32_t)edi; /* cvtsi2ss */
    xmm1 = xmm1 * xmm2; /* mulss */
    xmm1 = xmm1 + xmm3; /* addss */
    /* comiss xmm1, xmm0 - sets EFLAGS */
    MEMF(0x7FFFD4) = xmm1; /* movss */
    if ((xmm1 <= xmm0)) goto loc_00317242; /* jbe: below or equal (unsigned <=) */

loc_0031723A: ;
    MEMF(0x7FFFD4) = xmm0; /* movss */

loc_00317242: ;
    xmm3 = MEMF(0x7FFFD8); /* movss */
    /* ucomiss xmm3, xmm0 - sets EFLAGS */
    /* lahf - load AH from flags (used in FPU compare idiom) */
    if (1 /* jnp after test - parity */) goto loc_00317274; /* jnp: not parity */

loc_00317253: ;
    xmm1 = (float)(int32_t)edi; /* cvtsi2ss */
    xmm1 = xmm1 * xmm2; /* mulss */
    xmm1 = xmm1 + xmm3; /* addss */
    /* comiss xmm1, xmm0 - sets EFLAGS */
    MEMF(0x7FFFD8) = xmm1; /* movss */
    if ((xmm1 <= xmm0)) goto loc_00317274; /* jbe: below or equal (unsigned <=) */

loc_0031726C: ;
    MEMF(0x7FFFD8) = xmm0; /* movss */

loc_00317274: ;
    POP32(esp, edi);
    POP32(esp, esi);
    POP32(esp, ebx);
    esp += 4; return; /* ret */

}

/**
 * sub_00317280
 * Original: 0x00317280 - 0x0031744C (460 bytes, 119 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00317280(void)
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

loc_00317280: ;
    PUSH32(esp, ebp);
    ebp = esp;
    esp = esp & 0xFFFFFFF0u;
    esp = esp - 0x44;
    SET_LO8(eax, MEM8(0x7FFFDC));
    MEM16(0x7FFF90) = MEM16(0x7FFF90) - 1;
    (void)0; /* test LO8(eax), LO8(eax) - flags set for next jcc */
    PUSH32(esp, ebx);
    PUSH32(esp, esi);
    PUSH32(esp, edi);
    if (TEST_Z(LO8(eax), LO8(eax))) goto loc_00317445; /* je: equal / zero */

loc_003172A0: ;
    PUSH32(esp, 0); sub_003E2480(); /* call 0x003E2480 */

loc_003172A5: ;
    edx = ((int32_t)eax < 0) ? 0xFFFFFFFF : 0; /* cdq */
    ecx = 5;
    { int64_t _dividend = ((int64_t)(int32_t)edx << 32) | eax;
      eax = (uint32_t)((int32_t)(_dividend / (int32_t)ecx));
      edx = (uint32_t)((int32_t)(_dividend % (int32_t)ecx)); }
    eax = MEM32(0x84A19C);
    (void)0; /* test eax, eax - flags set for next jcc */
    MEM32(esp + 0xC) = edx;
    fp_push((double)SMEM32(esp + 0xC)); /* fild */
    MEMF(0x7FFFA0) = (float)fp_top(); fp_pop(); /* fst */
    fp_st1() *= fp_top(); fp_pop(); /* fmul */
    /* FPU: fsubr dword ptr [0x648f78] */
    fp_top() = sqrt(fp_top()); /* fsqrt */
    MEMF(0x7FFFA8) = (float)fp_top(); fp_popp(); /* fstp */
    if (TEST_NZ(eax, eax)) goto loc_003172DD; /* jne: not equal / not zero */

loc_003172D8: ;
    PUSH32(esp, 0); sub_002AED70(); /* call 0x002AED70 */

loc_003172DD: ;
    edx = MEM32(0x7FA494);
    ecx = MEM32(0x7FA4B4);
    esi = MEM32(0x84A190);
    edx++;
    ecx++;
    (void)0; /* test esi, esi - flags set for next jcc */
    MEM32(0x7FA494) = edx;
    MEM32(0x7FA4B4) = ecx;
    edi = esi;
    if (TEST_Z(esi, esi)) goto loc_0031732D; /* je: equal / zero */

loc_00317303: ;
    if (CMP_B(MEM32(esi + 0x80), 0xC0)) goto loc_0031732D; /* jb: below (unsigned <) */

loc_0031730F: ;
    ecx = 0x10;
    PUSH32(esp, 0); sub_003E62A0(); /* call 0x003E62A0 */

loc_00317319: ;
    PUSH32(esp, 0xC0);
    PUSH32(esp, edi);
    PUSH32(esp, 0); sub_003E6BD0(); /* call 0x003E6BD0 */

loc_00317324: ;
    ebx = eax;
    esp = esp + 8;
    if (TEST_NZ(ebx, ebx)) goto loc_0031734F; /* jne: not equal / not zero */

loc_0031732D: ;
    esi = MEM32(0x84A184);
    ecx = 0x10;
    edi = esi;
    PUSH32(esp, 0); sub_003E62A0(); /* call 0x003E62A0 */

loc_0031733F: ;
    PUSH32(esp, 0xC0);
    PUSH32(esp, edi);
    PUSH32(esp, 0); sub_003E6BD0(); /* call 0x003E6BD0 */

loc_0031734A: ;
    esp = esp + 8;
    ebx = eax;

loc_0031734F: ;
    eax = (uint32_t)(int32_t)SMEM8(0x7FA230);
    ecx = ZX16(MEM16(0x7FFF90));
    edx = MEM32(0x84A660);
    eax = eax ^ 1;
    esi = eax + ecx * 2;
    MEM32(ebx + 0x80) = edx;
    edx = esp + 0xC;
    PUSH32(esp, edx);
    esi = esi << 6;
    eax = edx;
    PUSH32(esp, eax);
    esi = esi + 0x7FFFE0;
    ecx = 0x10;
    edi = esp + 0x18;
    memcpy((void*)XBOX_PTR(edi), (void*)XBOX_PTR(esi), ecx * 4);
    esi += ecx * 4; edi += ecx * 4; ecx = 0; /* rep movsd */
    ecx = edx;
    PUSH32(esp, ecx);
    edx = ebx + 0xA4;
    PUSH32(esp, edx);
    eax = ebx + 0xA0;
    PUSH32(esp, eax);
    ecx = ebx + 0x9C;
    PUSH32(esp, ecx);
    eax = ebx + 0x88;
    PUSH32(esp, eax);
    ecx = esp + 0x2C;
    edx = ebx + 0x8C;
    eax = ebx + 0x84;
    PUSH32(esp, ecx);
    MEM32(0x84A660) = ebx;
    PUSH32(esp, 0); sub_00088740(); /* call 0x00088740 */

loc_003173C6: ;
    esp = esp + 0x20;
    PUSH32(esp, 0); sub_003E2480(); /* call 0x003E2480 */

loc_003173CE: ;
    eax = eax & 0xF;
    eax = eax + 0xA;
    xmm0 = (float)(int32_t)eax; /* cvtsi2ss */
    MEMF(ebx + 0x90) = xmm0; /* movss */
    PUSH32(esp, 0); sub_003E2480(); /* call 0x003E2480 */

loc_003173E5: ;
    eax = eax & 0x1F;
    eax = eax + 0x14;
    xmm0 = (float)(int32_t)eax; /* cvtsi2ss */
    MEMF(ebx + 0x94) = xmm0; /* movss */
    xmm0 = 0.0f; /* xorps self = zero */
    MEMF(ebx + 0x98) = xmm0; /* movss */
    PUSH32(esp, 0); sub_003E2480(); /* call 0x003E2480 */

loc_00317407: ;
    eax = eax & 0xF;
    xmm0 = (float)(int32_t)eax; /* cvtsi2ss */
    MEMF(ebx + 0xA8) = xmm0; /* movss */
    PUSH32(esp, 0); sub_003E2480(); /* call 0x003E2480 */

loc_0031741B: ;
    eax = eax & 0xF;
    xmm0 = (float)(int32_t)eax; /* cvtsi2ss */
    MEMF(ebx + 0xAC) = xmm0; /* movss */
    PUSH32(esp, 0); sub_003E2480(); /* call 0x003E2480 */

loc_0031742F: ;
    eax = eax & 0xF;
    xmm0 = (float)(int32_t)eax; /* cvtsi2ss */
    MEMF(ebx + 0xB0) = xmm0; /* movss */
    MEM8(ebx + 0xB4) = 0x78;

loc_00317445: ;
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
 * sub_00317450
 * Original: 0x00317450 - 0x003174A1 (81 bytes, 17 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00317450(void)
{
    int _flags = 0; /* fallback flag var */

loc_00317450: ;
    SET_LO16(eax, MEM16(0x7FFF90));
    ecx = 5;
    if (CMP_BE(LO16(eax), LO16(ecx))) { sub_003174A1(); return; } /* jbe: below or equal (unsigned <=) */

loc_00317460: ;
    if (CMP_NE(MEM32(0x7FA1F8), 0x23)) goto loc_00317485; /* jne: not equal / not zero */

loc_00317469: ;
    ecx = MEM32(0x84A5F8);
    eax = 0; /* xor self */
    MEM16(ecx + 0x3AE) = LO16(eax);
    MEM16(0x7FFF8C) = LO16(eax);
    MEM16(0x7FFF90) = LO16(eax);
    esp += 4; return; /* ret */

loc_00317485: ;
    edx = MEM32(0x84A5F8);
    MEM16(edx + 0x3AE) = LO16(ecx);
    MEM16(0x7FFF90) = LO16(ecx);
    MEM16(0x7FFF8C) = LO16(ecx);
    esp += 4; return; /* ret */

}
