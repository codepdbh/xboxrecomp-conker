/**
 * Burnout 3 - Recompiled code chunk 63
 * Functions: 250 (0x004B20A7 - 0x004BD924)
 */

#define RECOMP_GENERATED_CODE
#include "recomp_funcs.h"
#include <math.h>

/**
 * sub_004B20A7
 * Original: 0x004B20A7 - 0x004B20B9 (18 bytes, 6 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_004B20A7(void)
{
    uint32_t ebp;
    int _flags = 0; /* fallback flag var */
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_004B20A7: ;
    ecx = MEM32(esp + 4);
    eax = 0; /* xor self */
    if (CMP_EQ(MEM32(ecx + 8), eax)) { sub_004B20B9(); return; } /* je: equal / zero */

loc_004B20B2: ;
    eax = 0x80004005u;
    g_seh_ebp = ebp; sub_004B20C0(); return; /* tail jmp 0x004B20C0 */

}

/**
 * sub_004B20C3
 * Original: 0x004B20C3 - 0x004B20D0 (13 bytes, 3 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_004B20C3(void)
{

loc_004B20C3: ;
    eax = MEM32(esp + 4);
    eax = MEM32(eax + 0x8C4);
    esp += 8; return; /* ret 4 */

}

/**
 * sub_004B20D0
 * Original: 0x004B20D0 - 0x004B20FB (43 bytes, 15 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_004B20D0(void)
{

loc_004B20D0: ;
    eax = ecx;
    ecx = MEM32(esp + 4);
    edx = MEM32(ecx + 8);
    MEM32(eax + 8) = edx;
    edx = MEM32(ecx + 0xC);
    MEM32(eax + 0xC) = edx;
    edx = MEM32(ecx + 0x10);
    MEM32(eax + 0x10) = edx;
    edx = MEM32(ecx + 0x14);
    MEM32(eax + 0x14) = edx;
    edx = MEM32(ecx);
    MEM32(eax) = edx;
    ecx = MEM32(ecx + 4);
    MEM32(eax + 4) = ecx;
    esp += 8; return; /* ret 4 */

}

/**
 * sub_004B20FB
 * Original: 0x004B20FB - 0x004B212A (47 bytes, 17 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_004B20FB(void)
{
    int _flags = 0; /* fallback flag var */

loc_004B20FB: ;
    eax = ecx;
    ecx = MEM32(esp + 4);
    if (CMP_EQ(ecx, eax)) goto loc_004B2127; /* je: equal / zero */

loc_004B2105: ;
    edx = MEM32(ecx + 8);
    MEM32(eax + 8) = edx;
    edx = MEM32(ecx + 0xC);
    MEM32(eax + 0xC) = edx;
    edx = MEM32(ecx + 0x10);
    MEM32(eax + 0x10) = edx;
    edx = MEM32(ecx + 0x14);
    MEM32(eax + 0x14) = edx;
    edx = MEM32(ecx);
    MEM32(eax) = edx;
    ecx = MEM32(ecx + 4);
    MEM32(eax + 4) = ecx;

loc_004B2127: ;
    esp += 8; return; /* ret 4 */

}

/**
 * sub_004B212A
 * Original: 0x004B212A - 0x004B215A (48 bytes, 19 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_004B212A(void)
{
    int _flags = 0; /* fallback flag var */

loc_004B212A: ;
    PUSH32(esp, esi);
    esi = MEM32(esp + 8);
    MEM32(ecx + 0xC) = MEM32(ecx + 0xC) + esi;
    eax = MEM32(ecx + 0xC);
    edx = 0x1F4;
    if (CMP_B(eax, edx)) goto loc_004B2153; /* jb: below (unsigned <) */

loc_004B213E: ;
    PUSH32(esp, edi);
    edi = MEM32(ecx + 8);

loc_004B2142: ;
    eax = eax + 0xFFFFFE0Cu;
    edi++;
    if (CMP_AE(eax, edx)) goto loc_004B2142; /* jae: above or equal (unsigned >=) */

loc_004B214C: ;
    MEM32(ecx + 8) = edi;
    MEM32(ecx + 0xC) = eax;
    POP32(esp, edi);

loc_004B2153: ;
    MEM32(ecx + 4) = MEM32(ecx + 4) - esi;
    POP32(esp, esi);
    esp += 8; return; /* ret 4 */

}

/**
 * sub_004B215A
 * Original: 0x004B215A - 0x004B2179 (31 bytes, 10 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_004B215A(void)
{
    int _flags = 0; /* fallback flag var */

loc_004B215A: ;
    eax = MEM32(ecx + 0x14);
    edx = MEM32(esp + 4);
    if (CMP_BE(edx, eax)) goto loc_004B2170; /* jbe: below or equal (unsigned <=) */

loc_004B2165: ;
    eax = eax + 0x1F4;
    MEM32(ecx + 0x10) = MEM32(ecx + 0x10) - 1;
    MEM32(ecx + 0x14) = eax;

loc_004B2170: ;
    MEM32(ecx + 0x14) = MEM32(ecx + 0x14) - edx;
    MEM32(ecx + 4) = MEM32(ecx + 4) - edx;
    esp += 8; return; /* ret 4 */

}

/**
 * sub_004B2179
 * Original: 0x004B2179 - 0x004B21A4 (43 bytes, 12 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_004B2179(void)
{

loc_004B2179: ;
    eax = MEM32(ecx + 8);
    MEM32(ecx + 0x10) = MEM32(ecx + 0x10) - eax;
    eax = MEM32(esp + 4);
    MEM32(ecx + 0x10) = MEM32(ecx + 0x10) - eax;
    eax = MEM32(ecx + 0x10);
    edx = MEM32(ecx + 0x14);
    eax = (uint32_t)((int32_t)eax * (int32_t)0x1F4);
    MEM32(ecx + 8) = MEM32(ecx + 8) & 0;
    MEM32(ecx + 0xC) = MEM32(ecx + 0xC) & 0;
    eax = eax + edx + 1;
    MEM32(ecx + 4) = eax;
    esp += 8; return; /* ret 4 */

}

/**
 * sub_004B21A4
 * Original: 0x004B21A4 - 0x004B21D2 (46 bytes, 14 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_004B21A4(void)
{

loc_004B21A4: ;
    eax = MEM32(ecx + 8);
    MEM32(ecx + 0x10) = MEM32(ecx + 0x10) - eax;
    eax = MEM32(esp + 4);
    MEM32(ecx + 8) = MEM32(ecx + 8) & 0;
    edx = eax;
    edx = edx - MEM32(ecx + 0x10);
    edx = (uint32_t)((int32_t)edx * (int32_t)0x1F4);
    edx = edx - MEM32(ecx + 0x14);
    MEM32(ecx + 0x14) = 0x1F3;
    edx--;
    MEM32(ecx + 4) = MEM32(ecx + 4) + edx;
    eax--;
    MEM32(ecx + 0x10) = eax;
    esp += 8; return; /* ret 4 */

}

/**
 * sub_004B21D2
 * Original: 0x004B21D2 - 0x004B2202 (48 bytes, 18 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_004B21D2(void)
{
    uint32_t ebp;

loc_004B21D2: ;
    PUSH32(esp, ebp);
    ebp = esp;
    eax = MEM32(ebp + 8);
    MEM32(ecx + 0xC) = eax;
    eax = MEM32(ebp + 0xC);
    MEM32(ecx + 0x20) = eax;
    eax = MEM32(ebp + 0x10);
    MEM32(ecx + 0x24) = eax;
    eax = MEM32(ebp + 0x14);
    MEM32(ecx + 0x1C) = eax;
    eax = MEM32(ebp + 0x18);
    MEM32(ecx + 0x28) = eax;
    eax = 0; /* xor self */
    MEM32(ecx + 0x2C) = eax;
    MEM32(ecx + 0x14) = eax;
    MEM32(ecx + 0x18) = eax;
    POP32(esp, ebp);
    esp += 24; return; /* ret 20 */

}

/**
 * sub_004B2202
 * Original: 0x004B2202 - 0x004B2230 (46 bytes, 18 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_004B2202(void)
{
    uint32_t ebp;
    int _flags = 0; /* fallback flag var */

loc_004B2202: ;
    PUSH32(esp, ebp);
    ebp = esp;
    PUSH32(esp, ecx);
    MEM32(ebp + -4) = MEM32(ebp + -4) & 0;
    PUSH32(esp, 0);
    eax = ebp + -4;
    PUSH32(esp, eax);
    PUSH32(esp, MEM32(ecx + 0x18));
    ecx = MEM32(ecx + 0x30);
    PUSH32(esp, 0); sub_004B5542(); /* call 0x004B5542 */

loc_004B221B: ;
    if (TEST_S(eax, eax)) goto loc_004B222C; /* jl: less (signed <) */

loc_004B221F: ;
    ecx = MEM32(ebp + -4);
    if (CMP_EQ(ecx, MEM32(ebp + 8))) goto loc_004B222C; /* je: equal / zero */

loc_004B2227: ;
    eax = 0x80004005u;

loc_004B222C: ;
    esp = ebp;
    POP32(esp, ebp); /* leave */
    esp += 8; return; /* ret 4 */

}

/**
 * sub_004B2230
 * Original: 0x004B2230 - 0x004B2240 (16 bytes, 6 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_004B2230(void)
{
    int _flags = 0; /* fallback flag var */

loc_004B2230: ;
    MEM32(ecx + 0x18) = MEM32(ecx + 0x18) & 0;
    ecx = MEM32(ecx + 0x10);
    if (TEST_Z(ecx, ecx)) goto loc_004B223F; /* je: equal / zero */

loc_004B223B: ;
    MEM32(ecx + 8) = MEM32(ecx + 8) & 0;

loc_004B223F: ;
    esp += 4; return; /* ret */

}

/**
 * sub_004B2240
 * Original: 0x004B2240 - 0x004B2289 (73 bytes, 30 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_004B2240(void)
{
    int _flags = 0; /* fallback flag var */

loc_004B2240: ;
    PUSH32(esp, esi);
    esi = ecx;
    eax = MEM32(esi + 0x10);
    if (TEST_Z(eax, eax)) goto loc_004B2287; /* je: equal / zero */

loc_004B224A: ;
    if (CMP_EQ(MEM32(eax + 8), 0)) goto loc_004B2287; /* je: equal / zero */

loc_004B2250: ;
    PUSH32(esp, edi);
    edi = MEM32(esi + 0x18);
    if (TEST_Z(edi, edi)) goto loc_004B227F; /* je: equal / zero */

loc_004B2258: ;
    ecx = MEM32(esi + 0x14);
    if (CMP_L(ecx, 2)) goto loc_004B2265; /* jl: less (signed <) */

loc_004B2260: ;
    if (CMP_LE(ecx, 4)) goto loc_004B226B; /* jle: less or equal (signed <=) */

loc_004B2265: ;
    edi = MEM32(eax + 0x898);

loc_004B226B: ;
    if (TEST_Z(edi, edi)) goto loc_004B227F; /* je: equal / zero */

loc_004B226F: ;
    ecx = MEM32(esi + 0x30);
    PUSH32(esp, edi);
    PUSH32(esp, 0); sub_004A5F72(); /* call 0x004A5F72 */

loc_004B2278: ;
    (void)0; /* test eax, eax - flags set for next jcc */
    MEM32(esi + 0x2C) = eax;
    if (TEST_Z(eax, eax)) goto loc_004B226F; /* je: equal / zero */

loc_004B227F: ;
    eax = MEM32(esi + 0x10);
    MEM32(eax + 8) = MEM32(eax + 8) & 0;
    POP32(esp, edi);

loc_004B2287: ;
    POP32(esp, esi);
    esp += 4; return; /* ret */

}

/**
 * sub_004B2289
 * Original: 0x004B2289 - 0x004B22E7 (94 bytes, 29 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_004B2289(void)
{
    int _flags = 0; /* fallback flag var */

loc_004B2289: ;
    PUSH32(esp, esi);
    esi = ecx;
    eax = MEM32(esi + 4);
    if (CMP_EQ(eax, 0xFFFFFFFFu)) goto loc_004B229A; /* je: equal / zero */

loc_004B2294: ;
    PUSH32(esp, eax);
    PUSH32(esp, 0); sub_0042C509(); /* call 0x0042C509 */

loc_004B229A: ;
    eax = MEM32(esi + 0xC);
    if (TEST_Z(eax, eax)) goto loc_004B22C0; /* je: equal / zero */

loc_004B22A1: ;
    (void)0; /* cmp MEM32(esi + 0x8C0), 0 - flags set for next jcc */
    ecx = MEM32(esi + 0x8BC);
    if (CMP_EQ(MEM32(esi + 0x8C0), 0)) goto loc_004B22B8; /* je: equal / zero */

loc_004B22B0: ;
    PUSH32(esp, eax);
    PUSH32(esp, 0); sub_004B5402(); /* call 0x004B5402 */

loc_004B22B6: ;
    goto loc_004B22C0;

loc_004B22B8: ;
    PUSH32(esp, 0x13);
    PUSH32(esp, eax);
    PUSH32(esp, 0); sub_004B53C7(); /* call 0x004B53C7 */

loc_004B22C0: ;
    ecx = MEM32(esi + 0x8BC);
    eax = MEM32(esi);
    MEM32(ecx + eax * 4 + 0x1870) = MEM32(ecx + eax * 4 + 0x1870) & 0;
    (void)0; /* cmp MEM32(esi + 0x8C0), 0 - flags set for next jcc */
    ecx = MEM32(esi + 0x8BC);
    if (CMP_EQ(MEM32(esi + 0x8C0), 0)) { sub_004B22E7(); return; } /* je: equal / zero */

loc_004B22DF: ;
    PUSH32(esp, esi);
    PUSH32(esp, 0); sub_004B5402(); /* call 0x004B5402 */

loc_004B22E5: ;
    POP32(esp, esi);
    esp += 4; return; /* ret */

}

/**
 * sub_004B22F4
 * Original: 0x004B22F4 - 0x004B236C (120 bytes, 39 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_004B22F4(void)
{
    uint32_t ebp;
    int _flags = 0; /* fallback flag var */
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_004B22F4: ;
    eax = MEM32(ecx + 0x14);
    edx = MEM32(esp + 4);
    if (CMP_AE(edx, MEM32(eax + 4))) { sub_004B236C(); return; } /* jae: above or equal (unsigned >=) */

loc_004B2300: ;
    eax = MEM32(ecx);
    eax = eax + eax * 4;
    eax = eax << 1;
    PUSH32(esp, ebx);
    PUSH32(esp, esi);
    esi = ZX16(MEM16(eax + 0x882250));
    eax = ZX16(MEM16(eax + 0x88224C));
    PUSH32(esp, edi);
    edi = esi + eax;
    esi = edi + 6;
    esi = (uint32_t)((int32_t)esi * (int32_t)edx);
    esi = esi + 0x18;
    edx = 0; /* xor self */
    ebx = 0x1F4;
    eax = esi;
    { uint64_t _dividend = ((uint64_t)edx << 32) | eax;
      eax = (uint32_t)(_dividend / (uint32_t)ebx);
      edx = (uint32_t)(_dividend % (uint32_t)ebx); }
    edi = edi + esi + 5;
    MEM32(ecx + 0x82C) = eax;
    eax = edi;
    MEM32(ecx + 0x830) = edx;
    edx = 0; /* xor self */
    { uint64_t _dividend = ((uint64_t)edx << 32) | eax;
      eax = (uint32_t)(_dividend / (uint32_t)ebx);
      edx = (uint32_t)(_dividend % (uint32_t)ebx); }
    edi = edi - esi;
    edi++;
    MEM32(ecx + 0x828) = edi;
    POP32(esp, edi);
    POP32(esp, esi);
    POP32(esp, ebx);
    MEM32(ecx + 0x834) = eax;
    eax = MEM32(esp + 4);
    MEM32(ecx + 0x824) = eax;
    eax = 0; /* xor self */
    MEM32(ecx + 0x838) = edx;
    eax++;
    g_seh_ebp = ebp; sub_004B236E(); return; /* tail jmp 0x004B236E */

}

/**
 * sub_004B2371
 * Original: 0x004B2371 - 0x004B2424 (179 bytes, 66 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_004B2371(void)
{
    uint32_t ebp;
    int _flags = 0; /* fallback flag var */

loc_004B2371: ;
    PUSH32(esp, ebp);
    ebp = esp;
    PUSH32(esp, ecx);
    PUSH32(esp, ecx);
    eax = MEM32(ecx + 0x14);
    PUSH32(esp, edi);
    edi = MEM32(ebp + 8);
    if (CMP_AE(edi, MEM32(eax))) { sub_004B2424(); return; } /* jae: above or equal (unsigned >=) */

loc_004B2385: ;
    eax = MEM32(ecx);
    PUSH32(esp, ebx);
    eax = eax + eax * 4;
    PUSH32(esp, esi);
    esi = ZX16(MEM16(eax * 2 + 0x88224C));
    eax = MEM32(ecx + 0x18);
    esi = esi + 5;
    edx = esi;
    edx = (uint32_t)((int32_t)edx * (int32_t)edi);
    MEM32(ebp + -8) = edx;
    edi = 0x1F4;
    edx = 0; /* xor self */
    ebx = edi;
    MEM32(ebp + -4) = eax;
    { uint64_t _dividend = ((uint64_t)edx << 32) | eax;
      eax = (uint32_t)(_dividend / (uint32_t)ebx);
      edx = (uint32_t)(_dividend % (uint32_t)ebx); }
    ebx = ebx - edx;
    if (CMP_BE(MEM32(ebp + -8), ebx)) goto loc_004B23CC; /* jbe: below or equal (unsigned <=) */

loc_004B23B7: ;
    edx = 0; /* xor self */
    eax = ebx;
    { uint64_t _dividend = ((uint64_t)edx << 32) | eax;
      eax = (uint32_t)(_dividend / (uint32_t)esi);
      edx = (uint32_t)(_dividend % (uint32_t)esi); }
    MEM32(ebp + -4) = MEM32(ebp + -4) + ebx;
    edx = edx - ebx;
    MEM32(ebp + -8) = MEM32(ebp + -8) + edx;
    (void)0; /* cmp MEM32(ebp + -8), edi - flags set for next jcc */
    ebx = edi;
    if (CMP_A(MEM32(ebp + -8), edi)) goto loc_004B23B7; /* ja: above (unsigned >) */

loc_004B23CC: ;
    eax = MEM32(ebp + -8);
    edx = ebx;
    edx = edx - eax;
    if (CMP_B(edx, esi)) goto loc_004B23DC; /* jb: below (unsigned <) */

loc_004B23D7: ;
    MEM32(ebp + -4) = MEM32(ebp + -4) + eax;
    goto loc_004B23DF;

loc_004B23DC: ;
    MEM32(ebp + -4) = MEM32(ebp + -4) + ebx;

loc_004B23DF: ;
    eax = MEM32(ebp + -4);
    esi = eax + esi + -1;
    edx = 0; /* xor self */
    ebx = edi;
    { uint64_t _dividend = ((uint64_t)edx << 32) | eax;
      eax = (uint32_t)(_dividend / (uint32_t)ebx);
      edx = (uint32_t)(_dividend % (uint32_t)ebx); }
    MEM32(ecx + 0x82C) = eax;
    eax = esi;
    MEM32(ecx + 0x830) = edx;
    edx = 0; /* xor self */
    { uint64_t _dividend = ((uint64_t)edx << 32) | eax;
      eax = (uint32_t)(_dividend / (uint32_t)edi);
      edx = (uint32_t)(_dividend % (uint32_t)edi); }
    esi = esi - MEM32(ebp + -4);
    esi++;
    MEM32(ecx + 0x828) = esi;
    POP32(esp, esi);
    POP32(esp, ebx);
    MEM32(ecx + 0x834) = eax;
    eax = MEM32(ebp + 8);
    MEM32(ecx + 0x824) = eax;
    eax = 0; /* xor self */
    MEM32(ecx + 0x838) = edx;
    eax++;
    g_seh_ebp = ebp; sub_004B2426(); return; /* tail jmp 0x004B2426 */

}

/**
 * sub_004B242B
 * Original: 0x004B242B - 0x004B24D8 (173 bytes, 59 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_004B242B(void)
{
    uint32_t ebp;
    int _flags = 0; /* fallback flag var */

loc_004B242B: ;
    PUSH32(esp, ebp);
    ebp = esp;
    PUSH32(esp, ecx);
    eax = MEM32(ecx + 0x844);
    edx = MEM32(ecx + 0x14);
    (void)0; /* cmp eax, MEM32(edx) - flags set for next jcc */
    MEM32(ebp + -4) = eax;
    if (CMP_AE(eax, MEM32(edx))) { sub_004B24D8(); return; } /* jae: above or equal (unsigned >=) */

loc_004B2443: ;
    eax = MEM32(ecx);
    eax = eax + eax * 4;
    eax = ZX16(MEM16(eax * 2 + 0x882250));
    PUSH32(esp, ebx);
    PUSH32(esp, esi);
    PUSH32(esp, edi);
    edi = eax + 2;
    ebx = edi;
    edx = 0; /* xor self */
    eax = ebx;
    esi = 0x1F4;
    { uint64_t _dividend = ((uint64_t)edx << 32) | eax;
      eax = (uint32_t)(_dividend / (uint32_t)esi);
      edx = (uint32_t)(_dividend % (uint32_t)esi); }
    if (TEST_Z(edx, edx)) goto loc_004B2470; /* je: equal / zero */

loc_004B2467: ;
    ebx = eax + 1;
    ebx = (uint32_t)((int32_t)ebx * (int32_t)0x1F4);

loc_004B2470: ;
    esi = MEM32(ebp + -4);
    esi = (uint32_t)((int32_t)esi * (int32_t)ebx);
    edx = 0; /* xor self */
    eax = edi;
    ebx = 0x1F4;
    { uint64_t _dividend = ((uint64_t)edx << 32) | eax;
      eax = (uint32_t)(_dividend / (uint32_t)ebx);
      edx = (uint32_t)(_dividend % (uint32_t)ebx); }
    esi = esi + MEM32(ecx + 0x1C);
    if (TEST_Z(edx, edx)) goto loc_004B2491; /* je: equal / zero */

loc_004B2488: ;
    edi = eax + 1;
    edi = (uint32_t)((int32_t)edi * (int32_t)0x1F4);

loc_004B2491: ;
    edx = 0; /* xor self */
    ebx = 0x1F4;
    eax = esi;
    { uint64_t _dividend = ((uint64_t)edx << 32) | eax;
      eax = (uint32_t)(_dividend / (uint32_t)ebx);
      edx = (uint32_t)(_dividend % (uint32_t)ebx); }
    edi = edi + esi + -1;
    MEM32(ecx + 0x82C) = eax;
    eax = edi;
    MEM32(ecx + 0x830) = edx;
    edx = 0; /* xor self */
    { uint64_t _dividend = ((uint64_t)edx << 32) | eax;
      eax = (uint32_t)(_dividend / (uint32_t)ebx);
      edx = (uint32_t)(_dividend % (uint32_t)ebx); }
    edi = edi - esi;
    edi++;
    MEM32(ecx + 0x828) = edi;
    POP32(esp, edi);
    POP32(esp, esi);
    POP32(esp, ebx);
    MEM32(ecx + 0x834) = eax;
    eax = MEM32(ebp + -4);
    MEM32(ecx + 0x824) = eax;
    eax = 0; /* xor self */
    MEM32(ecx + 0x838) = edx;
    eax++;
    esp = ebp;
    POP32(esp, ebp); /* leave */
    esp += 4; return; /* ret */

}

/**
 * sub_004B24DC
 * Original: 0x004B24DC - 0x004B2536 (90 bytes, 37 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_004B24DC(void)
{
    uint32_t ebp;
    int _flags = 0; /* fallback flag var */

loc_004B24DC: ;
    PUSH32(esp, ebp);
    ebp = esp;
    esp = esp - 0x14;
    eax = MEM32(ebp + 0x10);
    if (CMP_A(MEM32(ebp + 0xC), eax)) goto loc_004B2532; /* ja: above (unsigned >) */

loc_004B24EA: ;
    eax = eax - MEM32(ebp + 0xC);
    PUSH32(esp, ebx);
    ebx = MEM32(ebp + 0xC);
    ebx = ebx << 9;
    ebx = ebx + MEM32(ebp + 8);
    PUSH32(esp, esi);
    eax++;
    PUSH32(esp, edi);
    MEM32(ebp + 0xC) = eax;

loc_004B24FD: ;
    eax = ebp + -20;
    PUSH32(esp, eax);
    PUSH32(esp, 0);
    PUSH32(esp, 0);
    PUSH32(esp, 0x1F4);
    PUSH32(esp, ebx);
    PUSH32(esp, 0x10);
    PUSH32(esp, MEM32(0x561094));
    PUSH32(esp, 0); sub_0046DA6A(); /* call 0x0046DA6A */

loc_004B2518: ;
    edi = ebx + 0x1F4;
    esi = ebp + -20;
    MEM32(edi) = MEM32(esi); esi += 4; edi += 4; /* movsd */
    MEM32(edi) = MEM32(esi); esi += 4; edi += 4; /* movsd */
    ebx = ebx + 0x200;
    MEM32(ebp + 0xC) = MEM32(ebp + 0xC) - 1;
    MEM32(edi) = MEM32(esi); esi += 4; edi += 4; /* movsd */
    if ((MEM32(ebp + 0xC) != 0)) goto loc_004B24FD; /* jne: not equal / not zero */

loc_004B252F: ;
    POP32(esp, edi);
    POP32(esp, esi);
    POP32(esp, ebx);

loc_004B2532: ;
    esp = ebp;
    POP32(esp, ebp); /* leave */
    esp += 16; return; /* ret 12 */

}

/**
 * sub_004B2536
 * Original: 0x004B2536 - 0x004B254C (22 bytes, 9 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_004B2536(void)
{
    int _flags = 0; /* fallback flag var */

loc_004B2536: ;
    eax = MEM32(esp + 4);
    eax--;
    edx = 0; /* xor self */
    ecx = 0x1F4;
    { uint64_t _dividend = ((uint64_t)edx << 32) | eax;
      eax = (uint32_t)(_dividend / (uint32_t)ecx);
      edx = (uint32_t)(_dividend % (uint32_t)ecx); }
    if (TEST_Z(edx, edx)) goto loc_004B2549; /* je: equal / zero */

loc_004B2548: ;
    eax++;

loc_004B2549: ;
    esp += 8; return; /* ret 4 */

}

/**
 * sub_004B254C
 * Original: 0x004B254C - 0x004B25E2 (150 bytes, 55 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_004B254C(void)
{
    uint32_t ebp;
    int _flags = 0; /* fallback flag var */

loc_004B254C: ;
    PUSH32(esp, ebp);
    ebp = esp;
    esp = esp - 0xC;
    PUSH32(esp, ebx);
    PUSH32(esp, esi);
    esi = MEM32(ecx);
    esi = esi + esi * 4;
    esi = esi << 1;
    eax = ZX16(MEM16(esi + 0x88224C));
    edx = eax + 5;
    MEM32(ebp + -4) = edx;
    edx = ZX16(MEM16(esi + 0x882250));
    eax = edx + eax + 6;
    edx = ZX16(MEM16(esi + 0x88224A));
    eax = (uint32_t)((int32_t)eax * (int32_t)edx);
    eax = eax + 0x18;
    PUSH32(esp, edi);
    ebx = 0x1F4;
    edx = 0; /* xor self */
    edi = ebx;
    MEM32(ebp + -12) = eax;
    MEM32(ecx + 0x18) = eax;
    { uint64_t _dividend = ((uint64_t)edx << 32) | eax;
      eax = (uint32_t)(_dividend / (uint32_t)edi);
      edx = (uint32_t)(_dividend % (uint32_t)edi); }
    edi = edi - edx;
    if (CMP_AE(edi, MEM32(ebp + -4))) goto loc_004B25A3; /* jae: above or equal (unsigned >=) */

loc_004B2599: ;
    eax = MEM32(ebp + -12);
    eax = eax + edi;
    MEM32(ecx + 0x18) = eax;
    edi = ebx;

loc_004B25A3: ;
    edx = MEM32(ecx + 0x18);
    MEM32(ecx + 0x1C) = edx;
    eax = ZX16(MEM16(esi + 0x882248));
    eax = (uint32_t)((int32_t)eax * (int32_t)MEM32(ebp + -4));
    (void)0; /* cmp eax, edi - flags set for next jcc */
    MEM32(ebp + -8) = eax;
    if (CMP_BE(eax, edi)) goto loc_004B25DA; /* jbe: below or equal (unsigned <=) */

loc_004B25BB: ;
    MEM32(ebp + -12) = edx;

loc_004B25BE: ;
    edx = 0; /* xor self */
    eax = edi;
    { uint64_t _dividend = ((uint64_t)edx << 32) | eax;
      eax = (uint32_t)(_dividend / (uint32_t)MEM32(ebp + -4));
      edx = (uint32_t)(_dividend % (uint32_t)MEM32(ebp + -4)); }
    MEM32(ebp + -12) = MEM32(ebp + -12) + edi;
    edx = edx - edi;
    MEM32(ebp + -8) = MEM32(ebp + -8) + edx;
    (void)0; /* cmp MEM32(ebp + -8), ebx - flags set for next jcc */
    edi = ebx;
    if (CMP_A(MEM32(ebp + -8), ebx)) goto loc_004B25BE; /* ja: above (unsigned >) */

loc_004B25D4: ;
    eax = MEM32(ebp + -12);
    MEM32(ecx + 0x1C) = eax;

loc_004B25DA: ;
    MEM32(ecx + 0x1C) = MEM32(ecx + 0x1C) + edi;
    POP32(esp, edi);
    POP32(esp, esi);
    POP32(esp, ebx);
    esp = ebp;
    POP32(esp, ebp); /* leave */
    esp += 4; return; /* ret */

}

/**
 * sub_004B25E2
 * Original: 0x004B25E2 - 0x004B262B (73 bytes, 23 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_004B25E2(void)
{
    int _flags = 0; /* fallback flag var */

loc_004B25E2: ;
    PUSH32(esp, esi);
    esi = MEM32(esp + 8);
    ecx = ecx + 0x824;
    PUSH32(esp, ecx);
    ecx = esi;
    PUSH32(esp, 0); sub_004B20FB(); /* call 0x004B20FB */

loc_004B25F5: ;
    eax = MEM32(esi + 8);
    ecx = MEM32(esi + 0x10);
    ecx = ecx - eax;
    if (CMP_B(ecx, 4)) goto loc_004B260F; /* jb: below (unsigned <) */

loc_004B2602: ;
    ecx = eax + 3;
    MEM32(esi + 0x10) = ecx;
    MEM32(esi + 0x14) = 0x1F3;

loc_004B260F: ;
    ecx = MEM32(esi + 0x10);
    ecx = ecx - eax;
    eax = MEM32(esi + 0x14);
    ecx = (uint32_t)((int32_t)ecx * (int32_t)0x1F4);
    ecx = ecx - MEM32(esi + 0xC);
    eax = ecx + eax + 1;
    MEM32(esi + 4) = eax;
    POP32(esp, esi);
    esp += 8; return; /* ret 4 */

}

/**
 * sub_004B262B
 * Original: 0x004B262B - 0x004B2684 (89 bytes, 37 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_004B262B(void)
{
    uint32_t ebp;
    int _flags = 0; /* fallback flag var */

loc_004B262B: ;
    PUSH32(esp, ebp);
    ebp = esp;
    eax = MEM32(ebp + 0xC);
    ecx = MEM32(eax + 0xC);
    PUSH32(esp, ebx);
    PUSH32(esp, esi);
    esi = MEM32(eax + 8);
    esi = esi << 9;
    PUSH32(esp, edi);
    ebx = 0x1F4;
    edi = ebx;
    esi = esi + ecx;
    esi = esi + MEM32(ebp + 8);
    edi = edi - ecx;
    if (CMP_AE(edi, MEM32(ebp + 0x10))) goto loc_004B266E; /* jae: above or equal (unsigned >=) */

loc_004B2650: ;
    PUSH32(esp, edi);
    PUSH32(esp, esi);
    PUSH32(esp, MEM32(ebp + 0x14));
    PUSH32(esp, 0); sub_0046E670(); /* call 0x0046E670 */

loc_004B265A: ;
    MEM32(ebp + 0x10) = MEM32(ebp + 0x10) - edi;
    MEM32(ebp + 0x14) = MEM32(ebp + 0x14) + edi;
    esp = esp + 0xC;
    (void)0; /* cmp MEM32(ebp + 0x10), ebx - flags set for next jcc */
    esi = esi + edi + 0xC;
    edi = ebx;
    if (CMP_A(MEM32(ebp + 0x10), ebx)) goto loc_004B2650; /* ja: above (unsigned >) */

loc_004B266E: ;
    PUSH32(esp, MEM32(ebp + 0x10));
    PUSH32(esp, esi);
    PUSH32(esp, MEM32(ebp + 0x14));
    PUSH32(esp, 0); sub_0046E670(); /* call 0x0046E670 */

loc_004B267A: ;
    esp = esp + 0xC;
    POP32(esp, edi);
    POP32(esp, esi);
    POP32(esp, ebx);
    POP32(esp, ebp);
    esp += 20; return; /* ret 16 */

}

/**
 * sub_004B2684
 * Original: 0x004B2684 - 0x004B26FA (118 bytes, 50 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_004B2684(void)
{
    uint32_t ebp;
    int _flags = 0; /* fallback flag var */

loc_004B2684: ;
    PUSH32(esp, ebp);
    ebp = esp;
    eax = MEM32(ebp + 0xC);
    ecx = MEM32(eax + 0xC);
    PUSH32(esp, ebx);
    ebx = MEM32(eax + 4);
    eax = MEM32(eax + 8);
    eax = eax << 9;
    edx = 0x1F4;
    eax = eax + ecx;
    eax = eax + MEM32(ebp + 0x10);
    edx = edx - ecx;
    (void)0; /* cmp edx, ebx - flags set for next jcc */
    PUSH32(esp, esi);
    PUSH32(esp, edi);
    MEM32(ebp + 0xC) = ebx;
    if (CMP_AE(edx, ebx)) goto loc_004B26D9; /* jae: above or equal (unsigned >=) */

loc_004B26AC: ;
    esi = MEM32(ebp + 8);
    MEM32(ebp + 8) = MEM32(ebp + 8) + edx;
    ecx = edx;
    ebx = ecx;
    ecx = ecx >> 2;
    edi = eax;
    memcpy((void*)XBOX_PTR(edi), (void*)XBOX_PTR(esi), ecx * 4);
    esi += ecx * 4; edi += ecx * 4; ecx = 0; /* rep movsd */
    ecx = ebx;
    ebx = MEM32(ebp + 0xC);
    ebx = ebx - edx;
    eax = eax + edx + 0xC;
    ecx = ecx & 3;
    edx = 0x1F4;
    (void)0; /* cmp ebx, edx - flags set for next jcc */
    memcpy((void*)XBOX_PTR(edi), (void*)XBOX_PTR(esi), ecx);
    esi += ecx; edi += ecx; ecx = 0; /* rep movsb */
    MEM32(ebp + 0xC) = ebx;
    if (CMP_A(ebx, edx)) goto loc_004B26AC; /* ja: above (unsigned >) */

loc_004B26D9: ;
    edx = MEM32(ebp + 8);
    ecx = ebx;
    edi = eax;
    eax = ecx;
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
    eax = ebx + edx;
    POP32(esp, ebx);
    POP32(esp, ebp);
    esp += 16; return; /* ret 12 */

}

/**
 * sub_004B26FA
 * Original: 0x004B26FA - 0x004B2733 (57 bytes, 19 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_004B26FA(void)
{
    uint32_t ebp;
    int _flags = 0; /* fallback flag var */
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_004B26FA: ;
    eax = MEM32(ecx + 0x834);
    ecx = MEM32(ecx + 0x82C);
    edx = eax;
    edx = edx - ecx;
    if (CMP_B(edx, 4)) { sub_004B2733(); return; } /* jb: below (unsigned <) */

loc_004B270F: ;
    if (CMP_EQ(MEM32(esp + 8), 0)) goto loc_004B2727; /* je: equal / zero */

loc_004B2716: ;
    edx = MEM32(esp + 4);
    edx = MEM32(edx + 0xC);
    edx = edx >> 9;
    eax = eax - edx;
    eax = eax - ecx;
    eax++;
    g_seh_ebp = ebp; sub_004B2736(); return; /* tail jmp 0x004B2736 */

loc_004B2727: ;
    eax = MEM32(esp + 4);
    eax = MEM32(eax + 0xC);
    eax = eax >> 9;
    g_seh_ebp = ebp; sub_004B2736(); return; /* tail jmp 0x004B2736 */

}

/**
 * sub_004B273C
 * Original: 0x004B273C - 0x004B2817 (219 bytes, 80 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_004B273C(void)
{
    uint32_t ebp;
    int _flags = 0; /* fallback flag var */

loc_004B273C: ;
    PUSH32(esp, ebp);
    ebp = esp;
    esp = esp - 0x20;
    PUSH32(esp, ebx);
    PUSH32(esp, esi);
    esi = ecx;
    PUSH32(esp, edi);
    eax = esi + 0x824;
    PUSH32(esp, eax);
    ecx = ebp + -32;
    PUSH32(esp, 0); sub_004B20D0(); /* call 0x004B20D0 */

loc_004B2756: ;
    eax = MEM32(esi + 0x834);
    eax = eax - MEM32(esi + 0x82C);
    edi = MEM32(ebp + 8);
    MEM32(ebp + -8) = MEM32(ebp + -8) & 0;
    (void)0; /* cmp eax, 4 - flags set for next jcc */
    ebx = MEM32(edi + 0x10);
    if (CMP_B(eax, 4)) { sub_004B2817(); return; } /* jb: below (unsigned <) */

loc_004B2775: ;
    eax = MEM32(edi + 0xC);
    eax = eax >> 9;
    PUSH32(esp, eax);
    ecx = ebp + -32;
    PUSH32(esp, 0); sub_004B21A4(); /* call 0x004B21A4 */

loc_004B2784: ;
    eax = ebp + 0xB;
    PUSH32(esp, eax);
    PUSH32(esp, 1);
    eax = ebp + -32;
    PUSH32(esp, eax);
    PUSH32(esp, ebx);
    ecx = esi;
    PUSH32(esp, 0); sub_004B262B(); /* call 0x004B262B */

loc_004B2796: ;
    PUSH32(esp, 1);
    ecx = ebp + -32;
    PUSH32(esp, 0); sub_004B212A(); /* call 0x004B212A */

loc_004B27A0: ;
    PUSH32(esp, ebx);
    PUSH32(esp, MEM32(ebp + -28));
    eax = ebp + -32;
    PUSH32(esp, eax);
    PUSH32(esp, ebx);
    ecx = esi;
    PUSH32(esp, 0); sub_004B262B(); /* call 0x004B262B */

loc_004B27B0: ;
    ebx = ebx + MEM32(ebp + -28);
    eax = esi + 0x824;
    PUSH32(esp, eax);
    ecx = ebp + -32;
    PUSH32(esp, 0); sub_004B20FB(); /* call 0x004B20FB */

loc_004B27C2: ;
    eax = MEM32(edi + 0xC);
    eax = eax >> 9;
    PUSH32(esp, eax);
    ecx = ebp + -32;
    PUSH32(esp, 0); sub_004B2179(); /* call 0x004B2179 */

loc_004B27D1: ;
    eax = MEM32(edi + 0xC);
    PUSH32(esp, ebx);
    eax++;
    edx = 0; /* xor self */
    ebx = 0x1F4;
    { uint64_t _dividend = ((uint64_t)edx << 32) | eax;
      eax = (uint32_t)(_dividend / (uint32_t)ebx);
      edx = (uint32_t)(_dividend % (uint32_t)ebx); }
    eax = MEM32(ebp + -16);
    eax = (uint32_t)((int32_t)eax * (int32_t)0x1F4);
    ecx = esi + 0x24;
    edx = edx + eax;
    PUSH32(esp, edx);
    eax = ebp + -32;
    PUSH32(esp, eax);
    PUSH32(esp, ecx);
    ecx = esi;
    PUSH32(esp, 0); sub_004B262B(); /* call 0x004B262B */

loc_004B27FA: ;
    eax = MEM32(ebp + -28);
    eax--;
    PUSH32(esp, eax);
    ecx = ebp + -32;
    PUSH32(esp, 0); sub_004B212A(); /* call 0x004B212A */

loc_004B2807: ;
    eax = ebp + -1;
    PUSH32(esp, eax);
    PUSH32(esp, 1);
    eax = ebp + -32;
    PUSH32(esp, eax);
    eax = esi + 0x24;
    PUSH32(esp, eax);
    g_seh_ebp = ebp; sub_004B286B(); return; /* tail jmp 0x004B286B */

}

/**
 * sub_004B2896
 * Original: 0x004B2896 - 0x004B28EB (85 bytes, 29 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_004B2896(void)
{
    uint32_t ebp;
    int _flags = 0; /* fallback flag var */

loc_004B2896: ;
    PUSH32(esp, ebp);
    ebp = esp;
    esp = esp - 0x2C;
    PUSH32(esp, ebx);
    PUSH32(esp, esi);
    esi = ecx;
    PUSH32(esp, edi);
    eax = esi + 0x824;
    PUSH32(esp, eax);
    ecx = ebp + -44;
    PUSH32(esp, 0); sub_004B20D0(); /* call 0x004B20D0 */

loc_004B28B0: ;
    eax = MEM32(esi + 0x834);
    eax = eax - MEM32(esi + 0x82C);
    ebx = MEM32(ebp + 8);
    (void)0; /* cmp eax, 4 - flags set for next jcc */
    edi = esi + 0x24;
    if (CMP_B(eax, 4)) { sub_004B28EB(); return; } /* jb: below (unsigned <) */

loc_004B28C7: ;
    eax = MEM32(ebx + 0xC);
    eax = eax >> 9;
    (void)0; /* cmp MEM32(ebp + 0xC), 0 - flags set for next jcc */
    ecx = ebp + -44;
    PUSH32(esp, eax);
    if (CMP_NE(MEM32(ebp + 0xC), 0)) goto loc_004B28E4; /* jne: not equal / not zero */

loc_004B28D7: ;
    PUSH32(esp, 0); sub_004B21A4(); /* call 0x004B21A4 */

loc_004B28DC: ;
    edi = MEM32(ebx + 0x10);

loc_004B28DF: ;
    eax = MEM32(ebp + -36);
    g_seh_ebp = ebp; sub_004B28F3(); return; /* tail jmp 0x004B28F3 */

loc_004B28E4: ;
    PUSH32(esp, 0); sub_004B2179(); /* call 0x004B2179 */

loc_004B28E9: ;
    goto loc_004B28DF;

}

/**
 * sub_004B2958
 * Original: 0x004B2958 - 0x004B299E (70 bytes, 24 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_004B2958(void)
{
    int _flags = 0; /* fallback flag var */

loc_004B2958: ;
    eax = MEM32(esp + 8);
    edx = MEM32(eax + 8);
    edx = edx << 9;
    edx = edx + MEM32(esp + 4);
    PUSH32(esp, esi);
    esi = MEM32(eax + 0xC);
    SET_LO8(edx, MEM8(edx + esi));
    SET_LO8(edx, LO8(edx) + 1);
    ecx = ecx + 0x83C;
    (void)0; /* cmp LO8(edx), 0x2A - flags set for next jcc */
    MEM8(ecx) = LO8(edx);
    if (CMP_NE(LO8(edx), 0x2A)) goto loc_004B297F; /* jne: not equal / not zero */

loc_004B297C: ;
    MEM8(ecx) = 0x2B;

loc_004B297F: ;
    edx = MEM32(eax + 8);
    SET_LO8(ecx, MEM8(ecx));
    esi = MEM32(eax + 0xC);
    edx = edx << 9;
    edx = edx + MEM32(esp + 8);
    PUSH32(esp, 1);
    MEM8(edx + esi) = LO8(ecx);
    ecx = eax;
    PUSH32(esp, 0); sub_004B212A(); /* call 0x004B212A */

loc_004B299A: ;
    POP32(esp, esi);
    esp += 12; return; /* ret 8 */

}

/**
 * sub_004B299E
 * Original: 0x004B299E - 0x004B29C6 (40 bytes, 13 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_004B299E(void)
{

loc_004B299E: ;
    eax = MEM32(esp + 8);
    edx = MEM32(eax + 0x10);
    SET_LO8(ecx, MEM8(ecx + 0x83C));
    edx = edx << 9;
    edx = edx + MEM32(eax + 0x14);
    PUSH32(esp, esi);
    esi = MEM32(esp + 8);
    MEM8(edx + esi) = LO8(ecx);
    PUSH32(esp, 1);
    ecx = eax;
    PUSH32(esp, 0); sub_004B215A(); /* call 0x004B215A */

loc_004B29C2: ;
    POP32(esp, esi);
    esp += 12; return; /* ret 8 */

}

/**
 * sub_004B29C6
 * Original: 0x004B29C6 - 0x004B29FD (55 bytes, 22 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_004B29C6(void)
{
    int _flags = 0; /* fallback flag var */
    int _cf = 0; /* carry flag */

loc_004B29C6: ;
    eax = MEM32(ecx + 0x20);
    if (TEST_NZ(eax, eax)) { sub_004B29FD(); return; } /* jne: not equal / not zero */

loc_004B29CD: ;
    eax = MEM32(ecx);
    PUSH32(esp, esi);
    esi = MEM32(esp + 8);
    eax = eax + eax * 4;
    ecx = ZX16(MEM16(eax * 2 + 0x88224E));
    PUSH32(esp, edi);
    edi = MEM32(esp + 0x10);
    eax = 0; /* xor self */
    /* repe cmpsb - string compare, ecx iterations */
    POP32(esp, edi);
    POP32(esp, esi);
    if (1 /* strings matched (repe cmpsb) */) goto loc_004B29F1; /* je: equal / zero */

loc_004B29EC: ;
    eax = _cf ? 0xFFFFFFFF : 0; /* sbb self (CF extend) */
    eax = eax - 0xFFFFFFFFu - _cf; /* sbb */

loc_004B29F1: ;
    ecx = 0; /* xor self */
    (void)0; /* test eax, eax - flags set for next jcc */
    SET_LO8(ecx, (TEST_Z(eax, eax)) ? 1 : 0); /* sete */
    eax = ecx;
    esp += 12; return; /* ret 8 */

}

/**
 * sub_004B29FF
 * Original: 0x004B29FF - 0x004B2AA6 (167 bytes, 61 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_004B29FF(void)
{
    uint32_t ebp;
    int _flags = 0; /* fallback flag var */

loc_004B29FF: ;
    PUSH32(esp, ebp);
    ebp = esp;
    esp = esp - 0x78;
    eax = MEM32(ebp + 8);
    PUSH32(esp, ebx);
    PUSH32(esp, esi);
    PUSH32(esp, edi);
    edi = ecx;
    esi = edi + eax * 4 + 0x1870;
    ecx = MEM32(esi);
    ebx = 0; /* xor self */
    if (TEST_Z(ecx, ecx)) goto loc_004B2A23; /* je: equal / zero */

loc_004B2A1C: ;
    PUSH32(esp, 0); sub_004B2289(); /* call 0x004B2289 */

loc_004B2A21: ;
    MEM32(esi) = MEM32(esi) & ebx;

loc_004B2A23: ;
    edi = edi + 0x1C;
    if (CMP_EQ(MEM32(edi), 0x56525347)) goto loc_004B2A33; /* je: equal / zero */

loc_004B2A2E: ;
    edi = 0x587BE4;

loc_004B2A33: ;
    PUSH32(esp, MEM32(ebp + 8));
    eax = ebp + -120;
    PUSH32(esp, edi);
    PUSH32(esp, 0x8822CC);
    PUSH32(esp, 0x64);
    PUSH32(esp, eax);
    PUSH32(esp, 0); sub_004B4554(); /* call 0x004B4554 */

loc_004B2A47: ;
    esp = esp + 0x14;
    eax = ebp + -120;
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, eax);
    eax = ebp + -8;
    PUSH32(esp, eax);
    PUSH32(esp, 0); RECOMP_ICALL_SAFE(MEM32(0x561060), _icall_esp); /* indirect call */
    }

loc_004B2A58: ;
    MEM32(ebp + -20) = MEM32(ebp + -20) & 0;
    eax = ebp + -8;
    MEM32(ebp + -16) = eax;
    eax = ebp + -20;
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, eax);
    MEM32(ebp + -12) = 0x40;
    PUSH32(esp, 0); RECOMP_ICALL_SAFE(MEM32(0x5611EC), _icall_esp); /* indirect call */
    }

loc_004B2A73: ;
    edi = eax;
    if (CMP_GE(edi & edi, 0)) goto loc_004B2A9D; /* jge: greater or equal (signed >=) */

loc_004B2A79: ;
    esi = MEM32(0x561054);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, edi);
    PUSH32(esp, 0); RECOMP_ICALL_SAFE(esi, _icall_esp); /* indirect call */
    }

loc_004B2A82: ;
    (void)0; /* test eax, eax - flags set for next jcc */
    PUSH32(esp, edi);
    if (CMP_G(eax & eax, 0)) goto loc_004B2A8D; /* jg: greater (signed >) */

loc_004B2A87: ;
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, 0); RECOMP_ICALL_SAFE(esi, _icall_esp); /* indirect call */
    }

loc_004B2A89: ;
    ebx = eax;
    goto loc_004B2A9D;

loc_004B2A8D: ;
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, 0); RECOMP_ICALL_SAFE(esi, _icall_esp); /* indirect call */
    }

loc_004B2A8F: ;
    ebx = eax;
    ebx = ebx & 0xFFFF;
    ebx = ebx | 0x80070000u;

loc_004B2A9D: ;
    POP32(esp, edi);
    POP32(esp, esi);
    eax = ebx;
    POP32(esp, ebx);
    esp = ebp;
    POP32(esp, ebp); /* leave */
    esp += 8; return; /* ret 4 */

}

/**
 * sub_004B2AA6
 * Original: 0x004B2AA6 - 0x004B2AB9 (19 bytes, 7 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_004B2AA6(void)
{
    uint32_t ebp;
    int _flags = 0; /* fallback flag var */
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_004B2AA6: ;
    ecx = MEM32(esp + 4);
    PUSH32(esp, esi);
    esi = 0; /* xor self */
    if (CMP_EQ(MEM32(ecx + 8), esi)) { sub_004B2AB9(); return; } /* je: equal / zero */

loc_004B2AB2: ;
    esi = 0x80004005u;
    g_seh_ebp = ebp; sub_004B2ABE(); return; /* tail jmp 0x004B2ABE */

}

/**
 * sub_004B2AF3
 * Original: 0x004B2AF3 - 0x004B2B66 (115 bytes, 40 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_004B2AF3(void)
{
    uint32_t ebp;
    int _flags = 0; /* fallback flag var */

loc_004B2AF3: ;
    PUSH32(esp, ebp);
    ebp = esp;
    PUSH32(esp, ecx);
    PUSH32(esp, ebx);
    PUSH32(esp, esi);
    ebx = ecx;
    esi = MEM32(ebx + 0x10);
    PUSH32(esp, edi);
    eax = esi + 0x84C;
    MEM32(ebx + 0x18) = eax;
    edi = MEM32(esi + 0x10);
    MEM32(ebp + -4) = eax;
    eax = edi + -1;
    PUSH32(esp, eax);
    PUSH32(esp, 0);
    PUSH32(esp, MEM32(esi + 0xC));
    ecx = esi;
    PUSH32(esp, 0); sub_004B24DC(); /* call 0x004B24DC */

loc_004B2B1E: ;
    PUSH32(esp, MEM32(ebp + -4));
    ecx = MEM32(esi + 0x8BC);
    PUSH32(esp, MEM32(esi + 0x8B8));
    eax = 0; /* xor self */
    PUSH32(esp, eax);
    PUSH32(esp, eax);
    edi = edi << 9;
    PUSH32(esp, edi);
    PUSH32(esp, MEM32(esi + 0xC));
    PUSH32(esp, MEM32(esi + 4));
    PUSH32(esp, 0); sub_004B54EA(); /* call 0x004B54EA */

loc_004B2B40: ;
    esi = MEM32(esi + 0x8BC);
    PUSH32(esp, 0);
    PUSH32(esp, MEM32(ebp + -4));
    ecx = esi;
    PUSH32(esp, 0); sub_004B548A(); /* call 0x004B548A */

loc_004B2B52: ;
    if (CMP_GE(eax & eax, 0)) { sub_004B2B66(); return; } /* jge: greater or equal (signed >=) */

loc_004B2B56: ;
    MEM32(ebx + 0x18) = MEM32(ebx + 0x18) & 0;
    MEM32(ebx + 0x14) = 1;
    MEM32(ebx + 0x2C) = eax;
    g_seh_ebp = ebp; sub_004B2B6D(); return; /* tail jmp 0x004B2B6D */

}

/**
 * sub_004B2B72
 * Original: 0x004B2B72 - 0x004B2BC0 (78 bytes, 28 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_004B2B72(void)
{
    int _flags = 0; /* fallback flag var */

loc_004B2B72: ;
    PUSH32(esp, esi);
    esi = ecx;
    if (CMP_EQ(MEM32(esi + 0x14), 1)) goto loc_004B2BBB; /* je: equal / zero */

loc_004B2B7B: ;
    PUSH32(esp, MEM32(esi + 0x18));
    ecx = MEM32(esi + 0x30);
    PUSH32(esp, 0); sub_004A5F72(); /* call 0x004A5F72 */

loc_004B2B86: ;
    (void)0; /* test eax, eax - flags set for next jcc */
    MEM32(esi + 0x2C) = eax;
    if (TEST_Z(eax, eax)) goto loc_004B2BAE; /* je: equal / zero */

loc_004B2B8D: ;
    MEM32(esi + 0x14) = 1;
    if (TEST_S(eax, eax)) goto loc_004B2BAE; /* jl: less (signed <) */

loc_004B2B96: ;
    eax = MEM32(esi + 0x10);
    eax = MEM32(eax + 0x10);
    eax = eax << 9;
    PUSH32(esp, eax);
    ecx = esi;
    PUSH32(esp, 0); sub_004B2202(); /* call 0x004B2202 */

loc_004B2BA7: ;
    if (CMP_GE(eax & eax, 0)) goto loc_004B2BAE; /* jge: greater or equal (signed >=) */

loc_004B2BAB: ;
    MEM32(esi + 0x2C) = eax;

loc_004B2BAE: ;
    if (CMP_NE(MEM32(esi + 0x14), 1)) goto loc_004B2BBB; /* jne: not equal / not zero */

loc_004B2BB4: ;
    ecx = esi;
    PUSH32(esp, 0); sub_004B2230(); /* call 0x004B2230 */

loc_004B2BBB: ;
    eax = MEM32(esi + 0x2C);
    POP32(esp, esi);
    esp += 4; return; /* ret */

}

/**
 * sub_004B2BC0
 * Original: 0x004B2BC0 - 0x004B2C40 (128 bytes, 45 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_004B2BC0(void)
{
    uint32_t ebp;
    int _flags = 0; /* fallback flag var */

loc_004B2BC0: ;
    PUSH32(esp, ebp);
    ebp = esp;
    PUSH32(esp, ecx);
    PUSH32(esp, ebx);
    PUSH32(esp, esi);
    ebx = ecx;
    esi = MEM32(ebx + 0x10);
    PUSH32(esp, edi);
    eax = esi + 0x84C;
    MEM32(ebx + 0x18) = eax;
    edi = MEM32(esi + 0x10);
    MEM32(ebp + -4) = eax;
    eax = edi + -1;
    PUSH32(esp, eax);
    PUSH32(esp, 0);
    PUSH32(esp, MEM32(esi + 0xC));
    ecx = esi;
    PUSH32(esp, 0); sub_004B24DC(); /* call 0x004B24DC */

loc_004B2BEB: ;
    PUSH32(esp, MEM32(ebp + -4));
    ecx = MEM32(esi + 0x8BC);
    PUSH32(esp, MEM32(esi + 0x8B8));
    eax = 0; /* xor self */
    PUSH32(esp, eax);
    PUSH32(esp, eax);
    edi = edi << 9;
    PUSH32(esp, edi);
    PUSH32(esp, MEM32(esi + 0xC));
    PUSH32(esp, MEM32(esi + 4));
    PUSH32(esp, 0); sub_004B54EA(); /* call 0x004B54EA */

loc_004B2C0D: ;
    esi = MEM32(esi + 0x8BC);
    edi = 0; /* xor self */
    PUSH32(esp, edi);
    PUSH32(esp, MEM32(ebp + -4));
    ecx = esi;
    PUSH32(esp, 0); sub_004B548A(); /* call 0x004B548A */

loc_004B2C20: ;
    esi = eax;
    if (CMP_GE(esi, edi)) { sub_004B2C40(); return; } /* jge: greater or equal (signed >=) */

loc_004B2C26: ;
    ecx = MEM32(ebx + 0x10);
    PUSH32(esp, 0); sub_004B2289(); /* call 0x004B2289 */

loc_004B2C2E: ;
    MEM32(ebx + 0x10) = edi;
    MEM32(ebx + 0x14) = 1;
    MEM32(ebx + 0x2C) = esi;
    MEM32(ebx + 0x18) = edi;
    g_seh_ebp = ebp; sub_004B2C47(); return; /* tail jmp 0x004B2C47 */

}

/**
 * sub_004B2C4E
 * Original: 0x004B2C4E - 0x004B2CA8 (90 bytes, 31 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_004B2C4E(void)
{
    int _flags = 0; /* fallback flag var */

loc_004B2C4E: ;
    PUSH32(esp, esi);
    esi = ecx;
    if (CMP_EQ(MEM32(esi + 0x14), 1)) goto loc_004B2CA3; /* je: equal / zero */

loc_004B2C57: ;
    PUSH32(esp, MEM32(esi + 0x18));
    ecx = MEM32(esi + 0x30);
    PUSH32(esp, 0); sub_004A5F72(); /* call 0x004A5F72 */

loc_004B2C62: ;
    (void)0; /* test eax, eax - flags set for next jcc */
    MEM32(esi + 0x2C) = eax;
    if (TEST_Z(eax, eax)) goto loc_004B2C8A; /* je: equal / zero */

loc_004B2C69: ;
    MEM32(esi + 0x14) = 1;
    if (TEST_S(eax, eax)) goto loc_004B2C8A; /* jl: less (signed <) */

loc_004B2C72: ;
    eax = MEM32(esi + 0x10);
    eax = MEM32(eax + 0x10);
    eax = eax << 9;
    PUSH32(esp, eax);
    ecx = esi;
    PUSH32(esp, 0); sub_004B2202(); /* call 0x004B2202 */

loc_004B2C83: ;
    if (CMP_GE(eax & eax, 0)) goto loc_004B2C8A; /* jge: greater or equal (signed >=) */

loc_004B2C87: ;
    MEM32(esi + 0x2C) = eax;

loc_004B2C8A: ;
    if (CMP_NE(MEM32(esi + 0x14), 1)) goto loc_004B2CA3; /* jne: not equal / not zero */

loc_004B2C90: ;
    ecx = esi;
    PUSH32(esp, 0); sub_004B2230(); /* call 0x004B2230 */

loc_004B2C97: ;
    ecx = MEM32(esi + 0x10);
    PUSH32(esp, 0); sub_004B2289(); /* call 0x004B2289 */

loc_004B2C9F: ;
    MEM32(esi + 0x10) = MEM32(esi + 0x10) & 0;

loc_004B2CA3: ;
    eax = MEM32(esi + 0x2C);
    POP32(esp, esi);
    esp += 4; return; /* ret */

}

/**
 * sub_004B2CA8
 * Original: 0x004B2CA8 - 0x004B2CF8 (80 bytes, 28 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_004B2CA8(void)
{
    int _flags = 0; /* fallback flag var */

loc_004B2CA8: ;
    PUSH32(esp, esi);
    esi = ecx;
    if (CMP_EQ(MEM32(esi + 0x14), 1)) goto loc_004B2CF3; /* je: equal / zero */

loc_004B2CB1: ;
    PUSH32(esp, MEM32(esi + 0x18));
    ecx = MEM32(esi + 0x30);
    PUSH32(esp, 0); sub_004A5F72(); /* call 0x004A5F72 */

loc_004B2CBC: ;
    (void)0; /* test eax, eax - flags set for next jcc */
    MEM32(esi + 0x2C) = eax;
    if (TEST_Z(eax, eax)) goto loc_004B2CE9; /* je: equal / zero */

loc_004B2CC3: ;
    MEM32(esi + 0x14) = 1;
    if (TEST_S(eax, eax)) goto loc_004B2CE9; /* jl: less (signed <) */

loc_004B2CCC: ;
    ecx = MEM32(esi + 0x10);
    PUSH32(esp, MEM32(ecx + 0x18));
    PUSH32(esp, 0); sub_004B2536(); /* call 0x004B2536 */

loc_004B2CD7: ;
    eax = eax << 9;
    PUSH32(esp, eax);
    ecx = esi;
    PUSH32(esp, 0); sub_004B2202(); /* call 0x004B2202 */

loc_004B2CE2: ;
    if (CMP_GE(eax & eax, 0)) goto loc_004B2CE9; /* jge: greater or equal (signed >=) */

loc_004B2CE6: ;
    MEM32(esi + 0x2C) = eax;

loc_004B2CE9: ;
    if (CMP_NE(MEM32(esi + 0x14), 1)) goto loc_004B2CF3; /* jne: not equal / not zero */

loc_004B2CEF: ;
    MEM32(esi + 0x18) = MEM32(esi + 0x18) & 0;

loc_004B2CF3: ;
    eax = MEM32(esi + 0x2C);
    POP32(esp, esi);
    esp += 4; return; /* ret */

}

/**
 * sub_004B2CF8
 * Original: 0x004B2CF8 - 0x004B2D3E (70 bytes, 24 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_004B2CF8(void)
{
    int _flags = 0; /* fallback flag var */

loc_004B2CF8: ;
    PUSH32(esp, esi);
    esi = ecx;
    if (CMP_EQ(MEM32(esi + 0x14), 1)) goto loc_004B2D39; /* je: equal / zero */

loc_004B2D01: ;
    PUSH32(esp, MEM32(esi + 0x18));
    ecx = MEM32(esi + 0x30);
    PUSH32(esp, 0); sub_004A5F72(); /* call 0x004A5F72 */

loc_004B2D0C: ;
    (void)0; /* test eax, eax - flags set for next jcc */
    MEM32(esi + 0x2C) = eax;
    if (TEST_Z(eax, eax)) goto loc_004B2D2F; /* je: equal / zero */

loc_004B2D13: ;
    MEM32(esi + 0x14) = 1;
    if (TEST_S(eax, eax)) goto loc_004B2D2F; /* jl: less (signed <) */

loc_004B2D1C: ;
    PUSH32(esp, 0x200);
    ecx = esi;
    PUSH32(esp, 0); sub_004B2202(); /* call 0x004B2202 */

loc_004B2D28: ;
    if (CMP_GE(eax & eax, 0)) goto loc_004B2D2F; /* jge: greater or equal (signed >=) */

loc_004B2D2C: ;
    MEM32(esi + 0x2C) = eax;

loc_004B2D2F: ;
    if (CMP_NE(MEM32(esi + 0x14), 1)) goto loc_004B2D39; /* jne: not equal / not zero */

loc_004B2D35: ;
    MEM32(esi + 0x18) = MEM32(esi + 0x18) & 0;

loc_004B2D39: ;
    eax = MEM32(esi + 0x2C);
    POP32(esp, esi);
    esp += 4; return; /* ret */

}

/**
 * sub_004B2D3E
 * Original: 0x004B2D3E - 0x004B2D6F (49 bytes, 17 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_004B2D3E(void)
{
    int _flags = 0; /* fallback flag var */

loc_004B2D3E: ;
    PUSH32(esp, esi);
    PUSH32(esp, MEM32(esp + 8));
    esi = ecx;
    PUSH32(esp, MEM32(esi + 0x1C));
    ecx = MEM32(esi + 0x10);
    PUSH32(esp, 0); sub_004B26FA(); /* call 0x004B26FA */

loc_004B2D50: ;
    PUSH32(esp, eax);
    ecx = esi;
    PUSH32(esp, 0); sub_004B2202(); /* call 0x004B2202 */

loc_004B2D58: ;
    if (TEST_S(eax, eax)) goto loc_004B2D6B; /* jl: less (signed <) */

loc_004B2D5C: ;
    PUSH32(esp, MEM32(esp + 8));
    ecx = MEM32(esi + 0x10);
    PUSH32(esp, MEM32(esi + 0x1C));
    PUSH32(esp, 0); sub_004B2896(); /* call 0x004B2896 */

loc_004B2D6B: ;
    POP32(esp, esi);
    esp += 8; return; /* ret 4 */

}

/**
 * sub_004B2D6F
 * Original: 0x004B2D6F - 0x004B2E57 (232 bytes, 75 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_004B2D6F(void)
{
    int _flags = 0; /* fallback flag var */

loc_004B2D6F: ;
    eax = 0; /* xor self */
    PUSH32(esp, esi);
    esi = ecx;
    ecx = MEM32(esi + 0x10);
    ecx = ecx << 9;
    edx = ecx;
    ecx = ecx >> 2;
    PUSH32(esp, edi);
    edi = MEM32(esi + 0xC);
    { uint32_t _i; for (_i = 0; _i < ecx; _i++) MEM32(edi + _i*4) = eax; }
    edi += ecx * 4; ecx = 0; /* rep stosd */
    ecx = edx;
    ecx = ecx & 3;
    memset((void*)XBOX_PTR(edi), (uint8_t)eax, ecx);
    edi += ecx; ecx = 0; /* rep stosb */
    eax = MEM32(esi);
    ecx = MEM32(esi + 0x14);
    eax = eax + eax * 4;
    eax = ZX16(MEM16(eax * 2 + 0x882248));
    MEM32(ecx) = eax;
    eax = MEM32(esi);
    ecx = MEM32(esi + 0x14);
    eax = eax + eax * 4;
    eax = ZX16(MEM16(eax * 2 + 0x88224A));
    MEM32(ecx + 4) = eax;
    eax = MEM32(esi);
    ecx = MEM32(esi + 0x14);
    eax = eax + eax * 4;
    eax = ZX16(MEM16(eax * 2 + 0x88224C));
    MEM32(ecx + 8) = eax;
    eax = MEM32(esi);
    ecx = MEM32(esi + 0x14);
    eax = eax + eax * 4;
    eax = ZX16(MEM16(eax * 2 + 0x88224E));
    MEM32(ecx + 0xC) = eax;
    eax = MEM32(esi);
    ecx = MEM32(esi + 0x14);
    eax = eax + eax * 4;
    eax = ZX16(MEM16(eax * 2 + 0x882250));
    MEM32(ecx + 0x10) = eax;
    eax = MEM32(esi + 0x14);
    MEM32(eax + 0x14) = 1;
    eax = MEM32(esi + 0x14);
    edi = 0; /* xor self */
    if (CMP_BE(MEM32(eax + 4), edi)) goto loc_004B2E25; /* jbe: below or equal (unsigned <=) */

loc_004B2DFE: ;
    PUSH32(esp, edi);
    ecx = esi;
    PUSH32(esp, 0); sub_004B22F4(); /* call 0x004B22F4 */

loc_004B2E06: ;
    eax = MEM32(esi + 0x82C);
    ecx = MEM32(esi + 0xC);
    eax = eax << 9;
    eax = eax + MEM32(esi + 0x830);
    edi++;
    MEM8(eax + ecx) = 0x2A;
    eax = MEM32(esi + 0x14);
    if (CMP_B(edi, MEM32(eax + 4))) goto loc_004B2DFE; /* jb: below (unsigned <) */

loc_004B2E25: ;
    eax = MEM32(esi + 0x14);
    edi = 0; /* xor self */
    if (CMP_BE(MEM32(eax), edi)) goto loc_004B2E54; /* jbe: below or equal (unsigned <=) */

loc_004B2E2E: ;
    PUSH32(esp, edi);
    ecx = esi;
    PUSH32(esp, 0); sub_004B2371(); /* call 0x004B2371 */

loc_004B2E36: ;
    eax = MEM32(esi + 0x82C);
    ecx = MEM32(esi + 0xC);
    eax = eax << 9;
    eax = eax + MEM32(esi + 0x830);
    edi++;
    MEM8(eax + ecx) = 0x2A;
    eax = MEM32(esi + 0x14);
    if (CMP_B(edi, MEM32(eax))) goto loc_004B2E2E; /* jb: below (unsigned <) */

loc_004B2E54: ;
    POP32(esp, edi);
    POP32(esp, esi);
    esp += 4; return; /* ret */

}

/**
 * sub_004B2E57
 * Original: 0x004B2E57 - 0x004B2FA8 (337 bytes, 110 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_004B2E57(void)
{
    uint32_t ebp;
    int _flags = 0; /* fallback flag var */
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_004B2E57: ;
    PUSH32(esp, ebp);
    ebp = esp + -120;
    esp = esp - 0xF4;
    eax = MEM32(ecx + 0x8BC);
    MEM32(ebp + 0x70) = MEM32(ebp + 0x70) & 0;
    eax = eax + 0x1C;
    (void)0; /* cmp MEM32(eax), 0x56525347 - flags set for next jcc */
    MEM32(ebp + 0x6C) = ecx;
    if (CMP_EQ(MEM32(eax), 0x56525347)) goto loc_004B2E7F; /* je: equal / zero */

loc_004B2E7A: ;
    eax = 0x587BE4;

loc_004B2E7F: ;
    PUSH32(esp, ebx);
    PUSH32(esp, esi);
    PUSH32(esp, edi);
    PUSH32(esp, MEM32(ecx));
    PUSH32(esp, eax);
    PUSH32(esp, 0x8822CC);
    eax = ebp + -24;
    PUSH32(esp, 0x64);
    PUSH32(esp, eax);
    PUSH32(esp, 0); sub_004B4554(); /* call 0x004B4554 */

loc_004B2E95: ;
    esi = MEM32(0x561060);
    edi = MEM32(0x56105C);
    esp = esp + 0x14;
    ebx = 0x80;

loc_004B2EA9: ;
    eax = ebp + -24;
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, eax);
    eax = ebp + 0x58;
    PUSH32(esp, eax);
    PUSH32(esp, 0); RECOMP_ICALL_SAFE(esi, _icall_esp); /* indirect call */
    }

loc_004B2EB3: ;
    MEM32(ebp + 0x60) = MEM32(ebp + 0x60) & 0;
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, 0x68);
    PUSH32(esp, 3);
    PUSH32(esp, 1);
    PUSH32(esp, ebx);
    eax = ebp + 0x58;
    MEM32(ebp + 0x64) = eax;
    PUSH32(esp, 0);
    eax = ebp + 0x4C;
    PUSH32(esp, eax);
    eax = ebp + 0x60;
    PUSH32(esp, eax);
    eax = MEM32(ebp + 0x6C);
    PUSH32(esp, 0xC0100080u);
    eax = eax + 4;
    PUSH32(esp, eax);
    MEM32(ebp + 0x68) = 0x40;
    PUSH32(esp, 0); RECOMP_ICALL_SAFE(edi, _icall_esp); /* indirect call */
    }

loc_004B2EE3: ;
    MEM32(ebp + 0x74) = eax;
    eax = MEM32(ebp + 0x6C);
    eax = eax + 4;
    if (CMP_NE(MEM32(eax), 0xFFFFFFFFu)) { sub_004B2FA8(); return; } /* jne: not equal / not zero */

loc_004B2EF5: ;
    if (CMP_NE(MEM32(ebp + 0x74), 0xC000003Au)) goto loc_004B2F95; /* jne: not equal / not zero */

loc_004B2F02: ;
    eax = MEM32(ebp + 0x6C);
    eax = MEM32(eax + 0x8BC);
    eax = eax + 0x1C;
    if (CMP_EQ(MEM32(eax), 0x56525347)) goto loc_004B2F1B; /* je: equal / zero */

loc_004B2F16: ;
    eax = 0x587BE4;

loc_004B2F1B: ;
    PUSH32(esp, eax);
    PUSH32(esp, 0x882308);
    eax = ebp + -124;
    PUSH32(esp, 0x64);
    PUSH32(esp, eax);
    PUSH32(esp, 0); sub_004B4554(); /* call 0x004B4554 */

loc_004B2F2C: ;
    esp = esp + 0x10;
    eax = ebp + -124;
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, eax);
    eax = ebp + 0x58;
    PUSH32(esp, eax);
    PUSH32(esp, 0); RECOMP_ICALL_SAFE(esi, _icall_esp); /* indirect call */
    }

loc_004B2F39: ;
    MEM32(ebp + 0x60) = MEM32(ebp + 0x60) & 0;
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, 0x4021);
    PUSH32(esp, 2);
    PUSH32(esp, 3);
    PUSH32(esp, ebx);
    eax = ebp + 0x58;
    MEM32(ebp + 0x64) = eax;
    PUSH32(esp, 0);
    eax = ebp + 0x4C;
    PUSH32(esp, eax);
    eax = ebp + 0x60;
    PUSH32(esp, eax);
    PUSH32(esp, 0x100001);
    eax = ebp + 0x54;
    PUSH32(esp, eax);
    MEM32(ebp + 0x68) = 0x40;
    PUSH32(esp, 0); RECOMP_ICALL_SAFE(edi, _icall_esp); /* indirect call */
    }

loc_004B2F69: ;
    (void)0; /* test eax, eax - flags set for next jcc */
    MEM32(ebp + 0x74) = eax;
    if (TEST_S(eax, eax)) goto loc_004B2F7E; /* jl: less (signed <) */

loc_004B2F70: ;
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, MEM32(ebp + 0x54));
    PUSH32(esp, 0); RECOMP_ICALL_SAFE(MEM32(0x561058), _icall_esp); /* indirect call */
    }

loc_004B2F79: ;
    goto loc_004B2EA9;

loc_004B2F7E: ;
    PUSH32(esp, eax);

loc_004B2F7F: ;
    esi = MEM32(0x561054);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, 0); RECOMP_ICALL_SAFE(esi, _icall_esp); /* indirect call */
    }

loc_004B2F87: ;
    (void)0; /* test eax, eax - flags set for next jcc */
    PUSH32(esp, MEM32(ebp + 0x74));
    if (CMP_G(eax & eax, 0)) goto loc_004B2F9A; /* jg: greater (signed >) */

loc_004B2F8E: ;
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, 0); RECOMP_ICALL_SAFE(esi, _icall_esp); /* indirect call */
    }

loc_004B2F90: ;
    MEM32(ebp + 0x70) = eax;
    g_seh_ebp = ebp; sub_004B2FB8(); return; /* tail jmp 0x004B2FB8 */

loc_004B2F95: ;
    PUSH32(esp, MEM32(ebp + 0x74));
    goto loc_004B2F7F;

loc_004B2F9A: ;
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, 0); RECOMP_ICALL_SAFE(esi, _icall_esp); /* indirect call */
    }

loc_004B2F9C: ;
    eax = eax & 0xFFFF;
    eax = eax | 0x80070000u;
    goto loc_004B2F90;

}

/**
 * sub_004B2FC3
 * Original: 0x004B2FC3 - 0x004B3011 (78 bytes, 32 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_004B2FC3(void)
{
    uint32_t ebp;
    int _flags = 0; /* fallback flag var */
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_004B2FC3: ;
    eax = MEM32(ecx);
    PUSH32(esp, ebx);
    ebx = MEM32(ecx + 0x1C);
    PUSH32(esp, esi);
    esi = eax + eax * 4;
    esi = esi << 1;
    SET_LO16(eax, MEM16(esi + 0x882250));
    if (TEST_Z(LO16(eax), LO16(eax))) goto loc_004B3008; /* je: equal / zero */

loc_004B2FDB: ;
    PUSH32(esp, ebp);
    PUSH32(esp, edi);
    edi = ZX16(LO16(eax));
    edi++;
    edi++;
    edx = 0; /* xor self */
    eax = edi;
    ebp = 0x1F4;
    { uint64_t _dividend = ((uint64_t)edx << 32) | eax;
      eax = (uint32_t)(_dividend / (uint32_t)ebp);
      edx = (uint32_t)(_dividend % (uint32_t)ebp); }
    if (TEST_Z(edx, edx)) goto loc_004B2FFA; /* je: equal / zero */

loc_004B2FF1: ;
    edi = eax + 1;
    edi = (uint32_t)((int32_t)edi * (int32_t)0x1F4);

loc_004B2FFA: ;
    eax = ZX16(MEM16(esi + 0x882248));
    eax = (uint32_t)((int32_t)eax * (int32_t)edi);
    POP32(esp, edi);
    ebx = ebx + eax;
    POP32(esp, ebp);

loc_004B3008: ;
    PUSH32(esp, ebx);
    PUSH32(esp, 0); sub_004B2536(); /* call 0x004B2536 */

loc_004B300E: ;
    POP32(esp, esi);
    POP32(esp, ebx);
    esp += 4; return; /* ret */

}

/**
 * sub_004B3011
 * Original: 0x004B3011 - 0x004B3054 (67 bytes, 24 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_004B3011(void)
{
    uint32_t ebp;
    int _flags = 0; /* fallback flag var */

loc_004B3011: ;
    PUSH32(esp, ebp);
    ebp = esp;
    esp = esp - 0x1C;
    eax = MEM32(ebp + 8);
    PUSH32(esp, ebx);
    PUSH32(esp, esi);
    PUSH32(esp, edi);
    edi = 0; /* xor self */
    ebx = ecx;
    PUSH32(esp, edi);
    MEM32(eax) = 1;
    PUSH32(esp, MEM32(ebx + 4));
    PUSH32(esp, 0); sub_0042C271(); /* call 0x0042C271 */

loc_004B3030: ;
    ecx = ebx;
    esi = eax;
    PUSH32(esp, 0); sub_004B2FC3(); /* call 0x004B2FC3 */

loc_004B3039: ;
    eax = eax << 9;
    if (CMP_EQ(esi, eax)) { sub_004B3054(); return; } /* je: equal / zero */

loc_004B3040: ;
    ecx = MEM32(ebx + 0x8BC);
    PUSH32(esp, eax);
    PUSH32(esp, MEM32(ebx + 4));
    PUSH32(esp, 0); sub_004BCE10(); /* call 0x004BCE10 */

loc_004B304F: ;
    g_seh_ebp = ebp; sub_004B30F7(); return; /* tail jmp 0x004B30F7 */

}

/**
 * sub_004B30FE
 * Original: 0x004B30FE - 0x004B312E (48 bytes, 20 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_004B30FE(void)
{
    uint32_t ebp;
    int _flags = 0; /* fallback flag var */

loc_004B30FE: ;
    PUSH32(esp, ebp);
    ebp = esp;
    PUSH32(esp, ecx);
    PUSH32(esp, ecx);
    PUSH32(esp, ebx);
    PUSH32(esp, esi);
    PUSH32(esp, edi);
    edi = MEM32(ebp + 0xC);
    eax = MEM32(edi + 8);
    ebx = ecx;
    ecx = 0; /* xor self */
    MEM32(ebp + -8) = eax;
    MEM32(edi) = ecx;
    eax = MEM32(ebx);
    eax = eax + eax * 4;
    (void)0; /* cmp MEM16(eax * 2 + 0x88224A), LO16(ecx) - flags set for next jcc */
    esi = ebx + 0x24;
    if (CMP_NE(MEM16(eax * 2 + 0x88224A), LO16(ecx))) { sub_004B312E(); return; } /* jne: not equal / not zero */

loc_004B3127: ;
    eax = 0; /* xor self */
    g_seh_ebp = ebp; sub_004B328B(); return; /* tail jmp 0x004B328B */

}

/**
 * sub_004B3292
 * Original: 0x004B3292 - 0x004B32D1 (63 bytes, 24 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_004B3292(void)
{
    uint32_t ebp;
    int _flags = 0; /* fallback flag var */

loc_004B3292: ;
    PUSH32(esp, ebp);
    ebp = esp;
    esp = esp - 0x28;
    MEM32(ebp + -8) = MEM32(ebp + -8) | 0xFFFFFFFFu;
    PUSH32(esp, ebx);
    PUSH32(esp, esi);
    esi = 0; /* xor self */
    (void)0; /* cmp MEM32(ebp + 0x10), 1 - flags set for next jcc */
    PUSH32(esp, edi);
    edi = MEM32(ebp + 0xC);
    eax = MEM32(edi + 8);
    ebx = ecx;
    MEM32(ebp + -4) = esi;
    MEM32(ebp + -40) = esi;
    MEM32(ebp + -36) = esi;
    MEM32(ebp + -32) = esi;
    MEM32(ebp + -28) = esi;
    MEM32(ebp + -24) = esi;
    MEM32(ebp + -20) = esi;
    MEM32(ebp + -12) = eax;
    MEM32(edi) = esi;
    if (CMP_NE(MEM32(ebp + 0x10), 1)) { sub_004B32D1(); return; } /* jne: not equal / not zero */

loc_004B32C9: ;
    MEM32(ebx + 0x844) = esi;
    g_seh_ebp = ebp; sub_004B32D7(); return; /* tail jmp 0x004B32D7 */

}

/**
 * sub_004B344B
 * Original: 0x004B344B - 0x004B349B (80 bytes, 29 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_004B344B(void)
{

loc_004B344B: ;
    PUSH32(esp, esi);
    PUSH32(esp, edi);
    PUSH32(esp, MEM32(esp + 0x10));
    esi = ecx;
    ecx = MEM32(esp + 0x10);
    PUSH32(esp, MEM32(esi + 0x8B8));
    edx = MEM32(ecx + 8);
    eax = edx;
    eax = eax << 9;
    edi = 0; /* xor self */
    PUSH32(esp, edi);
    PUSH32(esp, eax);
    eax = MEM32(ecx + 0x10);
    ecx = MEM32(esi + 0x8BC);
    eax = eax - edx;
    eax++;
    eax = eax << 9;
    PUSH32(esp, eax);
    eax = esi + 0x24;
    PUSH32(esp, eax);
    PUSH32(esp, MEM32(esi + 4));
    PUSH32(esp, 0); sub_004B54EA(); /* call 0x004B54EA */

loc_004B3485: ;
    ecx = MEM32(esi + 0x8BC);
    PUSH32(esp, 1);
    PUSH32(esp, MEM32(esp + 0x14));
    PUSH32(esp, 0); sub_004B548A(); /* call 0x004B548A */

loc_004B3496: ;
    POP32(esp, edi);
    POP32(esp, esi);
    esp += 12; return; /* ret 8 */

}

/**
 * sub_004B349B
 * Original: 0x004B349B - 0x004B354C (177 bytes, 65 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_004B349B(void)
{
    uint32_t ebp;
    int _flags = 0; /* fallback flag var */

loc_004B349B: ;
    PUSH32(esp, ebp);
    ebp = esp;
    PUSH32(esp, ecx);
    MEM32(ebp + -4) = MEM32(ebp + -4) & 0;
    PUSH32(esp, ebx);
    ebx = MEM32(ebp + 0xC);
    PUSH32(esp, esi);
    esi = ecx;
    PUSH32(esp, edi);
    edi = esi + 0x840;
    if (CMP_EQ(MEM32(edi), 0)) goto loc_004B34C9; /* je: equal / zero */

loc_004B34B6: ;
    PUSH32(esp, ebx);
    PUSH32(esp, MEM32(ebp + 0x18));
    PUSH32(esp, 0); sub_004B2958(); /* call 0x004B2958 */

loc_004B34BF: ;
    MEM32(edi) = MEM32(edi) & 0;
    MEM32(ebp + -4) = 1;

loc_004B34C9: ;
    if (CMP_EQ(MEM32(ebp + 0x14), 0)) goto loc_004B3537; /* je: equal / zero */

loc_004B34CF: ;
    eax = MEM32(esi + 0x834);
    eax = eax - MEM32(esi + 0x82C);
    if (CMP_AE(eax, MEM32(ebp + 0x10))) goto loc_004B3537; /* jae: above or equal (unsigned >=) */

loc_004B34E0: ;
    edi = MEM32(ebp + 0x18);
    PUSH32(esp, ebx);
    PUSH32(esp, edi);
    ecx = esi;
    PUSH32(esp, 0); sub_004B299E(); /* call 0x004B299E */

loc_004B34EC: ;
    ecx = MEM32(ebx + 4);
    edx = ecx;
    eax = 0; /* xor self */
    ecx = ecx >> 2;
    if (CMP_EQ(MEM32(ebp + -4), eax)) goto loc_004B3514; /* je: equal / zero */

loc_004B34FB: ;
    edi++;
    { uint32_t _i; for (_i = 0; _i < ecx; _i++) MEM32(edi + _i*4) = eax; }
    edi += ecx * 4; ecx = 0; /* rep stosd */
    ecx = edx;
    ecx = ecx & 3;
    memset((void*)XBOX_PTR(edi), (uint8_t)eax, ecx);
    edi += ecx; ecx = 0; /* rep stosb */
    eax = MEM32(esi);
    eax = eax + eax * 4;
    eax = ZX16(MEM16(eax * 2 + 0x882250));
    goto loc_004B352B;

loc_004B3514: ;
    { uint32_t _i; for (_i = 0; _i < ecx; _i++) MEM32(edi + _i*4) = eax; }
    edi += ecx * 4; ecx = 0; /* rep stosd */
    ecx = edx;
    ecx = ecx & 3;
    memset((void*)XBOX_PTR(edi), (uint8_t)eax, ecx);
    edi += ecx; ecx = 0; /* rep stosb */
    eax = MEM32(esi);
    eax = eax + eax * 4;
    eax = ZX16(MEM16(eax * 2 + 0x882250));
    eax++;

loc_004B352B: ;
    ecx = 0x7D0;
    edx = 0; /* xor self */
    { uint64_t _dividend = ((uint64_t)edx << 32) | eax;
      eax = (uint32_t)(_dividend / (uint32_t)ecx);
      edx = (uint32_t)(_dividend % (uint32_t)ecx); }
    MEM32(ebx + 4) = edx;

loc_004B3537: ;
    PUSH32(esp, MEM32(ebp + 0x18));
    ecx = esi;
    PUSH32(esp, ebx);
    PUSH32(esp, MEM32(ebp + 8));
    PUSH32(esp, 0); sub_004B2684(); /* call 0x004B2684 */

loc_004B3545: ;
    POP32(esp, edi);
    POP32(esp, esi);
    POP32(esp, ebx);
    esp = ebp;
    POP32(esp, ebp); /* leave */
    esp += 24; return; /* ret 20 */

}

/**
 * sub_004B354C
 * Original: 0x004B354C - 0x004B35AD (97 bytes, 32 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_004B354C(void)
{

loc_004B354C: ;
    PUSH32(esp, ebx);
    PUSH32(esp, esi);
    PUSH32(esp, edi);
    ebx = ecx;
    PUSH32(esp, MEM32(ebx + 0x844));
    PUSH32(esp, 0); sub_004B2371(); /* call 0x004B2371 */

loc_004B355C: ;
    eax = MEM32(ebx + 0x82C);
    SET_LO8(ecx, MEM8(ebx + 0x83C));
    esi = MEM32(esp + 0x10);
    eax = eax << 9;
    eax = eax + MEM32(ebx + 0x830);
    eax = eax + MEM32(ebx + 0xC);
    MEM8(eax) = LO8(ecx);
    ecx = MEM32(ebx);
    ecx = ecx + ecx * 4;
    ecx = ZX16(MEM16(ecx * 2 + 0x88224C));
    edx = ecx;
    ecx = ecx >> 2;
    edi = eax + 5;
    memcpy((void*)XBOX_PTR(edi), (void*)XBOX_PTR(esi), ecx * 4);
    esi += ecx * 4; edi += ecx * 4; ecx = 0; /* rep movsd */
    ecx = edx;
    ecx = ecx & 3;
    memcpy((void*)XBOX_PTR(edi), (void*)XBOX_PTR(esi), ecx);
    esi += ecx; edi += ecx; ecx = 0; /* rep movsb */
    ebx = MEM32(ebx + 0x14);
    ecx = MEM32(ebx + 0x14);
    POP32(esp, edi);
    edx = ecx + 1;
    MEM32(ebx + 0x14) = edx;
    POP32(esp, esi);
    MEM32(eax + 1) = ecx;
    POP32(esp, ebx);
    esp += 8; return; /* ret 4 */

}

/**
 * sub_004B35AD
 * Original: 0x004B35AD - 0x004B3614 (103 bytes, 32 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_004B35AD(void)
{

loc_004B35AD: ;
    PUSH32(esp, esi);
    PUSH32(esp, edi);
    PUSH32(esp, MEM32(esp + 0xC));
    esi = ecx;
    PUSH32(esp, 0); sub_004B354C(); /* call 0x004B354C */

loc_004B35BA: ;
    PUSH32(esp, MEM32(esi + 0x834));
    edi = esi + 0x82C;
    PUSH32(esp, MEM32(edi));
    ecx = esi;
    PUSH32(esp, MEM32(esi + 0xC));
    PUSH32(esp, 0); sub_004B24DC(); /* call 0x004B24DC */

loc_004B35D2: ;
    PUSH32(esp, MEM32(esp + 0x10));
    eax = MEM32(edi);
    PUSH32(esp, MEM32(esi + 0x8B8));
    ecx = 0; /* xor self */
    PUSH32(esp, ecx);
    ecx = MEM32(esi + 0xC);
    eax = eax << 9;
    PUSH32(esp, eax);
    PUSH32(esp, 0x200);
    ecx = ecx + eax;
    PUSH32(esp, ecx);
    PUSH32(esp, MEM32(esi + 4));
    ecx = MEM32(esi + 0x8BC);
    PUSH32(esp, 0); sub_004B54EA(); /* call 0x004B54EA */

loc_004B35FE: ;
    ecx = MEM32(esi + 0x8BC);
    PUSH32(esp, 0);
    PUSH32(esp, MEM32(esp + 0x14));
    PUSH32(esp, 0); sub_004B548A(); /* call 0x004B548A */

loc_004B360F: ;
    POP32(esp, edi);
    POP32(esp, esi);
    esp += 12; return; /* ret 8 */

}

/**
 * sub_004B3614
 * Original: 0x004B3614 - 0x004B3665 (81 bytes, 27 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_004B3614(void)
{
    uint32_t ebp;
    int _flags = 0; /* fallback flag var */
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_004B3614: ;
    PUSH32(esp, ebx);
    PUSH32(esp, esi);
    PUSH32(esp, edi);
    esi = ecx;
    PUSH32(esp, MEM32(esi + 0x844));
    edi = esi + 0x24;
    PUSH32(esp, 0); sub_004B2371(); /* call 0x004B2371 */

loc_004B3627: ;
    eax = MEM32(esi);
    eax = eax + eax * 4;
    eax = ZX16(MEM16(eax * 2 + 0x88224C));
    PUSH32(esp, edi);
    eax = eax + 5;
    PUSH32(esp, eax);
    eax = esi + 0x824;
    PUSH32(esp, eax);
    PUSH32(esp, MEM32(esi + 0xC));
    PUSH32(esp, 0); sub_004B262B(); /* call 0x004B262B */

loc_004B3648: ;
    ebx = MEM32(esp + 0x10);
    eax = edi + 5;
    PUSH32(esp, eax);
    PUSH32(esp, MEM32(ebx + 8));
    ecx = esi;
    PUSH32(esp, 0); sub_004B29C6(); /* call 0x004B29C6 */

loc_004B365A: ;
    if (TEST_NZ(eax, eax)) { sub_004B3665(); return; } /* jne: not equal / not zero */

loc_004B365E: ;
    eax = 0x80004005u;
    g_seh_ebp = ebp; sub_004B36CA(); return; /* tail jmp 0x004B36CA */

}

/**
 * sub_004B36D0
 * Original: 0x004B36D0 - 0x004B372F (95 bytes, 32 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_004B36D0(void)
{

loc_004B36D0: ;
    eax = MEM32(esp + 4);
    PUSH32(esp, esi);
    PUSH32(esp, edi);
    PUSH32(esp, MEM32(esp + 0x10));
    esi = ecx;
    ecx = MEM32(eax + 0xC);
    PUSH32(esp, MEM32(esi + 0x8B8));
    edx = MEM32(esi + 0x82C);
    ecx = ecx >> 9;
    eax = edx + ecx;
    eax = eax << 9;
    edi = 0; /* xor self */
    PUSH32(esp, edi);
    PUSH32(esp, eax);
    eax = MEM32(esi + 0x834);
    eax = eax - edx;
    eax = eax - ecx;
    ecx = MEM32(esi + 0x8BC);
    eax++;
    eax = eax << 9;
    PUSH32(esp, eax);
    eax = esi + 0x24;
    PUSH32(esp, eax);
    PUSH32(esp, MEM32(esi + 4));
    PUSH32(esp, 0); sub_004B54EA(); /* call 0x004B54EA */

loc_004B3719: ;
    ecx = MEM32(esi + 0x8BC);
    PUSH32(esp, 1);
    PUSH32(esp, MEM32(esp + 0x14));
    PUSH32(esp, 0); sub_004B548A(); /* call 0x004B548A */

loc_004B372A: ;
    POP32(esp, edi);
    POP32(esp, esi);
    esp += 12; return; /* ret 8 */

}

/**
 * sub_004B372F
 * Original: 0x004B372F - 0x004B3809 (218 bytes, 67 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_004B372F(void)
{
    int _flags = 0; /* fallback flag var */

loc_004B372F: ;
    PUSH32(esp, esi);
    esi = ecx;
    eax = MEM32(esi);
    eax = eax + eax * 4;
    if (CMP_EQ(MEM16(eax * 2 + 0x88224A), 0)) goto loc_004B3805; /* je: equal / zero */

loc_004B3746: ;
    PUSH32(esp, ebx);
    PUSH32(esp, edi);
    PUSH32(esp, 0);
    PUSH32(esp, 0); sub_004B22F4(); /* call 0x004B22F4 */

loc_004B374F: ;
    eax = MEM32(esi + 0xC);
    ebx = esi + 0x824;
    edi = MEM32(ebx + 8);
    edi = edi << 9;
    edi = edi + MEM32(ebx + 0xC);
    PUSH32(esp, ebx);
    PUSH32(esp, eax);
    edi = edi + eax;
    PUSH32(esp, 0); sub_004B2958(); /* call 0x004B2958 */

loc_004B376A: ;
    eax = MEM32(esi + 0x844);
    PUSH32(esp, 4);
    ecx = ebx;
    MEM32(edi + 1) = eax;
    PUSH32(esp, 0); sub_004B212A(); /* call 0x004B212A */

loc_004B377C: ;
    eax = MEM32(esi);
    PUSH32(esp, MEM32(esi + 0xC));
    eax = eax + eax * 4;
    eax = ZX16(MEM16(eax * 2 + 0x88224C));
    PUSH32(esp, ebx);
    PUSH32(esp, MEM32(esp + 0x18));
    ecx = esi;
    MEM32(esi + 0x828) = eax;
    PUSH32(esp, 0); sub_004B2684(); /* call 0x004B2684 */

loc_004B379E: ;
    (void)0; /* cmp MEM32(esp + 0x14), 0 - flags set for next jcc */
    eax = MEM32(esi);
    ecx = ebx;
    eax = eax + eax * 4;
    if (CMP_EQ(MEM32(esp + 0x14), 0)) goto loc_004B37EA; /* je: equal / zero */

loc_004B37AC: ;
    eax = ZX16(MEM16(eax * 2 + 0x88224C));
    PUSH32(esp, eax);
    PUSH32(esp, 0); sub_004B212A(); /* call 0x004B212A */

loc_004B37BA: ;
    eax = MEM32(esi);
    eax = eax + eax * 4;
    eax = ZX16(MEM16(eax * 2 + 0x882250));
    PUSH32(esp, ebx);
    PUSH32(esp, MEM32(esi + 0xC));
    eax++;
    ecx = esi;
    MEM32(esi + 0x828) = eax;
    PUSH32(esp, 0); sub_004B299E(); /* call 0x004B299E */

loc_004B37D9: ;
    PUSH32(esp, MEM32(esi + 0xC));
    ecx = esi;
    PUSH32(esp, ebx);
    PUSH32(esp, MEM32(esp + 0x1C));
    PUSH32(esp, 0); sub_004B2684(); /* call 0x004B2684 */

loc_004B37E8: ;
    goto loc_004B3803;

loc_004B37EA: ;
    eax = ZX16(MEM16(eax * 2 + 0x882250));
    PUSH32(esp, eax);
    PUSH32(esp, 0); sub_004B212A(); /* call 0x004B212A */

loc_004B37F8: ;
    PUSH32(esp, ebx);
    PUSH32(esp, MEM32(esi + 0xC));
    ecx = esi;
    PUSH32(esp, 0); sub_004B299E(); /* call 0x004B299E */

loc_004B3803: ;
    POP32(esp, edi);
    POP32(esp, ebx);

loc_004B3805: ;
    POP32(esp, esi);
    esp += 12; return; /* ret 8 */

}

/**
 * sub_004B3809
 * Original: 0x004B3809 - 0x004B3873 (106 bytes, 26 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_004B3809(void)
{
    int _flags = 0; /* fallback flag var */

loc_004B3809: ;
    PUSH32(esp, MEM32(ecx + 0x844));
    PUSH32(esp, 0); sub_004B2371(); /* call 0x004B2371 */

loc_004B3814: ;
    eax = MEM32(ecx + 0x82C);
    edx = MEM32(ecx + 0xC);
    eax = eax << 9;
    eax = eax + MEM32(ecx + 0x830);
    MEM8(eax + edx) = 0x2A;
    eax = MEM32(ecx);
    edx = eax + eax * 4;
    eax = 0; /* xor self */
    if (CMP_EQ(MEM16(edx * 2 + 0x88224A), LO16(eax))) goto loc_004B385F; /* je: equal / zero */

loc_004B383B: ;
    if (CMP_EQ(MEM32(ecx + 0x848), eax)) goto loc_004B385F; /* je: equal / zero */

loc_004B3843: ;
    PUSH32(esp, eax);
    PUSH32(esp, 0); sub_004B22F4(); /* call 0x004B22F4 */

loc_004B3849: ;
    eax = MEM32(ecx + 0x82C);
    edx = MEM32(ecx + 0xC);
    eax = eax << 9;
    eax = eax + MEM32(ecx + 0x830);
    MEM8(eax + edx) = 0x2A;

loc_004B385F: ;
    eax = MEM32(ecx);
    eax = eax + eax * 4;
    eax = ZX16(MEM16(eax * 2 + 0x882248));
    MEM32(ecx + 0x844) = eax;
    esp += 4; return; /* ret */

}

/**
 * sub_004B3873
 * Original: 0x004B3873 - 0x004B3885 (18 bytes, 6 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_004B3873(void)
{
    uint32_t ebp;
    int _flags = 0; /* fallback flag var */
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_004B3873: ;
    PUSH32(esp, ebx);
    ebx = MEM32(esp + 8);
    if (CMP_EQ(MEM32(ebx + 8), 0)) { sub_004B3885(); return; } /* je: equal / zero */

loc_004B387E: ;
    eax = 0x80004005u;
    g_seh_ebp = ebp; sub_004B38A8(); return; /* tail jmp 0x004B38A8 */

}

/**
 * sub_004B38AC
 * Original: 0x004B38AC - 0x004B38C7 (27 bytes, 10 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_004B38AC(void)
{
    uint32_t ebp;
    int _flags = 0; /* fallback flag var */

loc_004B38AC: ;
    PUSH32(esp, ebp);
    ebp = esp;
    PUSH32(esp, ecx);
    MEM32(ebp + -4) = MEM32(ebp + -4) & 0;
    PUSH32(esp, edi);
    edi = MEM32(ebp + 8);
    if (CMP_EQ(MEM32(edi + 8), 0)) { sub_004B38C7(); return; } /* je: equal / zero */

loc_004B38BE: ;
    MEM32(ebp + -4) = 0x80004005u;
    g_seh_ebp = ebp; sub_004B3906(); return; /* tail jmp 0x004B3906 */

}

/**
 * sub_004B390E
 * Original: 0x004B390E - 0x004B392A (28 bytes, 12 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_004B390E(void)
{
    uint32_t ebp;
    int _flags = 0; /* fallback flag var */

loc_004B390E: ;
    PUSH32(esp, ebp);
    ebp = esp;
    PUSH32(esp, ecx);
    PUSH32(esp, ebx);
    PUSH32(esp, edi);
    edi = MEM32(ebp + 8);
    ebx = 0; /* xor self */
    (void)0; /* cmp MEM32(edi + 8), ebx - flags set for next jcc */
    MEM32(ebp + -4) = ebx;
    if (CMP_EQ(MEM32(edi + 8), ebx)) { sub_004B392A(); return; } /* je: equal / zero */

loc_004B3921: ;
    MEM32(ebp + -4) = 0x80004005u;
    g_seh_ebp = ebp; sub_004B3958(); return; /* tail jmp 0x004B3958 */

}

/**
 * sub_004B3961
 * Original: 0x004B3961 - 0x004B397D (28 bytes, 12 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_004B3961(void)
{
    uint32_t ebp;
    int _flags = 0; /* fallback flag var */

loc_004B3961: ;
    PUSH32(esp, ebp);
    ebp = esp;
    PUSH32(esp, ecx);
    PUSH32(esp, ebx);
    PUSH32(esp, esi);
    esi = MEM32(ebp + 8);
    ebx = 0; /* xor self */
    (void)0; /* cmp MEM32(esi + 8), ebx - flags set for next jcc */
    MEM32(ebp + -4) = ebx;
    if (CMP_EQ(MEM32(esi + 8), ebx)) { sub_004B397D(); return; } /* je: equal / zero */

loc_004B3974: ;
    MEM32(ebp + -4) = 0x80004005u;
    g_seh_ebp = ebp; sub_004B39AE(); return; /* tail jmp 0x004B39AE */

}

/**
 * sub_004B39B7
 * Original: 0x004B39B7 - 0x004B39FA (67 bytes, 27 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_004B39B7(void)
{
    int _flags = 0; /* fallback flag var */

loc_004B39B7: ;
    PUSH32(esp, ebx);
    PUSH32(esp, edi);
    edi = MEM32(esp + 0xC);
    (void)0; /* cmp MEM32(edi + 8), 0 - flags set for next jcc */
    ebx = ecx;
    if (CMP_EQ(MEM32(edi + 8), 0)) goto loc_004B39D4; /* je: equal / zero */

loc_004B39C5: ;
    PUSH32(esp, MEM32(esp + 0x10));
    ecx = ebx;
    PUSH32(esp, 0); sub_004A5F72(); /* call 0x004A5F72 */

loc_004B39D0: ;
    if (TEST_Z(eax, eax)) goto loc_004B39C5; /* je: equal / zero */

loc_004B39D4: ;
    ecx = MEM32(esp + 0x10);
    ebx = 0; /* xor self */
    ebx++;
    PUSH32(esp, ebx);
    PUSH32(esp, 0);
    PUSH32(esp, 0);
    PUSH32(esp, 0);
    PUSH32(esp, 5);
    PUSH32(esp, 0); sub_004B21D2(); /* call 0x004B21D2 */

loc_004B39E9: ;
    PUSH32(esp, 0); sub_004B2BC0(); /* call 0x004B2BC0 */

loc_004B39EE: ;
    if (TEST_S(eax, eax)) goto loc_004B39F5; /* jl: less (signed <) */

loc_004B39F2: ;
    MEM32(edi + 8) = ebx;

loc_004B39F5: ;
    POP32(esp, edi);
    POP32(esp, ebx);
    esp += 12; return; /* ret 8 */

}

/**
 * sub_004B39FA
 * Original: 0x004B39FA - 0x004B3A26 (44 bytes, 15 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_004B39FA(void)
{
    int _flags = 0; /* fallback flag var */

loc_004B39FA: ;
    PUSH32(esp, esi);
    esi = ecx;
    ecx = MEM32(esi + 0x10);
    eax = ecx + 0x84C;
    PUSH32(esp, eax);
    PUSH32(esp, MEM32(esi + 0x1C));
    MEM32(esi + 0x18) = eax;
    PUSH32(esp, 0); sub_004B3614(); /* call 0x004B3614 */

loc_004B3A12: ;
    if (CMP_GE(eax & eax, 0)) { sub_004B3A26(); return; } /* jge: greater or equal (signed >=) */

loc_004B3A16: ;
    MEM32(esi + 0x18) = MEM32(esi + 0x18) & 0;
    MEM32(esi + 0x2C) = eax;
    MEM32(esi + 0x14) = 1;
    POP32(esp, esi);
    esp += 4; return; /* ret */

}

/**
 * sub_004B3A2F
 * Original: 0x004B3A2F - 0x004B3B17 (232 bytes, 80 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_004B3A2F(void)
{
    int _flags = 0; /* fallback flag var */

loc_004B3A2F: ;
    PUSH32(esp, ebx);
    PUSH32(esp, esi);
    ebx = 0; /* xor self */
    PUSH32(esp, edi);
    esi = ecx;
    ebx++;
    edi = 0; /* xor self */
    if (CMP_EQ(MEM32(esi + 0x14), ebx)) goto loc_004B3B10; /* je: equal / zero */

loc_004B3A42: ;
    PUSH32(esp, MEM32(esi + 0x18));
    ecx = MEM32(esi + 0x30);
    PUSH32(esp, 0); sub_004A5F72(); /* call 0x004A5F72 */

loc_004B3A4D: ;
    (void)0; /* test eax, eax - flags set for next jcc */
    MEM32(esi + 0x2C) = eax;
    if (TEST_Z(eax, eax)) goto loc_004B3B04; /* je: equal / zero */

loc_004B3A58: ;
    if (TEST_S(eax, eax)) goto loc_004B3B01; /* jl: less (signed <) */

loc_004B3A5E: ;
    if (CMP_NE(MEM32(esi + 0x14), 4)) goto loc_004B3A67; /* jne: not equal / not zero */

loc_004B3A64: ;
    MEM32(esi + 0x14) = ebx;

loc_004B3A67: ;
    if (CMP_NE(MEM32(esi + 0x14), 2)) goto loc_004B3ABB; /* jne: not equal / not zero */

loc_004B3A6D: ;
    eax = MEM32(esi + 0x10);
    ecx = MEM32(eax + 0x834);
    ecx = ecx - MEM32(eax + 0x82C);
    if (CMP_B(ecx, 4)) goto loc_004B3AB8; /* jb: below (unsigned <) */

loc_004B3A81: ;
    PUSH32(esp, 0);
    ecx = esi;
    PUSH32(esp, 0); sub_004B2D3E(); /* call 0x004B2D3E */

loc_004B3A8A: ;
    edi = eax;
    if (TEST_S(edi, edi)) goto loc_004B3ADF; /* jl: less (signed <) */

loc_004B3A90: ;
    ecx = MEM32(esi + 0x10);
    eax = ecx + 0x84C;
    PUSH32(esp, eax);
    PUSH32(esp, MEM32(esi + 0x1C));
    MEM32(esi + 0x18) = eax;
    PUSH32(esp, 0); sub_004B36D0(); /* call 0x004B36D0 */

loc_004B3AA5: ;
    edi = eax;
    if (TEST_S(edi, edi)) goto loc_004B3ADF; /* jl: less (signed <) */

loc_004B3AAB: ;
    MEM32(esi + 0x2C) = MEM32(esi + 0x2C) & 0;
    MEM32(esi + 0x14) = 4;
    goto loc_004B3ABB;

loc_004B3AB8: ;
    MEM32(esi + 0x14) = ebx;

loc_004B3ABB: ;
    if (CMP_NE(MEM32(esi + 0x14), ebx)) goto loc_004B3AFA; /* jne: not equal / not zero */

loc_004B3AC0: ;
    PUSH32(esp, ebx);
    ecx = esi;
    PUSH32(esp, 0); sub_004B2D3E(); /* call 0x004B2D3E */

loc_004B3AC8: ;
    edi = eax;
    if (TEST_S(edi, edi)) goto loc_004B3ADF; /* jl: less (signed <) */

loc_004B3ACE: ;
    PUSH32(esp, MEM32(esi + 0x1C));
    ecx = MEM32(esi + 0x10);
    PUSH32(esp, 0); sub_004B273C(); /* call 0x004B273C */

loc_004B3AD9: ;
    edi = eax;
    if (CMP_GE(edi & edi, 0)) goto loc_004B3AE9; /* jge: greater or equal (signed >=) */

loc_004B3ADF: ;
    ecx = MEM32(esi + 0x10);
    PUSH32(esp, 0); sub_004B3809(); /* call 0x004B3809 */

loc_004B3AE7: ;
    goto loc_004B3AFA;

loc_004B3AE9: ;
    eax = MEM32(esi + 0x1C);
    PUSH32(esp, MEM32(eax + 0x10));
    ecx = MEM32(esi + 0x10);
    PUSH32(esp, MEM32(eax + 8));
    PUSH32(esp, 0); sub_004B372F(); /* call 0x004B372F */

loc_004B3AFA: ;
    if (CMP_GE(edi & edi, 0)) goto loc_004B3B04; /* jge: greater or equal (signed >=) */

loc_004B3AFE: ;
    MEM32(esi + 0x2C) = edi;

loc_004B3B01: ;
    MEM32(esi + 0x14) = ebx;

loc_004B3B04: ;
    if (CMP_NE(MEM32(esi + 0x14), ebx)) goto loc_004B3B10; /* jne: not equal / not zero */

loc_004B3B09: ;
    ecx = esi;
    PUSH32(esp, 0); sub_004B2230(); /* call 0x004B2230 */

loc_004B3B10: ;
    eax = MEM32(esi + 0x2C);
    POP32(esp, edi);
    POP32(esp, esi);
    POP32(esp, ebx);
    esp += 4; return; /* ret */

}

/**
 * sub_004B3B17
 * Original: 0x004B3B17 - 0x004B3B92 (123 bytes, 42 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_004B3B17(void)
{
    uint32_t ebp;
    int _flags = 0; /* fallback flag var */

loc_004B3B17: ;
    PUSH32(esp, ebp);
    ebp = esp;
    PUSH32(esp, ecx);
    PUSH32(esp, ebx);
    PUSH32(esp, esi);
    PUSH32(esp, edi);
    edi = ecx;
    ecx = MEM32(edi + 0x10);
    PUSH32(esp, 0); sub_004B2D6F(); /* call 0x004B2D6F */

loc_004B3B28: ;
    esi = MEM32(edi + 0x10);
    eax = esi + 0x84C;
    MEM32(edi + 0x18) = eax;
    ebx = MEM32(esi + 0x10);
    MEM32(ebp + -4) = eax;
    eax = ebx + -1;
    PUSH32(esp, eax);
    PUSH32(esp, 0);
    PUSH32(esp, MEM32(esi + 0xC));
    ecx = esi;
    PUSH32(esp, 0); sub_004B24DC(); /* call 0x004B24DC */

loc_004B3B4A: ;
    PUSH32(esp, MEM32(ebp + -4));
    ecx = MEM32(esi + 0x8BC);
    PUSH32(esp, MEM32(esi + 0x8B8));
    eax = 0; /* xor self */
    PUSH32(esp, eax);
    PUSH32(esp, eax);
    ebx = ebx << 9;
    PUSH32(esp, ebx);
    PUSH32(esp, MEM32(esi + 0xC));
    PUSH32(esp, MEM32(esi + 4));
    PUSH32(esp, 0); sub_004B54EA(); /* call 0x004B54EA */

loc_004B3B6C: ;
    esi = MEM32(esi + 0x8BC);
    PUSH32(esp, 0);
    PUSH32(esp, MEM32(ebp + -4));
    ecx = esi;
    PUSH32(esp, 0); sub_004B548A(); /* call 0x004B548A */

loc_004B3B7E: ;
    if (CMP_GE(eax & eax, 0)) { sub_004B3B92(); return; } /* jge: greater or equal (signed >=) */

loc_004B3B82: ;
    MEM32(edi + 0x18) = MEM32(edi + 0x18) & 0;
    MEM32(edi + 0x14) = 1;
    MEM32(edi + 0x2C) = eax;
    g_seh_ebp = ebp; sub_004B3B99(); return; /* tail jmp 0x004B3B99 */

}

/**
 * sub_004B3B9E
 * Original: 0x004B3B9E - 0x004B3C28 (138 bytes, 47 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_004B3B9E(void)
{
    uint32_t ebp;
    int _flags = 0; /* fallback flag var */

loc_004B3B9E: ;
    PUSH32(esp, ebp);
    ebp = esp;
    PUSH32(esp, ecx);
    PUSH32(esp, ebx);
    PUSH32(esp, esi);
    PUSH32(esp, edi);
    edi = ecx;
    PUSH32(esp, MEM32(edi + 0x24));
    ecx = MEM32(edi + 0x10);
    PUSH32(esp, MEM32(edi + 0x20));
    PUSH32(esp, 0); sub_004B372F(); /* call 0x004B372F */

loc_004B3BB5: ;
    esi = MEM32(edi + 0x10);
    eax = esi + 0x84C;
    MEM32(edi + 0x18) = eax;
    PUSH32(esp, MEM32(esi + 0x18));
    ecx = esi;
    MEM32(ebp + -4) = eax;
    PUSH32(esp, 0); sub_004B2536(); /* call 0x004B2536 */

loc_004B3BCE: ;
    ebx = eax;
    eax = ebx + -1;
    PUSH32(esp, eax);
    PUSH32(esp, 0);
    PUSH32(esp, MEM32(esi + 0xC));
    ecx = esi;
    PUSH32(esp, 0); sub_004B24DC(); /* call 0x004B24DC */

loc_004B3BE0: ;
    PUSH32(esp, MEM32(ebp + -4));
    ecx = MEM32(esi + 0x8BC);
    PUSH32(esp, MEM32(esi + 0x8B8));
    eax = 0; /* xor self */
    PUSH32(esp, eax);
    PUSH32(esp, eax);
    ebx = ebx << 9;
    PUSH32(esp, ebx);
    PUSH32(esp, MEM32(esi + 0xC));
    PUSH32(esp, MEM32(esi + 4));
    PUSH32(esp, 0); sub_004B54EA(); /* call 0x004B54EA */

loc_004B3C02: ;
    esi = MEM32(esi + 0x8BC);
    PUSH32(esp, 0);
    PUSH32(esp, MEM32(ebp + -4));
    ecx = esi;
    PUSH32(esp, 0); sub_004B548A(); /* call 0x004B548A */

loc_004B3C14: ;
    if (CMP_GE(eax & eax, 0)) { sub_004B3C28(); return; } /* jge: greater or equal (signed >=) */

loc_004B3C18: ;
    MEM32(edi + 0x18) = MEM32(edi + 0x18) & 0;
    MEM32(edi + 0x2C) = eax;
    MEM32(edi + 0x14) = 1;
    g_seh_ebp = ebp; sub_004B3C2F(); return; /* tail jmp 0x004B3C2F */

}

/**
 * sub_004B3C34
 * Original: 0x004B3C34 - 0x004B3C60 (44 bytes, 15 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_004B3C34(void)
{
    int _flags = 0; /* fallback flag var */

loc_004B3C34: ;
    PUSH32(esp, esi);
    esi = ecx;
    ecx = MEM32(esi + 0x10);
    eax = ecx + 0x84C;
    PUSH32(esp, eax);
    PUSH32(esp, MEM32(esi + 0x20));
    MEM32(esi + 0x18) = eax;
    PUSH32(esp, 0); sub_004B35AD(); /* call 0x004B35AD */

loc_004B3C4C: ;
    if (CMP_GE(eax & eax, 0)) { sub_004B3C60(); return; } /* jge: greater or equal (signed >=) */

loc_004B3C50: ;
    MEM32(esi + 0x18) = MEM32(esi + 0x18) & 0;
    MEM32(esi + 0x2C) = eax;
    MEM32(esi + 0x14) = 1;
    POP32(esp, esi);
    esp += 4; return; /* ret */

}

/**
 * sub_004B3C69
 * Original: 0x004B3C69 - 0x004B3C85 (28 bytes, 10 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_004B3C69(void)
{

loc_004B3C69: ;
    PUSH32(esp, esi);
    esi = ecx;
    PUSH32(esp, 0); sub_004B2FC3(); /* call 0x004B2FC3 */

loc_004B3C71: ;
    ecx = MEM32(esi + 0x8BC);
    eax = eax << 9;
    PUSH32(esp, eax);
    PUSH32(esp, MEM32(esi + 4));
    PUSH32(esp, 0); sub_004BCE10(); /* call 0x004BCE10 */

loc_004B3C83: ;
    POP32(esp, esi);
    esp += 4; return; /* ret */

}

/**
 * sub_004B3C85
 * Original: 0x004B3C85 - 0x004B3D57 (210 bytes, 82 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_004B3C85(void)
{
    uint32_t ebp;
    int _flags = 0; /* fallback flag var */

loc_004B3C85: ;
    PUSH32(esp, ebp);
    ebp = esp;
    esp = esp - 0x20;
    PUSH32(esp, ebx);
    PUSH32(esp, esi);
    PUSH32(esp, edi);
    edi = MEM32(ebp + 8);
    esi = MEM32(edi + 0x10);
    ebx = ecx;
    ecx = MEM32(edi + 8);
    eax = ecx;
    esi = esi - ecx;
    eax = eax << 9;
    esi++;
    PUSH32(esp, edi);
    ecx = ebp + -32;
    MEM32(ebp + -8) = eax;
    MEM32(ebp + 8) = esi;
    PUSH32(esp, 0); sub_004B20D0(); /* call 0x004B20D0 */

loc_004B3CB0: ;
    eax = MEM32(ebp + -24);
    MEM32(ebp + -16) = MEM32(ebp + -16) - eax;
    MEM32(ebp + -24) = MEM32(ebp + -24) & 0;
    eax = ebx + 0x24;
    PUSH32(esp, eax);
    PUSH32(esp, 1);
    PUSH32(esp, 4);
    eax = ebp + -32;
    PUSH32(esp, eax);
    eax = MEM32(ebp + 0xC);
    PUSH32(esp, MEM32(eax));
    ecx = ebx;
    PUSH32(esp, 0); sub_004B349B(); /* call 0x004B349B */

loc_004B3CD2: ;
    ecx = MEM32(ebp + 0xC);
    MEM32(ecx) = eax;
    ecx = MEM32(ebx + 0x10);
    eax = MEM32(edi + 8);
    ecx--;
    if (CMP_NE(eax, ecx)) goto loc_004B3D0B; /* jne: not equal / not zero */

loc_004B3CE2: ;
    edx = MEM32(edi + 0xC);
    edi = eax;
    edi = edi << 9;
    edi = edi + MEM32(ebx + 0xC);
    ecx = 0x1F4;
    ecx = ecx - edx;
    eax = ecx;
    ecx = ecx >> 2;
    edi = edi + edx;
    esi = edx + ebx + 0x24;
    memcpy((void*)XBOX_PTR(edi), (void*)XBOX_PTR(esi), ecx * 4);
    esi += ecx * 4; edi += ecx * 4; ecx = 0; /* rep movsd */
    ecx = eax;
    ecx = ecx & 3;
    memcpy((void*)XBOX_PTR(edi), (void*)XBOX_PTR(esi), ecx);
    esi += ecx; edi += ecx; ecx = 0; /* rep movsb */
    esi = MEM32(ebp + 8);

loc_004B3D0B: ;
    eax = esi + -1;
    PUSH32(esp, eax);
    PUSH32(esp, 0);
    edi = ebx + 0x24;
    PUSH32(esp, edi);
    ecx = ebx;
    PUSH32(esp, 0); sub_004B24DC(); /* call 0x004B24DC */

loc_004B3D1C: ;
    PUSH32(esp, MEM32(ebp + 0x10));
    ecx = MEM32(ebx + 0x8BC);
    PUSH32(esp, MEM32(ebx + 0x8B8));
    eax = 0; /* xor self */
    PUSH32(esp, eax);
    PUSH32(esp, MEM32(ebp + -8));
    esi = esi << 9;
    PUSH32(esp, esi);
    PUSH32(esp, edi);
    PUSH32(esp, MEM32(ebx + 4));
    PUSH32(esp, 0); sub_004B54EA(); /* call 0x004B54EA */

loc_004B3D3E: ;
    ebx = MEM32(ebx + 0x8BC);
    PUSH32(esp, 0);
    PUSH32(esp, MEM32(ebp + 0x10));
    ecx = ebx;
    PUSH32(esp, 0); sub_004B548A(); /* call 0x004B548A */

loc_004B3D50: ;
    POP32(esp, edi);
    POP32(esp, esi);
    POP32(esp, ebx);
    esp = ebp;
    POP32(esp, ebp); /* leave */
    esp += 16; return; /* ret 12 */

}

/**
 * sub_004B3D57
 * Original: 0x004B3D57 - 0x004B3D69 (18 bytes, 6 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_004B3D57(void)
{
    uint32_t ebp;
    int _flags = 0; /* fallback flag var */
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_004B3D57: ;
    PUSH32(esp, ebx);
    ebx = MEM32(esp + 8);
    if (CMP_EQ(MEM32(ebx + 8), 0)) { sub_004B3D69(); return; } /* je: equal / zero */

loc_004B3D62: ;
    eax = 0x80004005u;
    g_seh_ebp = ebp; sub_004B3D8E(); return; /* tail jmp 0x004B3D8E */

}

/**
 * sub_004B3D92
 * Original: 0x004B3D92 - 0x004B3DB1 (31 bytes, 9 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_004B3D92(void)
{

loc_004B3D92: ;
    ecx = MEM32(esp + 8);
    PUSH32(esp, 1);
    PUSH32(esp, 0);
    PUSH32(esp, MEM32(esp + 0x18));
    PUSH32(esp, MEM32(esp + 0x18));
    PUSH32(esp, 8);
    PUSH32(esp, 0); sub_004B21D2(); /* call 0x004B21D2 */

loc_004B3DA9: ;
    PUSH32(esp, 0); sub_004B3B9E(); /* call 0x004B3B9E */

loc_004B3DAE: ;
    esp += 20; return; /* ret 16 */

}

/**
 * sub_004B3DB1
 * Original: 0x004B3DB1 - 0x004B3DCE (29 bytes, 9 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_004B3DB1(void)
{

loc_004B3DB1: ;
    ecx = MEM32(esp + 8);
    PUSH32(esp, 1);
    PUSH32(esp, 0);
    PUSH32(esp, 0);
    PUSH32(esp, MEM32(esp + 0x18));
    PUSH32(esp, 7);
    PUSH32(esp, 0); sub_004B21D2(); /* call 0x004B21D2 */

loc_004B3DC6: ;
    PUSH32(esp, 0); sub_004B3C34(); /* call 0x004B3C34 */

loc_004B3DCB: ;
    esp += 16; return; /* ret 12 */

}

/**
 * sub_004B3DCE
 * Original: 0x004B3DCE - 0x004B3E77 (169 bytes, 62 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_004B3DCE(void)
{
    uint32_t ebp;
    int _flags = 0; /* fallback flag var */
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_004B3DCE: ;
    PUSH32(esp, ebp);
    PUSH32(esp, edi);
    edi = ecx;
    ecx = MEM32(edi + 0x10);
    PUSH32(esp, 0); sub_004B2E57(); /* call 0x004B2E57 */

loc_004B3DDA: ;
    ebp = 0; /* xor self */
    ebp++;
    if (TEST_S(eax, eax)) goto loc_004B3E65; /* jl: less (signed <) */

loc_004B3DE5: ;
    PUSH32(esp, 0); sub_0042C2AC(); /* call 0x0042C2AC */

loc_004B3DEA: ;
    if (CMP_NE(eax, 0xB7)) goto loc_004B3E40; /* jne: not equal / not zero */

loc_004B3DF1: ;
    PUSH32(esp, ebx);
    PUSH32(esp, esi);
    esi = MEM32(edi + 0x10);
    ebx = esi + 0x84C;
    PUSH32(esp, ebx);
    MEM32(edi + 0x18) = ebx;
    PUSH32(esp, MEM32(esi + 0x8B8));
    ecx = 0; /* xor self */
    PUSH32(esp, ecx);
    ecx = MEM32(esi + 0x8BC);
    eax = 0; /* xor self */
    PUSH32(esp, eax);
    eax = MEM32(esi + 0x10);
    eax = eax << 9;
    PUSH32(esp, eax);
    PUSH32(esp, MEM32(esi + 0xC));
    PUSH32(esp, MEM32(esi + 4));
    PUSH32(esp, 0); sub_004B54EA(); /* call 0x004B54EA */

loc_004B3E24: ;
    ecx = MEM32(esi + 0x8BC);
    PUSH32(esp, ebp);
    PUSH32(esp, ebx);
    PUSH32(esp, 0); sub_004B548A(); /* call 0x004B548A */

loc_004B3E31: ;
    (void)0; /* test eax, eax - flags set for next jcc */
    POP32(esp, esi);
    POP32(esp, ebx);
    if (TEST_S(eax, eax)) goto loc_004B3E40; /* jl: less (signed <) */

loc_004B3E37: ;
    MEM32(edi + 0x14) = 2;
    goto loc_004B3E61;

loc_004B3E40: ;
    ecx = MEM32(edi + 0x10);
    PUSH32(esp, 0); sub_004B3C69(); /* call 0x004B3C69 */

loc_004B3E48: ;
    if (TEST_S(eax, eax)) goto loc_004B3E65; /* jl: less (signed <) */

loc_004B3E4C: ;
    PUSH32(esp, ebp);
    PUSH32(esp, 0);
    PUSH32(esp, 0);
    PUSH32(esp, 0);
    PUSH32(esp, 4);
    ecx = edi;
    PUSH32(esp, 0); sub_004B21D2(); /* call 0x004B21D2 */

loc_004B3E5C: ;
    PUSH32(esp, 0); sub_004B3B17(); /* call 0x004B3B17 */

loc_004B3E61: ;
    if (CMP_GE(eax & eax, 0)) goto loc_004B3E6B; /* jge: greater or equal (signed >=) */

loc_004B3E65: ;
    MEM32(edi + 0x14) = ebp;
    MEM32(edi + 0x2C) = eax;

loc_004B3E6B: ;
    if (CMP_NE(MEM32(edi + 0x14), ebp)) goto loc_004B3E74; /* jne: not equal / not zero */

loc_004B3E70: ;
    MEM32(edi + 0x18) = MEM32(edi + 0x18) & 0;

loc_004B3E74: ;
    POP32(esp, edi);
    POP32(esp, ebp);
    esp += 4; return; /* ret */

}

/**
 * sub_004B3E77
 * Original: 0x004B3E77 - 0x004B3E90 (25 bytes, 13 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_004B3E77(void)
{
    uint32_t ebp;
    int _flags = 0; /* fallback flag var */

loc_004B3E77: ;
    PUSH32(esp, ebp);
    ebp = esp;
    PUSH32(esp, ecx);
    PUSH32(esp, ebx);
    ebx = 0; /* xor self */
    PUSH32(esp, esi);
    esi = ecx;
    ebx++;
    if (CMP_NE(MEM32(esi + 0x14), ebx)) { sub_004B3E90(); return; } /* jne: not equal / not zero */

loc_004B3E87: ;
    eax = MEM32(esi + 0x10);
    MEM32(eax + 8) = MEM32(eax + 8) & 0;
    g_seh_ebp = ebp; sub_004B3F0D(); return; /* tail jmp 0x004B3F0D */

}

/**
 * sub_004B3F14
 * Original: 0x004B3F14 - 0x004B3F31 (29 bytes, 14 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_004B3F14(void)
{
    uint32_t ebp;
    int _flags = 0; /* fallback flag var */
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_004B3F14: ;
    PUSH32(esp, ebx);
    PUSH32(esp, ebp);
    PUSH32(esp, esi);
    ebx = 0; /* xor self */
    PUSH32(esp, edi);
    esi = ecx;
    ebx++;
    ebp = 0; /* xor self */
    edi = 0; /* xor self */
    if (CMP_NE(MEM32(esi + 0x14), ebx)) { sub_004B3F31(); return; } /* jne: not equal / not zero */

loc_004B3F26: ;
    eax = MEM32(esi + 0x10);
    MEM32(eax + 8) = ebp;
    g_seh_ebp = ebp; sub_004B3FB9(); return; /* tail jmp 0x004B3FB9 */

}

/**
 * sub_004B4003
 * Original: 0x004B4003 - 0x004B4032 (47 bytes, 15 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_004B4003(void)
{
    uint32_t ebp;
    int _flags = 0; /* fallback flag var */
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_004B4003: ;
    eax = MEM32(esp + 4);
    (void)0; /* cmp MEM32(eax + 0xC), 0 - flags set for next jcc */
    PUSH32(esp, esi);
    esi = ecx;
    if (CMP_NE(MEM32(eax + 0xC), 0)) { sub_004B4032(); return; } /* jne: not equal / not zero */

loc_004B4010: ;
    if (CMP_NE(MEM32(eax + 0x14), 0x1F3)) { sub_004B4032(); return; } /* jne: not equal / not zero */

loc_004B4019: ;
    PUSH32(esp, MEM32(esi + 0x18));
    ecx = esi + 0x24;
    PUSH32(esp, ecx);
    ecx = MEM32(esi + 0x10);
    PUSH32(esp, eax);
    PUSH32(esp, 0); sub_004B3C85(); /* call 0x004B3C85 */

loc_004B4029: ;
    MEM32(esi + 0x14) = 3;
    g_seh_ebp = ebp; sub_004B4045(); return; /* tail jmp 0x004B4045 */

}

/**
 * sub_004B4049
 * Original: 0x004B4049 - 0x004B40AC (99 bytes, 37 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_004B4049(void)
{
    uint32_t ebp;
    int _flags = 0; /* fallback flag var */

loc_004B4049: ;
    PUSH32(esp, ebp);
    ebp = esp;
    esp = esp - 0x18;
    PUSH32(esp, ebx);
    PUSH32(esp, esi);
    esi = ecx;
    ebx = 0; /* xor self */
    PUSH32(esp, edi);
    edi = MEM32(esi + 0x10);
    eax = ebp + -24;
    PUSH32(esp, eax);
    ecx = edi;
    MEM32(ebp + -24) = ebx;
    MEM32(ebp + -20) = ebx;
    MEM32(ebp + -16) = ebx;
    MEM32(ebp + -12) = ebx;
    MEM32(ebp + -8) = ebx;
    MEM32(ebp + -4) = ebx;
    PUSH32(esp, 0); sub_004B25E2(); /* call 0x004B25E2 */

loc_004B4076: ;
    MEM32(edi + 0x840) = 1;
    eax = MEM32(esi + 0x10);
    eax = eax + 0x84C;
    MEM32(esi + 0x18) = eax;
    eax = ebp + -24;
    PUSH32(esp, eax);
    ecx = esi;
    PUSH32(esp, 0); sub_004B4003(); /* call 0x004B4003 */

loc_004B4096: ;
    if (CMP_GE(eax, ebx)) goto loc_004B40A7; /* jge: greater or equal (signed >=) */

loc_004B409A: ;
    MEM32(esi + 0x2C) = eax;
    MEM32(esi + 0x14) = 1;
    MEM32(esi + 0x18) = ebx;

loc_004B40A7: ;
    POP32(esp, edi);
    POP32(esp, esi);
    POP32(esp, ebx);
    esp = ebp;
    POP32(esp, ebp); /* leave */
    esp += 4; return; /* ret */

}

/**
 * sub_004B40AC
 * Original: 0x004B40AC - 0x004B41B9 (269 bytes, 93 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_004B40AC(void)
{
    uint32_t ebp;
    int _flags = 0; /* fallback flag var */

loc_004B40AC: ;
    PUSH32(esp, ebp);
    ebp = esp;
    esp = esp - 0x18;
    PUSH32(esp, ebx);
    PUSH32(esp, esi);
    ebx = 0; /* xor self */
    PUSH32(esp, edi);
    edi = 0; /* xor self */
    esi = ecx;
    edi++;
    (void)0; /* cmp MEM32(esi + 0x14), edi - flags set for next jcc */
    MEM32(ebp + -24) = ebx;
    MEM32(ebp + -20) = ebx;
    MEM32(ebp + -16) = ebx;
    MEM32(ebp + -12) = ebx;
    MEM32(ebp + -8) = ebx;
    MEM32(ebp + -4) = ebx;
    if (CMP_EQ(MEM32(esi + 0x14), edi)) goto loc_004B41B1; /* je: equal / zero */

loc_004B40D7: ;
    ecx = MEM32(esi + 0x10);
    eax = ebp + -24;
    PUSH32(esp, eax);
    PUSH32(esp, 0); sub_004B25E2(); /* call 0x004B25E2 */

loc_004B40E3: ;
    PUSH32(esp, MEM32(esi + 0x18));
    ecx = MEM32(esi + 0x30);
    PUSH32(esp, 0); sub_004A5F72(); /* call 0x004A5F72 */

loc_004B40EE: ;
    (void)0; /* cmp eax, ebx - flags set for next jcc */
    MEM32(esi + 0x2C) = eax;
    if (CMP_EQ(eax, ebx)) goto loc_004B41A8; /* je: equal / zero */

loc_004B40F9: ;
    if (CMP_GE(eax, ebx)) goto loc_004B4103; /* jge: greater or equal (signed >=) */

loc_004B40FB: ;
    MEM32(esi + 0x14) = edi;
    goto loc_004B41A8;

loc_004B4103: ;
    eax = MEM32(ebp + -8);
    eax = eax - MEM32(ebp + -16);
    ecx = esi;
    eax++;
    eax = eax << 9;
    PUSH32(esp, eax);
    PUSH32(esp, 0); sub_004B2202(); /* call 0x004B2202 */

loc_004B4115: ;
    if (CMP_L(eax, ebx)) goto loc_004B419E; /* jl: less (signed <) */

loc_004B411D: ;
    (void)0; /* cmp MEM32(esi + 0x14), 2 - flags set for next jcc */
    MEM32(esi + 0x18) = ebx;
    if (CMP_NE(MEM32(esi + 0x14), 2)) goto loc_004B4150; /* jne: not equal / not zero */

loc_004B4126: ;
    ecx = MEM32(esi + 0x10);
    eax = ecx + 0x84C;
    PUSH32(esp, eax);
    MEM32(esi + 0x18) = eax;
    eax = esi + 0x24;
    PUSH32(esp, eax);
    eax = ebp + -24;
    PUSH32(esp, eax);
    PUSH32(esp, 0); sub_004B3C85(); /* call 0x004B3C85 */

loc_004B4140: ;
    if (CMP_L(eax, ebx)) goto loc_004B419E; /* jl: less (signed <) */

loc_004B4144: ;
    MEM32(esi + 0x2C) = ebx;
    MEM32(esi + 0x14) = 3;
    goto loc_004B41A8;

loc_004B4150: ;
    eax = MEM32(esi + 0x10);
    edi = MEM32(eax + 0x834);
    ecx = eax + 0x82C;
    edx = MEM32(ecx);
    edi = edi - edx;
    if (CMP_B(edi, 4)) goto loc_004B41A1; /* jb: below (unsigned <) */

loc_004B4168: ;
    edx = edx + 4;
    MEM32(ecx) = edx;
    MEM32(eax + 0x830) = ebx;
    edi = MEM32(esi + 0x10);
    eax = ebp + -24;
    PUSH32(esp, eax);
    ecx = edi;
    PUSH32(esp, 0); sub_004B25E2(); /* call 0x004B25E2 */

loc_004B4181: ;
    eax = ebp + -24;
    edi = edi + 0x84C;
    PUSH32(esp, eax);
    ecx = esi;
    MEM32(esi + 0x18) = edi;
    PUSH32(esp, 0); sub_004B4003(); /* call 0x004B4003 */

loc_004B4195: ;
    if (CMP_L(eax, ebx)) goto loc_004B419E; /* jl: less (signed <) */

loc_004B4199: ;
    MEM32(esi + 0x2C) = ebx;
    goto loc_004B41A8;

loc_004B419E: ;
    MEM32(esi + 0x2C) = eax;

loc_004B41A1: ;
    MEM32(esi + 0x14) = 1;

loc_004B41A8: ;
    if (CMP_NE(MEM32(esi + 0x14), 1)) goto loc_004B41B1; /* jne: not equal / not zero */

loc_004B41AE: ;
    MEM32(esi + 0x18) = ebx;

loc_004B41B1: ;
    eax = MEM32(esi + 0x2C);
    POP32(esp, edi);
    POP32(esp, esi);
    POP32(esp, ebx);
    esp = ebp;
    POP32(esp, ebp); /* leave */
    esp += 4; return; /* ret */

}

/**
 * sub_004B425C
 * Original: 0x004B425C - 0x004B4296 (58 bytes, 21 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_004B425C(void)
{

loc_004B425C: ;
    PUSH32(esp, esi);
    PUSH32(esp, edi);
    esi = ecx;
    PUSH32(esp, 0xE);
    POP32(esp, ecx);
    eax = 0; /* xor self */
    edi = esi;
    { uint32_t _i; for (_i = 0; _i < ecx; _i++) MEM32(edi + _i*4) = eax; }
    edi += ecx * 4; ecx = 0; /* rep stosd */
    eax = MEM32(esp + 0xC);
    ecx = MEM32(esp + 0x14);
    PUSH32(esp, esi);
    MEM32(esi + 0x10) = eax;
    MEM32(esi + 0x30) = ecx;
    PUSH32(esp, 0); sub_004A5F61(); /* call 0x004A5F61 */

loc_004B427D: ;
    eax = MEM32(esp + 0x10);
    POP32(esp, edi);
    MEM32(esi) = 0x4B41B9;
    MEM32(esi + 4) = 0x4B2AC4;
    MEM32(esi + 8) = eax;
    POP32(esp, esi);
    esp += 16; return; /* ret 12 */

}

/**
 * sub_004B4296
 * Original: 0x004B4296 - 0x004B431D (135 bytes, 52 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_004B4296(void)
{
    uint32_t ebp;
    int _flags = 0; /* fallback flag var */

loc_004B4296: ;
    PUSH32(esp, ebp);
    ebp = esp;
    esp = esp - 0x18;
    PUSH32(esp, esi);
    PUSH32(esp, edi);
    eax = 0; /* xor self */
    MEM32(ebp + -4) = MEM32(ebp + -4) & 0;
    edi = ebp + -24;
    MEM32(edi) = eax; edi += 4; /* stosd */
    MEM32(edi) = eax; edi += 4; /* stosd */
    MEM32(edi) = eax; edi += 4; /* stosd */
    MEM32(edi) = eax; edi += 4; /* stosd */
    MEM32(edi) = eax; edi += 4; /* stosd */
    esi = ecx;
    eax = MEM32(esi + 0x20);
    edi = MEM32(esi + 0x10);
    PUSH32(esp, 6);
    MEM32(ebp + -16) = eax;
    POP32(esp, ecx);
    eax = 0; /* xor self */
    edi = edi + 0x824;
    { uint32_t _i; for (_i = 0; _i < ecx; _i++) MEM32(edi + _i*4) = eax; }
    edi += ecx * 4; ecx = 0; /* rep stosd */
    ecx = MEM32(esi + 0x10);
    eax = ebp + -24;
    PUSH32(esp, eax);
    PUSH32(esp, 0);
    PUSH32(esp, 0); sub_004B30FE(); /* call 0x004B30FE */

loc_004B42D2: ;
    edi = 0; /* xor self */
    edi++;
    if (TEST_NZ(eax, eax)) goto loc_004B42E8; /* jne: not equal / not zero */

loc_004B42D9: ;
    ecx = MEM32(esi + 0x10);
    PUSH32(esp, edi);
    eax = ebp + -24;
    PUSH32(esp, eax);
    PUSH32(esp, 0);
    PUSH32(esp, 0); sub_004B3292(); /* call 0x004B3292 */

loc_004B42E8: ;
    ecx = MEM32(esi + 0x10);
    edx = ecx + 0x880;
    MEM32(esi + 0x18) = edx;
    eax = MEM32(ecx);
    eax = eax + eax * 4;
    if (CMP_EQ(MEM16(eax * 2 + 0x882250), 0)) { sub_004B431D(); return; } /* je: equal / zero */

loc_004B4304: ;
    PUSH32(esp, MEM32(esi + 0x24));
    PUSH32(esp, edx);
    PUSH32(esp, ecx);
    ecx = MEM32(esi + 0x30);
    PUSH32(esp, 0); sub_004B4232(); /* call 0x004B4232 */

loc_004B4311: ;
    MEM32(ebp + -4) = eax;
    MEM32(esi + 0x14) = 7;
    g_seh_ebp = ebp; sub_004B436B(); return; /* tail jmp 0x004B436B */

}

/**
 * sub_004B4388
 * Original: 0x004B4388 - 0x004B43F4 (108 bytes, 36 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_004B4388(void)
{
    uint32_t ebp;
    int _flags = 0; /* fallback flag var */

loc_004B4388: ;
    PUSH32(esp, ebp);
    ebp = esp;
    PUSH32(esp, ecx);
    eax = MEM32(ebp + 8);
    MEM32(ebp + -4) = MEM32(ebp + -4) & 0;
    PUSH32(esp, ebx);
    PUSH32(esp, esi);
    esi = ecx;
    MEM32(esi + 4) = MEM32(esi + 4) | 0xFFFFFFFFu;
    PUSH32(esp, edi);
    edi = MEM32(ebp + 0x14);
    MEM32(esi) = eax;
    eax = MEM32(ebp + 0xC);
    MEM32(esi + 0x20) = eax;
    eax = MEM32(ebp + 0x10);
    PUSH32(esp, edi);
    PUSH32(esp, eax);
    PUSH32(esp, esi);
    ecx = esi + 0x880;
    MEM32(esi + 0x8B8) = eax;
    MEM32(esi + 0x8BC) = edi;
    PUSH32(esp, 0); sub_004B425C(); /* call 0x004B425C */

loc_004B43C4: ;
    MEM32(esi + 0x844) = MEM32(esi + 0x844) & 0;
    ecx = esi;
    PUSH32(esp, 0); sub_004B254C(); /* call 0x004B254C */

loc_004B43D2: ;
    PUSH32(esp, MEM32(esi + 0x1C));
    PUSH32(esp, 0); sub_004B2536(); /* call 0x004B2536 */

loc_004B43DA: ;
    ebx = eax;
    eax = eax << 9;
    (void)0; /* cmp MEM32(esi + 0x8C0), 0 - flags set for next jcc */
    PUSH32(esp, 0x13);
    ecx = edi;
    PUSH32(esp, eax);
    if (CMP_EQ(MEM32(esi + 0x8C0), 0)) { sub_004B43F4(); return; } /* je: equal / zero */

loc_004B43ED: ;
    PUSH32(esp, 0); sub_004B53DA(); /* call 0x004B53DA */

loc_004B43F2: ;
    g_seh_ebp = ebp; sub_004B43F9(); return; /* tail jmp 0x004B43F9 */

}

/**
 * sub_004B4419
 * Original: 0x004B4419 - 0x004B4443 (42 bytes, 17 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_004B4419(void)
{
    uint32_t ebp;
    int _flags = 0; /* fallback flag var */

loc_004B4419: ;
    PUSH32(esp, ebp);
    ebp = esp;
    eax = MEM32(ebp + 0x18);
    PUSH32(esp, ebx);
    PUSH32(esp, esi);
    PUSH32(esp, edi);
    edi = 0; /* xor self */
    (void)0; /* cmp MEM32(ebp + 0x14), edi - flags set for next jcc */
    MEM32(eax) = edi;
    eax = MEM32(ebp + 0x1C);
    PUSH32(esp, 0x8012);
    ebx = ecx;
    MEM32(eax) = edi;
    PUSH32(esp, 0x8C8);
    if (CMP_EQ(MEM32(ebp + 0x14), edi)) { sub_004B4443(); return; } /* je: equal / zero */

loc_004B443C: ;
    PUSH32(esp, 0); sub_004B53EE(); /* call 0x004B53EE */

loc_004B4441: ;
    g_seh_ebp = ebp; sub_004B4448(); return; /* tail jmp 0x004B4448 */

}

/**
 * sub_004B4516
 * Original: 0x004B4516 - 0x004B452A (20 bytes, 8 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_004B4516(void)
{
    uint32_t ebp;
    int _flags = 0; /* fallback flag var */

loc_004B4516: ;
    PUSH32(esp, ebp);
    ebp = esp;
    PUSH32(esp, edi);
    edi = MEM32(ebp + 8);
    if (CMP_EQ(MEM32(edi + 8), 0)) { sub_004B452A(); return; } /* je: equal / zero */

loc_004B4523: ;
    eax = 0x80004005u;
    g_seh_ebp = ebp; sub_004B454F(); return; /* tail jmp 0x004B454F */

}

/**
 * sub_004B4554
 * Original: 0x004B4554 - 0x004B457C (40 bytes, 16 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_004B4554(void)
{
    uint32_t ebp;
    int _flags = 0; /* fallback flag var */

loc_004B4554: ;
    PUSH32(esp, ebp);
    ebp = esp;
    if (CMP_BE(MEM32(ebp + 0xC), 0)) goto loc_004B4577; /* jbe: below or equal (unsigned <=) */

loc_004B455D: ;
    eax = ebp + 0x14;
    PUSH32(esp, eax);
    PUSH32(esp, MEM32(ebp + 0x10));
    PUSH32(esp, MEM32(ebp + 0xC));
    PUSH32(esp, MEM32(ebp + 8));
    PUSH32(esp, 0); sub_0046EA04(); /* call 0x0046EA04 */

loc_004B456F: ;
    esp = esp + 0x10;
    if (CMP_NE(eax, MEM32(ebp + 0xC))) goto loc_004B457A; /* jne: not equal / not zero */

loc_004B4577: ;
    eax = eax | 0xFFFFFFFFu;

loc_004B457A: ;
    POP32(esp, ebp);
    esp += 4; return; /* ret */

}

/**
 * sub_004B457C
 * Original: 0x004B457C - 0x004B45EA (110 bytes, 40 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_004B457C(void)
{
    uint32_t ebp;
    int _flags = 0; /* fallback flag var */

loc_004B457C: ;
    PUSH32(esp, ebp);
    ebp = esp;
    esp = esp - 0x10;
    PUSH32(esp, esi);
    esi = MEM32(ebp + 0xC);
    PUSH32(esp, edi);
    PUSH32(esp, 0x28);
    POP32(esp, edi);
    if (CMP_B(MEM32(esi), edi)) goto loc_004B45E1; /* jb: below (unsigned <) */

loc_004B458E: ;
    eax = ebp + -16;
    PUSH32(esp, eax);
    PUSH32(esp, MEM32(ebp + 0x10));
    PUSH32(esp, 0); sub_0042B732(); /* call 0x0042B732 */

loc_004B459A: ;
    eax = ZX16(MEM16(ebp + -4));
    PUSH32(esp, eax);
    eax = ZX16(MEM16(ebp + -6));
    PUSH32(esp, eax);
    eax = ZX16(MEM16(ebp + -8));
    PUSH32(esp, eax);
    eax = ZX16(MEM16(ebp + -16));
    PUSH32(esp, eax);
    eax = ZX16(MEM16(ebp + -14));
    eax = eax * 4 + 0x882330;
    PUSH32(esp, eax);
    eax = ZX16(MEM16(ebp + -10));
    PUSH32(esp, eax);
    eax = ZX16(MEM16(ebp + -12));
    eax = eax * 4 + 0x882364;
    PUSH32(esp, eax);
    PUSH32(esp, 0x882554);
    PUSH32(esp, MEM32(esi));
    PUSH32(esp, MEM32(ebp + 8));
    PUSH32(esp, 0); sub_004B4554(); /* call 0x004B4554 */

loc_004B45DA: ;
    esp = esp + 0x28;
    if (CMP_GE(eax & eax, 0)) { sub_004B45EA(); return; } /* jge: greater or equal (signed >=) */

loc_004B45E1: ;
    MEM32(esi) = edi;
    eax = 0x8007007Au;
    g_seh_ebp = ebp; sub_004B45EE(); return; /* tail jmp 0x004B45EE */

}

/**
 * sub_004B45F4
 * Original: 0x004B45F4 - 0x004B4754 (352 bytes, 117 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_004B45F4(void)
{
    uint32_t ebp;
    int _flags = 0; /* fallback flag var */
    int _cf = 0; /* carry flag */

loc_004B45F4: ;
    PUSH32(esp, ebp);
    ebp = esp;
    esp = esp - 0x30;
    eax = MEM32(ebp + 8);
    PUSH32(esp, ebx);
    PUSH32(esp, esi);
    PUSH32(esp, edi);
    edx = eax + 1;
    ebx = 0; /* xor self */

loc_004B4605: ;
    SET_LO8(ecx, MEM8(eax));
    eax++;
    if (CMP_NE(LO8(ecx), LO8(ebx))) goto loc_004B4605; /* jne: not equal / not zero */

loc_004B460C: ;
    eax = eax - edx;
    if (CMP_NE(eax, 0x1D)) { sub_004B4754(); return; } /* jne: not equal / not zero */

loc_004B4617: ;
    PUSH32(esp, 0x1E);
    PUSH32(esp, MEM32(ebp + 8));
    eax = ebp + -48;
    PUSH32(esp, eax);
    PUSH32(esp, 0); sub_0042DD7A(); /* call 0x0042DD7A */

loc_004B4625: ;
    if (CMP_NE(MEM8(ebp + -45), 0x2C)) { sub_004B4754(); return; } /* jne: not equal / not zero */

loc_004B462F: ;
    SET_LO8(eax, 0x20);
    if (CMP_NE(MEM8(ebp + -44), LO8(eax))) { sub_004B4754(); return; } /* jne: not equal / not zero */

loc_004B463A: ;
    if (CMP_NE(MEM8(ebp + -37), LO8(eax))) { sub_004B4754(); return; } /* jne: not equal / not zero */

loc_004B4643: ;
    if (CMP_NE(MEM8(ebp + -32), LO8(eax))) { sub_004B4754(); return; } /* jne: not equal / not zero */

loc_004B464C: ;
    if (CMP_NE(MEM8(ebp + -29), 0x3A)) { sub_004B4754(); return; } /* jne: not equal / not zero */

loc_004B4656: ;
    if (CMP_NE(MEM8(ebp + -26), 0x3A)) { sub_004B4754(); return; } /* jne: not equal / not zero */

loc_004B4660: ;
    if (CMP_NE(MEM8(ebp + -23), LO8(eax))) { sub_004B4754(); return; } /* jne: not equal / not zero */

loc_004B4669: ;
    if (CMP_NE(MEM8(ebp + -22), 0x47)) { sub_004B4754(); return; } /* jne: not equal / not zero */

loc_004B4673: ;
    if (CMP_NE(MEM8(ebp + -21), 0x4D)) { sub_004B4754(); return; } /* jne: not equal / not zero */

loc_004B467D: ;
    if (CMP_NE(MEM8(ebp + -20), 0x54)) { sub_004B4754(); return; } /* jne: not equal / not zero */

loc_004B4687: ;
    eax = 0; /* xor self */
    edi = ebp + -16;
    MEM32(edi) = eax; edi += 4; /* stosd */
    MEM32(edi) = eax; edi += 4; /* stosd */
    MEM32(edi) = eax; edi += 4; /* stosd */
    MEM32(edi) = eax; edi += 4; /* stosd */
    MEM8(ebp + -41) = LO8(ebx);
    MEM8(ebp + -32) = LO8(ebx);
    MEM8(ebp + -29) = LO8(ebx);
    MEM8(ebp + -26) = LO8(ebx);
    MEM8(ebp + -23) = LO8(ebx);
    eax = 0; /* xor self */

loc_004B46A1: ;
    esi = ZX16(LO16(eax));
    PUSH32(esp, 3);
    POP32(esp, ecx);
    edi = ebp + -48;
    esi = esi * 4 + 0x882364;
    edx = 0; /* xor self */
    /* repe cmpsb - string compare, ecx iterations */
    if (1 /* strings matched (repe cmpsb) */) goto loc_004B46BE; /* je: equal / zero */

loc_004B46B7: ;
    eax++;
    if (CMP_B(LO16(eax), 7)) goto loc_004B46A1; /* jb: below (unsigned <) */

loc_004B46BE: ;
    if (CMP_EQ(LO16(eax), 7)) { sub_004B4754(); return; } /* je: equal / zero */

loc_004B46C8: ;
    MEM16(ebp + -12) = LO16(eax);
    eax = ebp + -43;
    PUSH32(esp, eax);
    PUSH32(esp, 0); sub_0046FBD5(); /* call 0x0046FBD5 */

loc_004B46D5: ;
    (void)0; /* cmp LO16(eax), LO16(ebx) - flags set for next jcc */
    POP32(esp, ecx);
    MEM16(ebp + -10) = LO16(eax);
    if (CMP_EQ(LO16(eax), LO16(ebx))) { sub_004B4754(); return; } /* je: equal / zero */

loc_004B46DF: ;
    eax = 0; /* xor self */
    eax++;

loc_004B46E2: ;
    esi = ZX16(LO16(eax));
    PUSH32(esp, 3);
    POP32(esp, ecx);
    edi = ebp + -40;
    esi = esi * 4 + 0x882330;
    edx = 0; /* xor self */
    /* repe cmpsb - string compare, ecx iterations */
    if (1 /* strings matched (repe cmpsb) */) goto loc_004B46FF; /* je: equal / zero */

loc_004B46F8: ;
    eax++;
    if (CMP_B(LO16(eax), 0xD)) goto loc_004B46E2; /* jb: below (unsigned <) */

loc_004B46FF: ;
    if (CMP_EQ(LO16(eax), 0xD)) { sub_004B4754(); return; } /* je: equal / zero */

loc_004B4705: ;
    MEM16(ebp + -14) = LO16(eax);
    eax = ebp + -36;
    PUSH32(esp, eax);
    PUSH32(esp, 0); sub_0046FBD5(); /* call 0x0046FBD5 */

loc_004B4712: ;
    MEM16(ebp + -16) = LO16(eax);
    eax = ebp + -31;
    PUSH32(esp, eax);
    PUSH32(esp, 0); sub_0046FBD5(); /* call 0x0046FBD5 */

loc_004B471F: ;
    MEM16(ebp + -8) = LO16(eax);
    eax = ebp + -28;
    PUSH32(esp, eax);
    PUSH32(esp, 0); sub_0046FBD5(); /* call 0x0046FBD5 */

loc_004B472C: ;
    MEM16(ebp + -6) = LO16(eax);
    eax = ebp + -25;
    PUSH32(esp, eax);
    PUSH32(esp, 0); sub_0046FBD5(); /* call 0x0046FBD5 */

loc_004B4739: ;
    esp = esp + 0x10;
    PUSH32(esp, MEM32(ebp + 0xC));
    MEM16(ebp + -4) = LO16(eax);
    eax = ebp + -16;
    PUSH32(esp, eax);
    PUSH32(esp, 0); sub_0042B79D(); /* call 0x0042B79D */

loc_004B474C: ;
    eax--;
    eax = (uint32_t)(-(int32_t)eax);
    eax = _cf ? 0xFFFFFFFF : 0; /* sbb self (CF extend) */
    eax++;
    g_seh_ebp = ebp; sub_004B4756(); return; /* tail jmp 0x004B4756 */

}

/**
 * sub_004B475D
 * Original: 0x004B475D - 0x004B4803 (166 bytes, 58 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_004B475D(void)
{
    uint32_t ebp;
    int _flags = 0; /* fallback flag var */

loc_004B475D: ;
    PUSH32(esp, ebp);
    ebp = esp;
    esp = esp - 0x40;
    PUSH32(esp, esi);
    PUSH32(esp, edi);
    edi = 0; /* xor self */
    if (CMP_EQ(MEM32(ebp + 0x24), edi)) goto loc_004B4783; /* je: equal / zero */

loc_004B476C: ;
    PUSH32(esp, MEM32(ebp + 0x24));
    eax = ebp + -12;
    PUSH32(esp, eax);
    eax = ebp + -64;
    PUSH32(esp, eax);
    MEM32(ebp + -12) = 0x28;
    PUSH32(esp, 0); sub_004B457C(); /* call 0x004B457C */

loc_004B4783: ;
    eax = MEM32(ebp + 0xC);
    edx = eax + 1;

loc_004B4789: ;
    SET_LO8(ecx, MEM8(eax));
    eax++;
    if (TEST_NZ(LO8(ecx), LO8(ecx))) goto loc_004B4789; /* jne: not equal / not zero */

loc_004B4790: ;
    eax = eax - edx;
    esi = eax + 0x34;
    eax = MEM32(ebp + 0x30);
    MEM32(ebp + -4) = eax;
    MEM32(ebp + -4) = MEM32(ebp + -4) & 0x2000000;
    if ((MEM32(ebp + -4) != 0)) goto loc_004B47A7; /* jne: not equal / not zero */

loc_004B47A4: ;
    esi = esi + 0x1D;

loc_004B47A7: ;
    MEM32(ebp + -8) = eax;
    MEM32(ebp + -8) = MEM32(ebp + -8) & 0x1000000;
    if ((MEM32(ebp + -8) != 0)) goto loc_004B47B6; /* jne: not equal / not zero */

loc_004B47B3: ;
    esi = esi + 0x17;

loc_004B47B6: ;
    if (CMP_EQ(MEM32(ebp + 0x1C), edi)) goto loc_004B47BE; /* je: equal / zero */

loc_004B47BB: ;
    esi = esi + MEM32(ebp + 0x20);

loc_004B47BE: ;
    if (CMP_EQ(MEM32(ebp + 0x24), edi)) goto loc_004B47E8; /* je: equal / zero */

loc_004B47C3: ;
    PUSH32(esp, MEM32(ebp + 0x2C));
    eax = ebp + -24;
    PUSH32(esp, MEM32(ebp + 0x28));
    PUSH32(esp, 0x882578);
    PUSH32(esp, 0xC);
    PUSH32(esp, eax);
    PUSH32(esp, 0); sub_004B4554(); /* call 0x004B4554 */

loc_004B47D9: ;
    esp = esp + 0x14;
    eax = eax + MEM32(ebp + -12);
    eax = esi + eax + 0x20;
    MEM32(ebp + 0x2C) = eax;
    esi = eax;

loc_004B47E8: ;
    eax = MEM32(ebp + 0x18);
    edi = MEM32(eax);
    esi = esi + 3;
    (void)0; /* cmp edi, esi - flags set for next jcc */
    MEM32(ebp + 0x2C) = esi;
    if (CMP_AE(edi, esi)) { sub_004B4803(); return; } /* jae: above or equal (unsigned >=) */

loc_004B47F7: ;
    MEM32(eax) = esi;
    eax = 0x8007007Au;
    g_seh_ebp = ebp; sub_004B4930(); return; /* tail jmp 0x004B4930 */

}

/**
 * sub_004B4936
 * Original: 0x004B4936 - 0x004B4983 (77 bytes, 31 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_004B4936(void)
{
    uint32_t ebp;
    int _flags = 0; /* fallback flag var */

loc_004B4936: ;
    PUSH32(esp, ebp);
    ebp = esp;
    PUSH32(esp, ecx);
    PUSH32(esp, ecx);
    eax = MEM32(ebp + 0xC);
    edx = eax + 1;

loc_004B4941: ;
    SET_LO8(ecx, MEM8(eax));
    eax++;
    if (TEST_NZ(LO8(ecx), LO8(ecx))) goto loc_004B4941; /* jne: not equal / not zero */

loc_004B4948: ;
    eax = eax - edx;
    PUSH32(esp, esi);
    esi = eax + 0x35;
    eax = MEM32(ebp + 0x2C);
    eax = eax & 0x10000000;
    PUSH32(esp, edi);
    MEM32(ebp + -8) = eax;
    if ((eax != 0)) goto loc_004B495F; /* jne: not equal / not zero */

loc_004B495C: ;
    esi = esi + 0x1D;

loc_004B495F: ;
    if (CMP_EQ(MEM32(ebp + 0x1C), 0)) goto loc_004B4968; /* je: equal / zero */

loc_004B4965: ;
    esi = esi + MEM32(ebp + 0x20);

loc_004B4968: ;
    eax = MEM32(ebp + 0x18);
    edi = MEM32(eax);
    esi = esi + 0x27;
    (void)0; /* cmp edi, esi - flags set for next jcc */
    MEM32(ebp + -4) = esi;
    if (CMP_AE(edi, esi)) { sub_004B4983(); return; } /* jae: above or equal (unsigned >=) */

loc_004B4977: ;
    MEM32(eax) = esi;
    eax = 0x8007007Au;
    g_seh_ebp = ebp; sub_004B4A66(); return; /* tail jmp 0x004B4A66 */

}

/**
 * sub_004B4A6C
 * Original: 0x004B4A6C - 0x004B4B77 (267 bytes, 93 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_004B4A6C(void)
{
    uint32_t ebp;
    int _flags = 0; /* fallback flag var */

loc_004B4A6C: ;
    PUSH32(esp, ebp);
    ebp = esp;
    esp = esp - 0xC;
    eax = MEM32(ebp + 8);
    MEM32(ebp + -8) = MEM32(ebp + -8) & 0;
    MEM32(ebp + -4) = MEM32(ebp + -4) & 0;
    ecx = 0; /* xor self */
    (void)0; /* test eax, eax - flags set for next jcc */
    MEM32(ebp + -12) = ecx;
    if (TEST_Z(eax, eax)) goto loc_004B4B63; /* je: equal / zero */

loc_004B4A8A: ;
    if (CMP_EQ(eax, 0xFFFFFFFFu)) goto loc_004B4B63; /* je: equal / zero */

loc_004B4A93: ;
    eax = MEM32(eax * 4 + 0x652DD4);
    PUSH32(esp, esi);
    esi = MEM32(ebp + 0xC);
    if (CMP_AE(esi, MEM32(eax))) goto loc_004B4B62; /* jae: above or equal (unsigned >=) */

loc_004B4AA6: ;
    esi = (uint32_t)((int32_t)esi * (int32_t)0x6C);
    esi = esi + MEM32(eax + 4);
    PUSH32(esp, edi);
    edi = MEM32(esi + 8);
    edi = edi & 7;
    PUSH32(esp, 0); sub_0042B72A(); /* call 0x0042B72A */

loc_004B4AB8: ;
    (void)0; /* cmp MEM32(esi + 8), 0 - flags set for next jcc */
    MEM32(ebp + 0xC) = eax;
    if (CMP_BE(MEM32(esi + 8), 0)) goto loc_004B4B37; /* jbe: below or equal (unsigned <=) */

loc_004B4AC1: ;
    edx = MEM32(esi + 4);
    if (CMP_BE(edx & edx, 0)) goto loc_004B4B3B; /* jbe: below or equal (unsigned <=) */

loc_004B4AC8: ;
    eax = edi + -1;
    eax = eax & 7;
    eax++;
    eax = eax + eax * 2;
    ecx = esi + eax * 4;
    eax = MEM32(ecx);
    eax = eax + edx;
    edx = MEM32(esi);
    MEM32(ebp + 8) = edx;
    MEM32(ebp + 8) = MEM32(ebp + 8) & 1;
    if ((MEM32(ebp + 8) == 0)) goto loc_004B4AE7; /* je: equal / zero */

loc_004B4AE4: ;
    eax = eax + MEM32(ecx + 4);

loc_004B4AE7: ;
    eax = eax - MEM32(ebp + 0xC);
    if (CMP_LE(eax & eax, 0)) goto loc_004B4B3B; /* jle: less or equal (signed <=) */

loc_004B4AEE: ;
    if (TEST_Z(LO8(edx), 2)) goto loc_004B4B05; /* je: equal / zero */

loc_004B4AF3: ;
    (void)0; /* cmp MEM32(ebp + 8), 0 - flags set for next jcc */
    MEM32(ebp + -8) = 0x80150011u;
    if (CMP_EQ(MEM32(ebp + 8), 0)) goto loc_004B4B5E; /* je: equal / zero */

loc_004B4B00: ;
    MEM32(ebp + -4) = eax;
    goto loc_004B4B3B;

loc_004B4B05: ;
    if (TEST_Z(LO8(edx), 4)) goto loc_004B4B2F; /* je: equal / zero */

loc_004B4B0A: ;
    ecx = MEM32(ecx + 8);
    (void)0; /* test ecx, ecx - flags set for next jcc */
    MEM32(ebp + -4) = eax;
    if (TEST_Z(ecx, ecx)) goto loc_004B4B3B; /* je: equal / zero */

loc_004B4B14: ;
    eax = MEM32(ecx + 0x18);
    edx = 0x20000;
    if (TEST_NZ(edx, eax)) goto loc_004B4B3B; /* jne: not equal / not zero */

loc_004B4B20: ;
    PUSH32(esp, MEM32(ecx + 8));
    eax = eax | edx;
    MEM32(ecx + 0x18) = eax;
    PUSH32(esp, 0); sub_0042E2B1(); /* call 0x0042E2B1 */

loc_004B4B2D: ;
    goto loc_004B4B3B;

loc_004B4B2F: ;
    if (CMP_EQ(MEM32(ebp + 8), 0)) goto loc_004B4B3B; /* je: equal / zero */

loc_004B4B35: ;
    goto loc_004B4B00;

loc_004B4B37: ;
    MEM32(ebp + 0x10) = MEM32(ebp + 0x10) & 0;

loc_004B4B3B: ;
    ecx = MEM32(esi + 8);
    edx = MEM32(ebp + 0xC);
    eax = ecx + 1;
    MEM32(esi + 8) = eax;
    eax = edi + edi * 2 + 3;
    eax = esi + eax * 4;
    MEM32(eax) = edx;
    edx = MEM32(ebp + -4);
    MEM32(eax + 4) = edx;
    edx = MEM32(ebp + 0x10);
    MEM32(eax + 8) = edx;
    goto loc_004B4B61;

loc_004B4B5E: ;
    ecx = MEM32(ebp + -12);

loc_004B4B61: ;
    POP32(esp, edi);

loc_004B4B62: ;
    POP32(esp, esi);

loc_004B4B63: ;
    eax = MEM32(ebp + 0x1C);
    edx = MEM32(ebp + -4);
    MEM32(eax) = edx;
    eax = MEM32(ebp + 0x20);
    MEM32(eax) = ecx;
    eax = MEM32(ebp + -8);
    esp = ebp;
    POP32(esp, ebp); /* leave */
    esp += 32; return; /* ret 28 */

}

/**
 * sub_004B4B77
 * Original: 0x004B4B77 - 0x004B4BC9 (82 bytes, 30 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_004B4B77(void)
{
    int _flags = 0; /* fallback flag var */

loc_004B4B77: ;
    eax = MEM32(esp + 4);
    if (TEST_Z(eax, eax)) goto loc_004B4BC6; /* je: equal / zero */

loc_004B4B7F: ;
    if (CMP_EQ(eax, 0xFFFFFFFFu)) goto loc_004B4BC6; /* je: equal / zero */

loc_004B4B84: ;
    ecx = MEM32(eax * 4 + 0x652DD4);
    eax = MEM32(esp + 8);
    if (CMP_AE(eax, MEM32(ecx))) goto loc_004B4BC6; /* jae: above or equal (unsigned >=) */

loc_004B4B93: ;
    eax = (uint32_t)((int32_t)eax * (int32_t)0x6C);
    eax = eax + MEM32(ecx + 4);
    PUSH32(esp, esi);
    esi = MEM32(esp + 0x10);
    (void)0; /* test esi, esi - flags set for next jcc */
    PUSH32(esp, edi);
    edi = eax;
    if (TEST_Z(esi, esi)) goto loc_004B4BC4; /* je: equal / zero */

loc_004B4BA5: ;
    eax = MEM32(edi + 8);
    if (CMP_BE(eax, 8)) goto loc_004B4BB4; /* jbe: below or equal (unsigned <=) */

loc_004B4BAD: ;
    eax = eax - esi;
    if (CMP_A(eax, 8)) goto loc_004B4BC4; /* ja: above (unsigned >) */

loc_004B4BB4: ;
    PUSH32(esp, 0); sub_0042B72A(); /* call 0x0042B72A */

loc_004B4BB9: ;
    esi = esi & 7;
    eax = esi + esi * 2;
    MEM32(edi + eax * 4 + 0x14) = MEM32(edi + eax * 4 + 0x14) & 0;

loc_004B4BC4: ;
    POP32(esp, edi);
    POP32(esp, esi);

loc_004B4BC6: ;
    esp += 24; return; /* ret 20 */

}

/**
 * sub_004B4BC9
 * Original: 0x004B4BC9 - 0x004B4BE5 (28 bytes, 17 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_004B4BC9(void)
{
    uint32_t ebp;
    int _flags = 0; /* fallback flag var */

loc_004B4BC9: ;
    PUSH32(esp, ebp);
    ebp = esp;
    PUSH32(esp, ecx);
    PUSH32(esp, ecx);
    PUSH32(esp, ebx);
    PUSH32(esp, esi);
    esi = MEM32(ebp + 8);
    PUSH32(esp, edi);
    edi = ecx;
    SET_LO8(ebx, 0x20);

loc_004B4BD8: ;
    SET_LO8(eax, MEM8(esi));
    if (CMP_EQ(LO8(eax), LO8(ebx))) goto loc_004B4BE2; /* je: equal / zero */

loc_004B4BDE: ;
    if (CMP_NE(LO8(eax), 9)) { sub_004B4BE5(); return; } /* jne: not equal / not zero */

loc_004B4BE2: ;
    esi++;
    goto loc_004B4BD8;

}

/**
 * sub_004B4E5D
 * Original: 0x004B4E5D - 0x004B5074 (535 bytes, 160 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_004B4E5D(void)
{
    uint32_t ebp;
    int _flags = 0; /* fallback flag var */
    int _cf = 0; /* carry flag */

loc_004B4E5D: ;
    PUSH32(esp, ebp);
    ebp = esp;
    PUSH32(esp, ecx);
    PUSH32(esp, ecx);
    eax = MEM32(ebp + 0x10);
    MEM32(eax) = MEM32(eax) & 0;
    MEM32(ebp + -8) = MEM32(ebp + -8) & 0;
    PUSH32(esp, ebx);
    ebx = MEM32(ebp + 8);
    PUSH32(esp, edi);
    edi = ecx;
    ecx = MEM32(ebx + 0xF4);
    if (TEST_Z(LO8(ecx), 3)) goto loc_004B506B; /* je: equal / zero */

loc_004B4E82: ;
    eax = MEM32(ebx + 0xF0);
    eax = eax + MEM32(ebp + 0xC);
    (void)0; /* test LO8(ecx), 2 - flags set for next jcc */
    PUSH32(esp, esi);
    esi = MEM32(ebx + 0xB0);
    MEM32(ebp + 8) = esi;
    MEM32(ebp + -4) = esi;
    if (TEST_Z(LO8(ecx), 2)) goto loc_004B4F72; /* je: equal / zero */

loc_004B4EA1: ;
    edx = MEM32(ebx + 0xFC);
    ecx = MEM32(ebx + 0x100);
    ecx = ecx - edx;
    (void)0; /* cmp eax, ecx - flags set for next jcc */
    MEM32(ebp + 0xC) = eax;
    if (CMP_BE(eax, ecx)) goto loc_004B4EB9; /* jbe: below or equal (unsigned <=) */

loc_004B4EB6: ;
    MEM32(ebp + 0xC) = ecx;

loc_004B4EB9: ;
    edi = MEM32(ebx + 0xF8);
    ecx = MEM32(ebp + 0xC);
    edi = edi + edx;
    edx = ecx;
    ecx = ecx >> 2;
    memcpy((void*)XBOX_PTR(edi), (void*)XBOX_PTR(esi), ecx * 4);
    esi += ecx * 4; edi += ecx * 4; ecx = 0; /* rep movsd */
    ecx = edx;
    ecx = ecx & 3;
    memcpy((void*)XBOX_PTR(edi), (void*)XBOX_PTR(esi), ecx);
    esi += ecx; edi += ecx; ecx = 0; /* rep movsb */
    MEM32(ebx + 0xFC) = MEM32(ebx + 0xFC) + edx;
    esi = MEM32(ebp + 8);
    edi = MEM32(ebx + 0xB0);
    ecx = ebx + 0xD0;
    MEM32(ecx) = MEM32(ecx) - edx;
    MEM32(ecx + 4) = MEM32(ecx + 4) - 0 - _cf; /* sbb */
    eax = eax - edx;
    esi = esi + edx;
    ecx = eax;
    edx = ecx;
    ecx = ecx >> 2;
    memcpy((void*)XBOX_PTR(edi), (void*)XBOX_PTR(esi), ecx * 4);
    esi += ecx * 4; edi += ecx * 4; ecx = 0; /* rep movsd */
    ecx = edx;
    ecx = ecx & 3;
    memcpy((void*)XBOX_PTR(edi), (void*)XBOX_PTR(esi), ecx);
    esi += ecx; edi += ecx; ecx = 0; /* rep movsb */
    MEM32(ebx + 0xF0) = eax;
    eax = MEM32(ebx + 0x100);
    if (CMP_NE(eax, MEM32(ebx + 0xFC))) goto loc_004B506A; /* jne: not equal / not zero */

loc_004B4F19: ;
    eax = MEM32(ebp + 0x10);
    MEM32(ebx + 0xF4) = MEM32(ebx + 0xF4) & 0xFFFFFFFDu;
    MEM32(eax) = 1;
    goto loc_004B506A;

loc_004B4F2E: ;
    if (TEST_Z(MEM8(ebx + 0xF4), 3)) goto loc_004B506A; /* je: equal / zero */

loc_004B4F3B: ;
    if (CMP_NE(MEM8(esi), 0xD)) goto loc_004B4F70; /* jne: not equal / not zero */

loc_004B4F40: ;
    ecx = esi + 1;
    if (CMP_NE(MEM8(ecx), 0xA)) goto loc_004B4F70; /* jne: not equal / not zero */

loc_004B4F48: ;
    MEM8(esi) = 0;
    esi = ecx;
    MEM8(esi) = 0;
    esi++;
    eax--;
    PUSH32(esp, ebx);
    PUSH32(esp, MEM32(ebp + -4));
    eax--;
    ecx = edi;
    MEM32(ebp + 8) = esi;
    MEM32(ebp + 0xC) = eax;
    PUSH32(esp, 0); sub_004B4BC9(); /* call 0x004B4BC9 */

loc_004B4F64: ;
    if (TEST_NZ(eax, eax)) goto loc_004B4F7C; /* jne: not equal / not zero */

loc_004B4F68: ;
    eax = MEM32(ebp + 0xC);
    MEM32(ebp + -4) = esi;
    goto loc_004B4F72;

loc_004B4F70: ;
    esi++;
    eax--;

loc_004B4F72: ;
    if (CMP_A(eax, 1)) goto loc_004B4F2E; /* ja: above (unsigned >) */

loc_004B4F77: ;
    goto loc_004B5044;

loc_004B4F7C: ;
    MEM32(ebx + 0xF4) = MEM32(ebx + 0xF4) & 0xFFFFFFFEu;
    (void)0; /* test MEM8(ebx + 0x1A), 8 - flags set for next jcc */
    eax = MEM32(ebx + 0xF4);
    if (TEST_Z(MEM8(ebx + 0x1A), 8)) goto loc_004B501D; /* je: equal / zero */

loc_004B4F93: ;
    edx = MEM32(ebp + 0xC);
    ecx = MEM32(ebx + 0x100);
    if (CMP_AE(edx, ecx)) goto loc_004B4FDF; /* jae: above or equal (unsigned >=) */

loc_004B4FA0: ;
    edi = MEM32(ebx + 0xD4);
    ecx = 0; /* xor self */
    if (CMP_B(edi, ecx)) goto loc_004B4FC7; /* jb: below (unsigned <) */

loc_004B4FAC: ;
    if (CMP_A(edi, ecx)) goto loc_004B4FBC; /* ja: above (unsigned >) */

loc_004B4FAE: ;
    ecx = MEM32(ebx + 0xD0);
    if (CMP_B(ecx, MEM32(ebx + 0x100))) goto loc_004B4FC7; /* jb: below (unsigned <) */

loc_004B4FBC: ;
    eax = eax | 2;
    MEM32(ebx + 0xF4) = eax;
    goto loc_004B4FEA;

loc_004B4FC7: ;
    if (CMP_L(MEM32(ebx + 0x10), 0)) goto loc_004B4FD4; /* jl: less (signed <) */

loc_004B4FCD: ;
    MEM32(ebx + 0x10) = 0x8007000Du;

loc_004B4FD4: ;
    eax = MEM32(ebx + 0x10);
    MEM32(ebp + -8) = eax;
    goto loc_004B506A;

loc_004B4FDF: ;
    eax = MEM32(ebp + 0x10);
    edx = ecx;
    MEM32(eax) = 1;

loc_004B4FEA: ;
    edi = MEM32(ebx + 0xF8);
    ecx = edx;
    eax = ecx;
    ecx = ecx >> 2;
    memcpy((void*)XBOX_PTR(edi), (void*)XBOX_PTR(esi), ecx * 4);
    esi += ecx * 4; edi += ecx * 4; ecx = 0; /* rep movsd */
    ecx = eax;
    ecx = ecx & 3;
    memcpy((void*)XBOX_PTR(edi), (void*)XBOX_PTR(esi), ecx);
    esi += ecx; edi += ecx; ecx = 0; /* rep movsb */
    eax = ebx + 0xD0;
    MEM32(eax) = MEM32(eax) - edx;
    MEM32(ebx + 0xFC) = edx;
    MEM32(eax + 4) = MEM32(eax + 4) - 0 - _cf; /* sbb */
    MEM32(ebp + 0xC) = MEM32(ebp + 0xC) - edx;
    MEM32(ebp + 8) = MEM32(ebp + 8) + edx;
    esi = MEM32(ebp + 8);
    goto loc_004B5026;

loc_004B501D: ;
    eax = MEM32(ebp + 0x10);
    MEM32(eax) = 1;

loc_004B5026: ;
    PUSH32(esp, MEM32(ebp + 0xC));
    PUSH32(esp, esi);
    PUSH32(esp, MEM32(ebx + 0xB0));
    PUSH32(esp, 0); sub_0046E670(); /* call 0x0046E670 */

loc_004B5035: ;
    eax = MEM32(ebp + 0xC);
    esi = MEM32(ebp + 8);
    esp = esp + 0xC;
    MEM32(ebx + 0xF0) = eax;

loc_004B5044: ;
    if (TEST_Z(MEM8(ebx + 0xF4), 3)) goto loc_004B506A; /* je: equal / zero */

loc_004B504D: ;
    eax = eax - MEM32(ebp + -4);
    eax = eax + esi;
    PUSH32(esp, eax);
    PUSH32(esp, MEM32(ebp + -4));
    MEM32(ebx + 0xF0) = eax;
    PUSH32(esp, MEM32(ebx + 0xB0));
    PUSH32(esp, 0); sub_0046E670(); /* call 0x0046E670 */

loc_004B5067: ;
    esp = esp + 0xC;

loc_004B506A: ;
    POP32(esp, esi);

loc_004B506B: ;
    eax = MEM32(ebp + -8);
    POP32(esp, edi);
    POP32(esp, ebx);
    esp = ebp;
    POP32(esp, ebp); /* leave */
    esp += 16; return; /* ret 12 */

}

/**
 * sub_004B5074
 * Original: 0x004B5074 - 0x004B50CA (86 bytes, 33 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_004B5074(void)
{
    int _flags = 0; /* fallback flag var */

loc_004B5074: ;
    PUSH32(esp, esi);
    esi = MEM32(esp + 8);
    PUSH32(esp, edi);
    edi = 0; /* xor self */
    if (CMP_NE(MEM32(esi + 8), edi)) goto loc_004B50B6; /* jne: not equal / not zero */

loc_004B5081: ;
    PUSH32(esp, edi);
    PUSH32(esp, edi);
    PUSH32(esp, edi);
    PUSH32(esp, edi);
    PUSH32(esp, 0); sub_0042E250(); /* call 0x0042E250 */

loc_004B508A: ;
    (void)0; /* cmp eax, edi - flags set for next jcc */
    MEM32(esi + 8) = eax;
    if (CMP_NE(eax, edi)) goto loc_004B50B2; /* jne: not equal / not zero */

loc_004B5091: ;
    PUSH32(esp, 0); sub_0042C2AC(); /* call 0x0042C2AC */

loc_004B5096: ;
    if (CMP_G(eax & eax, 0)) goto loc_004B50A1; /* jg: greater (signed >) */

loc_004B509A: ;
    PUSH32(esp, 0); sub_0042C2AC(); /* call 0x0042C2AC */

loc_004B509F: ;
    goto loc_004B50C5;

loc_004B50A1: ;
    PUSH32(esp, 0); sub_0042C2AC(); /* call 0x0042C2AC */

loc_004B50A6: ;
    eax = eax & 0xFFFF;
    eax = eax | 0x80070000u;
    goto loc_004B50C5;

loc_004B50B2: ;
    MEM32(esi + 0x18) = MEM32(esi + 0x18) | 1;

loc_004B50B6: ;
    eax = MEM32(esp + 0x10);
    if (CMP_EQ(eax, edi)) goto loc_004B50C3; /* je: equal / zero */

loc_004B50BE: ;
    ecx = MEM32(esi + 8);
    MEM32(eax) = ecx;

loc_004B50C3: ;
    eax = 0; /* xor self */

loc_004B50C5: ;
    POP32(esp, edi);
    POP32(esp, esi);
    esp += 12; return; /* ret 8 */

}

/**
 * sub_004B50CA
 * Original: 0x004B50CA - 0x004B5107 (61 bytes, 24 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_004B50CA(void)
{
    uint32_t ebp;
    int _flags = 0; /* fallback flag var */

loc_004B50CA: ;
    PUSH32(esp, ebp);
    ebp = esp;
    PUSH32(esp, ecx);
    MEM32(ebp + -4) = MEM32(ebp + -4) & 0;
    PUSH32(esp, ebx);
    PUSH32(esp, esi);
    esi = MEM32(ebp + 8);
    eax = MEM32(esi + 0x14);
    PUSH32(esp, edi);
    edi = MEM32(ebp + 0x10);
    (void)0; /* cmp eax, edi - flags set for next jcc */
    ebx = ecx;
    MEM32(ebp + 8) = eax;
    if (CMP_AE(eax, edi)) { sub_004B5107(); return; } /* jae: above or equal (unsigned >=) */

loc_004B50E7: ;
    if (TEST_Z(MEM8(esi + 0x1A), 2)) goto loc_004B50F9; /* je: equal / zero */

loc_004B50ED: ;
    MEM32(ebp + -4) = 0x80150012u;
    g_seh_ebp = ebp; sub_004B5195(); return; /* tail jmp 0x004B5195 */

loc_004B50F9: ;
    edx = MEM32(ebp + 0xC);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, esi);
    ecx = ebx;
    PUSH32(esp, 0); RECOMP_ICALL_SAFE(MEM32(edx + eax * 4), _icall_esp); /* indirect call */
    }

loc_004B5102: ;
    MEM32(ebp + -4) = eax;
    g_seh_ebp = ebp; sub_004B5113(); return; /* tail jmp 0x004B5113 */

}

/**
 * sub_004B51B8
 * Original: 0x004B51B8 - 0x004B51E8 (48 bytes, 21 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_004B51B8(void)
{

loc_004B51B8: ;
    ecx = MEM32(esp + 8);
    PUSH32(esp, esi);
    esi = MEM32(esp + 8);
    PUSH32(esp, edi);
    eax = 0; /* xor self */
    edi = ecx;
    MEM32(edi) = eax; edi += 4; /* stosd */
    MEM32(edi) = eax; edi += 4; /* stosd */
    MEM32(edi) = eax; edi += 4; /* stosd */
    MEM32(edi) = eax; edi += 4; /* stosd */
    MEM16(ecx) = 2;
    SET_LO16(eax, MEM16(esi + 8));
    SET_HI8(edx, LO8(eax));
    POP32(esp, edi);
    SET_LO8(edx, HI8(eax));
    MEM16(ecx + 2) = LO16(edx);
    eax = MEM32(esi + 4);
    MEM32(ecx + 4) = eax;
    eax = 0; /* xor self */
    POP32(esp, esi);
    esp += 12; return; /* ret 8 */

}

/**
 * sub_004B51E8
 * Original: 0x004B51E8 - 0x004B5278 (144 bytes, 55 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_004B51E8(void)
{
    uint32_t ebp;
    int _flags = 0; /* fallback flag var */

loc_004B51E8: ;
    PUSH32(esp, ebp);
    ebp = esp;
    esp = esp - 0x10;
    PUSH32(esp, ebx);
    PUSH32(esp, esi);
    esi = MEM32(ebp + 8);
    PUSH32(esp, edi);
    eax = ebp + -16;
    PUSH32(esp, eax);
    eax = esi + 0x30;
    PUSH32(esp, eax);
    ebx = ecx;
    edi = esi + 0x70;
    PUSH32(esp, 0); sub_004B51B8(); /* call 0x004B51B8 */

loc_004B5206: ;
    if (TEST_S(eax, eax)) goto loc_004B5271; /* jl: less (signed <) */

loc_004B520A: ;
    PUSH32(esp, 0);
    PUSH32(esp, 1);
    PUSH32(esp, 2);
    PUSH32(esp, 0); sub_0048D715(); /* call 0x0048D715 */

loc_004B5215: ;
    (void)0; /* cmp eax, 0xFFFFFFFFu - flags set for next jcc */
    MEM32(ebp + 8) = eax;
    if (CMP_NE(eax, 0xFFFFFFFFu)) goto loc_004B523E; /* jne: not equal / not zero */

loc_004B521D: ;
    PUSH32(esp, 0); sub_0042C2AC(); /* call 0x0042C2AC */

loc_004B5222: ;
    if (CMP_G(eax & eax, 0)) goto loc_004B522D; /* jg: greater (signed >) */

loc_004B5226: ;
    PUSH32(esp, 0); sub_0042C2AC(); /* call 0x0042C2AC */

loc_004B522B: ;
    goto loc_004B5271;

loc_004B522D: ;
    PUSH32(esp, 0); sub_0042C2AC(); /* call 0x0042C2AC */

loc_004B5232: ;
    eax = eax & 0xFFFF;
    eax = eax | 0x80070000u;
    goto loc_004B5271;

loc_004B523E: ;
    if (TEST_Z(MEM8(esi + 0x1B), 0x40)) goto loc_004B5257; /* je: equal / zero */

loc_004B5244: ;
    PUSH32(esp, 4);
    PUSH32(esp, ebx);
    PUSH32(esp, 0x4001);
    PUSH32(esp, 0xFFFF);
    PUSH32(esp, eax);
    PUSH32(esp, 0); sub_0048D741(); /* call 0x0048D741 */

loc_004B5257: ;
    PUSH32(esp, edi);
    PUSH32(esp, MEM32(esi + 8));
    ecx = ebx;
    PUSH32(esp, MEM32(ebp + 8));
    PUSH32(esp, 0); sub_004B56DF(); /* call 0x004B56DF */

loc_004B5265: ;
    PUSH32(esp, edi);
    eax = ebp + -16;
    PUSH32(esp, eax);
    ecx = ebx;
    PUSH32(esp, 0); sub_004B5651(); /* call 0x004B5651 */

loc_004B5271: ;
    POP32(esp, edi);
    POP32(esp, esi);
    POP32(esp, ebx);
    esp = ebp;
    POP32(esp, ebp); /* leave */
    esp += 8; return; /* ret 4 */

}

/**
 * sub_004B5278
 * Original: 0x004B5278 - 0x004B52E9 (113 bytes, 40 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_004B5278(void)
{
    uint32_t ebp;
    int _flags = 0; /* fallback flag var */
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_004B5278: ;
    PUSH32(esp, ebx);
    PUSH32(esp, esi);
    esi = MEM32(esp + 0xC);
    PUSH32(esp, edi);
    PUSH32(esp, 0xFFFFFFFFu);
    PUSH32(esp, 0);
    eax = esi + 0x12C;
    PUSH32(esp, eax);
    ebx = ecx;
    PUSH32(esp, 0); sub_0049CBD9(); /* call 0x0049CBD9 */

loc_004B5291: ;
    edi = esi + 0x80;
    eax = MEM32(edi);
    if (CMP_EQ(eax, 0xFFFFFFFFu)) goto loc_004B52AB; /* je: equal / zero */

loc_004B529E: ;
    if (TEST_Z(eax, eax)) goto loc_004B52AB; /* je: equal / zero */

loc_004B52A2: ;
    PUSH32(esp, eax);
    PUSH32(esp, 0); sub_0048D720(); /* call 0x0048D720 */

loc_004B52A8: ;
    MEM32(edi) = MEM32(edi) | 0xFFFFFFFFu;

loc_004B52AB: ;
    eax = MEM32(esi + 0x58);
    if (CMP_EQ(eax, 0xFFFFFFFFu)) goto loc_004B52C7; /* je: equal / zero */

loc_004B52B3: ;
    if (TEST_Z(eax, eax)) goto loc_004B52C7; /* je: equal / zero */

loc_004B52B7: ;
    if (TEST_NZ(MEM8(esi + 0x18), 4)) goto loc_004B52C7; /* jne: not equal / not zero */

loc_004B52BD: ;
    PUSH32(esp, eax);
    PUSH32(esp, 0); sub_0042C509(); /* call 0x0042C509 */

loc_004B52C3: ;
    MEM32(esi + 0x58) = MEM32(esi + 0x58) | 0xFFFFFFFFu;

loc_004B52C7: ;
    eax = MEM32(esi + 0x18);
    if (((int32_t)(eax & eax) >= 0)) { sub_004B52E9(); return; } /* jns: not sign (positive) */

loc_004B52CE: ;
    if (TEST_Z(eax, 0x10000)) goto loc_004B52E1; /* je: equal / zero */

loc_004B52D5: ;
    PUSH32(esp, esi);
    ecx = ebx;
    PUSH32(esp, 0); sub_004AD217(); /* call 0x004AD217 */

loc_004B52DD: ;
    MEM8(esi + 0x1A) = MEM8(esi + 0x1A) & 0xFE;

loc_004B52E1: ;
    eax = MEM32(esi + 0x118);
    g_seh_ebp = ebp; sub_004B5302(); return; /* tail jmp 0x004B5302 */

}

/**
 * sub_004B5352
 * Original: 0x004B5352 - 0x004B5368 (22 bytes, 6 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_004B5352(void)
{

loc_004B5352: ;
    eax = MEM32(esp + 8);
    eax = eax | 0x21880000;
    PUSH32(esp, eax);
    PUSH32(esp, MEM32(esp + 8));
    PUSH32(esp, 0); sub_002AF430(); /* call 0x002AF430 */

loc_004B5365: ;
    esp += 12; return; /* ret 8 */

}

/**
 * sub_004B5368
 * Original: 0x004B5368 - 0x004B5390 (40 bytes, 12 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_004B5368(void)
{
    int _flags = 0; /* fallback flag var */

loc_004B5368: ;
    if (CMP_EQ(MEM32(esp + 4), 0)) goto loc_004B538D; /* je: equal / zero */

loc_004B536F: ;
    eax = MEM32(esp + 8);
    if (TEST_Z(eax, eax)) goto loc_004B537E; /* je: equal / zero */

loc_004B5377: ;
    eax = eax | 0x21880000;
    goto loc_004B5383;

loc_004B537E: ;
    eax = 0x21882000;

loc_004B5383: ;
    PUSH32(esp, eax);
    PUSH32(esp, MEM32(esp + 8));
    PUSH32(esp, 0); sub_002AF670(); /* call 0x002AF670 */

loc_004B538D: ;
    esp += 12; return; /* ret 8 */

}

/**
 * sub_004B5390
 * Original: 0x004B5390 - 0x004B5395 (5 bytes, 1 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_004B5390(void)
{
    uint32_t ebp;
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_004B5390: ;
    g_seh_ebp = ebp; sub_004B5352(); return; /* tail jmp 0x004B5352 */

}

/**
 * sub_004B5395
 * Original: 0x004B5395 - 0x004B53C7 (50 bytes, 21 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_004B5395(void)
{
    int _flags = 0; /* fallback flag var */

loc_004B5395: ;
    PUSH32(esp, MEM32(esp + 8));
    PUSH32(esp, MEM32(esp + 8));
    PUSH32(esp, 0); sub_004B5352(); /* call 0x004B5352 */

loc_004B53A2: ;
    edx = eax;
    if (TEST_Z(edx, edx)) goto loc_004B53C2; /* je: equal / zero */

loc_004B53A8: ;
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

loc_004B53C2: ;
    eax = edx;
    esp += 12; return; /* ret 8 */

}

/**
 * sub_004B53C7
 * Original: 0x004B53C7 - 0x004B53CC (5 bytes, 1 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_004B53C7(void)
{
    uint32_t ebp;
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_004B53C7: ;
    g_seh_ebp = ebp; sub_004B5368(); return; /* tail jmp 0x004B5368 */

}

/**
 * sub_004B53CC
 * Original: 0x004B53CC - 0x004B53DA (14 bytes, 4 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_004B53CC(void)
{

loc_004B53CC: ;
    PUSH32(esp, 0);
    PUSH32(esp, MEM32(esp + 8));
    PUSH32(esp, 0); sub_004B5368(); /* call 0x004B5368 */

loc_004B53D7: ;
    esp += 8; return; /* ret 4 */

}

/**
 * sub_004B53DA
 * Original: 0x004B53DA - 0x004B53EE (20 bytes, 5 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_004B53DA(void)
{

loc_004B53DA: ;
    PUSH32(esp, MEM32(esp + 4));
    PUSH32(esp, 0);
    PUSH32(esp, MEM32(ecx + 0x98));
    PUSH32(esp, 0); sub_00431E6A(); /* call 0x00431E6A */

loc_004B53EB: ;
    esp += 12; return; /* ret 8 */

}

/**
 * sub_004B53EE
 * Original: 0x004B53EE - 0x004B5402 (20 bytes, 5 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_004B53EE(void)
{

loc_004B53EE: ;
    PUSH32(esp, MEM32(esp + 4));
    PUSH32(esp, 8);
    PUSH32(esp, MEM32(ecx + 0x98));
    PUSH32(esp, 0); sub_00431E6A(); /* call 0x00431E6A */

loc_004B53FF: ;
    esp += 12; return; /* ret 8 */

}

/**
 * sub_004B5402
 * Original: 0x004B5402 - 0x004B541D (27 bytes, 7 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_004B5402(void)
{
    int _flags = 0; /* fallback flag var */

loc_004B5402: ;
    if (CMP_EQ(MEM32(esp + 4), 0)) goto loc_004B541A; /* je: equal / zero */

loc_004B5409: ;
    PUSH32(esp, MEM32(esp + 4));
    PUSH32(esp, 0);
    PUSH32(esp, MEM32(ecx + 0x98));
    PUSH32(esp, 0); sub_00430897(); /* call 0x00430897 */

loc_004B541A: ;
    esp += 8; return; /* ret 4 */

}

/**
 * sub_004B548A
 * Original: 0x004B548A - 0x004B54AE (36 bytes, 15 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_004B548A(void)
{
    uint32_t ebp;
    int _flags = 0; /* fallback flag var */
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_004B548A: ;
    PUSH32(esp, ebx);
    PUSH32(esp, esi);
    esi = MEM32(esp + 0xC);
    PUSH32(esp, edi);
    eax = esi + 0x20;
    PUSH32(esp, eax);
    edi = 0; /* xor self */
    (void)0; /* cmp MEM32(esp + 0x18), edi - flags set for next jcc */
    PUSH32(esp, edi);
    PUSH32(esp, MEM32(esi + 0x14));
    PUSH32(esp, MEM32(esi + 0x10));
    PUSH32(esp, MEM32(esi + 0x1C));
    if (CMP_EQ(MEM32(esp + 0x18), edi)) { sub_004B54AE(); return; } /* je: equal / zero */

loc_004B54A7: ;
    PUSH32(esp, 0); sub_0042BC84(); /* call 0x0042BC84 */

loc_004B54AC: ;
    g_seh_ebp = ebp; sub_004B54B3(); return; /* tail jmp 0x004B54B3 */

}

/**
 * sub_004B54EA
 * Original: 0x004B54EA - 0x004B5542 (88 bytes, 34 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_004B54EA(void)
{
    uint32_t ebp;

loc_004B54EA: ;
    PUSH32(esp, ebp);
    ebp = esp;
    PUSH32(esp, esi);
    esi = MEM32(ebp + 0x20);
    PUSH32(esp, edi);
    eax = 0; /* xor self */
    edx = ecx;
    PUSH32(esp, 0xD);
    POP32(esp, ecx);
    edi = esi;
    { uint32_t _i; for (_i = 0; _i < ecx; _i++) MEM32(edi + _i*4) = eax; }
    edi += ecx * 4; ecx = 0; /* rep stosd */
    MEM32(esi + 0xC) = MEM32(esi + 0xC) & eax;
    eax = MEM32(ebp + 8);
    edi = MEM32(ebp + 0x1C);
    MEM32(esi + 0x1C) = eax;
    eax = MEM32(ebp + 0xC);
    MEM32(esi + 0x10) = eax;
    eax = MEM32(ebp + 0x10);
    MEM32(esi + 0x14) = eax;
    eax = MEM32(ebp + 0x14);
    MEM32(esi + 0x28) = eax;
    eax = MEM32(ebp + 0x18);
    PUSH32(esp, esi);
    ecx = edx;
    MEM32(esi + 0x2C) = eax;
    MEM32(esi + 0x30) = edi;
    PUSH32(esp, 0); sub_004A5F61(); /* call 0x004A5F61 */

loc_004B552C: ;
    MEM32(esi + 8) = edi;
    POP32(esp, edi);
    MEM32(esi) = 0x4B541D;
    MEM32(esi + 4) = 0x4B5479;
    POP32(esp, esi);
    POP32(esp, ebp);
    esp += 32; return; /* ret 28 */

}

/**
 * sub_004B5542
 * Original: 0x004B5542 - 0x004B5566 (36 bytes, 13 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_004B5542(void)
{
    int _flags = 0; /* fallback flag var */

loc_004B5542: ;
    ecx = MEM32(esp + 8);
    (void)0; /* test ecx, ecx - flags set for next jcc */
    eax = MEM32(esp + 4);
    if (TEST_Z(ecx, ecx)) goto loc_004B5553; /* je: equal / zero */

loc_004B554E: ;
    edx = MEM32(eax + 0x18);
    MEM32(ecx) = edx;

loc_004B5553: ;
    ecx = MEM32(esp + 0xC);
    if (TEST_Z(ecx, ecx)) goto loc_004B5560; /* je: equal / zero */

loc_004B555B: ;
    edx = MEM32(eax + 0x10);
    MEM32(ecx) = edx;

loc_004B5560: ;
    eax = MEM32(eax + 0xC);
    esp += 16; return; /* ret 12 */

}

/**
 * sub_004B5577
 * Original: 0x004B5577 - 0x004B55A8 (49 bytes, 18 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_004B5577(void)
{
    int _flags = 0; /* fallback flag var */

loc_004B5577: ;
    ecx = MEM32(esp + 8);
    (void)0; /* test ecx, ecx - flags set for next jcc */
    eax = MEM32(esp + 4);
    if (TEST_Z(ecx, ecx)) goto loc_004B5588; /* je: equal / zero */

loc_004B5583: ;
    edx = MEM32(eax + 0x1C);
    MEM32(ecx) = edx;

loc_004B5588: ;
    ecx = MEM32(esp + 0xC);
    if (TEST_Z(ecx, ecx)) goto loc_004B5595; /* je: equal / zero */

loc_004B5590: ;
    edx = MEM32(eax + 0x20);
    MEM32(ecx) = edx;

loc_004B5595: ;
    ecx = MEM32(esp + 0x10);
    if (TEST_Z(ecx, ecx)) goto loc_004B55A2; /* je: equal / zero */

loc_004B559D: ;
    edx = MEM32(eax + 0x14);
    MEM32(ecx) = edx;

loc_004B55A2: ;
    eax = MEM32(eax + 0xC);
    esp += 20; return; /* ret 16 */

}

/**
 * sub_004B55A8
 * Original: 0x004B55A8 - 0x004B562E (134 bytes, 43 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_004B55A8(void)
{
    uint32_t ebp;
    int _flags = 0; /* fallback flag var */

loc_004B55A8: ;
    PUSH32(esp, ebp);
    ebp = esp;
    esp = esp - 0x210;
    PUSH32(esp, esi);
    esi = MEM32(ebp + 8);
    eax = MEM32(esi + 8);
    PUSH32(esp, edi);
    edi = 0; /* xor self */
    (void)0; /* cmp eax, edi - flags set for next jcc */
    MEM32(ebp + -8) = edi;
    MEM32(ebp + -4) = edi;
    if (CMP_EQ(eax, edi)) goto loc_004B55CB; /* je: equal / zero */

loc_004B55C5: ;
    PUSH32(esp, eax);
    PUSH32(esp, 0); sub_0042E2B1(); /* call 0x0042E2B1 */

loc_004B55CB: ;
    eax = MEM32(esi + 0x10);
    MEM32(ebp + -524) = eax;
    MEM32(ebp + -264) = eax;
    eax = ebp + -8;
    PUSH32(esp, eax);
    eax = ebp + -268;
    PUSH32(esp, eax);
    eax = ebp + -528;
    PUSH32(esp, eax);
    ecx = 0; /* xor self */
    ecx++;
    PUSH32(esp, edi);
    PUSH32(esp, ecx);
    MEM32(ebp + -528) = ecx;
    MEM32(ebp + -268) = ecx;
    MEM32(esi + 0xC) = edi;
    PUSH32(esp, 0); sub_0048D766(); /* call 0x0048D766 */

loc_004B5605: ;
    if (CMP_NE(eax, 0xFFFFFFFFu)) { sub_004B562E(); return; } /* jne: not equal / not zero */

loc_004B560A: ;
    PUSH32(esp, 0); sub_0049ACC8(); /* call 0x0049ACC8 */

loc_004B560F: ;
    if (CMP_G(eax & eax, 0)) goto loc_004B561A; /* jg: greater (signed >) */

loc_004B5613: ;
    PUSH32(esp, 0); sub_0049ACC8(); /* call 0x0049ACC8 */

loc_004B5618: ;
    goto loc_004B5629;

loc_004B561A: ;
    PUSH32(esp, 0); sub_0049ACC8(); /* call 0x0049ACC8 */

loc_004B561F: ;
    eax = eax & 0xFFFF;
    eax = eax | 0x80070000u;

loc_004B5629: ;
    MEM32(esi + 0xC) = eax;
    g_seh_ebp = ebp; sub_004B5648(); return; /* tail jmp 0x004B5648 */

}

/**
 * sub_004B5651
 * Original: 0x004B5651 - 0x004B569B (74 bytes, 25 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_004B5651(void)
{
    uint32_t ebp;
    int _flags = 0; /* fallback flag var */

loc_004B5651: ;
    PUSH32(esp, ebp);
    ebp = esp;
    PUSH32(esp, ecx);
    PUSH32(esp, esi);
    esi = MEM32(ebp + 0xC);
    eax = MEM32(esi + 0x10);
    PUSH32(esp, edi);
    ecx = ebp + -4;
    PUSH32(esp, ecx);
    PUSH32(esp, 0x8004667Eu);
    PUSH32(esp, eax);
    edi = 0; /* xor self */
    MEM32(ebp + -4) = 1;
    PUSH32(esp, 0); sub_0048D736(); /* call 0x0048D736 */

loc_004B5675: ;
    if (CMP_NE(eax, 0xFFFFFFFFu)) { sub_004B569B(); return; } /* jne: not equal / not zero */

loc_004B567A: ;
    PUSH32(esp, 0); sub_0049ACC8(); /* call 0x0049ACC8 */

loc_004B567F: ;
    if (CMP_G(eax & eax, 0)) goto loc_004B568A; /* jg: greater (signed >) */

loc_004B5683: ;
    PUSH32(esp, 0); sub_0049ACC8(); /* call 0x0049ACC8 */

loc_004B5688: ;
    g_seh_ebp = ebp; sub_004B56D9(); return; /* tail jmp 0x004B56D9 */

loc_004B568A: ;
    PUSH32(esp, 0); sub_0049ACC8(); /* call 0x0049ACC8 */

loc_004B568F: ;
    eax = eax & 0xFFFF;
    eax = eax | 0x80070000u;
    g_seh_ebp = ebp; sub_004B56D9(); return; /* tail jmp 0x004B56D9 */

}

/**
 * sub_004B56DF
 * Original: 0x004B56DF - 0x004B571E (63 bytes, 23 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_004B56DF(void)
{

loc_004B56DF: ;
    PUSH32(esp, esi);
    esi = MEM32(esp + 0x10);
    PUSH32(esp, edi);
    edx = ecx;
    PUSH32(esp, 0xE);
    eax = 0; /* xor self */
    POP32(esp, ecx);
    edi = esi;
    { uint32_t _i; for (_i = 0; _i < ecx; _i++) MEM32(edi + _i*4) = eax; }
    edi += ecx * 4; ecx = 0; /* rep stosd */
    MEM32(esi + 0xC) = MEM32(esi + 0xC) & eax;
    eax = MEM32(esp + 0xC);
    edi = MEM32(esp + 0x10);
    PUSH32(esp, esi);
    ecx = edx;
    MEM32(esi + 0x10) = eax;
    MEM32(esi + 0x34) = edi;
    PUSH32(esp, 0); sub_004A5F61(); /* call 0x004A5F61 */

loc_004B5709: ;
    MEM32(esi + 8) = edi;
    POP32(esp, edi);
    MEM32(esi) = 0x4B55A8;
    MEM32(esi + 4) = 0x4B5566;
    POP32(esp, esi);
    esp += 16; return; /* ret 12 */

}

/**
 * sub_004B577F
 * Original: 0x004B577F - 0x004B57B3 (52 bytes, 26 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_004B577F(void)
{
    uint32_t ebp;
    int _flags = 0; /* fallback flag var */

loc_004B577F: ;
    PUSH32(esp, ebp);
    ebp = esp;
    PUSH32(esp, ecx);
    eax = MEM32(ebp + 8);
    PUSH32(esp, ebx);
    PUSH32(esp, esi);
    ebx = 0; /* xor self */
    (void)0; /* cmp MEM32(ebp + 0xC), ebx - flags set for next jcc */
    PUSH32(esp, edi);
    MEM32(ebp + -4) = ebx;
    PUSH32(esp, ebx);
    if (CMP_EQ(MEM32(ebp + 0xC), ebx)) { sub_004B57B3(); return; } /* je: equal / zero */

loc_004B5794: ;
    ecx = MEM32(eax + 0x20);
    edx = MEM32(eax + 0x18);
    esi = MEM32(eax + 0x14);
    edi = MEM32(eax + 0x10);
    ebx = eax + 0x24;
    PUSH32(esp, ebx);
    PUSH32(esp, ecx);
    eax = eax + 0x1C;
    PUSH32(esp, eax);
    PUSH32(esp, edx);
    PUSH32(esp, esi);
    PUSH32(esp, edi);
    PUSH32(esp, 0); sub_0048D7AD(); /* call 0x0048D7AD */

loc_004B57B1: ;
    g_seh_ebp = ebp; sub_004B57D0(); return; /* tail jmp 0x004B57D0 */

}

/**
 * sub_004B57FC
 * Original: 0x004B57FC - 0x004B584E (82 bytes, 32 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_004B57FC(void)
{
    uint32_t ebp;

loc_004B57FC: ;
    PUSH32(esp, ebp);
    ebp = esp;
    PUSH32(esp, esi);
    esi = MEM32(ebp + 0x1C);
    PUSH32(esp, edi);
    eax = 0; /* xor self */
    edx = ecx;
    PUSH32(esp, 0xE);
    POP32(esp, ecx);
    edi = esi;
    { uint32_t _i; for (_i = 0; _i < ecx; _i++) MEM32(edi + _i*4) = eax; }
    edi += ecx * 4; ecx = 0; /* rep stosd */
    MEM32(esi + 0xC) = MEM32(esi + 0xC) & eax;
    eax = MEM32(ebp + 8);
    edi = MEM32(ebp + 0x18);
    MEM32(esi + 0x10) = eax;
    eax = MEM32(ebp + 0xC);
    MEM32(esi + 0x14) = eax;
    eax = MEM32(ebp + 0x10);
    MEM32(esi + 0x18) = eax;
    eax = MEM32(ebp + 0x14);
    PUSH32(esp, esi);
    ecx = edx;
    MEM32(esi + 0x20) = eax;
    MEM32(esi + 0x34) = edi;
    PUSH32(esp, 0); sub_004A5F61(); /* call 0x004A5F61 */

loc_004B5838: ;
    MEM32(esi + 8) = edi;
    POP32(esp, edi);
    MEM32(esi) = 0x4B571E;
    MEM32(esi + 4) = 0x4B5566;
    POP32(esp, esi);
    POP32(esp, ebp);
    esp += 28; return; /* ret 24 */

}

/**
 * sub_004B584E
 * Original: 0x004B584E - 0x004B5854 (6 bytes, 2 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_004B584E(void)
{
    uint32_t ebp;
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_004B584E: ;
    eax = MEM32(esp + 8);
    g_seh_ebp = ebp; sub_004B585F(); return; /* tail jmp 0x004B585F */

}

/**
 * sub_004B586F
 * Original: 0x004B586F - 0x004B58C0 (81 bytes, 34 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_004B586F(void)
{
    uint32_t ebp;
    int _flags = 0; /* fallback flag var */

loc_004B586F: ;
    PUSH32(esp, ebp);
    ebp = esp;
    esp = esp - 0x10;
    PUSH32(esp, esi);
    PUSH32(esp, edi);
    eax = 0; /* xor self */
    edi = ebp + -16;
    MEM32(edi) = eax; edi += 4; /* stosd */
    MEM32(edi) = eax; edi += 4; /* stosd */
    MEM32(edi) = eax; edi += 4; /* stosd */
    MEM16(edi) = LO16(eax); edi += 2; /* stosw */
    eax = MEM32(ebp + 0xC);
    PUSH32(esp, 7);
    POP32(esp, ecx);
    edi = eax;
    esi = ebp + -16;
    edx = 0; /* xor self */
    MEM8(ebp + -6) = 1;
    /* repe cmpsw - string compare, ecx iterations */
    if (1 /* strings matched (repe cmpsb) */) goto loc_004B58B4; /* je: equal / zero */

loc_004B5897: ;
    PUSH32(esp, 7);
    POP32(esp, ecx);
    edi = eax;
    esi = ebp + -16;
    edx = 0; /* xor self */
    MEM16(ebp + -16) = 0x7B2;
    MEM8(ebp + -14) = 1;
    MEM8(ebp + -13) = 1;
    /* repe cmpsw - string compare, ecx iterations */
    if (0 /* strings differed (repe cmpsb) */) { sub_004B58C0(); return; } /* jne: not equal / not zero */

loc_004B58B4: ;
    eax = MEM32(ebp + 8);
    MEM32(eax) = MEM32(eax) & 0;
    MEM32(eax + 4) = MEM32(eax + 4) & 0;
    g_seh_ebp = ebp; sub_004B591D(); return; /* tail jmp 0x004B591D */

}

/**
 * sub_004B5923
 * Original: 0x004B5923 - 0x004B59D2 (175 bytes, 65 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_004B5923(void)
{
    uint32_t ebp;
    int _flags = 0; /* fallback flag var */

loc_004B5923: ;
    PUSH32(esp, ebp);
    ebp = esp;
    esp = esp - 0x10;
    PUSH32(esp, esi);
    esi = MEM32(ebp + 8);
    PUSH32(esp, edi);
    eax = 0; /* xor self */
    edi = esi;
    MEM32(edi) = eax; edi += 4; /* stosd */
    MEM32(edi) = eax; edi += 4; /* stosd */
    MEM32(edi) = eax; edi += 4; /* stosd */
    MEM16(edi) = LO16(eax); edi += 2; /* stosw */
    edi = MEM32(ebp + 0x10);
    eax = MEM32(edi);
    eax = eax | MEM32(edi + 4);
    if ((eax != 0)) goto loc_004B595A; /* jne: not equal / not zero */

loc_004B5941: ;
    eax = MEM32(ebp + 0xC);
    (void)0; /* test eax, eax - flags set for next jcc */
    MEM16(esi) = 0x7B2;
    MEM8(esi + 2) = 1;
    MEM8(esi + 3) = 1;
    if (TEST_Z(eax, eax)) goto loc_004B59C8; /* je: equal / zero */

loc_004B5955: ;
    MEM32(eax) = MEM32(eax) & 0;
    goto loc_004B59C8;

loc_004B595A: ;
    eax = ebp + -16;
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, eax);
    PUSH32(esp, edi);
    PUSH32(esp, 0); RECOMP_ICALL_SAFE(MEM32(0x561014), _icall_esp); /* indirect call */
    }

loc_004B5965: ;
    SET_LO16(eax, MEM16(ebp + -16));
    if (CMP_LE(LO16(eax), 0x7F5)) goto loc_004B5976; /* jle: less or equal (signed <=) */

loc_004B596F: ;
    MEM16(esi) = 0x7F5;
    goto loc_004B5979;

loc_004B5976: ;
    MEM16(esi) = LO16(eax);

loc_004B5979: ;
    SET_LO8(eax, MEM8(ebp + -14));
    MEM16(esi + 8) = MEM16(esi + 8) & 0;
    (void)0; /* cmp MEM32(ebp + 0xC), 0 - flags set for next jcc */
    MEM8(esi + 2) = LO8(eax);
    SET_LO8(eax, MEM8(ebp + -12));
    MEM8(esi + 3) = LO8(eax);
    SET_LO8(eax, MEM8(ebp + -10));
    MEM8(esi + 4) = LO8(eax);
    SET_LO8(eax, MEM8(ebp + -8));
    MEM8(esi + 5) = LO8(eax);
    SET_LO8(eax, MEM8(ebp + -6));
    MEM8(esi + 6) = LO8(eax);
    if (CMP_EQ(MEM32(ebp + 0xC), 0)) goto loc_004B59C3; /* je: equal / zero */

loc_004B59A2: ;
    PUSH32(esp, 0);
    PUSH32(esp, 0xA);
    PUSH32(esp, MEM32(edi + 4));
    PUSH32(esp, MEM32(edi));
    PUSH32(esp, 0); sub_00470D50(); /* call 0x00470D50 */

loc_004B59B0: ;
    PUSH32(esp, 0);
    PUSH32(esp, 0xF4240);
    PUSH32(esp, edx);
    PUSH32(esp, eax);
    PUSH32(esp, 0); sub_004710C0(); /* call 0x004710C0 */

loc_004B59BE: ;
    ecx = MEM32(ebp + 0xC);
    MEM32(ecx) = eax;

loc_004B59C3: ;
    MEM16(esi + 0xC) = MEM16(esi + 0xC) & 0;

loc_004B59C8: ;
    POP32(esp, edi);
    MEM8(esi + 0xA) = 1;
    POP32(esp, esi);
    esp = ebp;
    POP32(esp, ebp); /* leave */
    esp += 16; return; /* ret 12 */

}

/**
 * sub_004B59D2
 * Original: 0x004B59D2 - 0x004B59E4 (18 bytes, 5 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_004B59D2(void)
{
    uint32_t ebp;
    int _flags = 0; /* fallback flag var */
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_004B59D2: ;
    if (CMP_EQ(MEM32(esp + 4), 0)) { sub_004B59E4(); return; } /* je: equal / zero */

loc_004B59D9: ;
    PUSH32(esp, MEM32(esp + 4));
    PUSH32(esp, 0); sub_004C0746(); /* call 0x004C0746 */

loc_004B59E2: ;
    g_seh_ebp = ebp; sub_004B59F4(); return; /* tail jmp 0x004B59F4 */

}

/**
 * sub_004B59F7
 * Original: 0x004B59F7 - 0x004B5A17 (32 bytes, 13 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_004B59F7(void)
{
    uint32_t ebp;

loc_004B59F7: ;
    PUSH32(esp, ebp);
    ebp = esp;
    PUSH32(esp, ecx);
    SET_LO8(eax, MEM8(ebp + 0xB));
    MEM8(ebp + -4) = LO8(eax);
    SET_LO8(eax, MEM8(ebp + 0xA));
    MEM8(ebp + -3) = LO8(eax);
    eax = MEM32(ebp + 8);
    MEM8(ebp + -2) = HI8(eax);
    MEM8(ebp + -1) = LO8(eax);
    eax = MEM32(ebp + -4);
    esp = ebp;
    POP32(esp, ebp); /* leave */
    esp += 8; return; /* ret 4 */

}

/**
 * sub_004B5A17
 * Original: 0x004B5A17 - 0x004B5A4B (52 bytes, 15 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_004B5A17(void)
{
    uint32_t ebp;
    int _flags = 0; /* fallback flag var */
    int _cf = 0; /* carry flag */
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_004B5A17: ;
    PUSH32(esp, esi);
    esi = MEM32(esp + 8);
    PUSH32(esp, esi);
    PUSH32(esp, 0); sub_0042B5F7(); /* call 0x0042B5F7 */

loc_004B5A22: ;
    eax = MEM32(esi);
    (void)0; /* cmp eax, MEM32(0x75F0C0) - flags set for next jcc */
    ecx = MEM32(esi + 4);
    if (CMP_NE(eax, MEM32(0x75F0C0))) { sub_004B5A4B(); return; } /* jne: not equal / not zero */

loc_004B5A2F: ;
    if (CMP_NE(ecx, MEM32(0x75F0C4))) { sub_004B5A4B(); return; } /* jne: not equal / not zero */

loc_004B5A37: ;
    MEM32(0x75F0C8) = MEM32(0x75F0C8) + 0xA;
    eax = MEM32(0x75F0C8);
    MEM32(esi) = MEM32(esi) + eax;
    MEM32(esi + 4) = MEM32(esi + 4) + 0 + _cf; /* adc */
    g_seh_ebp = ebp; sub_004B5A5D(); return; /* tail jmp 0x004B5A5D */

}

/**
 * sub_004B5A61
 * Original: 0x004B5A61 - 0x004B5A71 (16 bytes, 5 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_004B5A61(void)
{

loc_004B5A61: ;
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, 0);
    eax = esp + 8;
    PUSH32(esp, eax);
    PUSH32(esp, 0); RECOMP_ICALL_SAFE(MEM32(0x5611F0), _icall_esp); /* indirect call */
    }

loc_004B5A6E: ;
    esp += 12; return; /* ret 8 */

}

/**
 * sub_004B5A71
 * Original: 0x004B5A71 - 0x004B5AA1 (48 bytes, 18 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_004B5A71(void)
{
    uint32_t ebp;
    int _flags = 0; /* fallback flag var */

loc_004B5A71: ;
    PUSH32(esp, ebp);
    ebp = esp;
    PUSH32(esp, ecx);
    MEM32(ebp + -4) = MEM32(ebp + -4) & 0;
    PUSH32(esp, ebx);
    ebx = MEM32(ebp + 0x10);
    PUSH32(esp, esi);
    esi = MEM32(ebp + 8);
    PUSH32(esp, MEM32(esi));
    PUSH32(esp, 0x5F1048);
    PUSH32(esp, MEM32(ebp + 0xC));
    PUSH32(esp, ebx);
    PUSH32(esp, 0); sub_004B4554(); /* call 0x004B4554 */

loc_004B5A91: ;
    esp = esp + 0x10;
    if (CMP_GE(eax & eax, 0)) { sub_004B5AA1(); return; } /* jge: greater or equal (signed >=) */

loc_004B5A98: ;
    MEM32(ebp + -4) = 0xC000009Au;
    g_seh_ebp = ebp; sub_004B5AF6(); return; /* tail jmp 0x004B5AF6 */

}

/**
 * sub_004B5B08
 * Original: 0x004B5B08 - 0x004B5C25 (285 bytes, 105 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_004B5B08(void)
{
    uint32_t ebp;
    int _flags = 0; /* fallback flag var */
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_004B5B08: ;
    PUSH32(esp, ebp);
    ebp = esp + -92;
    esp = esp - 0x140;
    edx = MEM32(ebp + 0x68);
    if (CMP_BE(edx, 0x40)) goto loc_004B5B1E; /* jbe: below or equal (unsigned <=) */

loc_004B5B1B: ;
    PUSH32(esp, 0x40);
    POP32(esp, edx);

loc_004B5B1E: ;
    PUSH32(esp, esi);
    esi = MEM32(ebp + 0x64);
    PUSH32(esp, edi);
    PUSH32(esp, 0x10);
    eax = 0; /* xor self */
    POP32(esp, ecx);
    edi = ebp + -148;
    { uint32_t _i; for (_i = 0; _i < ecx; _i++) MEM32(edi + _i*4) = eax; }
    edi += ecx * 4; ecx = 0; /* rep stosd */
    ecx = edx;
    eax = ecx;
    ecx = ecx >> 2;
    edi = ebp + -148;
    memcpy((void*)XBOX_PTR(edi), (void*)XBOX_PTR(esi), ecx * 4);
    esi += ecx * 4; edi += ecx * 4; ecx = 0; /* rep movsd */
    ecx = eax;
    ecx = ecx & 3;
    memcpy((void*)XBOX_PTR(edi), (void*)XBOX_PTR(esi), ecx);
    esi += ecx; edi += ecx; ecx = 0; /* rep movsb */
    esi = MEM32(ebp + 0x64);
    PUSH32(esp, 0x10);
    eax = 0; /* xor self */
    POP32(esp, ecx);
    edi = ebp + -84;
    { uint32_t _i; for (_i = 0; _i < ecx; _i++) MEM32(edi + _i*4) = eax; }
    edi += ecx * 4; ecx = 0; /* rep stosd */
    ecx = edx;
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

loc_004B5B68: ;
    MEM32(ebp + eax + -148) = MEM32(ebp + eax + -148) ^ 0x36363636;
    MEM32(ebp + eax + -84) = MEM32(ebp + eax + -84) ^ 0x5C5C5C5C;
    eax = eax + 4;
    if (CMP_B(eax, 0x40)) goto loc_004B5B68; /* jb: below (unsigned <) */

loc_004B5B83: ;
    eax = ebp + -20;
    PUSH32(esp, eax);
    PUSH32(esp, 0); sub_0049FF04(); /* call 0x0049FF04 */

loc_004B5B8C: ;
    PUSH32(esp, 0x40);
    eax = ebp + -148;
    PUSH32(esp, eax);
    eax = ebp + -20;
    PUSH32(esp, eax);
    PUSH32(esp, 0); sub_0049FF42(); /* call 0x0049FF42 */

loc_004B5B9E: ;
    if (CMP_EQ(MEM32(ebp + 0x70), 0)) goto loc_004B5BB3; /* je: equal / zero */

loc_004B5BA4: ;
    PUSH32(esp, MEM32(ebp + 0x70));
    eax = ebp + -20;
    PUSH32(esp, MEM32(ebp + 0x6C));
    PUSH32(esp, eax);
    PUSH32(esp, 0); sub_0049FF42(); /* call 0x0049FF42 */

loc_004B5BB3: ;
    if (CMP_EQ(MEM32(ebp + 0x78), 0)) goto loc_004B5BC8; /* je: equal / zero */

loc_004B5BB9: ;
    PUSH32(esp, MEM32(ebp + 0x78));
    eax = ebp + -20;
    PUSH32(esp, MEM32(ebp + 0x74));
    PUSH32(esp, eax);
    PUSH32(esp, 0); sub_0049FF42(); /* call 0x0049FF42 */

loc_004B5BC8: ;
    eax = ebp + -20;
    PUSH32(esp, eax);
    PUSH32(esp, 0); sub_004A0070(); /* call 0x004A0070 */

loc_004B5BD1: ;
    PUSH32(esp, 0x10);
    POP32(esp, ecx);
    esi = ebp + -84;
    edi = ebp + -228;
    memcpy((void*)XBOX_PTR(edi), (void*)XBOX_PTR(esi), ecx * 4);
    esi += ecx * 4; edi += ecx * 4; ecx = 0; /* rep movsd */
    esi = ebp + 0x48;
    edi = ebp + -164;
    MEM32(edi) = MEM32(esi); esi += 4; edi += 4; /* movsd */
    MEM32(edi) = MEM32(esi); esi += 4; edi += 4; /* movsd */
    MEM32(edi) = MEM32(esi); esi += 4; edi += 4; /* movsd */
    eax = ebp + -20;
    PUSH32(esp, eax);
    MEM32(edi) = MEM32(esi); esi += 4; edi += 4; /* movsd */
    PUSH32(esp, 0); sub_0049FF04(); /* call 0x0049FF04 */

loc_004B5BF5: ;
    PUSH32(esp, 0x50);
    eax = ebp + -228;
    PUSH32(esp, eax);
    eax = ebp + -20;
    PUSH32(esp, eax);
    PUSH32(esp, 0); sub_0049FF42(); /* call 0x0049FF42 */

loc_004B5C07: ;
    eax = ebp + -20;
    PUSH32(esp, eax);
    PUSH32(esp, 0); sub_004A0070(); /* call 0x004A0070 */

loc_004B5C10: ;
    edi = MEM32(ebp + 0x7C);
    esi = ebp + 0x48;
    MEM32(edi) = MEM32(esi); esi += 4; edi += 4; /* movsd */
    MEM32(edi) = MEM32(esi); esi += 4; edi += 4; /* movsd */
    MEM32(edi) = MEM32(esi); esi += 4; edi += 4; /* movsd */
    MEM32(edi) = MEM32(esi); esi += 4; edi += 4; /* movsd */
    POP32(esp, edi);
    SET_LO8(eax, 1);
    POP32(esp, esi);
    ebp = ebp + 0x5C;
    esp = ebp;
    POP32(esp, ebp); /* leave */
    esp += 32; return; /* ret 28 */

}

/**
 * sub_004B5C25
 * Original: 0x004B5C25 - 0x004B5C3E (25 bytes, 7 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_004B5C25(void)
{
    uint32_t ebp;
    int _flags = 0; /* fallback flag var */

loc_004B5C25: ;
    PUSH32(esp, ebp);
    ebp = esp;
    esp = esp - 0x14C;
    if (CMP_AE(MEM32(ebp + 0x18), 0x18)) { sub_004B5C3E(); return; } /* jae: above or equal (unsigned >=) */

loc_004B5C34: ;
    eax = 0xC000006Du;
    g_seh_ebp = ebp; sub_004B5D00(); return; /* tail jmp 0x004B5D00 */

}

/**
 * sub_004B5D04
 * Original: 0x004B5D04 - 0x004B5D89 (133 bytes, 44 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_004B5D04(void)
{
    uint32_t ebp;

loc_004B5D04: ;
    PUSH32(esp, ebp);
    ebp = esp;
    esp = esp - 0x84;
    eax = ebp + -20;
    PUSH32(esp, eax);
    eax = MEM32(ebp + 0xC);
    PUSH32(esp, 0);
    PUSH32(esp, 0);
    PUSH32(esp, 0xD);
    PUSH32(esp, 0x882588);
    PUSH32(esp, MEM32(eax + 4));
    MEM32(ebp + -4) = 0x402;
    PUSH32(esp, MEM32(eax + 8));
    PUSH32(esp, 0); sub_004B5B08(); /* call 0x004B5B08 */

loc_004B5D31: ;
    eax = ebp + -132;
    PUSH32(esp, eax);
    PUSH32(esp, 0); sub_0049FF04(); /* call 0x0049FF04 */

loc_004B5D3D: ;
    PUSH32(esp, 4);
    eax = ebp + -4;
    PUSH32(esp, eax);
    eax = ebp + -132;
    PUSH32(esp, eax);
    PUSH32(esp, 0); sub_0049FF42(); /* call 0x0049FF42 */

loc_004B5D4F: ;
    PUSH32(esp, 4);
    eax = ebp + 0x10;
    PUSH32(esp, eax);
    eax = ebp + -132;
    PUSH32(esp, eax);
    PUSH32(esp, 0); sub_0049FF42(); /* call 0x0049FF42 */

loc_004B5D61: ;
    eax = ebp + -132;
    PUSH32(esp, eax);
    PUSH32(esp, 0); sub_004A0070(); /* call 0x004A0070 */

loc_004B5D6D: ;
    PUSH32(esp, MEM32(ebp + 0x14));
    eax = ebp + -40;
    PUSH32(esp, 0);
    PUSH32(esp, 0);
    PUSH32(esp, 0x10);
    PUSH32(esp, eax);
    PUSH32(esp, 0x10);
    eax = ebp + -20;
    PUSH32(esp, eax);
    PUSH32(esp, 0); sub_004B5B08(); /* call 0x004B5B08 */

loc_004B5D85: ;
    esp = ebp;
    POP32(esp, ebp); /* leave */
    esp += 20; return; /* ret 16 */

}

/**
 * sub_004B5D89
 * Original: 0x004B5D89 - 0x004B5DC1 (56 bytes, 18 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_004B5D89(void)
{
    uint32_t ebp;
    int _flags = 0; /* fallback flag var */
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_004B5D89: ;
    PUSH32(esp, ebp);
    ebp = esp + -104;
    esp = esp - 0x9C;
    eax = MEM32(ebp + 0x70);
    edx = MEM32(eax + 4);
    MEM32(ebp + 0x64) = MEM32(ebp + 0x64) & 0;
    PUSH32(esp, esi);
    esi = MEM32(eax + 8);
    ecx = esi + 0x10;
    (void)0; /* cmp ecx, edx - flags set for next jcc */
    MEM32(eax + 8) = ecx;
    if (CMP_BE(ecx, edx)) goto loc_004B5DB1; /* jbe: below or equal (unsigned <=) */

loc_004B5DAC: ;
    MEM32(eax + 8) = esi;
    esi = 0; /* xor self */

loc_004B5DB1: ;
    if (TEST_NZ(esi, esi)) { sub_004B5DC1(); return; } /* jne: not equal / not zero */

loc_004B5DB5: ;
    MEM32(ebp + 0x64) = 0xC000009Au;
    g_seh_ebp = ebp; sub_004B5EA4(); return; /* tail jmp 0x004B5EA4 */

}

/**
 * sub_004B5EAF
 * Original: 0x004B5EAF - 0x004B5EDD (46 bytes, 18 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_004B5EAF(void)
{
    uint32_t ebp;
    int _flags = 0; /* fallback flag var */

loc_004B5EAF: ;
    PUSH32(esp, ebp);
    ebp = esp;
    PUSH32(esp, ecx);
    ecx = MEM32(ebp + 8);
    edx = MEM32(ecx + 8);
    MEM32(ebp + -4) = MEM32(ebp + -4) & 0;
    PUSH32(esp, esi);
    esi = MEM32(ecx + 4);
    eax = edx + 0x10;
    (void)0; /* cmp eax, esi - flags set for next jcc */
    MEM32(ecx + 8) = eax;
    if (CMP_BE(eax, esi)) goto loc_004B5ED0; /* jbe: below or equal (unsigned <=) */

loc_004B5ECB: ;
    MEM32(ecx + 8) = edx;
    edx = 0; /* xor self */

loc_004B5ED0: ;
    if (TEST_NZ(edx, edx)) { sub_004B5EDD(); return; } /* jne: not equal / not zero */

loc_004B5ED4: ;
    MEM32(ebp + -4) = 0xC000009Au;
    g_seh_ebp = ebp; sub_004B5F36(); return; /* tail jmp 0x004B5F36 */

}

/**
 * sub_004B5F3E
 * Original: 0x004B5F3E - 0x004B5F72 (52 bytes, 19 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_004B5F3E(void)
{
    uint32_t ebp;
    int _flags = 0; /* fallback flag var */

loc_004B5F3E: ;
    PUSH32(esp, ebp);
    ebp = esp;
    esp = esp - 0x14;
    MEM32(ebp + -4) = MEM32(ebp + -4) & 0;
    PUSH32(esp, ebx);
    PUSH32(esp, esi);
    esi = MEM32(ebp + 8);
    ebx = MEM32(esi + 8);
    ecx = MEM32(esi + 4);
    eax = ebx + 0x10;
    (void)0; /* cmp eax, ecx - flags set for next jcc */
    MEM32(esi + 8) = eax;
    if (CMP_BE(eax, ecx)) goto loc_004B5F62; /* jbe: below or equal (unsigned <=) */

loc_004B5F5D: ;
    MEM32(esi + 8) = ebx;
    ebx = 0; /* xor self */

loc_004B5F62: ;
    if (TEST_NZ(ebx, ebx)) { sub_004B5F72(); return; } /* jne: not equal / not zero */

loc_004B5F66: ;
    MEM32(ebp + -4) = 0xC000009Au;
    g_seh_ebp = ebp; sub_004B6060(); return; /* tail jmp 0x004B6060 */

}

/**
 * sub_004B6069
 * Original: 0x004B6069 - 0x004B60F3 (138 bytes, 45 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_004B6069(void)
{
    uint32_t ebp;

loc_004B6069: ;
    PUSH32(esp, ebp);
    ebp = esp;
    esp = esp - 0x84;
    eax = ebp + -20;
    PUSH32(esp, eax);
    eax = MEM32(ebp + 8);
    PUSH32(esp, 0);
    PUSH32(esp, 0);
    PUSH32(esp, 0xD);
    PUSH32(esp, 0x882588);
    PUSH32(esp, MEM32(eax + 4));
    MEM32(ebp + -4) = 0x400;
    PUSH32(esp, MEM32(eax + 8));
    PUSH32(esp, 0); sub_004B5B08(); /* call 0x004B5B08 */

loc_004B6096: ;
    eax = ebp + -132;
    PUSH32(esp, eax);
    PUSH32(esp, 0); sub_0049FF04(); /* call 0x0049FF04 */

loc_004B60A2: ;
    PUSH32(esp, 4);
    eax = ebp + -4;
    PUSH32(esp, eax);
    eax = ebp + -132;
    PUSH32(esp, eax);
    PUSH32(esp, 0); sub_0049FF42(); /* call 0x0049FF42 */

loc_004B60B4: ;
    eax = MEM32(ebp + 0xC);
    PUSH32(esp, 0x10);
    eax = eax + 0x140;
    PUSH32(esp, eax);
    eax = ebp + -132;
    PUSH32(esp, eax);
    PUSH32(esp, 0); sub_0049FF42(); /* call 0x0049FF42 */

loc_004B60CB: ;
    eax = ebp + -132;
    PUSH32(esp, eax);
    PUSH32(esp, 0); sub_004A0070(); /* call 0x004A0070 */

loc_004B60D7: ;
    PUSH32(esp, MEM32(ebp + 0x10));
    eax = ebp + -40;
    PUSH32(esp, 0);
    PUSH32(esp, 0);
    PUSH32(esp, 0x10);
    PUSH32(esp, eax);
    PUSH32(esp, 0x10);
    eax = ebp + -20;
    PUSH32(esp, eax);
    PUSH32(esp, 0); sub_004B5B08(); /* call 0x004B5B08 */

loc_004B60EF: ;
    esp = ebp;
    POP32(esp, ebp); /* leave */
    esp += 16; return; /* ret 12 */

}

/**
 * sub_004B60F3
 * Original: 0x004B60F3 - 0x004B611C (41 bytes, 18 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_004B60F3(void)
{
    uint32_t ebp;
    int _flags = 0; /* fallback flag var */
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_004B60F3: ;
    ecx = MEM32(esp + 4);
    eax = MEM32(ecx + 0x38);
    PUSH32(esp, esi);
    PUSH32(esp, edi);
    PUSH32(esp, 0x3C);
    esi = 0; /* xor self */
    POP32(esp, edi);
    PUSH32(esp, esi);
    eax = eax + 0xA0;
    (void)0; /* cmp MEM32(esp + 0x14), esi - flags set for next jcc */
    PUSH32(esp, esi);
    PUSH32(esp, esi);
    if (CMP_EQ(MEM32(esp + 0x14), esi)) { sub_004B611C(); return; } /* je: equal / zero */

loc_004B610F: ;
    PUSH32(esp, MEM32(esp + 0x1C));
    PUSH32(esp, eax);
    PUSH32(esp, ecx);
    PUSH32(esp, 0); sub_004C1764(); /* call 0x004C1764 */

loc_004B611A: ;
    g_seh_ebp = ebp; sub_004B6127(); return; /* tail jmp 0x004B6127 */

}

/**
 * sub_004B6134
 * Original: 0x004B6134 - 0x004B62AE (378 bytes, 146 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_004B6134(void)
{
    uint32_t ebp;
    int _flags = 0; /* fallback flag var */

loc_004B6134: ;
    PUSH32(esp, ebp);
    ebp = esp;
    esp = esp - 0x14;
    PUSH32(esp, ebx);
    ebx = MEM32(ebp + 8);
    PUSH32(esp, esi);
    PUSH32(esp, edi);
    edi = 0; /* xor self */
    PUSH32(esp, edi);
    eax = ebp + -4;
    PUSH32(esp, eax);
    PUSH32(esp, ebx);
    MEM32(ebp + -4) = edi;
    PUSH32(esp, 0); sub_004B60F3(); /* call 0x004B60F3 */

loc_004B6150: ;
    (void)0; /* cmp eax, edi - flags set for next jcc */
    MEM32(ebp + 8) = eax;
    if (CMP_NE(eax, edi)) goto loc_004B62A1; /* jne: not equal / not zero */

loc_004B615B: ;
    eax = MEM32(ebx + 0x14);
    ecx = MEM32(ebx + 8);
    esi = MEM32(ebp + 0x18);
    MEM32(ebx + eax * 4 + 0x18) = ecx;
    MEM32(ebx + 0x14) = MEM32(ebx + 0x14) + 1;
    eax = MEM32(esi);
    MEM32(ebp + -16) = edi;
    (void)0; /* cmp eax, edi - flags set for next jcc */
    edi = MEM32(ebp + 0x14);
    if (CMP_EQ(eax, edi)) goto loc_004B617E; /* je: equal / zero */

loc_004B6177: ;
    PUSH32(esp, MEM32(edi));
    PUSH32(esp, eax);
    PUSH32(esp, 8);
    goto loc_004B6184;

loc_004B617E: ;
    PUSH32(esp, 0);
    PUSH32(esp, 0);
    PUSH32(esp, 0x10);

loc_004B6184: ;
    PUSH32(esp, MEM32(ebp + 0x10));
    PUSH32(esp, MEM32(ebp + 0xC));
    PUSH32(esp, MEM32(ebp + -4));
    PUSH32(esp, 0); sub_004C23B9(); /* call 0x004C23B9 */

loc_004B6192: ;
    edx = 0; /* xor self */
    if (CMP_GE(eax, edx)) goto loc_004B61A1; /* jge: greater or equal (signed >=) */

loc_004B6198: ;
    MEM32(ebp + 8) = 0x3C;
    goto loc_004B61C7;

loc_004B61A1: ;
    ecx = MEM32(esi);
    (void)0; /* cmp ecx, edx - flags set for next jcc */
    eax = MEM32(ebp + -4);
    if (CMP_EQ(ecx, edx)) goto loc_004B61EE; /* je: equal / zero */

loc_004B61AA: ;
    if (CMP_NE(ecx, MEM32(eax + 0x10))) goto loc_004B61BC; /* jne: not equal / not zero */

loc_004B61AF: ;
    ecx = MEM32(eax + 0x18);
    esi = MEM32(ebp + -8);
    MEM32(edi) = ecx;
    goto loc_004B6241;

loc_004B61BC: ;
    MEM32(edi) = edx;
    MEM32(esi) = edx;
    MEM32(ebp + 8) = 0xC000009Au;

loc_004B61C7: ;
    ecx = MEM32(ebx + 8);
    MEM32(ebx + 0x14) = MEM32(ebx + 0x14) - 1;
    eax = MEM32(ebx + 0x14);
    edi = MEM32(ebx + eax * 4 + 0x18);
    ecx = ecx - edi;
    edx = ecx;
    ecx = ecx >> 2;
    eax = 0; /* xor self */
    MEM32(ebx + 8) = edi;
    { uint32_t _i; for (_i = 0; _i < ecx; _i++) MEM32(edi + _i*4) = eax; }
    edi += ecx * 4; ecx = 0; /* rep stosd */
    ecx = edx;
    ecx = ecx & 3;
    memset((void*)XBOX_PTR(edi), (uint8_t)eax, ecx);
    edi += ecx; ecx = 0; /* rep stosb */
    goto loc_004B62A1;

loc_004B61EE: ;
    ecx = MEM32(eax + 0x18);
    MEM32(edi) = ecx;
    eax = MEM32(eax + 0x10);
    MEM32(esi) = eax;
    edi = MEM32(edi);
    (void)0; /* cmp MEM32(ebx + 0x10), edi - flags set for next jcc */
    MEM32(ebp + 0x10) = eax;
    MEM32(ebp + 0xC) = edi;
    if (CMP_AE(MEM32(ebx + 0x10), edi)) goto loc_004B6217; /* jae: above or equal (unsigned >=) */

loc_004B6205: ;
    eax = edi;
    eax = eax + 3;
    eax = eax & 0xFFFFFFFCu;
    PUSH32(esp, 0); sub_00470E50(); /* call 0x00470E50 */

loc_004B6212: ;
    eax = MEM32(ebp + 0x10);
    edx = esp;

loc_004B6217: ;
    if (TEST_NZ(edx, edx)) goto loc_004B621E; /* jne: not equal / not zero */

loc_004B621B: ;
    edx = MEM32(ebx + 0xC);

loc_004B621E: ;
    ecx = edi;
    esi = eax;
    eax = ecx;
    ecx = ecx >> 2;
    edi = edx;
    memcpy((void*)XBOX_PTR(edi), (void*)XBOX_PTR(esi), ecx * 4);
    esi += ecx * 4; edi += ecx * 4; ecx = 0; /* rep movsd */
    ecx = eax;
    eax = MEM32(ebp + 0x18);
    ecx = ecx & 3;
    memcpy((void*)XBOX_PTR(edi), (void*)XBOX_PTR(esi), ecx);
    esi += ecx; edi += ecx; ecx = 0; /* rep movsb */
    esi = MEM32(ebp + 0xC);
    MEM32(ebp + -12) = eax;
    eax = MEM32(ebp + -4);
    MEM32(ebp + -16) = edx;

loc_004B6241: ;
    PUSH32(esp, 0);
    PUSH32(esp, eax);
    PUSH32(esp, 0); sub_004B59D2(); /* call 0x004B59D2 */

loc_004B6249: ;
    MEM32(ebx + 0x14) = MEM32(ebx + 0x14) - 1;
    eax = MEM32(ebx + 0x14);
    edi = MEM32(ebx + eax * 4 + 0x18);
    ecx = MEM32(ebx + 8);
    ecx = ecx - edi;
    edx = ecx;
    ecx = ecx >> 2;
    eax = 0; /* xor self */
    MEM32(ebx + 8) = edi;
    { uint32_t _i; for (_i = 0; _i < ecx; _i++) MEM32(edi + _i*4) = eax; }
    edi += ecx * 4; ecx = 0; /* rep stosd */
    ecx = edx;
    ecx = ecx & 3;
    (void)0; /* cmp MEM32(ebp + -16), 0 - flags set for next jcc */
    memset((void*)XBOX_PTR(edi), (uint8_t)eax, ecx);
    edi += ecx; ecx = 0; /* rep stosb */
    if (CMP_EQ(MEM32(ebp + -16), 0)) goto loc_004B62A1; /* je: equal / zero */

loc_004B6271: ;
    edi = MEM32(ebx + 8);
    eax = esi + 3;
    eax = eax & 0xFFFFFFFCu;
    eax = eax + edi;
    (void)0; /* cmp eax, MEM32(ebx + 4) - flags set for next jcc */
    MEM32(ebx + 8) = eax;
    if (CMP_BE(eax, MEM32(ebx + 4))) goto loc_004B6289; /* jbe: below or equal (unsigned <=) */

loc_004B6284: ;
    MEM32(ebx + 8) = edi;
    edi = 0; /* xor self */

loc_004B6289: ;
    eax = MEM32(ebp + -12);
    ecx = esi;
    esi = MEM32(ebp + -16);
    MEM32(eax) = edi;
    eax = ecx;
    ecx = ecx >> 2;
    memcpy((void*)XBOX_PTR(edi), (void*)XBOX_PTR(esi), ecx * 4);
    esi += ecx * 4; edi += ecx * 4; ecx = 0; /* rep movsd */
    ecx = eax;
    ecx = ecx & 3;
    memcpy((void*)XBOX_PTR(edi), (void*)XBOX_PTR(esi), ecx);
    esi += ecx; edi += ecx; ecx = 0; /* rep movsb */

loc_004B62A1: ;
    eax = MEM32(ebp + 8);
    esp = ebp + -32;
    POP32(esp, edi);
    POP32(esp, esi);
    POP32(esp, ebx);
    esp = ebp;
    POP32(esp, ebp); /* leave */
    esp += 24; return; /* ret 20 */

}

/**
 * sub_004B62AE
 * Original: 0x004B62AE - 0x004B6316 (104 bytes, 45 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_004B62AE(void)
{
    uint32_t ebp;
    int _flags = 0; /* fallback flag var */

loc_004B62AE: ;
    PUSH32(esp, ebp);
    ebp = esp;
    PUSH32(esp, ecx);
    PUSH32(esp, ebx);
    PUSH32(esp, edi);
    eax = ebp + -4;
    PUSH32(esp, eax);
    edi = 0; /* xor self */
    PUSH32(esp, edi);
    PUSH32(esp, MEM32(ebp + 8));
    MEM32(ebp + -4) = edi;
    PUSH32(esp, 0); sub_004B60F3(); /* call 0x004B60F3 */

loc_004B62C6: ;
    ebx = eax;
    if (CMP_NE(ebx, edi)) goto loc_004B630E; /* jne: not equal / not zero */

loc_004B62CC: ;
    PUSH32(esp, esi);
    PUSH32(esp, MEM32(ebp + 0x10));
    esi = MEM32(ebp + 0x18);
    PUSH32(esp, MEM32(ebp + 0xC));
    MEM32(esi) = edi;
    PUSH32(esp, 8);
    PUSH32(esp, MEM32(ebp + 0x14));
    PUSH32(esp, esi);
    PUSH32(esp, MEM32(ebp + -4));
    PUSH32(esp, 0); sub_004C1841(); /* call 0x004C1841 */

loc_004B62E6: ;
    if (CMP_GE(eax, edi)) goto loc_004B6304; /* jge: greater or equal (signed >=) */

loc_004B62EA: ;
    if (CMP_EQ(eax, 0xFFFFFC0Fu)) goto loc_004B62FD; /* je: equal / zero */

loc_004B62F1: ;
    if (CMP_EQ(eax, 0xFFFFFC16u)) goto loc_004B62FD; /* je: equal / zero */

loc_004B62F8: ;
    PUSH32(esp, 0x3C);
    POP32(esp, ebx);
    goto loc_004B6302;

loc_004B62FD: ;
    ebx = 0x80000001u;

loc_004B6302: ;
    MEM32(esi) = edi;

loc_004B6304: ;
    PUSH32(esp, MEM32(ebp + -4));
    PUSH32(esp, edi);
    PUSH32(esp, 0); sub_004B59D2(); /* call 0x004B59D2 */

loc_004B630D: ;
    POP32(esp, esi);

loc_004B630E: ;
    POP32(esp, edi);
    eax = ebx;
    POP32(esp, ebx);
    esp = ebp;
    POP32(esp, ebp); /* leave */
    esp += 24; return; /* ret 20 */

}

/**
 * sub_004B6316
 * Original: 0x004B6316 - 0x004B634C (54 bytes, 21 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_004B6316(void)
{
    uint32_t ebp;
    int _flags = 0; /* fallback flag var */

loc_004B6316: ;
    PUSH32(esp, ebp);
    ebp = esp;
    eax = MEM32(ebp + 0xC);
    PUSH32(esp, esi);
    PUSH32(esp, MEM32(ebp + 0x18));
    esi = 0; /* xor self */
    PUSH32(esp, MEM32(ebp + 0x1C));
    PUSH32(esp, MEM32(eax + 0xC));
    PUSH32(esp, MEM32(eax + 0x10));
    eax = MEM32(ebp + 0x10);
    PUSH32(esp, MEM32(ebp + 0x14));
    PUSH32(esp, MEM32(eax + 4));
    PUSH32(esp, MEM32(eax + 8));
    PUSH32(esp, 0); sub_004B5C25(); /* call 0x004B5C25 */

loc_004B633C: ;
    if (CMP_GE(eax & eax, 0)) goto loc_004B6345; /* jge: greater or equal (signed >=) */

loc_004B6340: ;
    esi = 0xC000006Du;

loc_004B6345: ;
    eax = esi;
    POP32(esp, esi);
    POP32(esp, ebp);
    esp += 28; return; /* ret 24 */

}

/**
 * sub_004B634C
 * Original: 0x004B634C - 0x004B637A (46 bytes, 21 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_004B634C(void)
{
    uint32_t ebp;
    int _flags = 0; /* fallback flag var */

loc_004B634C: ;
    PUSH32(esp, ebp);
    ebp = esp;
    ecx = MEM32(ebp + 0x10);
    PUSH32(esp, esi);
    PUSH32(esp, edi);
    edi = MEM32(ebp + 0xC);
    MEM32(edi) = ecx;
    ecx = MEM32(ebp + 8);
    edx = MEM32(ecx + 8);
    esi = edx + 8;
    eax = 0; /* xor self */
    (void)0; /* cmp esi, MEM32(ecx + 4) - flags set for next jcc */
    MEM32(ecx + 8) = esi;
    if (CMP_BE(esi, MEM32(ecx + 4))) goto loc_004B6371; /* jbe: below or equal (unsigned <=) */

loc_004B636C: ;
    MEM32(ecx + 8) = edx;
    edx = 0; /* xor self */

loc_004B6371: ;
    if (CMP_NE(edx, eax)) { sub_004B637A(); return; } /* jne: not equal / not zero */

loc_004B6375: ;
    PUSH32(esp, 0x3C);
    POP32(esp, eax);
    g_seh_ebp = ebp; sub_004B63B2(); return; /* tail jmp 0x004B63B2 */

}

/**
 * sub_004B63B8
 * Original: 0x004B63B8 - 0x004B6449 (145 bytes, 65 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_004B63B8(void)
{
    uint32_t ebp;
    int _flags = 0; /* fallback flag var */

loc_004B63B8: ;
    PUSH32(esp, ebp);
    ebp = esp;
    PUSH32(esp, ecx);
    MEM32(ebp + -4) = MEM32(ebp + -4) & 0;
    PUSH32(esp, ebx);
    ebx = MEM32(ebp + 0x10);
    PUSH32(esp, esi);
    esi = MEM32(ebp + 0xC);
    PUSH32(esp, edi);
    eax = 0; /* xor self */
    edi = ebx;
    MEM32(edi) = eax; edi += 4; /* stosd */
    PUSH32(esp, esi);
    MEM32(edi) = eax; edi += 4; /* stosd */
    PUSH32(esp, 0); sub_0046FC2D(); /* call 0x0046FC2D */

loc_004B63D5: ;
    MEM32(ebx) = eax;
    eax = esi;
    POP32(esp, ecx);
    ecx = eax + 1;

loc_004B63DD: ;
    SET_LO8(edx, MEM8(eax));
    eax++;
    if (TEST_NZ(LO8(edx), LO8(edx))) goto loc_004B63DD; /* jne: not equal / not zero */

loc_004B63E4: ;
    eax = eax - ecx;
    eax = eax + esi + 1;
    ebx = 0; /* xor self */
    if (CMP_EQ(MEM8(eax), LO8(ebx))) goto loc_004B643F; /* je: equal / zero */

loc_004B63F0: ;
    edi = MEM32(ebp + 8);

loc_004B63F3: ;
    ecx = MEM32(edi + 8);
    edx = ecx + 8;
    (void)0; /* cmp edx, MEM32(edi + 4) - flags set for next jcc */
    MEM32(edi + 8) = edx;
    if (CMP_BE(edx, MEM32(edi + 4))) goto loc_004B6406; /* jbe: below or equal (unsigned <=) */

loc_004B6401: ;
    MEM32(edi + 8) = ecx;
    ecx = 0; /* xor self */

loc_004B6406: ;
    if (TEST_Z(ecx, ecx)) goto loc_004B6438; /* je: equal / zero */

loc_004B640A: ;
    MEM32(ecx) = MEM32(ecx) & 0;
    (void)0; /* test ebx, ebx - flags set for next jcc */
    MEM32(ecx + 4) = eax;
    if (TEST_Z(ebx, ebx)) goto loc_004B6418; /* je: equal / zero */

loc_004B6414: ;
    MEM32(ebx) = ecx;
    goto loc_004B641E;

loc_004B6418: ;
    edx = MEM32(ebp + 0x10);
    MEM32(edx + 4) = ecx;

loc_004B641E: ;
    ebx = ecx;
    ecx = eax;
    esi = ecx + 1;

loc_004B6425: ;
    SET_LO8(edx, MEM8(ecx));
    ecx++;
    if (TEST_NZ(LO8(edx), LO8(edx))) goto loc_004B6425; /* jne: not equal / not zero */

loc_004B642C: ;
    ecx = ecx - esi;
    eax = eax + ecx + 1;
    if (CMP_NE(MEM8(eax), LO8(edx))) goto loc_004B63F3; /* jne: not equal / not zero */

loc_004B6436: ;
    goto loc_004B643F;

loc_004B6438: ;
    MEM32(ebp + -4) = 0x3C;

loc_004B643F: ;
    eax = MEM32(ebp + -4);
    POP32(esp, edi);
    POP32(esp, esi);
    POP32(esp, ebx);
    esp = ebp;
    POP32(esp, ebp); /* leave */
    esp += 16; return; /* ret 12 */

}

/**
 * sub_004B6449
 * Original: 0x004B6449 - 0x004B64FA (177 bytes, 77 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_004B6449(void)
{
    uint32_t ebp;

loc_004B6449: ;
    PUSH32(esp, ebp);
    ebp = esp;
    esp = esp - 0x124;
    PUSH32(esp, ebx);
    PUSH32(esp, esi);
    PUSH32(esp, edi);
    eax = ebp + -16;
    PUSH32(esp, eax);
    PUSH32(esp, 0);
    PUSH32(esp, 0);
    PUSH32(esp, 4);
    eax = ebp + 0x14;
    PUSH32(esp, eax);
    PUSH32(esp, MEM32(ebp + 0x10));
    PUSH32(esp, MEM32(ebp + 0xC));
    PUSH32(esp, 0); sub_004B5B08(); /* call 0x004B5B08 */

loc_004B646E: ;
    edi = MEM32(ebp + 0x1C);
    esi = MEM32(ebp + 0x20);
    PUSH32(esp, edi);
    PUSH32(esp, MEM32(ebp + 0x18));
    eax = esi + 0x18;
    PUSH32(esp, eax);
    PUSH32(esp, 0); sub_0046E670(); /* call 0x0046E670 */

loc_004B6481: ;
    ebx = MEM32(ebp + 0x24);
    edi = edi + 0x18;
    MEM32(ebx) = edi;
    eax = 0; /* xor self */
    edi = esi;
    MEM32(edi) = eax; edi += 4; /* stosd */
    MEM32(edi) = eax; edi += 4; /* stosd */
    MEM32(edi) = eax; edi += 4; /* stosd */
    esp = esp + 0xC;
    MEM32(edi) = eax; edi += 4; /* stosd */
    PUSH32(esp, 8);
    edi = esi + 0x10;
    PUSH32(esp, edi);
    PUSH32(esp, 0); sub_0048D66F(); /* call 0x0048D66F */

loc_004B649F: ;
    eax = MEM32(ebx);
    PUSH32(esp, esi);
    PUSH32(esp, 0);
    PUSH32(esp, 0);
    eax = eax - 0x10;
    PUSH32(esp, eax);
    PUSH32(esp, edi);
    PUSH32(esp, 0x10);
    eax = ebp + -16;
    PUSH32(esp, eax);
    PUSH32(esp, 0); sub_004B5B08(); /* call 0x004B5B08 */

loc_004B64B6: ;
    eax = ebp + -32;
    PUSH32(esp, eax);
    PUSH32(esp, 0);
    PUSH32(esp, 0);
    PUSH32(esp, 0x10);
    PUSH32(esp, esi);
    PUSH32(esp, 0x10);
    eax = ebp + -16;
    PUSH32(esp, eax);
    PUSH32(esp, 0); sub_004B5B08(); /* call 0x004B5B08 */

loc_004B64CC: ;
    eax = ebp + -32;
    PUSH32(esp, eax);
    PUSH32(esp, 0x10);
    eax = ebp + -292;
    PUSH32(esp, eax);
    PUSH32(esp, 0); sub_0046DA8E(); /* call 0x0046DA8E */

loc_004B64DE: ;
    eax = MEM32(ebx);
    PUSH32(esp, edi);
    eax = eax - 0x10;
    PUSH32(esp, eax);
    eax = ebp + -292;
    PUSH32(esp, eax);
    PUSH32(esp, 0); sub_0046DA88(); /* call 0x0046DA88 */

loc_004B64F1: ;
    POP32(esp, edi);
    POP32(esp, esi);
    eax = 0; /* xor self */
    POP32(esp, ebx);
    esp = ebp;
    POP32(esp, ebp); /* leave */
    esp += 36; return; /* ret 32 */

}

/**
 * sub_004B64FA
 * Original: 0x004B64FA - 0x004B6541 (71 bytes, 29 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_004B64FA(void)
{
    uint32_t ebp;
    int _flags = 0; /* fallback flag var */

loc_004B64FA: ;
    PUSH32(esp, ebp);
    ebp = esp;
    esp = esp - 0x7C;
    edx = MEM32(ebp + 0x10);
    PUSH32(esp, ebx);
    ebx = MEM32(ebp + 8);
    PUSH32(esp, esi);
    PUSH32(esp, edi);
    eax = 0; /* xor self */
    edi = edx;
    MEM32(edi) = eax; edi += 4; /* stosd */
    MEM32(edi) = eax; edi += 4; /* stosd */
    MEM32(edi) = eax; edi += 4; /* stosd */
    eax = MEM32(ebx + 8);
    esi = 0; /* xor self */
    ecx = eax + 0x10;
    (void)0; /* cmp ecx, MEM32(ebx + 4) - flags set for next jcc */
    MEM32(ebp + -12) = esi;
    MEM32(ebp + -8) = esi;
    MEM32(ebp + -4) = esi;
    MEM32(ebx + 8) = ecx;
    if (CMP_BE(ecx, MEM32(ebx + 4))) goto loc_004B652E; /* jbe: below or equal (unsigned <=) */

loc_004B6529: ;
    MEM32(ebx + 8) = eax;
    eax = 0; /* xor self */

loc_004B652E: ;
    (void)0; /* cmp eax, esi - flags set for next jcc */
    MEM32(edx + 8) = eax;
    if (CMP_NE(eax, esi)) { sub_004B6541(); return; } /* jne: not equal / not zero */

loc_004B6535: ;
    MEM32(ebp + -4) = 0xC000009Au;
    g_seh_ebp = ebp; sub_004B65CB(); return; /* tail jmp 0x004B65CB */

}

/**
 * sub_004B65D5
 * Original: 0x004B65D5 - 0x004B66BE (233 bytes, 86 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_004B65D5(void)
{
    uint32_t ebp;
    int _flags = 0; /* fallback flag var */

loc_004B65D5: ;
    PUSH32(esp, ebp);
    ebp = esp;
    esp = esp - 0x20;
    PUSH32(esp, ebx);
    PUSH32(esp, esi);
    esi = MEM32(ebp + 8);
    ebx = 0; /* xor self */
    MEM32(ebp + -4) = ebx;
    eax = MEM32(esi + 0x14);
    ecx = MEM32(esi + 8);
    MEM32(esi + eax * 4 + 0x18) = ecx;
    MEM32(esi + 0x14) = MEM32(esi + 0x14) + 1;
    PUSH32(esp, edi);
    eax = ebp + -4;
    PUSH32(esp, eax);
    eax = MEM32(ebp + 0xC);
    PUSH32(esp, 6);
    PUSH32(esp, MEM32(eax + 4));
    PUSH32(esp, MEM32(eax + 8));
    PUSH32(esp, esi);
    PUSH32(esp, 0); sub_004B62AE(); /* call 0x004B62AE */

loc_004B6608: ;
    edx = eax;
    if (CMP_NE(edx, ebx)) goto loc_004B6693; /* jne: not equal / not zero */

loc_004B6612: ;
    eax = MEM32(ebp + -4);
    if (CMP_NE(MEM32(eax + 0xC), 0x6C)) goto loc_004B668A; /* jne: not equal / not zero */

loc_004B661B: ;
    edi = MEM32(ebp + 0x14);
    (void)0; /* cmp MEM32(edi + 0x38), ebx - flags set for next jcc */
    MEM32(ebp + 8) = ebx;
    if (CMP_BE(MEM32(edi + 0x38), ebx)) goto loc_004B6682; /* jbe: below or equal (unsigned <=) */

loc_004B6626: ;
    eax = ebp + -32;
    MEM32(ebp + -16) = 0x17;
    MEM32(ebp + -12) = 0x10;
    MEM32(ebp + -8) = eax;
    ebx = edi + 0x3C;

loc_004B663D: ;
    eax = ebp + -32;
    PUSH32(esp, eax);
    PUSH32(esp, MEM32(ebx));
    PUSH32(esp, MEM32(ebp + 0x10));
    PUSH32(esp, esi);
    PUSH32(esp, 0); sub_004B5D04(); /* call 0x004B5D04 */

loc_004B664C: ;
    PUSH32(esp, MEM32(edi + 0xAC));
    eax = ebp + 0xC;
    PUSH32(esp, eax);
    PUSH32(esp, 0x4B3);
    eax = ebp + -16;
    PUSH32(esp, eax);
    PUSH32(esp, MEM32(ebp + -4));
    PUSH32(esp, esi);
    PUSH32(esp, 0); sub_004B6316(); /* call 0x004B6316 */

loc_004B6668: ;
    if (TEST_Z(eax, eax)) goto loc_004B667C; /* je: equal / zero */

loc_004B666C: ;
    MEM32(ebp + 8) = MEM32(ebp + 8) + 1;
    eax = MEM32(ebp + 8);
    ebx = ebx + 4;
    if (CMP_B(eax, MEM32(edi + 0x38))) goto loc_004B663D; /* jb: below (unsigned <) */

loc_004B667A: ;
    goto loc_004B6682;

loc_004B667C: ;
    if (CMP_NE(MEM32(ebp + 0xC), 0x54)) goto loc_004B668A; /* jne: not equal / not zero */

loc_004B6682: ;
    eax = MEM32(ebp + 8);
    if (CMP_NE(eax, MEM32(edi + 0x38))) goto loc_004B6691; /* jne: not equal / not zero */

loc_004B668A: ;
    edx = 0xC000006Du;
    goto loc_004B6693;

loc_004B6691: ;
    edx = 0; /* xor self */

loc_004B6693: ;
    MEM32(esi + 0x14) = MEM32(esi + 0x14) - 1;
    eax = MEM32(esi + 0x14);
    edi = MEM32(esi + eax * 4 + 0x18);
    ecx = MEM32(esi + 8);
    ecx = ecx - edi;
    MEM32(esi + 8) = edi;
    esi = ecx;
    ecx = ecx >> 2;
    eax = 0; /* xor self */
    { uint32_t _i; for (_i = 0; _i < ecx; _i++) MEM32(edi + _i*4) = eax; }
    edi += ecx * 4; ecx = 0; /* rep stosd */
    ecx = esi;
    ecx = ecx & 3;
    memset((void*)XBOX_PTR(edi), (uint8_t)eax, ecx);
    edi += ecx; ecx = 0; /* rep stosb */
    POP32(esp, edi);
    POP32(esp, esi);
    eax = edx;
    POP32(esp, ebx);
    esp = ebp;
    POP32(esp, ebp); /* leave */
    esp += 20; return; /* ret 16 */

}

/**
 * sub_004B66BE
 * Original: 0x004B66BE - 0x004B67AA (236 bytes, 86 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_004B66BE(void)
{
    uint32_t ebp;
    int _flags = 0; /* fallback flag var */

loc_004B66BE: ;
    PUSH32(esp, ebp);
    ebp = esp;
    esp = esp - 0x20;
    PUSH32(esp, ebx);
    PUSH32(esp, esi);
    esi = MEM32(ebp + 8);
    ebx = 0; /* xor self */
    MEM32(ebp + -4) = ebx;
    eax = MEM32(esi + 0x14);
    ecx = MEM32(esi + 8);
    MEM32(esi + eax * 4 + 0x18) = ecx;
    MEM32(esi + 0x14) = MEM32(esi + 0x14) + 1;
    PUSH32(esp, edi);
    eax = ebp + -4;
    PUSH32(esp, eax);
    eax = MEM32(ebp + 0xC);
    PUSH32(esp, 6);
    PUSH32(esp, MEM32(eax + 4));
    PUSH32(esp, MEM32(eax + 8));
    PUSH32(esp, esi);
    PUSH32(esp, 0); sub_004B62AE(); /* call 0x004B62AE */

loc_004B66F1: ;
    edx = eax;
    if (CMP_NE(edx, ebx)) goto loc_004B677F; /* jne: not equal / not zero */

loc_004B66FB: ;
    eax = MEM32(ebp + -4);
    if (CMP_NE(MEM32(eax + 0xC), 0xF8)) goto loc_004B6776; /* jne: not equal / not zero */

loc_004B6707: ;
    edi = MEM32(ebp + 0x14);
    (void)0; /* cmp MEM32(edi + 0x74), ebx - flags set for next jcc */
    MEM32(ebp + 8) = ebx;
    if (CMP_BE(MEM32(edi + 0x74), ebx)) goto loc_004B676E; /* jbe: below or equal (unsigned <=) */

loc_004B6712: ;
    eax = ebp + -32;
    MEM32(ebp + -16) = 0x17;
    MEM32(ebp + -12) = 0x10;
    MEM32(ebp + -8) = eax;
    ebx = edi + 0x78;

loc_004B6729: ;
    eax = ebp + -32;
    PUSH32(esp, eax);
    PUSH32(esp, MEM32(ebx));
    PUSH32(esp, MEM32(ebp + 0x10));
    PUSH32(esp, esi);
    PUSH32(esp, 0); sub_004B5D04(); /* call 0x004B5D04 */

loc_004B6738: ;
    PUSH32(esp, MEM32(ebp + 0x18));
    eax = ebp + 0xC;
    PUSH32(esp, eax);
    PUSH32(esp, 0x4B2);
    eax = ebp + -16;
    PUSH32(esp, eax);
    PUSH32(esp, MEM32(ebp + -4));
    PUSH32(esp, esi);
    PUSH32(esp, 0); sub_004B6316(); /* call 0x004B6316 */

loc_004B6751: ;
    if (TEST_Z(eax, eax)) goto loc_004B6765; /* je: equal / zero */

loc_004B6755: ;
    MEM32(ebp + 8) = MEM32(ebp + 8) + 1;
    eax = MEM32(ebp + 8);
    ebx = ebx + 4;
    if (CMP_B(eax, MEM32(edi + 0x74))) goto loc_004B6729; /* jb: below (unsigned <) */

loc_004B6763: ;
    goto loc_004B676E;

loc_004B6765: ;
    if (CMP_NE(MEM32(ebp + 0xC), 0xE0)) goto loc_004B6776; /* jne: not equal / not zero */

loc_004B676E: ;
    eax = MEM32(ebp + 8);
    if (CMP_NE(eax, MEM32(edi + 0x74))) goto loc_004B677D; /* jne: not equal / not zero */

loc_004B6776: ;
    edx = 0xC000006Du;
    goto loc_004B677F;

loc_004B677D: ;
    edx = 0; /* xor self */

loc_004B677F: ;
    MEM32(esi + 0x14) = MEM32(esi + 0x14) - 1;
    eax = MEM32(esi + 0x14);
    edi = MEM32(esi + eax * 4 + 0x18);
    ecx = MEM32(esi + 8);
    ecx = ecx - edi;
    MEM32(esi + 8) = edi;
    esi = ecx;
    ecx = ecx >> 2;
    eax = 0; /* xor self */
    { uint32_t _i; for (_i = 0; _i < ecx; _i++) MEM32(edi + _i*4) = eax; }
    edi += ecx * 4; ecx = 0; /* rep stosd */
    ecx = esi;
    ecx = ecx & 3;
    memset((void*)XBOX_PTR(edi), (uint8_t)eax, ecx);
    edi += ecx; ecx = 0; /* rep stosb */
    POP32(esp, edi);
    POP32(esp, esi);
    eax = edx;
    POP32(esp, ebx);
    esp = ebp;
    POP32(esp, ebp); /* leave */
    esp += 24; return; /* ret 20 */

}

/**
 * sub_004B67AA
 * Original: 0x004B67AA - 0x004B67D5 (43 bytes, 18 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_004B67AA(void)
{
    uint32_t ebp;
    int _flags = 0; /* fallback flag var */

loc_004B67AA: ;
    PUSH32(esp, ebp);
    ebp = esp;
    esp = esp - 0x18;
    ecx = MEM32(ebp + 8);
    PUSH32(esp, ebx);
    PUSH32(esp, esi);
    esi = MEM32(ecx + 8);
    eax = esi + 0x10;
    ebx = 0; /* xor self */
    (void)0; /* cmp eax, MEM32(ecx + 4) - flags set for next jcc */
    MEM32(ecx + 8) = eax;
    if (CMP_BE(eax, MEM32(ecx + 4))) goto loc_004B67CA; /* jbe: below or equal (unsigned <=) */

loc_004B67C5: ;
    MEM32(ecx + 8) = esi;
    esi = 0; /* xor self */

loc_004B67CA: ;
    if (CMP_NE(esi, ebx)) { sub_004B67D5(); return; } /* jne: not equal / not zero */

loc_004B67CE: ;
    ebx = 0xC000009Au;
    g_seh_ebp = ebp; sub_004B683B(); return; /* tail jmp 0x004B683B */

}

/**
 * sub_004B684D
 * Original: 0x004B684D - 0x004B6887 (58 bytes, 22 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_004B684D(void)
{
    uint32_t ebp;
    int _flags = 0; /* fallback flag var */

loc_004B684D: ;
    PUSH32(esp, ebp);
    ebp = esp;
    esp = esp - 0xC;
    PUSH32(esp, ebx);
    ebx = MEM32(ebp + 8);
    ecx = MEM32(ebx + 8);
    PUSH32(esp, esi);
    eax = ecx + 0x10;
    esi = 0; /* xor self */
    (void)0; /* cmp eax, MEM32(ebx + 4) - flags set for next jcc */
    PUSH32(esp, edi);
    MEM32(ebp + -4) = esi;
    MEM32(ebp + 8) = ecx;
    MEM32(ebx + 8) = eax;
    if (CMP_BE(eax, MEM32(ebx + 4))) goto loc_004B6877; /* jbe: below or equal (unsigned <=) */

loc_004B686F: ;
    MEM32(ebx + 8) = ecx;
    MEM32(ebp + 8) = esi;
    ecx = esi;

loc_004B6877: ;
    if (CMP_NE(ecx, esi)) { sub_004B6887(); return; } /* jne: not equal / not zero */

loc_004B687B: ;
    MEM32(ebp + -4) = 0xC000009Au;
    g_seh_ebp = ebp; sub_004B69CE(); return; /* tail jmp 0x004B69CE */

}

/**
 * sub_004B69DB
 * Original: 0x004B69DB - 0x004B6B38 (349 bytes, 122 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_004B69DB(void)
{
    uint32_t ebp;
    int _flags = 0; /* fallback flag var */

loc_004B69DB: ;
    PUSH32(esp, ebp);
    ebp = esp;
    esp = esp - 0x54;
    PUSH32(esp, ebx);
    PUSH32(esp, esi);
    ebx = 0; /* xor self */
    PUSH32(esp, edi);
    eax = 0x7D0;
    esi = ecx;
    MEM32(ebp + -4) = ebx;
    MEM32(ebp + -8) = ebx;
    PUSH32(esp, 0); sub_00470E50(); /* call 0x00470E50 */

loc_004B69F8: ;
    edi = esp;
    eax = edi + 0x7D0;
    MEM32(ebp + -80) = eax;
    eax = 0; /* xor self */
    MEM32(ebp + -84) = edi;
    MEM32(ebp + -68) = ebx;
    MEM32(ebp + -76) = edi;
    MEM32(ebp + -64) = ebx;
    ecx = 0x1F4;
    { uint32_t _i; for (_i = 0; _i < ecx; _i++) MEM32(edi + _i*4) = eax; }
    edi += ecx * 4; ecx = 0; /* rep stosd */
    eax = ebp + -4;
    PUSH32(esp, eax);
    PUSH32(esp, 0x21);
    PUSH32(esp, MEM32(ebp + 0x20));
    eax = ebp + -84;
    PUSH32(esp, MEM32(ebp + 0x1C));
    MEM32(ebp + -72) = ebx;
    PUSH32(esp, eax);
    MEM32(ebp + -28) = esi;
    PUSH32(esp, 0); sub_004B62AE(); /* call 0x004B62AE */

loc_004B6A33: ;
    if (TEST_NZ(eax, eax)) goto loc_004B6ABE; /* jne: not equal / not zero */

loc_004B6A3B: ;
    eax = MEM32(ebp + -4);
    if (CMP_NE(MEM32(eax), 5)) { sub_004B6B38(); return; } /* jne: not equal / not zero */

loc_004B6A47: ;
    if (CMP_NE(MEM32(eax + 4), 0xF)) { sub_004B6B38(); return; } /* jne: not equal / not zero */

loc_004B6A51: ;
    PUSH32(esp, MEM32(eax + 0x18));
    ecx = MEM32(ebp + 8);
    ecx = ecx + 0x2B8;
    MEM32(ebp + -16) = ecx;
    ecx = eax + 0x14;
    PUSH32(esp, ecx);
    PUSH32(esp, 0xC);
    ecx = ebp + -24;
    PUSH32(esp, ecx);
    eax = eax + 8;
    PUSH32(esp, eax);
    eax = ebp + -84;
    PUSH32(esp, eax);
    MEM32(ebp + -24) = 0x17;
    MEM32(ebp + -20) = 0x10;
    PUSH32(esp, 0); sub_004B6316(); /* call 0x004B6316 */

loc_004B6A85: ;
    if (CMP_EQ(eax, ebx)) goto loc_004B6AA2; /* je: equal / zero */

loc_004B6A89: ;
    ecx = 0; /* xor self */
    (void)0; /* cmp eax, 0x3C - flags set for next jcc */
    SET_LO8(ecx, (CMP_NE(eax, 0x3C)) ? 1 : 0); /* setne */
    ecx--;
    ecx = ecx & 0x2D;
    ecx = ecx + 0xC000006Du;
    eax = ecx;
    g_seh_ebp = ebp; sub_004B6B3D(); return; /* tail jmp 0x004B6B3D */

loc_004B6AA2: ;
    eax = ebp + -8;
    PUSH32(esp, eax);
    eax = MEM32(ebp + -4);
    PUSH32(esp, 0x22);
    PUSH32(esp, MEM32(eax + 0x14));
    PUSH32(esp, MEM32(eax + 0x18));
    eax = ebp + -84;
    PUSH32(esp, eax);
    PUSH32(esp, 0); sub_004B62AE(); /* call 0x004B62AE */

loc_004B6ABA: ;
    if (TEST_Z(eax, eax)) goto loc_004B6AC5; /* je: equal / zero */

loc_004B6ABE: ;
    eax = 0xC000009Au;
    g_seh_ebp = ebp; sub_004B6B3D(); return; /* tail jmp 0x004B6B3D */

loc_004B6AC5: ;
    if (CMP_BE(MEM32(ebp + 0x10), 0)) goto loc_004B6B02; /* jbe: below or equal (unsigned <=) */

loc_004B6ACB: ;
    PUSH32(esp, MEM32(ebp + 0xC));
    eax = ebp + 0x20;
    PUSH32(esp, eax);
    eax = ebp + -24;
    PUSH32(esp, eax);
    PUSH32(esp, 0); sub_004B5923(); /* call 0x004B5923 */

loc_004B6ADB: ;
    eax = MEM32(ebp + -8);
    ecx = MEM32(ebp + 0x20);
    MEM32(ebp + 0xC) = MEM32(ebp + 0xC) + 8;
    if (CMP_NE(ecx, MEM32(eax + 0x10))) goto loc_004B6AFA; /* jne: not equal / not zero */

loc_004B6AEA: ;
    PUSH32(esp, 7);
    POP32(esp, ecx);
    edi = eax + 2;
    esi = ebp + -24;
    edx = 0; /* xor self */
    /* repe cmpsw - string compare, ecx iterations */
    if (1 /* strings matched (repe cmpsb) */) goto loc_004B6B05; /* je: equal / zero */

loc_004B6AFA: ;
    ebx++;
    if (CMP_B(ebx, MEM32(ebp + 0x10))) goto loc_004B6ACB; /* jb: below (unsigned <) */

loc_004B6B00: ;
    goto loc_004B6B05;

loc_004B6B02: ;
    eax = MEM32(ebp + -8);

loc_004B6B05: ;
    if (CMP_EQ(ebx, MEM32(ebp + 0x10))) { sub_004B6B38(); return; } /* je: equal / zero */

loc_004B6B0A: ;
    if (TEST_Z(MEM8(eax), 0x80)) { sub_004B6B38(); return; } /* je: equal / zero */

loc_004B6B0F: ;
    if (CMP_NE(MEM32(eax + 0x14), 0xFFFFFF7Du)) { sub_004B6B38(); return; } /* jne: not equal / not zero */

loc_004B6B18: ;
    ecx = MEM32(ebp + 0x18);
    if (CMP_NE(MEM32(eax + 0x18), ecx)) { sub_004B6B38(); return; } /* jne: not equal / not zero */

loc_004B6B20: ;
    esi = MEM32(eax + 0x1C);
    edi = MEM32(ebp + 0x14);
    eax = ecx;
    ecx = ecx >> 2;
    memcpy((void*)XBOX_PTR(edi), (void*)XBOX_PTR(esi), ecx * 4);
    esi += ecx * 4; edi += ecx * 4; ecx = 0; /* rep movsd */
    ecx = eax;
    ecx = ecx & 3;
    memcpy((void*)XBOX_PTR(edi), (void*)XBOX_PTR(esi), ecx);
    esi += ecx; edi += ecx; ecx = 0; /* rep movsb */
    eax = 0; /* xor self */
    g_seh_ebp = ebp; sub_004B6B3D(); return; /* tail jmp 0x004B6B3D */

}

/**
 * sub_004B6B47
 * Original: 0x004B6B47 - 0x004B6B7D (54 bytes, 24 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_004B6B47(void)
{
    uint32_t ebp;
    int _flags = 0; /* fallback flag var */

loc_004B6B47: ;
    PUSH32(esp, ebp);
    ebp = esp;
    ecx = MEM32(ebp + 0xC);
    PUSH32(esp, ebx);
    ebx = MEM32(ebp + 0x18);
    MEM32(ebx) = MEM32(ebx) & 0;
    eax = MEM32(ecx + 0xC);
    PUSH32(esp, esi);
    esi = MEM32(ebp + 8);
    eax = eax + 3;
    PUSH32(esp, edi);
    edi = MEM32(esi + 8);
    eax = eax & 0xFFFFFFFCu;
    eax = eax + edi;
    (void)0; /* cmp eax, MEM32(esi + 4) - flags set for next jcc */
    MEM32(esi + 8) = eax;
    if (CMP_BE(eax, MEM32(esi + 4))) goto loc_004B6B74; /* jbe: below or equal (unsigned <=) */

loc_004B6B6F: ;
    MEM32(esi + 8) = edi;
    edi = 0; /* xor self */

loc_004B6B74: ;
    if (TEST_NZ(edi, edi)) { sub_004B6B7D(); return; } /* jne: not equal / not zero */

loc_004B6B78: ;
    PUSH32(esp, 0x3C);
    POP32(esp, eax);
    g_seh_ebp = ebp; sub_004B6BD8(); return; /* tail jmp 0x004B6BD8 */

}

/**
 * sub_004B6BDF
 * Original: 0x004B6BDF - 0x004B6C1E (63 bytes, 25 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_004B6BDF(void)
{
    uint32_t ebp;
    int _flags = 0; /* fallback flag var */

loc_004B6BDF: ;
    PUSH32(esp, ebp);
    ebp = esp;
    eax = MEM32(ebp + 0xC);
    PUSH32(esp, esi);
    ecx = eax + 0xC;
    PUSH32(esp, ecx);
    PUSH32(esp, MEM32(eax + 0x10));
    MEM32(eax + 4) = 0x17;
    PUSH32(esp, MEM32(ebp + 0x10));
    eax = MEM32(ebp + 0x20);
    PUSH32(esp, MEM32(ebp + 0x14));
    esi = 0; /* xor self */
    PUSH32(esp, MEM32(ebp + 0x1C));
    PUSH32(esp, MEM32(eax + 4));
    PUSH32(esp, MEM32(eax + 8));
    PUSH32(esp, MEM32(ebp + 8));
    PUSH32(esp, 0); sub_004B6449(); /* call 0x004B6449 */

loc_004B6C10: ;
    if (CMP_GE(eax & eax, 0)) goto loc_004B6C17; /* jge: greater or equal (signed >=) */

loc_004B6C14: ;
    PUSH32(esp, 0x3C);
    POP32(esp, esi);

loc_004B6C17: ;
    eax = esi;
    POP32(esp, esi);
    POP32(esp, ebp);
    esp += 32; return; /* ret 28 */

}

/**
 * sub_004B6C1E
 * Original: 0x004B6C1E - 0x004B6C77 (89 bytes, 39 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_004B6C1E(void)
{
    uint32_t ebp;
    int _flags = 0; /* fallback flag var */

loc_004B6C1E: ;
    PUSH32(esp, ebp);
    ebp = esp;
    esp = esp - 0x34;
    eax = 0; /* xor self */
    PUSH32(esp, ebx);
    PUSH32(esp, esi);
    PUSH32(esp, edi);
    esi = 0; /* xor self */
    MEM16(ebp + -32) = LO16(esi);
    edi = ebp + -30;
    MEM32(edi) = eax; edi += 4; /* stosd */
    MEM32(edi) = eax; edi += 4; /* stosd */
    MEM32(edi) = eax; edi += 4; /* stosd */
    ebx = MEM32(ebp + 8);
    MEM32(edi) = eax; edi += 4; /* stosd */
    MEM16(edi) = LO16(eax); edi += 2; /* stosw */
    eax = 0; /* xor self */
    edi = ebp + -52;
    MEM32(edi) = eax; edi += 4; /* stosd */
    MEM32(edi) = eax; edi += 4; /* stosd */
    MEM32(edi) = eax; edi += 4; /* stosd */
    MEM32(edi) = eax; edi += 4; /* stosd */
    MEM32(edi) = eax; edi += 4; /* stosd */
    edi = MEM32(ebx + 8);
    eax = edi + 0x10;
    (void)0; /* cmp eax, MEM32(ebx + 4) - flags set for next jcc */
    MEM32(ebp + -4) = esi;
    MEM32(ebp + -12) = esi;
    MEM32(ebp + -8) = esi;
    MEM32(ebp + 8) = edi;
    MEM32(ebx + 8) = eax;
    if (CMP_BE(eax, MEM32(ebx + 4))) goto loc_004B6C67; /* jbe: below or equal (unsigned <=) */

loc_004B6C5F: ;
    MEM32(ebx + 8) = edi;
    MEM32(ebp + 8) = esi;
    edi = esi;

loc_004B6C67: ;
    if (CMP_NE(edi, esi)) { sub_004B6C77(); return; } /* jne: not equal / not zero */

loc_004B6C6B: ;
    MEM32(ebp + -4) = 0xC000009Au;
    g_seh_ebp = ebp; sub_004B6DE7(); return; /* tail jmp 0x004B6DE7 */

}

/**
 * sub_004B6DF4
 * Original: 0x004B6DF4 - 0x004B6E4F (91 bytes, 38 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_004B6DF4(void)
{
    uint32_t ebp;
    int _flags = 0; /* fallback flag var */

loc_004B6DF4: ;
    PUSH32(esp, ebp);
    ebp = esp;
    esp = esp - 0x38;
    MEM32(ebp + -4) = MEM32(ebp + -4) & 0;
    PUSH32(esp, ebx);
    PUSH32(esp, esi);
    PUSH32(esp, edi);
    eax = 0; /* xor self */
    edi = ebp + -56;
    MEM32(edi) = eax; edi += 4; /* stosd */
    MEM32(edi) = eax; edi += 4; /* stosd */
    MEM32(edi) = eax; edi += 4; /* stosd */
    MEM32(edi) = eax; edi += 4; /* stosd */
    PUSH32(esp, 0x6C);
    MEM32(edi) = eax; edi += 4; /* stosd */
    POP32(esp, eax);
    PUSH32(esp, 0); sub_00470E50(); /* call 0x00470E50 */

loc_004B6E13: ;
    ebx = MEM32(ebp + 8);
    edx = esp;
    PUSH32(esp, 0x1B);
    eax = 0; /* xor self */
    POP32(esp, ecx);
    edi = edx;
    { uint32_t _i; for (_i = 0; _i < ecx; _i++) MEM32(edi + _i*4) = eax; }
    edi += ecx * 4; ecx = 0; /* rep stosd */
    ecx = MEM32(ebx + 8);
    eax = ecx + 0x10;
    (void)0; /* cmp eax, MEM32(ebx + 4) - flags set for next jcc */
    MEM32(ebp + -8) = edx;
    MEM32(ebp + 8) = ecx;
    MEM32(ebx + 8) = eax;
    if (CMP_BE(eax, MEM32(ebx + 4))) goto loc_004B6E3F; /* jbe: below or equal (unsigned <=) */

loc_004B6E35: ;
    MEM32(ebp + 8) = MEM32(ebp + 8) & 0;
    MEM32(ebx + 8) = ecx;
    ecx = MEM32(ebp + 8);

loc_004B6E3F: ;
    if (TEST_NZ(ecx, ecx)) { sub_004B6E4F(); return; } /* jne: not equal / not zero */

loc_004B6E43: ;
    MEM32(ebp + -4) = 0xC000009Au;
    g_seh_ebp = ebp; sub_004B701B(); return; /* tail jmp 0x004B701B */

}

/**
 * sub_004B7028
 * Original: 0x004B7028 - 0x004B7362 (826 bytes, 283 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_004B7028(void)
{
    uint32_t ebp;
    int _flags = 0; /* fallback flag var */
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_004B7028: ;
    PUSH32(esp, ebp);
    ebp = esp + -100;
    esp = esp - 0x12C;
    PUSH32(esp, ebx);
    PUSH32(esp, esi);
    PUSH32(esp, edi);
    eax = 0x7D0;
    ebx = ecx;
    PUSH32(esp, 0); sub_00470E50(); /* call 0x00470E50 */

loc_004B7042: ;
    eax = MEM32(ebp + 0x78);
    edx = MEM32(eax);
    MEM32(ebp + 0x10) = MEM32(ebp + 0x10) & 0;
    MEM32(ebp + 0x14) = MEM32(ebp + 0x14) & 0;
    edi = esp;
    eax = edi + 0x7D0;
    MEM32(ebp + 4) = eax;
    eax = 0; /* xor self */
    ecx = 0x1F4;
    MEM32(ebp) = edi;
    MEM32(ebp + 8) = edi;
    { uint32_t _i; for (_i = 0; _i < ecx; _i++) MEM32(edi + _i*4) = eax; }
    edi += ecx * 4; ecx = 0; /* rep stosd */
    eax = MEM32(ebp + 0x74);
    (void)0; /* test eax, eax - flags set for next jcc */
    MEM32(ebp + 0xC) = eax;
    if (TEST_Z(eax, eax)) goto loc_004B7076; /* je: equal / zero */

loc_004B7073: ;
    MEM32(ebp + 0x10) = edx;

loc_004B7076: ;
    eax = 0; /* xor self */
    PUSH32(esp, 0x20);
    POP32(esp, ecx);
    edi = ebp + -136;
    { uint32_t _i; for (_i = 0; _i < ecx; _i++) MEM32(edi + _i*4) = eax; }
    edi += ecx * 4; ecx = 0; /* rep stosd */
    MEM32(ebp + -124) = MEM32(ebp + -124) & eax;
    edi = MEM32(ebp + 0x70);
    MEM32(ebp + 0x38) = ebx;
    ebx = MEM32(ebp + 0x7C);
    eax = MEM32(ebx + 0xA8);
    (void)0; /* test eax, eax - flags set for next jcc */
    esi = edi + 0x50;
    MEM32(ebp + 0x50) = 0x17;
    MEM32(ebp + 0x54) = 0x10;
    MEM32(ebp + 0x4C) = esi;
    MEM32(ebp + 0x58) = esi;
    if (TEST_Z(eax, eax)) goto loc_004B70DA; /* je: equal / zero */

loc_004B70B0: ;
    ecx = ebx + 0x6C;
    PUSH32(esp, ecx);
    PUSH32(esp, eax);
    eax = ebp + 0x50;
    PUSH32(esp, eax);
    PUSH32(esp, 0); sub_004B6069(); /* call 0x004B6069 */

loc_004B70BE: ;
    eax = ebp + -124;
    PUSH32(esp, eax);
    PUSH32(esp, MEM32(ebx + 0xA8));
    eax = ebp;
    PUSH32(esp, eax);
    PUSH32(esp, 0); sub_004B684D(); /* call 0x004B684D */

loc_004B70D1: ;
    if (CMP_GE(eax & eax, 0)) goto loc_004B70E4; /* jge: greater or equal (signed >=) */

loc_004B70D5: ;
    goto loc_004B72CF;

loc_004B70DA: ;
    edi = ebx + 0x6C;
    MEM32(edi) = MEM32(esi); esi += 4; edi += 4; /* movsd */
    MEM32(edi) = MEM32(esi); esi += 4; edi += 4; /* movsd */
    MEM32(edi) = MEM32(esi); esi += 4; edi += 4; /* movsd */
    MEM32(edi) = MEM32(esi); esi += 4; edi += 4; /* movsd */
    edi = MEM32(ebp + 0x70);

loc_004B70E4: ;
    eax = ebx + 0x6C;
    MEM32(ebp + 0x44) = eax;
    eax = ebp + -124;
    PUSH32(esp, eax);
    PUSH32(esp, 1);
    eax = ebp;
    PUSH32(esp, eax);
    MEM32(ebp + 0x3C) = 0x17;
    MEM32(ebp + 0x40) = 0x10;
    PUSH32(esp, 0); sub_004B67AA(); /* call 0x004B67AA */

loc_004B7107: ;
    if (TEST_S(eax, eax)) goto loc_004B7352; /* jl: less (signed <) */

loc_004B710F: ;
    eax = ebp + -8;
    PUSH32(esp, eax);
    PUSH32(esp, 0); sub_004B5A17(); /* call 0x004B5A17 */

loc_004B7118: ;
    eax = ebp + -124;
    PUSH32(esp, eax);
    eax = ebp + -8;
    PUSH32(esp, eax);
    eax = ebp + 0x3C;
    PUSH32(esp, eax);
    eax = ebp;
    PUSH32(esp, eax);
    PUSH32(esp, 0); sub_004B6C1E(); /* call 0x004B6C1E */

loc_004B712D: ;
    if (TEST_S(eax, eax)) goto loc_004B7352; /* jl: less (signed <) */

loc_004B7135: ;
    eax = ebp + -124;
    PUSH32(esp, eax);
    PUSH32(esp, MEM32(ebp + -44));
    eax = ebp + 0x50;
    PUSH32(esp, eax);
    eax = ebp;
    PUSH32(esp, eax);
    PUSH32(esp, 0); sub_004B5F3E(); /* call 0x004B5F3E */

loc_004B7149: ;
    if (TEST_S(eax, eax)) goto loc_004B7352; /* jl: less (signed <) */

loc_004B7151: ;
    ecx = ebp + -124;
    PUSH32(esp, ecx);
    ecx = ebp + 0x50;
    PUSH32(esp, ecx);
    eax = edi + 0xC;
    PUSH32(esp, eax);
    eax = ebp;
    PUSH32(esp, eax);
    PUSH32(esp, 0); sub_004B5D89(); /* call 0x004B5D89 */

loc_004B7166: ;
    if (TEST_S(eax, eax)) goto loc_004B7352; /* jl: less (signed <) */

loc_004B716E: ;
    eax = MEM32(ebx + 0x7C);
    if (TEST_Z(eax, eax)) goto loc_004B7192; /* je: equal / zero */

loc_004B7175: ;
    ecx = ebp + -124;
    PUSH32(esp, ecx);
    ecx = ebx + 0x80;
    PUSH32(esp, ecx);
    PUSH32(esp, eax);
    eax = ebp;
    PUSH32(esp, eax);
    PUSH32(esp, 0); sub_004B5EAF(); /* call 0x004B5EAF */

loc_004B718A: ;
    if (TEST_S(eax, eax)) goto loc_004B7352; /* jl: less (signed <) */

loc_004B7192: ;
    if (CMP_EQ(MEM32(ebp + -124), 0)) goto loc_004B719F; /* je: equal / zero */

loc_004B7198: ;
    MEM8(ebp + -136) = MEM8(ebp + -136) | 0x80;

loc_004B719F: ;
    PUSH32(esp, 0x10000);
    PUSH32(esp, 0); sub_004B59F7(); /* call 0x004B59F7 */

loc_004B71A9: ;
    PUSH32(esp, 0x20);
    MEM32(ebp + 0x48) = eax;
    POP32(esp, esi);
    eax = ebp + 0x48;
    MEM32(ebp + -112) = eax;
    PUSH32(esp, 4);
    eax = ebp + -44;
    PUSH32(esp, eax);
    MEM32(ebp + -116) = esi;
    PUSH32(esp, 0); sub_0048D66F(); /* call 0x0048D66F */

loc_004B71C3: ;
    PUSH32(esp, 0x652E30);
    PUSH32(esp, 0);
    eax = ebp + -74;
    PUSH32(esp, eax);
    PUSH32(esp, 0); sub_004B5923(); /* call 0x004B5923 */

loc_004B71D3: ;
    eax = edi + 0x24;
    if (CMP_EQ(MEM8(eax), 0)) goto loc_004B71FF; /* je: equal / zero */

loc_004B71DB: ;
    PUSH32(esp, eax);
    eax = edi + 0xC;
    PUSH32(esp, eax);
    PUSH32(esp, 0x8825EC);
    eax = ebp + -200;
    PUSH32(esp, 0x40);
    PUSH32(esp, eax);
    PUSH32(esp, 0); sub_004B4554(); /* call 0x004B4554 */

loc_004B71F3: ;
    esp = esp + 0x14;
    if (CMP_GE(eax & eax, 0)) goto loc_004B7216; /* jge: greater or equal (signed >=) */

loc_004B71FA: ;
    goto loc_004B72CF;

loc_004B71FF: ;
    PUSH32(esp, 0x40);
    eax = edi + 0xC;
    PUSH32(esp, eax);
    eax = ebp + -200;
    PUSH32(esp, eax);
    PUSH32(esp, 0); sub_0042DD7A(); /* call 0x0042DD7A */

loc_004B7211: ;
    goto loc_004B7216;

loc_004B7213: ;
    MEM8(eax) = 0x5F;

loc_004B7216: ;
    eax = ebp + -200;
    PUSH32(esp, esi);
    PUSH32(esp, eax);
    PUSH32(esp, 0); sub_0046F000(); /* call 0x0046F000 */

loc_004B7223: ;
    (void)0; /* test eax, eax - flags set for next jcc */
    POP32(esp, ecx);
    POP32(esp, ecx);
    if (TEST_NZ(eax, eax)) goto loc_004B7213; /* jne: not equal / not zero */

loc_004B7229: ;
    PUSH32(esp, eax);
    eax = ebp + -200;
    PUSH32(esp, eax);
    PUSH32(esp, 0xA);
    eax = ebp + -108;
    PUSH32(esp, eax);
    eax = ebp;
    PUSH32(esp, eax);
    PUSH32(esp, 0); sub_004B634C(); /* call 0x004B634C */

loc_004B7240: ;
    if (TEST_NZ(eax, eax)) goto loc_004B72CF; /* jne: not equal / not zero */

loc_004B7248: ;
    MEM8(ebp + -120) = MEM8(ebp + -120) | 0x80;
    (void)0; /* cmp MEM32(ebp + 0x6C), eax - flags set for next jcc */
    esi = 0x8825E0;
    if (CMP_NE(MEM32(ebp + 0x6C), eax)) goto loc_004B7259; /* jne: not equal / not zero */

loc_004B7256: ;
    esi = edi + 0x38;

loc_004B7259: ;
    PUSH32(esp, 0x18);
    PUSH32(esp, esi);
    eax = ebx + 0x108;
    PUSH32(esp, eax);
    PUSH32(esp, 0); sub_0042DD7A(); /* call 0x0042DD7A */

loc_004B7268: ;
    PUSH32(esp, esi);
    PUSH32(esp, 0x8825D8);
    PUSH32(esp, 2);
    eax = ebp + -96;
    PUSH32(esp, eax);
    eax = ebp;
    PUSH32(esp, eax);
    PUSH32(esp, 0); sub_004B634C(); /* call 0x004B634C */

loc_004B727D: ;
    if (TEST_NZ(eax, eax)) goto loc_004B72CF; /* jne: not equal / not zero */

loc_004B7281: ;
    esi = MEM32(ebp + 0x78);
    MEM8(ebp + -120) = MEM8(ebp + -120) | 0x40;
    eax = edi + 0x38;
    MEM32(ebp + -100) = eax;
    eax = MEM32(esi);
    MEM32(ebp + 0x5C) = eax;
    eax = MEM32(ebp + 0x74);
    MEM32(ebp + 0x60) = eax;
    eax = ebp + 0x60;
    PUSH32(esp, eax);
    eax = ebp + 0x5C;
    PUSH32(esp, eax);
    PUSH32(esp, 0x30);
    eax = ebp + -136;
    PUSH32(esp, eax);
    eax = ebp;
    PUSH32(esp, eax);
    MEM32(ebp + -132) = 5;
    MEM32(ebp + -128) = 0xA;
    MEM32(ebp + -40) = 0x652E28;
    PUSH32(esp, 0); sub_004B6134(); /* call 0x004B6134 */

loc_004B72CB: ;
    if (TEST_Z(eax, eax)) goto loc_004B72D6; /* je: equal / zero */

loc_004B72CF: ;
    eax = 0xC000009Au;
    goto loc_004B7352;

loc_004B72D6: ;
    eax = MEM32(ebp + 0x5C);
    MEM32(esi) = eax;
    eax = MEM32(ebx + 0xA8);
    ecx = 0; /* xor self */
    (void)0; /* test eax, eax - flags set for next jcc */
    MEM32(ebp + 0x78) = ecx;
    if (TEST_Z(eax, eax)) goto loc_004B7326; /* je: equal / zero */

loc_004B72EA: ;
    ecx = MEM32(eax);
    MEM32(ebx) = ecx;
    eax = MEM32(eax + 4);
    MEM32(ebx + 4) = eax;
    edi = 0; /* xor self */
    eax = ebx + 8;

loc_004B72F9: ;
    edx = MEM32(ebx + 0xA8);
    ecx = MEM32(edi + edx + 8);
    edx = MEM32(edi + edx + 0xC);
    esi = ecx;
    esi = esi | edx;
    if ((esi == 0)) goto loc_004B7318; /* je: equal / zero */

loc_004B730D: ;
    MEM32(ebp + 0x78) = MEM32(ebp + 0x78) + 1;
    MEM32(eax) = ecx;
    MEM32(eax + 4) = edx;
    eax = eax + 8;

loc_004B7318: ;
    edi = edi + 8;
    if (CMP_B(edi, 0x20)) goto loc_004B72F9; /* jb: below (unsigned <) */

loc_004B7320: ;
    edi = MEM32(ebp + 0x70);
    ecx = MEM32(ebp + 0x78);

loc_004B7326: ;
    if (CMP_NE(MEM32(ebp + 0x6C), 0)) goto loc_004B7339; /* jne: not equal / not zero */

loc_004B732C: ;
    eax = MEM32(edi);
    MEM32(ebx + ecx * 8 + 8) = eax;
    eax = MEM32(edi + 4);
    MEM32(ebx + ecx * 8 + 0xC) = eax;

loc_004B7339: ;
    eax = MEM32(ebx + 0x38);
    ecx = MEM32(ebp + -44);
    esi = MEM32(ebp + 0x4C);
    MEM32(ebx + eax * 4 + 0x3C) = ecx;
    MEM32(ebx + 0x38) = MEM32(ebx + 0x38) + 1;
    edi = ebx + 0x5C;
    MEM32(edi) = MEM32(esi); esi += 4; edi += 4; /* movsd */
    MEM32(edi) = MEM32(esi); esi += 4; edi += 4; /* movsd */
    MEM32(edi) = MEM32(esi); esi += 4; edi += 4; /* movsd */
    MEM32(edi) = MEM32(esi); esi += 4; edi += 4; /* movsd */
    eax = 0; /* xor self */

loc_004B7352: ;
    esp = ebp + -212;
    POP32(esp, edi);
    POP32(esp, esi);
    POP32(esp, ebx);
    ebp = ebp + 0x64;
    esp = ebp;
    POP32(esp, ebp); /* leave */
    esp += 24; return; /* ret 20 */

}

/**
 * sub_004B7362
 * Original: 0x004B7362 - 0x004B75D7 (629 bytes, 219 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_004B7362(void)
{
    uint32_t ebp;
    int _flags = 0; /* fallback flag var */

loc_004B7362: ;
    PUSH32(esp, ebp);
    ebp = esp;
    esp = esp - 0x60;
    PUSH32(esp, ebx);
    PUSH32(esp, esi);
    esi = 0; /* xor self */
    ebx = ecx;
    PUSH32(esp, edi);
    eax = 0x7D0;
    MEM32(ebp + -20) = ebx;
    MEM32(ebp + -4) = esi;
    MEM32(ebp + -8) = esi;
    MEM32(ebp + -12) = esi;
    MEM32(ebp + -16) = esi;
    PUSH32(esp, 0); sub_00470E50(); /* call 0x00470E50 */

loc_004B7388: ;
    edi = esp;
    eax = edi + 0x7D0;
    MEM32(ebp + -92) = eax;
    eax = 0; /* xor self */
    MEM32(ebp + -96) = edi;
    MEM32(ebp + -80) = esi;
    MEM32(ebp + -88) = edi;
    MEM32(ebp + -76) = esi;
    ecx = 0x1F4;
    { uint32_t _i; for (_i = 0; _i < ecx; _i++) MEM32(edi + _i*4) = eax; }
    edi += ecx * 4; ecx = 0; /* rep stosd */
    eax = ebp + -8;
    PUSH32(esp, eax);
    PUSH32(esp, 0x2B);
    PUSH32(esp, MEM32(ebp + 0xC));
    eax = ebp + -96;
    PUSH32(esp, MEM32(ebp + 8));
    MEM32(ebp + -84) = esi;
    PUSH32(esp, eax);
    MEM32(ebp + -40) = ebx;
    PUSH32(esp, 0); sub_004B62AE(); /* call 0x004B62AE */

loc_004B73C3: ;
    if (TEST_Z(eax, eax)) goto loc_004B74AA; /* je: equal / zero */

loc_004B73CB: ;
    eax = ebp + -16;
    PUSH32(esp, eax);
    PUSH32(esp, 5);
    PUSH32(esp, MEM32(ebp + 0xC));
    eax = ebp + -96;
    PUSH32(esp, MEM32(ebp + 8));
    PUSH32(esp, eax);
    PUSH32(esp, 0); sub_004B62AE(); /* call 0x004B62AE */

loc_004B73E0: ;
    if (TEST_NZ(eax, eax)) goto loc_004B75C3; /* jne: not equal / not zero */

loc_004B73E8: ;
    eax = MEM32(ebp + -16);
    ecx = MEM32(eax + 0x34);
    edx = MEM32(ebp + 0x10);
    edi = MEM32(edx + 0x38);
    MEM32(ebp + 8) = ecx;
    ecx = ecx | 0xAFFF0000u;
    (void)0; /* test MEM8(eax), 8 - flags set for next jcc */
    MEM32(ebp + -4) = ecx;
    esi = edi;
    if (TEST_Z(MEM8(eax), 8)) goto loc_004B7433; /* je: equal / zero */

loc_004B7407: ;
    if (CMP_NE(MEM32(eax + 0x50), 4)) goto loc_004B7433; /* jne: not equal / not zero */

loc_004B740D: ;
    ecx = MEM32(eax + 0x54);
    if (TEST_Z(ecx, ecx)) goto loc_004B7433; /* je: equal / zero */

loc_004B7414: ;
    esi = 0; /* xor self */
    if (CMP_BE(edi & edi, 0)) goto loc_004B7433; /* jbe: below or equal (unsigned <=) */

loc_004B741A: ;
    ebx = edx + 0x3C;
    MEM32(ebp + 0xC) = ebx;

loc_004B7420: ;
    ebx = MEM32(ebp + 0xC);
    ebx = MEM32(ebx);
    if (CMP_EQ(ebx, MEM32(ecx))) goto loc_004B7433; /* je: equal / zero */

loc_004B7429: ;
    MEM32(ebp + 0xC) = MEM32(ebp + 0xC) + 4;
    esi++;
    if (CMP_B(esi, MEM32(edx + 0x38))) goto loc_004B7420; /* jb: below (unsigned <) */

loc_004B7433: ;
    if (CMP_EQ(esi, edi)) goto loc_004B75C3; /* je: equal / zero */

loc_004B743B: ;
    if (TEST_Z(MEM8(eax), 4)) goto loc_004B746F; /* je: equal / zero */

loc_004B7440: ;
    ecx = MEM32(eax + 0x58);
    if (TEST_Z(ecx, ecx)) goto loc_004B746F; /* je: equal / zero */

loc_004B7447: ;
    if (CMP_EQ(MEM32(eax + 0x5C), 0)) goto loc_004B746F; /* je: equal / zero */

loc_004B744D: ;
    if (CMP_A(ecx, 0x28)) goto loc_004B746F; /* ja: above (unsigned >) */

loc_004B7452: ;
    MEM32(edx + 0x7C) = ecx;
    ecx = MEM32(eax + 0x58);
    esi = MEM32(eax + 0x5C);
    edi = edx + 0x80;
    edx = ecx;
    ecx = ecx >> 2;
    memcpy((void*)XBOX_PTR(edi), (void*)XBOX_PTR(esi), ecx * 4);
    esi += ecx * 4; edi += ecx * 4; ecx = 0; /* rep movsd */
    ecx = edx;
    ecx = ecx & 3;
    memcpy((void*)XBOX_PTR(edi), (void*)XBOX_PTR(esi), ecx);
    esi += ecx; edi += ecx; ecx = 0; /* rep movsb */

loc_004B746F: ;
    if (CMP_NE(MEM32(ebp + 8), 0x25)) goto loc_004B75CA; /* jne: not equal / not zero */

loc_004B7479: ;
    PUSH32(esp, MEM32(eax + 0x30));
    eax = eax + 0x20;
    PUSH32(esp, eax);
    eax = ebp + -32;
    PUSH32(esp, eax);
    PUSH32(esp, 0); sub_004B586F(); /* call 0x004B586F */

loc_004B7489: ;
    PUSH32(esp, MEM32(ebp + -28));
    PUSH32(esp, MEM32(ebp + -32));
    PUSH32(esp, 0); sub_004B5A61(); /* call 0x004B5A61 */

loc_004B7494: ;
    ecx = MEM32(ebp + -20);
    PUSH32(esp, 0); sub_0049CBC3(); /* call 0x0049CBC3 */

loc_004B749C: ;
    PUSH32(esp, 0);
    PUSH32(esp, 1);
    PUSH32(esp, 0); sub_0049CEB9(); /* call 0x0049CEB9 */

loc_004B74A5: ;
    goto loc_004B75CA;

loc_004B74AA: ;
    ebx = MEM32(ebp + 0x10);
    eax = ebx + 0x6C;
    MEM32(ebp + -28) = eax;
    eax = MEM32(ebp + -8);
    (void)0; /* test MEM8(eax), 0x80 - flags set for next jcc */
    MEM32(ebp + -36) = 0x17;
    MEM32(ebp + -32) = 0x10;
    if (TEST_Z(MEM8(eax), 0x80)) goto loc_004B753F; /* je: equal / zero */

loc_004B74C9: ;
    eax = MEM32(ebp + -76);
    ecx = MEM32(ebp + -88);
    MEM32(ebp + eax * 4 + -72) = ecx;
    eax = MEM32(ebp + -8);
    MEM32(ebp + -76) = MEM32(ebp + -76) + 1;
    PUSH32(esp, MEM32(eax + 0xC));
    PUSH32(esp, 0xCB);
    PUSH32(esp, 0); sub_004B584E(); /* call 0x004B584E */

loc_004B74E6: ;
    edi = eax;
    if (CMP_EQ(edi, esi)) goto loc_004B751D; /* je: equal / zero */

loc_004B74EC: ;
    ecx = MEM32(ebp + -20);
    PUSH32(esp, 0x2010);
    PUSH32(esp, 0x54);
    PUSH32(esp, 0); sub_004B53DA(); /* call 0x004B53DA */

loc_004B74FB: ;
    (void)0; /* cmp eax, esi - flags set for next jcc */
    MEM32(ebx + 0xAC) = eax;
    if (CMP_EQ(eax, esi)) goto loc_004B7572; /* je: equal / zero */

loc_004B7505: ;
    PUSH32(esp, ebx);
    eax = ebp + -36;
    PUSH32(esp, eax);
    PUSH32(esp, edi);
    eax = ebp + -96;
    PUSH32(esp, eax);
    PUSH32(esp, 0); sub_004B65D5(); /* call 0x004B65D5 */

loc_004B7514: ;
    if (CMP_EQ(eax, esi)) goto loc_004B751D; /* je: equal / zero */

loc_004B7518: ;
    MEM32(ebp + -4) = eax;
    goto loc_004B7579;

loc_004B751D: ;
    MEM32(ebp + -76) = MEM32(ebp + -76) - 1;
    eax = MEM32(ebp + -76);
    edi = MEM32(ebp + eax * 4 + -72);
    ecx = MEM32(ebp + -88);
    ecx = ecx - edi;
    edx = ecx;
    ecx = ecx >> 2;
    eax = 0; /* xor self */
    MEM32(ebp + -88) = edi;
    { uint32_t _i; for (_i = 0; _i < ecx; _i++) MEM32(edi + _i*4) = eax; }
    edi += ecx * 4; ecx = 0; /* rep stosd */
    ecx = edx;
    ecx = ecx & 3;
    memset((void*)XBOX_PTR(edi), (uint8_t)eax, ecx);
    edi += ecx; ecx = 0; /* rep stosb */

loc_004B753F: ;
    eax = MEM32(ebp + -76);
    ecx = MEM32(ebp + -88);
    MEM32(ebp + eax * 4 + -72) = ecx;
    MEM32(ebp + -76) = MEM32(ebp + -76) + 1;
    eax = ebp + -24;
    PUSH32(esp, eax);
    eax = MEM32(ebp + -8);
    edi = ebx + 0x164;
    PUSH32(esp, edi);
    PUSH32(esp, 0x1D);
    eax = eax + 0x1C;
    PUSH32(esp, eax);
    eax = ebp + -96;
    PUSH32(esp, eax);
    MEM32(edi) = esi;
    MEM32(ebp + -24) = esi;
    PUSH32(esp, 0); sub_004B6134(); /* call 0x004B6134 */

loc_004B756E: ;
    if (TEST_Z(eax, eax)) goto loc_004B759A; /* je: equal / zero */

loc_004B7572: ;
    MEM32(ebp + -4) = 0xC000009Au;

loc_004B7579: ;
    MEM32(ebp + -76) = MEM32(ebp + -76) - 1;
    eax = MEM32(ebp + -76);
    edi = MEM32(ebp + eax * 4 + -72);
    ecx = MEM32(ebp + -88);
    ecx = ecx - edi;
    edx = ecx;
    ecx = ecx >> 2;
    eax = 0; /* xor self */
    { uint32_t _i; for (_i = 0; _i < ecx; _i++) MEM32(edi + _i*4) = eax; }
    edi += ecx * 4; ecx = 0; /* rep stosd */
    ecx = edx;
    ecx = ecx & 3;
    memset((void*)XBOX_PTR(edi), (uint8_t)eax, ecx);
    edi += ecx; ecx = 0; /* rep stosb */
    goto loc_004B75CA;

loc_004B759A: ;
    ecx = MEM32(edi);
    if (CMP_BE(ecx, 0x400)) { sub_004B75D7(); return; } /* jbe: below or equal (unsigned <=) */

loc_004B75A4: ;
    MEM32(ebp + -76) = MEM32(ebp + -76) - 1;
    eax = MEM32(ebp + -76);
    edi = MEM32(ebp + eax * 4 + -72);
    ecx = MEM32(ebp + -88);
    ecx = ecx - edi;
    edx = ecx;
    ecx = ecx >> 2;
    eax = 0; /* xor self */
    { uint32_t _i; for (_i = 0; _i < ecx; _i++) MEM32(edi + _i*4) = eax; }
    edi += ecx * 4; ecx = 0; /* rep stosd */
    ecx = edx;
    ecx = ecx & 3;
    memset((void*)XBOX_PTR(edi), (uint8_t)eax, ecx);
    edi += ecx; ecx = 0; /* rep stosb */

loc_004B75C3: ;
    MEM32(ebp + -4) = 0xC000006Du;

loc_004B75CA: ;
    eax = MEM32(ebp + -4);
    esp = ebp + -108;
    POP32(esp, edi);
    POP32(esp, esi);
    POP32(esp, ebx);
    esp = ebp;
    POP32(esp, ebp); /* leave */
    esp += 16; return; /* ret 12 */

}

/**
 * sub_004B76E8
 * Original: 0x004B76E8 - 0x004B7A53 (875 bytes, 291 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_004B76E8(void)
{
    uint32_t ebp;
    int _flags = 0; /* fallback flag var */

loc_004B76E8: ;
    PUSH32(esp, ebp);
    ebp = esp;
    esp = esp - 0x5C;
    PUSH32(esp, ebx);
    PUSH32(esp, esi);
    ebx = 0; /* xor self */
    esi = ecx;
    PUSH32(esp, edi);
    eax = 0xBB8;
    MEM32(ebp + -20) = esi;
    MEM32(ebp + -4) = ebx;
    MEM32(ebp + -8) = ebx;
    MEM32(ebp + -12) = ebx;
    PUSH32(esp, 0); sub_00470E50(); /* call 0x00470E50 */

loc_004B770B: ;
    edi = esp;
    eax = edi + 0xBB8;
    MEM32(ebp + -88) = eax;
    eax = 0; /* xor self */
    MEM32(ebp + -92) = edi;
    MEM32(ebp + -76) = ebx;
    MEM32(ebp + -84) = edi;
    MEM32(ebp + -72) = ebx;
    ecx = 0x2EE;
    { uint32_t _i; for (_i = 0; _i < ecx; _i++) MEM32(edi + _i*4) = eax; }
    edi += ecx * 4; ecx = 0; /* rep stosd */
    eax = ebp + -8;
    PUSH32(esp, eax);
    PUSH32(esp, 0x2C);
    PUSH32(esp, MEM32(ebp + 0x10));
    eax = ebp + -92;
    PUSH32(esp, MEM32(ebp + 0xC));
    MEM32(ebp + -80) = ebx;
    PUSH32(esp, eax);
    MEM32(ebp + -36) = esi;
    PUSH32(esp, 0); sub_004B62AE(); /* call 0x004B62AE */

loc_004B7746: ;
    if (TEST_Z(eax, eax)) goto loc_004B77F7; /* je: equal / zero */

loc_004B774E: ;
    eax = ebp + 8;
    PUSH32(esp, eax);
    PUSH32(esp, 5);
    PUSH32(esp, MEM32(ebp + 0x10));
    eax = ebp + -92;
    PUSH32(esp, MEM32(ebp + 0xC));
    MEM32(ebp + 8) = ebx;
    PUSH32(esp, eax);
    PUSH32(esp, 0); sub_004B62AE(); /* call 0x004B62AE */

loc_004B7766: ;
    if (TEST_NZ(eax, eax)) goto loc_004B7A3F; /* jne: not equal / not zero */

loc_004B776E: ;
    eax = MEM32(ebp + 8);
    ecx = MEM32(eax + 0x34);
    ecx = ecx | 0xAFFF0000u;
    (void)0; /* test MEM8(eax), 8 - flags set for next jcc */
    MEM32(ebp + -4) = ecx;
    ecx = MEM32(ebp + 0x14);
    edi = MEM32(ecx + 0x74);
    MEM32(ebp + 0x10) = edi;
    edx = edi;
    if (TEST_Z(MEM8(eax), 8)) goto loc_004B77B4; /* je: equal / zero */

loc_004B778D: ;
    if (CMP_NE(MEM32(eax + 0x50), 4)) goto loc_004B77B4; /* jne: not equal / not zero */

loc_004B7793: ;
    esi = MEM32(eax + 0x54);
    if (CMP_EQ(esi, ebx)) goto loc_004B77B4; /* je: equal / zero */

loc_004B779A: ;
    edx = 0; /* xor self */
    if (CMP_BE(edi, ebx)) goto loc_004B77B4; /* jbe: below or equal (unsigned <=) */

loc_004B77A0: ;
    edi = ecx + 0x78;

loc_004B77A3: ;
    ebx = MEM32(edi);
    if (CMP_EQ(ebx, MEM32(esi))) goto loc_004B77B2; /* je: equal / zero */

loc_004B77A9: ;
    edx++;
    edi = edi + 4;
    if (CMP_B(edx, MEM32(ecx + 0x74))) goto loc_004B77A3; /* jb: below (unsigned <) */

loc_004B77B2: ;
    ebx = 0; /* xor self */

loc_004B77B4: ;
    if (CMP_EQ(edx, MEM32(ebp + 0x10))) goto loc_004B7A3F; /* je: equal / zero */

loc_004B77BD: ;
    if (CMP_NE(MEM32(eax + 0x34), 0x25)) goto loc_004B7A46; /* jne: not equal / not zero */

loc_004B77C7: ;
    PUSH32(esp, MEM32(eax + 0x30));
    eax = eax + 0x20;
    PUSH32(esp, eax);
    eax = ebp + -28;
    PUSH32(esp, eax);
    PUSH32(esp, 0); sub_004B586F(); /* call 0x004B586F */

loc_004B77D7: ;
    PUSH32(esp, MEM32(ebp + -24));
    PUSH32(esp, MEM32(ebp + -28));
    PUSH32(esp, 0); sub_004B5A61(); /* call 0x004B5A61 */

loc_004B77E2: ;
    ecx = MEM32(ebp + -20);
    PUSH32(esp, 0); sub_0049CBC3(); /* call 0x0049CBC3 */

loc_004B77EA: ;
    PUSH32(esp, ebx);
    PUSH32(esp, 1);
    PUSH32(esp, 0); sub_0049CEB9(); /* call 0x0049CEB9 */

loc_004B77F2: ;
    goto loc_004B7A46;

loc_004B77F7: ;
    eax = MEM32(ebp + 8);
    eax = eax + 0x140;
    MEM32(ebp + -24) = eax;
    eax = MEM32(ebp + -8);
    PUSH32(esp, MEM32(eax + 0xC));
    MEM32(ebp + -32) = 0x17;
    PUSH32(esp, 0xCA);
    MEM32(ebp + -28) = 0x10;
    PUSH32(esp, 0); sub_004B584E(); /* call 0x004B584E */

loc_004B7820: ;
    esi = eax;
    if (CMP_EQ(esi, ebx)) goto loc_004B7A3F; /* je: equal / zero */

loc_004B782A: ;
    eax = 0xE0;
    PUSH32(esp, 0); sub_00470E50(); /* call 0x00470E50 */

loc_004B7834: ;
    ebx = MEM32(ebp + 0x14);
    edi = esp;
    PUSH32(esp, edi);
    PUSH32(esp, ebx);
    eax = ebp + -32;
    PUSH32(esp, eax);
    PUSH32(esp, esi);
    eax = ebp + -92;
    PUSH32(esp, eax);
    PUSH32(esp, 0); sub_004B66BE(); /* call 0x004B66BE */

loc_004B7849: ;
    if (TEST_Z(eax, eax)) goto loc_004B7855; /* je: equal / zero */

loc_004B784D: ;
    MEM32(ebp + -4) = eax;
    goto loc_004B7A46;

loc_004B7855: ;
    eax = MEM32(edi);
    MEM32(ebx + 0xD8) = eax;
    if (CMP_L(MEM32(edi), 0)) goto loc_004B79B9; /* jl: less (signed <) */

loc_004B7866: ;
    eax = MEM32(edi + 0x48);
    PUSH32(esp, 0xC);
    MEM32(ebx + 0x1B8) = eax;
    eax = MEM32(ebx + 0x30);
    POP32(esp, ecx);
    if (CMP_A(eax, ecx)) goto loc_004B78E1; /* ja: above (unsigned >) */

loc_004B7879: ;
    MEM32(ebp + 0xC) = MEM32(ebp + 0xC) & 0;
    if (CMP_BE(eax & eax, 0)) goto loc_004B7991; /* jbe: below or equal (unsigned <=) */

loc_004B7885: ;
    eax = ebx + 0x230;
    MEM32(ebp + 0x10) = eax;
    ecx = ebx + 0x200;

loc_004B7894: ;
    eax = 0; /* xor self */
    if (CMP_BE(MEM32(ebx + 0x30), eax)) goto loc_004B78CA; /* jbe: below or equal (unsigned <=) */

loc_004B789B: ;
    esi = MEM32(ecx + -460);
    edx = edi + 0x50;

loc_004B78A4: ;
    if (CMP_EQ(esi, MEM32(edx))) goto loc_004B78B3; /* je: equal / zero */

loc_004B78A8: ;
    eax++;
    edx = edx + 0xC;
    if (CMP_B(eax, MEM32(ebx + 0x30))) goto loc_004B78A4; /* jb: below (unsigned <) */

loc_004B78B1: ;
    goto loc_004B78CA;

loc_004B78B3: ;
    edx = eax + eax * 2 + 0x15;
    edx = MEM32(edi + edx * 4);
    MEM32(ecx) = edx;
    edx = MEM32(ebp + 0x10);
    eax = eax + eax * 2;
    SET_LO16(eax, MEM16(edi + eax * 4 + 0x58));
    MEM16(edx) = LO16(eax);

loc_004B78CA: ;
    MEM32(ebp + 0xC) = MEM32(ebp + 0xC) + 1;
    eax = MEM32(ebp + 0xC);
    MEM32(ebp + 0x10) = MEM32(ebp + 0x10) + 2;
    ecx = ecx + 4;
    if (CMP_B(eax, MEM32(ebx + 0x30))) goto loc_004B7894; /* jb: below (unsigned <) */

loc_004B78DC: ;
    goto loc_004B7991;

loc_004B78E1: ;
    eax = ebx + 0x34;
    MEM32(ebp + 0xC) = eax;
    eax = ebx + 0x1C0;
    MEM32(ebp + 0x10) = eax;
    esi = ebx + 0x200;
    MEM32(ebp + 0x14) = ecx;

loc_004B78F9: ;
    eax = MEM32(ebp + 0xC);
    SET_LO8(edx, MEM8(eax));
    if (TEST_Z(LO8(edx), LO8(edx))) goto loc_004B7928; /* je: equal / zero */

loc_004B7902: ;
    eax = 0; /* xor self */
    ecx = edi + 0x50;

loc_004B7907: ;
    if (CMP_EQ(LO8(edx), MEM8(ecx))) goto loc_004B7916; /* je: equal / zero */

loc_004B790B: ;
    eax++;
    ecx = ecx + 8;
    if (CMP_B(eax, 0xC)) goto loc_004B7907; /* jb: below (unsigned <) */

loc_004B7914: ;
    goto loc_004B7928;

loc_004B7916: ;
    eax = edi + eax * 8;
    ecx = MEM32(eax + 0x54);
    MEM32(esi) = ecx;
    SET_LO16(eax, MEM16(eax + 0x52));
    ecx = MEM32(ebp + 0x10);
    MEM16(ecx) = LO16(eax);

loc_004B7928: ;
    MEM32(ebp + 0x10) = MEM32(ebp + 0x10) + 2;
    esi = esi + 4;
    MEM32(ebp + 0xC) = MEM32(ebp + 0xC) + 1;
    MEM32(ebp + 0x14) = MEM32(ebp + 0x14) - 1;
    if ((MEM32(ebp + 0x14) != 0)) goto loc_004B78F9; /* jne: not equal / not zero */

loc_004B7937: ;
    eax = ebx + 0x1D8;
    MEM32(ebp + 0x10) = eax;
    ecx = ebx + 0x54;
    MEM32(ebp + 0xC) = 4;

loc_004B794A: ;
    esi = MEM32(ecx);
    if (TEST_Z(esi, esi)) goto loc_004B7985; /* je: equal / zero */

loc_004B7950: ;
    eax = 0; /* xor self */
    edx = edi + 0xB0;

loc_004B7958: ;
    if (CMP_EQ(esi, MEM32(edx))) goto loc_004B7967; /* je: equal / zero */

loc_004B795C: ;
    eax++;
    edx = edx + 0xC;
    if (CMP_B(eax, 4)) goto loc_004B7958; /* jb: below (unsigned <) */

loc_004B7965: ;
    goto loc_004B7985;

loc_004B7967: ;
    edx = eax + eax * 2 + 0x2D;
    edx = MEM32(edi + edx * 4);
    MEM32(ecx + 0x1DC) = edx;
    edx = MEM32(ebp + 0x10);
    eax = eax + eax * 2;
    SET_LO16(eax, MEM16(edi + eax * 4 + 0xB8));
    MEM16(edx) = LO16(eax);

loc_004B7985: ;
    MEM32(ebp + 0x10) = MEM32(ebp + 0x10) + 2;
    ecx = ecx + 4;
    MEM32(ebp + 0xC) = MEM32(ebp + 0xC) - 1;
    if ((MEM32(ebp + 0xC) != 0)) goto loc_004B794A; /* jne: not equal / not zero */

loc_004B7991: ;
    PUSH32(esp, 4);
    ecx = ebx + 0x1E0;
    eax = edi + 4;
    POP32(esp, edx);

loc_004B799D: ;
    esi = MEM32(eax + 0x10);
    MEM32(ecx + 0x10) = esi;
    esi = MEM32(eax);
    MEM32(ecx) = esi;
    eax = eax + 4;
    ecx = ecx + 4;
    edx--;
    if ((edx != 0)) goto loc_004B799D; /* jne: not equal / not zero */

loc_004B79B0: ;
    eax = MEM32(edi + 0x24);
    MEM32(ebx + 0x1BC) = eax;

loc_004B79B9: ;
    eax = MEM32(ebp + -72);
    ecx = MEM32(ebp + -84);
    MEM32(ebp + eax * 4 + -68) = ecx;
    MEM32(ebp + -72) = MEM32(ebp + -72) + 1;
    MEM32(ebp + -16) = MEM32(ebp + -16) & 0;
    eax = ebp + -16;
    PUSH32(esp, eax);
    eax = MEM32(ebp + -8);
    edi = ebx + 0x2DC;
    MEM32(edi) = MEM32(edi) & 0;
    PUSH32(esp, edi);
    PUSH32(esp, 0x1D);
    eax = eax + 0x1C;
    PUSH32(esp, eax);
    eax = ebp + -92;
    PUSH32(esp, eax);
    PUSH32(esp, 0); sub_004B6134(); /* call 0x004B6134 */

loc_004B79EA: ;
    if (TEST_Z(eax, eax)) goto loc_004B7A16; /* je: equal / zero */

loc_004B79EE: ;
    MEM32(ebp + -72) = MEM32(ebp + -72) - 1;
    eax = MEM32(ebp + -72);
    edi = MEM32(ebp + eax * 4 + -68);
    ecx = MEM32(ebp + -84);
    ecx = ecx - edi;
    edx = ecx;
    ecx = ecx >> 2;
    eax = 0; /* xor self */
    { uint32_t _i; for (_i = 0; _i < ecx; _i++) MEM32(edi + _i*4) = eax; }
    edi += ecx * 4; ecx = 0; /* rep stosd */
    ecx = edx;
    ecx = ecx & 3;
    MEM32(ebp + -4) = 0xC000009Au;
    memset((void*)XBOX_PTR(edi), (uint8_t)eax, ecx);
    edi += ecx; ecx = 0; /* rep stosb */
    goto loc_004B7A46;

loc_004B7A16: ;
    ecx = MEM32(edi);
    if (CMP_BE(ecx, 0x400)) { sub_004B7A53(); return; } /* jbe: below or equal (unsigned <=) */

loc_004B7A20: ;
    MEM32(ebp + -72) = MEM32(ebp + -72) - 1;
    eax = MEM32(ebp + -72);
    edi = MEM32(ebp + eax * 4 + -68);
    ecx = MEM32(ebp + -84);
    ecx = ecx - edi;
    edx = ecx;
    ecx = ecx >> 2;
    eax = 0; /* xor self */
    { uint32_t _i; for (_i = 0; _i < ecx; _i++) MEM32(edi + _i*4) = eax; }
    edi += ecx * 4; ecx = 0; /* rep stosd */
    ecx = edx;
    ecx = ecx & 3;
    memset((void*)XBOX_PTR(edi), (uint8_t)eax, ecx);
    edi += ecx; ecx = 0; /* rep stosb */

loc_004B7A3F: ;
    MEM32(ebp + -4) = 0xC000006Du;

loc_004B7A46: ;
    eax = MEM32(ebp + -4);
    esp = ebp + -104;
    POP32(esp, edi);
    POP32(esp, esi);
    POP32(esp, ebx);
    esp = ebp;
    POP32(esp, ebp); /* leave */
    esp += 20; return; /* ret 16 */

}

/**
 * sub_004B7B64
 * Original: 0x004B7B64 - 0x004B7C4B (231 bytes, 92 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_004B7B64(void)
{
    uint32_t ebp;
    int _flags = 0; /* fallback flag var */

loc_004B7B64: ;
    PUSH32(esp, ebp);
    ebp = esp;
    esp = esp - 0x48;
    PUSH32(esp, ebx);
    ebx = MEM32(ebp + 8);
    PUSH32(esp, esi);
    esi = MEM32(ebp + 0x2C);
    MEM32(esi + 0x10) = MEM32(esi + 0x10) & 0;
    PUSH32(esp, edi);
    PUSH32(esp, 0x12);
    POP32(esp, ecx);
    eax = 0; /* xor self */
    edi = ebp + -72;
    { uint32_t _i; for (_i = 0; _i < ecx; _i++) MEM32(edi + _i*4) = eax; }
    edi += ecx * 4; ecx = 0; /* rep stosd */
    eax = MEM32(ebp + 0x20);
    MEM32(ebp + -64) = eax;
    eax = ebp + -60;
    PUSH32(esp, eax);
    PUSH32(esp, MEM32(ebp + 0x1C));
    MEM32(ebp + -68) = 5;
    PUSH32(esp, ebx);
    PUSH32(esp, 0); sub_004B63B8(); /* call 0x004B63B8 */

loc_004B7B9B: ;
    if (TEST_NZ(eax, eax)) goto loc_004B7C44; /* jne: not equal / not zero */

loc_004B7BA3: ;
    PUSH32(esp, MEM32(ebp + 0x18));
    eax = ebp + -40;
    PUSH32(esp, eax);
    eax = ebp + -36;
    PUSH32(esp, eax);
    PUSH32(esp, 0); sub_004B5923(); /* call 0x004B5923 */

loc_004B7BB3: ;
    MEM8(ebp + -72) = MEM8(ebp + -72) | 0x20;
    (void)0; /* cmp MEM32(ebp + 0x24), 0 - flags set for next jcc */
    eax = MEM32(ebp + 0x14);
    MEM32(ebp + -8) = eax;
    if (CMP_EQ(MEM32(ebp + 0x24), 0)) goto loc_004B7BD3; /* je: equal / zero */

loc_004B7BC3: ;
    esi = MEM32(ebp + 0x24);
    edi = ebp + -52;
    MEM32(edi) = MEM32(esi); esi += 4; edi += 4; /* movsd */
    MEM32(edi) = MEM32(esi); esi += 4; edi += 4; /* movsd */
    MEM32(edi) = MEM32(esi); esi += 4; edi += 4; /* movsd */
    MEM8(ebp + -72) = MEM8(ebp + -72) | 0x80;
    esi = MEM32(ebp + 0x2C);

loc_004B7BD3: ;
    eax = ebp + 0x20;
    PUSH32(esp, eax);
    eax = ebp + 0x24;
    PUSH32(esp, eax);
    PUSH32(esp, 0x1F);
    eax = ebp + -72;
    PUSH32(esp, eax);
    edi = 0; /* xor self */
    PUSH32(esp, ebx);
    MEM32(ebp + 0x24) = edi;
    MEM32(ebp + 0x20) = edi;
    PUSH32(esp, 0); sub_004B6134(); /* call 0x004B6134 */

loc_004B7BEF: ;
    if (CMP_NE(eax, edi)) goto loc_004B7C44; /* jne: not equal / not zero */

loc_004B7BF3: ;
    edx = MEM32(ebp + 0x24);
    ecx = edx + 0x18;
    MEM32(esi + 0xC) = ecx;
    eax = MEM32(ebx + 8);
    ecx = ecx + 3;
    ecx = ecx & 0xFFFFFFFCu;
    ecx = ecx + eax;
    (void)0; /* cmp ecx, MEM32(ebx + 4) - flags set for next jcc */
    MEM32(ebx + 8) = ecx;
    if (CMP_BE(ecx, MEM32(ebx + 4))) goto loc_004B7C14; /* jbe: below or equal (unsigned <=) */

loc_004B7C0F: ;
    MEM32(ebx + 8) = eax;
    eax = 0; /* xor self */

loc_004B7C14: ;
    (void)0; /* test eax, eax - flags set for next jcc */
    MEM32(esi + 0x10) = eax;
    if (TEST_NZ(eax, eax)) goto loc_004B7C1E; /* jne: not equal / not zero */

loc_004B7C1B: ;
    PUSH32(esp, 0x3C);
    POP32(esp, edi);

loc_004B7C1E: ;
    (void)0; /* test edi, edi - flags set for next jcc */
    eax = edi;
    if (TEST_NZ(edi, edi)) goto loc_004B7C44; /* jne: not equal / not zero */

loc_004B7C24: ;
    (void)0; /* cmp MEM8(ebp + 0x28), 0 - flags set for next jcc */
    PUSH32(esp, MEM32(ebp + 0xC));
    SET_LO8(eax, (CMP_EQ(MEM8(ebp + 0x28), 0)) ? 1 : 0); /* sete */
    eax = eax * 4 + 7;
    PUSH32(esp, eax);
    PUSH32(esp, MEM32(ebp + 0x10));
    PUSH32(esp, MEM32(ebp + 0x20));
    PUSH32(esp, edx);
    PUSH32(esp, esi);
    PUSH32(esp, ebx);
    PUSH32(esp, 0); sub_004B6BDF(); /* call 0x004B6BDF */

loc_004B7C44: ;
    POP32(esp, edi);
    POP32(esp, esi);
    POP32(esp, ebx);
    esp = ebp;
    POP32(esp, ebp); /* leave */
    esp += 44; return; /* ret 40 */

}

/**
 * sub_004B7C4B
 * Original: 0x004B7C4B - 0x004B7D1B (208 bytes, 77 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_004B7C4B(void)
{
    uint32_t ebp;
    int _flags = 0; /* fallback flag var */

loc_004B7C4B: ;
    PUSH32(esp, ebp);
    ebp = esp;
    esp = esp - 0x68;
    ecx = MEM32(ebp + 0x34);
    eax = 0; /* xor self */
    (void)0; /* cmp MEM32(ecx), eax - flags set for next jcc */
    PUSH32(esp, ebx);
    PUSH32(esp, esi);
    SET_LO8(eax, (CMP_EQ(MEM32(ecx), eax)) ? 1 : 0); /* sete */
    PUSH32(esp, edi);
    PUSH32(esp, 0x14);
    POP32(esp, ecx);
    PUSH32(esp, MEM32(ebp + 0x24));
    edi = ebp + -104;
    MEM32(ebp + -8) = eax;
    eax = 0; /* xor self */
    { uint32_t _i; for (_i = 0; _i < ecx; _i++) MEM32(edi + _i*4) = eax; }
    edi += ecx * 4; ecx = 0; /* rep stosd */
    MEM32(ebp + -104) = 5;
    MEM32(ebp + -100) = 0xE;
    PUSH32(esp, 0); sub_004B59F7(); /* call 0x004B59F7 */

loc_004B7C81: ;
    ebx = MEM32(ebp + 8);
    esi = MEM32(ebp + 0x20);
    PUSH32(esp, 0xB);
    POP32(esp, ecx);
    MEM32(ebp + -4) = eax;
    MEM32(ebp + -20) = MEM32(ebp + -20) & 0;
    MEM32(ebp + -96) = 0x20;
    eax = ebp + -4;
    MEM32(ebp + -92) = eax;
    edi = ebp + -88;
    memcpy((void*)XBOX_PTR(edi), (void*)XBOX_PTR(esi), ecx * 4);
    esi += ecx * 4; edi += ecx * 4; ecx = 0; /* rep movsd */
    eax = MEM32(ebx + 0x14);
    ecx = MEM32(ebx + 8);
    MEM32(ebx + eax * 4 + 0x18) = ecx;
    MEM32(ebx + 0x14) = MEM32(ebx + 0x14) + 1;
    eax = ebp + -44;
    PUSH32(esp, eax);
    PUSH32(esp, MEM32(ebp + 0x2C));
    eax = MEM32(ebp + 0x14);
    PUSH32(esp, MEM32(ebp + 0x28));
    PUSH32(esp, MEM32(ebp + 0x10));
    PUSH32(esp, MEM32(ebp + 0xC));
    PUSH32(esp, MEM32(ebp + 0x1C));
    PUSH32(esp, MEM32(ebp + 0x18));
    PUSH32(esp, MEM32(eax));
    PUSH32(esp, eax);
    PUSH32(esp, ebx);
    PUSH32(esp, 0); sub_004B7B64(); /* call 0x004B7B64 */

loc_004B7CD2: ;
    (void)0; /* test eax, eax - flags set for next jcc */
    MEM32(ebp + 0x24) = eax;
    if (TEST_NZ(eax, eax)) goto loc_004B7CF4; /* jne: not equal / not zero */

loc_004B7CD9: ;
    edi = MEM32(ebp + 0x34);
    esi = MEM32(ebp + 0x30);
    PUSH32(esp, edi);
    PUSH32(esp, esi);
    PUSH32(esp, 0x20);
    eax = ebp + -104;
    PUSH32(esp, eax);
    PUSH32(esp, ebx);
    PUSH32(esp, 0); sub_004B6134(); /* call 0x004B6134 */

loc_004B7CED: ;
    (void)0; /* test eax, eax - flags set for next jcc */
    MEM32(ebp + 0x24) = eax;
    if (TEST_Z(eax, eax)) { sub_004B7D1B(); return; } /* je: equal / zero */

loc_004B7CF4: ;
    ecx = MEM32(ebx + 8);
    MEM32(ebx + 0x14) = MEM32(ebx + 0x14) - 1;
    eax = MEM32(ebx + 0x14);
    edi = MEM32(ebx + eax * 4 + 0x18);
    ecx = ecx - edi;
    edx = ecx;
    ecx = ecx >> 2;
    eax = 0; /* xor self */
    MEM32(ebx + 8) = edi;
    { uint32_t _i; for (_i = 0; _i < ecx; _i++) MEM32(edi + _i*4) = eax; }
    edi += ecx * 4; ecx = 0; /* rep stosd */
    ecx = edx;
    ecx = ecx & 3;
    memset((void*)XBOX_PTR(edi), (uint8_t)eax, ecx);
    edi += ecx; ecx = 0; /* rep stosb */
    g_seh_ebp = ebp; sub_004B7DC0(); return; /* tail jmp 0x004B7DC0 */

}

/**
 * sub_004B7DCD
 * Original: 0x004B7DCD - 0x004B7E90 (195 bytes, 73 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_004B7DCD(void)
{
    uint32_t ebp;
    int _flags = 0; /* fallback flag var */
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_004B7DCD: ;
    PUSH32(esp, ebp);
    ebp = esp + -104;
    esp = esp - 0x104;
    PUSH32(esp, ebx);
    PUSH32(esp, esi);
    ebx = 0; /* xor self */
    PUSH32(esp, edi);
    eax = 0xBB8;
    esi = ecx;
    MEM32(ebp + 0x28) = ebx;
    PUSH32(esp, 0); sub_00470E50(); /* call 0x00470E50 */

loc_004B7DEC: ;
    eax = MEM32(ebp + 0x78);
    edx = MEM32(eax);
    edi = esp;
    eax = edi + 0xBB8;
    MEM32(ebp + 0x30) = eax;
    eax = 0; /* xor self */
    ecx = 0x2EE;
    MEM32(ebp + 0x2C) = edi;
    MEM32(ebp + 0x3C) = ebx;
    MEM32(ebp + 0x34) = edi;
    MEM32(ebp + 0x40) = ebx;
    { uint32_t _i; for (_i = 0; _i < ecx; _i++) MEM32(edi + _i*4) = eax; }
    edi += ecx * 4; ecx = 0; /* rep stosd */
    eax = MEM32(ebp + 0x74);
    (void)0; /* cmp eax, ebx - flags set for next jcc */
    MEM32(ebp + 0x38) = eax;
    if (CMP_EQ(eax, ebx)) goto loc_004B7E1E; /* je: equal / zero */

loc_004B7E1B: ;
    MEM32(ebp + 0x3C) = edx;

loc_004B7E1E: ;
    eax = 0; /* xor self */
    ebx = MEM32(ebp + 0x7C);
    edi = ebp + 0x10;
    MEM32(edi) = eax; edi += 4; /* stosd */
    MEM32(edi) = eax; edi += 4; /* stosd */
    MEM32(edi) = eax; edi += 4; /* stosd */
    MEM32(edi) = eax; edi += 4; /* stosd */
    eax = 0; /* xor self */
    edi = ebp + -12;
    MEM32(edi) = eax; edi += 4; /* stosd */
    MEM32(edi) = eax; edi += 4; /* stosd */
    PUSH32(esp, 0x20);
    MEM32(edi) = eax; edi += 4; /* stosd */
    POP32(esp, ecx);
    MEM32(ebp + 0x64) = esi;
    esi = MEM32(ebp + 0x70);
    PUSH32(esp, 6);
    eax = 0; /* xor self */
    edi = ebp + -140;
    { uint32_t _i; for (_i = 0; _i < ecx; _i++) MEM32(edi + _i*4) = eax; }
    edi += ecx * 4; ecx = 0; /* rep stosd */
    POP32(esp, ecx);
    esi = esi + 0x108;
    edi = ebx + 0x2A0;
    memcpy((void*)XBOX_PTR(edi), (void*)XBOX_PTR(esi), ecx * 4);
    esi += ecx * 4; edi += ecx * 4; ecx = 0; /* rep movsd */
    esi = 0x652E30;
    PUSH32(esp, esi);
    edi = 0; /* xor self */
    PUSH32(esp, edi);
    eax = ebp + -78;
    PUSH32(esp, eax);
    PUSH32(esp, 0); sub_004B5923(); /* call 0x004B5923 */

loc_004B7E68: ;
    PUSH32(esp, esi);
    PUSH32(esp, edi);
    eax = ebp + -64;
    PUSH32(esp, eax);
    PUSH32(esp, 0); sub_004B5923(); /* call 0x004B5923 */

loc_004B7E73: ;
    PUSH32(esp, 4);
    eax = ebp + -48;
    PUSH32(esp, eax);
    PUSH32(esp, 0); sub_0048D66F(); /* call 0x0048D66F */

loc_004B7E7E: ;
    (void)0; /* cmp MEM32(ebx + 0x30), 0xC - flags set for next jcc */
    MEM32(ebp + -44) = 0x652E28;
    if (CMP_A(MEM32(ebx + 0x30), 0xC)) { sub_004B7E90(); return; } /* ja: above (unsigned >) */

loc_004B7E8B: ;
    eax = MEM32(ebx + 0x34);
    g_seh_ebp = ebp; sub_004B7E9D(); return; /* tail jmp 0x004B7E9D */

}

/**
 * sub_004B813D
 * Original: 0x004B813D - 0x004B823C (255 bytes, 86 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_004B813D(void)
{
    uint32_t ebp;
    int _flags = 0; /* fallback flag var */

loc_004B813D: ;
    PUSH32(esp, ebp);
    ebp = esp;
    esp = esp - 0x64;
    PUSH32(esp, ebx);
    PUSH32(esp, esi);
    esi = 0; /* xor self */
    PUSH32(esp, edi);
    eax = 0x7D0;
    MEM32(ebp + -12) = ecx;
    MEM32(ebp + -4) = esi;
    MEM32(ebp + -8) = esi;
    PUSH32(esp, 0); sub_00470E50(); /* call 0x00470E50 */

loc_004B815B: ;
    eax = MEM32(ebp + 0x1C);
    edx = MEM32(eax);
    ebx = MEM32(ebp + 0x18);
    edi = esp;
    eax = edi + 0x7D0;
    MEM32(ebp + -96) = eax;
    eax = 0; /* xor self */
    (void)0; /* cmp ebx, esi - flags set for next jcc */
    ecx = 0x1F4;
    MEM32(ebp + -100) = edi;
    MEM32(ebp + -84) = esi;
    MEM32(ebp + -92) = edi;
    MEM32(ebp + -80) = esi;
    { uint32_t _i; for (_i = 0; _i < ecx; _i++) MEM32(edi + _i*4) = eax; }
    edi += ecx * 4; ecx = 0; /* rep stosd */
    MEM32(ebp + -88) = ebx;
    if (CMP_EQ(ebx, esi)) goto loc_004B818D; /* je: equal / zero */

loc_004B818A: ;
    MEM32(ebp + -84) = edx;

loc_004B818D: ;
    eax = MEM32(ebp + -12);
    PUSH32(esp, MEM32(ebp + 0xC));
    MEM32(ebp + -44) = eax;
    PUSH32(esp, 0); sub_004B5A17(); /* call 0x004B5A17 */

loc_004B819B: ;
    esi = MEM32(ebp + 8);
    eax = esi + 0x2B8;
    MEM32(ebp + -32) = eax;
    eax = ebp + -8;
    PUSH32(esp, eax);
    PUSH32(esp, 0x1D);
    PUSH32(esp, MEM32(esi + 0x2DC));
    eax = esi + 0x2E0;
    PUSH32(esp, eax);
    eax = ebp + -100;
    PUSH32(esp, eax);
    MEM32(ebp + -40) = 0x17;
    MEM32(ebp + -36) = 0x10;
    PUSH32(esp, 0); sub_004B62AE(); /* call 0x004B62AE */

loc_004B81D1: ;
    if (TEST_NZ(eax, eax)) goto loc_004B8233; /* jne: not equal / not zero */

loc_004B81D5: ;
    edi = ebp + -28;
    MEM32(edi) = eax; edi += 4; /* stosd */
    MEM32(edi) = eax; edi += 4; /* stosd */
    MEM32(edi) = eax; edi += 4; /* stosd */
    eax = MEM32(ebp + 0x10);
    edi = MEM32(ebp + 0x1C);
    MEM32(ebp + -20) = eax;
    eax = MEM32(ebp + 0x14);
    MEM32(ebp + -24) = eax;
    eax = MEM32(edi);
    MEM32(ebp + 0x1C) = eax;
    eax = ebp + -16;
    PUSH32(esp, eax);
    eax = ebp + 0x1C;
    PUSH32(esp, eax);
    PUSH32(esp, 0);
    eax = ebp + -28;
    PUSH32(esp, eax);
    PUSH32(esp, 0x20000000);
    PUSH32(esp, MEM32(ebp + -8));
    eax = ebp + -40;
    PUSH32(esp, MEM32(ebp + 0xC));
    MEM32(ebp + -28) = 0xFFFFFF7Du;
    PUSH32(esp, 0);
    PUSH32(esp, eax);
    eax = esi + 0x288;
    PUSH32(esp, eax);
    esi = esi + 0x248;
    PUSH32(esp, esi);
    eax = ebp + -100;
    PUSH32(esp, eax);
    MEM32(ebp + -16) = ebx;
    PUSH32(esp, 0); sub_004B7C4B(); /* call 0x004B7C4B */

loc_004B822F: ;
    if (TEST_Z(eax, eax)) { sub_004B823C(); return; } /* je: equal / zero */

loc_004B8233: ;
    MEM32(ebp + -4) = 0xC000009Au;
    g_seh_ebp = ebp; sub_004B8241(); return; /* tail jmp 0x004B8241 */

}

/**
 * sub_004B824E
 * Original: 0x004B824E - 0x004B826D (31 bytes, 10 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_004B824E(void)
{
    int _cf = 0; /* carry flag */

loc_004B824E: ;
    eax = MEM32(esp + 4);
    ecx = 0; /* xor self */
    PUSH32(esp, 0);
    eax = eax + 0xF422C080u;
    PUSH32(esp, 0x989680);
    ecx = ecx + 2 + _cf; /* adc */
    PUSH32(esp, ecx);
    PUSH32(esp, eax);
    PUSH32(esp, 0); sub_00470A00(); /* call 0x00470A00 */

loc_004B826A: ;
    esp += 8; return; /* ret 4 */

}

/**
 * sub_004B826D
 * Original: 0x004B826D - 0x004B82F2 (133 bytes, 47 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_004B826D(void)
{
    int _flags = 0; /* fallback flag var */

loc_004B826D: ;
    PUSH32(esp, esi);
    esi = MEM32(esp + 0xC);
    PUSH32(esp, edi);
    eax = 0; /* xor self */
    PUSH32(esp, 0x10);
    POP32(esp, ecx);
    edi = esi;
    { uint32_t _i; for (_i = 0; _i < ecx; _i++) MEM32(edi + _i*4) = eax; }
    edi += ecx * 4; ecx = 0; /* rep stosd */
    edi = MEM32(esp + 0xC);
    eax = MEM32(edi);
    MEM32(esi) = eax;
    eax = MEM32(edi + 4);
    MEM32(esi + 4) = eax;
    SET_LO8(eax, MEM8(edi + 0x24));
    MEM8(esi + 0xC) = LO8(eax);
    eax = MEM32(edi + 8);
    MEM32(esi + 0x10) = eax;
    eax = MEM32(edi + 0xC);
    MEM32(esi + 0x14) = eax;
    PUSH32(esp, MEM32(edi + 0x10));
    PUSH32(esp, 0); sub_004B824E(); /* call 0x004B824E */

loc_004B82A4: ;
    (void)0; /* cmp MEM32(esp + 0x14), 0 - flags set for next jcc */
    MEM32(esi + 0x18) = eax;
    MEM32(esi + 0x1C) = edx;
    eax = MEM32(edi + 0x14);
    MEM32(esi + 0x20) = eax;
    eax = MEM32(edi + 0x18);
    MEM32(esi + 0x24) = eax;
    if (CMP_EQ(MEM32(esp + 0x14), 0)) goto loc_004B82C5; /* je: equal / zero */

loc_004B82BD: ;
    eax = eax | 0x100;
    MEM32(esi + 0x24) = eax;

loc_004B82C5: ;
    eax = MEM32(edi + 0x1C);
    MEM32(esi + 0x28) = eax;
    SET_LO16(eax, MEM16(edi + 0x20));
    MEM16(esi + 0x2C) = LO16(eax);
    SET_LO16(eax, MEM16(edi + 0x22));
    PUSH32(esp, 0xF);
    MEM16(esi + 0x2E) = LO16(eax);
    edi = edi + 0x25;
    PUSH32(esp, edi);
    esi = esi + 0x30;
    PUSH32(esp, esi);
    PUSH32(esp, 0); sub_0046EEC0(); /* call 0x0046EEC0 */

loc_004B82EA: ;
    esp = esp + 0xC;
    POP32(esp, edi);
    POP32(esp, esi);
    esp += 16; return; /* ret 12 */

}

/**
 * sub_004B82F2
 * Original: 0x004B82F2 - 0x004B8339 (71 bytes, 22 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_004B82F2(void)
{
    int _flags = 0; /* fallback flag var */
    int _cf = 0; /* carry flag */

loc_004B82F2: ;
    PUSH32(esp, esi);
    esi = MEM32(esp + 0xC);
    PUSH32(esp, esi);
    PUSH32(esp, 0); sub_0042B5F7(); /* call 0x0042B5F7 */

loc_004B82FD: ;
    if (CMP_NE(MEM16(esp + 8), 0)) goto loc_004B830D; /* jne: not equal / not zero */

loc_004B8305: ;
    MEM32(esp + 8) = 0xA8C0;

loc_004B830D: ;
    eax = ZX16(MEM16(esp + 8));
    PUSH32(esp, 0);
    edx = ((int32_t)eax < 0) ? 0xFFFFFFFF : 0; /* cdq */
    PUSH32(esp, 0x23C34600);
    PUSH32(esp, edx);
    PUSH32(esp, eax);
    PUSH32(esp, 0); sub_00470A00(); /* call 0x00470A00 */

loc_004B8321: ;
    MEM32(esi) = MEM32(esi) + eax;
    eax = MEM32(0x652EA0);
    MEM32(esi + 4) = MEM32(esi + 4) + edx + _cf; /* adc */
    MEM32(esi) = MEM32(esi) + eax;
    eax = MEM32(0x652EA4);
    MEM32(esi + 4) = MEM32(esi + 4) + eax + _cf; /* adc */
    POP32(esp, esi);
    esp += 12; return; /* ret 8 */

}

/**
 * sub_004B8339
 * Original: 0x004B8339 - 0x004B8388 (79 bytes, 38 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_004B8339(void)
{
    uint32_t ebp;
    int _flags = 0; /* fallback flag var */
    int _cf = 0; /* carry flag */

loc_004B8339: ;
    PUSH32(esp, ebp);
    ebp = esp;
    PUSH32(esp, ecx);
    PUSH32(esp, ecx);
    PUSH32(esp, ebx);
    PUSH32(esp, esi);
    esi = MEM32(ebp + 8);
    PUSH32(esp, edi);
    PUSH32(esp, MEM32(esi + 0x10));
    PUSH32(esp, 0); sub_004B824E(); /* call 0x004B824E */

loc_004B834C: ;
    edi = eax;
    eax = ZX16(MEM16(esi + 0x20));
    PUSH32(esp, 0);
    ebx = edx;
    edx = ((int32_t)eax < 0) ? 0xFFFFFFFF : 0; /* cdq */
    PUSH32(esp, 0x23C34600);
    PUSH32(esp, edx);
    PUSH32(esp, eax);
    PUSH32(esp, 0); sub_00470A00(); /* call 0x00470A00 */

loc_004B8363: ;
    ecx = MEM32(ebp + 0xC);
    esi = eax;
    eax = MEM32(ecx);
    ecx = MEM32(ecx + 4);
    eax = eax - esi;
    ecx = ecx - edx - _cf; /* sbb */
    eax = eax - edi;
    POP32(esp, edi);
    ecx = ecx - ebx - _cf; /* sbb */
    POP32(esp, esi);
    MEM32(ebp + -4) = ecx;
    POP32(esp, ebx);
    if (((int32_t)ecx < 0)) { sub_004B8388(); return; } /* js: sign (negative) */

loc_004B837D: ;
    if (_flags /* jg: greater (signed >) */) goto loc_004B8383;

loc_004B837F: ;
    if (CMP_BE(eax & eax, 0)) { sub_004B8388(); return; } /* jbe: below or equal (unsigned <=) */

loc_004B8383: ;
    eax = 0; /* xor self */
    eax++;
    g_seh_ebp = ebp; sub_004B838A(); return; /* tail jmp 0x004B838A */

}

/**
 * sub_004B838E
 * Original: 0x004B838E - 0x004B83EA (92 bytes, 35 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_004B838E(void)
{
    int _flags = 0; /* fallback flag var */

loc_004B838E: ;
    SET_LO16(edx, MEM16(esp + 8));
    if (((int32_t)(LO8(edx) & LO8(edx)) >= 0)) goto loc_004B83E5; /* jns: not sign (positive) */

loc_004B8397: ;
    if (TEST_Z(LO8(edx), 0x40)) goto loc_004B83DE; /* je: equal / zero */

loc_004B839C: ;
    MEM8(esp + 4) = 0;

loc_004B83A1: ;
    eax = ZX8(MEM8(esp + 4));
    eax = eax + eax * 2;
    eax = eax << 1;
    PUSH32(esp, esi);
    SET_LO16(esi, MEM16(eax + 0x652E70));
    eax = MEM32(eax + 0x652E72);
    PUSH32(esp, edi);
    edi = 0; /* xor self */
    if (CMP_BE(LO16(esi) & LO16(esi), 0)) goto loc_004B83D6; /* jbe: below or equal (unsigned <=) */

loc_004B83C1: ;
    ecx = ZX16(LO16(edi));
    ecx = eax + ecx * 2;
    if (CMP_NE(LO8(edx), MEM8(ecx))) goto loc_004B83D0; /* jne: not equal / not zero */

loc_004B83CB: ;
    if (CMP_NE(LO16(edx), MEM16(ecx))) { sub_004B83EA(); return; } /* jne: not equal / not zero */

loc_004B83D0: ;
    edi++;
    if (CMP_B(LO16(edi), LO16(esi))) goto loc_004B83C1; /* jb: below (unsigned <) */

loc_004B83D6: ;
    eax = 0; /* xor self */
    eax++;
    POP32(esp, edi);
    POP32(esp, esi);

loc_004B83DB: ;
    esp += 12; return; /* ret 8 */

loc_004B83DE: ;
    if (CMP_B(MEM8(esp + 4), 8)) goto loc_004B83A1; /* jb: below (unsigned <) */

loc_004B83E5: ;
    eax = 0; /* xor self */
    eax++;
    goto loc_004B83DB;

}

/**
 * sub_004B83EE
 * Original: 0x004B83EE - 0x004B8408 (26 bytes, 11 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_004B83EE(void)
{
    uint32_t ebp;
    int _flags = 0; /* fallback flag var */

loc_004B83EE: ;
    PUSH32(esp, ebp);
    ebp = esp;
    esp = esp - 0x24;
    PUSH32(esp, ebx);
    PUSH32(esp, esi);
    esi = ecx;
    ebx = 0; /* xor self */
    if (CMP_NE(esi, ebx)) { sub_004B8408(); return; } /* jne: not equal / not zero */

loc_004B83FE: ;
    eax = 0x80150005u;
    g_seh_ebp = ebp; sub_004B84CD(); return; /* tail jmp 0x004B84CD */

}

/**
 * sub_004B84D3
 * Original: 0x004B84D3 - 0x004B84EA (23 bytes, 9 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_004B84D3(void)
{
    uint32_t ebp;
    int _flags = 0; /* fallback flag var */

loc_004B84D3: ;
    PUSH32(esp, ebp);
    ebp = esp;
    esp = esp - 0x20;
    PUSH32(esp, esi);
    esi = 0; /* xor self */
    if (CMP_NE(ecx, esi)) { sub_004B84EA(); return; } /* jne: not equal / not zero */

loc_004B84E0: ;
    eax = 0x80150005u;
    g_seh_ebp = ebp; sub_004B8681(); return; /* tail jmp 0x004B8681 */

}

/**
 * sub_004B87E2
 * Original: 0x004B87E2 - 0x004B87F7 (21 bytes, 8 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_004B87E2(void)
{
    uint32_t ebp;
    int _flags = 0; /* fallback flag var */

loc_004B87E2: ;
    PUSH32(esp, ebp);
    ebp = esp;
    PUSH32(esp, ecx);
    (void)0; /* test ecx, ecx - flags set for next jcc */
    MEM32(ebp + -4) = ecx;
    if (TEST_NZ(ecx, ecx)) { sub_004B87F7(); return; } /* jne: not equal / not zero */

loc_004B87ED: ;
    eax = 0x80150005u;
    g_seh_ebp = ebp; sub_004B88D8(); return; /* tail jmp 0x004B88D8 */

}

/**
 * sub_004B88DC
 * Original: 0x004B88DC - 0x004B88EA (14 bytes, 6 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_004B88DC(void)
{
    uint32_t ebp;
    int _flags = 0; /* fallback flag var */
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_004B88DC: ;
    PUSH32(esp, ebx);
    ebx = ecx;
    if (TEST_NZ(ebx, ebx)) { sub_004B88EA(); return; } /* jne: not equal / not zero */

loc_004B88E3: ;
    eax = 0x80150005u;
    g_seh_ebp = ebp; sub_004B8912(); return; /* tail jmp 0x004B8912 */

}

/**
 * sub_004B8916
 * Original: 0x004B8916 - 0x004B8930 (26 bytes, 10 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_004B8916(void)
{
    uint32_t ebp;
    int _flags = 0; /* fallback flag var */

loc_004B8916: ;
    PUSH32(esp, ebp);
    ebp = esp;
    esp = esp - 0x14;
    PUSH32(esp, edi);
    edi = 0; /* xor self */
    (void)0; /* cmp ecx, edi - flags set for next jcc */
    MEM32(ebp + -8) = ecx;
    if (CMP_NE(ecx, edi)) { sub_004B8930(); return; } /* jne: not equal / not zero */

loc_004B8926: ;
    eax = 0x80150005u;
    g_seh_ebp = ebp; sub_004B8BC8(); return; /* tail jmp 0x004B8BC8 */

}

/**
 * sub_004B8BF9
 * Original: 0x004B8BF9 - 0x004B8C0B (18 bytes, 9 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_004B8BF9(void)
{
    uint32_t ebp;
    int _flags = 0; /* fallback flag var */

loc_004B8BF9: ;
    PUSH32(esp, ebp);
    ebp = esp;
    PUSH32(esp, ecx);
    PUSH32(esp, esi);
    esi = 0; /* xor self */
    if (CMP_NE(ecx, esi)) { sub_004B8C0B(); return; } /* jne: not equal / not zero */

loc_004B8C04: ;
    eax = 0x80150005u;
    g_seh_ebp = ebp; sub_004B8C3F(); return; /* tail jmp 0x004B8C3F */

}

/**
 * sub_004B8EBD
 * Original: 0x004B8EBD - 0x004B8EE0 (35 bytes, 15 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_004B8EBD(void)
{
    uint32_t ebp;
    int _flags = 0; /* fallback flag var */

loc_004B8EBD: ;
    PUSH32(esp, ebp);
    ebp = esp;
    PUSH32(esp, ecx);
    PUSH32(esp, ecx);
    PUSH32(esp, edi);
    edi = ecx;
    ecx = 0; /* xor self */
    eax = edi + 0x14FC;

loc_004B8ECD: ;
    if (CMP_EQ(MEM32(eax), 0)) { sub_004B8EE0(); return; } /* je: equal / zero */

loc_004B8ED2: ;
    ecx++;
    eax = eax + 0x10;
    if (CMP_B(ecx, 8)) goto loc_004B8ECD; /* jb: below (unsigned <) */

loc_004B8EDB: ;
    g_seh_ebp = ebp; sub_004B8F9B(); return; /* tail jmp 0x004B8F9B */

}

/**
 * sub_004B8FA0
 * Original: 0x004B8FA0 - 0x004B8FD7 (55 bytes, 20 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_004B8FA0(void)
{
    uint32_t ebp;
    int _flags = 0; /* fallback flag var */
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_004B8FA0: ;
    edx = 0; /* xor self */
    eax = ecx + 0x1500;
    PUSH32(esp, edi);

loc_004B8FA9: ;
    edi = MEM32(eax + -4);
    if (CMP_NE(edi, MEM32(esp + 8))) goto loc_004B8FCC; /* jne: not equal / not zero */

loc_004B8FB2: ;
    edi = MEM32(eax);
    if (CMP_NE(edi, MEM32(esp + 0xC))) goto loc_004B8FCC; /* jne: not equal / not zero */

loc_004B8FBA: ;
    edi = MEM32(eax + 4);
    if (CMP_NE(edi, MEM32(esp + 0x10))) goto loc_004B8FCC; /* jne: not equal / not zero */

loc_004B8FC3: ;
    edi = MEM32(eax + 8);
    if (CMP_EQ(edi, MEM32(esp + 0x14))) { sub_004B8FD7(); return; } /* je: equal / zero */

loc_004B8FCC: ;
    edx++;
    eax = eax + 0x10;
    if (CMP_B(edx, 8)) goto loc_004B8FA9; /* jb: below (unsigned <) */

loc_004B8FD5: ;
    g_seh_ebp = ebp; sub_004B9000(); return; /* tail jmp 0x004B9000 */

}

/**
 * sub_004B9004
 * Original: 0x004B9004 - 0x004B9011 (13 bytes, 4 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_004B9004(void)
{

loc_004B9004: ;
    ecx = MEM32(esp + 4);
    eax = MEM32(ecx + 4);
    edx = MEM32(ecx + 8);
    esp += 8; return; /* ret 4 */

}

/**
 * sub_004B9011
 * Original: 0x004B9011 - 0x004B9027 (22 bytes, 6 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_004B9011(void)
{

loc_004B9011: ;
    eax = MEM32(esp + 4);
    ecx = 0; /* xor self */
    SET_LO16(ecx, MEM16(eax + 0x10E5));
    eax = ZX16(MEM16(eax + 0x1E));
    eax = eax - ecx;
    esp += 8; return; /* ret 4 */

}

/**
 * sub_004B9027
 * Original: 0x004B9027 - 0x004B9038 (17 bytes, 4 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_004B9027(void)
{

loc_004B9027: ;
    eax = MEM32(esp + 4);
    eax = MEM32(eax + 0x170);
    MEM8(eax + 0x16) = MEM8(eax + 0x16) | 0x20;
    esp += 8; return; /* ret 4 */

}

/**
 * sub_004B9038
 * Original: 0x004B9038 - 0x004B905A (34 bytes, 8 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_004B9038(void)
{
    uint32_t ebp;
    int _flags = 0; /* fallback flag var */
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_004B9038: ;
    ecx = MEM32(esp + 4);
    eax = 0; /* xor self */
    SET_LO16(eax, MEM16(ecx + 0x10E5));
    if (CMP_BE(LO16(eax) & LO16(eax), 0)) { sub_004B905A(); return; } /* jbe: below or equal (unsigned <=) */

loc_004B904A: ;
    eax = eax * 4 + 4;
    SET_LO16(eax, LO16(eax) + MEM16(ecx + 0x10E7));
    g_seh_ebp = ebp; sub_004B905C(); return; /* tail jmp 0x004B905C */

}

/**
 * sub_004B905F
 * Original: 0x004B905F - 0x004B90BF (96 bytes, 34 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_004B905F(void)
{
    int _flags = 0; /* fallback flag var */

loc_004B905F: ;
    eax = MEM32(esp + 4);
    eax = MEM32(eax + 0x170);
    PUSH32(esp, esi);
    esi = eax + 0x10E5;
    ecx = 0; /* xor self */
    SET_LO16(ecx, MEM16(esi));
    if (CMP_BE(LO16(ecx) & LO16(ecx), 0)) goto loc_004B90BB; /* jbe: below or equal (unsigned <=) */

loc_004B907A: ;
    ecx = ecx * 4 + 4;
    edx = ZX16(LO16(ecx));
    PUSH32(esp, ebx);
    PUSH32(esp, edi);
    edi = MEM32(esp + 0x18);
    ecx = edx;
    ebx = ecx;
    ecx = ecx >> 2;
    memcpy((void*)XBOX_PTR(edi), (void*)XBOX_PTR(esi), ecx * 4);
    esi += ecx * 4; edi += ecx * 4; ecx = 0; /* rep movsd */
    ecx = ebx;
    ecx = ecx & 3;
    memcpy((void*)XBOX_PTR(edi), (void*)XBOX_PTR(esi), ecx);
    esi += ecx; edi += ecx; ecx = 0; /* rep movsb */
    ecx = ZX16(MEM16(eax + 0x10E7));
    esi = MEM32(eax + 0x18);
    eax = MEM32(esp + 0x18);
    edi = edx + eax;
    eax = ecx;
    ecx = ecx >> 2;
    memcpy((void*)XBOX_PTR(edi), (void*)XBOX_PTR(esi), ecx * 4);
    esi += ecx * 4; edi += ecx * 4; ecx = 0; /* rep movsd */
    ecx = eax;
    ecx = ecx & 3;
    memcpy((void*)XBOX_PTR(edi), (void*)XBOX_PTR(esi), ecx);
    esi += ecx; edi += ecx; ecx = 0; /* rep movsb */
    POP32(esp, edi);
    POP32(esp, ebx);

loc_004B90BB: ;
    POP32(esp, esi);
    esp += 16; return; /* ret 12 */

}

/**
 * sub_004B90BF
 * Original: 0x004B90BF - 0x004B91F0 (305 bytes, 102 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_004B90BF(void)
{
    uint32_t ebp;
    int _flags = 0; /* fallback flag var */

loc_004B90BF: ;
    PUSH32(esp, ebp);
    ebp = esp;
    esp = esp - 0x20C;
    PUSH32(esp, ebx);
    PUSH32(esp, esi);
    esi = MEM32(ebp + 8);
    PUSH32(esp, edi);
    edi = MEM32(esi + 0x170);
    ebx = 0; /* xor self */
    (void)0; /* cmp edi, ebx - flags set for next jcc */
    MEM32(ebp + -4) = ecx;
    if (CMP_EQ(edi, ebx)) goto loc_004B918F; /* je: equal / zero */

loc_004B90E1: ;
    SET_LO16(eax, MEM16(edi + 0x22));
    if (CMP_BE(LO16(eax), LO16(ebx))) goto loc_004B918F; /* jbe: below or equal (unsigned <=) */

loc_004B90EE: ;
    eax = ZX16(LO16(eax));
    eax = (uint32_t)((int32_t)eax * (int32_t)0x10C);
    eax = eax + edi + -232;
    MEM32(ebp + 8) = eax;
    eax = ZX16(MEM16(eax + 4));
    ebx = ZX16(MEM16(edi + eax * 4 + 0x10EB));
    ebx = ebx + MEM32(edi + 0x18);
    PUSH32(esp, 0x100);
    eax = ebp + -524;
    PUSH32(esp, eax);
    PUSH32(esp, 0xFFFFFFFFu);
    eax = ebx + 0xC;
    PUSH32(esp, eax);
    PUSH32(esp, 0);
    PUSH32(esp, 0);
    PUSH32(esp, 0); sub_0047E7BE(); /* call 0x0047E7BE */

loc_004B912B: ;
    eax = ebp + -12;
    PUSH32(esp, eax);
    eax = 0; /* xor self */
    SET_LO16(eax, MEM16(edi + 0x20));
    PUSH32(esp, eax);
    PUSH32(esp, 0); sub_004B82F2(); /* call 0x004B82F2 */

loc_004B913B: ;
    eax = MEM32(ebp + 8);
    ebx = MEM32(ebx);
    ecx = MEM32(ebp + -4);
    PUSH32(esp, eax);
    PUSH32(esp, MEM32(esi + 8));
    edi = 0; /* xor self */
    (void)0; /* cmp ebx, edi - flags set for next jcc */
    PUSH32(esp, edi);
    if (CMP_NE(ebx, edi)) goto loc_004B916B; /* jne: not equal / not zero */

loc_004B914E: ;
    eax = eax + 8;
    PUSH32(esp, eax);
    PUSH32(esp, MEM32(ebp + -8));
    eax = ebp + -524;
    PUSH32(esp, MEM32(ebp + -12));
    PUSH32(esp, eax);
    PUSH32(esp, MEM32(esi + 0x14));
    PUSH32(esp, 2);
    PUSH32(esp, 0); sub_004BF48C(); /* call 0x004BF48C */

loc_004B9169: ;
    goto loc_004B9186;

loc_004B916B: ;
    PUSH32(esp, ebx);
    PUSH32(esp, MEM32(eax + 8));
    eax = ebp + -524;
    PUSH32(esp, MEM32(ebp + -8));
    PUSH32(esp, MEM32(ebp + -12));
    PUSH32(esp, eax);
    PUSH32(esp, MEM32(esi + 0x14));
    PUSH32(esp, 2);
    PUSH32(esp, 0); sub_004BF787(); /* call 0x004BF787 */

loc_004B9186: ;
    if (CMP_L(eax, edi)) goto loc_004B91E9; /* jl: less (signed <) */

loc_004B918A: ;
    MEM32(esi + 0x10) = edi;
    goto loc_004B91E9;

loc_004B918F: ;
    ecx = MEM32(esi + 0x208);
    eax = MEM32(esi + 0x204);
    PUSH32(esp, ebx);
    PUSH32(esp, ebx);
    edi = esi + 0x1C;
    PUSH32(esp, edi);
    PUSH32(esp, MEM32(esi + 8));
    eax = eax + esi + 0x210;
    PUSH32(esp, 0x7530);
    PUSH32(esp, ecx);
    PUSH32(esp, eax);
    PUSH32(esp, ebx);
    PUSH32(esp, ebx);
    PUSH32(esp, MEM32(esi + 0x20C));
    edx = ecx + eax;
    ecx = MEM32(ebp + -4);
    PUSH32(esp, edx);
    eax = esi + 0x184;
    PUSH32(esp, eax);
    PUSH32(esp, MEM32(esi + 0x180));
    PUSH32(esp, MEM32(esi + 0x17C));
    PUSH32(esp, 0); sub_004ADC62(); /* call 0x004ADC62 */

loc_004B91D9: ;
    if (CMP_L(eax, ebx)) goto loc_004B91E9; /* jl: less (signed <) */

loc_004B91DD: ;
    ecx = 0; /* xor self */
    ecx++;
    MEM32(esi + 0x16C) = ecx;
    MEM32(esi + 0x10) = ecx;

loc_004B91E9: ;
    POP32(esp, edi);
    POP32(esp, esi);
    POP32(esp, ebx);
    esp = ebp;
    POP32(esp, ebp); /* leave */
    esp += 8; return; /* ret 4 */

}

/**
 * sub_004B91F0
 * Original: 0x004B91F0 - 0x004B91FC (12 bytes, 3 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_004B91F0(void)
{

loc_004B91F0: ;
    eax = MEM32(esp + 4);
    eax = eax + 0x210;
    esp += 8; return; /* ret 4 */

}

/**
 * sub_004B91FC
 * Original: 0x004B91FC - 0x004B9206 (10 bytes, 3 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_004B91FC(void)
{

loc_004B91FC: ;
    eax = MEM32(esp + 4);
    eax = MEM32(eax + 0x14);
    esp += 8; return; /* ret 4 */

}

/**
 * sub_004B9206
 * Original: 0x004B9206 - 0x004B9243 (61 bytes, 25 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_004B9206(void)
{
    uint32_t ebp;
    int _flags = 0; /* fallback flag var */

loc_004B9206: ;
    PUSH32(esp, ebp);
    ebp = esp;
    PUSH32(esp, edi);
    edi = MEM32(ebp + 0xC);
    PUSH32(esp, 0);
    eax = ebp + 0x10;
    PUSH32(esp, eax);
    eax = MEM32(ebp + 8);
    PUSH32(esp, 0);
    PUSH32(esp, 0);
    PUSH32(esp, MEM32(ebp + 0x10));
    eax = eax + 0x1C;
    PUSH32(esp, edi);
    PUSH32(esp, eax);
    PUSH32(esp, 0); sub_004AD5B6(); /* call 0x004AD5B6 */

loc_004B9227: ;
    if (TEST_S(eax, eax)) goto loc_004B923E; /* jl: less (signed <) */

loc_004B922B: ;
    if (CMP_EQ(MEM32(edi), 0)) goto loc_004B9239; /* je: equal / zero */

loc_004B9230: ;
    if (CMP_EQ(MEM32(ebp + 0x10), 0xC8)) goto loc_004B923E; /* je: equal / zero */

loc_004B9239: ;
    eax = 0x8015000Au;

loc_004B923E: ;
    POP32(esp, edi);
    POP32(esp, ebp);
    esp += 16; return; /* ret 12 */

}

/**
 * sub_004B9243
 * Original: 0x004B9243 - 0x004B928D (74 bytes, 24 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_004B9243(void)
{
    int _flags = 0; /* fallback flag var */

loc_004B9243: ;
    eax = 0; /* xor self */
    eax++;
    if (TEST_NZ(MEM8(esp + 8), LO8(eax))) goto loc_004B928A; /* jne: not equal / not zero */

loc_004B924C: ;
    if (TEST_Z(MEM8(esp + 8), 0x20)) goto loc_004B925C; /* je: equal / zero */

loc_004B9253: ;
    if (CMP_A(MEM32(ecx + 0x185C), 0)) goto loc_004B928A; /* ja: above (unsigned >) */

loc_004B925C: ;
    SET_LO8(ecx, MEM8(esp + 4));
    if (CMP_EQ(LO8(ecx), LO8(eax))) goto loc_004B9285; /* je: equal / zero */

loc_004B9264: ;
    if (CMP_EQ(LO8(ecx), 2)) goto loc_004B928A; /* je: equal / zero */

loc_004B9269: ;
    if (CMP_EQ(LO8(ecx), 3)) goto loc_004B927E; /* je: equal / zero */

loc_004B926E: ;
    if (CMP_BE(LO8(ecx), 3)) goto loc_004B9275; /* jbe: below or equal (unsigned <=) */

loc_004B9270: ;
    if (CMP_BE(LO8(ecx), 7)) goto loc_004B9285; /* jbe: below or equal (unsigned <=) */

loc_004B9275: ;
    (void)0; /* cmp MEM32(0x75F0D0), 0 - flags set for next jcc */
    goto loc_004B9283;

loc_004B927E: ;
    (void)0; /* test MEM8(esp + 8), 4 - flags set for next jcc */

loc_004B9283: ;
    if (TEST_NZ(MEM8(esp + 8), 4)) goto loc_004B928A; /* jne: not equal / not zero */

loc_004B9285: ;
    eax = MEM32(0x75F0CC);

loc_004B928A: ;
    esp += 12; return; /* ret 8 */

}

/**
 * sub_004B928D
 * Original: 0x004B928D - 0x004B92BC (47 bytes, 18 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_004B928D(void)
{
    uint32_t ebp;
    int _flags = 0; /* fallback flag var */

loc_004B928D: ;
    PUSH32(esp, ebp);
    ebp = esp;
    eax = MEM32(ebp + 0x10);
    PUSH32(esp, ebx);
    ebx = MEM32(ebp + 0xC);
    PUSH32(esp, esi);
    PUSH32(esp, edi);
    edi = ecx;
    ecx = MEM32(ebp + 0x14);
    eax = eax + ebx;
    (void)0; /* cmp MEM32(ebp + 8), 0 - flags set for next jcc */
    eax = eax + ecx + 0x17C;
    PUSH32(esp, 0x91);
    ecx = edi;
    PUSH32(esp, eax);
    if (CMP_EQ(MEM32(ebp + 8), 0)) { sub_004B92BC(); return; } /* je: equal / zero */

loc_004B92B5: ;
    PUSH32(esp, 0); sub_004B53DA(); /* call 0x004B53DA */

loc_004B92BA: ;
    g_seh_ebp = ebp; sub_004B92C1(); return; /* tail jmp 0x004B92C1 */

}

/**
 * sub_004B9362
 * Original: 0x004B9362 - 0x004B93E9 (135 bytes, 46 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_004B9362(void)
{
    uint32_t ebp;
    int _flags = 0; /* fallback flag var */
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_004B9362: ;
    PUSH32(esp, ebx);
    PUSH32(esp, ebp);
    PUSH32(esp, esi);
    esi = MEM32(esp + 0x10);
    eax = MEM32(esi + 0x170);
    ebp = 0; /* xor self */
    (void)0; /* cmp eax, ebp - flags set for next jcc */
    PUSH32(esp, edi);
    ebx = ecx;
    if (CMP_EQ(eax, ebp)) goto loc_004B93C3; /* je: equal / zero */

loc_004B9378: ;
    SET_LO16(ecx, MEM16(eax + 0x22));
    if (CMP_BE(LO16(ecx), LO16(ebp))) goto loc_004B93A1; /* jbe: below or equal (unsigned <=) */

loc_004B9381: ;
    ecx = ZX16(LO16(ecx));
    ecx = (uint32_t)((int32_t)ecx * (int32_t)0x10C);
    edi = ecx + eax + -232;
    eax = MEM32(edi);
    if (CMP_EQ(eax, ebp)) goto loc_004B93A1; /* je: equal / zero */

loc_004B9397: ;
    PUSH32(esp, eax);
    ecx = ebx;
    PUSH32(esp, 0); sub_004A5F87(); /* call 0x004A5F87 */

loc_004B939F: ;
    MEM32(edi) = ebp;

loc_004B93A1: ;
    eax = MEM32(esi + 0x170);
    MEM32(eax) = ebp;
    eax = MEM32(esi + 0x170);
    if (TEST_Z(MEM8(eax + 0x16), 0x20)) goto loc_004B93BD; /* je: equal / zero */

loc_004B93B5: ;
    PUSH32(esp, eax);
    ecx = ebx;
    PUSH32(esp, 0); sub_004B88DC(); /* call 0x004B88DC */

loc_004B93BD: ;
    MEM32(esi + 0x170) = ebp;

loc_004B93C3: ;
    edi = esi + 0x16C;
    if (CMP_EQ(MEM32(edi), ebp)) goto loc_004B93DA; /* je: equal / zero */

loc_004B93CD: ;
    eax = esi + 0x1C;
    PUSH32(esp, eax);
    ecx = ebx;
    PUSH32(esp, 0); sub_004B5278(); /* call 0x004B5278 */

loc_004B93D8: ;
    MEM32(edi) = ebp;

loc_004B93DA: ;
    (void)0; /* cmp MEM32(esi + 0xC), ebp - flags set for next jcc */
    ecx = ebx;
    if (CMP_EQ(MEM32(esi + 0xC), ebp)) { sub_004B93E9(); return; } /* je: equal / zero */

loc_004B93E1: ;
    PUSH32(esp, esi);
    PUSH32(esp, 0); sub_004B5402(); /* call 0x004B5402 */

loc_004B93E7: ;
    g_seh_ebp = ebp; sub_004B93F4(); return; /* tail jmp 0x004B93F4 */

}

/**
 * sub_004B93FB
 * Original: 0x004B93FB - 0x004B948E (147 bytes, 62 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_004B93FB(void)
{
    uint32_t ebp;
    int _flags = 0; /* fallback flag var */

loc_004B93FB: ;
    PUSH32(esp, ebp);
    ebp = esp;
    esp = esp - 0x18;
    PUSH32(esp, ebx);
    PUSH32(esp, esi);
    esi = MEM32(ebp + 8);
    eax = MEM32(esi + 0x10);
    eax--;
    PUSH32(esp, edi);
    ebx = ecx;
    if ((eax == 0)) goto loc_004B9417; /* je: equal / zero */

loc_004B940F: ;
    eax--;
    if ((eax != 0)) goto loc_004B9484; /* jne: not equal / not zero */

loc_004B9412: ;
    eax = MEM32(esi + 0x28);
    goto loc_004B9487;

loc_004B9417: ;
    edi = esi + 0x1C;
    PUSH32(esp, edi);
    ecx = ebx;
    PUSH32(esp, 0); sub_004A5F72(); /* call 0x004A5F72 */

loc_004B9422: ;
    if (TEST_Z(eax, eax)) goto loc_004B9487; /* je: equal / zero */

loc_004B9426: ;
    if (TEST_S(eax, eax)) goto loc_004B9478; /* jl: less (signed <) */

loc_004B9428: ;
    PUSH32(esp, 0);
    eax = ebp + -4;
    PUSH32(esp, eax);
    eax = ebp + -16;
    PUSH32(esp, eax);
    eax = ebp + -24;
    PUSH32(esp, eax);
    eax = ebp + -8;
    PUSH32(esp, eax);
    eax = ebp + 8;
    PUSH32(esp, eax);
    PUSH32(esp, edi);
    ecx = ebx;
    PUSH32(esp, 0); sub_004AD5B6(); /* call 0x004AD5B6 */

loc_004B9446: ;
    if (TEST_S(eax, eax)) goto loc_004B9478; /* jl: less (signed <) */

loc_004B944A: ;
    eax = MEM32(ebp + 8);
    if (TEST_Z(eax, eax)) goto loc_004B9473; /* je: equal / zero */

loc_004B9451: ;
    if (CMP_NE(MEM32(ebp + -4), 0xC8)) goto loc_004B9473; /* jne: not equal / not zero */

loc_004B945A: ;
    if (CMP_B(MEM32(ebp + -8), 0x24)) goto loc_004B9473; /* jb: below (unsigned <) */

loc_004B9460: ;
    if (CMP_NE(MEM32(eax), 0x6E)) goto loc_004B9473; /* jne: not equal / not zero */

loc_004B9465: ;
    eax = MEM32(eax + 0x20);
    if (TEST_S(eax, eax)) goto loc_004B9478; /* jl: less (signed <) */

loc_004B946C: ;
    eax = 0x1500F0;
    goto loc_004B9478;

loc_004B9473: ;
    eax = 0x8015000Au;

loc_004B9478: ;
    MEM32(esi + 0x28) = eax;
    MEM32(esi + 0x10) = 2;
    goto loc_004B9487;

loc_004B9484: ;
    eax = MEM32(ebp + 8);

loc_004B9487: ;
    POP32(esp, edi);
    POP32(esp, esi);
    POP32(esp, ebx);
    esp = ebp;
    POP32(esp, ebp); /* leave */
    esp += 8; return; /* ret 4 */

}

/**
 * sub_004B948E
 * Original: 0x004B948E - 0x004B953C (174 bytes, 68 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_004B948E(void)
{
    uint32_t ebp;
    int _flags = 0; /* fallback flag var */

loc_004B948E: ;
    PUSH32(esp, ebp);
    ebp = esp;
    esp = esp - 0x18;
    PUSH32(esp, ebx);
    PUSH32(esp, esi);
    esi = MEM32(ebp + 8);
    eax = MEM32(esi + 0x10);
    eax--;
    PUSH32(esp, edi);
    ebx = ecx;
    if ((eax == 0)) goto loc_004B94B1; /* je: equal / zero */

loc_004B94A2: ;
    eax--;
    if ((eax != 0)) goto loc_004B9532; /* jne: not equal / not zero */

loc_004B94A9: ;
    eax = MEM32(esi + 0x28);
    goto loc_004B9535;

loc_004B94B1: ;
    edi = esi + 0x1C;
    PUSH32(esp, edi);
    ecx = ebx;
    PUSH32(esp, 0); sub_004A5F72(); /* call 0x004A5F72 */

loc_004B94BC: ;
    if (TEST_Z(eax, eax)) goto loc_004B9535; /* je: equal / zero */

loc_004B94C0: ;
    if (TEST_S(eax, eax)) goto loc_004B9512; /* jl: less (signed <) */

loc_004B94C2: ;
    PUSH32(esp, 0);
    eax = ebp + -4;
    PUSH32(esp, eax);
    eax = ebp + -16;
    PUSH32(esp, eax);
    eax = ebp + -24;
    PUSH32(esp, eax);
    eax = ebp + -8;
    PUSH32(esp, eax);
    eax = ebp + 8;
    PUSH32(esp, eax);
    PUSH32(esp, edi);
    ecx = ebx;
    PUSH32(esp, 0); sub_004AD5B6(); /* call 0x004AD5B6 */

loc_004B94E0: ;
    if (TEST_S(eax, eax)) goto loc_004B9512; /* jl: less (signed <) */

loc_004B94E4: ;
    eax = MEM32(ebp + 8);
    if (TEST_Z(eax, eax)) goto loc_004B950D; /* je: equal / zero */

loc_004B94EB: ;
    if (CMP_NE(MEM32(ebp + -4), 0xC8)) goto loc_004B950D; /* jne: not equal / not zero */

loc_004B94F4: ;
    if (CMP_B(MEM32(ebp + -8), 0x24)) goto loc_004B950D; /* jb: below (unsigned <) */

loc_004B94FA: ;
    if (CMP_NE(MEM32(eax), 0x69)) goto loc_004B950D; /* jne: not equal / not zero */

loc_004B94FF: ;
    eax = MEM32(eax + 0x20);
    if (TEST_S(eax, eax)) goto loc_004B9512; /* jl: less (signed <) */

loc_004B9506: ;
    eax = 0x1500F0;
    goto loc_004B9512;

loc_004B950D: ;
    eax = 0x8015000Au;

loc_004B9512: ;
    (void)0; /* test eax, eax - flags set for next jcc */
    MEM32(esi + 0x28) = eax;
    MEM32(esi + 0x10) = 2;
    if (CMP_GE(eax & eax, 0)) goto loc_004B9535; /* jge: greater or equal (signed >=) */

loc_004B9520: ;
    esi = MEM32(esi + 0x14);
    ecx = esi + esi * 8;
    ecx = ebx + ecx * 8 + 0x13B4;
    MEM32(ecx) = MEM32(ecx) | 0x40;
    goto loc_004B9535;

loc_004B9532: ;
    eax = MEM32(ebp + 8);

loc_004B9535: ;
    POP32(esp, edi);
    POP32(esp, esi);
    POP32(esp, ebx);
    esp = ebp;
    POP32(esp, ebp); /* leave */
    esp += 8; return; /* ret 4 */

}

/**
 * sub_004B953C
 * Original: 0x004B953C - 0x004B9903 (967 bytes, 291 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_004B953C(void)
{
    uint32_t ebp;
    int _flags = 0; /* fallback flag var */
    int _cf = 0; /* carry flag */

loc_004B953C: ;
    PUSH32(esp, ebp);
    ebp = esp;
    esp = esp - 0x234;
    PUSH32(esp, ebx);
    PUSH32(esp, esi);
    esi = MEM32(ebp + 8);
    eax = MEM32(esi + 0x10);
    ebx = 0; /* xor self */
    eax = eax - ebx;
    PUSH32(esp, edi);
    MEM32(ebp + -4) = ecx;
    if ((eax == 0)) goto loc_004B965F; /* je: equal / zero */

loc_004B955B: ;
    eax--;
    if ((eax == 0)) goto loc_004B9570; /* je: equal / zero */

loc_004B955E: ;
    eax--;
    if ((eax != 0)) goto loc_004B98F9; /* jne: not equal / not zero */

loc_004B9565: ;
    eax = MEM32(esi + 0x28);
    MEM32(ebp + 8) = eax;
    goto loc_004B98F9;

loc_004B9570: ;
    edi = esi + 0x1C;
    PUSH32(esp, edi);
    PUSH32(esp, 0); sub_004A5F72(); /* call 0x004A5F72 */

loc_004B9579: ;
    (void)0; /* cmp eax, ebx - flags set for next jcc */
    MEM32(ebp + 8) = eax;
    if (CMP_EQ(eax, ebx)) goto loc_004B98F9; /* je: equal / zero */

loc_004B9584: ;
    if (CMP_L(eax, ebx)) goto loc_004B9884; /* jl: less (signed <) */

loc_004B958C: ;
    ecx = MEM32(ebp + -4);
    PUSH32(esp, ebx);
    eax = ebp + -36;
    PUSH32(esp, eax);
    eax = ebp + -44;
    PUSH32(esp, eax);
    eax = ebp + -52;
    PUSH32(esp, eax);
    eax = ebp + -28;
    PUSH32(esp, eax);
    eax = ebp + -32;
    PUSH32(esp, eax);
    PUSH32(esp, edi);
    PUSH32(esp, 0); sub_004AD5B6(); /* call 0x004AD5B6 */

loc_004B95AA: ;
    (void)0; /* cmp eax, ebx - flags set for next jcc */
    MEM32(ebp + 8) = eax;
    if (CMP_L(eax, ebx)) goto loc_004B9884; /* jl: less (signed <) */

loc_004B95B5: ;
    ecx = MEM32(ebp + -32);
    if (CMP_EQ(ecx, ebx)) goto loc_004B9653; /* je: equal / zero */

loc_004B95C0: ;
    if (CMP_NE(MEM32(ebp + -36), 0xC8)) goto loc_004B9653; /* jne: not equal / not zero */

loc_004B95CD: ;
    if (CMP_NE(MEM32(esi), 0x4B953C)) goto loc_004B9884; /* jne: not equal / not zero */

loc_004B95D9: ;
    if (CMP_B(MEM32(ebp + -28), 0x26)) goto loc_004B9653; /* jb: below (unsigned <) */

loc_004B95DF: ;
    if (CMP_NE(MEM32(ecx), 0x6A)) goto loc_004B9653; /* jne: not equal / not zero */

loc_004B95E4: ;
    SET_LO16(edx, MEM16(ecx + 0x24));
    eax = ZX16(LO16(edx));
    eax = eax + eax * 2;
    eax = eax * 4 + 0x26;
    if (CMP_B(MEM32(ebp + -28), eax)) goto loc_004B9653; /* jb: below (unsigned <) */

loc_004B95FA: ;
    eax = MEM32(ecx + 0x20);
    (void)0; /* cmp eax, ebx - flags set for next jcc */
    MEM32(ebp + 8) = eax;
    if (CMP_L(eax, ebx)) goto loc_004B9884; /* jl: less (signed <) */

loc_004B9608: ;
    if (CMP_B(LO16(edx), 1)) goto loc_004B9653; /* jb: below (unsigned <) */

loc_004B960E: ;
    edi = 0; /* xor self */
    (void)0; /* cmp LO16(edx), LO16(ebx) - flags set for next jcc */
    MEM32(ebp + 8) = ebx;
    if (CMP_BE(LO16(edx), LO16(ebx))) goto loc_004B9647; /* jbe: below or equal (unsigned <=) */

loc_004B9618: ;
    eax = ZX16(LO16(edi));
    eax = eax + eax * 2;
    eax = MEM32(ecx + eax * 4 + 0x2E);
    if (((int32_t)(eax & eax) >= 0)) goto loc_004B962B; /* jns: not sign (positive) */

loc_004B9626: ;
    MEM32(ebp + 8) = MEM32(ebp + 8) + 1;
    goto loc_004B962F;

loc_004B962B: ;
    if (CMP_EQ(eax, ebx)) goto loc_004B9653; /* je: equal / zero */

loc_004B962F: ;
    edi++;
    if (CMP_B(LO16(edi), LO16(edx))) goto loc_004B9618; /* jb: below (unsigned <) */

loc_004B9635: ;
    if (CMP_BE(MEM16(ebp + 8), LO16(ebx))) goto loc_004B9647; /* jbe: below or equal (unsigned <=) */

loc_004B963B: ;
    MEM32(ebp + 8) = 1;
    goto loc_004B9884;

loc_004B9647: ;
    MEM32(ebp + 8) = 0x1500F0;
    goto loc_004B9884;

loc_004B9653: ;
    MEM32(ebp + 8) = 0x8015000Au;
    goto loc_004B9884;

loc_004B965F: ;
    eax = MEM32(esi + 0x170);
    edx = ZX16(MEM16(eax + 0x22));
    edx = (uint32_t)((int32_t)edx * (int32_t)0x10C);
    edi = edx + eax + -232;
    PUSH32(esp, MEM32(edi));
    PUSH32(esp, 0); sub_004A5F72(); /* call 0x004A5F72 */

loc_004B967D: ;
    (void)0; /* cmp eax, ebx - flags set for next jcc */
    MEM32(ebp + 8) = eax;
    if (CMP_EQ(eax, ebx)) goto loc_004B98F9; /* je: equal / zero */

loc_004B9688: ;
    ecx = ZX16(MEM16(edi + 4));
    eax = MEM32(esi + 0x170);
    ecx = eax + ecx * 4 + 0x10E9;
    ecx = ZX16(MEM16(ecx + 2));
    eax = MEM32(eax + 0x18);
    eax = eax + ecx;
    eax = MEM32(eax);
    if (CMP_NE(eax, ebx)) goto loc_004B9708; /* jne: not equal / not zero */

loc_004B96A8: ;
    if (CMP_EQ(MEM32(esi), 0x4B953C)) goto loc_004B96BF; /* je: equal / zero */

loc_004B96B0: ;
    eax = MEM32(esi + 0x204);
    eax = eax + esi + 0x210;
    goto loc_004B96C5;

loc_004B96BF: ;
    eax = esi + 0x17C;

loc_004B96C5: ;
    edx = ZX16(MEM16(eax + 0x3C));
    eax = eax + edx * 8 + 0x4E;
    edx = ZX16(MEM16(eax));
    ebx = ecx + edx * 4 + 4;
    ecx = ebp + -12;
    PUSH32(esp, ecx);
    ecx = MEM32(ebp + -4);
    ebx = ebx + eax;
    eax = 0; /* xor self */
    PUSH32(esp, eax);
    PUSH32(esp, eax);
    PUSH32(esp, MEM32(edi));
    MEM32(ebp + -12) = eax;
    MEM32(ebp + -8) = eax;
    PUSH32(esp, 0); sub_004BF94E(); /* call 0x004BF94E */

loc_004B96EE: ;
    eax = MEM32(ebp + -12);
    MEM32(ebx) = eax;
    ecx = MEM32(ebp + -12);
    eax = esi + 0x174;
    MEM32(eax) = MEM32(eax) + ecx;
    ecx = MEM32(ebp + -8);
    MEM32(eax + 4) = MEM32(eax + 4) + ecx + _cf; /* adc */
    ebx = 0; /* xor self */
    goto loc_004B970E;

loc_004B9708: ;
    MEM32(ebp + -12) = eax;
    MEM32(ebp + -8) = ebx;

loc_004B970E: ;
    PUSH32(esp, MEM32(edi));
    ecx = MEM32(ebp + -4);
    PUSH32(esp, 0); sub_004A5F87(); /* call 0x004A5F87 */

loc_004B9718: ;
    (void)0; /* cmp MEM32(ebp + 8), ebx - flags set for next jcc */
    MEM32(edi) = ebx;
    if (CMP_L(MEM32(ebp + 8), ebx)) goto loc_004B9884; /* jl: less (signed <) */

loc_004B9723: ;
    eax = MEM32(esi + 0x170);
    ecx = MEM32(ebp + -12);
    MEM32(eax + 0xC) = MEM32(eax + 0xC) + ecx;
    ecx = MEM32(ebp + -8);
    MEM32(eax + 0x10) = MEM32(eax + 0x10) + ecx + _cf; /* adc */
    eax = MEM32(esi + 0x170);
    MEM16(eax + 0x22) = MEM16(eax + 0x22) - 1;
    eax = MEM32(esi + 0x170);
    if (CMP_BE(MEM16(eax + 0x22), LO16(ebx))) goto loc_004B97EC; /* jbe: below or equal (unsigned <=) */

loc_004B974F: ;
    ecx = ZX16(MEM16(edi + -264));
    ebx = ZX16(MEM16(eax + ecx * 4 + 0x10EB));
    ebx = ebx + MEM32(eax + 0x18);
    edi = edi - 0x10C;
    PUSH32(esp, 0x100);
    eax = ebp + -564;
    PUSH32(esp, eax);
    PUSH32(esp, 0xFFFFFFFFu);
    eax = ebx + 0xC;
    PUSH32(esp, eax);
    PUSH32(esp, 0);
    PUSH32(esp, 0);
    PUSH32(esp, 0); sub_0047E7BE(); /* call 0x0047E7BE */

loc_004B9782: ;
    eax = ebp + -20;
    PUSH32(esp, eax);
    eax = MEM32(esi + 0x170);
    eax = ZX16(MEM16(eax + 0x20));
    PUSH32(esp, eax);
    PUSH32(esp, 0); sub_004B82F2(); /* call 0x004B82F2 */

loc_004B9796: ;
    ebx = MEM32(ebx);
    (void)0; /* test ebx, ebx - flags set for next jcc */
    ecx = MEM32(ebp + -4);
    PUSH32(esp, edi);
    PUSH32(esp, MEM32(esi + 8));
    eax = ebp + -564;
    PUSH32(esp, 0x40000000);
    if (TEST_NZ(ebx, ebx)) goto loc_004B97C5; /* jne: not equal / not zero */

loc_004B97AE: ;
    edi = edi + 8;
    PUSH32(esp, edi);
    PUSH32(esp, MEM32(ebp + -16));
    PUSH32(esp, MEM32(ebp + -20));
    PUSH32(esp, eax);
    PUSH32(esp, MEM32(esi + 0x14));
    PUSH32(esp, 2);
    PUSH32(esp, 0); sub_004BF48C(); /* call 0x004BF48C */

loc_004B97C3: ;
    goto loc_004B97DA;

loc_004B97C5: ;
    PUSH32(esp, ebx);
    PUSH32(esp, MEM32(edi + 8));
    PUSH32(esp, MEM32(ebp + -16));
    PUSH32(esp, MEM32(ebp + -20));
    PUSH32(esp, eax);
    PUSH32(esp, MEM32(esi + 0x14));
    PUSH32(esp, 2);
    PUSH32(esp, 0); sub_004BF787(); /* call 0x004BF787 */

loc_004B97DA: ;
    ebx = 0; /* xor self */
    (void)0; /* test eax, eax - flags set for next jcc */
    MEM32(ebp + 8) = eax;
    if (TEST_S(eax, eax)) goto loc_004B9884; /* jl: less (signed <) */

loc_004B97E7: ;
    goto loc_004B98F6;

loc_004B97EC: ;
    (void)0; /* cmp MEM32(esi), 0x4B953C - flags set for next jcc */
    eax = esi + 0x17C;
    if (CMP_NE(MEM32(esi), 0x4B953C)) goto loc_004B9827; /* jne: not equal / not zero */

loc_004B97FA: ;
    edx = ZX16(MEM16(eax + 0x3C));
    ecx = ZX16(MEM16(eax + 0x3A));
    ecx = ecx + edx * 8 + 0x4E;
    edx = edx + edx * 2;
    MEM32(ebp + -16) = 0x12;
    MEM32(ebp + -24) = 1;
    MEM32(ebp + 8) = 0x88264C;
    edx = edx * 4 + 0x126;
    goto loc_004B9853;

loc_004B9827: ;
    ecx = MEM32(eax);
    MEM32(ebp + -16) = ecx;
    ecx = MEM32(eax + 4);
    MEM32(ebp + -24) = ecx;
    ecx = eax + 8;
    MEM32(ebp + 8) = ecx;
    ecx = MEM32(eax + 0x88);
    edx = eax;
    eax = eax + ecx + 0x94;
    ecx = MEM32(edx + 0x8C);
    edx = MEM32(edx + 0x90);

loc_004B9853: ;
    PUSH32(esp, ebx);
    PUSH32(esp, ebx);
    ebx = esi + 0x1C;
    PUSH32(esp, ebx);
    PUSH32(esp, MEM32(esi + 8));
    ebx = 0; /* xor self */
    PUSH32(esp, 0x7530);
    PUSH32(esp, ecx);
    PUSH32(esp, eax);
    PUSH32(esp, ebx);
    PUSH32(esp, ebx);
    PUSH32(esp, edx);
    edi = ecx + eax;
    ecx = MEM32(ebp + -4);
    PUSH32(esp, edi);
    PUSH32(esp, MEM32(ebp + 8));
    PUSH32(esp, MEM32(ebp + -24));
    PUSH32(esp, MEM32(ebp + -16));
    PUSH32(esp, 0); sub_004ADC62(); /* call 0x004ADC62 */

loc_004B987D: ;
    (void)0; /* cmp eax, ebx - flags set for next jcc */
    MEM32(ebp + 8) = eax;
    if (CMP_GE(eax, ebx)) goto loc_004B98EA; /* jge: greater or equal (signed >=) */

loc_004B9884: ;
    eax = MEM32(esi + 0x170);
    if (CMP_EQ(eax, ebx)) goto loc_004B98DB; /* je: equal / zero */

loc_004B988E: ;
    SET_LO16(ecx, MEM16(eax + 0x22));
    if (CMP_BE(LO16(ecx), LO16(ebx))) goto loc_004B98B8; /* jbe: below or equal (unsigned <=) */

loc_004B9897: ;
    ecx = ZX16(LO16(ecx));
    ecx = (uint32_t)((int32_t)ecx * (int32_t)0x10C);
    edi = ecx + eax + -232;
    eax = MEM32(edi);
    if (CMP_EQ(eax, ebx)) goto loc_004B98B8; /* je: equal / zero */

loc_004B98AD: ;
    ecx = MEM32(ebp + -4);
    PUSH32(esp, eax);
    PUSH32(esp, 0); sub_004A5F87(); /* call 0x004A5F87 */

loc_004B98B6: ;
    MEM32(edi) = ebx;

loc_004B98B8: ;
    eax = MEM32(esi + 0x170);
    MEM32(eax) = ebx;
    eax = MEM32(esi + 0x170);
    if (TEST_Z(MEM8(eax + 0x16), 0x20)) goto loc_004B98D5; /* je: equal / zero */

loc_004B98CC: ;
    ecx = MEM32(ebp + -4);
    PUSH32(esp, eax);
    PUSH32(esp, 0); sub_004B88DC(); /* call 0x004B88DC */

loc_004B98D5: ;
    MEM32(esi + 0x170) = ebx;

loc_004B98DB: ;
    eax = MEM32(ebp + 8);
    MEM32(esi + 0x28) = eax;
    MEM32(esi + 0x10) = 2;
    goto loc_004B98FC;

loc_004B98EA: ;
    eax = 0; /* xor self */
    eax++;
    MEM32(esi + 0x16C) = eax;
    MEM32(esi + 0x10) = eax;

loc_004B98F6: ;
    MEM32(ebp + 8) = ebx;

loc_004B98F9: ;
    eax = MEM32(ebp + 8);

loc_004B98FC: ;
    POP32(esp, edi);
    POP32(esp, esi);
    POP32(esp, ebx);
    esp = ebp;
    POP32(esp, ebp); /* leave */
    esp += 8; return; /* ret 4 */

}

/**
 * sub_004B9903
 * Original: 0x004B9903 - 0x004B9908 (5 bytes, 2 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_004B9903(void)
{

loc_004B9903: ;
    eax = 0; /* xor self */
    esp += 24; return; /* ret 20 */

}

/**
 * sub_004B9908
 * Original: 0x004B9908 - 0x004B996F (103 bytes, 40 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_004B9908(void)
{
    int _flags = 0; /* fallback flag var */

loc_004B9908: ;
    eax = MEM32(esp + 4);
    ecx = MEM32(eax + 0x14);
    if (TEST_Z(ecx, ecx)) goto loc_004B9929; /* je: equal / zero */

loc_004B9913: ;
    if (TEST_S(ecx, ecx)) goto loc_004B9929; /* js: sign (negative) */

loc_004B9915: ;
    ecx = MEM32(eax + 0x18);
    if (TEST_Z(LO8(ecx), 0x40)) goto loc_004B992E; /* je: equal / zero */

loc_004B991D: ;
    if (TEST_S(LO8(ecx), LO8(ecx))) goto loc_004B9929; /* js: sign (negative) */

loc_004B9921: ;
    edx = MEM32(eax + 8);
    edx = edx | MEM32(eax + 0xC);
    if ((edx != 0)) goto loc_004B9932; /* jne: not equal / not zero */

loc_004B9929: ;
    eax = 0; /* xor self */

loc_004B992B: ;
    esp += 8; return; /* ret 4 */

loc_004B992E: ;
    if (TEST_S(LO8(ecx), LO8(ecx))) goto loc_004B9921; /* js: sign (negative) */

loc_004B9932: ;
    SET_LO8(edx, MEM8(eax + 0x24));
    ecx = ecx & 0xFFDFFFFFu;
    (void)0; /* cmp LO8(edx), 4 - flags set for next jcc */
    MEM32(eax + 0x18) = ecx;
    if (CMP_EQ(LO8(edx), 4)) goto loc_004B9950; /* je: equal / zero */

loc_004B9943: ;
    if (CMP_BE(LO8(edx), 4)) goto loc_004B9955; /* jbe: below or equal (unsigned <=) */

loc_004B9945: ;
    if (CMP_A(LO8(edx), 6)) goto loc_004B9955; /* ja: above (unsigned >) */

loc_004B994A: ;
    if (TEST_S(LO8(ecx), LO8(ecx))) goto loc_004B9955; /* js: sign (negative) */

loc_004B994E: ;
    goto loc_004B9929;

loc_004B9950: ;
    if (TEST_Z(LO8(ecx), 0x40)) goto loc_004B9929; /* je: equal / zero */

loc_004B9955: ;
    SET_LO16(eax, MEM16(eax + 0x22));
    if (TEST_Z(LO16(eax), LO16(eax))) goto loc_004B996A; /* je: equal / zero */

loc_004B995E: ;
    if (CMP_B(LO16(eax), 4)) goto loc_004B9929; /* jb: below (unsigned <) */

loc_004B9964: ;
    if (CMP_A(LO16(eax), 0x1000)) goto loc_004B9929; /* ja: above (unsigned >) */

loc_004B996A: ;
    eax = 0; /* xor self */
    eax++;
    goto loc_004B992B;

}

/**
 * sub_004B996F
 * Original: 0x004B996F - 0x004B99A2 (51 bytes, 19 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_004B996F(void)
{
    uint32_t ebp;
    int _flags = 0; /* fallback flag var */

loc_004B996F: ;
    PUSH32(esp, ebp);
    ebp = esp;
    esp = esp - 0x24;
    ecx = MEM32(ebp + 8);
    eax = 0; /* xor self */
    PUSH32(esp, esi);
    esi = MEM32(ebp + 0x10);
    MEM32(ebp + -12) = eax;
    MEM32(ebp + -16) = eax;
    MEM32(ebp + -20) = eax;
    MEM32(ebp + -24) = eax;
    MEM32(ebp + -28) = eax;
    MEM32(ebp + -36) = eax;
    MEM32(ebp + -32) = eax;
    eax = ZX16(MEM16(esi + 0x22));
    if (CMP_AE(ecx, eax)) { sub_004B99A2(); return; } /* jae: above or equal (unsigned >=) */

loc_004B999B: ;
    eax = 0; /* xor self */
    g_seh_ebp = ebp; sub_004B9A66(); return; /* tail jmp 0x004B9A66 */

}

/**
 * sub_004B9CE7
 * Original: 0x004B9CE7 - 0x004B9D26 (63 bytes, 28 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_004B9CE7(void)
{
    int _flags = 0; /* fallback flag var */

loc_004B9CE7: ;
    PUSH32(esp, ebx);
    PUSH32(esp, esi);
    PUSH32(esp, edi);
    edi = ecx;
    PUSH32(esp, 8);
    esi = edi + 0x1504;
    POP32(esp, ebx);

loc_004B9CF5: ;
    edx = MEM32(esi + -8);
    if (TEST_Z(edx, edx)) goto loc_004B9D1A; /* je: equal / zero */

loc_004B9CFC: ;
    eax = MEM32(esi);
    if (CMP_EQ(eax, 0xFFFFFFFFu)) goto loc_004B9D09; /* je: equal / zero */

loc_004B9D03: ;
    if (CMP_NE(eax, MEM32(esp + 0x10))) goto loc_004B9D1A; /* jne: not equal / not zero */

loc_004B9D09: ;
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, MEM32(esp + 0x14));
    ecx = edi;
    PUSH32(esp, 1);
    PUSH32(esp, MEM32(esp + 0x18));
    PUSH32(esp, MEM32(esi + 4));
    PUSH32(esp, 0); RECOMP_ICALL_SAFE(edx, _icall_esp); /* indirect call */
    }

loc_004B9D1A: ;
    esi = esi + 0x10;
    ebx--;
    if ((ebx != 0)) goto loc_004B9CF5; /* jne: not equal / not zero */

loc_004B9D20: ;
    POP32(esp, edi);
    POP32(esp, esi);
    POP32(esp, ebx);
    esp += 12; return; /* ret 8 */

}

/**
 * sub_004B9D26
 * Original: 0x004B9D26 - 0x004B9DDE (184 bytes, 66 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_004B9D26(void)
{
    uint32_t ebp;
    int _flags = 0; /* fallback flag var */

loc_004B9D26: ;
    PUSH32(esp, ebp);
    ebp = esp;
    eax = MEM32(ebp + 8);
    PUSH32(esp, ebx);
    ebx = ecx;
    eax = eax + eax * 8;
    eax = MEM32(ebx + eax * 8 + 0x13E0);
    PUSH32(esp, esi);
    ecx = 0; /* xor self */
    (void)0; /* cmp LO16(ecx), MEM16(eax + 0x20) - flags set for next jcc */
    PUSH32(esp, edi);
    esi = eax + 0x24;
    if (CMP_AE(LO16(ecx), MEM16(eax + 0x20))) goto loc_004B9DD7; /* jae: above or equal (unsigned >=) */

loc_004B9D4A: ;
    edi = MEM32(ebp + 0xC);
    edx = MEM32(edi + 0x14);

loc_004B9D50: ;
    if (CMP_EQ(MEM32(esi + 0x14), edx)) goto loc_004B9D61; /* je: equal / zero */

loc_004B9D55: ;
    esi = esi + 0x34;
    ecx++;
    if (CMP_B(LO16(ecx), MEM16(eax + 0x20))) goto loc_004B9D50; /* jb: below (unsigned <) */

loc_004B9D5F: ;
    goto loc_004B9D67;

loc_004B9D61: ;
    edx = MEM32(edi + 0x18);
    MEM32(esi + 0x18) = edx;

loc_004B9D67: ;
    if (CMP_AE(LO16(ecx), MEM16(eax + 0x20))) goto loc_004B9DD7; /* jae: above or equal (unsigned >=) */

loc_004B9D6D: ;
    ecx = MEM32(ebp + 0x10);
    edx = MEM32(ecx + 0xC);
    ecx = MEM32(esi + 0x18);
    if (TEST_Z(ecx, 0x200000)) goto loc_004B9D8E; /* je: equal / zero */

loc_004B9D7E: ;
    ecx = ecx & 0xFFDFFFFFu;
    MEM32(esi + 0x18) = ecx;
    MEM16(eax + 0x22) = MEM16(eax + 0x22) - 1;
    edx = 0; /* xor self */
    edx++;

loc_004B9D8E: ;
    if (TEST_Z(edx, edx)) goto loc_004B9DD7; /* je: equal / zero */

loc_004B9D92: ;
    edi = ebx + 0x1500;
    MEM32(ebp + 0xC) = 8;

loc_004B9D9F: ;
    eax = MEM32(edi + 4);
    if (CMP_EQ(eax, 0xFFFFFFFFu)) goto loc_004B9DAC; /* je: equal / zero */

loc_004B9DA7: ;
    if (CMP_NE(eax, MEM32(ebp + 8))) goto loc_004B9DC0; /* jne: not equal / not zero */

loc_004B9DAC: ;
    eax = MEM32(edi);
    if (TEST_Z(eax, eax)) goto loc_004B9DC0; /* je: equal / zero */

loc_004B9DB2: ;
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, MEM32(ebp + 0x10));
    ecx = ebx;
    PUSH32(esp, esi);
    PUSH32(esp, MEM32(ebp + 8));
    PUSH32(esp, MEM32(edi + 8));
    PUSH32(esp, 0); RECOMP_ICALL_SAFE(eax, _icall_esp); /* indirect call */
    }

loc_004B9DC0: ;
    edi = edi + 0x10;
    MEM32(ebp + 0xC) = MEM32(ebp + 0xC) - 1;
    if ((MEM32(ebp + 0xC) != 0)) goto loc_004B9D9F; /* jne: not equal / not zero */

loc_004B9DC8: ;
    PUSH32(esp, esi);
    PUSH32(esp, MEM32(ebp + 8));
    ecx = ebx + 0x1580;
    PUSH32(esp, 0); sub_004AEF81(); /* call 0x004AEF81 */

loc_004B9DD7: ;
    POP32(esp, edi);
    POP32(esp, esi);
    POP32(esp, ebx);
    POP32(esp, ebp);
    esp += 16; return; /* ret 12 */

}

/**
 * sub_004B9DDE
 * Original: 0x004B9DDE - 0x004B9DEC (14 bytes, 4 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_004B9DDE(void)
{

loc_004B9DDE: ;
    eax = MEM32(esp + 0xC);
    ecx = MEM32(esp + 4);
    MEM32(ecx + 0x14) = eax;
    esp += 16; return; /* ret 12 */

}

/**
 * sub_004B9DEC
 * Original: 0x004B9DEC - 0x004B9DF7 (11 bytes, 2 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_004B9DEC(void)
{
    uint32_t ebp;
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_004B9DEC: ;
    ecx = MEM32(0x75F028);
    g_seh_ebp = ebp; sub_004B83EE(); return; /* tail jmp 0x004B83EE */

}

/**
 * sub_004B9DF7
 * Original: 0x004B9DF7 - 0x004B9E06 (15 bytes, 5 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_004B9DF7(void)
{
    uint32_t ebp;

loc_004B9DF7: ;
    PUSH32(esp, ebp);
    ebp = esp;
    ecx = MEM32(0x75F028);
    POP32(esp, ebp);
    g_seh_ebp = ebp; sub_004B84D3(); return; /* tail jmp 0x004B84D3 */

}

/**
 * sub_004B9E06
 * Original: 0x004B9E06 - 0x004B9E15 (15 bytes, 5 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_004B9E06(void)
{
    uint32_t ebp;

loc_004B9E06: ;
    PUSH32(esp, ebp);
    ebp = esp;
    ecx = MEM32(0x75F028);
    POP32(esp, ebp);
    g_seh_ebp = ebp; sub_004B86B2(); return; /* tail jmp 0x004B86B2 */

}

/**
 * sub_004B9E15
 * Original: 0x004B9E15 - 0x004B9E20 (11 bytes, 2 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_004B9E15(void)
{
    uint32_t ebp;
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_004B9E15: ;
    ecx = MEM32(0x75F028);
    g_seh_ebp = ebp; sub_004B87C6(); return; /* tail jmp 0x004B87C6 */

}

/**
 * sub_004B9E20
 * Original: 0x004B9E20 - 0x004B9E4A (42 bytes, 14 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_004B9E20(void)
{
    uint32_t ebp;

loc_004B9E20: ;
    PUSH32(esp, ebp);
    ebp = esp;
    PUSH32(esp, MEM32(ebp + 0x24));
    ecx = MEM32(0x75F028);
    PUSH32(esp, MEM32(ebp + 0x20));
    PUSH32(esp, MEM32(ebp + 0x1C));
    PUSH32(esp, MEM32(ebp + 0x18));
    PUSH32(esp, MEM32(ebp + 0x14));
    PUSH32(esp, MEM32(ebp + 0x10));
    PUSH32(esp, MEM32(ebp + 0xC));
    PUSH32(esp, MEM32(ebp + 8));
    PUSH32(esp, 0); sub_004B87E2(); /* call 0x004B87E2 */

loc_004B9E46: ;
    POP32(esp, ebp);
    esp += 36; return; /* ret 32 */

}

/**
 * sub_004B9E4A
 * Original: 0x004B9E4A - 0x004B9E55 (11 bytes, 2 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_004B9E4A(void)
{
    uint32_t ebp;
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_004B9E4A: ;
    ecx = MEM32(0x75F028);
    g_seh_ebp = ebp; sub_004B88DC(); return; /* tail jmp 0x004B88DC */

}

/**
 * sub_004B9E55
 * Original: 0x004B9E55 - 0x004B9E64 (15 bytes, 5 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_004B9E55(void)
{
    uint32_t ebp;

loc_004B9E55: ;
    PUSH32(esp, ebp);
    ebp = esp;
    ecx = MEM32(0x75F028);
    POP32(esp, ebp);
    g_seh_ebp = ebp; sub_004B8916(); return; /* tail jmp 0x004B8916 */

}

/**
 * sub_004B9E64
 * Original: 0x004B9E64 - 0x004B9E6F (11 bytes, 2 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_004B9E64(void)
{
    uint32_t ebp;
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_004B9E64: ;
    ecx = MEM32(0x75F028);
    g_seh_ebp = ebp; sub_004B8DA4(); return; /* tail jmp 0x004B8DA4 */

}

/**
 * sub_004B9E6F
 * Original: 0x004B9E6F - 0x004B9ECC (93 bytes, 38 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_004B9E6F(void)
{
    int _flags = 0; /* fallback flag var */

loc_004B9E6F: ;
    PUSH32(esp, ebx);
    PUSH32(esp, esi);
    esi = MEM32(esp + 0x10);
    eax = MEM32(esi);
    PUSH32(esp, edi);
    edi = 0; /* xor self */
    (void)0; /* cmp eax, edi - flags set for next jcc */
    ebx = ecx;
    if (CMP_EQ(eax, edi)) goto loc_004B9E9E; /* je: equal / zero */

loc_004B9E80: ;
    PUSH32(esp, eax);
    PUSH32(esp, 0); sub_004A5F87(); /* call 0x004A5F87 */

loc_004B9E86: ;
    MEM32(esi) = edi;
    goto loc_004B9E9E;

loc_004B9E8A: ;
    eax = MEM32(esi + 4);
    ecx = MEM32(eax + 0x18);
    MEM32(esi + 4) = ecx;
    PUSH32(esp, eax);
    ecx = ebx;
    MEM32(eax + 0x18) = edi;
    PUSH32(esp, 0); sub_004B9362(); /* call 0x004B9362 */

loc_004B9E9E: ;
    if (CMP_NE(MEM32(esi + 4), edi)) goto loc_004B9E8A; /* jne: not equal / not zero */

loc_004B9EA3: ;
    eax = MEM32(esi + 8);
    if (CMP_EQ(eax, edi)) goto loc_004B9EB9; /* je: equal / zero */

loc_004B9EAA: ;
    PUSH32(esp, eax);
    PUSH32(esp, MEM32(esp + 0x14));
    ecx = ebx;
    PUSH32(esp, 0); sub_0049CB9E(); /* call 0x0049CB9E */

loc_004B9EB6: ;
    MEM32(esi + 8) = edi;

loc_004B9EB9: ;
    PUSH32(esp, 0x8092);
    PUSH32(esp, esi);
    ecx = ebx;
    PUSH32(esp, 0); sub_004B53C7(); /* call 0x004B53C7 */

loc_004B9EC6: ;
    POP32(esp, edi);
    POP32(esp, esi);
    POP32(esp, ebx);
    esp += 12; return; /* ret 8 */

}

/**
 * sub_004B9ECC
 * Original: 0x004B9ECC - 0x004B9ED1 (5 bytes, 1 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_004B9ECC(void)
{
    uint32_t ebp;
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_004B9ECC: ;
    g_seh_ebp = ebp; sub_004B9362(); return; /* tail jmp 0x004B9362 */

}

/**
 * sub_004B9ED1
 * Original: 0x004B9ED1 - 0x004B9ED6 (5 bytes, 1 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_004B9ED1(void)
{
    uint32_t ebp;
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_004B9ED1: ;
    g_seh_ebp = ebp; sub_004B953C(); return; /* tail jmp 0x004B953C */

}

/**
 * sub_004B9ED6
 * Original: 0x004B9ED6 - 0x004B9EF1 (27 bytes, 12 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_004B9ED6(void)
{
    uint32_t ebp;
    int _flags = 0; /* fallback flag var */
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_004B9ED6: ;
    eax = MEM32(esp + 8);
    PUSH32(esp, ebx);
    ebx = 0; /* xor self */
    PUSH32(esp, esi);
    esi = MEM32(esp + 0xC);
    MEM32(eax) = ebx;
    eax = MEM32(esi + 0x1C);
    if (CMP_NE(eax, MEM32(ecx + 4))) { sub_004B9EF1(); return; } /* jne: not equal / not zero */

loc_004B9EEC: ;
    eax = 0; /* xor self */
    eax++;
    g_seh_ebp = ebp; sub_004B9F26(); return; /* tail jmp 0x004B9F26 */

}

/**
 * sub_004B9F36
 * Original: 0x004B9F36 - 0x004B9FA9 (115 bytes, 48 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_004B9F36(void)
{
    uint32_t ebp;
    int _flags = 0; /* fallback flag var */

loc_004B9F36: ;
    PUSH32(esp, ebp);
    ebp = esp;
    PUSH32(esp, ebx);
    PUSH32(esp, esi);
    esi = MEM32(ebp + 0x28);
    PUSH32(esp, edi);
    PUSH32(esp, MEM32(ebp + 0x2C));
    ebx = MEM32(ebp + 0x10);
    eax = ebp + 0x2C;
    PUSH32(esp, eax);
    PUSH32(esp, esi);
    PUSH32(esp, MEM32(ebp + 0x24));
    edi = ecx;
    PUSH32(esp, MEM32(ebp + 0x20));
    PUSH32(esp, 0x4B9362);
    PUSH32(esp, MEM32(ebp + 0x1C));
    PUSH32(esp, MEM32(ebp + 0x18));
    PUSH32(esp, MEM32(ebp + 0x14));
    PUSH32(esp, ebx);
    PUSH32(esp, 0);
    PUSH32(esp, MEM32(ebp + 8));
    PUSH32(esp, 0); sub_004B928D(); /* call 0x004B928D */

loc_004B9F6B: ;
    (void)0; /* test eax, eax - flags set for next jcc */
    MEM32(ebp + 0x2C) = eax;
    if (TEST_S(eax, eax)) goto loc_004B9F9F; /* jl: less (signed <) */

loc_004B9F72: ;
    eax = MEM32(esi);
    ecx = MEM32(ebp + 0xC);
    MEM32(eax) = ecx;
    eax = MEM32(esi);
    ebx = ebx + 0xFFFFFFE0u;
    MEM32(eax + 4) = ebx;
    ecx = MEM32(esi);
    eax = edi + 0x14C8;
    edx = MEM32(eax);
    MEM32(ecx + 8) = edx;
    MEM32(eax) = MEM32(eax) + 1;
    eax = MEM32(esi);
    PUSH32(esp, 0);
    eax = eax + 0xC;
    PUSH32(esp, eax);
    ecx = edi;
    PUSH32(esp, 0); sub_0049CFA8(); /* call 0x0049CFA8 */

loc_004B9F9F: ;
    eax = MEM32(ebp + 0x2C);
    POP32(esp, edi);
    POP32(esp, esi);
    POP32(esp, ebx);
    POP32(esp, ebp);
    esp += 44; return; /* ret 40 */

}

/**
 * sub_004B9FA9
 * Original: 0x004B9FA9 - 0x004BA0A0 (247 bytes, 91 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_004B9FA9(void)
{
    uint32_t ebp;
    int _flags = 0; /* fallback flag var */

loc_004B9FA9: ;
    PUSH32(esp, ebp);
    ebp = esp;
    esp = esp - 0x1C;
    PUSH32(esp, esi);
    esi = MEM32(ebp + 8);
    eax = MEM32(esi + 0x10);
    eax--;
    PUSH32(esp, edi);
    MEM32(ebp + -4) = ecx;
    if ((eax == 0)) goto loc_004B9FCC; /* je: equal / zero */

loc_004B9FBD: ;
    eax--;
    if ((eax != 0)) goto loc_004BA097; /* jne: not equal / not zero */

loc_004B9FC4: ;
    eax = MEM32(esi + 0x28);
    goto loc_004BA09A;

loc_004B9FCC: ;
    ecx = MEM32(ebp + -4);
    edi = esi + 0x1C;
    PUSH32(esp, edi);
    PUSH32(esp, 0); sub_004A5F72(); /* call 0x004A5F72 */

loc_004B9FD8: ;
    if (TEST_Z(eax, eax)) goto loc_004BA09A; /* je: equal / zero */

loc_004B9FE0: ;
    PUSH32(esp, ebx);
    if (TEST_S(eax, eax)) goto loc_004BA06A; /* jl: less (signed <) */

loc_004B9FE7: ;
    ecx = MEM32(ebp + -4);
    PUSH32(esp, 0);
    eax = ebp + -12;
    PUSH32(esp, eax);
    eax = ebp + -20;
    PUSH32(esp, eax);
    eax = ebp + -28;
    PUSH32(esp, eax);
    eax = ebp + 8;
    PUSH32(esp, eax);
    eax = ebp + -8;
    PUSH32(esp, eax);
    PUSH32(esp, edi);
    PUSH32(esp, 0); sub_004AD5B6(); /* call 0x004AD5B6 */

loc_004BA006: ;
    if (TEST_S(eax, eax)) goto loc_004BA06A; /* jl: less (signed <) */

loc_004BA00A: ;
    ecx = MEM32(ebp + -8);
    if (TEST_Z(ecx, ecx)) goto loc_004BA065; /* je: equal / zero */

loc_004BA011: ;
    if (CMP_NE(MEM32(ebp + -12), 0xC8)) goto loc_004BA065; /* jne: not equal / not zero */

loc_004BA01A: ;
    if (CMP_B(MEM32(ebp + 8), 0x58)) goto loc_004BA065; /* jb: below (unsigned <) */

loc_004BA020: ;
    (void)0; /* cmp MEM32(ecx), 0x68 - flags set for next jcc */
    ebx = ecx;
    if (CMP_NE(MEM32(ecx), 0x68)) goto loc_004BA065; /* jne: not equal / not zero */

loc_004BA027: ;
    eax = MEM32(ecx + 0x20);
    if (TEST_S(eax, eax)) goto loc_004BA06A; /* jl: less (signed <) */

loc_004BA02E: ;
    edi = ecx + 0x24;
    ecx = MEM32(ebp + -4);
    PUSH32(esp, edi);
    PUSH32(esp, 0); sub_004B9908(); /* call 0x004B9908 */

loc_004BA03A: ;
    if (TEST_Z(eax, eax)) goto loc_004BA065; /* je: equal / zero */

loc_004BA03E: ;
    eax = 0; /* xor self */
    if (CMP_BE(MEM16(ebx + 0x46), LO16(eax))) goto loc_004BA077; /* jbe: below or equal (unsigned <=) */

loc_004BA046: ;
    ecx = MEM32(ebp + -4);
    eax = esi + 0x174;
    PUSH32(esp, eax);
    eax = MEM32(ebp + 8);
    PUSH32(esp, edi);
    ebx = ebx + 0x58;
    PUSH32(esp, ebx);
    eax = eax + 0xFFFFFFA8u;
    PUSH32(esp, eax);
    PUSH32(esp, 0); sub_004B996F(); /* call 0x004B996F */

loc_004BA061: ;
    if (TEST_NZ(eax, eax)) goto loc_004BA083; /* jne: not equal / not zero */

loc_004BA065: ;
    eax = 0x8015000Au;

loc_004BA06A: ;
    MEM32(esi + 0x28) = eax;
    MEM32(esi + 0x10) = 2;
    POP32(esp, ebx);
    goto loc_004BA09A;

loc_004BA077: ;
    MEM32(esi + 0x174) = eax;
    MEM32(esi + 0x178) = eax;

loc_004BA083: ;
    ecx = MEM32(ebp + -4);
    PUSH32(esp, esi);
    PUSH32(esp, edi);
    PUSH32(esp, MEM32(esi + 0x14));
    PUSH32(esp, 0); sub_004B9D26(); /* call 0x004B9D26 */

loc_004BA090: ;
    eax = 0x1500F0;
    goto loc_004BA06A;

loc_004BA097: ;
    eax = MEM32(ebp + 8);

loc_004BA09A: ;
    POP32(esp, edi);
    POP32(esp, esi);
    esp = ebp;
    POP32(esp, ebp); /* leave */
    esp += 8; return; /* ret 4 */

}

/**
 * sub_004BA0A0
 * Original: 0x004BA0A0 - 0x004BA0D0 (48 bytes, 18 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_004BA0A0(void)
{
    uint32_t ebp;
    int _flags = 0; /* fallback flag var */

loc_004BA0A0: ;
    PUSH32(esp, ebp);
    ebp = esp;
    esp = esp - 0x20;
    MEM32(ebp + -16) = MEM32(ebp + -16) & 0;
    PUSH32(esp, edi);
    eax = ebp + -32;
    edi = ecx;
    PUSH32(esp, eax);
    MEM32(ebp + -4) = edi;
    PUSH32(esp, 0); sub_0042B5F7(); /* call 0x0042B5F7 */

loc_004BA0B9: ;
    eax = ebp + -32;
    PUSH32(esp, eax);
    PUSH32(esp, MEM32(ebp + 0xC));
    PUSH32(esp, 0); sub_004B8339(); /* call 0x004B8339 */

loc_004BA0C5: ;
    if (TEST_Z(eax, eax)) { sub_004BA0D0(); return; } /* je: equal / zero */

loc_004BA0C9: ;
    eax = 0; /* xor self */
    g_seh_ebp = ebp; sub_004BA237(); return; /* tail jmp 0x004BA237 */

}

/**
 * sub_004BA246
 * Original: 0x004BA246 - 0x004BA31F (217 bytes, 76 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_004BA246(void)
{
    uint32_t ebp;
    int _flags = 0; /* fallback flag var */
    int _cf = 0; /* carry flag */

loc_004BA246: ;
    PUSH32(esp, ebp);
    ebp = esp;
    esp = esp - 0x14;
    PUSH32(esp, ebx);
    ebx = MEM32(ebp + 8);
    PUSH32(esp, esi);
    esi = 0; /* xor self */
    PUSH32(esp, edi);
    edi = MEM32(ebp + 0x18);
    MEM32(edi) = esi;
    MEM32(edi + 4) = esi;
    if (CMP_BE(MEM16(ebx + 0x22), LO16(esi))) goto loc_004BA318; /* jbe: below or equal (unsigned <=) */

loc_004BA266: ;
    PUSH32(esp, 0x10);
    eax = ebp + -20;
    PUSH32(esp, eax);
    PUSH32(esp, 0); sub_0048D66F(); /* call 0x0048D66F */

loc_004BA271: ;
    (void)0; /* cmp MEM16(ebx + 0x22), LO16(esi) - flags set for next jcc */
    MEM32(ebp + 8) = esi;
    if (CMP_BE(MEM16(ebx + 0x22), LO16(esi))) goto loc_004BA318; /* jbe: below or equal (unsigned <=) */

loc_004BA27E: ;
    eax = MEM32(ebp + 0x14);
    eax = eax >> 8;
    MEM32(ebp + -4) = eax;
    eax = ebx + 0x28;
    MEM32(ebp + 0x18) = eax;

loc_004BA28D: ;
    eax = MEM32(ebp + 0x18);
    eax = ZX16(MEM16(eax));
    eax = ebx + eax * 4 + 0x10E9;
    esi = ZX16(MEM16(eax + 2));
    eax = ZX8(MEM8(eax));
    PUSH32(esp, eax);
    eax = ZX8(MEM8(ebp + -5));
    PUSH32(esp, eax);
    eax = ZX8(MEM8(ebp + -6));
    PUSH32(esp, eax);
    eax = ZX8(MEM8(ebp + -7));
    PUSH32(esp, eax);
    eax = ZX8(MEM8(ebp + -8));
    PUSH32(esp, eax);
    eax = ZX8(MEM8(ebp + -9));
    PUSH32(esp, eax);
    eax = ZX8(MEM8(ebp + -10));
    PUSH32(esp, eax);
    eax = ZX8(MEM8(ebp + -11));
    PUSH32(esp, eax);
    eax = ZX8(MEM8(ebp + -12));
    PUSH32(esp, eax);
    eax = ZX16(MEM16(ebp + -14));
    esi = esi + MEM32(ebx + 0x18);
    PUSH32(esp, eax);
    eax = ZX16(MEM16(ebp + -16));
    PUSH32(esp, eax);
    PUSH32(esp, MEM32(ebp + -20));
    eax = ZX8(MEM8(ebp + -4));
    PUSH32(esp, MEM32(ebp + 0x10));
    PUSH32(esp, MEM32(ebp + 0xC));
    PUSH32(esp, eax);
    PUSH32(esp, 0x882600);
    eax = esi + 0xC;
    PUSH32(esp, 0x44);
    PUSH32(esp, eax);
    PUSH32(esp, 0); sub_004B4554(); /* call 0x004B4554 */

loc_004BA2F5: ;
    eax = MEM32(esi);
    esp = esp + 0x48;
    MEM32(edi) = MEM32(edi) + eax;
    MEM32(edi + 4) = MEM32(edi + 4) + 0 + _cf; /* adc */
    MEM32(ebp + 0x18) = MEM32(ebp + 0x18) + 0x10C;
    MEM32(ebp + 8) = MEM32(ebp + 8) + 1;
    SET_LO16(eax, MEM16(ebp + 8));
    if (CMP_B(LO16(eax), MEM16(ebx + 0x22))) goto loc_004BA28D; /* jb: below (unsigned <) */

loc_004BA318: ;
    POP32(esp, edi);
    POP32(esp, esi);
    POP32(esp, ebx);
    esp = ebp;
    POP32(esp, ebp); /* leave */
    esp += 24; return; /* ret 20 */

}

/**
 * sub_004BA31F
 * Original: 0x004BA31F - 0x004BA336 (23 bytes, 8 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_004BA31F(void)
{
    uint32_t ebp;
    int _flags = 0; /* fallback flag var */

loc_004BA31F: ;
    PUSH32(esp, ebp);
    ebp = esp;
    esp = esp - 0x24;
    (void)0; /* test ecx, ecx - flags set for next jcc */
    MEM32(ebp + -8) = ecx;
    if (TEST_NZ(ecx, ecx)) { sub_004BA336(); return; } /* jne: not equal / not zero */

loc_004BA32C: ;
    eax = 0x80150005u;
    g_seh_ebp = ebp; sub_004BA434(); return; /* tail jmp 0x004BA434 */

}

/**
 * sub_004BA438
 * Original: 0x004BA438 - 0x004BA451 (25 bytes, 9 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_004BA438(void)
{
    uint32_t ebp;
    int _flags = 0; /* fallback flag var */

loc_004BA438: ;
    PUSH32(esp, ebp);
    ebp = esp;
    esp = esp - 0xC;
    edx = 0; /* xor self */
    (void)0; /* cmp ecx, edx - flags set for next jcc */
    MEM32(ebp + -4) = ecx;
    if (CMP_NE(ecx, edx)) { sub_004BA451(); return; } /* jne: not equal / not zero */

loc_004BA447: ;
    eax = 0x80150005u;
    g_seh_ebp = ebp; sub_004BA576(); return; /* tail jmp 0x004BA576 */

}

/**
 * sub_004BA57A
 * Original: 0x004BA57A - 0x004BA591 (23 bytes, 9 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_004BA57A(void)
{
    uint32_t ebp;
    int _flags = 0; /* fallback flag var */

loc_004BA57A: ;
    PUSH32(esp, ebp);
    ebp = esp;
    esp = esp - 0x18;
    PUSH32(esp, ebx);
    ebx = ecx;
    if (TEST_NZ(ebx, ebx)) { sub_004BA591(); return; } /* jne: not equal / not zero */

loc_004BA587: ;
    eax = 0x80150005u;
    g_seh_ebp = ebp; sub_004BA727(); return; /* tail jmp 0x004BA727 */

}

/**
 * sub_004BA72C
 * Original: 0x004BA72C - 0x004BA74D (33 bytes, 13 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_004BA72C(void)
{
    uint32_t ebp;
    int _flags = 0; /* fallback flag var */

loc_004BA72C: ;
    PUSH32(esp, ebp);
    ebp = esp;
    esp = esp - 0x230;
    PUSH32(esp, ebx);
    PUSH32(esp, esi);
    PUSH32(esp, edi);
    esi = ecx;
    edi = 0; /* xor self */
    (void)0; /* cmp esi, edi - flags set for next jcc */
    MEM32(ebp + -12) = esi;
    if (CMP_NE(esi, edi)) { sub_004BA74D(); return; } /* jne: not equal / not zero */

loc_004BA743: ;
    eax = 0x80150005u;
    g_seh_ebp = ebp; sub_004BAA12(); return; /* tail jmp 0x004BAA12 */

}

/**
 * sub_004BAA19
 * Original: 0x004BAA19 - 0x004BAA3B (34 bytes, 16 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_004BAA19(void)
{
    uint32_t ebp;
    int _flags = 0; /* fallback flag var */

loc_004BAA19: ;
    PUSH32(esp, ebp);
    ebp = esp;
    esp = esp - 0x10;
    PUSH32(esp, ebx);
    PUSH32(esp, esi);
    esi = MEM32(ebp + 0x24);
    ebx = 0; /* xor self */
    (void)0; /* cmp esi, ebx - flags set for next jcc */
    PUSH32(esp, edi);
    edi = ecx;
    MEM32(ebp + -8) = edi;
    MEM32(ebp + -16) = ebx;
    MEM32(ebp + -12) = ebx;
    if (CMP_EQ(esi, ebx)) { sub_004BAA3B(); return; } /* je: equal / zero */

loc_004BAA36: ;
    MEM32(ebp + -4) = esi;
    g_seh_ebp = ebp; sub_004BAA3E(); return; /* tail jmp 0x004BAA3E */

}

/**
 * sub_004BAB19
 * Original: 0x004BAB19 - 0x004BABF1 (216 bytes, 83 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_004BAB19(void)
{
    uint32_t ebp;
    int _flags = 0; /* fallback flag var */

loc_004BAB19: ;
    PUSH32(esp, ebp);
    ebp = esp;
    PUSH32(esp, ecx);
    eax = MEM32(ebp + 0x24);
    MEM32(eax) = MEM32(eax) & 0;
    PUSH32(esp, ebx);
    PUSH32(esp, esi);
    esi = MEM32(ebp + 0xC);
    PUSH32(esp, edi);
    edi = ZX16(MEM16(ebp + 0x14));
    MEM32(ebp + -4) = MEM32(ebp + -4) & 0;
    eax = ebp + 0xC;
    PUSH32(esp, eax);
    eax = ebp + 0x20;
    PUSH32(esp, eax);
    eax = ebp + -4;
    PUSH32(esp, eax);
    PUSH32(esp, MEM32(ebp + 0x20));
    edi = edi + 0x158;
    PUSH32(esp, 0x4B9FA9);
    PUSH32(esp, esi);
    PUSH32(esp, edi);
    PUSH32(esp, 0x34);
    PUSH32(esp, 0xF);
    PUSH32(esp, MEM32(ebp + 8));
    ebx = ecx;
    PUSH32(esp, 0); sub_004B9F36(); /* call 0x004B9F36 */

loc_004BAB5B: ;
    (void)0; /* test eax, eax - flags set for next jcc */
    MEM32(ebp + 0x14) = eax;
    if (TEST_S(eax, eax)) goto loc_004BABD8; /* jl: less (signed <) */

loc_004BAB62: ;
    eax = MEM32(ebp + 0x20);
    ecx = esi + esi * 8;
    edx = MEM32(ebx + ecx * 8 + 0x13A8);
    esi = MEM32(ebp + -4);
    MEM32(eax + 0x20) = edx;
    ecx = MEM32(ebx + ecx * 8 + 0x13AC);
    MEM32(eax + 0x24) = ecx;
    ecx = MEM32(ebp + 0x10);
    PUSH32(esp, 0);
    MEM32(eax + 0x28) = ecx;
    ecx = MEM32(ebp + 0x18);
    PUSH32(esp, 0);
    MEM32(eax + 0x2C) = ecx;
    ecx = MEM32(ebp + 0x1C);
    MEM32(eax + 0x30) = ecx;
    ecx = esi + 0x1C;
    PUSH32(esp, ecx);
    PUSH32(esp, MEM32(esi + 8));
    ecx = ebx;
    PUSH32(esp, 0x7530);
    PUSH32(esp, 0x34);
    PUSH32(esp, eax);
    PUSH32(esp, 0);
    PUSH32(esp, 0);
    PUSH32(esp, edi);
    PUSH32(esp, MEM32(ebp + 0xC));
    PUSH32(esp, 0x88264C);
    PUSH32(esp, 2);
    PUSH32(esp, 0x12);
    PUSH32(esp, 0); sub_004ADC62(); /* call 0x004ADC62 */

loc_004BABBC: ;
    (void)0; /* test eax, eax - flags set for next jcc */
    MEM32(ebp + 0x14) = eax;
    if (TEST_S(eax, eax)) goto loc_004BABDB; /* jl: less (signed <) */

loc_004BABC3: ;
    eax = 0; /* xor self */
    eax++;
    MEM32(esi + 0x16C) = eax;
    MEM32(esi + 0x10) = eax;
    eax = MEM32(ebp + 0x24);
    MEM32(eax) = esi;
    esi = 0; /* xor self */
    goto loc_004BABDB;

loc_004BABD8: ;
    esi = MEM32(ebp + -4);

loc_004BABDB: ;
    if (TEST_Z(esi, esi)) goto loc_004BABE7; /* je: equal / zero */

loc_004BABDF: ;
    PUSH32(esp, esi);
    ecx = ebx;
    PUSH32(esp, 0); sub_004B9362(); /* call 0x004B9362 */

loc_004BABE7: ;
    eax = MEM32(ebp + 0x14);
    POP32(esp, edi);
    POP32(esp, esi);
    POP32(esp, ebx);
    esp = ebp;
    POP32(esp, ebp); /* leave */
    esp += 36; return; /* ret 32 */

}

/**
 * sub_004BABF1
 * Original: 0x004BABF1 - 0x004BB056 (1125 bytes, 357 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_004BABF1(void)
{
    uint32_t ebp;
    int _flags = 0; /* fallback flag var */

loc_004BABF1: ;
    PUSH32(esp, ebp);
    ebp = esp;
    esp = esp - 0x42C;
    PUSH32(esp, ebx);
    PUSH32(esp, esi);
    esi = MEM32(ebp + 8);
    eax = MEM32(esi + 0x10);
    eax--;
    ebx = ecx;
    PUSH32(esp, edi);
    MEM32(ebp + -12) = ebx;
    if ((eax == 0)) goto loc_004BAC1A; /* je: equal / zero */

loc_004BAC0B: ;
    eax--;
    if ((eax != 0)) goto loc_004BB04C; /* jne: not equal / not zero */

loc_004BAC12: ;
    eax = MEM32(esi + 0x28);
    goto loc_004BB04F;

loc_004BAC1A: ;
    edi = esi + 0x1C;
    PUSH32(esp, edi);
    ecx = ebx;
    PUSH32(esp, 0); sub_004A5F72(); /* call 0x004A5F72 */

loc_004BAC25: ;
    if (TEST_Z(eax, eax)) goto loc_004BB04F; /* je: equal / zero */

loc_004BAC2D: ;
    if (TEST_S(eax, eax)) goto loc_004BB040; /* jl: less (signed <) */

loc_004BAC33: ;
    PUSH32(esp, 0);
    eax = ebp + -44;
    PUSH32(esp, eax);
    eax = ebp + -60;
    PUSH32(esp, eax);
    eax = ebp + -68;
    PUSH32(esp, eax);
    eax = ebp + -32;
    PUSH32(esp, eax);
    eax = ebp + -40;
    PUSH32(esp, eax);
    PUSH32(esp, edi);
    ecx = ebx;
    PUSH32(esp, 0); sub_004AD5B6(); /* call 0x004AD5B6 */

loc_004BAC51: ;
    if (TEST_S(eax, eax)) goto loc_004BB040; /* jl: less (signed <) */

loc_004BAC59: ;
    ecx = MEM32(ebp + -40);
    if (TEST_Z(ecx, ecx)) goto loc_004BB036; /* je: equal / zero */

loc_004BAC64: ;
    if (CMP_NE(MEM32(ebp + -44), 0xC8)) goto loc_004BB036; /* jne: not equal / not zero */

loc_004BAC71: ;
    if (CMP_B(MEM32(ebp + -32), 0x26)) goto loc_004BB036; /* jb: below (unsigned <) */

loc_004BAC7B: ;
    (void)0; /* cmp MEM32(ecx), 0x66 - flags set for next jcc */
    MEM32(ebp + -20) = ecx;
    if (CMP_NE(MEM32(ecx), 0x66)) goto loc_004BB036; /* jne: not equal / not zero */

loc_004BAC87: ;
    eax = MEM32(ecx + 0x20);
    if (TEST_S(eax, eax)) goto loc_004BB040; /* jl: less (signed <) */

loc_004BAC92: ;
    eax = ecx + 0x24;
    MEM32(ebp + -24) = eax;
    eax = ZX16(MEM16(eax));
    eax = (uint32_t)((int32_t)eax * (int32_t)0x34);
    eax = eax + 0x26;
    if (CMP_B(MEM32(ebp + -32), eax)) goto loc_004BB036; /* jb: below (unsigned <) */

loc_004BACAA: ;
    PUSH32(esp, 0x7D);
    POP32(esp, ecx);
    eax = 0; /* xor self */
    PUSH32(esp, 0x7D);
    edi = ebp + -568;
    { uint32_t _i; for (_i = 0; _i < ecx; _i++) MEM32(edi + _i*4) = eax; }
    edi += ecx * 4; ecx = 0; /* rep stosd */
    POP32(esp, ecx);
    edi = ebp + -1068;
    { uint32_t _i; for (_i = 0; _i < ecx; _i++) MEM32(edi + _i*4) = eax; }
    edi += ecx * 4; ecx = 0; /* rep stosd */
    eax = ebp + -52;
    PUSH32(esp, eax);
    PUSH32(esp, 0); sub_0042B5F7(); /* call 0x0042B5F7 */

loc_004BACCB: ;
    eax = MEM32(esi + 0x14);
    MEM32(ebp + -4) = MEM32(ebp + -4) & 0;
    eax = eax + eax * 8;
    ebx = MEM32(ebx + eax * 8 + 0x13E0);
    eax = MEM32(ebp + -20);
    eax = eax + 0x26;
    MEM32(ebp + -20) = eax;
    MEM32(ebp + -8) = eax;
    eax = MEM32(ebp + -24);
    if (CMP_BE(MEM16(eax), 0)) goto loc_004BADBA; /* jbe: below or equal (unsigned <=) */

loc_004BACF5: ;
    PUSH32(esp, MEM32(ebp + -8));
    ecx = MEM32(ebp + -12);
    PUSH32(esp, 0); sub_004B9908(); /* call 0x004B9908 */

loc_004BAD00: ;
    if (TEST_Z(eax, eax)) goto loc_004BB036; /* je: equal / zero */

loc_004BAD08: ;
    eax = ebp + -52;
    PUSH32(esp, eax);
    PUSH32(esp, MEM32(ebp + -8));
    PUSH32(esp, 0); sub_004B8339(); /* call 0x004B8339 */

loc_004BAD14: ;
    if (TEST_NZ(eax, eax)) goto loc_004BADA3; /* jne: not equal / not zero */

loc_004BAD1C: ;
    SET_LO16(edi, MEM16(ebx + 0x20));
    ecx = 0; /* xor self */
    if (CMP_BE(LO16(edi) & LO16(edi), 0)) goto loc_004BAD4E; /* jbe: below or equal (unsigned <=) */

loc_004BAD27: ;
    eax = MEM32(ebp + -8);
    edx = MEM32(eax + 0x14);
    eax = ebx + 0x38;

loc_004BAD30: ;
    if (CMP_EQ(MEM32(eax), edx)) goto loc_004BAD40; /* je: equal / zero */

loc_004BAD34: ;
    eax = eax + 0x34;
    ecx++;
    if (CMP_B(LO16(ecx), MEM16(ebx + 0x20))) goto loc_004BAD30; /* jb: below (unsigned <) */

loc_004BAD3E: ;
    goto loc_004BAD4E;

loc_004BAD40: ;
    eax = ZX16(LO16(ecx));
    MEM32(ebp + eax * 4 + -568) = 1;

loc_004BAD4E: ;
    if (CMP_B(LO16(ecx), LO16(edi))) goto loc_004BADA3; /* jb: below (unsigned <) */

loc_004BAD53: ;
    eax = ZX16(MEM16(ebp + -4));
    MEM32(ebp + eax * 4 + -1068) = 1;
    eax = MEM32(ebx + 0xC);
    ecx = 0; /* xor self */
    if (CMP_BE(eax & eax, 0)) goto loc_004BADA3; /* jbe: below or equal (unsigned <=) */

loc_004BAD6B: ;
    edx = MEM32(ebp + -8);
    edi = MEM32(edx + 0x14);
    edx = ebx + 0x10;

loc_004BAD74: ;
    if (CMP_EQ(MEM32(edx), edi)) goto loc_004BAD83; /* je: equal / zero */

loc_004BAD78: ;
    ecx++;
    edx = edx + 4;
    if (CMP_B(ecx, MEM32(ebx + 0xC))) goto loc_004BAD74; /* jb: below (unsigned <) */

loc_004BAD81: ;
    goto loc_004BADA3;

loc_004BAD83: ;
    eax--;
    (void)0; /* cmp ecx, eax - flags set for next jcc */
    MEM32(ebx + 0xC) = eax;
    if (CMP_AE(ecx, eax)) goto loc_004BADA3; /* jae: above or equal (unsigned >=) */

loc_004BAD8B: ;
    eax = eax - ecx;
    eax = eax << 2;
    PUSH32(esp, eax);
    eax = ebx + ecx * 4 + 0x14;
    PUSH32(esp, eax);
    eax = ebx + ecx * 4 + 0x10;
    PUSH32(esp, eax);
    PUSH32(esp, 0); sub_0046E670(); /* call 0x0046E670 */

loc_004BADA0: ;
    esp = esp + 0xC;

loc_004BADA3: ;
    MEM32(ebp + -8) = MEM32(ebp + -8) + 0x34;
    MEM32(ebp + -4) = MEM32(ebp + -4) + 1;
    eax = MEM32(ebp + -24);
    SET_LO16(ecx, MEM16(ebp + -4));
    if (CMP_B(LO16(ecx), MEM16(eax))) goto loc_004BACF5; /* jb: below (unsigned <) */

loc_004BADBA: ;
    MEM32(ebp + -4) = MEM32(ebp + -4) & 0;
    (void)0; /* cmp MEM16(ebx + 0x20), 0 - flags set for next jcc */
    edi = ebx + 0x24;
    if (CMP_BE(MEM16(ebx + 0x20), 0)) goto loc_004BAE19; /* jbe: below or equal (unsigned <=) */

loc_004BADC8: ;
    eax = ZX16(MEM16(ebp + -4));
    if (CMP_NE(MEM32(ebp + eax * 4 + -568), 0)) goto loc_004BAE09; /* jne: not equal / not zero */

loc_004BADD6: ;
    eax = MEM32(edi + 0x18);
    if (TEST_Z(eax, 0x200000)) goto loc_004BADEC; /* je: equal / zero */

loc_004BADE0: ;
    eax = eax & 0xFFDFFFFFu;
    MEM32(edi + 0x18) = eax;
    MEM16(ebx + 0x22) = MEM16(ebx + 0x22) - 1;

loc_004BADEC: ;
    ecx = MEM32(ebp + -12);
    eax = ebp + -16;
    PUSH32(esp, eax);
    PUSH32(esp, edi);
    PUSH32(esp, 0); sub_004B9ED6(); /* call 0x004B9ED6 */

loc_004BADF9: ;
    if (TEST_Z(eax, eax)) goto loc_004BAE09; /* je: equal / zero */

loc_004BADFD: ;
    ecx = MEM32(ebp + -12);
    PUSH32(esp, edi);
    PUSH32(esp, MEM32(esi + 0x14));
    PUSH32(esp, 0); sub_004B9CE7(); /* call 0x004B9CE7 */

loc_004BAE09: ;
    edi = edi + 0x34;
    MEM32(ebp + -4) = MEM32(ebp + -4) + 1;
    SET_LO16(eax, MEM16(ebp + -4));
    if (CMP_B(LO16(eax), MEM16(ebx + 0x20))) goto loc_004BADC8; /* jb: below (unsigned <) */

loc_004BAE19: ;
    MEM32(ebp + -4) = MEM32(ebp + -4) & 0;
    eax = 0; /* xor self */
    edx = ebx + 0x24;
    MEM16(ebx + 0x20) = LO16(eax);
    MEM16(ebx + 0x22) = LO16(eax);
    ecx = 0x659;
    edi = edx;
    { uint32_t _i; for (_i = 0; _i < ecx; _i++) MEM32(edi + _i*4) = eax; }
    edi += ecx * 4; ecx = 0; /* rep stosd */
    MEM32(ebp + -28) = eax;
    eax = MEM32(ebp + -20);
    MEM32(ebp + -8) = eax;
    eax = MEM32(ebp + -24);
    (void)0; /* cmp MEM16(eax), 0 - flags set for next jcc */
    MEM32(ebp + -16) = edx;
    if (CMP_BE(MEM16(eax), 0)) goto loc_004BB02F; /* jbe: below or equal (unsigned <=) */

loc_004BAE4C: ;
    eax = ebp + -52;
    PUSH32(esp, eax);
    PUSH32(esp, MEM32(ebp + -8));
    PUSH32(esp, 0); sub_004B8339(); /* call 0x004B8339 */

loc_004BAE58: ;
    if (TEST_NZ(eax, eax)) goto loc_004BAF4F; /* jne: not equal / not zero */

loc_004BAE60: ;
    eax = ZX16(MEM16(ebp + -4));
    (void)0; /* cmp MEM32(ebp + eax * 4 + -1068), 0 - flags set for next jcc */
    esi = MEM32(ebp + -8);
    edi = MEM32(ebp + -16);
    PUSH32(esp, 0xD);
    POP32(esp, ecx);
    memcpy((void*)XBOX_PTR(edi), (void*)XBOX_PTR(esi), ecx * 4);
    esi += ecx * 4; edi += ecx * 4; ecx = 0; /* rep movsd */
    esi = MEM32(ebp + -16);
    if (CMP_EQ(MEM32(ebp + eax * 4 + -1068), 0)) goto loc_004BAF3B; /* je: equal / zero */

loc_004BAE80: ;
    edi = MEM32(ebp + -12);
    eax = ebp + -16;
    PUSH32(esp, eax);
    PUSH32(esp, esi);
    ecx = edi;
    PUSH32(esp, 0); sub_004B9ED6(); /* call 0x004B9ED6 */

loc_004BAE8F: ;
    if (TEST_Z(eax, eax)) goto loc_004BAF3B; /* je: equal / zero */

loc_004BAE97: ;
    MEM32(ebp + -20) = 1;
    edi = edi + 0x1504;
    MEM32(ebp + -16) = 8;

loc_004BAEAB: ;
    edx = MEM32(edi + -8);
    if (TEST_Z(edx, edx)) goto loc_004BAF0C; /* je: equal / zero */

loc_004BAEB2: ;
    eax = MEM32(edi);
    if (CMP_EQ(eax, 0xFFFFFFFFu)) goto loc_004BAEC1; /* je: equal / zero */

loc_004BAEB9: ;
    ecx = MEM32(ebp + 8);
    if (CMP_NE(eax, MEM32(ecx + 0x14))) goto loc_004BAF0C; /* jne: not equal / not zero */

loc_004BAEC1: ;
    ecx = MEM32(ebp + 8);
    eax = MEM32(edi + 4);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, esi);
    PUSH32(esp, 0);
    PUSH32(esp, MEM32(ecx + 0x14));
    ecx = MEM32(ebp + -12);
    PUSH32(esp, eax);
    PUSH32(esp, 0); RECOMP_ICALL_SAFE(edx, _icall_esp); /* indirect call */
    }

loc_004BAED3: ;
    if (TEST_Z(eax, eax)) goto loc_004BAF0C; /* je: equal / zero */

loc_004BAED7: ;
    eax = MEM32(ebp + -28);
    if (TEST_NZ(eax, eax)) goto loc_004BAEEE; /* jne: not equal / not zero */

loc_004BAEDE: ;
    eax = MEM32(esi + 0x14);
    MEM32(ebp + -28) = eax;
    SET_LO16(eax, MEM16(esi + 0x22));
    MEM16(ebp + -36) = LO16(eax);
    goto loc_004BAF08;

loc_004BAEEE: ;
    if (CMP_EQ(eax, MEM32(esi + 0x14))) goto loc_004BAF08; /* je: equal / zero */

loc_004BAEF3: ;
    eax = MEM32(esi + 0x18);
    ecx = 0x200000;
    if (TEST_NZ(ecx, eax)) goto loc_004BAF08; /* jne: not equal / not zero */

loc_004BAEFF: ;
    eax = eax | ecx;
    MEM32(esi + 0x18) = eax;
    MEM16(ebx + 0x22) = MEM16(ebx + 0x22) + 1;

loc_004BAF08: ;
    MEM32(ebp + -20) = MEM32(ebp + -20) & 0;

loc_004BAF0C: ;
    edi = edi + 0x10;
    MEM32(ebp + -16) = MEM32(ebp + -16) - 1;
    if ((MEM32(ebp + -16) != 0)) goto loc_004BAEAB; /* jne: not equal / not zero */

loc_004BAF14: ;
    edi = MEM32(ebp + 8);
    ecx = MEM32(ebp + -12);
    PUSH32(esp, esi);
    PUSH32(esp, MEM32(edi + 0x14));
    PUSH32(esp, 0); sub_004C0312(); /* call 0x004C0312 */

loc_004BAF23: ;
    if (CMP_EQ(MEM32(ebp + -20), 0)) goto loc_004BAF3B; /* je: equal / zero */

loc_004BAF29: ;
    ecx = MEM32(ebp + -12);
    PUSH32(esp, esi);
    PUSH32(esp, MEM32(edi + 0x14));
    ecx = ecx + 0x1580;
    PUSH32(esp, 0); sub_004AEF81(); /* call 0x004AEF81 */

loc_004BAF3B: ;
    esi = esi + 0x34;
    MEM16(ebx + 0x20) = MEM16(ebx + 0x20) + 1;
    (void)0; /* cmp MEM16(ebx + 0x20), 0x7D - flags set for next jcc */
    MEM32(ebp + -16) = esi;
    esi = MEM32(ebp + 8);
    if (CMP_AE(MEM16(ebx + 0x20), 0x7D)) goto loc_004BAF66; /* jae: above or equal (unsigned >=) */

loc_004BAF4F: ;
    MEM32(ebp + -8) = MEM32(ebp + -8) + 0x34;
    MEM32(ebp + -4) = MEM32(ebp + -4) + 1;
    eax = MEM32(ebp + -24);
    SET_LO16(ecx, MEM16(ebp + -4));
    if (CMP_B(LO16(ecx), MEM16(eax))) goto loc_004BAE4C; /* jb: below (unsigned <) */

loc_004BAF66: ;
    if (CMP_EQ(MEM32(ebp + -28), 0)) goto loc_004BB02F; /* je: equal / zero */

loc_004BAF70: ;
    ecx = MEM32(ebp + -12);
    edi = esi + 0x1C;
    PUSH32(esp, edi);
    PUSH32(esp, 0); sub_004B5278(); /* call 0x004B5278 */

loc_004BAF7C: ;
    PUSH32(esp, 0x54);
    eax = 0; /* xor self */
    POP32(esp, ecx);
    { uint32_t _i; for (_i = 0; _i < ecx; _i++) MEM32(edi + _i*4) = eax; }
    edi += ecx * 4; ecx = 0; /* rep stosd */
    MEM32(esi + 0x16C) = MEM32(esi + 0x16C) & eax;
    edi = MEM32(ebp + -12);
    MEM32(esi) = 0x4B9FA9;
    esi = esi + 0x17C;
    eax = edi + 0x14C8;
    MEM32(esi) = 0xF;
    MEM32(esi + 4) = 0x14;
    ecx = MEM32(eax);
    MEM32(esi + 8) = ecx;
    MEM32(eax) = MEM32(eax) + 1;
    ebx = 0; /* xor self */
    PUSH32(esp, ebx);
    eax = esi + 0xC;
    PUSH32(esp, eax);
    ecx = edi;
    PUSH32(esp, 0); sub_0049CFA8(); /* call 0x0049CFA8 */

loc_004BAFC0: ;
    eax = MEM32(ebp + 8);
    ecx = MEM32(eax + 0x14);
    ecx = ecx + ecx * 8;
    edx = MEM32(edi + ecx * 8 + 0x13A8);
    PUSH32(esp, ebx);
    PUSH32(esp, ebx);
    MEM32(esi + 0x20) = edx;
    ecx = MEM32(edi + ecx * 8 + 0x13AC);
    MEM32(esi + 0x24) = ecx;
    ecx = MEM32(ebp + -28);
    MEM32(esi + 0x28) = ecx;
    ecx = eax + 0x1C;
    PUSH32(esp, ecx);
    MEM32(esi + 0x2C) = ebx;
    MEM32(esi + 0x30) = ebx;
    PUSH32(esp, MEM32(eax + 8));
    eax = ZX16(MEM16(ebp + -36));
    PUSH32(esp, 0x7530);
    PUSH32(esp, 0x34);
    PUSH32(esp, esi);
    PUSH32(esp, ebx);
    PUSH32(esp, ebx);
    eax = eax + 0x158;
    PUSH32(esp, eax);
    edx = esi + 0x34;
    PUSH32(esp, edx);
    PUSH32(esp, 0x88264C);
    PUSH32(esp, 2);
    PUSH32(esp, 0x12);
    ecx = edi;
    PUSH32(esp, 0); sub_004ADC62(); /* call 0x004ADC62 */

loc_004BB01A: ;
    if (CMP_L(eax, ebx)) goto loc_004BB03D; /* jl: less (signed <) */

loc_004BB01E: ;
    eax = MEM32(ebp + 8);
    MEM32(eax + 0x16C) = 1;
    eax = 0; /* xor self */
    goto loc_004BB04F;

loc_004BB02F: ;
    eax = 0x1500F0;
    goto loc_004BB040;

loc_004BB036: ;
    eax = 0x8015000Au;
    goto loc_004BB040;

loc_004BB03D: ;
    esi = MEM32(ebp + 8);

loc_004BB040: ;
    MEM32(esi + 0x28) = eax;
    MEM32(esi + 0x10) = 2;
    goto loc_004BB04F;

loc_004BB04C: ;
    eax = MEM32(ebp + 8);

loc_004BB04F: ;
    POP32(esp, edi);
    POP32(esp, esi);
    POP32(esp, ebx);
    esp = ebp;
    POP32(esp, ebp); /* leave */
    esp += 8; return; /* ret 4 */

}

/**
 * sub_004BB056
 * Original: 0x004BB056 - 0x004BB205 (431 bytes, 137 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_004BB056(void)
{
    uint32_t ebp;
    int _flags = 0; /* fallback flag var */

loc_004BB056: ;
    PUSH32(esp, ebp);
    ebp = esp;
    esp = esp - 0x24;
    PUSH32(esp, ebx);
    ebx = MEM32(ebp + 8);
    eax = MEM32(ebx + 0x10);
    eax--;
    PUSH32(esp, esi);
    PUSH32(esp, edi);
    MEM32(ebp + -4) = ecx;
    if ((eax == 0)) goto loc_004BB07A; /* je: equal / zero */

loc_004BB06B: ;
    eax--;
    if ((eax != 0)) goto loc_004BB1FB; /* jne: not equal / not zero */

loc_004BB072: ;
    eax = MEM32(ebx + 0x28);
    goto loc_004BB1FE;

loc_004BB07A: ;
    ecx = MEM32(ebp + -4);
    edi = ebx + 0x1C;
    PUSH32(esp, edi);
    PUSH32(esp, 0); sub_004A5F72(); /* call 0x004A5F72 */

loc_004BB086: ;
    if (TEST_Z(eax, eax)) goto loc_004BB1FE; /* je: equal / zero */

loc_004BB08E: ;
    if (TEST_S(eax, eax)) goto loc_004BB1EF; /* jl: less (signed <) */

loc_004BB094: ;
    ecx = MEM32(ebp + -4);
    PUSH32(esp, 0);
    eax = ebp + -8;
    PUSH32(esp, eax);
    eax = ebp + -28;
    PUSH32(esp, eax);
    eax = ebp + -36;
    PUSH32(esp, eax);
    eax = ebp + -12;
    PUSH32(esp, eax);
    eax = ebp + 8;
    PUSH32(esp, eax);
    PUSH32(esp, edi);
    PUSH32(esp, 0); sub_004AD5B6(); /* call 0x004AD5B6 */

loc_004BB0B3: ;
    if (TEST_S(eax, eax)) goto loc_004BB1EF; /* jl: less (signed <) */

loc_004BB0BB: ;
    esi = MEM32(ebp + 8);
    if (TEST_Z(esi, esi)) goto loc_004BB1EA; /* je: equal / zero */

loc_004BB0C6: ;
    if (CMP_NE(MEM32(ebp + -8), 0xC8)) goto loc_004BB1EA; /* jne: not equal / not zero */

loc_004BB0D3: ;
    if (CMP_B(MEM32(ebp + -12), 0x58)) goto loc_004BB1EA; /* jb: below (unsigned <) */

loc_004BB0DD: ;
    if (CMP_NE(MEM32(esi), 0x67)) goto loc_004BB1EA; /* jne: not equal / not zero */

loc_004BB0E6: ;
    eax = MEM32(esi + 0x20);
    if (TEST_S(eax, eax)) goto loc_004BB1EF; /* jl: less (signed <) */

loc_004BB0F1: ;
    ecx = MEM32(ebp + -4);
    eax = esi + 0x24;
    PUSH32(esp, eax);
    MEM32(ebp + -16) = eax;
    PUSH32(esp, 0); sub_004B9908(); /* call 0x004B9908 */

loc_004BB100: ;
    if (TEST_Z(eax, eax)) goto loc_004BB1EA; /* je: equal / zero */

loc_004BB108: ;
    PUSH32(esp, MEM32(ebp + -16));
    ecx = MEM32(ebp + -4);
    PUSH32(esp, MEM32(ebx + 0x14));
    PUSH32(esp, 0); sub_004BA0A0(); /* call 0x004BA0A0 */

loc_004BB116: ;
    if (TEST_Z(eax, eax)) goto loc_004BB1E3; /* je: equal / zero */

loc_004BB11E: ;
    eax = MEM32(esi + 0x38);
    ecx = MEM32(ebp + -4);
    MEM32(ebp + -16) = eax;
    SET_LO16(eax, MEM16(esi + 0x46));
    PUSH32(esp, edi);
    MEM16(ebp + -20) = LO16(eax);
    PUSH32(esp, 0); sub_004B5278(); /* call 0x004B5278 */

loc_004BB135: ;
    PUSH32(esp, 0x54);
    eax = 0; /* xor self */
    POP32(esp, ecx);
    { uint32_t _i; for (_i = 0; _i < ecx; _i++) MEM32(edi + _i*4) = eax; }
    edi += ecx * 4; ecx = 0; /* rep stosd */
    MEM32(ebx + 0x16C) = MEM32(ebx + 0x16C) & eax;
    edi = MEM32(ebp + -4);
    MEM32(ebx) = 0x4B9FA9;
    esi = ebx + 0x17C;
    eax = edi + 0x14C8;
    MEM32(esi) = 0xF;
    MEM32(esi + 4) = 0x14;
    ecx = MEM32(eax);
    MEM32(esi + 8) = ecx;
    MEM32(eax) = MEM32(eax) + 1;
    PUSH32(esp, 0);
    eax = esi + 0xC;
    PUSH32(esp, eax);
    ecx = edi;
    PUSH32(esp, 0); sub_0049CFA8(); /* call 0x0049CFA8 */

loc_004BB178: ;
    eax = MEM32(ebx + 0x14);
    eax = eax + eax * 8;
    ecx = MEM32(edi + eax * 8 + 0x13A8);
    MEM32(esi + 0x20) = ecx;
    eax = MEM32(edi + eax * 8 + 0x13AC);
    MEM32(esi + 0x24) = eax;
    eax = MEM32(ebp + -16);
    MEM32(esi + 0x28) = eax;
    eax = 0; /* xor self */
    PUSH32(esp, eax);
    PUSH32(esp, eax);
    ecx = ebx + 0x1C;
    PUSH32(esp, ecx);
    MEM32(esi + 0x2C) = eax;
    MEM32(esi + 0x30) = eax;
    PUSH32(esp, MEM32(ebx + 8));
    edx = esi + 0x34;
    PUSH32(esp, 0x7530);
    PUSH32(esp, 0x34);
    PUSH32(esp, esi);
    PUSH32(esp, eax);
    PUSH32(esp, eax);
    eax = ZX16(MEM16(ebp + -20));
    eax = eax + 0x158;
    PUSH32(esp, eax);
    PUSH32(esp, edx);
    PUSH32(esp, 0x88264C);
    PUSH32(esp, 2);
    PUSH32(esp, 0x12);
    ecx = edi;
    PUSH32(esp, 0); sub_004ADC62(); /* call 0x004ADC62 */

loc_004BB1D1: ;
    if (TEST_S(eax, eax)) goto loc_004BB1EF; /* jl: less (signed <) */

loc_004BB1D5: ;
    MEM32(ebx + 0x16C) = 1;
    eax = 0; /* xor self */
    goto loc_004BB1FE;

loc_004BB1E3: ;
    eax = 0x1500F0;
    goto loc_004BB1EF;

loc_004BB1EA: ;
    eax = 0x8015000Au;

loc_004BB1EF: ;
    MEM32(ebx + 0x28) = eax;
    MEM32(ebx + 0x10) = 2;
    goto loc_004BB1FE;

loc_004BB1FB: ;
    eax = MEM32(ebp + 8);

loc_004BB1FE: ;
    POP32(esp, edi);
    POP32(esp, esi);
    POP32(esp, ebx);
    esp = ebp;
    POP32(esp, ebp); /* leave */
    esp += 8; return; /* ret 4 */

}

/**
 * sub_004BB205
 * Original: 0x004BB205 - 0x004BB215 (16 bytes, 5 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_004BB205(void)
{
    uint32_t ebp;
    int _flags = 0; /* fallback flag var */
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_004BB205: ;
    eax = MEM32(esp + 4);
    if (CMP_EQ(MEM32(eax), 0x4BB056)) { sub_004BB215(); return; } /* je: equal / zero */

loc_004BB211: ;
    eax = 0; /* xor self */
    g_seh_ebp = ebp; sub_004BB226(); return; /* tail jmp 0x004BB226 */

}

/**
 * sub_004BB229
 * Original: 0x004BB229 - 0x004BB234 (11 bytes, 2 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_004BB229(void)
{
    uint32_t ebp;
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_004BB229: ;
    ecx = MEM32(0x75F028);
    g_seh_ebp = ebp; sub_004BA31F(); return; /* tail jmp 0x004BA31F */

}

/**
 * sub_004BB234
 * Original: 0x004BB234 - 0x004BB243 (15 bytes, 5 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_004BB234(void)
{
    uint32_t ebp;

loc_004BB234: ;
    PUSH32(esp, ebp);
    ebp = esp;
    ecx = MEM32(0x75F028);
    POP32(esp, ebp);
    g_seh_ebp = ebp; sub_004BA438(); return; /* tail jmp 0x004BA438 */

}

/**
 * sub_004BB243
 * Original: 0x004BB243 - 0x004BB24E (11 bytes, 2 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_004BB243(void)
{
    uint32_t ebp;
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_004BB243: ;
    ecx = MEM32(0x75F028);
    g_seh_ebp = ebp; sub_004BA57A(); return; /* tail jmp 0x004BA57A */

}

/**
 * sub_004BB24E
 * Original: 0x004BB24E - 0x004BB25D (15 bytes, 5 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_004BB24E(void)
{
    uint32_t ebp;

loc_004BB24E: ;
    PUSH32(esp, ebp);
    ebp = esp;
    ecx = MEM32(0x75F028);
    POP32(esp, ebp);
    g_seh_ebp = ebp; sub_004BA72C(); return; /* tail jmp 0x004BA72C */

}

/**
 * sub_004BB25D
 * Original: 0x004BB25D - 0x004BB26F (18 bytes, 8 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_004BB25D(void)
{
    uint32_t ebp;
    int _flags = 0; /* fallback flag var */

loc_004BB25D: ;
    PUSH32(esp, ebp);
    ebp = esp;
    PUSH32(esp, ecx);
    (void)0; /* test ecx, ecx - flags set for next jcc */
    MEM32(ebp + -4) = ecx;
    if (TEST_NZ(ecx, ecx)) { sub_004BB26F(); return; } /* jne: not equal / not zero */

loc_004BB268: ;
    eax = 0x80150005u;
    g_seh_ebp = ebp; sub_004BB2B1(); return; /* tail jmp 0x004BB2B1 */

}

/**
 * sub_004BB300
 * Original: 0x004BB300 - 0x004BB3C7 (199 bytes, 79 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_004BB300(void)
{
    uint32_t ebp;
    int _flags = 0; /* fallback flag var */

loc_004BB300: ;
    PUSH32(esp, ebp);
    ebp = esp;
    PUSH32(esp, ecx);
    PUSH32(esp, ecx);
    eax = MEM32(ebp + 0x10);
    MEM32(eax) = MEM32(eax) & 0;
    PUSH32(esp, ebx);
    PUSH32(esp, esi);
    esi = MEM32(ebp + 8);
    PUSH32(esp, edi);
    MEM32(ebp + -4) = MEM32(ebp + -4) & 0;
    eax = ebp + -8;
    PUSH32(esp, eax);
    eax = ebp + 8;
    PUSH32(esp, eax);
    eax = ebp + -4;
    PUSH32(esp, eax);
    PUSH32(esp, MEM32(ebp + 0xC));
    ebx = 0x1A8A;
    PUSH32(esp, 0x4BABF1);
    PUSH32(esp, esi);
    PUSH32(esp, ebx);
    PUSH32(esp, 0x34);
    PUSH32(esp, 0xD);
    PUSH32(esp, 1);
    edi = ecx;
    PUSH32(esp, 0); sub_004B9F36(); /* call 0x004B9F36 */

loc_004BB33D: ;
    (void)0; /* test eax, eax - flags set for next jcc */
    MEM32(ebp + 0xC) = eax;
    if (TEST_S(eax, eax)) goto loc_004BB3AE; /* jl: less (signed <) */

loc_004BB344: ;
    eax = MEM32(ebp + 8);
    PUSH32(esp, 0);
    MEM32(eax + 4) = 8;
    PUSH32(esp, 0);
    ecx = esi + esi * 8;
    edx = MEM32(edi + ecx * 8 + 0x13A8);
    esi = MEM32(ebp + -4);
    MEM32(eax + 0x20) = edx;
    ecx = MEM32(edi + ecx * 8 + 0x13AC);
    MEM32(eax + 0x24) = ecx;
    ecx = esi + 0x1C;
    PUSH32(esp, ecx);
    PUSH32(esp, MEM32(esi + 8));
    ecx = edi;
    PUSH32(esp, 0x7530);
    PUSH32(esp, 0x28);
    PUSH32(esp, eax);
    eax = 0; /* xor self */
    PUSH32(esp, eax);
    PUSH32(esp, eax);
    PUSH32(esp, ebx);
    PUSH32(esp, MEM32(ebp + -8));
    PUSH32(esp, 0x88264C);
    PUSH32(esp, eax);
    PUSH32(esp, 0x12);
    PUSH32(esp, 0); sub_004ADC62(); /* call 0x004ADC62 */

loc_004BB392: ;
    (void)0; /* test eax, eax - flags set for next jcc */
    MEM32(ebp + 0xC) = eax;
    if (TEST_S(eax, eax)) goto loc_004BB3B1; /* jl: less (signed <) */

loc_004BB399: ;
    eax = 0; /* xor self */
    eax++;
    MEM32(esi + 0x16C) = eax;
    MEM32(esi + 0x10) = eax;
    eax = MEM32(ebp + 0x10);
    MEM32(eax) = esi;
    esi = 0; /* xor self */
    goto loc_004BB3B1;

loc_004BB3AE: ;
    esi = MEM32(ebp + -4);

loc_004BB3B1: ;
    if (TEST_Z(esi, esi)) goto loc_004BB3BD; /* je: equal / zero */

loc_004BB3B5: ;
    PUSH32(esp, esi);
    ecx = edi;
    PUSH32(esp, 0); sub_004B9362(); /* call 0x004B9362 */

loc_004BB3BD: ;
    eax = MEM32(ebp + 0xC);
    POP32(esp, edi);
    POP32(esp, esi);
    POP32(esp, ebx);
    esp = ebp;
    POP32(esp, ebp); /* leave */
    esp += 16; return; /* ret 12 */

}

/**
 * sub_004BB3C7
 * Original: 0x004BB3C7 - 0x004BB494 (205 bytes, 81 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_004BB3C7(void)
{
    uint32_t ebp;
    int _flags = 0; /* fallback flag var */

loc_004BB3C7: ;
    PUSH32(esp, ebp);
    ebp = esp;
    PUSH32(esp, ecx);
    PUSH32(esp, ecx);
    eax = MEM32(ebp + 0x14);
    MEM32(eax) = MEM32(eax) & 0;
    PUSH32(esp, ebx);
    PUSH32(esp, esi);
    esi = MEM32(ebp + 8);
    PUSH32(esp, edi);
    MEM32(ebp + -4) = MEM32(ebp + -4) & 0;
    eax = ebp + -8;
    PUSH32(esp, eax);
    eax = ebp + 8;
    PUSH32(esp, eax);
    eax = ebp + -4;
    PUSH32(esp, eax);
    PUSH32(esp, MEM32(ebp + 0x10));
    ebx = 0x1158;
    PUSH32(esp, 0x4BB056);
    PUSH32(esp, esi);
    PUSH32(esp, ebx);
    PUSH32(esp, 0x34);
    PUSH32(esp, 0xE);
    PUSH32(esp, 1);
    edi = ecx;
    PUSH32(esp, 0); sub_004B9F36(); /* call 0x004B9F36 */

loc_004BB404: ;
    (void)0; /* test eax, eax - flags set for next jcc */
    MEM32(ebp + 0x10) = eax;
    if (TEST_S(eax, eax)) goto loc_004BB47B; /* jl: less (signed <) */

loc_004BB40B: ;
    eax = MEM32(ebp + 8);
    MEM32(eax + 4) = 0xC;
    PUSH32(esp, 0);
    ecx = esi + esi * 8;
    edx = MEM32(edi + ecx * 8 + 0x13A8);
    esi = MEM32(ebp + -4);
    MEM32(eax + 0x20) = edx;
    ecx = MEM32(edi + ecx * 8 + 0x13AC);
    PUSH32(esp, 0);
    MEM32(eax + 0x24) = ecx;
    ecx = MEM32(ebp + 0xC);
    MEM32(eax + 0x28) = ecx;
    ecx = esi + 0x1C;
    PUSH32(esp, ecx);
    PUSH32(esp, MEM32(esi + 8));
    ecx = edi;
    PUSH32(esp, 0x7530);
    PUSH32(esp, 0x2C);
    PUSH32(esp, eax);
    eax = 0; /* xor self */
    PUSH32(esp, eax);
    PUSH32(esp, eax);
    PUSH32(esp, ebx);
    PUSH32(esp, MEM32(ebp + -8));
    PUSH32(esp, 0x88264C);
    PUSH32(esp, eax);
    PUSH32(esp, 0x12);
    PUSH32(esp, 0); sub_004ADC62(); /* call 0x004ADC62 */

loc_004BB45F: ;
    (void)0; /* test eax, eax - flags set for next jcc */
    MEM32(ebp + 0x10) = eax;
    if (TEST_S(eax, eax)) goto loc_004BB47E; /* jl: less (signed <) */

loc_004BB466: ;
    eax = 0; /* xor self */
    eax++;
    MEM32(esi + 0x16C) = eax;
    MEM32(esi + 0x10) = eax;
    eax = MEM32(ebp + 0x14);
    MEM32(eax) = esi;
    esi = 0; /* xor self */
    goto loc_004BB47E;

loc_004BB47B: ;
    esi = MEM32(ebp + -4);

loc_004BB47E: ;
    if (TEST_Z(esi, esi)) goto loc_004BB48A; /* je: equal / zero */

loc_004BB482: ;
    PUSH32(esp, esi);
    ecx = edi;
    PUSH32(esp, 0); sub_004B9362(); /* call 0x004B9362 */

loc_004BB48A: ;
    eax = MEM32(ebp + 0x10);
    POP32(esp, edi);
    POP32(esp, esi);
    POP32(esp, ebx);
    esp = ebp;
    POP32(esp, ebp); /* leave */
    esp += 20; return; /* ret 16 */

}

/**
 * sub_004BB494
 * Original: 0x004BB494 - 0x004BB4A3 (15 bytes, 5 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_004BB494(void)
{
    uint32_t ebp;

loc_004BB494: ;
    PUSH32(esp, ebp);
    ebp = esp;
    ecx = MEM32(0x75F028);
    POP32(esp, ebp);
    g_seh_ebp = ebp; sub_004BB25D(); return; /* tail jmp 0x004BB25D */

}

/**
 * sub_004BB4A3
 * Original: 0x004BB4A3 - 0x004BB894 (1009 bytes, 352 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_004BB4A3(void)
{
    uint32_t ebp;
    int _flags = 0; /* fallback flag var */

loc_004BB4A3: ;
    PUSH32(esp, ebp);
    ebp = esp;
    esp = esp - 0x60;
    edx = 0; /* xor self */
    (void)0; /* cmp MEM32(ecx + 0x157C), edx - flags set for next jcc */
    PUSH32(esp, ebx);
    PUSH32(esp, esi);
    PUSH32(esp, edi);
    MEM32(ebp + -4) = ecx;
    MEM32(ebp + -24) = edx;
    MEM32(ebp + -28) = edx;
    MEM32(ebp + -20) = edx;
    if (CMP_EQ(MEM32(ecx + 0x157C), edx)) goto loc_004BB4E3; /* je: equal / zero */

loc_004BB4C2: ;
    esi = 0; /* xor self */
    eax = ecx + 0x14FC;

loc_004BB4CA: ;
    if (CMP_NE(MEM32(eax), edx)) goto loc_004BB4D7; /* jne: not equal / not zero */

loc_004BB4CE: ;
    esi++;
    eax = eax + 0x10;
    if (CMP_B(esi, 8)) goto loc_004BB4CA; /* jb: below (unsigned <) */

loc_004BB4D7: ;
    if (CMP_B(esi, 8)) goto loc_004BB4E3; /* jb: below (unsigned <) */

loc_004BB4DC: ;
    MEM32(ebp + -24) = 1;

loc_004BB4E3: ;
    ebx = ecx + 0x13B4;
    MEM32(ebp + -8) = edx;
    MEM32(ebp + -32) = ebx;

loc_004BB4EF: ;
    esi = MEM32(ebx + 0x2C);
    if (TEST_Z(esi, esi)) goto loc_004BB720; /* je: equal / zero */

loc_004BB4FA: ;
    eax = MEM32(esi);
    edi = 0; /* xor self */
    edi++;
    (void)0; /* test eax, eax - flags set for next jcc */
    MEM32(ebp + -28) = edi;
    if (TEST_Z(eax, eax)) goto loc_004BB593; /* je: equal / zero */

loc_004BB50A: ;
    ecx = MEM32(ebp + -4);
    PUSH32(esp, eax);
    PUSH32(esp, 0); sub_004A5F72(); /* call 0x004A5F72 */

loc_004BB513: ;
    if (TEST_Z(eax, eax)) goto loc_004BB590; /* je: equal / zero */

loc_004BB517: ;
    PUSH32(esp, MEM32(esi));
    ecx = MEM32(ebp + -4);
    PUSH32(esp, 0); sub_004A5F87(); /* call 0x004A5F87 */

loc_004BB521: ;
    MEM32(esi) = MEM32(esi) & 0;
    goto loc_004BB575;

loc_004BB526: ;
    edi = MEM32(esi + 4);
    eax = MEM32(edi + 0x18);
    PUSH32(esp, 0);
    PUSH32(esp, 0);
    edx = edi + 0x1C;
    PUSH32(esp, edx);
    MEM32(esi + 4) = eax;
    PUSH32(esp, MEM32(edi + 8));
    eax = edi + 0x17C;
    PUSH32(esp, 0x7530);
    PUSH32(esp, 0x30);
    PUSH32(esp, eax);
    ecx = eax + 0x30;
    eax = 0; /* xor self */
    PUSH32(esp, eax);
    PUSH32(esp, eax);
    PUSH32(esp, 0x100);
    PUSH32(esp, ecx);
    ecx = MEM32(ebp + -4);
    PUSH32(esp, 0x88264C);
    PUSH32(esp, eax);
    PUSH32(esp, 0x12);
    PUSH32(esp, 0); sub_004ADC62(); /* call 0x004ADC62 */

loc_004BB565: ;
    if (CMP_GE(eax & eax, 0)) goto loc_004BB57D; /* jge: greater or equal (signed >=) */

loc_004BB569: ;
    ecx = MEM32(ebp + -4);
    PUSH32(esp, edi);
    PUSH32(esp, 0); sub_004B9362(); /* call 0x004B9362 */

loc_004BB572: ;
    MEM32(ebx) = MEM32(ebx) | 0x40;

loc_004BB575: ;
    if (CMP_NE(MEM32(esi + 4), 0)) goto loc_004BB526; /* jne: not equal / not zero */

loc_004BB57B: ;
    goto loc_004BB593;

loc_004BB57D: ;
    eax = 0; /* xor self */
    eax++;
    MEM32(edi + 0x16C) = eax;
    MEM32(edi + 0x10) = eax;
    MEM32(esi) = edi;
    MEM32(ebp + -20) = eax;
    goto loc_004BB593;

loc_004BB590: ;
    MEM32(ebp + -20) = edi;

loc_004BB593: ;
    PUSH32(esp, 7);
    POP32(esp, ecx);
    eax = 0; /* xor self */
    PUSH32(esp, 7);
    edi = ebp + -96;
    { uint32_t _i; for (_i = 0; _i < ecx; _i++) MEM32(edi + _i*4) = eax; }
    edi += ecx * 4; ecx = 0; /* rep stosd */
    POP32(esp, ecx);
    edi = ebp + -68;
    { uint32_t _i; for (_i = 0; _i < ecx; _i++) MEM32(edi + _i*4) = eax; }
    edi += ecx * 4; ecx = 0; /* rep stosd */
    ecx = MEM32(ebp + -4);
    eax = ebp + -68;
    PUSH32(esp, eax);
    eax = ebp + -96;
    PUSH32(esp, eax);
    PUSH32(esp, MEM32(ebp + -24));
    ecx = ecx + 0x1580;
    PUSH32(esp, MEM32(ebp + -8));
    PUSH32(esp, 0); sub_004AF135(); /* call 0x004AF135 */

loc_004BB5C1: ;
    if (TEST_Z(eax, eax)) goto loc_004BB720; /* je: equal / zero */

loc_004BB5C9: ;
    if (CMP_A(MEM32(ebp + -96), 3)) goto loc_004BB71D; /* ja: above (unsigned >) */

loc_004BB5D3: ;
    if (CMP_A(MEM32(ebp + -68), 3)) goto loc_004BB71D; /* ja: above (unsigned >) */

loc_004BB5DD: ;
    MEM32(ebp + -16) = MEM32(ebp + -16) & 0;
    if (CMP_BE(MEM32(ebp + -68), 0)) goto loc_004BB6CE; /* jbe: below or equal (unsigned <=) */

loc_004BB5EB: ;
    MEM32(ebp + -12) = MEM32(ebp + -12) & 0;
    eax = 0; /* xor self */
    SET_LO16(eax, MEM16(esi + 0x20));
    (void)0; /* test LO16(eax), LO16(eax) - flags set for next jcc */
    edi = esi + 0x24;
    MEM32(ebp + -36) = eax;
    if (CMP_BE(LO16(eax) & LO16(eax), 0)) goto loc_004BB669; /* jbe: below or equal (unsigned <=) */

loc_004BB600: ;
    ecx = MEM32(ebp + -16);
    ecx = MEM32(ebp + ecx * 4 + -64);

loc_004BB607: ;
    if (CMP_EQ(MEM32(edi + 0x14), ecx)) goto loc_004BB61A; /* je: equal / zero */

loc_004BB60C: ;
    edi = edi + 0x34;
    MEM32(ebp + -12) = MEM32(ebp + -12) + 1;
    if (CMP_B(MEM16(ebp + -12), LO16(eax))) goto loc_004BB607; /* jb: below (unsigned <) */

loc_004BB618: ;
    goto loc_004BB65F;

loc_004BB61A: ;
    ecx = MEM32(ebp + -4);
    eax = ebp + -40;
    PUSH32(esp, eax);
    PUSH32(esp, edi);
    PUSH32(esp, 0); sub_004B9ED6(); /* call 0x004B9ED6 */

loc_004BB627: ;
    if (TEST_Z(eax, eax)) goto loc_004BB637; /* je: equal / zero */

loc_004BB62B: ;
    ecx = MEM32(ebp + -4);
    PUSH32(esp, edi);
    PUSH32(esp, MEM32(ebp + -8));
    PUSH32(esp, 0); sub_004B9CE7(); /* call 0x004B9CE7 */

loc_004BB637: ;
    MEM16(esi + 0x20) = MEM16(esi + 0x20) - 1;
    SET_LO16(eax, MEM16(esi + 0x20));
    if (CMP_AE(MEM16(ebp + -12), LO16(eax))) goto loc_004BB65F; /* jae: above or equal (unsigned >=) */

loc_004BB645: ;
    ecx = ZX16(MEM16(ebp + -12));
    eax = ZX16(LO16(eax));
    eax = eax - ecx;
    eax = (uint32_t)((int32_t)eax * (int32_t)0x34);
    PUSH32(esp, eax);
    eax = edi + 0x34;
    PUSH32(esp, eax);
    PUSH32(esp, edi);
    PUSH32(esp, 0); sub_0046E670(); /* call 0x0046E670 */

loc_004BB65C: ;
    esp = esp + 0xC;

loc_004BB65F: ;
    SET_LO16(eax, MEM16(ebp + -12));
    if (CMP_B(LO16(eax), MEM16(ebp + -36))) goto loc_004BB6B7; /* jb: below (unsigned <) */

loc_004BB669: ;
    eax = MEM32(esi);
    edi = 0; /* xor self */
    if (CMP_EQ(eax, edi)) goto loc_004BB688; /* je: equal / zero */

loc_004BB671: ;
    ecx = MEM32(ebp + -16);
    PUSH32(esp, MEM32(ebp + ecx * 4 + -64));
    ecx = MEM32(ebp + -4);
    PUSH32(esp, MEM32(ebp + -8));
    PUSH32(esp, eax);
    PUSH32(esp, 0); sub_004BB205(); /* call 0x004BB205 */

loc_004BB684: ;
    if (TEST_NZ(eax, eax)) goto loc_004BB6C8; /* jne: not equal / not zero */

loc_004BB688: ;
    edx = 0; /* xor self */
    if (CMP_BE(MEM32(esi + 0xC), edi)) goto loc_004BB6AE; /* jbe: below or equal (unsigned <=) */

loc_004BB68F: ;
    eax = MEM32(ebp + -16);
    ecx = MEM32(ebp + eax * 4 + -64);
    eax = esi + 0x10;

loc_004BB699: ;
    if (CMP_EQ(MEM32(eax), ecx)) goto loc_004BB6A8; /* je: equal / zero */

loc_004BB69D: ;
    edx++;
    eax = eax + 4;
    if (CMP_B(edx, MEM32(esi + 0xC))) goto loc_004BB699; /* jb: below (unsigned <) */

loc_004BB6A6: ;
    goto loc_004BB6AE;

loc_004BB6A8: ;
    MEM32(ebx) = MEM32(ebx) | 0x40;
    MEM32(ebp + -96) = edi;

loc_004BB6AE: ;
    eax = ZX16(MEM16(ebp + -12));
    if (CMP_B(eax, MEM32(esi + 0xC))) goto loc_004BB6CE; /* jb: below (unsigned <) */

loc_004BB6B7: ;
    MEM32(ebp + -16) = MEM32(ebp + -16) + 1;
    eax = MEM32(ebp + -16);
    if (CMP_B(eax, MEM32(ebp + -68))) goto loc_004BB5EB; /* jb: below (unsigned <) */

loc_004BB6C6: ;
    goto loc_004BB6CE;

loc_004BB6C8: ;
    MEM32(ebx) = MEM32(ebx) | 0x40;
    MEM32(ebp + -96) = edi;

loc_004BB6CE: ;
    if (CMP_BE(MEM32(ebp + -96), 0)) goto loc_004BB720; /* jbe: below or equal (unsigned <=) */

loc_004BB6D4: ;
    eax = MEM32(esi + 0xC);
    eax = eax + MEM32(ebp + -96);
    if (CMP_A(eax, 4)) goto loc_004BB71D; /* ja: above (unsigned >) */

loc_004BB6DF: ;
    eax = 0; /* xor self */
    if (CMP_BE(MEM32(ebp + -96), eax)) goto loc_004BB720; /* jbe: below or equal (unsigned <=) */

loc_004BB6E6: ;
    ecx = 0; /* xor self */
    if (CMP_BE(MEM32(ebp + -68), ecx)) goto loc_004BB707; /* jbe: below or equal (unsigned <=) */

loc_004BB6ED: ;
    edx = MEM32(ebp + eax * 4 + -92);

loc_004BB6F1: ;
    if (CMP_EQ(MEM32(ebp + ecx * 4 + -64), edx)) goto loc_004BB6FF; /* je: equal / zero */

loc_004BB6F7: ;
    ecx++;
    if (CMP_B(ecx, MEM32(ebp + -68))) goto loc_004BB6F1; /* jb: below (unsigned <) */

loc_004BB6FD: ;
    goto loc_004BB702;

loc_004BB6FF: ;
    MEM32(ebx) = MEM32(ebx) | 0x40;

loc_004BB702: ;
    if (CMP_B(ecx, MEM32(ebp + -68))) goto loc_004BB720; /* jb: below (unsigned <) */

loc_004BB707: ;
    edx = MEM32(ebp + eax * 4 + -92);
    ecx = MEM32(esi + 0xC);
    MEM32(esi + ecx * 4 + 0x10) = edx;
    MEM32(esi + 0xC) = MEM32(esi + 0xC) + 1;
    eax++;
    if (CMP_B(eax, MEM32(ebp + -96))) goto loc_004BB6E6; /* jb: below (unsigned <) */

loc_004BB71B: ;
    goto loc_004BB720;

loc_004BB71D: ;
    MEM32(ebx) = MEM32(ebx) | 0x40;

loc_004BB720: ;
    MEM32(ebp + -8) = MEM32(ebp + -8) + 1;
    ebx = ebx + 0x48;
    if (CMP_B(MEM32(ebp + -8), 4)) goto loc_004BB4EF; /* jb: below (unsigned <) */

loc_004BB730: ;
    edi = 0; /* xor self */
    if (CMP_EQ(MEM32(ebp + -28), edi)) goto loc_004BB88D; /* je: equal / zero */

loc_004BB73B: ;
    if (CMP_NE(MEM32(ebp + -20), edi)) goto loc_004BB88D; /* jne: not equal / not zero */

loc_004BB744: ;
    if (CMP_NE(MEM32(ebp + -24), edi)) goto loc_004BB88D; /* jne: not equal / not zero */

loc_004BB74D: ;
    esi = MEM32(ebp + -4);
    PUSH32(esp, edi);
    PUSH32(esp, 0x12);
    ecx = esi;
    PUSH32(esp, 0); sub_004A3A1D(); /* call 0x004A3A1D */

loc_004BB75A: ;
    if (CMP_GE(eax & eax, 0)) goto loc_004BB785; /* jge: greater or equal (signed >=) */

loc_004BB75E: ;
    eax = MEM32(ebp + -32);
    PUSH32(esp, 4);
    ecx = esi + 0x1584;
    POP32(esp, edx);

loc_004BB76A: ;
    if (CMP_EQ(MEM32(eax + 0x2C), edi)) goto loc_004BB774; /* je: equal / zero */

loc_004BB76F: ;
    MEM8(eax) = MEM8(eax) & 0x7F;
    MEM32(ecx) = edi;

loc_004BB774: ;
    eax = eax + 0x48;
    ecx = ecx + 0xB0;
    edx--;
    if ((edx != 0)) goto loc_004BB76A; /* jne: not equal / not zero */

loc_004BB780: ;
    goto loc_004BB88D;

loc_004BB785: ;
    eax = MEM32(ebp + -4);
    MEM32(ebp + -8) = MEM32(ebp + -8) & 0;
    ebx = MEM32(ebp + -32);
    eax = eax + 0x1584;
    MEM32(ebp + -24) = eax;

loc_004BB797: ;
    esi = MEM32(ebx + 0x2C);
    if (TEST_Z(esi, esi)) goto loc_004BB876; /* je: equal / zero */

loc_004BB7A2: ;
    eax = MEM32(ebx);
    if (TEST_Z(LO8(eax), 0x40)) goto loc_004BB7CB; /* je: equal / zero */

loc_004BB7A8: ;
    ecx = MEM32(ebp + -4);
    eax = eax & 0xFFFFFFBFu;
    MEM32(ebx) = eax;
    eax = MEM32(ebp + 8);
    MEM32(esi + 0xC) = MEM32(esi + 0xC) & 0;
    PUSH32(esp, esi);
    PUSH32(esp, MEM32(eax + 8));
    PUSH32(esp, MEM32(ebp + -8));
    PUSH32(esp, 0); sub_004BB300(); /* call 0x004BB300 */

loc_004BB7C3: ;
    if (TEST_Z(eax, eax)) goto loc_004BB88D; /* je: equal / zero */

loc_004BB7CB: ;
    eax = 0; /* xor self */
    if (CMP_BE(MEM16(esi + 0x22), LO16(eax))) goto loc_004BB829; /* jbe: below or equal (unsigned <=) */

loc_004BB7D3: ;
    (void)0; /* cmp MEM16(esi + 0x20), LO16(eax) - flags set for next jcc */
    MEM32(ebp + -12) = eax;
    if (CMP_BE(MEM16(esi + 0x20), LO16(eax))) goto loc_004BB829; /* jbe: below or equal (unsigned <=) */

loc_004BB7DC: ;
    edi = esi + 0x3C;

loc_004BB7DF: ;
    eax = MEM32(edi);
    if (TEST_Z(eax, 0x200000)) goto loc_004BB819; /* je: equal / zero */

loc_004BB7E8: ;
    ecx = MEM32(ebp + -4);
    eax = eax & 0xFFDFFFFFu;
    PUSH32(esp, esi);
    MEM32(edi) = eax;
    MEM16(esi + 0x22) = MEM16(esi + 0x22) - 1;
    eax = MEM32(ebp + 8);
    PUSH32(esp, MEM32(eax + 8));
    eax = 0; /* xor self */
    SET_LO16(eax, MEM16(edi + 0xA));
    PUSH32(esp, 0);
    PUSH32(esp, 0);
    PUSH32(esp, eax);
    PUSH32(esp, MEM32(edi + -4));
    PUSH32(esp, MEM32(ebp + -8));
    PUSH32(esp, 1);
    PUSH32(esp, 0); sub_004BAB19(); /* call 0x004BAB19 */

loc_004BB815: ;
    if (TEST_Z(eax, eax)) goto loc_004BB88D; /* je: equal / zero */

loc_004BB819: ;
    edi = edi + 0x34;
    MEM32(ebp + -12) = MEM32(ebp + -12) + 1;
    SET_LO16(eax, MEM16(ebp + -12));
    if (CMP_B(LO16(eax), MEM16(esi + 0x20))) goto loc_004BB7DF; /* jb: below (unsigned <) */

loc_004BB829: ;
    eax = MEM32(ebx);
    if (((int32_t)(LO8(eax) & LO8(eax)) >= 0)) goto loc_004BB83C; /* jns: not sign (positive) */

loc_004BB82F: ;
    eax = eax & 0xFFFFFF7Fu;
    MEM32(ebx) = eax;
    eax = MEM32(ebp + -24);
    MEM32(eax) = MEM32(eax) & 0;

loc_004BB83C: ;
    eax = MEM32(esi + 0xC);
    if (CMP_BE(eax & eax, 0)) goto loc_004BB876; /* jbe: below or equal (unsigned <=) */

loc_004BB843: ;
    ecx = esi + 0x10;
    edi = MEM32(ecx);
    eax--;
    MEM32(esi + 0xC) = eax;
    if ((eax == 0)) goto loc_004BB85F; /* je: equal / zero */

loc_004BB84E: ;
    eax = eax << 2;
    PUSH32(esp, eax);
    eax = esi + 0x14;
    PUSH32(esp, eax);
    PUSH32(esp, ecx);
    PUSH32(esp, 0); sub_0046E670(); /* call 0x0046E670 */

loc_004BB85C: ;
    esp = esp + 0xC;

loc_004BB85F: ;
    eax = MEM32(ebp + 8);
    ecx = MEM32(ebp + -4);
    PUSH32(esp, esi);
    PUSH32(esp, MEM32(eax + 8));
    PUSH32(esp, edi);
    PUSH32(esp, MEM32(ebp + -8));
    PUSH32(esp, 0); sub_004BB3C7(); /* call 0x004BB3C7 */

loc_004BB872: ;
    if (TEST_Z(eax, eax)) goto loc_004BB88D; /* je: equal / zero */

loc_004BB876: ;
    MEM32(ebp + -8) = MEM32(ebp + -8) + 1;
    MEM32(ebp + -24) = MEM32(ebp + -24) + 0xB0;
    ebx = ebx + 0x48;
    if (CMP_B(MEM32(ebp + -8), 4)) goto loc_004BB797; /* jb: below (unsigned <) */

loc_004BB88D: ;
    POP32(esp, edi);
    POP32(esp, esi);
    POP32(esp, ebx);
    esp = ebp;
    POP32(esp, ebp); /* leave */
    esp += 8; return; /* ret 4 */

}

/**
 * sub_004BB894
 * Original: 0x004BB894 - 0x004BB8DC (72 bytes, 33 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_004BB894(void)
{
    int _flags = 0; /* fallback flag var */

loc_004BB894: ;
    PUSH32(esp, edi);
    edi = MEM32(esp + 8);
    eax = MEM32(edi);
    if (CMP_EQ(MEM8(eax), 0)) goto loc_004BB8D8; /* je: equal / zero */

loc_004BB8A0: ;
    PUSH32(esp, esi);
    ecx = eax;
    esi = eax + 1;

loc_004BB8A6: ;
    SET_LO8(edx, MEM8(eax));
    eax++;
    if (TEST_NZ(LO8(edx), LO8(edx))) goto loc_004BB8A6; /* jne: not equal / not zero */

loc_004BB8AD: ;
    eax = eax - esi;
    eax = eax + ecx + -1;
    POP32(esp, esi);

loc_004BB8B4: ;
    SET_LO8(edx, MEM8(ecx));
    if (CMP_EQ(LO8(edx), 0x20)) goto loc_004BB8C0; /* je: equal / zero */

loc_004BB8BB: ;
    if (CMP_NE(LO8(edx), 9)) goto loc_004BB8C3; /* jne: not equal / not zero */

loc_004BB8C0: ;
    ecx++;
    goto loc_004BB8B4;

loc_004BB8C3: ;
    MEM32(edi) = ecx;

loc_004BB8C5: ;
    SET_LO8(ecx, MEM8(eax));
    if (CMP_EQ(LO8(ecx), 0x20)) goto loc_004BB8D1; /* je: equal / zero */

loc_004BB8CC: ;
    if (CMP_NE(LO8(ecx), 9)) goto loc_004BB8D4; /* jne: not equal / not zero */

loc_004BB8D1: ;
    eax--;
    goto loc_004BB8C5;

loc_004BB8D4: ;
    MEM8(eax + 1) = 0;

loc_004BB8D8: ;
    POP32(esp, edi);
    esp += 8; return; /* ret 4 */

}

/**
 * sub_004BB8DC
 * Original: 0x004BB8DC - 0x004BB8F3 (23 bytes, 12 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_004BB8DC(void)
{
    uint32_t ebp;

loc_004BB8DC: ;
    PUSH32(esp, ebp);
    ebp = esp;
    esp = esp - 0xC;
    PUSH32(esp, ebx);
    PUSH32(esp, esi);
    PUSH32(esp, edi);
    edi = MEM32(ebp + 8);
    eax = edi;
    ecx = edi;
    ebx = 0; /* xor self */
    MEM32(ebp + -4) = ecx;
    g_seh_ebp = ebp; sub_004BB8F8(); return; /* tail jmp 0x004BB8F8 */

}

/**
 * sub_004BB9BC
 * Original: 0x004BB9BC - 0x004BB9CF (19 bytes, 5 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_004BB9BC(void)
{
    uint32_t ebp;
    int _flags = 0; /* fallback flag var */
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_004BB9BC: ;
    eax = MEM32(esp + 4);
    if (CMP_NE(MEM32(eax + 0xC), 0x1500F0)) { sub_004BB9CF(); return; } /* jne: not equal / not zero */

loc_004BB9C9: ;
    ecx = ZX16(MEM16(eax + 0x3E));
    g_seh_ebp = ebp; sub_004BB9D1(); return; /* tail jmp 0x004BB9D1 */

}

/**
 * sub_004BB9DE
 * Original: 0x004BB9DE - 0x004BBAE1 (259 bytes, 98 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_004BB9DE(void)
{
    uint32_t ebp;
    int _flags = 0; /* fallback flag var */

loc_004BB9DE: ;
    PUSH32(esp, ebp);
    ebp = esp;
    esp = esp - 0x10;
    PUSH32(esp, ebx);
    ebx = 0; /* xor self */
    PUSH32(esp, edi);
    edi = MEM32(ebp + 8);
    (void)0; /* cmp MEM32(edi + 0x10), ebx - flags set for next jcc */
    MEM32(ebp + -16) = ecx;
    MEM32(ebp + -4) = ebx;
    MEM32(ebp + -12) = ebx;
    MEM32(ebp + -8) = ebx;
    if (CMP_BE(MEM32(edi + 0x10), ebx)) goto loc_004BBADB; /* jbe: below or equal (unsigned <=) */

loc_004BBA00: ;
    MEM32(ebp + 8) = ebx;
    PUSH32(esp, esi);

loc_004BBA04: ;
    esi = MEM32(edi + 8);
    esi = esi + MEM32(ebp + 8);
    PUSH32(esp, 0x882A14);
    PUSH32(esp, MEM32(esi));
    PUSH32(esp, 0); sub_00470C66(); /* call 0x00470C66 */

loc_004BBA16: ;
    (void)0; /* test eax, eax - flags set for next jcc */
    POP32(esp, ecx);
    POP32(esp, ecx);
    if (TEST_NZ(eax, eax)) goto loc_004BBA29; /* jne: not equal / not zero */

loc_004BBA1C: ;
    if (CMP_NE(MEM32(ebp + -4), eax)) goto loc_004BBA65; /* jne: not equal / not zero */

loc_004BBA21: ;
    eax = MEM32(esi + 0x30);
    MEM32(ebp + -4) = eax;
    goto loc_004BBA65;

loc_004BBA29: ;
    PUSH32(esp, 0x882A08);
    PUSH32(esp, MEM32(esi));
    PUSH32(esp, 0); sub_00470C66(); /* call 0x00470C66 */

loc_004BBA35: ;
    (void)0; /* test eax, eax - flags set for next jcc */
    POP32(esp, ecx);
    POP32(esp, ecx);
    if (TEST_NZ(eax, eax)) goto loc_004BBA48; /* jne: not equal / not zero */

loc_004BBA3B: ;
    if (CMP_NE(MEM32(ebp + -12), eax)) goto loc_004BBA65; /* jne: not equal / not zero */

loc_004BBA40: ;
    eax = MEM32(esi + 0x30);
    MEM32(ebp + -12) = eax;
    goto loc_004BBA65;

loc_004BBA48: ;
    PUSH32(esp, 0x8829FC);
    PUSH32(esp, MEM32(esi));
    PUSH32(esp, 0); sub_00470C66(); /* call 0x00470C66 */

loc_004BBA54: ;
    (void)0; /* test eax, eax - flags set for next jcc */
    POP32(esp, ecx);
    POP32(esp, ecx);
    if (TEST_NZ(eax, eax)) goto loc_004BBA65; /* jne: not equal / not zero */

loc_004BBA5A: ;
    if (CMP_NE(MEM32(ebp + -8), eax)) goto loc_004BBA65; /* jne: not equal / not zero */

loc_004BBA5F: ;
    eax = MEM32(esi + 0x30);
    MEM32(ebp + -8) = eax;

loc_004BBA65: ;
    MEM32(ebp + 8) = MEM32(ebp + 8) + 0x34;
    ebx++;
    if (CMP_B(ebx, MEM32(edi + 0x10))) goto loc_004BBA04; /* jb: below (unsigned <) */

loc_004BBA6F: ;
    ebx = 0; /* xor self */
    if (CMP_EQ(MEM32(ebp + -4), ebx)) goto loc_004BBADA; /* je: equal / zero */

loc_004BBA76: ;
    if (CMP_EQ(MEM32(ebp + -12), ebx)) goto loc_004BBADA; /* je: equal / zero */

loc_004BBA7B: ;
    if (CMP_EQ(MEM32(ebp + -8), ebx)) goto loc_004BBADA; /* je: equal / zero */

loc_004BBA80: ;
    PUSH32(esp, 0x8829CC);
    PUSH32(esp, MEM32(ebp + -4));
    PUSH32(esp, 0); sub_00470C66(); /* call 0x00470C66 */

loc_004BBA8D: ;
    esi = 0; /* xor self */
    POP32(esp, ecx);
    esi++;
    (void)0; /* test eax, eax - flags set for next jcc */
    POP32(esp, ecx);
    if (TEST_Z(eax, eax)) goto loc_004BBABB; /* je: equal / zero */

loc_004BBA96: ;
    PUSH32(esp, 0x88299C);
    PUSH32(esp, MEM32(ebp + -4));
    PUSH32(esp, 0); sub_00470C66(); /* call 0x00470C66 */

loc_004BBAA3: ;
    (void)0; /* test eax, eax - flags set for next jcc */
    POP32(esp, ecx);
    POP32(esp, ecx);
    if (TEST_NZ(eax, eax)) goto loc_004BBADA; /* jne: not equal / not zero */

loc_004BBAA9: ;
    eax = MEM32(ebp + -16);
    eax = MEM32(eax + 0xC4);
    eax = MEM32(eax + 0x50);
    MEM32(eax + 0x1E8) = esi;

loc_004BBABB: ;
    eax = MEM32(ebp + 0x14);
    MEM32(edi + 0x14) = esi;
    MEM32(eax) = ebx;
    eax = MEM32(ebp + 0xC);
    PUSH32(esp, 0x1FF);
    PUSH32(esp, MEM32(ebp + -8));
    eax = eax + 8;
    PUSH32(esp, eax);
    PUSH32(esp, 0); sub_0046EEC0(); /* call 0x0046EEC0 */

loc_004BBAD7: ;
    esp = esp + 0xC;

loc_004BBADA: ;
    POP32(esp, esi);

loc_004BBADB: ;
    POP32(esp, edi);
    POP32(esp, ebx);
    esp = ebp;
    POP32(esp, ebp); /* leave */
    esp += 20; return; /* ret 16 */

}

/**
 * sub_004BBAE1
 * Original: 0x004BBAE1 - 0x004BBBFC (283 bytes, 108 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_004BBAE1(void)
{
    uint32_t ebp;
    int _flags = 0; /* fallback flag var */

loc_004BBAE1: ;
    PUSH32(esp, ebp);
    ebp = esp;
    esp = esp - 0xC;
    PUSH32(esp, ebx);
    eax = 0; /* xor self */
    PUSH32(esp, esi);
    esi = MEM32(ebp + 0x18);
    MEM32(ebp + -8) = eax;
    MEM32(ebp + -4) = eax;
    MEM32(ebp + -12) = eax;
    MEM32(esi) = eax;
    eax = MEM32(ebp + 8);
    PUSH32(esp, edi);
    edi = eax;
    ecx = eax;
    edx = eax + 1;

loc_004BBB04: ;
    SET_LO8(ebx, MEM8(eax));
    eax++;
    if (TEST_NZ(LO8(ebx), LO8(ebx))) goto loc_004BBB04; /* jne: not equal / not zero */

loc_004BBB0B: ;
    eax = eax - edx;
    edx = MEM32(ebp + 8);
    eax = eax + edx;
    (void)0; /* cmp edx, eax - flags set for next jcc */
    MEM32(ebp + 0x18) = eax;
    if (CMP_EQ(edx, eax)) goto loc_004BBBF5; /* je: equal / zero */

loc_004BBB1D: ;
    if (CMP_A(edx, eax)) goto loc_004BBBF5; /* ja: above (unsigned >) */

loc_004BBB23: ;
    edx = 0; /* xor self */

loc_004BBB25: ;
    SET_LO8(eax, MEM8(ecx));
    if (CMP_EQ(LO8(eax), LO8(edx))) goto loc_004BBB98; /* je: equal / zero */

loc_004BBB2B: ;
    if (CMP_LE(LO8(eax), 8)) goto loc_004BBBEB; /* jle: less or equal (signed <=) */

loc_004BBB33: ;
    if (CMP_LE(LO8(eax), 0xA)) goto loc_004BBB98; /* jle: less or equal (signed <=) */

loc_004BBB37: ;
    if (CMP_EQ(LO8(eax), 0xD)) goto loc_004BBB98; /* je: equal / zero */

loc_004BBB3B: ;
    if (CMP_EQ(LO8(eax), 0x20)) goto loc_004BBB98; /* je: equal / zero */

loc_004BBB3F: ;
    if (CMP_EQ(LO8(eax), 0x22)) goto loc_004BBB73; /* je: equal / zero */

loc_004BBB43: ;
    if (CMP_NE(LO8(eax), 0x3D)) goto loc_004BBBEB; /* jne: not equal / not zero */

loc_004BBB4B: ;
    if (CMP_NE(MEM32(ebp + -4), edx)) goto loc_004BBBEB; /* jne: not equal / not zero */

loc_004BBB54: ;
    if (CMP_NE(MEM32(ebp + -8), edx)) goto loc_004BBBEB; /* jne: not equal / not zero */

loc_004BBB5D: ;
    ebx = MEM32(ebp + 0xC);
    MEM8(ecx) = LO8(edx);
    eax = MEM32(esi);
    MEM32(ebx + eax * 4) = edi;
    edi = ecx + 1;
    MEM32(ebp + -8) = 1;
    goto loc_004BBBEB;

loc_004BBB73: ;
    if (CMP_EQ(ecx, MEM32(ebp + 8))) goto loc_004BBB7E; /* je: equal / zero */

loc_004BBB78: ;
    if (CMP_EQ(MEM8(ecx + -1), 0x5C)) goto loc_004BBBEB; /* je: equal / zero */

loc_004BBB7E: ;
    if (CMP_EQ(MEM32(ebp + -4), edx)) goto loc_004BBB8A; /* je: equal / zero */

loc_004BBB83: ;
    MEM32(ebp + -4) = edx;
    MEM8(ecx) = LO8(edx);
    goto loc_004BBBEB;

loc_004BBB8A: ;
    (void)0; /* cmp ecx, edi - flags set for next jcc */
    MEM32(ebp + -4) = 1;
    if (CMP_NE(ecx, edi)) goto loc_004BBBEB; /* jne: not equal / not zero */

loc_004BBB95: ;
    edi++;
    goto loc_004BBBEB;

loc_004BBB98: ;
    if (CMP_EQ(MEM32(ebp + -4), edx)) goto loc_004BBBA1; /* je: equal / zero */

loc_004BBB9D: ;
    if (CMP_NE(LO8(eax), LO8(edx))) goto loc_004BBBEB; /* jne: not equal / not zero */

loc_004BBBA1: ;
    (void)0; /* cmp MEM32(ebp + -8), edx - flags set for next jcc */
    MEM8(ecx) = LO8(edx);
    if (CMP_EQ(MEM32(ebp + -8), edx)) goto loc_004BBBB5; /* je: equal / zero */

loc_004BBBA8: ;
    eax = MEM32(esi);
    ebx = MEM32(ebp + 0x10);
    MEM32(ebx + eax * 4) = edi;
    MEM32(ebp + -8) = edx;
    goto loc_004BBBD2;

loc_004BBBB5: ;
    if (CMP_NE(ecx, edi)) goto loc_004BBBC2; /* jne: not equal / not zero */

loc_004BBBB9: ;
    MEM32(ebp + -12) = 1;
    goto loc_004BBBD2;

loc_004BBBC2: ;
    eax = MEM32(esi);
    ebx = MEM32(ebp + 0xC);
    MEM32(ebx + eax * 4) = edi;
    eax = MEM32(esi);
    edi = MEM32(ebp + 0x10);
    MEM32(edi + eax * 4) = ecx;

loc_004BBBD2: ;
    (void)0; /* cmp MEM32(ebp + -12), edx - flags set for next jcc */
    edi = ecx + 1;
    if (CMP_EQ(MEM32(ebp + -12), edx)) goto loc_004BBBDF; /* je: equal / zero */

loc_004BBBDA: ;
    MEM32(ebp + -12) = edx;
    goto loc_004BBBEB;

loc_004BBBDF: ;
    MEM32(esi) = MEM32(esi) + 1;
    eax = MEM32(esi);
    if (CMP_B(eax, MEM32(ebp + 0x14))) goto loc_004BBBEB; /* jb: below (unsigned <) */

loc_004BBBE8: ;
    ecx = MEM32(ebp + 0x18);

loc_004BBBEB: ;
    ecx++;
    if (CMP_BE(ecx, MEM32(ebp + 0x18))) goto loc_004BBB25; /* jbe: below or equal (unsigned <=) */

loc_004BBBF5: ;
    POP32(esp, edi);
    POP32(esp, esi);
    POP32(esp, ebx);
    esp = ebp;
    POP32(esp, ebp); /* leave */
    esp += 24; return; /* ret 20 */

}

/**
 * sub_004BBBFC
 * Original: 0x004BBBFC - 0x004BBD5F (355 bytes, 139 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_004BBBFC(void)
{
    uint32_t ebp;
    int _flags = 0; /* fallback flag var */

loc_004BBBFC: ;
    PUSH32(esp, ebp);
    ebp = esp;
    esp = esp - 0xC;
    PUSH32(esp, ebx);
    PUSH32(esp, esi);
    esi = MEM32(ebp + 0x10);
    (void)0; /* test esi, esi - flags set for next jcc */
    PUSH32(esp, edi);
    if (TEST_Z(esi, esi)) goto loc_004BBC83; /* je: equal / zero */

loc_004BBC0C: ;
    MEM32(ebp + -4) = MEM32(ebp + -4) & 0;
    if (CMP_BE(MEM32(esi + 0x2C), 0)) goto loc_004BBC83; /* jbe: below or equal (unsigned <=) */

loc_004BBC16: ;
    esi = esi + 4;

loc_004BBC19: ;
    ebx = MEM32(esi);
    eax = ebx;
    ecx = eax + 1;

loc_004BBC20: ;
    SET_LO8(edx, MEM8(eax));
    eax++;
    if (TEST_NZ(LO8(edx), LO8(edx))) goto loc_004BBC20; /* jne: not equal / not zero */

loc_004BBC27: ;
    eax = eax - ecx;
    edi = eax;
    if (CMP_B(edi, 7)) goto loc_004BBC72; /* jb: below (unsigned <) */

loc_004BBC30: ;
    PUSH32(esp, 6);
    PUSH32(esp, 0x882A20);
    PUSH32(esp, ebx);
    PUSH32(esp, 0); sub_00470DFA(); /* call 0x00470DFA */

loc_004BBC3D: ;
    esp = esp + 0xC;
    if (TEST_NZ(eax, eax)) goto loc_004BBC72; /* jne: not equal / not zero */

loc_004BBC44: ;
    eax = MEM32(esi + 0x14);
    edi = edi - 6;
    ecx = eax + 1;

loc_004BBC4D: ;
    SET_LO8(edx, MEM8(eax));
    eax++;
    if (TEST_NZ(LO8(edx), LO8(edx))) goto loc_004BBC4D; /* jne: not equal / not zero */

loc_004BBC54: ;
    eax = eax - ecx;
    MEM32(ebp + -12) = eax;
    if ((eax == 0)) goto loc_004BBC72; /* je: equal / zero */

loc_004BBC5B: ;
    eax = MEM32(esi);
    ebx = MEM32(ebp + 8);
    PUSH32(esp, edi);
    eax = eax + 6;
    PUSH32(esp, eax);
    PUSH32(esp, ebx);
    PUSH32(esp, 0); sub_00470DFA(); /* call 0x00470DFA */

loc_004BBC6B: ;
    esp = esp + 0xC;
    if (TEST_Z(eax, eax)) goto loc_004BBCA6; /* je: equal / zero */

loc_004BBC72: ;
    MEM32(ebp + -4) = MEM32(ebp + -4) + 1;
    eax = MEM32(ebp + 0x10);
    ecx = MEM32(ebp + -4);
    esi = esi + 4;
    if (CMP_B(ecx, MEM32(eax + 0x2C))) goto loc_004BBC19; /* jb: below (unsigned <) */

loc_004BBC83: ;
    eax = MEM32(ebp + 0x14);
    (void)0; /* test eax, eax - flags set for next jcc */
    MEM32(ebp + 0x14) = eax;
    if (CMP_BE(eax & eax, 0)) goto loc_004BBD55; /* jbe: below or equal (unsigned <=) */

loc_004BBC91: ;
    ecx = MEM32(ebp + 0xC);
    esi = eax;
    eax = (uint32_t)((int32_t)eax * (int32_t)0x34);
    eax = eax + ecx;
    esi = (uint32_t)((int32_t)esi * (int32_t)0xD);
    edi = eax + 0x2C;
    eax = eax + 4;
    goto loc_004BBCBB;

loc_004BBCA6: ;
    eax = edi + ebx;
    if (CMP_NE(MEM8(eax), 0x3A)) goto loc_004BBD58; /* jne: not equal / not zero */

loc_004BBCB2: ;
    eax++;
    goto loc_004BBD58;

loc_004BBCB8: ;
    eax = MEM32(ebp + -8);

loc_004BBCBB: ;
    MEM32(ebp + 0x14) = MEM32(ebp + 0x14) - 1;
    MEM32(ebp + -4) = MEM32(ebp + -4) & 0;
    eax = eax - 0x34;
    edi = edi - 0x34;
    esi = esi - 0xD;
    (void)0; /* cmp MEM32(edi), 0 - flags set for next jcc */
    MEM32(ebp + -8) = eax;
    if (CMP_BE(MEM32(edi), 0)) goto loc_004BBD4B; /* jbe: below or equal (unsigned <=) */

loc_004BBCD3: ;
    MEM32(ebp + 0x10) = eax;

loc_004BBCD6: ;
    eax = MEM32(ebp + 0x10);
    edx = MEM32(eax);
    eax = edx;
    ecx = eax + 1;

loc_004BBCE0: ;
    SET_LO8(ebx, MEM8(eax));
    eax++;
    if (TEST_NZ(LO8(ebx), LO8(ebx))) goto loc_004BBCE0; /* jne: not equal / not zero */

loc_004BBCE7: ;
    eax = eax - ecx;
    ebx = eax;
    if (CMP_B(ebx, 7)) goto loc_004BBD3D; /* jb: below (unsigned <) */

loc_004BBCF0: ;
    PUSH32(esp, 6);
    PUSH32(esp, 0x882A20);
    PUSH32(esp, edx);
    PUSH32(esp, 0); sub_00470DFA(); /* call 0x00470DFA */

loc_004BBCFD: ;
    esp = esp + 0xC;
    if (TEST_NZ(eax, eax)) goto loc_004BBD3D; /* jne: not equal / not zero */

loc_004BBD04: ;
    eax = MEM32(ebp + -4);
    ecx = MEM32(ebp + 0xC);
    ebx = ebx - 6;
    eax = eax + esi;
    eax = MEM32(ecx + eax * 4 + 0x18);
    ecx = eax + 1;

loc_004BBD16: ;
    SET_LO8(edx, MEM8(eax));
    eax++;
    if (TEST_NZ(LO8(edx), LO8(edx))) goto loc_004BBD16; /* jne: not equal / not zero */

loc_004BBD1D: ;
    eax = eax - ecx;
    MEM32(ebp + -12) = eax;
    if ((eax == 0)) goto loc_004BBD3D; /* je: equal / zero */

loc_004BBD24: ;
    eax = MEM32(ebp + 0x10);
    eax = MEM32(eax);
    PUSH32(esp, ebx);
    eax = eax + 6;
    PUSH32(esp, eax);
    PUSH32(esp, MEM32(ebp + 8));
    PUSH32(esp, 0); sub_00470DFA(); /* call 0x00470DFA */

loc_004BBD36: ;
    esp = esp + 0xC;
    if (TEST_Z(eax, eax)) { sub_004BBD5F(); return; } /* je: equal / zero */

loc_004BBD3D: ;
    MEM32(ebp + -4) = MEM32(ebp + -4) + 1;
    eax = MEM32(ebp + -4);
    MEM32(ebp + 0x10) = MEM32(ebp + 0x10) + 4;
    if (CMP_B(eax, MEM32(edi))) goto loc_004BBCD6; /* jb: below (unsigned <) */

loc_004BBD4B: ;
    if (CMP_A(MEM32(ebp + 0x14), 0)) goto loc_004BBCB8; /* ja: above (unsigned >) */

loc_004BBD55: ;
    eax = MEM32(ebp + 8);

loc_004BBD58: ;
    POP32(esp, edi);
    POP32(esp, esi);
    POP32(esp, ebx);
    esp = ebp;
    POP32(esp, ebp); /* leave */
    esp += 20; return; /* ret 16 */

}

/**
 * sub_004BBD69
 * Original: 0x004BBD69 - 0x004BBD83 (26 bytes, 13 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_004BBD69(void)
{
    uint32_t ebp;
    int _flags = 0; /* fallback flag var */

loc_004BBD69: ;
    PUSH32(esp, ebp);
    ebp = esp;
    PUSH32(esp, esi);
    PUSH32(esp, MEM32(ebp + 0xC));
    esi = ecx;
    PUSH32(esp, MEM32(ebp + 8));
    PUSH32(esp, 0); sub_00470C66(); /* call 0x00470C66 */

loc_004BBD7A: ;
    (void)0; /* test eax, eax - flags set for next jcc */
    POP32(esp, ecx);
    POP32(esp, ecx);
    if (TEST_NZ(eax, eax)) { sub_004BBD83(); return; } /* jne: not equal / not zero */

loc_004BBD80: ;
    eax++;
    g_seh_ebp = ebp; sub_004BBDAF(); return; /* tail jmp 0x004BBDAF */

}

/**
 * sub_004BBDB4
 * Original: 0x004BBDB4 - 0x004BBDFE (74 bytes, 32 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_004BBDB4(void)
{
    uint32_t ebp;
    int _flags = 0; /* fallback flag var */

loc_004BBDB4: ;
    PUSH32(esp, ebp);
    ebp = esp;
    PUSH32(esp, ecx);
    PUSH32(esp, ecx);
    PUSH32(esp, ebx);
    ebx = MEM32(ebp + 0x14);
    PUSH32(esp, esi);
    esi = MEM32(ebp + 0x18);
    PUSH32(esp, edi);
    eax = 0; /* xor self */
    edi = ebx;
    MEM32(edi) = eax; edi += 4; /* stosd */
    MEM32(edi) = eax; edi += 4; /* stosd */
    MEM32(edi) = eax; edi += 4; /* stosd */
    MEM32(edi) = eax; edi += 4; /* stosd */
    edi = MEM32(ebp + 8);
    PUSH32(esp, 7);
    ecx = 0; /* xor self */
    PUSH32(esp, 0x882A28);
    MEM16(ebx) = 2;
    MEM16(ebx + 2) = 0x5000;
    PUSH32(esp, edi);
    MEM32(ebp + -8) = ecx;
    MEM32(ebp + -4) = ecx;
    MEM32(esi) = ecx;
    PUSH32(esp, 0); sub_00470DFA(); /* call 0x00470DFA */

loc_004BBDEF: ;
    esp = esp + 0xC;
    if (TEST_NZ(eax, eax)) { sub_004BBDFE(); return; } /* jne: not equal / not zero */

loc_004BBDF6: ;
    edi = edi + 7;
    MEM32(ebp + 8) = edi;
    g_seh_ebp = ebp; sub_004BBE29(); return; /* tail jmp 0x004BBE29 */

}

/**
 * sub_004BBEC6
 * Original: 0x004BBEC6 - 0x004BBF45 (127 bytes, 47 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_004BBEC6(void)
{
    uint32_t ebp;
    int _flags = 0; /* fallback flag var */

loc_004BBEC6: ;
    PUSH32(esp, ebp);
    ebp = esp;
    esp = esp - 0x24;
    PUSH32(esp, ebx);
    PUSH32(esp, esi);
    PUSH32(esp, edi);
    ebx = 0; /* xor self */
    PUSH32(esp, 0x882A30);
    MEM32(ebp + -12) = ecx;
    MEM32(ebp + -4) = ebx;
    MEM16(ebp + -36) = 2;
    PUSH32(esp, 0); sub_0049B417(); /* call 0x0049B417 */

loc_004BBEE7: ;
    esi = MEM32(ebp + 8);
    MEM32(ebp + -32) = eax;
    eax = MEM32(esi + 8);
    ecx = 0x8827D0;
    MEM32(esi + 0x54) = eax;
    eax = ecx;
    MEM16(ebp + -34) = 0x6C07;
    edi = eax + 1;

loc_004BBF03: ;
    SET_LO8(edx, MEM8(eax));
    eax++;
    if (CMP_NE(LO8(edx), LO8(ebx))) goto loc_004BBF03; /* jne: not equal / not zero */

loc_004BBF0A: ;
    PUSH32(esp, ebx);
    eax = eax - edi;
    MEM32(ebp + -16) = ecx;
    edi = esi + 0x44;
    PUSH32(esp, edi);
    PUSH32(esp, 0x10);
    ecx = ebp + -36;
    PUSH32(esp, ecx);
    PUSH32(esp, ebx);
    ecx = ebp + -8;
    PUSH32(esp, ecx);
    PUSH32(esp, 1);
    ecx = ebp + -20;
    MEM32(esi + 0x2EC) = eax;
    MEM32(ebp + -20) = eax;
    eax = MEM32(esi + 0x34);
    PUSH32(esp, ecx);
    PUSH32(esp, eax);
    PUSH32(esp, 0); sub_0048D7BC(); /* call 0x0048D7BC */

loc_004BBF37: ;
    if (CMP_NE(eax, 0xFFFFFFFFu)) { sub_004BBF45(); return; } /* jne: not equal / not zero */

loc_004BBF3C: ;
    MEM32(ebp + -4) = 0x80151919u;
    g_seh_ebp = ebp; sub_004BBFBC(); return; /* tail jmp 0x004BBFBC */

}

/**
 * sub_004BBFC6
 * Original: 0x004BBFC6 - 0x004BBFF1 (43 bytes, 12 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_004BBFC6(void)
{
    uint32_t ebp;
    int _flags = 0; /* fallback flag var */

loc_004BBFC6: ;
    PUSH32(esp, ebp);
    ebp = esp;
    esp = esp - 0x70;
    PUSH32(esp, ebx);
    ebx = MEM32(ebp + 8);
    MEM32(ebp + -4) = ecx;
    ecx = MEM32(ebx + 0x8F0);
    (void)0; /* cmp ecx, 0x3000 - flags set for next jcc */
    eax = ebx + 0x8F4;
    if (CMP_L(ecx, 0x3000)) { sub_004BBFF1(); return; } /* jl: less (signed <) */

loc_004BBFE7: ;
    eax = 0x80151918u;
    g_seh_ebp = ebp; sub_004BC170(); return; /* tail jmp 0x004BC170 */

}

/**
 * sub_004BC175
 * Original: 0x004BC175 - 0x004BC1EA (117 bytes, 44 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_004BC175(void)
{
    uint32_t ebp;
    int _flags = 0; /* fallback flag var */

loc_004BC175: ;
    PUSH32(esp, ebp);
    ebp = esp;
    esp = esp - 0x3C;
    PUSH32(esp, ebx);
    PUSH32(esp, esi);
    PUSH32(esp, edi);
    eax = ebp + -60;
    PUSH32(esp, eax);
    PUSH32(esp, 0); sub_0048D664(); /* call 0x0048D664 */

loc_004BC187: ;
    esi = MEM32(ebp + 8);
    (void)0; /* cmp MEM32(esi + 0x1E8), 0 - flags set for next jcc */
    MEM32(ebp + 8) = 0x88299C;
    if (CMP_NE(MEM32(esi + 0x1E8), 0)) goto loc_004BC1A1; /* jne: not equal / not zero */

loc_004BC19A: ;
    MEM32(ebp + 8) = 0x8829CC;

loc_004BC1A1: ;
    eax = ZX16(MEM16(ebp + 0xC));
    ecx = ZX8(MEM8(ebp + -53));
    edx = ZX8(MEM8(ebp + -54));
    edi = ZX8(MEM8(ebp + -55));
    ebx = ZX8(MEM8(ebp + -56));
    PUSH32(esp, eax);
    PUSH32(esp, eax);
    PUSH32(esp, ecx);
    PUSH32(esp, edx);
    PUSH32(esp, edi);
    PUSH32(esp, ebx);
    PUSH32(esp, ecx);
    PUSH32(esp, edx);
    PUSH32(esp, edi);
    PUSH32(esp, ebx);
    PUSH32(esp, eax);
    PUSH32(esp, eax);
    PUSH32(esp, MEM32(ebp + 8));
    eax = esi + 0x2F0;
    PUSH32(esp, 0x882A68);
    PUSH32(esp, 0x600);
    PUSH32(esp, eax);
    PUSH32(esp, 0); sub_004B4554(); /* call 0x004B4554 */

loc_004BC1DA: ;
    esp = esp + 0x40;
    POP32(esp, edi);
    MEM32(esi + 0x2EC) = eax;
    POP32(esp, esi);
    POP32(esp, ebx);
    esp = ebp;
    POP32(esp, ebp); /* leave */
    esp += 12; return; /* ret 8 */

}

/**
 * sub_004BC1EA
 * Original: 0x004BC1EA - 0x004BC220 (54 bytes, 21 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_004BC1EA(void)
{
    int _flags = 0; /* fallback flag var */

loc_004BC1EA: ;
    PUSH32(esp, esi);
    esi = MEM32(esp + 8);
    PUSH32(esp, edi);
    PUSH32(esp, 0xFFFFFFFFu);
    PUSH32(esp, 0);
    eax = esi + 0x20;
    PUSH32(esp, eax);
    edi = ecx;
    PUSH32(esp, 0); sub_0049CBD9(); /* call 0x0049CBD9 */

loc_004BC1FF: ;
    eax = MEM32(esi + 0x34);
    if (CMP_EQ(eax, 0xFFFFFFFFu)) goto loc_004BC20D; /* je: equal / zero */

loc_004BC207: ;
    PUSH32(esp, eax);
    PUSH32(esp, 0); sub_0048D720(); /* call 0x0048D720 */

loc_004BC20D: ;
    esi = esi + 0x98;
    PUSH32(esp, esi);
    ecx = edi;
    PUSH32(esp, 0); sub_004B5278(); /* call 0x004B5278 */

loc_004BC21B: ;
    POP32(esp, edi);
    POP32(esp, esi);
    esp += 8; return; /* ret 4 */

}

/**
 * sub_004BC220
 * Original: 0x004BC220 - 0x004BC2B7 (151 bytes, 55 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_004BC220(void)
{
    uint32_t ebp;
    int _flags = 0; /* fallback flag var */

loc_004BC220: ;
    PUSH32(esp, ebp);
    ebp = esp;
    esp = esp - 0xC;
    PUSH32(esp, ebx);
    PUSH32(esp, esi);
    eax = 0; /* xor self */
    PUSH32(esp, edi);
    edi = MEM32(ebp + 8);
    (void)0; /* cmp MEM32(edi + 0x10), eax - flags set for next jcc */
    ebx = ecx;
    MEM32(ebp + -4) = eax;
    MEM32(ebp + -12) = eax;
    MEM32(ebp + -8) = eax;
    if (CMP_BE(MEM32(edi + 0x10), eax)) goto loc_004BC2A4; /* jbe: below or equal (unsigned <=) */

loc_004BC23E: ;
    MEM32(ebp + 8) = eax;

loc_004BC241: ;
    PUSH32(esp, MEM32(edi + 4));
    esi = MEM32(edi + 8);
    esi = esi + MEM32(ebp + 8);
    ecx = ebx;
    PUSH32(esp, esi);
    PUSH32(esp, MEM32(ebp + 0x10));
    PUSH32(esp, 0x882CFC);
    PUSH32(esp, MEM32(esi));
    PUSH32(esp, 0); sub_004BBD69(); /* call 0x004BBD69 */

loc_004BC25C: ;
    if (TEST_Z(eax, eax)) goto loc_004BC26E; /* je: equal / zero */

loc_004BC260: ;
    if (CMP_NE(MEM32(ebp + -4), 0)) goto loc_004BC293; /* jne: not equal / not zero */

loc_004BC266: ;
    eax = MEM32(esi + 0x30);
    MEM32(ebp + -4) = eax;
    goto loc_004BC293;

loc_004BC26E: ;
    PUSH32(esp, MEM32(edi + 4));
    ecx = ebx;
    PUSH32(esp, esi);
    PUSH32(esp, MEM32(ebp + 0x10));
    PUSH32(esp, 0x882CE8);
    PUSH32(esp, MEM32(esi));
    PUSH32(esp, 0); sub_004BBD69(); /* call 0x004BBD69 */

loc_004BC283: ;
    if (TEST_Z(eax, eax)) goto loc_004BC293; /* je: equal / zero */

loc_004BC287: ;
    if (CMP_NE(MEM32(ebp + -12), 0)) goto loc_004BC293; /* jne: not equal / not zero */

loc_004BC28D: ;
    eax = MEM32(esi + 0x30);
    MEM32(ebp + -12) = eax;

loc_004BC293: ;
    MEM32(ebp + -8) = MEM32(ebp + -8) + 1;
    eax = MEM32(ebp + -8);
    MEM32(ebp + 8) = MEM32(ebp + 8) + 0x34;
    if (CMP_B(eax, MEM32(edi + 0x10))) goto loc_004BC241; /* jb: below (unsigned <) */

loc_004BC2A2: ;
    eax = 0; /* xor self */

loc_004BC2A4: ;
    esi = MEM32(ebp + 0xC);
    if (CMP_NE(MEM32(esi), 0xC8)) { sub_004BC2B7(); return; } /* jne: not equal / not zero */

loc_004BC2AF: ;
    MEM32(esi + 0x208) = eax;
    g_seh_ebp = ebp; sub_004BC2EF(); return; /* tail jmp 0x004BC2EF */

}

/**
 * sub_004BC302
 * Original: 0x004BC302 - 0x004BC5D4 (722 bytes, 257 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_004BC302(void)
{
    uint32_t ebp;
    int _flags = 0; /* fallback flag var */
    int _cf = 0; /* carry flag */

loc_004BC302: ;
    PUSH32(esp, ebp);
    ebp = esp;
    esp = esp - 0x33C;
    eax = MEM32(ebp + 8);
    PUSH32(esp, esi);
    esi = 0; /* xor self */
    (void)0; /* cmp MEM8(eax), 0 - flags set for next jcc */
    MEM32(ebp + -36) = ecx;
    ecx = eax;
    MEM32(ebp + -4) = esi;
    MEM32(ebp + -8) = esi;
    MEM32(ebp + -40) = esi;
    MEM32(ebp + -48) = ecx;
    if (CMP_EQ(MEM8(eax), 0)) goto loc_004BC5CF; /* je: equal / zero */

loc_004BC32B: ;
    eax = ebp + -780;
    MEM32(ebp + -12) = eax;
    eax = ebp + -804;
    MEM32(ebp + -20) = eax;
    PUSH32(esp, ebx);
    eax = ebp + -824;
    MEM32(ebp + -24) = eax;
    PUSH32(esp, edi);
    eax = ebp + -784;
    MEM32(ebp + 8) = eax;
    PUSH32(esp, 0x34);
    POP32(esp, ebx);
    eax = ebp + -804;
    eax = eax - ebx;
    MEM32(ebp + -32) = eax;
    eax = ebp + -824;
    edx = ebp + -828;
    eax = eax - ebx;
    MEM32(ebp + -16) = edx;
    MEM32(ebp + -28) = eax;

loc_004BC373: ;
    eax = (uint32_t)(int32_t)SMEM8(ecx);
    eax = eax - 0x3C;
    if ((eax == 0)) goto loc_004BC5A2; /* je: equal / zero */

loc_004BC37F: ;
    eax--;
    eax--;
    if ((eax != 0)) goto loc_004BC5B1; /* jne: not equal / not zero */

loc_004BC387: ;
    if (TEST_Z(esi, esi)) goto loc_004BC5C0; /* je: equal / zero */

loc_004BC38F: ;
    MEM8(ecx) = 0;
    if (CMP_NE(MEM8(esi), 0x2F)) goto loc_004BC3E0; /* jne: not equal / not zero */

loc_004BC397: ;
    esi++;
    if (CMP_EQ(MEM32(ebp + -4), 0)) goto loc_004BC5C0; /* je: equal / zero */

loc_004BC3A2: ;
    eax = MEM32(edx + -52);
    edi = esi;

loc_004BC3A7: ;
    SET_LO8(edx, MEM8(edi));
    SET_LO8(ecx, LO8(edx));
    if (CMP_NE(LO8(edx), MEM8(eax))) goto loc_004BC3C9; /* jne: not equal / not zero */

loc_004BC3AF: ;
    if (TEST_Z(LO8(ecx), LO8(ecx))) goto loc_004BC3C5; /* je: equal / zero */

loc_004BC3B3: ;
    SET_LO8(edx, MEM8(edi + 1));
    SET_LO8(ecx, LO8(edx));
    if (CMP_NE(LO8(edx), MEM8(eax + 1))) goto loc_004BC3C9; /* jne: not equal / not zero */

loc_004BC3BD: ;
    edi++;
    edi++;
    eax++;
    eax++;
    if (TEST_NZ(LO8(ecx), LO8(ecx))) goto loc_004BC3A7; /* jne: not equal / not zero */

loc_004BC3C5: ;
    eax = 0; /* xor self */
    goto loc_004BC3CE;

loc_004BC3C9: ;
    eax = _cf ? 0xFFFFFFFF : 0; /* sbb self (CF extend) */
    eax = eax - 0xFFFFFFFFu - _cf; /* sbb */

loc_004BC3CE: ;
    if (TEST_NZ(eax, eax)) goto loc_004BC5C0; /* jne: not equal / not zero */

loc_004BC3D6: ;
    edx = MEM32(ebp + 0xC);
    edi = 0; /* xor self */
    goto loc_004BC4E2;

loc_004BC3E0: ;
    if (CMP_NE(MEM8(ecx + -1), 0x2F)) goto loc_004BC3F1; /* jne: not equal / not zero */

loc_004BC3E6: ;
    MEM8(ecx + -1) = 0;
    MEM32(ebp + -40) = 1;

loc_004BC3F1: ;
    if (CMP_AE(MEM32(ebp + -4), 0xF)) goto loc_004BC5C0; /* jae: above or equal (unsigned >=) */

loc_004BC3FB: ;
    MEM32(edx) = esi;
    goto loc_004BC412;

loc_004BC3FF: ;
    esi++;
    SET_LO8(eax, MEM8(esi));
    if (CMP_EQ(LO8(eax), 0x20)) goto loc_004BC419; /* je: equal / zero */

loc_004BC406: ;
    if (CMP_EQ(LO8(eax), 9)) goto loc_004BC419; /* je: equal / zero */

loc_004BC40A: ;
    if (CMP_EQ(LO8(eax), 0xD)) goto loc_004BC419; /* je: equal / zero */

loc_004BC40E: ;
    if (CMP_EQ(LO8(eax), 0xA)) goto loc_004BC419; /* je: equal / zero */

loc_004BC412: ;
    if (CMP_NE(MEM8(esi), 0)) goto loc_004BC3FF; /* jne: not equal / not zero */

loc_004BC417: ;
    goto loc_004BC41D;

loc_004BC419: ;
    MEM8(esi) = 0;
    esi++;

loc_004BC41D: ;
    eax = esi;
    edi = eax + 1;

loc_004BC422: ;
    SET_LO8(ecx, MEM8(eax));
    eax++;
    if (TEST_NZ(LO8(ecx), LO8(ecx))) goto loc_004BC422; /* jne: not equal / not zero */

loc_004BC429: ;
    PUSH32(esp, MEM32(ebp + 8));
    ecx = MEM32(ebp + -12);
    PUSH32(esp, 5);
    PUSH32(esp, MEM32(ebp + -20));
    eax = eax - edi;
    PUSH32(esp, MEM32(ebp + -24));
    eax = eax + esi + 1;
    MEM32(ecx) = eax;
    ecx = MEM32(ebp + -36);
    PUSH32(esp, esi);
    PUSH32(esp, 0); sub_004BBAE1(); /* call 0x004BBAE1 */

loc_004BC448: ;
    eax = MEM32(ebp + -16);
    PUSH32(esp, 0x882D08);
    PUSH32(esp, MEM32(eax));
    PUSH32(esp, 0); sub_00470C66(); /* call 0x00470C66 */

loc_004BC457: ;
    (void)0; /* test eax, eax - flags set for next jcc */
    edx = MEM32(ebp + 0xC);
    POP32(esp, ecx);
    POP32(esp, ecx);
    if (TEST_Z(eax, eax)) goto loc_004BC4D4; /* je: equal / zero */

loc_004BC460: ;
    MEM32(ebp + -4) = MEM32(ebp + -4) + 1;
    eax = MEM32(ebp + -4);
    MEM32(ebp + -16) = MEM32(ebp + -16) + ebx;
    MEM32(ebp + 8) = MEM32(ebp + 8) + ebx;
    MEM32(ebp + -24) = MEM32(ebp + -24) + ebx;
    MEM32(ebp + -28) = MEM32(ebp + -28) + ebx;
    MEM32(ebp + -20) = MEM32(ebp + -20) + ebx;
    MEM32(ebp + -32) = MEM32(ebp + -32) + ebx;
    MEM32(ebp + -12) = MEM32(ebp + -12) + ebx;
    if (CMP_NE(eax, MEM32(edx + 4))) goto loc_004BC4D4; /* jne: not equal / not zero */

loc_004BC480: ;
    edi = 0; /* xor self */
    if (CMP_BE(eax & eax, 0)) goto loc_004BC4C8; /* jbe: below or equal (unsigned <=) */

loc_004BC486: ;
    eax = ebp + -828;
    MEM32(ebp + -44) = eax;
    goto loc_004BC494;

loc_004BC491: ;
    edx = MEM32(ebp + 0xC);

loc_004BC494: ;
    ecx = MEM32(ebp + -36);
    ebx = edi + 1;
    PUSH32(esp, ebx);
    PUSH32(esp, 0);
    eax = ebp + -828;
    PUSH32(esp, eax);
    eax = MEM32(edx);
    PUSH32(esp, MEM32(eax + edi * 4));
    eax = MEM32(ebp + -44);
    PUSH32(esp, MEM32(eax));
    PUSH32(esp, 0); sub_004BBD69(); /* call 0x004BBD69 */

loc_004BC4B3: ;
    if (TEST_Z(eax, eax)) goto loc_004BC4C2; /* je: equal / zero */

loc_004BC4B7: ;
    MEM32(ebp + -44) = MEM32(ebp + -44) + 0x34;
    edi = ebx;
    if (CMP_B(edi, MEM32(ebp + -4))) goto loc_004BC491; /* jb: below (unsigned <) */

loc_004BC4C2: ;
    edx = MEM32(ebp + 0xC);
    PUSH32(esp, 0x34);
    POP32(esp, ebx);

loc_004BC4C8: ;
    if (CMP_NE(edi, MEM32(ebp + -4))) goto loc_004BC4D4; /* jne: not equal / not zero */

loc_004BC4CD: ;
    MEM32(ebp + -8) = 1;

loc_004BC4D4: ;
    edi = 0; /* xor self */
    if (CMP_EQ(MEM32(ebp + -40), edi)) goto loc_004BC598; /* je: equal / zero */

loc_004BC4DF: ;
    MEM32(ebp + -40) = edi;

loc_004BC4E2: ;
    if (CMP_EQ(MEM32(ebp + -8), edi)) goto loc_004BC580; /* je: equal / zero */

loc_004BC4EB: ;
    eax = MEM32(ebp + -4);
    eax = eax - MEM32(edx + 4);
    eax = eax - edi;
    if ((eax == 0)) goto loc_004BC54E; /* je: equal / zero */

loc_004BC4F5: ;
    eax--;
    if ((eax != 0)) goto loc_004BC580; /* jne: not equal / not zero */

loc_004BC4FC: ;
    eax = MEM32(edx + 0x10);
    if (CMP_AE(eax, MEM32(edx + 0xC))) goto loc_004BC580; /* jae: above or equal (unsigned >=) */

loc_004BC504: ;
    ecx = MEM32(ebp + 8);
    eax = (uint32_t)((int32_t)eax * (int32_t)0x34);
    eax = eax + MEM32(edx + 8);
    ecx = MEM32(ecx + -52);
    (void)0; /* cmp ecx, edi - flags set for next jcc */
    MEM32(eax) = esi;
    MEM32(eax + 0x2C) = ecx;
    if (CMP_BE(ecx, edi)) goto loc_004BC540; /* jbe: below or equal (unsigned <=) */

loc_004BC519: ;
    esi = MEM32(ebp + -28);
    edi = eax + 4;
    memcpy((void*)XBOX_PTR(edi), (void*)XBOX_PTR(esi), ecx * 4);
    esi += ecx * 4; edi += ecx * 4; ecx = 0; /* rep movsd */
    ecx = MEM32(eax + 0x2C);
    esi = MEM32(ebp + -32);
    ecx = ecx << 2;
    ebx = ecx;
    ecx = ecx >> 2;
    edi = eax + 0x18;
    memcpy((void*)XBOX_PTR(edi), (void*)XBOX_PTR(esi), ecx * 4);
    esi += ecx * 4; edi += ecx * 4; ecx = 0; /* rep movsd */
    ecx = ebx;
    ecx = ecx & 3;
    PUSH32(esp, 0x34);
    memcpy((void*)XBOX_PTR(edi), (void*)XBOX_PTR(esi), ecx);
    esi += ecx; edi += ecx; ecx = 0; /* rep movsb */
    POP32(esp, ebx);
    edi = 0; /* xor self */

loc_004BC540: ;
    ecx = MEM32(ebp + -12);
    ecx = MEM32(ecx + -52);
    MEM32(eax + 0x30) = ecx;
    MEM32(edx + 0x10) = MEM32(edx + 0x10) + 1;
    goto loc_004BC580;

loc_004BC54E: ;
    eax = MEM32(ebp + 0x10);
    (void)0; /* cmp MEM32(eax + 4), edi - flags set for next jcc */
    ecx = ebp + -8;
    PUSH32(esp, ecx);
    ecx = ebp + -828;
    PUSH32(esp, ecx);
    ecx = MEM32(ebp + -36);
    PUSH32(esp, eax);
    PUSH32(esp, edx);
    if (CMP_EQ(MEM32(eax + 4), edi)) goto loc_004BC56D; /* je: equal / zero */

loc_004BC566: ;
    PUSH32(esp, 0); sub_004BB9DE(); /* call 0x004BB9DE */

loc_004BC56B: ;
    goto loc_004BC572;

loc_004BC56D: ;
    PUSH32(esp, 0); sub_004BC220(); /* call 0x004BC220 */

loc_004BC572: ;
    if (CMP_EQ(MEM32(ebp + -8), edi)) goto loc_004BC5CD; /* je: equal / zero */

loc_004BC577: ;
    eax = MEM32(ebp + 0xC);
    MEM32(ebp + -8) = edi;
    MEM32(eax + 0x10) = edi;

loc_004BC580: ;
    MEM32(ebp + -4) = MEM32(ebp + -4) - 1;
    MEM32(ebp + -16) = MEM32(ebp + -16) - ebx;
    MEM32(ebp + 8) = MEM32(ebp + 8) - ebx;
    MEM32(ebp + -24) = MEM32(ebp + -24) - ebx;
    MEM32(ebp + -28) = MEM32(ebp + -28) - ebx;
    MEM32(ebp + -20) = MEM32(ebp + -20) - ebx;
    MEM32(ebp + -32) = MEM32(ebp + -32) - ebx;
    MEM32(ebp + -12) = MEM32(ebp + -12) - ebx;

loc_004BC598: ;
    edx = MEM32(ebp + -16);
    ecx = MEM32(ebp + -48);
    esi = 0; /* xor self */
    goto loc_004BC5B1;

loc_004BC5A2: ;
    if (TEST_NZ(esi, esi)) goto loc_004BC5C0; /* jne: not equal / not zero */

loc_004BC5A6: ;
    esi = ecx + 1;
    MEM8(ecx) = 0;
    if (CMP_EQ(MEM8(esi), 0)) goto loc_004BC5C0; /* je: equal / zero */

loc_004BC5B1: ;
    ecx++;
    (void)0; /* cmp MEM8(ecx), 0 - flags set for next jcc */
    MEM32(ebp + -48) = ecx;
    if (CMP_NE(MEM8(ecx), 0)) goto loc_004BC373; /* jne: not equal / not zero */

loc_004BC5BE: ;
    goto loc_004BC5CD;

loc_004BC5C0: ;
    eax = MEM32(ebp + 0x10);
    MEM32(eax + 0x208) = 0x80151918u;

loc_004BC5CD: ;
    POP32(esp, edi);
    POP32(esp, ebx);

loc_004BC5CF: ;
    POP32(esp, esi);
    esp = ebp;
    POP32(esp, ebp); /* leave */
    esp += 16; return; /* ret 12 */

}

/**
 * sub_004BC5D4
 * Original: 0x004BC5D4 - 0x004BC66F (155 bytes, 59 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_004BC5D4(void)
{
    uint32_t ebp;
    int _flags = 0; /* fallback flag var */
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_004BC5D4: ;
    PUSH32(esp, ebp);
    ebp = esp + -116;
    esp = esp - 0xAC;
    PUSH32(esp, esi);
    PUSH32(esp, edi);
    eax = ebp + 0x3C;
    PUSH32(esp, eax);
    PUSH32(esp, 0); sub_0048D70A(); /* call 0x0048D70A */

loc_004BC5EA: ;
    eax = ebp + -56;
    PUSH32(esp, eax);
    PUSH32(esp, 0); sub_0046DA7C(); /* call 0x0046DA7C */

loc_004BC5F3: ;
    PUSH32(esp, 6);
    eax = ebp + 0x46;
    PUSH32(esp, eax);
    eax = ebp + -56;
    PUSH32(esp, eax);
    PUSH32(esp, 0); sub_0046DA76(); /* call 0x0046DA76 */

loc_004BC602: ;
    eax = ebp + 0x60;
    PUSH32(esp, eax);
    eax = ebp + -56;
    PUSH32(esp, eax);
    PUSH32(esp, 0); sub_0046DA70(); /* call 0x0046DA70 */

loc_004BC60F: ;
    ecx = MEM32(ebp + 0x60);
    edi = MEM32(ebp + 0x7C);
    esi = MEM32(edi + 0x14);
    ecx = ecx & 0x7FFF;
    edx = 0; /* xor self */
    eax = 0xC02;
    ecx++;
    (void)0; /* cmp MEM16(edi + 0x3C), LO16(eax) - flags set for next jcc */
    SET_LO8(edx, (CMP_NE(MEM16(edi + 0x3C), LO16(eax))) ? 1 : 0); /* setne */
    esi = esi - edx;
    if ((esi == 0)) goto loc_004BC662; /* je: equal / zero */

loc_004BC631: ;
    edi = 0x1388;
    PUSH32(esp, ebx);

loc_004BC637: ;
    if (CMP_B(eax, edi)) goto loc_004BC63D; /* jb: below (unsigned <) */

loc_004BC63B: ;
    eax = eax - edi;

loc_004BC63D: ;
    edx = 0; /* xor self */
    eax = eax + ecx;
    ebx = 0xA97F;
    { uint64_t _dividend = ((uint64_t)edx << 32) | eax;
      eax = (uint32_t)(_dividend / (uint32_t)ebx);
      edx = (uint32_t)(_dividend % (uint32_t)ebx); }
    ebx = 0; /* xor self */
    edx = edx + edi;
    eax = edx;
    edx = MEM32(ebp + 0x7C);
    edx = ZX16(MEM16(edx + 0x3C));
    (void)0; /* cmp eax, edx - flags set for next jcc */
    SET_LO8(ebx, (CMP_NE(eax, edx)) ? 1 : 0); /* setne */
    esi = esi - ebx;
    if ((esi != 0)) goto loc_004BC637; /* jne: not equal / not zero */

loc_004BC65E: ;
    edi = MEM32(ebp + 0x7C);
    POP32(esp, ebx);

loc_004BC662: ;
    MEM16(edi + 0x3E) = LO16(eax);
    POP32(esp, edi);
    POP32(esp, esi);
    ebp = ebp + 0x74;
    esp = ebp;
    POP32(esp, ebp); /* leave */
    esp += 8; return; /* ret 4 */

}

/**
 * sub_004BC66F
 * Original: 0x004BC66F - 0x004BC784 (277 bytes, 90 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_004BC66F(void)
{
    uint32_t ebp;
    int _flags = 0; /* fallback flag var */

loc_004BC66F: ;
    PUSH32(esp, ebp);
    ebp = esp;
    esp = esp - 0x42C;
    PUSH32(esp, ebx);
    PUSH32(esp, esi);
    esi = MEM32(ebp + 8);
    PUSH32(esp, edi);
    ebx = ecx;
    eax = 0; /* xor self */
    ecx = 0x83;
    edi = ebp + -548;
    { uint32_t _i; for (_i = 0; _i < ecx; _i++) MEM32(edi + _i*4) = eax; }
    edi += ecx * 4; ecx = 0; /* rep stosd */
    PUSH32(esp, 6);
    ecx = 0x82;
    edi = ebp + -1068;
    { uint32_t _i; for (_i = 0; _i < ecx; _i++) MEM32(edi + _i*4) = eax; }
    edi += ecx * 4; ecx = 0; /* rep stosd */
    POP32(esp, ecx);
    edi = ebp + -24;
    { uint32_t _i; for (_i = 0; _i < ecx; _i++) MEM32(edi + _i*4) = eax; }
    edi += ecx * 4; ecx = 0; /* rep stosd */
    eax = ebp + -1068;
    MEM32(ebp + -16) = eax;
    eax = ebp + -548;
    PUSH32(esp, eax);
    eax = ebp + -24;
    PUSH32(esp, eax);
    eax = esi + 0x8F4;
    PUSH32(esp, eax);
    ecx = ebx;
    MEM32(ebp + -544) = 1;
    MEM32(ebp + -24) = 0x652F00;
    MEM32(ebp + -20) = 8;
    MEM32(ebp + -12) = 0xA;
    PUSH32(esp, 0); sub_004BC302(); /* call 0x004BC302 */

loc_004BC6E5: ;
    if (CMP_NE(MEM32(ebp + -28), 0)) goto loc_004BC74E; /* jne: not equal / not zero */

loc_004BC6EB: ;
    eax = ebp + 8;
    PUSH32(esp, eax);
    eax = ebp + -16;
    PUSH32(esp, eax);
    SET_LO16(eax, ZX8(MEM8(esi + 0x41)));
    SET_HI8(eax, MEM8(esi + 0x40));
    edi = esi + 0x38;
    ecx = ebx;
    PUSH32(esp, eax);
    PUSH32(esp, edi);
    eax = ebp + -540;
    PUSH32(esp, eax);
    PUSH32(esp, 0); sub_004BBDB4(); /* call 0x004BBDB4 */

loc_004BC70E: ;
    if (TEST_NZ(eax, eax)) goto loc_004BC73A; /* jne: not equal / not zero */

loc_004BC712: ;
    if (CMP_EQ(MEM16(ebp + -14), LO16(eax))) goto loc_004BC731; /* je: equal / zero */

loc_004BC718: ;
    (void)0; /* cmp MEM32(ebp + -28), 0 - flags set for next jcc */
    SET_LO16(eax, MEM16(ebp + -14));
    SET_HI8(ecx, LO8(eax));
    SET_LO8(ecx, HI8(eax));
    MEM16(esi + 0x42) = LO16(ecx);
    if (CMP_NE(MEM32(ebp + -28), 0)) goto loc_004BC74E; /* jne: not equal / not zero */

loc_004BC72A: ;
    eax = MEM32(ebp + -12);
    if (CMP_EQ(eax, MEM32(edi))) goto loc_004BC753; /* je: equal / zero */

loc_004BC731: ;
    MEM32(ebp + -28) = 0x80151918u;
    goto loc_004BC74E;

loc_004BC73A: ;
    (void)0; /* cmp MEM32(ebp + -28), 0 - flags set for next jcc */
    SET_LO16(eax, MEM16(esi + 0x40));
    edx = ebp + -540;
    MEM16(esi + 0x42) = LO16(eax);
    if (CMP_EQ(MEM32(ebp + -28), 0)) goto loc_004BC756; /* je: equal / zero */

loc_004BC74E: ;
    eax = MEM32(ebp + -28);
    g_seh_ebp = ebp; sub_004BC789(); return; /* tail jmp 0x004BC789 */

loc_004BC753: ;
    edx = MEM32(ebp + 8);

loc_004BC756: ;
    if (CMP_EQ(MEM8(edx), 0)) { sub_004BC784(); return; } /* je: equal / zero */

loc_004BC75B: ;
    eax = edx;
    edi = eax + 1;

loc_004BC760: ;
    SET_LO8(ecx, MEM8(eax));
    eax++;
    if (TEST_NZ(LO8(ecx), LO8(ecx))) goto loc_004BC760; /* jne: not equal / not zero */

loc_004BC767: ;
    eax = eax - edi;
    ecx = 0x80;
    if (CMP_AE(eax, ecx)) { sub_004BC784(); return; } /* jae: above or equal (unsigned >=) */

loc_004BC772: ;
    PUSH32(esp, ecx);
    PUSH32(esp, edx);
    esi = esi + 0x26C;
    PUSH32(esp, esi);
    PUSH32(esp, 0); sub_0042DD7A(); /* call 0x0042DD7A */

loc_004BC780: ;
    eax = 0; /* xor self */
    g_seh_ebp = ebp; sub_004BC789(); return; /* tail jmp 0x004BC789 */

}

/**
 * sub_004BC790
 * Original: 0x004BC790 - 0x004BC7E2 (82 bytes, 24 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_004BC790(void)
{
    uint32_t ebp;
    int _flags = 0; /* fallback flag var */

loc_004BC790: ;
    PUSH32(esp, ebp);
    ebp = esp;
    esp = esp - 0x42C;
    edx = MEM32(ebp + 0xC);
    PUSH32(esp, esi);
    PUSH32(esp, edi);
    esi = ecx;
    eax = 0; /* xor self */
    (void)0; /* cmp edx, 0xC8 - flags set for next jcc */
    ecx = 0x83;
    edi = ebp + -548;
    { uint32_t _i; for (_i = 0; _i < ecx; _i++) MEM32(edi + _i*4) = eax; }
    edi += ecx * 4; ecx = 0; /* rep stosd */
    ecx = 0x82;
    edi = ebp + -1068;
    { uint32_t _i; for (_i = 0; _i < ecx; _i++) MEM32(edi + _i*4) = eax; }
    edi += ecx * 4; ecx = 0; /* rep stosd */
    PUSH32(esp, 6);
    POP32(esp, ecx);
    edi = ebp + -24;
    MEM32(ebp + -548) = edx;
    { uint32_t _i; for (_i = 0; _i < ecx; _i++) MEM32(edi + _i*4) = eax; }
    edi += ecx * 4; ecx = 0; /* rep stosd */
    if (CMP_NE(edx, 0xC8)) { sub_004BC7E2(); return; } /* jne: not equal / not zero */

loc_004BC7D2: ;
    MEM32(ebp + -24) = 0x652F20;
    MEM32(ebp + -20) = 3;
    g_seh_ebp = ebp; sub_004BC7F0(); return; /* tail jmp 0x004BC7F0 */

}

/**
 * sub_004BC831
 * Original: 0x004BC831 - 0x004BCDAD (1404 bytes, 430 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_004BC831(void)
{
    uint32_t ebp;
    int _flags = 0; /* fallback flag var */

loc_004BC831: ;
    PUSH32(esp, ebp);
    ebp = esp;
    esp = esp - 0x124;
    PUSH32(esp, ebx);
    PUSH32(esp, esi);
    esi = MEM32(ebp + 8);
    eax = MEM32(esi + 0x10);
    eax = eax - 0;
    ebx = ecx;
    PUSH32(esp, edi);
    MEM32(ebp + -4) = ebx;
    if ((eax == 0)) goto loc_004BCB5C; /* je: equal / zero */

loc_004BC851: ;
    eax--;
    if ((eax == 0)) goto loc_004BCBDB; /* je: equal / zero */

loc_004BC858: ;
    eax--;
    if ((eax == 0)) goto loc_004BC9E7; /* je: equal / zero */

loc_004BC85F: ;
    eax--;
    if ((eax != 0)) goto loc_004BCD76; /* jne: not equal / not zero */

loc_004BC866: ;
    edi = esi + 0x98;
    PUSH32(esp, edi);
    PUSH32(esp, 0); sub_004A5F72(); /* call 0x004A5F72 */

loc_004BC872: ;
    if (CMP_EQ(eax, 0x1500F0)) goto loc_004BC881; /* je: equal / zero */

loc_004BC879: ;
    if (CMP_GE(eax & eax, 0)) goto loc_004BCD76; /* jge: greater or equal (signed >=) */

loc_004BC881: ;
    eax = 0; /* xor self */
    PUSH32(esp, eax);
    ecx = ebp + 8;
    PUSH32(esp, ecx);
    ecx = ebp + -36;
    PUSH32(esp, ecx);
    ecx = ebp + -28;
    PUSH32(esp, ecx);
    PUSH32(esp, eax);
    PUSH32(esp, eax);
    PUSH32(esp, edi);
    ecx = ebx;
    MEM32(ebp + -28) = eax;
    PUSH32(esp, 0); sub_004AD5B6(); /* call 0x004AD5B6 */

loc_004BC89D: ;
    PUSH32(esp, edi);
    ecx = ebx;
    PUSH32(esp, 0); sub_004B5278(); /* call 0x004B5278 */

loc_004BC8A5: ;
    eax = MEM32(ebp + -28);
    (void)0; /* test eax, eax - flags set for next jcc */
    MEM32(esi + 0x8F0) = eax;
    if (TEST_Z(eax, eax)) goto loc_004BCD31; /* je: equal / zero */

loc_004BC8B6: ;
    if (CMP_AE(eax, 0x3000)) goto loc_004BCD31; /* jae: above or equal (unsigned >=) */

loc_004BC8C1: ;
    MEM8(eax + esi + 0x8F4) = 0;
    PUSH32(esp, MEM32(ebp + 8));
    ecx = ebx;
    PUSH32(esp, esi);
    PUSH32(esp, 0); sub_004BC790(); /* call 0x004BC790 */

loc_004BC8D4: ;
    if (CMP_NE(eax, 0x8015191Au)) goto loc_004BC9CC; /* jne: not equal / not zero */

loc_004BC8DF: ;
    MEM32(esi + 0x14) = MEM32(esi + 0x14) + 1;
    if (CMP_A(MEM32(esi + 0x14), 5)) goto loc_004BCD31; /* ja: above (unsigned >) */

loc_004BC8EC: ;
    PUSH32(esp, esi);
    ecx = ebx;
    PUSH32(esp, 0); sub_004BC5D4(); /* call 0x004BC5D4 */

loc_004BC8F4: ;
    eax = 0; /* xor self */
    SET_LO16(eax, MEM16(esi + 0x3E));
    ecx = ebx;
    PUSH32(esp, eax);
    PUSH32(esp, esi);
    PUSH32(esp, 0); sub_004BC175(); /* call 0x004BC175 */

loc_004BC903: ;
    eax = 0; /* xor self */
    edi = ebp + -20;
    MEM32(edi) = eax; edi += 4; /* stosd */
    MEM32(edi) = eax; edi += 4; /* stosd */
    MEM32(edi) = eax; edi += 4; /* stosd */
    MEM32(edi) = eax; edi += 4; /* stosd */
    eax = MEM32(esi + 0x38);
    MEM32(ebp + -16) = MEM32(ebp + -16) | 0xFFFFFFFFu;
    MEM32(ebp + -12) = eax;
    SET_LO16(eax, MEM16(esi + 0x42));
    MEM16(ebp + -8) = LO16(eax);
    PUSH32(esp, 0x54);
    eax = 0; /* xor self */
    POP32(esp, ecx);
    edi = esi + 0x98;
    { uint32_t _i; for (_i = 0; _i < ecx; _i++) MEM32(edi + _i*4) = eax; }
    edi += ecx * 4; ecx = 0; /* rep stosd */
    (void)0; /* cmp MEM32(esi + 0x1E8), eax - flags set for next jcc */
    eax = MEM32(0x652F44);
    MEM32(ebp + -20) = 0x58900000;
    if (CMP_NE(MEM32(esi + 0x1E8), eax)) goto loc_004BC944; /* jne: not equal / not zero */

loc_004BC93F: ;
    eax = MEM32(0x652F40);

loc_004BC944: ;
    PUSH32(esp, eax);
    eax = ZX16(MEM16(esi + 0x42));
    PUSH32(esp, eax);
    eax = ZX8(MEM8(esi + 0x3B));
    PUSH32(esp, eax);
    eax = ZX8(MEM8(esi + 0x3A));
    PUSH32(esp, eax);
    eax = ZX8(MEM8(esi + 0x39));
    PUSH32(esp, eax);
    eax = ZX8(MEM8(esi + 0x38));
    PUSH32(esp, eax);
    PUSH32(esp, 0x882D3C);
    eax = ebp + -292;
    PUSH32(esp, 0x100);
    PUSH32(esp, eax);
    PUSH32(esp, 0); sub_004B4554(); /* call 0x004B4554 */

loc_004BC974: ;
    esp = esp + 0x24;
    PUSH32(esp, 0);
    ecx = ebp + -20;
    PUSH32(esp, ecx);
    ecx = esi + 0x98;
    PUSH32(esp, ecx);
    PUSH32(esp, MEM32(esi + 8));
    ecx = esi + 0x2F0;
    PUSH32(esp, 0x1388);
    PUSH32(esp, MEM32(esi + 0x2EC));
    PUSH32(esp, ecx);
    PUSH32(esp, eax);
    eax = ebp + -292;
    PUSH32(esp, eax);
    PUSH32(esp, 0x3000);
    eax = esi + 0x8F4;
    PUSH32(esp, eax);
    eax = esi + 0x26C;
    PUSH32(esp, eax);
    PUSH32(esp, 0xFFFFFFFFu);
    PUSH32(esp, 0xFFFFFFFFu);
    ecx = ebx;
    PUSH32(esp, 0); sub_004ADC62(); /* call 0x004ADC62 */

loc_004BC9BF: ;
    if (CMP_GE(eax & eax, 0)) goto loc_004BCD76; /* jge: greater or equal (signed >=) */

loc_004BC9C7: ;
    goto loc_004BCD31;

loc_004BC9CC: ;
    if (TEST_S(eax, eax)) goto loc_004BCD31; /* jl: less (signed <) */

loc_004BC9D4: ;
    MEM32(esi + 0xC) = 0x1500F0;
    MEM32(esi + 0x10) = 0x63;
    goto loc_004BCD76;

loc_004BC9E7: ;
    edi = esi + 0x98;
    PUSH32(esp, edi);
    ecx = ebx;
    PUSH32(esp, 0); sub_004A5F72(); /* call 0x004A5F72 */

loc_004BC9F5: ;
    if (CMP_NE(eax, 0x1500F0)) goto loc_004BCB4A; /* jne: not equal / not zero */

loc_004BCA00: ;
    eax = 0; /* xor self */
    PUSH32(esp, eax);
    ecx = ebp + 8;
    PUSH32(esp, ecx);
    ecx = ebp + -36;
    PUSH32(esp, ecx);
    ecx = ebp + -28;
    PUSH32(esp, ecx);
    PUSH32(esp, eax);
    PUSH32(esp, eax);
    PUSH32(esp, edi);
    ecx = ebx;
    PUSH32(esp, 0); sub_004AD5B6(); /* call 0x004AD5B6 */

loc_004BCA19: ;
    PUSH32(esp, edi);
    ecx = ebx;
    MEM32(ebp + -4) = eax;
    PUSH32(esp, 0); sub_004B5278(); /* call 0x004B5278 */

loc_004BCA24: ;
    if (CMP_L(MEM32(ebp + -4), 0)) goto loc_004BCD31; /* jl: less (signed <) */

loc_004BCA2E: ;
    eax = MEM32(ebp + -28);
    (void)0; /* cmp eax, 0x3000 - flags set for next jcc */
    MEM32(esi + 0x8F0) = eax;
    if (CMP_AE(eax, 0x3000)) goto loc_004BCD31; /* jae: above or equal (unsigned >=) */

loc_004BCA42: ;
    MEM8(eax + esi + 0x8F4) = 0;
    if (CMP_NE(MEM32(ebp + 8), 0xC8)) goto loc_004BCD31; /* jne: not equal / not zero */

loc_004BCA57: ;
    PUSH32(esp, esi);
    ecx = ebx;
    PUSH32(esp, 0); sub_004BC66F(); /* call 0x004BC66F */

loc_004BCA5F: ;
    if (TEST_S(eax, eax)) goto loc_004BCD31; /* jl: less (signed <) */

loc_004BCA67: ;
    MEM32(esi + 0x14) = MEM32(esi + 0x14) & 0;
    eax = 0; /* xor self */
    SET_LO16(eax, MEM16(esi + 0x3E));
    ecx = ebx;
    PUSH32(esp, eax);
    PUSH32(esp, esi);
    PUSH32(esp, 0); sub_004BC175(); /* call 0x004BC175 */

loc_004BCA7A: ;
    eax = 0; /* xor self */
    edi = ebp + -20;
    MEM32(edi) = eax; edi += 4; /* stosd */
    MEM32(edi) = eax; edi += 4; /* stosd */
    MEM32(edi) = eax; edi += 4; /* stosd */
    MEM32(edi) = eax; edi += 4; /* stosd */
    eax = MEM32(esi + 0x38);
    MEM32(ebp + -16) = MEM32(ebp + -16) | 0xFFFFFFFFu;
    MEM32(ebp + -12) = eax;
    SET_LO16(eax, MEM16(esi + 0x42));
    MEM16(ebp + -8) = LO16(eax);
    PUSH32(esp, 0x54);
    eax = 0; /* xor self */
    POP32(esp, ecx);
    edi = esi + 0x98;
    { uint32_t _i; for (_i = 0; _i < ecx; _i++) MEM32(edi + _i*4) = eax; }
    edi += ecx * 4; ecx = 0; /* rep stosd */
    (void)0; /* cmp MEM32(esi + 0x1E8), eax - flags set for next jcc */
    eax = MEM32(0x652F44);
    MEM32(ebp + -20) = 0x58900000;
    if (CMP_NE(MEM32(esi + 0x1E8), eax)) goto loc_004BCABB; /* jne: not equal / not zero */

loc_004BCAB6: ;
    eax = MEM32(0x652F40);

loc_004BCABB: ;
    PUSH32(esp, eax);
    eax = ZX16(MEM16(esi + 0x42));
    PUSH32(esp, eax);
    eax = ZX8(MEM8(esi + 0x3B));
    PUSH32(esp, eax);
    eax = ZX8(MEM8(esi + 0x3A));
    PUSH32(esp, eax);
    eax = ZX8(MEM8(esi + 0x39));
    PUSH32(esp, eax);
    eax = ZX8(MEM8(esi + 0x38));
    PUSH32(esp, eax);
    PUSH32(esp, 0x882D3C);
    eax = ebp + -292;
    PUSH32(esp, 0x100);
    PUSH32(esp, eax);
    PUSH32(esp, 0); sub_004B4554(); /* call 0x004B4554 */

loc_004BCAEB: ;
    esp = esp + 0x24;
    PUSH32(esp, 0);
    ecx = ebp + -20;
    PUSH32(esp, ecx);
    ecx = esi + 0x98;
    PUSH32(esp, ecx);
    PUSH32(esp, MEM32(esi + 8));
    ecx = esi + 0x2F0;
    PUSH32(esp, 0x1388);
    PUSH32(esp, MEM32(esi + 0x2EC));
    PUSH32(esp, ecx);
    PUSH32(esp, eax);
    eax = ebp + -292;
    PUSH32(esp, eax);
    PUSH32(esp, 0x3000);
    eax = esi + 0x8F4;
    PUSH32(esp, eax);
    eax = esi + 0x26C;
    PUSH32(esp, eax);
    PUSH32(esp, 0xFFFFFFFFu);
    PUSH32(esp, 0xFFFFFFFFu);
    ecx = ebx;
    PUSH32(esp, 0); sub_004ADC62(); /* call 0x004ADC62 */

loc_004BCB36: ;
    if (TEST_S(eax, eax)) goto loc_004BCD31; /* jl: less (signed <) */

loc_004BCB3E: ;
    MEM32(esi + 0x10) = 3;
    goto loc_004BCD76;

loc_004BCB4A: ;
    if (CMP_GE(eax & eax, 0)) goto loc_004BCD76; /* jge: greater or equal (signed >=) */

loc_004BCB52: ;
    PUSH32(esp, edi);
    ecx = ebx;
    PUSH32(esp, 0); sub_004B5278(); /* call 0x004B5278 */

loc_004BCB5A: ;
    goto loc_004BCB6F;

loc_004BCB5C: ;
    PUSH32(esp, 0);
    PUSH32(esp, 2);
    PUSH32(esp, 2);
    PUSH32(esp, 0); sub_0048D715(); /* call 0x0048D715 */

loc_004BCB67: ;
    (void)0; /* cmp eax, 0xFFFFFFFFu - flags set for next jcc */
    MEM32(esi + 0x34) = eax;
    if (CMP_NE(eax, 0xFFFFFFFFu)) goto loc_004BCB7B; /* jne: not equal / not zero */

loc_004BCB6F: ;
    MEM32(esi + 0xC) = 0x80151919u;
    goto loc_004BCD76;

loc_004BCB7B: ;
    PUSH32(esp, 4);
    PUSH32(esp, ebx);
    PUSH32(esp, 0x4001);
    PUSH32(esp, 0xFFFF);
    PUSH32(esp, eax);
    PUSH32(esp, 0); sub_0048D741(); /* call 0x0048D741 */

loc_004BCB8E: ;
    edi = esi + 0x60;
    PUSH32(esp, edi);
    PUSH32(esp, MEM32(esi + 8));
    eax = esi + 0x58;
    PUSH32(esp, 0);
    PUSH32(esp, 1);
    ecx = esi + 0x8F4;
    PUSH32(esp, eax);
    PUSH32(esp, MEM32(esi + 0x34));
    MEM32(esi + 0x5C) = ecx;
    ecx = ebx;
    MEM32(eax) = 0x3000;
    PUSH32(esp, 0); sub_004B57FC(); /* call 0x004B57FC */

loc_004BCBB6: ;
    PUSH32(esp, esi);
    ecx = ebx;
    PUSH32(esp, 0); sub_004BBEC6(); /* call 0x004BBEC6 */

loc_004BCBBE: ;
    if (TEST_S(eax, eax)) goto loc_004BCD73; /* jl: less (signed <) */

loc_004BCBC6: ;
    PUSH32(esp, 0);
    PUSH32(esp, edi);
    ecx = ebx;
    PUSH32(esp, 0); sub_004B577F(); /* call 0x004B577F */

loc_004BCBD0: ;
    if (TEST_S(eax, eax)) goto loc_004BCB6F; /* jl: less (signed <) */

loc_004BCBD4: ;
    MEM32(esi + 0x10) = 1;

loc_004BCBDB: ;
    eax = esi + 0x60;
    PUSH32(esp, eax);
    ecx = ebx;
    PUSH32(esp, 0); sub_004A5F72(); /* call 0x004A5F72 */

loc_004BCBE6: ;
    if (CMP_NE(eax, 0x1500F0)) goto loc_004BCD43; /* jne: not equal / not zero */

loc_004BCBF1: ;
    eax = 0; /* xor self */
    PUSH32(esp, eax);
    PUSH32(esp, eax);
    edi = esi + 0x8F0;
    MEM32(edi) = eax;
    PUSH32(esp, edi);
    eax = esi + 0x60;
    PUSH32(esp, eax);
    ecx = ebx;
    PUSH32(esp, 0); sub_004B5577(); /* call 0x004B5577 */

loc_004BCC09: ;
    edi = MEM32(edi);
    if (CMP_AE(edi, 0x3000)) goto loc_004BCC2A; /* jae: above or equal (unsigned >=) */

loc_004BCC13: ;
    PUSH32(esp, esi);
    ecx = ebx;
    MEM8(edi + esi + 0x8F4) = 0;
    PUSH32(esp, 0); sub_004BBFC6(); /* call 0x004BBFC6 */

loc_004BCC23: ;
    if (CMP_NE(eax, 0x80151918u)) goto loc_004BCC44; /* jne: not equal / not zero */

loc_004BCC2A: ;
    PUSH32(esp, 0);
    eax = esi + 0x60;
    PUSH32(esp, eax);
    ecx = ebx;
    PUSH32(esp, 0); sub_004B577F(); /* call 0x004B577F */

loc_004BCC37: ;
    if (CMP_GE(eax & eax, 0)) goto loc_004BCD76; /* jge: greater or equal (signed >=) */

loc_004BCC3F: ;
    goto loc_004BCB6F;

loc_004BCC44: ;
    if (TEST_S(eax, eax)) goto loc_004BCD73; /* jl: less (signed <) */

loc_004BCC4C: ;
    PUSH32(esp, 0x54);
    POP32(esp, ecx);
    eax = 0; /* xor self */
    ebx = esi + 0x98;
    edi = ebx;
    { uint32_t _i; for (_i = 0; _i < ecx; _i++) MEM32(edi + _i*4) = eax; }
    edi += ecx * 4; ecx = 0; /* rep stosd */
    eax = ZX16(MEM16(esi + 0x40));
    PUSH32(esp, eax);
    eax = ZX8(MEM8(esi + 0x3B));
    PUSH32(esp, eax);
    eax = ZX8(MEM8(esi + 0x3A));
    PUSH32(esp, eax);
    eax = ZX8(MEM8(esi + 0x39));
    PUSH32(esp, eax);
    eax = ZX8(MEM8(esi + 0x38));
    PUSH32(esp, eax);
    PUSH32(esp, 0x882D10);
    eax = ebp + -164;
    PUSH32(esp, 0x80);
    PUSH32(esp, eax);
    PUSH32(esp, 0); sub_004B4554(); /* call 0x004B4554 */

loc_004BCC8A: ;
    ecx = MEM32(ebp + -4);
    esp = esp + 0x20;
    edi = eax;
    eax = esi + 0x8F4;
    PUSH32(esp, ebx);
    MEM32(ebx + 0xB0) = eax;
    MEM32(ebx + 0xB4) = 0x3000;
    PUSH32(esp, 0); sub_004A5F61(); /* call 0x004A5F61 */

loc_004BCCAE: ;
    eax = MEM32(esi + 8);
    MEM32(ebx + 0x30) = MEM32(ebx + 0x30) | 0xFFFFFFFFu;
    MEM32(ebx + 8) = eax;
    ecx = 0; /* xor self */
    MEM32(ebx + 0xC) = ecx;
    MEM32(ebx + 0x10) = ecx;
    eax = MEM32(esi + 0x38);
    MEM32(ebx + 0x34) = eax;
    SET_LO16(eax, MEM16(esi + 0x40));
    MEM32(ebx + 0x24) = MEM32(ebx + 0x24) | 0xFFFFFFFFu;
    MEM16(ebx + 0x38) = LO16(eax);
    MEM32(ebx + 0x28) = ecx;
    eax = ebx + 0x104;
    MEM32(ebx + 0x18) = 0x43900000;
    MEM32(ebx + 0x1C) = 0x1388;
    PUSH32(esp, ebx);
    PUSH32(esp, ecx);
    MEM32(eax + 0x14) = ecx;
    MEM32(eax + 0x10) = ecx;
    MEM32(eax + 0x18) = ecx;
    MEM32(eax + 0x1C) = ecx;
    MEM32(eax + 0x20) = ecx;
    MEM32(eax + 4) = 0x4ACB5A;
    MEM32(eax + 8) = 0x4ACBA9;
    MEM32(eax + 0xC) = 0x4ACBAE;
    eax = 0; /* xor self */
    PUSH32(esp, eax);
    PUSH32(esp, ecx);
    ecx = MEM32(ebp + -4);
    PUSH32(esp, edi);
    eax = ebp + -164;
    PUSH32(esp, eax);
    eax = esi + 0x1EC;
    PUSH32(esp, eax);
    PUSH32(esp, 0); sub_004AD08D(); /* call 0x004AD08D */

loc_004BCD2A: ;
    (void)0; /* test eax, eax - flags set for next jcc */
    ebx = MEM32(ebp + -4);
    if (CMP_GE(eax & eax, 0)) goto loc_004BCD3A; /* jge: greater or equal (signed >=) */

loc_004BCD31: ;
    MEM32(esi + 0xC) = 0x80151918u;
    goto loc_004BCD76;

loc_004BCD3A: ;
    MEM32(esi + 0x10) = 2;
    goto loc_004BCD76;

loc_004BCD43: ;
    if (TEST_S(eax, eax)) goto loc_004BCB6F; /* jl: less (signed <) */

loc_004BCD4B: ;
    PUSH32(esp, 0); sub_0042B72A(); /* call 0x0042B72A */

loc_004BCD50: ;
    if (CMP_B(eax, MEM32(esi + 0x1C))) goto loc_004BCD76; /* jb: below (unsigned <) */

loc_004BCD55: ;
    MEM32(esi + 0x14) = MEM32(esi + 0x14) + 1;
    if (CMP_B(MEM32(esi + 0x14), 6)) goto loc_004BCD67; /* jb: below (unsigned <) */

loc_004BCD5E: ;
    MEM32(esi + 0xC) = 0x80151917u;
    goto loc_004BCD76;

loc_004BCD67: ;
    PUSH32(esp, esi);
    ecx = ebx;
    PUSH32(esp, 0); sub_004BBEC6(); /* call 0x004BBEC6 */

loc_004BCD6F: ;
    if (CMP_GE(eax & eax, 0)) goto loc_004BCD76; /* jge: greater or equal (signed >=) */

loc_004BCD73: ;
    MEM32(esi + 0xC) = eax;

loc_004BCD76: ;
    eax = MEM32(esi + 0xC);
    if (TEST_Z(eax, eax)) goto loc_004BCDA3; /* je: equal / zero */

loc_004BCD7D: ;
    (void)0; /* cmp eax, 0x1500F0 - flags set for next jcc */
    ebx = MEM32(ebx + 0xC4);
    if (CMP_NE(eax, 0x1500F0)) goto loc_004BCD98; /* jne: not equal / not zero */

loc_004BCD8A: ;
    eax = MEM32(ebx + 0x30);
    eax = eax & 0xFFFFFFDFu;
    eax = eax | 0x40;
    MEM32(ebx + 0x30) = eax;
    goto loc_004BCD9C;

loc_004BCD98: ;
    MEM32(ebx + 0x30) = MEM32(ebx + 0x30) | 0x60;

loc_004BCD9C: ;
    MEM32(esi + 0x10) = 0x63;

loc_004BCDA3: ;
    eax = MEM32(esi + 0xC);
    POP32(esp, edi);
    POP32(esp, esi);
    POP32(esp, ebx);
    esp = ebp;
    POP32(esp, ebp); /* leave */
    esp += 8; return; /* ret 4 */

}

/**
 * sub_004BCDAD
 * Original: 0x004BCDAD - 0x004BCE10 (99 bytes, 30 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_004BCDAD(void)
{

loc_004BCDAD: ;
    PUSH32(esp, esi);
    esi = MEM32(esp + 0x14);
    PUSH32(esp, edi);
    PUSH32(esp, esi);
    edi = ecx;
    PUSH32(esp, 0); sub_004A5F61(); /* call 0x004A5F61 */

loc_004BCDBB: ;
    eax = MEM32(esp + 0x14);
    MEM32(esi + 8) = eax;
    eax = MEM32(esp + 0xC);
    MEM32(esi + 0x38) = eax;
    SET_LO16(eax, MEM16(esp + 0x10));
    MEM32(esi) = 0x4BC831;
    MEM32(esi + 4) = 0x4BC1EA;
    MEM16(esi + 0x3C) = LO16(eax);
    MEM16(esi + 0x3E) = LO16(eax);
    PUSH32(esp, 0); sub_0042B72A(); /* call 0x0042B72A */

loc_004BCDE8: ;
    MEM32(esi + 0xC) = MEM32(esi + 0xC) & 0;
    MEM32(esi + 0x18) = eax;
    eax = MEM32(edi + 0xC4);
    ecx = MEM32(eax + 0x30);
    ecx = ecx & 0xFFFFFFBFu;
    ecx = ecx | 0x20;
    MEM32(eax + 0x30) = ecx;
    PUSH32(esp, esi);
    ecx = edi;
    PUSH32(esp, 0); sub_004BC831(); /* call 0x004BC831 */

loc_004BCE09: ;
    POP32(esp, edi);
    eax = 0; /* xor self */
    POP32(esp, esi);
    esp += 20; return; /* ret 16 */

}

/**
 * sub_004BCE10
 * Original: 0x004BCE10 - 0x004BCE5E (78 bytes, 32 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_004BCE10(void)
{
    uint32_t ebp;
    int _flags = 0; /* fallback flag var */

loc_004BCE10: ;
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, ebp);
    ebp = esp;
    esp = esp - 0x10;
    eax = MEM32(ebp + 0xC);
    MEM32(ebp + -4) = MEM32(ebp + -4) & 0;
    PUSH32(esp, edi);
    PUSH32(esp, 0x14);
    MEM32(ebp + -8) = eax;
    PUSH32(esp, 8);
    eax = ebp + -8;
    PUSH32(esp, eax);
    eax = ebp + -16;
    PUSH32(esp, eax);
    PUSH32(esp, MEM32(ebp + 8));
    PUSH32(esp, 0); RECOMP_ICALL_SAFE(MEM32(0x56102C), _icall_esp); /* indirect call */
    }

loc_004BCE36: ;
    edi = eax;
    if (CMP_GE(edi & edi, 0)) { sub_004BCE5E(); return; } /* jge: greater or equal (signed >=) */

loc_004BCE3C: ;
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, esi);
    esi = MEM32(0x561054);
    PUSH32(esp, edi);
    PUSH32(esp, 0); RECOMP_ICALL_SAFE(esi, _icall_esp); /* indirect call */
    }

loc_004BCE46: ;
    (void)0; /* test eax, eax - flags set for next jcc */
    PUSH32(esp, edi);
    if (CMP_G(eax & eax, 0)) goto loc_004BCE4F; /* jg: greater (signed >) */

loc_004BCE4B: ;
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, 0); RECOMP_ICALL_SAFE(esi, _icall_esp); /* indirect call */
    }

loc_004BCE4D: ;
    goto loc_004BCE5B;

loc_004BCE4F: ;
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, 0); RECOMP_ICALL_SAFE(esi, _icall_esp); /* indirect call */
    }

loc_004BCE51: ;
    eax = eax & 0xFFFF;
    eax = eax | 0x80070000u;

loc_004BCE5B: ;
    POP32(esp, esi);
    g_seh_ebp = ebp; sub_004BCE60(); return; /* tail jmp 0x004BCE60 */

}

/**
 * sub_004BCE65
 * Original: 0x004BCE65 - 0x004BCF1E (185 bytes, 79 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_004BCE65(void)
{
    uint32_t ebp;
    int _flags = 0; /* fallback flag var */
    int _cf = 0; /* carry flag */

loc_004BCE65: ;
    PUSH32(esp, ebp);
    ebp = esp;
    PUSH32(esp, ecx);
    PUSH32(esp, ecx);
    PUSH32(esp, ebx);
    PUSH32(esp, esi);
    esi = MEM32(ebp + 8);
    ebx = 0; /* xor self */
    PUSH32(esp, edi);
    edi = MEM32(ebp + 0xC);
    (void)0; /* cmp edi, ebx - flags set for next jcc */
    MEM32(ebp + -8) = ebx;
    MEM32(ebp + -4) = ebx;
    if (CMP_NE(edi, ebx)) goto loc_004BCE8F; /* jne: not equal / not zero */

loc_004BCE7F: ;
    eax = esi;
    edx = eax + 1;

loc_004BCE84: ;
    SET_LO8(ecx, MEM8(eax));
    eax++;
    if (TEST_NZ(LO8(ecx), LO8(ecx))) goto loc_004BCE84; /* jne: not equal / not zero */

loc_004BCE8B: ;
    eax = eax - edx;
    edi = eax;

loc_004BCE8F: ;
    if (CMP_A(edi, 0x10)) { sub_004BCF1E(); return; } /* ja: above (unsigned >) */

loc_004BCE98: ;
    (void)0; /* cmp edi, ebx - flags set for next jcc */
    MEM32(ebp + 0xC) = ebx;
    if (CMP_BE(edi, ebx)) goto loc_004BCF0C; /* jbe: below or equal (unsigned <=) */

loc_004BCE9F: ;
    esi = edi + esi + -1;

loc_004BCEA3: ;
    eax = (uint32_t)(int32_t)SMEM8(esi);
    edx = ((int32_t)eax < 0) ? 0xFFFFFFFF : 0; /* cdq */
    if (CMP_A(edx & edx, 0)) { sub_004BCF1E(); return; } /* ja: above (unsigned >) */

loc_004BCEAB: ;
    if (CMP_B(eax, 0x30)) goto loc_004BCEC0; /* jb: below (unsigned <) */

loc_004BCEB0: ;
    if (CMP_A(edx & edx, 0)) { sub_004BCF1E(); return; } /* ja: above (unsigned >) */

loc_004BCEB4: ;
    if (CMP_B(edx & edx, 0)) goto loc_004BCEBB; /* jb: below (unsigned <) */

loc_004BCEB6: ;
    if (CMP_A(eax, 0x39)) goto loc_004BCEC0; /* ja: above (unsigned >) */

loc_004BCEBB: ;
    eax = eax + 0xFFFFFFD0u;
    goto loc_004BCEF0;

loc_004BCEC0: ;
    if (CMP_A(edx & edx, 0)) { sub_004BCF1E(); return; } /* ja: above (unsigned >) */

loc_004BCEC4: ;
    if (CMP_B(eax, 0x61)) goto loc_004BCED9; /* jb: below (unsigned <) */

loc_004BCEC9: ;
    if (CMP_A(edx & edx, 0)) { sub_004BCF1E(); return; } /* ja: above (unsigned >) */

loc_004BCECD: ;
    if (CMP_B(edx & edx, 0)) goto loc_004BCED4; /* jb: below (unsigned <) */

loc_004BCECF: ;
    if (CMP_A(eax, 0x66)) goto loc_004BCED9; /* ja: above (unsigned >) */

loc_004BCED4: ;
    eax = eax + 0xFFFFFFA9u;
    goto loc_004BCEF0;

loc_004BCED9: ;
    if (CMP_A(edx & edx, 0)) { sub_004BCF1E(); return; } /* ja: above (unsigned >) */

loc_004BCEDD: ;
    if (CMP_B(eax, 0x41)) { sub_004BCF1E(); return; } /* jb: below (unsigned <) */

loc_004BCEE2: ;
    if (CMP_A(edx & edx, 0)) { sub_004BCF1E(); return; } /* ja: above (unsigned >) */

loc_004BCEE6: ;
    if (CMP_B(edx & edx, 0)) goto loc_004BCEED; /* jb: below (unsigned <) */

loc_004BCEE8: ;
    if (CMP_A(eax, 0x46)) { sub_004BCF1E(); return; } /* ja: above (unsigned >) */

loc_004BCEED: ;
    eax = eax + 0xFFFFFFC9u;

loc_004BCEF0: ;
    edx = edx + 0xFFFFFFFFu + _cf; /* adc */
    ecx = ebx;
    PUSH32(esp, 0); sub_00471220(); /* call 0x00471220 */

loc_004BCEFA: ;
    MEM32(ebp + -8) = MEM32(ebp + -8) | eax;
    MEM32(ebp + -4) = MEM32(ebp + -4) | edx;
    MEM32(ebp + 0xC) = MEM32(ebp + 0xC) + 1;
    esi--;
    ebx = ebx + 4;
    if (CMP_B(MEM32(ebp + 0xC), edi)) goto loc_004BCEA3; /* jb: below (unsigned <) */

loc_004BCF0C: ;
    eax = MEM32(ebp + 0x10);
    ecx = MEM32(ebp + -8);
    MEM32(eax) = ecx;
    ecx = MEM32(ebp + -4);
    MEM32(eax + 4) = ecx;
    eax = 0; /* xor self */
    g_seh_ebp = ebp; sub_004BCF23(); return; /* tail jmp 0x004BCF23 */

}

/**
 * sub_004BCF2A
 * Original: 0x004BCF2A - 0x004BCF38 (14 bytes, 5 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_004BCF2A(void)
{
    uint32_t ebp;
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_004BCF2A: ;
    edx = MEM32(esp + 8);
    eax = MEM32(edx);
    ecx = MEM32(esp + 4);
    ecx = ecx + eax;
    g_seh_ebp = ebp; sub_004BCF3F(); return; /* tail jmp 0x004BCF3F */

}

/**
 * sub_004BCF54
 * Original: 0x004BCF54 - 0x004BD179 (549 bytes, 178 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_004BCF54(void)
{
    uint32_t ebp;
    int _flags = 0; /* fallback flag var */

loc_004BCF54: ;
    PUSH32(esp, ebp);
    ebp = esp;
    PUSH32(esp, ecx);
    PUSH32(esp, ebx);
    PUSH32(esp, esi);
    esi = MEM32(ebp + 8);
    eax = MEM32(esi + 0x16C);
    PUSH32(esp, edi);
    edi = esi + eax * 4 + 0x170;
    MEM32(ebp + 8) = eax;
    eax = MEM32(edi);
    (void)0; /* cmp eax, 0xFFFFFFFFu - flags set for next jcc */
    MEM32(ebp + -4) = ecx;
    if (CMP_NE(eax, 0xFFFFFFFFu)) goto loc_004BCFD8; /* jne: not equal / not zero */

loc_004BCF78: ;
    eax = MEM32(esi + 0x18);
    ecx = eax + 4;
    if (CMP_AE(ecx, MEM32(esi + 0x24))) goto loc_004BD112; /* jae: above or equal (unsigned >=) */

loc_004BCF87: ;
    ecx = MEM32(esi + 0x14);
    ebx = esi + 0x2C;
    PUSH32(esp, ebx);
    MEM32(eax + ecx) = 0x2A2E2A;
    PUSH32(esp, MEM32(esi + 0x14));
    PUSH32(esp, 0); sub_0042C6B3(); /* call 0x0042C6B3 */

loc_004BCF9D: ;
    MEM32(edi) = eax;
    eax = MEM32(esi + 0x18);
    ecx = MEM32(esi + 0x14);
    MEM8(eax + ecx) = 0;
    if (CMP_NE(MEM32(edi), 0xFFFFFFFFu)) goto loc_004BD0AF; /* jne: not equal / not zero */

loc_004BCFB2: ;
    PUSH32(esp, 0); sub_0042C2AC(); /* call 0x0042C2AC */

loc_004BCFB7: ;
    if (CMP_EQ(eax, 3)) goto loc_004BD002; /* je: equal / zero */

loc_004BCFBC: ;
    if (CMP_EQ(eax, 2)) goto loc_004BD002; /* je: equal / zero */

loc_004BCFC1: ;
    if (CMP_LE(eax & eax, 0)) goto loc_004BD117; /* jle: less or equal (signed <=) */

loc_004BCFC9: ;
    eax = eax & 0xFFFF;
    eax = eax | 0x80070000u;
    goto loc_004BD117;

loc_004BCFD8: ;
    ebx = esi + 0x2C;
    PUSH32(esp, ebx);
    PUSH32(esp, eax);
    PUSH32(esp, 0); sub_0042C7C0(); /* call 0x0042C7C0 */

loc_004BCFE2: ;
    if (TEST_NZ(eax, eax)) goto loc_004BD0AF; /* jne: not equal / not zero */

loc_004BCFEA: ;
    PUSH32(esp, 0); sub_0042C2AC(); /* call 0x0042C2AC */

loc_004BCFEF: ;
    if (CMP_NE(eax, 0x12)) goto loc_004BD095; /* jne: not equal / not zero */

loc_004BCFF8: ;
    PUSH32(esp, MEM32(edi));
    PUSH32(esp, 0); sub_0042C509(); /* call 0x0042C509 */

loc_004BCFFF: ;
    MEM32(edi) = MEM32(edi) | 0xFFFFFFFFu;

loc_004BD002: ;
    eax = MEM32(ebp + 8);
    if (TEST_NZ(eax, eax)) goto loc_004BD015; /* jne: not equal / not zero */

loc_004BD009: ;
    MEM32(esi + 0xC) = 3;
    goto loc_004BD170;

loc_004BD015: ;
    ecx = MEM32(esi + 0x14);
    eax--;
    edi = esi + 0x18;
    MEM32(edi) = MEM32(edi) - 1;
    MEM32(esi + 0x16C) = eax;
    eax = MEM32(edi);
    MEM8(eax + ecx) = 0;
    ecx = MEM32(ebp + -4);
    PUSH32(esp, edi);
    PUSH32(esp, MEM32(esi + 0x14));
    PUSH32(esp, 0); sub_004BCF2A(); /* call 0x004BCF2A */

loc_004BD036: ;
    if (TEST_S(eax, eax)) goto loc_004BD117; /* jl: less (signed <) */

loc_004BD03E: ;
    eax = MEM32(edi);
    ecx = MEM32(esi + 0x14);
    MEM8(eax + ecx) = 0x5C;
    MEM32(edi) = MEM32(edi) + 1;
    eax = MEM32(esi + 0x14);
    edi = MEM32(edi);
    MEM8(edi + eax) = 0;
    eax = MEM32(esi + 0x1C);
    if (TEST_Z(eax, eax)) goto loc_004BD170; /* je: equal / zero */

loc_004BD05D: ;
    edi = esi + 0x20;
    MEM32(edi) = MEM32(edi) - 1;
    ecx = MEM32(edi);
    MEM8(ecx + eax) = 0;
    ecx = MEM32(ebp + -4);
    PUSH32(esp, edi);
    PUSH32(esp, MEM32(esi + 0x1C));
    PUSH32(esp, 0); sub_004BCF2A(); /* call 0x004BCF2A */

loc_004BD074: ;
    if (TEST_S(eax, eax)) goto loc_004BD117; /* jl: less (signed <) */

loc_004BD07C: ;
    eax = MEM32(edi);
    ecx = MEM32(esi + 0x1C);
    MEM8(eax + ecx) = 0x5C;
    MEM32(edi) = MEM32(edi) + 1;
    edi = MEM32(edi);
    eax = MEM32(esi + 0x1C);
    MEM8(edi + eax) = 0;
    goto loc_004BD170;

loc_004BD095: ;
    PUSH32(esp, 0); sub_0042C2AC(); /* call 0x0042C2AC */

loc_004BD09A: ;
    if (CMP_G(eax & eax, 0)) goto loc_004BD0A5; /* jg: greater (signed >) */

loc_004BD09E: ;
    PUSH32(esp, 0); sub_0042C2AC(); /* call 0x0042C2AC */

loc_004BD0A3: ;
    goto loc_004BD117;

loc_004BD0A5: ;
    PUSH32(esp, 0); sub_0042C2AC(); /* call 0x0042C2AC */

loc_004BD0AA: ;
    goto loc_004BCFC9;

loc_004BD0AF: ;
    eax = esi + 0x58;
    edi = eax + 1;

loc_004BD0B5: ;
    SET_LO8(ecx, MEM8(eax));
    eax++;
    if (TEST_NZ(LO8(ecx), LO8(ecx))) goto loc_004BD0B5; /* jne: not equal / not zero */

loc_004BD0BC: ;
    eax = eax - edi;
    (void)0; /* test MEM8(ebx), 0x10 - flags set for next jcc */
    ecx = eax;
    if (TEST_Z(MEM8(ebx), 0x10)) goto loc_004BD160; /* je: equal / zero */

loc_004BD0C9: ;
    edx = MEM32(esi + 0x18);
    eax = edx + ecx;
    if (CMP_AE(eax, MEM32(esi + 0x24))) goto loc_004BD112; /* jae: above or equal (unsigned >=) */

loc_004BD0D4: ;
    eax = MEM32(esi + 0x14);
    ebx = esi + 0x58;
    eax = eax + edx;

loc_004BD0DC: ;
    SET_LO8(edx, MEM8(ebx));
    ebx++;
    MEM8(eax) = LO8(edx);
    eax++;
    if (TEST_NZ(LO8(edx), LO8(edx))) goto loc_004BD0DC; /* jne: not equal / not zero */

loc_004BD0E6: ;
    MEM32(esi + 0x18) = MEM32(esi + 0x18) + ecx;
    eax = MEM32(esi + 0x18);
    edx = MEM32(esi + 0x14);
    MEM8(eax + edx) = 0x5C;
    MEM32(esi + 0x18) = MEM32(esi + 0x18) + 1;
    eax = MEM32(esi + 0x18);
    edx = MEM32(esi + 0x14);
    MEM8(eax + edx) = 0;
    eax = MEM32(esi + 0x1C);
    if (TEST_Z(eax, eax)) goto loc_004BD144; /* je: equal / zero */

loc_004BD107: ;
    edx = MEM32(esi + 0x20);
    edi = edx + ecx;
    if (CMP_B(edi, MEM32(esi + 0x24))) goto loc_004BD11C; /* jb: below (unsigned <) */

loc_004BD112: ;
    eax = 0x8007007Au;

loc_004BD117: ;
    MEM32(esi + 0x10) = eax;
    goto loc_004BD172;

loc_004BD11C: ;
    edi = esi + 0x58;
    eax = eax + edx;

loc_004BD121: ;
    SET_LO8(edx, MEM8(edi));
    edi++;
    MEM8(eax) = LO8(edx);
    eax++;
    if (TEST_NZ(LO8(edx), LO8(edx))) goto loc_004BD121; /* jne: not equal / not zero */

loc_004BD12B: ;
    MEM32(esi + 0x20) = MEM32(esi + 0x20) + ecx;
    eax = MEM32(esi + 0x20);
    ecx = MEM32(esi + 0x1C);
    MEM8(eax + ecx) = 0x5C;
    MEM32(esi + 0x20) = MEM32(esi + 0x20) + 1;
    eax = MEM32(esi + 0x20);
    ecx = MEM32(esi + 0x1C);
    MEM8(eax + ecx) = LO8(edx);

loc_004BD144: ;
    eax = MEM32(ebp + 8);
    eax++;
    (void)0; /* cmp MEM32(esi + 0x370), 0 - flags set for next jcc */
    MEM32(esi + 0x16C) = eax;
    if (CMP_EQ(MEM32(esi + 0x370), 0)) goto loc_004BD170; /* je: equal / zero */

loc_004BD157: ;
    MEM32(esi + 0xC) = 1;
    goto loc_004BD170;

loc_004BD160: ;
    if (CMP_EQ(MEM32(esi + 0x374), 0)) goto loc_004BD170; /* je: equal / zero */

loc_004BD169: ;
    MEM32(esi + 0xC) = 2;

loc_004BD170: ;
    eax = 0; /* xor self */

loc_004BD172: ;
    POP32(esp, edi);
    POP32(esp, esi);
    POP32(esp, ebx);
    esp = ebp;
    POP32(esp, ebp); /* leave */
    esp += 8; return; /* ret 4 */

}

/**
 * sub_004BD1C3
 * Original: 0x004BD1C3 - 0x004BD1FC (57 bytes, 22 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_004BD1C3(void)
{
    int _flags = 0; /* fallback flag var */

loc_004BD1C3: ;
    PUSH32(esp, ebx);
    PUSH32(esp, edi);
    edi = MEM32(esp + 0xC);
    ebx = 0; /* xor self */
    if (CMP_BE(MEM32(edi + 0x16C), ebx)) goto loc_004BD1F7; /* jbe: below or equal (unsigned <=) */

loc_004BD1D3: ;
    PUSH32(esp, esi);
    esi = edi + 0x170;

loc_004BD1DA: ;
    eax = MEM32(esi);
    if (CMP_EQ(eax, 0xFFFFFFFFu)) goto loc_004BD1EA; /* je: equal / zero */

loc_004BD1E1: ;
    PUSH32(esp, eax);
    PUSH32(esp, 0); sub_0042C509(); /* call 0x0042C509 */

loc_004BD1E7: ;
    MEM32(esi) = MEM32(esi) | 0xFFFFFFFFu;

loc_004BD1EA: ;
    ebx++;
    esi = esi + 4;
    if (CMP_B(ebx, MEM32(edi + 0x16C))) goto loc_004BD1DA; /* jb: below (unsigned <) */

loc_004BD1F6: ;
    POP32(esp, esi);

loc_004BD1F7: ;
    POP32(esp, edi);
    POP32(esp, ebx);
    esp += 8; return; /* ret 4 */

}

/**
 * sub_004BD288
 * Original: 0x004BD288 - 0x004BD33C (180 bytes, 64 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_004BD288(void)
{
    uint32_t ebp;
    int _flags = 0; /* fallback flag var */

loc_004BD288: ;
    PUSH32(esp, ebp);
    ebp = esp;
    PUSH32(esp, ecx);
    PUSH32(esp, esi);
    esi = MEM32(ebp + 0x24);
    PUSH32(esp, edi);
    MEM32(ebp + -4) = ecx;
    eax = 0; /* xor self */
    ecx = 0xDE;
    edi = esi;
    { uint32_t _i; for (_i = 0; _i < ecx; _i++) MEM32(edi + _i*4) = eax; }
    edi += ecx * 4; ecx = 0; /* rep stosd */
    ecx = MEM32(ebp + 8);
    eax = ecx;
    edi = eax + 1;

loc_004BD2A7: ;
    SET_LO8(edx, MEM8(eax));
    eax++;
    if (TEST_NZ(LO8(edx), LO8(edx))) goto loc_004BD2A7; /* jne: not equal / not zero */

loc_004BD2AE: ;
    MEM32(esi + 0x14) = ecx;
    ecx = MEM32(ebp + 0xC);
    eax = eax - edi;
    (void)0; /* test ecx, ecx - flags set for next jcc */
    MEM32(esi + 0x18) = eax;
    if (TEST_Z(ecx, ecx)) goto loc_004BD2D1; /* je: equal / zero */

loc_004BD2BD: ;
    eax = ecx;
    edi = eax + 1;

loc_004BD2C2: ;
    SET_LO8(edx, MEM8(eax));
    eax++;
    if (TEST_NZ(LO8(edx), LO8(edx))) goto loc_004BD2C2; /* jne: not equal / not zero */

loc_004BD2C9: ;
    eax = eax - edi;
    MEM32(esi + 0x20) = eax;
    MEM32(esi + 0x1C) = ecx;

loc_004BD2D1: ;
    eax = MEM32(ebp + 0x10);
    MEM32(esi + 0x10) = MEM32(esi + 0x10) & 0;
    MEM32(esi + 0xC) = MEM32(esi + 0xC) & 0;
    MEM32(esi + 0x24) = eax;
    eax = MEM32(ebp + 0x14);
    MEM32(esi + 0x28) = eax;
    eax = MEM32(ebp + 0x18);
    MEM32(esi + 0x370) = eax;
    eax = MEM32(ebp + 0x1C);
    MEM32(esi + 0x374) = eax;
    eax = eax | 0xFFFFFFFFu;
    edi = esi + 0x170;
    ecx = 0x80;
    { uint32_t _i; for (_i = 0; _i < ecx; _i++) MEM32(edi + _i*4) = eax; }
    edi += ecx * 4; ecx = 0; /* rep stosd */
    ecx = MEM32(ebp + -4);
    MEM32(esi + 0x16C) = MEM32(esi + 0x16C) & 0;
    PUSH32(esp, esi);
    PUSH32(esp, 0); sub_004A5F61(); /* call 0x004A5F61 */

loc_004BD317: ;
    eax = MEM32(ebp + 0x20);
    (void)0; /* test eax, eax - flags set for next jcc */
    POP32(esp, edi);
    MEM32(esi) = 0x4BD214;
    MEM32(esi + 4) = 0x4BD26B;
    MEM32(esi + 8) = eax;
    POP32(esp, esi);
    if (TEST_Z(eax, eax)) goto loc_004BD336; /* je: equal / zero */

loc_004BD330: ;
    PUSH32(esp, eax);
    PUSH32(esp, 0); sub_0042E2B1(); /* call 0x0042E2B1 */

loc_004BD336: ;
    eax = 0; /* xor self */
    esp = ebp;
    POP32(esp, ebp); /* leave */
    esp += 36; return; /* ret 32 */

}

/**
 * sub_004BD3D0
 * Original: 0x004BD3D0 - 0x004BD3E4 (20 bytes, 9 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_004BD3D0(void)
{
    uint32_t ebp;
    int _flags = 0; /* fallback flag var */

loc_004BD3D0: ;
    PUSH32(esp, ebp);
    ebp = esp;
    esp = esp - 0x14;
    eax = MEM32(0x75F028);
    if (TEST_NZ(eax, eax)) { sub_004BD3E4(); return; } /* jne: not equal / not zero */

loc_004BD3DF: ;
    PUSH32(esp, 0x15);
    POP32(esp, eax);
    g_seh_ebp = ebp; sub_004BD44F(); return; /* tail jmp 0x004BD44F */

}

/**
 * sub_004BD453
 * Original: 0x004BD453 - 0x004BD474 (33 bytes, 5 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_004BD453(void)
{

loc_004BD453: ;
    MEM32(0x75F008) = 0x4BD33C;
    MEM32(0x75F00C) = 0x4BD395;
    MEM32(0x75F010) = 0x4BD3D0;
    eax = 0; /* xor self */
    esp += 4; return; /* ret */

}

/**
 * sub_004BD4A2
 * Original: 0x004BD4A2 - 0x004BD4CB (41 bytes, 14 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_004BD4A2(void)
{
    uint32_t ebp;
    int _flags = 0; /* fallback flag var */

loc_004BD4A2: ;
    PUSH32(esp, ebp);
    ebp = esp;
    esp = esp - 0x114;
    eax = 0; /* xor self */
    (void)0; /* cmp MEM32(ebp + 8), 3 - flags set for next jcc */
    PUSH32(esp, edi);
    SET_LO8(eax, (CMP_EQ(MEM32(ebp + 8), 3)) ? 1 : 0); /* sete */
    edi = 0; /* xor self */
    (void)0; /* cmp ecx, edi - flags set for next jcc */
    MEM32(ebp + -8) = ecx;
    MEM32(ebp + -12) = eax;
    if (CMP_NE(ecx, edi)) { sub_004BD4CB(); return; } /* jne: not equal / not zero */

loc_004BD4C1: ;
    eax = 0x80150005u;
    g_seh_ebp = ebp; sub_004BD615(); return; /* tail jmp 0x004BD615 */

}

/**
 * sub_004BD61A
 * Original: 0x004BD61A - 0x004BD70B (241 bytes, 84 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_004BD61A(void)
{
    uint32_t ebp;
    int _flags = 0; /* fallback flag var */

loc_004BD61A: ;
    PUSH32(esp, ebp);
    ebp = esp;
    PUSH32(esp, ecx);
    edx = MEM32(ebp + 8);
    eax = MEM32(edx + 0xC);
    PUSH32(esp, esi);
    esi = 0; /* xor self */
    (void)0; /* cmp eax, esi - flags set for next jcc */
    MEM32(ebp + -4) = esi;
    if (CMP_L(eax, esi)) goto loc_004BD706; /* jl: less (signed <) */

loc_004BD632: ;
    eax = MEM32(edx + 0xFC);
    (void)0; /* cmp eax, MEM32(edx + 0x100) - flags set for next jcc */
    PUSH32(esp, edi);
    if (CMP_B(eax, MEM32(edx + 0x100))) goto loc_004BD683; /* jb: below (unsigned <) */

loc_004BD641: ;
    ecx = MEM32(edx + 0xF8);
    if (CMP_EQ(MEM32(ecx + 0x1A), 1)) goto loc_004BD657; /* je: equal / zero */

loc_004BD64D: ;
    eax = 0x8015C00Eu;
    goto loc_004BD705;

loc_004BD657: ;
    eax = MEM32(ebp + 0x18);
    if (CMP_EQ(eax, esi)) goto loc_004BD669; /* je: equal / zero */

loc_004BD65E: ;
    edi = MEM32(ecx + 8);
    MEM32(eax) = edi;
    edi = MEM32(ecx + 0xC);
    MEM32(eax + 4) = edi;

loc_004BD669: ;
    eax = MEM32(ebp + 0x1C);
    if (CMP_EQ(eax, esi)) goto loc_004BD69B; /* je: equal / zero */

loc_004BD670: ;
    esi = MEM32(ecx + 0x86);
    MEM32(eax) = esi;
    ecx = MEM32(ecx + 0x8A);
    MEM32(eax + 4) = ecx;
    goto loc_004BD69B;

loc_004BD683: ;
    eax = MEM32(ebp + 0x18);
    if (CMP_EQ(eax, esi)) goto loc_004BD68F; /* je: equal / zero */

loc_004BD68A: ;
    MEM32(eax) = esi;
    MEM32(eax + 4) = esi;

loc_004BD68F: ;
    eax = MEM32(ebp + 0x1C);
    if (CMP_EQ(eax, esi)) goto loc_004BD69B; /* je: equal / zero */

loc_004BD696: ;
    MEM32(eax) = esi;
    MEM32(eax + 4) = esi;

loc_004BD69B: ;
    eax = MEM32(edx + 0xD0);
    PUSH32(esp, ebx);
    ebx = MEM32(edx + 0xD8);
    MEM32(ebp + 0x18) = eax;
    eax = MEM32(edx + 0x180);
    if (CMP_BE(ebx, eax)) goto loc_004BD6B7; /* jbe: below or equal (unsigned <=) */

loc_004BD6B5: ;
    ebx = eax;

loc_004BD6B7: ;
    esi = MEM32(edx + 0xB0);
    edi = MEM32(edx + 0x17C);
    ecx = ebx;
    eax = ecx;
    ecx = ecx >> 2;
    memcpy((void*)XBOX_PTR(edi), (void*)XBOX_PTR(esi), ecx * 4);
    esi += ecx * 4; edi += ecx * 4; ecx = 0; /* rep movsd */
    ecx = eax;
    eax = MEM32(ebp + 0xC);
    ecx = ecx & 3;
    (void)0; /* test eax, eax - flags set for next jcc */
    memcpy((void*)XBOX_PTR(edi), (void*)XBOX_PTR(esi), ecx);
    esi += ecx; edi += ecx; ecx = 0; /* rep movsb */
    if (TEST_Z(eax, eax)) goto loc_004BD6E2; /* je: equal / zero */

loc_004BD6DA: ;
    ecx = MEM32(edx + 0x17C);
    MEM32(eax) = ecx;

loc_004BD6E2: ;
    eax = MEM32(ebp + 0x10);
    if (TEST_Z(eax, eax)) goto loc_004BD6EB; /* je: equal / zero */

loc_004BD6E9: ;
    MEM32(eax) = ebx;

loc_004BD6EB: ;
    eax = MEM32(ebp + 0x14);
    if (TEST_Z(eax, eax)) goto loc_004BD6F7; /* je: equal / zero */

loc_004BD6F2: ;
    ecx = MEM32(ebp + 0x18);
    MEM32(eax) = ecx;

loc_004BD6F7: ;
    (void)0; /* cmp MEM32(ebp + 0x18), ebx - flags set for next jcc */
    POP32(esp, ebx);
    eax = 0x8007007Au;
    if (CMP_A(MEM32(ebp + 0x18), ebx)) goto loc_004BD705; /* ja: above (unsigned >) */

loc_004BD702: ;
    eax = MEM32(ebp + -4);

loc_004BD705: ;
    POP32(esp, edi);

loc_004BD706: ;
    POP32(esp, esi);
    esp = ebp;
    POP32(esp, ebp); /* leave */
    esp += 28; return; /* ret 24 */

}

/**
 * sub_004BD70B
 * Original: 0x004BD70B - 0x004BD71E (19 bytes, 7 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_004BD70B(void)
{
    uint32_t ebp;
    int _flags = 0; /* fallback flag var */

loc_004BD70B: ;
    PUSH32(esp, ebp);
    ebp = esp;
    (void)0; /* cmp MEM32(ebp + 8), 0 - flags set for next jcc */
    PUSH32(esp, MEM32(ebp + 0xC));
    if (CMP_NE(MEM32(ebp + 8), 0)) { sub_004BD71E(); return; } /* jne: not equal / not zero */

loc_004BD717: ;
    PUSH32(esp, 0); sub_004A7C76(); /* call 0x004A7C76 */

loc_004BD71C: ;
    g_seh_ebp = ebp; sub_004BD730(); return; /* tail jmp 0x004BD730 */

}

/**
 * sub_004BD734
 * Original: 0x004BD734 - 0x004BD747 (19 bytes, 7 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_004BD734(void)
{
    uint32_t ebp;
    int _flags = 0; /* fallback flag var */
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_004BD734: ;
    PUSH32(esp, esi);
    esi = 0; /* xor self */
    PUSH32(esp, 0); sub_004A10E2(); /* call 0x004A10E2 */

loc_004BD73C: ;
    if (CMP_NE(eax, esi)) { sub_004BD747(); return; } /* jne: not equal / not zero */

loc_004BD740: ;
    esi = 0x80150002u;
    g_seh_ebp = ebp; sub_004BD76B(); return; /* tail jmp 0x004BD76B */

}

/**
 * sub_004BD771
 * Original: 0x004BD771 - 0x004BD799 (40 bytes, 16 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_004BD771(void)
{
    uint32_t ebp;
    int _flags = 0; /* fallback flag var */
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_004BD771: ;
    PUSH32(esp, ebx);
    ebx = MEM32(esp + 8);
    PUSH32(esp, esi);
    PUSH32(esp, edi);
    PUSH32(esp, ebx);
    edi = ecx;
    PUSH32(esp, 0); sub_004B91F0(); /* call 0x004B91F0 */

loc_004BD780: ;
    PUSH32(esp, ebx);
    ecx = edi;
    esi = eax;
    PUSH32(esp, 0); sub_004B91FC(); /* call 0x004B91FC */

loc_004BD78A: ;
    ecx = MEM32(esp + 0x14);
    if (TEST_S(ecx, ecx)) { sub_004BD799(); return; } /* jl: less (signed <) */

loc_004BD792: ;
    ecx = 0x1500F0;
    g_seh_ebp = ebp; sub_004BD7B5(); return; /* tail jmp 0x004BD7B5 */

}

/**
 * sub_004BD7D4
 * Original: 0x004BD7D4 - 0x004BD924 (336 bytes, 112 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_004BD7D4(void)
{
    uint32_t ebp;
    int _flags = 0; /* fallback flag var */

loc_004BD7D4: ;
    PUSH32(esp, ebp);
    ebp = esp;
    esp = esp - 0xC;
    PUSH32(esp, ebx);
    PUSH32(esp, esi);
    PUSH32(esp, edi);
    PUSH32(esp, MEM32(ebp + 8));
    edi = ecx;
    PUSH32(esp, 0); sub_004B91F0(); /* call 0x004B91F0 */

loc_004BD7E7: ;
    ebx = eax;
    esi = MEM32(ebx);
    (void)0; /* test esi, esi - flags set for next jcc */
    MEM32(ebp + -8) = ebx;
    if (TEST_NZ(esi, esi)) goto loc_004BD885; /* jne: not equal / not zero */

loc_004BD7F6: ;
    PUSH32(esp, MEM32(ebp + 8));
    ecx = edi;
    PUSH32(esp, 0); sub_004B9ED1(); /* call 0x004B9ED1 */

loc_004BD800: ;
    esi = eax;
    if (TEST_Z(esi, esi)) goto loc_004BD91B; /* je: equal / zero */

loc_004BD80A: ;
    if (TEST_S(esi, esi)) goto loc_004BD8D8; /* jl: less (signed <) */

loc_004BD810: ;
    eax = ebp + -4;
    PUSH32(esp, eax);
    eax = ebp + -12;
    PUSH32(esp, eax);
    PUSH32(esp, MEM32(ebp + 8));
    ecx = edi;
    PUSH32(esp, 0); sub_004B9206(); /* call 0x004B9206 */

loc_004BD822: ;
    esi = eax;
    if (TEST_S(esi, esi)) goto loc_004BD8D8; /* jl: less (signed <) */

loc_004BD82C: ;
    edx = MEM32(ebx + 4);
    if (TEST_Z(edx, edx)) goto loc_004BD867; /* je: equal / zero */

loc_004BD833: ;
    if (CMP_AE(MEM32(ebp + -4), 0x20)) goto loc_004BD843; /* jae: above or equal (unsigned >=) */

loc_004BD839: ;
    esi = 0x8015000Au;
    goto loc_004BD8D8;

loc_004BD843: ;
    eax = MEM32(ebp + -12);
    ecx = MEM32(eax);
    if (CMP_NE(ecx, edx)) goto loc_004BD839; /* jne: not equal / not zero */

loc_004BD84C: ;
    ecx = ecx - 0x45A;
    if ((ecx == 0)) goto loc_004BD85E; /* je: equal / zero */

loc_004BD854: ;
    ecx--;
    if ((ecx == 0)) goto loc_004BD85E; /* je: equal / zero */

loc_004BD857: ;
    esi = 0x80150007u;
    goto loc_004BD8D8;

loc_004BD85E: ;
    if (CMP_B(MEM32(ebp + -4), 0x24)) goto loc_004BD839; /* jb: below (unsigned <) */

loc_004BD864: ;
    esi = MEM32(eax + 0x20);

loc_004BD867: ;
    if (TEST_S(esi, esi)) goto loc_004BD8D8; /* jl: less (signed <) */

loc_004BD86B: ;
    if (CMP_NE(MEM32(ebx + 8), 0)) goto loc_004BD878; /* jne: not equal / not zero */

loc_004BD871: ;
    esi = 0x1500F0;
    goto loc_004BD8D8;

loc_004BD878: ;
    MEM32(ebx) = 0x1500F0;

loc_004BD87E: ;
    esi = 0; /* xor self */
    goto loc_004BD91B;

loc_004BD885: ;
    if (((int32_t)esi < 0)) goto loc_004BD91B; /* jl: less (signed <) */

loc_004BD88B: ;
    if (CMP_EQ(MEM32(ebx + 8), 0)) goto loc_004BD91B; /* je: equal / zero */

loc_004BD895: ;
    eax = MEM32(edi + 0x14D0);
    if (TEST_Z(eax, eax)) goto loc_004BD8AD; /* je: equal / zero */

loc_004BD89F: ;
    PUSH32(esp, eax);
    ecx = edi;
    PUSH32(esp, 0); sub_004A5F72(); /* call 0x004A5F72 */

loc_004BD8A7: ;
    esi = eax;
    if (TEST_S(esi, esi)) goto loc_004BD8D8; /* jl: less (signed <) */

loc_004BD8AD: ;
    PUSH32(esp, MEM32(ebp + 8));
    ecx = edi;
    PUSH32(esp, 0); sub_004B91FC(); /* call 0x004B91FC */

loc_004BD8B7: ;
    eax = eax + eax * 8;
    ebx = edi + eax * 8;
    eax = MEM32(ebx + 0x13DC);
    if (TEST_Z(eax, eax)) goto loc_004BD8EB; /* je: equal / zero */

loc_004BD8C7: ;
    PUSH32(esp, eax);
    ecx = edi;
    PUSH32(esp, 0); sub_004A5F72(); /* call 0x004A5F72 */

loc_004BD8CF: ;
    esi = eax;
    if (CMP_GE(esi & esi, 0)) goto loc_004BD8DC; /* jge: greater or equal (signed >=) */

loc_004BD8D5: ;
    ebx = MEM32(ebp + -8);

loc_004BD8D8: ;
    MEM32(ebx) = esi;
    goto loc_004BD91B;

loc_004BD8DC: ;
    if (CMP_NE(esi, 0x1500F1)) goto loc_004BD8EB; /* jne: not equal / not zero */

loc_004BD8E4: ;
    MEM32(ebx + 0x13B4) = MEM32(ebx + 0x13B4) | 8;

loc_004BD8EB: ;
    esi = MEM32(ebp + -8);
    if (CMP_EQ(MEM32(esi + 8), 0)) goto loc_004BD919; /* je: equal / zero */

loc_004BD8F4: ;
    PUSH32(esp, 0); sub_0042B72A(); /* call 0x0042B72A */

loc_004BD8F9: ;
    eax = eax - MEM32(esi + 8);
    if (CMP_BE(eax, 0xEA60)) goto loc_004BD87E; /* jbe: below or equal (unsigned <=) */

loc_004BD907: ;
    esi = 0x800705B4u;
    PUSH32(esp, esi);
    PUSH32(esp, MEM32(ebp + 8));
    ecx = edi;
    PUSH32(esp, 0); sub_004BD771(); /* call 0x004BD771 */

loc_004BD917: ;
    goto loc_004BD91B;

loc_004BD919: ;
    esi = MEM32(esi);

loc_004BD91B: ;
    POP32(esp, edi);
    eax = esi;
    POP32(esp, esi);
    POP32(esp, ebx);
    esp = ebp;
    POP32(esp, ebp); /* leave */
    esp += 8; return; /* ret 4 */

}

/**
 * sub_004BD924
 * Original: 0x004BD924 - 0x004BD94F (43 bytes, 18 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_004BD924(void)
{
    int _flags = 0; /* fallback flag var */

loc_004BD924: ;
    PUSH32(esp, esi);
    PUSH32(esp, edi);
    edi = MEM32(esp + 0xC);
    PUSH32(esp, edi);
    esi = ecx;
    PUSH32(esp, 0); sub_004B91F0(); /* call 0x004B91F0 */

loc_004BD932: ;
    if (CMP_EQ(MEM32(eax + 8), 0)) goto loc_004BD942; /* je: equal / zero */

loc_004BD938: ;
    PUSH32(esp, MEM32(eax));
    ecx = esi;
    PUSH32(esp, edi);
    PUSH32(esp, 0); sub_004BD771(); /* call 0x004BD771 */

loc_004BD942: ;
    PUSH32(esp, edi);
    ecx = esi;
    PUSH32(esp, 0); sub_004B9ECC(); /* call 0x004B9ECC */

loc_004BD94A: ;
    POP32(esp, edi);
    POP32(esp, esi);
    esp += 8; return; /* ret 4 */

}
