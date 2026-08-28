/**
 * Burnout 3 - Recompiled code chunk 30
 * Functions: 250 (0x0029AA70 - 0x002AE8C0)
 */

#define RECOMP_GENERATED_CODE
#include "recomp_funcs.h"
#include <math.h>

/**
 * sub_0029AA70
 * Original: 0x0029AA70 - 0x0029AA7F (15 bytes, 6 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0029AA70(void)
{

loc_0029AA70: ;
    edx = MEM32(esp + 4);
    eax = MEM32(ecx);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, 0);
    PUSH32(esp, edx);
    PUSH32(esp, 0); RECOMP_ICALL_SAFE(MEM32(eax + 0x48), _icall_esp); /* indirect call */
    }

loc_0029AA7C: ;
    esp += 8; return; /* ret 4 */

}

/**
 * sub_0029AA80
 * Original: 0x0029AA80 - 0x0029AA8F (15 bytes, 6 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0029AA80(void)
{

loc_0029AA80: ;
    edx = MEM32(esp + 4);
    eax = MEM32(ecx);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, edx);
    PUSH32(esp, 0xFFFFFFFFu);
    PUSH32(esp, 0); RECOMP_ICALL_SAFE(MEM32(eax + 0x48), _icall_esp); /* indirect call */
    }

loc_0029AA8C: ;
    esp += 8; return; /* ret 4 */

}

/**
 * sub_0029AA90
 * Original: 0x0029AA90 - 0x0029AABC (44 bytes, 18 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0029AA90(void)
{
    uint32_t ebp;
    int _flags = 0; /* fallback flag var */
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_0029AA90: ;
    esp = esp - 0x84C;
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, ebx);
    PUSH32(esp, ebp);
    PUSH32(esp, esi);
    esi = ecx;
    eax = MEM32(esi);
    MEM32(esp + 0x10) = esi;
    PUSH32(esp, 0); RECOMP_ICALL_SAFE(MEM32(eax + 0x50), _icall_esp); /* indirect call */
    }

loc_0029AAA4: ;
    if (TEST_Z(LO8(eax), LO8(eax))) { sub_0029AABC(); return; } /* je: equal / zero */

loc_0029AAA8: ;
    eax = MEM32(esi + 0x20);
    if (TEST_Z(eax, eax)) goto loc_0029AAB4; /* je: equal / zero */

loc_0029AAAF: ;
    if (CMP_GE(MEM32(eax), 0)) { sub_0029AABC(); return; } /* jge: greater or equal (signed >=) */

loc_0029AAB4: ;
    SET_LO8(ebx, 1);
    MEM8(esp + 0xF) = LO8(ebx);
    g_seh_ebp = ebp; sub_0029AAC5(); return; /* tail jmp 0x0029AAC5 */

}

/**
 * sub_0029AFE0
 * Original: 0x0029AFE0 - 0x0029B03F (95 bytes, 38 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0029AFE0(void)
{
    uint32_t ebp;
    int _flags = 0; /* fallback flag var */
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_0029AFE0: ;
    eax = MEM32(esp + 8);
    (void)0; /* cmp eax, 0x20 - flags set for next jcc */
    PUSH32(esp, ebp);
    ebp = MEM32(esp + 8);
    PUSH32(esp, esi);
    if (CMP_L(eax, 0x20)) goto loc_0029B01F; /* jl: less (signed <) */

loc_0029AFEF: ;
    PUSH32(esp, edi);
    edi = eax;
    edi = edi >> 5;
    ecx = edi;
    ecx = (uint32_t)(-(int32_t)ecx);
    ecx = ecx << 5;
    eax = eax + ecx;
    MEM32(esp + 0x14) = eax;

loc_0029B002: ;
    PUSH32(esp, 0x20);
    esi = ebx;
    PUSH32(esp, 0); sub_0041DFA0(); /* call 0x0041DFA0 */

loc_0029B00B: ;
    PUSH32(esp, 0x20);
    esi = ebp;
    PUSH32(esp, 0); sub_0041DD80(); /* call 0x0041DD80 */

loc_0029B014: ;
    esp = esp + 8;
    edi--;
    if ((edi != 0)) goto loc_0029B002; /* jne: not equal / not zero */

loc_0029B01A: ;
    eax = MEM32(esp + 0x14);
    POP32(esp, edi);

loc_0029B01F: ;
    if (TEST_Z(eax, eax)) goto loc_0029B03A; /* je: equal / zero */

loc_0029B023: ;
    PUSH32(esp, eax);
    esi = ebx;
    PUSH32(esp, 0); sub_0041DFA0(); /* call 0x0041DFA0 */

loc_0029B02B: ;
    edx = MEM32(esp + 0x14);
    PUSH32(esp, edx);
    esi = ebp;
    PUSH32(esp, 0); sub_0041DD80(); /* call 0x0041DD80 */

loc_0029B037: ;
    esp = esp + 8;

loc_0029B03A: ;
    POP32(esp, esi);
    POP32(esp, ebp);
    esp += 12; return; /* ret 8 */

}

/**
 * sub_0029B040
 * Original: 0x0029B040 - 0x0029B067 (39 bytes, 13 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0029B040(void)
{
    int _flags = 0; /* fallback flag var */

loc_0029B040: ;
    (void)0; /* test MEM8(esp + 4), 1 - flags set for next jcc */
    PUSH32(esp, esi);
    esi = ecx;
    MEM32(esi) = 0x6059B8;
    if (TEST_Z(MEM8(esp + 4), 1)) goto loc_0029B061; /* je: equal / zero */

loc_0029B050: ;
    eax = esp + 8;
    PUSH32(esp, eax);
    MEM32(esp + 0xC) = esi;
    PUSH32(esp, 0); sub_002AF1C0(); /* call 0x002AF1C0 */

loc_0029B05E: ;
    esp = esp + 4;

loc_0029B061: ;
    eax = esi;
    POP32(esp, esi);
    esp += 8; return; /* ret 4 */

}

/**
 * sub_0029B070
 * Original: 0x0029B070 - 0x0029B0AF (63 bytes, 20 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0029B070(void)
{
    int _flags = 0; /* fallback flag var */

loc_0029B070: ;
    ecx = MEM32(eax + 4);
    if (CMP_GE(ecx, 4)) goto loc_0029B0AC; /* jge: greater or equal (signed >=) */

loc_0029B078: ;
    ecx = ecx << 4;
    MEM32(ecx + eax + 8) = edx;
    ecx = MEM32(eax + 4);
    edx = MEM32(esp + 4);
    ecx = ecx << 4;
    MEM32(ecx + eax + 0xC) = edx;
    ecx = MEM32(eax + 4);
    edx = MEM32(esp + 8);
    ecx++;
    ecx = ecx << 4;
    MEM32(ecx + eax) = edx;
    ecx = MEM32(eax + 4);
    edx = MEM32(esp + 0xC);
    ecx = ecx << 4;
    MEM32(ecx + eax + 0x14) = edx;
    MEM32(eax + 4) = MEM32(eax + 4) + 1;

loc_0029B0AC: ;
    esp += 16; return; /* ret 12 */

}

/**
 * sub_0029B0B0
 * Original: 0x0029B0B0 - 0x0029B1A4 (244 bytes, 85 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0029B0B0(void)
{
    uint32_t ebp;
    int _flags = 0; /* fallback flag var */
    int _cf = 0; /* carry flag */
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_0029B0B0: ;
    PUSH32(esp, ecx);
    PUSH32(esp, ebx);
    PUSH32(esp, ebp);
    PUSH32(esp, esi);
    esi = MEM32(esp + 0x14);
    eax = MEM32(esi + 4);
    (void)0; /* test eax, eax - flags set for next jcc */
    MEM32(esp + 0xC) = 0;
    if (CMP_LE(eax & eax, 0)) goto loc_0029B19B; /* jle: less or equal (signed <=) */

loc_0029B0CB: ;
    ebx = MEM32(0x828B4C);
    ebp = MEM32(0x828B48);
    esi = esi + 0xC;
    /* nop */

loc_0029B0E0: ;
    eax = MEM32(esi + -4);
    eax = eax - 0;
    if ((eax == 0)) goto loc_0029B176; /* je: equal / zero */

loc_0029B0EC: ;
    eax--;
    if ((eax == 0)) goto loc_0029B147; /* je: equal / zero */

loc_0029B0EF: ;
    eax--;
    if ((eax != 0)) goto loc_0029B180; /* jne: not equal / not zero */

loc_0029B0F6: ;
    /* TODO: rdtsc  */
    PUSH32(esp, 0);
    PUSH32(esp, 3);
    PUSH32(esp, edx);
    PUSH32(esp, eax);
    PUSH32(esp, 0); sub_00470A00(); /* call 0x00470A00 */

loc_0029B103: ;
    PUSH32(esp, 0);
    PUSH32(esp, 0x898);
    PUSH32(esp, edx);
    PUSH32(esp, eax);
    PUSH32(esp, 0); sub_00470D50(); /* call 0x00470D50 */

loc_0029B111: ;
    PUSH32(esp, 0);
    eax = eax - ebp;
    PUSH32(esp, 0x3E8);
    edx = edx - ebx - _cf; /* sbb */
    PUSH32(esp, edx);
    PUSH32(esp, eax);
    PUSH32(esp, 0); sub_00470EA0(); /* call 0x00470EA0 */

loc_0029B123: ;
    ecx = eax;
    eax = 0x10624DD3;
    { uint64_t _r = (uint64_t)eax * (uint64_t)ecx;
      eax = (uint32_t)_r; edx = (uint32_t)(_r >> 32); }
    eax = MEM32(esi);
    ecx = MEM32(edi + eax * 4 + 0x7D0);
    eax = edi + eax * 4 + 0x7D0;
    edx = edx >> 6;
    if (CMP_EQ(ecx, edx)) goto loc_0029B16D; /* je: equal / zero */

loc_0029B143: ;
    MEM32(eax) = edx;
    goto loc_0029B180;

loc_0029B147: ;
    ecx = edi;
    ecx = ecx - 0x864EC8;
    eax = 0x634C0635;
    { int64_t _r = (int64_t)(int32_t)eax * (int64_t)(int32_t)ecx;
      eax = (uint32_t)_r; edx = (uint32_t)(_r >> 32); }
    eax = MEM32(esi);
    edx = (uint32_t)((int32_t)edx >> 0xA);
    ecx = edx;
    ecx = ecx >> 0x1F;
    ecx = ecx + edx;
    edx = 1;
    edx = edx << LO8(ecx);
    if (TEST_NZ(eax, edx)) goto loc_0029B180; /* jne: not equal / not zero */

loc_0029B16D: ;
    POP32(esp, esi);
    POP32(esp, ebp);
    SET_LO8(eax, 0); /* xor self */
    POP32(esp, ebx);
    POP32(esp, ecx);
    esp += 8; return; /* ret 4 */

loc_0029B176: ;
    eax = MEM32(edi + 0x75C);
    if (CMP_NE(eax, MEM32(esi))) goto loc_0029B16D; /* jne: not equal / not zero */

loc_0029B180: ;
    eax = MEM32(esp + 0xC);
    ecx = MEM32(esp + 0x14);
    edx = MEM32(ecx + 4);
    eax++;
    esi = esi + 0x10;
    (void)0; /* cmp eax, edx - flags set for next jcc */
    MEM32(esp + 0xC) = eax;
    if (CMP_L(eax, edx)) goto loc_0029B0E0; /* jl: less (signed <) */

loc_0029B19B: ;
    POP32(esp, esi);
    POP32(esp, ebp);
    SET_LO8(eax, 1);
    POP32(esp, ebx);
    POP32(esp, ecx);
    esp += 8; return; /* ret 4 */

}

/**
 * sub_0029B1B0
 * Original: 0x0029B1B0 - 0x0029B1B6 (6 bytes, 2 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0029B1B0(void)
{

loc_0029B1B0: ;
    eax = 0x49;
    esp += 4; return; /* ret */

}

/**
 * sub_0029B1C0
 * Original: 0x0029B1C0 - 0x0029B1DA (26 bytes, 8 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0029B1C0(void)
{

loc_0029B1C0: ;
    eax = MEM32(esp + 8);
    ecx = MEM32(esp + 4);
    PUSH32(esp, 0x605A90);
    PUSH32(esp, eax);
    PUSH32(esp, ecx);
    PUSH32(esp, 0); sub_0046E9AD(); /* call 0x0046E9AD */

loc_0029B1D4: ;
    esp = esp + 0xC;
    esp += 12; return; /* ret 8 */

}

/**
 * sub_0029B1E0
 * Original: 0x0029B1E0 - 0x0029B1E6 (6 bytes, 2 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0029B1E0(void)
{

loc_0029B1E0: ;
    eax = 0x4B;
    esp += 4; return; /* ret */

}

/**
 * sub_0029B1F0
 * Original: 0x0029B1F0 - 0x0029B230 (64 bytes, 21 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0029B1F0(void)
{
    int _flags = 0; /* fallback flag var */

loc_0029B1F0: ;
    eax = MEM32(ecx);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, 0); RECOMP_ICALL_SAFE(MEM32(eax + 8), _icall_esp); /* indirect call */
    }

loc_0029B1F5: ;
    edx = 0; /* xor self */
    ecx = 0x6BE940;
    /* nop */

loc_0029B200: ;
    if (CMP_EQ(MEM32(ecx), eax)) { sub_0029B230(); return; } /* je: equal / zero */

loc_0029B204: ;
    ecx = ecx + 0x10;
    edx++;
    if (CMP_L(ecx, 0x6BED90)) goto loc_0029B200; /* jl: less (signed <) */

loc_0029B210: ;
    edx = 0x600E6C;
    ecx = MEM32(esp + 8);
    PUSH32(esp, edx);
    edx = MEM32(esp + 8);
    PUSH32(esp, 0x5F7650);
    PUSH32(esp, ecx);
    PUSH32(esp, edx);
    PUSH32(esp, 0); sub_0046E9AD(); /* call 0x0046E9AD */

loc_0029B22A: ;
    esp = esp + 0x10;
    esp += 12; return; /* ret 8 */

}

/**
 * sub_0029B260
 * Original: 0x0029B260 - 0x0029B276 (22 bytes, 8 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0029B260(void)
{

loc_0029B260: ;
    eax = MEM32(ecx + 0x34);
    PUSH32(esp, esi);
    esi = MEM32(esp + 8);
    PUSH32(esp, 5);
    PUSH32(esp, 0); sub_0041DD80(); /* call 0x0041DD80 */

loc_0029B26F: ;
    esp = esp + 4;
    POP32(esp, esi);
    esp += 8; return; /* ret 4 */

}

/**
 * sub_0029B280
 * Original: 0x0029B280 - 0x0029B2A5 (37 bytes, 13 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0029B280(void)
{
    int _flags = 0; /* fallback flag var */

loc_0029B280: ;
    PUSH32(esp, esi);
    esi = ecx;
    eax = MEM32(esi + 8);
    PUSH32(esp, eax);
    eax = 0x862C40;
    PUSH32(esp, 0); sub_00296250(); /* call 0x00296250 */

loc_0029B291: ;
    if (TEST_Z(eax, eax)) goto loc_0029B29E; /* je: equal / zero */

loc_0029B295: ;
    ecx = MEM32(esi + 0x34);
    MEM32(eax + 0x9E8) = ecx;

loc_0029B29E: ;
    eax = 1;
    POP32(esp, esi);
    esp += 4; return; /* ret */

}

/**
 * sub_0029B2B0
 * Original: 0x0029B2B0 - 0x0029B362 (178 bytes, 56 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0029B2B0(void)
{
    int _flags = 0; /* fallback flag var */

loc_0029B2B0: ;
    eax = MEM32(0x84A19C);
    PUSH32(esp, ebx);
    ebx = 0; /* xor self */
    (void)0; /* cmp eax, ebx - flags set for next jcc */
    PUSH32(esp, esi);
    PUSH32(esp, edi);
    if (CMP_NE(eax, ebx)) goto loc_0029B2C3; /* jne: not equal / not zero */

loc_0029B2BE: ;
    PUSH32(esp, 0); sub_002AED70(); /* call 0x002AED70 */

loc_0029B2C3: ;
    edx = MEM32(0x7FA494);
    ecx = MEM32(0x7FA4B4);
    esi = MEM32(0x84A190);
    edx++;
    ecx++;
    (void)0; /* cmp esi, ebx - flags set for next jcc */
    MEM32(0x7FA494) = edx;
    MEM32(0x7FA4B4) = ecx;
    edi = esi;
    if (CMP_EQ(esi, ebx)) goto loc_0029B30B; /* je: equal / zero */

loc_0029B2E9: ;
    if (CMP_B(MEM32(esi + 0x80), 0x38)) goto loc_0029B30B; /* jb: below (unsigned <) */

loc_0029B2F2: ;
    ecx = 0x10;
    PUSH32(esp, 0); sub_003E62A0(); /* call 0x003E62A0 */

loc_0029B2FC: ;
    PUSH32(esp, 0x38);
    PUSH32(esp, edi);
    PUSH32(esp, 0); sub_003E6BD0(); /* call 0x003E6BD0 */

loc_0029B304: ;
    esp = esp + 8;
    if (CMP_NE(eax, ebx)) goto loc_0029B32C; /* jne: not equal / not zero */

loc_0029B30B: ;
    esi = MEM32(0x84A184);
    ecx = 0x10;
    edi = esi;
    PUSH32(esp, 0); sub_003E62A0(); /* call 0x003E62A0 */

loc_0029B31D: ;
    PUSH32(esp, 0x38);
    PUSH32(esp, edi);
    PUSH32(esp, 0); sub_003E6BD0(); /* call 0x003E6BD0 */

loc_0029B325: ;
    esp = esp + 8;
    if (CMP_EQ(eax, ebx)) { sub_0029B362(); return; } /* je: equal / zero */

loc_0029B32C: ;
    POP32(esp, edi);
    POP32(esp, esi);
    MEM32(eax + 4) = ebx;
    MEM32(eax + 0xC) = ebx;
    MEM32(eax + 0x10) = ebx;
    MEM32(eax + 0x14) = ebx;
    MEM32(eax + 0x18) = ebx;
    MEM32(eax + 0x1C) = ebx;
    MEM32(eax + 0x20) = ebx;
    MEM32(eax + 0x28) = ebx;
    MEM32(eax + 0x2C) = ebx;
    MEM8(eax + 0x30) = LO8(ebx);
    MEM16(eax + 0x32) = LO16(ebx);
    MEM32(eax + 0x34) = ebx;
    MEM32(eax + 8) = 0xFFFFFFFFu;
    MEM32(eax) = 0x6059C0;
    POP32(esp, ebx);
    esp += 4; return; /* ret */

}

/**
 * sub_0029B370
 * Original: 0x0029B370 - 0x0029B41F (175 bytes, 55 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0029B370(void)
{
    int _flags = 0; /* fallback flag var */

loc_0029B370: ;
    eax = MEM32(0x84A19C);
    PUSH32(esp, ebx);
    ebx = 0; /* xor self */
    (void)0; /* cmp eax, ebx - flags set for next jcc */
    PUSH32(esp, esi);
    PUSH32(esp, edi);
    if (CMP_NE(eax, ebx)) goto loc_0029B383; /* jne: not equal / not zero */

loc_0029B37E: ;
    PUSH32(esp, 0); sub_002AED70(); /* call 0x002AED70 */

loc_0029B383: ;
    edx = MEM32(0x7FA494);
    ecx = MEM32(0x7FA4B4);
    esi = MEM32(0x84A190);
    edx++;
    ecx++;
    (void)0; /* cmp esi, ebx - flags set for next jcc */
    MEM32(0x7FA494) = edx;
    MEM32(0x7FA4B4) = ecx;
    edi = esi;
    if (CMP_EQ(esi, ebx)) goto loc_0029B3CB; /* je: equal / zero */

loc_0029B3A9: ;
    if (CMP_B(MEM32(esi + 0x80), 0x34)) goto loc_0029B3CB; /* jb: below (unsigned <) */

loc_0029B3B2: ;
    ecx = 0x10;
    PUSH32(esp, 0); sub_003E62A0(); /* call 0x003E62A0 */

loc_0029B3BC: ;
    PUSH32(esp, 0x34);
    PUSH32(esp, edi);
    PUSH32(esp, 0); sub_003E6BD0(); /* call 0x003E6BD0 */

loc_0029B3C4: ;
    esp = esp + 8;
    if (CMP_NE(eax, ebx)) goto loc_0029B3EC; /* jne: not equal / not zero */

loc_0029B3CB: ;
    esi = MEM32(0x84A184);
    ecx = 0x10;
    edi = esi;
    PUSH32(esp, 0); sub_003E62A0(); /* call 0x003E62A0 */

loc_0029B3DD: ;
    PUSH32(esp, 0x34);
    PUSH32(esp, edi);
    PUSH32(esp, 0); sub_003E6BD0(); /* call 0x003E6BD0 */

loc_0029B3E5: ;
    esp = esp + 8;
    if (CMP_EQ(eax, ebx)) { sub_0029B41F(); return; } /* je: equal / zero */

loc_0029B3EC: ;
    POP32(esp, edi);
    POP32(esp, esi);
    MEM32(eax + 4) = ebx;
    MEM32(eax + 0xC) = ebx;
    MEM32(eax + 0x10) = ebx;
    MEM32(eax + 0x14) = ebx;
    MEM32(eax + 0x18) = ebx;
    MEM32(eax + 0x1C) = ebx;
    MEM32(eax + 0x20) = ebx;
    MEM32(eax + 0x28) = ebx;
    MEM32(eax + 0x2C) = ebx;
    MEM8(eax + 0x30) = LO8(ebx);
    MEM16(eax + 0x32) = LO16(ebx);
    MEM32(eax + 8) = 0xFFFFFFFFu;
    MEM32(eax) = 0x605A28;
    POP32(esp, ebx);
    esp += 4; return; /* ret */

}

/**
 * sub_0029B430
 * Original: 0x0029B430 - 0x0029B44F (31 bytes, 9 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0029B430(void)
{
    int _flags = 0; /* fallback flag var */

loc_0029B430: ;
    eax = MEM32(ecx + 8);
    PUSH32(esp, eax);
    eax = 0x862C40;
    PUSH32(esp, 0); sub_00296250(); /* call 0x00296250 */

loc_0029B43E: ;
    if (TEST_Z(eax, eax)) goto loc_0029B449; /* je: equal / zero */

loc_0029B442: ;
    MEM8(eax + 0xA4D) = 1;

loc_0029B449: ;
    eax = 1;
    esp += 4; return; /* ret */

}

/**
 * sub_0029B450
 * Original: 0x0029B450 - 0x0029B596 (326 bytes, 96 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0029B450(void)
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

loc_0029B450: ;
    PUSH32(esp, ecx);
    eax = MEM32(0x84A19C);
    if (TEST_NZ(eax, eax)) goto loc_0029B45F; /* jne: not equal / not zero */

loc_0029B45A: ;
    PUSH32(esp, 0); sub_002AED70(); /* call 0x002AED70 */

loc_0029B45F: ;
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
    if (TEST_Z(esi, esi)) goto loc_0029B4AB; /* je: equal / zero */

loc_0029B487: ;
    if (CMP_B(MEM32(esi + 0x80), 0x24)) goto loc_0029B4AB; /* jb: below (unsigned <) */

loc_0029B490: ;
    ecx = 0x10;
    PUSH32(esp, 0); sub_003E62A0(); /* call 0x003E62A0 */

loc_0029B49A: ;
    PUSH32(esp, 0x24);
    PUSH32(esp, edi);
    PUSH32(esp, 0); sub_003E6BD0(); /* call 0x003E6BD0 */

loc_0029B4A2: ;
    esi = eax;
    esp = esp + 8;
    if (TEST_NZ(esi, esi)) goto loc_0029B4D2; /* jne: not equal / not zero */

loc_0029B4AB: ;
    esi = MEM32(0x84A184);
    ecx = 0x10;
    edi = esi;
    PUSH32(esp, 0); sub_003E62A0(); /* call 0x003E62A0 */

loc_0029B4BD: ;
    PUSH32(esp, 0x24);
    PUSH32(esp, edi);
    PUSH32(esp, 0); sub_003E6BD0(); /* call 0x003E6BD0 */

loc_0029B4C5: ;
    esi = eax;
    esp = esp + 8;
    if (TEST_Z(esi, esi)) goto loc_0029B592; /* je: equal / zero */

loc_0029B4D2: ;
    SET_LO8(edx, MEM8(esp + 0x24));
    eax = MEM32(esp + 0x10);
    xmm0 = MEMF(esp + 0x1C); /* movss */
    SET_LO8(ecx, MEM8(esp + 0x20));
    MEM8(esi + 0xD) = LO8(edx);
    edx = ZX8(MEM8(esp + 0x2C));
    MEMF(esi + 8) = xmm0; /* movss */
    xmm0 = MEMF(esp + 0x14); /* movss */
    MEM8(esi + 0xC) = LO8(ecx);
    ecx = ZX8(MEM8(0x776154));
    MEM32(esp + 8) = edx;
    MEM32(esi + 0x14) = eax;
    SET_LO8(eax, MEM8(esp + 0x28));
    fp_push((double)SMEM32(esp + 8)); /* fild */
    MEMF(esi) = xmm0; /* movss */
    xmm0 = MEMF(esp + 0x18); /* movss */
    MEMF(esi + 4) = xmm0; /* movss */
    MEM8(esi + 0xE) = LO8(eax);
    fp_st1() *= fp_top(); fp_pop(); /* fmul */
    PUSH32(esp, 0); sub_00471288(); /* call 0x00471288 */

loc_0029B52E: ;
    edi = MEM32(esp + 0x34);
    MEM8(esi + 0xF) = LO8(eax);
    SET_LO8(eax, MEM8(esp + 0x30));
    PUSH32(esp, 0x79);
    PUSH32(esp, 0x605AB0);
    MEM8(esi + 0x10) = LO8(eax);
    PUSH32(esp, 0); sub_002AF210(); /* call 0x002AF210 */

loc_0029B548: ;
    ecx = MEM32(esp + 0x40);
    MEM32(esi + 0x18) = eax;
    eax = MEM32(0x849FC4);
    esp = esp + 8;
    (void)0; /* test eax, eax - flags set for next jcc */
    MEM32(esi + 0x1C) = ecx;
    MEM32(esi + 0x20) = 0;
    if (TEST_NZ(eax, eax)) goto loc_0029B58B; /* jne: not equal / not zero */

loc_0029B565: ;
    eax = MEM32(0x849FC0);
    if (TEST_NZ(eax, eax)) goto loc_0029B57E; /* jne: not equal / not zero */

loc_0029B56E: ;
    POP32(esp, edi);
    MEM32(0x849FBC) = esi;
    MEM32(0x849FC0) = esi;
    POP32(esp, esi);
    POP32(esp, ecx);
    esp += 4; return; /* ret */

loc_0029B57E: ;
    POP32(esp, edi);
    MEM32(eax + 0x20) = esi;
    MEM32(0x849FC0) = esi;
    POP32(esp, esi);
    POP32(esp, ecx);
    esp += 4; return; /* ret */

loc_0029B58B: ;
    edx = MEM32(eax);
    MEM32(esi + 0x20) = edx;
    MEM32(eax) = esi;

loc_0029B592: ;
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
 * sub_0029B5A0
 * Original: 0x0029B5A0 - 0x0029B75A (442 bytes, 104 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0029B5A0(void)
{
    int _flags = 0; /* fallback flag var */

loc_0029B5A0: ;
    PUSH32(esp, ebx);
    PUSH32(esp, esi);
    PUSH32(esp, edi);
    edx = 0x8006;
    ecx = 0x40350;
    PUSH32(esp, 0); sub_00537990(); /* call 0x00537990 */

loc_0029B5B2: ;
    edx = 0x302;
    ecx = 0x40344;
    MEM32(0x549B20) = 0x8006;
    PUSH32(esp, 0); sub_00537990(); /* call 0x00537990 */

loc_0029B5CB: ;
    edx = 0x303;
    ecx = 0x40348;
    MEM32(0x549AF0) = 0x302;
    PUSH32(esp, 0); sub_00537990(); /* call 0x00537990 */

loc_0029B5E4: ;
    ebx = 1;
    edx = ebx;
    ecx = 0x40304;
    MEM32(0x549AF4) = 0x303;
    PUSH32(esp, 0); sub_00537990(); /* call 0x00537990 */

loc_0029B5FF: ;
    esi = MEM32(0x5499F0);
    edi = 0; /* xor self */
    esi = esi | 0x1200;
    PUSH32(esp, edi);
    MEM32(0x549AE4) = ebx;
    MEM32(0x5499F0) = esi;
    MEM32(0x549B90) = edi;
    PUSH32(esp, 0); sub_00537070(); /* call 0x00537070 */

loc_0029B625: ;
    esi = MEM32(0x5499E8);
    eax = MEM32(esi);
    if (CMP_B(eax, MEM32(esi + 4))) goto loc_0029B641; /* jb: below (unsigned <) */

loc_0029B632: ;
    eax = MEM32(0x54A8B8);
    ecx = eax;
    ecx = ecx >> 1;
    PUSH32(esp, ecx);
    PUSH32(esp, 0); sub_0053C300(); /* call 0x0053C300 */

loc_0029B641: ;
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
    if (CMP_NE(eax, 2)) goto loc_0029B69E; /* jne: not equal / not zero */

loc_0029B66F: ;
    PUSH32(esp, 0); sub_005384E0(); /* call 0x005384E0 */

loc_0029B674: ;
    PUSH32(esp, 0); sub_00536810(); /* call 0x00536810 */

loc_0029B679: ;
    eax = MEM32(esi);
    if (CMP_B(eax, MEM32(esi + 4))) goto loc_0029B68F; /* jb: below (unsigned <) */

loc_0029B680: ;
    eax = MEM32(0x54A8B8);
    edx = eax;
    edx = edx >> 1;
    PUSH32(esp, edx);
    PUSH32(esp, 0); sub_0053C300(); /* call 0x0053C300 */

loc_0029B68F: ;
    PUSH32(esp, esi);
    edx = eax;
    PUSH32(esp, 0); sub_00538030(); /* call 0x00538030 */

loc_0029B697: ;
    PUSH32(esp, 0); sub_00537E30(); /* call 0x00537E30 */

loc_0029B69C: ;
    MEM32(esi) = eax;

loc_0029B69E: ;
    edx = ebx;
    ecx = 0x40300;
    PUSH32(esp, 0); sub_00537990(); /* call 0x00537990 */

loc_0029B6AA: ;
    edx = ebx;
    ecx = 0x40340;
    MEM32(0x549AE8) = ebx;
    PUSH32(esp, 0); sub_00537990(); /* call 0x00537990 */

loc_0029B6BC: ;
    edx = 0x206;
    ecx = 0x4033C;
    MEM32(0x549AEC) = ebx;
    PUSH32(esp, 0); sub_00537990(); /* call 0x00537990 */

loc_0029B6D1: ;
    eax = 0; /* xor self */
    MEM32(0x549AE0) = 0x206;
    PUSH32(esp, 0); sub_00538690(); /* call 0x00538690 */

loc_0029B6E2: ;
    PUSH32(esp, 0x142);
    PUSH32(esp, 0); sub_00536930(); /* call 0x00536930 */

loc_0029B6EC: ;
    PUSH32(esp, edi);
    eax = 0; /* xor self */
    PUSH32(esp, 0); sub_00539960(); /* call 0x00539960 */

loc_0029B6F4: ;
    edx = MEM32(0x5499F0);
    eax = 4;
    esi = 0x800;
    MEM32(0x547360) = eax;
    MEM32(0x547370) = eax;
    edx = edx | esi;
    PUSH32(esp, edi);
    eax = ebx;
    MEM32(0x547368) = 2;
    MEM32(0x54736C) = edi;
    MEM32(0x547378) = 2;
    MEM32(0x5499F0) = edx;
    MEM32(0x54737C) = edi;
    PUSH32(esp, 0); sub_00539960(); /* call 0x00539960 */

loc_0029B73E: ;
    eax = MEM32(0x5499F0);
    POP32(esp, edi);
    eax = eax | esi;
    POP32(esp, esi);
    MEM32(0x5473E0) = ebx;
    MEM32(0x5473F0) = ebx;
    MEM32(0x5499F0) = eax;
    POP32(esp, ebx);
    esp += 4; return; /* ret */

}

/**
 * sub_0029B760
 * Original: 0x0029B760 - 0x0029B8AF (335 bytes, 103 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0029B760(void)
{
    uint32_t ebp;
    int _flags = 0; /* fallback flag var */
    float xmm4;

loc_0029B760: ;
    PUSH32(esp, ebp);
    ebp = esp;
    esp = esp & 0xFFFFFFF0u;
    esp = esp - 0x88;
    PUSH32(esp, esi);
    esi = MEM32(0x84B868);
    (void)0; /* test esi, esi - flags set for next jcc */
    PUSH32(esp, edi);
    if (TEST_Z(esi, esi)) goto loc_0029B8A9; /* je: equal / zero */

loc_0029B77C: ;
    PUSH32(esp, 0); sub_003FB250(); /* call 0x003FB250 */

loc_0029B781: ;
    eax = MEM32(0x5499E8);
    PUSH32(esp, 0);
    edi = eax + 0xDE0;
    ecx = 0x10;
    esi = 0x5A0350;
    memcpy((void*)XBOX_PTR(edi), (void*)XBOX_PTR(esi), ecx * 4);
    esi += ecx * 4; edi += ecx * 4; ecx = 0; /* rep movsd */
    esi = MEM32(0x5499F0);
    PUSH32(esp, 0);
    PUSH32(esp, 0);
    eax = esp + 0x1C;
    esi = esi | 0x200;
    PUSH32(esp, eax);
    MEM32(0x5499F0) = esi;
    PUSH32(esp, 0); sub_0048D0ED(); /* call 0x0048D0ED */

loc_0029B7BA: ;
    eax = MEM32(0x5499E8);
    PUSH32(esp, 0);
    edi = eax + 0xC60;
    ecx = 0x10;
    esi = esp + 0x14;
    memcpy((void*)XBOX_PTR(edi), (void*)XBOX_PTR(esi), ecx * 4);
    esi += ecx * 4; edi += ecx * 4; ecx = 0; /* rep movsd */
    esi = MEM32(0x5499F0);
    PUSH32(esp, 0);
    PUSH32(esp, 0);
    ecx = esp + 0x1C;
    esi = esi | 0xFF0200;
    PUSH32(esp, ecx);
    MEM32(0x5499F0) = esi;
    PUSH32(esp, 0); sub_0048D0ED(); /* call 0x0048D0ED */

loc_0029B7F2: ;
    eax = MEM32(0x5499E8);
    PUSH32(esp, 0x42C80000);
    PUSH32(esp, 0);
    PUSH32(esp, 0);
    PUSH32(esp, 0x43F00000);
    edi = eax + 0xDE0;
    ecx = 0x10;
    esi = esp + 0x20;
    memcpy((void*)XBOX_PTR(edi), (void*)XBOX_PTR(esi), ecx * 4);
    esi += ecx * 4; edi += ecx * 4; ecx = 0; /* rep movsd */
    esi = MEM32(0x5499F0);
    PUSH32(esp, 0x44200000);
    PUSH32(esp, 0);
    edx = esp + 0x68;
    esi = esi | 0x200;
    PUSH32(esp, edx);
    MEM32(0x5499F0) = esi;
    PUSH32(esp, 0); sub_0048D1DD(); /* call 0x0048D1DD */

loc_0029B839: ;
    edx = esp + 0x50;
    eax = 1;
    PUSH32(esp, 0); sub_00539600(); /* call 0x00539600 */

loc_0029B847: ;
    esi = MEM32(0x849FBC);
    if (TEST_Z(esi, esi)) goto loc_0029B8A9; /* je: equal / zero */

loc_0029B851: ;
    SET_LO8(eax, MEM8(esi + 0x10));
    (void)0; /* test LO8(eax), 4 - flags set for next jcc */
    edi = MEM32(esi + 0x20);
    if (TEST_Z(LO8(eax), 4)) goto loc_0029B8A3; /* je: equal / zero */

loc_0029B85B: ;
    if (TEST_NZ(LO8(eax), 8)) goto loc_0029B864; /* jne: not equal / not zero */

loc_0029B85F: ;
    PUSH32(esp, 0); sub_0029B5A0(); /* call 0x0029B5A0 */

loc_0029B864: ;
    eax = 0; /* xor self */
    SET_LO8(eax, MEM8(esi + 0x10));
    ecx = 0; /* xor self */
    SET_LO8(ecx, MEM8(esi + 0xF));
    xmm4 = MEMF(0x649368); /* movss */
    edx = 0; /* xor self */
    SET_LO8(edx, MEM8(esi + 0xE));
    PUSH32(esp, eax);
    eax = 0; /* xor self */
    SET_LO8(eax, MEM8(esi + 0xD));
    PUSH32(esp, ecx);
    ecx = 0; /* xor self */
    SET_LO8(ecx, MEM8(esi + 0xC));
    PUSH32(esp, edx);
    edx = MEM32(esi + 8);
    PUSH32(esp, eax);
    eax = edx;
    PUSH32(esp, ecx);
    ecx = MEM32(esi + 4);
    PUSH32(esp, edx);
    edx = MEM32(esi);
    PUSH32(esp, eax);
    PUSH32(esp, ecx);
    ecx = MEM32(esi + 0x14);
    PUSH32(esp, edx);
    PUSH32(esp, 0); sub_0029BA90(); /* call 0x0029BA90 */

loc_0029B8A0: ;
    esp = esp + 0x24;

loc_0029B8A3: ;
    (void)0; /* test edi, edi - flags set for next jcc */
    esi = edi;
    if (TEST_NZ(edi, edi)) goto loc_0029B851; /* jne: not equal / not zero */

loc_0029B8A9: ;
    POP32(esp, edi);
    POP32(esp, esi);
    esp = ebp;
    POP32(esp, ebp);
    esp += 4; return; /* ret */

}

/**
 * sub_0029B8B0
 * Original: 0x0029B8B0 - 0x0029B9FF (335 bytes, 103 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0029B8B0(void)
{
    uint32_t ebp;
    int _flags = 0; /* fallback flag var */
    float xmm4;

loc_0029B8B0: ;
    PUSH32(esp, ebp);
    ebp = esp;
    esp = esp & 0xFFFFFFF0u;
    esp = esp - 0x88;
    PUSH32(esp, esi);
    esi = MEM32(0x84B868);
    (void)0; /* test esi, esi - flags set for next jcc */
    PUSH32(esp, edi);
    if (TEST_Z(esi, esi)) goto loc_0029B9F9; /* je: equal / zero */

loc_0029B8CC: ;
    PUSH32(esp, 0); sub_003FB250(); /* call 0x003FB250 */

loc_0029B8D1: ;
    eax = MEM32(0x5499E8);
    PUSH32(esp, 0);
    edi = eax + 0xDE0;
    ecx = 0x10;
    esi = 0x5A0350;
    memcpy((void*)XBOX_PTR(edi), (void*)XBOX_PTR(esi), ecx * 4);
    esi += ecx * 4; edi += ecx * 4; ecx = 0; /* rep movsd */
    esi = MEM32(0x5499F0);
    PUSH32(esp, 0);
    PUSH32(esp, 0);
    eax = esp + 0x1C;
    esi = esi | 0x200;
    PUSH32(esp, eax);
    MEM32(0x5499F0) = esi;
    PUSH32(esp, 0); sub_0048D0ED(); /* call 0x0048D0ED */

loc_0029B90A: ;
    eax = MEM32(0x5499E8);
    PUSH32(esp, 0);
    edi = eax + 0xC60;
    ecx = 0x10;
    esi = esp + 0x14;
    memcpy((void*)XBOX_PTR(edi), (void*)XBOX_PTR(esi), ecx * 4);
    esi += ecx * 4; edi += ecx * 4; ecx = 0; /* rep movsd */
    esi = MEM32(0x5499F0);
    PUSH32(esp, 0);
    PUSH32(esp, 0);
    ecx = esp + 0x1C;
    esi = esi | 0xFF0200;
    PUSH32(esp, ecx);
    MEM32(0x5499F0) = esi;
    PUSH32(esp, 0); sub_0048D0ED(); /* call 0x0048D0ED */

loc_0029B942: ;
    eax = MEM32(0x5499E8);
    PUSH32(esp, 0x42C80000);
    PUSH32(esp, 0);
    PUSH32(esp, 0);
    PUSH32(esp, 0x43F00000);
    edi = eax + 0xDE0;
    ecx = 0x10;
    esi = esp + 0x20;
    memcpy((void*)XBOX_PTR(edi), (void*)XBOX_PTR(esi), ecx * 4);
    esi += ecx * 4; edi += ecx * 4; ecx = 0; /* rep movsd */
    esi = MEM32(0x5499F0);
    PUSH32(esp, 0x44200000);
    PUSH32(esp, 0);
    edx = esp + 0x68;
    esi = esi | 0x200;
    PUSH32(esp, edx);
    MEM32(0x5499F0) = esi;
    PUSH32(esp, 0); sub_0048D1DD(); /* call 0x0048D1DD */

loc_0029B989: ;
    edx = esp + 0x50;
    eax = 1;
    PUSH32(esp, 0); sub_00539600(); /* call 0x00539600 */

loc_0029B997: ;
    esi = MEM32(0x849FBC);
    if (TEST_Z(esi, esi)) goto loc_0029B9F9; /* je: equal / zero */

loc_0029B9A1: ;
    SET_LO8(eax, MEM8(esi + 0x10));
    (void)0; /* test LO8(eax), 4 - flags set for next jcc */
    edi = MEM32(esi + 0x20);
    if (TEST_NZ(LO8(eax), 4)) goto loc_0029B9F3; /* jne: not equal / not zero */

loc_0029B9AB: ;
    if (TEST_NZ(LO8(eax), 8)) goto loc_0029B9B4; /* jne: not equal / not zero */

loc_0029B9AF: ;
    PUSH32(esp, 0); sub_0029B5A0(); /* call 0x0029B5A0 */

loc_0029B9B4: ;
    eax = 0; /* xor self */
    SET_LO8(eax, MEM8(esi + 0x10));
    ecx = 0; /* xor self */
    SET_LO8(ecx, MEM8(esi + 0xF));
    xmm4 = MEMF(0x649368); /* movss */
    edx = 0; /* xor self */
    SET_LO8(edx, MEM8(esi + 0xE));
    PUSH32(esp, eax);
    eax = 0; /* xor self */
    SET_LO8(eax, MEM8(esi + 0xD));
    PUSH32(esp, ecx);
    ecx = 0; /* xor self */
    SET_LO8(ecx, MEM8(esi + 0xC));
    PUSH32(esp, edx);
    edx = MEM32(esi + 8);
    PUSH32(esp, eax);
    eax = edx;
    PUSH32(esp, ecx);
    ecx = MEM32(esi + 4);
    PUSH32(esp, edx);
    edx = MEM32(esi);
    PUSH32(esp, eax);
    PUSH32(esp, ecx);
    ecx = MEM32(esi + 0x14);
    PUSH32(esp, edx);
    PUSH32(esp, 0); sub_0029BA90(); /* call 0x0029BA90 */

loc_0029B9F0: ;
    esp = esp + 0x24;

loc_0029B9F3: ;
    (void)0; /* test edi, edi - flags set for next jcc */
    esi = edi;
    if (TEST_NZ(edi, edi)) goto loc_0029B9A1; /* jne: not equal / not zero */

loc_0029B9F9: ;
    POP32(esp, edi);
    POP32(esp, esi);
    esp = ebp;
    POP32(esp, ebp);
    esp += 4; return; /* ret */

}

/**
 * sub_0029BA00
 * Original: 0x0029BA00 - 0x0029BA8E (142 bytes, 49 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0029BA00(void)
{
    int _flags = 0; /* fallback flag var */

loc_0029BA00: ;
    PUSH32(esp, ebx);
    PUSH32(esp, esi);
    esi = MEM32(0x849FBC);
    ebx = 0; /* xor self */
    if (CMP_EQ(esi, ebx)) goto loc_0029BA7F; /* je: equal / zero */

loc_0029BA0E: ;
    PUSH32(esp, edi);
    /* nop */

loc_0029BA10: ;
    eax = MEM32(esi + 0x18);
    edi = MEM32(esi + 0x20);
    PUSH32(esp, eax);
    PUSH32(esp, 0); sub_0042C911(); /* call 0x0042C911 */

loc_0029BA1C: ;
    if (TEST_NZ(eax, eax)) goto loc_0029BA4D; /* jne: not equal / not zero */

loc_0029BA20: ;
    eax = MEM32(esi + 0x18);
    if (CMP_EQ(eax, ebx)) goto loc_0029BA4D; /* je: equal / zero */

loc_0029BA27: ;
    ecx = MEM32(0x7FA490);
    edx = MEM32(0x7FA4B4);
    ecx++;
    edx--;
    PUSH32(esp, eax);
    MEM32(0x7FA490) = ecx;
    MEM32(0x7FA4B4) = edx;
    PUSH32(esp, 0); sub_003E7080(); /* call 0x003E7080 */

loc_0029BA47: ;
    esp = esp + 4;
    MEM32(esi + 0x18) = ebx;

loc_0029BA4D: ;
    PUSH32(esp, esi);
    PUSH32(esp, 0); sub_0042C911(); /* call 0x0042C911 */

loc_0029BA53: ;
    if (TEST_NZ(eax, eax)) goto loc_0029BA78; /* jne: not equal / not zero */

loc_0029BA57: ;
    eax = MEM32(0x7FA490);
    edx = MEM32(0x7FA4B4);
    eax++;
    edx--;
    PUSH32(esp, esi);
    MEM32(0x7FA490) = eax;
    MEM32(0x7FA4B4) = edx;
    PUSH32(esp, 0); sub_003E7080(); /* call 0x003E7080 */

loc_0029BA75: ;
    esp = esp + 4;

loc_0029BA78: ;
    (void)0; /* cmp edi, ebx - flags set for next jcc */
    esi = edi;
    if (CMP_NE(edi, ebx)) goto loc_0029BA10; /* jne: not equal / not zero */

loc_0029BA7E: ;
    POP32(esp, edi);

loc_0029BA7F: ;
    POP32(esp, esi);
    MEM32(0x849FBC) = ebx;
    MEM32(0x849FC0) = ebx;
    POP32(esp, ebx);
    esp += 4; return; /* ret */

}

/**
 * sub_0029BA90
 * Original: 0x0029BA90 - 0x0029BC01 (369 bytes, 91 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0029BA90(void)
{
    uint32_t ebp;
    int _flags = 0; /* fallback flag var */
    float xmm0, xmm1, xmm2, xmm3, xmm4, xmm5, xmm6, xmm7;
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_0029BA90: ;
    SET_LO8(eax, MEM8(esp + 0x24));
    SET_LO16(edx, MEM16(ecx + 0xE));
    xmm1 = MEMF(esp + 8); /* movss */
    xmm0 = MEMF(esp + 4); /* movss */
    esp = esp - 0x60;
    (void)0; /* test LO8(eax), 2 - flags set for next jcc */
    PUSH32(esp, esi);
    SET_LO16(esi, MEM16(ecx + 0xC));
    if (TEST_Z(LO8(eax), 2)) goto loc_0029BAC0; /* je: equal / zero */

loc_0029BAB0: ;
    xmm0 = xmm0 * MEMF(0x64A760); /* mulss */
    xmm1 = xmm1 * MEMF(0x64A75C); /* mulss */

loc_0029BAC0: ;
    (void)0; /* test LO8(eax), 1 - flags set for next jcc */
    xmm2 = MEMF(0x648D10); /* movss */
    esi = ZX16(LO16(esi));
    edx = ZX16(LO16(edx));
    xmm6 = (float)(int32_t)esi; /* cvtsi2ss */
    xmm6 = xmm6 * MEMF(esp + 0x70); /* mulss */
    xmm7 = (float)(int32_t)edx; /* cvtsi2ss */
    xmm7 = xmm7 * MEMF(esp + 0x74); /* mulss */
    xmm6 = xmm6 * xmm2; /* mulss */
    xmm7 = xmm7 * xmm2; /* mulss */
    POP32(esp, esi);
    if (TEST_Z(LO8(eax), 1)) goto loc_0029BAF7; /* je: equal / zero */

loc_0029BAEF: ;
    xmm0 = xmm0 + xmm6; /* addss */
    xmm1 = xmm1 + xmm7; /* addss */

loc_0029BAF7: ;
    edx = ZX8(MEM8(esp + 0x78));
    eax = 0; /* xor self */
    SET_HI8(eax, MEM8(esp + 0x80));
    xmm5 = 0.0f; /* xorps self = zero */
    xmm3 = xmm1; /* movaps */
    xmm3 = xmm3 - xmm7; /* subss */
    xmm2 = xmm0; /* movaps */
    xmm2 = xmm2 - xmm6; /* subss */
    MEMF(esp + 4) = xmm3; /* movss */
    xmm0 = xmm0 + xmm6; /* addss */
    MEMF(esp + 0x1C) = xmm3; /* movss */
    SET_LO8(eax, MEM8(esp + 0x74));
    xmm3 = MEMF(0x648D14); /* movss */
    xmm1 = xmm1 + xmm7; /* addss */
    MEMF(esp) = xmm2; /* movss */
    MEMF(esp + 8) = xmm4; /* movss */
    MEMF(esp + 0x10) = xmm5; /* movss */
    MEMF(esp + 0x14) = xmm5; /* movss */
    eax = eax << 8;
    eax = eax | edx;
    edx = ZX8(MEM8(esp + 0x7C));
    eax = eax << 8;
    eax = eax | edx;
    MEM32(esp + 0xC) = eax;
    MEM32(esp + 0x24) = eax;
    MEM32(esp + 0x3C) = eax;
    MEM32(esp + 0x54) = eax;
    eax = MEM32(ecx + 4);
    (void)0; /* cmp eax, 4 - flags set for next jcc */
    MEMF(esp + 0x18) = xmm0; /* movss */
    MEMF(esp + 0x20) = xmm4; /* movss */
    MEMF(esp + 0x28) = xmm3; /* movss */
    MEMF(esp + 0x2C) = xmm5; /* movss */
    MEMF(esp + 0x30) = xmm0; /* movss */
    MEMF(esp + 0x34) = xmm1; /* movss */
    MEMF(esp + 0x38) = xmm4; /* movss */
    MEMF(esp + 0x40) = xmm3; /* movss */
    MEMF(esp + 0x44) = xmm3; /* movss */
    MEMF(esp + 0x48) = xmm2; /* movss */
    MEMF(esp + 0x4C) = xmm1; /* movss */
    MEMF(esp + 0x50) = xmm4; /* movss */
    MEMF(esp + 0x58) = xmm5; /* movss */
    MEMF(esp + 0x5C) = xmm3; /* movss */
    if (CMP_A(eax, 4)) goto loc_0029BBED; /* ja: above (unsigned >) */

loc_0029BBC8: ;
    { uint32_t _jt = MEM32(eax * 4 + 0x29BC04); /* switch: 5 entries, 5 targets */
    if (_jt == 0x0029BBCFu) goto loc_0029BBCF;
    if (_jt == 0x0029BBD5u) goto loc_0029BBD5;
    if (_jt == 0x0029BBDAu) goto loc_0029BBDA;
    if (_jt == 0x0029BBE0u) goto loc_0029BBE0;
    if (_jt == 0x0029BBEDu) goto loc_0029BBED;
    g_seh_ebp = ebp; RECOMP_ITAIL(_jt); return; }

loc_0029BBCF: ;
    eax = MEM32(ecx + 0x1C);
    PUSH32(esp, eax);
    goto loc_0029BBE6;

loc_0029BBD5: ;
    ecx = MEM32(ecx + 0x1C);
    goto loc_0029BBE5;

loc_0029BBDA: ;
    edx = MEM32(ecx + 0x1C);
    PUSH32(esp, edx);
    goto loc_0029BBE6;

loc_0029BBE0: ;
    eax = MEM32(ecx + 0x1C);
    ecx = MEM32(eax);

loc_0029BBE5: ;
    PUSH32(esp, ecx);

loc_0029BBE6: ;
    eax = 0; /* xor self */
    PUSH32(esp, 0); sub_00539960(); /* call 0x00539960 */

loc_0029BBED: ;
    PUSH32(esp, 0x18);
    edx = esp + 4;
    PUSH32(esp, edx);
    PUSH32(esp, 4);
    PUSH32(esp, 8);
    PUSH32(esp, 0); sub_0053A600(); /* call 0x0053A600 */

loc_0029BBFD: ;
    esp = esp + 0x60;
    esp += 4; return; /* ret */

}

/**
 * sub_0029BC20
 * Original: 0x0029BC20 - 0x0029BC9D (125 bytes, 43 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0029BC20(void)
{
    int _flags = 0; /* fallback flag var */

loc_0029BC20: ;
    PUSH32(esp, esi);
    esi = eax;
    if (TEST_Z(esi, esi)) goto loc_0029BC9B; /* je: equal / zero */

loc_0029BC27: ;
    PUSH32(esp, edi);

loc_0029BC28: ;
    eax = MEM32(esi + 0x18);
    edi = MEM32(esi + 0x20);
    PUSH32(esp, eax);
    PUSH32(esp, 0); sub_0042C911(); /* call 0x0042C911 */

loc_0029BC34: ;
    if (TEST_NZ(eax, eax)) goto loc_0029BC69; /* jne: not equal / not zero */

loc_0029BC38: ;
    eax = MEM32(esi + 0x18);
    if (TEST_Z(eax, eax)) goto loc_0029BC69; /* je: equal / zero */

loc_0029BC3F: ;
    ecx = MEM32(0x7FA490);
    edx = MEM32(0x7FA4B4);
    ecx++;
    edx--;
    PUSH32(esp, eax);
    MEM32(0x7FA490) = ecx;
    MEM32(0x7FA4B4) = edx;
    PUSH32(esp, 0); sub_003E7080(); /* call 0x003E7080 */

loc_0029BC5F: ;
    esp = esp + 4;
    MEM32(esi + 0x18) = 0;

loc_0029BC69: ;
    PUSH32(esp, esi);
    PUSH32(esp, 0); sub_0042C911(); /* call 0x0042C911 */

loc_0029BC6F: ;
    if (TEST_NZ(eax, eax)) goto loc_0029BC94; /* jne: not equal / not zero */

loc_0029BC73: ;
    eax = MEM32(0x7FA490);
    edx = MEM32(0x7FA4B4);
    eax++;
    edx--;
    PUSH32(esp, esi);
    MEM32(0x7FA490) = eax;
    MEM32(0x7FA4B4) = edx;
    PUSH32(esp, 0); sub_003E7080(); /* call 0x003E7080 */

loc_0029BC91: ;
    esp = esp + 4;

loc_0029BC94: ;
    (void)0; /* test edi, edi - flags set for next jcc */
    esi = edi;
    if (TEST_NZ(edi, edi)) goto loc_0029BC28; /* jne: not equal / not zero */

loc_0029BC9A: ;
    POP32(esp, edi);

loc_0029BC9B: ;
    POP32(esp, esi);
    esp += 4; return; /* ret */

}

/**
 * sub_0029BCA0
 * Original: 0x0029BCA0 - 0x0029BD19 (121 bytes, 32 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0029BCA0(void)
{
    uint32_t ebp;
    int _flags = 0; /* fallback flag var */
    float xmm0, xmm1, xmm3, xmm4, xmm5, xmm6;
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_0029BCA0: ;
    esp = esp - 0xC;
    xmm4 = xmm4 - MEMF(esp + 0x18); /* subss */
    xmm6 = xmm6 - MEMF(esp + 0x1C); /* subss */
    xmm3 = xmm3 - MEMF(esp + 0x14); /* subss */
    PUSH32(esp, ebx);
    ebx = MEM32(esp + 0x14);
    PUSH32(esp, esi);
    xmm0 = xmm6; /* movaps */
    xmm0 = xmm0 * xmm6; /* mulss */
    xmm1 = xmm4; /* movaps */
    xmm1 = xmm1 * xmm4; /* mulss */
    xmm0 = xmm0 + xmm1; /* addss */
    PUSH32(esp, edi);
    xmm1 = xmm3; /* movaps */
    ecx = 0x10;
    esi = 0x5A0350;
    edi = edx;
    xmm1 = xmm1 * xmm3; /* mulss */
    xmm0 = xmm0 + xmm1; /* addss */
    memcpy((void*)XBOX_PTR(edi), (void*)XBOX_PTR(esi), ecx * 4);
    esi += ecx * 4; edi += ecx * 4; ecx = 0; /* rep movsd */
    MEMF(esp + 0x1C) = xmm0; /* movss */
    xmm0 = sqrtf(MEMF(esp + 0x1C)); /* sqrtss */
    MEMF(esp + 0xC) = xmm0; /* movss */
    xmm0 = MEMF(esp + 0xC); /* movss */
    xmm1 = 0.0f; /* xorps self = zero */
    /* ucomiss xmm0, xmm1 - sets EFLAGS */
    /* lahf - load AH from flags (used in FPU compare idiom) */
    if (1 /* jnp after test - parity */) { sub_0029BD19(); return; } /* jnp: not parity */

loc_0029BD0B: ;
    xmm5 = MEMF(0x648D34); /* movss */
    xmm5 = xmm5 / xmm0; /* divss */
    g_seh_ebp = ebp; sub_0029BD21(); return; /* tail jmp 0x0029BD21 */

}

/**
 * sub_0029BFE0
 * Original: 0x0029BFE0 - 0x0029C036 (86 bytes, 20 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0029BFE0(void)
{
    float xmm0, xmm1, xmm5;

loc_0029BFE0: ;
    xmm0 = MEMF(0x648E18); /* movss */
    xmm5 = MEMF(0x648D14); /* movss */
    PUSH32(esp, 0);
    PUSH32(esp, 0);
    PUSH32(esp, 0);
    esp = esp - 0xC;
    xmm1 = xmm1 * xmm0; /* mulss */
    MEMF(esp + 8) = xmm1; /* movss */
    xmm1 = MEMF(esp + 0x20); /* movss */
    xmm1 = xmm1 * xmm0; /* mulss */
    MEMF(esp + 4) = xmm1; /* movss */
    xmm1 = MEMF(esp + 0x1C); /* movss */
    xmm1 = xmm1 * xmm0; /* mulss */
    MEMF(esp) = xmm1; /* movss */
    PUSH32(esp, 0x3F800000);
    PUSH32(esp, 0x3F800000);
    PUSH32(esp, eax);
    PUSH32(esp, 0); sub_003E2E60(); /* call 0x003E2E60 */

loc_0029C032: ;
    esp = esp + 0x24;
    esp += 4; return; /* ret */

}

/**
 * sub_0029C040
 * Original: 0x0029C040 - 0x0029C1A7 (359 bytes, 90 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0029C040(void)
{
    float xmm0, xmm1, xmm2, xmm3, xmm4, xmm5, xmm6, xmm7;
    double _fp_stack[8];
    int _fp_top = 0;
    #define fp_push(v) (_fp_stack[--_fp_top & 7] = (v))
    #define fp_pop() (_fp_top++)
    #define fp_popp() (fp_pop())
    #define fp_top() _fp_stack[_fp_top & 7]
    #define fp_st1() _fp_stack[(_fp_top + 1) & 7]

loc_0029C040: ;
    esp = esp - 0xC;
    xmm0 = xmm2; /* movaps */
    xmm0 = xmm0 * xmm2; /* mulss */
    xmm1 = xmm3; /* movaps */
    xmm1 = xmm1 * xmm3; /* mulss */
    xmm0 = xmm0 + xmm1; /* addss */
    xmm1 = xmm5; /* movaps */
    PUSH32(esp, esi);
    xmm1 = xmm1 * xmm5; /* mulss */
    xmm0 = xmm0 + xmm1; /* addss */
    PUSH32(esp, edi);
    MEMF(esp + 0xC) = xmm0; /* movss */
    xmm0 = sqrtf(MEMF(esp + 0xC)); /* sqrtss */
    MEMF(esp + 8) = xmm0; /* movss */
    fp_push(MEMF(0x75E9A4)); /* fld float */
    fp_st1() *= fp_top(); fp_pop(); /* fmul */
    xmm0 = MEMF(0x648D14); /* movss */
    xmm1 = xmm0; /* movaps */
    xmm1 = xmm1 / MEMF(esp + 8); /* divss */
    /* fld st(0) */
    xmm4 = xmm1; /* movaps */
    /* FPU: fsin  */
    xmm4 = xmm4 * xmm2; /* mulss */
    xmm2 = xmm1; /* movaps */
    xmm2 = xmm2 * xmm3; /* mulss */
    xmm1 = xmm1 * xmm5; /* mulss */
    xmm3 = xmm0; /* movaps */
    xmm6 = xmm0; /* movaps */
    ecx = 0x10;
    esi = 0x5A0350;
    edi = eax;
    memcpy((void*)XBOX_PTR(edi), (void*)XBOX_PTR(esi), ecx * 4);
    esi += ecx * 4; edi += ecx * 4; ecx = 0; /* rep movsd */
    MEMF(esp + 0x10) = (float)fp_top(); fp_popp(); /* fstp */
    /* FPU: fcos  */
    MEMF(esp + 0x18) = (float)fp_top(); fp_popp(); /* fstp */
    xmm3 = xmm3 - MEMF(esp + 0x18); /* subss */
    xmm5 = xmm3; /* movaps */
    xmm3 = xmm3 * xmm2; /* mulss */
    xmm3 = xmm3 * xmm1; /* mulss */
    MEMF(esp + 0xC) = xmm3; /* movss */
    xmm3 = xmm4; /* movaps */
    xmm3 = xmm3 * xmm4; /* mulss */
    xmm6 = xmm6 - xmm3; /* subss */
    xmm6 = xmm6 * MEMF(esp + 0x18); /* mulss */
    xmm6 = xmm6 + xmm3; /* addss */
    xmm5 = xmm5 * xmm4; /* mulss */
    MEMF(eax) = xmm6; /* movss */
    MEMF(esp + 8) = xmm3; /* movss */
    xmm3 = MEMF(esp + 0x10); /* movss */
    xmm6 = xmm3; /* movaps */
    xmm6 = xmm6 * xmm4; /* mulss */
    xmm4 = MEMF(esp + 0xC); /* movss */
    xmm4 = xmm4 - xmm6; /* subss */
    xmm6 = xmm6 + MEMF(esp + 0xC); /* addss */
    MEMF(eax + 0x24) = xmm4; /* movss */
    xmm4 = xmm2; /* movaps */
    xmm4 = xmm4 * xmm2; /* mulss */
    MEMF(eax + 0x18) = xmm6; /* movss */
    xmm6 = xmm0; /* movaps */
    xmm6 = xmm6 - xmm4; /* subss */
    xmm6 = xmm6 * MEMF(esp + 0x18); /* mulss */
    xmm6 = xmm6 + xmm4; /* addss */
    xmm7 = xmm5; /* movaps */
    xmm7 = xmm7 * xmm2; /* mulss */
    MEMF(esp + 8) = xmm4; /* movss */
    xmm4 = xmm3; /* movaps */
    xmm4 = xmm4 * xmm2; /* mulss */
    xmm5 = xmm5 * xmm1; /* mulss */
    xmm2 = xmm4; /* movaps */
    xmm2 = xmm2 + xmm5; /* addss */
    MEMF(eax + 0x20) = xmm2; /* movss */
    xmm2 = xmm1; /* movaps */
    xmm2 = xmm2 * xmm1; /* mulss */
    xmm0 = xmm0 - xmm2; /* subss */
    xmm0 = xmm0 * MEMF(esp + 0x18); /* mulss */
    xmm0 = xmm0 + xmm2; /* addss */
    xmm5 = xmm5 - xmm4; /* subss */
    MEMF(eax + 0x28) = xmm0; /* movss */
    MEMF(eax + 0x14) = xmm6; /* movss */
    MEMF(eax + 8) = xmm5; /* movss */
    xmm3 = xmm3 * xmm1; /* mulss */
    xmm0 = xmm7; /* movaps */
    xmm0 = xmm0 - xmm3; /* subss */
    POP32(esp, edi);
    xmm3 = xmm3 + xmm7; /* addss */
    MEMF(eax + 0x10) = xmm0; /* movss */
    MEMF(eax + 4) = xmm3; /* movss */
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
 * sub_0029C1B0
 * Original: 0x0029C1B0 - 0x0029C20F (95 bytes, 23 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0029C1B0(void)
{
    float xmm0;

loc_0029C1B0: ;
    esp = esp - 0x18;
    PUSH32(esp, eax);
    MEMF(esp + 4) = xmm0; /* movss */
    xmm0 = MEMF(esp + 0x20); /* movss */
    ecx = esp + 4;
    PUSH32(esp, ecx);
    edx = esp + 0x14;
    MEMF(esp + 0xC) = xmm0; /* movss */
    xmm0 = MEMF(esp + 0x28); /* movss */
    PUSH32(esp, edx);
    MEMF(esp + 0x14) = xmm0; /* movss */
    PUSH32(esp, 0); sub_00428393(); /* call 0x00428393 */

loc_0029C1E1: ;
    xmm0 = MEMF(esp + 0xC); /* movss */
    eax = MEM32(esp + 0x24);
    ecx = MEM32(esp + 0x28);
    edx = MEM32(esp + 0x2C);
    MEMF(eax) = xmm0; /* movss */
    xmm0 = MEMF(esp + 0x10); /* movss */
    MEMF(ecx) = xmm0; /* movss */
    xmm0 = MEMF(esp + 0x14); /* movss */
    MEMF(edx) = xmm0; /* movss */
    esp = esp + 0x18;
    esp += 4; return; /* ret */

}

/**
 * sub_0029C210
 * Original: 0x0029C210 - 0x0029C2C8 (184 bytes, 44 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0029C210(void)
{
    float xmm0, xmm1, xmm2, xmm3, xmm4;

loc_0029C210: ;
    esp = esp - 0x20;
    MEMF(esp) = xmm0; /* movss */
    xmm0 = MEMF(esp + 0x28); /* movss */
    MEMF(esp + 4) = xmm0; /* movss */
    xmm0 = MEMF(esp + 0x2C); /* movss */
    MEMF(esp + 8) = xmm0; /* movss */
    xmm0 = MEMF(0x648D14); /* movss */
    eax = esp;
    ecx = esp + 0x10;
    MEMF(esp + 0xC) = xmm0; /* movss */
    MEM32(esp + 0x2C) = eax;
    MEM32(esp + 0x28) = ecx;
    eax = MEM32(esp + 0x2C);
    xmm2 = MEMF(eax); /* movups */
    eax = MEM32(esp + 0x24);
    xmm1 = xmm2; /* movaps */
    /* shufps xmm2, xmm2, 0 */
    /* mulps: xmm2 *= MEMF(eax) (packed 4xfloat) */
    xmm3 = xmm1; /* movaps */
    /* shufps xmm1, xmm1, 0x55 */
    /* mulps: xmm1 *= MEMF(eax + 0x10) (packed 4xfloat) */
    xmm4 = xmm3; /* movaps */
    /* shufps xmm3, xmm3, 0xaa */
    /* mulps: xmm3 *= MEMF(eax + 0x20) (packed 4xfloat) */
    /* shufps xmm4, xmm4, 0xff */
    /* mulps: xmm4 *= MEMF(eax + 0x30) (packed 4xfloat) */
    eax = MEM32(esp + 0x28);
    /* addps: xmm2 += xmm1 (packed 4xfloat) */
    /* addps: xmm2 += xmm3 (packed 4xfloat) */
    /* addps: xmm2 += xmm4 (packed 4xfloat) */
    MEMF(eax) = xmm2; /* movups */
    xmm0 = MEMF(esp + 0x10); /* movss */
    eax = MEM32(esp + 0x30);
    ecx = MEM32(esp + 0x34);
    MEMF(edx) = xmm0; /* movss */
    xmm0 = MEMF(esp + 0x14); /* movss */
    edx = MEM32(esp + 0x38);
    MEMF(eax) = xmm0; /* movss */
    xmm0 = MEMF(esp + 0x18); /* movss */
    MEMF(ecx) = xmm0; /* movss */
    xmm0 = MEMF(esp + 0x1C); /* movss */
    MEMF(edx) = xmm0; /* movss */
    esp = esp + 0x20;
    esp += 4; return; /* ret */

}

/**
 * sub_0029C2D0
 * Original: 0x0029C2D0 - 0x0029C36A (154 bytes, 43 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0029C2D0(void)
{
    uint32_t ebp;
    float xmm0, xmm1, xmm2, xmm3, xmm4;
    double _fp_stack[8];
    int _fp_top = 0;
    #define fp_push(v) (_fp_stack[--_fp_top & 7] = (v))
    #define fp_pop() (_fp_top++)
    #define fp_popp() (fp_pop())
    #define fp_top() _fp_stack[_fp_top & 7]
    #define fp_st1() _fp_stack[(_fp_top + 1) & 7]
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_0029C2D0: ;
    fp_push(MEMF(esp + 4)); /* fld float */
    PUSH32(esp, esi);
    fp_st1() *= fp_top(); fp_pop(); /* fmul */
    xmm2 = xmm0; /* movaps */
    xmm1 = xmm0; /* movaps */
    PUSH32(esp, edi);
    fp_st1() *= fp_top(); fp_pop(); /* fmul */
    xmm0 = xmm0 * xmm3; /* mulss */
    xmm2 = xmm2 + xmm3; /* addss */
    xmm1 = xmm1 - xmm3; /* subss */
    /* fld st(0) */
    xmm3 = MEMF(0x648CE0); /* movss */
    /* FPU: fcos  */
    edi = eax;
    ecx = 0x10;
    esi = 0x5A0350;
    memcpy((void*)XBOX_PTR(edi), (void*)XBOX_PTR(esi), ecx * 4);
    esi += ecx * 4; edi += ecx * 4; ecx = 0; /* rep movsd */
    xmm0 = xmm0 * xmm3; /* mulss */
    xmm0 = xmm0 / xmm1; /* divss */
    xmm4 = xmm2; /* movaps */
    xmm4 = xmm4 / xmm1; /* divss */
    MEMF(eax + 0x38) = xmm0; /* movss */
    xmm0 = 0.0f; /* xorps self = zero */
    MEMF(eax + 0x28) = xmm4; /* movss */
    xmm4 = MEMF(0x648D34); /* movss */
    MEMF(eax + 0x3C) = xmm0; /* movss */
    xmm0 = MEMF(esp + 0x14); /* movss */
    POP32(esp, edi);
    MEMF(eax + 0x2C) = xmm4; /* movss */
    MEMF(esp + 8) = xmm2; /* movss */
    eax = eax + 8;
    ecx = 4;
    POP32(esp, esi);
    { double _t = fp_top(); fp_top() = fp_st1(); fp_st1() = _t; } /* fxch */
    /* FPU: fsin  */
    { double _t = fp_top(); fp_top() = fp_st1(); fp_st1() = _t; } /* fxch */
    { double _t = fp_top(); fp_top() = fp_st1(); fp_st1() = _t; } /* fxch */
    fp_st1() /= fp_top(); fp_pop(); /* fdivp */
    fp_push(MEMF(esp + 8)); /* fld float */
    /* FPU: fdivr st(1) */
    MEMF(eax + -8) = (float)fp_top(); fp_popp(); /* fstp */
    MEMF(eax + 0xC) = (float)fp_top(); fp_popp(); /* fstp */
    g_seh_ebp = ebp; sub_0029C370(); return; /* tail jmp 0x0029C370 */

    #undef fp_push
    #undef fp_pop
    #undef fp_popp
    #undef fp_top
    #undef fp_st1
}

/**
 * sub_0029C3E0
 * Original: 0x0029C3E0 - 0x0029C5E1 (513 bytes, 116 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0029C3E0(void)
{
    float xmm0, xmm1, xmm2, xmm3, xmm4, xmm5, xmm6, xmm7;

loc_0029C3E0: ;
    esp = esp - 0xC;
    xmm2 = xmm2 - MEMF(esp + 0x14); /* subss */
    xmm3 = xmm3 - MEMF(esp + 0x18); /* subss */
    xmm1 = xmm1 - MEMF(esp + 0x10); /* subss */
    xmm0 = xmm3; /* movaps */
    xmm0 = xmm0 * xmm3; /* mulss */
    xmm4 = xmm2; /* movaps */
    xmm4 = xmm4 * xmm2; /* mulss */
    xmm0 = xmm0 + xmm4; /* addss */
    xmm4 = xmm1; /* movaps */
    xmm4 = xmm4 * xmm1; /* mulss */
    xmm0 = xmm0 + xmm4; /* addss */
    MEMF(esp) = xmm0; /* movss */
    xmm0 = sqrtf(MEMF(esp)); /* sqrtss */
    MEMF(esp + 4) = xmm0; /* movss */
    xmm0 = MEMF(0x648D34); /* movss */
    xmm0 = xmm0 / MEMF(esp + 4); /* divss */
    xmm4 = xmm0; /* movaps */
    xmm5 = xmm0; /* movaps */
    xmm0 = xmm0 * xmm3; /* mulss */
    xmm3 = MEMF(esp + 0x20); /* movss */
    xmm7 = xmm0; /* movaps */
    xmm0 = MEMF(esp + 0x1C); /* movss */
    xmm5 = xmm5 * xmm2; /* mulss */
    xmm4 = xmm4 * xmm1; /* mulss */
    xmm1 = xmm7; /* movaps */
    xmm1 = xmm1 * xmm0; /* mulss */
    xmm2 = xmm5; /* movaps */
    xmm2 = xmm2 * xmm3; /* mulss */
    xmm1 = xmm1 - xmm2; /* subss */
    xmm2 = xmm4; /* movaps */
    xmm2 = xmm2 * xmm3; /* mulss */
    xmm3 = xmm7; /* movaps */
    xmm3 = xmm3 * xmm6; /* mulss */
    xmm2 = xmm2 - xmm3; /* subss */
    xmm3 = xmm5; /* movaps */
    xmm3 = xmm3 * xmm6; /* mulss */
    xmm6 = xmm4; /* movaps */
    xmm6 = xmm6 * xmm0; /* mulss */
    xmm3 = xmm3 - xmm6; /* subss */
    xmm0 = xmm3; /* movaps */
    xmm0 = xmm0 * xmm3; /* mulss */
    xmm6 = xmm2; /* movaps */
    xmm6 = xmm6 * xmm2; /* mulss */
    xmm0 = xmm0 + xmm6; /* addss */
    xmm6 = xmm1; /* movaps */
    xmm6 = xmm6 * xmm1; /* mulss */
    xmm0 = xmm0 + xmm6; /* addss */
    MEMF(esp + 0x1C) = xmm0; /* movss */
    xmm0 = sqrtf(MEMF(esp + 0x1C)); /* sqrtss */
    MEMF(esp + 0x20) = xmm0; /* movss */
    xmm6 = MEMF(0x648D14); /* movss */
    xmm6 = xmm6 / MEMF(esp + 0x20); /* divss */
    xmm1 = xmm1 * xmm6; /* mulss */
    xmm3 = xmm3 * xmm6; /* mulss */
    xmm0 = xmm1; /* movaps */
    xmm2 = xmm2 * xmm6; /* mulss */
    xmm6 = xmm3; /* movaps */
    xmm1 = xmm2; /* movaps */
    xmm1 = xmm1 * xmm7; /* mulss */
    MEMF(esp + 4) = xmm0; /* movss */
    MEMF(esp + 8) = xmm3; /* movss */
    xmm3 = xmm3 * xmm4; /* mulss */
    xmm6 = xmm6 * xmm5; /* mulss */
    xmm6 = xmm6 - xmm1; /* subss */
    xmm1 = xmm0; /* movaps */
    xmm0 = xmm0 * xmm5; /* mulss */
    MEMF(esp) = xmm2; /* movss */
    xmm1 = xmm1 * xmm7; /* mulss */
    xmm1 = xmm1 - xmm3; /* subss */
    xmm2 = xmm2 * xmm4; /* mulss */
    xmm2 = xmm2 - xmm0; /* subss */
    xmm0 = xmm6; /* movaps */
    xmm0 = xmm0 * xmm6; /* mulss */
    xmm3 = xmm1; /* movaps */
    xmm3 = xmm3 * xmm1; /* mulss */
    xmm0 = xmm0 + xmm3; /* addss */
    xmm3 = xmm2; /* movaps */
    xmm3 = xmm3 * xmm2; /* mulss */
    xmm0 = xmm0 + xmm3; /* addss */
    MEMF(esp + 0x1C) = xmm0; /* movss */
    xmm0 = sqrtf(MEMF(esp + 0x1C)); /* sqrtss */
    MEMF(esp + 0x20) = xmm0; /* movss */
    xmm0 = MEMF(0x648D14); /* movss */
    xmm0 = xmm0 / MEMF(esp + 0x20); /* divss */
    xmm3 = MEMF(esp + 4); /* movss */
    MEMF(eax) = xmm3; /* movss */
    xmm3 = xmm0; /* movaps */
    xmm3 = xmm3 * xmm6; /* mulss */
    MEMF(eax + 0x10) = xmm3; /* movss */
    xmm3 = MEMF(esp + 0x10); /* movss */
    MEMF(eax + 0x30) = xmm3; /* movss */
    xmm3 = MEMF(esp); /* movss */
    MEMF(eax + 4) = xmm3; /* movss */
    xmm3 = xmm0; /* movaps */
    xmm0 = xmm0 * xmm2; /* mulss */
    MEMF(eax + 0x18) = xmm0; /* movss */
    xmm0 = MEMF(esp + 0x18); /* movss */
    xmm3 = xmm3 * xmm1; /* mulss */
    xmm1 = MEMF(esp + 0x14); /* movss */
    MEMF(eax + 0x38) = xmm0; /* movss */
    xmm0 = 0.0f; /* xorps self = zero */
    MEMF(eax + 0x34) = xmm1; /* movss */
    xmm1 = MEMF(esp + 8); /* movss */
    MEMF(eax + 0xC) = xmm0; /* movss */
    MEMF(eax + 0x1C) = xmm0; /* movss */
    MEMF(eax + 0x2C) = xmm0; /* movss */
    xmm0 = MEMF(0x648D14); /* movss */
    MEMF(eax + 0x20) = xmm4; /* movss */
    MEMF(eax + 0x14) = xmm3; /* movss */
    MEMF(eax + 0x24) = xmm5; /* movss */
    MEMF(eax + 8) = xmm1; /* movss */
    MEMF(eax + 0x28) = xmm7; /* movss */
    MEMF(eax + 0x3C) = xmm0; /* movss */
    esp = esp + 0xC;
    esp += 4; return; /* ret */

}

/**
 * sub_0029C5F0
 * Original: 0x0029C5F0 - 0x0029C641 (81 bytes, 33 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0029C5F0(void)
{
    uint32_t ebp;

loc_0029C5F0: ;
    PUSH32(esp, ebp);
    ebp = esp;
    esp = esp & 0xFFFFFFF0u;
    esp = esp - 0x80;
    eax = MEM32(ebp + 0x10);
    ecx = MEM32(ebp + 0xC);
    PUSH32(esp, eax);
    eax = MEM32(ebp + 8);
    PUSH32(esp, ecx);
    PUSH32(esp, eax);
    eax = esp + 0xC;
    PUSH32(esp, 0); sub_0042889D(); /* call 0x0042889D */

loc_0029C611: ;
    ecx = MEM32(ebp + 0x1C);
    eax = MEM32(ebp + 0x18);
    PUSH32(esp, ecx);
    ecx = MEM32(ebp + 0x14);
    PUSH32(esp, eax);
    PUSH32(esp, ecx);
    eax = esp + 0x4C;
    PUSH32(esp, 0); sub_004288F5(); /* call 0x004288F5 */

loc_0029C626: ;
    eax = esp;
    PUSH32(esp, eax);
    PUSH32(esp, edx);
    PUSH32(esp, edx);
    PUSH32(esp, 0); sub_0042841D(); /* call 0x0042841D */

loc_0029C631: ;
    ecx = esp + 0x40;
    PUSH32(esp, ecx);
    PUSH32(esp, edx);
    PUSH32(esp, edx);
    PUSH32(esp, 0); sub_0042841D(); /* call 0x0042841D */

loc_0029C63D: ;
    esp = ebp;
    POP32(esp, ebp);
    esp += 4; return; /* ret */

}

/**
 * sub_0029C650
 * Original: 0x0029C650 - 0x0029C843 (499 bytes, 108 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0029C650(void)
{
    float xmm0, xmm1, xmm5;

loc_0029C650: ;
    esp = esp - 0xC;
    xmm0 = MEMF(0x648E18); /* movss */
    xmm5 = MEMF(0x648D14); /* movss */
    PUSH32(esp, 0);
    PUSH32(esp, 0);
    PUSH32(esp, 0);
    esp = esp - 0xC;
    xmm1 = xmm1 * xmm0; /* mulss */
    MEMF(esp + 8) = xmm1; /* movss */
    xmm1 = MEMF(esp + 0x2C); /* movss */
    xmm1 = xmm1 * xmm0; /* mulss */
    MEMF(esp + 4) = xmm1; /* movss */
    xmm1 = MEMF(esp + 0x28); /* movss */
    xmm1 = xmm1 * xmm0; /* mulss */
    MEMF(esp) = xmm1; /* movss */
    PUSH32(esp, 0x3F800000);
    PUSH32(esp, 0x3F800000);
    PUSH32(esp, esi);
    PUSH32(esp, 0); sub_003E2E60(); /* call 0x003E2E60 */

loc_0029C6A5: ;
    xmm0 = MEMF(esp + 0x48); /* movss */
    MEMF(esi + 0x30) = xmm0; /* movss */
    xmm0 = MEMF(esp + 0x4C); /* movss */
    MEMF(esi + 0x34) = xmm0; /* movss */
    xmm0 = MEMF(esp + 0x50); /* movss */
    MEMF(esi + 0x38) = xmm0; /* movss */
    xmm0 = MEMF(esi); /* movss */
    MEMF(esp + 0x24) = xmm0; /* movss */
    xmm0 = MEMF(esi + 4); /* movss */
    MEMF(esp + 0x28) = xmm0; /* movss */
    xmm0 = MEMF(esi + 8); /* movss */
    eax = esp + 0x24;
    MEMF(esp + 0x2C) = xmm0; /* movss */
    xmm0 = MEMF(esp + 0x3C); /* movss */
    ecx = eax;
    esp = esp + 0x24;
    MEMF(esp + 0x24) = xmm0; /* movss */
    MEM32(esp + 0x10) = eax;
    MEM32(esp + 0x14) = ecx;
    xmm0 = MEMF(esp + 0x24); /* movss */
    /* shufps xmm0, xmm0, 0 */
    edx = MEM32(esp + 0x10);
    xmm1 = MEMF(edx); /* movss */
    xmm1 = MEMD(edx + 4); /* movhps */
    /* mulps: xmm0 *= xmm1 (packed 4xfloat) */
    eax = MEM32(esp + 0x14);
    MEMF(eax) = xmm0; /* movss */
    MEMD(eax + 4) = xmm0; /* movhps */
    xmm0 = MEMF(esp); /* movss */
    MEMF(esi) = xmm0; /* movss */
    xmm0 = MEMF(esp + 4); /* movss */
    MEMF(esi + 4) = xmm0; /* movss */
    xmm0 = MEMF(esp + 8); /* movss */
    MEMF(esi + 8) = xmm0; /* movss */
    xmm0 = MEMF(esi + 0x10); /* movss */
    MEMF(esp) = xmm0; /* movss */
    xmm0 = MEMF(esi + 0x14); /* movss */
    MEMF(esp + 4) = xmm0; /* movss */
    xmm0 = MEMF(esi + 0x18); /* movss */
    MEMF(esp + 8) = xmm0; /* movss */
    xmm0 = MEMF(esp + 0x1C); /* movss */
    edx = ecx;
    eax = ecx;
    MEMF(esp + 0x24) = xmm0; /* movss */
    MEM32(esp + 0x10) = edx;
    MEM32(esp + 0x14) = eax;
    xmm0 = MEMF(esp + 0x24); /* movss */
    /* shufps xmm0, xmm0, 0 */
    edx = MEM32(esp + 0x10);
    xmm1 = MEMF(edx); /* movss */
    xmm1 = MEMD(edx + 4); /* movhps */
    /* mulps: xmm0 *= xmm1 (packed 4xfloat) */
    eax = MEM32(esp + 0x14);
    MEMF(eax) = xmm0; /* movss */
    MEMD(eax + 4) = xmm0; /* movhps */
    xmm0 = MEMF(esp); /* movss */
    MEMF(esi + 0x10) = xmm0; /* movss */
    xmm0 = MEMF(esp + 4); /* movss */
    MEMF(esi + 0x14) = xmm0; /* movss */
    xmm0 = MEMF(esp + 8); /* movss */
    MEMF(esi + 0x18) = xmm0; /* movss */
    xmm0 = MEMF(esi + 0x20); /* movss */
    MEMF(esp) = xmm0; /* movss */
    xmm0 = MEMF(esi + 0x24); /* movss */
    MEMF(esp + 4) = xmm0; /* movss */
    xmm0 = MEMF(esi + 0x28); /* movss */
    MEMF(esp + 8) = xmm0; /* movss */
    xmm0 = MEMF(esp + 0x20); /* movss */
    edx = ecx;
    MEMF(esp + 0x24) = xmm0; /* movss */
    MEM32(esp + 0x10) = ecx;
    MEM32(esp + 0x14) = edx;
    xmm0 = MEMF(esp + 0x24); /* movss */
    /* shufps xmm0, xmm0, 0 */
    edx = MEM32(esp + 0x10);
    xmm1 = MEMF(edx); /* movss */
    xmm1 = MEMD(edx + 4); /* movhps */
    /* mulps: xmm0 *= xmm1 (packed 4xfloat) */
    eax = MEM32(esp + 0x14);
    MEMF(eax) = xmm0; /* movss */
    MEMD(eax + 4) = xmm0; /* movhps */
    xmm0 = MEMF(esp); /* movss */
    MEMF(esi + 0x20) = xmm0; /* movss */
    xmm0 = MEMF(esp + 4); /* movss */
    MEMF(esi + 0x24) = xmm0; /* movss */
    xmm0 = MEMF(esp + 8); /* movss */
    MEMF(esi + 0x28) = xmm0; /* movss */
    esp = esp + 0xC;
    esp += 4; return; /* ret */

}

/**
 * sub_0029C850
 * Original: 0x0029C850 - 0x0029C94D (253 bytes, 61 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0029C850(void)
{
    int _flags = 0; /* fallback flag var */
    float xmm0, xmm1, xmm2, xmm3, xmm4, xmm5, xmm6, xmm7;

loc_0029C850: ;
    xmm4 = MEMF(0x648CE0); /* movss */
    xmm3 = MEMF(esp + 8); /* movss */
    xmm5 = MEMF(esp + 0x10); /* movss */
    xmm7 = MEMF(0x648D74); /* movss */
    PUSH32(esp, esi);
    PUSH32(esp, edi);
    xmm2 = xmm4; /* movaps */
    xmm1 = xmm6; /* movaps */
    xmm1 = xmm1 - xmm0; /* subss */
    xmm2 = xmm2 / xmm1; /* divss */
    xmm0 = xmm0 + xmm6; /* addss */
    edi = eax;
    xmm0 = xmm0 / xmm1; /* divss */
    xmm1 = 0.0f; /* xorps self = zero */
    ecx = 0x10;
    esi = 0x5A0350;
    memcpy((void*)XBOX_PTR(edi), (void*)XBOX_PTR(esi), ecx * 4);
    esi += ecx * 4; edi += ecx * 4; ecx = 0; /* rep movsd */
    MEMF(eax) = xmm2; /* movss */
    xmm2 = MEMF(esp + 0xC); /* movss */
    xmm3 = xmm3 - xmm2; /* subss */
    xmm2 = xmm2 + MEMF(esp + 0x10); /* addss */
    xmm4 = xmm4 / xmm3; /* divss */
    MEMF(eax + 0x14) = xmm4; /* movss */
    xmm4 = MEMF(esp + 0x14); /* movss */
    xmm6 = xmm1; /* movaps */
    xmm6 = xmm6 - xmm0; /* subss */
    xmm5 = xmm5 - xmm4; /* subss */
    xmm4 = xmm4 + MEMF(esp + 0x18); /* addss */
    xmm0 = xmm1; /* movaps */
    xmm2 = xmm2 / xmm3; /* divss */
    xmm0 = xmm0 - xmm2; /* subss */
    MEMF(eax + 0x34) = xmm0; /* movss */
    xmm0 = MEMF(0x648D14); /* movss */
    xmm4 = xmm4 / xmm5; /* divss */
    xmm7 = xmm7 / xmm5; /* divss */
    xmm1 = xmm1 - xmm4; /* subss */
    MEMF(eax + 0x3C) = xmm0; /* movss */
    xmm0 = MEMF(esp + 0x1C); /* movss */
    POP32(esp, edi);
    MEMF(eax + 0x28) = xmm7; /* movss */
    MEMF(eax + 0x30) = xmm6; /* movss */
    MEMF(eax + 0x38) = xmm1; /* movss */
    eax = eax + 8;
    ecx = 4;
    POP32(esp, esi);

loc_0029C911: ;
    xmm1 = MEMF(eax + -8); /* movss */
    xmm1 = xmm1 * xmm0; /* mulss */
    MEMF(eax + -8) = xmm1; /* movss */
    xmm1 = MEMF(eax + -4); /* movss */
    xmm1 = xmm1 * xmm0; /* mulss */
    MEMF(eax + -4) = xmm1; /* movss */
    xmm1 = MEMF(eax); /* movss */
    xmm1 = xmm1 * xmm0; /* mulss */
    MEMF(eax) = xmm1; /* movss */
    xmm1 = xmm0; /* movaps */
    xmm1 = xmm1 * MEMF(eax + 4); /* mulss */
    MEMF(eax + 4) = xmm1; /* movss */
    eax = eax + 0x10;
    ecx--;
    if ((ecx != 0)) goto loc_0029C911; /* jne: not equal / not zero */

loc_0029C94C: ;
    esp += 4; return; /* ret */

}

/**
 * sub_0029C950
 * Original: 0x0029C950 - 0x0029CBEF (671 bytes, 152 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0029C950(void)
{
    float xmm0, xmm1, xmm2, xmm3, xmm4, xmm5, xmm6, xmm7;

loc_0029C950: ;
    esp = esp - 0xC;
    xmm4 = xmm4 - MEMF(esp + 0x14); /* subss */
    xmm5 = xmm5 - MEMF(esp + 0x18); /* subss */
    xmm2 = xmm2 - MEMF(esp + 0x10); /* subss */
    PUSH32(esp, esi);
    xmm0 = xmm5; /* movaps */
    xmm0 = xmm0 * xmm5; /* mulss */
    xmm1 = xmm4; /* movaps */
    xmm1 = xmm1 * xmm4; /* mulss */
    xmm0 = xmm0 + xmm1; /* addss */
    PUSH32(esp, edi);
    xmm1 = xmm2; /* movaps */
    ecx = 0x10;
    esi = 0x5A0350;
    edi = eax;
    xmm1 = xmm1 * xmm2; /* mulss */
    xmm0 = xmm0 + xmm1; /* addss */
    memcpy((void*)XBOX_PTR(edi), (void*)XBOX_PTR(esi), ecx * 4);
    esi += ecx * 4; edi += ecx * 4; ecx = 0; /* rep movsd */
    MEMF(esp + 8) = xmm0; /* movss */
    xmm0 = sqrtf(MEMF(esp + 8)); /* sqrtss */
    MEMF(esp + 0xC) = xmm0; /* movss */
    xmm3 = MEMF(0x648D34); /* movss */
    xmm3 = xmm3 / MEMF(esp + 0xC); /* divss */
    xmm0 = MEMF(esp + 0x28); /* movss */
    xmm6 = MEMF(esp + 0x2C); /* movss */
    xmm7 = MEMF(esp + 0x24); /* movss */
    xmm1 = xmm3; /* movaps */
    xmm1 = xmm1 * xmm2; /* mulss */
    xmm2 = xmm3; /* movaps */
    xmm3 = xmm3 * xmm5; /* mulss */
    xmm2 = xmm2 * xmm4; /* mulss */
    xmm4 = xmm3; /* movaps */
    xmm4 = xmm4 * xmm0; /* mulss */
    xmm5 = xmm2; /* movaps */
    xmm5 = xmm5 * xmm6; /* mulss */
    xmm4 = xmm4 - xmm5; /* subss */
    xmm5 = xmm1; /* movaps */
    xmm5 = xmm5 * xmm6; /* mulss */
    xmm6 = xmm3; /* movaps */
    xmm6 = xmm6 * xmm7; /* mulss */
    xmm5 = xmm5 - xmm6; /* subss */
    xmm6 = xmm2; /* movaps */
    xmm6 = xmm6 * xmm7; /* mulss */
    xmm7 = xmm1; /* movaps */
    xmm7 = xmm7 * xmm0; /* mulss */
    xmm6 = xmm6 - xmm7; /* subss */
    xmm0 = xmm6; /* movaps */
    xmm0 = xmm0 * xmm6; /* mulss */
    xmm7 = xmm5; /* movaps */
    xmm7 = xmm7 * xmm5; /* mulss */
    xmm0 = xmm0 + xmm7; /* addss */
    xmm7 = xmm4; /* movaps */
    xmm7 = xmm7 * xmm4; /* mulss */
    xmm0 = xmm0 + xmm7; /* addss */
    MEMF(esp + 0xC) = xmm0; /* movss */
    xmm0 = sqrtf(MEMF(esp + 0xC)); /* sqrtss */
    MEMF(esp + 8) = xmm0; /* movss */
    xmm0 = MEMF(0x648D14); /* movss */
    xmm0 = xmm0 / MEMF(esp + 8); /* divss */
    xmm6 = xmm6 * xmm0; /* mulss */
    xmm4 = xmm4 * xmm0; /* mulss */
    xmm5 = xmm5 * xmm0; /* mulss */
    xmm0 = xmm6; /* movaps */
    MEMF(esp + 0x10) = xmm6; /* movss */
    xmm6 = xmm6 * xmm1; /* mulss */
    xmm0 = xmm0 * xmm2; /* mulss */
    xmm7 = xmm5; /* movaps */
    xmm7 = xmm7 * xmm3; /* mulss */
    xmm0 = xmm0 - xmm7; /* subss */
    xmm7 = xmm4; /* movaps */
    xmm7 = xmm7 * xmm3; /* mulss */
    xmm7 = xmm7 - xmm6; /* subss */
    MEMF(esp + 0x28) = xmm7; /* movss */
    xmm6 = xmm5; /* movaps */
    xmm6 = xmm6 * xmm1; /* mulss */
    xmm7 = xmm4; /* movaps */
    xmm7 = xmm7 * xmm2; /* mulss */
    xmm6 = xmm6 - xmm7; /* subss */
    MEMF(esp + 0x2C) = xmm6; /* movss */
    xmm6 = xmm0; /* movaps */
    MEMF(esp + 0x24) = xmm0; /* movss */
    xmm6 = xmm6 * xmm0; /* mulss */
    xmm0 = MEMF(esp + 0x28); /* movss */
    xmm7 = xmm0; /* movaps */
    xmm7 = xmm7 * xmm0; /* mulss */
    xmm0 = MEMF(esp + 0x2C); /* movss */
    xmm6 = xmm6 + xmm7; /* addss */
    xmm7 = xmm0; /* movaps */
    xmm7 = xmm7 * xmm0; /* mulss */
    xmm6 = xmm6 + xmm7; /* addss */
    MEMF(esp + 0xC) = xmm6; /* movss */
    xmm0 = sqrtf(MEMF(esp + 0xC)); /* sqrtss */
    MEMF(esp + 8) = xmm0; /* movss */
    xmm0 = MEMF(0x648D14); /* movss */
    xmm0 = xmm0 / MEMF(esp + 8); /* divss */
    xmm7 = MEMF(esp + 0x10); /* movss */
    xmm6 = xmm0; /* movaps */
    xmm6 = xmm6 * MEMF(esp + 0x24); /* mulss */
    MEMF(eax) = xmm4; /* movss */
    xmm4 = xmm4 * MEMF(esp + 0x18); /* mulss */
    MEMF(esp + 0x24) = xmm6; /* movss */
    xmm6 = xmm0; /* movaps */
    xmm0 = xmm0 * MEMF(esp + 0x2C); /* mulss */
    xmm6 = xmm6 * MEMF(esp + 0x28); /* mulss */
    MEMF(esp + 0x2C) = xmm0; /* movss */
    xmm0 = MEMF(esp + 0x1C); /* movss */
    MEMF(eax + 0x20) = xmm7; /* movss */
    xmm7 = xmm7 * MEMF(esp + 0x20); /* mulss */
    MEMF(eax + 0x10) = xmm5; /* movss */
    xmm5 = xmm5 * xmm0; /* mulss */
    xmm4 = xmm4 + xmm5; /* addss */
    xmm5 = 0.0f; /* xorps self = zero */
    xmm4 = xmm4 + xmm7; /* addss */
    xmm7 = xmm5; /* movaps */
    xmm7 = xmm7 - xmm4; /* subss */
    xmm4 = MEMF(esp + 0x24); /* movss */
    MEMF(eax + 0x30) = xmm7; /* movss */
    xmm7 = MEMF(esp + 0x2C); /* movss */
    MEMF(eax + 4) = xmm4; /* movss */
    MEMF(eax + 0x24) = xmm7; /* movss */
    xmm7 = MEMF(esp + 0x18); /* movss */
    xmm7 = xmm7 * xmm4; /* mulss */
    xmm4 = xmm0; /* movaps */
    xmm4 = xmm4 * xmm6; /* mulss */
    xmm7 = xmm7 + xmm4; /* addss */
    xmm4 = MEMF(esp + 0x20); /* movss */
    xmm4 = xmm4 * MEMF(esp + 0x2C); /* mulss */
    MEMF(eax + 8) = xmm1; /* movss */
    xmm1 = xmm1 * MEMF(esp + 0x18); /* mulss */
    MEMF(eax + 0x18) = xmm2; /* movss */
    xmm2 = xmm2 * xmm0; /* mulss */
    MEMF(eax + 0x28) = xmm3; /* movss */
    xmm3 = xmm3 * MEMF(esp + 0x20); /* mulss */
    xmm1 = xmm1 + xmm2; /* addss */
    xmm7 = xmm7 + xmm4; /* addss */
    xmm1 = xmm1 + xmm3; /* addss */
    xmm0 = xmm5; /* movaps */
    xmm0 = xmm0 - xmm1; /* subss */
    xmm4 = xmm5; /* movaps */
    MEMF(eax + 0x38) = xmm0; /* movss */
    xmm0 = MEMF(0x648D14); /* movss */
    POP32(esp, edi);
    xmm4 = xmm4 - xmm7; /* subss */
    MEMF(eax + 0x14) = xmm6; /* movss */
    MEMF(eax + 0x34) = xmm4; /* movss */
    MEMF(eax + 0xC) = xmm5; /* movss */
    MEMF(eax + 0x1C) = xmm5; /* movss */
    MEMF(eax + 0x2C) = xmm5; /* movss */
    MEMF(eax + 0x3C) = xmm0; /* movss */
    POP32(esp, esi);
    esp = esp + 0xC;
    esp += 4; return; /* ret */

}

/**
 * sub_0029CBF0
 * Original: 0x0029CBF0 - 0x0029CD03 (275 bytes, 72 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0029CBF0(void)
{
    uint32_t ebp;
    float xmm0, xmm1;

loc_0029CBF0: ;
    PUSH32(esp, ebp);
    ebp = esp;
    esp = esp & 0xFFFFFFF0u;
    esp = esp - 0xC0;
    eax = MEM32(ebp + 8);
    PUSH32(esp, eax);
    SET_LO8(eax, 0x78);
    ecx = esp + 0x44;
    PUSH32(esp, 0); sub_003E2640(); /* call 0x003E2640 */

loc_0029CC0B: ;
    ecx = MEM32(ebp + 0xC);
    PUSH32(esp, ecx);
    SET_LO8(eax, 0x79);
    ecx = esp + 0x88;
    PUSH32(esp, 0); sub_003E2640(); /* call 0x003E2640 */

loc_0029CC1D: ;
    edx = MEM32(ebp + 0x10);
    PUSH32(esp, edx);
    SET_LO8(eax, 0x7A);
    ecx = esp + 0xC;
    PUSH32(esp, 0); sub_003E2640(); /* call 0x003E2640 */

loc_0029CC2C: ;
    esp = esp + 0xC;
    eax = esp + 0x40;
    PUSH32(esp, eax);
    PUSH32(esp, ecx);
    PUSH32(esp, esi);
    PUSH32(esp, 0); sub_0042841D(); /* call 0x0042841D */

loc_0029CC3B: ;
    edx = esp + 0x80;
    PUSH32(esp, edx);
    PUSH32(esp, esi);
    PUSH32(esp, esi);
    PUSH32(esp, 0); sub_0042841D(); /* call 0x0042841D */

loc_0029CC4A: ;
    xmm0 = MEMF(ebp + 0x14); /* movss */
    xmm1 = MEMF(esi); /* movss */
    xmm1 = xmm1 * xmm0; /* mulss */
    MEMF(esi) = xmm1; /* movss */
    xmm1 = MEMF(esi + 4); /* movss */
    xmm1 = xmm1 * xmm0; /* mulss */
    MEMF(esi + 4) = xmm1; /* movss */
    xmm1 = MEMF(esi + 8); /* movss */
    xmm1 = xmm1 * xmm0; /* mulss */
    MEMF(esi + 8) = xmm1; /* movss */
    xmm1 = MEMF(esi + 0xC); /* movss */
    xmm1 = xmm1 * xmm0; /* mulss */
    xmm0 = MEMF(ebp + 0x18); /* movss */
    MEMF(esi + 0xC) = xmm1; /* movss */
    xmm1 = MEMF(esi + 0x10); /* movss */
    xmm1 = xmm1 * xmm0; /* mulss */
    MEMF(esi + 0x10) = xmm1; /* movss */
    xmm1 = MEMF(esi + 0x14); /* movss */
    xmm1 = xmm1 * xmm0; /* mulss */
    MEMF(esi + 0x14) = xmm1; /* movss */
    xmm1 = MEMF(esi + 0x18); /* movss */
    xmm1 = xmm1 * xmm0; /* mulss */
    MEMF(esi + 0x18) = xmm1; /* movss */
    xmm1 = MEMF(esi + 0x1C); /* movss */
    xmm1 = xmm1 * xmm0; /* mulss */
    xmm0 = MEMF(ebp + 0x1C); /* movss */
    MEMF(esi + 0x1C) = xmm1; /* movss */
    xmm1 = MEMF(esi + 0x20); /* movss */
    xmm1 = xmm1 * xmm0; /* mulss */
    MEMF(esi + 0x20) = xmm1; /* movss */
    xmm1 = MEMF(esi + 0x24); /* movss */
    xmm1 = xmm1 * xmm0; /* mulss */
    MEMF(esi + 0x24) = xmm1; /* movss */
    xmm1 = MEMF(esi + 0x28); /* movss */
    xmm1 = xmm1 * xmm0; /* mulss */
    MEMF(esi + 0x28) = xmm1; /* movss */
    xmm1 = MEMF(esi + 0x2C); /* movss */
    xmm1 = xmm1 * xmm0; /* mulss */
    MEMF(esi + 0x2C) = xmm1; /* movss */
    esp = ebp;
    POP32(esp, ebp);
    esp += 4; return; /* ret */

}

/**
 * sub_0029CD10
 * Original: 0x0029CD10 - 0x0029CD23 (19 bytes, 7 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0029CD10(void)
{
    int _flags = 0; /* fallback flag var */

loc_0029CD10: ;
    PUSH32(esp, 0x84D458);
    eax = esi;
    PUSH32(esp, 0); sub_00061ED0(); /* call 0x00061ED0 */

loc_0029CD1C: ;
    if (TEST_Z(eax, eax)) { sub_0029CD23(); return; } /* je: equal / zero */

loc_0029CD20: ;
    SET_LO8(eax, 1);
    esp += 4; return; /* ret */

}

/**
 * sub_0029CD50
 * Original: 0x0029CD50 - 0x0029CDC2 (114 bytes, 36 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0029CD50(void)
{
    int _flags = 0; /* fallback flag var */

loc_0029CD50: ;
    SET_LO8(ecx, MEM8(eax + 1));
    esp = esp - 0x128;
    if (CMP_NE(LO8(ecx), 0x3A)) goto loc_0029CD6D; /* jne: not equal / not zero */

loc_0029CD5E: ;
    eax = eax + 3;
    PUSH32(esp, 0x5C);
    PUSH32(esp, eax);
    PUSH32(esp, 0); sub_0046F000(); /* call 0x0046F000 */

loc_0029CD69: ;
    esp = esp + 8;
    eax++;

loc_0029CD6D: ;
    PUSH32(esp, eax);
    PUSH32(esp, 0x780AB8);
    PUSH32(esp, 0x5AC8A0);
    eax = esp + 0x30;
    PUSH32(esp, 0x104);
    PUSH32(esp, eax);
    PUSH32(esp, 0); sub_0046E9AD(); /* call 0x0046E9AD */

loc_0029CD87: ;
    esp = esp + 0x14;
    ecx = esp;
    PUSH32(esp, ecx);
    PUSH32(esp, 0);
    edx = esp + 0x2C;
    PUSH32(esp, edx);
    MEM8(esp + 0x133) = 0;
    PUSH32(esp, 0); sub_0042D1FA(); /* call 0x0042D1FA */

loc_0029CDA2: ;
    if (TEST_Z(eax, eax)) goto loc_0029CDB9; /* je: equal / zero */

loc_0029CDA6: ;
    SET_LO8(eax, MEM8(esp + 0x12C));
    if (TEST_NZ(LO8(eax), LO8(eax))) { sub_0029CDC2(); return; } /* jne: not equal / not zero */

loc_0029CDB1: ;
    eax = MEM32(esp + 0x20);
    if (TEST_NZ(eax, eax)) { sub_0029CDC2(); return; } /* jne: not equal / not zero */

loc_0029CDB9: ;
    SET_LO8(eax, 0); /* xor self */
    esp = esp + 0x128;
    esp += 4; return; /* ret */

}

/**
 * sub_0029CDD0
 * Original: 0x0029CDD0 - 0x0029CE12 (66 bytes, 30 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0029CDD0(void)
{
    int _flags = 0; /* fallback flag var */

loc_0029CDD0: ;
    PUSH32(esp, esi);
    PUSH32(esp, edi);
    edi = eax;
    SET_LO8(eax, MEM8(edi));
    esi = 0; /* xor self */
    if (TEST_Z(LO8(eax), LO8(eax))) goto loc_0029CE0D; /* je: equal / zero */

loc_0029CDDC: ;
    /* nop */

loc_0029CDE0: ;
    eax = ZX8(LO8(eax));
    PUSH32(esp, eax);
    edi++;
    PUSH32(esp, 0); sub_00470624(); /* call 0x00470624 */

loc_0029CDEA: ;
    ecx = ZX8(LO8(eax));
    esi = esi << 4;
    esi = esi + ecx;
    eax = esi;
    esp = esp + 4;
    eax = eax & 0xF0000000u;
    if ((eax == 0)) goto loc_0029CE07; /* je: equal / zero */

loc_0029CDFE: ;
    edx = eax;
    edx = edx >> 0x18;
    edx = edx | eax;
    esi = esi ^ edx;

loc_0029CE07: ;
    SET_LO8(eax, MEM8(edi));
    if (TEST_NZ(LO8(eax), LO8(eax))) goto loc_0029CDE0; /* jne: not equal / not zero */

loc_0029CE0D: ;
    POP32(esp, edi);
    eax = esi;
    POP32(esp, esi);
    esp += 4; return; /* ret */

}

/**
 * sub_0029CE20
 * Original: 0x0029CE20 - 0x0029CE5D (61 bytes, 28 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0029CE20(void)
{
    uint32_t ebp;
    int _flags = 0; /* fallback flag var */
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_0029CE20: ;
    eax = MEM32(edi);
    PUSH32(esp, ebx);
    PUSH32(esp, ebp);
    ebp = MEM32(esp + 0xC);
    PUSH32(esp, esi);
    esi = 0; /* xor self */
    if (CMP_BE(eax & eax, 0)) goto loc_0029CE4F; /* jbe: below or equal (unsigned <=) */

loc_0029CE2F: ;
    ebx = 0; /* xor self */

loc_0029CE31: ;
    eax = MEM32(edi + 4);
    ecx = MEM32(ebx + eax);
    PUSH32(esp, ebp);
    PUSH32(esp, ecx);
    PUSH32(esp, 0); sub_0046F260(); /* call 0x0046F260 */

loc_0029CE3E: ;
    esp = esp + 8;
    if (TEST_NZ(eax, eax)) { sub_0029CE5D(); return; } /* jne: not equal / not zero */

loc_0029CE45: ;
    eax = MEM32(edi);
    esi++;
    ebx = ebx + 0x14;
    if (CMP_B(esi, eax)) goto loc_0029CE31; /* jb: below (unsigned <) */

loc_0029CE4F: ;
    eax = MEM32(esp + 0x14);
    POP32(esp, esi);
    POP32(esp, ebp);
    MEM32(eax) = 0xFFFFFFFFu;
    POP32(esp, ebx);
    esp += 4; return; /* ret */

}

/**
 * sub_0029CE70
 * Original: 0x0029CE70 - 0x0029CEC7 (87 bytes, 39 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0029CE70(void)
{
    uint32_t ebp;
    int _flags = 0; /* fallback flag var */
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_0029CE70: ;
    eax = MEM32(edi);
    PUSH32(esp, ebx);
    PUSH32(esp, ebp);
    ebp = 0; /* xor self */
    (void)0; /* test eax, eax - flags set for next jcc */
    PUSH32(esp, esi);
    if (CMP_BE(eax & eax, 0)) goto loc_0029CEB9; /* jbe: below or equal (unsigned <=) */

loc_0029CE7B: ;
    ebx = 0; /* xor self */
    /* nop */

loc_0029CE80: ;
    eax = MEM32(edi + 4);
    esi = MEM32(esp + 0x10);
    ecx = MEM32(ebx + eax);
    PUSH32(esp, esi);
    PUSH32(esp, ecx);
    PUSH32(esp, 0); sub_0046F260(); /* call 0x0046F260 */

loc_0029CE91: ;
    esp = esp + 8;
    if (TEST_Z(eax, eax)) goto loc_0029CEAF; /* je: equal / zero */

loc_0029CE98: ;
    ecx = esi;
    esi = ecx + 1;
    /* nop */

loc_0029CEA0: ;
    SET_LO8(edx, MEM8(ecx));
    ecx++;
    if (TEST_NZ(LO8(edx), LO8(edx))) goto loc_0029CEA0; /* jne: not equal / not zero */

loc_0029CEA7: ;
    ecx = ecx - esi;
    if (CMP_EQ(MEM8(ecx + eax), 0)) { sub_0029CEC7(); return; } /* je: equal / zero */

loc_0029CEAF: ;
    eax = MEM32(edi);
    ebp++;
    ebx = ebx + 0x14;
    if (CMP_B(ebp, eax)) goto loc_0029CE80; /* jb: below (unsigned <) */

loc_0029CEB9: ;
    eax = MEM32(esp + 0x14);
    POP32(esp, esi);
    POP32(esp, ebp);
    MEM32(eax) = 0xFFFFFFFFu;
    POP32(esp, ebx);
    esp += 4; return; /* ret */

}

/**
 * sub_0029CEE0
 * Original: 0x0029CEE0 - 0x0029CF10 (48 bytes, 11 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0029CEE0(void)
{
    uint32_t ebp;
    int _flags = 0; /* fallback flag var */
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_0029CEE0: ;
    ecx = MEM32(0x7FA020);
    SET_LO8(eax, MEM8(esp + 0xC));
    ecx++;
    (void)0; /* test LO8(eax), LO8(eax) - flags set for next jcc */
    MEM32(0x7FA020) = ecx;
    ecx = 0x40358;
    if (TEST_Z(LO8(eax), LO8(eax))) { sub_0029CF10(); return; } /* je: equal / zero */

loc_0029CEFA: ;
    edx = 0x1010101;
    PUSH32(esp, 0); sub_00537990(); /* call 0x00537990 */

loc_0029CF04: ;
    MEM32(0x549B04) = 0x1010101;
    g_seh_ebp = ebp; sub_0029CF24(); return; /* tail jmp 0x0029CF24 */

}

/**
 * sub_0029CF60
 * Original: 0x0029CF60 - 0x0029CF7F (31 bytes, 15 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0029CF60(void)
{
    uint32_t ebp;
    int _flags = 0; /* fallback flag var */
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_0029CF60: ;
    PUSH32(esp, ebx);
    PUSH32(esp, ebp);
    PUSH32(esp, esi);
    PUSH32(esp, edi);
    esi = 0; /* xor self */
    ebp = 0; /* xor self */
    ebx = 0; /* xor self */
    edi = 0; /* xor self */
    /* nop */
    eax = MEM32(esp + 0x14);
    eax = MEM32(eax + 0x10);
    if (TEST_Z(eax, eax)) { sub_0029CF7F(); return; } /* je: equal / zero */

loc_0029CF7B: ;
    ecx = MEM32(eax);
    g_seh_ebp = ebp; sub_0029CF81(); return; /* tail jmp 0x0029CF81 */

}

/**
 * sub_0029CFE0
 * Original: 0x0029CFE0 - 0x0029D0D0 (240 bytes, 56 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0029CFE0(void)
{
    float xmm0, xmm1, xmm2, xmm3, xmm4, xmm5;
    double _fp_stack[8];
    int _fp_top = 0;
    #define fp_push(v) (_fp_stack[--_fp_top & 7] = (v))
    #define fp_pop() (_fp_top++)
    #define fp_popp() (fp_pop())
    #define fp_top() _fp_stack[_fp_top & 7]
    #define fp_st1() _fp_stack[(_fp_top + 1) & 7]

loc_0029CFE0: ;
    esp = esp - 0x14;
    fp_push(MEMF(esp + 0x18)); /* fld float */
    /* FPU: fsincos  */
    MEMF(esp + 8) = (float)fp_top(); fp_popp(); /* fstp */
    MEMF(esp + 0xC) = (float)fp_top(); fp_popp(); /* fstp */
    xmm1 = MEMF(eax); /* movss */
    xmm0 = MEMF(eax + 4); /* movss */
    xmm2 = xmm1; /* movaps */
    xmm2 = xmm2 * xmm1; /* mulss */
    xmm1 = xmm0; /* movaps */
    xmm1 = xmm1 * xmm0; /* mulss */
    xmm2 = xmm2 + xmm1; /* addss */
    MEMF(esp) = xmm2; /* movss */
    xmm0 = sqrtf(MEMF(esp)); /* sqrtss */
    MEMF(esp + 0x10) = xmm0; /* movss */
    xmm1 = MEMF(eax); /* movss */
    xmm0 = MEMF(eax + 4); /* movss */
    xmm2 = xmm1; /* movaps */
    xmm2 = xmm2 * xmm1; /* mulss */
    xmm1 = xmm0; /* movaps */
    xmm1 = xmm1 * xmm0; /* mulss */
    xmm2 = xmm2 + xmm1; /* addss */
    MEMF(esp) = xmm2; /* movss */
    xmm0 = MEMF(esp); /* movss */
    xmm1 = 1.0f / sqrtf(xmm0); /* rsqrtss */
    xmm0 = xmm0 * xmm1; /* mulss */
    xmm0 = xmm0 * xmm1; /* mulss */
    xmm2 = MEMF(0x5A03AC); /* movss */
    xmm2 = xmm2 - xmm0; /* subss */
    xmm2 = xmm2 * xmm1; /* mulss */
    xmm0 = MEMF(0x5A03B0); /* movss */
    xmm2 = xmm2 * xmm0; /* mulss */
    MEMF(esp + 4) = xmm2; /* movss */
    xmm0 = MEMF(eax); /* movss */
    xmm1 = MEMF(esp + 4); /* movss */
    xmm3 = MEMF(esp + 8); /* movss */
    xmm4 = MEMF(esp + 0xC); /* movss */
    xmm0 = xmm0 * xmm1; /* mulss */
    xmm1 = xmm1 * MEMF(eax + 4); /* mulss */
    MEMF(eax) = xmm0; /* movss */
    xmm5 = xmm0; /* movaps */
    MEMF(eax + 4) = xmm1; /* movss */
    xmm2 = xmm1; /* movaps */
    xmm2 = xmm2 * xmm3; /* mulss */
    xmm5 = xmm5 * xmm4; /* mulss */
    xmm2 = xmm2 + xmm5; /* addss */
    xmm5 = MEMF(esp + 0x10); /* movss */
    xmm0 = xmm0 * xmm3; /* mulss */
    xmm1 = xmm1 * xmm4; /* mulss */
    xmm0 = xmm0 - xmm1; /* subss */
    xmm2 = xmm2 * xmm5; /* mulss */
    xmm0 = xmm0 * xmm5; /* mulss */
    MEMF(ecx) = xmm0; /* movss */
    MEMF(ecx + 4) = xmm2; /* movss */
    esp = esp + 0x14;
    esp += 4; return; /* ret */

    #undef fp_push
    #undef fp_pop
    #undef fp_popp
    #undef fp_top
    #undef fp_st1
}

/**
 * sub_0029D250
 * Original: 0x0029D250 - 0x0029D483 (563 bytes, 127 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0029D250(void)
{
    int _flags = 0; /* fallback flag var */
    float xmm0, xmm1;

loc_0029D250: ;
    esp = esp - 0x14;
    PUSH32(esp, esi);
    PUSH32(esp, edi);
    edi = MEM32(esp + 0x20);
    eax = ZX8(MEM8(edi + 0x138));
    ecx = MEM32(eax * 4 + 0x594960);
    eax = MEM32(ecx);
    ecx = MEM32(eax + 4);
    (void)0; /* test ecx, ecx - flags set for next jcc */
    esi = eax + 4;
    if (TEST_NZ(ecx, ecx)) goto loc_0029D27F; /* jne: not equal / not zero */

loc_0029D273: ;
    edx = MEM32(eax);
    PUSH32(esp, esi);
    PUSH32(esp, edx);
    PUSH32(esp, 0); sub_00075E90(); /* call 0x00075E90 */

loc_0029D27C: ;
    esp = esp + 8;

loc_0029D27F: ;
    esi = MEM32(esi);
    if (TEST_Z(esi, esi)) goto loc_0029D47D; /* je: equal / zero */

loc_0029D289: ;
    if (CMP_EQ(MEM32(0x771764), esi)) goto loc_0029D2A0; /* je: equal / zero */

loc_0029D291: ;
    eax = 0; /* xor self */
    ecx = esi;
    PUSH32(esp, 0); sub_003FA570(); /* call 0x003FA570 */

loc_0029D29A: ;
    MEM32(0x771764) = esi;

loc_0029D2A0: ;
    esi = 0x1D;
    PUSH32(esp, 0); sub_0053C660(); /* call 0x0053C660 */

loc_0029D2AA: ;
    ecx = eax;
    MEM32(ecx) = 0x417FC;
    MEM32(ecx + 4) = 6;
    ecx = ecx + 4;
    MEM32(ecx + 4) = 0x40601818;
    eax = (uint32_t)(int32_t)SMEM16(edi + 0x118);
    ecx = ecx + 4;
    ecx = ecx + 4;
    xmm0 = (float)(int32_t)eax; /* cvtsi2ss */
    MEMF(ecx) = xmm0; /* movss */
    edx = (uint32_t)(int32_t)SMEM16(edi + 0x11A);
    xmm0 = (float)(int32_t)edx; /* cvtsi2ss */
    MEMF(ecx + 4) = xmm0; /* movss */
    eax = (uint32_t)(int32_t)SMEM16(edi + 0x11C);
    xmm0 = (float)(int32_t)eax; /* cvtsi2ss */
    MEMF(ecx + 8) = xmm0; /* movss */
    edx = (uint32_t)(int32_t)SMEM16(edi + 0x11E);
    eax = (uint32_t)(int32_t)SMEM16(edi + 0x118);
    xmm0 = (float)(int32_t)edx; /* cvtsi2ss */
    xmm1 = (float)(int32_t)eax; /* cvtsi2ss */
    xmm0 = xmm0 + xmm1; /* addss */
    MEMF(ecx + 0x18) = xmm0; /* movss */
    edx = (uint32_t)(int32_t)SMEM16(edi + 0x11A);
    xmm0 = (float)(int32_t)edx; /* cvtsi2ss */
    MEMF(ecx + 0x1C) = xmm0; /* movss */
    eax = (uint32_t)(int32_t)SMEM16(edi + 0x11C);
    xmm0 = (float)(int32_t)eax; /* cvtsi2ss */
    MEMF(ecx + 0x20) = xmm0; /* movss */
    eax = (uint32_t)(int32_t)SMEM16(edi + 0x120);
    edx = edi + 0x12C;
    MEM32(esp + 8) = edx;
    edx = esp + 0x10;
    xmm0 = (float)(int32_t)eax; /* cvtsi2ss */
    MEMF(esp + 0xC) = xmm0; /* movss */
    MEM32(esp + 0x20) = edx;
    xmm0 = MEMF(esp + 0xC); /* movss */
    /* shufps xmm0, xmm0, 0 */
    edx = MEM32(esp + 8);
    xmm1 = MEMF(edx); /* movss */
    xmm1 = MEMD(edx + 4); /* movhps */
    /* mulps: xmm0 *= xmm1 (packed 4xfloat) */
    eax = MEM32(esp + 0x20);
    MEMF(eax) = xmm0; /* movss */
    MEMD(eax + 4) = xmm0; /* movhps */
    eax = (uint32_t)(int32_t)SMEM16(edi + 0x118);
    xmm0 = (float)(int32_t)eax; /* cvtsi2ss */
    xmm0 = xmm0 + MEMF(esp + 0x10); /* addss */
    MEMF(ecx + 0x30) = xmm0; /* movss */
    edx = (uint32_t)(int32_t)SMEM16(edi + 0x11A);
    xmm0 = (float)(int32_t)edx; /* cvtsi2ss */
    xmm0 = xmm0 + MEMF(esp + 0x14); /* addss */
    MEMF(ecx + 0x34) = xmm0; /* movss */
    eax = (uint32_t)(int32_t)SMEM16(edi + 0x11C);
    xmm0 = (float)(int32_t)eax; /* cvtsi2ss */
    xmm0 = xmm0 + MEMF(esp + 0x18); /* addss */
    MEMF(ecx + 0x38) = xmm0; /* movss */
    edx = (uint32_t)(int32_t)SMEM16(edi + 0x118);
    xmm0 = (float)(int32_t)edx; /* cvtsi2ss */
    xmm0 = xmm0 + MEMF(esp + 0x10); /* addss */
    MEMF(ecx + 0x48) = xmm0; /* movss */
    eax = (uint32_t)(int32_t)SMEM16(edi + 0x11E);
    edx = (uint32_t)(int32_t)SMEM16(edi + 0x11A);
    xmm0 = (float)(int32_t)eax; /* cvtsi2ss */
    xmm1 = (float)(int32_t)edx; /* cvtsi2ss */
    xmm0 = xmm0 + xmm1; /* addss */
    xmm0 = xmm0 + MEMF(esp + 0x14); /* addss */
    xmm1 = MEMF(0x648D14); /* movss */
    MEMF(ecx + 0x4C) = xmm0; /* movss */
    eax = (uint32_t)(int32_t)SMEM16(edi + 0x11C);
    xmm0 = (float)(int32_t)eax; /* cvtsi2ss */
    xmm0 = xmm0 + MEMF(esp + 0x18); /* addss */
    MEMF(ecx + 0x50) = xmm0; /* movss */
    edx = MEM32(edi + 0x38);
    xmm0 = 0.0f; /* xorps self = zero */
    MEM32(ecx + 0xC) = edx;
    eax = MEM32(edi + 0x54);
    MEM32(ecx + 0x24) = eax;
    edx = MEM32(edi + 0x70);
    MEM32(ecx + 0x3C) = edx;
    eax = MEM32(edi + 0x8C);
    MEM32(ecx + 0x54) = eax;
    MEMF(ecx + 0x10) = xmm0; /* movss */
    MEMF(ecx + 0x14) = xmm1; /* movss */
    MEMF(ecx + 0x28) = xmm1; /* movss */
    MEMF(ecx + 0x2C) = xmm1; /* movss */
    MEMF(ecx + 0x40) = xmm0; /* movss */
    MEMF(ecx + 0x44) = xmm0; /* movss */
    edx = MEM32(0x5499E8);
    MEMF(ecx + 0x58) = xmm1; /* movss */
    MEMF(ecx + 0x5C) = xmm0; /* movss */
    ecx = ecx + 0x60;
    MEM32(ecx) = 0x417FC;
    ecx = ecx + 4;
    MEM32(ecx) = 0;
    ecx = ecx + 4;
    MEM32(edx) = ecx;

loc_0029D47D: ;
    POP32(esp, edi);
    POP32(esp, esi);
    esp = esp + 0x14;
    esp += 4; return; /* ret */

}

/**
 * sub_0029D490
 * Original: 0x0029D490 - 0x0029D4F4 (100 bytes, 24 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0029D490(void)
{
    float xmm0, xmm1, xmm2;

loc_0029D490: ;
    esp = esp - 0xC;
    xmm0 = (float)(int32_t)MEM32(esp + 0x10); /* cvtsi2ss */
    MEMF(esp) = xmm0; /* movss */
    xmm0 = (float)(int32_t)MEM32(esp + 0x14); /* cvtsi2ss */
    MEMF(esp + 4) = xmm0; /* movss */
    xmm0 = (float)(int32_t)MEM32(esp + 0x18); /* cvtsi2ss */
    eax = esp;
    MEMF(esp + 8) = xmm0; /* movss */
    MEM32(esp + 0x10) = eax;
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
    MEMF(esp + 0x14) = xmm1; /* movss */
    eax = (int32_t)MEMF(esp + 0x14); /* cvttss2si */
    esp = esp + 0xC;
    esp += 4; return; /* ret */

}

/**
 * sub_0029D500
 * Original: 0x0029D500 - 0x0029D6F3 (499 bytes, 114 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0029D500(void)
{
    uint32_t ebp;
    int _flags = 0; /* fallback flag var */
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_0029D500: ;
    eax = MEM32(eax + 0x68);
    ecx = eax;
    if (CMP_A(ecx, 0x69)) goto loc_0029D5FD; /* ja: above (unsigned >) */

loc_0029D50E: ;
    if (CMP_EQ(ecx, 0x69)) goto loc_0029D5EE; /* je: equal / zero */

loc_0029D514: ;
    if (CMP_A(ecx, 0x67)) { sub_0029D6F3(); return; } /* ja: above (unsigned >) */

loc_0029D51D: ;
    ecx = ZX8(MEM8(ecx + 0x29D758));
    g_seh_ebp = ebp; RECOMP_ITAIL(MEM32(ecx * 4 + 0x29D718)); return; /* indirect tail jmp */

    edx = 0x6BF2A0;
    ecx = 0xB4;
    goto loc_0029D6E0;

    edx = 0x6BF358;
    ecx = 0x9C;
    goto loc_0029D6E0;

    edx = 0x6BF3F4;
    ecx = 0x38;
    goto loc_0029D6E0;

    edx = 0x6BF4FC;
    ecx = 0x24;
    goto loc_0029D6E0;

    edx = 0x6BF560;
    ecx = 0xA0;
    goto loc_0029D6E0;

    edx = 0x6BF600;
    ecx = 0xD0;
    goto loc_0029D6E0;

    edx = 0x6BF700;
    ecx = 0x68;
    goto loc_0029D6E0;

    edx = 0x6BF768;
    ecx = 0x84;
    goto loc_0029D6E0;

    edx = 0x6BF7EC;
    ecx = 0x34;
    goto loc_0029D6E0;

    edx = 0x6BF918;
    ecx = 0x1C;
    goto loc_0029D6E0;

    edx = 0x6BF938;
    ecx = 0xE0;
    goto loc_0029D6E0;

    edx = 0x6BFBD0;
    ecx = 0x94;
    goto loc_0029D6E0;

    edx = 0x6BFD80;
    ecx = 0x50;
    goto loc_0029D6E0;

loc_0029D5EE: ;
    edx = 0x6BFA18;
    ecx = 0x90;
    goto loc_0029D6E0;

loc_0029D5FD: ;
    if (CMP_A(ecx, 0x95)) goto loc_0029D675; /* ja: above (unsigned >) */

loc_0029D605: ;
    if (CMP_EQ(ecx, 0x95)) goto loc_0029D669; /* je: equal / zero */

loc_0029D607: ;
    ecx = ecx - 0x7B;
    if (CMP_A(ecx, 0x17)) { sub_0029D6F3(); return; } /* ja: above (unsigned >) */

loc_0029D613: ;
    edx = ZX8(MEM8(ecx + 0x29D7DC));
    g_seh_ebp = ebp; RECOMP_ITAIL(MEM32(edx * 4 + 0x29D7C0)); return; /* indirect tail jmp */

    edx = 0x6BF458;
    ecx = 0xA4;
    goto loc_0029D6E0;

    edx = 0x6BF6D0;
    ecx = 0x30;
    goto loc_0029D6E0;

    edx = 0x6BF880;
    ecx = 0x98;
    goto loc_0029D6E0;

    edx = 0x6BFAD0;
    ecx = 0xFC;
    goto loc_0029D6E0;

    edx = 0x6BFCF8;
    ecx = 0x84;
    goto loc_0029D6E0;

loc_0029D669: ;
    edx = 0x6BF42C;
    ecx = 0x2C;
    goto loc_0029D6E0;

loc_0029D675: ;
    if (CMP_A(ecx, 0xA7)) goto loc_0029D6B5; /* ja: above (unsigned >) */

loc_0029D67D: ;
    if (CMP_EQ(ecx, 0xA7)) goto loc_0029D6A9; /* je: equal / zero */

loc_0029D67F: ;
    ecx = ecx - 0x96;
    if ((ecx == 0)) goto loc_0029D6D6; /* je: equal / zero */

loc_0029D687: ;
    ecx = ecx - 4;
    if ((ecx == 0)) goto loc_0029D69D; /* je: equal / zero */

loc_0029D68C: ;
    ecx = ecx - 9;
    if ((ecx != 0)) { sub_0029D6F3(); return; } /* jne: not equal / not zero */

loc_0029D691: ;
    edx = 0x6BF520;
    ecx = 0x3C;
    goto loc_0029D6E0;

loc_0029D69D: ;
    edx = 0x6BFC68;
    ecx = 0x90;
    goto loc_0029D6E0;

loc_0029D6A9: ;
    edx = 0x6BFAA8;
    ecx = 0x28;
    goto loc_0029D6E0;

loc_0029D6B5: ;
    ecx = ecx - 0x111;
    if ((ecx == 0)) goto loc_0029D6D6; /* je: equal / zero */

loc_0029D6BD: ;
    ecx = ecx - 3;
    if ((ecx == 0)) goto loc_0029D6D6; /* je: equal / zero */

loc_0029D6C2: ;
    ecx = ecx - 0x88;
    if ((ecx != 0)) { sub_0029D6F3(); return; } /* jne: not equal / not zero */

loc_0029D6CA: ;
    edx = 0x6BF820;
    ecx = 0x60;
    goto loc_0029D6E0;

loc_0029D6D6: ;
    edx = 0x6BF230;
    ecx = 0x70;

loc_0029D6E0: ;
    ecx = ecx >> 2;
    if (CMP_GE(esi, ecx)) goto loc_0029D6EB; /* jge: greater or equal (signed >=) */

loc_0029D6E7: ;
    eax = MEM32(edx + esi * 4);
    esp += 4; return; /* ret */

loc_0029D6EB: ;
    PUSH32(esp, 0); sub_002F65F0(); /* call 0x002F65F0 */

loc_0029D6F0: ;
    eax = 0; /* xor self */
    esp += 4; return; /* ret */

}

/**
 * sub_0029D800
 * Original: 0x0029D800 - 0x0029D8B3 (179 bytes, 63 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0029D800(void)
{
    int _flags = 0; /* fallback flag var */

loc_0029D800: ;
    PUSH32(esp, ecx);
    PUSH32(esp, ebx);
    PUSH32(esp, edi);
    edi = eax;
    PUSH32(esp, 0); sub_0029D500(); /* call 0x0029D500 */

loc_0029D80A: ;
    ebx = eax;
    if (TEST_Z(ebx, ebx)) goto loc_0029D887; /* je: equal / zero */

loc_0029D810: ;
    eax = MEM32(edi + 0x4B0);
    ecx = MEM32(eax + 0x24);
    edx = MEM32(ecx + 8);
    eax = MEM32(edx + 0x10);
    ecx = esp + 8;
    PUSH32(esp, ecx);
    PUSH32(esp, 1);
    PUSH32(esp, 0);
    PUSH32(esp, 0); sub_00415EC0(); /* call 0x00415EC0 */

loc_0029D82D: ;
    eax = MEM32(edi + 0x68);
    esp = esp + 0xC;
    if (CMP_EQ(eax, 0xFFFF)) goto loc_0029D854; /* je: equal / zero */

loc_0029D83A: ;
    if (CMP_L(eax, 0x205)) goto loc_0029D854; /* jl: less (signed <) */

loc_0029D841: ;
    PUSH32(esp, eax);
    PUSH32(esp, 0x637FD0);
    PUSH32(esp, 0x7FDB98);
    PUSH32(esp, 0); sub_0046EC2D(); /* call 0x0046EC2D */

loc_0029D851: ;
    esp = esp + 0xC;

loc_0029D854: ;
    edx = MEM32(edi + 0x4B0);
    eax = MEM32(edx + 0x24);
    ecx = MEM32(eax + 8);
    eax = MEM32(ecx + 0x10);
    edx = esp + 8;
    PUSH32(esp, edx);
    PUSH32(esp, 1);
    PUSH32(esp, 0);
    PUSH32(esp, 0); sub_00415EC0(); /* call 0x00415EC0 */

loc_0029D871: ;
    esp = esp + 0xC;
    if (TEST_Z(eax, eax)) goto loc_0029D8AD; /* je: equal / zero */

loc_0029D878: ;
    eax = MEM32(esp + 8);
    if (TEST_Z(eax, eax)) goto loc_0029D8AD; /* je: equal / zero */

loc_0029D880: ;
    eax = MEM32(eax + 8);
    POP32(esp, edi);
    POP32(esp, ebx);
    POP32(esp, ecx);
    esp += 4; return; /* ret */

loc_0029D887: ;
    edi = MEM32(edi + 0x68);
    if (CMP_EQ(edi, 0xFFFF)) goto loc_0029D8AD; /* je: equal / zero */

loc_0029D892: ;
    if (CMP_L(edi, 0x205)) goto loc_0029D8AD; /* jl: less (signed <) */

loc_0029D89A: ;
    PUSH32(esp, edi);
    PUSH32(esp, 0x637FD0);
    PUSH32(esp, 0x7FDB98);
    PUSH32(esp, 0); sub_0046EC2D(); /* call 0x0046EC2D */

loc_0029D8AA: ;
    esp = esp + 0xC;

loc_0029D8AD: ;
    POP32(esp, edi);
    eax = 0; /* xor self */
    POP32(esp, ebx);
    POP32(esp, ecx);
    esp += 4; return; /* ret */

}

/**
 * sub_0029D8C0
 * Original: 0x0029D8C0 - 0x0029DAE1 (545 bytes, 154 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0029D8C0(void)
{
    uint32_t ebp;
    int _flags = 0; /* fallback flag var */
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_0029D8C0: ;
    MEM32(ecx) = 0;
    MEM32(eax) = 0;
    edx = MEM32(edx + 0x68);
    if (CMP_A(edx, 0x76)) goto loc_0029D9E8; /* ja: above (unsigned >) */

loc_0029D8D8: ;
    if (CMP_EQ(edx, 0x76)) goto loc_0029D9D4; /* je: equal / zero */

loc_0029D8DE: ;
    edx = edx - 0x16;
    if (CMP_A(edx, 0x59)) goto loc_0029DAD9; /* ja: above (unsigned >) */

loc_0029D8EA: ;
    edx = ZX8(MEM8(edx + 0x29DB18));
    { uint32_t _jt = MEM32(edx * 4 + 0x29DAE4); /* switch: 13 entries, 13 targets */
    if (_jt == 0x0029D8F8u) goto loc_0029D8F8;
    if (_jt == 0x0029D90Cu) goto loc_0029D90C;
    if (_jt == 0x0029D920u) goto loc_0029D920;
    if (_jt == 0x0029D934u) goto loc_0029D934;
    if (_jt == 0x0029D948u) goto loc_0029D948;
    if (_jt == 0x0029D95Cu) goto loc_0029D95C;
    if (_jt == 0x0029D970u) goto loc_0029D970;
    if (_jt == 0x0029D984u) goto loc_0029D984;
    if (_jt == 0x0029D998u) goto loc_0029D998;
    if (_jt == 0x0029D9ACu) goto loc_0029D9AC;
    if (_jt == 0x0029D9C0u) goto loc_0029D9C0;
    if (_jt == 0x0029DA55u) goto loc_0029DA55;
    if (_jt == 0x0029DAD9u) goto loc_0029DAD9;
    g_seh_ebp = ebp; RECOMP_ITAIL(_jt); return; }

loc_0029D8F8: ;
    MEM32(ecx) = 0x6BFDE4;
    MEM32(eax) = 0x2C;
    ecx = MEM32(eax);
    ecx = ecx >> 2;
    MEM32(eax) = ecx;
    esp += 4; return; /* ret */

loc_0029D90C: ;
    MEM32(ecx) = 0x6BFE18;
    MEM32(eax) = 8;
    ecx = MEM32(eax);
    ecx = ecx >> 2;
    MEM32(eax) = ecx;
    esp += 4; return; /* ret */

loc_0029D920: ;
    MEM32(ecx) = 0x6BFE20;
    MEM32(eax) = 0x1C;
    ecx = MEM32(eax);
    ecx = ecx >> 2;
    MEM32(eax) = ecx;
    esp += 4; return; /* ret */

loc_0029D934: ;
    MEM32(ecx) = 0x6BFE98;
    MEM32(eax) = 0xC;
    ecx = MEM32(eax);
    ecx = ecx >> 2;
    MEM32(eax) = ecx;
    esp += 4; return; /* ret */

loc_0029D948: ;
    MEM32(ecx) = 0x6BFEAC;
    MEM32(eax) = 8;
    ecx = MEM32(eax);
    ecx = ecx >> 2;
    MEM32(eax) = ecx;
    esp += 4; return; /* ret */

loc_0029D95C: ;
    MEM32(ecx) = 0x6BFEB4;
    MEM32(eax) = 0x18;
    ecx = MEM32(eax);
    ecx = ecx >> 2;
    MEM32(eax) = ecx;
    esp += 4; return; /* ret */

loc_0029D970: ;
    MEM32(ecx) = 0x6BFED4;
    MEM32(eax) = 0x10;
    ecx = MEM32(eax);
    ecx = ecx >> 2;
    MEM32(eax) = ecx;
    esp += 4; return; /* ret */

loc_0029D984: ;
    MEM32(ecx) = 0x6BFEE4;
    MEM32(eax) = 0x3C;
    ecx = MEM32(eax);
    ecx = ecx >> 2;
    MEM32(eax) = ecx;
    esp += 4; return; /* ret */

loc_0029D998: ;
    MEM32(ecx) = 0x6BFF20;
    MEM32(eax) = 0x10;
    ecx = MEM32(eax);
    ecx = ecx >> 2;
    MEM32(eax) = ecx;
    esp += 4; return; /* ret */

loc_0029D9AC: ;
    MEM32(ecx) = 0x6BFF30;
    MEM32(eax) = 0xC;
    ecx = MEM32(eax);
    ecx = ecx >> 2;
    MEM32(eax) = ecx;
    esp += 4; return; /* ret */

loc_0029D9C0: ;
    MEM32(ecx) = 0x6BFF6C;
    MEM32(eax) = 4;
    ecx = MEM32(eax);
    ecx = ecx >> 2;
    MEM32(eax) = ecx;
    esp += 4; return; /* ret */

loc_0029D9D4: ;
    MEM32(ecx) = 0x6BFF78;
    MEM32(eax) = 8;
    ecx = MEM32(eax);
    ecx = ecx >> 2;
    MEM32(eax) = ecx;
    esp += 4; return; /* ret */

loc_0029D9E8: ;
    edx = edx - 0x7B;
    if (CMP_A(edx, 0xC5)) goto loc_0029DAD9; /* ja: above (unsigned >) */

loc_0029D9F7: ;
    edx = ZX8(MEM8(edx + 0x29DBA4));
    { uint32_t _jt = MEM32(edx * 4 + 0x29DB74); /* switch: 12 entries, 12 targets */
    if (_jt == 0x0029DA05u) goto loc_0029DA05;
    if (_jt == 0x0029DA19u) goto loc_0029DA19;
    if (_jt == 0x0029DA2Du) goto loc_0029DA2D;
    if (_jt == 0x0029DA41u) goto loc_0029DA41;
    if (_jt == 0x0029DA55u) goto loc_0029DA55;
    if (_jt == 0x0029DA69u) goto loc_0029DA69;
    if (_jt == 0x0029DA7Du) goto loc_0029DA7D;
    if (_jt == 0x0029DA91u) goto loc_0029DA91;
    if (_jt == 0x0029DAA5u) goto loc_0029DAA5;
    if (_jt == 0x0029DAB9u) goto loc_0029DAB9;
    if (_jt == 0x0029DACDu) goto loc_0029DACD;
    if (_jt == 0x0029DAD9u) goto loc_0029DAD9;
    g_seh_ebp = ebp; RECOMP_ITAIL(_jt); return; }

loc_0029DA05: ;
    MEM32(ecx) = 0x6BFDD0;
    MEM32(eax) = 0x14;
    ecx = MEM32(eax);
    ecx = ecx >> 2;
    MEM32(eax) = ecx;
    esp += 4; return; /* ret */

loc_0029DA19: ;
    MEM32(ecx) = 0x6BFE10;
    MEM32(eax) = 8;
    ecx = MEM32(eax);
    ecx = ecx >> 2;
    MEM32(eax) = ecx;
    esp += 4; return; /* ret */

loc_0029DA2D: ;
    MEM32(ecx) = 0x6BFE3C;
    MEM32(eax) = 0x18;
    ecx = MEM32(eax);
    ecx = ecx >> 2;
    MEM32(eax) = ecx;
    esp += 4; return; /* ret */

loc_0029DA41: ;
    MEM32(ecx) = 0x6BFE54;
    MEM32(eax) = 0x14;
    ecx = MEM32(eax);
    ecx = ecx >> 2;
    MEM32(eax) = ecx;
    esp += 4; return; /* ret */

loc_0029DA55: ;
    MEM32(ecx) = 0x6BFE68;
    MEM32(eax) = 0x10;
    ecx = MEM32(eax);
    ecx = ecx >> 2;
    MEM32(eax) = ecx;
    esp += 4; return; /* ret */

loc_0029DA69: ;
    MEM32(ecx) = 0x6BFE78;
    MEM32(eax) = 8;
    ecx = MEM32(eax);
    ecx = ecx >> 2;
    MEM32(eax) = ecx;
    esp += 4; return; /* ret */

loc_0029DA7D: ;
    MEM32(ecx) = 0x6BFE80;
    MEM32(eax) = 0x18;
    ecx = MEM32(eax);
    ecx = ecx >> 2;
    MEM32(eax) = ecx;
    esp += 4; return; /* ret */

loc_0029DA91: ;
    MEM32(ecx) = 0x6BFEA4;
    MEM32(eax) = 8;
    ecx = MEM32(eax);
    ecx = ecx >> 2;
    MEM32(eax) = ecx;
    esp += 4; return; /* ret */

loc_0029DAA5: ;
    MEM32(ecx) = 0x6BFECC;
    MEM32(eax) = 8;
    ecx = MEM32(eax);
    ecx = ecx >> 2;
    MEM32(eax) = ecx;
    esp += 4; return; /* ret */

loc_0029DAB9: ;
    MEM32(ecx) = 0x6BFF3C;
    MEM32(eax) = 0x30;
    ecx = MEM32(eax);
    ecx = ecx >> 2;
    MEM32(eax) = ecx;
    esp += 4; return; /* ret */

loc_0029DACD: ;
    MEM32(ecx) = 0x6BFF70;
    MEM32(eax) = 8;

loc_0029DAD9: ;
    ecx = MEM32(eax);
    ecx = ecx >> 2;
    MEM32(eax) = ecx;
    esp += 4; return; /* ret */

}

/**
 * sub_0029DC70
 * Original: 0x0029DC70 - 0x0029DD2D (189 bytes, 72 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0029DC70(void)
{
    uint32_t ebp;
    int _flags = 0; /* fallback flag var */
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_0029DC70: ;
    esp = esp - 8;
    PUSH32(esp, ebp);
    PUSH32(esp, esi);
    PUSH32(esp, edi);
    esi = eax;
    edi = 0; /* xor self */
    eax = esp + 0x10;
    ecx = esp + 0xC;
    edx = esi;
    MEM32(esp + 0xC) = edi;
    PUSH32(esp, 0); sub_0029D8C0(); /* call 0x0029D8C0 */

loc_0029DC8D: ;
    ebp = MEM32(esp + 0xC);
    if (CMP_EQ(ebp, edi)) goto loc_0029DD26; /* je: equal / zero */

loc_0029DC99: ;
    eax = MEM32(esp + 0x10);
    (void)0; /* test eax, eax - flags set for next jcc */
    PUSH32(esp, ebx);
    ebx = 1;
    if (CMP_LE(eax & eax, 0)) goto loc_0029DD25; /* jle: less or equal (signed <=) */

loc_0029DCA7: ;
    eax = MEM32(ebp + edi * 4);
    if (TEST_Z(eax, eax)) goto loc_0029DD1A; /* je: equal / zero */

loc_0029DCAF: ;
    ecx = MEM32(esp + 0x20);
    ecx = ecx - 0;
    if ((ecx == 0)) goto loc_0029DD00; /* je: equal / zero */

loc_0029DCB8: ;
    ecx--;
    if ((ecx == 0)) goto loc_0029DCEE; /* je: equal / zero */

loc_0029DCBB: ;
    ecx--;
    if ((ecx != 0)) goto loc_0029DD1A; /* jne: not equal / not zero */

loc_0029DCBE: ;
    ecx = MEM32(esp + 0x1C);
    if (TEST_Z(ecx, ebx)) goto loc_0029DD1A; /* je: equal / zero */

loc_0029DCC6: ;
    PUSH32(esp, eax);
    eax = esi;
    PUSH32(esp, 0); sub_002F7B90(); /* call 0x002F7B90 */

loc_0029DCCE: ;
    esp = esp + 4;
    if (CMP_NE(ebp, 0x6BFF70)) goto loc_0029DD1A; /* jne: not equal / not zero */

loc_0029DCD9: ;
    if (CMP_NE(edi, 1)) goto loc_0029DD1A; /* jne: not equal / not zero */

loc_0029DCDE: ;
    PUSH32(esp, 0xFF);
    SET_LO8(edx, 2);
    SET_LO8(ecx, 0); /* xor self */
    PUSH32(esp, 0); sub_001769C0(); /* call 0x001769C0 */

loc_0029DCEC: ;
    goto loc_0029DD17;

loc_0029DCEE: ;
    edx = MEM32(esp + 0x1C);
    if (TEST_Z(edx, ebx)) goto loc_0029DD1A; /* je: equal / zero */

loc_0029DCF6: ;
    PUSH32(esp, eax);
    eax = esi;
    PUSH32(esp, 0); sub_002F7BE0(); /* call 0x002F7BE0 */

loc_0029DCFE: ;
    goto loc_0029DD17;

loc_0029DD00: ;
    ecx = MEM32(esp + 0x1C);
    (void)0; /* test ecx, ebx - flags set for next jcc */
    PUSH32(esp, eax);
    eax = esi;
    if (TEST_Z(ecx, ebx)) goto loc_0029DD12; /* je: equal / zero */

loc_0029DD0B: ;
    PUSH32(esp, 0); sub_002F7BE0(); /* call 0x002F7BE0 */

loc_0029DD10: ;
    goto loc_0029DD17;

loc_0029DD12: ;
    PUSH32(esp, 0); sub_002F7B90(); /* call 0x002F7B90 */

loc_0029DD17: ;
    esp = esp + 4;

loc_0029DD1A: ;
    eax = MEM32(esp + 0x14);
    ebx = ebx << 1;
    edi++;
    if (CMP_L(edi, eax)) goto loc_0029DCA7; /* jl: less (signed <) */

loc_0029DD25: ;
    POP32(esp, ebx);

loc_0029DD26: ;
    POP32(esp, edi);
    POP32(esp, esi);
    POP32(esp, ebp);
    esp = esp + 8;
    esp += 4; return; /* ret */

}

/**
 * sub_0029DD30
 * Original: 0x0029DD30 - 0x0029E0AF (895 bytes, 249 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0029DD30(void)
{
    uint32_t ebp;
    int _flags = 0; /* fallback flag var */
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_0029DD30: ;
    eax = MEM32(eax + 0x70);
    if (CMP_A(eax, 0x47)) goto loc_0029DEEF; /* ja: above (unsigned >) */

loc_0029DD3C: ;
    if (CMP_EQ(eax, 0x47)) goto loc_0029DEE1; /* je: equal / zero */

loc_0029DD42: ;
    if (CMP_A(eax, 0x46)) { sub_0029E0AF(); return; } /* ja: above (unsigned >) */

loc_0029DD4B: ;
    ecx = ZX8(MEM8(eax + 0x29E130));
    g_seh_ebp = ebp; RECOMP_ITAIL(MEM32(ecx * 4 + 0x29E0B4)); return; /* indirect tail jmp */

    ecx = MEM32(esp + 4);
    eax = 0x6BFFAC;
    eax = ZX8(MEM8(eax + ecx));
    esp += 4; return; /* ret */

loc_0029DEE1: ;
    ecx = MEM32(esp + 4);
    eax = 0x84A058;
    eax = ZX8(MEM8(eax + ecx));
    esp += 4; return; /* ret */

loc_0029DEEF: ;
    eax = eax - 0x4B;
    if (CMP_A(eax, 0xC9)) { sub_0029E0AF(); return; } /* ja: above (unsigned >) */

loc_0029DEFD: ;
    edx = ZX8(MEM8(eax + 0x29E1F4));
    g_seh_ebp = ebp; RECOMP_ITAIL(MEM32(edx * 4 + 0x29E178)); return; /* indirect tail jmp */

    ecx = MEM32(esp + 4);
    eax = 0x6BFF80;
    eax = ZX8(MEM8(eax + ecx));
    esp += 4; return; /* ret */

}

/**
 * sub_0029E2C0
 * Original: 0x0029E2C0 - 0x0029E353 (147 bytes, 40 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0029E2C0(void)
{
    uint32_t ebp;
    int _flags = 0; /* fallback flag var */
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_0029E2C0: ;
    if (TEST_Z(ecx, ecx)) { sub_0029E353(); return; } /* je: equal / zero */

loc_0029E2C8: ;
    eax = MEM32(esp + 4);
    eax = MEM32(eax + 0x70);
    if (CMP_A(eax, 0x5B)) goto loc_0029E311; /* ja: above (unsigned >) */

loc_0029E2D4: ;
    if (CMP_EQ(eax, 0x5B)) goto loc_0029E307; /* je: equal / zero */

loc_0029E2D6: ;
    if (CMP_A(eax, 0x4B)) { sub_0029E353(); return; } /* ja: above (unsigned >) */

loc_0029E2DB: ;
    edx = ZX8(MEM8(eax + 0x29E36C));
    g_seh_ebp = ebp; RECOMP_ITAIL(MEM32(edx * 4 + 0x29E358)); return; /* indirect tail jmp */

    eax = 0x84A078;
    eax = ZX8(MEM8(eax + ecx));
    esp += 4; return; /* ret */

loc_0029E307: ;
    eax = 0x6C01DC;
    eax = ZX8(MEM8(eax + ecx));
    esp += 4; return; /* ret */

loc_0029E311: ;
    eax = eax - 0x82;
    if (CMP_A(eax, 0x92)) { sub_0029E353(); return; } /* ja: above (unsigned >) */

loc_0029E31D: ;
    eax = ZX8(MEM8(eax + 0x29E3CC));
    g_seh_ebp = ebp; RECOMP_ITAIL(MEM32(eax * 4 + 0x29E3B8)); return; /* indirect tail jmp */

    eax = 0x6BFF80;
    eax = ZX8(MEM8(eax + ecx));
    esp += 4; return; /* ret */

}

/**
 * sub_0029E460
 * Original: 0x0029E460 - 0x0029E483 (35 bytes, 16 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0029E460(void)
{
    int _flags = 0; /* fallback flag var */

loc_0029E460: ;
    PUSH32(esp, esi);
    esi = 0; /* xor self */

loc_0029E463: ;
    eax = 1;
    ecx = esi;
    eax = eax << LO8(ecx);
    if (TEST_Z(edi, eax)) goto loc_0029E47B; /* je: equal / zero */

loc_0029E470: ;
    eax = ebx;
    PUSH32(esp, 0); sub_0029D500(); /* call 0x0029D500 */

loc_0029E477: ;
    if (TEST_Z(eax, eax)) goto loc_0029E481; /* je: equal / zero */

loc_0029E47B: ;
    esi++;
    if (CMP_L(esi, 0x20)) goto loc_0029E463; /* jl: less (signed <) */

loc_0029E481: ;
    POP32(esp, esi);
    esp += 4; return; /* ret */

}

/**
 * sub_0029E490
 * Original: 0x0029E490 - 0x0029E5E4 (340 bytes, 106 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0029E490(void)
{
    int _flags = 0; /* fallback flag var */

loc_0029E490: ;
    PUSH32(esp, ebx);
    ebx = MEM32(esp + 8);
    PUSH32(esp, edi);
    edi = eax;
    eax = MEM32(ebx + 0x70);
    if (CMP_A(eax, 0x9A)) goto loc_0029E514; /* ja: above (unsigned >) */

loc_0029E4A2: ;
    if (CMP_EQ(eax, 0x9A)) goto loc_0029E4E0; /* je: equal / zero */

loc_0029E4A4: ;
    if (TEST_Z(eax, eax)) goto loc_0029E524; /* je: equal / zero */

loc_0029E4A8: ;
    if (CMP_EQ(eax, 0x58)) goto loc_0029E4C2; /* je: equal / zero */

loc_0029E4AD: ;
    if (CMP_NE(eax, 0x5E)) goto loc_0029E5DC; /* jne: not equal / not zero */

loc_0029E4B6: ;
    if (TEST_Z(edi, edi)) goto loc_0029E502; /* je: equal / zero */

loc_0029E4BA: ;
    (void)0; /* cmp edi, 0xF8 - flags set for next jcc */
    goto loc_0029E4EA;

loc_0029E4C2: ;
    if (CMP_NE(edi, 0x1F0000)) goto loc_0029E5DC; /* jne: not equal / not zero */

loc_0029E4CE: ;
    PUSH32(esp, 0x605ADC);
    eax = ebx;
    PUSH32(esp, 0); sub_002F7BE0(); /* call 0x002F7BE0 */

loc_0029E4DA: ;
    esp = esp + 4;
    POP32(esp, edi);
    POP32(esp, ebx);
    esp += 4; return; /* ret */

loc_0029E4E0: ;
    if (TEST_Z(edi, edi)) goto loc_0029E502; /* je: equal / zero */

loc_0029E4E4: ;
    (void)0; /* cmp edi, 0x3FFE000 - flags set for next jcc */

loc_0029E4EA: ;
    if (CMP_NE(edi, 0x3FFE000)) goto loc_0029E5DC; /* jne: not equal / not zero */

loc_0029E4F0: ;
    PUSH32(esp, 0x605AD4);
    eax = ebx;
    PUSH32(esp, 0); sub_002F7BE0(); /* call 0x002F7BE0 */

loc_0029E4FC: ;
    esp = esp + 4;
    POP32(esp, edi);
    POP32(esp, ebx);
    esp += 4; return; /* ret */

loc_0029E502: ;
    PUSH32(esp, 0x605AD4);
    eax = ebx;
    PUSH32(esp, 0); sub_002F7B90(); /* call 0x002F7B90 */

loc_0029E50E: ;
    esp = esp + 4;
    POP32(esp, edi);
    POP32(esp, ebx);
    esp += 4; return; /* ret */

loc_0029E514: ;
    eax = eax - 0x111;
    if ((eax == 0)) goto loc_0029E524; /* je: equal / zero */

loc_0029E51B: ;
    eax = eax - 3;
    if ((eax != 0)) goto loc_0029E5DC; /* jne: not equal / not zero */

loc_0029E524: ;
    if (CMP_A(edi, 0xC0E70)) goto loc_0029E560; /* ja: above (unsigned >) */

loc_0029E52C: ;
    if (CMP_EQ(edi, 0xC0E70)) goto loc_0029E5E1; /* je: equal / zero */

loc_0029E532: ;
    if (TEST_Z(edi, edi)) goto loc_0029E59A; /* je: equal / zero */

loc_0029E536: ;
    if (CMP_NE(edi, 0x6000)) goto loc_0029E5DC; /* jne: not equal / not zero */

loc_0029E542: ;
    PUSH32(esp, 0x5E98F8);
    eax = ebx;
    PUSH32(esp, 0); sub_002F7BE0(); /* call 0x002F7BE0 */

loc_0029E54E: ;
    PUSH32(esp, 0x5E9900);
    eax = ebx;
    PUSH32(esp, 0); sub_002F7BE0(); /* call 0x002F7BE0 */

loc_0029E55A: ;
    esp = esp + 8;
    POP32(esp, edi);
    POP32(esp, ebx);
    esp += 4; return; /* ret */

loc_0029E560: ;
    if (CMP_EQ(edi, 0x3FFE000)) goto loc_0029E59A; /* je: equal / zero */

loc_0029E568: ;
    if (CMP_NE(edi, 0xFFF0FFF)) goto loc_0029E5DC; /* jne: not equal / not zero */

loc_0029E570: ;
    PUSH32(esp, 0x605FF0);
    eax = ebx;
    PUSH32(esp, 0); sub_002F7BE0(); /* call 0x002F7BE0 */

loc_0029E57C: ;
    PUSH32(esp, 0x605AF0);
    eax = ebx;
    PUSH32(esp, 0); sub_002F7BE0(); /* call 0x002F7BE0 */

loc_0029E588: ;
    PUSH32(esp, 0x605AE8);
    eax = ebx;
    PUSH32(esp, 0); sub_002F7BE0(); /* call 0x002F7BE0 */

loc_0029E594: ;
    esp = esp + 0xC;
    POP32(esp, edi);
    POP32(esp, ebx);
    esp += 4; return; /* ret */

loc_0029E59A: ;
    PUSH32(esp, 0x5E98F8);
    eax = ebx;
    PUSH32(esp, 0); sub_002F7B90(); /* call 0x002F7B90 */

loc_0029E5A6: ;
    PUSH32(esp, 0x5E9900);
    eax = ebx;
    PUSH32(esp, 0); sub_002F7B90(); /* call 0x002F7B90 */

loc_0029E5B2: ;
    PUSH32(esp, 0x605FF0);
    eax = ebx;
    PUSH32(esp, 0); sub_002F7B90(); /* call 0x002F7B90 */

loc_0029E5BE: ;
    PUSH32(esp, 0x605AF0);
    eax = ebx;
    PUSH32(esp, 0); sub_002F7B90(); /* call 0x002F7B90 */

loc_0029E5CA: ;
    PUSH32(esp, 0x605AE8);
    eax = ebx;
    PUSH32(esp, 0); sub_002F7B90(); /* call 0x002F7B90 */

loc_0029E5D6: ;
    esp = esp + 0x14;
    POP32(esp, edi);
    POP32(esp, ebx);
    esp += 4; return; /* ret */

loc_0029E5DC: ;
    PUSH32(esp, 0); sub_0029E460(); /* call 0x0029E460 */

loc_0029E5E1: ;
    POP32(esp, edi);
    POP32(esp, ebx);
    esp += 4; return; /* ret */

}

/**
 * sub_0029E5F0
 * Original: 0x0029E5F0 - 0x0029E626 (54 bytes, 21 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0029E5F0(void)
{
    uint32_t ebp;
    int _flags = 0; /* fallback flag var */
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_0029E5F0: ;
    PUSH32(esp, ecx);
    eax = MEM32(esi + 0x4B0);
    ecx = MEM32(eax + 0x24);
    edx = MEM32(ecx + 8);
    eax = MEM32(edx + 0x10);
    ecx = esp;
    PUSH32(esp, ecx);
    PUSH32(esp, 1);
    PUSH32(esp, 0);
    PUSH32(esp, 0); sub_00415EC0(); /* call 0x00415EC0 */

loc_0029E60D: ;
    esp = esp + 0xC;
    if (TEST_Z(eax, eax)) goto loc_0029E622; /* je: equal / zero */

loc_0029E614: ;
    eax = MEM32(esp);
    if (TEST_Z(eax, eax)) goto loc_0029E622; /* je: equal / zero */

loc_0029E61B: ;
    ecx = MEM32(eax + 8);
    if (TEST_NZ(ecx, ecx)) { sub_0029E626(); return; } /* jne: not equal / not zero */

loc_0029E622: ;
    ecx = 0; /* xor self */
    g_seh_ebp = ebp; sub_0029E62B(); return; /* tail jmp 0x0029E62B */

}

/**
 * sub_0029E650
 * Original: 0x0029E650 - 0x0029E686 (54 bytes, 21 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0029E650(void)
{
    uint32_t ebp;
    int _flags = 0; /* fallback flag var */
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_0029E650: ;
    PUSH32(esp, ecx);
    eax = MEM32(esi + 0x4B0);
    ecx = MEM32(eax + 0x24);
    edx = MEM32(ecx + 8);
    eax = MEM32(edx + 0x10);
    ecx = esp;
    PUSH32(esp, ecx);
    PUSH32(esp, 1);
    PUSH32(esp, 0);
    PUSH32(esp, 0); sub_00415EC0(); /* call 0x00415EC0 */

loc_0029E66D: ;
    esp = esp + 0xC;
    if (TEST_Z(eax, eax)) goto loc_0029E682; /* je: equal / zero */

loc_0029E674: ;
    eax = MEM32(esp);
    if (TEST_Z(eax, eax)) goto loc_0029E682; /* je: equal / zero */

loc_0029E67B: ;
    ecx = MEM32(eax + 8);
    if (TEST_NZ(ecx, ecx)) { sub_0029E686(); return; } /* jne: not equal / not zero */

loc_0029E682: ;
    ecx = 0; /* xor self */
    g_seh_ebp = ebp; sub_0029E68B(); return; /* tail jmp 0x0029E68B */

}

/**
 * sub_0029E6B0
 * Original: 0x0029E6B0 - 0x0029E765 (181 bytes, 52 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0029E6B0(void)
{
    uint32_t ebp;
    int _flags = 0; /* fallback flag var */
    float xmm0;
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_0029E6B0: ;
    xmm0 = 0.0f; /* xorps self = zero */
    eax = MEM32(0x84A19C);
    PUSH32(esp, ebp);
    ebp = 0; /* xor self */
    (void)0; /* cmp eax, ebp - flags set for next jcc */
    MEMF(edi + 0x10) = xmm0; /* movss */
    MEMF(edi + 0x14) = xmm0; /* movss */
    xmm0 = MEMF(0x648D14); /* movss */
    MEM32(edi) = 0x60653C;
    MEM32(edi + 4) = ebp;
    MEM32(edi + 8) = ebp;
    MEM32(edi + 0xC) = ebp;
    MEMF(edi + 0x18) = xmm0; /* movss */
    MEM8(edi + 0x1C) = 1;
    MEM32(edi + 0x20) = ebp;
    if (CMP_NE(eax, ebp)) goto loc_0029E6F1; /* jne: not equal / not zero */

loc_0029E6EC: ;
    PUSH32(esp, 0); sub_002AED70(); /* call 0x002AED70 */

loc_0029E6F1: ;
    edx = MEM32(0x7FA494);
    ecx = MEM32(0x7FA4B4);
    PUSH32(esp, ebx);
    edx++;
    PUSH32(esp, esi);
    esi = MEM32(0x84A190);
    ecx++;
    (void)0; /* cmp esi, ebp - flags set for next jcc */
    MEM32(0x7FA494) = edx;
    MEM32(0x7FA4B4) = ecx;
    ebx = esi;
    if (CMP_EQ(esi, ebp)) goto loc_0029E73B; /* je: equal / zero */

loc_0029E719: ;
    if (CMP_B(MEM32(esi + 0x80), 0x18)) goto loc_0029E73B; /* jb: below (unsigned <) */

loc_0029E722: ;
    ecx = 4;
    PUSH32(esp, 0); sub_003E62A0(); /* call 0x003E62A0 */

loc_0029E72C: ;
    PUSH32(esp, 0x18);
    PUSH32(esp, ebx);
    PUSH32(esp, 0); sub_003E6BD0(); /* call 0x003E6BD0 */

loc_0029E734: ;
    esp = esp + 8;
    if (CMP_NE(eax, ebp)) goto loc_0029E75C; /* jne: not equal / not zero */

loc_0029E73B: ;
    esi = MEM32(0x84A184);
    ecx = 4;
    ebx = esi;
    PUSH32(esp, 0); sub_003E62A0(); /* call 0x003E62A0 */

loc_0029E74D: ;
    PUSH32(esp, 0x18);
    PUSH32(esp, ebx);
    PUSH32(esp, 0); sub_003E6BD0(); /* call 0x003E6BD0 */

loc_0029E755: ;
    esp = esp + 8;
    if (CMP_EQ(eax, ebp)) { sub_0029E765(); return; } /* je: equal / zero */

loc_0029E75C: ;
    esi = eax;
    PUSH32(esp, 0); sub_0029EB00(); /* call 0x0029EB00 */

loc_0029E763: ;
    g_seh_ebp = ebp; sub_0029E767(); return; /* tail jmp 0x0029E767 */

}

/**
 * sub_0029E790
 * Original: 0x0029E790 - 0x0029E7BA (42 bytes, 15 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0029E790(void)
{
    int _flags = 0; /* fallback flag var */

loc_0029E790: ;
    PUSH32(esp, esi);
    esi = ecx;
    PUSH32(esp, 0); sub_0029E7C0(); /* call 0x0029E7C0 */

loc_0029E798: ;
    if (TEST_Z(MEM8(esp + 8), 1)) goto loc_0029E7B4; /* je: equal / zero */

loc_0029E79F: ;
    (void)0; /* test esi, esi - flags set for next jcc */
    MEM32(esp + 8) = esi;
    if (TEST_Z(esi, esi)) goto loc_0029E7B4; /* je: equal / zero */

loc_0029E7A7: ;
    eax = esp + 8;
    PUSH32(esp, eax);
    PUSH32(esp, 0); sub_002AF1C0(); /* call 0x002AF1C0 */

loc_0029E7B1: ;
    esp = esp + 4;

loc_0029E7B4: ;
    eax = esi;
    POP32(esp, esi);
    esp += 8; return; /* ret 4 */

}

/**
 * sub_0029E7C0
 * Original: 0x0029E7C0 - 0x0029E8D0 (272 bytes, 97 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0029E7C0(void)
{
    uint32_t ebp;
    int _flags = 0; /* fallback flag var */
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_0029E7C0: ;
    PUSH32(esp, ecx);
    PUSH32(esp, ebx);
    PUSH32(esp, ebp);
    ebp = ecx;
    ebx = MEM32(ebp + 8);
    PUSH32(esp, edi);
    edi = MEM32(ebp + 4);
    MEM32(ebp) = 0x60653C;
    PUSH32(esp, 0); sub_0029E8D0(); /* call 0x0029E8D0 */

loc_0029E7D8: ;
    eax = MEM32(ebp + 0x20);
    ebx = 0; /* xor self */
    (void)0; /* cmp eax, ebx - flags set for next jcc */
    MEM32(ebp + 4) = ebx;
    MEM32(ebp + 8) = ebx;
    if (CMP_EQ(eax, ebx)) goto loc_0029E8CB; /* je: equal / zero */

loc_0029E7EB: ;
    (void)0; /* cmp MEM32(eax + 4), ebx - flags set for next jcc */
    PUSH32(esp, esi);
    if (CMP_EQ(MEM32(eax + 4), ebx)) goto loc_0029E89B; /* je: equal / zero */

loc_0029E7F5: ;
    eax = MEM32(ebp + 0x20);
    edi = MEM32(eax + 8);
    if (CMP_EQ(edi, ebx)) goto loc_0029E88B; /* je: equal / zero */

loc_0029E803: ;
    edx = MEM32(eax + 4);
    if (CMP_EQ(edx, ebx)) goto loc_0029E88B; /* je: equal / zero */

loc_0029E80E: ;
    ecx = MEM32(eax + 0x14);
    ecx = ecx - ebx;
    if ((ecx == 0)) goto loc_0029E82C; /* je: equal / zero */

loc_0029E815: ;
    ecx--;
    if ((ecx != 0)) goto loc_0029E88B; /* jne: not equal / not zero */

loc_0029E818: ;
    ecx = MEM32(eax + 0x10);
    esi = MEM32(eax);
    ecx--;
    MEM32(eax + 0x10) = ecx;
    ecx = MEM32(esi + ecx * 4);
    edx--;
    MEM32(eax + 4) = edx;
    esi = ecx;
    goto loc_0029E843;

loc_0029E82C: ;
    ecx = MEM32(eax + 0xC);
    esi = MEM32(eax);
    esi = MEM32(esi + ecx * 4);
    edx--;
    ecx++;
    (void)0; /* cmp ecx, edi - flags set for next jcc */
    MEM32(eax + 4) = edx;
    MEM32(eax + 0xC) = ecx;
    if (CMP_NE(ecx, edi)) goto loc_0029E843; /* jne: not equal / not zero */

loc_0029E840: ;
    MEM32(eax + 0xC) = ebx;

loc_0029E843: ;
    if (CMP_EQ(esi, ebx)) goto loc_0029E88B; /* je: equal / zero */

loc_0029E847: ;
    ebx = MEM32(esi + 4);
    edi = MEM32(esi);
    PUSH32(esp, 0); sub_0029E8D0(); /* call 0x0029E8D0 */

loc_0029E851: ;
    PUSH32(esp, esi);
    MEM32(esi) = 0;
    MEM32(esi + 4) = 0;
    PUSH32(esp, 0); sub_0042C911(); /* call 0x0042C911 */

loc_0029E864: ;
    if (TEST_NZ(eax, eax)) goto loc_0029E88B; /* jne: not equal / not zero */

loc_0029E868: ;
    edi = MEM32(0x7FA490);
    edx = MEM32(0x7FA4B4);
    edi++;
    edx--;
    PUSH32(esp, esi);
    MEM32(0x7FA490) = edi;
    MEM32(0x7FA4B4) = edx;
    PUSH32(esp, 0); sub_003E7080(); /* call 0x003E7080 */

loc_0029E888: ;
    esp = esp + 4;

loc_0029E88B: ;
    eax = MEM32(ebp + 0x20);
    ecx = MEM32(eax + 4);
    ebx = 0; /* xor self */
    if (CMP_NE(ecx, ebx)) goto loc_0029E7F5; /* jne: not equal / not zero */

loc_0029E89B: ;
    esi = MEM32(ebp + 0x20);
    if (CMP_EQ(esi, ebx)) goto loc_0029E8C7; /* je: equal / zero */

loc_0029E8A2: ;
    if (CMP_EQ(MEM32(esi + 8), ebx)) goto loc_0029E8B6; /* je: equal / zero */

loc_0029E8A7: ;
    eax = MEM32(esi);
    if (CMP_EQ(eax, ebx)) goto loc_0029E8B6; /* je: equal / zero */

loc_0029E8AD: ;
    PUSH32(esp, eax);
    PUSH32(esp, 0); sub_0046E4B6(); /* call 0x0046E4B6 */

loc_0029E8B3: ;
    esp = esp + 4;

loc_0029E8B6: ;
    ecx = esp + 0x10;
    PUSH32(esp, ecx);
    MEM32(esp + 0x14) = esi;
    PUSH32(esp, 0); sub_002AF1C0(); /* call 0x002AF1C0 */

loc_0029E8C4: ;
    esp = esp + 4;

loc_0029E8C7: ;
    MEM32(ebp + 0x20) = ebx;
    POP32(esp, esi);

loc_0029E8CB: ;
    POP32(esp, edi);
    POP32(esp, ebp);
    POP32(esp, ebx);
    POP32(esp, ecx);
    esp += 4; return; /* ret */

}

/**
 * sub_0029E8D0
 * Original: 0x0029E8D0 - 0x0029E905 (53 bytes, 23 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0029E8D0(void)
{
    int _flags = 0; /* fallback flag var */

loc_0029E8D0: ;
    if (TEST_Z(edi, edi)) goto loc_0029E904; /* je: equal / zero */

loc_0029E8D4: ;
    PUSH32(esp, esi);
    esi = 0; /* xor self */
    if (CMP_LE(ebx & ebx, 0)) goto loc_0029E8FA; /* jle: less or equal (signed <=) */

loc_0029E8DB: ;
    goto loc_0029E8E0;

    /* nop */

loc_0029E8E0: ;
    ecx = MEM32(edi + esi * 4);
    if (TEST_Z(ecx, ecx)) goto loc_0029E8F5; /* je: equal / zero */

loc_0029E8E7: ;
    eax = MEM32(ecx);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, 1);
    PUSH32(esp, 0); RECOMP_ICALL_SAFE(MEM32(eax + 0x14), _icall_esp); /* indirect call */
    }

loc_0029E8EE: ;
    MEM32(edi + esi * 4) = 0;

loc_0029E8F5: ;
    esi++;
    if (CMP_L(esi, ebx)) goto loc_0029E8E0; /* jl: less (signed <) */

loc_0029E8FA: ;
    PUSH32(esp, edi);
    PUSH32(esp, 0); sub_0046E4B6(); /* call 0x0046E4B6 */

loc_0029E900: ;
    esp = esp + 4;
    POP32(esp, esi);

loc_0029E904: ;
    esp += 4; return; /* ret */

}

/**
 * sub_0029E910
 * Original: 0x0029E910 - 0x0029E99F (143 bytes, 44 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0029E910(void)
{
    int _flags = 0; /* fallback flag var */

loc_0029E910: ;
    eax = MEM32(0x84A19C);
    if (TEST_NZ(eax, eax)) goto loc_0029E91E; /* jne: not equal / not zero */

loc_0029E919: ;
    PUSH32(esp, 0); sub_002AED70(); /* call 0x002AED70 */

loc_0029E91E: ;
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
    if (TEST_Z(esi, esi)) goto loc_0029E968; /* je: equal / zero */

loc_0029E946: ;
    if (CMP_B(MEM32(esi + 0x80), 0xC)) goto loc_0029E968; /* jb: below (unsigned <) */

loc_0029E94F: ;
    ecx = 4;
    PUSH32(esp, 0); sub_003E62A0(); /* call 0x003E62A0 */

loc_0029E959: ;
    PUSH32(esp, 0xC);
    PUSH32(esp, edi);
    PUSH32(esp, 0); sub_003E6BD0(); /* call 0x003E6BD0 */

loc_0029E961: ;
    esp = esp + 8;
    if (TEST_NZ(eax, eax)) { sub_0029E99F(); return; } /* jne: not equal / not zero */

loc_0029E968: ;
    esi = MEM32(0x84A184);
    ecx = 4;
    edi = esi;
    PUSH32(esp, 0); sub_003E62A0(); /* call 0x003E62A0 */

loc_0029E97A: ;
    PUSH32(esp, 0xC);
    PUSH32(esp, edi);
    PUSH32(esp, 0); sub_003E6BD0(); /* call 0x003E6BD0 */

loc_0029E982: ;
    esp = esp + 8;
    if (TEST_NZ(eax, eax)) { sub_0029E99F(); return; } /* jne: not equal / not zero */

loc_0029E989: ;
    PUSH32(esp, 0x587BE4);
    PUSH32(esp, eax);
    PUSH32(esp, 0x587BE4);
    PUSH32(esp, 0); sub_001F0620(); /* call 0x001F0620 */

loc_0029E999: ;
    esp = esp + 0xC;
    POP32(esp, edi);
    POP32(esp, esi);
    esp += 4; return; /* ret */

}

/**
 * sub_0029E9C0
 * Original: 0x0029E9C0 - 0x0029EA06 (70 bytes, 27 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0029E9C0(void)
{
    int _flags = 0; /* fallback flag var */

loc_0029E9C0: ;
    PUSH32(esp, ecx);
    eax = MEM32(esi + 0x20);
    ecx = MEM32(eax + 4);
    if (TEST_Z(ecx, ecx)) goto loc_0029EA04; /* je: equal / zero */

loc_0029E9CB: ;
    PUSH32(esp, ebx);
    ebx = MEM32(esi + 8);
    PUSH32(esp, edi);
    edi = MEM32(esi + 4);
    PUSH32(esp, 0); sub_0029E8D0(); /* call 0x0029E8D0 */

loc_0029E9D8: ;
    ecx = MEM32(esi + 0x20);
    PUSH32(esp, 0); sub_0029EAA0(); /* call 0x0029EAA0 */

loc_0029E9E0: ;
    ecx = MEM32(eax);
    MEM32(esi + 4) = ecx;
    edx = MEM32(eax + 4);
    MEM32(esi + 8) = edx;
    ecx = MEM32(eax + 8);
    edx = esp + 8;
    PUSH32(esp, edx);
    MEM32(esi + 0xC) = ecx;
    MEM32(esp + 0xC) = eax;
    PUSH32(esp, 0); sub_002AF1C0(); /* call 0x002AF1C0 */

loc_0029E9FF: ;
    esp = esp + 4;
    POP32(esp, edi);
    POP32(esp, ebx);

loc_0029EA04: ;
    POP32(esp, ecx);
    esp += 4; return; /* ret */

}

/**
 * sub_0029EA10
 * Original: 0x0029EA10 - 0x0029EA3A (42 bytes, 21 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0029EA10(void)
{
    int _flags = 0; /* fallback flag var */

loc_0029EA10: ;
    PUSH32(esp, edi);
    edi = ecx;
    eax = MEM32(edi + 4);
    if (TEST_Z(eax, eax)) goto loc_0029EA38; /* je: equal / zero */

loc_0029EA1A: ;
    eax = MEM32(edi + 8);
    PUSH32(esp, esi);
    esi = 0; /* xor self */
    if (CMP_LE(eax & eax, 0)) goto loc_0029EA37; /* jle: less or equal (signed <=) */

loc_0029EA24: ;
    eax = MEM32(edi + 4);
    ecx = MEM32(eax + esi * 4);
    edx = MEM32(ecx);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, 0); RECOMP_ICALL_SAFE(MEM32(edx + 0x10), _icall_esp); /* indirect call */
    }

loc_0029EA2F: ;
    eax = MEM32(edi + 8);
    esi++;
    if (CMP_L(esi, eax)) goto loc_0029EA24; /* jl: less (signed <) */

loc_0029EA37: ;
    POP32(esp, esi);

loc_0029EA38: ;
    POP32(esp, edi);
    esp += 4; return; /* ret */

}

/**
 * sub_0029EA40
 * Original: 0x0029EA40 - 0x0029EA98 (88 bytes, 38 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0029EA40(void)
{
    int _flags = 0; /* fallback flag var */

loc_0029EA40: ;
    ecx = MEM32(eax + 8);
    if (TEST_Z(ecx, ecx)) goto loc_0029EA97; /* je: equal / zero */

loc_0029EA47: ;
    PUSH32(esp, esi);
    if (CMP_EQ(MEM32(eax + 4), ecx)) goto loc_0029EA96; /* je: equal / zero */

loc_0029EA4D: ;
    ecx = MEM32(eax + 0x14);
    ecx = ecx - 0;
    if ((ecx == 0)) goto loc_0029EA70; /* je: equal / zero */

loc_0029EA55: ;
    ecx--;
    if ((ecx != 0)) goto loc_0029EA96; /* jne: not equal / not zero */

loc_0029EA58: ;
    ecx = MEM32(eax + 0x10);
    esi = MEM32(eax);
    MEM32(esi + ecx * 4) = edx;
    edx = MEM32(eax + 0x10);
    ecx = MEM32(eax + 4);
    edx++;
    ecx++;
    MEM32(eax + 0x10) = edx;
    MEM32(eax + 4) = ecx;
    POP32(esp, esi);
    esp += 4; return; /* ret */

loc_0029EA70: ;
    ecx = MEM32(eax + 0x10);
    esi = MEM32(eax);
    MEM32(esi + ecx * 4) = edx;
    ecx = MEM32(eax + 4);
    esi = MEM32(eax + 0x10);
    edx = MEM32(eax + 8);
    ecx++;
    esi++;
    MEM32(eax + 4) = ecx;
    ecx = esi;
    (void)0; /* cmp ecx, edx - flags set for next jcc */
    MEM32(eax + 0x10) = esi;
    if (CMP_NE(ecx, edx)) goto loc_0029EA96; /* jne: not equal / not zero */

loc_0029EA8F: ;
    MEM32(eax + 0x10) = 0;

loc_0029EA96: ;
    POP32(esp, esi);

loc_0029EA97: ;
    esp += 4; return; /* ret */

}

/**
 * sub_0029EAA0
 * Original: 0x0029EAA0 - 0x0029EAAC (12 bytes, 7 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0029EAA0(void)
{
    int _flags = 0; /* fallback flag var */

loc_0029EAA0: ;
    PUSH32(esp, edi);
    edi = MEM32(ecx + 8);
    if (TEST_NZ(edi, edi)) { sub_0029EAAC(); return; } /* jne: not equal / not zero */

loc_0029EAA8: ;
    eax = 0; /* xor self */
    POP32(esp, edi);
    esp += 4; return; /* ret */

}

/**
 * sub_0029EB00
 * Original: 0x0029EB00 - 0x0029EB4F (79 bytes, 19 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0029EB00(void)
{
    int _flags = 0; /* fallback flag var */

loc_0029EB00: ;
    PUSH32(esp, 0x20);
    MEM32(esi) = 0;
    MEM32(esi + 4) = 0;
    MEM32(esi + 8) = 8;
    MEM32(esi + 0xC) = 0;
    MEM32(esi + 0x10) = 0;
    MEM32(esi + 0x14) = 1;
    PUSH32(esp, 0); sub_0046DAB2(); /* call 0x0046DAB2 */

loc_0029EB30: ;
    esp = esp + 4;
    (void)0; /* test eax, eax - flags set for next jcc */
    MEM32(esi) = eax;
    if (TEST_NZ(eax, eax)) goto loc_0029EB4C; /* jne: not equal / not zero */

loc_0029EB39: ;
    PUSH32(esp, 0x587BE4);
    PUSH32(esp, eax);
    PUSH32(esp, 0x587BE4);
    PUSH32(esp, 0); sub_001F0620(); /* call 0x001F0620 */

loc_0029EB49: ;
    esp = esp + 0xC;

loc_0029EB4C: ;
    eax = esi;
    esp += 4; return; /* ret */

}

/**
 * sub_0029EB50
 * Original: 0x0029EB50 - 0x0029EC04 (180 bytes, 53 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0029EB50(void)
{
    int _flags = 0; /* fallback flag var */

loc_0029EB50: ;
    eax = MEM32(0x84A0E0);
    if (TEST_NZ(eax, eax)) goto loc_0029EC03; /* jne: not equal / not zero */

loc_0029EB5D: ;
    eax = MEM32(0x84A19C);
    if (TEST_NZ(eax, eax)) goto loc_0029EB6B; /* jne: not equal / not zero */

loc_0029EB66: ;
    PUSH32(esp, 0); sub_002AED70(); /* call 0x002AED70 */

loc_0029EB6B: ;
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
    if (TEST_Z(esi, esi)) goto loc_0029EBB5; /* je: equal / zero */

loc_0029EB93: ;
    if (CMP_B(MEM32(esi + 0x80), 4)) goto loc_0029EBB5; /* jb: below (unsigned <) */

loc_0029EB9C: ;
    ecx = 4;
    PUSH32(esp, 0); sub_003E62A0(); /* call 0x003E62A0 */

loc_0029EBA6: ;
    PUSH32(esp, 1);
    PUSH32(esp, edi);
    PUSH32(esp, 0); sub_003E6BD0(); /* call 0x003E6BD0 */

loc_0029EBAE: ;
    esp = esp + 8;
    if (TEST_NZ(eax, eax)) goto loc_0029EBD6; /* jne: not equal / not zero */

loc_0029EBB5: ;
    esi = MEM32(0x84A184);
    ecx = 4;
    edi = esi;
    PUSH32(esp, 0); sub_003E62A0(); /* call 0x003E62A0 */

loc_0029EBC7: ;
    PUSH32(esp, 1);
    PUSH32(esp, edi);
    PUSH32(esp, 0); sub_003E6BD0(); /* call 0x003E6BD0 */

loc_0029EBCF: ;
    esp = esp + 8;
    if (TEST_Z(eax, eax)) goto loc_0029EBDE; /* je: equal / zero */

loc_0029EBD6: ;
    POP32(esp, edi);
    MEM32(0x84A0E0) = eax;
    POP32(esp, esi);
    esp += 4; return; /* ret */

loc_0029EBDE: ;
    PUSH32(esp, 0x587BE4);
    PUSH32(esp, 0);
    PUSH32(esp, 0x587BE4);
    MEM32(0x84A0E0) = 0;
    PUSH32(esp, 0); sub_001F0620(); /* call 0x001F0620 */

loc_0029EBF9: ;
    eax = MEM32(0x84A0E0);
    esp = esp + 0xC;
    POP32(esp, edi);
    POP32(esp, esi);

loc_0029EC03: ;
    esp += 4; return; /* ret */

}

/**
 * sub_0029EC10
 * Original: 0x0029EC10 - 0x0029ECAD (157 bytes, 49 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0029EC10(void)
{
    int _flags = 0; /* fallback flag var */

loc_0029EC10: ;
    eax = MEM32(0x84A19C);
    if (TEST_NZ(eax, eax)) goto loc_0029EC1E; /* jne: not equal / not zero */

loc_0029EC19: ;
    PUSH32(esp, 0); sub_002AED70(); /* call 0x002AED70 */

loc_0029EC1E: ;
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
    if (TEST_Z(esi, esi)) goto loc_0029EC68; /* je: equal / zero */

loc_0029EC46: ;
    if (CMP_B(MEM32(esi + 0x80), 0x68)) goto loc_0029EC68; /* jb: below (unsigned <) */

loc_0029EC4F: ;
    ecx = 0x10;
    PUSH32(esp, 0); sub_003E62A0(); /* call 0x003E62A0 */

loc_0029EC59: ;
    PUSH32(esp, 0x68);
    PUSH32(esp, edi);
    PUSH32(esp, 0); sub_003E6BD0(); /* call 0x003E6BD0 */

loc_0029EC61: ;
    esp = esp + 8;
    if (TEST_NZ(eax, eax)) goto loc_0029EC89; /* jne: not equal / not zero */

loc_0029EC68: ;
    esi = MEM32(0x84A184);
    ecx = 0x10;
    edi = esi;
    PUSH32(esp, 0); sub_003E62A0(); /* call 0x003E62A0 */

loc_0029EC7A: ;
    PUSH32(esp, 0x68);
    PUSH32(esp, edi);
    PUSH32(esp, 0); sub_003E6BD0(); /* call 0x003E6BD0 */

loc_0029EC82: ;
    esp = esp + 8;
    if (TEST_Z(eax, eax)) { sub_0029ECAD(); return; } /* je: equal / zero */

loc_0029EC89: ;
    PUSH32(esp, 0); sub_00011000(); /* call 0x00011000 */

loc_0029EC8E: ;
    esi = eax;
    if (TEST_NZ(esi, esi)) goto loc_0029ECA8; /* jne: not equal / not zero */

loc_0029EC94: ;
    PUSH32(esp, 0x587BE4);
    PUSH32(esp, 0);
    PUSH32(esp, 0x587BE4);
    PUSH32(esp, 0); sub_001F0620(); /* call 0x001F0620 */

loc_0029ECA5: ;
    esp = esp + 0xC;

loc_0029ECA8: ;
    POP32(esp, edi);
    eax = esi;
    POP32(esp, esi);
    esp += 4; return; /* ret */

}

/**
 * sub_0029ECC0
 * Original: 0x0029ECC0 - 0x0029ED05 (69 bytes, 22 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0029ECC0(void)
{
    int _flags = 0; /* fallback flag var */

loc_0029ECC0: ;
    eax = MEM32(esi + 0xC);
    if (TEST_Z(eax, eax)) goto loc_0029ECD7; /* je: equal / zero */

loc_0029ECC7: ;
    PUSH32(esp, eax);
    PUSH32(esp, 0); sub_0046E4B6(); /* call 0x0046E4B6 */

loc_0029ECCD: ;
    esp = esp + 4;
    MEM32(esi + 0xC) = 0;

loc_0029ECD7: ;
    PUSH32(esp, edi);
    PUSH32(esp, 0); sub_0046E45A(); /* call 0x0046E45A */

loc_0029ECDD: ;
    eax = eax + eax + 2;
    PUSH32(esp, eax);
    PUSH32(esp, 0); sub_0046DAB2(); /* call 0x0046DAB2 */

loc_0029ECE7: ;
    esp = esp + 8;
    (void)0; /* test eax, eax - flags set for next jcc */
    MEM32(esi + 0xC) = eax;
    if (TEST_NZ(eax, eax)) { sub_0029ED05(); return; } /* jne: not equal / not zero */

loc_0029ECF1: ;
    PUSH32(esp, 0x587BE4);
    PUSH32(esp, eax);
    PUSH32(esp, 0x587BE4);
    PUSH32(esp, 0); sub_001F0620(); /* call 0x001F0620 */

loc_0029ED01: ;
    esp = esp + 0xC;
    esp += 4; return; /* ret */

}

/**
 * sub_0029ED60
 * Original: 0x0029ED60 - 0x0029ED76 (22 bytes, 11 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0029ED60(void)
{
    int _flags = 0; /* fallback flag var */

loc_0029ED60: ;
    eax = MEM32(ecx + 8);
    if (TEST_Z(eax, eax)) goto loc_0029ED75; /* je: equal / zero */

loc_0029ED67: ;
    PUSH32(esp, ebx);
    SET_LO8(ebx, MEM8(eax));
    edx = 0; /* xor self */
    (void)0; /* test LO8(ebx), LO8(ebx) - flags set for next jcc */
    SET_LO8(edx, (TEST_Z(LO8(ebx), LO8(ebx))) ? 1 : 0); /* sete */
    POP32(esp, ebx);
    MEM32(ecx + 0x10) = edx;

loc_0029ED75: ;
    esp += 4; return; /* ret */

}

/**
 * sub_0029ED80
 * Original: 0x0029ED80 - 0x0029EDD2 (82 bytes, 17 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0029ED80(void)
{
    uint32_t ebp;
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_0029ED80: ;
    esp = esp - 0xB4;
    edx = MEM32(esp + 0xB8);
    PUSH32(esp, ebx);
    PUSH32(esp, ebp);
    PUSH32(esp, esi);
    ebx = eax;
    PUSH32(esp, edi);
    MEM32(esp + 0x80) = edx;
    MEM32(esp + 0x28) = 0x67452301;
    MEM32(esp + 0x2C) = 0xEFCDAB89u;
    MEM32(esp + 0x30) = 0x98BADCFEu;
    MEM32(esp + 0x34) = 0x10325476;
    MEM32(esp + 0x38) = 0xC3D2E1F0u;
    MEM8(esp + 0x1A) = 0;
    MEM8(esp + 0x1B) = 0;
    MEM32(esp + 0x3C) = ebx;
    g_seh_ebp = ebp; sub_0029EDE0(); return; /* tail jmp 0x0029EDE0 */

}

/**
 * sub_0029F590
 * Original: 0x0029F590 - 0x0029F5AC (28 bytes, 9 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0029F590(void)
{
    int _flags = 0; /* fallback flag var */
    float xmm0;

loc_0029F590: ;
    xmm0 = MEMF(esp + 4); /* movss */
    /* comiss xmm0, MEMF(eax + 4) - sets EFLAGS */
    PUSH32(esp, esi);
    esi = MEM32(esp + 0xC);
    if ((xmm0 <= MEMF(eax + 4))) { sub_0029F5AC(); return; } /* jbe: below or equal (unsigned <=) */

loc_0029F5A1: ;
    MEM8(esi + 0xA4) = MEM8(esi + 0xA4) & 0xFD;
    SET_LO8(eax, 0); /* xor self */
    POP32(esp, esi);
    esp += 4; return; /* ret */

}

/**
 * sub_0029F610
 * Original: 0x0029F610 - 0x0029F62C (28 bytes, 8 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0029F610(void)
{
    int _flags = 0; /* fallback flag var */
    float xmm0;

loc_0029F610: ;
    xmm0 = MEMF(esp + 4); /* movss */
    esp = esp - 8;
    /* comiss xmm0, MEMF(eax + 4) - sets EFLAGS */
    if ((xmm0 <= MEMF(eax + 4))) { sub_0029F62C(); return; } /* jbe: below or equal (unsigned <=) */

loc_0029F61F: ;
    MEM8(esi + 0xA4) = MEM8(esi + 0xA4) & 0xFD;
    SET_LO8(eax, 0); /* xor self */
    esp = esp + 8;
    esp += 4; return; /* ret */

}

/**
 * sub_0029F6B0
 * Original: 0x0029F6B0 - 0x0029F712 (98 bytes, 35 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0029F6B0(void)
{
    uint32_t ebp;
    int _flags = 0; /* fallback flag var */
    float xmm0, xmm1;
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_0029F6B0: ;
    PUSH32(esp, ecx);
    PUSH32(esp, ebx);
    ebx = MEM32(esp + 0xC);
    PUSH32(esp, esi);
    PUSH32(esp, edi);
    esi = ecx;
    edi = eax;
    if (TEST_Z(MEM8(esi + 0xA4), 4)) { sub_0029F712(); return; } /* je: equal / zero */

loc_0029F6C5: ;
    ecx = MEM32(ebx + 8);
    edx = MEM32(ebx);
    PUSH32(esp, edi);
    eax = esp + 0x10;
    PUSH32(esp, eax);
    PUSH32(esp, ecx);
    eax = esi + 0x10;
    PUSH32(esp, edx);
    PUSH32(esp, 0); sub_00066BF0(); /* call 0x00066BF0 */

loc_0029F6DA: ;
    esp = esp + 0x10;
    if (TEST_Z(eax, eax)) { sub_0029F712(); return; } /* je: equal / zero */

loc_0029F6E1: ;
    xmm0 = MEMF(esp + 0xC); /* movss */
    /* comiss xmm0, MEMF(esp + 0x18) - sets EFLAGS */
    if ((xmm0 < MEMF(esp + 0x18))) goto loc_0029F70E; /* jb: below (unsigned <) */

loc_0029F6EE: ;
    xmm1 = MEMF(ebx + 4); /* movss */
    /* comiss xmm1, xmm0 - sets EFLAGS */
    if ((xmm1 < xmm0)) goto loc_0029F70E; /* jb: below (unsigned <) */

loc_0029F6F8: ;
    SET_LO8(ecx, MEM8(esi + 0xA4));
    SET_LO8(eax, 2);
    SET_LO8(ecx, LO8(ecx) | LO8(eax));
    MEMF(esi) = xmm0; /* movss */
    MEM8(esi + 0xA4) = LO8(ecx);
    g_seh_ebp = ebp; sub_0029F714(); return; /* tail jmp 0x0029F714 */

loc_0029F70E: ;
    SET_LO8(eax, 1);
    g_seh_ebp = ebp; sub_0029F714(); return; /* tail jmp 0x0029F714 */

}

/**
 * sub_0029F750
 * Original: 0x0029F750 - 0x0029F7AE (94 bytes, 33 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0029F750(void)
{
    uint32_t ebp;
    int _flags = 0; /* fallback flag var */
    float xmm0, xmm1;
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_0029F750: ;
    PUSH32(esp, ecx);
    PUSH32(esp, esi);
    esi = eax;
    (void)0; /* test MEM8(esi + 0xA4), 4 - flags set for next jcc */
    PUSH32(esp, edi);
    edi = ecx;
    if (TEST_Z(MEM8(esi + 0xA4), 4)) { sub_0029F7AE(); return; } /* je: equal / zero */

loc_0029F760: ;
    ecx = MEM32(edi + 8);
    edx = MEM32(edi);
    PUSH32(esp, 0);
    eax = esp + 0xC;
    PUSH32(esp, eax);
    PUSH32(esp, ecx);
    eax = esi + 0x10;
    PUSH32(esp, edx);
    PUSH32(esp, 0); sub_00066BF0(); /* call 0x00066BF0 */

loc_0029F776: ;
    esp = esp + 0x10;
    if (TEST_Z(eax, eax)) { sub_0029F7AE(); return; } /* je: equal / zero */

loc_0029F77D: ;
    xmm0 = MEMF(esp + 8); /* movss */
    /* comiss xmm0, MEMF(esp + 0x10) - sets EFLAGS */
    if ((xmm0 < MEMF(esp + 0x10))) goto loc_0029F7AA; /* jb: below (unsigned <) */

loc_0029F78A: ;
    xmm1 = MEMF(edi + 4); /* movss */
    /* comiss xmm1, xmm0 - sets EFLAGS */
    if ((xmm1 < xmm0)) goto loc_0029F7AA; /* jb: below (unsigned <) */

loc_0029F794: ;
    SET_LO8(ecx, MEM8(esi + 0xA4));
    SET_LO8(eax, 2);
    SET_LO8(ecx, LO8(ecx) | LO8(eax));
    MEMF(esi) = xmm0; /* movss */
    MEM8(esi + 0xA4) = LO8(ecx);
    g_seh_ebp = ebp; sub_0029F7B0(); return; /* tail jmp 0x0029F7B0 */

loc_0029F7AA: ;
    SET_LO8(eax, 1);
    g_seh_ebp = ebp; sub_0029F7B0(); return; /* tail jmp 0x0029F7B0 */

}

/**
 * sub_0029F7F0
 * Original: 0x0029F7F0 - 0x0029F84B (91 bytes, 31 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0029F7F0(void)
{
    uint32_t ebp;
    int _flags = 0; /* fallback flag var */
    float xmm0, xmm1;
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_0029F7F0: ;
    PUSH32(esp, ecx);
    PUSH32(esp, ebx);
    ebx = eax;
    if (TEST_Z(MEM8(ebx + 0xA4), 4)) { sub_0029F84B(); return; } /* je: equal / zero */

loc_0029F7FD: ;
    ecx = MEM32(esi + 8);
    edx = MEM32(esi);
    PUSH32(esp, 0);
    eax = esp + 8;
    PUSH32(esp, eax);
    PUSH32(esp, ecx);
    eax = ebx + 0x10;
    PUSH32(esp, edx);
    PUSH32(esp, 0); sub_00066BF0(); /* call 0x00066BF0 */

loc_0029F813: ;
    esp = esp + 0x10;
    if (TEST_Z(eax, eax)) { sub_0029F84B(); return; } /* je: equal / zero */

loc_0029F81A: ;
    xmm0 = MEMF(esp + 4); /* movss */
    /* comiss xmm0, MEMF(esp + 0x10) - sets EFLAGS */
    if ((xmm0 < MEMF(esp + 0x10))) goto loc_0029F847; /* jb: below (unsigned <) */

loc_0029F827: ;
    xmm1 = MEMF(esi + 4); /* movss */
    /* comiss xmm1, xmm0 - sets EFLAGS */
    if ((xmm1 < xmm0)) goto loc_0029F847; /* jb: below (unsigned <) */

loc_0029F831: ;
    SET_LO8(ecx, MEM8(ebx + 0xA4));
    SET_LO8(eax, 2);
    SET_LO8(ecx, LO8(ecx) | LO8(eax));
    MEMF(ebx) = xmm0; /* movss */
    MEM8(ebx + 0xA4) = LO8(ecx);
    g_seh_ebp = ebp; sub_0029F84D(); return; /* tail jmp 0x0029F84D */

loc_0029F847: ;
    SET_LO8(eax, 1);
    g_seh_ebp = ebp; sub_0029F84D(); return; /* tail jmp 0x0029F84D */

}

/**
 * sub_0029F880
 * Original: 0x0029F880 - 0x0029F8CE (78 bytes, 14 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0029F880(void)
{

loc_0029F880: ;
    PUSH32(esp, eax);
    PUSH32(esp, ecx);
    MEM32(0x780AB0) = 0x606564;
    MEM32(0x6C0210) = 0x44B;
    MEM8(0x84B538) = 1;
    MEM32(0x74FA2C) = 0x2000;
    PUSH32(esp, 0); sub_0029F8D0(); /* call 0x0029F8D0 */

loc_0029F8AC: ;
    ecx = 0; /* xor self */
    esp = esp + 8;
    MEM32(0x780AB0) = ecx;
    MEM32(0x6C0210) = 0xFFFFFFFFu;
    MEM8(0x84B538) = LO8(ecx);
    MEM32(0x74FA2C) = ecx;
    esp += 4; return; /* ret */

}

/**
 * sub_0029F8D0
 * Original: 0x0029F8D0 - 0x0029FA20 (336 bytes, 84 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0029F8D0(void)
{
    uint32_t ebp;
    int _flags = 0; /* fallback flag var */
    float xmm0, xmm1;
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_0029F8D0: ;
    esp = esp - 0x14;
    xmm0 = MEMF(0x648E60); /* movss */
    eax = MEM32(esp + 0x18);
    PUSH32(esp, ebx);
    PUSH32(esp, ebp);
    ebp = MEM32(esp + 0x24);
    PUSH32(esp, esi);
    esi = MEM32(esp + 0x24);
    PUSH32(esp, edi);
    MEMF(ebp) = xmm0; /* movss */
    MEMF(esp + 0x10) = xmm1; /* movss */
    xmm1 = MEMF(esi); /* movss */
    MEMF(esp + 0x1C) = xmm0; /* movss */
    xmm0 = MEMF(esi + 8); /* movss */
    ebx = 0; /* xor self */
    PUSH32(esp, eax);
    ecx = esp + 0x1C;
    edx = esi;
    edi = 0x870EE0;
    MEM8(esp + 0x30) = LO8(ebx);
    MEMF(esp + 0x1C) = xmm1; /* movss */
    MEMF(esp + 0x24) = xmm0; /* movss */
    PUSH32(esp, 0); sub_00066E90(); /* call 0x00066E90 */

loc_0029F928: ;
    edi = eax;
    ecx = MEM32(edi);
    if (CMP_EQ(ecx, ebx)) goto loc_0029FA14; /* je: equal / zero */

loc_0029F934: ;
    goto loc_0029F940;

    /* nop */
    /* nop */

loc_0029F940: ;
    xmm0 = MEMF(0x648D14); /* movss */
    MEM32(0x76FC50) = ebx;
    MEMF(0x76FC3C) = xmm0; /* movss */
    MEM32(0x76FC58) = ebx;
    edx = MEM32(ecx + 0x140);
    MEM32(0x812A18) = edx;
    MEM32(0x819B24) = 1;
    eax = ecx + 0x20;
    ecx = MEM32(ecx + 0x60);
    edx = MEM32(ecx + 0x24);
    ecx = MEM32(edx + 0x18);
    edx = MEM32(ecx + 0x14);
    PUSH32(esp, 0x76FC38);
    PUSH32(esp, edx);
    ecx = esp + 0x20;
    PUSH32(esp, ecx);
    edi = edi + 4;
    PUSH32(esp, esi);
    MEM32(esp + 0x24) = edi;
    MEM32(0x84B568) = ebx;
    MEM32(0x84B544) = ebx;
    MEM32(0x84B55C) = ebx;
    MEM32(0x84B548) = ebx;
    MEM32(0x84B560) = ebx;
    PUSH32(esp, 0); sub_003D7F00(); /* call 0x003D7F00 */

loc_0029F9B7: ;
    esp = esp + 0x10;
    if (TEST_Z(eax, eax)) goto loc_0029FA0A; /* je: equal / zero */

loc_0029F9BE: ;
    xmm0 = MEMF(0x76FC44); /* movss */
    /* comiss xmm0, MEMF(esp + 0x10) - sets EFLAGS */
    if ((xmm0 <= MEMF(esp + 0x10))) goto loc_0029FA0A; /* jbe: below or equal (unsigned <=) */

loc_0029F9CD: ;
    SET_LO8(eax, MEM8(ebp + 0xA4));
    MEMF(ebp) = xmm0; /* movss */
    esi = MEM32(0x76FC4C);
    edi = ebp + 0x10;
    ecx = 0x24;
    memcpy((void*)XBOX_PTR(edi), (void*)XBOX_PTR(esi), ecx * 4);
    esi += ecx * 4; edi += ecx * 4; ecx = 0; /* rep movsd */
    edi = MEM32(esp + 0x14);
    esi = MEM32(esp + 0x28);
    SET_LO8(eax, LO8(eax) | 6);
    MEMF(esp + 0x10) = xmm0; /* movss */
    MEM8(ebp + 0xA4) = LO8(eax);
    MEM8(ebp + 0xA5) = 2;
    MEM8(esp + 0x2C) = 1;

loc_0029FA0A: ;
    ecx = MEM32(edi);
    if (CMP_NE(ecx, ebx)) goto loc_0029F940; /* jne: not equal / not zero */

loc_0029FA14: ;
    SET_LO8(eax, MEM8(esp + 0x2C));
    POP32(esp, edi);
    POP32(esp, esi);
    POP32(esp, ebp);
    POP32(esp, ebx);
    esp = esp + 0x14;
    esp += 4; return; /* ret */

}

/**
 * sub_0029FA20
 * Original: 0x0029FA20 - 0x0029FAAC (140 bytes, 33 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0029FA20(void)
{
    int _flags = 0; /* fallback flag var */
    float xmm0, xmm3;

loc_0029FA20: ;
    xmm3 = MEMF(0x6494DC); /* movss */
    MEMF(esi) = xmm3; /* movss */
    eax = MEM32(edi + 8);
    ecx = MEM32(edi + 4);
    xmm0 = MEMF(edi); /* movss */
    PUSH32(esp, eax);
    PUSH32(esp, ecx);
    edx = esi + 0x10;
    PUSH32(esp, esi);
    PUSH32(esp, edx);
    MEM32(0x780AB0) = 0x606564;
    MEM32(0x6C0210) = 0x4AA;
    MEM8(0x84B538) = 1;
    MEM32(0x74FA2C) = 0x2000;
    PUSH32(esp, 0); sub_00065AD0(); /* call 0x00065AD0 */

loc_0029FA67: ;
    esp = esp + 0x10;
    if (TEST_Z(LO8(eax), LO8(eax))) { sub_0029FAAC(); return; } /* je: equal / zero */

loc_0029FA6E: ;
    xmm0 = MEMF(esi); /* movss */
    /* comiss xmm0, MEMF(edi + 4) - sets EFLAGS */
    if ((xmm0 < MEMF(edi + 4))) { sub_0029FAAC(); return; } /* jb: below (unsigned <) */

loc_0029FA78: ;
    SET_LO8(ecx, MEM8(esi + 0xA4));
    SET_LO8(eax, 3);
    SET_LO8(ecx, LO8(ecx) | LO8(eax));
    MEM8(esi + 0xA5) = LO8(eax);
    eax = 0; /* xor self */
    MEM32(0x780AB0) = eax;
    MEM8(0x84B538) = LO8(eax);
    MEM32(0x74FA2C) = eax;
    MEM8(esi + 0xA4) = LO8(ecx);
    SET_LO8(eax, 1);
    MEM32(0x6C0210) = 0xFFFFFFFFu;
    esp += 4; return; /* ret */

}

/**
 * sub_0029FAD0
 * Original: 0x0029FAD0 - 0x0029FB49 (121 bytes, 31 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0029FAD0(void)
{
    uint32_t ebp;
    int _flags = 0; /* fallback flag var */
    float xmm0, xmm3;
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_0029FAD0: ;
    eax = MEM32(edi + 8);
    ecx = MEM32(esp + 4);
    xmm3 = MEMF(edi + 4); /* movss */
    xmm0 = MEMF(edi); /* movss */
    PUSH32(esp, eax);
    PUSH32(esp, ecx);
    edx = esi + 0x10;
    PUSH32(esp, esi);
    PUSH32(esp, edx);
    MEM32(0x780AB0) = 0x606564;
    MEM32(0x6C0210) = 0x4D3;
    MEM8(0x84B538) = 1;
    MEM32(0x74FA2C) = 0x2000;
    PUSH32(esp, 0); sub_00065AD0(); /* call 0x00065AD0 */

loc_0029FB11: ;
    esp = esp + 0x10;
    ecx = 0; /* xor self */
    if (TEST_Z(LO8(eax), LO8(eax))) { sub_0029FB49(); return; } /* je: equal / zero */

loc_0029FB1A: ;
    xmm0 = MEMF(esi); /* movss */
    /* comiss xmm0, MEMF(esp + 4) - sets EFLAGS */
    if ((xmm0 < MEMF(esp + 4))) { sub_0029FB49(); return; } /* jb: below (unsigned <) */

loc_0029FB25: ;
    xmm0 = MEMF(edi + 4); /* movss */
    /* comiss xmm0, MEMF(esi) - sets EFLAGS */
    if ((xmm0 < MEMF(esi))) { sub_0029FB49(); return; } /* jb: below (unsigned <) */

loc_0029FB2F: ;
    SET_LO8(edx, MEM8(esi + 0xA4));
    SET_LO8(eax, 3);
    SET_LO8(edx, LO8(edx) | LO8(eax));
    MEM8(esi + 0xA5) = LO8(eax);
    MEM8(esi + 0xA4) = LO8(edx);
    SET_LO8(eax, 1);
    g_seh_ebp = ebp; sub_0029FB4B(); return; /* tail jmp 0x0029FB4B */

}

/**
 * sub_0029FB70
 * Original: 0x0029FB70 - 0x0029FC2D (189 bytes, 56 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0029FB70(void)
{
    uint32_t ebp;
    int _flags = 0; /* fallback flag var */
    float xmm0;

loc_0029FB70: ;
    PUSH32(esp, ebp);
    ebp = esp;
    esp = esp & 0xFFFFFFF0u;
    esp = esp - 0x164;
    xmm0 = MEMF(eax + 4); /* movss */
    /* comiss xmm0, MEMF(ebp + 8) - sets EFLAGS */
    PUSH32(esp, ebx);
    ebx = MEM32(ebp + 0xC);
    PUSH32(esp, esi);
    PUSH32(esp, edi);
    if ((xmm0 > MEMF(ebp + 8))) goto loc_0029FC16; /* ja: above (unsigned >) */

loc_0029FB91: ;
    xmm0 = MEMF(0x6494DC); /* movss */
    ecx = 0x2C;
    esi = ebx;
    edi = esp + 0x10;
    memcpy((void*)XBOX_PTR(edi), (void*)XBOX_PTR(esi), ecx * 4);
    esi += ecx * 4; edi += ecx * 4; ecx = 0; /* rep movsd */
    SET_LO8(edx, MEM8(esp + 0xB4));
    ecx = 0x2C;
    esi = ebx;
    edi = esp + 0xC0;
    memcpy((void*)XBOX_PTR(edi), (void*)XBOX_PTR(esi), ecx * 4);
    esi += ecx * 4; edi += ecx * 4; ecx = 0; /* rep movsd */
    MEM32(0x7FA098) = MEM32(0x7FA098) + 1;
    SET_LO8(edx, LO8(edx) & 0xFD);
    esi = esp + 0xC0;
    edi = eax;
    MEMF(esp + 0x10) = xmm0; /* movss */
    MEM8(esp + 0xB4) = LO8(edx);
    PUSH32(esp, 0); sub_0029FA20(); /* call 0x0029FA20 */

loc_0029FBE1: ;
    (void)0; /* test LO8(eax), LO8(eax) - flags set for next jcc */
    edi = ebx;
    ecx = 0x2C;
    if (TEST_Z(LO8(eax), LO8(eax))) goto loc_0029FBF7; /* je: equal / zero */

loc_0029FBEC: ;
    memcpy((void*)XBOX_PTR(edi), (void*)XBOX_PTR(esi), ecx * 4);
    esi += ecx * 4; edi += ecx * 4; ecx = 0; /* rep movsd */
    SET_LO8(eax, 1);
    POP32(esp, edi);
    POP32(esp, esi);
    POP32(esp, ebx);
    esp = ebp;
    POP32(esp, ebp);
    esp += 4; return; /* ret */

loc_0029FBF7: ;
    xmm0 = MEMF(esp + 0xC0); /* movss */
    /* comiss xmm0, MEMF(0x6494DC) - sets EFLAGS */
    esi = esp + 0x10;
    if ((xmm0 > MEMF(0x6494DC))) goto loc_0029FC14; /* ja: above (unsigned >) */

loc_0029FC0D: ;
    esi = esp + 0xC0;

loc_0029FC14: ;
    memcpy((void*)XBOX_PTR(edi), (void*)XBOX_PTR(esi), ecx * 4);
    esi += ecx * 4; edi += ecx * 4; ecx = 0; /* rep movsd */

loc_0029FC16: ;
    SET_LO8(eax, MEM8(ebx + 0xA4));
    POP32(esp, edi);
    SET_LO8(eax, LO8(eax) & 0xFD);
    MEM8(ebx + 0xA4) = LO8(eax);
    POP32(esp, esi);
    SET_LO8(eax, 0); /* xor self */
    POP32(esp, ebx);
    esp = ebp;
    POP32(esp, ebp);
    esp += 4; return; /* ret */

}

/**
 * sub_0029FC30
 * Original: 0x0029FC30 - 0x0029FC66 (54 bytes, 15 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0029FC30(void)
{
    uint32_t ebp;
    int _flags = 0; /* fallback flag var */
    float xmm1;

loc_0029FC30: ;
    PUSH32(esp, ebp);
    ebp = esp;
    esp = esp & 0xFFFFFFF0u;
    esp = esp - 0x174;
    edx = MEM32(ebp + 8);
    xmm1 = MEMF(ebp + 0xC); /* movss */
    /* comiss xmm1, MEMF(edx + 4) - sets EFLAGS */
    PUSH32(esp, ebx);
    ebx = MEM32(ebp + 0x10);
    PUSH32(esp, esi);
    PUSH32(esp, edi);
    if ((xmm1 <= MEMF(edx + 4))) { sub_0029FC66(); return; } /* jbe: below or equal (unsigned <=) */

loc_0029FC50: ;
    MEM8(ebx + 0xA5) = 0;
    MEM32(ebx + 0xA8) = 0;
    g_seh_ebp = ebp; sub_0029FD07(); return; /* tail jmp 0x0029FD07 */

}

/**
 * sub_0029FD20
 * Original: 0x0029FD20 - 0x0029FD52 (50 bytes, 13 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0029FD20(void)
{
    uint32_t ebp;
    int _flags = 0; /* fallback flag var */
    float xmm1;

loc_0029FD20: ;
    PUSH32(esp, ebp);
    ebp = esp;
    esp = esp & 0xFFFFFFF0u;
    esp = esp - 0x168;
    eax = MEM32(ebp + 8);
    xmm1 = MEMF(ebp + 0xC); /* movss */
    /* comiss xmm1, MEMF(eax + 4) - sets EFLAGS */
    PUSH32(esp, esi);
    PUSH32(esp, edi);
    if ((xmm1 <= MEMF(eax + 4))) { sub_0029FD52(); return; } /* jbe: below or equal (unsigned <=) */

loc_0029FD3C: ;
    MEM8(ebx + 0xA5) = 0;
    MEM32(ebx + 0xA8) = 0;
    g_seh_ebp = ebp; sub_0029FE35(); return; /* tail jmp 0x0029FE35 */

}

/**
 * sub_0029FE50
 * Original: 0x0029FE50 - 0x0029FE7B (43 bytes, 17 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0029FE50(void)
{
    uint32_t ebp;
    int _flags = 0; /* fallback flag var */
    float xmm0;

loc_0029FE50: ;
    PUSH32(esp, ebp);
    ebp = esp;
    esp = esp & 0xFFFFFFF0u;
    esp = esp - 0x168;
    eax = MEM32(ebp + 8);
    xmm0 = MEMF(eax + 4); /* movss */
    /* comiss xmm0, MEMF(ebp + 0x10) - sets EFLAGS */
    PUSH32(esp, esi);
    PUSH32(esp, edi);
    if ((xmm0 <= MEMF(ebp + 0x10))) { sub_0029FE7B(); return; } /* jbe: below or equal (unsigned <=) */

loc_0029FE6C: ;
    MEM8(ebx + 0xA4) = MEM8(ebx + 0xA4) & 0xFD;
    SET_LO8(eax, 0); /* xor self */
    POP32(esp, edi);
    POP32(esp, esi);
    esp = ebp;
    POP32(esp, ebp);
    esp += 4; return; /* ret */

}

/**
 * sub_0029FF30
 * Original: 0x0029FF30 - 0x002A001D (237 bytes, 77 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0029FF30(void)
{
    uint32_t ebp;
    int _flags = 0; /* fallback flag var */
    float xmm0;

loc_0029FF30: ;
    PUSH32(esp, ebp);
    ebp = esp;
    esp = esp & 0xFFFFFFF0u;
    esp = esp - 0x164;
    eax = MEM32(ebp + 8);
    xmm0 = MEMF(ebp + 0x10); /* movss */
    /* comiss xmm0, MEMF(eax + 4) - sets EFLAGS */
    PUSH32(esp, ebx);
    ebx = MEM32(ebp + 0x14);
    PUSH32(esp, esi);
    PUSH32(esp, edi);
    if ((xmm0 > MEMF(eax + 4))) goto loc_002A0006; /* ja: above (unsigned >) */

loc_0029FF54: ;
    ecx = 0x2C;
    esi = ebx;
    edi = esp + 0xC0;
    memcpy((void*)XBOX_PTR(edi), (void*)XBOX_PTR(esi), ecx * 4);
    esi += ecx * 4; edi += ecx * 4; ecx = 0; /* rep movsd */
    ecx = 0x2C;
    esi = ebx;
    edi = esp + 0x10;
    memcpy((void*)XBOX_PTR(edi), (void*)XBOX_PTR(esi), ecx * 4);
    esi += ecx * 4; edi += ecx * 4; ecx = 0; /* rep movsd */
    esi = MEM32(ebp + 0x10);
    ecx = esp + 0xC0;
    PUSH32(esp, ecx);
    PUSH32(esp, esi);
    PUSH32(esp, eax);
    PUSH32(esp, 0); sub_0029FC30(); /* call 0x0029FC30 */

loc_0029FF83: ;
    edx = MEM32(ebp + 0x1C);
    MEM8(esp + 0x1B) = LO8(eax);
    eax = MEM32(ebp + 0x18);
    PUSH32(esp, edx);
    PUSH32(esp, eax);
    eax = MEM32(ebp + 8);
    ecx = esp + 0x24;
    PUSH32(esp, ecx);
    PUSH32(esp, esi);
    ecx = 0x2000;
    edi = esp + 0xCC;
    PUSH32(esp, 0); sub_0029F590(); /* call 0x0029F590 */

loc_0029FFA9: ;
    SET_LO8(ecx, MEM8(esp + 0x2B));
    esp = esp + 0x1C;
    (void)0; /* test LO8(ecx), LO8(ecx) - flags set for next jcc */
    edi = ebx;
    ecx = 0x2C;
    if (TEST_Z(LO8(ecx), LO8(ecx))) goto loc_0029FFE5; /* je: equal / zero */

loc_0029FFBB: ;
    (void)0; /* test LO8(eax), LO8(eax) - flags set for next jcc */
    esi = esp + 0xC0;
    if (TEST_Z(LO8(eax), LO8(eax))) goto loc_0029FFDA; /* je: equal / zero */

loc_0029FFC6: ;
    xmm0 = MEMF(esp + 0xC0); /* movss */
    /* comiss xmm0, MEMF(esp + 0x10) - sets EFLAGS */
    if ((xmm0 > MEMF(esp + 0x10))) goto loc_0029FFDA; /* ja: above (unsigned >) */

loc_0029FFD6: ;
    esi = esp + 0x10;

loc_0029FFDA: ;
    memcpy((void*)XBOX_PTR(edi), (void*)XBOX_PTR(esi), ecx * 4);
    esi += ecx * 4; edi += ecx * 4; ecx = 0; /* rep movsd */
    SET_LO8(eax, 1);
    POP32(esp, edi);
    POP32(esp, esi);
    POP32(esp, ebx);
    esp = ebp;
    POP32(esp, ebp);
    esp += 4; return; /* ret */

loc_0029FFE5: ;
    if (TEST_NZ(LO8(eax), LO8(eax))) goto loc_0029FFD6; /* jne: not equal / not zero */

loc_0029FFE9: ;
    xmm0 = MEMF(esp + 0xC0); /* movss */
    /* comiss xmm0, MEMF(esp + 0x10) - sets EFLAGS */
    esi = esp + 0xC0;
    if ((xmm0 > MEMF(esp + 0x10))) goto loc_002A0004; /* ja: above (unsigned >) */

loc_002A0000: ;
    esi = esp + 0x10;

loc_002A0004: ;
    memcpy((void*)XBOX_PTR(edi), (void*)XBOX_PTR(esi), ecx * 4);
    esi += ecx * 4; edi += ecx * 4; ecx = 0; /* rep movsd */

loc_002A0006: ;
    SET_LO8(eax, MEM8(ebx + 0xA4));
    POP32(esp, edi);
    SET_LO8(eax, LO8(eax) & 0xFD);
    MEM8(ebx + 0xA4) = LO8(eax);
    POP32(esp, esi);
    SET_LO8(eax, 0); /* xor self */
    POP32(esp, ebx);
    esp = ebp;
    POP32(esp, ebp);
    esp += 4; return; /* ret */

}

/**
 * sub_002A0020
 * Original: 0x002A0020 - 0x002A011D (253 bytes, 86 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_002A0020(void)
{
    uint32_t ebp;
    int _flags = 0; /* fallback flag var */
    float xmm0;

loc_002A0020: ;
    PUSH32(esp, ebp);
    ebp = esp;
    esp = esp & 0xFFFFFFF0u;
    esp = esp - 0x164;
    edx = MEM32(ebp + 8);
    xmm0 = MEMF(ebp + 0x10); /* movss */
    /* comiss xmm0, MEMF(edx + 4) - sets EFLAGS */
    eax = MEM32(ebp + 0x14);
    PUSH32(esp, ebx);
    PUSH32(esp, esi);
    PUSH32(esp, edi);
    if ((xmm0 > MEMF(edx + 4))) goto loc_002A0105; /* ja: above (unsigned >) */

loc_002A0044: ;
    esi = eax;
    ecx = 0x2C;
    edi = esp + 0xC0;
    memcpy((void*)XBOX_PTR(edi), (void*)XBOX_PTR(esi), ecx * 4);
    esi += ecx * 4; edi += ecx * 4; ecx = 0; /* rep movsd */
    esi = eax;
    ecx = 0x2C;
    edi = esp + 0x10;
    memcpy((void*)XBOX_PTR(edi), (void*)XBOX_PTR(esi), ecx * 4);
    esi += ecx * 4; edi += ecx * 4; ecx = 0; /* rep movsd */
    esi = MEM32(ebp + 0x10);
    PUSH32(esp, esi);
    PUSH32(esp, edx);
    ebx = esp + 0xC8;
    PUSH32(esp, 0); sub_0029FD20(); /* call 0x0029FD20 */

loc_002A0072: ;
    ecx = MEM32(ebp + 0x1C);
    SET_LO8(ebx, LO8(eax));
    eax = MEM32(ebp + 0x18);
    PUSH32(esp, eax);
    eax = MEM32(ebp + 8);
    PUSH32(esp, esi);
    edi = esp + 0xC0;
    esi = esp + 0x20;
    PUSH32(esp, 0); sub_0029F610(); /* call 0x0029F610 */

loc_002A008F: ;
    esp = esp + 0x10;
    (void)0; /* test LO8(ebx), LO8(ebx) - flags set for next jcc */
    ecx = 0x2C;
    if (TEST_Z(LO8(ebx), LO8(ebx))) goto loc_002A00C8; /* je: equal / zero */

loc_002A009B: ;
    (void)0; /* test LO8(eax), LO8(eax) - flags set for next jcc */
    edi = MEM32(ebp + 0x14);
    esi = esp + 0xC0;
    if (TEST_Z(LO8(eax), LO8(eax))) goto loc_002A00BD; /* je: equal / zero */

loc_002A00A9: ;
    xmm0 = MEMF(esp + 0xC0); /* movss */
    /* comiss xmm0, MEMF(esp + 0x10) - sets EFLAGS */
    if ((xmm0 > MEMF(esp + 0x10))) goto loc_002A00BD; /* ja: above (unsigned >) */

loc_002A00B9: ;
    esi = esp + 0x10;

loc_002A00BD: ;
    memcpy((void*)XBOX_PTR(edi), (void*)XBOX_PTR(esi), ecx * 4);
    esi += ecx * 4; edi += ecx * 4; ecx = 0; /* rep movsd */
    SET_LO8(eax, 1);
    POP32(esp, edi);
    POP32(esp, esi);
    POP32(esp, ebx);
    esp = ebp;
    POP32(esp, ebp);
    esp += 4; return; /* ret */

loc_002A00C8: ;
    if (TEST_Z(LO8(eax), LO8(eax))) goto loc_002A00DE; /* je: equal / zero */

loc_002A00CC: ;
    edi = MEM32(ebp + 0x14);
    esi = esp + 0x10;
    memcpy((void*)XBOX_PTR(edi), (void*)XBOX_PTR(esi), ecx * 4);
    esi += ecx * 4; edi += ecx * 4; ecx = 0; /* rep movsd */
    SET_LO8(eax, 1);
    POP32(esp, edi);
    POP32(esp, esi);
    POP32(esp, ebx);
    esp = ebp;
    POP32(esp, ebp);
    esp += 4; return; /* ret */

loc_002A00DE: ;
    xmm0 = MEMF(esp + 0xC0); /* movss */
    /* comiss xmm0, MEMF(esp + 0x10) - sets EFLAGS */
    eax = MEM32(ebp + 0x14);
    if ((xmm0 <= MEMF(esp + 0x10))) goto loc_002A00FC; /* jbe: below or equal (unsigned <=) */

loc_002A00F1: ;
    esi = esp + 0xC0;
    edi = eax;
    goto loc_002A0103;

loc_002A00FC: ;
    edi = MEM32(ebp + 0x14);
    esi = esp + 0x10;

loc_002A0103: ;
    memcpy((void*)XBOX_PTR(edi), (void*)XBOX_PTR(esi), ecx * 4);
    esi += ecx * 4; edi += ecx * 4; ecx = 0; /* rep movsd */

loc_002A0105: ;
    SET_LO8(ecx, MEM8(eax + 0xA4));
    POP32(esp, edi);
    SET_LO8(ecx, LO8(ecx) & 0xFD);
    POP32(esp, esi);
    MEM8(eax + 0xA4) = LO8(ecx);
    SET_LO8(eax, 0); /* xor self */
    POP32(esp, ebx);
    esp = ebp;
    POP32(esp, ebp);
    esp += 4; return; /* ret */

}

/**
 * sub_002A0120
 * Original: 0x002A0120 - 0x002A016E (78 bytes, 43 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_002A0120(void)
{
    uint32_t ebp;
    int _flags = 0; /* fallback flag var */
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_002A0120: ;
    PUSH32(esp, ebx);
    PUSH32(esp, ebp);
    ebp = MEM32(esp + 0x10);
    PUSH32(esp, esi);
    PUSH32(esp, edi);
    esi = eax;
    edi = ecx;
    PUSH32(esp, ebp);
    ebx = 0; /* xor self */
    PUSH32(esp, 0); sub_002A02E0(); /* call 0x002A02E0 */

loc_002A0134: ;
    eax = ZX8(LO8(eax));
    esp = esp + 4;
    eax = eax - ebx;
    if ((eax == 0)) goto loc_002A0155; /* je: equal / zero */

loc_002A013E: ;
    eax--;
    if ((eax == 0)) goto loc_002A014E; /* je: equal / zero */

loc_002A0141: ;
    eax--;
    if ((eax != 0)) { sub_002A016E(); return; } /* jne: not equal / not zero */

loc_002A0144: ;
    POP32(esp, edi);
    POP32(esp, esi);
    POP32(esp, ebp);
    eax = 1;
    POP32(esp, ebx);
    esp += 4; return; /* ret */

loc_002A014E: ;
    POP32(esp, edi);
    POP32(esp, esi);
    POP32(esp, ebp);
    eax = 0; /* xor self */
    POP32(esp, ebx);
    esp += 4; return; /* ret */

loc_002A0155: ;
    eax = MEM32(esp + 0x14);
    PUSH32(esp, ebp);
    PUSH32(esp, eax);
    PUSH32(esp, edi);
    ebx = esi;
    PUSH32(esp, 0); sub_0029FE50(); /* call 0x0029FE50 */

loc_002A0163: ;
    esp = esp + 0xC;
    POP32(esp, edi);
    POP32(esp, esi);
    POP32(esp, ebp);
    eax = ZX8(LO8(eax));
    POP32(esp, ebx);
    esp += 4; return; /* ret */

}

/**
 * sub_002A0180
 * Original: 0x002A0180 - 0x002A01E0 (96 bytes, 34 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_002A0180(void)
{
    uint32_t ebp;
    int _flags = 0; /* fallback flag var */
    float xmm0, xmm1;
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_002A0180: ;
    PUSH32(esp, ecx);
    SET_LO8(eax, MEM8(esi + 0xA4));
    PUSH32(esp, ebx);
    ebx = 0; /* xor self */
    (void)0; /* test LO8(eax), 4 - flags set for next jcc */
    PUSH32(esp, ebp);
    ebp = MEM32(esp + 0x18);
    if (TEST_Z(LO8(eax), 4)) { sub_002A01E0(); return; } /* je: equal / zero */

loc_002A0193: ;
    ecx = MEM32(edi + 8);
    edx = MEM32(edi);
    PUSH32(esp, ebp);
    eax = esp + 0xC;
    PUSH32(esp, eax);
    PUSH32(esp, ecx);
    eax = esi + 0x10;
    PUSH32(esp, edx);
    PUSH32(esp, 0); sub_00066BF0(); /* call 0x00066BF0 */

loc_002A01A8: ;
    esp = esp + 0x10;
    if (TEST_Z(eax, eax)) { sub_002A01E0(); return; } /* je: equal / zero */

loc_002A01AF: ;
    xmm0 = MEMF(esp + 8); /* movss */
    /* comiss xmm0, MEMF(esp + 0x14) - sets EFLAGS */
    if ((xmm0 < MEMF(esp + 0x14))) goto loc_002A01DC; /* jb: below (unsigned <) */

loc_002A01BC: ;
    xmm1 = MEMF(edi + 4); /* movss */
    /* comiss xmm1, xmm0 - sets EFLAGS */
    if ((xmm1 < xmm0)) goto loc_002A01DC; /* jb: below (unsigned <) */

loc_002A01C6: ;
    SET_LO8(ecx, MEM8(esi + 0xA4));
    SET_LO8(eax, 2);
    SET_LO8(ecx, LO8(ecx) | LO8(eax));
    MEMF(esi) = xmm0; /* movss */
    MEM8(esi + 0xA4) = LO8(ecx);
    g_seh_ebp = ebp; sub_002A01E2(); return; /* tail jmp 0x002A01E2 */

loc_002A01DC: ;
    SET_LO8(eax, 1);
    g_seh_ebp = ebp; sub_002A01E2(); return; /* tail jmp 0x002A01E2 */

}

/**
 * sub_002A0230
 * Original: 0x002A0230 - 0x002A0290 (96 bytes, 34 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_002A0230(void)
{
    uint32_t ebp;
    int _flags = 0; /* fallback flag var */
    float xmm0, xmm1;
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_002A0230: ;
    PUSH32(esp, ecx);
    SET_LO8(eax, MEM8(esi + 0xA4));
    PUSH32(esp, ebx);
    ebx = 0; /* xor self */
    (void)0; /* test LO8(eax), 4 - flags set for next jcc */
    PUSH32(esp, ebp);
    ebp = MEM32(esp + 0x18);
    if (TEST_Z(LO8(eax), 4)) { sub_002A0290(); return; } /* je: equal / zero */

loc_002A0243: ;
    ecx = MEM32(edi + 8);
    edx = MEM32(edi);
    PUSH32(esp, ebp);
    eax = esp + 0xC;
    PUSH32(esp, eax);
    PUSH32(esp, ecx);
    eax = esi + 0x10;
    PUSH32(esp, edx);
    PUSH32(esp, 0); sub_00066BF0(); /* call 0x00066BF0 */

loc_002A0258: ;
    esp = esp + 0x10;
    if (TEST_Z(eax, eax)) { sub_002A0290(); return; } /* je: equal / zero */

loc_002A025F: ;
    xmm0 = MEMF(esp + 8); /* movss */
    /* comiss xmm0, MEMF(esp + 0x14) - sets EFLAGS */
    if ((xmm0 < MEMF(esp + 0x14))) goto loc_002A028C; /* jb: below (unsigned <) */

loc_002A026C: ;
    xmm1 = MEMF(edi + 4); /* movss */
    /* comiss xmm1, xmm0 - sets EFLAGS */
    if ((xmm1 < xmm0)) goto loc_002A028C; /* jb: below (unsigned <) */

loc_002A0276: ;
    SET_LO8(ecx, MEM8(esi + 0xA4));
    SET_LO8(eax, 2);
    SET_LO8(ecx, LO8(ecx) | LO8(eax));
    MEMF(esi) = xmm0; /* movss */
    MEM8(esi + 0xA4) = LO8(ecx);
    g_seh_ebp = ebp; sub_002A0292(); return; /* tail jmp 0x002A0292 */

loc_002A028C: ;
    SET_LO8(eax, 1);
    g_seh_ebp = ebp; sub_002A0292(); return; /* tail jmp 0x002A0292 */

}

/**
 * sub_002A02E0
 * Original: 0x002A02E0 - 0x002A0337 (87 bytes, 31 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_002A02E0(void)
{
    int _flags = 0; /* fallback flag var */
    float xmm0, xmm1;

loc_002A02E0: ;
    PUSH32(esp, ecx);
    if (TEST_Z(MEM8(esi + 0xA4), 4)) { sub_002A0337(); return; } /* je: equal / zero */

loc_002A02EA: ;
    ecx = MEM32(edi + 8);
    edx = MEM32(edi);
    PUSH32(esp, 0);
    eax = esp + 4;
    PUSH32(esp, eax);
    PUSH32(esp, ecx);
    eax = esi + 0x10;
    PUSH32(esp, edx);
    PUSH32(esp, 0); sub_00066BF0(); /* call 0x00066BF0 */

loc_002A0300: ;
    esp = esp + 0x10;
    if (TEST_Z(eax, eax)) { sub_002A0337(); return; } /* je: equal / zero */

loc_002A0307: ;
    xmm1 = MEMF(esp + 8); /* movss */
    xmm0 = MEMF(esp); /* movss */
    /* comiss xmm1, xmm0 - sets EFLAGS */
    if ((xmm1 < xmm0)) goto loc_002A0333; /* jb: below (unsigned <) */

loc_002A0317: ;
    /* comiss xmm0, MEMF(edi + 4) - sets EFLAGS */
    if ((xmm0 < MEMF(edi + 4))) goto loc_002A0333; /* jb: below (unsigned <) */

loc_002A031D: ;
    SET_LO8(ecx, MEM8(esi + 0xA4));
    SET_LO8(eax, 2);
    SET_LO8(ecx, LO8(ecx) | LO8(eax));
    MEMF(esi) = xmm0; /* movss */
    MEM8(esi + 0xA4) = LO8(ecx);
    POP32(esp, ecx);
    esp += 4; return; /* ret */

loc_002A0333: ;
    SET_LO8(eax, 1);
    POP32(esp, ecx);
    esp += 4; return; /* ret */

}

/**
 * sub_002A0340
 * Original: 0x002A0340 - 0x002A036B (43 bytes, 17 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_002A0340(void)
{
    uint32_t ebp;
    int _flags = 0; /* fallback flag var */
    float xmm0;

loc_002A0340: ;
    PUSH32(esp, ebp);
    ebp = esp;
    esp = esp & 0xFFFFFFF0u;
    esp = esp - 0x168;
    eax = MEM32(ebp + 8);
    xmm0 = MEMF(ebp + 0x10); /* movss */
    /* comiss xmm0, MEMF(eax + 4) - sets EFLAGS */
    PUSH32(esp, esi);
    PUSH32(esp, edi);
    if ((xmm0 <= MEMF(eax + 4))) { sub_002A036B(); return; } /* jbe: below or equal (unsigned <=) */

loc_002A035C: ;
    MEM8(ebx + 0xA4) = MEM8(ebx + 0xA4) & 0xFD;
    SET_LO8(eax, 0); /* xor self */
    POP32(esp, edi);
    POP32(esp, esi);
    esp = ebp;
    POP32(esp, ebp);
    esp += 4; return; /* ret */

}

/**
 * sub_002A0430
 * Original: 0x002A0430 - 0x002A04CE (158 bytes, 30 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_002A0430(void)
{
    uint32_t ebp;
    int _flags = 0; /* fallback flag var */
    float xmm0, xmm1, xmm2, xmm3, xmm4, xmm5;
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_002A0430: ;
    ecx = MEM32(edx + 0x294);
    MEM32(eax) = ecx;
    (void)0; /* test MEM32(edx + 0x200), 0x200000 - flags set for next jcc */
    PUSH32(esp, esi);
    if (TEST_Z(MEM32(edx + 0x200), 0x200000)) { sub_002A04CE(); return; } /* je: equal / zero */

loc_002A0449: ;
    xmm1 = MEMF(edx + 0x78); /* movss */
    xmm0 = MEMF(edx + 0x80); /* movss */
    xmm3 = MEMF(edx + 0x294); /* movss */
    xmm4 = MEMF(0x59D944); /* movss */
    MEMF(eax + 0x64) = xmm0; /* movss */
    xmm2 = xmm1; /* movaps */
    xmm5 = xmm0; /* movaps */
    xmm1 = xmm1 - xmm4; /* subss */
    MEMF(eax + 0x5C) = xmm1; /* movss */
    xmm1 = MEMF(0x648D14); /* movss */
    xmm0 = xmm0 - xmm4; /* subss */
    MEMF(eax + 0x70) = xmm0; /* movss */
    xmm0 = 0.0f; /* xorps self = zero */
    xmm2 = xmm2 + xmm4; /* addss */
    MEMF(eax + 0x50) = xmm2; /* movss */
    MEMF(eax + 0x54) = xmm3; /* movss */
    MEMF(eax + 0x60) = xmm3; /* movss */
    MEMF(eax + 0x68) = xmm2; /* movss */
    MEMF(eax + 0x6C) = xmm3; /* movss */
    xmm5 = xmm5 + xmm4; /* addss */
    MEMF(eax + 0x58) = xmm5; /* movss */
    MEMF(eax + 0x80) = xmm0; /* movss */
    MEMF(eax + 0x84) = xmm1; /* movss */
    MEMF(eax + 0x88) = xmm0; /* movss */
    g_seh_ebp = ebp; sub_002A04E0(); return; /* tail jmp 0x002A04E0 */

}

/**
 * sub_002A0580
 * Original: 0x002A0580 - 0x002A0756 (470 bytes, 118 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_002A0580(void)
{
    uint32_t ebp;
    int _flags = 0; /* fallback flag var */
    float xmm0, xmm1;
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_002A0580: ;
    esp = esp - 0x14;
    eax = MEM32(0x7FA068);
    xmm0 = MEMF(0x648E84); /* movss */
    edx = MEM32(esp + 0x30);
    PUSH32(esp, ebx);
    ebx = 0; /* xor self */
    eax++;
    PUSH32(esp, ebp);
    ebp = MEM32(esp + 0x20);
    MEMF(esp + 8) = xmm0; /* movss */
    xmm0 = MEMF(esp + 0x40); /* movss */
    /* ucomiss xmm0, MEMF(0x648CF8) - sets EFLAGS */
    MEM32(0x7FA068) = eax;
    PUSH32(esp, esi);
    esi = MEM32(esp + 0x2C);
    /* lahf - load AH from flags (used in FPU compare idiom) */
    (void)0; /* test HI8(eax), 0x44 - flags set for next jcc */
    PUSH32(esp, edi);
    edi = MEM32(esp + 0x50);
    MEM32(esp + 0x14) = ebx;
    if (1 /* jp after test - parity */) goto loc_002A05D1; /* jp: parity */

loc_002A05C9: ;
    xmm0 = MEMF(0x649884); /* movss */

loc_002A05D1: ;
    xmm1 = MEMF(ecx); /* movss */
    xmm1 = xmm1 * xmm0; /* mulss */
    xmm1 = xmm1 + MEMF(ebp); /* addss */
    MEMF(esp + 0x18) = xmm1; /* movss */
    xmm1 = MEMF(ecx + 4); /* movss */
    xmm1 = xmm1 * xmm0; /* mulss */
    xmm1 = xmm1 + MEMF(ebp + 4); /* addss */
    MEMF(esp + 0x1C) = xmm1; /* movss */
    xmm1 = MEMF(ecx + 8); /* movss */
    ecx = MEM32(esp + 0x4C);
    eax = 0; /* xor self */
    (void)0; /* cmp ecx, ebx - flags set for next jcc */
    SET_LO8(eax, (CMP_NE(ecx, ebx)) ? 1 : 0); /* setne */
    (void)0; /* cmp edx, ebx - flags set for next jcc */
    xmm1 = xmm1 * xmm0; /* mulss */
    xmm1 = xmm1 + MEMF(ebp + 8); /* addss */
    MEMF(esp + 0x20) = xmm1; /* movss */
    MEM32(0x84B568) = eax;
    if (CMP_EQ(edx, ebx)) goto loc_002A0626; /* je: equal / zero */

loc_002A0620: ;
    MEM32(edx) = 0xFFFFFFFFu;

loc_002A0626: ;
    if (CMP_EQ(edi, ebx)) goto loc_002A062C; /* je: equal / zero */

loc_002A062A: ;
    MEM32(edi) = ebx;

loc_002A062C: ;
    eax = MEM32(0x76FE14);
    if (CMP_EQ(eax, ebx)) goto loc_002A0745; /* je: equal / zero */

loc_002A0639: ;
    if (CMP_EQ(MEM32(eax + 0x10), ebx)) goto loc_002A0745; /* je: equal / zero */

loc_002A0642: ;
    ecx = MEM32(0x76FE0C);
    xmm0 = MEMF(0x648D14); /* movss */
    MEM32(0x76FC50) = ebx;
    MEMF(0x76FC3C) = xmm0; /* movss */
    MEM32(0x76FC58) = ebx;
    MEM32(0x812A18) = ecx;
    MEM32(0x819B24) = 1;
    edx = MEM32(eax + 0x10);
    PUSH32(esp, 0x76FC38);
    PUSH32(esp, edx);
    eax = esp + 0x20;
    PUSH32(esp, eax);
    PUSH32(esp, ebp);
    eax = 0x76FE20;
    MEM32(0x84B544) = ebx;
    MEM32(0x84B55C) = ebx;
    MEM32(0x84B548) = ebx;
    MEM32(0x84B560) = ebx;
    PUSH32(esp, 0); sub_003D7F00(); /* call 0x003D7F00 */

loc_002A06A5: ;
    esp = esp + 0x10;
    if (TEST_Z(eax, eax)) goto loc_002A0745; /* je: equal / zero */

loc_002A06B0: ;
    if (CMP_EQ(esi, ebx)) goto loc_002A06C0; /* je: equal / zero */

loc_002A06B4: ;
    xmm0 = MEMF(0x76FC40); /* movss */
    MEMF(esi) = xmm0; /* movss */

loc_002A06C0: ;
    eax = MEM32(esp + 0x34);
    if (CMP_EQ(eax, ebx)) goto loc_002A06D4; /* je: equal / zero */

loc_002A06C8: ;
    xmm0 = MEMF(0x76FC44); /* movss */
    MEMF(eax) = xmm0; /* movss */

loc_002A06D4: ;
    eax = MEM32(esp + 0x38);
    if (CMP_EQ(eax, ebx)) goto loc_002A06E8; /* je: equal / zero */

loc_002A06DC: ;
    xmm0 = MEMF(0x76FC48); /* movss */
    MEMF(eax) = xmm0; /* movss */

loc_002A06E8: ;
    PUSH32(esp, 0x76FC40);
    PUSH32(esp, ebp);
    PUSH32(esp, 0); sub_003E1EE0(); /* call 0x003E1EE0 */

loc_002A06F3: ;
    eax = MEM32(esp + 0x44);
    esp = esp + 8;
    (void)0; /* cmp eax, ebx - flags set for next jcc */
    MEMF(esp + 0x10) = xmm0; /* movss */
    if (CMP_EQ(eax, ebx)) goto loc_002A0708; /* je: equal / zero */

loc_002A0704: ;
    MEMF(eax) = xmm0; /* movss */

loc_002A0708: ;
    ecx = MEM32(esp + 0x44);
    if (CMP_EQ(ecx, ebx)) goto loc_002A0728; /* je: equal / zero */

loc_002A0710: ;
    edx = MEM32(0x76FC4C);
    eax = MEM32(edx + 0x88);
    if (CMP_EQ(eax, ebx)) goto loc_002A0726; /* je: equal / zero */

loc_002A0720: ;
    eax = MEM32(eax);
    MEM32(ecx) = eax;
    goto loc_002A0728;

loc_002A0726: ;
    MEM32(ecx) = ebx;

loc_002A0728: ;
    edi = MEM32(esp + 0x2C);
    if (CMP_EQ(edi, ebx)) goto loc_002A073D; /* je: equal / zero */

loc_002A0730: ;
    esi = MEM32(0x76FC4C);
    ecx = 0x24;
    memcpy((void*)XBOX_PTR(edi), (void*)XBOX_PTR(esi), ecx * 4);
    esi += ecx * 4; edi += ecx * 4; ecx = 0; /* rep movsd */

loc_002A073D: ;
    MEM32(esp + 0x14) = 1;

loc_002A0745: ;
    eax = MEM32(0x774A54);
    if (CMP_EQ(eax, ebx)) { sub_002A0756(); return; } /* je: equal / zero */

loc_002A074E: ;
    ebp = eax + -416;
    g_seh_ebp = ebp; sub_002A0758(); return; /* tail jmp 0x002A0758 */

}

/**
 * sub_002A0C10
 * Original: 0x002A0C10 - 0x002A0CF6 (230 bytes, 56 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_002A0C10(void)
{
    int _flags = 0; /* fallback flag var */
    float xmm0;

loc_002A0C10: ;
    ecx = MEM32(eax);
    xmm0 = 0.0f; /* xorps self = zero */
    MEM32(esi) = ecx;
    edx = MEM32(eax + 4);
    MEM32(esi + 4) = edx;
    ecx = MEM32(eax + 8);
    MEM32(esi + 8) = ecx;
    ecx = MEM32(0x76FE14);
    PUSH32(esp, edi);
    edi = 0; /* xor self */
    (void)0; /* cmp ecx, edi - flags set for next jcc */
    MEMF(0x74FA10) = xmm0; /* movss */
    xmm0 = MEMF(0x648D14); /* movss */
    MEM32(0x76FC50) = edi;
    MEMF(0x76FC3C) = xmm0; /* movss */
    MEM32(0x76FC58) = edi;
    if (CMP_EQ(ecx, edi)) { sub_002A0CF6(); return; } /* je: equal / zero */

loc_002A0C58: ;
    if (CMP_EQ(MEM32(ecx + 0x10), edi)) { sub_002A0CF6(); return; } /* je: equal / zero */

loc_002A0C61: ;
    edx = MEM32(0x76FE0C);
    MEM32(0x812A18) = edx;
    edx = MEM32(esp + 8);
    MEM32(0x819B24) = 1;
    ecx = MEM32(ecx + 0x10);
    PUSH32(esp, 0x76FC38);
    PUSH32(esp, ecx);
    PUSH32(esp, edx);
    PUSH32(esp, eax);
    eax = 0x76FE20;
    MEM32(0x84B544) = edi;
    MEM32(0x84B55C) = edi;
    MEM32(0x84B548) = edi;
    MEM32(0x84B560) = edi;
    PUSH32(esp, 0); sub_003D7F00(); /* call 0x003D7F00 */

loc_002A0CA8: ;
    esp = esp + 0x10;
    if (TEST_Z(eax, eax)) { sub_002A0CF6(); return; } /* je: equal / zero */

loc_002A0CAF: ;
    (void)0; /* cmp ebx, edi - flags set for next jcc */
    xmm0 = MEMF(0x76FC40); /* movss */
    MEMF(esi) = xmm0; /* movss */
    xmm0 = MEMF(0x76FC44); /* movss */
    MEMF(esi + 4) = xmm0; /* movss */
    xmm0 = MEMF(0x76FC48); /* movss */
    MEMF(esi + 8) = xmm0; /* movss */
    if (CMP_EQ(ebx, edi)) goto loc_002A0CF2; /* je: equal / zero */

loc_002A0CD9: ;
    eax = MEM32(0x76FC4C);
    ecx = MEM32(eax + 0x7C);
    eax = eax + 0x7C;
    MEM32(ebx) = ecx;
    edx = MEM32(eax + 4);
    MEM32(ebx + 4) = edx;
    eax = MEM32(eax + 8);
    MEM32(ebx + 8) = eax;

loc_002A0CF2: ;
    SET_LO8(eax, 1);
    POP32(esp, edi);
    esp += 4; return; /* ret */

}

/**
 * sub_002A0D00
 * Original: 0x002A0D00 - 0x002A0EF6 (502 bytes, 155 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_002A0D00(void)
{
    uint32_t ebp;
    int _flags = 0; /* fallback flag var */
    float xmm0;
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_002A0D00: ;
    PUSH32(esp, ecx);
    xmm0 = MEMF(0x648D14); /* movss */
    PUSH32(esp, ebx);
    ebx = MEM32(esp + 0x14);
    ecx = 0; /* xor self */
    PUSH32(esp, ebp);
    MEM32(ebx + 0x18) = ecx;
    MEMF(ebx + 4) = xmm0; /* movss */
    MEM32(ebx + 0x20) = ecx;
    eax = MEM32(0x76FE14);
    (void)0; /* cmp eax, ecx - flags set for next jcc */
    PUSH32(esp, esi);
    PUSH32(esp, edi);
    MEM32(esp + 0x20) = ecx;
    if (CMP_EQ(eax, ecx)) goto loc_002A0D7B; /* je: equal / zero */

loc_002A0D2B: ;
    if (CMP_EQ(MEM32(eax + 0x10), ecx)) goto loc_002A0D7B; /* je: equal / zero */

loc_002A0D30: ;
    ecx = MEM32(0x76FE0C);
    MEM32(0x812A18) = ecx;
    edx = MEM32(eax + 0x10);
    eax = MEM32(esp + 0x1C);
    ecx = MEM32(esp + 0x18);
    PUSH32(esp, ebx);
    PUSH32(esp, edx);
    PUSH32(esp, eax);
    PUSH32(esp, ecx);
    eax = 0x76FE20;
    PUSH32(esp, 0); sub_003D7F00(); /* call 0x003D7F00 */

loc_002A0D55: ;
    esp = esp + 0x10;
    if (TEST_Z(eax, eax)) goto loc_002A0D7B; /* je: equal / zero */

loc_002A0D5C: ;
    eax = MEM32(esp + 0x24);
    esi = MEM32(ebx + 0x14);
    edi = eax + 0x10;
    ecx = 0x24;
    memcpy((void*)XBOX_PTR(edi), (void*)XBOX_PTR(esi), ecx * 4);
    esi += ecx * 4; edi += ecx * 4; ecx = 0; /* rep movsd */
    MEM32(eax) = 1;
    MEM32(esp + 0x20) = 1;

loc_002A0D7B: ;
    edx = MEM32(esp + 0x20);
    ecx = MEM32(esp + 0x1C);
    PUSH32(esp, edx);
    edx = MEM32(esp + 0x1C);
    edi = 0x870EE0;
    PUSH32(esp, 0); sub_00066E90(); /* call 0x00066E90 */

loc_002A0D92: ;
    esi = eax;
    ebp = MEM32(esi);
    if (TEST_Z(ebp, ebp)) goto loc_002A0E1D; /* je: equal / zero */

loc_002A0D9E: ;
    edi = edi;

loc_002A0DA0: ;
    eax = MEM32(esp + 0x28);
    esi = esi + 4;
    (void)0; /* test eax, eax - flags set for next jcc */
    MEM32(esp + 0x10) = esi;
    if (TEST_Z(eax, eax)) goto loc_002A0DBC; /* je: equal / zero */

loc_002A0DAF: ;
    PUSH32(esp, 1);
    edi = ebp;
    PUSH32(esp, 0); sub_002A3580(); /* call 0x002A3580 */

loc_002A0DB8: ;
    if (TEST_NZ(LO8(eax), LO8(eax))) goto loc_002A0E17; /* jne: not equal / not zero */

loc_002A0DBC: ;
    eax = MEM32(ebp + 0x140);
    MEM32(0x812A18) = eax;
    ecx = MEM32(ebp + 0x60);
    edx = MEM32(ecx + 0x24);
    ecx = MEM32(edx + 0x18);
    edx = MEM32(ecx + 0x14);
    ecx = MEM32(esp + 0x1C);
    PUSH32(esp, ebx);
    PUSH32(esp, edx);
    edx = MEM32(esp + 0x20);
    PUSH32(esp, ecx);
    eax = ebp + 0x20;
    PUSH32(esp, edx);
    PUSH32(esp, 0); sub_003D7F00(); /* call 0x003D7F00 */

loc_002A0DE7: ;
    esp = esp + 0x10;
    if (TEST_Z(eax, eax)) goto loc_002A0E17; /* je: equal / zero */

loc_002A0DEE: ;
    eax = MEM32(esp + 0x24);
    esi = MEM32(ebx + 0x14);
    edi = eax + 0x10;
    ecx = 0x24;
    memcpy((void*)XBOX_PTR(edi), (void*)XBOX_PTR(esi), ecx * 4);
    esi += ecx * 4; edi += ecx * 4; ecx = 0; /* rep movsd */
    esi = MEM32(esp + 0x10);
    MEM32(eax) = 2;
    MEM32(eax + 0xA0) = ebp;
    MEM32(esp + 0x20) = 1;

loc_002A0E17: ;
    ebp = MEM32(esi);
    if (TEST_NZ(ebp, ebp)) goto loc_002A0DA0; /* jne: not equal / not zero */

loc_002A0E1D: ;
    eax = MEM32(esp + 0x20);
    ecx = MEM32(esp + 0x1C);
    edx = MEM32(esp + 0x18);
    PUSH32(esp, eax);
    edi = 0x870ED4;
    PUSH32(esp, 0); sub_00066F70(); /* call 0x00066F70 */

loc_002A0E34: ;
    esi = eax;
    ebp = MEM32(esi);
    if (TEST_Z(ebp, ebp)) goto loc_002A0EEC; /* je: equal / zero */

loc_002A0E40: ;
    esi = esi + 4;
    eax = ebp;
    MEM32(esp + 0x10) = esi;
    PUSH32(esp, 0); sub_002E4F60(); /* call 0x002E4F60 */

loc_002A0E4E: ;
    if (TEST_Z(LO8(eax), LO8(eax))) goto loc_002A0EE2; /* je: equal / zero */

loc_002A0E56: ;
    eax = MEM32(esp + 0x28);
    if (TEST_Z(eax, eax)) goto loc_002A0E6B; /* je: equal / zero */

loc_002A0E5E: ;
    PUSH32(esp, 0);
    edi = ebp;
    PUSH32(esp, 0); sub_002A3580(); /* call 0x002A3580 */

loc_002A0E67: ;
    if (TEST_NZ(LO8(eax), LO8(eax))) goto loc_002A0EE2; /* jne: not equal / not zero */

loc_002A0E6B: ;
    edx = MEM32(ebp + 0x5D4);
    ecx = MEM32(ebp + 0x4B0);
    MEM32(0x812A18) = edx;
    SET_LO8(eax, MEM8(ebp + 0x3C1));
    if (TEST_NZ(LO8(eax), LO8(eax))) goto loc_002A0E96; /* jne: not equal / not zero */

loc_002A0E87: ;
    eax = MEM32(ebp + 0x3C4);
    (void)0; /* test eax, eax - flags set for next jcc */
    eax = 0x5A0350;
    if (TEST_NZ(eax, eax)) goto loc_002A0E98; /* jne: not equal / not zero */

loc_002A0E96: ;
    eax = ebp;

loc_002A0E98: ;
    ecx = MEM32(ecx + 0x24);
    edx = MEM32(ecx + 0x18);
    ecx = MEM32(edx + 0x14);
    edx = MEM32(esp + 0x1C);
    PUSH32(esp, ebx);
    PUSH32(esp, ecx);
    ecx = MEM32(esp + 0x20);
    PUSH32(esp, edx);
    PUSH32(esp, ecx);
    PUSH32(esp, 0); sub_003D7F00(); /* call 0x003D7F00 */

loc_002A0EB2: ;
    esp = esp + 0x10;
    if (TEST_Z(eax, eax)) goto loc_002A0EE2; /* je: equal / zero */

loc_002A0EB9: ;
    eax = MEM32(esp + 0x24);
    esi = MEM32(ebx + 0x14);
    edi = eax + 0x10;
    ecx = 0x24;
    memcpy((void*)XBOX_PTR(edi), (void*)XBOX_PTR(esi), ecx * 4);
    esi += ecx * 4; edi += ecx * 4; ecx = 0; /* rep movsd */
    esi = MEM32(esp + 0x10);
    MEM32(eax) = 3;
    MEM32(eax + 0xA4) = ebp;
    MEM32(esp + 0x20) = 1;

loc_002A0EE2: ;
    ebp = MEM32(esi);
    if (TEST_NZ(ebp, ebp)) goto loc_002A0E40; /* jne: not equal / not zero */

loc_002A0EEC: ;
    eax = MEM32(esp + 0x20);
    POP32(esp, edi);
    POP32(esp, esi);
    POP32(esp, ebp);
    POP32(esp, ebx);
    POP32(esp, ecx);
    esp += 4; return; /* ret */

}

/**
 * sub_002A0F00
 * Original: 0x002A0F00 - 0x002A0FAF (175 bytes, 55 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_002A0F00(void)
{
    uint32_t ebp;
    int _flags = 0; /* fallback flag var */
    float xmm0;
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_002A0F00: ;
    esp = esp - 0x24;
    xmm0 = MEMF(0x648D14); /* movss */
    PUSH32(esp, ebx);
    ebx = MEM32(esp + 0x38);
    ecx = 0; /* xor self */
    PUSH32(esp, ebp);
    MEM32(ebx + 0x18) = ecx;
    MEMF(ebx + 4) = xmm0; /* movss */
    MEM32(ebx + 0x20) = ecx;
    eax = MEM32(0x76FE14);
    (void)0; /* cmp eax, ecx - flags set for next jcc */
    PUSH32(esp, esi);
    PUSH32(esp, edi);
    MEM32(esp + 0x44) = ecx;
    if (CMP_EQ(eax, ecx)) goto loc_002A0F9E; /* je: equal / zero */

loc_002A0F2D: ;
    if (CMP_EQ(MEM32(eax + 0x10), ecx)) goto loc_002A0F9E; /* je: equal / zero */

loc_002A0F32: ;
    ecx = MEM32(0x76FE0C);
    MEM32(0x812A18) = ecx;
    edx = MEM32(eax + 0x10);
    eax = MEM32(esp + 0x40);
    ecx = MEM32(esp + 0x3C);
    PUSH32(esp, edx);
    edx = MEM32(esp + 0x3C);
    PUSH32(esp, eax);
    PUSH32(esp, ecx);
    PUSH32(esp, edx);
    eax = 0x76FE20;
    PUSH32(esp, 0); sub_003D8140(); /* call 0x003D8140 */

loc_002A0F5B: ;
    esp = esp + 0x10;
    if (TEST_Z(eax, eax)) goto loc_002A0F9E; /* je: equal / zero */

loc_002A0F62: ;
    eax = MEM32(esp + 0x48);
    esi = MEM32(ebx + 0x14);
    edi = eax + 0x10;
    ecx = 0x24;
    memcpy((void*)XBOX_PTR(edi), (void*)XBOX_PTR(esi), ecx * 4);
    esi += ecx * 4; edi += ecx * 4; ecx = 0; /* rep movsd */
    ecx = MEM32(esp + 0x50);
    (void)0; /* test ecx, ecx - flags set for next jcc */
    MEM32(eax) = 1;
    MEM32(esp + 0x44) = 1;
    if (TEST_Z(ecx, ecx)) goto loc_002A0F9E; /* je: equal / zero */

loc_002A0F89: ;
    eax = MEM32(ebx + 0x14);
    eax = MEM32(eax + 0x88);
    if (TEST_Z(eax, eax)) goto loc_002A0F9A; /* je: equal / zero */

loc_002A0F96: ;
    eax = MEM32(eax);
    goto loc_002A0F9C;

loc_002A0F9A: ;
    eax = 0; /* xor self */

loc_002A0F9C: ;
    MEM32(ecx) = eax;

loc_002A0F9E: ;
    eax = MEM32(0x774A54);
    if (TEST_Z(eax, eax)) { sub_002A0FAF(); return; } /* je: equal / zero */

loc_002A0FA7: ;
    ebp = eax + -416;
    g_seh_ebp = ebp; sub_002A0FB1(); return; /* tail jmp 0x002A0FB1 */

}

/**
 * sub_002A14C0
 * Original: 0x002A14C0 - 0x002A15B2 (242 bytes, 59 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_002A14C0(void)
{
    int _flags = 0; /* fallback flag var */
    float xmm0, xmm1, xmm2;

loc_002A14C0: ;
    esp = esp - 0x10;
    xmm0 = MEMF(0x648D14); /* movss */
    xmm0 = xmm0 - MEMF(esp + 0x20); /* subss */
    ecx = MEM32(esp + 0x18);
    eax = esp + 4;
    PUSH32(esp, esi);
    esi = MEM32(esp + 0x28);
    MEMF(esp + 4) = xmm0; /* movss */
    MEM32(esp + 0x24) = eax;
    xmm0 = MEMF(esp + 4); /* movss */
    /* shufps xmm0, xmm0, 0 */
    edx = MEM32(esp + 0x18);
    xmm1 = MEMF(edx); /* movss */
    xmm1 = MEMD(edx + 4); /* movhps */
    /* mulps: xmm0 *= xmm1 (packed 4xfloat) */
    eax = MEM32(esp + 0x24);
    MEMF(eax) = xmm0; /* movss */
    MEMD(eax + 4) = xmm0; /* movhps */
    xmm0 = MEMF(ecx + 8); /* movss */
    xmm0 = xmm0 * MEMF(esp + 0x10); /* mulss */
    xmm1 = MEMF(ecx); /* movss */
    xmm1 = xmm1 * MEMF(esp + 8); /* mulss */
    xmm0 = xmm0 + xmm1; /* addss */
    xmm1 = MEMF(ecx + 4); /* movss */
    xmm1 = xmm1 * MEMF(esp + 0xC); /* mulss */
    xmm0 = xmm0 + xmm1; /* addss */
    xmm1 = MEMF(ecx + 4); /* movss */
    /* comiss xmm1, MEMF(0x6494D8) - sets EFLAGS */
    if ((xmm1 <= MEMF(0x6494D8))) goto loc_002A1575; /* jbe: below or equal (unsigned <=) */

loc_002A1543: ;
    xmm2 = 0.0f; /* xorps self = zero */
    MEMF(esi + 8) = xmm2; /* movss */
    MEMF(esi) = xmm2; /* movss */
    xmm0 = xmm0 / MEMF(ecx + 4); /* divss */
    xmm0 = xmm0 * MEMF(esp + 0x20); /* mulss */
    xmm1 = xmm2; /* movaps */
    xmm1 = xmm1 - xmm0; /* subss */
    /* comiss xmm2, xmm1 - sets EFLAGS */
    MEMF(esi + 4) = xmm1; /* movss */
    if ((xmm2 <= xmm1)) goto loc_002A15AD; /* jbe: below or equal (unsigned <=) */

loc_002A156B: ;
    MEMF(esi + 4) = xmm2; /* movss */
    POP32(esp, esi);
    esp = esp + 0x10;
    esp += 4; return; /* ret */

loc_002A1575: ;
    xmm0 = xmm0 * MEMF(esp + 0x20); /* mulss */
    xmm1 = 0.0f; /* xorps self = zero */
    xmm1 = xmm1 - xmm0; /* subss */
    MEMF(esp + 0x24) = xmm1; /* movss */
    xmm0 = MEMF(esp + 0x24); /* movss */
    /* shufps xmm0, xmm0, 0 */
    edx = MEM32(esp + 0x1C);
    xmm1 = MEMF(edx); /* movss */
    xmm1 = MEMD(edx + 4); /* movhps */
    /* mulps: xmm0 *= xmm1 (packed 4xfloat) */
    eax = MEM32(esp + 0x28);
    MEMF(eax) = xmm0; /* movss */
    MEMD(eax + 4) = xmm0; /* movhps */

loc_002A15AD: ;
    POP32(esp, esi);
    esp = esp + 0x10;
    esp += 4; return; /* ret */

}

/**
 * sub_002A15C0
 * Original: 0x002A15C0 - 0x002A18CF (783 bytes, 196 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_002A15C0(void)
{
    int _flags = 0; /* fallback flag var */
    float xmm0, xmm1, xmm2, xmm3, xmm4, xmm5, xmm6;

loc_002A15C0: ;
    esp = esp - 0x60;
    PUSH32(esp, ebx);
    PUSH32(esp, esi);
    ebx = eax;
    PUSH32(esp, edi);
    edi = ebx + 0x40;
    eax = esp + 0x48;
    MEM32(esp + 0x10) = edi;
    MEM32(esp + 0xC) = eax;
    ecx = MEM32(esp + 0x70);
    xmm0 = MEMF(ecx); /* movss */
    xmm0 = MEMD(ecx + 4); /* movhps */
    edx = MEM32(esp + 0x10);
    xmm1 = MEMF(edx); /* movss */
    xmm1 = MEMD(edx + 4); /* movhps */
    /* subps: xmm0 -= xmm1 (packed 4xfloat) */
    eax = MEM32(esp + 0xC);
    MEMF(eax) = xmm0; /* movss */
    MEMD(eax + 4) = xmm0; /* movhps */
    xmm0 = MEMF(ebx + 0x74); /* movss */
    xmm0 = xmm0 * MEMF(esp + 0x4C); /* mulss */
    xmm1 = MEMF(ebx + 0x78); /* movss */
    xmm1 = xmm1 * MEMF(esp + 0x50); /* mulss */
    esi = ebx + 0x70;
    xmm0 = xmm0 + xmm1; /* addss */
    xmm1 = MEMF(esi); /* movss */
    xmm1 = xmm1 * MEMF(esp + 0x48); /* mulss */
    xmm0 = xmm0 + xmm1; /* addss */
    /* comiss xmm4, xmm0 - sets EFLAGS */
    if ((xmm4 <= xmm0)) goto loc_002A1699; /* jbe: below or equal (unsigned <=) */

loc_002A162E: ;
    xmm1 = xmm4; /* movaps */
    ecx = esp + 0x24;
    xmm1 = xmm1 - xmm0; /* subss */
    MEM32(esp + 0xC) = esi;
    MEMF(esp + 0x14) = xmm1; /* movss */
    MEM32(esp + 0x10) = ecx;
    xmm0 = MEMF(esp + 0x14); /* movss */
    /* shufps xmm0, xmm0, 0 */
    edx = MEM32(esp + 0xC);
    xmm1 = MEMF(edx); /* movss */
    xmm1 = MEMD(edx + 4); /* movhps */
    /* mulps: xmm0 *= xmm1 (packed 4xfloat) */
    eax = MEM32(esp + 0x10);
    MEMF(eax) = xmm0; /* movss */
    MEMD(eax + 4) = xmm0; /* movhps */
    edx = ecx;
    MEM32(esp + 0x14) = edx;
    ecx = MEM32(esp + 0x70);
    xmm0 = MEMF(ecx); /* movss */
    xmm0 = MEMD(ecx + 4); /* movhps */
    edx = MEM32(esp + 0x14);
    xmm1 = MEMF(edx); /* movss */
    xmm1 = MEMD(edx + 4); /* movhps */
    /* addps: xmm0 += xmm1 (packed 4xfloat) */
    eax = MEM32(esp + 0x70);
    MEMF(eax) = xmm0; /* movss */
    MEMD(eax + 4) = xmm0; /* movhps */

loc_002A1699: ;
    eax = ebx + 0x4C;
    ecx = esp + 0x30;
    MEM32(esp + 0x10) = edi;
    MEM32(esp + 0xC) = eax;
    MEM32(esp + 0x14) = ecx;
    ecx = MEM32(esp + 0xC);
    xmm0 = MEMF(ecx); /* movss */
    xmm0 = MEMD(ecx + 4); /* movhps */
    edx = MEM32(esp + 0x10);
    xmm1 = MEMF(edx); /* movss */
    xmm1 = MEMD(edx + 4); /* movhps */
    /* subps: xmm0 -= xmm1 (packed 4xfloat) */
    eax = MEM32(esp + 0x14);
    MEMF(eax) = xmm0; /* movss */
    MEMD(eax + 4) = xmm0; /* movhps */
    ebx = ebx + 0x58;
    edx = esp + 0x3C;
    MEM32(esp + 0x10) = edi;
    MEM32(esp + 0xC) = ebx;
    MEM32(esp + 0x14) = edx;
    ecx = MEM32(esp + 0xC);
    xmm0 = MEMF(ecx); /* movss */
    xmm0 = MEMD(ecx + 4); /* movhps */
    edx = MEM32(esp + 0x10);
    xmm1 = MEMF(edx); /* movss */
    xmm1 = MEMD(edx + 4); /* movhps */
    /* subps: xmm0 -= xmm1 (packed 4xfloat) */
    eax = MEM32(esp + 0x14);
    MEMF(eax) = xmm0; /* movss */
    MEMD(eax + 4) = xmm0; /* movhps */
    xmm2 = MEMF(esp + 0x44); /* movss */
    xmm0 = MEMF(esp + 0x40); /* movss */
    xmm3 = MEMF(esp + 0x34); /* movss */
    xmm1 = MEMF(esp + 0x38); /* movss */
    xmm6 = xmm0; /* movaps */
    xmm6 = xmm6 * xmm1; /* mulss */
    xmm5 = xmm2; /* movaps */
    xmm5 = xmm5 * xmm3; /* mulss */
    xmm5 = xmm5 - xmm6; /* subss */
    xmm6 = MEMF(esp + 0x30); /* movss */
    MEMF(esp + 0x60) = xmm5; /* movss */
    xmm5 = MEMF(esp + 0x3C); /* movss */
    eax = MEM32(esp + 0x60);
    xmm1 = xmm1 * xmm5; /* mulss */
    xmm2 = xmm2 * xmm6; /* mulss */
    xmm0 = xmm0 * xmm6; /* mulss */
    xmm3 = xmm3 * xmm5; /* mulss */
    xmm1 = xmm1 - xmm2; /* subss */
    xmm0 = xmm0 - xmm3; /* subss */
    MEMF(esp + 0x64) = xmm1; /* movss */
    ecx = MEM32(esp + 0x64);
    MEMF(esp + 0x68) = xmm0; /* movss */
    edx = MEM32(esp + 0x68);
    MEM32(esp + 0x18) = eax;
    eax = esp + 0x18;
    MEM32(esp + 0x1C) = ecx;
    MEM32(esp + 0x20) = edx;
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
    xmm0 = MEMF(0x648D24); /* movss */
    xmm3 = MEMF(esp + 0x10); /* movss */
    /* comiss xmm0, xmm3 - sets EFLAGS */
    xmm2 = xmm4; /* movaps */
    xmm2 = xmm2 * xmm4; /* mulss */
    if ((xmm0 > xmm3)) goto loc_002A18C8; /* ja: above (unsigned >) */

loc_002A17D4: ;
    xmm0 = MEMF(0x648D80); /* movss */
    ecx = esp + 0x54;
    MEM32(esp + 0x10) = esi;
    MEMF(esp + 0xC) = xmm0; /* movss */
    MEM32(esp + 0x14) = ecx;
    xmm0 = MEMF(esp + 0xC); /* movss */
    /* shufps xmm0, xmm0, 0 */
    edx = MEM32(esp + 0x10);
    xmm1 = MEMF(edx); /* movss */
    xmm1 = MEMD(edx + 4); /* movhps */
    /* mulps: xmm0 *= xmm1 (packed 4xfloat) */
    eax = MEM32(esp + 0x14);
    MEMF(eax) = xmm0; /* movss */
    MEMD(eax + 4) = xmm0; /* movhps */
    edx = esp + 0x24;
    esi = 0; /* xor self */
    MEM32(esp + 0x10) = edi;
    MEM32(esp + 0x14) = edx;
    xmm3 = xmm3 * xmm2; /* mulss */
    goto loc_002A1830;

    /* nop */
    edi = edi;

loc_002A1830: ;
    ecx = MEM32(esp + 0x70);
    xmm0 = MEMF(ecx); /* movss */
    xmm0 = MEMD(ecx + 4); /* movhps */
    edx = MEM32(esp + 0x10);
    xmm1 = MEMF(edx); /* movss */
    xmm1 = MEMD(edx + 4); /* movhps */
    /* subps: xmm0 -= xmm1 (packed 4xfloat) */
    eax = MEM32(esp + 0x14);
    MEMF(eax) = xmm0; /* movss */
    MEMD(eax + 4) = xmm0; /* movhps */
    xmm0 = MEMF(esp + 0x2C); /* movss */
    xmm0 = xmm0 * MEMF(esp + 0x20); /* mulss */
    xmm1 = MEMF(esp + 0x28); /* movss */
    xmm1 = xmm1 * MEMF(esp + 0x1C); /* mulss */
    xmm0 = xmm0 + xmm1; /* addss */
    xmm1 = MEMF(esp + 0x24); /* movss */
    xmm1 = xmm1 * MEMF(esp + 0x18); /* mulss */
    xmm0 = xmm0 + xmm1; /* addss */
    xmm1 = xmm0; /* movaps */
    xmm1 = xmm1 * xmm0; /* mulss */
    /* comiss xmm1, xmm3 - sets EFLAGS */
    if ((xmm1 > xmm3)) goto loc_002A18C8; /* ja: above (unsigned >) */

loc_002A188F: ;
    eax = esp + 0x54;
    MEM32(esp + 0xC) = eax;
    ecx = MEM32(esp + 0x70);
    xmm0 = MEMF(ecx); /* movss */
    xmm0 = MEMD(ecx + 4); /* movhps */
    edx = MEM32(esp + 0xC);
    xmm1 = MEMF(edx); /* movss */
    xmm1 = MEMD(edx + 4); /* movhps */
    /* addps: xmm0 += xmm1 (packed 4xfloat) */
    eax = MEM32(esp + 0x70);
    MEMF(eax) = xmm0; /* movss */
    MEMD(eax + 4) = xmm0; /* movhps */
    esi++;
    if (CMP_L(esi, 0xA)) goto loc_002A1830; /* jl: less (signed <) */

loc_002A18C8: ;
    POP32(esp, edi);
    POP32(esp, esi);
    POP32(esp, ebx);
    esp = esp + 0x60;
    esp += 4; return; /* ret */

}

/**
 * sub_002A18D0
 * Original: 0x002A18D0 - 0x002A1B07 (567 bytes, 165 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_002A18D0(void)
{
    uint32_t ebp;
    int _flags = 0; /* fallback flag var */
    float xmm0, xmm1, xmm4;
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_002A18D0: ;
    esp = esp - 0x48;
    PUSH32(esp, ebp);
    ebp = MEM32(esp + 0x50);
    PUSH32(esp, edi);
    edi = 0; /* xor self */
    PUSH32(esp, 0); sub_003D6AD0(); /* call 0x003D6AD0 */

loc_002A18E0: ;
    if (TEST_Z(eax, eax)) goto loc_002A18FA; /* je: equal / zero */

loc_002A18E4: ;
    edx = ecx;
    ebp = MEM32(edx);
    MEM32(eax) = ebp;
    ebp = MEM32(edx + 4);
    MEM32(eax + 4) = ebp;
    edx = MEM32(edx + 8);
    ebp = MEM32(esp + 0x54);
    MEM32(eax + 8) = edx;

loc_002A18FA: ;
    eax = MEM32(ecx);
    edx = MEM32(ecx + 4);
    MEM32(esp + 0x20) = eax;
    eax = MEM32(ecx + 8);
    ecx = ebp;
    MEM32(esp + 0x24) = edx;
    edx = MEM32(ecx);
    MEM32(esp + 0x28) = eax;
    eax = MEM32(ecx + 4);
    ecx = MEM32(ecx + 8);
    MEM32(esp + 0x14) = edx;
    MEM32(esp + 0x18) = eax;
    MEM32(esp + 0x1C) = ecx;

loc_002A1924: ;
    edx = MEM32(esp + 0x58);
    eax = MEM32(0x6C0200);
    PUSH32(esp, 0);
    PUSH32(esp, 0);
    PUSH32(esp, 0);
    PUSH32(esp, ebx);
    PUSH32(esp, edx);
    PUSH32(esp, 0x76FC38);
    PUSH32(esp, eax);
    ecx = esp + 0x3C;
    PUSH32(esp, ecx);
    edx = esp + 0x34;
    PUSH32(esp, edx);
    PUSH32(esp, 0); sub_002A0F00(); /* call 0x002A0F00 */

loc_002A194A: ;
    esp = esp + 0x24;
    if (TEST_Z(eax, eax)) { sub_002A1B07(); return; } /* je: equal / zero */

loc_002A1955: ;
    xmm0 = 0.0f; /* xorps self = zero */
    /* comiss xmm0, MEMF(esi + 4) - sets EFLAGS */
    eax = MEM32(esi + 0x14);
    if ((xmm0 <= MEMF(esi + 4))) goto loc_002A1991; /* jbe: below or equal (unsigned <=) */

loc_002A1961: ;
    xmm4 = MEMF(0x6C0200); /* movss */
    ecx = esp + 0x14;
    PUSH32(esp, ecx);
    PUSH32(esp, 0); sub_002A15C0(); /* call 0x002A15C0 */

loc_002A1973: ;
    eax = MEM32(esp + 0x18);
    ecx = MEM32(esp + 0x1C);
    edx = ebp;
    MEM32(edx) = eax;
    eax = MEM32(esp + 0x20);
    MEM32(edx + 4) = ecx;
    esp = esp + 4;
    MEM32(edx + 8) = eax;
    goto loc_002A1AEE;

loc_002A1991: ;
    edx = MEM32(esi + 4);
    ecx = esp + 0x2C;
    PUSH32(esp, ecx);
    PUSH32(esp, edx);
    eax = eax + 0x7C;
    PUSH32(esp, 0x3F8CCCCD);
    PUSH32(esp, eax);
    eax = esp + 0x30;
    PUSH32(esp, eax);
    PUSH32(esp, 0); sub_002A14C0(); /* call 0x002A14C0 */

loc_002A19AD: ;
    ecx = esp + 0x40;
    edx = esp + 0x34;
    eax = esp + 0x58;
    esp = esp + 0x14;
    MEM32(esp + 8) = ecx;
    MEM32(esp + 0xC) = edx;
    MEM32(esp + 0x54) = eax;
    ecx = MEM32(esp + 0xC);
    xmm0 = MEMF(ecx); /* movss */
    xmm0 = MEMD(ecx + 4); /* movhps */
    edx = MEM32(esp + 8);
    xmm1 = MEMF(edx); /* movss */
    xmm1 = MEMD(edx + 4); /* movhps */
    /* addps: xmm0 += xmm1 (packed 4xfloat) */
    eax = MEM32(esp + 0x54);
    MEMF(eax) = xmm0; /* movss */
    MEMD(eax + 4) = xmm0; /* movhps */
    ecx = esp + 0x44;
    edx = esp + 0x14;
    eax = esp + 0x38;
    MEM32(esp + 0xC) = ecx;
    MEM32(esp + 8) = edx;
    MEM32(esp + 0x54) = eax;
    ecx = MEM32(esp + 8);
    xmm0 = MEMF(ecx); /* movss */
    xmm0 = MEMD(ecx + 4); /* movhps */
    edx = MEM32(esp + 0xC);
    xmm1 = MEMF(edx); /* movss */
    xmm1 = MEMD(edx + 4); /* movhps */
    /* addps: xmm0 += xmm1 (packed 4xfloat) */
    eax = MEM32(esp + 0x54);
    MEMF(eax) = xmm0; /* movss */
    MEMD(eax + 4) = xmm0; /* movhps */
    xmm0 = MEMF(esi + 4); /* movss */
    xmm0 = xmm0 * MEMF(0x648E40); /* mulss */
    ecx = esp + 0x20;
    edx = ecx;
    MEMF(esp + 0x10) = xmm0; /* movss */
    MEM32(esp + 0xC) = ecx;
    MEM32(esp + 0x54) = edx;
    xmm0 = MEMF(esp + 0x10); /* movss */
    /* shufps xmm0, xmm0, 0 */
    edx = MEM32(esp + 0xC);
    xmm1 = MEMF(edx); /* movss */
    xmm1 = MEMD(edx + 4); /* movhps */
    /* mulps: xmm0 *= xmm1 (packed 4xfloat) */
    eax = MEM32(esp + 0x54);
    MEMF(eax) = xmm0; /* movss */
    MEMD(eax + 4) = xmm0; /* movhps */
    eax = ecx;
    ecx = esp + 0x14;
    edx = ecx;
    MEM32(esp + 0xC) = eax;
    MEM32(esp + 8) = ecx;
    MEM32(esp + 0x54) = edx;
    ecx = MEM32(esp + 8);
    xmm0 = MEMF(ecx); /* movss */
    xmm0 = MEMD(ecx + 4); /* movhps */
    edx = MEM32(esp + 0xC);
    xmm1 = MEMF(edx); /* movss */
    xmm1 = MEMD(edx + 4); /* movhps */
    /* addps: xmm0 += xmm1 (packed 4xfloat) */
    eax = MEM32(esp + 0x54);
    MEMF(eax) = xmm0; /* movss */
    MEMD(eax + 4) = xmm0; /* movhps */
    eax = esp + 0x14;
    ecx = esp + 0x38;
    edx = esp + 0x20;
    MEM32(esp + 0xC) = eax;
    MEM32(esp + 8) = ecx;
    MEM32(esp + 0x54) = edx;
    ecx = MEM32(esp + 8);
    xmm0 = MEMF(ecx); /* movss */
    xmm0 = MEMD(ecx + 4); /* movhps */
    edx = MEM32(esp + 0xC);
    xmm1 = MEMF(edx); /* movss */
    xmm1 = MEMD(edx + 4); /* movhps */
    /* subps: xmm0 -= xmm1 (packed 4xfloat) */
    eax = MEM32(esp + 0x54);
    MEMF(eax) = xmm0; /* movss */
    MEMD(eax + 4) = xmm0; /* movhps */

loc_002A1AEE: ;
    edi++;
    if (CMP_L(edi, 0xA)) goto loc_002A1924; /* jl: less (signed <) */

loc_002A1AF8: ;
    edi = 0; /* xor self */
    eax = 0; /* xor self */
    (void)0; /* test edi, edi - flags set for next jcc */
    POP32(esp, edi);
    SET_LO8(eax, (TEST_NZ(edi, edi)) ? 1 : 0); /* setne */
    POP32(esp, ebp);
    esp = esp + 0x48;
    esp += 4; return; /* ret */

}

/**
 * sub_002A1B70
 * Original: 0x002A1B70 - 0x002A1BB6 (70 bytes, 22 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_002A1B70(void)
{
    uint32_t ebp;
    int _flags = 0; /* fallback flag var */
    float xmm6;
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_002A1B70: ;
    xmm6 = 0.0f; /* xorps self = zero */
    esp = esp - 0xC;
    eax = esp + 8;
    PUSH32(esp, eax);
    ecx = esp + 8;
    PUSH32(esp, ecx);
    edx = esp + 8;
    PUSH32(esp, edx);
    ecx = ebx;
    MEM8(0x780A54) = 0;
    MEMF(0x780A50) = xmm6; /* movss */
    PUSH32(esp, 0); sub_00301610(); /* call 0x00301610 */

loc_002A1B9B: ;
    eax = MEM32(ebx + 0x64);
    esp = esp + 0xC;
    if (CMP_EQ(eax, 0x48)) { sub_002A1BB6(); return; } /* je: equal / zero */

loc_002A1BA6: ;
    if (CMP_EQ(eax, 0x49)) { sub_002A1BB6(); return; } /* je: equal / zero */

loc_002A1BAB: ;
    if (CMP_EQ(eax, 0x47)) { sub_002A1BB6(); return; } /* je: equal / zero */

loc_002A1BB0: ;
    edx = ZX16(MEM16(ebx + 0x60));
    g_seh_ebp = ebp; sub_002A1BBB(); return; /* tail jmp 0x002A1BBB */

}

/**
 * sub_002A1FB0
 * Original: 0x002A1FB0 - 0x002A20A3 (243 bytes, 78 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_002A1FB0(void)
{
    uint32_t ebp;
    int _flags = 0; /* fallback flag var */
    float xmm0;

loc_002A1FB0: ;
    PUSH32(esp, ebp);
    ebp = esp;
    esp = esp & 0xFFFFFFF0u;
    esp = esp - 0xB0;
    eax = MEM32(ebp + 8);
    edx = MEM32(eax);
    xmm0 = 0.0f; /* xorps self = zero */
    ecx = esi;
    MEM32(ecx) = edx;
    edx = MEM32(eax + 4);
    MEM32(ecx + 4) = edx;
    eax = MEM32(eax + 8);
    MEM32(ecx + 8) = eax;
    eax = MEM32(0x76FE14);
    (void)0; /* test eax, eax - flags set for next jcc */
    MEMF(0x74FA10) = xmm0; /* movss */
    if (TEST_Z(eax, eax)) { sub_002A20A3(); return; } /* je: equal / zero */

loc_002A1FE9: ;
    ecx = MEM32(eax + 0x10);
    if (TEST_Z(ecx, ecx)) { sub_002A20A3(); return; } /* je: equal / zero */

loc_002A1FF4: ;
    ecx = MEM32(ebp + 0x18);
    eax = MEM32(ebp + 0xC);
    PUSH32(esp, ecx);
    ecx = MEM32(ebp + 8);
    edx = esp + 4;
    PUSH32(esp, edx);
    PUSH32(esp, 0x76FC38);
    PUSH32(esp, eax);
    PUSH32(esp, ecx);
    PUSH32(esp, 0); sub_002A0D00(); /* call 0x002A0D00 */

loc_002A200F: ;
    esp = esp + 0x14;
    if (TEST_Z(eax, eax)) { sub_002A20A3(); return; } /* je: equal / zero */

loc_002A201A: ;
    edx = MEM32(0x76FC40);
    MEM32(esi) = edx;
    eax = MEM32(0x76FC44);
    MEM32(esi + 4) = eax;
    ecx = MEM32(0x76FC48);
    eax = MEM32(ebp + 0x10);
    MEM32(esi + 8) = ecx;
    edx = MEM32(0x76FC4C);
    edx = edx + 0x7C;
    ecx = MEM32(edx);
    MEM32(eax) = ecx;
    ecx = MEM32(edx + 4);
    MEM32(eax + 4) = ecx;
    edx = MEM32(edx + 8);
    MEM32(eax + 8) = edx;
    eax = MEM32(0x76FC4C);
    eax = eax + 0x40;
    ecx = eax;
    edx = MEM32(ecx);
    eax = MEM32(ebp + 0x14);
    MEM32(eax) = edx;
    edx = MEM32(ecx + 4);
    MEM32(eax + 4) = edx;
    ecx = MEM32(ecx + 8);
    MEM32(eax + 8) = ecx;
    edx = MEM32(0x76FC4C);
    edx = edx + 0x4C;
    eax = MEM32(edx);
    MEM32(ebx) = eax;
    ecx = MEM32(edx + 4);
    MEM32(ebx + 4) = ecx;
    edx = MEM32(edx + 8);
    MEM32(ebx + 8) = edx;
    eax = MEM32(0x76FC4C);
    eax = eax + 0x58;
    ecx = MEM32(eax);
    MEM32(edi) = ecx;
    edx = MEM32(eax + 4);
    MEM32(edi + 4) = edx;
    eax = MEM32(eax + 8);
    MEM32(edi + 8) = eax;
    SET_LO8(eax, 1);
    esp = ebp;
    POP32(esp, ebp);
    esp += 4; return; /* ret */

}

/**
 * sub_002A20B0
 * Original: 0x002A20B0 - 0x002A217A (202 bytes, 65 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_002A20B0(void)
{
    uint32_t ebp;
    int _flags = 0; /* fallback flag var */
    float xmm0;

loc_002A20B0: ;
    PUSH32(esp, ebp);
    ebp = esp;
    esp = esp & 0xFFFFFFF0u;
    esp = esp - 0xBC;
    xmm0 = 0.0f; /* xorps self = zero */
    PUSH32(esp, ebx);
    ecx = eax;
    ebx = MEM32(ecx);
    edx = esi;
    MEM32(edx) = ebx;
    ebx = MEM32(ecx + 4);
    MEM32(edx + 4) = ebx;
    ecx = MEM32(ecx + 8);
    MEM32(edx + 8) = ecx;
    ecx = MEM32(0x76FE14);
    (void)0; /* test ecx, ecx - flags set for next jcc */
    MEMF(0x74FA10) = xmm0; /* movss */
    if (TEST_Z(ecx, ecx)) { sub_002A217A(); return; } /* je: equal / zero */

loc_002A20EA: ;
    edx = MEM32(ecx + 0x10);
    if (TEST_Z(edx, edx)) { sub_002A217A(); return; } /* je: equal / zero */

loc_002A20F5: ;
    edx = MEM32(ebp + 0x18);
    ecx = MEM32(ebp + 0x14);
    PUSH32(esp, edx);
    edx = MEM32(ebp + 0x10);
    PUSH32(esp, ecx);
    PUSH32(esp, 0);
    PUSH32(esp, edx);
    edx = MEM32(ebp + 0xC);
    ecx = esp + 0x20;
    PUSH32(esp, ecx);
    ecx = MEM32(ebp + 8);
    PUSH32(esp, 0x76FC38);
    PUSH32(esp, edx);
    PUSH32(esp, ecx);
    PUSH32(esp, eax);
    MEM32(0x84B56C) = 3;
    PUSH32(esp, 0); sub_002A0F00(); /* call 0x002A0F00 */

loc_002A2125: ;
    esp = esp + 0x24;
    if (TEST_Z(eax, eax)) { sub_002A217A(); return; } /* je: equal / zero */

loc_002A212C: ;
    xmm0 = MEMF(0x76FC3C); /* movss */
    /* comiss xmm0, MEMF(0x648CF8) - sets EFLAGS */
    if ((xmm0 <= MEMF(0x648CF8))) goto loc_002A2156; /* jbe: below or equal (unsigned <=) */

loc_002A213D: ;
    edx = MEM32(0x76FC40);
    MEM32(esi) = edx;
    eax = MEM32(0x76FC44);
    MEM32(esi + 4) = eax;
    ecx = MEM32(0x76FC48);
    MEM32(esi + 8) = ecx;

loc_002A2156: ;
    if (TEST_Z(edi, edi)) goto loc_002A2173; /* je: equal / zero */

loc_002A215A: ;
    edx = MEM32(0x76FC4C);
    edx = edx + 0x7C;
    eax = MEM32(edx);
    MEM32(edi) = eax;
    ecx = MEM32(edx + 4);
    MEM32(edi + 4) = ecx;
    edx = MEM32(edx + 8);
    MEM32(edi + 8) = edx;

loc_002A2173: ;
    SET_LO8(eax, 1);
    POP32(esp, ebx);
    esp = ebp;
    POP32(esp, ebp);
    esp += 4; return; /* ret */

}

/**
 * sub_002A2190
 * Original: 0x002A2190 - 0x002A21D0 (64 bytes, 22 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_002A2190(void)
{
    int _flags = 0; /* fallback flag var */

loc_002A2190: ;
    if (CMP_NE(MEM32(0x7FA1F8), 0xB)) { sub_002A21D0(); return; } /* jne: not equal / not zero */

loc_002A2199: ;
    edx = MEM32(0x76FD10);
    eax = 0; /* xor self */
    (void)0; /* test edx, edx - flags set for next jcc */
    PUSH32(esp, esi);
    if (CMP_LE(edx & edx, 0)) goto loc_002A21C2; /* jle: less or equal (signed <=) */

loc_002A21A6: ;
    esi = MEM32(0x8471B8);
    ecx = esi + 0xC6;

loc_002A21B2: ;
    if (CMP_EQ(MEM8(ecx), 0xFA)) goto loc_002A21C6; /* je: equal / zero */

loc_002A21B7: ;
    eax++;
    ecx = ecx + 0x150;
    if (CMP_L(eax, edx)) goto loc_002A21B2; /* jl: less (signed <) */

loc_002A21C2: ;
    POP32(esp, esi);
    eax = 0; /* xor self */
    esp += 4; return; /* ret */

loc_002A21C6: ;
    eax = (uint32_t)((int32_t)eax * (int32_t)0x150);
    eax = eax + esi;
    POP32(esp, esi);
    esp += 4; return; /* ret */

}

/**
 * sub_002A21E0
 * Original: 0x002A21E0 - 0x002A22C6 (230 bytes, 69 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_002A21E0(void)
{
    uint32_t ebp;
    int _flags = 0; /* fallback flag var */
    float xmm0;
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_002A21E0: ;
    xmm0 = MEMF(0x648D14); /* movss */
    esp = esp - 0xC;
    PUSH32(esp, ebx);
    eax = 0; /* xor self */
    PUSH32(esp, ebp);
    ebp = MEM32(esp + 0x20);
    MEM32(ebp) = eax;
    ecx = MEM32(0x76FE14);
    (void)0; /* cmp ecx, eax - flags set for next jcc */
    PUSH32(esp, edi);
    edi = MEM32(esp + 0x1C);
    MEM32(0x76FC50) = eax;
    MEMF(0x76FC3C) = xmm0; /* movss */
    MEM32(0x76FC58) = eax;
    if (CMP_EQ(ecx, eax)) goto loc_002A2268; /* je: equal / zero */

loc_002A2217: ;
    if (CMP_EQ(MEM32(ecx + 0x10), eax)) goto loc_002A2268; /* je: equal / zero */

loc_002A221C: ;
    eax = MEM32(0x76FE0C);
    MEM32(0x812A18) = eax;
    eax = MEM32(esp + 0x20);
    PUSH32(esp, 0); sub_003D7270(); /* call 0x003D7270 */

loc_002A222F: ;
    ecx = MEM32(ecx + 0x10);
    xmm0 = 0.0f; /* xorps self = zero */
    PUSH32(esp, ecx);
    PUSH32(esp, edi);
    ecx = esp + 0x14;
    PUSH32(esp, ecx);
    PUSH32(esp, esi);
    ebx = 0x76FC38;
    eax = 0x76FE20;
    MEMF(esp + 0x1C) = xmm0; /* movss */
    MEMF(esp + 0x20) = xmm0; /* movss */
    MEMF(esp + 0x24) = xmm0; /* movss */
    PUSH32(esp, 0); sub_003D8140(); /* call 0x003D8140 */

loc_002A225E: ;
    esp = esp + 0x10;
    if (TEST_Z(eax, eax)) goto loc_002A2268; /* je: equal / zero */

loc_002A2265: ;
    MEM32(ebp) = ebx;

loc_002A2268: ;
    PUSH32(esp, 0); sub_002A2190(); /* call 0x002A2190 */

loc_002A226D: ;
    if (TEST_Z(eax, eax)) { sub_002A22C6(); return; } /* je: equal / zero */

loc_002A2271: ;
    edx = MEM32(eax + 0x140);
    xmm0 = 0.0f; /* xorps self = zero */
    MEM32(0x812A18) = edx;
    ecx = MEM32(eax + 0x60);
    edx = MEM32(ecx + 0x24);
    ecx = MEM32(edx + 0x18);
    ecx = MEM32(ecx + 0x14);
    PUSH32(esp, ecx);
    PUSH32(esp, edi);
    edx = esp + 0x14;
    PUSH32(esp, edx);
    eax = eax + 0x20;
    PUSH32(esp, esi);
    ebx = 0x76FC38;
    MEMF(esp + 0x1C) = xmm0; /* movss */
    MEMF(esp + 0x20) = xmm0; /* movss */
    MEMF(esp + 0x24) = xmm0; /* movss */
    PUSH32(esp, 0); sub_003D8140(); /* call 0x003D8140 */

loc_002A22B3: ;
    esp = esp + 0x10;
    if (TEST_Z(eax, eax)) { sub_002A22C6(); return; } /* je: equal / zero */

loc_002A22BA: ;
    POP32(esp, edi);
    MEM32(ebp) = ebx;
    POP32(esp, ebp);
    SET_LO8(eax, 1);
    POP32(esp, ebx);
    esp = esp + 0xC;
    esp += 4; return; /* ret */

}

/**
 * sub_002A22E0
 * Original: 0x002A22E0 - 0x002A234C (108 bytes, 34 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_002A22E0(void)
{
    int _flags = 0; /* fallback flag var */
    float xmm0;

loc_002A22E0: ;
    ecx = MEM32(0x76FE14);
    esp = esp - 0xC;
    if (TEST_Z(ecx, ecx)) { sub_002A234C(); return; } /* je: equal / zero */

loc_002A22ED: ;
    eax = MEM32(ecx + 0x10);
    if (TEST_Z(eax, eax)) { sub_002A234C(); return; } /* je: equal / zero */

loc_002A22F4: ;
    eax = MEM32(0x76FE0C);
    MEM32(0x812A18) = eax;
    eax = MEM32(esp + 0x18);
    PUSH32(esp, ebx);
    PUSH32(esp, 0); sub_003D7270(); /* call 0x003D7270 */

loc_002A2308: ;
    ecx = MEM32(ecx + 0x10);
    eax = MEM32(esp + 0x14);
    xmm0 = 0.0f; /* xorps self = zero */
    ebx = MEM32(esp + 0x20);
    PUSH32(esp, ecx);
    ecx = MEM32(esp + 0x1C);
    PUSH32(esp, ecx);
    edx = esp + 0xC;
    PUSH32(esp, edx);
    PUSH32(esp, eax);
    eax = 0x76FE20;
    MEMF(esp + 0x14) = xmm0; /* movss */
    MEMF(esp + 0x18) = xmm0; /* movss */
    MEMF(esp + 0x1C) = xmm0; /* movss */
    PUSH32(esp, 0); sub_003D8140(); /* call 0x003D8140 */

loc_002A233E: ;
    esp = esp + 0x10;
    (void)0; /* test eax, eax - flags set for next jcc */
    POP32(esp, ebx);
    if (TEST_Z(eax, eax)) { sub_002A234C(); return; } /* je: equal / zero */

loc_002A2346: ;
    SET_LO8(eax, 1);
    esp = esp + 0xC;
    esp += 4; return; /* ret */

}

/**
 * sub_002A2360
 * Original: 0x002A2360 - 0x002A2452 (242 bytes, 66 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_002A2360(void)
{
    uint32_t ebp;
    int _flags = 0; /* fallback flag var */
    float xmm0;

loc_002A2360: ;
    PUSH32(esp, ebp);
    ebp = esp;
    esp = esp & 0xFFFFFFF0u;
    esp = esp - 0xD8;
    edx = MEM32(0x76FE14);
    ecx = 0; /* xor self */
    (void)0; /* cmp edx, ecx - flags set for next jcc */
    PUSH32(esp, ebx);
    PUSH32(esp, esi);
    MEM32(esp + 0x14) = ecx;
    if (CMP_EQ(edx, ecx)) goto loc_002A2445; /* je: equal / zero */

loc_002A2382: ;
    if (CMP_EQ(MEM32(edx + 0x10), ecx)) goto loc_002A2445; /* je: equal / zero */

loc_002A238B: ;
    edx = MEM32(eax);
    ebx = MEM32(ebp + 0x14);
    MEM32(esp + 0x18) = edx;
    edx = MEM32(eax + 4);
    eax = MEM32(eax + 8);
    MEM32(0x84B544) = ecx;
    MEM32(0x84B55C) = ecx;
    MEM32(0x84B548) = ecx;
    MEM32(0x84B560) = ecx;
    MEM32(0x74FA1C) = ecx;
    MEM32(0x84B534) = ecx;
    MEM32(esp + 0x20) = eax;
    eax = 1;
    ecx = esp + 0x30;
    MEM32(esp + 0x1C) = edx;
    PUSH32(esp, ecx);
    ecx = MEM32(ebp + 8);
    edx = esp + 0x1C;
    MEM32(0x819B24) = eax;
    MEM8(0x84A0EC) = LO8(eax);
    PUSH32(esp, edx);
    esi = 0x76FC38;
    eax = esp + 0x2C;
    MEM32(0x84B56C) = 3;
    MEMF(0x6C0200) = xmm0; /* movss */
    PUSH32(esp, 0); sub_002A18D0(); /* call 0x002A18D0 */

loc_002A2402: ;
    esp = esp + 8;
    (void)0; /* test edi, edi - flags set for next jcc */
    esi = eax;
    MEM8(0x84A0EC) = 0;
    if (TEST_Z(edi, edi)) goto loc_002A2420; /* je: equal / zero */

loc_002A2412: ;
    PUSH32(esp, edi);
    eax = 0x76FC38;
    PUSH32(esp, 0); sub_00067D70(); /* call 0x00067D70 */

loc_002A241D: ;
    esp = esp + 4;

loc_002A2420: ;
    if (TEST_Z(esi, esi)) goto loc_002A242C; /* je: equal / zero */

loc_002A2424: ;
    MEM32(esp + 0x14) = 1;

loc_002A242C: ;
    eax = MEM32(ebp + 0xC);
    ecx = MEM32(esp + 0x18);
    edx = MEM32(esp + 0x1C);
    MEM32(eax) = ecx;
    ecx = MEM32(esp + 0x20);
    MEM32(eax + 4) = edx;
    MEM32(eax + 8) = ecx;
    ecx = 0; /* xor self */

loc_002A2445: ;
    (void)0; /* cmp MEM32(esp + 0x14), ecx - flags set for next jcc */
    POP32(esp, esi);
    SET_LO8(eax, (CMP_NE(MEM32(esp + 0x14), ecx)) ? 1 : 0); /* setne */
    POP32(esp, ebx);
    esp = ebp;
    POP32(esp, ebp);
    esp += 4; return; /* ret */

}

/**
 * sub_002A2460
 * Original: 0x002A2460 - 0x002A246E (14 bytes, 7 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_002A2460(void)
{
    int _flags = 0; /* fallback flag var */

loc_002A2460: ;
    PUSH32(esp, esi);
    esi = MEM32(eax);
    if (TEST_NZ(esi, esi)) { sub_002A246E(); return; } /* jne: not equal / not zero */

loc_002A2467: ;
    eax = eax + 4;
    POP32(esp, esi);
    esp += 12; return; /* ret 8 */

}

/**
 * sub_002A24B0
 * Original: 0x002A24B0 - 0x002A26F7 (583 bytes, 163 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_002A24B0(void)
{
    uint32_t ebp;
    int _flags = 0; /* fallback flag var */
    float xmm0, xmm1, xmm2, xmm3;
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_002A24B0: ;
    esp = esp - 0x454;
    eax = MEM32(esp + 0x460);
    PUSH32(esp, ebx);
    PUSH32(esp, ebp);
    ebp = MEM32(esp + 0x460);
    MEM32(esp + 0x4C) = eax;
    eax = MEM32(ebp + 0x34);
    (void)0; /* test eax, eax - flags set for next jcc */
    PUSH32(esp, esi);
    PUSH32(esp, edi);
    if (TEST_Z(eax, eax)) goto loc_002A24D9; /* je: equal / zero */

loc_002A24D3: ;
    PUSH32(esp, ebp);
    PUSH32(esp, 0); sub_00355B40(); /* call 0x00355B40 */

loc_002A24D9: ;
    MEM32(esp + 0x64) = 0;
    ebx = 1;

loc_002A24E6: ;
    SET_LO8(eax, MEM8(ebp + 0x15));
    esi = MEM32(ebp + 0x10);
    edi = 0; /* xor self */
    (void)0; /* cmp LO8(eax), 1 - flags set for next jcc */
    SET_LO8(eax, MEM8(ebp + 0x14));
    if (CMP_NE(LO8(eax), 1)) goto loc_002A2605; /* jne: not equal / not zero */

loc_002A24F9: ;
    if (CMP_BE(LO8(eax) & LO8(eax), 0)) goto loc_002A26CB; /* jbe: below or equal (unsigned <=) */

loc_002A2501: ;
    edx = esp + 0x48;
    ecx = esp + 0x30;
    eax = edx;
    MEM32(esp + 0x10) = ecx;
    MEM32(esp + 0x1C) = edx;
    MEM32(esp + 0x14) = eax;
    esi = esi + 0x10;
    /* nop */

loc_002A2520: ;
    ecx = MEM32(esi);
    edx = MEM32(esp + 0x470);
    MEM32(edx) = ecx;
    eax = esi + -16;
    ecx = MEM32(eax);
    edx = MEM32(eax + 4);
    MEM32(esp + 0x30) = ecx;
    ecx = MEM32(eax + 8);
    MEM32(esp + 0x34) = edx;
    edx = MEM32(eax + 0xC);
    eax = MEM32(esp + 0x46C);
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
    if ((xmm0 <= MEMF(esp + 0x44))) goto loc_002A25F0; /* jbe: below or equal (unsigned <=) */

loc_002A25BF: ;
    eax = MEM32(esi);
    SET_LO8(ecx, MEM8(eax + 0xC2));
    if (TEST_NZ(LO8(ecx), LO8(ecx))) goto loc_002A25F0; /* jne: not equal / not zero */

loc_002A25CB: ;
    if (TEST_NZ(MEM8(eax + 0x9F), 0x60)) goto loc_002A25F0; /* jne: not equal / not zero */

loc_002A25D4: ;
    eax = MEM32(eax + 0x60);
    if (TEST_Z(eax, eax)) goto loc_002A25F0; /* je: equal / zero */

loc_002A25DB: ;
    ecx = MEM32(eax + 0x24);
    edx = MEM32(ecx + 0x18);
    eax = MEM32(edx + 0x14);
    if (TEST_Z(eax, eax)) goto loc_002A25F0; /* je: equal / zero */

loc_002A25E8: ;
    MEM32(esp + 0x470) = MEM32(esp + 0x470) + 4;

loc_002A25F0: ;
    eax = ZX8(MEM8(ebp + 0x14));
    edi++;
    esi = esi + 0x20;
    if (CMP_L(edi, eax)) goto loc_002A2520; /* jl: less (signed <) */

loc_002A2600: ;
    goto loc_002A26CB;

loc_002A2605: ;
    if (CMP_BE(LO8(eax) & LO8(eax), 0)) goto loc_002A26CB; /* jbe: below or equal (unsigned <=) */

loc_002A260D: ;
    edx = esp + 0x58;
    ecx = esp + 0x20;
    eax = edx;
    MEM32(esp + 0x18) = ecx;
    MEM32(esp + 0x14) = edx;
    MEM32(esp + 0x1C) = eax;

loc_002A2623: ;
    ecx = esi;
    edx = MEM32(ecx);
    eax = MEM32(ecx + 4);
    MEM32(esp + 0x20) = edx;
    edx = MEM32(ecx + 8);
    MEM32(esp + 0x24) = eax;
    eax = MEM32(ecx + 0xC);
    ecx = MEM32(esp + 0x46C);
    MEM32(esp + 0x2C) = eax;
    eax = MEM32(ecx);
    MEM32(esp + 0x28) = edx;
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
    if ((xmm0 <= MEMF(esp + 0x40))) goto loc_002A26BB; /* jbe: below or equal (unsigned <=) */

loc_002A26BA: ;
    ebx++;

loc_002A26BB: ;
    edx = ZX8(MEM8(ebp + 0x14));
    edi++;
    esi = esi + 0x20;
    if (CMP_L(edi, edx)) goto loc_002A2623; /* jl: less (signed <) */

loc_002A26CB: ;
    ebp = MEM32(esp + ebx * 4 + 0x60);
    ebx--;
    if (TEST_NZ(ebp, ebp)) goto loc_002A24E6; /* jne: not equal / not zero */

loc_002A26D8: ;
    eax = MEM32(esp + 0x470);
    edx = MEM32(esp + 0x54);
    POP32(esp, edi);
    MEM32(eax) = ebp;
    POP32(esp, esi);
    eax = eax - edx;
    POP32(esp, ebp);
    eax = (uint32_t)((int32_t)eax >> 2);
    POP32(esp, ebx);
    esp = esp + 0x454;
    esp += 20; return; /* ret 16 */

}

/**
 * sub_002A2700
 * Original: 0x002A2700 - 0x002A2954 (596 bytes, 167 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_002A2700(void)
{
    uint32_t ebp;
    int _flags = 0; /* fallback flag var */
    float xmm0, xmm1, xmm2, xmm3;
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_002A2700: ;
    esp = esp - 0x454;
    eax = MEM32(esp + 0x460);
    PUSH32(esp, ebx);
    PUSH32(esp, ebp);
    ebp = MEM32(esp + 0x460);
    MEM32(esp + 0x4C) = eax;
    eax = MEM32(ebp + 0x34);
    (void)0; /* test eax, eax - flags set for next jcc */
    PUSH32(esp, esi);
    PUSH32(esp, edi);
    if (TEST_Z(eax, eax)) goto loc_002A2729; /* je: equal / zero */

loc_002A2723: ;
    PUSH32(esp, ebp);
    PUSH32(esp, 0); sub_00355B40(); /* call 0x00355B40 */

loc_002A2729: ;
    MEM32(esp + 0x64) = 0;
    ebx = 1;

loc_002A2736: ;
    SET_LO8(eax, MEM8(ebp + 0x15));
    esi = MEM32(ebp + 0x10);
    edi = 0; /* xor self */
    (void)0; /* cmp LO8(eax), 1 - flags set for next jcc */
    SET_LO8(eax, MEM8(ebp + 0x14));
    if (CMP_NE(LO8(eax), 1)) goto loc_002A285C; /* jne: not equal / not zero */

loc_002A2749: ;
    if (CMP_BE(LO8(eax) & LO8(eax), 0)) goto loc_002A2928; /* jbe: below or equal (unsigned <=) */

loc_002A2751: ;
    edx = esp + 0x48;
    ecx = esp + 0x30;
    eax = edx;
    MEM32(esp + 0x10) = ecx;
    MEM32(esp + 0x1C) = edx;
    MEM32(esp + 0x14) = eax;
    esi = esi + 0x10;
    /* nop */

loc_002A2770: ;
    ecx = MEM32(esi);
    edx = MEM32(esp + 0x470);
    MEM32(edx) = ecx;
    eax = esi + -16;
    ecx = MEM32(eax);
    edx = MEM32(eax + 4);
    MEM32(esp + 0x30) = ecx;
    ecx = MEM32(eax + 8);
    MEM32(esp + 0x34) = edx;
    edx = MEM32(eax + 0xC);
    eax = MEM32(esp + 0x46C);
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
    if ((xmm0 <= MEMF(esp + 0x44))) goto loc_002A2847; /* jbe: below or equal (unsigned <=) */

loc_002A280F: ;
    eax = MEM32(esi);
    SET_LO8(ecx, MEM8(eax + 0xC2));
    if (TEST_NZ(LO8(ecx), LO8(ecx))) goto loc_002A2847; /* jne: not equal / not zero */

loc_002A281B: ;
    SET_LO8(ecx, MEM8(eax + 0x9F));
    SET_LO8(ecx, LO8(ecx) & 0x60);
    if ((LO8(ecx) == 0)) goto loc_002A2847; /* je: equal / zero */

loc_002A2826: ;
    if (CMP_EQ(LO8(ecx), 0x20)) goto loc_002A2847; /* je: equal / zero */

loc_002A282B: ;
    eax = MEM32(eax + 0x60);
    if (TEST_Z(eax, eax)) goto loc_002A2847; /* je: equal / zero */

loc_002A2832: ;
    ecx = MEM32(eax + 0x24);
    edx = MEM32(ecx + 0x18);
    eax = MEM32(edx + 0x14);
    if (TEST_Z(eax, eax)) goto loc_002A2847; /* je: equal / zero */

loc_002A283F: ;
    MEM32(esp + 0x470) = MEM32(esp + 0x470) + 4;

loc_002A2847: ;
    eax = ZX8(MEM8(ebp + 0x14));
    edi++;
    esi = esi + 0x20;
    if (CMP_L(edi, eax)) goto loc_002A2770; /* jl: less (signed <) */

loc_002A2857: ;
    goto loc_002A2928;

loc_002A285C: ;
    if (CMP_BE(LO8(eax) & LO8(eax), 0)) goto loc_002A2928; /* jbe: below or equal (unsigned <=) */

loc_002A2864: ;
    edx = esp + 0x58;
    ecx = esp + 0x20;
    eax = edx;
    MEM32(esp + 0x18) = ecx;
    MEM32(esp + 0x14) = edx;
    MEM32(esp + 0x1C) = eax;
    /* nop */

loc_002A2880: ;
    ecx = esi;
    edx = MEM32(ecx);
    eax = MEM32(ecx + 4);
    MEM32(esp + 0x20) = edx;
    edx = MEM32(ecx + 8);
    MEM32(esp + 0x24) = eax;
    eax = MEM32(ecx + 0xC);
    ecx = MEM32(esp + 0x46C);
    MEM32(esp + 0x2C) = eax;
    eax = MEM32(ecx);
    MEM32(esp + 0x28) = edx;
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
    if ((xmm0 <= MEMF(esp + 0x40))) goto loc_002A2918; /* jbe: below or equal (unsigned <=) */

loc_002A2917: ;
    ebx++;

loc_002A2918: ;
    edx = ZX8(MEM8(ebp + 0x14));
    edi++;
    esi = esi + 0x20;
    if (CMP_L(edi, edx)) goto loc_002A2880; /* jl: less (signed <) */

loc_002A2928: ;
    ebp = MEM32(esp + ebx * 4 + 0x60);
    ebx--;
    if (TEST_NZ(ebp, ebp)) goto loc_002A2736; /* jne: not equal / not zero */

loc_002A2935: ;
    eax = MEM32(esp + 0x470);
    edx = MEM32(esp + 0x54);
    POP32(esp, edi);
    MEM32(eax) = ebp;
    POP32(esp, esi);
    eax = eax - edx;
    POP32(esp, ebp);
    eax = (uint32_t)((int32_t)eax >> 2);
    POP32(esp, ebx);
    esp = esp + 0x454;
    esp += 20; return; /* ret 16 */

}

/**
 * sub_002A2960
 * Original: 0x002A2960 - 0x002A298D (45 bytes, 21 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_002A2960(void)
{
    uint32_t ebp;
    int _flags = 0; /* fallback flag var */

loc_002A2960: ;
    PUSH32(esp, ebp);
    ebp = esp;
    esp = esp & 0xFFFFFFF0u;
    esp = esp - 0x58;
    (void)0; /* cmp MEM32(eax + 0x18), 2 - flags set for next jcc */
    eax = MEM32(eax + 0x14);
    PUSH32(esp, esi);
    PUSH32(esp, edi);
    if (CMP_EQ(MEM32(eax + 0x18), 2)) { sub_002A298D(); return; } /* je: equal / zero */

loc_002A2974: ;
    eax = eax + 0x7C;
    ecx = MEM32(eax);
    MEM32(ebx) = ecx;
    edx = MEM32(eax + 4);
    MEM32(ebx + 4) = edx;
    eax = MEM32(eax + 8);
    MEM32(ebx + 8) = eax;
    POP32(esp, edi);
    POP32(esp, esi);
    esp = ebp;
    POP32(esp, ebp);
    esp += 4; return; /* ret */

}

/**
 * sub_002A29D0
 * Original: 0x002A29D0 - 0x002A2BED (541 bytes, 160 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_002A29D0(void)
{
    uint32_t ebp;
    int _flags = 0; /* fallback flag var */
    float xmm0, xmm1, xmm2;
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_002A29D0: ;
    esp = esp - 0x2C;
    xmm0 = 0.0f; /* xorps self = zero */
    eax = MEM32(esp + 0x3C);
    edx = MEM32(0x780A80);
    MEMF(eax) = xmm0; /* movss */
    MEMF(eax + 4) = xmm0; /* movss */
    MEMF(eax + 8) = xmm0; /* movss */
    eax = MEM32(ecx);
    PUSH32(esp, ebx);
    PUSH32(esp, ebp);
    SET_LO8(ebx, 0); /* xor self */
    ebp = 0; /* xor self */
    edx++;
    MEM32(esp + 0x1C) = eax;
    eax = MEM32(ecx + 8);
    PUSH32(esp, esi);
    esi = MEM32(esp + 0x40);
    MEM32(0x780A80) = edx;
    edx = MEM32(ecx + 4);
    ecx = MEM32(esi);
    MEM32(esp + 0x28) = eax;
    eax = MEM32(esi + 8);
    MEM32(esp + 0x24) = edx;
    edx = MEM32(esi + 4);
    MEM32(esp + 0x14) = ecx;
    MEM32(esp + 0x1C) = eax;
    eax = MEM32(esp + 0x3C);
    ecx = 0; /* xor self */
    esi = 0; /* xor self */
    (void)0; /* cmp eax, ecx - flags set for next jcc */
    MEM32(esp + 0x18) = edx;
    MEMF(esp + 0x2C) = xmm0; /* movss */
    MEMF(esp + 0x30) = xmm0; /* movss */
    MEMF(esp + 0x34) = xmm0; /* movss */
    if (CMP_BE(eax, ecx)) goto loc_002A2B91; /* jbe: below or equal (unsigned <=) */

loc_002A2A4A: ;
    goto loc_002A2A50;

loc_002A2A4C: ;
    ecx = 0; /* xor self */
    edi = edi;

loc_002A2A50: ;
    eax = MEM32(esp + 0x3C);
    ebp++;
    eax--;
    if (CMP_NE(esi, eax)) goto loc_002A2A96; /* jne: not equal / not zero */

loc_002A2A5A: ;
    eax = MEM32(edi + 0x14);
    edx = eax + 0x40;
    ebx = MEM32(edx);
    MEM32(0x780A90) = ebx;
    ebx = MEM32(edx + 4);
    edx = MEM32(edx + 8);
    eax = eax + 0x70;
    MEM32(0x780A98) = edx;
    edx = MEM32(eax);
    MEM32(0x780A84) = edx;
    edx = MEM32(eax + 4);
    MEM32(0x780A88) = edx;
    eax = MEM32(eax + 8);
    MEM32(0x780A94) = ebx;
    MEM32(0x780A8C) = eax;

loc_002A2A96: ;
    edx = MEM32(esp + 0x58);
    eax = MEM32(esp + 0x54);
    xmm0 = MEMF(0x648D14); /* movss */
    PUSH32(esp, ecx);
    PUSH32(esp, ecx);
    MEM32(edi + 0x18) = ecx;
    MEM32(edi + 0x20) = ecx;
    ecx = MEM32(esp + 0x64);
    PUSH32(esp, ecx);
    ecx = MEM32(esp + 0x50);
    PUSH32(esp, edx);
    PUSH32(esp, eax);
    PUSH32(esp, edi);
    PUSH32(esp, ecx);
    edx = esp + 0x3C;
    PUSH32(esp, edx);
    eax = esp + 0x34;
    PUSH32(esp, eax);
    MEMF(edi + 4) = xmm0; /* movss */
    PUSH32(esp, 0); sub_002A0F00(); /* call 0x002A0F00 */

loc_002A2ACF: ;
    esp = esp + 0x24;
    if (TEST_Z(eax, eax)) goto loc_002A2B52; /* je: equal / zero */

loc_002A2AD6: ;
    xmm0 = MEMF(edi + 4); /* movss */
    ebx = esp + 0x2C;
    eax = edi;
    MEMF(esp + 0xC) = xmm0; /* movss */
    PUSH32(esp, 0); sub_002A2960(); /* call 0x002A2960 */

loc_002A2AEC: ;
    xmm0 = 0.0f; /* xorps self = zero */
    xmm2 = MEMF(esp + 0xC); /* movss */
    /* comiss xmm0, xmm2 - sets EFLAGS */
    if ((xmm0 < xmm2)) goto loc_002A2AFE; /* jb: below (unsigned <) */

loc_002A2AFA: ;
    SET_LO8(ebx, 1);
    goto loc_002A2B00;

loc_002A2AFE: ;
    SET_LO8(ebx, 0); /* xor self */

loc_002A2B00: ;
    /* comiss xmm2, MEMF(0x648EA4) - sets EFLAGS */
    if ((xmm2 > MEMF(0x648EA4))) goto loc_002A2B16; /* ja: above (unsigned >) */

loc_002A2B09: ;
    xmm0 = MEMF(0x6491EC); /* movss */
    /* comiss xmm0, xmm2 - sets EFLAGS */
    if ((xmm0 <= xmm2)) goto loc_002A2B27; /* jbe: below or equal (unsigned <=) */

loc_002A2B16: ;
    xmm0 = MEMF(0x648D14); /* movss */
    MEMF(esp + 0xC) = xmm0; /* movss */
    xmm2 = xmm0; /* movaps */

loc_002A2B27: ;
    ecx = MEM32(esp + 0x50);
    PUSH32(esp, ecx);
    edx = esp + 0x24;
    PUSH32(esp, edx);
    eax = esp + 0x34;
    PUSH32(esp, eax);
    ecx = esp + 0x20;
    PUSH32(esp, ecx);
    PUSH32(esp, 0); sub_002A2BF0(); /* call 0x002A2BF0 */

loc_002A2B40: ;
    eax = MEM32(esp + 0x4C);
    esp = esp + 0x10;
    esi++;
    if (CMP_B(esi, eax)) goto loc_002A2A4C; /* jb: below (unsigned <) */

loc_002A2B50: ;
    goto loc_002A2B91;

loc_002A2B52: ;
    edx = esp + 0x14;
    eax = esp + 0x20;
    ecx = edx;
    MEM32(esp + 0xC) = edx;
    MEM32(esp + 0x10) = eax;
    MEM32(esp + 0x3C) = ecx;
    ecx = MEM32(esp + 0x10);
    xmm0 = MEMF(ecx); /* movss */
    xmm0 = MEMD(ecx + 4); /* movhps */
    edx = MEM32(esp + 0xC);
    xmm1 = MEMF(edx); /* movss */
    xmm1 = MEMD(edx + 4); /* movhps */
    /* addps: xmm0 += xmm1 (packed 4xfloat) */
    eax = MEM32(esp + 0x3C);
    MEMF(eax) = xmm0; /* movss */
    MEMD(eax + 4) = xmm0; /* movhps */
    SET_LO8(ebx, 0); /* xor self */

loc_002A2B91: ;
    edx = esp + 0x14;
    MEM32(esp + 0x3C) = edx;
    ecx = MEM32(esp + 0x3C);
    xmm0 = MEMF(ecx); /* movss */
    xmm0 = MEMD(ecx + 4); /* movhps */
    edx = MEM32(esp + 0x40);
    xmm1 = MEMF(edx); /* movss */
    xmm1 = MEMD(edx + 4); /* movhps */
    /* subps: xmm0 -= xmm1 (packed 4xfloat) */
    eax = MEM32(esp + 0x48);
    MEMF(eax) = xmm0; /* movss */
    MEMD(eax + 4) = xmm0; /* movhps */
    eax = MEM32(esp + 0x4C);
    ecx = MEM32(0x780A7C);
    MEM32(eax) = esi;
    eax = MEM32(0x780A78);
    ecx = ecx + ebp;
    (void)0; /* cmp ebp, eax - flags set for next jcc */
    MEM32(0x780A7C) = ecx;
    eax = ZX8(LO8(ebx));
    if (CMP_LE(ebp, eax)) goto loc_002A2BE6; /* jle: less or equal (signed <=) */

loc_002A2BE0: ;
    MEM32(0x780A78) = ebp;

loc_002A2BE6: ;
    POP32(esp, esi);
    POP32(esp, ebp);
    POP32(esp, ebx);
    esp = esp + 0x2C;
    esp += 4; return; /* ret */

}

/**
 * sub_002A2BF0
 * Original: 0x002A2BF0 - 0x002A2C0F (31 bytes, 13 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_002A2BF0(void)
{
    uint32_t ebp;
    int _flags = 0; /* fallback flag var */
    float xmm2, xmm3;
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_002A2BF0: ;
    xmm3 = 0.0f; /* xorps self = zero */
    esp = esp - 0x28;
    /* comiss xmm3, xmm2 - sets EFLAGS */
    PUSH32(esp, ebx);
    PUSH32(esp, ebp);
    ebp = MEM32(esp + 0x40);
    PUSH32(esp, esi);
    esi = MEM32(esp + 0x40);
    PUSH32(esp, edi);
    edi = MEM32(esp + 0x40);
    if ((xmm3 < xmm2)) { sub_002A2C0F(); return; } /* jb: below (unsigned <) */

loc_002A2C0B: ;
    SET_LO8(ebx, 1);
    g_seh_ebp = ebp; sub_002A2C11(); return; /* tail jmp 0x002A2C11 */

}

/**
 * sub_002A2EB0
 * Original: 0x002A2EB0 - 0x002A3008 (344 bytes, 90 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_002A2EB0(void)
{
    uint32_t ebp;
    int _flags = 0; /* fallback flag var */
    float xmm0, xmm1;

loc_002A2EB0: ;
    PUSH32(esp, ebp);
    ebp = esp;
    esp = esp & 0xFFFFFFF0u;
    esp = esp - 0x7C;
    xmm0 = xmm0 * MEMF(0x649A28); /* mulss */
    PUSH32(esp, esi);
    esi = eax;
    eax = esp + 0x1C;
    MEMF(esp + 0x18) = xmm0; /* movss */
    MEM32(esp + 0x10) = eax;
    ecx = MEM32(ebp + 8);
    xmm0 = MEMF(ecx); /* movss */
    xmm0 = MEMD(ecx + 4); /* movhps */
    edx = MEM32(ebp + 0x10);
    xmm1 = MEMF(edx); /* movss */
    xmm1 = MEMD(edx + 4); /* movhps */
    /* addps: xmm0 += xmm1 (packed 4xfloat) */
    eax = MEM32(esp + 0x10);
    MEMF(eax) = xmm0; /* movss */
    MEMD(eax + 4) = xmm0; /* movhps */
    ecx = esp + 0x1C;
    edx = ecx;
    MEM32(esp + 0x14) = ecx;
    MEM32(esp + 0x10) = edx;
    ecx = MEM32(esp + 0x14);
    xmm0 = MEMF(ecx); /* movss */
    xmm0 = MEMD(ecx + 4); /* movhps */
    edx = MEM32(ebp + 0xC);
    xmm1 = MEMF(edx); /* movss */
    xmm1 = MEMD(edx + 4); /* movhps */
    /* subps: xmm0 -= xmm1 (packed 4xfloat) */
    eax = MEM32(esp + 0x10);
    MEMF(eax) = xmm0; /* movss */
    MEMD(eax + 4) = xmm0; /* movhps */
    xmm0 = MEMF(esi + 4); /* movss */
    xmm1 = MEMF(esi + 8); /* movss */
    xmm1 = xmm1 * MEMF(esp + 0x24); /* mulss */
    xmm0 = xmm0 * MEMF(esp + 0x20); /* mulss */
    xmm0 = xmm0 + xmm1; /* addss */
    xmm1 = MEMF(esi); /* movss */
    xmm1 = xmm1 * MEMF(esp + 0x1C); /* mulss */
    PUSH32(esp, esi);
    xmm0 = xmm0 + xmm1; /* addss */
    esi = esp + 0x38;
    eax = 0x780A84;
    MEMF(esp + 0x18) = xmm0; /* movss */
    PUSH32(esp, 0); sub_003E5FA0(); /* call 0x003E5FA0 */

loc_002A2F68: ;
    xmm0 = xmm0 * MEMF(0x648D10); /* mulss */
    eax = esp + 0x44;
    MEMF(esp) = xmm0; /* movss */
    PUSH32(esp, eax);
    ecx = 0x780A84;
    PUSH32(esp, 0); sub_00428AB7(); /* call 0x00428AB7 */

loc_002A2F84: ;
    ecx = esp + 0x40;
    PUSH32(esp, ecx);
    PUSH32(esp, 0x780A84);
    edx = esp + 0x30;
    PUSH32(esp, edx);
    PUSH32(esp, 0); sub_00428393(); /* call 0x00428393 */

loc_002A2F98: ;
    xmm0 = MEMF(esp + 0x18); /* movss */
    xmm1 = MEMF(esp + 0x14); /* movss */
    /* comiss xmm0, xmm1 - sets EFLAGS */
    if ((xmm0 <= xmm1)) goto loc_002A3003; /* jbe: below or equal (unsigned <=) */

loc_002A2FA9: ;
    eax = esp + 0x28;
    xmm0 = xmm0 - xmm1; /* subss */
    MEMF(esp + 0x14) = xmm0; /* movss */
    MEM32(esp + 0x18) = eax;
    xmm0 = MEMF(esp + 0x14); /* movss */
    /* shufps xmm0, xmm0, 0 */
    edx = MEM32(esp + 0x18);
    xmm1 = MEMF(edx); /* movss */
    xmm1 = MEMD(edx + 4); /* movhps */
    /* mulps: xmm0 *= xmm1 (packed 4xfloat) */
    eax = MEM32(ebp + 0x14);
    MEMF(eax) = xmm0; /* movss */
    MEMD(eax + 4) = xmm0; /* movhps */
    ecx = MEM32(ebp + 0x14);
    xmm0 = MEMF(ecx); /* movss */
    xmm0 = MEMD(ecx + 4); /* movhps */
    edx = MEM32(ebp + 8);
    xmm1 = MEMF(edx); /* movss */
    xmm1 = MEMD(edx + 4); /* movhps */
    /* addps: xmm0 += xmm1 (packed 4xfloat) */
    eax = MEM32(ebp + 0x14);
    MEMF(eax) = xmm0; /* movss */
    MEMD(eax + 4) = xmm0; /* movhps */

loc_002A3003: ;
    POP32(esp, esi);
    esp = ebp;
    POP32(esp, ebp);
    esp += 4; return; /* ret */

}

/**
 * sub_002A3010
 * Original: 0x002A3010 - 0x002A30C7 (183 bytes, 67 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_002A3010(void)
{
    uint32_t ebp;
    int _flags = 0; /* fallback flag var */
    float xmm0;

loc_002A3010: ;
    PUSH32(esp, ebp);
    ebp = esp;
    esp = esp & 0xFFFFFFF0u;
    esp = esp - 0x28;
    eax = MEM32(ebp + 8);
    PUSH32(esp, esi);
    PUSH32(esp, edi);
    edi = MEM32(ebp + 0xC);
    PUSH32(esp, 0); sub_003D6AD0(); /* call 0x003D6AD0 */

loc_002A3026: ;
    (void)0; /* test ecx, ecx - flags set for next jcc */
    esi = MEM32(eax);
    MEM32(esp + 0xC) = esi;
    esi = MEM32(eax + 4);
    eax = MEM32(eax + 8);
    MEM32(esp + 0x14) = eax;
    MEM32(esp + 0x10) = esi;
    eax = edx;
    esi = MEM32(eax);
    MEM32(esp + 0x18) = esi;
    esi = MEM32(eax + 4);
    eax = MEM32(eax + 8);
    MEM32(esp + 0x1C) = esi;
    MEM32(esp + 0x20) = eax;
    if (TEST_Z(ecx, ecx)) goto loc_002A3066; /* je: equal / zero */

loc_002A3054: ;
    esi = MEM32(edx);
    eax = ecx;
    MEM32(eax) = esi;
    esi = MEM32(edx + 4);
    MEM32(eax + 4) = esi;
    edx = MEM32(edx + 8);
    MEM32(eax + 8) = edx;

loc_002A3066: ;
    eax = MEM32(ebp + 0x1C);
    edx = MEM32(ebp + 0x18);
    PUSH32(esp, eax);
    eax = MEM32(ebp + 0x10);
    PUSH32(esp, edx);
    PUSH32(esp, eax);
    eax = MEM32(0x780AA0);
    PUSH32(esp, ecx);
    ecx = esp + 0x18;
    PUSH32(esp, ecx);
    edx = esp + 0x38;
    PUSH32(esp, edx);
    edx = MEM32(ebp + 0x14);
    PUSH32(esp, eax);
    ecx = esp + 0x28;
    PUSH32(esp, ecx);
    PUSH32(esp, edx);
    ecx = esp + 0x3C;
    PUSH32(esp, 0); sub_002A29D0(); /* call 0x002A29D0 */

loc_002A3095: ;
    esp = esp + 0x24;
    if (TEST_Z(eax, eax)) { sub_002A30C7(); return; } /* je: equal / zero */

loc_002A309C: ;
    edi = MEM32(edi + 0x14);
    xmm0 = MEMF(0x780AA0); /* movss */
    eax = esp + 0x24;
    PUSH32(esp, eax);
    ecx = esp + 0x10;
    PUSH32(esp, ecx);
    edx = edi + 0x40;
    PUSH32(esp, edx);
    ecx = esp + 0x24;
    eax = edi + 0x70;
    PUSH32(esp, ecx);
    PUSH32(esp, 0); sub_002A2EB0(); /* call 0x002A2EB0 */

loc_002A30C2: ;
    esp = esp + 0x10;
    g_seh_ebp = ebp; sub_002A30DD(); return; /* tail jmp 0x002A30DD */

}

/**
 * sub_002A3110
 * Original: 0x002A3110 - 0x002A33E3 (723 bytes, 174 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_002A3110(void)
{
    int _flags = 0; /* fallback flag var */
    float xmm0, xmm1, xmm2;

loc_002A3110: ;
    esp = esp - 0x48;
    PUSH32(esp, ebx);
    ebx = eax;
    PUSH32(esp, edi);
    eax = 0; /* xor self */
    edi = 0; /* xor self */
    if (CMP_EQ(esi, eax)) goto loc_002A3121; /* je: equal / zero */

loc_002A311F: ;
    MEM32(esi) = eax;

loc_002A3121: ;
    ecx = MEM32(0x7FA080);
    xmm0 = MEMF(0x649720); /* movss */
    ecx++;
    MEM8(ebx + 0x471) = LO8(eax);
    MEM32(0x7FA080) = ecx;
    ecx = MEM32(0x76FE14);
    (void)0; /* cmp ecx, eax - flags set for next jcc */
    MEMF(0x780A74) = xmm0; /* movss */
    MEMF(0x780A70) = xmm0; /* movss */
    MEM32(0x8786B0) = eax;
    MEM32(0x878750) = eax;
    MEM32(0x878754) = eax;
    if (CMP_EQ(ecx, eax)) { sub_002A33E3(); return; } /* je: equal / zero */

loc_002A3169: ;
    if (CMP_EQ(MEM32(ecx + 0x10), eax)) { sub_002A33E3(); return; } /* je: equal / zero */

loc_002A3172: ;
    PUSH32(esp, 0); sub_002A1B70(); /* call 0x002A1B70 */

loc_002A3177: ;
    xmm0 = MEMF(0x780A58); /* movss */
    xmm1 = MEMF(esp + 0x54); /* movss */
    MEMF(esp + 0x14) = xmm1; /* movss */
    xmm1 = xmm0; /* movaps */
    xmm1 = xmm1 + MEMF(esp + 0x58); /* addss */
    MEMF(esp + 0x18) = xmm1; /* movss */
    xmm1 = MEMF(esp + 0x5C); /* movss */
    MEMF(esp + 0x1C) = xmm1; /* movss */
    xmm1 = MEMF(ebx + 0x78); /* movss */
    MEMF(esp + 0x2C) = xmm1; /* movss */
    xmm1 = MEMF(ebx + 0x7C); /* movss */
    xmm1 = xmm1 + xmm0; /* addss */
    MEMF(esp + 0x48) = xmm0; /* movss */
    xmm0 = MEMF(ebx + 0x80); /* movss */
    eax = esp + 0x14;
    ecx = esp + 0x2C;
    edx = esp + 0x38;
    MEMF(esp + 0x30) = xmm1; /* movss */
    MEMF(esp + 0x34) = xmm0; /* movss */
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
    eax = esp + 0x38;
    MEM32(esp + 0x10) = eax;
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
    MEMF(esp + 0xC) = xmm1; /* movss */
    ecx = MEM32(esp + 0x14);
    eax = MEM32(esp + 0x1C);
    xmm0 = MEMF(0x780A5C); /* movss */
    xmm0 = xmm0 * MEMF(esp + 0x68); /* mulss */
    edx = MEM32(esp + 0x18);
    xmm0 = xmm0 * MEMF(0x648D10); /* mulss */
    MEM32(0x780AA4) = ecx;
    SET_LO8(ecx, MEM8(0x7819D5));
    (void)0; /* test LO8(ecx), LO8(ecx) - flags set for next jcc */
    MEM32(0x780AAC) = eax;
    eax = MEM32(0x6C020C);
    MEM32(0x84B56C) = 3;
    MEMF(0x780AA0) = xmm0; /* movss */
    MEM32(0x780AA8) = edx;
    if (TEST_Z(LO8(ecx), LO8(ecx))) goto loc_002A32B4; /* je: equal / zero */

loc_002A329C: ;
    ecx = MEM32(ebx + 0x568);
    if (TEST_Z(ecx, ecx)) goto loc_002A32B4; /* je: equal / zero */

loc_002A32A6: ;
    if (CMP_NE(MEM32(ecx + 0xBC), 2)) goto loc_002A32B4; /* jne: not equal / not zero */

loc_002A32AF: ;
    eax = 2;

loc_002A32B4: ;
    ecx = MEM32(esp + 0x6C);
    edx = MEM32(esp + 0x64);
    PUSH32(esp, ecx);
    ecx = MEM32(esp + 0x64);
    PUSH32(esp, edx);
    PUSH32(esp, eax);
    PUSH32(esp, 0x8786B0);
    eax = esp + 0x24;
    PUSH32(esp, 0x76FC38);
    PUSH32(esp, eax);
    edx = esp + 0x50;
    PUSH32(esp, 0); sub_002A3010(); /* call 0x002A3010 */

loc_002A32DB: ;
    ecx = MEM32(esp + 0x2C);
    edx = MEM32(esp + 0x30);
    eax = MEM32(esp + 0x34);
    MEM32(esp + 0x38) = ecx;
    xmm0 = MEMF(esp + 0x38); /* movss */
    MEMF(esp + 0x38) = xmm0; /* movss */
    ecx = MEM32(esp + 0x38);
    MEM32(esp + 0x3C) = edx;
    xmm0 = MEMF(esp + 0x3C); /* movss */
    xmm0 = xmm0 - MEMF(esp + 0x60); /* subss */
    MEM32(esp + 0x40) = eax;
    MEMF(esp + 0x3C) = xmm0; /* movss */
    xmm0 = MEMF(esp + 0x40); /* movss */
    edx = MEM32(esp + 0x3C);
    MEM32(ebx + 0x78) = ecx;
    MEMF(esp + 0x40) = xmm0; /* movss */
    eax = MEM32(esp + 0x40);
    MEM32(ebx + 0x7C) = edx;
    MEM32(ebx + 0x80) = eax;
    eax = MEM32(0x8786B0);
    esp = esp + 0x18;
    if (CMP_NE(eax, 2)) goto loc_002A3382; /* jne: not equal / not zero */

loc_002A3342: ;
    if (CMP_NE(MEM32(0x7FA1F8), 0x37)) goto loc_002A3351; /* jne: not equal / not zero */

loc_002A334B: ;
    if (CMP_EQ(MEM32(ebx + 0x64), 0x48)) goto loc_002A3382; /* je: equal / zero */

loc_002A3351: ;
    SET_LO16(ecx, MEM16(ebx + 0x60));
    if (CMP_AE(LO16(ecx), 0x20)) goto loc_002A3382; /* jae: above or equal (unsigned >=) */

loc_002A335B: ;
    edx = MEM32(0x878750);
    eax = ZX16(MEM16(edx));
    edx = MEM32(0x8471B4);
    eax = edx + eax * 4;
    edx = 1;
    edx = edx << LO8(ecx);
    MEM32(eax) = MEM32(eax) | edx;
    eax = MEM32(0x878750);
    MEM8(eax + 0x9F) = MEM8(eax + 0x9F) | 0x80;

loc_002A3382: ;
    SET_LO8(eax, MEM8(0x7819D5));
    if (TEST_NZ(LO8(eax), LO8(eax))) goto loc_002A33C5; /* jne: not equal / not zero */

loc_002A338B: ;
    if (CMP_NE(MEM32(0x8786B0), 3)) goto loc_002A33C5; /* jne: not equal / not zero */

loc_002A3394: ;
    eax = MEM32(0x878754);
    ecx = MEM32(eax + 0x200);
    if (TEST_Z(HI8(ecx), 0x40)) goto loc_002A33CE; /* je: equal / zero */

loc_002A33A4: ;
    ecx = MEM32(ebx + 0x68);
    if (TEST_NZ(ecx, ecx)) goto loc_002A33CE; /* jne: not equal / not zero */

loc_002A33AB: ;
    eax = ZX16(MEM16(eax + 0x60));
    eax++;
    PUSH32(esp, eax);
    PUSH32(esp, 0x80);
    PUSH32(esp, 1);
    eax = 0x2000;
    PUSH32(esp, 0); sub_0035D7F0(); /* call 0x0035D7F0 */

loc_002A33C2: ;
    esp = esp + 0xC;

loc_002A33C5: ;
    eax = MEM32(0x8786B0);
    if (TEST_Z(eax, eax)) { sub_002A33E3(); return; } /* je: equal / zero */

loc_002A33CE: ;
    if (TEST_Z(esi, esi)) goto loc_002A33D8; /* je: equal / zero */

loc_002A33D2: ;
    MEM32(esi) = 0x8786C0;

loc_002A33D8: ;
    POP32(esp, edi);
    eax = 1;
    POP32(esp, ebx);
    esp = esp + 0x48;
    esp += 4; return; /* ret */

}

/**
 * sub_002A33F0
 * Original: 0x002A33F0 - 0x002A34A6 (182 bytes, 49 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_002A33F0(void)
{
    int _flags = 0; /* fallback flag var */

loc_002A33F0: ;
    (void)0; /* test esi, esi - flags set for next jcc */
    PUSH32(esp, edi);
    edi = MEM32(esp + 8);
    MEM32(0x780AB0) = eax;
    MEM32(0x6C0210) = ecx;
    if (TEST_Z(esi, esi)) goto loc_002A3497; /* je: equal / zero */

loc_002A3408: ;
    eax = MEM32(esi + 0x23C);
    if (TEST_Z(eax, eax)) goto loc_002A3497; /* je: equal / zero */

loc_002A3416: ;
    PUSH32(esp, 0); sub_00315260(); /* call 0x00315260 */

loc_002A341B: ;
    (void)0; /* test eax, eax - flags set for next jcc */
    if (TEST_Z(eax, eax)) eax = esi; /* cmove */
    if (TEST_Z(eax, eax)) goto loc_002A3432; /* je: equal / zero */

loc_002A3424: ;
    eax = MEM32(eax + 0x238);
    if (TEST_Z(eax, eax)) goto loc_002A3432; /* je: equal / zero */

loc_002A342E: ;
    ecx = MEM32(eax);
    goto loc_002A3437;

loc_002A3432: ;
    ecx = 3;

loc_002A3437: ;
    SET_LO8(eax, MEM8(esi + 0x250));
    if (TEST_Z(LO8(eax), LO8(eax))) goto loc_002A3474; /* je: equal / zero */

loc_002A3441: ;
    edx = ZX8(LO8(eax));
    eax = MEM32(0x84A5F8);
    edx = (uint32_t)((int32_t)edx * (int32_t)0x6D0);
    eax = edx + eax + -1744;
    PUSH32(esp, 0); sub_002F8680(); /* call 0x002F8680 */

loc_002A345B: ;
    if (TEST_Z(LO8(eax), LO8(eax))) goto loc_002A3474; /* je: equal / zero */

loc_002A345F: ;
    edi = edi | 0xC0000;
    MEM32(0x74FA2C) = edi;
    MEM8(0x84B538) = 1;
    POP32(esp, edi);
    esp += 4; return; /* ret */

loc_002A3474: ;
    if (TEST_Z(ecx, ecx)) goto loc_002A3491; /* je: equal / zero */

loc_002A3478: ;
    if (CMP_NE(ecx, 1)) goto loc_002A3491; /* jne: not equal / not zero */

loc_002A347D: ;
    edi = edi | 0x80000;
    MEM32(0x74FA2C) = edi;
    MEM8(0x84B538) = LO8(ecx);
    POP32(esp, edi);
    esp += 4; return; /* ret */

loc_002A3491: ;
    edi = edi | 0x40000;

loc_002A3497: ;
    MEM32(0x74FA2C) = edi;
    MEM8(0x84B538) = 1;
    POP32(esp, edi);
    esp += 4; return; /* ret */

}

/**
 * sub_002A34B0
 * Original: 0x002A34B0 - 0x002A34D7 (39 bytes, 8 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_002A34B0(void)
{
    uint32_t ebp;
    int _flags = 0; /* fallback flag var */
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_002A34B0: ;
    MEM32(0x780AB0) = eax;
    eax = MEM32(esp + 8);
    MEM32(0x6C0210) = ecx;
    PUSH32(esp, 0); sub_0038B640(); /* call 0x0038B640 */

loc_002A34C4: ;
    if (CMP_A(eax, 0xD)) { sub_002A34D7(); return; } /* ja: above (unsigned >) */

loc_002A34C9: ;
    edx = ZX8(MEM8(eax + 0x2A356C));
    g_seh_ebp = ebp; RECOMP_ITAIL(MEM32(edx * 4 + 0x2A355C)); return; /* indirect tail jmp */

}

/**
 * sub_002A3580
 * Original: 0x002A3580 - 0x002A363A (186 bytes, 67 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_002A3580(void)
{
    uint32_t ebp;
    int _flags = 0; /* fallback flag var */
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_002A3580: ;
    PUSH32(esp, ebx);
    PUSH32(esp, ebp);
    ebp = MEM32(eax + 0x54);
    ebx = 0; /* xor self */
    (void)0; /* test ebp, ebp - flags set for next jcc */
    PUSH32(esp, esi);
    if (CMP_LE(ebp & ebp, 0)) goto loc_002A3632; /* jle: less or equal (signed <=) */

loc_002A3590: ;
    esi = eax + 0x10;

loc_002A3593: ;
    eax = MEM32(esi + -8);
    eax = eax - 0;
    if ((eax == 0)) goto loc_002A35EE; /* je: equal / zero */

loc_002A359B: ;
    eax--;
    if ((eax != 0)) goto loc_002A3626; /* jne: not equal / not zero */

loc_002A35A2: ;
    if (CMP_NE(MEM32(esp + 0x10), 1)) goto loc_002A3626; /* jne: not equal / not zero */

loc_002A35A9: ;
    eax = MEM32(esi + -12);
    if (CMP_A(eax, 4)) goto loc_002A3626; /* ja: above (unsigned >) */

loc_002A35B1: ;
    { uint32_t _jt = MEM32(eax * 4 + 0x2A363C); /* switch: 11 entries, 9 targets */
    if (_jt == 0x002A35B8u) goto loc_002A35B8;
    if (_jt == 0x002A35BCu) goto loc_002A35BC;
    if (_jt == 0x002A35C8u) goto loc_002A35C8;
    if (_jt == 0x002A35D6u) goto loc_002A35D6;
    if (_jt == 0x002A35DEu) goto loc_002A35DE;
    if (_jt == 0x002A3605u) goto loc_002A3605;
    if (_jt == 0x002A360Bu) goto loc_002A360B;
    if (_jt == 0x002A3613u) goto loc_002A3613;
    if (_jt == 0x002A361Bu) goto loc_002A361B;
    g_seh_ebp = ebp; RECOMP_ITAIL(_jt); return; }

loc_002A35B8: ;
    (void)0; /* cmp edi, MEM32(esi) - flags set for next jcc */
    goto loc_002A3624;

loc_002A35BC: ;
    eax = ZX8(MEM8(edi + 0xC6));
    (void)0; /* cmp eax, MEM32(esi + -4) - flags set for next jcc */
    goto loc_002A3624;

loc_002A35C8: ;
    SET_LO8(ecx, MEM8(edi + 0x9F));
    SET_LO8(ecx, LO8(ecx) & 0x60);
    if (CMP_EQ(LO8(ecx), 0x20)) goto loc_002A3626; /* je: equal / zero */

loc_002A35D6: ;
    POP32(esp, esi);
    POP32(esp, ebp);
    SET_LO8(eax, 1);
    POP32(esp, ebx);
    esp += 8; return; /* ret 4 */

loc_002A35DE: ;
    SET_LO8(edx, MEM8(edi + 0x9F));
    SET_LO8(edx, LO8(edx) & 0x60);
    if (CMP_NE(LO8(edx), 0x40)) goto loc_002A35D6; /* jne: not equal / not zero */

loc_002A35EC: ;
    goto loc_002A3626;

loc_002A35EE: ;
    eax = MEM32(esp + 0x10);
    if (TEST_NZ(eax, eax)) goto loc_002A3626; /* jne: not equal / not zero */

loc_002A35F6: ;
    eax = MEM32(esi + -12);
    if (CMP_A(eax, 5)) goto loc_002A3626; /* ja: above (unsigned >) */

loc_002A35FE: ;
    { uint32_t _jt = MEM32(eax * 4 + 0x2A3650); /* switch: 6 entries, 6 targets */
    if (_jt == 0x002A35B8u) goto loc_002A35B8;
    if (_jt == 0x002A35D6u) goto loc_002A35D6;
    if (_jt == 0x002A3605u) goto loc_002A3605;
    if (_jt == 0x002A360Bu) goto loc_002A360B;
    if (_jt == 0x002A3613u) goto loc_002A3613;
    if (_jt == 0x002A361Bu) goto loc_002A361B;
    g_seh_ebp = ebp; RECOMP_ITAIL(_jt); return; }

loc_002A3605: ;
    if (CMP_NE(edi, MEM32(esi))) goto loc_002A35D6; /* jne: not equal / not zero */

loc_002A3609: ;
    goto loc_002A3626;

loc_002A360B: ;
    eax = MEM32(edi + 0x64);
    (void)0; /* cmp eax, MEM32(esi + -4) - flags set for next jcc */
    goto loc_002A3624;

loc_002A3613: ;
    ecx = MEM32(edi + 0x68);
    (void)0; /* cmp ecx, MEM32(esi + -4) - flags set for next jcc */
    goto loc_002A3624;

loc_002A361B: ;
    eax = edi;
    PUSH32(esp, 0); sub_002E4F60(); /* call 0x002E4F60 */

loc_002A3622: ;
    (void)0; /* test LO8(eax), LO8(eax) - flags set for next jcc */

loc_002A3624: ;
    if (TEST_Z(LO8(eax), LO8(eax))) goto loc_002A35D6; /* je: equal / zero */

loc_002A3626: ;
    ebx++;
    esi = esi + 0x10;
    if (CMP_L(ebx, ebp)) goto loc_002A3593; /* jl: less (signed <) */

loc_002A3632: ;
    POP32(esp, esi);
    POP32(esp, ebp);
    SET_LO8(eax, 0); /* xor self */
    POP32(esp, ebx);
    esp += 8; return; /* ret 4 */

}

/**
 * sub_002A3670
 * Original: 0x002A3670 - 0x002A3695 (37 bytes, 7 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_002A3670(void)
{
    uint32_t ebp;
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_002A3670: ;
    MEM8(0x780AB4) = 1;
    PUSH32(esp, 0); sub_002A36A0(); /* call 0x002A36A0 */

loc_002A367C: ;
    PUSH32(esp, 0x1F08F0);
    PUSH32(esp, 0); sub_0042DEAB(); /* call 0x0042DEAB */

loc_002A3686: ;
    MEM32(0x775F3C) = eax;
    PUSH32(esp, 0); sub_002A6590(); /* call 0x002A6590 */

loc_002A3690: ;
    g_seh_ebp = ebp; sub_002A93D0(); return; /* tail jmp 0x002A93D0 */

}

/**
 * sub_002A36A0
 * Original: 0x002A36A0 - 0x002A37AC (268 bytes, 83 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_002A36A0(void)
{
    int _flags = 0; /* fallback flag var */

loc_002A36A0: ;
    eax = MEM32(0x6C0214);
    PUSH32(esp, ebx);
    ebx = 0; /* xor self */
    PUSH32(esp, esi);
    edx = 0x780CC8;
    PUSH32(esp, edi);
    MEM32(0x84A0FC) = ebx;
    MEM32(0x84A100) = ebx;
    MEM32(0x84A104) = ebx;
    edx = edx - eax;

loc_002A36C3: ;
    SET_LO8(ecx, MEM8(eax));
    MEM8(edx + eax) = LO8(ecx);
    eax++;
    if (CMP_NE(LO8(ecx), LO8(ebx))) goto loc_002A36C3; /* jne: not equal / not zero */

loc_002A36CD: ;
    PUSH32(esp, 0x780DD0);
    PUSH32(esp, 0x780DCC);
    PUSH32(esp, 0); sub_0042E4FE(); /* call 0x0042E4FE */

loc_002A36DC: ;
    if (TEST_NZ(eax, eax)) goto loc_002A3733; /* jne: not equal / not zero */

loc_002A36E0: ;
    eax = MEM32(0x780DCC);
    eax = eax - ebx;
    MEM8(0x84A0F8) = 1;
    if ((eax == 0)) goto loc_002A372C; /* je: equal / zero */

loc_002A36F0: ;
    eax = eax - 2;
    if ((eax == 0)) goto loc_002A3712; /* je: equal / zero */

loc_002A36F5: ;
    eax = eax - 2;
    if ((eax != 0)) goto loc_002A3739; /* jne: not equal / not zero */

loc_002A36FA: ;
    eax = MEM32(0x780DD0);
    MEM32(0x84A0FC) = eax;
    MEM32(0x84A100) = ebx;
    MEM32(0x84A104) = ebx;
    goto loc_002A3739;

loc_002A3712: ;
    ecx = MEM32(0x780DD0);
    MEM32(0x84A0FC) = ecx;
    MEM32(0x84A100) = ebx;
    MEM32(0x84A104) = ebx;
    goto loc_002A3739;

loc_002A372C: ;
    PUSH32(esp, 0); sub_002A3BD0(); /* call 0x002A3BD0 */

loc_002A3731: ;
    goto loc_002A3739;

loc_002A3733: ;
    MEM8(0x84A0F8) = LO8(ebx);

loc_002A3739: ;
    PUSH32(esp, 0x5C);
    PUSH32(esp, 0x780CC8);
    PUSH32(esp, 0); sub_0046EC00(); /* call 0x0046EC00 */

loc_002A3745: ;
    esp = esp + 8;
    eax = eax - 0x780CC8;
    eax = eax + 2;
    PUSH32(esp, eax);
    PUSH32(esp, 0x780CC8);
    PUSH32(esp, 0x780BC0);
    PUSH32(esp, 0); sub_0042DD7A(); /* call 0x0042DD7A */

loc_002A3760: ;
    eax = 0; /* xor self */

loc_002A3762: ;
    SET_LO8(ecx, MEM8(eax + 0x780BC0));
    MEM8(eax + 0x780AB8) = LO8(ecx);
    eax++;
    if (CMP_NE(LO8(ecx), LO8(ebx))) goto loc_002A3762; /* jne: not equal / not zero */

loc_002A3773: ;
    eax = MEM32(0x6C0218);
    edx = eax;
    /* nop */

loc_002A3780: ;
    SET_LO8(ecx, MEM8(eax));
    eax++;
    if (CMP_NE(LO8(ecx), LO8(ebx))) goto loc_002A3780; /* jne: not equal / not zero */

loc_002A3787: ;
    edi = 0x780AB8;
    eax = eax - edx;
    edi--;
    /* nop */

loc_002A3790: ;
    SET_LO8(ecx, MEM8(edi + 1));
    edi++;
    if (CMP_NE(LO8(ecx), LO8(ebx))) goto loc_002A3790; /* jne: not equal / not zero */

loc_002A3798: ;
    ecx = eax;
    ecx = ecx >> 2;
    esi = edx;
    memcpy((void*)XBOX_PTR(edi), (void*)XBOX_PTR(esi), ecx * 4);
    esi += ecx * 4; edi += ecx * 4; ecx = 0; /* rep movsd */
    ecx = eax;
    ecx = ecx & 3;
    memcpy((void*)XBOX_PTR(edi), (void*)XBOX_PTR(esi), ecx);
    esi += ecx; edi += ecx; ecx = 0; /* rep movsb */
    POP32(esp, edi);
    POP32(esp, esi);
    POP32(esp, ebx);
    esp += 4; return; /* ret */

}

/**
 * sub_002A37B0
 * Original: 0x002A37B0 - 0x002A3823 (115 bytes, 34 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_002A37B0(void)
{
    uint32_t ebp;
    int _flags = 0; /* fallback flag var */
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_002A37B0: ;
    PUSH32(esp, ebp);
    PUSH32(esp, edi);
    PUSH32(esp, 0); sub_001F1360(); /* call 0x001F1360 */

loc_002A37B7: ;
    PUSH32(esp, 0); sub_0005F5F0(); /* call 0x0005F5F0 */

loc_002A37BC: ;
    ebp = eax;
    MEM32(ebp + 0x10) = 0;
    eax = MEM32(0x775F50);
    if (TEST_NZ(eax, eax)) goto loc_002A37EA; /* jne: not equal / not zero */

loc_002A37CE: ;
    SET_LO8(eax, MEM8(ebp + 0xC));
    if (TEST_NZ(LO8(eax), LO8(eax))) goto loc_002A37EA; /* jne: not equal / not zero */

loc_002A37D5: ;
    edi = MEM32(ebp);
    PUSH32(esp, esi);
    esi = MEM32(ebp + 8);
    PUSH32(esp, 0); sub_0005FFE0(); /* call 0x0005FFE0 */

loc_002A37E1: ;
    eax = MEM32(ebp + 8);
    PUSH32(esp, 0); sub_000601D0(); /* call 0x000601D0 */

loc_002A37E9: ;
    POP32(esp, esi);

loc_002A37EA: ;
    PUSH32(esp, 0); sub_000615D0(); /* call 0x000615D0 */

loc_002A37EF: ;
    ecx = MEM32(eax + 0x14);
    if (TEST_NZ(ecx, ecx)) goto loc_002A37FD; /* jne: not equal / not zero */

loc_002A37F6: ;
    edi = eax;
    PUSH32(esp, 0); sub_00061640(); /* call 0x00061640 */

loc_002A37FD: ;
    ecx = MEM32(0x847024);
    (void)0; /* test ecx, ecx - flags set for next jcc */
    POP32(esp, edi);
    POP32(esp, ebp);
    if (TEST_Z(ecx, ecx)) goto loc_002A3822; /* je: equal / zero */

loc_002A3809: ;
    PUSH32(esp, 0); sub_00017CF0(); /* call 0x00017CF0 */

loc_002A380E: ;
    MEM32(0x7FA110) = 0;
    MEM32(0x7FA114) = 0;

loc_002A3822: ;
    esp += 4; return; /* ret */

}

/**
 * sub_002A3830
 * Original: 0x002A3830 - 0x002A3850 (32 bytes, 11 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_002A3830(void)
{
    uint32_t ebp;
    int _flags = 0; /* fallback flag var */
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_002A3830: ;
    SET_LO8(eax, MEM8(0x84A0F8));
    (void)0; /* test LO8(eax), LO8(eax) - flags set for next jcc */
    PUSH32(esp, esi);
    PUSH32(esp, edi);
    if (TEST_Z(LO8(eax), LO8(eax))) { sub_002A3850(); return; } /* je: equal / zero */

loc_002A383B: ;
    eax = MEM32(0x780DCC);
    if (TEST_NZ(eax, eax)) { sub_002A3850(); return; } /* jne: not equal / not zero */

loc_002A3844: ;
    edi = 0x780DD0;
    esi = 0x780DDC;
    g_seh_ebp = ebp; sub_002A387D(); return; /* tail jmp 0x002A387D */

}

/**
 * sub_002A3890
 * Original: 0x002A3890 - 0x002A38FF (111 bytes, 30 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_002A3890(void)
{
    int _flags = 0; /* fallback flag var */
    int _cf = 0; /* carry flag */

loc_002A3890: ;
    SET_LO8(eax, MEM8(0x8758B0));
    esp = esp - 0x104;
    if (TEST_NZ(LO8(eax), LO8(eax))) { sub_002A38FF(); return; } /* jne: not equal / not zero */

loc_002A389F: ;
    PUSH32(esp, 0x780BC0);
    PUSH32(esp, 0x606608);
    eax = esp + 8;
    PUSH32(esp, 0x103);
    PUSH32(esp, eax);
    MEM8(0x8758B0) = 1;
    PUSH32(esp, 0); sub_0046E9AD(); /* call 0x0046E9AD */

loc_002A38BF: ;
    esp = esp + 0x10;
    ecx = esp;
    PUSH32(esp, ecx);
    MEM8(esp + 0x107) = 0;
    PUSH32(esp, 0); sub_0042D1AF(); /* call 0x0042D1AF */

loc_002A38D3: ;
    if (CMP_NE(eax, 0xFFFFFFFFu)) goto loc_002A38DF; /* jne: not equal / not zero */

loc_002A38D8: ;
    PUSH32(esp, 0); sub_0042C2AC(); /* call 0x0042C2AC */

loc_002A38DD: ;
    goto loc_002A38EA;

loc_002A38DF: ;
    SET_LO8(eax, LO8(eax) & 0x10);
    SET_LO8(eax, (uint32_t)(-(int32_t)LO8(eax)));
    eax = _cf ? 0xFFFFFFFF : 0; /* sbb self (CF extend) */
    eax = eax & 0x10B;

loc_002A38EA: ;
    if (CMP_NE(eax, 0x10B)) { sub_002A38FF(); return; } /* jne: not equal / not zero */

loc_002A38F1: ;
    SET_LO8(eax, 1);
    MEM8(0x8758AF) = LO8(eax);
    esp = esp + 0x104;
    esp += 4; return; /* ret */

}

/**
 * sub_002A3910
 * Original: 0x002A3910 - 0x002A3A12 (258 bytes, 67 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_002A3910(void)
{
    uint32_t ebp;
    int _flags = 0; /* fallback flag var */
    int _cf = 0; /* carry flag */
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_002A3910: ;
    esp = esp - 0xD08;
    PUSH32(esp, esi);
    PUSH32(esp, 0); sub_0042C91F(); /* call 0x0042C91F */

loc_002A391C: ;
    esi = eax;
    if (CMP_NE(esi, 2)) goto loc_002A397C; /* jne: not equal / not zero */

loc_002A3923: ;
    eax = MEM32(0x75E9B0);
    PUSH32(esp, eax);
    PUSH32(esp, 0x780BC0);
    PUSH32(esp, 0x6065E8);
    ecx = esp + 0x14;
    PUSH32(esp, 0x103);
    PUSH32(esp, ecx);
    PUSH32(esp, 0); sub_0046E9AD(); /* call 0x0046E9AD */

loc_002A3942: ;
    esp = esp + 0x14;
    edx = esp + 8;
    PUSH32(esp, edx);
    MEM8(esp + 0x10F) = 0;
    PUSH32(esp, 0); sub_0042D1AF(); /* call 0x0042D1AF */

loc_002A3957: ;
    if (CMP_NE(eax, 0xFFFFFFFFu)) goto loc_002A3963; /* jne: not equal / not zero */

loc_002A395C: ;
    PUSH32(esp, 0); sub_0042C2AC(); /* call 0x0042C2AC */

loc_002A3961: ;
    goto loc_002A396E;

loc_002A3963: ;
    SET_LO8(eax, LO8(eax) & 0x10);
    SET_LO8(eax, (uint32_t)(-(int32_t)LO8(eax)));
    eax = _cf ? 0xFFFFFFFF : 0; /* sbb self (CF extend) */
    eax = eax & 0x10B;

loc_002A396E: ;
    if (CMP_EQ(eax, 0x10B)) goto loc_002A3992; /* je: equal / zero */

loc_002A3975: ;
    esi = 1;
    goto loc_002A3992;

loc_002A397C: ;
    if (CMP_AE(esi, 1)) goto loc_002A3988; /* jae: above or equal (unsigned >=) */

loc_002A3981: ;
    esi = 1;
    goto loc_002A3992;

loc_002A3988: ;
    if (CMP_BE(esi, 9)) goto loc_002A3992; /* jbe: below or equal (unsigned <=) */

loc_002A398D: ;
    esi = 9;

loc_002A3992: ;
    eax = MEM32(esi * 4 + 0x75E9A8);
    PUSH32(esp, eax);
    PUSH32(esp, 0x780BC0);
    PUSH32(esp, 0x6065D0);
    ecx = esp + 0x164;
    PUSH32(esp, 0x40);
    PUSH32(esp, ecx);
    PUSH32(esp, 0); sub_0046E9AD(); /* call 0x0046E9AD */

loc_002A39B3: ;
    esp = esp + 0x14;
    PUSH32(esp, 0x40);
    PUSH32(esp, 0x780CC8);
    edx = esp + 0x120;
    PUSH32(esp, edx);
    PUSH32(esp, 0); sub_0042DD7A(); /* call 0x0042DD7A */

loc_002A39CA: ;
    eax = MEM32(esp + 0xD10);
    PUSH32(esp, 0);
    MEM32(esp + 0x110) = eax;
    MEM32(esp + 0x114) = 0;
    MEM32(esp + 0x118) = 0;
    PUSH32(esp, 0); sub_002A3C20(); /* call 0x002A3C20 */

loc_002A39F5: ;
    esp = esp + 4;
    ecx = esp + 0x158;
    PUSH32(esp, ecx);
    PUSH32(esp, 0); sub_0042D1AF(); /* call 0x0042D1AF */

loc_002A3A05: ;
    (void)0; /* cmp eax, 0xFFFFFFFFu - flags set for next jcc */
    POP32(esp, esi);
    if (CMP_NE(eax, 0xFFFFFFFFu)) { sub_002A3A12(); return; } /* jne: not equal / not zero */

loc_002A3A0B: ;
    PUSH32(esp, 0); sub_0042C2AC(); /* call 0x0042C2AC */

loc_002A3A10: ;
    g_seh_ebp = ebp; sub_002A3A1D(); return; /* tail jmp 0x002A3A1D */

}

/**
 * sub_002A3A50
 * Original: 0x002A3A50 - 0x002A3AF9 (169 bytes, 53 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_002A3A50(void)
{
    uint32_t ebp;
    int _flags = 0; /* fallback flag var */

loc_002A3A50: ;
    PUSH32(esp, ebp);
    ebp = esp;
    esp = esp & 0xFFFFFFF8u;
    esp = esp - 0xC48;
    PUSH32(esp, ebx);
    eax = 0; /* xor self */
    PUSH32(esp, edi);
    ecx = 0x300;
    edi = esp + 0x50;
    { uint32_t _i; for (_i = 0; _i < ecx; _i++) MEM32(edi + _i*4) = eax; }
    edi += ecx * 4; ecx = 0; /* rep stosd */
    MEM8(esp + 0xC) = LO8(eax);
    eax = MEM32(0x8470FC);
    ecx = MEM32(eax + 8);
    ebx = ZX8(MEM8(ecx + 2));
    if (TEST_Z(ebx, ebx)) goto loc_002A3A9B; /* je: equal / zero */

loc_002A3A7F: ;
    PUSH32(esp, 0xFFFFFFFFu);
    PUSH32(esp, 0xFFFFFFFFu);
    PUSH32(esp, 0xFFFFFFFFu);
    PUSH32(esp, 0xFFFFFFFFu);
    PUSH32(esp, 0xFFFFFFFFu);
    PUSH32(esp, 0xFFFFFFFFu);
    PUSH32(esp, ebx);
    eax = 0; /* xor self */
    PUSH32(esp, 0); sub_0041F8D0(); /* call 0x0041F8D0 */

loc_002A3A93: ;
    esp = esp + 0x1C;
    MEM8(esp + 0xC) = 1;

loc_002A3A9B: ;
    edx = MEM32(esp + 0xC);
    PUSH32(esp, edx);
    PUSH32(esp, 0); sub_002A3C20(); /* call 0x002A3C20 */

loc_002A3AA5: ;
    esp = esp + 4;
    if (TEST_Z(LO8(eax), LO8(eax))) goto loc_002A3AB6; /* je: equal / zero */

loc_002A3AAC: ;
    eax = esp + 0x60;
    PUSH32(esp, eax);
    PUSH32(esp, 0); sub_004A0472(); /* call 0x004A0472 */

loc_002A3AB6: ;
    PUSH32(esp, 0x6065C8);
    PUSH32(esp, 0x6065B4);
    ecx = esp + 0x18;
    PUSH32(esp, 0x40);
    PUSH32(esp, ecx);
    MEM32(esp + 0x60) = 0x646C3031;
    MEM8(esp + 0x68) = LO8(ebx);
    MEM32(esp + 0x64) = 0xFFFFFFFFu;
    PUSH32(esp, 0); sub_0046E9AD(); /* call 0x0046E9AD */

loc_002A3AE0: ;
    esp = esp + 0x10;
    edx = esp + 0x10;
    PUSH32(esp, edx);
    PUSH32(esp, 0); sub_0042D1AF(); /* call 0x0042D1AF */

loc_002A3AED: ;
    if (CMP_NE(eax, 0xFFFFFFFFu)) { sub_002A3AF9(); return; } /* jne: not equal / not zero */

loc_002A3AF2: ;
    PUSH32(esp, 0); sub_0042C2AC(); /* call 0x0042C2AC */

loc_002A3AF7: ;
    g_seh_ebp = ebp; sub_002A3B04(); return; /* tail jmp 0x002A3B04 */

}

/**
 * sub_002A3B90
 * Original: 0x002A3B90 - 0x002A3BCB (59 bytes, 15 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_002A3B90(void)
{

loc_002A3B90: ;
    esp = esp - 0xC00;
    ecx = (uint32_t)(int32_t)SMEM8(eax);
    eax = MEM32(esp + 0xC04);
    PUSH32(esp, 0);
    MEM32(esp + 0xC) = ecx;
    PUSH32(esp, 0);
    ecx = esp + 8;
    PUSH32(esp, ecx);
    PUSH32(esp, 0);
    MEM32(esp + 0x10) = 2;
    MEM32(esp + 0x1C) = edx;
    MEM32(esp + 0x14) = eax;
    PUSH32(esp, 0); sub_002A3EA0(); /* call 0x002A3EA0 */

loc_002A3BC4: ;
    esp = esp + 0xC10;
    esp += 4; return; /* ret */

}

/**
 * sub_002A3BD0
 * Original: 0x002A3BD0 - 0x002A3C18 (72 bytes, 19 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_002A3BD0(void)
{
    int _flags = 0; /* fallback flag var */

loc_002A3BD0: ;
    PUSH32(esp, 2);
    PUSH32(esp, 0x6065B0);
    PUSH32(esp, 0x780E1D);
    PUSH32(esp, 0); sub_0046F0C0(); /* call 0x0046F0C0 */

loc_002A3BE1: ;
    esp = esp + 0xC;
    edx = 0; /* xor self */
    if (TEST_NZ(eax, eax)) goto loc_002A3C01; /* jne: not equal / not zero */

loc_002A3BEA: ;
    /* nop */

loc_002A3BF0: ;
    SET_LO8(ecx, MEM8(eax + 0x780E1C));
    MEM8(eax + 0x780CC8) = LO8(ecx);
    eax++;
    if (CMP_NE(LO8(ecx), LO8(edx))) goto loc_002A3BF0; /* jne: not equal / not zero */

loc_002A3C01: ;
    eax = MEM32(0x780DD0);
    MEM32(0x84A0FC) = eax;
    MEM32(0x84A100) = edx;
    MEM32(0x84A104) = edx;
    esp += 4; return; /* ret */

}

/**
 * sub_002A3C20
 * Original: 0x002A3C20 - 0x002A3CC8 (168 bytes, 52 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_002A3C20(void)
{
    uint32_t ebp;
    int _flags = 0; /* fallback flag var */
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_002A3C20: ;
    eax = MEM32(0x847024);
    esp = esp - 0x120;
    (void)0; /* test eax, eax - flags set for next jcc */
    PUSH32(esp, ebx);
    PUSH32(esp, ebp);
    PUSH32(esp, esi);
    PUSH32(esp, edi);
    if (TEST_Z(eax, eax)) goto loc_002A3C66; /* je: equal / zero */

loc_002A3C33: ;
    esi = MEM32(eax + 0x3C);
    PUSH32(esp, 1);
    PUSH32(esp, esi);
    edi = eax;
    PUSH32(esp, 0); sub_0001E570(); /* call 0x0001E570 */

loc_002A3C40: ;
    PUSH32(esp, esi);
    PUSH32(esp, 0); sub_0001E5D0(); /* call 0x0001E5D0 */

loc_002A3C46: ;
    eax = esi;
    PUSH32(esp, 0); sub_0001E710(); /* call 0x0001E710 */

loc_002A3C4D: ;
    esi = MEM32(edi + 0x40);
    edi = MEM32(esi + 4);
    SET_LO8(ebx, 1);
    PUSH32(esp, 0); sub_0002E7A0(); /* call 0x0002E7A0 */

loc_002A3C5A: ;
    PUSH32(esp, esi);
    PUSH32(esp, 0); sub_00024C00(); /* call 0x00024C00 */

loc_002A3C60: ;
    PUSH32(esp, esi);
    PUSH32(esp, 0); sub_00024C90(); /* call 0x00024C90 */

loc_002A3C66: ;
    PUSH32(esp, 0x6065A0);
    PUSH32(esp, 0x5F71A0);
    PUSH32(esp, 0x14);
    eax = esp + 0x34;
    PUSH32(esp, 0); sub_0005E4E0(); /* call 0x0005E4E0 */

loc_002A3C7B: ;
    ebx = 0; /* xor self */
    esp = esp + 0xC;
    eax = esp + 0x1C;
    MEM32(esp + 0x12C) = 0x14;
    MEM32(esp + 0x1C) = ebx;
    MEM32(esp + 0x24) = ebx;
    MEM32(esp + 0x20) = ebx;
    PUSH32(esp, 0); sub_00063680(); /* call 0x00063680 */

loc_002A3CA0: ;
    PUSH32(esp, 8);
    PUSH32(esp, 0); sub_00043830(); /* call 0x00043830 */

loc_002A3CA7: ;
    esi = eax;
    esp = esp + 4;
    if (CMP_EQ(esi, ebx)) { sub_002A3CC8(); return; } /* je: equal / zero */

loc_002A3CB0: ;
    eax = esi + 4;
    PUSH32(esp, eax);
    PUSH32(esp, esi);
    eax = 0x5D4FB4;
    PUSH32(esp, 0); sub_001F5020(); /* call 0x001F5020 */

loc_002A3CBF: ;
    esp = esp + 8;
    MEM32(esp + 0x18) = esi;
    g_seh_ebp = ebp; sub_002A3CCC(); return; /* tail jmp 0x002A3CCC */

}

/**
 * sub_002A3E70
 * Original: 0x002A3E70 - 0x002A3E95 (37 bytes, 12 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_002A3E70(void)
{
    uint32_t ebp;
    int _flags = 0; /* fallback flag var */
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_002A3E70: ;
    PUSH32(esp, edi);
    edi = MEM32(0x775F58);
    if (TEST_Z(edi, edi)) goto loc_002A3E8F; /* je: equal / zero */

loc_002A3E7B: ;
    goto loc_002A3E80;

    /* nop */

loc_002A3E80: ;
    PUSH32(esp, 0); sub_001F1AB0(); /* call 0x001F1AB0 */

loc_002A3E85: ;
    edi = MEM32(0x775F58);
    if (TEST_NZ(edi, edi)) goto loc_002A3E80; /* jne: not equal / not zero */

loc_002A3E8F: ;
    POP32(esp, edi);
    g_seh_ebp = ebp; sub_001F12E0(); return; /* tail jmp 0x001F12E0 */

}

/**
 * sub_002A3EA0
 * Original: 0x002A3EA0 - 0x002A3EAF (15 bytes, 5 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_002A3EA0(void)
{
    uint32_t ebp;
    int _flags = 0; /* fallback flag var */
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_002A3EA0: ;
    SET_LO8(eax, MEM8(esp + 0xC));
    if (TEST_Z(LO8(eax), LO8(eax))) { sub_002A3EAF(); return; } /* je: equal / zero */

loc_002A3EA8: ;
    PUSH32(esp, 0); sub_002A3E70(); /* call 0x002A3E70 */

loc_002A3EAD: ;
    g_seh_ebp = ebp; sub_002A3EC1(); return; /* tail jmp 0x002A3EC1 */

}

/**
 * sub_002A3F10
 * Original: 0x002A3F10 - 0x002A3F6A (90 bytes, 19 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_002A3F10(void)
{
    int _flags = 0; /* fallback flag var */

loc_002A3F10: ;
    eax = 0; /* xor self */
    MEM16(0x7F9F34) = 1;
    MEM32(0x7FCB54) = eax;
    MEM32(0x7FCB50) = eax;
    MEM32(0x7FCB4C) = eax;
    MEM32(0x7FCB48) = eax;
    MEM8(0x801324) = LO8(eax);
    PUSH32(esp, 0); sub_000E02D0(); /* call 0x000E02D0 */

loc_002A3F39: ;
    /* nop */

loc_002A3F40: ;
    PUSH32(esp, 0); sub_002A4610(); /* call 0x002A4610 */

loc_002A3F45: ;
    if (TEST_NZ(eax, eax)) goto loc_002A3F40; /* jne: not equal / not zero */

loc_002A3F49: ;
    PUSH32(esp, 0); sub_002AA140(); /* call 0x002AA140 */

loc_002A3F4E: ;
    PUSH32(esp, 0); sub_0041ADB0(); /* call 0x0041ADB0 */

loc_002A3F53: ;
    PUSH32(esp, 0); sub_0041AF10(); /* call 0x0041AF10 */

loc_002A3F58: ;
    PUSH32(esp, 0); sub_00419E90(); /* call 0x00419E90 */

loc_002A3F5D: ;
    PUSH32(esp, 0); sub_0041B3C0(); /* call 0x0041B3C0 */

loc_002A3F62: ;
    MEM8(0x849E9D) = 0xA;
    esp += 4; return; /* ret */

}

/**
 * sub_002A3F70
 * Original: 0x002A3F70 - 0x002A3FC8 (88 bytes, 30 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_002A3F70(void)
{
    uint32_t ebp;
    int _flags = 0; /* fallback flag var */

loc_002A3F70: ;
    PUSH32(esp, ebp);
    ebp = esp;
    esp = esp & 0xFFFFFFF0u;
    PUSH32(esp, ecx);
    eax = MEM32(ebp + 8);
    ecx = MEM32(0x84A13C);
    eax = (uint32_t)((int32_t)eax * (int32_t)0x2B0);
    PUSH32(esp, ebx);
    ebx = MEM32(eax + ecx + 0x144);
    PUSH32(esp, esi);
    PUSH32(esp, edi);
    esi = ebx;
    MEM32(0x84B868) = ebx;
    PUSH32(esp, 0); sub_003FB250(); /* call 0x003FB250 */

loc_002A3F9D: ;
    SET_LO16(edx, ZX8(MEM8(ebp + 8)));
    eax = MEM32(ebp + 0xC);
    (void)0; /* test eax, eax - flags set for next jcc */
    esi = ebx + 0x10;
    ecx = 0x10;
    edi = 0x81BD30;
    memcpy((void*)XBOX_PTR(edi), (void*)XBOX_PTR(esi), ecx * 4);
    esi += ecx * 4; edi += ecx * 4; ecx = 0; /* rep movsd */
    MEM16(0x81BD26) = LO16(edx);
    if (TEST_Z(eax, eax)) goto loc_002A3FC1; /* je: equal / zero */

loc_002A3FBF: ;
    MEM32(eax) = ebx;

loc_002A3FC1: ;
    POP32(esp, edi);
    POP32(esp, esi);
    POP32(esp, ebx);
    esp = ebp;
    POP32(esp, ebp);
    esp += 4; return; /* ret */

}

/**
 * sub_002A3FD0
 * Original: 0x002A3FD0 - 0x002A45B5 (1509 bytes, 394 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_002A3FD0(void)
{
    uint32_t ebp;
    int _flags = 0; /* fallback flag var */
    float xmm0, xmm1, xmm2;

loc_002A3FD0: ;
    PUSH32(esp, ebp);
    ebp = esp;
    esp = esp & 0xFFFFFFF0u;
    esp = esp - 0x14;
    SET_LO8(eax, MEM8(0x76F0E0));
    PUSH32(esp, ebx);
    PUSH32(esp, esi);
    PUSH32(esp, edi);
    edi = 0; /* xor self */
    (void)0; /* cmp LO8(eax), 1 - flags set for next jcc */
    MEM32(0x776140) = edi;
    MEM32(esp + 0xC) = edi;
    if (CMP_EQ(LO8(eax), 1)) goto loc_002A3FFF; /* je: equal / zero */

loc_002A3FF1: ;
    MEM8(0x8496FC) = 0;
    MEM8(0x847150) = 0;

loc_002A3FFF: ;
    if (CMP_NE(MEM32(0x849C60), 2)) goto loc_002A4015; /* jne: not equal / not zero */

loc_002A4008: ;
    SET_LO8(eax, MEM8(0x779B94));
    if (TEST_NZ(LO8(eax), LO8(eax))) goto loc_002A43E8; /* jne: not equal / not zero */

loc_002A4015: ;
    eax = MEM32(0x84A144);
    ebx = 0; /* xor self */
    if (CMP_L(eax, edi)) goto loc_002A4081; /* jl: less (signed <) */

loc_002A4020: ;
    eax = esp + 0xC;
    PUSH32(esp, eax);
    PUSH32(esp, ebx);
    PUSH32(esp, 0); sub_002A3F70(); /* call 0x002A3F70 */

loc_002A402B: ;
    eax = ZX8(MEM8(ebx + 0x7F9FF8));
    edi = SX16(LO16(eax));
    MEM32(0x84A148) = eax;
    esp = esp + 8;
    eax = edi;
    PUSH32(esp, 0); sub_000FCC90(); /* call 0x000FCC90 */

loc_002A4044: ;
    if (TEST_NZ(eax, eax)) goto loc_002A4058; /* jne: not equal / not zero */

loc_002A4048: ;
    SET_LO8(eax, MEM8(0x7FA275));
    if (TEST_NZ(LO8(eax), LO8(eax))) goto loc_002A4058; /* jne: not equal / not zero */

loc_002A4051: ;
    eax = edi;
    PUSH32(esp, 0); sub_000FCD20(); /* call 0x000FCD20 */

loc_002A4058: ;
    edx = edi;
    PUSH32(esp, 0); sub_000E41B0(); /* call 0x000E41B0 */

loc_002A405F: ;
    PUSH32(esp, 0); sub_000F1B40(); /* call 0x000F1B40 */

loc_002A4064: ;
    ecx = MEM32(esp + 0xC);
    esi = MEM32(0x84A148);
    PUSH32(esp, ecx);
    PUSH32(esp, 0); sub_002A59D0(); /* call 0x002A59D0 */

loc_002A4074: ;
    eax = MEM32(0x84A144);
    esp = esp + 4;
    ebx++;
    if (CMP_LE(ebx, eax)) goto loc_002A4020; /* jle: less or equal (signed <=) */

loc_002A4081: ;
    ecx = 0; /* xor self */
    (void)0; /* cmp eax, ecx - flags set for next jcc */
    MEM32(esp + 0x10) = ecx;
    if (CMP_L(eax, ecx)) goto loc_002A4106; /* jl: less (signed <) */

loc_002A408B: ;
    MEM32(esp + 0x14) = ecx;
    /* nop */

loc_002A4090: ;
    edx = MEM32(0x84A13C);
    eax = MEM32(esp + 0x14);
    ebx = MEM32(eax + edx + 0x144);
    esi = ebx;
    MEM32(0x84B868) = ebx;
    PUSH32(esp, 0); sub_003FB250(); /* call 0x003FB250 */

loc_002A40AE: ;
    eax = MEM32(esp + 0x10);
    esi = ebx + 0x10;
    ecx = 0x10;
    edi = 0x81BD30;
    memcpy((void*)XBOX_PTR(edi), (void*)XBOX_PTR(esi), ecx * 4);
    esi += ecx * 4; edi += ecx * 4; ecx = 0; /* rep movsd */
    SET_LO16(ecx, ZX8(LO8(eax)));
    eax = ZX8(MEM8(eax + 0x7F9FF8));
    PUSH32(esp, ebx);
    PUSH32(esp, eax);
    MEM16(0x81BD26) = LO16(ecx);
    MEM32(esp + 0x14) = ebx;
    MEM32(0x84A148) = eax;
    PUSH32(esp, 0); sub_002A5AA0(); /* call 0x002A5AA0 */

loc_002A40E3: ;
    ecx = MEM32(esp + 0x18);
    esi = MEM32(esp + 0x1C);
    eax = MEM32(0x84A144);
    esp = esp + 8;
    ecx++;
    esi = esi + 0x2B0;
    (void)0; /* cmp ecx, eax - flags set for next jcc */
    MEM32(esp + 0x10) = ecx;
    MEM32(esp + 0x14) = esi;
    if (CMP_LE(ecx, eax)) goto loc_002A4090; /* jle: less or equal (signed <=) */

loc_002A4106: ;
    ecx = MEM32(0x7FA1F8);
    if (CMP_EQ(ecx, 0x46)) goto loc_002A4132; /* je: equal / zero */

loc_002A4111: ;
    if (CMP_EQ(ecx, 0x1D)) goto loc_002A4132; /* je: equal / zero */

loc_002A4116: ;
    if (CMP_EQ(ecx, 0x18)) goto loc_002A4132; /* je: equal / zero */

loc_002A411B: ;
    if (TEST_Z(eax, eax)) goto loc_002A4122; /* je: equal / zero */

loc_002A411F: ;
    eax++;
    goto loc_002A4124;

loc_002A4122: ;
    eax = 0; /* xor self */

loc_002A4124: ;
    PUSH32(esp, eax);
    PUSH32(esp, 0); sub_001D95D0(); /* call 0x001D95D0 */

loc_002A412A: ;
    eax = MEM32(0x84A144);
    esp = esp + 4;

loc_002A4132: ;
    ecx = 0; /* xor self */
    (void)0; /* cmp eax, ecx - flags set for next jcc */
    MEM32(esp + 0x14) = ecx;
    if (CMP_L(eax, ecx)) goto loc_002A4217; /* jl: less (signed <) */

loc_002A4140: ;
    MEM32(esp + 0x10) = ecx;

loc_002A4144: ;
    edx = MEM32(0x84A13C);
    eax = MEM32(esp + 0x10);
    ebx = MEM32(eax + edx + 0x144);
    esi = ebx;
    MEM32(0x84B868) = ebx;
    PUSH32(esp, 0); sub_003FB250(); /* call 0x003FB250 */

loc_002A4162: ;
    eax = MEM32(esp + 0x14);
    esi = ebx + 0x10;
    ecx = 0x10;
    edi = 0x81BD30;
    memcpy((void*)XBOX_PTR(edi), (void*)XBOX_PTR(esi), ecx * 4);
    esi += ecx * 4; edi += ecx * 4; ecx = 0; /* rep movsd */
    esi = ZX8(MEM8(eax + 0x7F9FF8));
    SET_LO16(ecx, ZX8(LO8(eax)));
    SET_LO8(eax, MEM8(0x7819D5));
    (void)0; /* test LO8(eax), LO8(eax) - flags set for next jcc */
    MEM16(0x81BD26) = LO16(ecx);
    MEM32(esp + 0xC) = ebx;
    MEM32(0x84A148) = esi;
    if (TEST_Z(LO8(eax), LO8(eax))) goto loc_002A41D9; /* je: equal / zero */

loc_002A419A: ;
    PUSH32(esp, 0x7B);
    edx = esp + 0x10;
    PUSH32(esp, edx);
    eax = esp + 0x20;
    PUSH32(esp, 2);
    PUSH32(esp, eax);
    MEM32(esp + 0x28) = 0x7B;
    MEM32(esp + 0x2C) = 0x7A;
    MEM32(esp + 0x1C) = 0;
    PUSH32(esp, 0); sub_000DAA60(); /* call 0x000DAA60 */

loc_002A41C5: ;
    eax = MEM32(esp + 0x1C);
    esp = esp + 0x10;
    if (TEST_Z(eax, eax)) goto loc_002A41D9; /* je: equal / zero */

loc_002A41D0: ;
    PUSH32(esp, esi);
    PUSH32(esp, 0); sub_00064B60(); /* call 0x00064B60 */

loc_002A41D6: ;
    esp = esp + 4;

loc_002A41D9: ;
    PUSH32(esp, esi);
    PUSH32(esp, 3);
    PUSH32(esp, 0); sub_000D9950(); /* call 0x000D9950 */

loc_002A41E1: ;
    esi = SX16(LO16(esi));
    PUSH32(esp, esi);
    PUSH32(esp, 0); sub_000C6230(); /* call 0x000C6230 */

loc_002A41EA: ;
    PUSH32(esp, esi);
    PUSH32(esp, 0); sub_000C5CE0(); /* call 0x000C5CE0 */

loc_002A41F0: ;
    ecx = MEM32(esp + 0x24);
    esi = MEM32(esp + 0x20);
    eax = MEM32(0x84A144);
    esp = esp + 0x10;
    ecx++;
    esi = esi + 0x2B0;
    (void)0; /* cmp ecx, eax - flags set for next jcc */
    MEM32(esp + 0x14) = ecx;
    MEM32(esp + 0x10) = esi;
    if (CMP_LE(ecx, eax)) goto loc_002A4144; /* jle: less or equal (signed <=) */

loc_002A4217: ;
    if (TEST_Z(eax, eax)) goto loc_002A4220; /* je: equal / zero */

loc_002A421B: ;
    ebx = eax + 1;
    goto loc_002A4222;

loc_002A4220: ;
    ebx = 0; /* xor self */

loc_002A4222: ;
    edx = MEM32(0x84A13C);
    ecx = ebx;
    ecx = (uint32_t)((int32_t)ecx * (int32_t)0x2B0);
    esi = MEM32(ecx + edx + 0x144);
    MEM32(0x84B868) = esi;
    PUSH32(esp, 0); sub_003FB250(); /* call 0x003FB250 */

loc_002A4242: ;
    SET_LO16(eax, ZX8(LO8(ebx)));
    esi = esi + 0x10;
    ecx = 0x10;
    edi = 0x81BD30;
    memcpy((void*)XBOX_PTR(edi), (void*)XBOX_PTR(esi), ecx * 4);
    esi += ecx * 4; edi += ecx * 4; ecx = 0; /* rep movsd */
    MEM16(0x81BD26) = LO16(eax);
    eax = MEM32(0x84A144);
    ebx = 0; /* xor self */
    edi = 0; /* xor self */
    if (CMP_L(eax, ebx)) goto loc_002A4347; /* jl: less (signed <) */

loc_002A426C: ;
    esi = 0; /* xor self */
    edi = edi;

loc_002A4270: ;
    eax = MEM32(0x84A13C);
    ecx = MEM32(esi + eax + 0x1F8);
    edx = MEM32(esi + eax + 0x1F4);
    PUSH32(esp, ecx);
    ecx = MEM32(esi + eax + 0x214);
    PUSH32(esp, edx);
    edx = MEM32(esi + eax + 0x21C);
    PUSH32(esp, ecx);
    PUSH32(esp, edx);
    eax = edi;
    PUSH32(esp, 0); sub_0037C020(); /* call 0x0037C020 */

loc_002A429C: ;
    ecx = ZX8(MEM8(edi + 0x7F9FF8));
    eax = MEM32(0x84A144);
    esp = esp + 0x10;
    (void)0; /* cmp eax, ebx - flags set for next jcc */
    MEM32(0x84A148) = ecx;
    if (CMP_LE(eax, ebx)) goto loc_002A4328; /* jle: less or equal (signed <=) */

loc_002A42B5: ;
    edx = MEM32(0x84A13C);
    xmm0 = MEMF(0x648D14); /* movss */
    xmm1 = MEMF(0x648D34); /* movss */
    eax = SX16(LO16(ecx));
    eax = (uint32_t)((int32_t)eax * (int32_t)0x2B0);
    xmm2 = MEMF(eax + edx + 0x260); /* movss */
    xmm2 = xmm2 / MEMF(eax + edx + 0x258); /* divss */
    eax = eax + edx;
    xmm2 = xmm2 - xmm0; /* subss */
    xmm2 = xmm2 * xmm1; /* mulss */
    xmm2 = xmm2 + MEMF(eax + 0x250); /* addss */
    MEMF(0x780A4C) = xmm2; /* movss */
    xmm2 = MEMF(eax + 0x264); /* movss */
    xmm2 = xmm2 / MEMF(eax + 0x25C); /* divss */
    xmm2 = xmm2 - xmm0; /* subss */
    xmm2 = xmm2 * xmm1; /* mulss */
    xmm2 = xmm2 + MEMF(eax + 0x254); /* addss */
    MEMF(0x780A48) = xmm2; /* movss */

loc_002A4328: ;
    PUSH32(esp, ecx);
    PUSH32(esp, 4);
    PUSH32(esp, 0); sub_000D9950(); /* call 0x000D9950 */

loc_002A4330: ;
    eax = MEM32(0x84A144);
    esp = esp + 8;
    edi++;
    esi = esi + 0x2B0;
    if (CMP_LE(edi, eax)) goto loc_002A4270; /* jle: less or equal (signed <=) */

loc_002A4347: ;
    PUSH32(esp, 0); sub_0029B760(); /* call 0x0029B760 */

loc_002A434C: ;
    MEM32(0x84A148) = ebx;
    PUSH32(esp, 0); sub_002A5980(); /* call 0x002A5980 */

loc_002A4357: ;
    PUSH32(esp, 0); sub_002A5DB0(); /* call 0x002A5DB0 */

loc_002A435C: ;
    (void)0; /* cmp MEM32(0x84A144), ebx - flags set for next jcc */
    MEM32(esp + 0x14) = ebx;
    if (CMP_L(MEM32(0x84A144), ebx)) goto loc_002A4418; /* jl: less (signed <) */

loc_002A436C: ;
    /* nop */

loc_002A4370: ;
    eax = MEM32(esp + 0x14);
    eax = ZX8(MEM8(eax + 0x7F9FF8));
    ecx = MEM32(0x84A13C);
    MEM32(0x84A148) = eax;
    MEM32(esp + 0x10) = eax;
    eax = (uint32_t)((int32_t)eax * (int32_t)0x2B0);
    ebx = MEM32(eax + ecx + 0x144);
    esi = ebx;
    MEM32(0x84B868) = ebx;
    PUSH32(esp, 0); sub_003FB250(); /* call 0x003FB250 */

loc_002A43A4: ;
    SET_LO16(edx, ZX8(MEM8(esp + 0x10)));
    eax = MEM32(0x84A148);
    esi = ebx + 0x10;
    ecx = 0x10;
    edi = 0x81BD30;
    PUSH32(esp, ebx);
    memcpy((void*)XBOX_PTR(edi), (void*)XBOX_PTR(esi), ecx * 4);
    esi += ecx * 4; edi += ecx * 4; ecx = 0; /* rep movsd */
    PUSH32(esp, eax);
    MEM16(0x81BD26) = LO16(edx);
    MEM32(esp + 0x14) = ebx;
    PUSH32(esp, 0); sub_002A5F30(); /* call 0x002A5F30 */

loc_002A43D0: ;
    eax = MEM32(esp + 0x1C);
    ecx = MEM32(0x84A144);
    esp = esp + 8;
    eax++;
    (void)0; /* cmp eax, ecx - flags set for next jcc */
    MEM32(esp + 0x14) = eax;
    if (CMP_LE(eax, ecx)) goto loc_002A4370; /* jle: less or equal (signed <=) */

loc_002A43E6: ;
    goto loc_002A4418;

loc_002A43E8: ;
    if (CMP_L(MEM32(0x84A144), edi)) goto loc_002A4418; /* jl: less (signed <) */

loc_002A43F0: ;
    esi = SX16(LO16(edi));
    eax = esi;
    PUSH32(esp, 0); sub_000FCC90(); /* call 0x000FCC90 */

loc_002A43FA: ;
    if (TEST_NZ(eax, eax)) goto loc_002A440E; /* jne: not equal / not zero */

loc_002A43FE: ;
    SET_LO8(eax, MEM8(0x7FA275));
    if (TEST_NZ(LO8(eax), LO8(eax))) goto loc_002A440E; /* jne: not equal / not zero */

loc_002A4407: ;
    eax = esi;
    PUSH32(esp, 0); sub_000FCD20(); /* call 0x000FCD20 */

loc_002A440E: ;
    eax = MEM32(0x84A144);
    edi++;
    if (CMP_LE(edi, eax)) goto loc_002A43F0; /* jle: less or equal (signed <=) */

loc_002A4418: ;
    SET_LO8(eax, MEM8(0x849748));
    if (TEST_Z(LO8(eax), LO8(eax))) goto loc_002A4426; /* je: equal / zero */

loc_002A4421: ;
    PUSH32(esp, 0); sub_001EB4D0(); /* call 0x001EB4D0 */

loc_002A4426: ;
    PUSH32(esp, 0); sub_00252BB0(); /* call 0x00252BB0 */

loc_002A442B: ;
    SET_LO8(eax, MEM8(0x8496FC));
    if (TEST_Z(LO8(eax), LO8(eax))) goto loc_002A4497; /* je: equal / zero */

loc_002A4434: ;
    xmm0 = (float)(int32_t)MEM32(0x849704); /* cvtsi2ss */
    PUSH32(esp, 7);
    PUSH32(esp, 7);
    PUSH32(esp, 0x42C80000);
    PUSH32(esp, 0x42C80000);
    esp = esp - 8;
    MEMF(esp + 4) = xmm0; /* movss */
    xmm0 = (float)(int32_t)MEM32(0x849700); /* cvtsi2ss */
    MEMF(esp) = xmm0; /* movss */
    PUSH32(esp, 0); sub_001EB210(); /* call 0x001EB210 */

loc_002A4465: ;
    SET_LO8(eax, MEM8(0x7FA275));
    esp = esp + 0x18;
    if (TEST_NZ(LO8(eax), LO8(eax))) goto loc_002A4497; /* jne: not equal / not zero */

loc_002A4471: ;
    edx = MEM32(0x849700);
    ecx = MEM32(0x849708);
    eax = MEM32(0x849704);
    edx = edx + ecx;
    MEM32(0x849700) = edx;
    edx = MEM32(0x84970C);
    eax = eax + edx;
    MEM32(0x849704) = eax;

loc_002A4497: ;
    PUSH32(esp, 0); sub_002A60B0(); /* call 0x002A60B0 */

loc_002A449C: ;
    SET_LO8(eax, MEM8(0x7FA275));
    if (TEST_NZ(LO8(eax), LO8(eax))) goto loc_002A451B; /* jne: not equal / not zero */

loc_002A44A5: ;
    eax = MEM32(0x84A144);
    if (TEST_Z(eax, eax)) goto loc_002A44B3; /* je: equal / zero */

loc_002A44AE: ;
    ebx = eax + 1;
    goto loc_002A44B5;

loc_002A44B3: ;
    ebx = 0; /* xor self */

loc_002A44B5: ;
    ecx = MEM32(0x84A13C);
    eax = ebx;
    eax = (uint32_t)((int32_t)eax * (int32_t)0x2B0);
    esi = MEM32(eax + ecx + 0x144);
    MEM32(0x84B868) = esi;
    PUSH32(esp, 0); sub_003FB250(); /* call 0x003FB250 */

loc_002A44D5: ;
    eax = MEM32(0x84A144);
    esi = esi + 0x10;
    ecx = 0x10;
    edi = 0x81BD30;
    memcpy((void*)XBOX_PTR(edi), (void*)XBOX_PTR(esi), ecx * 4);
    esi += ecx * 4; edi += ecx * 4; ecx = 0; /* rep movsd */
    SET_LO16(edx, ZX8(LO8(ebx)));
    esi = 0; /* xor self */
    (void)0; /* test eax, eax - flags set for next jcc */
    MEM16(0x81BD26) = LO16(edx);
    if (TEST_S(eax, eax)) goto loc_002A451B; /* jl: less (signed <) */

loc_002A44FA: ;
    /* nop */

loc_002A4500: ;
    eax = ZX8(MEM8(esi + 0x7F9FF8));
    MEM32(0x84A148) = eax;
    PUSH32(esp, 0); sub_002A5EB0(); /* call 0x002A5EB0 */

loc_002A4511: ;
    eax = MEM32(0x84A144);
    esi++;
    if (CMP_LE(esi, eax)) goto loc_002A4500; /* jle: less or equal (signed <=) */

loc_002A451B: ;
    SET_LO8(eax, MEM8(0x6BCFE8));
    if (TEST_Z(LO8(eax), LO8(eax))) goto loc_002A4538; /* je: equal / zero */

loc_002A4524: ;
    PUSH32(esp, 0xFFFFFFFFu);
    eax = ZX8(LO8(eax));
    PUSH32(esp, 0);
    PUSH32(esp, 0);
    PUSH32(esp, eax);
    eax = 0; /* xor self */
    PUSH32(esp, 0); sub_000FBC80(); /* call 0x000FBC80 */

loc_002A4535: ;
    esp = esp + 0x10;

loc_002A4538: ;
    ecx = MEM32(0x776574);
    eax = MEM32(ecx * 4 + 0x59B448);
    if (TEST_Z(eax, eax)) goto loc_002A454B; /* je: equal / zero */

loc_002A4549: ;
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, 0); RECOMP_ICALL_SAFE(eax, _icall_esp); /* indirect call */
    }

loc_002A454B: ;
    if (CMP_NE(MEM32(0x7FA1F8), 0x18)) goto loc_002A455E; /* jne: not equal / not zero */

loc_002A4554: ;
    PUSH32(esp, 0);
    PUSH32(esp, 0); sub_001D95D0(); /* call 0x001D95D0 */

loc_002A455B: ;
    esp = esp + 4;

loc_002A455E: ;
    PUSH32(esp, 1);
    PUSH32(esp, 0); sub_001F2BC0(); /* call 0x001F2BC0 */

loc_002A4565: ;
    esp = esp + 4;
    PUSH32(esp, 0); sub_003F5A20(); /* call 0x003F5A20 */

loc_002A456D: ;
    SET_LO8(eax, MEM8(0x84A118));
    if (TEST_Z(LO8(eax), LO8(eax))) { sub_002A45B5(); return; } /* je: equal / zero */

loc_002A4576: ;
    PUSH32(esp, 0xFF);
    PUSH32(esp, 0);
    PUSH32(esp, 0);
    PUSH32(esp, 0);
    PUSH32(esp, 0x44FA0000);
    PUSH32(esp, 0x44FA0000);
    PUSH32(esp, 0xC2C80000u);
    PUSH32(esp, 0xC2C80000u);
    PUSH32(esp, 0); sub_003585F0(); /* call 0x003585F0 */

loc_002A459A: ;
    esp = esp + 0x20;
    MEM8(0x84A118) = 0;
    MEM32(0x84A11C) = 1;
    POP32(esp, edi);
    POP32(esp, esi);
    POP32(esp, ebx);
    esp = ebp;
    POP32(esp, ebp);
    esp += 4; return; /* ret */

}

/**
 * sub_002A45D0
 * Original: 0x002A45D0 - 0x002A4605 (53 bytes, 11 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_002A45D0(void)
{
    int _flags = 0; /* fallback flag var */
    float xmm0;

loc_002A45D0: ;
    PUSH32(esp, 0); sub_001F2FF0(); /* call 0x001F2FF0 */

loc_002A45D5: ;
    PUSH32(esp, 0); sub_0029BA00(); /* call 0x0029BA00 */

loc_002A45DA: ;
    ecx = MEM32(0x84B360);
    xmm0 = MEMF(0x75A8B4); /* movss */
    xmm0 = xmm0 + MEMF(0x7FA21C); /* addss */
    eax = 0; /* xor self */
    (void)0; /* test ecx, ecx - flags set for next jcc */
    SET_LO8(eax, (TEST_Z(ecx, ecx)) ? 1 : 0); /* sete */
    MEMF(0x75A8B4) = xmm0; /* movss */
    MEM32(0x84B360) = eax;
    esp += 4; return; /* ret */

}

/**
 * sub_002A4610
 * Original: 0x002A4610 - 0x002A47E8 (472 bytes, 101 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_002A4610(void)
{
    int _flags = 0; /* fallback flag var */
    float xmm0;

loc_002A4610: ;
    PUSH32(esp, ecx);
    PUSH32(esp, ebx);
    ebx = 0; /* xor self */
    PUSH32(esp, esi);
    MEM8(0x7819D1) = LO8(ebx);
    MEM32(0x7FA1C8) = ebx;
    MEM32(0x7FA1CC) = ebx;
    MEM32(0x7FA1C0) = ebx;
    MEM32(0x7FA1C4) = ebx;
    MEM32(0x7FA180) = ebx;
    MEM32(0x7FA184) = ebx;
    MEM32(0x7FA160) = ebx;
    MEM32(0x7FA164) = ebx;
    MEM32(0x7FA158) = ebx;
    MEM32(0x7FA15C) = ebx;
    MEM32(0x7FA1B8) = ebx;
    MEM32(0x7FA1BC) = ebx;
    MEM32(0x7FA1B0) = ebx;
    MEM32(0x7FA1B4) = ebx;
    MEM32(0x7FA1A8) = ebx;
    MEM32(0x7FA1AC) = ebx;
    MEM32(0x7FA1A0) = ebx;
    MEM32(0x7FA1A4) = ebx;
    MEM32(0x7FA140) = ebx;
    MEM32(0x7FA144) = ebx;
    MEM32(0x7FA138) = ebx;
    MEM32(0x7FA13C) = ebx;
    MEM32(0x7FA130) = ebx;
    MEM32(0x7FA134) = ebx;
    MEM32(0x7FA128) = ebx;
    MEM32(0x7FA12C) = ebx;
    MEM32(0x7FA000) = ebx;
    MEM32(0x7FA004) = ebx;
    MEM32(0x7819D8) = ebx;
    MEM32(0x7819DC) = ebx;
    MEM32(0x771B70) = ebx;
    MEM32(0x771B74) = ebx;
    PUSH32(esp, 0); sub_004281B0(); /* call 0x004281B0 */

loc_002A46E0: ;
    eax = MEM32(0x863D04);
    esi = 1;
    if (CMP_EQ(eax, esi)) goto loc_002A4757; /* je: equal / zero */

loc_002A46EE: ;
    PUSH32(esp, 0x84C234);
    PUSH32(esp, 0x84C230);
    PUSH32(esp, 0x558344);
    PUSH32(esp, 0); sub_0055A539(); /* call 0x0055A539 */

loc_002A4702: ;
    if (TEST_Z(eax, eax)) goto loc_002A4722; /* je: equal / zero */

loc_002A4706: ;
    eax = MEM32(0x84C234);
    edx = MEM32(0x84C22C);
    ecx = MEM32(0x84C230);
    eax = ~eax;
    eax = eax & edx;
    eax = eax | ecx;
    MEM32(0x84C22C) = eax;

loc_002A4722: ;
    PUSH32(esp, 0x84C240);
    PUSH32(esp, 0x84C23C);
    PUSH32(esp, 0x558350);
    PUSH32(esp, 0); sub_0055A539(); /* call 0x0055A539 */

loc_002A4736: ;
    if (TEST_Z(eax, eax)) goto loc_002A4757; /* je: equal / zero */

loc_002A473A: ;
    ecx = MEM32(0x84C240);
    edx = MEM32(0x84C238);
    eax = MEM32(0x84C23C);
    ecx = ~ecx;
    ecx = ecx & edx;
    ecx = ecx | eax;
    MEM32(0x84C238) = ecx;

loc_002A4757: ;
    PUSH32(esp, 0); sub_004162F0(); /* call 0x004162F0 */

loc_002A475C: ;
    PUSH32(esp, 0); sub_002A6190(); /* call 0x002A6190 */

loc_002A4761: ;
    PUSH32(esp, 0); sub_00268820(); /* call 0x00268820 */

loc_002A4766: ;
    PUSH32(esp, 0); sub_0004CE80(); /* call 0x0004CE80 */

loc_002A476B: ;
    if (CMP_EQ(MEM32(0x84B284), ebx)) goto loc_002A4799; /* je: equal / zero */

loc_002A4773: ;
    eax = MEM32(0x84B27C);
    edx = MEM32(0x84B280);
    MEM32(0x84B280) = eax;
    SET_LO8(eax, MEM8(0x801893));
    MEM32(0x84B27C) = edx;
    MEM8(0x801892) = LO8(eax);
    MEM8(0x801893) = LO8(ebx);

loc_002A4799: ;
    if (CMP_EQ(MEM32(0x774A90), ebx)) goto loc_002A47A6; /* je: equal / zero */

loc_002A47A1: ;
    PUSH32(esp, 0); sub_00149DE0(); /* call 0x00149DE0 */

loc_002A47A6: ;
    if (CMP_EQ(MEM8(0x7819D6), LO8(ebx))) { sub_002A47E8(); return; } /* je: equal / zero */

loc_002A47AE: ;
    PUSH32(esp, 0); sub_001F2FF0(); /* call 0x001F2FF0 */

loc_002A47B3: ;
    PUSH32(esp, 0); sub_0029BA00(); /* call 0x0029BA00 */

loc_002A47B8: ;
    eax = MEM32(0x84B360);
    xmm0 = MEMF(0x75A8B4); /* movss */
    xmm0 = xmm0 + MEMF(0x7FA21C); /* addss */
    ecx = 0; /* xor self */
    (void)0; /* cmp eax, ebx - flags set for next jcc */
    SET_LO8(ecx, (CMP_EQ(eax, ebx)) ? 1 : 0); /* sete */
    POP32(esp, esi);
    MEMF(0x75A8B4) = xmm0; /* movss */
    eax = 0; /* xor self */
    POP32(esp, ebx);
    MEM32(0x84B360) = ecx;
    POP32(esp, ecx);
    esp += 4; return; /* ret */

}

/**
 * sub_002A4E10
 * Original: 0x002A4E10 - 0x002A4ECD (189 bytes, 52 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_002A4E10(void)
{
    uint32_t ebp;
    int _flags = 0; /* fallback flag var */
    float xmm0;
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_002A4E10: ;
    PUSH32(esp, ecx);
    PUSH32(esp, 0); sub_003C2CE0(); /* call 0x003C2CE0 */

loc_002A4E16: ;
    PUSH32(esp, 0); sub_002F6170(); /* call 0x002F6170 */

loc_002A4E1B: ;
    PUSH32(esp, 0); sub_002CAD40(); /* call 0x002CAD40 */

loc_002A4E20: ;
    SET_LO8(eax, MEM8(0x7FA23C));
    (void)0; /* test LO8(eax), LO8(eax) - flags set for next jcc */
    xmm0 = 0.0f; /* xorps self = zero */
    if (TEST_NZ(LO8(eax), LO8(eax))) goto loc_002A4E34; /* jne: not equal / not zero */

loc_002A4E2C: ;
    xmm0 = MEMF(0x7F9F4C); /* movss */

loc_002A4E34: ;
    MEMF(esp) = xmm0; /* movss */
    eax = MEM32(esp);
    PUSH32(esp, eax);
    PUSH32(esp, 0); sub_0030F480(); /* call 0x0030F480 */

loc_002A4E42: ;
    eax = MEM32(0x8472A0);
    esp = esp + 4;
    if (TEST_NZ(eax, eax)) goto loc_002A4EAC; /* jne: not equal / not zero */

loc_002A4E4E: ;
    SET_LO8(eax, MEM8(0x7FA275));
    if (TEST_NZ(LO8(eax), LO8(eax))) goto loc_002A4EC0; /* jne: not equal / not zero */

loc_002A4E57: ;
    SET_LO8(eax, MEM8(0x76F0E0));
    PUSH32(esp, ebx);
    ebx = 1;
    if (CMP_EQ(LO8(eax), LO8(ebx))) goto loc_002A4E76; /* je: equal / zero */

loc_002A4E66: ;
    SET_LO8(eax, MEM8(0x76EC82));
    if (TEST_NZ(LO8(eax), LO8(eax))) goto loc_002A4E76; /* jne: not equal / not zero */

loc_002A4E6F: ;
    PUSH32(esp, 0); sub_002D3370(); /* call 0x002D3370 */

loc_002A4E74: ;
    goto loc_002A4E7B;

loc_002A4E76: ;
    PUSH32(esp, 0); sub_00054A00(); /* call 0x00054A00 */

loc_002A4E7B: ;
    if (TEST_NZ(MEM8(0x876758), LO8(ebx))) goto loc_002A4E93; /* jne: not equal / not zero */

loc_002A4E83: ;
    MEM32(0x876758) = MEM32(0x876758) | ebx;
    eax = 0x8761E8;
    PUSH32(esp, 0); sub_00265DE0(); /* call 0x00265DE0 */

loc_002A4E93: ;
    ebx = MEM32(0x876474);
    PUSH32(esp, 0); sub_0032D190(); /* call 0x0032D190 */

loc_002A4E9E: ;
    POP32(esp, ebx);
    PUSH32(esp, 0); sub_003015B0(); /* call 0x003015B0 */

loc_002A4EA4: ;
    esp = esp + 4;
    g_seh_ebp = ebp; sub_002CB8A0(); return; /* tail jmp 0x002CB8A0 */

loc_002A4EAC: ;
    if (CMP_EQ(eax, 0xD)) goto loc_002A4EBB; /* je: equal / zero */

loc_002A4EB1: ;
    if (CMP_EQ(eax, 5)) goto loc_002A4EBB; /* je: equal / zero */

loc_002A4EB6: ;
    if (CMP_NE(eax, 9)) goto loc_002A4EC0; /* jne: not equal / not zero */

loc_002A4EBB: ;
    PUSH32(esp, 0); sub_00054A00(); /* call 0x00054A00 */

loc_002A4EC0: ;
    PUSH32(esp, 0); sub_003015B0(); /* call 0x003015B0 */

loc_002A4EC5: ;
    esp = esp + 4;
    g_seh_ebp = ebp; sub_002CB8A0(); return; /* tail jmp 0x002CB8A0 */

}

/**
 * sub_002A4ED0
 * Original: 0x002A4ED0 - 0x002A5029 (345 bytes, 109 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_002A4ED0(void)
{
    uint32_t ebp;
    int _flags = 0; /* fallback flag var */
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_002A4ED0: ;
    esp = esp - 0x14;
    PUSH32(esp, ebx);
    PUSH32(esp, ebp);
    ebx = 0; /* xor self */
    PUSH32(esp, esi);
    ecx = 0; /* xor self */
    PUSH32(esp, edi);
    MEM32(esp + 0x10) = ecx;
    /* nop */

loc_002A4EE0: ;
    eax = MEM32(0x84A5FC);
    if (CMP_EQ(MEM8(eax + ebx), 0)) goto loc_002A4F8B; /* je: equal / zero */

loc_002A4EEF: ;
    edx = MEM32(0x84A5F8);
    ebp = MEM32(ecx + edx + 0x64);
    (void)0; /* test ebp, ebp - flags set for next jcc */
    esi = ecx + edx;
    if (TEST_Z(ebp, ebp)) goto loc_002A4F8B; /* je: equal / zero */

loc_002A4F04: ;
    SET_LO8(eax, MEM8(esi + 0xA1));
    if (CMP_EQ(LO8(eax), 3)) goto loc_002A4F8B; /* je: equal / zero */

loc_002A4F0E: ;
    if (CMP_EQ(LO8(eax), 5)) goto loc_002A4F8B; /* je: equal / zero */

loc_002A4F12: ;
    if (CMP_EQ(LO8(eax), 2)) goto loc_002A4F8B; /* je: equal / zero */

loc_002A4F16: ;
    if (CMP_EQ(MEM32(esi + 0x68), 0xFFFF)) goto loc_002A4F8B; /* je: equal / zero */

loc_002A4F1F: ;
    if (CMP_EQ(LO8(eax), 7)) goto loc_002A4F8B; /* je: equal / zero */

loc_002A4F23: ;
    if (CMP_EQ(LO8(eax), 9)) goto loc_002A4F8B; /* je: equal / zero */

loc_002A4F27: ;
    if (CMP_EQ(LO8(eax), 1)) goto loc_002A4F8B; /* je: equal / zero */

loc_002A4F2B: ;
    (void)0; /* cmp LO8(eax), 0xA - flags set for next jcc */
    edi = MEM32(esp + 0x28);
    if (CMP_NE(LO8(eax), 0xA)) goto loc_002A4F48; /* jne: not equal / not zero */

loc_002A4F33: ;
    edx = SX16(LO16(edi));
    edx = edx + ecx;
    ecx = MEM32(0x84A5F8);
    if (CMP_B(MEM8(edx + ecx + 0xC7), 0xFF)) goto loc_002A4F8B; /* jb: below (unsigned <) */

loc_002A4F48: ;
    if (TEST_Z(LO8(eax), LO8(eax))) goto loc_002A4F8B; /* je: equal / zero */

loc_002A4F4C: ;
    eax = esi;
    PUSH32(esp, 0); sub_00082260(); /* call 0x00082260 */

loc_002A4F53: ;
    if (TEST_NZ(LO8(eax), LO8(eax))) goto loc_002A4F8B; /* jne: not equal / not zero */

loc_002A4F57: ;
    eax = esi;
    PUSH32(esp, 0); sub_002C38A0(); /* call 0x002C38A0 */

loc_002A4F5E: ;
    if (CMP_EQ(LO8(eax), 1)) goto loc_002A4F8B; /* je: equal / zero */

loc_002A4F62: ;
    (void)0; /* cmp ebp, 0x10 - flags set for next jcc */
    eax = SX16(LO16(edi));
    if (CMP_EQ(ebp, 0x10)) goto loc_002A4F80; /* je: equal / zero */

loc_002A4F6A: ;
    ecx = eax;
    edx = 1;
    edx = edx << LO8(ecx);
    ecx = ZX8(MEM8(esi + 0x16E));
    ecx = ecx & edx;
    if (CMP_EQ(ecx, edx)) goto loc_002A4F8B; /* je: equal / zero */

loc_002A4F80: ;
    PUSH32(esp, 0xC);
    PUSH32(esp, ebx);
    PUSH32(esp, 0); sub_0007F4D0(); /* call 0x0007F4D0 */

loc_002A4F88: ;
    esp = esp + 8;

loc_002A4F8B: ;
    ecx = MEM32(esp + 0x10);
    ecx = ecx + 0x6D0;
    ebx++;
    (void)0; /* cmp ecx, 0x36800 - flags set for next jcc */
    MEM32(esp + 0x10) = ecx;
    if (CMP_L(ecx, 0x36800)) goto loc_002A4EE0; /* jl: less (signed <) */

loc_002A4FA6: ;
    edi = MEM32(esp + 0x28);
    PUSH32(esp, edi);
    PUSH32(esp, 0); sub_00393310(); /* call 0x00393310 */

loc_002A4FB0: ;
    edx = MEM32(0x771B78);
    esi = SX16(LO16(edi));
    esp = esp + 4;
    PUSH32(esp, edx);
    eax = esi;
    ecx = 0; /* xor self */
    PUSH32(esp, 0); sub_000EC8F0(); /* call 0x000EC8F0 */

loc_002A4FC6: ;
    eax = MEM32(0x771B78);
    PUSH32(esp, eax);
    eax = esi;
    ecx = 1;
    PUSH32(esp, 0); sub_000EC8F0(); /* call 0x000EC8F0 */

loc_002A4FD8: ;
    ecx = MEM32(0x771B78);
    PUSH32(esp, ecx);
    eax = esi;
    ecx = 2;
    PUSH32(esp, 0); sub_000EC8F0(); /* call 0x000EC8F0 */

loc_002A4FEB: ;
    edx = MEM32(0x771B78);
    PUSH32(esp, edx);
    eax = esi;
    ecx = 3;
    PUSH32(esp, 0); sub_000EC8F0(); /* call 0x000EC8F0 */

loc_002A4FFE: ;
    eax = MEM32(0x771B78);
    PUSH32(esp, eax);
    eax = esi;
    ecx = 4;
    PUSH32(esp, 0); sub_000EC8F0(); /* call 0x000EC8F0 */

loc_002A5010: ;
    PUSH32(esp, 1);
    PUSH32(esp, edi);
    PUSH32(esp, 1);
    PUSH32(esp, 0); sub_0007E4E0(); /* call 0x0007E4E0 */

loc_002A501A: ;
    esp = esp + 0xC;
    edi = 0; /* xor self */
    MEM32(esp + 0x10) = edi;
    MEM32(esp + 0x14) = edi;
    g_seh_ebp = ebp; sub_002A5030(); return; /* tail jmp 0x002A5030 */

}

/**
 * sub_002A5310
 * Original: 0x002A5310 - 0x002A569E (910 bytes, 261 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_002A5310(void)
{
    uint32_t ebp;
    int _flags = 0; /* fallback flag var */
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_002A5310: ;
    esp = esp - 0x10;
    PUSH32(esp, ebx);
    PUSH32(esp, ebp);
    ebx = 0; /* xor self */
    PUSH32(esp, esi);
    ecx = 0; /* xor self */
    PUSH32(esp, edi);
    MEM32(esp + 0x10) = ecx;
    /* nop */

loc_002A5320: ;
    eax = MEM32(0x84A5FC);
    if (CMP_EQ(MEM8(eax + ebx), 0)) goto loc_002A53CB; /* je: equal / zero */

loc_002A532F: ;
    edx = MEM32(0x84A5F8);
    ebp = MEM32(ecx + edx + 0x64);
    (void)0; /* test ebp, ebp - flags set for next jcc */
    esi = ecx + edx;
    if (TEST_Z(ebp, ebp)) goto loc_002A53CB; /* je: equal / zero */

loc_002A5344: ;
    SET_LO8(eax, MEM8(esi + 0xA1));
    if (CMP_EQ(LO8(eax), 3)) goto loc_002A53CB; /* je: equal / zero */

loc_002A534E: ;
    if (CMP_EQ(LO8(eax), 5)) goto loc_002A53CB; /* je: equal / zero */

loc_002A5352: ;
    if (CMP_EQ(LO8(eax), 2)) goto loc_002A53CB; /* je: equal / zero */

loc_002A5356: ;
    if (CMP_EQ(MEM32(esi + 0x68), 0xFFFF)) goto loc_002A53CB; /* je: equal / zero */

loc_002A535F: ;
    if (CMP_EQ(LO8(eax), 7)) goto loc_002A53CB; /* je: equal / zero */

loc_002A5363: ;
    if (CMP_EQ(LO8(eax), 9)) goto loc_002A53CB; /* je: equal / zero */

loc_002A5367: ;
    if (CMP_EQ(LO8(eax), 1)) goto loc_002A53CB; /* je: equal / zero */

loc_002A536B: ;
    (void)0; /* cmp LO8(eax), 0xA - flags set for next jcc */
    edi = MEM32(esp + 0x24);
    if (CMP_NE(LO8(eax), 0xA)) goto loc_002A5388; /* jne: not equal / not zero */

loc_002A5373: ;
    edx = SX16(LO16(edi));
    edx = edx + ecx;
    ecx = MEM32(0x84A5F8);
    if (CMP_B(MEM8(edx + ecx + 0xC7), 0xFF)) goto loc_002A53CB; /* jb: below (unsigned <) */

loc_002A5388: ;
    if (TEST_Z(LO8(eax), LO8(eax))) goto loc_002A53CB; /* je: equal / zero */

loc_002A538C: ;
    eax = esi;
    PUSH32(esp, 0); sub_00082260(); /* call 0x00082260 */

loc_002A5393: ;
    if (TEST_Z(LO8(eax), LO8(eax))) goto loc_002A53CB; /* je: equal / zero */

loc_002A5397: ;
    eax = esi;
    PUSH32(esp, 0); sub_002C38A0(); /* call 0x002C38A0 */

loc_002A539E: ;
    if (CMP_EQ(LO8(eax), 1)) goto loc_002A53CB; /* je: equal / zero */

loc_002A53A2: ;
    (void)0; /* cmp ebp, 0x10 - flags set for next jcc */
    eax = SX16(LO16(edi));
    if (CMP_EQ(ebp, 0x10)) goto loc_002A53C0; /* je: equal / zero */

loc_002A53AA: ;
    ecx = eax;
    edx = 1;
    edx = edx << LO8(ecx);
    ecx = ZX8(MEM8(esi + 0x16E));
    ecx = ecx & edx;
    if (CMP_EQ(ecx, edx)) goto loc_002A53CB; /* je: equal / zero */

loc_002A53C0: ;
    PUSH32(esp, 0xC);
    PUSH32(esp, ebx);
    PUSH32(esp, 0); sub_0007F4D0(); /* call 0x0007F4D0 */

loc_002A53C8: ;
    esp = esp + 8;

loc_002A53CB: ;
    ecx = MEM32(esp + 0x10);
    ecx = ecx + 0x6D0;
    ebx++;
    (void)0; /* cmp ecx, 0x36800 - flags set for next jcc */
    MEM32(esp + 0x10) = ecx;
    if (CMP_L(ecx, 0x36800)) goto loc_002A5320; /* jl: less (signed <) */

loc_002A53E6: ;
    edx = MEM32(esp + 0x24);
    PUSH32(esp, 0);
    PUSH32(esp, edx);
    PUSH32(esp, 1);
    PUSH32(esp, 0); sub_0007E4E0(); /* call 0x0007E4E0 */

loc_002A53F4: ;
    esp = esp + 0xC;
    ebp = 0; /* xor self */
    esi = 0; /* xor self */
    MEM32(esp + 0x10) = esi;
    /* nop */

loc_002A5400: ;
    eax = MEM32(0x84A5FC);
    if (CMP_EQ(MEM8(eax + ebp), 0)) goto loc_002A5506; /* je: equal / zero */

loc_002A540F: ;
    ecx = MEM32(0x84A5F8);
    edi = MEM32(esi + ecx + 0x64);
    esi = esi + ecx;
    if (TEST_Z(edi, edi)) goto loc_002A5506; /* je: equal / zero */

loc_002A5423: ;
    SET_LO8(ebx, MEM8(esi + 0xA1));
    if (CMP_EQ(LO8(ebx), 3)) goto loc_002A5506; /* je: equal / zero */

loc_002A5432: ;
    if (CMP_EQ(LO8(ebx), 5)) goto loc_002A5506; /* je: equal / zero */

loc_002A543B: ;
    if (CMP_EQ(LO8(ebx), 2)) goto loc_002A5506; /* je: equal / zero */

loc_002A5444: ;
    if (CMP_EQ(MEM32(esi + 0x68), 0xFFFF)) goto loc_002A5506; /* je: equal / zero */

loc_002A5451: ;
    eax = esi;
    PUSH32(esp, 0); sub_00082260(); /* call 0x00082260 */

loc_002A5458: ;
    if (TEST_Z(LO8(eax), LO8(eax))) goto loc_002A5506; /* je: equal / zero */

loc_002A5460: ;
    if (CMP_EQ(LO8(ebx), 7)) goto loc_002A5506; /* je: equal / zero */

loc_002A5469: ;
    if (CMP_EQ(LO8(ebx), 9)) goto loc_002A5506; /* je: equal / zero */

loc_002A5472: ;
    eax = esi;
    PUSH32(esp, 0); sub_002C38A0(); /* call 0x002C38A0 */

loc_002A5479: ;
    if (CMP_EQ(LO8(eax), 1)) goto loc_002A5506; /* je: equal / zero */

loc_002A5481: ;
    if (CMP_NE(edi, 0x10)) goto loc_002A5495; /* jne: not equal / not zero */

loc_002A5486: ;
    eax = (uint32_t)(int32_t)SMEM16(esp + 0x24);
    PUSH32(esp, 9);
    PUSH32(esp, ebp);
    PUSH32(esp, 0); sub_0007F4D0(); /* call 0x0007F4D0 */

loc_002A5493: ;
    goto loc_002A5503;

loc_002A5495: ;
    edi = (uint32_t)(int32_t)SMEM16(esp + 0x24);
    edx = ZX8(MEM8(esi + 0x16E));
    eax = 1;
    ecx = edi;
    eax = eax << LO8(ecx);
    edx = edx & eax;
    if (CMP_EQ(edx, eax)) goto loc_002A5506; /* je: equal / zero */

loc_002A54B0: ;
    esi = esi + 0x90;
    eax = MEM32(esi);
    ecx = MEM32(esi + 4);
    edx = MEM32(esi + 8);
    MEM32(esp + 0x14) = eax;
    eax = 0x14;
    MEM32(esp + 0x18) = ecx;
    MEM32(esp + 0x1C) = edx;
    PUSH32(esp, 0); sub_000768D0(); /* call 0x000768D0 */

loc_002A54D4: ;
    if (TEST_Z(eax, eax)) goto loc_002A54F4; /* je: equal / zero */

loc_002A54D8: ;
    MEM32(eax + 4) = 0;
    MEM32(eax) = 0x5EA260;
    MEM32(eax + 8) = ebp;
    MEM32(eax + 0xC) = edi;
    MEM32(eax + 0x10) = 9;
    goto loc_002A54F6;

loc_002A54F4: ;
    eax = 0; /* xor self */

loc_002A54F6: ;
    PUSH32(esp, eax);
    eax = esp + 0x18;
    PUSH32(esp, eax);
    eax = edi;
    PUSH32(esp, 0); sub_0007E490(); /* call 0x0007E490 */

loc_002A5503: ;
    esp = esp + 8;

loc_002A5506: ;
    esi = MEM32(esp + 0x10);
    esi = esi + 0x6D0;
    ebp++;
    (void)0; /* cmp esi, 0x36800 - flags set for next jcc */
    MEM32(esp + 0x10) = esi;
    if (CMP_L(esi, 0x36800)) goto loc_002A5400; /* jl: less (signed <) */

loc_002A5521: ;
    ebp = 0; /* xor self */
    edi = 0; /* xor self */
    MEM32(esp + 0x10) = edi;
    /* nop */

loc_002A5530: ;
    ecx = MEM32(0x84A5FC);
    if (CMP_EQ(MEM8(ecx + ebp), 0)) goto loc_002A5656; /* je: equal / zero */

loc_002A5540: ;
    edx = MEM32(0x84A5F8);
    esi = MEM32(edi + edx + 0x64);
    edi = edi + edx;
    if (TEST_Z(esi, esi)) goto loc_002A5656; /* je: equal / zero */

loc_002A5554: ;
    SET_LO8(ebx, MEM8(edi + 0xA1));
    if (CMP_EQ(LO8(ebx), 3)) goto loc_002A5656; /* je: equal / zero */

loc_002A5563: ;
    if (CMP_EQ(LO8(ebx), 5)) goto loc_002A5656; /* je: equal / zero */

loc_002A556C: ;
    if (CMP_EQ(LO8(ebx), 2)) goto loc_002A55A2; /* je: equal / zero */

loc_002A5571: ;
    if (CMP_EQ(MEM32(edi + 0x68), 0xFFFF)) goto loc_002A5656; /* je: equal / zero */

loc_002A557E: ;
    if (CMP_EQ(LO8(ebx), 2)) goto loc_002A55A2; /* je: equal / zero */

loc_002A5583: ;
    if (CMP_EQ(LO8(ebx), 7)) goto loc_002A5656; /* je: equal / zero */

loc_002A558C: ;
    if (CMP_EQ(LO8(ebx), 9)) goto loc_002A5656; /* je: equal / zero */

loc_002A5595: ;
    if (TEST_Z(LO8(ebx), LO8(ebx))) goto loc_002A55A2; /* je: equal / zero */

loc_002A5599: ;
    if (CMP_NE(LO8(ebx), 1)) goto loc_002A5656; /* jne: not equal / not zero */

loc_002A55A2: ;
    eax = edi;
    PUSH32(esp, 0); sub_00082260(); /* call 0x00082260 */

loc_002A55A9: ;
    if (TEST_Z(LO8(eax), LO8(eax))) goto loc_002A5656; /* je: equal / zero */

loc_002A55B1: ;
    eax = edi;
    PUSH32(esp, 0); sub_002C38A0(); /* call 0x002C38A0 */

loc_002A55B8: ;
    if (CMP_EQ(LO8(eax), 1)) goto loc_002A5656; /* je: equal / zero */

loc_002A55C0: ;
    if (CMP_NE(LO8(ebx), 2)) goto loc_002A55D1; /* jne: not equal / not zero */

loc_002A55C5: ;
    ecx = ebp;
    PUSH32(esp, 0); sub_0007F060(); /* call 0x0007F060 */

loc_002A55CC: ;
    goto loc_002A5656;

loc_002A55D1: ;
    if (CMP_NE(esi, 0x10)) goto loc_002A55E5; /* jne: not equal / not zero */

loc_002A55D6: ;
    eax = (uint32_t)(int32_t)SMEM16(esp + 0x24);
    PUSH32(esp, 2);
    PUSH32(esp, ebp);
    PUSH32(esp, 0); sub_0007F4D0(); /* call 0x0007F4D0 */

loc_002A55E3: ;
    goto loc_002A5653;

loc_002A55E5: ;
    esi = (uint32_t)(int32_t)SMEM16(esp + 0x24);
    ecx = esi;
    eax = 1;
    eax = eax << LO8(ecx);
    ecx = ZX8(MEM8(edi + 0x16E));
    ecx = ecx & eax;
    if (CMP_EQ(ecx, eax)) goto loc_002A5656; /* je: equal / zero */

loc_002A5600: ;
    edi = edi + 0x90;
    edx = MEM32(edi);
    eax = MEM32(edi + 4);
    ecx = MEM32(edi + 8);
    MEM32(esp + 0x18) = eax;
    eax = 0x14;
    MEM32(esp + 0x14) = edx;
    MEM32(esp + 0x1C) = ecx;
    PUSH32(esp, 0); sub_000768D0(); /* call 0x000768D0 */

loc_002A5624: ;
    if (TEST_Z(eax, eax)) goto loc_002A5644; /* je: equal / zero */

loc_002A5628: ;
    MEM32(eax + 4) = 0;
    MEM32(eax) = 0x5EA260;
    MEM32(eax + 8) = ebp;
    MEM32(eax + 0xC) = esi;
    MEM32(eax + 0x10) = 2;
    goto loc_002A5646;

loc_002A5644: ;
    eax = 0; /* xor self */

loc_002A5646: ;
    PUSH32(esp, eax);
    edx = esp + 0x18;
    PUSH32(esp, edx);
    eax = esi;
    PUSH32(esp, 0); sub_0007E490(); /* call 0x0007E490 */

loc_002A5653: ;
    esp = esp + 8;

loc_002A5656: ;
    edi = MEM32(esp + 0x10);
    edi = edi + 0x6D0;
    ebp++;
    (void)0; /* cmp edi, 0x36800 - flags set for next jcc */
    MEM32(esp + 0x10) = edi;
    if (CMP_L(edi, 0x36800)) goto loc_002A5530; /* jl: less (signed <) */

loc_002A5671: ;
    ebx = (uint32_t)(int32_t)SMEM16(esp + 0x24);
    PUSH32(esp, 0);
    PUSH32(esp, 1);
    PUSH32(esp, 0); sub_00077CF0(); /* call 0x00077CF0 */

loc_002A567F: ;
    PUSH32(esp, 0);
    PUSH32(esp, ebx);
    PUSH32(esp, 0); sub_0008E7E0(); /* call 0x0008E7E0 */

loc_002A5687: ;
    eax = MEM32(esp + 0x34);
    PUSH32(esp, eax);
    PUSH32(esp, 1);
    PUSH32(esp, 0); sub_000D9950(); /* call 0x000D9950 */

loc_002A5693: ;
    esp = esp + 0x18;
    POP32(esp, edi);
    POP32(esp, esi);
    POP32(esp, ebp);
    POP32(esp, ebx);
    esp = esp + 0x10;
    esp += 4; return; /* ret */

}

/**
 * sub_002A56A0
 * Original: 0x002A56A0 - 0x002A5976 (726 bytes, 200 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_002A56A0(void)
{
    int _flags = 0; /* fallback flag var */

loc_002A56A0: ;
    SET_LO8(eax, MEM8(0x76EC82));
    if (TEST_NZ(LO8(eax), LO8(eax))) goto loc_002A56BA; /* jne: not equal / not zero */

loc_002A56A9: ;
    PUSH32(esp, 0);
    PUSH32(esp, 0); sub_0035D440(); /* call 0x0035D440 */

loc_002A56B0: ;
    PUSH32(esp, 4);
    PUSH32(esp, 0); sub_0035D520(); /* call 0x0035D520 */

loc_002A56B7: ;
    esp = esp + 8;

loc_002A56BA: ;
    PUSH32(esp, ebx);
    PUSH32(esp, esi);
    PUSH32(esp, edi);
    esi = 0; /* xor self */
    MEM8(0x773CD0) = 0;
    PUSH32(esp, 0); sub_000501F0(); /* call 0x000501F0 */

loc_002A56CB: ;
    MEM8(0x770DF8) = 0;
    PUSH32(esp, 0); sub_000646A0(); /* call 0x000646A0 */

loc_002A56D7: ;
    PUSH32(esp, 0); sub_000693D0(); /* call 0x000693D0 */

loc_002A56DC: ;
    SET_LO8(eax, MEM8(0x7FA275));
    if (TEST_NZ(LO8(eax), LO8(eax))) goto loc_002A56F8; /* jne: not equal / not zero */

loc_002A56E5: ;
    PUSH32(esp, 0); sub_00068C70(); /* call 0x00068C70 */

loc_002A56EA: ;
    SET_LO8(eax, MEM8(0x7FA275));
    if (TEST_NZ(LO8(eax), LO8(eax))) goto loc_002A56F8; /* jne: not equal / not zero */

loc_002A56F3: ;
    PUSH32(esp, 0); sub_0006A600(); /* call 0x0006A600 */

loc_002A56F8: ;
    PUSH32(esp, 0); sub_00353FE0(); /* call 0x00353FE0 */

loc_002A56FD: ;
    edi = MEM32(0x77A5AC);
    if (TEST_Z(edi, edi)) goto loc_002A5715; /* je: equal / zero */

loc_002A5707: ;
    esi = MEM32(edi + 4);
    PUSH32(esp, 0); sub_00282CC0(); /* call 0x00282CC0 */

loc_002A570F: ;
    (void)0; /* test esi, esi - flags set for next jcc */
    edi = esi;
    if (TEST_NZ(esi, esi)) goto loc_002A5707; /* jne: not equal / not zero */

loc_002A5715: ;
    PUSH32(esp, 0); sub_002A4E10(); /* call 0x002A4E10 */

loc_002A571A: ;
    PUSH32(esp, 0); sub_001A76B0(); /* call 0x001A76B0 */

loc_002A571F: ;
    PUSH32(esp, 0);
    PUSH32(esp, 1);
    PUSH32(esp, 0); sub_00056050(); /* call 0x00056050 */

loc_002A5728: ;
    PUSH32(esp, 0);
    PUSH32(esp, 0); sub_00050D10(); /* call 0x00050D10 */

loc_002A572F: ;
    PUSH32(esp, 0);
    PUSH32(esp, 0);
    PUSH32(esp, 0); sub_00056050(); /* call 0x00056050 */

loc_002A5738: ;
    PUSH32(esp, 0);
    PUSH32(esp, 0); sub_00052B50(); /* call 0x00052B50 */

loc_002A573F: ;
    esp = esp + 0x18;
    eax = 0; /* xor self */
    PUSH32(esp, 0); sub_00050160(); /* call 0x00050160 */

loc_002A5749: ;
    SET_LO8(eax, MEM8(0x801324));
    if (TEST_Z(LO8(eax), LO8(eax))) goto loc_002A5757; /* je: equal / zero */

loc_002A5752: ;
    PUSH32(esp, 0); sub_0034CD80(); /* call 0x0034CD80 */

loc_002A5757: ;
    PUSH32(esp, 0); sub_0003C500(); /* call 0x0003C500 */

loc_002A575C: ;
    eax = MEM32(0x8470DC);
    eax = MEM32(eax + 4);
    SET_LO8(ecx, MEM8(0x8493C0));
    SET_LO8(eax, MEM8(eax + 0x8C2));
    (void)0; /* cmp LO8(ecx), LO8(eax) - flags set for next jcc */
    SET_LO8(ecx, (CMP_NE(LO8(ecx), LO8(eax))) ? 1 : 0); /* setne */
    (void)0; /* test LO8(ecx), LO8(ecx) - flags set for next jcc */
    MEM8(0x8493C0) = LO8(eax);
    if (TEST_NZ(LO8(ecx), LO8(ecx))) goto loc_002A5787; /* jne: not equal / not zero */

loc_002A577E: ;
    SET_LO8(eax, MEM8(0x8493C1));
    if (TEST_Z(LO8(eax), LO8(eax))) goto loc_002A5791; /* je: equal / zero */

loc_002A5787: ;
    PUSH32(esp, 0);
    PUSH32(esp, 0); sub_0012B2B0(); /* call 0x0012B2B0 */

loc_002A578E: ;
    esp = esp + 4;

loc_002A5791: ;
    PUSH32(esp, 0); sub_00064B00(); /* call 0x00064B00 */

loc_002A5796: ;
    PUSH32(esp, 0); sub_002D39C0(); /* call 0x002D39C0 */

loc_002A579B: ;
    PUSH32(esp, 0); sub_000646A0(); /* call 0x000646A0 */

loc_002A57A0: ;
    esi = MEM32(0x84A144);
    SET_LO8(ebx, 0); /* xor self */
    if (TEST_S(esi, esi)) goto loc_002A57BE; /* jl: less (signed <) */

loc_002A57AC: ;
    edx = 0; /* xor self */
    edi = edi;

loc_002A57B0: ;
    PUSH32(esp, 0); sub_003563C0(); /* call 0x003563C0 */

loc_002A57B5: ;
    SET_LO8(ebx, LO8(ebx) + 1);
    edx = ZX8(LO8(ebx));
    if (CMP_LE(edx, esi)) goto loc_002A57B0; /* jle: less or equal (signed <=) */

loc_002A57BE: ;
    PUSH32(esp, 0); sub_000658A0(); /* call 0x000658A0 */

loc_002A57C3: ;
    ecx = MEM32(0x8471A4);
    SET_LO8(eax, MEM8(ecx + 6));
    if (TEST_Z(LO8(eax), LO8(eax))) goto loc_002A57DF; /* je: equal / zero */

loc_002A57D0: ;
    edx = ZX8(LO8(eax));
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, 0);
    PUSH32(esp, 0); RECOMP_ICALL_SAFE(MEM32(edx * 4 + 0x6B75C8), _icall_esp); /* indirect call */
    }

loc_002A57DC: ;
    esp = esp + 4;

loc_002A57DF: ;
    eax = MEM32(0x84A10C);
    if (TEST_NZ(eax, eax)) goto loc_002A57F6; /* jne: not equal / not zero */

loc_002A57E8: ;
    SET_LO8(eax, MEM8(0x7819D5));
    if (TEST_NZ(LO8(eax), LO8(eax))) goto loc_002A57F6; /* jne: not equal / not zero */

loc_002A57F1: ;
    PUSH32(esp, 0); sub_0012A920(); /* call 0x0012A920 */

loc_002A57F6: ;
    eax = MEM32(0x7FA20C);
    eax = eax << 5;
    MEM16(0x776178) = MEM16(0x776178) + LO16(eax);
    eax = 0x10;
    edx = 0x7701A0;
    PUSH32(esp, 0); sub_00084030(); /* call 0x00084030 */

loc_002A5814: ;
    eax = 0x10;
    edx = 0x770060;
    PUSH32(esp, 0); sub_00084030(); /* call 0x00084030 */

loc_002A5823: ;
    ecx = MEM32(0x774A5C);
    edi = MEM32(ecx + 4);
    esi = MEM32(edi);
    if (CMP_EQ(esi, edi)) goto loc_002A5840; /* je: equal / zero */

loc_002A5832: ;
    ecx = esi + 8;
    PUSH32(esp, 0); sub_00140830(); /* call 0x00140830 */

loc_002A583A: ;
    esi = MEM32(esi);
    if (CMP_NE(esi, edi)) goto loc_002A5832; /* jne: not equal / not zero */

loc_002A5840: ;
    ebx = MEM32(0x774A5C);
    PUSH32(esp, 0x140840);
    PUSH32(esp, 0); sub_00233230(); /* call 0x00233230 */

loc_002A5850: ;
    SET_LO8(eax, MEM8(0x7FA275));
    if (TEST_NZ(LO8(eax), LO8(eax))) goto loc_002A587D; /* jne: not equal / not zero */

loc_002A5859: ;
    MEM32(0x771830) = MEM32(0x771830) ^ 1;
    esi = 0x594A7C;

loc_002A5865: ;
    eax = MEM32(esi);
    if (TEST_Z(eax, eax)) goto loc_002A586D; /* je: equal / zero */

loc_002A586B: ;
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, 0); RECOMP_ICALL_SAFE(eax, _icall_esp); /* indirect call */
    }

loc_002A586D: ;
    esi = esi + 4;
    if (CMP_L(esi, 0x594A88)) goto loc_002A5865; /* jl: less (signed <) */

loc_002A5878: ;
    PUSH32(esp, 0); sub_000D93F0(); /* call 0x000D93F0 */

loc_002A587D: ;
    PUSH32(esp, 0); sub_00081190(); /* call 0x00081190 */

loc_002A5882: ;
    PUSH32(esp, 0); sub_0007EB50(); /* call 0x0007EB50 */

loc_002A5887: ;
    SET_LO8(eax, MEM8(0x7819D5));
    if (TEST_NZ(LO8(eax), LO8(eax))) goto loc_002A5895; /* jne: not equal / not zero */

loc_002A5890: ;
    PUSH32(esp, 0); sub_003C3770(); /* call 0x003C3770 */

loc_002A5895: ;
    if (CMP_NE(MEM8(0x76F0E0), 1)) goto loc_002A58A3; /* jne: not equal / not zero */

loc_002A589E: ;
    PUSH32(esp, 0); sub_00069440(); /* call 0x00069440 */

loc_002A58A3: ;
    PUSH32(esp, 0);
    PUSH32(esp, 0); sub_00068D10(); /* call 0x00068D10 */

loc_002A58AA: ;
    edx = MEM32(0x774A5C);
    edi = MEM32(edx + 4);
    esi = MEM32(edi);
    esp = esp + 4;
    if (CMP_EQ(esi, edi)) goto loc_002A58CE; /* je: equal / zero */

loc_002A58BC: ;
    /* nop */

loc_002A58C0: ;
    ecx = esi + 8;
    PUSH32(esp, 0); sub_00140830(); /* call 0x00140830 */

loc_002A58C8: ;
    esi = MEM32(esi);
    if (CMP_NE(esi, edi)) goto loc_002A58C0; /* jne: not equal / not zero */

loc_002A58CE: ;
    ebx = MEM32(0x774A5C);
    PUSH32(esp, 0x140840);
    PUSH32(esp, 0); sub_00233230(); /* call 0x00233230 */

loc_002A58DE: ;
    eax = MEM32(0x7FA1F8);
    PUSH32(esp, eax);
    PUSH32(esp, 0); sub_0010A810(); /* call 0x0010A810 */

loc_002A58E9: ;
    SET_LO8(eax, MEM8(0x7FDB7C));
    esp = esp + 4;
    (void)0; /* test LO8(eax), LO8(eax) - flags set for next jcc */
    POP32(esp, edi);
    POP32(esp, esi);
    POP32(esp, ebx);
    if (TEST_Z(LO8(eax), LO8(eax))) goto loc_002A58FD; /* je: equal / zero */

loc_002A58F8: ;
    PUSH32(esp, 0); sub_002FADC0(); /* call 0x002FADC0 */

loc_002A58FD: ;
    SET_LO8(eax, MEM8(0x7FA275));
    if (TEST_NZ(LO8(eax), LO8(eax))) goto loc_002A5923; /* jne: not equal / not zero */

loc_002A5906: ;
    PUSH32(esp, 0); sub_001395D0(); /* call 0x001395D0 */

loc_002A590B: ;
    PUSH32(esp, 0); sub_000D92E0(); /* call 0x000D92E0 */

loc_002A5910: ;
    PUSH32(esp, 0); sub_00199810(); /* call 0x00199810 */

loc_002A5915: ;
    SET_LO8(eax, MEM8(0x7FA275));
    if (TEST_NZ(LO8(eax), LO8(eax))) goto loc_002A5923; /* jne: not equal / not zero */

loc_002A591E: ;
    PUSH32(esp, 0); sub_000FDF80(); /* call 0x000FDF80 */

loc_002A5923: ;
    PUSH32(esp, 0); sub_000FCF70(); /* call 0x000FCF70 */

loc_002A5928: ;
    SET_LO16(ecx, MEM16(0x771BE0));
    if (TEST_Z(LO16(ecx), LO16(ecx))) goto loc_002A5961; /* je: equal / zero */

loc_002A5934: ;
    eax = MEM32(0x7FA20C);
    edx = ZX16(LO16(ecx));
    if (CMP_LE(edx, eax)) goto loc_002A594C; /* jle: less or equal (signed <=) */

loc_002A5940: ;
    SET_LO16(ecx, LO16(ecx) - LO16(eax));
    MEM16(0x771BE0) = LO16(ecx);
    goto loc_002A5955;

loc_002A594C: ;
    MEM16(0x771BE0) = 0;

loc_002A5955: ;
    { int64_t _r = (int64_t)(int32_t)eax * (int64_t)(int32_t)MEM8(0x771BDC);
      eax = (uint32_t)_r; edx = (uint32_t)(_r >> 32); }
    MEM8(0x771BDB) = MEM8(0x771BDB) + LO8(eax);

loc_002A5961: ;
    PUSH32(esp, 0); sub_0008E8C0(); /* call 0x0008E8C0 */

loc_002A5966: ;
    PUSH32(esp, 0); sub_001244D0(); /* call 0x001244D0 */

loc_002A596B: ;
    PUSH32(esp, 0); sub_001E8F90(); /* call 0x001E8F90 */

loc_002A5970: ;
    eax = 1;
    esp += 4; return; /* ret */

}

/**
 * sub_002A5980
 * Original: 0x002A5980 - 0x002A59C6 (70 bytes, 25 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_002A5980(void)
{
    uint32_t ebp;
    int _flags = 0; /* fallback flag var */
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_002A5980: ;
    SET_LO8(eax, MEM8(0x7FA275));
    if (TEST_NZ(LO8(eax), LO8(eax))) goto loc_002A59A4; /* jne: not equal / not zero */

loc_002A5989: ;
    PUSH32(esp, esi);
    esi = 0x5906AC;
    /* nop */

loc_002A5990: ;
    eax = MEM32(esi);
    if (TEST_Z(eax, eax)) goto loc_002A5998; /* je: equal / zero */

loc_002A5996: ;
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, 0); RECOMP_ICALL_SAFE(eax, _icall_esp); /* indirect call */
    }

loc_002A5998: ;
    esi = esi + 0x70;
    if (CMP_L(esi, 0x5947DC)) goto loc_002A5990; /* jl: less (signed <) */

loc_002A59A3: ;
    POP32(esp, esi);

loc_002A59A4: ;
    SET_LO8(eax, MEM8(0x7819D5));
    if (TEST_NZ(LO8(eax), LO8(eax))) { sub_002A59C6(); return; } /* jne: not equal / not zero */

loc_002A59AD: ;
    eax = MEM32(0x7FA1F8);
    if (CMP_EQ(eax, 0x1D)) { sub_002A59C6(); return; } /* je: equal / zero */

loc_002A59B7: ;
    if (CMP_EQ(eax, 0x46)) { sub_002A59C6(); return; } /* je: equal / zero */

loc_002A59BC: ;
    if (CMP_EQ(eax, 0x47)) { sub_002A59C6(); return; } /* je: equal / zero */

loc_002A59C1: ;
    g_seh_ebp = ebp; sub_00316C30(); return; /* tail jmp 0x00316C30 */

}

/**
 * sub_002A59D0
 * Original: 0x002A59D0 - 0x002A5A9C (204 bytes, 48 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_002A59D0(void)
{
    uint32_t ebp;
    int _flags = 0; /* fallback flag var */
    float xmm0, xmm1, xmm2;
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_002A59D0: ;
    ecx = MEM32(0x84A13C);
    xmm0 = MEMF(0x648D14); /* movss */
    xmm1 = MEMF(0x648D34); /* movss */
    PUSH32(esp, ebx);
    ebx = SX16(LO16(esi));
    eax = ebx;
    eax = (uint32_t)((int32_t)eax * (int32_t)0x2B0);
    xmm2 = MEMF(eax + ecx + 0x260); /* movss */
    xmm2 = xmm2 / MEMF(eax + ecx + 0x258); /* divss */
    eax = eax + ecx;
    xmm2 = xmm2 - xmm0; /* subss */
    xmm2 = xmm2 * xmm1; /* mulss */
    xmm2 = xmm2 + MEMF(eax + 0x250); /* addss */
    MEMF(0x780A4C) = xmm2; /* movss */
    xmm2 = MEMF(eax + 0x264); /* movss */
    xmm2 = xmm2 / MEMF(eax + 0x25C); /* divss */
    xmm2 = xmm2 - xmm0; /* subss */
    xmm2 = xmm2 * xmm1; /* mulss */
    xmm2 = xmm2 + MEMF(eax + 0x254); /* addss */
    SET_LO8(eax, MEM8(0x84725A));
    (void)0; /* test LO8(eax), LO8(eax) - flags set for next jcc */
    MEMF(0x780A48) = xmm2; /* movss */
    if (TEST_NZ(LO8(eax), LO8(eax))) { sub_002A5A9C(); return; } /* jne: not equal / not zero */

loc_002A5A4F: ;
    PUSH32(esp, ebx);
    PUSH32(esp, 0); sub_001E96F0(); /* call 0x001E96F0 */

loc_002A5A55: ;
    esp = esp + 4;
    ecx = ebx;
    PUSH32(esp, 0); sub_000FB970(); /* call 0x000FB970 */

loc_002A5A5F: ;
    if (CMP_EQ(eax, 0xFF)) { sub_002A5A9C(); return; } /* je: equal / zero */

loc_002A5A66: ;
    eax = MEM32(0x7FCB54);
    edx = 1;
    ecx = ebx;
    edx = edx << LO8(ecx);
    if (TEST_NZ(edx, eax)) { sub_002A5A9C(); return; } /* jne: not equal / not zero */

loc_002A5A78: ;
    PUSH32(esp, 0); sub_0007E3B0(); /* call 0x0007E3B0 */

loc_002A5A7D: ;
    PUSH32(esp, 0);
    PUSH32(esp, ebx);
    PUSH32(esp, 0); sub_002A3F70(); /* call 0x002A3F70 */

loc_002A5A85: ;
    PUSH32(esp, 0);
    PUSH32(esp, esi);
    PUSH32(esp, 0); sub_00064C20(); /* call 0x00064C20 */

loc_002A5A8D: ;
    ecx = MEM32(esp + 0x18);
    esp = esp + 0x10;
    edx = esi;
    POP32(esp, ebx);
    g_seh_ebp = ebp; sub_00063A10(); return; /* tail jmp 0x00063A10 */

}

/**
 * sub_002A5AA0
 * Original: 0x002A5AA0 - 0x002A5DA4 (772 bytes, 236 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_002A5AA0(void)
{
    uint32_t ebp;
    int _flags = 0; /* fallback flag var */
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_002A5AA0: ;
    PUSH32(esp, ecx);
    SET_LO8(eax, MEM8(0x8496E4));
    (void)0; /* test LO8(eax), LO8(eax) - flags set for next jcc */
    PUSH32(esp, ebp);
    ebp = MEM32(esp + 0xC);
    PUSH32(esp, esi);
    PUSH32(esp, edi);
    if (TEST_Z(LO8(eax), LO8(eax))) goto loc_002A5AB6; /* je: equal / zero */

loc_002A5AB1: ;
    PUSH32(esp, 0); sub_00403D60(); /* call 0x00403D60 */

loc_002A5AB6: ;
    ecx = MEM32(0x8470DC);
    SET_LO8(eax, MEM8(0x84725B));
    esi = LO16(ebp);
    edi = esi;
    edi = (uint32_t)((int32_t)edi * (int32_t)0x770);
    edi = edi + ecx;
    if (TEST_NZ(LO8(eax), LO8(eax))) { sub_002A5DA4(); return; } /* jne: not equal / not zero */

loc_002A5AD6: ;
    ecx = esi;
    PUSH32(esp, 0); sub_000FB970(); /* call 0x000FB970 */

loc_002A5ADD: ;
    if (CMP_EQ(eax, 0xFF)) { sub_002A5DA4(); return; } /* je: equal / zero */

loc_002A5AE8: ;
    ecx = esi;
    eax = 1;
    eax = eax << LO8(ecx);
    (void)0; /* test MEM32(0x7FCB54), eax - flags set for next jcc */
    MEM32(esp + 0xC) = eax;
    if (TEST_NZ(MEM32(0x7FCB54), eax)) { sub_002A5DA4(); return; } /* jne: not equal / not zero */

loc_002A5B01: ;
    eax = MEM32(0x84A144);
    if (CMP_LE(eax & eax, 0)) goto loc_002A5B11; /* jle: less or equal (signed <=) */

loc_002A5B0A: ;
    eax = esi;
    PUSH32(esp, 0); sub_00064860(); /* call 0x00064860 */

loc_002A5B11: ;
    PUSH32(esp, ebx);
    ebx = ebp;
    PUSH32(esp, 0); sub_003932B0(); /* call 0x003932B0 */

loc_002A5B19: ;
    esi = ebp;
    eax = 1;
    PUSH32(esp, 0); sub_000696D0(); /* call 0x000696D0 */

loc_002A5B25: ;
    if (CMP_NE(MEM8(0x774A69), 2)) goto loc_002A5B33; /* jne: not equal / not zero */

loc_002A5B2E: ;
    PUSH32(esp, 0); sub_00140F70(); /* call 0x00140F70 */

loc_002A5B33: ;
    PUSH32(esp, ebp);
    PUSH32(esp, 8);
    PUSH32(esp, 0); sub_000D9950(); /* call 0x000D9950 */

loc_002A5B3B: ;
    eax = MEM32(edi + 4);
    SET_LO8(ecx, MEM8(eax + 0x8C2));
    esp = esp + 8;
    (void)0; /* cmp LO8(ecx), 1 - flags set for next jcc */
    PUSH32(esp, ebp);
    if (CMP_NE(LO8(ecx), 1)) goto loc_002A5BA2; /* jne: not equal / not zero */

loc_002A5B4D: ;
    PUSH32(esp, 0); sub_002A4ED0(); /* call 0x002A4ED0 */

loc_002A5B52: ;
    esp = esp + 4;
    esi = ebp;
    eax = 2;
    PUSH32(esp, 0); sub_000695F0(); /* call 0x000695F0 */

loc_002A5B61: ;
    eax = 0; /* xor self */
    PUSH32(esp, 0); sub_000695F0(); /* call 0x000695F0 */

loc_002A5B68: ;
    if (TEST_Z(MEM8(0x76F5F8), 1)) goto loc_002A5B86; /* je: equal / zero */

loc_002A5B71: ;
    ecx = MEM32(0x847194);
    PUSH32(esp, ebp);
    MEM32(0x84B7D0) = ecx;
    PUSH32(esp, 0); sub_00064B60(); /* call 0x00064B60 */

loc_002A5B83: ;
    esp = esp + 4;

loc_002A5B86: ;
    esi = ebp;
    eax = 1;
    PUSH32(esp, 0); sub_000695F0(); /* call 0x000695F0 */

loc_002A5B92: ;
    PUSH32(esp, ebp);
    PUSH32(esp, 9);
    PUSH32(esp, 0); sub_000D9950(); /* call 0x000D9950 */

loc_002A5B9A: ;
    PUSH32(esp, ebp);
    PUSH32(esp, 0); sub_002A5310(); /* call 0x002A5310 */

loc_002A5BA0: ;
    goto loc_002A5BF5;

loc_002A5BA2: ;
    PUSH32(esp, 0); sub_002A5310(); /* call 0x002A5310 */

loc_002A5BA7: ;
    esp = esp + 4;
    esi = ebp;
    eax = 0; /* xor self */
    PUSH32(esp, 0); sub_000695F0(); /* call 0x000695F0 */

loc_002A5BB3: ;
    if (TEST_Z(MEM8(0x76F5F8), 1)) goto loc_002A5BD1; /* je: equal / zero */

loc_002A5BBC: ;
    edx = MEM32(0x847194);
    PUSH32(esp, ebp);
    MEM32(0x84B7D0) = edx;
    PUSH32(esp, 0); sub_00064B60(); /* call 0x00064B60 */

loc_002A5BCE: ;
    esp = esp + 4;

loc_002A5BD1: ;
    esi = ebp;
    eax = 1;
    PUSH32(esp, 0); sub_000695F0(); /* call 0x000695F0 */

loc_002A5BDD: ;
    eax = 2;
    PUSH32(esp, 0); sub_000695F0(); /* call 0x000695F0 */

loc_002A5BE7: ;
    PUSH32(esp, ebp);
    PUSH32(esp, 0); sub_002A4ED0(); /* call 0x002A4ED0 */

loc_002A5BED: ;
    PUSH32(esp, ebp);
    PUSH32(esp, 9);
    PUSH32(esp, 0); sub_000D9950(); /* call 0x000D9950 */

loc_002A5BF5: ;
    esp = esp + 0xC;
    edi = ebp;
    eax = 0; /* xor self */
    PUSH32(esp, 0); sub_001409F0(); /* call 0x001409F0 */

loc_002A5C01: ;
    eax = 1;
    PUSH32(esp, 0); sub_001409F0(); /* call 0x001409F0 */

loc_002A5C0B: ;
    esi = ebp;
    eax = 0; /* xor self */
    PUSH32(esp, 0); sub_000696D0(); /* call 0x000696D0 */

loc_002A5C14: ;
    eax = LO16(ebp);
    PUSH32(esp, 0); sub_0007E4C0(); /* call 0x0007E4C0 */

loc_002A5C1C: ;
    if (TEST_Z(MEM8(0x76F5F8), 2)) goto loc_002A5C2E; /* je: equal / zero */

loc_002A5C25: ;
    PUSH32(esp, ebp);
    PUSH32(esp, 0); sub_00064B60(); /* call 0x00064B60 */

loc_002A5C2B: ;
    esp = esp + 4;

loc_002A5C2E: ;
    ebx = 0; /* xor self */
    esi = 0; /* xor self */
    MEM32(esp + 0x18) = esi;
    goto loc_002A5C40;

    /* nop */
    /* nop */

loc_002A5C40: ;
    eax = MEM32(0x84A5FC);
    if (CMP_EQ(MEM8(eax + ebx), 0)) goto loc_002A5CA9; /* je: equal / zero */

loc_002A5C4B: ;
    ecx = MEM32(0x84A5F8);
    edi = MEM32(esi + ecx + 0x64);
    esi = esi + ecx;
    if (TEST_Z(edi, edi)) goto loc_002A5CA9; /* je: equal / zero */

loc_002A5C5B: ;
    SET_LO8(eax, MEM8(esi + 0xA1));
    if (CMP_EQ(LO8(eax), 3)) goto loc_002A5CA9; /* je: equal / zero */

loc_002A5C65: ;
    if (CMP_EQ(LO8(eax), 5)) goto loc_002A5CA9; /* je: equal / zero */

loc_002A5C69: ;
    if (CMP_EQ(LO8(eax), 2)) goto loc_002A5CA9; /* je: equal / zero */

loc_002A5C6D: ;
    if (CMP_EQ(MEM32(esi + 0x68), 0xFFFF)) goto loc_002A5CA9; /* je: equal / zero */

loc_002A5C76: ;
    if (CMP_EQ(LO8(eax), 8)) goto loc_002A5C85; /* je: equal / zero */

loc_002A5C7A: ;
    eax = esi;
    PUSH32(esp, 0); sub_002C38A0(); /* call 0x002C38A0 */

loc_002A5C81: ;
    if (TEST_Z(LO8(eax), LO8(eax))) goto loc_002A5CA9; /* je: equal / zero */

loc_002A5C85: ;
    if (CMP_EQ(edi, 0x10)) goto loc_002A5C9B; /* je: equal / zero */

loc_002A5C8A: ;
    edx = ZX8(MEM8(esi + 0x16E));
    eax = MEM32(esp + 0x10);
    edx = edx & eax;
    if (CMP_EQ(edx, eax)) goto loc_002A5CA9; /* je: equal / zero */

loc_002A5C9B: ;
    PUSH32(esp, 0xA);
    eax = LO16(ebp);
    PUSH32(esp, ebx);
    PUSH32(esp, 0); sub_0007F4D0(); /* call 0x0007F4D0 */

loc_002A5CA6: ;
    esp = esp + 8;

loc_002A5CA9: ;
    esi = MEM32(esp + 0x18);
    esi = esi + 0x6D0;
    ebx++;
    (void)0; /* cmp esi, 0x36800 - flags set for next jcc */
    MEM32(esp + 0x18) = esi;
    if (CMP_L(esi, 0x36800)) goto loc_002A5C40; /* jl: less (signed <) */

loc_002A5CC0: ;
    edi = MEM32(0x847200);
    ecx = LO16(ebp);
    eax = 1;
    eax = eax << LO8(ecx);
    (void)0; /* test edi, edi - flags set for next jcc */
    MEM32(esp + 0x18) = eax;
    if (TEST_Z(edi, edi)) goto loc_002A5D3E; /* je: equal / zero */

loc_002A5CD8: ;
    goto loc_002A5CE0;

    /* nop */

loc_002A5CE0: ;
    SET_LO8(eax, MEM8(edi + 6));
    (void)0; /* test LO8(eax), LO8(eax) - flags set for next jcc */
    ebx = MEM32(edi + 0xE0);
    if (TEST_Z(LO8(eax), LO8(eax))) goto loc_002A5D38; /* je: equal / zero */

loc_002A5CED: ;
    SET_LO8(eax, MEM8(edi + 0x20));
    if (TEST_NZ(LO8(eax), LO8(eax))) goto loc_002A5D38; /* jne: not equal / not zero */

loc_002A5CF4: ;
    SET_LO8(edx, MEM8(edi));
    PUSH32(esp, 0); sub_002B3F70(); /* call 0x002B3F70 */

loc_002A5CFB: ;
    esi = eax;
    if (TEST_Z(esi, esi)) goto loc_002A5D38; /* je: equal / zero */

loc_002A5D01: ;
    ecx = ZX8(MEM8(esi + 0x16E));
    eax = MEM32(esp + 0x18);
    ecx = ecx & eax;
    if (CMP_EQ(ecx, eax)) goto loc_002A5D38; /* je: equal / zero */

loc_002A5D12: ;
    eax = esi;
    PUSH32(esp, 0); sub_002C38A0(); /* call 0x002C38A0 */

loc_002A5D19: ;
    if (TEST_Z(LO8(eax), LO8(eax))) goto loc_002A5D38; /* je: equal / zero */

loc_002A5D1D: ;
    eax = esi;
    PUSH32(esp, 0); sub_00082260(); /* call 0x00082260 */

loc_002A5D24: ;
    if (TEST_NZ(LO8(eax), LO8(eax))) goto loc_002A5D38; /* jne: not equal / not zero */

loc_002A5D28: ;
    eax = LO16(ebp);
    PUSH32(esp, 0);
    PUSH32(esp, eax);
    PUSH32(esp, esi);
    PUSH32(esp, edi);
    PUSH32(esp, 0); sub_000780E0(); /* call 0x000780E0 */

loc_002A5D35: ;
    esp = esp + 0x10;

loc_002A5D38: ;
    (void)0; /* test ebx, ebx - flags set for next jcc */
    edi = ebx;
    if (TEST_NZ(ebx, ebx)) goto loc_002A5CE0; /* jne: not equal / not zero */

loc_002A5D3E: ;
    PUSH32(esp, ebp);
    PUSH32(esp, 0); sub_00064B60(); /* call 0x00064B60 */

loc_002A5D44: ;
    esi = LO16(ebp);
    PUSH32(esp, esi);
    PUSH32(esp, 0); sub_00347330(); /* call 0x00347330 */

loc_002A5D4D: ;
    esp = esp + 8;
    PUSH32(esp, 0); sub_00349B70(); /* call 0x00349B70 */

loc_002A5D55: ;
    eax = esi;
    PUSH32(esp, 0); sub_001E5A90(); /* call 0x001E5A90 */

loc_002A5D5C: ;
    (void)0; /* test LO16(ebp), LO16(ebp) - flags set for next jcc */
    POP32(esp, ebx);
    if (TEST_NZ(LO16(ebp), LO16(ebp))) goto loc_002A5D67; /* jne: not equal / not zero */

loc_002A5D62: ;
    PUSH32(esp, 0); sub_001C71A0(); /* call 0x001C71A0 */

loc_002A5D67: ;
    esi = ebp;
    eax = 3;
    PUSH32(esp, 0); sub_000696D0(); /* call 0x000696D0 */

loc_002A5D73: ;
    PUSH32(esp, ebp);
    PUSH32(esp, 2);
    PUSH32(esp, 0); sub_000D9950(); /* call 0x000D9950 */

loc_002A5D7B: ;
    eax = MEM32(0x84A144);
    esp = esp + 8;
    if (TEST_Z(eax, eax)) goto loc_002A5D90; /* je: equal / zero */

loc_002A5D87: ;
    PUSH32(esp, ebp);
    PUSH32(esp, 0); sub_001CC9F0(); /* call 0x001CC9F0 */

loc_002A5D8D: ;
    esp = esp + 4;

loc_002A5D90: ;
    SET_LO8(eax, MEM8(0x76EC82));
    if (TEST_Z(LO8(eax), LO8(eax))) { sub_002A5DA4(); return; } /* je: equal / zero */

loc_002A5D99: ;
    POP32(esp, edi);
    POP32(esp, esi);
    POP32(esp, ebp);
    esp = esp + 4;
    g_seh_ebp = ebp; sub_00054AC0(); return; /* tail jmp 0x00054AC0 */

}

/**
 * sub_002A5DB0
 * Original: 0x002A5DB0 - 0x002A5E1D (109 bytes, 29 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_002A5DB0(void)
{
    uint32_t ebp;
    int _flags = 0; /* fallback flag var */
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_002A5DB0: ;
    (void)0; /* cmp MEM8(0x774A69), 1 - flags set for next jcc */
    PUSH32(esp, ebx);
    PUSH32(esp, esi);
    PUSH32(esp, edi);
    if (CMP_NE(MEM8(0x774A69), 1)) goto loc_002A5DD2; /* jne: not equal / not zero */

loc_002A5DBC: ;
    SET_LO8(eax, MEM8(0x7FA275));
    if (TEST_NZ(LO8(eax), LO8(eax))) goto loc_002A5DD2; /* jne: not equal / not zero */

loc_002A5DC5: ;
    PUSH32(esp, 0x3F666666);
    PUSH32(esp, 0); sub_00402F10(); /* call 0x00402F10 */

loc_002A5DCF: ;
    esp = esp + 4;

loc_002A5DD2: ;
    eax = MEM32(0x84A144);
    if (TEST_Z(eax, eax)) { sub_002A5E1D(); return; } /* je: equal / zero */

loc_002A5DDB: ;
    ecx = MEM32(0x84A13C);
    eax++;
    MEM32(0x84A148) = eax;
    ebx = eax;
    eax = (uint32_t)((int32_t)eax * (int32_t)0x2B0);
    esi = MEM32(eax + ecx + 0x144);
    MEM32(0x84B868) = esi;
    PUSH32(esp, 0); sub_003FB250(); /* call 0x003FB250 */

loc_002A5E01: ;
    SET_LO16(edx, ZX8(LO8(ebx)));
    esi = esi + 0x10;
    ecx = 0x10;
    edi = 0x81BD30;
    memcpy((void*)XBOX_PTR(edi), (void*)XBOX_PTR(esi), ecx * 4);
    esi += ecx * 4; edi += ecx * 4; ecx = 0; /* rep movsd */
    MEM16(0x81BD26) = LO16(edx);
    g_seh_ebp = ebp; sub_002A5E4B(); return; /* tail jmp 0x002A5E4B */

}

/**
 * sub_002A5EB0
 * Original: 0x002A5EB0 - 0x002A5F2C (124 bytes, 38 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_002A5EB0(void)
{
    int _flags = 0; /* fallback flag var */

loc_002A5EB0: ;
    PUSH32(esp, esi);
    esi = eax;
    if (CMP_EQ(MEM16(esi * 2 + 0x771BD0), 0)) goto loc_002A5EEF; /* je: equal / zero */

loc_002A5EBE: ;
    SET_LO8(ecx, MEM8(esi + 0x771BC0));
    if (TEST_Z(LO8(ecx), LO8(ecx))) goto loc_002A5EEF; /* je: equal / zero */

loc_002A5EC8: ;
    eax = ZX8(MEM8(esi + esi * 2 + 0x771BC6));
    edx = ZX8(MEM8(esi + esi * 2 + 0x771BC5));
    PUSH32(esp, esi);
    PUSH32(esp, eax);
    eax = ZX8(MEM8(esi + esi * 2 + 0x771BC4));
    ecx = ZX8(LO8(ecx));
    PUSH32(esp, edx);
    PUSH32(esp, ecx);
    PUSH32(esp, 0); sub_000FBC80(); /* call 0x000FBC80 */

loc_002A5EEC: ;
    esp = esp + 0x10;

loc_002A5EEF: ;
    PUSH32(esp, edi);
    edi = esi;
    PUSH32(esp, 0); sub_000FCC00(); /* call 0x000FCC00 */

loc_002A5EF7: ;
    PUSH32(esp, 0); sub_000FD740(); /* call 0x000FD740 */

loc_002A5EFC: ;
    ecx = esi;
    eax = 1;
    eax = eax << LO8(ecx);
    ecx = MEM32(0x7FCB54);
    POP32(esp, edi);
    if (TEST_NZ(eax, ecx)) goto loc_002A5F18; /* jne: not equal / not zero */

loc_002A5F10: ;
    if (TEST_Z(MEM32(0x7FCB50), eax)) goto loc_002A5F1F; /* je: equal / zero */

loc_002A5F18: ;
    ecx = esi;
    PUSH32(esp, 0); sub_002CE030(); /* call 0x002CE030 */

loc_002A5F1F: ;
    PUSH32(esp, esi);
    PUSH32(esp, 6);
    PUSH32(esp, 0); sub_000D9950(); /* call 0x000D9950 */

loc_002A5F27: ;
    esp = esp + 8;
    POP32(esp, esi);
    esp += 4; return; /* ret */

}

/**
 * sub_002A5F30
 * Original: 0x002A5F30 - 0x002A60A9 (377 bytes, 118 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_002A5F30(void)
{
    uint32_t ebp;
    int _flags = 0; /* fallback flag var */
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_002A5F30: ;
    PUSH32(esp, esi);
    eax = 0x800320;
    PUSH32(esp, 0); sub_00202AC0(); /* call 0x00202AC0 */

loc_002A5F3B: ;
    PUSH32(esp, 0);
    PUSH32(esp, 0); sub_00202C40(); /* call 0x00202C40 */

loc_002A5F42: ;
    eax = MEM32(0x7FA1F8);
    esp = esp + 4;
    if (CMP_EQ(eax, 0x1D)) goto loc_002A5F58; /* je: equal / zero */

loc_002A5F4F: ;
    if (CMP_NE(eax, 0x46)) goto loc_002A605D; /* jne: not equal / not zero */

loc_002A5F58: ;
    PUSH32(esp, ebx);
    PUSH32(esp, ebp);
    PUSH32(esp, edi);
    edi = MEM32(0x84A5F8);
    ebp = 0; /* xor self */
    esi = 0; /* xor self */
    ebx = 0xFFFF;
    /* nop */

loc_002A5F70: ;
    eax = MEM32(0x84A5FC);
    if (CMP_EQ(MEM8(eax + ebp), 0)) goto loc_002A5FD2; /* je: equal / zero */

loc_002A5F7B: ;
    ecx = MEM32(esi + edi + 0x64);
    if (TEST_Z(ecx, ecx)) goto loc_002A5FD2; /* je: equal / zero */

loc_002A5F83: ;
    SET_LO8(eax, MEM8(esi + edi + 0xA1));
    if (CMP_EQ(LO8(eax), 3)) goto loc_002A5FD2; /* je: equal / zero */

loc_002A5F8E: ;
    if (CMP_EQ(LO8(eax), 5)) goto loc_002A5FD2; /* je: equal / zero */

loc_002A5F92: ;
    if (CMP_EQ(LO8(eax), 2)) goto loc_002A5FD2; /* je: equal / zero */

loc_002A5F96: ;
    if (CMP_EQ(MEM32(esi + edi + 0x68), ebx)) goto loc_002A5FD2; /* je: equal / zero */

loc_002A5F9C: ;
    if (CMP_NE(LO8(eax), 7)) goto loc_002A5FD2; /* jne: not equal / not zero */

loc_002A5FA0: ;
    (void)0; /* cmp ecx, 0x10 - flags set for next jcc */
    eax = (uint32_t)(int32_t)SMEM16(esp + 0x14);
    if (CMP_EQ(ecx, 0x10)) goto loc_002A5FC1; /* je: equal / zero */

loc_002A5FAA: ;
    ecx = eax;
    edx = 1;
    edx = edx << LO8(ecx);
    ecx = ZX8(MEM8(esi + edi + 0x16E));
    ecx = ecx & edx;
    if (CMP_EQ(ecx, edx)) goto loc_002A5FD2; /* je: equal / zero */

loc_002A5FC1: ;
    PUSH32(esp, 7);
    PUSH32(esp, ebp);
    PUSH32(esp, 0); sub_0007F4D0(); /* call 0x0007F4D0 */

loc_002A5FC9: ;
    edi = MEM32(0x84A5F8);
    esp = esp + 8;

loc_002A5FD2: ;
    esi = esi + 0x6D0;
    ebp++;
    if (CMP_L(esi, 0x36800)) goto loc_002A5F70; /* jl: less (signed <) */

loc_002A5FE1: ;
    ecx = (uint32_t)(int32_t)SMEM16(esp + 0x14);
    esi = MEM32(0x847200);
    ebx = 1;
    ebx = ebx << LO8(ecx);
    if (TEST_Z(esi, esi)) goto loc_002A605A; /* je: equal / zero */

loc_002A5FF7: ;
    goto loc_002A6000;

    /* nop */

loc_002A6000: ;
    SET_LO8(eax, MEM8(esi + 6));
    (void)0; /* test LO8(eax), LO8(eax) - flags set for next jcc */
    ebp = MEM32(esi + 0xE0);
    if (TEST_Z(LO8(eax), LO8(eax))) goto loc_002A6054; /* je: equal / zero */

loc_002A600D: ;
    SET_LO8(eax, MEM8(esi + 0x20));
    if (TEST_NZ(LO8(eax), LO8(eax))) goto loc_002A6054; /* jne: not equal / not zero */

loc_002A6014: ;
    SET_LO8(edx, MEM8(esi));
    PUSH32(esp, 0); sub_002B3F70(); /* call 0x002B3F70 */

loc_002A601B: ;
    edi = eax;
    if (TEST_Z(edi, edi)) goto loc_002A6054; /* je: equal / zero */

loc_002A6021: ;
    edx = ZX8(MEM8(edi + 0x16E));
    edx = edx & ebx;
    if (CMP_EQ(edx, ebx)) goto loc_002A6054; /* je: equal / zero */

loc_002A602E: ;
    if (CMP_NE(MEM8(edi + 0xA1), 7)) goto loc_002A6054; /* jne: not equal / not zero */

loc_002A6037: ;
    eax = edi;
    PUSH32(esp, 0); sub_00082260(); /* call 0x00082260 */

loc_002A603E: ;
    if (TEST_NZ(LO8(eax), LO8(eax))) goto loc_002A6054; /* jne: not equal / not zero */

loc_002A6042: ;
    eax = (uint32_t)(int32_t)SMEM16(esp + 0x14);
    PUSH32(esp, 0);
    PUSH32(esp, eax);
    PUSH32(esp, edi);
    PUSH32(esp, esi);
    PUSH32(esp, 0); sub_000780E0(); /* call 0x000780E0 */

loc_002A6051: ;
    esp = esp + 0x10;

loc_002A6054: ;
    (void)0; /* test ebp, ebp - flags set for next jcc */
    esi = ebp;
    if (TEST_NZ(ebp, ebp)) goto loc_002A6000; /* jne: not equal / not zero */

loc_002A605A: ;
    POP32(esp, edi);
    POP32(esp, ebp);
    POP32(esp, ebx);

loc_002A605D: ;
    esi = 0; /* xor self */
    PUSH32(esp, esi);
    PUSH32(esp, 7);
    PUSH32(esp, 0); sub_000D9950(); /* call 0x000D9950 */

loc_002A6067: ;
    edx = MEM32(esp + 0x10);
    eax = MEM32(0x8003F0);
    MEM32(0x84B830) = esi;
    MEM32(0x819FE0) = esi;
    MEM32(0x819FE4) = esi;
    esi = MEM32(0x81B7C0);
    ecx = esp + 0x14;
    PUSH32(esp, ecx);
    esi = esi & 0x80000000u;
    PUSH32(esp, edx);
    MEM32(0x81B7C0) = esi;
    MEM32(0x84B868) = eax;
    PUSH32(esp, 0); sub_002A3F70(); /* call 0x002A3F70 */

loc_002A60A4: ;
    esp = esp + 0x10;
    POP32(esp, esi);
    esp += 4; return; /* ret */

}

/**
 * sub_002A60B0
 * Original: 0x002A60B0 - 0x002A60C1 (17 bytes, 8 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_002A60B0(void)
{
    uint32_t ebp;
    int _flags = 0; /* fallback flag var */
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_002A60B0: ;
    eax = MEM32(0x84A144);
    (void)0; /* test eax, eax - flags set for next jcc */
    PUSH32(esp, ebx);
    PUSH32(esp, esi);
    PUSH32(esp, edi);
    if (TEST_Z(eax, eax)) { sub_002A60C1(); return; } /* je: equal / zero */

loc_002A60BC: ;
    ebx = eax + 1;
    g_seh_ebp = ebp; sub_002A60C3(); return; /* tail jmp 0x002A60C3 */

}

/**
 * sub_002A6190
 * Original: 0x002A6190 - 0x002A638B (507 bytes, 147 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_002A6190(void)
{
    uint32_t ebp;
    int _flags = 0; /* fallback flag var */
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_002A6190: ;
    PUSH32(esp, ecx);
    eax = MEM32(0x84A19C);
    if (TEST_NZ(eax, eax)) goto loc_002A619F; /* jne: not equal / not zero */

loc_002A619A: ;
    PUSH32(esp, 0); sub_002AED70(); /* call 0x002AED70 */

loc_002A619F: ;
    edx = MEM32(0x7FA494);
    ecx = MEM32(0x7FA4B4);
    PUSH32(esp, ebp);
    PUSH32(esp, esi);
    esi = MEM32(0x84A190);
    edx++;
    ecx++;
    (void)0; /* test esi, esi - flags set for next jcc */
    PUSH32(esp, edi);
    MEM32(0x7FA494) = edx;
    MEM32(0x7FA4B4) = ecx;
    edi = esi;
    if (TEST_Z(esi, esi)) goto loc_002A61F2; /* je: equal / zero */

loc_002A61C8: ;
    if (CMP_B(MEM32(esi + 0x80), 0x1F4)) goto loc_002A61F2; /* jb: below (unsigned <) */

loc_002A61D4: ;
    ecx = 0x10;
    PUSH32(esp, 0); sub_003E62A0(); /* call 0x003E62A0 */

loc_002A61DE: ;
    PUSH32(esp, 0x1F4);
    PUSH32(esp, edi);
    PUSH32(esp, 0); sub_003E6BD0(); /* call 0x003E6BD0 */

loc_002A61E9: ;
    ebp = eax;
    esp = esp + 8;
    if (TEST_NZ(ebp, ebp)) goto loc_002A6214; /* jne: not equal / not zero */

loc_002A61F2: ;
    esi = MEM32(0x84A184);
    ecx = 0x10;
    edi = esi;
    PUSH32(esp, 0); sub_003E62A0(); /* call 0x003E62A0 */

loc_002A6204: ;
    PUSH32(esp, 0x1F4);
    PUSH32(esp, edi);
    PUSH32(esp, 0); sub_003E6BD0(); /* call 0x003E6BD0 */

loc_002A620F: ;
    esp = esp + 8;
    ebp = eax;

loc_002A6214: ;
    eax = 0; /* xor self */
    ecx = 0x7D;
    edi = ebp;
    { uint32_t _i; for (_i = 0; _i < ecx; _i++) MEM32(edi + _i*4) = eax; }
    edi += ecx * 4; ecx = 0; /* rep stosd */
    MEM8(esp + 0xF) = LO8(eax);
    eax = ZX8(MEM8(0x862D13));
    PUSH32(esp, 0); sub_004200A0(); /* call 0x004200A0 */

loc_002A622F: ;
    if (TEST_Z(eax, eax)) goto loc_002A6298; /* je: equal / zero */

loc_002A6233: ;
    SET_LO8(eax, MEM8(0x862D2C));
    if (TEST_S(LO8(eax), LO8(eax))) goto loc_002A6298; /* jl: less (signed <) */

loc_002A623C: ;
    esi = ZX8(MEM8(0x862D13));
    PUSH32(esp, 0); sub_00426DB0(); /* call 0x00426DB0 */

loc_002A6248: ;
    ecx = (uint32_t)(int32_t)SMEM8(0x862D2C);
    if (CMP_GE(ecx, eax)) goto loc_002A6298; /* jge: greater or equal (signed >=) */

loc_002A6253: ;
    esi = ZX8(MEM8(0x862D13));
    edi = 0; /* xor self */
    PUSH32(esp, 0); sub_00426DB0(); /* call 0x00426DB0 */

loc_002A6261: ;
    if (CMP_LE(eax & eax, 0)) goto loc_002A6293; /* jle: less or equal (signed <=) */

loc_002A6265: ;
    goto loc_002A6270;

    /* nop */
    edi = edi;

loc_002A6270: ;
    esi = ZX8(MEM8(0x862D13));
    eax = edi;
    PUSH32(esp, 0); sub_00427010(); /* call 0x00427010 */

loc_002A627E: ;
    MEM32(ebp + edi * 4) = eax;
    esi = ZX8(MEM8(0x862D13));
    edi++;
    PUSH32(esp, 0); sub_00426DB0(); /* call 0x00426DB0 */

loc_002A628F: ;
    if (CMP_L(edi, eax)) goto loc_002A6270; /* jl: less (signed <) */

loc_002A6293: ;
    MEM8(esp + 0xF) = 1;

loc_002A6298: ;
    eax = MEM32(0x849E74);
    PUSH32(esp, ebx);
    ebx = 0; /* xor self */
    if (TEST_Z(eax, eax)) goto loc_002A62C8; /* je: equal / zero */

loc_002A62A4: ;
    SET_LO8(ecx, MEM8(eax + 0x3E));
    if (TEST_Z(LO8(ecx), LO8(ecx))) goto loc_002A62B7; /* je: equal / zero */

loc_002A62AB: ;
    SET_LO8(ecx, MEM8(eax + 0x10));
    if (TEST_NZ(LO8(ecx), LO8(ecx))) goto loc_002A62B7; /* jne: not equal / not zero */

loc_002A62B2: ;
    ebx = 1;

loc_002A62B7: ;
    SET_LO8(ecx, MEM8(eax + 0x66));
    if (TEST_Z(LO8(ecx), LO8(ecx))) goto loc_002A62C8; /* je: equal / zero */

loc_002A62BE: ;
    SET_LO8(ecx, MEM8(eax + 0x10));
    if (TEST_NZ(LO8(ecx), LO8(ecx))) goto loc_002A62C8; /* jne: not equal / not zero */

loc_002A62C5: ;
    ebx = ebx | 2;

loc_002A62C8: ;
    PUSH32(esp, 0); sub_0041F070(); /* call 0x0041F070 */

loc_002A62CD: ;
    SET_LO8(eax, MEM8(esp + 0x13));
    if (TEST_Z(LO8(eax), LO8(eax))) goto loc_002A6354; /* je: equal / zero */

loc_002A62D5: ;
    esi = ZX8(MEM8(0x862D13));
    edi = (uint32_t)(int32_t)SMEM8(0x862D2C);
    PUSH32(esp, 0); sub_00426DB0(); /* call 0x00426DB0 */

loc_002A62E8: ;
    if (CMP_GE(edi, eax)) goto loc_002A6307; /* jge: greater or equal (signed >=) */

loc_002A62EC: ;
    esi = ZX8(MEM8(0x862D13));
    eax = edi;
    PUSH32(esp, 0); sub_00427010(); /* call 0x00427010 */

loc_002A62FA: ;
    edx = (uint32_t)(int32_t)SMEM8(0x862D2C);
    if (CMP_EQ(MEM32(ebp + edx * 4), eax)) goto loc_002A6354; /* je: equal / zero */

loc_002A6307: ;
    esi = ZX8(MEM8(0x862D13));
    ebx = 0; /* xor self */
    PUSH32(esp, 0); sub_00426DB0(); /* call 0x00426DB0 */

loc_002A6315: ;
    if (CMP_LE(eax & eax, 0)) goto loc_002A6354; /* jle: less or equal (signed <=) */

loc_002A6319: ;
    /* nop */

loc_002A6320: ;
    esi = ZX8(MEM8(0x862D13));
    eax = ebx;
    PUSH32(esp, 0); sub_00427010(); /* call 0x00427010 */

loc_002A632E: ;
    ecx = (uint32_t)(int32_t)SMEM8(0x862D2C);
    if (CMP_EQ(MEM32(ebp + ecx * 4), eax)) goto loc_002A634E; /* je: equal / zero */

loc_002A633B: ;
    esi = ZX8(MEM8(0x862D13));
    ebx++;
    PUSH32(esp, 0); sub_00426DB0(); /* call 0x00426DB0 */

loc_002A6348: ;
    if (CMP_L(ebx, eax)) goto loc_002A6320; /* jl: less (signed <) */

loc_002A634C: ;
    goto loc_002A6354;

loc_002A634E: ;
    MEM8(0x862D2C) = LO8(ebx);

loc_002A6354: ;
    PUSH32(esp, ebp);
    PUSH32(esp, 0); sub_0042C911(); /* call 0x0042C911 */

loc_002A635A: ;
    (void)0; /* test eax, eax - flags set for next jcc */
    POP32(esp, ebx);
    if (TEST_NZ(eax, eax)) goto loc_002A6386; /* jne: not equal / not zero */

loc_002A635F: ;
    if (TEST_Z(ebp, ebp)) goto loc_002A6386; /* je: equal / zero */

loc_002A6363: ;
    esi = MEM32(0x7FA490);
    edx = MEM32(0x7FA4B4);
    esi++;
    edx--;
    PUSH32(esp, ebp);
    MEM32(0x7FA490) = esi;
    MEM32(0x7FA4B4) = edx;
    PUSH32(esp, 0); sub_003E7080(); /* call 0x003E7080 */

loc_002A6383: ;
    esp = esp + 4;

loc_002A6386: ;
    POP32(esp, edi);
    POP32(esp, esi);
    POP32(esp, ebp);
    POP32(esp, ecx);
    esp += 4; return; /* ret */

}

/**
 * sub_002A6390
 * Original: 0x002A6390 - 0x002A63B6 (38 bytes, 13 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_002A6390(void)
{
    int _flags = 0; /* fallback flag var */

loc_002A6390: ;
    eax = MEM32(0x6C0224);
    if (CMP_NE(eax, 1)) goto loc_002A63A4; /* jne: not equal / not zero */

loc_002A639A: ;
    PUSH32(esp, 0); sub_002A64A0(); /* call 0x002A64A0 */

loc_002A639F: ;
    eax = MEM32(0x6C0224);

loc_002A63A4: ;
    if (CMP_EQ(eax, 6)) { sub_002A63B6(); return; } /* je: equal / zero */

loc_002A63A9: ;
    if (CMP_EQ(eax, 7)) { sub_002A63B6(); return; } /* je: equal / zero */

loc_002A63AE: ;
    if (CMP_EQ(eax, 8)) { sub_002A63B6(); return; } /* je: equal / zero */

loc_002A63B3: ;
    eax = 0; /* xor self */
    esp += 4; return; /* ret */

}

/**
 * sub_002A63C0
 * Original: 0x002A63C0 - 0x002A63E1 (33 bytes, 11 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_002A63C0(void)
{
    int _flags = 0; /* fallback flag var */

loc_002A63C0: ;
    eax = MEM32(0x6C0224);
    if (CMP_NE(eax, 1)) goto loc_002A63D4; /* jne: not equal / not zero */

loc_002A63CA: ;
    PUSH32(esp, 0); sub_002A64A0(); /* call 0x002A64A0 */

loc_002A63CF: ;
    eax = MEM32(0x6C0224);

loc_002A63D4: ;
    if (CMP_EQ(eax, 6)) { sub_002A63E1(); return; } /* je: equal / zero */

loc_002A63D9: ;
    if (CMP_EQ(eax, 8)) { sub_002A63E1(); return; } /* je: equal / zero */

loc_002A63DE: ;
    eax = 0; /* xor self */
    esp += 4; return; /* ret */

}

/**
 * sub_002A63F0
 * Original: 0x002A63F0 - 0x002A6411 (33 bytes, 11 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_002A63F0(void)
{
    int _flags = 0; /* fallback flag var */

loc_002A63F0: ;
    eax = MEM32(0x6C0224);
    if (CMP_NE(eax, 1)) goto loc_002A6404; /* jne: not equal / not zero */

loc_002A63FA: ;
    PUSH32(esp, 0); sub_002A64A0(); /* call 0x002A64A0 */

loc_002A63FF: ;
    eax = MEM32(0x6C0224);

loc_002A6404: ;
    if (CMP_EQ(eax, 7)) { sub_002A6411(); return; } /* je: equal / zero */

loc_002A6409: ;
    if (CMP_EQ(eax, 8)) { sub_002A6411(); return; } /* je: equal / zero */

loc_002A640E: ;
    eax = 0; /* xor self */
    esp += 4; return; /* ret */

}

/**
 * sub_002A6420
 * Original: 0x002A6420 - 0x002A644C (44 bytes, 11 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_002A6420(void)
{
    uint32_t ebp;
    int _flags = 0; /* fallback flag var */
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_002A6420: ;
    if (CMP_NE(MEM32(0x6C0224), 1)) goto loc_002A642E; /* jne: not equal / not zero */

loc_002A6429: ;
    PUSH32(esp, 0); sub_002A64A0(); /* call 0x002A64A0 */

loc_002A642E: ;
    eax = MEM32(0x6C0224);
    eax = eax + 0xFFFFFFFDu;
    if (CMP_A(eax, 0xC)) { sub_002A644C(); return; } /* ja: above (unsigned >) */

loc_002A643B: ;
    eax = ZX8(MEM8(eax + 0x2A6458));
    g_seh_ebp = ebp; RECOMP_ITAIL(MEM32(eax * 4 + 0x2A6450)); return; /* indirect tail jmp */

    SET_LO8(eax, 1);
    esp += 4; return; /* ret */

}

/**
 * sub_002A6470
 * Original: 0x002A6470 - 0x002A6491 (33 bytes, 11 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_002A6470(void)
{
    int _flags = 0; /* fallback flag var */

loc_002A6470: ;
    eax = MEM32(0x6C0224);
    if (CMP_NE(eax, 1)) goto loc_002A6484; /* jne: not equal / not zero */

loc_002A647A: ;
    PUSH32(esp, 0); sub_002A64A0(); /* call 0x002A64A0 */

loc_002A647F: ;
    eax = MEM32(0x6C0224);

loc_002A6484: ;
    if (CMP_L(eax, 3)) { sub_002A6491(); return; } /* jl: less (signed <) */

loc_002A6489: ;
    if (CMP_G(eax, 5)) { sub_002A6491(); return; } /* jg: greater (signed >) */

loc_002A648E: ;
    SET_LO8(eax, 1);
    esp += 4; return; /* ret */

}

/**
 * sub_002A64A0
 * Original: 0x002A64A0 - 0x002A658B (235 bytes, 74 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_002A64A0(void)
{
    uint32_t ebp;
    int _flags = 0; /* fallback flag var */

loc_002A64A0: ;
    PUSH32(esp, ebp);
    ebp = esp;
    esp = esp & 0xFFFFFFF8u;
    esp = esp - 0x50C;
    PUSH32(esp, ebx);
    PUSH32(esp, esi);
    PUSH32(esp, edi);
    PUSH32(esp, 0x606640);
    PUSH32(esp, 0x780AB8);
    eax = esp + 0x18;
    PUSH32(esp, 0x5AC8A0);
    PUSH32(esp, eax);
    PUSH32(esp, 0); sub_0046EC2D(); /* call 0x0046EC2D */

loc_002A64C8: ;
    PUSH32(esp, 0);
    eax = 0x606640;
    PUSH32(esp, 0); sub_0029CD50(); /* call 0x0029CD50 */

loc_002A64D4: ;
    esp = esp + 0x14;
    if (TEST_Z(LO8(eax), LO8(eax))) goto loc_002A6571; /* je: equal / zero */

loc_002A64DF: ;
    ecx = esp + 0x10;
    PUSH32(esp, 0x5F1104);
    PUSH32(esp, ecx);
    PUSH32(esp, 0); sub_0046F342(); /* call 0x0046F342 */

loc_002A64EE: ;
    ebx = eax;
    esp = esp + 8;
    if (TEST_Z(ebx, ebx)) goto loc_002A6571; /* je: equal / zero */

loc_002A64F7: ;
    eax = 0; /* xor self */
    ecx = 0x100;
    edi = esp + 0x118;
    { uint32_t _i; for (_i = 0; _i < ecx; _i++) MEM32(edi + _i*4) = eax; }
    edi += ecx * 4; ecx = 0; /* rep stosd */
    esi = 0; /* xor self */
    /* nop */

loc_002A6510: ;
    PUSH32(esp, ebx);
    PUSH32(esp, 0); sub_0046F7AD(); /* call 0x0046F7AD */

loc_002A6516: ;
    esp = esp + 4;
    if (CMP_EQ(eax, 0xFFFFFFFFu)) goto loc_002A6533; /* je: equal / zero */

loc_002A651E: ;
    if (CMP_EQ(eax, 0xA)) goto loc_002A6533; /* je: equal / zero */

loc_002A6523: ;
    MEM8(esp + esi + 0x118) = LO8(eax);
    esi++;
    if (CMP_L(esi, 0x3FF)) goto loc_002A6510; /* jl: less (signed <) */

loc_002A6533: ;
    PUSH32(esp, ebx);
    PUSH32(esp, 0); sub_0046F3A1(); /* call 0x0046F3A1 */

loc_002A6539: ;
    esp = esp + 4;
    esi = 0; /* xor self */
    edi = edi;

loc_002A6540: ;
    eax = MEM32(esi * 4 + 0x6C0228);
    if (TEST_Z(eax, eax)) goto loc_002A656B; /* je: equal / zero */

loc_002A654B: ;
    if (CMP_EQ(MEM8(eax), 0)) goto loc_002A656B; /* je: equal / zero */

loc_002A6550: ;
    PUSH32(esp, eax);
    edx = esp + 0x11C;
    PUSH32(esp, edx);
    PUSH32(esp, 0); sub_00470C66(); /* call 0x00470C66 */

loc_002A655E: ;
    esp = esp + 8;
    if (TEST_NZ(eax, eax)) goto loc_002A656B; /* jne: not equal / not zero */

loc_002A6565: ;
    MEM32(0x6C0224) = esi;

loc_002A656B: ;
    esi++;
    if (CMP_L(esi, 0x10)) goto loc_002A6540; /* jl: less (signed <) */

loc_002A6571: ;
    if (CMP_NE(MEM32(0x6C0224), 1)) goto loc_002A6584; /* jne: not equal / not zero */

loc_002A657A: ;
    MEM32(0x6C0224) = 0xF;

loc_002A6584: ;
    POP32(esp, edi);
    POP32(esp, esi);
    POP32(esp, ebx);
    esp = ebp;
    POP32(esp, ebp);
    esp += 4; return; /* ret */

}

/**
 * sub_002A6590
 * Original: 0x002A6590 - 0x002A669F (271 bytes, 57 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_002A6590(void)
{
    int _flags = 0; /* fallback flag var */
    float xmm0;

loc_002A6590: ;
    esp = esp - 0x248;
    PUSH32(esp, ebx);
    PUSH32(esp, 0); sub_0042B72A(); /* call 0x0042B72A */

loc_002A659C: ;
    xmm0 = 0.0f; /* xorps self = zero */
    MEM32(0x84A120) = eax;
    eax = esp + 0x14;
    PUSH32(esp, eax);
    MEM32(esp + 0x10) = 0x606874;
    MEMF(esp + 0x14) = xmm0; /* movss */
    PUSH32(esp, 0); sub_0042E13B(); /* call 0x0042E13B */

loc_002A65BC: ;
    PUSH32(esp, 0); sub_002A6810(); /* call 0x002A6810 */

loc_002A65C1: ;
    PUSH32(esp, 0); sub_002A6870(); /* call 0x002A6870 */

loc_002A65C6: ;
    PUSH32(esp, 0); sub_002A6970(); /* call 0x002A6970 */

loc_002A65CB: ;
    PUSH32(esp, 0x30000);
    PUSH32(esp, 0x20000);
    PUSH32(esp, 0); sub_00470822(); /* call 0x00470822 */

loc_002A65DA: ;
    /* TODO: stmxcsr dword ptr [esp + 0xc] */
    ecx = MEM32(esp + 0xC);
    ecx = ecx | 0x8000;
    MEM32(esp + 0xC) = ecx;
    /* TODO: ldmxcsr dword ptr [esp + 0xc] */
    PUSH32(esp, 0); sub_00060980(); /* call 0x00060980 */

loc_002A65F7: ;
    PUSH32(esp, 0); sub_000609D0(); /* call 0x000609D0 */

loc_002A65FC: ;
    PUSH32(esp, 0x606864);
    PUSH32(esp, 0x587BE4);
    PUSH32(esp, 0x18);
    eax = esp + 0x158;
    PUSH32(esp, 0); sub_0005E4E0(); /* call 0x0005E4E0 */

loc_002A6614: ;
    ebx = 0; /* xor self */
    esp = esp + 0x14;
    eax = esp + 0x138;
    MEM32(esp + 0x248) = 0x18;
    MEM32(esp + 0x138) = ebx;
    MEM32(esp + 0x140) = ebx;
    MEM32(esp + 0x13C) = ebx;
    PUSH32(esp, 0); sub_00063680(); /* call 0x00063680 */

loc_002A6645: ;
    PUSH32(esp, 0x606848);
    PUSH32(esp, 0x587BE4);
    PUSH32(esp, 0x18);
    eax = esp + 0x3C;
    PUSH32(esp, 0); sub_0005E4E0(); /* call 0x0005E4E0 */

loc_002A665A: ;
    esp = esp + 0xC;
    eax = esp + 0x24;
    MEM32(esp + 0x134) = 0x18;
    MEM32(esp + 0x24) = ebx;
    MEM32(esp + 0x2C) = ebx;
    MEM32(esp + 0x28) = ebx;
    PUSH32(esp, 0); sub_00063680(); /* call 0x00063680 */

loc_002A667D: ;
    /* nop */

loc_002A6680: ;
    ecx = MEM32(esp + 0x13C);
    eax = MEM32(ecx + 4);
    if (CMP_L(eax, 0x3E4)) { sub_002A669F(); return; } /* jl: less (signed <) */

loc_002A6691: ;
    if (CMP_G(eax, 0x3E5)) { sub_002A669F(); return; } /* jg: greater (signed >) */

loc_002A6698: ;
    PUSH32(esp, 0); sub_002A37B0(); /* call 0x002A37B0 */

loc_002A669D: ;
    goto loc_002A6680;

}

/**
 * sub_002A6810
 * Original: 0x002A6810 - 0x002A6863 (83 bytes, 21 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_002A6810(void)
{
    float xmm0;

loc_002A6810: ;
    esp = esp - 0x20;
    xmm0 = 0.0f; /* xorps self = zero */
    eax = esp + 0x10;
    PUSH32(esp, eax);
    MEM32(esp + 0xC) = 0x606830;
    MEMF(esp + 0x10) = xmm0; /* movss */
    PUSH32(esp, 0); sub_0042E13B(); /* call 0x0042E13B */

loc_002A682E: ;
    PUSH32(esp, 0); sub_002AED70(); /* call 0x002AED70 */

loc_002A6833: ;
    PUSH32(esp, 0); sub_002A6D90(); /* call 0x002A6D90 */

loc_002A6838: ;
    PUSH32(esp, 0); sub_002AF000(); /* call 0x002AF000 */

loc_002A683D: ;
    PUSH32(esp, 0); sub_002A7490(); /* call 0x002A7490 */

loc_002A6842: ;
    PUSH32(esp, 0); sub_002A7840(); /* call 0x002A7840 */

loc_002A6847: ;
    PUSH32(esp, 0); sub_0004C950(); /* call 0x0004C950 */

loc_002A684C: ;
    ecx = esp + 0x18;
    PUSH32(esp, ecx);
    PUSH32(esp, 0); sub_0042E13B(); /* call 0x0042E13B */

loc_002A6856: ;
    edx = esp;
    PUSH32(esp, edx);
    PUSH32(esp, 0); sub_0042E14C(); /* call 0x0042E14C */

loc_002A685F: ;
    esp = esp + 0x20;
    esp += 4; return; /* ret */

}

/**
 * sub_002A6870
 * Original: 0x002A6870 - 0x002A6928 (184 bytes, 44 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_002A6870(void)
{
    int _flags = 0; /* fallback flag var */
    float xmm0;

loc_002A6870: ;
    esp = esp - 0x20;
    xmm0 = 0.0f; /* xorps self = zero */
    PUSH32(esp, esi);
    PUSH32(esp, edi);
    eax = esp + 0x18;
    PUSH32(esp, eax);
    MEM32(esp + 0x14) = 0x60681C;
    MEMF(esp + 0x18) = xmm0; /* movss */
    PUSH32(esp, 0); sub_0042E13B(); /* call 0x0042E13B */

loc_002A6890: ;
    PUSH32(esp, 0x10000);
    PUSH32(esp, 0); sub_0042D30A(); /* call 0x0042D30A */

loc_002A689A: ;
    esi = 0; /* xor self */
    eax = 0; /* xor self */
    ecx = 0x1A;
    edi = 0x776098;
    { uint32_t _i; for (_i = 0; _i < ecx; _i++) MEM32(edi + _i*4) = eax; }
    edi += ecx * 4; ecx = 0; /* rep stosd */
    (void)0; /* cmp MEM32(0x849784), esi - flags set for next jcc */
    MEM32(0x775F44) = esi;
    MEM32(0x775F48) = esi;
    MEM32(0x775F4C) = esi;
    MEM32(0x775F50) = esi;
    MEM32(0x775F54) = esi;
    MEM32(0x775F58) = esi;
    MEM8(0x775F40) = 1;
    if (CMP_NE(MEM32(0x849784), esi)) goto loc_002A68F5; /* jne: not equal / not zero */

loc_002A68DD: ;
    PUSH32(esp, 0x20000000);
    PUSH32(esp, 0x100);
    PUSH32(esp, 0); sub_002AF430(); /* call 0x002AF430 */

loc_002A68EC: ;
    (void)0; /* cmp eax, esi - flags set for next jcc */
    MEM32(0x849784) = eax;
    if (CMP_EQ(eax, esi)) goto loc_002A68FF; /* je: equal / zero */

loc_002A68F5: ;
    MEM32(0x849780) = 0x42C811;

loc_002A68FF: ;
    MEM32(0x849788) = 2;
    PUSH32(esp, 0); sub_0005E3D0(); /* call 0x0005E3D0 */

loc_002A690E: ;
    ecx = esp + 0x20;
    PUSH32(esp, ecx);
    PUSH32(esp, 0); sub_0042E13B(); /* call 0x0042E13B */

loc_002A6918: ;
    edx = esp + 8;
    PUSH32(esp, edx);
    PUSH32(esp, 0); sub_0042E14C(); /* call 0x0042E14C */

loc_002A6922: ;
    POP32(esp, edi);
    POP32(esp, esi);
    esp = esp + 0x20;
    esp += 4; return; /* ret */

}

/**
 * sub_002A6930
 * Original: 0x002A6930 - 0x002A6962 (50 bytes, 20 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_002A6930(void)
{
    int _flags = 0; /* fallback flag var */

loc_002A6930: ;
    PUSH32(esp, esi);
    PUSH32(esp, edi);
    PUSH32(esp, 0); sub_0005F5F0(); /* call 0x0005F5F0 */

loc_002A6937: ;
    edi = eax;
    MEM8(edi + 0xC) = 1;
    esi = 0x68C7E4;

loc_002A6942: ;
    eax = MEM32(esi + -4);
    ecx = MEM32(esi);
    PUSH32(esp, eax);
    eax = MEM32(esi + 4);
    PUSH32(esp, ecx);
    PUSH32(esp, 2);
    PUSH32(esp, edi);
    PUSH32(esp, 0); sub_0005FAF0(); /* call 0x0005FAF0 */

loc_002A6954: ;
    esi = esi + 0xC;
    if (CMP_L(esi, 0x68C9F4)) goto loc_002A6942; /* jl: less (signed <) */

loc_002A695F: ;
    POP32(esp, edi);
    POP32(esp, esi);
    esp += 4; return; /* ret */

}

/**
 * sub_002A6970
 * Original: 0x002A6970 - 0x002A69FC (140 bytes, 32 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_002A6970(void)
{
    uint32_t ebp;
    int _flags = 0; /* fallback flag var */
    float xmm0;
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_002A6970: ;
    esp = esp - 0x20;
    xmm0 = 0.0f; /* xorps self = zero */
    PUSH32(esp, esi);
    eax = esp + 0x14;
    PUSH32(esp, eax);
    MEM32(esp + 0x10) = 0x606808;
    MEMF(esp + 0x14) = xmm0; /* movss */
    PUSH32(esp, 0); sub_0042E13B(); /* call 0x0042E13B */

loc_002A698F: ;
    SET_LO8(eax, 0); /* xor self */
    edx = 2;
    PUSH32(esp, 0); sub_002A78D0(); /* call 0x002A78D0 */

loc_002A699B: ;
    PUSH32(esp, 0); sub_00313B10(); /* call 0x00313B10 */

loc_002A69A0: ;
    PUSH32(esp, 0); sub_002A77A0(); /* call 0x002A77A0 */

loc_002A69A5: ;
    eax = 0x630C0;
    PUSH32(esp, 0x18);
    MEM32(0x84B7E0) = 0x2A7800;
    MEM32(0x84B7E4) = eax;
    MEM32(0x84B7E8) = 0x2AED30;
    MEM32(0x84B7EC) = 0x630C0;
    MEM32(0x84B85C) = 0x2A7820;
    MEM32(0x84B860) = eax;
    PUSH32(esp, 0); sub_000EBDA0(); /* call 0x000EBDA0 */

loc_002A69E3: ;
    esi = 0; /* xor self */
    esp = esp + 4;
    if (CMP_EQ(eax, esi)) { sub_002A69FC(); return; } /* je: equal / zero */

loc_002A69EC: ;
    PUSH32(esp, edi);
    edi = eax;
    PUSH32(esp, 0); sub_000EBC60(); /* call 0x000EBC60 */

loc_002A69F4: ;
    MEM32(0x771B6C) = eax;
    POP32(esp, edi);
    g_seh_ebp = ebp; sub_002A6A02(); return; /* tail jmp 0x002A6A02 */

}

/**
 * sub_002A6BD0
 * Original: 0x002A6BD0 - 0x002A6D86 (438 bytes, 121 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_002A6BD0(void)
{
    int _flags = 0; /* fallback flag var */

loc_002A6BD0: ;
    eax = MEM32(0x84A19C);
    if (TEST_NZ(eax, eax)) goto loc_002A6BDE; /* jne: not equal / not zero */

loc_002A6BD9: ;
    PUSH32(esp, 0); sub_002AED70(); /* call 0x002AED70 */

loc_002A6BDE: ;
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
    if (TEST_Z(esi, esi)) goto loc_002A6C30; /* je: equal / zero */

loc_002A6C06: ;
    if (CMP_B(MEM32(esi + 0x80), 0x36ED0)) goto loc_002A6C30; /* jb: below (unsigned <) */

loc_002A6C12: ;
    ecx = 0x10;
    PUSH32(esp, 0); sub_003E62A0(); /* call 0x003E62A0 */

loc_002A6C1C: ;
    PUSH32(esp, 0x36ED0);
    PUSH32(esp, edi);
    PUSH32(esp, 0); sub_003E6BD0(); /* call 0x003E6BD0 */

loc_002A6C27: ;
    edi = eax;
    esp = esp + 8;
    if (TEST_NZ(edi, edi)) goto loc_002A6C52; /* jne: not equal / not zero */

loc_002A6C30: ;
    esi = MEM32(0x84A184);
    ecx = 0x10;
    edi = esi;
    PUSH32(esp, 0); sub_003E62A0(); /* call 0x003E62A0 */

loc_002A6C42: ;
    PUSH32(esp, 0x36ED0);
    PUSH32(esp, edi);
    PUSH32(esp, 0); sub_003E6BD0(); /* call 0x003E6BD0 */

loc_002A6C4D: ;
    esp = esp + 8;
    edi = eax;

loc_002A6C52: ;
    eax = 0; /* xor self */
    ecx = 0xDBB4;
    MEM32(0x84A5F8) = edi;
    { uint32_t _i; for (_i = 0; _i < ecx; _i++) MEM32(edi + _i*4) = eax; }
    edi += ecx * 4; ecx = 0; /* rep stosd */
    eax = MEM32(0x84A19C);
    if (TEST_NZ(eax, eax)) goto loc_002A6C6F; /* jne: not equal / not zero */

loc_002A6C6A: ;
    PUSH32(esp, 0); sub_002AED70(); /* call 0x002AED70 */

loc_002A6C6F: ;
    edx = MEM32(0x7FA494);
    ecx = MEM32(0x7FA4B4);
    esi = MEM32(0x84A190);
    edx++;
    ecx++;
    (void)0; /* test esi, esi - flags set for next jcc */
    MEM32(0x7FA494) = edx;
    MEM32(0x7FA4B4) = ecx;
    edi = esi;
    if (TEST_Z(esi, esi)) goto loc_002A6CBF; /* je: equal / zero */

loc_002A6C95: ;
    if (CMP_B(MEM32(esi + 0x80), 0x102)) goto loc_002A6CBF; /* jb: below (unsigned <) */

loc_002A6CA1: ;
    ecx = 0x10;
    PUSH32(esp, 0); sub_003E62A0(); /* call 0x003E62A0 */

loc_002A6CAB: ;
    PUSH32(esp, 0x102);
    PUSH32(esp, edi);
    PUSH32(esp, 0); sub_003E6BD0(); /* call 0x003E6BD0 */

loc_002A6CB6: ;
    edi = eax;
    esp = esp + 8;
    if (TEST_NZ(edi, edi)) goto loc_002A6CE1; /* jne: not equal / not zero */

loc_002A6CBF: ;
    esi = MEM32(0x84A184);
    ecx = 0x10;
    edi = esi;
    PUSH32(esp, 0); sub_003E62A0(); /* call 0x003E62A0 */

loc_002A6CD1: ;
    PUSH32(esp, 0x102);
    PUSH32(esp, edi);
    PUSH32(esp, 0); sub_003E6BD0(); /* call 0x003E6BD0 */

loc_002A6CDC: ;
    esp = esp + 8;
    edi = eax;

loc_002A6CE1: ;
    eax = 0; /* xor self */
    MEM32(0x84A5FC) = edi;
    ecx = 0x40;
    { uint32_t _i; for (_i = 0; _i < ecx; _i++) MEM32(edi + _i*4) = eax; }
    edi += ecx * 4; ecx = 0; /* rep stosd */
    MEM16(edi) = LO16(eax); edi += 2; /* stosw */
    eax = MEM32(0x84A19C);
    if (TEST_NZ(eax, eax)) goto loc_002A6D00; /* jne: not equal / not zero */

loc_002A6CFB: ;
    PUSH32(esp, 0); sub_002AED70(); /* call 0x002AED70 */

loc_002A6D00: ;
    edx = MEM32(0x7FA494);
    ecx = MEM32(0x7FA4B4);
    esi = MEM32(0x84A190);
    edx++;
    ecx++;
    (void)0; /* test esi, esi - flags set for next jcc */
    MEM32(0x7FA494) = edx;
    MEM32(0x7FA4B4) = ecx;
    edi = esi;
    if (TEST_Z(esi, esi)) goto loc_002A6D50; /* je: equal / zero */

loc_002A6D26: ;
    if (CMP_B(MEM32(esi + 0x80), 0x102)) goto loc_002A6D50; /* jb: below (unsigned <) */

loc_002A6D32: ;
    ecx = 0x10;
    PUSH32(esp, 0); sub_003E62A0(); /* call 0x003E62A0 */

loc_002A6D3C: ;
    PUSH32(esp, 0x102);
    PUSH32(esp, edi);
    PUSH32(esp, 0); sub_003E6BD0(); /* call 0x003E6BD0 */

loc_002A6D47: ;
    edi = eax;
    esp = esp + 8;
    if (TEST_NZ(edi, edi)) goto loc_002A6D72; /* jne: not equal / not zero */

loc_002A6D50: ;
    esi = MEM32(0x84A184);
    ecx = 0x10;
    edi = esi;
    PUSH32(esp, 0); sub_003E62A0(); /* call 0x003E62A0 */

loc_002A6D62: ;
    PUSH32(esp, 0x102);
    PUSH32(esp, edi);
    PUSH32(esp, 0); sub_003E6BD0(); /* call 0x003E6BD0 */

loc_002A6D6D: ;
    esp = esp + 8;
    edi = eax;

loc_002A6D72: ;
    MEM32(0x84A600) = edi;
    ecx = 0x40;
    eax = 0; /* xor self */
    { uint32_t _i; for (_i = 0; _i < ecx; _i++) MEM32(edi + _i*4) = eax; }
    edi += ecx * 4; ecx = 0; /* rep stosd */
    MEM16(edi) = LO16(eax); edi += 2; /* stosw */
    POP32(esp, edi);
    POP32(esp, esi);
    esp += 4; return; /* ret */

}

/**
 * sub_002A6D90
 * Original: 0x002A6D90 - 0x002A6E93 (259 bytes, 68 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_002A6D90(void)
{
    int _flags = 0; /* fallback flag var */

loc_002A6D90: ;
    esp = esp - 0x64;
    PUSH32(esp, esi);
    PUSH32(esp, edi);
    eax = 0; /* xor self */
    esi = 1;
    ecx = 0x11;
    edi = esp + 0x28;
    { uint32_t _i; for (_i = 0; _i < ecx; _i++) MEM32(edi + _i*4) = eax; }
    edi += ecx * 4; ecx = 0; /* rep stosd */
    MEM32(esp + 0x28) = 0x280;
    MEM32(esp + 0x2C) = 0x1E0;
    MEM32(esp + 0x30) = 6;
    MEM32(esp + 0x34) = esi;
    MEM32(esp + 0x48) = esi;
    MEM32(esp + 0x4C) = 0x2A;
    MEM32(esp + 0x3C) = esi;
    MEM32(esp + 0x58) = 0x80000001u;
    PUSH32(esp, 0); sub_0042E5A9(); /* call 0x0042E5A9 */

loc_002A6DE0: ;
    if (TEST_Z(LO8(eax), 8)) goto loc_002A6DE9; /* je: equal / zero */

loc_002A6DE4: ;
    MEM32(esp + 0x50) = MEM32(esp + 0x50) | 0x40;

loc_002A6DE9: ;
    eax = esp + 0x28;
    PUSH32(esp, eax);
    ecx = esp + 0xC;
    eax = 0x40;
    PUSH32(esp, 0); sub_0053D8B0(); /* call 0x0053D8B0 */

loc_002A6DFC: ;
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, 0); RECOMP_ICALL_SAFE(MEM32(0x561154), _icall_esp); /* indirect call */
    }

loc_002A6E02: ;
    (void)0; /* test eax, eax - flags set for next jcc */
    MEM32(0x84A12C) = eax;
    if (TEST_Z(eax, eax)) goto loc_002A6E29; /* je: equal / zero */

loc_002A6E0B: ;
    PUSH32(esp, ebx);
    esi = esp + 0x10;
    ebx = 0; /* xor self */
    edi = eax;
    PUSH32(esp, 0); sub_0053FC70(); /* call 0x0053FC70 */

loc_002A6E19: ;
    ecx = MEM32(esp + 0x1C);
    MEM32(0x84A130) = ecx;
    esi = 1;
    POP32(esp, ebx);

loc_002A6E29: ;
    eax = MEM32(0x5499E8);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, 0);
    PUSH32(esp, 0);
    PUSH32(esp, esi);
    MEM32(eax + 0x1DC0) = 0;
    PUSH32(esp, 6);
    eax = eax + 0x1DBC;
    PUSH32(esp, eax);
    PUSH32(esp, 0); RECOMP_ICALL_SAFE(MEM32(0x561150), _icall_esp); /* indirect call */
    }

loc_002A6E4B: ;
    eax = 0; /* xor self */
    PUSH32(esp, 0); sub_0053D700(); /* call 0x0053D700 */

loc_002A6E52: ;
    edx = MEM32(0x5499E8);
    eax = MEM32(edx + 0x2C);
    PUSH32(esp, 2);
    PUSH32(esp, eax);
    PUSH32(esp, 0); sub_0053C190(); /* call 0x0053C190 */

loc_002A6E63: ;
    edi = MEM32(0x5499E8);
    eax = MEM32(edi + 0x938);
    if (CMP_NE(eax, esi)) { sub_002A6E93(); return; } /* jne: not equal / not zero */

loc_002A6E73: ;
    eax = edi;
    PUSH32(esp, 0); sub_0053EEF0(); /* call 0x0053EEF0 */

loc_002A6E7A: ;
    ecx = 0x928;
    eax = 0; /* xor self */
    { uint32_t _i; for (_i = 0; _i < ecx; _i++) MEM32(edi + _i*4) = eax; }
    edi += ecx * 4; ecx = 0; /* rep stosd */
    POP32(esp, edi);
    MEM32(0x5499E8) = 0;
    POP32(esp, esi);
    esp = esp + 0x64;
    esp += 4; return; /* ret */

}

/**
 * sub_002A6EA0
 * Original: 0x002A6EA0 - 0x002A6F1C (124 bytes, 31 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_002A6EA0(void)
{
    uint32_t ebp;
    int _flags = 0; /* fallback flag var */
    float xmm0;
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_002A6EA0: ;
    esp = esp - 0x138;
    xmm0 = 0.0f; /* xorps self = zero */
    PUSH32(esp, ebx);
    PUSH32(esp, ebp);
    eax = esp + 0x1C;
    PUSH32(esp, eax);
    MEM32(esp + 0x18) = 0x6067C8;
    MEMF(esp + 0x1C) = xmm0; /* movss */
    PUSH32(esp, 0); sub_0042E13B(); /* call 0x0042E13B */

loc_002A6EC3: ;
    PUSH32(esp, 0x6065A0);
    PUSH32(esp, 0x5F71A0);
    PUSH32(esp, 0x14);
    eax = esp + 0x44;
    PUSH32(esp, 0); sub_0005E4E0(); /* call 0x0005E4E0 */

loc_002A6ED8: ;
    ebx = 0; /* xor self */
    esp = esp + 0xC;
    eax = esp + 0x2C;
    MEM32(esp + 0x13C) = 0x14;
    MEM32(esp + 0x2C) = ebx;
    MEM32(esp + 0x34) = ebx;
    MEM32(esp + 0x30) = ebx;
    PUSH32(esp, 0); sub_00063680(); /* call 0x00063680 */

loc_002A6EFD: ;
    /* nop */

loc_002A6F00: ;
    ecx = MEM32(esp + 0x30);
    eax = MEM32(ecx + 4);
    if (CMP_L(eax, 0x3E4)) { sub_002A6F1C(); return; } /* jl: less (signed <) */

loc_002A6F0E: ;
    if (CMP_G(eax, 0x3E5)) { sub_002A6F1C(); return; } /* jg: greater (signed >) */

loc_002A6F15: ;
    PUSH32(esp, 0); sub_002A37B0(); /* call 0x002A37B0 */

loc_002A6F1A: ;
    goto loc_002A6F00;

}

/**
 * sub_002A7420
 * Original: 0x002A7420 - 0x002A7489 (105 bytes, 23 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_002A7420(void)
{

loc_002A7420: ;
    ecx = 0x2A7A30;
    eax = 0x630C0;
    PUSH32(esp, edi);
    MEM32(0x84BE58) = 0;
    MEM32(0x84BED8) = ecx;
    MEM32(0x84BEDC) = eax;
    MEM32(0x84BEE0) = ecx;
    MEM32(0x84BEE4) = eax;
    PUSH32(esp, 0); sub_00428250(); /* call 0x00428250 */

loc_002A7450: ;
    PUSH32(esp, 0); sub_00428200(); /* call 0x00428200 */

loc_002A7455: ;
    PUSH32(esp, 0);
    edi = 0x3C;
    PUSH32(esp, 0); sub_004161F0(); /* call 0x004161F0 */

loc_002A7461: ;
    esp = esp + 4;
    PUSH32(esp, 0x5583D8);
    PUSH32(esp, 0); sub_0055A517(); /* call 0x0055A517 */

loc_002A746E: ;
    MEM32(0x84C224) = eax;
    eax = 0xC;
    PUSH32(esp, 0); sub_0041E110(); /* call 0x0041E110 */

loc_002A747D: ;
    PUSH32(esp, 0x75A168);
    PUSH32(esp, 0); sub_002653C0(); /* call 0x002653C0 */

loc_002A7487: ;
    POP32(esp, edi);
    esp += 4; return; /* ret */

}

/**
 * sub_002A7490
 * Original: 0x002A7490 - 0x002A7591 (257 bytes, 44 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_002A7490(void)
{
    uint32_t ebp;
    int _flags = 0; /* fallback flag var */
    float xmm0;
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_002A7490: ;
    eax = 0; /* xor self */
    MEM32(0x7F9ECC) = eax;
    MEM32(0x7F9ED0) = eax;
    MEM32(0x7F9ED4) = eax;
    MEM32(0x7F9ED8) = eax;
    MEM32(0x7F9EDC) = eax;
    MEM32(0x7F9EE0) = eax;
    MEM32(0x7F9EE4) = eax;
    PUSH32(esp, ebx);
    ebx = 1;
    MEM32(0x7F9EE8) = eax;
    PUSH32(esp, esi);
    MEM16(0x7F9ECC) = 0x280;
    MEM16(0x7F9ECE) = 0x1E0;
    MEM32(0x7F9EE0) = ebx;
    MEM8(0x7F9EE6) = LO8(ebx);
    MEM32(0x7F9ED4) = ebx;
    MEM8(0x7F9EE4) = LO8(ebx);
    MEM32(0x7F9ED8) = 0x80000;
    MEM32(0x7F9EDC) = 0x8000;
    MEM8(0x7F9EE8) = LO8(eax);
    PUSH32(esp, 0); sub_0042E5A9(); /* call 0x0042E5A9 */

loc_002A7509: ;
    if (TEST_Z(LO8(eax), 8)) goto loc_002A7513; /* je: equal / zero */

loc_002A750D: ;
    MEM8(0x7F9ED0) = LO8(ebx);

loc_002A7513: ;
    SET_LO8(ecx, MEM8(0x6C0268));
    esi = 0x7F9ECC;
    MEM8(0x7F9EE5) = 0;
    MEM8(0x7F9EE8) = LO8(ebx);
    MEM8(0x7F9EE4) = LO8(ecx);
    MEM32(0x7F9ED8) = 0xC0000;
    MEM32(0x7F9EDC) = 0x20000;
    PUSH32(esp, 0); sub_003FB2D0(); /* call 0x003FB2D0 */

loc_002A754A: ;
    xmm0 = MEMF(0x648D14); /* movss */
    POP32(esp, esi);
    MEM32(0x827F1C) = 0;
    MEM32(0x7F9FF0) = 0x280;
    MEM32(0x7F9FEC) = 0x1E0;
    MEMF(0x7FA258) = xmm0; /* movss */
    MEMF(0x7FA254) = xmm0; /* movss */
    edx = 0x1E0;
    eax = 0x280;
    POP32(esp, ebx);
    g_seh_ebp = ebp; sub_002A9260(); return; /* tail jmp 0x002A9260 */

}

/**
 * sub_002A75A0
 * Original: 0x002A75A0 - 0x002A76F2 (338 bytes, 78 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_002A75A0(void)
{
    uint32_t ebp;
    int _flags = 0; /* fallback flag var */
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_002A75A0: ;
    edx = MEM32(0x5499F0);
    ecx = MEM32(0x81B7C0);
    SET_LO8(eax, MEM8(0x87A1C0));
    PUSH32(esp, ebx);
    ebx = 1;
    edx = edx | 0x2000;
    ecx = ecx | 0x80000000u;
    (void)0; /* test LO8(ebx), LO8(eax) - flags set for next jcc */
    PUSH32(esp, ebp);
    MEM32(0x5499F0) = edx;
    MEM32(0x549B68) = 0;
    MEM32(0x81B7C0) = ecx;
    MEM32(0x750324) = ebx;
    if (TEST_NZ(LO8(ebx), LO8(eax))) goto loc_002A7626; /* jne: not equal / not zero */

loc_002A75E4: ;
    edx = MEM32(0x87A1C0);
    PUSH32(esp, 0x875644);
    edx = edx | ebx;
    PUSH32(esp, 0x87A1AC);
    MEM32(0x87A1C0) = edx;
    PUSH32(esp, 0); sub_001CDBC0(); /* call 0x001CDBC0 */

loc_002A7601: ;
    if (TEST_NZ(MEM8(0x87A1C0), LO8(ebx))) goto loc_002A7626; /* jne: not equal / not zero */

loc_002A7609: ;
    edx = MEM32(0x87A1C0);
    PUSH32(esp, 0x875644);
    edx = edx | ebx;
    PUSH32(esp, 0x87A1AC);
    MEM32(0x87A1C0) = edx;
    PUSH32(esp, 0); sub_001CDBC0(); /* call 0x001CDBC0 */

loc_002A7626: ;
    (void)0; /* test MEM8(0x87A1C0), LO8(ebx) - flags set for next jcc */
    PUSH32(esp, esi);
    esi = MEM32(0x87A1AC);
    PUSH32(esp, edi);
    MEM8(0x87A1BC) = LO8(ebx);
    if (TEST_NZ(MEM8(0x87A1C0), LO8(ebx))) goto loc_002A7659; /* jne: not equal / not zero */

loc_002A763C: ;
    edx = MEM32(0x87A1C0);
    PUSH32(esp, 0x875644);
    edx = edx | ebx;
    PUSH32(esp, 0x87A1AC);
    MEM32(0x87A1C0) = edx;
    PUSH32(esp, 0); sub_001CDBC0(); /* call 0x001CDBC0 */

loc_002A7659: ;
    (void)0; /* test MEM8(0x87A1C0), LO8(ebx) - flags set for next jcc */
    edi = MEM32(0x87A1B0);
    MEM8(0x87A1BD) = LO8(ebx);
    if (TEST_NZ(MEM8(0x87A1C0), LO8(ebx))) goto loc_002A768A; /* jne: not equal / not zero */

loc_002A766D: ;
    edx = MEM32(0x87A1C0);
    PUSH32(esp, 0x875644);
    edx = edx | ebx;
    PUSH32(esp, 0x87A1AC);
    MEM32(0x87A1C0) = edx;
    PUSH32(esp, 0); sub_001CDBC0(); /* call 0x001CDBC0 */

loc_002A768A: ;
    ebp = MEM32(0x87A1B4);
    PUSH32(esp, esi);
    PUSH32(esp, 0);
    PUSH32(esp, 0x48127C00);
    PUSH32(esp, 0x41200000);
    PUSH32(esp, 0x43960000);
    PUSH32(esp, 0x42960000);
    ecx = edi;
    eax = ebp;
    MEM8(0x87A1BE) = LO8(ebx);
    PUSH32(esp, 0); sub_00403040(); /* call 0x00403040 */

loc_002A76B6: ;
    SET_LO8(eax, MEM8(0x87A1C0));
    esp = esp + 0x18;
    if (TEST_NZ(LO8(ebx), LO8(eax))) goto loc_002A76DF; /* jne: not equal / not zero */

loc_002A76C2: ;
    edx = MEM32(0x87A1C0);
    PUSH32(esp, 0x875644);
    edx = edx | ebx;
    PUSH32(esp, 0x87A1AC);
    MEM32(0x87A1C0) = edx;
    PUSH32(esp, 0); sub_001CDBC0(); /* call 0x001CDBC0 */

loc_002A76DF: ;
    eax = 0; /* xor self */

loc_002A76E1: ;
    if (CMP_EQ(esi, MEM32(eax * 4 + 0x87A1AC))) { sub_002A76F2(); return; } /* je: equal / zero */

loc_002A76EA: ;
    eax++;
    if (CMP_L(eax, 4)) goto loc_002A76E1; /* jl: less (signed <) */

loc_002A76F0: ;
    g_seh_ebp = ebp; sub_002A76F9(); return; /* tail jmp 0x002A76F9 */

}

/**
 * sub_002A7780
 * Original: 0x002A7780 - 0x002A779A (26 bytes, 8 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_002A7780(void)
{

loc_002A7780: ;
    eax = MEM32(esp + 4);
    PUSH32(esp, 0xFFFFFFFFu);
    PUSH32(esp, 0x34F);
    PUSH32(esp, 0x6067E4);
    PUSH32(esp, eax);
    PUSH32(esp, 0); sub_002AF0E0(); /* call 0x002AF0E0 */

loc_002A7796: ;
    esp = esp + 0x10;
    esp += 4; return; /* ret */

}

/**
 * sub_002A77A0
 * Original: 0x002A77A0 - 0x002A77F7 (87 bytes, 25 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_002A77A0(void)
{

loc_002A77A0: ;
    PUSH32(esp, 0x2A7780);
    PUSH32(esp, 0); sub_003F5C00(); /* call 0x003F5C00 */

loc_002A77AA: ;
    PUSH32(esp, 0x630C0);
    PUSH32(esp, 0); sub_003F5C20(); /* call 0x003F5C20 */

loc_002A77B4: ;
    PUSH32(esp, 0x2AED30);
    PUSH32(esp, 0); sub_003F5C10(); /* call 0x003F5C10 */

loc_002A77BE: ;
    PUSH32(esp, 0x630C0);
    PUSH32(esp, 0); sub_003F5C30(); /* call 0x003F5C30 */

loc_002A77C8: ;
    PUSH32(esp, 0x20);
    PUSH32(esp, 0x20);
    PUSH32(esp, 0); sub_003F54E0(); /* call 0x003F54E0 */

loc_002A77D1: ;
    PUSH32(esp, 0x20);
    PUSH32(esp, 0x20);
    PUSH32(esp, 0); sub_003F7840(); /* call 0x003F7840 */

loc_002A77DA: ;
    esp = esp + 0x20;
    PUSH32(esp, eax);
    PUSH32(esp, 0x204);
    PUSH32(esp, 0);
    PUSH32(esp, 0xFFFFFFFFu);
    PUSH32(esp, eax);
    PUSH32(esp, 0); sub_0042DCEE(); /* call 0x0042DCEE */

loc_002A77ED: ;
    PUSH32(esp, eax);
    PUSH32(esp, 0); sub_003F5BF0(); /* call 0x003F5BF0 */

loc_002A77F3: ;
    esp = esp + 8;
    esp += 4; return; /* ret */

}

/**
 * sub_002A7800
 * Original: 0x002A7800 - 0x002A781A (26 bytes, 8 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_002A7800(void)
{

loc_002A7800: ;
    eax = MEM32(esp + 4);
    PUSH32(esp, 0xFFFFFFFFu);
    PUSH32(esp, 0x379);
    PUSH32(esp, 0x6067E4);
    PUSH32(esp, eax);
    PUSH32(esp, 0); sub_002AF0E0(); /* call 0x002AF0E0 */

loc_002A7816: ;
    esp = esp + 0x10;
    esp += 4; return; /* ret */

}

/**
 * sub_002A7820
 * Original: 0x002A7820 - 0x002A783A (26 bytes, 8 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_002A7820(void)
{

loc_002A7820: ;
    eax = MEM32(esp + 4);
    PUSH32(esp, 0xFFFFFFFFu);
    PUSH32(esp, 0x39D);
    PUSH32(esp, 0x6067E4);
    PUSH32(esp, eax);
    PUSH32(esp, 0); sub_002AF0E0(); /* call 0x002AF0E0 */

loc_002A7836: ;
    esp = esp + 0x10;
    esp += 4; return; /* ret */

}

/**
 * sub_002A7840
 * Original: 0x002A7840 - 0x002A78A4 (100 bytes, 18 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_002A7840(void)
{
    uint32_t ebp;
    int _flags = 0; /* fallback flag var */
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_002A7840: ;
    MEM32(0x7FA1D8) = 1;
    MEM32(0x84A150) = 0x6067C0;
    PUSH32(esp, 0); sub_0042C91F(); /* call 0x0042C91F */

loc_002A7859: ;
    MEM32(0x7FA1DC) = eax;
    eax = eax + 0xFFFFFFFEu;
    if (CMP_A(eax, 4)) { sub_002A78A4(); return; } /* ja: above (unsigned >) */

loc_002A7866: ;
    { uint32_t _jt = MEM32(eax * 4 + 0x2A78BC); /* switch: 5 entries, 5 targets */
    if (_jt == 0x002A786Du) goto loc_002A786D;
    if (_jt == 0x002A7878u) goto loc_002A7878;
    if (_jt == 0x002A7883u) goto loc_002A7883;
    if (_jt == 0x002A788Eu) goto loc_002A788E;
    if (_jt == 0x002A7899u) goto loc_002A7899;
    g_seh_ebp = ebp; RECOMP_ITAIL(_jt); return; }

loc_002A786D: ;
    MEM32(0x84A14C) = 0x6067B4;
    esp += 4; return; /* ret */

loc_002A7878: ;
    MEM32(0x84A14C) = 0x6067AC;
    esp += 4; return; /* ret */

loc_002A7883: ;
    MEM32(0x84A14C) = 0x6067A4;
    esp += 4; return; /* ret */

loc_002A788E: ;
    MEM32(0x84A14C) = 0x60679C;
    esp += 4; return; /* ret */

loc_002A7899: ;
    MEM32(0x84A14C) = 0x606794;
    esp += 4; return; /* ret */

}

/**
 * sub_002A7A30
 * Original: 0x002A7A30 - 0x002A7A4A (26 bytes, 8 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_002A7A30(void)
{

loc_002A7A30: ;
    eax = MEM32(esp + 4);
    PUSH32(esp, 0xFFFFFFFFu);
    PUSH32(esp, 0x5DF);
    PUSH32(esp, 0x6067E4);
    PUSH32(esp, eax);
    PUSH32(esp, 0); sub_002AF0E0(); /* call 0x002AF0E0 */

loc_002A7A46: ;
    esp = esp + 0x10;
    esp += 4; return; /* ret */

}

/**
 * sub_002A7A50
 * Original: 0x002A7A50 - 0x002A7A65 (21 bytes, 6 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_002A7A50(void)
{
    int _flags = 0; /* fallback flag var */
    float xmm0;

loc_002A7A50: ;
    SET_LO8(eax, MEM8(0x7FA23C));
    (void)0; /* test LO8(eax), LO8(eax) - flags set for next jcc */
    xmm0 = 0.0f; /* xorps self = zero */
    if (TEST_NZ(LO8(eax), LO8(eax))) goto loc_002A7A64; /* jne: not equal / not zero */

loc_002A7A5C: ;
    xmm0 = MEMF(0x7F9F4C); /* movss */

loc_002A7A64: ;
    esp += 4; return; /* ret */

}

/**
 * sub_002A7A70
 * Original: 0x002A7A70 - 0x002A7B55 (229 bytes, 52 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_002A7A70(void)
{
    int _flags = 0; /* fallback flag var */
    float xmm0, xmm1;

loc_002A7A70: ;
    /* TODO: rdtsc  */
    PUSH32(esp, 0);
    PUSH32(esp, 3);
    PUSH32(esp, edx);
    PUSH32(esp, eax);
    PUSH32(esp, 0); sub_00470A00(); /* call 0x00470A00 */

loc_002A7A7D: ;
    PUSH32(esp, 0);
    PUSH32(esp, 0x898);
    PUSH32(esp, edx);
    PUSH32(esp, eax);
    PUSH32(esp, 0); sub_00470D50(); /* call 0x00470D50 */

loc_002A7A8B: ;
    MEM32(0x7F9F38) = eax;
    MEM32(0x7F9F3C) = edx;
    MEM32(0x7F9F40) = eax;
    MEM32(0x7F9F44) = edx;
    /* TODO: rdtsc  */
    PUSH32(esp, 0);
    PUSH32(esp, 3);
    PUSH32(esp, edx);
    PUSH32(esp, eax);
    PUSH32(esp, 0); sub_00470A00(); /* call 0x00470A00 */

loc_002A7AAE: ;
    PUSH32(esp, 0);
    PUSH32(esp, 0x898);
    PUSH32(esp, edx);
    PUSH32(esp, eax);
    PUSH32(esp, 0); sub_00470D50(); /* call 0x00470D50 */

loc_002A7ABC: ;
    MEM32(0x7F9F28) = eax;
    eax = MEM32(0x5499E8);
    MEM32(0x7F9F2C) = edx;
    MEM32(0x7F9F68) = 0;
    MEM32(0x7F9F6C) = 0;
    MEM16(0x7F9F34) = 1;
    MEM32(eax + 0x1DB4) = 0x2A8020;
    MEM32(0x7F9F30) = 0;
    PUSH32(esp, 0); sub_0042E5F2(); /* call 0x0042E5F2 */

loc_002A7B02: ;
    MEM32(0x7F9F50) = eax;
    eax = eax - 2;
    if ((eax == 0)) goto loc_002A7B20; /* je: equal / zero */

loc_002A7B0C: ;
    eax--;
    if ((eax != 0)) goto loc_002A7B20; /* jne: not equal / not zero */

loc_002A7B0F: ;
    PUSH32(esp, 0); sub_0042E5A9(); /* call 0x0042E5A9 */

loc_002A7B14: ;
    (void)0; /* test LO8(eax), 0x40 - flags set for next jcc */
    xmm1 = MEMF(0x648F08); /* movss */
    if (TEST_Z(LO8(eax), 0x40)) goto loc_002A7B28; /* je: equal / zero */

loc_002A7B20: ;
    xmm1 = MEMF(0x648E38); /* movss */

loc_002A7B28: ;
    xmm0 = MEMF(0x648D14); /* movss */
    xmm0 = xmm0 / xmm1; /* divss */
    MEMF(0x7F9F58) = xmm0; /* movss */
    xmm0 = xmm0 * MEMF(0x648E38); /* mulss */
    MEMF(0x7F9F5C) = xmm1; /* movss */
    MEMF(0x7F9F54) = xmm0; /* movss */
    esp += 4; return; /* ret */

}

/**
 * sub_002A7B60
 * Original: 0x002A7B60 - 0x002A7C1C (188 bytes, 54 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_002A7B60(void)
{
    uint32_t ebp;
    int _flags = 0; /* fallback flag var */
    int _cf = 0; /* carry flag */
    float xmm4, xmm5, xmm6, xmm7;
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_002A7B60: ;
    esp = esp - 8;
    PUSH32(esp, ebx);
    ebx = MEM32(0x7F9F3C);
    PUSH32(esp, ebp);
    ebp = MEM32(0x7F9F38);
    PUSH32(esp, esi);
    PUSH32(esp, edi);
    MEM32(0x7F9F40) = ebp;
    MEM32(0x7F9F44) = ebx;
    /* TODO: rdtsc  */
    PUSH32(esp, 0);
    PUSH32(esp, 3);
    PUSH32(esp, edx);
    PUSH32(esp, eax);
    PUSH32(esp, 0); sub_00470A00(); /* call 0x00470A00 */

loc_002A7B8C: ;
    PUSH32(esp, 0);
    PUSH32(esp, 0x898);
    PUSH32(esp, edx);
    PUSH32(esp, eax);
    PUSH32(esp, 0); sub_00470D50(); /* call 0x00470D50 */

loc_002A7B9A: ;
    esi = eax;
    edi = edx;
    MEM32(0x7F9F38) = esi;
    MEM32(0x7F9F3C) = edi;
    /* TODO: rdtsc  */
    PUSH32(esp, 0);
    PUSH32(esp, 3);
    PUSH32(esp, edx);
    PUSH32(esp, eax);
    PUSH32(esp, 0); sub_00470A00(); /* call 0x00470A00 */

loc_002A7BB7: ;
    PUSH32(esp, 0);
    PUSH32(esp, 0x898);
    PUSH32(esp, edx);
    PUSH32(esp, eax);
    PUSH32(esp, 0); sub_00470D50(); /* call 0x00470D50 */

loc_002A7BC5: ;
    ecx = MEM32(0x7F9F28);
    xmm7 = MEMF(0x7F9F58); /* movss */
    xmm6 = MEMF(0x7F9F5C); /* movss */
    xmm4 = MEMF(0x648D14); /* movss */
    xmm5 = MEMF(0x648E38); /* movss */
    eax = eax - ecx;
    edx = edx - MEM32(0x7F9F2C) - _cf; /* sbb */
    esi = esi - ebp;
    MEM32(0x7F9F68) = eax;
    SET_LO8(eax, MEM8(0x7FA23C));
    edi = edi - ebx - _cf; /* sbb */
    (void)0; /* test LO8(eax), LO8(eax) - flags set for next jcc */
    MEM32(0x7F9F6C) = edx;
    MEM32(esp + 0x10) = esi;
    MEM32(esp + 0x14) = edi;
    if (TEST_Z(LO8(eax), LO8(eax))) { sub_002A7C1C(); return; } /* je: equal / zero */

loc_002A7C13: ;
    ecx = 2;
    ebp = 0; /* xor self */
    g_seh_ebp = ebp; sub_002A7C28(); return; /* tail jmp 0x002A7C28 */

}

/**
 * sub_002A8030
 * Original: 0x002A8030 - 0x002A83C7 (919 bytes, 222 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_002A8030(void)
{
    int _flags = 0; /* fallback flag var */
    float xmm0, xmm1, xmm6;

loc_002A8030: ;
    PUSH32(esp, ebx);
    ebx = 0; /* xor self */
    (void)0; /* cmp eax, ebx - flags set for next jcc */
    MEM32(0x84A144) = eax;
    if (CMP_L(eax, ebx)) goto loc_002A8041; /* jl: less (signed <) */

loc_002A803C: ;
    if (CMP_LE(eax, 3)) goto loc_002A8047; /* jle: less or equal (signed <=) */

loc_002A8041: ;
    MEM32(0x84A144) = ebx;

loc_002A8047: ;
    if (CMP_NE(MEM32(0x84A19C), ebx)) goto loc_002A8054; /* jne: not equal / not zero */

loc_002A804F: ;
    PUSH32(esp, 0); sub_002AED70(); /* call 0x002AED70 */

loc_002A8054: ;
    edx = MEM32(0x7FA494);
    ecx = MEM32(0x7FA4B4);
    PUSH32(esp, esi);
    esi = MEM32(0x84A190);
    edx++;
    ecx++;
    (void)0; /* cmp esi, ebx - flags set for next jcc */
    PUSH32(esp, edi);
    MEM32(0x7FA494) = edx;
    MEM32(0x7FA4B4) = ecx;
    edi = esi;
    if (CMP_EQ(esi, ebx)) goto loc_002A80A4; /* je: equal / zero */

loc_002A807C: ;
    if (CMP_B(MEM32(esi + 0x80), 0xD70)) goto loc_002A80A4; /* jb: below (unsigned <) */

loc_002A8088: ;
    ecx = 0x10;
    PUSH32(esp, 0); sub_003E62A0(); /* call 0x003E62A0 */

loc_002A8092: ;
    PUSH32(esp, 0xD70);
    PUSH32(esp, edi);
    PUSH32(esp, 0); sub_003E6BD0(); /* call 0x003E6BD0 */

loc_002A809D: ;
    esp = esp + 8;
    if (CMP_NE(eax, ebx)) goto loc_002A80C4; /* jne: not equal / not zero */

loc_002A80A4: ;
    esi = MEM32(0x84A184);
    ecx = 0x10;
    edi = esi;
    PUSH32(esp, 0); sub_003E62A0(); /* call 0x003E62A0 */

loc_002A80B6: ;
    PUSH32(esp, 0xD70);
    PUSH32(esp, edi);
    PUSH32(esp, 0); sub_003E6BD0(); /* call 0x003E6BD0 */

loc_002A80C1: ;
    esp = esp + 8;

loc_002A80C4: ;
    MEM32(0x84A13C) = eax;
    /* nop */

loc_002A80D0: ;
    eax = MEM32(0x84A19C);
    if (TEST_NZ(eax, eax)) goto loc_002A80DE; /* jne: not equal / not zero */

loc_002A80D9: ;
    PUSH32(esp, 0); sub_002AED70(); /* call 0x002AED70 */

loc_002A80DE: ;
    edx = MEM32(0x7FA494);
    ecx = MEM32(0x7FA4B4);
    esi = MEM32(0x84A190);
    edx++;
    ecx++;
    (void)0; /* test esi, esi - flags set for next jcc */
    MEM32(0x7FA494) = edx;
    MEM32(0x7FA4B4) = ecx;
    edi = esi;
    if (TEST_Z(esi, esi)) goto loc_002A812C; /* je: equal / zero */

loc_002A8104: ;
    if (CMP_B(MEM32(esi + 0x80), 0x1C0)) goto loc_002A812C; /* jb: below (unsigned <) */

loc_002A8110: ;
    ecx = 0x10;
    PUSH32(esp, 0); sub_003E62A0(); /* call 0x003E62A0 */

loc_002A811A: ;
    PUSH32(esp, 0x1C0);
    PUSH32(esp, edi);
    PUSH32(esp, 0); sub_003E6BD0(); /* call 0x003E6BD0 */

loc_002A8125: ;
    esp = esp + 8;
    if (TEST_NZ(eax, eax)) goto loc_002A814C; /* jne: not equal / not zero */

loc_002A812C: ;
    esi = MEM32(0x84A184);
    ecx = 0x10;
    edi = esi;
    PUSH32(esp, 0); sub_003E62A0(); /* call 0x003E62A0 */

loc_002A813E: ;
    PUSH32(esp, 0x1C0);
    PUSH32(esp, edi);
    PUSH32(esp, 0); sub_003E6BD0(); /* call 0x003E6BD0 */

loc_002A8149: ;
    esp = esp + 8;

loc_002A814C: ;
    ecx = MEM32(0x84A13C);
    MEM32(ebx + ecx + 0x144) = eax;
    edx = MEM32(0x84A13C);
    edx = MEM32(ebx + edx + 0x144);
    PUSH32(esp, 0); sub_003FA650(); /* call 0x003FA650 */

loc_002A816B: ;
    eax = MEM32(0x84A13C);
    edi = MEM32(ebx + eax + 0x144);
    edi = edi + 0x10;
    ecx = 0x10;
    esi = 0x5A0350;
    memcpy((void*)XBOX_PTR(edi), (void*)XBOX_PTR(esi), ecx * 4);
    esi += ecx * 4; edi += ecx * 4; ecx = 0; /* rep movsd */
    eax = MEM32(0x84A13C);
    ecx = MEM32(ebx + eax + 0x144);
    esi = ecx + 0x10;
    edi = ebx + eax + 0x40;
    ecx = 0x10;
    memcpy((void*)XBOX_PTR(edi), (void*)XBOX_PTR(esi), ecx * 4);
    esi += ecx * 4; edi += ecx * 4; ecx = 0; /* rep movsd */
    eax = MEM32(0x84A13C);
    ecx = MEM32(ebx + eax + 0x144);
    esi = ecx + 0x10;
    edi = ebx + eax + 0x100;
    ecx = 0x10;
    memcpy((void*)XBOX_PTR(edi), (void*)XBOX_PTR(esi), ecx * 4);
    esi += ecx * 4; edi += ecx * 4; ecx = 0; /* rep movsd */
    ecx = MEM32(0x84A13C);
    edi = MEM32(ebx + ecx + 0x144);
    edi = edi + 0x50;
    ecx = 0x10;
    esi = 0x5A0350;
    memcpy((void*)XBOX_PTR(edi), (void*)XBOX_PTR(esi), ecx * 4);
    esi += ecx * 4; edi += ecx * 4; ecx = 0; /* rep movsd */
    eax = MEM32(0x84A13C);
    ecx = MEM32(ebx + eax + 0x144);
    esi = ecx + 0x50;
    edi = ebx + eax + 0x80;
    ecx = 0x10;
    memcpy((void*)XBOX_PTR(edi), (void*)XBOX_PTR(esi), ecx * 4);
    esi += ecx * 4; edi += ecx * 4; ecx = 0; /* rep movsd */
    eax = MEM32(0x84A13C);
    ecx = MEM32(ebx + eax + 0x144);
    edi = ebx + eax + 0x148;
    esi = ecx + 0x114;
    ebx = ebx + 0x2B0;
    (void)0; /* cmp ebx, 0xD70 - flags set for next jcc */
    ecx = 0x2A;
    memcpy((void*)XBOX_PTR(edi), (void*)XBOX_PTR(esi), ecx * 4);
    esi += ecx * 4; edi += ecx * 4; ecx = 0; /* rep movsd */
    if (CMP_L(ebx, 0xD70)) goto loc_002A80D0; /* jl: less (signed <) */

loc_002A8228: ;
    eax = MEM32(0x84A19C);
    if (TEST_NZ(eax, eax)) goto loc_002A8236; /* jne: not equal / not zero */

loc_002A8231: ;
    PUSH32(esp, 0); sub_002AED70(); /* call 0x002AED70 */

loc_002A8236: ;
    edx = MEM32(0x7FA494);
    ecx = MEM32(0x7FA4B4);
    esi = MEM32(0x84A190);
    edx++;
    ecx++;
    (void)0; /* test esi, esi - flags set for next jcc */
    MEM32(0x7FA494) = edx;
    MEM32(0x7FA4B4) = ecx;
    edi = esi;
    if (TEST_Z(esi, esi)) goto loc_002A827E; /* je: equal / zero */

loc_002A825C: ;
    if (CMP_B(MEM32(esi + 0x80), 0x50)) goto loc_002A827E; /* jb: below (unsigned <) */

loc_002A8265: ;
    ecx = 0x10;
    PUSH32(esp, 0); sub_003E62A0(); /* call 0x003E62A0 */

loc_002A826F: ;
    PUSH32(esp, 0x50);
    PUSH32(esp, edi);
    PUSH32(esp, 0); sub_003E6BD0(); /* call 0x003E6BD0 */

loc_002A8277: ;
    esp = esp + 8;
    if (TEST_NZ(eax, eax)) goto loc_002A829B; /* jne: not equal / not zero */

loc_002A827E: ;
    esi = MEM32(0x84A184);
    ecx = 0x10;
    edi = esi;
    PUSH32(esp, 0); sub_003E62A0(); /* call 0x003E62A0 */

loc_002A8290: ;
    PUSH32(esp, 0x50);
    PUSH32(esp, edi);
    PUSH32(esp, 0); sub_003E6BD0(); /* call 0x003E6BD0 */

loc_002A8298: ;
    esp = esp + 8;

loc_002A829B: ;
    MEM32(0x84A140) = eax;
    if (CMP_NE(MEM32(0x84A144), 1)) goto loc_002A82E9; /* jne: not equal / not zero */

loc_002A82A9: ;
    xmm0 = (float)(int32_t)MEM32(0x7F9FDC); /* cvtsi2ss */
    xmm0 = xmm0 - MEMF(0x648CE0); /* subss */
    xmm1 = xmm0; /* movaps */
    xmm1 = xmm1 * MEMF(0x648E68); /* mulss */
    eax = (int32_t)xmm1; /* cvttss2si */
    edx = eax;
    edx = edx & 0x80000003u;
    if (((int32_t)edx >= 0)) goto loc_002A82D7; /* jns: not sign (positive) */

loc_002A82D2: ;
    edx--;
    edx = edx | 0xFFFFFFFCu;
    edx++;

loc_002A82D7: ;
    eax = eax - edx;
    xmm1 = (float)(int32_t)eax; /* cvtsi2ss */
    xmm1 = xmm1 / xmm0; /* divss */
    MEMF(0x7F9FC0) = xmm1; /* movss */

loc_002A82E9: ;
    eax = MEM32(0x7FA1F8);
    PUSH32(esp, eax);
    PUSH32(esp, 0); sub_000655C0(); /* call 0x000655C0 */

loc_002A82F4: ;
    esi = MEM32(0x84A144);
    esp = esp + 4;
    ebx = 0; /* xor self */
    if (TEST_S(esi, esi)) goto loc_002A831B; /* jl: less (signed <) */

loc_002A8303: ;
    PUSH32(esp, 0);
    PUSH32(esp, 0x3FF);
    eax = esi;
    PUSH32(esp, 0); sub_002A88E0(); /* call 0x002A88E0 */

loc_002A8311: ;
    esp = esp + 8;
    ebx++;
    if (CMP_LE(ebx, esi)) goto loc_002A8303; /* jle: less or equal (signed <=) */

loc_002A8319: ;
    (void)0; /* test esi, esi - flags set for next jcc */

loc_002A831B: ;
    POP32(esp, edi);
    POP32(esp, esi);
    if (TEST_Z(esi, esi)) goto loc_002A8330; /* je: equal / zero */

loc_002A831F: ;
    PUSH32(esp, 0);
    PUSH32(esp, 0x3FF);
    eax = 0; /* xor self */
    PUSH32(esp, 0); sub_002A88E0(); /* call 0x002A88E0 */

loc_002A832D: ;
    esp = esp + 8;

loc_002A8330: ;
    eax = MEM32(0x84A13C);
    xmm0 = MEMF(0x771CF4); /* movss */
    ecx = MEM32(eax + 0x200);
    xmm1 = MEMF(0x648EA4); /* movss */
    xmm6 = MEMF(eax + 0x1FC); /* movss */
    PUSH32(esp, 0x3F800000);
    MEMF(0x76F7AC) = xmm0; /* movss */
    xmm0 = MEMF(0x771CF0); /* movss */
    xmm1 = xmm1 - xmm0; /* subss */
    PUSH32(esp, 0x461C4000);
    MEMF(0x76F7B0) = xmm0; /* movss */
    xmm0 = 0.0f; /* xorps self = zero */
    PUSH32(esp, 0x3F800000);
    MEMF(0x780A44) = xmm1; /* movss */
    PUSH32(esp, ecx);
    xmm1 = xmm0; /* movaps */
    xmm1 = xmm1 - MEMF(eax + 0x200); /* subss */
    xmm0 = xmm0 - MEMF(eax + 0x1FC); /* subss */
    PUSH32(esp, ecx);
    eax = 0x76F9F0;
    MEM8(0x7819D3) = 1;
    MEM8(0x7819D2) = 1;
    MEM8(0x7F9FF4) = 0;
    MEMF(esp) = xmm1; /* movss */
    PUSH32(esp, 0); sub_0029C850(); /* call 0x0029C850 */

loc_002A83C2: ;
    esp = esp + 0x14;
    POP32(esp, ebx);
    esp += 4; return; /* ret */

}

/**
 * sub_002A83D0
 * Original: 0x002A83D0 - 0x002A840D (61 bytes, 23 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_002A83D0(void)
{
    int _flags = 0; /* fallback flag var */

loc_002A83D0: ;
    PUSH32(esp, ebx);
    ebx = 0; /* xor self */
    (void)0; /* test esi, esi - flags set for next jcc */
    MEM32(0x84A144) = esi;
    if (TEST_S(esi, esi)) goto loc_002A83FA; /* jl: less (signed <) */

loc_002A83DD: ;
    /* nop */

loc_002A83E0: ;
    PUSH32(esp, 0);
    PUSH32(esp, 0x3FF);
    eax = esi;
    PUSH32(esp, 0); sub_002A88E0(); /* call 0x002A88E0 */

loc_002A83EE: ;
    esp = esp + 8;
    ebx++;
    if (CMP_LE(ebx, esi)) goto loc_002A83E0; /* jle: less or equal (signed <=) */

loc_002A83F6: ;
    if (TEST_Z(esi, esi)) goto loc_002A840B; /* je: equal / zero */

loc_002A83FA: ;
    PUSH32(esp, 0);
    PUSH32(esp, 0x3FF);
    eax = 0; /* xor self */
    PUSH32(esp, 0); sub_002A88E0(); /* call 0x002A88E0 */

loc_002A8408: ;
    esp = esp + 8;

loc_002A840B: ;
    POP32(esp, ebx);
    esp += 4; return; /* ret */

}

/**
 * sub_002A8410
 * Original: 0x002A8410 - 0x002A84F7 (231 bytes, 65 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_002A8410(void)
{
    int _flags = 0; /* fallback flag var */
    float xmm0, xmm1, xmm2, xmm3, xmm4, xmm5;

loc_002A8410: ;
    esp = esp - 0x10;
    if (CMP_EQ(LO16(eax), 0xFF)) goto loc_002A84F3; /* je: equal / zero */

loc_002A841D: ;
    edx = MEM32(0x84A13C);
    eax = SX16(LO16(eax));
    eax = (uint32_t)((int32_t)eax * (int32_t)0x2B0);
    xmm5 = MEMF(eax + edx + 0x21C); /* movss */
    xmm4 = MEMF(eax + edx + 0x220); /* movss */
    xmm3 = MEMF(eax + edx + 0x214); /* movss */
    eax = eax + edx;
    if (TEST_Z(ecx, ecx)) goto loc_002A845E; /* je: equal / zero */

loc_002A844D: ;
    xmm0 = MEMF(eax + 0x218); /* movss */
    xmm2 = (float)(int32_t)ecx; /* cvtsi2ss */
    /* comiss xmm0, xmm2 - sets EFLAGS */
    if ((xmm0 > xmm2)) goto loc_002A8466; /* ja: above (unsigned >) */

loc_002A845E: ;
    xmm2 = MEMF(eax + 0x218); /* movss */

loc_002A8466: ;
    xmm0 = 0.0f; /* xorps self = zero */
    /* comiss xmm0, xmm5 - sets EFLAGS */
    eax = MEM32(0x7F9FF0);
    if ((xmm0 <= xmm5)) goto loc_002A8478; /* jbe: below or equal (unsigned <=) */

loc_002A8473: ;
    xmm5 = xmm0; /* movaps */
    goto loc_002A8484;

loc_002A8478: ;
    xmm1 = (float)(int32_t)eax; /* cvtsi2ss */
    /* comiss xmm5, xmm1 - sets EFLAGS */
    if ((xmm5 <= xmm1)) goto loc_002A8484; /* jbe: below or equal (unsigned <=) */

loc_002A8481: ;
    xmm5 = xmm1; /* movaps */

loc_002A8484: ;
    /* comiss xmm0, xmm4 - sets EFLAGS */
    if ((xmm0 <= xmm4)) goto loc_002A848E; /* jbe: below or equal (unsigned <=) */

loc_002A8489: ;
    xmm4 = xmm0; /* movaps */
    goto loc_002A849A;

loc_002A848E: ;
    xmm1 = (float)(int32_t)eax; /* cvtsi2ss */
    /* comiss xmm4, xmm1 - sets EFLAGS */
    if ((xmm4 <= xmm1)) goto loc_002A849A; /* jbe: below or equal (unsigned <=) */

loc_002A8497: ;
    xmm4 = xmm1; /* movaps */

loc_002A849A: ;
    /* comiss xmm0, xmm3 - sets EFLAGS */
    eax = MEM32(0x7F9FEC);
    if ((xmm0 <= xmm3)) goto loc_002A84A9; /* jbe: below or equal (unsigned <=) */

loc_002A84A4: ;
    xmm3 = xmm0; /* movaps */
    goto loc_002A84B5;

loc_002A84A9: ;
    xmm1 = (float)(int32_t)eax; /* cvtsi2ss */
    /* comiss xmm3, xmm1 - sets EFLAGS */
    if ((xmm3 <= xmm1)) goto loc_002A84B5; /* jbe: below or equal (unsigned <=) */

loc_002A84B2: ;
    xmm3 = xmm1; /* movaps */

loc_002A84B5: ;
    /* comiss xmm0, xmm2 - sets EFLAGS */
    if ((xmm0 > xmm2)) goto loc_002A84C3; /* ja: above (unsigned >) */

loc_002A84BA: ;
    xmm0 = (float)(int32_t)eax; /* cvtsi2ss */
    /* comiss xmm2, xmm0 - sets EFLAGS */
    if ((xmm2 <= xmm0)) goto loc_002A84C6; /* jbe: below or equal (unsigned <=) */

loc_002A84C3: ;
    xmm2 = xmm0; /* movaps */

loc_002A84C6: ;
    ecx = (int32_t)xmm3; /* cvttss2si */
    MEM32(esp + 4) = ecx;
    ecx = esp;
    PUSH32(esp, ecx);
    eax = (int32_t)xmm5; /* cvttss2si */
    PUSH32(esp, 0);
    MEM32(esp + 8) = eax;
    edx = (int32_t)xmm4; /* cvttss2si */
    eax = (int32_t)xmm2; /* cvttss2si */
    PUSH32(esp, 1);
    MEM32(esp + 0x14) = edx;
    MEM32(esp + 0x18) = eax;
    PUSH32(esp, 0); sub_00539D70(); /* call 0x00539D70 */

loc_002A84F3: ;
    esp = esp + 0x10;
    esp += 4; return; /* ret */

}

/**
 * sub_002A8500
 * Original: 0x002A8500 - 0x002A86F0 (496 bytes, 119 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_002A8500(void)
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

loc_002A8500: ;
    esp = esp - 0x1C;
    xmm0 = MEMF(eax); /* movss */
    ecx = SX16(LO16(ecx));
    ecx = (uint32_t)((int32_t)ecx * (int32_t)0x2B0);
    MEMF(esp + 0xC) = xmm0; /* movss */
    xmm0 = MEMF(eax + 4); /* movss */
    MEMF(esp + 0x10) = xmm0; /* movss */
    xmm0 = MEMF(eax + 8); /* movss */
    eax = MEM32(0x84A13C);
    eax = ecx + eax + 0x40;
    MEM32(esp + 4) = eax;
    eax = esp + 0xC;
    MEMF(esp + 0x14) = xmm0; /* movss */
    xmm0 = MEMF(0x648D14); /* movss */
    PUSH32(esp, esi);
    MEMF(esp + 0x1C) = xmm0; /* movss */
    MEM32(esp + 0xC) = eax;
    MEM32(esp + 4) = eax;
    eax = MEM32(esp + 0xC);
    xmm2 = MEMF(eax); /* movups */
    eax = MEM32(esp + 8);
    xmm1 = xmm2; /* movaps */
    /* shufps xmm2, xmm2, 0 */
    /* mulps: xmm2 *= MEMF(eax) (packed 4xfloat) */
    xmm3 = xmm1; /* movaps */
    /* shufps xmm1, xmm1, 0x55 */
    /* mulps: xmm1 *= MEMF(eax + 0x10) (packed 4xfloat) */
    xmm4 = xmm3; /* movaps */
    /* shufps xmm3, xmm3, 0xaa */
    /* mulps: xmm3 *= MEMF(eax + 0x20) (packed 4xfloat) */
    /* shufps xmm4, xmm4, 0xff */
    /* mulps: xmm4 *= MEMF(eax + 0x30) (packed 4xfloat) */
    eax = MEM32(esp + 4);
    /* addps: xmm2 += xmm1 (packed 4xfloat) */
    /* addps: xmm2 += xmm3 (packed 4xfloat) */
    /* addps: xmm2 += xmm4 (packed 4xfloat) */
    MEMF(eax) = xmm2; /* movups */
    eax = MEM32(0x84A13C);
    eax = eax + ecx;
    MEM32(esp + 8) = eax;
    eax = esp + 0x10;
    MEM32(esp + 4) = eax;
    MEM32(esp + 0xC) = eax;
    eax = MEM32(esp + 4);
    xmm2 = MEMF(eax); /* movups */
    eax = MEM32(esp + 8);
    xmm1 = xmm2; /* movaps */
    /* shufps xmm2, xmm2, 0 */
    /* mulps: xmm2 *= MEMF(eax) (packed 4xfloat) */
    xmm3 = xmm1; /* movaps */
    /* shufps xmm1, xmm1, 0x55 */
    /* mulps: xmm1 *= MEMF(eax + 0x10) (packed 4xfloat) */
    xmm4 = xmm3; /* movaps */
    /* shufps xmm3, xmm3, 0xaa */
    /* mulps: xmm3 *= MEMF(eax + 0x20) (packed 4xfloat) */
    /* shufps xmm4, xmm4, 0xff */
    /* mulps: xmm4 *= MEMF(eax + 0x30) (packed 4xfloat) */
    eax = MEM32(esp + 0xC);
    /* addps: xmm2 += xmm1 (packed 4xfloat) */
    /* addps: xmm2 += xmm3 (packed 4xfloat) */
    /* addps: xmm2 += xmm4 (packed 4xfloat) */
    MEMF(eax) = xmm2; /* movups */
    xmm1 = 0.0f; /* xorps self = zero */
    esi = 0; /* xor self */
    /* comiss xmm1, MEMF(esp + 0x18) - sets EFLAGS */
    if ((xmm1 <= MEMF(esp + 0x18))) goto loc_002A8610; /* jbe: below or equal (unsigned <=) */

loc_002A85FD: ;
    if (TEST_NZ(edx, edx)) goto loc_002A860B; /* jne: not equal / not zero */

loc_002A8601: ;
    eax = 2;
    POP32(esp, esi);
    esp = esp + 0x1C;
    esp += 4; return; /* ret */

loc_002A860B: ;
    esi = 2;

loc_002A8610: ;
    (void)0; /* test edx, edx - flags set for next jcc */
    fp_push(MEMF(esp + 0x18)); /* fld float */
    eax = MEM32(0x84A13C);
    fp_st1() *= fp_top(); fp_pop(); /* fmul */
    xmm1 = MEMF(ecx + eax + 0x1FC); /* movss */
    xmm1 = xmm1 * MEMF(esp + 0x10); /* mulss */
    xmm0 = xmm0 / MEMF(esp + 0x1C); /* divss */
    MEMF(esp + 0x10) = xmm1; /* movss */
    xmm2 = MEMF(ecx + eax + 0x200); /* movss */
    MEMF(esp + 0x18) = (float)fp_top(); fp_popp(); /* fstp */
    xmm2 = xmm2 * MEMF(esp + 0x14); /* mulss */
    xmm3 = xmm0; /* movaps */
    xmm3 = xmm3 * xmm1; /* mulss */
    MEMF(esp + 0x10) = xmm3; /* movss */
    xmm1 = xmm0; /* movaps */
    xmm0 = xmm0 * MEMF(esp + 0x18); /* mulss */
    xmm1 = xmm1 * xmm2; /* mulss */
    MEMF(esp + 0x14) = xmm1; /* movss */
    MEMF(esp + 0x18) = xmm0; /* movss */
    xmm2 = MEMF(ecx + eax + 0x224); /* movss */
    xmm2 = xmm2 + xmm3; /* addss */
    MEMF(esp + 0x10) = xmm2; /* movss */
    xmm3 = MEMF(ecx + eax + 0x228); /* movss */
    xmm3 = xmm3 - xmm1; /* subss */
    MEMF(esp + 0x14) = xmm3; /* movss */
    if (TEST_Z(edx, edx)) goto loc_002A86B9; /* je: equal / zero */

loc_002A869D: ;
    (void)0; /* cmp esi, 2 - flags set for next jcc */
    MEMF(edx) = xmm2; /* movss */
    MEMF(edx + 4) = xmm3; /* movss */
    MEMF(edx + 8) = xmm0; /* movss */
    if (CMP_EQ(esi, 2)) goto loc_002A8601; /* je: equal / zero */

loc_002A86B4: ;
    eax = MEM32(0x84A13C);

loc_002A86B9: ;
    xmm0 = MEMF(ecx + eax + 0x21C); /* movss */
    /* comiss xmm0, xmm2 - sets EFLAGS */
    if ((xmm0 > xmm2)) { sub_002A86F0(); return; } /* ja: above (unsigned >) */

loc_002A86C7: ;
    /* comiss xmm2, MEMF(ecx + eax + 0x220) - sets EFLAGS */
    if ((xmm2 > MEMF(ecx + eax + 0x220))) { sub_002A86F0(); return; } /* ja: above (unsigned >) */

loc_002A86D1: ;
    xmm0 = MEMF(ecx + eax + 0x214); /* movss */
    /* comiss xmm0, xmm3 - sets EFLAGS */
    if ((xmm0 > xmm3)) { sub_002A86F0(); return; } /* ja: above (unsigned >) */

loc_002A86DF: ;
    /* comiss xmm3, MEMF(ecx + eax + 0x218) - sets EFLAGS */
    if ((xmm3 > MEMF(ecx + eax + 0x218))) { sub_002A86F0(); return; } /* ja: above (unsigned >) */

loc_002A86E9: ;
    eax = 0; /* xor self */
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
 * sub_002A8700
 * Original: 0x002A8700 - 0x002A88D2 (466 bytes, 112 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_002A8700(void)
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

loc_002A8700: ;
    esp = esp - 0x34;
    eax = MEM32(0x84A13C);
    ecx = SX16(LO16(ecx));
    ecx = (uint32_t)((int32_t)ecx * (int32_t)0x2B0);
    MEMF(esp + 0x14) = xmm0; /* movss */
    xmm0 = MEMF(esp + 0x38); /* movss */
    eax = ecx + eax + 0x40;
    MEMF(esp + 0x18) = xmm0; /* movss */
    xmm0 = MEMF(esp + 0x3C); /* movss */
    MEM32(esp + 0x3C) = eax;
    eax = esp + 0x14;
    MEM32(esp) = eax;
    MEMF(esp + 0x1C) = xmm0; /* movss */
    xmm0 = MEMF(0x648D14); /* movss */
    eax = esp + 0x24;
    MEMF(esp + 0x20) = xmm0; /* movss */
    MEM32(esp + 0x38) = eax;
    eax = MEM32(esp);
    xmm2 = MEMF(eax); /* movups */
    eax = MEM32(esp + 0x3C);
    xmm1 = xmm2; /* movaps */
    /* shufps xmm2, xmm2, 0 */
    /* mulps: xmm2 *= MEMF(eax) (packed 4xfloat) */
    xmm3 = xmm1; /* movaps */
    /* shufps xmm1, xmm1, 0x55 */
    /* mulps: xmm1 *= MEMF(eax + 0x10) (packed 4xfloat) */
    xmm4 = xmm3; /* movaps */
    /* shufps xmm3, xmm3, 0xaa */
    /* mulps: xmm3 *= MEMF(eax + 0x20) (packed 4xfloat) */
    /* shufps xmm4, xmm4, 0xff */
    /* mulps: xmm4 *= MEMF(eax + 0x30) (packed 4xfloat) */
    eax = MEM32(esp + 0x38);
    /* addps: xmm2 += xmm1 (packed 4xfloat) */
    /* addps: xmm2 += xmm3 (packed 4xfloat) */
    /* addps: xmm2 += xmm4 (packed 4xfloat) */
    MEMF(eax) = xmm2; /* movups */
    xmm1 = MEMF(esp + 0x2C); /* movss */
    xmm5 = 0.0f; /* xorps self = zero */
    /* comiss xmm1, xmm5 - sets EFLAGS */
    if ((xmm1 < xmm5)) goto loc_002A87BA; /* jb: below (unsigned <) */

loc_002A87A4: ;
    xmm2 = MEMF(0x648D24); /* movss */
    /* comiss xmm2, xmm1 - sets EFLAGS */
    if ((xmm2 <= xmm1)) goto loc_002A87BA; /* jbe: below or equal (unsigned <=) */

loc_002A87B1: ;
    xmm1 = xmm2; /* movaps */
    MEMF(esp + 0x2C) = xmm1; /* movss */

loc_002A87BA: ;
    if (TEST_Z(edx, edx)) goto loc_002A87C9; /* je: equal / zero */

loc_002A87BE: ;
    xmm2 = xmm5; /* movaps */
    xmm2 = xmm2 - xmm1; /* subss */
    MEMF(edx) = xmm2; /* movss */

loc_002A87C9: ;
    edx = MEM32(0x84A13C);
    eax = ecx + edx;
    MEM32(esp + 0x3C) = eax;
    edx = esp + 0x24;
    eax = esp + 4;
    MEM32(esp) = edx;
    MEM32(esp + 0x38) = eax;
    eax = MEM32(esp);
    xmm2 = MEMF(eax); /* movups */
    eax = MEM32(esp + 0x3C);
    xmm1 = xmm2; /* movaps */
    /* shufps xmm2, xmm2, 0 */
    /* mulps: xmm2 *= MEMF(eax) (packed 4xfloat) */
    xmm3 = xmm1; /* movaps */
    /* shufps xmm1, xmm1, 0x55 */
    /* mulps: xmm1 *= MEMF(eax + 0x10) (packed 4xfloat) */
    xmm4 = xmm3; /* movaps */
    /* shufps xmm3, xmm3, 0xaa */
    /* mulps: xmm3 *= MEMF(eax + 0x20) (packed 4xfloat) */
    /* shufps xmm4, xmm4, 0xff */
    /* mulps: xmm4 *= MEMF(eax + 0x30) (packed 4xfloat) */
    eax = MEM32(esp + 0x38);
    /* addps: xmm2 += xmm1 (packed 4xfloat) */
    /* addps: xmm2 += xmm3 (packed 4xfloat) */
    /* addps: xmm2 += xmm4 (packed 4xfloat) */
    MEMF(eax) = xmm2; /* movups */
    /* comiss xmm5, MEMF(esp + 0xC) - sets EFLAGS */
    SET_LO8(eax, 1);
    if ((xmm5 <= MEMF(esp + 0xC))) goto loc_002A8832; /* jbe: below or equal (unsigned <=) */

loc_002A8830: ;
    SET_LO8(eax, 0); /* xor self */

loc_002A8832: ;
    (void)0; /* test esi, esi - flags set for next jcc */
    fp_push(MEMF(esp + 0xC)); /* fld float */
    edx = MEM32(0x84A13C);
    fp_st1() *= fp_top(); fp_pop(); /* fmul */
    xmm1 = MEMF(ecx + edx + 0x1FC); /* movss */
    xmm1 = xmm1 * MEMF(esp + 4); /* mulss */
    xmm0 = xmm0 / MEMF(esp + 0x10); /* divss */
    MEMF(esp + 4) = xmm1; /* movss */
    xmm2 = MEMF(ecx + edx + 0x200); /* movss */
    MEMF(esp + 0xC) = (float)fp_top(); fp_popp(); /* fstp */
    xmm2 = xmm2 * MEMF(esp + 8); /* mulss */
    xmm3 = xmm0; /* movaps */
    xmm3 = xmm3 * xmm1; /* mulss */
    MEMF(esp + 4) = xmm3; /* movss */
    xmm1 = xmm0; /* movaps */
    xmm0 = xmm0 * MEMF(esp + 0xC); /* mulss */
    xmm1 = xmm1 * xmm2; /* mulss */
    MEMF(esp + 8) = xmm1; /* movss */
    MEMF(esp + 0xC) = xmm0; /* movss */
    xmm2 = MEMF(ecx + edx + 0x224); /* movss */
    xmm2 = xmm2 + xmm3; /* addss */
    MEMF(esp + 4) = xmm2; /* movss */
    xmm3 = MEMF(ecx + edx + 0x228); /* movss */
    ecx = MEM32(esp + 0x40);
    edx = MEM32(esp + 0x44);
    xmm3 = xmm3 - xmm1; /* subss */
    MEMF(ecx) = xmm2; /* movss */
    MEMF(edx) = xmm3; /* movss */
    if (TEST_Z(esi, esi)) goto loc_002A88CE; /* je: equal / zero */

loc_002A88CA: ;
    MEMF(esi) = xmm0; /* movss */

loc_002A88CE: ;
    esp = esp + 0x34;
    esp += 4; return; /* ret */

    #undef fp_push
    #undef fp_pop
    #undef fp_popp
    #undef fp_top
    #undef fp_st1
}

/**
 * sub_002A88E0
 * Original: 0x002A88E0 - 0x002A89D9 (249 bytes, 43 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_002A88E0(void)
{
    uint32_t ebp;
    int _flags = 0; /* fallback flag var */
    float xmm0, xmm1, xmm6;
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_002A88E0: ;
    xmm6 = MEMF(0x648CE0); /* movss */
    PUSH32(esp, ebp);
    PUSH32(esp, esi);
    PUSH32(esp, edi);
    edi = ebx;
    edi = (uint32_t)((int32_t)edi * (int32_t)0x2B0);
    esi = eax;
    xmm0 = (float)(int32_t)MEM32(esi * 4 + 0x7F9FD8); /* cvtsi2ss */
    eax = MEM32(0x84A13C);
    MEMF(edi + eax + 0x1F4) = xmm0; /* movss */
    ecx = MEM32(0x84A13C);
    xmm0 = (float)(int32_t)MEM32(esi * 4 + 0x7F9FC4); /* cvtsi2ss */
    ebp = 0; /* xor self */
    (void)0; /* cmp esi, ebp - flags set for next jcc */
    MEMF(edi + ecx + 0x1F8) = xmm0; /* movss */
    if (CMP_EQ(esi, ebp)) goto loc_002A8960; /* je: equal / zero */

loc_002A892A: ;
    eax = MEM32(0x84A13C);
    xmm0 = MEMF(edi + eax + 0x1F4); /* movss */
    xmm0 = xmm0 - xmm6; /* subss */
    MEMF(edi + eax + 0x1F4) = xmm0; /* movss */
    eax = MEM32(0x84A13C);
    xmm0 = MEMF(edi + eax + 0x1F8); /* movss */
    xmm0 = xmm0 - xmm6; /* subss */
    MEMF(edi + eax + 0x1F8) = xmm0; /* movss */

loc_002A8960: ;
    (void)0; /* cmp esi, 1 - flags set for next jcc */
    edx = MEM32(esi * 4 + 0x6C0278);
    eax = MEM32(0x84A13C);
    MEM32(edi + eax + 0x250) = edx;
    ecx = MEM32(0x84A13C);
    MEMF(edi + ecx + 0x254) = xmm6; /* movss */
    if (CMP_NE(esi, 1)) { sub_002A89D9(); return; } /* jne: not equal / not zero */

loc_002A8987: ;
    eax = MEM32(0x84A13C);
    xmm1 = MEMF(edi + eax + 0x1F4); /* movss */
    xmm0 = MEMF(0x7F9FC0); /* movss */
    xmm1 = xmm1 * xmm0; /* mulss */
    xmm0 = xmm0 * MEMF(0x649AB0); /* mulss */
    MEMF(edi + eax + 0x1F4) = xmm1; /* movss */
    edx = MEM32(0x84A13C);
    MEMF(edi + edx + 0x258) = xmm0; /* movss */
    eax = MEM32(0x84A13C);
    xmm0 = MEMF(0x648F08); /* movss */
    MEMF(edi + eax + 0x25C) = xmm0; /* movss */
    g_seh_ebp = ebp; sub_002A8A07(); return; /* tail jmp 0x002A8A07 */

}

/**
 * sub_002A8FC0
 * Original: 0x002A8FC0 - 0x002A90A3 (227 bytes, 61 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_002A8FC0(void)
{
    float xmm0, xmm3;
    double _fp_stack[8];
    int _fp_top = 0;
    #define fp_push(v) (_fp_stack[--_fp_top & 7] = (v))
    #define fp_pop() (_fp_top++)
    #define fp_popp() (fp_pop())
    #define fp_top() _fp_stack[_fp_top & 7]
    #define fp_st1() _fp_stack[(_fp_top + 1) & 7]

loc_002A8FC0: ;
    esp = esp - 8;
    ecx = MEM32(0x84A13C);
    eax = edx;
    eax = (uint32_t)((int32_t)eax * (int32_t)0x2B0);
    fp_push(MEMF(eax + ecx + 0x258)); /* fld float */
    fp_st1() *= fp_top(); fp_pop(); /* fmul */
    MEMF(esp + 4) = (float)fp_top(); fp_popp(); /* fstp */
    fp_push(MEMF(eax + ecx + 0x25C)); /* fld float */
    fp_st1() *= fp_top(); fp_pop(); /* fmul */
    eax = eax + ecx;
    PUSH32(esp, edi);
    MEMF(esp + 4) = (float)fp_top(); fp_popp(); /* fstp */
    edi = esi;
    fp_push((double)SMEM32(esi * 4 + 0x7F9FC4)); /* fild */
    edi = (uint32_t)((int32_t)edi * (int32_t)0x2B0);
    fp_push(MEMF(esp + 4)); /* fld float */
    /* FPU: fsin  */
    PUSH32(esp, 0);
    PUSH32(esp, 0x3F800000);
    PUSH32(esp, ecx);
    edi = edi + ecx;
    ecx = MEM32(eax + 0x200);
    { double _t = fp_top(); fp_top() = fp_st1(); fp_st1() = _t; } /* fxch */
    fp_push(MEMF(esp + 0x10)); /* fld float */
    /* FPU: fcos  */
    MEMF(esp + 0x10) = (float)fp_top(); fp_pop(); /* fst */
    fp_st1() /= fp_top(); fp_pop(); /* fdivp */
    { double _t = fp_top(); fp_top() = fp_st1(); fp_st1() = _t; } /* fxch */
    fp_st1() += fp_top(); fp_pop(); /* fadd */
    fp_st1() /= fp_top(); fp_pop(); /* fdivp */
    MEMF(esp) = (float)fp_top(); fp_popp(); /* fstp */
    PUSH32(esp, ecx);
    PUSH32(esp, 0); sub_003E3CA0(); /* call 0x003E3CA0 */

loc_002A9038: ;
    fp_push((double)SMEM32(esi * 4 + 0x7F9FD8)); /* fild */
    fp_push(MEMF(esp + 0x18)); /* fld float */
    xmm3 = MEMF(0x64987C); /* movss */
    /* FPU: fsin  */
    eax = MEM32(eax + 0x1FC);
    xmm0 = xmm0 * xmm3; /* mulss */
    xmm0 = xmm0 - MEMF(edi + 0x25C); /* subss */
    MEMF(esp + 4) = xmm0; /* movss */
    { double _t = fp_top(); fp_top() = fp_st1(); fp_st1() = _t; } /* fxch */
    fp_push(MEMF(esp + 0x18)); /* fld float */
    /* FPU: fcos  */
    MEMF(esp + 0x18) = (float)fp_top(); fp_pop(); /* fst */
    fp_st1() /= fp_top(); fp_pop(); /* fdivp */
    { double _t = fp_top(); fp_top() = fp_st1(); fp_st1() = _t; } /* fxch */
    fp_st1() += fp_top(); fp_pop(); /* fadd */
    fp_st1() /= fp_top(); fp_pop(); /* fdivp */
    MEMF(esp) = (float)fp_top(); fp_popp(); /* fstp */
    PUSH32(esp, eax);
    PUSH32(esp, 0); sub_003E3CA0(); /* call 0x003E3CA0 */

loc_002A9082: ;
    xmm0 = xmm0 * xmm3; /* mulss */
    xmm0 = xmm0 - MEMF(edi + 0x258); /* subss */
    esp = esp + 4;
    MEMF(esp) = xmm0; /* movss */
    PUSH32(esp, 0); sub_00064330(); /* call 0x00064330 */

loc_002A909B: ;
    esp = esp + 0x10;
    POP32(esp, edi);
    esp = esp + 8;
    esp += 4; return; /* ret */

    #undef fp_push
    #undef fp_pop
    #undef fp_popp
    #undef fp_top
    #undef fp_st1
}

/**
 * sub_002A90B0
 * Original: 0x002A90B0 - 0x002A915D (173 bytes, 41 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_002A90B0(void)
{
    float xmm0;
    double _fp_stack[8];
    int _fp_top = 0;
    #define fp_push(v) (_fp_stack[--_fp_top & 7] = (v))
    #define fp_pop() (_fp_top++)
    #define fp_popp() (fp_pop())
    #define fp_top() _fp_stack[_fp_top & 7]
    #define fp_st1() _fp_stack[(_fp_top + 1) & 7]

loc_002A90B0: ;
    PUSH32(esp, ecx);
    ecx = MEM32(0x84A13C);
    eax = (uint32_t)((int32_t)eax * (int32_t)0x2B0);
    fp_push(MEMF(eax + ecx + 0x260)); /* fld float */
    fp_st1() *= fp_top(); fp_pop(); /* fmul */
    eax = eax + ecx;
    xmm0 = 0.0f; /* xorps self = zero */
    fp_top() = -fp_top(); /* fchs */
    MEMF(eax + 0x284) = xmm0; /* movss */
    fp_st1() *= fp_top(); fp_pop(); /* fmul */
    MEMF(eax + 0x278) = xmm0; /* movss */
    MEMF(eax + 0x28C) = xmm0; /* movss */
    /* fld st(0) */
    MEMF(eax + 0x298) = xmm0; /* movss */
    /* FPU: fcos  */
    fp_top() = -fp_top(); /* fchs */
    MEMF(esp) = (float)fp_top(); fp_pop(); /* fst */
    MEMF(eax + 0x280) = (float)fp_top(); fp_popp(); /* fstp */
    /* FPU: fsin  */
    MEMF(eax + 0x288) = (float)fp_top(); fp_pop(); /* fst */
    fp_push(MEMF(esp)); /* fld float */
    fp_top() = -fp_top(); /* fchs */
    MEMF(eax + 0x274) = (float)fp_top(); fp_popp(); /* fstp */
    MEMF(eax + 0x27C) = (float)fp_top(); fp_popp(); /* fstp */
    fp_push(MEMF(eax + 0x264)); /* fld float */
    fp_st1() *= fp_top(); fp_pop(); /* fmul */
    fp_st1() *= fp_top(); fp_pop(); /* fmul */
    /* fld st(0) */
    /* FPU: fcos  */
    fp_top() = -fp_top(); /* fchs */
    MEMF(esp) = (float)fp_top(); fp_pop(); /* fst */
    MEMF(eax + 0x290) = (float)fp_top(); fp_popp(); /* fstp */
    /* FPU: fsin  */
    fp_top() = -fp_top(); /* fchs */
    MEMF(eax + 0x294) = (float)fp_top(); fp_pop(); /* fst */
    fp_push(MEMF(esp)); /* fld float */
    fp_top() = -fp_top(); /* fchs */
    MEMF(eax + 0x29C) = (float)fp_top(); fp_popp(); /* fstp */
    MEMF(eax + 0x2A0) = (float)fp_top(); fp_popp(); /* fstp */
    POP32(esp, ecx);
    esp += 4; return; /* ret */

    #undef fp_push
    #undef fp_pop
    #undef fp_popp
    #undef fp_top
    #undef fp_st1
}

/**
 * sub_002A9160
 * Original: 0x002A9160 - 0x002A9166 (6 bytes, 4 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_002A9160(void)
{
    uint32_t ebp;
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_002A9160: ;
    PUSH32(esp, esi);
    PUSH32(esp, edi);
    edi = 0; /* xor self */
    g_seh_ebp = ebp; sub_002A9170(); return; /* tail jmp 0x002A9170 */

}

/**
 * sub_002A9260
 * Original: 0x002A9260 - 0x002A93C6 (358 bytes, 68 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_002A9260(void)
{
    uint32_t ebp;
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_002A9260: ;
    PUSH32(esp, ebx);
    PUSH32(esp, ebp);
    PUSH32(esp, esi);
    PUSH32(esp, edi);
    esi = eax;
    eax = (uint32_t)((int32_t)eax >> 1);
    ecx = edx;
    MEM32(0x7F9FC4) = edx;
    ecx = (uint32_t)((int32_t)ecx >> 1);
    MEM32(0x7F9FD4) = edx;
    edx = (uint32_t)((int32_t)edx >> 2);
    edi = edx + edx * 2;
    ebp = 0; /* xor self */
    MEM32(0x7F9FD8) = esi;
    MEM32(0x7F9FDC) = esi;
    MEM32(0x7F9FE8) = esi;
    esi = (uint32_t)((int32_t)esi >> 2);
    ebx = esi + esi * 2;
    MEM16(0x7F9F8A) = LO16(edi);
    MEM16(0x7F9FA2) = LO16(edi);
    MEM16(0x7F9FB6) = LO16(edi);
    MEM16(0x7F9FBA) = LO16(edi);
    POP32(esp, edi);
    MEM16(0x7F9F98) = LO16(esi);
    MEM16(0x7F9FAC) = LO16(esi);
    MEM16(0x7F9FB4) = LO16(esi);
    POP32(esp, esi);
    MEM16(0x7F9F90) = LO16(ebp);
    MEM16(0x7F9F92) = LO16(ebp);
    MEM16(0x7F9F94) = LO16(ebp);
    MEM16(0x7F9F96) = LO16(ebp);
    MEM16(0x7F9FA8) = LO16(ebp);
    MEM16(0x7F9FAA) = LO16(ebp);
    POP32(esp, ebp);
    MEM16(0x7F9F9C) = LO16(ebx);
    MEM16(0x7F9FB0) = LO16(ebx);
    MEM16(0x7F9FB8) = LO16(ebx);
    MEM32(0x7F9FC8) = ecx;
    MEM32(0x7F9FE0) = eax;
    MEM32(0x7F9FCC) = ecx;
    MEM32(0x7F9FE4) = eax;
    MEM32(0x7F9FD0) = ecx;
    MEM16(0x7F9F70) = LO16(eax);
    MEM16(0x7F9F72) = LO16(ecx);
    MEM16(0x7F9F74) = LO16(eax);
    MEM16(0x7F9F76) = LO16(ecx);
    MEM16(0x7F9F78) = LO16(eax);
    MEM16(0x7F9F7A) = LO16(ecx);
    MEM16(0x7F9F7C) = LO16(eax);
    MEM16(0x7F9F7E) = LO16(ecx);
    MEM16(0x7F9F80) = LO16(eax);
    MEM16(0x7F9F82) = LO16(ecx);
    MEM16(0x7F9F84) = LO16(eax);
    MEM16(0x7F9F86) = LO16(edx);
    MEM16(0x7F9F88) = LO16(eax);
    MEM16(0x7F9F8C) = LO16(eax);
    MEM16(0x7F9F8E) = LO16(ecx);
    MEM16(0x7F9F9A) = LO16(edx);
    MEM16(0x7F9F9E) = LO16(edx);
    MEM16(0x7F9FA0) = LO16(eax);
    MEM16(0x7F9FA4) = LO16(eax);
    MEM16(0x7F9FA6) = LO16(ecx);
    MEM16(0x7F9FAE) = LO16(edx);
    MEM16(0x7F9FB2) = LO16(edx);
    MEM16(0x7F9FBC) = LO16(eax);
    MEM16(0x7F9FBE) = LO16(ecx);
    POP32(esp, ebx);
    esp += 4; return; /* ret */

}

/**
 * sub_002A93D0
 * Original: 0x002A93D0 - 0x002A947E (174 bytes, 38 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_002A93D0(void)
{
    uint32_t ebp;
    int _flags = 0; /* fallback flag var */
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_002A93D0: ;
    PUSH32(esp, ebx);
    ebx = 0; /* xor self */
    PUSH32(esp, esi);
    MEM8(0x7819D6) = 5;
    MEM32(0x7FA1E4) = ebx;
    MEM32(0x7FA1E8) = 1;
    MEM8(0x7FA1E0) = 1;

loc_002A93F2: ;
    eax = ZX8(MEM8(0x7819D6));
    eax--;
    if (CMP_A(eax, 4)) goto loc_002A946E; /* ja: above (unsigned >) */

loc_002A93FF: ;
    { uint32_t _jt = MEM32(eax * 4 + 0x2A9480); /* switch: 5 entries, 5 targets */
    if (_jt == 0x002A9406u) goto loc_002A9406;
    if (_jt == 0x002A940Du) goto loc_002A940D;
    if (_jt == 0x002A9412u) goto loc_002A9412;
    if (_jt == 0x002A9463u) goto loc_002A9463;
    if (_jt == 0x002A946Eu) goto loc_002A946E;
    g_seh_ebp = ebp; RECOMP_ITAIL(_jt); return; }

loc_002A9406: ;
    MEM8(0x84703C) = 1;

loc_002A940D: ;
    PUSH32(esp, 0); sub_001FBEA0(); /* call 0x001FBEA0 */

loc_002A9412: ;
    if (TEST_NZ(MEM8(0x876758), 1)) goto loc_002A942C; /* jne: not equal / not zero */

loc_002A941B: ;
    MEM32(0x876758) = MEM32(0x876758) | 1;
    eax = 0x8761E8;
    PUSH32(esp, 0); sub_00265DE0(); /* call 0x00265DE0 */

loc_002A942C: ;
    if (CMP_NE(MEM8(0x8761E8), LO8(ebx))) goto loc_002A9442; /* jne: not equal / not zero */

loc_002A9434: ;
    if (CMP_NE(MEM32(0x876748), 0xFFFFFFFFu)) goto loc_002A9442; /* jne: not equal / not zero */

loc_002A943D: ;
    PUSH32(esp, 0); sub_0032D430(); /* call 0x0032D430 */

loc_002A9442: ;
    esi = MEM32(0x7FA1F4);
    eax = 0; /* xor self */
    SET_LO16(eax, MEM16(0x7FA1E8));
    ecx = 0; /* xor self */
    SET_LO16(ecx, MEM16(0x7FA1E4));
    PUSH32(esp, eax);
    PUSH32(esp, ecx);
    PUSH32(esp, 0); sub_002A95B0(); /* call 0x002A95B0 */

loc_002A9460: ;
    esp = esp + 8;

loc_002A9463: ;
    PUSH32(esp, 0); sub_002A96E0(); /* call 0x002A96E0 */

loc_002A9468: ;
    MEM8(0x7819D6) = LO8(ebx);

loc_002A946E: ;
    MEM32(0x7FA200) = ebx;
    PUSH32(esp, 0); sub_002A3F10(); /* call 0x002A3F10 */

loc_002A9479: ;
    goto loc_002A93F2;

}

/**
 * sub_002A94A0
 * Original: 0x002A94A0 - 0x002A9596 (246 bytes, 51 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_002A94A0(void)
{
    uint32_t ebp;
    int _flags = 0; /* fallback flag var */
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_002A94A0: ;
    SET_LO8(eax, MEM8(0x76EC82));
    if (TEST_NZ(LO8(eax), LO8(eax))) goto loc_002A9595; /* jne: not equal / not zero */

loc_002A94AD: ;
    eax = MEM32(0x847024);
    if (TEST_Z(eax, eax)) goto loc_002A94BF; /* je: equal / zero */

loc_002A94B6: ;
    eax = MEM32(eax + 0x40);
    PUSH32(esp, eax);
    PUSH32(esp, 0); sub_00025720(); /* call 0x00025720 */

loc_002A94BF: ;
    SET_LO8(eax, MEM8(0x771130));
    if (TEST_NZ(LO8(eax), LO8(eax))) goto loc_002A9595; /* jne: not equal / not zero */

loc_002A94CC: ;
    eax = MEM32(esp + 4);
    eax--;
    (void)0; /* cmp eax, 5 - flags set for next jcc */
    MEM16(0x800400) = 0;
    if (CMP_A(eax, 5)) goto loc_002A9595; /* ja: above (unsigned >) */

loc_002A94E3: ;
    { uint32_t _jt = MEM32(eax * 4 + 0x2A9598); /* switch: 6 entries, 5 targets */
    if (_jt == 0x002A94EAu) goto loc_002A94EA;
    if (_jt == 0x002A9515u) goto loc_002A9515;
    if (_jt == 0x002A9537u) goto loc_002A9537;
    if (_jt == 0x002A9562u) goto loc_002A9562;
    if (_jt == 0x002A9584u) goto loc_002A9584;
    g_seh_ebp = ebp; RECOMP_ITAIL(_jt); return; }

loc_002A94EA: ;
    ecx = MEM32(esp + 0x10);
    edx = MEM32(esp + 0xC);
    SET_LO8(eax, MEM8(esp + 8));
    MEM32(0x7FA1E8) = ecx;
    MEM32(0x7FA1E4) = edx;
    MEM32(0x7FA1F4) = esi;
    MEM8(0x771B9C) = LO8(eax);
    MEM8(0x7819D6) = 2;
    esp += 4; return; /* ret */

loc_002A9515: ;
    ecx = MEM32(0x84A5F8);
    SET_LO16(edx, MEM16(ecx + 0x1B8));
    MEM8(0x7819D6) = 3;
    MEM32(0x7FA1F4) = esi;
    MEM16(0x800400) = LO16(edx);
    esp += 4; return; /* ret */

loc_002A9537: ;
    SET_LO8(eax, MEM8(esp + 8));
    ecx = MEM32(0x84A5F8);
    MEM8(0x771B9C) = LO8(eax);
    SET_LO16(edx, MEM16(ecx + 0x1B8));
    MEM8(0x7819D6) = 3;
    MEM32(0x7FA1F4) = esi;
    MEM16(0x800400) = LO16(edx);
    esp += 4; return; /* ret */

loc_002A9562: ;
    SET_LO8(eax, MEM8(0x7819D5));
    if (TEST_NZ(LO8(eax), LO8(eax))) goto loc_002A9595; /* jne: not equal / not zero */

loc_002A956B: ;
    MEM8(0x7819D6) = 4;
    MEM32(0x84A220) = 0;
    MEM8(0x7FAAB0) = 0;
    esp += 4; return; /* ret */

loc_002A9584: ;
    MEM32(0x7FA1F4) = 5;
    MEM8(0x7819D6) = 1;

loc_002A9595: ;
    esp += 4; return; /* ret */

}

/**
 * sub_002A95B0
 * Original: 0x002A95B0 - 0x002A964A (154 bytes, 33 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_002A95B0(void)
{
    uint32_t ebp;
    int _flags = 0; /* fallback flag var */
    float xmm0;
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_002A95B0: ;
    xmm0 = 0.0f; /* xorps self = zero */
    eax = SX16(LO16(esi));
    MEM32(0x7FA1F4) = eax;
    MEM32(0x7FA1F8) = eax;
    eax = ZX8(MEM8(0x771B9C));
    PUSH32(esp, ebx);
    ebx = 0; /* xor self */
    PUSH32(esp, eax);
    MEM8(0x7FA23C) = 2;
    MEM32(0x84727C) = ebx;
    MEMF(0x771014) = xmm0; /* movss */
    MEM32(0x847280) = ebx;
    MEM8(0x847284) = 0x1E;
    MEM8(0x847285) = LO8(ebx);
    PUSH32(esp, 0); sub_000F19E0(); /* call 0x000F19E0 */

loc_002A95F8: ;
    SET_LO8(eax, MEM8(0x876758));
    esp = esp + 4;
    (void)0; /* test LO8(eax), 1 - flags set for next jcc */
    MEM8(0x76F0B6) = LO8(ebx);
    MEM8(0x765601) = LO8(ebx);
    MEM8(0x770C11) = LO8(ebx);
    MEM8(0x770C10) = LO8(ebx);
    if (TEST_NZ(LO8(eax), 1)) goto loc_002A962D; /* jne: not equal / not zero */

loc_002A961C: ;
    MEM32(0x876758) = MEM32(0x876758) | 1;
    eax = 0x8761E8;
    PUSH32(esp, 0); sub_00265DE0(); /* call 0x00265DE0 */

loc_002A962D: ;
    if (CMP_L(LO16(esi), 0x4B)) { sub_002A964A(); return; } /* jl: less (signed <) */

loc_002A9633: ;
    ecx = (uint32_t)(int32_t)SMEM8(0x6BCFEC);
    ecx--;
    MEM8(0x7819D5) = 1;
    MEM32(0x7FA200) = ecx;
    g_seh_ebp = ebp; sub_002A9663(); return; /* tail jmp 0x002A9663 */

}

/**
 * sub_002A96E0
 * Original: 0x002A96E0 - 0x002A97B4 (212 bytes, 54 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_002A96E0(void)
{
    uint32_t ebp;
    int _flags = 0; /* fallback flag var */
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_002A96E0: ;
    eax = MEM32(0x87C920);
    esp = esp - 0x10;
    PUSH32(esp, ebx);
    ebx = 0; /* xor self */
    (void)0; /* cmp eax, 4 - flags set for next jcc */
    MEM8(0x7819D0) = LO8(ebx);
    if (CMP_A(eax, 4)) goto loc_002A972A; /* ja: above (unsigned >) */

loc_002A96F6: ;
    { uint32_t _jt = MEM32(eax * 4 + 0x2AA0A8); /* switch: 5 entries, 5 targets */
    if (_jt == 0x002A96FDu) goto loc_002A96FD;
    if (_jt == 0x002A9704u) goto loc_002A9704;
    if (_jt == 0x002A970Bu) goto loc_002A970B;
    if (_jt == 0x002A9712u) goto loc_002A9712;
    if (_jt == 0x002A9719u) goto loc_002A9719;
    g_seh_ebp = ebp; RECOMP_ITAIL(_jt); return; }

loc_002A96FD: ;
    ecx = 0xFF0000FFu;
    goto loc_002A971E;

loc_002A9704: ;
    ecx = 0xFF00FF;
    goto loc_002A971E;

loc_002A970B: ;
    ecx = 0xFFFF;
    goto loc_002A971E;

loc_002A9712: ;
    ecx = 0x7F7F00FF;
    goto loc_002A971E;

loc_002A9719: ;
    ecx = 0x7F7FFF;

loc_002A971E: ;
    MEM32(0x74FB28) = ecx;
    MEM32(0x74FB24) = ecx;

loc_002A972A: ;
    eax++;
    (void)0; /* cmp eax, 5 - flags set for next jcc */
    MEM32(0x87C920) = eax;
    if (CMP_L(eax, 5)) goto loc_002A973B; /* jl: less (signed <) */

loc_002A9735: ;
    MEM32(0x87C920) = ebx;

loc_002A973B: ;
    PUSH32(esp, 0); sub_003F5450(); /* call 0x003F5450 */

loc_002A9740: ;
    PUSH32(esp, 0); sub_0009C8E0(); /* call 0x0009C8E0 */

loc_002A9745: ;
    PUSH32(esp, 0); sub_00075B50(); /* call 0x00075B50 */

loc_002A974A: ;
    PUSH32(esp, 0); sub_002AA0C0(); /* call 0x002AA0C0 */

loc_002A974F: ;
    eax = MEM32(0x7FA1F4);
    PUSH32(esp, eax);
    PUSH32(esp, 0); sub_001F5950(); /* call 0x001F5950 */

loc_002A975A: ;
    SET_LO8(eax, MEM8(0x7FA23C));
    esp = esp + 4;
    if (CMP_NE(LO8(eax), LO8(ebx))) goto loc_002A976D; /* jne: not equal / not zero */

loc_002A9766: ;
    MEM8(0x7FA23C) = 1;

loc_002A976D: ;
    PUSH32(esp, esi);
    PUSH32(esp, 0x64);
    MEM8(0x7FA275) = LO8(ebx);
    MEM8(0x7FA274) = LO8(ebx);
    MEM8(0x7FA273) = LO8(ebx);
    MEM8(0x7FA272) = LO8(ebx);
    MEM8(0x7FA271) = LO8(ebx);
    MEM8(0x7FA270) = LO8(ebx);
    PUSH32(esp, 0); sub_00354210(); /* call 0x00354210 */

loc_002A9799: ;
    esp = esp + 4;
    if (CMP_EQ(eax, ebx)) { sub_002A97B4(); return; } /* je: equal / zero */

loc_002A97A0: ;
    PUSH32(esp, ebx);
    PUSH32(esp, 0x80);
    esi = eax;
    PUSH32(esp, 0); sub_00355810(); /* call 0x00355810 */

loc_002A97AD: ;
    MEM32(0x870ED4) = eax;
    g_seh_ebp = ebp; sub_002A97BA(); return; /* tail jmp 0x002A97BA */

}

/**
 * sub_002AA0C0
 * Original: 0x002AA0C0 - 0x002AA134 (116 bytes, 28 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_002AA0C0(void)
{
    int _flags = 0; /* fallback flag var */

loc_002AA0C0: ;
    eax = MEM32(0x7FA1F4);
    PUSH32(esp, 0); sub_00068AE0(); /* call 0x00068AE0 */

loc_002AA0CA: ;
    PUSH32(esp, 0); sub_002AABB0(); /* call 0x002AABB0 */

loc_002AA0CF: ;
    PUSH32(esp, 0); sub_002AADC0(); /* call 0x002AADC0 */

loc_002AA0D4: ;
    if (TEST_NZ(LO8(eax), LO8(eax))) goto loc_002AA133; /* jne: not equal / not zero */

loc_002AA0D8: ;
    PUSH32(esp, ebx);
    ebx = 1;
    edi = edi;

loc_002AA0E0: ;
    eax = MEM32(0x7FA1F4);
    MEM32(0x7FA1F8) = eax;
    MEM32(0x7FA1F4) = 0x46;
    MEM8(0x8498D0) = LO8(ebx);
    PUSH32(esp, 0); sub_001FC830(); /* call 0x001FC830 */

loc_002AA0FF: ;
    MEM8(0x7819D5) = 0;
    PUSH32(esp, 0); sub_001F72C0(); /* call 0x001F72C0 */

loc_002AA10B: ;
    PUSH32(esp, ebx);
    MEM32(0x84A170) = ebx;
    PUSH32(esp, 0); sub_0025DB70(); /* call 0x0025DB70 */

loc_002AA117: ;
    eax = MEM32(0x7FA1F4);
    esp = esp + 4;
    PUSH32(esp, 0); sub_00068AE0(); /* call 0x00068AE0 */

loc_002AA124: ;
    PUSH32(esp, 0); sub_002AABB0(); /* call 0x002AABB0 */

loc_002AA129: ;
    PUSH32(esp, 0); sub_002AADC0(); /* call 0x002AADC0 */

loc_002AA12E: ;
    if (TEST_Z(LO8(eax), LO8(eax))) goto loc_002AA0E0; /* je: equal / zero */

loc_002AA132: ;
    POP32(esp, ebx);

loc_002AA133: ;
    esp += 4; return; /* ret */

}

/**
 * sub_002AA140
 * Original: 0x002AA140 - 0x002AA500 (960 bytes, 256 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_002AA140(void)
{
    int _flags = 0; /* fallback flag var */

loc_002AA140: ;
    PUSH32(esp, ecx);
    SET_LO8(eax, MEM8(0x7819D5));
    PUSH32(esp, ebx);
    ebx = 0; /* xor self */
    (void)0; /* cmp LO8(eax), LO8(ebx) - flags set for next jcc */
    PUSH32(esp, esi);
    PUSH32(esp, edi);
    MEM8(0x7819D1) = 1;
    if (CMP_EQ(LO8(eax), LO8(ebx))) goto loc_002AA171; /* je: equal / zero */

loc_002AA156: ;
    PUSH32(esp, 0); sub_002CB1D0(); /* call 0x002CB1D0 */

loc_002AA15B: ;
    edi = eax;
    eax = 0x86F150;
    PUSH32(esp, 0); sub_002CB390(); /* call 0x002CB390 */

loc_002AA167: ;
    PUSH32(esp, 2);
    PUSH32(esp, 0); sub_0035D520(); /* call 0x0035D520 */

loc_002AA16E: ;
    esp = esp + 4;

loc_002AA171: ;
    PUSH32(esp, 0); sub_0007E320(); /* call 0x0007E320 */

loc_002AA176: ;
    esi = MEM32(eax + 8);
    PUSH32(esp, 0); sub_0007E320(); /* call 0x0007E320 */

loc_002AA17E: ;
    eax = MEM32(eax + 4);
    PUSH32(esp, 0x843B0);
    PUSH32(esp, esi);
    PUSH32(esp, eax);
    eax = esp + 0x18;
    PUSH32(esp, eax);
    PUSH32(esp, 0); sub_002AA500(); /* call 0x002AA500 */

loc_002AA192: ;
    esp = esp + 0x10;
    ecx = 0; /* xor self */
    eax = 1;
    PUSH32(esp, 0); sub_000507A0(); /* call 0x000507A0 */

loc_002AA1A1: ;
    PUSH32(esp, 0); sub_0001B180(); /* call 0x0001B180 */

loc_002AA1A6: ;
    PUSH32(esp, 0); sub_003EB9D0(); /* call 0x003EB9D0 */

loc_002AA1AB: ;
    PUSH32(esp, 0); sub_00075BC0(); /* call 0x00075BC0 */

loc_002AA1B0: ;
    PUSH32(esp, 0); sub_003F5AB0(); /* call 0x003F5AB0 */

loc_002AA1B5: ;
    eax = MEM32(0x7FA1F8);
    if (CMP_EQ(eax, 0x1D)) goto loc_002AA204; /* je: equal / zero */

loc_002AA1BF: ;
    if (CMP_EQ(eax, 0x46)) goto loc_002AA204; /* je: equal / zero */

loc_002AA1C4: ;
    PUSH32(esp, 0); sub_001CE080(); /* call 0x001CE080 */

loc_002AA1C9: ;
    PUSH32(esp, 0); sub_0010B4D0(); /* call 0x0010B4D0 */

loc_002AA1CE: ;
    PUSH32(esp, 0); sub_001859F0(); /* call 0x001859F0 */

loc_002AA1D3: ;
    if (TEST_Z(LO8(eax), LO8(eax))) goto loc_002AA1E1; /* je: equal / zero */

loc_002AA1D7: ;
    PUSH32(esp, 0); sub_001855C0(); /* call 0x001855C0 */

loc_002AA1DC: ;
    PUSH32(esp, 0); sub_00185950(); /* call 0x00185950 */

loc_002AA1E1: ;
    PUSH32(esp, 0); sub_001CDA70(); /* call 0x001CDA70 */

loc_002AA1E6: ;
    PUSH32(esp, 0); sub_000B9BD0(); /* call 0x000B9BD0 */

loc_002AA1EB: ;
    PUSH32(esp, 0); sub_001850B0(); /* call 0x001850B0 */

loc_002AA1F0: ;
    PUSH32(esp, 0); sub_00142720(); /* call 0x00142720 */

loc_002AA1F5: ;
    ecx = MEM32(0x771B6C);
    edx = MEM32(ecx + 0x14);
    PUSH32(esp, edx);
    PUSH32(esp, 0); sub_000F0BF0(); /* call 0x000F0BF0 */

loc_002AA204: ;
    eax = MEM32(0x8493BC);
    if (CMP_EQ(eax, ebx)) goto loc_002AA21D; /* je: equal / zero */

loc_002AA20D: ;
    PUSH32(esp, 0); sub_0005F0C0(); /* call 0x0005F0C0 */

loc_002AA212: ;
    MEM32(0x8493BC) = ebx;
    PUSH32(esp, 0); sub_0012E940(); /* call 0x0012E940 */

loc_002AA21D: ;
    eax = MEM32(0x849750);
    if (CMP_EQ(eax, ebx)) goto loc_002AA23E; /* je: equal / zero */

loc_002AA226: ;
    PUSH32(esp, eax);
    PUSH32(esp, 0); sub_0053B870(); /* call 0x0053B870 */

loc_002AA22C: ;
    MEM32(0x849750) = ebx;
    MEM32(0x849754) = ebx;
    MEM32(0x849758) = ebx;

loc_002AA23E: ;
    MEM8(0x84721C) = LO8(ebx);
    PUSH32(esp, 0); sub_001A71F0(); /* call 0x001A71F0 */

loc_002AA249: ;
    PUSH32(esp, 0); sub_0030F1D0(); /* call 0x0030F1D0 */

loc_002AA24E: ;
    edi = 0; /* xor self */
    esi = 0; /* xor self */

loc_002AA252: ;
    eax = MEM32(0x84A5FC);
    if (CMP_EQ(MEM8(eax + edi), LO8(ebx))) goto loc_002AA26E; /* je: equal / zero */

loc_002AA25C: ;
    ecx = MEM32(0x84A5F8);
    edx = esi + ecx;
    PUSH32(esp, edx);
    PUSH32(esp, 0); sub_001C32D0(); /* call 0x001C32D0 */

loc_002AA26B: ;
    esp = esp + 4;

loc_002AA26E: ;
    esi = esi + 0x6D0;
    edi++;
    if (CMP_L(esi, 0x36800)) goto loc_002AA252; /* jl: less (signed <) */

loc_002AA27D: ;
    PUSH32(esp, 0); sub_000DAF20(); /* call 0x000DAF20 */

loc_002AA282: ;
    PUSH32(esp, 0); sub_002B45F0(); /* call 0x002B45F0 */

loc_002AA287: ;
    PUSH32(esp, 0); sub_002F6A60(); /* call 0x002F6A60 */

loc_002AA28C: ;
    PUSH32(esp, 0); sub_00063F80(); /* call 0x00063F80 */

loc_002AA291: ;
    PUSH32(esp, 0); sub_00065A00(); /* call 0x00065A00 */

loc_002AA296: ;
    PUSH32(esp, 0); sub_0006C180(); /* call 0x0006C180 */

loc_002AA29B: ;
    PUSH32(esp, 0); sub_00074230(); /* call 0x00074230 */

loc_002AA2A0: ;
    if (CMP_EQ(MEM32(0x7707A0), ebx)) goto loc_002AA2E9; /* je: equal / zero */

loc_002AA2A8: ;
    eax = MEM32(0x847214);
    PUSH32(esp, eax);
    PUSH32(esp, 0); sub_0042C911(); /* call 0x0042C911 */

loc_002AA2B3: ;
    if (TEST_NZ(eax, eax)) goto loc_002AA2E9; /* jne: not equal / not zero */

loc_002AA2B7: ;
    eax = MEM32(0x847214);
    if (CMP_EQ(eax, ebx)) goto loc_002AA2E9; /* je: equal / zero */

loc_002AA2C0: ;
    esi = MEM32(0x7FA490);
    edx = MEM32(0x7FA4B4);
    esi++;
    edx--;
    PUSH32(esp, eax);
    MEM32(0x7FA490) = esi;
    MEM32(0x7FA4B4) = edx;
    PUSH32(esp, 0); sub_003E7080(); /* call 0x003E7080 */

loc_002AA2E0: ;
    esp = esp + 4;
    MEM32(0x847214) = ebx;

loc_002AA2E9: ;
    PUSH32(esp, 0); sub_001E7820(); /* call 0x001E7820 */

loc_002AA2EE: ;
    PUSH32(esp, 0); sub_003C9B60(); /* call 0x003C9B60 */

loc_002AA2F3: ;
    PUSH32(esp, 0); sub_002A9160(); /* call 0x002A9160 */

loc_002AA2F8: ;
    eax = MEM32(0x84A664);
    if (CMP_EQ(eax, ebx)) goto loc_002AA310; /* je: equal / zero */

loc_002AA301: ;
    PUSH32(esp, eax);
    PUSH32(esp, 0); sub_00206780(); /* call 0x00206780 */

loc_002AA307: ;
    esp = esp + 4;
    MEM32(0x84A664) = ebx;

loc_002AA310: ;
    ecx = MEM32(0x871B88);
    if (CMP_EQ(ecx, ebx)) goto loc_002AA325; /* je: equal / zero */

loc_002AA31A: ;
    edx = MEM32(ecx);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, ebx);
    PUSH32(esp, 0); RECOMP_ICALL_SAFE(MEM32(edx + 0x18), _icall_esp); /* indirect call */
    }

loc_002AA320: ;
    PUSH32(esp, 0); sub_0037BE70(); /* call 0x0037BE70 */

loc_002AA325: ;
    PUSH32(esp, 0); sub_00129B10(); /* call 0x00129B10 */

loc_002AA32A: ;
    PUSH32(esp, 0); sub_0034A450(); /* call 0x0034A450 */

loc_002AA32F: ;
    PUSH32(esp, 0); sub_00359F80(); /* call 0x00359F80 */

loc_002AA334: ;
    PUSH32(esp, 0); sub_00207120(); /* call 0x00207120 */

loc_002AA339: ;
    PUSH32(esp, 0); sub_00252A80(); /* call 0x00252A80 */

loc_002AA33E: ;
    PUSH32(esp, 0); sub_00117B30(); /* call 0x00117B30 */

loc_002AA343: ;
    eax = MEM32(0x84946C);
    if (CMP_EQ(eax, ebx)) goto loc_002AA388; /* je: equal / zero */

loc_002AA34C: ;
    PUSH32(esp, eax);
    PUSH32(esp, 0); sub_0042C911(); /* call 0x0042C911 */

loc_002AA352: ;
    if (TEST_NZ(eax, eax)) goto loc_002AA382; /* jne: not equal / not zero */

loc_002AA356: ;
    eax = MEM32(0x84946C);
    if (CMP_EQ(eax, ebx)) goto loc_002AA382; /* je: equal / zero */

loc_002AA35F: ;
    esi = MEM32(0x7FA490);
    edx = MEM32(0x7FA4B4);
    esi++;
    edx--;
    PUSH32(esp, eax);
    MEM32(0x7FA490) = esi;
    MEM32(0x7FA4B4) = edx;
    PUSH32(esp, 0); sub_003E7080(); /* call 0x003E7080 */

loc_002AA37F: ;
    esp = esp + 4;

loc_002AA382: ;
    MEM32(0x84946C) = ebx;

loc_002AA388: ;
    if (CMP_EQ(MEM8(0x7FAAB0), LO8(ebx))) goto loc_002AA3CB; /* je: equal / zero */

loc_002AA390: ;
    eax = MEM32(0x84A220);
    PUSH32(esp, eax);
    PUSH32(esp, 0); sub_0042C911(); /* call 0x0042C911 */

loc_002AA39B: ;
    if (TEST_NZ(eax, eax)) goto loc_002AA3CB; /* jne: not equal / not zero */

loc_002AA39F: ;
    eax = MEM32(0x84A220);
    if (CMP_EQ(eax, ebx)) goto loc_002AA3CB; /* je: equal / zero */

loc_002AA3A8: ;
    esi = MEM32(0x7FA490);
    edx = MEM32(0x7FA4B4);
    esi++;
    edx--;
    PUSH32(esp, eax);
    MEM32(0x7FA490) = esi;
    MEM32(0x7FA4B4) = edx;
    PUSH32(esp, 0); sub_003E7080(); /* call 0x003E7080 */

loc_002AA3C8: ;
    esp = esp + 4;

loc_002AA3CB: ;
    MEM32(0x84A220) = ebx;
    PUSH32(esp, 0); sub_002B8110(); /* call 0x002B8110 */

loc_002AA3D6: ;
    PUSH32(esp, 0); sub_00046240(); /* call 0x00046240 */

loc_002AA3DB: ;
    PUSH32(esp, 0); sub_002CFF30(); /* call 0x002CFF30 */

loc_002AA3E0: ;
    PUSH32(esp, 0); sub_00282B40(); /* call 0x00282B40 */

loc_002AA3E5: ;
    PUSH32(esp, 0x862C40);
    PUSH32(esp, 0); sub_00295DE0(); /* call 0x00295DE0 */

loc_002AA3EF: ;
    edi = MEM32(0x8755F8);
    if (CMP_EQ(edi, ebx)) goto loc_002AA467; /* je: equal / zero */

loc_002AA3F9: ;
    eax = MEM32(edi + 0x10);
    (void)0; /* cmp eax, ebx - flags set for next jcc */
    esi = edi + 0xC;
    if (CMP_EQ(eax, ebx)) goto loc_002AA42D; /* je: equal / zero */

loc_002AA403: ;
    ecx = MEM32(esp + 0xC);
    ebx = MEM32(esi + 8);
    PUSH32(esp, ecx);
    PUSH32(esp, 0); sub_00233460(); /* call 0x00233460 */

loc_002AA410: ;
    eax = MEM32(esi + 4);
    esp = esp + 4;
    (void)0; /* test eax, eax - flags set for next jcc */
    MEM32(esp + 0xC) = eax;
    if (TEST_Z(eax, eax)) goto loc_002AA42B; /* je: equal / zero */

loc_002AA41E: ;
    edx = esp + 0xC;
    PUSH32(esp, edx);
    PUSH32(esp, 0); sub_002AF1C0(); /* call 0x002AF1C0 */

loc_002AA428: ;
    esp = esp + 4;

loc_002AA42B: ;
    ebx = 0; /* xor self */

loc_002AA42D: ;
    MEM32(esi + 4) = ebx;
    MEM32(esi + 8) = ebx;
    MEM32(esi + 0xC) = ebx;
    PUSH32(esp, 0); sub_00068410(); /* call 0x00068410 */

loc_002AA43B: ;
    eax = MEM32(edi + 4);
    (void)0; /* cmp eax, ebx - flags set for next jcc */
    MEM32(esp + 0xC) = eax;
    if (CMP_EQ(eax, ebx)) goto loc_002AA453; /* je: equal / zero */

loc_002AA446: ;
    eax = esp + 0xC;
    PUSH32(esp, eax);
    PUSH32(esp, 0); sub_002AF1C0(); /* call 0x002AF1C0 */

loc_002AA450: ;
    esp = esp + 4;

loc_002AA453: ;
    ecx = esp + 0xC;
    PUSH32(esp, ecx);
    MEM32(edi + 4) = ebx;
    MEM32(esp + 0x10) = edi;
    PUSH32(esp, 0); sub_002AF1C0(); /* call 0x002AF1C0 */

loc_002AA464: ;
    esp = esp + 4;

loc_002AA467: ;
    MEM32(0x8755F8) = ebx;
    PUSH32(esp, 0); sub_0026AAB0(); /* call 0x0026AAB0 */

loc_002AA472: ;
    MEM8(0x77A48C) = LO8(ebx);
    PUSH32(esp, 0); sub_001DD5B0(); /* call 0x001DD5B0 */

loc_002AA47D: ;
    PUSH32(esp, 0); sub_001E58A0(); /* call 0x001E58A0 */

loc_002AA482: ;
    eax = MEM32(0x771B78);
    PUSH32(esp, eax);
    esi = eax;
    PUSH32(esp, 0); sub_000EC170(); /* call 0x000EC170 */

loc_002AA48F: ;
    PUSH32(esp, 0); sub_000EC1E0(); /* call 0x000EC1E0 */

loc_002AA494: ;
    PUSH32(esp, 0); sub_00128EE0(); /* call 0x00128EE0 */

loc_002AA499: ;
    PUSH32(esp, 0); sub_003694A0(); /* call 0x003694A0 */

loc_002AA49E: ;
    PUSH32(esp, 0); sub_001F5EC0(); /* call 0x001F5EC0 */

loc_002AA4A3: ;
    PUSH32(esp, 0); sub_0034EF90(); /* call 0x0034EF90 */

loc_002AA4A8: ;
    esi = MEM32(0x84939C);
    if (CMP_EQ(esi, ebx)) goto loc_002AA4B7; /* je: equal / zero */

loc_002AA4B2: ;
    PUSH32(esp, 0); sub_0011C3D0(); /* call 0x0011C3D0 */

loc_002AA4B7: ;
    PUSH32(esp, 0); sub_001FE810(); /* call 0x001FE810 */

loc_002AA4BC: ;
    PUSH32(esp, 0); sub_000863E0(); /* call 0x000863E0 */

loc_002AA4C1: ;
    PUSH32(esp, 0); sub_00202DD0(); /* call 0x00202DD0 */

loc_002AA4C6: ;
    PUSH32(esp, 0); sub_003EB9D0(); /* call 0x003EB9D0 */

loc_002AA4CB: ;
    PUSH32(esp, 0); sub_002AA5B0(); /* call 0x002AA5B0 */

loc_002AA4D0: ;
    PUSH32(esp, 0); sub_002AA820(); /* call 0x002AA820 */

loc_002AA4D5: ;
    PUSH32(esp, 0); sub_00353F00(); /* call 0x00353F00 */

loc_002AA4DA: ;
    eax = 0x84D458;
    PUSH32(esp, 0); sub_00061F90(); /* call 0x00061F90 */

loc_002AA4E4: ;
    esi = MEM32(0x847024);
    PUSH32(esp, 0); sub_000187C0(); /* call 0x000187C0 */

loc_002AA4EF: ;
    POP32(esp, edi);
    POP32(esp, esi);
    MEM8(0x7819D1) = LO8(ebx);
    MEM32(0x84A144) = ebx;
    POP32(esp, ebx);
    POP32(esp, ecx);
    esp += 4; return; /* ret */

}

/**
 * sub_002AA500
 * Original: 0x002AA500 - 0x002AA52D (45 bytes, 22 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_002AA500(void)
{
    uint32_t ebp;
    int _flags = 0; /* fallback flag var */
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_002AA500: ;
    PUSH32(esp, ebx);
    ebx = MEM32(esp + 0x10);
    PUSH32(esp, ebp);
    ebp = MEM32(esp + 0xC);
    PUSH32(esp, esi);
    esi = MEM32(esp + 0x14);
    if (CMP_EQ(esi, ebx)) { sub_002AA52D(); return; } /* je: equal / zero */

loc_002AA513: ;
    PUSH32(esp, edi);
    edi = MEM32(esp + 0x20);

loc_002AA518: ;
    ecx = esi;
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, 0); RECOMP_ICALL_SAFE(edi, _icall_esp); /* indirect call */
    }

loc_002AA51C: ;
    esi = esi + 0x30;
    if (CMP_NE(esi, ebx)) goto loc_002AA518; /* jne: not equal / not zero */

loc_002AA523: ;
    MEM32(ebp) = edi;
    POP32(esp, edi);
    POP32(esp, esi);
    eax = ebp;
    POP32(esp, ebp);
    POP32(esp, ebx);
    esp += 4; return; /* ret */

}

/**
 * sub_002AA540
 * Original: 0x002AA540 - 0x002AA586 (70 bytes, 28 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_002AA540(void)
{
    uint32_t ebp;
    int _flags = 0; /* fallback flag var */
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_002AA540: ;
    PUSH32(esp, ebp);
    ebp = MEM32(esp + 8);
    PUSH32(esp, esi);
    esi = MEM32(ecx + 0x20);
    (void)0; /* test esi, esi - flags set for next jcc */
    PUSH32(esp, edi);
    if (TEST_S(esi, esi)) goto loc_002AA573; /* jl: less (signed <) */

loc_002AA54E: ;
    edi = MEM32(ecx + 4);
    if (TEST_NZ(edi, edi)) goto loc_002AA559; /* jne: not equal / not zero */

loc_002AA555: ;
    eax = 0; /* xor self */
    goto loc_002AA56F;

loc_002AA559: ;
    edx = MEM32(ecx + 8);
    edx = edx - edi;
    eax = 0x2AAAAAAB;
    { int64_t _r = (int64_t)(int32_t)eax * (int64_t)(int32_t)edx;
      eax = (uint32_t)_r; edx = (uint32_t)(_r >> 32); }
    edx = (uint32_t)((int32_t)edx >> 2);
    eax = edx;
    eax = eax >> 0x1F;
    eax = eax + edx;

loc_002AA56F: ;
    if (CMP_B(esi, eax)) { sub_002AA586(); return; } /* jb: below (unsigned <) */

loc_002AA573: ;
    POP32(esp, edi);
    MEM32(ebp) = 0;
    POP32(esp, esi);
    MEM32(ebx) = 0;
    POP32(esp, ebp);
    esp += 8; return; /* ret 4 */

}

/**
 * sub_002AA5B0
 * Original: 0x002AA5B0 - 0x002AA659 (169 bytes, 51 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_002AA5B0(void)
{
    int _flags = 0; /* fallback flag var */

loc_002AA5B0: ;
    eax = MEM32(0x8758C8);
    if (TEST_NZ(eax, eax)) goto loc_002AA658; /* jne: not equal / not zero */

loc_002AA5BD: ;
    eax = MEM32(0x84A19C);
    if (TEST_NZ(eax, eax)) goto loc_002AA5CB; /* jne: not equal / not zero */

loc_002AA5C6: ;
    PUSH32(esp, 0); sub_002AED70(); /* call 0x002AED70 */

loc_002AA5CB: ;
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
    if (TEST_Z(esi, esi)) goto loc_002AA615; /* je: equal / zero */

loc_002AA5F3: ;
    if (CMP_B(MEM32(esi + 0x80), 0x10)) goto loc_002AA615; /* jb: below (unsigned <) */

loc_002AA5FC: ;
    ecx = 4;
    PUSH32(esp, 0); sub_003E62A0(); /* call 0x003E62A0 */

loc_002AA606: ;
    PUSH32(esp, 0x10);
    PUSH32(esp, edi);
    PUSH32(esp, 0); sub_003E6BD0(); /* call 0x003E6BD0 */

loc_002AA60E: ;
    esp = esp + 8;
    if (TEST_NZ(eax, eax)) goto loc_002AA636; /* jne: not equal / not zero */

loc_002AA615: ;
    esi = MEM32(0x84A184);
    ecx = 4;
    edi = esi;
    PUSH32(esp, 0); sub_003E62A0(); /* call 0x003E62A0 */

loc_002AA627: ;
    PUSH32(esp, 0x10);
    PUSH32(esp, edi);
    PUSH32(esp, 0); sub_003E6BD0(); /* call 0x003E6BD0 */

loc_002AA62F: ;
    esp = esp + 8;
    if (TEST_Z(eax, eax)) goto loc_002AA64F; /* je: equal / zero */

loc_002AA636: ;
    POP32(esp, edi);
    MEM8(eax + 0xC) = 0;
    MEM32(eax) = 0;
    MEM32(eax + 4) = 0;
    MEM32(0x8758C8) = eax;
    POP32(esp, esi);
    esp += 4; return; /* ret */

loc_002AA64F: ;
    eax = 0; /* xor self */
    POP32(esp, edi);
    MEM32(0x8758C8) = eax;
    POP32(esp, esi);

loc_002AA658: ;
    esp += 4; return; /* ret */

}

/**
 * sub_002AA660
 * Original: 0x002AA660 - 0x002AA79E (318 bytes, 109 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_002AA660(void)
{
    uint32_t ebp;
    uint32_t append_root;
    uint32_t append_previous;
    uint32_t append_guard = 0;
    uint32_t formatted_start;
    uint32_t formatted_length;
    uint32_t allocated_string;
    uint32_t copy_index;
    int _flags = 0; /* fallback flag var */
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_002AA660: ;
    esp = esp - 0x104;
    PUSH32(esp, ebx);
    PUSH32(esp, ebp);
    ebp = MEM32(esp + 0x110);
    PUSH32(esp, eax);
    PUSH32(esp, ecx);
    edx = esp + 0x10;
    PUSH32(esp, 0x5AC810);
    PUSH32(esp, edx);
    PUSH32(esp, 0); sub_0046EC2D(); /* call 0x0046EC2D */

loc_002AA680: ;
    esp = esp + 0x10;
    eax = esp + 8;
    PUSH32(esp, eax);
    eax = ebp;
    PUSH32(esp, 0); sub_002AA7C0(); /* call 0x002AA7C0 */

loc_002AA68F: ;
    ebx = 0; /* xor self */
    if (CMP_NE(eax, ebx)) { sub_002AA79E(); return; } /* jne: not equal / not zero */

loc_002AA699: ;
    if (CMP_NE(MEM32(0x84A19C), ebx)) goto loc_002AA6A6; /* jne: not equal / not zero */

loc_002AA6A1: ;
    PUSH32(esp, 0); sub_002AED70(); /* call 0x002AED70 */

loc_002AA6A6: ;
    edx = MEM32(0x7FA494);
    ecx = MEM32(0x7FA4B4);
    PUSH32(esp, esi);
    esi = MEM32(0x84A190);
    edx++;
    ecx++;
    (void)0; /* cmp esi, ebx - flags set for next jcc */
    PUSH32(esp, edi);
    MEM32(0x7FA494) = edx;
    MEM32(0x7FA4B4) = ecx;
    edi = esi;
    if (CMP_EQ(esi, ebx)) goto loc_002AA6F2; /* je: equal / zero */

loc_002AA6CE: ;
    if (CMP_B(MEM32(esi + 0x80), 0x18)) goto loc_002AA6F2; /* jb: below (unsigned <) */

loc_002AA6D7: ;
    ecx = 4;
    PUSH32(esp, 0); sub_003E62A0(); /* call 0x003E62A0 */

loc_002AA6E1: ;
    PUSH32(esp, 0x18);
    PUSH32(esp, edi);
    PUSH32(esp, 0); sub_003E6BD0(); /* call 0x003E6BD0 */

loc_002AA6E9: ;
    esi = eax;
    esp = esp + 8;
    if (CMP_NE(esi, ebx)) goto loc_002AA715; /* jne: not equal / not zero */

loc_002AA6F2: ;
    esi = MEM32(0x84A184);
    ecx = 4;
    edi = esi;
    PUSH32(esp, 0); sub_003E62A0(); /* call 0x003E62A0 */

loc_002AA704: ;
    PUSH32(esp, 0x18);
    PUSH32(esp, edi);
    PUSH32(esp, 0); sub_003E6BD0(); /* call 0x003E6BD0 */

loc_002AA70C: ;
    esi = eax;
    esp = esp + 8;
    if (CMP_EQ(esi, ebx)) goto loc_002AA761; /* je: equal / zero */

loc_002AA715: ;
    formatted_start = esp + 0x10;
    formatted_length = 0;
    eax = formatted_start;
    MEM32(esi + 0xC) = ebx;
    MEM32(esi + 8) = ebx;
    MEM8(esi + 0x10) = LO8(ebx);
    edx = eax + 1;

loc_002AA725: ;
    if (formatted_length >= 0xFF || MEM8(formatted_start + formatted_length) == 0) {
        MEM8(formatted_start + formatted_length) = 0;
        SET_LO8(ecx, 0);
        eax = formatted_start + formatted_length + 1;
        goto loc_002AA72C;
    }
    formatted_length++;
    eax = formatted_start + formatted_length;
    goto loc_002AA725;

loc_002AA72C: ;
    PUSH32(esp, 0xFFFFFFFFu);
    PUSH32(esp, 0xC6);
    PUSH32(esp, 0x6069F4);
    eax = formatted_length + 1;
    PUSH32(esp, eax);
    PUSH32(esp, 0); sub_002AF0E0(); /* call 0x002AF0E0 */

loc_002AA741: ;
    esp = esp + 0x10;
    if (CMP_EQ(eax, ebx)) goto loc_002AA75C; /* je: equal / zero */

loc_002AA748: ;
    allocated_string = eax;
    for (copy_index = 0; copy_index <= formatted_length; ++copy_index) {
        MEM8(allocated_string + copy_index) = MEM8(formatted_start + copy_index);
    }
    ecx = formatted_start + formatted_length + 1;
    edi = allocated_string - formatted_start;
    SET_LO8(edx, 0);
    eax = allocated_string;
    goto loc_002AA75C;

loc_002AA752: ;
    goto loc_002AA75C;

loc_002AA75C: ;
    MEM32(esi + 0x14) = eax;
    goto loc_002AA763;

loc_002AA761: ;
    esi = 0; /* xor self */

loc_002AA763: ;
    edx = MEM32(ebp + 4);
    (void)0; /* cmp edx, ebx - flags set for next jcc */
    ecx = ebp + 4;
    eax = ebp;
    if (CMP_EQ(edx, ebx)) goto loc_002AA77C; /* je: equal / zero */

loc_002AA76F: ;
    /* nop */
    append_root = eax;
    append_previous = eax;

loc_002AA770: ;
    append_previous = eax;
    eax = MEM32(ecx);
    if (eax == append_root || ++append_guard > 4096) {
        /* Repair a corrupt circular list at its last valid node. */
        eax = append_previous;
        goto loc_002AA77C;
    }
    edx = MEM32(eax + 4);
    (void)0; /* cmp edx, ebx - flags set for next jcc */
    ecx = eax + 4;
    if (CMP_NE(edx, ebx)) goto loc_002AA770; /* jne: not equal / not zero */

loc_002AA77C: ;
    MEM32(eax + 4) = esi;
    MEM32(esi) = eax;
    MEM32(esi + 4) = ebx;
    MEM32(ebp + 8) = MEM32(ebp + 8) + 1;
    SET_LO8(eax, MEM8(esp + 0x11C));
    POP32(esp, edi);
    MEM8(esi + 0x10) = LO8(eax);
    POP32(esp, esi);
    POP32(esp, ebp);
    POP32(esp, ebx);
    esp = esp + 0x104;
    esp += 12; return; /* ret 8 */

}

/**
 * sub_002AA7C0
 * Original: 0x002AA7C0 - 0x002AA816 (86 bytes, 42 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_002AA7C0(void)
{
    uint32_t ebp;
    int _flags = 0; /* fallback flag var */
    int _cf = 0; /* carry flag */
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_002AA7C0: ;
    PUSH32(esp, ebp);
    ebp = MEM32(esp + 8);
    PUSH32(esp, edi);
    edi = MEM32(eax + 4);
    if (TEST_Z(edi, edi)) { sub_002AA816(); return; } /* je: equal / zero */

loc_002AA7CD: ;
    PUSH32(esp, ebx);
    PUSH32(esp, esi);
    /* nop */

loc_002AA7D0: ;
    ecx = MEM32(edi + 0x14);
    esi = ebp;

loc_002AA7D5: ;
    SET_LO8(eax, MEM8(ecx));
    SET_LO8(ebx, MEM8(esi));
    SET_LO8(edx, LO8(eax));
    if (CMP_NE(LO8(eax), LO8(ebx))) goto loc_002AA7FD; /* jne: not equal / not zero */

loc_002AA7DF: ;
    if (TEST_Z(LO8(edx), LO8(edx))) goto loc_002AA7F9; /* je: equal / zero */

loc_002AA7E3: ;
    SET_LO8(eax, MEM8(ecx + 1));
    SET_LO8(ebx, MEM8(esi + 1));
    SET_LO8(edx, LO8(eax));
    if (CMP_NE(LO8(eax), LO8(ebx))) goto loc_002AA7FD; /* jne: not equal / not zero */

loc_002AA7EF: ;
    ecx = ecx + 2;
    esi = esi + 2;
    if (TEST_NZ(LO8(edx), LO8(edx))) goto loc_002AA7D5; /* jne: not equal / not zero */

loc_002AA7F9: ;
    ecx = 0; /* xor self */
    goto loc_002AA802;

loc_002AA7FD: ;
    ecx = _cf ? 0xFFFFFFFF : 0; /* sbb self (CF extend) */
    ecx = ecx - 0xFFFFFFFFu - _cf; /* sbb */

loc_002AA802: ;
    if (TEST_Z(ecx, ecx)) goto loc_002AA80D; /* je: equal / zero */

loc_002AA806: ;
    edi = MEM32(edi + 4);
    if (TEST_NZ(edi, edi)) goto loc_002AA7D0; /* jne: not equal / not zero */

loc_002AA80D: ;
    POP32(esp, esi);
    POP32(esp, ebx);
    eax = edi;
    POP32(esp, edi);
    POP32(esp, ebp);
    esp += 8; return; /* ret 4 */

}

/**
 * sub_002AA820
 * Original: 0x002AA820 - 0x002AA90A (234 bytes, 75 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_002AA820(void)
{
    uint32_t ebp;
    int _flags = 0; /* fallback flag var */
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_002AA820: ;
    esp = esp - 8;
    PUSH32(esp, esi);
    esi = MEM32(eax + 4);
    if (TEST_Z(esi, esi)) goto loc_002AA905; /* je: equal / zero */

loc_002AA82F: ;
    PUSH32(esp, ebx);
    PUSH32(esp, ebp);
    PUSH32(esp, edi);
    goto loc_002AA838;

loc_002AA834: ;
    esi = MEM32(esp + 0x10);

loc_002AA838: ;
    SET_LO8(eax, MEM8(esi + 0x10));
    (void)0; /* test LO8(eax), LO8(eax) - flags set for next jcc */
    ecx = MEM32(esi + 4);
    ebx = esi + 4;
    MEM32(esp + 0x10) = ecx;
    if (TEST_NZ(LO8(eax), LO8(eax))) goto loc_002AA8F6; /* jne: not equal / not zero */

loc_002AA84D: ;
    ebp = MEM32(esi + 0xC);
    ecx = ebp;
    edi = 0x84D458;
    PUSH32(esp, 0); sub_00061F40(); /* call 0x00061F40 */

loc_002AA85C: ;
    edi = eax;
    if (TEST_Z(edi, edi)) goto loc_002AA887; /* je: equal / zero */

loc_002AA862: ;
    eax = MEM32(edi + 0x18);
    if (TEST_Z(eax, eax)) goto loc_002AA86D; /* je: equal / zero */

loc_002AA869: ;
    MEM16(edi + 0x2C) = MEM16(edi + 0x2C) - 1;

loc_002AA86D: ;
    if (CMP_NE(MEM16(edi + 0x2C), 0)) goto loc_002AA887; /* jne: not equal / not zero */

loc_002AA874: ;
    ecx = ebp;
    eax = edi;
    PUSH32(esp, 0); sub_0005EA20(); /* call 0x0005EA20 */

loc_002AA87D: ;
    eax = 0x84D458;
    PUSH32(esp, 0); sub_00061D60(); /* call 0x00061D60 */

loc_002AA887: ;
    eax = MEM32(ebx);
    (void)0; /* test eax, eax - flags set for next jcc */
    ecx = MEM32(esi);
    MEM32(esi + 0xC) = 0;
    MEM32(ecx + 4) = eax;
    if (TEST_Z(eax, eax)) goto loc_002AA89B; /* je: equal / zero */

loc_002AA899: ;
    MEM32(eax) = ecx;

loc_002AA89B: ;
    MEM32(esi) = 0;
    MEM32(ebx) = 0;
    eax = MEM32(esi + 0x14);
    PUSH32(esp, eax);
    PUSH32(esp, 0); sub_0042C911(); /* call 0x0042C911 */

loc_002AA8B0: ;
    if (TEST_NZ(eax, eax)) goto loc_002AA8E5; /* jne: not equal / not zero */

loc_002AA8B4: ;
    eax = MEM32(esi + 0x14);
    if (TEST_Z(eax, eax)) goto loc_002AA8E5; /* je: equal / zero */

loc_002AA8BB: ;
    edi = MEM32(0x7FA490);
    edx = MEM32(0x7FA4B4);
    edi++;
    edx--;
    PUSH32(esp, eax);
    MEM32(0x7FA490) = edi;
    MEM32(0x7FA4B4) = edx;
    PUSH32(esp, 0); sub_003E7080(); /* call 0x003E7080 */

loc_002AA8DB: ;
    esp = esp + 4;
    MEM32(esi + 0x14) = 0;

loc_002AA8E5: ;
    edx = esp + 0x14;
    PUSH32(esp, edx);
    MEM32(esp + 0x18) = esi;
    PUSH32(esp, 0); sub_002AF1C0(); /* call 0x002AF1C0 */

loc_002AA8F3: ;
    esp = esp + 4;

loc_002AA8F6: ;
    eax = MEM32(esp + 0x10);
    if (TEST_NZ(eax, eax)) goto loc_002AA834; /* jne: not equal / not zero */

loc_002AA902: ;
    POP32(esp, edi);
    POP32(esp, ebp);
    POP32(esp, ebx);

loc_002AA905: ;
    POP32(esp, esi);
    esp = esp + 8;
    esp += 4; return; /* ret */

}

/**
 * sub_002AA910
 * Original: 0x002AA910 - 0x002AA981 (113 bytes, 44 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_002AA910(void)
{
    uint32_t ebp;
    int _flags = 0; /* fallback flag var */
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_002AA910: ;
    PUSH32(esp, ebx);
    PUSH32(esp, ebp);
    ebp = MEM32(eax + 4);
    ebx = 0; /* xor self */
    (void)0; /* cmp ebp, ebx - flags set for next jcc */
    MEM8(eax + 0xC) = LO8(ebx);
    if (CMP_EQ(ebp, ebx)) goto loc_002AA97E; /* je: equal / zero */

loc_002AA91E: ;
    PUSH32(esp, esi);
    PUSH32(esp, edi);

loc_002AA920: ;
    edi = ebp;
    (void)0; /* cmp MEM32(edi + 8), ebx - flags set for next jcc */
    ebp = MEM32(ebp + 4);
    if (CMP_NE(MEM32(edi + 8), ebx)) goto loc_002AA978; /* jne: not equal / not zero */

loc_002AA92A: ;
    if (CMP_NE(MEM32(edi + 0xC), ebx)) goto loc_002AA978; /* jne: not equal / not zero */

loc_002AA92F: ;
    PUSH32(esp, 0x114);
    PUSH32(esp, 0); sub_0005EDB0(); /* call 0x0005EDB0 */

loc_002AA939: ;
    esi = eax;
    esp = esp + 4;
    if (CMP_EQ(esi, ebx)) goto loc_002AA973; /* je: equal / zero */

loc_002AA942: ;
    ecx = MEM32(edi + 0x14);
    PUSH32(esp, ecx);
    PUSH32(esp, 0x587BE4);
    eax = esi + 0xC;
    PUSH32(esp, 0x18);
    PUSH32(esp, 0); sub_0005E4E0(); /* call 0x0005E4E0 */

loc_002AA955: ;
    esp = esp + 0xC;
    eax = esi;
    MEM32(esi + 0x110) = 0x18;
    MEM32(esi) = ebx;
    MEM32(esi + 8) = ebx;
    MEM32(esi + 4) = ebx;
    PUSH32(esp, 0); sub_00063680(); /* call 0x00063680 */

loc_002AA971: ;
    goto loc_002AA975;

loc_002AA973: ;
    esi = 0; /* xor self */

loc_002AA975: ;
    MEM32(edi + 8) = esi;

loc_002AA978: ;
    if (CMP_NE(ebp, ebx)) goto loc_002AA920; /* jne: not equal / not zero */

loc_002AA97C: ;
    POP32(esp, edi);
    POP32(esp, esi);

loc_002AA97E: ;
    POP32(esp, ebp);
    POP32(esp, ebx);
    esp += 4; return; /* ret */

}

/**
 * sub_002AA990
 * Original: 0x002AA990 - 0x002AAA53 (195 bytes, 72 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_002AA990(void)
{
    int _flags = 0; /* fallback flag var */

loc_002AA990: ;
    PUSH32(esp, ecx);
    eax = MEM32(esp + 8);
    PUSH32(esp, ebx);
    ebx = MEM32(eax + 4);
    (void)0; /* test ebx, ebx - flags set for next jcc */
    PUSH32(esp, esi);
    PUSH32(esp, edi);
    if (TEST_Z(ebx, ebx)) goto loc_002AAA4A; /* je: equal / zero */

loc_002AA9A3: ;
    esi = ebx;
    eax = MEM32(esi + 0xC);
    (void)0; /* test eax, eax - flags set for next jcc */
    ebx = MEM32(ebx + 4);
    if (TEST_NZ(eax, eax)) goto loc_002AA9F0; /* jne: not equal / not zero */

loc_002AA9AF: ;
    eax = MEM32(esi + 8);
    eax = MEM32(eax + 4);
    ecx = MEM32(eax + 4);
    if (TEST_NZ(ecx, ecx)) goto loc_002AA9FD; /* jne: not equal / not zero */

loc_002AA9BC: ;
    ecx = MEM32(eax + 0x18);
    if (TEST_Z(ecx, ecx)) goto loc_002AA9C7; /* je: equal / zero */

loc_002AA9C3: ;
    MEM16(eax + 0x2C) = MEM16(eax + 0x2C) + 1;

loc_002AA9C7: ;
    MEM32(esi + 0xC) = ecx;
    edi = MEM32(esi + 8);
    if (TEST_Z(edi, edi)) goto loc_002AA9E9; /* je: equal / zero */

loc_002AA9D1: ;
    ecx = edi;
    PUSH32(esp, 0); sub_000636D0(); /* call 0x000636D0 */

loc_002AA9D8: ;
    ecx = esp + 0xC;
    PUSH32(esp, ecx);
    MEM32(esp + 0x10) = edi;
    PUSH32(esp, 0); sub_002AF1C0(); /* call 0x002AF1C0 */

loc_002AA9E6: ;
    esp = esp + 4;

loc_002AA9E9: ;
    MEM32(esi + 8) = 0;

loc_002AA9F0: ;
    if (TEST_NZ(ebx, ebx)) goto loc_002AA9A3; /* jne: not equal / not zero */

loc_002AA9F4: ;
    POP32(esp, edi);
    POP32(esp, esi);
    SET_LO8(eax, 0); /* xor self */
    POP32(esp, ebx);
    POP32(esp, ecx);
    esp += 8; return; /* ret 4 */

loc_002AA9FD: ;
    (void)0; /* cmp ecx, 0x3E3 - flags set for next jcc */
    MEM32(esi + 0xC) = 0;
    if (CMP_LE(ecx, 0x3E3)) goto loc_002AAA1D; /* jle: less or equal (signed <=) */

loc_002AAA0C: ;
    if (CMP_G(ecx, 0x3E5)) goto loc_002AAA1D; /* jg: greater (signed >) */

loc_002AAA14: ;
    POP32(esp, edi);
    POP32(esp, esi);
    SET_LO8(eax, 1);
    POP32(esp, ebx);
    POP32(esp, ecx);
    esp += 8; return; /* ret 4 */

loc_002AAA1D: ;
    esi = MEM32(esi + 8);
    eax = MEM32(esi + 8);
    if (TEST_NZ(eax, eax)) goto loc_002AAA33; /* jne: not equal / not zero */

loc_002AAA27: ;
    edx = MEM32(esi + 4);
    MEM32(esp + 0x14) = edx;
    PUSH32(esp, 0); sub_001F04F0(); /* call 0x001F04F0 */

loc_002AAA33: ;
    eax = MEM32(eax + 0x44);
    SET_LO8(ecx, 1);
    MEM8(eax + 0x124) = LO8(ecx);
    MEM32(0x847164) = eax;
    eax = MEM32(esp + 0x14);
    MEM8(eax + 0xC) = LO8(ecx);

loc_002AAA4A: ;
    POP32(esp, edi);
    POP32(esp, esi);
    SET_LO8(eax, 0); /* xor self */
    POP32(esp, ebx);
    POP32(esp, ecx);
    esp += 8; return; /* ret 4 */

}

/**
 * sub_002AAA60
 * Original: 0x002AAA60 - 0x002AAB87 (295 bytes, 93 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_002AAA60(void)
{
    uint32_t ebp;
    int _flags = 0; /* fallback flag var */
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_002AAA60: ;
    esp = esp - 8;
    PUSH32(esp, esi);
    esi = MEM32(eax + 4);
    if (TEST_Z(esi, esi)) goto loc_002AAB82; /* je: equal / zero */

loc_002AAA6F: ;
    PUSH32(esp, ebx);
    PUSH32(esp, ebp);
    PUSH32(esp, edi);
    goto loc_002AAA78;

loc_002AAA74: ;
    esi = MEM32(esp + 0x10);

loc_002AAA78: ;
    ebx = MEM32(esi + 0xC);
    (void)0; /* test ebx, ebx - flags set for next jcc */
    ecx = MEM32(esi + 4);
    ebp = esi + 4;
    MEM32(esp + 0x10) = ecx;
    if (TEST_Z(ebx, ebx)) goto loc_002AAAC7; /* je: equal / zero */

loc_002AAA89: ;
    ecx = ebx;
    edi = 0x84D458;
    PUSH32(esp, 0); sub_00061F40(); /* call 0x00061F40 */

loc_002AAA95: ;
    edi = eax;
    if (TEST_Z(edi, edi)) goto loc_002AAAC0; /* je: equal / zero */

loc_002AAA9B: ;
    eax = MEM32(edi + 0x18);
    if (TEST_Z(eax, eax)) goto loc_002AAAA6; /* je: equal / zero */

loc_002AAAA2: ;
    MEM16(edi + 0x2C) = MEM16(edi + 0x2C) - 1;

loc_002AAAA6: ;
    if (CMP_NE(MEM16(edi + 0x2C), 0)) goto loc_002AAAC0; /* jne: not equal / not zero */

loc_002AAAAD: ;
    ecx = ebx;
    eax = edi;
    PUSH32(esp, 0); sub_0005EA20(); /* call 0x0005EA20 */

loc_002AAAB6: ;
    eax = 0x84D458;
    PUSH32(esp, 0); sub_00061D60(); /* call 0x00061D60 */

loc_002AAAC0: ;
    MEM32(esi + 0xC) = 0;

loc_002AAAC7: ;
    edi = MEM32(esi + 8);
    if (TEST_Z(edi, edi)) goto loc_002AAAED; /* je: equal / zero */

loc_002AAACE: ;
    ecx = edi;
    PUSH32(esp, 0); sub_000636D0(); /* call 0x000636D0 */

loc_002AAAD5: ;
    edx = esp + 0x14;
    PUSH32(esp, edx);
    MEM32(esp + 0x18) = edi;
    PUSH32(esp, 0); sub_002AF1C0(); /* call 0x002AF1C0 */

loc_002AAAE3: ;
    esp = esp + 4;
    MEM32(esi + 8) = 0;

loc_002AAAED: ;
    eax = MEM32(ebp);
    (void)0; /* test eax, eax - flags set for next jcc */
    ecx = MEM32(esi);
    MEM32(ecx + 4) = eax;
    if (TEST_Z(eax, eax)) goto loc_002AAAFB; /* je: equal / zero */

loc_002AAAF9: ;
    MEM32(eax) = ecx;

loc_002AAAFB: ;
    MEM32(esi) = 0;
    MEM32(ebp) = 0;
    eax = MEM32(esi + 0x14);
    PUSH32(esp, eax);
    PUSH32(esp, 0); sub_0042C911(); /* call 0x0042C911 */

loc_002AAB11: ;
    if (TEST_NZ(eax, eax)) goto loc_002AAB46; /* jne: not equal / not zero */

loc_002AAB15: ;
    eax = MEM32(esi + 0x14);
    if (TEST_Z(eax, eax)) goto loc_002AAB46; /* je: equal / zero */

loc_002AAB1C: ;
    edi = MEM32(0x7FA490);
    edx = MEM32(0x7FA4B4);
    edi++;
    edx--;
    PUSH32(esp, eax);
    MEM32(0x7FA490) = edi;
    MEM32(0x7FA4B4) = edx;
    PUSH32(esp, 0); sub_003E7080(); /* call 0x003E7080 */

loc_002AAB3C: ;
    esp = esp + 4;
    MEM32(esi + 0x14) = 0;

loc_002AAB46: ;
    PUSH32(esp, esi);
    PUSH32(esp, 0); sub_0042C911(); /* call 0x0042C911 */

loc_002AAB4C: ;
    if (TEST_NZ(eax, eax)) goto loc_002AAB73; /* jne: not equal / not zero */

loc_002AAB50: ;
    edi = MEM32(0x7FA490);
    edx = MEM32(0x7FA4B4);
    edi++;
    edx--;
    PUSH32(esp, esi);
    MEM32(0x7FA490) = edi;
    MEM32(0x7FA4B4) = edx;
    PUSH32(esp, 0); sub_003E7080(); /* call 0x003E7080 */

loc_002AAB70: ;
    esp = esp + 4;

loc_002AAB73: ;
    eax = MEM32(esp + 0x10);
    if (TEST_NZ(eax, eax)) goto loc_002AAA74; /* jne: not equal / not zero */

loc_002AAB7F: ;
    POP32(esp, edi);
    POP32(esp, ebp);
    POP32(esp, ebx);

loc_002AAB82: ;
    POP32(esp, esi);
    esp = esp + 8;
    esp += 4; return; /* ret */

}

/**
 * sub_002AAB90
 * Original: 0x002AAB90 - 0x002AABA5 (21 bytes, 7 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_002AAB90(void)
{
    int _flags = 0; /* fallback flag var */

loc_002AAB90: ;
    SET_LO8(eax, MEM8(0x7819D5));
    if (TEST_NZ(LO8(eax), LO8(eax))) { sub_002AABA5(); return; } /* jne: not equal / not zero */

loc_002AAB99: ;
    if (CMP_EQ(MEM32(0x7FA1F8), 0x46)) { sub_002AABA5(); return; } /* je: equal / zero */

loc_002AABA2: ;
    eax = 0; /* xor self */
    esp += 4; return; /* ret */

}

/**
 * sub_002AABB0
 * Original: 0x002AABB0 - 0x002AADC0 (528 bytes, 164 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_002AABB0(void)
{
    uint32_t ebp;
    int _flags = 0; /* fallback flag var */
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_002AABB0: ;
    PUSH32(esp, ebx);
    PUSH32(esp, ebp);
    PUSH32(esp, esi);
    PUSH32(esp, edi);
    PUSH32(esp, 0); sub_002AA5B0(); /* call 0x002AA5B0 */

loc_002AABB9: ;
    ebp = eax;
    eax = MEM32(ebp + 4);
    ebx = 0; /* xor self */
    if (CMP_EQ(eax, ebx)) goto loc_002AABCE; /* je: equal / zero */

loc_002AABC4: ;
    MEM8(eax + 0x10) = LO8(ebx);
    eax = MEM32(eax + 4);
    if (CMP_NE(eax, ebx)) goto loc_002AABC4; /* jne: not equal / not zero */

loc_002AABCE: ;
    if (CMP_NE(MEM32(0x7FA1F4), 0x46)) goto loc_002AAC1F; /* jne: not equal / not zero */

loc_002AABD7: ;
    if (CMP_EQ(MEM8(0x75E9D2), LO8(ebx))) goto loc_002AAD17; /* je: equal / zero */

loc_002AABE3: ;
    PUSH32(esp, 0); sub_000615D0(); /* call 0x000615D0 */

loc_002AABE8: ;
    MEM8(eax + 0x24) = LO8(ebx);
    PUSH32(esp, 0); sub_0005F5F0(); /* call 0x0005F5F0 */

loc_002AABF0: ;
    edi = eax;
    esi = 0x68C9F4;

loc_002AABF7: ;
    eax = MEM32(esi + -4);
    ecx = MEM32(esi);
    PUSH32(esp, eax);
    eax = MEM32(esi + 4);
    PUSH32(esp, ecx);
    PUSH32(esp, 2);
    PUSH32(esp, edi);
    PUSH32(esp, 0); sub_0005FAF0(); /* call 0x0005FAF0 */

loc_002AAC09: ;
    esi = esi + 0xC;
    if (CMP_L(esi, 0x68CF40)) goto loc_002AABF7; /* jl: less (signed <) */

loc_002AAC14: ;
    MEM8(0x75E9D2) = LO8(ebx);
    goto loc_002AAD17;

loc_002AAC1F: ;
    (void)0; /* cmp MEM8(0x7819D5), LO8(ebx) - flags set for next jcc */
    eax = 0x6069E8;
    if (CMP_NE(MEM8(0x7819D5), LO8(ebx))) goto loc_002AAC31; /* jne: not equal / not zero */

loc_002AAC2C: ;
    eax = 0x6069D8;

loc_002AAC31: ;
    PUSH32(esp, 1);
    PUSH32(esp, ebp);
    ecx = 0x6069D0;
    PUSH32(esp, 0); sub_002AA660(); /* call 0x002AA660 */

loc_002AAC3E: ;
    (void)0; /* cmp MEM8(0x7819D5), LO8(ebx) - flags set for next jcc */
    eax = 0x6069E8;
    if (CMP_NE(MEM8(0x7819D5), LO8(ebx))) goto loc_002AAC50; /* jne: not equal / not zero */

loc_002AAC4B: ;
    eax = 0x5F04D8;

loc_002AAC50: ;
    PUSH32(esp, 1);
    PUSH32(esp, ebp);
    ecx = 0x6069C8;
    PUSH32(esp, 0); sub_002AA660(); /* call 0x002AA660 */

loc_002AAC5D: ;
    if (CMP_EQ(MEM8(0x7819D5), LO8(ebx))) goto loc_002AAD17; /* je: equal / zero */

loc_002AAC69: ;
    edx = MEM32(0x6BD92C);
    (void)0; /* cmp MEM32(edx + 4), ebx - flags set for next jcc */
    eax = 0x6069C0;
    if (CMP_EQ(MEM32(edx + 4), ebx)) goto loc_002AAC7E; /* je: equal / zero */

loc_002AAC79: ;
    eax = 0x5F32B0;

loc_002AAC7E: ;
    PUSH32(esp, 1);
    PUSH32(esp, ebp);
    ecx = 0x6069B4;
    PUSH32(esp, 0); sub_002AA660(); /* call 0x002AA660 */

loc_002AAC8B: ;
    eax = MEM32(0x6BD92C);
    (void)0; /* cmp MEM8(eax + 0x40), LO8(ebx) - flags set for next jcc */
    SET_LO8(ecx, (CMP_NE(MEM8(eax + 0x40), LO8(ebx))) ? 1 : 0); /* setne */
    PUSH32(esp, ecx);
    (void)0; /* cmp MEM8(eax + 0x3F), LO8(ebx) - flags set for next jcc */
    SET_LO8(ecx, MEM8(eax + 0x3E));
    SET_LO8(edx, (CMP_NE(MEM8(eax + 0x3F), LO8(ebx))) ? 1 : 0); /* setne */
    (void)0; /* cmp LO8(ecx), LO8(ebx) - flags set for next jcc */
    SET_LO8(ecx, (CMP_NE(LO8(ecx), LO8(ebx))) ? 1 : 0); /* setne */
    PUSH32(esp, edx);
    PUSH32(esp, ecx);
    (void)0; /* cmp MEM8(eax + 0x3D), LO8(ebx) - flags set for next jcc */
    SET_LO8(ecx, MEM8(eax + 0x3B));
    SET_LO8(edx, (CMP_NE(MEM8(eax + 0x3D), LO8(ebx))) ? 1 : 0); /* setne */
    PUSH32(esp, edx);
    (void)0; /* cmp MEM8(eax + 0x3C), LO8(ebx) - flags set for next jcc */
    SET_LO8(ebx, (CMP_NE(MEM8(eax + 0x3C), LO8(ebx))) ? 1 : 0); /* setne */
    (void)0; /* test LO8(ecx), LO8(ecx) - flags set for next jcc */
    SET_LO8(eax, (TEST_NZ(LO8(ecx), LO8(ecx))) ? 1 : 0); /* setne */
    PUSH32(esp, 0); sub_002B6690(); /* call 0x002B6690 */

loc_002AACC1: ;
    eax = MEM32(0x6BD92C);
    SET_LO8(ebx, MEM8(eax + 0x37));
    SET_LO8(edx, MEM8(eax + 0x36));
    (void)0; /* test LO8(ebx), LO8(ebx) - flags set for next jcc */
    SET_LO8(ebx, MEM8(eax + 0x35));
    SET_LO8(ecx, (TEST_NZ(LO8(ebx), LO8(ebx))) ? 1 : 0); /* setne */
    (void)0; /* test LO8(edx), LO8(edx) - flags set for next jcc */
    SET_LO8(edx, (TEST_NZ(LO8(edx), LO8(edx))) ? 1 : 0); /* setne */
    (void)0; /* test LO8(ebx), LO8(ebx) - flags set for next jcc */
    SET_LO8(ebx, MEM8(eax + 0x33));
    PUSH32(esp, ecx);
    SET_LO8(ecx, (TEST_NZ(LO8(ebx), LO8(ebx))) ? 1 : 0); /* setne */
    PUSH32(esp, edx);
    SET_LO8(edx, MEM8(eax + 0x34));
    (void)0; /* test LO8(edx), LO8(edx) - flags set for next jcc */
    SET_LO8(edx, (TEST_NZ(LO8(edx), LO8(edx))) ? 1 : 0); /* setne */
    (void)0; /* test LO8(ebx), LO8(ebx) - flags set for next jcc */
    SET_LO8(ebx, MEM8(eax + 0x31));
    PUSH32(esp, ecx);
    SET_LO8(ecx, (TEST_NZ(LO8(ebx), LO8(ebx))) ? 1 : 0); /* setne */
    PUSH32(esp, edx);
    SET_LO8(edx, MEM8(eax + 0x32));
    (void)0; /* test LO8(edx), LO8(edx) - flags set for next jcc */
    SET_LO8(edx, (TEST_NZ(LO8(edx), LO8(edx))) ? 1 : 0); /* setne */
    PUSH32(esp, ecx);
    (void)0; /* test LO8(ebx), LO8(ebx) - flags set for next jcc */
    SET_LO8(ecx, (TEST_NZ(LO8(ebx), LO8(ebx))) ? 1 : 0); /* setne */
    PUSH32(esp, edx);
    PUSH32(esp, ecx);
    SET_LO8(ecx, MEM8(eax + 0x30));
    (void)0; /* test LO8(ecx), LO8(ecx) - flags set for next jcc */
    SET_LO8(eax, (TEST_NZ(LO8(ecx), LO8(ecx))) ? 1 : 0); /* setne */
    PUSH32(esp, 0); sub_002B6920(); /* call 0x002B6920 */

loc_002AAD12: ;
    esp = esp + 0x2C;
    ebx = 0; /* xor self */

loc_002AAD17: ;
    eax = ebp;
    PUSH32(esp, 0); sub_002AA820(); /* call 0x002AA820 */

loc_002AAD1E: ;
    eax = MEM32(0x7FA1F4);
    PUSH32(esp, 0); sub_00064070(); /* call 0x00064070 */

loc_002AAD28: ;
    if (CMP_EQ(eax, ebx)) goto loc_002AAD38; /* je: equal / zero */

loc_002AAD2C: ;
    PUSH32(esp, ebx);
    PUSH32(esp, ebp);
    ecx = 0x60100C;
    PUSH32(esp, 0); sub_002AA660(); /* call 0x002AA660 */

loc_002AAD38: ;
    if (CMP_NE(MEM32(0x7FA1F4), 0x35)) goto loc_002AAD5F; /* jne: not equal / not zero */

loc_002AAD41: ;
    if (CMP_EQ(MEM8(0x75E9D1), LO8(ebx))) goto loc_002AAD5F; /* je: equal / zero */

loc_002AAD49: ;
    MEM8(0x75E9D1) = LO8(ebx);
    PUSH32(esp, 0); sub_000164F0(); /* call 0x000164F0 */

loc_002AAD54: ;
    PUSH32(esp, eax);
    edi = 3;
    PUSH32(esp, 0); sub_000174C0(); /* call 0x000174C0 */

loc_002AAD5F: ;
    PUSH32(esp, 0); sub_0005F5F0(); /* call 0x0005F5F0 */

loc_002AAD64: ;
    edx = MEM32(0x7FA1F4);
    PUSH32(esp, 3);
    esi = eax;
    eax = MEM32(esi + 8);
    ecx = MEM32(esi);
    PUSH32(esp, edx);
    PUSH32(esp, eax);
    PUSH32(esp, ecx);
    PUSH32(esp, 0); sub_00060040(); /* call 0x00060040 */

loc_002AAD7B: ;
    MEM8(esi + 0xC) = LO8(ebx);
    POP32(esp, edi);
    POP32(esp, esi);
    eax = eax | 0xFFFFFFFFu;
    POP32(esp, ebp);
    MEM32(0x84A11C) = ebx;
    MEM8(0x84713C) = LO8(ebx);
    MEM32(0x8472F4) = ebx;
    MEM32(0x8472F8) = ebx;
    MEM32(0x849360) = ebx;
    MEM8(0x849748) = LO8(ebx);
    MEM8(0x84A118) = 1;
    MEM32(0x68C490) = eax;
    MEM32(0x6C021C) = eax;
    MEM32(0x6C0220) = eax;
    POP32(esp, ebx);
    esp += 4; return; /* ret */

}

/**
 * sub_002AADC0
 * Original: 0x002AADC0 - 0x002AAE4F (143 bytes, 46 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_002AADC0(void)
{
    uint32_t ebp;
    int _flags = 0; /* fallback flag var */

loc_002AADC0: ;
    PUSH32(esp, ebp);
    ebp = esp;
    esp = esp & 0xFFFFFFF8u;
    esp = esp - 0x18;
    eax = MEM32(0x84A19C);
    (void)0; /* test eax, eax - flags set for next jcc */
    PUSH32(esp, ebx);
    PUSH32(esp, ebp);
    PUSH32(esp, esi);
    PUSH32(esp, edi);
    if (TEST_NZ(eax, eax)) goto loc_002AADDB; /* jne: not equal / not zero */

loc_002AADD6: ;
    PUSH32(esp, 0); sub_002AED70(); /* call 0x002AED70 */

loc_002AADDB: ;
    edx = MEM32(0x7FA494);
    ecx = MEM32(0x7FA4B4);
    esi = MEM32(0x84A190);
    edx++;
    ecx++;
    (void)0; /* test esi, esi - flags set for next jcc */
    MEM32(0x7FA494) = edx;
    MEM32(0x7FA4B4) = ecx;
    edi = esi;
    if (TEST_Z(esi, esi)) goto loc_002AAE23; /* je: equal / zero */

loc_002AAE01: ;
    if (CMP_B(MEM32(esi + 0x80), 0x64)) goto loc_002AAE23; /* jb: below (unsigned <) */

loc_002AAE0A: ;
    ecx = 0x10;
    PUSH32(esp, 0); sub_003E62A0(); /* call 0x003E62A0 */

loc_002AAE14: ;
    PUSH32(esp, 0x64);
    PUSH32(esp, edi);
    PUSH32(esp, 0); sub_003E6BD0(); /* call 0x003E6BD0 */

loc_002AAE1C: ;
    esp = esp + 8;
    if (TEST_NZ(eax, eax)) goto loc_002AAE44; /* jne: not equal / not zero */

loc_002AAE23: ;
    esi = MEM32(0x84A184);
    ecx = 0x10;
    edi = esi;
    PUSH32(esp, 0); sub_003E62A0(); /* call 0x003E62A0 */

loc_002AAE35: ;
    PUSH32(esp, 0x64);
    PUSH32(esp, edi);
    PUSH32(esp, 0); sub_003E6BD0(); /* call 0x003E6BD0 */

loc_002AAE3D: ;
    esp = esp + 8;
    if (TEST_Z(eax, eax)) { sub_002AAE4F(); return; } /* je: equal / zero */

loc_002AAE44: ;
    esi = eax;
    PUSH32(esp, 0); sub_002AB0C0(); /* call 0x002AB0C0 */

loc_002AAE4B: ;
    ebp = eax;
    g_seh_ebp = ebp; sub_002AAE51(); return; /* tail jmp 0x002AAE51 */

}

/**
 * sub_002AAF70
 * Original: 0x002AAF70 - 0x002AAFC3 (83 bytes, 24 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_002AAF70(void)
{
    int _flags = 0; /* fallback flag var */

loc_002AAF70: ;
    if (CMP_NE(MEM32(0x7FA1F4), 0x46)) goto loc_002AAFC2; /* jne: not equal / not zero */

loc_002AAF79: ;
    SET_LO8(eax, MEM8(0x75E9D0));
    if (TEST_Z(LO8(eax), LO8(eax))) goto loc_002AAFC2; /* je: equal / zero */

loc_002AAF82: ;
    PUSH32(esp, ebx);
    ebx = 0x5FB204;
    eax = 0x5FB1E8;
    PUSH32(esp, 0); sub_002345B0(); /* call 0x002345B0 */

loc_002AAF92: ;
    ecx = MEM32(0x84B11C);
    eax = MEM32(ecx);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, 0); RECOMP_ICALL_SAFE(MEM32(eax + 4), _icall_esp); /* indirect call */
    }

loc_002AAF9D: ;
    (void)0; /* cmp eax, 2 - flags set for next jcc */
    POP32(esp, ebx);
    if (CMP_NE(eax, 2)) goto loc_002AAFBB; /* jne: not equal / not zero */

loc_002AAFA3: ;
    ecx = MEM32(0x84B11C);
    edx = MEM32(ecx);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, 1);
    PUSH32(esp, 0); RECOMP_ICALL_SAFE(MEM32(edx + 8), _icall_esp); /* indirect call */
    }

loc_002AAFB0: ;
    ecx = MEM32(0x84B11C);
    eax = MEM32(ecx);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, 0); RECOMP_ICALL_SAFE(MEM32(eax + 4), _icall_esp); /* indirect call */
    }

loc_002AAFBB: ;
    MEM8(0x75E9D0) = 0;

loc_002AAFC2: ;
    esp += 4; return; /* ret */

}

/**
 * sub_002AAFD0
 * Original: 0x002AAFD0 - 0x002AB032 (98 bytes, 32 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_002AAFD0(void)
{
    uint32_t ebp;
    int _flags = 0; /* fallback flag var */
    float xmm0, xmm1;
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_002AAFD0: ;
    PUSH32(esp, ecx);
    ecx = MEM32(0x847010);
    PUSH32(esp, ebx);
    PUSH32(esp, edi);
    edi = MEM32(0x847024);
    eax = MEM32(edi + 0x44);
    ebx = 0; /* xor self */
    MEM8(eax + 0x1C) = LO8(ebx);
    eax = 0; /* xor self */
    /* nop */

loc_002AAFF0: ;
    edx = MEM32(ecx + eax * 4);
    eax++;
    (void)0; /* cmp eax, 0x29 - flags set for next jcc */
    MEM8(edx + 8) = LO8(ebx);
    if (CMP_L(eax, 0x29)) goto loc_002AAFF0; /* jl: less (signed <) */

loc_002AAFFC: ;
    if (CMP_EQ(MEM8(0x84703C), LO8(ebx))) { sub_002AB032(); return; } /* je: equal / zero */

loc_002AB004: ;
    edx = MEM32(ecx + 0x58);
    xmm1 = MEMF(edx + 4); /* movss */
    xmm0 = 0.0f; /* xorps self = zero */
    /* ucomiss xmm1, xmm0 - sets EFLAGS */
    /* lahf - load AH from flags (used in FPU compare idiom) */
    if (1 /* jnp after test - parity */) goto loc_002AB01D; /* jnp: not parity */

loc_002AB018: ;
    MEMF(edx + 4) = xmm0; /* movss */

loc_002AB01D: ;
    MEM8(edx + 9) = LO8(ebx);
    ecx = MEM32(ecx + 0x58);
    if (CMP_NE(MEM8(ecx + 8), LO8(ebx))) { sub_002AB032(); return; } /* jne: not equal / not zero */

loc_002AB028: ;
    eax = 1;
    MEM8(ecx + 8) = LO8(eax);
    g_seh_ebp = ebp; sub_002AB037(); return; /* tail jmp 0x002AB037 */

}

/**
 * sub_002AB0C0
 * Original: 0x002AB0C0 - 0x002AB1A9 (233 bytes, 63 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_002AB0C0(void)
{
    int _flags = 0; /* fallback flag var */
    float xmm0;

loc_002AB0C0: ;
    PUSH32(esp, ecx);
    PUSH32(esp, ebx);
    PUSH32(esp, edi);
    ebx = 0; /* xor self */
    PUSH32(esp, esi);
    MEM32(esi) = 0x5F695C;
    MEM8(esi + 4) = LO8(ebx);
    PUSH32(esp, 0); sub_001F6440(); /* call 0x001F6440 */

loc_002AB0D4: ;
    (void)0; /* cmp MEM32(0x84A170), 0xA - flags set for next jcc */
    xmm0 = 0.0f; /* xorps self = zero */
    MEM32(esi + 0x1C) = ebx;
    MEM8(esi + 5) = LO8(ebx);
    MEM32(esi + 0x14) = ebx;
    MEM32(esi + 0x10) = ebx;
    MEM32(esi + 0xC) = ebx;
    MEM32(esi + 8) = ebx;
    MEM32(esi) = 0x606880;
    MEM32(esi + 0x50) = ebx;
    MEM32(esi + 0x54) = ebx;
    MEM32(esi + 0x58) = ebx;
    MEM32(esi + 0x48) = 0xFFFFFFFFu;
    MEM32(esi + 0x4C) = ebx;
    MEMF(esi + 0x44) = xmm0; /* movss */
    MEM8(esi + 0x30) = LO8(ebx);
    MEM32(esi + 0x20) = ebx;
    MEM8(esi + 0x40) = LO8(ebx);
    MEM8(0x68C318) = LO8(ebx);
    if (CMP_EQ(MEM32(0x84A170), 0xA)) goto loc_002AB129; /* je: equal / zero */

loc_002AB11F: ;
    MEM32(0x84A170) = 8;

loc_002AB129: ;
    PUSH32(esp, 0); sub_00062180(); /* call 0x00062180 */

loc_002AB12E: ;
    edi = eax;
    MEM32(edi + 0x1C) = 1;
    PUSH32(esp, 0); sub_00062620(); /* call 0x00062620 */

loc_002AB13C: ;
    if (CMP_EQ(eax, ebx)) goto loc_002AB14D; /* je: equal / zero */

loc_002AB140: ;
    PUSH32(esp, eax);
    eax = MEM32(edi + 0x20);
    PUSH32(esp, eax);
    PUSH32(esp, 0); sub_00062530(); /* call 0x00062530 */

loc_002AB14A: ;
    esp = esp + 8;

loc_002AB14D: ;
    PUSH32(esp, esi);
    MEM32(edi + 0x18) = 1;
    PUSH32(esp, 0); sub_002AB9A0(); /* call 0x002AB9A0 */

loc_002AB15A: ;
    MEM32(edi + 0x18) = ebx;
    PUSH32(esp, 0); sub_002AA5B0(); /* call 0x002AA5B0 */

loc_002AB162: ;
    PUSH32(esp, 0); sub_002AA910(); /* call 0x002AA910 */

loc_002AB167: ;
    if (CMP_NE(MEM32(0x847024), ebx)) { sub_002AB1A9(); return; } /* jne: not equal / not zero */

loc_002AB16F: ;
    edi = esi;
    MEM8(0x6C028C) = 1;
    PUSH32(esp, 0); sub_002AB740(); /* call 0x002AB740 */

loc_002AB17D: ;
    MEM32(esi + 0x20) = 2;
    MEM8(0x84A16C) = 1;
    PUSH32(esp, 0); sub_00015EB0(); /* call 0x00015EB0 */

loc_002AB190: ;
    ecx = MEM32(0x847024);
    edi = MEM32(ecx + 0x3C);
    PUSH32(esp, 0); sub_0001E510(); /* call 0x0001E510 */

loc_002AB19E: ;
    PUSH32(esp, 0); sub_002AAFD0(); /* call 0x002AAFD0 */

loc_002AB1A3: ;
    eax = esi;
    POP32(esp, edi);
    POP32(esp, ebx);
    POP32(esp, ecx);
    esp += 4; return; /* ret */

}

/**
 * sub_002AB1F0
 * Original: 0x002AB1F0 - 0x002AB257 (103 bytes, 29 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_002AB1F0(void)
{
    int _flags = 0; /* fallback flag var */

loc_002AB1F0: ;
    PUSH32(esp, ecx);
    PUSH32(esp, esi);
    esi = eax;
    MEM32(esi) = 0x606880;
    MEM8(0x68C318) = 1;
    MEM32(0x84A170) = 0;
    PUSH32(esp, 0); sub_002ABC60(); /* call 0x002ABC60 */

loc_002AB210: ;
    eax = MEM32(0x84A158);
    if (TEST_Z(eax, eax)) goto loc_002AB23D; /* je: equal / zero */

loc_002AB219: ;
    PUSH32(esp, edi);
    edi = eax;
    PUSH32(esp, 0); sub_002539C0(); /* call 0x002539C0 */

loc_002AB221: ;
    eax = esp + 8;
    PUSH32(esp, eax);
    MEM32(esp + 0xC) = edi;
    PUSH32(esp, 0); sub_002AF1C0(); /* call 0x002AF1C0 */

loc_002AB22F: ;
    esp = esp + 4;
    MEM32(0x84A158) = 0;
    POP32(esp, edi);

loc_002AB23D: ;
    PUSH32(esp, 0);
    PUSH32(esp, 0); sub_002AB2F0(); /* call 0x002AB2F0 */

loc_002AB244: ;
    esp = esp + 4;
    eax = esi;
    MEM32(esi) = 0x5F695C;
    PUSH32(esp, 0); sub_001F6620(); /* call 0x001F6620 */

loc_002AB254: ;
    POP32(esp, esi);
    POP32(esp, ecx);
    esp += 4; return; /* ret */

}

/**
 * sub_002AB260
 * Original: 0x002AB260 - 0x002AB27C (28 bytes, 15 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_002AB260(void)
{
    uint32_t ebp;
    int _flags = 0; /* fallback flag var */

loc_002AB260: ;
    PUSH32(esp, ebp);
    ebp = esp;
    esp = esp & 0xFFFFFFF8u;
    PUSH32(esp, ecx);
    PUSH32(esp, esi);
    esi = ecx;
    SET_LO8(eax, MEM8(esi + 0x40));
    if (TEST_Z(LO8(eax), LO8(eax))) { sub_002AB27C(); return; } /* je: equal / zero */

loc_002AB271: ;
    MEM8(esi + 0x40) = 0;
    SET_LO8(eax, 0); /* xor self */
    POP32(esp, esi);
    esp = ebp;
    POP32(esp, ebp);
    esp += 4; return; /* ret */

}

/**
 * sub_002AB2F0
 * Original: 0x002AB2F0 - 0x002AB523 (563 bytes, 177 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_002AB2F0(void)
{
    uint32_t ebp;
    int _flags = 0; /* fallback flag var */
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_002AB2F0: ;
    PUSH32(esp, ecx);
    eax = MEM32(0x84A158);
    PUSH32(esp, ebx);
    PUSH32(esp, ebp);
    ebx = 0; /* xor self */
    (void)0; /* cmp eax, ebx - flags set for next jcc */
    PUSH32(esp, esi);
    PUSH32(esp, edi);
    if (CMP_EQ(eax, ebx)) goto loc_002AB31E; /* je: equal / zero */

loc_002AB300: ;
    esi = eax;
    PUSH32(esp, 0); sub_002539C0(); /* call 0x002539C0 */

loc_002AB307: ;
    eax = esp + 0x10;
    PUSH32(esp, eax);
    MEM32(esp + 0x14) = esi;
    PUSH32(esp, 0); sub_002AF1C0(); /* call 0x002AF1C0 */

loc_002AB315: ;
    esp = esp + 4;
    MEM32(0x84A158) = ebx;

loc_002AB31E: ;
    edi = MEM32(0x86EFCC);
    if (CMP_EQ(edi, MEM32(0x86EFD0))) goto loc_002AB3BD; /* je: equal / zero */

loc_002AB330: ;
    ebp = edi + 4;

loc_002AB333: ;
    esi = MEM32(edi);
    if (CMP_EQ(esi, ebx)) goto loc_002AB38F; /* je: equal / zero */

loc_002AB339: ;
    if (CMP_B(MEM32(esi + 0x18), 0x10)) goto loc_002AB357; /* jb: below (unsigned <) */

loc_002AB33F: ;
    eax = MEM32(esi + 4);
    (void)0; /* cmp eax, ebx - flags set for next jcc */
    MEM32(esp + 0x10) = eax;
    if (CMP_EQ(eax, ebx)) goto loc_002AB357; /* je: equal / zero */

loc_002AB34A: ;
    ecx = esp + 0x10;
    PUSH32(esp, ecx);
    PUSH32(esp, 0); sub_002AF1C0(); /* call 0x002AF1C0 */

loc_002AB354: ;
    esp = esp + 4;

loc_002AB357: ;
    MEM32(esi + 0x18) = 0xF;
    MEM32(esi + 0x14) = ebx;
    PUSH32(esp, esi);
    MEM8(esi + 4) = LO8(ebx);
    PUSH32(esp, 0); sub_0042C911(); /* call 0x0042C911 */

loc_002AB36A: ;
    if (TEST_NZ(eax, eax)) goto loc_002AB38F; /* jne: not equal / not zero */

loc_002AB36E: ;
    eax = MEM32(0x7FA490);
    edx = MEM32(0x7FA4B4);
    eax++;
    edx--;
    PUSH32(esp, esi);
    MEM32(0x7FA490) = eax;
    MEM32(0x7FA4B4) = edx;
    PUSH32(esp, 0); sub_003E7080(); /* call 0x003E7080 */

loc_002AB38C: ;
    esp = esp + 4;

loc_002AB38F: ;
    edx = MEM32(0x86EFD0);
    edx = edx - ebp;
    edx = (uint32_t)((int32_t)edx >> 2);
    edx = edx << 2;
    PUSH32(esp, edx);
    PUSH32(esp, ebp);
    PUSH32(esp, edi);
    PUSH32(esp, 0); sub_0046E670(); /* call 0x0046E670 */

loc_002AB3A5: ;
    eax = MEM32(0x86EFD0);
    eax = eax - 4;
    esp = esp + 0xC;
    (void)0; /* cmp edi, eax - flags set for next jcc */
    MEM32(0x86EFD0) = eax;
    if (CMP_NE(edi, eax)) goto loc_002AB333; /* jne: not equal / not zero */

loc_002AB3BD: ;
    eax = MEM32(esp + 0x18);
    if (CMP_EQ(eax, ebx)) goto loc_002AB51D; /* je: equal / zero */

loc_002AB3C9: ;
    ebp = eax;
    SET_LO8(eax, 0); /* xor self */
    PUSH32(esp, 0); sub_001C74F0(); /* call 0x001C74F0 */

loc_002AB3D2: ;
    esi = MEM32(eax + 0x20);
    if (CMP_L(esi, ebx)) goto loc_002AB4CA; /* jl: less (signed <) */

loc_002AB3DD: ;
    edx = MEM32(eax + 4);
    if (CMP_NE(edx, ebx)) goto loc_002AB3E8; /* jne: not equal / not zero */

loc_002AB3E4: ;
    eax = 0; /* xor self */
    goto loc_002AB3FE;

loc_002AB3E8: ;
    ecx = MEM32(eax + 8);
    ecx = ecx - edx;
    eax = 0x2AAAAAAB;
    { int64_t _r = (int64_t)(int32_t)eax * (int64_t)(int32_t)ecx;
      eax = (uint32_t)_r; edx = (uint32_t)(_r >> 32); }
    edx = (uint32_t)((int32_t)edx >> 2);
    eax = edx;
    eax = eax >> 0x1F;
    eax = eax + edx;

loc_002AB3FE: ;
    if (CMP_AE(esi, eax)) goto loc_002AB4CA; /* jae: above or equal (unsigned >=) */

loc_002AB406: ;
    eax = esp + 0x18;
    PUSH32(esp, eax);
    SET_LO8(eax, 0); /* xor self */
    PUSH32(esp, 0); sub_001C74F0(); /* call 0x001C74F0 */

loc_002AB412: ;
    ebx = esp + 0x14;
    ecx = eax;
    PUSH32(esp, 0); sub_002AA540(); /* call 0x002AA540 */

loc_002AB41D: ;
    ebx = MEM32(esp + 0x10);
    (void)0; /* test ebx, ebx - flags set for next jcc */
    ebp = MEM32(esp + 0x18);
    if (TEST_Z(ebx, ebx)) goto loc_002AB4C8; /* je: equal / zero */

loc_002AB42D: ;
    eax = MEM32(0x84A19C);
    if (TEST_NZ(eax, eax)) goto loc_002AB43B; /* jne: not equal / not zero */

loc_002AB436: ;
    PUSH32(esp, 0); sub_002AED70(); /* call 0x002AED70 */

loc_002AB43B: ;
    edx = MEM32(0x7FA494);
    ecx = MEM32(0x7FA4B4);
    esi = MEM32(0x84A190);
    edx++;
    ecx++;
    (void)0; /* test esi, esi - flags set for next jcc */
    MEM32(0x7FA494) = edx;
    MEM32(0x7FA4B4) = ecx;
    edi = esi;
    if (TEST_Z(esi, esi)) goto loc_002AB483; /* je: equal / zero */

loc_002AB461: ;
    if (CMP_B(MEM32(esi + 0x80), 0x1C)) goto loc_002AB483; /* jb: below (unsigned <) */

loc_002AB46A: ;
    ecx = 4;
    PUSH32(esp, 0); sub_003E62A0(); /* call 0x003E62A0 */

loc_002AB474: ;
    PUSH32(esp, 0x1C);
    PUSH32(esp, edi);
    PUSH32(esp, 0); sub_003E6BD0(); /* call 0x003E6BD0 */

loc_002AB47C: ;
    esp = esp + 8;
    if (TEST_NZ(eax, eax)) goto loc_002AB4A4; /* jne: not equal / not zero */

loc_002AB483: ;
    esi = MEM32(0x84A184);
    ecx = 4;
    edi = esi;
    PUSH32(esp, 0); sub_003E62A0(); /* call 0x003E62A0 */

loc_002AB495: ;
    PUSH32(esp, 0x1C);
    PUSH32(esp, edi);
    PUSH32(esp, 0); sub_003E6BD0(); /* call 0x003E6BD0 */

loc_002AB49D: ;
    esp = esp + 8;
    if (TEST_Z(eax, eax)) goto loc_002AB4B2; /* je: equal / zero */

loc_002AB4A4: ;
    PUSH32(esp, ebx);
    ecx = eax;
    PUSH32(esp, 0); sub_00013C90(); /* call 0x00013C90 */

loc_002AB4AC: ;
    MEM32(esp + 0x18) = eax;
    goto loc_002AB4BA;

loc_002AB4B2: ;
    MEM32(esp + 0x18) = 0;

loc_002AB4BA: ;
    edi = esp + 0x18;
    eax = 0x86EFC8;
    PUSH32(esp, 0); sub_003500B0(); /* call 0x003500B0 */

loc_002AB4C8: ;
    ebx = 0; /* xor self */

loc_002AB4CA: ;
    PUSH32(esp, 0x10);
    PUSH32(esp, 0); sub_001F6EA0(); /* call 0x001F6EA0 */

loc_002AB4D1: ;
    esi = eax;
    esp = esp + 4;
    if (CMP_EQ(esi, ebx)) goto loc_002AB50F; /* je: equal / zero */

loc_002AB4DA: ;
    PUSH32(esp, 0x7F2);
    PUSH32(esp, 0x600444);
    edi = ebp;
    PUSH32(esp, 0); sub_002AF210(); /* call 0x002AF210 */

loc_002AB4EB: ;
    esp = esp + 8;
    PUSH32(esp, esi);
    MEM32(esi) = eax;
    MEM8(esi + 8) = LO8(ebx);
    MEM32(esi + 4) = ebx;
    MEM32(esi + 0xC) = 0x100000;
    MEM32(0x84A158) = esi;
    PUSH32(esp, 0); sub_00253A10(); /* call 0x00253A10 */

loc_002AB509: ;
    POP32(esp, edi);
    POP32(esp, esi);
    POP32(esp, ebp);
    POP32(esp, ebx);
    POP32(esp, ecx);
    esp += 4; return; /* ret */

loc_002AB50F: ;
    esi = 0; /* xor self */
    PUSH32(esp, esi);
    MEM32(0x84A158) = esi;
    PUSH32(esp, 0); sub_00253A10(); /* call 0x00253A10 */

loc_002AB51D: ;
    POP32(esp, edi);
    POP32(esp, esi);
    POP32(esp, ebp);
    POP32(esp, ebx);
    POP32(esp, ecx);
    esp += 4; return; /* ret */

}

/**
 * sub_002AB530
 * Original: 0x002AB530 - 0x002AB53F (15 bytes, 7 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_002AB530(void)
{
    int _flags = 0; /* fallback flag var */

loc_002AB530: ;
    PUSH32(esp, esi);
    esi = MEM32(0x84A158);
    if (TEST_NZ(esi, esi)) { sub_002AB53F(); return; } /* jne: not equal / not zero */

loc_002AB53B: ;
    SET_LO8(eax, 0); /* xor self */
    POP32(esp, esi);
    esp += 4; return; /* ret */

}

/**
 * sub_002AB590
 * Original: 0x002AB590 - 0x002AB673 (227 bytes, 75 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_002AB590(void)
{
    uint32_t ebp;
    int _flags = 0; /* fallback flag var */
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_002AB590: ;
    ecx = MEM32(0x86EFCC);
    if (TEST_Z(ecx, ecx)) { sub_002AB673(); return; } /* je: equal / zero */

loc_002AB59E: ;
    eax = MEM32(0x86EFD0);
    edx = eax;
    edx = edx - ecx;
    edx = (uint32_t)((int32_t)edx >> 2);
    if (TEST_Z(edx, edx)) { sub_002AB673(); return; } /* je: equal / zero */

loc_002AB5B2: ;
    PUSH32(esp, ebp);
    edx = ecx + 4;
    eax = eax - edx;
    PUSH32(esp, esi);
    PUSH32(esp, edi);
    edi = MEM32(ecx);
    eax = (uint32_t)((int32_t)eax >> 2);
    eax = eax << 2;
    PUSH32(esp, eax);
    PUSH32(esp, edx);
    PUSH32(esp, ecx);
    PUSH32(esp, 0); sub_0046E670(); /* call 0x0046E670 */

loc_002AB5CA: ;
    esi = MEM32(0x86EFD0);
    esi = esi - 4;
    PUSH32(esp, 0x10);
    MEM32(0x86EFD0) = esi;
    PUSH32(esp, 0); sub_001F6EA0(); /* call 0x001F6EA0 */

loc_002AB5E0: ;
    esi = eax;
    esp = esp + 0x10;
    if (TEST_Z(esi, esi)) goto loc_002AB61F; /* je: equal / zero */

loc_002AB5E9: ;
    if (CMP_B(MEM32(edi + 0x18), 0x10)) goto loc_002AB5F4; /* jb: below (unsigned <) */

loc_002AB5EF: ;
    edi = MEM32(edi + 4);
    goto loc_002AB5F7;

loc_002AB5F4: ;
    edi = edi + 4;

loc_002AB5F7: ;
    PUSH32(esp, 0x7F2);
    PUSH32(esp, 0x600444);
    PUSH32(esp, 0); sub_002AF210(); /* call 0x002AF210 */

loc_002AB606: ;
    esp = esp + 8;
    MEM32(esi) = eax;
    MEM8(esi + 8) = 0;
    MEM32(esi + 4) = 0;
    MEM32(esi + 0xC) = 0x100000;
    goto loc_002AB621;

loc_002AB61F: ;
    esi = 0; /* xor self */

loc_002AB621: ;
    eax = MEM32(esi + 4);
    edi = esi + 4;
    ebp = 0; /* xor self */
    (void)0; /* test eax, eax - flags set for next jcc */
    MEM32(0x84A158) = esi;
    if (TEST_NZ(eax, eax)) goto loc_002AB63F; /* jne: not equal / not zero */

loc_002AB633: ;
    PUSH32(esp, esi);
    PUSH32(esp, 0); sub_00253A10(); /* call 0x00253A10 */

loc_002AB639: ;
    ebp = eax;
    if (TEST_NZ(ebp, ebp)) goto loc_002AB66D; /* jne: not equal / not zero */

loc_002AB63F: ;
    eax = MEM32(edi);
    MEM8(esi + 8) = 1;
    MEM32(eax + 0x2C) = 0;
    PUSH32(esp, 0); sub_00252A80(); /* call 0x00252A80 */

loc_002AB651: ;
    ecx = MEM32(esi);
    PUSH32(esp, ecx);
    PUSH32(esp, esi);
    PUSH32(esp, 0x253BC0);
    PUSH32(esp, 0);
    PUSH32(esp, 1);
    PUSH32(esp, 0);
    ecx = 0x253C10;
    PUSH32(esp, 0); sub_002520D0(); /* call 0x002520D0 */

loc_002AB66A: ;
    esp = esp + 0x18;

loc_002AB66D: ;
    POP32(esp, edi);
    POP32(esp, esi);
    eax = ebp;
    POP32(esp, ebp);
    esp += 4; return; /* ret */

}

/**
 * sub_002AB680
 * Original: 0x002AB680 - 0x002AB6B0 (48 bytes, 16 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_002AB680(void)
{
    int _flags = 0; /* fallback flag var */

loc_002AB680: ;
    PUSH32(esp, ecx);
    eax = MEM32(0x84A158);
    if (TEST_Z(eax, eax)) goto loc_002AB6AE; /* je: equal / zero */

loc_002AB68A: ;
    PUSH32(esp, esi);
    esi = eax;
    PUSH32(esp, 0); sub_002539C0(); /* call 0x002539C0 */

loc_002AB692: ;
    eax = esp + 4;
    PUSH32(esp, eax);
    MEM32(esp + 8) = esi;
    PUSH32(esp, 0); sub_002AF1C0(); /* call 0x002AF1C0 */

loc_002AB6A0: ;
    esp = esp + 4;
    MEM32(0x84A158) = 0;
    POP32(esp, esi);

loc_002AB6AE: ;
    POP32(esp, ecx);
    esp += 4; return; /* ret */

}

/**
 * sub_002AB6B0
 * Original: 0x002AB6B0 - 0x002AB73A (138 bytes, 42 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_002AB6B0(void)
{
    int _flags = 0; /* fallback flag var */

loc_002AB6B0: ;
    PUSH32(esp, ecx);
    PUSH32(esp, esi);
    PUSH32(esp, edi);
    edi = eax;
    eax = MEM32(0x8470FC);
    esi = MEM32(eax + 8);
    PUSH32(esp, 0); sub_002527F0(); /* call 0x002527F0 */

loc_002AB6C2: ;
    eax = MEM32(0x849C60);
    eax = eax - 3;
    if ((eax == 0)) goto loc_002AB6E5; /* je: equal / zero */

loc_002AB6CC: ;
    eax = eax - 2;
    if ((eax == 0)) goto loc_002AB6E5; /* je: equal / zero */

loc_002AB6D1: ;
    PUSH32(esp, 0); sub_002AC490(); /* call 0x002AC490 */

loc_002AB6D6: ;
    eax = MEM32(esi + 8);
    if (TEST_Z(HI8(eax), 0x41)) goto loc_002AB736; /* je: equal / zero */

loc_002AB6DE: ;
    PUSH32(esp, 0); sub_002AB680(); /* call 0x002AB680 */

loc_002AB6E3: ;
    goto loc_002AB719;

loc_002AB6E5: ;
    eax = MEM32(0x84A158);
    if (TEST_Z(eax, eax)) goto loc_002AB710; /* je: equal / zero */

loc_002AB6EE: ;
    esi = eax;
    PUSH32(esp, 0); sub_002539C0(); /* call 0x002539C0 */

loc_002AB6F5: ;
    ecx = esp + 8;
    PUSH32(esp, ecx);
    MEM32(esp + 0xC) = esi;
    PUSH32(esp, 0); sub_002AF1C0(); /* call 0x002AF1C0 */

loc_002AB703: ;
    esp = esp + 4;
    MEM32(0x84A158) = 0;

loc_002AB710: ;
    PUSH32(esp, 0); sub_002AB590(); /* call 0x002AB590 */

loc_002AB715: ;
    if (TEST_Z(eax, eax)) goto loc_002AB736; /* je: equal / zero */

loc_002AB719: ;
    PUSH32(esp, 0);
    PUSH32(esp, 0); sub_002AB2F0(); /* call 0x002AB2F0 */

loc_002AB720: ;
    esp = esp + 4;
    PUSH32(esp, 0); sub_002AB740(); /* call 0x002AB740 */

loc_002AB728: ;
    MEM32(edi + 0x20) = 2;
    MEM8(0x84A16C) = 1;

loc_002AB736: ;
    POP32(esp, edi);
    POP32(esp, esi);
    POP32(esp, ecx);
    esp += 4; return; /* ret */

}

/**
 * sub_002AB740
 * Original: 0x002AB740 - 0x002AB804 (196 bytes, 57 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_002AB740(void)
{
    int _flags = 0; /* fallback flag var */
    float xmm0;

loc_002AB740: ;
    PUSH32(esp, ecx);
    PUSH32(esp, ebx);
    PUSH32(esp, esi);
    PUSH32(esp, 0); sub_00062180(); /* call 0x00062180 */

loc_002AB748: ;
    ebx = eax;
    PUSH32(esp, ebx);
    PUSH32(esp, 0); sub_000627E0(); /* call 0x000627E0 */

loc_002AB750: ;
    PUSH32(esp, 3);
    MEM32(edi + 0x24) = eax;
    PUSH32(esp, 0); sub_0005F5F0(); /* call 0x0005F5F0 */

loc_002AB75A: ;
    PUSH32(esp, eax);
    PUSH32(esp, 0); sub_0005FD30(); /* call 0x0005FD30 */

loc_002AB760: ;
    MEM32(edi + 0x28) = eax;
    PUSH32(esp, 0); sub_000615D0(); /* call 0x000615D0 */

loc_002AB768: ;
    ecx = eax;
    PUSH32(esp, 0); sub_000619C0(); /* call 0x000619C0 */

loc_002AB76F: ;
    MEM32(edi + 0x2C) = eax;
    PUSH32(esp, 0); sub_000628C0(); /* call 0x000628C0 */

loc_002AB777: ;
    eax = MEM32(0x847024);
    (void)0; /* test eax, eax - flags set for next jcc */
    MEMF(edi + 0x44) = xmm0; /* movss */
    if (TEST_Z(eax, eax)) goto loc_002AB796; /* je: equal / zero */

loc_002AB785: ;
    SET_LO8(ecx, MEM8(eax + 0x61));
    if (TEST_Z(LO8(ecx), LO8(ecx))) goto loc_002AB7A3; /* je: equal / zero */

loc_002AB78C: ;
    xmm0 = xmm0 + MEMF(0x648D14); /* addss */
    goto loc_002AB79E;

loc_002AB796: ;
    xmm0 = xmm0 + MEMF(0x648CF4); /* addss */

loc_002AB79E: ;
    MEMF(edi + 0x44) = xmm0; /* movss */

loc_002AB7A3: ;
    ebx = MEM32(0x84A170);
    eax = MEM32(edi + 0x44);
    xmm0 = 0.0f; /* xorps self = zero */
    (void)0; /* cmp ebx, 7 - flags set for next jcc */
    SET_LO8(ecx, (CMP_NE(ebx, 7)) ? 1 : 0); /* setne */
    MEM8(esp + 8) = LO8(ecx);
    edx = MEM32(esp + 8);
    PUSH32(esp, edx);
    PUSH32(esp, eax);
    MEMF(0x84A168) = xmm0; /* movss */
    MEMF(0x84A164) = xmm0; /* movss */
    MEM32(0x84A160) = eax;
    PUSH32(esp, 0); sub_002AC820(); /* call 0x002AC820 */

loc_002AB7D9: ;
    esi = eax;
    PUSH32(esp, 0); sub_002AD060(); /* call 0x002AD060 */

loc_002AB7E0: ;
    if (CMP_NE(MEM32(0x84A170), 8)) goto loc_002AB7FE; /* jne: not equal / not zero */

loc_002AB7E9: ;
    eax = edi;
    PUSH32(esp, 0); sub_002ABCD0(); /* call 0x002ABCD0 */

loc_002AB7F0: ;
    esi = edi;
    PUSH32(esp, 0); sub_002ABC60(); /* call 0x002ABC60 */

loc_002AB7F7: ;
    SET_LO8(ebx, 1);
    PUSH32(esp, 0); sub_002AD3B0(); /* call 0x002AD3B0 */

loc_002AB7FE: ;
    POP32(esp, esi);
    SET_LO8(eax, 1);
    POP32(esp, ebx);
    POP32(esp, ecx);
    esp += 4; return; /* ret */

}

/**
 * sub_002AB810
 * Original: 0x002AB810 - 0x002AB83D (45 bytes, 13 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_002AB810(void)
{
    int _flags = 0; /* fallback flag var */

loc_002AB810: ;
    PUSH32(esp, edi);
    edi = eax;
    PUSH32(esp, 0); sub_002AB900(); /* call 0x002AB900 */

loc_002AB818: ;
    eax = MEM32(0x847024);
    ecx = MEM32(eax + 8);
    if (TEST_NZ(ecx, ecx)) goto loc_002AB83B; /* jne: not equal / not zero */

loc_002AB824: ;
    MEM8(eax + 0x16) = 1;
    PUSH32(esp, 0); sub_002AB840(); /* call 0x002AB840 */

loc_002AB82D: ;
    MEM32(edi + 0x20) = 3;
    MEM8(0x84A16C) = 1;

loc_002AB83B: ;
    POP32(esp, edi);
    esp += 4; return; /* ret */

}

/**
 * sub_002AB840
 * Original: 0x002AB840 - 0x002AB869 (41 bytes, 15 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_002AB840(void)
{
    int _flags = 0; /* fallback flag var */

loc_002AB840: ;
    PUSH32(esp, edi);
    PUSH32(esp, 0); sub_00062180(); /* call 0x00062180 */

loc_002AB846: ;
    edi = eax;
    MEM32(edi + 0x1C) = 0;
    PUSH32(esp, 0); sub_00062620(); /* call 0x00062620 */

loc_002AB854: ;
    if (TEST_Z(eax, eax)) goto loc_002AB865; /* je: equal / zero */

loc_002AB858: ;
    PUSH32(esp, eax);
    eax = MEM32(edi + 0x20);
    PUSH32(esp, eax);
    PUSH32(esp, 0); sub_00062530(); /* call 0x00062530 */

loc_002AB862: ;
    esp = esp + 8;

loc_002AB865: ;
    SET_LO8(eax, 1);
    POP32(esp, edi);
    esp += 4; return; /* ret */

}

/**
 * sub_002AB870
 * Original: 0x002AB870 - 0x002AB8FC (140 bytes, 43 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_002AB870(void)
{
    int _flags = 0; /* fallback flag var */
    float xmm0;

loc_002AB870: ;
    PUSH32(esp, ecx);
    PUSH32(esp, esi);
    PUSH32(esp, edi);
    edi = eax;
    PUSH32(esp, 0); sub_002AB900(); /* call 0x002AB900 */

loc_002AB87A: ;
    PUSH32(esp, 0); sub_002AA5B0(); /* call 0x002AA5B0 */

loc_002AB87F: ;
    PUSH32(esp, eax);
    PUSH32(esp, 0); sub_002AA990(); /* call 0x002AA990 */

loc_002AB885: ;
    if (TEST_NZ(LO8(eax), LO8(eax))) goto loc_002AB8F8; /* jne: not equal / not zero */

loc_002AB889: ;
    PUSH32(esp, 3);
    PUSH32(esp, 0); sub_0005F5F0(); /* call 0x0005F5F0 */

loc_002AB890: ;
    PUSH32(esp, eax);
    PUSH32(esp, 0); sub_0005FD30(); /* call 0x0005FD30 */

loc_002AB896: ;
    if (TEST_NZ(eax, eax)) goto loc_002AB8F8; /* jne: not equal / not zero */

loc_002AB89A: ;
    PUSH32(esp, 0); sub_000615D0(); /* call 0x000615D0 */

loc_002AB89F: ;
    ecx = eax;
    PUSH32(esp, 0); sub_000619C0(); /* call 0x000619C0 */

loc_002AB8A6: ;
    if (TEST_NZ(eax, eax)) goto loc_002AB8F8; /* jne: not equal / not zero */

loc_002AB8AA: ;
    esi = MEM32(0x847040);
    (void)0; /* cmp esi, 5 - flags set for next jcc */
    eax = MEM32(0x847024);
    if (CMP_NE(esi, 5)) goto loc_002AB8C4; /* jne: not equal / not zero */

loc_002AB8BA: ;
    ecx = MEM32(eax + 0xC);
    (void)0; /* test ecx, ecx - flags set for next jcc */
    SET_LO8(eax, (TEST_Z(ecx, ecx)) ? 1 : 0); /* sete */
    goto loc_002AB8C9;

loc_002AB8C4: ;
    PUSH32(esp, 0); sub_00018C00(); /* call 0x00018C00 */

loc_002AB8C9: ;
    if (TEST_Z(LO8(eax), LO8(eax))) goto loc_002AB8F8; /* je: equal / zero */

loc_002AB8CD: ;
    (void)0; /* cmp MEM32(0x84A170), 8 - flags set for next jcc */
    xmm0 = MEMF(0x648D14); /* movss */
    MEMF(0x84A168) = xmm0; /* movss */
    if (CMP_NE(MEM32(0x84A170), 8)) goto loc_002AB8EA; /* jne: not equal / not zero */

loc_002AB8E6: ;
    MEM8(edi + 0x40) = 1;

loc_002AB8EA: ;
    MEM32(edi + 0x20) = 4;
    MEM8(0x84A16C) = 0;

loc_002AB8F8: ;
    POP32(esp, edi);
    POP32(esp, esi);
    POP32(esp, ecx);
    esp += 4; return; /* ret */

}

/**
 * sub_002AB900
 * Original: 0x002AB900 - 0x002AB99C (156 bytes, 52 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_002AB900(void)
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

loc_002AB900: ;
    PUSH32(esp, ecx);
    PUSH32(esp, ebx);
    PUSH32(esp, esi);
    PUSH32(esp, 0); sub_0005F5F0(); /* call 0x0005F5F0 */

loc_002AB908: ;
    esi = eax;
    PUSH32(esp, 0); sub_00062180(); /* call 0x00062180 */

loc_002AB90F: ;
    PUSH32(esp, 3);
    PUSH32(esp, esi);
    ebx = eax;
    PUSH32(esp, 0); sub_0005FD30(); /* call 0x0005FD30 */

loc_002AB919: ;
    xmm0 = MEMF(0x648D14); /* movss */
    esi = eax;
    (void)0; /* cmp esi, MEM32(edi + 0x28) - flags set for next jcc */
    MEMF(esp + 8) = xmm0; /* movss */
    if (CMP_BE(esi, MEM32(edi + 0x28))) goto loc_002AB931; /* jbe: below or equal (unsigned <=) */

loc_002AB92E: ;
    MEM32(edi + 0x28) = esi;

loc_002AB931: ;
    PUSH32(esp, 0); sub_000615D0(); /* call 0x000615D0 */

loc_002AB936: ;
    ecx = eax;
    PUSH32(esp, 0); sub_000619C0(); /* call 0x000619C0 */

loc_002AB93D: ;
    PUSH32(esp, ebx);
    esi = esi + eax;
    PUSH32(esp, 0); sub_000627E0(); /* call 0x000627E0 */

loc_002AB945: ;
    ebx = MEM32(edi + 0x24);
    edx = MEM32(edi + 0x28);
    esi = esi + eax;
    eax = MEM32(edi + 0x2C);
    eax = eax + ebx;
    eax = eax + edx;
    if (TEST_Z(esi, esi)) goto loc_002AB98A; /* je: equal / zero */

loc_002AB958: ;
    if (TEST_Z(eax, eax)) goto loc_002AB98A; /* je: equal / zero */

loc_002AB95C: ;
    ecx = eax;
    ecx = ecx - esi;
    (void)0; /* test ecx, ecx - flags set for next jcc */
    MEM32(esp + 8) = ecx;
    fp_push((double)SMEM32(esp + 8)); /* fild */
    if (CMP_GE(ecx & ecx, 0)) goto loc_002AB972; /* jge: greater or equal (signed >=) */

loc_002AB96C: ;
    fp_st1() += fp_top(); fp_pop(); /* fadd */

loc_002AB972: ;
    (void)0; /* test eax, eax - flags set for next jcc */
    MEM32(esp + 8) = eax;
    fp_push((double)SMEM32(esp + 8)); /* fild */
    if (CMP_GE(eax & eax, 0)) goto loc_002AB984; /* jge: greater or equal (signed >=) */

loc_002AB97E: ;
    fp_st1() += fp_top(); fp_pop(); /* fadd */

loc_002AB984: ;
    fp_st1() /= fp_top(); fp_pop(); /* fdivp */
    MEMF(esp + 8) = (float)fp_top(); fp_popp(); /* fstp */

loc_002AB98A: ;
    xmm0 = MEMF(esp + 8); /* movss */
    POP32(esp, esi);
    MEMF(0x84A168) = xmm0; /* movss */
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
 * sub_002AB9A0
 * Original: 0x002AB9A0 - 0x002ABC46 (678 bytes, 201 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_002AB9A0(void)
{
    uint32_t ebp;
    int _flags = 0; /* fallback flag var */
    int _cf = 0; /* carry flag */
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_002AB9A0: ;
    eax = MEM32(0x84A170);
    esp = esp - 0x18;
    (void)0; /* cmp eax, 8 - flags set for next jcc */
    PUSH32(esp, ebp);
    ebp = MEM32(esp + 0x20);
    if (CMP_NE(eax, 8)) goto loc_002ABC3F; /* jne: not equal / not zero */

loc_002AB9B6: ;
    SET_LO8(ecx, MEM8(0x876758));
    PUSH32(esp, ebx);
    ebx = 0; /* xor self */
    eax = 1;
    (void)0; /* test LO8(eax), LO8(ecx) - flags set for next jcc */
    PUSH32(esp, esi);
    PUSH32(esp, edi);
    MEM32(esp + 0x2C) = ebx;
    if (TEST_NZ(LO8(eax), LO8(ecx))) goto loc_002AB9E6; /* jne: not equal / not zero */

loc_002AB9CE: ;
    ecx = MEM32(0x876758);
    ecx = ecx | eax;
    eax = 0x8761E8;
    MEM32(0x876758) = ecx;
    PUSH32(esp, 0); sub_00265DE0(); /* call 0x00265DE0 */

loc_002AB9E6: ;
    if (CMP_NE(MEM8(0x7819D5), LO8(ebx))) goto loc_002ABA04; /* jne: not equal / not zero */

loc_002AB9EE: ;
    ecx = MEM32(0x7FA1F4);
    eax = 0; /* xor self */
    (void)0; /* cmp ecx, 0x46 - flags set for next jcc */
    SET_LO8(eax, (CMP_EQ(ecx, 0x46)) ? 1 : 0); /* sete */
    MEM32(esp + 0x2C) = ebx;
    esi = eax;
    goto loc_002ABA73;

loc_002ABA04: ;
    eax = MEM32(0x8761E8);
    if (CMP_NE(LO8(eax), LO8(ebx))) goto loc_002ABA16; /* jne: not equal / not zero */

loc_002ABA0D: ;
    if (CMP_EQ(MEM32(0x876748), 0xFFFFFFFFu)) goto loc_002ABA4A; /* je: equal / zero */

loc_002ABA16: ;
    if (CMP_EQ(HI8(eax), LO8(ebx))) goto loc_002ABA4A; /* je: equal / zero */

loc_002ABA1A: ;
    if (CMP_NE(MEM32(0x876738), ebx)) goto loc_002ABA36; /* jne: not equal / not zero */

loc_002ABA22: ;
    SET_LO8(ecx, MEM8(0x87673C));
    SET_LO8(ecx, (uint32_t)(-(int32_t)LO8(ecx)));
    ecx = _cf ? 0xFFFFFFFF : 0; /* sbb self (CF extend) */
    ecx = ecx & 0xFFFFFFFDu;
    ecx = ecx + 5;
    esi = ecx;
    goto loc_002ABA73;

loc_002ABA36: ;
    SET_LO8(ecx, MEM8(0x87673C));
    edx = 0; /* xor self */
    (void)0; /* cmp LO8(ecx), LO8(ebx) - flags set for next jcc */
    SET_LO8(edx, (CMP_NE(LO8(ecx), LO8(ebx))) ? 1 : 0); /* setne */
    edx = edx + 3;
    esi = edx;
    goto loc_002ABA73;

loc_002ABA4A: ;
    eax = (uint32_t)(int32_t)SMEM8(0x77627C);
    eax = eax + eax * 4;
    ecx = MEM32(eax * 8 + 0x776F28);
    esi = MEM32(ecx + 4);
    edx = 0; /* xor self */
    (void)0; /* cmp esi, ebx - flags set for next jcc */
    SET_LO8(edx, (CMP_NE(esi, ebx)) ? 1 : 0); /* setne */
    edx = edx + 6;
    esi = edx;
    PUSH32(esp, 0); sub_003E2480(); /* call 0x003E2480 */

loc_002ABA6F: ;
    MEM32(esp + 0x2C) = eax;

loc_002ABA73: ;
    edi = esi + esi * 4;
    PUSH32(esp, 0x114);
    edi = edi * 4 + 0x59B800;
    PUSH32(esp, 0); sub_0005EDB0(); /* call 0x0005EDB0 */

loc_002ABA87: ;
    esi = eax;
    esp = esp + 4;
    if (CMP_EQ(esi, ebx)) goto loc_002ABAC1; /* je: equal / zero */

loc_002ABA90: ;
    ecx = MEM32(edi + 4);
    PUSH32(esp, ecx);
    PUSH32(esp, 0x5F71A0);
    eax = esi + 0xC;
    PUSH32(esp, 0x14);
    PUSH32(esp, 0); sub_0005E4E0(); /* call 0x0005E4E0 */

loc_002ABAA3: ;
    esp = esp + 0xC;
    eax = esi;
    MEM32(esi + 0x110) = 0x14;
    MEM32(esi) = ebx;
    MEM32(esi + 8) = ebx;
    MEM32(esi + 4) = ebx;
    PUSH32(esp, 0); sub_00063680(); /* call 0x00063680 */

loc_002ABABF: ;
    goto loc_002ABAC3;

loc_002ABAC1: ;
    esi = 0; /* xor self */

loc_002ABAC3: ;
    MEM32(ebp + 0x50) = esi;
    SET_LO16(edx, MEM16(edi + 0xE));
    MEM16(ebp + 0x5E) = LO16(edx);
    SET_LO16(eax, MEM16(edi + 0x10));
    MEM16(ebp + 0x60) = LO16(eax);
    SET_LO16(ecx, MEM16(edi + 0x12));
    MEM16(ebp + 0x62) = LO16(ecx);
    SET_LO8(edx, MEM8(edi + 0xC));
    MEM8(ebp + 0x5C) = LO8(edx);
    eax = MEM32(edi);
    if (CMP_A(eax, 3)) goto loc_002ABC2B; /* ja: above (unsigned >) */

loc_002ABAEF: ;
    { uint32_t _jt = MEM32(eax * 4 + 0x2ABC48); /* switch: 4 entries, 3 targets */
    if (_jt == 0x002ABAF6u) goto loc_002ABAF6;
    if (_jt == 0x002ABB1Eu) goto loc_002ABB1E;
    if (_jt == 0x002ABB53u) goto loc_002ABB53;
    g_seh_ebp = ebp; RECOMP_ITAIL(_jt); return; }

loc_002ABAF6: ;
    PUSH32(esp, 0x50);
    MEM32(ebp + 0x54) = ebx;
    PUSH32(esp, 0); sub_0046DAB2(); /* call 0x0046DAB2 */

loc_002ABB00: ;
    ecx = MEM32(0x849800);
    MEM32(ebp + 0x58) = eax;
    edx = MEM32(ecx + 0xD3C);
    PUSH32(esp, edx);
    PUSH32(esp, eax);
    PUSH32(esp, 0); sub_0046E49A(); /* call 0x0046E49A */

loc_002ABB16: ;
    esp = esp + 0xC;
    goto loc_002ABC2B;

loc_002ABB1E: ;
    eax = MEM32(edi + 8);
    ecx = MEM32(0x849804);
    PUSH32(esp, 0); sub_001F4F40(); /* call 0x001F4F40 */

loc_002ABB2C: ;
    esi = eax;
    PUSH32(esp, esi);
    MEM32(ebp + 0x54) = ebx;
    PUSH32(esp, 0); sub_0046E45A(); /* call 0x0046E45A */

loc_002ABB37: ;
    eax = eax + eax + 2;
    PUSH32(esp, eax);
    PUSH32(esp, 0); sub_0046DAB2(); /* call 0x0046DAB2 */

loc_002ABB41: ;
    PUSH32(esp, esi);
    PUSH32(esp, eax);
    MEM32(ebp + 0x58) = eax;
    PUSH32(esp, 0); sub_0046E49A(); /* call 0x0046E49A */

loc_002ABB4B: ;
    esp = esp + 0x10;
    goto loc_002ABC2B;

loc_002ABB53: ;
    ecx = MEM32(0x849804);
    eax = 0x606894;
    PUSH32(esp, 0); sub_001F4F40(); /* call 0x001F4F40 */

loc_002ABB63: ;
    PUSH32(esp, eax);
    PUSH32(esp, 0); sub_0047054A(); /* call 0x0047054A */

loc_002ABB69: ;
    ecx = eax;
    eax = MEM32(esp + 0x30);
    edx = ((int32_t)eax < 0) ? 0xFFFFFFFF : 0; /* cdq */
    { int64_t _dividend = ((int64_t)(int32_t)edx << 32) | eax;
      eax = (uint32_t)((int32_t)(_dividend / (int32_t)ecx));
      edx = (uint32_t)((int32_t)(_dividend % (int32_t)ecx)); }
    ecx = esp + 0x14;
    edx++;
    PUSH32(esp, edx);
    PUSH32(esp, 0x60688C);
    PUSH32(esp, 7);
    PUSH32(esp, ecx);
    PUSH32(esp, 0); sub_0046E9AD(); /* call 0x0046E9AD */

loc_002ABB85: ;
    PUSH32(esp, 0x114);
    MEM8(esp + 0x2F) = LO8(ebx);
    PUSH32(esp, 0); sub_0005EDB0(); /* call 0x0005EDB0 */

loc_002ABB93: ;
    esi = eax;
    esp = esp + 0x18;
    if (CMP_EQ(esi, ebx)) goto loc_002ABBCE; /* je: equal / zero */

loc_002ABB9C: ;
    edx = esp + 0x10;
    PUSH32(esp, edx);
    PUSH32(esp, 0x5F71A0);
    eax = esi + 0xC;
    PUSH32(esp, 0x14);
    PUSH32(esp, 0); sub_0005E4E0(); /* call 0x0005E4E0 */

loc_002ABBB0: ;
    esp = esp + 0xC;
    eax = esi;
    MEM32(esi + 0x110) = 0x14;
    MEM32(esi) = ebx;
    MEM32(esi + 8) = ebx;
    MEM32(esi + 4) = ebx;
    PUSH32(esp, 0); sub_00063680(); /* call 0x00063680 */

loc_002ABBCC: ;
    goto loc_002ABBD0;

loc_002ABBCE: ;
    esi = 0; /* xor self */

loc_002ABBD0: ;
    eax = esp + 0x10;
    PUSH32(esp, eax);
    ecx = esp + 0x1C;
    PUSH32(esp, 0x5F9B74);
    PUSH32(esp, ecx);
    MEM32(ebp + 0x54) = esi;
    PUSH32(esp, 0); sub_0046F583(); /* call 0x0046F583 */

loc_002ABBE7: ;
    ecx = MEM32(0x849804);
    esp = esp + 0xC;
    eax = esp + 0x18;
    PUSH32(esp, 0); sub_001F4F40(); /* call 0x001F4F40 */

loc_002ABBF9: ;
    PUSH32(esp, eax);
    PUSH32(esp, 0); sub_0046E45A(); /* call 0x0046E45A */

loc_002ABBFF: ;
    edx = eax + eax + 2;
    PUSH32(esp, edx);
    PUSH32(esp, 0); sub_0046DAB2(); /* call 0x0046DAB2 */

loc_002ABC09: ;
    ecx = MEM32(0x849804);
    MEM32(ebp + 0x58) = eax;
    esp = esp + 8;
    eax = esp + 0x18;
    PUSH32(esp, 0); sub_001F4F40(); /* call 0x001F4F40 */

loc_002ABC1E: ;
    PUSH32(esp, eax);
    eax = MEM32(ebp + 0x58);
    PUSH32(esp, eax);
    PUSH32(esp, 0); sub_0046E49A(); /* call 0x0046E49A */

loc_002ABC28: ;
    esp = esp + 8;

loc_002ABC2B: ;
    ecx = MEM32(ebp + 0x58);
    PUSH32(esp, ecx);
    PUSH32(esp, 0); sub_001F3110(); /* call 0x001F3110 */

loc_002ABC34: ;
    esp = esp + 4;
    PUSH32(esp, 0); sub_001F3600(); /* call 0x001F3600 */

loc_002ABC3C: ;
    POP32(esp, edi);
    POP32(esp, esi);
    POP32(esp, ebx);

loc_002ABC3F: ;
    POP32(esp, ebp);
    esp = esp + 0x18;
    esp += 8; return; /* ret 4 */

}

/**
 * sub_002ABC60
 * Original: 0x002ABC60 - 0x002ABCC8 (104 bytes, 34 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_002ABC60(void)
{
    int _flags = 0; /* fallback flag var */

loc_002ABC60: ;
    PUSH32(esp, ecx);
    PUSH32(esp, edi);
    edi = MEM32(esi + 0x50);
    if (TEST_Z(edi, edi)) goto loc_002ABC88; /* je: equal / zero */

loc_002ABC69: ;
    ecx = edi;
    PUSH32(esp, 0); sub_000636D0(); /* call 0x000636D0 */

loc_002ABC70: ;
    eax = esp + 4;
    PUSH32(esp, eax);
    MEM32(esp + 8) = edi;
    PUSH32(esp, 0); sub_002AF1C0(); /* call 0x002AF1C0 */

loc_002ABC7E: ;
    esp = esp + 4;
    MEM32(esi + 0x50) = 0;

loc_002ABC88: ;
    edi = MEM32(esi + 0x54);
    if (TEST_Z(edi, edi)) goto loc_002ABCAE; /* je: equal / zero */

loc_002ABC8F: ;
    ecx = edi;
    PUSH32(esp, 0); sub_000636D0(); /* call 0x000636D0 */

loc_002ABC96: ;
    ecx = esp + 4;
    PUSH32(esp, ecx);
    MEM32(esp + 8) = edi;
    PUSH32(esp, 0); sub_002AF1C0(); /* call 0x002AF1C0 */

loc_002ABCA4: ;
    esp = esp + 4;
    MEM32(esi + 0x54) = 0;

loc_002ABCAE: ;
    eax = MEM32(esi + 0x58);
    (void)0; /* test eax, eax - flags set for next jcc */
    POP32(esp, edi);
    if (TEST_Z(eax, eax)) goto loc_002ABCC6; /* je: equal / zero */

loc_002ABCB6: ;
    PUSH32(esp, eax);
    PUSH32(esp, 0); sub_0046E4B6(); /* call 0x0046E4B6 */

loc_002ABCBC: ;
    esp = esp + 4;
    MEM32(esi + 0x58) = 0;

loc_002ABCC6: ;
    POP32(esp, ecx);
    esp += 4; return; /* ret */

}

/**
 * sub_002ABCD0
 * Original: 0x002ABCD0 - 0x002ABF46 (630 bytes, 181 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_002ABCD0(void)
{
    uint32_t ebp;
    int _flags = 0; /* fallback flag var */
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_002ABCD0: ;
    esp = esp - 0xC;
    ecx = MEM32(0x5499F0);
    PUSH32(esp, ebx);
    ebx = 0; /* xor self */
    PUSH32(esp, ebp);
    PUSH32(esp, esi);
    PUSH32(esp, edi);
    edi = eax;
    MEM32(0x547378) = ebx;
    MEM32(0x54737C) = ebx;
    MEM32(0x54735C) = ebx;
    MEM32(0x547370) = 2;
    MEM32(0x547368) = ebx;
    MEM32(0x54736C) = ebx;
    MEM32(0x547360) = 4;
    MEM32(0x547344) = ebx;
    esi = MEM32(edi + 0x50);
    ecx = ecx | 0x801;
    (void)0; /* cmp esi, ebx - flags set for next jcc */
    MEM32(esp + 0x10) = ebx;
    MEM32(esp + 0x14) = ebx;
    MEM32(0x5499F0) = ecx;
    if (CMP_EQ(esi, ebx)) goto loc_002ABDB0; /* je: equal / zero */

loc_002ABD34: ;
    MEM32(esp + 0x18) = ebx;
    goto loc_002ABD40;

    /* nop */

loc_002ABD40: ;
    eax = MEM32(esi + 4);
    eax = MEM32(eax + 4);
    if (CMP_L(eax, 0x3E4)) goto loc_002ABD5B; /* jl: less (signed <) */

loc_002ABD4D: ;
    if (CMP_G(eax, 0x3E5)) goto loc_002ABD5B; /* jg: greater (signed >) */

loc_002ABD54: ;
    PUSH32(esp, 0); sub_002A37B0(); /* call 0x002A37B0 */

loc_002ABD59: ;
    goto loc_002ABD40;

loc_002ABD5B: ;
    eax = MEM32(edi + 0x50);
    eax = MEM32(eax + 4);
    if (CMP_EQ(MEM32(eax + 4), ebx)) goto loc_002ABD6F; /* je: equal / zero */

loc_002ABD66: ;
    MEM32(esp + 0x10) = ebx;
    goto loc_002ABE1B;

loc_002ABD6F: ;
    ecx = MEM32(eax + 0x18);
    if (CMP_EQ(ecx, ebx)) goto loc_002ABD7A; /* je: equal / zero */

loc_002ABD76: ;
    MEM16(eax + 0x2C) = MEM16(eax + 0x2C) + 1;

loc_002ABD7A: ;
    eax = ecx;
    ecx = esp + 0x18;
    MEM32(esp + 0x10) = eax;
    PUSH32(esp, 0); sub_003FA5C0(); /* call 0x003FA5C0 */

loc_002ABD89: ;
    ecx = MEM32(esp + 0x18);
    PUSH32(esp, ecx);
    PUSH32(esp, 0x3F700000);
    PUSH32(esp, 0x3F200000);
    PUSH32(esp, ebx);
    PUSH32(esp, ebx);
    PUSH32(esp, 0x43F00000);
    PUSH32(esp, 0x44200000);
    PUSH32(esp, ebx);
    PUSH32(esp, ebx);
    SET_LO8(eax, 0); /* xor self */
    PUSH32(esp, 0); sub_00356EB0(); /* call 0x00356EB0 */

loc_002ABDAD: ;
    esp = esp + 0x24;

loc_002ABDB0: ;
    PUSH32(esp, 0); sub_002ABF50(); /* call 0x002ABF50 */

loc_002ABDB5: ;
    esi = MEM32(edi + 0x54);
    if (CMP_EQ(esi, ebx)) goto loc_002ABE1B; /* je: equal / zero */

loc_002ABDBC: ;
    PUSH32(esp, 0); sub_00063730(); /* call 0x00063730 */

loc_002ABDC1: ;
    edi = MEM32(edi + 0x54);
    eax = MEM32(edi + 4);
    if (CMP_EQ(MEM32(eax + 4), ebx)) goto loc_002ABDD2; /* je: equal / zero */

loc_002ABDCC: ;
    MEM32(esp + 0x14) = ebx;
    goto loc_002ABE1B;

loc_002ABDD2: ;
    ecx = MEM32(eax + 0x18);
    if (CMP_EQ(ecx, ebx)) goto loc_002ABDDD; /* je: equal / zero */

loc_002ABDD9: ;
    MEM16(eax + 0x2C) = MEM16(eax + 0x2C) + 1;

loc_002ABDDD: ;
    eax = ecx;
    ecx = esp + 0x18;
    MEM32(esp + 0x14) = eax;
    PUSH32(esp, 0); sub_003FA5C0(); /* call 0x003FA5C0 */

loc_002ABDEC: ;
    edx = MEM32(esp + 0x18);
    PUSH32(esp, edx);
    PUSH32(esp, 0x3F280000);
    PUSH32(esp, 0x3F680000);
    PUSH32(esp, ebx);
    PUSH32(esp, ebx);
    PUSH32(esp, 0x43280000);
    PUSH32(esp, 0x43680000);
    PUSH32(esp, 0x42780000);
    PUSH32(esp, 0x434C0000);
    SET_LO8(eax, 0); /* xor self */
    PUSH32(esp, 0); sub_00356EB0(); /* call 0x00356EB0 */

loc_002ABE18: ;
    esp = esp + 0x24;

loc_002ABE1B: ;
    ebp = 0x41B0C;
    ebx = 0xF88;

loc_002ABE25: ;
    esi = MEM32(0x5499E8);
    edi = MEM32(ebx + esi);
    if (TEST_Z(edi, edi)) goto loc_002ABE50; /* je: equal / zero */

loc_002ABE32: ;
    eax = MEM32(esi + 0x2C);
    ecx = MEM32(edi);
    ecx = ecx + 0xFFF80000u;
    MEM32(edi + 8) = eax;
    eax = ecx;
    (void)0; /* test eax, 0x78FFFF - flags set for next jcc */
    MEM32(edi) = ecx;
    if (TEST_NZ(eax, 0x78FFFF)) goto loc_002ABE50; /* jne: not equal / not zero */

loc_002ABE4B: ;
    PUSH32(esp, 0); sub_0053B720(); /* call 0x0053B720 */

loc_002ABE50: ;
    MEM32(ebx + esi) = 0;
    eax = MEM32(esi);
    if (CMP_B(eax, MEM32(esi + 4))) goto loc_002ABE6D; /* jb: below (unsigned <) */

loc_002ABE5E: ;
    eax = MEM32(0x54A8B8);
    ecx = eax;
    ecx = ecx >> 1;
    PUSH32(esp, ecx);
    PUSH32(esp, 0); sub_0053C300(); /* call 0x0053C300 */

loc_002ABE6D: ;
    MEM32(eax) = ebp;
    MEM32(eax + 4) = 0;
    eax = eax + 8;
    MEM32(esi) = eax;
    MEM32(ebx + esi + -3964) = 0x80000000u;
    esi = MEM32(0x5499F0);
    esi = esi | 0x4800;
    ebx = ebx + 4;
    ebp = ebp + 0x40;
    (void)0; /* cmp ebx, 0xF98 - flags set for next jcc */
    MEM32(0x5499F0) = esi;
    if (CMP_L(ebx, 0xF98)) goto loc_002ABE25; /* jl: less (signed <) */

loc_002ABEAA: ;
    edx = MEM32(0x5499E8);
    PUSH32(esp, 0); sub_0053C450(); /* call 0x0053C450 */

loc_002ABEB5: ;
    edx = MEM32(edx + 0x2C);
    PUSH32(esp, 2);
    PUSH32(esp, edx);
    PUSH32(esp, 0); sub_0053C190(); /* call 0x0053C190 */

loc_002ABEC0: ;
    esi = MEM32(esp + 0x10);
    if (TEST_Z(esi, esi)) goto loc_002ABEFF; /* je: equal / zero */

loc_002ABEC8: ;
    ecx = esi;
    edi = 0x84D458;
    PUSH32(esp, 0); sub_00061F40(); /* call 0x00061F40 */

loc_002ABED4: ;
    edi = eax;
    if (TEST_Z(edi, edi)) goto loc_002ABEFF; /* je: equal / zero */

loc_002ABEDA: ;
    eax = MEM32(edi + 0x18);
    if (TEST_Z(eax, eax)) goto loc_002ABEE5; /* je: equal / zero */

loc_002ABEE1: ;
    MEM16(edi + 0x2C) = MEM16(edi + 0x2C) - 1;

loc_002ABEE5: ;
    if (CMP_NE(MEM16(edi + 0x2C), 0)) goto loc_002ABEFF; /* jne: not equal / not zero */

loc_002ABEEC: ;
    ecx = esi;
    eax = edi;
    PUSH32(esp, 0); sub_0005EA20(); /* call 0x0005EA20 */

loc_002ABEF5: ;
    eax = 0x84D458;
    PUSH32(esp, 0); sub_00061D60(); /* call 0x00061D60 */

loc_002ABEFF: ;
    esi = MEM32(esp + 0x14);
    if (TEST_Z(esi, esi)) goto loc_002ABF3E; /* je: equal / zero */

loc_002ABF07: ;
    ecx = esi;
    edi = 0x84D458;
    PUSH32(esp, 0); sub_00061F40(); /* call 0x00061F40 */

loc_002ABF13: ;
    edi = eax;
    if (TEST_Z(edi, edi)) goto loc_002ABF3E; /* je: equal / zero */

loc_002ABF19: ;
    eax = MEM32(edi + 0x18);
    if (TEST_Z(eax, eax)) goto loc_002ABF24; /* je: equal / zero */

loc_002ABF20: ;
    MEM16(edi + 0x2C) = MEM16(edi + 0x2C) - 1;

loc_002ABF24: ;
    if (CMP_NE(MEM16(edi + 0x2C), 0)) goto loc_002ABF3E; /* jne: not equal / not zero */

loc_002ABF2B: ;
    ecx = esi;
    eax = edi;
    PUSH32(esp, 0); sub_0005EA20(); /* call 0x0005EA20 */

loc_002ABF34: ;
    eax = 0x84D458;
    PUSH32(esp, 0); sub_00061D60(); /* call 0x00061D60 */

loc_002ABF3E: ;
    POP32(esp, edi);
    POP32(esp, esi);
    POP32(esp, ebp);
    POP32(esp, ebx);
    esp = esp + 0xC;
    esp += 4; return; /* ret */

}

/**
 * sub_002ABF50
 * Original: 0x002ABF50 - 0x002AC01B (203 bytes, 56 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_002ABF50(void)
{
    uint32_t ebp;
    int _flags = 0; /* fallback flag var */
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_002ABF50: ;
    esp = esp - 0xC;
    eax = MEM32(0x84A13C);
    PUSH32(esp, ebx);
    ebx = 0; /* xor self */
    (void)0; /* cmp eax, ebx - flags set for next jcc */
    MEM8(esp + 7) = LO8(ebx);
    if (CMP_NE(eax, ebx)) goto loc_002ABF75; /* jne: not equal / not zero */

loc_002ABF63: ;
    eax = 0; /* xor self */
    PUSH32(esp, 0); sub_002A8030(); /* call 0x002A8030 */

loc_002ABF6A: ;
    MEM32(0x84A148) = ebx;
    MEM8(esp + 7) = 1;

loc_002ABF75: ;
    PUSH32(esp, esi);
    esi = MEM32(0x5499E8);
    MEM8(0x807664) = 0x66;
    MEM8(0x807665) = 0xCC;
    MEM8(0x807666) = 0xFF;
    eax = MEM32(esi);
    if (CMP_B(eax, MEM32(esi + 4))) goto loc_002ABFA7; /* jb: below (unsigned <) */

loc_002ABF98: ;
    eax = MEM32(0x54A8B8);
    ecx = eax;
    ecx = ecx >> 1;
    PUSH32(esp, ecx);
    PUSH32(esp, 0); sub_0053C300(); /* call 0x0053C300 */

loc_002ABFA7: ;
    MEM32(eax) = 0x4030C;
    MEM32(eax + 4) = ebx;
    ecx = MEM32(0x549B40);
    MEM32(eax + 8) = 0x41D78;
    MEM32(eax + 0xC) = ecx;
    eax = eax + 0x10;
    MEM32(esi) = eax;
    eax = MEM32(0x549C34);
    (void)0; /* cmp eax, 2 - flags set for next jcc */
    MEM32(0x549C34) = ebx;
    if (CMP_NE(eax, 2)) goto loc_002AC004; /* jne: not equal / not zero */

loc_002ABFD5: ;
    PUSH32(esp, 0); sub_005384E0(); /* call 0x005384E0 */

loc_002ABFDA: ;
    PUSH32(esp, 0); sub_00536810(); /* call 0x00536810 */

loc_002ABFDF: ;
    eax = MEM32(esi);
    if (CMP_B(eax, MEM32(esi + 4))) goto loc_002ABFF5; /* jb: below (unsigned <) */

loc_002ABFE6: ;
    eax = MEM32(0x54A8B8);
    edx = eax;
    edx = edx >> 1;
    PUSH32(esp, edx);
    PUSH32(esp, 0); sub_0053C300(); /* call 0x0053C300 */

loc_002ABFF5: ;
    PUSH32(esp, esi);
    edx = eax;
    PUSH32(esp, 0); sub_00538030(); /* call 0x00538030 */

loc_002ABFFD: ;
    PUSH32(esp, 0); sub_00537E30(); /* call 0x00537E30 */

loc_002AC002: ;
    MEM32(esi) = eax;

loc_002AC004: ;
    (void)0; /* cmp MEM32(0x8086E8), ebx - flags set for next jcc */
    MEM8(0x8086C6) = 1;
    POP32(esp, esi);
    if (CMP_NE(MEM32(0x8086E8), ebx)) { sub_002AC01B(); return; } /* jne: not equal / not zero */

loc_002AC014: ;
    PUSH32(esp, 0); sub_003D2A40(); /* call 0x003D2A40 */

loc_002AC019: ;
    g_seh_ebp = ebp; sub_002AC020(); return; /* tail jmp 0x002AC020 */

}

/**
 * sub_002AC1F0
 * Original: 0x002AC1F0 - 0x002AC490 (672 bytes, 203 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_002AC1F0(void)
{
    uint32_t ebp;
    int _flags = 0; /* fallback flag var */
    float xmm0, xmm1;
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_002AC1F0: ;
    esp = esp - 0x1C;
    PUSH32(esp, ebx);
    PUSH32(esp, ebp);
    PUSH32(esp, esi);
    esi = MEM32(esp + 0x2C);
    eax = MEM32(esi + 0x58);
    PUSH32(esp, edi);
    PUSH32(esp, eax);
    edi = 1;
    PUSH32(esp, 0); sub_0046E45A(); /* call 0x0046E45A */

loc_002AC209: ;
    ecx = eax + eax + 2;
    PUSH32(esp, ecx);
    PUSH32(esp, 0); sub_0046DAB2(); /* call 0x0046DAB2 */

loc_002AC213: ;
    edx = MEM32(esi + 0x58);
    ebp = eax;
    PUSH32(esp, edx);
    PUSH32(esp, ebp);
    PUSH32(esp, 0); sub_0046E49A(); /* call 0x0046E49A */

loc_002AC21F: ;
    xmm0 = MEMF(0x648F58); /* movss */
    eax = esp + 0x28;
    PUSH32(esp, eax);
    ecx = esp + 0x24;
    PUSH32(esp, ecx);
    ebx = 0; /* xor self */
    eax = ebp;
    MEMF(esp + 0x34) = xmm0; /* movss */
    MEMF(0x80765C) = xmm0; /* movss */
    MEMF(0x807660) = xmm0; /* movss */
    PUSH32(esp, 0); sub_003D3EC0(); /* call 0x003D3EC0 */

loc_002AC250: ;
    edx = ZX16(MEM16(esi + 0x62));
    xmm1 = MEMF(esp + 0x28); /* movss */
    esp = esp + 0x18;
    xmm0 = (float)(int32_t)edx; /* cvtsi2ss */
    /* comiss xmm1, xmm0 - sets EFLAGS */
    if ((xmm1 <= xmm0)) goto loc_002AC473; /* jbe: below or equal (unsigned <=) */

loc_002AC26A: ;
    goto loc_002AC270;

loc_002AC26C: ;
    edi = MEM32(esp + 0x24);

loc_002AC270: ;
    eax = MEM32(esi + 0x58);
    PUSH32(esp, eax);
    PUSH32(esp, ebp);
    PUSH32(esp, 0); sub_0046E49A(); /* call 0x0046E49A */

loc_002AC27A: ;
    esp = esp + 8;
    edi++;
    (void)0; /* cmp edi, 2 - flags set for next jcc */
    MEM32(esp + 0x24) = edi;
    if (CMP_NE(edi, 2)) goto loc_002AC2D2; /* jne: not equal / not zero */

loc_002AC287: ;
    ecx = MEM32(esi + 0x58);
    PUSH32(esp, ecx);
    PUSH32(esp, 0); sub_0046E45A(); /* call 0x0046E45A */

loc_002AC290: ;
    edx = MEM32(esi + 0x58);
    edi = eax;
    PUSH32(esp, edx);
    edi = edi >> 1;
    PUSH32(esp, 0); sub_0046E45A(); /* call 0x0046E45A */

loc_002AC29D: ;
    esp = esp + 8;
    if (CMP_AE(edi, eax)) goto loc_002AC446; /* jae: above or equal (unsigned >=) */

loc_002AC2A8: ;
    if (CMP_EQ(MEM16(ebp + edi * 2), 0x20)) goto loc_002AC2C6; /* je: equal / zero */

loc_002AC2B0: ;
    eax = MEM32(esi + 0x58);
    PUSH32(esp, eax);
    edi++;
    PUSH32(esp, 0); sub_0046E45A(); /* call 0x0046E45A */

loc_002AC2BA: ;
    esp = esp + 4;
    if (CMP_B(edi, eax)) goto loc_002AC2A8; /* jb: below (unsigned <) */

loc_002AC2C1: ;
    goto loc_002AC446;

loc_002AC2C6: ;
    MEM16(ebp + edi * 2) = 0xA;
    goto loc_002AC446;

loc_002AC2D2: ;
    if (CMP_LE(edi, 3)) goto loc_002AC2FB; /* jle: less or equal (signed <=) */

loc_002AC2D7: ;
    xmm0 = MEMF(esp + 0x1C); /* movss */
    xmm0 = xmm0 - MEMF(0x64909C); /* subss */
    MEMF(esp + 0x1C) = xmm0; /* movss */
    MEMF(0x80765C) = xmm0; /* movss */
    MEMF(0x807660) = xmm0; /* movss */

loc_002AC2FB: ;
    ecx = MEM32(esi + 0x58);
    PUSH32(esp, ecx);
    PUSH32(esp, 0); sub_0046E45A(); /* call 0x0046E45A */

loc_002AC304: ;
    edi = eax;
    edi = edi >> 1;
    esp = esp + 4;
    if (CMP_BE(edi & edi, 0)) goto loc_002AC397; /* jbe: below or equal (unsigned <=) */

loc_002AC313: ;
    ebx = edi + edi + 2;
    MEM32(esp + 0x14) = ebx;
    goto loc_002AC320;

    /* nop */

loc_002AC320: ;
    (void)0; /* cmp MEM16(ebx + ebp + -2), 0x20 - flags set for next jcc */
    MEM32(esp + 0x20) = edi;
    if (CMP_NE(MEM16(ebx + ebp + -2), 0x20)) goto loc_002AC37C; /* jne: not equal / not zero */

loc_002AC32C: ;
    PUSH32(esp, ebx);
    PUSH32(esp, 0); sub_0046DAB2(); /* call 0x0046DAB2 */

loc_002AC332: ;
    PUSH32(esp, edi);
    esi = eax;
    PUSH32(esp, ebp);
    PUSH32(esp, esi);
    PUSH32(esp, 0); sub_0046FCD6(); /* call 0x0046FCD6 */

loc_002AC33C: ;
    edx = esp + 0x28;
    PUSH32(esp, edx);
    eax = esp + 0x24;
    MEM16(ebx + esi + -2) = 0;
    PUSH32(esp, eax);
    ebx = 0; /* xor self */
    eax = esi;
    PUSH32(esp, 0); sub_003D3EC0(); /* call 0x003D3EC0 */

loc_002AC356: ;
    PUSH32(esp, esi);
    PUSH32(esp, 0); sub_0046E4B6(); /* call 0x0046E4B6 */

loc_002AC35C: ;
    ecx = MEM32(esp + 0x4C);
    edx = ZX16(MEM16(ecx + 0x62));
    xmm0 = MEMF(esp + 0x2C); /* movss */
    esp = esp + 0x1C;
    xmm1 = (float)(int32_t)edx; /* cvtsi2ss */
    /* comiss xmm1, xmm0 - sets EFLAGS */
    esi = ecx;
    if ((xmm1 >= xmm0)) goto loc_002AC38A; /* jae: above or equal (unsigned >=) */

loc_002AC378: ;
    ebx = MEM32(esp + 0x14);

loc_002AC37C: ;
    edi--;
    ebx = ebx - 2;
    (void)0; /* test edi, edi - flags set for next jcc */
    MEM32(esp + 0x14) = ebx;
    if (CMP_A(edi & edi, 0)) goto loc_002AC320; /* ja: above (unsigned >) */

loc_002AC388: ;
    goto loc_002AC397;

loc_002AC38A: ;
    MEM16(ebp + edi * 2) = 0xA;
    MEMF(esp + 0x28) = xmm0; /* movss */

loc_002AC397: ;
    eax = MEM32(esi + 0x58);
    PUSH32(esp, eax);
    PUSH32(esp, 0); sub_0046E45A(); /* call 0x0046E45A */

loc_002AC3A0: ;
    ebx = eax;
    eax = MEM32(esp + 0x24);
    esp = esp + 4;
    (void)0; /* cmp ebx, eax - flags set for next jcc */
    MEM32(esp + 0x14) = ebx;
    if (CMP_BE(ebx, eax)) goto loc_002AC446; /* jbe: below or equal (unsigned <=) */

loc_002AC3B5: ;
    edi = ebx + ebx + 2;
    /* nop */

loc_002AC3C0: ;
    if (CMP_NE(MEM16(edi + ebp + -2), 0x20)) goto loc_002AC425; /* jne: not equal / not zero */

loc_002AC3C8: ;
    PUSH32(esp, edi);
    PUSH32(esp, 0); sub_0046DAB2(); /* call 0x0046DAB2 */

loc_002AC3CE: ;
    PUSH32(esp, ebx);
    esi = eax;
    PUSH32(esp, ebp);
    PUSH32(esp, esi);
    PUSH32(esp, 0); sub_0046FCD6(); /* call 0x0046FCD6 */

loc_002AC3D8: ;
    ecx = esp + 0x28;
    PUSH32(esp, ecx);
    edx = esp + 0x24;
    PUSH32(esp, edx);
    ebx = 0; /* xor self */
    eax = esi;
    MEM16(edi + esi + -2) = 0;
    PUSH32(esp, 0); sub_003D3EC0(); /* call 0x003D3EC0 */

loc_002AC3F2: ;
    PUSH32(esp, esi);
    PUSH32(esp, 0); sub_0046E4B6(); /* call 0x0046E4B6 */

loc_002AC3F8: ;
    eax = MEM32(esp + 0x4C);
    ecx = ZX16(MEM16(eax + 0x62));
    xmm0 = MEMF(esp + 0x2C); /* movss */
    esp = esp + 0x1C;
    xmm1 = (float)(int32_t)ecx; /* cvtsi2ss */
    /* comiss xmm1, xmm0 - sets EFLAGS */
    if ((xmm1 < xmm0)) goto loc_002AC41D; /* jb: below (unsigned <) */

loc_002AC412: ;
    xmm1 = MEMF(esp + 0x28); /* movss */
    /* comiss xmm1, xmm0 - sets EFLAGS */
    if ((xmm1 >= xmm0)) goto loc_002AC437; /* jae: above or equal (unsigned >=) */

loc_002AC41D: ;
    esi = MEM32(esp + 0x30);
    ebx = MEM32(esp + 0x14);

loc_002AC425: ;
    eax = MEM32(esp + 0x20);
    ebx--;
    edi = edi - 2;
    (void)0; /* cmp ebx, eax - flags set for next jcc */
    MEM32(esp + 0x14) = ebx;
    if (CMP_A(ebx, eax)) goto loc_002AC3C0; /* ja: above (unsigned >) */

loc_002AC435: ;
    goto loc_002AC446;

loc_002AC437: ;
    edx = MEM32(esp + 0x14);
    esi = MEM32(esp + 0x30);
    MEM16(ebp + edx * 2) = 0xA;

loc_002AC446: ;
    eax = esp + 0x18;
    PUSH32(esp, eax);
    ecx = esp + 0x14;
    PUSH32(esp, ecx);
    ebx = 0; /* xor self */
    eax = ebp;
    PUSH32(esp, 0); sub_003D3EC0(); /* call 0x003D3EC0 */

loc_002AC459: ;
    edx = ZX16(MEM16(esi + 0x62));
    xmm1 = MEMF(esp + 0x18); /* movss */
    esp = esp + 8;
    xmm0 = (float)(int32_t)edx; /* cvtsi2ss */
    /* comiss xmm1, xmm0 - sets EFLAGS */
    if ((xmm1 > xmm0)) goto loc_002AC26C; /* ja: above (unsigned >) */

loc_002AC473: ;
    eax = MEM32(esi + 0x58);
    PUSH32(esp, ebp);
    PUSH32(esp, eax);
    PUSH32(esp, 0); sub_0046E49A(); /* call 0x0046E49A */

loc_002AC47D: ;
    PUSH32(esp, ebp);
    PUSH32(esp, 0); sub_0046E4B6(); /* call 0x0046E4B6 */

loc_002AC483: ;
    esp = esp + 0xC;
    POP32(esp, edi);
    POP32(esp, esi);
    POP32(esp, ebp);
    POP32(esp, ebx);
    esp = esp + 0x1C;
    esp += 8; return; /* ret 4 */

}

/**
 * sub_002AC490
 * Original: 0x002AC490 - 0x002AC645 (437 bytes, 112 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_002AC490(void)
{
    int _flags = 0; /* fallback flag var */

loc_002AC490: ;
    PUSH32(esp, ebx);
    PUSH32(esp, esi);
    PUSH32(esp, edi);
    PUSH32(esp, 0); sub_003FB4C0(); /* call 0x003FB4C0 */

loc_002AC498: ;
    eax = MEM32(0x6B850C);
    PUSH32(esp, eax);
    PUSH32(esp, 0); sub_00536930(); /* call 0x00536930 */

loc_002AC4A3: ;
    eax = 0; /* xor self */
    PUSH32(esp, 0); sub_00538690(); /* call 0x00538690 */

loc_002AC4AA: ;
    PUSH32(esp, 0x1B02);
    PUSH32(esp, 0); sub_00537840(); /* call 0x00537840 */

loc_002AC4B4: ;
    edi = 0; /* xor self */
    PUSH32(esp, edi);
    PUSH32(esp, 0); sub_00537070(); /* call 0x00537070 */

loc_002AC4BC: ;
    ebx = 1;
    edx = ebx;
    ecx = 0x40304;
    PUSH32(esp, 0); sub_00537990(); /* call 0x00537990 */

loc_002AC4CD: ;
    edx = 0; /* xor self */
    ecx = 0x40300;
    MEM32(0x549AE4) = ebx;
    PUSH32(esp, 0); sub_00537990(); /* call 0x00537990 */

loc_002AC4DF: ;
    esi = MEM32(0x5499E8);
    MEM32(0x549AE8) = edi;
    eax = MEM32(esi);
    if (CMP_B(eax, MEM32(esi + 4))) goto loc_002AC501; /* jb: below (unsigned <) */

loc_002AC4F2: ;
    eax = MEM32(0x54A8B8);
    ecx = eax;
    ecx = ecx >> 1;
    PUSH32(esp, ecx);
    PUSH32(esp, 0); sub_0053C300(); /* call 0x0053C300 */

loc_002AC501: ;
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
    if (CMP_NE(eax, 2)) goto loc_002AC55E; /* jne: not equal / not zero */

loc_002AC52F: ;
    PUSH32(esp, 0); sub_005384E0(); /* call 0x005384E0 */

loc_002AC534: ;
    PUSH32(esp, 0); sub_00536810(); /* call 0x00536810 */

loc_002AC539: ;
    eax = MEM32(esi);
    if (CMP_B(eax, MEM32(esi + 4))) goto loc_002AC54F; /* jb: below (unsigned <) */

loc_002AC540: ;
    eax = MEM32(0x54A8B8);
    edx = eax;
    edx = edx >> 1;
    PUSH32(esp, edx);
    PUSH32(esp, 0); sub_0053C300(); /* call 0x0053C300 */

loc_002AC54F: ;
    PUSH32(esp, esi);
    edx = eax;
    PUSH32(esp, 0); sub_00538030(); /* call 0x00538030 */

loc_002AC557: ;
    PUSH32(esp, 0); sub_00537E30(); /* call 0x00537E30 */

loc_002AC55C: ;
    MEM32(esi) = eax;

loc_002AC55E: ;
    edx = 0; /* xor self */
    ecx = 0x4035C;
    PUSH32(esp, 0); sub_00537990(); /* call 0x00537990 */

loc_002AC56A: ;
    eax = MEM32(0x5499F0);
    eax = eax | 0x1200;
    PUSH32(esp, edi);
    esi = 0; /* xor self */
    MEM32(0x549AF8) = edi;
    MEM32(0x5499F0) = eax;
    MEM32(0x549B90) = edi;
    PUSH32(esp, 0); sub_005379C0(); /* call 0x005379C0 */

loc_002AC58D: ;
    edx = MEM32(0x5499F0);
    edx = edx | 0xC01;
    eax = 3;
    MEM32(0x5499F0) = edx;
    edx = 0x8006;
    ecx = 0x40350;
    MEM32(0x547360) = 2;
    MEM32(0x547368) = 2;
    MEM32(0x547370) = ebx;
    MEM32(0x547330) = eax;
    MEM32(0x547334) = eax;
    MEM32(0x547384) = edi;
    MEM32(0x5473E0) = ebx;
    MEM32(0x5473F0) = ebx;
    PUSH32(esp, 0); sub_00537990(); /* call 0x00537990 */

loc_002AC5E9: ;
    edx = ebx;
    ecx = 0x40344;
    MEM32(0x549B20) = 0x8006;
    PUSH32(esp, 0); sub_00537990(); /* call 0x00537990 */

loc_002AC5FF: ;
    edx = 0; /* xor self */
    ecx = 0x40348;
    MEM32(0x549AF0) = ebx;
    PUSH32(esp, 0); sub_00537990(); /* call 0x00537990 */

loc_002AC611: ;
    MEM32(0x549AF4) = edi;
    PUSH32(esp, 0); sub_00252BB0(); /* call 0x00252BB0 */

loc_002AC61C: ;
    eax = MEM32(0x84B878);
    if (CMP_EQ(eax, edi)) goto loc_002AC62B; /* je: equal / zero */

loc_002AC625: ;
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, edi);
    PUSH32(esp, 0); RECOMP_ICALL_SAFE(eax, _icall_esp); /* indirect call */
    }

loc_002AC628: ;
    esp = esp + 4;

loc_002AC62B: ;
    eax = 0; /* xor self */
    PUSH32(esp, 0); sub_0053D700(); /* call 0x0053D700 */

loc_002AC632: ;
    eax = MEM32(0x84B878);
    if (CMP_EQ(eax, edi)) goto loc_002AC641; /* je: equal / zero */

loc_002AC63B: ;
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, ebx);
    PUSH32(esp, 0); RECOMP_ICALL_SAFE(eax, _icall_esp); /* indirect call */
    }

loc_002AC63E: ;
    esp = esp + 4;

loc_002AC641: ;
    POP32(esp, edi);
    POP32(esp, esi);
    POP32(esp, ebx);
    esp += 4; return; /* ret */

}

/**
 * sub_002AC650
 * Original: 0x002AC650 - 0x002AC6BC (108 bytes, 24 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_002AC650(void)
{
    uint32_t ebp;
    int _flags = 0; /* fallback flag var */
    float xmm0, xmm1, xmm2;
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_002AC650: ;
    if (CMP_A(eax, 3)) { sub_002AC6BC(); return; } /* ja: above (unsigned >) */

loc_002AC655: ;
    { uint32_t _jt = MEM32(eax * 4 + 0x2AC6C8); /* switch: 4 entries, 4 targets */
    if (_jt == 0x002AC65Cu) goto loc_002AC65C;
    if (_jt == 0x002AC665u) goto loc_002AC665;
    if (_jt == 0x002AC675u) goto loc_002AC675;
    if (_jt == 0x002AC694u) goto loc_002AC694;
    g_seh_ebp = ebp; RECOMP_ITAIL(_jt); return; }

loc_002AC65C: ;
    xmm0 = MEMF(esp + 4); /* movss */
    esp += 8; return; /* ret 4 */

loc_002AC665: ;
    xmm1 = MEMF(esp + 4); /* movss */
    xmm0 = xmm1; /* movaps */
    xmm0 = xmm0 * xmm1; /* mulss */
    esp += 8; return; /* ret 4 */

loc_002AC675: ;
    xmm0 = MEMF(0x648D14); /* movss */
    xmm1 = xmm0; /* movaps */
    xmm1 = xmm1 - MEMF(esp + 4); /* subss */
    xmm2 = xmm1; /* movaps */
    xmm2 = xmm2 * xmm1; /* mulss */
    xmm0 = xmm0 - xmm2; /* subss */
    esp += 8; return; /* ret 4 */

loc_002AC694: ;
    xmm1 = MEMF(esp + 4); /* movss */
    xmm0 = MEMF(0x648D20); /* movss */
    xmm2 = xmm1; /* movaps */
    xmm2 = xmm2 * MEMF(0x648CE0); /* mulss */
    xmm0 = xmm0 - xmm2; /* subss */
    xmm0 = xmm0 * xmm1; /* mulss */
    xmm0 = xmm0 * xmm1; /* mulss */
    esp += 8; return; /* ret 4 */

}

/**
 * sub_002AC6E0
 * Original: 0x002AC6E0 - 0x002AC817 (311 bytes, 71 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_002AC6E0(void)
{
    float xmm0, xmm1, xmm2, xmm3;

loc_002AC6E0: ;
    esp = esp - 0x28;
    PUSH32(esp, esi);
    esi = eax;
    eax = MEM32(esp + 0x30);
    PUSH32(esp, edi);
    PUSH32(esp, eax);
    eax = MEM32(esi + 4);
    PUSH32(esp, 0); sub_002AC650(); /* call 0x002AC650 */

loc_002AC6F4: ;
    xmm1 = MEMF(esi + 0x30); /* movss */
    xmm1 = xmm1 - MEMF(esi + 8); /* subss */
    xmm1 = xmm1 * xmm0; /* mulss */
    xmm1 = xmm1 + MEMF(esi + 8); /* addss */
    xmm2 = MEMF(esi + 0x2C); /* movss */
    xmm3 = MEMF(esi + 0x54); /* movss */
    MEMF(esp + 8) = xmm1; /* movss */
    xmm1 = MEMF(esi + 0x34); /* movss */
    xmm1 = xmm1 - MEMF(esi + 0xC); /* subss */
    xmm1 = xmm1 * xmm0; /* mulss */
    xmm1 = xmm1 + MEMF(esi + 0xC); /* addss */
    MEMF(esp + 0xC) = xmm1; /* movss */
    xmm1 = MEMF(esi + 0x38); /* movss */
    xmm1 = xmm1 - MEMF(esi + 0x10); /* subss */
    xmm1 = xmm1 * xmm0; /* mulss */
    xmm1 = xmm1 + MEMF(esi + 0x10); /* addss */
    MEMF(esp + 0x10) = xmm1; /* movss */
    xmm1 = MEMF(esi + 0x3C); /* movss */
    xmm1 = xmm1 - MEMF(esi + 0x14); /* subss */
    xmm1 = xmm1 * xmm0; /* mulss */
    xmm1 = xmm1 + MEMF(esi + 0x14); /* addss */
    MEMF(esp + 0x14) = xmm1; /* movss */
    xmm1 = MEMF(0x648D14); /* movss */
    xmm1 = xmm1 - xmm0; /* subss */
    xmm2 = xmm2 * xmm1; /* mulss */
    xmm3 = xmm3 * xmm0; /* mulss */
    xmm2 = xmm2 + xmm3; /* addss */
    MEMF(esp + 0x2C) = xmm2; /* movss */
    xmm2 = MEMF(esi + 0x40); /* movss */
    xmm2 = xmm2 - MEMF(esi + 0x18); /* subss */
    xmm2 = xmm2 * xmm0; /* mulss */
    xmm2 = xmm2 + MEMF(esi + 0x18); /* addss */
    MEMF(esp + 0x18) = xmm2; /* movss */
    xmm2 = MEMF(esi + 0x44); /* movss */
    xmm2 = xmm2 - MEMF(esi + 0x1C); /* subss */
    xmm2 = xmm2 * xmm0; /* mulss */
    xmm2 = xmm2 + MEMF(esi + 0x1C); /* addss */
    MEMF(esp + 0x1C) = xmm2; /* movss */
    xmm2 = MEMF(esi + 0x48); /* movss */
    xmm2 = xmm2 - MEMF(esi + 0x20); /* subss */
    xmm2 = xmm2 * xmm0; /* mulss */
    xmm2 = xmm2 + MEMF(esi + 0x20); /* addss */
    MEMF(esp + 0x20) = xmm2; /* movss */
    xmm2 = MEMF(esi + 0x4C); /* movss */
    xmm2 = xmm2 - MEMF(esi + 0x24); /* subss */
    xmm2 = xmm2 * xmm0; /* mulss */
    xmm2 = xmm2 + MEMF(esi + 0x24); /* addss */
    MEMF(esp + 0x24) = xmm2; /* movss */
    xmm2 = MEMF(esi + 0x28); /* movss */
    xmm2 = xmm2 * xmm1; /* mulss */
    xmm1 = MEMF(esi + 0x50); /* movss */
    xmm1 = xmm1 * xmm0; /* mulss */
    xmm2 = xmm2 + xmm1; /* addss */
    ecx = 0xA;
    esi = esp + 8;
    edi = ebx;
    MEMF(esp + 0x28) = xmm2; /* movss */
    memcpy((void*)XBOX_PTR(edi), (void*)XBOX_PTR(esi), ecx * 4);
    esi += ecx * 4; edi += ecx * 4; ecx = 0; /* rep movsd */
    POP32(esp, edi);
    eax = ebx;
    POP32(esp, esi);
    esp = esp + 0x28;
    esp += 8; return; /* ret 4 */

}

/**
 * sub_002AC820
 * Original: 0x002AC820 - 0x002AC8E6 (198 bytes, 62 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_002AC820(void)
{
    int _flags = 0; /* fallback flag var */

loc_002AC820: ;
    eax = MEM32(0x8758C4);
    PUSH32(esp, ebx);
    ebx = 0; /* xor self */
    if (CMP_NE(eax, ebx)) goto loc_002AC8E4; /* jne: not equal / not zero */

loc_002AC830: ;
    if (CMP_NE(MEM32(0x84A19C), ebx)) goto loc_002AC83D; /* jne: not equal / not zero */

loc_002AC838: ;
    PUSH32(esp, 0); sub_002AED70(); /* call 0x002AED70 */

loc_002AC83D: ;
    edx = MEM32(0x7FA494);
    ecx = MEM32(0x7FA4B4);
    PUSH32(esp, esi);
    esi = MEM32(0x84A190);
    edx++;
    ecx++;
    (void)0; /* cmp esi, ebx - flags set for next jcc */
    PUSH32(esp, edi);
    MEM32(0x7FA494) = edx;
    MEM32(0x7FA4B4) = ecx;
    edi = esi;
    if (CMP_EQ(esi, ebx)) goto loc_002AC88D; /* je: equal / zero */

loc_002AC865: ;
    if (CMP_B(MEM32(esi + 0x80), 0xD0)) goto loc_002AC88D; /* jb: below (unsigned <) */

loc_002AC871: ;
    ecx = 0x10;
    PUSH32(esp, 0); sub_003E62A0(); /* call 0x003E62A0 */

loc_002AC87B: ;
    PUSH32(esp, 0xD0);
    PUSH32(esp, edi);
    PUSH32(esp, 0); sub_003E6BD0(); /* call 0x003E6BD0 */

loc_002AC886: ;
    esp = esp + 8;
    if (CMP_NE(eax, ebx)) goto loc_002AC8B1; /* jne: not equal / not zero */

loc_002AC88D: ;
    esi = MEM32(0x84A184);
    ecx = 0x10;
    edi = esi;
    PUSH32(esp, 0); sub_003E62A0(); /* call 0x003E62A0 */

loc_002AC89F: ;
    PUSH32(esp, 0xD0);
    PUSH32(esp, edi);
    PUSH32(esp, 0); sub_003E6BD0(); /* call 0x003E6BD0 */

loc_002AC8AA: ;
    esp = esp + 8;
    if (CMP_EQ(eax, ebx)) goto loc_002AC8DB; /* je: equal / zero */

loc_002AC8B1: ;
    MEM32(eax + 0x14) = ebx;
    ecx = 0; /* xor self */
    edx = eax;
    MEM32(edx) = ecx;
    MEM32(edx + 4) = ecx;
    MEM32(edx + 8) = ecx;
    MEM32(edx + 0xC) = ecx;
    POP32(esp, edi);
    MEM32(edx + 0x10) = ecx;
    POP32(esp, esi);
    MEM32(eax + 0x78) = ebx;
    MEM32(eax + 0x7C) = ebx;
    MEM32(eax + 0x80) = ebx;
    MEM32(0x8758C4) = eax;
    POP32(esp, ebx);
    esp += 4; return; /* ret */

loc_002AC8DB: ;
    eax = 0; /* xor self */
    POP32(esp, edi);
    MEM32(0x8758C4) = eax;
    POP32(esp, esi);

loc_002AC8E4: ;
    POP32(esp, ebx);
    esp += 4; return; /* ret */

}

/**
 * sub_002AC8F0
 * Original: 0x002AC8F0 - 0x002ACA6F (383 bytes, 130 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_002AC8F0(void)
{
    uint32_t ebp;
    int _flags = 0; /* fallback flag var */
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_002AC8F0: ;
    eax = MEM32(0x5499E8);
    esp = esp - 0x30;
    PUSH32(esp, ebx);
    PUSH32(esp, ebp);
    ebp = MEM32(esp + 0x3C);
    PUSH32(esp, esi);
    PUSH32(esp, edi);
    edi = MEM32(eax + 0x1A14);
    eax = MEM32(edi);
    if (TEST_NZ(eax, 0xFFFF)) goto loc_002AC928; /* jne: not equal / not zero */

loc_002AC90F: ;
    eax = eax & 0x70000;
    if (CMP_NE(eax, 0x50000)) goto loc_002AC928; /* jne: not equal / not zero */

loc_002AC91B: ;
    eax = MEM32(edi + 0x14);
    if (TEST_Z(eax, eax)) goto loc_002AC928; /* je: equal / zero */

loc_002AC922: ;
    PUSH32(esp, eax);
    PUSH32(esp, 0); sub_0053B830(); /* call 0x0053B830 */

loc_002AC928: ;
    eax = MEM32(edi);
    eax++;
    esi = esp + 0x24;
    ebx = 0; /* xor self */
    MEM32(edi) = eax;
    PUSH32(esp, 0); sub_0053FC70(); /* call 0x0053FC70 */

loc_002AC938: ;
    ecx = 0; /* xor self */
    edx = ebp;
    MEM32(edx) = ecx;
    MEM32(edx + 4) = ecx;
    MEM32(edx + 8) = ecx;
    MEM32(edx + 0xC) = ecx;
    MEM32(edx + 0x10) = ecx;
    esi = MEM32(edi + 4);
    eax = ebp + 0x10;
    PUSH32(esp, eax);
    ecx = ebp + 0xC;
    PUSH32(esp, ecx);
    ecx = MEM32(esp + 0x2C);
    PUSH32(esp, ebx);
    eax = ecx;
    PUSH32(esp, 0); sub_00523309(); /* call 0x00523309 */

loc_002AC961: ;
    edx = eax;
    eax = MEM32(esp + 0x44);
    edx = (uint32_t)((int32_t)edx * (int32_t)eax);
    PUSH32(esp, edx);
    PUSH32(esp, ecx);
    ecx = MEM32(esp + 0x50);
    PUSH32(esp, 1);
    PUSH32(esp, 1);
    PUSH32(esp, eax);
    SET_LO8(eax, 0); /* xor self */
    PUSH32(esp, 0); sub_00522D1F(); /* call 0x00522D1F */

loc_002AC97C: ;
    SET_LO8(eax, MEM8(esp + 0x48));
    (void)0; /* test LO8(eax), LO8(eax) - flags set for next jcc */
    MEM32(ebp) = 0x40001;
    MEM32(ebp + 8) = ebx;
    MEM32(ebp + 4) = esi;
    if (TEST_Z(LO8(eax), LO8(eax))) goto loc_002ACA5C; /* je: equal / zero */

loc_002AC995: ;
    eax = MEM32(0x5499E8);
    ecx = MEM32(eax + 0x1A18);
    eax = MEM32(ecx);
    (void)0; /* test eax, 0xFFFF - flags set for next jcc */
    MEM32(esp + 0x48) = ecx;
    if (TEST_NZ(eax, 0xFFFF)) goto loc_002AC9C6; /* jne: not equal / not zero */

loc_002AC9AD: ;
    eax = eax & 0x70000;
    if (CMP_NE(eax, 0x50000)) goto loc_002AC9C6; /* jne: not equal / not zero */

loc_002AC9B9: ;
    eax = MEM32(ecx + 0x14);
    if (TEST_Z(eax, eax)) goto loc_002AC9C6; /* je: equal / zero */

loc_002AC9C0: ;
    PUSH32(esp, eax);
    PUSH32(esp, 0); sub_0053B830(); /* call 0x0053B830 */

loc_002AC9C6: ;
    edx = MEM32(ecx);
    edx++;
    esi = esp + 0x24;
    ebx = 0; /* xor self */
    MEM32(ecx) = edx;
    PUSH32(esp, 0); sub_0053FC70(); /* call 0x0053FC70 */

loc_002AC9D6: ;
    ebx = MEM32(esp + 0x48);
    ecx = 0; /* xor self */
    MEM32(esp + 0x10) = ecx;
    MEM32(esp + 0x14) = ecx;
    MEM32(esp + 0x18) = ecx;
    edx = esp + 0x20;
    PUSH32(esp, edx);
    MEM32(esp + 0x20) = ecx;
    eax = esp + 0x20;
    PUSH32(esp, eax);
    MEM32(esp + 0x28) = ecx;
    esi = MEM32(ebx + 4);
    PUSH32(esp, ecx);
    ecx = MEM32(esp + 0x30);
    eax = ecx;
    PUSH32(esp, 0); sub_00523309(); /* call 0x00523309 */

loc_002ACA09: ;
    edx = eax;
    eax = MEM32(esp + 0x44);
    edx = (uint32_t)((int32_t)edx * (int32_t)eax);
    PUSH32(esp, edx);
    PUSH32(esp, ecx);
    ecx = MEM32(esp + 0x50);
    PUSH32(esp, 1);
    PUSH32(esp, 1);
    PUSH32(esp, eax);
    SET_LO8(eax, 0); /* xor self */
    PUSH32(esp, 0); sub_00522D1F(); /* call 0x00522D1F */

loc_002ACA24: ;
    PUSH32(esp, 1);
    PUSH32(esp, 0);
    eax = esp + 0x18;
    PUSH32(esp, 0);
    PUSH32(esp, eax);
    eax = ebp;
    MEM32(esp + 0x20) = 0x40001;
    MEM32(esp + 0x28) = 0;
    MEM32(esp + 0x24) = esi;
    PUSH32(esp, 0); sub_003EAF20(); /* call 0x003EAF20 */

loc_002ACA4A: ;
    esp = esp + 0x10;
    PUSH32(esp, ebx);
    PUSH32(esp, 0); sub_0053B870(); /* call 0x0053B870 */

loc_002ACA53: ;
    PUSH32(esp, 0);
    eax = 0; /* xor self */
    PUSH32(esp, 0); sub_00539960(); /* call 0x00539960 */

loc_002ACA5C: ;
    PUSH32(esp, edi);
    MEM32(ebp + 0x14) = ebp;
    PUSH32(esp, 0); sub_0053B870(); /* call 0x0053B870 */

loc_002ACA65: ;
    POP32(esp, edi);
    POP32(esp, esi);
    POP32(esp, ebp);
    POP32(esp, ebx);
    esp = esp + 0x30;
    esp += 12; return; /* ret 8 */

}

/**
 * sub_002ACA70
 * Original: 0x002ACA70 - 0x002ACB15 (165 bytes, 55 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_002ACA70(void)
{
    int _flags = 0; /* fallback flag var */

loc_002ACA70: ;
    PUSH32(esp, esi);
    esi = MEM32(0x5499E8);
    ecx = MEM32(esi + 0x1A04);
    if (TEST_Z(ecx, ecx)) goto loc_002ACAA5; /* je: equal / zero */

loc_002ACA81: ;
    eax = MEM32(ecx);
    if (TEST_NZ(eax, 0xFFFF)) goto loc_002ACAA3; /* jne: not equal / not zero */

loc_002ACA8A: ;
    eax = eax & 0x70000;
    if (CMP_NE(eax, 0x50000)) goto loc_002ACAA3; /* jne: not equal / not zero */

loc_002ACA96: ;
    eax = MEM32(ecx + 0x14);
    if (TEST_Z(eax, eax)) goto loc_002ACAA3; /* je: equal / zero */

loc_002ACA9D: ;
    PUSH32(esp, eax);
    PUSH32(esp, 0); sub_0053B830(); /* call 0x0053B830 */

loc_002ACAA3: ;
    MEM32(ecx) = MEM32(ecx) + 1;

loc_002ACAA5: ;
    MEM32(edi + 0x18) = ecx;
    ecx = MEM32(esi + 0x1A08);
    if (TEST_Z(ecx, ecx)) goto loc_002ACAD6; /* je: equal / zero */

loc_002ACAB2: ;
    eax = MEM32(ecx);
    if (TEST_NZ(eax, 0xFFFF)) goto loc_002ACAD4; /* jne: not equal / not zero */

loc_002ACABB: ;
    eax = eax & 0x70000;
    if (CMP_NE(eax, 0x50000)) goto loc_002ACAD4; /* jne: not equal / not zero */

loc_002ACAC7: ;
    eax = MEM32(ecx + 0x14);
    if (TEST_Z(eax, eax)) goto loc_002ACAD4; /* je: equal / zero */

loc_002ACACE: ;
    PUSH32(esp, eax);
    PUSH32(esp, 0); sub_0053B830(); /* call 0x0053B830 */

loc_002ACAD4: ;
    MEM32(ecx) = MEM32(ecx) + 1;

loc_002ACAD6: ;
    MEM32(edi + 0x1C) = ecx;
    esi = MEM32(esi + 0x1A18);
    eax = MEM32(esi);
    if (TEST_NZ(eax, 0xFFFF)) goto loc_002ACB01; /* jne: not equal / not zero */

loc_002ACAE8: ;
    eax = eax & 0x70000;
    if (CMP_NE(eax, 0x50000)) goto loc_002ACB01; /* jne: not equal / not zero */

loc_002ACAF4: ;
    eax = MEM32(esi + 0x14);
    if (TEST_Z(eax, eax)) goto loc_002ACB01; /* je: equal / zero */

loc_002ACAFB: ;
    PUSH32(esp, eax);
    PUSH32(esp, 0); sub_0053B830(); /* call 0x0053B830 */

loc_002ACB01: ;
    MEM32(esi) = MEM32(esi) + 1;
    eax = MEM32(edi + 0x1C);
    PUSH32(esp, eax);
    PUSH32(esp, esi);
    PUSH32(esp, 0); sub_00538E00(); /* call 0x00538E00 */

loc_002ACB0D: ;
    PUSH32(esp, esi);
    PUSH32(esp, 0); sub_0053B870(); /* call 0x0053B870 */

loc_002ACB13: ;
    POP32(esp, esi);
    esp += 4; return; /* ret */

}

/**
 * sub_002ACB20
 * Original: 0x002ACB20 - 0x002AD05A (1338 bytes, 312 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_002ACB20(void)
{
    uint32_t ebp;
    int _flags = 0; /* fallback flag var */
    float xmm0, xmm1, xmm2, xmm3, xmm4, xmm5, xmm6;
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_002ACB20: ;
    esp = esp - 0x5C;
    xmm0 = MEMF(0x648D10); /* movss */
    xmm2 = MEMF(0x648D14); /* movss */
    SET_LO8(eax, MEM8(0x7819D5));
    xmm6 = MEMF(0x64A758); /* movss */
    xmm5 = MEMF(0x648E68); /* movss */
    xmm4 = MEMF(0x64A754); /* movss */
    PUSH32(esp, ebx);
    ebx = 0; /* xor self */
    (void)0; /* cmp LO8(eax), LO8(ebx) - flags set for next jcc */
    MEMF(esp + 0x10) = xmm0; /* movss */
    xmm0 = 0.0f; /* xorps self = zero */
    MEMF(esp + 0x14) = xmm2; /* movss */
    MEMF(esp + 0x18) = xmm0; /* movss */
    MEMF(esp + 0x1C) = xmm2; /* movss */
    xmm3 = xmm2; /* movaps */
    if (CMP_NE(LO8(eax), LO8(ebx))) goto loc_002ACB7E; /* jne: not equal / not zero */

loc_002ACB75: ;
    if (CMP_NE(MEM32(0x7FA1F8), 0x46)) goto loc_002ACBB6; /* jne: not equal / not zero */

loc_002ACB7E: ;
    eax = MEM32(esp + 0x10);
    ecx = MEM32(esp + 0x14);
    edx = MEM32(esp + 0x18);
    MEM32(esp + 0x20) = eax;
    eax = MEM32(esp + 0x1C);
    xmm6 = MEMF(esp + 0x20); /* movss */
    MEM32(esp + 0x24) = ecx;
    xmm5 = MEMF(esp + 0x24); /* movss */
    MEM32(esp + 0x28) = edx;
    xmm4 = MEMF(esp + 0x28); /* movss */
    MEM32(esp + 0x2C) = eax;
    xmm3 = MEMF(esp + 0x2C); /* movss */

loc_002ACBB6: ;
    if (CMP_NE(MEM32(0x84A170), 8)) goto loc_002ACBCB; /* jne: not equal / not zero */

loc_002ACBBF: ;
    xmm3 = xmm2; /* movaps */
    xmm4 = xmm2; /* movaps */
    xmm5 = xmm2; /* movaps */
    xmm6 = xmm2; /* movaps */

loc_002ACBCB: ;
    xmm0 = MEMF(edi + 0x24); /* movss */
    PUSH32(esp, ebp);
    ecx = esp + 0x14;
    edx = esp + 0x34;
    PUSH32(esp, esi);
    MEMF(esp + 0x18) = xmm2; /* movss */
    MEMF(esp + 0x1C) = xmm2; /* movss */
    MEMF(esp + 0x20) = xmm2; /* movss */
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
    xmm0 = MEMF(edi + 0x24); /* movss */
    eax = MEM32(0x6B850C);
    MEMF(esp + 0x44) = xmm0; /* movss */
    xmm0 = xmm2; /* movaps */
    xmm0 = xmm0 - xmm6; /* subss */
    xmm0 = xmm0 * MEMF(edi + 0x24); /* mulss */
    xmm1 = xmm2; /* movaps */
    xmm1 = xmm1 - xmm0; /* subss */
    xmm1 = xmm1 * MEMF(edi + 0x10); /* mulss */
    MEMF(esp + 0x28) = xmm1; /* movss */
    xmm0 = xmm2; /* movaps */
    xmm0 = xmm0 - xmm5; /* subss */
    xmm0 = xmm0 * MEMF(edi + 0x24); /* mulss */
    xmm1 = xmm2; /* movaps */
    xmm1 = xmm1 - xmm0; /* subss */
    xmm1 = xmm1 * MEMF(edi + 0x14); /* mulss */
    xmm0 = xmm2; /* movaps */
    xmm0 = xmm0 - xmm4; /* subss */
    xmm0 = xmm0 * MEMF(edi + 0x24); /* mulss */
    MEMF(esp + 0x2C) = xmm1; /* movss */
    xmm1 = xmm2; /* movaps */
    xmm1 = xmm1 - xmm0; /* subss */
    xmm1 = xmm1 * MEMF(edi + 0x18); /* mulss */
    xmm0 = xmm2; /* movaps */
    xmm0 = xmm0 - xmm3; /* subss */
    xmm0 = xmm0 * MEMF(edi + 0x24); /* mulss */
    xmm2 = xmm2 - xmm0; /* subss */
    xmm2 = xmm2 * MEMF(edi + 0x1C); /* mulss */
    PUSH32(esp, eax);
    MEMF(esp + 0x34) = xmm1; /* movss */
    MEMF(esp + 0x38) = xmm2; /* movss */
    PUSH32(esp, 0); sub_00536930(); /* call 0x00536930 */

loc_002ACCAA: ;
    eax = MEM32(0x6B8CD4);
    PUSH32(esp, 0); sub_00538690(); /* call 0x00538690 */

loc_002ACCB4: ;
    ecx = esp + 0x38;
    ebp = 1;
    PUSH32(esp, ecx);
    eax = ebp;
    ecx = ebp;
    PUSH32(esp, 0); sub_005388A0(); /* call 0x005388A0 */

loc_002ACCC7: ;
    edx = esp + 0x28;
    PUSH32(esp, edx);
    eax = ebp;
    ecx = 2;
    PUSH32(esp, 0); sub_005388A0(); /* call 0x005388A0 */

loc_002ACCD8: ;
    PUSH32(esp, 0x1B02);
    PUSH32(esp, 0); sub_00537840(); /* call 0x00537840 */

loc_002ACCE2: ;
    PUSH32(esp, ebx);
    PUSH32(esp, 0); sub_00537070(); /* call 0x00537070 */

loc_002ACCE8: ;
    edx = ebp;
    ecx = 0x40304;
    PUSH32(esp, 0); sub_00537990(); /* call 0x00537990 */

loc_002ACCF4: ;
    edx = 0; /* xor self */
    ecx = 0x40300;
    MEM32(0x549AE4) = ebp;
    PUSH32(esp, 0); sub_00537990(); /* call 0x00537990 */

loc_002ACD06: ;
    esi = MEM32(0x5499E8);
    MEM32(0x549AE8) = ebx;
    eax = MEM32(esi);
    if (CMP_B(eax, MEM32(esi + 4))) goto loc_002ACD28; /* jb: below (unsigned <) */

loc_002ACD19: ;
    eax = MEM32(0x54A8B8);
    ecx = eax;
    ecx = ecx >> 1;
    PUSH32(esp, ecx);
    PUSH32(esp, 0); sub_0053C300(); /* call 0x0053C300 */

loc_002ACD28: ;
    MEM32(eax) = 0x4030C;
    MEM32(eax + 4) = ebx;
    ecx = MEM32(0x549B40);
    MEM32(eax + 8) = 0x41D78;
    MEM32(eax + 0xC) = ecx;
    eax = eax + 0x10;
    MEM32(esi) = eax;
    eax = MEM32(0x549C34);
    (void)0; /* cmp eax, 2 - flags set for next jcc */
    MEM32(0x549C34) = ebx;
    if (CMP_NE(eax, 2)) goto loc_002ACD85; /* jne: not equal / not zero */

loc_002ACD56: ;
    PUSH32(esp, 0); sub_005384E0(); /* call 0x005384E0 */

loc_002ACD5B: ;
    PUSH32(esp, 0); sub_00536810(); /* call 0x00536810 */

loc_002ACD60: ;
    eax = MEM32(esi);
    if (CMP_B(eax, MEM32(esi + 4))) goto loc_002ACD76; /* jb: below (unsigned <) */

loc_002ACD67: ;
    eax = MEM32(0x54A8B8);
    edx = eax;
    edx = edx >> 1;
    PUSH32(esp, edx);
    PUSH32(esp, 0); sub_0053C300(); /* call 0x0053C300 */

loc_002ACD76: ;
    PUSH32(esp, esi);
    edx = eax;
    PUSH32(esp, 0); sub_00538030(); /* call 0x00538030 */

loc_002ACD7E: ;
    PUSH32(esp, 0); sub_00537E30(); /* call 0x00537E30 */

loc_002ACD83: ;
    MEM32(esi) = eax;

loc_002ACD85: ;
    edx = 0; /* xor self */
    ecx = 0x4035C;
    PUSH32(esp, 0); sub_00537990(); /* call 0x00537990 */

loc_002ACD91: ;
    esi = MEM32(0x5499F0);
    eax = MEM32(esp + 0x6C);
    MEM32(0x549AF8) = ebx;
    MEM32(0x549B90) = ebx;
    ecx = MEM32(eax + 0x14);
    esi = esi | 0x1200;
    PUSH32(esp, ecx);
    eax = 0; /* xor self */
    MEM32(0x5499F0) = esi;
    PUSH32(esp, 0); sub_00539960(); /* call 0x00539960 */

loc_002ACDBE: ;
    PUSH32(esp, ebx);
    esi = 0; /* xor self */
    PUSH32(esp, 0); sub_005379C0(); /* call 0x005379C0 */

loc_002ACDC6: ;
    eax = 3;
    MEM32(0x54736C) = eax;
    MEM32(0x547330) = eax;
    MEM32(0x547334) = eax;
    eax = MEM32(0x5499F0);
    eax = eax | 0xC01;
    edx = 0x8006;
    ecx = 0x40350;
    MEM32(0x547360) = 2;
    MEM32(0x547370) = ebp;
    MEM32(0x547384) = ebx;
    MEM32(0x5473E0) = ebp;
    MEM32(0x5499F0) = eax;
    MEM32(0x5473F0) = ebp;
    PUSH32(esp, 0); sub_00537990(); /* call 0x00537990 */

loc_002ACE1A: ;
    edx = ebp;
    ecx = 0x40344;
    MEM32(0x549B20) = 0x8006;
    PUSH32(esp, 0); sub_00537990(); /* call 0x00537990 */

loc_002ACE30: ;
    edx = 0; /* xor self */
    ecx = 0x40348;
    MEM32(0x549AF0) = ebp;
    PUSH32(esp, 0); sub_00537990(); /* call 0x00537990 */

loc_002ACE42: ;
    PUSH32(esp, 0xBF000000u);
    PUSH32(esp, 0xBF000000u);
    MEM32(0x549AF4) = ebx;
    PUSH32(esp, 0); sub_0053A280(); /* call 0x0053A280 */

loc_002ACE57: ;
    xmm1 = MEMF(0x64994C); /* movss */
    xmm2 = MEMF(edi + 8); /* movss */
    xmm4 = MEMF(0x58BD48); /* movss */
    xmm0 = MEMF(edi); /* movss */
    xmm5 = MEMF(0x648D14); /* movss */
    xmm3 = MEMF(edi + 0xC); /* movss */
    edx = MEM32(0x5499E8);
    xmm2 = xmm2 * xmm1; /* mulss */
    xmm0 = xmm0 + xmm1; /* addss */
    xmm1 = MEMF(edi + 4); /* movss */
    xmm3 = xmm3 * xmm4; /* mulss */
    xmm1 = xmm1 + xmm4; /* addss */
    xmm6 = xmm2; /* movaps */
    xmm6 = xmm6 * xmm5; /* mulss */
    xmm4 = xmm0; /* movaps */
    xmm4 = xmm4 - xmm6; /* subss */
    xmm6 = xmm3; /* movaps */
    xmm6 = xmm6 * xmm5; /* mulss */
    xmm5 = xmm1; /* movaps */
    PUSH32(esp, ebx);
    xmm5 = xmm5 - xmm6; /* subss */
    xmm0 = xmm0 + xmm2; /* addss */
    xmm1 = xmm1 + xmm3; /* addss */
    PUSH32(esp, edx);
    MEMF(esp + 0x50) = xmm4; /* movss */
    MEMF(esp + 0x54) = xmm5; /* movss */
    MEMF(esp + 0x58) = xmm0; /* movss */
    MEMF(esp + 0x5C) = xmm5; /* movss */
    MEMF(esp + 0x60) = xmm0; /* movss */
    MEMF(esp + 0x64) = xmm1; /* movss */
    MEMF(esp + 0x68) = xmm4; /* movss */
    MEMF(esp + 0x6C) = xmm1; /* movss */
    PUSH32(esp, 0); sub_00543200(); /* call 0x00543200 */

loc_002ACEF3: ;
    ecx = MEM32(0x5499E8);
    eax = MEM32(ecx);
    edx = MEM32(ecx + 4);
    edx = edx + 0x200;
    esi = eax + 0x68;
    (void)0; /* cmp esi, edx - flags set for next jcc */
    POP32(esp, esi);
    POP32(esp, ebp);
    if (CMP_B(esi, edx)) goto loc_002ACF3C; /* jb: below (unsigned <) */

loc_002ACF0D: ;
    ecx = MEM32(0x54A8B8);
    eax = ecx;
    ecx = ecx >> 1;
    if (CMP_AE(ecx, 0x26C)) goto loc_002ACF24; /* jae: above or equal (unsigned >=) */

loc_002ACF1F: ;
    ecx = 0x26C;

loc_002ACF24: ;
    if (CMP_AE(eax, 0x26C)) goto loc_002ACF30; /* jae: above or equal (unsigned >=) */

loc_002ACF2B: ;
    eax = 0x26C;

loc_002ACF30: ;
    PUSH32(esp, ecx);
    PUSH32(esp, 0); sub_0053C300(); /* call 0x0053C300 */

loc_002ACF36: ;
    ecx = MEM32(0x5499E8);

loc_002ACF3C: ;
    MEM32(eax) = 0x417FC;
    MEM32(eax + 4) = 8;
    xmm0 = MEMF(esp + 0x40); /* movss */
    eax = eax + 4;
    MEM32(eax + 4) = 0x40501818;
    eax = eax + 4;
    MEMF(eax + 4) = xmm0; /* movss */
    xmm0 = MEMF(esp + 0x44); /* movss */
    xmm2 = 0.0f; /* xorps self = zero */
    eax = eax + 4;
    MEMF(eax + 4) = xmm0; /* movss */
    xmm0 = MEMF(0x648D80); /* movss */
    eax = eax + 4;
    MEMF(eax + 4) = xmm0; /* movss */
    xmm1 = MEMF(esp + 0x48); /* movss */
    eax = eax + 4;
    MEMF(eax + 4) = xmm2; /* movss */
    eax = eax + 4;
    MEMF(eax + 4) = xmm2; /* movss */
    eax = eax + 4;
    MEMF(eax + 4) = xmm1; /* movss */
    xmm1 = MEMF(esp + 0x4C); /* movss */
    eax = eax + 4;
    MEMF(eax + 4) = xmm1; /* movss */
    xmm1 = MEMF(0x64971C); /* movss */
    xmm3 = MEMF(esp + 0x50); /* movss */
    eax = eax + 4;
    MEMF(eax + 4) = xmm0; /* movss */
    eax = eax + 4;
    MEMF(eax + 4) = xmm1; /* movss */
    eax = eax + 4;
    MEMF(eax + 4) = xmm2; /* movss */
    eax = eax + 4;
    MEMF(eax + 4) = xmm3; /* movss */
    xmm3 = MEMF(esp + 0x54); /* movss */
    eax = eax + 4;
    MEMF(eax + 4) = xmm3; /* movss */
    xmm3 = MEMF(esp + 0x58); /* movss */
    eax = eax + 4;
    MEMF(eax + 4) = xmm0; /* movss */
    eax = eax + 4;
    MEMF(eax + 4) = xmm1; /* movss */
    xmm1 = MEMF(0x649718); /* movss */
    eax = eax + 4;
    MEMF(eax + 4) = xmm1; /* movss */
    eax = eax + 4;
    MEMF(eax + 4) = xmm3; /* movss */
    xmm3 = MEMF(esp + 0x5C); /* movss */
    eax = eax + 4;
    MEMF(eax + 4) = xmm3; /* movss */
    eax = eax + 4;
    MEMF(eax + 4) = xmm0; /* movss */
    eax = eax + 4;
    MEMF(eax + 4) = xmm2; /* movss */
    eax = eax + 4;
    eax = eax + 4;
    MEMF(eax) = xmm1; /* movss */
    eax = eax + 4;
    MEM32(eax) = 0x417FC;
    eax = eax + 4;
    MEM32(eax) = ebx;
    eax = eax + 4;
    MEM32(ecx) = eax;
    POP32(esp, ebx);
    esp = esp + 0x5C;
    esp += 8; return; /* ret 4 */

}

/**
 * sub_002AD060
 * Original: 0x002AD060 - 0x002AD205 (421 bytes, 114 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_002AD060(void)
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

loc_002AD060: ;
    esp = esp - 8;
    PUSH32(esp, ebx);
    PUSH32(esp, ebp);
    ebp = MEM32(0x84A170);
    ebx = 0; /* xor self */
    (void)0; /* cmp ebp, 8 - flags set for next jcc */
    PUSH32(esp, edi);
    MEM8(esi + 0xBC) = LO8(ebx);
    MEM8(esi + 0xB4) = LO8(ebx);
    MEM8(esi + 0x84) = LO8(ebx);
    if (CMP_NE(ebp, 8)) goto loc_002AD089; /* jne: not equal / not zero */

loc_002AD085: ;
    MEM8(esp + 0x1C) = LO8(ebx);

loc_002AD089: ;
    eax = MEM32(esp + 0x1C);
    PUSH32(esp, eax);
    PUSH32(esp, esi);
    PUSH32(esp, 0); sub_002AC8F0(); /* call 0x002AC8F0 */

loc_002AD094: ;
    (void)0; /* cmp ebp, ebx - flags set for next jcc */
    MEM32(esi + 0xB8) = ebx;
    if (CMP_NE(ebp, ebx)) goto loc_002AD0C5; /* jne: not equal / not zero */

loc_002AD09E: ;
    xmm0 = MEMF(esp + 0x18); /* movss */
    xmm0 = xmm0 - MEMF(0x648D10); /* subss */
    ebp = (int32_t)xmm0; /* cvttss2si */
    if (CMP_GE(ebp, ebx)) goto loc_002AD0B8; /* jge: greater or equal (signed >=) */

loc_002AD0B4: ;
    ebp = 0; /* xor self */
    goto loc_002AD0C2;

loc_002AD0B8: ;
    if (CMP_LE(ebp, 3)) goto loc_002AD0C2; /* jle: less or equal (signed <=) */

loc_002AD0BD: ;
    ebp = 3;

loc_002AD0C2: ;
    ebp = ebp + 2;

loc_002AD0C5: ;
    eax = MEM32(esi + 0x78);
    (void)0; /* cmp eax, ebx - flags set for next jcc */
    edi = esi + 0x74;
    if (CMP_EQ(eax, ebx)) goto loc_002AD0E0; /* je: equal / zero */

loc_002AD0CF: ;
    ecx = esp + 0x1C;
    PUSH32(esp, ecx);
    MEM32(esp + 0x20) = eax;
    PUSH32(esp, 0); sub_002AF1C0(); /* call 0x002AF1C0 */

loc_002AD0DD: ;
    esp = esp + 4;

loc_002AD0E0: ;
    xmm0 = MEMF(0x648D14); /* movss */
    xmm1 = 0.0f; /* xorps self = zero */
    MEM32(edi + 4) = ebx;
    MEM32(edi + 8) = ebx;
    MEM32(edi + 0xC) = ebx;
    MEMF(esi + 0x8C) = xmm1; /* movss */
    MEMF(esi + 0x88) = xmm1; /* movss */
    MEMF(esi + 0x94) = xmm0; /* movss */
    MEMF(esi + 0x90) = xmm0; /* movss */
    MEMF(esi + 0xA8) = xmm1; /* movss */
    MEMF(esi + 0xAC) = xmm1; /* movss */
    ebp--;
    (void)0; /* cmp ebp, 0xA - flags set for next jcc */
    MEMF(esi + 0x98) = xmm0; /* movss */
    MEMF(esi + 0x9C) = xmm0; /* movss */
    MEMF(esi + 0xA0) = xmm0; /* movss */
    MEMF(esi + 0xA4) = xmm0; /* movss */
    if (CMP_A(ebp, 0xA)) goto loc_002AD1CE; /* ja: above (unsigned >) */

loc_002AD14E: ;
    { uint32_t _jt = MEM32(ebp * 4 + 0x2AD208); /* switch: 11 entries, 10 targets */
    if (_jt == 0x002AD155u) goto loc_002AD155;
    if (_jt == 0x002AD15Eu) goto loc_002AD15E;
    if (_jt == 0x002AD167u) goto loc_002AD167;
    if (_jt == 0x002AD170u) goto loc_002AD170;
    if (_jt == 0x002AD179u) goto loc_002AD179;
    if (_jt == 0x002AD182u) goto loc_002AD182;
    if (_jt == 0x002AD1B1u) goto loc_002AD1B1;
    if (_jt == 0x002AD1BCu) goto loc_002AD1BC;
    if (_jt == 0x002AD1C5u) goto loc_002AD1C5;
    if (_jt == 0x002AD1CEu) goto loc_002AD1CE;
    g_seh_ebp = ebp; RECOMP_ITAIL(_jt); return; }

loc_002AD155: ;
    ebx = edi;
    PUSH32(esp, 0); sub_002ADEC0(); /* call 0x002ADEC0 */

loc_002AD15C: ;
    goto loc_002AD1CC;

loc_002AD15E: ;
    eax = edi;
    PUSH32(esp, 0); sub_002AD710(); /* call 0x002AD710 */

loc_002AD165: ;
    goto loc_002AD1CE;

loc_002AD167: ;
    eax = edi;
    PUSH32(esp, 0); sub_002AD7D0(); /* call 0x002AD7D0 */

loc_002AD16E: ;
    goto loc_002AD1CE;

loc_002AD170: ;
    ebx = edi;
    PUSH32(esp, 0); sub_002ADA70(); /* call 0x002ADA70 */

loc_002AD177: ;
    goto loc_002AD1CC;

loc_002AD179: ;
    ebx = edi;
    PUSH32(esp, 0); sub_002AD8B0(); /* call 0x002AD8B0 */

loc_002AD180: ;
    goto loc_002AD1CC;

loc_002AD182: ;
    (void)0; /* cmp MEM32(0x8758C0), ebx - flags set for next jcc */
    ebx = edi;
    if (CMP_NE(MEM32(0x8758C0), ebx)) goto loc_002AD199; /* jne: not equal / not zero */

loc_002AD18C: ;
    PUSH32(esp, 0); sub_002ADBE0(); /* call 0x002ADBE0 */

loc_002AD191: ;
    MEM32(0x8758C0) = MEM32(0x8758C0) + 1;
    goto loc_002AD1CC;

loc_002AD199: ;
    MEM8(esi + 0xBC) = 1;
    MEM32(esi + 0xC0) = 0x34F;
    PUSH32(esp, 0); sub_002ADBE0(); /* call 0x002ADBE0 */

loc_002AD1AF: ;
    goto loc_002AD1CC;

loc_002AD1B1: ;
    PUSH32(esp, edi);
    PUSH32(esp, 0); sub_002AE130(); /* call 0x002AE130 */

loc_002AD1B7: ;
    esp = esp + 4;
    goto loc_002AD1CE;

loc_002AD1BC: ;
    eax = edi;
    PUSH32(esp, 0); sub_002ADDF0(); /* call 0x002ADDF0 */

loc_002AD1C3: ;
    goto loc_002AD1CE;

loc_002AD1C5: ;
    ebx = edi;
    PUSH32(esp, 0); sub_002ADFD0(); /* call 0x002ADFD0 */

loc_002AD1CC: ;
    ebx = 0; /* xor self */

loc_002AD1CE: ;
    /* TODO: rdtsc  */
    PUSH32(esp, ebx);
    PUSH32(esp, 3);
    PUSH32(esp, edx);
    PUSH32(esp, eax);
    PUSH32(esp, 0); sub_00470A00(); /* call 0x00470A00 */

loc_002AD1DA: ;
    PUSH32(esp, ebx);
    PUSH32(esp, 0x898);
    PUSH32(esp, edx);
    PUSH32(esp, eax);
    PUSH32(esp, 0); sub_00470D50(); /* call 0x00470D50 */

loc_002AD1E7: ;
    MEM32(esp + 0xC) = eax;
    MEM32(esp + 0x10) = edx;
    fp_push((double)SMEM32(esp + 0xC)); /* fild */
    POP32(esp, edi);
    POP32(esp, ebp);
    POP32(esp, ebx);
    fp_st1() *= fp_top(); fp_pop(); /* fmul */
    MEMF(esi + 0x70) = (float)fp_top(); fp_popp(); /* fstp */
    esp = esp + 8;
    esp += 12; return; /* ret 8 */

    #undef fp_push
    #undef fp_pop
    #undef fp_popp
    #undef fp_top
    #undef fp_st1
}

/**
 * sub_002AD240
 * Original: 0x002AD240 - 0x002AD3AF (367 bytes, 110 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_002AD240(void)
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

loc_002AD240: ;
    esp = esp - 0x34;
    PUSH32(esp, edi);
    edi = ecx;
    MEM32(esp + 0xC) = edi;
    /* TODO: rdtsc  */
    PUSH32(esp, 0);
    PUSH32(esp, 3);
    PUSH32(esp, edx);
    PUSH32(esp, eax);
    PUSH32(esp, 0); sub_00470A00(); /* call 0x00470A00 */

loc_002AD257: ;
    PUSH32(esp, 0);
    PUSH32(esp, 0x898);
    PUSH32(esp, edx);
    PUSH32(esp, eax);
    PUSH32(esp, 0); sub_00470D50(); /* call 0x00470D50 */

loc_002AD265: ;
    MEM32(esp + 4) = eax;
    SET_LO8(eax, MEM8(edi + 0xB4));
    (void)0; /* test LO8(eax), LO8(eax) - flags set for next jcc */
    MEM32(esp + 8) = edx;
    fp_push((double)SMEM32(esp + 4)); /* fild */
    fp_st1() *= fp_top(); fp_pop(); /* fmul */
    fp_st1() -= fp_top(); fp_pop(); /* fsub */
    MEMF(esp + 4) = (float)fp_top(); fp_popp(); /* fstp */
    xmm1 = MEMF(esp + 4); /* movss */
    if (TEST_NZ(LO8(eax), LO8(eax))) goto loc_002AD2C5; /* jne: not equal / not zero */

loc_002AD28E: ;
    xmm0 = xmm1; /* movaps */
    xmm0 = xmm0 / MEMF(esp + 0x3C); /* divss */
    xmm0 = xmm0 * MEMF(0x648E2C); /* mulss */
    /* comiss xmm0, MEMF(0x648D14) - sets EFLAGS */
    MEMF(esp + 0x3C) = xmm0; /* movss */
    if ((xmm0 < MEMF(0x648D14))) goto loc_002AD2E5; /* jb: below (unsigned <) */

loc_002AD2AE: ;
    SET_LO8(eax, MEM8(0x84A16C));
    if (TEST_NZ(LO8(eax), LO8(eax))) goto loc_002AD2E5; /* jne: not equal / not zero */

loc_002AD2B7: ;
    MEM8(edi + 0x84) = 1;
    POP32(esp, edi);
    esp = esp + 0x34;
    esp += 8; return; /* ret 4 */

loc_002AD2C5: ;
    eax = MEM32(edi + 0x7C);
    eax = eax - 0x58;
    /* comiss xmm1, MEMF(eax) - sets EFLAGS */
    MEMF(esp + 0x3C) = xmm1; /* movss */
    if ((xmm1 <= MEMF(eax))) goto loc_002AD2DF; /* jbe: below or equal (unsigned <=) */

loc_002AD2D6: ;
    SET_LO8(eax, MEM8(0x84A16C));
    if (TEST_Z(LO8(eax), LO8(eax))) goto loc_002AD2B7; /* je: equal / zero */

loc_002AD2DF: ;
    xmm0 = MEMF(esp + 0x3C); /* movss */

loc_002AD2E5: ;
    if (CMP_NE(MEM32(0x84A170), 8)) goto loc_002AD2F7; /* jne: not equal / not zero */

loc_002AD2EE: ;
    MEMF(esp + 0x3C) = xmm1; /* movss */
    xmm0 = xmm1; /* movaps */

loc_002AD2F7: ;
    xmm2 = 0.0f; /* xorps self = zero */
    /* comiss xmm0, xmm2 - sets EFLAGS */
    if ((xmm0 > xmm2)) goto loc_002AD308; /* ja: above (unsigned >) */

loc_002AD2FF: ;
    MEMF(esp + 0x3C) = xmm2; /* movss */
    xmm0 = xmm2; /* movaps */

loc_002AD308: ;
    eax = MEM32(edi + 0x7C);
    PUSH32(esp, ebp);
    ebp = MEM32(edi + 0x78);
    if (CMP_EQ(ebp, eax)) goto loc_002AD3A7; /* je: equal / zero */

loc_002AD317: ;
    PUSH32(esp, ebx);
    PUSH32(esp, esi);
    goto loc_002AD330;

loc_002AD31B: ;
    xmm0 = MEMF(esp + 0x48); /* movss */
    xmm2 = MEMF(esp + 0x10); /* movss */
    edi = MEM32(esp + 0x18);
    goto loc_002AD330;

    /* nop */

loc_002AD330: ;
    xmm1 = MEMF(ebp); /* movss */
    /* comiss xmm1, xmm0 - sets EFLAGS */
    eax = ebp;
    ebx = esp + 0x1C;
    if ((xmm1 >= xmm0)) goto loc_002AD37A; /* jae: above or equal (unsigned >=) */

loc_002AD340: ;
    xmm0 = xmm1; /* movaps */
    PUSH32(esp, 0x3F800000);
    MEMF(esp + 0x14) = xmm0; /* movss */
    PUSH32(esp, 0); sub_002AC6E0(); /* call 0x002AC6E0 */

loc_002AD353: ;
    edi = edi + 0x88;
    esi = eax;
    eax = MEM32(esp + 0x18);
    ecx = 0xA;
    memcpy((void*)XBOX_PTR(edi), (void*)XBOX_PTR(esi), ecx * 4);
    esi += ecx * 4; edi += ecx * 4; ecx = 0; /* rep movsd */
    ecx = MEM32(eax + 0x7C);
    ebp = ebp + 0x58;
    if (CMP_NE(ebp, ecx)) goto loc_002AD31B; /* jne: not equal / not zero */

loc_002AD370: ;
    POP32(esp, esi);
    POP32(esp, ebx);
    POP32(esp, ebp);
    POP32(esp, edi);
    esp = esp + 0x34;
    esp += 8; return; /* ret 4 */

loc_002AD37A: ;
    xmm1 = MEMF(ebp); /* movss */
    xmm0 = xmm0 - xmm2; /* subss */
    xmm1 = xmm1 - xmm2; /* subss */
    PUSH32(esp, ecx);
    xmm0 = xmm0 / xmm1; /* divss */
    MEMF(esp) = xmm0; /* movss */
    PUSH32(esp, 0); sub_002AC6E0(); /* call 0x002AC6E0 */

loc_002AD396: ;
    edi = edi + 0x88;
    ecx = 0xA;
    esi = eax;
    memcpy((void*)XBOX_PTR(edi), (void*)XBOX_PTR(esi), ecx * 4);
    esi += ecx * 4; edi += ecx * 4; ecx = 0; /* rep movsd */
    POP32(esp, esi);
    POP32(esp, ebx);

loc_002AD3A7: ;
    POP32(esp, ebp);
    POP32(esp, edi);
    esp = esp + 0x34;
    esp += 8; return; /* ret 4 */

    #undef fp_push
    #undef fp_pop
    #undef fp_popp
    #undef fp_top
    #undef fp_st1
}

/**
 * sub_002AD3B0
 * Original: 0x002AD3B0 - 0x002AD44C (156 bytes, 51 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_002AD3B0(void)
{
    int _flags = 0; /* fallback flag var */

loc_002AD3B0: ;
    PUSH32(esp, 0); sub_002AC820(); /* call 0x002AC820 */

loc_002AD3B5: ;
    SET_LO8(ecx, MEM8(eax + 0x84));
    if (TEST_Z(LO8(ecx), LO8(ecx))) goto loc_002AD3C3; /* je: equal / zero */

loc_002AD3BF: ;
    if (TEST_Z(LO8(ebx), LO8(ebx))) goto loc_002AD3D5; /* je: equal / zero */

loc_002AD3C3: ;
    eax = MEM32(0x84A160);
    PUSH32(esp, eax);
    PUSH32(esp, 0); sub_002AC820(); /* call 0x002AC820 */

loc_002AD3CE: ;
    ecx = eax;
    PUSH32(esp, 0); sub_002AD240(); /* call 0x002AD240 */

loc_002AD3D5: ;
    PUSH32(esp, 0); sub_002AC820(); /* call 0x002AC820 */

loc_002AD3DA: ;
    SET_LO8(ecx, MEM8(eax + 0x84));
    if (TEST_Z(LO8(ecx), LO8(ecx))) goto loc_002AD3E8; /* je: equal / zero */

loc_002AD3E4: ;
    if (TEST_Z(LO8(ebx), LO8(ebx))) goto loc_002AD44B; /* je: equal / zero */

loc_002AD3E8: ;
    if (CMP_NE(MEM32(0x84A170), 8)) goto loc_002AD3FB; /* jne: not equal / not zero */

loc_002AD3F1: ;
    PUSH32(esp, 0); sub_002AC820(); /* call 0x002AC820 */

loc_002AD3F6: ;
    PUSH32(esp, 0); sub_002AD450(); /* call 0x002AD450 */

loc_002AD3FB: ;
    PUSH32(esp, esi);
    PUSH32(esp, edi);
    PUSH32(esp, 0); sub_002AC820(); /* call 0x002AC820 */

loc_002AD402: ;
    esi = eax;
    edi = esi;
    PUSH32(esp, 0); sub_002ACA70(); /* call 0x002ACA70 */

loc_002AD40B: ;
    edi = esi + 0x88;
    PUSH32(esp, esi);
    PUSH32(esp, 0); sub_002ACB20(); /* call 0x002ACB20 */

loc_002AD417: ;
    ecx = MEM32(esi + 0x1C);
    edx = MEM32(esi + 0x18);
    PUSH32(esp, ecx);
    PUSH32(esp, edx);
    PUSH32(esp, 0); sub_00538E00(); /* call 0x00538E00 */

loc_002AD424: ;
    eax = MEM32(esi + 0x18);
    PUSH32(esp, eax);
    PUSH32(esp, 0); sub_0053B870(); /* call 0x0053B870 */

loc_002AD42D: ;
    esi = MEM32(esi + 0x1C);
    if (TEST_Z(esi, esi)) goto loc_002AD43A; /* je: equal / zero */

loc_002AD434: ;
    PUSH32(esp, esi);
    PUSH32(esp, 0); sub_0053B870(); /* call 0x0053B870 */

loc_002AD43A: ;
    PUSH32(esp, 0);
    PUSH32(esp, 0); sub_0053BEA0(); /* call 0x0053BEA0 */

loc_002AD441: ;
    PUSH32(esp, 4);
    PUSH32(esp, eax);
    PUSH32(esp, 0); sub_0053C190(); /* call 0x0053C190 */

loc_002AD449: ;
    POP32(esp, edi);
    POP32(esp, esi);

loc_002AD44B: ;
    esp += 4; return; /* ret */

}

/**
 * sub_002AD450
 * Original: 0x002AD450 - 0x002AD709 (697 bytes, 157 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_002AD450(void)
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

loc_002AD450: ;
    esp = esp - 0xC;
    xmm1 = MEMF(0x84A168); /* movss */
    xmm3 = MEMF(0x84A164); /* movss */
    xmm2 = MEMF(0x64A750); /* movss */
    MEMF(esp) = xmm1; /* movss */
    xmm0 = xmm3; /* movaps */
    xmm0 = xmm0 * xmm2; /* mulss */
    xmm1 = xmm1 * xmm2; /* mulss */
    /* comiss xmm0, xmm1 - sets EFLAGS */
    MEMF(esp + 8) = xmm0; /* movss */
    MEMF(esp + 4) = xmm1; /* movss */
    if ((xmm0 <= xmm1)) goto loc_002AD497; /* jbe: below or equal (unsigned <=) */

loc_002AD48C: ;
    MEMF(esp + 4) = xmm0; /* movss */
    MEMF(esp) = xmm3; /* movss */

loc_002AD497: ;
    fp_push(MEMF(0x84A164)); /* fld float */
    PUSH32(esp, ebx);
    fp_st1() *= fp_top(); fp_pop(); /* fmul */
    PUSH32(esp, esi);
    fp_push(MEMF(0x84A164)); /* fld float */
    PUSH32(esp, edi);
    fp_st1() *= fp_top(); fp_pop(); /* fmul */
    fp_st1() += fp_top(); fp_pop(); /* fadd */
    PUSH32(esp, 0); sub_00471288(); /* call 0x00471288 */

loc_002AD4BD: ;
    fp_push(MEMF(0x64A74C)); /* fld float */
    fp_st1() += fp_top(); fp_pop(); /* fadd */
    ebx = 0; /* xor self */
    SET_HI8(ebx, LO8(eax));
    PUSH32(esp, 0); sub_00471288(); /* call 0x00471288 */

loc_002AD4CE: ;
    fp_push(MEMF(0x64A4A8)); /* fld float */
    SET_LO8(ebx, LO8(eax));
    fp_st1() += fp_top(); fp_pop(); /* fadd */
    ebx = ebx << 8;
    PUSH32(esp, 0); sub_00471288(); /* call 0x00471288 */

loc_002AD4E0: ;
    fp_st1() += fp_top(); fp_pop(); /* fadd */
    eax = ZX8(LO8(eax));
    ebx = ebx | eax;
    ebx = ebx << 8;
    PUSH32(esp, 0); sub_00471288(); /* call 0x00471288 */

loc_002AD4F3: ;
    ecx = ZX8(LO8(eax));
    fp_push(MEMF(esp + 0xC)); /* fld float */
    fp_st1() *= fp_top(); fp_pop(); /* fmul */
    ebx = ebx | ecx;
    fp_push(MEMF(esp + 0xC)); /* fld float */
    edi = ebx;
    fp_st1() *= fp_top(); fp_pop(); /* fmul */
    fp_st1() += fp_top(); fp_pop(); /* fadd */
    PUSH32(esp, 0); sub_00471288(); /* call 0x00471288 */

loc_002AD519: ;
    fp_push(MEMF(0x64A74C)); /* fld float */
    fp_st1() += fp_top(); fp_pop(); /* fadd */
    ebx = 0; /* xor self */
    SET_HI8(ebx, LO8(eax));
    PUSH32(esp, 0); sub_00471288(); /* call 0x00471288 */

loc_002AD52A: ;
    fp_push(MEMF(0x64A4A8)); /* fld float */
    SET_LO8(ebx, LO8(eax));
    fp_st1() += fp_top(); fp_pop(); /* fadd */
    ebx = ebx << 8;
    PUSH32(esp, 0); sub_00471288(); /* call 0x00471288 */

loc_002AD53C: ;
    fp_st1() += fp_top(); fp_pop(); /* fadd */
    edx = ZX8(LO8(eax));
    ebx = ebx | edx;
    ebx = ebx << 8;
    PUSH32(esp, 0); sub_00471288(); /* call 0x00471288 */

loc_002AD54F: ;
    ecx = MEM32(0x6B83F4);
    eax = ZX8(LO8(eax));
    PUSH32(esp, ecx);
    ebx = ebx | eax;
    PUSH32(esp, 0); sub_00536930(); /* call 0x00536930 */

loc_002AD560: ;
    eax = 0; /* xor self */
    PUSH32(esp, 0); sub_00538690(); /* call 0x00538690 */

loc_002AD567: ;
    PUSH32(esp, 0);
    eax = 0; /* xor self */
    PUSH32(esp, 0); sub_00539960(); /* call 0x00539960 */

loc_002AD570: ;
    edx = MEM32(0x5499F0);
    edx = edx | 0x800;
    eax = 2;
    MEM32(0x5499F0) = edx;
    edx = 1;
    ecx = 0x40304;
    MEM32(0x547360) = eax;
    MEM32(0x547368) = 0;
    MEM32(0x547370) = eax;
    MEM32(0x547378) = 0;
    PUSH32(esp, 0); sub_00537990(); /* call 0x00537990 */

loc_002AD5B4: ;
    edx = 0; /* xor self */
    ecx = 0x40300;
    MEM32(0x549AE4) = 1;
    PUSH32(esp, 0); sub_00537990(); /* call 0x00537990 */

loc_002AD5CA: ;
    edx = 0x302;
    ecx = 0x40344;
    MEM32(0x549AE8) = 0;
    PUSH32(esp, 0); sub_00537990(); /* call 0x00537990 */

loc_002AD5E3: ;
    MEM32(0x549AF0) = 0x302;
    edx = 0x303;
    ecx = 0x40348;
    PUSH32(esp, 0); sub_00537990(); /* call 0x00537990 */

loc_002AD5FC: ;
    esi = 0x15;
    MEM32(0x549AF4) = 0x303;
    PUSH32(esp, 0); sub_0053C660(); /* call 0x0053C660 */

loc_002AD610: ;
    MEM32(eax) = 0x417FC;
    MEM32(eax + 4) = 8;
    xmm3 = MEMF(0x649468); /* movss */
    xmm1 = MEMF(esp + 0x14); /* movss */
    xmm4 = MEMF(0x64A748); /* movss */
    xmm0 = MEMF(0x648D80); /* movss */
    eax = eax + 4;
    MEM32(eax + 4) = 0x40401818;
    eax = eax + 4;
    xmm2 = MEMF(esp + 0x10); /* movss */
    eax = eax + 4;
    eax = eax + 4;
    eax = eax + 4;
    eax = eax + 4;
    eax = eax + 4;
    xmm1 = xmm1 + xmm3; /* addss */
    MEMF(eax + -16) = xmm1; /* movss */
    MEMF(eax + -12) = xmm4; /* movss */
    MEMF(eax + -8) = xmm0; /* movss */
    MEM32(eax + -4) = edi;
    eax = eax + 4;
    eax = eax + 4;
    eax = eax + 4;
    xmm2 = xmm2 + xmm3; /* addss */
    MEMF(eax + -12) = xmm2; /* movss */
    MEMF(eax + -8) = xmm4; /* movss */
    MEMF(eax + -4) = xmm0; /* movss */
    MEM32(eax) = ebx;
    MEMF(eax + 4) = xmm2; /* movss */
    xmm2 = MEMF(0x64A744); /* movss */
    eax = eax + 4;
    MEMF(eax + 4) = xmm2; /* movss */
    eax = eax + 4;
    MEMF(eax + 4) = xmm0; /* movss */
    eax = eax + 4;
    MEM32(eax + 4) = ebx;
    edx = MEM32(0x5499E8);
    eax = eax + 4;
    MEMF(eax + 4) = xmm1; /* movss */
    eax = eax + 4;
    MEMF(eax + 4) = xmm2; /* movss */
    eax = eax + 4;
    MEMF(eax + 4) = xmm0; /* movss */
    xmm0 = MEMF(0x84A168); /* movss */
    eax = eax + 4;
    MEM32(eax + 4) = edi;
    eax = eax + 4;
    eax = eax + 4;
    MEM32(eax) = 0x417FC;
    eax = eax + 4;
    POP32(esp, edi);
    MEM32(eax) = 0;
    eax = eax + 4;
    POP32(esp, esi);
    MEM32(edx) = eax;
    MEMF(0x84A164) = xmm0; /* movss */
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
 * sub_002AD710
 * Original: 0x002AD710 - 0x002AD7C7 (183 bytes, 39 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_002AD710(void)
{
    float xmm0, xmm1;

loc_002AD710: ;
    esp = esp - 0xA8;
    xmm0 = MEMF(0x648D14); /* movss */
    xmm1 = 0.0f; /* xorps self = zero */
    PUSH32(esp, esi);
    PUSH32(esp, edi);
    MEMF(esp + 0xC) = xmm1; /* movss */
    MEMF(esp + 8) = xmm1; /* movss */
    MEMF(esp + 0x14) = xmm0; /* movss */
    MEMF(esp + 0x10) = xmm0; /* movss */
    MEMF(esp + 0x28) = xmm1; /* movss */
    MEMF(esp + 0x2C) = xmm1; /* movss */
    MEMF(esp + 0x18) = xmm0; /* movss */
    MEMF(esp + 0x1C) = xmm0; /* movss */
    MEMF(esp + 0x20) = xmm0; /* movss */
    MEMF(esp + 0x24) = xmm0; /* movss */
    ecx = 0xA;
    esi = esp + 8;
    edi = esp + 0x30;
    memcpy((void*)XBOX_PTR(edi), (void*)XBOX_PTR(esi), ecx * 4);
    esi += ecx * 4; edi += ecx * 4; ecx = 0; /* rep movsd */
    MEMF(esp + 0x58) = xmm0; /* movss */
    MEM32(esp + 0x5C) = 0;
    ecx = 0xA;
    esi = esp + 8;
    edi = esp + 0x60;
    memcpy((void*)XBOX_PTR(edi), (void*)XBOX_PTR(esi), ecx * 4);
    esi += ecx * 4; edi += ecx * 4; ecx = 0; /* rep movsd */
    MEMF(esp + 0x40) = xmm1; /* movss */
    MEMF(esp + 0x44) = xmm1; /* movss */
    MEMF(esp + 0x48) = xmm1; /* movss */
    MEMF(esp + 0x4C) = xmm0; /* movss */
    ecx = 0xA;
    esi = esp + 0x30;
    edi = esp + 0x88;
    memcpy((void*)XBOX_PTR(edi), (void*)XBOX_PTR(esi), ecx * 4);
    esi += ecx * 4; edi += ecx * 4; ecx = 0; /* rep movsd */
    ecx = esp + 0x58;
    PUSH32(esp, 0); sub_002AE220(); /* call 0x002AE220 */

loc_002AD7BE: ;
    POP32(esp, edi);
    POP32(esp, esi);
    esp = esp + 0xA8;
    esp += 4; return; /* ret */

}

/**
 * sub_002AD7D0
 * Original: 0x002AD7D0 - 0x002AD8A1 (209 bytes, 43 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_002AD7D0(void)
{
    float xmm0, xmm1, xmm2;

loc_002AD7D0: ;
    esp = esp - 0xA8;
    xmm0 = MEMF(0x648D14); /* movss */
    xmm1 = 0.0f; /* xorps self = zero */
    xmm2 = MEMF(0x648CF0); /* movss */
    PUSH32(esp, esi);
    PUSH32(esp, edi);
    MEMF(esp + 0xC) = xmm1; /* movss */
    MEMF(esp + 8) = xmm1; /* movss */
    MEMF(esp + 0x14) = xmm0; /* movss */
    MEMF(esp + 0x10) = xmm0; /* movss */
    MEMF(esp + 0x28) = xmm1; /* movss */
    MEMF(esp + 0x2C) = xmm1; /* movss */
    MEMF(esp + 0x18) = xmm0; /* movss */
    MEMF(esp + 0x1C) = xmm0; /* movss */
    MEMF(esp + 0x20) = xmm0; /* movss */
    MEMF(esp + 0x24) = xmm0; /* movss */
    ecx = 0xA;
    esi = esp + 8;
    edi = esp + 0x30;
    memcpy((void*)XBOX_PTR(edi), (void*)XBOX_PTR(esi), ecx * 4);
    esi += ecx * 4; edi += ecx * 4; ecx = 0; /* rep movsd */
    MEMF(esp + 0x58) = xmm0; /* movss */
    MEM32(esp + 0x5C) = 0;
    ecx = 0xA;
    esi = esp + 8;
    edi = esp + 0x60;
    memcpy((void*)XBOX_PTR(edi), (void*)XBOX_PTR(esi), ecx * 4);
    esi += ecx * 4; edi += ecx * 4; ecx = 0; /* rep movsd */
    MEMF(esp + 0x3C) = xmm2; /* movss */
    MEMF(esp + 0x38) = xmm2; /* movss */
    MEMF(esp + 0x40) = xmm1; /* movss */
    MEMF(esp + 0x44) = xmm1; /* movss */
    MEMF(esp + 0x48) = xmm1; /* movss */
    MEMF(esp + 0x4C) = xmm0; /* movss */
    MEMF(esp + 0x54) = xmm0; /* movss */
    ecx = 0xA;
    esi = esp + 0x30;
    edi = esp + 0x88;
    memcpy((void*)XBOX_PTR(edi), (void*)XBOX_PTR(esi), ecx * 4);
    esi += ecx * 4; edi += ecx * 4; ecx = 0; /* rep movsd */
    ecx = esp + 0x58;
    PUSH32(esp, 0); sub_002AE220(); /* call 0x002AE220 */

loc_002AD898: ;
    POP32(esp, edi);
    POP32(esp, esi);
    esp = esp + 0xA8;
    esp += 4; return; /* ret */

}

/**
 * sub_002AD8B0
 * Original: 0x002AD8B0 - 0x002ADA69 (441 bytes, 85 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_002AD8B0(void)
{
    float xmm0, xmm1, xmm2;

loc_002AD8B0: ;
    esp = esp - 0xF8;
    xmm0 = MEMF(0x648D14); /* movss */
    xmm1 = 0.0f; /* xorps self = zero */
    xmm2 = MEMF(0x648D20); /* movss */
    PUSH32(esp, esi);
    PUSH32(esp, edi);
    MEMF(esp + 0x14) = xmm0; /* movss */
    MEMF(esp + 0x10) = xmm0; /* movss */
    MEMF(esp + 0x18) = xmm0; /* movss */
    MEMF(esp + 0x1C) = xmm0; /* movss */
    MEMF(esp + 0x20) = xmm0; /* movss */
    MEMF(esp + 0x24) = xmm0; /* movss */
    MEMF(esp + 0xC) = xmm1; /* movss */
    MEMF(esp + 8) = xmm1; /* movss */
    MEMF(esp + 0x28) = xmm1; /* movss */
    MEMF(esp + 0x2C) = xmm1; /* movss */
    ecx = 0xA;
    esi = esp + 8;
    edi = esp + 0x30;
    memcpy((void*)XBOX_PTR(edi), (void*)XBOX_PTR(esi), ecx * 4);
    esi += ecx * 4; edi += ecx * 4; ecx = 0; /* rep movsd */
    MEMF(esp + 0x3C) = xmm0; /* movss */
    MEMF(esp + 0x38) = xmm0; /* movss */
    MEMF(esp + 0x54) = xmm0; /* movss */
    MEMF(esp + 0x30) = xmm1; /* movss */
    MEMF(esp + 0x34) = xmm1; /* movss */
    ecx = 0xA;
    esi = esp + 0x30;
    edi = esp + 0xB0;
    memcpy((void*)XBOX_PTR(edi), (void*)XBOX_PTR(esi), ecx * 4);
    esi += ecx * 4; edi += ecx * 4; ecx = 0; /* rep movsd */
    MEMF(esp + 0xBC) = xmm2; /* movss */
    MEMF(esp + 0xB8) = xmm2; /* movss */
    ecx = 0xA;
    esi = esp + 0xB0;
    edi = esp + 0xD8;
    memcpy((void*)XBOX_PTR(edi), (void*)XBOX_PTR(esi), ecx * 4);
    esi += ecx * 4; edi += ecx * 4; ecx = 0; /* rep movsd */
    MEMF(esp + 0xF4) = xmm0; /* movss */
    xmm0 = MEMF(0x648EA8); /* movss */
    MEMF(esp + 0x58) = xmm0; /* movss */
    MEM32(esp + 0x5C) = 1;
    ecx = 0xA;
    esi = esp + 8;
    edi = esp + 0x60;
    memcpy((void*)XBOX_PTR(edi), (void*)XBOX_PTR(esi), ecx * 4);
    esi += ecx * 4; edi += ecx * 4; ecx = 0; /* rep movsd */
    ecx = 0xA;
    esi = esp + 0x30;
    edi = esp + 0x88;
    memcpy((void*)XBOX_PTR(edi), (void*)XBOX_PTR(esi), ecx * 4);
    esi += ecx * 4; edi += ecx * 4; ecx = 0; /* rep movsd */
    ecx = esp + 0x58;
    eax = ebx;
    MEMF(esp + 0xE8) = xmm1; /* movss */
    MEMF(esp + 0xEC) = xmm1; /* movss */
    MEMF(esp + 0xF0) = xmm1; /* movss */
    PUSH32(esp, 0); sub_002AE220(); /* call 0x002AE220 */

loc_002AD9D3: ;
    xmm0 = MEMF(0x648D40); /* movss */
    MEMF(esp + 0x58) = xmm0; /* movss */
    MEM32(esp + 0x5C) = 3;
    ecx = 0xA;
    esi = esp + 0x30;
    edi = esp + 0x60;
    memcpy((void*)XBOX_PTR(edi), (void*)XBOX_PTR(esi), ecx * 4);
    esi += ecx * 4; edi += ecx * 4; ecx = 0; /* rep movsd */
    ecx = 0xA;
    esi = esp + 0xB0;
    edi = esp + 0x88;
    memcpy((void*)XBOX_PTR(edi), (void*)XBOX_PTR(esi), ecx * 4);
    esi += ecx * 4; edi += ecx * 4; ecx = 0; /* rep movsd */
    ecx = esp + 0x58;
    eax = ebx;
    PUSH32(esp, 0); sub_002AE220(); /* call 0x002AE220 */

loc_002ADA18: ;
    xmm0 = MEMF(0x648D14); /* movss */
    MEMF(esp + 0x58) = xmm0; /* movss */
    MEM32(esp + 0x5C) = 3;
    ecx = 0xA;
    esi = esp + 0xB0;
    edi = esp + 0x60;
    memcpy((void*)XBOX_PTR(edi), (void*)XBOX_PTR(esi), ecx * 4);
    esi += ecx * 4; edi += ecx * 4; ecx = 0; /* rep movsd */
    ecx = 0xA;
    esi = esp + 0xD8;
    edi = esp + 0x88;
    memcpy((void*)XBOX_PTR(edi), (void*)XBOX_PTR(esi), ecx * 4);
    esi += ecx * 4; edi += ecx * 4; ecx = 0; /* rep movsd */
    ecx = esp + 0x58;
    eax = ebx;
    PUSH32(esp, 0); sub_002AE220(); /* call 0x002AE220 */

loc_002ADA60: ;
    POP32(esp, edi);
    POP32(esp, esi);
    esp = esp + 0xF8;
    esp += 4; return; /* ret */

}

/**
 * sub_002ADA70
 * Original: 0x002ADA70 - 0x002ADBD4 (356 bytes, 68 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_002ADA70(void)
{
    float xmm0, xmm1, xmm2;

loc_002ADA70: ;
    esp = esp - 0xD0;
    xmm0 = 0.0f; /* xorps self = zero */
    xmm1 = MEMF(0x648D14); /* movss */
    xmm2 = MEMF(0x648CF0); /* movss */
    PUSH32(esp, esi);
    PUSH32(esp, edi);
    MEMF(esp + 0xC) = xmm0; /* movss */
    MEMF(esp + 8) = xmm0; /* movss */
    MEMF(esp + 0x28) = xmm0; /* movss */
    MEMF(esp + 0x2C) = xmm0; /* movss */
    MEMF(esp + 0x14) = xmm1; /* movss */
    MEMF(esp + 0x10) = xmm1; /* movss */
    MEMF(esp + 0x18) = xmm1; /* movss */
    MEMF(esp + 0x1C) = xmm1; /* movss */
    MEMF(esp + 0x20) = xmm1; /* movss */
    MEMF(esp + 0x24) = xmm1; /* movss */
    ecx = 0xA;
    esi = esp + 8;
    edi = esp + 0x58;
    memcpy((void*)XBOX_PTR(edi), (void*)XBOX_PTR(esi), ecx * 4);
    esi += ecx * 4; edi += ecx * 4; ecx = 0; /* rep movsd */
    MEMF(esp + 0x7C) = xmm1; /* movss */
    MEMF(esp + 0x64) = xmm2; /* movss */
    MEMF(esp + 0x60) = xmm2; /* movss */
    ecx = 0xA;
    esi = esp + 0x58;
    edi = esp + 0x30;
    memcpy((void*)XBOX_PTR(edi), (void*)XBOX_PTR(esi), ecx * 4);
    esi += ecx * 4; edi += ecx * 4; ecx = 0; /* rep movsd */
    MEMF(esp + 0x30) = xmm0; /* movss */
    MEMF(esp + 0x34) = xmm0; /* movss */
    MEMF(esp + 0x40) = xmm0; /* movss */
    MEMF(esp + 0x44) = xmm0; /* movss */
    MEMF(esp + 0x48) = xmm0; /* movss */
    xmm0 = MEMF(0x648CE0); /* movss */
    MEMF(esp + 0x3C) = xmm0; /* movss */
    MEMF(esp + 0x38) = xmm0; /* movss */
    xmm0 = MEMF(0x648EA8); /* movss */
    MEMF(esp + 0x80) = xmm0; /* movss */
    MEM32(esp + 0x84) = 0;
    ecx = 0xA;
    esi = esp + 8;
    edi = esp + 0x88;
    memcpy((void*)XBOX_PTR(edi), (void*)XBOX_PTR(esi), ecx * 4);
    esi += ecx * 4; edi += ecx * 4; ecx = 0; /* rep movsd */
    ecx = 0xA;
    esi = esp + 0x58;
    edi = esp + 0xB0;
    memcpy((void*)XBOX_PTR(edi), (void*)XBOX_PTR(esi), ecx * 4);
    esi += ecx * 4; edi += ecx * 4; ecx = 0; /* rep movsd */
    ecx = esp + 0x80;
    eax = ebx;
    MEMF(esp + 0x4C) = xmm1; /* movss */
    PUSH32(esp, 0); sub_002AE220(); /* call 0x002AE220 */

loc_002ADB7D: ;
    xmm0 = MEMF(0x648D14); /* movss */
    MEMF(esp + 0x80) = xmm0; /* movss */
    MEM32(esp + 0x84) = 0;
    ecx = 0xA;
    esi = esp + 0x58;
    edi = esp + 0x88;
    memcpy((void*)XBOX_PTR(edi), (void*)XBOX_PTR(esi), ecx * 4);
    esi += ecx * 4; edi += ecx * 4; ecx = 0; /* rep movsd */
    ecx = 0xA;
    esi = esp + 0x30;
    edi = esp + 0xB0;
    memcpy((void*)XBOX_PTR(edi), (void*)XBOX_PTR(esi), ecx * 4);
    esi += ecx * 4; edi += ecx * 4; ecx = 0; /* rep movsd */
    ecx = esp + 0x80;
    eax = ebx;
    PUSH32(esp, 0); sub_002AE220(); /* call 0x002AE220 */

loc_002ADBCB: ;
    POP32(esp, edi);
    POP32(esp, esi);
    esp = esp + 0xD0;
    esp += 4; return; /* ret */

}

/**
 * sub_002ADBE0
 * Original: 0x002ADBE0 - 0x002ADDEA (522 bytes, 98 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_002ADBE0(void)
{
    float xmm0, xmm1;

loc_002ADBE0: ;
    esp = esp - 0xD0;
    xmm0 = 0.0f; /* xorps self = zero */
    xmm1 = MEMF(0x648D14); /* movss */
    PUSH32(esp, esi);
    PUSH32(esp, edi);
    MEMF(esp + 0x5C) = xmm0; /* movss */
    MEMF(esp + 0x58) = xmm0; /* movss */
    MEMF(esp + 0x64) = xmm1; /* movss */
    MEMF(esp + 0x60) = xmm1; /* movss */
    MEMF(esp + 0x78) = xmm0; /* movss */
    MEMF(esp + 0x7C) = xmm0; /* movss */
    MEMF(esp + 0x68) = xmm1; /* movss */
    MEMF(esp + 0x6C) = xmm1; /* movss */
    MEMF(esp + 0x70) = xmm1; /* movss */
    MEMF(esp + 0x74) = xmm1; /* movss */
    ecx = 0xA;
    esi = esp + 0x58;
    edi = esp + 8;
    memcpy((void*)XBOX_PTR(edi), (void*)XBOX_PTR(esi), ecx * 4);
    esi += ecx * 4; edi += ecx * 4; ecx = 0; /* rep movsd */
    MEMF(esp + 0x28) = xmm1; /* movss */
    MEMF(esp + 0x18) = xmm0; /* movss */
    MEMF(esp + 0x1C) = xmm0; /* movss */
    MEMF(esp + 0x20) = xmm0; /* movss */
    MEMF(esp + 0x24) = xmm1; /* movss */
    MEMF(esp + 0x14) = xmm1; /* movss */
    MEMF(esp + 0x10) = xmm1; /* movss */
    ecx = 0xA;
    esi = esp + 8;
    edi = esp + 0x30;
    memcpy((void*)XBOX_PTR(edi), (void*)XBOX_PTR(esi), ecx * 4);
    esi += ecx * 4; edi += ecx * 4; ecx = 0; /* rep movsd */
    MEMF(esp + 0x28) = xmm0; /* movss */
    MEMF(esp + 0x40) = xmm0; /* movss */
    MEMF(esp + 0x44) = xmm0; /* movss */
    MEMF(esp + 0x48) = xmm0; /* movss */
    xmm0 = MEMF(0x648EB0); /* movss */
    MEMF(esp + 0x80) = xmm0; /* movss */
    MEM32(esp + 0x84) = 1;
    ecx = 0xA;
    esi = esp + 0x58;
    edi = esp + 0x88;
    memcpy((void*)XBOX_PTR(edi), (void*)XBOX_PTR(esi), ecx * 4);
    esi += ecx * 4; edi += ecx * 4; ecx = 0; /* rep movsd */
    ecx = 0xA;
    esi = esp + 8;
    edi = esp + 0xB0;
    MEMF(esp + 0x4C) = xmm1; /* movss */
    xmm1 = MEMF(0x649D7C); /* movss */
    memcpy((void*)XBOX_PTR(edi), (void*)XBOX_PTR(esi), ecx * 4);
    esi += ecx * 4; edi += ecx * 4; ecx = 0; /* rep movsd */
    ecx = esp + 0x80;
    eax = ebx;
    MEMF(esp + 0x3C) = xmm1; /* movss */
    MEMF(esp + 0x38) = xmm1; /* movss */
    PUSH32(esp, 0); sub_002AE220(); /* call 0x002AE220 */

loc_002ADCF7: ;
    xmm0 = MEMF(0x648F58); /* movss */
    MEMF(esp + 0x80) = xmm0; /* movss */
    MEM32(esp + 0x84) = 0;
    ecx = 0xA;
    esi = esp + 8;
    edi = esp + 0x88;
    memcpy((void*)XBOX_PTR(edi), (void*)XBOX_PTR(esi), ecx * 4);
    esi += ecx * 4; edi += ecx * 4; ecx = 0; /* rep movsd */
    ecx = 0xA;
    esi = esp + 0x30;
    edi = esp + 0xB0;
    memcpy((void*)XBOX_PTR(edi), (void*)XBOX_PTR(esi), ecx * 4);
    esi += ecx * 4; edi += ecx * 4; ecx = 0; /* rep movsd */
    ecx = esp + 0x80;
    eax = ebx;
    PUSH32(esp, 0); sub_002AE220(); /* call 0x002AE220 */

loc_002ADD45: ;
    xmm0 = MEMF(0x6490A0); /* movss */
    MEMF(esp + 0x80) = xmm0; /* movss */
    MEM32(esp + 0x84) = 0;
    ecx = 0xA;
    esi = esp + 0x30;
    edi = esp + 0x88;
    memcpy((void*)XBOX_PTR(edi), (void*)XBOX_PTR(esi), ecx * 4);
    esi += ecx * 4; edi += ecx * 4; ecx = 0; /* rep movsd */
    ecx = 0xA;
    esi = esp + 0x30;
    edi = esp + 0xB0;
    memcpy((void*)XBOX_PTR(edi), (void*)XBOX_PTR(esi), ecx * 4);
    esi += ecx * 4; edi += ecx * 4; ecx = 0; /* rep movsd */
    ecx = esp + 0x80;
    eax = ebx;
    PUSH32(esp, 0); sub_002AE220(); /* call 0x002AE220 */

loc_002ADD93: ;
    xmm0 = MEMF(0x648D14); /* movss */
    MEMF(esp + 0x80) = xmm0; /* movss */
    MEM32(esp + 0x84) = 0;
    ecx = 0xA;
    esi = esp + 0x30;
    edi = esp + 0x88;
    memcpy((void*)XBOX_PTR(edi), (void*)XBOX_PTR(esi), ecx * 4);
    esi += ecx * 4; edi += ecx * 4; ecx = 0; /* rep movsd */
    ecx = 0xA;
    esi = esp + 0x30;
    edi = esp + 0xB0;
    memcpy((void*)XBOX_PTR(edi), (void*)XBOX_PTR(esi), ecx * 4);
    esi += ecx * 4; edi += ecx * 4; ecx = 0; /* rep movsd */
    ecx = esp + 0x80;
    eax = ebx;
    PUSH32(esp, 0); sub_002AE220(); /* call 0x002AE220 */

loc_002ADDE1: ;
    POP32(esp, edi);
    POP32(esp, esi);
    esp = esp + 0xD0;
    esp += 4; return; /* ret */

}

/**
 * sub_002ADDF0
 * Original: 0x002ADDF0 - 0x002ADEBC (204 bytes, 41 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_002ADDF0(void)
{
    float xmm0, xmm1;

loc_002ADDF0: ;
    esp = esp - 0xA8;
    xmm0 = MEMF(0x648D14); /* movss */
    xmm1 = 0.0f; /* xorps self = zero */
    PUSH32(esp, esi);
    PUSH32(esp, edi);
    MEMF(esp + 0x58) = xmm0; /* movss */
    MEM32(esp + 0x5C) = 0;
    MEMF(esp + 0x34) = xmm1; /* movss */
    MEMF(esp + 0x30) = xmm1; /* movss */
    MEMF(esp + 0x3C) = xmm0; /* movss */
    MEMF(esp + 0x38) = xmm0; /* movss */
    MEMF(esp + 0x50) = xmm1; /* movss */
    MEMF(esp + 0x54) = xmm0; /* movss */
    MEMF(esp + 0x40) = xmm1; /* movss */
    MEMF(esp + 0x44) = xmm1; /* movss */
    MEMF(esp + 0x48) = xmm1; /* movss */
    MEMF(esp + 0x4C) = xmm0; /* movss */
    ecx = 0xA;
    esi = esp + 0x30;
    edi = esp + 0x60;
    memcpy((void*)XBOX_PTR(edi), (void*)XBOX_PTR(esi), ecx * 4);
    esi += ecx * 4; edi += ecx * 4; ecx = 0; /* rep movsd */
    MEMF(esp + 0xC) = xmm1; /* movss */
    MEMF(esp + 8) = xmm1; /* movss */
    MEMF(esp + 0x14) = xmm0; /* movss */
    MEMF(esp + 0x10) = xmm0; /* movss */
    MEMF(esp + 0x28) = xmm1; /* movss */
    MEMF(esp + 0x2C) = xmm1; /* movss */
    MEMF(esp + 0x18) = xmm0; /* movss */
    MEMF(esp + 0x1C) = xmm0; /* movss */
    MEMF(esp + 0x20) = xmm0; /* movss */
    MEMF(esp + 0x24) = xmm0; /* movss */
    ecx = 0xA;
    esi = esp + 8;
    edi = esp + 0x88;
    memcpy((void*)XBOX_PTR(edi), (void*)XBOX_PTR(esi), ecx * 4);
    esi += ecx * 4; edi += ecx * 4; ecx = 0; /* rep movsd */
    ecx = esp + 0x58;
    PUSH32(esp, 0); sub_002AE220(); /* call 0x002AE220 */

loc_002ADEB3: ;
    POP32(esp, edi);
    POP32(esp, esi);
    esp = esp + 0xA8;
    esp += 4; return; /* ret */

}

/**
 * sub_002ADEC0
 * Original: 0x002ADEC0 - 0x002ADFC3 (259 bytes, 55 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_002ADEC0(void)
{
    float xmm0, xmm1;

loc_002ADEC0: ;
    esp = esp - 0xA8;
    xmm0 = 0.0f; /* xorps self = zero */
    xmm1 = MEMF(0x648D14); /* movss */
    PUSH32(esp, esi);
    PUSH32(esp, edi);
    MEMF(esp + 0xC) = xmm0; /* movss */
    MEMF(esp + 8) = xmm0; /* movss */
    MEMF(esp + 0x28) = xmm0; /* movss */
    MEMF(esp + 0x2C) = xmm0; /* movss */
    MEMF(esp + 0x14) = xmm1; /* movss */
    MEMF(esp + 0x10) = xmm1; /* movss */
    MEMF(esp + 0x18) = xmm1; /* movss */
    MEMF(esp + 0x1C) = xmm1; /* movss */
    MEMF(esp + 0x20) = xmm1; /* movss */
    MEMF(esp + 0x24) = xmm1; /* movss */
    ecx = 0xA;
    esi = esp + 8;
    edi = esp + 0x30;
    memcpy((void*)XBOX_PTR(edi), (void*)XBOX_PTR(esi), ecx * 4);
    esi += ecx * 4; edi += ecx * 4; ecx = 0; /* rep movsd */
    MEMF(esp + 0x40) = xmm0; /* movss */
    MEMF(esp + 0x44) = xmm0; /* movss */
    MEMF(esp + 0x48) = xmm0; /* movss */
    xmm0 = MEMF(0x649228); /* movss */
    MEMF(esp + 0x58) = xmm0; /* movss */
    MEM32(esp + 0x5C) = 0;
    ecx = 0xA;
    esi = esp + 8;
    edi = esp + 0x60;
    memcpy((void*)XBOX_PTR(edi), (void*)XBOX_PTR(esi), ecx * 4);
    esi += ecx * 4; edi += ecx * 4; ecx = 0; /* rep movsd */
    MEMF(esp + 0x4C) = xmm1; /* movss */
    ecx = 0xA;
    esi = esp + 0x30;
    edi = esp + 0x88;
    memcpy((void*)XBOX_PTR(edi), (void*)XBOX_PTR(esi), ecx * 4);
    esi += ecx * 4; edi += ecx * 4; ecx = 0; /* rep movsd */
    ecx = esp + 0x58;
    eax = ebx;
    PUSH32(esp, 0); sub_002AE220(); /* call 0x002AE220 */

loc_002ADF78: ;
    xmm0 = MEMF(0x648D14); /* movss */
    MEMF(esp + 0x58) = xmm0; /* movss */
    MEM32(esp + 0x5C) = 0;
    ecx = 0xA;
    esi = esp + 0x30;
    edi = esp + 0x60;
    memcpy((void*)XBOX_PTR(edi), (void*)XBOX_PTR(esi), ecx * 4);
    esi += ecx * 4; edi += ecx * 4; ecx = 0; /* rep movsd */
    ecx = 0xA;
    esi = esp + 0x30;
    edi = esp + 0x88;
    memcpy((void*)XBOX_PTR(edi), (void*)XBOX_PTR(esi), ecx * 4);
    esi += ecx * 4; edi += ecx * 4; ecx = 0; /* rep movsd */
    ecx = esp + 0x58;
    eax = ebx;
    PUSH32(esp, 0); sub_002AE220(); /* call 0x002AE220 */

loc_002ADFBA: ;
    POP32(esp, edi);
    POP32(esp, esi);
    esp = esp + 0xA8;
    esp += 4; return; /* ret */

}

/**
 * sub_002ADFD0
 * Original: 0x002ADFD0 - 0x002AE122 (338 bytes, 65 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_002ADFD0(void)
{
    float xmm0, xmm1, xmm2;

loc_002ADFD0: ;
    esp = esp - 0xD0;
    xmm0 = 0.0f; /* xorps self = zero */
    xmm1 = MEMF(0x648D14); /* movss */
    xmm2 = MEMF(0x648D40); /* movss */
    PUSH32(esp, esi);
    PUSH32(esp, edi);
    MEMF(esp + 0xC) = xmm0; /* movss */
    MEMF(esp + 8) = xmm0; /* movss */
    MEMF(esp + 0x28) = xmm0; /* movss */
    MEMF(esp + 0x2C) = xmm0; /* movss */
    MEMF(esp + 0x14) = xmm1; /* movss */
    MEMF(esp + 0x10) = xmm1; /* movss */
    MEMF(esp + 0x18) = xmm1; /* movss */
    MEMF(esp + 0x1C) = xmm1; /* movss */
    MEMF(esp + 0x20) = xmm1; /* movss */
    MEMF(esp + 0x24) = xmm1; /* movss */
    ecx = 0xA;
    esi = esp + 8;
    edi = esp + 0x58;
    memcpy((void*)XBOX_PTR(edi), (void*)XBOX_PTR(esi), ecx * 4);
    esi += ecx * 4; edi += ecx * 4; ecx = 0; /* rep movsd */
    MEMF(esp + 0x64) = xmm2; /* movss */
    MEMF(esp + 0x60) = xmm2; /* movss */
    ecx = 0xA;
    esi = esp + 0x58;
    edi = esp + 0x30;
    memcpy((void*)XBOX_PTR(edi), (void*)XBOX_PTR(esi), ecx * 4);
    esi += ecx * 4; edi += ecx * 4; ecx = 0; /* rep movsd */
    MEMF(esp + 0x40) = xmm0; /* movss */
    MEMF(esp + 0x44) = xmm0; /* movss */
    MEMF(esp + 0x48) = xmm0; /* movss */
    xmm0 = MEMF(0x648EA8); /* movss */
    MEMF(esp + 0x3C) = xmm0; /* movss */
    MEMF(esp + 0x38) = xmm0; /* movss */
    xmm0 = MEMF(0x648D10); /* movss */
    MEMF(esp + 0x80) = xmm0; /* movss */
    MEM32(esp + 0x84) = 0;
    ecx = 0xA;
    esi = esp + 8;
    edi = esp + 0x88;
    memcpy((void*)XBOX_PTR(edi), (void*)XBOX_PTR(esi), ecx * 4);
    esi += ecx * 4; edi += ecx * 4; ecx = 0; /* rep movsd */
    ecx = 0xA;
    esi = esp + 0x58;
    edi = esp + 0xB0;
    memcpy((void*)XBOX_PTR(edi), (void*)XBOX_PTR(esi), ecx * 4);
    esi += ecx * 4; edi += ecx * 4; ecx = 0; /* rep movsd */
    ecx = esp + 0x80;
    eax = ebx;
    MEMF(esp + 0x4C) = xmm1; /* movss */
    PUSH32(esp, 0); sub_002AE220(); /* call 0x002AE220 */

loc_002AE0CB: ;
    xmm0 = MEMF(0x648D14); /* movss */
    MEMF(esp + 0x80) = xmm0; /* movss */
    MEM32(esp + 0x84) = 0;
    ecx = 0xA;
    esi = esp + 0x58;
    edi = esp + 0x88;
    memcpy((void*)XBOX_PTR(edi), (void*)XBOX_PTR(esi), ecx * 4);
    esi += ecx * 4; edi += ecx * 4; ecx = 0; /* rep movsd */
    ecx = 0xA;
    esi = esp + 0x30;
    edi = esp + 0xB0;
    memcpy((void*)XBOX_PTR(edi), (void*)XBOX_PTR(esi), ecx * 4);
    esi += ecx * 4; edi += ecx * 4; ecx = 0; /* rep movsd */
    ecx = esp + 0x80;
    eax = ebx;
    PUSH32(esp, 0); sub_002AE220(); /* call 0x002AE220 */

loc_002AE119: ;
    POP32(esp, edi);
    POP32(esp, esi);
    esp = esp + 0xD0;
    esp += 4; return; /* ret */

}

/**
 * sub_002AE130
 * Original: 0x002AE130 - 0x002AE187 (87 bytes, 17 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_002AE130(void)
{
    uint32_t ebp;
    int _flags = 0; /* fallback flag var */
    float xmm0, xmm1;
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_002AE130: ;
    esp = esp - 0xA8;
    xmm1 = 0.0f; /* xorps self = zero */
    xmm0 = MEMF(0x648D14); /* movss */
    SET_LO8(eax, MEM8(0x6C028C));
    (void)0; /* test LO8(eax), LO8(eax) - flags set for next jcc */
    MEMF(esp + 4) = xmm1; /* movss */
    MEMF(esp) = xmm1; /* movss */
    MEMF(esp + 0xC) = xmm0; /* movss */
    MEMF(esp + 8) = xmm0; /* movss */
    MEMF(esp + 0x20) = xmm1; /* movss */
    MEMF(esp + 0x24) = xmm1; /* movss */
    MEMF(esp + 0x1C) = xmm0; /* movss */
    if (TEST_Z(LO8(eax), LO8(eax))) { sub_002AE187(); return; } /* je: equal / zero */

loc_002AE173: ;
    MEMF(esp + 0x10) = xmm0; /* movss */
    MEMF(esp + 0x14) = xmm0; /* movss */
    MEMF(esp + 0x18) = xmm0; /* movss */
    g_seh_ebp = ebp; sub_002AE199(); return; /* tail jmp 0x002AE199 */

}

/**
 * sub_002AE220
 * Original: 0x002AE220 - 0x002AE231 (17 bytes, 10 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_002AE220(void)
{
    uint32_t ebp;
    int _flags = 0; /* fallback flag var */
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_002AE220: ;
    PUSH32(esp, ecx);
    PUSH32(esp, ebx);
    PUSH32(esp, esi);
    PUSH32(esp, edi);
    edi = eax;
    ebx = MEM32(edi + 4);
    if (TEST_NZ(ebx, ebx)) { sub_002AE231(); return; } /* jne: not equal / not zero */

loc_002AE22D: ;
    esi = 0; /* xor self */
    g_seh_ebp = ebp; sub_002AE247(); return; /* tail jmp 0x002AE247 */

}

/**
 * sub_002AE2A0
 * Original: 0x002AE2A0 - 0x002AE2A8 (8 bytes, 4 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_002AE2A0(void)
{
    int _flags = 0; /* fallback flag var */

loc_002AE2A0: ;
    eax = MEM32(ecx + 4);
    if (TEST_NZ(eax, eax)) { sub_002AE2A8(); return; } /* jne: not equal / not zero */

loc_002AE2A7: ;
    esp += 4; return; /* ret */

}

/**
 * sub_002AE2C0
 * Original: 0x002AE2C0 - 0x002AE2F2 (50 bytes, 20 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_002AE2C0(void)
{
    uint32_t ebp;
    int _flags = 0; /* fallback flag var */
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_002AE2C0: ;
    PUSH32(esp, ebx);
    ebx = MEM32(esp + 0xC);
    PUSH32(esp, ebp);
    ebp = MEM32(esp + 0xC);
    PUSH32(esp, esi);
    esi = MEM32(edi + 4);
    if (TEST_Z(esi, esi)) goto loc_002AE2EE; /* je: equal / zero */

loc_002AE2D2: ;
    ecx = MEM32(edi + 8);
    ecx = ecx - esi;
    eax = 0x2E8BA2E9;
    { int64_t _r = (int64_t)(int32_t)eax * (int64_t)(int32_t)ecx;
      eax = (uint32_t)_r; edx = (uint32_t)(_r >> 32); }
    edx = (uint32_t)((int32_t)edx >> 4);
    eax = edx;
    eax = eax >> 0x1F;
    eax = eax + edx;
    MEM32(esp + 0x10) = eax;
    if ((eax != 0)) { sub_002AE2F2(); return; } /* jne: not equal / not zero */

loc_002AE2EE: ;
    esi = 0; /* xor self */
    g_seh_ebp = ebp; sub_002AE307(); return; /* tail jmp 0x002AE307 */

}

/**
 * sub_002AE330
 * Original: 0x002AE330 - 0x002AE34E (30 bytes, 12 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_002AE330(void)
{

loc_002AE330: ;
    eax = MEM32(esp + 4);
    PUSH32(esp, eax);
    PUSH32(esp, ecx);
    ecx = MEM32(esp + 0xC);
    PUSH32(esp, esi);
    PUSH32(esp, edi);
    PUSH32(esp, 0); sub_002AE8C0(); /* call 0x002AE8C0 */

loc_002AE341: ;
    eax = esi;
    eax = (uint32_t)((int32_t)eax * (int32_t)0x58);
    esp = esp + 0x10;
    eax = eax + edi;
    esp += 8; return; /* ret 4 */

}

/**
 * sub_002AE350
 * Original: 0x002AE350 - 0x002AE389 (57 bytes, 22 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_002AE350(void)
{
    uint32_t ebp;
    int _flags = 0; /* fallback flag var */

loc_002AE350: ;
    PUSH32(esp, ebp);
    ebp = esp;
    PUSH32(esp, 0xFFFFFFFFu);
    PUSH32(esp, 0x47FC20);
    eax = MEM32(0);
    PUSH32(esp, eax);
    MEM32(0) = esp;
    esp = esp - 0x1C;
    PUSH32(esp, ebx);
    PUSH32(esp, esi);
    PUSH32(esp, edi);
    MEM32(ebp + -16) = esp;
    esi = ecx;
    eax = MEM32(ebp + 0x10);
    ecx = MEM32(eax);
    MEM32(ebp + -20) = ecx;
    edi = MEM32(ebp + 8);
    ecx = MEM32(edi + 4);
    if (TEST_NZ(ecx, ecx)) { sub_002AE389(); return; } /* jne: not equal / not zero */

loc_002AE385: ;
    eax = 0; /* xor self */
    g_seh_ebp = ebp; sub_002AE391(); return; /* tail jmp 0x002AE391 */

}

/**
 * sub_002AE5B0
 * Original: 0x002AE5B0 - 0x002AE5ED (61 bytes, 22 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_002AE5B0(void)
{
    uint32_t ebp;
    int _flags = 0; /* fallback flag var */

loc_002AE5B0: ;
    PUSH32(esp, ebp);
    ebp = esp;
    PUSH32(esp, 0xFFFFFFFFu);
    PUSH32(esp, 0x47F880);
    eax = MEM32(0);
    PUSH32(esp, eax);
    MEM32(0) = esp;
    esp = esp - 0x7C;
    PUSH32(esp, ebx);
    PUSH32(esp, esi);
    PUSH32(esp, edi);
    MEM32(ebp + -16) = esp;
    ebx = ecx;
    ecx = 0x16;
    esi = edx;
    edi = ebp + -136;
    memcpy((void*)XBOX_PTR(edi), (void*)XBOX_PTR(esi), ecx * 4);
    esi += ecx * 4; edi += ecx * 4; ecx = 0; /* rep movsd */
    edi = MEM32(ebx + 4);
    if (TEST_NZ(edi, edi)) { sub_002AE5ED(); return; } /* jne: not equal / not zero */

loc_002AE5E9: ;
    esi = 0; /* xor self */
    g_seh_ebp = ebp; sub_002AE603(); return; /* tail jmp 0x002AE603 */

}

/**
 * sub_002AE860
 * Original: 0x002AE860 - 0x002AE87B (27 bytes, 10 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_002AE860(void)
{

loc_002AE860: ;
    eax = MEM32(esp + 4);
    PUSH32(esp, eax);
    eax = MEM32(esp + 8);
    PUSH32(esp, ecx);
    ecx = MEM32(esp + 0x10);
    PUSH32(esp, edx);
    PUSH32(esp, eax);
    PUSH32(esp, 0); sub_002AE950(); /* call 0x002AE950 */

loc_002AE875: ;
    esp = esp + 0x10;
    esp += 12; return; /* ret 8 */

}

/**
 * sub_002AE880
 * Original: 0x002AE880 - 0x002AE89B (27 bytes, 14 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_002AE880(void)
{
    int _flags = 0; /* fallback flag var */

loc_002AE880: ;
    if (CMP_EQ(eax, edx)) goto loc_002AE89A; /* je: equal / zero */

loc_002AE884: ;
    PUSH32(esp, esi);
    PUSH32(esp, edi);

loc_002AE886: ;
    edi = eax;
    eax = eax + 0x58;
    (void)0; /* cmp eax, edx - flags set for next jcc */
    ecx = 0x16;
    esi = ebx;
    memcpy((void*)XBOX_PTR(edi), (void*)XBOX_PTR(esi), ecx * 4);
    esi += ecx * 4; edi += ecx * 4; ecx = 0; /* rep movsd */
    if (CMP_NE(eax, edx)) goto loc_002AE886; /* jne: not equal / not zero */

loc_002AE898: ;
    POP32(esp, edi);
    POP32(esp, esi);

loc_002AE89A: ;
    esp += 4; return; /* ret */

}

/**
 * sub_002AE8A0
 * Original: 0x002AE8A0 - 0x002AE8BE (30 bytes, 15 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_002AE8A0(void)
{
    int _flags = 0; /* fallback flag var */

loc_002AE8A0: ;
    if (CMP_EQ(ebx, edx)) goto loc_002AE8BD; /* je: equal / zero */

loc_002AE8A4: ;
    PUSH32(esp, esi);
    PUSH32(esp, edi);

loc_002AE8A6: ;
    edx = edx - 0x58;
    eax = eax - 0x58;
    (void)0; /* cmp edx, ebx - flags set for next jcc */
    ecx = 0x16;
    esi = edx;
    edi = eax;
    memcpy((void*)XBOX_PTR(edi), (void*)XBOX_PTR(esi), ecx * 4);
    esi += ecx * 4; edi += ecx * 4; ecx = 0; /* rep movsd */
    if (CMP_NE(edx, ebx)) goto loc_002AE8A6; /* jne: not equal / not zero */

loc_002AE8BB: ;
    POP32(esp, edi);
    POP32(esp, esi);

loc_002AE8BD: ;
    esp += 4; return; /* ret */

}

/**
 * sub_002AE8C0
 * Original: 0x002AE8C0 - 0x002AE909 (73 bytes, 27 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_002AE8C0(void)
{
    uint32_t ebp;
    int _flags = 0; /* fallback flag var */

loc_002AE8C0: ;
    PUSH32(esp, ebp);
    ebp = esp;
    PUSH32(esp, 0xFFFFFFFFu);
    PUSH32(esp, 0x47F1A0);
    eax = MEM32(0);
    PUSH32(esp, eax);
    MEM32(0) = esp;
    PUSH32(esp, ecx);
    PUSH32(esp, ebx);
    PUSH32(esp, esi);
    PUSH32(esp, edi);
    MEM32(ebp + -16) = esp;
    ebx = ecx;
    edi = MEM32(ebp + 0xC);
    esi = MEM32(ebp + 8);
    MEM32(ebp + -4) = 0;
    edi = edi;

loc_002AE8F0: ;
    if (CMP_BE(edi & edi, 0)) { sub_002AE909(); return; } /* jbe: below or equal (unsigned <=) */

loc_002AE8F4: ;
    edx = ebx;
    eax = esi;
    PUSH32(esp, 0); sub_002AE930(); /* call 0x002AE930 */

loc_002AE8FD: ;
    edi--;
    MEM32(ebp + 0xC) = edi;
    esi = esi + 0x58;
    MEM32(ebp + 8) = esi;
    goto loc_002AE8F0;

}
