/**
 * Burnout 3 - Recompiled code chunk 52
 * Functions: 250 (0x0045F734 - 0x0047168A)
 */

#define RECOMP_GENERATED_CODE
#include "recomp_funcs.h"
#include <math.h>

/**
 * sub_0045F734
 * Original: 0x0045F734 - 0x0045F77A (70 bytes, 26 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0045F734(void)
{
    int _flags = 0; /* fallback flag var */

loc_0045F734: ;
    PUSH32(esp, ebx);
    ebx = esp;
    esp = esp & 0xFFFFFFF0u;
    PUSH32(esp, edi);
    PUSH32(esp, esi);
    esp = esp - 0x28;
    esi = MEM32(ebx + 8);
    edi = MEM32(ebx + 0xC);
    ecx = MEM32(ebx + 0x10);
    eax = MEM32(ebx + 0x14);
    edx = MEM32(ecx * 4 + 0x65543C);
    if (TEST_NZ(edx, edx)) { sub_0045F77A(); return; } /* jne: not equal / not zero */

loc_0045F756: ;
    MEM32(esp) = esi;
    edx = 1;
    MEM32(esp + 4) = edi;
    edx = edx << LO8(ecx);
    MEM32(esp + 8) = edx;
    MEM32(esp + 0xC) = eax;
    PUSH32(esp, 0); sub_0045EB04(); /* call 0x0045EB04 */

loc_0045F771: ;
    esp = esp + 0x28;
    POP32(esp, esi);
    POP32(esp, edi);
    esp = ebx;
    POP32(esp, ebx);
    esp += 4; return; /* ret */

}

/**
 * sub_0045F7A4
 * Original: 0x0045F7A4 - 0x0045FC80 (1244 bytes, 359 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0045F7A4(void)
{
    uint32_t ebp;
    int _flags = 0; /* fallback flag var */
    int _cf = 0; /* carry flag */
    float xmm0, xmm1;
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_0045F7A4: ;
    PUSH32(esp, ebx);
    ebx = esp;
    esp = esp & 0xFFFFFFF0u;
    PUSH32(esp, edi);
    PUSH32(esp, esi);
    PUSH32(esp, ebp);
    esp = esp - 0x74;
    esi = MEM32(ebx + 8);
    ebp = MEM32(ebx + 0xC);
    edi = 1;
    ecx = esi;
    eax = 1;
    edi = edi << LO8(ecx);
    (void)0; /* cmp edi, 8 - flags set for next jcc */
    if (CMP_G(edi, 8)) eax = edi; /* cmovg */
    eax = eax + eax;
    eax = eax + eax;
    eax = eax + eax;
    PUSH32(esp, eax);
    PUSH32(esp, 0); sub_0045FC84(); /* call 0x0045FC84 */

loc_0045F7D6: ;
    if (TEST_Z(eax, eax)) goto loc_0045FC74; /* je: equal / zero */

loc_0045F7DE: ;
    if (CMP_LE(edi, 8)) goto loc_0045FC48; /* jle: less or equal (signed <=) */

loc_0045F7E7: ;
    edx = eax;
    edi = esi;
    edi = edi & 1;
    edi = edi + 4;
    if (CMP_G(edi, esi)) goto loc_0045FC48; /* jg: greater (signed >) */

loc_0045F7F9: ;
    MEM32(esp + 0x50) = edi;
    MEM32(esp + 0x4C) = eax;

loc_0045F801: ;
    esi = 1;
    ecx = MEM32(esp + 0x50);
    ebp = 1;
    eax = MEM32(ebx + 0x10);
    esi = esi << LO8(ecx);
    eax = eax - ecx;
    ecx = eax;
    eax = 0; /* xor self */
    ebp = ebp << LO8(ecx);
    edi = esi;
    edi = (uint32_t)((int32_t)edi >> 1);
    edi = edi >> 0x1E;
    edi = edi + esi;
    edi = (uint32_t)((int32_t)edi >> 2);
    MEM32(esp + 4) = edi;
    if (CMP_LE(edi & edi, 0)) goto loc_0045FC52; /* jle: less or equal (signed <=) */

loc_0045F834: ;
    ecx = esi + esi * 2;
    edi = ecx;
    edi = (uint32_t)((int32_t)edi >> 1);
    edi = edi >> 0x1E;
    edi = edi + ecx;
    edi = (uint32_t)((int32_t)edi >> 2);
    MEM32(esp + 0x54) = edi;
    edi = ebp + ebp;
    edi = edi + edi;
    MEM32(esp + 0x44) = edi;
    esi = esi + 0x80000000u;
    ecx = ebp * 8;
    esi = esi + 0x80000000u + _cf; /* adc */
    esi = (uint32_t)((int32_t)esi >> 1);
    ecx = ecx + ebp * 4;
    MEM32(esp + 0x48) = ecx;
    ecx = eax;
    ecx = ecx << 4;
    ecx = ecx + eax * 8;
    edi = (uint32_t)((int32_t)edi * (int32_t)eax);
    MEM32(esp + 0x1C) = ecx;
    ecx = eax;
    ecx = ecx << 4;
    ecx = ecx + eax * 8;
    ecx = ecx + edx;
    MEM32(esp + 0x24) = ecx;
    ecx = eax + eax;
    MEM32(esp + 0x28) = edi;
    edi = eax + eax * 2;
    edi = (uint32_t)(-(int32_t)edi);
    MEM32(esp + 0x20) = ecx;
    ecx = eax + eax;
    ecx = (uint32_t)(-(int32_t)ecx);
    ecx = ecx + esi;
    MEM32(esp + 0x30) = ecx;
    ecx = eax + eax;
    ecx = (uint32_t)(-(int32_t)ecx);
    ecx = ecx + MEM32(esp + 4);
    MEM32(esp + 0x40) = ecx;
    ecx = ebp;
    ecx = (uint32_t)((int32_t)ecx * (int32_t)eax);
    edi = edi + MEM32(esp + 0x54);
    MEM32(esp + 0x34) = edi;
    edi = eax + eax * 2;
    edi = (uint32_t)(-(int32_t)edi);
    edi = edi + esi;
    MEM32(esp + 0x38) = edi;
    edi = eax + eax * 2;
    edi = (uint32_t)(-(int32_t)edi);
    edi = edi + MEM32(esp + 4);
    MEM32(esp + 0x3C) = edi;
    edi = MEM32(esp + 0x48);
    edi = (uint32_t)((int32_t)edi * (int32_t)eax);
    MEM32(esp + 0x2C) = edi;
    edi = MEM32(ebx + 0xC);
    ecx = edi + ecx * 8;
    MEM32(esp + 0xC) = ecx;
    ecx = MEM32(esp + 0x1C);
    MEM32(esp + 0x18) = esi;
    MEM32(esp + 0x10) = edx;
    MEM32(esp + 0x14) = ebp;
    edx = MEM32(esp + 0x24);
    ebp = MEM32(ebx + 0xC);
    /* nop */

loc_0045F904: ;
    esi = MEM32(esp + 4);
    esi = esi - eax;
    esi = (uint32_t)((int32_t)esi * (int32_t)MEM32(esp + 0x44));
    edi = MEM32(esi + ebp);
    esi = MEM32(esp + 0x10);
    MEM32(ecx + esi) = edi;
    esi = MEM32(esp + 0x28);
    edi = MEM32(esp + 0x20);
    xmm0 = 0.0f; /* xorps self = zero */
    xmm0 = xmm0 - MEMF(esi + ebp); /* subss */
    esi = MEM32(esp + 0x10);
    MEMF(ecx + esi + 4) = xmm0; /* movss */
    esi = MEM32(esp + 4);
    if (CMP_G(edi, esi)) goto loc_0045F964; /* jg: greater (signed >) */

loc_0045F93B: ;
    esi = MEM32(esp + 0x40);
    esi = (uint32_t)((int32_t)esi * (int32_t)MEM32(esp + 0x44));
    edi = MEM32(esi + ebp);
    esi = MEM32(esp + 0xC);
    MEM32(edx + 8) = edi;
    xmm0 = 0.0f; /* xorps self = zero */
    xmm0 = xmm0 - MEMF(esi); /* subss */
    MEMF(edx + 0xC) = xmm0; /* movss */
    goto loc_0045F990;

    /* nop */
    /* nop */

loc_0045F964: ;
    esi = MEM32(esp + 0x30);
    edi = edi - MEM32(esp + 4);
    edi = (uint32_t)((int32_t)edi * (int32_t)MEM32(esp + 0x44));
    esi = (uint32_t)((int32_t)esi * (int32_t)MEM32(esp + 0x44));
    xmm1 = 0.0f; /* xorps self = zero */
    xmm1 = xmm1 - MEMF(edi + ebp); /* subss */
    MEMF(edx + 8) = xmm1; /* movss */
    xmm0 = 0.0f; /* xorps self = zero */
    xmm0 = xmm0 - MEMF(esi + ebp); /* subss */
    MEMF(edx + 0xC) = xmm0; /* movss */

loc_0045F990: ;
    edi = eax + eax * 2;
    esi = MEM32(esp + 4);
    (void)0; /* cmp edi, esi - flags set for next jcc */
    MEM32(esp + 8) = edi;
    if (CMP_G(edi, esi)) goto loc_0045F9C4; /* jg: greater (signed >) */

loc_0045F99F: ;
    esi = MEM32(esp + 0x3C);
    esi = (uint32_t)((int32_t)esi * (int32_t)MEM32(esp + 0x44));
    edi = MEM32(esi + ebp);
    esi = MEM32(esp + 0x2C);
    MEM32(edx + 0x10) = edi;
    xmm0 = 0.0f; /* xorps self = zero */
    xmm0 = xmm0 - MEMF(esi + ebp); /* subss */
    MEMF(edx + 0x14) = xmm0; /* movss */
    goto loc_0045FA29;

    /* nop */

loc_0045F9C4: ;
    esi = MEM32(esp + 0x18);
    if (CMP_G(edi, esi)) goto loc_0045FA04; /* jg: greater (signed >) */

loc_0045F9CC: ;
    esi = MEM32(esp + 0x38);
    esi = (uint32_t)((int32_t)esi * (int32_t)MEM32(esp + 0x44));
    edi = edi - MEM32(esp + 4);
    edi = (uint32_t)((int32_t)edi * (int32_t)MEM32(esp + 0x44));
    xmm1 = 0.0f; /* xorps self = zero */
    xmm1 = xmm1 - MEMF(edi + ebp); /* subss */
    MEMF(edx + 0x10) = xmm1; /* movss */
    xmm0 = 0.0f; /* xorps self = zero */
    xmm0 = xmm0 - MEMF(esi + ebp); /* subss */
    MEMF(edx + 0x14) = xmm0; /* movss */
    goto loc_0045FA29;

    /* nop */
    /* nop */

loc_0045FA04: ;
    esi = MEM32(esp + 0x34);
    esi = (uint32_t)((int32_t)esi * (int32_t)MEM32(esp + 0x44));
    xmm0 = 0.0f; /* xorps self = zero */
    xmm0 = xmm0 - MEMF(esi + ebp); /* subss */
    MEMF(edx + 0x10) = xmm0; /* movss */
    edi = edi - MEM32(esp + 0x18);
    edi = (uint32_t)((int32_t)edi * (int32_t)MEM32(esp + 0x44));
    esi = MEM32(edi + ebp);
    MEM32(edx + 0x14) = esi;

loc_0045FA29: ;
    ecx = ecx + 0x18;
    edx = edx + 0x18;
    esi = MEM32(esp + 0x28);
    esi = esi + MEM32(esp + 0x44);
    edi = MEM32(esp + 0xC);
    eax++;
    MEM32(esp + 0x28) = esi;
    esi = MEM32(esp + 0x14);
    esi = edi + esi * 8;
    MEM32(esp + 0x20) = MEM32(esp + 0x20) + 2;
    edi = MEM32(esp + 0x2C);
    MEM32(esp + 0x30) = MEM32(esp + 0x30) + 0xFFFFFFFEu;
    MEM32(esp + 0x40) = MEM32(esp + 0x40) + 0xFFFFFFFEu;
    MEM32(esp + 0xC) = esi;
    esi = MEM32(esp + 4);
    MEM32(esp + 0x34) = MEM32(esp + 0x34) + 0xFFFFFFFDu;
    MEM32(esp + 0x38) = MEM32(esp + 0x38) + 0xFFFFFFFDu;
    MEM32(esp + 0x3C) = MEM32(esp + 0x3C) + 0xFFFFFFFDu;
    edi = edi + MEM32(esp + 0x48);
    MEM32(esp + 0x2C) = edi;
    if (CMP_L(eax, esi)) goto loc_0045F904; /* jl: less (signed <) */

loc_0045FA81: ;
    edx = MEM32(esp + 0x10);

loc_0045FA85: ;
    ecx = 0; /* xor self */
    eax = MEM32(esp + 4);
    if (CMP_LE(eax & eax, 0)) goto loc_0045FC27; /* jle: less or equal (signed <=) */

loc_0045FA93: ;
    eax = ecx;
    eax = eax << 4;
    eax = eax + ecx * 8;
    ebp = ecx + ecx * 2;
    ebp = edx + ebp * 8;
    MEM32(esp + 0x48) = ebp;
    MEM32(esp + 0x10) = edx;
    /* nop */
    /* nop */

loc_0045FAB4: ;
    MEM32(esp + 0x44) = eax;
    edi = MEM32(esp + 0x10);
    esi = MEM32(eax + edi);
    MEM32(esp + 0x40) = ecx;
    edx = MEM32(eax + edi + 4);
    ecx = MEM32(eax + edi + 0x1C);
    MEM32(esp + 0x3C) = edx;
    edx = MEM32(eax + edi + 8);
    ebp = MEM32(eax + edi + 0x34);
    MEM32(esp + 0x38) = edx;
    edx = MEM32(eax + edi + 0xC);
    MEM32(esp + 0x34) = edx;
    edx = MEM32(eax + edi + 0x10);
    MEM32(esp + 0x30) = edx;
    edx = MEM32(eax + edi + 0x14);
    MEM32(esp + 0x2C) = edx;
    edx = MEM32(eax + edi + 0x18);
    MEM32(esp + 0x28) = ecx;
    ecx = MEM32(eax + edi + 0x20);
    MEM32(esp + 0x24) = ecx;
    ecx = MEM32(eax + edi + 0x24);
    MEM32(esp + 0x20) = ecx;
    ecx = MEM32(eax + edi + 0x28);
    MEM32(esp + 0x1C) = ecx;
    ecx = MEM32(eax + edi + 0x2C);
    MEM32(esp + 0x18) = ecx;
    ecx = MEM32(eax + edi + 0x30);
    MEM32(esp + 0x14) = ebp;
    ebp = MEM32(eax + edi + 0x38);
    MEM32(esp + 0xC) = ebp;
    ebp = MEM32(eax + edi + 0x3C);
    MEM32(esp + 8) = ebp;
    ebp = MEM32(eax + edi + 0x40);
    MEM32(esp + 0x58) = ebp;
    ebp = MEM32(eax + edi + 0x44);
    MEM32(esp + 0x5C) = ebp;
    ebp = MEM32(eax + edi + 0x48);
    MEM32(esp + 0x60) = ebp;
    ebp = MEM32(eax + edi + 0x4C);
    MEM32(esp + 0x64) = ebp;
    ebp = MEM32(eax + edi + 0x50);
    MEM32(esp + 0x68) = ebp;
    ebp = MEM32(eax + edi + 0x54);
    MEM32(esp + 0x6C) = ebp;
    ebp = MEM32(eax + edi + 0x58);
    eax = MEM32(eax + edi + 0x5C);
    edi = MEM32(esp + 0x48);
    MEM32(edi) = esi;
    MEM32(edi + 4) = edx;
    edx = MEM32(esp + 0x60);
    MEM32(edi + 8) = ecx;
    ecx = MEM32(esp + 0x40);
    ecx = ecx + 4;
    MEM32(edi + 0xC) = edx;
    edx = MEM32(esp + 0x3C);
    MEM32(edi + 0x10) = edx;
    edx = MEM32(esp + 0x28);
    MEM32(edi + 0x14) = edx;
    edx = MEM32(esp + 0x14);
    MEM32(edi + 0x18) = edx;
    edx = MEM32(esp + 0x64);
    MEM32(edi + 0x1C) = edx;
    edx = MEM32(esp + 0x38);
    MEM32(edi + 0x20) = edx;
    edx = MEM32(esp + 0x24);
    MEM32(edi + 0x24) = edx;
    edx = MEM32(esp + 0xC);
    MEM32(edi + 0x28) = edx;
    edx = MEM32(esp + 0x68);
    MEM32(edi + 0x2C) = edx;
    edx = MEM32(esp + 0x34);
    MEM32(edi + 0x30) = edx;
    edx = MEM32(esp + 0x20);
    MEM32(edi + 0x34) = edx;
    edx = MEM32(esp + 8);
    MEM32(edi + 0x38) = edx;
    edx = MEM32(esp + 0x6C);
    MEM32(edi + 0x3C) = edx;
    edx = MEM32(esp + 0x30);
    MEM32(edi + 0x40) = edx;
    edx = MEM32(esp + 0x1C);
    MEM32(edi + 0x44) = edx;
    edx = MEM32(esp + 0x58);
    MEM32(edi + 0x48) = edx;
    edx = MEM32(esp + 0x2C);
    MEM32(edi + 0x4C) = ebp;
    MEM32(edi + 0x50) = edx;
    edx = MEM32(esp + 0x18);
    MEM32(edi + 0x54) = edx;
    edx = MEM32(esp + 0x5C);
    MEM32(edi + 0x58) = edx;
    MEM32(edi + 0x5C) = eax;
    eax = MEM32(esp + 0x44);
    eax = eax + 0x60;
    edi = edi + 0x60;
    edx = MEM32(esp + 4);
    (void)0; /* cmp ecx, edx - flags set for next jcc */
    MEM32(esp + 0x48) = edi;
    if (CMP_L(ecx, edx)) goto loc_0045FAB4; /* jl: less (signed <) */

loc_0045FC23: ;
    edx = MEM32(esp + 0x10);

loc_0045FC27: ;
    eax = MEM32(esp + 0x54);
    edx = edx + eax * 8;
    ecx = MEM32(esp + 0x50);
    ecx = ecx + 2;
    ebp = MEM32(ebx + 8);
    (void)0; /* cmp ecx, ebp - flags set for next jcc */
    MEM32(esp + 0x50) = ecx;
    if (CMP_LE(ecx, ebp)) goto loc_0045F801; /* jle: less or equal (signed <=) */

loc_0045FC44: ;
    eax = MEM32(esp + 0x4C);

loc_0045FC48: ;
    esp = esp + 0x74;
    POP32(esp, ebp);
    POP32(esp, esi);
    POP32(esp, edi);
    esp = ebx;
    POP32(esp, ebx);
    esp += 4; return; /* ret */

loc_0045FC52: ;
    eax = esi + esi * 2;
    ecx = eax;
    ecx = (uint32_t)((int32_t)ecx >> 1);
    ecx = ecx >> 0x1E;
    ecx = ecx + eax;
    ecx = (uint32_t)((int32_t)ecx >> 2);
    MEM32(esp + 0x54) = ecx;
    goto loc_0045FA85;

    /* nop */
    /* nop */

loc_0045FC74: ;
    eax = 0; /* xor self */
    esp = esp + 0x74;
    POP32(esp, ebp);
    POP32(esp, esi);
    POP32(esp, edi);
    esp = ebx;
    POP32(esp, ebx);
    esp += 4; return; /* ret */

}

/**
 * sub_0045FC84
 * Original: 0x0045FC84 - 0x0045FCB4 (48 bytes, 19 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0045FC84(void)
{
    int _flags = 0; /* fallback flag var */

loc_0045FC84: ;
    PUSH32(esp, ebx);
    ebx = esp;
    esp = esp & 0xFFFFFFF0u;
    esp = esp - 0x10;
    eax = MEM32(ebx + 8);
    if (CMP_LE(eax & eax, 0)) { sub_0045FCB4(); return; } /* jle: less or equal (signed <=) */

loc_0045FC94: ;
    eax = eax + 0x24;
    MEM32(esp) = eax;
    PUSH32(esp, 0); sub_00471918(); /* call 0x00471918 */

loc_0045FC9F: ;
    if (TEST_Z(eax, eax)) { sub_0045FCB4(); return; } /* je: equal / zero */

loc_0045FCA3: ;
    edx = eax + 0x23;
    edx = edx & 0xFFFFFFE0u;
    MEM32(edx + -4) = eax;
    eax = edx;
    esp = ebx;
    POP32(esp, ebx);
    esp += 8; return; /* ret 4 */

}

/**
 * sub_0045FCC4
 * Original: 0x0045FCC4 - 0x0045FCF8 (52 bytes, 19 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0045FCC4(void)
{
    int _flags = 0; /* fallback flag var */

loc_0045FCC4: ;
    PUSH32(esp, ebx);
    ebx = esp;
    esp = esp & 0xFFFFFFF0u;
    esp = esp - 0x10;
    eax = MEM32(ebx + 8);
    if (CMP_LE(eax & eax, 0)) { sub_0045FCF8(); return; } /* jle: less or equal (signed <=) */

loc_0045FCD4: ;
    eax = eax * 4 + 0x24;
    MEM32(esp) = eax;
    PUSH32(esp, 0); sub_00471918(); /* call 0x00471918 */

loc_0045FCE3: ;
    if (TEST_Z(eax, eax)) { sub_0045FCF8(); return; } /* je: equal / zero */

loc_0045FCE7: ;
    edx = eax + 0x23;
    edx = edx & 0xFFFFFFE0u;
    MEM32(edx + -4) = eax;
    eax = edx;
    esp = ebx;
    POP32(esp, ebx);
    esp += 8; return; /* ret 4 */

}

/**
 * sub_0045FD04
 * Original: 0x0045FD04 - 0x0045FD25 (33 bytes, 13 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0045FD04(void)
{
    int _flags = 0; /* fallback flag var */

loc_0045FD04: ;
    PUSH32(esp, ebx);
    ebx = esp;
    esp = esp & 0xFFFFFFF0u;
    esp = esp - 0x10;
    eax = MEM32(ebx + 8);
    if (TEST_Z(eax, eax)) goto loc_0045FD1F; /* je: equal / zero */

loc_0045FD14: ;
    eax = MEM32(eax + -4);
    MEM32(esp) = eax;
    PUSH32(esp, 0); sub_0046FB7D(); /* call 0x0046FB7D */

loc_0045FD1F: ;
    esp = ebx;
    POP32(esp, ebx);
    esp += 8; return; /* ret 4 */

}

/**
 * sub_0045FD34
 * Original: 0x0045FD34 - 0x0045FF56 (546 bytes, 145 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0045FD34(void)
{
    uint32_t ebp;
    int _flags = 0; /* fallback flag var */
    float xmm0, xmm1, xmm2, xmm3, xmm4, xmm5, xmm6, xmm7;
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_0045FD34: ;
    PUSH32(esp, ebx);
    ebx = esp;
    esp = esp & 0xFFFFFFF0u;
    PUSH32(esp, edi);
    PUSH32(esp, esi);
    PUSH32(esp, ebp);
    esp = esp - 0x14;
    ecx = MEM32(ebx + 8);
    esi = 1;
    esi = esi << LO8(ecx);
    ebp = esi;
    ebp = (uint32_t)((int32_t)ebp >> 1);
    ebp = ebp >> 0x1E;
    ebp = ebp + esi;
    ebp = (uint32_t)((int32_t)ebp >> 2);
    eax = 2;
    (void)0; /* cmp esi, 8 - flags set for next jcc */
    if (CMP_G(esi, 8)) eax = ebp; /* cmovg */
    eax = eax + eax;
    eax = eax + eax;
    eax = eax + eax;
    PUSH32(esp, eax);
    PUSH32(esp, 0); sub_0045FC84(); /* call 0x0045FC84 */

loc_0045FD6D: ;
    if (TEST_Z(eax, eax)) { sub_0045FF56(); return; } /* je: equal / zero */

loc_0045FD75: ;
    if (CMP_G(esi, 8)) goto loc_0045FE79; /* jg: greater (signed >) */

loc_0045FD7E: ;
    edi = 0; /* xor self */
    if (CMP_LE(ebp & ebp, 0)) goto loc_0045FE6F; /* jle: less or equal (signed <=) */

loc_0045FD88: ;
    if (CMP_L(ebp, 4)) goto loc_0045FF4B; /* jl: less (signed <) */

loc_0045FD91: ;
    ecx = ebp + -4;
    edx = MEM32(ebx + 0xC);
    esi = edx + ebp * 4;
    xmm1 = MEMF(0x88324C); /* movss */
    xmm0 = MEMF(0x883248); /* movss */
    edx = edi;
    edx = (uint32_t)(-(int32_t)edx);
    MEM32(esp + 4) = ebp;
    ebp = MEM32(ebx + 0xC);

loc_0045FDB5: ;
    xmm2 = MEMF(esi + edx * 4); /* movss */
    xmm2 = xmm2 * xmm1; /* mulss */
    MEMF(eax + edi * 8) = xmm2; /* movss */
    xmm3 = MEMF(ebp + edi * 4); /* movss */
    xmm3 = xmm3 * xmm0; /* mulss */
    xmm3 = xmm3 + xmm1; /* addss */
    MEMF(eax + edi * 8 + 4) = xmm3; /* movss */
    xmm4 = MEMF(esi + edx * 4 + -4); /* movss */
    xmm4 = xmm4 * xmm1; /* mulss */
    MEMF(eax + edi * 8 + 8) = xmm4; /* movss */
    xmm5 = MEMF(ebp + edi * 4 + 4); /* movss */
    xmm5 = xmm5 * xmm0; /* mulss */
    xmm5 = xmm5 + xmm1; /* addss */
    MEMF(eax + edi * 8 + 0xC) = xmm5; /* movss */
    xmm6 = MEMF(esi + edx * 4 + -8); /* movss */
    xmm6 = xmm6 * xmm1; /* mulss */
    edx = edx + 0xFFFFFFFDu;
    MEMF(eax + edi * 8 + 0x10) = xmm6; /* movss */
    xmm7 = MEMF(ebp + edi * 4 + 8); /* movss */
    xmm7 = xmm7 * xmm0; /* mulss */
    xmm7 = xmm7 + xmm1; /* addss */
    MEMF(eax + edi * 8 + 0x14) = xmm7; /* movss */
    edi = edi + 3;
    if (CMP_LE(edi, ecx)) goto loc_0045FDB5; /* jle: less or equal (signed <=) */

loc_0045FE29: ;
    ebp = MEM32(esp + 4);

loc_0045FE2D: ;
    xmm1 = MEMF(0x88324C); /* movss */
    xmm0 = MEMF(0x883248); /* movss */
    edx = edi;
    edx = (uint32_t)(-(int32_t)edx);
    edx = esi + edx * 4;
    ecx = MEM32(ebx + 0xC);

loc_0045FE47: ;
    xmm2 = MEMF(edx); /* movss */
    xmm2 = xmm2 * xmm1; /* mulss */
    edx = edx + 0xFFFFFFFCu;
    MEMF(eax + edi * 8) = xmm2; /* movss */
    xmm3 = MEMF(ecx + edi * 4); /* movss */
    xmm3 = xmm3 * xmm0; /* mulss */
    xmm3 = xmm3 + xmm1; /* addss */
    MEMF(eax + edi * 8 + 4) = xmm3; /* movss */
    edi++;
    if (CMP_L(edi, ebp)) goto loc_0045FE47; /* jl: less (signed <) */

loc_0045FE6F: ;
    esp = esp + 0x14;
    POP32(esp, ebp);
    POP32(esp, esi);
    POP32(esp, edi);
    esp = ebx;
    POP32(esp, ebx);
    esp += 4; return; /* ret */

loc_0045FE79: ;
    edx = 0; /* xor self */
    if (CMP_LE(ebp & ebp, 0)) goto loc_0045FF41; /* jle: less or equal (signed <=) */

loc_0045FE83: ;
    ecx = MEM32(ebx + 0xC);
    esi = ecx + ebp * 4;
    xmm1 = MEMF(0x88324C); /* movss */
    xmm0 = MEMF(0x883248); /* movss */
    edi = edx + edx;
    edi = edi + edi;
    edi = (uint32_t)(-(int32_t)edi);
    ecx = MEM32(ebx + 0xC);
    /* nop */

loc_0045FEA4: ;
    xmm2 = MEMF(edi + esi + -4); /* movss */
    xmm2 = xmm2 * xmm1; /* mulss */
    MEMF(eax + edx * 8) = xmm2; /* movss */
    xmm2 = MEMF(edi + esi + -8); /* movss */
    xmm2 = xmm2 * xmm1; /* mulss */
    MEMF(eax + edx * 8 + 4) = xmm2; /* movss */
    xmm7 = MEMF(edi + esi + -12); /* movss */
    xmm7 = xmm7 * xmm1; /* mulss */
    MEMF(eax + edx * 8 + 8) = xmm7; /* movss */
    xmm6 = MEMF(edi + esi + -16); /* movss */
    xmm6 = xmm6 * xmm1; /* mulss */
    MEMF(eax + edx * 8 + 0xC) = xmm6; /* movss */
    xmm5 = MEMF(ecx + edx * 4 + 4); /* movss */
    xmm5 = xmm5 * xmm0; /* mulss */
    xmm5 = xmm5 + xmm1; /* addss */
    edi = edi + 0xFFFFFFF0u;
    MEMF(eax + edx * 8 + 0x10) = xmm5; /* movss */
    xmm4 = MEMF(ecx + edx * 4 + 8); /* movss */
    xmm4 = xmm4 * xmm0; /* mulss */
    xmm4 = xmm4 + xmm1; /* addss */
    MEMF(eax + edx * 8 + 0x14) = xmm4; /* movss */
    xmm3 = MEMF(ecx + edx * 4 + 0xC); /* movss */
    xmm3 = xmm3 * xmm0; /* mulss */
    xmm3 = xmm3 + xmm1; /* addss */
    MEMF(eax + edx * 8 + 0x18) = xmm3; /* movss */
    xmm2 = MEMF(ecx + edx * 4 + 0x10); /* movss */
    xmm2 = xmm2 * xmm0; /* mulss */
    xmm2 = xmm2 + xmm1; /* addss */
    MEMF(eax + edx * 8 + 0x1C) = xmm2; /* movss */
    edx = edx + 4;
    if (CMP_L(edx, ebp)) goto loc_0045FEA4; /* jl: less (signed <) */

loc_0045FF41: ;
    esp = esp + 0x14;
    POP32(esp, ebp);
    POP32(esp, esi);
    POP32(esp, edi);
    esp = ebx;
    POP32(esp, ebx);
    esp += 4; return; /* ret */

loc_0045FF4B: ;
    edx = MEM32(ebx + 0xC);
    esi = edx + ebp * 4;
    goto loc_0045FE2D;

}

/**
 * sub_0045FF64
 * Original: 0x0045FF64 - 0x00460105 (417 bytes, 129 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0045FF64(void)
{
    uint32_t ebp;
    int _flags = 0; /* fallback flag var */
    float xmm0, xmm1, xmm2, xmm4;
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_0045FF64: ;
    PUSH32(esp, ebx);
    ebx = esp;
    esp = esp & 0xFFFFFFF0u;
    PUSH32(esp, edi);
    PUSH32(esp, esi);
    PUSH32(esp, ebp);
    esp = esp - 0x14;
    ecx = MEM32(ebx + 8);
    esi = 1;
    esi = esi << LO8(ecx);
    ebp = esi;
    ebp = (uint32_t)((int32_t)ebp >> 1);
    ebp = ebp >> 0x1E;
    ebp = ebp + esi;
    ebp = (uint32_t)((int32_t)ebp >> 2);
    eax = 2;
    (void)0; /* cmp esi, 8 - flags set for next jcc */
    if (CMP_G(esi, 8)) eax = ebp; /* cmovg */
    eax = eax + eax;
    eax = eax + eax;
    eax = eax + eax;
    PUSH32(esp, eax);
    PUSH32(esp, 0); sub_0045FC84(); /* call 0x0045FC84 */

loc_0045FF9D: ;
    if (TEST_Z(eax, eax)) { sub_00460105(); return; } /* je: equal / zero */

loc_0045FFA5: ;
    if (CMP_G(esi, 8)) goto loc_00460069; /* jg: greater (signed >) */

loc_0045FFAE: ;
    esi = 0; /* xor self */
    if (CMP_LE(ebp & ebp, 0)) goto loc_0046005F; /* jle: less or equal (signed <=) */

loc_0045FFB8: ;
    if (CMP_L(ebp, 4)) goto loc_004600FA; /* jl: less (signed <) */

loc_0045FFC1: ;
    edi = ebp + -4;
    edx = MEM32(ebx + 0xC);
    ecx = edx + ebp * 4;
    edx = esi;
    edx = (uint32_t)(-(int32_t)edx);
    MEM32(esp + 8) = edi;
    MEM32(esp + 4) = ebp;
    ebp = MEM32(ebx + 0xC);
    /* nop */
    /* nop */

loc_0045FFE4: ;
    edi = MEM32(ecx + edx * 4);
    MEM32(eax + esi * 8) = edi;
    xmm0 = 0.0f; /* xorps self = zero */
    xmm0 = xmm0 - MEMF(ebp + esi * 4); /* subss */
    MEMF(eax + esi * 8 + 4) = xmm0; /* movss */
    edi = MEM32(ecx + edx * 4 + -4);
    MEM32(eax + esi * 8 + 8) = edi;
    xmm1 = 0.0f; /* xorps self = zero */
    xmm1 = xmm1 - MEMF(ebp + esi * 4 + 4); /* subss */
    MEMF(eax + esi * 8 + 0xC) = xmm1; /* movss */
    edi = MEM32(ecx + edx * 4 + -8);
    edx = edx + 0xFFFFFFFDu;
    MEM32(eax + esi * 8 + 0x10) = edi;
    edi = MEM32(esp + 8);
    xmm2 = 0.0f; /* xorps self = zero */
    xmm2 = xmm2 - MEMF(ebp + esi * 4 + 8); /* subss */
    MEMF(eax + esi * 8 + 0x14) = xmm2; /* movss */
    esi = esi + 3;
    if (CMP_LE(esi, edi)) goto loc_0045FFE4; /* jle: less or equal (signed <=) */

loc_00460035: ;
    ebp = MEM32(esp + 4);

loc_00460039: ;
    edx = esi;
    edx = (uint32_t)(-(int32_t)edx);
    edx = ecx + edx * 4;
    edi = MEM32(ebx + 0xC);
    /* nop */

loc_00460044: ;
    ecx = MEM32(edx);
    edx = edx + 0xFFFFFFFCu;
    MEM32(eax + esi * 8) = ecx;
    xmm0 = 0.0f; /* xorps self = zero */
    xmm0 = xmm0 - MEMF(edi + esi * 4); /* subss */
    MEMF(eax + esi * 8 + 4) = xmm0; /* movss */
    esi++;
    if (CMP_L(esi, ebp)) goto loc_00460044; /* jl: less (signed <) */

loc_0046005F: ;
    esp = esp + 0x14;
    POP32(esp, ebp);
    POP32(esp, esi);
    POP32(esp, edi);
    esp = ebx;
    POP32(esp, ebx);
    esp += 4; return; /* ret */

loc_00460069: ;
    edi = 0; /* xor self */
    if (CMP_LE(ebp & ebp, 0)) goto loc_004600F0; /* jle: less or equal (signed <=) */

loc_00460073: ;
    edx = MEM32(ebx + 0xC);
    esi = edx + ebp * 4;
    ecx = edi + edi;
    ecx = ecx + ecx;
    ecx = (uint32_t)(-(int32_t)ecx);
    edx = MEM32(ebx + 0xC);
    MEM32(esp + 4) = ebp;

loc_00460087: ;
    ebp = MEM32(ecx + esi + -4);
    MEM32(eax + edi * 8) = ebp;
    ebp = MEM32(ecx + esi + -8);
    MEM32(eax + edi * 8 + 4) = ebp;
    ebp = MEM32(ecx + esi + -12);
    MEM32(eax + edi * 8 + 8) = ebp;
    ebp = MEM32(ecx + esi + -16);
    ecx = ecx + 0xFFFFFFF0u;
    MEM32(eax + edi * 8 + 0xC) = ebp;
    ebp = MEM32(esp + 4);
    xmm4 = 0.0f; /* xorps self = zero */
    xmm4 = xmm4 - MEMF(edx + edi * 4 + 4); /* subss */
    MEMF(eax + edi * 8 + 0x10) = xmm4; /* movss */
    xmm2 = 0.0f; /* xorps self = zero */
    xmm2 = xmm2 - MEMF(edx + edi * 4 + 8); /* subss */
    MEMF(eax + edi * 8 + 0x14) = xmm2; /* movss */
    xmm1 = 0.0f; /* xorps self = zero */
    xmm1 = xmm1 - MEMF(edx + edi * 4 + 0xC); /* subss */
    MEMF(eax + edi * 8 + 0x18) = xmm1; /* movss */
    xmm0 = 0.0f; /* xorps self = zero */
    xmm0 = xmm0 - MEMF(edx + edi * 4 + 0x10); /* subss */
    MEMF(eax + edi * 8 + 0x1C) = xmm0; /* movss */
    edi = edi + 4;
    if (CMP_L(edi, ebp)) goto loc_00460087; /* jl: less (signed <) */

loc_004600F0: ;
    esp = esp + 0x14;
    POP32(esp, ebp);
    POP32(esp, esi);
    POP32(esp, edi);
    esp = ebx;
    POP32(esp, ebx);
    esp += 4; return; /* ret */

loc_004600FA: ;
    edx = MEM32(ebx + 0xC);
    ecx = edx + ebp * 4;
    goto loc_00460039;

}

/**
 * sub_00460530
 * Original: 0x00460530 - 0x0046069C (364 bytes, 114 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00460530(void)
{
    uint32_t ebp;
    int _flags = 0; /* fallback flag var */
    uint64_t mm0, mm1;
    double _fp_stack[8];
    int _fp_top = 0;
    #define fp_push(v) (_fp_stack[--_fp_top & 7] = (v))
    #define fp_pop() (_fp_top++)
    #define fp_popp() (fp_pop())
    #define fp_top() _fp_stack[_fp_top & 7]
    #define fp_st1() _fp_stack[(_fp_top + 1) & 7]
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_00460530: ;
    PUSH32(esp, ebx);
    PUSH32(esp, esi);
    PUSH32(esp, edi);
    PUSH32(esp, ebp);
    edi = MEM32(esp + 0x14);
    ecx = MEM32(esp + 0x18);
    ebp = MEM32(esp + 0x1C);
    if (CMP_L(ecx, 4)) goto loc_00460697; /* jl: less (signed <) */

loc_00460549: ;
    esi = edi + ecx * 4;
    ecx = MEM32(ebp);
    edx = MEM32(ebp + 4);
    ebp = ebp + 8;
    if (TEST_NZ(edi, 7)) goto loc_004605E9; /* jne: not equal / not zero */

loc_00460561: ;
    if (CMP_LE(ecx, 0)) goto loc_004605C6; /* jle: less or equal (signed <=) */

loc_00460566: ;
    /* nop */
    /* nop */

loc_00460570: ;
    /* SSE: movq mm0, qword ptr [esi + ecx*4 + 8] */
    /* SSE: movq mm1, qword ptr [esi + edx*4 + 8] */
    /* SSE: movq qword ptr [esi + edx*4 + 8], mm0 */
    /* SSE: movq qword ptr [esi + ecx*4 + 8], mm1 */
    /* SSE: movq mm0, qword ptr [edi + ecx*4] */
    /* SSE: movq mm1, qword ptr [edi + edx*4] */
    /* SSE: movq qword ptr [edi + edx*4], mm0 */
    /* SSE: movq qword ptr [edi + ecx*4], mm1 */
    /* SSE: movq mm0, qword ptr [edi + ecx*4 + 8] */
    /* SSE: movq mm1, qword ptr [esi + edx*4] */
    /* SSE: movq qword ptr [esi + edx*4], mm0 */
    /* SSE: movq qword ptr [edi + ecx*4 + 8], mm1 */
    /* SSE: movq mm0, qword ptr [esi + ecx*4] */
    /* SSE: movq mm1, qword ptr [edi + edx*4 + 8] */
    /* SSE: movq qword ptr [edi + edx*4 + 8], mm0 */
    /* SSE: movq qword ptr [esi + ecx*4], mm1 */
    ecx = MEM32(ebp);
    edx = MEM32(ebp + 4);
    ebp = ebp + 8;
    if (CMP_G(ecx, 0)) goto loc_00460570; /* jg: greater (signed >) */

loc_004605C6: ;
    /* SSE: movq mm0, qword ptr [edi + ecx*4 + 8] */
    /* SSE: movq mm1, qword ptr [esi + ecx*4] */
    /* SSE: movq qword ptr [esi + ecx*4], mm0 */
    /* SSE: movq qword ptr [edi + ecx*4 + 8], mm1 */
    ecx = MEM32(ebp + -4);
    ebp = ebp + 4;
    if (TEST_NZ(ecx, ecx)) goto loc_004605C6; /* jne: not equal / not zero */

loc_004605E2: ;
    /* emms - empty MMX state */
    goto loc_00460697;

loc_004605E9: ;
    if (CMP_LE(ecx, 0)) goto loc_00460672; /* jle: less or equal (signed <=) */

loc_004605F2: ;
    /* nop */
    /* nop */

loc_00460600: ;
    eax = edi + ecx * 4;
    ebx = edi + edx * 4;
    ecx = esi + ecx * 4;
    edx = esi + edx * 4;
    fp_push(MEMF(eax)); /* fld float */
    fp_push(MEMF(ebx)); /* fld float */
    MEMF(eax) = (float)fp_top(); fp_popp(); /* fstp */
    MEMF(ebx) = (float)fp_top(); fp_popp(); /* fstp */
    fp_push(MEMF(eax + 4)); /* fld float */
    fp_push(MEMF(ebx + 4)); /* fld float */
    MEMF(eax + 4) = (float)fp_top(); fp_popp(); /* fstp */
    MEMF(ebx + 4) = (float)fp_top(); fp_popp(); /* fstp */
    fp_push(MEMF(ecx + 8)); /* fld float */
    fp_push(MEMF(edx + 8)); /* fld float */
    MEMF(ecx + 8) = (float)fp_top(); fp_popp(); /* fstp */
    MEMF(edx + 8) = (float)fp_top(); fp_popp(); /* fstp */
    fp_push(MEMF(ecx + 0xC)); /* fld float */
    fp_push(MEMF(edx + 0xC)); /* fld float */
    MEMF(ecx + 0xC) = (float)fp_top(); fp_popp(); /* fstp */
    MEMF(edx + 0xC) = (float)fp_top(); fp_popp(); /* fstp */
    fp_push(MEMF(eax + 8)); /* fld float */
    fp_push(MEMF(edx)); /* fld float */
    MEMF(eax + 8) = (float)fp_top(); fp_popp(); /* fstp */
    MEMF(edx) = (float)fp_top(); fp_popp(); /* fstp */
    fp_push(MEMF(eax + 0xC)); /* fld float */
    fp_push(MEMF(edx + 4)); /* fld float */
    MEMF(eax + 0xC) = (float)fp_top(); fp_popp(); /* fstp */
    MEMF(edx + 4) = (float)fp_top(); fp_popp(); /* fstp */
    fp_push(MEMF(ebx + 8)); /* fld float */
    fp_push(MEMF(ecx)); /* fld float */
    MEMF(ebx + 8) = (float)fp_top(); fp_popp(); /* fstp */
    MEMF(ecx) = (float)fp_top(); fp_popp(); /* fstp */
    fp_push(MEMF(ebx + 0xC)); /* fld float */
    fp_push(MEMF(ecx + 4)); /* fld float */
    MEMF(ebx + 0xC) = (float)fp_top(); fp_popp(); /* fstp */
    MEMF(ecx + 4) = (float)fp_top(); fp_popp(); /* fstp */
    ecx = MEM32(ebp);
    edx = MEM32(ebp + 4);
    ebp = ebp + 8;
    if (CMP_G(ecx, 0)) goto loc_00460600; /* jg: greater (signed >) */

loc_00460672: ;
    eax = edi + ecx * 4 + 8;
    ebx = esi + ecx * 4;
    ecx = MEM32(ebp + -4);
    ebp = ebp + 4;
    fp_push(MEMF(eax)); /* fld float */
    fp_push(MEMF(ebx)); /* fld float */
    MEMF(eax) = (float)fp_top(); fp_popp(); /* fstp */
    MEMF(ebx) = (float)fp_top(); fp_popp(); /* fstp */
    fp_push(MEMF(eax + 4)); /* fld float */
    fp_push(MEMF(ebx + 4)); /* fld float */
    MEMF(eax + 4) = (float)fp_top(); fp_popp(); /* fstp */
    MEMF(ebx + 4) = (float)fp_top(); fp_popp(); /* fstp */
    if (TEST_NZ(ecx, ecx)) goto loc_00460672; /* jne: not equal / not zero */

loc_00460697: ;
    POP32(esp, ebp);
    POP32(esp, edi);
    POP32(esp, esi);
    POP32(esp, ebx);
    esp += 4; return; /* ret */

    #undef fp_push
    #undef fp_pop
    #undef fp_popp
    #undef fp_top
    #undef fp_st1
}

/**
 * sub_00460D60
 * Original: 0x00460D60 - 0x00460F21 (449 bytes, 120 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00460D60(void)
{
    uint32_t ebp;
    int _flags = 0; /* fallback flag var */
    uint64_t mm0;
    double _fp_stack[8];
    int _fp_top = 0;
    #define fp_push(v) (_fp_stack[--_fp_top & 7] = (v))
    #define fp_pop() (_fp_top++)
    #define fp_popp() (fp_pop())
    #define fp_top() _fp_stack[_fp_top & 7]
    #define fp_st1() _fp_stack[(_fp_top + 1) & 7]
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_00460D60: ;
    PUSH32(esp, ebx);
    PUSH32(esp, esi);
    PUSH32(esp, edi);
    PUSH32(esp, ebp);
    edi = MEM32(esp + 0x14);
    ecx = MEM32(esp + 0x1C);
    ebx = MEM32(esp + 0x18);
    ebp = MEM32(esp + 0x20);
    esi = edi + ecx * 4;
    eax = ebx + ecx * 4;
    if (CMP_L(ecx, 8)) { sub_00460F21(); return; } /* jl: less (signed <) */

loc_00460D83: ;
    ecx = MEM32(ebp);
    edx = MEM32(ebp + 4);
    ebp = ebp + 8;
    if (TEST_NZ(edi, 7)) goto loc_00460E3A; /* jne: not equal / not zero */

loc_00460D98: ;
    if (TEST_NZ(ebx, 7)) goto loc_00460E3A; /* jne: not equal / not zero */

loc_00460DA4: ;
    if (TEST_Z(ecx, ecx)) goto loc_00460E05; /* je: equal / zero */

loc_00460DA8: ;
    /* nop */
    /* nop */

loc_00460DB0: ;
    /* SSE: movq mm0, qword ptr [edi + ecx*4] */
    /* SSE: movq qword ptr [ebx + edx*4], mm0 */
    /* SSE: movq mm0, qword ptr [edi + edx*4] */
    /* SSE: movq qword ptr [ebx + ecx*4], mm0 */
    /* SSE: movq mm0, qword ptr [esi + ecx*4] */
    /* SSE: movq qword ptr [ebx + edx*4 + 8], mm0 */
    /* SSE: movq mm0, qword ptr [esi + edx*4] */
    /* SSE: movq qword ptr [ebx + ecx*4 + 8], mm0 */
    /* SSE: movq mm0, qword ptr [edi + ecx*4 + 8] */
    /* SSE: movq qword ptr [eax + edx*4], mm0 */
    /* SSE: movq mm0, qword ptr [edi + edx*4 + 8] */
    /* SSE: movq qword ptr [eax + ecx*4], mm0 */
    /* SSE: movq mm0, qword ptr [esi + ecx*4 + 8] */
    /* SSE: movq qword ptr [eax + edx*4 + 8], mm0 */
    /* SSE: movq mm0, qword ptr [esi + edx*4 + 8] */
    /* SSE: movq qword ptr [eax + ecx*4 + 8], mm0 */
    ecx = MEM32(ebp);
    edx = MEM32(ebp + 4);
    ebp = ebp + 8;
    if (TEST_NZ(ecx, ecx)) goto loc_00460DB0; /* jne: not equal / not zero */

loc_00460E05: ;
    /* SSE: movq mm0, qword ptr [edi + ecx*4] */
    /* SSE: movq qword ptr [ebx + ecx*4], mm0 */
    /* SSE: movq mm0, qword ptr [edi + ecx*4 + 8] */
    /* SSE: movq qword ptr [eax + ecx*4], mm0 */
    /* SSE: movq mm0, qword ptr [esi + ecx*4] */
    /* SSE: movq qword ptr [ebx + ecx*4 + 8], mm0 */
    /* SSE: movq mm0, qword ptr [esi + ecx*4 + 8] */
    /* SSE: movq qword ptr [eax + ecx*4 + 8], mm0 */
    ecx = MEM32(ebp + -4);
    ebp = ebp + 4;
    if (TEST_NZ(ecx, ecx)) goto loc_00460E05; /* jne: not equal / not zero */

loc_00460E33: ;
    /* emms - empty MMX state */
    g_seh_ebp = ebp; sub_00460F58(); return; /* tail jmp 0x00460F58 */

loc_00460E3A: ;
    if (TEST_Z(ecx, ecx)) goto loc_00460ED9; /* je: equal / zero */

loc_00460E42: ;
    /* nop */
    /* nop */

loc_00460E50: ;
    fp_push(MEMF(edi + ecx * 4)); /* fld float */
    fp_push(MEMF(edi + ecx * 4 + 4)); /* fld float */
    MEMF(ebx + edx * 4 + 4) = (float)fp_top(); fp_popp(); /* fstp */
    MEMF(ebx + edx * 4) = (float)fp_top(); fp_popp(); /* fstp */
    fp_push(MEMF(edi + edx * 4)); /* fld float */
    fp_push(MEMF(edi + edx * 4 + 4)); /* fld float */
    MEMF(ebx + ecx * 4 + 4) = (float)fp_top(); fp_popp(); /* fstp */
    MEMF(ebx + ecx * 4) = (float)fp_top(); fp_popp(); /* fstp */
    fp_push(MEMF(esi + ecx * 4)); /* fld float */
    fp_push(MEMF(esi + ecx * 4 + 4)); /* fld float */
    MEMF(ebx + edx * 4 + 0xC) = (float)fp_top(); fp_popp(); /* fstp */
    MEMF(ebx + edx * 4 + 8) = (float)fp_top(); fp_popp(); /* fstp */
    fp_push(MEMF(esi + edx * 4)); /* fld float */
    fp_push(MEMF(esi + edx * 4 + 4)); /* fld float */
    MEMF(ebx + ecx * 4 + 0xC) = (float)fp_top(); fp_popp(); /* fstp */
    MEMF(ebx + ecx * 4 + 8) = (float)fp_top(); fp_popp(); /* fstp */
    fp_push(MEMF(edi + ecx * 4 + 8)); /* fld float */
    fp_push(MEMF(edi + ecx * 4 + 0xC)); /* fld float */
    MEMF(eax + edx * 4 + 4) = (float)fp_top(); fp_popp(); /* fstp */
    MEMF(eax + edx * 4) = (float)fp_top(); fp_popp(); /* fstp */
    fp_push(MEMF(edi + edx * 4 + 8)); /* fld float */
    fp_push(MEMF(edi + edx * 4 + 0xC)); /* fld float */
    MEMF(eax + ecx * 4 + 4) = (float)fp_top(); fp_popp(); /* fstp */
    MEMF(eax + ecx * 4) = (float)fp_top(); fp_popp(); /* fstp */
    fp_push(MEMF(esi + ecx * 4 + 8)); /* fld float */
    fp_push(MEMF(esi + ecx * 4 + 0xC)); /* fld float */
    MEMF(eax + edx * 4 + 0xC) = (float)fp_top(); fp_popp(); /* fstp */
    MEMF(eax + edx * 4 + 8) = (float)fp_top(); fp_popp(); /* fstp */
    fp_push(MEMF(esi + edx * 4 + 8)); /* fld float */
    fp_push(MEMF(esi + edx * 4 + 0xC)); /* fld float */
    MEMF(eax + ecx * 4 + 0xC) = (float)fp_top(); fp_popp(); /* fstp */
    MEMF(eax + ecx * 4 + 8) = (float)fp_top(); fp_popp(); /* fstp */
    ecx = MEM32(ebp);
    edx = MEM32(ebp + 4);
    ebp = ebp + 8;
    if (TEST_NZ(ecx, ecx)) goto loc_00460E50; /* jne: not equal / not zero */

loc_00460ED9: ;
    fp_push(MEMF(edi + ecx * 4)); /* fld float */
    fp_push(MEMF(edi + ecx * 4 + 4)); /* fld float */
    MEMF(ebx + ecx * 4 + 4) = (float)fp_top(); fp_popp(); /* fstp */
    MEMF(ebx + ecx * 4) = (float)fp_top(); fp_popp(); /* fstp */
    fp_push(MEMF(edi + ecx * 4 + 8)); /* fld float */
    fp_push(MEMF(edi + ecx * 4 + 0xC)); /* fld float */
    MEMF(eax + ecx * 4 + 4) = (float)fp_top(); fp_popp(); /* fstp */
    MEMF(eax + ecx * 4) = (float)fp_top(); fp_popp(); /* fstp */
    fp_push(MEMF(esi + ecx * 4)); /* fld float */
    fp_push(MEMF(esi + ecx * 4 + 4)); /* fld float */
    MEMF(ebx + ecx * 4 + 0xC) = (float)fp_top(); fp_popp(); /* fstp */
    MEMF(ebx + ecx * 4 + 8) = (float)fp_top(); fp_popp(); /* fstp */
    fp_push(MEMF(esi + ecx * 4 + 8)); /* fld float */
    fp_push(MEMF(esi + ecx * 4 + 0xC)); /* fld float */
    MEMF(eax + ecx * 4 + 0xC) = (float)fp_top(); fp_popp(); /* fstp */
    MEMF(eax + ecx * 4 + 8) = (float)fp_top(); fp_popp(); /* fstp */
    ecx = MEM32(ebp + -4);
    ebp = ebp + 4;
    if (TEST_NZ(ecx, ecx)) goto loc_00460ED9; /* jne: not equal / not zero */

loc_00460F1F: ;
    g_seh_ebp = ebp; sub_00460F58(); return; /* tail jmp 0x00460F58 */

    #undef fp_push
    #undef fp_pop
    #undef fp_popp
    #undef fp_top
    #undef fp_st1
}

/**
 * sub_00461170
 * Original: 0x00461170 - 0x00461CD3 (2915 bytes, 767 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00461170(void)
{
    uint32_t ebp;
    int _flags = 0; /* fallback flag var */
    float xmm0, xmm1, xmm2, xmm3, xmm4, xmm5, xmm6, xmm7;
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_00461170: ;
    PUSH32(esp, ebx);
    PUSH32(esp, esi);
    PUSH32(esp, edi);
    PUSH32(esp, ebp);
    esp = esp - 4;
    esi = MEM32(esp + 0x18);
    edi = MEM32(esp + 0x1C);
    eax = MEM32(esp + 0x20);
    MEM32(esp) = edi;
    if (CMP_EQ(esi, edi)) goto loc_00461192; /* je: equal / zero */

loc_0046118A: ;
    if (TEST_Z(edi, 0xF)) goto loc_0046119A; /* je: equal / zero */

loc_00461192: ;
    edi = MEM32(esp + 0x2C);
    MEM32(esp + 0x1C) = edi;

loc_0046119A: ;
    if (TEST_Z(eax, 0xAAAAAAAAu)) goto loc_00461650; /* je: equal / zero */

loc_004611A5: ;
    ebx = MEM32(esp + 0x28);
    ebp = MEM32(esp + 0x20);
    esi = MEM32(esp + 0x18);
    edi = esi + ebp * 2;
    ecx = edi + ebp * 2;
    edx = ecx + ebp * 2;
    ebp = MEM32(esp + 0x1C);
    eax = MEM32(ebx);

loc_004611C0: ;
    xmm0 = MEMD(esi + eax * 4); /* movlps */
    xmm0 = MEMD(edi + eax * 4); /* movhps */
    xmm1 = MEMD(ecx + eax * 4); /* movlps */
    xmm1 = MEMD(edx + eax * 4); /* movhps */
    eax = MEM32(ebx + 4);
    xmm3 = MEMD(esi + eax * 4); /* movlps */
    xmm3 = MEMD(edi + eax * 4); /* movhps */
    xmm4 = MEMD(ecx + eax * 4); /* movlps */
    xmm4 = MEMD(edx + eax * 4); /* movhps */
    xmm5 = xmm3; /* movaps */
    /* subps: xmm3 -= xmm4 (packed 4xfloat) */
    /* xorps xmm3, MEMF(0x6554E0) */
    /* addps: xmm4 += xmm5 (packed 4xfloat) */
    xmm2 = xmm0; /* movaps */
    /* subps: xmm0 -= xmm1 (packed 4xfloat) */
    /* xorps xmm0, MEMF(0x6554E0) */
    /* addps: xmm1 += xmm2 (packed 4xfloat) */
    xmm5 = xmm4; /* movaps */
    /* shufps xmm4, xmm3, 0xbe */
    /* TODO: movlhps xmm5, xmm3 */
    xmm2 = xmm1; /* movaps */
    /* shufps xmm1, xmm0, 0xbe */
    /* TODO: movlhps xmm2, xmm0 */
    xmm3 = xmm4; /* movaps */
    /* addps: xmm4 += xmm5 (packed 4xfloat) */
    /* subps: xmm5 -= xmm3 (packed 4xfloat) */
    xmm0 = xmm1; /* movaps */
    /* addps: xmm1 += xmm2 (packed 4xfloat) */
    /* subps: xmm2 -= xmm0 (packed 4xfloat) */
    xmm3 = xmm4; /* movaps */
    /* shufps xmm4, xmm5, 0x88 */
    /* shufps xmm3, xmm5, 0xdd */
    xmm0 = xmm1; /* movaps */
    /* shufps xmm1, xmm2, 0x88 */
    /* shufps xmm0, xmm2, 0xdd */
    eax = 0x6554C0;
    xmm2 = MEMF(eax); /* movaps */
    /* mulps: xmm2 *= xmm4 (packed 4xfloat) */
    xmm5 = MEMF(eax + 0x10); /* movaps */
    /* mulps: xmm5 *= xmm3 (packed 4xfloat) */
    /* mulps: xmm4 *= MEMF(eax + 0x10) (packed 4xfloat) */
    /* mulps: xmm3 *= MEMF(eax) (packed 4xfloat) */
    /* subps: xmm2 -= xmm5 (packed 4xfloat) */
    /* addps: xmm3 += xmm4 (packed 4xfloat) */
    eax = MEM32(ebx + 8);
    ebx = ebx + 8;
    xmm4 = xmm1; /* movaps */
    /* addps: xmm4 += xmm2 (packed 4xfloat) */
    MEMF(ebp) = xmm4; /* movaps */
    /* subps: xmm1 -= xmm2 (packed 4xfloat) */
    MEMF(ebp + 0x20) = xmm1; /* movaps */
    xmm4 = xmm0; /* movaps */
    /* addps: xmm4 += xmm3 (packed 4xfloat) */
    MEMF(ebp + 0x10) = xmm4; /* movaps */
    /* subps: xmm0 -= xmm3 (packed 4xfloat) */
    MEMF(ebp + 0x30) = xmm0; /* movaps */
    ebp = ebp + 0x40;
    if (CMP_G(eax, 0)) goto loc_004611C0; /* jg: greater (signed >) */

loc_00461293: ;
    ebp = MEM32(esp + 0x24);
    eax = MEM32(esp + 0x20);
    eax = eax >> 3;
    if (CMP_L(eax, 4)) goto loc_00461C27; /* jl: less (signed <) */

loc_004612A7: ;
    eax = eax >> 2;
    ebx = eax;
    esi = MEM32(esp + 0x1C);

loc_004612B0: ;
    edx = ebp;
    ecx = 2;
    /* nop */
    /* nop */

loc_004612C0: ;
    xmm0 = MEMF(esi + 0x80); /* movaps */
    xmm1 = MEMF(edx); /* movaps */
    /* mulps: xmm0 *= xmm1 (packed 4xfloat) */
    xmm6 = MEMF(esi + 0x90); /* movaps */
    /* mulps: xmm1 *= xmm6 (packed 4xfloat) */
    xmm7 = MEMF(edx + 0x10); /* movaps */
    /* mulps: xmm6 *= xmm7 (packed 4xfloat) */
    /* mulps: xmm7 *= MEMF(esi + 0x80) (packed 4xfloat) */
    /* subps: xmm0 -= xmm6 (packed 4xfloat) */
    /* addps: xmm1 += xmm7 (packed 4xfloat) */
    xmm4 = MEMF(esi + 0xC0); /* movaps */
    xmm5 = MEMF(edx + 0x40); /* movaps */
    /* mulps: xmm4 *= xmm5 (packed 4xfloat) */
    xmm6 = MEMF(esi + 0xD0); /* movaps */
    /* mulps: xmm5 *= xmm6 (packed 4xfloat) */
    xmm7 = MEMF(edx + 0x50); /* movaps */
    /* mulps: xmm6 *= xmm7 (packed 4xfloat) */
    /* mulps: xmm7 *= MEMF(esi + 0xC0) (packed 4xfloat) */
    /* subps: xmm4 -= xmm6 (packed 4xfloat) */
    /* addps: xmm5 += xmm7 (packed 4xfloat) */
    xmm2 = MEMF(esi + 0x40); /* movaps */
    xmm3 = MEMF(edx + 0x20); /* movaps */
    /* mulps: xmm2 *= xmm3 (packed 4xfloat) */
    xmm6 = MEMF(esi + 0x50); /* movaps */
    /* mulps: xmm3 *= xmm6 (packed 4xfloat) */
    xmm7 = MEMF(edx + 0x30); /* movaps */
    /* mulps: xmm6 *= xmm7 (packed 4xfloat) */
    /* mulps: xmm7 *= MEMF(esi + 0x40) (packed 4xfloat) */
    /* subps: xmm2 -= xmm6 (packed 4xfloat) */
    /* addps: xmm3 += xmm7 (packed 4xfloat) */
    edx = edx + 0x60;
    xmm6 = xmm4; /* movaps */
    /* addps: xmm4 += xmm0 (packed 4xfloat) */
    /* subps: xmm0 -= xmm6 (packed 4xfloat) */
    xmm7 = xmm5; /* movaps */
    /* addps: xmm5 += xmm1 (packed 4xfloat) */
    /* subps: xmm1 -= xmm7 (packed 4xfloat) */
    xmm6 = MEMF(esi); /* movaps */
    xmm7 = xmm2; /* movaps */
    /* addps: xmm2 += xmm6 (packed 4xfloat) */
    /* subps: xmm6 -= xmm7 (packed 4xfloat) */
    xmm7 = xmm4; /* movaps */
    /* addps: xmm4 += xmm2 (packed 4xfloat) */
    MEMF(esi) = xmm4; /* movaps */
    /* subps: xmm2 -= xmm7 (packed 4xfloat) */
    MEMF(esi + 0x80) = xmm2; /* movaps */
    xmm4 = MEMF(esi + 0x10); /* movaps */
    /* subps: xmm4 -= xmm3 (packed 4xfloat) */
    /* addps: xmm3 += MEMF(esi + 0x10) (packed 4xfloat) */
    xmm7 = xmm5; /* movaps */
    /* addps: xmm5 += xmm3 (packed 4xfloat) */
    MEMF(esi + 0x10) = xmm5; /* movaps */
    /* subps: xmm3 -= xmm7 (packed 4xfloat) */
    MEMF(esi + 0x90) = xmm3; /* movaps */
    xmm7 = xmm6; /* movaps */
    /* addps: xmm6 += xmm1 (packed 4xfloat) */
    MEMF(esi + 0x40) = xmm6; /* movaps */
    /* subps: xmm7 -= xmm1 (packed 4xfloat) */
    MEMF(esi + 0xC0) = xmm7; /* movaps */
    xmm5 = xmm4; /* movaps */
    /* subps: xmm4 -= xmm0 (packed 4xfloat) */
    MEMF(esi + 0x50) = xmm4; /* movaps */
    /* addps: xmm5 += xmm0 (packed 4xfloat) */
    MEMF(esi + 0xD0) = xmm5; /* movaps */
    esi = esi + 0x20;
    ecx--;
    if (((int32_t)ecx > 0)) goto loc_004612C0; /* jg: greater (signed >) */

loc_004613BF: ;
    esi = esi + 0xC0;
    ebx--;
    if (((int32_t)ebx > 0)) goto loc_004612B0; /* jg: greater (signed >) */

loc_004613CC: ;
    if (CMP_L(eax, 4)) goto loc_00461C27; /* jl: less (signed <) */

loc_004613D5: ;
    eax = eax >> 2;
    ebx = eax;
    esi = MEM32(esp + 0x1C);
    edi = edi;

loc_004613E0: ;
    edx = ebp + 0xC0;
    ecx = 8;
    eax = eax + 0;

loc_004613F0: ;
    xmm0 = MEMF(esi + 0x200); /* movaps */
    xmm1 = MEMF(edx); /* movaps */
    /* mulps: xmm0 *= xmm1 (packed 4xfloat) */
    xmm6 = MEMF(esi + 0x210); /* movaps */
    /* mulps: xmm1 *= xmm6 (packed 4xfloat) */
    xmm7 = MEMF(edx + 0x10); /* movaps */
    /* mulps: xmm6 *= xmm7 (packed 4xfloat) */
    /* mulps: xmm7 *= MEMF(esi + 0x200) (packed 4xfloat) */
    /* subps: xmm0 -= xmm6 (packed 4xfloat) */
    /* addps: xmm1 += xmm7 (packed 4xfloat) */
    xmm4 = MEMF(esi + 0x300); /* movaps */
    xmm5 = MEMF(edx + 0x40); /* movaps */
    /* mulps: xmm4 *= xmm5 (packed 4xfloat) */
    xmm6 = MEMF(esi + 0x310); /* movaps */
    /* mulps: xmm5 *= xmm6 (packed 4xfloat) */
    xmm7 = MEMF(edx + 0x50); /* movaps */
    /* mulps: xmm6 *= xmm7 (packed 4xfloat) */
    /* mulps: xmm7 *= MEMF(esi + 0x300) (packed 4xfloat) */
    /* subps: xmm4 -= xmm6 (packed 4xfloat) */
    /* addps: xmm5 += xmm7 (packed 4xfloat) */
    xmm2 = MEMF(esi + 0x100); /* movaps */
    xmm3 = MEMF(edx + 0x20); /* movaps */
    /* mulps: xmm2 *= xmm3 (packed 4xfloat) */
    xmm6 = MEMF(esi + 0x110); /* movaps */
    /* mulps: xmm3 *= xmm6 (packed 4xfloat) */
    xmm7 = MEMF(edx + 0x30); /* movaps */
    /* mulps: xmm6 *= xmm7 (packed 4xfloat) */
    /* mulps: xmm7 *= MEMF(esi + 0x100) (packed 4xfloat) */
    /* subps: xmm2 -= xmm6 (packed 4xfloat) */
    /* addps: xmm3 += xmm7 (packed 4xfloat) */
    edx = edx + 0x60;
    xmm6 = xmm4; /* movaps */
    /* addps: xmm4 += xmm0 (packed 4xfloat) */
    /* subps: xmm0 -= xmm6 (packed 4xfloat) */
    xmm7 = xmm5; /* movaps */
    /* addps: xmm5 += xmm1 (packed 4xfloat) */
    /* subps: xmm1 -= xmm7 (packed 4xfloat) */
    xmm6 = MEMF(esi); /* movaps */
    xmm7 = xmm2; /* movaps */
    /* addps: xmm2 += xmm6 (packed 4xfloat) */
    /* subps: xmm6 -= xmm7 (packed 4xfloat) */
    xmm7 = xmm4; /* movaps */
    /* addps: xmm4 += xmm2 (packed 4xfloat) */
    MEMF(esi) = xmm4; /* movaps */
    /* subps: xmm2 -= xmm7 (packed 4xfloat) */
    MEMF(esi + 0x200) = xmm2; /* movaps */
    xmm4 = MEMF(esi + 0x10); /* movaps */
    /* subps: xmm4 -= xmm3 (packed 4xfloat) */
    /* addps: xmm3 += MEMF(esi + 0x10) (packed 4xfloat) */
    xmm7 = xmm5; /* movaps */
    /* addps: xmm5 += xmm3 (packed 4xfloat) */
    MEMF(esi + 0x10) = xmm5; /* movaps */
    /* subps: xmm3 -= xmm7 (packed 4xfloat) */
    MEMF(esi + 0x210) = xmm3; /* movaps */
    xmm7 = xmm6; /* movaps */
    /* addps: xmm6 += xmm1 (packed 4xfloat) */
    MEMF(esi + 0x100) = xmm6; /* movaps */
    /* subps: xmm7 -= xmm1 (packed 4xfloat) */
    MEMF(esi + 0x300) = xmm7; /* movaps */
    xmm5 = xmm4; /* movaps */
    /* subps: xmm4 -= xmm0 (packed 4xfloat) */
    MEMF(esi + 0x110) = xmm4; /* movaps */
    /* addps: xmm5 += xmm0 (packed 4xfloat) */
    MEMF(esi + 0x310) = xmm5; /* movaps */
    esi = esi + 0x20;
    ecx--;
    if (((int32_t)ecx > 0)) goto loc_004613F0; /* jg: greater (signed >) */

loc_004614FE: ;
    esi = esi + 0x300;
    ebx--;
    if (((int32_t)ebx > 0)) goto loc_004613E0; /* jg: greater (signed >) */

loc_0046150B: ;
    if (CMP_L(eax, 4)) goto loc_00461C27; /* jl: less (signed <) */

loc_00461514: ;
    eax = eax >> 2;
    ebx = eax;
    esi = MEM32(esp + 0x1C);
    /* nop */

loc_00461520: ;
    edx = ebp + 0x3C0;
    ecx = 0x20;
    eax = eax + 0;

loc_00461530: ;
    xmm0 = MEMF(esi + 0x800); /* movaps */
    xmm1 = MEMF(edx); /* movaps */
    /* mulps: xmm0 *= xmm1 (packed 4xfloat) */
    xmm6 = MEMF(esi + 0x810); /* movaps */
    /* mulps: xmm1 *= xmm6 (packed 4xfloat) */
    xmm7 = MEMF(edx + 0x10); /* movaps */
    /* mulps: xmm6 *= xmm7 (packed 4xfloat) */
    /* mulps: xmm7 *= MEMF(esi + 0x800) (packed 4xfloat) */
    /* subps: xmm0 -= xmm6 (packed 4xfloat) */
    /* addps: xmm1 += xmm7 (packed 4xfloat) */
    xmm4 = MEMF(esi + 0xC00); /* movaps */
    xmm5 = MEMF(edx + 0x40); /* movaps */
    /* mulps: xmm4 *= xmm5 (packed 4xfloat) */
    xmm6 = MEMF(esi + 0xC10); /* movaps */
    /* mulps: xmm5 *= xmm6 (packed 4xfloat) */
    xmm7 = MEMF(edx + 0x50); /* movaps */
    /* mulps: xmm6 *= xmm7 (packed 4xfloat) */
    /* mulps: xmm7 *= MEMF(esi + 0xC00) (packed 4xfloat) */
    /* subps: xmm4 -= xmm6 (packed 4xfloat) */
    /* addps: xmm5 += xmm7 (packed 4xfloat) */
    xmm2 = MEMF(esi + 0x400); /* movaps */
    xmm3 = MEMF(edx + 0x20); /* movaps */
    /* mulps: xmm2 *= xmm3 (packed 4xfloat) */
    xmm6 = MEMF(esi + 0x410); /* movaps */
    /* mulps: xmm3 *= xmm6 (packed 4xfloat) */
    xmm7 = MEMF(edx + 0x30); /* movaps */
    /* mulps: xmm6 *= xmm7 (packed 4xfloat) */
    /* mulps: xmm7 *= MEMF(esi + 0x400) (packed 4xfloat) */
    /* subps: xmm2 -= xmm6 (packed 4xfloat) */
    /* addps: xmm3 += xmm7 (packed 4xfloat) */
    edx = edx + 0x60;
    xmm6 = xmm4; /* movaps */
    /* addps: xmm4 += xmm0 (packed 4xfloat) */
    /* subps: xmm0 -= xmm6 (packed 4xfloat) */
    xmm7 = xmm5; /* movaps */
    /* addps: xmm5 += xmm1 (packed 4xfloat) */
    /* subps: xmm1 -= xmm7 (packed 4xfloat) */
    xmm6 = MEMF(esi); /* movaps */
    xmm7 = xmm2; /* movaps */
    /* addps: xmm2 += xmm6 (packed 4xfloat) */
    /* subps: xmm6 -= xmm7 (packed 4xfloat) */
    xmm7 = xmm4; /* movaps */
    /* addps: xmm4 += xmm2 (packed 4xfloat) */
    MEMF(esi) = xmm4; /* movaps */
    /* subps: xmm2 -= xmm7 (packed 4xfloat) */
    MEMF(esi + 0x800) = xmm2; /* movaps */
    xmm4 = MEMF(esi + 0x10); /* movaps */
    /* subps: xmm4 -= xmm3 (packed 4xfloat) */
    /* addps: xmm3 += MEMF(esi + 0x10) (packed 4xfloat) */
    xmm7 = xmm5; /* movaps */
    /* addps: xmm5 += xmm3 (packed 4xfloat) */
    MEMF(esi + 0x10) = xmm5; /* movaps */
    /* subps: xmm3 -= xmm7 (packed 4xfloat) */
    MEMF(esi + 0x810) = xmm3; /* movaps */
    xmm7 = xmm6; /* movaps */
    /* addps: xmm6 += xmm1 (packed 4xfloat) */
    MEMF(esi + 0x400) = xmm6; /* movaps */
    /* subps: xmm7 -= xmm1 (packed 4xfloat) */
    MEMF(esi + 0xC00) = xmm7; /* movaps */
    xmm5 = xmm4; /* movaps */
    /* subps: xmm4 -= xmm0 (packed 4xfloat) */
    MEMF(esi + 0x410) = xmm4; /* movaps */
    /* addps: xmm5 += xmm0 (packed 4xfloat) */
    MEMF(esi + 0xC10) = xmm5; /* movaps */
    esi = esi + 0x20;
    ecx--;
    if (((int32_t)ecx > 0)) goto loc_00461530; /* jg: greater (signed >) */

loc_0046163E: ;
    esi = esi + 0xC00;
    ebx--;
    if (((int32_t)ebx > 0)) goto loc_00461520; /* jg: greater (signed >) */

loc_0046164B: ;
    goto loc_00461C27;

loc_00461650: ;
    ebx = MEM32(esp + 0x28);
    ebp = MEM32(esp + 0x20);
    esi = MEM32(esp + 0x18);
    edi = esi + ebp * 2;
    ecx = edi + ebp * 2;
    edx = ecx + ebp * 2;
    ebp = MEM32(esp + 0x1C);
    eax = MEM32(ebx);
    eax = eax + 0;

loc_00461670: ;
    xmm0 = MEMD(esi + eax * 4); /* movlps */
    xmm0 = MEMD(edi + eax * 4); /* movhps */
    xmm1 = MEMD(ecx + eax * 4); /* movlps */
    xmm1 = MEMD(edx + eax * 4); /* movhps */
    eax = MEM32(ebx + 4);
    xmm3 = MEMD(esi + eax * 4); /* movlps */
    xmm3 = MEMD(edi + eax * 4); /* movhps */
    xmm4 = MEMD(ecx + eax * 4); /* movlps */
    xmm4 = MEMD(edx + eax * 4); /* movhps */
    xmm2 = xmm0; /* movaps */
    /* subps: xmm0 -= xmm1 (packed 4xfloat) */
    /* xorps xmm0, MEMF(0x6554E0) */
    /* addps: xmm1 += xmm2 (packed 4xfloat) */
    xmm5 = xmm3; /* movaps */
    /* subps: xmm3 -= xmm4 (packed 4xfloat) */
    /* xorps xmm3, MEMF(0x6554E0) */
    /* addps: xmm4 += xmm5 (packed 4xfloat) */
    xmm2 = xmm1; /* movaps */
    /* shufps xmm1, xmm0, 0xbe */
    /* TODO: movlhps xmm2, xmm0 */
    xmm0 = xmm1; /* movaps */
    /* addps: xmm1 += xmm2 (packed 4xfloat) */
    /* subps: xmm2 -= xmm0 (packed 4xfloat) */
    xmm5 = xmm4; /* movaps */
    /* shufps xmm4, xmm3, 0xbe */
    /* TODO: movlhps xmm5, xmm3 */
    xmm3 = xmm4; /* movaps */
    /* addps: xmm4 += xmm5 (packed 4xfloat) */
    /* subps: xmm5 -= xmm3 (packed 4xfloat) */
    xmm0 = xmm1; /* movaps */
    /* shufps xmm1, xmm2, 0x88 */
    MEMF(ebp) = xmm1; /* movaps */
    /* shufps xmm0, xmm2, 0xdd */
    MEMF(ebp + 0x10) = xmm0; /* movaps */
    xmm3 = xmm4; /* movaps */
    /* shufps xmm4, xmm5, 0x88 */
    /* shufps xmm3, xmm5, 0xdd */
    eax = MEM32(ebx + 8);
    xmm2 = MEMD(esi + eax * 4); /* movlps */
    xmm2 = MEMD(edi + eax * 4); /* movhps */
    xmm1 = MEMD(ecx + eax * 4); /* movlps */
    xmm1 = MEMD(edx + eax * 4); /* movhps */
    eax = MEM32(ebx + 0xC);
    xmm6 = MEMD(esi + eax * 4); /* movlps */
    xmm6 = MEMD(edi + eax * 4); /* movhps */
    xmm5 = MEMD(ecx + eax * 4); /* movlps */
    xmm5 = MEMD(edx + eax * 4); /* movhps */
    xmm0 = xmm2; /* movaps */
    /* subps: xmm2 -= xmm1 (packed 4xfloat) */
    /* xorps xmm2, MEMF(0x6554E0) */
    /* addps: xmm1 += xmm0 (packed 4xfloat) */
    xmm7 = xmm6; /* movaps */
    /* subps: xmm6 -= xmm5 (packed 4xfloat) */
    /* xorps xmm6, MEMF(0x6554E0) */
    /* addps: xmm5 += xmm7 (packed 4xfloat) */
    xmm0 = xmm1; /* movaps */
    /* shufps xmm1, xmm2, 0xbe */
    /* TODO: movlhps xmm0, xmm2 */
    xmm7 = xmm5; /* movaps */
    /* shufps xmm5, xmm6, 0xbe */
    /* TODO: movlhps xmm7, xmm6 */
    xmm2 = xmm1; /* movaps */
    /* addps: xmm1 += xmm0 (packed 4xfloat) */
    /* subps: xmm0 -= xmm2 (packed 4xfloat) */
    xmm6 = xmm5; /* movaps */
    /* addps: xmm5 += xmm7 (packed 4xfloat) */
    /* subps: xmm7 -= xmm6 (packed 4xfloat) */
    xmm2 = xmm1; /* movaps */
    /* shufps xmm2, xmm0, 0x88 */
    /* shufps xmm1, xmm0, 0xdd */
    xmm6 = xmm5; /* movaps */
    /* shufps xmm6, xmm7, 0x88 */
    /* shufps xmm5, xmm7, 0xdd */
    eax = MEM32(esp + 0x24);
    xmm0 = MEMF(eax); /* movaps */
    /* mulps: xmm0 *= xmm2 (packed 4xfloat) */
    xmm7 = MEMF(eax + 0x10); /* movaps */
    /* mulps: xmm2 *= xmm7 (packed 4xfloat) */
    /* mulps: xmm7 *= xmm1 (packed 4xfloat) */
    /* mulps: xmm1 *= MEMF(eax) (packed 4xfloat) */
    /* subps: xmm0 -= xmm7 (packed 4xfloat) */
    /* addps: xmm1 += xmm2 (packed 4xfloat) */
    xmm2 = MEMF(eax + 0x40); /* movaps */
    /* mulps: xmm2 *= xmm6 (packed 4xfloat) */
    xmm7 = MEMF(eax + 0x50); /* movaps */
    /* mulps: xmm6 *= xmm7 (packed 4xfloat) */
    /* mulps: xmm7 *= xmm5 (packed 4xfloat) */
    /* mulps: xmm5 *= MEMF(eax + 0x40) (packed 4xfloat) */
    /* subps: xmm2 -= xmm7 (packed 4xfloat) */
    /* addps: xmm5 += xmm6 (packed 4xfloat) */
    xmm6 = MEMF(eax + 0x20); /* movaps */
    /* mulps: xmm6 *= xmm4 (packed 4xfloat) */
    xmm7 = MEMF(eax + 0x30); /* movaps */
    /* mulps: xmm4 *= xmm7 (packed 4xfloat) */
    /* mulps: xmm7 *= xmm3 (packed 4xfloat) */
    /* mulps: xmm3 *= MEMF(eax + 0x20) (packed 4xfloat) */
    /* subps: xmm6 -= xmm7 (packed 4xfloat) */
    /* addps: xmm3 += xmm4 (packed 4xfloat) */
    xmm7 = xmm2; /* movaps */
    /* addps: xmm2 += xmm0 (packed 4xfloat) */
    /* subps: xmm0 -= xmm7 (packed 4xfloat) */
    xmm7 = xmm5; /* movaps */
    /* addps: xmm5 += xmm1 (packed 4xfloat) */
    /* subps: xmm1 -= xmm7 (packed 4xfloat) */
    xmm4 = MEMF(ebp); /* movaps */
    /* subps: xmm4 -= xmm6 (packed 4xfloat) */
    /* addps: xmm6 += MEMF(ebp) (packed 4xfloat) */
    xmm7 = xmm2; /* movaps */
    /* addps: xmm2 += xmm6 (packed 4xfloat) */
    MEMF(ebp) = xmm2; /* movaps */
    /* subps: xmm6 -= xmm7 (packed 4xfloat) */
    MEMF(ebp + 0x40) = xmm6; /* movaps */
    xmm2 = MEMF(ebp + 0x10); /* movaps */
    /* subps: xmm2 -= xmm3 (packed 4xfloat) */
    /* addps: xmm3 += MEMF(ebp + 0x10) (packed 4xfloat) */
    xmm7 = xmm5; /* movaps */
    /* addps: xmm5 += xmm3 (packed 4xfloat) */
    MEMF(ebp + 0x10) = xmm5; /* movaps */
    /* subps: xmm3 -= xmm7 (packed 4xfloat) */
    MEMF(ebp + 0x50) = xmm3; /* movaps */
    xmm7 = xmm4; /* movaps */
    /* addps: xmm4 += xmm1 (packed 4xfloat) */
    MEMF(ebp + 0x20) = xmm4; /* movaps */
    /* subps: xmm7 -= xmm1 (packed 4xfloat) */
    MEMF(ebp + 0x60) = xmm7; /* movaps */
    xmm7 = xmm2; /* movaps */
    /* subps: xmm2 -= xmm0 (packed 4xfloat) */
    MEMF(ebp + 0x30) = xmm2; /* movaps */
    /* addps: xmm7 += xmm0 (packed 4xfloat) */
    MEMF(ebp + 0x70) = xmm7; /* movaps */
    ebp = ebp + 0x80;
    eax = MEM32(ebx + 0x10);
    ebx = ebx + 0x10;
    if (CMP_G(eax, 0)) goto loc_00461670; /* jg: greater (signed >) */

loc_0046184D: ;
    ebp = MEM32(esp + 0x24);
    eax = MEM32(esp + 0x20);
    eax = eax >> 4;
    if (CMP_L(eax, 4)) goto loc_00461C27; /* jl: less (signed <) */

loc_00461861: ;
    eax = eax >> 2;
    ebx = eax;
    esi = MEM32(esp + 0x1C);
    /* nop */

loc_00461870: ;
    edx = ebp + 0x60;
    ecx = 4;
    /* nop */
    /* nop */

loc_00461880: ;
    xmm0 = MEMF(esi + 0x100); /* movaps */
    xmm1 = MEMF(edx); /* movaps */
    /* mulps: xmm0 *= xmm1 (packed 4xfloat) */
    xmm6 = MEMF(esi + 0x110); /* movaps */
    /* mulps: xmm1 *= xmm6 (packed 4xfloat) */
    xmm7 = MEMF(edx + 0x10); /* movaps */
    /* mulps: xmm6 *= xmm7 (packed 4xfloat) */
    /* mulps: xmm7 *= MEMF(esi + 0x100) (packed 4xfloat) */
    /* subps: xmm0 -= xmm6 (packed 4xfloat) */
    /* addps: xmm1 += xmm7 (packed 4xfloat) */
    xmm4 = MEMF(esi + 0x180); /* movaps */
    xmm5 = MEMF(edx + 0x40); /* movaps */
    /* mulps: xmm4 *= xmm5 (packed 4xfloat) */
    xmm6 = MEMF(esi + 0x190); /* movaps */
    /* mulps: xmm5 *= xmm6 (packed 4xfloat) */
    xmm7 = MEMF(edx + 0x50); /* movaps */
    /* mulps: xmm6 *= xmm7 (packed 4xfloat) */
    /* mulps: xmm7 *= MEMF(esi + 0x180) (packed 4xfloat) */
    /* subps: xmm4 -= xmm6 (packed 4xfloat) */
    /* addps: xmm5 += xmm7 (packed 4xfloat) */
    xmm2 = MEMF(esi + 0x80); /* movaps */
    xmm3 = MEMF(edx + 0x20); /* movaps */
    /* mulps: xmm2 *= xmm3 (packed 4xfloat) */
    xmm6 = MEMF(esi + 0x90); /* movaps */
    /* mulps: xmm3 *= xmm6 (packed 4xfloat) */
    xmm7 = MEMF(edx + 0x30); /* movaps */
    /* mulps: xmm6 *= xmm7 (packed 4xfloat) */
    /* mulps: xmm7 *= MEMF(esi + 0x80) (packed 4xfloat) */
    /* subps: xmm2 -= xmm6 (packed 4xfloat) */
    /* addps: xmm3 += xmm7 (packed 4xfloat) */
    edx = edx + 0x60;
    xmm6 = xmm4; /* movaps */
    /* addps: xmm4 += xmm0 (packed 4xfloat) */
    /* subps: xmm0 -= xmm6 (packed 4xfloat) */
    xmm7 = xmm5; /* movaps */
    /* addps: xmm5 += xmm1 (packed 4xfloat) */
    /* subps: xmm1 -= xmm7 (packed 4xfloat) */
    xmm6 = MEMF(esi); /* movaps */
    xmm7 = xmm2; /* movaps */
    /* addps: xmm2 += xmm6 (packed 4xfloat) */
    /* subps: xmm6 -= xmm7 (packed 4xfloat) */
    xmm7 = xmm4; /* movaps */
    /* addps: xmm4 += xmm2 (packed 4xfloat) */
    MEMF(esi) = xmm4; /* movaps */
    /* subps: xmm2 -= xmm7 (packed 4xfloat) */
    MEMF(esi + 0x100) = xmm2; /* movaps */
    xmm4 = MEMF(esi + 0x10); /* movaps */
    /* subps: xmm4 -= xmm3 (packed 4xfloat) */
    /* addps: xmm3 += MEMF(esi + 0x10) (packed 4xfloat) */
    xmm7 = xmm5; /* movaps */
    /* addps: xmm5 += xmm3 (packed 4xfloat) */
    MEMF(esi + 0x10) = xmm5; /* movaps */
    /* subps: xmm3 -= xmm7 (packed 4xfloat) */
    MEMF(esi + 0x110) = xmm3; /* movaps */
    xmm7 = xmm6; /* movaps */
    /* addps: xmm6 += xmm1 (packed 4xfloat) */
    MEMF(esi + 0x80) = xmm6; /* movaps */
    /* subps: xmm7 -= xmm1 (packed 4xfloat) */
    MEMF(esi + 0x180) = xmm7; /* movaps */
    xmm5 = xmm4; /* movaps */
    /* subps: xmm4 -= xmm0 (packed 4xfloat) */
    MEMF(esi + 0x90) = xmm4; /* movaps */
    /* addps: xmm5 += xmm0 (packed 4xfloat) */
    MEMF(esi + 0x190) = xmm5; /* movaps */
    esi = esi + 0x20;
    ecx--;
    if (((int32_t)ecx > 0)) goto loc_00461880; /* jg: greater (signed >) */

loc_0046198E: ;
    esi = esi + 0x180;
    ebx--;
    if (((int32_t)ebx > 0)) goto loc_00461870; /* jg: greater (signed >) */

loc_0046199B: ;
    if (CMP_L(eax, 4)) goto loc_00461C27; /* jl: less (signed <) */

loc_004619A4: ;
    eax = eax >> 2;
    ebx = eax;
    esi = MEM32(esp + 0x1C);
    /* nop */

loc_004619B0: ;
    edx = ebp + 0x1E0;
    ecx = 0x10;
    eax = eax + 0;

loc_004619C0: ;
    xmm0 = MEMF(esi + 0x400); /* movaps */
    xmm1 = MEMF(edx); /* movaps */
    /* mulps: xmm0 *= xmm1 (packed 4xfloat) */
    xmm6 = MEMF(esi + 0x410); /* movaps */
    /* mulps: xmm1 *= xmm6 (packed 4xfloat) */
    xmm7 = MEMF(edx + 0x10); /* movaps */
    /* mulps: xmm6 *= xmm7 (packed 4xfloat) */
    /* mulps: xmm7 *= MEMF(esi + 0x400) (packed 4xfloat) */
    /* subps: xmm0 -= xmm6 (packed 4xfloat) */
    /* addps: xmm1 += xmm7 (packed 4xfloat) */
    xmm4 = MEMF(esi + 0x600); /* movaps */
    xmm5 = MEMF(edx + 0x40); /* movaps */
    /* mulps: xmm4 *= xmm5 (packed 4xfloat) */
    xmm6 = MEMF(esi + 0x610); /* movaps */
    /* mulps: xmm5 *= xmm6 (packed 4xfloat) */
    xmm7 = MEMF(edx + 0x50); /* movaps */
    /* mulps: xmm6 *= xmm7 (packed 4xfloat) */
    /* mulps: xmm7 *= MEMF(esi + 0x600) (packed 4xfloat) */
    /* subps: xmm4 -= xmm6 (packed 4xfloat) */
    /* addps: xmm5 += xmm7 (packed 4xfloat) */
    xmm2 = MEMF(esi + 0x200); /* movaps */
    xmm3 = MEMF(edx + 0x20); /* movaps */
    /* mulps: xmm2 *= xmm3 (packed 4xfloat) */
    xmm6 = MEMF(esi + 0x210); /* movaps */
    /* mulps: xmm3 *= xmm6 (packed 4xfloat) */
    xmm7 = MEMF(edx + 0x30); /* movaps */
    /* mulps: xmm6 *= xmm7 (packed 4xfloat) */
    /* mulps: xmm7 *= MEMF(esi + 0x200) (packed 4xfloat) */
    /* subps: xmm2 -= xmm6 (packed 4xfloat) */
    /* addps: xmm3 += xmm7 (packed 4xfloat) */
    edx = edx + 0x60;
    xmm6 = xmm4; /* movaps */
    /* addps: xmm4 += xmm0 (packed 4xfloat) */
    /* subps: xmm0 -= xmm6 (packed 4xfloat) */
    xmm7 = xmm5; /* movaps */
    /* addps: xmm5 += xmm1 (packed 4xfloat) */
    /* subps: xmm1 -= xmm7 (packed 4xfloat) */
    xmm6 = MEMF(esi); /* movaps */
    xmm7 = xmm2; /* movaps */
    /* addps: xmm2 += xmm6 (packed 4xfloat) */
    /* subps: xmm6 -= xmm7 (packed 4xfloat) */
    xmm7 = xmm4; /* movaps */
    /* addps: xmm4 += xmm2 (packed 4xfloat) */
    MEMF(esi) = xmm4; /* movaps */
    /* subps: xmm2 -= xmm7 (packed 4xfloat) */
    MEMF(esi + 0x400) = xmm2; /* movaps */
    xmm4 = MEMF(esi + 0x10); /* movaps */
    /* subps: xmm4 -= xmm3 (packed 4xfloat) */
    /* addps: xmm3 += MEMF(esi + 0x10) (packed 4xfloat) */
    xmm7 = xmm5; /* movaps */
    /* addps: xmm5 += xmm3 (packed 4xfloat) */
    MEMF(esi + 0x10) = xmm5; /* movaps */
    /* subps: xmm3 -= xmm7 (packed 4xfloat) */
    MEMF(esi + 0x410) = xmm3; /* movaps */
    xmm7 = xmm6; /* movaps */
    /* addps: xmm6 += xmm1 (packed 4xfloat) */
    MEMF(esi + 0x200) = xmm6; /* movaps */
    /* subps: xmm7 -= xmm1 (packed 4xfloat) */
    MEMF(esi + 0x600) = xmm7; /* movaps */
    xmm5 = xmm4; /* movaps */
    /* subps: xmm4 -= xmm0 (packed 4xfloat) */
    MEMF(esi + 0x210) = xmm4; /* movaps */
    /* addps: xmm5 += xmm0 (packed 4xfloat) */
    MEMF(esi + 0x610) = xmm5; /* movaps */
    esi = esi + 0x20;
    ecx--;
    if (((int32_t)ecx > 0)) goto loc_004619C0; /* jg: greater (signed >) */

loc_00461ACE: ;
    esi = esi + 0x600;
    ebx--;
    if (((int32_t)ebx > 0)) goto loc_004619B0; /* jg: greater (signed >) */

loc_00461ADB: ;
    if (CMP_L(eax, 4)) goto loc_00461C27; /* jl: less (signed <) */

loc_00461AE4: ;
    eax = eax >> 2;
    ebx = eax;
    esi = MEM32(esp + 0x1C);
    /* nop */

loc_00461AF0: ;
    edx = ebp + 0x7E0;
    ecx = 0x40;
    eax = eax + 0;

loc_00461B00: ;
    xmm0 = MEMF(esi + 0x1000); /* movaps */
    xmm1 = MEMF(edx); /* movaps */
    /* mulps: xmm0 *= xmm1 (packed 4xfloat) */
    xmm6 = MEMF(esi + 0x1010); /* movaps */
    /* mulps: xmm1 *= xmm6 (packed 4xfloat) */
    xmm7 = MEMF(edx + 0x10); /* movaps */
    /* mulps: xmm6 *= xmm7 (packed 4xfloat) */
    /* mulps: xmm7 *= MEMF(esi + 0x1000) (packed 4xfloat) */
    /* subps: xmm0 -= xmm6 (packed 4xfloat) */
    /* addps: xmm1 += xmm7 (packed 4xfloat) */
    xmm4 = MEMF(esi + 0x1800); /* movaps */
    xmm5 = MEMF(edx + 0x40); /* movaps */
    /* mulps: xmm4 *= xmm5 (packed 4xfloat) */
    xmm6 = MEMF(esi + 0x1810); /* movaps */
    /* mulps: xmm5 *= xmm6 (packed 4xfloat) */
    xmm7 = MEMF(edx + 0x50); /* movaps */
    /* mulps: xmm6 *= xmm7 (packed 4xfloat) */
    /* mulps: xmm7 *= MEMF(esi + 0x1800) (packed 4xfloat) */
    /* subps: xmm4 -= xmm6 (packed 4xfloat) */
    /* addps: xmm5 += xmm7 (packed 4xfloat) */
    xmm2 = MEMF(esi + 0x800); /* movaps */
    xmm3 = MEMF(edx + 0x20); /* movaps */
    /* mulps: xmm2 *= xmm3 (packed 4xfloat) */
    xmm6 = MEMF(esi + 0x810); /* movaps */
    /* mulps: xmm3 *= xmm6 (packed 4xfloat) */
    xmm7 = MEMF(edx + 0x30); /* movaps */
    /* mulps: xmm6 *= xmm7 (packed 4xfloat) */
    /* mulps: xmm7 *= MEMF(esi + 0x800) (packed 4xfloat) */
    /* subps: xmm2 -= xmm6 (packed 4xfloat) */
    /* addps: xmm3 += xmm7 (packed 4xfloat) */
    edx = edx + 0x60;
    /* TODO: prefetcht0 byte ptr [edx + 0x20] */
    /* TODO: prefetcht0 byte ptr [edx + 0x40] */
    /* TODO: prefetcht0 byte ptr [edx + 0x60] */
    xmm6 = xmm4; /* movaps */
    /* addps: xmm4 += xmm0 (packed 4xfloat) */
    /* subps: xmm0 -= xmm6 (packed 4xfloat) */
    xmm7 = xmm5; /* movaps */
    /* addps: xmm5 += xmm1 (packed 4xfloat) */
    /* subps: xmm1 -= xmm7 (packed 4xfloat) */
    xmm6 = MEMF(esi); /* movaps */
    xmm7 = xmm2; /* movaps */
    /* addps: xmm2 += xmm6 (packed 4xfloat) */
    /* subps: xmm6 -= xmm7 (packed 4xfloat) */
    xmm7 = xmm4; /* movaps */
    /* addps: xmm4 += xmm2 (packed 4xfloat) */
    MEMF(esi) = xmm4; /* movaps */
    /* subps: xmm2 -= xmm7 (packed 4xfloat) */
    MEMF(esi + 0x1000) = xmm2; /* movaps */
    xmm4 = MEMF(esi + 0x10); /* movaps */
    /* subps: xmm4 -= xmm3 (packed 4xfloat) */
    /* addps: xmm3 += MEMF(esi + 0x10) (packed 4xfloat) */
    xmm7 = xmm5; /* movaps */
    /* addps: xmm5 += xmm3 (packed 4xfloat) */
    MEMF(esi + 0x10) = xmm5; /* movaps */
    /* subps: xmm3 -= xmm7 (packed 4xfloat) */
    MEMF(esi + 0x1010) = xmm3; /* movaps */
    xmm7 = xmm6; /* movaps */
    /* addps: xmm6 += xmm1 (packed 4xfloat) */
    MEMF(esi + 0x800) = xmm6; /* movaps */
    /* subps: xmm7 -= xmm1 (packed 4xfloat) */
    MEMF(esi + 0x1800) = xmm7; /* movaps */
    xmm5 = xmm4; /* movaps */
    /* subps: xmm4 -= xmm0 (packed 4xfloat) */
    MEMF(esi + 0x810) = xmm4; /* movaps */
    /* addps: xmm5 += xmm0 (packed 4xfloat) */
    MEMF(esi + 0x1810) = xmm5; /* movaps */
    esi = esi + 0x20;
    ecx--;
    if (((int32_t)ecx > 0)) goto loc_00461B00; /* jg: greater (signed >) */

loc_00461C1A: ;
    esi = esi + 0x1800;
    ebx--;
    if (((int32_t)ebx > 0)) goto loc_00461AF0; /* jg: greater (signed >) */

loc_00461C27: ;
    ebx = MEM32(esp + 0x20);
    esi = MEM32(esp + 0x1C);
    edi = MEM32(esp);
    if (TEST_NZ(edi, 0xF)) goto loc_00461C80; /* jne: not equal / not zero */

loc_00461C3A: ;
    /* nop */

loc_00461C40: ;
    xmm0 = MEMF(esi); /* movaps */
    xmm2 = MEMF(esi + 0x10); /* movaps */
    xmm1 = xmm0; /* movaps */
    /* unpcklps xmm0, xmm2 */
    /* unpckhps xmm1, xmm2 */
    xmm4 = MEMF(esi + 0x20); /* movaps */
    xmm6 = MEMF(esi + 0x30); /* movaps */
    MEMF(edi) = xmm0; /* movaps */
    xmm5 = xmm4; /* movaps */
    /* unpcklps xmm4, xmm6 */
    MEMF(edi + 0x10) = xmm1; /* movaps */
    /* unpckhps xmm5, xmm6 */
    MEMF(edi + 0x20) = xmm4; /* movaps */
    MEMF(edi + 0x30) = xmm5; /* movaps */
    esi = esi + 0x40;
    edi = edi + 0x40;
    ebx = ebx - 8;
    if (CMP_G((uint32_t)ebx + (uint32_t)8, (uint32_t)8)) goto loc_00461C40; /* jg: greater (signed >) */

loc_00461C7B: ;
    goto loc_00461CCB;

    /* nop */

loc_00461C80: ;
    xmm0 = MEMF(esi); /* movaps */
    xmm2 = MEMF(esi + 0x10); /* movaps */
    xmm1 = xmm0; /* movaps */
    /* unpcklps xmm0, xmm2 */
    /* unpckhps xmm1, xmm2 */
    xmm4 = MEMF(esi + 0x20); /* movaps */
    MEMD(edi) = xmm0; /* movlps */
    MEMD(edi + 8) = xmm0; /* movhps */
    xmm6 = MEMF(esi + 0x30); /* movaps */
    xmm5 = xmm4; /* movaps */
    /* unpcklps xmm4, xmm6 */
    MEMD(edi + 0x10) = xmm1; /* movlps */
    MEMD(edi + 0x18) = xmm1; /* movhps */
    /* unpckhps xmm5, xmm6 */
    MEMD(edi + 0x20) = xmm4; /* movlps */
    MEMD(edi + 0x28) = xmm4; /* movhps */
    MEMD(edi + 0x30) = xmm5; /* movlps */
    MEMD(edi + 0x38) = xmm5; /* movhps */
    esi = esi + 0x40;
    edi = edi + 0x40;
    ebx = ebx - 8;
    if (CMP_G((uint32_t)ebx + (uint32_t)8, (uint32_t)8)) goto loc_00461C80; /* jg: greater (signed >) */

loc_00461CCB: ;
    esp = esp + 4;
    POP32(esp, ebp);
    POP32(esp, edi);
    POP32(esp, esi);
    POP32(esp, ebx);
    esp += 4; return; /* ret */

}

/**
 * sub_00461CE0
 * Original: 0x00461CE0 - 0x00462883 (2979 bytes, 787 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00461CE0(void)
{
    uint32_t ebp;
    int _flags = 0; /* fallback flag var */
    float xmm0, xmm1, xmm2, xmm3, xmm4, xmm5, xmm6, xmm7;
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_00461CE0: ;
    PUSH32(esp, ebx);
    PUSH32(esp, esi);
    PUSH32(esp, edi);
    PUSH32(esp, ebp);
    esp = esp - 4;
    esi = MEM32(esp + 0x18);
    eax = MEM32(esp + 0x1C);
    ebp = MEM32(esp + 0x20);
    MEM32(esp) = esi;
    if (TEST_Z(esi, 0xF)) goto loc_00461D05; /* je: equal / zero */

loc_00461CFE: ;
    esi = MEM32(esp + 0x24);
    MEM32(esp) = esi;

loc_00461D05: ;
    if (TEST_Z(eax, 0xAAAAAAAAu)) goto loc_004621B0; /* je: equal / zero */

loc_00461D10: ;
    eax = eax >> 3;
    ebx = eax;
    edx = 0x6554C0;
    esi = MEM32(esp + 0x18);
    edi = MEM32(esp);
    /* nop */
    /* nop */

loc_00461D30: ;
    xmm3 = MEMD(esi + 0x20); /* movlps */
    xmm3 = MEMD(esi + 0x30); /* movhps */
    xmm4 = MEMD(esi + 0x28); /* movlps */
    xmm4 = MEMD(esi + 0x38); /* movhps */
    xmm5 = xmm3; /* movaps */
    /* subps: xmm3 -= xmm4 (packed 4xfloat) */
    /* xorps xmm3, MEMF(0x6554E0) */
    /* addps: xmm4 += xmm5 (packed 4xfloat) */
    xmm0 = MEMD(esi); /* movlps */
    xmm0 = MEMD(esi + 0x10); /* movhps */
    xmm1 = MEMD(esi + 8); /* movlps */
    xmm1 = MEMD(esi + 0x18); /* movhps */
    xmm2 = xmm0; /* movaps */
    /* subps: xmm0 -= xmm1 (packed 4xfloat) */
    /* xorps xmm0, MEMF(0x6554E0) */
    /* addps: xmm1 += xmm2 (packed 4xfloat) */
    xmm5 = xmm4; /* movaps */
    /* shufps xmm4, xmm3, 0xbe */
    /* TODO: movlhps xmm5, xmm3 */
    xmm2 = xmm1; /* movaps */
    /* shufps xmm1, xmm0, 0xbe */
    /* TODO: movlhps xmm2, xmm0 */
    xmm3 = xmm4; /* movaps */
    /* addps: xmm4 += xmm5 (packed 4xfloat) */
    /* subps: xmm5 -= xmm3 (packed 4xfloat) */
    xmm0 = xmm1; /* movaps */
    /* addps: xmm1 += xmm2 (packed 4xfloat) */
    /* subps: xmm2 -= xmm0 (packed 4xfloat) */
    xmm3 = xmm4; /* movaps */
    /* shufps xmm4, xmm5, 0x88 */
    /* shufps xmm3, xmm5, 0xdd */
    xmm0 = xmm1; /* movaps */
    /* shufps xmm1, xmm2, 0x88 */
    /* shufps xmm0, xmm2, 0xdd */
    esi = esi + 0x40;
    xmm2 = MEMF(edx); /* movaps */
    /* mulps: xmm2 *= xmm4 (packed 4xfloat) */
    xmm5 = MEMF(edx + 0x10); /* movaps */
    /* mulps: xmm5 *= xmm3 (packed 4xfloat) */
    /* mulps: xmm4 *= MEMF(edx + 0x10) (packed 4xfloat) */
    /* mulps: xmm3 *= MEMF(edx) (packed 4xfloat) */
    /* subps: xmm2 -= xmm5 (packed 4xfloat) */
    /* addps: xmm3 += xmm4 (packed 4xfloat) */
    xmm4 = xmm1; /* movaps */
    /* addps: xmm4 += xmm2 (packed 4xfloat) */
    MEMF(edi) = xmm4; /* movaps */
    /* subps: xmm1 -= xmm2 (packed 4xfloat) */
    MEMF(edi + 0x20) = xmm1; /* movaps */
    xmm4 = xmm0; /* movaps */
    /* addps: xmm4 += xmm3 (packed 4xfloat) */
    MEMF(edi + 0x10) = xmm4; /* movaps */
    /* subps: xmm0 -= xmm3 (packed 4xfloat) */
    MEMF(edi + 0x30) = xmm0; /* movaps */
    edi = edi + 0x40;
    ebx--;
    if (((int32_t)ebx > 0)) goto loc_00461D30; /* jg: greater (signed >) */

loc_00461DF3: ;
    if (CMP_L(eax, 4)) goto loc_00462757; /* jl: less (signed <) */

loc_00461DFC: ;
    eax = eax >> 2;
    ebx = eax;
    esi = MEM32(esp);
    /* nop */
    eax = eax + 0;

loc_00461E10: ;
    edx = ebp;
    ecx = 2;
    /* nop */
    /* nop */

loc_00461E20: ;
    xmm0 = MEMF(esi + 0x80); /* movaps */
    xmm1 = MEMF(edx); /* movaps */
    /* mulps: xmm0 *= xmm1 (packed 4xfloat) */
    xmm6 = MEMF(esi + 0x90); /* movaps */
    /* mulps: xmm1 *= xmm6 (packed 4xfloat) */
    xmm7 = MEMF(edx + 0x10); /* movaps */
    /* mulps: xmm6 *= xmm7 (packed 4xfloat) */
    /* mulps: xmm7 *= MEMF(esi + 0x80) (packed 4xfloat) */
    /* subps: xmm0 -= xmm6 (packed 4xfloat) */
    /* addps: xmm1 += xmm7 (packed 4xfloat) */
    xmm4 = MEMF(esi + 0xC0); /* movaps */
    xmm5 = MEMF(edx + 0x40); /* movaps */
    /* mulps: xmm4 *= xmm5 (packed 4xfloat) */
    xmm6 = MEMF(esi + 0xD0); /* movaps */
    /* mulps: xmm5 *= xmm6 (packed 4xfloat) */
    xmm7 = MEMF(edx + 0x50); /* movaps */
    /* mulps: xmm6 *= xmm7 (packed 4xfloat) */
    /* mulps: xmm7 *= MEMF(esi + 0xC0) (packed 4xfloat) */
    /* subps: xmm4 -= xmm6 (packed 4xfloat) */
    /* addps: xmm5 += xmm7 (packed 4xfloat) */
    xmm2 = MEMF(esi + 0x40); /* movaps */
    xmm3 = MEMF(edx + 0x20); /* movaps */
    /* mulps: xmm2 *= xmm3 (packed 4xfloat) */
    xmm6 = MEMF(esi + 0x50); /* movaps */
    /* mulps: xmm3 *= xmm6 (packed 4xfloat) */
    xmm7 = MEMF(edx + 0x30); /* movaps */
    /* mulps: xmm6 *= xmm7 (packed 4xfloat) */
    /* mulps: xmm7 *= MEMF(esi + 0x40) (packed 4xfloat) */
    /* subps: xmm2 -= xmm6 (packed 4xfloat) */
    /* addps: xmm3 += xmm7 (packed 4xfloat) */
    edx = edx + 0x60;
    xmm6 = xmm4; /* movaps */
    /* addps: xmm4 += xmm0 (packed 4xfloat) */
    /* subps: xmm0 -= xmm6 (packed 4xfloat) */
    xmm7 = xmm5; /* movaps */
    /* addps: xmm5 += xmm1 (packed 4xfloat) */
    /* subps: xmm1 -= xmm7 (packed 4xfloat) */
    xmm6 = MEMF(esi); /* movaps */
    xmm7 = xmm2; /* movaps */
    /* addps: xmm2 += xmm6 (packed 4xfloat) */
    /* subps: xmm6 -= xmm7 (packed 4xfloat) */
    xmm7 = xmm4; /* movaps */
    /* addps: xmm4 += xmm2 (packed 4xfloat) */
    MEMF(esi) = xmm4; /* movaps */
    /* subps: xmm2 -= xmm7 (packed 4xfloat) */
    MEMF(esi + 0x80) = xmm2; /* movaps */
    xmm4 = MEMF(esi + 0x10); /* movaps */
    /* subps: xmm4 -= xmm3 (packed 4xfloat) */
    /* addps: xmm3 += MEMF(esi + 0x10) (packed 4xfloat) */
    xmm7 = xmm5; /* movaps */
    /* addps: xmm5 += xmm3 (packed 4xfloat) */
    MEMF(esi + 0x10) = xmm5; /* movaps */
    /* subps: xmm3 -= xmm7 (packed 4xfloat) */
    MEMF(esi + 0x90) = xmm3; /* movaps */
    xmm7 = xmm6; /* movaps */
    /* addps: xmm6 += xmm1 (packed 4xfloat) */
    MEMF(esi + 0x40) = xmm6; /* movaps */
    /* subps: xmm7 -= xmm1 (packed 4xfloat) */
    MEMF(esi + 0xC0) = xmm7; /* movaps */
    xmm5 = xmm4; /* movaps */
    /* subps: xmm4 -= xmm0 (packed 4xfloat) */
    MEMF(esi + 0x50) = xmm4; /* movaps */
    /* addps: xmm5 += xmm0 (packed 4xfloat) */
    MEMF(esi + 0xD0) = xmm5; /* movaps */
    esi = esi + 0x20;
    ecx--;
    if (((int32_t)ecx > 0)) goto loc_00461E20; /* jg: greater (signed >) */

loc_00461F1F: ;
    esi = esi + 0xC0;
    ebx--;
    if (((int32_t)ebx > 0)) goto loc_00461E10; /* jg: greater (signed >) */

loc_00461F2C: ;
    if (CMP_L(eax, 4)) goto loc_00462757; /* jl: less (signed <) */

loc_00461F35: ;
    eax = eax >> 2;
    ebx = eax;
    esi = MEM32(esp);
    /* nop */

loc_00461F40: ;
    edx = ebp + 0xC0;
    ecx = 8;
    eax = eax + 0;

loc_00461F50: ;
    xmm0 = MEMF(esi + 0x200); /* movaps */
    xmm1 = MEMF(edx); /* movaps */
    /* mulps: xmm0 *= xmm1 (packed 4xfloat) */
    xmm6 = MEMF(esi + 0x210); /* movaps */
    /* mulps: xmm1 *= xmm6 (packed 4xfloat) */
    xmm7 = MEMF(edx + 0x10); /* movaps */
    /* mulps: xmm6 *= xmm7 (packed 4xfloat) */
    /* mulps: xmm7 *= MEMF(esi + 0x200) (packed 4xfloat) */
    /* subps: xmm0 -= xmm6 (packed 4xfloat) */
    /* addps: xmm1 += xmm7 (packed 4xfloat) */
    xmm4 = MEMF(esi + 0x300); /* movaps */
    xmm5 = MEMF(edx + 0x40); /* movaps */
    /* mulps: xmm4 *= xmm5 (packed 4xfloat) */
    xmm6 = MEMF(esi + 0x310); /* movaps */
    /* mulps: xmm5 *= xmm6 (packed 4xfloat) */
    xmm7 = MEMF(edx + 0x50); /* movaps */
    /* mulps: xmm6 *= xmm7 (packed 4xfloat) */
    /* mulps: xmm7 *= MEMF(esi + 0x300) (packed 4xfloat) */
    /* subps: xmm4 -= xmm6 (packed 4xfloat) */
    /* addps: xmm5 += xmm7 (packed 4xfloat) */
    xmm2 = MEMF(esi + 0x100); /* movaps */
    xmm3 = MEMF(edx + 0x20); /* movaps */
    /* mulps: xmm2 *= xmm3 (packed 4xfloat) */
    xmm6 = MEMF(esi + 0x110); /* movaps */
    /* mulps: xmm3 *= xmm6 (packed 4xfloat) */
    xmm7 = MEMF(edx + 0x30); /* movaps */
    /* mulps: xmm6 *= xmm7 (packed 4xfloat) */
    /* mulps: xmm7 *= MEMF(esi + 0x100) (packed 4xfloat) */
    /* subps: xmm2 -= xmm6 (packed 4xfloat) */
    /* addps: xmm3 += xmm7 (packed 4xfloat) */
    edx = edx + 0x60;
    xmm6 = xmm4; /* movaps */
    /* addps: xmm4 += xmm0 (packed 4xfloat) */
    /* subps: xmm0 -= xmm6 (packed 4xfloat) */
    xmm7 = xmm5; /* movaps */
    /* addps: xmm5 += xmm1 (packed 4xfloat) */
    /* subps: xmm1 -= xmm7 (packed 4xfloat) */
    xmm6 = MEMF(esi); /* movaps */
    xmm7 = xmm2; /* movaps */
    /* addps: xmm2 += xmm6 (packed 4xfloat) */
    /* subps: xmm6 -= xmm7 (packed 4xfloat) */
    xmm7 = xmm4; /* movaps */
    /* addps: xmm4 += xmm2 (packed 4xfloat) */
    MEMF(esi) = xmm4; /* movaps */
    /* subps: xmm2 -= xmm7 (packed 4xfloat) */
    MEMF(esi + 0x200) = xmm2; /* movaps */
    xmm4 = MEMF(esi + 0x10); /* movaps */
    /* subps: xmm4 -= xmm3 (packed 4xfloat) */
    /* addps: xmm3 += MEMF(esi + 0x10) (packed 4xfloat) */
    xmm7 = xmm5; /* movaps */
    /* addps: xmm5 += xmm3 (packed 4xfloat) */
    MEMF(esi + 0x10) = xmm5; /* movaps */
    /* subps: xmm3 -= xmm7 (packed 4xfloat) */
    MEMF(esi + 0x210) = xmm3; /* movaps */
    xmm7 = xmm6; /* movaps */
    /* addps: xmm6 += xmm1 (packed 4xfloat) */
    MEMF(esi + 0x100) = xmm6; /* movaps */
    /* subps: xmm7 -= xmm1 (packed 4xfloat) */
    MEMF(esi + 0x300) = xmm7; /* movaps */
    xmm5 = xmm4; /* movaps */
    /* subps: xmm4 -= xmm0 (packed 4xfloat) */
    MEMF(esi + 0x110) = xmm4; /* movaps */
    /* addps: xmm5 += xmm0 (packed 4xfloat) */
    MEMF(esi + 0x310) = xmm5; /* movaps */
    esi = esi + 0x20;
    ecx--;
    if (((int32_t)ecx > 0)) goto loc_00461F50; /* jg: greater (signed >) */

loc_0046205E: ;
    esi = esi + 0x300;
    ebx--;
    if (((int32_t)ebx > 0)) goto loc_00461F40; /* jg: greater (signed >) */

loc_0046206B: ;
    if (CMP_L(eax, 4)) goto loc_00462757; /* jl: less (signed <) */

loc_00462074: ;
    eax = eax >> 2;
    ebx = eax;
    esi = MEM32(esp);
    /* nop */

loc_00462080: ;
    edx = ebp + 0x3C0;
    ecx = 0x20;
    eax = eax + 0;

loc_00462090: ;
    xmm0 = MEMF(esi + 0x800); /* movaps */
    xmm1 = MEMF(edx); /* movaps */
    /* mulps: xmm0 *= xmm1 (packed 4xfloat) */
    xmm6 = MEMF(esi + 0x810); /* movaps */
    /* mulps: xmm1 *= xmm6 (packed 4xfloat) */
    xmm7 = MEMF(edx + 0x10); /* movaps */
    /* mulps: xmm6 *= xmm7 (packed 4xfloat) */
    /* mulps: xmm7 *= MEMF(esi + 0x800) (packed 4xfloat) */
    /* subps: xmm0 -= xmm6 (packed 4xfloat) */
    /* addps: xmm1 += xmm7 (packed 4xfloat) */
    xmm4 = MEMF(esi + 0xC00); /* movaps */
    xmm5 = MEMF(edx + 0x40); /* movaps */
    /* mulps: xmm4 *= xmm5 (packed 4xfloat) */
    xmm6 = MEMF(esi + 0xC10); /* movaps */
    /* mulps: xmm5 *= xmm6 (packed 4xfloat) */
    xmm7 = MEMF(edx + 0x50); /* movaps */
    /* mulps: xmm6 *= xmm7 (packed 4xfloat) */
    /* mulps: xmm7 *= MEMF(esi + 0xC00) (packed 4xfloat) */
    /* subps: xmm4 -= xmm6 (packed 4xfloat) */
    /* addps: xmm5 += xmm7 (packed 4xfloat) */
    xmm2 = MEMF(esi + 0x400); /* movaps */
    xmm3 = MEMF(edx + 0x20); /* movaps */
    /* mulps: xmm2 *= xmm3 (packed 4xfloat) */
    xmm6 = MEMF(esi + 0x410); /* movaps */
    /* mulps: xmm3 *= xmm6 (packed 4xfloat) */
    xmm7 = MEMF(edx + 0x30); /* movaps */
    /* mulps: xmm6 *= xmm7 (packed 4xfloat) */
    /* mulps: xmm7 *= MEMF(esi + 0x400) (packed 4xfloat) */
    /* subps: xmm2 -= xmm6 (packed 4xfloat) */
    /* addps: xmm3 += xmm7 (packed 4xfloat) */
    edx = edx + 0x60;
    xmm6 = xmm4; /* movaps */
    /* addps: xmm4 += xmm0 (packed 4xfloat) */
    /* subps: xmm0 -= xmm6 (packed 4xfloat) */
    xmm7 = xmm5; /* movaps */
    /* addps: xmm5 += xmm1 (packed 4xfloat) */
    /* subps: xmm1 -= xmm7 (packed 4xfloat) */
    xmm6 = MEMF(esi); /* movaps */
    xmm7 = xmm2; /* movaps */
    /* addps: xmm2 += xmm6 (packed 4xfloat) */
    /* subps: xmm6 -= xmm7 (packed 4xfloat) */
    xmm7 = xmm4; /* movaps */
    /* addps: xmm4 += xmm2 (packed 4xfloat) */
    MEMF(esi) = xmm4; /* movaps */
    /* subps: xmm2 -= xmm7 (packed 4xfloat) */
    MEMF(esi + 0x800) = xmm2; /* movaps */
    xmm4 = MEMF(esi + 0x10); /* movaps */
    /* subps: xmm4 -= xmm3 (packed 4xfloat) */
    /* addps: xmm3 += MEMF(esi + 0x10) (packed 4xfloat) */
    xmm7 = xmm5; /* movaps */
    /* addps: xmm5 += xmm3 (packed 4xfloat) */
    MEMF(esi + 0x10) = xmm5; /* movaps */
    /* subps: xmm3 -= xmm7 (packed 4xfloat) */
    MEMF(esi + 0x810) = xmm3; /* movaps */
    xmm7 = xmm6; /* movaps */
    /* addps: xmm6 += xmm1 (packed 4xfloat) */
    MEMF(esi + 0x400) = xmm6; /* movaps */
    /* subps: xmm7 -= xmm1 (packed 4xfloat) */
    MEMF(esi + 0xC00) = xmm7; /* movaps */
    xmm5 = xmm4; /* movaps */
    /* subps: xmm4 -= xmm0 (packed 4xfloat) */
    MEMF(esi + 0x410) = xmm4; /* movaps */
    /* addps: xmm5 += xmm0 (packed 4xfloat) */
    MEMF(esi + 0xC10) = xmm5; /* movaps */
    esi = esi + 0x20;
    ecx--;
    if (((int32_t)ecx > 0)) goto loc_00462090; /* jg: greater (signed >) */

loc_0046219E: ;
    esi = esi + 0xC00;
    ebx--;
    if (((int32_t)ebx > 0)) goto loc_00462080; /* jg: greater (signed >) */

loc_004621AB: ;
    goto loc_00462757;

loc_004621B0: ;
    eax = eax >> 4;
    ebx = eax;
    edx = ebp;
    esi = MEM32(esp + 0x18);
    edi = MEM32(esp);
    /* nop */

loc_004621C0: ;
    xmm0 = MEMD(esi); /* movlps */
    xmm0 = MEMD(esi + 0x10); /* movhps */
    xmm1 = MEMD(esi + 8); /* movlps */
    xmm1 = MEMD(esi + 0x18); /* movhps */
    xmm2 = xmm0; /* movaps */
    /* subps: xmm0 -= xmm1 (packed 4xfloat) */
    /* xorps xmm0, MEMF(0x6554E0) */
    /* addps: xmm1 += xmm2 (packed 4xfloat) */
    xmm3 = MEMD(esi + 0x20); /* movlps */
    xmm3 = MEMD(esi + 0x30); /* movhps */
    xmm4 = MEMD(esi + 0x28); /* movlps */
    xmm4 = MEMD(esi + 0x38); /* movhps */
    xmm5 = xmm3; /* movaps */
    /* subps: xmm3 -= xmm4 (packed 4xfloat) */
    /* xorps xmm3, MEMF(0x6554E0) */
    /* addps: xmm4 += xmm5 (packed 4xfloat) */
    xmm2 = xmm1; /* movaps */
    /* shufps xmm1, xmm0, 0xbe */
    /* TODO: movlhps xmm2, xmm0 */
    xmm0 = xmm1; /* movaps */
    /* addps: xmm1 += xmm2 (packed 4xfloat) */
    /* subps: xmm2 -= xmm0 (packed 4xfloat) */
    xmm5 = xmm4; /* movaps */
    /* shufps xmm4, xmm3, 0xbe */
    /* TODO: movlhps xmm5, xmm3 */
    xmm3 = xmm4; /* movaps */
    /* addps: xmm4 += xmm5 (packed 4xfloat) */
    /* subps: xmm5 -= xmm3 (packed 4xfloat) */
    xmm0 = xmm1; /* movaps */
    /* shufps xmm1, xmm2, 0x88 */
    MEMF(edi) = xmm1; /* movaps */
    /* shufps xmm0, xmm2, 0xdd */
    MEMF(edi + 0x10) = xmm0; /* movaps */
    xmm3 = xmm4; /* movaps */
    /* shufps xmm4, xmm5, 0x88 */
    /* shufps xmm3, xmm5, 0xdd */
    xmm2 = MEMD(esi + 0x40); /* movlps */
    xmm2 = MEMD(esi + 0x50); /* movhps */
    xmm1 = MEMD(esi + 0x48); /* movlps */
    xmm1 = MEMD(esi + 0x58); /* movhps */
    xmm0 = xmm2; /* movaps */
    /* subps: xmm2 -= xmm1 (packed 4xfloat) */
    /* xorps xmm2, MEMF(0x6554E0) */
    /* addps: xmm1 += xmm0 (packed 4xfloat) */
    xmm6 = MEMD(esi + 0x60); /* movlps */
    xmm6 = MEMD(esi + 0x70); /* movhps */
    xmm5 = MEMD(esi + 0x68); /* movlps */
    xmm5 = MEMD(esi + 0x78); /* movhps */
    xmm7 = xmm6; /* movaps */
    /* subps: xmm6 -= xmm5 (packed 4xfloat) */
    /* xorps xmm6, MEMF(0x6554E0) */
    /* addps: xmm5 += xmm7 (packed 4xfloat) */
    xmm0 = xmm1; /* movaps */
    /* shufps xmm1, xmm2, 0xbe */
    /* TODO: movlhps xmm0, xmm2 */
    xmm7 = xmm5; /* movaps */
    /* shufps xmm5, xmm6, 0xbe */
    /* TODO: movlhps xmm7, xmm6 */
    xmm2 = xmm1; /* movaps */
    /* addps: xmm1 += xmm0 (packed 4xfloat) */
    /* subps: xmm0 -= xmm2 (packed 4xfloat) */
    xmm6 = xmm5; /* movaps */
    /* addps: xmm5 += xmm7 (packed 4xfloat) */
    /* subps: xmm7 -= xmm6 (packed 4xfloat) */
    xmm2 = xmm1; /* movaps */
    /* shufps xmm2, xmm0, 0x88 */
    /* shufps xmm1, xmm0, 0xdd */
    xmm6 = xmm5; /* movaps */
    /* shufps xmm6, xmm7, 0x88 */
    /* shufps xmm5, xmm7, 0xdd */
    xmm0 = MEMF(edx); /* movaps */
    /* mulps: xmm0 *= xmm2 (packed 4xfloat) */
    xmm7 = MEMF(edx + 0x10); /* movaps */
    /* mulps: xmm2 *= xmm7 (packed 4xfloat) */
    /* mulps: xmm7 *= xmm1 (packed 4xfloat) */
    /* mulps: xmm1 *= MEMF(edx) (packed 4xfloat) */
    /* subps: xmm0 -= xmm7 (packed 4xfloat) */
    /* addps: xmm1 += xmm2 (packed 4xfloat) */
    xmm2 = MEMF(edx + 0x40); /* movaps */
    /* mulps: xmm2 *= xmm6 (packed 4xfloat) */
    xmm7 = MEMF(edx + 0x50); /* movaps */
    /* mulps: xmm6 *= xmm7 (packed 4xfloat) */
    /* mulps: xmm7 *= xmm5 (packed 4xfloat) */
    /* mulps: xmm5 *= MEMF(edx + 0x40) (packed 4xfloat) */
    /* subps: xmm2 -= xmm7 (packed 4xfloat) */
    /* addps: xmm5 += xmm6 (packed 4xfloat) */
    xmm6 = MEMF(edx + 0x20); /* movaps */
    /* mulps: xmm6 *= xmm4 (packed 4xfloat) */
    xmm7 = MEMF(edx + 0x30); /* movaps */
    /* mulps: xmm4 *= xmm7 (packed 4xfloat) */
    /* mulps: xmm7 *= xmm3 (packed 4xfloat) */
    /* mulps: xmm3 *= MEMF(edx + 0x20) (packed 4xfloat) */
    /* subps: xmm6 -= xmm7 (packed 4xfloat) */
    /* addps: xmm3 += xmm4 (packed 4xfloat) */
    xmm7 = xmm2; /* movaps */
    /* addps: xmm2 += xmm0 (packed 4xfloat) */
    /* subps: xmm0 -= xmm7 (packed 4xfloat) */
    xmm7 = xmm5; /* movaps */
    /* addps: xmm5 += xmm1 (packed 4xfloat) */
    /* subps: xmm1 -= xmm7 (packed 4xfloat) */
    xmm4 = MEMF(edi); /* movaps */
    /* subps: xmm4 -= xmm6 (packed 4xfloat) */
    /* addps: xmm6 += MEMF(edi) (packed 4xfloat) */
    xmm7 = xmm2; /* movaps */
    /* addps: xmm2 += xmm6 (packed 4xfloat) */
    MEMF(edi) = xmm2; /* movaps */
    /* subps: xmm6 -= xmm7 (packed 4xfloat) */
    MEMF(edi + 0x40) = xmm6; /* movaps */
    xmm2 = MEMF(edi + 0x10); /* movaps */
    /* subps: xmm2 -= xmm3 (packed 4xfloat) */
    /* addps: xmm3 += MEMF(edi + 0x10) (packed 4xfloat) */
    xmm7 = xmm5; /* movaps */
    /* addps: xmm5 += xmm3 (packed 4xfloat) */
    MEMF(edi + 0x10) = xmm5; /* movaps */
    /* subps: xmm3 -= xmm7 (packed 4xfloat) */
    MEMF(edi + 0x50) = xmm3; /* movaps */
    xmm7 = xmm4; /* movaps */
    /* addps: xmm4 += xmm1 (packed 4xfloat) */
    MEMF(edi + 0x20) = xmm4; /* movaps */
    /* subps: xmm7 -= xmm1 (packed 4xfloat) */
    MEMF(edi + 0x60) = xmm7; /* movaps */
    xmm7 = xmm2; /* movaps */
    /* subps: xmm2 -= xmm0 (packed 4xfloat) */
    MEMF(edi + 0x30) = xmm2; /* movaps */
    /* addps: xmm7 += xmm0 (packed 4xfloat) */
    MEMF(edi + 0x70) = xmm7; /* movaps */
    esi = esi + 0x80;
    edi = edi + 0x80;
    ebx--;
    if (((int32_t)ebx > 0)) goto loc_004621C0; /* jg: greater (signed >) */

loc_00462389: ;
    if (CMP_L(eax, 4)) goto loc_00462757; /* jl: less (signed <) */

loc_00462392: ;
    eax = eax >> 2;
    ebx = eax;
    esi = MEM32(esp);
    /* nop */

loc_004623A0: ;
    edx = ebp + 0x60;
    ecx = 4;
    /* nop */
    /* nop */

loc_004623B0: ;
    xmm0 = MEMF(esi + 0x100); /* movaps */
    xmm1 = MEMF(edx); /* movaps */
    /* mulps: xmm0 *= xmm1 (packed 4xfloat) */
    xmm6 = MEMF(esi + 0x110); /* movaps */
    /* mulps: xmm1 *= xmm6 (packed 4xfloat) */
    xmm7 = MEMF(edx + 0x10); /* movaps */
    /* mulps: xmm6 *= xmm7 (packed 4xfloat) */
    /* mulps: xmm7 *= MEMF(esi + 0x100) (packed 4xfloat) */
    /* subps: xmm0 -= xmm6 (packed 4xfloat) */
    /* addps: xmm1 += xmm7 (packed 4xfloat) */
    xmm4 = MEMF(esi + 0x180); /* movaps */
    xmm5 = MEMF(edx + 0x40); /* movaps */
    /* mulps: xmm4 *= xmm5 (packed 4xfloat) */
    xmm6 = MEMF(esi + 0x190); /* movaps */
    /* mulps: xmm5 *= xmm6 (packed 4xfloat) */
    xmm7 = MEMF(edx + 0x50); /* movaps */
    /* mulps: xmm6 *= xmm7 (packed 4xfloat) */
    /* mulps: xmm7 *= MEMF(esi + 0x180) (packed 4xfloat) */
    /* subps: xmm4 -= xmm6 (packed 4xfloat) */
    /* addps: xmm5 += xmm7 (packed 4xfloat) */
    xmm2 = MEMF(esi + 0x80); /* movaps */
    xmm3 = MEMF(edx + 0x20); /* movaps */
    /* mulps: xmm2 *= xmm3 (packed 4xfloat) */
    xmm6 = MEMF(esi + 0x90); /* movaps */
    /* mulps: xmm3 *= xmm6 (packed 4xfloat) */
    xmm7 = MEMF(edx + 0x30); /* movaps */
    /* mulps: xmm6 *= xmm7 (packed 4xfloat) */
    /* mulps: xmm7 *= MEMF(esi + 0x80) (packed 4xfloat) */
    /* subps: xmm2 -= xmm6 (packed 4xfloat) */
    /* addps: xmm3 += xmm7 (packed 4xfloat) */
    edx = edx + 0x60;
    xmm6 = xmm4; /* movaps */
    /* addps: xmm4 += xmm0 (packed 4xfloat) */
    /* subps: xmm0 -= xmm6 (packed 4xfloat) */
    xmm7 = xmm5; /* movaps */
    /* addps: xmm5 += xmm1 (packed 4xfloat) */
    /* subps: xmm1 -= xmm7 (packed 4xfloat) */
    xmm6 = MEMF(esi); /* movaps */
    xmm7 = xmm2; /* movaps */
    /* addps: xmm2 += xmm6 (packed 4xfloat) */
    /* subps: xmm6 -= xmm7 (packed 4xfloat) */
    xmm7 = xmm4; /* movaps */
    /* addps: xmm4 += xmm2 (packed 4xfloat) */
    MEMF(esi) = xmm4; /* movaps */
    /* subps: xmm2 -= xmm7 (packed 4xfloat) */
    MEMF(esi + 0x100) = xmm2; /* movaps */
    xmm4 = MEMF(esi + 0x10); /* movaps */
    /* subps: xmm4 -= xmm3 (packed 4xfloat) */
    /* addps: xmm3 += MEMF(esi + 0x10) (packed 4xfloat) */
    xmm7 = xmm5; /* movaps */
    /* addps: xmm5 += xmm3 (packed 4xfloat) */
    MEMF(esi + 0x10) = xmm5; /* movaps */
    /* subps: xmm3 -= xmm7 (packed 4xfloat) */
    MEMF(esi + 0x110) = xmm3; /* movaps */
    xmm7 = xmm6; /* movaps */
    /* addps: xmm6 += xmm1 (packed 4xfloat) */
    MEMF(esi + 0x80) = xmm6; /* movaps */
    /* subps: xmm7 -= xmm1 (packed 4xfloat) */
    MEMF(esi + 0x180) = xmm7; /* movaps */
    xmm5 = xmm4; /* movaps */
    /* subps: xmm4 -= xmm0 (packed 4xfloat) */
    MEMF(esi + 0x90) = xmm4; /* movaps */
    /* addps: xmm5 += xmm0 (packed 4xfloat) */
    MEMF(esi + 0x190) = xmm5; /* movaps */
    esi = esi + 0x20;
    ecx--;
    if (((int32_t)ecx > 0)) goto loc_004623B0; /* jg: greater (signed >) */

loc_004624BE: ;
    esi = esi + 0x180;
    ebx--;
    if (((int32_t)ebx > 0)) goto loc_004623A0; /* jg: greater (signed >) */

loc_004624CB: ;
    if (CMP_L(eax, 4)) goto loc_00462757; /* jl: less (signed <) */

loc_004624D4: ;
    eax = eax >> 2;
    ebx = eax;
    esi = MEM32(esp);
    /* nop */

loc_004624E0: ;
    edx = ebp + 0x1E0;
    ecx = 0x10;
    eax = eax + 0;

loc_004624F0: ;
    xmm0 = MEMF(esi + 0x400); /* movaps */
    xmm1 = MEMF(edx); /* movaps */
    /* mulps: xmm0 *= xmm1 (packed 4xfloat) */
    xmm6 = MEMF(esi + 0x410); /* movaps */
    /* mulps: xmm1 *= xmm6 (packed 4xfloat) */
    xmm7 = MEMF(edx + 0x10); /* movaps */
    /* mulps: xmm6 *= xmm7 (packed 4xfloat) */
    /* mulps: xmm7 *= MEMF(esi + 0x400) (packed 4xfloat) */
    /* subps: xmm0 -= xmm6 (packed 4xfloat) */
    /* addps: xmm1 += xmm7 (packed 4xfloat) */
    xmm4 = MEMF(esi + 0x600); /* movaps */
    xmm5 = MEMF(edx + 0x40); /* movaps */
    /* mulps: xmm4 *= xmm5 (packed 4xfloat) */
    xmm6 = MEMF(esi + 0x610); /* movaps */
    /* mulps: xmm5 *= xmm6 (packed 4xfloat) */
    xmm7 = MEMF(edx + 0x50); /* movaps */
    /* mulps: xmm6 *= xmm7 (packed 4xfloat) */
    /* mulps: xmm7 *= MEMF(esi + 0x600) (packed 4xfloat) */
    /* subps: xmm4 -= xmm6 (packed 4xfloat) */
    /* addps: xmm5 += xmm7 (packed 4xfloat) */
    xmm2 = MEMF(esi + 0x200); /* movaps */
    xmm3 = MEMF(edx + 0x20); /* movaps */
    /* mulps: xmm2 *= xmm3 (packed 4xfloat) */
    xmm6 = MEMF(esi + 0x210); /* movaps */
    /* mulps: xmm3 *= xmm6 (packed 4xfloat) */
    xmm7 = MEMF(edx + 0x30); /* movaps */
    /* mulps: xmm6 *= xmm7 (packed 4xfloat) */
    /* mulps: xmm7 *= MEMF(esi + 0x200) (packed 4xfloat) */
    /* subps: xmm2 -= xmm6 (packed 4xfloat) */
    /* addps: xmm3 += xmm7 (packed 4xfloat) */
    edx = edx + 0x60;
    xmm6 = xmm4; /* movaps */
    /* addps: xmm4 += xmm0 (packed 4xfloat) */
    /* subps: xmm0 -= xmm6 (packed 4xfloat) */
    xmm7 = xmm5; /* movaps */
    /* addps: xmm5 += xmm1 (packed 4xfloat) */
    /* subps: xmm1 -= xmm7 (packed 4xfloat) */
    xmm6 = MEMF(esi); /* movaps */
    xmm7 = xmm2; /* movaps */
    /* addps: xmm2 += xmm6 (packed 4xfloat) */
    /* subps: xmm6 -= xmm7 (packed 4xfloat) */
    xmm7 = xmm4; /* movaps */
    /* addps: xmm4 += xmm2 (packed 4xfloat) */
    MEMF(esi) = xmm4; /* movaps */
    /* subps: xmm2 -= xmm7 (packed 4xfloat) */
    MEMF(esi + 0x400) = xmm2; /* movaps */
    xmm4 = MEMF(esi + 0x10); /* movaps */
    /* subps: xmm4 -= xmm3 (packed 4xfloat) */
    /* addps: xmm3 += MEMF(esi + 0x10) (packed 4xfloat) */
    xmm7 = xmm5; /* movaps */
    /* addps: xmm5 += xmm3 (packed 4xfloat) */
    MEMF(esi + 0x10) = xmm5; /* movaps */
    /* subps: xmm3 -= xmm7 (packed 4xfloat) */
    MEMF(esi + 0x410) = xmm3; /* movaps */
    xmm7 = xmm6; /* movaps */
    /* addps: xmm6 += xmm1 (packed 4xfloat) */
    MEMF(esi + 0x200) = xmm6; /* movaps */
    /* subps: xmm7 -= xmm1 (packed 4xfloat) */
    MEMF(esi + 0x600) = xmm7; /* movaps */
    xmm5 = xmm4; /* movaps */
    /* subps: xmm4 -= xmm0 (packed 4xfloat) */
    MEMF(esi + 0x210) = xmm4; /* movaps */
    /* addps: xmm5 += xmm0 (packed 4xfloat) */
    MEMF(esi + 0x610) = xmm5; /* movaps */
    esi = esi + 0x20;
    ecx--;
    if (((int32_t)ecx > 0)) goto loc_004624F0; /* jg: greater (signed >) */

loc_004625FE: ;
    esi = esi + 0x600;
    ebx--;
    if (((int32_t)ebx > 0)) goto loc_004624E0; /* jg: greater (signed >) */

loc_0046260B: ;
    if (CMP_L(eax, 4)) goto loc_00462757; /* jl: less (signed <) */

loc_00462614: ;
    eax = eax >> 2;
    ebx = eax;
    esi = MEM32(esp);
    /* nop */

loc_00462620: ;
    edx = ebp + 0x7E0;
    ecx = 0x40;
    eax = eax + 0;

loc_00462630: ;
    xmm0 = MEMF(esi + 0x1000); /* movaps */
    xmm1 = MEMF(edx); /* movaps */
    /* mulps: xmm0 *= xmm1 (packed 4xfloat) */
    xmm6 = MEMF(esi + 0x1010); /* movaps */
    /* mulps: xmm1 *= xmm6 (packed 4xfloat) */
    xmm7 = MEMF(edx + 0x10); /* movaps */
    /* mulps: xmm6 *= xmm7 (packed 4xfloat) */
    /* mulps: xmm7 *= MEMF(esi + 0x1000) (packed 4xfloat) */
    /* subps: xmm0 -= xmm6 (packed 4xfloat) */
    /* addps: xmm1 += xmm7 (packed 4xfloat) */
    xmm4 = MEMF(esi + 0x1800); /* movaps */
    xmm5 = MEMF(edx + 0x40); /* movaps */
    /* mulps: xmm4 *= xmm5 (packed 4xfloat) */
    xmm6 = MEMF(esi + 0x1810); /* movaps */
    /* mulps: xmm5 *= xmm6 (packed 4xfloat) */
    xmm7 = MEMF(edx + 0x50); /* movaps */
    /* mulps: xmm6 *= xmm7 (packed 4xfloat) */
    /* mulps: xmm7 *= MEMF(esi + 0x1800) (packed 4xfloat) */
    /* subps: xmm4 -= xmm6 (packed 4xfloat) */
    /* addps: xmm5 += xmm7 (packed 4xfloat) */
    xmm2 = MEMF(esi + 0x800); /* movaps */
    xmm3 = MEMF(edx + 0x20); /* movaps */
    /* mulps: xmm2 *= xmm3 (packed 4xfloat) */
    xmm6 = MEMF(esi + 0x810); /* movaps */
    /* mulps: xmm3 *= xmm6 (packed 4xfloat) */
    xmm7 = MEMF(edx + 0x30); /* movaps */
    /* mulps: xmm6 *= xmm7 (packed 4xfloat) */
    /* mulps: xmm7 *= MEMF(esi + 0x800) (packed 4xfloat) */
    /* subps: xmm2 -= xmm6 (packed 4xfloat) */
    /* addps: xmm3 += xmm7 (packed 4xfloat) */
    edx = edx + 0x60;
    /* TODO: prefetcht0 byte ptr [edx + 0x20] */
    /* TODO: prefetcht0 byte ptr [edx + 0x40] */
    /* TODO: prefetcht0 byte ptr [edx + 0x60] */
    xmm6 = xmm4; /* movaps */
    /* addps: xmm4 += xmm0 (packed 4xfloat) */
    /* subps: xmm0 -= xmm6 (packed 4xfloat) */
    xmm7 = xmm5; /* movaps */
    /* addps: xmm5 += xmm1 (packed 4xfloat) */
    /* subps: xmm1 -= xmm7 (packed 4xfloat) */
    xmm6 = MEMF(esi); /* movaps */
    xmm7 = xmm2; /* movaps */
    /* addps: xmm2 += xmm6 (packed 4xfloat) */
    /* subps: xmm6 -= xmm7 (packed 4xfloat) */
    xmm7 = xmm4; /* movaps */
    /* addps: xmm4 += xmm2 (packed 4xfloat) */
    MEMF(esi) = xmm4; /* movaps */
    /* subps: xmm2 -= xmm7 (packed 4xfloat) */
    MEMF(esi + 0x1000) = xmm2; /* movaps */
    xmm4 = MEMF(esi + 0x10); /* movaps */
    /* subps: xmm4 -= xmm3 (packed 4xfloat) */
    /* addps: xmm3 += MEMF(esi + 0x10) (packed 4xfloat) */
    xmm7 = xmm5; /* movaps */
    /* addps: xmm5 += xmm3 (packed 4xfloat) */
    MEMF(esi + 0x10) = xmm5; /* movaps */
    /* subps: xmm3 -= xmm7 (packed 4xfloat) */
    MEMF(esi + 0x1010) = xmm3; /* movaps */
    xmm7 = xmm6; /* movaps */
    /* addps: xmm6 += xmm1 (packed 4xfloat) */
    MEMF(esi + 0x800) = xmm6; /* movaps */
    /* subps: xmm7 -= xmm1 (packed 4xfloat) */
    MEMF(esi + 0x1800) = xmm7; /* movaps */
    xmm5 = xmm4; /* movaps */
    /* subps: xmm4 -= xmm0 (packed 4xfloat) */
    MEMF(esi + 0x810) = xmm4; /* movaps */
    /* addps: xmm5 += xmm0 (packed 4xfloat) */
    MEMF(esi + 0x1810) = xmm5; /* movaps */
    esi = esi + 0x20;
    ecx--;
    if (((int32_t)ecx > 0)) goto loc_00462630; /* jg: greater (signed >) */

loc_0046274A: ;
    esi = esi + 0x1800;
    ebx--;
    if (((int32_t)ebx > 0)) goto loc_00462620; /* jg: greater (signed >) */

loc_00462757: ;
    ebx = MEM32(esp + 0x28);
    if (CMP_EQ(ebx, 1)) goto loc_004627D2; /* je: equal / zero */

loc_00462760: ;
    esi = MEM32(esp);
    edi = MEM32(esp + 0x18);
    if (CMP_EQ(edi, esi)) goto loc_0046287B; /* je: equal / zero */

loc_0046276F: ;
    eax = MEM32(esp + 0x1C);
    eax = eax << 1;
    ebx = eax;
    esi = MEM32(esp);
    edi = MEM32(esp + 0x18);
    if (TEST_NZ(edi, 7)) goto loc_004627B0; /* jne: not equal / not zero */

loc_00462786: ;
    /* nop */
    /* nop */

loc_00462790: ;
    xmm0 = MEMF(esi); /* movaps */
    MEMD(edi) = xmm0; /* movlps */
    MEMD(edi + 8) = xmm0; /* movhps */
    esi = esi + 0x10;
    edi = edi + 0x10;
    ebx = ebx - 4;
    if (CMP_G((uint32_t)ebx + (uint32_t)4, (uint32_t)4)) goto loc_00462790; /* jg: greater (signed >) */

loc_004627A5: ;
    goto loc_004627CD;

    /* nop */
    edi = edi;

loc_004627B0: ;
    xmm0 = MEMD(esi + 4); /* movlps */
    MEMD(edi + 4) = xmm0; /* movlps */
    ecx = MEM32(esi);
    MEM32(edi) = ecx;
    ecx = MEM32(esi + 0xC);
    MEM32(edi + 0xC) = ecx;
    esi = esi + 0x10;
    edi = edi + 0x10;
    ebx = ebx - 4;
    if (CMP_G((uint32_t)ebx + (uint32_t)4, (uint32_t)4)) goto loc_004627B0; /* jg: greater (signed >) */

loc_004627CD: ;
    goto loc_0046287B;

loc_004627D2: ;
    ebx = MEM32(esp + 0x1C);
    esi = MEM32(esp);
    edi = MEM32(esp + 0x18);
    if (TEST_NZ(edi, 0xF)) goto loc_00462830; /* jne: not equal / not zero */

loc_004627E5: ;
    /* nop */
    /* nop */

loc_004627F0: ;
    xmm0 = MEMF(esi); /* movaps */
    xmm2 = MEMF(esi + 0x10); /* movaps */
    xmm1 = xmm0; /* movaps */
    /* unpcklps xmm0, xmm2 */
    /* unpckhps xmm1, xmm2 */
    xmm4 = MEMF(esi + 0x20); /* movaps */
    xmm6 = MEMF(esi + 0x30); /* movaps */
    MEMF(edi) = xmm0; /* movaps */
    xmm5 = xmm4; /* movaps */
    /* unpcklps xmm4, xmm6 */
    MEMF(edi + 0x10) = xmm1; /* movaps */
    /* unpckhps xmm5, xmm6 */
    MEMF(edi + 0x20) = xmm4; /* movaps */
    MEMF(edi + 0x30) = xmm5; /* movaps */
    esi = esi + 0x40;
    edi = edi + 0x40;
    ebx = ebx - 8;
    if (CMP_G((uint32_t)ebx + (uint32_t)8, (uint32_t)8)) goto loc_004627F0; /* jg: greater (signed >) */

loc_0046282B: ;
    goto loc_0046287B;

    /* nop */

loc_00462830: ;
    xmm0 = MEMF(esi); /* movaps */
    xmm2 = MEMF(esi + 0x10); /* movaps */
    xmm1 = xmm0; /* movaps */
    /* unpcklps xmm0, xmm2 */
    /* unpckhps xmm1, xmm2 */
    xmm4 = MEMF(esi + 0x20); /* movaps */
    MEMD(edi) = xmm0; /* movlps */
    MEMD(edi + 8) = xmm0; /* movhps */
    xmm6 = MEMF(esi + 0x30); /* movaps */
    xmm5 = xmm4; /* movaps */
    /* unpcklps xmm4, xmm6 */
    MEMD(edi + 0x10) = xmm1; /* movlps */
    MEMD(edi + 0x18) = xmm1; /* movhps */
    /* unpckhps xmm5, xmm6 */
    MEMD(edi + 0x20) = xmm4; /* movlps */
    MEMD(edi + 0x28) = xmm4; /* movhps */
    MEMD(edi + 0x30) = xmm5; /* movlps */
    MEMD(edi + 0x38) = xmm5; /* movhps */
    esi = esi + 0x40;
    edi = edi + 0x40;
    ebx = ebx - 8;
    if (CMP_G((uint32_t)ebx + (uint32_t)8, (uint32_t)8)) goto loc_00462830; /* jg: greater (signed >) */

loc_0046287B: ;
    esp = esp + 4;
    POP32(esp, ebp);
    POP32(esp, edi);
    POP32(esp, esi);
    POP32(esp, ebx);
    esp += 4; return; /* ret */

}

/**
 * sub_00462890
 * Original: 0x00462890 - 0x004633F3 (2915 bytes, 767 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00462890(void)
{
    uint32_t ebp;
    int _flags = 0; /* fallback flag var */
    float xmm0, xmm1, xmm2, xmm3, xmm4, xmm5, xmm6, xmm7;
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_00462890: ;
    PUSH32(esp, ebx);
    PUSH32(esp, esi);
    PUSH32(esp, edi);
    PUSH32(esp, ebp);
    esp = esp - 4;
    esi = MEM32(esp + 0x18);
    edi = MEM32(esp + 0x1C);
    eax = MEM32(esp + 0x20);
    MEM32(esp) = edi;
    if (CMP_EQ(esi, edi)) goto loc_004628B2; /* je: equal / zero */

loc_004628AA: ;
    if (TEST_Z(edi, 0xF)) goto loc_004628BA; /* je: equal / zero */

loc_004628B2: ;
    edi = MEM32(esp + 0x2C);
    MEM32(esp + 0x1C) = edi;

loc_004628BA: ;
    if (TEST_Z(eax, 0xAAAAAAAAu)) goto loc_00462D70; /* je: equal / zero */

loc_004628C5: ;
    ebx = MEM32(esp + 0x28);
    ebp = MEM32(esp + 0x20);
    esi = MEM32(esp + 0x18);
    edi = esi + ebp * 2;
    ecx = edi + ebp * 2;
    edx = ecx + ebp * 2;
    ebp = MEM32(esp + 0x1C);
    eax = MEM32(ebx);

loc_004628E0: ;
    xmm0 = MEMD(esi + eax * 4); /* movlps */
    xmm0 = MEMD(edi + eax * 4); /* movhps */
    xmm1 = MEMD(ecx + eax * 4); /* movlps */
    xmm1 = MEMD(edx + eax * 4); /* movhps */
    eax = MEM32(ebx + 4);
    xmm3 = MEMD(esi + eax * 4); /* movlps */
    xmm3 = MEMD(edi + eax * 4); /* movhps */
    xmm4 = MEMD(ecx + eax * 4); /* movlps */
    xmm4 = MEMD(edx + eax * 4); /* movhps */
    xmm5 = xmm3; /* movaps */
    /* subps: xmm3 -= xmm4 (packed 4xfloat) */
    /* xorps xmm3, MEMF(0x6554F0) */
    /* addps: xmm4 += xmm5 (packed 4xfloat) */
    xmm2 = xmm0; /* movaps */
    /* subps: xmm0 -= xmm1 (packed 4xfloat) */
    /* xorps xmm0, MEMF(0x6554F0) */
    /* addps: xmm1 += xmm2 (packed 4xfloat) */
    xmm5 = xmm4; /* movaps */
    /* shufps xmm4, xmm3, 0xbe */
    /* TODO: movlhps xmm5, xmm3 */
    xmm2 = xmm1; /* movaps */
    /* shufps xmm1, xmm0, 0xbe */
    /* TODO: movlhps xmm2, xmm0 */
    xmm3 = xmm4; /* movaps */
    /* addps: xmm4 += xmm5 (packed 4xfloat) */
    /* subps: xmm5 -= xmm3 (packed 4xfloat) */
    xmm0 = xmm1; /* movaps */
    /* addps: xmm1 += xmm2 (packed 4xfloat) */
    /* subps: xmm2 -= xmm0 (packed 4xfloat) */
    xmm3 = xmm4; /* movaps */
    /* shufps xmm4, xmm5, 0x88 */
    /* shufps xmm3, xmm5, 0xdd */
    xmm0 = xmm1; /* movaps */
    /* shufps xmm1, xmm2, 0x88 */
    /* shufps xmm0, xmm2, 0xdd */
    eax = 0x6554C0;
    xmm2 = MEMF(eax); /* movaps */
    /* mulps: xmm2 *= xmm4 (packed 4xfloat) */
    xmm5 = MEMF(eax + 0x10); /* movaps */
    /* mulps: xmm5 *= xmm3 (packed 4xfloat) */
    /* mulps: xmm4 *= MEMF(eax + 0x10) (packed 4xfloat) */
    /* mulps: xmm3 *= MEMF(eax) (packed 4xfloat) */
    /* addps: xmm2 += xmm5 (packed 4xfloat) */
    /* subps: xmm3 -= xmm4 (packed 4xfloat) */
    eax = MEM32(ebx + 8);
    ebx = ebx + 8;
    xmm4 = xmm1; /* movaps */
    /* addps: xmm4 += xmm2 (packed 4xfloat) */
    MEMF(ebp) = xmm4; /* movaps */
    /* subps: xmm1 -= xmm2 (packed 4xfloat) */
    MEMF(ebp + 0x20) = xmm1; /* movaps */
    xmm4 = xmm0; /* movaps */
    /* addps: xmm4 += xmm3 (packed 4xfloat) */
    MEMF(ebp + 0x10) = xmm4; /* movaps */
    /* subps: xmm0 -= xmm3 (packed 4xfloat) */
    MEMF(ebp + 0x30) = xmm0; /* movaps */
    ebp = ebp + 0x40;
    if (CMP_G(eax, 0)) goto loc_004628E0; /* jg: greater (signed >) */

loc_004629B3: ;
    ebp = MEM32(esp + 0x24);
    eax = MEM32(esp + 0x20);
    eax = eax >> 3;
    if (CMP_L(eax, 4)) goto loc_00463347; /* jl: less (signed <) */

loc_004629C7: ;
    eax = eax >> 2;
    ebx = eax;
    esi = MEM32(esp + 0x1C);

loc_004629D0: ;
    edx = ebp;
    ecx = 2;
    /* nop */
    /* nop */

loc_004629E0: ;
    xmm0 = MEMF(esi + 0x80); /* movaps */
    xmm1 = MEMF(edx); /* movaps */
    /* mulps: xmm0 *= xmm1 (packed 4xfloat) */
    xmm6 = MEMF(esi + 0x90); /* movaps */
    /* mulps: xmm1 *= xmm6 (packed 4xfloat) */
    xmm7 = MEMF(edx + 0x10); /* movaps */
    /* mulps: xmm6 *= xmm7 (packed 4xfloat) */
    /* mulps: xmm7 *= MEMF(esi + 0x80) (packed 4xfloat) */
    /* addps: xmm0 += xmm6 (packed 4xfloat) */
    /* subps: xmm1 -= xmm7 (packed 4xfloat) */
    xmm4 = MEMF(esi + 0xC0); /* movaps */
    xmm5 = MEMF(edx + 0x40); /* movaps */
    /* mulps: xmm4 *= xmm5 (packed 4xfloat) */
    xmm6 = MEMF(esi + 0xD0); /* movaps */
    /* mulps: xmm5 *= xmm6 (packed 4xfloat) */
    xmm7 = MEMF(edx + 0x50); /* movaps */
    /* mulps: xmm6 *= xmm7 (packed 4xfloat) */
    /* mulps: xmm7 *= MEMF(esi + 0xC0) (packed 4xfloat) */
    /* addps: xmm4 += xmm6 (packed 4xfloat) */
    /* subps: xmm5 -= xmm7 (packed 4xfloat) */
    xmm2 = MEMF(esi + 0x40); /* movaps */
    xmm3 = MEMF(edx + 0x20); /* movaps */
    /* mulps: xmm2 *= xmm3 (packed 4xfloat) */
    xmm6 = MEMF(esi + 0x50); /* movaps */
    /* mulps: xmm3 *= xmm6 (packed 4xfloat) */
    xmm7 = MEMF(edx + 0x30); /* movaps */
    /* mulps: xmm6 *= xmm7 (packed 4xfloat) */
    /* mulps: xmm7 *= MEMF(esi + 0x40) (packed 4xfloat) */
    /* addps: xmm2 += xmm6 (packed 4xfloat) */
    /* subps: xmm3 -= xmm7 (packed 4xfloat) */
    edx = edx + 0x60;
    xmm6 = xmm4; /* movaps */
    /* addps: xmm4 += xmm0 (packed 4xfloat) */
    /* subps: xmm0 -= xmm6 (packed 4xfloat) */
    xmm7 = xmm5; /* movaps */
    /* addps: xmm5 += xmm1 (packed 4xfloat) */
    /* subps: xmm1 -= xmm7 (packed 4xfloat) */
    xmm6 = MEMF(esi); /* movaps */
    xmm7 = xmm2; /* movaps */
    /* addps: xmm2 += xmm6 (packed 4xfloat) */
    /* subps: xmm6 -= xmm7 (packed 4xfloat) */
    xmm7 = xmm4; /* movaps */
    /* addps: xmm4 += xmm2 (packed 4xfloat) */
    MEMF(esi) = xmm4; /* movaps */
    /* subps: xmm2 -= xmm7 (packed 4xfloat) */
    MEMF(esi + 0x80) = xmm2; /* movaps */
    xmm4 = MEMF(esi + 0x10); /* movaps */
    /* subps: xmm4 -= xmm3 (packed 4xfloat) */
    /* addps: xmm3 += MEMF(esi + 0x10) (packed 4xfloat) */
    xmm7 = xmm5; /* movaps */
    /* addps: xmm5 += xmm3 (packed 4xfloat) */
    MEMF(esi + 0x10) = xmm5; /* movaps */
    /* subps: xmm3 -= xmm7 (packed 4xfloat) */
    MEMF(esi + 0x90) = xmm3; /* movaps */
    xmm7 = xmm6; /* movaps */
    /* subps: xmm6 -= xmm1 (packed 4xfloat) */
    MEMF(esi + 0x40) = xmm6; /* movaps */
    /* addps: xmm7 += xmm1 (packed 4xfloat) */
    MEMF(esi + 0xC0) = xmm7; /* movaps */
    xmm5 = xmm4; /* movaps */
    /* addps: xmm4 += xmm0 (packed 4xfloat) */
    MEMF(esi + 0x50) = xmm4; /* movaps */
    /* subps: xmm5 -= xmm0 (packed 4xfloat) */
    MEMF(esi + 0xD0) = xmm5; /* movaps */
    esi = esi + 0x20;
    ecx--;
    if (((int32_t)ecx > 0)) goto loc_004629E0; /* jg: greater (signed >) */

loc_00462ADF: ;
    esi = esi + 0xC0;
    ebx--;
    if (((int32_t)ebx > 0)) goto loc_004629D0; /* jg: greater (signed >) */

loc_00462AEC: ;
    if (CMP_L(eax, 4)) goto loc_00463347; /* jl: less (signed <) */

loc_00462AF5: ;
    eax = eax >> 2;
    ebx = eax;
    esi = MEM32(esp + 0x1C);
    edi = edi;

loc_00462B00: ;
    edx = ebp + 0xC0;
    ecx = 8;
    eax = eax + 0;

loc_00462B10: ;
    xmm0 = MEMF(esi + 0x200); /* movaps */
    xmm1 = MEMF(edx); /* movaps */
    /* mulps: xmm0 *= xmm1 (packed 4xfloat) */
    xmm6 = MEMF(esi + 0x210); /* movaps */
    /* mulps: xmm1 *= xmm6 (packed 4xfloat) */
    xmm7 = MEMF(edx + 0x10); /* movaps */
    /* mulps: xmm6 *= xmm7 (packed 4xfloat) */
    /* mulps: xmm7 *= MEMF(esi + 0x200) (packed 4xfloat) */
    /* addps: xmm0 += xmm6 (packed 4xfloat) */
    /* subps: xmm1 -= xmm7 (packed 4xfloat) */
    xmm4 = MEMF(esi + 0x300); /* movaps */
    xmm5 = MEMF(edx + 0x40); /* movaps */
    /* mulps: xmm4 *= xmm5 (packed 4xfloat) */
    xmm6 = MEMF(esi + 0x310); /* movaps */
    /* mulps: xmm5 *= xmm6 (packed 4xfloat) */
    xmm7 = MEMF(edx + 0x50); /* movaps */
    /* mulps: xmm6 *= xmm7 (packed 4xfloat) */
    /* mulps: xmm7 *= MEMF(esi + 0x300) (packed 4xfloat) */
    /* addps: xmm4 += xmm6 (packed 4xfloat) */
    /* subps: xmm5 -= xmm7 (packed 4xfloat) */
    xmm2 = MEMF(esi + 0x100); /* movaps */
    xmm3 = MEMF(edx + 0x20); /* movaps */
    /* mulps: xmm2 *= xmm3 (packed 4xfloat) */
    xmm6 = MEMF(esi + 0x110); /* movaps */
    /* mulps: xmm3 *= xmm6 (packed 4xfloat) */
    xmm7 = MEMF(edx + 0x30); /* movaps */
    /* mulps: xmm6 *= xmm7 (packed 4xfloat) */
    /* mulps: xmm7 *= MEMF(esi + 0x100) (packed 4xfloat) */
    /* addps: xmm2 += xmm6 (packed 4xfloat) */
    /* subps: xmm3 -= xmm7 (packed 4xfloat) */
    edx = edx + 0x60;
    xmm6 = xmm4; /* movaps */
    /* addps: xmm4 += xmm0 (packed 4xfloat) */
    /* subps: xmm0 -= xmm6 (packed 4xfloat) */
    xmm7 = xmm5; /* movaps */
    /* addps: xmm5 += xmm1 (packed 4xfloat) */
    /* subps: xmm1 -= xmm7 (packed 4xfloat) */
    xmm6 = MEMF(esi); /* movaps */
    xmm7 = xmm2; /* movaps */
    /* addps: xmm2 += xmm6 (packed 4xfloat) */
    /* subps: xmm6 -= xmm7 (packed 4xfloat) */
    xmm7 = xmm4; /* movaps */
    /* addps: xmm4 += xmm2 (packed 4xfloat) */
    MEMF(esi) = xmm4; /* movaps */
    /* subps: xmm2 -= xmm7 (packed 4xfloat) */
    MEMF(esi + 0x200) = xmm2; /* movaps */
    xmm4 = MEMF(esi + 0x10); /* movaps */
    /* subps: xmm4 -= xmm3 (packed 4xfloat) */
    /* addps: xmm3 += MEMF(esi + 0x10) (packed 4xfloat) */
    xmm7 = xmm5; /* movaps */
    /* addps: xmm5 += xmm3 (packed 4xfloat) */
    MEMF(esi + 0x10) = xmm5; /* movaps */
    /* subps: xmm3 -= xmm7 (packed 4xfloat) */
    MEMF(esi + 0x210) = xmm3; /* movaps */
    xmm7 = xmm6; /* movaps */
    /* subps: xmm6 -= xmm1 (packed 4xfloat) */
    MEMF(esi + 0x100) = xmm6; /* movaps */
    /* addps: xmm7 += xmm1 (packed 4xfloat) */
    MEMF(esi + 0x300) = xmm7; /* movaps */
    xmm5 = xmm4; /* movaps */
    /* addps: xmm4 += xmm0 (packed 4xfloat) */
    MEMF(esi + 0x110) = xmm4; /* movaps */
    /* subps: xmm5 -= xmm0 (packed 4xfloat) */
    MEMF(esi + 0x310) = xmm5; /* movaps */
    esi = esi + 0x20;
    ecx--;
    if (((int32_t)ecx > 0)) goto loc_00462B10; /* jg: greater (signed >) */

loc_00462C1E: ;
    esi = esi + 0x300;
    ebx--;
    if (((int32_t)ebx > 0)) goto loc_00462B00; /* jg: greater (signed >) */

loc_00462C2B: ;
    if (CMP_L(eax, 4)) goto loc_00463347; /* jl: less (signed <) */

loc_00462C34: ;
    eax = eax >> 2;
    ebx = eax;
    esi = MEM32(esp + 0x1C);
    /* nop */

loc_00462C40: ;
    edx = ebp + 0x3C0;
    ecx = 0x20;
    eax = eax + 0;

loc_00462C50: ;
    xmm0 = MEMF(esi + 0x800); /* movaps */
    xmm1 = MEMF(edx); /* movaps */
    /* mulps: xmm0 *= xmm1 (packed 4xfloat) */
    xmm6 = MEMF(esi + 0x810); /* movaps */
    /* mulps: xmm1 *= xmm6 (packed 4xfloat) */
    xmm7 = MEMF(edx + 0x10); /* movaps */
    /* mulps: xmm6 *= xmm7 (packed 4xfloat) */
    /* mulps: xmm7 *= MEMF(esi + 0x800) (packed 4xfloat) */
    /* addps: xmm0 += xmm6 (packed 4xfloat) */
    /* subps: xmm1 -= xmm7 (packed 4xfloat) */
    xmm4 = MEMF(esi + 0xC00); /* movaps */
    xmm5 = MEMF(edx + 0x40); /* movaps */
    /* mulps: xmm4 *= xmm5 (packed 4xfloat) */
    xmm6 = MEMF(esi + 0xC10); /* movaps */
    /* mulps: xmm5 *= xmm6 (packed 4xfloat) */
    xmm7 = MEMF(edx + 0x50); /* movaps */
    /* mulps: xmm6 *= xmm7 (packed 4xfloat) */
    /* mulps: xmm7 *= MEMF(esi + 0xC00) (packed 4xfloat) */
    /* addps: xmm4 += xmm6 (packed 4xfloat) */
    /* subps: xmm5 -= xmm7 (packed 4xfloat) */
    xmm2 = MEMF(esi + 0x400); /* movaps */
    xmm3 = MEMF(edx + 0x20); /* movaps */
    /* mulps: xmm2 *= xmm3 (packed 4xfloat) */
    xmm6 = MEMF(esi + 0x410); /* movaps */
    /* mulps: xmm3 *= xmm6 (packed 4xfloat) */
    xmm7 = MEMF(edx + 0x30); /* movaps */
    /* mulps: xmm6 *= xmm7 (packed 4xfloat) */
    /* mulps: xmm7 *= MEMF(esi + 0x400) (packed 4xfloat) */
    /* addps: xmm2 += xmm6 (packed 4xfloat) */
    /* subps: xmm3 -= xmm7 (packed 4xfloat) */
    edx = edx + 0x60;
    xmm6 = xmm4; /* movaps */
    /* addps: xmm4 += xmm0 (packed 4xfloat) */
    /* subps: xmm0 -= xmm6 (packed 4xfloat) */
    xmm7 = xmm5; /* movaps */
    /* addps: xmm5 += xmm1 (packed 4xfloat) */
    /* subps: xmm1 -= xmm7 (packed 4xfloat) */
    xmm6 = MEMF(esi); /* movaps */
    xmm7 = xmm2; /* movaps */
    /* addps: xmm2 += xmm6 (packed 4xfloat) */
    /* subps: xmm6 -= xmm7 (packed 4xfloat) */
    xmm7 = xmm4; /* movaps */
    /* addps: xmm4 += xmm2 (packed 4xfloat) */
    MEMF(esi) = xmm4; /* movaps */
    /* subps: xmm2 -= xmm7 (packed 4xfloat) */
    MEMF(esi + 0x800) = xmm2; /* movaps */
    xmm4 = MEMF(esi + 0x10); /* movaps */
    /* subps: xmm4 -= xmm3 (packed 4xfloat) */
    /* addps: xmm3 += MEMF(esi + 0x10) (packed 4xfloat) */
    xmm7 = xmm5; /* movaps */
    /* addps: xmm5 += xmm3 (packed 4xfloat) */
    MEMF(esi + 0x10) = xmm5; /* movaps */
    /* subps: xmm3 -= xmm7 (packed 4xfloat) */
    MEMF(esi + 0x810) = xmm3; /* movaps */
    xmm7 = xmm6; /* movaps */
    /* subps: xmm6 -= xmm1 (packed 4xfloat) */
    MEMF(esi + 0x400) = xmm6; /* movaps */
    /* addps: xmm7 += xmm1 (packed 4xfloat) */
    MEMF(esi + 0xC00) = xmm7; /* movaps */
    xmm5 = xmm4; /* movaps */
    /* addps: xmm4 += xmm0 (packed 4xfloat) */
    MEMF(esi + 0x410) = xmm4; /* movaps */
    /* subps: xmm5 -= xmm0 (packed 4xfloat) */
    MEMF(esi + 0xC10) = xmm5; /* movaps */
    esi = esi + 0x20;
    ecx--;
    if (((int32_t)ecx > 0)) goto loc_00462C50; /* jg: greater (signed >) */

loc_00462D5E: ;
    esi = esi + 0xC00;
    ebx--;
    if (((int32_t)ebx > 0)) goto loc_00462C40; /* jg: greater (signed >) */

loc_00462D6B: ;
    goto loc_00463347;

loc_00462D70: ;
    ebx = MEM32(esp + 0x28);
    ebp = MEM32(esp + 0x20);
    esi = MEM32(esp + 0x18);
    edi = esi + ebp * 2;
    ecx = edi + ebp * 2;
    edx = ecx + ebp * 2;
    ebp = MEM32(esp + 0x1C);
    eax = MEM32(ebx);
    eax = eax + 0;

loc_00462D90: ;
    xmm0 = MEMD(esi + eax * 4); /* movlps */
    xmm0 = MEMD(edi + eax * 4); /* movhps */
    xmm1 = MEMD(ecx + eax * 4); /* movlps */
    xmm1 = MEMD(edx + eax * 4); /* movhps */
    eax = MEM32(ebx + 4);
    xmm3 = MEMD(esi + eax * 4); /* movlps */
    xmm3 = MEMD(edi + eax * 4); /* movhps */
    xmm4 = MEMD(ecx + eax * 4); /* movlps */
    xmm4 = MEMD(edx + eax * 4); /* movhps */
    xmm2 = xmm0; /* movaps */
    /* subps: xmm0 -= xmm1 (packed 4xfloat) */
    /* xorps xmm0, MEMF(0x6554F0) */
    /* addps: xmm1 += xmm2 (packed 4xfloat) */
    xmm5 = xmm3; /* movaps */
    /* subps: xmm3 -= xmm4 (packed 4xfloat) */
    /* xorps xmm3, MEMF(0x6554F0) */
    /* addps: xmm4 += xmm5 (packed 4xfloat) */
    xmm2 = xmm1; /* movaps */
    /* shufps xmm1, xmm0, 0xbe */
    /* TODO: movlhps xmm2, xmm0 */
    xmm0 = xmm1; /* movaps */
    /* addps: xmm1 += xmm2 (packed 4xfloat) */
    /* subps: xmm2 -= xmm0 (packed 4xfloat) */
    xmm5 = xmm4; /* movaps */
    /* shufps xmm4, xmm3, 0xbe */
    /* TODO: movlhps xmm5, xmm3 */
    xmm3 = xmm4; /* movaps */
    /* addps: xmm4 += xmm5 (packed 4xfloat) */
    /* subps: xmm5 -= xmm3 (packed 4xfloat) */
    xmm0 = xmm1; /* movaps */
    /* shufps xmm1, xmm2, 0x88 */
    MEMF(ebp) = xmm1; /* movaps */
    /* shufps xmm0, xmm2, 0xdd */
    MEMF(ebp + 0x10) = xmm0; /* movaps */
    xmm3 = xmm4; /* movaps */
    /* shufps xmm4, xmm5, 0x88 */
    /* shufps xmm3, xmm5, 0xdd */
    eax = MEM32(ebx + 8);
    xmm2 = MEMD(esi + eax * 4); /* movlps */
    xmm2 = MEMD(edi + eax * 4); /* movhps */
    xmm1 = MEMD(ecx + eax * 4); /* movlps */
    xmm1 = MEMD(edx + eax * 4); /* movhps */
    eax = MEM32(ebx + 0xC);
    xmm6 = MEMD(esi + eax * 4); /* movlps */
    xmm6 = MEMD(edi + eax * 4); /* movhps */
    xmm5 = MEMD(ecx + eax * 4); /* movlps */
    xmm5 = MEMD(edx + eax * 4); /* movhps */
    xmm0 = xmm2; /* movaps */
    /* subps: xmm2 -= xmm1 (packed 4xfloat) */
    /* xorps xmm2, MEMF(0x6554F0) */
    /* addps: xmm1 += xmm0 (packed 4xfloat) */
    xmm7 = xmm6; /* movaps */
    /* subps: xmm6 -= xmm5 (packed 4xfloat) */
    /* xorps xmm6, MEMF(0x6554F0) */
    /* addps: xmm5 += xmm7 (packed 4xfloat) */
    xmm0 = xmm1; /* movaps */
    /* shufps xmm1, xmm2, 0xbe */
    /* TODO: movlhps xmm0, xmm2 */
    xmm7 = xmm5; /* movaps */
    /* shufps xmm5, xmm6, 0xbe */
    /* TODO: movlhps xmm7, xmm6 */
    xmm2 = xmm1; /* movaps */
    /* addps: xmm1 += xmm0 (packed 4xfloat) */
    /* subps: xmm0 -= xmm2 (packed 4xfloat) */
    xmm6 = xmm5; /* movaps */
    /* addps: xmm5 += xmm7 (packed 4xfloat) */
    /* subps: xmm7 -= xmm6 (packed 4xfloat) */
    xmm2 = xmm1; /* movaps */
    /* shufps xmm2, xmm0, 0x88 */
    /* shufps xmm1, xmm0, 0xdd */
    xmm6 = xmm5; /* movaps */
    /* shufps xmm6, xmm7, 0x88 */
    /* shufps xmm5, xmm7, 0xdd */
    eax = MEM32(esp + 0x24);
    xmm0 = MEMF(eax); /* movaps */
    /* mulps: xmm0 *= xmm2 (packed 4xfloat) */
    xmm7 = MEMF(eax + 0x10); /* movaps */
    /* mulps: xmm2 *= xmm7 (packed 4xfloat) */
    /* mulps: xmm7 *= xmm1 (packed 4xfloat) */
    /* mulps: xmm1 *= MEMF(eax) (packed 4xfloat) */
    /* addps: xmm0 += xmm7 (packed 4xfloat) */
    /* subps: xmm1 -= xmm2 (packed 4xfloat) */
    xmm2 = MEMF(eax + 0x40); /* movaps */
    /* mulps: xmm2 *= xmm6 (packed 4xfloat) */
    xmm7 = MEMF(eax + 0x50); /* movaps */
    /* mulps: xmm6 *= xmm7 (packed 4xfloat) */
    /* mulps: xmm7 *= xmm5 (packed 4xfloat) */
    /* mulps: xmm5 *= MEMF(eax + 0x40) (packed 4xfloat) */
    /* addps: xmm2 += xmm7 (packed 4xfloat) */
    /* subps: xmm5 -= xmm6 (packed 4xfloat) */
    xmm6 = MEMF(eax + 0x20); /* movaps */
    /* mulps: xmm6 *= xmm4 (packed 4xfloat) */
    xmm7 = MEMF(eax + 0x30); /* movaps */
    /* mulps: xmm4 *= xmm7 (packed 4xfloat) */
    /* mulps: xmm7 *= xmm3 (packed 4xfloat) */
    /* mulps: xmm3 *= MEMF(eax + 0x20) (packed 4xfloat) */
    /* addps: xmm6 += xmm7 (packed 4xfloat) */
    /* subps: xmm3 -= xmm4 (packed 4xfloat) */
    xmm7 = xmm2; /* movaps */
    /* addps: xmm2 += xmm0 (packed 4xfloat) */
    /* subps: xmm0 -= xmm7 (packed 4xfloat) */
    xmm7 = xmm5; /* movaps */
    /* addps: xmm5 += xmm1 (packed 4xfloat) */
    /* subps: xmm1 -= xmm7 (packed 4xfloat) */
    xmm4 = MEMF(ebp); /* movaps */
    /* subps: xmm4 -= xmm6 (packed 4xfloat) */
    /* addps: xmm6 += MEMF(ebp) (packed 4xfloat) */
    xmm7 = xmm2; /* movaps */
    /* addps: xmm2 += xmm6 (packed 4xfloat) */
    MEMF(ebp) = xmm2; /* movaps */
    /* subps: xmm6 -= xmm7 (packed 4xfloat) */
    MEMF(ebp + 0x40) = xmm6; /* movaps */
    xmm2 = MEMF(ebp + 0x10); /* movaps */
    /* subps: xmm2 -= xmm3 (packed 4xfloat) */
    /* addps: xmm3 += MEMF(ebp + 0x10) (packed 4xfloat) */
    xmm7 = xmm5; /* movaps */
    /* addps: xmm5 += xmm3 (packed 4xfloat) */
    MEMF(ebp + 0x10) = xmm5; /* movaps */
    /* subps: xmm3 -= xmm7 (packed 4xfloat) */
    MEMF(ebp + 0x50) = xmm3; /* movaps */
    xmm7 = xmm4; /* movaps */
    /* subps: xmm4 -= xmm1 (packed 4xfloat) */
    MEMF(ebp + 0x20) = xmm4; /* movaps */
    /* addps: xmm7 += xmm1 (packed 4xfloat) */
    MEMF(ebp + 0x60) = xmm7; /* movaps */
    xmm7 = xmm2; /* movaps */
    /* addps: xmm2 += xmm0 (packed 4xfloat) */
    MEMF(ebp + 0x30) = xmm2; /* movaps */
    /* subps: xmm7 -= xmm0 (packed 4xfloat) */
    MEMF(ebp + 0x70) = xmm7; /* movaps */
    ebp = ebp + 0x80;
    eax = MEM32(ebx + 0x10);
    ebx = ebx + 0x10;
    if (CMP_G(eax, 0)) goto loc_00462D90; /* jg: greater (signed >) */

loc_00462F6D: ;
    ebp = MEM32(esp + 0x24);
    eax = MEM32(esp + 0x20);
    eax = eax >> 4;
    if (CMP_L(eax, 4)) goto loc_00463347; /* jl: less (signed <) */

loc_00462F81: ;
    eax = eax >> 2;
    ebx = eax;
    esi = MEM32(esp + 0x1C);
    /* nop */

loc_00462F90: ;
    edx = ebp + 0x60;
    ecx = 4;
    /* nop */
    /* nop */

loc_00462FA0: ;
    xmm0 = MEMF(esi + 0x100); /* movaps */
    xmm1 = MEMF(edx); /* movaps */
    /* mulps: xmm0 *= xmm1 (packed 4xfloat) */
    xmm6 = MEMF(esi + 0x110); /* movaps */
    /* mulps: xmm1 *= xmm6 (packed 4xfloat) */
    xmm7 = MEMF(edx + 0x10); /* movaps */
    /* mulps: xmm6 *= xmm7 (packed 4xfloat) */
    /* mulps: xmm7 *= MEMF(esi + 0x100) (packed 4xfloat) */
    /* addps: xmm0 += xmm6 (packed 4xfloat) */
    /* subps: xmm1 -= xmm7 (packed 4xfloat) */
    xmm4 = MEMF(esi + 0x180); /* movaps */
    xmm5 = MEMF(edx + 0x40); /* movaps */
    /* mulps: xmm4 *= xmm5 (packed 4xfloat) */
    xmm6 = MEMF(esi + 0x190); /* movaps */
    /* mulps: xmm5 *= xmm6 (packed 4xfloat) */
    xmm7 = MEMF(edx + 0x50); /* movaps */
    /* mulps: xmm6 *= xmm7 (packed 4xfloat) */
    /* mulps: xmm7 *= MEMF(esi + 0x180) (packed 4xfloat) */
    /* addps: xmm4 += xmm6 (packed 4xfloat) */
    /* subps: xmm5 -= xmm7 (packed 4xfloat) */
    xmm2 = MEMF(esi + 0x80); /* movaps */
    xmm3 = MEMF(edx + 0x20); /* movaps */
    /* mulps: xmm2 *= xmm3 (packed 4xfloat) */
    xmm6 = MEMF(esi + 0x90); /* movaps */
    /* mulps: xmm3 *= xmm6 (packed 4xfloat) */
    xmm7 = MEMF(edx + 0x30); /* movaps */
    /* mulps: xmm6 *= xmm7 (packed 4xfloat) */
    /* mulps: xmm7 *= MEMF(esi + 0x80) (packed 4xfloat) */
    /* addps: xmm2 += xmm6 (packed 4xfloat) */
    /* subps: xmm3 -= xmm7 (packed 4xfloat) */
    edx = edx + 0x60;
    xmm6 = xmm4; /* movaps */
    /* addps: xmm4 += xmm0 (packed 4xfloat) */
    /* subps: xmm0 -= xmm6 (packed 4xfloat) */
    xmm7 = xmm5; /* movaps */
    /* addps: xmm5 += xmm1 (packed 4xfloat) */
    /* subps: xmm1 -= xmm7 (packed 4xfloat) */
    xmm6 = MEMF(esi); /* movaps */
    xmm7 = xmm2; /* movaps */
    /* addps: xmm2 += xmm6 (packed 4xfloat) */
    /* subps: xmm6 -= xmm7 (packed 4xfloat) */
    xmm7 = xmm4; /* movaps */
    /* addps: xmm4 += xmm2 (packed 4xfloat) */
    MEMF(esi) = xmm4; /* movaps */
    /* subps: xmm2 -= xmm7 (packed 4xfloat) */
    MEMF(esi + 0x100) = xmm2; /* movaps */
    xmm4 = MEMF(esi + 0x10); /* movaps */
    /* subps: xmm4 -= xmm3 (packed 4xfloat) */
    /* addps: xmm3 += MEMF(esi + 0x10) (packed 4xfloat) */
    xmm7 = xmm5; /* movaps */
    /* addps: xmm5 += xmm3 (packed 4xfloat) */
    MEMF(esi + 0x10) = xmm5; /* movaps */
    /* subps: xmm3 -= xmm7 (packed 4xfloat) */
    MEMF(esi + 0x110) = xmm3; /* movaps */
    xmm7 = xmm6; /* movaps */
    /* subps: xmm6 -= xmm1 (packed 4xfloat) */
    MEMF(esi + 0x80) = xmm6; /* movaps */
    /* addps: xmm7 += xmm1 (packed 4xfloat) */
    MEMF(esi + 0x180) = xmm7; /* movaps */
    xmm5 = xmm4; /* movaps */
    /* addps: xmm4 += xmm0 (packed 4xfloat) */
    MEMF(esi + 0x90) = xmm4; /* movaps */
    /* subps: xmm5 -= xmm0 (packed 4xfloat) */
    MEMF(esi + 0x190) = xmm5; /* movaps */
    esi = esi + 0x20;
    ecx--;
    if (((int32_t)ecx > 0)) goto loc_00462FA0; /* jg: greater (signed >) */

loc_004630AE: ;
    esi = esi + 0x180;
    ebx--;
    if (((int32_t)ebx > 0)) goto loc_00462F90; /* jg: greater (signed >) */

loc_004630BB: ;
    if (CMP_L(eax, 4)) goto loc_00463347; /* jl: less (signed <) */

loc_004630C4: ;
    eax = eax >> 2;
    ebx = eax;
    esi = MEM32(esp + 0x1C);
    /* nop */

loc_004630D0: ;
    edx = ebp + 0x1E0;
    ecx = 0x10;
    eax = eax + 0;

loc_004630E0: ;
    xmm0 = MEMF(esi + 0x400); /* movaps */
    xmm1 = MEMF(edx); /* movaps */
    /* mulps: xmm0 *= xmm1 (packed 4xfloat) */
    xmm6 = MEMF(esi + 0x410); /* movaps */
    /* mulps: xmm1 *= xmm6 (packed 4xfloat) */
    xmm7 = MEMF(edx + 0x10); /* movaps */
    /* mulps: xmm6 *= xmm7 (packed 4xfloat) */
    /* mulps: xmm7 *= MEMF(esi + 0x400) (packed 4xfloat) */
    /* addps: xmm0 += xmm6 (packed 4xfloat) */
    /* subps: xmm1 -= xmm7 (packed 4xfloat) */
    xmm4 = MEMF(esi + 0x600); /* movaps */
    xmm5 = MEMF(edx + 0x40); /* movaps */
    /* mulps: xmm4 *= xmm5 (packed 4xfloat) */
    xmm6 = MEMF(esi + 0x610); /* movaps */
    /* mulps: xmm5 *= xmm6 (packed 4xfloat) */
    xmm7 = MEMF(edx + 0x50); /* movaps */
    /* mulps: xmm6 *= xmm7 (packed 4xfloat) */
    /* mulps: xmm7 *= MEMF(esi + 0x600) (packed 4xfloat) */
    /* addps: xmm4 += xmm6 (packed 4xfloat) */
    /* subps: xmm5 -= xmm7 (packed 4xfloat) */
    xmm2 = MEMF(esi + 0x200); /* movaps */
    xmm3 = MEMF(edx + 0x20); /* movaps */
    /* mulps: xmm2 *= xmm3 (packed 4xfloat) */
    xmm6 = MEMF(esi + 0x210); /* movaps */
    /* mulps: xmm3 *= xmm6 (packed 4xfloat) */
    xmm7 = MEMF(edx + 0x30); /* movaps */
    /* mulps: xmm6 *= xmm7 (packed 4xfloat) */
    /* mulps: xmm7 *= MEMF(esi + 0x200) (packed 4xfloat) */
    /* addps: xmm2 += xmm6 (packed 4xfloat) */
    /* subps: xmm3 -= xmm7 (packed 4xfloat) */
    edx = edx + 0x60;
    xmm6 = xmm4; /* movaps */
    /* addps: xmm4 += xmm0 (packed 4xfloat) */
    /* subps: xmm0 -= xmm6 (packed 4xfloat) */
    xmm7 = xmm5; /* movaps */
    /* addps: xmm5 += xmm1 (packed 4xfloat) */
    /* subps: xmm1 -= xmm7 (packed 4xfloat) */
    xmm6 = MEMF(esi); /* movaps */
    xmm7 = xmm2; /* movaps */
    /* addps: xmm2 += xmm6 (packed 4xfloat) */
    /* subps: xmm6 -= xmm7 (packed 4xfloat) */
    xmm7 = xmm4; /* movaps */
    /* addps: xmm4 += xmm2 (packed 4xfloat) */
    MEMF(esi) = xmm4; /* movaps */
    /* subps: xmm2 -= xmm7 (packed 4xfloat) */
    MEMF(esi + 0x400) = xmm2; /* movaps */
    xmm4 = MEMF(esi + 0x10); /* movaps */
    /* subps: xmm4 -= xmm3 (packed 4xfloat) */
    /* addps: xmm3 += MEMF(esi + 0x10) (packed 4xfloat) */
    xmm7 = xmm5; /* movaps */
    /* addps: xmm5 += xmm3 (packed 4xfloat) */
    MEMF(esi + 0x10) = xmm5; /* movaps */
    /* subps: xmm3 -= xmm7 (packed 4xfloat) */
    MEMF(esi + 0x410) = xmm3; /* movaps */
    xmm7 = xmm6; /* movaps */
    /* subps: xmm6 -= xmm1 (packed 4xfloat) */
    MEMF(esi + 0x200) = xmm6; /* movaps */
    /* addps: xmm7 += xmm1 (packed 4xfloat) */
    MEMF(esi + 0x600) = xmm7; /* movaps */
    xmm5 = xmm4; /* movaps */
    /* addps: xmm4 += xmm0 (packed 4xfloat) */
    MEMF(esi + 0x210) = xmm4; /* movaps */
    /* subps: xmm5 -= xmm0 (packed 4xfloat) */
    MEMF(esi + 0x610) = xmm5; /* movaps */
    esi = esi + 0x20;
    ecx--;
    if (((int32_t)ecx > 0)) goto loc_004630E0; /* jg: greater (signed >) */

loc_004631EE: ;
    esi = esi + 0x600;
    ebx--;
    if (((int32_t)ebx > 0)) goto loc_004630D0; /* jg: greater (signed >) */

loc_004631FB: ;
    if (CMP_L(eax, 4)) goto loc_00463347; /* jl: less (signed <) */

loc_00463204: ;
    eax = eax >> 2;
    ebx = eax;
    esi = MEM32(esp + 0x1C);
    /* nop */

loc_00463210: ;
    edx = ebp + 0x7E0;
    ecx = 0x40;
    eax = eax + 0;

loc_00463220: ;
    xmm0 = MEMF(esi + 0x1000); /* movaps */
    xmm1 = MEMF(edx); /* movaps */
    /* mulps: xmm0 *= xmm1 (packed 4xfloat) */
    xmm6 = MEMF(esi + 0x1010); /* movaps */
    /* mulps: xmm1 *= xmm6 (packed 4xfloat) */
    xmm7 = MEMF(edx + 0x10); /* movaps */
    /* mulps: xmm6 *= xmm7 (packed 4xfloat) */
    /* mulps: xmm7 *= MEMF(esi + 0x1000) (packed 4xfloat) */
    /* addps: xmm0 += xmm6 (packed 4xfloat) */
    /* subps: xmm1 -= xmm7 (packed 4xfloat) */
    xmm4 = MEMF(esi + 0x1800); /* movaps */
    xmm5 = MEMF(edx + 0x40); /* movaps */
    /* mulps: xmm4 *= xmm5 (packed 4xfloat) */
    xmm6 = MEMF(esi + 0x1810); /* movaps */
    /* mulps: xmm5 *= xmm6 (packed 4xfloat) */
    xmm7 = MEMF(edx + 0x50); /* movaps */
    /* mulps: xmm6 *= xmm7 (packed 4xfloat) */
    /* mulps: xmm7 *= MEMF(esi + 0x1800) (packed 4xfloat) */
    /* addps: xmm4 += xmm6 (packed 4xfloat) */
    /* subps: xmm5 -= xmm7 (packed 4xfloat) */
    xmm2 = MEMF(esi + 0x800); /* movaps */
    xmm3 = MEMF(edx + 0x20); /* movaps */
    /* mulps: xmm2 *= xmm3 (packed 4xfloat) */
    xmm6 = MEMF(esi + 0x810); /* movaps */
    /* mulps: xmm3 *= xmm6 (packed 4xfloat) */
    xmm7 = MEMF(edx + 0x30); /* movaps */
    /* mulps: xmm6 *= xmm7 (packed 4xfloat) */
    /* mulps: xmm7 *= MEMF(esi + 0x800) (packed 4xfloat) */
    /* addps: xmm2 += xmm6 (packed 4xfloat) */
    /* subps: xmm3 -= xmm7 (packed 4xfloat) */
    edx = edx + 0x60;
    /* TODO: prefetcht0 byte ptr [edx + 0x20] */
    /* TODO: prefetcht0 byte ptr [edx + 0x40] */
    /* TODO: prefetcht0 byte ptr [edx + 0x60] */
    xmm6 = xmm4; /* movaps */
    /* addps: xmm4 += xmm0 (packed 4xfloat) */
    /* subps: xmm0 -= xmm6 (packed 4xfloat) */
    xmm7 = xmm5; /* movaps */
    /* addps: xmm5 += xmm1 (packed 4xfloat) */
    /* subps: xmm1 -= xmm7 (packed 4xfloat) */
    xmm6 = MEMF(esi); /* movaps */
    xmm7 = xmm2; /* movaps */
    /* addps: xmm2 += xmm6 (packed 4xfloat) */
    /* subps: xmm6 -= xmm7 (packed 4xfloat) */
    xmm7 = xmm4; /* movaps */
    /* addps: xmm4 += xmm2 (packed 4xfloat) */
    MEMF(esi) = xmm4; /* movaps */
    /* subps: xmm2 -= xmm7 (packed 4xfloat) */
    MEMF(esi + 0x1000) = xmm2; /* movaps */
    xmm4 = MEMF(esi + 0x10); /* movaps */
    /* subps: xmm4 -= xmm3 (packed 4xfloat) */
    /* addps: xmm3 += MEMF(esi + 0x10) (packed 4xfloat) */
    xmm7 = xmm5; /* movaps */
    /* addps: xmm5 += xmm3 (packed 4xfloat) */
    MEMF(esi + 0x10) = xmm5; /* movaps */
    /* subps: xmm3 -= xmm7 (packed 4xfloat) */
    MEMF(esi + 0x1010) = xmm3; /* movaps */
    xmm7 = xmm6; /* movaps */
    /* subps: xmm6 -= xmm1 (packed 4xfloat) */
    MEMF(esi + 0x800) = xmm6; /* movaps */
    /* addps: xmm7 += xmm1 (packed 4xfloat) */
    MEMF(esi + 0x1800) = xmm7; /* movaps */
    xmm5 = xmm4; /* movaps */
    /* addps: xmm4 += xmm0 (packed 4xfloat) */
    MEMF(esi + 0x810) = xmm4; /* movaps */
    /* subps: xmm5 -= xmm0 (packed 4xfloat) */
    MEMF(esi + 0x1810) = xmm5; /* movaps */
    esi = esi + 0x20;
    ecx--;
    if (((int32_t)ecx > 0)) goto loc_00463220; /* jg: greater (signed >) */

loc_0046333A: ;
    esi = esi + 0x1800;
    ebx--;
    if (((int32_t)ebx > 0)) goto loc_00463210; /* jg: greater (signed >) */

loc_00463347: ;
    ebx = MEM32(esp + 0x20);
    esi = MEM32(esp + 0x1C);
    edi = MEM32(esp);
    if (TEST_NZ(edi, 0xF)) goto loc_004633A0; /* jne: not equal / not zero */

loc_0046335A: ;
    /* nop */

loc_00463360: ;
    xmm0 = MEMF(esi); /* movaps */
    xmm2 = MEMF(esi + 0x10); /* movaps */
    xmm1 = xmm0; /* movaps */
    /* unpcklps xmm0, xmm2 */
    /* unpckhps xmm1, xmm2 */
    xmm4 = MEMF(esi + 0x20); /* movaps */
    xmm6 = MEMF(esi + 0x30); /* movaps */
    MEMF(edi) = xmm0; /* movaps */
    xmm5 = xmm4; /* movaps */
    /* unpcklps xmm4, xmm6 */
    MEMF(edi + 0x10) = xmm1; /* movaps */
    /* unpckhps xmm5, xmm6 */
    MEMF(edi + 0x20) = xmm4; /* movaps */
    MEMF(edi + 0x30) = xmm5; /* movaps */
    esi = esi + 0x40;
    edi = edi + 0x40;
    ebx = ebx - 8;
    if (CMP_G((uint32_t)ebx + (uint32_t)8, (uint32_t)8)) goto loc_00463360; /* jg: greater (signed >) */

loc_0046339B: ;
    goto loc_004633EB;

    /* nop */

loc_004633A0: ;
    xmm0 = MEMF(esi); /* movaps */
    xmm2 = MEMF(esi + 0x10); /* movaps */
    xmm1 = xmm0; /* movaps */
    /* unpcklps xmm0, xmm2 */
    /* unpckhps xmm1, xmm2 */
    xmm4 = MEMF(esi + 0x20); /* movaps */
    MEMD(edi) = xmm0; /* movlps */
    MEMD(edi + 8) = xmm0; /* movhps */
    xmm6 = MEMF(esi + 0x30); /* movaps */
    xmm5 = xmm4; /* movaps */
    /* unpcklps xmm4, xmm6 */
    MEMD(edi + 0x10) = xmm1; /* movlps */
    MEMD(edi + 0x18) = xmm1; /* movhps */
    /* unpckhps xmm5, xmm6 */
    MEMD(edi + 0x20) = xmm4; /* movlps */
    MEMD(edi + 0x28) = xmm4; /* movhps */
    MEMD(edi + 0x30) = xmm5; /* movlps */
    MEMD(edi + 0x38) = xmm5; /* movhps */
    esi = esi + 0x40;
    edi = edi + 0x40;
    ebx = ebx - 8;
    if (CMP_G((uint32_t)ebx + (uint32_t)8, (uint32_t)8)) goto loc_004633A0; /* jg: greater (signed >) */

loc_004633EB: ;
    esp = esp + 4;
    POP32(esp, ebp);
    POP32(esp, edi);
    POP32(esp, esi);
    POP32(esp, ebx);
    esp += 4; return; /* ret */

}

/**
 * sub_00463400
 * Original: 0x00463400 - 0x00463FA3 (2979 bytes, 787 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00463400(void)
{
    uint32_t ebp;
    int _flags = 0; /* fallback flag var */
    float xmm0, xmm1, xmm2, xmm3, xmm4, xmm5, xmm6, xmm7;
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_00463400: ;
    PUSH32(esp, ebx);
    PUSH32(esp, esi);
    PUSH32(esp, edi);
    PUSH32(esp, ebp);
    esp = esp - 4;
    esi = MEM32(esp + 0x18);
    eax = MEM32(esp + 0x1C);
    ebp = MEM32(esp + 0x20);
    MEM32(esp) = esi;
    if (TEST_Z(esi, 0xF)) goto loc_00463425; /* je: equal / zero */

loc_0046341E: ;
    esi = MEM32(esp + 0x24);
    MEM32(esp) = esi;

loc_00463425: ;
    if (TEST_Z(eax, 0xAAAAAAAAu)) goto loc_004638D0; /* je: equal / zero */

loc_00463430: ;
    eax = eax >> 3;
    ebx = eax;
    edx = 0x6554C0;
    esi = MEM32(esp + 0x18);
    edi = MEM32(esp);
    /* nop */
    /* nop */

loc_00463450: ;
    xmm3 = MEMD(esi + 0x20); /* movlps */
    xmm3 = MEMD(esi + 0x30); /* movhps */
    xmm4 = MEMD(esi + 0x28); /* movlps */
    xmm4 = MEMD(esi + 0x38); /* movhps */
    xmm5 = xmm3; /* movaps */
    /* subps: xmm3 -= xmm4 (packed 4xfloat) */
    /* xorps xmm3, MEMF(0x6554F0) */
    /* addps: xmm4 += xmm5 (packed 4xfloat) */
    xmm0 = MEMD(esi); /* movlps */
    xmm0 = MEMD(esi + 0x10); /* movhps */
    xmm1 = MEMD(esi + 8); /* movlps */
    xmm1 = MEMD(esi + 0x18); /* movhps */
    xmm2 = xmm0; /* movaps */
    /* subps: xmm0 -= xmm1 (packed 4xfloat) */
    /* xorps xmm0, MEMF(0x6554F0) */
    /* addps: xmm1 += xmm2 (packed 4xfloat) */
    xmm5 = xmm4; /* movaps */
    /* shufps xmm4, xmm3, 0xbe */
    /* TODO: movlhps xmm5, xmm3 */
    xmm2 = xmm1; /* movaps */
    /* shufps xmm1, xmm0, 0xbe */
    /* TODO: movlhps xmm2, xmm0 */
    xmm3 = xmm4; /* movaps */
    /* addps: xmm4 += xmm5 (packed 4xfloat) */
    /* subps: xmm5 -= xmm3 (packed 4xfloat) */
    xmm0 = xmm1; /* movaps */
    /* addps: xmm1 += xmm2 (packed 4xfloat) */
    /* subps: xmm2 -= xmm0 (packed 4xfloat) */
    xmm3 = xmm4; /* movaps */
    /* shufps xmm4, xmm5, 0x88 */
    /* shufps xmm3, xmm5, 0xdd */
    xmm0 = xmm1; /* movaps */
    /* shufps xmm1, xmm2, 0x88 */
    /* shufps xmm0, xmm2, 0xdd */
    esi = esi + 0x40;
    xmm2 = MEMF(edx); /* movaps */
    /* mulps: xmm2 *= xmm4 (packed 4xfloat) */
    xmm5 = MEMF(edx + 0x10); /* movaps */
    /* mulps: xmm5 *= xmm3 (packed 4xfloat) */
    /* mulps: xmm4 *= MEMF(edx + 0x10) (packed 4xfloat) */
    /* mulps: xmm3 *= MEMF(edx) (packed 4xfloat) */
    /* addps: xmm2 += xmm5 (packed 4xfloat) */
    /* subps: xmm3 -= xmm4 (packed 4xfloat) */
    xmm4 = xmm1; /* movaps */
    /* addps: xmm4 += xmm2 (packed 4xfloat) */
    MEMF(edi) = xmm4; /* movaps */
    /* subps: xmm1 -= xmm2 (packed 4xfloat) */
    MEMF(edi + 0x20) = xmm1; /* movaps */
    xmm4 = xmm0; /* movaps */
    /* addps: xmm4 += xmm3 (packed 4xfloat) */
    MEMF(edi + 0x10) = xmm4; /* movaps */
    /* subps: xmm0 -= xmm3 (packed 4xfloat) */
    MEMF(edi + 0x30) = xmm0; /* movaps */
    edi = edi + 0x40;
    ebx--;
    if (((int32_t)ebx > 0)) goto loc_00463450; /* jg: greater (signed >) */

loc_00463513: ;
    if (CMP_L(eax, 4)) goto loc_00463E77; /* jl: less (signed <) */

loc_0046351C: ;
    eax = eax >> 2;
    ebx = eax;
    esi = MEM32(esp);
    /* nop */
    eax = eax + 0;

loc_00463530: ;
    edx = ebp;
    ecx = 2;
    /* nop */
    /* nop */

loc_00463540: ;
    xmm0 = MEMF(esi + 0x80); /* movaps */
    xmm1 = MEMF(edx); /* movaps */
    /* mulps: xmm0 *= xmm1 (packed 4xfloat) */
    xmm6 = MEMF(esi + 0x90); /* movaps */
    /* mulps: xmm1 *= xmm6 (packed 4xfloat) */
    xmm7 = MEMF(edx + 0x10); /* movaps */
    /* mulps: xmm6 *= xmm7 (packed 4xfloat) */
    /* mulps: xmm7 *= MEMF(esi + 0x80) (packed 4xfloat) */
    /* addps: xmm0 += xmm6 (packed 4xfloat) */
    /* subps: xmm1 -= xmm7 (packed 4xfloat) */
    xmm4 = MEMF(esi + 0xC0); /* movaps */
    xmm5 = MEMF(edx + 0x40); /* movaps */
    /* mulps: xmm4 *= xmm5 (packed 4xfloat) */
    xmm6 = MEMF(esi + 0xD0); /* movaps */
    /* mulps: xmm5 *= xmm6 (packed 4xfloat) */
    xmm7 = MEMF(edx + 0x50); /* movaps */
    /* mulps: xmm6 *= xmm7 (packed 4xfloat) */
    /* mulps: xmm7 *= MEMF(esi + 0xC0) (packed 4xfloat) */
    /* addps: xmm4 += xmm6 (packed 4xfloat) */
    /* subps: xmm5 -= xmm7 (packed 4xfloat) */
    xmm2 = MEMF(esi + 0x40); /* movaps */
    xmm3 = MEMF(edx + 0x20); /* movaps */
    /* mulps: xmm2 *= xmm3 (packed 4xfloat) */
    xmm6 = MEMF(esi + 0x50); /* movaps */
    /* mulps: xmm3 *= xmm6 (packed 4xfloat) */
    xmm7 = MEMF(edx + 0x30); /* movaps */
    /* mulps: xmm6 *= xmm7 (packed 4xfloat) */
    /* mulps: xmm7 *= MEMF(esi + 0x40) (packed 4xfloat) */
    /* addps: xmm2 += xmm6 (packed 4xfloat) */
    /* subps: xmm3 -= xmm7 (packed 4xfloat) */
    edx = edx + 0x60;
    xmm6 = xmm4; /* movaps */
    /* addps: xmm4 += xmm0 (packed 4xfloat) */
    /* subps: xmm0 -= xmm6 (packed 4xfloat) */
    xmm7 = xmm5; /* movaps */
    /* addps: xmm5 += xmm1 (packed 4xfloat) */
    /* subps: xmm1 -= xmm7 (packed 4xfloat) */
    xmm6 = MEMF(esi); /* movaps */
    xmm7 = xmm2; /* movaps */
    /* addps: xmm2 += xmm6 (packed 4xfloat) */
    /* subps: xmm6 -= xmm7 (packed 4xfloat) */
    xmm7 = xmm4; /* movaps */
    /* addps: xmm4 += xmm2 (packed 4xfloat) */
    MEMF(esi) = xmm4; /* movaps */
    /* subps: xmm2 -= xmm7 (packed 4xfloat) */
    MEMF(esi + 0x80) = xmm2; /* movaps */
    xmm4 = MEMF(esi + 0x10); /* movaps */
    /* subps: xmm4 -= xmm3 (packed 4xfloat) */
    /* addps: xmm3 += MEMF(esi + 0x10) (packed 4xfloat) */
    xmm7 = xmm5; /* movaps */
    /* addps: xmm5 += xmm3 (packed 4xfloat) */
    MEMF(esi + 0x10) = xmm5; /* movaps */
    /* subps: xmm3 -= xmm7 (packed 4xfloat) */
    MEMF(esi + 0x90) = xmm3; /* movaps */
    xmm7 = xmm6; /* movaps */
    /* subps: xmm6 -= xmm1 (packed 4xfloat) */
    MEMF(esi + 0x40) = xmm6; /* movaps */
    /* addps: xmm7 += xmm1 (packed 4xfloat) */
    MEMF(esi + 0xC0) = xmm7; /* movaps */
    xmm5 = xmm4; /* movaps */
    /* addps: xmm4 += xmm0 (packed 4xfloat) */
    MEMF(esi + 0x50) = xmm4; /* movaps */
    /* subps: xmm5 -= xmm0 (packed 4xfloat) */
    MEMF(esi + 0xD0) = xmm5; /* movaps */
    esi = esi + 0x20;
    ecx--;
    if (((int32_t)ecx > 0)) goto loc_00463540; /* jg: greater (signed >) */

loc_0046363F: ;
    esi = esi + 0xC0;
    ebx--;
    if (((int32_t)ebx > 0)) goto loc_00463530; /* jg: greater (signed >) */

loc_0046364C: ;
    if (CMP_L(eax, 4)) goto loc_00463E77; /* jl: less (signed <) */

loc_00463655: ;
    eax = eax >> 2;
    ebx = eax;
    esi = MEM32(esp);
    /* nop */

loc_00463660: ;
    edx = ebp + 0xC0;
    ecx = 8;
    eax = eax + 0;

loc_00463670: ;
    xmm0 = MEMF(esi + 0x200); /* movaps */
    xmm1 = MEMF(edx); /* movaps */
    /* mulps: xmm0 *= xmm1 (packed 4xfloat) */
    xmm6 = MEMF(esi + 0x210); /* movaps */
    /* mulps: xmm1 *= xmm6 (packed 4xfloat) */
    xmm7 = MEMF(edx + 0x10); /* movaps */
    /* mulps: xmm6 *= xmm7 (packed 4xfloat) */
    /* mulps: xmm7 *= MEMF(esi + 0x200) (packed 4xfloat) */
    /* addps: xmm0 += xmm6 (packed 4xfloat) */
    /* subps: xmm1 -= xmm7 (packed 4xfloat) */
    xmm4 = MEMF(esi + 0x300); /* movaps */
    xmm5 = MEMF(edx + 0x40); /* movaps */
    /* mulps: xmm4 *= xmm5 (packed 4xfloat) */
    xmm6 = MEMF(esi + 0x310); /* movaps */
    /* mulps: xmm5 *= xmm6 (packed 4xfloat) */
    xmm7 = MEMF(edx + 0x50); /* movaps */
    /* mulps: xmm6 *= xmm7 (packed 4xfloat) */
    /* mulps: xmm7 *= MEMF(esi + 0x300) (packed 4xfloat) */
    /* addps: xmm4 += xmm6 (packed 4xfloat) */
    /* subps: xmm5 -= xmm7 (packed 4xfloat) */
    xmm2 = MEMF(esi + 0x100); /* movaps */
    xmm3 = MEMF(edx + 0x20); /* movaps */
    /* mulps: xmm2 *= xmm3 (packed 4xfloat) */
    xmm6 = MEMF(esi + 0x110); /* movaps */
    /* mulps: xmm3 *= xmm6 (packed 4xfloat) */
    xmm7 = MEMF(edx + 0x30); /* movaps */
    /* mulps: xmm6 *= xmm7 (packed 4xfloat) */
    /* mulps: xmm7 *= MEMF(esi + 0x100) (packed 4xfloat) */
    /* addps: xmm2 += xmm6 (packed 4xfloat) */
    /* subps: xmm3 -= xmm7 (packed 4xfloat) */
    edx = edx + 0x60;
    xmm6 = xmm4; /* movaps */
    /* addps: xmm4 += xmm0 (packed 4xfloat) */
    /* subps: xmm0 -= xmm6 (packed 4xfloat) */
    xmm7 = xmm5; /* movaps */
    /* addps: xmm5 += xmm1 (packed 4xfloat) */
    /* subps: xmm1 -= xmm7 (packed 4xfloat) */
    xmm6 = MEMF(esi); /* movaps */
    xmm7 = xmm2; /* movaps */
    /* addps: xmm2 += xmm6 (packed 4xfloat) */
    /* subps: xmm6 -= xmm7 (packed 4xfloat) */
    xmm7 = xmm4; /* movaps */
    /* addps: xmm4 += xmm2 (packed 4xfloat) */
    MEMF(esi) = xmm4; /* movaps */
    /* subps: xmm2 -= xmm7 (packed 4xfloat) */
    MEMF(esi + 0x200) = xmm2; /* movaps */
    xmm4 = MEMF(esi + 0x10); /* movaps */
    /* subps: xmm4 -= xmm3 (packed 4xfloat) */
    /* addps: xmm3 += MEMF(esi + 0x10) (packed 4xfloat) */
    xmm7 = xmm5; /* movaps */
    /* addps: xmm5 += xmm3 (packed 4xfloat) */
    MEMF(esi + 0x10) = xmm5; /* movaps */
    /* subps: xmm3 -= xmm7 (packed 4xfloat) */
    MEMF(esi + 0x210) = xmm3; /* movaps */
    xmm7 = xmm6; /* movaps */
    /* subps: xmm6 -= xmm1 (packed 4xfloat) */
    MEMF(esi + 0x100) = xmm6; /* movaps */
    /* addps: xmm7 += xmm1 (packed 4xfloat) */
    MEMF(esi + 0x300) = xmm7; /* movaps */
    xmm5 = xmm4; /* movaps */
    /* addps: xmm4 += xmm0 (packed 4xfloat) */
    MEMF(esi + 0x110) = xmm4; /* movaps */
    /* subps: xmm5 -= xmm0 (packed 4xfloat) */
    MEMF(esi + 0x310) = xmm5; /* movaps */
    esi = esi + 0x20;
    ecx--;
    if (((int32_t)ecx > 0)) goto loc_00463670; /* jg: greater (signed >) */

loc_0046377E: ;
    esi = esi + 0x300;
    ebx--;
    if (((int32_t)ebx > 0)) goto loc_00463660; /* jg: greater (signed >) */

loc_0046378B: ;
    if (CMP_L(eax, 4)) goto loc_00463E77; /* jl: less (signed <) */

loc_00463794: ;
    eax = eax >> 2;
    ebx = eax;
    esi = MEM32(esp);
    /* nop */

loc_004637A0: ;
    edx = ebp + 0x3C0;
    ecx = 0x20;
    eax = eax + 0;

loc_004637B0: ;
    xmm0 = MEMF(esi + 0x800); /* movaps */
    xmm1 = MEMF(edx); /* movaps */
    /* mulps: xmm0 *= xmm1 (packed 4xfloat) */
    xmm6 = MEMF(esi + 0x810); /* movaps */
    /* mulps: xmm1 *= xmm6 (packed 4xfloat) */
    xmm7 = MEMF(edx + 0x10); /* movaps */
    /* mulps: xmm6 *= xmm7 (packed 4xfloat) */
    /* mulps: xmm7 *= MEMF(esi + 0x800) (packed 4xfloat) */
    /* addps: xmm0 += xmm6 (packed 4xfloat) */
    /* subps: xmm1 -= xmm7 (packed 4xfloat) */
    xmm4 = MEMF(esi + 0xC00); /* movaps */
    xmm5 = MEMF(edx + 0x40); /* movaps */
    /* mulps: xmm4 *= xmm5 (packed 4xfloat) */
    xmm6 = MEMF(esi + 0xC10); /* movaps */
    /* mulps: xmm5 *= xmm6 (packed 4xfloat) */
    xmm7 = MEMF(edx + 0x50); /* movaps */
    /* mulps: xmm6 *= xmm7 (packed 4xfloat) */
    /* mulps: xmm7 *= MEMF(esi + 0xC00) (packed 4xfloat) */
    /* addps: xmm4 += xmm6 (packed 4xfloat) */
    /* subps: xmm5 -= xmm7 (packed 4xfloat) */
    xmm2 = MEMF(esi + 0x400); /* movaps */
    xmm3 = MEMF(edx + 0x20); /* movaps */
    /* mulps: xmm2 *= xmm3 (packed 4xfloat) */
    xmm6 = MEMF(esi + 0x410); /* movaps */
    /* mulps: xmm3 *= xmm6 (packed 4xfloat) */
    xmm7 = MEMF(edx + 0x30); /* movaps */
    /* mulps: xmm6 *= xmm7 (packed 4xfloat) */
    /* mulps: xmm7 *= MEMF(esi + 0x400) (packed 4xfloat) */
    /* addps: xmm2 += xmm6 (packed 4xfloat) */
    /* subps: xmm3 -= xmm7 (packed 4xfloat) */
    edx = edx + 0x60;
    xmm6 = xmm4; /* movaps */
    /* addps: xmm4 += xmm0 (packed 4xfloat) */
    /* subps: xmm0 -= xmm6 (packed 4xfloat) */
    xmm7 = xmm5; /* movaps */
    /* addps: xmm5 += xmm1 (packed 4xfloat) */
    /* subps: xmm1 -= xmm7 (packed 4xfloat) */
    xmm6 = MEMF(esi); /* movaps */
    xmm7 = xmm2; /* movaps */
    /* addps: xmm2 += xmm6 (packed 4xfloat) */
    /* subps: xmm6 -= xmm7 (packed 4xfloat) */
    xmm7 = xmm4; /* movaps */
    /* addps: xmm4 += xmm2 (packed 4xfloat) */
    MEMF(esi) = xmm4; /* movaps */
    /* subps: xmm2 -= xmm7 (packed 4xfloat) */
    MEMF(esi + 0x800) = xmm2; /* movaps */
    xmm4 = MEMF(esi + 0x10); /* movaps */
    /* subps: xmm4 -= xmm3 (packed 4xfloat) */
    /* addps: xmm3 += MEMF(esi + 0x10) (packed 4xfloat) */
    xmm7 = xmm5; /* movaps */
    /* addps: xmm5 += xmm3 (packed 4xfloat) */
    MEMF(esi + 0x10) = xmm5; /* movaps */
    /* subps: xmm3 -= xmm7 (packed 4xfloat) */
    MEMF(esi + 0x810) = xmm3; /* movaps */
    xmm7 = xmm6; /* movaps */
    /* subps: xmm6 -= xmm1 (packed 4xfloat) */
    MEMF(esi + 0x400) = xmm6; /* movaps */
    /* addps: xmm7 += xmm1 (packed 4xfloat) */
    MEMF(esi + 0xC00) = xmm7; /* movaps */
    xmm5 = xmm4; /* movaps */
    /* addps: xmm4 += xmm0 (packed 4xfloat) */
    MEMF(esi + 0x410) = xmm4; /* movaps */
    /* subps: xmm5 -= xmm0 (packed 4xfloat) */
    MEMF(esi + 0xC10) = xmm5; /* movaps */
    esi = esi + 0x20;
    ecx--;
    if (((int32_t)ecx > 0)) goto loc_004637B0; /* jg: greater (signed >) */

loc_004638BE: ;
    esi = esi + 0xC00;
    ebx--;
    if (((int32_t)ebx > 0)) goto loc_004637A0; /* jg: greater (signed >) */

loc_004638CB: ;
    goto loc_00463E77;

loc_004638D0: ;
    eax = eax >> 4;
    ebx = eax;
    edx = ebp;
    esi = MEM32(esp + 0x18);
    edi = MEM32(esp);
    /* nop */

loc_004638E0: ;
    xmm0 = MEMD(esi); /* movlps */
    xmm0 = MEMD(esi + 0x10); /* movhps */
    xmm1 = MEMD(esi + 8); /* movlps */
    xmm1 = MEMD(esi + 0x18); /* movhps */
    xmm2 = xmm0; /* movaps */
    /* subps: xmm0 -= xmm1 (packed 4xfloat) */
    /* xorps xmm0, MEMF(0x6554F0) */
    /* addps: xmm1 += xmm2 (packed 4xfloat) */
    xmm3 = MEMD(esi + 0x20); /* movlps */
    xmm3 = MEMD(esi + 0x30); /* movhps */
    xmm4 = MEMD(esi + 0x28); /* movlps */
    xmm4 = MEMD(esi + 0x38); /* movhps */
    xmm5 = xmm3; /* movaps */
    /* subps: xmm3 -= xmm4 (packed 4xfloat) */
    /* xorps xmm3, MEMF(0x6554F0) */
    /* addps: xmm4 += xmm5 (packed 4xfloat) */
    xmm2 = xmm1; /* movaps */
    /* shufps xmm1, xmm0, 0xbe */
    /* TODO: movlhps xmm2, xmm0 */
    xmm0 = xmm1; /* movaps */
    /* addps: xmm1 += xmm2 (packed 4xfloat) */
    /* subps: xmm2 -= xmm0 (packed 4xfloat) */
    xmm5 = xmm4; /* movaps */
    /* shufps xmm4, xmm3, 0xbe */
    /* TODO: movlhps xmm5, xmm3 */
    xmm3 = xmm4; /* movaps */
    /* addps: xmm4 += xmm5 (packed 4xfloat) */
    /* subps: xmm5 -= xmm3 (packed 4xfloat) */
    xmm0 = xmm1; /* movaps */
    /* shufps xmm1, xmm2, 0x88 */
    MEMF(edi) = xmm1; /* movaps */
    /* shufps xmm0, xmm2, 0xdd */
    MEMF(edi + 0x10) = xmm0; /* movaps */
    xmm3 = xmm4; /* movaps */
    /* shufps xmm4, xmm5, 0x88 */
    /* shufps xmm3, xmm5, 0xdd */
    xmm2 = MEMD(esi + 0x40); /* movlps */
    xmm2 = MEMD(esi + 0x50); /* movhps */
    xmm1 = MEMD(esi + 0x48); /* movlps */
    xmm1 = MEMD(esi + 0x58); /* movhps */
    xmm0 = xmm2; /* movaps */
    /* subps: xmm2 -= xmm1 (packed 4xfloat) */
    /* xorps xmm2, MEMF(0x6554F0) */
    /* addps: xmm1 += xmm0 (packed 4xfloat) */
    xmm6 = MEMD(esi + 0x60); /* movlps */
    xmm6 = MEMD(esi + 0x70); /* movhps */
    xmm5 = MEMD(esi + 0x68); /* movlps */
    xmm5 = MEMD(esi + 0x78); /* movhps */
    xmm7 = xmm6; /* movaps */
    /* subps: xmm6 -= xmm5 (packed 4xfloat) */
    /* xorps xmm6, MEMF(0x6554F0) */
    /* addps: xmm5 += xmm7 (packed 4xfloat) */
    xmm0 = xmm1; /* movaps */
    /* shufps xmm1, xmm2, 0xbe */
    /* TODO: movlhps xmm0, xmm2 */
    xmm7 = xmm5; /* movaps */
    /* shufps xmm5, xmm6, 0xbe */
    /* TODO: movlhps xmm7, xmm6 */
    xmm2 = xmm1; /* movaps */
    /* addps: xmm1 += xmm0 (packed 4xfloat) */
    /* subps: xmm0 -= xmm2 (packed 4xfloat) */
    xmm6 = xmm5; /* movaps */
    /* addps: xmm5 += xmm7 (packed 4xfloat) */
    /* subps: xmm7 -= xmm6 (packed 4xfloat) */
    xmm2 = xmm1; /* movaps */
    /* shufps xmm2, xmm0, 0x88 */
    /* shufps xmm1, xmm0, 0xdd */
    xmm6 = xmm5; /* movaps */
    /* shufps xmm6, xmm7, 0x88 */
    /* shufps xmm5, xmm7, 0xdd */
    xmm0 = MEMF(edx); /* movaps */
    /* mulps: xmm0 *= xmm2 (packed 4xfloat) */
    xmm7 = MEMF(edx + 0x10); /* movaps */
    /* mulps: xmm2 *= xmm7 (packed 4xfloat) */
    /* mulps: xmm7 *= xmm1 (packed 4xfloat) */
    /* mulps: xmm1 *= MEMF(edx) (packed 4xfloat) */
    /* addps: xmm0 += xmm7 (packed 4xfloat) */
    /* subps: xmm1 -= xmm2 (packed 4xfloat) */
    xmm2 = MEMF(edx + 0x40); /* movaps */
    /* mulps: xmm2 *= xmm6 (packed 4xfloat) */
    xmm7 = MEMF(edx + 0x50); /* movaps */
    /* mulps: xmm6 *= xmm7 (packed 4xfloat) */
    /* mulps: xmm7 *= xmm5 (packed 4xfloat) */
    /* mulps: xmm5 *= MEMF(edx + 0x40) (packed 4xfloat) */
    /* addps: xmm2 += xmm7 (packed 4xfloat) */
    /* subps: xmm5 -= xmm6 (packed 4xfloat) */
    xmm6 = MEMF(edx + 0x20); /* movaps */
    /* mulps: xmm6 *= xmm4 (packed 4xfloat) */
    xmm7 = MEMF(edx + 0x30); /* movaps */
    /* mulps: xmm4 *= xmm7 (packed 4xfloat) */
    /* mulps: xmm7 *= xmm3 (packed 4xfloat) */
    /* mulps: xmm3 *= MEMF(edx + 0x20) (packed 4xfloat) */
    /* addps: xmm6 += xmm7 (packed 4xfloat) */
    /* subps: xmm3 -= xmm4 (packed 4xfloat) */
    xmm7 = xmm2; /* movaps */
    /* addps: xmm2 += xmm0 (packed 4xfloat) */
    /* subps: xmm0 -= xmm7 (packed 4xfloat) */
    xmm7 = xmm5; /* movaps */
    /* addps: xmm5 += xmm1 (packed 4xfloat) */
    /* subps: xmm1 -= xmm7 (packed 4xfloat) */
    xmm4 = MEMF(edi); /* movaps */
    /* subps: xmm4 -= xmm6 (packed 4xfloat) */
    /* addps: xmm6 += MEMF(edi) (packed 4xfloat) */
    xmm7 = xmm2; /* movaps */
    /* addps: xmm2 += xmm6 (packed 4xfloat) */
    MEMF(edi) = xmm2; /* movaps */
    /* subps: xmm6 -= xmm7 (packed 4xfloat) */
    MEMF(edi + 0x40) = xmm6; /* movaps */
    xmm2 = MEMF(edi + 0x10); /* movaps */
    /* subps: xmm2 -= xmm3 (packed 4xfloat) */
    /* addps: xmm3 += MEMF(edi + 0x10) (packed 4xfloat) */
    xmm7 = xmm5; /* movaps */
    /* addps: xmm5 += xmm3 (packed 4xfloat) */
    MEMF(edi + 0x10) = xmm5; /* movaps */
    /* subps: xmm3 -= xmm7 (packed 4xfloat) */
    MEMF(edi + 0x50) = xmm3; /* movaps */
    xmm7 = xmm4; /* movaps */
    /* subps: xmm4 -= xmm1 (packed 4xfloat) */
    MEMF(edi + 0x20) = xmm4; /* movaps */
    /* addps: xmm7 += xmm1 (packed 4xfloat) */
    MEMF(edi + 0x60) = xmm7; /* movaps */
    xmm7 = xmm2; /* movaps */
    /* addps: xmm2 += xmm0 (packed 4xfloat) */
    MEMF(edi + 0x30) = xmm2; /* movaps */
    /* subps: xmm7 -= xmm0 (packed 4xfloat) */
    MEMF(edi + 0x70) = xmm7; /* movaps */
    esi = esi + 0x80;
    edi = edi + 0x80;
    ebx--;
    if (((int32_t)ebx > 0)) goto loc_004638E0; /* jg: greater (signed >) */

loc_00463AA9: ;
    if (CMP_L(eax, 4)) goto loc_00463E77; /* jl: less (signed <) */

loc_00463AB2: ;
    eax = eax >> 2;
    ebx = eax;
    esi = MEM32(esp);
    /* nop */

loc_00463AC0: ;
    edx = ebp + 0x60;
    ecx = 4;
    /* nop */
    /* nop */

loc_00463AD0: ;
    xmm0 = MEMF(esi + 0x100); /* movaps */
    xmm1 = MEMF(edx); /* movaps */
    /* mulps: xmm0 *= xmm1 (packed 4xfloat) */
    xmm6 = MEMF(esi + 0x110); /* movaps */
    /* mulps: xmm1 *= xmm6 (packed 4xfloat) */
    xmm7 = MEMF(edx + 0x10); /* movaps */
    /* mulps: xmm6 *= xmm7 (packed 4xfloat) */
    /* mulps: xmm7 *= MEMF(esi + 0x100) (packed 4xfloat) */
    /* addps: xmm0 += xmm6 (packed 4xfloat) */
    /* subps: xmm1 -= xmm7 (packed 4xfloat) */
    xmm4 = MEMF(esi + 0x180); /* movaps */
    xmm5 = MEMF(edx + 0x40); /* movaps */
    /* mulps: xmm4 *= xmm5 (packed 4xfloat) */
    xmm6 = MEMF(esi + 0x190); /* movaps */
    /* mulps: xmm5 *= xmm6 (packed 4xfloat) */
    xmm7 = MEMF(edx + 0x50); /* movaps */
    /* mulps: xmm6 *= xmm7 (packed 4xfloat) */
    /* mulps: xmm7 *= MEMF(esi + 0x180) (packed 4xfloat) */
    /* addps: xmm4 += xmm6 (packed 4xfloat) */
    /* subps: xmm5 -= xmm7 (packed 4xfloat) */
    xmm2 = MEMF(esi + 0x80); /* movaps */
    xmm3 = MEMF(edx + 0x20); /* movaps */
    /* mulps: xmm2 *= xmm3 (packed 4xfloat) */
    xmm6 = MEMF(esi + 0x90); /* movaps */
    /* mulps: xmm3 *= xmm6 (packed 4xfloat) */
    xmm7 = MEMF(edx + 0x30); /* movaps */
    /* mulps: xmm6 *= xmm7 (packed 4xfloat) */
    /* mulps: xmm7 *= MEMF(esi + 0x80) (packed 4xfloat) */
    /* addps: xmm2 += xmm6 (packed 4xfloat) */
    /* subps: xmm3 -= xmm7 (packed 4xfloat) */
    edx = edx + 0x60;
    xmm6 = xmm4; /* movaps */
    /* addps: xmm4 += xmm0 (packed 4xfloat) */
    /* subps: xmm0 -= xmm6 (packed 4xfloat) */
    xmm7 = xmm5; /* movaps */
    /* addps: xmm5 += xmm1 (packed 4xfloat) */
    /* subps: xmm1 -= xmm7 (packed 4xfloat) */
    xmm6 = MEMF(esi); /* movaps */
    xmm7 = xmm2; /* movaps */
    /* addps: xmm2 += xmm6 (packed 4xfloat) */
    /* subps: xmm6 -= xmm7 (packed 4xfloat) */
    xmm7 = xmm4; /* movaps */
    /* addps: xmm4 += xmm2 (packed 4xfloat) */
    MEMF(esi) = xmm4; /* movaps */
    /* subps: xmm2 -= xmm7 (packed 4xfloat) */
    MEMF(esi + 0x100) = xmm2; /* movaps */
    xmm4 = MEMF(esi + 0x10); /* movaps */
    /* subps: xmm4 -= xmm3 (packed 4xfloat) */
    /* addps: xmm3 += MEMF(esi + 0x10) (packed 4xfloat) */
    xmm7 = xmm5; /* movaps */
    /* addps: xmm5 += xmm3 (packed 4xfloat) */
    MEMF(esi + 0x10) = xmm5; /* movaps */
    /* subps: xmm3 -= xmm7 (packed 4xfloat) */
    MEMF(esi + 0x110) = xmm3; /* movaps */
    xmm7 = xmm6; /* movaps */
    /* subps: xmm6 -= xmm1 (packed 4xfloat) */
    MEMF(esi + 0x80) = xmm6; /* movaps */
    /* addps: xmm7 += xmm1 (packed 4xfloat) */
    MEMF(esi + 0x180) = xmm7; /* movaps */
    xmm5 = xmm4; /* movaps */
    /* addps: xmm4 += xmm0 (packed 4xfloat) */
    MEMF(esi + 0x90) = xmm4; /* movaps */
    /* subps: xmm5 -= xmm0 (packed 4xfloat) */
    MEMF(esi + 0x190) = xmm5; /* movaps */
    esi = esi + 0x20;
    ecx--;
    if (((int32_t)ecx > 0)) goto loc_00463AD0; /* jg: greater (signed >) */

loc_00463BDE: ;
    esi = esi + 0x180;
    ebx--;
    if (((int32_t)ebx > 0)) goto loc_00463AC0; /* jg: greater (signed >) */

loc_00463BEB: ;
    if (CMP_L(eax, 4)) goto loc_00463E77; /* jl: less (signed <) */

loc_00463BF4: ;
    eax = eax >> 2;
    ebx = eax;
    esi = MEM32(esp);
    /* nop */

loc_00463C00: ;
    edx = ebp + 0x1E0;
    ecx = 0x10;
    eax = eax + 0;

loc_00463C10: ;
    xmm0 = MEMF(esi + 0x400); /* movaps */
    xmm1 = MEMF(edx); /* movaps */
    /* mulps: xmm0 *= xmm1 (packed 4xfloat) */
    xmm6 = MEMF(esi + 0x410); /* movaps */
    /* mulps: xmm1 *= xmm6 (packed 4xfloat) */
    xmm7 = MEMF(edx + 0x10); /* movaps */
    /* mulps: xmm6 *= xmm7 (packed 4xfloat) */
    /* mulps: xmm7 *= MEMF(esi + 0x400) (packed 4xfloat) */
    /* addps: xmm0 += xmm6 (packed 4xfloat) */
    /* subps: xmm1 -= xmm7 (packed 4xfloat) */
    xmm4 = MEMF(esi + 0x600); /* movaps */
    xmm5 = MEMF(edx + 0x40); /* movaps */
    /* mulps: xmm4 *= xmm5 (packed 4xfloat) */
    xmm6 = MEMF(esi + 0x610); /* movaps */
    /* mulps: xmm5 *= xmm6 (packed 4xfloat) */
    xmm7 = MEMF(edx + 0x50); /* movaps */
    /* mulps: xmm6 *= xmm7 (packed 4xfloat) */
    /* mulps: xmm7 *= MEMF(esi + 0x600) (packed 4xfloat) */
    /* addps: xmm4 += xmm6 (packed 4xfloat) */
    /* subps: xmm5 -= xmm7 (packed 4xfloat) */
    xmm2 = MEMF(esi + 0x200); /* movaps */
    xmm3 = MEMF(edx + 0x20); /* movaps */
    /* mulps: xmm2 *= xmm3 (packed 4xfloat) */
    xmm6 = MEMF(esi + 0x210); /* movaps */
    /* mulps: xmm3 *= xmm6 (packed 4xfloat) */
    xmm7 = MEMF(edx + 0x30); /* movaps */
    /* mulps: xmm6 *= xmm7 (packed 4xfloat) */
    /* mulps: xmm7 *= MEMF(esi + 0x200) (packed 4xfloat) */
    /* addps: xmm2 += xmm6 (packed 4xfloat) */
    /* subps: xmm3 -= xmm7 (packed 4xfloat) */
    edx = edx + 0x60;
    xmm6 = xmm4; /* movaps */
    /* addps: xmm4 += xmm0 (packed 4xfloat) */
    /* subps: xmm0 -= xmm6 (packed 4xfloat) */
    xmm7 = xmm5; /* movaps */
    /* addps: xmm5 += xmm1 (packed 4xfloat) */
    /* subps: xmm1 -= xmm7 (packed 4xfloat) */
    xmm6 = MEMF(esi); /* movaps */
    xmm7 = xmm2; /* movaps */
    /* addps: xmm2 += xmm6 (packed 4xfloat) */
    /* subps: xmm6 -= xmm7 (packed 4xfloat) */
    xmm7 = xmm4; /* movaps */
    /* addps: xmm4 += xmm2 (packed 4xfloat) */
    MEMF(esi) = xmm4; /* movaps */
    /* subps: xmm2 -= xmm7 (packed 4xfloat) */
    MEMF(esi + 0x400) = xmm2; /* movaps */
    xmm4 = MEMF(esi + 0x10); /* movaps */
    /* subps: xmm4 -= xmm3 (packed 4xfloat) */
    /* addps: xmm3 += MEMF(esi + 0x10) (packed 4xfloat) */
    xmm7 = xmm5; /* movaps */
    /* addps: xmm5 += xmm3 (packed 4xfloat) */
    MEMF(esi + 0x10) = xmm5; /* movaps */
    /* subps: xmm3 -= xmm7 (packed 4xfloat) */
    MEMF(esi + 0x410) = xmm3; /* movaps */
    xmm7 = xmm6; /* movaps */
    /* subps: xmm6 -= xmm1 (packed 4xfloat) */
    MEMF(esi + 0x200) = xmm6; /* movaps */
    /* addps: xmm7 += xmm1 (packed 4xfloat) */
    MEMF(esi + 0x600) = xmm7; /* movaps */
    xmm5 = xmm4; /* movaps */
    /* addps: xmm4 += xmm0 (packed 4xfloat) */
    MEMF(esi + 0x210) = xmm4; /* movaps */
    /* subps: xmm5 -= xmm0 (packed 4xfloat) */
    MEMF(esi + 0x610) = xmm5; /* movaps */
    esi = esi + 0x20;
    ecx--;
    if (((int32_t)ecx > 0)) goto loc_00463C10; /* jg: greater (signed >) */

loc_00463D1E: ;
    esi = esi + 0x600;
    ebx--;
    if (((int32_t)ebx > 0)) goto loc_00463C00; /* jg: greater (signed >) */

loc_00463D2B: ;
    if (CMP_L(eax, 4)) goto loc_00463E77; /* jl: less (signed <) */

loc_00463D34: ;
    eax = eax >> 2;
    ebx = eax;
    esi = MEM32(esp);
    /* nop */

loc_00463D40: ;
    edx = ebp + 0x7E0;
    ecx = 0x40;
    eax = eax + 0;

loc_00463D50: ;
    xmm0 = MEMF(esi + 0x1000); /* movaps */
    xmm1 = MEMF(edx); /* movaps */
    /* mulps: xmm0 *= xmm1 (packed 4xfloat) */
    xmm6 = MEMF(esi + 0x1010); /* movaps */
    /* mulps: xmm1 *= xmm6 (packed 4xfloat) */
    xmm7 = MEMF(edx + 0x10); /* movaps */
    /* mulps: xmm6 *= xmm7 (packed 4xfloat) */
    /* mulps: xmm7 *= MEMF(esi + 0x1000) (packed 4xfloat) */
    /* addps: xmm0 += xmm6 (packed 4xfloat) */
    /* subps: xmm1 -= xmm7 (packed 4xfloat) */
    xmm4 = MEMF(esi + 0x1800); /* movaps */
    xmm5 = MEMF(edx + 0x40); /* movaps */
    /* mulps: xmm4 *= xmm5 (packed 4xfloat) */
    xmm6 = MEMF(esi + 0x1810); /* movaps */
    /* mulps: xmm5 *= xmm6 (packed 4xfloat) */
    xmm7 = MEMF(edx + 0x50); /* movaps */
    /* mulps: xmm6 *= xmm7 (packed 4xfloat) */
    /* mulps: xmm7 *= MEMF(esi + 0x1800) (packed 4xfloat) */
    /* addps: xmm4 += xmm6 (packed 4xfloat) */
    /* subps: xmm5 -= xmm7 (packed 4xfloat) */
    xmm2 = MEMF(esi + 0x800); /* movaps */
    xmm3 = MEMF(edx + 0x20); /* movaps */
    /* mulps: xmm2 *= xmm3 (packed 4xfloat) */
    xmm6 = MEMF(esi + 0x810); /* movaps */
    /* mulps: xmm3 *= xmm6 (packed 4xfloat) */
    xmm7 = MEMF(edx + 0x30); /* movaps */
    /* mulps: xmm6 *= xmm7 (packed 4xfloat) */
    /* mulps: xmm7 *= MEMF(esi + 0x800) (packed 4xfloat) */
    /* addps: xmm2 += xmm6 (packed 4xfloat) */
    /* subps: xmm3 -= xmm7 (packed 4xfloat) */
    edx = edx + 0x60;
    /* TODO: prefetcht0 byte ptr [edx + 0x20] */
    /* TODO: prefetcht0 byte ptr [edx + 0x40] */
    /* TODO: prefetcht0 byte ptr [edx + 0x60] */
    xmm6 = xmm4; /* movaps */
    /* addps: xmm4 += xmm0 (packed 4xfloat) */
    /* subps: xmm0 -= xmm6 (packed 4xfloat) */
    xmm7 = xmm5; /* movaps */
    /* addps: xmm5 += xmm1 (packed 4xfloat) */
    /* subps: xmm1 -= xmm7 (packed 4xfloat) */
    xmm6 = MEMF(esi); /* movaps */
    xmm7 = xmm2; /* movaps */
    /* addps: xmm2 += xmm6 (packed 4xfloat) */
    /* subps: xmm6 -= xmm7 (packed 4xfloat) */
    xmm7 = xmm4; /* movaps */
    /* addps: xmm4 += xmm2 (packed 4xfloat) */
    MEMF(esi) = xmm4; /* movaps */
    /* subps: xmm2 -= xmm7 (packed 4xfloat) */
    MEMF(esi + 0x1000) = xmm2; /* movaps */
    xmm4 = MEMF(esi + 0x10); /* movaps */
    /* subps: xmm4 -= xmm3 (packed 4xfloat) */
    /* addps: xmm3 += MEMF(esi + 0x10) (packed 4xfloat) */
    xmm7 = xmm5; /* movaps */
    /* addps: xmm5 += xmm3 (packed 4xfloat) */
    MEMF(esi + 0x10) = xmm5; /* movaps */
    /* subps: xmm3 -= xmm7 (packed 4xfloat) */
    MEMF(esi + 0x1010) = xmm3; /* movaps */
    xmm7 = xmm6; /* movaps */
    /* subps: xmm6 -= xmm1 (packed 4xfloat) */
    MEMF(esi + 0x800) = xmm6; /* movaps */
    /* addps: xmm7 += xmm1 (packed 4xfloat) */
    MEMF(esi + 0x1800) = xmm7; /* movaps */
    xmm5 = xmm4; /* movaps */
    /* addps: xmm4 += xmm0 (packed 4xfloat) */
    MEMF(esi + 0x810) = xmm4; /* movaps */
    /* subps: xmm5 -= xmm0 (packed 4xfloat) */
    MEMF(esi + 0x1810) = xmm5; /* movaps */
    esi = esi + 0x20;
    ecx--;
    if (((int32_t)ecx > 0)) goto loc_00463D50; /* jg: greater (signed >) */

loc_00463E6A: ;
    esi = esi + 0x1800;
    ebx--;
    if (((int32_t)ebx > 0)) goto loc_00463D40; /* jg: greater (signed >) */

loc_00463E77: ;
    ebx = MEM32(esp + 0x28);
    if (CMP_EQ(ebx, 1)) goto loc_00463EF2; /* je: equal / zero */

loc_00463E80: ;
    esi = MEM32(esp);
    edi = MEM32(esp + 0x18);
    if (CMP_EQ(edi, esi)) goto loc_00463F9B; /* je: equal / zero */

loc_00463E8F: ;
    eax = MEM32(esp + 0x1C);
    eax = eax << 1;
    ebx = eax;
    esi = MEM32(esp);
    edi = MEM32(esp + 0x18);
    if (TEST_NZ(edi, 7)) goto loc_00463ED0; /* jne: not equal / not zero */

loc_00463EA6: ;
    /* nop */
    /* nop */

loc_00463EB0: ;
    xmm0 = MEMF(esi); /* movaps */
    MEMD(edi) = xmm0; /* movlps */
    MEMD(edi + 8) = xmm0; /* movhps */
    esi = esi + 0x10;
    edi = edi + 0x10;
    ebx = ebx - 4;
    if (CMP_G((uint32_t)ebx + (uint32_t)4, (uint32_t)4)) goto loc_00463EB0; /* jg: greater (signed >) */

loc_00463EC5: ;
    goto loc_00463EED;

    /* nop */
    edi = edi;

loc_00463ED0: ;
    xmm0 = MEMD(esi + 4); /* movlps */
    MEMD(edi + 4) = xmm0; /* movlps */
    ecx = MEM32(esi);
    MEM32(edi) = ecx;
    ecx = MEM32(esi + 0xC);
    MEM32(edi + 0xC) = ecx;
    esi = esi + 0x10;
    edi = edi + 0x10;
    ebx = ebx - 4;
    if (CMP_G((uint32_t)ebx + (uint32_t)4, (uint32_t)4)) goto loc_00463ED0; /* jg: greater (signed >) */

loc_00463EED: ;
    goto loc_00463F9B;

loc_00463EF2: ;
    ebx = MEM32(esp + 0x1C);
    esi = MEM32(esp);
    edi = MEM32(esp + 0x18);
    if (TEST_NZ(edi, 0xF)) goto loc_00463F50; /* jne: not equal / not zero */

loc_00463F05: ;
    /* nop */
    /* nop */

loc_00463F10: ;
    xmm0 = MEMF(esi); /* movaps */
    xmm2 = MEMF(esi + 0x10); /* movaps */
    xmm1 = xmm0; /* movaps */
    /* unpcklps xmm0, xmm2 */
    /* unpckhps xmm1, xmm2 */
    xmm4 = MEMF(esi + 0x20); /* movaps */
    xmm6 = MEMF(esi + 0x30); /* movaps */
    MEMF(edi) = xmm0; /* movaps */
    xmm5 = xmm4; /* movaps */
    /* unpcklps xmm4, xmm6 */
    MEMF(edi + 0x10) = xmm1; /* movaps */
    /* unpckhps xmm5, xmm6 */
    MEMF(edi + 0x20) = xmm4; /* movaps */
    MEMF(edi + 0x30) = xmm5; /* movaps */
    esi = esi + 0x40;
    edi = edi + 0x40;
    ebx = ebx - 8;
    if (CMP_G((uint32_t)ebx + (uint32_t)8, (uint32_t)8)) goto loc_00463F10; /* jg: greater (signed >) */

loc_00463F4B: ;
    goto loc_00463F9B;

    /* nop */

loc_00463F50: ;
    xmm0 = MEMF(esi); /* movaps */
    xmm2 = MEMF(esi + 0x10); /* movaps */
    xmm1 = xmm0; /* movaps */
    /* unpcklps xmm0, xmm2 */
    /* unpckhps xmm1, xmm2 */
    xmm4 = MEMF(esi + 0x20); /* movaps */
    MEMD(edi) = xmm0; /* movlps */
    MEMD(edi + 8) = xmm0; /* movhps */
    xmm6 = MEMF(esi + 0x30); /* movaps */
    xmm5 = xmm4; /* movaps */
    /* unpcklps xmm4, xmm6 */
    MEMD(edi + 0x10) = xmm1; /* movlps */
    MEMD(edi + 0x18) = xmm1; /* movhps */
    /* unpckhps xmm5, xmm6 */
    MEMD(edi + 0x20) = xmm4; /* movlps */
    MEMD(edi + 0x28) = xmm4; /* movhps */
    MEMD(edi + 0x30) = xmm5; /* movlps */
    MEMD(edi + 0x38) = xmm5; /* movhps */
    esi = esi + 0x40;
    edi = edi + 0x40;
    ebx = ebx - 8;
    if (CMP_G((uint32_t)ebx + (uint32_t)8, (uint32_t)8)) goto loc_00463F50; /* jg: greater (signed >) */

loc_00463F9B: ;
    esp = esp + 4;
    POP32(esp, ebp);
    POP32(esp, edi);
    POP32(esp, esi);
    POP32(esp, ebx);
    esp += 4; return; /* ret */

}

/**
 * sub_00466CD0
 * Original: 0x00466CD0 - 0x00466D5F (143 bytes, 41 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00466CD0(void)
{
    int _flags = 0; /* fallback flag var */
    float xmm0, xmm1, xmm7;

loc_00466CD0: ;
    eax = MEM32(esp + 8);
    ecx = MEM32(esp + 0xC);
    xmm7 = MEMF(esp + 4); /* movss */
    /* shufps xmm7, xmm7, 0 */
    edx = eax + ecx * 4;
    if (TEST_NZ(edx, 0xF)) goto loc_00466D5B; /* jne: not equal / not zero */

loc_00466CF1: ;
    ecx = ecx - 8;
    if (CMP_L((uint32_t)ecx + (uint32_t)8, (uint32_t)8)) goto loc_00466D3D; /* jl: less (signed <) */

loc_00466CF6: ;
    if (CMP_GE(ecx, 0x1000)) goto loc_00466D20; /* jge: greater or equal (signed >=) */

loc_00466CFE: ;
    edi = edi;

loc_00466D00: ;
    xmm0 = MEMF(eax + ecx * 4); /* movaps */
    /* mulps: xmm0 *= xmm7 (packed 4xfloat) */
    xmm1 = MEMF(eax + ecx * 4 + 0x10); /* movaps */
    /* mulps: xmm1 *= xmm7 (packed 4xfloat) */
    MEMF(eax + ecx * 4) = xmm0; /* movaps */
    MEMF(eax + ecx * 4 + 0x10) = xmm1; /* movaps */
    ecx = ecx - 8;
    if (CMP_GE((uint32_t)ecx + (uint32_t)8, (uint32_t)8)) goto loc_00466D00; /* jge: greater or equal (signed >=) */

loc_00466D1D: ;
    goto loc_00466D3D;

    /* nop */

loc_00466D20: ;
    xmm0 = MEMF(eax + ecx * 4); /* movups */
    /* mulps: xmm0 *= xmm7 (packed 4xfloat) */
    xmm1 = MEMF(eax + ecx * 4 + 0x10); /* movups */
    /* mulps: xmm1 *= xmm7 (packed 4xfloat) */
    MEMF(eax + ecx * 4) = xmm0; /* movups */
    MEMF(eax + ecx * 4 + 0x10) = xmm1; /* movups */
    ecx = ecx - 8;
    if (CMP_GE((uint32_t)ecx + (uint32_t)8, (uint32_t)8)) goto loc_00466D20; /* jge: greater or equal (signed >=) */

loc_00466D3D: ;
    ecx = ecx + 7;
    if (((int32_t)ecx < 0)) goto loc_00466D5E; /* jl: less (signed <) */

loc_00466D42: ;
    xmm0 = MEMF(eax + ecx * 4); /* movss */
    xmm0 = xmm0 * xmm7; /* mulss */
    edx = eax + ecx * 4;
    MEMF(eax + ecx * 4) = xmm0; /* movss */
    if (TEST_Z(edx, 0xF)) goto loc_00466CF1; /* je: equal / zero */

loc_00466D5B: ;
    ecx--;
    if (((int32_t)ecx >= 0)) goto loc_00466D42; /* jge: greater or equal (signed >=) */

loc_00466D5E: ;
    esp += 4; return; /* ret */

}

/**
 * sub_00466F80
 * Original: 0x00466F80 - 0x004671E4 (612 bytes, 187 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00466F80(void)
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

loc_00466F80: ;
    PUSH32(esp, esi);
    PUSH32(esp, edi);
    eax = MEM32(esp + 0x10);
    edx = MEM32(esp + 0x14);
    if (CMP_LE(eax, 1)) goto loc_004671E1; /* jle: less or equal (signed <=) */

loc_00466F93: ;
    if (CMP_NE(edx, 1)) goto loc_004670C4; /* jne: not equal / not zero */

loc_00466F9C: ;
    esi = MEM32(esp + 0xC);
    edx = MEM32(esp + 0x18);
    ecx = esi + eax * 4;
    if (CMP_EQ(eax, 2)) goto loc_00467077; /* je: equal / zero */

loc_00466FB0: ;
    edi = esi + eax * 8;
    if (CMP_G(eax, 4)) goto loc_00466FC6; /* jg: greater (signed >) */

loc_00466FB8: ;
    goto loc_00467083;

    /* nop */

loc_00466FC0: ;
    MEMD(esi) = xmm0; /* movhps */
    MEMD(edi) = xmm5; /* movhps */

loc_00466FC6: ;
    xmm0 = MEMD(esi + 8); /* movlps */
    xmm0 = MEMD(esi + 0x10); /* movhps */
    xmm1 = xmm0; /* movaps */
    xmm2 = MEMD(esi + 0x18); /* movlps */
    xmm2 = MEMD(esi + 0x20); /* movhps */
    /* shufps xmm0, xmm2, 0x88 */
    /* shufps xmm1, xmm2, 0xdd */
    xmm3 = MEMD(edi + -8); /* movlps */
    xmm3 = MEMD(edi + -16); /* movhps */
    xmm4 = xmm3; /* movaps */
    xmm5 = MEMD(edi + -24); /* movlps */
    xmm5 = MEMD(edi + -32); /* movhps */
    /* shufps xmm3, xmm5, 0x88 */
    /* shufps xmm4, xmm5, 0xdd */
    xmm2 = xmm0; /* movaps */
    /* subps: xmm0 -= xmm3 (packed 4xfloat) */
    xmm6 = MEMF(edx); /* movaps */
    xmm5 = xmm4; /* movaps */
    /* addps: xmm4 += xmm1 (packed 4xfloat) */
    /* mulps: xmm6 *= xmm0 (packed 4xfloat) */
    xmm7 = MEMF(edx + 0x10); /* movaps */
    /* mulps: xmm0 *= xmm7 (packed 4xfloat) */
    /* mulps: xmm7 *= xmm4 (packed 4xfloat) */
    /* mulps: xmm4 *= MEMF(edx) (packed 4xfloat) */
    /* subps: xmm7 -= xmm6 (packed 4xfloat) */
    /* addps: xmm4 += xmm0 (packed 4xfloat) */
    /* TODO: prefetcht0 byte ptr [esi + 0x48] */
    /* TODO: prefetcht0 byte ptr [edi - 0x60] */
    /* TODO: prefetchnta byte ptr [edx + 0x40] */
    xmm6 = xmm7; /* movaps */
    /* subps: xmm7 -= xmm5 (packed 4xfloat) */
    /* addps: xmm3 += xmm4 (packed 4xfloat) */
    /* subps: xmm2 -= xmm4 (packed 4xfloat) */
    xmm0 = xmm3; /* movaps */
    edx = edx + 0x20;
    /* unpcklps xmm3, xmm7 */
    /* subps: xmm6 -= xmm1 (packed 4xfloat) */
    MEMD(esi + 8) = xmm3; /* movlps */
    MEMD(esi + 0x10) = xmm3; /* movhps */
    /* unpckhps xmm0, xmm7 */
    MEMD(esi + 0x18) = xmm0; /* movlps */
    esi = esi + 0x20;
    xmm5 = xmm2; /* movaps */
    /* unpcklps xmm2, xmm6 */
    MEMD(edi + -8) = xmm2; /* movlps */
    MEMD(edi + -16) = xmm2; /* movhps */
    /* unpckhps xmm5, xmm6 */
    MEMD(edi + -24) = xmm5; /* movlps */
    edi = edi - 0x20;
    if (CMP_NE(esi, ecx)) goto loc_00466FC0; /* jne: not equal / not zero */

loc_00467077: ;
    MEM32(ecx + 4) = MEM32(ecx + 4) ^ 0x80000000u;
    goto loc_004671E1;

loc_00467083: ;
    fp_push(MEMF(edx + 0xC)); /* fld float */
    fp_push(MEMF(esi + 0xC)); /* fld float */
    fp_st1() += fp_top(); fp_pop(); /* fadd */
    fp_st1() *= fp_top(); fp_pop(); /* fmul */
    fp_push(MEMF(edx + 8)); /* fld float */
    fp_st1() *= fp_top(); fp_pop(); /* fmul */
    fp_push(MEMF(esi + 8)); /* fld float */
    fp_st1() -= fp_top(); fp_pop(); /* fsub */
    fp_st1() *= fp_top(); fp_pop(); /* fmul */
    fp_st1() *= fp_top(); fp_pop(); /* fmul */
    fp_st1() += fp_top(); fp_pop(); /* faddp */
    fp_st1() -= fp_top(); fp_pop(); /* fsubp */
    fp_push(MEMF(esi + 8)); /* fld float */
    fp_st1() -= fp_top(); fp_pop(); /* fsub */
    { double _t = fp_top(); fp_top() = fp_st1(); fp_st1() = _t; } /* fxch */
    fp_st1() += fp_top(); fp_pop(); /* fadd */
    MEMF(esi + 8) = (float)fp_top(); fp_popp(); /* fstp */
    MEMF(esi + 0x18) = (float)fp_top(); fp_popp(); /* fstp */
    /* fld st(0) */
    fp_st1() -= fp_top(); fp_pop(); /* fsub */
    { double _t = fp_top(); fp_top() = fp_st1(); fp_st1() = _t; } /* fxch */
    fp_st1() -= fp_top(); fp_pop(); /* fsub */
    MEMF(esi + 0xC) = (float)fp_top(); fp_popp(); /* fstp */
    MEMF(esi + 0x1C) = (float)fp_top(); fp_popp(); /* fstp */
    goto loc_00467077;

loc_004670C4: ;
    esi = MEM32(esp + 0xC);
    edx = MEM32(esp + 0x18);
    ecx = esi + eax * 4;
    if (CMP_EQ(eax, 2)) goto loc_004671E1; /* je: equal / zero */

loc_004670D8: ;
    edi = esi + eax * 8;
    if (CMP_G(eax, 4)) goto loc_004670F6; /* jg: greater (signed >) */

loc_004670E0: ;
    goto loc_004671A6;

    /* nop */
    /* nop */

loc_004670F0: ;
    MEMD(esi) = xmm0; /* movhps */
    MEMD(edi) = xmm6; /* movhps */

loc_004670F6: ;
    xmm0 = MEMD(esi + 8); /* movlps */
    xmm0 = MEMD(esi + 0x10); /* movhps */
    xmm1 = xmm0; /* movaps */
    xmm2 = MEMD(esi + 0x18); /* movlps */
    xmm2 = MEMD(esi + 0x20); /* movhps */
    /* shufps xmm0, xmm2, 0x88 */
    /* shufps xmm1, xmm2, 0xdd */
    xmm3 = MEMD(edi + -8); /* movlps */
    xmm3 = MEMD(edi + -16); /* movhps */
    xmm4 = xmm3; /* movaps */
    xmm5 = MEMD(edi + -24); /* movlps */
    xmm5 = MEMD(edi + -32); /* movhps */
    /* shufps xmm3, xmm5, 0x88 */
    /* shufps xmm4, xmm5, 0xdd */
    xmm2 = xmm0; /* movaps */
    /* subps: xmm0 -= xmm3 (packed 4xfloat) */
    xmm6 = MEMF(edx); /* movaps */
    xmm5 = xmm4; /* movaps */
    /* addps: xmm4 += xmm1 (packed 4xfloat) */
    /* mulps: xmm6 *= xmm0 (packed 4xfloat) */
    xmm7 = MEMF(edx + 0x10); /* movaps */
    /* mulps: xmm0 *= xmm7 (packed 4xfloat) */
    /* mulps: xmm7 *= xmm4 (packed 4xfloat) */
    /* mulps: xmm4 *= MEMF(edx) (packed 4xfloat) */
    /* addps: xmm7 += xmm6 (packed 4xfloat) */
    /* subps: xmm4 -= xmm0 (packed 4xfloat) */
    /* TODO: prefetcht0 byte ptr [esi + 0x48] */
    /* TODO: prefetcht0 byte ptr [edi - 0x60] */
    /* TODO: prefetchnta byte ptr [edx + 0x40] */
    /* subps: xmm1 -= xmm7 (packed 4xfloat) */
    /* addps: xmm2 += xmm4 (packed 4xfloat) */
    /* subps: xmm3 -= xmm4 (packed 4xfloat) */
    xmm0 = xmm2; /* movaps */
    edx = edx + 0x20;
    /* unpcklps xmm2, xmm1 */
    /* subps: xmm5 -= xmm7 (packed 4xfloat) */
    MEMD(esi + 8) = xmm2; /* movlps */
    MEMD(esi + 0x10) = xmm2; /* movhps */
    /* unpckhps xmm0, xmm1 */
    MEMD(esi + 0x18) = xmm0; /* movlps */
    esi = esi + 0x20;
    xmm6 = xmm3; /* movaps */
    /* unpcklps xmm3, xmm5 */
    MEMD(edi + -8) = xmm3; /* movlps */
    MEMD(edi + -16) = xmm3; /* movhps */
    /* unpckhps xmm6, xmm5 */
    MEMD(edi + -24) = xmm6; /* movlps */
    edi = edi - 0x20;
    if (CMP_NE(esi, ecx)) goto loc_004670F0; /* jne: not equal / not zero */

loc_004671A4: ;
    goto loc_004671E1;

loc_004671A6: ;
    fp_push(MEMF(edx + 0xC)); /* fld float */
    fp_push(MEMF(esi + 0xC)); /* fld float */
    fp_st1() += fp_top(); fp_pop(); /* fadd */
    fp_st1() *= fp_top(); fp_pop(); /* fmul */
    fp_push(MEMF(edx + 8)); /* fld float */
    fp_st1() *= fp_top(); fp_pop(); /* fmul */
    fp_push(MEMF(esi + 8)); /* fld float */
    fp_st1() -= fp_top(); fp_pop(); /* fsub */
    fp_st1() *= fp_top(); fp_pop(); /* fmul */
    fp_st1() *= fp_top(); fp_pop(); /* fmul */
    fp_st1() -= fp_top(); fp_pop(); /* fsubp */
    fp_st1() += fp_top(); fp_pop(); /* faddp */
    fp_push(MEMF(esi + 8)); /* fld float */
    fp_st1() += fp_top(); fp_pop(); /* fadd */
    MEMF(esi + 8) = (float)fp_top(); fp_popp(); /* fstp */
    /* FPU: fsubr dword ptr [esi + 0x18] */
    MEMF(esi + 0x18) = (float)fp_top(); fp_popp(); /* fstp */
    fp_push(MEMF(esi + 0xC)); /* fld float */
    fp_st1() -= fp_top(); fp_pop(); /* fsub */
    MEMF(esi + 0xC) = (float)fp_top(); fp_popp(); /* fstp */
    /* FPU: fsubr dword ptr [esi + 0x1c] */
    MEMF(esi + 0x1C) = (float)fp_top(); fp_popp(); /* fstp */

loc_004671E1: ;
    POP32(esp, edi);
    POP32(esp, esi);
    esp += 4; return; /* ret */

    #undef fp_push
    #undef fp_pop
    #undef fp_popp
    #undef fp_top
    #undef fp_st1
}

/**
 * sub_004671F0
 * Original: 0x004671F0 - 0x004674AF (703 bytes, 220 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_004671F0(void)
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

loc_004671F0: ;
    PUSH32(esp, ebx);
    PUSH32(esp, esi);
    PUSH32(esp, edi);
    PUSH32(esp, ebp);
    eax = MEM32(esp + 0x1C);
    edx = MEM32(esp + 0x20);
    if (CMP_LE(eax, 1)) goto loc_004674AA; /* jle: less or equal (signed <=) */

loc_00467205: ;
    if (CMP_NE(edx, 1)) goto loc_00467362; /* jne: not equal / not zero */

loc_0046720E: ;
    esi = MEM32(esp + 0x14);
    ebx = MEM32(esp + 0x18);
    edx = MEM32(esp + 0x24);
    ecx = esi + eax * 4;
    ebp = ebx + eax * 4;
    xmm0 = MEMD(ecx); /* movlps */
    /* mulps: xmm0 *= MEMF(0x655510) (packed 4xfloat) */
    MEMD(ebp) = xmm0; /* movlps */
    if (CMP_EQ(eax, 2)) goto loc_004674AA; /* je: equal / zero */

loc_00467237: ;
    edx = MEM32(esp + 0x24);
    edi = esi + eax * 8;
    ebp = ebx + eax * 8;
    if (CMP_G(eax, 4)) goto loc_00467257; /* jg: greater (signed >) */

loc_00467246: ;
    goto loc_0046731C;

    eax = eax + 0;

loc_00467250: ;
    MEMD(ebx) = xmm0; /* movhps */
    MEMD(ebp) = xmm7; /* movhps */

loc_00467257: ;
    xmm0 = MEMD(esi + 8); /* movlps */
    xmm0 = MEMD(esi + 0x10); /* movhps */
    xmm1 = xmm0; /* movaps */
    xmm2 = MEMD(esi + 0x18); /* movlps */
    xmm2 = MEMD(esi + 0x20); /* movhps */
    /* shufps xmm0, xmm2, 0x88 */
    /* shufps xmm1, xmm2, 0xdd */
    xmm3 = MEMD(edi + -8); /* movlps */
    xmm3 = MEMD(edi + -16); /* movhps */
    xmm4 = xmm3; /* movaps */
    xmm5 = MEMD(edi + -24); /* movlps */
    xmm5 = MEMD(edi + -32); /* movhps */
    /* shufps xmm3, xmm5, 0x88 */
    /* shufps xmm4, xmm5, 0xdd */
    xmm2 = xmm0; /* movaps */
    /* subps: xmm0 -= xmm3 (packed 4xfloat) */
    /* addps: xmm2 += xmm3 (packed 4xfloat) */
    xmm5 = xmm1; /* movaps */
    /* addps: xmm5 += xmm4 (packed 4xfloat) */
    /* subps: xmm1 -= xmm4 (packed 4xfloat) */
    xmm6 = MEMF(edx); /* movaps */
    /* mulps: xmm6 *= xmm0 (packed 4xfloat) */
    xmm7 = MEMF(edx + 0x10); /* movaps */
    /* mulps: xmm0 *= xmm7 (packed 4xfloat) */
    /* mulps: xmm7 *= xmm5 (packed 4xfloat) */
    /* mulps: xmm5 *= MEMF(edx) (packed 4xfloat) */
    /* subps: xmm6 -= xmm7 (packed 4xfloat) */
    /* addps: xmm0 += xmm5 (packed 4xfloat) */
    /* TODO: prefetcht0 byte ptr [esi + 0x68] */
    /* TODO: prefetcht0 byte ptr [edi - 0x80] */
    /* TODO: prefetchnta byte ptr [edx + 0x60] */
    esi = esi + 0x20;
    edi = edi - 0x20;
    xmm3 = xmm2; /* movaps */
    /* subps: xmm2 -= xmm0 (packed 4xfloat) */
    /* addps: xmm3 += xmm0 (packed 4xfloat) */
    xmm5 = xmm1; /* movaps */
    /* addps: xmm1 += xmm6 (packed 4xfloat) */
    /* subps: xmm6 -= xmm5 (packed 4xfloat) */
    xmm0 = xmm2; /* movaps */
    /* unpcklps xmm2, xmm1 */
    MEMD(ebx + 8) = xmm2; /* movlps */
    MEMD(ebx + 0x10) = xmm2; /* movhps */
    /* unpckhps xmm0, xmm1 */
    MEMD(ebx + 0x18) = xmm0; /* movlps */
    edx = edx + 0x20;
    xmm7 = xmm3; /* movaps */
    ebx = ebx + 0x20;
    /* unpcklps xmm3, xmm6 */
    MEMD(ebp + -8) = xmm3; /* movlps */
    MEMD(ebp + -16) = xmm3; /* movhps */
    /* unpckhps xmm7, xmm6 */
    MEMD(ebp + -24) = xmm7; /* movlps */
    ebp = ebp - 0x20;
    if (CMP_NE(esi, ecx)) goto loc_00467250; /* jne: not equal / not zero */

loc_00467317: ;
    goto loc_004674AA;

loc_0046731C: ;
    fp_push(MEMF(esi + 0xC)); /* fld float */
    fp_push(MEMF(esi + 8)); /* fld float */
    fp_push(MEMF(edx + 0xC)); /* fld float */
    fp_push(MEMF(esi + 0x1C)); /* fld float */
    fp_st1() -= fp_top(); fp_pop(); /* fsub */
    fp_st1() += fp_top(); fp_pop(); /* fadd */
    fp_st1() *= fp_top(); fp_pop(); /* fmul */
    fp_push(MEMF(edx + 8)); /* fld float */
    fp_st1() *= fp_top(); fp_pop(); /* fmul */
    fp_push(MEMF(esi + 0x18)); /* fld float */
    fp_st1() += fp_top(); fp_pop(); /* fadd */
    /* FPU: fsubr dword ptr [esi + 8] */
    fp_st1() *= fp_top(); fp_pop(); /* fmul */
    fp_st1() *= fp_top(); fp_pop(); /* fmul */
    fp_st1() += fp_top(); fp_pop(); /* faddp */
    /* FPU: fsubrp st(2) */
    /* fld st(2) */
    fp_st1() -= fp_top(); fp_pop(); /* fsub */
    MEMF(ebx + 8) = (float)fp_top(); fp_popp(); /* fstp */
    fp_st1() += fp_top(); fp_pop(); /* faddp */
    /* fld st(2) */
    fp_st1() += fp_top(); fp_pop(); /* fadd */
    MEMF(ebx + 0xC) = (float)fp_top(); fp_popp(); /* fstp */
    /* FPU: fsubrp st(2) */
    MEMF(ebx + 0x18) = (float)fp_top(); fp_popp(); /* fstp */
    MEMF(ebx + 0x1C) = (float)fp_top(); fp_popp(); /* fstp */
    goto loc_004674AA;

loc_00467362: ;
    esi = MEM32(esp + 0x14);
    ebx = MEM32(esp + 0x18);
    edx = MEM32(esp + 0x24);
    ecx = esi + eax * 4;
    ebp = ebx + eax * 4;
    xmm0 = MEMD(ecx); /* movlps */
    /* mulps: xmm0 *= MEMF(0x655520) (packed 4xfloat) */
    MEMD(ebp) = xmm0; /* movlps */
    if (CMP_EQ(eax, 2)) goto loc_004674AA; /* je: equal / zero */

loc_0046738B: ;
    edx = MEM32(esp + 0x24);
    edi = esi + eax * 8;
    ebp = ebx + eax * 8;
    if (CMP_G(eax, 4)) goto loc_004673A7; /* jg: greater (signed >) */

loc_0046739A: ;
    goto loc_00467469;

    /* nop */

loc_004673A0: ;
    MEMD(ebx) = xmm0; /* movhps */
    MEMD(ebp) = xmm6; /* movhps */

loc_004673A7: ;
    xmm0 = MEMD(esi + 8); /* movlps */
    xmm0 = MEMD(esi + 0x10); /* movhps */
    xmm1 = xmm0; /* movaps */
    xmm2 = MEMD(esi + 0x18); /* movlps */
    xmm2 = MEMD(esi + 0x20); /* movhps */
    /* shufps xmm0, xmm2, 0x88 */
    /* shufps xmm1, xmm2, 0xdd */
    xmm3 = MEMD(edi + -8); /* movlps */
    xmm3 = MEMD(edi + -16); /* movhps */
    xmm4 = xmm3; /* movaps */
    xmm5 = MEMD(edi + -24); /* movlps */
    xmm5 = MEMD(edi + -32); /* movhps */
    /* shufps xmm3, xmm5, 0x88 */
    /* shufps xmm4, xmm5, 0xdd */
    xmm2 = xmm0; /* movaps */
    /* subps: xmm0 -= xmm3 (packed 4xfloat) */
    /* addps: xmm2 += xmm3 (packed 4xfloat) */
    xmm5 = xmm1; /* movaps */
    /* addps: xmm5 += xmm4 (packed 4xfloat) */
    /* subps: xmm1 -= xmm4 (packed 4xfloat) */
    xmm6 = MEMF(edx); /* movaps */
    /* mulps: xmm6 *= xmm0 (packed 4xfloat) */
    xmm7 = MEMF(edx + 0x10); /* movaps */
    /* mulps: xmm0 *= xmm7 (packed 4xfloat) */
    /* mulps: xmm7 *= xmm5 (packed 4xfloat) */
    /* mulps: xmm5 *= MEMF(edx) (packed 4xfloat) */
    /* addps: xmm7 += xmm6 (packed 4xfloat) */
    /* subps: xmm0 -= xmm5 (packed 4xfloat) */
    /* TODO: prefetcht0 byte ptr [esi + 0x68] */
    /* TODO: prefetcht0 byte ptr [edi - 0x80] */
    /* TODO: prefetchnta byte ptr [edx + 0x60] */
    esi = esi + 0x20;
    edi = edi - 0x20;
    xmm3 = xmm2; /* movaps */
    /* addps: xmm2 += xmm0 (packed 4xfloat) */
    /* subps: xmm3 -= xmm0 (packed 4xfloat) */
    xmm5 = xmm1; /* movaps */
    /* addps: xmm1 += xmm7 (packed 4xfloat) */
    /* subps: xmm7 -= xmm5 (packed 4xfloat) */
    xmm0 = xmm2; /* movaps */
    /* unpcklps xmm2, xmm1 */
    MEMD(ebx + 8) = xmm2; /* movlps */
    MEMD(ebx + 0x10) = xmm2; /* movhps */
    /* unpckhps xmm0, xmm1 */
    MEMD(ebx + 0x18) = xmm0; /* movlps */
    edx = edx + 0x20;
    xmm6 = xmm3; /* movaps */
    ebx = ebx + 0x20;
    /* unpcklps xmm3, xmm7 */
    MEMD(ebp + -8) = xmm3; /* movlps */
    MEMD(ebp + -16) = xmm3; /* movhps */
    /* unpckhps xmm6, xmm7 */
    MEMD(ebp + -24) = xmm6; /* movlps */
    ebp = ebp - 0x20;
    if (CMP_NE(esi, ecx)) goto loc_004673A0; /* jne: not equal / not zero */

loc_00467467: ;
    goto loc_004674AA;

loc_00467469: ;
    fp_push(MEMF(esi + 0xC)); /* fld float */
    fp_push(MEMF(esi + 8)); /* fld float */
    fp_push(MEMF(edx + 0xC)); /* fld float */
    fp_push(MEMF(esi + 0x1C)); /* fld float */
    fp_st1() -= fp_top(); fp_pop(); /* fsub */
    fp_st1() += fp_top(); fp_pop(); /* fadd */
    fp_st1() *= fp_top(); fp_pop(); /* fmul */
    fp_push(MEMF(edx + 8)); /* fld float */
    fp_st1() *= fp_top(); fp_pop(); /* fmul */
    fp_push(MEMF(esi + 0x18)); /* fld float */
    fp_st1() += fp_top(); fp_pop(); /* fadd */
    /* FPU: fsubr dword ptr [esi + 8] */
    fp_st1() *= fp_top(); fp_pop(); /* fmul */
    fp_st1() *= fp_top(); fp_pop(); /* fmul */
    /* FPU: fsubrp st(2) */
    fp_st1() += fp_top(); fp_pop(); /* faddp */
    /* fld st(2) */
    fp_st1() += fp_top(); fp_pop(); /* fadd */
    MEMF(ebx + 8) = (float)fp_top(); fp_popp(); /* fstp */
    fp_st1() -= fp_top(); fp_pop(); /* fsubp */
    /* fld st(2) */
    fp_st1() += fp_top(); fp_pop(); /* fadd */
    MEMF(ebx + 0xC) = (float)fp_top(); fp_popp(); /* fstp */
    /* FPU: fsubrp st(2) */
    MEMF(ebx + 0x18) = (float)fp_top(); fp_popp(); /* fstp */
    MEMF(ebx + 0x1C) = (float)fp_top(); fp_popp(); /* fstp */

loc_004674AA: ;
    POP32(esp, ebp);
    POP32(esp, edi);
    POP32(esp, esi);
    POP32(esp, ebx);
    esp += 4; return; /* ret */

    #undef fp_push
    #undef fp_pop
    #undef fp_popp
    #undef fp_top
    #undef fp_st1
}

/**
 * sub_004674B0
 * Original: 0x004674B0 - 0x0046755B (171 bytes, 58 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_004674B0(void)
{
    uint32_t ebp;
    int _flags = 0; /* fallback flag var */
    float xmm0, xmm1, xmm2, xmm3, xmm6, xmm7;

loc_004674B0: ;
    PUSH32(esp, ebp);
    ebp = esp;
    PUSH32(esp, esi);
    PUSH32(esp, edi);
    esi = MEM32(ebp + 8);
    edi = MEM32(ebp + 0xC);
    ecx = MEM32(ebp + 0x10);
    xmm7 = 0.0f; /* xorps self = zero */
    xmm6 = 0.0f; /* xorps self = zero */
    xmm2 = 0.0f; /* xorps self = zero */
    xmm3 = 0.0f; /* xorps self = zero */
    eax = esi;
    eax = eax | edi;
    if (TEST_NZ(eax, 0xF)) { sub_0046755B(); return; } /* jne: not equal / not zero */

loc_004674D9: ;
    /* nop */
    ecx = ecx - 0x10;
    if (CMP_L((uint32_t)ecx + (uint32_t)0x10, (uint32_t)0x10)) goto loc_00467520; /* jl: less (signed <) */

loc_004674E5: ;
    xmm0 = MEMF(esi); /* movaps */
    esi = esi + 0x40;
    /* mulps: xmm0 *= MEMF(edi) (packed 4xfloat) */
    edi = edi + 0x40;
    xmm1 = MEMF(esi + -48); /* movaps */
    /* addps: xmm7 += xmm2 (packed 4xfloat) */
    /* mulps: xmm1 *= MEMF(edi + -48) (packed 4xfloat) */
    /* addps: xmm6 += xmm3 (packed 4xfloat) */
    xmm2 = MEMF(esi + -32); /* movaps */
    /* addps: xmm7 += xmm0 (packed 4xfloat) */
    xmm3 = MEMF(esi + -16); /* movaps */
    /* addps: xmm6 += xmm1 (packed 4xfloat) */
    /* mulps: xmm2 *= MEMF(edi + -32) (packed 4xfloat) */
    ecx = ecx - 0x10;
    /* mulps: xmm3 *= MEMF(edi + -16) (packed 4xfloat) */
    if (CMP_GE((uint32_t)ecx + (uint32_t)0x10, (uint32_t)0x10)) goto loc_004674E5; /* jge: greater or equal (signed >=) */

loc_0046751A: ;
    /* addps: xmm6 += xmm2 (packed 4xfloat) */
    /* addps: xmm7 += xmm3 (packed 4xfloat) */

loc_00467520: ;
    ecx = ecx + 0x10;
    /* addps: xmm7 += xmm6 (packed 4xfloat) */
    if ((ecx != 0)) goto loc_00467545; /* jne: not equal / not zero */

loc_00467528: ;
    edx = MEM32(ebp + 0x14);
    /* TODO: movhlps xmm6, xmm7 */
    /* addps: xmm7 += xmm6 (packed 4xfloat) */
    xmm6 = xmm7; /* movss */
    /* shufps xmm7, xmm7, 1 */
    xmm7 = xmm7 + xmm6; /* addss */
    MEMF(edx) = xmm7; /* movss */
    POP32(esp, edi);
    POP32(esp, esi);
    esp = ebp;
    POP32(esp, ebp); /* leave */
    esp += 4; return; /* ret */

loc_00467545: ;
    xmm0 = MEMF(esi); /* movss */
    xmm0 = xmm0 * MEMF(edi); /* mulss */
    /* addps: xmm7 += xmm0 (packed 4xfloat) */
    esi = esi + 4;
    edi = edi + 4;
    ecx--;
    if (((int32_t)ecx > 0)) goto loc_00467545; /* jg: greater (signed >) */

loc_00467559: ;
    goto loc_00467528;

}

/**
 * sub_004675F0
 * Original: 0x004675F0 - 0x004676E1 (241 bytes, 78 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_004675F0(void)
{
    uint32_t ebp;
    int _flags = 0; /* fallback flag var */
    float xmm0, xmm1, xmm2, xmm6, xmm7;

loc_004675F0: ;
    PUSH32(esp, ebp);
    ebp = esp;
    PUSH32(esp, esi);
    PUSH32(esp, edi);
    esi = MEM32(ebp + 8);
    edi = MEM32(ebp + 0xC);
    ecx = MEM32(ebp + 0x10);
    edx = MEM32(ebp + 0x14);
    xmm6 = 0.0f; /* xorps self = zero */
    xmm7 = 0.0f; /* xorps self = zero */
    xmm0 = 0.0f; /* xorps self = zero */
    xmm1 = 0.0f; /* xorps self = zero */
    eax = esi;
    ecx = ecx - 2;
    if (CMP_L((uint32_t)ecx + (uint32_t)2, (uint32_t)2)) goto loc_00467652; /* jl: less (signed <) */

loc_00467614: ;
    eax = eax | edi;
    if (TEST_NZ(eax, 0xF)) goto loc_004676B0; /* jne: not equal / not zero */

loc_00467621: ;
    /* nop */
    /* nop */
    /* nop */

loc_00467630: ;
    /* addps: xmm6 += xmm0 (packed 4xfloat) */
    xmm0 = MEMF(esi); /* movaps */
    esi = esi + 0x10;
    /* mulps: xmm0 *= MEMF(edi) (packed 4xfloat) */
    /* addps: xmm7 += xmm1 (packed 4xfloat) */
    xmm1 = MEMF(edi); /* movaps */
    edi = edi + 0x10;
    /* shufps xmm1, xmm1, 0xb1 */
    ecx = ecx - 2;
    /* mulps: xmm1 *= MEMF(esi + -16) (packed 4xfloat) */
    if (CMP_GE((uint32_t)ecx + (uint32_t)2, (uint32_t)2)) goto loc_00467630; /* jge: greater or equal (signed >=) */

loc_00467652: ;
    ecx = ecx + 2;
    if ((ecx == 0)) goto loc_00467677; /* je: equal / zero */

loc_00467657: ;
    /* addps: xmm6 += xmm0 (packed 4xfloat) */
    xmm0 = MEMD(esi); /* movlps */
    /* addps: xmm7 += xmm1 (packed 4xfloat) */
    xmm1 = MEMD(edi); /* movlps */
    /* TODO: movlhps xmm0, xmm0 */
    /* shufps xmm1, xmm1, 0x14 */
    /* mulps: xmm0 *= xmm1 (packed 4xfloat) */
    xmm1 = 0.0f; /* xorps self = zero */
    /* TODO: movhlps xmm1, xmm0 */
    /* shufps xmm0, xmm1, 0xe4 */

loc_00467677: ;
    /* addps: xmm6 += xmm0 (packed 4xfloat) */
    /* addps: xmm7 += xmm1 (packed 4xfloat) */
    /* TODO: movhlps xmm0, xmm6 */
    /* TODO: movhlps xmm1, xmm7 */
    /* addps: xmm6 += xmm0 (packed 4xfloat) */
    /* addps: xmm7 += xmm1 (packed 4xfloat) */
    xmm0 = xmm6; /* movss */
    /* shufps xmm6, xmm6, 1 */
    xmm1 = xmm7; /* movss */
    /* shufps xmm7, xmm7, 1 */
    xmm0 = xmm0 - xmm6; /* subss */
    xmm1 = xmm1 + xmm7; /* addss */
    /* unpcklps xmm0, xmm1 */
    MEMD(edx) = xmm0; /* movlps */
    POP32(esp, edi);
    POP32(esp, esi);
    esp = ebp;
    POP32(esp, ebp); /* leave */
    esp += 4; return; /* ret */

loc_004676B0: ;
    /* addps: xmm6 += xmm0 (packed 4xfloat) */
    xmm0 = MEMD(esi); /* movlps */
    xmm0 = MEMD(esi + 8); /* movhps */
    esi = esi + 0x10;
    /* addps: xmm7 += xmm1 (packed 4xfloat) */
    xmm1 = MEMD(edi); /* movlps */
    xmm1 = MEMD(edi + 8); /* movhps */
    edi = edi + 0x10;
    xmm2 = xmm0; /* movaps */
    /* mulps: xmm0 *= xmm1 (packed 4xfloat) */
    /* shufps xmm2, xmm2, 0xb1 */
    ecx = ecx - 2;
    /* mulps: xmm1 *= xmm2 (packed 4xfloat) */
    if (CMP_GE((uint32_t)ecx + (uint32_t)2, (uint32_t)2)) goto loc_004676B0; /* jge: greater or equal (signed >=) */

loc_004676DC: ;
    goto loc_00467652;

}

/**
 * sub_004676F0
 * Original: 0x004676F0 - 0x0046779E (174 bytes, 61 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_004676F0(void)
{
    uint32_t ebp;
    int _flags = 0; /* fallback flag var */
    float xmm0, xmm1, xmm2, xmm3, xmm6, xmm7;

loc_004676F0: ;
    PUSH32(esp, ebp);
    ebp = esp;
    PUSH32(esp, esi);
    PUSH32(esp, edi);
    esi = MEM32(ebp + 8);
    edi = MEM32(ebp + 0xC);
    ecx = MEM32(ebp + 0x10);
    eax = esi;
    eax = eax | edi;
    xmm6 = 0.0f; /* xorps self = zero */
    xmm7 = 0.0f; /* xorps self = zero */
    ecx = ecx - 8;
    if (CMP_L((uint32_t)ecx + (uint32_t)8, (uint32_t)8)) goto loc_00467767; /* jl: less (signed <) */

loc_0046770D: ;
    xmm2 = 0.0f; /* xorps self = zero */
    xmm3 = 0.0f; /* xorps self = zero */
    if (TEST_NZ(eax, 0xF)) { sub_0046779E(); return; } /* jne: not equal / not zero */

loc_0046771E: ;
    xmm0 = MEMF(esi); /* movaps */
    esi = esi + 0x20;
    xmm1 = xmm0; /* movaps */
    /* shufps xmm0, xmm0, 0x50 */
    /* addps: xmm6 += xmm2 (packed 4xfloat) */
    /* mulps: xmm0 *= MEMF(edi) (packed 4xfloat) */
    /* shufps xmm1, xmm1, 0xfa */
    /* addps: xmm7 += xmm3 (packed 4xfloat) */
    /* mulps: xmm1 *= MEMF(edi + 0x10) (packed 4xfloat) */
    xmm2 = MEMF(esi + -16); /* movaps */
    edi = edi + 0x40;
    xmm3 = xmm2; /* movaps */
    /* shufps xmm2, xmm2, 0x50 */
    /* addps: xmm6 += xmm0 (packed 4xfloat) */
    /* mulps: xmm2 *= MEMF(edi + -32) (packed 4xfloat) */
    /* shufps xmm3, xmm3, 0xfa */
    /* addps: xmm7 += xmm1 (packed 4xfloat) */
    /* mulps: xmm3 *= MEMF(edi + -16) (packed 4xfloat) */
    ecx = ecx - 8;
    if (CMP_GE((uint32_t)ecx + (uint32_t)8, (uint32_t)8)) goto loc_0046771E; /* jge: greater or equal (signed >=) */

loc_00467761: ;
    /* addps: xmm6 += xmm2 (packed 4xfloat) */
    /* addps: xmm7 += xmm3 (packed 4xfloat) */

loc_00467767: ;
    edx = MEM32(ebp + 0x14);
    ecx = ecx + 8;
    /* addps: xmm7 += xmm6 (packed 4xfloat) */
    if ((ecx != 0)) goto loc_00467782; /* jne: not equal / not zero */

loc_00467772: ;
    xmm6 = xmm7; /* movaps */
    /* TODO: movhlps xmm7, xmm7 */
    /* addps: xmm7 += xmm6 (packed 4xfloat) */
    MEMD(edx) = xmm7; /* movlps */
    POP32(esp, edi);
    POP32(esp, esi);
    esp = ebp;
    POP32(esp, ebp); /* leave */
    esp += 4; return; /* ret */

loc_00467782: ;
    xmm0 = MEMF(esi); /* movss */
    esi = esi + 4;
    /* shufps xmm0, xmm0, 0x50 */
    xmm6 = MEMD(edi); /* movlps */
    edi = edi + 8;
    /* mulps: xmm0 *= xmm6 (packed 4xfloat) */
    ecx--;
    /* addps: xmm7 += xmm0 (packed 4xfloat) */
    if (((int32_t)ecx > 0)) goto loc_00467782; /* jg: greater (signed >) */

loc_0046779C: ;
    goto loc_00467772;

}

/**
 * sub_00467800
 * Original: 0x00467800 - 0x004678F7 (247 bytes, 93 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00467800(void)
{
    uint32_t ebp;
    int _flags = 0; /* fallback flag var */
    uint64_t mm0, mm1, mm2, mm3, mm6, mm7;

loc_00467800: ;
    PUSH32(esp, ebp);
    ebp = esp;
    PUSH32(esp, esi);
    PUSH32(esp, edi);
    PUSH32(esp, ebx);
    esi = MEM32(ebp + 8);
    edi = MEM32(ebp + 0xC);
    ecx = MEM32(ebp + 0x10);
    /* pxor mm7, mm7 (MMX/SIMD integer) */
    eax = 0; /* xor self */

loc_00467814: ;
    if (TEST_Z(esi, 7)) goto loc_00467830; /* je: equal / zero */

loc_0046781C: ;
    edx = (uint32_t)(int32_t)SMEM16(esi);
    ebx = (uint32_t)(int32_t)SMEM16(edi);
    edx = (uint32_t)((int32_t)edx * (int32_t)ebx);
    eax = eax + edx;
    esi = esi + 2;
    edi = edi + 2;
    ecx--;
    if (((int32_t)ecx > 0)) goto loc_00467814; /* jg: greater (signed >) */

loc_00467830: ;
    ecx = ecx - 0x10;
    if (CMP_L((uint32_t)ecx + (uint32_t)0x10, (uint32_t)0x10)) goto loc_0046787B; /* jl: less (signed <) */

loc_00467835: ;
    /* pxor mm2, mm2 (MMX/SIMD integer) */
    /* pxor mm3, mm3 (MMX/SIMD integer) */
    eax = eax + 0;

loc_00467840: ;
    /* SSE: movq mm0, qword ptr [esi] */
    /* TODO: paddd mm7, mm2 */
    /* TODO: pmaddwd mm0, qword ptr [edi] */
    /* SSE: movq mm1, qword ptr [esi + 8] */
    /* TODO: paddd mm7, mm3 */
    /* TODO: pmaddwd mm1, qword ptr [edi + 8] */
    /* SSE: movq mm2, qword ptr [esi + 0x10] */
    /* TODO: paddd mm7, mm0 */
    /* TODO: pmaddwd mm2, qword ptr [edi + 0x10] */
    /* SSE: movq mm3, qword ptr [esi + 0x18] */
    /* TODO: paddd mm7, mm1 */
    /* TODO: pmaddwd mm3, qword ptr [edi + 0x18] */
    esi = esi + 0x20;
    edi = edi + 0x20;
    ecx = ecx - 0x10;
    if (CMP_GE((uint32_t)ecx + (uint32_t)0x10, (uint32_t)0x10)) goto loc_00467840; /* jge: greater or equal (signed >=) */

loc_00467875: ;
    /* TODO: paddd mm7, mm2 */
    /* TODO: paddd mm7, mm3 */

loc_0046787B: ;
    ecx = ecx + 0x10;
    if ((ecx == 0)) goto loc_00467894; /* je: equal / zero */

loc_00467880: ;
    edx = (uint32_t)(int32_t)SMEM16(esi);
    ebx = (uint32_t)(int32_t)SMEM16(edi);
    edx = (uint32_t)((int32_t)edx * (int32_t)ebx);
    eax = eax + edx;
    esi = esi + 2;
    edi = edi + 2;
    ecx--;
    if (((int32_t)ecx > 0)) goto loc_00467880; /* jg: greater (signed >) */

loc_00467894: ;
    mm6 = eax; /* movd */
    /* TODO: paddd mm7, mm6 */
    /* SSE: movq mm6, mm7 */
    /* TODO: psrlq mm7, 0x20 */
    /* TODO: paddd mm7, mm6 */
    ecx = MEM32(ebp + 0x18);
    edi = MEM32(ebp + 0x14);
    if (CMP_G(ecx, 0)) { sub_004678F7(); return; } /* jg: greater (signed >) */

loc_004678AF: ;
    if (CMP_L(ecx, 0)) goto loc_004678C5; /* jl: less (signed <) */

loc_004678B1: ;
    /* TODO: packssdw mm7, mm7 */
    /* TODO: punpcklwd mm7, mm7 */
    /* TODO: psrad mm7, 0x10 */
    MEM32(edi) = mm7; /* movd */
    /* emms - empty MMX state */
    POP32(esp, ebx);
    POP32(esp, edi);
    POP32(esp, esi);
    esp = ebp;
    POP32(esp, ebp); /* leave */
    esp += 4; return; /* ret */

loc_004678C5: ;
    ecx = (uint32_t)(-(int32_t)ecx);
    mm0 = ecx; /* movd */
    /* TODO: pcmpeqd mm1, mm1 */
    /* TODO: psllw mm1, mm0 */
    /* pxor mm0, mm0 (MMX/SIMD integer) */
    /* TODO: psubw mm0, mm1 */
    /* TODO: psrld mm0, 0x10 */
    /* TODO: packssdw mm7, mm7 */
    /* TODO: punpcklwd mm7, mm7 */
    /* TODO: pmaddwd mm7, mm0 */
    /* TODO: packssdw mm7, mm7 */
    /* TODO: punpcklwd mm7, mm7 */
    /* TODO: psrad mm7, 0x10 */
    MEM32(edi) = mm7; /* movd */
    /* emms - empty MMX state */
    POP32(esp, ebx);
    POP32(esp, edi);
    POP32(esp, esi);
    esp = ebp;
    POP32(esp, ebp); /* leave */
    esp += 4; return; /* ret */

}

/**
 * sub_00467940
 * Original: 0x00467940 - 0x00467A12 (210 bytes, 78 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00467940(void)
{
    uint32_t ebp;
    int _flags = 0; /* fallback flag var */
    uint64_t mm0, mm1, mm2, mm6, mm7;

loc_00467940: ;
    PUSH32(esp, ebp);
    ebp = esp;
    PUSH32(esp, esi);
    PUSH32(esp, edi);
    esi = MEM32(ebp + 8);
    edi = MEM32(ebp + 0xC);
    ecx = MEM32(ebp + 0x10);
    /* pxor mm6, mm6 (MMX/SIMD integer) */
    /* pxor mm7, mm7 (MMX/SIMD integer) */
    /* pxor mm1, mm1 (MMX/SIMD integer) */
    /* pxor mm2, mm2 (MMX/SIMD integer) */
    ecx = ecx - 2;
    if (CMP_L((uint32_t)ecx + (uint32_t)2, (uint32_t)2)) goto loc_00467983; /* jl: less (signed <) */

loc_0046795F: ;
    /* nop */

loc_00467960: ;
    /* TODO: paddd mm6, mm1 */
    /* TODO: pshufw mm1, qword ptr [esi], 0xd8 */
    esi = esi + 8;
    /* TODO: paddd mm7, mm2 */
    /* TODO: pshufw mm2, qword ptr [edi], 0xd8 */
    edi = edi + 8;
    /* TODO: pshufw mm0, mm1, 0x4e */
    /* TODO: pmaddwd mm1, mm2 */
    ecx = ecx - 2;
    /* TODO: pmaddwd mm2, mm0 */
    if (CMP_GE((uint32_t)ecx + (uint32_t)2, (uint32_t)2)) goto loc_00467960; /* jge: greater or equal (signed >=) */

loc_00467983: ;
    ecx = ecx + 2;
    if ((ecx == 0)) goto loc_004679A4; /* je: equal / zero */

loc_00467988: ;
    /* TODO: paddd mm6, mm1 */
    /* pxor mm1, mm1 (MMX/SIMD integer) */
    /* TODO: punpcklwd mm1, dword ptr [esi] */
    /* TODO: paddd mm7, mm2 */
    /* pxor mm2, mm2 (MMX/SIMD integer) */
    /* TODO: punpcklwd mm2, dword ptr [edi] */
    /* TODO: pshufw mm0, mm1, 0x4e */
    /* TODO: pmaddwd mm1, mm2 */
    /* TODO: pmaddwd mm2, mm0 */

loc_004679A4: ;
    /* TODO: paddd mm6, mm1 */
    /* TODO: paddd mm7, mm2 */
    /* SSE: movq mm0, mm6 */
    /* TODO: psrlq mm6, 0x20 */
    /* SSE: movq mm1, mm7 */
    /* TODO: psrlq mm7, 0x20 */
    /* TODO: psubd mm0, mm6 */
    /* TODO: paddd mm1, mm7 */
    /* TODO: punpckldq mm0, mm1 */
    ecx = MEM32(ebp + 0x18);
    edi = MEM32(ebp + 0x14);
    if (CMP_G(ecx, 0)) { sub_00467A12(); return; } /* jg: greater (signed >) */

loc_004679CC: ;
    if (CMP_L(ecx, 0)) goto loc_004679E1; /* jl: less (signed <) */

loc_004679CE: ;
    /* TODO: packssdw mm0, mm0 */
    /* TODO: punpcklwd mm0, mm0 */
    /* TODO: psrad mm0, 0x10 */
    /* SSE: movq qword ptr [edi], mm0 */
    /* emms - empty MMX state */
    POP32(esp, edi);
    POP32(esp, esi);
    esp = ebp;
    POP32(esp, ebp); /* leave */
    esp += 4; return; /* ret */

loc_004679E1: ;
    ecx = (uint32_t)(-(int32_t)ecx);
    mm1 = ecx; /* movd */
    /* TODO: pcmpeqd mm2, mm2 */
    /* TODO: psllw mm2, mm1 */
    /* pxor mm1, mm1 (MMX/SIMD integer) */
    /* TODO: psubw mm1, mm2 */
    /* TODO: psrld mm1, 0x10 */
    /* TODO: packssdw mm0, mm0 */
    /* TODO: punpcklwd mm0, mm0 */
    /* TODO: pmaddwd mm0, mm1 */
    /* TODO: packssdw mm0, mm0 */
    /* TODO: punpcklwd mm0, mm0 */
    /* TODO: psrad mm0, 0x10 */
    /* SSE: movq qword ptr [edi], mm0 */
    /* emms - empty MMX state */
    POP32(esp, edi);
    POP32(esp, esi);
    esp = ebp;
    POP32(esp, ebp); /* leave */
    esp += 4; return; /* ret */

}

/**
 * sub_00467A50
 * Original: 0x00467A50 - 0x00467B16 (198 bytes, 76 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00467A50(void)
{
    uint32_t ebp;
    int _flags = 0; /* fallback flag var */
    uint64_t mm0, mm1, mm2, mm3, mm7;

loc_00467A50: ;
    PUSH32(esp, ebp);
    ebp = esp;
    PUSH32(esp, esi);
    PUSH32(esp, edi);
    PUSH32(esp, ebx);
    esi = MEM32(ebp + 8);
    edi = MEM32(ebp + 0xC);
    ecx = MEM32(ebp + 0x10);
    /* pxor mm7, mm7 (MMX/SIMD integer) */
    /* pxor mm1, mm1 (MMX/SIMD integer) */
    ecx = ecx - 4;
    if (CMP_L((uint32_t)ecx + (uint32_t)4, (uint32_t)4)) goto loc_00467A9B; /* jl: less (signed <) */

loc_00467A6A: ;
    /* pxor mm0, mm0 (MMX/SIMD integer) */
    /* nop */

loc_00467A70: ;
    /* TODO: pshufw mm2, qword ptr [esi], 0x44 */
    /* TODO: pshufw mm3, qword ptr [esi], 0xee */
    esi = esi + 8;
    /* TODO: paddd mm7, mm0 */
    /* TODO: pshufw mm0, qword ptr [edi], 0xd8 */
    /* TODO: pmaddwd mm0, mm2 */
    /* TODO: paddd mm7, mm1 */
    /* TODO: pshufw mm1, qword ptr [edi + 8], 0xd8 */
    /* TODO: pmaddwd mm1, mm3 */
    edi = edi + 0x10;
    ecx = ecx - 4;
    if (CMP_GE((uint32_t)ecx + (uint32_t)4, (uint32_t)4)) goto loc_00467A70; /* jge: greater or equal (signed >=) */

loc_00467A98: ;
    /* TODO: paddd mm7, mm0 */

loc_00467A9B: ;
    ecx = ecx + 4;
    if ((ecx == 0)) goto loc_00467AC0; /* je: equal / zero */

loc_00467AA0: ;
    eax = (uint32_t)(int32_t)SMEM16(esi);
    mm0 = eax; /* movd */
    /* TODO: pshufw mm0, mm0, 0x44 */
    /* TODO: paddd mm7, mm1 */
    mm1 = MEM32(edi); /* movd */
    /* TODO: pshufw mm1, mm1, 0xd8 */
    /* TODO: pmaddwd mm1, mm0 */
    esi = esi + 2;
    edi = edi + 4;
    ecx--;
    if (((int32_t)ecx > 0)) goto loc_00467AA0; /* jg: greater (signed >) */

loc_00467AC0: ;
    /* TODO: paddd mm7, mm1 */
    ecx = MEM32(ebp + 0x18);
    edi = MEM32(ebp + 0x14);
    if (CMP_G(ecx, 0)) { sub_00467B16(); return; } /* jg: greater (signed >) */

loc_00467ACE: ;
    if (CMP_L(ecx, 0)) goto loc_00467AE4; /* jl: less (signed <) */

loc_00467AD0: ;
    /* TODO: packssdw mm7, mm7 */
    /* TODO: punpcklwd mm7, mm7 */
    /* TODO: psrad mm7, 0x10 */
    /* SSE: movq qword ptr [edi], mm7 */
    /* emms - empty MMX state */
    POP32(esp, ebx);
    POP32(esp, edi);
    POP32(esp, esi);
    esp = ebp;
    POP32(esp, ebp); /* leave */
    esp += 4; return; /* ret */

loc_00467AE4: ;
    ecx = (uint32_t)(-(int32_t)ecx);
    mm0 = ecx; /* movd */
    /* TODO: pcmpeqd mm1, mm1 */
    /* TODO: psllw mm1, mm0 */
    /* pxor mm0, mm0 (MMX/SIMD integer) */
    /* TODO: psubw mm0, mm1 */
    /* TODO: psrld mm0, 0x10 */
    /* TODO: packssdw mm7, mm7 */
    /* TODO: punpcklwd mm7, mm7 */
    /* TODO: pmaddwd mm7, mm0 */
    /* TODO: packssdw mm7, mm7 */
    /* TODO: punpcklwd mm7, mm7 */
    /* TODO: psrad mm7, 0x10 */
    /* SSE: movq qword ptr [edi], mm7 */
    /* emms - empty MMX state */
    POP32(esp, ebx);
    POP32(esp, edi);
    POP32(esp, esi);
    esp = ebp;
    POP32(esp, ebp); /* leave */
    esp += 4; return; /* ret */

}

/**
 * sub_00467B60
 * Original: 0x00467B60 - 0x00467C47 (231 bytes, 96 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00467B60(void)
{
    uint32_t ebp;
    int _flags = 0; /* fallback flag var */
    int _cf = 0; /* carry flag */
    uint64_t mm0, mm1, mm2, mm3, mm7;

loc_00467B60: ;
    PUSH32(esp, ebp);
    ebp = esp;
    PUSH32(esp, esi);
    PUSH32(esp, edi);
    PUSH32(esp, ebx);
    esi = MEM32(ebp + 8);
    edi = MEM32(ebp + 0xC);
    ecx = MEM32(ebp + 0x10);
    mm7 = ebp; /* movd */
    ebp = ecx;
    ecx = 0; /* xor self */
    ebx = 0; /* xor self */

loc_00467B78: ;
    if (TEST_Z(esi, 7)) goto loc_00467B97; /* je: equal / zero */

loc_00467B80: ;
    eax = (uint32_t)(int32_t)SMEM16(esi);
    edx = (uint32_t)(int32_t)SMEM16(edi);
    eax = (uint32_t)((int32_t)eax * (int32_t)edx);
    edx = ((int32_t)eax < 0) ? 0xFFFFFFFF : 0; /* cdq */
    ecx = ecx + eax;
    ebx = ebx + edx + _cf; /* adc */
    esi = esi + 2;
    edi = edi + 2;
    ebp--;
    if (((int32_t)ebp > 0)) goto loc_00467B78; /* jg: greater (signed >) */

loc_00467B97: ;
    ebp = ebp - 0x10;
    if (CMP_L((uint32_t)ebp + (uint32_t)0x10, (uint32_t)0x10)) goto loc_00467C19; /* jl: less (signed <) */

loc_00467BA0: ;
    /* SSE: movq mm0, qword ptr [esi] */
    /* TODO: pmaddwd mm0, qword ptr [edi] */
    /* SSE: movq mm1, qword ptr [esi + 8] */
    /* TODO: pmaddwd mm1, qword ptr [edi + 8] */
    /* SSE: movq mm2, qword ptr [esi + 0x10] */
    /* TODO: pmaddwd mm2, qword ptr [edi + 0x10] */
    /* SSE: movq mm3, qword ptr [esi + 0x18] */
    /* TODO: pmaddwd mm3, qword ptr [edi + 0x18] */
    esi = esi + 0x20;
    edi = edi + 0x20;
    eax = mm0; /* movd */
    /* TODO: psrlq mm0, 0x20 */
    edx = ((int32_t)eax < 0) ? 0xFFFFFFFF : 0; /* cdq */
    ecx = ecx + eax;
    ebx = ebx + edx + _cf; /* adc */
    eax = mm0; /* movd */
    edx = ((int32_t)eax < 0) ? 0xFFFFFFFF : 0; /* cdq */
    ecx = ecx + eax;
    ebx = ebx + edx + _cf; /* adc */
    eax = mm1; /* movd */
    /* TODO: psrlq mm1, 0x20 */
    edx = ((int32_t)eax < 0) ? 0xFFFFFFFF : 0; /* cdq */
    ecx = ecx + eax;
    ebx = ebx + edx + _cf; /* adc */
    eax = mm1; /* movd */
    edx = ((int32_t)eax < 0) ? 0xFFFFFFFF : 0; /* cdq */
    ecx = ecx + eax;
    ebx = ebx + edx + _cf; /* adc */
    eax = mm2; /* movd */
    /* TODO: psrlq mm2, 0x20 */
    edx = ((int32_t)eax < 0) ? 0xFFFFFFFF : 0; /* cdq */
    ecx = ecx + eax;
    ebx = ebx + edx + _cf; /* adc */
    eax = mm2; /* movd */
    edx = ((int32_t)eax < 0) ? 0xFFFFFFFF : 0; /* cdq */
    ecx = ecx + eax;
    ebx = ebx + edx + _cf; /* adc */
    eax = mm3; /* movd */
    /* TODO: psrlq mm3, 0x20 */
    edx = ((int32_t)eax < 0) ? 0xFFFFFFFF : 0; /* cdq */
    ecx = ecx + eax;
    ebx = ebx + edx + _cf; /* adc */
    eax = mm3; /* movd */
    edx = ((int32_t)eax < 0) ? 0xFFFFFFFF : 0; /* cdq */
    ecx = ecx + eax;
    ebx = ebx + edx + _cf; /* adc */
    ebp = ebp - 0x10;
    if (CMP_GE((uint32_t)ebp + (uint32_t)0x10, (uint32_t)0x10)) goto loc_00467BA0; /* jge: greater or equal (signed >=) */

loc_00467C19: ;
    ebp = ebp + 0x10;
    if ((ebp == 0)) goto loc_00467C35; /* je: equal / zero */

loc_00467C1E: ;
    eax = (uint32_t)(int32_t)SMEM16(esi);
    edx = (uint32_t)(int32_t)SMEM16(edi);
    eax = (uint32_t)((int32_t)eax * (int32_t)edx);
    edx = ((int32_t)eax < 0) ? 0xFFFFFFFF : 0; /* cdq */
    ecx = ecx + eax;
    ebx = ebx + edx + _cf; /* adc */
    esi = esi + 2;
    edi = edi + 2;
    ebp--;
    if (((int32_t)ebp > 0)) goto loc_00467C1E; /* jg: greater (signed >) */

loc_00467C35: ;
    ebp = mm7; /* movd */
    edi = MEM32(ebp + 0x14);
    /* emms - empty MMX state */
    MEM32(edi) = ecx;
    MEM32(edi + 4) = ebx;
    POP32(esp, ebx);
    POP32(esp, edi);
    POP32(esp, esi);
    esp = ebp;
    POP32(esp, ebp); /* leave */
    esp += 4; return; /* ret */

}

/**
 * sub_00467C50
 * Original: 0x00467C50 - 0x00467D4A (250 bytes, 96 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00467C50(void)
{
    uint32_t ebp;
    int _flags = 0; /* fallback flag var */
    int _cf = 0; /* carry flag */
    uint64_t mm0, mm1, mm2, mm3, mm4, mm5, mm6, mm7;

loc_00467C50: ;
    PUSH32(esp, ebp);
    ebp = esp;
    PUSH32(esp, esi);
    PUSH32(esp, edi);
    PUSH32(esp, ebx);
    esi = MEM32(ebp + 8);
    edi = MEM32(ebp + 0xC);
    ecx = MEM32(ebp + 0x10);
    MEM32(esp + -4) = ebp;
    ebp = ecx;
    /* pxor mm4, mm4 (MMX/SIMD integer) */
    /* pxor mm5, mm5 (MMX/SIMD integer) */
    /* pxor mm6, mm6 (MMX/SIMD integer) */
    /* pxor mm7, mm7 (MMX/SIMD integer) */
    ebp = ebp - 4;
    if (CMP_L((uint32_t)ebp + (uint32_t)4, (uint32_t)4)) goto loc_00467CE2; /* jl: less (signed <) */

loc_00467C76: ;
    /* nop */
    /* nop */

loc_00467C80: ;
    /* TODO: pshufw mm2, qword ptr [esi], 0x44 */
    /* TODO: pshufw mm3, qword ptr [esi], 0xee */
    esi = esi + 8;
    /* TODO: pshufw mm0, qword ptr [edi], 0xd8 */
    /* TODO: pmaddwd mm0, mm2 */
    /* TODO: pshufw mm1, qword ptr [edi + 8], 0xd8 */
    /* TODO: pmaddwd mm1, mm3 */
    edi = edi + 0x10;
    ecx = mm4; /* movd */
    ebx = mm5; /* movd */
    eax = mm0; /* movd */
    /* TODO: psrlq mm0, 0x20 */
    edx = ((int32_t)eax < 0) ? 0xFFFFFFFF : 0; /* cdq */
    ecx = ecx + eax;
    ebx = ebx + edx + _cf; /* adc */
    eax = mm1; /* movd */
    /* TODO: psrlq mm1, 0x20 */
    edx = ((int32_t)eax < 0) ? 0xFFFFFFFF : 0; /* cdq */
    ecx = ecx + eax;
    ebx = ebx + edx + _cf; /* adc */
    mm4 = ecx; /* movd */
    mm5 = ebx; /* movd */
    ecx = mm6; /* movd */
    ebx = mm7; /* movd */
    eax = mm0; /* movd */
    edx = ((int32_t)eax < 0) ? 0xFFFFFFFF : 0; /* cdq */
    ecx = ecx + eax;
    ebx = ebx + edx + _cf; /* adc */
    eax = mm1; /* movd */
    edx = ((int32_t)eax < 0) ? 0xFFFFFFFF : 0; /* cdq */
    ecx = ecx + eax;
    ebx = ebx + edx + _cf; /* adc */
    mm6 = ecx; /* movd */
    mm7 = ebx; /* movd */
    ebp = ebp - 4;
    if (CMP_GE((uint32_t)ebp + (uint32_t)4, (uint32_t)4)) goto loc_00467C80; /* jge: greater or equal (signed >=) */

loc_00467CE2: ;
    ebp = ebp + 4;
    if ((ebp == 0)) goto loc_00467D25; /* je: equal / zero */

loc_00467CE7: ;
    ecx = mm4; /* movd */
    ebx = mm5; /* movd */
    eax = (uint32_t)(int32_t)SMEM16(esi);
    edx = (uint32_t)(int32_t)SMEM16(edi);
    eax = (uint32_t)((int32_t)eax * (int32_t)edx);
    edx = ((int32_t)eax < 0) ? 0xFFFFFFFF : 0; /* cdq */
    ecx = ecx + eax;
    ebx = ebx + edx + _cf; /* adc */
    mm4 = ecx; /* movd */
    mm5 = ebx; /* movd */
    ecx = mm6; /* movd */
    ebx = mm7; /* movd */
    eax = (uint32_t)(int32_t)SMEM16(esi);
    edx = (uint32_t)(int32_t)SMEM16(edi + 2);
    eax = (uint32_t)((int32_t)eax * (int32_t)edx);
    edx = ((int32_t)eax < 0) ? 0xFFFFFFFF : 0; /* cdq */
    ecx = ecx + eax;
    ebx = ebx + edx + _cf; /* adc */
    mm6 = ecx; /* movd */
    mm7 = ebx; /* movd */
    edi = edi + 4;
    esi = esi + 2;
    ebp--;
    if ((ebp != 0)) goto loc_00467CE7; /* jne: not equal / not zero */

loc_00467D25: ;
    ebp = MEM32(esp + -4);
    edi = MEM32(ebp + 0x14);
    eax = mm4; /* movd */
    ebx = mm5; /* movd */
    MEM32(edi) = eax;
    MEM32(edi + 4) = ebx;
    eax = mm6; /* movd */
    ebx = mm7; /* movd */
    MEM32(edi + 8) = eax;
    MEM32(edi + 0xC) = ebx;
    /* emms - empty MMX state */
    POP32(esp, ebx);
    POP32(esp, edi);
    POP32(esp, esi);
    esp = ebp;
    POP32(esp, ebp); /* leave */
    esp += 4; return; /* ret */

}

/**
 * sub_00467D50
 * Original: 0x00467D50 - 0x00467E5B (267 bytes, 103 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00467D50(void)
{
    uint32_t ebp;
    int _flags = 0; /* fallback flag var */
    int _cf = 0; /* carry flag */
    uint64_t mm0, mm1, mm2, mm4, mm5, mm6, mm7;

loc_00467D50: ;
    PUSH32(esp, ebp);
    ebp = esp;
    PUSH32(esp, esi);
    PUSH32(esp, edi);
    PUSH32(esp, ebx);
    esi = MEM32(ebp + 8);
    edi = MEM32(ebp + 0xC);
    ecx = MEM32(ebp + 0x10);
    MEM32(esp + -4) = ebp;
    ebp = ecx;
    /* pxor mm4, mm4 (MMX/SIMD integer) */
    /* pxor mm5, mm5 (MMX/SIMD integer) */
    /* pxor mm6, mm6 (MMX/SIMD integer) */
    /* pxor mm7, mm7 (MMX/SIMD integer) */
    ebp = ebp - 2;
    if (CMP_L((uint32_t)ebp + (uint32_t)2, (uint32_t)2)) goto loc_00467DDD; /* jl: less (signed <) */

loc_00467D76: ;
    /* nop */
    /* nop */

loc_00467D80: ;
    /* TODO: pshufw mm1, qword ptr [esi], 0xd8 */
    esi = esi + 8;
    /* TODO: pshufw mm2, qword ptr [edi], 0xd8 */
    edi = edi + 8;
    /* TODO: pshufw mm0, mm1, 0x4e */
    /* TODO: pmaddwd mm1, mm2 */
    /* TODO: pmaddwd mm2, mm0 */
    ecx = mm4; /* movd */
    ebx = mm5; /* movd */
    eax = mm1; /* movd */
    /* TODO: psrlq mm1, 0x20 */
    edx = ((int32_t)eax < 0) ? 0xFFFFFFFF : 0; /* cdq */
    ecx = ecx + eax;
    ebx = ebx + edx + _cf; /* adc */
    eax = mm1; /* movd */
    edx = ((int32_t)eax < 0) ? 0xFFFFFFFF : 0; /* cdq */
    ecx = ecx - eax;
    ebx = ebx - edx - _cf; /* sbb */
    mm4 = ecx; /* movd */
    mm5 = ebx; /* movd */
    ecx = mm6; /* movd */
    ebx = mm7; /* movd */
    eax = mm2; /* movd */
    /* TODO: psrlq mm2, 0x20 */
    edx = ((int32_t)eax < 0) ? 0xFFFFFFFF : 0; /* cdq */
    ecx = ecx + eax;
    ebx = ebx + edx + _cf; /* adc */
    eax = mm2; /* movd */
    edx = ((int32_t)eax < 0) ? 0xFFFFFFFF : 0; /* cdq */
    ecx = ecx + eax;
    ebx = ebx + edx + _cf; /* adc */
    mm6 = ecx; /* movd */
    mm7 = ebx; /* movd */
    ebp = ebp - 2;
    if (CMP_GE((uint32_t)ebp + (uint32_t)2, (uint32_t)2)) goto loc_00467D80; /* jge: greater or equal (signed >=) */

loc_00467DDD: ;
    ebp = ebp + 2;
    if ((ebp == 0)) goto loc_00467E36; /* je: equal / zero */

loc_00467DE2: ;
    ecx = mm4; /* movd */
    ebx = mm5; /* movd */
    eax = (uint32_t)(int32_t)SMEM16(esi);
    edx = (uint32_t)(int32_t)SMEM16(edi);
    eax = (uint32_t)((int32_t)eax * (int32_t)edx);
    edx = ((int32_t)eax < 0) ? 0xFFFFFFFF : 0; /* cdq */
    ecx = ecx + eax;
    ebx = ebx + edx + _cf; /* adc */
    eax = (uint32_t)(int32_t)SMEM16(esi + 2);
    edx = (uint32_t)(int32_t)SMEM16(edi + 2);
    eax = (uint32_t)((int32_t)eax * (int32_t)edx);
    edx = ((int32_t)eax < 0) ? 0xFFFFFFFF : 0; /* cdq */
    ecx = ecx - eax;
    ebx = ebx - edx - _cf; /* sbb */
    mm4 = ecx; /* movd */
    mm5 = ebx; /* movd */
    ecx = mm6; /* movd */
    ebx = mm7; /* movd */
    eax = (uint32_t)(int32_t)SMEM16(esi);
    edx = (uint32_t)(int32_t)SMEM16(edi + 2);
    eax = (uint32_t)((int32_t)eax * (int32_t)edx);
    edx = ((int32_t)eax < 0) ? 0xFFFFFFFF : 0; /* cdq */
    ecx = ecx + eax;
    ebx = ebx + edx + _cf; /* adc */
    eax = (uint32_t)(int32_t)SMEM16(esi + 2);
    edx = (uint32_t)(int32_t)SMEM16(edi);
    eax = (uint32_t)((int32_t)eax * (int32_t)edx);
    edx = ((int32_t)eax < 0) ? 0xFFFFFFFF : 0; /* cdq */
    ecx = ecx + eax;
    ebx = ebx + edx + _cf; /* adc */
    mm6 = ecx; /* movd */
    mm7 = ebx; /* movd */

loc_00467E36: ;
    ebp = MEM32(esp + -4);
    edi = MEM32(ebp + 0x14);
    eax = mm4; /* movd */
    ebx = mm5; /* movd */
    MEM32(edi) = eax;
    MEM32(edi + 4) = ebx;
    eax = mm6; /* movd */
    ebx = mm7; /* movd */
    MEM32(edi + 8) = eax;
    MEM32(edi + 0xC) = ebx;
    /* emms - empty MMX state */
    POP32(esp, ebx);
    POP32(esp, edi);
    POP32(esp, esi);
    esp = ebp;
    POP32(esp, ebp); /* leave */
    esp += 4; return; /* ret */

}

/**
 * sub_00467E60
 * Original: 0x00467E60 - 0x00467F6D (269 bytes, 82 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00467E60(void)
{
    uint32_t ebp;
    int _flags = 0; /* fallback flag var */
    float xmm0, xmm1, xmm4, xmm5, xmm6, xmm7;
    double _fp_stack[8];
    int _fp_top = 0;
    #define fp_push(v) (_fp_stack[--_fp_top & 7] = (v))
    #define fp_pop() (_fp_top++)
    #define fp_popp() (fp_pop())
    #define fp_top() _fp_stack[_fp_top & 7]
    #define fp_st1() _fp_stack[(_fp_top + 1) & 7]

loc_00467E60: ;
    PUSH32(esp, ebp);
    ebp = esp;
    esp = esp - 0x14;
    PUSH32(esp, ebx);
    PUSH32(esp, esi);
    PUSH32(esp, edi);
    fp_push(MEMF(ebp + 8)); /* fld float */
    /* fld st(0) */
    fp_st1() *= fp_top(); fp_pop(); /* fmul */
    MEM32(ebp + -20) = (int32_t)fp_top(); /* fistp */
    fp_st1() *= fp_top(); fp_pop(); /* fmul */
    MEM32(ebp + -16) = (int32_t)fp_top(); /* fistp */
    eax = 0x10000000;
    edx = ((int32_t)eax < 0) ? 0xFFFFFFFF : 0; /* cdq */
    { int64_t _dividend = ((int64_t)(int32_t)edx << 32) | eax;
      eax = (uint32_t)((int32_t)(_dividend / (int32_t)MEM32(ebp + -20)));
      edx = (uint32_t)((int32_t)(_dividend % (int32_t)MEM32(ebp + -20))); }
    MEM32(ebp + -12) = eax;
    esi = eax;
    xmm6 = MEMF(0x58596C); /* movss */
    xmm7 = MEMF(0x585970); /* movss */
    xmm4 = xmm6; /* movaps */
    xmm5 = xmm6; /* movaps */
    ebx = MEM32(ebp + -16);
    edi = MEM32(ebp + 0xC);
    edx = MEM32(edi);
    edx = (uint32_t)((int32_t)edx * (int32_t)ebx);
    ecx = 0x4000;
    if (CMP_GE(edx, ecx)) goto loc_00467EC5; /* jge: greater or equal (signed >=) */

loc_00467EB8: ;
    edx = MEM32(edi + 4);
    edi = edi + 4;
    edx = (uint32_t)((int32_t)edx * (int32_t)ebx);
    if (CMP_L(edx, ecx)) goto loc_00467EB8; /* jl: less (signed <) */

loc_00467EC5: ;
    esi = esi + 0x800;
    MEM32(ebp + -20) = esi;
    esi = (uint32_t)((int32_t)esi >> 0xC);
    (void)0; /* cmp esi, MEM32(ebp + 0x18) - flags set for next jcc */
    MEM32(ebp + -8) = esi;
    if (CMP_GE(esi, MEM32(ebp + 0x18))) goto loc_00467F45; /* jge: greater or equal (signed >=) */

loc_00467ED9: ;
    eax = MEM32(ebp + 0x14);

loc_00467EDC: ;
    ecx = ecx + 0x8000;
    xmm1 = xmm6; /* movaps */
    if (CMP_GE(edx, ecx)) goto loc_00467F19; /* jge: greater or equal (signed >=) */

loc_00467EE9: ;
    esi = MEM32(edi);

loc_00467EEB: ;
    edx = edx & 0x7FFF;
    edx = (uint32_t)((int32_t)edx >> 7);
    xmm0 = MEMF(edx * 4 + 0x5852F0); /* movss */
    xmm0 = xmm0 + xmm7; /* addss */
    xmm0 = xmm0 * MEMF(eax + esi * 4); /* mulss */
    esi = MEM32(edi + 4);
    edi = edi + 4;
    edx = esi;
    edx = (uint32_t)((int32_t)edx * (int32_t)ebx);
    xmm1 = (xmm1 > xmm0 ? xmm1 : xmm0); /* maxss */
    if (CMP_L(edx, ecx)) goto loc_00467EEB; /* jl: less (signed <) */

loc_00467F19: ;
    esi = MEM32(ebp + -8);
    xmm0 = MEMF(eax + esi * 4); /* movss */
    esi = MEM32(ebp + -20);
    xmm1 = xmm1 * xmm0; /* mulss */
    esi = esi + MEM32(ebp + -12);
    MEM32(ebp + -20) = esi;
    xmm4 = xmm4 + xmm1; /* addss */
    esi = (uint32_t)((int32_t)esi >> 0xC);
    xmm0 = xmm0 * xmm0; /* mulss */
    (void)0; /* cmp esi, MEM32(ebp + 0x18) - flags set for next jcc */
    MEM32(ebp + -8) = esi;
    xmm5 = xmm5 + xmm0; /* addss */
    if (CMP_L(esi, MEM32(ebp + 0x18))) goto loc_00467EDC; /* jl: less (signed <) */

loc_00467F45: ;
    xmm4 = xmm4 * MEMF(0x585974); /* mulss */
    xmm5 = xmm5 * MEMF(0x585978); /* mulss */
    xmm4 = xmm4 - xmm5; /* subss */
    xmm4 = xmm4 * MEMF(ebp + 0x1C); /* mulss */
    MEMF(ebp + -4) = xmm4; /* movss */
    fp_push(MEMF(ebp + -4)); /* fld float */
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
 * sub_00467F70
 * Original: 0x00467F70 - 0x00468084 (276 bytes, 81 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00467F70(void)
{
    uint32_t ebp;
    int _flags = 0; /* fallback flag var */
    float xmm0, xmm1, xmm2, xmm3, xmm4, xmm5, xmm6, xmm7;

loc_00467F70: ;
    PUSH32(esp, ebp);
    ebp = esp;
    esp = esp - 0x10;
    PUSH32(esp, ebx);
    PUSH32(esp, esi);
    PUSH32(esp, edi);
    eax = 0x58;
    xmm6 = MEMF(0x58596C); /* movss */
    xmm7 = MEMF(0x585970); /* movss */
    xmm2 = MEMF(0x585974); /* movss */
    xmm3 = MEMF(0x585978); /* movss */

loc_00467F9E: ;
    MEM32(ebp + -16) = eax;
    esi = MEM32(eax * 4 + 0x585A38);
    ebx = (uint32_t)(int32_t)SMEM16(eax * 2 + 0x585980);
    MEM32(ebp + -12) = esi;
    xmm4 = xmm6; /* movaps */
    xmm5 = xmm6; /* movaps */
    edi = MEM32(ebp + 0xC);
    edx = MEM32(edi);
    edx = (uint32_t)((int32_t)edx * (int32_t)ebx);
    ecx = 0x4000;
    if (CMP_GE(edx, ecx)) goto loc_00467FDA; /* jge: greater or equal (signed >=) */

loc_00467FCA: ;
    edx = MEM32(edi + 4);
    edi = edi + 4;
    edx = (uint32_t)((int32_t)edx * (int32_t)ebx);
    if (CMP_L(edx, ecx)) goto loc_00467FCA; /* jl: less (signed <) */

loc_00467FD7: ;
    MEM32(ebp + 0xC) = edi;

loc_00467FDA: ;
    esi = esi + 0x800;
    MEM32(ebp + -8) = esi;
    esi = (uint32_t)((int32_t)esi >> 0xC);
    (void)0; /* cmp esi, MEM32(ebp + 0x18) - flags set for next jcc */
    MEM32(ebp + -4) = esi;
    if (CMP_GE(esi, MEM32(ebp + 0x18))) goto loc_0046805A; /* jge: greater or equal (signed >=) */

loc_00467FEE: ;
    eax = MEM32(ebp + 0x14);

loc_00467FF1: ;
    ecx = ecx + 0x8000;
    xmm1 = xmm6; /* movaps */
    if (CMP_GE(edx, ecx)) goto loc_0046802E; /* jge: greater or equal (signed >=) */

loc_00467FFE: ;
    esi = MEM32(edi);

loc_00468000: ;
    edx = edx & 0x7FFF;
    edx = (uint32_t)((int32_t)edx >> 7);
    xmm0 = MEMF(edx * 4 + 0x5852F0); /* movss */
    xmm0 = xmm0 + xmm7; /* addss */
    xmm0 = xmm0 * MEMF(eax + esi * 4); /* mulss */
    esi = MEM32(edi + 4);
    edi = edi + 4;
    edx = esi;
    edx = (uint32_t)((int32_t)edx * (int32_t)ebx);
    xmm1 = (xmm1 > xmm0 ? xmm1 : xmm0); /* maxss */
    if (CMP_L(edx, ecx)) goto loc_00468000; /* jl: less (signed <) */

loc_0046802E: ;
    esi = MEM32(ebp + -4);
    xmm0 = MEMF(eax + esi * 4); /* movss */
    esi = MEM32(ebp + -8);
    xmm1 = xmm1 * xmm0; /* mulss */
    esi = esi + MEM32(ebp + -12);
    MEM32(ebp + -8) = esi;
    xmm4 = xmm4 + xmm1; /* addss */
    esi = (uint32_t)((int32_t)esi >> 0xC);
    xmm0 = xmm0 * xmm0; /* mulss */
    (void)0; /* cmp esi, MEM32(ebp + 0x18) - flags set for next jcc */
    MEM32(ebp + -4) = esi;
    xmm5 = xmm5 + xmm0; /* addss */
    if (CMP_L(esi, MEM32(ebp + 0x18))) goto loc_00467FF1; /* jl: less (signed <) */

loc_0046805A: ;
    xmm4 = xmm4 * xmm2; /* mulss */
    eax = MEM32(ebp + -16);
    xmm5 = xmm5 * xmm3; /* mulss */
    esi = MEM32(ebp + 8);
    xmm4 = xmm4 - xmm5; /* subss */
    xmm4 = xmm4 * MEMF(ebp + 0x1C); /* mulss */
    MEMF(esi + eax * 4) = xmm4; /* movss */
    eax--;
    if (((int32_t)eax >= 0)) goto loc_00467F9E; /* jge: greater or equal (signed >=) */

loc_0046807D: ;
    POP32(esp, edi);
    POP32(esp, esi);
    POP32(esp, ebx);
    esp = ebp;
    POP32(esp, ebp);
    esp += 4; return; /* ret */

}

/**
 * sub_00468090
 * Original: 0x00468090 - 0x0046811A (138 bytes, 51 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00468090(void)
{
    int _flags = 0; /* fallback flag var */
    double _fp_stack[8];
    int _fp_top = 0;
    #define fp_push(v) (_fp_stack[--_fp_top & 7] = (v))
    #define fp_pop() (_fp_top++)
    #define fp_popp() (fp_pop())
    #define fp_top() _fp_stack[_fp_top & 7]
    #define fp_st1() _fp_stack[(_fp_top + 1) & 7]

loc_00468090: ;
    fp_push(MEMF(0x648D14)); /* fld float */
    ecx = MEM32(esp + 8);
    PUSH32(esp, esi);
    esi = MEM32(esp + 0x10);
    eax = esi + 1;
    PUSH32(esp, edi);
    edi = 0; /* xor self */
    (void)0; /* cmp eax, 4 - flags set for next jcc */
    eax = MEM32(esp + 0xC);
    if (CMP_L(eax, 4)) goto loc_004680F9; /* jl: less (signed <) */

loc_004680AE: ;
    edx = esi + 1;
    edx = edx >> 2;
    edi = edx * 4;
    goto loc_004680C0;

    /* nop */

loc_004680C0: ;
    /* fld st(0) */
    eax = eax + 0x10;
    fp_st1() *= fp_top(); fp_pop(); /* fmul */
    ecx = ecx + 0x10;
    edx--;
    MEMF(ecx + -16) = (float)fp_top(); fp_popp(); /* fstp */
    fp_st1() *= fp_top(); fp_pop(); /* fmul */
    /* fld st(0) */
    fp_st1() *= fp_top(); fp_pop(); /* fmul */
    MEMF(ecx + -12) = (float)fp_top(); fp_popp(); /* fstp */
    fp_st1() *= fp_top(); fp_pop(); /* fmul */
    /* fld st(0) */
    fp_st1() *= fp_top(); fp_pop(); /* fmul */
    MEMF(ecx + -8) = (float)fp_top(); fp_popp(); /* fstp */
    fp_st1() *= fp_top(); fp_pop(); /* fmul */
    /* fld st(0) */
    fp_st1() *= fp_top(); fp_pop(); /* fmul */
    MEMF(ecx + -4) = (float)fp_top(); fp_popp(); /* fstp */
    fp_st1() *= fp_top(); fp_pop(); /* fmul */
    if ((edx != 0)) goto loc_004680C0; /* jne: not equal / not zero */

loc_004680F9: ;
    if (CMP_G(edi, esi)) goto loc_00468115; /* jg: greater (signed >) */

loc_004680FD: ;
    esi = esi - edi;
    esi++;

loc_00468100: ;
    /* fld st(0) */
    eax = eax + 4;
    fp_st1() *= fp_top(); fp_pop(); /* fmul */
    ecx = ecx + 4;
    esi--;
    MEMF(ecx + -4) = (float)fp_top(); fp_popp(); /* fstp */
    fp_st1() *= fp_top(); fp_pop(); /* fmul */
    if ((esi != 0)) goto loc_00468100; /* jne: not equal / not zero */

loc_00468115: ;
    POP32(esp, edi);
    /* fstp st(0) */
    POP32(esp, esi);
    esp += 4; return; /* ret */

    #undef fp_push
    #undef fp_pop
    #undef fp_popp
    #undef fp_top
    #undef fp_st1
}

/**
 * sub_0046811C
 * Original: 0x0046811C - 0x0046815D (65 bytes, 25 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0046811C(void)
{
    int _flags = 0; /* fallback flag var */

loc_0046811C: ;
    PUSH32(esp, ebx);
    ebx = esp;
    esp = esp & 0xFFFFFFF0u;
    esp = esp - 0x10;
    eax = MEM32(ebx + 8);
    edx = MEM32(ebx + 0xC);
    ecx = MEM32(ebx + 0x10);
    if (TEST_Z(eax, eax)) goto loc_00468152; /* je: equal / zero */

loc_00468132: ;
    if (TEST_Z(ecx, ecx)) goto loc_00468152; /* je: equal / zero */

loc_00468136: ;
    if (CMP_LE(edx & edx, 0)) { sub_0046815D(); return; } /* jle: less or equal (signed <=) */

loc_0046813A: ;
    MEM32(esp) = eax;
    MEM32(esp + 4) = edx;
    MEM32(esp + 8) = ecx;
    PUSH32(esp, 0); sub_0046D640(); /* call 0x0046D640 */

loc_0046814A: ;
    eax = 0; /* xor self */
    esp = ebx;
    POP32(esp, ebx);
    esp += 16; return; /* ret 12 */

loc_00468152: ;
    eax = 0xFFFFFFF8u;
    esp = ebx;
    POP32(esp, ebx);
    esp += 16; return; /* ret 12 */

}

/**
 * sub_00468371
 * Original: 0x00468371 - 0x004683CB (90 bytes, 28 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00468371(void)
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

loc_00468371: ;
    esp = esp - 4;
    eax = MEM32(esp + 8);
    ecx = MEM32(esp + 0xC);
    xmm0 = MEMF(eax); /* movaps */
    xmm1 = MEMF(eax + 0x10); /* movaps */
    eax = eax + 0x20;
    ecx = ecx - 8;
    if ((ecx == 0)) goto loc_004683A4; /* je: equal / zero */

loc_0046838B: ;
    xmm2 = MEMF(eax); /* movaps */
    xmm3 = MEMF(eax + 0x10); /* movaps */
    /* TODO: prefetchnta byte ptr [eax + 0x40] */
    /* maxps xmm0, xmm2 (packed 4xfloat) */
    eax = eax + 0x20;
    ecx = ecx - 8;
    /* maxps xmm1, xmm3 (packed 4xfloat) */
    if ((ecx != 0)) goto loc_0046838B; /* jne: not equal / not zero */

loc_004683A4: ;
    /* maxps xmm0, xmm1 (packed 4xfloat) */
    xmm1 = xmm0; /* movaps */
    /* shufps xmm1, xmm1, 0x93 */
    /* maxps xmm0, xmm1 (packed 4xfloat) */
    /* shufps xmm1, xmm1, 0x93 */
    /* maxps xmm0, xmm1 (packed 4xfloat) */
    /* shufps xmm1, xmm1, 0x93 */
    /* maxps xmm0, xmm1 (packed 4xfloat) */
    MEMF(esp) = xmm0; /* movss */
    fp_push(MEMF(esp)); /* fld float */
    esp = esp + 4;
    esp += 4; return; /* ret */

    #undef fp_push
    #undef fp_pop
    #undef fp_popp
    #undef fp_top
    #undef fp_st1
}

/**
 * sub_004683D3
 * Original: 0x004683D3 - 0x00468415 (66 bytes, 20 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_004683D3(void)
{
    int _flags = 0; /* fallback flag var */
    uint64_t mm0, mm1, mm2, mm3, mm4;

loc_004683D3: ;
    eax = MEM32(esp + 4);
    mm0 = MEM32(esp + 8); /* movd */
    ecx = 0; /* xor self */
    /* TODO: punpckldq mm0, mm0 */

loc_004683E1: ;
    /* SSE: movq mm1, qword ptr [eax + ecx*4] */
    /* SSE: movq mm2, qword ptr [eax + ecx*4 + 8] */
    /* TODO: pcmpeqd mm1, mm0 */
    /* TODO: pcmpeqd mm2, mm0 */
    /* SSE: movq mm3, qword ptr [eax + ecx*4 + 0x10] */
    /* SSE: movq mm4, qword ptr [eax + ecx*4 + 0x18] */
    /* por mm1, mm2 (MMX/SIMD integer) */
    /* TODO: pcmpeqd mm3, mm0 */
    /* TODO: pcmpeqd mm4, mm0 */
    /* por mm3, mm4 (MMX/SIMD integer) */
    /* por mm1, mm3 (MMX/SIMD integer) */
    /* TODO: pmovmskb edx, mm1 */
    if (TEST_NZ(edx, edx)) { sub_00468415(); return; } /* jne: not equal / not zero */

loc_00468410: ;
    ecx = ecx + 8;
    goto loc_004683E1;

}

/**
 * sub_004684CD
 * Original: 0x004684CD - 0x0046851D (80 bytes, 32 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_004684CD(void)
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

loc_004684CD: ;
    edx = MEM32(esp + 8);
    ecx = MEM32(esp + 4);
    edx = edx << 2;
    ecx = ecx + edx;
    edx = (uint32_t)(-(int32_t)edx);
    eax = edx;
    fp_push(MEMF(edx + ecx)); /* fld float */
    edx = edx + 4;
    if ((edx == 0)) goto loc_0046850B; /* je: equal / zero */

loc_004684E6: ;
    goto loc_004684FF;

    /* nop */
    /* nop */
    /* nop */
    /* nop */
    /* nop */

loc_004684F3: ;
    eax = edx;
    edx = edx + 4;
    /* fstp st(0) */
    fp_push(MEMF(eax + ecx)); /* fld float */
    if ((edx == 0)) goto loc_0046850B; /* je: equal / zero */

loc_004684FF: ;
    fp_push(MEMF(edx + ecx)); /* fld float */
    _fpu_cmp = (fp_top() < fp_st1()) ? -1 : (fp_top() > fp_st1()) ? 1 : 0; fp_pop(); /* fcompi */
    if ((_fpu_cmp > 0) /* fcompi */) goto loc_004684F3; /* ja: above (unsigned >) */

loc_00468506: ;
    edx = edx + 4;
    if ((edx != 0)) goto loc_004684FF; /* jne: not equal / not zero */

loc_0046850B: ;
    edx = MEM32(esp + 8);
    eax = (uint32_t)(-(int32_t)eax);
    eax = (uint32_t)((int32_t)eax >> 2);
    edx = edx - eax;
    ecx = MEM32(esp + 0xC);
    MEM32(ecx) = edx;
    esp += 4; return; /* ret */

    #undef fp_push
    #undef fp_pop
    #undef fp_popp
    #undef fp_top
    #undef fp_st1
}

/**
 * sub_004685C0
 * Original: 0x004685C0 - 0x0046871F (351 bytes, 113 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_004685C0(void)
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

loc_004685C0: ;
    fp_push(MEMF(esp + 8)); /* fld float */
    esp = esp - 8;
    _fpu_cmp = (fp_top() < fp_st1()) ? -1 : (fp_top() > fp_st1()) ? 1 : 0; /* fcomp dword ptr [esp + 0x14] */
    /* fnstsw ax - store FPU status word */
    if (1 /* jp after test - parity */) goto loc_0046871B; /* jp: parity */

loc_004685D6: ;
    PUSH32(esp, ebx);
    PUSH32(esp, ebp);
    PUSH32(esp, esi);
    PUSH32(esp, edi);
    edi = MEM32(esp + 0x30);
    edi = edi;

loc_004685E0: ;
    fp_push(MEMF(esp + 0x20)); /* fld float */
    fp_st1() *= fp_top(); fp_pop(); /* fmul */
    MEMF(esp + 0x10) = (float)fp_top(); fp_popp(); /* fstp */
    fp_push(MEMF(esp + 0x10)); /* fld float */
    MEM32(esp + 0x14) = (int32_t)fp_top(); /* fistp */
    ebp = MEM32(esp + 0x2C);
    fp_push(MEMF(esp + 0x34)); /* fld float */
    edx = MEM32(esp + 0x14);
    esi = MEM32(0x655444);
    ebx = 0; /* xor self */
    if (CMP_L(ebp, 4)) goto loc_004686A3; /* jl: less (signed <) */

loc_00468613: ;
    ebx = MEM32(esp + 0x38);
    eax = edi + 4;
    ecx = ebx + 0xC;
    ebx = ebx - edi;
    edi = ebp + -4;
    edi = edi >> 2;
    edi++;
    ebp = edi * 4;
    MEM32(esp + 0x10) = ebp;

loc_00468631: ;
    ebp = MEM32(ecx + -12);
    ebp = (uint32_t)((int32_t)ebp * (int32_t)edx);
    ebp = ebp + 0x800000;
    ebp = ebp >> 0x18;
    eax = eax + 0x10;
    ecx = ecx + 0x10;
    fp_push(MEMF(esi + ebp * 4)); /* fld float */
    ebp = MEM32(ebx + eax + -16);
    fp_st1() *= fp_top(); fp_pop(); /* fmul */
    ebp = (uint32_t)((int32_t)ebp * (int32_t)edx);
    fp_st1() += fp_top(); fp_pop(); /* faddp */
    ebp = ebp + 0x800000;
    ebp = ebp >> 0x18;
    fp_push(MEMF(esi + ebp * 4)); /* fld float */
    ebp = MEM32(ecx + -20);
    fp_st1() *= fp_top(); fp_pop(); /* fmul */
    ebp = (uint32_t)((int32_t)ebp * (int32_t)edx);
    fp_st1() += fp_top(); fp_pop(); /* faddp */
    ebp = ebp + 0x800000;
    ebp = ebp >> 0x18;
    fp_push(MEMF(esi + ebp * 4)); /* fld float */
    ebp = MEM32(ecx + -16);
    fp_st1() *= fp_top(); fp_pop(); /* fmul */
    ebp = (uint32_t)((int32_t)ebp * (int32_t)edx);
    fp_st1() += fp_top(); fp_pop(); /* faddp */
    ebp = ebp + 0x800000;
    ebp = ebp >> 0x18;
    edi--;
    fp_push(MEMF(esi + ebp * 4)); /* fld float */
    fp_st1() *= fp_top(); fp_pop(); /* fmul */
    fp_st1() += fp_top(); fp_pop(); /* faddp */
    if ((edi != 0)) goto loc_00468631; /* jne: not equal / not zero */

loc_00468697: ;
    edi = MEM32(esp + 0x30);
    ebx = MEM32(esp + 0x10);
    ebp = MEM32(esp + 0x2C);

loc_004686A3: ;
    if (CMP_GE(ebx, ebp)) goto loc_004686DD; /* jge: greater or equal (signed >=) */

loc_004686A7: ;
    ebp = MEM32(esp + 0x38);
    ecx = MEM32(esp + 0x2C);
    ebp = ebp - edi;
    eax = edi + ebx * 4;
    ecx = ecx - ebx;
    goto loc_004686C0;

    /* nop */
    /* nop */

loc_004686C0: ;
    ebx = MEM32(eax + ebp);
    ebx = (uint32_t)((int32_t)ebx * (int32_t)edx);
    ebx = ebx + 0x800000;
    ebx = ebx >> 0x18;
    eax = eax + 4;
    ecx--;
    fp_push(MEMF(esi + ebx * 4)); /* fld float */
    fp_st1() *= fp_top(); fp_pop(); /* fmul */
    fp_st1() += fp_top(); fp_pop(); /* faddp */
    if ((ecx != 0)) goto loc_004686C0; /* jne: not equal / not zero */

loc_004686DD: ;
    ecx = MEM32(esp + 0x28);
    /* fld st(0) */
    _fpu_cmp = (fp_top() < fp_st1()) ? -1 : (fp_top() > fp_st1()) ? 1 : 0; /* fcomp dword ptr [ecx] */
    /* fnstsw ax - store FPU status word */
    if (TEST_NZ(HI8(eax), 0x41)) goto loc_004686FA; /* jne: not equal / not zero */

loc_004686EC: ;
    eax = MEM32(esp + 0x20);
    MEMF(ecx) = (float)fp_top(); fp_popp(); /* fstp */
    ecx = MEM32(esp + 0x3C);
    MEM32(ecx) = eax;
    goto loc_004686FC;

loc_004686FA: ;
    /* fstp st(0) */

loc_004686FC: ;
    fp_push(MEMF(esp + 0x1C)); /* fld float */
    fp_st1() += fp_top(); fp_pop(); /* fadd */
    MEMF(esp + 0x20) = (float)fp_top(); fp_pop(); /* fst */
    _fpu_cmp = (fp_top() < fp_st1()) ? -1 : (fp_top() > fp_st1()) ? 1 : 0; /* fcomp dword ptr [esp + 0x24] */
    /* fnstsw ax - store FPU status word */
    if (1 /* jnp after test - parity */) goto loc_004685E0; /* jnp: not parity */

loc_00468717: ;
    POP32(esp, edi);
    POP32(esp, esi);
    POP32(esp, ebp);
    POP32(esp, ebx);

loc_0046871B: ;
    esp = esp + 8;
    esp += 4; return; /* ret */

    #undef fp_push
    #undef fp_pop
    #undef fp_popp
    #undef fp_top
    #undef fp_st1
}

/**
 * sub_00468720
 * Original: 0x00468720 - 0x00468778 (88 bytes, 24 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00468720(void)
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

loc_00468720: ;
    fp_push(MEMF(0x648D14)); /* fld float */
    fp_push(MEMF(esp + 4)); /* fld float */
    fp_st1() += fp_top(); fp_pop(); /* fadd */
    _fpu_cmp = (fp_top() < fp_st1()) ? -1 : (fp_top() > fp_st1()) ? 1 : 0; /* fcom dword ptr [0x648d80] */
    /* fnstsw ax - store FPU status word */
    if (1 /* jp after test - parity */) goto loc_0046875D; /* jp: parity */

loc_0046873D: ;
    /* nop */

loc_00468740: ;
    fp_st1() *= fp_top(); fp_pop(); /* fmul */
    { double _t = fp_top(); fp_top() = fp_st1(); fp_st1() = _t; } /* fxch */
    fp_st1() *= fp_top(); fp_pop(); /* fmul */
    { double _t = fp_top(); fp_top() = fp_st1(); fp_st1() = _t; } /* fxch */
    _fpu_cmp = (fp_top() < fp_st1()) ? -1 : (fp_top() > fp_st1()) ? 1 : 0; /* fcom dword ptr [0x648d80] */
    /* fnstsw ax - store FPU status word */
    if (1 /* jnp after test - parity */) goto loc_00468740; /* jnp: not parity */

loc_0046875D: ;
    fp_push(MEMF(0x585BA4)); /* fld float */
    fp_st1() *= fp_top(); fp_pop(); /* fmul */
    /* FPU: fsubr dword ptr [0x585ba0] */
    fp_st1() *= fp_top(); fp_pop(); /* fmul */
    fp_st1() += fp_top(); fp_pop(); /* fadd */
    fp_st1() *= fp_top(); fp_pop(); /* fmulp */
    /* fstp st(0) */
    esp += 4; return; /* ret */

    #undef fp_push
    #undef fp_pop
    #undef fp_popp
    #undef fp_top
    #undef fp_st1
}

/**
 * sub_00468780
 * Original: 0x00468780 - 0x004687BD (61 bytes, 25 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00468780(void)
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

loc_00468780: ;
    PUSH32(esp, esi);
    esi = MEM32(esp + 0x10);
    PUSH32(esp, edi);
    edi = MEM32(esp + 0x10);
    if (CMP_GE(esi, edi)) goto loc_004687BA; /* jge: greater or equal (signed >=) */

loc_0046878E: ;
    PUSH32(esp, ebx);
    ebx = MEM32(esp + 0x1C);
    PUSH32(esp, ebp);
    ebp = MEM32(esp + 0x14);

loc_00468798: ;
    PUSH32(esp, ebx);
    PUSH32(esp, 0); sub_0046DA00(); /* call 0x0046DA00 */

loc_0046879E: ;
    MEM32(esp + 0x20) = eax;
    fp_push((double)SMEM32(esp + 0x20)); /* fild */
    esp = esp + 4;
    esi++;
    (void)0; /* cmp esi, edi - flags set for next jcc */
    fp_st1() *= fp_top(); fp_pop(); /* fmul */
    MEMF(ebp + esi * 4 + -4) = (float)fp_top(); fp_popp(); /* fstp */
    if (CMP_L(esi, edi)) goto loc_00468798; /* jl: less (signed <) */

loc_004687B8: ;
    POP32(esp, ebp);
    POP32(esp, ebx);

loc_004687BA: ;
    POP32(esp, edi);
    POP32(esp, esi);
    esp += 4; return; /* ret */

    #undef fp_push
    #undef fp_pop
    #undef fp_popp
    #undef fp_top
    #undef fp_st1
}

/**
 * sub_004687C0
 * Original: 0x004687C0 - 0x0046891A (346 bytes, 111 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_004687C0(void)
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

loc_004687C0: ;
    esp = esp - 8;
    eax = MEM32(esp + 0x10);
    PUSH32(esp, ebp);
    ebp = MEM32(esp + 0x20);
    (void)0; /* test ebp, ebp - flags set for next jcc */
    PUSH32(esp, esi);
    esi = MEM32(esp + 0x2C);
    ecx = MEM32(esi + 0xFC);
    PUSH32(esp, edi);
    edi = MEM32(esp + 0x38);
    MEM32(esi + 0x100) = ecx;
    edx = MEM32(edi + 0xFC);
    MEM32(esp + 0xC) = eax;
    MEM32(edi + 0x100) = edx;
    if (CMP_LE(ebp & ebp, 0)) goto loc_004688AD; /* jle: less or equal (signed <=) */

loc_004687FA: ;
    eax = MEM32(esp + 0x20);
    PUSH32(esp, ebx);
    ebx = MEM32(esp + 0x28);
    eax = eax - ebx;
    MEM32(esp + 0x34) = ebp;
    ebp = MEM32(esp + 0x40);
    MEM32(esp + 0x14) = eax;

loc_00468811: ;
    eax = MEM32(esp + 0x10);
    PUSH32(esp, eax);
    PUSH32(esp, 0); sub_00459320(); /* call 0x00459320 */

loc_0046881B: ;
    fp_st1() *= fp_top(); fp_pop(); /* fmul */
    fp_push(MEMF(esp + 0x14)); /* fld float */
    esp = esp + 4;
    fp_st1() += fp_top(); fp_pop(); /* fadd */
    MEMF(esp + 0x10) = (float)fp_top(); fp_popp(); /* fstp */
    /* fld st(0) */
    PUSH32(esp, 0); sub_00471288(); /* call 0x00471288 */

loc_00468837: ;
    ecx = MEM32(esp + 0x38);
    MEM32(esp + 0x3C) = eax;
    /* FPU: fisub dword ptr [esp + 0x3c] */
    ebx = ebx + 4;
    fp_push(MEMF(ecx + eax * 4 + 4)); /* fld float */
    fp_st1() -= fp_top(); fp_pop(); /* fsub */
    fp_st1() *= fp_top(); fp_pop(); /* fmul */
    fp_st1() += fp_top(); fp_pop(); /* fadd */
    ecx = MEM32(esp + 0x14);
    fp_push(MEMF(esi + eax * 4 + 4)); /* fld float */
    fp_st1() -= fp_top(); fp_pop(); /* fsub */
    fp_st1() *= fp_top(); fp_pop(); /* fmul */
    fp_st1() += fp_top(); fp_pop(); /* fadd */
    fp_st1() -= fp_top(); fp_pop(); /* fsub */
    fp_st1() *= fp_top(); fp_pop(); /* fmul */
    fp_st1() += fp_top(); fp_pop(); /* fadd */
    MEMF(ecx + ebx + -4) = (float)fp_top(); fp_popp(); /* fstp */
    /* fstp st(0) */
    fp_push(MEMF(ebp + eax * 4 + 4)); /* fld float */
    fp_st1() -= fp_top(); fp_pop(); /* fsub */
    fp_st1() *= fp_top(); fp_pop(); /* fmul */
    fp_st1() += fp_top(); fp_pop(); /* fadd */
    fp_push(MEMF(edi + eax * 4 + 4)); /* fld float */
    fp_st1() -= fp_top(); fp_pop(); /* fsub */
    fp_st1() *= fp_top(); fp_pop(); /* fmul */
    fp_st1() += fp_top(); fp_pop(); /* fadd */
    eax = MEM32(esp + 0x34);
    eax--;
    MEM32(esp + 0x34) = eax;
    fp_st1() -= fp_top(); fp_pop(); /* fsub */
    fp_st1() *= fp_top(); fp_pop(); /* fmul */
    fp_st1() += fp_top(); fp_pop(); /* fadd */
    MEMF(ebx + -4) = (float)fp_top(); fp_popp(); /* fstp */
    /* fstp st(0) */
    /* fstp st(0) */
    if ((eax != 0)) goto loc_00468811; /* jne: not equal / not zero */

loc_004688A8: ;
    ebp = MEM32(esp + 0x2C);
    POP32(esp, ebx);

loc_004688AD: ;
    edx = MEM32(esp + 0x2C);
    esi = MEM32(esp + 0x20);
    eax = ebp;
    eax = eax - edx;
    if (CMP_L(eax, 4)) goto loc_004688FE; /* jl: less (signed <) */

loc_004688BE: ;
    ecx = ebp;
    ecx = ecx - edx;
    ecx = ecx - 4;
    ecx = ecx >> 2;
    ecx++;
    eax = esi + edx * 4 + 8;
    edx = edx + ecx * 4;

loc_004688D0: ;
    fp_push(MEMF(esp + 0x18)); /* fld float */
    eax = eax + 0x10;
    ecx--;
    fp_st1() += fp_top(); fp_pop(); /* fadd */
    MEMF(eax + -24) = (float)fp_top(); fp_popp(); /* fstp */
    fp_push(MEMF(esp + 0x18)); /* fld float */
    fp_st1() += fp_top(); fp_pop(); /* fadd */
    MEMF(eax + -20) = (float)fp_top(); fp_popp(); /* fstp */
    fp_push(MEMF(esp + 0x18)); /* fld float */
    fp_st1() += fp_top(); fp_pop(); /* fadd */
    MEMF(eax + -16) = (float)fp_top(); fp_popp(); /* fstp */
    fp_push(MEMF(esp + 0x18)); /* fld float */
    fp_st1() += fp_top(); fp_pop(); /* fadd */
    MEMF(eax + -12) = (float)fp_top(); fp_popp(); /* fstp */
    if ((ecx != 0)) goto loc_004688D0; /* jne: not equal / not zero */

loc_004688FE: ;
    if (CMP_GE(edx, ebp)) goto loc_00468913; /* jge: greater or equal (signed >=) */

loc_00468902: ;
    fp_push(MEMF(esp + 0x18)); /* fld float */
    edx++;
    (void)0; /* cmp edx, ebp - flags set for next jcc */
    fp_st1() += fp_top(); fp_pop(); /* fadd */
    MEMF(esi + edx * 4 + -4) = (float)fp_top(); fp_popp(); /* fstp */
    if (CMP_L(edx, ebp)) goto loc_00468902; /* jl: less (signed <) */

loc_00468913: ;
    POP32(esp, edi);
    POP32(esp, esi);
    POP32(esp, ebp);
    esp = esp + 8;
    esp += 4; return; /* ret */

    #undef fp_push
    #undef fp_pop
    #undef fp_popp
    #undef fp_top
    #undef fp_st1
}

/**
 * sub_00468920
 * Original: 0x00468920 - 0x00468A57 (311 bytes, 114 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00468920(void)
{
    uint32_t ebp;
    int _flags = 0; /* fallback flag var */
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_00468920: ;
    PUSH32(esp, ecx);
    eax = MEM32(esp + 0x14);
    PUSH32(esp, ebx);
    ebx = MEM32(esp + 0x20);
    PUSH32(esp, ebp);
    ebp = MEM32(esp + 0x18);
    eax--;
    PUSH32(esp, esi);
    esi = MEM32(esp + 0x18);
    ebp--;
    (void)0; /* cmp ebp, ebx - flags set for next jcc */
    PUSH32(esp, edi);
    edi = MEM32(esp + 0x18);
    MEM32(esp + 0x20) = ebp;
    if (CMP_L(ebp, ebx)) goto loc_00468A05; /* jl: less (signed <) */

loc_00468947: ;
    ecx = esi + ebp * 4;
    ebp = ebp - ebx;
    ebx = MEM32(esp + 0x20);
    edx = edi;
    edx = edx - esi;
    ebp++;
    ebx = ebx - ebp;
    MEM32(esp + 0x2C) = ebp;
    MEM32(esp + 0x20) = ebx;
    /* nop */

loc_00468960: ;
    ebx = MEM32(esp + 0x28);
    (void)0; /* cmp ebx, 4 - flags set for next jcc */
    MEM32(esp + 0x24) = 0;
    if (CMP_L(ebx, 4)) goto loc_004689BC; /* jl: less (signed <) */

loc_00468971: ;
    ebx = ebx + 0xFFFFFFFCu;
    ebx = ebx >> 2;
    ebx++;
    ebp = ebx * 4;
    MEM32(esp + 0x24) = ebp;

loc_00468983: ;
    ebp = MEM32(ecx + edx);
    MEM32(edi + eax * 4) = ebp;
    ebp = MEM32(ecx);
    MEM32(esi + eax * 4) = ebp;
    ebp = MEM32(ecx + edx);
    MEM32(edi + eax * 4 + -4) = ebp;
    ebp = MEM32(ecx);
    eax--;
    MEM32(esi + eax * 4) = ebp;
    ebp = MEM32(ecx + edx);
    MEM32(edi + eax * 4 + -4) = ebp;
    ebp = MEM32(ecx);
    eax--;
    MEM32(esi + eax * 4) = ebp;
    ebp = MEM32(ecx + edx);
    eax--;
    MEM32(edi + eax * 4) = ebp;
    ebp = MEM32(ecx);
    MEM32(esi + eax * 4) = ebp;
    eax--;
    ebx--;
    if ((ebx != 0)) goto loc_00468983; /* jne: not equal / not zero */

loc_004689B8: ;
    ebx = MEM32(esp + 0x28);

loc_004689BC: ;
    if (CMP_GE(MEM32(esp + 0x24), ebx)) goto loc_004689EF; /* jge: greater or equal (signed >=) */

loc_004689C2: ;
    ebp = esi + eax * 4;
    MEM32(esp + 0x10) = ebp;
    ebx = ebx - MEM32(esp + 0x24);
    MEM32(esp + 0x24) = ebx;
    eax = eax - ebx;
    ebx = MEM32(esp + 0x10);

loc_004689D7: ;
    ebp = MEM32(ecx + edx);
    MEM32(edx + ebx) = ebp;
    ebp = MEM32(ecx);
    MEM32(ebx) = ebp;
    ebp = MEM32(esp + 0x24);
    ebx = ebx - 4;
    ebp--;
    MEM32(esp + 0x24) = ebp;
    if ((ebp != 0)) goto loc_004689D7; /* jne: not equal / not zero */

loc_004689EF: ;
    ebx = MEM32(esp + 0x2C);
    ecx = ecx - 4;
    ebx--;
    MEM32(esp + 0x2C) = ebx;
    if ((ebx != 0)) goto loc_00468960; /* jne: not equal / not zero */

loc_00468A01: ;
    ebp = MEM32(esp + 0x20);

loc_00468A05: ;
    if (TEST_S(ebp, ebp)) goto loc_00468A51; /* jl: less (signed <) */

loc_00468A09: ;
    ecx = esi + ebp * 4;
    ebx = edi;
    ebx = ebx - esi;
    MEM32(esp + 0x24) = ecx;
    ebp++;

loc_00468A15: ;
    edx = MEM32(ecx + ebx);
    MEM32(edi + eax * 4) = edx;
    edx = MEM32(ecx);
    MEM32(esi + eax * 4) = edx;
    edx = MEM32(esp + 0x28);
    eax--;
    if (CMP_LE(edx, 1)) goto loc_00468A47; /* jle: less or equal (signed <=) */

loc_00468A2A: ;
    edx--;
    ecx = esi + eax * 4;
    eax = eax - edx;

loc_00468A30: ;
    MEM32(ecx + ebx) = 0;
    MEM32(ecx) = 0;
    ecx = ecx - 4;
    edx--;
    if ((edx != 0)) goto loc_00468A30; /* jne: not equal / not zero */

loc_00468A43: ;
    ecx = MEM32(esp + 0x24);

loc_00468A47: ;
    ecx = ecx - 4;
    ebp--;
    MEM32(esp + 0x24) = ecx;
    if ((ebp != 0)) goto loc_00468A15; /* jne: not equal / not zero */

loc_00468A51: ;
    POP32(esp, edi);
    POP32(esp, esi);
    POP32(esp, ebp);
    POP32(esp, ebx);
    POP32(esp, ecx);
    esp += 4; return; /* ret */

}

/**
 * sub_00468A60
 * Original: 0x00468A60 - 0x00468B61 (257 bytes, 91 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00468A60(void)
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

loc_00468A60: ;
    fp_push(MEMF(0x64A72C)); /* fld float */
    fp_push(MEMF(esp + 4)); /* fld float */
    fp_st1() *= fp_top(); fp_pop(); /* fmul */
    PUSH32(esp, 0); sub_00471288(); /* call 0x00471288 */

loc_00468A75: ;
    ecx = MEM32(esp + 0xC);
    if (CMP_GE(eax, ecx)) goto loc_00468A97; /* jge: greater or equal (signed >=) */

loc_00468A7D: ;
    edx = ecx;
    /* fstp st(0) */
    edx = edx - eax;
    MEM32(esp + 4) = edx;
    fp_push((double)SMEM32(esp + 4)); /* fild */
    fp_st1() *= fp_top(); fp_pop(); /* fmul */
    fp_st1() += fp_top(); fp_pop(); /* fadd */

loc_00468A97: ;
    PUSH32(esp, ebx);
    ebx = MEM32(esp + 0x14);
    edx = ebx;
    edx = edx - ecx;
    (void)0; /* cmp edx, 4 - flags set for next jcc */
    PUSH32(esp, esi);
    esi = MEM32(esp + 0x10);
    if (CMP_L(edx, 4)) goto loc_00468B36; /* jl: less (signed <) */

loc_00468AAE: ;
    PUSH32(esp, ebp);
    edx = ecx + -1;
    esi = esi + ecx * 4 + 8;
    PUSH32(esp, edi);

loc_00468AB7: ;
    if (CMP_L(ecx, eax)) goto loc_00468AC1; /* jl: less (signed <) */

loc_00468ABB: ;
    fp_st1() += fp_top(); fp_pop(); /* fadd */

loc_00468AC1: ;
    ebp = ecx;
    ebp = ebp & 1;
    if ((ebp != 0)) goto loc_00468AD0; /* jne: not equal / not zero */

loc_00468AC8: ;
    /* fld st(0) */
    fp_st1() += fp_top(); fp_pop(); /* fadd */
    MEMF(esi + -8) = (float)fp_top(); fp_popp(); /* fstp */

loc_00468AD0: ;
    edi = edx + 3;
    ebx = edi + -1;
    if (CMP_L(ebx, eax)) goto loc_00468AE0; /* jl: less (signed <) */

loc_00468ADA: ;
    fp_st1() += fp_top(); fp_pop(); /* fadd */

loc_00468AE0: ;
    ebx = edx;
    ebx = ebx & 1;
    if ((ebx != 0)) goto loc_00468AEF; /* jne: not equal / not zero */

loc_00468AE7: ;
    /* fld st(0) */
    fp_st1() += fp_top(); fp_pop(); /* fadd */
    MEMF(esi + -4) = (float)fp_top(); fp_popp(); /* fstp */

loc_00468AEF: ;
    if (CMP_L(edi, eax)) goto loc_00468AF9; /* jl: less (signed <) */

loc_00468AF3: ;
    fp_st1() += fp_top(); fp_pop(); /* fadd */

loc_00468AF9: ;
    if (TEST_NZ(ebp, ebp)) goto loc_00468B03; /* jne: not equal / not zero */

loc_00468AFD: ;
    /* fld st(0) */
    fp_st1() += fp_top(); fp_pop(); /* fadd */
    MEMF(esi) = (float)fp_top(); fp_popp(); /* fstp */

loc_00468B03: ;
    edi = edx + 4;
    if (CMP_L(edi, eax)) goto loc_00468B10; /* jl: less (signed <) */

loc_00468B0A: ;
    fp_st1() += fp_top(); fp_pop(); /* fadd */

loc_00468B10: ;
    if (TEST_NZ(ebx, ebx)) goto loc_00468B1C; /* jne: not equal / not zero */

loc_00468B14: ;
    /* fld st(0) */
    fp_st1() += fp_top(); fp_pop(); /* fadd */
    MEMF(esi + 4) = (float)fp_top(); fp_popp(); /* fstp */

loc_00468B1C: ;
    ebx = MEM32(esp + 0x20);
    ecx = ecx + 4;
    edi = ebx + -3;
    esi = esi + 0x10;
    edx = edx + 4;
    if (CMP_L(ecx, edi)) goto loc_00468AB7; /* jl: less (signed <) */

loc_00468B30: ;
    esi = MEM32(esp + 0x18);
    POP32(esp, edi);
    POP32(esp, ebp);

loc_00468B36: ;
    if (CMP_GE(ecx, ebx)) goto loc_00468B5C; /* jge: greater or equal (signed >=) */

loc_00468B3A: ;
    /* nop */

loc_00468B40: ;
    if (CMP_L(ecx, eax)) goto loc_00468B4A; /* jl: less (signed <) */

loc_00468B44: ;
    fp_st1() += fp_top(); fp_pop(); /* fadd */

loc_00468B4A: ;
    if (TEST_NZ(LO8(ecx), 1)) goto loc_00468B57; /* jne: not equal / not zero */

loc_00468B4F: ;
    /* fld st(0) */
    fp_st1() += fp_top(); fp_pop(); /* fadd */
    MEMF(esi + ecx * 4) = (float)fp_top(); fp_popp(); /* fstp */

loc_00468B57: ;
    ecx++;
    if (CMP_L(ecx, ebx)) goto loc_00468B40; /* jl: less (signed <) */

loc_00468B5C: ;
    POP32(esp, esi);
    /* fstp st(0) */
    POP32(esp, ebx);
    esp += 4; return; /* ret */

    #undef fp_push
    #undef fp_pop
    #undef fp_popp
    #undef fp_top
    #undef fp_st1
}

/**
 * sub_00468B70
 * Original: 0x00468B70 - 0x00468C73 (259 bytes, 96 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00468B70(void)
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

loc_00468B70: ;
    fp_push(MEMF(esp + 4)); /* fld float */
    PUSH32(esp, ebp);
    fp_st1() += fp_top(); fp_pop(); /* fadd */
    PUSH32(esp, esi);
    esi = MEM32(esp + 0x18);
    PUSH32(esp, edi);
    edi = MEM32(esp + 0x20);
    ecx = 0; /* xor self */
    if (CMP_L(edi, 4)) goto loc_00468BD6; /* jl: less (signed <) */

loc_00468B8A: ;
    edx = edi + -4;
    edx = edx >> 2;
    edx++;
    eax = esi + 8;
    ecx = edx * 4;
    goto loc_00468BA0;

    /* nop */

loc_00468BA0: ;
    /* fld st(0) */
    eax = eax + 0x10;
    edx--;
    fp_st1() += fp_top(); fp_pop(); /* fadd */
    MEMF(eax + -24) = (float)fp_top(); fp_popp(); /* fstp */
    fp_st1() += fp_top(); fp_pop(); /* fadd */
    /* fld st(0) */
    fp_st1() += fp_top(); fp_pop(); /* fadd */
    MEMF(eax + -20) = (float)fp_top(); fp_popp(); /* fstp */
    fp_st1() += fp_top(); fp_pop(); /* fadd */
    /* fld st(0) */
    fp_st1() += fp_top(); fp_pop(); /* fadd */
    MEMF(eax + -16) = (float)fp_top(); fp_popp(); /* fstp */
    fp_st1() += fp_top(); fp_pop(); /* fadd */
    /* fld st(0) */
    fp_st1() += fp_top(); fp_pop(); /* fadd */
    MEMF(eax + -12) = (float)fp_top(); fp_popp(); /* fstp */
    fp_st1() += fp_top(); fp_pop(); /* fadd */
    if ((edx != 0)) goto loc_00468BA0; /* jne: not equal / not zero */

loc_00468BD6: ;
    if (CMP_GE(ecx, edi)) goto loc_00468BF3; /* jge: greater or equal (signed >=) */

loc_00468BDA: ;
    /* nop */

loc_00468BE0: ;
    /* fld st(0) */
    ecx++;
    (void)0; /* cmp ecx, edi - flags set for next jcc */
    fp_st1() += fp_top(); fp_pop(); /* fadd */
    MEMF(esi + ecx * 4 + -4) = (float)fp_top(); fp_popp(); /* fstp */
    fp_st1() += fp_top(); fp_pop(); /* fadd */
    if (CMP_L(ecx, edi)) goto loc_00468BE0; /* jl: less (signed <) */

loc_00468BF3: ;
    edi = MEM32(esp + 0x24);
    /* fstp st(0) */
    ecx = MEM32(esp + 0x18);
    ebp = 0; /* xor self */
    if (CMP_L(edi, 4)) goto loc_00468C53; /* jl: less (signed <) */

loc_00468C04: ;
    PUSH32(esp, ebx);
    ebx = ecx;
    edx = ecx + 0xC;
    ecx = edi + -4;
    ecx = ecx >> 2;
    ebx = ebx - esi;
    ecx++;
    eax = esi + 4;
    ebp = ecx * 4;
    /* nop */

loc_00468C20: ;
    fp_push(MEMF(edx + -12)); /* fld float */
    eax = eax + 0x10;
    fp_st1() += fp_top(); fp_pop(); /* fadd */
    edx = edx + 0x10;
    ecx--;
    MEMF(eax + -20) = (float)fp_top(); fp_popp(); /* fstp */
    fp_push(MEMF(ebx + eax + -16)); /* fld float */
    fp_st1() += fp_top(); fp_pop(); /* fadd */
    MEMF(eax + -16) = (float)fp_top(); fp_popp(); /* fstp */
    fp_push(MEMF(edx + -20)); /* fld float */
    fp_st1() += fp_top(); fp_pop(); /* fadd */
    MEMF(eax + -12) = (float)fp_top(); fp_popp(); /* fstp */
    fp_push(MEMF(edx + -16)); /* fld float */
    fp_st1() += fp_top(); fp_pop(); /* fadd */
    MEMF(eax + -8) = (float)fp_top(); fp_popp(); /* fstp */
    if ((ecx != 0)) goto loc_00468C20; /* jne: not equal / not zero */

loc_00468C4E: ;
    ecx = MEM32(esp + 0x1C);
    POP32(esp, ebx);

loc_00468C53: ;
    if (CMP_GE(ebp, edi)) goto loc_00468C6F; /* jge: greater or equal (signed >=) */

loc_00468C57: ;
    ecx = ecx - esi;
    eax = esi + ebp * 4;
    edi = edi - ebp;
    edi = edi;

loc_00468C60: ;
    fp_push(MEMF(ecx + eax)); /* fld float */
    eax = eax + 4;
    edi--;
    fp_st1() += fp_top(); fp_pop(); /* fadd */
    MEMF(eax + -4) = (float)fp_top(); fp_popp(); /* fstp */
    if ((edi != 0)) goto loc_00468C60; /* jne: not equal / not zero */

loc_00468C6F: ;
    POP32(esp, edi);
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
 * sub_00468C80
 * Original: 0x00468C80 - 0x00468CBD (61 bytes, 19 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00468C80(void)
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

loc_00468C80: ;
    PUSH32(esp, esi);
    esi = 0; /* xor self */

loc_00468C83: ;
    fp_push(MEMF(esp + 8)); /* fld float */
    _fpu_cmp = (fp_top() < fp_st1()) ? -1 : (fp_top() > fp_st1()) ? 1 : 0; /* fcomp dword ptr [esi*4 + 0x585bd0] */
    /* fnstsw ax - store FPU status word */
    if (TEST_Z(HI8(eax), 0x41)) goto loc_00468C9B; /* je: equal / zero */

loc_00468C95: ;
    esi++;
    if (CMP_L(esi, 5)) goto loc_00468C83; /* jl: less (signed <) */

loc_00468C9B: ;
    eax = MEM32(esp + 0xC);
    PUSH32(esp, eax);
    PUSH32(esp, 0); sub_00459020(); /* call 0x00459020 */

loc_00468CA5: ;
    fp_st1() *= fp_top(); fp_pop(); /* fmul */
    esp = esp + 4;
    fp_st1() += fp_top(); fp_pop(); /* fadd */
    POP32(esp, esi);
    fp_st1() -= fp_top(); fp_pop(); /* fsub */
    esp += 4; return; /* ret */

    #undef fp_push
    #undef fp_pop
    #undef fp_popp
    #undef fp_top
    #undef fp_st1
}

/**
 * sub_00468CC0
 * Original: 0x00468CC0 - 0x00468D67 (167 bytes, 64 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00468CC0(void)
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

loc_00468CC0: ;
    eax = MEM32(esp + 0x14);
    ecx = MEM32(esp + 4);
    PUSH32(esp, ebx);
    ebx = MEM32(esp + 0x14);
    PUSH32(esp, edi);
    edi = MEM32(esp + 0x14);
    ebx = ebx - edi;
    if (TEST_Z(LO8(ebx), 1)) goto loc_00468CE6; /* je: equal / zero */

loc_00468CD9: ;
    fp_push(MEMF(ecx)); /* fld float */
    ecx = ecx + 4;
    fp_st1() += fp_top(); fp_pop(); /* fadd */
    eax = eax + 4;
    MEMF(eax + -4) = (float)fp_top(); fp_popp(); /* fstp */

loc_00468CE6: ;
    ebx = (uint32_t)((int32_t)ebx >> 1);
    (void)0; /* cmp ebx, 4 - flags set for next jcc */
    PUSH32(esp, esi);
    edx = ebx;
    if (CMP_L(ebx, 4)) goto loc_00468D43; /* jl: less (signed <) */

loc_00468CF0: ;
    esi = ebx + -4;
    esi = esi >> 2;
    esi++;
    edx = esi * 4;
    PUSH32(esp, ebp);
    ebp = edx;
    edx = ebx;
    edx = edx - ebp;
    POP32(esp, ebp);

loc_00468D06: ;
    fp_push(MEMF(ecx)); /* fld float */
    ecx = ecx + 4;
    fp_st1() += fp_top(); fp_pop(); /* fadd */
    eax = eax + 4;
    ecx = ecx + 4;
    eax = eax + 4;
    MEMF(eax + -8) = (float)fp_top(); fp_popp(); /* fstp */
    ecx = ecx + 4;
    fp_push(MEMF(ecx + -8)); /* fld float */
    eax = eax + 4;
    fp_st1() += fp_top(); fp_pop(); /* fadd */
    ecx = ecx + 4;
    eax = eax + 4;
    esi--;
    MEMF(eax + -12) = (float)fp_top(); fp_popp(); /* fstp */
    fp_push(MEMF(ecx + -8)); /* fld float */
    fp_st1() += fp_top(); fp_pop(); /* fadd */
    MEMF(eax + -8) = (float)fp_top(); fp_popp(); /* fstp */
    fp_push(MEMF(ecx + -4)); /* fld float */
    fp_st1() += fp_top(); fp_pop(); /* fadd */
    MEMF(eax + -4) = (float)fp_top(); fp_popp(); /* fstp */
    if ((esi != 0)) goto loc_00468D06; /* jne: not equal / not zero */

loc_00468D43: ;
    if (CMP_LE(edx & edx, 0)) goto loc_00468D57; /* jle: less or equal (signed <=) */

loc_00468D47: ;
    fp_push(MEMF(ecx)); /* fld float */
    ecx = ecx + 4;
    fp_st1() += fp_top(); fp_pop(); /* fadd */
    eax = eax + 4;
    edx--;
    MEMF(eax + -4) = (float)fp_top(); fp_popp(); /* fstp */
    if ((edx != 0)) goto loc_00468D47; /* jne: not equal / not zero */

loc_00468D57: ;
    if (CMP_LE(edi & edi, 0)) { sub_00468D67(); return; } /* jle: less or equal (signed <=) */

loc_00468D5B: ;
    fp_push((double)SMEM32(esp + 0x18)); /* fild */
    /* FPU: fdivr dword ptr [0x648d14] */
    g_seh_ebp = ebp; sub_00468D6D(); return; /* tail jmp 0x00468D6D */

    #undef fp_push
    #undef fp_pop
    #undef fp_popp
    #undef fp_top
    #undef fp_st1
}

/**
 * sub_00468EF0
 * Original: 0x00468EF0 - 0x0046912A (570 bytes, 202 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00468EF0(void)
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

loc_00468EF0: ;
    PUSH32(esp, ecx);
    ecx = MEM32(esp + 0x14);
    fp_push(MEMF(esp + 0x18)); /* fld float */
    fp_st1() *= fp_top(); fp_pop(); /* fmul */
    PUSH32(esp, ebx);
    PUSH32(esp, ebp);
    eax = 1;
    eax = eax << LO8(ecx);
    ecx = ecx + 0x10;
    PUSH32(esp, esi);
    esi = MEM32(esp + 0x1C);
    ebx = 1;
    ebx = ebx << LO8(ecx);
    ecx = MEM32(esi);
    MEM32(esi + eax * 4) = ecx;
    edx = MEM32(esi + 4);
    MEM32(esi + eax * 4 + 4) = edx;
    ecx = MEM32(esi + 8);
    edx = MEM32(esi + eax * 4 + -4);
    MEM32(esi + eax * 4 + 8) = ecx;
    PUSH32(esp, edi);
    MEM32(esp + 0x10) = eax;
    ebx--;
    MEM32(esi + -4) = edx;
    PUSH32(esp, 0); sub_00471288(); /* call 0x00471288 */

loc_00468F3C: ;
    fp_push((double)SMEM32(esp + 0x10)); /* fild */
    ebp = eax;
    fp_st1() *= fp_top(); fp_pop(); /* fmul */
    fp_st1() *= fp_top(); fp_pop(); /* fmul */
    PUSH32(esp, 0); sub_00471288(); /* call 0x00471288 */

loc_00468F51: ;
    ecx = MEM32(esp + 0x1C);
    edi = MEM32(esp + 0x18);
    eax = eax & ebx;
    if (CMP_L(ecx, 4)) goto loc_004690AF; /* jl: less (signed <) */

loc_00468F64: ;
    edx = ecx + -4;
    edx = edx >> 2;
    edx++;
    MEM32(esp + 0x20) = edx;
    edx = (uint32_t)(-(int32_t)edx);
    ecx = ecx + edx * 4;
    MEM32(esp + 0x1C) = ecx;

loc_00468F78: ;
    ecx = eax;
    ecx = (uint32_t)((int32_t)ecx >> 0xA);
    edx = eax;
    ecx = ecx & 0x3F;
    ecx = ecx << 4;
    ecx = ecx + 0x585BE8;
    edx = (uint32_t)((int32_t)edx >> 0x10);
    fp_push(MEMF(esi + edx * 4 + -4)); /* fld float */
    edx = esi + edx * 4 + -4;
    fp_st1() *= fp_top(); fp_pop(); /* fmul */
    ecx = ecx + 4;
    fp_push(MEMF(edx + 4)); /* fld float */
    edx = edx + 4;
    fp_st1() *= fp_top(); fp_pop(); /* fmul */
    ecx = ecx + 4;
    edx = edx + 4;
    fp_st1() += fp_top(); fp_pop(); /* faddp */
    fp_push(MEMF(edx + 4)); /* fld float */
    fp_st1() *= fp_top(); fp_pop(); /* fmul */
    fp_push(MEMF(edx)); /* fld float */
    edx = eax + ebp;
    fp_st1() *= fp_top(); fp_pop(); /* fmul */
    edx = edx & ebx;
    eax = edx;
    eax = (uint32_t)((int32_t)eax >> 0xA);
    fp_st1() += fp_top(); fp_pop(); /* fadd */
    eax = eax & 0x3F;
    eax = eax << 4;
    fp_st1() += fp_top(); fp_pop(); /* faddp */
    eax = eax + 0x585BE8;
    ecx = edx;
    MEMF(edi) = (float)fp_top(); fp_popp(); /* fstp */
    ecx = (uint32_t)((int32_t)ecx >> 0x10);
    ecx = esi + ecx * 4 + -4;
    /* fstp st(0) */
    eax = eax + 4;
    fp_push(MEMF(ecx)); /* fld float */
    ecx = ecx + 4;
    fp_st1() *= fp_top(); fp_pop(); /* fmul */
    eax = eax + 4;
    fp_push(MEMF(ecx)); /* fld float */
    ecx = ecx + 4;
    fp_st1() *= fp_top(); fp_pop(); /* fmul */
    edx = edx + ebp;
    edx = edx & ebx;
    fp_st1() += fp_top(); fp_pop(); /* faddp */
    fp_push(MEMF(ecx + 4)); /* fld float */
    fp_st1() *= fp_top(); fp_pop(); /* fmul */
    fp_push(MEMF(ecx)); /* fld float */
    ecx = edx;
    fp_st1() *= fp_top(); fp_pop(); /* fmul */
    eax = edx;
    eax = (uint32_t)((int32_t)eax >> 0xA);
    fp_st1() += fp_top(); fp_pop(); /* fadd */
    eax = eax & 0x3F;
    ecx = (uint32_t)((int32_t)ecx >> 0x10);
    fp_st1() += fp_top(); fp_pop(); /* faddp */
    eax = eax << 4;
    ecx = esi + ecx * 4 + -4;
    MEMF(edi + 4) = (float)fp_top(); fp_popp(); /* fstp */
    eax = eax + 0x585BE8;
    eax = eax + 4;
    /* fstp st(0) */
    ecx = ecx + 4;
    fp_push(MEMF(ecx + -4)); /* fld float */
    fp_st1() *= fp_top(); fp_pop(); /* fmul */
    fp_push(MEMF(ecx)); /* fld float */
    fp_st1() *= fp_top(); fp_pop(); /* fmul */
    fp_st1() += fp_top(); fp_pop(); /* faddp */
    fp_push(MEMF(ecx + 8)); /* fld float */
    eax = eax + 4;
    fp_st1() *= fp_top(); fp_pop(); /* fmul */
    ecx = ecx + 4;
    fp_push(MEMF(ecx)); /* fld float */
    edx = edx + ebp;
    fp_st1() *= fp_top(); fp_pop(); /* fmul */
    edx = edx & ebx;
    eax = edx;
    fp_st1() += fp_top(); fp_pop(); /* fadd */
    eax = (uint32_t)((int32_t)eax >> 0xA);
    eax = eax & 0x3F;
    fp_st1() += fp_top(); fp_pop(); /* faddp */
    eax = eax << 4;
    ecx = edx;
    MEMF(edi + 8) = (float)fp_top(); fp_popp(); /* fstp */
    ecx = (uint32_t)((int32_t)ecx >> 0x10);
    ecx = esi + ecx * 4 + -4;
    /* fstp st(0) */
    eax = eax + 0x585BE8;
    fp_push(MEMF(ecx)); /* fld float */
    ecx = ecx + 4;
    fp_st1() *= fp_top(); fp_pop(); /* fmul */
    eax = eax + 4;
    fp_push(MEMF(ecx)); /* fld float */
    ecx = ecx + 4;
    fp_st1() *= fp_top(); fp_pop(); /* fmul */
    eax = eax + 4;
    edi = edi + 0x10;
    fp_st1() += fp_top(); fp_pop(); /* faddp */
    fp_push(MEMF(ecx + 4)); /* fld float */
    fp_st1() *= fp_top(); fp_pop(); /* fmul */
    fp_push(MEMF(ecx)); /* fld float */
    ecx = MEM32(esp + 0x20);
    fp_st1() *= fp_top(); fp_pop(); /* fmul */
    eax = edx + ebp;
    eax = eax & ebx;
    fp_st1() += fp_top(); fp_pop(); /* fadd */
    ecx--;
    MEM32(esp + 0x20) = ecx;
    fp_st1() += fp_top(); fp_pop(); /* faddp */
    MEMF(edi + -4) = (float)fp_top(); fp_popp(); /* fstp */
    /* fstp st(0) */
    if ((ecx != 0)) goto loc_00468F78; /* jne: not equal / not zero */

loc_004690AB: ;
    ecx = MEM32(esp + 0x1C);

loc_004690AF: ;
    if (CMP_LE(ecx & ecx, 0)) goto loc_00469110; /* jle: less or equal (signed <=) */

loc_004690B3: ;
    MEM32(esp + 0x1C) = ecx;

loc_004690B7: ;
    ecx = eax;
    ecx = (uint32_t)((int32_t)ecx >> 0xA);
    ecx = ecx & 0x3F;
    edx = eax;
    edx = (uint32_t)((int32_t)edx >> 0x10);
    fp_push(MEMF(esi + edx * 4 + -4)); /* fld float */
    ecx = ecx << 4;
    ecx = ecx + 0x585BE8;
    fp_st1() *= fp_top(); fp_pop(); /* fmul */
    edx = esi + edx * 4 + -4;
    fp_push(MEMF(edx + 4)); /* fld float */
    edx = edx + 4;
    fp_st1() *= fp_top(); fp_pop(); /* fmul */
    ecx = ecx + 4;
    edx = edx + 4;
    ecx = ecx + 4;
    fp_st1() += fp_top(); fp_pop(); /* faddp */
    fp_push(MEMF(edx + 4)); /* fld float */
    eax = eax + ebp;
    fp_st1() *= fp_top(); fp_pop(); /* fmul */
    eax = eax & ebx;
    fp_push(MEMF(edx)); /* fld float */
    edi = edi + 4;
    fp_st1() *= fp_top(); fp_pop(); /* fmul */
    ecx = MEM32(esp + 0x1C);
    ecx--;
    fp_st1() += fp_top(); fp_pop(); /* fadd */
    MEM32(esp + 0x1C) = ecx;
    fp_st1() += fp_top(); fp_pop(); /* faddp */
    MEMF(edi + -4) = (float)fp_top(); fp_popp(); /* fstp */
    /* fstp st(0) */
    if ((ecx != 0)) goto loc_004690B7; /* jne: not equal / not zero */

loc_00469110: ;
    ecx = MEM32(esp + 0x24);
    eax = (uint32_t)((int32_t)eax >> LO8(ecx));
    POP32(esp, edi);
    POP32(esp, esi);
    POP32(esp, ebp);
    MEM32(esp + 0x10) = eax;
    fp_push((double)SMEM32(esp + 0x10)); /* fild */
    POP32(esp, ebx);
    fp_st1() *= fp_top(); fp_pop(); /* fmul */
    POP32(esp, ecx);
    esp += 4; return; /* ret */

    #undef fp_push
    #undef fp_pop
    #undef fp_popp
    #undef fp_top
    #undef fp_st1
}

/**
 * sub_00469130
 * Original: 0x00469130 - 0x004692EA (442 bytes, 144 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00469130(void)
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

loc_00469130: ;
    ecx = MEM32(esp + 0x14);
    esp = esp - 0xC;
    eax = 1;
    eax = eax << LO8(ecx);
    PUSH32(esp, ebx);
    ebx = MEM32(esp + 0x2C);
    PUSH32(esp, ebp);
    ebp = MEM32(esp + 0x2C);
    ecx = eax * 4 + 8;
    edx = ecx;
    ecx = ecx >> 2;
    PUSH32(esp, esi);
    PUSH32(esp, edi);
    edi = MEM32(esp + 0x2C);
    eax = 0; /* xor self */
    { uint32_t _i; for (_i = 0; _i < ecx; _i++) MEM32(edi + _i*4) = eax; }
    edi += ecx * 4; ecx = 0; /* rep stosd */
    ecx = edx;
    ecx = ecx & 3;
    memset((void*)XBOX_PTR(edi), (uint8_t)eax, ecx);
    edi += ecx; ecx = 0; /* rep stosb */
    ecx = MEM32(esp + 0x28);
    edi = MEM32(esp + 0x3C);
    esi = 0; /* xor self */
    (void)0; /* cmp ecx, 4 - flags set for next jcc */
    eax = 2;
    if (CMP_L(ecx, 4)) goto loc_0046926F; /* jl: less (signed <) */

loc_0046917D: ;
    ebx = MEM32(esp + 0x24);
    ecx = MEM32(esp + 0x2C);
    eax = ebx + 4;
    edx = ebp + 8;
    ebp = ebp - ebx;
    ebx = MEM32(esp + 0x20);
    MEM32(esp + 0x14) = ebp;
    ebx = ebx - MEM32(esp + 0x34);
    MEM32(esp + 0x10) = ebx;
    ebx = MEM32(esp + 0x28);
    ebx = ebx + 0xFFFFFFFCu;
    ecx = ecx + 0x10;
    ebx = ebx >> 2;
    ebx = ebx * 8 + 0xA;
    MEM32(esp + 0x18) = ebx;
    ebx = MEM32(esp + 0x38);
    /* nop */

loc_004691C0: ;
    ebp = MEM32(esp + 0x20);
    fp_push(MEMF(ebp + esi * 4)); /* fld float */
    ebp = MEM32(eax + -4);
    fp_st1() *= fp_top(); fp_pop(); /* fmul */
    esi = esi + 4;
    ecx = ecx + 0x20;
    edx = edx + 0x10;
    /* fld st(0) */
    fp_st1() *= fp_top(); fp_pop(); /* fmul */
    ebp = MEM32(esp + 0x10);
    MEMF(ecx + -40) = (float)fp_top(); fp_popp(); /* fstp */
    ebx = MEM32(eax + -4);
    fp_st1() *= fp_top(); fp_pop(); /* fmul */
    ebx = MEM32(esp + 0x14);
    ebx = ebx + eax;
    eax = eax + 0x10;
    fp_top() = -fp_top(); /* fchs */
    MEMF(ecx + -36) = (float)fp_top(); fp_popp(); /* fstp */
    fp_push(MEMF(ebx + ebp)); /* fld float */
    ebp = MEM32(eax + -16);
    fp_st1() *= fp_top(); fp_pop(); /* fmul */
    ebx = MEM32(esp + 0x38);
    /* fld st(0) */
    fp_st1() *= fp_top(); fp_pop(); /* fmul */
    MEMF(ecx + -32) = (float)fp_top(); fp_popp(); /* fstp */
    ebp = MEM32(eax + -16);
    fp_st1() *= fp_top(); fp_pop(); /* fmul */
    ebp = MEM32(esp + 0x10);
    fp_top() = -fp_top(); /* fchs */
    MEMF(ecx + -28) = (float)fp_top(); fp_popp(); /* fstp */
    fp_push(MEMF(edx + ebp + -16)); /* fld float */
    ebp = MEM32(eax + -12);
    fp_st1() *= fp_top(); fp_pop(); /* fmul */
    /* fld st(0) */
    fp_st1() *= fp_top(); fp_pop(); /* fmul */
    MEMF(ecx + -24) = (float)fp_top(); fp_popp(); /* fstp */
    ebp = MEM32(eax + -12);
    fp_st1() *= fp_top(); fp_pop(); /* fmul */
    ebp = MEM32(esp + 0x20);
    fp_top() = -fp_top(); /* fchs */
    MEMF(ecx + -20) = (float)fp_top(); fp_popp(); /* fstp */
    fp_push(MEMF(ebp + esi * 4 + -4)); /* fld float */
    ebp = MEM32(eax + -8);
    fp_st1() *= fp_top(); fp_pop(); /* fmul */
    /* fld st(0) */
    fp_st1() *= fp_top(); fp_pop(); /* fmul */
    MEMF(ecx + -16) = (float)fp_top(); fp_popp(); /* fstp */
    ebp = MEM32(eax + -8);
    fp_st1() *= fp_top(); fp_pop(); /* fmul */
    ebp = MEM32(esp + 0x28);
    ebp = ebp + 0xFFFFFFFDu;
    (void)0; /* cmp esi, ebp - flags set for next jcc */
    fp_top() = -fp_top(); /* fchs */
    MEMF(ecx + -12) = (float)fp_top(); fp_popp(); /* fstp */
    if (CMP_L(esi, ebp)) goto loc_004691C0; /* jl: less (signed <) */

loc_00469267: ;
    ebp = MEM32(esp + 0x34);
    eax = MEM32(esp + 0x18);

loc_0046926F: ;
    if (CMP_GE(esi, MEM32(esp + 0x28))) goto loc_004692CE; /* jge: greater or equal (signed >=) */

loc_00469275: ;
    ecx = MEM32(esp + 0x2C);
    edx = MEM32(esp + 0x24);
    ecx = ecx + eax * 4;
    eax = edx + esi * 4;
    edx = MEM32(esp + 0x20);
    edx = edx - ebp;
    MEM32(esp + 0x10) = edx;
    ebp = ebp - MEM32(esp + 0x24);
    edx = MEM32(esp + 0x28);
    edx = edx - esi;
    esi = MEM32(esp + 0x10);
    MEM32(esp + 0x28) = edx;
    /* nop */

loc_004692A0: ;
    edx = eax + ebp;
    fp_push(MEMF(edx + esi)); /* fld float */
    ecx = ecx + 8;
    fp_st1() *= fp_top(); fp_pop(); /* fmul */
    edx = MEM32(eax);
    eax = eax + 4;
    /* fld st(0) */
    fp_st1() *= fp_top(); fp_pop(); /* fmul */
    MEMF(ecx + -8) = (float)fp_top(); fp_popp(); /* fstp */
    edx = MEM32(eax + -4);
    fp_st1() *= fp_top(); fp_pop(); /* fmul */
    edx = MEM32(esp + 0x28);
    edx--;
    MEM32(esp + 0x28) = edx;
    fp_top() = -fp_top(); /* fchs */
    MEMF(ecx + -4) = (float)fp_top(); fp_popp(); /* fstp */
    if ((edx != 0)) goto loc_004692A0; /* jne: not equal / not zero */

loc_004692CE: ;
    eax = MEM32(esp + 0x30);
    ecx = MEM32(esp + 0x2C);
    PUSH32(esp, 8);
    PUSH32(esp, eax);
    PUSH32(esp, ecx);
    PUSH32(esp, 0); sub_00449890(); /* call 0x00449890 */

loc_004692DF: ;
    esp = esp + 0xC;
    POP32(esp, edi);
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
 * sub_004692EA
 * Original: 0x004692EA - 0x0046933E (84 bytes, 41 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_004692EA(void)
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

loc_004692EA: ;
    PUSH32(esp, ebp);
    ebp = esp;
    edx = MEM32(ebp + 8);
    PUSH32(esp, ebx);
    ebx = MEM32(ebp + 0x14);
    if (CMP_LE(LO16(ebx) & LO16(ebx), 0)) goto loc_0046933B; /* jle: less or equal (signed <=) */

loc_004692F9: ;
    eax = ZX16(LO16(ebx));
    PUSH32(esp, esi);
    PUSH32(esp, edi);
    edi = 0; /* xor self */
    MEM32(ebp + 8) = eax;

loc_00469303: ;
    (void)0; /* test LO16(ebx), LO16(ebx) - flags set for next jcc */
    fp_push(0.0); /* fldz */
    ecx = MEM32(ebp + 0x10);
    MEMF(edx) = (float)fp_top(); fp_popp(); /* fstp */
    fp_push(0.0); /* fldz */
    if (TEST_Z(LO16(ebx), LO16(ebx))) goto loc_0046932D; /* je: equal / zero */

loc_00469311: ;
    esi = MEM32(ebp + 0xC);
    eax = edi;
    eax = eax << 2;
    eax = eax - ecx;
    eax = eax + esi;
    esi = ZX16(LO16(ebx));

loc_00469320: ;
    fp_push(MEMF(eax + ecx)); /* fld float */
    fp_st1() *= fp_top(); fp_pop(); /* fmul */
    ecx = ecx + 4;
    esi--;
    fp_st1() += fp_top(); fp_pop(); /* faddp */
    if ((esi != 0)) goto loc_00469320; /* jne: not equal / not zero */

loc_0046932D: ;
    ebx--;
    MEMF(edx) = (float)fp_top(); fp_popp(); /* fstp */
    edi++;
    edx = edx + 4;
    MEM32(ebp + 8) = MEM32(ebp + 8) - 1;
    if ((MEM32(ebp + 8) != 0)) goto loc_00469303; /* jne: not equal / not zero */

loc_00469339: ;
    POP32(esp, edi);
    POP32(esp, esi);

loc_0046933B: ;
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
 * sub_0046933E
 * Original: 0x0046933E - 0x0046A926 (5608 bytes, 1844 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0046933E(void)
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

loc_0046933E: ;
    PUSH32(esp, ebp);
    ebp = esp + -84;
    esp = esp - 0xC28;
    PUSH32(esp, ebx);
    eax = 0; /* xor self */
    PUSH32(esp, esi);
    PUSH32(esp, edi);
    edi = MEM32(ebp + 0x64);
    SET_LO16(eax, MEM16(edi + 2));
    SET_LO16(eax, LO16(eax) - MEM16(edi));
    ebx = 0x94;
    MEM32(ebp + 0x24) = eax;
    eax = (uint32_t)(int32_t)SMEM16(ebp + 0x68);
    eax = (uint32_t)(int32_t)SMEM16(edi + eax * 2 + -2);
    SET_LO16(eax, LO16(eax) + 1);
    (void)0; /* cmp MEM16(ebp + 0x78), 0 - flags set for next jcc */
    MEM32(ebp + 0x44) = eax;
    eax = MEM32(ebp + 0x74);
    if (CMP_EQ(MEM16(ebp + 0x78), 0)) goto loc_00469425; /* je: equal / zero */

loc_0046937C: ;
    esi = (uint32_t)(int32_t)SMEM16(ebp + 0x6C);
    edx = esi + esi;
    if (CMP_GE(esi, edx)) goto loc_0046941D; /* jge: greater or equal (signed >=) */

loc_0046938B: ;
    ebx = esi;
    ecx = esi;
    ebx = ebx - esi;
    ecx = (uint32_t)((int32_t)ecx * (int32_t)0x94);
    ebx = (uint32_t)((int32_t)ebx * (int32_t)0x94);
    edx = edx - esi;
    ecx = ecx + eax + 0x7C;
    eax = ebx + eax + 0x7C;
    MEM32(ebp + 0x50) = edx;

loc_004693AA: ;
    MEM32(ebp + 0x68) = MEM32(ebp + 0x68) & 0;
    if (CMP_LE(MEM16(eax + -84), 0)) goto loc_004693F5; /* jle: less or equal (signed <=) */

loc_004693B5: ;
    esi = eax + -80;
    MEM32(ebp + 0x78) = esi;
    edx = ecx + -80;
    ebx = ecx + -124;
    esi = eax + -124;
    goto loc_004693C9;

loc_004693C6: ;
    edx = MEM32(ebp + 0x28);

loc_004693C9: ;
    SET_LO16(edi, MEM16(esi));
    MEM16(ebx) = LO16(edi);
    edi = MEM32(ebp + 0x78);
    edi = MEM32(edi);
    MEM32(ebp + 0x78) = MEM32(ebp + 0x78) + 4;
    edi = (uint32_t)(-(int32_t)edi);
    MEM32(ebp + 0x68) = MEM32(ebp + 0x68) + 1;
    MEM32(edx) = edi;
    edx = edx + 4;
    esi++;
    esi++;
    MEM32(ebp + 0x28) = edx;
    edx = (uint32_t)(int32_t)SMEM16(eax + -84);
    ebx++;
    ebx++;
    if (CMP_L(MEM32(ebp + 0x68), edx)) goto loc_004693C6; /* jl: less (signed <) */

loc_004693F2: ;
    edi = MEM32(ebp + 0x64);

loc_004693F5: ;
    fp_push(MEMF(eax)); /* fld float */
    ebx = 0x94;
    fp_top() = -fp_top(); /* fchs */
    MEMF(ecx) = (float)fp_top(); fp_popp(); /* fstp */
    edx = MEM32(eax + 0xC);
    MEM32(ecx + 0xC) = edx;
    edx = MEM32(eax + 0x10);
    MEM32(ecx + 0x10) = edx;
    SET_LO16(edx, MEM16(eax + -84));
    MEM16(ecx + -84) = LO16(edx);
    eax = eax + ebx;
    ecx = ecx + ebx;
    MEM32(ebp + 0x50) = MEM32(ebp + 0x50) - 1;
    if ((MEM32(ebp + 0x50) != 0)) goto loc_004693AA; /* jne: not equal / not zero */

loc_0046941D: ;
    eax = MEM32(ebp + 0x6C);
    eax = eax + eax;
    MEM32(ebp + 0x6C) = eax;

loc_00469425: ;
    edx = (uint32_t)(int32_t)SMEM16(ebp + 0x70);
    fp_push(MEMF(0x649200)); /* fld float */
    ecx = 0; /* xor self */
    (void)0; /* test edx, edx - flags set for next jcc */
    MEM32(ebp + 0x18) = edx;
    if (CMP_LE(edx & edx, 0)) goto loc_00469451; /* jle: less or equal (signed <=) */

loc_00469438: ;
    eax = ebp + -2888;

loc_0046943E: ;
    esi = eax + -140;
    MEMF(eax) = (float)fp_top(); fp_pop(); /* fst */
    MEM32(ebp + ecx * 4 + -68) = esi;
    ecx++;
    eax = eax + ebx;
    if (CMP_L(ecx, edx)) goto loc_0046943E; /* jl: less (signed <) */

loc_00469451: ;
    ebx = 0; /* xor self */
    ebx++;
    if (CMP_NE(MEM16(ebp + 0x70), LO16(ebx))) goto loc_00469DB7; /* jne: not equal / not zero */

loc_0046945E: ;
    (void)0; /* cmp MEM16(ebp + 0x7C), 0 - flags set for next jcc */
    esi = MEM32(ebp + 0x60);
    ecx = MEM32(ebp + -68);
    if (CMP_NE(MEM16(ebp + 0x7C), 0)) goto loc_0046961D; /* jne: not equal / not zero */

loc_0046946F: ;
    eax = MEM32(ebp + 0x64);
    SET_LO16(edx, MEM16(eax));
    if (CMP_GE(LO16(edx), MEM16(ebp + 0x44))) { sub_0046A926(); return; } /* jge: greater or equal (signed >=) */

loc_0046947F: ;
    edi = MEM32(ebp + 0x5C);
    eax = SX16(LO16(edx));
    edi = edi + eax * 4;
    eax = (uint32_t)((int32_t)eax * (int32_t)0x144);
    fp_push(MEMF(edi)); /* fld float */
    fp_st1() += fp_top(); fp_pop(); /* fadd */
    eax = eax + esi;
    MEM32(ebp + 0x10) = eax;
    MEMF(ebp + 0x40) = (float)fp_top(); fp_pop(); /* fst */
    MEM32(ebp + 0x14) = edi;
    fp_push(MEMF(eax)); /* fld float */
    fp_st1() *= fp_top(); fp_pop(); /* fmul */
    MEMF(ebp + 0x68) = (float)fp_top(); fp_popp(); /* fstp */
    /* fld st(0) */
    fp_st1() *= fp_top(); fp_pop(); /* fmul */
    MEMF(ebp + 0x70) = (float)fp_top(); fp_pop(); /* fst */
    /* fstp st(1) */
    fp_push(MEMF(ebp + 0x68)); /* fld float */
    fp_st1() *= fp_top(); fp_pop(); /* fmul */
    /* fld st(1) */
    _fpu_cmp = (fp_top() < fp_st1()) ? -1 : (fp_top() > fp_st1()) ? 1 : 0; /* fcompp  */
    /* fnstsw ax - store FPU status word */
    /* fstp st(0) */
    if (TEST_NZ(HI8(eax), 0x41)) goto loc_004694F8; /* jne: not equal / not zero */

loc_004694C3: ;
    /* fstp st(0) */
    eax = MEM32(ebp + 0x40);
    fp_push(MEMF(ebp + 0x68)); /* fld float */
    MEM32(ecx + 0x7C) = eax;
    fp_push(MEMF(ebp + 0x70)); /* fld float */
    MEM16(ecx + 2) = LO16(edx);
    fp_st1() /= fp_top(); fp_pop(); /* fdiv */
    MEM16(ecx) = LO16(edx);
    MEM32(ecx + 0x30) = ebx;
    MEM32(ecx + 0x2C) = ebx;
    MEM16(ecx + 0x28) = 2;
    /* fld st(1) */
    MEMF(ecx + 0x88) = (float)fp_top(); fp_popp(); /* fstp */
    MEMF(ecx + 0x8C) = (float)fp_top(); fp_pop(); /* fst */
    /* fst st(1) */
    /* fstp st(0) */

loc_004694F8: ;
    eax = MEM32(ebp + 0x24);
    eax = eax + edx;
    (void)0; /* cmp LO16(eax), MEM16(ebp + 0x44) - flags set for next jcc */
    MEM32(ebp + 0x2C) = eax;
    MEM32(ebp + 0x78) = eax;
    if (CMP_GE(LO16(eax), MEM16(ebp + 0x44))) goto loc_00469610; /* jge: greater or equal (signed >=) */

loc_0046950D: ;
    eax = SX16(LO16(edx));
    eax = eax + eax * 4;
    eax = eax << 4;
    MEM32(ebp + 0x1C) = eax;

loc_00469519: ;
    eax = MEM32(ebp + 0x14);
    fp_push(MEMF(eax)); /* fld float */
    eax = (uint32_t)(int32_t)SMEM16(ebp + 0x78);
    edi = MEM32(ebp + 0x5C);
    /* fld st(0) */
    edi = edi + eax * 4;
    fp_st1() -= fp_top(); fp_pop(); /* fsub */
    MEMF(ebp + 0x38) = (float)fp_top(); fp_popp(); /* fstp */
    fp_st1() += fp_top(); fp_pop(); /* fadd */
    edi = eax;
    edi = (uint32_t)((int32_t)edi * (int32_t)0x144);
    MEMF(ebp + 0x40) = (float)fp_top(); fp_pop(); /* fst */
    fp_push(MEMF(edi + esi)); /* fld float */
    edi = MEM32(ebp + 0x10);
    fp_st1() += fp_top(); fp_pop(); /* fadd */
    edi = MEM32(ebp + 0x1C);
    edi = edi + eax;
    fp_push(MEMF(esi + edi * 4)); /* fld float */
    edi = MEM32(ebp + 0x78);
    fp_st1() += fp_top(); fp_pop(); /* fadd */
    /* fld st(1) */
    fp_st1() -= fp_top(); fp_pop(); /* fsub */
    MEMF(ebp + 0x48) = (float)fp_top(); fp_popp(); /* fstp */
    fp_st1() += fp_top(); fp_pop(); /* fadd */
    MEMF(ebp + 0x68) = (float)fp_top(); fp_popp(); /* fstp */
    /* fstp st(0) */
    /* fld st(0) */
    fp_st1() *= fp_top(); fp_pop(); /* fmul */
    MEMF(ebp + 0x70) = (float)fp_top(); fp_pop(); /* fst */
    /* fstp st(1) */
    fp_push(MEMF(ebp + 0x68)); /* fld float */
    fp_st1() *= fp_top(); fp_pop(); /* fmul */
    /* fld st(1) */
    _fpu_cmp = (fp_top() < fp_st1()) ? -1 : (fp_top() > fp_st1()) ? 1 : 0; /* fcompp  */
    /* fnstsw ax - store FPU status word */
    /* fstp st(0) */
    if (TEST_NZ(HI8(eax), 0x41)) goto loc_004695AF; /* jne: not equal / not zero */

loc_0046957A: ;
    /* fstp st(0) */
    eax = MEM32(ebp + 0x40);
    fp_push(MEMF(ebp + 0x68)); /* fld float */
    MEM32(ecx + 0x7C) = eax;
    fp_push(MEMF(ebp + 0x70)); /* fld float */
    MEM16(ecx) = LO16(edx);
    fp_st1() /= fp_top(); fp_pop(); /* fdiv */
    MEM16(ecx + 2) = LO16(edi);
    MEM32(ecx + 0x30) = ebx;
    MEM32(ecx + 0x2C) = ebx;
    MEM16(ecx + 0x28) = 2;
    /* fld st(1) */
    MEMF(ecx + 0x88) = (float)fp_top(); fp_popp(); /* fstp */
    MEMF(ecx + 0x8C) = (float)fp_top(); fp_pop(); /* fst */
    /* fst st(1) */
    /* fstp st(0) */

loc_004695AF: ;
    fp_push(MEMF(ebp + 0x38)); /* fld float */
    fp_st1() *= fp_top(); fp_pop(); /* fmul */
    MEMF(ebp + 0x70) = (float)fp_top(); fp_pop(); /* fst */
    fp_push(MEMF(ebp + 0x48)); /* fld float */
    fp_st1() *= fp_top(); fp_pop(); /* fmul */
    /* fld st(1) */
    _fpu_cmp = (fp_top() < fp_st1()) ? -1 : (fp_top() > fp_st1()) ? 1 : 0; /* fcompp  */
    /* fnstsw ax - store FPU status word */
    /* fstp st(0) */
    if (TEST_NZ(HI8(eax), 0x41)) goto loc_00469600; /* jne: not equal / not zero */

loc_004695CA: ;
    /* fstp st(0) */
    eax = MEM32(ebp + 0x38);
    fp_push(MEMF(ebp + 0x48)); /* fld float */
    MEM32(ecx + 0x30) = MEM32(ecx + 0x30) | 0xFFFFFFFFu;
    fp_push(MEMF(ebp + 0x70)); /* fld float */
    MEM32(ecx + 0x7C) = eax;
    fp_st1() /= fp_top(); fp_pop(); /* fdiv */
    MEM16(ecx) = LO16(edx);
    MEM16(ecx + 2) = LO16(edi);
    MEM32(ecx + 0x2C) = ebx;
    MEM16(ecx + 0x28) = 2;
    /* fld st(1) */
    MEMF(ecx + 0x88) = (float)fp_top(); fp_popp(); /* fstp */
    MEMF(ecx + 0x8C) = (float)fp_top(); fp_pop(); /* fst */
    /* fst st(1) */
    /* fstp st(0) */

loc_00469600: ;
    edi = edi + MEM32(ebp + 0x24);
    (void)0; /* cmp LO16(edi), MEM16(ebp + 0x44) - flags set for next jcc */
    MEM32(ebp + 0x78) = edi;
    if (CMP_L(LO16(edi), MEM16(ebp + 0x44))) goto loc_00469519; /* jl: less (signed <) */

loc_00469610: ;
    edx = MEM32(ebp + 0x2C);
    if (CMP_L(LO16(edx), MEM16(ebp + 0x44))) goto loc_0046947F; /* jl: less (signed <) */

loc_0046961D: ;
    if (CMP_NE(MEM16(ebp + 0x7C), LO16(ebx))) goto loc_004699E7; /* jne: not equal / not zero */

loc_00469627: ;
    eax = (uint32_t)(int32_t)SMEM16(ebp + 0x6C);
    if (CMP_LE(eax & eax, 0)) { sub_0046A926(); return; } /* jle: less or equal (signed <=) */

loc_00469633: ;
    edi = MEM32(ebp + 0x74);
    edi = edi + 0x7C;
    MEM32(ebp + 0x34) = edi;
    MEM32(ebp + 0x28) = eax;

loc_0046963F: ;
    eax = MEM32(edi);
    MEM32(ebp + 0xC) = eax;
    eax = MEM32(edi + 0xC);
    edx = 0; /* xor self */
    SET_LO16(edx, MEM16(edi + -84));
    MEM32(ebp + 0x20) = eax;
    eax = MEM32(ebp + 0x64);
    eax = (uint32_t)(int32_t)SMEM16(eax);
    (void)0; /* cmp LO16(eax), MEM16(ebp + 0x44) - flags set for next jcc */
    MEM32(ebp + 0x30) = edx;
    MEM32(ebp + 0x4C) = eax;
    if (CMP_GE(LO16(eax), MEM16(ebp + 0x44))) goto loc_004699D5; /* jge: greater or equal (signed >=) */

loc_00469666: ;
    edx = SX16(LO16(edx));

loc_00469669: ;
    ebx = MEM32(ebp + 0x5C);
    MEM32(ebp + 0x70) = MEM32(ebp + 0x70) & 0;
    eax = SX16(LO16(eax));
    ebx = ebx + eax * 4;
    eax = (uint32_t)((int32_t)eax * (int32_t)0x144);
    fp_push(MEMF(ebx)); /* fld float */
    fp_st1() += fp_top(); fp_pop(); /* fadd */
    eax = eax + esi;
    (void)0; /* test edx, edx - flags set for next jcc */
    fp_st1() += fp_top(); fp_pop(); /* fadd */
    MEM32(ebp + 0x14) = ebx;
    MEM32(ebp + 0x10) = eax;
    MEMF(ebp + 0x40) = (float)fp_top(); fp_pop(); /* fst */
    fp_push(MEMF(eax)); /* fld float */
    fp_st1() *= fp_top(); fp_pop(); /* fmul */
    fp_st1() += fp_top(); fp_pop(); /* fadd */
    MEMF(ebp + 0x68) = (float)fp_top(); fp_popp(); /* fstp */
    if (CMP_LE(edx & edx, 0)) goto loc_004696D6; /* jle: less or equal (signed <=) */

loc_004696A0: ;
    ebx = MEM32(ebp + 0x70);
    eax = edi + -124;
    eax = (uint32_t)(int32_t)SMEM16(eax + ebx * 2);
    ebx = eax + eax * 4;
    eax = (uint32_t)(int32_t)SMEM16(ebp + 0x4C);
    ebx = ebx << 4;
    ebx = ebx + eax;
    eax = edi + -80;
    fp_push(MEMF(esi + ebx * 4)); /* fld float */
    ebx = MEM32(ebp + 0x70);
    fp_st1() *= fp_top(); fp_pop(); /* fmul */
    MEM32(ebp + 0x70) = MEM32(ebp + 0x70) + 1;
    (void)0; /* cmp MEM32(ebp + 0x70), edx - flags set for next jcc */
    /* FPU: fimul dword ptr [eax + ebx*4] */
    fp_st1() += fp_top(); fp_pop(); /* fadd */
    MEMF(ebp + 0x68) = (float)fp_top(); fp_popp(); /* fstp */
    if (CMP_L(MEM32(ebp + 0x70), edx)) goto loc_004696A0; /* jl: less (signed <) */

loc_004696D6: ;
    /* fld st(0) */
    fp_st1() *= fp_top(); fp_pop(); /* fmul */
    MEMF(ebp + 0x70) = (float)fp_top(); fp_pop(); /* fst */
    /* fstp st(1) */
    fp_push(MEMF(ebp + 0x68)); /* fld float */
    fp_st1() *= fp_top(); fp_pop(); /* fmul */
    /* fld st(1) */
    _fpu_cmp = (fp_top() < fp_st1()) ? -1 : (fp_top() > fp_st1()) ? 1 : 0; /* fcompp  */
    /* fnstsw ax - store FPU status word */
    /* fstp st(0) */
    if (TEST_NZ(HI8(eax), 0x41)) goto loc_0046977F; /* jne: not equal / not zero */

loc_004696F5: ;
    /* fstp st(0) */
    fp_push(MEMF(ebp + 0x68)); /* fld float */
    fp_push(MEMF(ebp + 0x70)); /* fld float */
    MEM32(ebp + 0x70) = MEM32(ebp + 0x70) & 0;
    (void)0; /* test edx, edx - flags set for next jcc */
    fp_st1() /= fp_top(); fp_pop(); /* fdiv */
    if (CMP_LE(edx & edx, 0)) goto loc_00469744; /* jle: less or equal (signed <=) */

loc_00469707: ;
    eax = ecx + 0x2C;
    MEM32(ebp + 0x78) = eax;
    eax = edi + -80;
    MEM32(ebp + 0x68) = eax;
    eax = edi + -124;
    MEM32(ebp + 0x2C) = eax;

loc_00469719: ;
    eax = MEM32(ebp + 0x2C);
    SET_LO16(eax, MEM16(eax));
    ebx = MEM32(ebp + 0x70);
    MEM32(ebp + 0x70) = MEM32(ebp + 0x70) + 1;
    MEM32(ebp + 0x2C) = MEM32(ebp + 0x2C) + 2;
    MEM16(ecx + ebx * 2) = LO16(eax);
    eax = MEM32(ebp + 0x68);
    ebx = MEM32(ebp + 0x78);
    eax = MEM32(eax);
    MEM32(ebp + 0x68) = MEM32(ebp + 0x68) + 4;
    MEM32(ebp + 0x78) = MEM32(ebp + 0x78) + 4;
    (void)0; /* cmp MEM32(ebp + 0x70), edx - flags set for next jcc */
    MEM32(ebx) = eax;
    if (CMP_L(MEM32(ebp + 0x70), edx)) goto loc_00469719; /* jl: less (signed <) */

loc_00469744: ;
    eax = MEM32(ebp + 0x40);
    /* fld st(1) */
    MEMF(ecx + 0x88) = (float)fp_top(); fp_popp(); /* fstp */
    ebx = 0; /* xor self */
    MEM32(ecx + 0x7C) = eax;
    eax = MEM32(ebp + 0x4C);
    MEMF(ecx + 0x8C) = (float)fp_top(); fp_pop(); /* fst */
    ebx++;
    /* fst st(1) */
    MEM32(ecx + edx * 4 + 0x30) = ebx;
    /* fstp st(0) */
    MEM32(ecx + edx * 4 + 0x2C) = ebx;
    ebx = MEM32(ebp + 0x30);
    ebx = ebx + 2;
    MEM16(ecx + edx * 2 + 2) = LO16(eax);
    MEM16(ecx + edx * 2) = LO16(eax);
    MEM16(ecx + 0x28) = LO16(ebx);
    goto loc_00469782;

loc_0046977F: ;
    eax = MEM32(ebp + 0x4C);

loc_00469782: ;
    ebx = MEM32(ebp + 0x24);
    ebx = ebx + eax;
    (void)0; /* cmp LO16(ebx), MEM16(ebp + 0x44) - flags set for next jcc */
    MEM32(ebp + 0x2C) = ebx;
    MEM32(ebp + 0x78) = ebx;
    if (CMP_GE(LO16(ebx), MEM16(ebp + 0x44))) goto loc_004699C5; /* jge: greater or equal (signed >=) */

loc_00469797: ;
    eax = SX16(LO16(eax));
    eax = eax + eax * 4;
    eax = eax << 4;
    MEM32(ebp + 0x1C) = eax;

loc_004697A3: ;
    eax = MEM32(ebp + 0x14);
    fp_push(MEMF(ebp + 0xC)); /* fld float */
    fp_st1() += fp_top(); fp_pop(); /* fadd */
    eax = (uint32_t)(int32_t)SMEM16(ebp + 0x78);
    edi = MEM32(ebp + 0x5C);
    ebx = MEM32(ebp + 0x10);
    /* fld st(0) */
    edi = edi + eax * 4;
    MEM32(ebp + 0x70) = MEM32(ebp + 0x70) & 0;
    fp_st1() -= fp_top(); fp_pop(); /* fsub */
    MEMF(ebp + 0x38) = (float)fp_top(); fp_popp(); /* fstp */
    fp_st1() += fp_top(); fp_pop(); /* fadd */
    edi = eax;
    edi = (uint32_t)((int32_t)edi * (int32_t)0x144);
    MEMF(ebp + 0x40) = (float)fp_top(); fp_pop(); /* fst */
    fp_push(MEMF(ebp + 0x20)); /* fld float */
    fp_st1() += fp_top(); fp_pop(); /* fadd */
    fp_st1() += fp_top(); fp_pop(); /* fadd */
    edi = MEM32(ebp + 0x1C);
    edi = edi + eax;
    (void)0; /* test edx, edx - flags set for next jcc */
    fp_push(MEMF(esi + edi * 4)); /* fld float */
    fp_st1() += fp_top(); fp_pop(); /* fadd */
    /* fld st(1) */
    fp_st1() -= fp_top(); fp_pop(); /* fsub */
    MEMF(ebp + 0x48) = (float)fp_top(); fp_popp(); /* fstp */
    fp_st1() += fp_top(); fp_pop(); /* fadd */
    MEMF(ebp + 0x68) = (float)fp_top(); fp_popp(); /* fstp */
    /* fstp st(0) */
    if (CMP_LE(edx & edx, 0)) goto loc_00469854; /* jle: less or equal (signed <=) */

loc_004697F4: ;
    ebx = MEM32(ebp + 0x70);
    edi = MEM32(ebp + 0x34);
    edi = edi + 0xFFFFFF84u;
    edi = (uint32_t)(int32_t)SMEM16(edi + ebx * 2);
    edi = edi + edi * 4;
    edi = edi << 4;
    MEM32(ebp + 0x50) = edi;
    edi = MEM32(ebp + 0x34);
    edi = edi + 0xFFFFFFB0u;
    fp_push((double)SMEM32(edi + ebx * 4)); /* fild */
    ebx = (uint32_t)(int32_t)SMEM16(ebp + 0x4C);
    edi = MEM32(ebp + 0x50);
    ebx = ebx + edi;
    edi = edi + eax;
    MEM32(ebp + 0x70) = MEM32(ebp + 0x70) + 1;
    (void)0; /* cmp MEM32(ebp + 0x70), edx - flags set for next jcc */
    fp_push(MEMF(esi + ebx * 4)); /* fld float */
    fp_st1() += fp_top(); fp_pop(); /* fadd */
    fp_st1() *= fp_top(); fp_pop(); /* fmul */
    fp_push(MEMF(ebp + 0x68)); /* fld float */
    fp_st1() += fp_top(); fp_pop(); /* fadd */
    MEMF(ebp + 0x68) = (float)fp_top(); fp_popp(); /* fstp */
    fp_st1() += fp_top(); fp_pop(); /* fadd */
    MEMF(ebp + 0x48) = (float)fp_top(); fp_popp(); /* fstp */
    fp_push(MEMF(esi + edi * 4)); /* fld float */
    fp_st1() += fp_top(); fp_pop(); /* fadd */
    fp_st1() *= fp_top(); fp_pop(); /* fmulp */
    fp_push(MEMF(ebp + 0x68)); /* fld float */
    fp_st1() += fp_top(); fp_pop(); /* fadd */
    MEMF(ebp + 0x68) = (float)fp_top(); fp_popp(); /* fstp */
    fp_push(MEMF(ebp + 0x48)); /* fld float */
    fp_st1() -= fp_top(); fp_pop(); /* fsub */
    MEMF(ebp + 0x48) = (float)fp_top(); fp_popp(); /* fstp */
    /* fstp st(0) */
    if (CMP_L(MEM32(ebp + 0x70), edx)) goto loc_004697F4; /* jl: less (signed <) */

loc_00469854: ;
    edi = MEM32(ebp + 0x34);
    /* fld st(0) */
    fp_st1() *= fp_top(); fp_pop(); /* fmul */
    MEMF(ebp + 0x70) = (float)fp_top(); fp_pop(); /* fst */
    /* fstp st(1) */
    fp_push(MEMF(ebp + 0x68)); /* fld float */
    fp_st1() *= fp_top(); fp_pop(); /* fmul */
    /* fld st(1) */
    _fpu_cmp = (fp_top() < fp_st1()) ? -1 : (fp_top() > fp_st1()) ? 1 : 0; /* fcompp  */
    /* fnstsw ax - store FPU status word */
    /* fstp st(0) */
    if (TEST_NZ(HI8(eax), 0x41)) goto loc_00469903; /* jne: not equal / not zero */

loc_00469876: ;
    /* fstp st(0) */
    fp_push(MEMF(ebp + 0x68)); /* fld float */
    fp_push(MEMF(ebp + 0x70)); /* fld float */
    MEM32(ebp + 0x70) = MEM32(ebp + 0x70) & 0;
    (void)0; /* test edx, edx - flags set for next jcc */
    fp_st1() /= fp_top(); fp_pop(); /* fdiv */
    if (CMP_LE(edx & edx, 0)) goto loc_004698C5; /* jle: less or equal (signed <=) */

loc_00469888: ;
    eax = ecx + 0x2C;
    MEM32(ebp + 0x3C) = eax;
    eax = edi + -80;
    MEM32(ebp + 0x68) = eax;
    eax = edi + -124;
    MEM32(ebp + 0x50) = eax;

loc_0046989A: ;
    eax = MEM32(ebp + 0x50);
    SET_LO16(eax, MEM16(eax));
    ebx = MEM32(ebp + 0x70);
    MEM32(ebp + 0x70) = MEM32(ebp + 0x70) + 1;
    MEM32(ebp + 0x50) = MEM32(ebp + 0x50) + 2;
    MEM16(ecx + ebx * 2) = LO16(eax);
    eax = MEM32(ebp + 0x68);
    ebx = MEM32(ebp + 0x3C);
    eax = MEM32(eax);
    MEM32(ebp + 0x68) = MEM32(ebp + 0x68) + 4;
    MEM32(ebp + 0x3C) = MEM32(ebp + 0x3C) + 4;
    (void)0; /* cmp MEM32(ebp + 0x70), edx - flags set for next jcc */
    MEM32(ebx) = eax;
    if (CMP_L(MEM32(ebp + 0x70), edx)) goto loc_0046989A; /* jl: less (signed <) */

loc_004698C5: ;
    eax = MEM32(ebp + 0x40);
    /* fld st(1) */
    MEM32(ecx + 0x7C) = eax;
    MEMF(ecx + 0x88) = (float)fp_top(); fp_popp(); /* fstp */
    SET_LO16(eax, MEM16(ebp + 0x4C));
    MEMF(ecx + 0x8C) = (float)fp_top(); fp_pop(); /* fst */
    MEM16(ecx + edx * 2) = LO16(eax);
    SET_LO16(eax, MEM16(ebp + 0x78));
    /* fst st(1) */
    MEM16(ecx + edx * 2 + 2) = LO16(eax);
    /* fstp st(0) */
    eax = 0; /* xor self */
    eax++;
    MEM32(ecx + edx * 4 + 0x30) = eax;
    MEM32(ecx + edx * 4 + 0x2C) = eax;
    eax = MEM32(ebp + 0x30);
    eax = eax + 2;
    MEM16(ecx + 0x28) = LO16(eax);

loc_00469903: ;
    fp_push(MEMF(ebp + 0x38)); /* fld float */
    fp_st1() *= fp_top(); fp_pop(); /* fmul */
    MEMF(ebp + 0x70) = (float)fp_top(); fp_pop(); /* fst */
    fp_push(MEMF(ebp + 0x48)); /* fld float */
    fp_st1() *= fp_top(); fp_pop(); /* fmul */
    /* fld st(1) */
    _fpu_cmp = (fp_top() < fp_st1()) ? -1 : (fp_top() > fp_st1()) ? 1 : 0; /* fcompp  */
    /* fnstsw ax - store FPU status word */
    /* fstp st(0) */
    if (TEST_NZ(HI8(eax), 0x41)) goto loc_004699B1; /* jne: not equal / not zero */

loc_00469922: ;
    /* fstp st(0) */
    fp_push(MEMF(ebp + 0x48)); /* fld float */
    fp_push(MEMF(ebp + 0x70)); /* fld float */
    MEM32(ebp + 0x70) = MEM32(ebp + 0x70) & 0;
    (void)0; /* test edx, edx - flags set for next jcc */
    fp_st1() /= fp_top(); fp_pop(); /* fdiv */
    if (CMP_LE(edx & edx, 0)) goto loc_00469971; /* jle: less or equal (signed <=) */

loc_00469934: ;
    eax = ecx + 0x2C;
    MEM32(ebp + 0x50) = eax;
    eax = edi + -80;
    MEM32(ebp + 0x68) = eax;
    eax = edi + -124;
    MEM32(ebp + 0x3C) = eax;

loc_00469946: ;
    eax = MEM32(ebp + 0x3C);
    SET_LO16(eax, MEM16(eax));
    ebx = MEM32(ebp + 0x70);
    MEM32(ebp + 0x70) = MEM32(ebp + 0x70) + 1;
    MEM32(ebp + 0x3C) = MEM32(ebp + 0x3C) + 2;
    MEM16(ecx + ebx * 2) = LO16(eax);
    eax = MEM32(ebp + 0x68);
    ebx = MEM32(ebp + 0x50);
    eax = MEM32(eax);
    MEM32(ebp + 0x68) = MEM32(ebp + 0x68) + 4;
    MEM32(ebp + 0x50) = MEM32(ebp + 0x50) + 4;
    (void)0; /* cmp MEM32(ebp + 0x70), edx - flags set for next jcc */
    MEM32(ebx) = eax;
    if (CMP_L(MEM32(ebp + 0x70), edx)) goto loc_00469946; /* jl: less (signed <) */

loc_00469971: ;
    eax = MEM32(ebp + 0x38);
    /* fld st(1) */
    MEMF(ecx + 0x88) = (float)fp_top(); fp_popp(); /* fstp */
    MEM32(ecx + 0x7C) = eax;
    SET_LO16(eax, MEM16(ebp + 0x4C));
    MEMF(ecx + 0x8C) = (float)fp_top(); fp_pop(); /* fst */
    MEM32(ecx + edx * 4 + 0x30) = MEM32(ecx + edx * 4 + 0x30) | 0xFFFFFFFFu;
    MEM16(ecx + edx * 2) = LO16(eax);
    /* fst st(1) */
    SET_LO16(eax, MEM16(ebp + 0x78));
    /* fstp st(0) */
    MEM16(ecx + edx * 2 + 2) = LO16(eax);
    eax = MEM32(ebp + 0x30);
    eax = eax + 2;
    MEM32(ecx + edx * 4 + 0x2C) = 1;
    MEM16(ecx + 0x28) = LO16(eax);

loc_004699B1: ;
    eax = MEM32(ebp + 0x24);
    MEM32(ebp + 0x78) = MEM32(ebp + 0x78) + eax;
    SET_LO16(eax, MEM16(ebp + 0x78));
    if (CMP_L(LO16(eax), MEM16(ebp + 0x44))) goto loc_004697A3; /* jl: less (signed <) */

loc_004699C5: ;
    eax = MEM32(ebp + 0x2C);
    (void)0; /* cmp LO16(eax), MEM16(ebp + 0x44) - flags set for next jcc */
    MEM32(ebp + 0x4C) = eax;
    if (CMP_L(LO16(eax), MEM16(ebp + 0x44))) goto loc_00469669; /* jl: less (signed <) */

loc_004699D5: ;
    edi = edi + 0x94;
    MEM32(ebp + 0x28) = MEM32(ebp + 0x28) - 1;
    MEM32(ebp + 0x34) = edi;
    if ((MEM32(ebp + 0x28) != 0)) goto loc_0046963F; /* jne: not equal / not zero */

loc_004699E7: ;
    if (CMP_NE(MEM16(ebp + 0x7C), 2)) { sub_0046A926(); return; } /* jne: not equal / not zero */

loc_004699F2: ;
    eax = (uint32_t)(int32_t)SMEM16(ebp + 0x6C);
    if (CMP_LE(eax & eax, 0)) goto loc_0046A91E; /* jle: less or equal (signed <=) */

loc_004699FE: ;
    edi = MEM32(ebp + 0x74);
    edi = edi + 0x7C;
    MEM32(ebp + 0x34) = edi;
    MEM32(ebp + 0x28) = eax;

loc_00469A0A: ;
    eax = MEM32(edi);
    MEM32(ebp + 0xC) = eax;
    eax = MEM32(edi + 0xC);
    edx = 0; /* xor self */
    SET_LO16(edx, MEM16(edi + -84));
    MEM32(ebp + 0x20) = eax;
    eax = MEM32(ebp + 0x64);
    eax = (uint32_t)(int32_t)SMEM16(eax);
    (void)0; /* cmp LO16(eax), MEM16(ebp + 0x44) - flags set for next jcc */
    MEM32(ebp + 0x30) = edx;
    MEM32(ebp + 0x4C) = eax;
    if (CMP_GE(LO16(eax), MEM16(ebp + 0x44))) goto loc_00469DA0; /* jge: greater or equal (signed >=) */

loc_00469A31: ;
    edx = SX16(LO16(edx));

loc_00469A34: ;
    ebx = MEM32(ebp + 0x5C);
    MEM32(ebp + 0x70) = MEM32(ebp + 0x70) & 0;
    eax = SX16(LO16(eax));
    ebx = ebx + eax * 4;
    eax = (uint32_t)((int32_t)eax * (int32_t)0x144);
    fp_push(MEMF(ebx)); /* fld float */
    fp_st1() += fp_top(); fp_pop(); /* fadd */
    eax = eax + esi;
    (void)0; /* test edx, edx - flags set for next jcc */
    fp_st1() += fp_top(); fp_pop(); /* fadd */
    MEM32(ebp + 0x14) = ebx;
    MEM32(ebp + 0x10) = eax;
    MEMF(ebp + 0x40) = (float)fp_top(); fp_pop(); /* fst */
    fp_push(MEMF(eax)); /* fld float */
    fp_st1() *= fp_top(); fp_pop(); /* fmul */
    fp_st1() += fp_top(); fp_pop(); /* fadd */
    MEMF(ebp + 0x68) = (float)fp_top(); fp_popp(); /* fstp */
    if (CMP_LE(edx & edx, 0)) goto loc_00469AA1; /* jle: less or equal (signed <=) */

loc_00469A6B: ;
    ebx = MEM32(ebp + 0x70);
    eax = edi + -124;
    eax = (uint32_t)(int32_t)SMEM16(eax + ebx * 2);
    ebx = eax + eax * 4;
    eax = (uint32_t)(int32_t)SMEM16(ebp + 0x4C);
    ebx = ebx << 4;
    ebx = ebx + eax;
    eax = edi + -80;
    fp_push(MEMF(esi + ebx * 4)); /* fld float */
    ebx = MEM32(ebp + 0x70);
    fp_st1() *= fp_top(); fp_pop(); /* fmul */
    MEM32(ebp + 0x70) = MEM32(ebp + 0x70) + 1;
    (void)0; /* cmp MEM32(ebp + 0x70), edx - flags set for next jcc */
    /* FPU: fimul dword ptr [eax + ebx*4] */
    fp_st1() += fp_top(); fp_pop(); /* fadd */
    MEMF(ebp + 0x68) = (float)fp_top(); fp_popp(); /* fstp */
    if (CMP_L(MEM32(ebp + 0x70), edx)) goto loc_00469A6B; /* jl: less (signed <) */

loc_00469AA1: ;
    /* fld st(0) */
    fp_st1() *= fp_top(); fp_pop(); /* fmul */
    MEMF(ebp + 0x70) = (float)fp_top(); fp_pop(); /* fst */
    /* fstp st(1) */
    fp_push(MEMF(ebp + 0x68)); /* fld float */
    fp_st1() *= fp_top(); fp_pop(); /* fmul */
    /* fld st(1) */
    _fpu_cmp = (fp_top() < fp_st1()) ? -1 : (fp_top() > fp_st1()) ? 1 : 0; /* fcompp  */
    /* fnstsw ax - store FPU status word */
    /* fstp st(0) */
    if (TEST_NZ(HI8(eax), 0x41)) goto loc_00469B4A; /* jne: not equal / not zero */

loc_00469AC0: ;
    /* fstp st(0) */
    fp_push(MEMF(ebp + 0x68)); /* fld float */
    fp_push(MEMF(ebp + 0x70)); /* fld float */
    MEM32(ebp + 0x70) = MEM32(ebp + 0x70) & 0;
    (void)0; /* test edx, edx - flags set for next jcc */
    fp_st1() /= fp_top(); fp_pop(); /* fdiv */
    if (CMP_LE(edx & edx, 0)) goto loc_00469B0F; /* jle: less or equal (signed <=) */

loc_00469AD2: ;
    eax = ecx + 0x2C;
    MEM32(ebp + 0x78) = eax;
    eax = edi + -80;
    MEM32(ebp + 0x68) = eax;
    eax = edi + -124;
    MEM32(ebp + 0x50) = eax;

loc_00469AE4: ;
    eax = MEM32(ebp + 0x50);
    SET_LO16(eax, MEM16(eax));
    ebx = MEM32(ebp + 0x70);
    MEM32(ebp + 0x70) = MEM32(ebp + 0x70) + 1;
    MEM32(ebp + 0x50) = MEM32(ebp + 0x50) + 2;
    MEM16(ecx + ebx * 2) = LO16(eax);
    eax = MEM32(ebp + 0x68);
    ebx = MEM32(ebp + 0x78);
    eax = MEM32(eax);
    MEM32(ebp + 0x68) = MEM32(ebp + 0x68) + 4;
    MEM32(ebp + 0x78) = MEM32(ebp + 0x78) + 4;
    (void)0; /* cmp MEM32(ebp + 0x70), edx - flags set for next jcc */
    MEM32(ebx) = eax;
    if (CMP_L(MEM32(ebp + 0x70), edx)) goto loc_00469AE4; /* jl: less (signed <) */

loc_00469B0F: ;
    eax = MEM32(ebp + 0x40);
    /* fld st(1) */
    MEMF(ecx + 0x88) = (float)fp_top(); fp_popp(); /* fstp */
    ebx = 0; /* xor self */
    MEM32(ecx + 0x7C) = eax;
    eax = MEM32(ebp + 0x4C);
    MEMF(ecx + 0x8C) = (float)fp_top(); fp_pop(); /* fst */
    ebx++;
    /* fst st(1) */
    MEM32(ecx + edx * 4 + 0x30) = ebx;
    /* fstp st(0) */
    MEM32(ecx + edx * 4 + 0x2C) = ebx;
    ebx = MEM32(ebp + 0x30);
    ebx = ebx + 2;
    MEM16(ecx + edx * 2 + 2) = LO16(eax);
    MEM16(ecx + edx * 2) = LO16(eax);
    MEM16(ecx + 0x28) = LO16(ebx);
    goto loc_00469B4D;

loc_00469B4A: ;
    eax = MEM32(ebp + 0x4C);

loc_00469B4D: ;
    ebx = MEM32(ebp + 0x24);
    ebx = ebx + eax;
    (void)0; /* cmp LO16(ebx), MEM16(ebp + 0x44) - flags set for next jcc */
    MEM32(ebp + 0x2C) = ebx;
    MEM32(ebp + 0x78) = ebx;
    if (CMP_GE(LO16(ebx), MEM16(ebp + 0x44))) goto loc_00469D90; /* jge: greater or equal (signed >=) */

loc_00469B62: ;
    eax = SX16(LO16(eax));
    eax = eax + eax * 4;
    eax = eax << 4;
    MEM32(ebp + 0x1C) = eax;

loc_00469B6E: ;
    eax = MEM32(ebp + 0x14);
    fp_push(MEMF(ebp + 0xC)); /* fld float */
    fp_st1() += fp_top(); fp_pop(); /* fadd */
    eax = (uint32_t)(int32_t)SMEM16(ebp + 0x78);
    edi = MEM32(ebp + 0x5C);
    ebx = MEM32(ebp + 0x10);
    /* fld st(0) */
    edi = edi + eax * 4;
    MEM32(ebp + 0x70) = MEM32(ebp + 0x70) & 0;
    fp_st1() -= fp_top(); fp_pop(); /* fsub */
    MEMF(ebp + 0x38) = (float)fp_top(); fp_popp(); /* fstp */
    fp_st1() += fp_top(); fp_pop(); /* fadd */
    edi = eax;
    edi = (uint32_t)((int32_t)edi * (int32_t)0x144);
    MEMF(ebp + 0x40) = (float)fp_top(); fp_pop(); /* fst */
    fp_push(MEMF(ebp + 0x20)); /* fld float */
    fp_st1() += fp_top(); fp_pop(); /* fadd */
    fp_st1() += fp_top(); fp_pop(); /* fadd */
    edi = MEM32(ebp + 0x1C);
    edi = edi + eax;
    (void)0; /* test edx, edx - flags set for next jcc */
    fp_push(MEMF(esi + edi * 4)); /* fld float */
    fp_st1() += fp_top(); fp_pop(); /* fadd */
    /* fld st(1) */
    fp_st1() -= fp_top(); fp_pop(); /* fsub */
    MEMF(ebp + 0x48) = (float)fp_top(); fp_popp(); /* fstp */
    fp_st1() += fp_top(); fp_pop(); /* fadd */
    MEMF(ebp + 0x68) = (float)fp_top(); fp_popp(); /* fstp */
    /* fstp st(0) */
    if (CMP_LE(edx & edx, 0)) goto loc_00469C1F; /* jle: less or equal (signed <=) */

loc_00469BBF: ;
    ebx = MEM32(ebp + 0x70);
    edi = MEM32(ebp + 0x34);
    edi = edi + 0xFFFFFF84u;
    edi = (uint32_t)(int32_t)SMEM16(edi + ebx * 2);
    edi = edi + edi * 4;
    edi = edi << 4;
    MEM32(ebp + 0x50) = edi;
    edi = MEM32(ebp + 0x34);
    edi = edi + 0xFFFFFFB0u;
    fp_push((double)SMEM32(edi + ebx * 4)); /* fild */
    ebx = (uint32_t)(int32_t)SMEM16(ebp + 0x4C);
    edi = MEM32(ebp + 0x50);
    ebx = ebx + edi;
    edi = edi + eax;
    MEM32(ebp + 0x70) = MEM32(ebp + 0x70) + 1;
    (void)0; /* cmp MEM32(ebp + 0x70), edx - flags set for next jcc */
    fp_push(MEMF(esi + ebx * 4)); /* fld float */
    fp_st1() += fp_top(); fp_pop(); /* fadd */
    fp_st1() *= fp_top(); fp_pop(); /* fmul */
    fp_push(MEMF(ebp + 0x68)); /* fld float */
    fp_st1() += fp_top(); fp_pop(); /* fadd */
    MEMF(ebp + 0x68) = (float)fp_top(); fp_popp(); /* fstp */
    fp_st1() += fp_top(); fp_pop(); /* fadd */
    MEMF(ebp + 0x48) = (float)fp_top(); fp_popp(); /* fstp */
    fp_push(MEMF(esi + edi * 4)); /* fld float */
    fp_st1() += fp_top(); fp_pop(); /* fadd */
    fp_st1() *= fp_top(); fp_pop(); /* fmulp */
    fp_push(MEMF(ebp + 0x68)); /* fld float */
    fp_st1() += fp_top(); fp_pop(); /* fadd */
    MEMF(ebp + 0x68) = (float)fp_top(); fp_popp(); /* fstp */
    fp_push(MEMF(ebp + 0x48)); /* fld float */
    fp_st1() -= fp_top(); fp_pop(); /* fsub */
    MEMF(ebp + 0x48) = (float)fp_top(); fp_popp(); /* fstp */
    /* fstp st(0) */
    if (CMP_L(MEM32(ebp + 0x70), edx)) goto loc_00469BBF; /* jl: less (signed <) */

loc_00469C1F: ;
    edi = MEM32(ebp + 0x34);
    /* fld st(0) */
    fp_st1() *= fp_top(); fp_pop(); /* fmul */
    MEMF(ebp + 0x70) = (float)fp_top(); fp_pop(); /* fst */
    /* fstp st(1) */
    fp_push(MEMF(ebp + 0x68)); /* fld float */
    fp_st1() *= fp_top(); fp_pop(); /* fmul */
    /* fld st(1) */
    _fpu_cmp = (fp_top() < fp_st1()) ? -1 : (fp_top() > fp_st1()) ? 1 : 0; /* fcompp  */
    /* fnstsw ax - store FPU status word */
    /* fstp st(0) */
    if (TEST_NZ(HI8(eax), 0x41)) goto loc_00469CCE; /* jne: not equal / not zero */

loc_00469C41: ;
    /* fstp st(0) */
    fp_push(MEMF(ebp + 0x68)); /* fld float */
    fp_push(MEMF(ebp + 0x70)); /* fld float */
    MEM32(ebp + 0x70) = MEM32(ebp + 0x70) & 0;
    (void)0; /* test edx, edx - flags set for next jcc */
    fp_st1() /= fp_top(); fp_pop(); /* fdiv */
    if (CMP_LE(edx & edx, 0)) goto loc_00469C90; /* jle: less or equal (signed <=) */

loc_00469C53: ;
    eax = ecx + 0x2C;
    MEM32(ebp + 0x50) = eax;
    eax = edi + -80;
    MEM32(ebp + 0x68) = eax;
    eax = edi + -124;
    MEM32(ebp + 0x3C) = eax;

loc_00469C65: ;
    eax = MEM32(ebp + 0x3C);
    SET_LO16(eax, MEM16(eax));
    ebx = MEM32(ebp + 0x70);
    MEM32(ebp + 0x70) = MEM32(ebp + 0x70) + 1;
    MEM32(ebp + 0x3C) = MEM32(ebp + 0x3C) + 2;
    MEM16(ecx + ebx * 2) = LO16(eax);
    eax = MEM32(ebp + 0x68);
    ebx = MEM32(ebp + 0x50);
    eax = MEM32(eax);
    MEM32(ebp + 0x68) = MEM32(ebp + 0x68) + 4;
    MEM32(ebp + 0x50) = MEM32(ebp + 0x50) + 4;
    (void)0; /* cmp MEM32(ebp + 0x70), edx - flags set for next jcc */
    MEM32(ebx) = eax;
    if (CMP_L(MEM32(ebp + 0x70), edx)) goto loc_00469C65; /* jl: less (signed <) */

loc_00469C90: ;
    eax = MEM32(ebp + 0x40);
    /* fld st(1) */
    MEM32(ecx + 0x7C) = eax;
    MEMF(ecx + 0x88) = (float)fp_top(); fp_popp(); /* fstp */
    SET_LO16(eax, MEM16(ebp + 0x4C));
    MEMF(ecx + 0x8C) = (float)fp_top(); fp_pop(); /* fst */
    MEM16(ecx + edx * 2) = LO16(eax);
    SET_LO16(eax, MEM16(ebp + 0x78));
    /* fst st(1) */
    MEM16(ecx + edx * 2 + 2) = LO16(eax);
    /* fstp st(0) */
    eax = 0; /* xor self */
    eax++;
    MEM32(ecx + edx * 4 + 0x30) = eax;
    MEM32(ecx + edx * 4 + 0x2C) = eax;
    eax = MEM32(ebp + 0x30);
    eax = eax + 2;
    MEM16(ecx + 0x28) = LO16(eax);

loc_00469CCE: ;
    fp_push(MEMF(ebp + 0x38)); /* fld float */
    fp_st1() *= fp_top(); fp_pop(); /* fmul */
    MEMF(ebp + 0x70) = (float)fp_top(); fp_pop(); /* fst */
    fp_push(MEMF(ebp + 0x48)); /* fld float */
    fp_st1() *= fp_top(); fp_pop(); /* fmul */
    /* fld st(1) */
    _fpu_cmp = (fp_top() < fp_st1()) ? -1 : (fp_top() > fp_st1()) ? 1 : 0; /* fcompp  */
    /* fnstsw ax - store FPU status word */
    /* fstp st(0) */
    if (TEST_NZ(HI8(eax), 0x41)) goto loc_00469D7C; /* jne: not equal / not zero */

loc_00469CED: ;
    /* fstp st(0) */
    fp_push(MEMF(ebp + 0x48)); /* fld float */
    fp_push(MEMF(ebp + 0x70)); /* fld float */
    MEM32(ebp + 0x70) = MEM32(ebp + 0x70) & 0;
    (void)0; /* test edx, edx - flags set for next jcc */
    fp_st1() /= fp_top(); fp_pop(); /* fdiv */
    if (CMP_LE(edx & edx, 0)) goto loc_00469D3C; /* jle: less or equal (signed <=) */

loc_00469CFF: ;
    eax = ecx + 0x2C;
    MEM32(ebp + 0x50) = eax;
    eax = edi + -80;
    MEM32(ebp + 0x68) = eax;
    eax = edi + -124;
    MEM32(ebp + 0x3C) = eax;

loc_00469D11: ;
    eax = MEM32(ebp + 0x3C);
    SET_LO16(eax, MEM16(eax));
    ebx = MEM32(ebp + 0x70);
    MEM32(ebp + 0x70) = MEM32(ebp + 0x70) + 1;
    MEM32(ebp + 0x3C) = MEM32(ebp + 0x3C) + 2;
    MEM16(ecx + ebx * 2) = LO16(eax);
    eax = MEM32(ebp + 0x68);
    ebx = MEM32(ebp + 0x50);
    eax = MEM32(eax);
    MEM32(ebp + 0x68) = MEM32(ebp + 0x68) + 4;
    MEM32(ebp + 0x50) = MEM32(ebp + 0x50) + 4;
    (void)0; /* cmp MEM32(ebp + 0x70), edx - flags set for next jcc */
    MEM32(ebx) = eax;
    if (CMP_L(MEM32(ebp + 0x70), edx)) goto loc_00469D11; /* jl: less (signed <) */

loc_00469D3C: ;
    eax = MEM32(ebp + 0x38);
    /* fld st(1) */
    MEMF(ecx + 0x88) = (float)fp_top(); fp_popp(); /* fstp */
    MEM32(ecx + 0x7C) = eax;
    SET_LO16(eax, MEM16(ebp + 0x4C));
    MEMF(ecx + 0x8C) = (float)fp_top(); fp_pop(); /* fst */
    MEM32(ecx + edx * 4 + 0x30) = MEM32(ecx + edx * 4 + 0x30) | 0xFFFFFFFFu;
    MEM16(ecx + edx * 2) = LO16(eax);
    /* fst st(1) */
    SET_LO16(eax, MEM16(ebp + 0x78));
    /* fstp st(0) */
    MEM16(ecx + edx * 2 + 2) = LO16(eax);
    eax = MEM32(ebp + 0x30);
    eax = eax + 2;
    MEM32(ecx + edx * 4 + 0x2C) = 1;
    MEM16(ecx + 0x28) = LO16(eax);

loc_00469D7C: ;
    eax = MEM32(ebp + 0x24);
    MEM32(ebp + 0x78) = MEM32(ebp + 0x78) + eax;
    SET_LO16(eax, MEM16(ebp + 0x78));
    if (CMP_L(LO16(eax), MEM16(ebp + 0x44))) goto loc_00469B6E; /* jl: less (signed <) */

loc_00469D90: ;
    eax = MEM32(ebp + 0x2C);
    (void)0; /* cmp LO16(eax), MEM16(ebp + 0x44) - flags set for next jcc */
    MEM32(ebp + 0x4C) = eax;
    if (CMP_L(LO16(eax), MEM16(ebp + 0x44))) goto loc_00469A34; /* jl: less (signed <) */

loc_00469DA0: ;
    edi = edi + 0x94;
    MEM32(ebp + 0x28) = MEM32(ebp + 0x28) - 1;
    MEM32(ebp + 0x34) = edi;
    if ((MEM32(ebp + 0x28) != 0)) goto loc_00469A0A; /* jne: not equal / not zero */

loc_00469DB2: ;
    goto loc_0046A91E;

loc_00469DB7: ;
    if (CMP_NE(MEM16(ebp + 0x7C), 0)) goto loc_0046A0AA; /* jne: not equal / not zero */

loc_00469DC2: ;
    esi = 0; /* xor self */
    SET_LO16(esi, MEM16(edi));
    (void)0; /* cmp LO16(esi), MEM16(ebp + 0x44) - flags set for next jcc */
    MEM32(ebp + 0x4C) = esi;
    if (CMP_GE(LO16(esi), MEM16(ebp + 0x44))) { sub_0046A926(); return; } /* jge: greater or equal (signed >=) */

loc_00469DD4: ;
    ecx = MEM32(ebp + 0x5C);
    eax = SX16(LO16(esi));
    ecx = ecx + eax * 4;
    eax = (uint32_t)((int32_t)eax * (int32_t)0x144);
    fp_push(MEMF(ecx)); /* fld float */
    fp_st1() += fp_top(); fp_pop(); /* fadd */
    MEM32(ebp + 0x14) = ecx;
    ecx = MEM32(ebp + 0x60);
    eax = eax + ecx;
    MEM32(ebp + 0x10) = eax;
    MEMF(ebp + 0x40) = (float)fp_top(); fp_pop(); /* fst */
    fp_push(MEMF(eax)); /* fld float */
    fp_st1() *= fp_top(); fp_pop(); /* fmul */
    MEMF(ebp + 0x68) = (float)fp_top(); fp_popp(); /* fstp */
    /* fld st(0) */
    fp_st1() *= fp_top(); fp_pop(); /* fmul */
    MEMF(ebp + 0x70) = (float)fp_top(); fp_pop(); /* fst */
    /* fstp st(1) */
    fp_push(MEMF(ebp + 0x68)); /* fld float */
    fp_st1() *= fp_top(); fp_pop(); /* fmul */
    /* fld st(1) */
    _fpu_cmp = (fp_top() < fp_st1()) ? -1 : (fp_top() > fp_st1()) ? 1 : 0; /* fcompp  */
    /* fnstsw ax - store FPU status word */
    /* fstp st(0) */
    if (TEST_NZ(HI8(eax), 0x41)) goto loc_00469EB8; /* jne: not equal / not zero */

loc_00469E1F: ;
    ecx = MEM32(ebp + 0x18);
    /* fstp st(0) */
    fp_push(MEMF(ebp + 0x68)); /* fld float */
    edi = ecx + -1;
    fp_push(MEMF(ebp + 0x70)); /* fld float */
    edx = edi;
    (void)0; /* cmp edx, ebx - flags set for next jcc */
    fp_st1() /= fp_top(); fp_pop(); /* fdiv */
    MEM32(ebp + 0x68) = edx;
    if (CMP_L(edx, ebx)) goto loc_00469E5D; /* jl: less (signed <) */

loc_00469E38: ;
    eax = ebp + edx * 4 + -72;
    MEM32(ebp + 0x70) = eax;

loc_00469E3F: ;
    eax = MEM32(ebp + 0x70);
    eax = MEM32(eax);
    _fpu_cmp = (fp_top() < fp_st1()) ? -1 : (fp_top() > fp_st1()) ? 1 : 0; /* fcom dword ptr [eax + 0x8c] */
    /* fnstsw ax - store FPU status word */
    if (1 /* jnp after test - parity */) goto loc_00469E5D; /* jnp: not parity */

loc_00469E51: ;
    MEM32(ebp + 0x70) = MEM32(ebp + 0x70) - 4;
    edx--;
    (void)0; /* cmp edx, ebx - flags set for next jcc */
    MEM32(ebp + 0x68) = edx;
    if (CMP_GE(edx, ebx)) goto loc_00469E3F; /* jge: greater or equal (signed >=) */

loc_00469E5D: ;
    (void)0; /* cmp edi, edx - flags set for next jcc */
    ecx = ebp + ecx * 4 + -72;
    eax = MEM32(ecx);
    MEM32(ebp + 0x70) = edi;
    if (CMP_LE(edi, edx)) goto loc_00469E83; /* jle: less or equal (signed <=) */

loc_00469E6A: ;
    edx = MEM32(ebp + 0x70);
    edx = edx << 2;
    edi = MEM32(ebp + edx + -72);
    MEM32(ebp + 0x70) = MEM32(ebp + 0x70) - 1;
    MEM32(ebp + edx + -68) = edi;
    edx = MEM32(ebp + 0x68);
    if (CMP_G(MEM32(ebp + 0x70), edx)) goto loc_00469E6A; /* jg: greater (signed >) */

loc_00469E83: ;
    /* fld st(1) */
    MEM32(ebp + edx * 4 + -68) = eax;
    edx = MEM32(ebp + 0x40);
    MEMF(eax + 0x88) = (float)fp_top(); fp_popp(); /* fstp */
    MEM32(eax + 0x7C) = edx;
    MEMF(eax + 0x8C) = (float)fp_top(); fp_popp(); /* fstp */
    MEM16(eax + 2) = LO16(esi);
    MEM16(eax) = LO16(esi);
    MEM32(eax + 0x30) = ebx;
    /* fstp st(0) */
    MEM32(eax + 0x2C) = ebx;
    MEM16(eax + 0x28) = 2;
    eax = MEM32(ecx);
    fp_push(MEMF(eax + 0x8C)); /* fld float */

loc_00469EB8: ;
    eax = MEM32(ebp + 0x24);
    edx = esi + eax;
    (void)0; /* cmp LO16(edx), MEM16(ebp + 0x44) - flags set for next jcc */
    MEM32(ebp + 0x2C) = edx;
    MEM32(ebp + 0x78) = edx;
    if (CMP_GE(LO16(edx), MEM16(ebp + 0x44))) goto loc_0046A09A; /* jge: greater or equal (signed >=) */

loc_00469ECE: ;
    eax = SX16(LO16(esi));
    eax = eax + eax * 4;
    eax = eax << 4;
    MEM32(ebp + 0x1C) = eax;

loc_00469EDA: ;
    eax = MEM32(ebp + 0x14);
    fp_push(MEMF(eax)); /* fld float */
    ecx = MEM32(ebp + 0x5C);
    /* fld st(0) */
    eax = SX16(LO16(edx));
    ecx = ecx + eax * 4;
    edi = eax;
    edi = (uint32_t)((int32_t)edi * (int32_t)0x144);
    fp_st1() -= fp_top(); fp_pop(); /* fsub */
    MEMF(ebp + 0x38) = (float)fp_top(); fp_popp(); /* fstp */
    fp_st1() += fp_top(); fp_pop(); /* fadd */
    MEMF(ebp + 0x40) = (float)fp_top(); fp_pop(); /* fst */
    ecx = MEM32(ebp + 0x60);
    fp_push(MEMF(edi + ecx)); /* fld float */
    edi = MEM32(ebp + 0x10);
    fp_st1() += fp_top(); fp_pop(); /* fadd */
    edi = MEM32(ebp + 0x1C);
    edi = edi + eax;
    fp_push(MEMF(ecx + edi * 4)); /* fld float */
    fp_st1() += fp_top(); fp_pop(); /* fadd */
    /* fld st(1) */
    fp_st1() -= fp_top(); fp_pop(); /* fsub */
    MEMF(ebp + 0x48) = (float)fp_top(); fp_popp(); /* fstp */
    fp_st1() += fp_top(); fp_pop(); /* fadd */
    MEMF(ebp + 0x68) = (float)fp_top(); fp_popp(); /* fstp */
    /* fstp st(0) */
    /* fld st(0) */
    fp_st1() *= fp_top(); fp_pop(); /* fmul */
    MEMF(ebp + 0x70) = (float)fp_top(); fp_pop(); /* fst */
    /* fstp st(1) */
    fp_push(MEMF(ebp + 0x68)); /* fld float */
    fp_st1() *= fp_top(); fp_pop(); /* fmul */
    /* fld st(1) */
    _fpu_cmp = (fp_top() < fp_st1()) ? -1 : (fp_top() > fp_st1()) ? 1 : 0; /* fcompp  */
    /* fnstsw ax - store FPU status word */
    /* fstp st(0) */
    if (TEST_NZ(HI8(eax), 0x41)) goto loc_00469FD4; /* jne: not equal / not zero */

loc_00469F3E: ;
    ecx = MEM32(ebp + 0x18);
    /* fstp st(0) */
    fp_push(MEMF(ebp + 0x68)); /* fld float */
    edi = ecx + -1;
    fp_push(MEMF(ebp + 0x70)); /* fld float */
    edx = edi;
    (void)0; /* cmp edx, ebx - flags set for next jcc */
    fp_st1() /= fp_top(); fp_pop(); /* fdiv */
    if (CMP_L(edx, ebx)) goto loc_00469F76; /* jl: less (signed <) */

loc_00469F54: ;
    eax = ebp + edx * 4 + -72;
    MEM32(ebp + 0x70) = eax;

loc_00469F5B: ;
    eax = MEM32(ebp + 0x70);
    eax = MEM32(eax);
    _fpu_cmp = (fp_top() < fp_st1()) ? -1 : (fp_top() > fp_st1()) ? 1 : 0; /* fcom dword ptr [eax + 0x8c] */
    /* fnstsw ax - store FPU status word */
    if (1 /* jnp after test - parity */) goto loc_00469F76; /* jnp: not parity */

loc_00469F6D: ;
    MEM32(ebp + 0x70) = MEM32(ebp + 0x70) - 4;
    edx--;
    if (CMP_GE(edx, ebx)) goto loc_00469F5B; /* jge: greater or equal (signed >=) */

loc_00469F76: ;
    (void)0; /* cmp edi, edx - flags set for next jcc */
    ecx = ebp + ecx * 4 + -72;
    eax = MEM32(ecx);
    MEM32(ebp + 0x70) = edi;
    if (CMP_LE(edi, edx)) goto loc_00469F9C; /* jle: less or equal (signed <=) */

loc_00469F83: ;
    esi = MEM32(ebp + 0x70);
    esi = esi << 2;
    MEM32(ebp + 0x70) = MEM32(ebp + 0x70) - 1;
    (void)0; /* cmp MEM32(ebp + 0x70), edx - flags set for next jcc */
    edi = MEM32(ebp + esi + -72);
    MEM32(ebp + esi + -68) = edi;
    if (CMP_G(MEM32(ebp + 0x70), edx)) goto loc_00469F83; /* jg: greater (signed >) */

loc_00469F99: ;
    esi = MEM32(ebp + 0x4C);

loc_00469F9C: ;
    MEM32(ebp + edx * 4 + -68) = eax;
    /* fld st(1) */
    edx = MEM32(ebp + 0x40);
    MEMF(eax + 0x88) = (float)fp_top(); fp_popp(); /* fstp */
    MEM32(eax + 0x7C) = edx;
    edx = MEM32(ebp + 0x78);
    MEMF(eax + 0x8C) = (float)fp_top(); fp_popp(); /* fstp */
    MEM16(eax) = LO16(esi);
    MEM16(eax + 2) = LO16(edx);
    /* fstp st(0) */
    MEM32(eax + 0x30) = ebx;
    MEM32(eax + 0x2C) = ebx;
    MEM16(eax + 0x28) = 2;
    eax = MEM32(ecx);
    fp_push(MEMF(eax + 0x8C)); /* fld float */

loc_00469FD4: ;
    fp_push(MEMF(ebp + 0x38)); /* fld float */
    fp_st1() *= fp_top(); fp_pop(); /* fmul */
    MEMF(ebp + 0x70) = (float)fp_top(); fp_pop(); /* fst */
    fp_push(MEMF(ebp + 0x48)); /* fld float */
    fp_st1() *= fp_top(); fp_pop(); /* fmul */
    /* fld st(1) */
    _fpu_cmp = (fp_top() < fp_st1()) ? -1 : (fp_top() > fp_st1()) ? 1 : 0; /* fcompp  */
    /* fnstsw ax - store FPU status word */
    /* fstp st(0) */
    if (TEST_NZ(HI8(eax), 0x41)) goto loc_0046A08A; /* jne: not equal / not zero */

loc_00469FF3: ;
    ecx = MEM32(ebp + 0x18);
    /* fstp st(0) */
    fp_push(MEMF(ebp + 0x48)); /* fld float */
    edi = ecx + -1;
    fp_push(MEMF(ebp + 0x70)); /* fld float */
    edx = edi;
    (void)0; /* cmp edx, ebx - flags set for next jcc */
    fp_st1() /= fp_top(); fp_pop(); /* fdiv */
    if (CMP_L(edx, ebx)) goto loc_0046A02B; /* jl: less (signed <) */

loc_0046A009: ;
    eax = ebp + edx * 4 + -72;
    MEM32(ebp + 0x70) = eax;

loc_0046A010: ;
    eax = MEM32(ebp + 0x70);
    eax = MEM32(eax);
    _fpu_cmp = (fp_top() < fp_st1()) ? -1 : (fp_top() > fp_st1()) ? 1 : 0; /* fcom dword ptr [eax + 0x8c] */
    /* fnstsw ax - store FPU status word */
    if (1 /* jnp after test - parity */) goto loc_0046A02B; /* jnp: not parity */

loc_0046A022: ;
    MEM32(ebp + 0x70) = MEM32(ebp + 0x70) - 4;
    edx--;
    if (CMP_GE(edx, ebx)) goto loc_0046A010; /* jge: greater or equal (signed >=) */

loc_0046A02B: ;
    (void)0; /* cmp edi, edx - flags set for next jcc */
    ecx = ebp + ecx * 4 + -72;
    eax = MEM32(ecx);
    MEM32(ebp + 0x70) = edi;
    if (CMP_LE(edi, edx)) goto loc_0046A051; /* jle: less or equal (signed <=) */

loc_0046A038: ;
    esi = MEM32(ebp + 0x70);
    esi = esi << 2;
    MEM32(ebp + 0x70) = MEM32(ebp + 0x70) - 1;
    (void)0; /* cmp MEM32(ebp + 0x70), edx - flags set for next jcc */
    edi = MEM32(ebp + esi + -72);
    MEM32(ebp + esi + -68) = edi;
    if (CMP_G(MEM32(ebp + 0x70), edx)) goto loc_0046A038; /* jg: greater (signed >) */

loc_0046A04E: ;
    esi = MEM32(ebp + 0x4C);

loc_0046A051: ;
    MEM32(eax + 0x30) = MEM32(eax + 0x30) | 0xFFFFFFFFu;
    /* fld st(1) */
    MEM32(ebp + edx * 4 + -68) = eax;
    MEMF(eax + 0x88) = (float)fp_top(); fp_popp(); /* fstp */
    edx = MEM32(ebp + 0x38);
    MEM32(eax + 0x7C) = edx;
    MEMF(eax + 0x8C) = (float)fp_top(); fp_popp(); /* fstp */
    edx = MEM32(ebp + 0x78);
    MEM16(eax) = LO16(esi);
    /* fstp st(0) */
    MEM16(eax + 2) = LO16(edx);
    MEM32(eax + 0x2C) = ebx;
    MEM16(eax + 0x28) = 2;
    eax = MEM32(ecx);
    fp_push(MEMF(eax + 0x8C)); /* fld float */

loc_0046A08A: ;
    edx = edx + MEM32(ebp + 0x24);
    (void)0; /* cmp LO16(edx), MEM16(ebp + 0x44) - flags set for next jcc */
    MEM32(ebp + 0x78) = edx;
    if (CMP_L(LO16(edx), MEM16(ebp + 0x44))) goto loc_00469EDA; /* jl: less (signed <) */

loc_0046A09A: ;
    esi = MEM32(ebp + 0x2C);
    (void)0; /* cmp LO16(esi), MEM16(ebp + 0x44) - flags set for next jcc */
    MEM32(ebp + 0x4C) = esi;
    if (CMP_L(LO16(esi), MEM16(ebp + 0x44))) goto loc_00469DD4; /* jl: less (signed <) */

loc_0046A0AA: ;
    if (CMP_NE(MEM16(ebp + 0x7C), LO16(ebx))) goto loc_0046A59E; /* jne: not equal / not zero */

loc_0046A0B4: ;
    eax = (uint32_t)(int32_t)SMEM16(ebp + 0x6C);
    if (CMP_LE(eax & eax, 0)) { sub_0046A926(); return; } /* jle: less or equal (signed <=) */

loc_0046A0C0: ;
    edi = MEM32(ebp + 0x74);
    edi = edi + 0x7C;
    MEM32(ebp + 0x34) = edi;
    MEM32(ebp + 0x28) = eax;

loc_0046A0CC: ;
    eax = MEM32(edi);
    MEM32(ebp + 0xC) = eax;
    eax = MEM32(edi + 0xC);
    ecx = 0; /* xor self */
    SET_LO16(ecx, MEM16(edi + -84));
    MEM32(ebp + 0x20) = eax;
    eax = MEM32(ebp + 0x64);
    eax = (uint32_t)(int32_t)SMEM16(eax);
    (void)0; /* cmp LO16(eax), MEM16(ebp + 0x44) - flags set for next jcc */
    MEM32(ebp + 0x30) = ecx;
    MEM32(ebp + 0x4C) = eax;
    if (CMP_GE(LO16(eax), MEM16(ebp + 0x44))) goto loc_0046A58C; /* jge: greater or equal (signed >=) */

loc_0046A0F3: ;
    ecx = SX16(LO16(ecx));

loc_0046A0F6: ;
    eax = (uint32_t)(int32_t)SMEM16(ebp + 0x4C);
    edx = MEM32(ebp + 0x5C);
    esi = MEM32(ebp + 0x60);
    MEM32(ebp + 0x70) = MEM32(ebp + 0x70) & 0;
    edx = edx + eax * 4;
    MEM32(ebp + 0x14) = edx;
    fp_push(MEMF(edx)); /* fld float */
    edx = eax;
    fp_st1() += fp_top(); fp_pop(); /* fadd */
    edx = (uint32_t)((int32_t)edx * (int32_t)0x144);
    edx = edx + esi;
    (void)0; /* test ecx, ecx - flags set for next jcc */
    fp_st1() += fp_top(); fp_pop(); /* fadd */
    MEM32(ebp + 0x10) = edx;
    MEMF(ebp + 0x40) = (float)fp_top(); fp_pop(); /* fst */
    fp_push(MEMF(edx)); /* fld float */
    fp_st1() *= fp_top(); fp_pop(); /* fmul */
    fp_st1() += fp_top(); fp_pop(); /* fadd */
    MEMF(ebp + 0x68) = (float)fp_top(); fp_popp(); /* fstp */
    if (CMP_LE(ecx & ecx, 0)) goto loc_0046A168; /* jle: less or equal (signed <=) */

loc_0046A133: ;
    esi = MEM32(ebp + 0x70);
    edx = edi + -124;
    edx = (uint32_t)(int32_t)SMEM16(edx + esi * 2);
    esi = MEM32(ebp + 0x60);
    edx = edx + edx * 4;
    edx = edx << 4;
    edx = edx + eax;
    fp_push(MEMF(esi + edx * 4)); /* fld float */
    esi = MEM32(ebp + 0x70);
    fp_st1() *= fp_top(); fp_pop(); /* fmul */
    MEM32(ebp + 0x70) = MEM32(ebp + 0x70) + 1;
    (void)0; /* cmp MEM32(ebp + 0x70), ecx - flags set for next jcc */
    edx = edi + -80;
    /* FPU: fimul dword ptr [edx + esi*4] */
    fp_st1() += fp_top(); fp_pop(); /* fadd */
    MEMF(ebp + 0x68) = (float)fp_top(); fp_popp(); /* fstp */
    if (CMP_L(MEM32(ebp + 0x70), ecx)) goto loc_0046A133; /* jl: less (signed <) */

loc_0046A168: ;
    /* fld st(0) */
    fp_st1() *= fp_top(); fp_pop(); /* fmul */
    MEMF(ebp + 0x70) = (float)fp_top(); fp_pop(); /* fst */
    /* fstp st(1) */
    fp_push(MEMF(ebp + 0x68)); /* fld float */
    fp_st1() *= fp_top(); fp_pop(); /* fmul */
    /* fld st(1) */
    _fpu_cmp = (fp_top() < fp_st1()) ? -1 : (fp_top() > fp_st1()) ? 1 : 0; /* fcompp  */
    /* fnstsw ax - store FPU status word */
    /* fstp st(0) */
    if (TEST_NZ(HI8(eax), 0x41)) goto loc_0046A279; /* jne: not equal / not zero */

loc_0046A187: ;
    esi = MEM32(ebp + 0x18);
    /* fstp st(0) */
    fp_push(MEMF(ebp + 0x68)); /* fld float */
    edx = esi + -1;
    (void)0; /* cmp edx, ebx - flags set for next jcc */
    fp_push(MEMF(ebp + 0x70)); /* fld float */
    fp_st1() /= fp_top(); fp_pop(); /* fdiv */
    MEM32(ebp + 0x70) = edx;
    MEM32(ebp + 0x68) = edx;
    if (CMP_L(edx, ebx)) goto loc_0046A1C6; /* jl: less (signed <) */

loc_0046A1A1: ;
    eax = ebp + edx * 4 + -72;
    MEM32(ebp + 0x78) = eax;

loc_0046A1A8: ;
    eax = MEM32(ebp + 0x78);
    eax = MEM32(eax);
    _fpu_cmp = (fp_top() < fp_st1()) ? -1 : (fp_top() > fp_st1()) ? 1 : 0; /* fcom dword ptr [eax + 0x8c] */
    /* fnstsw ax - store FPU status word */
    if (1 /* jnp after test - parity */) goto loc_0046A1C6; /* jnp: not parity */

loc_0046A1BA: ;
    MEM32(ebp + 0x78) = MEM32(ebp + 0x78) - 4;
    edx--;
    (void)0; /* cmp edx, ebx - flags set for next jcc */
    MEM32(ebp + 0x68) = edx;
    if (CMP_GE(edx, ebx)) goto loc_0046A1A8; /* jge: greater or equal (signed >=) */

loc_0046A1C6: ;
    eax = MEM32(ebp + esi * 4 + -72);
    esi = MEM32(ebp + 0x70);
    (void)0; /* cmp esi, edx - flags set for next jcc */
    MEM32(ebp + 0x70) = esi;
    if (CMP_LE(esi, edx)) goto loc_0046A1ED; /* jle: less or equal (signed <=) */

loc_0046A1D4: ;
    edx = MEM32(ebp + 0x70);
    edx = edx << 2;
    esi = MEM32(ebp + edx + -72);
    MEM32(ebp + 0x70) = MEM32(ebp + 0x70) - 1;
    MEM32(ebp + edx + -68) = esi;
    edx = MEM32(ebp + 0x68);
    if (CMP_G(MEM32(ebp + 0x70), edx)) goto loc_0046A1D4; /* jg: greater (signed >) */

loc_0046A1ED: ;
    MEM32(ebp + 0x70) = MEM32(ebp + 0x70) & 0;
    (void)0; /* test ecx, ecx - flags set for next jcc */
    MEM32(ebp + edx * 4 + -68) = eax;
    if (CMP_LE(ecx & ecx, 0)) goto loc_0046A236; /* jle: less or equal (signed <=) */

loc_0046A1F9: ;
    edx = eax + 0x2C;
    MEM32(ebp + 0x78) = edx;
    edx = edi + -80;
    MEM32(ebp + 0x68) = edx;
    edx = edi + -124;
    MEM32(ebp + 0x50) = edx;

loc_0046A20B: ;
    edx = MEM32(ebp + 0x50);
    SET_LO16(edx, MEM16(edx));
    esi = MEM32(ebp + 0x70);
    MEM32(ebp + 0x70) = MEM32(ebp + 0x70) + 1;
    MEM32(ebp + 0x50) = MEM32(ebp + 0x50) + 2;
    MEM16(eax + esi * 2) = LO16(edx);
    edx = MEM32(ebp + 0x68);
    esi = MEM32(ebp + 0x78);
    edx = MEM32(edx);
    MEM32(ebp + 0x68) = MEM32(ebp + 0x68) + 4;
    MEM32(ebp + 0x78) = MEM32(ebp + 0x78) + 4;
    (void)0; /* cmp MEM32(ebp + 0x70), ecx - flags set for next jcc */
    MEM32(esi) = edx;
    if (CMP_L(MEM32(ebp + 0x70), ecx)) goto loc_0046A20B; /* jl: less (signed <) */

loc_0046A236: ;
    edx = MEM32(ebp + 0x40);
    /* fld st(1) */
    esi = MEM32(ebp + 0x30);
    MEMF(eax + 0x88) = (float)fp_top(); fp_popp(); /* fstp */
    MEM32(eax + 0x7C) = edx;
    edx = MEM32(ebp + 0x4C);
    MEMF(eax + 0x8C) = (float)fp_top(); fp_popp(); /* fstp */
    MEM16(eax + ecx * 2 + 2) = LO16(edx);
    MEM16(eax + ecx * 2) = LO16(edx);
    /* fstp st(0) */
    MEM32(eax + ecx * 4 + 0x30) = ebx;
    MEM32(eax + ecx * 4 + 0x2C) = ebx;
    esi = esi + 2;
    MEM16(eax + 0x28) = LO16(esi);
    eax = MEM32(ebp + 0x18);
    eax = MEM32(ebp + eax * 4 + -72);
    fp_push(MEMF(eax + 0x8C)); /* fld float */
    goto loc_0046A27C;

loc_0046A279: ;
    edx = MEM32(ebp + 0x4C);

loc_0046A27C: ;
    eax = MEM32(ebp + 0x24);
    edx = edx + eax;
    (void)0; /* cmp LO16(edx), MEM16(ebp + 0x44) - flags set for next jcc */
    MEM32(ebp + 0x2C) = edx;
    MEM32(ebp + 0x78) = edx;
    if (CMP_GE(LO16(edx), MEM16(ebp + 0x44))) goto loc_0046A57C; /* jge: greater or equal (signed >=) */

loc_0046A291: ;
    eax = (uint32_t)(int32_t)SMEM16(ebp + 0x4C);
    eax = eax + eax * 4;
    eax = eax << 4;
    MEM32(ebp + 0x1C) = eax;

loc_0046A29E: ;
    eax = MEM32(ebp + 0x14);
    fp_push(MEMF(ebp + 0xC)); /* fld float */
    fp_st1() += fp_top(); fp_pop(); /* fadd */
    eax = SX16(LO16(edx));
    edx = MEM32(ebp + 0x5C);
    edx = edx + eax * 4;
    /* fld st(0) */
    esi = eax;
    esi = (uint32_t)((int32_t)esi * (int32_t)0x144);
    fp_st1() -= fp_top(); fp_pop(); /* fsub */
    MEMF(ebp + 0x38) = (float)fp_top(); fp_popp(); /* fstp */
    fp_st1() += fp_top(); fp_pop(); /* fadd */
    MEMF(ebp + 0x40) = (float)fp_top(); fp_pop(); /* fst */
    edx = MEM32(ebp + 0x10);
    fp_push(MEMF(ebp + 0x20)); /* fld float */
    fp_st1() += fp_top(); fp_pop(); /* fadd */
    edx = MEM32(ebp + 0x60);
    fp_st1() += fp_top(); fp_pop(); /* fadd */
    esi = MEM32(ebp + 0x1C);
    esi = esi + eax;
    fp_push(MEMF(edx + esi * 4)); /* fld float */
    esi = 0; /* xor self */
    (void)0; /* test ecx, ecx - flags set for next jcc */
    fp_st1() += fp_top(); fp_pop(); /* fadd */
    /* fld st(1) */
    fp_st1() -= fp_top(); fp_pop(); /* fsub */
    MEMF(ebp + 0x48) = (float)fp_top(); fp_popp(); /* fstp */
    fp_st1() += fp_top(); fp_pop(); /* fadd */
    MEMF(ebp + 0x68) = (float)fp_top(); fp_popp(); /* fstp */
    /* fstp st(0) */
    if (CMP_LE(ecx & ecx, 0)) goto loc_0046A345; /* jle: less or equal (signed <=) */

loc_0046A2EF: ;
    ebx = edx;

loc_0046A2F1: ;
    edx = edi + -124;
    edx = (uint32_t)(int32_t)SMEM16(edx + esi * 2);
    edi = edi + 0xFFFFFFB0u;
    edx = edx + edx * 4;
    edx = edx << 4;
    fp_push((double)SMEM32(edi + esi * 4)); /* fild */
    edi = (uint32_t)(int32_t)SMEM16(ebp + 0x4C);
    edi = edi + edx;
    edx = edx + eax;
    esi++;
    (void)0; /* cmp esi, ecx - flags set for next jcc */
    fp_push(MEMF(ebx + edi * 4)); /* fld float */
    fp_st1() += fp_top(); fp_pop(); /* fadd */
    edi = MEM32(ebp + 0x34);
    fp_st1() *= fp_top(); fp_pop(); /* fmul */
    fp_push(MEMF(ebp + 0x68)); /* fld float */
    fp_st1() += fp_top(); fp_pop(); /* fadd */
    MEMF(ebp + 0x68) = (float)fp_top(); fp_popp(); /* fstp */
    fp_st1() += fp_top(); fp_pop(); /* fadd */
    MEMF(ebp + 0x48) = (float)fp_top(); fp_popp(); /* fstp */
    fp_push(MEMF(ebx + edx * 4)); /* fld float */
    fp_st1() += fp_top(); fp_pop(); /* fadd */
    fp_st1() *= fp_top(); fp_pop(); /* fmulp */
    fp_push(MEMF(ebp + 0x68)); /* fld float */
    fp_st1() += fp_top(); fp_pop(); /* fadd */
    MEMF(ebp + 0x68) = (float)fp_top(); fp_popp(); /* fstp */
    fp_push(MEMF(ebp + 0x48)); /* fld float */
    fp_st1() -= fp_top(); fp_pop(); /* fsub */
    MEMF(ebp + 0x48) = (float)fp_top(); fp_popp(); /* fstp */
    /* fstp st(0) */
    if (CMP_L(esi, ecx)) goto loc_0046A2F1; /* jl: less (signed <) */

loc_0046A342: ;
    ebx = 0; /* xor self */
    ebx++;

loc_0046A345: ;
    edx = MEM32(ebp + 0x78);
    /* fld st(0) */
    esi = MEM32(ebp + 0x18);
    fp_st1() *= fp_top(); fp_pop(); /* fmul */
    MEMF(ebp + 0x70) = (float)fp_top(); fp_pop(); /* fst */
    /* fstp st(1) */
    fp_push(MEMF(ebp + 0x68)); /* fld float */
    fp_st1() *= fp_top(); fp_pop(); /* fmul */
    /* fld st(1) */
    _fpu_cmp = (fp_top() < fp_st1()) ? -1 : (fp_top() > fp_st1()) ? 1 : 0; /* fcompp  */
    /* fnstsw ax - store FPU status word */
    /* fstp st(0) */
    if (TEST_NZ(HI8(eax), 0x41)) goto loc_0046A45B; /* jne: not equal / not zero */

loc_0046A36A: ;
    /* fstp st(0) */
    edx = esi + -1;
    (void)0; /* cmp edx, ebx - flags set for next jcc */
    fp_push(MEMF(ebp + 0x68)); /* fld float */
    fp_push(MEMF(ebp + 0x70)); /* fld float */
    MEM32(ebp + 0x70) = edx;
    fp_st1() /= fp_top(); fp_pop(); /* fdiv */
    MEM32(ebp + 0x68) = edx;
    if (CMP_L(edx, ebx)) goto loc_0046A3A6; /* jl: less (signed <) */

loc_0046A381: ;
    eax = ebp + edx * 4 + -72;
    MEM32(ebp + 0x50) = eax;

loc_0046A388: ;
    eax = MEM32(ebp + 0x50);
    eax = MEM32(eax);
    _fpu_cmp = (fp_top() < fp_st1()) ? -1 : (fp_top() > fp_st1()) ? 1 : 0; /* fcom dword ptr [eax + 0x8c] */
    /* fnstsw ax - store FPU status word */
    if (1 /* jnp after test - parity */) goto loc_0046A3A6; /* jnp: not parity */

loc_0046A39A: ;
    MEM32(ebp + 0x50) = MEM32(ebp + 0x50) - 4;
    edx--;
    (void)0; /* cmp edx, ebx - flags set for next jcc */
    MEM32(ebp + 0x68) = edx;
    if (CMP_GE(edx, ebx)) goto loc_0046A388; /* jge: greater or equal (signed >=) */

loc_0046A3A6: ;
    eax = MEM32(ebp + esi * 4 + -72);
    esi = MEM32(ebp + 0x70);
    (void)0; /* cmp esi, edx - flags set for next jcc */
    MEM32(ebp + 0x70) = esi;
    if (CMP_LE(esi, edx)) goto loc_0046A3CD; /* jle: less or equal (signed <=) */

loc_0046A3B4: ;
    edx = MEM32(ebp + 0x70);
    edx = edx << 2;
    esi = MEM32(ebp + edx + -72);
    MEM32(ebp + 0x70) = MEM32(ebp + 0x70) - 1;
    MEM32(ebp + edx + -68) = esi;
    edx = MEM32(ebp + 0x68);
    if (CMP_G(MEM32(ebp + 0x70), edx)) goto loc_0046A3B4; /* jg: greater (signed >) */

loc_0046A3CD: ;
    MEM32(ebp + 0x70) = MEM32(ebp + 0x70) & 0;
    (void)0; /* test ecx, ecx - flags set for next jcc */
    MEM32(ebp + edx * 4 + -68) = eax;
    if (CMP_LE(ecx & ecx, 0)) goto loc_0046A416; /* jle: less or equal (signed <=) */

loc_0046A3D9: ;
    edx = eax + 0x2C;
    MEM32(ebp + 0x50) = edx;
    edx = edi + -80;
    MEM32(ebp + 0x68) = edx;
    edx = edi + -124;
    MEM32(ebp + 0x3C) = edx;

loc_0046A3EB: ;
    edx = MEM32(ebp + 0x3C);
    SET_LO16(edx, MEM16(edx));
    esi = MEM32(ebp + 0x70);
    MEM32(ebp + 0x70) = MEM32(ebp + 0x70) + 1;
    MEM32(ebp + 0x3C) = MEM32(ebp + 0x3C) + 2;
    MEM16(eax + esi * 2) = LO16(edx);
    edx = MEM32(ebp + 0x68);
    esi = MEM32(ebp + 0x50);
    edx = MEM32(edx);
    MEM32(ebp + 0x68) = MEM32(ebp + 0x68) + 4;
    MEM32(ebp + 0x50) = MEM32(ebp + 0x50) + 4;
    (void)0; /* cmp MEM32(ebp + 0x70), ecx - flags set for next jcc */
    MEM32(esi) = edx;
    if (CMP_L(MEM32(ebp + 0x70), ecx)) goto loc_0046A3EB; /* jl: less (signed <) */

loc_0046A416: ;
    edx = MEM32(ebp + 0x40);
    /* fld st(1) */
    esi = MEM32(ebp + 0x30);
    MEMF(eax + 0x88) = (float)fp_top(); fp_popp(); /* fstp */
    MEM32(eax + 0x7C) = edx;
    SET_LO16(edx, MEM16(ebp + 0x4C));
    MEMF(eax + 0x8C) = (float)fp_top(); fp_popp(); /* fstp */
    MEM16(eax + ecx * 2) = LO16(edx);
    edx = MEM32(ebp + 0x78);
    /* fstp st(0) */
    MEM16(eax + ecx * 2 + 2) = LO16(edx);
    MEM32(eax + ecx * 4 + 0x30) = ebx;
    MEM32(eax + ecx * 4 + 0x2C) = ebx;
    esi = esi + 2;
    MEM16(eax + 0x28) = LO16(esi);
    esi = MEM32(ebp + 0x18);
    eax = MEM32(ebp + esi * 4 + -72);
    fp_push(MEMF(eax + 0x8C)); /* fld float */

loc_0046A45B: ;
    fp_push(MEMF(ebp + 0x38)); /* fld float */
    fp_st1() *= fp_top(); fp_pop(); /* fmul */
    MEMF(ebp + 0x70) = (float)fp_top(); fp_pop(); /* fst */
    fp_push(MEMF(ebp + 0x48)); /* fld float */
    fp_st1() *= fp_top(); fp_pop(); /* fmul */
    /* fld st(1) */
    _fpu_cmp = (fp_top() < fp_st1()) ? -1 : (fp_top() > fp_st1()) ? 1 : 0; /* fcompp  */
    /* fnstsw ax - store FPU status word */
    /* fstp st(0) */
    if (TEST_NZ(HI8(eax), 0x41)) goto loc_0046A56C; /* jne: not equal / not zero */

loc_0046A47A: ;
    /* fstp st(0) */
    edx = esi + -1;
    (void)0; /* cmp edx, ebx - flags set for next jcc */
    fp_push(MEMF(ebp + 0x48)); /* fld float */
    fp_push(MEMF(ebp + 0x70)); /* fld float */
    MEM32(ebp + 0x70) = edx;
    fp_st1() /= fp_top(); fp_pop(); /* fdiv */
    MEM32(ebp + 0x68) = edx;
    if (CMP_L(edx, ebx)) goto loc_0046A4B6; /* jl: less (signed <) */

loc_0046A491: ;
    eax = ebp + edx * 4 + -72;
    MEM32(ebp + 0x50) = eax;

loc_0046A498: ;
    eax = MEM32(ebp + 0x50);
    eax = MEM32(eax);
    _fpu_cmp = (fp_top() < fp_st1()) ? -1 : (fp_top() > fp_st1()) ? 1 : 0; /* fcom dword ptr [eax + 0x8c] */
    /* fnstsw ax - store FPU status word */
    if (1 /* jnp after test - parity */) goto loc_0046A4B6; /* jnp: not parity */

loc_0046A4AA: ;
    MEM32(ebp + 0x50) = MEM32(ebp + 0x50) - 4;
    edx--;
    (void)0; /* cmp edx, ebx - flags set for next jcc */
    MEM32(ebp + 0x68) = edx;
    if (CMP_GE(edx, ebx)) goto loc_0046A498; /* jge: greater or equal (signed >=) */

loc_0046A4B6: ;
    eax = MEM32(ebp + esi * 4 + -72);
    esi = MEM32(ebp + 0x70);
    (void)0; /* cmp esi, edx - flags set for next jcc */
    MEM32(ebp + 0x70) = esi;
    if (CMP_LE(esi, edx)) goto loc_0046A4DD; /* jle: less or equal (signed <=) */

loc_0046A4C4: ;
    edx = MEM32(ebp + 0x70);
    edx = edx << 2;
    esi = MEM32(ebp + edx + -72);
    MEM32(ebp + 0x70) = MEM32(ebp + 0x70) - 1;
    MEM32(ebp + edx + -68) = esi;
    edx = MEM32(ebp + 0x68);
    if (CMP_G(MEM32(ebp + 0x70), edx)) goto loc_0046A4C4; /* jg: greater (signed >) */

loc_0046A4DD: ;
    MEM32(ebp + 0x70) = MEM32(ebp + 0x70) & 0;
    (void)0; /* test ecx, ecx - flags set for next jcc */
    MEM32(ebp + edx * 4 + -68) = eax;
    if (CMP_LE(ecx & ecx, 0)) goto loc_0046A526; /* jle: less or equal (signed <=) */

loc_0046A4E9: ;
    edx = eax + 0x2C;
    MEM32(ebp + 0x50) = edx;
    edx = edi + -80;
    MEM32(ebp + 0x68) = edx;
    edx = edi + -124;
    MEM32(ebp + 0x3C) = edx;

loc_0046A4FB: ;
    edx = MEM32(ebp + 0x3C);
    SET_LO16(edx, MEM16(edx));
    esi = MEM32(ebp + 0x70);
    MEM32(ebp + 0x70) = MEM32(ebp + 0x70) + 1;
    MEM32(ebp + 0x3C) = MEM32(ebp + 0x3C) + 2;
    MEM16(eax + esi * 2) = LO16(edx);
    edx = MEM32(ebp + 0x68);
    esi = MEM32(ebp + 0x50);
    edx = MEM32(edx);
    MEM32(ebp + 0x68) = MEM32(ebp + 0x68) + 4;
    MEM32(ebp + 0x50) = MEM32(ebp + 0x50) + 4;
    (void)0; /* cmp MEM32(ebp + 0x70), ecx - flags set for next jcc */
    MEM32(esi) = edx;
    if (CMP_L(MEM32(ebp + 0x70), ecx)) goto loc_0046A4FB; /* jl: less (signed <) */

loc_0046A526: ;
    edx = MEM32(ebp + 0x38);
    /* fld st(1) */
    esi = MEM32(ebp + 0x30);
    MEMF(eax + 0x88) = (float)fp_top(); fp_popp(); /* fstp */
    MEM32(eax + 0x7C) = edx;
    SET_LO16(edx, MEM16(ebp + 0x4C));
    MEMF(eax + 0x8C) = (float)fp_top(); fp_popp(); /* fstp */
    MEM32(eax + ecx * 4 + 0x30) = MEM32(eax + ecx * 4 + 0x30) | 0xFFFFFFFFu;
    MEM16(eax + ecx * 2) = LO16(edx);
    /* fstp st(0) */
    edx = MEM32(ebp + 0x78);
    MEM16(eax + ecx * 2 + 2) = LO16(edx);
    MEM32(eax + ecx * 4 + 0x2C) = ebx;
    esi = esi + 2;
    MEM16(eax + 0x28) = LO16(esi);
    eax = MEM32(ebp + 0x18);
    eax = MEM32(ebp + eax * 4 + -72);
    fp_push(MEMF(eax + 0x8C)); /* fld float */

loc_0046A56C: ;
    edx = edx + MEM32(ebp + 0x24);
    (void)0; /* cmp LO16(edx), MEM16(ebp + 0x44) - flags set for next jcc */
    MEM32(ebp + 0x78) = edx;
    if (CMP_L(LO16(edx), MEM16(ebp + 0x44))) goto loc_0046A29E; /* jl: less (signed <) */

loc_0046A57C: ;
    eax = MEM32(ebp + 0x2C);
    (void)0; /* cmp LO16(eax), MEM16(ebp + 0x44) - flags set for next jcc */
    MEM32(ebp + 0x4C) = eax;
    if (CMP_L(LO16(eax), MEM16(ebp + 0x44))) goto loc_0046A0F6; /* jl: less (signed <) */

loc_0046A58C: ;
    edi = edi + 0x94;
    MEM32(ebp + 0x28) = MEM32(ebp + 0x28) - 1;
    MEM32(ebp + 0x34) = edi;
    if ((MEM32(ebp + 0x28) != 0)) goto loc_0046A0CC; /* jne: not equal / not zero */

loc_0046A59E: ;
    if (CMP_NE(MEM16(ebp + 0x7C), 2)) { sub_0046A926(); return; } /* jne: not equal / not zero */

loc_0046A5A9: ;
    eax = (uint32_t)(int32_t)SMEM16(ebp + 0x6C);
    (void)0; /* test eax, eax - flags set for next jcc */
    ecx = MEM32(ebp + -68);
    if (CMP_LE(eax & eax, 0)) goto loc_0046A91E; /* jle: less or equal (signed <=) */

loc_0046A5B8: ;
    edi = MEM32(ebp + 0x74);
    edi = edi + 0x7C;
    MEM32(ebp + 0x50) = edi;
    MEM32(ebp + 0x28) = eax;

loc_0046A5C4: ;
    eax = MEM32(edi);
    MEM32(ebp + 0xC) = eax;
    eax = MEM32(edi + 0xC);
    edx = 0; /* xor self */
    SET_LO16(edx, MEM16(edi + -84));
    MEM32(ebp + 0x20) = eax;
    eax = MEM32(ebp + 0x64);
    eax = (uint32_t)(int32_t)SMEM16(eax);
    (void)0; /* cmp LO16(eax), MEM16(ebp + 0x44) - flags set for next jcc */
    MEM32(ebp + 0x30) = edx;
    MEM32(ebp + 0x4C) = eax;
    if (CMP_GE(LO16(eax), MEM16(ebp + 0x44))) goto loc_0046A90C; /* jge: greater or equal (signed >=) */

loc_0046A5EB: ;
    edx = SX16(LO16(edx));

loc_0046A5EE: ;
    esi = MEM32(ebp + 0x5C);
    ebx = MEM32(ebp + 0x60);
    eax = SX16(LO16(eax));
    MEM32(ebp + 0x70) = MEM32(ebp + 0x70) & 0;
    esi = esi + eax * 4;
    MEM32(ebp + 0x14) = esi;
    fp_push(MEMF(esi)); /* fld float */
    esi = eax;
    fp_st1() += fp_top(); fp_pop(); /* fadd */
    esi = (uint32_t)((int32_t)esi * (int32_t)0x144);
    esi = esi + ebx;
    (void)0; /* test edx, edx - flags set for next jcc */
    fp_st1() += fp_top(); fp_pop(); /* fadd */
    MEM32(ebp + 0x10) = esi;
    MEMF(ebp + 0x40) = (float)fp_top(); fp_pop(); /* fst */
    fp_push(MEMF(esi)); /* fld float */
    fp_st1() *= fp_top(); fp_pop(); /* fmul */
    fp_st1() += fp_top(); fp_pop(); /* fadd */
    MEMF(ebp + 0x68) = (float)fp_top(); fp_popp(); /* fstp */
    if (CMP_LE(edx & edx, 0)) goto loc_0046A65F; /* jle: less or equal (signed <=) */

loc_0046A62A: ;
    ebx = MEM32(ebp + 0x70);
    esi = edi + -124;
    esi = (uint32_t)(int32_t)SMEM16(esi + ebx * 2);
    ebx = MEM32(ebp + 0x60);
    esi = esi + esi * 4;
    esi = esi << 4;
    esi = esi + eax;
    fp_push(MEMF(ebx + esi * 4)); /* fld float */
    ebx = MEM32(ebp + 0x70);
    fp_st1() *= fp_top(); fp_pop(); /* fmul */
    MEM32(ebp + 0x70) = MEM32(ebp + 0x70) + 1;
    (void)0; /* cmp MEM32(ebp + 0x70), edx - flags set for next jcc */
    esi = edi + -80;
    /* FPU: fimul dword ptr [esi + ebx*4] */
    fp_st1() += fp_top(); fp_pop(); /* fadd */
    MEMF(ebp + 0x68) = (float)fp_top(); fp_popp(); /* fstp */
    if (CMP_L(MEM32(ebp + 0x70), edx)) goto loc_0046A62A; /* jl: less (signed <) */

loc_0046A65F: ;
    /* fld st(0) */
    fp_st1() *= fp_top(); fp_pop(); /* fmul */
    MEMF(ebp + 0x70) = (float)fp_top(); fp_pop(); /* fst */
    /* fstp st(1) */
    fp_push(MEMF(ebp + 0x68)); /* fld float */
    fp_st1() *= fp_top(); fp_pop(); /* fmul */
    /* fld st(1) */
    _fpu_cmp = (fp_top() < fp_st1()) ? -1 : (fp_top() > fp_st1()) ? 1 : 0; /* fcompp  */
    /* fnstsw ax - store FPU status word */
    /* fstp st(0) */
    if (TEST_NZ(HI8(eax), 0x41)) goto loc_0046A6EF; /* jne: not equal / not zero */

loc_0046A67A: ;
    /* fstp st(0) */
    esi = 0; /* xor self */
    (void)0; /* test edx, edx - flags set for next jcc */
    fp_push(MEMF(ebp + 0x68)); /* fld float */
    fp_push(MEMF(ebp + 0x70)); /* fld float */
    fp_st1() /= fp_top(); fp_pop(); /* fdiv */
    if (CMP_LE(edx & edx, 0)) goto loc_0046A6BA; /* jle: less or equal (signed <=) */

loc_0046A68A: ;
    ebx = edi + -80;
    MEM32(ebp + 0x70) = ebx;
    ebx = edi + -124;
    eax = ecx + 0x2C;
    MEM32(ebp + 0x68) = ebx;

loc_0046A699: ;
    ebx = MEM32(ebp + 0x68);
    SET_LO16(ebx, MEM16(ebx));
    MEM32(ebp + 0x68) = MEM32(ebp + 0x68) + 2;
    MEM16(ecx + esi * 2) = LO16(ebx);
    ebx = MEM32(ebp + 0x70);
    ebx = MEM32(ebx);
    MEM32(ebp + 0x70) = MEM32(ebp + 0x70) + 4;
    MEM32(eax) = ebx;
    esi++;
    eax = eax + 4;
    if (CMP_L(esi, edx)) goto loc_0046A699; /* jl: less (signed <) */

loc_0046A6BA: ;
    eax = MEM32(ebp + 0x40);
    /* fld st(1) */
    MEM32(ecx + 0x7C) = eax;
    MEMF(ecx + 0x88) = (float)fp_top(); fp_popp(); /* fstp */
    eax = MEM32(ebp + 0x4C);
    esi = 0; /* xor self */
    /* fst st(1) */
    MEM16(ecx + edx * 2 + 2) = LO16(eax);
    /* fstp st(0) */
    esi++;
    MEM16(ecx + edx * 2) = LO16(eax);
    MEM32(ecx + edx * 4 + 0x30) = esi;
    MEM32(ecx + edx * 4 + 0x2C) = esi;
    esi = MEM32(ebp + 0x30);
    esi = esi + 2;
    MEM16(ecx + 0x28) = LO16(esi);
    goto loc_0046A6F2;

loc_0046A6EF: ;
    eax = MEM32(ebp + 0x4C);

loc_0046A6F2: ;
    esi = MEM32(ebp + 0x24);
    esi = esi + eax;
    (void)0; /* cmp LO16(esi), MEM16(ebp + 0x44) - flags set for next jcc */
    MEM32(ebp + 0x2C) = esi;
    MEM32(ebp + 0x78) = esi;
    if (CMP_GE(LO16(esi), MEM16(ebp + 0x44))) goto loc_0046A8FC; /* jge: greater or equal (signed >=) */

loc_0046A707: ;
    eax = SX16(LO16(eax));
    eax = eax + eax * 4;
    eax = eax << 4;
    MEM32(ebp + 0x1C) = eax;

loc_0046A713: ;
    eax = MEM32(ebp + 0x14);
    fp_push(MEMF(ebp + 0xC)); /* fld float */
    fp_st1() += fp_top(); fp_pop(); /* fadd */
    eax = SX16(LO16(esi));
    esi = MEM32(ebp + 0x5C);
    esi = esi + eax * 4;
    /* fld st(0) */
    ebx = eax;
    ebx = (uint32_t)((int32_t)ebx * (int32_t)0x144);
    fp_st1() -= fp_top(); fp_pop(); /* fsub */
    MEMF(ebp + 0x38) = (float)fp_top(); fp_popp(); /* fstp */
    fp_st1() += fp_top(); fp_pop(); /* fadd */
    MEMF(ebp + 0x40) = (float)fp_top(); fp_pop(); /* fst */
    esi = MEM32(ebp + 0x10);
    fp_push(MEMF(ebp + 0x20)); /* fld float */
    MEM32(ebp + 0x70) = MEM32(ebp + 0x70) & 0;
    fp_st1() += fp_top(); fp_pop(); /* fadd */
    esi = MEM32(ebp + 0x60);
    fp_st1() += fp_top(); fp_pop(); /* fadd */
    ebx = MEM32(ebp + 0x1C);
    ebx = ebx + eax;
    (void)0; /* test edx, edx - flags set for next jcc */
    fp_push(MEMF(esi + ebx * 4)); /* fld float */
    fp_st1() += fp_top(); fp_pop(); /* fadd */
    /* fld st(1) */
    fp_st1() -= fp_top(); fp_pop(); /* fsub */
    MEMF(ebp + 0x48) = (float)fp_top(); fp_popp(); /* fstp */
    fp_st1() += fp_top(); fp_pop(); /* fadd */
    MEMF(ebp + 0x68) = (float)fp_top(); fp_popp(); /* fstp */
    /* fstp st(0) */
    if (CMP_LE(edx & edx, 0)) goto loc_0046A7C1; /* jle: less or equal (signed <=) */

loc_0046A766: ;
    ebx = MEM32(ebp + 0x70);
    esi = edi + -124;
    esi = (uint32_t)(int32_t)SMEM16(esi + ebx * 2);
    edi = edi + 0xFFFFFFB0u;
    esi = esi + esi * 4;
    esi = esi << 4;
    fp_push((double)SMEM32(edi + ebx * 4)); /* fild */
    edi = (uint32_t)(int32_t)SMEM16(ebp + 0x4C);
    ebx = esi + edi;
    edi = MEM32(ebp + 0x60);
    esi = esi + eax;
    MEM32(ebp + 0x70) = MEM32(ebp + 0x70) + 1;
    (void)0; /* cmp MEM32(ebp + 0x70), edx - flags set for next jcc */
    fp_push(MEMF(edi + ebx * 4)); /* fld float */
    fp_st1() += fp_top(); fp_pop(); /* fadd */
    fp_st1() *= fp_top(); fp_pop(); /* fmul */
    fp_push(MEMF(ebp + 0x68)); /* fld float */
    fp_st1() += fp_top(); fp_pop(); /* fadd */
    MEMF(ebp + 0x68) = (float)fp_top(); fp_popp(); /* fstp */
    fp_st1() += fp_top(); fp_pop(); /* fadd */
    MEMF(ebp + 0x48) = (float)fp_top(); fp_popp(); /* fstp */
    fp_push(MEMF(edi + esi * 4)); /* fld float */
    edi = MEM32(ebp + 0x50);
    fp_st1() += fp_top(); fp_pop(); /* fadd */
    fp_st1() *= fp_top(); fp_pop(); /* fmulp */
    fp_push(MEMF(ebp + 0x68)); /* fld float */
    fp_st1() += fp_top(); fp_pop(); /* fadd */
    MEMF(ebp + 0x68) = (float)fp_top(); fp_popp(); /* fstp */
    fp_push(MEMF(ebp + 0x48)); /* fld float */
    fp_st1() -= fp_top(); fp_pop(); /* fsub */
    MEMF(ebp + 0x48) = (float)fp_top(); fp_popp(); /* fstp */
    /* fstp st(0) */
    if (CMP_L(MEM32(ebp + 0x70), edx)) goto loc_0046A766; /* jl: less (signed <) */

loc_0046A7C1: ;
    /* fld st(0) */
    fp_st1() *= fp_top(); fp_pop(); /* fmul */
    MEMF(ebp + 0x70) = (float)fp_top(); fp_pop(); /* fst */
    /* fstp st(1) */
    fp_push(MEMF(ebp + 0x68)); /* fld float */
    fp_st1() *= fp_top(); fp_pop(); /* fmul */
    /* fld st(1) */
    _fpu_cmp = (fp_top() < fp_st1()) ? -1 : (fp_top() > fp_st1()) ? 1 : 0; /* fcompp  */
    /* fnstsw ax - store FPU status word */
    /* fstp st(0) */
    if (TEST_NZ(HI8(eax), 0x41)) goto loc_0046A855; /* jne: not equal / not zero */

loc_0046A7DC: ;
    /* fstp st(0) */
    esi = 0; /* xor self */
    (void)0; /* test edx, edx - flags set for next jcc */
    fp_push(MEMF(ebp + 0x68)); /* fld float */
    fp_push(MEMF(ebp + 0x70)); /* fld float */
    fp_st1() /= fp_top(); fp_pop(); /* fdiv */
    if (CMP_LE(edx & edx, 0)) goto loc_0046A81C; /* jle: less or equal (signed <=) */

loc_0046A7EC: ;
    ebx = edi + -80;
    MEM32(ebp + 0x70) = ebx;
    ebx = edi + -124;
    eax = ecx + 0x2C;
    MEM32(ebp + 0x68) = ebx;

loc_0046A7FB: ;
    ebx = MEM32(ebp + 0x68);
    SET_LO16(ebx, MEM16(ebx));
    MEM32(ebp + 0x68) = MEM32(ebp + 0x68) + 2;
    MEM16(ecx + esi * 2) = LO16(ebx);
    ebx = MEM32(ebp + 0x70);
    ebx = MEM32(ebx);
    MEM32(ebp + 0x70) = MEM32(ebp + 0x70) + 4;
    MEM32(eax) = ebx;
    esi++;
    eax = eax + 4;
    if (CMP_L(esi, edx)) goto loc_0046A7FB; /* jl: less (signed <) */

loc_0046A81C: ;
    eax = MEM32(ebp + 0x40);
    /* fld st(1) */
    esi = MEM32(ebp + 0x78);
    MEM32(ecx + 0x7C) = eax;
    MEMF(ecx + 0x88) = (float)fp_top(); fp_popp(); /* fstp */
    SET_LO16(eax, MEM16(ebp + 0x4C));
    MEM16(ecx + edx * 2) = LO16(eax);
    /* fst st(1) */
    eax = 0; /* xor self */
    /* fstp st(0) */
    eax++;
    MEM16(ecx + edx * 2 + 2) = LO16(esi);
    MEM32(ecx + edx * 4 + 0x30) = eax;
    MEM32(ecx + edx * 4 + 0x2C) = eax;
    eax = MEM32(ebp + 0x30);
    eax = eax + 2;
    MEM16(ecx + 0x28) = LO16(eax);
    goto loc_0046A858;

loc_0046A855: ;
    esi = MEM32(ebp + 0x78);

loc_0046A858: ;
    fp_push(MEMF(ebp + 0x38)); /* fld float */
    fp_st1() *= fp_top(); fp_pop(); /* fmul */
    MEMF(ebp + 0x70) = (float)fp_top(); fp_pop(); /* fst */
    fp_push(MEMF(ebp + 0x48)); /* fld float */
    fp_st1() *= fp_top(); fp_pop(); /* fmul */
    /* fld st(1) */
    _fpu_cmp = (fp_top() < fp_st1()) ? -1 : (fp_top() > fp_st1()) ? 1 : 0; /* fcompp  */
    /* fnstsw ax - store FPU status word */
    /* fstp st(0) */
    if (TEST_NZ(HI8(eax), 0x41)) goto loc_0046A8EC; /* jne: not equal / not zero */

loc_0046A873: ;
    /* fstp st(0) */
    esi = 0; /* xor self */
    (void)0; /* test edx, edx - flags set for next jcc */
    fp_push(MEMF(ebp + 0x48)); /* fld float */
    fp_push(MEMF(ebp + 0x70)); /* fld float */
    fp_st1() /= fp_top(); fp_pop(); /* fdiv */
    if (CMP_LE(edx & edx, 0)) goto loc_0046A8B3; /* jle: less or equal (signed <=) */

loc_0046A883: ;
    ebx = edi + -80;
    MEM32(ebp + 0x70) = ebx;
    ebx = edi + -124;
    eax = ecx + 0x2C;
    MEM32(ebp + 0x68) = ebx;

loc_0046A892: ;
    ebx = MEM32(ebp + 0x68);
    SET_LO16(ebx, MEM16(ebx));
    MEM32(ebp + 0x68) = MEM32(ebp + 0x68) + 2;
    MEM16(ecx + esi * 2) = LO16(ebx);
    ebx = MEM32(ebp + 0x70);
    ebx = MEM32(ebx);
    MEM32(ebp + 0x70) = MEM32(ebp + 0x70) + 4;
    MEM32(eax) = ebx;
    esi++;
    eax = eax + 4;
    if (CMP_L(esi, edx)) goto loc_0046A892; /* jl: less (signed <) */

loc_0046A8B3: ;
    eax = MEM32(ebp + 0x38);
    /* fld st(1) */
    esi = MEM32(ebp + 0x78);
    MEM32(ecx + 0x7C) = eax;
    MEMF(ecx + 0x88) = (float)fp_top(); fp_popp(); /* fstp */
    SET_LO16(eax, MEM16(ebp + 0x4C));
    MEM16(ecx + edx * 2) = LO16(eax);
    /* fst st(1) */
    eax = MEM32(ebp + 0x30);
    /* fstp st(0) */
    MEM16(ecx + edx * 2 + 2) = LO16(esi);
    MEM32(ecx + edx * 4 + 0x2C) = 1;
    MEM32(ecx + edx * 4 + 0x30) = MEM32(ecx + edx * 4 + 0x30) | 0xFFFFFFFFu;
    eax = eax + 2;
    MEM16(ecx + 0x28) = LO16(eax);

loc_0046A8EC: ;
    esi = esi + MEM32(ebp + 0x24);
    (void)0; /* cmp LO16(esi), MEM16(ebp + 0x44) - flags set for next jcc */
    MEM32(ebp + 0x78) = esi;
    if (CMP_L(LO16(esi), MEM16(ebp + 0x44))) goto loc_0046A713; /* jl: less (signed <) */

loc_0046A8FC: ;
    eax = MEM32(ebp + 0x2C);
    (void)0; /* cmp LO16(eax), MEM16(ebp + 0x44) - flags set for next jcc */
    MEM32(ebp + 0x4C) = eax;
    if (CMP_L(LO16(eax), MEM16(ebp + 0x44))) goto loc_0046A5EE; /* jl: less (signed <) */

loc_0046A90C: ;
    edi = edi + 0x94;
    MEM32(ebp + 0x28) = MEM32(ebp + 0x28) - 1;
    MEM32(ebp + 0x50) = edi;
    if ((MEM32(ebp + 0x28) != 0)) goto loc_0046A5C4; /* jne: not equal / not zero */

loc_0046A91E: ;
    MEMF(ecx + 0x8C) = (float)fp_top(); fp_popp(); /* fstp */
    g_seh_ebp = ebp; sub_0046A928(); return; /* tail jmp 0x0046A928 */

    #undef fp_push
    #undef fp_pop
    #undef fp_popp
    #undef fp_top
    #undef fp_st1
}

/**
 * sub_0046A9AC
 * Original: 0x0046A9AC - 0x0046B1DB (2095 bytes, 683 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0046A9AC(void)
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

loc_0046A9AC: ;
    PUSH32(esp, ebp);
    ebp = esp;
    esp = esp - 0xC00;
    eax = (uint32_t)(int32_t)SMEM16(ebp + 0x14);
    PUSH32(esp, ebx);
    ebx = MEM32(ebp + 0x10);
    edx = 0; /* xor self */
    SET_LO16(edx, MEM16(ebx + 2));
    SET_LO16(edx, LO16(edx) - MEM16(ebx));
    PUSH32(esp, esi);
    esi = 0; /* xor self */
    SET_LO16(esi, MEM16(ebx + eax * 2 + -2));
    SET_LO16(esi, LO16(esi) + 1);
    (void)0; /* cmp MEM16(ebp + 0x24), 0 - flags set for next jcc */
    PUSH32(esp, edi);
    MEM32(ebp + -28) = edx;
    MEM32(ebp + -16) = esi;
    if (CMP_EQ(MEM16(ebp + 0x24), 0)) goto loc_0046AA94; /* je: equal / zero */

loc_0046A9E2: ;
    esi = (uint32_t)(int32_t)SMEM16(ebp + 0x18);
    edx = esi + esi;
    if (CMP_GE(esi, edx)) goto loc_0046AA83; /* jge: greater or equal (signed >=) */

loc_0046A9F1: ;
    eax = MEM32(ebp + 0x20);
    edi = esi;
    ecx = esi;
    edi = edi - esi;
    ecx = (uint32_t)((int32_t)ecx * (int32_t)0x94);
    edi = (uint32_t)((int32_t)edi * (int32_t)0x94);
    edx = edx - esi;
    ecx = ecx + eax + 0x7C;
    eax = edi + eax + 0x7C;
    MEM32(ebp + -20) = edx;

loc_0046AA13: ;
    MEM32(ebp + 0x24) = MEM32(ebp + 0x24) & 0;
    if (CMP_LE(MEM16(eax + -84), 0)) goto loc_0046AA5B; /* jle: less or equal (signed <=) */

loc_0046AA1E: ;
    esi = eax + -80;
    MEM32(ebp + 0x14) = esi;
    edx = ecx + -80;
    edi = ecx + -124;
    esi = eax + -124;
    goto loc_0046AA32;

loc_0046AA2F: ;
    edx = MEM32(ebp + -8);

loc_0046AA32: ;
    SET_LO16(ebx, MEM16(esi));
    MEM16(edi) = LO16(ebx);
    ebx = MEM32(ebp + 0x14);
    ebx = MEM32(ebx);
    MEM32(ebp + 0x14) = MEM32(ebp + 0x14) + 4;
    ebx = (uint32_t)(-(int32_t)ebx);
    MEM32(ebp + 0x24) = MEM32(ebp + 0x24) + 1;
    MEM32(edx) = ebx;
    edx = edx + 4;
    esi++;
    esi++;
    MEM32(ebp + -8) = edx;
    edx = (uint32_t)(int32_t)SMEM16(eax + -84);
    edi++;
    edi++;
    if (CMP_L(MEM32(ebp + 0x24), edx)) goto loc_0046AA2F; /* jl: less (signed <) */

loc_0046AA5B: ;
    fp_push(MEMF(eax)); /* fld float */
    fp_top() = -fp_top(); /* fchs */
    MEMF(ecx) = (float)fp_top(); fp_popp(); /* fstp */
    edx = MEM32(eax + 0xC);
    MEM32(ecx + 0xC) = edx;
    edx = MEM32(eax + 0x10);
    MEM32(ecx + 0x10) = edx;
    SET_LO16(edx, MEM16(eax + -84));
    MEM16(ecx + -84) = LO16(edx);
    edx = 0x94;
    eax = eax + edx;
    ecx = ecx + edx;
    MEM32(ebp + -20) = MEM32(ebp + -20) - 1;
    if ((MEM32(ebp + -20) != 0)) goto loc_0046AA13; /* jne: not equal / not zero */

loc_0046AA83: ;
    eax = MEM32(ebp + 0x18);
    ebx = MEM32(ebp + 0x10);
    esi = MEM32(ebp + -16);
    edx = MEM32(ebp + -28);
    eax = eax + eax;
    MEM32(ebp + 0x18) = eax;

loc_0046AA94: ;
    eax = (uint32_t)(int32_t)SMEM16(ebp + 0x1C);
    fp_push(MEMF(0x649200)); /* fld float */
    ecx = 0; /* xor self */
    (void)0; /* test eax, eax - flags set for next jcc */
    MEM32(ebp + -20) = eax;
    if (CMP_LE(eax & eax, 0)) goto loc_0046AAC4; /* jle: less or equal (signed <=) */

loc_0046AAA7: ;
    eax = ebp + -2932;

loc_0046AAAD: ;
    edi = eax + -140;
    MEMF(eax) = (float)fp_top(); fp_pop(); /* fst */
    MEM32(ebp + ecx * 4 + -112) = edi;
    ecx++;
    eax = eax + 0x94;
    if (CMP_L(ecx, MEM32(ebp + -20))) goto loc_0046AAAD; /* jl: less (signed <) */

loc_0046AAC4: ;
    if (CMP_NE(MEM16(ebp + 0x1C), 1)) goto loc_0046ADF3; /* jne: not equal / not zero */

loc_0046AACF: ;
    (void)0; /* cmp MEM16(ebp + 0x28), 0 - flags set for next jcc */
    ecx = MEM32(ebp + -112);
    if (CMP_NE(MEM16(ebp + 0x28), 0)) goto loc_0046AB52; /* jne: not equal / not zero */

loc_0046AAD9: ;
    SET_LO16(edx, MEM16(ebx));
    if (CMP_GE(LO16(edx), LO16(esi))) { sub_0046B1DB(); return; } /* jge: greater or equal (signed >=) */

loc_0046AAE5: ;
    edi = MEM32(ebp + 8);
    eax = SX16(LO16(edx));
    fp_push(MEMF(edi + eax * 4)); /* fld float */
    edi = MEM32(ebp + 0xC);
    eax = (uint32_t)((int32_t)eax * (int32_t)0x144);
    MEMF(ebp + -12) = (float)fp_top(); fp_pop(); /* fst */
    fp_push(MEMF(eax + edi)); /* fld float */
    MEMF(ebp + 0x1C) = (float)fp_top(); fp_popp(); /* fstp */
    /* fld st(0) */
    fp_st1() *= fp_top(); fp_pop(); /* fmul */
    MEMF(ebp + -4) = (float)fp_top(); fp_pop(); /* fst */
    /* fstp st(1) */
    fp_push(MEMF(ebp + 0x1C)); /* fld float */
    fp_st1() *= fp_top(); fp_pop(); /* fmul */
    /* fld st(1) */
    _fpu_cmp = (fp_top() < fp_st1()) ? -1 : (fp_top() > fp_st1()) ? 1 : 0; /* fcompp  */
    /* fnstsw ax - store FPU status word */
    /* fstp st(0) */
    if (TEST_NZ(HI8(eax), 0x41)) goto loc_0046AB4A; /* jne: not equal / not zero */

loc_0046AB1B: ;
    /* fstp st(0) */
    eax = MEM32(ebp + -12);
    fp_push(MEMF(ebp + 0x1C)); /* fld float */
    MEM32(ecx + 0x7C) = eax;
    fp_push(MEMF(ebp + -4)); /* fld float */
    eax = 0; /* xor self */
    fp_st1() /= fp_top(); fp_pop(); /* fdiv */
    eax++;
    MEM16(ecx) = LO16(edx);
    MEM32(ecx + 0x2C) = eax;
    MEM16(ecx + 0x28) = LO16(eax);
    /* fld st(1) */
    MEMF(ecx + 0x88) = (float)fp_top(); fp_popp(); /* fstp */
    MEMF(ecx + 0x8C) = (float)fp_top(); fp_pop(); /* fst */
    /* fst st(1) */
    /* fstp st(0) */

loc_0046AB4A: ;
    edx = edx + MEM32(ebp + -28);
    if (CMP_L(LO16(edx), LO16(esi))) goto loc_0046AAE5; /* jl: less (signed <) */

loc_0046AB52: ;
    if (CMP_NE(MEM16(ebp + 0x28), 1)) goto loc_0046ACA0; /* jne: not equal / not zero */

loc_0046AB5D: ;
    eax = (uint32_t)(int32_t)SMEM16(ebp + 0x18);
    if (CMP_LE(eax & eax, 0)) { sub_0046B1DB(); return; } /* jle: less or equal (signed <=) */

loc_0046AB69: ;
    edx = MEM32(ebp + 0x20);
    edx = edx + 0x7C;
    MEM32(ebp + -8) = eax;

loc_0046AB72: ;
    SET_LO16(eax, MEM16(edx + -84));
    MEM16(ebp + 0x24) = LO16(eax);
    eax = MEM32(edx);
    MEM32(ebp + -32) = eax;
    eax = MEM32(edx + 0xC);
    MEM32(ebp + -24) = eax;
    eax = MEM32(ebp + 0x10);
    eax = (uint32_t)(int32_t)SMEM16(eax);
    (void)0; /* cmp LO16(eax), MEM16(ebp + -16) - flags set for next jcc */
    MEM32(ebp + 0x14) = eax;
    if (CMP_GE(LO16(eax), MEM16(ebp + -16))) goto loc_0046AC91; /* jge: greater or equal (signed >=) */

loc_0046AB98: ;
    ebx = (uint32_t)(int32_t)SMEM16(ebp + 0x24);

loc_0046AB9C: ;
    edi = (uint32_t)(int32_t)SMEM16(ebp + 0x14);
    fp_push(MEMF(ebp + -32)); /* fld float */
    eax = MEM32(ebp + 8);
    esi = MEM32(ebp + 0xC);
    fp_st1() += fp_top(); fp_pop(); /* fadd */
    eax = edi;
    eax = (uint32_t)((int32_t)eax * (int32_t)0x144);
    MEMF(ebp + -12) = (float)fp_top(); fp_pop(); /* fst */
    fp_push(MEMF(ebp + -24)); /* fld float */
    fp_st1() += fp_top(); fp_pop(); /* fadd */
    esi = 0; /* xor self */
    (void)0; /* test ebx, ebx - flags set for next jcc */
    MEMF(ebp + 0x1C) = (float)fp_top(); fp_popp(); /* fstp */
    if (CMP_LE(ebx & ebx, 0)) goto loc_0046ABF2; /* jle: less or equal (signed <=) */

loc_0046ABC6: ;
    ebx = MEM32(ebp + 0xC);
    eax = edx + -124;
    eax = (uint32_t)(int32_t)SMEM16(eax + esi * 2);
    eax = eax + eax * 4;
    eax = eax << 4;
    eax = eax + edi;
    fp_push(MEMF(ebx + eax * 4)); /* fld float */
    ebx = (uint32_t)(int32_t)SMEM16(ebp + 0x24);
    fp_st1() += fp_top(); fp_pop(); /* fadd */
    eax = edx + -80;
    /* FPU: fimul dword ptr [eax + esi*4] */
    esi++;
    (void)0; /* cmp esi, ebx - flags set for next jcc */
    fp_st1() += fp_top(); fp_pop(); /* fadd */
    MEMF(ebp + 0x1C) = (float)fp_top(); fp_popp(); /* fstp */
    if (CMP_L(esi, ebx)) goto loc_0046ABC6; /* jl: less (signed <) */

loc_0046ABF2: ;
    /* fld st(0) */
    fp_st1() *= fp_top(); fp_pop(); /* fmul */
    MEMF(ebp + -4) = (float)fp_top(); fp_pop(); /* fst */
    /* fstp st(1) */
    fp_push(MEMF(ebp + 0x1C)); /* fld float */
    fp_st1() *= fp_top(); fp_pop(); /* fmul */
    /* fld st(1) */
    _fpu_cmp = (fp_top() < fp_st1()) ? -1 : (fp_top() > fp_st1()) ? 1 : 0; /* fcompp  */
    /* fnstsw ax - store FPU status word */
    /* fstp st(0) */
    if (TEST_NZ(HI8(eax), 0x41)) goto loc_0046AC7E; /* jne: not equal / not zero */

loc_0046AC0D: ;
    /* fstp st(0) */
    esi = 0; /* xor self */
    (void)0; /* test ebx, ebx - flags set for next jcc */
    fp_push(MEMF(ebp + 0x1C)); /* fld float */
    fp_push(MEMF(ebp + -4)); /* fld float */
    fp_st1() /= fp_top(); fp_pop(); /* fdiv */
    if (CMP_LE(ebx & ebx, 0)) goto loc_0046AC4D; /* jle: less or equal (signed <=) */

loc_0046AC1D: ;
    edi = edx + -80;
    MEM32(ebp + 0x1C) = edi;
    edi = edx + -124;
    eax = ecx + 0x2C;
    MEM32(ebp + -4) = edi;

loc_0046AC2C: ;
    edi = MEM32(ebp + -4);
    SET_LO16(edi, MEM16(edi));
    MEM32(ebp + -4) = MEM32(ebp + -4) + 2;
    MEM16(ecx + esi * 2) = LO16(edi);
    edi = MEM32(ebp + 0x1C);
    edi = MEM32(edi);
    MEM32(ebp + 0x1C) = MEM32(ebp + 0x1C) + 4;
    MEM32(eax) = edi;
    esi++;
    eax = eax + 4;
    if (CMP_L(esi, ebx)) goto loc_0046AC2C; /* jl: less (signed <) */

loc_0046AC4D: ;
    eax = MEM32(ebp + -12);
    /* fld st(1) */
    esi = MEM32(ebp + 0x24);
    MEMF(ecx + 0x88) = (float)fp_top(); fp_popp(); /* fstp */
    MEM32(ecx + 0x7C) = eax;
    eax = MEM32(ebp + 0x14);
    MEMF(ecx + 0x8C) = (float)fp_top(); fp_pop(); /* fst */
    esi++;
    /* fst st(1) */
    MEM16(ecx + ebx * 2) = LO16(eax);
    /* fstp st(0) */
    MEM32(ecx + ebx * 4 + 0x2C) = 1;
    MEM16(ecx + 0x28) = LO16(esi);
    goto loc_0046AC81;

loc_0046AC7E: ;
    eax = MEM32(ebp + 0x14);

loc_0046AC81: ;
    eax = eax + MEM32(ebp + -28);
    (void)0; /* cmp LO16(eax), MEM16(ebp + -16) - flags set for next jcc */
    MEM32(ebp + 0x14) = eax;
    if (CMP_L(LO16(eax), MEM16(ebp + -16))) goto loc_0046AB9C; /* jl: less (signed <) */

loc_0046AC91: ;
    edx = edx + 0x94;
    MEM32(ebp + -8) = MEM32(ebp + -8) - 1;
    if ((MEM32(ebp + -8) != 0)) goto loc_0046AB72; /* jne: not equal / not zero */

loc_0046ACA0: ;
    if (CMP_NE(MEM16(ebp + 0x28), 2)) { sub_0046B1DB(); return; } /* jne: not equal / not zero */

loc_0046ACAB: ;
    eax = (uint32_t)(int32_t)SMEM16(ebp + 0x18);
    if (CMP_LE(eax & eax, 0)) goto loc_0046B1D3; /* jle: less or equal (signed <=) */

loc_0046ACB7: ;
    edx = MEM32(ebp + 0x20);
    edx = edx + 0x7C;
    MEM32(ebp + -8) = eax;

loc_0046ACC0: ;
    SET_LO16(eax, MEM16(edx + -84));
    MEM16(ebp + 0x24) = LO16(eax);
    eax = MEM32(edx);
    MEM32(ebp + -32) = eax;
    eax = MEM32(edx + 0xC);
    MEM32(ebp + -24) = eax;
    eax = MEM32(ebp + 0x10);
    eax = (uint32_t)(int32_t)SMEM16(eax);
    (void)0; /* cmp LO16(eax), MEM16(ebp + -16) - flags set for next jcc */
    MEM32(ebp + 0x14) = eax;
    if (CMP_GE(LO16(eax), MEM16(ebp + -16))) goto loc_0046ADDF; /* jge: greater or equal (signed >=) */

loc_0046ACE6: ;
    ebx = (uint32_t)(int32_t)SMEM16(ebp + 0x24);

loc_0046ACEA: ;
    edi = (uint32_t)(int32_t)SMEM16(ebp + 0x14);
    fp_push(MEMF(ebp + -32)); /* fld float */
    eax = MEM32(ebp + 8);
    esi = MEM32(ebp + 0xC);
    fp_st1() += fp_top(); fp_pop(); /* fadd */
    eax = edi;
    eax = (uint32_t)((int32_t)eax * (int32_t)0x144);
    MEMF(ebp + -12) = (float)fp_top(); fp_pop(); /* fst */
    fp_push(MEMF(ebp + -24)); /* fld float */
    fp_st1() += fp_top(); fp_pop(); /* fadd */
    esi = 0; /* xor self */
    (void)0; /* test ebx, ebx - flags set for next jcc */
    MEMF(ebp + 0x1C) = (float)fp_top(); fp_popp(); /* fstp */
    if (CMP_LE(ebx & ebx, 0)) goto loc_0046AD40; /* jle: less or equal (signed <=) */

loc_0046AD14: ;
    ebx = MEM32(ebp + 0xC);
    eax = edx + -124;
    eax = (uint32_t)(int32_t)SMEM16(eax + esi * 2);
    eax = eax + eax * 4;
    eax = eax << 4;
    eax = eax + edi;
    fp_push(MEMF(ebx + eax * 4)); /* fld float */
    ebx = (uint32_t)(int32_t)SMEM16(ebp + 0x24);
    fp_st1() += fp_top(); fp_pop(); /* fadd */
    eax = edx + -80;
    /* FPU: fimul dword ptr [eax + esi*4] */
    esi++;
    (void)0; /* cmp esi, ebx - flags set for next jcc */
    fp_st1() += fp_top(); fp_pop(); /* fadd */
    MEMF(ebp + 0x1C) = (float)fp_top(); fp_popp(); /* fstp */
    if (CMP_L(esi, ebx)) goto loc_0046AD14; /* jl: less (signed <) */

loc_0046AD40: ;
    /* fld st(0) */
    fp_st1() *= fp_top(); fp_pop(); /* fmul */
    MEMF(ebp + -4) = (float)fp_top(); fp_pop(); /* fst */
    /* fstp st(1) */
    fp_push(MEMF(ebp + 0x1C)); /* fld float */
    fp_st1() *= fp_top(); fp_pop(); /* fmul */
    /* fld st(1) */
    _fpu_cmp = (fp_top() < fp_st1()) ? -1 : (fp_top() > fp_st1()) ? 1 : 0; /* fcompp  */
    /* fnstsw ax - store FPU status word */
    /* fstp st(0) */
    if (TEST_NZ(HI8(eax), 0x41)) goto loc_0046ADCC; /* jne: not equal / not zero */

loc_0046AD5B: ;
    /* fstp st(0) */
    esi = 0; /* xor self */
    (void)0; /* test ebx, ebx - flags set for next jcc */
    fp_push(MEMF(ebp + 0x1C)); /* fld float */
    fp_push(MEMF(ebp + -4)); /* fld float */
    fp_st1() /= fp_top(); fp_pop(); /* fdiv */
    if (CMP_LE(ebx & ebx, 0)) goto loc_0046AD9B; /* jle: less or equal (signed <=) */

loc_0046AD6B: ;
    edi = edx + -80;
    MEM32(ebp + 0x1C) = edi;
    edi = edx + -124;
    eax = ecx + 0x2C;
    MEM32(ebp + -4) = edi;

loc_0046AD7A: ;
    edi = MEM32(ebp + -4);
    SET_LO16(edi, MEM16(edi));
    MEM32(ebp + -4) = MEM32(ebp + -4) + 2;
    MEM16(ecx + esi * 2) = LO16(edi);
    edi = MEM32(ebp + 0x1C);
    edi = MEM32(edi);
    MEM32(ebp + 0x1C) = MEM32(ebp + 0x1C) + 4;
    MEM32(eax) = edi;
    esi++;
    eax = eax + 4;
    if (CMP_L(esi, ebx)) goto loc_0046AD7A; /* jl: less (signed <) */

loc_0046AD9B: ;
    eax = MEM32(ebp + -12);
    /* fld st(1) */
    esi = MEM32(ebp + 0x24);
    MEMF(ecx + 0x88) = (float)fp_top(); fp_popp(); /* fstp */
    MEM32(ecx + 0x7C) = eax;
    eax = MEM32(ebp + 0x14);
    MEMF(ecx + 0x8C) = (float)fp_top(); fp_pop(); /* fst */
    esi++;
    /* fst st(1) */
    MEM16(ecx + ebx * 2) = LO16(eax);
    /* fstp st(0) */
    MEM32(ecx + ebx * 4 + 0x2C) = 1;
    MEM16(ecx + 0x28) = LO16(esi);
    goto loc_0046ADCF;

loc_0046ADCC: ;
    eax = MEM32(ebp + 0x14);

loc_0046ADCF: ;
    eax = eax + MEM32(ebp + -28);
    (void)0; /* cmp LO16(eax), MEM16(ebp + -16) - flags set for next jcc */
    MEM32(ebp + 0x14) = eax;
    if (CMP_L(LO16(eax), MEM16(ebp + -16))) goto loc_0046ACEA; /* jl: less (signed <) */

loc_0046ADDF: ;
    edx = edx + 0x94;
    MEM32(ebp + -8) = MEM32(ebp + -8) - 1;
    if ((MEM32(ebp + -8) != 0)) goto loc_0046ACC0; /* jne: not equal / not zero */

loc_0046ADEE: ;
    goto loc_0046B1D3;

loc_0046ADF3: ;
    if (CMP_NE(MEM16(ebp + 0x28), 0)) goto loc_0046AEDC; /* jne: not equal / not zero */

loc_0046ADFE: ;
    edi = 0; /* xor self */
    SET_LO16(edi, MEM16(ebx));
    (void)0; /* cmp LO16(edi), LO16(esi) - flags set for next jcc */
    MEM32(ebp + 0x14) = edi;
    if (CMP_GE(LO16(edi), LO16(esi))) { sub_0046B1DB(); return; } /* jge: greater or equal (signed >=) */

loc_0046AE0F: ;
    ecx = MEM32(ebp + 8);
    eax = SX16(LO16(edi));
    fp_push(MEMF(ecx + eax * 4)); /* fld float */
    ecx = MEM32(ebp + 0xC);
    eax = (uint32_t)((int32_t)eax * (int32_t)0x144);
    MEMF(ebp + -12) = (float)fp_top(); fp_pop(); /* fst */
    fp_push(MEMF(eax + ecx)); /* fld float */
    MEMF(ebp + 0x1C) = (float)fp_top(); fp_popp(); /* fstp */
    /* fld st(0) */
    fp_st1() *= fp_top(); fp_pop(); /* fmul */
    MEMF(ebp + -4) = (float)fp_top(); fp_pop(); /* fst */
    /* fstp st(1) */
    fp_push(MEMF(ebp + 0x1C)); /* fld float */
    fp_st1() *= fp_top(); fp_pop(); /* fmul */
    /* fld st(1) */
    _fpu_cmp = (fp_top() < fp_st1()) ? -1 : (fp_top() > fp_st1()) ? 1 : 0; /* fcompp  */
    /* fnstsw ax - store FPU status word */
    /* fstp st(0) */
    if (TEST_NZ(HI8(eax), 0x41)) goto loc_0046AECE; /* jne: not equal / not zero */

loc_0046AE49: ;
    ecx = MEM32(ebp + -20);
    /* fstp st(0) */
    fp_push(MEMF(ebp + 0x1C)); /* fld float */
    esi = ecx + -1;
    fp_push(MEMF(ebp + -4)); /* fld float */
    edx = esi;
    (void)0; /* cmp edx, 1 - flags set for next jcc */
    fp_st1() /= fp_top(); fp_pop(); /* fdiv */
    if (CMP_L(edx, 1)) goto loc_0046AE7C; /* jl: less (signed <) */

loc_0046AE60: ;
    ebx = ebp + edx * 4 + -116;

loc_0046AE64: ;
    eax = MEM32(ebx);
    _fpu_cmp = (fp_top() < fp_st1()) ? -1 : (fp_top() > fp_st1()) ? 1 : 0; /* fcom dword ptr [eax + 0x8c] */
    /* fnstsw ax - store FPU status word */
    if (1 /* jnp after test - parity */) goto loc_0046AE7C; /* jnp: not parity */

loc_0046AE73: ;
    edx--;
    ebx = ebx - 4;
    if (CMP_GE(edx, 1)) goto loc_0046AE64; /* jge: greater or equal (signed >=) */

loc_0046AE7C: ;
    (void)0; /* cmp esi, edx - flags set for next jcc */
    ecx = ebp + ecx * 4 + -116;
    eax = MEM32(ecx);
    if (CMP_LE(esi, edx)) goto loc_0046AE96; /* jle: less or equal (signed <=) */

loc_0046AE86: ;
    edi = MEM32(ebp + esi * 4 + -116);
    MEM32(ebp + esi * 4 + -112) = edi;
    esi--;
    if (CMP_G(esi, edx)) goto loc_0046AE86; /* jg: greater (signed >) */

loc_0046AE93: ;
    edi = MEM32(ebp + 0x14);

loc_0046AE96: ;
    ebx = MEM32(ebp + 0x10);
    /* fld st(1) */
    esi = MEM32(ebp + -16);
    MEMF(eax + 0x88) = (float)fp_top(); fp_popp(); /* fstp */
    MEM32(ebp + edx * 4 + -112) = eax;
    edx = MEM32(ebp + -12);
    MEMF(eax + 0x8C) = (float)fp_top(); fp_popp(); /* fstp */
    MEM32(eax + 0x7C) = edx;
    edx = 0; /* xor self */
    /* fstp st(0) */
    edx++;
    MEM32(eax + 0x2C) = edx;
    MEM16(eax + 0x28) = LO16(edx);
    edx = MEM32(ebp + -28);
    MEM16(eax) = LO16(edi);
    eax = MEM32(ecx);
    fp_push(MEMF(eax + 0x8C)); /* fld float */

loc_0046AECE: ;
    edi = edi + edx;
    (void)0; /* cmp LO16(edi), LO16(esi) - flags set for next jcc */
    MEM32(ebp + 0x14) = edi;
    if (CMP_L(LO16(edi), LO16(esi))) goto loc_0046AE0F; /* jl: less (signed <) */

loc_0046AEDC: ;
    if (CMP_NE(MEM16(ebp + 0x28), 1)) goto loc_0046B088; /* jne: not equal / not zero */

loc_0046AEE7: ;
    eax = (uint32_t)(int32_t)SMEM16(ebp + 0x18);
    if (CMP_LE(eax & eax, 0)) { sub_0046B1DB(); return; } /* jle: less or equal (signed <=) */

loc_0046AEF3: ;
    edx = MEM32(ebp + 0x20);
    edx = edx + 0x7C;
    MEM32(ebp + -8) = eax;

loc_0046AEFC: ;
    eax = MEM32(edx);
    MEM32(ebp + -32) = eax;
    eax = MEM32(edx + 0xC);
    ecx = 0; /* xor self */
    SET_LO16(ecx, MEM16(edx + -84));
    MEM32(ebp + -24) = eax;
    eax = 0; /* xor self */
    SET_LO16(eax, MEM16(ebx));
    (void)0; /* cmp LO16(eax), MEM16(ebp + -16) - flags set for next jcc */
    MEM32(ebp + 0x24) = ecx;
    MEM32(ebp + 0x14) = eax;
    if (CMP_GE(LO16(eax), MEM16(ebp + -16))) goto loc_0046B079; /* jge: greater or equal (signed >=) */

loc_0046AF22: ;
    edi = SX16(LO16(ecx));

loc_0046AF25: ;
    esi = (uint32_t)(int32_t)SMEM16(ebp + 0x14);
    fp_push(MEMF(ebp + -32)); /* fld float */
    eax = MEM32(ebp + 8);
    ecx = MEM32(ebp + 0xC);
    fp_st1() += fp_top(); fp_pop(); /* fadd */
    eax = esi;
    eax = (uint32_t)((int32_t)eax * (int32_t)0x144);
    MEMF(ebp + -12) = (float)fp_top(); fp_pop(); /* fst */
    fp_push(MEMF(ebp + -24)); /* fld float */
    fp_st1() += fp_top(); fp_pop(); /* fadd */
    ecx = 0; /* xor self */
    (void)0; /* test edi, edi - flags set for next jcc */
    MEMF(ebp + 0x1C) = (float)fp_top(); fp_popp(); /* fstp */
    if (CMP_LE(edi & edi, 0)) goto loc_0046AF7A; /* jle: less or equal (signed <=) */

loc_0046AF4F: ;
    ebx = MEM32(ebp + 0xC);
    eax = edx + -124;
    eax = (uint32_t)(int32_t)SMEM16(eax + ecx * 2);
    eax = eax + eax * 4;
    eax = eax << 4;
    eax = eax + esi;
    fp_push(MEMF(ebx + eax * 4)); /* fld float */
    eax = edx + -80;
    fp_st1() += fp_top(); fp_pop(); /* fadd */
    /* FPU: fimul dword ptr [eax + ecx*4] */
    ecx++;
    (void)0; /* cmp ecx, edi - flags set for next jcc */
    fp_st1() += fp_top(); fp_pop(); /* fadd */
    MEMF(ebp + 0x1C) = (float)fp_top(); fp_popp(); /* fstp */
    if (CMP_L(ecx, edi)) goto loc_0046AF4F; /* jl: less (signed <) */

loc_0046AF77: ;
    ebx = MEM32(ebp + 0x10);

loc_0046AF7A: ;
    /* fld st(0) */
    fp_st1() *= fp_top(); fp_pop(); /* fmul */
    MEMF(ebp + -4) = (float)fp_top(); fp_pop(); /* fst */
    /* fstp st(1) */
    fp_push(MEMF(ebp + 0x1C)); /* fld float */
    fp_st1() *= fp_top(); fp_pop(); /* fmul */
    /* fld st(1) */
    _fpu_cmp = (fp_top() < fp_st1()) ? -1 : (fp_top() > fp_st1()) ? 1 : 0; /* fcompp  */
    /* fnstsw ax - store FPU status word */
    /* fstp st(0) */
    if (TEST_NZ(HI8(eax), 0x41)) goto loc_0046B066; /* jne: not equal / not zero */

loc_0046AF99: ;
    esi = MEM32(ebp + -20);
    /* fstp st(0) */
    fp_push(MEMF(ebp + 0x1C)); /* fld float */
    esi--;
    fp_push(MEMF(ebp + -4)); /* fld float */
    ecx = esi;
    (void)0; /* cmp ecx, 1 - flags set for next jcc */
    fp_st1() /= fp_top(); fp_pop(); /* fdiv */
    if (CMP_L(ecx, 1)) goto loc_0046AFCA; /* jl: less (signed <) */

loc_0046AFAE: ;
    ebx = ebp + ecx * 4 + -116;

loc_0046AFB2: ;
    eax = MEM32(ebx);
    _fpu_cmp = (fp_top() < fp_st1()) ? -1 : (fp_top() > fp_st1()) ? 1 : 0; /* fcom dword ptr [eax + 0x8c] */
    /* fnstsw ax - store FPU status word */
    if (1 /* jnp after test - parity */) goto loc_0046AFCA; /* jnp: not parity */

loc_0046AFC1: ;
    ecx--;
    ebx = ebx - 4;
    if (CMP_GE(ecx, 1)) goto loc_0046AFB2; /* jge: greater or equal (signed >=) */

loc_0046AFCA: ;
    (void)0; /* cmp esi, ecx - flags set for next jcc */
    eax = MEM32(ebp + -20);
    eax = MEM32(ebp + eax * 4 + -116);
    MEM32(ebp + 0x1C) = esi;
    if (CMP_LE(esi, ecx)) goto loc_0046AFEE; /* jle: less or equal (signed <=) */

loc_0046AFD8: ;
    esi = MEM32(ebp + 0x1C);
    esi = esi << 2;
    MEM32(ebp + 0x1C) = MEM32(ebp + 0x1C) - 1;
    (void)0; /* cmp MEM32(ebp + 0x1C), ecx - flags set for next jcc */
    ebx = MEM32(ebp + esi + -116);
    MEM32(ebp + esi + -112) = ebx;
    if (CMP_G(MEM32(ebp + 0x1C), ecx)) goto loc_0046AFD8; /* jg: greater (signed >) */

loc_0046AFEE: ;
    esi = 0; /* xor self */
    (void)0; /* test edi, edi - flags set for next jcc */
    MEM32(ebp + ecx * 4 + -112) = eax;
    if (CMP_LE(edi & edi, 0)) goto loc_0046B028; /* jle: less or equal (signed <=) */

loc_0046AFF8: ;
    ebx = edx + -80;
    MEM32(ebp + 0x1C) = ebx;
    ebx = edx + -124;
    ecx = eax + 0x2C;
    MEM32(ebp + -4) = ebx;

loc_0046B007: ;
    ebx = MEM32(ebp + -4);
    SET_LO16(ebx, MEM16(ebx));
    MEM32(ebp + -4) = MEM32(ebp + -4) + 2;
    MEM16(eax + esi * 2) = LO16(ebx);
    ebx = MEM32(ebp + 0x1C);
    ebx = MEM32(ebx);
    MEM32(ebp + 0x1C) = MEM32(ebp + 0x1C) + 4;
    MEM32(ecx) = ebx;
    esi++;
    ecx = ecx + 4;
    if (CMP_L(esi, edi)) goto loc_0046B007; /* jl: less (signed <) */

loc_0046B028: ;
    ecx = MEM32(ebp + -12);
    /* fld st(1) */
    ebx = MEM32(ebp + 0x10);
    MEMF(eax + 0x88) = (float)fp_top(); fp_popp(); /* fstp */
    MEM32(eax + 0x7C) = ecx;
    SET_LO16(ecx, MEM16(ebp + 0x14));
    MEMF(eax + 0x8C) = (float)fp_top(); fp_popp(); /* fstp */
    MEM16(eax + edi * 2) = LO16(ecx);
    ecx = MEM32(ebp + 0x24);
    /* fstp st(0) */
    MEM32(eax + edi * 4 + 0x2C) = 1;
    ecx++;
    MEM16(eax + 0x28) = LO16(ecx);
    eax = MEM32(ebp + -20);
    eax = MEM32(ebp + eax * 4 + -116);
    fp_push(MEMF(eax + 0x8C)); /* fld float */

loc_0046B066: ;
    eax = MEM32(ebp + 0x14);
    eax = eax + MEM32(ebp + -28);
    (void)0; /* cmp LO16(eax), MEM16(ebp + -16) - flags set for next jcc */
    MEM32(ebp + 0x14) = eax;
    if (CMP_L(LO16(eax), MEM16(ebp + -16))) goto loc_0046AF25; /* jl: less (signed <) */

loc_0046B079: ;
    edx = edx + 0x94;
    MEM32(ebp + -8) = MEM32(ebp + -8) - 1;
    if ((MEM32(ebp + -8) != 0)) goto loc_0046AEFC; /* jne: not equal / not zero */

loc_0046B088: ;
    if (CMP_NE(MEM16(ebp + 0x28), 2)) { sub_0046B1DB(); return; } /* jne: not equal / not zero */

loc_0046B093: ;
    eax = (uint32_t)(int32_t)SMEM16(ebp + 0x18);
    (void)0; /* test eax, eax - flags set for next jcc */
    ecx = MEM32(ebp + -112);
    if (CMP_LE(eax & eax, 0)) goto loc_0046B1D3; /* jle: less or equal (signed <=) */

loc_0046B0A2: ;
    edx = MEM32(ebp + 0x20);
    edx = edx + 0x7C;
    MEM32(ebp + -8) = eax;

loc_0046B0AB: ;
    SET_LO16(eax, MEM16(edx + -84));
    MEM16(ebp + 0x24) = LO16(eax);
    eax = MEM32(edx);
    MEM32(ebp + -32) = eax;
    eax = MEM32(edx + 0xC);
    MEM32(ebp + -24) = eax;
    eax = MEM32(ebp + 0x10);
    eax = (uint32_t)(int32_t)SMEM16(eax);
    (void)0; /* cmp LO16(eax), MEM16(ebp + -16) - flags set for next jcc */
    MEM32(ebp + 0x14) = eax;
    if (CMP_GE(LO16(eax), MEM16(ebp + -16))) goto loc_0046B1C4; /* jge: greater or equal (signed >=) */

loc_0046B0D1: ;
    ebx = (uint32_t)(int32_t)SMEM16(ebp + 0x24);

loc_0046B0D5: ;
    edi = (uint32_t)(int32_t)SMEM16(ebp + 0x14);
    fp_push(MEMF(ebp + -32)); /* fld float */
    eax = MEM32(ebp + 8);
    esi = MEM32(ebp + 0xC);
    fp_st1() += fp_top(); fp_pop(); /* fadd */
    eax = edi;
    eax = (uint32_t)((int32_t)eax * (int32_t)0x144);
    MEMF(ebp + -12) = (float)fp_top(); fp_pop(); /* fst */
    fp_push(MEMF(ebp + -24)); /* fld float */
    fp_st1() += fp_top(); fp_pop(); /* fadd */
    esi = 0; /* xor self */
    (void)0; /* test ebx, ebx - flags set for next jcc */
    MEMF(ebp + 0x1C) = (float)fp_top(); fp_popp(); /* fstp */
    if (CMP_LE(ebx & ebx, 0)) goto loc_0046B12B; /* jle: less or equal (signed <=) */

loc_0046B0FF: ;
    ebx = MEM32(ebp + 0xC);
    eax = edx + -124;
    eax = (uint32_t)(int32_t)SMEM16(eax + esi * 2);
    eax = eax + eax * 4;
    eax = eax << 4;
    eax = eax + edi;
    fp_push(MEMF(ebx + eax * 4)); /* fld float */
    ebx = (uint32_t)(int32_t)SMEM16(ebp + 0x24);
    fp_st1() += fp_top(); fp_pop(); /* fadd */
    eax = edx + -80;
    /* FPU: fimul dword ptr [eax + esi*4] */
    esi++;
    (void)0; /* cmp esi, ebx - flags set for next jcc */
    fp_st1() += fp_top(); fp_pop(); /* fadd */
    MEMF(ebp + 0x1C) = (float)fp_top(); fp_popp(); /* fstp */
    if (CMP_L(esi, ebx)) goto loc_0046B0FF; /* jl: less (signed <) */

loc_0046B12B: ;
    /* fld st(0) */
    fp_st1() *= fp_top(); fp_pop(); /* fmul */
    MEMF(ebp + -4) = (float)fp_top(); fp_pop(); /* fst */
    /* fstp st(1) */
    fp_push(MEMF(ebp + 0x1C)); /* fld float */
    fp_st1() *= fp_top(); fp_pop(); /* fmul */
    /* fld st(1) */
    _fpu_cmp = (fp_top() < fp_st1()) ? -1 : (fp_top() > fp_st1()) ? 1 : 0; /* fcompp  */
    /* fnstsw ax - store FPU status word */
    /* fstp st(0) */
    if (TEST_NZ(HI8(eax), 0x41)) goto loc_0046B1B1; /* jne: not equal / not zero */

loc_0046B146: ;
    /* fstp st(0) */
    esi = 0; /* xor self */
    (void)0; /* test ebx, ebx - flags set for next jcc */
    fp_push(MEMF(ebp + 0x1C)); /* fld float */
    fp_push(MEMF(ebp + -4)); /* fld float */
    fp_st1() /= fp_top(); fp_pop(); /* fdiv */
    if (CMP_LE(ebx & ebx, 0)) goto loc_0046B186; /* jle: less or equal (signed <=) */

loc_0046B156: ;
    edi = edx + -80;
    MEM32(ebp + 0x1C) = edi;
    edi = edx + -124;
    eax = ecx + 0x2C;
    MEM32(ebp + -4) = edi;

loc_0046B165: ;
    edi = MEM32(ebp + -4);
    SET_LO16(edi, MEM16(edi));
    MEM32(ebp + -4) = MEM32(ebp + -4) + 2;
    MEM16(ecx + esi * 2) = LO16(edi);
    edi = MEM32(ebp + 0x1C);
    edi = MEM32(edi);
    MEM32(ebp + 0x1C) = MEM32(ebp + 0x1C) + 4;
    MEM32(eax) = edi;
    esi++;
    eax = eax + 4;
    if (CMP_L(esi, ebx)) goto loc_0046B165; /* jl: less (signed <) */

loc_0046B186: ;
    eax = MEM32(ebp + -12);
    /* fld st(1) */
    esi = MEM32(ebp + 0x24);
    MEM32(ecx + 0x7C) = eax;
    MEMF(ecx + 0x88) = (float)fp_top(); fp_popp(); /* fstp */
    eax = MEM32(ebp + 0x14);
    MEM16(ecx + ebx * 2) = LO16(eax);
    /* fst st(1) */
    esi++;
    /* fstp st(0) */
    MEM32(ecx + ebx * 4 + 0x2C) = 1;
    MEM16(ecx + 0x28) = LO16(esi);
    goto loc_0046B1B4;

loc_0046B1B1: ;
    eax = MEM32(ebp + 0x14);

loc_0046B1B4: ;
    eax = eax + MEM32(ebp + -28);
    (void)0; /* cmp LO16(eax), MEM16(ebp + -16) - flags set for next jcc */
    MEM32(ebp + 0x14) = eax;
    if (CMP_L(LO16(eax), MEM16(ebp + -16))) goto loc_0046B0D5; /* jl: less (signed <) */

loc_0046B1C4: ;
    edx = edx + 0x94;
    MEM32(ebp + -8) = MEM32(ebp + -8) - 1;
    if ((MEM32(ebp + -8) != 0)) goto loc_0046B0AB; /* jne: not equal / not zero */

loc_0046B1D3: ;
    MEMF(ecx + 0x8C) = (float)fp_top(); fp_popp(); /* fstp */
    g_seh_ebp = ebp; sub_0046B1DD(); return; /* tail jmp 0x0046B1DD */

    #undef fp_push
    #undef fp_pop
    #undef fp_popp
    #undef fp_top
    #undef fp_st1
}

/**
 * sub_0046B260
 * Original: 0x0046B260 - 0x0046B2EA (138 bytes, 54 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0046B260(void)
{
    uint32_t ebp;
    int _flags = 0; /* fallback flag var */

loc_0046B260: ;
    PUSH32(esp, ebp);
    ebp = esp;
    (void)0; /* cmp MEM16(ebp + 0x14), 2 - flags set for next jcc */
    PUSH32(esp, esi);
    PUSH32(esp, edi);
    if (CMP_NE(MEM16(ebp + 0x14), 2)) { sub_0046B2EA(); return; } /* jne: not equal / not zero */

loc_0046B26C: ;
    eax = MEM32(ebp + 0xC);
    SET_LO16(ecx, MEM16(eax));
    SET_LO16(edx, MEM16(eax + 2));
    if (CMP_EQ(LO16(ecx), LO16(edx))) goto loc_0046B2B7; /* je: equal / zero */

loc_0046B27B: ;
    eax = MEM32(ebp + 8);
    SET_LO16(esi, MEM16(eax));
    SET_LO16(edi, MEM16(eax + 2));
    eax = 0; /* xor self */
    eax++;
    if (CMP_GE(LO16(esi), LO16(edi))) goto loc_0046B2A2; /* jge: greater or equal (signed >=) */

loc_0046B28D: ;
    if (CMP_GE(LO16(ecx) & LO16(ecx), 0)) goto loc_0046B294; /* jge: greater or equal (signed >=) */

loc_0046B292: ;
    eax = 0; /* xor self */

loc_0046B294: ;
    eax = (uint32_t)((int32_t)eax * (int32_t)MEM32(ebp + 0x10));
    eax = eax + esi;
    eax = (uint32_t)((int32_t)eax * (int32_t)MEM32(ebp + 0x10));
    eax = eax + edi;
    g_seh_ebp = ebp; sub_0046B308(); return; /* tail jmp 0x0046B308 */

loc_0046B2A2: ;
    if (CMP_GE(LO16(edx) & LO16(edx), 0)) goto loc_0046B2A9; /* jge: greater or equal (signed >=) */

loc_0046B2A7: ;
    eax = 0; /* xor self */

loc_0046B2A9: ;
    eax = (uint32_t)((int32_t)eax * (int32_t)MEM32(ebp + 0x10));
    eax = eax + edi;
    eax = (uint32_t)((int32_t)eax * (int32_t)MEM32(ebp + 0x10));
    eax = eax + esi;
    g_seh_ebp = ebp; sub_0046B308(); return; /* tail jmp 0x0046B308 */

loc_0046B2B7: ;
    eax = 0; /* xor self */
    eax++;
    if (CMP_GE(LO16(ecx) & LO16(ecx), 0)) goto loc_0046B2C1; /* jge: greater or equal (signed >=) */

loc_0046B2BF: ;
    eax = 0; /* xor self */

loc_0046B2C1: ;
    edx = MEM32(ebp + 8);
    eax = (uint32_t)((int32_t)eax * (int32_t)MEM32(ebp + 0x10));
    ecx = 0; /* xor self */
    SET_LO16(ecx, MEM16(edx));
    edx = (uint32_t)(int32_t)SMEM16(edx + 2);
    if (CMP_L(LO16(ecx), LO16(edx))) goto loc_0046B2E0; /* jl: less (signed <) */

loc_0046B2D6: ;
    eax = eax + ecx;
    eax = (uint32_t)((int32_t)eax * (int32_t)MEM32(ebp + 0x10));
    eax = eax + edx;
    g_seh_ebp = ebp; sub_0046B308(); return; /* tail jmp 0x0046B308 */

loc_0046B2E0: ;
    eax = eax + edx;
    eax = (uint32_t)((int32_t)eax * (int32_t)MEM32(ebp + 0x10));
    eax = eax + ecx;
    g_seh_ebp = ebp; sub_0046B308(); return; /* tail jmp 0x0046B308 */

}

/**
 * sub_0046B31B
 * Original: 0x0046B31B - 0x0046B739 (1054 bytes, 372 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0046B31B(void)
{
    uint32_t ebp;
    int _flags = 0; /* fallback flag var */
    int _fpu_cmp = 0; /* FPU compare result: -1/0/1 */
    float xmm0, xmm1, xmm7;
    double _fp_stack[8];
    int _fp_top = 0;
    #define fp_push(v) (_fp_stack[--_fp_top & 7] = (v))
    #define fp_pop() (_fp_top++)
    #define fp_popp() (fp_pop())
    #define fp_top() _fp_stack[_fp_top & 7]
    #define fp_st1() _fp_stack[(_fp_top + 1) & 7]

loc_0046B31B: ;
    PUSH32(esp, ebp);
    ebp = esp;
    eax = 0x6554;
    PUSH32(esp, 0); sub_00470E50(); /* call 0x00470E50 */

loc_0046B328: ;
    PUSH32(esp, ebx);
    PUSH32(esp, esi);
    PUSH32(esp, edi);
    PUSH32(esp, 0); sub_00446B35(); /* call 0x00446B35 */

loc_0046B330: ;
    if (TEST_Z(eax, eax)) goto loc_0046B457; /* je: equal / zero */

loc_0046B338: ;
    eax = (uint32_t)(int32_t)SMEM16(ebp + 0x10);
    PUSH32(esp, 4);
    edx = ((int32_t)eax < 0) ? 0xFFFFFFFF : 0; /* cdq */
    POP32(esp, ecx);
    { int64_t _dividend = ((int64_t)(int32_t)edx << 32) | eax;
      eax = (uint32_t)((int32_t)(_dividend / (int32_t)ecx));
      edx = (uint32_t)((int32_t)(_dividend % (int32_t)ecx)); }
    if (TEST_NZ(edx, edx)) { sub_0046B739(); return; } /* jne: not equal / not zero */

loc_0046B34A: ;
    MEM32(ebp + -8) = eax;
    esi = MEM32(ebp + 0xC);
    ebx = MEM32(ebp + 8);
    eax = (uint32_t)(int32_t)SMEM16(ebp + 0x10);
    eax = eax - 4;
    edx = ebx + eax * 4;
    fp_push(MEMF(esi)); /* fld float */
    fp_st1() *= fp_top(); fp_pop(); /* fmul */
    fp_push(MEMF(esi)); /* fld float */
    fp_st1() *= fp_top(); fp_pop(); /* fmul */
    fp_push(MEMF(esi + 4)); /* fld float */
    fp_st1() *= fp_top(); fp_pop(); /* fmul */
    ebx = ebp + -340;
    eax = (uint32_t)(int32_t)SMEM16(ebp + 0x10);
    fp_st1() += fp_top(); fp_pop(); /* faddp */
    fp_push(MEMF(esi)); /* fld float */
    fp_st1() *= fp_top(); fp_pop(); /* fmul */
    fp_push(MEMF(esi + 4)); /* fld float */
    fp_st1() *= fp_top(); fp_pop(); /* fmul */
    fp_push(MEMF(esi + 8)); /* fld float */
    fp_st1() *= fp_top(); fp_pop(); /* fmul */
    eax = eax - 4;
    edi = ebx + eax * 4;
    fp_st1() += fp_top(); fp_pop(); /* faddp */
    fp_st1() += fp_top(); fp_pop(); /* faddp */
    fp_push(MEMF(esi)); /* fld float */
    fp_st1() *= fp_top(); fp_pop(); /* fmul */
    fp_push(MEMF(esi + 4)); /* fld float */
    fp_st1() *= fp_top(); fp_pop(); /* fmul */
    fp_push(MEMF(esi + 8)); /* fld float */
    fp_st1() *= fp_top(); fp_pop(); /* fmul */
    fp_push(MEMF(esi + 0xC)); /* fld float */
    fp_st1() *= fp_top(); fp_pop(); /* fmul */
    ecx = 1;
    edx = edx - 0x10;
    fp_st1() += fp_top(); fp_pop(); /* faddp */
    fp_st1() += fp_top(); fp_pop(); /* faddp */
    fp_st1() += fp_top(); fp_pop(); /* faddp */
    MEMF(edi) = (float)fp_top(); fp_popp(); /* fstp */
    MEMF(edi + 4) = (float)fp_top(); fp_popp(); /* fstp */
    MEMF(edi + 8) = (float)fp_top(); fp_popp(); /* fstp */
    MEMF(edi + 0xC) = (float)fp_top(); fp_popp(); /* fstp */

loc_0046B3C3: ;
    fp_push(MEMF(esi)); /* fld float */
    fp_st1() *= fp_top(); fp_pop(); /* fmul */
    edi = edi - 0x10;
    fp_push(MEMF(esi)); /* fld float */
    fp_st1() *= fp_top(); fp_pop(); /* fmul */
    fp_push(MEMF(esi + 4)); /* fld float */
    fp_st1() *= fp_top(); fp_pop(); /* fmul */
    fp_st1() += fp_top(); fp_pop(); /* faddp */
    fp_push(MEMF(esi)); /* fld float */
    fp_st1() *= fp_top(); fp_pop(); /* fmul */
    fp_push(MEMF(esi + 4)); /* fld float */
    fp_st1() *= fp_top(); fp_pop(); /* fmul */
    fp_push(MEMF(esi + 8)); /* fld float */
    fp_st1() *= fp_top(); fp_pop(); /* fmul */
    fp_st1() += fp_top(); fp_pop(); /* faddp */
    fp_st1() += fp_top(); fp_pop(); /* faddp */
    fp_push(MEMF(esi)); /* fld float */
    fp_st1() *= fp_top(); fp_pop(); /* fmul */
    fp_push(MEMF(esi + 4)); /* fld float */
    fp_st1() *= fp_top(); fp_pop(); /* fmul */
    fp_push(MEMF(esi + 8)); /* fld float */
    fp_st1() *= fp_top(); fp_pop(); /* fmul */
    fp_push(MEMF(esi + 0xC)); /* fld float */
    fp_st1() *= fp_top(); fp_pop(); /* fmul */
    esi = esi + 4;
    ebx = edx;
    ebx = ebx + 0x10;
    fp_st1() += fp_top(); fp_pop(); /* faddp */
    edx = edx - 0x10;
    fp_st1() += fp_top(); fp_pop(); /* faddp */
    eax = ecx;
    fp_st1() += fp_top(); fp_pop(); /* faddp */
    eax = eax << 2;
    MEMF(edi) = (float)fp_top(); fp_popp(); /* fstp */
    MEMF(edi + 4) = (float)fp_top(); fp_popp(); /* fstp */
    MEMF(edi + 8) = (float)fp_top(); fp_popp(); /* fstp */
    MEMF(edi + 0xC) = (float)fp_top(); fp_popp(); /* fstp */
    xmm7 = MEMF(edi); /* movups */

loc_0046B427: ;
    xmm0 = MEMF(esi); /* movups */
    /* shufps xmm0, xmm0, 0x1b */
    xmm1 = MEMF(ebx); /* movss */
    /* shufps xmm1, xmm1, 0 */
    /* mulps: xmm0 *= xmm1 (packed 4xfloat) */
    esi = esi + 4;
    ebx = ebx + 4;
    eax--;
    /* addps: xmm7 += xmm0 (packed 4xfloat) */
    if ((eax != 0)) goto loc_0046B427; /* jne: not equal / not zero */

loc_0046B445: ;
    esi = MEM32(ebp + 0xC);
    ecx++;
    (void)0; /* cmp ecx, MEM32(ebp + -8) - flags set for next jcc */
    MEMF(edi) = xmm7; /* movups */
    if (CMP_L(ecx, MEM32(ebp + -8))) goto loc_0046B3C3; /* jl: less (signed <) */

loc_0046B455: ;
    goto loc_0046B46F;

loc_0046B457: ;
    PUSH32(esp, MEM32(ebp + 0x10));
    eax = ebp + -340;
    PUSH32(esp, MEM32(ebp + 0xC));
    PUSH32(esp, MEM32(ebp + 8));
    PUSH32(esp, eax);
    PUSH32(esp, 0); sub_004692EA(); /* call 0x004692EA */

loc_0046B46C: ;
    esp = esp + 0x10;

loc_0046B46F: ;
    eax = (uint32_t)(int32_t)SMEM16(ebp + 0x10);
    fp_push(0.0); /* fldz */
    ecx = 0; /* xor self */
    (void)0; /* test eax, eax - flags set for next jcc */
    MEM32(ebp + -20) = eax;
    if (CMP_LE(eax & eax, 0)) goto loc_0046B4A8; /* jle: less or equal (signed <=) */

loc_0046B47E: ;
    edx = eax;
    edx = (uint32_t)((int32_t)edx * (int32_t)0x144);
    edx = ebp + edx + -26264;

loc_0046B48D: ;
    esi = MEM32(ebp + 0xC);
    fp_push(MEMF(esi + ecx * 4)); /* fld float */
    ecx++;
    /* fld st(0) */
    fp_st1() *= fp_top(); fp_pop(); /* fmul */
    fp_st1() += fp_top(); fp_pop(); /* faddp */
    /* fstp st(0) */
    MEMF(edx) = (float)fp_top(); fp_pop(); /* fst */
    edx = edx - 0x144;
    if (CMP_L(ecx, eax)) goto loc_0046B48D; /* jl: less (signed <) */

loc_0046B4A8: ;
    eax--;
    /* fstp st(0) */
    ecx = eax + 0x51;
    MEM32(ebp + -4) = eax;
    eax = eax + eax * 4;
    eax = eax << 5;
    edx = ((int32_t)eax < 0) ? 0xFFFFFFFF : 0; /* cdq */
    eax = eax - edx;
    eax = (uint32_t)((int32_t)eax >> 1);
    MEM32(ebp + -8) = eax;
    eax = eax + 0x51;
    MEM32(ebp + -16) = ecx;
    MEM32(ebp + -12) = eax;
    esi = MEM32(ebp + 0xC);
    edi = ebp + -25940;
    ecx = 1;

loc_0046B4D6: ;
    fp_push(0.0); /* fldz */
    ebx = MEM32(ebp + -4);
    ebx--;
    MEM32(ebp + -4) = ebx;
    ebx = ebx + MEM32(ebp + -12);
    edx = MEM32(ebp + -8);
    edx = edx - 0x50;
    MEM32(ebp + -8) = edx;
    edx = edx + MEM32(ebp + -16);
    eax = (uint32_t)(int32_t)SMEM16(ebp + 0x10);
    eax = eax - ecx;

loc_0046B4F4: ;
    fp_push(MEMF(esi)); /* fld float */
    fp_st1() *= fp_top(); fp_pop(); /* fmul */
    esi = esi + 4;
    edx = edx - 0x51;
    ebx = ebx - 0x51;
    fp_st1() += fp_top(); fp_pop(); /* faddp */
    MEMF(edi + edx * 4) = (float)fp_top(); fp_pop(); /* fst */
    eax--;
    MEMF(edi + ebx * 4) = (float)fp_top(); fp_pop(); /* fst */
    if ((eax != 0)) goto loc_0046B4F4; /* jne: not equal / not zero */

loc_0046B50D: ;
    esi = MEM32(ebp + 0xC);
    ecx++;
    (void)0; /* cmp LO16(ecx), MEM16(ebp + 0x10) - flags set for next jcc */
    /* fstp st(0) */
    if (CMP_L(LO16(ecx), MEM16(ebp + 0x10))) goto loc_0046B4D6; /* jl: less (signed <) */

loc_0046B519: ;
    eax = MEM32(ebp + 0x28);
    SET_LO16(eax, MEM16(eax));
    if (CMP_NE(LO16(eax), 2)) goto loc_0046B557; /* jne: not equal / not zero */

loc_0046B525: ;
    esi = MEM32(ebp + 0x2C);
    ebx = MEM32(ebp + 0x1C);
    eax = 0; /* xor self */
    PUSH32(esp, eax);
    PUSH32(esp, eax);
    PUSH32(esp, MEM32(ebp + 0x30));
    ecx = 0; /* xor self */
    SET_LO16(ecx, MEM16(esi));
    PUSH32(esp, ecx);
    PUSH32(esp, eax);
    eax = MEM32(ebp + 0x20);
    eax = (uint32_t)(int32_t)SMEM16(eax);
    PUSH32(esp, eax);
    PUSH32(esp, MEM32(ebx));
    eax = ebp + -25940;
    PUSH32(esp, eax);
    eax = ebp + -340;
    PUSH32(esp, eax);
    PUSH32(esp, 0); sub_0046933E(); /* call 0x0046933E */

loc_0046B555: ;
    goto loc_0046B592;

loc_0046B557: ;
    if (CMP_NE(LO16(eax), 1)) { sub_0046B739(); return; } /* jne: not equal / not zero */

loc_0046B561: ;
    ecx = MEM32(ebp + 0x2C);
    ecx = (uint32_t)(int32_t)SMEM16(ecx);
    ebx = MEM32(ebp + 0x1C);
    eax = 0; /* xor self */
    PUSH32(esp, eax);
    PUSH32(esp, eax);
    PUSH32(esp, MEM32(ebp + 0x30));
    PUSH32(esp, ecx);
    PUSH32(esp, eax);
    eax = MEM32(ebp + 0x20);
    eax = (uint32_t)(int32_t)SMEM16(eax);
    PUSH32(esp, eax);
    PUSH32(esp, MEM32(ebx));
    eax = ebp + -25940;
    PUSH32(esp, eax);
    eax = ebp + -340;
    PUSH32(esp, eax);
    PUSH32(esp, 0); sub_0046A9AC(); /* call 0x0046A9AC */

loc_0046B58F: ;
    esi = MEM32(ebp + 0x2C);

loc_0046B592: ;
    edi = (uint32_t)(int32_t)SMEM16(ebp + 0x24);
    edx = 0; /* xor self */
    edx++;
    eax = edi + -1;
    esp = esp + 0x24;
    (void)0; /* cmp eax, edx - flags set for next jcc */
    MEM32(ebp + -4) = edx;
    if (CMP_LE(eax, edx)) goto loc_0046B655; /* jle: less or equal (signed <=) */

loc_0046B5AA: ;
    ecx = MEM32(ebp + 0x28);
    ecx = ecx - MEM32(ebp + 0x2C);
    eax = MEM32(ebp + 0x20);
    esi = esi + 2;
    eax = eax - MEM32(ebp + 0x2C);
    MEM32(ebp + -12) = ecx;
    MEM32(ebp + -16) = eax;
    goto loc_0046B5CA;

loc_0046B5C1: ;
    edx = MEM32(ebp + -4);
    ecx = MEM32(ebp + -12);
    eax = MEM32(ebp + -16);

loc_0046B5CA: ;
    SET_LO16(ecx, MEM16(ecx + esi));
    if (CMP_NE(LO16(ecx), 2)) goto loc_0046B605; /* jne: not equal / not zero */

loc_0046B5D4: ;
    eax = (uint32_t)(int32_t)SMEM16(eax + esi);
    PUSH32(esp, 1);
    ecx = 0; /* xor self */
    SET_LO16(ecx, MEM16(esi));
    PUSH32(esp, 1);
    PUSH32(esp, MEM32(ebp + 0x30));
    PUSH32(esp, ecx);
    ecx = 0; /* xor self */
    SET_LO16(ecx, MEM16(esi + -2));
    PUSH32(esp, ecx);
    PUSH32(esp, eax);
    PUSH32(esp, MEM32(ebx + edx * 4));
    eax = ebp + -25940;
    PUSH32(esp, eax);
    eax = ebp + -340;
    PUSH32(esp, eax);
    PUSH32(esp, 0); sub_0046933E(); /* call 0x0046933E */

loc_0046B603: ;
    goto loc_0046B63E;

loc_0046B605: ;
    if (CMP_NE(LO16(ecx), 1)) { sub_0046B739(); return; } /* jne: not equal / not zero */

loc_0046B60F: ;
    eax = (uint32_t)(int32_t)SMEM16(eax + esi);
    PUSH32(esp, 1);
    ecx = 0; /* xor self */
    SET_LO16(ecx, MEM16(esi));
    PUSH32(esp, 1);
    PUSH32(esp, MEM32(ebp + 0x30));
    PUSH32(esp, ecx);
    ecx = 0; /* xor self */
    SET_LO16(ecx, MEM16(esi + -2));
    PUSH32(esp, ecx);
    PUSH32(esp, eax);
    PUSH32(esp, MEM32(ebx + edx * 4));
    eax = ebp + -25940;
    PUSH32(esp, eax);
    eax = ebp + -340;
    PUSH32(esp, eax);
    PUSH32(esp, 0); sub_0046A9AC(); /* call 0x0046A9AC */

loc_0046B63E: ;
    esp = esp + 0x24;
    MEM32(ebp + -4) = MEM32(ebp + -4) + 1;
    esi++;
    eax = edi + -1;
    esi++;
    if (CMP_L(MEM32(ebp + -4), eax)) goto loc_0046B5C1; /* jl: less (signed <) */

loc_0046B652: ;
    esi = MEM32(ebp + 0x2C);

loc_0046B655: ;
    eax = MEM32(ebp + 0x28);
    SET_LO16(eax, MEM16(eax + edi * 2 + -2));
    if (CMP_NE(LO16(eax), 2)) goto loc_0046B696; /* jne: not equal / not zero */

loc_0046B663: ;
    PUSH32(esp, 2);
    eax = 0; /* xor self */
    SET_LO16(eax, MEM16(esi + edi * 2 + -4));
    PUSH32(esp, 1);
    PUSH32(esp, MEM32(ebp + 0x30));
    PUSH32(esp, 1);
    PUSH32(esp, eax);
    eax = MEM32(ebp + 0x20);
    eax = (uint32_t)(int32_t)SMEM16(eax + edi * 2 + -2);
    PUSH32(esp, eax);
    PUSH32(esp, MEM32(ebx + edi * 4 + -4));
    eax = ebp + -25940;
    PUSH32(esp, eax);
    eax = ebp + -340;
    PUSH32(esp, eax);
    PUSH32(esp, 0); sub_0046933E(); /* call 0x0046933E */

loc_0046B694: ;
    goto loc_0046B6D1;

loc_0046B696: ;
    if (CMP_NE(LO16(eax), 1)) { sub_0046B739(); return; } /* jne: not equal / not zero */

loc_0046B6A0: ;
    PUSH32(esp, 2);
    eax = 0; /* xor self */
    SET_LO16(eax, MEM16(esi + edi * 2 + -4));
    PUSH32(esp, 1);
    PUSH32(esp, MEM32(ebp + 0x30));
    PUSH32(esp, 1);
    PUSH32(esp, eax);
    eax = MEM32(ebp + 0x20);
    eax = (uint32_t)(int32_t)SMEM16(eax + edi * 2 + -2);
    PUSH32(esp, eax);
    PUSH32(esp, MEM32(ebx + edi * 4 + -4));
    eax = ebp + -25940;
    PUSH32(esp, eax);
    eax = ebp + -340;
    PUSH32(esp, eax);
    PUSH32(esp, 0); sub_0046A9AC(); /* call 0x0046A9AC */

loc_0046B6D1: ;
    edx = MEM32(ebp + 0x30);
    ecx = edx + 0x88;
    fp_push(MEMF(ecx)); /* fld float */
    esp = esp + 0x24;
    _fpu_cmp = (fp_top() < fp_st1()) ? -1 : (fp_top() > fp_st1()) ? 1 : 0; /* fcomp dword ptr [0x648cf8] */
    /* fnstsw ax - store FPU status word */
    (void)0; /* test HI8(eax), 0x41 - flags set for next jcc */
    eax = MEM32(ebp + 0x18);
    if (TEST_NZ(HI8(eax), 0x41)) goto loc_0046B6F6; /* jne: not equal / not zero */

loc_0046B6EF: ;
    fp_push(MEMF(edx + 0x7C)); /* fld float */
    fp_st1() /= fp_top(); fp_pop(); /* fdiv */
    goto loc_0046B6F8;

loc_0046B6F6: ;
    fp_push(0.0); /* fldz */

loc_0046B6F8: ;
    ecx = MEM32(ebp + -20);
    MEMF(eax) = (float)fp_top(); fp_popp(); /* fstp */
    (void)0; /* test ecx, ecx - flags set for next jcc */
    ebx = MEM32(ebp + 0x14);
    if (CMP_LE(ecx & ecx, 0)) goto loc_0046B70A; /* jle: less or equal (signed <=) */

loc_0046B704: ;
    eax = 0; /* xor self */
    edi = ebx;
    { uint32_t _i; for (_i = 0; _i < ecx; _i++) MEM32(edi + _i*4) = eax; }
    edi += ecx * 4; ecx = 0; /* rep stosd */

loc_0046B70A: ;
    esi = 0; /* xor self */
    if (CMP_LE(MEM16(edx + 0x28), LO16(esi))) goto loc_0046B735; /* jle: less or equal (signed <=) */

loc_0046B712: ;
    ecx = edx + 0x2C;

loc_0046B715: ;
    if (CMP_L(MEM16(edx + esi * 2), 0)) goto loc_0046B729; /* jl: less (signed <) */

loc_0046B71C: ;
    eax = (uint32_t)(int32_t)SMEM16(edx + esi * 2);
    fp_push((double)SMEM32(ecx)); /* fild */
    eax = ebx + eax * 4;
    fp_st1() += fp_top(); fp_pop(); /* fadd */
    MEMF(eax) = (float)fp_top(); fp_popp(); /* fstp */

loc_0046B729: ;
    eax = (uint32_t)(int32_t)SMEM16(edx + 0x28);
    esi++;
    ecx = ecx + 4;
    if (CMP_L(esi, eax)) goto loc_0046B715; /* jl: less (signed <) */

loc_0046B735: ;
    eax = 0; /* xor self */
    g_seh_ebp = ebp; sub_0046B73E(); return; /* tail jmp 0x0046B73E */

    #undef fp_push
    #undef fp_pop
    #undef fp_popp
    #undef fp_top
    #undef fp_st1
}

/**
 * sub_0046B750
 * Original: 0x0046B750 - 0x0046BA22 (722 bytes, 189 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0046B750(void)
{
    uint32_t ebp;
    int _flags = 0; /* fallback flag var */
    float xmm0, xmm1, xmm2, xmm3, xmm4, xmm5, xmm6, xmm7;
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_0046B750: ;
    PUSH32(esp, ebx);
    PUSH32(esp, esi);
    PUSH32(esp, edi);
    PUSH32(esp, ebp);
    esi = MEM32(esp + 0x14);
    edi = MEM32(esp + 0x18);
    eax = MEM32(esp + 0x28);
    eax = eax << 3;
    edx = edi + eax * 2;
    ebp = MEM32(esp + 0x24);
    ebp = ebp << 3;
    ecx = MEM32(esp + 0x28);
    ebx = MEM32(esp + 0x20);
    (void)0; /* cmp ebx, 1 - flags set for next jcc */
    ebx = MEM32(esp + 0x1C);
    if (CMP_NE(ebx, 1)) { sub_0046BA22(); return; } /* jne: not equal / not zero */

loc_0046B782: ;
    if (TEST_NZ(esi, 0xF)) goto loc_0046B8E0; /* jne: not equal / not zero */

loc_0046B78E: ;
    edi = edi;

loc_0046B790: ;
    xmm0 = MEMF(ebx); /* movaps */
    xmm1 = MEMF(esi); /* movaps */
    /* mulps: xmm0 *= xmm1 (packed 4xfloat) */
    xmm2 = MEMF(ebx + 0x10); /* movaps */
    /* mulps: xmm1 *= xmm2 (packed 4xfloat) */
    xmm3 = MEMF(esi + 0x10); /* movaps */
    /* mulps: xmm2 *= xmm3 (packed 4xfloat) */
    /* mulps: xmm3 *= MEMF(ebx) (packed 4xfloat) */
    /* subps: xmm0 -= xmm2 (packed 4xfloat) */
    /* addps: xmm3 += xmm1 (packed 4xfloat) */
    xmm4 = MEMF(ebx + 0x20); /* movaps */
    xmm5 = MEMF(ebp + esi); /* movaps */
    /* mulps: xmm4 *= xmm5 (packed 4xfloat) */
    xmm6 = MEMF(ebx + 0x30); /* movaps */
    /* mulps: xmm5 *= xmm6 (packed 4xfloat) */
    xmm7 = MEMF(ebp + esi + 0x10); /* movaps */
    /* mulps: xmm6 *= xmm7 (packed 4xfloat) */
    /* mulps: xmm7 *= MEMF(ebx + 0x20) (packed 4xfloat) */
    /* subps: xmm4 -= xmm6 (packed 4xfloat) */
    /* addps: xmm7 += xmm5 (packed 4xfloat) */
    esi = esi + ebp * 2;
    /* TODO: prefetchnta byte ptr [ebp + esi] */
    /* TODO: prefetchnta byte ptr [esi + ebp*2] */
    /* TODO: prefetchnta byte ptr [ebx + 0x80] */
    /* TODO: prefetchnta byte ptr [ebx + 0xa0] */
    xmm2 = xmm0; /* movaps */
    /* unpcklps xmm0, xmm3 */
    /* unpckhps xmm2, xmm3 */
    xmm6 = xmm4; /* movaps */
    /* unpcklps xmm4, xmm7 */
    /* unpckhps xmm6, xmm7 */
    MEMD(edi) = xmm0; /* movlps */
    MEMD(edi + 8) = xmm4; /* movlps */
    MEMD(eax + edi) = xmm0; /* movhps */
    MEMD(eax + edi + 8) = xmm4; /* movhps */
    MEMD(edx) = xmm2; /* movlps */
    MEMD(edx + 8) = xmm6; /* movlps */
    MEMD(eax + edx) = xmm2; /* movhps */
    MEMD(eax + edx + 8) = xmm6; /* movhps */
    xmm0 = MEMF(ebx + 0x40); /* movaps */
    xmm1 = MEMF(esi); /* movaps */
    /* mulps: xmm0 *= xmm1 (packed 4xfloat) */
    xmm2 = MEMF(ebx + 0x50); /* movaps */
    /* mulps: xmm1 *= xmm2 (packed 4xfloat) */
    xmm3 = MEMF(esi + 0x10); /* movaps */
    /* mulps: xmm2 *= xmm3 (packed 4xfloat) */
    /* mulps: xmm3 *= MEMF(ebx + 0x40) (packed 4xfloat) */
    /* subps: xmm0 -= xmm2 (packed 4xfloat) */
    /* addps: xmm3 += xmm1 (packed 4xfloat) */
    xmm4 = MEMF(ebx + 0x60); /* movaps */
    xmm5 = MEMF(ebp + esi); /* movaps */
    /* mulps: xmm4 *= xmm5 (packed 4xfloat) */
    xmm6 = MEMF(ebx + 0x70); /* movaps */
    /* mulps: xmm5 *= xmm6 (packed 4xfloat) */
    xmm7 = MEMF(ebp + esi + 0x10); /* movaps */
    /* mulps: xmm6 *= xmm7 (packed 4xfloat) */
    /* mulps: xmm7 *= MEMF(ebx + 0x60) (packed 4xfloat) */
    /* subps: xmm4 -= xmm6 (packed 4xfloat) */
    /* addps: xmm7 += xmm5 (packed 4xfloat) */
    esi = esi + ebp * 2;
    /* TODO: prefetchnta byte ptr [ebp + esi] */
    /* TODO: prefetchnta byte ptr [esi + ebp*2] */
    /* TODO: prefetchnta byte ptr [ebx + 0xc0] */
    /* TODO: prefetchnta byte ptr [ebx + 0xe0] */
    xmm2 = xmm0; /* movaps */
    /* unpcklps xmm0, xmm3 */
    /* unpckhps xmm2, xmm3 */
    xmm6 = xmm4; /* movaps */
    /* unpcklps xmm4, xmm7 */
    /* unpckhps xmm6, xmm7 */
    MEMD(edi + 0x10) = xmm0; /* movlps */
    MEMD(edi + 0x18) = xmm4; /* movlps */
    MEMD(eax + edi + 0x10) = xmm0; /* movhps */
    MEMD(eax + edi + 0x18) = xmm4; /* movhps */
    MEMD(edx + 0x10) = xmm2; /* movlps */
    MEMD(edx + 0x18) = xmm6; /* movlps */
    MEMD(eax + edx + 0x10) = xmm2; /* movhps */
    MEMD(eax + edx + 0x18) = xmm6; /* movhps */
    ebx = ebx + 0x80;
    edi = edi + 0x20;
    edx = edx + 0x20;
    ecx = ecx - 4;
    if (CMP_G((uint32_t)ecx + (uint32_t)4, (uint32_t)4)) goto loc_0046B790; /* jg: greater (signed >) */

loc_0046B8CD: ;
    g_seh_ebp = ebp; sub_0046BCBD(); return; /* tail jmp 0x0046BCBD */

    /* nop */
    /* nop */

loc_0046B8E0: ;
    xmm0 = MEMF(ebx); /* movaps */
    xmm1 = MEMF(esi); /* movups */
    /* mulps: xmm0 *= xmm1 (packed 4xfloat) */
    xmm2 = MEMF(ebx + 0x10); /* movaps */
    /* mulps: xmm1 *= xmm2 (packed 4xfloat) */
    xmm3 = MEMF(esi + 0x10); /* movups */
    /* mulps: xmm2 *= xmm3 (packed 4xfloat) */
    /* mulps: xmm3 *= MEMF(ebx) (packed 4xfloat) */
    /* subps: xmm0 -= xmm2 (packed 4xfloat) */
    /* addps: xmm3 += xmm1 (packed 4xfloat) */
    xmm4 = MEMF(ebx + 0x20); /* movaps */
    xmm5 = MEMF(ebp + esi); /* movups */
    /* mulps: xmm4 *= xmm5 (packed 4xfloat) */
    xmm6 = MEMF(ebx + 0x30); /* movaps */
    /* mulps: xmm5 *= xmm6 (packed 4xfloat) */
    xmm7 = MEMF(ebp + esi + 0x10); /* movups */
    /* mulps: xmm6 *= xmm7 (packed 4xfloat) */
    /* mulps: xmm7 *= MEMF(ebx + 0x20) (packed 4xfloat) */
    /* subps: xmm4 -= xmm6 (packed 4xfloat) */
    /* addps: xmm7 += xmm5 (packed 4xfloat) */
    esi = esi + ebp * 2;
    /* TODO: prefetchnta byte ptr [ebp + esi] */
    /* TODO: prefetchnta byte ptr [esi + ebp*2] */
    /* TODO: prefetchnta byte ptr [ebx + 0x80] */
    /* TODO: prefetchnta byte ptr [ebx + 0xa0] */
    xmm2 = xmm0; /* movaps */
    /* unpcklps xmm0, xmm3 */
    /* unpckhps xmm2, xmm3 */
    xmm6 = xmm4; /* movaps */
    /* unpcklps xmm4, xmm7 */
    /* unpckhps xmm6, xmm7 */
    MEMD(edi) = xmm0; /* movlps */
    MEMD(edi + 8) = xmm4; /* movlps */
    MEMD(eax + edi) = xmm0; /* movhps */
    MEMD(eax + edi + 8) = xmm4; /* movhps */
    MEMD(edx) = xmm2; /* movlps */
    MEMD(edx + 8) = xmm6; /* movlps */
    MEMD(eax + edx) = xmm2; /* movhps */
    MEMD(eax + edx + 8) = xmm6; /* movhps */
    xmm0 = MEMF(ebx + 0x40); /* movaps */
    xmm1 = MEMF(esi); /* movups */
    /* mulps: xmm0 *= xmm1 (packed 4xfloat) */
    xmm2 = MEMF(ebx + 0x50); /* movaps */
    /* mulps: xmm1 *= xmm2 (packed 4xfloat) */
    xmm3 = MEMF(esi + 0x10); /* movups */
    /* mulps: xmm2 *= xmm3 (packed 4xfloat) */
    /* mulps: xmm3 *= MEMF(ebx + 0x40) (packed 4xfloat) */
    /* subps: xmm0 -= xmm2 (packed 4xfloat) */
    /* addps: xmm3 += xmm1 (packed 4xfloat) */
    xmm4 = MEMF(ebx + 0x60); /* movaps */
    xmm5 = MEMF(ebp + esi); /* movups */
    /* mulps: xmm4 *= xmm5 (packed 4xfloat) */
    xmm6 = MEMF(ebx + 0x70); /* movaps */
    /* mulps: xmm5 *= xmm6 (packed 4xfloat) */
    xmm7 = MEMF(ebp + esi + 0x10); /* movups */
    /* mulps: xmm6 *= xmm7 (packed 4xfloat) */
    /* mulps: xmm7 *= MEMF(ebx + 0x60) (packed 4xfloat) */
    /* subps: xmm4 -= xmm6 (packed 4xfloat) */
    /* addps: xmm7 += xmm5 (packed 4xfloat) */
    esi = esi + ebp * 2;
    /* TODO: prefetchnta byte ptr [ebp + esi] */
    /* TODO: prefetchnta byte ptr [esi + ebp*2] */
    /* TODO: prefetchnta byte ptr [ebx + 0xc0] */
    /* TODO: prefetchnta byte ptr [ebx + 0xe0] */
    xmm2 = xmm0; /* movaps */
    /* unpcklps xmm0, xmm3 */
    /* unpckhps xmm2, xmm3 */
    xmm6 = xmm4; /* movaps */
    /* unpcklps xmm4, xmm7 */
    /* unpckhps xmm6, xmm7 */
    MEMD(edi + 0x10) = xmm0; /* movlps */
    MEMD(edi + 0x18) = xmm4; /* movlps */
    MEMD(eax + edi + 0x10) = xmm0; /* movhps */
    MEMD(eax + edi + 0x18) = xmm4; /* movhps */
    MEMD(edx + 0x10) = xmm2; /* movlps */
    MEMD(edx + 0x18) = xmm6; /* movlps */
    MEMD(eax + edx + 0x10) = xmm2; /* movhps */
    MEMD(eax + edx + 0x18) = xmm6; /* movhps */
    ebx = ebx + 0x80;
    edi = edi + 0x20;
    edx = edx + 0x20;
    ecx = ecx - 4;
    if (CMP_G((uint32_t)ecx + (uint32_t)4, (uint32_t)4)) goto loc_0046B8E0; /* jg: greater (signed >) */

loc_0046BA1D: ;
    g_seh_ebp = ebp; sub_0046BCBD(); return; /* tail jmp 0x0046BCBD */

}

/**
 * sub_0046C2C0
 * Original: 0x0046C2C0 - 0x0046C46B (427 bytes, 113 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0046C2C0(void)
{
    uint32_t ebp;
    int _flags = 0; /* fallback flag var */
    float xmm0, xmm1, xmm2, xmm3, xmm4, xmm5, xmm6, xmm7;
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_0046C2C0: ;
    PUSH32(esp, esi);
    PUSH32(esp, edi);
    PUSH32(esp, ebp);
    esi = MEM32(esp + 0x10);
    edi = MEM32(esp + 0x14);
    eax = MEM32(esp + 0x1C);
    eax = eax << 3;
    edx = edi + eax * 2;
    ebp = MEM32(esp + 0x18);
    ebp = ebp << 3;
    ecx = MEM32(esp + 0x20);
    (void)0; /* cmp ecx, 1 - flags set for next jcc */
    ecx = MEM32(esp + 0x1C);
    if (CMP_NE(ecx, 1)) goto loc_0046C3B0; /* jne: not equal / not zero */

loc_0046C2ED: ;
    /* nop */

loc_0046C2F0: ;
    xmm0 = MEMD(edi); /* movlps */
    xmm1 = MEMD(edi + 0x10); /* movlps */
    /* unpcklps xmm0, xmm1 */
    xmm2 = MEMD(eax + edi); /* movlps */
    xmm3 = MEMD(eax + edi + 0x10); /* movlps */
    /* unpcklps xmm2, xmm3 */
    xmm4 = MEMD(edx); /* movlps */
    xmm5 = MEMD(edx + 0x10); /* movlps */
    /* unpcklps xmm4, xmm5 */
    xmm6 = MEMD(eax + edx); /* movlps */
    xmm7 = MEMD(eax + edx + 0x10); /* movlps */
    /* unpcklps xmm6, xmm7 */
    MEMD(esi) = xmm0; /* movlps */
    MEMD(esi + 8) = xmm2; /* movlps */
    MEMD(esi + 0x10) = xmm4; /* movlps */
    MEMD(esi + 0x18) = xmm6; /* movlps */
    MEMD(ebp + esi) = xmm0; /* movhps */
    MEMD(ebp + esi + 8) = xmm2; /* movhps */
    MEMD(ebp + esi + 0x10) = xmm4; /* movhps */
    MEMD(ebp + esi + 0x18) = xmm6; /* movhps */
    esi = esi + ebp * 2;
    xmm0 = MEMD(edi + 8); /* movlps */
    xmm1 = MEMD(edi + 0x18); /* movlps */
    /* unpcklps xmm0, xmm1 */
    xmm2 = MEMD(eax + edi + 8); /* movlps */
    xmm3 = MEMD(eax + edi + 0x18); /* movlps */
    /* unpcklps xmm2, xmm3 */
    xmm4 = MEMD(edx + 8); /* movlps */
    xmm5 = MEMD(edx + 0x18); /* movlps */
    /* unpcklps xmm4, xmm5 */
    xmm6 = MEMD(eax + edx + 8); /* movlps */
    xmm7 = MEMD(eax + edx + 0x18); /* movlps */
    /* unpcklps xmm6, xmm7 */
    MEMD(esi) = xmm0; /* movlps */
    MEMD(esi + 8) = xmm2; /* movlps */
    MEMD(esi + 0x10) = xmm4; /* movlps */
    MEMD(esi + 0x18) = xmm6; /* movlps */
    MEMD(ebp + esi) = xmm0; /* movhps */
    MEMD(ebp + esi + 8) = xmm2; /* movhps */
    MEMD(ebp + esi + 0x10) = xmm4; /* movhps */
    MEMD(ebp + esi + 0x18) = xmm6; /* movhps */
    esi = esi + ebp * 2;
    edi = edi + 0x20;
    edx = edx + 0x20;
    ecx = ecx - 4;
    if (CMP_G((uint32_t)ecx + (uint32_t)4, (uint32_t)4)) goto loc_0046C2F0; /* jg: greater (signed >) */

loc_0046C3A7: ;
    goto loc_0046C467;

    /* nop */

loc_0046C3B0: ;
    xmm0 = MEMD(edi); /* movlps */
    xmm1 = MEMD(eax + edi); /* movlps */
    /* unpcklps xmm0, xmm1 */
    xmm2 = MEMD(edx); /* movlps */
    xmm3 = MEMD(eax + edx); /* movlps */
    /* unpcklps xmm2, xmm3 */
    xmm4 = MEMD(edi + 0x10); /* movlps */
    xmm5 = MEMD(eax + edi + 0x10); /* movlps */
    /* unpcklps xmm4, xmm5 */
    xmm6 = MEMD(edx + 0x10); /* movlps */
    xmm7 = MEMD(eax + edx + 0x10); /* movlps */
    /* unpcklps xmm6, xmm7 */
    MEMD(esi) = xmm0; /* movlps */
    MEMD(esi + 8) = xmm2; /* movlps */
    MEMD(esi + 0x10) = xmm4; /* movlps */
    MEMD(esi + 0x18) = xmm6; /* movlps */
    MEMD(ebp + esi) = xmm0; /* movhps */
    MEMD(ebp + esi + 8) = xmm2; /* movhps */
    MEMD(ebp + esi + 0x10) = xmm4; /* movhps */
    MEMD(ebp + esi + 0x18) = xmm6; /* movhps */
    esi = esi + ebp * 2;
    xmm0 = MEMD(edi + 8); /* movlps */
    xmm1 = MEMD(eax + edi + 8); /* movlps */
    /* unpcklps xmm0, xmm1 */
    xmm2 = MEMD(edx + 8); /* movlps */
    xmm3 = MEMD(eax + edx + 8); /* movlps */
    /* unpcklps xmm2, xmm3 */
    xmm4 = MEMD(edi + 0x18); /* movlps */
    xmm5 = MEMD(eax + edi + 0x18); /* movlps */
    /* unpcklps xmm4, xmm5 */
    xmm6 = MEMD(edx + 0x18); /* movlps */
    xmm7 = MEMD(eax + edx + 0x18); /* movlps */
    /* unpcklps xmm6, xmm7 */
    MEMD(esi) = xmm0; /* movlps */
    MEMD(esi + 8) = xmm2; /* movlps */
    MEMD(esi + 0x10) = xmm4; /* movlps */
    MEMD(esi + 0x18) = xmm6; /* movlps */
    MEMD(ebp + esi) = xmm0; /* movhps */
    MEMD(ebp + esi + 8) = xmm2; /* movhps */
    MEMD(ebp + esi + 0x10) = xmm4; /* movhps */
    MEMD(ebp + esi + 0x18) = xmm6; /* movhps */
    esi = esi + ebp * 2;
    edi = edi + 0x20;
    edx = edx + 0x20;
    ecx = ecx - 4;
    if (CMP_G((uint32_t)ecx + (uint32_t)4, (uint32_t)4)) goto loc_0046C3B0; /* jg: greater (signed >) */

loc_0046C467: ;
    POP32(esp, ebp);
    POP32(esp, edi);
    POP32(esp, esi);
    esp += 4; return; /* ret */

}

/**
 * sub_0046C560
 * Original: 0x0046C560 - 0x0046C76F (527 bytes, 136 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0046C560(void)
{
    uint32_t ebp;
    int _flags = 0; /* fallback flag var */
    float xmm0, xmm1, xmm2, xmm3, xmm7;
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_0046C560: ;
    PUSH32(esp, esi);
    PUSH32(esp, edi);
    esi = MEM32(esp + 0xC);
    ecx = MEM32(esp + 0x10);
    edi = esi + ecx * 4;
    edx = MEM32(esp + 0x14);
    eax = MEM32(esp + 0x18);
    if (CMP_EQ(eax, 1)) { sub_0046C76F(); return; } /* je: equal / zero */

loc_0046C57E: ;
    eax = 0; /* xor self */
    if (TEST_NZ(esi, 0xF)) goto loc_0046C680; /* jne: not equal / not zero */

loc_0046C58C: ;
    /* nop */

loc_0046C590: ;
    /* TODO: prefetchnta byte ptr [eax + edx + 0x20] */
    /* TODO: prefetchnta byte ptr [eax + edi + 0x20] */
    xmm0 = MEMF(eax + edx); /* movaps */
    xmm1 = MEMF(eax + edi); /* movaps */
    /* mulps: xmm0 *= xmm1 (packed 4xfloat) */
    xmm2 = MEMF(eax + edx + 0x10); /* movaps */
    /* mulps: xmm1 *= xmm2 (packed 4xfloat) */
    xmm3 = MEMF(eax + edi + 0x10); /* movaps */
    /* mulps: xmm2 *= xmm3 (packed 4xfloat) */
    /* mulps: xmm3 *= MEMF(eax + edx) (packed 4xfloat) */
    /* subps: xmm0 -= xmm2 (packed 4xfloat) */
    /* addps: xmm3 += xmm1 (packed 4xfloat) */
    xmm1 = MEMF(eax + esi); /* movaps */
    /* subps: xmm1 -= xmm0 (packed 4xfloat) */
    /* addps: xmm0 += MEMF(eax + esi) (packed 4xfloat) */
    xmm2 = MEMF(eax + esi + 0x10); /* movaps */
    /* subps: xmm2 -= xmm3 (packed 4xfloat) */
    /* addps: xmm3 += MEMF(eax + esi + 0x10) (packed 4xfloat) */
    /* TODO: prefetchnta byte ptr [eax + esi + 0x40] */
    MEMF(eax + esi) = xmm0; /* movaps */
    MEMF(eax + esi + 0x10) = xmm3; /* movaps */
    MEMF(eax + edi) = xmm1; /* movaps */
    MEMF(eax + edi + 0x10) = xmm2; /* movaps */
    eax = eax + 0x20;
    ecx = ecx - 0x10;
    if (CMP_G((uint32_t)ecx + (uint32_t)0x10, (uint32_t)0x10)) goto loc_0046C590; /* jg: greater (signed >) */

loc_0046C5F6: ;
    ecx = MEM32(esp + 0x10);
    esi = esi + ecx * 2;
    edi = edi + ecx * 2;
    eax = 0; /* xor self */
    /* nop */
    /* nop */

loc_0046C610: ;
    /* TODO: prefetchnta byte ptr [eax + edx + 0x20] */
    /* TODO: prefetchnta byte ptr [eax + edi + 0x20] */
    xmm0 = MEMF(eax + edx + 0x10); /* movaps */
    xmm1 = MEMF(eax + edi); /* movaps */
    /* mulps: xmm0 *= xmm1 (packed 4xfloat) */
    xmm2 = MEMF(eax + edx); /* movaps */
    /* mulps: xmm1 *= xmm2 (packed 4xfloat) */
    xmm3 = MEMF(eax + edi + 0x10); /* movaps */
    /* mulps: xmm2 *= xmm3 (packed 4xfloat) */
    /* mulps: xmm3 *= MEMF(eax + edx + 0x10) (packed 4xfloat) */
    /* addps: xmm0 += xmm2 (packed 4xfloat) */
    /* subps: xmm3 -= xmm1 (packed 4xfloat) */
    xmm1 = MEMF(eax + esi); /* movaps */
    /* subps: xmm1 -= xmm0 (packed 4xfloat) */
    /* addps: xmm0 += MEMF(eax + esi) (packed 4xfloat) */
    xmm2 = MEMF(eax + esi + 0x10); /* movaps */
    /* subps: xmm2 -= xmm3 (packed 4xfloat) */
    /* addps: xmm3 += MEMF(eax + esi + 0x10) (packed 4xfloat) */
    /* TODO: prefetchnta byte ptr [eax + esi + 0x40] */
    MEMF(eax + esi) = xmm0; /* movaps */
    MEMF(eax + esi + 0x10) = xmm3; /* movaps */
    MEMF(eax + edi) = xmm1; /* movaps */
    MEMF(eax + edi + 0x10) = xmm2; /* movaps */
    eax = eax + 0x20;
    ecx = ecx - 0x10;
    if (CMP_G((uint32_t)ecx + (uint32_t)0x10, (uint32_t)0x10)) goto loc_0046C610; /* jg: greater (signed >) */

loc_0046C677: ;
    g_seh_ebp = ebp; sub_0046C99C(); return; /* tail jmp 0x0046C99C */

    /* nop */

loc_0046C680: ;
    /* TODO: prefetchnta byte ptr [eax + edx + 0x20] */
    /* TODO: prefetchnta byte ptr [eax + edi + 0x20] */
    xmm0 = MEMF(eax + edx); /* movaps */
    xmm1 = MEMF(eax + edi); /* movups */
    /* mulps: xmm0 *= xmm1 (packed 4xfloat) */
    xmm2 = MEMF(eax + edx + 0x10); /* movaps */
    /* mulps: xmm1 *= xmm2 (packed 4xfloat) */
    xmm3 = MEMF(eax + edi + 0x10); /* movups */
    /* mulps: xmm2 *= xmm3 (packed 4xfloat) */
    /* mulps: xmm3 *= MEMF(eax + edx) (packed 4xfloat) */
    /* subps: xmm0 -= xmm2 (packed 4xfloat) */
    /* addps: xmm3 += xmm1 (packed 4xfloat) */
    xmm1 = MEMF(eax + esi); /* movups */
    xmm7 = xmm1; /* movaps */
    /* subps: xmm1 -= xmm0 (packed 4xfloat) */
    /* addps: xmm0 += xmm7 (packed 4xfloat) */
    xmm2 = MEMF(eax + esi + 0x10); /* movups */
    xmm7 = xmm2; /* movaps */
    /* subps: xmm2 -= xmm3 (packed 4xfloat) */
    /* addps: xmm3 += xmm7 (packed 4xfloat) */
    /* TODO: prefetchnta byte ptr [eax + esi + 0x40] */
    MEMF(eax + esi) = xmm0; /* movups */
    MEMF(eax + esi + 0x10) = xmm3; /* movups */
    MEMF(eax + edi) = xmm1; /* movups */
    MEMF(eax + edi + 0x10) = xmm2; /* movups */
    eax = eax + 0x20;
    ecx = ecx - 0x10;
    if (CMP_G((uint32_t)ecx + (uint32_t)0x10, (uint32_t)0x10)) goto loc_0046C680; /* jg: greater (signed >) */

loc_0046C6E9: ;
    ecx = MEM32(esp + 0x10);
    esi = esi + ecx * 2;
    edi = edi + ecx * 2;
    eax = 0; /* xor self */
    /* nop */
    /* nop */

loc_0046C700: ;
    /* TODO: prefetchnta byte ptr [eax + edx + 0x20] */
    /* TODO: prefetchnta byte ptr [eax + edi + 0x20] */
    xmm0 = MEMF(eax + edx + 0x10); /* movaps */
    xmm1 = MEMF(eax + edi); /* movups */
    /* mulps: xmm0 *= xmm1 (packed 4xfloat) */
    xmm2 = MEMF(eax + edx); /* movaps */
    /* mulps: xmm1 *= xmm2 (packed 4xfloat) */
    xmm3 = MEMF(eax + edi + 0x10); /* movups */
    /* mulps: xmm2 *= xmm3 (packed 4xfloat) */
    /* mulps: xmm3 *= MEMF(eax + edx + 0x10) (packed 4xfloat) */
    /* addps: xmm0 += xmm2 (packed 4xfloat) */
    /* subps: xmm3 -= xmm1 (packed 4xfloat) */
    xmm1 = MEMF(eax + esi); /* movups */
    xmm7 = xmm1; /* movaps */
    /* subps: xmm1 -= xmm0 (packed 4xfloat) */
    /* addps: xmm0 += xmm7 (packed 4xfloat) */
    xmm2 = MEMF(eax + esi + 0x10); /* movups */
    xmm7 = xmm2; /* movaps */
    /* subps: xmm2 -= xmm3 (packed 4xfloat) */
    /* addps: xmm3 += xmm7 (packed 4xfloat) */
    /* TODO: prefetchnta byte ptr [eax + esi + 0x40] */
    MEMF(eax + esi) = xmm0; /* movups */
    MEMF(eax + esi + 0x10) = xmm3; /* movups */
    MEMF(eax + edi) = xmm1; /* movups */
    MEMF(eax + edi + 0x10) = xmm2; /* movups */
    eax = eax + 0x20;
    ecx = ecx - 0x10;
    if (CMP_G((uint32_t)ecx + (uint32_t)0x10, (uint32_t)0x10)) goto loc_0046C700; /* jg: greater (signed >) */

loc_0046C76A: ;
    g_seh_ebp = ebp; sub_0046C99C(); return; /* tail jmp 0x0046C99C */

}

/**
 * sub_0046C9A0
 * Original: 0x0046C9A0 - 0x0046CBAF (527 bytes, 136 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0046C9A0(void)
{
    uint32_t ebp;
    int _flags = 0; /* fallback flag var */
    float xmm0, xmm1, xmm2, xmm3, xmm7;
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_0046C9A0: ;
    PUSH32(esp, esi);
    PUSH32(esp, edi);
    esi = MEM32(esp + 0xC);
    ecx = MEM32(esp + 0x10);
    edi = esi + ecx * 4;
    edx = MEM32(esp + 0x14);
    eax = MEM32(esp + 0x18);
    if (CMP_EQ(eax, 1)) { sub_0046CBAF(); return; } /* je: equal / zero */

loc_0046C9BE: ;
    eax = 0; /* xor self */
    if (TEST_NZ(esi, 0xF)) goto loc_0046CAC0; /* jne: not equal / not zero */

loc_0046C9CC: ;
    /* nop */

loc_0046C9D0: ;
    /* TODO: prefetchnta byte ptr [eax + edx + 0x20] */
    /* TODO: prefetchnta byte ptr [eax + edi + 0x20] */
    xmm0 = MEMF(eax + edx); /* movaps */
    xmm1 = MEMF(eax + edi); /* movaps */
    /* mulps: xmm0 *= xmm1 (packed 4xfloat) */
    xmm2 = MEMF(eax + edx + 0x10); /* movaps */
    /* mulps: xmm1 *= xmm2 (packed 4xfloat) */
    xmm3 = MEMF(eax + edi + 0x10); /* movaps */
    /* mulps: xmm2 *= xmm3 (packed 4xfloat) */
    /* mulps: xmm3 *= MEMF(eax + edx) (packed 4xfloat) */
    /* addps: xmm0 += xmm2 (packed 4xfloat) */
    /* subps: xmm3 -= xmm1 (packed 4xfloat) */
    xmm1 = MEMF(eax + esi); /* movaps */
    /* subps: xmm1 -= xmm0 (packed 4xfloat) */
    /* addps: xmm0 += MEMF(eax + esi) (packed 4xfloat) */
    xmm2 = MEMF(eax + esi + 0x10); /* movaps */
    /* subps: xmm2 -= xmm3 (packed 4xfloat) */
    /* addps: xmm3 += MEMF(eax + esi + 0x10) (packed 4xfloat) */
    /* TODO: prefetchnta byte ptr [eax + esi + 0x40] */
    MEMF(eax + esi) = xmm0; /* movaps */
    MEMF(eax + esi + 0x10) = xmm3; /* movaps */
    MEMF(eax + edi) = xmm1; /* movaps */
    MEMF(eax + edi + 0x10) = xmm2; /* movaps */
    eax = eax + 0x20;
    ecx = ecx - 0x10;
    if (CMP_G((uint32_t)ecx + (uint32_t)0x10, (uint32_t)0x10)) goto loc_0046C9D0; /* jg: greater (signed >) */

loc_0046CA36: ;
    ecx = MEM32(esp + 0x10);
    esi = esi + ecx * 2;
    edi = edi + ecx * 2;
    eax = 0; /* xor self */
    /* nop */
    /* nop */

loc_0046CA50: ;
    /* TODO: prefetchnta byte ptr [eax + edx + 0x20] */
    /* TODO: prefetchnta byte ptr [eax + edi + 0x20] */
    xmm0 = MEMF(eax + edx + 0x10); /* movaps */
    xmm1 = MEMF(eax + edi); /* movaps */
    /* mulps: xmm0 *= xmm1 (packed 4xfloat) */
    xmm2 = MEMF(eax + edx); /* movaps */
    /* mulps: xmm1 *= xmm2 (packed 4xfloat) */
    xmm3 = MEMF(eax + edi + 0x10); /* movaps */
    /* mulps: xmm2 *= xmm3 (packed 4xfloat) */
    /* mulps: xmm3 *= MEMF(eax + edx + 0x10) (packed 4xfloat) */
    /* subps: xmm0 -= xmm2 (packed 4xfloat) */
    /* addps: xmm3 += xmm1 (packed 4xfloat) */
    xmm1 = MEMF(eax + esi); /* movaps */
    /* subps: xmm1 -= xmm0 (packed 4xfloat) */
    /* addps: xmm0 += MEMF(eax + esi) (packed 4xfloat) */
    xmm2 = MEMF(eax + esi + 0x10); /* movaps */
    /* subps: xmm2 -= xmm3 (packed 4xfloat) */
    /* addps: xmm3 += MEMF(eax + esi + 0x10) (packed 4xfloat) */
    /* TODO: prefetchnta byte ptr [eax + esi + 0x40] */
    MEMF(eax + esi) = xmm0; /* movaps */
    MEMF(eax + esi + 0x10) = xmm3; /* movaps */
    MEMF(eax + edi) = xmm1; /* movaps */
    MEMF(eax + edi + 0x10) = xmm2; /* movaps */
    eax = eax + 0x20;
    ecx = ecx - 0x10;
    if (CMP_G((uint32_t)ecx + (uint32_t)0x10, (uint32_t)0x10)) goto loc_0046CA50; /* jg: greater (signed >) */

loc_0046CAB7: ;
    g_seh_ebp = ebp; sub_0046CDDC(); return; /* tail jmp 0x0046CDDC */

    /* nop */

loc_0046CAC0: ;
    /* TODO: prefetchnta byte ptr [eax + edx + 0x20] */
    /* TODO: prefetchnta byte ptr [eax + edi + 0x20] */
    xmm0 = MEMF(eax + edx); /* movaps */
    xmm1 = MEMF(eax + edi); /* movups */
    /* mulps: xmm0 *= xmm1 (packed 4xfloat) */
    xmm2 = MEMF(eax + edx + 0x10); /* movaps */
    /* mulps: xmm1 *= xmm2 (packed 4xfloat) */
    xmm3 = MEMF(eax + edi + 0x10); /* movups */
    /* mulps: xmm2 *= xmm3 (packed 4xfloat) */
    /* mulps: xmm3 *= MEMF(eax + edx) (packed 4xfloat) */
    /* addps: xmm0 += xmm2 (packed 4xfloat) */
    /* subps: xmm3 -= xmm1 (packed 4xfloat) */
    xmm1 = MEMF(eax + esi); /* movups */
    xmm7 = xmm1; /* movaps */
    /* subps: xmm1 -= xmm0 (packed 4xfloat) */
    /* addps: xmm0 += xmm7 (packed 4xfloat) */
    xmm2 = MEMF(eax + esi + 0x10); /* movups */
    xmm7 = xmm2; /* movaps */
    /* subps: xmm2 -= xmm3 (packed 4xfloat) */
    /* addps: xmm3 += xmm7 (packed 4xfloat) */
    /* TODO: prefetchnta byte ptr [eax + esi + 0x40] */
    MEMF(eax + esi) = xmm0; /* movups */
    MEMF(eax + esi + 0x10) = xmm3; /* movups */
    MEMF(eax + edi) = xmm1; /* movups */
    MEMF(eax + edi + 0x10) = xmm2; /* movups */
    eax = eax + 0x20;
    ecx = ecx - 0x10;
    if (CMP_G((uint32_t)ecx + (uint32_t)0x10, (uint32_t)0x10)) goto loc_0046CAC0; /* jg: greater (signed >) */

loc_0046CB29: ;
    ecx = MEM32(esp + 0x10);
    esi = esi + ecx * 2;
    edi = edi + ecx * 2;
    eax = 0; /* xor self */
    /* nop */
    /* nop */

loc_0046CB40: ;
    /* TODO: prefetchnta byte ptr [eax + edx + 0x20] */
    /* TODO: prefetchnta byte ptr [eax + edi + 0x20] */
    xmm0 = MEMF(eax + edx + 0x10); /* movaps */
    xmm1 = MEMF(eax + edi); /* movups */
    /* mulps: xmm0 *= xmm1 (packed 4xfloat) */
    xmm2 = MEMF(eax + edx); /* movaps */
    /* mulps: xmm1 *= xmm2 (packed 4xfloat) */
    xmm3 = MEMF(eax + edi + 0x10); /* movups */
    /* mulps: xmm2 *= xmm3 (packed 4xfloat) */
    /* mulps: xmm3 *= MEMF(eax + edx + 0x10) (packed 4xfloat) */
    /* subps: xmm0 -= xmm2 (packed 4xfloat) */
    /* addps: xmm3 += xmm1 (packed 4xfloat) */
    xmm1 = MEMF(eax + esi); /* movups */
    xmm7 = xmm1; /* movaps */
    /* subps: xmm1 -= xmm0 (packed 4xfloat) */
    /* addps: xmm0 += xmm7 (packed 4xfloat) */
    xmm2 = MEMF(eax + esi + 0x10); /* movups */
    xmm7 = xmm2; /* movaps */
    /* subps: xmm2 -= xmm3 (packed 4xfloat) */
    /* addps: xmm3 += xmm7 (packed 4xfloat) */
    /* TODO: prefetchnta byte ptr [eax + esi + 0x40] */
    MEMF(eax + esi) = xmm0; /* movups */
    MEMF(eax + esi + 0x10) = xmm3; /* movups */
    MEMF(eax + edi) = xmm1; /* movups */
    MEMF(eax + edi + 0x10) = xmm2; /* movups */
    eax = eax + 0x20;
    ecx = ecx - 0x10;
    if (CMP_G((uint32_t)ecx + (uint32_t)0x10, (uint32_t)0x10)) goto loc_0046CB40; /* jg: greater (signed >) */

loc_0046CBAA: ;
    g_seh_ebp = ebp; sub_0046CDDC(); return; /* tail jmp 0x0046CDDC */

}

/**
 * sub_0046D280
 * Original: 0x0046D280 - 0x0046D35A (218 bytes, 66 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0046D280(void)
{
    int _flags = 0; /* fallback flag var */
    float xmm0, xmm1, xmm2, xmm3;

loc_0046D280: ;
    PUSH32(esp, esi);
    PUSH32(esp, edi);
    esi = MEM32(esp + 0xC);
    eax = MEM32(esp + 0x10);
    edi = MEM32(esp + 0x14);
    xmm0 = MEMF(esi); /* movss */
    /* shufps xmm0, xmm0, 0 */
    if (TEST_NZ(esi, 3)) { sub_0046D35A(); return; } /* jne: not equal / not zero */

loc_0046D2A2: ;
    if (TEST_Z(esi, 0xC)) goto loc_0046D2C0; /* je: equal / zero */

loc_0046D2AA: ;
    xmm0 = (xmm0 < MEMF(esi) ? xmm0 : MEMF(esi)); /* minss */
    esi = esi + 4;
    eax--;
    if (((int32_t)eax <= 0)) goto loc_0046D353; /* jle: less or equal (signed <=) */

loc_0046D2B8: ;
    if (TEST_NZ(esi, 0xC)) goto loc_0046D2AA; /* jne: not equal / not zero */

loc_0046D2C0: ;
    if (TEST_Z(esi, 0x10)) goto loc_0046D2DC; /* je: equal / zero */

loc_0046D2C8: ;
    if (CMP_L(eax, 4)) goto loc_0046D349; /* jl: less (signed <) */

loc_0046D2D1: ;
    /* minps xmm0, MEMF(esi) (packed 4xfloat) */
    esi = esi + 0x10;
    eax = eax - 4;
    if (CMP_LE((uint32_t)eax + (uint32_t)4, (uint32_t)4)) goto loc_0046D331; /* jle: less or equal (signed <=) */

loc_0046D2DC: ;
    eax = eax - 0x10;
    if (CMP_L((uint32_t)eax + (uint32_t)0x10, (uint32_t)0x10)) goto loc_0046D31E; /* jl: less (signed <) */

loc_0046D2E1: ;
    xmm1 = xmm0; /* movaps */
    xmm2 = xmm0; /* movaps */
    xmm3 = xmm0; /* movaps */
    goto loc_0046D2F0;

    /* nop */

loc_0046D2F0: ;
    /* minps xmm0, MEMF(esi) (packed 4xfloat) */
    /* minps xmm1, MEMF(esi + 0x10) (packed 4xfloat) */
    /* TODO: prefetcht0 byte ptr [esi + 0x80] */
    /* minps xmm2, MEMF(esi + 0x20) (packed 4xfloat) */
    /* minps xmm3, MEMF(esi + 0x30) (packed 4xfloat) */
    /* TODO: prefetcht0 byte ptr [esi + 0xa0] */
    esi = esi + 0x40;
    eax = eax - 0x10;
    if (CMP_GE((uint32_t)eax + (uint32_t)0x10, (uint32_t)0x10)) goto loc_0046D2F0; /* jge: greater or equal (signed >=) */

loc_0046D315: ;
    /* minps xmm0, xmm2 (packed 4xfloat) */
    /* minps xmm1, xmm3 (packed 4xfloat) */
    /* minps xmm0, xmm1 (packed 4xfloat) */

loc_0046D31E: ;
    eax = eax + 0xC;
    if (((int32_t)eax < 0)) goto loc_0046D32E; /* jl: less (signed <) */

loc_0046D323: ;
    /* minps xmm0, MEMF(esi) (packed 4xfloat) */
    esi = esi + 0x10;
    eax = eax - 4;
    if (CMP_GE((uint32_t)eax + (uint32_t)4, (uint32_t)4)) goto loc_0046D323; /* jge: greater or equal (signed >=) */

loc_0046D32E: ;
    eax = eax + 4;

loc_0046D331: ;
    xmm1 = xmm0; /* movaps */
    /* shufps xmm0, xmm0, 0xee */
    /* minps xmm1, xmm0 (packed 4xfloat) */
    xmm0 = xmm1; /* movss */
    /* shufps xmm1, xmm1, 0x55 */
    xmm0 = (xmm0 < xmm1 ? xmm0 : xmm1); /* minss */
    if (((int32_t)eax <= 0)) goto loc_0046D353; /* jle: less or equal (signed <=) */

loc_0046D349: ;
    xmm0 = (xmm0 < MEMF(esi) ? xmm0 : MEMF(esi)); /* minss */
    esi = esi + 4;
    eax--;
    if (((int32_t)eax > 0)) goto loc_0046D349; /* jg: greater (signed >) */

loc_0046D353: ;
    MEMF(edi) = xmm0; /* movss */
    POP32(esp, edi);
    POP32(esp, esi);
    esp += 4; return; /* ret */

}

/**
 * sub_0046D640
 * Original: 0x0046D640 - 0x0046D71A (218 bytes, 66 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0046D640(void)
{
    int _flags = 0; /* fallback flag var */
    float xmm0, xmm1, xmm2, xmm3;

loc_0046D640: ;
    PUSH32(esp, esi);
    PUSH32(esp, edi);
    esi = MEM32(esp + 0xC);
    eax = MEM32(esp + 0x10);
    edi = MEM32(esp + 0x14);
    xmm0 = MEMF(esi); /* movss */
    /* shufps xmm0, xmm0, 0 */
    if (TEST_NZ(esi, 3)) { sub_0046D71A(); return; } /* jne: not equal / not zero */

loc_0046D662: ;
    if (TEST_Z(esi, 0xC)) goto loc_0046D680; /* je: equal / zero */

loc_0046D66A: ;
    xmm0 = (xmm0 > MEMF(esi) ? xmm0 : MEMF(esi)); /* maxss */
    esi = esi + 4;
    eax--;
    if (((int32_t)eax <= 0)) goto loc_0046D713; /* jle: less or equal (signed <=) */

loc_0046D678: ;
    if (TEST_NZ(esi, 0xC)) goto loc_0046D66A; /* jne: not equal / not zero */

loc_0046D680: ;
    if (TEST_Z(esi, 0x10)) goto loc_0046D69C; /* je: equal / zero */

loc_0046D688: ;
    if (CMP_L(eax, 4)) goto loc_0046D709; /* jl: less (signed <) */

loc_0046D691: ;
    /* maxps xmm0, MEMF(esi) (packed 4xfloat) */
    esi = esi + 0x10;
    eax = eax - 4;
    if (CMP_LE((uint32_t)eax + (uint32_t)4, (uint32_t)4)) goto loc_0046D6F1; /* jle: less or equal (signed <=) */

loc_0046D69C: ;
    eax = eax - 0x10;
    if (CMP_L((uint32_t)eax + (uint32_t)0x10, (uint32_t)0x10)) goto loc_0046D6DE; /* jl: less (signed <) */

loc_0046D6A1: ;
    xmm1 = xmm0; /* movaps */
    xmm2 = xmm0; /* movaps */
    xmm3 = xmm0; /* movaps */
    goto loc_0046D6B0;

    /* nop */

loc_0046D6B0: ;
    /* maxps xmm0, MEMF(esi) (packed 4xfloat) */
    /* maxps xmm1, MEMF(esi + 0x10) (packed 4xfloat) */
    /* TODO: prefetcht0 byte ptr [esi + 0x80] */
    /* maxps xmm2, MEMF(esi + 0x20) (packed 4xfloat) */
    /* maxps xmm3, MEMF(esi + 0x30) (packed 4xfloat) */
    /* TODO: prefetcht0 byte ptr [esi + 0xa0] */
    esi = esi + 0x40;
    eax = eax - 0x10;
    if (CMP_GE((uint32_t)eax + (uint32_t)0x10, (uint32_t)0x10)) goto loc_0046D6B0; /* jge: greater or equal (signed >=) */

loc_0046D6D5: ;
    /* maxps xmm0, xmm2 (packed 4xfloat) */
    /* maxps xmm1, xmm3 (packed 4xfloat) */
    /* maxps xmm0, xmm1 (packed 4xfloat) */

loc_0046D6DE: ;
    eax = eax + 0xC;
    if (((int32_t)eax < 0)) goto loc_0046D6EE; /* jl: less (signed <) */

loc_0046D6E3: ;
    /* maxps xmm0, MEMF(esi) (packed 4xfloat) */
    esi = esi + 0x10;
    eax = eax - 4;
    if (CMP_GE((uint32_t)eax + (uint32_t)4, (uint32_t)4)) goto loc_0046D6E3; /* jge: greater or equal (signed >=) */

loc_0046D6EE: ;
    eax = eax + 4;

loc_0046D6F1: ;
    xmm1 = xmm0; /* movaps */
    /* shufps xmm0, xmm0, 0xee */
    /* maxps xmm1, xmm0 (packed 4xfloat) */
    xmm0 = xmm1; /* movss */
    /* shufps xmm1, xmm1, 0x55 */
    xmm0 = (xmm0 > xmm1 ? xmm0 : xmm1); /* maxss */
    if (((int32_t)eax <= 0)) goto loc_0046D713; /* jle: less or equal (signed <=) */

loc_0046D709: ;
    xmm0 = (xmm0 > MEMF(esi) ? xmm0 : MEMF(esi)); /* maxss */
    esi = esi + 4;
    eax--;
    if (((int32_t)eax > 0)) goto loc_0046D709; /* jg: greater (signed >) */

loc_0046D713: ;
    MEMF(edi) = xmm0; /* movss */
    POP32(esp, edi);
    POP32(esp, esi);
    esp += 4; return; /* ret */

}

/**
 * sub_0046DA00
 * Original: 0x0046DA00 - 0x0046DA4D (77 bytes, 25 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0046DA00(void)
{

loc_0046DA00: ;
    edx = MEM32(esp + 4);
    ecx = MEM32(edx);
    eax = ecx;
    eax = (uint32_t)((int32_t)eax >> 0x10);
    eax = (uint32_t)((int32_t)eax * (int32_t)0x41A7);
    ecx = ecx & 0xFFFF;
    ecx = (uint32_t)((int32_t)ecx * (int32_t)0x41A7);
    PUSH32(esp, esi);
    esi = eax;
    esi = esi & 0x7FFF;
    esi = esi << 0x10;
    ecx = ecx + esi;
    eax = eax >> 0xF;
    esi = ecx;
    esi = esi >> 0x1F;
    eax = eax + esi;
    ecx = ecx & 0x7FFFFFFF;
    eax = eax + ecx;
    ecx = eax;
    eax = eax >> 0x1F;
    eax = eax + ecx;
    eax = eax & 0x7FFFFFFF;
    MEM32(edx) = eax;
    POP32(esp, esi);
    esp += 4; return; /* ret */

}

/**
 * sub_0046DA64
 * Original: 0x0046DA64 - 0x0046DA6A (6 bytes, 1 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0046DA64(void)
{
    uint32_t ebp;
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_0046DA64: ;
    g_seh_ebp = ebp; RECOMP_ITAIL(MEM32(0x561070)); return; /* indirect tail jmp */

}

/**
 * sub_0046DA6A
 * Original: 0x0046DA6A - 0x0046DA70 (6 bytes, 1 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0046DA6A(void)
{
    uint32_t ebp;
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_0046DA6A: ;
    g_seh_ebp = ebp; RECOMP_ITAIL(MEM32(0x561090)); return; /* indirect tail jmp */

}

/**
 * sub_0046DA70
 * Original: 0x0046DA70 - 0x0046DA76 (6 bytes, 1 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0046DA70(void)
{
    uint32_t ebp;
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_0046DA70: ;
    g_seh_ebp = ebp; RECOMP_ITAIL(MEM32(0x561098)); return; /* indirect tail jmp */

}

/**
 * sub_0046DA76
 * Original: 0x0046DA76 - 0x0046DA7C (6 bytes, 1 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0046DA76(void)
{
    uint32_t ebp;
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_0046DA76: ;
    g_seh_ebp = ebp; RECOMP_ITAIL(MEM32(0x56109C)); return; /* indirect tail jmp */

}

/**
 * sub_0046DA7C
 * Original: 0x0046DA7C - 0x0046DA82 (6 bytes, 1 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0046DA7C(void)
{
    uint32_t ebp;
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_0046DA7C: ;
    g_seh_ebp = ebp; RECOMP_ITAIL(MEM32(0x5610A0)); return; /* indirect tail jmp */

}

/**
 * sub_0046DA82
 * Original: 0x0046DA82 - 0x0046DA88 (6 bytes, 1 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0046DA82(void)
{
    uint32_t ebp;
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_0046DA82: ;
    g_seh_ebp = ebp; RECOMP_ITAIL(MEM32(0x561180)); return; /* indirect tail jmp */

}

/**
 * sub_0046DA88
 * Original: 0x0046DA88 - 0x0046DA8E (6 bytes, 1 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0046DA88(void)
{
    uint32_t ebp;
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_0046DA88: ;
    g_seh_ebp = ebp; RECOMP_ITAIL(MEM32(0x561194)); return; /* indirect tail jmp */

}

/**
 * sub_0046DA8E
 * Original: 0x0046DA8E - 0x0046DA94 (6 bytes, 1 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0046DA8E(void)
{
    uint32_t ebp;
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_0046DA8E: ;
    g_seh_ebp = ebp; RECOMP_ITAIL(MEM32(0x561198)); return; /* indirect tail jmp */

}

/**
 * sub_0046DA94
 * Original: 0x0046DA94 - 0x0046DA9A (6 bytes, 1 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0046DA94(void)
{
    uint32_t ebp;
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_0046DA94: ;
    g_seh_ebp = ebp; RECOMP_ITAIL(MEM32(0x56119C)); return; /* indirect tail jmp */

}

/**
 * sub_0046DA9A
 * Original: 0x0046DA9A - 0x0046DAA0 (6 bytes, 1 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0046DA9A(void)
{
    uint32_t ebp;
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_0046DA9A: ;
    g_seh_ebp = ebp; RECOMP_ITAIL(MEM32(0x5611A0)); return; /* indirect tail jmp */

}

/**
 * sub_0046DAA0
 * Original: 0x0046DAA0 - 0x0046DAA6 (6 bytes, 1 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0046DAA0(void)
{
    uint32_t ebp;
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_0046DAA0: ;
    g_seh_ebp = ebp; RECOMP_ITAIL(MEM32(0x5611A4)); return; /* indirect tail jmp */

}

/**
 * sub_0046DAA6
 * Original: 0x0046DAA6 - 0x0046DAAC (6 bytes, 1 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0046DAA6(void)
{
    uint32_t ebp;
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_0046DAA6: ;
    g_seh_ebp = ebp; RECOMP_ITAIL(MEM32(0x5611A8)); return; /* indirect tail jmp */

}

/**
 * sub_0046DAAC
 * Original: 0x0046DAAC - 0x0046DAB2 (6 bytes, 1 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0046DAAC(void)
{
    uint32_t ebp;
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_0046DAAC: ;
    g_seh_ebp = ebp; RECOMP_ITAIL(MEM32(0x5611C0)); return; /* indirect tail jmp */

}

/**
 * sub_0046DAB2
 * Original: 0x0046DAB2 - 0x0046DAB7 (5 bytes, 1 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0046DAB2(void)
{
    uint32_t ebp;
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_0046DAB2: ;
    g_seh_ebp = ebp; sub_002AF3F0(); return; /* tail jmp 0x002AF3F0 */

}

/**
 * sub_0046DAB7
 * Original: 0x0046DAB7 - 0x0046DAF7 (64 bytes, 17 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0046DAB7(void)
{
    uint32_t ebp;
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_0046DAB7: ;
    eax = 0x47F088;
    PUSH32(esp, 0); sub_00472094(); /* call 0x00472094 */

loc_0046DAC1: ;
    esp = esp - 0x44;
    PUSH32(esp, 0x586148);
    ecx = ebp + -40;
    PUSH32(esp, 0); sub_00013C90(); /* call 0x00013C90 */

loc_0046DAD1: ;
    MEM32(ebp + -4) = MEM32(ebp + -4) & 0;
    eax = ebp + -40;
    PUSH32(esp, eax);
    ecx = ebp + -80;
    PUSH32(esp, 0); sub_00014350(); /* call 0x00014350 */

loc_0046DAE1: ;
    PUSH32(esp, 0x64B604);
    eax = ebp + -80;
    PUSH32(esp, eax);
    MEM32(ebp + -80) = 0x5AC68C;
    PUSH32(esp, 0); sub_004720B3(); /* call 0x004720B3 */

loc_0046DAF6: ;
    __debugbreak(); /* int3 */

}

/**
 * sub_0046DAF7
 * Original: 0x0046DAF7 - 0x0046DB37 (64 bytes, 17 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0046DAF7(void)
{
    uint32_t ebp;
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_0046DAF7: ;
    eax = 0x47F088;
    PUSH32(esp, 0); sub_00472094(); /* call 0x00472094 */

loc_0046DB01: ;
    esp = esp - 0x44;
    PUSH32(esp, 0x586160);
    ecx = ebp + -40;
    PUSH32(esp, 0); sub_00013C90(); /* call 0x00013C90 */

loc_0046DB11: ;
    MEM32(ebp + -4) = MEM32(ebp + -4) & 0;
    eax = ebp + -40;
    PUSH32(esp, eax);
    ecx = ebp + -80;
    PUSH32(esp, 0); sub_00014350(); /* call 0x00014350 */

loc_0046DB21: ;
    PUSH32(esp, 0x64B640);
    eax = ebp + -80;
    PUSH32(esp, eax);
    MEM32(ebp + -80) = 0x5AC694;
    PUSH32(esp, 0); sub_004720B3(); /* call 0x004720B3 */

loc_0046DB36: ;
    __debugbreak(); /* int3 */

}

/**
 * sub_0046DB37
 * Original: 0x0046DB37 - 0x0046DB40 (9 bytes, 5 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0046DB37(void)
{
    uint32_t ebp;
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_0046DB37: ;
    PUSH32(esp, esi);
    PUSH32(esp, edi);
    edi = ecx;
    esi = MEM32(edi + 0x20);
    g_seh_ebp = ebp; sub_0046DB50(); return; /* tail jmp 0x0046DB50 */

}

/**
 * sub_0046DB59
 * Original: 0x0046DB59 - 0x0046DB9B (66 bytes, 30 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0046DB59(void)
{
    int _flags = 0; /* fallback flag var */

loc_0046DB59: ;
    PUSH32(esp, esi);
    PUSH32(esp, edi);
    PUSH32(esp, 0);
    esi = ecx;
    PUSH32(esp, 0); sub_0046DB37(); /* call 0x0046DB37 */

loc_0046DB64: ;
    eax = MEM32(esi + 0x1C);
    if (TEST_Z(eax, eax)) goto loc_0046DB7A; /* je: equal / zero */

loc_0046DB6B: ;
    edi = MEM32(eax);
    PUSH32(esp, eax);
    PUSH32(esp, 0); sub_002AF410(); /* call 0x002AF410 */

loc_0046DB73: ;
    (void)0; /* test edi, edi - flags set for next jcc */
    POP32(esp, ecx);
    eax = edi;
    if (TEST_NZ(edi, edi)) goto loc_0046DB6B; /* jne: not equal / not zero */

loc_0046DB7A: ;
    eax = MEM32(esi + 0x20);
    MEM32(esi + 0x1C) = MEM32(esi + 0x1C) & 0;
    if (TEST_Z(eax, eax)) goto loc_0046DB94; /* je: equal / zero */

loc_0046DB85: ;
    edi = MEM32(eax);
    PUSH32(esp, eax);
    PUSH32(esp, 0); sub_002AF410(); /* call 0x002AF410 */

loc_0046DB8D: ;
    (void)0; /* test edi, edi - flags set for next jcc */
    POP32(esp, ecx);
    eax = edi;
    if (TEST_NZ(edi, edi)) goto loc_0046DB85; /* jne: not equal / not zero */

loc_0046DB94: ;
    MEM32(esi + 0x20) = MEM32(esi + 0x20) & 0;
    POP32(esp, edi);
    POP32(esp, esi);
    esp += 4; return; /* ret */

}

/**
 * sub_0046DB9B
 * Original: 0x0046DB9B - 0x0046DBDB (64 bytes, 22 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0046DB9B(void)
{
    int _flags = 0; /* fallback flag var */

loc_0046DB9B: ;
    PUSH32(esp, esi);
    esi = ecx;
    eax = MEM32(esi + 4);
    (void)0; /* test eax, eax - flags set for next jcc */
    MEM32(esi) = 0x5F1148;
    if (CMP_BE(eax & eax, 0)) goto loc_0046DBBD; /* jbe: below or equal (unsigned <=) */

loc_0046DBAB: ;
    MEM8(eax + 0x75F6D4) = MEM8(eax + 0x75F6D4) - 1;
    eax = MEM32(esi + 4);
    if (CMP_G(MEM8(eax + 0x75F6D4), 0)) goto loc_0046DBD9; /* jg: greater (signed >) */

loc_0046DBBD: ;
    ecx = esi;
    PUSH32(esp, 0); sub_0046DB59(); /* call 0x0046DB59 */

loc_0046DBC4: ;
    esi = MEM32(esi + 0x24);
    if (TEST_Z(esi, esi)) goto loc_0046DBD9; /* je: equal / zero */

loc_0046DBCB: ;
    ecx = esi;
    PUSH32(esp, 0); sub_000A4E40(); /* call 0x000A4E40 */

loc_0046DBD2: ;
    PUSH32(esp, esi);
    PUSH32(esp, 0); sub_002AF410(); /* call 0x002AF410 */

loc_0046DBD8: ;
    POP32(esp, ecx);

loc_0046DBD9: ;
    POP32(esp, esi);
    esp += 4; return; /* ret */

}

/**
 * sub_0046DBDB
 * Original: 0x0046DBDB - 0x0046DBF8 (29 bytes, 10 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0046DBDB(void)
{
    uint32_t ebp;
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_0046DBDB: ;
    PUSH32(esp, esi);
    esi = ecx;
    PUSH32(esp, 0);
    PUSH32(esp, 1);
    ecx = esi + 0xC;
    MEM32(esi) = 0x586174;
    PUSH32(esp, 0); sub_000147B0(); /* call 0x000147B0 */

loc_0046DBF0: ;
    ecx = esi;
    POP32(esp, esi);
    g_seh_ebp = ebp; sub_0046E5D6(); return; /* tail jmp 0x0046E5D6 */

}

/**
 * sub_0046DC22
 * Original: 0x0046DC22 - 0x0046DC5E (60 bytes, 18 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0046DC22(void)
{
    uint32_t ebp;
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_0046DC22: ;
    eax = 0x47F0BF;
    PUSH32(esp, 0); sub_00472094(); /* call 0x00472094 */

loc_0046DC2C: ;
    PUSH32(esp, ecx);
    PUSH32(esp, esi);
    esi = ecx;
    MEM32(ebp + -16) = esi;
    PUSH32(esp, 0); sub_0046E531(); /* call 0x0046E531 */

loc_0046DC38: ;
    PUSH32(esp, MEM32(ebp + 8));
    MEM32(ebp + -4) = MEM32(ebp + -4) & 0;
    ecx = esi + 0xC;
    MEM32(esi) = 0x586174;
    PUSH32(esp, 0); sub_00014810(); /* call 0x00014810 */

loc_0046DC4D: ;
    ecx = MEM32(ebp + -12);
    eax = esi;
    POP32(esp, esi);
    MEM32(0) = ecx;
    esp = ebp;
    POP32(esp, ebp); /* leave */
    esp += 8; return; /* ret 4 */

}

/**
 * sub_0046DC7A
 * Original: 0x0046DC7A - 0x0046DC85 (11 bytes, 2 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0046DC7A(void)
{
    uint32_t ebp;
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_0046DC7A: ;
    MEM32(ecx) = 0x58617C;
    g_seh_ebp = ebp; sub_0046DBDB(); return; /* tail jmp 0x0046DBDB */

}

/**
 * sub_0046DC85
 * Original: 0x0046DC85 - 0x0046DD4B (198 bytes, 55 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0046DC85(void)
{
    uint32_t ebp;
    int _flags = 0; /* fallback flag var */
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_0046DC85: ;
    eax = 0x47F0AD;
    PUSH32(esp, 0); sub_00472094(); /* call 0x00472094 */

loc_0046DC8F: ;
    esp = esp - 0x88;
    eax = MEM32(ebp + 8);
    eax = eax & 0x17;
    MEM32(ecx + 8) = eax;
    ecx = MEM32(ecx + 0xC);
    ecx = ecx & eax;
    if ((ecx == 0)) goto loc_0046DD3D; /* je: equal / zero */

loc_0046DCA9: ;
    ebx = 0; /* xor self */
    if (CMP_EQ(MEM8(ebp + 0xC), LO8(ebx))) goto loc_0046DCB7; /* je: equal / zero */

loc_0046DCB0: ;
    PUSH32(esp, ebx);
    PUSH32(esp, ebx);
    goto loc_0046DD38;

loc_0046DCB7: ;
    if (TEST_Z(LO8(ecx), 4)) goto loc_0046DCE9; /* je: equal / zero */

loc_0046DCBC: ;
    PUSH32(esp, 0x5861B4);
    ecx = ebp + -80;
    PUSH32(esp, 0); sub_00013C90(); /* call 0x00013C90 */

loc_0046DCC9: ;
    MEM32(ebp + -4) = ebx;

loc_0046DCCC: ;
    eax = ebp + -80;
    PUSH32(esp, eax);
    ecx = ebp + -52;
    PUSH32(esp, 0); sub_0046DC22(); /* call 0x0046DC22 */

loc_0046DCD8: ;
    MEM32(ebp + -52) = 0x58617C;
    PUSH32(esp, 0x64B4F8);
    eax = ebp + -52;
    goto loc_0046DD37;

loc_0046DCE9: ;
    PUSH32(esp, 2);
    POP32(esp, ebx);
    if (TEST_Z(LO8(ebx), LO8(ecx))) goto loc_0046DD06; /* je: equal / zero */

loc_0046DCF0: ;
    PUSH32(esp, 0x58619C);
    ecx = ebp + -80;
    PUSH32(esp, 0); sub_00013C90(); /* call 0x00013C90 */

loc_0046DCFD: ;
    MEM32(ebp + -4) = 1;
    goto loc_0046DCCC;

loc_0046DD06: ;
    PUSH32(esp, 0x586184);
    ecx = ebp + -148;
    PUSH32(esp, 0); sub_00013C90(); /* call 0x00013C90 */

loc_0046DD16: ;
    eax = ebp + -148;
    PUSH32(esp, eax);
    ecx = ebp + -120;
    MEM32(ebp + -4) = ebx;
    PUSH32(esp, 0); sub_0046DC22(); /* call 0x0046DC22 */

loc_0046DD28: ;
    MEM32(ebp + -120) = 0x58617C;
    PUSH32(esp, 0x64B4F8);
    eax = ebp + -120;

loc_0046DD37: ;
    PUSH32(esp, eax);

loc_0046DD38: ;
    PUSH32(esp, 0); sub_004720B3(); /* call 0x004720B3 */

loc_0046DD3D: ;
    ecx = MEM32(ebp + -12);
    MEM32(0) = ecx;
    esp = ebp;
    POP32(esp, ebp); /* leave */
    esp += 12; return; /* ret 8 */

}

/**
 * sub_0046DD4B
 * Original: 0x0046DD4B - 0x0046DD8E (67 bytes, 23 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0046DD4B(void)
{
    uint32_t ebp;
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_0046DD4B: ;
    eax = 0x47F0BF;
    PUSH32(esp, 0); sub_00472094(); /* call 0x00472094 */

loc_0046DD55: ;
    PUSH32(esp, ecx);
    PUSH32(esp, esi);
    PUSH32(esp, edi);
    edi = MEM32(ebp + 8);
    esi = ecx;
    PUSH32(esp, edi);
    MEM32(ebp + -16) = esi;
    PUSH32(esp, 0); sub_0046E587(); /* call 0x0046E587 */

loc_0046DD66: ;
    MEM32(ebp + -4) = MEM32(ebp + -4) & 0;
    edi = edi + 0xC;
    PUSH32(esp, edi);
    ecx = esi + 0xC;
    MEM32(esi) = 0x586174;
    PUSH32(esp, 0); sub_00014810(); /* call 0x00014810 */

loc_0046DD7C: ;
    ecx = MEM32(ebp + -12);
    POP32(esp, edi);
    eax = esi;
    POP32(esp, esi);
    MEM32(0) = ecx;
    esp = ebp;
    POP32(esp, ebp); /* leave */
    esp += 8; return; /* ret 4 */

}

/**
 * sub_0046DDA6
 * Original: 0x0046DDA6 - 0x0046DDC1 (27 bytes, 12 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0046DDA6(void)
{
    uint32_t ebp;
    int _flags = 0; /* fallback flag var */
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_0046DDA6: ;
    PUSH32(esp, esi);
    PUSH32(esp, edi);
    PUSH32(esp, 4);
    esi = ecx;
    PUSH32(esp, 0); sub_002AF3F0(); /* call 0x002AF3F0 */

loc_0046DDB1: ;
    edi = 0; /* xor self */
    (void)0; /* cmp eax, edi - flags set for next jcc */
    POP32(esp, ecx);
    if (CMP_EQ(eax, edi)) { sub_0046DDC1(); return; } /* je: equal / zero */

loc_0046DDB8: ;
    ecx = eax;
    PUSH32(esp, 0); sub_0046E26E(); /* call 0x0046E26E */

loc_0046DDBF: ;
    g_seh_ebp = ebp; sub_0046DDC3(); return; /* tail jmp 0x0046DDC3 */

}

/**
 * sub_0046DDEC
 * Original: 0x0046DDEC - 0x0046DE04 (24 bytes, 12 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0046DDEC(void)
{

loc_0046DDEC: ;
    PUSH32(esp, esi);
    PUSH32(esp, 0x1C);
    esi = ecx;
    PUSH32(esp, 0); sub_002AF3F0(); /* call 0x002AF3F0 */

loc_0046DDF6: ;
    PUSH32(esp, eax);
    MEM32(esi) = eax;
    PUSH32(esp, 0); sub_0046E3F9(); /* call 0x0046E3F9 */

loc_0046DDFE: ;
    POP32(esp, ecx);
    POP32(esp, ecx);
    eax = esi;
    POP32(esp, esi);
    esp += 4; return; /* ret */

}

/**
 * sub_0046DE04
 * Original: 0x0046DE04 - 0x0046DE19 (21 bytes, 10 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0046DE04(void)
{

loc_0046DE04: ;
    PUSH32(esp, esi);
    esi = ecx;
    PUSH32(esp, MEM32(esi));
    PUSH32(esp, 0); sub_00434726(); /* call 0x00434726 */

loc_0046DE0E: ;
    PUSH32(esp, MEM32(esi));
    PUSH32(esp, 0); sub_002AF410(); /* call 0x002AF410 */

loc_0046DE15: ;
    POP32(esp, ecx);
    POP32(esp, ecx);
    POP32(esp, esi);
    esp += 4; return; /* ret */

}

/**
 * sub_0046DE19
 * Original: 0x0046DE19 - 0x0046DE22 (9 bytes, 4 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0046DE19(void)
{

loc_0046DE19: ;
    PUSH32(esp, MEM32(ecx));
    PUSH32(esp, 0); sub_0046E404(); /* call 0x0046E404 */

loc_0046DE20: ;
    POP32(esp, ecx);
    esp += 4; return; /* ret */

}

/**
 * sub_0046DE22
 * Original: 0x0046DE22 - 0x0046DE2B (9 bytes, 4 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0046DE22(void)
{

loc_0046DE22: ;
    PUSH32(esp, MEM32(ecx));
    PUSH32(esp, 0); sub_0046E40F(); /* call 0x0046E40F */

loc_0046DE29: ;
    POP32(esp, ecx);
    esp += 4; return; /* ret */

}

/**
 * sub_0046DE2B
 * Original: 0x0046DE2B - 0x0046DEC7 (156 bytes, 60 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0046DE2B(void)
{
    uint32_t ebp;
    int _flags = 0; /* fallback flag var */
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_0046DE2B: ;
    edx = MEM32(esp + 8);
    PUSH32(esp, ebx);
    PUSH32(esp, esi);
    PUSH32(esp, edi);
    ebx = edx;
    edi = edx;
    ebx = ebx & 4;
    edi = edi & 0x80;
    if (TEST_Z(LO8(edx), 0x40)) goto loc_0046DE47; /* je: equal / zero */

loc_0046DE44: ;
    edx = edx | 1;

loc_0046DE47: ;
    ecx = 0; /* xor self */
    edx = edx & 0xFFFFFF3Bu;
    eax = 0; /* xor self */
    ecx++;

loc_0046DE52: ;
    if (CMP_EQ(ecx, edx)) goto loc_0046DE62; /* je: equal / zero */

loc_0046DE56: ;
    ecx = MEM32(eax * 4 + 0x5861E8);
    eax++;
    if (TEST_NZ(ecx, ecx)) goto loc_0046DE52; /* jne: not equal / not zero */

loc_0046DE62: ;
    esi = eax;
    esi = esi << 2;
    if (CMP_EQ(MEM32(esi + 0x5861E4), 0)) goto loc_0046DEC3; /* je: equal / zero */

loc_0046DE70: ;
    if (TEST_Z(edi, edi)) goto loc_0046DE90; /* je: equal / zero */

loc_0046DE74: ;
    if (TEST_Z(LO8(edx), 1)) goto loc_0046DE90; /* je: equal / zero */

loc_0046DE79: ;
    PUSH32(esp, 0x5F1104);
    PUSH32(esp, MEM32(esp + 0x14));
    PUSH32(esp, 0); sub_0046F342(); /* call 0x0046F342 */

loc_0046DE87: ;
    (void)0; /* test eax, eax - flags set for next jcc */
    POP32(esp, ecx);
    POP32(esp, ecx);
    if (TEST_Z(eax, eax)) goto loc_0046DE90; /* je: equal / zero */

loc_0046DE8D: ;
    PUSH32(esp, eax);
    goto loc_0046DEBD;

loc_0046DE90: ;
    PUSH32(esp, MEM32(esi + 0x655588));
    PUSH32(esp, MEM32(esp + 0x14));
    PUSH32(esp, 0); sub_0046F342(); /* call 0x0046F342 */

loc_0046DE9F: ;
    esi = eax;
    (void)0; /* test esi, esi - flags set for next jcc */
    POP32(esp, ecx);
    POP32(esp, ecx);
    if (TEST_Z(esi, esi)) goto loc_0046DEC3; /* je: equal / zero */

loc_0046DEA7: ;
    if (TEST_Z(ebx, ebx)) { sub_0046DEC7(); return; } /* je: equal / zero */

loc_0046DEAB: ;
    PUSH32(esp, 2);
    PUSH32(esp, 0);
    PUSH32(esp, esi);
    PUSH32(esp, 0); sub_0046F481(); /* call 0x0046F481 */

loc_0046DEB5: ;
    esp = esp + 0xC;
    if (TEST_Z(eax, eax)) { sub_0046DEC7(); return; } /* je: equal / zero */

loc_0046DEBC: ;
    PUSH32(esp, esi);

loc_0046DEBD: ;
    PUSH32(esp, 0); sub_0046F3A1(); /* call 0x0046F3A1 */

loc_0046DEC2: ;
    POP32(esp, ecx);

loc_0046DEC3: ;
    eax = 0; /* xor self */
    g_seh_ebp = ebp; sub_0046DEC9(); return; /* tail jmp 0x0046DEC9 */

}

/**
 * sub_0046DECD
 * Original: 0x0046DECD - 0x0046DEE2 (21 bytes, 9 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0046DECD(void)
{
    int _flags = 0; /* fallback flag var */

loc_0046DECD: ;
    ecx = MEM32(ecx + 4);
    PUSH32(esp, 0); sub_000A4E90(); /* call 0x000A4E90 */

loc_0046DED5: ;
    if (TEST_Z(eax, eax)) goto loc_0046DEE1; /* je: equal / zero */

loc_0046DED9: ;
    edx = MEM32(eax);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, 1);
    ecx = eax;
    PUSH32(esp, 0); RECOMP_ICALL_SAFE(MEM32(edx), _icall_esp); /* indirect call */
    }

loc_0046DEE1: ;
    esp += 4; return; /* ret */

}

/**
 * sub_0046DEE2
 * Original: 0x0046DEE2 - 0x0046DEFE (28 bytes, 12 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0046DEE2(void)
{
    int _flags = 0; /* fallback flag var */

loc_0046DEE2: ;
    eax = MEM32(esp + 4);
    ecx = MEM32(eax);
    if (TEST_Z(ecx, ecx)) goto loc_0046DEFD; /* je: equal / zero */

loc_0046DEEC: ;
    PUSH32(esp, 0); sub_000A4E90(); /* call 0x000A4E90 */

loc_0046DEF1: ;
    if (TEST_Z(eax, eax)) goto loc_0046DEFD; /* je: equal / zero */

loc_0046DEF5: ;
    edx = MEM32(eax);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, 1);
    ecx = eax;
    PUSH32(esp, 0); RECOMP_ICALL_SAFE(MEM32(edx), _icall_esp); /* indirect call */
    }

loc_0046DEFD: ;
    esp += 4; return; /* ret */

}

/**
 * sub_0046DEFE
 * Original: 0x0046DEFE - 0x0046DF21 (35 bytes, 13 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0046DEFE(void)
{
    uint32_t ebp;

loc_0046DEFE: ;
    PUSH32(esp, ebp);
    ebp = esp;
    PUSH32(esp, ecx);
    PUSH32(esp, 0);
    ecx = ebp + -4;
    PUSH32(esp, 0); sub_0046E3C6(); /* call 0x0046E3C6 */

loc_0046DF0C: ;
    PUSH32(esp, 0x75F6E4);
    PUSH32(esp, 0); sub_0046DEE2(); /* call 0x0046DEE2 */

loc_0046DF16: ;
    POP32(esp, ecx);
    ecx = ebp + -4;
    PUSH32(esp, 0); sub_0046E3E7(); /* call 0x0046E3E7 */

loc_0046DF1F: ;
    esp = ebp;
    POP32(esp, ebp); /* leave */
    esp += 4; return; /* ret */

}

/**
 * sub_0046DF21
 * Original: 0x0046DF21 - 0x0046DF46 (37 bytes, 9 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0046DF21(void)
{
    int _flags = 0; /* fallback flag var */

loc_0046DF21: ;
    if (CMP_NE(MEM8(0x75F708), 0)) goto loc_0046DF3C; /* jne: not equal / not zero */

loc_0046DF2A: ;
    PUSH32(esp, 0x46DEFE);
    MEM8(0x75F708) = 1;
    PUSH32(esp, 0); sub_0046E41A(); /* call 0x0046E41A */

loc_0046DF3B: ;
    POP32(esp, ecx);

loc_0046DF3C: ;
    eax = MEM32(esp + 4);
    MEM32(0x75F6E4) = eax;
    esp += 4; return; /* ret */

}

/**
 * sub_0046DF46
 * Original: 0x0046DF46 - 0x0046DF59 (19 bytes, 7 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0046DF46(void)
{
    uint32_t ebp;
    int _flags = 0; /* fallback flag var */
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_0046DF46: ;
    ecx = MEM32(ecx);
    edx = MEM32(esp + 4);
    if (CMP_AE(edx, MEM32(ecx + 0xC))) { sub_0046DF59(); return; } /* jae: above or equal (unsigned >=) */

loc_0046DF51: ;
    eax = MEM32(ecx + 8);
    eax = MEM32(eax + edx * 4);
    g_seh_ebp = ebp; sub_0046DF5B(); return; /* tail jmp 0x0046DF5B */

}

/**
 * sub_0046DF7B
 * Original: 0x0046DF7B - 0x0046DFBE (67 bytes, 26 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0046DF7B(void)
{
    uint32_t ebp;
    int _flags = 0; /* fallback flag var */

loc_0046DF7B: ;
    PUSH32(esp, ebp);
    ebp = esp;
    PUSH32(esp, ecx);
    PUSH32(esp, 0);
    ecx = ebp + -4;
    PUSH32(esp, 0); sub_0046E3C6(); /* call 0x0046E3C6 */

loc_0046DF89: ;
    eax = MEM32(0x75F6E0);
    if (TEST_Z(eax, eax)) goto loc_0046DFB4; /* je: equal / zero */

loc_0046DF92: ;
    PUSH32(esp, esi);

loc_0046DF93: ;
    esi = eax;
    eax = MEM32(eax);
    ecx = esi;
    MEM32(0x75F6E0) = eax;
    PUSH32(esp, 0); sub_0046DECD(); /* call 0x0046DECD */

loc_0046DFA3: ;
    PUSH32(esp, esi);
    PUSH32(esp, 0); sub_002AF410(); /* call 0x002AF410 */

loc_0046DFA9: ;
    eax = MEM32(0x75F6E0);
    (void)0; /* test eax, eax - flags set for next jcc */
    POP32(esp, ecx);
    if (TEST_NZ(eax, eax)) goto loc_0046DF93; /* jne: not equal / not zero */

loc_0046DFB3: ;
    POP32(esp, esi);

loc_0046DFB4: ;
    ecx = ebp + -4;
    PUSH32(esp, 0); sub_0046E3E7(); /* call 0x0046E3E7 */

loc_0046DFBC: ;
    esp = ebp;
    POP32(esp, ebp); /* leave */
    esp += 4; return; /* ret */

}

/**
 * sub_0046DFBE
 * Original: 0x0046DFBE - 0x0046DFEE (48 bytes, 16 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0046DFBE(void)
{
    uint32_t ebp;
    int _flags = 0; /* fallback flag var */
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_0046DFBE: ;
    (void)0; /* cmp MEM32(0x75F6E0), 0 - flags set for next jcc */
    PUSH32(esp, esi);
    esi = ecx;
    if (CMP_NE(MEM32(0x75F6E0), 0)) goto loc_0046DFD5; /* jne: not equal / not zero */

loc_0046DFCA: ;
    PUSH32(esp, 0x46DF7B);
    PUSH32(esp, 0); sub_0046E41A(); /* call 0x0046E41A */

loc_0046DFD4: ;
    POP32(esp, ecx);

loc_0046DFD5: ;
    PUSH32(esp, 8);
    PUSH32(esp, 0); sub_002AF3F0(); /* call 0x002AF3F0 */

loc_0046DFDC: ;
    (void)0; /* test eax, eax - flags set for next jcc */
    POP32(esp, ecx);
    if (TEST_Z(eax, eax)) { sub_0046DFEE(); return; } /* je: equal / zero */

loc_0046DFE1: ;
    ecx = MEM32(0x75F6E0);
    MEM32(eax) = ecx;
    MEM32(eax + 4) = esi;
    g_seh_ebp = ebp; sub_0046DFF0(); return; /* tail jmp 0x0046DFF0 */

}

/**
 * sub_0046DFF7
 * Original: 0x0046DFF7 - 0x0046E02A (51 bytes, 16 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0046DFF7(void)
{
    uint32_t ebp;
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_0046DFF7: ;
    eax = 0x47F0E4;
    PUSH32(esp, 0); sub_00472094(); /* call 0x00472094 */

loc_0046E001: ;
    PUSH32(esp, ecx);
    PUSH32(esp, ecx);
    PUSH32(esp, esi);
    esi = ecx;
    PUSH32(esp, edi);
    MEM32(ebp + -20) = esi;
    MEM32(esi) = 0x586224;
    PUSH32(esp, 0);
    ecx = ebp + -16;
    MEM32(ebp + -4) = 1;
    PUSH32(esp, 0); sub_0046E3C6(); /* call 0x0046E3C6 */

loc_0046E021: ;
    edi = MEM32(esi + 0xC);
    MEM8(ebp + -4) = 2;
    g_seh_ebp = ebp; sub_0046E046(); return; /* tail jmp 0x0046E046 */

}

/**
 * sub_0046E07F
 * Original: 0x0046E07F - 0x0046E0D6 (87 bytes, 36 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0046E07F(void)
{
    uint32_t ebp;
    int _flags = 0; /* fallback flag var */
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_0046E07F: ;
    PUSH32(esp, ebx);
    PUSH32(esp, esi);
    esi = ecx;
    ebx = 0; /* xor self */
    if (CMP_BE(MEM32(esi + 0x50), ebx)) goto loc_0046E0A1; /* jbe: below or equal (unsigned <=) */

loc_0046E08A: ;
    if (CMP_B(MEM32(esi + 0x54), 0x10)) goto loc_0046E095; /* jb: below (unsigned <) */

loc_0046E090: ;
    eax = MEM32(esi + 0x40);
    goto loc_0046E098;

loc_0046E095: ;
    eax = esi + 0x40;

loc_0046E098: ;
    PUSH32(esp, eax);
    PUSH32(esp, ebx);
    PUSH32(esp, 0); sub_004720EC(); /* call 0x004720EC */

loc_0046E09F: ;
    POP32(esp, ecx);
    POP32(esp, ecx);

loc_0046E0A1: ;
    PUSH32(esp, ebx);
    PUSH32(esp, 1);
    ecx = esi + 0x58;
    PUSH32(esp, 0); sub_000147B0(); /* call 0x000147B0 */

loc_0046E0AC: ;
    PUSH32(esp, ebx);
    PUSH32(esp, 1);
    ecx = esi + 0x3C;
    PUSH32(esp, 0); sub_000147B0(); /* call 0x000147B0 */

loc_0046E0B7: ;
    PUSH32(esp, ebx);
    PUSH32(esp, 1);
    ecx = esi + 0x20;
    PUSH32(esp, 0); sub_000147B0(); /* call 0x000147B0 */

loc_0046E0C2: ;
    PUSH32(esp, ebx);
    PUSH32(esp, 1);
    ecx = esi + 4;
    PUSH32(esp, 0); sub_000147B0(); /* call 0x000147B0 */

loc_0046E0CD: ;
    ecx = esi;
    POP32(esp, esi);
    POP32(esp, ebx);
    g_seh_ebp = ebp; sub_0046E3E7(); return; /* tail jmp 0x0046E3E7 */

}

/**
 * sub_0046E0F2
 * Original: 0x0046E0F2 - 0x0046E142 (80 bytes, 24 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0046E0F2(void)
{
    uint32_t ebp;
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_0046E0F2: ;
    eax = 0x47F0F6;
    PUSH32(esp, 0); sub_00472094(); /* call 0x00472094 */

loc_0046E0FC: ;
    PUSH32(esp, ecx);
    PUSH32(esp, esi);
    esi = ecx;
    MEM32(ebp + -16) = esi;
    MEM32(esi + 4) = 1;
    eax = 0; /* xor self */
    MEM32(ebp + -4) = eax;
    MEM32(esi + 8) = eax;
    MEM32(esi + 0xC) = eax;
    MEM32(esi + 0x10) = eax;
    SET_LO8(eax, MEM8(ebp + 8));
    PUSH32(esp, 0x575574);
    ecx = esi + 0x18;
    MEM32(esi) = 0x586224;
    MEM8(esi + 0x14) = LO8(eax);
    PUSH32(esp, 0); sub_00013C90(); /* call 0x00013C90 */

loc_0046E131: ;
    ecx = MEM32(ebp + -12);
    eax = esi;
    POP32(esp, esi);
    MEM32(0) = ecx;
    esp = ebp;
    POP32(esp, ebp); /* leave */
    esp += 8; return; /* ret 4 */

}

/**
 * sub_0046E142
 * Original: 0x0046E142 - 0x0046E1CC (138 bytes, 51 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0046E142(void)
{
    uint32_t ebp;
    int _flags = 0; /* fallback flag var */
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_0046E142: ;
    eax = 0x47F134;
    PUSH32(esp, 0); sub_00472094(); /* call 0x00472094 */

loc_0046E14C: ;
    PUSH32(esp, ecx);
    PUSH32(esp, ebx);
    PUSH32(esp, esi);
    PUSH32(esp, edi);
    esi = ecx;
    ebx = 0; /* xor self */
    PUSH32(esp, ebx);
    MEM32(ebp + -16) = esi;
    PUSH32(esp, 0); sub_0046E3C6(); /* call 0x0046E3C6 */

loc_0046E15D: ;
    ecx = esi + 4;
    MEM32(ebp + -4) = ebx;
    PUSH32(esp, 0); sub_000A2930(); /* call 0x000A2930 */

loc_0046E168: ;
    ecx = esi + 0x20;
    PUSH32(esp, 0); sub_000A2930(); /* call 0x000A2930 */

loc_0046E170: ;
    edi = esi + 0x3C;
    ecx = edi;
    PUSH32(esp, 0); sub_000A2930(); /* call 0x000A2930 */

loc_0046E17A: ;
    ecx = esi + 0x58;
    PUSH32(esp, 0); sub_000A2930(); /* call 0x000A2930 */

loc_0046E182: ;
    PUSH32(esp, ebx);
    PUSH32(esp, ebx);
    MEM8(ebp + -4) = 4;
    PUSH32(esp, 0); sub_004720EC(); /* call 0x004720EC */

loc_0046E18D: ;
    POP32(esp, ecx);
    POP32(esp, ecx);
    PUSH32(esp, eax);
    ecx = edi;
    PUSH32(esp, 0); sub_00014390(); /* call 0x00014390 */

loc_0046E197: ;
    if (CMP_EQ(MEM32(ebp + 8), ebx)) goto loc_0046E1AB; /* je: equal / zero */

loc_0046E19C: ;
    PUSH32(esp, MEM32(ebp + 8));
    PUSH32(esp, ebx);
    PUSH32(esp, 0); sub_004720EC(); /* call 0x004720EC */

loc_0046E1A5: ;
    (void)0; /* cmp eax, ebx - flags set for next jcc */
    POP32(esp, ecx);
    POP32(esp, ecx);
    if (CMP_NE(eax, ebx)) goto loc_0046E1B0; /* jne: not equal / not zero */

loc_0046E1AB: ;
    eax = 0x575574;

loc_0046E1B0: ;
    PUSH32(esp, eax);
    ecx = esi + 0x58;
    PUSH32(esp, 0); sub_00014390(); /* call 0x00014390 */

loc_0046E1B9: ;
    ecx = MEM32(ebp + -12);
    POP32(esp, edi);
    eax = esi;
    POP32(esp, esi);
    POP32(esp, ebx);
    MEM32(0) = ecx;
    esp = ebp;
    POP32(esp, ebp); /* leave */
    esp += 8; return; /* ret 4 */

}

/**
 * sub_0046E1CC
 * Original: 0x0046E1CC - 0x0046E26E (162 bytes, 51 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0046E1CC(void)
{
    uint32_t ebp;
    int _flags = 0; /* fallback flag var */
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_0046E1CC: ;
    eax = 0x47F150;
    PUSH32(esp, 0); sub_00472094(); /* call 0x00472094 */

loc_0046E1D6: ;
    PUSH32(esp, ecx);
    PUSH32(esp, ecx);
    eax = MEM32(0x75F6E4);
    (void)0; /* test eax, eax - flags set for next jcc */
    PUSH32(esp, esi);
    esi = eax;
    if (TEST_NZ(eax, eax)) goto loc_0046E25F; /* jne: not equal / not zero */

loc_0046E1E4: ;
    PUSH32(esp, eax);
    ecx = ebp + -16;
    PUSH32(esp, 0); sub_0046E3C6(); /* call 0x0046E3C6 */

loc_0046E1ED: ;
    eax = MEM32(0x75F6E4);
    MEM32(ebp + -4) = MEM32(ebp + -4) & esi;
    (void)0; /* test eax, eax - flags set for next jcc */
    esi = eax;
    if (TEST_NZ(eax, eax)) goto loc_0046E253; /* jne: not equal / not zero */

loc_0046E1FB: ;
    PUSH32(esp, 0x34);
    PUSH32(esp, 0); sub_002AF3F0(); /* call 0x002AF3F0 */

loc_0046E202: ;
    POP32(esp, ecx);
    ecx = eax;
    MEM32(ebp + -20) = ecx;
    (void)0; /* test ecx, ecx - flags set for next jcc */
    MEM8(ebp + -4) = 1;
    if (TEST_Z(ecx, ecx)) goto loc_0046E21A; /* je: equal / zero */

loc_0046E210: ;
    PUSH32(esp, esi);
    PUSH32(esp, 0); sub_0046E0F2(); /* call 0x0046E0F2 */

loc_0046E216: ;
    esi = eax;
    goto loc_0046E21C;

loc_0046E21A: ;
    esi = 0; /* xor self */

loc_0046E21C: ;
    PUSH32(esp, esi);
    MEM8(ebp + -4) = 0;
    PUSH32(esp, 0); sub_0046DF21(); /* call 0x0046DF21 */

loc_0046E226: ;
    ecx = esi + 0x18;
    MEM32(esi + 0x10) = 0x3F;
    MEM32(esp) = 0x5F1180;
    PUSH32(esp, 0); sub_00014390(); /* call 0x00014390 */

loc_0046E23C: ;
    ecx = esi;
    MEM32(0x75F6E8) = esi;
    PUSH32(esp, 0); sub_000A4970(); /* call 0x000A4970 */

loc_0046E249: ;
    eax = MEM32(0x75F6E8);
    MEM32(0x75F6F0) = eax;

loc_0046E253: ;
    MEM32(ebp + -4) = MEM32(ebp + -4) | 0xFFFFFFFFu;
    ecx = ebp + -16;
    PUSH32(esp, 0); sub_0046E3E7(); /* call 0x0046E3E7 */

loc_0046E25F: ;
    ecx = MEM32(ebp + -12);
    eax = esi;
    POP32(esp, esi);
    MEM32(0) = ecx;
    esp = ebp;
    POP32(esp, ebp); /* leave */
    esp += 4; return; /* ret */

}

/**
 * sub_0046E26E
 * Original: 0x0046E26E - 0x0046E287 (25 bytes, 9 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0046E26E(void)
{

loc_0046E26E: ;
    PUSH32(esp, esi);
    esi = ecx;
    PUSH32(esp, 0); sub_0046E1CC(); /* call 0x0046E1CC */

loc_0046E276: ;
    MEM32(esi) = eax;
    ecx = MEM32(0x75F6E4);
    PUSH32(esp, 0); sub_000A4970(); /* call 0x000A4970 */

loc_0046E283: ;
    eax = esi;
    POP32(esp, esi);
    esp += 4; return; /* ret */

}

/**
 * sub_0046E287
 * Original: 0x0046E287 - 0x0046E29F (24 bytes, 8 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0046E287(void)
{
    uint32_t ebp;
    int _flags = 0; /* fallback flag var */
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_0046E287: ;
    if (CMP_LE(MEM32(0x655AF0), 1)) { sub_0046E29F(); return; } /* jle: less or equal (signed <=) */

loc_0046E290: ;
    PUSH32(esp, 1);
    PUSH32(esp, MEM32(esp + 8));
    PUSH32(esp, 0); sub_00472114(); /* call 0x00472114 */

loc_0046E29B: ;
    POP32(esp, ecx);
    POP32(esp, ecx);
    g_seh_ebp = ebp; sub_0046E2AF(); return; /* tail jmp 0x0046E2AF */

}

/**
 * sub_0046E2C3
 * Original: 0x0046E2C3 - 0x0046E311 (78 bytes, 22 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0046E2C3(void)
{
    uint32_t ebp;
    int _flags = 0; /* fallback flag var */
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_0046E2C3: ;
    PUSH32(esp, 0x18);
    PUSH32(esp, 0x586228);
    PUSH32(esp, 0); sub_00470A34(); /* call 0x00470A34 */
    ebp = g_seh_ebp; /* read back frame from SEH helper */

loc_0046E2CF: ;
    MEM32(ebp + -4) = MEM32(ebp + -4) & 0;
    PUSH32(esp, 0); sub_0047213B(); /* call 0x0047213B */

loc_0046E2D8: ;
    eax = MEM32(eax + 4);
    MEM32(ebp + -40) = eax;
    PUSH32(esp, 0); sub_00472135(); /* call 0x00472135 */

loc_0046E2E3: ;
    MEM32(ebp + -36) = eax;
    PUSH32(esp, 0x200);
    PUSH32(esp, 0); sub_00471918(); /* call 0x00471918 */

loc_0046E2F0: ;
    POP32(esp, ecx);
    edi = eax;
    MEM32(ebp + -32) = edi;
    PUSH32(esp, 0); sub_0047210E(); /* call 0x0047210E */

loc_0046E2FB: ;
    if (TEST_Z(edi, edi)) { sub_0046E311(); return; } /* je: equal / zero */

loc_0046E2FF: ;
    ecx = 0x80;
    esi = eax;
    memcpy((void*)XBOX_PTR(edi), (void*)XBOX_PTR(esi), ecx * 4);
    esi += ecx * 4; edi += ecx * 4; ecx = 0; /* rep movsd */
    MEM32(ebp + -28) = 1;
    g_seh_ebp = ebp; sub_0046E318(); return; /* tail jmp 0x0046E318 */

}

/**
 * sub_0046E333
 * Original: 0x0046E333 - 0x0046E334 (1 bytes, 1 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0046E333(void)
{

loc_0046E333: ;
    esp += 4; return; /* ret */

}

/**
 * sub_0046E334
 * Original: 0x0046E334 - 0x0046E34C (24 bytes, 8 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0046E334(void)
{
    uint32_t ebp;
    int _flags = 0; /* fallback flag var */
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_0046E334: ;
    if (CMP_LE(MEM32(0x655AF0), 1)) { sub_0046E34C(); return; } /* jle: less or equal (signed <=) */

loc_0046E33D: ;
    PUSH32(esp, 2);
    PUSH32(esp, MEM32(esp + 8));
    PUSH32(esp, 0); sub_00472114(); /* call 0x00472114 */

loc_0046E348: ;
    POP32(esp, ecx);
    POP32(esp, ecx);
    g_seh_ebp = ebp; sub_0046E35C(); return; /* tail jmp 0x0046E35C */

}

/**
 * sub_0046E370
 * Original: 0x0046E370 - 0x0046E39E (46 bytes, 19 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0046E370(void)
{
    int _flags = 0; /* fallback flag var */

loc_0046E370: ;
    PUSH32(esp, edi);
    edi = ecx;
    ecx = 0; /* xor self */
    eax = 0x6555C4;
    ecx++;
    /* TODO: lock xadd dword ptr [eax], ecx */
    if (_flags /* jne: not equal / not zero */) goto loc_0046E39A;

loc_0046E381: ;
    PUSH32(esp, esi);
    esi = 0x75F710;

loc_0046E387: ;
    PUSH32(esp, esi);
    PUSH32(esp, 0); sub_0046E3F9(); /* call 0x0046E3F9 */

loc_0046E38D: ;
    esi = esi + 0x1C;
    (void)0; /* cmp esi, 0x75F780 - flags set for next jcc */
    POP32(esp, ecx);
    if (CMP_L(esi, 0x75F780)) goto loc_0046E387; /* jl: less (signed <) */

loc_0046E399: ;
    POP32(esp, esi);

loc_0046E39A: ;
    eax = edi;
    POP32(esp, edi);
    esp += 4; return; /* ret */

}

/**
 * sub_0046E3C6
 * Original: 0x0046E3C6 - 0x0046E3E7 (33 bytes, 13 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0046E3C6(void)
{

loc_0046E3C6: ;
    eax = MEM32(esp + 4);
    eax = eax & 3;
    PUSH32(esp, esi);
    esi = ecx;
    MEM32(esi) = eax;
    eax = (uint32_t)((int32_t)eax * (int32_t)0x1C);
    eax = eax + 0x75F710;
    PUSH32(esp, eax);
    PUSH32(esp, 0); sub_0046E404(); /* call 0x0046E404 */

loc_0046E3E0: ;
    POP32(esp, ecx);
    eax = esi;
    POP32(esp, esi);
    esp += 8; return; /* ret 4 */

}

/**
 * sub_0046E3E7
 * Original: 0x0046E3E7 - 0x0046E3F9 (18 bytes, 7 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0046E3E7(void)
{

loc_0046E3E7: ;
    eax = MEM32(ecx);
    eax = (uint32_t)((int32_t)eax * (int32_t)0x1C);
    eax = eax + 0x75F710;
    PUSH32(esp, eax);
    PUSH32(esp, 0); sub_0046E40F(); /* call 0x0046E40F */

loc_0046E3F7: ;
    POP32(esp, ecx);
    esp += 4; return; /* ret */

}

/**
 * sub_0046E3F9
 * Original: 0x0046E3F9 - 0x0046E404 (11 bytes, 3 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0046E3F9(void)
{

loc_0046E3F9: ;
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, MEM32(esp + 4));
    PUSH32(esp, 0); RECOMP_ICALL_SAFE(MEM32(0x561000), _icall_esp); /* indirect call */
    }

loc_0046E403: ;
    esp += 4; return; /* ret */

}

/**
 * sub_0046E404
 * Original: 0x0046E404 - 0x0046E40F (11 bytes, 3 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0046E404(void)
{

loc_0046E404: ;
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, MEM32(esp + 4));
    PUSH32(esp, 0); RECOMP_ICALL_SAFE(MEM32(0x561004), _icall_esp); /* indirect call */
    }

loc_0046E40E: ;
    esp += 4; return; /* ret */

}

/**
 * sub_0046E40F
 * Original: 0x0046E40F - 0x0046E41A (11 bytes, 3 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0046E40F(void)
{

loc_0046E40F: ;
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, MEM32(esp + 4));
    PUSH32(esp, 0); RECOMP_ICALL_SAFE(MEM32(0x561008), _icall_esp); /* indirect call */
    }

loc_0046E419: ;
    esp += 4; return; /* ret */

}

/**
 * sub_0046E41A
 * Original: 0x0046E41A - 0x0046E428 (14 bytes, 4 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0046E41A(void)
{
    uint32_t ebp;
    int _flags = 0; /* fallback flag var */
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_0046E41A: ;
    eax = MEM32(0x6555C8);
    if (TEST_NZ(eax, eax)) { sub_0046E428(); return; } /* jne: not equal / not zero */

loc_0046E423: ;
    g_seh_ebp = ebp; sub_004729CC(); return; /* tail jmp 0x004729CC */

}

/**
 * sub_0046E45A
 * Original: 0x0046E45A - 0x0046E470 (22 bytes, 10 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0046E45A(void)
{
    int _flags = 0; /* fallback flag var */

loc_0046E45A: ;
    eax = MEM32(esp + 4);

loc_0046E45E: ;
    SET_LO16(ecx, MEM16(eax));
    eax++;
    eax++;
    if (TEST_NZ(LO16(ecx), LO16(ecx))) goto loc_0046E45E; /* jne: not equal / not zero */

loc_0046E468: ;
    eax = eax - MEM32(esp + 4);
    eax = (uint32_t)((int32_t)eax >> 1);
    eax--;
    esp += 4; return; /* ret */

}

/**
 * sub_0046E470
 * Original: 0x0046E470 - 0x0046E49A (42 bytes, 20 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0046E470(void)
{
    int _flags = 0; /* fallback flag var */

loc_0046E470: ;
    eax = MEM32(esp + 4);
    (void)0; /* cmp MEM16(eax), 0 - flags set for next jcc */
    edx = eax;
    if (CMP_EQ(MEM16(eax), 0)) goto loc_0046E484; /* je: equal / zero */

loc_0046E47C: ;
    edx++;
    edx++;
    if (CMP_NE(MEM16(edx), 0)) goto loc_0046E47C; /* jne: not equal / not zero */

loc_0046E484: ;
    PUSH32(esp, esi);
    esi = MEM32(esp + 0xC);

loc_0046E489: ;
    SET_LO16(ecx, MEM16(esi));
    MEM16(edx) = LO16(ecx);
    edx++;
    edx++;
    esi++;
    esi++;
    if (TEST_NZ(LO16(ecx), LO16(ecx))) goto loc_0046E489; /* jne: not equal / not zero */

loc_0046E498: ;
    POP32(esp, esi);
    esp += 4; return; /* ret */

}

/**
 * sub_0046E49A
 * Original: 0x0046E49A - 0x0046E4B6 (28 bytes, 12 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0046E49A(void)
{
    int _flags = 0; /* fallback flag var */

loc_0046E49A: ;
    ecx = MEM32(esp + 4);
    edx = MEM32(esp + 8);

loc_0046E4A2: ;
    SET_LO16(eax, MEM16(edx));
    MEM16(ecx) = LO16(eax);
    ecx++;
    ecx++;
    edx++;
    edx++;
    if (TEST_NZ(LO16(eax), LO16(eax))) goto loc_0046E4A2; /* jne: not equal / not zero */

loc_0046E4B1: ;
    eax = MEM32(esp + 4);
    esp += 4; return; /* ret */

}

/**
 * sub_0046E4B6
 * Original: 0x0046E4B6 - 0x0046E4BB (5 bytes, 1 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0046E4B6(void)
{
    uint32_t ebp;
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_0046E4B6: ;
    g_seh_ebp = ebp; sub_002AF410(); return; /* tail jmp 0x002AF410 */

}

/**
 * sub_0046E4CF
 * Original: 0x0046E4CF - 0x0046E50C (61 bytes, 19 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0046E4CF(void)
{
    uint32_t ebp;
    int _flags = 0; /* fallback flag var */
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_0046E4CF: ;
    PUSH32(esp, 8);
    PUSH32(esp, 0x586238);
    PUSH32(esp, 0); sub_00470A34(); /* call 0x00470A34 */
    ebp = g_seh_ebp; /* read back frame from SEH helper */

loc_0046E4DB: ;
    esi = ecx;
    MEM32(esi) = 0x586234;
    PUSH32(esp, 0xE);
    PUSH32(esp, 0); sub_00472B24(); /* call 0x00472B24 */

loc_0046E4EA: ;
    POP32(esp, ecx);
    MEM32(ebp + -4) = MEM32(ebp + -4) & 0;
    esi = MEM32(esi + 4);
    if (TEST_Z(esi, esi)) goto loc_0046E4FD; /* je: equal / zero */

loc_0046E4F6: ;
    PUSH32(esp, esi);
    PUSH32(esp, 0); sub_0046FB7D(); /* call 0x0046FB7D */

loc_0046E4FC: ;
    POP32(esp, ecx);

loc_0046E4FD: ;
    MEM32(ebp + -4) = MEM32(ebp + -4) | 0xFFFFFFFFu;
    PUSH32(esp, 0); sub_0046E50C(); /* call 0x0046E50C */

loc_0046E506: ;
    PUSH32(esp, 0); sub_00470A6F(); /* call 0x00470A6F */
    ebp = g_seh_ebp; /* read back frame from SEH helper */

loc_0046E50B: ;
    esp += 4; return; /* ret */

}

/**
 * sub_0046E50C
 * Original: 0x0046E50C - 0x0046E515 (9 bytes, 4 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0046E50C(void)
{

loc_0046E50C: ;
    PUSH32(esp, 0xE);
    PUSH32(esp, 0); sub_00472A72(); /* call 0x00472A72 */

loc_0046E513: ;
    POP32(esp, ecx);
    esp += 4; return; /* ret */

}

/**
 * sub_0046E531
 * Original: 0x0046E531 - 0x0046E542 (17 bytes, 5 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0046E531(void)
{

loc_0046E531: ;
    eax = ecx;
    MEM32(eax + 4) = MEM32(eax + 4) & 0;
    MEM32(eax + 8) = MEM32(eax + 8) & 0;
    MEM32(eax) = 0x586244;
    esp += 4; return; /* ret */

}

/**
 * sub_0046E542
 * Original: 0x0046E542 - 0x0046E587 (69 bytes, 31 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0046E542(void)
{
    int _flags = 0; /* fallback flag var */

loc_0046E542: ;
    PUSH32(esp, esi);
    esi = ecx;
    PUSH32(esp, edi);
    edi = MEM32(esp + 0xC);
    MEM32(esi) = 0x586244;
    eax = MEM32(edi);
    ecx = eax + 1;

loc_0046E555: ;
    SET_LO8(edx, MEM8(eax));
    eax++;
    if (TEST_NZ(LO8(edx), LO8(edx))) goto loc_0046E555; /* jne: not equal / not zero */

loc_0046E55C: ;
    eax = eax - ecx;
    eax++;
    PUSH32(esp, eax);
    PUSH32(esp, 0); sub_00471918(); /* call 0x00471918 */

loc_0046E565: ;
    (void)0; /* test eax, eax - flags set for next jcc */
    POP32(esp, ecx);
    MEM32(esi + 4) = eax;
    if (TEST_Z(eax, eax)) goto loc_0046E579; /* je: equal / zero */

loc_0046E56D: ;
    edx = MEM32(edi);

loc_0046E56F: ;
    SET_LO8(ecx, MEM8(edx));
    edx++;
    MEM8(eax) = LO8(ecx);
    eax++;
    if (TEST_NZ(LO8(ecx), LO8(ecx))) goto loc_0046E56F; /* jne: not equal / not zero */

loc_0046E579: ;
    POP32(esp, edi);
    MEM32(esi + 8) = 1;
    eax = esi;
    POP32(esp, esi);
    esp += 8; return; /* ret 4 */

}

/**
 * sub_0046E587
 * Original: 0x0046E587 - 0x0046E5D6 (79 bytes, 36 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0046E587(void)
{
    int _flags = 0; /* fallback flag var */

loc_0046E587: ;
    PUSH32(esp, esi);
    esi = ecx;
    PUSH32(esp, edi);
    edi = MEM32(esp + 0xC);
    MEM32(esi) = 0x586244;
    eax = MEM32(edi + 8);
    MEM32(esi + 8) = eax;
    (void)0; /* test eax, eax - flags set for next jcc */
    eax = MEM32(edi + 4);
    if (TEST_Z(eax, eax)) goto loc_0046E5CC; /* je: equal / zero */

loc_0046E5A2: ;
    ecx = eax + 1;

loc_0046E5A5: ;
    SET_LO8(edx, MEM8(eax));
    eax++;
    if (TEST_NZ(LO8(edx), LO8(edx))) goto loc_0046E5A5; /* jne: not equal / not zero */

loc_0046E5AC: ;
    eax = eax - ecx;
    eax++;
    PUSH32(esp, eax);
    PUSH32(esp, 0); sub_00471918(); /* call 0x00471918 */

loc_0046E5B5: ;
    (void)0; /* test eax, eax - flags set for next jcc */
    POP32(esp, ecx);
    MEM32(esi + 4) = eax;
    if (TEST_Z(eax, eax)) goto loc_0046E5CF; /* je: equal / zero */

loc_0046E5BD: ;
    edi = MEM32(edi + 4);

loc_0046E5C0: ;
    SET_LO8(ecx, MEM8(edi));
    edi++;
    MEM8(eax) = LO8(ecx);
    eax++;
    if (TEST_NZ(LO8(ecx), LO8(ecx))) goto loc_0046E5C0; /* jne: not equal / not zero */

loc_0046E5CA: ;
    goto loc_0046E5CF;

loc_0046E5CC: ;
    MEM32(esi + 4) = eax;

loc_0046E5CF: ;
    POP32(esp, edi);
    eax = esi;
    POP32(esp, esi);
    esp += 8; return; /* ret 4 */

}

/**
 * sub_0046E5D6
 * Original: 0x0046E5D6 - 0x0046E5EC (22 bytes, 7 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0046E5D6(void)
{
    int _flags = 0; /* fallback flag var */

loc_0046E5D6: ;
    (void)0; /* cmp MEM32(ecx + 8), 0 - flags set for next jcc */
    MEM32(ecx) = 0x586244;
    if (CMP_EQ(MEM32(ecx + 8), 0)) goto loc_0046E5EB; /* je: equal / zero */

loc_0046E5E2: ;
    PUSH32(esp, MEM32(ecx + 4));
    PUSH32(esp, 0); sub_0046FB7D(); /* call 0x0046FB7D */

loc_0046E5EA: ;
    POP32(esp, ecx);

loc_0046E5EB: ;
    esp += 4; return; /* ret */

}

/**
 * sub_0046E5F9
 * Original: 0x0046E5F9 - 0x0046E612 (25 bytes, 9 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0046E5F9(void)
{

loc_0046E5F9: ;
    PUSH32(esp, esi);
    eax = esp + 8;
    PUSH32(esp, eax);
    esi = ecx;
    PUSH32(esp, 0); sub_0046E542(); /* call 0x0046E542 */

loc_0046E606: ;
    MEM32(esi) = 0x586260;
    eax = esi;
    POP32(esp, esi);
    esp += 8; return; /* ret 4 */

}

/**
 * sub_0046E62A
 * Original: 0x0046E62A - 0x0046E635 (11 bytes, 2 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0046E62A(void)
{
    uint32_t ebp;
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_0046E62A: ;
    MEM32(ecx) = 0x586260;
    g_seh_ebp = ebp; sub_0046E5D6(); return; /* tail jmp 0x0046E5D6 */

}

/**
 * sub_0046E670
 * Original: 0x0046E670 - 0x0046E80C (412 bytes, 88 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0046E670(void)
{
    uint32_t ebp;
    int _flags = 0; /* fallback flag var */

loc_0046E670: ;
    PUSH32(esp, ebp);
    ebp = esp;
    PUSH32(esp, edi);
    PUSH32(esp, esi);
    esi = MEM32(ebp + 0xC);
    ecx = MEM32(ebp + 0x10);
    edi = MEM32(ebp + 8);
    eax = ecx;
    edx = ecx;
    eax = eax + esi;
    if (CMP_BE(edi, esi)) goto loc_0046E690; /* jbe: below or equal (unsigned <=) */

loc_0046E688: ;
    if (CMP_B(edi, eax)) { sub_0046E80C(); return; } /* jb: below (unsigned <) */

loc_0046E690: ;
    if (TEST_NZ(edi, 3)) goto loc_0046E6AC; /* jne: not equal / not zero */

loc_0046E698: ;
    ecx = ecx >> 2;
    edx = edx & 3;
    if (CMP_B(ecx, 8)) goto loc_0046E6CC; /* jb: below (unsigned <) */

loc_0046E6A3: ;
    memcpy((void*)XBOX_PTR(edi), (void*)XBOX_PTR(esi), ecx * 4);
    esi += ecx * 4; edi += ecx * 4; ecx = 0; /* rep movsd */
    { uint32_t _jt = MEM32(edx * 4 + 0x46E7BC); /* switch: 4 entries, 4 targets */
    if (_jt == 0x0046E7CCu) (void)0; /* goto loc_0046E7CC - dead code, label not in function */
    if (_jt == 0x0046E7D4u) (void)0; /* goto loc_0046E7D4 - dead code, label not in function */
    if (_jt == 0x0046E7E0u) (void)0; /* goto loc_0046E7E0 - dead code, label not in function */
    if (_jt == 0x0046E7F4u) (void)0; /* goto loc_0046E7F4 - dead code, label not in function */
    g_seh_ebp = ebp; RECOMP_ITAIL(_jt); return; }

loc_0046E6AC: ;
    eax = edi;
    edx = 3;
    ecx = ecx - 4;
    if (CMP_B((uint32_t)ecx + (uint32_t)4, (uint32_t)4)) goto loc_0046E6C4; /* jb: below (unsigned <) */

loc_0046E6B8: ;
    eax = eax & 3;
    ecx = ecx + eax;
    g_seh_ebp = ebp; RECOMP_ITAIL(MEM32(eax * 4 + 0x46E6D0)); return; /* indirect tail jmp */

loc_0046E6C4: ;
    g_seh_ebp = ebp; RECOMP_ITAIL(MEM32(ecx * 4 + 0x46E7CC)); return; /* indirect tail jmp */

    /* nop */

loc_0046E6CC: ;
    { uint32_t _jt = MEM32(ecx * 4 + 0x46E750); /* switch: 8 entries, 8 targets */
    if (_jt == 0x0046E770u) (void)0; /* goto loc_0046E770 - dead code, label not in function */
    if (_jt == 0x0046E778u) (void)0; /* goto loc_0046E778 - dead code, label not in function */
    if (_jt == 0x0046E780u) (void)0; /* goto loc_0046E780 - dead code, label not in function */
    if (_jt == 0x0046E788u) (void)0; /* goto loc_0046E788 - dead code, label not in function */
    if (_jt == 0x0046E790u) (void)0; /* goto loc_0046E790 - dead code, label not in function */
    if (_jt == 0x0046E798u) (void)0; /* goto loc_0046E798 - dead code, label not in function */
    if (_jt == 0x0046E7A0u) (void)0; /* goto loc_0046E7A0 - dead code, label not in function */
    if (_jt == 0x0046E7B3u) (void)0; /* goto loc_0046E7B3 - dead code, label not in function */
    g_seh_ebp = ebp; RECOMP_ITAIL(_jt); return; }

    /* nop */
    if (_flags /* loopne: loopne */) (void)0; /* goto loc_0046E6BC - dead code, label not in function */

loc_0046E6D6: ;
    esi++;
    MEM8(edi) = MEM8(edi) + LO8(ecx);
    esi++;
    MEM8(eax) = MEM8(eax) + HI8(edx);
    /* TODO: out 0x46, eax */
    MEM8(ebx) = MEM8(ebx) + HI8(eax);
    MEM32(edx + -1979217914) = ROR32(MEM32(edx + -1979217914), 1);
    esi++;
    MEM32(eax + 0x468A0147) = MEM32(eax + 0x468A0147) + ecx;
    SET_LO8(eax, LO8(eax) + LO8(ecx));
    g_seh_ebp = ebp; sub_028E6EF7(); return; /* tail jmp 0x028E6EF7 */

    esi = esi + 3;
    edi = edi + 3;
    if (CMP_B(ecx, 8)) goto loc_0046E6CC; /* jb: below (unsigned <) */

loc_0046E700: ;
    memcpy((void*)XBOX_PTR(edi), (void*)XBOX_PTR(esi), ecx * 4);
    esi += ecx * 4; edi += ecx * 4; ecx = 0; /* rep movsd */
    { uint32_t _jt = MEM32(edx * 4 + 0x46E7BC); /* switch: 4 entries, 4 targets */
    if (_jt == 0x0046E7CCu) (void)0; /* goto loc_0046E7CC - dead code, label not in function */
    if (_jt == 0x0046E7D4u) (void)0; /* goto loc_0046E7D4 - dead code, label not in function */
    if (_jt == 0x0046E7E0u) (void)0; /* goto loc_0046E7E0 - dead code, label not in function */
    if (_jt == 0x0046E7F4u) (void)0; /* goto loc_0046E7F4 - dead code, label not in function */
    g_seh_ebp = ebp; RECOMP_ITAIL(_jt); return; }

    /* nop */
    edx = edx & ecx;
    SET_LO8(eax, MEM8(esi));
    MEM8(edi) = LO8(eax);
    SET_LO8(eax, MEM8(esi + 1));
    ecx = ecx >> 2;
    MEM8(edi + 1) = LO8(eax);
    esi = esi + 2;
    edi = edi + 2;
    if (CMP_B(ecx, 8)) goto loc_0046E6CC; /* jb: below (unsigned <) */

loc_0046E726: ;
    memcpy((void*)XBOX_PTR(edi), (void*)XBOX_PTR(esi), ecx * 4);
    esi += ecx * 4; edi += ecx * 4; ecx = 0; /* rep movsd */
    { uint32_t _jt = MEM32(edx * 4 + 0x46E7BC); /* switch: 4 entries, 4 targets */
    if (_jt == 0x0046E7CCu) (void)0; /* goto loc_0046E7CC - dead code, label not in function */
    if (_jt == 0x0046E7D4u) (void)0; /* goto loc_0046E7D4 - dead code, label not in function */
    if (_jt == 0x0046E7E0u) (void)0; /* goto loc_0046E7E0 - dead code, label not in function */
    if (_jt == 0x0046E7F4u) (void)0; /* goto loc_0046E7F4 - dead code, label not in function */
    g_seh_ebp = ebp; RECOMP_ITAIL(_jt); return; }

    /* nop */
    edx = edx & ecx;
    SET_LO8(eax, MEM8(esi));
    MEM8(edi) = LO8(eax);
    esi = esi + 1;
    ecx = ecx >> 2;
    edi = edi + 1;
    if (CMP_B(ecx, 8)) goto loc_0046E6CC; /* jb: below (unsigned <) */

loc_0046E744: ;
    memcpy((void*)XBOX_PTR(edi), (void*)XBOX_PTR(esi), ecx * 4);
    esi += ecx * 4; edi += ecx * 4; ecx = 0; /* rep movsd */
    { uint32_t _jt = MEM32(edx * 4 + 0x46E7BC); /* switch: 4 entries, 4 targets */
    if (_jt == 0x0046E7CCu) (void)0; /* goto loc_0046E7CC - dead code, label not in function */
    if (_jt == 0x0046E7D4u) (void)0; /* goto loc_0046E7D4 - dead code, label not in function */
    if (_jt == 0x0046E7E0u) (void)0; /* goto loc_0046E7E0 - dead code, label not in function */
    if (_jt == 0x0046E7F4u) (void)0; /* goto loc_0046E7F4 - dead code, label not in function */
    g_seh_ebp = ebp; RECOMP_ITAIL(_jt); return; }

    /* nop */
    SET_LO8(ebx, 0xE7);
    esi++;
    MEM8(eax + -1744812313) = MEM8(eax + -1744812313) + HI8(eax);
    /* TODO: out 0x46, eax */
    MEM8(eax + -2013247769) = MEM8(eax + -2013247769) + LO8(edx);
    /* TODO: out 0x46, eax */
    MEM8(eax + 0x780046E7) = MEM8(eax + 0x780046E7) + LO8(eax);
    /* TODO: out 0x46, eax */
    MEM8(eax + -25) = MEM8(eax + -25) + HI8(edx);
    esi++;
    MEM8(ebx + -1981510076) = MEM8(ebx + -1981510076) + LO8(ecx);
    esp++;

}

/**
 * sub_0046E9AD
 * Original: 0x0046E9AD - 0x0046EA04 (87 bytes, 37 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0046E9AD(void)
{
    uint32_t ebp;
    int _flags = 0; /* fallback flag var */

loc_0046E9AD: ;
    PUSH32(esp, ebp);
    ebp = esp;
    esp = esp - 0x20;
    eax = MEM32(ebp + 0xC);
    PUSH32(esp, esi);
    esi = MEM32(ebp + 8);
    MEM32(ebp + -28) = eax;
    PUSH32(esp, edi);
    eax = ebp + 0x14;
    PUSH32(esp, eax);
    PUSH32(esp, MEM32(ebp + 0x10));
    eax = ebp + -32;
    PUSH32(esp, eax);
    MEM32(ebp + -20) = 0x42;
    MEM32(ebp + -24) = esi;
    MEM32(ebp + -32) = esi;
    PUSH32(esp, 0); sub_00472CF9(); /* call 0x00472CF9 */

loc_0046E9DB: ;
    esp = esp + 0xC;
    (void)0; /* test esi, esi - flags set for next jcc */
    edi = eax;
    if (TEST_Z(esi, esi)) goto loc_0046E9FE; /* je: equal / zero */

loc_0046E9E4: ;
    MEM32(ebp + -28) = MEM32(ebp + -28) - 1;
    if (((int32_t)MEM32(ebp + -28) < 0)) goto loc_0046E9F1; /* js: sign (negative) */

loc_0046E9E9: ;
    eax = MEM32(ebp + -32);
    MEM8(eax) = 0;
    goto loc_0046E9FE;

loc_0046E9F1: ;
    eax = ebp + -32;
    PUSH32(esp, eax);
    PUSH32(esp, 0);
    PUSH32(esp, 0); sub_00472B52(); /* call 0x00472B52 */

loc_0046E9FC: ;
    POP32(esp, ecx);
    POP32(esp, ecx);

loc_0046E9FE: ;
    eax = edi;
    POP32(esp, edi);
    POP32(esp, esi);
    esp = ebp;
    POP32(esp, ebp); /* leave */
    esp += 4; return; /* ret */

}

/**
 * sub_0046EA04
 * Original: 0x0046EA04 - 0x0046EA5A (86 bytes, 36 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0046EA04(void)
{
    uint32_t ebp;
    int _flags = 0; /* fallback flag var */

loc_0046EA04: ;
    PUSH32(esp, ebp);
    ebp = esp;
    esp = esp - 0x20;
    eax = MEM32(ebp + 0xC);
    PUSH32(esp, esi);
    esi = MEM32(ebp + 8);
    PUSH32(esp, edi);
    PUSH32(esp, MEM32(ebp + 0x14));
    MEM32(ebp + -28) = eax;
    PUSH32(esp, MEM32(ebp + 0x10));
    eax = ebp + -32;
    PUSH32(esp, eax);
    MEM32(ebp + -20) = 0x42;
    MEM32(ebp + -24) = esi;
    MEM32(ebp + -32) = esi;
    PUSH32(esp, 0); sub_00472CF9(); /* call 0x00472CF9 */

loc_0046EA31: ;
    esp = esp + 0xC;
    (void)0; /* test esi, esi - flags set for next jcc */
    edi = eax;
    if (TEST_Z(esi, esi)) goto loc_0046EA54; /* je: equal / zero */

loc_0046EA3A: ;
    MEM32(ebp + -28) = MEM32(ebp + -28) - 1;
    if (((int32_t)MEM32(ebp + -28) < 0)) goto loc_0046EA47; /* js: sign (negative) */

loc_0046EA3F: ;
    eax = MEM32(ebp + -32);
    MEM8(eax) = 0;
    goto loc_0046EA54;

loc_0046EA47: ;
    eax = ebp + -32;
    PUSH32(esp, eax);
    PUSH32(esp, 0);
    PUSH32(esp, 0); sub_00472B52(); /* call 0x00472B52 */

loc_0046EA52: ;
    POP32(esp, ecx);
    POP32(esp, ecx);

loc_0046EA54: ;
    eax = edi;
    POP32(esp, edi);
    POP32(esp, esi);
    esp = ebp;
    POP32(esp, ebp); /* leave */
    esp += 4; return; /* ret */

}

/**
 * sub_0046EA5A
 * Original: 0x0046EA5A - 0x0046EB06 (172 bytes, 68 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0046EA5A(void)
{
    uint32_t ebp;
    int _flags = 0; /* fallback flag var */
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_0046EA5A: ;
    PUSH32(esp, 0xC);
    PUSH32(esp, 0x586268);
    PUSH32(esp, 0); sub_00470A34(); /* call 0x00470A34 */
    ebp = g_seh_ebp; /* read back frame from SEH helper */

loc_0046EA66: ;
    edi = ecx;
    MEM32(ebp + -28) = edi;
    ebx = 0; /* xor self */
    if (CMP_NE(MEM32(edi + 4), ebx)) goto loc_0046EAFD; /* jne: not equal / not zero */

loc_0046EA76: ;
    PUSH32(esp, 0x2800);
    PUSH32(esp, 0x46FB7D);
    PUSH32(esp, 0x471918);
    PUSH32(esp, ebx);
    eax = edi + 9;
    PUSH32(esp, eax);
    PUSH32(esp, ebx);
    PUSH32(esp, 0); sub_004775FD(); /* call 0x004775FD */

loc_0046EA90: ;
    esp = esp + 0x18;
    esi = eax;
    if (CMP_NE(esi, ebx)) goto loc_0046EA9D; /* jne: not equal / not zero */

loc_0046EA99: ;
    eax = 0; /* xor self */
    goto loc_0046EB00;

loc_0046EA9D: ;
    eax = esi;
    edx = eax + 1;

loc_0046EAA2: ;
    SET_LO8(ecx, MEM8(eax));
    eax++;
    if (CMP_NE(LO8(ecx), LO8(ebx))) goto loc_0046EAA2; /* jne: not equal / not zero */

loc_0046EAA9: ;
    eax = eax - edx;
    eax = eax + esi + -1;
    goto loc_0046EAB4;

loc_0046EAB1: ;
    MEM8(eax) = LO8(ebx);
    eax--;

loc_0046EAB4: ;
    if (CMP_EQ(MEM8(eax), 0x20)) goto loc_0046EAB1; /* je: equal / zero */

loc_0046EAB9: ;
    PUSH32(esp, 0xE);
    PUSH32(esp, 0); sub_00472B24(); /* call 0x00472B24 */

loc_0046EAC0: ;
    POP32(esp, ecx);
    MEM32(ebp + -4) = ebx;
    eax = esi;
    edx = eax + 1;

loc_0046EAC9: ;
    SET_LO8(ecx, MEM8(eax));
    eax++;
    if (CMP_NE(LO8(ecx), LO8(ebx))) goto loc_0046EAC9; /* jne: not equal / not zero */

loc_0046EAD0: ;
    eax = eax - edx;
    eax++;
    PUSH32(esp, eax);
    PUSH32(esp, 0); sub_00471918(); /* call 0x00471918 */

loc_0046EAD9: ;
    POP32(esp, ecx);
    MEM32(edi + 4) = eax;
    if (CMP_EQ(eax, ebx)) goto loc_0046EAED; /* je: equal / zero */

loc_0046EAE1: ;
    edx = esi;

loc_0046EAE3: ;
    SET_LO8(ecx, MEM8(edx));
    MEM8(eax) = LO8(ecx);
    edx++;
    eax++;
    if (CMP_NE(LO8(ecx), LO8(ebx))) goto loc_0046EAE3; /* jne: not equal / not zero */

loc_0046EAED: ;
    PUSH32(esp, esi);
    PUSH32(esp, 0); sub_0046FB7D(); /* call 0x0046FB7D */

loc_0046EAF3: ;
    POP32(esp, ecx);
    MEM32(ebp + -4) = MEM32(ebp + -4) | 0xFFFFFFFFu;
    PUSH32(esp, 0); sub_0046EB09(); /* call 0x0046EB09 */

loc_0046EAFD: ;
    eax = MEM32(edi + 4);

loc_0046EB00: ;
    PUSH32(esp, 0); sub_00470A6F(); /* call 0x00470A6F */
    ebp = g_seh_ebp; /* read back frame from SEH helper */

loc_0046EB05: ;
    esp += 4; return; /* ret */

}

/**
 * sub_0046EB09
 * Original: 0x0046EB09 - 0x0046EB12 (9 bytes, 4 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0046EB09(void)
{

loc_0046EB09: ;
    PUSH32(esp, 0xE);
    PUSH32(esp, 0); sub_00472A72(); /* call 0x00472A72 */

loc_0046EB10: ;
    POP32(esp, ecx);
    esp += 4; return; /* ret */

}

/**
 * sub_0046EB12
 * Original: 0x0046EB12 - 0x0046EB27 (21 bytes, 7 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0046EB12(void)
{
    int _flags = 0; /* fallback flag var */

loc_0046EB12: ;
    SET_LO16(eax, MEM16(esp + 0xA));
    SET_LO16(eax, LO16(eax) & 0x7FF0);
    ecx = 0; /* xor self */
    (void)0; /* cmp LO16(eax), 0x7FF0 - flags set for next jcc */
    SET_LO8(ecx, (CMP_NE(LO16(eax), 0x7FF0)) ? 1 : 0); /* setne */
    eax = ecx;
    esp += 4; return; /* ret */

}

/**
 * sub_0046EB27
 * Original: 0x0046EB27 - 0x0046EB52 (43 bytes, 14 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0046EB27(void)
{
    int _flags = 0; /* fallback flag var */

loc_0046EB27: ;
    eax = MEM32(esp + 0xA);
    ecx = 0x7FF8;
    eax = eax & ecx;
    if (CMP_NE(LO16(eax), 0x7FF0)) goto loc_0046EB49; /* jne: not equal / not zero */

loc_0046EB38: ;
    if (TEST_NZ(MEM32(esp + 8), 0x7FFFF)) goto loc_0046EB4E; /* jne: not equal / not zero */

loc_0046EB42: ;
    if (CMP_NE(MEM32(esp + 4), 0)) goto loc_0046EB4E; /* jne: not equal / not zero */

loc_0046EB49: ;
    if (CMP_NE(LO16(eax), LO16(ecx))) { sub_0046EB52(); return; } /* jne: not equal / not zero */

loc_0046EB4E: ;
    eax = 0; /* xor self */
    eax++;
    esp += 4; return; /* ret */

}

/**
 * sub_0046EB55
 * Original: 0x0046EB55 - 0x0046EB96 (65 bytes, 34 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0046EB55(void)
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

loc_0046EB55: ;
    PUSH32(esp, ebp);
    ebp = esp;
    eax = MEM32(ebp + 0xE);
    ecx = 0x7FF0;
    edx = eax;
    edx = edx & ecx;
    if (CMP_NE(LO16(edx), LO16(ecx))) { sub_0046EB96(); return; } /* jne: not equal / not zero */

loc_0046EB69: ;
    fp_push(MEMD(ebp + 8)); /* fld double */
    PUSH32(esp, ecx);
    PUSH32(esp, ecx);
    MEMD(esp) = fp_top(); fp_popp(); /* fstp */
    PUSH32(esp, 0); sub_00477C7C(); /* call 0x00477C7C */

loc_0046EB76: ;
    eax--;
    POP32(esp, ecx);
    POP32(esp, ecx);
    if ((eax == 0)) goto loc_0046EB8F; /* je: equal / zero */

loc_0046EB7B: ;
    eax--;
    if ((eax == 0)) goto loc_0046EB8B; /* je: equal / zero */

loc_0046EB7E: ;
    eax--;
    if ((eax == 0)) goto loc_0046EB86; /* je: equal / zero */

loc_0046EB81: ;
    eax = 0; /* xor self */
    eax++;
    POP32(esp, ebp);
    esp += 4; return; /* ret */

loc_0046EB86: ;
    PUSH32(esp, 2);

loc_0046EB88: ;
    POP32(esp, eax);
    POP32(esp, ebp);
    esp += 4; return; /* ret */

loc_0046EB8B: ;
    PUSH32(esp, 4);
    goto loc_0046EB88;

loc_0046EB8F: ;
    eax = 0x200;
    POP32(esp, ebp);
    esp += 4; return; /* ret */

    #undef fp_push
    #undef fp_pop
    #undef fp_popp
    #undef fp_top
    #undef fp_st1
}

/**
 * sub_0046EC00
 * Original: 0x0046EC00 - 0x0046EC27 (39 bytes, 18 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0046EC00(void)
{
    uint32_t ebp;
    int _flags = 0; /* fallback flag var */

loc_0046EC00: ;
    PUSH32(esp, ebp);
    ebp = esp;
    PUSH32(esp, edi);
    edi = MEM32(ebp + 8);
    eax = 0; /* xor self */
    ecx = ecx | 0xFFFFFFFFu;
    /* repne scasb - string scan, ecx iterations */
    ecx = ecx + 1;
    ecx = (uint32_t)(-(int32_t)ecx);
    edi = edi - 1;
    SET_LO8(eax, MEM8(ebp + 0xC));
    /* std - direction flag */
    /* repne scasb - string scan, ecx iterations */
    edi = edi + 1;
    if (CMP_EQ(MEM8(edi), LO8(eax))) { sub_0046EC27(); return; } /* je: equal / zero */

loc_0046EC23: ;
    eax = 0; /* xor self */
    g_seh_ebp = ebp; sub_0046EC29(); return; /* tail jmp 0x0046EC29 */

}

/**
 * sub_0046EC2D
 * Original: 0x0046EC2D - 0x0046EC85 (88 bytes, 36 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0046EC2D(void)
{
    uint32_t ebp;
    int _flags = 0; /* fallback flag var */

loc_0046EC2D: ;
    PUSH32(esp, ebp);
    ebp = esp;
    esp = esp - 0x20;
    PUSH32(esp, esi);
    esi = MEM32(ebp + 8);
    PUSH32(esp, edi);
    eax = ebp + 0x10;
    PUSH32(esp, eax);
    PUSH32(esp, MEM32(ebp + 0xC));
    eax = ebp + -32;
    PUSH32(esp, eax);
    MEM32(ebp + -28) = 0x7FFFFFFF;
    MEM32(ebp + -20) = 0x42;
    MEM32(ebp + -24) = esi;
    MEM32(ebp + -32) = esi;
    PUSH32(esp, 0); sub_00472CF9(); /* call 0x00472CF9 */

loc_0046EC5C: ;
    esp = esp + 0xC;
    (void)0; /* test esi, esi - flags set for next jcc */
    edi = eax;
    if (TEST_Z(esi, esi)) goto loc_0046EC7F; /* je: equal / zero */

loc_0046EC65: ;
    MEM32(ebp + -28) = MEM32(ebp + -28) - 1;
    if (((int32_t)MEM32(ebp + -28) < 0)) goto loc_0046EC72; /* js: sign (negative) */

loc_0046EC6A: ;
    eax = MEM32(ebp + -32);
    MEM8(eax) = 0;
    goto loc_0046EC7F;

loc_0046EC72: ;
    eax = ebp + -32;
    PUSH32(esp, eax);
    PUSH32(esp, 0);
    PUSH32(esp, 0); sub_00472B52(); /* call 0x00472B52 */

loc_0046EC7D: ;
    POP32(esp, ecx);
    POP32(esp, ecx);

loc_0046EC7F: ;
    eax = edi;
    POP32(esp, edi);
    POP32(esp, esi);
    esp = ebp;
    POP32(esp, ebp); /* leave */
    esp += 4; return; /* ret */

}

/**
 * sub_0046EC85
 * Original: 0x0046EC85 - 0x0046ED05 (128 bytes, 45 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0046EC85(void)
{
    int _flags = 0; /* fallback flag var */

loc_0046EC85: ;
    PUSH32(esp, esi);
    PUSH32(esp, MEM32(0x88146C));
    PUSH32(esp, 0); sub_00478575(); /* call 0x00478575 */

loc_0046EC91: ;
    POP32(esp, ecx);
    ecx = MEM32(0x881468);
    esi = eax;
    eax = MEM32(0x88146C);
    edx = ecx;
    edx = edx - eax;
    edx = edx + 4;
    if (CMP_AE(esi, edx)) goto loc_0046ECF8; /* jae: above or equal (unsigned >=) */

loc_0046ECAA: ;
    ecx = 0x800;
    if (CMP_AE(esi, ecx)) goto loc_0046ECB5; /* jae: above or equal (unsigned >=) */

loc_0046ECB3: ;
    ecx = esi;

loc_0046ECB5: ;
    ecx = ecx + esi;
    PUSH32(esp, ecx);
    PUSH32(esp, eax);
    PUSH32(esp, 0); sub_0047192A(); /* call 0x0047192A */

loc_0046ECBE: ;
    (void)0; /* test eax, eax - flags set for next jcc */
    POP32(esp, ecx);
    POP32(esp, ecx);
    if (TEST_NZ(eax, eax)) goto loc_0046ECDB; /* jne: not equal / not zero */

loc_0046ECC4: ;
    esi = esi + 0x10;
    PUSH32(esp, esi);
    PUSH32(esp, MEM32(0x88146C));
    PUSH32(esp, 0); sub_0047192A(); /* call 0x0047192A */

loc_0046ECD3: ;
    (void)0; /* test eax, eax - flags set for next jcc */
    POP32(esp, ecx);
    POP32(esp, ecx);
    if (TEST_NZ(eax, eax)) goto loc_0046ECDB; /* jne: not equal / not zero */

loc_0046ECD9: ;
    POP32(esp, esi);
    esp += 4; return; /* ret */

loc_0046ECDB: ;
    ecx = MEM32(0x881468);
    ecx = ecx - MEM32(0x88146C);
    MEM32(0x88146C) = eax;
    ecx = (uint32_t)((int32_t)ecx >> 2);
    ecx = eax + ecx * 4;
    MEM32(0x881468) = ecx;

loc_0046ECF8: ;
    MEM32(ecx) = edi;
    MEM32(0x881468) = MEM32(0x881468) + 4;
    eax = edi;
    POP32(esp, esi);
    esp += 4; return; /* ret */

}

/**
 * sub_0046ED05
 * Original: 0x0046ED05 - 0x0046ED1D (24 bytes, 9 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0046ED05(void)
{
    int _flags = 0; /* fallback flag var */

loc_0046ED05: ;
    PUSH32(esp, 0x80);
    PUSH32(esp, 0); sub_00471918(); /* call 0x00471918 */

loc_0046ED0F: ;
    (void)0; /* test eax, eax - flags set for next jcc */
    POP32(esp, ecx);
    MEM32(0x88146C) = eax;
    if (TEST_NZ(eax, eax)) { sub_0046ED1D(); return; } /* jne: not equal / not zero */

loc_0046ED19: ;
    PUSH32(esp, 0x18);
    POP32(esp, eax);
    esp += 4; return; /* ret */

}

/**
 * sub_0046ED2D
 * Original: 0x0046ED2D - 0x0046ED5F (50 bytes, 13 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0046ED2D(void)
{
    uint32_t ebp;
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_0046ED2D: ;
    PUSH32(esp, 0xC);
    PUSH32(esp, 0x586278);
    PUSH32(esp, 0); sub_00470A34(); /* call 0x00470A34 */
    ebp = g_seh_ebp; /* read back frame from SEH helper */

loc_0046ED39: ;
    PUSH32(esp, 0); sub_00478493(); /* call 0x00478493 */

loc_0046ED3E: ;
    MEM32(ebp + -4) = MEM32(ebp + -4) & 0;
    edi = MEM32(ebp + 8);
    PUSH32(esp, 0); sub_0046EC85(); /* call 0x0046EC85 */

loc_0046ED4A: ;
    MEM32(ebp + -28) = eax;
    MEM32(ebp + -4) = MEM32(ebp + -4) | 0xFFFFFFFFu;
    PUSH32(esp, 0); sub_0046ED5F(); /* call 0x0046ED5F */

loc_0046ED56: ;
    eax = MEM32(ebp + -28);
    PUSH32(esp, 0); sub_00470A6F(); /* call 0x00470A6F */
    ebp = g_seh_ebp; /* read back frame from SEH helper */

loc_0046ED5E: ;
    esp += 4; return; /* ret */

}

/**
 * sub_0046ED5F
 * Original: 0x0046ED5F - 0x0046ED65 (6 bytes, 2 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0046ED5F(void)
{

loc_0046ED5F: ;
    PUSH32(esp, 0); sub_0047849C(); /* call 0x0047849C */

loc_0046ED64: ;
    esp += 4; return; /* ret */

}

/**
 * sub_0046ED65
 * Original: 0x0046ED65 - 0x0046ED77 (18 bytes, 8 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0046ED65(void)
{
    int _cf = 0; /* carry flag */

loc_0046ED65: ;
    PUSH32(esp, MEM32(esp + 4));
    PUSH32(esp, 0); sub_0046ED2D(); /* call 0x0046ED2D */

loc_0046ED6E: ;
    eax = (uint32_t)(-(int32_t)eax);
    eax = _cf ? 0xFFFFFFFF : 0; /* sbb self (CF extend) */
    eax = (uint32_t)(-(int32_t)eax);
    POP32(esp, ecx);
    eax--;
    esp += 4; return; /* ret */

}

/**
 * sub_0046ED77
 * Original: 0x0046ED77 - 0x0046EDFD (134 bytes, 56 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0046ED77(void)
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

loc_0046ED77: ;
    PUSH32(esp, ebp);
    ebp = esp;
    PUSH32(esp, ecx);
    PUSH32(esp, ecx);
    PUSH32(esp, ebx);
    PUSH32(esp, esi);
    esi = 0xFFFF;
    PUSH32(esp, esi);
    PUSH32(esp, MEM32(0x655630));
    PUSH32(esp, 0); sub_00478419(); /* call 0x00478419 */

loc_0046ED8F: ;
    fp_push(MEMD(ebp + 8)); /* fld double */
    POP32(esp, ecx);
    POP32(esp, ecx);
    ebx = eax;
    eax = MEM32(ebp + 0xE);
    PUSH32(esp, ecx);
    SET_LO16(eax, LO16(eax) & 0x7FF0);
    (void)0; /* cmp LO16(eax), 0x7FF0 - flags set for next jcc */
    PUSH32(esp, ecx);
    MEMD(esp) = fp_top(); fp_popp(); /* fstp */
    if (CMP_NE(LO16(eax), 0x7FF0)) { sub_0046EDFD(); return; } /* jne: not equal / not zero */

loc_0046EDA8: ;
    PUSH32(esp, 0); sub_00477C7C(); /* call 0x00477C7C */

loc_0046EDAD: ;
    (void)0; /* test eax, eax - flags set for next jcc */
    POP32(esp, ecx);
    POP32(esp, ecx);
    if (CMP_LE(eax & eax, 0)) goto loc_0046EDE0; /* jle: less or equal (signed <=) */

loc_0046EDB3: ;
    if (CMP_LE(eax, 2)) goto loc_0046EDD2; /* jle: less or equal (signed <=) */

loc_0046EDB8: ;
    if (CMP_NE(eax, 3)) goto loc_0046EDE0; /* jne: not equal / not zero */

loc_0046EDBD: ;
    fp_push(MEMD(ebp + 8)); /* fld double */
    PUSH32(esp, ebx);
    PUSH32(esp, ecx);
    PUSH32(esp, ecx);
    MEMD(esp) = fp_top(); fp_popp(); /* fstp */
    PUSH32(esp, 0xB);
    PUSH32(esp, 0); sub_0047830F(); /* call 0x0047830F */

loc_0046EDCD: ;
    esp = esp + 0x10;
    g_seh_ebp = ebp; sub_0046EE46(); return; /* tail jmp 0x0046EE46 */

loc_0046EDD2: ;
    PUSH32(esp, esi);
    PUSH32(esp, ebx);
    PUSH32(esp, 0); sub_00478419(); /* call 0x00478419 */

loc_0046EDD9: ;
    fp_push(MEMD(ebp + 8)); /* fld double */
    POP32(esp, ecx);
    POP32(esp, ecx);
    g_seh_ebp = ebp; sub_0046EE46(); return; /* tail jmp 0x0046EE46 */

loc_0046EDE0: ;
    fp_push(MEMD(ebp + 8)); /* fld double */
    PUSH32(esp, ebx);
    fp_st1() += fp_top(); fp_pop(); /* fadd */
    esp = esp - 0x10;
    MEMD(esp + 8) = fp_top(); fp_popp(); /* fstp */
    fp_push(MEMD(ebp + 8)); /* fld double */
    MEMD(esp) = fp_top(); fp_popp(); /* fstp */
    PUSH32(esp, 0xB);
    PUSH32(esp, 8);
    g_seh_ebp = ebp; sub_0046EE3E(); return; /* tail jmp 0x0046EE3E */

    #undef fp_push
    #undef fp_pop
    #undef fp_popp
    #undef fp_top
    #undef fp_st1
}

/**
 * sub_0046EE4A
 * Original: 0x0046EE4A - 0x0046EE8E (68 bytes, 25 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0046EE4A(void)
{
    uint32_t ebp;
    int _flags = 0; /* fallback flag var */

loc_0046EE4A: ;
    PUSH32(esp, ebp);
    ebp = esp;
    esp = esp - 0x20;
    eax = MEM32(ebp + 8);
    MEM32(ebp + -24) = eax;
    MEM32(ebp + -32) = eax;
    eax = MEM32(ebp + 0xC);
    eax = eax + eax;
    MEM32(ebp + -28) = eax;
    PUSH32(esp, esi);
    eax = ebp + 0x14;
    PUSH32(esp, eax);
    PUSH32(esp, MEM32(ebp + 0x10));
    eax = ebp + -32;
    PUSH32(esp, eax);
    MEM32(ebp + -20) = 0x42;
    PUSH32(esp, 0); sub_00478666(); /* call 0x00478666 */

loc_0046EE79: ;
    esp = esp + 0xC;
    MEM32(ebp + -28) = MEM32(ebp + -28) - 1;
    esi = eax;
    if (((int32_t)MEM32(ebp + -28) < 0)) { sub_0046EE8E(); return; } /* js: sign (negative) */

loc_0046EE83: ;
    eax = MEM32(ebp + -32);
    MEM8(eax) = 0;
    MEM32(ebp + -32) = MEM32(ebp + -32) + 1;
    g_seh_ebp = ebp; sub_0046EE9B(); return; /* tail jmp 0x0046EE9B */

}

/**
 * sub_0046EEC0
 * Original: 0x0046EEC0 - 0x0046EFE4 (292 bytes, 109 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0046EEC0(void)
{
    int _flags = 0; /* fallback flag var */

loc_0046EEC0: ;
    ecx = MEM32(esp + 0xC);
    PUSH32(esp, edi);
    if (TEST_Z(ecx, ecx)) goto loc_0046EF5F; /* je: equal / zero */

loc_0046EECD: ;
    PUSH32(esp, esi);
    PUSH32(esp, ebx);
    ebx = ecx;
    esi = MEM32(esp + 0x14);
    (void)0; /* test esi, 3 - flags set for next jcc */
    edi = MEM32(esp + 0x10);
    if (TEST_NZ(esi, 3)) goto loc_0046EEEC; /* jne: not equal / not zero */

loc_0046EEE1: ;
    ecx = ecx >> 2;
    if ((ecx != 0)) goto loc_0046EF6F; /* jne: not equal / not zero */

loc_0046EEEA: ;
    goto loc_0046EF13;

loc_0046EEEC: ;
    SET_LO8(eax, MEM8(esi));
    esi = esi + 1;
    MEM8(edi) = LO8(eax);
    edi = edi + 1;
    ecx = ecx - 1;
    if ((ecx == 0)) goto loc_0046EF26; /* je: equal / zero */

loc_0046EEFB: ;
    if (TEST_Z(LO8(eax), LO8(eax))) goto loc_0046EF2E; /* je: equal / zero */

loc_0046EEFF: ;
    if (TEST_NZ(esi, 3)) goto loc_0046EEEC; /* jne: not equal / not zero */

loc_0046EF07: ;
    ebx = ecx;
    ecx = ecx >> 2;
    if ((ecx != 0)) goto loc_0046EF6F; /* jne: not equal / not zero */

loc_0046EF0E: ;
    ebx = ebx & 3;
    if ((ebx == 0)) goto loc_0046EF26; /* je: equal / zero */

loc_0046EF13: ;
    SET_LO8(eax, MEM8(esi));
    esi = esi + 1;
    MEM8(edi) = LO8(eax);
    edi = edi + 1;
    if (TEST_Z(LO8(eax), LO8(eax))) goto loc_0046EF58; /* je: equal / zero */

loc_0046EF21: ;
    ebx = ebx - 1;
    if ((ebx != 0)) goto loc_0046EF13; /* jne: not equal / not zero */

loc_0046EF26: ;
    eax = MEM32(esp + 0x10);
    POP32(esp, ebx);
    POP32(esp, esi);
    POP32(esp, edi);
    esp += 4; return; /* ret */

loc_0046EF2E: ;
    if (TEST_Z(edi, 3)) goto loc_0046EF4C; /* je: equal / zero */

loc_0046EF36: ;
    MEM8(edi) = LO8(eax);
    edi = edi + 1;
    ecx = ecx - 1;
    if ((ecx == 0)) goto loc_0046EFDC; /* je: equal / zero */

loc_0046EF44: ;
    if (TEST_NZ(edi, 3)) goto loc_0046EF36; /* jne: not equal / not zero */

loc_0046EF4C: ;
    ebx = ecx;
    ecx = ecx >> 2;
    if ((ecx != 0)) goto loc_0046EFC7; /* jne: not equal / not zero */

loc_0046EF53: ;
    MEM8(edi) = LO8(eax);
    edi = edi + 1;

loc_0046EF58: ;
    ebx = ebx - 1;
    if ((ebx != 0)) goto loc_0046EF53; /* jne: not equal / not zero */

loc_0046EF5D: ;
    POP32(esp, ebx);
    POP32(esp, esi);

loc_0046EF5F: ;
    eax = MEM32(esp + 8);
    POP32(esp, edi);
    esp += 4; return; /* ret */

loc_0046EF65: ;
    MEM32(edi) = edx;
    edi = edi + 4;
    ecx = ecx - 1;
    if ((ecx == 0)) goto loc_0046EF0E; /* je: equal / zero */

loc_0046EF6F: ;
    edx = 0x7EFEFEFF;
    eax = MEM32(esi);
    edx = edx + eax;
    eax = eax ^ 0xFFFFFFFFu;
    eax = eax ^ edx;
    edx = MEM32(esi);
    esi = esi + 4;
    if (TEST_Z(eax, 0x81010100u)) goto loc_0046EF65; /* je: equal / zero */

loc_0046EF89: ;
    if (TEST_Z(LO8(edx), LO8(edx))) goto loc_0046EFB9; /* je: equal / zero */

loc_0046EF8D: ;
    if (TEST_Z(HI8(edx), HI8(edx))) goto loc_0046EFAF; /* je: equal / zero */

loc_0046EF91: ;
    if (TEST_Z(edx, 0xFF0000)) goto loc_0046EFA5; /* je: equal / zero */

loc_0046EF99: ;
    if (TEST_NZ(edx, 0xFF000000u)) goto loc_0046EF65; /* jne: not equal / not zero */

loc_0046EFA1: ;
    MEM32(edi) = edx;
    goto loc_0046EFBD;

loc_0046EFA5: ;
    edx = edx & 0xFFFF;
    MEM32(edi) = edx;
    goto loc_0046EFBD;

loc_0046EFAF: ;
    edx = edx & 0xFF;
    MEM32(edi) = edx;
    goto loc_0046EFBD;

loc_0046EFB9: ;
    edx = 0; /* xor self */
    MEM32(edi) = edx;

loc_0046EFBD: ;
    edi = edi + 4;
    eax = 0; /* xor self */
    ecx = ecx - 1;
    if ((ecx == 0)) goto loc_0046EFD3; /* je: equal / zero */

loc_0046EFC7: ;
    eax = 0; /* xor self */

loc_0046EFC9: ;
    MEM32(edi) = eax;
    edi = edi + 4;
    ecx = ecx - 1;
    if ((ecx != 0)) goto loc_0046EFC9; /* jne: not equal / not zero */

loc_0046EFD3: ;
    ebx = ebx & 3;
    if ((ebx != 0)) goto loc_0046EF53; /* jne: not equal / not zero */

loc_0046EFDC: ;
    eax = MEM32(esp + 0x10);
    POP32(esp, ebx);
    POP32(esp, esi);
    POP32(esp, edi);
    esp += 4; return; /* ret */

}

/**
 * sub_0046EFF0
 * Original: 0x0046EFF0 - 0x0046EFF5 (5 bytes, 3 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0046EFF0(void)
{

loc_0046EFF0: ;
    eax = edx + -1;
    POP32(esp, ebx);
    esp += 4; return; /* ret */

}

/**
 * sub_0046F000
 * Original: 0x0046F000 - 0x0046F07A (122 bytes, 47 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0046F000(void)
{
    int _flags = 0; /* fallback flag var */

loc_0046F000: ;
    eax = 0; /* xor self */
    SET_LO8(eax, MEM8(esp + 8));
    PUSH32(esp, ebx);
    ebx = eax;
    eax = eax << 8;
    edx = MEM32(esp + 8);
    if (TEST_Z(edx, 3)) goto loc_0046F02D; /* je: equal / zero */

loc_0046F018: ;
    SET_LO8(ecx, MEM8(edx));
    edx = edx + 1;
    if (CMP_EQ(LO8(ecx), LO8(ebx))) { sub_0046EFF0(); return; } /* je: equal / zero */

loc_0046F021: ;
    if (TEST_Z(LO8(ecx), LO8(ecx))) goto loc_0046F076; /* je: equal / zero */

loc_0046F025: ;
    if (TEST_NZ(edx, 3)) goto loc_0046F018; /* jne: not equal / not zero */

loc_0046F02D: ;
    ebx = ebx | eax;
    PUSH32(esp, edi);
    eax = ebx;
    ebx = ebx << 0x10;
    PUSH32(esp, esi);
    ebx = ebx | eax;

loc_0046F038: ;
    ecx = MEM32(edx);
    edi = 0x7EFEFEFF;
    eax = ecx;
    esi = edi;
    ecx = ecx ^ ebx;
    esi = esi + eax;
    edi = edi + ecx;
    ecx = ecx ^ 0xFFFFFFFFu;
    eax = eax ^ 0xFFFFFFFFu;
    ecx = ecx ^ edi;
    eax = eax ^ esi;
    edx = edx + 4;
    ecx = ecx & 0x81010100u;
    if ((ecx != 0)) { sub_0046F07A(); return; } /* jne: not equal / not zero */

loc_0046F05E: ;
    eax = eax & 0x81010100u;
    if ((eax == 0)) goto loc_0046F038; /* je: equal / zero */

loc_0046F065: ;
    eax = eax & 0x1010100;
    if ((eax != 0)) goto loc_0046F074; /* jne: not equal / not zero */

loc_0046F06C: ;
    esi = esi & 0x80000000u;
    if ((esi != 0)) goto loc_0046F038; /* jne: not equal / not zero */

loc_0046F074: ;
    POP32(esp, esi);
    POP32(esp, edi);

loc_0046F076: ;
    POP32(esp, ebx);
    eax = 0; /* xor self */
    esp += 4; return; /* ret */

}

/**
 * sub_0046F0C0
 * Original: 0x0046F0C0 - 0x0046F0F9 (57 bytes, 30 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0046F0C0(void)
{
    uint32_t ebp;
    int _flags = 0; /* fallback flag var */

loc_0046F0C0: ;
    PUSH32(esp, ebp);
    ebp = esp;
    PUSH32(esp, edi);
    PUSH32(esp, esi);
    PUSH32(esp, ebx);
    ecx = MEM32(ebp + 0x10);
    if (ecx == 0) goto loc_0046F0F2; /* jecxz */

loc_0046F0CB: ;
    ebx = ecx;
    edi = MEM32(ebp + 8);
    esi = edi;
    eax = 0; /* xor self */
    /* repne scasb - string scan, ecx iterations */
    ecx = (uint32_t)(-(int32_t)ecx);
    ecx = ecx + ebx;
    edi = esi;
    esi = MEM32(ebp + 0xC);
    /* repe cmpsb - string compare, ecx iterations */
    SET_LO8(eax, MEM8(esi + -1));
    ecx = 0; /* xor self */
    if (CMP_A(LO8(eax), MEM8(edi + -1))) goto loc_0046F0F0; /* ja: above (unsigned >) */

loc_0046F0EB: ;
    if (CMP_EQ(LO8(eax), MEM8(edi + -1))) goto loc_0046F0F2; /* je: equal / zero */

loc_0046F0ED: ;
    ecx = ecx - 2;

loc_0046F0F0: ;
    ecx = ~ecx;

loc_0046F0F2: ;
    eax = ecx;
    POP32(esp, ebx);
    POP32(esp, esi);
    POP32(esp, edi);
    esp = ebp;
    POP32(esp, ebp); /* leave */
    esp += 4; return; /* ret */

}

/**
 * sub_0046F100
 * Original: 0x0046F100 - 0x0046F22A (298 bytes, 117 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0046F100(void)
{
    int _flags = 0; /* fallback flag var */

loc_0046F100: ;
    ecx = MEM32(esp + 0xC);
    PUSH32(esp, edi);
    if (TEST_Z(ecx, ecx)) goto loc_0046F1C4; /* je: equal / zero */

loc_0046F10D: ;
    edi = MEM32(esp + 8);
    PUSH32(esp, esi);
    (void)0; /* test edi, 3 - flags set for next jcc */
    PUSH32(esp, ebx);
    if (TEST_Z(edi, 3)) goto loc_0046F12C; /* je: equal / zero */

loc_0046F11B: ;
    SET_LO8(eax, MEM8(edi));
    edi = edi + 1;
    if (TEST_Z(LO8(eax), LO8(eax))) goto loc_0046F15D; /* je: equal / zero */

loc_0046F124: ;
    if (TEST_NZ(edi, 3)) goto loc_0046F11B; /* jne: not equal / not zero */

loc_0046F12C: ;
    eax = MEM32(edi);
    edx = 0x7EFEFEFF;
    edx = edx + eax;
    eax = eax ^ 0xFFFFFFFFu;
    eax = eax ^ edx;
    edi = edi + 4;
    if (TEST_Z(eax, 0x81010100u)) goto loc_0046F12C; /* je: equal / zero */

loc_0046F144: ;
    eax = MEM32(edi + -4);
    if (TEST_Z(LO8(eax), LO8(eax))) goto loc_0046F16C; /* je: equal / zero */

loc_0046F14B: ;
    if (TEST_Z(HI8(eax), HI8(eax))) goto loc_0046F167; /* je: equal / zero */

loc_0046F14F: ;
    if (TEST_Z(eax, 0xFF0000)) goto loc_0046F162; /* je: equal / zero */

loc_0046F156: ;
    if (TEST_NZ(eax, 0xFF000000u)) goto loc_0046F12C; /* jne: not equal / not zero */

loc_0046F15D: ;
    edi = edi - 1;
    goto loc_0046F16F;

loc_0046F162: ;
    edi = edi - 2;
    goto loc_0046F16F;

loc_0046F167: ;
    edi = edi - 3;
    goto loc_0046F16F;

loc_0046F16C: ;
    edi = edi - 4;

loc_0046F16F: ;
    esi = MEM32(esp + 0x14);
    if (TEST_NZ(esi, 3)) goto loc_0046F184; /* jne: not equal / not zero */

loc_0046F17B: ;
    ebx = ecx;
    ecx = ecx >> 2;
    if ((ecx != 0)) goto loc_0046F1DE; /* jne: not equal / not zero */

loc_0046F182: ;
    goto loc_0046F1A6;

loc_0046F184: ;
    SET_LO8(edx, MEM8(esi));
    esi = esi + 1;
    if (TEST_Z(LO8(edx), LO8(edx))) goto loc_0046F1CA; /* je: equal / zero */

loc_0046F18D: ;
    MEM8(edi) = LO8(edx);
    edi = edi + 1;
    ecx = ecx - 1;
    if ((ecx == 0)) goto loc_0046F1C0; /* je: equal / zero */

loc_0046F197: ;
    if (TEST_NZ(esi, 3)) goto loc_0046F184; /* jne: not equal / not zero */

loc_0046F19F: ;
    ebx = ecx;
    ecx = ecx >> 2;
    if ((ecx != 0)) goto loc_0046F1DE; /* jne: not equal / not zero */

loc_0046F1A6: ;
    ecx = ebx;
    ecx = ecx & 3;
    if ((ecx == 0)) goto loc_0046F1C0; /* je: equal / zero */

loc_0046F1AD: ;
    SET_LO8(edx, MEM8(esi));
    esi = esi + 1;
    MEM8(edi) = LO8(edx);
    edi = edi + 1;
    if (TEST_Z(LO8(edx), LO8(edx))) goto loc_0046F1C2; /* je: equal / zero */

loc_0046F1BB: ;
    ecx = ecx - 1;
    if ((ecx != 0)) goto loc_0046F1AD; /* jne: not equal / not zero */

loc_0046F1C0: ;
    MEM8(edi) = LO8(ecx);

loc_0046F1C2: ;
    POP32(esp, ebx);
    POP32(esp, esi);

loc_0046F1C4: ;
    eax = MEM32(esp + 8);
    POP32(esp, edi);
    esp += 4; return; /* ret */

loc_0046F1CA: ;
    MEM8(edi) = LO8(edx);
    eax = MEM32(esp + 0x10);
    POP32(esp, ebx);
    POP32(esp, esi);
    POP32(esp, edi);
    esp += 4; return; /* ret */

loc_0046F1D4: ;
    MEM32(edi) = edx;
    edi = edi + 4;
    ecx = ecx - 1;
    if ((ecx == 0)) goto loc_0046F1A6; /* je: equal / zero */

loc_0046F1DE: ;
    edx = 0x7EFEFEFF;
    eax = MEM32(esi);
    edx = edx + eax;
    eax = eax ^ 0xFFFFFFFFu;
    eax = eax ^ edx;
    edx = MEM32(esi);
    esi = esi + 4;
    if (TEST_Z(eax, 0x81010100u)) goto loc_0046F1D4; /* je: equal / zero */

loc_0046F1F8: ;
    if (TEST_Z(LO8(edx), LO8(edx))) goto loc_0046F1CA; /* je: equal / zero */

loc_0046F1FC: ;
    if (TEST_Z(HI8(edx), HI8(edx))) { sub_0046F22A(); return; } /* je: equal / zero */

loc_0046F200: ;
    if (TEST_Z(edx, 0xFF0000)) goto loc_0046F21A; /* je: equal / zero */

loc_0046F208: ;
    if (TEST_NZ(edx, 0xFF000000u)) goto loc_0046F1D4; /* jne: not equal / not zero */

loc_0046F210: ;
    MEM32(edi) = edx;
    eax = MEM32(esp + 0x10);
    POP32(esp, ebx);
    POP32(esp, esi);
    POP32(esp, edi);
    esp += 4; return; /* ret */

loc_0046F21A: ;
    MEM16(edi) = LO16(edx);
    edx = 0; /* xor self */
    eax = MEM32(esp + 0x10);
    MEM8(edi + 2) = LO8(edx);
    POP32(esp, ebx);
    POP32(esp, esi);
    POP32(esp, edi);
    esp += 4; return; /* ret */

}

/**
 * sub_0046F235
 * Original: 0x0046F235 - 0x0046F258 (35 bytes, 15 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0046F235(void)
{
    int _flags = 0; /* fallback flag var */

loc_0046F235: ;
    eax = MEM32(esp + 4);
    (void)0; /* cmp MEM8(eax), 0 - flags set for next jcc */
    edx = eax;
    if (CMP_EQ(MEM8(eax), 0)) goto loc_0046F257; /* je: equal / zero */

loc_0046F240: ;
    SET_LO8(ecx, MEM8(edx));
    if (CMP_L(LO8(ecx), 0x61)) goto loc_0046F251; /* jl: less (signed <) */

loc_0046F247: ;
    if (CMP_G(LO8(ecx), 0x7A)) goto loc_0046F251; /* jg: greater (signed >) */

loc_0046F24C: ;
    SET_LO8(ecx, LO8(ecx) - 0x20);
    MEM8(edx) = LO8(ecx);

loc_0046F251: ;
    edx++;
    if (CMP_NE(MEM8(edx), 0)) goto loc_0046F240; /* jne: not equal / not zero */

loc_0046F257: ;
    esp += 4; return; /* ret */

}

/**
 * sub_0046F260
 * Original: 0x0046F260 - 0x0046F2E0 (128 bytes, 61 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0046F260(void)
{
    uint32_t ebp;
    int _flags = 0; /* fallback flag var */
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_0046F260: ;
    ecx = MEM32(esp + 8);
    PUSH32(esp, edi);
    PUSH32(esp, ebx);
    PUSH32(esp, esi);
    SET_LO8(edx, MEM8(ecx));
    edi = MEM32(esp + 0x10);
    if (TEST_Z(LO8(edx), LO8(edx))) { sub_0046F2E0(); return; } /* je: equal / zero */

loc_0046F271: ;
    SET_HI8(edx, MEM8(ecx + 1));
    if (TEST_Z(HI8(edx), HI8(edx))) goto loc_0046F2CD; /* je: equal / zero */

loc_0046F278: ;
    esi = edi;
    ecx = MEM32(esp + 0x14);
    SET_LO8(eax, MEM8(edi));
    esi = esi + 1;
    if (CMP_EQ(LO8(eax), LO8(edx))) goto loc_0046F29E; /* je: equal / zero */

loc_0046F287: ;
    if (TEST_Z(LO8(eax), LO8(eax))) goto loc_0046F298; /* je: equal / zero */

loc_0046F28B: ;
    SET_LO8(eax, MEM8(esi));
    esi = esi + 1;

loc_0046F290: ;
    if (CMP_EQ(LO8(eax), LO8(edx))) goto loc_0046F29E; /* je: equal / zero */

loc_0046F294: ;
    if (TEST_NZ(LO8(eax), LO8(eax))) goto loc_0046F28B; /* jne: not equal / not zero */

loc_0046F298: ;
    POP32(esp, esi);
    POP32(esp, ebx);
    POP32(esp, edi);
    eax = 0; /* xor self */
    esp += 4; return; /* ret */

loc_0046F29E: ;
    SET_LO8(eax, MEM8(esi));
    esi = esi + 1;
    if (CMP_NE(LO8(eax), HI8(edx))) goto loc_0046F290; /* jne: not equal / not zero */

loc_0046F2A7: ;
    edi = esi + -1;

loc_0046F2AA: ;
    SET_HI8(eax, MEM8(ecx + 2));
    if (TEST_Z(HI8(eax), HI8(eax))) goto loc_0046F2D9; /* je: equal / zero */

loc_0046F2B1: ;
    SET_LO8(eax, MEM8(esi));
    esi = esi + 2;
    if (CMP_NE(LO8(eax), HI8(eax))) goto loc_0046F278; /* jne: not equal / not zero */

loc_0046F2BA: ;
    SET_LO8(eax, MEM8(ecx + 3));
    if (TEST_Z(LO8(eax), LO8(eax))) goto loc_0046F2D9; /* je: equal / zero */

loc_0046F2C1: ;
    SET_HI8(eax, MEM8(esi + -1));
    ecx = ecx + 2;
    if (CMP_EQ(LO8(eax), HI8(eax))) goto loc_0046F2AA; /* je: equal / zero */

loc_0046F2CB: ;
    goto loc_0046F278;

loc_0046F2CD: ;
    eax = 0; /* xor self */
    POP32(esp, esi);
    POP32(esp, ebx);
    POP32(esp, edi);
    SET_LO8(eax, LO8(edx));
    g_seh_ebp = ebp; sub_0046F006(); return; /* tail jmp 0x0046F006 */

loc_0046F2D9: ;
    eax = edi + -1;
    POP32(esp, esi);
    POP32(esp, ebx);
    POP32(esp, edi);
    esp += 4; return; /* ret */

}

/**
 * sub_0046F2E6
 * Original: 0x0046F2E6 - 0x0046F30D (39 bytes, 11 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0046F2E6(void)
{
    uint32_t ebp;
    int _flags = 0; /* fallback flag var */
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_0046F2E6: ;
    PUSH32(esp, 0x10);
    PUSH32(esp, 0x586288);
    PUSH32(esp, 0); sub_00470A34(); /* call 0x00470A34 */
    ebp = g_seh_ebp; /* read back frame from SEH helper */

loc_0046F2F2: ;
    PUSH32(esp, 0); sub_00479044(); /* call 0x00479044 */

loc_0046F2F7: ;
    MEM32(ebp + -28) = eax;
    if (TEST_NZ(eax, eax)) { sub_0046F30D(); return; } /* jne: not equal / not zero */

loc_0046F2FE: ;
    PUSH32(esp, 0); sub_00471B14(); /* call 0x00471B14 */

loc_0046F303: ;
    MEM32(eax) = 0x18;
    eax = 0; /* xor self */
    g_seh_ebp = ebp; sub_0046F332(); return; /* tail jmp 0x0046F332 */

}

/**
 * sub_0046F338
 * Original: 0x0046F338 - 0x0046F342 (10 bytes, 4 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0046F338(void)
{
    uint32_t ebp;
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_0046F338: ;
    PUSH32(esp, MEM32(ebp + -28));
    PUSH32(esp, 0); sub_0047165B(); /* call 0x0047165B */

loc_0046F340: ;
    POP32(esp, ecx);
    esp += 4; return; /* ret */

}

/**
 * sub_0046F342
 * Original: 0x0046F342 - 0x0046F355 (19 bytes, 6 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0046F342(void)
{

loc_0046F342: ;
    PUSH32(esp, 0x40);
    PUSH32(esp, MEM32(esp + 0xC));
    PUSH32(esp, MEM32(esp + 0xC));
    PUSH32(esp, 0); sub_0046F2E6(); /* call 0x0046F2E6 */

loc_0046F351: ;
    esp = esp + 0xC;
    esp += 4; return; /* ret */

}

/**
 * sub_0046F355
 * Original: 0x0046F355 - 0x0046F3A1 (76 bytes, 30 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0046F355(void)
{
    int _flags = 0; /* fallback flag var */

loc_0046F355: ;
    PUSH32(esp, esi);
    esi = MEM32(esp + 8);
    PUSH32(esp, edi);
    edi = edi | 0xFFFFFFFFu;
    if (TEST_Z(MEM8(esi + 0xC), 0x83)) goto loc_0046F398; /* je: equal / zero */

loc_0046F364: ;
    PUSH32(esp, esi);
    PUSH32(esp, 0); sub_0046F9C4(); /* call 0x0046F9C4 */

loc_0046F36A: ;
    PUSH32(esp, esi);
    edi = eax;
    PUSH32(esp, 0); sub_00479282(); /* call 0x00479282 */

loc_0046F372: ;
    PUSH32(esp, MEM32(esi + 0x10));
    PUSH32(esp, 0); sub_004791E7(); /* call 0x004791E7 */

loc_0046F37A: ;
    esp = esp + 0xC;
    if (CMP_GE(eax & eax, 0)) goto loc_0046F386; /* jge: greater or equal (signed >=) */

loc_0046F381: ;
    edi = edi | 0xFFFFFFFFu;
    goto loc_0046F398;

loc_0046F386: ;
    eax = MEM32(esi + 0x1C);
    if (TEST_Z(eax, eax)) goto loc_0046F398; /* je: equal / zero */

loc_0046F38D: ;
    PUSH32(esp, eax);
    PUSH32(esp, 0); sub_0046FB7D(); /* call 0x0046FB7D */

loc_0046F393: ;
    MEM32(esi + 0x1C) = MEM32(esi + 0x1C) & 0;
    POP32(esp, ecx);

loc_0046F398: ;
    MEM32(esi + 0xC) = MEM32(esi + 0xC) & 0;
    eax = edi;
    POP32(esp, edi);
    POP32(esp, esi);
    esp += 4; return; /* ret */

}

/**
 * sub_0046F3A1
 * Original: 0x0046F3A1 - 0x0046F3C7 (38 bytes, 11 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0046F3A1(void)
{
    uint32_t ebp;
    int _flags = 0; /* fallback flag var */
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_0046F3A1: ;
    PUSH32(esp, 0xC);
    PUSH32(esp, 0x586298);
    PUSH32(esp, 0); sub_00470A34(); /* call 0x00470A34 */
    ebp = g_seh_ebp; /* read back frame from SEH helper */

loc_0046F3AD: ;
    MEM32(ebp + -28) = MEM32(ebp + -28) | 0xFFFFFFFFu;
    esi = MEM32(ebp + 8);
    if (TEST_Z(MEM8(esi + 0xC), 0x40)) { sub_0046F3C7(); return; } /* je: equal / zero */

loc_0046F3BA: ;
    MEM32(esi + 0xC) = MEM32(esi + 0xC) & 0;
    eax = MEM32(ebp + -28);
    PUSH32(esp, 0); sub_00470A6F(); /* call 0x00470A6F */
    ebp = g_seh_ebp; /* read back frame from SEH helper */

loc_0046F3C6: ;
    esp += 4; return; /* ret */

}

/**
 * sub_0046F3EA
 * Original: 0x0046F3EA - 0x0046F3F2 (8 bytes, 4 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0046F3EA(void)
{

loc_0046F3EA: ;
    PUSH32(esp, esi);
    PUSH32(esp, 0); sub_0047165B(); /* call 0x0047165B */

loc_0046F3F0: ;
    POP32(esp, ecx);
    esp += 4; return; /* ret */

}

/**
 * sub_0046F3F2
 * Original: 0x0046F3F2 - 0x0046F470 (126 bytes, 49 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0046F3F2(void)
{
    uint32_t ebp;
    int _flags = 0; /* fallback flag var */
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_0046F3F2: ;
    PUSH32(esp, esi);
    esi = MEM32(esp + 8);
    eax = MEM32(esi + 0xC);
    (void)0; /* test LO8(eax), 0x83 - flags set for next jcc */
    PUSH32(esp, edi);
    if (TEST_Z(LO8(eax), 0x83)) { sub_0046F470(); return; } /* je: equal / zero */

loc_0046F3FF: ;
    edi = MEM32(esp + 0x14);
    if (TEST_Z(edi, edi)) goto loc_0046F411; /* je: equal / zero */

loc_0046F407: ;
    if (CMP_EQ(edi, 1)) goto loc_0046F411; /* je: equal / zero */

loc_0046F40C: ;
    if (CMP_NE(edi, 2)) { sub_0046F470(); return; } /* jne: not equal / not zero */

loc_0046F411: ;
    eax = eax & 0xFFFFFFEFu;
    (void)0; /* cmp edi, 1 - flags set for next jcc */
    MEM32(esi + 0xC) = eax;
    if (CMP_NE(edi, 1)) goto loc_0046F429; /* jne: not equal / not zero */

loc_0046F41C: ;
    PUSH32(esp, esi);
    PUSH32(esp, 0); sub_004713EA(); /* call 0x004713EA */

loc_0046F422: ;
    MEM32(esp + 0x14) = MEM32(esp + 0x14) + eax;
    POP32(esp, ecx);
    edi = 0; /* xor self */

loc_0046F429: ;
    PUSH32(esp, esi);
    PUSH32(esp, 0); sub_0046F9C4(); /* call 0x0046F9C4 */

loc_0046F42F: ;
    eax = MEM32(esi + 0xC);
    (void)0; /* test LO8(eax), LO8(eax) - flags set for next jcc */
    POP32(esp, ecx);
    if (((int32_t)(LO8(eax) & LO8(eax)) >= 0)) goto loc_0046F43F; /* jns: not sign (positive) */

loc_0046F437: ;
    eax = eax & 0xFFFFFFFCu;
    MEM32(esi + 0xC) = eax;
    goto loc_0046F453;

loc_0046F43F: ;
    if (TEST_Z(LO8(eax), 1)) goto loc_0046F453; /* je: equal / zero */

loc_0046F443: ;
    if (TEST_Z(LO8(eax), 8)) goto loc_0046F453; /* je: equal / zero */

loc_0046F447: ;
    if (TEST_NZ(HI8(eax), 4)) goto loc_0046F453; /* jne: not equal / not zero */

loc_0046F44C: ;
    MEM32(esi + 0x18) = 0x200;

loc_0046F453: ;
    PUSH32(esp, edi);
    PUSH32(esp, MEM32(esp + 0x14));
    PUSH32(esp, MEM32(esi + 0x10));
    PUSH32(esp, 0); sub_00479400(); /* call 0x00479400 */

loc_0046F460: ;
    ecx = 0; /* xor self */
    esp = esp + 0xC;
    (void)0; /* cmp eax, 0xFFFFFFFFu - flags set for next jcc */
    SET_LO8(ecx, (CMP_NE(eax, 0xFFFFFFFFu)) ? 1 : 0); /* setne */
    ecx--;
    eax = ecx;
    g_seh_ebp = ebp; sub_0046F47E(); return; /* tail jmp 0x0046F47E */

}

/**
 * sub_0046F481
 * Original: 0x0046F481 - 0x0046F4C0 (63 bytes, 18 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0046F481(void)
{
    uint32_t ebp;
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_0046F481: ;
    PUSH32(esp, 0xC);
    PUSH32(esp, 0x5862A8);
    PUSH32(esp, 0); sub_00470A34(); /* call 0x00470A34 */
    ebp = g_seh_ebp; /* read back frame from SEH helper */

loc_0046F48D: ;
    PUSH32(esp, MEM32(ebp + 8));
    PUSH32(esp, 0); sub_00471609(); /* call 0x00471609 */

loc_0046F495: ;
    POP32(esp, ecx);
    MEM32(ebp + -4) = MEM32(ebp + -4) & 0;
    PUSH32(esp, MEM32(ebp + 0x10));
    PUSH32(esp, MEM32(ebp + 0xC));
    PUSH32(esp, MEM32(ebp + 8));
    PUSH32(esp, 0); sub_0046F3F2(); /* call 0x0046F3F2 */

loc_0046F4A8: ;
    esp = esp + 0xC;
    MEM32(ebp + -28) = eax;
    MEM32(ebp + -4) = MEM32(ebp + -4) | 0xFFFFFFFFu;
    PUSH32(esp, 0); sub_0046F4C0(); /* call 0x0046F4C0 */

loc_0046F4B7: ;
    eax = MEM32(ebp + -28);
    PUSH32(esp, 0); sub_00470A6F(); /* call 0x00470A6F */
    ebp = g_seh_ebp; /* read back frame from SEH helper */

loc_0046F4BF: ;
    esp += 4; return; /* ret */

}

/**
 * sub_0046F4C0
 * Original: 0x0046F4C0 - 0x0046F4CA (10 bytes, 4 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0046F4C0(void)
{
    uint32_t ebp;
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_0046F4C0: ;
    PUSH32(esp, MEM32(ebp + 8));
    PUSH32(esp, 0); sub_0047165B(); /* call 0x0047165B */

loc_0046F4C8: ;
    POP32(esp, ecx);
    esp += 4; return; /* ret */

}

/**
 * sub_0046F4CA
 * Original: 0x0046F4CA - 0x0046F552 (136 bytes, 58 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0046F4CA(void)
{
    int _flags = 0; /* fallback flag var */

loc_0046F4CA: ;
    (void)0; /* cmp MEM32(0x75F9C4), 0 - flags set for next jcc */
    PUSH32(esp, ebx);
    if (CMP_NE(MEM32(0x75F9C4), 0)) goto loc_0046F514; /* jne: not equal / not zero */

loc_0046F4D4: ;
    edx = MEM32(esp + 0xC);
    ecx = MEM32(esp + 8);

loc_0046F4DC: ;
    ebx = 0; /* xor self */
    SET_LO16(ebx, MEM16(ecx));
    if (CMP_B(LO16(ebx), 0x41)) goto loc_0046F4F0; /* jb: below (unsigned <) */

loc_0046F4E7: ;
    if (CMP_A(LO16(ebx), 0x5A)) goto loc_0046F4F0; /* ja: above (unsigned >) */

loc_0046F4ED: ;
    ebx = ebx + 0x20;

loc_0046F4F0: ;
    eax = 0; /* xor self */
    SET_LO16(eax, MEM16(edx));
    if (CMP_B(LO16(eax), 0x41)) goto loc_0046F504; /* jb: below (unsigned <) */

loc_0046F4FB: ;
    if (CMP_A(LO16(eax), 0x5A)) goto loc_0046F504; /* ja: above (unsigned >) */

loc_0046F501: ;
    eax = eax + 0x20;

loc_0046F504: ;
    ecx++;
    ecx++;
    edx++;
    edx++;
    if (TEST_Z(LO16(ebx), LO16(ebx))) goto loc_0046F548; /* je: equal / zero */

loc_0046F50D: ;
    if (CMP_EQ(LO16(ebx), LO16(eax))) goto loc_0046F4DC; /* je: equal / zero */

loc_0046F512: ;
    goto loc_0046F548;

loc_0046F514: ;
    PUSH32(esp, esi);
    esi = MEM32(esp + 0xC);
    PUSH32(esp, edi);
    edi = MEM32(esp + 0x14);

loc_0046F51E: ;
    eax = 0; /* xor self */
    SET_LO16(eax, MEM16(esi));
    PUSH32(esp, eax);
    PUSH32(esp, 0); sub_0047123F(); /* call 0x0047123F */

loc_0046F529: ;
    esi++;
    esi++;
    ebx = eax;
    eax = 0; /* xor self */
    SET_LO16(eax, MEM16(edi));
    PUSH32(esp, eax);
    PUSH32(esp, 0); sub_0047123F(); /* call 0x0047123F */

loc_0046F538: ;
    edi++;
    POP32(esp, ecx);
    edi++;
    (void)0; /* test LO16(ebx), LO16(ebx) - flags set for next jcc */
    POP32(esp, ecx);
    if (TEST_Z(LO16(ebx), LO16(ebx))) goto loc_0046F546; /* je: equal / zero */

loc_0046F541: ;
    if (CMP_EQ(LO16(ebx), LO16(eax))) goto loc_0046F51E; /* je: equal / zero */

loc_0046F546: ;
    POP32(esp, edi);
    POP32(esp, esi);

loc_0046F548: ;
    ecx = ZX16(LO16(eax));
    eax = ZX16(LO16(ebx));
    eax = eax - ecx;
    POP32(esp, ebx);
    esp += 4; return; /* ret */

}

/**
 * sub_0046F552
 * Original: 0x0046F552 - 0x0046F56C (26 bytes, 10 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0046F552(void)
{
    uint32_t ebp;
    int _flags = 0; /* fallback flag var */
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_0046F552: ;
    (void)0; /* cmp MEM32(0x655AF0), 1 - flags set for next jcc */
    PUSH32(esp, esi);
    esi = MEM32(esp + 8);
    if (CMP_LE(MEM32(0x655AF0), 1)) { sub_0046F56C(); return; } /* jle: less or equal (signed <=) */

loc_0046F560: ;
    PUSH32(esp, 2);
    PUSH32(esp, esi);
    PUSH32(esp, 0); sub_00472114(); /* call 0x00472114 */

loc_0046F568: ;
    POP32(esp, ecx);
    POP32(esp, ecx);
    g_seh_ebp = ebp; sub_0046F578(); return; /* tail jmp 0x0046F578 */

}

/**
 * sub_0046F583
 * Original: 0x0046F583 - 0x0046F5C6 (67 bytes, 23 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0046F583(void)
{
    uint32_t ebp;
    int _flags = 0; /* fallback flag var */

loc_0046F583: ;
    PUSH32(esp, ebp);
    ebp = esp;
    esp = esp - 0x20;
    eax = MEM32(ebp + 8);
    MEM32(ebp + -24) = eax;
    MEM32(ebp + -32) = eax;
    PUSH32(esp, esi);
    eax = ebp + 0x10;
    PUSH32(esp, eax);
    PUSH32(esp, MEM32(ebp + 0xC));
    eax = ebp + -32;
    PUSH32(esp, eax);
    MEM32(ebp + -20) = 0x42;
    MEM32(ebp + -28) = 0x7FFFFFFF;
    PUSH32(esp, 0); sub_00478666(); /* call 0x00478666 */

loc_0046F5B1: ;
    esp = esp + 0xC;
    MEM32(ebp + -28) = MEM32(ebp + -28) - 1;
    esi = eax;
    if (((int32_t)MEM32(ebp + -28) < 0)) { sub_0046F5C6(); return; } /* js: sign (negative) */

loc_0046F5BB: ;
    eax = MEM32(ebp + -32);
    MEM8(eax) = 0;
    MEM32(ebp + -32) = MEM32(ebp + -32) + 1;
    g_seh_ebp = ebp; sub_0046F5D3(); return; /* tail jmp 0x0046F5D3 */

}

/**
 * sub_0046F5F2
 * Original: 0x0046F5F2 - 0x0046F61F (45 bytes, 16 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0046F5F2(void)
{
    uint32_t ebp;
    int _flags = 0; /* fallback flag var */
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_0046F5F2: ;
    PUSH32(esp, 0xC);
    PUSH32(esp, 0x5862B8);
    PUSH32(esp, 0); sub_00470A34(); /* call 0x00470A34 */
    ebp = g_seh_ebp; /* read back frame from SEH helper */

loc_0046F5FE: ;
    esi = MEM32(ebp + 0xC);
    PUSH32(esp, esi);
    PUSH32(esp, 0); sub_00471609(); /* call 0x00471609 */

loc_0046F607: ;
    POP32(esp, ecx);
    MEM32(ebp + -4) = MEM32(ebp + -4) & 0;
    MEM32(esi + 4) = MEM32(esi + 4) - 1;
    if (((int32_t)MEM32(esi + 4) < 0)) { sub_0046F61F(); return; } /* js: sign (negative) */

loc_0046F611: ;
    ecx = MEM32(esi);
    SET_LO8(eax, MEM8(ebp + 8));
    MEM8(ecx) = LO8(eax);
    eax = ZX8(LO8(eax));
    MEM32(esi) = MEM32(esi) + 1;
    g_seh_ebp = ebp; sub_0046F62A(); return; /* tail jmp 0x0046F62A */

}

/**
 * sub_0046F642
 * Original: 0x0046F642 - 0x0046F64A (8 bytes, 4 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0046F642(void)
{

loc_0046F642: ;
    PUSH32(esp, esi);
    PUSH32(esp, 0); sub_0047165B(); /* call 0x0047165B */

loc_0046F648: ;
    POP32(esp, ecx);
    esp += 4; return; /* ret */

}

/**
 * sub_0046F64A
 * Original: 0x0046F64A - 0x0046F672 (40 bytes, 16 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0046F64A(void)
{
    uint32_t ebp;
    int _flags = 0; /* fallback flag var */

loc_0046F64A: ;
    PUSH32(esp, ebp);
    ebp = esp;
    esp = esp - 0xC;
    edx = MEM32(ebp + 8);
    PUSH32(esp, esi);
    PUSH32(esp, edi);
    edi = MEM32(ebp + 0xC);
    edi = (uint32_t)((int32_t)edi * (int32_t)MEM32(ebp + 0x10));
    (void)0; /* test edi, edi - flags set for next jcc */
    esi = edi;
    MEM32(ebp + 8) = edx;
    MEM32(ebp + -12) = edi;
    MEM32(ebp + -4) = esi;
    if (TEST_NZ(edi, edi)) { sub_0046F672(); return; } /* jne: not equal / not zero */

loc_0046F66B: ;
    eax = 0; /* xor self */
    g_seh_ebp = ebp; sub_0046F752(); return; /* tail jmp 0x0046F752 */

}

/**
 * sub_0046F761
 * Original: 0x0046F761 - 0x0046F7A3 (66 bytes, 19 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0046F761(void)
{
    uint32_t ebp;
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_0046F761: ;
    PUSH32(esp, 0xC);
    PUSH32(esp, 0x5862C8);
    PUSH32(esp, 0); sub_00470A34(); /* call 0x00470A34 */
    ebp = g_seh_ebp; /* read back frame from SEH helper */

loc_0046F76D: ;
    PUSH32(esp, MEM32(ebp + 0x14));
    PUSH32(esp, 0); sub_00471609(); /* call 0x00471609 */

loc_0046F775: ;
    POP32(esp, ecx);
    MEM32(ebp + -4) = MEM32(ebp + -4) & 0;
    PUSH32(esp, MEM32(ebp + 0x14));
    PUSH32(esp, MEM32(ebp + 0x10));
    PUSH32(esp, MEM32(ebp + 0xC));
    PUSH32(esp, MEM32(ebp + 8));
    PUSH32(esp, 0); sub_0046F64A(); /* call 0x0046F64A */

loc_0046F78B: ;
    esp = esp + 0x10;
    MEM32(ebp + -28) = eax;
    MEM32(ebp + -4) = MEM32(ebp + -4) | 0xFFFFFFFFu;
    PUSH32(esp, 0); sub_0046F7A3(); /* call 0x0046F7A3 */

loc_0046F79A: ;
    eax = MEM32(ebp + -28);
    PUSH32(esp, 0); sub_00470A6F(); /* call 0x00470A6F */
    ebp = g_seh_ebp; /* read back frame from SEH helper */

loc_0046F7A2: ;
    esp += 4; return; /* ret */

}

/**
 * sub_0046F7A3
 * Original: 0x0046F7A3 - 0x0046F7AD (10 bytes, 4 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0046F7A3(void)
{
    uint32_t ebp;
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_0046F7A3: ;
    PUSH32(esp, MEM32(ebp + 0x14));
    PUSH32(esp, 0); sub_0047165B(); /* call 0x0047165B */

loc_0046F7AB: ;
    POP32(esp, ecx);
    esp += 4; return; /* ret */

}

/**
 * sub_0046F7AD
 * Original: 0x0046F7AD - 0x0046F7D6 (41 bytes, 15 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0046F7AD(void)
{
    uint32_t ebp;
    int _flags = 0; /* fallback flag var */
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_0046F7AD: ;
    PUSH32(esp, 0xC);
    PUSH32(esp, 0x5862D8);
    PUSH32(esp, 0); sub_00470A34(); /* call 0x00470A34 */
    ebp = g_seh_ebp; /* read back frame from SEH helper */

loc_0046F7B9: ;
    esi = MEM32(ebp + 8);
    PUSH32(esp, esi);
    PUSH32(esp, 0); sub_00471609(); /* call 0x00471609 */

loc_0046F7C2: ;
    POP32(esp, ecx);
    MEM32(ebp + -4) = MEM32(ebp + -4) & 0;
    MEM32(esi + 4) = MEM32(esi + 4) - 1;
    if (((int32_t)MEM32(esi + 4) < 0)) { sub_0046F7D6(); return; } /* js: sign (negative) */

loc_0046F7CC: ;
    ecx = MEM32(esi);
    eax = ZX8(MEM8(ecx));
    ecx++;
    MEM32(esi) = ecx;
    g_seh_ebp = ebp; sub_0046F7DD(); return; /* tail jmp 0x0046F7DD */

}

/**
 * sub_0046F7F5
 * Original: 0x0046F7F5 - 0x0046F7FD (8 bytes, 4 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0046F7F5(void)
{

loc_0046F7F5: ;
    PUSH32(esp, esi);
    PUSH32(esp, 0); sub_0047165B(); /* call 0x0047165B */

loc_0046F7FB: ;
    POP32(esp, ecx);
    esp += 4; return; /* ret */

}

/**
 * sub_0046F7FD
 * Original: 0x0046F7FD - 0x0046F869 (108 bytes, 46 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0046F7FD(void)
{
    int _flags = 0; /* fallback flag var */

loc_0046F7FD: ;
    PUSH32(esp, ebx);
    ebx = MEM32(esp + 8);
    (void)0; /* cmp ebx, 0xFFFFFFFFu - flags set for next jcc */
    PUSH32(esp, esi);
    if (CMP_EQ(ebx, 0xFFFFFFFFu)) goto loc_0046F849; /* je: equal / zero */

loc_0046F808: ;
    esi = MEM32(esp + 0x10);
    eax = MEM32(esi + 0xC);
    if (TEST_NZ(LO8(eax), 1)) goto loc_0046F81B; /* jne: not equal / not zero */

loc_0046F813: ;
    if (((int32_t)(LO8(eax) & LO8(eax)) >= 0)) goto loc_0046F849; /* jns: not sign (positive) */

loc_0046F817: ;
    if (TEST_NZ(LO8(eax), 2)) goto loc_0046F849; /* jne: not equal / not zero */

loc_0046F81B: ;
    if (CMP_NE(MEM32(esi + 8), 0)) goto loc_0046F828; /* jne: not equal / not zero */

loc_0046F821: ;
    PUSH32(esp, esi);
    PUSH32(esp, 0); sub_004796E1(); /* call 0x004796E1 */

loc_0046F827: ;
    POP32(esp, ecx);

loc_0046F828: ;
    eax = MEM32(esi);
    if (CMP_NE(eax, MEM32(esi + 8))) goto loc_0046F838; /* jne: not equal / not zero */

loc_0046F82F: ;
    if (CMP_NE(MEM32(esi + 4), 0)) goto loc_0046F849; /* jne: not equal / not zero */

loc_0046F835: ;
    eax++;
    MEM32(esi) = eax;

loc_0046F838: ;
    MEM32(esi) = MEM32(esi) - 1;
    (void)0; /* test MEM8(esi + 0xC), 0x40 - flags set for next jcc */
    eax = MEM32(esi);
    if (TEST_Z(MEM8(esi + 0xC), 0x40)) goto loc_0046F84F; /* je: equal / zero */

loc_0046F842: ;
    if (CMP_EQ(MEM8(eax), LO8(ebx))) goto loc_0046F851; /* je: equal / zero */

loc_0046F846: ;
    eax++;
    MEM32(esi) = eax;

loc_0046F849: ;
    eax = eax | 0xFFFFFFFFu;

loc_0046F84C: ;
    POP32(esp, esi);
    POP32(esp, ebx);
    esp += 4; return; /* ret */

loc_0046F84F: ;
    MEM8(eax) = LO8(ebx);

loc_0046F851: ;
    eax = MEM32(esi + 0xC);
    MEM32(esi + 4) = MEM32(esi + 4) + 1;
    eax = eax & 0xFFFFFFEFu;
    eax = eax | 1;
    MEM32(esi + 0xC) = eax;
    eax = ebx;
    eax = eax & 0xFF;
    goto loc_0046F84C;

}

/**
 * sub_0046F869
 * Original: 0x0046F869 - 0x0046F8A4 (59 bytes, 18 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0046F869(void)
{
    uint32_t ebp;
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_0046F869: ;
    PUSH32(esp, 0xC);
    PUSH32(esp, 0x5862E8);
    PUSH32(esp, 0); sub_00470A34(); /* call 0x00470A34 */
    ebp = g_seh_ebp; /* read back frame from SEH helper */

loc_0046F875: ;
    PUSH32(esp, MEM32(ebp + 0xC));
    PUSH32(esp, 0); sub_00471609(); /* call 0x00471609 */

loc_0046F87D: ;
    POP32(esp, ecx);
    MEM32(ebp + -4) = MEM32(ebp + -4) & 0;
    PUSH32(esp, MEM32(ebp + 0xC));
    PUSH32(esp, MEM32(ebp + 8));
    PUSH32(esp, 0); sub_0046F7FD(); /* call 0x0046F7FD */

loc_0046F88D: ;
    POP32(esp, ecx);
    POP32(esp, ecx);
    MEM32(ebp + -28) = eax;
    MEM32(ebp + -4) = MEM32(ebp + -4) | 0xFFFFFFFFu;
    PUSH32(esp, 0); sub_0046F8A4(); /* call 0x0046F8A4 */

loc_0046F89B: ;
    eax = MEM32(ebp + -28);
    PUSH32(esp, 0); sub_00470A6F(); /* call 0x00470A6F */
    ebp = g_seh_ebp; /* read back frame from SEH helper */

loc_0046F8A3: ;
    esp += 4; return; /* ret */

}

/**
 * sub_0046F8A4
 * Original: 0x0046F8A4 - 0x0046F8AE (10 bytes, 4 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0046F8A4(void)
{
    uint32_t ebp;
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_0046F8A4: ;
    PUSH32(esp, MEM32(ebp + 0xC));
    PUSH32(esp, 0); sub_0047165B(); /* call 0x0047165B */

loc_0046F8AC: ;
    POP32(esp, ecx);
    esp += 4; return; /* ret */

}

/**
 * sub_0046F8AE
 * Original: 0x0046F8AE - 0x0046F8D0 (34 bytes, 13 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0046F8AE(void)
{
    int _flags = 0; /* fallback flag var */

loc_0046F8AE: ;
    PUSH32(esp, MEM32(esp + 4));
    PUSH32(esp, 0); sub_004798BA(); /* call 0x004798BA */

loc_0046F8B7: ;
    POP32(esp, ecx);
    ecx = MEM32(esp + 8);
    MEM32(ecx + 4) = edx;
    edx = eax;
    edx = edx & MEM32(ecx + 4);
    MEM32(ecx) = eax;
    eax = eax | 0xFFFFFFFFu;
    if (CMP_EQ(edx, eax)) goto loc_0046F8CF; /* je: equal / zero */

loc_0046F8CD: ;
    eax = 0; /* xor self */

loc_0046F8CF: ;
    esp += 4; return; /* ret */

}

/**
 * sub_0046F8D0
 * Original: 0x0046F8D0 - 0x0046F8E8 (24 bytes, 8 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0046F8D0(void)
{

loc_0046F8D0: ;
    eax = MEM32(esp + 8);
    PUSH32(esp, 0);
    PUSH32(esp, MEM32(eax + 4));
    PUSH32(esp, MEM32(eax));
    PUSH32(esp, MEM32(esp + 0x10));
    PUSH32(esp, 0); sub_00479994(); /* call 0x00479994 */

loc_0046F8E4: ;
    esp = esp + 0x10;
    esp += 4; return; /* ret */

}

/**
 * sub_0046F8E8
 * Original: 0x0046F8E8 - 0x0046F921 (57 bytes, 18 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0046F8E8(void)
{
    uint32_t ebp;
    int _flags = 0; /* fallback flag var */
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_0046F8E8: ;
    PUSH32(esp, 0x10);
    PUSH32(esp, 0x5862F8);
    PUSH32(esp, 0); sub_00470A34(); /* call 0x00470A34 */
    ebp = g_seh_ebp; /* read back frame from SEH helper */

loc_0046F8F4: ;
    edi = 0; /* xor self */
    MEM32(ebp + -28) = edi;
    ebx = MEM32(ebp + 0x10);
    if (CMP_EQ(ebx, 4)) { sub_0046F921(); return; } /* je: equal / zero */

loc_0046F901: ;
    if (CMP_B(MEM32(ebp + 0x14), 2)) goto loc_0046F919; /* jb: below (unsigned <) */

loc_0046F907: ;
    if (CMP_A(MEM32(ebp + 0x14), 0x7FFFFFFF)) goto loc_0046F919; /* ja: above (unsigned >) */

loc_0046F910: ;
    if (CMP_EQ(ebx, edi)) { sub_0046F921(); return; } /* je: equal / zero */

loc_0046F914: ;
    if (CMP_EQ(ebx, 0x40)) { sub_0046F921(); return; } /* je: equal / zero */

loc_0046F919: ;
    eax = eax | 0xFFFFFFFFu;
    g_seh_ebp = ebp; sub_0046F9B4(); return; /* tail jmp 0x0046F9B4 */

}

/**
 * sub_0046F9BA
 * Original: 0x0046F9BA - 0x0046F9C4 (10 bytes, 4 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0046F9BA(void)
{
    uint32_t ebp;
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_0046F9BA: ;
    PUSH32(esp, MEM32(ebp + -32));
    PUSH32(esp, 0); sub_0047165B(); /* call 0x0047165B */

loc_0046F9C2: ;
    POP32(esp, ecx);
    esp += 4; return; /* ret */

}

/**
 * sub_0046F9C4
 * Original: 0x0046F9C4 - 0x0046FA21 (93 bytes, 40 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0046F9C4(void)
{
    int _flags = 0; /* fallback flag var */

loc_0046F9C4: ;
    PUSH32(esp, ebx);
    PUSH32(esp, esi);
    esi = MEM32(esp + 0xC);
    eax = MEM32(esi + 0xC);
    ecx = eax;
    SET_LO8(ecx, LO8(ecx) & 3);
    ebx = 0; /* xor self */
    if (CMP_NE(LO8(ecx), 2)) goto loc_0046FA13; /* jne: not equal / not zero */

loc_0046F9D9: ;
    if (TEST_Z(LO16(eax), 0x108)) goto loc_0046FA13; /* je: equal / zero */

loc_0046F9DF: ;
    eax = MEM32(esi + 8);
    PUSH32(esp, edi);
    edi = MEM32(esi);
    edi = edi - eax;
    if (CMP_LE(edi & edi, 0)) goto loc_0046FA12; /* jle: less or equal (signed <=) */

loc_0046F9EB: ;
    PUSH32(esp, edi);
    PUSH32(esp, eax);
    PUSH32(esp, MEM32(esi + 0x10));
    PUSH32(esp, 0); sub_00479636(); /* call 0x00479636 */

loc_0046F9F5: ;
    esp = esp + 0xC;
    if (CMP_NE(eax, edi)) goto loc_0046FA0B; /* jne: not equal / not zero */

loc_0046F9FC: ;
    eax = MEM32(esi + 0xC);
    if (((int32_t)(LO8(eax) & LO8(eax)) >= 0)) goto loc_0046FA12; /* jns: not sign (positive) */

loc_0046FA03: ;
    eax = eax & 0xFFFFFFFDu;
    MEM32(esi + 0xC) = eax;
    goto loc_0046FA12;

loc_0046FA0B: ;
    MEM32(esi + 0xC) = MEM32(esi + 0xC) | 0x20;
    ebx = ebx | 0xFFFFFFFFu;

loc_0046FA12: ;
    POP32(esp, edi);

loc_0046FA13: ;
    eax = MEM32(esi + 8);
    MEM32(esi + 4) = MEM32(esi + 4) & 0;
    MEM32(esi) = eax;
    POP32(esp, esi);
    eax = ebx;
    POP32(esp, ebx);
    esp += 4; return; /* ret */

}

/**
 * sub_0046FA21
 * Original: 0x0046FA21 - 0x0046FA36 (21 bytes, 10 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0046FA21(void)
{
    int _flags = 0; /* fallback flag var */

loc_0046FA21: ;
    PUSH32(esp, esi);
    esi = MEM32(esp + 8);
    PUSH32(esp, esi);
    PUSH32(esp, 0); sub_0046F9C4(); /* call 0x0046F9C4 */

loc_0046FA2C: ;
    (void)0; /* test eax, eax - flags set for next jcc */
    POP32(esp, ecx);
    if (TEST_Z(eax, eax)) { sub_0046FA36(); return; } /* je: equal / zero */

loc_0046FA31: ;
    eax = eax | 0xFFFFFFFFu;
    POP32(esp, esi);
    esp += 4; return; /* ret */

}

/**
 * sub_0046FA4F
 * Original: 0x0046FA4F - 0x0046FAEA (155 bytes, 56 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0046FA4F(void)
{
    uint32_t ebp;
    int _flags = 0; /* fallback flag var */
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_0046FA4F: ;
    PUSH32(esp, 0x14);
    PUSH32(esp, 0x586308);
    PUSH32(esp, 0); sub_00470A34(); /* call 0x00470A34 */
    ebp = g_seh_ebp; /* read back frame from SEH helper */

loc_0046FA5B: ;
    edi = 0; /* xor self */
    MEM32(ebp + -28) = edi;
    MEM32(ebp + -36) = edi;
    PUSH32(esp, 1);
    PUSH32(esp, 0); sub_00472B24(); /* call 0x00472B24 */

loc_0046FA6A: ;
    POP32(esp, ecx);
    MEM32(ebp + -4) = edi;
    esi = 0; /* xor self */

loc_0046FA70: ;
    MEM32(ebp + -32) = esi;
    if (CMP_GE(esi, MEM32(0x881478))) { sub_0046FB00(); return; } /* jge: greater or equal (signed >=) */

loc_0046FA7F: ;
    eax = MEM32(0x881474);
    eax = MEM32(eax + esi * 4);
    if (CMP_EQ(eax, edi)) goto loc_0046FAE7; /* je: equal / zero */

loc_0046FA8B: ;
    if (TEST_Z(MEM8(eax + 0xC), 0x83)) goto loc_0046FAE7; /* je: equal / zero */

loc_0046FA91: ;
    PUSH32(esp, eax);
    PUSH32(esp, esi);
    PUSH32(esp, 0); sub_00471638(); /* call 0x00471638 */

loc_0046FA98: ;
    POP32(esp, ecx);
    POP32(esp, ecx);
    edx = 0; /* xor self */
    edx++;
    MEM32(ebp + -4) = edx;
    eax = MEM32(0x881474);
    eax = MEM32(eax + esi * 4);
    ecx = MEM32(eax + 0xC);
    if (TEST_Z(LO8(ecx), 0x83)) goto loc_0046FADF; /* je: equal / zero */

loc_0046FAB0: ;
    if (CMP_NE(MEM32(ebp + 8), edx)) goto loc_0046FAC6; /* jne: not equal / not zero */

loc_0046FAB5: ;
    PUSH32(esp, eax);
    PUSH32(esp, 0); sub_0046FA21(); /* call 0x0046FA21 */

loc_0046FABB: ;
    POP32(esp, ecx);
    if (CMP_EQ(eax, 0xFFFFFFFFu)) goto loc_0046FADF; /* je: equal / zero */

loc_0046FAC1: ;
    MEM32(ebp + -28) = MEM32(ebp + -28) + 1;
    goto loc_0046FADF;

loc_0046FAC6: ;
    if (CMP_NE(MEM32(ebp + 8), edi)) goto loc_0046FADF; /* jne: not equal / not zero */

loc_0046FACB: ;
    if (TEST_Z(LO8(ecx), 2)) goto loc_0046FADF; /* je: equal / zero */

loc_0046FAD0: ;
    PUSH32(esp, eax);
    PUSH32(esp, 0); sub_0046FA21(); /* call 0x0046FA21 */

loc_0046FAD6: ;
    POP32(esp, ecx);
    if (CMP_NE(eax, 0xFFFFFFFFu)) goto loc_0046FADF; /* jne: not equal / not zero */

loc_0046FADC: ;
    MEM32(ebp + -36) = MEM32(ebp + -36) | eax;

loc_0046FADF: ;
    MEM32(ebp + -4) = edi;
    PUSH32(esp, 0); sub_0046FAEF(); /* call 0x0046FAEF */

loc_0046FAE7: ;
    esi++;
    goto loc_0046FA70;

}

/**
 * sub_0046FAEF
 * Original: 0x0046FAEF - 0x0046FB00 (17 bytes, 7 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0046FAEF(void)
{

loc_0046FAEF: ;
    eax = MEM32(0x881474);
    PUSH32(esp, MEM32(eax + esi * 4));
    PUSH32(esp, esi);
    PUSH32(esp, 0); sub_0047168A(); /* call 0x0047168A */

loc_0046FAFD: ;
    POP32(esp, ecx);
    POP32(esp, ecx);
    esp += 4; return; /* ret */

}

/**
 * sub_0046FB1B
 * Original: 0x0046FB1B - 0x0046FB24 (9 bytes, 4 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0046FB1B(void)
{

loc_0046FB1B: ;
    PUSH32(esp, 1);
    PUSH32(esp, 0); sub_00472A72(); /* call 0x00472A72 */

loc_0046FB22: ;
    POP32(esp, ecx);
    esp += 4; return; /* ret */

}

/**
 * sub_0046FB24
 * Original: 0x0046FB24 - 0x0046FB40 (28 bytes, 10 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0046FB24(void)
{
    uint32_t ebp;
    int _flags = 0; /* fallback flag var */
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_0046FB24: ;
    PUSH32(esp, 0xC);
    PUSH32(esp, 0x586320);
    PUSH32(esp, 0); sub_00470A34(); /* call 0x00470A34 */
    ebp = g_seh_ebp; /* read back frame from SEH helper */

loc_0046FB30: ;
    esi = 0; /* xor self */
    if (CMP_NE(MEM32(ebp + 8), esi)) { sub_0046FB40(); return; } /* jne: not equal / not zero */

loc_0046FB37: ;
    PUSH32(esp, esi);
    PUSH32(esp, 0); sub_0046FA4F(); /* call 0x0046FA4F */

loc_0046FB3D: ;
    POP32(esp, ecx);
    g_seh_ebp = ebp; sub_0046FB64(); return; /* tail jmp 0x0046FB64 */

}

/**
 * sub_0046FB6A
 * Original: 0x0046FB6A - 0x0046FB74 (10 bytes, 4 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0046FB6A(void)
{
    uint32_t ebp;
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_0046FB6A: ;
    PUSH32(esp, MEM32(ebp + 8));
    PUSH32(esp, 0); sub_0047165B(); /* call 0x0047165B */

loc_0046FB72: ;
    POP32(esp, ecx);
    esp += 4; return; /* ret */

}

/**
 * sub_0046FB74
 * Original: 0x0046FB74 - 0x0046FB7D (9 bytes, 4 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0046FB74(void)
{

loc_0046FB74: ;
    PUSH32(esp, 1);
    PUSH32(esp, 0); sub_0046FA4F(); /* call 0x0046FA4F */

loc_0046FB7B: ;
    POP32(esp, ecx);
    esp += 4; return; /* ret */

}

/**
 * sub_0046FB7D
 * Original: 0x0046FB7D - 0x0046FBCA (77 bytes, 24 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0046FB7D(void)
{
    uint32_t ebp;
    int _flags = 0; /* fallback flag var */
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_0046FB7D: ;
    PUSH32(esp, 0xC);
    PUSH32(esp, 0x586330);
    PUSH32(esp, 0); sub_00470A34(); /* call 0x00470A34 */
    ebp = g_seh_ebp; /* read back frame from SEH helper */

loc_0046FB89: ;
    esi = 0; /* xor self */
    if (CMP_EQ(MEM32(ebp + 8), esi)) goto loc_0046FBC4; /* je: equal / zero */

loc_0046FB90: ;
    if (CMP_NE(MEM32(0x881464), 3)) goto loc_0046FBB5; /* jne: not equal / not zero */

loc_0046FB99: ;
    PUSH32(esp, 4);
    PUSH32(esp, 0); sub_00472B24(); /* call 0x00472B24 */

loc_0046FBA0: ;
    POP32(esp, ecx);
    MEM32(ebp + -4) = esi;
    MEM32(ebp + -28) = esi;
    MEM32(ebp + -4) = MEM32(ebp + -4) | 0xFFFFFFFFu;
    PUSH32(esp, 0); sub_0046FBCC(); /* call 0x0046FBCC */

loc_0046FBB0: ;
    if (CMP_NE(MEM32(ebp + -28), esi)) goto loc_0046FBC4; /* jne: not equal / not zero */

loc_0046FBB5: ;
    PUSH32(esp, MEM32(ebp + 8));
    PUSH32(esp, esi);
    PUSH32(esp, 0); sub_004308AE(); /* call 0x004308AE */

loc_0046FBBE: ;
    PUSH32(esp, eax);
    PUSH32(esp, 0); sub_00430897(); /* call 0x00430897 */

loc_0046FBC4: ;
    PUSH32(esp, 0); sub_00470A6F(); /* call 0x00470A6F */
    ebp = g_seh_ebp; /* read back frame from SEH helper */

loc_0046FBC9: ;
    esp += 4; return; /* ret */

}

/**
 * sub_0046FBCC
 * Original: 0x0046FBCC - 0x0046FBD5 (9 bytes, 4 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0046FBCC(void)
{

loc_0046FBCC: ;
    PUSH32(esp, 4);
    PUSH32(esp, 0); sub_00472A72(); /* call 0x00472A72 */

loc_0046FBD3: ;
    POP32(esp, ecx);
    esp += 4; return; /* ret */

}

/**
 * sub_0046FBD5
 * Original: 0x0046FBD5 - 0x0046FBDC (7 bytes, 3 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0046FBD5(void)
{
    uint32_t ebp;
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_0046FBD5: ;
    PUSH32(esp, esi);
    esi = MEM32(esp + 8);
    g_seh_ebp = ebp; sub_0046FBDD(); return; /* tail jmp 0x0046FBDD */

}

/**
 * sub_0046FC2D
 * Original: 0x0046FC2D - 0x0046FC32 (5 bytes, 1 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0046FC2D(void)
{
    uint32_t ebp;
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_0046FC2D: ;
    g_seh_ebp = ebp; sub_0046FBD5(); return; /* tail jmp 0x0046FBD5 */

}

/**
 * sub_0046FC32
 * Original: 0x0046FC32 - 0x0046FC3C (10 bytes, 6 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0046FC32(void)
{
    uint32_t ebp;
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_0046FC32: ;
    PUSH32(esp, ebx);
    PUSH32(esp, ebp);
    PUSH32(esp, esi);
    PUSH32(esp, edi);
    edi = MEM32(esp + 0x14);
    g_seh_ebp = ebp; sub_0046FC3D(); return; /* tail jmp 0x0046FC3D */

}

/**
 * sub_0046FCAB
 * Original: 0x0046FCAB - 0x0046FCD6 (43 bytes, 17 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0046FCAB(void)
{
    uint32_t ebp;

loc_0046FCAB: ;
    PUSH32(esp, ebp);
    ebp = esp;
    esp = esp - 0x28;
    PUSH32(esp, MEM32(ebp + 0x10));
    eax = ebp + -40;
    PUSH32(esp, eax);
    PUSH32(esp, MEM32(ebp + 8));
    PUSH32(esp, 0); sub_00479B08(); /* call 0x00479B08 */

loc_0046FCC0: ;
    PUSH32(esp, 0x28);
    eax = ebp + -40;
    PUSH32(esp, eax);
    PUSH32(esp, MEM32(ebp + 0xC));
    PUSH32(esp, 0); sub_004705BA(); /* call 0x004705BA */

loc_0046FCCE: ;
    eax = MEM32(ebp + 0xC);
    esp = esp + 0x18;
    esp = ebp;
    POP32(esp, ebp); /* leave */
    esp += 4; return; /* ret */

}

/**
 * sub_0046FCD6
 * Original: 0x0046FCD6 - 0x0046FD13 (61 bytes, 31 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0046FCD6(void)
{
    int _flags = 0; /* fallback flag var */
    int _cf = 0; /* carry flag */

loc_0046FCD6: ;
    ecx = MEM32(esp + 0xC);
    (void)0; /* test ecx, ecx - flags set for next jcc */
    PUSH32(esp, esi);
    PUSH32(esp, edi);
    edi = MEM32(esp + 0xC);
    esi = edi;
    if (TEST_Z(ecx, ecx)) goto loc_0046FD0E; /* je: equal / zero */

loc_0046FCE6: ;
    edx = MEM32(esp + 0x10);

loc_0046FCEA: ;
    SET_LO16(eax, MEM16(edx));
    MEM16(edi) = LO16(eax);
    edi++;
    edi++;
    edx++;
    edx++;
    if (TEST_Z(LO16(eax), LO16(eax))) goto loc_0046FCFC; /* je: equal / zero */

loc_0046FCF9: ;
    ecx--;
    if ((ecx != 0)) goto loc_0046FCEA; /* jne: not equal / not zero */

loc_0046FCFC: ;
    if (TEST_Z(ecx, ecx)) goto loc_0046FD0E; /* je: equal / zero */

loc_0046FD00: ;
    ecx--;
    if ((ecx == 0)) goto loc_0046FD0E; /* je: equal / zero */

loc_0046FD03: ;
    eax = 0; /* xor self */
    ecx = ecx >> 1;
    { uint32_t _i; for (_i = 0; _i < ecx; _i++) MEM32(edi + _i*4) = eax; }
    edi += ecx * 4; ecx = 0; /* rep stosd */
    ecx = ecx + ecx + _cf; /* adc */
    { uint32_t _i; for (_i = 0; _i < ecx; _i++) MEM16(edi + _i*2) = LO16(eax); }
    edi += ecx * 2; ecx = 0; /* rep stosw */

loc_0046FD0E: ;
    POP32(esp, edi);
    eax = esi;
    POP32(esp, esi);
    esp += 4; return; /* ret */

}

/**
 * sub_0046FD13
 * Original: 0x0046FD13 - 0x0046FD20 (13 bytes, 4 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0046FD13(void)
{

loc_0046FD13: ;
    PUSH32(esp, 0); sub_00479B32(); /* call 0x00479B32 */

loc_0046FD18: ;
    ecx = MEM32(esp + 4);
    MEM32(eax + 0x14) = ecx;
    esp += 4; return; /* ret */

}

/**
 * sub_0046FD20
 * Original: 0x0046FD20 - 0x0046FD42 (34 bytes, 9 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0046FD20(void)
{

loc_0046FD20: ;
    PUSH32(esp, 0); sub_00479B32(); /* call 0x00479B32 */

loc_0046FD25: ;
    ecx = MEM32(eax + 0x14);
    ecx = (uint32_t)((int32_t)ecx * (int32_t)0x343FD);
    ecx = ecx + 0x269EC3;
    MEM32(eax + 0x14) = ecx;
    eax = ecx;
    eax = eax >> 0x10;
    eax = eax & 0x7FFF;
    esp += 4; return; /* ret */

}

/**
 * sub_0046FD42
 * Original: 0x0046FD42 - 0x0046FD98 (86 bytes, 28 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0046FD42(void)
{
    uint32_t ebp;
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_0046FD42: ;
    PUSH32(esp, 0x10);
    PUSH32(esp, 0x586340);
    PUSH32(esp, 0); sub_00470A34(); /* call 0x00470A34 */
    ebp = g_seh_ebp; /* read back frame from SEH helper */

loc_0046FD4E: ;
    esi = 0x655698;
    PUSH32(esp, esi);
    PUSH32(esp, 1);
    PUSH32(esp, 0); sub_00471638(); /* call 0x00471638 */

loc_0046FD5B: ;
    POP32(esp, ecx);
    POP32(esp, ecx);
    MEM32(ebp + -4) = MEM32(ebp + -4) & 0;
    PUSH32(esp, esi);
    PUSH32(esp, 0); sub_00478E2A(); /* call 0x00478E2A */

loc_0046FD67: ;
    MEM32(ebp + -28) = eax;
    eax = ebp + 0xC;
    PUSH32(esp, eax);
    PUSH32(esp, MEM32(ebp + 8));
    PUSH32(esp, esi);
    PUSH32(esp, 0); sub_00472CF9(); /* call 0x00472CF9 */

loc_0046FD77: ;
    MEM32(ebp + -32) = eax;
    PUSH32(esp, esi);
    PUSH32(esp, MEM32(ebp + -28));
    PUSH32(esp, 0); sub_00478EB2(); /* call 0x00478EB2 */

loc_0046FD83: ;
    esp = esp + 0x18;
    MEM32(ebp + -4) = MEM32(ebp + -4) | 0xFFFFFFFFu;
    PUSH32(esp, 0); sub_0046FD9D(); /* call 0x0046FD9D */

loc_0046FD8F: ;
    eax = MEM32(ebp + -32);
    PUSH32(esp, 0); sub_00470A6F(); /* call 0x00470A6F */
    ebp = g_seh_ebp; /* read back frame from SEH helper */

loc_0046FD97: ;
    esp += 4; return; /* ret */

}

/**
 * sub_0046FD9D
 * Original: 0x0046FD9D - 0x0046FDA8 (11 bytes, 6 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0046FD9D(void)
{

loc_0046FD9D: ;
    PUSH32(esp, esi);
    PUSH32(esp, 1);
    PUSH32(esp, 0); sub_0047168A(); /* call 0x0047168A */

loc_0046FDA5: ;
    POP32(esp, ecx);
    POP32(esp, ecx);
    esp += 4; return; /* ret */

}

/**
 * sub_0046FDB0
 * Original: 0x0046FDB0 - 0x0046FE1D (109 bytes, 51 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0046FDB0(void)
{
    uint32_t ebp;
    int _flags = 0; /* fallback flag var */
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_0046FDB0: ;
    ecx = MEM32(esp + 4);
    PUSH32(esp, ebp);
    ebp = MEM32(esp + 0xC);
    PUSH32(esp, edi);
    edi = eax;
    if (CMP_BE(edi, ecx)) goto loc_0046FE1A; /* jbe: below or equal (unsigned <=) */

loc_0046FDC0: ;
    PUSH32(esp, ebx);
    PUSH32(esp, esi);

loc_0046FDC2: ;
    esi = ecx + ebp;
    (void)0; /* cmp esi, edi - flags set for next jcc */
    ebx = ecx;
    if (CMP_A(esi, edi)) goto loc_0046FDE9; /* ja: above (unsigned >) */

loc_0046FDCB: ;
    goto loc_0046FDD0;

    /* nop */

loc_0046FDD0: ;
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, ebx);
    PUSH32(esp, esi);
    PUSH32(esp, 0); RECOMP_ICALL_SAFE(MEM32(esp + 0x24), _icall_esp); /* indirect call */
    }

loc_0046FDD6: ;
    esp = esp + 8;
    if (CMP_LE(eax & eax, 0)) goto loc_0046FDDF; /* jle: less or equal (signed <=) */

loc_0046FDDD: ;
    ebx = esi;

loc_0046FDDF: ;
    esi = esi + ebp;
    if (CMP_BE(esi, edi)) goto loc_0046FDD0; /* jbe: below or equal (unsigned <=) */

loc_0046FDE5: ;
    ecx = MEM32(esp + 0x14);

loc_0046FDE9: ;
    (void)0; /* cmp ebx, edi - flags set for next jcc */
    eax = edi;
    if (CMP_EQ(ebx, edi)) goto loc_0046FE12; /* je: equal / zero */

loc_0046FDEF: ;
    if (TEST_Z(ebp, ebp)) goto loc_0046FE12; /* je: equal / zero */

loc_0046FDF3: ;
    ecx = ebx;
    ecx = ecx - edi;
    esi = ebp;
    /* nop */

loc_0046FE00: ;
    SET_LO8(ebx, MEM8(eax));
    SET_LO8(edx, MEM8(ecx + eax));
    MEM8(ecx + eax) = LO8(ebx);
    MEM8(eax) = LO8(edx);
    eax++;
    esi--;
    if ((esi != 0)) goto loc_0046FE00; /* jne: not equal / not zero */

loc_0046FE0E: ;
    ecx = MEM32(esp + 0x14);

loc_0046FE12: ;
    edi = edi - ebp;
    if (CMP_A(edi, ecx)) goto loc_0046FDC2; /* ja: above (unsigned >) */

loc_0046FE18: ;
    POP32(esp, esi);
    POP32(esp, ebx);

loc_0046FE1A: ;
    POP32(esp, edi);
    POP32(esp, ebp);
    esp += 4; return; /* ret */

}

/**
 * sub_0046FE20
 * Original: 0x0046FE20 - 0x004700A3 (643 bytes, 231 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0046FE20(void)
{
    uint32_t ebp;
    int _flags = 0; /* fallback flag var */
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_0046FE20: ;
    eax = MEM32(esp + 8);
    esp = esp - 0x100;
    if (CMP_B(eax, 2)) goto loc_0047009C; /* jb: below (unsigned <) */

loc_0046FE33: ;
    PUSH32(esp, ebp);
    ebp = MEM32(esp + 0x110);
    if (TEST_Z(ebp, ebp)) goto loc_0047009B; /* je: equal / zero */

loc_0046FE43: ;
    PUSH32(esp, ebx);
    ebx = MEM32(esp + 0x10C);
    PUSH32(esp, esi);
    esi = eax + -1;
    esi = (uint32_t)((int32_t)esi * (int32_t)ebp);
    esi = esi + ebx;
    MEM32(esp + 0x14) = 0;
    MEM32(esp + 0xC) = ebx;
    MEM32(esp + 0x10) = esi;
    PUSH32(esp, edi);

loc_0046FE65: ;
    eax = esi;
    eax = eax - ebx;
    edx = 0; /* xor self */
    { uint64_t _dividend = ((uint64_t)edx << 32) | eax;
      eax = (uint32_t)(_dividend / (uint32_t)ebp);
      edx = (uint32_t)(_dividend % (uint32_t)ebp); }
    eax++;
    if (CMP_A(eax, 8)) goto loc_0046FEAF; /* ja: above (unsigned >) */

loc_0046FE73: ;
    eax = MEM32(esp + 0x120);
    PUSH32(esp, eax);
    PUSH32(esp, ebp);
    PUSH32(esp, ebx);
    eax = esi;
    PUSH32(esp, 0); sub_0046FDB0(); /* call 0x0046FDB0 */

loc_0046FE84: ;
    esp = esp + 0xC;

loc_0046FE87: ;
    eax = MEM32(esp + 0x18);
    eax--;
    MEM32(esp + 0x18) = eax;
    if (((int32_t)eax < 0)) goto loc_00470098; /* js: sign (negative) */

loc_0046FE96: ;
    edx = MEM32(esp + eax * 4 + 0x20);
    eax = MEM32(esp + eax * 4 + 0x98);
    MEM32(esp + 0x10) = edx;
    MEM32(esp + 0x14) = eax;
    ebx = edx;
    esi = eax;
    goto loc_0046FE65;

loc_0046FEAF: ;
    eax = eax >> 1;
    eax = (uint32_t)((int32_t)eax * (int32_t)ebp);
    eax = eax + ebx;
    edi = eax;
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, edi);
    PUSH32(esp, ebx);
    PUSH32(esp, 0); RECOMP_ICALL_SAFE(MEM32(esp + 0x128), _icall_esp); /* indirect call */
    }

loc_0046FEC1: ;
    esp = esp + 8;
    if (CMP_LE(eax & eax, 0)) goto loc_0046FEEA; /* jle: less or equal (signed <=) */

loc_0046FEC8: ;
    (void)0; /* cmp ebx, edi - flags set for next jcc */
    eax = edi;
    if (CMP_EQ(ebx, edi)) goto loc_0046FEEA; /* je: equal / zero */

loc_0046FECE: ;
    ecx = ebx;
    ecx = ecx - edi;
    esi = ebp;

loc_0046FED4: ;
    SET_LO8(ebx, MEM8(eax));
    SET_LO8(edx, MEM8(ecx + eax));
    MEM8(ecx + eax) = LO8(ebx);
    MEM8(eax) = LO8(edx);
    eax++;
    esi--;
    if ((esi != 0)) goto loc_0046FED4; /* jne: not equal / not zero */

loc_0046FEE2: ;
    ebx = MEM32(esp + 0x10);
    esi = MEM32(esp + 0x14);

loc_0046FEEA: ;
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, esi);
    PUSH32(esp, ebx);
    PUSH32(esp, 0); RECOMP_ICALL_SAFE(MEM32(esp + 0x128), _icall_esp); /* indirect call */
    }

loc_0046FEF3: ;
    esp = esp + 8;
    if (CMP_LE(eax & eax, 0)) goto loc_0046FF1C; /* jle: less or equal (signed <=) */

loc_0046FEFA: ;
    (void)0; /* cmp ebx, esi - flags set for next jcc */
    eax = esi;
    if (CMP_EQ(ebx, esi)) goto loc_0046FF1C; /* je: equal / zero */

loc_0046FF00: ;
    ecx = ebx;
    ecx = ecx - esi;
    esi = ebp;

loc_0046FF06: ;
    SET_LO8(ebx, MEM8(eax));
    SET_LO8(edx, MEM8(ecx + eax));
    MEM8(ecx + eax) = LO8(ebx);
    MEM8(eax) = LO8(edx);
    eax++;
    esi--;
    if ((esi != 0)) goto loc_0046FF06; /* jne: not equal / not zero */

loc_0046FF14: ;
    ebx = MEM32(esp + 0x10);
    esi = MEM32(esp + 0x14);

loc_0046FF1C: ;
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, esi);
    PUSH32(esp, edi);
    PUSH32(esp, 0); RECOMP_ICALL_SAFE(MEM32(esp + 0x128), _icall_esp); /* indirect call */
    }

loc_0046FF25: ;
    esp = esp + 8;
    if (CMP_LE(eax & eax, 0)) goto loc_0046FF4A; /* jle: less or equal (signed <=) */

loc_0046FF2C: ;
    (void)0; /* cmp edi, esi - flags set for next jcc */
    eax = esi;
    if (CMP_EQ(edi, esi)) goto loc_0046FF4A; /* je: equal / zero */

loc_0046FF32: ;
    ecx = edi;
    ecx = ecx - esi;
    esi = ebp;

loc_0046FF38: ;
    SET_LO8(ebx, MEM8(eax));
    SET_LO8(edx, MEM8(ecx + eax));
    MEM8(ecx + eax) = LO8(ebx);
    MEM8(eax) = LO8(edx);
    eax++;
    esi--;
    if ((esi != 0)) goto loc_0046FF38; /* jne: not equal / not zero */

loc_0046FF46: ;
    ebx = MEM32(esp + 0x10);

loc_0046FF4A: ;
    esi = MEM32(esp + 0x14);
    edi = edi;

loc_0046FF50: ;
    if (CMP_BE(edi, ebx)) goto loc_0046FF70; /* jbe: below or equal (unsigned <=) */

loc_0046FF54: ;
    ebx = ebx + ebp;
    if (CMP_AE(ebx, edi)) goto loc_0046FF70; /* jae: above or equal (unsigned >=) */

loc_0046FF5A: ;
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, edi);
    PUSH32(esp, ebx);
    PUSH32(esp, 0); RECOMP_ICALL_SAFE(MEM32(esp + 0x128), _icall_esp); /* indirect call */
    }

loc_0046FF63: ;
    esp = esp + 8;
    if (CMP_LE(eax & eax, 0)) goto loc_0046FF54; /* jle: less or equal (signed <=) */

loc_0046FF6A: ;
    if (CMP_A(edi, ebx)) goto loc_0046FF90; /* ja: above (unsigned >) */

loc_0046FF6E: ;
    edi = edi;

loc_0046FF70: ;
    eax = MEM32(esp + 0x14);
    ebx = ebx + ebp;
    if (CMP_A(ebx, eax)) goto loc_0046FF90; /* ja: above (unsigned >) */

loc_0046FF7A: ;
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, edi);
    PUSH32(esp, ebx);
    PUSH32(esp, 0); RECOMP_ICALL_SAFE(MEM32(esp + 0x128), _icall_esp); /* indirect call */
    }

loc_0046FF83: ;
    esp = esp + 8;
    if (CMP_LE(eax & eax, 0)) goto loc_0046FF70; /* jle: less or equal (signed <=) */

loc_0046FF8A: ;
    /* nop */

loc_0046FF90: ;
    esi = esi - ebp;
    if (CMP_BE(esi, edi)) goto loc_0046FFA6; /* jbe: below or equal (unsigned <=) */

loc_0046FF96: ;
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, edi);
    PUSH32(esp, esi);
    PUSH32(esp, 0); RECOMP_ICALL_SAFE(MEM32(esp + 0x128), _icall_esp); /* indirect call */
    }

loc_0046FF9F: ;
    esp = esp + 8;
    if (CMP_G(eax & eax, 0)) goto loc_0046FF90; /* jg: greater (signed >) */

loc_0046FFA6: ;
    if (CMP_A(ebx, esi)) goto loc_0046FFEC; /* ja: above (unsigned >) */

loc_0046FFAA: ;
    eax = esi;
    if (CMP_EQ(ebx, esi)) goto loc_0046FFDD; /* je: equal / zero */

loc_0046FFAE: ;
    ecx = MEM32(esp + 0x11C);
    ebp = ebx;
    ebp = ebp - esi;
    MEM32(esp + 0x1C) = ecx;
    /* nop */

loc_0046FFC0: ;
    SET_LO8(ecx, MEM8(eax + ebp));
    SET_LO8(edx, MEM8(eax));
    MEM8(eax + ebp) = LO8(edx);
    MEM8(eax) = LO8(ecx);
    ecx = MEM32(esp + 0x1C);
    eax++;
    ecx--;
    MEM32(esp + 0x1C) = ecx;
    if ((ecx != 0)) goto loc_0046FFC0; /* jne: not equal / not zero */

loc_0046FFD6: ;
    ebp = MEM32(esp + 0x11C);

loc_0046FFDD: ;
    if (CMP_NE(edi, esi)) goto loc_0046FF50; /* jne: not equal / not zero */

loc_0046FFE5: ;
    edi = ebx;
    goto loc_0046FF50;

loc_0046FFEC: ;
    esi = esi + ebp;
    if (CMP_AE(edi, esi)) goto loc_00470010; /* jae: above or equal (unsigned >=) */

loc_0046FFF2: ;
    esi = esi - ebp;
    if (CMP_BE(esi, edi)) goto loc_00470010; /* jbe: below or equal (unsigned <=) */

loc_0046FFF8: ;
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, edi);
    PUSH32(esp, esi);
    PUSH32(esp, 0); RECOMP_ICALL_SAFE(MEM32(esp + 0x128), _icall_esp); /* indirect call */
    }

loc_00470001: ;
    esp = esp + 8;
    if (TEST_Z(eax, eax)) goto loc_0046FFF2; /* je: equal / zero */

loc_00470008: ;
    if (CMP_B(edi, esi)) goto loc_0047002A; /* jb: below (unsigned <) */

loc_0047000C: ;
    /* nop */

loc_00470010: ;
    eax = MEM32(esp + 0x10);
    esi = esi - ebp;
    if (CMP_BE(esi, eax)) goto loc_0047002E; /* jbe: below or equal (unsigned <=) */

loc_0047001A: ;
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, edi);
    PUSH32(esp, esi);
    PUSH32(esp, 0); RECOMP_ICALL_SAFE(MEM32(esp + 0x128), _icall_esp); /* indirect call */
    }

loc_00470023: ;
    esp = esp + 8;
    if (TEST_Z(eax, eax)) goto loc_00470010; /* je: equal / zero */

loc_0047002A: ;
    eax = MEM32(esp + 0x10);

loc_0047002E: ;
    edx = MEM32(esp + 0x14);
    ecx = edx;
    edi = esi;
    ecx = ecx - ebx;
    edi = edi - eax;
    if (CMP_L(edi, ecx)) goto loc_0047006B; /* jl: less (signed <) */

loc_0047003E: ;
    if (CMP_AE(eax, esi)) goto loc_00470056; /* jae: above or equal (unsigned >=) */

loc_00470042: ;
    ecx = MEM32(esp + 0x18);
    MEM32(esp + ecx * 4 + 0x20) = eax;
    MEM32(esp + ecx * 4 + 0x98) = esi;
    ecx++;
    MEM32(esp + 0x18) = ecx;

loc_00470056: ;
    if (CMP_AE(ebx, edx)) goto loc_0046FE87; /* jae: above or equal (unsigned >=) */

loc_0047005E: ;
    esi = MEM32(esp + 0x14);
    MEM32(esp + 0x10) = ebx;
    goto loc_0046FE65;

loc_0047006B: ;
    if (CMP_AE(ebx, edx)) goto loc_00470083; /* jae: above or equal (unsigned >=) */

loc_0047006F: ;
    ecx = MEM32(esp + 0x18);
    MEM32(esp + ecx * 4 + 0x20) = ebx;
    MEM32(esp + ecx * 4 + 0x98) = edx;
    ecx++;
    MEM32(esp + 0x18) = ecx;

loc_00470083: ;
    if (CMP_AE(eax, esi)) goto loc_0046FE87; /* jae: above or equal (unsigned >=) */

loc_0047008B: ;
    ebx = MEM32(esp + 0x10);
    MEM32(esp + 0x14) = esi;
    goto loc_0046FE65;

loc_00470098: ;
    POP32(esp, edi);
    POP32(esp, esi);
    POP32(esp, ebx);

loc_0047009B: ;
    POP32(esp, ebp);

loc_0047009C: ;
    esp = esp + 0x100;
    esp += 4; return; /* ret */

}

/**
 * sub_004700A3
 * Original: 0x004700A3 - 0x004700FD (90 bytes, 39 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_004700A3(void)
{
    int _flags = 0; /* fallback flag var */

loc_004700A3: ;
    ecx = MEM32(esp + 8);
    (void)0; /* cmp MEM16(ecx), 0 - flags set for next jcc */
    eax = MEM32(esp + 4);
    PUSH32(esp, edi);
    edi = eax;
    if (CMP_EQ(MEM16(ecx), 0)) goto loc_004700FB; /* je: equal / zero */

loc_004700B4: ;
    edx = 0; /* xor self */
    SET_LO16(edx, MEM16(eax));
    (void)0; /* test LO16(edx), LO16(edx) - flags set for next jcc */
    PUSH32(esp, ebx);
    if (TEST_Z(LO16(edx), LO16(edx))) goto loc_004700F8; /* je: equal / zero */

loc_004700BF: ;
    eax = eax - ecx;

loc_004700C1: ;
    (void)0; /* test LO16(edx), LO16(edx) - flags set for next jcc */
    ecx = MEM32(esp + 0x10);
    if (TEST_Z(LO16(edx), LO16(edx))) goto loc_004700E6; /* je: equal / zero */

loc_004700CA: ;
    SET_LO16(edx, MEM16(ecx));
    if (TEST_Z(LO16(edx), LO16(edx))) { sub_004700FD(); return; } /* je: equal / zero */

loc_004700D2: ;
    ebx = ZX16(MEM16(eax + ecx));
    edx = ZX16(LO16(edx));
    ebx = ebx - edx;
    if ((ebx != 0)) goto loc_004700E6; /* jne: not equal / not zero */

loc_004700DD: ;
    ecx++;
    ecx++;
    if (CMP_NE(MEM16(eax + ecx), 0)) goto loc_004700CA; /* jne: not equal / not zero */

loc_004700E6: ;
    if (CMP_EQ(MEM16(ecx), 0)) { sub_004700FD(); return; } /* je: equal / zero */

loc_004700EC: ;
    edi++;
    edi++;
    SET_LO16(edx, MEM16(edi));
    eax++;
    eax++;
    if (TEST_NZ(LO16(edx), LO16(edx))) goto loc_004700C1; /* jne: not equal / not zero */

loc_004700F8: ;
    eax = 0; /* xor self */
    POP32(esp, ebx);

loc_004700FB: ;
    POP32(esp, edi);
    esp += 4; return; /* ret */

}

/**
 * sub_00470101
 * Original: 0x00470101 - 0x0047010D (12 bytes, 5 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00470101(void)
{
    uint32_t ebp;
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_00470101: ;
    edx = MEM32(esp + 4);
    PUSH32(esp, esi);
    esi = MEM32(esp + 0xC);
    PUSH32(esp, edi);
    g_seh_ebp = ebp; sub_00470116(); return; /* tail jmp 0x00470116 */

}

/**
 * sub_00470133
 * Original: 0x00470133 - 0x0047013E (11 bytes, 3 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00470133(void)
{
    uint32_t ebp;
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_00470133: ;
    eax = MEM32(esp + 4);
    SET_LO16(edx, MEM16(esp + 8));
    g_seh_ebp = ebp; sub_00470145(); return; /* tail jmp 0x00470145 */

}

/**
 * sub_00470155
 * Original: 0x00470155 - 0x004701BF (106 bytes, 44 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00470155(void)
{
    uint32_t ebp;
    int _flags = 0; /* fallback flag var */
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_00470155: ;
    PUSH32(esp, 0x18);
    PUSH32(esp, 0x586350);
    PUSH32(esp, 0); sub_00470A34(); /* call 0x00470A34 */
    ebp = g_seh_ebp; /* read back frame from SEH helper */

loc_00470161: ;
    ebx = 0; /* xor self */
    PUSH32(esp, 8);
    esi = MEM32(ebp + 8);
    eax = 0; /* xor self */
    SET_LO16(eax, MEM16(esi));
    PUSH32(esp, eax);
    PUSH32(esp, 0); sub_00479D42(); /* call 0x00479D42 */

loc_00470173: ;
    POP32(esp, ecx);
    POP32(esp, ecx);
    if (TEST_Z(eax, eax)) goto loc_00470191; /* je: equal / zero */

loc_00470179: ;
    esi++;
    esi++;
    PUSH32(esp, 8);
    eax = 0; /* xor self */
    SET_LO16(eax, MEM16(esi));
    PUSH32(esp, eax);
    PUSH32(esp, 0); sub_00479D42(); /* call 0x00479D42 */

loc_00470188: ;
    POP32(esp, ecx);
    POP32(esp, ecx);
    if (TEST_NZ(eax, eax)) goto loc_00470179; /* jne: not equal / not zero */

loc_0047018E: ;
    MEM32(ebp + 8) = esi;

loc_00470191: ;
    PUSH32(esp, ebx);
    PUSH32(esp, esi);
    PUSH32(esp, ebx);
    PUSH32(esp, 0); sub_00470227(); /* call 0x00470227 */

loc_00470199: ;
    esp = esp + 0xC;
    esi = eax;
    MEM32(ebp + -28) = esi;
    /* wait - FPU sync */
    MEM32(ebp + -4) = ebx;
    eax = esi + esi + 2;
    eax = eax + 3;
    eax = eax & 0xFFFFFFFCu;
    PUSH32(esp, 0); sub_00470E50(); /* call 0x00470E50 */

loc_004701B4: ;
    MEM32(ebp + -24) = esp;
    edi = esp;
    MEM32(ebp + -32) = edi;
    /* wait - FPU sync */
    g_seh_ebp = ebp; sub_004701F5(); return; /* tail jmp 0x004701F5 */

}

/**
 * sub_00470227
 * Original: 0x00470227 - 0x00470383 (348 bytes, 136 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00470227(void)
{
    uint32_t ebp;
    int _flags = 0; /* fallback flag var */

loc_00470227: ;
    PUSH32(esp, ebp);
    ebp = esp;
    esp = esp - 0xC;
    PUSH32(esp, ebx);
    PUSH32(esp, esi);
    esi = MEM32(ebp + 8);
    ebx = 0; /* xor self */
    eax = 0; /* xor self */
    (void)0; /* cmp esi, ebx - flags set for next jcc */
    PUSH32(esp, edi);
    MEM32(ebp + -4) = ebx;
    if (CMP_EQ(esi, ebx)) { sub_00470383(); return; } /* je: equal / zero */

loc_00470242: ;
    edi = MEM32(ebp + 0x10);
    if (CMP_EQ(edi, ebx)) goto loc_00470325; /* je: equal / zero */

loc_0047024D: ;
    if (CMP_NE(MEM32(0x75F9C4), ebx)) goto loc_00470288; /* jne: not equal / not zero */

loc_00470255: ;
    if (CMP_BE(edi, ebx)) goto loc_00470325; /* jbe: below or equal (unsigned <=) */

loc_0047025D: ;
    ecx = MEM32(ebp + 0xC);

loc_00470260: ;
    if (CMP_A(MEM16(ecx), 0xFF)) goto loc_00470317; /* ja: above (unsigned >) */

loc_0047026B: ;
    SET_LO8(edx, MEM8(ecx));
    MEM8(eax + esi) = LO8(edx);
    SET_LO16(edx, MEM16(ecx));
    ecx++;
    ecx++;
    if (TEST_Z(LO16(edx), LO16(edx))) goto loc_00470325; /* je: equal / zero */

loc_0047027E: ;
    eax++;
    if (CMP_B(eax, edi)) goto loc_00470260; /* jb: below (unsigned <) */

loc_00470283: ;
    goto loc_00470325;

loc_00470288: ;
    if (CMP_NE(MEM32(0x655AF0), 1)) goto loc_004702E0; /* jne: not equal / not zero */

loc_00470291: ;
    if (CMP_BE(edi, ebx)) goto loc_004702B5; /* jbe: below or equal (unsigned <=) */

loc_00470295: ;
    eax = MEM32(ebp + 0xC);
    ecx = edi;

loc_0047029A: ;
    if (CMP_EQ(MEM16(eax), LO16(ebx))) goto loc_004702A4; /* je: equal / zero */

loc_0047029F: ;
    eax++;
    eax++;
    ecx--;
    if ((ecx != 0)) goto loc_0047029A; /* jne: not equal / not zero */

loc_004702A4: ;
    if (CMP_EQ(ecx, ebx)) goto loc_004702B5; /* je: equal / zero */

loc_004702A8: ;
    if (CMP_NE(MEM16(eax), LO16(ebx))) goto loc_004702B5; /* jne: not equal / not zero */

loc_004702AD: ;
    eax = eax - MEM32(ebp + 0xC);
    eax = (uint32_t)((int32_t)eax >> 1);
    eax++;
    edi = eax;

loc_004702B5: ;
    eax = ebp + -4;
    PUSH32(esp, eax);
    PUSH32(esp, ebx);
    PUSH32(esp, edi);
    PUSH32(esp, esi);
    PUSH32(esp, edi);
    PUSH32(esp, MEM32(ebp + 0xC));
    PUSH32(esp, ebx);
    PUSH32(esp, MEM32(0x75F9D4));
    PUSH32(esp, 0); sub_0047E879(); /* call 0x0047E879 */

loc_004702CC: ;
    if (CMP_EQ(eax, ebx)) goto loc_00470317; /* je: equal / zero */

loc_004702D0: ;
    if (CMP_NE(MEM32(ebp + -4), ebx)) goto loc_00470317; /* jne: not equal / not zero */

loc_004702D5: ;
    if (CMP_NE(MEM8(eax + esi + -1), LO8(ebx))) goto loc_00470325; /* jne: not equal / not zero */

loc_004702DB: ;
    g_seh_ebp = ebp; sub_004703BF(); return; /* tail jmp 0x004703BF */

loc_004702E0: ;
    eax = ebp + -4;
    PUSH32(esp, eax);
    PUSH32(esp, ebx);
    PUSH32(esp, edi);
    PUSH32(esp, esi);
    PUSH32(esp, 0xFFFFFFFFu);
    PUSH32(esp, MEM32(ebp + 0xC));
    PUSH32(esp, ebx);
    PUSH32(esp, MEM32(0x75F9D4));
    PUSH32(esp, 0); sub_0047E879(); /* call 0x0047E879 */

loc_004702F8: ;
    esi = eax;
    if (CMP_EQ(esi, ebx)) goto loc_00470308; /* je: equal / zero */

loc_004702FE: ;
    if (CMP_NE(MEM32(ebp + -4), ebx)) goto loc_00470317; /* jne: not equal / not zero */

loc_00470303: ;
    eax = esi + -1;
    goto loc_00470325;

loc_00470308: ;
    if (CMP_NE(MEM32(ebp + -4), ebx)) goto loc_00470317; /* jne: not equal / not zero */

loc_0047030D: ;
    PUSH32(esp, 0); sub_0042C2AC(); /* call 0x0042C2AC */

loc_00470312: ;
    if (CMP_EQ(eax, 0x7A)) goto loc_0047037B; /* je: equal / zero */

loc_00470317: ;
    PUSH32(esp, 0); sub_00471B14(); /* call 0x00471B14 */

loc_0047031C: ;
    MEM32(eax) = 0x2A;
    eax = eax | 0xFFFFFFFFu;

loc_00470325: ;
    POP32(esp, edi);
    POP32(esp, esi);
    POP32(esp, ebx);
    esp = ebp;
    POP32(esp, ebp); /* leave */
    esp += 4; return; /* ret */

loc_0047032A: ;
    eax = ebp + -4;
    PUSH32(esp, eax);
    PUSH32(esp, ebx);
    PUSH32(esp, MEM32(0x655AF0));
    eax = ebp + -12;
    PUSH32(esp, eax);
    PUSH32(esp, 1);
    PUSH32(esp, MEM32(ebp + 0xC));
    PUSH32(esp, ebx);
    PUSH32(esp, MEM32(0x75F9D4));
    PUSH32(esp, 0); sub_0047E879(); /* call 0x0047E879 */

loc_0047034A: ;
    if (CMP_EQ(eax, ebx)) goto loc_00470317; /* je: equal / zero */

loc_0047034E: ;
    if (CMP_NE(MEM32(ebp + -4), ebx)) goto loc_00470317; /* jne: not equal / not zero */

loc_00470353: ;
    ecx = eax + esi;
    if (CMP_A(ecx, edi)) goto loc_0047037F; /* ja: above (unsigned >) */

loc_0047035A: ;
    edx = 0; /* xor self */
    if (CMP_LE(eax, ebx)) goto loc_00470377; /* jle: less or equal (signed <=) */

loc_00470360: ;
    SET_LO8(ecx, MEM8(ebp + edx + -12));
    (void)0; /* cmp LO8(ecx), LO8(ebx) - flags set for next jcc */
    edi = MEM32(ebp + 8);
    MEM8(esi + edi) = LO8(ecx);
    if (CMP_EQ(LO8(ecx), LO8(ebx))) goto loc_0047037F; /* je: equal / zero */

loc_0047036E: ;
    edx++;
    esi++;
    if (CMP_L(edx, eax)) goto loc_00470360; /* jl: less (signed <) */

loc_00470374: ;
    edi = MEM32(ebp + 0x10);

loc_00470377: ;
    MEM32(ebp + 0xC) = MEM32(ebp + 0xC) + 2;

loc_0047037B: ;
    if (CMP_B(esi, edi)) goto loc_0047032A; /* jb: below (unsigned <) */

loc_0047037F: ;
    eax = esi;
    goto loc_00470325;

}

/**
 * sub_004703C5
 * Original: 0x004703C5 - 0x004703E7 (34 bytes, 14 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_004703C5(void)
{
    uint32_t ebp;
    int _flags = 0; /* fallback flag var */

loc_004703C5: ;
    PUSH32(esp, ebp);
    ebp = esp;
    esp = esp - 0x18;
    PUSH32(esp, esi);
    esi = MEM32(ebp + 8);
    (void)0; /* cmp MEM32(0x655AF0), 1 - flags set for next jcc */
    eax = ZX8(MEM8(esi));
    if (CMP_LE(MEM32(0x655AF0), 1)) { sub_004703E7(); return; } /* jle: less or equal (signed <=) */

loc_004703DB: ;
    PUSH32(esp, 8);
    PUSH32(esp, eax);
    PUSH32(esp, 0); sub_00472114(); /* call 0x00472114 */

loc_004703E3: ;
    POP32(esp, ecx);
    POP32(esp, ecx);
    g_seh_ebp = ebp; sub_004703F4(); return; /* tail jmp 0x004703F4 */

}

/**
 * sub_00470421
 * Original: 0x00470421 - 0x00470478 (87 bytes, 35 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00470421(void)
{
    uint32_t ebp;
    int _flags = 0; /* fallback flag var */

loc_00470421: ;
    PUSH32(esp, ebp);
    ebp = esp;
    esp = esp - 0x20;
    PUSH32(esp, esi);
    esi = MEM32(ebp + 8);
    PUSH32(esp, edi);
    PUSH32(esp, MEM32(ebp + 0x10));
    eax = ebp + -32;
    PUSH32(esp, MEM32(ebp + 0xC));
    MEM32(ebp + -28) = 0x7FFFFFFF;
    PUSH32(esp, eax);
    MEM32(ebp + -20) = 0x42;
    MEM32(ebp + -24) = esi;
    MEM32(ebp + -32) = esi;
    PUSH32(esp, 0); sub_00472CF9(); /* call 0x00472CF9 */

loc_0047044F: ;
    esp = esp + 0xC;
    (void)0; /* test esi, esi - flags set for next jcc */
    edi = eax;
    if (TEST_Z(esi, esi)) goto loc_00470472; /* je: equal / zero */

loc_00470458: ;
    MEM32(ebp + -28) = MEM32(ebp + -28) - 1;
    if (((int32_t)MEM32(ebp + -28) < 0)) goto loc_00470465; /* js: sign (negative) */

loc_0047045D: ;
    eax = MEM32(ebp + -32);
    MEM8(eax) = 0;
    goto loc_00470472;

loc_00470465: ;
    eax = ebp + -32;
    PUSH32(esp, eax);
    PUSH32(esp, 0);
    PUSH32(esp, 0); sub_00472B52(); /* call 0x00472B52 */

loc_00470470: ;
    POP32(esp, ecx);
    POP32(esp, ecx);

loc_00470472: ;
    eax = edi;
    POP32(esp, edi);
    POP32(esp, esi);
    esp = ebp;
    POP32(esp, ebp); /* leave */
    esp += 4; return; /* ret */

}

/**
 * sub_00470478
 * Original: 0x00470478 - 0x004704BA (66 bytes, 22 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00470478(void)
{
    uint32_t ebp;
    int _flags = 0; /* fallback flag var */

loc_00470478: ;
    PUSH32(esp, ebp);
    ebp = esp;
    esp = esp - 0x20;
    eax = MEM32(ebp + 8);
    PUSH32(esp, esi);
    PUSH32(esp, MEM32(ebp + 0x10));
    MEM32(ebp + -24) = eax;
    PUSH32(esp, MEM32(ebp + 0xC));
    MEM32(ebp + -32) = eax;
    eax = ebp + -32;
    PUSH32(esp, eax);
    MEM32(ebp + -20) = 0x42;
    MEM32(ebp + -28) = 0x7FFFFFFF;
    PUSH32(esp, 0); sub_00478666(); /* call 0x00478666 */

loc_004704A5: ;
    esp = esp + 0xC;
    MEM32(ebp + -28) = MEM32(ebp + -28) - 1;
    esi = eax;
    if (((int32_t)MEM32(ebp + -28) < 0)) { sub_004704BA(); return; } /* js: sign (negative) */

loc_004704AF: ;
    eax = MEM32(ebp + -32);
    MEM8(eax) = 0;
    MEM32(ebp + -32) = MEM32(ebp + -32) + 1;
    g_seh_ebp = ebp; sub_004704C7(); return; /* tail jmp 0x004704C7 */

}

/**
 * sub_004704E6
 * Original: 0x004704E6 - 0x004704EB (5 bytes, 1 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_004704E6(void)
{
    uint32_t ebp;
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_004704E6: ;
    g_seh_ebp = ebp; sub_0046EE4A(); return; /* tail jmp 0x0046EE4A */

}

/**
 * sub_004704EB
 * Original: 0x004704EB - 0x004704F5 (10 bytes, 6 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_004704EB(void)
{
    uint32_t ebp;

loc_004704EB: ;
    PUSH32(esp, ebp);
    ebp = esp;
    PUSH32(esp, esi);
    esi = MEM32(ebp + 8);
    PUSH32(esp, edi);
    g_seh_ebp = ebp; sub_004704F7(); return; /* tail jmp 0x004704F7 */

}

/**
 * sub_0047054A
 * Original: 0x0047054A - 0x0047054F (5 bytes, 1 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0047054A(void)
{
    uint32_t ebp;
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_0047054A: ;
    g_seh_ebp = ebp; sub_004704EB(); return; /* tail jmp 0x004704EB */

}

/**
 * sub_0047054F
 * Original: 0x0047054F - 0x00470585 (54 bytes, 20 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0047054F(void)
{
    uint32_t ebp;

loc_0047054F: ;
    PUSH32(esp, ebp);
    ebp = esp;
    esp = esp - 0x20;
    eax = MEM32(ebp + 8);
    PUSH32(esp, eax);
    MEM32(ebp + -20) = 0x49;
    MEM32(ebp + -24) = eax;
    MEM32(ebp + -32) = eax;
    PUSH32(esp, 0); sub_0046E45A(); /* call 0x0046E45A */

loc_0047056B: ;
    eax = eax << 1;
    MEM32(ebp + -28) = eax;
    eax = ebp + 0x10;
    PUSH32(esp, eax);
    PUSH32(esp, MEM32(ebp + 0xC));
    eax = ebp + -32;
    PUSH32(esp, eax);
    PUSH32(esp, 0); sub_00479FE8(); /* call 0x00479FE8 */

loc_00470580: ;
    esp = esp + 0x10;
    esp = ebp;
    POP32(esp, ebp); /* leave */
    esp += 4; return; /* ret */

}

/**
 * sub_00470585
 * Original: 0x00470585 - 0x00470592 (13 bytes, 7 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00470585(void)
{
    uint32_t ebp;
    int _flags = 0; /* fallback flag var */

loc_00470585: ;
    PUSH32(esp, ebp);
    ebp = esp;
    if (CMP_NE(MEM32(ebp + 0x10), 0)) { sub_00470592(); return; } /* jne: not equal / not zero */

loc_0047058E: ;
    eax = 0; /* xor self */
    POP32(esp, ebp);
    esp += 4; return; /* ret */

}

/**
 * sub_004705BA
 * Original: 0x004705BA - 0x004705FB (65 bytes, 32 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_004705BA(void)
{
    uint32_t ebp;
    int _flags = 0; /* fallback flag var */

loc_004705BA: ;
    PUSH32(esp, ebp);
    ebp = esp;
    edx = MEM32(ebp + 8);
    eax = 0; /* xor self */
    (void)0; /* test edx, edx - flags set for next jcc */
    PUSH32(esp, esi);
    if (TEST_Z(edx, edx)) goto loc_004705E9; /* je: equal / zero */

loc_004705C7: ;
    if (CMP_EQ(MEM32(ebp + 0x10), eax)) goto loc_004705F8; /* je: equal / zero */

loc_004705CC: ;
    if (CMP_BE(MEM32(ebp + 0x10), eax)) goto loc_004705F8; /* jbe: below or equal (unsigned <=) */

loc_004705CE: ;
    ecx = MEM32(ebp + 0xC);
    ecx = ecx + eax;
    SET_LO16(esi, ZX8(MEM8(ecx)));
    MEM16(edx) = LO16(esi);
    if (CMP_EQ(MEM8(ecx), 0)) goto loc_004705F8; /* je: equal / zero */

loc_004705DF: ;
    eax++;
    edx++;
    edx++;
    if (CMP_B(eax, MEM32(ebp + 0x10))) goto loc_004705CE; /* jb: below (unsigned <) */

loc_004705E7: ;
    goto loc_004705F8;

loc_004705E9: ;
    eax = MEM32(ebp + 0xC);
    edx = eax + 1;

loc_004705EF: ;
    SET_LO8(ecx, MEM8(eax));
    eax++;
    if (TEST_NZ(LO8(ecx), LO8(ecx))) goto loc_004705EF; /* jne: not equal / not zero */

loc_004705F6: ;
    eax = eax - edx;

loc_004705F8: ;
    POP32(esp, esi);
    POP32(esp, ebp);
    esp += 4; return; /* ret */

}

/**
 * sub_004705FB
 * Original: 0x004705FB - 0x00470612 (23 bytes, 8 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_004705FB(void)
{
    int _flags = 0; /* fallback flag var */

loc_004705FB: ;
    if (CMP_LE(MEM32(0x655AF0), 1)) { sub_00470612(); return; } /* jle: less or equal (signed <=) */

loc_00470604: ;
    PUSH32(esp, 4);
    PUSH32(esp, MEM32(esp + 8));
    PUSH32(esp, 0); sub_00472114(); /* call 0x00472114 */

loc_0047060F: ;
    POP32(esp, ecx);
    POP32(esp, ecx);
    esp += 4; return; /* ret */

}

/**
 * sub_00470624
 * Original: 0x00470624 - 0x0047063E (26 bytes, 10 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00470624(void)
{
    uint32_t ebp;
    int _flags = 0; /* fallback flag var */
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_00470624: ;
    (void)0; /* cmp MEM32(0x655AF0), 1 - flags set for next jcc */
    PUSH32(esp, esi);
    esi = MEM32(esp + 8);
    if (CMP_LE(MEM32(0x655AF0), 1)) { sub_0047063E(); return; } /* jle: less or equal (signed <=) */

loc_00470632: ;
    PUSH32(esp, 1);
    PUSH32(esp, esi);
    PUSH32(esp, 0); sub_00472114(); /* call 0x00472114 */

loc_0047063A: ;
    POP32(esp, ecx);
    POP32(esp, ecx);
    g_seh_ebp = ebp; sub_0047064A(); return; /* tail jmp 0x0047064A */

}

/**
 * sub_00470655
 * Original: 0x00470655 - 0x00470692 (61 bytes, 30 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00470655(void)
{
    uint32_t ebp;
    int _flags = 0; /* fallback flag var */

loc_00470655: ;
    PUSH32(esp, ebp);
    ebp = esp;
    ecx = MEM32(ebp + 8);
    eax = ecx;

loc_0047065D: ;
    SET_LO16(edx, MEM16(ecx));
    ecx++;
    ecx++;
    if (TEST_NZ(LO16(edx), LO16(edx))) goto loc_0047065D; /* jne: not equal / not zero */

loc_00470667: ;
    ecx--;
    ecx--;
    (void)0; /* cmp MEM32(ebp + 0x10), 0 - flags set for next jcc */
    PUSH32(esp, esi);
    if (CMP_EQ(MEM32(ebp + 0x10), 0)) goto loc_0047068B; /* je: equal / zero */

loc_00470670: ;
    esi = MEM32(ebp + 0xC);

loc_00470673: ;
    SET_LO16(edx, MEM16(esi));
    MEM32(ebp + 0x10) = MEM32(ebp + 0x10) - 1;
    MEM16(ecx) = LO16(edx);
    ecx++;
    ecx++;
    esi++;
    esi++;
    if (TEST_Z(LO16(edx), LO16(edx))) goto loc_0047068F; /* je: equal / zero */

loc_00470685: ;
    if (CMP_NE(MEM32(ebp + 0x10), 0)) goto loc_00470673; /* jne: not equal / not zero */

loc_0047068B: ;
    MEM16(ecx) = MEM16(ecx) & 0;

loc_0047068F: ;
    POP32(esp, esi);
    POP32(esp, ebp);
    esp += 4; return; /* ret */

}

/**
 * sub_00470692
 * Original: 0x00470692 - 0x004706C2 (48 bytes, 21 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00470692(void)
{
    int _flags = 0; /* fallback flag var */
    int _cf = 0; /* carry flag */

loc_00470692: ;
    eax = MEM32(esp + 4);
    edx = eax;

loc_00470698: ;
    SET_LO16(ecx, MEM16(eax));
    eax++;
    eax++;
    if (TEST_NZ(LO16(ecx), LO16(ecx))) goto loc_00470698; /* jne: not equal / not zero */

loc_004706A2: ;
    SET_LO16(ecx, MEM16(esp + 8));

loc_004706A7: ;
    eax--;
    eax--;
    if (CMP_EQ(eax, edx)) goto loc_004706B2; /* je: equal / zero */

loc_004706AD: ;
    if (CMP_NE(MEM16(eax), LO16(ecx))) goto loc_004706A7; /* jne: not equal / not zero */

loc_004706B2: ;
    SET_LO16(edx, MEM16(eax));
    SET_LO16(edx, LO16(edx) - LO16(ecx));
    SET_LO16(edx, (uint32_t)(-(int32_t)LO16(edx)));
    edx = _cf ? 0xFFFFFFFF : 0; /* sbb self (CF extend) */
    edx = ~edx;
    eax = eax & edx;
    esp += 4; return; /* ret */

}

/**
 * sub_004706C2
 * Original: 0x004706C2 - 0x004706D0 (14 bytes, 6 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_004706C2(void)
{

loc_004706C2: ;
    PUSH32(esp, 8);
    PUSH32(esp, MEM32(esp + 8));
    PUSH32(esp, 0); sub_00479D42(); /* call 0x00479D42 */

loc_004706CD: ;
    POP32(esp, ecx);
    POP32(esp, ecx);
    esp += 4; return; /* ret */

}

/**
 * sub_004706D0
 * Original: 0x004706D0 - 0x00470762 (146 bytes, 55 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_004706D0(void)
{
    uint32_t ebp;
    int _flags = 0; /* fallback flag var */
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_004706D0: ;
    eax = 0; /* xor self */
    if (TEST_Z(LO8(ebx), 1)) goto loc_004706DA; /* je: equal / zero */

loc_004706D7: ;
    PUSH32(esp, 0x10);
    POP32(esp, eax);

loc_004706DA: ;
    if (TEST_Z(LO8(ebx), 4)) goto loc_004706E2; /* je: equal / zero */

loc_004706DF: ;
    eax = eax | 8;

loc_004706E2: ;
    if (TEST_Z(LO8(ebx), 8)) goto loc_004706EA; /* je: equal / zero */

loc_004706E7: ;
    eax = eax | 4;

loc_004706EA: ;
    if (TEST_Z(LO8(ebx), 0x10)) goto loc_004706F2; /* je: equal / zero */

loc_004706EF: ;
    eax = eax | 2;

loc_004706F2: ;
    if (TEST_Z(LO8(ebx), 0x20)) goto loc_004706FA; /* je: equal / zero */

loc_004706F7: ;
    eax = eax | 1;

loc_004706FA: ;
    if (TEST_Z(LO8(ebx), 2)) goto loc_00470704; /* je: equal / zero */

loc_004706FF: ;
    eax = eax | 0x80000;

loc_00470704: ;
    PUSH32(esp, ebp);
    edx = ZX16(LO16(ebx));
    PUSH32(esp, esi);
    ecx = edx;
    esi = 0xC00;
    ecx = ecx & esi;
    PUSH32(esp, edi);
    edi = 0x300;
    ebp = 0x200;
    if ((ecx == 0)) goto loc_00470740; /* je: equal / zero */

loc_0047071F: ;
    if (CMP_EQ(ecx, 0x400)) goto loc_0047073B; /* je: equal / zero */

loc_00470727: ;
    if (CMP_EQ(ecx, 0x800)) goto loc_00470737; /* je: equal / zero */

loc_0047072F: ;
    if (CMP_NE(ecx, esi)) goto loc_00470740; /* jne: not equal / not zero */

loc_00470733: ;
    eax = eax | edi;
    goto loc_00470740;

loc_00470737: ;
    eax = eax | ebp;
    goto loc_00470740;

loc_0047073B: ;
    eax = eax | 0x100;

loc_00470740: ;
    edx = edx & edi;
    if ((edx == 0)) goto loc_0047074F; /* je: equal / zero */

loc_00470744: ;
    if (CMP_NE(edx, ebp)) goto loc_00470754; /* jne: not equal / not zero */

loc_00470748: ;
    eax = eax | 0x10000;
    goto loc_00470754;

loc_0047074F: ;
    eax = eax | 0x20000;

loc_00470754: ;
    (void)0; /* test HI8(ebx), 0x10 - flags set for next jcc */
    POP32(esp, edi);
    POP32(esp, esi);
    POP32(esp, ebp);
    if (TEST_Z(HI8(ebx), 0x10)) goto loc_00470761; /* je: equal / zero */

loc_0047075C: ;
    eax = eax | 0x40000;

loc_00470761: ;
    esp += 4; return; /* ret */

}

/**
 * sub_00470762
 * Original: 0x00470762 - 0x004707F0 (142 bytes, 49 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00470762(void)
{
    int _flags = 0; /* fallback flag var */

loc_00470762: ;
    eax = 0; /* xor self */
    if (TEST_Z(LO8(ebx), 0x10)) goto loc_0047076A; /* je: equal / zero */

loc_00470769: ;
    eax++;

loc_0047076A: ;
    if (TEST_Z(LO8(ebx), 8)) goto loc_00470772; /* je: equal / zero */

loc_0047076F: ;
    eax = eax | 4;

loc_00470772: ;
    if (TEST_Z(LO8(ebx), 4)) goto loc_0047077A; /* je: equal / zero */

loc_00470777: ;
    eax = eax | 8;

loc_0047077A: ;
    if (TEST_Z(LO8(ebx), 2)) goto loc_00470782; /* je: equal / zero */

loc_0047077F: ;
    eax = eax | 0x10;

loc_00470782: ;
    if (TEST_Z(LO8(ebx), 1)) goto loc_0047078A; /* je: equal / zero */

loc_00470787: ;
    eax = eax | 0x20;

loc_0047078A: ;
    if (TEST_Z(ebx, 0x80000)) goto loc_00470795; /* je: equal / zero */

loc_00470792: ;
    eax = eax | 2;

loc_00470795: ;
    ecx = ebx;
    edx = 0x300;
    ecx = ecx & edx;
    PUSH32(esp, esi);
    esi = 0x200;
    if ((ecx == 0)) goto loc_004707C9; /* je: equal / zero */

loc_004707A6: ;
    if (CMP_EQ(ecx, 0x100)) goto loc_004707C4; /* je: equal / zero */

loc_004707AE: ;
    if (CMP_EQ(ecx, esi)) goto loc_004707BD; /* je: equal / zero */

loc_004707B2: ;
    if (CMP_NE(ecx, edx)) goto loc_004707C9; /* jne: not equal / not zero */

loc_004707B6: ;
    eax = eax | 0xC00;
    goto loc_004707C9;

loc_004707BD: ;
    eax = eax | 0x800;
    goto loc_004707C9;

loc_004707C4: ;
    eax = eax | 0x400;

loc_004707C9: ;
    ecx = ebx;
    ecx = ecx & 0x30000;
    if ((ecx == 0)) goto loc_004707DF; /* je: equal / zero */

loc_004707D3: ;
    if (CMP_NE(ecx, 0x10000)) goto loc_004707E1; /* jne: not equal / not zero */

loc_004707DB: ;
    eax = eax | esi;
    goto loc_004707E1;

loc_004707DF: ;
    eax = eax | edx;

loc_004707E1: ;
    (void)0; /* test ebx, 0x40000 - flags set for next jcc */
    POP32(esp, esi);
    if (TEST_Z(ebx, 0x40000)) goto loc_004707EF; /* je: equal / zero */

loc_004707EA: ;
    eax = eax | 0x1000;

loc_004707EF: ;
    esp += 4; return; /* ret */

}

/**
 * sub_004707F0
 * Original: 0x004707F0 - 0x00470822 (50 bytes, 22 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_004707F0(void)
{
    uint32_t ebp;
    double _fp_stack[8];
    int _fp_top = 0;
    #define fp_push(v) (_fp_stack[--_fp_top & 7] = (v))
    #define fp_pop() (_fp_top++)
    #define fp_popp() (fp_pop())
    #define fp_top() _fp_stack[_fp_top & 7]
    #define fp_st1() _fp_stack[(_fp_top + 1) & 7]

loc_004707F0: ;
    PUSH32(esp, ebp);
    ebp = esp;
    PUSH32(esp, ecx);
    PUSH32(esp, ebx);
    /* wait - FPU sync */
    /* fnstcw word ptr [ebp - 4] - store FPU control word */
    ebx = MEM32(ebp + -4);
    PUSH32(esp, 0); sub_004706D0(); /* call 0x004706D0 */

loc_00470801: ;
    ebx = eax;
    eax = MEM32(ebp + 0xC);
    eax = ~eax;
    ebx = ebx & eax;
    eax = MEM32(ebp + 8);
    eax = eax & MEM32(ebp + 0xC);
    ebx = ebx | eax;
    PUSH32(esp, 0); sub_00470762(); /* call 0x00470762 */

loc_00470817: ;
    MEM32(ebp + 0xC) = eax;
    /* fldcw word ptr [ebp + 0xc] - load FPU control word */
    eax = ebx;
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
 * sub_00470822
 * Original: 0x00470822 - 0x00470838 (22 bytes, 8 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00470822(void)
{

loc_00470822: ;
    eax = MEM32(esp + 8);
    eax = eax & 0xFFF7FFFFu;
    PUSH32(esp, eax);
    PUSH32(esp, MEM32(esp + 8));
    PUSH32(esp, 0); sub_004707F0(); /* call 0x004707F0 */

loc_00470835: ;
    POP32(esp, ecx);
    POP32(esp, ecx);
    esp += 4; return; /* ret */

}

/**
 * sub_00470838
 * Original: 0x00470838 - 0x00470863 (43 bytes, 19 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00470838(void)
{
    uint32_t ebp;
    int _flags = 0; /* fallback flag var */

loc_00470838: ;
    PUSH32(esp, ebp);
    ebp = esp;
    PUSH32(esp, ecx);
    MEM32(ebp + -4) = MEM32(ebp + -4) & 0;
    PUSH32(esp, ebx);
    PUSH32(esp, esi);
    esi = MEM32(ebp + 8);
    SET_LO8(ebx, MEM8(esi));
    PUSH32(esp, edi);
    edi = esi + 1;
    (void)0; /* cmp MEM32(0x655AF0), 1 - flags set for next jcc */
    eax = ZX8(LO8(ebx));
    if (CMP_LE(MEM32(0x655AF0), 1)) { sub_00470863(); return; } /* jle: less or equal (signed <=) */

loc_00470857: ;
    PUSH32(esp, 8);
    PUSH32(esp, eax);
    PUSH32(esp, 0); sub_00472114(); /* call 0x00472114 */

loc_0047085F: ;
    POP32(esp, ecx);
    POP32(esp, ecx);
    g_seh_ebp = ebp; sub_00470870(); return; /* tail jmp 0x00470870 */

}

/**
 * sub_004709E1
 * Original: 0x004709E1 - 0x004709F8 (23 bytes, 7 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_004709E1(void)
{

loc_004709E1: ;
    PUSH32(esp, 0);
    PUSH32(esp, MEM32(esp + 0x10));
    PUSH32(esp, MEM32(esp + 0x10));
    PUSH32(esp, MEM32(esp + 0x10));
    PUSH32(esp, 0); sub_00470838(); /* call 0x00470838 */

loc_004709F4: ;
    esp = esp + 0x10;
    esp += 4; return; /* ret */

}

/**
 * sub_00470A00
 * Original: 0x00470A00 - 0x00470A19 (25 bytes, 8 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00470A00(void)
{
    int _flags = 0; /* fallback flag var */

loc_00470A00: ;
    eax = MEM32(esp + 8);
    ecx = MEM32(esp + 0x10);
    ecx = ecx | eax;
    ecx = MEM32(esp + 0xC);
    if ((ecx != 0)) { sub_00470A19(); return; } /* jne: not equal / not zero */

loc_00470A10: ;
    eax = MEM32(esp + 4);
    { uint64_t _r = (uint64_t)eax * (uint64_t)ecx;
      eax = (uint32_t)_r; edx = (uint32_t)(_r >> 32); }
    esp += 20; return; /* ret 16 */

}

/**
 * sub_00470A34
 * Original: 0x00470A34 - 0x00470A6F (59 bytes, 19 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00470A34(void)
{
    uint32_t ebp;
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_00470A34: ;
    PUSH32(esp, 0x470A88);
    eax = MEM32(0);
    PUSH32(esp, eax);
    eax = MEM32(esp + 0x10);
    MEM32(esp + 0x10) = ebp;
    ebp = esp + 0x10;
    esp = esp - eax;
    PUSH32(esp, ebx);
    PUSH32(esp, esi);
    PUSH32(esp, edi);
    eax = MEM32(ebp + -8);
    MEM32(ebp + -24) = esp;
    PUSH32(esp, eax);
    eax = MEM32(ebp + -4);
    MEM32(ebp + -4) = 0xFFFFFFFFu;
    MEM32(ebp + -8) = eax;
    eax = ebp + -16;
    MEM32(0) = eax;
    g_seh_ebp = ebp; esp += 4; return; /* ret */

}

/**
 * sub_00470A6F
 * Original: 0x00470A6F - 0x00470A80 (17 bytes, 9 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00470A6F(void)
{
    uint32_t ebp;
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_00470A6F: ;
    ecx = MEM32(ebp + -16);
    MEM32(0) = ecx;
    POP32(esp, ecx);
    POP32(esp, edi);
    POP32(esp, esi);
    POP32(esp, ebx);
    esp = ebp;
    POP32(esp, ebp); /* leave */
    PUSH32(esp, ecx);
    g_seh_ebp = ebp; esp += 4; return; /* ret */

}

/**
 * sub_00470A88
 * Original: 0x00470A88 - 0x00470B3D (181 bytes, 70 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00470A88(void)
{
    uint32_t ebp;
    int _flags = 0; /* fallback flag var */

loc_00470A88: ;
    PUSH32(esp, ebp);
    ebp = esp;
    esp = esp - 8;
    PUSH32(esp, ebx);
    PUSH32(esp, esi);
    PUSH32(esp, edi);
    PUSH32(esp, ebp);
    /* cld - direction flag */
    ebx = MEM32(ebp + 0xC);
    eax = MEM32(ebp + 8);
    if (TEST_NZ(MEM32(eax + 4), 6)) { sub_00470B3D(); return; } /* jne: not equal / not zero */

loc_00470AA6: ;
    MEM32(ebp + -8) = eax;
    eax = MEM32(ebp + 0x10);
    MEM32(ebp + -4) = eax;
    eax = ebp + -8;
    MEM32(ebx + -4) = eax;
    esi = MEM32(ebx + 0xC);
    edi = MEM32(ebx + 8);

loc_00470ABB: ;
    if (CMP_EQ(esi, 0xFFFFFFFFu)) goto loc_00470B36; /* je: equal / zero */

loc_00470AC0: ;
    ecx = esi + esi * 2;
    eax = MEM32(edi + ecx * 4 + 4);
    eax = eax | eax;
    if ((eax == 0)) goto loc_00470B24; /* je: equal / zero */

loc_00470ACB: ;
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, esi);
    PUSH32(esp, ebp);
    ebp = ebx + 0x10;
    ebx = 0; /* xor self */
    ecx = 0; /* xor self */
    edx = 0; /* xor self */
    esi = 0; /* xor self */
    edi = 0; /* xor self */
    PUSH32(esp, 0); RECOMP_ICALL_SAFE(eax, _icall_esp); /* indirect call */
    }

loc_00470ADC: ;
    POP32(esp, ebp);
    POP32(esp, esi);
    ebx = MEM32(ebp + 0xC);
    eax = eax | eax;
    if ((eax == 0)) goto loc_00470B24; /* je: equal / zero */

loc_00470AE5: ;
    if (((int32_t)eax < 0)) goto loc_00470B2F; /* js: sign (negative) */

loc_00470AE7: ;
    edi = MEM32(ebx + 8);
    PUSH32(esp, ebx);
    PUSH32(esp, 0); sub_00470B78(); /* call 0x00470B78 */

loc_00470AF0: ;
    esp = esp + 4;
    ebp = ebx + 0x10;
    PUSH32(esp, esi);
    PUSH32(esp, ebx);
    PUSH32(esp, 0); sub_00470BBA(); /* call 0x00470BBA */

loc_00470AFD: ;
    esp = esp + 8;
    ecx = esi + esi * 2;
    PUSH32(esp, 1);
    eax = MEM32(edi + ecx * 4 + 8);
    PUSH32(esp, 0); sub_00470C4E(); /* call 0x00470C4E */

loc_00470B0E: ;
    eax = MEM32(edi + ecx * 4);
    MEM32(ebx + 0xC) = eax;
    eax = MEM32(edi + ecx * 4 + 8);
    ebx = 0; /* xor self */
    ecx = 0; /* xor self */
    edx = 0; /* xor self */
    esi = 0; /* xor self */
    edi = 0; /* xor self */
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, 0); RECOMP_ICALL_SAFE(eax, _icall_esp); /* indirect call */
    }

loc_00470B24: ;
    edi = MEM32(ebx + 8);
    ecx = esi + esi * 2;
    esi = MEM32(edi + ecx * 4);
    goto loc_00470ABB;

loc_00470B2F: ;
    eax = 0;
    g_seh_ebp = ebp; sub_00470B52(); return; /* tail jmp 0x00470B52 */

loc_00470B36: ;
    eax = 1;
    g_seh_ebp = ebp; sub_00470B52(); return; /* tail jmp 0x00470B52 */

}

/**
 * sub_00470B78
 * Original: 0x00470B78 - 0x00470B98 (32 bytes, 18 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00470B78(void)
{
    uint32_t ebp;

loc_00470B78: ;
    PUSH32(esp, ebp);
    ebp = esp;
    PUSH32(esp, ebx);
    PUSH32(esp, esi);
    PUSH32(esp, edi);
    PUSH32(esp, ebp);
    PUSH32(esp, 0);
    PUSH32(esp, 0);
    PUSH32(esp, 0x470B90);
    PUSH32(esp, MEM32(ebp + 8));
    PUSH32(esp, 0); sub_0047F02A(); /* call 0x0047F02A */

loc_00470B90: ;
    POP32(esp, ebp);
    POP32(esp, edi);
    POP32(esp, esi);
    POP32(esp, ebx);
    esp = ebp;
    POP32(esp, ebp);
    esp += 4; return; /* ret */

}

/**
 * sub_00470BBA
 * Original: 0x00470BBA - 0x00470C14 (90 bytes, 27 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00470BBA(void)
{
    int _flags = 0; /* fallback flag var */

loc_00470BBA: ;
    PUSH32(esp, ebx);
    PUSH32(esp, esi);
    PUSH32(esp, edi);
    eax = MEM32(esp + 0x10);
    PUSH32(esp, eax);
    PUSH32(esp, 0xFFFFFFFEu);
    PUSH32(esp, 0x470B98);
    PUSH32(esp, MEM32(0));
    MEM32(0) = esp;

loc_00470BD7: ;
    eax = MEM32(esp + 0x20);
    ebx = MEM32(eax + 8);
    esi = MEM32(eax + 0xC);
    if (CMP_EQ(esi, 0xFFFFFFFFu)) { sub_00470C14(); return; } /* je: equal / zero */

loc_00470BE6: ;
    if (CMP_EQ(esi, MEM32(esp + 0x24))) { sub_00470C14(); return; } /* je: equal / zero */

loc_00470BEC: ;
    esi = esi + esi * 2;
    ecx = MEM32(ebx + esi * 4);
    MEM32(esp + 8) = ecx;
    MEM32(eax + 0xC) = ecx;
    if (CMP_NE(MEM32(ebx + esi * 4 + 4), 0)) goto loc_00470C12; /* jne: not equal / not zero */

loc_00470C00: ;
    PUSH32(esp, 0x101);
    eax = MEM32(ebx + esi * 4 + 8);
    PUSH32(esp, 0); sub_00470C4E(); /* call 0x00470C4E */

loc_00470C0E: ;
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, 0); RECOMP_ICALL_SAFE(MEM32(ebx + esi * 4 + 8), _icall_esp); /* indirect call */
    }

loc_00470C12: ;
    goto loc_00470BD7;

}

/**
 * sub_00470C22
 * Original: 0x00470C22 - 0x00470C45 (35 bytes, 10 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00470C22(void)
{
    int _flags = 0; /* fallback flag var */

loc_00470C22: ;
    eax = 0; /* xor self */
    ecx = MEM32(0);
    if (CMP_NE(MEM32(ecx + 4), 0x470B98)) goto loc_00470C44; /* jne: not equal / not zero */

loc_00470C34: ;
    edx = MEM32(ecx + 0xC);
    edx = MEM32(edx + 0xC);
    if (CMP_NE(MEM32(ecx + 8), edx)) goto loc_00470C44; /* jne: not equal / not zero */

loc_00470C3F: ;
    eax = 1;

loc_00470C44: ;
    esp += 4; return; /* ret */

}

/**
 * sub_00470C45
 * Original: 0x00470C45 - 0x00470C4E (9 bytes, 4 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00470C45(void)
{
    uint32_t ebp;
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_00470C45: ;
    PUSH32(esp, ebx);
    PUSH32(esp, ecx);
    ebx = 0x655640;
    g_seh_ebp = ebp; sub_00470C58(); return; /* tail jmp 0x00470C58 */

}

/**
 * sub_00470C4E
 * Original: 0x00470C4E - 0x00470C66 (24 bytes, 10 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00470C4E(void)
{
    uint32_t ebp;
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_00470C4E: ;
    PUSH32(esp, ebx);
    PUSH32(esp, ecx);
    ebx = 0x655640;
    ecx = MEM32(ebp + 8);
    MEM32(ebx + 8) = ecx;
    MEM32(ebx + 4) = eax;
    MEM32(ebx + 0xC) = ebp;
    POP32(esp, ecx);
    POP32(esp, ebx);
    esp += 8; return; /* ret 4 */

}

/**
 * sub_00470C66
 * Original: 0x00470C66 - 0x00470C74 (14 bytes, 3 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00470C66(void)
{
    uint32_t ebp;
    int _flags = 0; /* fallback flag var */
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_00470C66: ;
    if (CMP_NE(MEM32(0x75F9C4), 0)) { sub_00470C74(); return; } /* jne: not equal / not zero */

loc_00470C6F: ;
    g_seh_ebp = ebp; sub_0047AD80(); return; /* tail jmp 0x0047AD80 */

}

/**
 * sub_00470CB0
 * Original: 0x00470CB0 - 0x00470CCA (26 bytes, 12 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00470CB0(void)
{
    int _flags = 0; /* fallback flag var */

loc_00470CB0: ;
    if (CMP_AE(LO8(ecx), 0x40)) { sub_00470CCA(); return; } /* jae: above or equal (unsigned >=) */

loc_00470CB5: ;
    if (CMP_AE(LO8(ecx), 0x20)) goto loc_00470CC0; /* jae: above or equal (unsigned >=) */

loc_00470CBA: ;
    eax = (eax >> LO8(ecx)) | (edx << (32 - LO8(ecx))); /* shrd */
    edx = edx >> LO8(ecx);
    esp += 4; return; /* ret */

loc_00470CC0: ;
    eax = edx;
    edx = 0; /* xor self */
    SET_LO8(ecx, LO8(ecx) & 0x1F);
    eax = eax >> LO8(ecx);
    esp += 4; return; /* ret */

}

/**
 * sub_00470CD0
 * Original: 0x00470CD0 - 0x00470CF1 (33 bytes, 13 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00470CD0(void)
{
    uint32_t ebp;
    int _flags = 0; /* fallback flag var */
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_00470CD0: ;
    PUSH32(esp, ebx);
    eax = MEM32(esp + 0x14);
    eax = eax | eax;
    if ((eax != 0)) { sub_00470CF1(); return; } /* jne: not equal / not zero */

loc_00470CD9: ;
    ecx = MEM32(esp + 0x10);
    eax = MEM32(esp + 0xC);
    edx = 0; /* xor self */
    { uint64_t _dividend = ((uint64_t)edx << 32) | eax;
      eax = (uint32_t)(_dividend / (uint32_t)ecx);
      edx = (uint32_t)(_dividend % (uint32_t)ecx); }
    eax = MEM32(esp + 8);
    { uint64_t _dividend = ((uint64_t)edx << 32) | eax;
      eax = (uint32_t)(_dividend / (uint32_t)ecx);
      edx = (uint32_t)(_dividend % (uint32_t)ecx); }
    eax = edx;
    edx = 0; /* xor self */
    g_seh_ebp = ebp; sub_00470D41(); return; /* tail jmp 0x00470D41 */

}

/**
 * sub_00470D50
 * Original: 0x00470D50 - 0x00470DA9 (89 bytes, 35 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00470D50(void)
{
    uint32_t ebp;
    int _flags = 0; /* fallback flag var */
    int _cf = 0; /* carry flag */
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_00470D50: ;
    PUSH32(esp, edi);
    PUSH32(esp, esi);
    PUSH32(esp, ebx);
    edi = 0; /* xor self */
    eax = MEM32(esp + 0x14);
    eax = eax | eax;
    if (((int32_t)eax >= 0)) goto loc_00470D71; /* jge: greater or equal (signed >=) */

loc_00470D5D: ;
    edi++;
    edx = MEM32(esp + 0x10);
    eax = (uint32_t)(-(int32_t)eax);
    edx = (uint32_t)(-(int32_t)edx);
    eax = eax - 0 - _cf; /* sbb */
    MEM32(esp + 0x14) = eax;
    MEM32(esp + 0x10) = edx;

loc_00470D71: ;
    eax = MEM32(esp + 0x1C);
    eax = eax | eax;
    if (((int32_t)eax >= 0)) goto loc_00470D8D; /* jge: greater or equal (signed >=) */

loc_00470D79: ;
    edi++;
    edx = MEM32(esp + 0x18);
    eax = (uint32_t)(-(int32_t)eax);
    edx = (uint32_t)(-(int32_t)edx);
    eax = eax - 0 - _cf; /* sbb */
    MEM32(esp + 0x1C) = eax;
    MEM32(esp + 0x18) = edx;

loc_00470D8D: ;
    eax = eax | eax;
    if ((eax != 0)) { sub_00470DA9(); return; } /* jne: not equal / not zero */

loc_00470D91: ;
    ecx = MEM32(esp + 0x18);
    eax = MEM32(esp + 0x14);
    edx = 0; /* xor self */
    { uint64_t _dividend = ((uint64_t)edx << 32) | eax;
      eax = (uint32_t)(_dividend / (uint32_t)ecx);
      edx = (uint32_t)(_dividend % (uint32_t)ecx); }
    ebx = eax;
    eax = MEM32(esp + 0x10);
    { uint64_t _dividend = ((uint64_t)edx << 32) | eax;
      eax = (uint32_t)(_dividend / (uint32_t)ecx);
      edx = (uint32_t)(_dividend % (uint32_t)ecx); }
    edx = ebx;
    g_seh_ebp = ebp; sub_00470DEA(); return; /* tail jmp 0x00470DEA */

}

/**
 * sub_00470DFA
 * Original: 0x00470DFA - 0x00470E4B (81 bytes, 38 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00470DFA(void)
{
    uint32_t ebp;
    int _flags = 0; /* fallback flag var */

loc_00470DFA: ;
    PUSH32(esp, ebp);
    ebp = esp;
    if (CMP_EQ(MEM32(ebp + 0x10), 0)) { sub_00470E4B(); return; } /* je: equal / zero */

loc_00470E03: ;
    if (CMP_NE(MEM32(0x75F9C4), 0)) goto loc_00470E12; /* jne: not equal / not zero */

loc_00470E0C: ;
    POP32(esp, ebp);
    g_seh_ebp = ebp; sub_0047ADD0(); return; /* tail jmp 0x0047ADD0 */

loc_00470E12: ;
    PUSH32(esp, ebx);
    PUSH32(esp, esi);
    esi = MEM32(ebp + 8);
    PUSH32(esp, edi);
    edi = MEM32(ebp + 0xC);

loc_00470E1B: ;
    eax = ZX8(MEM8(esi));
    PUSH32(esp, eax);
    PUSH32(esp, 0); sub_00470624(); /* call 0x00470624 */

loc_00470E24: ;
    ebx = eax;
    eax = ZX8(MEM8(edi));
    PUSH32(esp, eax);
    esi++;
    PUSH32(esp, 0); sub_00470624(); /* call 0x00470624 */

loc_00470E30: ;
    POP32(esp, ecx);
    edi++;
    MEM32(ebp + 0x10) = MEM32(ebp + 0x10) - 1;
    POP32(esp, ecx);
    ecx = eax;
    if ((MEM32(ebp + 0x10) == 0)) goto loc_00470E42; /* je: equal / zero */

loc_00470E3A: ;
    if (TEST_Z(ebx, ebx)) goto loc_00470E42; /* je: equal / zero */

loc_00470E3E: ;
    if (CMP_EQ(ebx, ecx)) goto loc_00470E1B; /* je: equal / zero */

loc_00470E42: ;
    POP32(esp, edi);
    eax = ebx;
    POP32(esp, esi);
    eax = eax - ecx;
    POP32(esp, ebx);
    POP32(esp, ebp);
    esp += 4; return; /* ret */

}

/**
 * sub_00470E50
 * Original: 0x00470E50 - 0x00470E69 (25 bytes, 12 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00470E50(void)
{
    int _flags = 0; /* fallback flag var */

loc_00470E50: ;
    if (TEST_Z(eax, eax)) goto loc_00470E68; /* je: equal / zero */

loc_00470E54: ;
    if (CMP_AE(eax, 0x1000)) { sub_00470E69(); return; } /* jae: above or equal (unsigned >=) */

loc_00470E5B: ;
    eax = (uint32_t)(-(int32_t)eax);
    eax = eax + esp;
    eax = eax + 4;
    (void)0; /* test MEM32(eax), eax - flags set for next jcc */
    { uint32_t _tmp = esp;
    esp = eax;
    eax = _tmp; }
    eax = MEM32(eax);
    PUSH32(esp, eax);

loc_00470E68: ;
    esp += 4; return; /* ret */

}

/**
 * sub_00470EA0
 * Original: 0x00470EA0 - 0x00470EC2 (34 bytes, 14 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00470EA0(void)
{
    uint32_t ebp;
    int _flags = 0; /* fallback flag var */
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_00470EA0: ;
    PUSH32(esp, ebx);
    PUSH32(esp, esi);
    eax = MEM32(esp + 0x18);
    eax = eax | eax;
    if ((eax != 0)) { sub_00470EC2(); return; } /* jne: not equal / not zero */

loc_00470EAA: ;
    ecx = MEM32(esp + 0x14);
    eax = MEM32(esp + 0x10);
    edx = 0; /* xor self */
    { uint64_t _dividend = ((uint64_t)edx << 32) | eax;
      eax = (uint32_t)(_dividend / (uint32_t)ecx);
      edx = (uint32_t)(_dividend % (uint32_t)ecx); }
    ebx = eax;
    eax = MEM32(esp + 0xC);
    { uint64_t _dividend = ((uint64_t)edx << 32) | eax;
      eax = (uint32_t)(_dividend / (uint32_t)ecx);
      edx = (uint32_t)(_dividend % (uint32_t)ecx); }
    edx = ebx;
    g_seh_ebp = ebp; sub_00470F03(); return; /* tail jmp 0x00470F03 */

}

/**
 * sub_00470F08
 * Original: 0x00470F08 - 0x00470F40 (56 bytes, 8 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00470F08(void)
{

loc_00470F08: ;
    eax = 0x47B1DC;
    MEM32(0x655D60) = eax;
    MEM32(0x655D64) = 0x47AE89;
    MEM32(0x655D68) = 0x47AEEE;
    MEM32(0x655D6C) = 0x47AE31;
    MEM32(0x655D70) = 0x47AED4;
    MEM32(0x655D74) = eax;
    esp += 4; return; /* ret */

}

/**
 * sub_00470F54
 * Original: 0x00470F54 - 0x00470F68 (20 bytes, 6 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00470F54(void)
{
    double _fp_stack[8];
    int _fp_top = 0;
    #define fp_push(v) (_fp_stack[--_fp_top & 7] = (v))
    #define fp_pop() (_fp_top++)
    #define fp_popp() (fp_pop())
    #define fp_top() _fp_stack[_fp_top & 7]
    #define fp_st1() _fp_stack[(_fp_top + 1) & 7]

loc_00470F54: ;
    esp = esp - 0xC;
    MEMD(esp) = fp_top(); fp_pop(); /* fst */
    PUSH32(esp, 0); sub_0047B4D8(); /* call 0x0047B4D8 */

loc_00470F5F: ;
    PUSH32(esp, 0); sub_00470F71(); /* call 0x00470F71 */

loc_00470F64: ;
    esp = esp + 0xC;
    esp += 4; return; /* ret */

    #undef fp_push
    #undef fp_pop
    #undef fp_popp
    #undef fp_top
    #undef fp_st1
}

/**
 * sub_00470F71
 * Original: 0x00470F71 - 0x0047101F (174 bytes, 51 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00470F71(void)
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

loc_00470F71: ;
    PUSH32(esp, edx);
    /* wait - FPU sync */
    /* fnstcw word ptr [esp] - store FPU control word */
    if (_flags /* je: equal / zero */) goto loc_00470FE5;

loc_00470F78: ;
    if (CMP_EQ(MEM16(esp), 0x27F)) goto loc_00470F85; /* je: equal / zero */

loc_00470F80: ;
    PUSH32(esp, 0); sub_0047B465(); /* call 0x0047B465 */

loc_00470F85: ;
    if (CMP_AE(eax, 0x3FF00000)) goto loc_00470FB9; /* jae: above or equal (unsigned >=) */

loc_00470F8C: ;
    fp_push(1.0); /* fld1 */
    fp_st1() += fp_top(); fp_pop(); /* fadd */
    fp_push(1.0); /* fld1 */
    fp_st1() -= fp_top(); fp_pop(); /* fsub */
    fp_st1() *= fp_top(); fp_pop(); /* fmulp */
    fp_top() = sqrt(fp_top()); /* fsqrt */
    { double _t = fp_top(); fp_top() = fp_st1(); fp_st1() = _t; } /* fxch */
    /* FPU: fpatan  */

loc_00470F9C: ;
    if (CMP_NE(MEM32(0x75F7D4), 0)) { sub_0047B4EE(); return; } /* jne: not equal / not zero */

loc_00470FA9: ;
    edx = 0xD;
    ecx = 0x655664;
    g_seh_ebp = ebp; sub_0047B4FB(); return; /* tail jmp 0x0047B4FB */

loc_00470FB9: ;
    if (CMP_A(MEM32(0x75F7D4), 0)) goto loc_00470FF3; /* ja: above (unsigned >) */

loc_00470FBB: ;
    eax = MEM32(esp + 0xC);
    ecx = eax;
    eax = eax & 0xFFFFF;
    eax = eax | MEM32(esp + 8);
    if ((eax != 0)) goto loc_00470FF3; /* jne: not equal / not zero */

loc_00470FCC: ;
    ecx = ecx & 0x80000000u;
    /* fstp st(0) */
    if ((ecx == 0)) goto loc_00470FDA; /* je: equal / zero */

loc_00470FD6: ;
    /* FPU: fldpi  */
    goto loc_00470F9C;

loc_00470FDA: ;
    fp_push(0.0); /* fldz */
    goto loc_00470F9C;

loc_00470FDE: ;
    PUSH32(esp, 0); sub_0047B47C(); /* call 0x0047B47C */

loc_00470FE3: ;
    goto loc_00471000;

loc_00470FE5: ;
    if (TEST_NZ(eax, 0xFFFFF)) goto loc_00470FDE; /* jne: not equal / not zero */

loc_00470FEC: ;
    if (CMP_NE(MEM32(esp + 8), 0)) goto loc_00470FDE; /* jne: not equal / not zero */

loc_00470FF3: ;
    /* fstp st(0) */
    fp_push(MEMF(0x655D78)); /* fld */
    eax = 1;

loc_00471000: ;
    if (CMP_NE(MEM32(0x75F7D4), 0)) { sub_0047B4EE(); return; } /* jne: not equal / not zero */

loc_0047100D: ;
    edx = 0xD;
    ecx = 0x655664;
    PUSH32(esp, 0); sub_0047B413(); /* call 0x0047B413 */

loc_0047101D: ;
    POP32(esp, edx);
    esp += 4; return; /* ret */

    #undef fp_push
    #undef fp_pop
    #undef fp_popp
    #undef fp_top
    #undef fp_st1
}

/**
 * sub_0047101F
 * Original: 0x0047101F - 0x004710BD (158 bytes, 69 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0047101F(void)
{
    uint32_t ebp;
    int _flags = 0; /* fallback flag var */

loc_0047101F: ;
    PUSH32(esp, ebp);
    ebp = esp;
    eax = 0; /* xor self */
    if (CMP_EQ(MEM32(ebp + 0x10), eax)) goto loc_004710BB; /* je: equal / zero */

loc_0047102D: ;
    (void)0; /* cmp MEM32(0x75F9C4), eax - flags set for next jcc */
    PUSH32(esp, ebx);
    if (CMP_NE(MEM32(0x75F9C4), eax)) goto loc_0047107B; /* jne: not equal / not zero */

loc_00471036: ;
    edx = MEM32(ebp + 0xC);
    ecx = MEM32(ebp + 8);

loc_0047103C: ;
    eax = 0; /* xor self */
    SET_LO16(eax, MEM16(ecx));
    if (CMP_B(LO16(eax), 0x41)) goto loc_00471050; /* jb: below (unsigned <) */

loc_00471047: ;
    (void)0; /* cmp LO16(eax), 0x5A - flags set for next jcc */
    ebx = eax + 0x20;
    if (CMP_BE(LO16(eax), 0x5A)) goto loc_00471052; /* jbe: below or equal (unsigned <=) */

loc_00471050: ;
    ebx = eax;

loc_00471052: ;
    eax = 0; /* xor self */
    SET_LO16(eax, MEM16(edx));
    if (CMP_B(LO16(eax), 0x41)) goto loc_00471066; /* jb: below (unsigned <) */

loc_0047105D: ;
    if (CMP_A(LO16(eax), 0x5A)) goto loc_00471066; /* ja: above (unsigned >) */

loc_00471063: ;
    eax = eax + 0x20;

loc_00471066: ;
    ecx++;
    ecx++;
    edx++;
    edx++;
    MEM32(ebp + 0x10) = MEM32(ebp + 0x10) - 1;
    if ((MEM32(ebp + 0x10) == 0)) goto loc_004710B2; /* je: equal / zero */

loc_0047106F: ;
    if (TEST_Z(LO16(ebx), LO16(ebx))) goto loc_004710B2; /* je: equal / zero */

loc_00471074: ;
    if (CMP_EQ(LO16(ebx), LO16(eax))) goto loc_0047103C; /* je: equal / zero */

loc_00471079: ;
    goto loc_004710B2;

loc_0047107B: ;
    PUSH32(esp, esi);
    esi = MEM32(ebp + 8);
    PUSH32(esp, edi);
    edi = MEM32(ebp + 0xC);

loc_00471083: ;
    eax = 0; /* xor self */
    SET_LO16(eax, MEM16(esi));
    PUSH32(esp, eax);
    PUSH32(esp, 0); sub_0047123F(); /* call 0x0047123F */

loc_0047108E: ;
    esi++;
    esi++;
    ebx = eax;
    eax = 0; /* xor self */
    SET_LO16(eax, MEM16(edi));
    PUSH32(esp, eax);
    PUSH32(esp, 0); sub_0047123F(); /* call 0x0047123F */

loc_0047109D: ;
    edi++;
    POP32(esp, ecx);
    edi++;
    MEM32(ebp + 0x10) = MEM32(ebp + 0x10) - 1;
    POP32(esp, ecx);
    if ((MEM32(ebp + 0x10) == 0)) goto loc_004710B0; /* je: equal / zero */

loc_004710A6: ;
    if (TEST_Z(LO16(ebx), LO16(ebx))) goto loc_004710B0; /* je: equal / zero */

loc_004710AB: ;
    if (CMP_EQ(LO16(ebx), LO16(eax))) goto loc_00471083; /* je: equal / zero */

loc_004710B0: ;
    POP32(esp, edi);
    POP32(esp, esi);

loc_004710B2: ;
    ecx = ZX16(LO16(eax));
    eax = ZX16(LO16(ebx));
    eax = eax - ecx;
    POP32(esp, ebx);

loc_004710BB: ;
    POP32(esp, ebp);
    esp += 4; return; /* ret */

}

/**
 * sub_004710C0
 * Original: 0x004710C0 - 0x00471172 (178 bytes, 69 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_004710C0(void)
{
    int _flags = 0; /* fallback flag var */
    int _cf = 0; /* carry flag */

loc_004710C0: ;
    PUSH32(esp, ebx);
    PUSH32(esp, edi);
    edi = 0; /* xor self */
    eax = MEM32(esp + 0x10);
    eax = eax | eax;
    if (((int32_t)eax >= 0)) goto loc_004710E0; /* jge: greater or equal (signed >=) */

loc_004710CC: ;
    edi++;
    edx = MEM32(esp + 0xC);
    eax = (uint32_t)(-(int32_t)eax);
    edx = (uint32_t)(-(int32_t)edx);
    eax = eax - 0 - _cf; /* sbb */
    MEM32(esp + 0x10) = eax;
    MEM32(esp + 0xC) = edx;

loc_004710E0: ;
    eax = MEM32(esp + 0x18);
    eax = eax | eax;
    if (((int32_t)eax >= 0)) goto loc_004710FB; /* jge: greater or equal (signed >=) */

loc_004710E8: ;
    edx = MEM32(esp + 0x14);
    eax = (uint32_t)(-(int32_t)eax);
    edx = (uint32_t)(-(int32_t)edx);
    eax = eax - 0 - _cf; /* sbb */
    MEM32(esp + 0x18) = eax;
    MEM32(esp + 0x14) = edx;

loc_004710FB: ;
    eax = eax | eax;
    if ((eax != 0)) goto loc_0047111A; /* jne: not equal / not zero */

loc_004710FF: ;
    ecx = MEM32(esp + 0x14);
    eax = MEM32(esp + 0x10);
    edx = 0; /* xor self */
    { uint64_t _dividend = ((uint64_t)edx << 32) | eax;
      eax = (uint32_t)(_dividend / (uint32_t)ecx);
      edx = (uint32_t)(_dividend % (uint32_t)ecx); }
    eax = MEM32(esp + 0xC);
    { uint64_t _dividend = ((uint64_t)edx << 32) | eax;
      eax = (uint32_t)(_dividend / (uint32_t)ecx);
      edx = (uint32_t)(_dividend % (uint32_t)ecx); }
    eax = edx;
    edx = 0; /* xor self */
    edi--;
    if (((int32_t)edi >= 0)) goto loc_00471166; /* jns: not sign (positive) */

loc_00471118: ;
    goto loc_0047116D;

loc_0047111A: ;
    ebx = eax;
    ecx = MEM32(esp + 0x14);
    edx = MEM32(esp + 0x10);
    eax = MEM32(esp + 0xC);

loc_00471128: ;
    ebx = ebx >> 1;
    /* TODO: rcr ecx, 1 */
    edx = edx >> 1;
    /* TODO: rcr eax, 1 */
    ebx = ebx | ebx;
    if ((ebx != 0)) goto loc_00471128; /* jne: not equal / not zero */

loc_00471134: ;
    { uint64_t _dividend = ((uint64_t)edx << 32) | eax;
      eax = (uint32_t)(_dividend / (uint32_t)ecx);
      edx = (uint32_t)(_dividend % (uint32_t)ecx); }
    ecx = eax;
    { uint64_t _r = (uint64_t)eax * (uint64_t)MEM32(esp + 0x18);
      eax = (uint32_t)_r; edx = (uint32_t)(_r >> 32); }
    { uint32_t _tmp = ecx;
    ecx = eax;
    eax = _tmp; }
    { uint64_t _r = (uint64_t)eax * (uint64_t)MEM32(esp + 0x14);
      eax = (uint32_t)_r; edx = (uint32_t)(_r >> 32); }
    edx = edx + ecx;
    if ((edx < (uint32_t)ecx)) goto loc_00471153; /* jb: below (unsigned <) */

loc_00471145: ;
    if (CMP_A(edx, MEM32(esp + 0x10))) goto loc_00471153; /* ja: above (unsigned >) */

loc_0047114B: ;
    if (CMP_B(edx, MEM32(esp + 0x10))) goto loc_0047115B; /* jb: below (unsigned <) */

loc_0047114D: ;
    if (CMP_BE(eax, MEM32(esp + 0xC))) goto loc_0047115B; /* jbe: below or equal (unsigned <=) */

loc_00471153: ;
    eax = eax - MEM32(esp + 0x14);
    edx = edx - MEM32(esp + 0x18) - _cf; /* sbb */

loc_0047115B: ;
    eax = eax - MEM32(esp + 0xC);
    edx = edx - MEM32(esp + 0x10) - _cf; /* sbb */
    edi--;
    if (((int32_t)edi >= 0)) goto loc_0047116D; /* jns: not sign (positive) */

loc_00471166: ;
    edx = (uint32_t)(-(int32_t)edx);
    eax = (uint32_t)(-(int32_t)eax);
    edx = edx - 0 - _cf; /* sbb */

loc_0047116D: ;
    POP32(esp, edi);
    POP32(esp, ebx);
    esp += 20; return; /* ret 16 */

}

/**
 * sub_00471172
 * Original: 0x00471172 - 0x004711DF (109 bytes, 50 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00471172(void)
{
    uint32_t ebp;
    int _flags = 0; /* fallback flag var */

loc_00471172: ;
    PUSH32(esp, ebp);
    ebp = esp;
    esp = esp - 0x20;
    PUSH32(esp, ebx);
    PUSH32(esp, esi);
    esi = MEM32(ebp + 0xC);
    PUSH32(esp, edi);
    PUSH32(esp, 0); sub_00479B32(); /* call 0x00479B32 */

loc_00471183: ;
    PUSH32(esp, 8);
    POP32(esp, ecx);
    MEM32(ebp + 0xC) = eax;
    eax = 0; /* xor self */
    edi = ebp + -32;
    PUSH32(esp, 7);
    { uint32_t _i; for (_i = 0; _i < ecx; _i++) MEM32(edi + _i*4) = eax; }
    edi += ecx * 4; ecx = 0; /* rep stosd */
    POP32(esp, edi);

loc_00471193: ;
    SET_LO8(edx, MEM8(esi));
    ecx = ZX8(LO8(edx));
    eax = ecx;
    ecx = ecx & edi;
    SET_LO8(ebx, 1);
    SET_LO8(ebx, LO8(ebx) << LO8(ecx));
    eax = eax >> 3;
    eax = ebp + eax + -32;
    MEM8(eax) = MEM8(eax) | LO8(ebx);
    esi++;
    if (TEST_NZ(LO8(edx), LO8(edx))) goto loc_00471193; /* jne: not equal / not zero */

loc_004711AE: ;
    edx = MEM32(ebp + 8);
    if (TEST_NZ(edx, edx)) goto loc_004711C2; /* jne: not equal / not zero */

loc_004711B5: ;
    eax = MEM32(ebp + 0xC);
    edx = MEM32(eax + 0x18);
    goto loc_004711C2;

loc_004711BD: ;
    if (TEST_Z(LO8(eax), LO8(eax))) goto loc_004711DB; /* je: equal / zero */

loc_004711C1: ;
    edx++;

loc_004711C2: ;
    SET_LO8(eax, MEM8(edx));
    esi = ZX8(LO8(eax));
    ebx = 0; /* xor self */
    ecx = esi;
    ecx = ecx & edi;
    ebx++;
    ebx = ebx << LO8(ecx);
    esi = esi >> 3;
    SET_LO8(ecx, MEM8(ebp + esi + -32));
    if (TEST_NZ(LO8(ecx), LO8(ebx))) goto loc_004711BD; /* jne: not equal / not zero */

loc_004711DB: ;
    ebx = edx;
    g_seh_ebp = ebp; sub_004711F7(); return; /* tail jmp 0x004711F7 */

}

/**
 * sub_00471220
 * Original: 0x00471220 - 0x0047123A (26 bytes, 12 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00471220(void)
{
    int _flags = 0; /* fallback flag var */

loc_00471220: ;
    if (CMP_AE(LO8(ecx), 0x40)) { sub_0047123A(); return; } /* jae: above or equal (unsigned >=) */

loc_00471225: ;
    if (CMP_AE(LO8(ecx), 0x20)) goto loc_00471230; /* jae: above or equal (unsigned >=) */

loc_0047122A: ;
    edx = (edx << LO8(ecx)) | (eax >> (32 - LO8(ecx))); /* shld */
    eax = eax << LO8(ecx);
    esp += 4; return; /* ret */

loc_00471230: ;
    edx = eax;
    eax = 0; /* xor self */
    SET_LO8(ecx, LO8(ecx) & 0x1F);
    edx = edx << LO8(ecx);
    esp += 4; return; /* ret */

}

/**
 * sub_0047123F
 * Original: 0x0047123F - 0x00471286 (71 bytes, 28 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0047123F(void)
{
    int _flags = 0; /* fallback flag var */

loc_0047123F: ;
    PUSH32(esp, esi);
    esi = MEM32(esp + 8);
    eax = 0xFFFF;
    if (CMP_EQ(LO16(esi), LO16(eax))) goto loc_00471284; /* je: equal / zero */

loc_0047124E: ;
    if (CMP_NE(MEM32(0x75F9C4), 0)) goto loc_00471270; /* jne: not equal / not zero */

loc_00471257: ;
    if (CMP_B(LO16(esi), 0x41)) goto loc_0047126B; /* jb: below (unsigned <) */

loc_0047125D: ;
    if (CMP_A(LO16(esi), 0x5A)) goto loc_0047126B; /* ja: above (unsigned >) */

loc_00471263: ;
    eax = ZX16(LO16(esi));
    eax = eax + 0x20;
    POP32(esp, esi);
    esp += 4; return; /* ret */

loc_0047126B: ;
    eax = ZX16(LO16(esi));
    POP32(esp, esi);
    esp += 4; return; /* ret */

loc_00471270: ;
    if (CMP_AE(LO16(esi), 0x100)) goto loc_00471281; /* jae: above or equal (unsigned >=) */

loc_00471277: ;
    PUSH32(esp, 1);
    PUSH32(esp, esi);
    PUSH32(esp, 0); sub_00479D42(); /* call 0x00479D42 */

loc_0047127F: ;
    POP32(esp, ecx);
    POP32(esp, ecx);

loc_00471281: ;
    SET_LO16(eax, LO16(esi));

loc_00471284: ;
    POP32(esp, esi);
    esp += 4; return; /* ret */

}

/**
 * sub_00471288
 * Original: 0x00471288 - 0x004712E7 (95 bytes, 30 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00471288(void)
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

loc_00471288: ;
    PUSH32(esp, ebp);
    ebp = esp;
    esp = esp - 0x20;
    esp = esp & 0xFFFFFFF0u;
    /* fld st(0) */
    MEMF(esp + 0x18) = (float)fp_top(); fp_pop(); /* fst */
    MEM32(esp + 0x10) = (int32_t)fp_top(); /* fistp */
    fp_push((double)SMEM32(esp + 0x10)); /* fild */
    edx = MEM32(esp + 0x18);
    eax = MEM32(esp + 0x10);
    if (TEST_Z(eax, eax)) { sub_004712E7(); return; } /* je: equal / zero */

loc_004712AB: ;
    fp_st1() -= fp_top(); fp_pop(); /* fsubp */
    if (((int32_t)(edx & edx) >= 0)) goto loc_004712CF; /* jns: not sign (positive) */

loc_004712B1: ;
    MEMF(esp) = (float)fp_top(); fp_popp(); /* fstp */
    ecx = MEM32(esp);
    ecx = ecx ^ 0x80000000u;
    ecx = ecx + 0x7FFFFFFF;
    eax = eax + 0 + _cf; /* adc */
    edx = MEM32(esp + 0x14);
    edx = edx + 0 + _cf; /* adc */
    g_seh_ebp = ebp; sub_004712FB(); return; /* tail jmp 0x004712FB */

loc_004712CF: ;
    MEMF(esp) = (float)fp_top(); fp_popp(); /* fstp */
    ecx = MEM32(esp);
    ecx = ecx + 0x7FFFFFFF;
    eax = eax - 0 - _cf; /* sbb */
    edx = MEM32(esp + 0x14);
    edx = edx - 0 - _cf; /* sbb */
    g_seh_ebp = ebp; sub_004712FB(); return; /* tail jmp 0x004712FB */

    #undef fp_push
    #undef fp_pop
    #undef fp_popp
    #undef fp_top
    #undef fp_st1
}

/**
 * sub_004712FD
 * Original: 0x004712FD - 0x00471383 (134 bytes, 56 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_004712FD(void)
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

loc_004712FD: ;
    PUSH32(esp, ebp);
    ebp = esp;
    PUSH32(esp, ecx);
    PUSH32(esp, ecx);
    PUSH32(esp, ebx);
    PUSH32(esp, esi);
    esi = 0xFFFF;
    PUSH32(esp, esi);
    PUSH32(esp, MEM32(0x655670));
    PUSH32(esp, 0); sub_00478419(); /* call 0x00478419 */

loc_00471315: ;
    fp_push(MEMD(ebp + 8)); /* fld double */
    POP32(esp, ecx);
    POP32(esp, ecx);
    ebx = eax;
    eax = MEM32(ebp + 0xE);
    PUSH32(esp, ecx);
    SET_LO16(eax, LO16(eax) & 0x7FF0);
    (void)0; /* cmp LO16(eax), 0x7FF0 - flags set for next jcc */
    PUSH32(esp, ecx);
    MEMD(esp) = fp_top(); fp_popp(); /* fstp */
    if (CMP_NE(LO16(eax), 0x7FF0)) { sub_00471383(); return; } /* jne: not equal / not zero */

loc_0047132E: ;
    PUSH32(esp, 0); sub_00477C7C(); /* call 0x00477C7C */

loc_00471333: ;
    (void)0; /* test eax, eax - flags set for next jcc */
    POP32(esp, ecx);
    POP32(esp, ecx);
    if (CMP_LE(eax & eax, 0)) goto loc_00471366; /* jle: less or equal (signed <=) */

loc_00471339: ;
    if (CMP_LE(eax, 2)) goto loc_00471358; /* jle: less or equal (signed <=) */

loc_0047133E: ;
    if (CMP_NE(eax, 3)) goto loc_00471366; /* jne: not equal / not zero */

loc_00471343: ;
    fp_push(MEMD(ebp + 8)); /* fld double */
    PUSH32(esp, ebx);
    PUSH32(esp, ecx);
    PUSH32(esp, ecx);
    MEMD(esp) = fp_top(); fp_popp(); /* fstp */
    PUSH32(esp, 0xC);
    PUSH32(esp, 0); sub_0047830F(); /* call 0x0047830F */

loc_00471353: ;
    esp = esp + 0x10;
    g_seh_ebp = ebp; sub_004713CC(); return; /* tail jmp 0x004713CC */

loc_00471358: ;
    PUSH32(esp, esi);
    PUSH32(esp, ebx);
    PUSH32(esp, 0); sub_00478419(); /* call 0x00478419 */

loc_0047135F: ;
    fp_push(MEMD(ebp + 8)); /* fld double */
    POP32(esp, ecx);
    POP32(esp, ecx);
    g_seh_ebp = ebp; sub_004713CC(); return; /* tail jmp 0x004713CC */

loc_00471366: ;
    fp_push(MEMD(ebp + 8)); /* fld double */
    PUSH32(esp, ebx);
    fp_st1() += fp_top(); fp_pop(); /* fadd */
    esp = esp - 0x10;
    MEMD(esp + 8) = fp_top(); fp_popp(); /* fstp */
    fp_push(MEMD(ebp + 8)); /* fld double */
    MEMD(esp) = fp_top(); fp_popp(); /* fstp */
    PUSH32(esp, 0xC);
    PUSH32(esp, 8);
    g_seh_ebp = ebp; sub_004713C4(); return; /* tail jmp 0x004713C4 */

    #undef fp_push
    #undef fp_pop
    #undef fp_popp
    #undef fp_top
    #undef fp_st1
}

/**
 * sub_004713D4
 * Original: 0x004713D4 - 0x004713D6 (2 bytes, 1 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_004713D4(void)
{
    uint32_t ebp;
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_004713D4: ;
    g_seh_ebp = ebp; sub_004713E0(); return; /* tail jmp 0x004713E0 */

}

/**
 * sub_004713EA
 * Original: 0x004713EA - 0x0047148F (165 bytes, 60 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_004713EA(void)
{
    uint32_t ebp;
    int _flags = 0; /* fallback flag var */

loc_004713EA: ;
    PUSH32(esp, ebp);
    ebp = esp;
    esp = esp - 0xC;
    PUSH32(esp, ebx);
    PUSH32(esp, esi);
    PUSH32(esp, edi);
    edi = MEM32(ebp + 8);
    esi = MEM32(edi + 0x10);
    ebx = 0; /* xor self */
    (void)0; /* cmp MEM32(edi + 4), ebx - flags set for next jcc */
    MEM32(ebp + -12) = esi;
    if (CMP_GE(MEM32(edi + 4), ebx)) goto loc_00471406; /* jge: greater or equal (signed >=) */

loc_00471403: ;
    MEM32(edi + 4) = ebx;

loc_00471406: ;
    PUSH32(esp, 1);
    PUSH32(esp, ebx);
    PUSH32(esp, esi);
    PUSH32(esp, 0); sub_00479400(); /* call 0x00479400 */

loc_0047140F: ;
    esp = esp + 0xC;
    (void)0; /* cmp eax, ebx - flags set for next jcc */
    MEM32(ebp + -4) = eax;
    if (CMP_L(eax, ebx)) goto loc_00471487; /* jl: less (signed <) */

loc_00471419: ;
    ecx = MEM32(edi + 0xC);
    if (TEST_NZ(LO16(ecx), 0x108)) goto loc_0047142B; /* jne: not equal / not zero */

loc_00471423: ;
    eax = eax - MEM32(edi + 4);
    g_seh_ebp = ebp; sub_00471547(); return; /* tail jmp 0x00471547 */

loc_0047142B: ;
    eax = MEM32(edi);
    edx = MEM32(edi + 8);
    ebx = eax;
    ebx = ebx - edx;
    (void)0; /* test LO8(ecx), 3 - flags set for next jcc */
    MEM32(ebp + -8) = ebx;
    if (TEST_Z(LO8(ecx), 3)) goto loc_00471478; /* je: equal / zero */

loc_0047143C: ;
    ebx = esi;
    ecx = esi;
    ebx = (uint32_t)((int32_t)ebx >> 5);
    ebx = MEM32(ebx * 4 + 0x881360);
    ecx = ecx & 0x1F;
    ecx = ecx + ecx * 4;
    if (TEST_Z(MEM8(ebx + ecx * 8 + 4), 0x80)) goto loc_0047146A; /* je: equal / zero */

loc_00471457: ;
    ecx = edx;
    if (CMP_AE(ecx, eax)) goto loc_0047146A; /* jae: above or equal (unsigned >=) */

loc_0047145D: ;
    if (CMP_NE(MEM8(ecx), 0xA)) goto loc_00471465; /* jne: not equal / not zero */

loc_00471462: ;
    MEM32(ebp + -8) = MEM32(ebp + -8) + 1;

loc_00471465: ;
    ecx++;
    if (CMP_B(ecx, MEM32(edi))) goto loc_0047145D; /* jb: below (unsigned <) */

loc_0047146A: ;
    if (CMP_NE(MEM32(ebp + -4), 0)) { sub_0047148F(); return; } /* jne: not equal / not zero */

loc_00471470: ;
    eax = MEM32(ebp + -8);
    g_seh_ebp = ebp; sub_00471547(); return; /* tail jmp 0x00471547 */

loc_00471478: ;
    if (TEST_S(LO8(ecx), LO8(ecx))) goto loc_0047146A; /* js: sign (negative) */

loc_0047147C: ;
    PUSH32(esp, 0); sub_00471B14(); /* call 0x00471B14 */

loc_00471481: ;
    MEM32(eax) = 0x16;

loc_00471487: ;
    eax = eax | 0xFFFFFFFFu;
    g_seh_ebp = ebp; sub_00471547(); return; /* tail jmp 0x00471547 */

}

/**
 * sub_0047154C
 * Original: 0x0047154C - 0x00471560 (20 bytes, 8 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0047154C(void)
{
    uint32_t ebp;
    int _flags = 0; /* fallback flag var */
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_0047154C: ;
    eax = MEM32(0x881478);
    (void)0; /* test eax, eax - flags set for next jcc */
    PUSH32(esp, esi);
    PUSH32(esp, 0x14);
    POP32(esp, esi);
    if (TEST_NZ(eax, eax)) { sub_00471560(); return; } /* jne: not equal / not zero */

loc_00471559: ;
    eax = 0x200;
    g_seh_ebp = ebp; sub_00471566(); return; /* tail jmp 0x00471566 */

}

/**
 * sub_00471609
 * Original: 0x00471609 - 0x0047162D (36 bytes, 13 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00471609(void)
{
    int _flags = 0; /* fallback flag var */

loc_00471609: ;
    eax = MEM32(esp + 4);
    ecx = 0x655678;
    if (CMP_B(eax, ecx)) { sub_0047162D(); return; } /* jb: below (unsigned <) */

loc_00471616: ;
    if (CMP_A(eax, 0x6558D8)) { sub_0047162D(); return; } /* ja: above (unsigned >) */

loc_0047161D: ;
    eax = eax - ecx;
    eax = (uint32_t)((int32_t)eax >> 5);
    eax = eax + 0x10;
    PUSH32(esp, eax);
    PUSH32(esp, 0); sub_00472B24(); /* call 0x00472B24 */

loc_0047162B: ;
    POP32(esp, ecx);
    esp += 4; return; /* ret */

}

/**
 * sub_00471638
 * Original: 0x00471638 - 0x0047164C (20 bytes, 8 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00471638(void)
{
    int _flags = 0; /* fallback flag var */

loc_00471638: ;
    eax = MEM32(esp + 4);
    if (CMP_GE(eax, 0x14)) { sub_0047164C(); return; } /* jge: greater or equal (signed >=) */

loc_00471641: ;
    eax = eax + 0x10;
    PUSH32(esp, eax);
    PUSH32(esp, 0); sub_00472B24(); /* call 0x00472B24 */

loc_0047164A: ;
    POP32(esp, ecx);
    esp += 4; return; /* ret */

}

/**
 * sub_0047165B
 * Original: 0x0047165B - 0x0047167F (36 bytes, 13 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0047165B(void)
{
    int _flags = 0; /* fallback flag var */

loc_0047165B: ;
    eax = MEM32(esp + 4);
    ecx = 0x655678;
    if (CMP_B(eax, ecx)) { sub_0047167F(); return; } /* jb: below (unsigned <) */

loc_00471668: ;
    if (CMP_A(eax, 0x6558D8)) { sub_0047167F(); return; } /* ja: above (unsigned >) */

loc_0047166F: ;
    eax = eax - ecx;
    eax = (uint32_t)((int32_t)eax >> 5);
    eax = eax + 0x10;
    PUSH32(esp, eax);
    PUSH32(esp, 0); sub_00472A72(); /* call 0x00472A72 */

loc_0047167D: ;
    POP32(esp, ecx);
    esp += 4; return; /* ret */

}

/**
 * sub_0047168A
 * Original: 0x0047168A - 0x0047169E (20 bytes, 8 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0047168A(void)
{
    int _flags = 0; /* fallback flag var */

loc_0047168A: ;
    eax = MEM32(esp + 4);
    if (CMP_GE(eax, 0x14)) { sub_0047169E(); return; } /* jge: greater or equal (signed >=) */

loc_00471693: ;
    eax = eax + 0x10;
    PUSH32(esp, eax);
    PUSH32(esp, 0); sub_00472A72(); /* call 0x00472A72 */

loc_0047169C: ;
    POP32(esp, ecx);
    esp += 4; return; /* ret */

}
