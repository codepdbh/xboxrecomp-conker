/**
 * Burnout 3 - Recompiled code chunk 66
 * Functions: 250 (0x004CE508 - 0x00524712)
 */

#define RECOMP_GENERATED_CODE
#include "recomp_funcs.h"
#include <math.h>

/**
 * sub_004CE508
 * Original: 0x004CE508 - 0x004CE556 (78 bytes, 30 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_004CE508(void)
{
    uint32_t ebp;
    int _flags = 0; /* fallback flag var */

loc_004CE508: ;
    PUSH32(esp, ebp);
    ebp = esp;
    PUSH32(esp, ecx);
    PUSH32(esp, ecx);
    MEM32(ebp + -4) = MEM32(ebp + -4) & 0;
    PUSH32(esp, esi);
    esi = ecx;
    ecx = ebp + -8;
    PUSH32(esp, 0); sub_004C36B0(); /* call 0x004C36B0 */

loc_004CE51C: ;
    PUSH32(esp, 1);
    ecx = esi;
    PUSH32(esp, 0); sub_004CE3BE(); /* call 0x004CE3BE */

loc_004CE525: ;
    eax = MEM32(esi + 0x18);
    if (TEST_Z(eax, eax)) goto loc_004CE536; /* je: equal / zero */

loc_004CE52C: ;
    PUSH32(esp, eax);
    PUSH32(esp, 0); sub_004C6AEF(); /* call 0x004C6AEF */

loc_004CE532: ;
    MEM32(esi + 0x18) = MEM32(esi + 0x18) & 0;

loc_004CE536: ;
    eax = MEM32(esi + 0x20);
    if (TEST_Z(eax, eax)) goto loc_004CE547; /* je: equal / zero */

loc_004CE53D: ;
    PUSH32(esp, eax);
    PUSH32(esp, 0); sub_004C6AEF(); /* call 0x004C6AEF */

loc_004CE543: ;
    MEM32(esi + 0x20) = MEM32(esi + 0x20) & 0;

loc_004CE547: ;
    MEM32(esi + 0x1C) = MEM32(esi + 0x1C) & 0;
    ecx = ebp + -8;
    PUSH32(esp, 0); sub_004C36D2(); /* call 0x004C36D2 */

loc_004CE553: ;
    POP32(esp, esi);
    esp = ebp;
    POP32(esp, ebp); /* leave */
    esp += 4; return; /* ret */

}

/**
 * sub_004CE556
 * Original: 0x004CE556 - 0x004CE5A4 (78 bytes, 35 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_004CE556(void)
{
    int _flags = 0; /* fallback flag var */

loc_004CE556: ;
    PUSH32(esp, ebx);
    PUSH32(esp, esi);
    esi = ecx;
    SET_LO8(ecx, MEM8(esi + 0x24));
    ebx = 0; /* xor self */
    if (CMP_EQ(LO8(ecx), LO8(ebx))) goto loc_004CE5A1; /* je: equal / zero */

loc_004CE563: ;
    SET_LO8(eax, MEM8(esi + 0x25));
    PUSH32(esp, edi);
    edi = MEM32(esi + 0x18);
    edx = ZX8(LO8(eax));
    edx = MEM32(edi + edx * 8 + 4);
    edx = edx & 0xFFFF;
    MEM32(esi + 4) = MEM32(esi + 4) + edx;
    (void)0; /* test MEM8(esi + 0xC), 1 - flags set for next jcc */
    POP32(esp, edi);
    PUSH32(esp, ebx);
    if (TEST_Z(MEM8(esi + 0xC), 1)) goto loc_004CE589; /* je: equal / zero */

loc_004CE582: ;
    if (CMP_BE(LO8(ecx), 2)) { sub_004CE5A4(); return; } /* jbe: below or equal (unsigned <=) */

loc_004CE587: ;
    SET_LO8(ecx, LO8(ecx) - 1);

loc_004CE589: ;
    SET_LO8(eax, LO8(eax) + 1);
    PUSH32(esp, ebx);
    PUSH32(esp, ecx);
    ecx = esi;
    PUSH32(esp, eax);
    PUSH32(esp, 0); sub_004CE156(); /* call 0x004CE156 */

loc_004CE595: ;
    eax = MEM32(esi + 0x10);
    if (CMP_EQ(eax, ebx)) goto loc_004CE5A1; /* je: equal / zero */

loc_004CE59C: ;
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, MEM32(esi + 0x14));
    PUSH32(esp, 0); RECOMP_ICALL_SAFE(eax, _icall_esp); /* indirect call */
    }

loc_004CE5A1: ;
    POP32(esp, esi);
    POP32(esp, ebx);
    esp += 4; return; /* ret */

}

/**
 * sub_004CE5AD
 * Original: 0x004CE5AD - 0x004CE677 (202 bytes, 67 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_004CE5AD(void)
{
    uint32_t ebp;
    int _flags = 0; /* fallback flag var */

loc_004CE5AD: ;
    PUSH32(esp, ebp);
    ebp = esp;
    esp = esp - 0x14;
    PUSH32(esp, esi);
    esi = ecx;
    ecx = MEM32(-20971216);
    ecx = ecx & 0x51;
    MEM32(ebp + -16) = ecx;
    if ((ecx == 0)) { sub_004CE677(); return; } /* je: equal / zero */

loc_004CE5C8: ;
    MEM32(ebp + -8) = MEM32(ebp + -8) & 0;
    PUSH32(esp, ebx);
    MEM32(ebp + -12) = 0x4E1614;
    MEM32(ebp + -12) = MEM32(ebp + -12) - esi;
    PUSH32(esp, edi);
    MEM32(ebp + -4) = 0x80000000u;
    edi = esi;
    ebx = esi + 0x38;

loc_004CE5E4: ;
    eax = MEM32(ebp + -12);
    if (TEST_Z(MEM32(eax + edi), ecx)) goto loc_004CE63F; /* je: equal / zero */

loc_004CE5EC: ;
    eax = MEM32(edi);
    if (TEST_Z(eax, eax)) goto loc_004CE63F; /* je: equal / zero */

loc_004CE5F2: ;
    edx = MEM32(eax);
    edx = MEM32(edx * 4 + 0x4E1608);
    edx = ZX16(MEM16(edx + -20971258));
    (void)0; /* test LO8(edx), 8 - flags set for next jcc */
    MEM32(ebp + -20) = edx;
    if (TEST_Z(LO8(edx), 8)) goto loc_004CE629; /* je: equal / zero */

loc_004CE60A: ;
    ecx = MEM32(ebp + -8);
    edx = 0; /* xor self */
    edx++;
    edx = edx << LO8(ecx);
    MEM32(ebp + -4) = MEM32(ebp + -4) | edx;
    if (TEST_Z(MEM8(esi + 8), 1)) goto loc_004CE624; /* je: equal / zero */

loc_004CE61B: ;
    ecx = eax;
    PUSH32(esp, 0); sub_004CE556(); /* call 0x004CE556 */

loc_004CE622: ;
    goto loc_004CE626;

loc_004CE624: ;
    MEM8(ebx) = MEM8(ebx) + 1;

loc_004CE626: ;
    ecx = MEM32(ebp + -16);

loc_004CE629: ;
    eax = MEM32(edi);
    eax = MEM32(eax);
    eax = MEM32(eax * 4 + 0x4E1608);
    SET_LO16(edx, MEM16(ebp + -20));
    MEM16(eax + -20971258) = LO16(edx);

loc_004CE63F: ;
    MEM32(ebp + -8) = MEM32(ebp + -8) + 1;
    ebx++;
    ebx++;
    edi = edi + 4;
    if (CMP_B(MEM32(ebp + -8), 2)) goto loc_004CE5E4; /* jb: below (unsigned <) */

loc_004CE64D: ;
    (void)0; /* test MEM8(esi + 8), 1 - flags set for next jcc */
    POP32(esp, edi);
    POP32(esp, ebx);
    if (TEST_NZ(MEM8(esi + 8), 1)) goto loc_004CE66C; /* jne: not equal / not zero */

loc_004CE655: ;
    if (TEST_Z(MEM8(ebp + -4), 3)) goto loc_004CE66C; /* je: equal / zero */

loc_004CE65B: ;
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, 0);
    PUSH32(esp, 0);
    esi = esi + 0x1C;
    PUSH32(esp, esi);
    PUSH32(esp, 0); RECOMP_ICALL_SAFE(MEM32(0x5610E0), _icall_esp); /* indirect call */
    }

loc_004CE669: ;
    ecx = MEM32(ebp + -16);

loc_004CE66C: ;
    ecx = ecx & 0xFFFFFFFEu;
    MEM32(-20971216) = ecx;
    g_seh_ebp = ebp; sub_004CE67B(); return; /* tail jmp 0x004CE67B */

}

/**
 * sub_004CE681
 * Original: 0x004CE681 - 0x004CE6DA (89 bytes, 39 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_004CE681(void)
{
    uint32_t ebp;
    int _flags = 0; /* fallback flag var */
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_004CE681: ;
    PUSH32(esp, ecx);
    PUSH32(esp, ebx);
    PUSH32(esp, ebp);
    PUSH32(esp, esi);
    PUSH32(esp, edi);
    ebp = ecx;

loc_004CE688: ;
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, ebp);
    PUSH32(esp, 0x4CE245);
    PUSH32(esp, 0x4E1C80);
    PUSH32(esp, 0); RECOMP_ICALL_SAFE(MEM32(0x56120C), _icall_esp); /* indirect call */
    }

loc_004CE699: ;
    ebx = 0; /* xor self */
    edi = ebp;
    esi = ebp + 0x39;
    MEM32(esp + 0x10) = 2;

loc_004CE6A8: ;
    if (CMP_EQ(MEM8(esi), 0)) goto loc_004CE6C5; /* je: equal / zero */

loc_004CE6AD: ;
    ebx = 0; /* xor self */
    ebx++;
    if (CMP_EQ(MEM32(edi), 0)) goto loc_004CE6C2; /* je: equal / zero */

loc_004CE6B5: ;
    ecx = MEM32(edi);
    PUSH32(esp, 0); sub_004CE556(); /* call 0x004CE556 */

loc_004CE6BC: ;
    MEM8(esi) = MEM8(esi) - 1;
    if ((MEM8(esi) != 0)) goto loc_004CE6B5; /* jne: not equal / not zero */

loc_004CE6C0: ;
    goto loc_004CE6C5;

loc_004CE6C2: ;
    MEM8(esi) = 0;

loc_004CE6C5: ;
    edi = edi + 4;
    esi++;
    esi++;
    MEM32(esp + 0x10) = MEM32(esp + 0x10) - 1;
    if ((MEM32(esp + 0x10) != 0)) goto loc_004CE6A8; /* jne: not equal / not zero */

loc_004CE6D0: ;
    if (TEST_NZ(ebx, ebx)) goto loc_004CE688; /* jne: not equal / not zero */

loc_004CE6D4: ;
    POP32(esp, edi);
    POP32(esp, esi);
    POP32(esp, ebp);
    POP32(esp, ebx);
    POP32(esp, ecx);
    esp += 4; return; /* ret */

}

/**
 * sub_004CE6F7
 * Original: 0x004CE6F7 - 0x004CE736 (63 bytes, 26 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_004CE6F7(void)
{
    uint32_t ebp;
    int _flags = 0; /* fallback flag var */

loc_004CE6F7: ;
    PUSH32(esp, ebp);
    ebp = esp;
    PUSH32(esp, ecx);
    PUSH32(esp, ecx);
    MEM32(ebp + -4) = MEM32(ebp + -4) & 0;
    PUSH32(esp, esi);
    esi = ecx;
    PUSH32(esp, edi);
    ecx = ebp + -8;
    PUSH32(esp, 0); sub_004C36B0(); /* call 0x004C36B0 */

loc_004CE70C: ;
    eax = MEM32(ebp + 8);
    esi = esi + eax * 4;
    edi = MEM32(esi);
    if (TEST_Z(edi, edi)) goto loc_004CE728; /* je: equal / zero */

loc_004CE718: ;
    ecx = edi;
    PUSH32(esp, 0); sub_004CE508(); /* call 0x004CE508 */

loc_004CE71F: ;
    PUSH32(esp, edi);
    PUSH32(esp, 0); sub_004C6B6F(); /* call 0x004C6B6F */

loc_004CE725: ;
    MEM32(esi) = MEM32(esi) & 0;

loc_004CE728: ;
    ecx = ebp + -8;
    PUSH32(esp, 0); sub_004C36D2(); /* call 0x004C36D2 */

loc_004CE730: ;
    POP32(esp, edi);
    POP32(esp, esi);
    esp = ebp;
    POP32(esp, ebp); /* leave */
    esp += 8; return; /* ret 4 */

}

/**
 * sub_004CE736
 * Original: 0x004CE736 - 0x004CE7A5 (111 bytes, 43 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_004CE736(void)
{
    uint32_t ebp;
    int _flags = 0; /* fallback flag var */

loc_004CE736: ;
    PUSH32(esp, ebp);
    ebp = esp;
    PUSH32(esp, ecx);
    PUSH32(esp, ecx);
    PUSH32(esp, ebx);
    PUSH32(esp, edi);
    edi = ecx;
    ebx = 0; /* xor self */
    ecx = ebp + -8;
    MEM32(ebp + -4) = ebx;
    PUSH32(esp, 0); sub_004C36B0(); /* call 0x004C36B0 */

loc_004CE74C: ;
    if (CMP_EQ(MEM32(0x4E1C80), ebx)) goto loc_004CE765; /* je: equal / zero */

loc_004CE754: ;
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, 0x4E1C80);
    PUSH32(esp, 0); RECOMP_ICALL_SAFE(MEM32(0x561170), _icall_esp); /* indirect call */
    }

loc_004CE75F: ;
    MEM32(0x4E1C80) = ebx;

loc_004CE765: ;
    PUSH32(esp, esi);
    esi = edi + 0x1C;
    if (CMP_NE(MEM16(esi), 0x13)) goto loc_004CE779; /* jne: not equal / not zero */

loc_004CE76F: ;
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, esi);
    PUSH32(esp, 0); RECOMP_ICALL_SAFE(MEM32(0x5611C8), _icall_esp); /* indirect call */
    }

loc_004CE776: ;
    MEM16(esi) = ~MEM16(esi);

loc_004CE779: ;
    esi = edi + 0xC;
    if (CMP_EQ(MEM32(esi), ebx)) goto loc_004CE78A; /* je: equal / zero */

loc_004CE780: ;
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, ebx);
    PUSH32(esp, esi);
    PUSH32(esp, 0); RECOMP_ICALL_SAFE(MEM32(0x56112C), _icall_esp); /* indirect call */
    }

loc_004CE788: ;
    MEM32(esi) = ebx;

loc_004CE78A: ;
    POP32(esp, esi);

loc_004CE78B: ;
    PUSH32(esp, ebx);
    ecx = edi;
    PUSH32(esp, 0); sub_004CE6F7(); /* call 0x004CE6F7 */

loc_004CE793: ;
    ebx++;
    if (CMP_B(ebx, 2)) goto loc_004CE78B; /* jb: below (unsigned <) */

loc_004CE799: ;
    ecx = ebp + -8;
    PUSH32(esp, 0); sub_004C36D2(); /* call 0x004C36D2 */

loc_004CE7A1: ;
    POP32(esp, edi);
    POP32(esp, ebx);
    esp = ebp;
    POP32(esp, ebp); /* leave */
    esp += 4; return; /* ret */

}

/**
 * sub_004CE7C1
 * Original: 0x004CE7C1 - 0x004CE7E1 (32 bytes, 12 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_004CE7C1(void)
{
    uint32_t ebp;
    int _flags = 0; /* fallback flag var */

loc_004CE7C1: ;
    PUSH32(esp, ebp);
    ebp = esp;
    eax = MEM32(ebp + 8);
    PUSH32(esp, ebx);
    PUSH32(esp, edi);
    edi = ecx;
    MEM32(edi + 8) = eax;
    PUSH32(esp, 0); sub_004CE08E(); /* call 0x004CE08E */

loc_004CE7D3: ;
    if (TEST_NZ(eax, eax)) { sub_004CE7E1(); return; } /* jne: not equal / not zero */

loc_004CE7D7: ;
    ebx = 0x88780078u;
    g_seh_ebp = ebp; sub_004CE898(); return; /* tail jmp 0x004CE898 */

}

/**
 * sub_004CE8A0
 * Original: 0x004CE8A0 - 0x004CE8A6 (6 bytes, 2 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_004CE8A0(void)
{

loc_004CE8A0: ;
    eax = 0xF458;
    esp += 4; return; /* ret */

}

/**
 * sub_004CE8A6
 * Original: 0x004CE8A6 - 0x004CE92E (136 bytes, 45 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_004CE8A6(void)
{
    uint32_t ebp;
    int _flags = 0; /* fallback flag var */

loc_004CE8A6: ;
    PUSH32(esp, ebp);
    ebp = esp;
    eax = MEM32(ebp + 8);
    ecx = 0; /* xor self */
    eax = eax - ecx;
    if ((eax == 0)) { sub_004CE92E(); return; } /* je: equal / zero */

loc_004CE8B2: ;
    eax--;
    if ((eax == 0)) goto loc_004CE91A; /* je: equal / zero */

loc_004CE8B5: ;
    eax--;
    if ((eax == 0)) goto loc_004CE906; /* je: equal / zero */

loc_004CE8B8: ;
    eax--;
    if ((eax == 0)) goto loc_004CE8F2; /* je: equal / zero */

loc_004CE8BB: ;
    eax--;
    if ((eax == 0)) goto loc_004CE8DE; /* je: equal / zero */

loc_004CE8BE: ;
    eax--;
    eax = MEM32(ebp + 0xC);
    if ((eax == 0)) goto loc_004CE8CD; /* je: equal / zero */

loc_004CE8C4: ;
    MEM32(eax) = ecx;
    eax = MEM32(ebp + 0x10);
    MEM32(eax) = ecx;
    g_seh_ebp = ebp; sub_004CE940(); return; /* tail jmp 0x004CE940 */

loc_004CE8CD: ;
    MEM32(eax) = 0x88A078;
    eax = MEM32(ebp + 0x10);
    MEM32(eax) = 0xC9;
    g_seh_ebp = ebp; sub_004CE940(); return; /* tail jmp 0x004CE940 */

loc_004CE8DE: ;
    eax = MEM32(ebp + 0xC);
    MEM32(eax) = 0x889D88;
    eax = MEM32(ebp + 0x10);
    MEM32(eax) = 0xBC;
    g_seh_ebp = ebp; sub_004CE940(); return; /* tail jmp 0x004CE940 */

loc_004CE8F2: ;
    eax = MEM32(ebp + 0xC);
    MEM32(eax) = 0x888238;
    eax = MEM32(ebp + 0x10);
    MEM32(eax) = 0x6D3;
    g_seh_ebp = ebp; sub_004CE940(); return; /* tail jmp 0x004CE940 */

loc_004CE906: ;
    eax = MEM32(ebp + 0xC);
    MEM32(eax) = 0x8868F0;
    eax = MEM32(ebp + 0x10);
    MEM32(eax) = 0x652;
    g_seh_ebp = ebp; sub_004CE940(); return; /* tail jmp 0x004CE940 */

loc_004CE91A: ;
    eax = MEM32(ebp + 0xC);
    MEM32(eax) = 0x884768;
    eax = MEM32(ebp + 0x10);
    MEM32(eax) = 0x862;
    g_seh_ebp = ebp; sub_004CE940(); return; /* tail jmp 0x004CE940 */

}

/**
 * sub_004CE944
 * Original: 0x004CE944 - 0x004CE951 (13 bytes, 6 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_004CE944(void)
{

loc_004CE944: ;
    eax = ecx;
    ecx = 0; /* xor self */
    MEM32(eax + 4) = ecx;
    MEM32(eax) = ecx;
    MEM32(eax + 8) = ecx;
    esp += 4; return; /* ret */

}

/**
 * sub_004CE951
 * Original: 0x004CE951 - 0x004CE955 (4 bytes, 2 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_004CE951(void)
{

loc_004CE951: ;
    eax = MEM32(ecx + 8);
    esp += 4; return; /* ret */

}

/**
 * sub_004CE955
 * Original: 0x004CE955 - 0x004CE9CC (119 bytes, 41 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_004CE955(void)
{
    uint32_t ebp;
    int _flags = 0; /* fallback flag var */

loc_004CE955: ;
    PUSH32(esp, ebp);
    ebp = esp;
    esp = esp - 0x30;
    edx = MEM32(ecx);
    edx = MEM32(edx + 0x10);
    edx = MEM32(edx);
    PUSH32(esp, ebx);
    PUSH32(esp, edi);
    edi = MEM32(ebp + 8);
    eax = edi;
    eax = eax >> 2;
    MEM32(edx + 0x438) = eax;
    eax = MEM32(ecx);
    eax = MEM32(eax + 0x10);
    eax = MEM32(eax);
    MEM32(eax + 0x43C) = 0x600;
    edx = MEM32(ecx);
    eax = ebp + -44;
    MEM32(ebp + 8) = 3;

loc_004CE98F: ;
    ebx = MEM32(edx + 0x10);
    ebx = MEM32(ebx);
    ebx = ebx + edi;
    MEM32(eax + -4) = ebx;
    ebx = MEM32(edx + 0x10);
    ebx = MEM32(ebx + 4);
    ebx = ebx + edi;
    MEM32(eax) = ebx;
    MEM32(eax + 4) = 0x1000;
    edi = edi + 0x1000;
    eax = eax + 0x10;
    MEM32(ebp + 8) = MEM32(ebp + 8) - 1;
    if ((MEM32(ebp + 8) != 0)) goto loc_004CE98F; /* jne: not equal / not zero */

loc_004CE9B8: ;
    ecx = MEM32(ecx + 4);
    PUSH32(esp, 3);
    eax = ebp + -48;
    PUSH32(esp, eax);
    PUSH32(esp, 0); sub_004C783E(); /* call 0x004C783E */

loc_004CE9C6: ;
    POP32(esp, edi);
    POP32(esp, ebx);
    esp = ebp;
    POP32(esp, ebp); /* leave */
    esp += 8; return; /* ret 4 */

}

/**
 * sub_004CE9CC
 * Original: 0x004CE9CC - 0x004CE9F4 (40 bytes, 12 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_004CE9CC(void)
{

loc_004CE9CC: ;
    eax = MEM32(ecx);
    eax = MEM32(eax + 0x10);
    eax = MEM32(eax);
    edx = MEM32(esp + 4);
    MEM32(eax + 0x440) = edx;
    ecx = MEM32(ecx);
    ecx = MEM32(ecx + 0x10);
    eax = MEM32(esp + 8);
    ecx = MEM32(ecx);
    eax = eax >> 2;
    MEM32(ecx + 0x444) = eax;
    esp += 12; return; /* ret 8 */

}

/**
 * sub_004CE9F4
 * Original: 0x004CE9F4 - 0x004CEA39 (69 bytes, 22 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_004CE9F4(void)
{

loc_004CE9F4: ;
    eax = MEM32(ecx);
    eax = MEM32(eax + 0x10);
    eax = MEM32(eax);
    edx = MEM32(esp + 4);
    MEM32(eax + 0x448) = edx;
    eax = MEM32(ecx);
    eax = MEM32(eax + 0x10);
    edx = MEM32(eax);
    eax = 0; /* xor self */
    eax++;
    MEM32(edx + 0x460) = eax;
    edx = MEM32(ecx);
    edx = MEM32(edx + 0x10);
    edx = MEM32(edx);
    MEM32(edx + 0x468) = eax;
    ecx = MEM32(ecx);
    ecx = MEM32(ecx + 0x10);
    eax = MEM32(esp + 8);
    ecx = MEM32(ecx);
    eax = eax >> 2;
    MEM32(ecx + 0x44C) = eax;
    esp += 12; return; /* ret 8 */

}

/**
 * sub_004CEA39
 * Original: 0x004CEA39 - 0x004CEA56 (29 bytes, 14 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_004CEA39(void)
{
    int _flags = 0; /* fallback flag var */

loc_004CEA39: ;
    PUSH32(esp, esi);
    esi = ecx;
    PUSH32(esp, edi);
    edi = MEM32(esi);
    if (TEST_Z(edi, edi)) goto loc_004CEA53; /* je: equal / zero */

loc_004CEA43: ;
    ecx = edi;
    PUSH32(esp, 0); sub_004CD088(); /* call 0x004CD088 */

loc_004CEA4A: ;
    PUSH32(esp, edi);
    PUSH32(esp, 0); sub_004C6B6F(); /* call 0x004C6B6F */

loc_004CEA50: ;
    MEM32(esi) = MEM32(esi) & 0;

loc_004CEA53: ;
    POP32(esp, edi);
    POP32(esp, esi);
    esp += 4; return; /* ret */

}

/**
 * sub_004CEA56
 * Original: 0x004CEA56 - 0x004CEA8A (52 bytes, 20 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_004CEA56(void)
{
    uint32_t ebp;
    int _flags = 0; /* fallback flag var */
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_004CEA56: ;
    PUSH32(esp, ebp);
    ebp = esp + -116;
    esp = esp - 0x94;
    eax = MEM32(ebp + 0x7C);
    PUSH32(esp, ebx);
    PUSH32(esp, esi);
    PUSH32(esp, edi);
    PUSH32(esp, 1);
    PUSH32(esp, 0x28);
    esi = ecx;
    PUSH32(esp, 0x626F5344);
    MEM32(esi + 4) = eax;
    PUSH32(esp, 0); sub_004C6B07(); /* call 0x004C6B07 */

loc_004CEA7A: ;
    ebx = 0; /* xor self */
    if (CMP_EQ(eax, ebx)) { sub_004CEA8A(); return; } /* je: equal / zero */

loc_004CEA80: ;
    PUSH32(esp, ebx);
    ecx = eax;
    PUSH32(esp, 0); sub_004CD06E(); /* call 0x004CD06E */

loc_004CEA88: ;
    g_seh_ebp = ebp; sub_004CEA8C(); return; /* tail jmp 0x004CEA8C */

}

/**
 * sub_004E1EE0
 * Original: 0x004E1EE0 - 0x004E1F25 (69 bytes, 25 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_004E1EE0(void)
{
    uint32_t ebp;
    int _flags = 0; /* fallback flag var */

loc_004E1EE0: ;
    PUSH32(esp, ebp);
    ebp = esp;
    PUSH32(esp, esi);
    esi = MEM32(ebp + 8);
    PUSH32(esp, 0);
    eax = ebp + 8;
    PUSH32(esp, eax);
    eax = esi + 0x8C;
    PUSH32(esp, eax);
    PUSH32(esp, MEM32(esi + 0x7C));
    PUSH32(esp, 0); sub_0042C319(); /* call 0x0042C319 */

loc_004E1EFC: ;
    if (TEST_Z(eax, eax)) { sub_004E1F25(); return; } /* je: equal / zero */

loc_004E1F00: ;
    eax = MEM32(esi + 0x38);
    edx = MEM32(ebp + 8);
    MEM32(esi + 0x88) = eax;
    eax = esi + 0x84;
    ecx = MEM32(eax);
    MEM32(esi + 0x38) = ecx;
    ecx = MEM32(ebp + 0x10);
    MEM32(ecx) = edx;
    ecx = MEM32(eax);
    edx = MEM32(ebp + 0xC);
    MEM32(edx) = ecx;
    g_seh_ebp = ebp; sub_004E1F4A(); return; /* tail jmp 0x004E1F4A */

}

/**
 * sub_004E1FED
 * Original: 0x004E1FED - 0x004E2203 (534 bytes, 177 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_004E1FED(void)
{
    uint32_t ebp;
    int _flags = 0; /* fallback flag var */

loc_004E1FED: ;
    PUSH32(esp, ebp);
    ebp = esp;
    esp = esp - 0x20;
    PUSH32(esp, ebx);
    PUSH32(esp, esi);
    PUSH32(esp, edi);
    PUSH32(esp, 0x14);
    ebx = 0; /* xor self */
    POP32(esp, edx);
    ecx = ebp + -32;
    esi = 0; /* xor self */
    MEM32(ebp + -4) = ebx;
    MEM32(ebp + -8) = ebx;
    PUSH32(esp, 0); sub_004E2ECC(); /* call 0x004E2ECC */

loc_004E200B: ;
    PUSH32(esp, ebx);
    PUSH32(esp, 0x60000080);
    PUSH32(esp, 3);
    PUSH32(esp, ebx);
    PUSH32(esp, 1);
    PUSH32(esp, 0x80000000u);
    PUSH32(esp, MEM32(ebp + 0xC));
    PUSH32(esp, 0); sub_0042C37E(); /* call 0x0042C37E */

loc_004E2023: ;
    (void)0; /* cmp eax, 0xFFFFFFFFu - flags set for next jcc */
    MEM32(ebp + 0xC) = eax;
    if (CMP_EQ(eax, 0xFFFFFFFFu)) goto loc_004E218B; /* je: equal / zero */

loc_004E202F: ;
    PUSH32(esp, 0x648C4000);
    edi = 0x1000;
    PUSH32(esp, edi);
    PUSH32(esp, 0); sub_002AF430(); /* call 0x002AF430 */

loc_004E203F: ;
    esi = eax;
    if (CMP_EQ(esi, ebx)) goto loc_004E218B; /* je: equal / zero */

loc_004E2049: ;
    eax = ebp + -32;
    PUSH32(esp, eax);
    PUSH32(esp, ebx);
    PUSH32(esp, edi);
    PUSH32(esp, esi);
    PUSH32(esp, MEM32(ebp + 0xC));
    MEM32(ebp + -24) = ebx;
    MEM32(ebp + -20) = ebx;
    PUSH32(esp, 0); sub_0042BC84(); /* call 0x0042BC84 */

loc_004E205E: ;
    if (TEST_NZ(eax, eax)) goto loc_004E2072; /* jne: not equal / not zero */

loc_004E2062: ;
    PUSH32(esp, 0); sub_0042C2AC(); /* call 0x0042C2AC */

loc_004E2067: ;
    if (CMP_NE(eax, 0x3E5)) goto loc_004E218B; /* jne: not equal / not zero */

loc_004E2072: ;
    PUSH32(esp, 1);
    eax = ebp + -12;
    PUSH32(esp, eax);
    eax = ebp + -32;
    PUSH32(esp, eax);
    PUSH32(esp, MEM32(ebp + 0xC));
    PUSH32(esp, 0); sub_0042C319(); /* call 0x0042C319 */

loc_004E2084: ;
    if (TEST_Z(eax, eax)) goto loc_004E218B; /* je: equal / zero */

loc_004E208C: ;
    eax = ebp + -4;
    PUSH32(esp, eax);
    PUSH32(esp, 0x4E1F54);
    PUSH32(esp, 0x4E1EE0);
    PUSH32(esp, ebx);
    PUSH32(esp, esi);
    PUSH32(esp, MEM32(ebp + 8));
    PUSH32(esp, 0); sub_004E221A(); /* call 0x004E221A */

loc_004E20A4: ;
    edi = eax;
    if (CMP_L(edi, ebx)) goto loc_004E21B0; /* jl: less (signed <) */

loc_004E20AE: ;
    eax = MEM32(ebp + -4);
    ecx = MEM32(eax + 0x48);
    edi = 0; /* xor self */
    if (CMP_BE(ecx, ebx)) goto loc_004E20E0; /* jbe: below or equal (unsigned <=) */

loc_004E20BA: ;
    eax = MEM32(eax + 0x4C);

loc_004E20BD: ;
    edx = MEM32(eax);
    if (CMP_EQ(edx, 0x69)) goto loc_004E20D9; /* je: equal / zero */

loc_004E20C4: ;
    if (CMP_NE(edx, 1)) goto loc_004E20CF; /* jne: not equal / not zero */

loc_004E20C9: ;
    if (CMP_EQ(MEM32(eax + 4), 6)) goto loc_004E20D9; /* je: equal / zero */

loc_004E20CF: ;
    edi++;
    eax = eax + 0x14;
    if (CMP_B(edi, ecx)) goto loc_004E20BD; /* jb: below (unsigned <) */

loc_004E20D7: ;
    goto loc_004E20E0;

loc_004E20D9: ;
    MEM32(ebp + -8) = 1;

loc_004E20E0: ;
    eax = MEM32(esi + 4);
    edi = MEM32(esi + 8);
    PUSH32(esp, 0x648C4000);
    PUSH32(esp, esi);
    MEM32(ebp + 8) = eax;
    PUSH32(esp, 0); sub_002AF670(); /* call 0x002AF670 */

loc_004E20F4: ;
    eax = MEM32(ebp + -8);
    eax = eax << 0x1F;
    eax = eax | 0x648C4000;
    PUSH32(esp, eax);
    eax = edi + edi;
    PUSH32(esp, eax);
    PUSH32(esp, 0); sub_002AF430(); /* call 0x002AF430 */

loc_004E2109: ;
    esi = eax;
    if (CMP_EQ(esi, ebx)) goto loc_004E218B; /* je: equal / zero */

loc_004E210F: ;
    (void)0; /* cmp MEM32(ebp + 8), edi - flags set for next jcc */
    eax = MEM32(ebp + -4);
    ecx = MEM32(ebp + -8);
    MEM32(eax + 0x14) = ecx;
    if (CMP_BE(MEM32(ebp + 8), edi)) goto loc_004E2127; /* jbe: below or equal (unsigned <=) */

loc_004E211D: ;
    edi = 0x80004005u;
    goto loc_004E21B0;

loc_004E2127: ;
    eax = MEM32(ebp + -4);
    MEM32(eax + 0x24) = eax;
    ecx = MEM32(ebp + -4);
    eax = MEM32(ebp + 0xC);
    MEM32(ecx + 0x7C) = eax;
    ecx = MEM32(ebp + -4);
    MEM32(ecx + 0x80) = edi;
    ecx = MEM32(ebp + -4);
    MEM32(ecx + 0x84) = esi;
    ecx = MEM32(ebp + -4);
    edi = edi + esi;
    MEM32(ecx + 0x38) = edi;
    ecx = MEM32(ebp + -4);
    MEM32(ecx + 0x94) = ebx;
    ecx = MEM32(ebp + -4);
    MEM32(ecx + 0x98) = ebx;
    ecx = MEM32(ebp + -4);
    ecx = ecx + 0x8C;
    PUSH32(esp, ecx);
    PUSH32(esp, ebx);
    PUSH32(esp, MEM32(ebp + 8));
    PUSH32(esp, esi);
    PUSH32(esp, eax);
    PUSH32(esp, 0); sub_0042BC84(); /* call 0x0042BC84 */

loc_004E2177: ;
    if (TEST_NZ(eax, eax)) { sub_004E2203(); return; } /* jne: not equal / not zero */

loc_004E217F: ;
    PUSH32(esp, 0); sub_0042C2AC(); /* call 0x0042C2AC */

loc_004E2184: ;
    if (CMP_EQ(eax, 0x3E5)) { sub_004E2203(); return; } /* je: equal / zero */

loc_004E218B: ;
    PUSH32(esp, 0); sub_0042C2AC(); /* call 0x0042C2AC */

loc_004E2190: ;
    if (CMP_G(eax & eax, 0)) goto loc_004E219D; /* jg: greater (signed >) */

loc_004E2194: ;
    PUSH32(esp, 0); sub_0042C2AC(); /* call 0x0042C2AC */

loc_004E2199: ;
    edi = eax;
    goto loc_004E21B0;

loc_004E219D: ;
    PUSH32(esp, 0); sub_0042C2AC(); /* call 0x0042C2AC */

loc_004E21A2: ;
    edi = eax;
    edi = edi & 0xFFFF;
    edi = edi | 0x80070000u;

loc_004E21B0: ;
    if (CMP_EQ(MEM32(ebp + 0xC), 0xFFFFFFFFu)) goto loc_004E21D0; /* je: equal / zero */

loc_004E21B6: ;
    PUSH32(esp, 1);
    eax = ebp + -12;
    PUSH32(esp, eax);
    eax = ebp + -32;
    PUSH32(esp, eax);
    PUSH32(esp, MEM32(ebp + 0xC));
    PUSH32(esp, 0); sub_0042C319(); /* call 0x0042C319 */

loc_004E21C8: ;
    PUSH32(esp, MEM32(ebp + 0xC));
    PUSH32(esp, 0); sub_0042C509(); /* call 0x0042C509 */

loc_004E21D0: ;
    if (CMP_EQ(esi, ebx)) goto loc_004E21E6; /* je: equal / zero */

loc_004E21D4: ;
    eax = MEM32(ebp + -8);
    eax = eax << 0x1F;
    eax = eax | 0x648C4000;
    PUSH32(esp, eax);
    PUSH32(esp, esi);
    PUSH32(esp, 0); sub_002AF670(); /* call 0x002AF670 */

loc_004E21E6: ;
    eax = MEM32(ebp + -4);
    if (CMP_EQ(eax, ebx)) goto loc_004E21FF; /* je: equal / zero */

loc_004E21ED: ;
    eax = MEM32(eax + 0xC);
    if (CMP_EQ(eax, ebx)) goto loc_004E21FF; /* je: equal / zero */

loc_004E21F4: ;
    PUSH32(esp, 0x648C4000);
    PUSH32(esp, eax);
    PUSH32(esp, 0); sub_002AF670(); /* call 0x002AF670 */

loc_004E21FF: ;
    eax = edi;
    g_seh_ebp = ebp; sub_004E2213(); return; /* tail jmp 0x004E2213 */

}

/**
 * sub_004E221A
 * Original: 0x004E221A - 0x004E228E (116 bytes, 37 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_004E221A(void)
{
    uint32_t ebp;
    int _flags = 0; /* fallback flag var */

loc_004E221A: ;
    PUSH32(esp, ebp);
    ebp = esp;
    esp = esp - 0x24;
    eax = MEM32(ebp + 0xC);
    PUSH32(esp, ebx);
    ebx = ZX16(MEM16(eax + 0x20));
    PUSH32(esp, esi);
    PUSH32(esp, edi);
    edi = MEM32(eax + 0x14);
    eax = MEM32(eax + 0x18);
    eax = eax + 0xF;
    eax = eax >> 4;
    edi = edi + 0xF;
    edi = edi >> 4;
    MEM32(ebp + -4) = eax;
    eax = (uint32_t)((int32_t)eax * (int32_t)edi);
    edx = edi;
    edx = (uint32_t)((int32_t)edx * (int32_t)0x85);
    ecx = eax * 4 + 0x7C;
    ecx = ecx >> 5;
    esi = ebx + ebx * 2;
    esi = esi << 4;
    edx = edx + ecx;
    MEM32(ebp + -12) = ecx;
    ecx = esi + edx + 0x1BD;
    esi = eax + eax * 2;
    esi = esi << 8;
    PUSH32(esp, 0x648C4000);
    eax = esi + ecx;
    PUSH32(esp, eax);
    MEM32(ebp + -8) = ecx;
    PUSH32(esp, 0); sub_002AF430(); /* call 0x002AF430 */

loc_004E227D: ;
    (void)0; /* test eax, eax - flags set for next jcc */
    MEM32(ebp + -16) = eax;
    if (TEST_NZ(eax, eax)) { sub_004E228E(); return; } /* jne: not equal / not zero */

loc_004E2284: ;
    eax = 0x8007000Eu;
    g_seh_ebp = ebp; sub_004E252A(); return; /* tail jmp 0x004E252A */

}

/**
 * sub_004E2531
 * Original: 0x004E2531 - 0x004E2615 (228 bytes, 92 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_004E2531(void)
{
    uint32_t ebp;
    int _flags = 0; /* fallback flag var */

loc_004E2531: ;
    PUSH32(esp, ebp);
    ebp = esp;
    PUSH32(esp, ecx);
    PUSH32(esp, ebx);
    PUSH32(esp, esi);
    esi = MEM32(ebp + 8);
    ebx = 0; /* xor self */
    if (CMP_EQ(esi, ebx)) goto loc_004E260F; /* je: equal / zero */

loc_004E2544: ;
    PUSH32(esp, edi);
    edi = 0; /* xor self */
    if (CMP_BE(MEM32(esi + 0x48), ebx)) goto loc_004E2569; /* jbe: below or equal (unsigned <=) */

loc_004E254C: ;
    eax = MEM32(esi + 0x134);
    eax = MEM32(eax + edi * 4);
    if (CMP_EQ(eax, ebx)) goto loc_004E2563; /* je: equal / zero */

loc_004E2559: ;
    PUSH32(esp, 1);
    PUSH32(esp, ebx);
    PUSH32(esp, ebx);
    PUSH32(esp, eax);
    PUSH32(esp, 0); sub_004C5218(); /* call 0x004C5218 */

loc_004E2563: ;
    edi++;
    if (CMP_B(edi, MEM32(esi + 0x48))) goto loc_004E254C; /* jb: below (unsigned <) */

loc_004E2569: ;
    edi = 0; /* xor self */
    if (CMP_BE(MEM32(esi + 0x48), ebx)) goto loc_004E25A1; /* jbe: below or equal (unsigned <=) */

loc_004E2570: ;
    eax = MEM32(esi + 0x134);
    if (CMP_EQ(MEM32(eax + edi * 4), ebx)) goto loc_004E259B; /* je: equal / zero */

loc_004E257B: ;
    eax = MEM32(eax + edi * 4);
    ecx = MEM32(eax);
    edx = ebp + 8;
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, edx);
    PUSH32(esp, eax);
    PUSH32(esp, 0); RECOMP_ICALL_SAFE(MEM32(ecx + 0xC), _icall_esp); /* indirect call */
    }

loc_004E2588: ;
    if (TEST_Z(MEM8(ebp + 0xA), 1)) goto loc_004E259B; /* je: equal / zero */

loc_004E258E: ;
    PUSH32(esp, 1);
    PUSH32(esp, 0); sub_0042E379(); /* call 0x0042E379 */

loc_004E2595: ;
    PUSH32(esp, 0); sub_004C5248(); /* call 0x004C5248 */

loc_004E259A: ;
    edi--;

loc_004E259B: ;
    edi++;
    if (CMP_B(edi, MEM32(esi + 0x48))) goto loc_004E2570; /* jb: below (unsigned <) */

loc_004E25A1: ;
    edi = 0; /* xor self */
    if (CMP_BE(MEM32(esi + 0x48), ebx)) goto loc_004E25C2; /* jbe: below or equal (unsigned <=) */

loc_004E25A8: ;
    eax = MEM32(esi + 0x134);
    if (CMP_EQ(MEM32(eax + edi * 4), ebx)) goto loc_004E25BC; /* je: equal / zero */

loc_004E25B3: ;
    eax = MEM32(eax + edi * 4);
    ecx = MEM32(eax);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, eax);
    PUSH32(esp, 0); RECOMP_ICALL_SAFE(MEM32(ecx + 4), _icall_esp); /* indirect call */
    }

loc_004E25BC: ;
    edi++;
    if (CMP_B(edi, MEM32(esi + 0x48))) goto loc_004E25A8; /* jb: below (unsigned <) */

loc_004E25C2: ;
    eax = MEM32(esi + 0x7C);
    if (CMP_EQ(eax, 0xFFFFFFFFu)) goto loc_004E25E5; /* je: equal / zero */

loc_004E25CA: ;
    PUSH32(esp, 1);
    ecx = ebp + -4;
    PUSH32(esp, ecx);
    ecx = esi + 0x8C;
    PUSH32(esp, ecx);
    PUSH32(esp, eax);
    PUSH32(esp, 0); sub_0042C319(); /* call 0x0042C319 */

loc_004E25DD: ;
    PUSH32(esp, MEM32(esi + 0x7C));
    PUSH32(esp, 0); sub_0042C509(); /* call 0x0042C509 */

loc_004E25E5: ;
    eax = MEM32(esi + 0x10);
    (void)0; /* cmp eax, ebx - flags set for next jcc */
    edi = 0x648C4000;
    if (CMP_EQ(eax, ebx)) goto loc_004E2600; /* je: equal / zero */

loc_004E25F1: ;
    ecx = MEM32(esi + 0x14);
    ecx = ecx << 0x1F;
    ecx = ecx | edi;
    PUSH32(esp, ecx);
    PUSH32(esp, eax);
    PUSH32(esp, 0); sub_002AF670(); /* call 0x002AF670 */

loc_004E2600: ;
    esi = MEM32(esi + 0xC);
    if (CMP_EQ(esi, ebx)) goto loc_004E260E; /* je: equal / zero */

loc_004E2607: ;
    PUSH32(esp, edi);
    PUSH32(esp, esi);
    PUSH32(esp, 0); sub_002AF670(); /* call 0x002AF670 */

loc_004E260E: ;
    POP32(esp, edi);

loc_004E260F: ;
    POP32(esp, esi);
    POP32(esp, ebx);
    esp = ebp;
    POP32(esp, ebp); /* leave */
    esp += 8; return; /* ret 4 */

}

/**
 * sub_004E2615
 * Original: 0x004E2615 - 0x004E2631 (28 bytes, 9 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_004E2615(void)
{

loc_004E2615: ;
    eax = MEM32(esp + 4);
    edx = MEM32(eax + 0x40);
    ecx = MEM32(esp + 8);
    MEM32(ecx) = edx;
    edx = MEM32(eax + 0x44);
    MEM32(ecx + 4) = edx;
    eax = MEM32(eax + 0x48);
    MEM32(ecx + 0xC) = eax;
    esp += 12; return; /* ret 8 */

}

/**
 * sub_004E2631
 * Original: 0x004E2631 - 0x004E2682 (81 bytes, 27 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_004E2631(void)
{
    uint32_t ebp;
    int _flags = 0; /* fallback flag var */
    int _cf = 0; /* carry flag */

loc_004E2631: ;
    PUSH32(esp, ebp);
    ebp = esp;
    PUSH32(esp, ecx);
    PUSH32(esp, ecx);
    if (CMP_NE(MEM32(ebp + 0x10), 0)) goto loc_004E267E; /* jne: not equal / not zero */

loc_004E263C: ;
    if (CMP_EQ(MEM32(ebp + 0xC), 0)) goto loc_004E267E; /* je: equal / zero */

loc_004E2642: ;
    PUSH32(esp, esi);
    eax = ebp + -8;
    PUSH32(esp, eax);
    PUSH32(esp, 0); sub_0042E13B(); /* call 0x0042E13B */

loc_004E264C: ;
    esi = MEM32(ebp + 8);
    PUSH32(esp, MEM32(0x509C5C));
    eax = MEM32(ebp + -8);
    eax = eax - MEM32(esi + 0xB0);
    ecx = MEM32(ebp + -4);
    PUSH32(esp, MEM32(0x509C58));
    ecx = ecx - MEM32(esi + 0xB4) - _cf; /* sbb */
    PUSH32(esp, ecx);
    PUSH32(esp, eax);
    PUSH32(esp, 0); sub_00470D50(); /* call 0x00470D50 */

loc_004E2674: ;
    eax = eax - MEM32(ebp + 0xC);
    MEM32(esi + 0xC8) = eax;
    POP32(esp, esi);

loc_004E267E: ;
    esp = ebp;
    POP32(esp, ebp); /* leave */
    esp += 16; return; /* ret 12 */

}

/**
 * sub_004E2682
 * Original: 0x004E2682 - 0x004E2801 (383 bytes, 127 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_004E2682(void)
{
    uint32_t ebp;
    int _flags = 0; /* fallback flag var */

loc_004E2682: ;
    PUSH32(esp, ebp);
    ebp = esp;
    esp = esp - 0x2C;
    PUSH32(esp, ebx);
    PUSH32(esp, esi);
    esi = MEM32(ebp + 8);
    eax = 0; /* xor self */
    (void)0; /* cmp MEM32(ebp + 0x10), eax - flags set for next jcc */
    PUSH32(esp, edi);
    edi = MEM32(ebp + 0xC);
    if (CMP_NE(MEM32(ebp + 0x10), eax)) goto loc_004E26B2; /* jne: not equal / not zero */

loc_004E2698: ;
    if (CMP_NE(MEM32(ebp + 0x14), eax)) goto loc_004E26B2; /* jne: not equal / not zero */

loc_004E269D: ;
    if (CMP_NE(MEM32(ebp + 0x18), eax)) goto loc_004E26B2; /* jne: not equal / not zero */

loc_004E26A2: ;
    ecx = MEM32(esi + 0x4C);
    eax = edi + edi * 4;
    (void)0; /* cmp MEM32(ecx + eax * 4 + 0x10), 1 - flags set for next jcc */
    eax = edi + 3;
    if (CMP_EQ(MEM32(ecx + eax * 4 + 0x10), 1)) goto loc_004E26B5; /* je: equal / zero */

loc_004E26B2: ;
    eax = edi + 1;

loc_004E26B5: ;
    (void)0; /* cmp edi, eax - flags set for next jcc */
    MEM32(ebp + 8) = eax;
    if (CMP_AE(edi, eax)) goto loc_004E27E0; /* jae: above or equal (unsigned >=) */

loc_004E26C0: ;
    ecx = edi + edi * 4;
    ecx = ecx << 2;
    MEM32(ebp + 0xC) = ecx;
    goto loc_004E26CE;

loc_004E26CB: ;
    ecx = MEM32(ebp + 0xC);

loc_004E26CE: ;
    eax = MEM32(esi + 0x134);
    ebx = edi;
    ebx = ebx << 2;
    eax = eax + ebx;
    if (CMP_EQ(MEM32(eax), 0)) goto loc_004E26F5; /* je: equal / zero */

loc_004E26E0: ;
    eax = MEM32(eax);
    ecx = MEM32(eax);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, eax);
    PUSH32(esp, 0); RECOMP_ICALL_SAFE(MEM32(ecx + 4), _icall_esp); /* indirect call */
    }

loc_004E26E8: ;
    eax = MEM32(esi + 0x134);
    MEM32(ebx + eax) = MEM32(ebx + eax) & 0;
    ecx = MEM32(ebp + 0xC);

loc_004E26F5: ;
    eax = MEM32(ebp + 0x10);
    edx = MEM32(ebp + 0x14);
    (void)0; /* test edx, edx - flags set for next jcc */
    MEM32(ebp + -44) = eax;
    eax = ebp + -20;
    MEM32(ebp + -40) = 2;
    MEM32(ebp + -36) = eax;
    MEM32(ebp + -32) = 0x4E2631;
    MEM32(ebp + -28) = esi;
    if (TEST_NZ(edx, edx)) goto loc_004E2730; /* jne: not equal / not zero */

loc_004E2719: ;
    eax = MEM32(esi + 0x4C);
    eax = MEM32(ecx + eax + 0x10);
    if (TEST_Z(LO8(eax), 7)) goto loc_004E2730; /* je: equal / zero */

loc_004E2724: ;
    eax = eax * 8 + 0x4EA6D0;
    MEM32(ebp + -24) = eax;
    goto loc_004E2733;

loc_004E2730: ;
    MEM32(ebp + -24) = edx;

loc_004E2733: ;
    eax = MEM32(esi + 0x4C);
    eax = eax + ecx;
    SET_LO16(ecx, MEM16(eax));
    (void)0; /* cmp LO16(ecx), 0x69 - flags set for next jcc */
    MEM16(ebp + -20) = LO16(ecx);
    SET_LO16(edx, MEM16(eax + 4));
    MEM16(ebp + -18) = LO16(edx);
    edx = MEM32(eax + 8);
    MEM32(ebp + -16) = edx;
    SET_LO16(eax, MEM16(eax + 0xC));
    MEM16(ebp + -6) = LO16(eax);
    if (CMP_NE(LO16(ecx), 0x69)) goto loc_004E277F; /* jne: not equal / not zero */

loc_004E275B: ;
    eax = MEM32(ebp + -18);
    eax = eax + eax * 8;
    eax = eax << 2;
    MEM16(ebp + -8) = LO16(eax);
    eax = ZX16(LO16(eax));
    eax = (uint32_t)((int32_t)eax * (int32_t)edx);
    eax = eax >> 6;
    MEM16(ebp + -4) = 2;
    MEM16(ebp + -2) = 0x40;
    goto loc_004E279F;

loc_004E277F: ;
    ecx = ZX16(MEM16(ebp + -18));
    eax = ZX16(LO16(eax));
    eax = (uint32_t)((int32_t)eax * (int32_t)ecx);
    edx = ((int32_t)eax < 0) ? 0xFFFFFFFF : 0; /* cdq */
    PUSH32(esp, 8);
    POP32(esp, ecx);
    { int64_t _dividend = ((int64_t)(int32_t)edx << 32) | eax;
      eax = (uint32_t)((int32_t)(_dividend / (int32_t)ecx));
      edx = (uint32_t)((int32_t)(_dividend % (int32_t)ecx)); }
    MEM16(ebp + -8) = LO16(eax);
    eax = ZX16(LO16(eax));
    eax = (uint32_t)((int32_t)eax * (int32_t)MEM32(ebp + -16));
    MEM16(ebp + -4) = MEM16(ebp + -4) & 0;

loc_004E279F: ;
    MEM32(ebp + -12) = eax;
    eax = MEM32(esi + 0x134);
    eax = eax + ebx;
    PUSH32(esp, eax);
    eax = ebp + -44;
    PUSH32(esp, eax);
    PUSH32(esp, 0); sub_004C69EA(); /* call 0x004C69EA */

loc_004E27B4: ;
    if (TEST_S(eax, eax)) goto loc_004E27FA; /* jl: less (signed <) */

loc_004E27B8: ;
    eax = MEM32(esi + 0x138);
    MEM32(ebx + eax) = 1;
    eax = esi + 0x130;
    if (CMP_NE(MEM32(eax), 0xFFFFFFFFu)) goto loc_004E27D2; /* jne: not equal / not zero */

loc_004E27D0: ;
    MEM32(eax) = edi;

loc_004E27D2: ;
    MEM32(ebp + 0xC) = MEM32(ebp + 0xC) + 0x14;
    edi++;
    if (CMP_B(edi, MEM32(ebp + 8))) goto loc_004E26CB; /* jb: below (unsigned <) */

loc_004E27E0: ;
    ecx = MEM32(ebp + 0x18);
    if (TEST_Z(ecx, ecx)) goto loc_004E27F8; /* je: equal / zero */

loc_004E27E7: ;
    eax = MEM32(esi + 0x134);
    eax = MEM32(eax + edi * 4 + -4);
    MEM32(ecx) = eax;
    ecx = MEM32(eax);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, eax);
    PUSH32(esp, 0); RECOMP_ICALL_SAFE(MEM32(ecx), _icall_esp); /* indirect call */
    }

loc_004E27F8: ;
    eax = 0; /* xor self */

loc_004E27FA: ;
    POP32(esp, edi);
    POP32(esp, esi);
    POP32(esp, ebx);
    esp = ebp;
    POP32(esp, ebp); /* leave */
    esp += 24; return; /* ret 20 */

}

/**
 * sub_004E2801
 * Original: 0x004E2801 - 0x004E2E7E (1661 bytes, 490 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_004E2801(void)
{
    uint32_t ebp;
    int _flags = 0; /* fallback flag var */
    int _cf = 0; /* carry flag */

loc_004E2801: ;
    PUSH32(esp, ebp);
    ebp = esp;
    esp = esp - 0x3C;
    MEM32(ebp + -20) = MEM32(ebp + -20) | 0xFFFFFFFFu;
    PUSH32(esp, ebx);
    PUSH32(esp, esi);
    PUSH32(esp, edi);
    PUSH32(esp, 0x18);
    ebx = 0; /* xor self */
    edi = 0; /* xor self */
    POP32(esp, edx);
    ecx = ebp + -60;
    MEM32(ebp + -8) = edi;
    MEM32(ebp + -16) = ebx;
    PUSH32(esp, 0); sub_004E2ECC(); /* call 0x004E2ECC */

loc_004E2823: ;
    eax = MEM32(ebp + 0x10);
    esi = MEM32(ebp + 8);
    MEM32(eax) = 3;
    if (CMP_EQ(MEM32(esi + 0x6C), ebx)) goto loc_004E29E5; /* je: equal / zero */

loc_004E2838: ;
    if (CMP_NE(MEM32(esi + 0x60), ebx)) goto loc_004E29E5; /* jne: not equal / not zero */

loc_004E2841: ;
    if (CMP_NE(MEM32(esi + 0x50), ebx)) goto loc_004E2863; /* jne: not equal / not zero */

loc_004E2846: ;
    if (CMP_EQ(MEM32(esi + 0x68), ebx)) goto loc_004E29E5; /* je: equal / zero */

loc_004E284F: ;
    if (CMP_EQ(MEM32(esi + 0x74), ebx)) goto loc_004E29E5; /* je: equal / zero */

loc_004E2858: ;
    MEM32(eax) = 2;
    goto loc_004E2E75;

loc_004E2863: ;
    eax = ebp + -28;
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, eax);
    eax = ebp + -4;
    PUSH32(esp, eax);
    PUSH32(esp, MEM32(esi + 0x24));
    PUSH32(esp, 0); RECOMP_ICALL_SAFE(MEM32(esi + 0x1C), _icall_esp); /* indirect call */
    }

loc_004E2871: ;
    if (CMP_L(eax, ebx)) goto loc_004E2E77; /* jl: less (signed <) */

loc_004E2879: ;
    eax = MEM32(ebp + -4);
    if (CMP_EQ(eax, ebx)) goto loc_004E29E5; /* je: equal / zero */

loc_004E2884: ;
    ecx = esi + 0x14C;
    edx = MEM32(ecx);
    MEM32(ecx) = ebx;
    MEM32(esi + 0x140) = edx;
    ecx = esi + 0x15C;
    edx = MEM32(ecx);
    MEM32(ecx) = ebx;
    ecx = MEM32(ebp + -28);
    MEM32(esi + 0x58) = MEM32(esi + 0x58) + ecx;
    MEM32(esi + 0x60) = eax;
    MEM32(esi + 0x6C) = ebx;
    MEM32(esi + 0x5C) = MEM32(esi + 0x5C) + ebx + _cf; /* adc */
    eax = eax + MEM32(esi + 0x30);
    MEM32(esi + 0x150) = edx;
    MEM32(ebp + -4) = eax;
    MEM32(esi + 0x30) = ebx;
    ecx = MEM32(eax);
    eax = eax + 4;
    MEM32(esi + 0x50) = ecx;
    MEM32(ebp + -4) = eax;
    MEM32(esi + 0x70) = eax;
    ecx = MEM32(eax + 4);
    MEM32(esi + 0xC0) = MEM32(esi + 0xC0) + ecx;
    ecx = MEM32(eax);
    ecx = ecx & 0x7FFFFF;
    (void)0; /* cmp MEM32(esi + 0x48), ebx - flags set for next jcc */
    ecx = eax + ecx + 8;
    MEM32(ebp + -4) = ecx;
    MEM32(ebp + 8) = ebx;
    if (CMP_BE(MEM32(esi + 0x48), ebx)) goto loc_004E29E5; /* jbe: below or equal (unsigned <=) */

loc_004E28EE: ;
    eax = eax + 8;
    MEM32(ebp + -12) = eax;

loc_004E28F4: ;
    edi = MEM32(ebp + 8);
    eax = MEM32(esi + 0x138);
    edi = edi << 2;
    (void)0; /* cmp MEM32(edi + eax), ebx - flags set for next jcc */
    eax = MEM32(esi + 0x13C);
    if (CMP_EQ(MEM32(edi + eax), ebx)) goto loc_004E299C; /* je: equal / zero */

loc_004E290F: ;
    if (CMP_NE(MEM32(edi + eax), ebx)) goto loc_004E2934; /* jne: not equal / not zero */

loc_004E2914: ;
    eax = MEM32(esi + 0x134);
    eax = MEM32(edi + eax);
    PUSH32(esp, 2);
    PUSH32(esp, eax);
    PUSH32(esp, 0); sub_004C5213(); /* call 0x004C5213 */

loc_004E2925: ;
    if (CMP_L(eax, ebx)) goto loc_004E2E77; /* jl: less (signed <) */

loc_004E292D: ;
    MEM32(ebp + -16) = 1;

loc_004E2934: ;
    eax = MEM32(ebp + -4);
    MEM32(ebp + -60) = eax;
    eax = MEM32(ebp + -12);
    eax = MEM32(eax);
    MEM32(ebp + -56) = eax;
    eax = MEM32(esi + 0x150);
    eax = eax + edi;
    MEM32(ebp + -52) = eax;
    eax = MEM32(esi + 0x140);
    eax = eax + edi;
    MEM32(ebp + -48) = eax;
    eax = MEM32(ebp + 8);
    if (CMP_NE(eax, MEM32(esi + 0x130))) goto loc_004E296E; /* jne: not equal / not zero */

loc_004E2963: ;
    eax = MEM32(esi + 0xC0);
    MEM32(ebp + -44) = eax;
    goto loc_004E2971;

loc_004E296E: ;
    MEM32(ebp + -44) = ebx;

loc_004E2971: ;
    eax = MEM32(esi + 0x134);
    eax = MEM32(edi + eax);
    ecx = MEM32(eax);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, ebx);
    edx = ebp + -60;
    PUSH32(esp, edx);
    PUSH32(esp, eax);
    PUSH32(esp, 0); RECOMP_ICALL_SAFE(MEM32(ecx + 0x10), _icall_esp); /* indirect call */
    }

loc_004E2985: ;
    if (CMP_L(eax, ebx)) goto loc_004E2E77; /* jl: less (signed <) */

loc_004E298D: ;
    eax = MEM32(esi + 0x13C);
    MEM32(edi + eax) = 1;
    goto loc_004E29C1;

loc_004E299C: ;
    if (CMP_EQ(MEM32(edi + eax), ebx)) goto loc_004E29C1; /* je: equal / zero */

loc_004E29A1: ;
    eax = MEM32(esi + 0x134);
    eax = MEM32(edi + eax);
    ecx = MEM32(eax);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, eax);
    PUSH32(esp, 0); RECOMP_ICALL_SAFE(MEM32(ecx + 0x14), _icall_esp); /* indirect call */
    }

loc_004E29B0: ;
    if (CMP_L(eax, ebx)) goto loc_004E2E77; /* jl: less (signed <) */

loc_004E29B8: ;
    eax = MEM32(esi + 0x13C);
    MEM32(edi + eax) = ebx;

loc_004E29C1: ;
    eax = MEM32(ebp + -12);
    eax = MEM32(eax);
    MEM32(ebp + -12) = MEM32(ebp + -12) + 4;
    eax = eax + 3;
    eax = eax & 0xFFFFFFFCu;
    MEM32(ebp + -4) = MEM32(ebp + -4) + eax;
    MEM32(ebp + 8) = MEM32(ebp + 8) + 1;
    eax = MEM32(ebp + 8);
    if (CMP_B(eax, MEM32(esi + 0x48))) goto loc_004E28F4; /* jb: below (unsigned <) */

loc_004E29E2: ;
    edi = MEM32(ebp + -8);

loc_004E29E5: ;
    eax = MEM32(esi + 0x60);
    if (CMP_EQ(eax, ebx)) goto loc_004E2ACD; /* je: equal / zero */

loc_004E29F0: ;
    if (CMP_NE(MEM32(esi + 0x64), ebx)) goto loc_004E2ACD; /* jne: not equal / not zero */

loc_004E29F9: ;
    (void)0; /* cmp MEM32(esi + 0x50), ebx - flags set for next jcc */
    MEM32(esi + 0x64) = eax;
    eax = esi + 0x140;
    ecx = MEM32(eax);
    MEM32(eax) = ebx;
    eax = esi + 0x150;
    MEM32(esi + 0x144) = ecx;
    ecx = MEM32(eax);
    MEM32(esi + 0x60) = ebx;
    MEM32(esi + 0x154) = ecx;
    MEM32(eax) = ebx;
    if (CMP_EQ(MEM32(esi + 0x50), ebx)) goto loc_004E2A2D; /* je: equal / zero */

loc_004E2A24: ;
    if (CMP_NE(MEM8(esi + 0x78), LO8(ebx))) goto loc_004E2A2D; /* jne: not equal / not zero */

loc_004E2A29: ;
    eax = 0; /* xor self */
    goto loc_004E2A30;

loc_004E2A2D: ;
    eax = 0; /* xor self */
    eax++;

loc_004E2A30: ;
    (void)0; /* cmp eax, ebx - flags set for next jcc */
    MEM32(esi + 0xAC) = eax;
    if (CMP_EQ(eax, ebx)) goto loc_004E2A46; /* je: equal / zero */

loc_004E2A3A: ;
    eax = MEM32(esi + 0xC0);
    MEM32(esi + 0xC4) = eax;

loc_004E2A46: ;
    ecx = MEM32(esi + 0x70);
    eax = MEM32(esi + 0x48);
    eax = ecx + eax * 4 + 8;
    MEM32(ebp + -4) = eax;
    if (TEST_Z(MEM8(ecx + 3), 0x80)) goto loc_004E2ABD; /* je: equal / zero */

loc_004E2A59: ;
    SET_LO8(edx, MEM8(eax));
    SET_LO8(edx, LO8(edx) & 1);
    MEM8(esi + 0xA0) = LO8(edx);
    edx = MEM32(eax);
    edx = edx >> 1;
    SET_LO8(edx, LO8(edx) & 1);
    MEM8(esi + 0xA1) = LO8(edx);
    edx = MEM32(eax);
    edx = edx >> 2;
    SET_LO8(edx, LO8(edx) & 1);
    MEM8(esi + 0xA2) = LO8(edx);
    edx = MEM32(eax);
    edx = edx >> 3;
    SET_LO8(edx, LO8(edx) & 1);
    MEM8(esi + 0xA3) = LO8(edx);
    edx = MEM32(eax);
    edx = edx >> 4;
    SET_LO8(edx, LO8(edx) & 1);
    MEM8(esi + 0xA4) = LO8(edx);
    edx = MEM32(eax);
    edx = edx >> 5;
    SET_LO8(edx, LO8(edx) & 1);
    MEM8(esi + 0xA5) = LO8(edx);
    edx = MEM32(eax);
    edx = edx >> 6;
    edx = edx & 7;
    eax = eax + 4;
    MEM32(esi + 0xA8) = edx;
    MEM32(ebp + -4) = eax;

loc_004E2ABD: ;
    MEM32(esi + 8) = eax;
    eax = MEM32(ecx);
    eax = eax >> 0x17;
    eax = eax & 0xFF;
    MEM32(esi + 0x3C) = eax;

loc_004E2ACD: ;
    if (CMP_NE(MEM32(esi + 0xF8), 0xFFFFFFFFu)) goto loc_004E2B1E; /* jne: not equal / not zero */

loc_004E2AD6: ;
    if (CMP_EQ(MEM32(esi + 0x3C), ebx)) goto loc_004E2B1E; /* je: equal / zero */

loc_004E2ADB: ;
    ecx = MEM32(esi + 8);
    eax = MEM32(ecx);
    edx = eax;
    eax = eax >> 0x11;
    eax = eax + MEM32(esi + 0xE4);
    edx = edx & 0x1FFFF;
    edx = edx * 4 + 4;
    edi = ecx + 4;
    PUSH32(esp, esi);
    MEM32(ebp + 8) = edx;
    MEM32(esi + 0xF8) = eax;
    MEM32(esi + 8) = edi;
    MEM32(esi + 4) = ebx;
    PUSH32(esp, 0); sub_004E5450(); /* call 0x004E5450 */

loc_004E2B10: ;
    eax = MEM32(ebp + 8);
    edi = edi + eax;
    MEM32(esi + 0x3C) = MEM32(esi + 0x3C) - 1;
    MEM32(esi + 8) = edi;
    edi = MEM32(ebp + -8);

loc_004E2B1E: ;
    eax = ebp + -36;
    PUSH32(esp, eax);
    PUSH32(esp, 0); sub_00539C60(); /* call 0x00539C60 */

loc_004E2B27: ;
    eax = MEM32(ebp + -32);
    eax = eax - MEM32(esi + 0xB8);
    MEM32(ebp + 8) = eax;
    eax = MEM32(esi + 0xF8);
    if (CMP_EQ(eax, 0xFFFFFFFFu)) goto loc_004E2BF3; /* je: equal / zero */

loc_004E2B42: ;
    if (CMP_NE(MEM32(esi + 0xE8), ebx)) goto loc_004E2B9B; /* jne: not equal / not zero */

loc_004E2B4A: ;
    ecx = MEM32(esi + 0xB0);
    ecx = ecx | MEM32(esi + 0xB4);
    if ((ecx == 0)) goto loc_004E2B93; /* je: equal / zero */

loc_004E2B58: ;
    edi = MEM32(esi + 0xC8);
    edi = edi + eax;
    ecx = 0x10000;
    eax = edi;
    { uint64_t _r = (uint64_t)eax * (uint64_t)ecx;
      eax = (uint32_t)_r; edx = (uint32_t)(_r >> 32); }
    PUSH32(esp, ebx);
    PUSH32(esp, MEM32(esi + 0xBC));
    eax = eax + 0xFFFF;
    edx = edx + ebx + _cf; /* adc */
    PUSH32(esp, edx);
    PUSH32(esp, eax);
    MEM32(ebp + -8) = edi;
    PUSH32(esp, 0); sub_00470D50(); /* call 0x00470D50 */

loc_004E2B81: ;
    (void)0; /* cmp eax, MEM32(ebp + 8) - flags set for next jcc */
    MEM32(ebp + -20) = eax;
    if (CMP_A(eax, MEM32(ebp + 8))) goto loc_004E2B93; /* ja: above (unsigned >) */

loc_004E2B89: ;
    MEM32(esi + 0xE8) = 1;

loc_004E2B93: ;
    if (CMP_EQ(MEM32(esi + 0xE8), ebx)) goto loc_004E2BFB; /* je: equal / zero */

loc_004E2B9B: ;
    ecx = esi + 0xFC;
    edi = MEM32(ecx);
    eax = esi + 0xEC;
    edx = MEM32(eax);
    MEM32(eax) = edi;
    MEM32(ecx) = edx;
    eax = esi + 0xF0;
    edx = MEM32(eax);
    ecx = esi + 0x100;
    edi = MEM32(ecx);
    MEM32(eax) = edi;
    MEM32(ecx) = edx;
    eax = esi + 0xF4;
    edx = MEM32(eax);
    ecx = esi + 0x104;
    edi = MEM32(ecx);
    MEM32(eax) = edi;
    eax = MEM32(esi + 0xF8);
    MEM32(esi + 0xF8) = MEM32(esi + 0xF8) | 0xFFFFFFFFu;
    edi = MEM32(ebp + -8);
    MEM32(ecx) = edx;
    MEM32(esi + 0xE4) = eax;
    MEM32(esi + 0xE8) = ebx;

loc_004E2BF3: ;
    if (CMP_NE(MEM32(esi + 0xE8), ebx)) goto loc_004E2C3E; /* jne: not equal / not zero */

loc_004E2BFB: ;
    eax = MEM32(esi + 0xB0);
    eax = eax | MEM32(esi + 0xB4);
    if ((eax == 0)) goto loc_004E2C3E; /* je: equal / zero */

loc_004E2C09: ;
    edi = MEM32(esi + 0xE4);
    edi = edi + MEM32(esi + 0xC8);
    ecx = 0x10000;
    eax = edi;
    { uint64_t _r = (uint64_t)eax * (uint64_t)ecx;
      eax = (uint32_t)_r; edx = (uint32_t)(_r >> 32); }
    PUSH32(esp, ebx);
    PUSH32(esp, MEM32(esi + 0xBC));
    eax = eax + 0xFFFF;
    edx = edx + ebx + _cf; /* adc */
    PUSH32(esp, edx);
    PUSH32(esp, eax);
    MEM32(ebp + -8) = edi;
    PUSH32(esp, 0); sub_00470D50(); /* call 0x00470D50 */

loc_004E2C36: ;
    (void)0; /* cmp eax, MEM32(ebp + 8) - flags set for next jcc */
    MEM32(ebp + -20) = eax;
    if (CMP_BE(eax, MEM32(ebp + 8))) goto loc_004E2C50; /* jbe: below or equal (unsigned <=) */

loc_004E2C3E: ;
    if (CMP_NE(MEM32(esi + 0xF8), 0xFFFFFFFFu)) goto loc_004E2C50; /* jne: not equal / not zero */

loc_004E2C47: ;
    if (CMP_NE(MEM32(esi + 0x3C), ebx)) goto loc_004E2ACD; /* jne: not equal / not zero */

loc_004E2C50: ;
    eax = esi + 0xB0;
    ecx = MEM32(eax);
    ecx = ecx | MEM32(eax + 4);
    if ((ecx != 0)) goto loc_004E2C92; /* jne: not equal / not zero */

loc_004E2C5D: ;
    if (CMP_EQ(MEM32(esi + 0x64), ebx)) goto loc_004E2C92; /* je: equal / zero */

loc_004E2C62: ;
    if (CMP_NE(MEM32(esi + 0xF8), 0xFFFFFFFFu)) goto loc_004E2C70; /* jne: not equal / not zero */

loc_004E2C6B: ;
    if (CMP_NE(MEM32(esi + 0x3C), ebx)) goto loc_004E2C92; /* jne: not equal / not zero */

loc_004E2C70: ;
    if (CMP_EQ(MEM32(ebp + -36), 1)) goto loc_004E2C92; /* je: equal / zero */

loc_004E2C76: ;
    eax = esi + 0xB0;
    PUSH32(esp, eax);
    PUSH32(esp, 0); sub_0042E13B(); /* call 0x0042E13B */

loc_004E2C82: ;
    eax = MEM32(ebp + -32);
    MEM32(esi + 0xB8) = eax;
    MEM32(ebp + -16) = 1;

loc_004E2C92: ;
    eax = esi + 0xB0;
    ecx = MEM32(eax);
    ecx = ecx | MEM32(eax + 4);
    if ((ecx == 0)) goto loc_004E2D1C; /* je: equal / zero */

loc_004E2C9F: ;
    if (CMP_EQ(MEM32(ebp + -16), ebx)) goto loc_004E2CD7; /* je: equal / zero */

loc_004E2CA4: ;
    PUSH32(esp, ebx);
    eax = ebp + -24;
    PUSH32(esp, eax);
    PUSH32(esp, ebx);
    PUSH32(esp, 0); sub_004C69A3(); /* call 0x004C69A3 */

loc_004E2CAF: ;
    if (CMP_L(eax, ebx)) goto loc_004E2E77; /* jl: less (signed <) */

loc_004E2CB7: ;
    PUSH32(esp, MEM32(ebp + -24));
    PUSH32(esp, 0); sub_004C5008(); /* call 0x004C5008 */

loc_004E2CBF: ;
    PUSH32(esp, MEM32(ebp + -24));
    MEM32(ebp + -16) = eax;
    PUSH32(esp, 0); sub_004C394A(); /* call 0x004C394A */

loc_004E2CCA: ;
    if (CMP_GE(MEM32(ebp + -16), ebx)) goto loc_004E2CD7; /* jge: greater or equal (signed >=) */

loc_004E2CCF: ;
    eax = MEM32(ebp + -16);
    goto loc_004E2E77;

loc_004E2CD7: ;
    if (CMP_NE(MEM32(esi + 0xE8), ebx)) goto loc_004E2D1C; /* jne: not equal / not zero */

loc_004E2CDF: ;
    if (CMP_EQ(MEM32(ebp + 0xC), ebx)) goto loc_004E2D1C; /* je: equal / zero */

loc_004E2CE4: ;
    if (CMP_EQ(MEM32(esi + 0x40), ebx)) goto loc_004E2D1C; /* je: equal / zero */

loc_004E2CE9: ;
    if (TEST_NZ(MEM8(esi + 0x18), 1)) goto loc_004E2CF7; /* jne: not equal / not zero */

loc_004E2CEF: ;
    eax = MEM32(ebp + 8);
    if (CMP_A(MEM32(ebp + -20), eax)) goto loc_004E2D1C; /* ja: above (unsigned >) */

loc_004E2CF7: ;
    PUSH32(esp, MEM32(ebp + 0xC));
    PUSH32(esp, esi);
    PUSH32(esp, 0); sub_004E39A0(); /* call 0x004E39A0 */

loc_004E2D00: ;
    eax = MEM32(ebp + 0x14);
    (void)0; /* cmp eax, ebx - flags set for next jcc */
    MEM32(esi + 0xE8) = 1;
    if (CMP_EQ(eax, ebx)) goto loc_004E2D13; /* je: equal / zero */

loc_004E2D11: ;
    MEM32(eax) = edi;

loc_004E2D13: ;
    eax = MEM32(ebp + 0x10);
    MEM32(eax) = 1;

loc_004E2D1C: ;
    if (CMP_NE(MEM32(esi + 0x3C), ebx)) goto loc_004E2D6A; /* jne: not equal / not zero */

loc_004E2D21: ;
    eax = MEM32(esi + 0x64);
    if (CMP_EQ(eax, ebx)) goto loc_004E2D6A; /* je: equal / zero */

loc_004E2D28: ;
    if (CMP_NE(MEM32(esi + 0x68), ebx)) goto loc_004E2D73; /* jne: not equal / not zero */

loc_004E2D2D: ;
    (void)0; /* cmp MEM32(esi + 0xAC), ebx - flags set for next jcc */
    MEM32(esi + 0x68) = eax;
    eax = esi + 0x144;
    ecx = MEM32(eax);
    MEM32(eax) = ebx;
    eax = esi + 0x154;
    MEM32(esi + 0x148) = ecx;
    ecx = MEM32(eax);
    MEM32(esi + 0x64) = ebx;
    MEM32(esi + 0x158) = ecx;
    MEM32(eax) = ebx;
    MEM32(esi + 0x74) = ebx;
    if (CMP_EQ(MEM32(esi + 0xAC), ebx)) goto loc_004E2D6A; /* je: equal / zero */

loc_004E2D5E: ;
    eax = MEM32(esi + 0xC4);
    MEM32(esi + 0xF8) = eax;

loc_004E2D6A: ;
    if (CMP_EQ(MEM32(esi + 0x68), ebx)) goto loc_004E2E6B; /* je: equal / zero */

loc_004E2D73: ;
    if (CMP_NE(MEM32(esi + 0x74), ebx)) goto loc_004E2DB0; /* jne: not equal / not zero */

loc_004E2D78: ;
    PUSH32(esp, 0); sub_004C5248(); /* call 0x004C5248 */

loc_004E2D7D: ;
    eax = 0; /* xor self */
    (void)0; /* cmp MEM32(esi + 0x48), ebx - flags set for next jcc */
    MEM32(esi + 0x74) = 1;
    if (CMP_BE(MEM32(esi + 0x48), ebx)) goto loc_004E2DA7; /* jbe: below or equal (unsigned <=) */

loc_004E2D8B: ;
    ecx = MEM32(esi + 0x148);

loc_004E2D91: ;
    if (CMP_EQ(MEM32(ecx), 0x8000000Au)) goto loc_004E2DA4; /* je: equal / zero */

loc_004E2D99: ;
    eax++;
    ecx = ecx + 4;
    if (CMP_B(eax, MEM32(esi + 0x48))) goto loc_004E2D91; /* jb: below (unsigned <) */

loc_004E2DA2: ;
    goto loc_004E2DA7;

loc_004E2DA4: ;
    MEM32(esi + 0x74) = ebx;

loc_004E2DA7: ;
    if (CMP_EQ(MEM32(esi + 0x74), ebx)) goto loc_004E2E6B; /* je: equal / zero */

loc_004E2DB0: ;
    if (CMP_NE(MEM32(esi + 0x6C), ebx)) goto loc_004E2E6B; /* jne: not equal / not zero */

loc_004E2DB9: ;
    (void)0; /* cmp MEM32(esi + 0x50), ebx - flags set for next jcc */
    eax = MEM32(esi + 0x68);
    MEM32(esi + 0x6C) = eax;
    eax = esi + 0x148;
    ecx = MEM32(eax);
    MEM32(eax) = ebx;
    eax = esi + 0x158;
    MEM32(esi + 0x14C) = ecx;
    ecx = MEM32(eax);
    MEM32(esi + 0x68) = ebx;
    MEM32(esi + 0x15C) = ecx;
    MEM32(eax) = ebx;
    if (CMP_EQ(MEM32(esi + 0x50), ebx)) goto loc_004E2DEC; /* je: equal / zero */

loc_004E2DE7: ;
    if (CMP_EQ(MEM8(esi + 0x78), LO8(ebx))) goto loc_004E2E3E; /* je: equal / zero */

loc_004E2DEC: ;
    if (TEST_Z(MEM8(esi + 0x18), 2)) goto loc_004E2E10; /* je: equal / zero */

loc_004E2DF2: ;
    if (CMP_NE(MEM8(esi + 0x79), LO8(ebx))) goto loc_004E2E10; /* jne: not equal / not zero */

loc_004E2DF7: ;
    if (CMP_NE(MEM8(esi + 0x78), LO8(ebx))) goto loc_004E2E10; /* jne: not equal / not zero */

loc_004E2DFC: ;
    eax = MEM32(esi + 0x2C);
    MEM32(esi + 0x50) = eax;
    eax = MEM32(esi + 0x28);
    MEM32(esi + 0x58) = ebx;
    MEM32(esi + 0x5C) = ebx;
    MEM32(esi + 0x30) = eax;
    goto loc_004E2E3E;

loc_004E2E10: ;
    edi = 0; /* xor self */
    (void)0; /* cmp MEM32(esi + 0x48), ebx - flags set for next jcc */
    MEM32(esi + 0x50) = ebx;
    if (CMP_BE(MEM32(esi + 0x48), ebx)) goto loc_004E2E3E; /* jbe: below or equal (unsigned <=) */

loc_004E2E1A: ;
    eax = MEM32(esi + 0x138);
    if (CMP_EQ(MEM32(eax + edi * 4), ebx)) goto loc_004E2E38; /* je: equal / zero */

loc_004E2E25: ;
    eax = MEM32(esi + 0x134);
    eax = MEM32(eax + edi * 4);
    ecx = MEM32(eax);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, eax);
    PUSH32(esp, 0); RECOMP_ICALL_SAFE(MEM32(ecx + 0x14), _icall_esp); /* indirect call */
    }

loc_004E2E34: ;
    if (CMP_L(eax, ebx)) goto loc_004E2E77; /* jl: less (signed <) */

loc_004E2E38: ;
    edi++;
    if (CMP_B(edi, MEM32(esi + 0x48))) goto loc_004E2E1A; /* jb: below (unsigned <) */

loc_004E2E3E: ;
    if (CMP_EQ(MEM32(esi + 0x34), ebx)) goto loc_004E2E58; /* je: equal / zero */

loc_004E2E43: ;
    eax = MEM32(esi + 0x2C);
    MEM32(esi + 0x50) = eax;
    eax = MEM32(esi + 0x28);
    MEM32(esi + 0x34) = ebx;
    MEM32(esi + 0x58) = ebx;
    MEM32(esi + 0x5C) = ebx;
    MEM32(esi + 0x30) = eax;

loc_004E2E58: ;
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, MEM32(esi + 0x50));
    PUSH32(esp, MEM32(esi + 0x5C));
    PUSH32(esp, MEM32(esi + 0x58));
    PUSH32(esp, MEM32(esi + 0x24));
    PUSH32(esp, 0); RECOMP_ICALL_SAFE(MEM32(esi + 0x20), _icall_esp); /* indirect call */
    }

loc_004E2E67: ;
    if (CMP_L(eax, ebx)) goto loc_004E2E77; /* jl: less (signed <) */

loc_004E2E6B: ;
    eax = MEM32(ebp + 0x10);
    if (CMP_NE(MEM32(eax), 3)) goto loc_004E2E75; /* jne: not equal / not zero */

loc_004E2E73: ;
    MEM32(eax) = ebx;

loc_004E2E75: ;
    eax = 0; /* xor self */

loc_004E2E77: ;
    POP32(esp, edi);
    POP32(esp, esi);
    POP32(esp, ebx);
    esp = ebp;
    POP32(esp, ebp); /* leave */
    esp += 20; return; /* ret 16 */

}

/**
 * sub_004E2E7E
 * Original: 0x004E2E7E - 0x004E2EC5 (71 bytes, 22 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_004E2E7E(void)
{
    uint32_t ebp;
    int _flags = 0; /* fallback flag var */
    int _cf = 0; /* carry flag */

loc_004E2E7E: ;
    PUSH32(esp, ebp);
    ebp = esp;
    PUSH32(esp, ecx);
    PUSH32(esp, ecx);
    PUSH32(esp, esi);
    esi = MEM32(ebp + 8);
    eax = MEM32(esi + 0xB0);
    eax = eax | MEM32(esi + 0xB4);
    if ((eax == 0)) { sub_004E2EC5(); return; } /* je: equal / zero */

loc_004E2E95: ;
    eax = ebp + -8;
    PUSH32(esp, eax);
    PUSH32(esp, 0); sub_0042E13B(); /* call 0x0042E13B */

loc_004E2E9E: ;
    PUSH32(esp, MEM32(0x509C5C));
    eax = MEM32(ebp + -8);
    eax = eax - MEM32(esi + 0xB0);
    ecx = MEM32(ebp + -4);
    PUSH32(esp, MEM32(0x509C58));
    ecx = ecx - MEM32(esi + 0xB4) - _cf; /* sbb */
    PUSH32(esp, ecx);
    PUSH32(esp, eax);
    PUSH32(esp, 0); sub_00470D50(); /* call 0x00470D50 */

loc_004E2EC3: ;
    g_seh_ebp = ebp; sub_004E2EC7(); return; /* tail jmp 0x004E2EC7 */

}

/**
 * sub_004E2ECC
 * Original: 0x004E2ECC - 0x004E2EE1 (21 bytes, 11 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_004E2ECC(void)
{

loc_004E2ECC: ;
    PUSH32(esp, edi);
    edi = ecx;
    ecx = edx;
    ecx = ecx >> 2;
    eax = 0; /* xor self */
    { uint32_t _i; for (_i = 0; _i < ecx; _i++) MEM32(edi + _i*4) = eax; }
    edi += ecx * 4; ecx = 0; /* rep stosd */
    ecx = edx;
    ecx = ecx & 3;
    memset((void*)XBOX_PTR(edi), (uint8_t)eax, ecx);
    edi += ecx; ecx = 0; /* rep stosb */
    POP32(esp, edi);
    esp += 4; return; /* ret */

}

/**
 * sub_004E2EE1
 * Original: 0x004E2EE1 - 0x004E2EF6 (21 bytes, 7 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_004E2EE1(void)
{
    uint64_t mm0;

loc_004E2EE1: ;
    /* pxor mm0, mm0 (MMX/SIMD integer) */
    /* SSE: movq qword ptr [ecx], mm0 */
    /* SSE: movq qword ptr [ecx + 8], mm0 */
    /* SSE: movq qword ptr [ecx + 0x10], mm0 */
    /* SSE: movq qword ptr [ecx + 0x18], mm0 */
    /* emms - empty MMX state */
    esp += 4; return; /* ret */

}

/**
 * sub_004E2EF6
 * Original: 0x004E2EF6 - 0x004E2F1B (37 bytes, 11 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_004E2EF6(void)
{
    uint64_t mm0;

loc_004E2EF6: ;
    /* pxor mm0, mm0 (MMX/SIMD integer) */
    /* SSE: movq qword ptr [ecx], mm0 */
    /* SSE: movq qword ptr [ecx + 8], mm0 */
    /* SSE: movq qword ptr [ecx + 0x10], mm0 */
    /* SSE: movq qword ptr [ecx + 0x18], mm0 */
    /* SSE: movq qword ptr [ecx + 0x20], mm0 */
    /* SSE: movq qword ptr [ecx + 0x28], mm0 */
    /* SSE: movq qword ptr [ecx + 0x30], mm0 */
    /* SSE: movq qword ptr [ecx + 0x38], mm0 */
    /* emms - empty MMX state */
    esp += 4; return; /* ret */

}

/**
 * sub_004E2F1B
 * Original: 0x004E2F1B - 0x004E2F60 (69 bytes, 19 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_004E2F1B(void)
{
    uint64_t mm0;

loc_004E2F1B: ;
    /* pxor mm0, mm0 (MMX/SIMD integer) */
    /* SSE: movq qword ptr [ecx], mm0 */
    /* SSE: movq qword ptr [ecx + 8], mm0 */
    /* SSE: movq qword ptr [ecx + 0x10], mm0 */
    /* SSE: movq qword ptr [ecx + 0x18], mm0 */
    /* SSE: movq qword ptr [ecx + 0x20], mm0 */
    /* SSE: movq qword ptr [ecx + 0x28], mm0 */
    /* SSE: movq qword ptr [ecx + 0x30], mm0 */
    /* SSE: movq qword ptr [ecx + 0x38], mm0 */
    /* SSE: movq qword ptr [ecx + 0x40], mm0 */
    /* SSE: movq qword ptr [ecx + 0x48], mm0 */
    /* SSE: movq qword ptr [ecx + 0x50], mm0 */
    /* SSE: movq qword ptr [ecx + 0x58], mm0 */
    /* SSE: movq qword ptr [ecx + 0x60], mm0 */
    /* SSE: movq qword ptr [ecx + 0x68], mm0 */
    /* SSE: movq qword ptr [ecx + 0x70], mm0 */
    /* SSE: movq qword ptr [ecx + 0x78], mm0 */
    /* emms - empty MMX state */
    esp += 4; return; /* ret */

}

/**
 * sub_004E2F60
 * Original: 0x004E2F60 - 0x004E2FAA (74 bytes, 20 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_004E2F60(void)
{
    float xmm0;

loc_004E2F60: ;
    xmm0 = 0.0f; /* xorps self = zero */
    MEMF(ecx) = xmm0; /* movaps */
    MEMF(ecx + 0x10) = xmm0; /* movaps */
    MEMF(ecx + 0x20) = xmm0; /* movaps */
    MEMF(ecx + 0x30) = xmm0; /* movaps */
    MEMF(ecx + 0x40) = xmm0; /* movaps */
    MEMF(ecx + 0x50) = xmm0; /* movaps */
    MEMF(ecx + 0x60) = xmm0; /* movaps */
    MEMF(ecx + 0x70) = xmm0; /* movaps */
    ecx = ecx + 0x80;
    MEMF(ecx) = xmm0; /* movaps */
    MEMF(ecx + 0x10) = xmm0; /* movaps */
    MEMF(ecx + 0x20) = xmm0; /* movaps */
    MEMF(ecx + 0x30) = xmm0; /* movaps */
    MEMF(ecx + 0x40) = xmm0; /* movaps */
    MEMF(ecx + 0x50) = xmm0; /* movaps */
    MEMF(ecx + 0x60) = xmm0; /* movaps */
    MEMF(ecx + 0x70) = xmm0; /* movaps */
    /* emms - empty MMX state */
    esp += 4; return; /* ret */

}

/**
 * sub_004E2FAA
 * Original: 0x004E2FAA - 0x004E30A1 (247 bytes, 83 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_004E2FAA(void)
{
    uint32_t ebp;
    int _flags = 0; /* fallback flag var */
    uint64_t mm0, mm1, mm2, mm3, mm4, mm5, mm6, mm7;

loc_004E2FAA: ;
    PUSH32(esp, ebp);
    ebp = esp;
    PUSH32(esp, esi);
    PUSH32(esp, edi);
    esi = MEM32(ebp + 8);
    edi = MEM32(ebp + 0x1C);
    ecx = MEM32(ebp + 0xC);
    edx = MEM32(ebp + 0x10);
    eax = 8;

loc_004E2FC0: ;
    /* SSE: movq mm2, qword ptr [ecx] */
    /* SSE: movq mm3, qword ptr [edx] */
    /* pxor mm4, mm4 (MMX/SIMD integer) */
    /* pxor mm6, mm6 (MMX/SIMD integer) */
    /* pxor mm0, mm0 (MMX/SIMD integer) */
    /* pxor mm1, mm1 (MMX/SIMD integer) */
    /* TODO: punpcklbw mm4, mm2 */
    /* TODO: punpckhbw mm6, mm2 */
    /* SSE: movq mm5, mm4 */
    /* SSE: movq mm7, mm6 */
    /* TODO: punpckhwd mm5, mm0 */
    /* TODO: punpckhwd mm7, mm0 */
    /* TODO: punpcklwd mm4, mm0 */
    /* TODO: punpcklwd mm6, mm0 */
    /* pxor mm2, mm2 (MMX/SIMD integer) */
    ecx = ecx + MEM32(ebp + 0x18);
    edx = edx + MEM32(ebp + 0x18);
    /* TODO: punpcklbw mm0, mm3 */
    /* TODO: punpcklwd mm1, mm0 */
    /* TODO: punpckhwd mm2, mm0 */
    /* por mm4, mm1 (MMX/SIMD integer) */
    /* por mm5, mm2 (MMX/SIMD integer) */
    /* SSE: movq mm0, qword ptr [esi] */
    /* SSE: movq mm1, qword ptr [esi + 8] */
    /* pxor mm2, mm2 (MMX/SIMD integer) */
    /* TODO: punpckhbw mm2, mm3 */
    /* pxor mm3, mm3 (MMX/SIMD integer) */
    /* TODO: punpcklwd mm3, mm2 */
    /* por mm6, mm3 (MMX/SIMD integer) */
    /* pxor mm3, mm3 (MMX/SIMD integer) */
    /* TODO: punpckhwd mm3, mm2 */
    /* por mm7, mm3 (MMX/SIMD integer) */
    esi = esi + MEM32(ebp + 0x14);
    /* pxor mm2, mm2 (MMX/SIMD integer) */
    /* SSE: movq mm3, mm0 */
    /* TODO: punpcklbw mm0, mm2 */
    /* por mm0, mm4 (MMX/SIMD integer) */
    /* SSE: movq qword ptr [edi], mm0 */
    /* TODO: punpckhbw mm3, mm2 */
    /* por mm3, mm5 (MMX/SIMD integer) */
    /* SSE: movq qword ptr [edi + 8], mm3 */
    /* SSE: movq mm3, mm1 */
    /* TODO: punpcklbw mm1, mm2 */
    /* por mm1, mm6 (MMX/SIMD integer) */
    /* SSE: movq qword ptr [edi + 0x10], mm1 */
    /* TODO: punpckhbw mm3, mm2 */
    /* por mm3, mm7 (MMX/SIMD integer) */
    /* SSE: movq qword ptr [edi + 0x18], mm3 */
    /* SSE: movq mm0, qword ptr [esi] */
    /* SSE: movq mm1, qword ptr [esi + 8] */
    edi = edi + MEM32(ebp + 0x20);
    /* pxor mm2, mm2 (MMX/SIMD integer) */
    /* SSE: movq mm3, mm0 */
    /* TODO: punpcklbw mm0, mm2 */
    /* por mm0, mm4 (MMX/SIMD integer) */
    /* SSE: movq qword ptr [edi], mm0 */
    /* TODO: punpckhbw mm3, mm2 */
    /* por mm3, mm5 (MMX/SIMD integer) */
    /* SSE: movq qword ptr [edi + 8], mm3 */
    /* SSE: movq mm3, mm1 */
    /* TODO: punpcklbw mm1, mm2 */
    /* por mm1, mm6 (MMX/SIMD integer) */
    /* SSE: movq qword ptr [edi + 0x10], mm1 */
    /* TODO: punpckhbw mm3, mm2 */
    /* por mm3, mm7 (MMX/SIMD integer) */
    /* SSE: movq qword ptr [edi + 0x18], mm3 */
    esi = esi + MEM32(ebp + 0x14);
    edi = edi + MEM32(ebp + 0x20);
    eax--;
    if ((eax != 0)) goto loc_004E2FC0; /* jne: not equal / not zero */

loc_004E309B: ;
    POP32(esp, edi);
    POP32(esp, esi);
    POP32(esp, ebp);
    esp += 32; return; /* ret 28 */

}

/**
 * sub_004E30A1
 * Original: 0x004E30A1 - 0x004E31FE (349 bytes, 125 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_004E30A1(void)
{
    uint32_t ebp;
    int _flags = 0; /* fallback flag var */

loc_004E30A1: ;
    PUSH32(esp, ebp);
    ebp = esp;
    esp = esp - 0x21C;
    PUSH32(esp, ebx);
    PUSH32(esp, esi);
    esi = MEM32(ebp + 8);
    ebx = esi;
    ebx = ebx << 4;
    eax = ebx;
    eax = eax - MEM32(ebp + 0x1C);
    ecx = esi;
    MEM32(ebp + -8) = eax;
    eax = MEM32(ebp + 0xC);
    eax = eax << 4;
    eax = eax - MEM32(ebp + 0x20);
    ecx = ecx << 3;
    MEM32(ebp + 0x20) = eax;
    eax = esi;
    eax = eax << 5;
    edx = eax;
    eax = MEM32(ebp + 0x28);
    eax = eax - edx;
    if (CMP_EQ(MEM32(ebp + 0xC), 0)) goto loc_004E31F6; /* je: equal / zero */

loc_004E30E3: ;
    PUSH32(esp, edi);
    edi = ecx;
    ecx = MEM32(ebp + 0x28);
    edi = (uint32_t)((int32_t)edi * (int32_t)7);
    edx = ebx;
    ecx = (uint32_t)((int32_t)ecx * (int32_t)0xF);
    edx = (uint32_t)((int32_t)edx * (int32_t)0xF);
    ecx = ecx + eax;
    MEM32(ebp + -20) = edx;
    MEM32(ebp + -28) = edi;
    MEM32(ebp + -24) = ecx;

loc_004E30FF: ;
    MEM32(ebp + 0xC) = MEM32(ebp + 0xC) - 1;
    (void)0; /* test esi, esi - flags set for next jcc */
    MEM32(ebp + 0x1C) = esi;
    if (TEST_Z(esi, esi)) goto loc_004E31DC; /* je: equal / zero */

loc_004E310D: ;
    MEM32(ebp + 0x1C) = MEM32(ebp + 0x1C) - 1;
    if ((MEM32(ebp + 0x1C) != 0)) goto loc_004E3118; /* jne: not equal / not zero */

loc_004E3112: ;
    if (CMP_NE(MEM32(ebp + -8), 0)) goto loc_004E3128; /* jne: not equal / not zero */

loc_004E3118: ;
    if (CMP_NE(MEM32(ebp + 0xC), 0)) goto loc_004E31A4; /* jne: not equal / not zero */

loc_004E3122: ;
    if (CMP_EQ(MEM32(ebp + 0x20), 0)) goto loc_004E31A4; /* je: equal / zero */

loc_004E3128: ;
    PUSH32(esp, 0x20);
    eax = ebp + -540;
    PUSH32(esp, eax);
    eax = esi;
    eax = eax << 3;
    PUSH32(esp, eax);
    PUSH32(esp, ebx);
    PUSH32(esp, MEM32(ebp + 0x18));
    PUSH32(esp, MEM32(ebp + 0x14));
    PUSH32(esp, MEM32(ebp + 0x10));
    PUSH32(esp, 0); sub_004E2FAA(); /* call 0x004E2FAA */

loc_004E3146: ;
    (void)0; /* cmp MEM32(ebp + 0x1C), 0 - flags set for next jcc */
    PUSH32(esp, 0x10);
    POP32(esp, ecx);
    eax = ecx;
    if (CMP_NE(MEM32(ebp + 0x1C), 0)) goto loc_004E3156; /* jne: not equal / not zero */

loc_004E3151: ;
    PUSH32(esp, ecx);
    POP32(esp, eax);
    eax = eax - MEM32(ebp + -8);

loc_004E3156: ;
    if (CMP_NE(MEM32(ebp + 0xC), 0)) goto loc_004E3164; /* jne: not equal / not zero */

loc_004E315C: ;
    PUSH32(esp, 0x10);
    POP32(esp, ecx);
    ecx = ecx - MEM32(ebp + 0x20);
    if ((ecx == 0)) goto loc_004E31BF; /* je: equal / zero */

loc_004E3164: ;
    edi = MEM32(ebp + 0x24);
    eax = eax + eax;
    MEM32(ebp + -16) = eax;
    MEM32(ebp + -4) = edi;
    edx = ebp + -540;
    MEM32(ebp + -12) = ecx;

loc_004E3178: ;
    ecx = MEM32(ebp + -16);
    eax = ecx;
    ecx = ecx >> 2;
    esi = edx;
    memcpy((void*)XBOX_PTR(edi), (void*)XBOX_PTR(esi), ecx * 4);
    esi += ecx * 4; edi += ecx * 4; ecx = 0; /* rep movsd */
    ecx = eax;
    ecx = ecx & 3;
    memcpy((void*)XBOX_PTR(edi), (void*)XBOX_PTR(esi), ecx);
    esi += ecx; edi += ecx; ecx = 0; /* rep movsb */
    edi = MEM32(ebp + -4);
    edi = edi + MEM32(ebp + 0x28);
    edx = edx + 0x20;
    MEM32(ebp + -12) = MEM32(ebp + -12) - 1;
    MEM32(ebp + -4) = edi;
    if ((MEM32(ebp + -12) != 0)) goto loc_004E3178; /* jne: not equal / not zero */

loc_004E319C: ;
    esi = MEM32(ebp + 8);
    edi = MEM32(ebp + -28);
    goto loc_004E31BF;

loc_004E31A4: ;
    PUSH32(esp, MEM32(ebp + 0x28));
    eax = esi;
    PUSH32(esp, MEM32(ebp + 0x24));
    eax = eax << 3;
    PUSH32(esp, eax);
    PUSH32(esp, ebx);
    PUSH32(esp, MEM32(ebp + 0x18));
    PUSH32(esp, MEM32(ebp + 0x14));
    PUSH32(esp, MEM32(ebp + 0x10));
    PUSH32(esp, 0); sub_004E2FAA(); /* call 0x004E2FAA */

loc_004E31BF: ;
    MEM32(ebp + 0x10) = MEM32(ebp + 0x10) + 0x10;
    MEM32(ebp + 0x14) = MEM32(ebp + 0x14) + 8;
    MEM32(ebp + 0x18) = MEM32(ebp + 0x18) + 8;
    MEM32(ebp + 0x24) = MEM32(ebp + 0x24) + 0x20;
    if (CMP_NE(MEM32(ebp + 0x1C), 0)) goto loc_004E310D; /* jne: not equal / not zero */

loc_004E31D9: ;
    edx = MEM32(ebp + -20);

loc_004E31DC: ;
    eax = MEM32(ebp + -24);
    MEM32(ebp + 0x10) = MEM32(ebp + 0x10) + edx;
    MEM32(ebp + 0x14) = MEM32(ebp + 0x14) + edi;
    MEM32(ebp + 0x18) = MEM32(ebp + 0x18) + edi;
    MEM32(ebp + 0x24) = MEM32(ebp + 0x24) + eax;
    if (CMP_NE(MEM32(ebp + 0xC), 0)) goto loc_004E30FF; /* jne: not equal / not zero */

loc_004E31F5: ;
    POP32(esp, edi);

loc_004E31F6: ;
    /* emms - empty MMX state */
    POP32(esp, esi);
    POP32(esp, ebx);
    esp = ebp;
    POP32(esp, ebp); /* leave */
    esp += 40; return; /* ret 36 */

}

/**
 * sub_004E31FE
 * Original: 0x004E31FE - 0x004E3251 (83 bytes, 28 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_004E31FE(void)
{
    uint32_t ebp;
    float xmm1, xmm2;
    uint64_t mm0, mm1, mm3, mm4, mm6;

loc_004E31FE: ;
    PUSH32(esp, ebp);
    ebp = esp;
    PUSH32(esp, ebx);
    PUSH32(esp, esi);
    PUSH32(esp, edi);
    esi = MEM32(ebp + 8);
    edi = MEM32(ebp + 0x1C);
    ecx = MEM32(ebp + 0xC);
    edx = MEM32(ebp + 0x10);
    eax = 0x10;
    mm0 = MEM32(ecx); /* movd */
    /* TODO: punpcklbw mm0, mm4 */
    /* SSE: movq mm3, mm0 */
    /* TODO: punpcklwd mm0, mm4 */
    /* TODO: paddd mm0, mm6 */
    /* TODO: cvtpi2ps xmm1, mm0 */
    /* shufps xmm1, xmm1, 0x50 */
    mm0 = MEM32(edx); /* movd */
    /* TODO: punpcklbw mm0, mm4 */
    /* SSE: movq mm1, mm0 */
    /* TODO: punpcklwd mm0, mm4 */
    /* TODO: paddd mm0, mm6 */
    /* TODO: cvtpi2ps xmm2, mm0 */
    /* shufps xmm2, xmm2, 0x50 */
    /* TODO: punpckhwd mm3, mm1 */
    mm0 = MEM32(esi); /* movd */
    ebx = 0x4E3251;
    g_seh_ebp = ebp; sub_004E3304(); return; /* tail jmp 0x004E3304 */

}

/**
 * sub_004E33E9
 * Original: 0x004E33E9 - 0x004E35C5 (476 bytes, 162 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_004E33E9(void)
{
    uint32_t ebp;
    int _flags = 0; /* fallback flag var */
    float xmm4, xmm5, xmm6, xmm7;
    uint64_t mm4, mm5, mm6, mm7;

loc_004E33E9: ;
    PUSH32(esp, ebp);
    ebp = esp;
    esp = esp - 0x468;
    eax = MEM32(ebp + 0xC);
    ecx = MEM32(ebp + 0x28);
    eax = eax << 4;
    eax = eax - MEM32(ebp + 0x20);
    PUSH32(esp, ebx);
    MEM32(ebp + 0x20) = eax;
    PUSH32(esp, esi);
    esi = MEM32(ebp + 8);
    eax = esi;
    eax = eax << 6;
    ecx = ecx - eax;
    PUSH32(esp, edi);
    eax = 0x400054FB;
    MEM32(ebp + -24) = eax;
    MEM32(ebp + -20) = eax;
    PUSH32(esp, 0xFFFFFF80u);
    POP32(esp, eax);
    MEM32(ebp + -16) = eax;
    MEM32(ebp + -12) = eax;
    eax = 0xFFF0FFF0u;
    MEM32(ebp + -32) = eax;
    MEM32(ebp + -28) = eax;
    eax = 0x47812700;
    MEM32(ebp + -88) = eax;
    MEM32(ebp + -84) = eax;
    MEM32(ebp + -80) = eax;
    MEM32(ebp + -76) = eax;
    eax = 0xC6D02000u;
    ebx = esi;
    ebx = ebx << 4;
    MEM32(ebp + -72) = eax;
    MEM32(ebp + -68) = eax;
    MEM32(ebp + -64) = eax;
    MEM32(ebp + -60) = eax;
    eax = 0xC6483000u;
    edi = ebx;
    edi = edi - MEM32(ebp + 0x1C);
    MEM32(ebp + -104) = eax;
    MEM32(ebp + -100) = eax;
    MEM32(ebp + -96) = eax;
    MEM32(ebp + -92) = eax;
    eax = 0x474C4A00;
    edx = esi;
    edx = edx << 3;
    MEM32(ebp + -40) = edi;
    MEM32(ebp + -56) = eax;
    MEM32(ebp + -52) = eax;
    MEM32(ebp + -48) = eax;
    MEM32(ebp + -44) = eax;
    /* pxor mm4, mm4 (MMX/SIMD integer) */
    /* SSE: movq mm5, qword ptr [ebp - 0x18] */
    /* SSE: movq mm6, qword ptr [ebp - 0x10] */
    /* SSE: movq mm7, qword ptr [ebp - 0x20] */
    xmm4 = MEMF(ebp + -88); /* movups */
    xmm5 = MEMF(ebp + -72); /* movups */
    xmm6 = MEMF(ebp + -104); /* movups */
    xmm7 = MEMF(ebp + -56); /* movups */
    if (CMP_EQ(MEM32(ebp + 0xC), 0)) goto loc_004E35BC; /* je: equal / zero */

loc_004E34AC: ;
    eax = ebx;
    edx = (uint32_t)((int32_t)edx * (int32_t)7);
    eax = (uint32_t)((int32_t)eax * (int32_t)0xF);
    MEM32(ebp + -12) = eax;
    eax = MEM32(ebp + 0x28);
    eax = (uint32_t)((int32_t)eax * (int32_t)0xF);
    eax = eax + ecx;
    MEM32(ebp + -20) = edx;
    MEM32(ebp + -28) = eax;

loc_004E34C5: ;
    MEM32(ebp + 0xC) = MEM32(ebp + 0xC) - 1;
    (void)0; /* test esi, esi - flags set for next jcc */
    MEM32(ebp + 0x1C) = esi;
    if (TEST_Z(esi, esi)) goto loc_004E35A0; /* je: equal / zero */

loc_004E34D3: ;
    MEM32(ebp + 0x1C) = MEM32(ebp + 0x1C) - 1;
    if ((MEM32(ebp + 0x1C) != 0)) goto loc_004E34DC; /* jne: not equal / not zero */

loc_004E34D8: ;
    if (TEST_NZ(edi, edi)) goto loc_004E34EC; /* jne: not equal / not zero */

loc_004E34DC: ;
    if (CMP_NE(MEM32(ebp + 0xC), 0)) goto loc_004E3568; /* jne: not equal / not zero */

loc_004E34E6: ;
    if (CMP_EQ(MEM32(ebp + 0x20), 0)) goto loc_004E3568; /* je: equal / zero */

loc_004E34EC: ;
    PUSH32(esp, 0x40);
    eax = ebp + -1128;
    PUSH32(esp, eax);
    eax = esi;
    eax = eax << 3;
    PUSH32(esp, eax);
    PUSH32(esp, ebx);
    PUSH32(esp, MEM32(ebp + 0x18));
    PUSH32(esp, MEM32(ebp + 0x14));
    PUSH32(esp, MEM32(ebp + 0x10));
    PUSH32(esp, 0); sub_004E31FE(); /* call 0x004E31FE */

loc_004E350A: ;
    (void)0; /* cmp MEM32(ebp + 0x1C), 0 - flags set for next jcc */
    PUSH32(esp, 0x10);
    POP32(esp, ecx);
    eax = ecx;
    if (CMP_NE(MEM32(ebp + 0x1C), 0)) goto loc_004E3519; /* jne: not equal / not zero */

loc_004E3515: ;
    PUSH32(esp, ecx);
    POP32(esp, eax);
    eax = eax - edi;

loc_004E3519: ;
    if (CMP_NE(MEM32(ebp + 0xC), 0)) goto loc_004E3527; /* jne: not equal / not zero */

loc_004E351F: ;
    PUSH32(esp, 0x10);
    POP32(esp, ecx);
    ecx = ecx - MEM32(ebp + 0x20);
    if ((ecx == 0)) goto loc_004E3583; /* je: equal / zero */

loc_004E3527: ;
    edi = MEM32(ebp + 0x24);
    eax = eax << 2;
    MEM32(ebp + -36) = eax;
    MEM32(ebp + -4) = edi;
    edx = ebp + -1128;
    MEM32(ebp + -8) = ecx;

loc_004E353C: ;
    ecx = MEM32(ebp + -36);
    eax = ecx;
    ecx = ecx >> 2;
    esi = edx;
    memcpy((void*)XBOX_PTR(edi), (void*)XBOX_PTR(esi), ecx * 4);
    esi += ecx * 4; edi += ecx * 4; ecx = 0; /* rep movsd */
    ecx = eax;
    ecx = ecx & 3;
    memcpy((void*)XBOX_PTR(edi), (void*)XBOX_PTR(esi), ecx);
    esi += ecx; edi += ecx; ecx = 0; /* rep movsb */
    edi = MEM32(ebp + -4);
    edi = edi + MEM32(ebp + 0x28);
    edx = edx + 0x40;
    MEM32(ebp + -8) = MEM32(ebp + -8) - 1;
    MEM32(ebp + -4) = edi;
    if ((MEM32(ebp + -8) != 0)) goto loc_004E353C; /* jne: not equal / not zero */

loc_004E3560: ;
    esi = MEM32(ebp + 8);
    edi = MEM32(ebp + -40);
    goto loc_004E3583;

loc_004E3568: ;
    PUSH32(esp, MEM32(ebp + 0x28));
    eax = esi;
    PUSH32(esp, MEM32(ebp + 0x24));
    eax = eax << 3;
    PUSH32(esp, eax);
    PUSH32(esp, ebx);
    PUSH32(esp, MEM32(ebp + 0x18));
    PUSH32(esp, MEM32(ebp + 0x14));
    PUSH32(esp, MEM32(ebp + 0x10));
    PUSH32(esp, 0); sub_004E31FE(); /* call 0x004E31FE */

loc_004E3583: ;
    MEM32(ebp + 0x10) = MEM32(ebp + 0x10) + 0x10;
    MEM32(ebp + 0x14) = MEM32(ebp + 0x14) + 8;
    MEM32(ebp + 0x18) = MEM32(ebp + 0x18) + 8;
    MEM32(ebp + 0x24) = MEM32(ebp + 0x24) + 0x40;
    if (CMP_NE(MEM32(ebp + 0x1C), 0)) goto loc_004E34D3; /* jne: not equal / not zero */

loc_004E359D: ;
    edx = MEM32(ebp + -20);

loc_004E35A0: ;
    eax = MEM32(ebp + -12);
    MEM32(ebp + 0x10) = MEM32(ebp + 0x10) + eax;
    eax = MEM32(ebp + -28);
    MEM32(ebp + 0x14) = MEM32(ebp + 0x14) + edx;
    MEM32(ebp + 0x18) = MEM32(ebp + 0x18) + edx;
    MEM32(ebp + 0x24) = MEM32(ebp + 0x24) + eax;
    if (CMP_NE(MEM32(ebp + 0xC), 0)) goto loc_004E34C5; /* jne: not equal / not zero */

loc_004E35BC: ;
    /* emms - empty MMX state */
    POP32(esp, edi);
    POP32(esp, esi);
    POP32(esp, ebx);
    esp = ebp;
    POP32(esp, ebp); /* leave */
    esp += 40; return; /* ret 36 */

}

/**
 * sub_004E35C5
 * Original: 0x004E35C5 - 0x004E3618 (83 bytes, 28 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_004E35C5(void)
{
    uint32_t ebp;
    float xmm1, xmm2;
    uint64_t mm0, mm1, mm3, mm4, mm6;

loc_004E35C5: ;
    PUSH32(esp, ebp);
    ebp = esp;
    PUSH32(esp, ebx);
    PUSH32(esp, esi);
    PUSH32(esp, edi);
    esi = MEM32(ebp + 8);
    edi = MEM32(ebp + 0x1C);
    ecx = MEM32(ebp + 0xC);
    edx = MEM32(ebp + 0x10);
    eax = 0x10;
    mm0 = MEM32(ecx); /* movd */
    /* TODO: punpcklbw mm0, mm4 */
    /* SSE: movq mm3, mm0 */
    /* TODO: punpcklwd mm0, mm4 */
    /* TODO: paddd mm0, mm6 */
    /* TODO: cvtpi2ps xmm1, mm0 */
    /* shufps xmm1, xmm1, 0x50 */
    mm0 = MEM32(edx); /* movd */
    /* TODO: punpcklbw mm0, mm4 */
    /* SSE: movq mm1, mm0 */
    /* TODO: punpcklwd mm0, mm4 */
    /* TODO: paddd mm0, mm6 */
    /* TODO: cvtpi2ps xmm2, mm0 */
    /* shufps xmm2, xmm2, 0x50 */
    /* TODO: punpckhwd mm3, mm1 */
    mm0 = MEM32(esi); /* movd */
    ebx = 0x4E3618;
    g_seh_ebp = ebp; sub_004E36CB(); return; /* tail jmp 0x004E36CB */

}

/**
 * sub_004E37C4
 * Original: 0x004E37C4 - 0x004E39A0 (476 bytes, 162 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_004E37C4(void)
{
    uint32_t ebp;
    int _flags = 0; /* fallback flag var */
    float xmm4, xmm5, xmm6, xmm7;
    uint64_t mm4, mm5, mm6, mm7;

loc_004E37C4: ;
    PUSH32(esp, ebp);
    ebp = esp;
    esp = esp - 0x468;
    eax = MEM32(ebp + 0xC);
    ecx = MEM32(ebp + 0x28);
    eax = eax << 4;
    eax = eax - MEM32(ebp + 0x20);
    PUSH32(esp, ebx);
    MEM32(ebp + 0x20) = eax;
    PUSH32(esp, esi);
    esi = MEM32(ebp + 8);
    eax = esi;
    eax = eax << 6;
    ecx = ecx - eax;
    PUSH32(esp, edi);
    eax = 0x400054FB;
    MEM32(ebp + -24) = eax;
    MEM32(ebp + -20) = eax;
    PUSH32(esp, 0xFFFFFF80u);
    POP32(esp, eax);
    MEM32(ebp + -16) = eax;
    MEM32(ebp + -12) = eax;
    eax = 0xFFF0FFF0u;
    MEM32(ebp + -32) = eax;
    MEM32(ebp + -28) = eax;
    eax = 0x47812700;
    MEM32(ebp + -88) = eax;
    MEM32(ebp + -84) = eax;
    MEM32(ebp + -80) = eax;
    MEM32(ebp + -76) = eax;
    eax = 0xC6D02000u;
    ebx = esi;
    ebx = ebx << 4;
    MEM32(ebp + -72) = eax;
    MEM32(ebp + -68) = eax;
    MEM32(ebp + -64) = eax;
    MEM32(ebp + -60) = eax;
    eax = 0xC6483000u;
    edi = ebx;
    edi = edi - MEM32(ebp + 0x1C);
    MEM32(ebp + -104) = eax;
    MEM32(ebp + -100) = eax;
    MEM32(ebp + -96) = eax;
    MEM32(ebp + -92) = eax;
    eax = 0x474C4A00;
    edx = esi;
    edx = edx << 3;
    MEM32(ebp + -40) = edi;
    MEM32(ebp + -56) = eax;
    MEM32(ebp + -52) = eax;
    MEM32(ebp + -48) = eax;
    MEM32(ebp + -44) = eax;
    /* pxor mm4, mm4 (MMX/SIMD integer) */
    /* SSE: movq mm5, qword ptr [ebp - 0x18] */
    /* SSE: movq mm6, qword ptr [ebp - 0x10] */
    /* SSE: movq mm7, qword ptr [ebp - 0x20] */
    xmm4 = MEMF(ebp + -88); /* movups */
    xmm5 = MEMF(ebp + -72); /* movups */
    xmm6 = MEMF(ebp + -104); /* movups */
    xmm7 = MEMF(ebp + -56); /* movups */
    if (CMP_EQ(MEM32(ebp + 0xC), 0)) goto loc_004E3997; /* je: equal / zero */

loc_004E3887: ;
    eax = ebx;
    edx = (uint32_t)((int32_t)edx * (int32_t)7);
    eax = (uint32_t)((int32_t)eax * (int32_t)0xF);
    MEM32(ebp + -12) = eax;
    eax = MEM32(ebp + 0x28);
    eax = (uint32_t)((int32_t)eax * (int32_t)0xF);
    eax = eax + ecx;
    MEM32(ebp + -20) = edx;
    MEM32(ebp + -28) = eax;

loc_004E38A0: ;
    MEM32(ebp + 0xC) = MEM32(ebp + 0xC) - 1;
    (void)0; /* test esi, esi - flags set for next jcc */
    MEM32(ebp + 0x1C) = esi;
    if (TEST_Z(esi, esi)) goto loc_004E397B; /* je: equal / zero */

loc_004E38AE: ;
    MEM32(ebp + 0x1C) = MEM32(ebp + 0x1C) - 1;
    if ((MEM32(ebp + 0x1C) != 0)) goto loc_004E38B7; /* jne: not equal / not zero */

loc_004E38B3: ;
    if (TEST_NZ(edi, edi)) goto loc_004E38C7; /* jne: not equal / not zero */

loc_004E38B7: ;
    if (CMP_NE(MEM32(ebp + 0xC), 0)) goto loc_004E3943; /* jne: not equal / not zero */

loc_004E38C1: ;
    if (CMP_EQ(MEM32(ebp + 0x20), 0)) goto loc_004E3943; /* je: equal / zero */

loc_004E38C7: ;
    PUSH32(esp, 0x40);
    eax = ebp + -1128;
    PUSH32(esp, eax);
    eax = esi;
    eax = eax << 3;
    PUSH32(esp, eax);
    PUSH32(esp, ebx);
    PUSH32(esp, MEM32(ebp + 0x18));
    PUSH32(esp, MEM32(ebp + 0x14));
    PUSH32(esp, MEM32(ebp + 0x10));
    PUSH32(esp, 0); sub_004E35C5(); /* call 0x004E35C5 */

loc_004E38E5: ;
    (void)0; /* cmp MEM32(ebp + 0x1C), 0 - flags set for next jcc */
    PUSH32(esp, 0x10);
    POP32(esp, ecx);
    eax = ecx;
    if (CMP_NE(MEM32(ebp + 0x1C), 0)) goto loc_004E38F4; /* jne: not equal / not zero */

loc_004E38F0: ;
    PUSH32(esp, ecx);
    POP32(esp, eax);
    eax = eax - edi;

loc_004E38F4: ;
    if (CMP_NE(MEM32(ebp + 0xC), 0)) goto loc_004E3902; /* jne: not equal / not zero */

loc_004E38FA: ;
    PUSH32(esp, 0x10);
    POP32(esp, ecx);
    ecx = ecx - MEM32(ebp + 0x20);
    if ((ecx == 0)) goto loc_004E395E; /* je: equal / zero */

loc_004E3902: ;
    edi = MEM32(ebp + 0x24);
    eax = eax << 2;
    MEM32(ebp + -36) = eax;
    MEM32(ebp + -4) = edi;
    edx = ebp + -1128;
    MEM32(ebp + -8) = ecx;

loc_004E3917: ;
    ecx = MEM32(ebp + -36);
    eax = ecx;
    ecx = ecx >> 2;
    esi = edx;
    memcpy((void*)XBOX_PTR(edi), (void*)XBOX_PTR(esi), ecx * 4);
    esi += ecx * 4; edi += ecx * 4; ecx = 0; /* rep movsd */
    ecx = eax;
    ecx = ecx & 3;
    memcpy((void*)XBOX_PTR(edi), (void*)XBOX_PTR(esi), ecx);
    esi += ecx; edi += ecx; ecx = 0; /* rep movsb */
    edi = MEM32(ebp + -4);
    edi = edi + MEM32(ebp + 0x28);
    edx = edx + 0x40;
    MEM32(ebp + -8) = MEM32(ebp + -8) - 1;
    MEM32(ebp + -4) = edi;
    if ((MEM32(ebp + -8) != 0)) goto loc_004E3917; /* jne: not equal / not zero */

loc_004E393B: ;
    esi = MEM32(ebp + 8);
    edi = MEM32(ebp + -40);
    goto loc_004E395E;

loc_004E3943: ;
    PUSH32(esp, MEM32(ebp + 0x28));
    eax = esi;
    PUSH32(esp, MEM32(ebp + 0x24));
    eax = eax << 3;
    PUSH32(esp, eax);
    PUSH32(esp, ebx);
    PUSH32(esp, MEM32(ebp + 0x18));
    PUSH32(esp, MEM32(ebp + 0x14));
    PUSH32(esp, MEM32(ebp + 0x10));
    PUSH32(esp, 0); sub_004E35C5(); /* call 0x004E35C5 */

loc_004E395E: ;
    MEM32(ebp + 0x10) = MEM32(ebp + 0x10) + 0x10;
    MEM32(ebp + 0x14) = MEM32(ebp + 0x14) + 8;
    MEM32(ebp + 0x18) = MEM32(ebp + 0x18) + 8;
    MEM32(ebp + 0x24) = MEM32(ebp + 0x24) + 0x40;
    if (CMP_NE(MEM32(ebp + 0x1C), 0)) goto loc_004E38AE; /* jne: not equal / not zero */

loc_004E3978: ;
    edx = MEM32(ebp + -20);

loc_004E397B: ;
    eax = MEM32(ebp + -12);
    MEM32(ebp + 0x10) = MEM32(ebp + 0x10) + eax;
    eax = MEM32(ebp + -28);
    MEM32(ebp + 0x14) = MEM32(ebp + 0x14) + edx;
    MEM32(ebp + 0x18) = MEM32(ebp + 0x18) + edx;
    MEM32(ebp + 0x24) = MEM32(ebp + 0x24) + eax;
    if (CMP_NE(MEM32(ebp + 0xC), 0)) goto loc_004E38A0; /* jne: not equal / not zero */

loc_004E3997: ;
    /* emms - empty MMX state */
    POP32(esp, edi);
    POP32(esp, esi);
    POP32(esp, ebx);
    esp = ebp;
    POP32(esp, ebp); /* leave */
    esp += 40; return; /* ret 36 */

}

/**
 * sub_004E39A0
 * Original: 0x004E39A0 - 0x004E3A76 (214 bytes, 56 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_004E39A0(void)
{
    uint32_t ebp;
    int _flags = 0; /* fallback flag var */

loc_004E39A0: ;
    PUSH32(esp, ebp);
    ebp = esp;
    esp = esp - 0x24;
    eax = ebp + -36;
    PUSH32(esp, eax);
    PUSH32(esp, MEM32(ebp + 0xC));
    PUSH32(esp, 0); sub_0053C820(); /* call 0x0053C820 */

loc_004E39B2: ;
    PUSH32(esp, 0x40);
    PUSH32(esp, 0);
    eax = ebp + -8;
    PUSH32(esp, eax);
    PUSH32(esp, MEM32(ebp + 0xC));
    PUSH32(esp, 0); sub_0053C840(); /* call 0x0053C840 */

loc_004E39C2: ;
    if (CMP_EQ(MEM32(ebp + -36), 0x12)) goto loc_004E3A40; /* je: equal / zero */

loc_004E39C8: ;
    if (CMP_EQ(MEM32(ebp + -36), 0x1E)) goto loc_004E3A0C; /* je: equal / zero */

loc_004E39CE: ;
    if (CMP_NE(MEM32(ebp + -36), 0x24)) goto loc_004E3A72; /* jne: not equal / not zero */

loc_004E39D8: ;
    PUSH32(esp, MEM32(ebp + -8));
    eax = MEM32(ebp + 8);
    PUSH32(esp, MEM32(ebp + -4));
    PUSH32(esp, MEM32(eax + 0x44));
    PUSH32(esp, MEM32(eax + 0x40));
    PUSH32(esp, MEM32(eax + 0xF4));
    PUSH32(esp, MEM32(eax + 0xF0));
    PUSH32(esp, MEM32(eax + 0xEC));
    PUSH32(esp, MEM32(eax + 0xE0));
    PUSH32(esp, MEM32(eax + 0xDC));
    PUSH32(esp, 0); sub_004E30A1(); /* call 0x004E30A1 */

loc_004E3A0A: ;
    goto loc_004E3A72;

loc_004E3A0C: ;
    PUSH32(esp, MEM32(ebp + -8));
    eax = MEM32(ebp + 8);
    PUSH32(esp, MEM32(ebp + -4));
    PUSH32(esp, MEM32(eax + 0x44));
    PUSH32(esp, MEM32(eax + 0x40));
    PUSH32(esp, MEM32(eax + 0xF4));
    PUSH32(esp, MEM32(eax + 0xF0));
    PUSH32(esp, MEM32(eax + 0xEC));
    PUSH32(esp, MEM32(eax + 0xE0));
    PUSH32(esp, MEM32(eax + 0xDC));
    PUSH32(esp, 0); sub_004E33E9(); /* call 0x004E33E9 */

loc_004E3A3E: ;
    goto loc_004E3A72;

loc_004E3A40: ;
    PUSH32(esp, MEM32(ebp + -8));
    eax = MEM32(ebp + 8);
    PUSH32(esp, MEM32(ebp + -4));
    PUSH32(esp, MEM32(eax + 0x44));
    PUSH32(esp, MEM32(eax + 0x40));
    PUSH32(esp, MEM32(eax + 0xF4));
    PUSH32(esp, MEM32(eax + 0xF0));
    PUSH32(esp, MEM32(eax + 0xEC));
    PUSH32(esp, MEM32(eax + 0xE0));
    PUSH32(esp, MEM32(eax + 0xDC));
    PUSH32(esp, 0); sub_004E37C4(); /* call 0x004E37C4 */

loc_004E3A72: ;
    esp = ebp;
    POP32(esp, ebp); /* leave */
    esp += 12; return; /* ret 8 */

}

/**
 * sub_004E3A76
 * Original: 0x004E3A76 - 0x004E3ABD (71 bytes, 29 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_004E3A76(void)
{
    uint32_t ebp;
    int _flags = 0; /* fallback flag var */

loc_004E3A76: ;
    PUSH32(esp, ebp);
    ebp = esp;
    esp = esp - 0x114;
    eax = MEM32(ebp + 0x28);
    ecx = MEM32(eax);
    eax = MEM32(ebp + 0x2C);
    PUSH32(esp, ebx);
    PUSH32(esp, esi);
    esi = MEM32(eax);
    eax = MEM32(ebp + 0x24);
    eax = eax - esi;
    edx = ((int32_t)eax < 0) ? 0xFFFFFFFF : 0; /* cdq */
    ebx = eax;
    eax = MEM32(ebp + 0x24);
    ebx = ebx ^ edx;
    eax = eax - ecx;
    ebx = ebx - edx;
    edx = ((int32_t)eax < 0) ? 0xFFFFFFFF : 0; /* cdq */
    PUSH32(esp, edi);
    eax = eax ^ edx;
    edi = ebp + -261;
    edi = edi & 0xFFFFFFF0u;
    eax = eax - edx;
    (void)0; /* cmp eax, ebx - flags set for next jcc */
    MEM32(ebp + -4) = edi;
    if (CMP_G(eax, ebx)) { sub_004E3ABD(); return; } /* jg: greater (signed >) */

loc_004E3AB2: ;
    ebx = esi;
    MEM32(ebp + 0x24) = 1;
    g_seh_ebp = ebp; sub_004E3AC3(); return; /* tail jmp 0x004E3AC3 */

}

/**
 * sub_004E3DA6
 * Original: 0x004E3DA6 - 0x004E3ED3 (301 bytes, 116 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_004E3DA6(void)
{
    uint32_t ebp;
    int _flags = 0; /* fallback flag var */

loc_004E3DA6: ;
    PUSH32(esp, ebp);
    ebp = esp;
    esp = esp - 0xC;
    eax = MEM32(ebp + 0x34);
    eax = MEM32(eax + 0x20);
    ecx = MEM32(ebp + 0x38);
    MEM32(ebp + -4) = MEM32(ebp + -4) & 0;
    PUSH32(esp, ebx);
    MEM32(ebp + -12) = eax;
    eax = MEM32(ebp + 0x3C);
    eax = MEM32(eax);
    PUSH32(esp, esi);
    PUSH32(esp, edi);
    edi = MEM32(ebp + 0x14);
    MEM32(ecx + 4) = eax;
    MEM32(ebp + -8) = 5;

loc_004E3DD1: ;
    PUSH32(esp, MEM32(ebp + 0x28));
    eax = MEM32(ebp + -4);
    PUSH32(esp, MEM32(ebp + 0x24));
    edx = MEM32(ebp + 0x34);
    PUSH32(esp, MEM32(ebp + 0x1C));
    MEM32(ebp + 0x14) = eax;
    MEM32(ebp + 0x14) = MEM32(ebp + 0x14) & 1;
    ecx = MEM32(ebp + 0x14);
    ecx = ecx << 5;
    ecx = ecx + edx;
    edx = MEM32(ebp + 0x38);
    ebx = MEM32(ecx);
    PUSH32(esp, 0x77);
    PUSH32(esp, MEM32(ebp + 0x40));
    eax = eax >> 1;
    esi = edx + eax * 4;
    edx = eax;
    eax = (uint32_t)((int32_t)eax * (int32_t)MEM32(ebp + 0x30));
    eax = eax + MEM32(ebp + 0x14);
    edx = edx << 5;
    edx = edx + MEM32(ebp + 0x3C);
    PUSH32(esp, edx);
    PUSH32(esp, ecx);
    PUSH32(esp, MEM32(esi));
    ecx = MEM32(ebp + -8);
    PUSH32(esp, MEM32(ebp + 0x18));
    edx = 0; /* xor self */
    edx++;
    edx = edx << LO8(ecx);
    ecx = ZX8(MEM8(edi));
    edx = edx & ecx;
    ecx = MEM32(ebp + 0x2C);
    PUSH32(esp, edx);
    PUSH32(esp, MEM32(ebp + 0x10));
    eax = ecx + eax * 8;
    PUSH32(esp, MEM32(ebp + 0xC));
    PUSH32(esp, MEM32(ebp + 0x30));
    PUSH32(esp, eax);
    PUSH32(esp, MEM32(ebp + 8));
    PUSH32(esp, 0); sub_004E3A76(); /* call 0x004E3A76 */

loc_004E3E3A: ;
    MEM32(ebp + -4) = MEM32(ebp + -4) + 1;
    MEM32(ebp + -8) = MEM32(ebp + -8) - 1;
    (void)0; /* cmp MEM32(ebp + -4), 4 - flags set for next jcc */
    MEM32(esi) = ebx;
    if (CMP_B(MEM32(ebp + -4), 4)) goto loc_004E3DD1; /* jb: below (unsigned <) */

loc_004E3E48: ;
    PUSH32(esp, MEM32(ebp + 0x28));
    eax = MEM32(ebp + -12);
    PUSH32(esp, MEM32(ebp + 0x24));
    ecx = MEM32(ebp + 0x38);
    PUSH32(esp, MEM32(ebp + 0x20));
    ebx = MEM32(ebp + 0x54);
    PUSH32(esp, 0x77);
    PUSH32(esp, MEM32(ebp + 0x48));
    MEM32(ecx) = eax;
    PUSH32(esp, MEM32(ebp + 0x58));
    eax = MEM32(ebp + 0x50);
    esi = MEM32(eax);
    PUSH32(esp, eax);
    PUSH32(esp, MEM32(ebx));
    eax = 0; /* xor self */
    SET_LO8(eax, MEM8(edi));
    PUSH32(esp, MEM32(ebp + 0x18));
    eax = eax >> 1;
    eax = eax & 1;
    PUSH32(esp, eax);
    PUSH32(esp, MEM32(ebp + 0x10));
    PUSH32(esp, MEM32(ebp + 0xC));
    PUSH32(esp, MEM32(ebp + 0x44));
    PUSH32(esp, MEM32(ebp + 0x4C));
    PUSH32(esp, MEM32(ebp + 8));
    PUSH32(esp, 0); sub_004E3A76(); /* call 0x004E3A76 */

loc_004E3E8D: ;
    PUSH32(esp, MEM32(ebp + 0x28));
    eax = MEM32(ebp + 0x60);
    PUSH32(esp, MEM32(ebp + 0x24));
    MEM32(ebx) = esi;
    PUSH32(esp, MEM32(ebp + 0x20));
    esi = MEM32(eax);
    ebx = MEM32(ebp + 0x64);
    PUSH32(esp, 0x77);
    PUSH32(esp, MEM32(ebp + 0x48));
    PUSH32(esp, MEM32(ebp + 0x68));
    PUSH32(esp, eax);
    PUSH32(esp, MEM32(ebx));
    eax = 0; /* xor self */
    SET_LO8(eax, MEM8(edi));
    PUSH32(esp, MEM32(ebp + 0x18));
    eax = eax & 1;
    PUSH32(esp, eax);
    PUSH32(esp, MEM32(ebp + 0x10));
    PUSH32(esp, MEM32(ebp + 0xC));
    PUSH32(esp, MEM32(ebp + 0x44));
    PUSH32(esp, MEM32(ebp + 0x5C));
    PUSH32(esp, MEM32(ebp + 8));
    PUSH32(esp, 0); sub_004E3A76(); /* call 0x004E3A76 */

loc_004E3ECA: ;
    POP32(esp, edi);
    MEM32(ebx) = esi;
    POP32(esp, esi);
    POP32(esp, ebx);
    esp = ebp;
    POP32(esp, ebp); /* leave */
    esp += 104; return; /* ret 100 */

}

/**
 * sub_004E3ED3
 * Original: 0x004E3ED3 - 0x004E3F31 (94 bytes, 27 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_004E3ED3(void)
{
    uint32_t ebp;
    int _flags = 0; /* fallback flag var */
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_004E3ED3: ;
    PUSH32(esp, ebp);
    ebp = esp + -112;
    esp = esp - 0xF8;
    PUSH32(esp, esi);
    esi = MEM32(ebp + 0x78);
    eax = MEM32(esi + 0xE0);
    MEM32(ebp + 0x24) = eax;
    eax = MEM32(esi + 0xFC);
    MEM32(ebp + 0x60) = eax;
    eax = MEM32(esi + 0x100);
    MEM32(ebp + 0x68) = eax;
    eax = MEM32(esi + 0x104);
    PUSH32(esp, edi);
    edi = MEM32(esi + 0xDC);
    MEM32(ebp + 0x64) = eax;
    eax = edi;
    eax = eax << 4;
    ecx = 0; /* xor self */
    MEM32(ebp + 0x3C) = eax;
    eax = MEM32(ebp + 0x7C);
    (void)0; /* cmp eax, 4 - flags set for next jcc */
    MEM32(ebp + 0x44) = ecx;
    MEM32(ebp + 0x4C) = ecx;
    MEM32(ebp + 0x40) = edi;
    if (CMP_A(eax, 4)) { sub_004E3F31(); return; } /* ja: above (unsigned >) */

loc_004E3F28: ;
    MEM32(ebp + 0x5C) = 8;
    g_seh_ebp = ebp; sub_004E3F39(); return; /* tail jmp 0x004E3F39 */

}

/**
 * sub_004E42C2
 * Original: 0x004E42C2 - 0x004E432B (105 bytes, 45 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_004E42C2(void)
{
    uint32_t ebp;
    int _flags = 0; /* fallback flag var */
    uint64_t mm0, mm1;

loc_004E42C2: ;
    PUSH32(esp, ebp);
    ebp = esp;
    PUSH32(esp, ebx);
    PUSH32(esp, esi);
    PUSH32(esp, edi);
    eax = MEM32(ebp + 0x14);
    ebx = eax;
    ebx = ebx + 8;
    ecx = MEM32(ebp + 8);
    edx = ecx;
    edx = edx + 8;
    esi = MEM32(ebp + 0x20);
    edi = 0x10;

loc_004E42E0: ;
    /* SSE: movq mm0, qword ptr [ecx] */
    ecx = ecx + esi;
    /* SSE: movq qword ptr [eax], mm0 */
    eax = eax + esi;
    /* SSE: movq mm1, qword ptr [edx] */
    edx = edx + esi;
    /* SSE: movq qword ptr [ebx], mm1 */
    ebx = ebx + esi;
    edi--;
    if ((edi != 0)) goto loc_004E42E0; /* jne: not equal / not zero */

loc_004E42F7: ;
    eax = MEM32(ebp + 0x18);
    ebx = MEM32(ebp + 0x1C);
    ecx = MEM32(ebp + 0xC);
    edx = MEM32(ebp + 0x10);
    esi = MEM32(ebp + 0x24);
    edi = 8;

loc_004E430B: ;
    /* SSE: movq mm0, qword ptr [ecx] */
    ecx = ecx + esi;
    /* SSE: movq qword ptr [eax], mm0 */
    eax = eax + esi;
    /* SSE: movq mm1, qword ptr [edx] */
    edx = edx + esi;
    /* SSE: movq qword ptr [ebx], mm1 */
    ebx = ebx + esi;
    edi--;
    if ((edi != 0)) goto loc_004E430B; /* jne: not equal / not zero */

loc_004E4322: ;
    /* emms - empty MMX state */
    POP32(esp, edi);
    POP32(esp, esi);
    POP32(esp, ebx);
    POP32(esp, ebp);
    esp += 36; return; /* ret 32 */

}

/**
 * sub_004E432B
 * Original: 0x004E432B - 0x004E4430 (261 bytes, 89 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_004E432B(void)
{
    uint32_t ebp;
    int _flags = 0; /* fallback flag var */
    uint64_t mm0, mm1, mm2, mm3, mm4, mm5, mm6, mm7;

loc_004E432B: ;
    PUSH32(esp, ebp);
    ebp = esp;
    PUSH32(esp, ebx);
    PUSH32(esp, esi);
    PUSH32(esp, edi);
    esi = MEM32(ebp + 8);
    edi = MEM32(ebp + 0x10);
    ecx = MEM32(ebp + 0xC);
    edx = MEM32(ebp + 0x14);
    if (CMP_EQ(MEM32(ebp + 0x1C), 0)) { sub_004E4430(); return; } /* je: equal / zero */

loc_004E4347: ;
    ebx = MEM32(ebp + 0x18);
    ebx = ebx << 3;
    mm7 = ebx; /* movd */
    eax = 0x40;
    eax = eax - ebx;
    mm6 = eax; /* movd */
    eax = ebx;
    eax = eax - 0x40;
    mm5 = eax; /* movd */
    eax = 0x80;
    eax = eax - ebx;
    mm4 = eax; /* movd */
    eax = MEM32(ebp + 0x20);
    if (CMP_LE(ebx, 0x40)) goto loc_004E4379; /* jle: less or equal (signed <=) */

loc_004E4374: ;
    ebx = 0x40;

loc_004E4379: ;
    ebx = (uint32_t)(-(int32_t)ebx);
    ebx = ebx + 0x40;
    if (CMP_L(MEM32(ebp + 0x1C), 0)) goto loc_004E43DA; /* jl: less (signed <) */

loc_004E4384: ;
    /* SSE: movq mm0, qword ptr [esi] */
    /* SSE: movq mm1, qword ptr [esi + 8] */
    /* SSE: movq mm2, mm1 */
    /* TODO: psrlq mm2, 0x38 */
    /* SSE: movq mm3, mm2 */
    /* TODO: psllq mm3, 8 */
    /* por mm2, mm3 (MMX/SIMD integer) */
    /* TODO: pshufw mm2, mm2, 0 */
    /* TODO: psrlq mm0, mm7 */
    /* SSE: movq mm3, mm1 */
    /* TODO: psllq mm3, mm6 */
    /* por mm0, mm3 (MMX/SIMD integer) */
    /* SSE: movq mm3, mm1 */
    /* TODO: psrlq mm3, mm5 */
    /* por mm0, mm3 (MMX/SIMD integer) */
    /* TODO: psrlq mm1, mm7 */
    /* SSE: movq mm3, mm2 */
    /* TODO: psllq mm3, mm4 */
    /* por mm0, mm3 (MMX/SIMD integer) */
    mm3 = ebx; /* movd */
    /* TODO: psllq mm2, mm3 */
    /* por mm1, mm2 (MMX/SIMD integer) */
    /* SSE: movq qword ptr [edi], mm0 */
    /* SSE: movq qword ptr [edi + 8], mm1 */
    esi = esi + ecx;
    edi = edi + edx;
    eax--;
    if ((eax != 0)) goto loc_004E4384; /* jne: not equal / not zero */

loc_004E43D8: ;
    g_seh_ebp = ebp; sub_004E4448(); return; /* tail jmp 0x004E4448 */

loc_004E43DA: ;
    /* SSE: movq mm0, qword ptr [esi] */
    /* SSE: movq mm1, qword ptr [esi + 8] */
    /* SSE: movq mm2, mm0 */
    /* TODO: psllq mm2, 0x38 */
    /* SSE: movq mm3, mm2 */
    /* TODO: psrlq mm3, 8 */
    /* por mm2, mm3 (MMX/SIMD integer) */
    /* TODO: pshufw mm2, mm2, 0xff */
    /* TODO: psllq mm1, mm7 */
    /* SSE: movq mm3, mm0 */
    /* TODO: psrlq mm3, mm6 */
    /* por mm1, mm3 (MMX/SIMD integer) */
    /* SSE: movq mm3, mm0 */
    /* TODO: psllq mm3, mm5 */
    /* por mm1, mm3 (MMX/SIMD integer) */
    /* TODO: psllq mm0, mm7 */
    /* SSE: movq mm3, mm2 */
    /* TODO: psrlq mm3, mm4 */
    /* por mm1, mm3 (MMX/SIMD integer) */
    mm3 = ebx; /* movd */
    /* TODO: psrlq mm2, mm3 */
    /* por mm0, mm2 (MMX/SIMD integer) */
    /* SSE: movq qword ptr [edi], mm0 */
    /* SSE: movq qword ptr [edi + 8], mm1 */
    esi = esi + ecx;
    edi = edi + edx;
    eax--;
    if ((eax != 0)) goto loc_004E43DA; /* jne: not equal / not zero */

loc_004E442E: ;
    g_seh_ebp = ebp; sub_004E4448(); return; /* tail jmp 0x004E4448 */

}

/**
 * sub_004E4467
 * Original: 0x004E4467 - 0x004E44BE (87 bytes, 33 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_004E4467(void)
{
    uint32_t ebp;
    int _flags = 0; /* fallback flag var */
    int _cf = 0; /* carry flag */

loc_004E4467: ;
    PUSH32(esp, ebp);
    ebp = esp;
    esp = esp - 0x14;
    ecx = MEM32(ebp + 0x18);
    MEM32(ebp + -12) = MEM32(ebp + -12) & 0;
    PUSH32(esp, 0); sub_004E2F1B(); /* call 0x004E2F1B */

loc_004E4479: ;
    eax = MEM32(ebp + 0xC);
    (void)0; /* test LO8(eax), 1 - flags set for next jcc */
    ecx = eax + eax;
    MEM32(ebp + -16) = ecx;
    if (TEST_NZ(LO8(eax), 1)) goto loc_004E4487; /* jne: not equal / not zero */

loc_004E4486: ;
    eax--;

loc_004E4487: ;
    MEM32(ebp + -4) = MEM32(ebp + -4) & 0;
    PUSH32(esp, ebx);
    PUSH32(esp, esi);
    esi = MEM32(ebp + 0x10);
    MEM32(ebp + -8) = eax;
    PUSH32(esp, edi);
    edi = MEM32(ebp + 8);
    edx = MEM32(esi);
    ecx = edi;
    PUSH32(esp, 0); sub_004E65AF(); /* call 0x004E65AF */

loc_004E44A0: ;
    if (CMP_EQ(eax, MEM32(esi + 4))) { sub_004E44BE(); return; } /* je: equal / zero */

loc_004E44A5: ;
    ecx = MEM32(esi + 0xC);
    ecx = ZX8(MEM8(ecx + eax));
    (void)0; /* cmp eax, MEM32(esi + 8) - flags set for next jcc */
    MEM32(ebp + 0x10) = ecx;
    ecx = MEM32(esi + 0x18);
    edi = (uint32_t)(int32_t)SMEM8(ecx + eax);
    ebx = _cf ? 0xFFFFFFFF : 0; /* sbb self (CF extend) */
    ebx++;
    g_seh_ebp = ebp; sub_004E4536(); return; /* tail jmp 0x004E4536 */

}

/**
 * sub_004E4641
 * Original: 0x004E4641 - 0x004E46AA (105 bytes, 41 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_004E4641(void)
{
    uint32_t ebp;
    int _flags = 0; /* fallback flag var */

loc_004E4641: ;
    PUSH32(esp, ebp);
    ebp = esp;
    esp = esp - 0x1B0;
    eax = MEM32(ebp + 0x1C);
    ecx = (uint32_t)(int32_t)SMEM8(eax);
    edx = MEM32(ebp + 0x2C);
    eax = (uint32_t)(int32_t)SMEM8(eax + 1);
    edx = ecx + edx * 2;
    ecx = MEM32(ebp + 0x30);
    PUSH32(esp, ebx);
    ebx = MEM32(ebp + 0x38);
    edx = (uint32_t)((int32_t)edx >> 1);
    PUSH32(esp, esi);
    PUSH32(esp, edi);
    esi = edx + -1;
    edi = esi;
    edi = edi - MEM32(ebp + 0x34);
    ecx = eax + ecx * 2;
    edi = edi + 0x10;
    ecx = (uint32_t)((int32_t)ecx >> 1);
    MEM32(ebp + 0x2C) = edi;
    eax = ecx + -1;
    edi = eax;
    edi = edi - ebx;
    edi = edi + 0xB;
    if (TEST_S(esi, esi)) { sub_004E46AA(); return; } /* jl: less (signed <) */

loc_004E4686: ;
    if (TEST_S(eax, eax)) { sub_004E46AA(); return; } /* jl: less (signed <) */

loc_004E468A: ;
    if (CMP_G(MEM32(ebp + 0x2C), 0)) { sub_004E46AA(); return; } /* jg: greater (signed >) */

loc_004E4690: ;
    if (CMP_G(edi & edi, 0)) { sub_004E46AA(); return; } /* jg: greater (signed >) */

loc_004E4694: ;
    eax = MEM32(ebp + 0x3C);
    ecx = (uint32_t)((int32_t)ecx * (int32_t)eax);
    ecx = ecx + edx;
    MEM32(ebp + 0x44) = MEM32(ebp + 0x44) + ecx;
    ebx = 0; /* xor self */
    MEM32(ebp + 0x34) = eax;
    ebx++;
    g_seh_ebp = ebp; sub_004E475A(); return; /* tail jmp 0x004E475A */

}

/**
 * sub_004E497E
 * Original: 0x004E497E - 0x004E49AD (47 bytes, 20 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_004E497E(void)
{
    uint32_t ebp;
    int _flags = 0; /* fallback flag var */

loc_004E497E: ;
    PUSH32(esp, ebp);
    ebp = esp;
    SET_LO8(eax, MEM8(ebp + 8));
    SET_LO8(ecx, MEM8(ebp + 0xC));
    if (CMP_LE(LO8(eax), LO8(ecx))) goto loc_004E499A; /* jle: less or equal (signed <=) */

loc_004E498B: ;
    if (CMP_G(LO8(ecx), MEM8(ebp + 0x10))) goto loc_004E49A7; /* jg: greater (signed >) */

loc_004E4990: ;
    if (CMP_LE(LO8(eax), MEM8(ebp + 0x10))) goto loc_004E49A9; /* jle: less or equal (signed <=) */

loc_004E4995: ;
    SET_LO8(eax, MEM8(ebp + 0x10));
    goto loc_004E49A9;

loc_004E499A: ;
    if (CMP_G(LO8(eax), MEM8(ebp + 0x10))) goto loc_004E49A9; /* jg: greater (signed >) */

loc_004E499F: ;
    (void)0; /* cmp LO8(ecx), MEM8(ebp + 0x10) - flags set for next jcc */
    SET_LO8(eax, MEM8(ebp + 0x10));
    if (CMP_G(LO8(ecx), MEM8(ebp + 0x10))) goto loc_004E49A9; /* jg: greater (signed >) */

loc_004E49A7: ;
    SET_LO8(eax, LO8(ecx));

loc_004E49A9: ;
    POP32(esp, ebp);
    esp += 16; return; /* ret 12 */

}

/**
 * sub_004E49AD
 * Original: 0x004E49AD - 0x004E4A4A (157 bytes, 44 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_004E49AD(void)
{
    uint32_t ebp;
    int _flags = 0; /* fallback flag var */
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_004E49AD: ;
    PUSH32(esp, ebp);
    ebp = esp + -116;
    esp = esp - 0x15C;
    eax = 0; /* xor self */
    MEM32(ebp) = eax;
    MEM32(ebp + -56) = eax;
    MEM32(ebp + 0x34) = eax;
    MEM32(ebp + 0xC) = eax;
    MEM32(ebp + -60) = eax;
    MEM32(ebp + 0x54) = eax;
    MEM32(ebp + 8) = eax;
    MEM32(ebp + -20) = eax;
    PUSH32(esp, esi);
    esi = MEM32(ebp + 0x7C);
    eax = MEM32(esi + 0xE0);
    MEM32(ebp + 0x3C) = eax;
    edx = 0; /* xor self */
    { uint64_t _dividend = ((uint64_t)edx << 32) | eax;
      eax = (uint32_t)(_dividend / (uint32_t)MEM32(esi + 0xA8));
      edx = (uint32_t)(_dividend % (uint32_t)MEM32(esi + 0xA8)); }
    ecx = MEM32(esi + 0xDC);
    PUSH32(esp, 5);
    PUSH32(esp, esi);
    MEM32(ebp + 0x68) = ecx;
    MEM32(ebp + -80) = eax;
    eax = MEM32(esi + 0xFC);
    MEM32(ebp + 0x58) = eax;
    eax = MEM32(esi + 0x100);
    MEM32(ebp + 0x4C) = eax;
    eax = MEM32(esi + 0x104);
    MEM32(ebp + 0x50) = eax;
    eax = MEM32(esi + 0xEC);
    MEM32(ebp + 0x14) = eax;
    eax = MEM32(esi + 0xF0);
    MEM32(ebp + 0x24) = eax;
    eax = MEM32(esi + 0xF4);
    MEM32(ebp + 0x10) = eax;
    eax = ecx;
    eax = eax << 4;
    MEM32(ebp + 0x38) = eax;
    PUSH32(esp, 0); sub_004E6518(); /* call 0x004E6518 */

loc_004E4A39: ;
    (void)0; /* cmp eax, 4 - flags set for next jcc */
    MEM32(ebp + 0x48) = eax;
    if (CMP_A(eax, 4)) { sub_004E4A4A(); return; } /* ja: above (unsigned >) */

loc_004E4A41: ;
    MEM32(ebp + -8) = 8;
    g_seh_ebp = ebp; sub_004E4A52(); return; /* tail jmp 0x004E4A52 */

}

/**
 * sub_004E5450
 * Original: 0x004E5450 - 0x004E54A1 (81 bytes, 30 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_004E5450(void)
{
    uint32_t ebp;
    int _flags = 0; /* fallback flag var */
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_004E5450: ;
    PUSH32(esp, esi);
    esi = MEM32(esp + 8);
    PUSH32(esp, edi);
    ecx = esi;
    PUSH32(esp, 0); sub_004E64CB(); /* call 0x004E64CB */

loc_004E545D: ;
    if (TEST_NZ(eax, eax)) { sub_004E54A1(); return; } /* jne: not equal / not zero */

loc_004E5461: ;
    MEM32(esi + 0x114) = MEM32(esi + 0x114) & eax;
    PUSH32(esp, 7);
    POP32(esp, edx);
    ecx = esi;
    PUSH32(esp, 0); sub_004E6580(); /* call 0x004E6580 */

loc_004E5471: ;
    PUSH32(esp, 5);
    PUSH32(esp, esi);
    PUSH32(esp, 0); sub_004E6518(); /* call 0x004E6518 */

loc_004E5479: ;
    (void)0; /* cmp MEM8(esi + 0xA3), 0 - flags set for next jcc */
    edi = eax;
    if (CMP_EQ(MEM8(esi + 0xA3), 0)) goto loc_004E548F; /* je: equal / zero */

loc_004E5484: ;
    ecx = esi;
    PUSH32(esp, 0); sub_004E64CB(); /* call 0x004E64CB */

loc_004E548B: ;
    if (TEST_NZ(eax, eax)) goto loc_004E5498; /* jne: not equal / not zero */

loc_004E548F: ;
    PUSH32(esp, edi);
    PUSH32(esp, esi);
    PUSH32(esp, 0); sub_004E3ED3(); /* call 0x004E3ED3 */

loc_004E5496: ;
    g_seh_ebp = ebp; sub_004E54B6(); return; /* tail jmp 0x004E54B6 */

loc_004E5498: ;
    PUSH32(esp, edi);
    PUSH32(esp, esi);
    PUSH32(esp, 0); sub_004EA129(); /* call 0x004EA129 */

loc_004E549F: ;
    g_seh_ebp = ebp; sub_004E54B6(); return; /* tail jmp 0x004E54B6 */

}

/**
 * sub_004E54BB
 * Original: 0x004E54BB - 0x004E5928 (1133 bytes, 316 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_004E54BB(void)
{
    uint32_t ebp;
    int _flags = 0; /* fallback flag var */
    uint64_t mm0, mm1, mm2, mm3, mm4, mm5, mm6, mm7;

loc_004E54BB: ;
    PUSH32(esp, ebp);
    ebp = esp;
    esp = esp - 0x12C;
    PUSH32(esp, ebx);
    eax = ebp + -268;
    PUSH32(esp, esi);
    eax = eax & 0xFFFFFFE0u;
    PUSH32(esp, edi);
    MEM32(ebp + -4) = eax;
    esi = MEM32(ebp + 0x10);
    edi = MEM32(ebp + -4);
    ecx = 0xFFFFFFFCu;
    ebx = 0; /* xor self */

loc_004E54E0: ;
    eax = esi + ecx * 8;
    /* TODO: pcmpeqb mm0, mm0 */
    /* TODO: psrld mm0, 0x10 */
    /* SSE: movq mm4, qword ptr [eax + 0x40] */
    /* SSE: movq mm1, mm4 */
    /* SSE: movq mm5, qword ptr [eax + 0x100] */
    /* TODO: paddd mm1, mm5 */
    /* TODO: pslld mm1, 0x10 */
    /* pand mm4, mm0 (MMX/SIMD integer) */
    /* pand mm5, mm0 (MMX/SIMD integer) */
    /* por mm5, mm1 (MMX/SIMD integer) */
    /* por mm4, mm1 (MMX/SIMD integer) */
    /* SSE: movq mm1, qword ptr [0x4ea450] */
    /* TODO: pmaddwd mm4, mm1 */
    /* SSE: movq mm1, qword ptr [0x4ea448] */
    /* TODO: pmaddwd mm5, mm1 */
    /* SSE: movq mm6, qword ptr [eax + 0xc0] */
    /* SSE: movq mm1, mm6 */
    /* SSE: movq mm7, qword ptr [eax + 0x80] */
    /* TODO: paddd mm1, mm7 */
    /* TODO: pslld mm1, 0x10 */
    /* pand mm6, mm0 (MMX/SIMD integer) */
    /* pand mm7, mm0 (MMX/SIMD integer) */
    /* por mm6, mm1 (MMX/SIMD integer) */
    /* por mm7, mm1 (MMX/SIMD integer) */
    /* SSE: movq mm1, qword ptr [0x4ea440] */
    /* TODO: pmaddwd mm6, mm1 */
    /* SSE: movq mm1, qword ptr [0x4ea438] */
    /* TODO: pmaddwd mm7, mm1 */
    /* SSE: movq mm3, qword ptr [eax + 0x60] */
    /* SSE: movq mm1, mm3 */
    /* SSE: movq mm2, qword ptr [eax + 0xe0] */
    /* TODO: paddd mm1, mm2 */
    /* TODO: pslld mm1, 0x10 */
    /* pand mm3, mm0 (MMX/SIMD integer) */
    /* pand mm2, mm0 (MMX/SIMD integer) */
    /* por mm3, mm1 (MMX/SIMD integer) */
    /* por mm2, mm1 (MMX/SIMD integer) */
    /* SSE: movq mm1, qword ptr [0x4ea430] */
    /* TODO: pmaddwd mm3, mm1 */
    /* SSE: movq mm1, qword ptr [0x4ea428] */
    /* TODO: pmaddwd mm2, mm1 */
    /* SSE: movq mm0, mm6 */
    /* TODO: paddd mm6, mm4 */
    /* TODO: psubd mm4, mm0 */
    /* SSE: movq mm0, mm7 */
    /* TODO: paddd mm7, mm5 */
    /* TODO: psubd mm5, mm0 */
    /* SSE: movq mm0, mm5 */
    /* TODO: paddd mm5, mm4 */
    /* TODO: psubd mm4, mm0 */
    /* SSE: movq mm0, mm5 */
    /* pand mm0, qword ptr [0x4ea420] (MMX/SIMD integer) */
    /* SSE: movq mm1, qword ptr [0x4ea418] */
    /* TODO: pmaddwd mm0, mm1 */
    /* TODO: psrld mm5, 0xf */
    /* TODO: pmaddwd mm5, mm1 */
    /* TODO: pslld mm5, 0xf */
    /* TODO: paddd mm5, mm0 */
    /* SSE: movq mm0, qword ptr [0x4ea410] */
    /* TODO: paddd mm5, mm0 */
    /* TODO: psrad mm5, 8 */
    /* SSE: movq mm0, mm4 */
    /* pand mm0, qword ptr [0x4ea420] (MMX/SIMD integer) */
    /* TODO: pmaddwd mm0, mm1 */
    /* TODO: psrld mm4, 0xf */
    /* TODO: pmaddwd mm4, mm1 */
    /* TODO: pslld mm4, 0xf */
    /* TODO: paddd mm4, mm0 */
    /* SSE: movq mm1, qword ptr [0x4ea410] */
    /* TODO: paddd mm4, mm1 */
    /* TODO: psrad mm4, 8 */
    /* SSE: movq mm0, qword ptr [esi + ecx*8 + 0x20] */
    eax = esi + ecx * 8;
    /* SSE: movq qword ptr [edi + 4], mm4 */
    /* TODO: pslld mm0, 0x10 */
    /* TODO: psrad mm0, 5 */
    /* SSE: movq mm1, qword ptr [0x4ea410] */
    /* TODO: paddd mm0, mm1 */
    /* SSE: movq mm1, qword ptr [eax + 0xa0] */
    /* TODO: pslld mm1, 0x10 */
    /* TODO: psrad mm1, 5 */
    /* SSE: movq mm4, mm0 */
    /* TODO: psubd mm0, mm1 */
    /* TODO: paddd mm1, mm4 */
    /* SSE: movq mm4, mm1 */
    /* TODO: psubd mm1, mm3 */
    /* TODO: paddd mm3, mm4 */
    /* SSE: movq mm4, mm0 */
    /* TODO: psubd mm0, mm2 */
    /* TODO: paddd mm2, mm4 */
    /* SSE: movq mm4, mm3 */
    /* TODO: psubd mm3, mm6 */
    /* TODO: paddd mm6, mm4 */
    /* TODO: psrad mm3, 8 */
    /* TODO: psrad mm6, 8 */
    /* SSE: movq mm4, mm2 */
    /* TODO: psubd mm2, mm5 */
    /* TODO: paddd mm5, mm4 */
    /* TODO: psrad mm2, 8 */
    /* TODO: psrad mm5, 8 */
    /* SSE: movq mm4, mm6 */
    /* TODO: punpckldq mm6, mm5 */
    /* TODO: punpckhdq mm4, mm5 */
    /* TODO: packssdw mm6, mm6 */
    /* SSE: movq mm5, mm2 */
    /* TODO: punpckldq mm2, mm3 */
    MEM32(edi) = mm6; /* movd */
    /* TODO: punpckhdq mm5, mm3 */
    /* TODO: packssdw mm5, mm5 */
    MEM32(edi + 0x1C) = mm5; /* movd */
    /* TODO: packssdw mm2, mm4 */
    /* SSE: movq mm4, qword ptr [edi + 4] */
    /* SSE: movq qword ptr [edi + 0xc], mm2 */
    /* SSE: movq mm2, mm0 */
    /* TODO: psubd mm0, mm4 */
    /* TODO: paddd mm4, mm2 */
    /* TODO: psrad mm0, 8 */
    /* TODO: psrad mm4, 8 */
    /* SSE: movq mm2, mm1 */
    /* TODO: psubd mm1, mm7 */
    /* TODO: paddd mm7, mm2 */
    /* TODO: psrad mm1, 8 */
    /* TODO: psrad mm7, 8 */
    /* SSE: movq mm2, mm4 */
    /* TODO: punpckldq mm4, mm7 */
    /* TODO: punpckhdq mm2, mm7 */
    /* SSE: movq mm7, mm1 */
    /* TODO: punpckldq mm1, mm0 */
    /* TODO: punpckhdq mm7, mm0 */
    /* TODO: packssdw mm4, mm1 */
    /* SSE: movq qword ptr [edi + 4], mm4 */
    /* TODO: packssdw mm2, mm7 */
    ecx++;
    /* SSE: movq qword ptr [edi + 0x14], mm2 */
    edi = edi + 0x20;
    if (((int32_t)ecx < 0)) goto loc_004E54E0; /* jl: less (signed <) */

loc_004E56E0: ;
    ecx = 0; /* xor self */
    esi = MEM32(ebp + -4);
    edi = MEM32(ebp + 8);
    edx = MEM32(ebp + 0xC);

loc_004E56EB: ;
    /* TODO: pcmpeqb mm1, mm1 */
    /* TODO: psrld mm1, 0x1f */
    /* TODO: pslld mm1, 2 */
    mm4 = MEM32(esi + ecx * 2 + 0x10); /* movd */
    mm5 = MEM32(esi + ecx * 2 + 0x70); /* movd */
    /* SSE: movq mm0, mm4 */
    /* TODO: paddw mm0, mm5 */
    /* TODO: punpcklwd mm4, mm0 */
    /* TODO: punpcklwd mm5, mm0 */
    /* SSE: movq mm0, qword ptr [0x4ea450] */
    /* TODO: pmaddwd mm4, mm0 */
    /* TODO: paddd mm4, mm1 */
    /* SSE: movq mm0, qword ptr [0x4ea448] */
    /* TODO: pmaddwd mm5, mm0 */
    /* TODO: paddd mm5, mm1 */
    /* TODO: psrad mm4, 3 */
    /* TODO: psrad mm5, 3 */
    mm6 = MEM32(esi + ecx * 2 + 0x50); /* movd */
    mm7 = MEM32(esi + ecx * 2 + 0x30); /* movd */
    /* SSE: movq mm0, mm6 */
    /* TODO: paddw mm0, mm7 */
    /* TODO: punpcklwd mm6, mm0 */
    /* TODO: punpcklwd mm7, mm0 */
    /* SSE: movq mm0, qword ptr [0x4ea440] */
    /* TODO: pmaddwd mm6, mm0 */
    /* TODO: paddd mm6, mm1 */
    /* SSE: movq mm0, qword ptr [0x4ea438] */
    /* TODO: pmaddwd mm7, mm0 */
    /* TODO: paddd mm7, mm1 */
    /* TODO: psrad mm6, 3 */
    /* TODO: psrad mm7, 3 */
    mm2 = MEM32(esi + ecx * 2 + 0x60); /* movd */
    mm3 = MEM32(esi + ecx * 2 + 0x20); /* movd */
    /* SSE: movq mm0, mm2 */
    /* TODO: paddw mm0, mm3 */
    /* TODO: punpcklwd mm2, mm0 */
    /* TODO: punpcklwd mm3, mm0 */
    /* SSE: movq mm0, qword ptr [0x4ea428] */
    /* TODO: pmaddwd mm2, mm0 */
    /* TODO: paddd mm2, mm1 */
    /* SSE: movq mm0, qword ptr [0x4ea430] */
    /* TODO: pmaddwd mm3, mm0 */
    /* TODO: paddd mm3, mm1 */
    /* TODO: psrad mm2, 3 */
    /* TODO: psrad mm3, 3 */
    /* SSE: movq mm0, mm4 */
    /* TODO: psubd mm4, mm6 */
    /* TODO: paddd mm6, mm0 */
    /* SSE: movq mm0, mm5 */
    /* TODO: psubd mm5, mm7 */
    /* TODO: paddd mm7, mm0 */
    /* SSE: movq mm0, mm4 */
    /* TODO: psubd mm4, mm5 */
    /* TODO: paddd mm5, mm0 */
    /* SSE: movq mm0, mm5 */
    /* pand mm0, qword ptr [0x4ea420] (MMX/SIMD integer) */
    /* SSE: movq mm1, qword ptr [0x4ea418] */
    /* TODO: pmaddwd mm0, mm1 */
    /* TODO: psrld mm5, 0xf */
    /* TODO: pmaddwd mm5, mm1 */
    /* TODO: pslld mm5, 0xf */
    /* TODO: paddd mm5, mm0 */
    /* SSE: movq mm0, qword ptr [0x4ea410] */
    /* TODO: paddd mm5, mm0 */
    /* TODO: psrad mm5, 8 */
    /* SSE: movq mm0, mm4 */
    /* pand mm0, qword ptr [0x4ea420] (MMX/SIMD integer) */
    /* TODO: pmaddwd mm0, mm1 */
    /* TODO: psrld mm4, 0xf */
    /* TODO: pmaddwd mm4, mm1 */
    /* TODO: pslld mm4, 0xf */
    /* TODO: paddd mm4, mm0 */
    /* SSE: movq mm1, qword ptr [0x4ea410] */
    /* TODO: paddd mm4, mm1 */
    /* TODO: psrad mm4, 8 */
    /* SSE: movq qword ptr [ebp - 0xc], mm4 */
    /* TODO: pslld mm1, 6 */
    mm0 = MEM32(esi + ecx * 2); /* movd */
    /* TODO: punpcklwd mm0, mm0 */
    /* TODO: pslld mm0, 0x10 */
    /* TODO: psrad mm0, 8 */
    /* TODO: paddd mm0, mm1 */
    mm4 = MEM32(esi + ecx * 2 + 0x40); /* movd */
    /* TODO: punpcklwd mm4, mm4 */
    /* TODO: pslld mm4, 0x10 */
    /* TODO: psrad mm4, 8 */
    /* SSE: movq mm1, mm0 */
    /* TODO: psubd mm0, mm4 */
    /* TODO: paddd mm4, mm1 */
    /* SSE: movq mm1, mm4 */
    /* TODO: psubd mm4, mm3 */
    /* TODO: paddd mm3, mm1 */
    /* SSE: movq mm1, mm0 */
    /* TODO: psubd mm0, mm2 */
    /* TODO: paddd mm2, mm1 */
    /* SSE: movq mm1, mm3 */
    /* TODO: psubd mm3, mm6 */
    /* TODO: psrad mm3, 0xe */
    /* TODO: paddd mm6, mm1 */
    /* TODO: psrad mm6, 0xe */
    /* TODO: packssdw mm6, mm6 */
    /* TODO: packuswb mm6, mm6 */
    eax = mm6; /* movd */
    MEM16(edi) = LO16(eax);
    ebx = edi + edx * 8;
    ebx = ebx - edx;
    /* TODO: packssdw mm3, mm3 */
    /* TODO: packuswb mm3, mm3 */
    eax = mm3; /* movd */
    MEM16(ebx) = LO16(eax);
    /* SSE: movq mm6, qword ptr [ebp - 0xc] */
    /* SSE: movq mm1, mm4 */
    /* TODO: psubd mm4, mm7 */
    /* TODO: psrad mm4, 0xe */
    /* TODO: paddd mm7, mm1 */
    /* TODO: psrad mm7, 0xe */
    /* TODO: packssdw mm4, mm4 */
    /* TODO: packuswb mm4, mm4 */
    eax = mm4; /* movd */
    MEM16(edi + edx * 4) = LO16(eax);
    ebx = edi + edx * 2;
    /* TODO: packssdw mm7, mm7 */
    /* TODO: packuswb mm7, mm7 */
    eax = mm7; /* movd */
    MEM16(ebx + edx) = LO16(eax);
    /* SSE: movq mm1, mm2 */
    /* TODO: psubd mm2, mm5 */
    /* TODO: psrad mm2, 0xe */
    /* TODO: paddd mm5, mm1 */
    /* TODO: psrad mm5, 0xe */
    ebx = ebx + edx * 2;
    /* TODO: packssdw mm2, mm2 */
    /* TODO: packuswb mm2, mm2 */
    eax = mm2; /* movd */
    MEM16(ebx + edx * 2) = LO16(eax);
    /* TODO: packssdw mm5, mm5 */
    /* TODO: packuswb mm5, mm5 */
    eax = mm5; /* movd */
    MEM16(edi + edx) = LO16(eax);
    /* SSE: movq mm3, mm0 */
    /* TODO: psubd mm0, mm6 */
    /* TODO: psrad mm0, 0xe */
    /* TODO: paddd mm6, mm3 */
    /* TODO: psrad mm6, 0xe */
    /* TODO: packssdw mm0, mm0 */
    /* TODO: packuswb mm0, mm0 */
    eax = mm0; /* movd */
    MEM16(ebx + edx) = LO16(eax);
    /* TODO: packssdw mm6, mm6 */
    /* TODO: packuswb mm6, mm6 */
    eax = mm6; /* movd */
    MEM16(edi + edx * 2) = LO16(eax);
    edi = edi + 2;
    ecx = ecx + 2;
    if (CMP_NE(ecx, 8)) goto loc_004E56EB; /* jne: not equal / not zero */

loc_004E591F: ;
    /* emms - empty MMX state */
    POP32(esp, edi);
    POP32(esp, esi);
    POP32(esp, ebx);
    esp = ebp;
    POP32(esp, ebp); /* leave */
    esp += 16; return; /* ret 12 */

}

/**
 * sub_004E5928
 * Original: 0x004E5928 - 0x004E5D80 (1112 bytes, 308 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_004E5928(void)
{
    uint32_t ebp;
    int _flags = 0; /* fallback flag var */
    uint64_t mm0, mm1, mm2, mm3, mm4, mm5, mm6, mm7;
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_004E5928: ;
    PUSH32(esp, ebp);
    ebp = esp + -108;
    esp = esp - 0xCC;
    PUSH32(esp, ebx);
    PUSH32(esp, esi);
    eax = ebp + -96;
    PUSH32(esp, edi);
    MEM32(ebp + 0x68) = eax;
    esi = MEM32(ebp + 0x78);
    edi = MEM32(ebp + 0x68);
    ecx = 0xFFFFFFFCu;
    ebx = 0; /* xor self */

loc_004E5949: ;
    eax = MEM32(ebp + 0x7C);
    MEM32(ebp + 0x7C) = MEM32(ebp + 0x7C) >> 2;
    eax = eax & 3;
    if (TEST_NZ(eax, eax)) goto loc_004E598B; /* jne: not equal / not zero */

loc_004E5957: ;
    mm2 = MEM32(esi + ecx * 4 + 0x10); /* movd */
    /* TODO: psllw mm2, 3 */
    /* TODO: punpcklwd mm2, mm2 */
    /* SSE: movq mm1, mm2 */
    /* TODO: punpckldq mm2, mm2 */
    /* SSE: movq qword ptr [edi], mm2 */
    /* TODO: punpckhdq mm1, mm1 */
    /* SSE: movq qword ptr [edi + 8], mm2 */
    /* TODO: psrlq mm0, 0x20 */
    /* SSE: movq qword ptr [edi + 0x10], mm1 */
    ecx++;
    /* SSE: movq qword ptr [edi + 0x18], mm1 */
    edi = edi + 0x20;
    if (((int32_t)ecx >= 0)) goto loc_004E5B62; /* jge: greater or equal (signed >=) */

loc_004E5989: ;
    goto loc_004E5949;

loc_004E598B: ;
    eax = esi + ecx * 4;
    /* SSE: movq mm4, qword ptr [eax + 0x20] */
    /* SSE: movq mm5, qword ptr [eax + 0x80] */
    /* SSE: movq mm6, qword ptr [eax + 0x60] */
    /* SSE: movq mm7, qword ptr [eax + 0x40] */
    /* SSE: movq mm3, qword ptr [eax + 0x30] */
    /* SSE: movq mm2, qword ptr [eax + 0x70] */
    ebx = esi;
    /* SSE: movq mm0, mm4 */
    /* TODO: paddw mm0, mm5 */
    /* TODO: punpcklwd mm4, mm0 */
    /* TODO: punpcklwd mm5, mm0 */
    /* SSE: movq mm1, qword ptr [0x4ea450] */
    /* SSE: movq mm0, mm6 */
    /* TODO: pmaddwd mm4, mm1 */
    /* SSE: movq mm1, qword ptr [0x4ea448] */
    /* TODO: paddw mm0, mm7 */
    /* TODO: punpcklwd mm6, mm0 */
    /* TODO: pmaddwd mm5, mm1 */
    /* TODO: punpcklwd mm7, mm0 */
    /* SSE: movq mm1, qword ptr [0x4ea440] */
    /* SSE: movq mm0, mm3 */
    /* TODO: pmaddwd mm6, mm1 */
    /* SSE: movq mm1, qword ptr [0x4ea438] */
    /* TODO: paddw mm0, mm2 */
    /* TODO: punpcklwd mm3, mm0 */
    /* TODO: pmaddwd mm7, mm1 */
    /* TODO: punpcklwd mm2, mm0 */
    /* SSE: movq mm1, qword ptr [0x4ea430] */
    /* TODO: pmaddwd mm3, mm1 */
    /* SSE: movq mm0, mm6 */
    /* SSE: movq mm1, qword ptr [0x4ea428] */
    /* TODO: paddd mm6, mm4 */
    /* TODO: pmaddwd mm2, mm1 */
    /* TODO: psubd mm4, mm0 */
    /* SSE: movq mm0, mm7 */
    /* TODO: paddd mm7, mm5 */
    /* TODO: psubd mm5, mm0 */
    /* SSE: movq mm0, mm5 */
    /* TODO: paddd mm5, mm4 */
    /* TODO: psubd mm4, mm0 */
    /* SSE: movq mm0, mm5 */
    /* pand mm0, qword ptr [0x4ea420] (MMX/SIMD integer) */
    /* SSE: movq mm1, qword ptr [0x4ea418] */
    /* TODO: pmaddwd mm0, mm1 */
    /* TODO: psrld mm5, 0xf */
    /* TODO: pmaddwd mm5, mm1 */
    /* TODO: pslld mm5, 0xf */
    /* TODO: paddd mm5, mm0 */
    /* SSE: movq mm0, qword ptr [0x4ea410] */
    /* TODO: paddd mm5, mm0 */
    /* TODO: psrad mm5, 8 */
    /* SSE: movq mm0, mm4 */
    /* pand mm0, qword ptr [0x4ea420] (MMX/SIMD integer) */
    /* TODO: pmaddwd mm0, mm1 */
    /* TODO: psrld mm4, 0xf */
    /* TODO: pmaddwd mm4, mm1 */
    /* TODO: pslld mm4, 0xf */
    /* TODO: paddd mm4, mm0 */
    /* SSE: movq mm1, qword ptr [0x4ea410] */
    /* TODO: paddd mm4, mm1 */
    /* TODO: psrad mm4, 8 */
    mm0 = MEM32(esi + ecx * 4 + 0x10); /* movd */
    eax = esi + ecx * 4;
    /* SSE: movq qword ptr [edi + 4], mm4 */
    /* TODO: punpcklwd mm0, mm0 */
    /* TODO: pslld mm0, 0x10 */
    /* TODO: psrad mm0, 5 */
    /* SSE: movq mm1, qword ptr [0x4ea410] */
    /* TODO: paddd mm0, mm1 */
    mm1 = MEM32(eax + 0x50); /* movd */
    /* TODO: punpcklwd mm1, mm1 */
    /* TODO: pslld mm1, 0x10 */
    /* TODO: psrad mm1, 5 */
    /* SSE: movq mm4, mm0 */
    /* TODO: psubd mm0, mm1 */
    /* TODO: paddd mm1, mm4 */
    /* SSE: movq mm4, mm1 */
    /* TODO: psubd mm1, mm3 */
    /* TODO: paddd mm3, mm4 */
    /* SSE: movq mm4, mm0 */
    /* TODO: psubd mm0, mm2 */
    /* TODO: paddd mm2, mm4 */
    /* SSE: movq mm4, mm3 */
    /* TODO: psubd mm3, mm6 */
    /* TODO: paddd mm6, mm4 */
    /* TODO: psrad mm3, 8 */
    /* TODO: psrad mm6, 8 */
    /* SSE: movq mm4, mm2 */
    /* TODO: psubd mm2, mm5 */
    /* TODO: paddd mm5, mm4 */
    /* TODO: psrad mm2, 8 */
    /* TODO: psrad mm5, 8 */
    /* SSE: movq mm4, mm6 */
    /* TODO: punpckldq mm6, mm5 */
    /* TODO: punpckhdq mm4, mm5 */
    /* TODO: packssdw mm6, mm6 */
    /* SSE: movq mm5, mm2 */
    /* TODO: punpckldq mm2, mm3 */
    MEM32(edi) = mm6; /* movd */
    /* TODO: punpckhdq mm5, mm3 */
    /* TODO: packssdw mm5, mm5 */
    MEM32(edi + 0x1C) = mm5; /* movd */
    /* TODO: packssdw mm2, mm4 */
    /* SSE: movq mm4, qword ptr [edi + 4] */
    /* SSE: movq qword ptr [edi + 0xc], mm2 */
    /* SSE: movq mm2, mm0 */
    /* TODO: psubd mm0, mm4 */
    /* TODO: paddd mm4, mm2 */
    /* TODO: psrad mm0, 8 */
    /* TODO: psrad mm4, 8 */
    /* SSE: movq mm2, mm1 */
    /* TODO: psubd mm1, mm7 */
    /* TODO: paddd mm7, mm2 */
    /* TODO: psrad mm1, 8 */
    /* TODO: psrad mm7, 8 */
    /* SSE: movq mm2, mm4 */
    /* TODO: punpckldq mm4, mm7 */
    /* TODO: punpckhdq mm2, mm7 */
    /* SSE: movq mm7, mm1 */
    /* TODO: punpckldq mm1, mm0 */
    /* TODO: punpckhdq mm7, mm0 */
    /* TODO: packssdw mm4, mm1 */
    /* SSE: movq qword ptr [edi + 4], mm4 */
    /* TODO: packssdw mm2, mm7 */
    ecx++;
    /* SSE: movq qword ptr [edi + 0x14], mm2 */
    edi = edi + 0x20;
    if (((int32_t)ecx < 0)) goto loc_004E5949; /* jl: less (signed <) */

loc_004E5B62: ;
    if (TEST_Z(ebx, ebx)) { sub_004E5D80(); return; } /* je: equal / zero */

loc_004E5B6A: ;
    ecx = 0; /* xor self */

loc_004E5B6C: ;
    esi = MEM32(ebp + 0x68);
    edi = MEM32(ebp + 0x74);
    edi = edi + ecx * 2;
    edx = 0x10;
    mm4 = MEM32(esi + ecx * 2 + 0x10); /* movd */
    /* TODO: pcmpeqb mm1, mm1 */
    /* TODO: psrld mm1, 0x1f */
    mm5 = MEM32(esi + ecx * 2 + 0x70); /* movd */
    /* TODO: pslld mm1, 2 */
    /* SSE: movq mm0, mm4 */
    /* TODO: paddw mm0, mm5 */
    /* TODO: punpcklwd mm4, mm0 */
    /* TODO: punpcklwd mm5, mm0 */
    /* SSE: movq mm0, qword ptr [0x4ea450] */
    /* TODO: pmaddwd mm4, mm0 */
    /* TODO: paddd mm4, mm1 */
    /* SSE: movq mm0, qword ptr [0x4ea448] */
    /* TODO: pmaddwd mm5, mm0 */
    mm6 = MEM32(esi + ecx * 2 + 0x50); /* movd */
    /* TODO: paddd mm5, mm1 */
    /* TODO: psrad mm4, 3 */
    mm7 = MEM32(esi + ecx * 2 + 0x30); /* movd */
    /* TODO: psrad mm5, 3 */
    /* SSE: movq mm0, mm6 */
    /* TODO: paddw mm0, mm7 */
    /* TODO: punpcklwd mm6, mm0 */
    /* TODO: punpcklwd mm7, mm0 */
    /* SSE: movq mm0, qword ptr [0x4ea440] */
    /* TODO: pmaddwd mm6, mm0 */
    /* TODO: paddd mm6, mm1 */
    /* SSE: movq mm0, qword ptr [0x4ea438] */
    /* TODO: pmaddwd mm7, mm0 */
    mm2 = MEM32(esi + ecx * 2 + 0x60); /* movd */
    /* TODO: paddd mm7, mm1 */
    /* TODO: psrad mm6, 3 */
    mm3 = MEM32(esi + ecx * 2 + 0x20); /* movd */
    /* TODO: psrad mm7, 3 */
    /* SSE: movq mm0, mm2 */
    /* TODO: paddw mm0, mm3 */
    /* TODO: punpcklwd mm2, mm0 */
    /* TODO: punpcklwd mm3, mm0 */
    /* SSE: movq mm0, qword ptr [0x4ea428] */
    /* TODO: pmaddwd mm2, mm0 */
    /* TODO: paddd mm2, mm1 */
    /* SSE: movq mm0, qword ptr [0x4ea430] */
    /* TODO: pmaddwd mm3, mm0 */
    /* TODO: paddd mm3, mm1 */
    /* TODO: psrad mm2, 3 */
    /* TODO: psrad mm3, 3 */
    /* SSE: movq mm0, mm4 */
    /* TODO: psubd mm4, mm6 */
    /* TODO: paddd mm6, mm0 */
    /* SSE: movq mm0, mm5 */
    /* TODO: psubd mm5, mm7 */
    /* TODO: paddd mm7, mm0 */
    /* SSE: movq mm0, mm4 */
    /* TODO: psubd mm4, mm5 */
    /* TODO: paddd mm5, mm0 */
    /* SSE: movq mm0, mm5 */
    /* pand mm0, qword ptr [0x4ea420] (MMX/SIMD integer) */
    /* SSE: movq mm1, qword ptr [0x4ea418] */
    /* TODO: pmaddwd mm0, mm1 */
    /* TODO: psrld mm5, 0xf */
    /* TODO: pmaddwd mm5, mm1 */
    /* TODO: pslld mm5, 0xf */
    /* TODO: paddd mm5, mm0 */
    /* SSE: movq mm0, qword ptr [0x4ea410] */
    /* TODO: paddd mm5, mm0 */
    /* TODO: psrad mm5, 8 */
    /* SSE: movq mm0, mm4 */
    /* pand mm0, qword ptr [0x4ea420] (MMX/SIMD integer) */
    /* TODO: pmaddwd mm0, mm1 */
    /* TODO: psrld mm4, 0xf */
    /* TODO: pmaddwd mm4, mm1 */
    /* TODO: pslld mm4, 0xf */
    /* TODO: paddd mm4, mm0 */
    /* SSE: movq mm1, qword ptr [0x4ea410] */
    /* TODO: paddd mm4, mm1 */
    /* TODO: psrad mm4, 8 */
    /* SSE: movq qword ptr [ebp + 0x60], mm4 */
    /* TODO: pslld mm1, 6 */
    mm0 = MEM32(esi + ecx * 2); /* movd */
    /* TODO: punpcklwd mm0, mm0 */
    /* TODO: pslld mm0, 0x10 */
    /* TODO: psrad mm0, 8 */
    /* TODO: paddd mm0, mm1 */
    mm4 = MEM32(esi + ecx * 2 + 0x40); /* movd */
    /* TODO: punpcklwd mm4, mm4 */
    /* TODO: pslld mm4, 0x10 */
    /* TODO: psrad mm4, 8 */
    /* SSE: movq mm1, mm0 */
    /* TODO: psubd mm0, mm4 */
    /* TODO: paddd mm4, mm1 */
    /* SSE: movq mm1, mm4 */
    /* TODO: psubd mm4, mm3 */
    /* TODO: paddd mm3, mm1 */
    /* SSE: movq mm1, mm0 */
    /* TODO: psubd mm0, mm2 */
    /* TODO: paddd mm2, mm1 */
    /* SSE: movq mm1, mm3 */
    /* TODO: psubd mm3, mm6 */
    /* TODO: psrad mm3, 0xe */
    /* TODO: paddd mm6, mm1 */
    /* TODO: psrad mm6, 0xe */
    /* TODO: packssdw mm6, mm6 */
    MEM32(edi) = mm6; /* movd */
    ebx = edi + edx * 8;
    ebx = ebx - edx;
    /* TODO: packssdw mm3, mm3 */
    MEM32(ebx) = mm3; /* movd */
    /* SSE: movq mm6, qword ptr [ebp + 0x60] */
    /* SSE: movq mm1, mm4 */
    /* TODO: psubd mm4, mm7 */
    /* TODO: psrad mm4, 0xe */
    /* TODO: paddd mm7, mm1 */
    /* TODO: psrad mm7, 0xe */
    /* TODO: packssdw mm4, mm4 */
    MEM32(edi + edx * 4) = mm4; /* movd */
    ebx = edi + edx * 2;
    /* SSE: movq mm1, mm2 */
    /* TODO: packssdw mm7, mm7 */
    MEM32(ebx + edx) = mm7; /* movd */
    /* TODO: psubd mm2, mm5 */
    /* TODO: psrad mm2, 0xe */
    /* TODO: paddd mm5, mm1 */
    /* TODO: psrad mm5, 0xe */
    ebx = ebx + edx * 2;
    /* TODO: packssdw mm2, mm2 */
    MEM32(ebx + edx * 2) = mm2; /* movd */
    /* SSE: movq mm3, mm0 */
    /* TODO: psubd mm0, mm6 */
    /* TODO: packssdw mm5, mm5 */
    MEM32(edi + edx) = mm5; /* movd */
    /* TODO: psrad mm0, 0xe */
    /* TODO: paddd mm6, mm3 */
    /* TODO: psrad mm6, 0xe */
    /* TODO: packssdw mm0, mm0 */
    MEM32(ebx + edx) = mm0; /* movd */
    ecx = ecx + 2;
    (void)0; /* cmp ecx, 8 - flags set for next jcc */
    /* TODO: packssdw mm6, mm6 */
    MEM32(edi + edx * 2) = mm6; /* movd */
    if (CMP_NE(ecx, 8)) goto loc_004E5B6C; /* jne: not equal / not zero */

loc_004E5D7B: ;
    g_seh_ebp = ebp; sub_004E5F9E(); return; /* tail jmp 0x004E5F9E */

}

/**
 * sub_004E5FAA
 * Original: 0x004E5FAA - 0x004E6221 (631 bytes, 192 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_004E5FAA(void)
{
    uint32_t ebp;
    int _flags = 0; /* fallback flag var */

loc_004E5FAA: ;
    PUSH32(esp, ebp);
    ebp = esp;
    esp = esp - 0x18;
    eax = MEM32(ebp + 0x10);
    edx = MEM32(ebp + 0xC);
    eax = eax << 6;
    MEM32(ebp + 8) = MEM32(ebp + 8) + eax;
    ecx = MEM32(ebp + 8);
    PUSH32(esp, ebx);
    PUSH32(esp, esi);
    ecx = ecx + 4;
    MEM32(ebp + -24) = 4;
    PUSH32(esp, edi);

loc_004E5FCC: ;
    eax = (uint32_t)(int32_t)SMEM16(edx + 4);
    esi = (uint32_t)(int32_t)SMEM16(edx + 2);
    ebx = (uint32_t)(int32_t)SMEM16(edx + 0xE);
    edi = ebx + esi;
    ebx = (uint32_t)((int32_t)ebx * (int32_t)0xD4E);
    esi = (uint32_t)((int32_t)esi * (int32_t)0x8E4);
    edi = (uint32_t)((int32_t)edi * (int32_t)0x235);
    MEM32(ebp + 0xC) = eax;
    eax = (uint32_t)(int32_t)SMEM16(edx + 6);
    esi = esi + edi;
    edi = edi - ebx;
    MEM32(ebp + 0x10) = eax;
    eax = (uint32_t)(int32_t)SMEM16(edx + 8);
    ebx = MEM32(ebp + 0x10);
    MEM32(ebp + -16) = edi;
    eax = eax << 0xB;
    MEM32(ebp + -12) = eax;
    eax = (uint32_t)(int32_t)SMEM16(edx + 0xA);
    MEM32(ebp + -8) = eax;
    edi = MEM32(ebp + -8);
    edi = edi + ebx;
    ebx = MEM32(ebp + -8);
    edi = (uint32_t)((int32_t)edi * (int32_t)0x968);
    ebx = (uint32_t)((int32_t)ebx * (int32_t)0x31F);
    eax = (uint32_t)(int32_t)SMEM16(edx + 0xC);
    MEM32(ebp + -20) = edi;
    edi = edi - ebx;
    ebx = MEM32(ebp + 0x10);
    ebx = (uint32_t)((int32_t)ebx * (int32_t)0xFB1);
    MEM32(ebp + -8) = edi;
    edi = MEM32(ebp + -20);
    edi = edi - ebx;
    MEM32(ebp + 0x10) = edi;
    edi = MEM32(ebp + -12);
    MEM32(ebp + -4) = eax;
    eax = (uint32_t)(int32_t)SMEM16(edx);
    eax = eax << 0xB;
    eax = eax + 0x80;
    ebx = eax + edi;
    MEM32(ebp + -20) = ebx;
    ebx = MEM32(ebp + 0xC);
    eax = eax - edi;
    edi = MEM32(ebp + -4);
    edi = edi + ebx;
    ebx = MEM32(ebp + -4);
    edi = (uint32_t)((int32_t)edi * (int32_t)0x454);
    ebx = (uint32_t)((int32_t)ebx * (int32_t)0xEC8);
    MEM32(ebp + -12) = edi;
    edi = edi - ebx;
    MEM32(ebp + -4) = edi;
    edi = MEM32(ebp + 0xC);
    edi = (uint32_t)((int32_t)edi * (int32_t)0x620);
    edi = edi + MEM32(ebp + -12);
    MEM32(ebp + 0xC) = edi;
    edi = MEM32(ebp + -8);
    ebx = edi + esi;
    MEM32(ebp + -12) = ebx;
    ebx = MEM32(ebp + 0x10);
    esi = esi - edi;
    edi = MEM32(ebp + -16);
    ebx = ebx + edi;
    edi = edi - MEM32(ebp + 0x10);
    MEM32(ebp + -8) = ebx;
    ebx = MEM32(ebp + 0xC);
    MEM32(ebp + -16) = edi;
    edi = MEM32(ebp + -20);
    ebx = ebx + edi;
    edi = edi - MEM32(ebp + 0xC);
    MEM32(ebp + 0x10) = ebx;
    ebx = MEM32(ebp + -4);
    ebx = ebx + eax;
    eax = eax - MEM32(ebp + -4);
    MEM32(ebp + 0xC) = ebx;
    ebx = MEM32(ebp + -16);
    ebx = ebx + esi;
    esi = esi - MEM32(ebp + -16);
    ebx = (uint32_t)((int32_t)ebx * (int32_t)0xB5);
    ebx = ebx + 0x80;
    ebx = (uint32_t)((int32_t)ebx >> 8);
    esi = (uint32_t)((int32_t)esi * (int32_t)0xB5);
    MEM32(ebp + -4) = ebx;
    ebx = MEM32(ebp + -12);
    esi = esi + 0x80;
    esi = (uint32_t)((int32_t)esi >> 8);
    MEM32(ebp + -20) = esi;
    esi = MEM32(ebp + 0x10);
    ebx = ebx + esi;
    esi = MEM32(ebp + -4);
    ebx = (uint32_t)((int32_t)ebx >> 8);
    MEM16(ecx + -4) = LO16(ebx);
    ebx = MEM32(ebp + 0xC);
    ebx = ebx + esi;
    ebx = (uint32_t)((int32_t)ebx >> 8);
    MEM16(ecx + -2) = LO16(ebx);
    ebx = MEM32(ebp + -20);
    ebx = ebx + eax;
    eax = eax - MEM32(ebp + -20);
    ebx = (uint32_t)((int32_t)ebx >> 8);
    eax = (uint32_t)((int32_t)eax >> 8);
    MEM16(ecx + 6) = LO16(eax);
    eax = MEM32(ebp + 0xC);
    eax = eax - esi;
    eax = (uint32_t)((int32_t)eax >> 8);
    MEM16(ecx) = LO16(ebx);
    ebx = MEM32(ebp + -8);
    MEM16(ecx + 8) = LO16(eax);
    eax = MEM32(ebp + 0x10);
    eax = eax - MEM32(ebp + -12);
    ebx = ebx + edi;
    edi = edi - MEM32(ebp + -8);
    ebx = (uint32_t)((int32_t)ebx >> 8);
    edi = (uint32_t)((int32_t)edi >> 8);
    eax = (uint32_t)((int32_t)eax >> 8);
    MEM16(ecx + 2) = LO16(ebx);
    MEM16(ecx + 4) = LO16(edi);
    MEM16(ecx + 0xA) = LO16(eax);
    ecx = ecx + 0x10;
    edx = edx + 0x10;
    MEM32(ebp + -24) = MEM32(ebp + -24) - 1;
    if ((MEM32(ebp + -24) != 0)) goto loc_004E5FCC; /* jne: not equal / not zero */

loc_004E615C: ;
    ecx = MEM32(ebp + 8);
    esi = ecx + 0x10;
    ebx = esi + 0x10;
    eax = ebx + 0x10;
    MEM32(ebp + 8) = ecx;
    MEM32(ebp + 8) = MEM32(ebp + 8) - esi;
    ebx = ebx - esi;
    MEM32(ebp + -16) = eax;
    MEM32(ebp + -16) = MEM32(ebp + -16) - esi;
    MEM32(ebp + -20) = ebx;
    MEM32(ebp + -24) = 8;

loc_004E6180: ;
    edx = (uint32_t)(int32_t)SMEM16(ebx + esi);
    edi = (uint32_t)(int32_t)SMEM16(esi);
    eax = MEM32(ebp + 8);
    ecx = (uint32_t)(int32_t)SMEM16(eax + esi);
    eax = MEM32(ebp + -16);
    ebx = (uint32_t)(int32_t)SMEM16(esi + eax);
    eax = edx + ecx;
    ecx = ecx - edx;
    eax = (uint32_t)((int32_t)eax * (int32_t)0x5A8);
    edx = edi;
    edi = (uint32_t)((int32_t)edi * (int32_t)0x310);
    ecx = (uint32_t)((int32_t)ecx * (int32_t)0x5A8);
    MEM32(ebp + 0x10) = ebx;
    ebx = (uint32_t)((int32_t)ebx * (int32_t)0x310);
    edx = (uint32_t)((int32_t)edx * (int32_t)0x764);
    edx = edx + ebx;
    ebx = MEM32(ebp + 0x10);
    ebx = (uint32_t)((int32_t)ebx * (int32_t)0x764);
    edi = edi - ebx;
    ebx = MEM32(ebp + 8);
    MEM32(ebp + 0xC) = edi;
    edi = eax + edx + 0x8000;
    edi = (uint32_t)((int32_t)edi >> 0x10);
    MEM16(ebx + esi) = LO16(edi);
    edi = MEM32(ebp + 0xC);
    ebx = ecx + edi + 0x8000;
    ecx = ecx - edi;
    ebx = (uint32_t)((int32_t)ebx >> 0x10);
    MEM16(esi) = LO16(ebx);
    ebx = MEM32(ebp + -20);
    edi = 0x8000;
    ecx = ecx + edi;
    eax = eax - edx;
    ecx = (uint32_t)((int32_t)ecx >> 0x10);
    MEM16(ebx + esi) = LO16(ecx);
    ecx = MEM32(ebp + -16);
    eax = eax + edi;
    eax = (uint32_t)((int32_t)eax >> 0x10);
    MEM16(esi + ecx) = LO16(eax);
    esi++;
    esi++;
    MEM32(ebp + -24) = MEM32(ebp + -24) - 1;
    if ((MEM32(ebp + -24) != 0)) goto loc_004E6180; /* jne: not equal / not zero */

loc_004E621A: ;
    POP32(esp, edi);
    POP32(esp, esi);
    POP32(esp, ebx);
    esp = ebp;
    POP32(esp, ebp); /* leave */
    esp += 16; return; /* ret 12 */

}

/**
 * sub_004E6221
 * Original: 0x004E6221 - 0x004E64CB (682 bytes, 213 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_004E6221(void)
{
    uint32_t ebp;
    int _flags = 0; /* fallback flag var */

loc_004E6221: ;
    PUSH32(esp, ebp);
    ebp = esp;
    esp = esp - 0x2C;
    eax = MEM32(ebp + 0x10);
    ecx = MEM32(ebp + 8);
    PUSH32(esp, ebx);
    PUSH32(esp, esi);
    esi = ecx + eax * 8;
    eax = MEM32(ebp + 0xC);
    MEM32(ebp + 8) = esi;
    PUSH32(esp, edi);
    esi = esi + 4;
    MEM32(ebp + -16) = 8;

loc_004E6243: ;
    edx = (uint32_t)(int32_t)SMEM16(eax + 4);
    ecx = (uint32_t)(int32_t)SMEM16(eax);
    edi = (uint32_t)(int32_t)SMEM16(eax + 2);
    ebx = (uint32_t)(int32_t)SMEM16(eax + 6);
    eax = edx + ecx;
    ecx = ecx - edx;
    eax = (uint32_t)((int32_t)eax * (int32_t)0x5A8);
    MEM32(ebp + 0x10) = ebx;
    ebx = (uint32_t)((int32_t)ebx * (int32_t)0x310);
    ecx = (uint32_t)((int32_t)ecx * (int32_t)0x5A8);
    edx = edi;
    edi = (uint32_t)((int32_t)edi * (int32_t)0x310);
    edx = (uint32_t)((int32_t)edx * (int32_t)0x764);
    edx = edx + ebx;
    ebx = MEM32(ebp + 0x10);
    ebx = (uint32_t)((int32_t)ebx * (int32_t)0x764);
    edi = edi - ebx;
    ebx = edx + eax + 0x40;
    ebx = (uint32_t)((int32_t)ebx >> 7);
    eax = eax - edx;
    MEM16(esi + -4) = LO16(ebx);
    ebx = edi + ecx + 0x40;
    eax = eax + 0x40;
    ecx = ecx - edi;
    eax = (uint32_t)((int32_t)eax >> 7);
    ecx = ecx + 0x40;
    MEM16(esi + 2) = LO16(eax);
    eax = MEM32(ebp + 0xC);
    ebx = (uint32_t)((int32_t)ebx >> 7);
    ecx = (uint32_t)((int32_t)ecx >> 7);
    MEM16(esi + -2) = LO16(ebx);
    MEM16(esi) = LO16(ecx);
    eax = eax + 8;
    esi = esi + 0x10;
    MEM32(ebp + -16) = MEM32(ebp + -16) - 1;
    MEM32(ebp + 0xC) = eax;
    if ((MEM32(ebp + -16) != 0)) goto loc_004E6243; /* jne: not equal / not zero */

loc_004E62C9: ;
    ecx = MEM32(ebp + 8);
    ecx = ecx + 0x10;
    eax = ecx + 0x10;
    esi = eax + 0x10;
    edi = esi + 0x10;
    ebx = edi + 0x10;
    edx = ebx + 0x10;
    MEM32(ebp + 0xC) = edx;
    edx = edx + 0x10;
    MEM32(ebp + 0x10) = edx;
    edx = MEM32(ebp + 8);
    MEM32(ebp + -12) = esi;
    esi = MEM32(ebp + 0xC);
    MEM32(ebp + -12) = MEM32(ebp + -12) - ecx;
    MEM32(ebp + -8) = eax;
    eax = MEM32(ebp + 0x10);
    MEM32(ebp + -8) = MEM32(ebp + -8) - ecx;
    edx = edx - ecx;
    edi = edi - ecx;
    ebx = ebx - ecx;
    esi = esi - ecx;
    eax = eax - ecx;
    MEM32(ebp + -20) = edx;
    MEM32(ebp + -36) = edi;
    MEM32(ebp + -40) = ebx;
    MEM32(ebp + -44) = esi;
    MEM32(ebp + -24) = eax;
    MEM32(ebp + -28) = 4;

loc_004E631C: ;
    edx = (uint32_t)(int32_t)SMEM16(edi + ecx);
    edx = edx << 8;
    MEM32(ebp + 0xC) = edx;
    edx = (uint32_t)(int32_t)SMEM16(esi + ecx);
    MEM32(ebp + -4) = edx;
    edx = MEM32(ebp + -8);
    edx = (uint32_t)(int32_t)SMEM16(edx + ecx);
    edi = (uint32_t)(int32_t)SMEM16(ecx);
    MEM32(ebp + 8) = edx;
    edx = MEM32(ebp + -24);
    esi = (uint32_t)(int32_t)SMEM16(edx + ecx);
    edx = MEM32(ebp + -12);
    edx = (uint32_t)(int32_t)SMEM16(edx + ecx);
    ebx = (uint32_t)(int32_t)SMEM16(ebx + ecx);
    MEM32(ebp + 0x10) = edx;
    edx = esi + edi;
    esi = (uint32_t)((int32_t)esi * (int32_t)0xD4E);
    edi = (uint32_t)((int32_t)edi * (int32_t)0x8E4);
    edx = (uint32_t)((int32_t)edx * (int32_t)0x235);
    edx = edx + 4;
    edi = edi + edx;
    edx = edx - esi;
    edx = (uint32_t)((int32_t)edx >> 3);
    MEM32(ebp + -32) = edx;
    edx = MEM32(ebp + 0x10);
    esi = edx + ebx;
    ebx = (uint32_t)((int32_t)ebx * (int32_t)0x31F);
    esi = (uint32_t)((int32_t)esi * (int32_t)0x968);
    esi = esi + 4;
    edx = esi;
    eax = MEM32(ebp + -20);
    eax = (uint32_t)(int32_t)SMEM16(eax + ecx);
    edx = edx - ebx;
    ebx = MEM32(ebp + 8);
    edx = (uint32_t)((int32_t)edx >> 3);
    MEM32(ebp + -16) = edx;
    edx = MEM32(ebp + 0x10);
    edx = (uint32_t)((int32_t)edx * (int32_t)0xFB1);
    esi = esi - edx;
    esi = (uint32_t)((int32_t)esi >> 3);
    MEM32(ebp + 0x10) = esi;
    esi = MEM32(ebp + 0xC);
    eax = eax + 0x20;
    eax = eax << 8;
    edx = esi + eax;
    eax = eax - esi;
    esi = MEM32(ebp + -4);
    esi = esi + ebx;
    ebx = MEM32(ebp + -4);
    esi = (uint32_t)((int32_t)esi * (int32_t)0x454);
    esi = esi + 4;
    ebx = (uint32_t)((int32_t)ebx * (int32_t)0xEC8);
    MEM32(ebp + 0xC) = esi;
    esi = esi - ebx;
    esi = (uint32_t)((int32_t)esi >> 3);
    MEM32(ebp + -4) = esi;
    esi = MEM32(ebp + 8);
    esi = (uint32_t)((int32_t)esi * (int32_t)0x620);
    esi = esi + MEM32(ebp + 0xC);
    edi = (uint32_t)((int32_t)edi >> 3);
    esi = (uint32_t)((int32_t)esi >> 3);
    MEM32(ebp + 8) = esi;
    esi = MEM32(ebp + -16);
    ebx = esi + edi;
    edi = edi - esi;
    esi = MEM32(ebp + 0x10);
    MEM32(ebp + 0xC) = ebx;
    ebx = MEM32(ebp + -32);
    esi = esi + ebx;
    ebx = ebx - MEM32(ebp + 0x10);
    MEM32(ebp + -16) = esi;
    esi = MEM32(ebp + 8);
    esi = esi + edx;
    edx = edx - MEM32(ebp + 8);
    MEM32(ebp + 0x10) = esi;
    esi = MEM32(ebp + -4);
    esi = esi + eax;
    eax = eax - MEM32(ebp + -4);
    MEM32(ebp + 8) = esi;
    esi = ebx + edi;
    esi = (uint32_t)((int32_t)esi * (int32_t)0xB5);
    edi = edi - ebx;
    ebx = MEM32(ebp + 0xC);
    edi = (uint32_t)((int32_t)edi * (int32_t)0xB5);
    edi = edi + 0x80;
    edi = (uint32_t)((int32_t)edi >> 8);
    MEM32(ebp + -4) = edi;
    edi = MEM32(ebp + 0x10);
    ebx = ebx + edi;
    edi = MEM32(ebp + -20);
    ebx = (uint32_t)((int32_t)ebx >> 0xE);
    MEM16(edi + ecx) = LO16(ebx);
    edi = MEM32(ebp + 8);
    ebx = MEM32(ebp + -8);
    esi = esi + 0x80;
    esi = (uint32_t)((int32_t)esi >> 8);
    edi = edi + esi;
    edi = (uint32_t)((int32_t)edi >> 0xE);
    MEM16(ecx) = LO16(edi);
    edi = MEM32(ebp + -4);
    edi = edi + eax;
    eax = eax - MEM32(ebp + -4);
    edi = (uint32_t)((int32_t)edi >> 0xE);
    MEM16(ebx + ecx) = LO16(edi);
    edi = MEM32(ebp + -16);
    ebx = MEM32(ebp + -12);
    edi = edi + edx;
    edx = edx - MEM32(ebp + -16);
    eax = (uint32_t)((int32_t)eax >> 0xE);
    edi = (uint32_t)((int32_t)edi >> 0xE);
    MEM16(ebx + ecx) = LO16(edi);
    edi = MEM32(ebp + -36);
    ebx = MEM32(ebp + -40);
    edx = (uint32_t)((int32_t)edx >> 0xE);
    MEM16(edi + ecx) = LO16(edx);
    edx = MEM32(ebp + -24);
    MEM16(ebx + ecx) = LO16(eax);
    eax = MEM32(ebp + 8);
    eax = eax - esi;
    esi = MEM32(ebp + -44);
    eax = (uint32_t)((int32_t)eax >> 0xE);
    MEM16(esi + ecx) = LO16(eax);
    eax = MEM32(ebp + 0x10);
    eax = eax - MEM32(ebp + 0xC);
    eax = (uint32_t)((int32_t)eax >> 0xE);
    MEM16(edx + ecx) = LO16(eax);
    ecx++;
    ecx++;
    MEM32(ebp + -28) = MEM32(ebp + -28) - 1;
    if ((MEM32(ebp + -28) != 0)) goto loc_004E631C; /* jne: not equal / not zero */

loc_004E64C4: ;
    POP32(esp, edi);
    POP32(esp, esi);
    POP32(esp, ebx);
    esp = ebp;
    POP32(esp, ebp); /* leave */
    esp += 16; return; /* ret 12 */

}

/**
 * sub_004E64CB
 * Original: 0x004E64CB - 0x004E64E0 (21 bytes, 10 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_004E64CB(void)
{
    int _flags = 0; /* fallback flag var */

loc_004E64CB: ;
    eax = ecx;
    ecx = MEM32(eax + 4);
    if (TEST_Z(ecx, ecx)) { sub_004E64E0(); return; } /* je: equal / zero */

loc_004E64D4: ;
    ecx--;
    MEM32(eax + 4) = ecx;
    eax = MEM32(eax);
    eax = eax >> LO8(ecx);
    eax = eax & 1;
    esp += 4; return; /* ret */

}

/**
 * sub_004E64FA
 * Original: 0x004E64FA - 0x004E6513 (25 bytes, 8 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_004E64FA(void)
{
    uint32_t ebp;
    int _flags = 0; /* fallback flag var */
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_004E64FA: ;
    ecx = MEM32(esp + 4);
    PUSH32(esp, 0); sub_004E64CB(); /* call 0x004E64CB */

loc_004E6503: ;
    if (TEST_Z(eax, eax)) { sub_004E6513(); return; } /* je: equal / zero */

loc_004E6507: ;
    ecx = MEM32(esp + 4);
    PUSH32(esp, 0); sub_004E64CB(); /* call 0x004E64CB */

loc_004E6510: ;
    eax++;
    g_seh_ebp = ebp; sub_004E6515(); return; /* tail jmp 0x004E6515 */

}

/**
 * sub_004E6518
 * Original: 0x004E6518 - 0x004E6541 (41 bytes, 18 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_004E6518(void)
{
    uint32_t ebp;
    int _flags = 0; /* fallback flag var */
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_004E6518: ;
    edx = MEM32(esp + 4);
    eax = MEM32(esp + 8);
    PUSH32(esp, edi);
    edi = MEM32(edx + 4);
    if (CMP_A(eax, edi)) { sub_004E6541(); return; } /* ja: above (unsigned >) */

loc_004E6528: ;
    edi = edi - eax;
    PUSH32(esp, 0x20);
    POP32(esp, ecx);
    ecx = ecx - eax;
    eax = eax | 0xFFFFFFFFu;
    MEM32(edx + 4) = edi;
    edx = MEM32(edx);
    eax = eax >> LO8(ecx);
    ecx = edi;
    edx = edx >> LO8(ecx);
    eax = eax & edx;
    g_seh_ebp = ebp; sub_004E657C(); return; /* tail jmp 0x004E657C */

}

/**
 * sub_004E6580
 * Original: 0x004E6580 - 0x004E65AF (47 bytes, 21 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_004E6580(void)
{
    int _flags = 0; /* fallback flag var */

loc_004E6580: ;
    eax = MEM32(ecx + 4);
    if (CMP_BE(edx, eax)) goto loc_004E65A9; /* jbe: below or equal (unsigned <=) */

loc_004E6587: ;
    edx = edx - eax;
    eax = edx;
    eax = eax >> 5;
    eax = eax << 2;
    MEM32(ecx + 8) = MEM32(ecx + 8) + eax;
    eax = MEM32(ecx + 8);
    PUSH32(esp, esi);
    esi = MEM32(eax);
    eax = eax + 4;
    PUSH32(esp, 0x20);
    MEM32(ecx + 8) = eax;
    POP32(esp, eax);
    MEM32(ecx) = esi;
    edx = edx & 0x1F;
    POP32(esp, esi);

loc_004E65A9: ;
    eax = eax - edx;
    MEM32(ecx + 4) = eax;
    esp += 4; return; /* ret */

}

/**
 * sub_004E65AF
 * Original: 0x004E65AF - 0x004E65DF (48 bytes, 23 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_004E65AF(void)
{
    uint32_t ebp;
    int _flags = 0; /* fallback flag var */
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_004E65AF: ;
    PUSH32(esp, ebx);
    PUSH32(esp, esi);
    PUSH32(esp, edi);
    esi = edx;
    PUSH32(esp, ecx);
    edi = MEM32(ecx + 8);
    ebx = MEM32(ecx + 4);
    edx = MEM32(ecx);
    ecx = ZX16(MEM16(esi));
    ecx = ecx & 0xF;
    SET_HI8(ecx, LO8(ecx));
    if (CMP_G(ebx & ebx, 0)) goto loc_004E65D1; /* jg: greater (signed >) */

loc_004E65C9: ;
    edx = MEM32(edi);
    edi = edi + 4;
    ebx = ebx + 0x20;

loc_004E65D1: ;
    if (CMP_L(LO8(ebx), LO8(ecx))) { sub_004E65DF(); return; } /* jl: less (signed <) */

loc_004E65D5: ;
    SET_LO8(ecx, (uint32_t)(-(int32_t)LO8(ecx)));
    SET_LO8(ecx, LO8(ecx) + LO8(ebx));
    eax = edx;
    eax = eax >> LO8(ecx);
    g_seh_ebp = ebp; sub_004E65F1(); return; /* tail jmp 0x004E65F1 */

}

/**
 * sub_004E6634
 * Original: 0x004E6634 - 0x004E6802 (462 bytes, 149 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_004E6634(void)
{
    uint32_t ebp;
    int _flags = 0; /* fallback flag var */
    uint64_t mm0, mm1, mm2, mm3, mm4, mm5, mm6, mm7;

loc_004E6634: ;
    PUSH32(esp, ebp);
    ebp = esp;
    eax = MEM32(ebp + 0xC);
    eax = (uint32_t)((int32_t)eax * (int32_t)0xFFFFFFFDu);
    MEM32(ebp + 8) = MEM32(ebp + 8) + eax;
    MEM32(ebp + 0x14) = (uint32_t)((int32_t)MEM32(ebp + 0x14) >> 2);
    PUSH32(esp, ebx);
    PUSH32(esp, esi);
    PUSH32(esp, edi);
    eax = MEM32(ebp + 0xC);
    esi = MEM32(ebp + 8);
    ecx = MEM32(ebp + 0x14);
    ebx = eax;
    ebx = (uint32_t)(-(int32_t)ebx);

loc_004E6654: ;
    edi = esi + eax * 4;
    edi = edi + eax;
    /* pxor mm7, mm7 (MMX/SIMD integer) */
    /* SSE: movq mm6, qword ptr [0x4ea460] */
    /* SSE: movq mm5, qword ptr [0x4ea458] */
    mm0 = MEM32(esi + ebx); /* movd */
    /* TODO: punpcklbw mm0, mm7 */
    /* TODO: paddw mm0, mm0 */
    mm1 = MEM32(esi); /* movd */
    /* TODO: punpcklbw mm1, mm7 */
    /* TODO: pmullw mm1, mm6 */
    /* TODO: psubw mm0, mm1 */
    mm1 = MEM32(esi + eax); /* movd */
    /* TODO: punpcklbw mm1, mm7 */
    /* SSE: movq mm2, mm1 */
    /* TODO: pmullw mm1, mm6 */
    /* TODO: paddw mm0, mm1 */
    mm1 = MEM32(esi + eax * 2); /* movd */
    /* TODO: punpcklbw mm1, mm7 */
    /* TODO: psubw mm0, mm1 */
    /* TODO: psubw mm0, mm1 */
    /* TODO: paddw mm0, mm5 */
    /* TODO: psraw mm0, 3 */
    /* TODO: paddw mm2, mm2 */
    /* TODO: pmullw mm1, mm6 */
    /* TODO: psubw mm2, mm1 */
    mm1 = MEM32(edi + ebx * 2); /* movd */
    /* TODO: punpcklbw mm1, mm7 */
    /* SSE: movq mm3, mm1 */
    /* TODO: pmullw mm1, mm6 */
    /* TODO: paddw mm1, mm2 */
    mm2 = MEM32(edi + ebx); /* movd */
    /* TODO: punpcklbw mm2, mm7 */
    /* TODO: psubw mm1, mm2 */
    /* TODO: psubw mm1, mm2 */
    /* TODO: paddw mm1, mm5 */
    /* TODO: psraw mm1, 3 */
    /* TODO: paddw mm3, mm3 */
    /* TODO: pmullw mm2, mm6 */
    /* TODO: psubw mm3, mm2 */
    mm2 = MEM32(edi); /* movd */
    /* TODO: punpcklbw mm2, mm7 */
    /* TODO: pmullw mm2, mm6 */
    /* TODO: paddw mm2, mm3 */
    mm3 = MEM32(edi + eax); /* movd */
    /* TODO: punpcklbw mm3, mm7 */
    /* TODO: psubw mm2, mm3 */
    /* TODO: psubw mm2, mm3 */
    /* TODO: paddw mm2, mm5 */
    /* TODO: psraw mm2, 3 */
    /* SSE: movq mm5, mm1 */
    /* TODO: psraw mm5, 0x10 */
    /* SSE: movq mm3, mm0 */
    /* TODO: psraw mm3, 0x10 */
    /* pxor mm0, mm3 (MMX/SIMD integer) */
    /* TODO: psubw mm0, mm3 */
    /* SSE: movq mm3, mm1 */
    /* SSE: movq mm4, mm1 */
    /* TODO: psraw mm3, 0x10 */
    /* pxor mm4, mm3 (MMX/SIMD integer) */
    /* TODO: psubw mm4, mm3 */
    /* SSE: movq mm3, mm2 */
    /* TODO: psraw mm3, 0x10 */
    /* pxor mm2, mm3 (MMX/SIMD integer) */
    /* TODO: psubw mm2, mm3 */
    /* SSE: movq mm3, mm4 */
    /* TODO: pcmpgtw mm3, mm0 */
    /* pand mm0, mm3 (MMX/SIMD integer) */
    /* pandn mm3, mm4 (MMX/SIMD integer) */
    /* por mm0, mm3 (MMX/SIMD integer) */
    /* SSE: movq mm3, mm2 */
    /* TODO: pcmpgtw mm3, mm0 */
    /* pand mm0, mm3 (MMX/SIMD integer) */
    /* pandn mm3, mm2 (MMX/SIMD integer) */
    /* por mm0, mm3 (MMX/SIMD integer) */
    /* pxor mm0, mm5 (MMX/SIMD integer) */
    /* TODO: psubw mm0, mm5 */
    mm5 = MEM32(ebp + 0x10); /* movd */
    /* TODO: punpcklwd mm5, mm5 */
    /* TODO: punpckldq mm5, mm5 */
    /* SSE: movq mm6, mm5 */
    /* TODO: pcmpgtw mm6, mm4 */
    /* TODO: psubw mm0, mm1 */
    /* TODO: pmullw mm0, qword ptr [0x4ea460] */
    /* SSE: movq mm5, mm0 */
    /* TODO: psraw mm5, 0x10 */
    /* pxor mm0, mm5 (MMX/SIMD integer) */
    /* TODO: psubw mm0, mm5 */
    /* TODO: psraw mm0, 3 */
    /* pxor mm0, mm5 (MMX/SIMD integer) */
    /* TODO: psubw mm0, mm5 */
    mm3 = MEM32(esi + eax * 2); /* movd */
    /* TODO: punpcklbw mm3, mm7 */
    /* SSE: movq mm4, mm3 */
    mm2 = MEM32(edi + ebx * 2); /* movd */
    /* TODO: punpcklbw mm2, mm7 */
    /* SSE: movq mm7, mm2 */
    /* TODO: psubw mm3, mm2 */
    /* pxor mm3, mm5 (MMX/SIMD integer) */
    /* TODO: psubw mm3, mm5 */
    /* TODO: psraw mm3, 1 */
    /* pxor mm3, mm5 (MMX/SIMD integer) */
    /* TODO: psubw mm3, mm5 */
    /* SSE: movq mm5, mm3 */
    /* TODO: psraw mm5, 0x10 */
    /* pxor mm3, mm5 (MMX/SIMD integer) */
    /* TODO: psubw mm3, mm5 */
    /* pxor mm0, mm5 (MMX/SIMD integer) */
    /* TODO: psubw mm0, mm5 */
    /* SSE: movq mm2, mm3 */
    /* TODO: pcmpgtw mm2, mm0 */
    /* pand mm0, mm2 (MMX/SIMD integer) */
    /* pandn mm2, mm3 (MMX/SIMD integer) */
    /* por mm0, mm2 (MMX/SIMD integer) */
    /* pxor mm2, mm2 (MMX/SIMD integer) */
    /* TODO: pcmpgtw mm2, mm0 */
    /* pandn mm2, mm0 (MMX/SIMD integer) */
    /* pxor mm2, mm5 (MMX/SIMD integer) */
    /* TODO: psubw mm2, mm5 */
    /* pand mm2, mm6 (MMX/SIMD integer) */
    /* TODO: psubw mm4, mm2 */
    /* TODO: paddw mm7, mm2 */
    /* TODO: packuswb mm4, mm4 */
    MEM32(esi + eax * 2) = mm4; /* movd */
    /* TODO: packuswb mm7, mm7 */
    MEM32(edi + ebx * 2) = mm7; /* movd */
    esi = esi + 4;
    ecx--;
    if ((ecx != 0)) goto loc_004E6654; /* jne: not equal / not zero */

loc_004E67F9: ;
    /* emms - empty MMX state */
    POP32(esp, edi);
    POP32(esp, esi);
    POP32(esp, ebx);
    POP32(esp, ebp);
    esp += 20; return; /* ret 16 */

}

/**
 * sub_004E6802
 * Original: 0x004E6802 - 0x004E696B (361 bytes, 123 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_004E6802(void)
{
    uint32_t ebp;
    int _flags = 0; /* fallback flag var */
    uint64_t mm0, mm1, mm2, mm3, mm4, mm5, mm6, mm7;

loc_004E6802: ;
    PUSH32(esp, ebp);
    ebp = esp;
    esp = esp - 0x28;
    PUSH32(esp, ebx);
    PUSH32(esp, esi);
    PUSH32(esp, edi);
    eax = 0xFFFE0005u;
    PUSH32(esp, 4);
    MEM32(ebp + -32) = eax;
    MEM32(ebp + -28) = eax;
    MEM32(ebp + -12) = eax;
    POP32(esp, eax);
    ecx = 0xFFFB0002u;
    PUSH32(esp, 5);
    MEM32(ebp + -24) = eax;
    MEM32(ebp + -20) = eax;
    POP32(esp, eax);
    MEM32(ebp + -40) = ecx;
    MEM32(ebp + -36) = ecx;
    MEM32(ebp + -16) = ecx;
    MEM32(ebp + -8) = eax;
    MEM32(ebp + -4) = eax;
    esi = MEM32(ebp + 8);
    edi = MEM32(ebp + 0x14);
    eax = MEM32(ebp + 0xC);
    /* pxor mm7, mm7 (MMX/SIMD integer) */

loc_004E6845: ;
    ecx = ZX8(MEM8(esi + 4));
    eax = ecx;
    ebx = ZX8(MEM8(esi + 5));
    /* SSE: movq mm0, qword ptr [esi + 1] */
    /* SSE: movq mm5, qword ptr [ebp - 0x28] */
    /* SSE: movq mm6, qword ptr [ebp - 0x20] */
    /* SSE: movq mm1, mm0 */
    /* TODO: punpcklbw mm1, mm7 */
    /* TODO: pmaddwd mm1, mm5 */
    /* SSE: movq mm2, mm0 */
    /* TODO: psrlq mm2, 0x10 */
    /* TODO: punpcklbw mm2, mm7 */
    /* SSE: movq mm3, mm2 */
    /* TODO: pmaddwd mm2, mm6 */
    /* TODO: paddd mm1, mm2 */
    /* TODO: paddd mm1, qword ptr [ebp - 0x18] */
    /* TODO: psrad mm1, 3 */
    /* pxor mm6, mm6 (MMX/SIMD integer) */
    /* TODO: pcmpgtb mm6, mm1 */
    /* pxor mm1, mm6 (MMX/SIMD integer) */
    /* TODO: psubd mm1, mm6 */
    /* SSE: movq mm4, mm1 */
    /* TODO: psrlq mm1, 0x20 */
    edx = mm1; /* movd */
    if (CMP_GE(edx, MEM32(ebp + 0x10))) goto loc_004E6956; /* jge: greater or equal (signed >=) */

loc_004E689E: ;
    eax = eax - ebx;
    edx = ((int32_t)eax < 0) ? 0xFFFFFFFF : 0; /* cdq */
    eax = eax ^ edx;
    eax = eax - edx;
    eax = eax >> 1;
    if (TEST_Z(eax, eax)) goto loc_004E6956; /* je: equal / zero */

loc_004E68AF: ;
    /* SSE: movq mm3, mm0 */
    /* TODO: punpckhbw mm3, mm7 */
    /* TODO: pmaddwd mm3, qword ptr [ebp - 0x10] */
    /* SSE: movq mm2, mm3 */
    /* TODO: psrlq mm2, 0x20 */
    /* TODO: paddd mm3, mm2 */
    /* TODO: paddd mm3, qword ptr [ebp - 0x18] */
    /* TODO: psrad mm3, 3 */
    /* SSE: movq mm2, mm1 */
    /* pxor mm5, mm5 (MMX/SIMD integer) */
    /* pcmpgtd mm5, mm3 (MMX/SIMD integer) */
    /* pxor mm3, mm5 (MMX/SIMD integer) */
    /* TODO: psubd mm3, mm5 */
    /* SSE: movq mm5, mm2 */
    /* pcmpgtd mm5, mm3 (MMX/SIMD integer) */
    /* pand mm3, mm5 (MMX/SIMD integer) */
    /* pandn mm5, mm2 (MMX/SIMD integer) */
    /* por mm3, mm5 (MMX/SIMD integer) */
    /* SSE: movq mm5, mm4 */
    /* pcmpgtd mm5, mm3 (MMX/SIMD integer) */
    /* pand mm3, mm5 (MMX/SIMD integer) */
    /* pandn mm5, mm4 (MMX/SIMD integer) */
    /* por mm3, mm5 (MMX/SIMD integer) */
    /* TODO: psubd mm3, mm1 */
    /* pxor mm4, mm4 (MMX/SIMD integer) */
    /* pcmpgtd mm4, mm3 (MMX/SIMD integer) */
    /* pxor mm3, mm4 (MMX/SIMD integer) */
    /* TODO: psubd mm3, mm4 */
    /* TODO: pmaddwd mm3, qword ptr [ebp - 8] */
    /* TODO: psrad mm3, 3 */
    /* pxor mm3, mm4 (MMX/SIMD integer) */
    /* TODO: psubd mm3, mm4 */
    /* TODO: psrlq mm6, 0x20 */
    /* pxor mm3, mm6 (MMX/SIMD integer) */
    /* TODO: psubd mm3, mm6 */
    mm5 = edx; /* movd */
    /* pxor mm3, mm5 (MMX/SIMD integer) */
    /* TODO: psubd mm3, mm5 */
    mm0 = eax; /* movd */
    /* SSE: movq mm1, mm0 */
    /* pcmpgtd mm1, mm3 (MMX/SIMD integer) */
    /* pand mm3, mm1 (MMX/SIMD integer) */
    /* pandn mm1, mm0 (MMX/SIMD integer) */
    /* por mm3, mm1 (MMX/SIMD integer) */
    /* pxor mm1, mm1 (MMX/SIMD integer) */
    /* pcmpgtd mm1, mm3 (MMX/SIMD integer) */
    /* pandn mm1, mm3 (MMX/SIMD integer) */
    /* pxor mm1, mm5 (MMX/SIMD integer) */
    /* TODO: psubd mm1, mm5 */
    eax = mm1; /* movd */
    ecx = ecx - eax;
    ebx = ebx + eax;
    MEM8(esi + 4) = LO8(ecx);
    MEM8(esi + 5) = LO8(ebx);

loc_004E6956: ;
    eax = MEM32(ebp + 0xC);
    esi = esi + eax;
    edi--;
    if ((edi != 0)) goto loc_004E6845; /* jne: not equal / not zero */

loc_004E6962: ;
    /* emms - empty MMX state */
    POP32(esp, edi);
    POP32(esp, esi);
    POP32(esp, ebx);
    esp = ebp;
    POP32(esp, ebp); /* leave */
    esp += 20; return; /* ret 16 */

}

/**
 * sub_004E696B
 * Original: 0x004E696B - 0x004E69F4 (137 bytes, 56 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_004E696B(void)
{
    uint32_t ebp;
    int _flags = 0; /* fallback flag var */

loc_004E696B: ;
    PUSH32(esp, ebp);
    ebp = esp;
    PUSH32(esp, ecx);
    (void)0; /* cmp MEM32(ebp + 0x18), 0 - flags set for next jcc */
    PUSH32(esp, 0xFFFFFFFCu);
    MEM32(ebp + -4) = 8;
    POP32(esp, eax);
    if (CMP_EQ(MEM32(ebp + 0x18), 0)) goto loc_004E6989; /* je: equal / zero */

loc_004E697F: ;
    PUSH32(esp, 0xFFFFFFF8u);
    MEM32(ebp + -4) = 0xC;
    POP32(esp, eax);

loc_004E6989: ;
    if (CMP_EQ(MEM32(ebp + 0x1C), 0)) goto loc_004E6993; /* je: equal / zero */

loc_004E698F: ;
    MEM32(ebp + -4) = MEM32(ebp + -4) + 4;

loc_004E6993: ;
    edx = MEM32(ebp + 8);
    PUSH32(esp, ebx);
    ebx = MEM32(ebp + 0xC);
    PUSH32(esp, esi);
    eax = (uint32_t)((int32_t)eax * (int32_t)ebx);
    PUSH32(esp, edi);
    PUSH32(esp, 4);
    PUSH32(esp, MEM32(ebp + 0x10));
    edi = eax + edx + 3;
    PUSH32(esp, ebx);
    PUSH32(esp, edx);
    PUSH32(esp, 0); sub_004E6634(); /* call 0x004E6634 */

loc_004E69AF: ;
    eax = MEM32(ebp + 0x14);
    eax--;
    (void)0; /* test eax, eax - flags set for next jcc */
    esi = edx + 4;
    if (CMP_LE(eax & eax, 0)) goto loc_004E69E1; /* jle: less or equal (signed <=) */

loc_004E69BA: ;
    MEM32(ebp + 0x18) = eax;

loc_004E69BD: ;
    PUSH32(esp, 8);
    PUSH32(esp, MEM32(ebp + 0x10));
    PUSH32(esp, ebx);
    PUSH32(esp, esi);
    PUSH32(esp, 0); sub_004E6634(); /* call 0x004E6634 */

loc_004E69C9: ;
    PUSH32(esp, MEM32(ebp + -4));
    esi = esi + 8;
    PUSH32(esp, MEM32(ebp + 0x10));
    PUSH32(esp, ebx);
    PUSH32(esp, edi);
    PUSH32(esp, 0); sub_004E6802(); /* call 0x004E6802 */

loc_004E69D9: ;
    edi = edi + 8;
    MEM32(ebp + 0x18) = MEM32(ebp + 0x18) - 1;
    if ((MEM32(ebp + 0x18) != 0)) goto loc_004E69BD; /* jne: not equal / not zero */

loc_004E69E1: ;
    PUSH32(esp, 4);
    PUSH32(esp, MEM32(ebp + 0x10));
    PUSH32(esp, ebx);
    PUSH32(esp, esi);
    PUSH32(esp, 0); sub_004E6634(); /* call 0x004E6634 */

loc_004E69ED: ;
    POP32(esp, edi);
    POP32(esp, esi);
    POP32(esp, ebx);
    esp = ebp;
    POP32(esp, ebp); /* leave */
    esp += 28; return; /* ret 24 */

}

/**
 * sub_004E69F4
 * Original: 0x004E69F4 - 0x004E6AB0 (188 bytes, 81 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_004E69F4(void)
{
    uint32_t ebp;
    int _flags = 0; /* fallback flag var */

loc_004E69F4: ;
    PUSH32(esp, ebp);
    ebp = esp;
    PUSH32(esp, ecx);
    (void)0; /* cmp MEM32(ebp + 0x1C), 0 - flags set for next jcc */
    edx = MEM32(ebp + 8);
    PUSH32(esp, ebx);
    PUSH32(esp, esi);
    esi = MEM32(ebp + 0xC);
    PUSH32(esp, edi);
    ebx = edx + esi * 8;
    MEM32(ebp + -4) = 0x10;
    if (CMP_EQ(MEM32(ebp + 0x1C), 0)) goto loc_004E6A18; /* je: equal / zero */

loc_004E6A11: ;
    MEM32(ebp + -4) = 0x14;

loc_004E6A18: ;
    edi = MEM32(ebp + 0x10);
    PUSH32(esp, 4);
    PUSH32(esp, edi);
    PUSH32(esp, esi);
    PUSH32(esp, edx);
    PUSH32(esp, 0); sub_004E6634(); /* call 0x004E6634 */

loc_004E6A25: ;
    PUSH32(esp, 4);
    PUSH32(esp, edi);
    PUSH32(esp, esi);
    eax = edx + 4;
    PUSH32(esp, ebx);
    MEM32(ebp + 0xC) = eax;
    PUSH32(esp, 0); sub_004E6634(); /* call 0x004E6634 */

loc_004E6A35: ;
    eax = esi;
    eax = eax << 2;
    edx = edx - eax;
    eax = MEM32(ebp + 0x14);
    edx = edx + 3;
    ebx = ebx + 4;
    eax--;
    (void)0; /* test eax, eax - flags set for next jcc */
    MEM32(ebp + 8) = edx;
    if (CMP_LE(eax & eax, 0)) goto loc_004E6A93; /* jle: less or equal (signed <=) */

loc_004E6A4D: ;
    MEM32(ebp + 0x1C) = eax;

loc_004E6A50: ;
    PUSH32(esp, 0x10);
    POP32(esp, edx);
    PUSH32(esp, edx);
    PUSH32(esp, edi);
    PUSH32(esp, esi);
    PUSH32(esp, MEM32(ebp + 0xC));
    PUSH32(esp, 0); sub_004E6634(); /* call 0x004E6634 */

loc_004E6A5E: ;
    MEM32(ebp + 0xC) = MEM32(ebp + 0xC) + edx;
    PUSH32(esp, edx);
    PUSH32(esp, edi);
    PUSH32(esp, esi);
    PUSH32(esp, ebx);
    PUSH32(esp, 0); sub_004E6634(); /* call 0x004E6634 */

loc_004E6A6A: ;
    PUSH32(esp, MEM32(ebp + -4));
    ebx = ebx + edx;
    PUSH32(esp, edi);
    PUSH32(esp, esi);
    PUSH32(esp, MEM32(ebp + 8));
    PUSH32(esp, 0); sub_004E6802(); /* call 0x004E6802 */

loc_004E6A79: ;
    PUSH32(esp, MEM32(ebp + -4));
    eax = MEM32(ebp + 8);
    PUSH32(esp, edi);
    PUSH32(esp, esi);
    eax = eax + 8;
    PUSH32(esp, eax);
    PUSH32(esp, 0); sub_004E6802(); /* call 0x004E6802 */

loc_004E6A8A: ;
    MEM32(ebp + 8) = MEM32(ebp + 8) + 0x10;
    MEM32(ebp + 0x1C) = MEM32(ebp + 0x1C) - 1;
    if ((MEM32(ebp + 0x1C) != 0)) goto loc_004E6A50; /* jne: not equal / not zero */

loc_004E6A93: ;
    PUSH32(esp, 0xC);
    PUSH32(esp, edi);
    PUSH32(esp, esi);
    PUSH32(esp, MEM32(ebp + 0xC));
    PUSH32(esp, 0); sub_004E6634(); /* call 0x004E6634 */

loc_004E6A9F: ;
    PUSH32(esp, 0xC);
    PUSH32(esp, edi);
    PUSH32(esp, esi);
    PUSH32(esp, ebx);
    PUSH32(esp, 0); sub_004E6634(); /* call 0x004E6634 */

loc_004E6AA9: ;
    POP32(esp, edi);
    POP32(esp, esi);
    POP32(esp, ebx);
    esp = ebp;
    POP32(esp, ebp); /* leave */
    esp += 28; return; /* ret 24 */

}

/**
 * sub_004E6AB0
 * Original: 0x004E6AB0 - 0x004E6C0A (346 bytes, 143 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_004E6AB0(void)
{
    uint32_t ebp;
    int _flags = 0; /* fallback flag var */

loc_004E6AB0: ;
    PUSH32(esp, ebp);
    ebp = esp;
    esp = esp - 0xC;
    eax = MEM32(ebp + 0x1C);
    PUSH32(esp, ebx);
    PUSH32(esp, esi);
    eax = eax << 4;
    PUSH32(esp, edi);
    edi = MEM32(ebp + 0x18);
    eax = eax - 0x10;
    eax = eax + 4;
    PUSH32(esp, 0);
    MEM32(ebp + -12) = eax;
    PUSH32(esp, 1);
    eax = edi + edi;
    PUSH32(esp, eax);
    PUSH32(esp, MEM32(ebp + 0x14));
    eax = edi;
    esi = edi;
    eax = eax << 7;
    eax = eax + MEM32(ebp + 8);
    esi = esi << 4;
    PUSH32(esp, esi);
    ebx = edi;
    ebx = ebx << 3;
    MEM32(ebp + 0x1C) = MEM32(ebp + 0x1C) - 1;
    PUSH32(esp, eax);
    PUSH32(esp, 0); sub_004E696B(); /* call 0x004E696B */

loc_004E6AF2: ;
    ecx = MEM32(ebp + 8);
    eax = esi;
    eax = eax << 4;
    MEM32(ebp + -8) = eax;
    eax = eax + ecx;
    MEM32(ebp + 0x18) = eax;
    eax = MEM32(ebp + 0x1C);
    if (CMP_LE(eax, 1)) goto loc_004E6B2A; /* jle: less or equal (signed <=) */

loc_004E6B0A: ;
    eax--;
    MEM32(ebp + -4) = eax;

loc_004E6B0E: ;
    PUSH32(esp, 0);
    PUSH32(esp, 0);
    PUSH32(esp, edi);
    PUSH32(esp, MEM32(ebp + 0x14));
    PUSH32(esp, esi);
    PUSH32(esp, MEM32(ebp + 0x18));
    PUSH32(esp, 0); sub_004E69F4(); /* call 0x004E69F4 */

loc_004E6B1F: ;
    eax = MEM32(ebp + -8);
    MEM32(ebp + 0x18) = MEM32(ebp + 0x18) + eax;
    MEM32(ebp + -4) = MEM32(ebp + -4) - 1;
    if ((MEM32(ebp + -4) != 0)) goto loc_004E6B0E; /* jne: not equal / not zero */

loc_004E6B2A: ;
    PUSH32(esp, 1);
    PUSH32(esp, 0);
    PUSH32(esp, edi);
    PUSH32(esp, MEM32(ebp + 0x14));
    PUSH32(esp, esi);
    PUSH32(esp, MEM32(ebp + 0x18));
    PUSH32(esp, 0); sub_004E69F4(); /* call 0x004E69F4 */

loc_004E6B3B: ;
    PUSH32(esp, MEM32(ebp + -12));
    eax = MEM32(ebp + 8);
    PUSH32(esp, MEM32(ebp + 0x14));
    PUSH32(esp, esi);
    esi = (uint32_t)((int32_t)esi * (int32_t)0xD);
    eax = esi + eax + -13;
    PUSH32(esp, eax);
    PUSH32(esp, 0); sub_004E6802(); /* call 0x004E6802 */

loc_004E6B52: ;
    eax = MEM32(ebp + 0xC);
    PUSH32(esp, 0);
    PUSH32(esp, 1);
    PUSH32(esp, edi);
    PUSH32(esp, MEM32(ebp + 0x14));
    eax = eax + ebx * 8;
    PUSH32(esp, ebx);
    PUSH32(esp, eax);
    PUSH32(esp, 0); sub_004E696B(); /* call 0x004E696B */

loc_004E6B67: ;
    eax = MEM32(ebp + 0xC);
    esi = ebx;
    esi = esi << 4;
    eax = eax + esi;
    MEM32(ebp + 0x18) = eax;
    eax = MEM32(ebp + 0x1C);
    if (CMP_LE(eax, 2)) goto loc_004E6BA0; /* jle: less or equal (signed <=) */

loc_004E6B7C: ;
    eax = eax + 0xFFFFFFFEu;
    MEM32(ebp + 8) = eax;

loc_004E6B82: ;
    PUSH32(esp, 0);
    PUSH32(esp, 0);
    PUSH32(esp, edi);
    PUSH32(esp, MEM32(ebp + 0x14));
    PUSH32(esp, ebx);
    PUSH32(esp, MEM32(ebp + 0x18));
    PUSH32(esp, 0); sub_004E696B(); /* call 0x004E696B */

loc_004E6B93: ;
    eax = ebx;
    eax = eax << 3;
    MEM32(ebp + 0x18) = MEM32(ebp + 0x18) + eax;
    MEM32(ebp + 8) = MEM32(ebp + 8) - 1;
    if ((MEM32(ebp + 8) != 0)) goto loc_004E6B82; /* jne: not equal / not zero */

loc_004E6BA0: ;
    PUSH32(esp, 1);
    PUSH32(esp, 0);
    PUSH32(esp, edi);
    PUSH32(esp, MEM32(ebp + 0x14));
    PUSH32(esp, ebx);
    PUSH32(esp, MEM32(ebp + 0x18));
    PUSH32(esp, 0); sub_004E696B(); /* call 0x004E696B */

loc_004E6BB1: ;
    eax = MEM32(ebp + 0x10);
    PUSH32(esp, 0);
    PUSH32(esp, 1);
    PUSH32(esp, edi);
    PUSH32(esp, MEM32(ebp + 0x14));
    eax = eax + ebx * 8;
    PUSH32(esp, ebx);
    PUSH32(esp, eax);
    PUSH32(esp, 0); sub_004E696B(); /* call 0x004E696B */

loc_004E6BC6: ;
    eax = MEM32(ebp + 0x10);
    esi = esi + eax;
    eax = MEM32(ebp + 0x1C);
    if (CMP_LE(eax, 2)) goto loc_004E6BF4; /* jle: less or equal (signed <=) */

loc_004E6BD3: ;
    eax = eax + 0xFFFFFFFEu;
    MEM32(ebp + 0x1C) = eax;

loc_004E6BD9: ;
    PUSH32(esp, 0);
    PUSH32(esp, 0);
    PUSH32(esp, edi);
    PUSH32(esp, MEM32(ebp + 0x14));
    PUSH32(esp, ebx);
    PUSH32(esp, esi);
    PUSH32(esp, 0); sub_004E696B(); /* call 0x004E696B */

loc_004E6BE8: ;
    eax = ebx;
    eax = eax << 3;
    esi = esi + eax;
    MEM32(ebp + 0x1C) = MEM32(ebp + 0x1C) - 1;
    if ((MEM32(ebp + 0x1C) != 0)) goto loc_004E6BD9; /* jne: not equal / not zero */

loc_004E6BF4: ;
    PUSH32(esp, 1);
    PUSH32(esp, 0);
    PUSH32(esp, edi);
    PUSH32(esp, MEM32(ebp + 0x14));
    PUSH32(esp, ebx);
    PUSH32(esp, esi);
    PUSH32(esp, 0); sub_004E696B(); /* call 0x004E696B */

loc_004E6C03: ;
    POP32(esp, edi);
    POP32(esp, esi);
    POP32(esp, ebx);
    esp = ebp;
    POP32(esp, ebp); /* leave */
    esp += 28; return; /* ret 24 */

}

/**
 * sub_004E6C0A
 * Original: 0x004E6C0A - 0x004E6CCA (192 bytes, 64 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_004E6C0A(void)
{
    uint32_t ebp;
    int _flags = 0; /* fallback flag var */
    uint64_t mm0, mm1, mm6, mm7;

loc_004E6C0A: ;
    PUSH32(esp, ebp);
    ebp = esp;
    PUSH32(esp, ebx);
    PUSH32(esp, esi);
    PUSH32(esp, edi);
    if (CMP_NE(MEM32(ebp + 0x1C), 0)) { sub_004E6CCA(); return; } /* jne: not equal / not zero */

loc_004E6C1A: ;
    if (CMP_NE(MEM32(ebp + 0x18), 0)) goto loc_004E6C5F; /* jne: not equal / not zero */

loc_004E6C20: ;
    esi = MEM32(ebp + 8);
    edi = MEM32(ebp + 0x10);
    eax = MEM32(ebp + 0xC);
    ebx = MEM32(ebp + 0x14);
    ecx = 8;
    if (CMP_EQ(ecx, 0x10)) goto loc_004E6C48; /* je: equal / zero */

loc_004E6C36: ;
    /* SSE: movq mm0, qword ptr [esi] */
    esi = esi + eax;
    /* SSE: movq qword ptr [edi], mm0 */
    edi = edi + ebx;
    ecx--;
    if ((ecx != 0)) goto loc_004E6C36; /* jne: not equal / not zero */

loc_004E6C43: ;
    g_seh_ebp = ebp; sub_004E6E82(); return; /* tail jmp 0x004E6E82 */

loc_004E6C48: ;
    /* SSE: movq mm0, qword ptr [esi] */
    /* SSE: movq qword ptr [edi], mm0 */
    /* SSE: movq mm0, qword ptr [esi + 8] */
    esi = esi + eax;
    /* SSE: movq qword ptr [edi + 8], mm0 */
    edi = edi + ebx;
    ecx--;
    if ((ecx != 0)) goto loc_004E6C48; /* jne: not equal / not zero */

loc_004E6C5D: ;
    goto loc_004E6CC5;

loc_004E6C5F: ;
    esi = MEM32(ebp + 8);
    edi = MEM32(ebp + 0x10);
    edx = 1;
    eax = MEM32(ebp + 0xC);
    ebx = MEM32(ebp + 0x14);
    /* SSE: movq mm7, qword ptr [0x4ea488] */
    /* SSE: movq mm6, qword ptr [0x4ea480] */
    ecx = 8;
    if (CMP_EQ(ecx, 0x10)) goto loc_004E6CA1; /* je: equal / zero */

loc_004E6C88: ;
    /* SSE: movq mm0, qword ptr [esi] */
    /* SSE: movq mm1, qword ptr [esi + edx] */
    /* TODO: pavgb mm0, mm1 */
    /* SSE: movq qword ptr [edi], mm0 */
    esi = esi + eax;
    edi = edi + ebx;
    ecx--;
    if ((ecx != 0)) goto loc_004E6C88; /* jne: not equal / not zero */

loc_004E6C9C: ;
    g_seh_ebp = ebp; sub_004E6E82(); return; /* tail jmp 0x004E6E82 */

loc_004E6CA1: ;
    /* SSE: movq mm0, qword ptr [esi] */
    /* SSE: movq mm1, qword ptr [esi + edx] */
    /* TODO: pavgb mm0, mm1 */
    /* SSE: movq qword ptr [edi], mm0 */
    /* SSE: movq mm0, qword ptr [esi + 8] */
    /* SSE: movq mm1, qword ptr [esi + edx + 8] */
    /* TODO: pavgb mm0, mm1 */
    /* SSE: movq qword ptr [edi + 8], mm0 */
    esi = esi + eax;
    edi = edi + ebx;
    ecx--;
    if ((ecx != 0)) goto loc_004E6CA1; /* jne: not equal / not zero */

loc_004E6CC5: ;
    g_seh_ebp = ebp; sub_004E6E82(); return; /* tail jmp 0x004E6E82 */

}

/**
 * sub_004E6E8B
 * Original: 0x004E6E8B - 0x004E6F9C (273 bytes, 88 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_004E6E8B(void)
{
    uint32_t ebp;
    int _flags = 0; /* fallback flag var */
    uint64_t mm0, mm1, mm5, mm6, mm7;

loc_004E6E8B: ;
    PUSH32(esp, ebp);
    ebp = esp;
    PUSH32(esp, ebx);
    PUSH32(esp, esi);
    PUSH32(esp, edi);
    if (CMP_NE(MEM32(ebp + 0x1C), 0)) { sub_004E6F9C(); return; } /* jne: not equal / not zero */

loc_004E6E9B: ;
    if (CMP_NE(MEM32(ebp + 0x18), 0)) goto loc_004E6EE3; /* jne: not equal / not zero */

loc_004E6EA1: ;
    esi = MEM32(ebp + 8);
    edi = MEM32(ebp + 0x10);
    eax = MEM32(ebp + 0xC);
    ebx = MEM32(ebp + 0x14);
    ecx = 8;
    if (CMP_EQ(ecx, 0x10)) goto loc_004E6EC9; /* je: equal / zero */

loc_004E6EB7: ;
    /* SSE: movq mm0, qword ptr [esi] */
    esi = esi + eax;
    /* SSE: movq qword ptr [edi], mm0 */
    edi = edi + ebx;
    ecx--;
    if ((ecx != 0)) goto loc_004E6EB7; /* jne: not equal / not zero */

loc_004E6EC4: ;
    g_seh_ebp = ebp; sub_004E71FA(); return; /* tail jmp 0x004E71FA */

loc_004E6EC9: ;
    /* SSE: movq mm0, qword ptr [esi] */
    /* SSE: movq qword ptr [edi], mm0 */
    /* SSE: movq mm0, qword ptr [esi + 8] */
    esi = esi + eax;
    /* SSE: movq qword ptr [edi + 8], mm0 */
    edi = edi + ebx;
    ecx--;
    if ((ecx != 0)) goto loc_004E6EC9; /* jne: not equal / not zero */

loc_004E6EDE: ;
    goto loc_004E6F97;

loc_004E6EE3: ;
    esi = MEM32(ebp + 8);
    edi = MEM32(ebp + 0x10);
    edx = 1;
    eax = MEM32(ebp + 0xC);
    ebx = MEM32(ebp + 0x14);
    /* SSE: movq mm7, qword ptr [0x4ea488] */
    /* SSE: movq mm6, qword ptr [0x4ea480] */
    ecx = 8;
    if (CMP_EQ(ecx, 0x10)) goto loc_004E6F3F; /* je: equal / zero */

loc_004E6F0C: ;
    /* SSE: movq mm0, qword ptr [esi] */
    /* SSE: movq mm1, qword ptr [esi + edx] */
    /* SSE: movq mm5, mm0 */
    /* pand mm5, mm1 (MMX/SIMD integer) */
    /* TODO: psrlw mm0, 1 */
    /* TODO: psrlw mm1, 1 */
    /* pand mm5, mm6 (MMX/SIMD integer) */
    /* pand mm0, mm7 (MMX/SIMD integer) */
    /* pand mm1, mm7 (MMX/SIMD integer) */
    /* TODO: paddw mm0, mm5 */
    /* TODO: paddw mm0, mm1 */
    /* SSE: movq qword ptr [edi], mm0 */
    esi = esi + eax;
    edi = edi + ebx;
    ecx--;
    if ((ecx != 0)) goto loc_004E6F0C; /* jne: not equal / not zero */

loc_004E6F3A: ;
    g_seh_ebp = ebp; sub_004E71FA(); return; /* tail jmp 0x004E71FA */

loc_004E6F3F: ;
    /* SSE: movq mm0, qword ptr [esi] */
    /* SSE: movq mm1, qword ptr [esi + edx] */
    /* SSE: movq mm5, mm0 */
    /* pand mm5, mm1 (MMX/SIMD integer) */
    /* TODO: psrlw mm0, 1 */
    /* TODO: psrlw mm1, 1 */
    /* pand mm5, mm6 (MMX/SIMD integer) */
    /* pand mm0, mm7 (MMX/SIMD integer) */
    /* pand mm1, mm7 (MMX/SIMD integer) */
    /* TODO: paddw mm0, mm5 */
    /* TODO: paddw mm0, mm1 */
    /* SSE: movq qword ptr [edi], mm0 */
    /* SSE: movq mm0, qword ptr [esi + 8] */
    /* SSE: movq mm1, qword ptr [esi + edx + 8] */
    /* SSE: movq mm5, mm0 */
    /* pand mm5, mm1 (MMX/SIMD integer) */
    /* TODO: psrlw mm0, 1 */
    /* TODO: psrlw mm1, 1 */
    /* pand mm5, mm6 (MMX/SIMD integer) */
    /* pand mm0, mm7 (MMX/SIMD integer) */
    /* pand mm1, mm7 (MMX/SIMD integer) */
    /* TODO: paddw mm0, mm5 */
    /* TODO: paddw mm0, mm1 */
    /* SSE: movq qword ptr [edi + 8], mm0 */
    esi = esi + eax;
    edi = edi + ebx;
    ecx--;
    if ((ecx != 0)) goto loc_004E6F3F; /* jne: not equal / not zero */

loc_004E6F97: ;
    g_seh_ebp = ebp; sub_004E71FA(); return; /* tail jmp 0x004E71FA */

}

/**
 * sub_004E7203
 * Original: 0x004E7203 - 0x004E72DD (218 bytes, 73 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_004E7203(void)
{
    uint32_t ebp;
    int _flags = 0; /* fallback flag var */
    uint64_t mm0, mm1, mm2, mm3, mm6, mm7;

loc_004E7203: ;
    PUSH32(esp, ebp);
    ebp = esp;
    PUSH32(esp, ebx);
    eax = 0; /* xor self */
    (void)0; /* cmp MEM32(ebp + 0x1C), eax - flags set for next jcc */
    PUSH32(esp, esi);
    PUSH32(esp, edi);
    if (CMP_NE(MEM32(ebp + 0x1C), eax)) { sub_004E72DD(); return; } /* jne: not equal / not zero */

loc_004E7214: ;
    if (CMP_NE(MEM32(ebp + 0x18), eax)) goto loc_004E7267; /* jne: not equal / not zero */

loc_004E7219: ;
    eax = MEM32(ebp + 0x10);
    ebx = MEM32(ebp + 8);
    ecx = 8;
    edx = MEM32(ebp + 0x20);
    esi = MEM32(ebp + 0x14);
    edi = MEM32(ebp + 0xC);
    /* pxor mm7, mm7 (MMX/SIMD integer) */

loc_004E7230: ;
    /* SSE: movq mm0, qword ptr [ebx] */
    /* SSE: movq mm1, qword ptr [edx] */
    /* SSE: movq mm2, mm0 */
    /* TODO: punpcklbw mm2, mm7 */
    /* TODO: paddw mm1, mm2 */
    /* TODO: packuswb mm1, mm7 */
    MEM32(eax) = mm1; /* movd */
    /* SSE: movq mm1, qword ptr [edx + 8] */
    /* TODO: punpckhbw mm0, mm7 */
    /* TODO: paddw mm1, mm0 */
    /* TODO: packuswb mm1, mm7 */
    MEM32(eax + 4) = mm1; /* movd */
    ebx = ebx + edi;
    eax = eax + esi;
    edx = edx + 0x10;
    ecx--;
    if ((ecx != 0)) goto loc_004E7230; /* jne: not equal / not zero */

loc_004E7260: ;
    /* emms - empty MMX state */
    g_seh_ebp = ebp; sub_004E73FB(); return; /* tail jmp 0x004E73FB */

loc_004E7267: ;
    eax = MEM32(ebp + 0x10);
    ebx = MEM32(ebp + 8);
    ecx = 8;
    edx = MEM32(ebp + 0x20);
    esi = MEM32(ebp + 0x14);
    edi = MEM32(ebp + 0xC);
    /* SSE: movq mm6, qword ptr [0x4ea498] */
    /* pxor mm7, mm7 (MMX/SIMD integer) */

loc_004E7285: ;
    /* SSE: movq mm0, qword ptr [ebx] */
    /* SSE: movq mm1, qword ptr [ebx + 1] */
    /* SSE: movq mm2, mm0 */
    /* SSE: movq mm3, mm1 */
    /* TODO: punpcklbw mm2, mm7 */
    /* TODO: punpcklbw mm3, mm7 */
    /* TODO: paddw mm2, mm3 */
    /* TODO: paddw mm2, mm6 */
    /* TODO: psrlw mm2, 1 */
    /* SSE: movq mm3, qword ptr [edx] */
    /* TODO: paddw mm2, mm3 */
    /* TODO: packuswb mm2, mm7 */
    MEM32(eax) = mm2; /* movd */
    /* TODO: punpckhbw mm0, mm7 */
    /* TODO: punpckhbw mm1, mm7 */
    /* TODO: paddw mm0, mm1 */
    /* TODO: paddw mm0, mm6 */
    /* TODO: psrlw mm0, 1 */
    /* SSE: movq mm1, qword ptr [edx + 8] */
    /* TODO: paddw mm0, mm1 */
    /* TODO: packuswb mm0, mm7 */
    MEM32(eax + 4) = mm0; /* movd */
    ebx = ebx + edi;
    eax = eax + esi;
    edx = edx + 0x10;
    ecx--;
    if ((ecx != 0)) goto loc_004E7285; /* jne: not equal / not zero */

loc_004E72D6: ;
    /* emms - empty MMX state */
    g_seh_ebp = ebp; sub_004E73FB(); return; /* tail jmp 0x004E73FB */

}

/**
 * sub_004E7402
 * Original: 0x004E7402 - 0x004E74CF (205 bytes, 70 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_004E7402(void)
{
    uint32_t ebp;
    int _flags = 0; /* fallback flag var */
    uint64_t mm0, mm1, mm2, mm3, mm7;

loc_004E7402: ;
    PUSH32(esp, ebp);
    ebp = esp;
    PUSH32(esp, ebx);
    eax = 0; /* xor self */
    (void)0; /* cmp MEM32(ebp + 0x1C), eax - flags set for next jcc */
    PUSH32(esp, esi);
    PUSH32(esp, edi);
    if (CMP_NE(MEM32(ebp + 0x1C), eax)) { sub_004E74CF(); return; } /* jne: not equal / not zero */

loc_004E7413: ;
    if (CMP_NE(MEM32(ebp + 0x18), eax)) goto loc_004E7466; /* jne: not equal / not zero */

loc_004E7418: ;
    eax = MEM32(ebp + 0x10);
    ebx = MEM32(ebp + 8);
    ecx = 8;
    edx = MEM32(ebp + 0x20);
    esi = MEM32(ebp + 0xC);
    edi = MEM32(ebp + 0x14);
    /* pxor mm7, mm7 (MMX/SIMD integer) */

loc_004E742F: ;
    /* SSE: movq mm0, qword ptr [ebx] */
    /* SSE: movq mm1, qword ptr [edx] */
    /* SSE: movq mm2, mm0 */
    /* TODO: punpcklbw mm2, mm7 */
    /* TODO: paddw mm1, mm2 */
    /* TODO: packuswb mm1, mm7 */
    MEM32(eax) = mm1; /* movd */
    /* SSE: movq mm1, qword ptr [edx + 8] */
    /* TODO: punpckhbw mm0, mm7 */
    /* TODO: paddw mm1, mm0 */
    /* TODO: packuswb mm1, mm7 */
    MEM32(eax + 4) = mm1; /* movd */
    ebx = ebx + esi;
    eax = eax + edi;
    edx = edx + 0x10;
    ecx--;
    if ((ecx != 0)) goto loc_004E742F; /* jne: not equal / not zero */

loc_004E745F: ;
    /* emms - empty MMX state */
    g_seh_ebp = ebp; sub_004E75E0(); return; /* tail jmp 0x004E75E0 */

loc_004E7466: ;
    eax = MEM32(ebp + 0x10);
    ebx = MEM32(ebp + 8);
    ecx = 8;
    edx = MEM32(ebp + 0x20);
    esi = MEM32(ebp + 0xC);
    edi = MEM32(ebp + 0x14);
    /* pxor mm7, mm7 (MMX/SIMD integer) */

loc_004E747D: ;
    /* SSE: movq mm0, qword ptr [ebx] */
    /* SSE: movq mm1, qword ptr [ebx + 1] */
    /* SSE: movq mm2, mm0 */
    /* SSE: movq mm3, mm1 */
    /* TODO: punpcklbw mm2, mm7 */
    /* TODO: punpcklbw mm3, mm7 */
    /* TODO: paddw mm2, mm3 */
    /* TODO: psrlw mm2, 1 */
    /* SSE: movq mm3, qword ptr [edx] */
    /* TODO: paddw mm2, mm3 */
    /* TODO: packuswb mm2, mm7 */
    MEM32(eax) = mm2; /* movd */
    /* TODO: punpckhbw mm0, mm7 */
    /* TODO: punpckhbw mm1, mm7 */
    /* TODO: paddw mm0, mm1 */
    /* TODO: psrlw mm0, 1 */
    /* SSE: movq mm1, qword ptr [edx + 8] */
    /* TODO: paddw mm0, mm1 */
    /* TODO: packuswb mm0, mm7 */
    MEM32(eax + 4) = mm0; /* movd */
    ebx = ebx + esi;
    eax = eax + edi;
    edx = edx + 0x10;
    ecx--;
    if ((ecx != 0)) goto loc_004E747D; /* jne: not equal / not zero */

loc_004E74C8: ;
    /* emms - empty MMX state */
    g_seh_ebp = ebp; sub_004E75E0(); return; /* tail jmp 0x004E75E0 */

}

/**
 * sub_004E75E7
 * Original: 0x004E75E7 - 0x004E775B (372 bytes, 121 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_004E75E7(void)
{
    uint32_t ebp;
    int _flags = 0; /* fallback flag var */
    uint64_t mm0, mm1, mm2, mm3, mm4, mm5, mm7;

loc_004E75E7: ;
    PUSH32(esp, ebp);
    ebp = esp;
    esp = esp - 0x6C;
    PUSH32(esp, ebx);
    eax = ebp + -93;
    eax = eax & 0xFFFFFFF0u;
    edx = 0; /* xor self */
    (void)0; /* cmp MEM32(ebp + 0x1C), edx - flags set for next jcc */
    PUSH32(esp, esi);
    MEM32(ebp + -4) = eax;
    eax = MEM32(ebp + 8);
    PUSH32(esp, edi);
    if (CMP_NE(MEM32(ebp + 0x1C), edx)) { sub_004E775B(); return; } /* jne: not equal / not zero */

loc_004E7607: ;
    if (CMP_NE(MEM32(ebp + 0x18), edx)) goto loc_004E762A; /* jne: not equal / not zero */

loc_004E760C: ;
    ecx = MEM32(ebp + 0x10);
    PUSH32(esp, 8);
    POP32(esp, edx);

loc_004E7612: ;
    esi = MEM32(eax);
    MEM32(ecx) = esi;
    esi = MEM32(eax + 4);
    eax = eax + MEM32(ebp + 0xC);
    MEM32(ecx + 4) = esi;
    ecx = ecx + MEM32(ebp + 0x14);
    edx--;
    if ((edx != 0)) goto loc_004E7612; /* jne: not equal / not zero */

loc_004E7625: ;
    g_seh_ebp = ebp; sub_004E7C4D(); return; /* tail jmp 0x004E7C4D */

loc_004E762A: ;
    eax++;
    (void)0; /* cmp MEM32(ebp + 0x20), edx - flags set for next jcc */
    MEM32(ebp + 8) = eax;
    if (CMP_NE(MEM32(ebp + 0x20), edx)) goto loc_004E76C6; /* jne: not equal / not zero */

loc_004E7637: ;
    esi = MEM32(ebp + 8);
    edi = MEM32(ebp + 0x10);
    ebx = MEM32(ebp + 0xC);
    edx = MEM32(ebp + 0x14);
    ecx = 8;
    /* pxor mm7, mm7 (MMX/SIMD integer) */

loc_004E764B: ;
    /* SSE: movq mm0, qword ptr [esi - 1] */
    /* SSE: movq mm2, qword ptr [esi] */
    /* SSE: movq mm1, mm0 */
    /* SSE: movq mm3, mm2 */
    /* TODO: punpcklbw mm0, mm7 */
    /* TODO: punpcklbw mm2, mm7 */
    /* SSE: movq mm4, qword ptr [esi - 2] */
    /* SSE: movq mm5, mm4 */
    /* TODO: paddw mm0, mm2 */
    /* TODO: punpckhbw mm1, mm7 */
    /* SSE: movq mm2, qword ptr [0x4ea4a8] */
    /* TODO: punpckhbw mm3, mm7 */
    /* TODO: pmullw mm0, mm2 */
    /* TODO: paddw mm1, mm3 */
    /* TODO: pmullw mm1, mm2 */
    /* TODO: punpcklbw mm4, mm7 */
    /* TODO: punpckhbw mm5, mm7 */
    /* SSE: movq mm2, qword ptr [esi + 1] */
    /* SSE: movq mm3, mm2 */
    /* TODO: punpcklbw mm2, mm7 */
    /* TODO: punpckhbw mm3, mm7 */
    /* TODO: paddw mm2, mm4 */
    /* TODO: paddw mm3, mm5 */
    /* SSE: movq mm5, qword ptr [0x4ea4a0] */
    /* TODO: psubw mm0, mm2 */
    /* TODO: psubw mm1, mm3 */
    /* TODO: paddw mm0, mm5 */
    /* TODO: paddw mm1, mm5 */
    /* TODO: psraw mm0, 4 */
    /* TODO: psraw mm1, 4 */
    /* TODO: packuswb mm0, mm1 */
    /* SSE: movq qword ptr [edi], mm0 */
    esi = esi + ebx;
    edi = edi + edx;
    ecx--;
    if ((ecx != 0)) goto loc_004E764B; /* jne: not equal / not zero */

loc_004E76BF: ;
    /* emms - empty MMX state */
    g_seh_ebp = ebp; sub_004E7C4D(); return; /* tail jmp 0x004E7C4D */

loc_004E76C6: ;
    esi = MEM32(ebp + 8);
    edi = MEM32(ebp + 0x10);
    ebx = MEM32(ebp + 0xC);
    edx = MEM32(ebp + 0x14);
    ecx = 8;
    /* pxor mm7, mm7 (MMX/SIMD integer) */

loc_004E76DA: ;
    /* SSE: movq mm0, qword ptr [esi - 1] */
    /* SSE: movq mm2, qword ptr [esi] */
    /* SSE: movq mm1, mm0 */
    /* SSE: movq mm3, mm2 */
    /* TODO: punpcklbw mm0, mm7 */
    /* TODO: punpcklbw mm2, mm7 */
    /* SSE: movq mm4, qword ptr [esi - 2] */
    /* SSE: movq mm5, mm4 */
    /* TODO: paddw mm0, mm2 */
    /* TODO: punpckhbw mm1, mm7 */
    /* SSE: movq mm2, qword ptr [0x4ea4a8] */
    /* TODO: punpckhbw mm3, mm7 */
    /* TODO: pmullw mm0, mm2 */
    /* TODO: paddw mm1, mm3 */
    /* TODO: pmullw mm1, mm2 */
    /* TODO: punpcklbw mm4, mm7 */
    /* TODO: punpckhbw mm5, mm7 */
    /* SSE: movq mm2, qword ptr [esi + 1] */
    /* SSE: movq mm3, mm2 */
    /* TODO: punpcklbw mm2, mm7 */
    /* TODO: punpckhbw mm3, mm7 */
    /* TODO: paddw mm2, mm4 */
    /* TODO: paddw mm3, mm5 */
    /* SSE: movq mm5, qword ptr [0x4ea4a0] */
    /* TODO: psubw mm0, mm2 */
    /* TODO: psubw mm1, mm3 */
    /* TODO: paddw mm0, mm5 */
    /* TODO: paddw mm1, mm5 */
    /* TODO: psraw mm0, 4 */
    /* TODO: psraw mm1, 4 */
    /* TODO: packuswb mm0, mm1 */
    /* SSE: movq mm1, qword ptr [esi] */
    /* TODO: pavgb mm0, mm1 */
    /* SSE: movq qword ptr [edi], mm0 */
    esi = esi + ebx;
    edi = edi + edx;
    ecx--;
    if ((ecx != 0)) goto loc_004E76DA; /* jne: not equal / not zero */

loc_004E7754: ;
    /* emms - empty MMX state */
    g_seh_ebp = ebp; sub_004E7C4D(); return; /* tail jmp 0x004E7C4D */

}

/**
 * sub_004E7C54
 * Original: 0x004E7C54 - 0x004E7EF2 (670 bytes, 208 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_004E7C54(void)
{
    uint32_t ebp;
    int _flags = 0; /* fallback flag var */
    uint64_t mm0, mm1, mm2, mm3, mm4, mm5, mm7;

loc_004E7C54: ;
    PUSH32(esp, ebp);
    ebp = esp;
    esp = esp - 0x6C;
    eax = ebp + -93;
    eax = eax & 0xFFFFFFF0u;
    PUSH32(esp, ebx);
    MEM32(ebp + -4) = eax;
    eax = 0; /* xor self */
    (void)0; /* cmp MEM32(ebp + 0x1C), eax - flags set for next jcc */
    PUSH32(esp, esi);
    PUSH32(esp, edi);
    if (CMP_NE(MEM32(ebp + 0x1C), eax)) { sub_004E7EF2(); return; } /* jne: not equal / not zero */

loc_004E7C71: ;
    if (CMP_NE(MEM32(ebp + 0x18), eax)) goto loc_004E7D7E; /* jne: not equal / not zero */

loc_004E7C7A: ;
    if (CMP_NE(MEM32(ebp + 0x20), eax)) goto loc_004E7CC6; /* jne: not equal / not zero */

loc_004E7C7F: ;
    esi = MEM32(ebp + 0x24);
    edx = MEM32(ebp + 8);
    edi = MEM32(ebp + 0x10);
    ecx = 8;
    /* pxor mm7, mm7 (MMX/SIMD integer) */
    eax = MEM32(ebp + 0xC);
    ebx = MEM32(ebp + 0x14);

loc_004E7C96: ;
    /* SSE: movq mm0, qword ptr [edx] */
    /* SSE: movq mm1, qword ptr [esi] */
    /* SSE: movq mm2, mm0 */
    /* TODO: punpcklbw mm0, mm7 */
    /* TODO: paddw mm1, mm0 */
    /* SSE: movq mm3, qword ptr [esi + 8] */
    /* TODO: punpckhbw mm2, mm7 */
    /* TODO: paddw mm3, mm2 */
    /* TODO: packuswb mm1, mm3 */
    /* SSE: movq qword ptr [edi], mm1 */
    esi = esi + 0x10;
    edx = edx + eax;
    edi = edi + ebx;
    ecx--;
    if ((ecx != 0)) goto loc_004E7C96; /* jne: not equal / not zero */

loc_004E7CBF: ;
    /* emms - empty MMX state */
    g_seh_ebp = ebp; sub_004E848A(); return; /* tail jmp 0x004E848A */

loc_004E7CC6: ;
    esi = MEM32(ebp + 8);
    edi = MEM32(ebp + 0x10);
    edx = MEM32(ebp + 0x24);
    ecx = 8;
    eax = MEM32(ebp + 0xC);
    ebx = MEM32(ebp + 0x14);
    /* pxor mm7, mm7 (MMX/SIMD integer) */

loc_004E7CDD: ;
    /* SSE: movq mm0, qword ptr [esi] */
    /* SSE: movq mm2, qword ptr [esi + 1] */
    /* SSE: movq mm1, mm0 */
    /* SSE: movq mm3, mm2 */
    /* TODO: punpcklbw mm0, mm7 */
    /* TODO: punpcklbw mm2, mm7 */
    /* SSE: movq mm4, qword ptr [esi - 1] */
    /* SSE: movq mm5, mm4 */
    /* TODO: paddw mm0, mm2 */
    /* TODO: punpckhbw mm1, mm7 */
    /* SSE: movq mm2, qword ptr [0x4ea4a8] */
    /* TODO: punpckhbw mm3, mm7 */
    /* TODO: pmullw mm0, mm2 */
    /* TODO: paddw mm1, mm3 */
    /* TODO: pmullw mm1, mm2 */
    /* TODO: punpcklbw mm4, mm7 */
    /* TODO: punpckhbw mm5, mm7 */
    /* SSE: movq mm2, qword ptr [esi + 2] */
    /* SSE: movq mm3, mm2 */
    /* TODO: punpcklbw mm2, mm7 */
    /* TODO: punpckhbw mm3, mm7 */
    /* TODO: paddw mm2, mm4 */
    /* TODO: paddw mm3, mm5 */
    /* SSE: movq mm5, qword ptr [0x4ea4a0] */
    /* TODO: psubw mm0, mm2 */
    /* TODO: psubw mm1, mm3 */
    /* TODO: paddw mm0, mm5 */
    /* TODO: paddw mm1, mm5 */
    /* TODO: psraw mm0, 4 */
    /* TODO: psraw mm1, 4 */
    /* TODO: packuswb mm0, mm1 */
    /* SSE: movq mm1, qword ptr [esi] */
    /* TODO: pavgb mm0, mm1 */
    /* SSE: movq mm1, qword ptr [edx] */
    /* SSE: movq mm2, mm0 */
    /* TODO: punpcklbw mm0, mm7 */
    /* TODO: paddw mm1, mm0 */
    /* SSE: movq mm3, qword ptr [edx + 8] */
    /* TODO: punpckhbw mm2, mm7 */
    /* TODO: paddw mm3, mm2 */
    /* TODO: packuswb mm1, mm3 */
    /* SSE: movq qword ptr [edi], mm1 */
    esi = esi + eax;
    edi = edi + ebx;
    edx = edx + 0x10;
    ecx--;
    if ((ecx != 0)) goto loc_004E7CDD; /* jne: not equal / not zero */

loc_004E7D77: ;
    /* emms - empty MMX state */
    g_seh_ebp = ebp; sub_004E848A(); return; /* tail jmp 0x004E848A */

loc_004E7D7E: ;
    if (CMP_NE(MEM32(ebp + 0x20), eax)) goto loc_004E7E39; /* jne: not equal / not zero */

loc_004E7D87: ;
    esi = MEM32(ebp + 8);
    edi = MEM32(ebp + 0x10);
    edx = MEM32(ebp + 0x24);
    ecx = 8;
    eax = MEM32(ebp + 0xC);
    ebx = MEM32(ebp + 0x14);
    /* pxor mm7, mm7 (MMX/SIMD integer) */

loc_004E7D9E: ;
    /* SSE: movq mm0, qword ptr [esi] */
    /* SSE: movq mm2, qword ptr [esi + 1] */
    /* SSE: movq mm1, mm0 */
    /* SSE: movq mm3, mm2 */
    /* TODO: punpcklbw mm0, mm7 */
    /* TODO: punpcklbw mm2, mm7 */
    /* SSE: movq mm4, qword ptr [esi - 1] */
    /* SSE: movq mm5, mm4 */
    /* TODO: paddw mm0, mm2 */
    /* TODO: punpckhbw mm1, mm7 */
    /* SSE: movq mm2, qword ptr [0x4ea4a8] */
    /* TODO: punpckhbw mm3, mm7 */
    /* TODO: pmullw mm0, mm2 */
    /* TODO: paddw mm1, mm3 */
    /* TODO: pmullw mm1, mm2 */
    /* TODO: punpcklbw mm4, mm7 */
    /* TODO: punpckhbw mm5, mm7 */
    /* SSE: movq mm2, qword ptr [esi + 2] */
    /* SSE: movq mm3, mm2 */
    /* TODO: punpcklbw mm2, mm7 */
    /* TODO: punpckhbw mm3, mm7 */
    /* TODO: paddw mm2, mm4 */
    /* TODO: paddw mm3, mm5 */
    /* SSE: movq mm5, qword ptr [0x4ea4a0] */
    /* TODO: psubw mm0, mm2 */
    /* TODO: psubw mm1, mm3 */
    /* TODO: paddw mm0, mm5 */
    /* TODO: paddw mm1, mm5 */
    /* TODO: psraw mm0, 4 */
    /* TODO: psraw mm1, 4 */
    /* TODO: packuswb mm0, mm1 */
    /* SSE: movq mm1, qword ptr [edx] */
    /* SSE: movq mm2, mm0 */
    /* TODO: punpcklbw mm0, mm7 */
    /* TODO: paddw mm1, mm0 */
    /* SSE: movq mm3, qword ptr [edx + 8] */
    /* TODO: punpckhbw mm2, mm7 */
    /* TODO: paddw mm3, mm2 */
    /* TODO: packuswb mm1, mm3 */
    /* SSE: movq qword ptr [edi], mm1 */
    esi = esi + eax;
    edi = edi + ebx;
    edx = edx + 0x10;
    ecx--;
    if ((ecx != 0)) goto loc_004E7D9E; /* jne: not equal / not zero */

loc_004E7E32: ;
    /* emms - empty MMX state */
    g_seh_ebp = ebp; sub_004E848A(); return; /* tail jmp 0x004E848A */

loc_004E7E39: ;
    esi = MEM32(ebp + 8);
    edi = MEM32(ebp + 0x10);
    edx = MEM32(ebp + 0x24);
    ecx = 8;
    eax = MEM32(ebp + 0xC);
    ebx = MEM32(ebp + 0x14);
    /* pxor mm7, mm7 (MMX/SIMD integer) */

loc_004E7E50: ;
    /* SSE: movq mm0, qword ptr [esi] */
    /* SSE: movq mm2, qword ptr [esi + 1] */
    /* SSE: movq mm1, mm0 */
    /* SSE: movq mm3, mm2 */
    /* TODO: punpcklbw mm0, mm7 */
    /* TODO: punpcklbw mm2, mm7 */
    /* SSE: movq mm4, qword ptr [esi - 1] */
    /* SSE: movq mm5, mm4 */
    /* TODO: paddw mm0, mm2 */
    /* TODO: punpckhbw mm1, mm7 */
    /* SSE: movq mm2, qword ptr [0x4ea4a8] */
    /* TODO: punpckhbw mm3, mm7 */
    /* TODO: pmullw mm0, mm2 */
    /* TODO: paddw mm1, mm3 */
    /* TODO: pmullw mm1, mm2 */
    /* TODO: punpcklbw mm4, mm7 */
    /* TODO: punpckhbw mm5, mm7 */
    /* SSE: movq mm2, qword ptr [esi + 2] */
    /* SSE: movq mm3, mm2 */
    /* TODO: punpcklbw mm2, mm7 */
    /* TODO: punpckhbw mm3, mm7 */
    /* TODO: paddw mm2, mm4 */
    /* TODO: paddw mm3, mm5 */
    /* SSE: movq mm5, qword ptr [0x4ea4a0] */
    /* TODO: psubw mm0, mm2 */
    /* TODO: psubw mm1, mm3 */
    /* TODO: paddw mm0, mm5 */
    /* TODO: paddw mm1, mm5 */
    /* TODO: psraw mm0, 4 */
    /* TODO: psraw mm1, 4 */
    /* TODO: packuswb mm0, mm1 */
    /* SSE: movq mm1, qword ptr [esi + 1] */
    /* TODO: pavgb mm0, mm1 */
    /* SSE: movq mm1, qword ptr [edx] */
    /* SSE: movq mm2, mm0 */
    /* TODO: punpcklbw mm0, mm7 */
    /* TODO: paddw mm1, mm0 */
    /* SSE: movq mm3, qword ptr [edx + 8] */
    /* TODO: punpckhbw mm2, mm7 */
    /* TODO: paddw mm3, mm2 */
    /* TODO: packuswb mm1, mm3 */
    /* SSE: movq qword ptr [edi], mm1 */
    esi = esi + eax;
    edi = edi + ebx;
    edx = edx + 0x10;
    ecx--;
    if ((ecx != 0)) goto loc_004E7E50; /* jne: not equal / not zero */

loc_004E7EEB: ;
    /* emms - empty MMX state */
    g_seh_ebp = ebp; sub_004E848A(); return; /* tail jmp 0x004E848A */

}

/**
 * sub_004E8491
 * Original: 0x004E8491 - 0x004E869F (526 bytes, 162 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_004E8491(void)
{
    uint32_t ebp;
    int _flags = 0; /* fallback flag var */
    uint64_t mm0, mm1, mm2, mm3, mm4, mm5, mm6, mm7;
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_004E8491: ;
    PUSH32(esp, ebp);
    ebp = esp + -104;
    esp = esp - 0xA0;
    MEM32(ebp + 0x30) = MEM32(ebp + 0x30) & 0;
    MEM32(ebp + 0x34) = MEM32(ebp + 0x34) & 0;
    eax = ebp + -16;
    MEM32(ebp + 0x64) = eax;
    eax = ebp + 0x10;
    MEM32(ebp + 0x60) = eax;
    eax = ebp + 0x30;
    PUSH32(esp, ebx);
    MEM32(ebp + 0x58) = eax;
    PUSH32(esp, esi);
    eax = ebp + -56;
    PUSH32(esp, edi);
    MEM32(ebp + 0x5C) = eax;
    esi = MEM32(ebp + 0x64);
    edi = MEM32(ebp + 0x60);
    edx = MEM32(ebp + 0x70);
    /* pxor mm0, mm0 (MMX/SIMD integer) */
    /* SSE: movq mm1, qword ptr [edx] */
    /* SSE: movq mm2, mm1 */
    /* TODO: punpcklbw mm1, mm0 */
    /* SSE: movq qword ptr [esi], mm1 */
    /* TODO: punpckhbw mm2, mm0 */
    /* SSE: movq qword ptr [esi + 8], mm2 */
    mm1 = MEM32(edx + 8); /* movd */
    /* TODO: punpcklbw mm1, mm0 */
    /* SSE: movq qword ptr [esi + 0x10], mm1 */
    edx = MEM32(ebp + 0x74);
    eax = MEM32(edx + -4);
    ebx = MEM32(edx + -8);
    eax = BSWAP32(eax); /* bswap */
    ebx = BSWAP32(ebx); /* bswap */
    mm1 = eax; /* movd */
    mm2 = ebx; /* movd */
    /* TODO: punpcklbw mm1, mm0 */
    /* TODO: punpcklbw mm2, mm0 */
    /* SSE: movq qword ptr [edi], mm1 */
    /* SSE: movq qword ptr [edi + 8], mm2 */
    edx = MEM32(ebp + 0x58);
    ecx = MEM32(ebp + 0x5C);
    mm2 = MEM32(esi); /* movd */
    mm1 = MEM32(edi); /* movd */
    /* TODO: punpckldq mm1, mm2 */
    /* TODO: psllw mm1, 4 */
    /* SSE: movq mm7, mm1 */
    /* SSE: movq qword ptr [edx + 8], mm1 */
    /* TODO: psraw mm1, 1 */
    mm2 = MEM32(esi + 4); /* movd */
    mm6 = MEM32(edi + 4); /* movd */
    /* TODO: punpckldq mm6, mm2 */
    /* TODO: psllw mm6, 4 */
    /* TODO: paddw mm1, mm6 */
    /* SSE: movq qword ptr [edx + 0x10], mm1 */
    /* TODO: psraw mm1, 1 */
    mm2 = MEM32(esi + 8); /* movd */
    mm5 = MEM32(edi + 8); /* movd */
    /* TODO: punpckldq mm5, mm2 */
    /* TODO: psllw mm5, 4 */
    /* TODO: paddw mm1, mm5 */
    /* SSE: movq qword ptr [edx + 0x18], mm1 */
    /* TODO: psraw mm1, 1 */
    mm2 = MEM32(esi + 0xC); /* movd */
    mm4 = MEM32(edi + 0xC); /* movd */
    /* TODO: punpckldq mm4, mm2 */
    /* TODO: psllw mm4, 4 */
    /* TODO: paddw mm1, mm4 */
    /* SSE: movq mm2, mm4 */
    /* SSE: movq qword ptr [edx + 0x20], mm1 */
    /* TODO: psraw mm2, 1 */
    /* TODO: paddw mm5, mm2 */
    /* SSE: movq qword ptr [ecx + 0x10], mm5 */
    /* TODO: psraw mm5, 1 */
    /* TODO: paddw mm6, mm5 */
    /* SSE: movq qword ptr [ecx + 8], mm6 */
    /* TODO: psraw mm6, 1 */
    /* TODO: paddw mm7, mm6 */
    /* SSE: movq qword ptr [ecx], mm7 */
    mm2 = MEM32(esi + 0x10); /* movd */
    /* pxor mm1, mm1 (MMX/SIMD integer) */
    /* TODO: punpckldq mm1, mm2 */
    /* TODO: psllw mm1, 3 */
    /* TODO: paddw mm4, mm1 */
    /* SSE: movq qword ptr [ecx + 0x18], mm4 */
    /* TODO: psllw mm1, 1 */
    mm2 = MEM32(esi + 0x14); /* movd */
    /* pxor mm4, mm4 (MMX/SIMD integer) */
    /* TODO: punpckldq mm4, mm2 */
    /* TODO: psllw mm4, 3 */
    /* TODO: paddw mm1, mm4 */
    /* SSE: movq qword ptr [ecx + 0x20], mm1 */
    eax = 0x800080;
    mm3 = eax; /* movd */
    /* TODO: punpcklwd mm3, mm0 */
    ebx = 0; /* xor self */
    esi = MEM32(ebp + 0x7C);
    edi = MEM32(ebp + 0x78);

loc_004E85D5: ;
    /* SSE: movq mm7, qword ptr [ecx + ebx*8] */
    /* SSE: movq mm6, qword ptr [edx + ebx*8] */
    /* SSE: movq mm5, mm7 */
    /* SSE: movq mm4, mm6 */
    /* TODO: paddw mm7, mm6 */
    /* SSE: movq mm6, mm7 */
    /* TODO: punpcklwd mm7, mm0 */
    /* TODO: punpckhwd mm6, mm0 */
    /* SSE: movq mm1, mm7 */
    /* SSE: movq mm2, mm6 */
    /* TODO: pslld mm1, 2 */
    /* TODO: pslld mm2, 2 */
    /* TODO: paddd mm7, mm1 */
    /* TODO: paddd mm6, mm2 */
    /* TODO: pslld mm1, 2 */
    /* TODO: pslld mm2, 2 */
    /* TODO: paddd mm7, mm1 */
    /* TODO: paddd mm6, mm2 */
    /* TODO: paddd mm7, mm1 */
    /* TODO: paddd mm6, mm2 */
    /* TODO: paddd mm7, mm1 */
    /* TODO: paddd mm6, mm2 */
    /* TODO: pslld mm1, 3 */
    /* TODO: pslld mm2, 3 */
    /* TODO: paddd mm7, mm1 */
    /* TODO: paddd mm6, mm2 */
    /* TODO: paddd mm7, mm3 */
    /* TODO: paddd mm6, mm3 */
    /* TODO: psrad mm7, 8 */
    /* TODO: psrad mm6, 8 */
    /* TODO: packssdw mm7, mm6 */
    /* SSE: movq mm1, mm3 */
    /* SSE: movq mm6, mm5 */
    /* TODO: pcmpgtw mm1, mm0 */
    /* pand mm6, mm1 (MMX/SIMD integer) */
    /* SSE: movq mm2, mm1 */
    /* pandn mm2, mm4 (MMX/SIMD integer) */
    /* por mm6, mm2 (MMX/SIMD integer) */
    /* SSE: movq mm2, mm1 */
    /* pand mm4, mm1 (MMX/SIMD integer) */
    /* pandn mm1, mm5 (MMX/SIMD integer) */
    /* por mm1, mm4 (MMX/SIMD integer) */
    /* TODO: psraw mm1, 1 */
    /* TODO: paddw mm6, mm1 */
    /* SSE: movq mm5, mm6 */
    /* TODO: psrlq mm5, 0x10 */
    /* pand mm5, mm2 (MMX/SIMD integer) */
    /* TODO: psllq mm6, 0x10 */
    /* pandn mm2, mm6 (MMX/SIMD integer) */
    /* por mm2, mm5 (MMX/SIMD integer) */
    /* TODO: paddw mm7, mm2 */
    MEM32(esi + ebx * 4 + -2) = mm7; /* movd */
    /* TODO: psrlq mm7, 0x20 */
    MEM32(edi + ebx * 4 + -2) = mm7; /* movd */
    ebx++;
    if (CMP_L(ebx, 5)) goto loc_004E85D5; /* jl: less (signed <) */

loc_004E8693: ;
    /* emms - empty MMX state */
    POP32(esp, edi);
    POP32(esp, esi);
    POP32(esp, ebx);
    ebp = ebp + 0x68;
    esp = ebp;
    POP32(esp, ebp); /* leave */
    esp += 20; return; /* ret 16 */

}

/**
 * sub_004E869F
 * Original: 0x004E869F - 0x004E874B (172 bytes, 58 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_004E869F(void)
{
    uint32_t ebp;
    int _flags = 0; /* fallback flag var */
    uint64_t mm0, mm1, mm2, mm3, mm4, mm7;

loc_004E869F: ;
    PUSH32(esp, ebp);
    ebp = esp;
    PUSH32(esp, ecx);
    PUSH32(esp, esi);
    PUSH32(esp, edi);
    MEM32(ebp + -4) = 0x509B48;
    eax = 0x8000;
    mm7 = eax; /* movd */
    /* TODO: punpckldq mm7, mm7 */
    ecx = 0; /* xor self */
    /* pxor mm0, mm0 (MMX/SIMD integer) */
    edi = MEM32(ebp + 8);
    esi = MEM32(ebp + -4);
    edx = MEM32(ebp + 0x10);

loc_004E86C5: ;
    eax = MEM32(ebp + 0xC);
    SET_LO16(eax, MEM16(eax + ecx * 2));
    mm2 = eax; /* movd */
    /* TODO: punpcklwd mm2, mm2 */
    /* SSE: movq mm1, qword ptr [esi] */
    mm3 = MEM32(edi); /* movd */
    /* TODO: punpcklwd mm3, mm2 */
    /* TODO: pmaddwd mm3, mm1 */
    /* TODO: paddd mm3, mm7 */
    /* TODO: psrad mm3, 0x10 */
    /* SSE: movq mm1, qword ptr [esi + 8] */
    mm4 = MEM32(edi + 4); /* movd */
    /* TODO: punpcklwd mm4, mm2 */
    /* TODO: pmaddwd mm4, mm1 */
    /* TODO: paddd mm4, mm7 */
    /* TODO: psrad mm4, 0x10 */
    /* TODO: packssdw mm3, mm4 */
    /* TODO: packuswb mm3, mm3 */
    MEM32(edx) = mm3; /* movd */
    /* SSE: movq mm1, qword ptr [esi + 0x10] */
    mm3 = MEM32(edi + 8); /* movd */
    /* TODO: punpcklwd mm3, mm2 */
    /* TODO: pmaddwd mm3, mm1 */
    /* TODO: paddd mm3, mm7 */
    /* TODO: psrad mm3, 0x10 */
    /* SSE: movq mm1, qword ptr [esi + 0x18] */
    mm4 = MEM32(edi + 0xC); /* movd */
    /* TODO: punpcklwd mm4, mm2 */
    /* TODO: pmaddwd mm4, mm1 */
    /* TODO: paddd mm4, mm7 */
    /* TODO: psrad mm4, 0x10 */
    /* TODO: packssdw mm3, mm4 */
    /* TODO: packuswb mm3, mm3 */
    MEM32(edx + 4) = mm3; /* movd */
    esi = esi + 0x20;
    edx = edx + MEM32(ebp + 0x14);
    ecx++;
    if (CMP_NE(ecx, 8)) goto loc_004E86C5; /* jne: not equal / not zero */

loc_004E8743: ;
    /* emms - empty MMX state */
    POP32(esp, edi);
    POP32(esp, esi);
    esp = ebp;
    POP32(esp, ebp); /* leave */
    esp += 20; return; /* ret 16 */

}

/**
 * sub_004E874B
 * Original: 0x004E874B - 0x004E8A70 (805 bytes, 355 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_004E874B(void)
{
    uint32_t ebp;
    int _flags = 0; /* fallback flag var */

loc_004E874B: ;
    PUSH32(esp, ebp);
    ebp = esp;
    esp = esp - 0x48;
    eax = MEM32(ebp + 8);
    (void)0; /* cmp eax, 0xB - flags set for next jcc */
    PUSH32(esp, edi);
    edi = MEM32(ebp + 0x10);
    edx = edi + -8;
    MEM32(ebp + -4) = edx;
    if (CMP_A(eax, 0xB)) goto loc_004E8A6B; /* ja: above (unsigned >) */

loc_004E8767: ;
    PUSH32(esp, ebx);
    PUSH32(esp, esi);
    { uint32_t _jt = MEM32(eax * 4 + 0x4E8A70); /* switch: 12 entries, 12 targets */
    if (_jt == 0x004E8770u) goto loc_004E8770;
    if (_jt == 0x004E8799u) goto loc_004E8799;
    if (_jt == 0x004E87D3u) goto loc_004E87D3;
    if (_jt == 0x004E880Du) goto loc_004E880D;
    if (_jt == 0x004E8868u) goto loc_004E8868;
    if (_jt == 0x004E88D3u) goto loc_004E88D3;
    if (_jt == 0x004E88FFu) goto loc_004E88FF;
    if (_jt == 0x004E8924u) goto loc_004E8924;
    if (_jt == 0x004E894Du) goto loc_004E894D;
    if (_jt == 0x004E8993u) goto loc_004E8993;
    if (_jt == 0x004E8A21u) goto loc_004E8A21;
    if (_jt == 0x004E8A42u) goto loc_004E8A42;
    g_seh_ebp = ebp; RECOMP_ITAIL(_jt); return; }

loc_004E8770: ;
    eax = ebp + -40;
    PUSH32(esp, eax);
    eax = ebp + -72;
    PUSH32(esp, eax);
    PUSH32(esp, MEM32(ebp + 0x18));
    PUSH32(esp, MEM32(ebp + 0x14));
    PUSH32(esp, 0); sub_004E8491(); /* call 0x004E8491 */

loc_004E8783: ;
    PUSH32(esp, edi);
    PUSH32(esp, MEM32(ebp + 0xC));
    eax = ebp + -40;
    PUSH32(esp, eax);
    eax = ebp + -72;
    PUSH32(esp, eax);
    PUSH32(esp, 0); sub_004E869F(); /* call 0x004E869F */

loc_004E8794: ;
    goto loc_004E8A69;

loc_004E8799: ;
    eax = MEM32(ebp + 0x14);
    ecx = ebp + -8;
    PUSH32(esp, 8);
    ecx = ecx - eax;
    POP32(esp, esi);

loc_004E87A4: ;
    edx = ZX8(MEM8(eax + 0x10));
    ebx = ZX8(MEM8(eax));
    edx = edx + ebx + 1;
    edx = (uint32_t)((int32_t)edx >> 1);
    MEM8(ecx + eax) = LO8(edx);
    eax++;
    esi--;
    if ((esi != 0)) goto loc_004E87A4; /* jne: not equal / not zero */

loc_004E87B8: ;
    eax = MEM32(ebp + 0xC);
    PUSH32(esp, 8);
    POP32(esp, ecx);

loc_004E87BE: ;
    edx = MEM32(ebp + -8);
    MEM32(eax) = edx;
    edx = MEM32(ebp + -4);
    MEM32(eax + 4) = edx;
    eax = eax + edi;
    ecx--;
    if ((ecx != 0)) goto loc_004E87BE; /* jne: not equal / not zero */

loc_004E87CE: ;
    goto loc_004E8A69;

loc_004E87D3: ;
    ecx = MEM32(ebp + 0x18);
    ecx--;
    PUSH32(esp, 8);
    esi = ecx + -8;
    POP32(esp, edx);

loc_004E87DD: ;
    edi = ZX8(MEM8(ecx));
    eax = ZX8(MEM8(esi));
    eax = eax + edi + 1;
    eax = (uint32_t)((int32_t)eax >> 1);
    edi = MEM32(ebp + 0xC);
    eax = ZX8(LO8(eax));
    SET_LO8(ebx, LO8(eax));
    SET_HI8(ebx, LO8(ebx));
    ecx--;
    esi--;
    eax = ebx;
    eax = eax << 0x10;
    SET_LO16(eax, LO16(ebx));
    MEM32(edi) = eax; edi += 4; /* stosd */
    MEM32(edi) = eax; edi += 4; /* stosd */
    eax = MEM32(ebp + 0x10);
    MEM32(ebp + 0xC) = MEM32(ebp + 0xC) + eax;
    edx--;
    if ((edx != 0)) goto loc_004E87DD; /* jne: not equal / not zero */

loc_004E8808: ;
    goto loc_004E8A69;

loc_004E880D: ;
    MEM32(ebp + 0x18) = MEM32(ebp + 0x18) - 1;
    ecx = MEM32(ebp + 0x14);
    PUSH32(esp, 8);
    eax = ebp + -40;
    edx = 0; /* xor self */
    POP32(esp, esi);

loc_004E881B: ;
    edi = ZX8(MEM8(ecx));
    edi = (uint32_t)((int32_t)edi * (int32_t)edx);
    edi = edi + 4;
    MEM32(eax) = edi;
    eax = eax + 4;
    ecx++;
    edx++;
    if (CMP_L(edx, esi)) goto loc_004E881B; /* jl: less (signed <) */

loc_004E882F: ;
    edi = MEM32(ebp + 0xC);
    MEM32(ebp + 0x14) = esi;

loc_004E8835: ;
    ecx = MEM32(ebp + 0x18);
    ecx = ZX8(MEM8(ecx));
    MEM32(ebp + 0x18) = MEM32(ebp + 0x18) - 1;
    esi = ecx;
    PUSH32(esp, 8);
    eax = ebp + -40;
    esi = esi << 3;
    POP32(esp, edx);

loc_004E8849: ;
    ebx = MEM32(eax);
    ebx = ebx + esi;
    ebx = (uint32_t)((int32_t)ebx >> 3);
    esi = esi - ecx;
    MEM8(edi) = LO8(ebx);
    edi++;
    eax = eax + 4;
    edx--;
    if ((edx != 0)) goto loc_004E8849; /* jne: not equal / not zero */

loc_004E885B: ;
    edi = edi + MEM32(ebp + -4);
    MEM32(ebp + 0x14) = MEM32(ebp + 0x14) - 1;
    if ((MEM32(ebp + 0x14) != 0)) goto loc_004E8835; /* jne: not equal / not zero */

loc_004E8863: ;
    goto loc_004E8A69;

loc_004E8868: ;
    MEM32(ebp + 0x18) = MEM32(ebp + 0x18) - 1;
    ecx = MEM32(ebp + 0x14);
    PUSH32(esp, 8);
    eax = ebp + -40;
    POP32(esp, edx);

loc_004E8874: ;
    esi = ZX8(MEM8(ecx));
    esi = esi << 3;
    MEM32(eax) = esi;
    eax = eax + 4;
    ecx++;
    edx--;
    if ((edx != 0)) goto loc_004E8874; /* jne: not equal / not zero */

loc_004E8883: ;
    MEM32(ebp + 0x10) = MEM32(ebp + 0x10) & 0;
    edx = MEM32(ebp + 0xC);

loc_004E888A: ;
    eax = MEM32(ebp + 0x18);
    eax = ZX8(MEM8(eax));
    eax = (uint32_t)((int32_t)eax * (int32_t)MEM32(ebp + 0x10));
    edi = MEM32(ebp + 0x14);
    eax = eax + 4;
    MEM32(ebp + 0x18) = MEM32(ebp + 0x18) - 1;
    esi = ebp + -40;
    MEM32(ebp + 0xC) = 8;

loc_004E88A7: ;
    ecx = MEM32(esi);
    ebx = ecx + eax;
    ebx = (uint32_t)((int32_t)ebx >> 3);
    MEM8(edx) = LO8(ebx);
    ebx = ZX8(MEM8(edi));
    ecx = ecx - ebx;
    MEM32(esi) = ecx;
    edx++;
    esi = esi + 4;
    edi++;
    MEM32(ebp + 0xC) = MEM32(ebp + 0xC) - 1;
    if ((MEM32(ebp + 0xC) != 0)) goto loc_004E88A7; /* jne: not equal / not zero */

loc_004E88C2: ;
    edx = edx + MEM32(ebp + -4);
    MEM32(ebp + 0x10) = MEM32(ebp + 0x10) + 1;
    if (CMP_L(MEM32(ebp + 0x10), 8)) goto loc_004E888A; /* jl: less (signed <) */

loc_004E88CE: ;
    goto loc_004E8A69;

loc_004E88D3: ;
    ecx = MEM32(ebp + 0xC);
    PUSH32(esp, 8);
    eax = 0x4EA682;
    POP32(esp, edi);

loc_004E88DE: ;
    PUSH32(esp, 8);
    POP32(esp, esi);

loc_004E88E1: ;
    edx = (uint32_t)(int32_t)SMEM8(eax);
    ebx = MEM32(ebp + 0x14);
    SET_LO8(edx, MEM8(edx + ebx));
    MEM8(ecx) = LO8(edx);
    ecx++;
    eax++;
    esi--;
    if ((esi != 0)) goto loc_004E88E1; /* jne: not equal / not zero */

loc_004E88F1: ;
    ecx = ecx + MEM32(ebp + -4);
    eax = eax - 6;
    edi--;
    if ((edi != 0)) goto loc_004E88DE; /* jne: not equal / not zero */

loc_004E88FA: ;
    goto loc_004E8A69;

loc_004E88FF: ;
    esi = MEM32(ebp + 0xC);
    ecx = 0; /* xor self */

loc_004E8904: ;
    eax = MEM32(ebp + 0x14);
    PUSH32(esp, 8);
    eax = eax + ecx + 1;
    POP32(esp, edi);

loc_004E890E: ;
    SET_LO8(ebx, MEM8(eax));
    MEM8(esi) = LO8(ebx);
    esi++;
    eax++;
    edi--;
    if ((edi != 0)) goto loc_004E890E; /* jne: not equal / not zero */

loc_004E8917: ;
    esi = esi + edx;
    ecx++;
    if (CMP_L(ecx, 8)) goto loc_004E8904; /* jl: less (signed <) */

loc_004E891F: ;
    goto loc_004E8A69;

loc_004E8924: ;
    esi = MEM32(ebp + 0xC);
    eax = 0; /* xor self */

loc_004E8929: ;
    ecx = eax + 1;
    eax = ecx;
    eax = (uint32_t)((int32_t)eax >> 1);
    eax = eax + MEM32(ebp + 0x14);
    PUSH32(esp, 8);
    POP32(esp, edi);

loc_004E8936: ;
    SET_LO8(ebx, MEM8(eax));
    MEM8(esi) = LO8(ebx);
    esi++;
    eax++;
    edi--;
    if ((edi != 0)) goto loc_004E8936; /* jne: not equal / not zero */

loc_004E893F: ;
    eax = ecx;
    esi = esi + edx;
    if (CMP_L(eax, 8)) goto loc_004E8929; /* jl: less (signed <) */

loc_004E8948: ;
    goto loc_004E8A69;

loc_004E894D: ;
    esi = MEM32(ebp + 0xC);
    edi = 0; /* xor self */
    edi++;

loc_004E8953: ;
    (void)0; /* test edi, edi - flags set for next jcc */
    PUSH32(esp, 8);
    ecx = edi;
    POP32(esp, eax);
    if (CMP_G(edi & edi, 0)) goto loc_004E8976; /* jg: greater (signed >) */

loc_004E895C: ;
    ebx = edi;
    ebx = (uint32_t)(-(int32_t)ebx);
    PUSH32(esp, 7);
    ebx = ebx >> 1;
    POP32(esp, eax);
    eax = eax - ebx;

loc_004E8967: ;
    ebx = MEM32(ebp + 0x18);
    SET_LO8(ebx, MEM8(ecx + ebx));
    MEM8(esi) = LO8(ebx);
    esi++;
    ecx++;
    ecx++;
    if (CMP_LE(ecx & ecx, 0)) goto loc_004E8967; /* jle: less or equal (signed <=) */

loc_004E8976: ;
    (void)0; /* test eax, eax - flags set for next jcc */
    ecx = MEM32(ebp + 0x14);
    if (CMP_LE(eax & eax, 0)) goto loc_004E8986; /* jle: less or equal (signed <=) */

loc_004E897D: ;
    SET_LO8(ebx, MEM8(ecx));
    MEM8(esi) = LO8(ebx);
    esi++;
    ecx++;
    eax--;
    if ((eax != 0)) goto loc_004E897D; /* jne: not equal / not zero */

loc_004E8986: ;
    esi = esi + edx;
    edi--;
    if (CMP_G(edi, 0xFFFFFFF9u)) goto loc_004E8953; /* jg: greater (signed >) */

loc_004E898E: ;
    goto loc_004E8A69;

loc_004E8993: ;
    edi = MEM32(ebp + 0x18);
    eax = MEM32(ebp + 0xC);
    edx = 0; /* xor self */
    MEM32(ebp + 0x10) = edi;

loc_004E899E: ;
    (void)0; /* test edx, edx - flags set for next jcc */
    esi = MEM32(ebp + 0x10);
    if (CMP_LE(edx & edx, 0)) goto loc_004E89B5; /* jle: less or equal (signed <=) */

loc_004E89A5: ;
    ecx = edx;

loc_004E89A7: ;
    SET_LO8(ebx, MEM8(esi));
    MEM8(eax) = LO8(ebx);
    SET_LO8(ebx, MEM8(esi));
    eax++;
    MEM8(eax) = LO8(ebx);
    eax++;
    esi++;
    ecx--;
    if ((ecx != 0)) goto loc_004E89A7; /* jne: not equal / not zero */

loc_004E89B5: ;
    SET_LO8(ecx, MEM8(edi));
    MEM8(eax) = LO8(ecx);
    ecx = MEM32(ebp + 0x14);
    esi = ZX8(MEM8(ecx + -1));
    MEM32(ebp + 0x18) = ecx;
    ecx = edx + edx;
    ebx = ecx;
    PUSH32(esp, 7);
    POP32(esp, ecx);
    ecx = ecx - ebx;
    eax++;
    if (CMP_LE(ecx & ecx, 0)) goto loc_004E89EE; /* jle: less or equal (signed <=) */

loc_004E89D2: ;
    MEM32(ebp + 0xC) = ecx;

loc_004E89D5: ;
    ecx = MEM32(ebp + 0x18);
    ebx = ZX8(MEM8(ecx));
    ecx = ebx + esi + 1;
    ecx = (uint32_t)((int32_t)ecx >> 1);
    MEM8(eax) = LO8(ecx);
    eax++;
    MEM32(ebp + 0x18) = MEM32(ebp + 0x18) + 1;
    MEM32(ebp + 0xC) = MEM32(ebp + 0xC) - 1;
    esi = ebx;
    if ((MEM32(ebp + 0xC) != 0)) goto loc_004E89D5; /* jne: not equal / not zero */

loc_004E89EE: ;
    eax = eax + MEM32(ebp + -4);
    edx++;
    MEM32(ebp + 0x10) = MEM32(ebp + 0x10) - 1;
    if (CMP_L(edx, 4)) goto loc_004E899E; /* jl: less (signed <) */

loc_004E89FA: ;
    PUSH32(esp, 8);
    POP32(esp, ecx);
    if (CMP_GE(edx, ecx)) goto loc_004E8A69; /* jge: greater or equal (signed >=) */

loc_004E8A01: ;
    edi = edi - edx;
    ecx = ecx - edx;

loc_004E8A05: ;
    PUSH32(esp, 4);
    esi = edi;
    POP32(esp, edx);

loc_004E8A0A: ;
    SET_LO8(ebx, MEM8(esi));
    MEM8(eax) = LO8(ebx);
    SET_LO8(ebx, MEM8(esi));
    eax++;
    MEM8(eax) = LO8(ebx);
    eax++;
    esi++;
    edx--;
    if ((edx != 0)) goto loc_004E8A0A; /* jne: not equal / not zero */

loc_004E8A18: ;
    eax = eax + MEM32(ebp + -4);
    edi--;
    ecx--;
    if ((ecx != 0)) goto loc_004E8A05; /* jne: not equal / not zero */

loc_004E8A1F: ;
    goto loc_004E8A69;

loc_004E8A21: ;
    eax = MEM32(ebp + 0x14);
    esi = MEM32(ebp + 0xC);
    PUSH32(esp, 8);
    eax--;
    POP32(esp, edx);

loc_004E8A2B: ;
    PUSH32(esp, 8);
    ecx = eax;
    POP32(esp, edi);

loc_004E8A30: ;
    SET_LO8(ebx, MEM8(ecx));
    MEM8(esi) = LO8(ebx);
    esi++;
    ecx++;
    edi--;
    if ((edi != 0)) goto loc_004E8A30; /* jne: not equal / not zero */

loc_004E8A39: ;
    esi = esi + MEM32(ebp + -4);
    eax--;
    edx--;
    if ((edx != 0)) goto loc_004E8A2B; /* jne: not equal / not zero */

loc_004E8A40: ;
    goto loc_004E8A69;

loc_004E8A42: ;
    ecx = MEM32(ebp + 0xC);
    esi = 0; /* xor self */

loc_004E8A47: ;
    PUSH32(esp, 8);
    eax = esi + 0x4EA698;
    POP32(esp, edi);

loc_004E8A50: ;
    edx = (uint32_t)(int32_t)SMEM8(eax);
    ebx = MEM32(ebp + 0x18);
    SET_LO8(edx, MEM8(edx + ebx));
    MEM8(ecx) = LO8(edx);
    ecx++;
    eax++;
    edi--;
    if ((edi != 0)) goto loc_004E8A50; /* jne: not equal / not zero */

loc_004E8A60: ;
    ecx = ecx + MEM32(ebp + -4);
    esi++;
    if (CMP_L(esi, 8)) goto loc_004E8A47; /* jl: less (signed <) */

loc_004E8A69: ;
    POP32(esp, esi);
    POP32(esp, ebx);

loc_004E8A6B: ;
    POP32(esp, edi);
    esp = ebp;
    POP32(esp, ebp); /* leave */
    esp += 24; return; /* ret 20 */

}

/**
 * sub_004E8AA0
 * Original: 0x004E8AA0 - 0x004E8ADD (61 bytes, 23 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_004E8AA0(void)
{
    uint32_t ebp;
    int _flags = 0; /* fallback flag var */

loc_004E8AA0: ;
    PUSH32(esp, ebp);
    ebp = esp;
    (void)0; /* cmp MEM32(ebp + 0x10), 0xD - flags set for next jcc */
    PUSH32(esp, esi);
    PUSH32(esp, edi);
    edi = MEM32(ebp + 0xC);
    eax = edi + 9;
    if (CMP_B(MEM32(ebp + 0x10), 0xD)) goto loc_004E8AB3; /* jb: below (unsigned <) */

loc_004E8AB1: ;
    eax = edi;

loc_004E8AB3: ;
    esi = eax;
    esi = esi << 3;
    eax = ZX16(MEM16(esi + 0x509A60));
    PUSH32(esp, eax);
    PUSH32(esp, MEM32(ebp + 8));
    PUSH32(esp, 0); sub_004E6518(); /* call 0x004E6518 */

loc_004E8AC8: ;
    ecx = MEM32(esi + 0x509A64);
    eax = MEM32(ecx + eax * 4);
    ecx = MEM32(ebp + 0x14);
    MEM32(ecx + edi * 4) = eax;
    POP32(esp, edi);
    POP32(esp, esi);
    POP32(esp, ebp);
    esp += 20; return; /* ret 16 */

}

/**
 * sub_004E8ADD
 * Original: 0x004E8ADD - 0x004E8BF2 (277 bytes, 98 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_004E8ADD(void)
{
    uint32_t ebp;
    uint64_t mm0, mm1, mm2, mm3, mm4, mm5, mm6, mm7;

loc_004E8ADD: ;
    PUSH32(esp, ebp);
    ebp = esp;
    PUSH32(esp, ecx);
    PUSH32(esp, ecx);
    PUSH32(esp, ebx);
    PUSH32(esp, esi);
    PUSH32(esp, edi);
    /* pxor mm0, mm0 (MMX/SIMD integer) */
    esi = MEM32(ebp + 8);
    edi = MEM32(ebp + 0xC);
    eax = 0x80808080u;
    mm7 = eax; /* movd */
    /* TODO: punpcklbw mm7, mm7 */
    /* SSE: movq mm1, qword ptr [esi] */
    /* SSE: movq mm2, qword ptr [edi] */
    /* TODO: psubb mm1, mm7 */
    /* TODO: psubb mm2, mm7 */
    /* SSE: movq mm3, mm1 */
    /* SSE: movq mm4, mm2 */
    /* SSE: movq mm5, mm3 */
    /* TODO: pcmpgtb mm1, mm2 */
    /* SSE: movq mm7, mm1 */
    /* pand mm5, mm1 (MMX/SIMD integer) */
    /* pand mm4, mm1 (MMX/SIMD integer) */
    /* pandn mm1, mm2 (MMX/SIMD integer) */
    /* pandn mm7, mm3 (MMX/SIMD integer) */
    /* por mm5, mm1 (MMX/SIMD integer) */
    /* por mm4, mm7 (MMX/SIMD integer) */
    /* pxor mm6, mm6 (MMX/SIMD integer) */
    /* TODO: pcmpeqb mm6, mm6 */
    /* pxor mm1, mm1 (MMX/SIMD integer) */
    /* TODO: psubb mm1, mm4 */
    /* TODO: paddb mm1, mm6 */
    /* SSE: movq mm4, mm1 */
    /* TODO: punpckldq mm4, mm5 */
    /* TODO: punpckhdq mm1, mm5 */
    /* SSE: movq mm7, mm1 */
    /* TODO: pcmpgtb mm7, mm4 */
    /* pand mm1, mm7 (MMX/SIMD integer) */
    /* pandn mm7, mm4 (MMX/SIMD integer) */
    /* por mm1, mm7 (MMX/SIMD integer) */
    /* SSE: movq mm7, mm1 */
    /* TODO: psrld mm1, 0x10 */
    /* SSE: movq mm4, mm1 */
    /* TODO: pcmpgtb mm4, mm7 */
    /* pand mm1, mm4 (MMX/SIMD integer) */
    /* pandn mm4, mm7 (MMX/SIMD integer) */
    /* por mm1, mm4 (MMX/SIMD integer) */
    /* SSE: movq mm7, mm1 */
    /* TODO: psrld mm1, 8 */
    /* SSE: movq mm4, mm1 */
    /* TODO: pcmpgtb mm4, mm7 */
    /* pand mm1, mm4 (MMX/SIMD integer) */
    /* pandn mm4, mm7 (MMX/SIMD integer) */
    /* por mm1, mm4 (MMX/SIMD integer) */
    /* TODO: pslld mm1, 0x18 */
    /* TODO: psrad mm1, 0x18 */
    /* SSE: movq mm4, mm1 */
    /* TODO: psrlq mm4, 0x20 */
    /* TODO: paddd mm1, mm4 */
    ebx = mm1; /* movd */
    ebx++;
    MEM32(ebp + -8) = ebx;
    mm7 = eax; /* movd */
    /* TODO: punpcklbw mm7, mm7 */
    /* TODO: paddb mm2, mm7 */
    /* TODO: paddb mm3, mm7 */
    /* SSE: movq mm1, mm3 */
    /* TODO: punpcklbw mm1, mm0 */
    /* TODO: punpckhbw mm3, mm0 */
    /* TODO: paddw mm3, mm1 */
    /* SSE: movq mm1, mm2 */
    /* TODO: punpcklbw mm1, mm0 */
    /* TODO: punpckhbw mm2, mm0 */
    /* TODO: paddw mm2, mm1 */
    /* TODO: paddw mm2, mm3 */
    /* SSE: movq mm3, mm2 */
    /* TODO: psrlq mm3, 0x20 */
    /* TODO: paddw mm2, mm3 */
    /* SSE: movq mm3, mm2 */
    /* TODO: psrlq mm3, 0x10 */
    /* TODO: paddw mm2, mm3 */
    eax = mm2; /* movd */
    eax = eax << 0x10;
    eax = eax >> 0x10;
    MEM32(ebp + -4) = eax;
    /* emms - empty MMX state */
    eax = MEM32(ebp + 0x14);
    ecx = MEM32(ebp + -4);
    MEM32(eax) = MEM32(eax) + ecx;
    eax = MEM32(ebp + 0x10);
    ecx = MEM32(ebp + -8);
    POP32(esp, edi);
    POP32(esp, esi);
    MEM32(eax) = ecx;
    POP32(esp, ebx);
    esp = ebp;
    POP32(esp, ebp); /* leave */
    esp += 20; return; /* ret 16 */

}

/**
 * sub_004E8BF2
 * Original: 0x004E8BF2 - 0x004E8C30 (62 bytes, 24 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_004E8BF2(void)
{
    uint32_t ebp;
    int _flags = 0; /* fallback flag var */
    uint64_t mm1, mm2, mm3;

loc_004E8BF2: ;
    PUSH32(esp, ebp);
    ebp = esp;
    PUSH32(esp, ebx);
    ecx = 8;
    mm1 = MEM32(ebp + 8); /* movd */
    /* TODO: punpcklwd mm1, mm1 */
    /* TODO: punpcklwd mm1, mm1 */
    eax = MEM32(ebp + 0x14);
    edx = MEM32(ebp + 0x10);
    ebx = MEM32(ebp + 0xC);

loc_004E8C0E: ;
    /* SSE: movq mm2, qword ptr [ebx] */
    /* TODO: paddw mm2, mm1 */
    /* SSE: movq mm3, qword ptr [ebx + 8] */
    /* TODO: paddw mm3, mm1 */
    /* TODO: packuswb mm2, mm3 */
    /* SSE: movq qword ptr [edx], mm2 */
    edx = edx + eax;
    ebx = ebx + 0x10;
    ecx--;
    if ((ecx != 0)) goto loc_004E8C0E; /* jne: not equal / not zero */

loc_004E8C29: ;
    /* emms - empty MMX state */
    POP32(esp, ebx);
    POP32(esp, ebp);
    esp += 20; return; /* ret 16 */

}

/**
 * sub_004E8C30
 * Original: 0x004E8C30 - 0x004E8CF5 (197 bytes, 66 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_004E8C30(void)
{
    uint32_t ebp;
    int _flags = 0; /* fallback flag var */
    uint64_t mm0, mm1, mm2, mm3, mm4, mm5, mm7;

loc_004E8C30: ;
    PUSH32(esp, ebp);
    ebp = esp;
    PUSH32(esp, ecx);
    PUSH32(esp, ebx);
    PUSH32(esp, esi);
    PUSH32(esp, edi);
    MEM32(ebp + -4) = 0x509B48;
    eax = 0x8000;
    mm7 = eax; /* movd */
    /* TODO: punpckldq mm7, mm7 */
    ecx = 0; /* xor self */
    /* pxor mm0, mm0 (MMX/SIMD integer) */
    edi = MEM32(ebp + 0x10);
    esi = MEM32(ebp + -4);
    edx = MEM32(ebp + 0x1C);
    ebx = MEM32(ebp + 0x18);

loc_004E8C5A: ;
    eax = MEM32(ebp + 0x14);
    SET_LO16(eax, MEM16(eax + ecx * 2));
    mm2 = eax; /* movd */
    /* TODO: punpcklwd mm2, mm2 */
    /* SSE: movq mm5, qword ptr [ebx] */
    /* SSE: movq mm1, qword ptr [esi] */
    mm3 = MEM32(edi); /* movd */
    /* TODO: punpcklwd mm3, mm2 */
    /* TODO: pmaddwd mm3, mm1 */
    /* TODO: paddd mm3, mm7 */
    /* TODO: psrad mm3, 0x10 */
    /* SSE: movq mm1, qword ptr [esi + 8] */
    mm4 = MEM32(edi + 4); /* movd */
    /* TODO: punpcklwd mm4, mm2 */
    /* TODO: pmaddwd mm4, mm1 */
    /* TODO: paddd mm4, mm7 */
    /* TODO: psrad mm4, 0x10 */
    /* TODO: packssdw mm3, mm4 */
    /* TODO: paddw mm3, mm5 */
    /* TODO: packuswb mm3, mm3 */
    MEM32(edx) = mm3; /* movd */
    /* SSE: movq mm5, qword ptr [ebx + 8] */
    /* SSE: movq mm1, qword ptr [esi + 0x10] */
    mm3 = MEM32(edi + 8); /* movd */
    /* TODO: punpcklwd mm3, mm2 */
    /* TODO: pmaddwd mm3, mm1 */
    /* TODO: paddd mm3, mm7 */
    /* TODO: psrad mm3, 0x10 */
    /* SSE: movq mm1, qword ptr [esi + 0x18] */
    mm4 = MEM32(edi + 0xC); /* movd */
    /* TODO: punpcklwd mm4, mm2 */
    /* TODO: pmaddwd mm4, mm1 */
    /* TODO: paddd mm4, mm7 */
    /* TODO: psrad mm4, 0x10 */
    /* TODO: packssdw mm3, mm4 */
    /* TODO: paddw mm3, mm5 */
    /* TODO: packuswb mm3, mm3 */
    MEM32(edx + 4) = mm3; /* movd */
    esi = esi + 0x20;
    ebx = ebx + 0x10;
    edx = edx + MEM32(ebp + 0x20);
    ecx++;
    if (CMP_NE(ecx, 8)) goto loc_004E8C5A; /* jne: not equal / not zero */

loc_004E8CEC: ;
    /* emms - empty MMX state */
    POP32(esp, edi);
    POP32(esp, esi);
    POP32(esp, ebx);
    esp = ebp;
    POP32(esp, ebp); /* leave */
    esp += 32; return; /* ret 28 */

}

/**
 * sub_004E8CF5
 * Original: 0x004E8CF5 - 0x004E8D77 (130 bytes, 47 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_004E8CF5(void)
{
    uint32_t ebp;
    int _flags = 0; /* fallback flag var */
    uint64_t mm0, mm1, mm2, mm3, mm5, mm6, mm7;

loc_004E8CF5: ;
    PUSH32(esp, ebp);
    ebp = esp;
    PUSH32(esp, ebx);
    PUSH32(esp, esi);
    esi = MEM32(ebp + 8);
    /* pxor mm0, mm0 (MMX/SIMD integer) */
    /* TODO: pcmpeqw mm5, mm5 */
    /* SSE: movq mm7, qword ptr [esi] */
    /* SSE: movq mm1, qword ptr [esi + 0x10] */
    /* SSE: movq mm6, mm7 */
    /* SSE: movq mm2, mm1 */
    /* TODO: punpcklbw mm7, mm0 */
    /* TODO: punpcklbw mm1, mm0 */
    /* TODO: punpckhbw mm6, mm0 */
    /* TODO: paddw mm7, mm1 */
    /* TODO: punpckhbw mm2, mm0 */
    /* TODO: psubw mm7, mm5 */
    /* TODO: paddw mm6, mm2 */
    /* TODO: psraw mm7, 1 */
    /* TODO: psubw mm6, mm5 */
    ecx = 4;
    /* TODO: psraw mm6, 1 */
    eax = MEM32(ebp + 0x14);
    edx = MEM32(ebp + 0x10);
    ebx = MEM32(ebp + 0xC);

loc_004E8D3E: ;
    /* SSE: movq mm2, qword ptr [ebx] */
    /* TODO: paddw mm2, mm7 */
    /* SSE: movq mm3, qword ptr [ebx + 8] */
    /* TODO: paddw mm3, mm6 */
    /* TODO: packuswb mm2, mm3 */
    /* SSE: movq qword ptr [edx], mm2 */
    edx = edx + eax;
    /* SSE: movq mm2, qword ptr [ebx + 0x10] */
    /* TODO: paddw mm2, mm7 */
    /* SSE: movq mm3, qword ptr [ebx + 0x18] */
    /* TODO: paddw mm3, mm6 */
    /* TODO: packuswb mm2, mm3 */
    /* SSE: movq qword ptr [edx], mm2 */
    ebx = ebx + 0x20;
    edx = edx + eax;
    ecx--;
    if ((ecx != 0)) goto loc_004E8D3E; /* jne: not equal / not zero */

loc_004E8D6F: ;
    /* emms - empty MMX state */
    POP32(esp, esi);
    POP32(esp, ebx);
    POP32(esp, ebp);
    esp += 20; return; /* ret 16 */

}

/**
 * sub_004E8D77
 * Original: 0x004E8D77 - 0x004E9288 (1297 bytes, 520 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_004E8D77(void)
{
    uint32_t ebp;
    int _flags = 0; /* fallback flag var */

loc_004E8D77: ;
    PUSH32(esp, ebp);
    ebp = esp;
    esp = esp - 0x44;
    PUSH32(esp, esi);
    esi = MEM32(ebp + 0x14);
    eax = esi + -8;
    MEM32(ebp + -4) = eax;
    eax = MEM32(ebp + 8);
    if (CMP_A(eax, 0xB)) goto loc_004E9283; /* ja: above (unsigned >) */

loc_004E8D93: ;
    PUSH32(esp, ebx);
    PUSH32(esp, edi);
    { uint32_t _jt = MEM32(eax * 4 + 0x4E9288); /* switch: 12 entries, 12 targets */
    if (_jt == 0x004E8D9Cu) goto loc_004E8D9C;
    if (_jt == 0x004E8DCEu) goto loc_004E8DCE;
    if (_jt == 0x004E8DE2u) goto loc_004E8DE2;
    if (_jt == 0x004E8E3Au) goto loc_004E8E3A;
    if (_jt == 0x004E8EBDu) goto loc_004E8EBD;
    if (_jt == 0x004E8F4Bu) goto loc_004E8F4B;
    if (_jt == 0x004E8F99u) goto loc_004E8F99;
    if (_jt == 0x004E8FE1u) goto loc_004E8FE1;
    if (_jt == 0x004E9029u) goto loc_004E9029;
    if (_jt == 0x004E90ADu) goto loc_004E90AD;
    if (_jt == 0x004E91EFu) goto loc_004E91EF;
    if (_jt == 0x004E9238u) goto loc_004E9238;
    g_seh_ebp = ebp; RECOMP_ITAIL(_jt); return; }

loc_004E8D9C: ;
    eax = ebp + -36;
    PUSH32(esp, eax);
    eax = ebp + -68;
    PUSH32(esp, eax);
    PUSH32(esp, MEM32(ebp + 0x1C));
    PUSH32(esp, MEM32(ebp + 0x18));
    PUSH32(esp, 0); sub_004E8491(); /* call 0x004E8491 */

loc_004E8DAF: ;
    PUSH32(esp, esi);
    PUSH32(esp, MEM32(ebp + 0x10));
    eax = ebp + -36;
    PUSH32(esp, MEM32(ebp + 0xC));
    PUSH32(esp, eax);
    eax = ebp + -68;
    PUSH32(esp, eax);
    PUSH32(esp, MEM32(ebp + 0x1C));
    PUSH32(esp, MEM32(ebp + 0x18));
    PUSH32(esp, 0); sub_004E8C30(); /* call 0x004E8C30 */

loc_004E8DC9: ;
    goto loc_004E9281;

loc_004E8DCE: ;
    PUSH32(esp, esi);
    PUSH32(esp, MEM32(ebp + 0x10));
    PUSH32(esp, MEM32(ebp + 0xC));
    PUSH32(esp, MEM32(ebp + 0x18));
    PUSH32(esp, 0); sub_004E8CF5(); /* call 0x004E8CF5 */

loc_004E8DDD: ;
    goto loc_004E9281;

loc_004E8DE2: ;
    ecx = MEM32(ebp + 0x1C);
    edi = MEM32(ebp + 0x10);
    ebx = MEM32(ebp + 0xC);
    ecx--;
    esi = ecx + -8;
    MEM32(ebp + 0x18) = 8;

loc_004E8DF6: ;
    eax = ZX8(MEM8(esi));
    edx = ZX8(MEM8(ecx));
    eax = eax + edx + 1;
    eax = (uint32_t)((int32_t)eax >> 1);
    ecx--;
    esi--;
    MEM32(ebp + 0x1C) = 8;

loc_004E8E0B: ;
    edx = (uint32_t)(int32_t)SMEM16(ebx);
    edx = edx + eax;
    if (((int32_t)edx >= 0)) goto loc_004E8E16; /* jns: not sign (positive) */

loc_004E8E12: ;
    edx = 0; /* xor self */
    goto loc_004E8E23;

loc_004E8E16: ;
    if (CMP_LE(edx, 0xFF)) goto loc_004E8E23; /* jle: less or equal (signed <=) */

loc_004E8E1E: ;
    edx = 0xFF;

loc_004E8E23: ;
    MEM8(edi) = LO8(edx);
    edi++;
    ebx++;
    ebx++;
    MEM32(ebp + 0x1C) = MEM32(ebp + 0x1C) - 1;
    if ((MEM32(ebp + 0x1C) != 0)) goto loc_004E8E0B; /* jne: not equal / not zero */

loc_004E8E2D: ;
    edi = edi + MEM32(ebp + -4);
    MEM32(ebp + 0x18) = MEM32(ebp + 0x18) - 1;
    if ((MEM32(ebp + 0x18) != 0)) goto loc_004E8DF6; /* jne: not equal / not zero */

loc_004E8E35: ;
    goto loc_004E9281;

loc_004E8E3A: ;
    MEM32(ebp + 0x1C) = MEM32(ebp + 0x1C) - 1;
    ecx = MEM32(ebp + 0x18);
    PUSH32(esp, 8);
    eax = ebp + -36;
    edx = 0; /* xor self */
    POP32(esp, ebx);

loc_004E8E48: ;
    esi = ZX8(MEM8(ecx));
    esi = (uint32_t)((int32_t)esi * (int32_t)edx);
    esi = esi + 4;
    MEM32(eax) = esi;
    eax = eax + 4;
    ecx++;
    edx++;
    if (CMP_L(edx, ebx)) goto loc_004E8E48; /* jl: less (signed <) */

loc_004E8E5C: ;
    edi = MEM32(ebp + 0xC);
    MEM32(ebp + 0x18) = ebx;
    goto loc_004E8E67;

loc_004E8E64: ;
    PUSH32(esp, 8);
    POP32(esp, ebx);

loc_004E8E67: ;
    eax = MEM32(ebp + 0x1C);
    edx = ZX8(MEM8(eax));
    MEM32(ebp + 0x1C) = MEM32(ebp + 0x1C) - 1;
    esi = edx;
    ecx = ebp + -36;
    esi = esi << 3;
    MEM32(ebp + 0xC) = ebx;

loc_004E8E7B: ;
    eax = MEM32(ecx);
    ebx = (uint32_t)(int32_t)SMEM16(edi);
    eax = eax + esi;
    eax = (uint32_t)((int32_t)eax >> 3);
    esi = esi - edx;
    eax = eax + ebx;
    if (((int32_t)eax >= 0)) goto loc_004E8E8F; /* jns: not sign (positive) */

loc_004E8E8B: ;
    eax = 0; /* xor self */
    goto loc_004E8E9A;

loc_004E8E8F: ;
    ebx = 0xFF;
    if (CMP_LE(eax, ebx)) goto loc_004E8E9A; /* jle: less or equal (signed <=) */

loc_004E8E98: ;
    eax = ebx;

loc_004E8E9A: ;
    ebx = MEM32(ebp + 0x10);
    MEM8(ebx) = LO8(eax);
    ebx++;
    edi++;
    edi++;
    ecx = ecx + 4;
    MEM32(ebp + 0xC) = MEM32(ebp + 0xC) - 1;
    MEM32(ebp + 0x10) = ebx;
    if ((MEM32(ebp + 0xC) != 0)) goto loc_004E8E7B; /* jne: not equal / not zero */

loc_004E8EAD: ;
    ebx = ebx + MEM32(ebp + -4);
    MEM32(ebp + 0x18) = MEM32(ebp + 0x18) - 1;
    MEM32(ebp + 0x10) = ebx;
    if ((MEM32(ebp + 0x18) != 0)) goto loc_004E8E64; /* jne: not equal / not zero */

loc_004E8EB8: ;
    goto loc_004E9281;

loc_004E8EBD: ;
    MEM32(ebp + 0x1C) = MEM32(ebp + 0x1C) - 1;
    ecx = MEM32(ebp + 0x18);
    PUSH32(esp, 8);
    eax = ebp + -36;
    POP32(esp, edx);

loc_004E8EC9: ;
    esi = ZX8(MEM8(ecx));
    esi = esi << 3;
    MEM32(eax) = esi;
    eax = eax + 4;
    ecx++;
    edx--;
    if ((edx != 0)) goto loc_004E8EC9; /* jne: not equal / not zero */

loc_004E8ED8: ;
    MEM32(ebp + 0x14) = MEM32(ebp + 0x14) & 0;

loc_004E8EDC: ;
    eax = MEM32(ebp + 0x1C);
    eax = ZX8(MEM8(eax));
    eax = (uint32_t)((int32_t)eax * (int32_t)MEM32(ebp + 0x14));
    edi = MEM32(ebp + 0x18);
    eax = eax + 4;
    MEM32(ebp + 0x1C) = MEM32(ebp + 0x1C) - 1;
    esi = ebp + -36;
    MEM32(ebp + 8) = 8;

loc_004E8EF9: ;
    ecx = MEM32(esi);
    ebx = ZX8(MEM8(edi));
    edx = ecx + eax;
    ecx = ecx - ebx;
    MEM32(esi) = ecx;
    ecx = MEM32(ebp + 0xC);
    ecx = (uint32_t)(int32_t)SMEM16(ecx);
    edx = (uint32_t)((int32_t)edx >> 3);
    ecx = ecx + edx;
    if (((int32_t)ecx >= 0)) goto loc_004E8F16; /* jns: not sign (positive) */

loc_004E8F12: ;
    ecx = 0; /* xor self */
    goto loc_004E8F21;

loc_004E8F16: ;
    edx = 0xFF;
    if (CMP_LE(ecx, edx)) goto loc_004E8F21; /* jle: less or equal (signed <=) */

loc_004E8F1F: ;
    ecx = edx;

loc_004E8F21: ;
    edx = MEM32(ebp + 0x10);
    MEM32(ebp + 0xC) = MEM32(ebp + 0xC) + 2;
    MEM8(edx) = LO8(ecx);
    edx++;
    esi = esi + 4;
    edi++;
    MEM32(ebp + 8) = MEM32(ebp + 8) - 1;
    MEM32(ebp + 0x10) = edx;
    if ((MEM32(ebp + 8) != 0)) goto loc_004E8EF9; /* jne: not equal / not zero */

loc_004E8F37: ;
    edx = edx + MEM32(ebp + -4);
    MEM32(ebp + 0x14) = MEM32(ebp + 0x14) + 1;
    (void)0; /* cmp MEM32(ebp + 0x14), 8 - flags set for next jcc */
    MEM32(ebp + 0x10) = edx;
    if (CMP_L(MEM32(ebp + 0x14), 8)) goto loc_004E8EDC; /* jl: less (signed <) */

loc_004E8F46: ;
    goto loc_004E9281;

loc_004E8F4B: ;
    ecx = MEM32(ebp + 0x10);
    esi = MEM32(ebp + 0xC);
    edx = 0x4EA682;
    MEM32(ebp + 0x1C) = 8;

loc_004E8F5D: ;
    PUSH32(esp, 8);
    POP32(esp, edi);

loc_004E8F60: ;
    eax = (uint32_t)(int32_t)SMEM8(edx);
    ebx = MEM32(ebp + 0x18);
    eax = ZX8(MEM8(eax + ebx));
    ebx = (uint32_t)(int32_t)SMEM16(esi);
    eax = eax + ebx;
    if (((int32_t)eax >= 0)) goto loc_004E8F75; /* jns: not sign (positive) */

loc_004E8F71: ;
    eax = 0; /* xor self */
    goto loc_004E8F80;

loc_004E8F75: ;
    ebx = 0xFF;
    if (CMP_LE(eax, ebx)) goto loc_004E8F80; /* jle: less or equal (signed <=) */

loc_004E8F7E: ;
    eax = ebx;

loc_004E8F80: ;
    MEM8(ecx) = LO8(eax);
    ecx++;
    esi++;
    esi++;
    edx++;
    edi--;
    if ((edi != 0)) goto loc_004E8F60; /* jne: not equal / not zero */

loc_004E8F89: ;
    ecx = ecx + MEM32(ebp + -4);
    edx = edx - 6;
    MEM32(ebp + 0x1C) = MEM32(ebp + 0x1C) - 1;
    if ((MEM32(ebp + 0x1C) != 0)) goto loc_004E8F5D; /* jne: not equal / not zero */

loc_004E8F94: ;
    goto loc_004E9281;

loc_004E8F99: ;
    edx = MEM32(ebp + 0x10);
    edi = MEM32(ebp + 0xC);
    esi = 0; /* xor self */

loc_004E8FA1: ;
    eax = MEM32(ebp + 0x18);
    eax = eax + esi + 1;
    MEM32(ebp + 0x1C) = 8;

loc_004E8FAF: ;
    ecx = (uint32_t)(int32_t)SMEM16(edi);
    ebx = ZX8(MEM8(eax));
    ecx = ecx + ebx;
    if (((int32_t)ecx >= 0)) goto loc_004E8FBD; /* jns: not sign (positive) */

loc_004E8FB9: ;
    ecx = 0; /* xor self */
    goto loc_004E8FC8;

loc_004E8FBD: ;
    ebx = 0xFF;
    if (CMP_LE(ecx, ebx)) goto loc_004E8FC8; /* jle: less or equal (signed <=) */

loc_004E8FC6: ;
    ecx = ebx;

loc_004E8FC8: ;
    MEM8(edx) = LO8(ecx);
    edx++;
    edi++;
    edi++;
    eax++;
    MEM32(ebp + 0x1C) = MEM32(ebp + 0x1C) - 1;
    if ((MEM32(ebp + 0x1C) != 0)) goto loc_004E8FAF; /* jne: not equal / not zero */

loc_004E8FD3: ;
    edx = edx + MEM32(ebp + -4);
    esi++;
    if (CMP_L(esi, 8)) goto loc_004E8FA1; /* jl: less (signed <) */

loc_004E8FDC: ;
    goto loc_004E9281;

loc_004E8FE1: ;
    edx = MEM32(ebp + 0x10);
    eax = 0; /* xor self */

loc_004E8FE6: ;
    esi = eax + 1;
    eax = esi;
    eax = (uint32_t)((int32_t)eax >> 1);
    eax = eax + MEM32(ebp + 0x18);
    PUSH32(esp, 8);
    POP32(esp, edi);

loc_004E8FF3: ;
    ecx = MEM32(ebp + 0xC);
    ecx = (uint32_t)(int32_t)SMEM16(ecx);
    ebx = ZX8(MEM8(eax));
    ecx = ecx + ebx;
    if (((int32_t)ecx >= 0)) goto loc_004E9004; /* jns: not sign (positive) */

loc_004E9000: ;
    ecx = 0; /* xor self */
    goto loc_004E900F;

loc_004E9004: ;
    ebx = 0xFF;
    if (CMP_LE(ecx, ebx)) goto loc_004E900F; /* jle: less or equal (signed <=) */

loc_004E900D: ;
    ecx = ebx;

loc_004E900F: ;
    MEM32(ebp + 0xC) = MEM32(ebp + 0xC) + 2;
    MEM8(edx) = LO8(ecx);
    edx++;
    eax++;
    edi--;
    if ((edi != 0)) goto loc_004E8FF3; /* jne: not equal / not zero */

loc_004E901A: ;
    edx = edx + MEM32(ebp + -4);
    eax = esi;
    if (CMP_L(eax, 8)) goto loc_004E8FE6; /* jl: less (signed <) */

loc_004E9024: ;
    goto loc_004E9281;

loc_004E9029: ;
    esi = MEM32(ebp + 0x10);
    edi = MEM32(ebp + 0xC);
    MEM32(ebp + 0x14) = 1;

loc_004E9036: ;
    ecx = MEM32(ebp + 0x14);
    (void)0; /* test ecx, ecx - flags set for next jcc */
    PUSH32(esp, 8);
    POP32(esp, edx);
    if (CMP_G(ecx & ecx, 0)) goto loc_004E9073; /* jg: greater (signed >) */

loc_004E9040: ;
    eax = ecx;
    eax = (uint32_t)(-(int32_t)eax);
    PUSH32(esp, 7);
    eax = eax >> 1;
    POP32(esp, edx);
    edx = edx - eax;

loc_004E904B: ;
    eax = MEM32(ebp + 0x1C);
    eax = ZX8(MEM8(ecx + eax));
    ebx = (uint32_t)(int32_t)SMEM16(edi);
    eax = eax + ebx;
    if (((int32_t)eax >= 0)) goto loc_004E905D; /* jns: not sign (positive) */

loc_004E9059: ;
    eax = 0; /* xor self */
    goto loc_004E9068;

loc_004E905D: ;
    ebx = 0xFF;
    if (CMP_LE(eax, ebx)) goto loc_004E9068; /* jle: less or equal (signed <=) */

loc_004E9066: ;
    eax = ebx;

loc_004E9068: ;
    MEM8(esi) = LO8(eax);
    esi++;
    edi++;
    edi++;
    ecx++;
    ecx++;
    if (CMP_LE(ecx & ecx, 0)) goto loc_004E904B; /* jle: less or equal (signed <=) */

loc_004E9073: ;
    (void)0; /* test edx, edx - flags set for next jcc */
    ecx = MEM32(ebp + 0x18);
    if (CMP_LE(edx & edx, 0)) goto loc_004E909C; /* jle: less or equal (signed <=) */

loc_004E907A: ;
    eax = (uint32_t)(int32_t)SMEM16(edi);
    ebx = ZX8(MEM8(ecx));
    eax = eax + ebx;
    if (((int32_t)eax >= 0)) goto loc_004E9088; /* jns: not sign (positive) */

loc_004E9084: ;
    eax = 0; /* xor self */
    goto loc_004E9093;

loc_004E9088: ;
    ebx = 0xFF;
    if (CMP_LE(eax, ebx)) goto loc_004E9093; /* jle: less or equal (signed <=) */

loc_004E9091: ;
    eax = ebx;

loc_004E9093: ;
    MEM8(esi) = LO8(eax);
    esi++;
    edi++;
    edi++;
    ecx++;
    edx--;
    if ((edx != 0)) goto loc_004E907A; /* jne: not equal / not zero */

loc_004E909C: ;
    esi = esi + MEM32(ebp + -4);
    MEM32(ebp + 0x14) = MEM32(ebp + 0x14) - 1;
    if (CMP_G(MEM32(ebp + 0x14), 0xFFFFFFF9u)) goto loc_004E9036; /* jg: greater (signed >) */

loc_004E90A8: ;
    goto loc_004E9281;

loc_004E90AD: ;
    eax = MEM32(ebp + 0x1C);
    MEM32(ebp + 0x14) = MEM32(ebp + 0x14) & 0;
    esi = MEM32(ebp + 0xC);
    MEM32(ebp + 8) = eax;
    eax = MEM32(ebp + 0x10);

loc_004E90BD: ;
    edi = MEM32(ebp + 0x14);
    (void)0; /* test edi, edi - flags set for next jcc */
    edx = MEM32(ebp + 8);
    ebx = 0xFF;
    if (CMP_LE(edi & edi, 0)) goto loc_004E910A; /* jle: less or equal (signed <=) */

loc_004E90CC: ;
    MEM32(ebp + 0x10) = edi;

loc_004E90CF: ;
    ecx = (uint32_t)(int32_t)SMEM16(esi);
    edi = ZX8(MEM8(edx));
    ecx = ecx + edi;
    if (((int32_t)ecx >= 0)) goto loc_004E90DD; /* jns: not sign (positive) */

loc_004E90D9: ;
    ecx = 0; /* xor self */
    goto loc_004E90E3;

loc_004E90DD: ;
    if (CMP_LE(ecx, ebx)) goto loc_004E90E3; /* jle: less or equal (signed <=) */

loc_004E90E1: ;
    ecx = ebx;

loc_004E90E3: ;
    MEM8(eax) = LO8(ecx);
    edi = ZX8(MEM8(edx));
    eax++;
    esi++;
    esi++;
    ecx = (uint32_t)(int32_t)SMEM16(esi);
    ecx = ecx + edi;
    if (((int32_t)ecx >= 0)) goto loc_004E90F6; /* jns: not sign (positive) */

loc_004E90F2: ;
    ecx = 0; /* xor self */
    goto loc_004E90FC;

loc_004E90F6: ;
    if (CMP_LE(ecx, ebx)) goto loc_004E90FC; /* jle: less or equal (signed <=) */

loc_004E90FA: ;
    ecx = ebx;

loc_004E90FC: ;
    MEM8(eax) = LO8(ecx);
    eax++;
    esi++;
    esi++;
    edx++;
    MEM32(ebp + 0x10) = MEM32(ebp + 0x10) - 1;
    if ((MEM32(ebp + 0x10) != 0)) goto loc_004E90CF; /* jne: not equal / not zero */

loc_004E9107: ;
    edi = MEM32(ebp + 0x14);

loc_004E910A: ;
    edx = MEM32(ebp + 0x1C);
    ecx = (uint32_t)(int32_t)SMEM16(esi);
    edx = ZX8(MEM8(edx));
    ecx = ecx + edx;
    if (((int32_t)ecx >= 0)) goto loc_004E911B; /* jns: not sign (positive) */

loc_004E9117: ;
    ecx = 0; /* xor self */
    goto loc_004E9121;

loc_004E911B: ;
    if (CMP_LE(ecx, ebx)) goto loc_004E9121; /* jle: less or equal (signed <=) */

loc_004E911F: ;
    ecx = ebx;

loc_004E9121: ;
    ebx = MEM32(ebp + 0x18);
    MEM8(eax) = LO8(ecx);
    edx = ZX8(MEM8(ebx + -1));
    ecx = edi + edi;
    edi = ecx;
    PUSH32(esp, 7);
    eax++;
    esi++;
    POP32(esp, ecx);
    ecx = ecx - edi;
    esi++;
    if (CMP_LE(ecx & ecx, 0)) goto loc_004E916A; /* jle: less or equal (signed <=) */

loc_004E913B: ;
    MEM32(ebp + 0x10) = ecx;

loc_004E913E: ;
    edi = ZX8(MEM8(ebx));
    ecx = (uint32_t)(int32_t)SMEM16(esi);
    edx = edi + edx + 1;
    edx = (uint32_t)((int32_t)edx >> 1);
    edx = edx + ecx;
    if (((int32_t)edx >= 0)) goto loc_004E9152; /* jns: not sign (positive) */

loc_004E914E: ;
    edx = 0; /* xor self */
    goto loc_004E915D;

loc_004E9152: ;
    ecx = 0xFF;
    if (CMP_LE(edx, ecx)) goto loc_004E915D; /* jle: less or equal (signed <=) */

loc_004E915B: ;
    edx = ecx;

loc_004E915D: ;
    MEM8(eax) = LO8(edx);
    eax++;
    esi++;
    esi++;
    ebx++;
    MEM32(ebp + 0x10) = MEM32(ebp + 0x10) - 1;
    edx = edi;
    if ((MEM32(ebp + 0x10) != 0)) goto loc_004E913E; /* jne: not equal / not zero */

loc_004E916A: ;
    eax = eax + MEM32(ebp + -4);
    MEM32(ebp + 0x14) = MEM32(ebp + 0x14) + 1;
    MEM32(ebp + 8) = MEM32(ebp + 8) - 1;
    if (CMP_L(MEM32(ebp + 0x14), 4)) goto loc_004E90BD; /* jl: less (signed <) */

loc_004E917D: ;
    PUSH32(esp, 8);
    POP32(esp, ebx);
    if (CMP_GE(MEM32(ebp + 0x14), ebx)) goto loc_004E9281; /* jge: greater or equal (signed >=) */

loc_004E9189: ;
    ecx = MEM32(ebp + 0x1C);
    ecx = ecx - MEM32(ebp + 0x14);
    ebx = ebx - MEM32(ebp + 0x14);
    MEM32(ebp + 0x1C) = ecx;

loc_004E9195: ;
    edx = MEM32(ebp + 0x1C);
    MEM32(ebp + 0x10) = 4;

loc_004E919F: ;
    ecx = (uint32_t)(int32_t)SMEM16(esi);
    edi = ZX8(MEM8(edx));
    ecx = ecx + edi;
    if (((int32_t)ecx >= 0)) goto loc_004E91AD; /* jns: not sign (positive) */

loc_004E91A9: ;
    ecx = 0; /* xor self */
    goto loc_004E91B8;

loc_004E91AD: ;
    edi = 0xFF;
    if (CMP_LE(ecx, edi)) goto loc_004E91B8; /* jle: less or equal (signed <=) */

loc_004E91B6: ;
    ecx = edi;

loc_004E91B8: ;
    MEM8(eax) = LO8(ecx);
    edi = ZX8(MEM8(edx));
    eax++;
    esi++;
    esi++;
    ecx = (uint32_t)(int32_t)SMEM16(esi);
    ecx = ecx + edi;
    if (((int32_t)ecx >= 0)) goto loc_004E91CB; /* jns: not sign (positive) */

loc_004E91C7: ;
    ecx = 0; /* xor self */
    goto loc_004E91D6;

loc_004E91CB: ;
    edi = 0xFF;
    if (CMP_LE(ecx, edi)) goto loc_004E91D6; /* jle: less or equal (signed <=) */

loc_004E91D4: ;
    ecx = edi;

loc_004E91D6: ;
    MEM8(eax) = LO8(ecx);
    eax++;
    esi++;
    esi++;
    edx++;
    MEM32(ebp + 0x10) = MEM32(ebp + 0x10) - 1;
    if ((MEM32(ebp + 0x10) != 0)) goto loc_004E919F; /* jne: not equal / not zero */

loc_004E91E1: ;
    eax = eax + MEM32(ebp + -4);
    MEM32(ebp + 0x1C) = MEM32(ebp + 0x1C) - 1;
    ebx--;
    if ((ebx != 0)) goto loc_004E9195; /* jne: not equal / not zero */

loc_004E91EA: ;
    goto loc_004E9281;

loc_004E91EF: ;
    eax = MEM32(ebp + 0x18);
    edx = MEM32(ebp + 0x10);
    esi = MEM32(ebp + 0xC);
    eax--;
    MEM32(ebp + 0x1C) = eax;
    MEM32(ebp + 0x18) = 8;

loc_004E9203: ;
    ecx = MEM32(ebp + 0x1C);
    PUSH32(esp, 8);
    POP32(esp, edi);

loc_004E9209: ;
    eax = (uint32_t)(int32_t)SMEM16(esi);
    ebx = ZX8(MEM8(ecx));
    eax = eax + ebx;
    if (((int32_t)eax >= 0)) goto loc_004E9217; /* jns: not sign (positive) */

loc_004E9213: ;
    eax = 0; /* xor self */
    goto loc_004E9222;

loc_004E9217: ;
    ebx = 0xFF;
    if (CMP_LE(eax, ebx)) goto loc_004E9222; /* jle: less or equal (signed <=) */

loc_004E9220: ;
    eax = ebx;

loc_004E9222: ;
    MEM8(edx) = LO8(eax);
    edx++;
    esi++;
    esi++;
    ecx++;
    edi--;
    if ((edi != 0)) goto loc_004E9209; /* jne: not equal / not zero */

loc_004E922B: ;
    edx = edx + MEM32(ebp + -4);
    MEM32(ebp + 0x1C) = MEM32(ebp + 0x1C) - 1;
    MEM32(ebp + 0x18) = MEM32(ebp + 0x18) - 1;
    if ((MEM32(ebp + 0x18) != 0)) goto loc_004E9203; /* jne: not equal / not zero */

loc_004E9236: ;
    goto loc_004E9281;

loc_004E9238: ;
    edx = MEM32(ebp + 0x10);
    esi = MEM32(ebp + 0xC);
    edi = 0; /* xor self */

loc_004E9240: ;
    eax = edi + 0x4EA698;
    MEM32(ebp + 0x10) = 8;

loc_004E924D: ;
    ecx = (uint32_t)(int32_t)SMEM8(eax);
    ebx = MEM32(ebp + 0x1C);
    ecx = ZX8(MEM8(ecx + ebx));
    ebx = (uint32_t)(int32_t)SMEM16(esi);
    ecx = ecx + ebx;
    if (((int32_t)ecx >= 0)) goto loc_004E9262; /* jns: not sign (positive) */

loc_004E925E: ;
    ecx = 0; /* xor self */
    goto loc_004E926D;

loc_004E9262: ;
    ebx = 0xFF;
    if (CMP_LE(ecx, ebx)) goto loc_004E926D; /* jle: less or equal (signed <=) */

loc_004E926B: ;
    ecx = ebx;

loc_004E926D: ;
    MEM8(edx) = LO8(ecx);
    edx++;
    esi++;
    esi++;
    eax++;
    MEM32(ebp + 0x10) = MEM32(ebp + 0x10) - 1;
    if ((MEM32(ebp + 0x10) != 0)) goto loc_004E924D; /* jne: not equal / not zero */

loc_004E9278: ;
    edx = edx + MEM32(ebp + -4);
    edi++;
    if (CMP_L(edi, 8)) goto loc_004E9240; /* jl: less (signed <) */

loc_004E9281: ;
    POP32(esp, edi);
    POP32(esp, ebx);

loc_004E9283: ;
    POP32(esp, esi);
    esp = ebp;
    POP32(esp, ebp); /* leave */
    esp += 28; return; /* ret 24 */

}

/**
 * sub_004E9350
 * Original: 0x004E9350 - 0x004E93BB (107 bytes, 42 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_004E9350(void)
{
    uint32_t ebp;

loc_004E9350: ;
    PUSH32(esp, ebp);
    ebp = esp;
    esp = esp - 0x44;
    PUSH32(esp, ebx);
    PUSH32(esp, esi);
    PUSH32(esp, edi);
    ecx = MEM32(ebp + 0x10);
    ecx = ecx + 0xA;
    ecx = (uint32_t)((int32_t)ecx >> 3);
    eax = ecx + ecx;
    MEM32(ebp + -8) = eax;
    eax = MEM32(ebp + 8);
    esi = MEM32(ebp + 0xC);
    edx = eax;
    edx = edx - esi;
    MEM32(ebp + -36) = edx;
    ebx = esi + esi;
    edx = eax;
    edx = edx - ebx;
    MEM32(ebp + -44) = edx;
    edx = esi + esi * 2;
    ebx = edx + eax;
    MEM32(ebp + 0xC) = ebx;
    ebx = eax;
    ebx = ebx - edx;
    edx = esi;
    edx = edx << 2;
    MEM32(ebp + -48) = ebx;
    ebx = edx;
    edx = eax;
    edx = edx - ebx;
    MEM32(ebp + -52) = edx;
    edx = esi + esi * 4;
    ebx = edx;
    edx = eax;
    edi = eax + esi;
    edx = edx - ebx;
    MEM32(ebp + -4) = ecx;
    MEM32(ebp + -40) = edi;
    MEM32(ebp + -56) = edx;
    MEM32(ebp + -60) = 8;
    g_seh_ebp = ebp; sub_004E93C4(); return; /* tail jmp 0x004E93C4 */

}

/**
 * sub_004E9622
 * Original: 0x004E9622 - 0x004E9646 (36 bytes, 14 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_004E9622(void)
{
    uint32_t ebp;

loc_004E9622: ;
    PUSH32(esp, ebp);
    ebp = esp;
    esp = esp - 0x18;
    ecx = MEM32(ebp + 0x10);
    PUSH32(esp, ebx);
    PUSH32(esp, esi);
    esi = MEM32(ebp + 8);
    ecx = ecx + 0xA;
    ecx = (uint32_t)((int32_t)ecx >> 3);
    PUSH32(esp, edi);
    MEM32(ebp + -4) = ecx;
    esi = esi + 0xFFFFFFFBu;
    MEM32(ebp + -20) = 8;
    g_seh_ebp = ebp; sub_004E9649(); return; /* tail jmp 0x004E9649 */

}

/**
 * sub_004E986F
 * Original: 0x004E986F - 0x004E9921 (178 bytes, 71 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_004E986F(void)
{
    uint32_t ebp;
    int _flags = 0; /* fallback flag var */
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_004E986F: ;
    PUSH32(esp, ebp);
    ebp = esp + -60;
    esp = esp - 0xBC;
    eax = MEM32(ebp + 0x44);
    edx = MEM32(eax + 0x11C);
    PUSH32(esp, ebx);
    ebx = MEM32(eax + 0x120);
    eax = MEM32(ebp + 0x64);
    ecx = 0; /* xor self */
    (void)0; /* test LO8(eax), 1 - flags set for next jcc */
    PUSH32(esp, esi);
    esi = eax + eax;
    PUSH32(esp, edi);
    MEM32(ebp + 0xC) = edx;
    MEM32(ebp + 0x1C) = ebx;
    MEM32(ebp + 0x18) = ecx;
    MEM32(ebp + 0x2C) = ecx;
    MEM32(ebp + 0x24) = ecx;
    MEM32(ebp + 0x38) = ecx;
    MEM32(ebp + 8) = esi;
    if (TEST_NZ(LO8(eax), 1)) goto loc_004E98AE; /* jne: not equal / not zero */

loc_004E98AD: ;
    eax--;

loc_004E98AE: ;
    (void)0; /* cmp MEM32(ebp + 0x58), ecx - flags set for next jcc */
    edi = MEM32(ebp + 0x54);
    esi = MEM32(ebp + 0x50);
    MEM32(ebp + 0x10) = eax;
    if (CMP_NE(MEM32(ebp + 0x58), ecx)) { sub_004E9921(); return; } /* jne: not equal / not zero */

loc_004E98BC: ;
    if (CMP_NE(MEM32(ebp + 0x5C), ecx)) goto loc_004E98D3; /* jne: not equal / not zero */

loc_004E98C1: ;
    PUSH32(esp, 0x10);
    POP32(esp, ecx);
    eax = 0x80808080u;
    edi = ebx + -31;
    { uint32_t _i; for (_i = 0; _i < ecx; _i++) MEM32(edi + _i*4) = eax; }
    edi += ecx * 4; ecx = 0; /* rep stosd */
    g_seh_ebp = ebp; sub_004E99FE(); return; /* tail jmp 0x004E99FE */

loc_004E98D3: ;
    eax = MEM32(ebp + 0x54);
    esi = MEM32(ebp + 0x50);
    esi = esi - eax;
    edi = edx;
    MEM32(edi) = MEM32(esi); esi += 4; edi += 4; /* movsd */
    MEM32(edi) = MEM32(esi); esi += 4; edi += 4; /* movsd */
    MEM32(edi) = MEM32(esi); esi += 4; edi += 4; /* movsd */
    MEM32(edi) = MEM32(esi); esi += 4; edi += 4; /* movsd */
    esi = MEM32(ebp + 0x50);
    eax = eax + eax;
    esi = esi - eax;
    edi = edx + 0x10;
    MEM32(edi) = MEM32(esi); esi += 4; edi += 4; /* movsd */
    MEM32(edi) = MEM32(esi); esi += 4; edi += 4; /* movsd */
    MEM32(edi) = MEM32(esi); esi += 4; edi += 4; /* movsd */
    MEM32(edi) = MEM32(esi); esi += 4; edi += 4; /* movsd */
    esi = 0; /* xor self */
    eax = 0; /* xor self */

loc_004E98F3: ;
    ecx = ZX8(MEM8(eax + edx));
    esi = esi + ecx;
    eax++;
    if (CMP_L(eax, 8)) goto loc_004E98F3; /* jl: less (signed <) */

loc_004E98FF: ;
    eax = esi + 4;
    eax = eax >> 3;
    edi = ebx + -31;
    SET_LO8(ebx, LO8(eax));
    SET_HI8(ebx, LO8(ebx));
    PUSH32(esp, 8);
    POP32(esp, ecx);
    eax = ebx;
    eax = eax << 0x10;
    SET_LO16(eax, LO16(ebx));
    { uint32_t _i; for (_i = 0; _i < ecx; _i++) MEM32(edi + _i*4) = eax; }
    edi += ecx * 4; ecx = 0; /* rep stosd */
    ebx = MEM32(ebp + 0x1C);
    g_seh_ebp = ebp; sub_004E99FE(); return; /* tail jmp 0x004E99FE */

}

/**
 * sub_004EA129
 * Original: 0x004EA129 - 0x004EA40C (739 bytes, 269 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_004EA129(void)
{
    uint32_t ebp;
    int _flags = 0; /* fallback flag var */
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_004EA129: ;
    PUSH32(esp, ebp);
    ebp = esp + -112;
    esp = esp - 0xE4;
    PUSH32(esp, ebx);
    PUSH32(esp, esi);
    PUSH32(esp, edi);
    PUSH32(esp, 0x24);
    POP32(esp, edx);
    ecx = ebp + 0xC;
    PUSH32(esp, 0); sub_004E2ECC(); /* call 0x004E2ECC */

loc_004EA142: ;
    edx = 0x80;
    ecx = ebp + -116;
    PUSH32(esp, 0); sub_004E2ECC(); /* call 0x004E2ECC */

loc_004EA14F: ;
    esi = MEM32(ebp + 0x78);
    eax = MEM32(esi + 0xDC);
    edi = MEM32(esi + 0xE0);
    ecx = eax;
    ecx = ecx << 3;
    ebx = eax;
    MEM32(ebp + 0x50) = ecx;
    ecx = MEM32(ebp + 0x7C);
    ebx = ebx << 4;
    eax = eax + eax;
    edi = edi << 1;
    (void)0; /* cmp ecx, 4 - flags set for next jcc */
    MEM32(ebp + 0x48) = ebx;
    MEM32(ebp + 0x60) = eax;
    MEM32(ebp + 0x38) = edi;
    MEM32(ebp + 0x64) = ecx;
    if (CMP_BE(ecx, 4)) goto loc_004EA18E; /* jbe: below or equal (unsigned <=) */

loc_004EA183: ;
    eax = ecx + 3;
    eax = eax >> 3;
    eax = eax + ecx;
    MEM32(ebp + 0x64) = eax;

loc_004EA18E: ;
    eax = ecx;
    eax = eax >> 1;
    ecx = 0x10000;
    eax = eax + ecx;
    edx = 0; /* xor self */
    { uint64_t _dividend = ((uint64_t)edx << 32) | eax;
      eax = (uint32_t)(_dividend / (uint32_t)MEM32(ebp + 0x7C));
      edx = (uint32_t)(_dividend % (uint32_t)MEM32(ebp + 0x7C)); }
    edx = 0; /* xor self */
    MEM32(ebp + 0x30) = eax;
    eax = MEM32(ebp + 0x64);
    eax = eax >> 1;
    eax = eax + ecx;
    { uint64_t _dividend = ((uint64_t)edx << 32) | eax;
      eax = (uint32_t)(_dividend / (uint32_t)MEM32(ebp + 0x64));
      edx = (uint32_t)(_dividend % (uint32_t)MEM32(ebp + 0x64)); }
    ecx = esi;
    MEM32(ebp + 0x40) = eax;
    PUSH32(esp, 0); sub_004E64CB(); /* call 0x004E64CB */

loc_004EA1B7: ;
    eax = (uint32_t)((int32_t)eax * (int32_t)0x3F);
    MEM32(ebp + 0x78) = MEM32(ebp + 0x78) & 0;
    (void)0; /* test edi, edi - flags set for next jcc */
    MEM32(ebp + 0x4C) = eax;
    if (CMP_BE(edi & edi, 0)) goto loc_004EA402; /* jbe: below or equal (unsigned <=) */

loc_004EA1C9: ;
    eax = MEM32(ebp + 0x78);
    edx = MEM32(esi + 0xFC);
    MEM32(ebp + 0x6C) = MEM32(ebp + 0x6C) & 0;
    ecx = eax;
    ecx = (uint32_t)((int32_t)ecx * (int32_t)ebx);
    eax = eax >> 1;
    MEM32(ebp + 0x44) = eax;
    eax = (uint32_t)((int32_t)eax * (int32_t)MEM32(ebp + 0x50));
    ecx = edx + ecx * 8;
    MEM32(ebp + 0x5C) = ecx;
    ecx = MEM32(esi + 0x100);
    eax = eax << 3;
    ecx = ecx + eax;
    MEM32(ebp + 0x58) = ecx;
    ecx = MEM32(esi + 0x104);
    ecx = ecx + eax;
    (void)0; /* cmp MEM32(ebp + 0x60), 0 - flags set for next jcc */
    MEM32(ebp + 0x54) = ecx;
    if (CMP_BE(MEM32(ebp + 0x60), 0)) goto loc_004EA3F6; /* jbe: below or equal (unsigned <=) */

loc_004EA20D: ;
    edi = MEM32(ebp + 0x78);
    eax = edi + -1;
    eax = eax & 1;
    eax = (uint32_t)((int32_t)eax * (int32_t)MEM32(ebp + 0x60));
    edi = edi & 1;
    edi = (uint32_t)((int32_t)edi * (int32_t)MEM32(ebp + 0x60));
    MEM32(ebp + 0x3C) = eax;
    MEM32(ebp + 0x34) = edi;
    goto loc_004EA22F;

loc_004EA229: ;
    edi = MEM32(ebp + 0x34);
    eax = MEM32(ebp + 0x3C);

loc_004EA22F: ;
    ecx = MEM32(esi + 0x124);
    edx = MEM32(ebp + 0x6C);
    eax = eax + ecx;
    edi = edi + ecx;
    ecx = edx;
    eax = eax + edx;
    edi = edi + edx;
    ecx = ecx | MEM32(ebp + 0x78);
    MEM32(ebp + 0x68) = ecx;
    if ((ecx == 0)) goto loc_004EA27C; /* je: equal / zero */

loc_004EA24A: ;
    if (TEST_Z(edx, edx)) goto loc_004EA2B3; /* je: equal / zero */

loc_004EA24E: ;
    if (CMP_EQ(MEM32(ebp + 0x78), 0)) goto loc_004EA2A9; /* je: equal / zero */

loc_004EA254: ;
    SET_LO8(edx, MEM8(eax));
    SET_LO8(ecx, MEM8(edi + -1));
    SET_LO8(ebx, MEM8(eax + -1));
    SET_LO8(edx, LO8(edx) & 3);
    SET_LO8(ecx, LO8(ecx) & 3);
    SET_LO8(ebx, LO8(ebx) & 3);
    if (CMP_NE(LO8(edx), LO8(ecx))) goto loc_004EA26E; /* jne: not equal / not zero */

loc_004EA269: ;
    ebx = ZX8(LO8(edx));
    goto loc_004EA27E;

loc_004EA26E: ;
    if (CMP_NE(LO8(ecx), 2)) goto loc_004EA28A; /* jne: not equal / not zero */

loc_004EA273: ;
    if (TEST_Z(LO8(edx), LO8(edx))) goto loc_004EA2A9; /* je: equal / zero */

loc_004EA277: ;
    if (CMP_EQ(LO8(edx), 1)) goto loc_004EA2A9; /* je: equal / zero */

loc_004EA27C: ;
    ebx = 0; /* xor self */

loc_004EA27E: ;
    ecx = 0; /* xor self */
    if (CMP_NE(MEM32(ebp + 0x68), ecx)) goto loc_004EA2BD; /* jne: not equal / not zero */

loc_004EA285: ;
    PUSH32(esp, 0x10);
    POP32(esp, eax);
    goto loc_004EA307;

loc_004EA28A: ;
    if (TEST_NZ(LO8(ecx), LO8(ecx))) goto loc_004EA295; /* jne: not equal / not zero */

loc_004EA28E: ;
    if (CMP_NE(LO8(edx), 1)) goto loc_004EA27C; /* jne: not equal / not zero */

loc_004EA293: ;
    goto loc_004EA2B3;

loc_004EA295: ;
    if (CMP_NE(LO8(ecx), 1)) goto loc_004EA27C; /* jne: not equal / not zero */

loc_004EA29A: ;
    if (CMP_NE(LO8(edx), 2)) goto loc_004EA27C; /* jne: not equal / not zero */

loc_004EA29F: ;
    if (CMP_EQ(LO8(ebx), LO8(ecx))) goto loc_004EA2A9; /* je: equal / zero */

loc_004EA2A3: ;
    if (CMP_BE(MEM32(ebp + 0x7C), 0xC)) goto loc_004EA2AE; /* jbe: below or equal (unsigned <=) */

loc_004EA2A9: ;
    PUSH32(esp, 2);
    POP32(esp, ebx);
    goto loc_004EA27E;

loc_004EA2AE: ;
    if (CMP_NE(LO8(ebx), 2)) goto loc_004EA2B8; /* jne: not equal / not zero */

loc_004EA2B3: ;
    ebx = 0; /* xor self */
    ebx++;
    goto loc_004EA27E;

loc_004EA2B8: ;
    ebx = ZX8(LO8(ebx));
    goto loc_004EA27E;

loc_004EA2BD: ;
    if (CMP_NE(MEM32(ebp + 0x6C), ecx)) goto loc_004EA2CA; /* jne: not equal / not zero */

loc_004EA2C2: ;
    eax = ZX8(MEM8(eax));

loc_004EA2C5: ;
    eax = eax >> 2;
    goto loc_004EA307;

loc_004EA2CA: ;
    if (CMP_NE(MEM32(ebp + 0x78), ecx)) goto loc_004EA2D5; /* jne: not equal / not zero */

loc_004EA2CF: ;
    eax = ZX8(MEM8(edi + -1));
    goto loc_004EA2C5;

loc_004EA2D5: ;
    SET_LO8(ecx, MEM8(edi + -1));
    SET_LO8(edx, MEM8(eax));
    edi = MEM32(ebp + 0x78);
    SET_LO8(edx, LO8(edx) >> 2);
    SET_LO8(ecx, LO8(ecx) >> 2);
    if (TEST_NZ(MEM32(ebp + 0x6C), edi)) goto loc_004EA2EC; /* jne: not equal / not zero */

loc_004EA2E8: ;
    SET_LO8(eax, LO8(ecx));
    goto loc_004EA2F2;

loc_004EA2EC: ;
    SET_LO8(eax, MEM8(eax + -1));
    SET_LO8(eax, LO8(eax) >> 2);

loc_004EA2F2: ;
    if (CMP_AE(LO8(ecx), LO8(edx))) goto loc_004EA2FE; /* jae: above or equal (unsigned >=) */

loc_004EA2F6: ;
    if (CMP_AE(LO8(ecx), LO8(eax))) goto loc_004EA304; /* jae: above or equal (unsigned >=) */

loc_004EA2FA: ;
    SET_LO8(eax, LO8(ecx));
    goto loc_004EA304;

loc_004EA2FE: ;
    if (CMP_AE(LO8(edx), LO8(eax))) goto loc_004EA304; /* jae: above or equal (unsigned >=) */

loc_004EA302: ;
    SET_LO8(eax, LO8(edx));

loc_004EA304: ;
    eax = ZX8(LO8(eax));

loc_004EA307: ;
    edi = MEM32(ebp + 0x60);
    PUSH32(esp, 0);
    PUSH32(esp, MEM32(ebp + 0x30));
    PUSH32(esp, MEM32(ebp + 0x7C));
    PUSH32(esp, eax);
    PUSH32(esp, ebx);
    PUSH32(esp, MEM32(ebp + 0x4C));
    eax = ebp + -116;
    PUSH32(esp, MEM32(ebp + 0x7C));
    PUSH32(esp, edi);
    PUSH32(esp, MEM32(ebp + 0x78));
    PUSH32(esp, MEM32(ebp + 0x6C));
    PUSH32(esp, MEM32(ebp + 0x48));
    PUSH32(esp, MEM32(ebp + 0x5C));
    PUSH32(esp, eax);
    eax = ebp + 0xC;
    PUSH32(esp, eax);
    PUSH32(esp, esi);
    PUSH32(esp, 0); sub_004E986F(); /* call 0x004E986F */

loc_004EA335: ;
    ebx = MEM32(ebp + 0x6C);
    eax = ebx;
    eax = eax & MEM32(ebp + 0x78);
    if (TEST_Z(LO8(eax), 1)) goto loc_004EA3DD; /* je: equal / zero */

loc_004EA345: ;
    eax = 0; /* xor self */
    eax++;
    if (CMP_BE(ebx, eax)) goto loc_004EA364; /* jbe: below or equal (unsigned <=) */

loc_004EA34C: ;
    if (CMP_BE(MEM32(ebp + 0x78), eax)) goto loc_004EA36C; /* jbe: below or equal (unsigned <=) */

loc_004EA351: ;
    eax = MEM32(esi + 0x124);
    eax = ZX8(MEM8(eax + ebx + -1));
    eax = eax & 3;
    MEM32(ebp + 0x68) = eax;
    goto loc_004EA373;

loc_004EA364: ;
    (void)0; /* cmp MEM32(ebp + 0x78), eax - flags set for next jcc */
    MEM32(ebp + 0x68) = eax;
    if (CMP_A(MEM32(ebp + 0x78), eax)) goto loc_004EA373; /* ja: above (unsigned >) */

loc_004EA36C: ;
    MEM32(ebp + 0x68) = 2;

loc_004EA373: ;
    PUSH32(esp, 1);
    PUSH32(esp, MEM32(ebp + 0x40));
    edi = edi >> 1;
    PUSH32(esp, MEM32(ebp + 0x64));
    ebx = ebx >> 1;
    PUSH32(esp, 0xFF);
    PUSH32(esp, MEM32(ebp + 0x68));
    eax = ebp + -116;
    PUSH32(esp, MEM32(ebp + 0x4C));
    PUSH32(esp, MEM32(ebp + 0x7C));
    PUSH32(esp, edi);
    PUSH32(esp, MEM32(ebp + 0x44));
    PUSH32(esp, ebx);
    PUSH32(esp, MEM32(ebp + 0x50));
    PUSH32(esp, MEM32(ebp + 0x58));
    PUSH32(esp, eax);
    eax = ebp + 0xC;
    PUSH32(esp, eax);
    PUSH32(esp, esi);
    PUSH32(esp, 0); sub_004E986F(); /* call 0x004E986F */

loc_004EA3A6: ;
    PUSH32(esp, 1);
    PUSH32(esp, MEM32(ebp + 0x40));
    eax = ebp + -116;
    PUSH32(esp, MEM32(ebp + 0x64));
    PUSH32(esp, 0xFF);
    PUSH32(esp, MEM32(ebp + 0x68));
    PUSH32(esp, MEM32(ebp + 0x4C));
    PUSH32(esp, MEM32(ebp + 0x7C));
    PUSH32(esp, edi);
    PUSH32(esp, MEM32(ebp + 0x44));
    PUSH32(esp, ebx);
    PUSH32(esp, MEM32(ebp + 0x50));
    PUSH32(esp, MEM32(ebp + 0x54));
    PUSH32(esp, eax);
    eax = ebp + 0xC;
    PUSH32(esp, eax);
    PUSH32(esp, esi);
    PUSH32(esp, 0); sub_004E986F(); /* call 0x004E986F */

loc_004EA3D5: ;
    MEM32(ebp + 0x58) = MEM32(ebp + 0x58) + 8;
    MEM32(ebp + 0x54) = MEM32(ebp + 0x54) + 8;

loc_004EA3DD: ;
    MEM32(ebp + 0x5C) = MEM32(ebp + 0x5C) + 8;
    MEM32(ebp + 0x6C) = MEM32(ebp + 0x6C) + 1;
    eax = MEM32(ebp + 0x6C);
    if (CMP_B(eax, MEM32(ebp + 0x60))) goto loc_004EA229; /* jb: below (unsigned <) */

loc_004EA3F0: ;
    edi = MEM32(ebp + 0x38);
    ebx = MEM32(ebp + 0x48);

loc_004EA3F6: ;
    MEM32(ebp + 0x78) = MEM32(ebp + 0x78) + 1;
    if (CMP_B(MEM32(ebp + 0x78), edi)) goto loc_004EA1C9; /* jb: below (unsigned <) */

loc_004EA402: ;
    POP32(esp, edi);
    POP32(esp, esi);
    POP32(esp, ebx);
    ebp = ebp + 0x70;
    esp = ebp;
    POP32(esp, ebp); /* leave */
    esp += 12; return; /* ret 8 */

}

/**
 * sub_004EA410
 * Original: 0x004EA410 - 0x004EA439 (41 bytes, 20 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_004EA410(void)
{
    uint32_t ebp;
    int _flags = 0; /* fallback flag var */
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_004EA410: ;
    MEM8(eax) = MEM8(eax) + 0;
    MEM8(eax + -1258291200) = MEM8(eax + -1258291200) + LO8(eax);
    MEM8(eax) = MEM8(eax) + LO8(eax);
    MEM8(ebp + -16777216) = MEM8(ebp + -16777216) + HI8(edx);
    if (((int32_t)MEM8(ebp + -16777216) > 0)) goto loc_004EA423; /* jg: greater (signed >) */

loc_004EA423: ;
    SET_HI8(ebx, HI8(ebx) + HI8(ebx));
    if (((int32_t)HI8(ebx) > 0)) goto loc_004EA427; /* jg: greater (signed >) */

loc_004EA427: ;
    MEM8(eax) = MEM8(eax) + HI8(ebx);
    /* TODO: int1  */
    PUSH32(esp, esp);
    SET_LO8(eax, LO8(eax) + 0x38);
    /* TODO: int1  */
    PUSH32(esp, esp);
    SET_LO8(eax, LO8(eax) + 0x20);
    PUSH32(esp, 0 /* seg:es */);
    PUSH32(esp, esp);
    SET_LO8(eax, LO8(eax) + 0x20);
    PUSH32(esp, 0 /* seg:es */);
    PUSH32(esp, esp);
    SET_LO8(eax, LO8(eax) + 0x4F);

}

/**
 * sub_00509C80
 * Original: 0x00509C80 - 0x00509C98 (24 bytes, 11 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00509C80(void)
{

loc_00509C80: ;
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, esi);
    PUSH32(esp, edi);
    edi = MEM32(esp + 0xC);
    PUSH32(esp, edi);
    esi = ecx;
    PUSH32(esp, 0); RECOMP_ICALL_SAFE(MEM32(0x561004), _icall_esp); /* indirect call */
    }

loc_00509C8F: ;
    MEM32(esi) = edi;
    POP32(esp, edi);
    eax = esi;
    POP32(esp, esi);
    esp += 8; return; /* ret 4 */

}

/**
 * sub_00509C98
 * Original: 0x00509C98 - 0x00509CD6 (62 bytes, 28 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00509C98(void)
{
    int _flags = 0; /* fallback flag var */

loc_00509C98: ;
    eax = eax - 0;
    if ((eax == 0)) { sub_00509CD6(); return; } /* je: equal / zero */

loc_00509C9D: ;
    eax--;
    if ((eax == 0)) goto loc_00509CD0; /* je: equal / zero */

loc_00509CA0: ;
    eax--;
    if ((eax == 0)) goto loc_00509CCA; /* je: equal / zero */

loc_00509CA3: ;
    eax--;
    if ((eax == 0)) goto loc_00509CC4; /* je: equal / zero */

loc_00509CA6: ;
    eax--;
    if ((eax == 0)) goto loc_00509CBE; /* je: equal / zero */

loc_00509CA9: ;
    eax--;
    if ((eax == 0)) goto loc_00509CB8; /* je: equal / zero */

loc_00509CAC: ;
    eax--;
    if ((eax == 0)) goto loc_00509CB2; /* je: equal / zero */

loc_00509CAF: ;
    eax = 0; /* xor self */
    esp += 4; return; /* ret */

loc_00509CB2: ;
    eax = 0x1F40;
    esp += 4; return; /* ret */

loc_00509CB8: ;
    eax = 0x2B11;
    esp += 4; return; /* ret */

loc_00509CBE: ;
    eax = 0x3E80;
    esp += 4; return; /* ret */

loc_00509CC4: ;
    eax = 0x5622;
    esp += 4; return; /* ret */

loc_00509CCA: ;
    eax = 0x7D00;
    esp += 4; return; /* ret */

loc_00509CD0: ;
    eax = 0xAC44;
    esp += 4; return; /* ret */

}

/**
 * sub_00509CDC
 * Original: 0x00509CDC - 0x00509D68 (140 bytes, 54 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00509CDC(void)
{
    uint32_t ebp;
    int _flags = 0; /* fallback flag var */
    int _cf = 0; /* carry flag */

loc_00509CDC: ;
    PUSH32(esp, ebp);
    ebp = esp;
    PUSH32(esp, esi);
    esi = ecx;
    ecx = MEM32(esi + 0x40);
    eax = MEM32(esi + 0x44);
    (void)0; /* cmp eax, ecx - flags set for next jcc */
    PUSH32(esp, edi);
    if (CMP_BE(eax, ecx)) goto loc_00509CFD; /* jbe: below or equal (unsigned <=) */

loc_00509CED: ;
    edi = MEM32(esi + 0xA4);
    edx = eax;
    edx = edx - ecx;
    edi = edi >> 1;
    if (CMP_B(edx, edi)) goto loc_00509D00; /* jb: below (unsigned <) */

loc_00509CFD: ;
    MEM32(esi + 0x40) = eax;

loc_00509D00: ;
    eax = MEM32(esi + 0x40);
    edi = 0; /* xor self */
    if (CMP_NE(ecx, eax)) goto loc_00509D0E; /* jne: not equal / not zero */

loc_00509D09: ;
    if (CMP_EQ(MEM32(ebp + 0x14), edi)) { sub_00509D68(); return; } /* je: equal / zero */

loc_00509D0E: ;
    PUSH32(esp, edi);
    PUSH32(esp, edi);
    PUSH32(esp, eax);
    PUSH32(esp, MEM32(esi + 0x60));
    PUSH32(esp, 0); sub_0042BECB(); /* call 0x0042BECB */

loc_00509D19: ;
    eax = MEM32(esi + 0x40);
    MEM32(esi + 0x6C) = eax;
    eax = MEM32(ebp + 0x10);
    eax = (uint32_t)(-(int32_t)eax);
    eax = _cf ? 0xFFFFFFFF : 0; /* sbb self (CF extend) */
    ecx = esi + 0x64;
    eax = eax & ecx;
    PUSH32(esp, eax);
    eax = ebp + 0x14;
    PUSH32(esp, eax);
    PUSH32(esp, MEM32(ebp + 0xC));
    PUSH32(esp, MEM32(ebp + 8));
    PUSH32(esp, MEM32(esi + 0x60));
    PUSH32(esp, 0); sub_0042BC84(); /* call 0x0042BC84 */

loc_00509D3E: ;
    if (CMP_NE(MEM32(ebp + 0x10), edi)) { sub_00509D68(); return; } /* jne: not equal / not zero */

loc_00509D43: ;
    if (CMP_NE(eax, edi)) { sub_00509D68(); return; } /* jne: not equal / not zero */

loc_00509D47: ;
    PUSH32(esp, 0); sub_0042C2AC(); /* call 0x0042C2AC */

loc_00509D4C: ;
    if (CMP_G(eax & eax, 0)) goto loc_00509D57; /* jg: greater (signed >) */

loc_00509D50: ;
    PUSH32(esp, 0); sub_0042C2AC(); /* call 0x0042C2AC */

loc_00509D55: ;
    g_seh_ebp = ebp; sub_00509D6A(); return; /* tail jmp 0x00509D6A */

loc_00509D57: ;
    PUSH32(esp, 0); sub_0042C2AC(); /* call 0x0042C2AC */

loc_00509D5C: ;
    eax = eax & 0xFFFF;
    eax = eax | 0x80070000u;
    g_seh_ebp = ebp; sub_00509D6A(); return; /* tail jmp 0x00509D6A */

}

/**
 * sub_00509D70
 * Original: 0x00509D70 - 0x00509DBD (77 bytes, 35 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00509D70(void)
{
    uint32_t ebp;
    int _flags = 0; /* fallback flag var */

loc_00509D70: ;
    PUSH32(esp, ebp);
    ebp = esp;
    PUSH32(esp, ecx);
    PUSH32(esp, ecx);
    MEM32(ebp + -4) = MEM32(ebp + -4) & 0;
    PUSH32(esp, ebx);
    PUSH32(esp, esi);
    ebx = ecx;
    PUSH32(esp, edi);
    eax = ebx + 0x68;
    PUSH32(esp, eax);
    ecx = ebp + -8;
    PUSH32(esp, 0); sub_00509C80(); /* call 0x00509C80 */

loc_00509D8A: ;
    esi = MEM32(ebp + 8);
    eax = ebx + 0x44;
    edi = eax;
    MEM32(edi) = MEM32(esi); esi += 4; edi += 4; /* movsd */
    MEM32(edi) = MEM32(esi); esi += 4; edi += 4; /* movsd */
    MEM32(edi) = MEM32(esi); esi += 4; edi += 4; /* movsd */
    MEM32(edi) = MEM32(esi); esi += 4; edi += 4; /* movsd */
    eax = MEM32(eax);
    esi = 0; /* xor self */
    if (CMP_EQ(eax, esi)) { sub_00509DBD(); return; } /* je: equal / zero */

loc_00509D9E: ;
    PUSH32(esp, esi);
    PUSH32(esp, 0x60000000);
    PUSH32(esp, 3);
    PUSH32(esp, esi);
    PUSH32(esp, 1);
    PUSH32(esp, 0x80000000u);
    PUSH32(esp, eax);
    PUSH32(esp, 0); sub_0042C37E(); /* call 0x0042C37E */

loc_00509DB4: ;
    MEM32(ebx + 0x48) = eax;
    MEM8(ebx + 0x3C) = 0;
    g_seh_ebp = ebp; sub_00509DC1(); return; /* tail jmp 0x00509DC1 */

}

/**
 * sub_00509E2D
 * Original: 0x00509E2D - 0x00509E59 (44 bytes, 20 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00509E2D(void)
{
    uint32_t ebp;
    int _flags = 0; /* fallback flag var */

loc_00509E2D: ;
    PUSH32(esp, ebp);
    ebp = esp;
    PUSH32(esp, ecx);
    PUSH32(esp, ebx);
    PUSH32(esp, esi);
    esi = ecx;
    PUSH32(esp, edi);
    eax = esi + 0x68;
    PUSH32(esp, eax);
    ecx = ebp + -4;
    PUSH32(esp, 0); sub_00509C80(); /* call 0x00509C80 */

loc_00509E42: ;
    PUSH32(esp, esi);
    edi = esi + 0x30;
    PUSH32(esp, edi);
    ebx = 0; /* xor self */
    PUSH32(esp, 0); sub_0050A88D(); /* call 0x0050A88D */

loc_00509E4E: ;
    if (TEST_Z(eax, eax)) { sub_00509E59(); return; } /* je: equal / zero */

loc_00509E52: ;
    ebx = 0x80004005u;
    g_seh_ebp = ebp; sub_00509E81(); return; /* tail jmp 0x00509E81 */

}

/**
 * sub_00509E91
 * Original: 0x00509E91 - 0x00509F54 (195 bytes, 77 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00509E91(void)
{
    uint32_t ebp;
    int _flags = 0; /* fallback flag var */

loc_00509E91: ;
    PUSH32(esp, ebp);
    ebp = esp;
    PUSH32(esp, ecx);
    PUSH32(esp, ecx);
    PUSH32(esp, ebx);
    ebx = MEM32(ebp + 0xC);
    eax = MEM32(ebx + 4);
    PUSH32(esp, esi);
    esi = MEM32(ebp + 8);
    ecx = MEM32(esi + 0x10);
    ecx = ecx << 1;
    edx = 0; /* xor self */
    { uint64_t _dividend = ((uint64_t)edx << 32) | eax;
      eax = (uint32_t)(_dividend / (uint32_t)ecx);
      edx = (uint32_t)(_dividend % (uint32_t)ecx); }
    MEM32(ebp + -4) = MEM32(ebp + -4) & 0;
    MEM32(ebp + 8) = MEM32(ebp + 8) & 0;
    ecx = MEM32(ebx);
    MEM32(ebp + -8) = ecx;
    (void)0; /* test eax, eax - flags set for next jcc */
    MEM32(ebp + 0xC) = eax;
    if (CMP_BE(eax & eax, 0)) goto loc_00509F1F; /* jbe: below or equal (unsigned <=) */

loc_00509EBE: ;
    PUSH32(esp, edi);

loc_00509EBF: ;
    eax = MEM32(esi + 0x40);
    if (TEST_Z(LO8(eax), 1)) goto loc_00509ED8; /* je: equal / zero */

loc_00509EC6: ;
    PUSH32(esp, MEM32(esi + 0x30));
    eax = eax & 0xFFFFFFFEu;
    MEM32(esi + 0x40) = eax;
    PUSH32(esp, 0); sub_0050AC12(); /* call 0x0050AC12 */

loc_00509ED4: ;
    if (TEST_NZ(eax, eax)) goto loc_00509F17; /* jne: not equal / not zero */

loc_00509ED8: ;
    eax = MEM32(esi + 0x10);
    eax = (uint32_t)((int32_t)eax * (int32_t)MEM32(ebp + 8));
    ecx = MEM32(ebp + -8);
    edi = MEM32(ebp + 0xC);
    edi = edi - MEM32(ebp + 8);
    ecx = ecx + eax * 2;
    eax = 0x800;
    if (CMP_BE(edi, eax)) goto loc_00509EF6; /* jbe: below or equal (unsigned <=) */

loc_00509EF4: ;
    edi = eax;

loc_00509EF6: ;
    PUSH32(esp, edi);
    PUSH32(esp, 0);
    PUSH32(esp, ecx);
    PUSH32(esp, MEM32(esi + 0x30));
    PUSH32(esp, 0); sub_0050AD8F(); /* call 0x0050AD8F */

loc_00509F02: ;
    if (CMP_AE(eax, edi)) goto loc_00509F0A; /* jae: above or equal (unsigned >=) */

loc_00509F06: ;
    MEM32(esi + 0x40) = MEM32(esi + 0x40) | 1;

loc_00509F0A: ;
    MEM32(ebp + 8) = MEM32(ebp + 8) + eax;
    eax = MEM32(ebp + 8);
    if (CMP_B(eax, MEM32(ebp + 0xC))) goto loc_00509EBF; /* jb: below (unsigned <) */

loc_00509F15: ;
    goto loc_00509F1E;

loc_00509F17: ;
    MEM32(ebp + -4) = 0x80004005u;

loc_00509F1E: ;
    POP32(esp, edi);

loc_00509F1F: ;
    if (CMP_EQ(MEM32(ebx + 8), 0)) goto loc_00509F33; /* je: equal / zero */

loc_00509F25: ;
    eax = MEM32(esi + 0x10);
    eax = (uint32_t)((int32_t)eax * (int32_t)MEM32(ebp + 8));
    ecx = MEM32(ebx + 8);
    eax = eax << 1;
    MEM32(ecx) = eax;

loc_00509F33: ;
    eax = MEM32(ebx + 0x10);
    if (TEST_Z(eax, eax)) goto loc_00509F40; /* je: equal / zero */

loc_00509F3A: ;
    PUSH32(esp, eax);
    PUSH32(esp, 0); sub_0042E2B1(); /* call 0x0042E2B1 */

loc_00509F40: ;
    ebx = MEM32(ebx + 0xC);
    if (TEST_Z(ebx, ebx)) goto loc_00509F4C; /* je: equal / zero */

loc_00509F47: ;
    eax = MEM32(ebp + -4);
    MEM32(ebx) = eax;

loc_00509F4C: ;
    POP32(esp, esi);
    eax = 0; /* xor self */
    POP32(esp, ebx);
    esp = ebp;
    POP32(esp, ebp); /* leave */
    esp += 12; return; /* ret 8 */

}

/**
 * sub_00509F54
 * Original: 0x00509F54 - 0x00509FA1 (77 bytes, 32 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00509F54(void)
{
    uint32_t ebp;
    int _flags = 0; /* fallback flag var */
    int _cf = 0; /* carry flag */

loc_00509F54: ;
    PUSH32(esp, ebp);
    ebp = esp;
    eax = MEM32(ebp + 8);
    PUSH32(esp, ebx);
    PUSH32(esp, esi);
    esi = MEM32(ecx + 0x50);
    edx = 0; /* xor self */
    { uint64_t _dividend = ((uint64_t)edx << 32) | eax;
      eax = (uint32_t)(_dividend / (uint32_t)esi);
      edx = (uint32_t)(_dividend % (uint32_t)esi); }
    eax = MEM32(ecx + 0x88);
    eax = (uint32_t)(-(int32_t)eax);
    eax = _cf ? 0xFFFFFFFF : 0; /* sbb self (CF extend) */
    eax = eax & 0xFFFFFFE0u;
    PUSH32(esp, edi);
    edi = MEM32(ebp + 0xC);
    eax = eax + 0x20;
    eax = eax + esi;
    MEM32(ebp + 0xC) = edi;
    ebx = edx + edi;
    if (CMP_BE(ebx, eax)) goto loc_00509F88; /* jbe: below or equal (unsigned <=) */

loc_00509F83: ;
    esi = esi - edx;
    MEM32(ebp + 0xC) = esi;

loc_00509F88: ;
    if (TEST_Z(MEM8(ecx + 0x40), 0x10)) { sub_00509FA1(); return; } /* je: equal / zero */

loc_00509F8E: ;
    eax = MEM32(ecx + 0x5C);
    esi = MEM32(ebp + 8);
    eax = eax - MEM32(ecx + 0x4C);
    esi = esi + edi;
    if (CMP_BE(esi, eax)) { sub_00509FA1(); return; } /* jbe: below or equal (unsigned <=) */

loc_00509F9D: ;
    eax = 0; /* xor self */
    g_seh_ebp = ebp; sub_00509FB4(); return; /* tail jmp 0x00509FB4 */

}

/**
 * sub_00509FBB
 * Original: 0x00509FBB - 0x0050A06F (180 bytes, 71 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00509FBB(void)
{
    uint32_t ebp;
    int _flags = 0; /* fallback flag var */

loc_00509FBB: ;
    PUSH32(esp, ebp);
    ebp = esp;
    esp = esp - 0xC;
    PUSH32(esp, ebx);
    PUSH32(esp, esi);
    esi = ecx;
    eax = MEM32(esi + 0x4C);
    ebx = MEM32(esi + 0x50);
    PUSH32(esp, edi);
    edi = MEM32(esi + 0x5C);
    edi = edi - eax;
    edx = 0; /* xor self */
    eax = edi;
    { uint64_t _dividend = ((uint64_t)edx << 32) | eax;
      eax = (uint32_t)(_dividend / (uint32_t)ebx);
      edx = (uint32_t)(_dividend % (uint32_t)ebx); }
    MEM32(ebp + -4) = MEM32(ebp + -4) & 0;
    ecx = ebx;
    ebx = MEM32(esi + 0x40);
    ecx = ecx >> 1;
    (void)0; /* test LO8(ebx), 0x10 - flags set for next jcc */
    MEM32(ebp + -8) = edi;
    MEM32(ebp + -12) = edx;
    if (TEST_NZ(LO8(ebx), 0x10)) goto loc_0050A05F; /* jne: not equal / not zero */

loc_00509FED: ;
    eax = edi;
    eax = eax - MEM32(esi + 0x38);
    if (CMP_AE(eax, ecx)) goto loc_0050A067; /* jae: above or equal (unsigned >=) */

loc_00509FF6: ;
    edx = MEM32(esi + 0x20);
    if (TEST_Z(edx, edx)) goto loc_0050A029; /* je: equal / zero */

loc_00509FFD: ;
    eax = MEM32(esi + 0x18);
    edx = edx + eax;
    edi = edi + ecx;
    if (CMP_BE(edi, edx)) goto loc_0050A029; /* jbe: below or equal (unsigned <=) */

loc_0050A008: ;
    ebx = ebx | 0x10;
    (void)0; /* cmp edx, MEM32(ebp + -8) - flags set for next jcc */
    MEM32(esi + 0x40) = ebx;
    if (CMP_BE(edx, MEM32(ebp + -8))) goto loc_0050A05F; /* jbe: below or equal (unsigned <=) */

loc_0050A013: ;
    eax = eax - MEM32(esi + 0x5C);
    ecx = MEM32(esi + 0x4C);
    eax = eax + MEM32(esi + 0x20);
    ecx = eax + ecx + 0x7FF;
    ecx = ecx >> 0xB;
    ecx = ecx << 0xB;

loc_0050A029: ;
    eax = esi + 0x54;
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, eax);
    eax = ebp + -12;
    PUSH32(esp, eax);
    eax = MEM32(esi + 0x34);
    eax = eax + MEM32(ebp + -12);
    PUSH32(esp, ecx);
    PUSH32(esp, eax);
    PUSH32(esp, MEM32(esi + 0x48));
    PUSH32(esp, 0); RECOMP_ICALL_SAFE(MEM32(esi + 0x8C), _icall_esp); /* indirect call */
    }

loc_0050A042: ;
    if (TEST_NZ(eax, eax)) goto loc_0050A063; /* jne: not equal / not zero */

loc_0050A046: ;
    PUSH32(esp, 0); sub_0042C2AC(); /* call 0x0042C2AC */

loc_0050A04B: ;
    if (CMP_EQ(eax, 0x3E5)) goto loc_0050A063; /* je: equal / zero */

loc_0050A052: ;
    MEM32(esi + 0x40) = MEM32(esi + 0x40) | 0x10;
    MEM32(ebp + -4) = 0x80004005u;
    goto loc_0050A067;

loc_0050A05F: ;
    eax = 0; /* xor self */
    goto loc_0050A06A;

loc_0050A063: ;
    MEM32(esi + 0x40) = MEM32(esi + 0x40) | 8;

loc_0050A067: ;
    eax = MEM32(ebp + -4);

loc_0050A06A: ;
    POP32(esp, edi);
    POP32(esp, esi);
    POP32(esp, ebx);
    esp = ebp;
    POP32(esp, ebp); /* leave */
    esp += 4; return; /* ret */

}

/**
 * sub_0050A06F
 * Original: 0x0050A06F - 0x0050A125 (182 bytes, 66 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0050A06F(void)
{
    uint32_t ebp;
    int _flags = 0; /* fallback flag var */

loc_0050A06F: ;
    PUSH32(esp, ebp);
    ebp = esp;
    PUSH32(esp, ecx);
    PUSH32(esp, ebx);
    ebx = MEM32(ebp + 8);
    eax = ebx + 0x68;
    PUSH32(esp, eax);
    ecx = ebp + 8;
    PUSH32(esp, 0); sub_00509C80(); /* call 0x00509C80 */

loc_0050A083: ;
    if (TEST_Z(MEM8(ebx + 0x40), 8)) goto loc_0050A0F8; /* je: equal / zero */

loc_0050A089: ;
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, 0);
    eax = ebp + -4;
    PUSH32(esp, eax);
    eax = ebx + 0x54;
    PUSH32(esp, eax);
    PUSH32(esp, MEM32(ebx + 0x48));
    PUSH32(esp, 0); RECOMP_ICALL_SAFE(MEM32(ebx + 0x90), _icall_esp); /* indirect call */
    }

loc_0050A09C: ;
    if (TEST_Z(eax, eax)) { sub_0050A125(); return; } /* je: equal / zero */

loc_0050A0A4: ;
    ecx = MEM32(ebx + 0x5C);
    PUSH32(esp, esi);
    esi = MEM32(ebx + 0x4C);
    eax = ecx;
    PUSH32(esp, edi);
    edi = MEM32(ebx + 0x50);
    eax = eax - esi;
    edx = 0; /* xor self */
    { uint64_t _dividend = ((uint64_t)edx << 32) | eax;
      eax = (uint32_t)(_dividend / (uint32_t)edi);
      edx = (uint32_t)(_dividend % (uint32_t)edi); }
    if (TEST_NZ(edx, edx)) goto loc_0050A0C5; /* jne: not equal / not zero */

loc_0050A0BB: ;
    MEM32(ebx + 0x88) = 1;

loc_0050A0C5: ;
    eax = MEM32(ebp + -4);
    MEM32(ebx + 0x40) = MEM32(ebx + 0x40) & 0xFFFFFFF7u;
    eax = eax + ecx;
    (void)0; /* cmp MEM32(ebx + 0x88), 0 - flags set for next jcc */
    MEM32(ebx + 0x5C) = eax;
    if (CMP_EQ(MEM32(ebx + 0x88), 0)) goto loc_0050A0F6; /* je: equal / zero */

loc_0050A0DA: ;
    eax = eax - esi;
    edx = 0; /* xor self */
    { uint64_t _dividend = ((uint64_t)edx << 32) | eax;
      eax = (uint32_t)(_dividend / (uint32_t)edi);
      edx = (uint32_t)(_dividend % (uint32_t)edi); }
    if (CMP_B(edx, 0x20)) goto loc_0050A0F6; /* jb: below (unsigned <) */

loc_0050A0E5: ;
    esi = MEM32(ebx + 0x34);
    PUSH32(esp, 8);
    edi = edi + esi;
    POP32(esp, ecx);
    memcpy((void*)XBOX_PTR(edi), (void*)XBOX_PTR(esi), ecx * 4);
    esi += ecx * 4; edi += ecx * 4; ecx = 0; /* rep movsd */
    MEM32(ebx + 0x88) = MEM32(ebx + 0x88) & 0;

loc_0050A0F6: ;
    POP32(esp, edi);
    POP32(esp, esi);

loc_0050A0F8: ;
    MEM32(ebx + 0x40) = MEM32(ebx + 0x40) | 4;
    eax = MEM32(ebx + 0x40);
    if (TEST_Z(LO8(eax), 2)) goto loc_0050A110; /* je: equal / zero */

loc_0050A103: ;
    eax = eax & 0xFFFFFFFDu;
    ecx = ebx;
    MEM32(ebx + 0x40) = eax;
    PUSH32(esp, 0); sub_00509E2D(); /* call 0x00509E2D */

loc_0050A110: ;
    ecx = ebx;
    PUSH32(esp, 0); sub_00509FBB(); /* call 0x00509FBB */

loc_0050A117: ;
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, MEM32(ebp + 8));
    PUSH32(esp, 0); RECOMP_ICALL_SAFE(MEM32(0x561008), _icall_esp); /* indirect call */
    }

loc_0050A120: ;
    POP32(esp, ebx);
    esp = ebp;
    POP32(esp, ebp); /* leave */
    esp += 8; return; /* ret 4 */

}

/**
 * sub_0050A13F
 * Original: 0x0050A13F - 0x0050A17C (61 bytes, 21 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0050A13F(void)
{
    uint32_t ebp;

loc_0050A13F: ;
    PUSH32(esp, ebp);
    ebp = esp;
    PUSH32(esp, esi);
    esi = MEM32(ebp + 8);
    eax = esi + 0x68;
    PUSH32(esp, eax);
    ecx = ebp + 8;
    PUSH32(esp, 0); sub_00509C80(); /* call 0x00509C80 */

loc_0050A152: ;
    eax = MEM32(ebp + 0xC);
    MEM32(eax + 0xC) = MEM32(eax + 0xC) & 0;
    MEM32(eax + 4) = MEM32(eax + 4) & 0;
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, MEM32(ebp + 8));
    MEM32(eax) = 3;
    ecx = MEM32(esi + 0x10);
    ecx = ecx << 0xC;
    MEM32(eax + 8) = ecx;
    PUSH32(esp, 0); RECOMP_ICALL_SAFE(MEM32(0x561008), _icall_esp); /* indirect call */
    }

loc_0050A175: ;
    eax = 0; /* xor self */
    POP32(esp, esi);
    POP32(esp, ebp);
    esp += 12; return; /* ret 8 */

}

/**
 * sub_0050A181
 * Original: 0x0050A181 - 0x0050A1B6 (53 bytes, 21 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0050A181(void)
{
    uint32_t ebp;
    int _flags = 0; /* fallback flag var */

loc_0050A181: ;
    PUSH32(esp, ebp);
    ebp = esp;
    PUSH32(esp, esi);
    esi = MEM32(ebp + 8);
    eax = esi + 0x68;
    PUSH32(esp, eax);
    ecx = ebp + 8;
    PUSH32(esp, 0); sub_00509C80(); /* call 0x00509C80 */

loc_0050A194: ;
    eax = MEM32(ebp + 0xC);
    if (TEST_Z(eax, eax)) goto loc_0050A1A6; /* je: equal / zero */

loc_0050A19B: ;
    ecx = ZX8(MEM8(esi + 0x40));
    ecx = ecx >> 1;
    ecx = ecx & 2;
    MEM32(eax) = ecx;

loc_0050A1A6: ;
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, MEM32(ebp + 8));
    PUSH32(esp, 0); RECOMP_ICALL_SAFE(MEM32(0x561008), _icall_esp); /* indirect call */
    }

loc_0050A1AF: ;
    eax = 0; /* xor self */
    POP32(esp, esi);
    POP32(esp, ebp);
    esp += 12; return; /* ret 8 */

}

/**
 * sub_0050A1B6
 * Original: 0x0050A1B6 - 0x0050A200 (74 bytes, 28 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0050A1B6(void)
{
    uint32_t ebp;
    int _flags = 0; /* fallback flag var */

loc_0050A1B6: ;
    PUSH32(esp, ebp);
    ebp = esp;
    PUSH32(esp, esi);
    esi = MEM32(ebp + 8);
    PUSH32(esp, edi);
    eax = esi + 0x68;
    PUSH32(esp, eax);
    ecx = ebp + 8;
    edi = 0; /* xor self */
    PUSH32(esp, 0); sub_00509C80(); /* call 0x00509C80 */

loc_0050A1CC: ;
    if (TEST_Z(MEM8(esi + 0x40), 4)) goto loc_0050A1E8; /* je: equal / zero */

loc_0050A1D2: ;
    PUSH32(esp, MEM32(ebp + 0xC));
    PUSH32(esp, MEM32(esi + 0x30));
    PUSH32(esp, 0); sub_0050A9B4(); /* call 0x0050A9B4 */

loc_0050A1DD: ;
    if (TEST_Z(eax, eax)) goto loc_0050A1ED; /* je: equal / zero */

loc_0050A1E1: ;
    esi = 0x80004005u;
    goto loc_0050A1EF;

loc_0050A1E8: ;
    edi = 0x8000FFFFu;

loc_0050A1ED: ;
    esi = edi;

loc_0050A1EF: ;
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, MEM32(ebp + 8));
    PUSH32(esp, 0); RECOMP_ICALL_SAFE(MEM32(0x561008), _icall_esp); /* indirect call */
    }

loc_0050A1F8: ;
    POP32(esp, edi);
    eax = esi;
    POP32(esp, esi);
    POP32(esp, ebp);
    esp += 12; return; /* ret 8 */

}

/**
 * sub_0050A2B9
 * Original: 0x0050A2B9 - 0x0050A2DB (34 bytes, 15 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0050A2B9(void)
{
    uint32_t ebp;
    int _flags = 0; /* fallback flag var */

loc_0050A2B9: ;
    PUSH32(esp, ebp);
    ebp = esp;
    PUSH32(esp, ecx);
    PUSH32(esp, ecx);
    PUSH32(esp, esi);
    esi = ecx;
    eax = MEM32(esi + 0x48);
    if (TEST_Z(eax, eax)) { sub_0050A2DB(); return; } /* je: equal / zero */

loc_0050A2C8: ;
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, MEM32(ebp + 0x10));
    PUSH32(esp, MEM32(ebp + 0xC));
    PUSH32(esp, MEM32(ebp + 8));
    PUSH32(esp, MEM32(esi + 0x4C));
    PUSH32(esp, 0); RECOMP_ICALL_SAFE(eax, _icall_esp); /* indirect call */
    }

loc_0050A2D6: ;
    g_seh_ebp = ebp; sub_0050A372(); return; /* tail jmp 0x0050A372 */

}

/**
 * sub_0050A377
 * Original: 0x0050A377 - 0x0050A392 (27 bytes, 11 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0050A377(void)
{
    uint32_t ebp;

loc_0050A377: ;
    PUSH32(esp, ebp);
    ebp = esp;
    PUSH32(esp, ecx);
    PUSH32(esp, esi);
    esi = ecx;
    eax = esi + 0x68;
    PUSH32(esp, eax);
    ecx = ebp + -4;
    MEM32(esi) = 0x587AF0;
    PUSH32(esp, 0); sub_00509C80(); /* call 0x00509C80 */

loc_0050A390: ;
    g_seh_ebp = ebp; sub_0050A398(); return; /* tail jmp 0x0050A398 */

}

/**
 * sub_0050A3E5
 * Original: 0x0050A3E5 - 0x0050A403 (30 bytes, 11 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0050A3E5(void)
{
    uint32_t ebp;

loc_0050A3E5: ;
    PUSH32(esp, ebp);
    ebp = esp;
    eax = MEM32(ebp + 8);
    eax = eax + 0x84;
    MEM32(ebp + 8) = eax;
    eax = 1;
    ecx = MEM32(ebp + 8);
    /* TODO: xadd dword ptr [ecx], eax */
    eax++;
    POP32(esp, ebp);
    esp += 8; return; /* ret 4 */

}

/**
 * sub_0050A403
 * Original: 0x0050A403 - 0x0050A447 (68 bytes, 26 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0050A403(void)
{
    uint32_t ebp;
    int _flags = 0; /* fallback flag var */

loc_0050A403: ;
    PUSH32(esp, ebp);
    ebp = esp;
    PUSH32(esp, esi);
    esi = MEM32(ebp + 8);
    PUSH32(esp, edi);
    eax = esi + 0x68;
    PUSH32(esp, eax);
    ecx = ebp + 8;
    PUSH32(esp, 0); sub_00509C80(); /* call 0x00509C80 */

loc_0050A417: ;
    eax = MEM32(esi + 0x4C);
    MEM32(esi + 0x38) = MEM32(esi + 0x38) & 0;
    MEM32(esi + 0x40) = MEM32(esi + 0x40) & 0;
    ecx = esi;
    MEM32(esi + 0x5C) = eax;
    PUSH32(esp, 0); sub_00509FBB(); /* call 0x00509FBB */

loc_0050A42C: ;
    edi = eax;
    if (TEST_S(edi, edi)) goto loc_0050A436; /* jl: less (signed <) */

loc_0050A432: ;
    MEM32(esi + 0x40) = MEM32(esi + 0x40) | 2;

loc_0050A436: ;
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, MEM32(ebp + 8));
    PUSH32(esp, 0); RECOMP_ICALL_SAFE(MEM32(0x561008), _icall_esp); /* indirect call */
    }

loc_0050A43F: ;
    eax = edi;
    POP32(esp, edi);
    POP32(esp, esi);
    POP32(esp, ebp);
    esp += 8; return; /* ret 4 */

}

/**
 * sub_0050A447
 * Original: 0x0050A447 - 0x0050A467 (32 bytes, 11 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0050A447(void)
{
    int _flags = 0; /* fallback flag var */

loc_0050A447: ;
    PUSH32(esp, esi);
    esi = ecx;
    PUSH32(esp, 0); sub_0050A377(); /* call 0x0050A377 */

loc_0050A44F: ;
    if (TEST_Z(MEM8(esp + 8), 1)) goto loc_0050A461; /* je: equal / zero */

loc_0050A456: ;
    PUSH32(esp, 0x6482A000);
    PUSH32(esp, esi);
    PUSH32(esp, 0); sub_002AF670(); /* call 0x002AF670 */

loc_0050A461: ;
    eax = esi;
    POP32(esp, esi);
    esp += 8; return; /* ret 4 */

}

/**
 * sub_0050A467
 * Original: 0x0050A467 - 0x0050A493 (44 bytes, 17 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0050A467(void)
{
    uint32_t ebp;
    int _flags = 0; /* fallback flag var */

loc_0050A467: ;
    PUSH32(esp, ebp);
    ebp = esp;
    PUSH32(esp, esi);
    esi = MEM32(ebp + 8);
    PUSH32(esp, edi);
    eax = esi + 0x68;
    PUSH32(esp, eax);
    ecx = ebp + 8;
    edi = 0x8000FFFFu;
    PUSH32(esp, 0); sub_00509C80(); /* call 0x00509C80 */

loc_0050A480: ;
    if (TEST_Z(MEM8(esi + 0x40), 4)) { sub_0050A493(); return; } /* je: equal / zero */

loc_0050A486: ;
    PUSH32(esp, MEM32(ebp + 0x10));
    PUSH32(esp, esi);
    PUSH32(esp, 0); sub_00509E91(); /* call 0x00509E91 */

loc_0050A48F: ;
    edi = eax;
    g_seh_ebp = ebp; sub_0050A4AD(); return; /* tail jmp 0x0050A4AD */

}

/**
 * sub_0050A4BE
 * Original: 0x0050A4BE - 0x0050A4DA (28 bytes, 10 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0050A4BE(void)
{
    uint32_t ebp;
    int _flags = 0; /* fallback flag var */

loc_0050A4BE: ;
    PUSH32(esp, ebp);
    ebp = esp;
    PUSH32(esp, MEM32(ebp + 0x18));
    ecx = MEM32(ebp + 0xC);
    (void)0; /* cmp MEM32(ecx + 4), 1 - flags set for next jcc */
    PUSH32(esp, MEM32(ebp + 0x14));
    PUSH32(esp, MEM32(ebp + 0x10));
    if (CMP_NE(MEM32(ecx + 4), 1)) { sub_0050A4DA(); return; } /* jne: not equal / not zero */

loc_0050A4D3: ;
    PUSH32(esp, 0); sub_0050A2B9(); /* call 0x0050A2B9 */

loc_0050A4D8: ;
    g_seh_ebp = ebp; sub_0050A4DF(); return; /* tail jmp 0x0050A4DF */

}

/**
 * sub_0050A4E3
 * Original: 0x0050A4E3 - 0x0050A557 (116 bytes, 44 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0050A4E3(void)
{

loc_0050A4E3: ;
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, esi);
    esi = ecx;
    PUSH32(esp, edi);
    eax = esi + 0x68;
    PUSH32(esp, eax);
    MEM32(esi) = 0x587AF0;
    MEM32(esi + 4) = 2;
    PUSH32(esp, 0); RECOMP_ICALL_SAFE(MEM32(0x561000), _icall_esp); /* indirect call */
    }

loc_0050A4FE: ;
    eax = 0; /* xor self */
    edx = esi + 0x30;
    PUSH32(esp, 0xA);
    edi = edx;
    MEM32(edi) = eax; edi += 4; /* stosd */
    POP32(esp, ecx);
    edi = esi + 8;
    { uint32_t _i; for (_i = 0; _i < ecx; _i++) MEM32(edi + _i*4) = eax; }
    edi += ecx * 4; ecx = 0; /* rep stosd */
    eax++;
    MEM32(esi + 0x84) = eax;
    MEM32(esi + 0x88) = eax;
    eax = 0; /* xor self */
    ecx = 0; /* xor self */
    MEM32(esi + 0x34) = ecx;
    MEM32(esi + 0x40) = ecx;
    MEM8(esi + 0x3C) = LO8(ecx);
    MEM32(esi + 0x38) = ecx;
    MEM32(edx) = ecx;
    edi = esi + 0x44;
    MEM32(edi) = eax; edi += 4; /* stosd */
    MEM32(edi) = eax; edi += 4; /* stosd */
    MEM32(edi) = eax; edi += 4; /* stosd */
    MEM32(edi) = eax; edi += 4; /* stosd */
    eax = 0; /* xor self */
    edi = esi + 0x54;
    MEM32(edi) = eax; edi += 4; /* stosd */
    MEM32(edi) = eax; edi += 4; /* stosd */
    MEM32(edi) = eax; edi += 4; /* stosd */
    MEM32(edi) = eax; edi += 4; /* stosd */
    MEM32(edi) = eax; edi += 4; /* stosd */
    POP32(esp, edi);
    MEM32(esi + 0x8C) = 0x42BC84;
    MEM32(esi + 0x90) = 0x42C319;
    eax = esi;
    POP32(esp, esi);
    esp += 4; return; /* ret */

}

/**
 * sub_0050A557
 * Original: 0x0050A557 - 0x0050A58D (54 bytes, 22 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0050A557(void)
{
    uint32_t ebp;
    int _flags = 0; /* fallback flag var */

loc_0050A557: ;
    PUSH32(esp, ebp);
    ebp = esp;
    edx = MEM32(ebp + 8);
    eax = edx + 0x84;
    PUSH32(esp, esi);
    MEM32(ebp + 8) = eax;
    eax = 0xFFFFFFFFu;
    ecx = MEM32(ebp + 8);
    /* TODO: xadd dword ptr [ecx], eax */
    eax--;
    esi = eax;
    if (TEST_NZ(esi, esi)) goto loc_0050A586; /* jne: not equal / not zero */

loc_0050A579: ;
    if (TEST_Z(edx, edx)) goto loc_0050A586; /* je: equal / zero */

loc_0050A57D: ;
    PUSH32(esp, 1);
    ecx = edx;
    PUSH32(esp, 0); sub_0050A447(); /* call 0x0050A447 */

loc_0050A586: ;
    eax = esi;
    POP32(esp, esi);
    POP32(esp, ebp);
    esp += 8; return; /* ret 4 */

}

/**
 * sub_0050A58D
 * Original: 0x0050A58D - 0x0050A5AD (32 bytes, 11 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0050A58D(void)
{
    uint32_t ebp;
    int _flags = 0; /* fallback flag var */
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_0050A58D: ;
    PUSH32(esp, esi);
    PUSH32(esp, edi);
    PUSH32(esp, 0x6482A000);
    PUSH32(esp, 0x94);
    PUSH32(esp, 0); sub_002AF430(); /* call 0x002AF430 */

loc_0050A59E: ;
    if (TEST_Z(eax, eax)) { sub_0050A5AD(); return; } /* je: equal / zero */

loc_0050A5A2: ;
    ecx = eax;
    PUSH32(esp, 0); sub_0050A4E3(); /* call 0x0050A4E3 */

loc_0050A5A9: ;
    esi = eax;
    g_seh_ebp = ebp; sub_0050A5AF(); return; /* tail jmp 0x0050A5AF */

}

/**
 * sub_0050A5E9
 * Original: 0x0050A5E9 - 0x0050A79F (438 bytes, 102 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0050A5E9(void)
{
    uint32_t ebp;
    int _flags = 0; /* fallback flag var */
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_0050A5E9: ;
    PUSH32(esp, ebx);
    PUSH32(esp, ebp);
    PUSH32(esp, edi);
    PUSH32(esp, 3);
    POP32(esp, edi);
    PUSH32(esp, 8);
    POP32(esp, ebp);
    ebx = 0; /* xor self */

loc_0050A5F4: ;
    eax = MEM32(esi + 0xC8);
    eax = eax - edi;
    if ((eax == 0)) goto loc_0050A712; /* je: equal / zero */

loc_0050A602: ;
    eax--;
    if ((eax == 0)) goto loc_0050A69B; /* je: equal / zero */

loc_0050A609: ;
    eax--;
    if ((eax == 0)) goto loc_0050A646; /* je: equal / zero */

loc_0050A60C: ;
    eax = eax - edi;
    if ((eax == 0)) goto loc_0050A634; /* je: equal / zero */

loc_0050A610: ;
    eax--;
    if ((eax != 0)) goto loc_0050A75B; /* jne: not equal / not zero */

loc_0050A617: ;
    SET_LO16(eax, ZX8(MEM8(esi + 0x128)));
    if (CMP_EQ(LO16(eax), MEM16(esi + 0xBC))) goto loc_0050A75F; /* je: equal / zero */

loc_0050A62C: ;
    MEM32(esi + 0xC8) = ebp;
    goto loc_0050A5F4;

loc_0050A634: ;
    MEM32(esi + 0x148) = MEM32(esi + 0x148) + 1;
    MEM32(esi + 0xC8) = 4;
    goto loc_0050A5F4;

loc_0050A646: ;
    SET_LO16(eax, ZX8(MEM8(esi + 0x128)));
    if (CMP_NE(LO16(eax), MEM16(esi + 0xBC))) goto loc_0050A62C; /* jne: not equal / not zero */

loc_0050A657: ;
    eax = ZX16(MEM16(esi + 0x14C));
    eax = eax + MEM32(esi);
    ecx = ZX16(MEM16(esi + 0x13A));
    MEM32(esi + 0xCC) = eax;
    eax = MEM32(esi + 0x34);
    ecx = ecx - eax;
    MEM32(esi + 0xD0) = ecx;

loc_0050A678: ;
    (void)0; /* cmp MEM32(esi + 0x150), ebx - flags set for next jcc */
    MEM32(esi + 0xD4) = 1;
    MEM32(esi + 0xD8) = eax;
    if (CMP_EQ(MEM32(esi + 0x150), ebx)) goto loc_0050A784; /* je: equal / zero */

loc_0050A694: ;
    PUSH32(esp, 0xE);
    g_seh_ebp = ebp; sub_0050A7A1(); return; /* tail jmp 0x0050A7A1 */

loc_0050A69B: ;
    eax = MEM32(esi + 0x148);
    if (CMP_B(eax, MEM32(esi + 0x120))) goto loc_0050A6B4; /* jb: below (unsigned <) */

loc_0050A6A9: ;
    MEM32(esi + 0xC8) = edi;
    goto loc_0050A5F4;

loc_0050A6B4: ;
    PUSH32(esp, esi);
    PUSH32(esp, 0); sub_0050C4AA(); /* call 0x0050C4AA */

loc_0050A6BA: ;
    if (TEST_NZ(eax, eax)) goto loc_0050A62C; /* jne: not equal / not zero */

loc_0050A6C2: ;
    SET_LO16(eax, MEM16(esi + 0x126));
    SET_LO16(eax, LO16(eax) - MEM16(esi + 0x13A));
    SET_LO16(eax, LO16(eax) + MEM16(esi + 0x124));
    (void)0; /* cmp MEM8(esi + 0x138), 1 - flags set for next jcc */
    MEM16(esi + 0x14C) = LO16(eax);
    if (CMP_EQ(MEM8(esi + 0x138), 1)) goto loc_0050A6FC; /* je: equal / zero */

loc_0050A6E7: ;
    MEM32(esi + 0xC8) = 5;
    MEM8(esi + 0x141) = LO8(ebx);
    goto loc_0050A5F4;

loc_0050A6FC: ;
    MEM32(esi + 0xC8) = 9;
    MEM8(esi + 0x141) = 1;
    goto loc_0050A5F4;

loc_0050A712: ;
    eax = MEM32(esi + 4);
    if (CMP_A(eax, MEM32(esi + 0x24))) goto loc_0050A792; /* ja: above (unsigned >) */

loc_0050A71A: ;
    ecx = MEM32(esi + 0xC);
    ecx = ecx + eax;
    PUSH32(esp, esi);
    MEM32(esi) = eax;
    MEM32(esi + 4) = ecx;
    PUSH32(esp, 0); sub_0050C0A2(); /* call 0x0050C0A2 */

loc_0050A72A: ;
    if (CMP_EQ(eax, edi)) goto loc_0050A796; /* je: equal / zero */

loc_0050A72E: ;
    if (CMP_NE(eax, ebx)) { sub_0050A79F(); return; } /* jne: not equal / not zero */

loc_0050A732: ;
    if (CMP_EQ(MEM32(esi + 0xE4), ebx)) goto loc_0050A746; /* je: equal / zero */

loc_0050A73A: ;
    if (CMP_NE(MEM32(esi + 0xDC), ebx)) goto loc_0050A5F4; /* jne: not equal / not zero */

loc_0050A746: ;
    MEM32(esi + 0xC8) = 4;
    MEM32(esi + 0x148) = ebx;
    goto loc_0050A5F4;

loc_0050A75B: ;
    PUSH32(esp, 0x11);
    g_seh_ebp = ebp; sub_0050A7A1(); return; /* tail jmp 0x0050A7A1 */

loc_0050A75F: ;
    eax = ZX16(MEM16(esi + 0x14C));
    eax = eax + MEM32(esi);
    MEM16(esi + 0x13C) = LO16(ebx);
    MEM32(esi + 0xCC) = eax;
    eax = MEM32(esi + 0x34);
    MEM8(esi + 0x140) = 1;
    goto loc_0050A678;

loc_0050A784: ;
    MEM32(esi + 0xC8) = 6;
    eax = 0; /* xor self */
    g_seh_ebp = ebp; sub_0050A7A2(); return; /* tail jmp 0x0050A7A2 */

loc_0050A792: ;
    PUSH32(esp, 6);
    g_seh_ebp = ebp; sub_0050A7A1(); return; /* tail jmp 0x0050A7A1 */

loc_0050A796: ;
    eax = MEM32(esi);
    MEM32(esi + 4) = eax;
    PUSH32(esp, 0x12);
    g_seh_ebp = ebp; sub_0050A7A1(); return; /* tail jmp 0x0050A7A1 */

}

/**
 * sub_0050A7A6
 * Original: 0x0050A7A6 - 0x0050A88D (231 bytes, 74 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0050A7A6(void)
{
    uint32_t ebp;
    int _flags = 0; /* fallback flag var */

loc_0050A7A6: ;
    PUSH32(esp, ebp);
    ebp = esp;
    PUSH32(esp, ecx);
    eax = MEM32(ebp + 8);
    PUSH32(esp, ebx);
    PUSH32(esp, esi);
    esi = MEM32(eax);
    ebx = 0; /* xor self */
    if (CMP_EQ(esi, ebx)) goto loc_0050A885; /* je: equal / zero */

loc_0050A7BB: ;
    PUSH32(esp, edi);
    eax = esi + 0x158;
    PUSH32(esp, eax);
    PUSH32(esp, 0); sub_0050C81E(); /* call 0x0050C81E */

loc_0050A7C8: ;
    edi = esi + 0xB8;
    eax = MEM32(edi);
    if (CMP_EQ(eax, ebx)) goto loc_0050A7DD; /* je: equal / zero */

loc_0050A7D4: ;
    PUSH32(esp, eax);
    PUSH32(esp, 0); sub_0046FB7D(); /* call 0x0046FB7D */

loc_0050A7DA: ;
    POP32(esp, ecx);
    MEM32(edi) = ebx;

loc_0050A7DD: ;
    eax = MEM32(esi + 0xA8);
    if (CMP_EQ(eax, ebx)) goto loc_0050A878; /* je: equal / zero */

loc_0050A7EB: ;
    SET_LO16(eax, MEM16(eax));
    if (CMP_LE(LO16(eax), LO16(ebx))) goto loc_0050A866; /* jle: less or equal (signed <=) */

loc_0050A7F3: ;
    MEM32(ebp + -4) = ebx;
    if (CMP_BE(LO16(eax), LO16(ebx))) goto loc_0050A84E; /* jbe: below or equal (unsigned <=) */

loc_0050A7F8: ;
    edi = 0; /* xor self */

loc_0050A7FA: ;
    eax = MEM32(esi + 0xA8);
    eax = MEM32(eax + 2);
    PUSH32(esp, MEM32(eax + edi + 0xA));
    PUSH32(esp, 0); sub_0046FB7D(); /* call 0x0046FB7D */

loc_0050A80C: ;
    eax = MEM32(esi + 0xA8);
    eax = MEM32(eax + 2);
    PUSH32(esp, MEM32(eax + edi + 2));
    PUSH32(esp, 0); sub_0046FB7D(); /* call 0x0046FB7D */

loc_0050A81E: ;
    eax = MEM32(esi + 0xA8);
    eax = MEM32(eax + 2);
    MEM32(ebp + -4) = MEM32(ebp + -4) + 1;
    MEM32(eax + edi + 0xA) = ebx;
    eax = MEM32(esi + 0xA8);
    eax = MEM32(eax + 2);
    MEM32(eax + edi + 2) = ebx;
    eax = MEM32(esi + 0xA8);
    eax = (uint32_t)(int32_t)SMEM16(eax);
    POP32(esp, ecx);
    edi = edi + 0xE;
    (void)0; /* cmp MEM32(ebp + -4), eax - flags set for next jcc */
    POP32(esp, ecx);
    if (CMP_B(MEM32(ebp + -4), eax)) goto loc_0050A7FA; /* jb: below (unsigned <) */

loc_0050A84E: ;
    eax = MEM32(esi + 0xA8);
    PUSH32(esp, MEM32(eax + 2));
    PUSH32(esp, 0); sub_0046FB7D(); /* call 0x0046FB7D */

loc_0050A85C: ;
    eax = MEM32(esi + 0xA8);
    POP32(esp, ecx);
    MEM32(eax + 2) = ebx;

loc_0050A866: ;
    PUSH32(esp, MEM32(esi + 0xA8));
    PUSH32(esp, 0); sub_0046FB7D(); /* call 0x0046FB7D */

loc_0050A871: ;
    POP32(esp, ecx);
    MEM32(esi + 0xA8) = ebx;

loc_0050A878: ;
    PUSH32(esp, esi);
    PUSH32(esp, 0); sub_0046FB7D(); /* call 0x0046FB7D */

loc_0050A87E: ;
    eax = MEM32(ebp + 8);
    POP32(esp, ecx);
    MEM32(eax) = ebx;
    POP32(esp, edi);

loc_0050A885: ;
    POP32(esp, esi);
    eax = 0; /* xor self */
    POP32(esp, ebx);
    esp = ebp;
    POP32(esp, ebp); /* leave */
    esp += 8; return; /* ret 4 */

}

/**
 * sub_0050A88D
 * Original: 0x0050A88D - 0x0050A8AE (33 bytes, 13 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0050A88D(void)
{
    uint32_t ebp;
    int _flags = 0; /* fallback flag var */
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_0050A88D: ;
    PUSH32(esp, esi);
    esi = MEM32(esp + 8);
    PUSH32(esp, esi);
    PUSH32(esp, 0); sub_0050A7A6(); /* call 0x0050A7A6 */

loc_0050A898: ;
    PUSH32(esp, 0x160);
    PUSH32(esp, 0); sub_00471918(); /* call 0x00471918 */

loc_0050A8A2: ;
    edx = eax;
    eax = 0; /* xor self */
    (void)0; /* test edx, edx - flags set for next jcc */
    POP32(esp, ecx);
    if (TEST_NZ(edx, edx)) { sub_0050A8AE(); return; } /* jne: not equal / not zero */

loc_0050A8AB: ;
    eax++;
    g_seh_ebp = ebp; sub_0050A8D5(); return; /* tail jmp 0x0050A8D5 */

}

/**
 * sub_0050A8D9
 * Original: 0x0050A8D9 - 0x0050A9AE (213 bytes, 57 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0050A8D9(void)
{
    uint32_t ebp;
    int _flags = 0; /* fallback flag var */
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_0050A8D9: ;
    ecx = MEM32(esp + 4);
    if (TEST_Z(ecx, ecx)) { sub_0050A9AE(); return; } /* je: equal / zero */

loc_0050A8E5: ;
    eax = MEM32(esp + 8);
    if (TEST_Z(eax, eax)) { sub_0050A9AE(); return; } /* je: equal / zero */

loc_0050A8F1: ;
    edx = ZX16(MEM16(ecx + 0x28));
    MEM32(eax) = edx;
    edx = ZX16(MEM16(ecx + 0x38));
    MEM32(eax + 8) = edx;
    edx = MEM32(ecx + 0x2C);
    if (CMP_EQ(edx, 0x1F40)) goto loc_0050A970; /* je: equal / zero */

loc_0050A909: ;
    if (CMP_EQ(edx, 0x2B11)) goto loc_0050A967; /* je: equal / zero */

loc_0050A911: ;
    if (CMP_EQ(edx, 0x3E80)) goto loc_0050A95E; /* je: equal / zero */

loc_0050A919: ;
    if (CMP_EQ(edx, 0x5622)) goto loc_0050A955; /* je: equal / zero */

loc_0050A921: ;
    if (CMP_EQ(edx, 0x7D00)) goto loc_0050A94C; /* je: equal / zero */

loc_0050A929: ;
    if (CMP_EQ(edx, 0xAC44)) goto loc_0050A943; /* je: equal / zero */

loc_0050A931: ;
    if (CMP_EQ(edx, 0xBB80)) goto loc_0050A93D; /* je: equal / zero */

loc_0050A939: ;
    PUSH32(esp, 7);
    g_seh_ebp = ebp; sub_0050A9B0(); return; /* tail jmp 0x0050A9B0 */

loc_0050A93D: ;
    MEM32(eax + 4) = MEM32(eax + 4) & 0;
    goto loc_0050A977;

loc_0050A943: ;
    MEM32(eax + 4) = 1;
    goto loc_0050A977;

loc_0050A94C: ;
    MEM32(eax + 4) = 2;
    goto loc_0050A977;

loc_0050A955: ;
    MEM32(eax + 4) = 3;
    goto loc_0050A977;

loc_0050A95E: ;
    MEM32(eax + 4) = 4;
    goto loc_0050A977;

loc_0050A967: ;
    MEM32(eax + 4) = 5;
    goto loc_0050A977;

loc_0050A970: ;
    MEM32(eax + 4) = 6;

loc_0050A977: ;
    edx = MEM32(ecx + 0x18);
    MEM32(eax + 0xC) = edx;
    edx = MEM32(ecx + 0xC);
    MEM32(eax + 0x10) = edx;
    edx = MEM32(ecx + 0x20);
    MEM32(eax + 0x14) = edx;
    edx = MEM32(ecx + 0x24);
    MEM32(eax + 0x18) = edx;
    edx = MEM32(ecx + 0x150);
    MEM32(eax + 0x1C) = edx;
    edx = MEM32(ecx + 0xB4);
    MEM32(eax + 0x20) = edx;
    ecx = MEM32(ecx + 0x30);
    ecx = ecx << 3;
    MEM32(eax + 0x24) = ecx;
    eax = 0; /* xor self */
    g_seh_ebp = ebp; sub_0050A9B1(); return; /* tail jmp 0x0050A9B1 */

}

/**
 * sub_0050A9B4
 * Original: 0x0050A9B4 - 0x0050AC08 (596 bytes, 187 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0050A9B4(void)
{
    uint32_t ebp;
    int _flags = 0; /* fallback flag var */

loc_0050A9B4: ;
    PUSH32(esp, ebp);
    ebp = esp;
    PUSH32(esp, ebx);
    PUSH32(esp, esi);
    esi = MEM32(ebp + 8);
    ebx = 0; /* xor self */
    (void)0; /* cmp esi, ebx - flags set for next jcc */
    PUSH32(esp, edi);
    if (CMP_EQ(esi, ebx)) { sub_0050AC08(); return; } /* je: equal / zero */

loc_0050A9C7: ;
    edi = MEM32(ebp + 0xC);
    if (CMP_EQ(edi, ebx)) { sub_0050AC08(); return; } /* je: equal / zero */

loc_0050A9D2: ;
    if (CMP_NE(MEM32(esi + 0x98), ebx)) goto loc_0050A9F2; /* jne: not equal / not zero */

loc_0050A9DA: ;
    MEM16(edi) = LO16(ebx);
    MEM16(edi + 2) = LO16(ebx);
    MEM16(edi + 4) = LO16(ebx);
    MEM16(edi + 6) = LO16(ebx);
    MEM16(edi + 8) = LO16(ebx);
    goto loc_0050AC04;

loc_0050A9F2: ;
    SET_LO16(ecx, MEM16(edi));
    if (CMP_LE(LO16(ecx), LO16(ebx))) goto loc_0050AA46; /* jle: less or equal (signed <=) */

loc_0050A9FA: ;
    edx = MEM32(edi + 0xA);
    if (CMP_EQ(edx, ebx)) goto loc_0050AA3C; /* je: equal / zero */

loc_0050AA01: ;
    SET_LO16(eax, MEM16(esi + 0x9C));
    if (CMP_BE(LO16(eax), LO16(ebx))) goto loc_0050AA32; /* jbe: below or equal (unsigned <=) */

loc_0050AA0D: ;
    eax = ZX16(LO16(eax));
    ecx = SX16(LO16(ecx));
    (void)0; /* cmp eax, ecx - flags set for next jcc */
    ebx = eax;
    if (CMP_L(eax, ecx)) goto loc_0050AA1B; /* jl: less (signed <) */

loc_0050AA19: ;
    ebx = ecx;

loc_0050AA1B: ;
    PUSH32(esp, edx);
    PUSH32(esp, ebx);
    PUSH32(esp, MEM32(esi + 0x98));
    PUSH32(esp, esi);
    PUSH32(esp, 0); sub_0050B295(); /* call 0x0050B295 */

loc_0050AA29: ;
    if (CMP_EQ(eax, ebx)) goto loc_0050AA3C; /* je: equal / zero */

loc_0050AA2D: ;
    goto loc_0050ABEB;

loc_0050AA32: ;
    MEM8(edx + 1) = 0;
    eax = MEM32(edi + 0xA);
    MEM8(eax) = 0;

loc_0050AA3C: ;
    SET_LO16(eax, MEM16(esi + 0x9C));
    MEM16(edi) = LO16(eax);

loc_0050AA46: ;
    SET_LO16(edx, MEM16(edi + 2));
    if (CMP_LE(LO16(edx) & LO16(edx), 0)) goto loc_0050AAA9; /* jle: less or equal (signed <=) */

loc_0050AA4F: ;
    eax = MEM32(edi + 0xE);
    (void)0; /* test eax, eax - flags set for next jcc */
    MEM32(ebp + 8) = eax;
    if (TEST_Z(eax, eax)) goto loc_0050AA9E; /* je: equal / zero */

loc_0050AA59: ;
    SET_LO16(ecx, MEM16(esi + 0x9E));
    if (CMP_BE(LO16(ecx) & LO16(ecx), 0)) goto loc_0050AA94; /* jbe: below or equal (unsigned <=) */

loc_0050AA65: ;
    eax = ZX16(MEM16(esi + 0x9C));
    eax = eax + MEM32(esi + 0x98);
    ecx = ZX16(LO16(ecx));
    edx = SX16(LO16(edx));
    (void)0; /* cmp ecx, edx - flags set for next jcc */
    ebx = ecx;
    if (CMP_L(ecx, edx)) goto loc_0050AA80; /* jl: less (signed <) */

loc_0050AA7E: ;
    ebx = edx;

loc_0050AA80: ;
    PUSH32(esp, MEM32(ebp + 8));
    PUSH32(esp, ebx);
    PUSH32(esp, eax);
    PUSH32(esp, esi);
    PUSH32(esp, 0); sub_0050B295(); /* call 0x0050B295 */

loc_0050AA8B: ;
    if (CMP_EQ(eax, ebx)) goto loc_0050AA9E; /* je: equal / zero */

loc_0050AA8F: ;
    goto loc_0050ABEB;

loc_0050AA94: ;
    MEM8(eax + 1) = 0;
    eax = MEM32(edi + 0xE);
    MEM8(eax) = 0;

loc_0050AA9E: ;
    SET_LO16(eax, MEM16(esi + 0x9E));
    MEM16(edi + 2) = LO16(eax);

loc_0050AAA9: ;
    SET_LO16(edx, MEM16(edi + 4));
    if (CMP_LE(LO16(edx) & LO16(edx), 0)) goto loc_0050AB15; /* jle: less or equal (signed <=) */

loc_0050AAB2: ;
    eax = MEM32(edi + 0x12);
    (void)0; /* test eax, eax - flags set for next jcc */
    MEM32(ebp + 8) = eax;
    if (TEST_Z(eax, eax)) goto loc_0050AB0A; /* je: equal / zero */

loc_0050AABC: ;
    SET_LO16(ecx, MEM16(esi + 0xA0));
    if (CMP_BE(LO16(ecx) & LO16(ecx), 0)) goto loc_0050AB00; /* jbe: below or equal (unsigned <=) */

loc_0050AAC8: ;
    ebx = ZX16(MEM16(esi + 0x9C));
    eax = ZX16(MEM16(esi + 0x9E));
    eax = eax + ebx;
    eax = eax + MEM32(esi + 0x98);
    ecx = ZX16(LO16(ecx));
    edx = SX16(LO16(edx));
    (void)0; /* cmp ecx, edx - flags set for next jcc */
    ebx = ecx;
    if (CMP_L(ecx, edx)) goto loc_0050AAEC; /* jl: less (signed <) */

loc_0050AAEA: ;
    ebx = edx;

loc_0050AAEC: ;
    PUSH32(esp, MEM32(ebp + 8));
    PUSH32(esp, ebx);
    PUSH32(esp, eax);
    PUSH32(esp, esi);
    PUSH32(esp, 0); sub_0050B295(); /* call 0x0050B295 */

loc_0050AAF7: ;
    if (CMP_EQ(eax, ebx)) goto loc_0050AB0A; /* je: equal / zero */

loc_0050AAFB: ;
    goto loc_0050ABEB;

loc_0050AB00: ;
    MEM8(eax + 1) = 0;
    eax = MEM32(edi + 0x12);
    MEM8(eax) = 0;

loc_0050AB0A: ;
    SET_LO16(eax, MEM16(esi + 0xA0));
    MEM16(edi + 4) = LO16(eax);

loc_0050AB15: ;
    SET_LO16(edx, MEM16(edi + 6));
    if (CMP_LE(LO16(edx) & LO16(edx), 0)) goto loc_0050AB87; /* jle: less or equal (signed <=) */

loc_0050AB1E: ;
    eax = MEM32(edi + 0x16);
    (void)0; /* test eax, eax - flags set for next jcc */
    MEM32(ebp + 8) = eax;
    if (TEST_Z(eax, eax)) goto loc_0050AB7C; /* je: equal / zero */

loc_0050AB28: ;
    SET_LO16(ecx, MEM16(esi + 0xA2));
    if (CMP_BE(LO16(ecx) & LO16(ecx), 0)) goto loc_0050AB72; /* jbe: below or equal (unsigned <=) */

loc_0050AB34: ;
    ebx = ZX16(MEM16(esi + 0x9E));
    eax = ZX16(MEM16(esi + 0xA0));
    eax = eax + ebx;
    ebx = ZX16(MEM16(esi + 0x9C));
    eax = eax + ebx;
    eax = eax + MEM32(esi + 0x98);
    ecx = ZX16(LO16(ecx));
    edx = SX16(LO16(edx));
    (void)0; /* cmp ecx, edx - flags set for next jcc */
    ebx = ecx;
    if (CMP_L(ecx, edx)) goto loc_0050AB61; /* jl: less (signed <) */

loc_0050AB5F: ;
    ebx = edx;

loc_0050AB61: ;
    PUSH32(esp, MEM32(ebp + 8));
    PUSH32(esp, ebx);
    PUSH32(esp, eax);
    PUSH32(esp, esi);
    PUSH32(esp, 0); sub_0050B295(); /* call 0x0050B295 */

loc_0050AB6C: ;
    if (CMP_EQ(eax, ebx)) goto loc_0050AB7C; /* je: equal / zero */

loc_0050AB70: ;
    goto loc_0050ABEB;

loc_0050AB72: ;
    MEM8(eax + 1) = 0;
    eax = MEM32(edi + 0x16);
    MEM8(eax) = 0;

loc_0050AB7C: ;
    SET_LO16(eax, MEM16(esi + 0xA2));
    MEM16(edi + 6) = LO16(eax);

loc_0050AB87: ;
    SET_LO16(edx, MEM16(edi + 8));
    if (CMP_LE(LO16(edx) & LO16(edx), 0)) goto loc_0050AC04; /* jle: less or equal (signed <=) */

loc_0050AB90: ;
    eax = MEM32(edi + 0x1A);
    (void)0; /* test eax, eax - flags set for next jcc */
    MEM32(ebp + 8) = eax;
    if (TEST_Z(eax, eax)) goto loc_0050ABF9; /* je: equal / zero */

loc_0050AB9A: ;
    SET_LO16(ecx, MEM16(esi + 0xA4));
    if (CMP_BE(LO16(ecx) & LO16(ecx), 0)) goto loc_0050ABEF; /* jbe: below or equal (unsigned <=) */

loc_0050ABA6: ;
    ebx = ZX16(MEM16(esi + 0xA0));
    eax = ZX16(MEM16(esi + 0xA2));
    eax = eax + ebx;
    ebx = ZX16(MEM16(esi + 0x9E));
    eax = eax + ebx;
    ebx = ZX16(MEM16(esi + 0x9C));
    eax = eax + ebx;
    eax = eax + MEM32(esi + 0x98);
    ecx = ZX16(LO16(ecx));
    edx = SX16(LO16(edx));
    (void)0; /* cmp ecx, edx - flags set for next jcc */
    ebx = ecx;
    if (CMP_L(ecx, edx)) goto loc_0050ABDC; /* jl: less (signed <) */

loc_0050ABDA: ;
    ebx = edx;

loc_0050ABDC: ;
    PUSH32(esp, MEM32(ebp + 8));
    PUSH32(esp, ebx);
    PUSH32(esp, eax);
    PUSH32(esp, esi);
    PUSH32(esp, 0); sub_0050B295(); /* call 0x0050B295 */

loc_0050ABE7: ;
    if (CMP_EQ(eax, ebx)) goto loc_0050ABF9; /* je: equal / zero */

loc_0050ABEB: ;
    PUSH32(esp, 3);
    g_seh_ebp = ebp; sub_0050AC0A(); return; /* tail jmp 0x0050AC0A */

loc_0050ABEF: ;
    MEM8(eax + 1) = 0;
    eax = MEM32(edi + 0x1A);
    MEM8(eax) = 0;

loc_0050ABF9: ;
    SET_LO16(eax, MEM16(esi + 0xA4));
    MEM16(edi + 8) = LO16(eax);

loc_0050AC04: ;
    eax = 0; /* xor self */
    g_seh_ebp = ebp; sub_0050AC0B(); return; /* tail jmp 0x0050AC0B */

}

/**
 * sub_0050AC12
 * Original: 0x0050AC12 - 0x0050AD86 (372 bytes, 102 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0050AC12(void)
{
    uint32_t ebp;
    int _flags = 0; /* fallback flag var */
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_0050AC12: ;
    PUSH32(esp, ebx);
    PUSH32(esp, esi);
    esi = MEM32(esp + 0xC);
    (void)0; /* test esi, esi - flags set for next jcc */
    PUSH32(esp, edi);
    if (TEST_Z(esi, esi)) { sub_0050AD86(); return; } /* je: equal / zero */

loc_0050AC21: ;
    if (CMP_EQ(MEM32(esi + 0x158), 0)) { sub_0050AD86(); return; } /* je: equal / zero */

loc_0050AC2E: ;
    PUSH32(esp, 6);
    POP32(esp, edi);
    ebx = 0x80040004u;

loc_0050AC36: ;
    eax = MEM32(esi + 0xC8);
    eax = eax - edi;
    if ((eax == 0)) goto loc_0050ACC4; /* je: equal / zero */

loc_0050AC44: ;
    eax--;
    if ((eax == 0)) goto loc_0050AC55; /* je: equal / zero */

loc_0050AC47: ;
    PUSH32(esp, 0); sub_0050A5E9(); /* call 0x0050A5E9 */

loc_0050AC4C: ;
    if (TEST_Z(eax, eax)) goto loc_0050AC36; /* je: equal / zero */

loc_0050AC50: ;
    g_seh_ebp = ebp; sub_0050AD89(); return; /* tail jmp 0x0050AD89 */

loc_0050AC55: ;
    eax = esi + 0x15C;
    if (CMP_NE(MEM8(eax), 1)) goto loc_0050AC69; /* jne: not equal / not zero */

loc_0050AC60: ;
    MEM32(esi + 0xC8) = edi;
    MEM8(eax) = 0;

loc_0050AC69: ;
    PUSH32(esp, MEM32(esi + 0x158));
    PUSH32(esp, 0); sub_0050C886(); /* call 0x0050C886 */

loc_0050AC74: ;
    if (CMP_NE(eax, 4)) goto loc_0050AC80; /* jne: not equal / not zero */

loc_0050AC79: ;
    MEM8(esi + 0x15D) = 1;

loc_0050AC80: ;
    ecx = 0x80040001u;
    if (CMP_NE(eax, ecx)) goto loc_0050AC98; /* jne: not equal / not zero */

loc_0050AC89: ;
    eax = 0; /* xor self */
    MEM8(esi + 0x15D) = 1;
    MEM32(esi + 0xC8) = edi;

loc_0050AC98: ;
    if (CMP_NE(eax, 0x80040002u)) goto loc_0050AD36; /* jne: not equal / not zero */

loc_0050ACA3: ;
    PUSH32(esp, MEM32(esi + 0x158));
    PUSH32(esp, 0); sub_0050C84A(); /* call 0x0050C84A */

loc_0050ACAE: ;
    MEM8(esi + 0x15D) = 1;
    MEM32(esi + 0xC8) = 8;
    goto loc_0050AC36;

loc_0050ACC4: ;
    SET_LO8(eax, MEM8(esi + 0x15C));
    if (CMP_NE(LO8(eax), 1)) goto loc_0050ACDD; /* jne: not equal / not zero */

loc_0050ACCE: ;
    MEM32(esi + 0xC8) = 7;
    goto loc_0050AC36;

loc_0050ACDD: ;
    SET_LO8(ecx, MEM8(esi + 0x15D));
    if (CMP_EQ(LO8(ecx), 1)) goto loc_0050ACF5; /* je: equal / zero */

loc_0050ACE8: ;
    if (CMP_EQ(LO8(eax), 2)) goto loc_0050ACF9; /* je: equal / zero */

loc_0050ACEC: ;
    if (CMP_NE(MEM8(esi + 0x15E), 0)) goto loc_0050ACCE; /* jne: not equal / not zero */

loc_0050ACF5: ;
    if (CMP_NE(LO8(eax), 2)) goto loc_0050AD02; /* jne: not equal / not zero */

loc_0050ACF9: ;
    MEM8(esi + 0x15C) = 0;
    goto loc_0050AD0E;

loc_0050AD02: ;
    if (CMP_NE(LO8(ecx), 1)) goto loc_0050AD0E; /* jne: not equal / not zero */

loc_0050AD07: ;
    MEM8(esi + 0x15D) = 0;

loc_0050AD0E: ;
    PUSH32(esp, MEM32(esi + 0x158));
    MEM8(esi + 0x15E) = 1;
    PUSH32(esp, 0); sub_0050C868(); /* call 0x0050C868 */

loc_0050AD20: ;
    if (CMP_EQ(eax, ebx)) goto loc_0050AD75; /* je: equal / zero */

loc_0050AD24: ;
    if (CMP_NE(eax, 0x80040001u)) goto loc_0050AD2D; /* jne: not equal / not zero */

loc_0050AD2B: ;
    eax = 0; /* xor self */

loc_0050AD2D: ;
    if (CMP_GE(eax & eax, 0)) goto loc_0050ACCE; /* jge: greater or equal (signed >=) */

loc_0050AD31: ;
    eax = 0; /* xor self */
    eax++;
    g_seh_ebp = ebp; sub_0050AD89(); return; /* tail jmp 0x0050AD89 */

loc_0050AD36: ;
    if (CMP_NE(eax, ebx)) goto loc_0050AD4B; /* jne: not equal / not zero */

loc_0050AD3A: ;
    eax = MEM32(esi + 4);
    if (CMP_A(eax, MEM32(esi + 0x24))) goto loc_0050AD54; /* ja: above (unsigned >) */

loc_0050AD42: ;
    MEM8(esi + 0x15C) = 1;
    goto loc_0050AD71;

loc_0050AD4B: ;
    if (TEST_Z(eax, eax)) goto loc_0050AD71; /* je: equal / zero */

loc_0050AD4F: ;
    if (CMP_NE(eax, 5)) goto loc_0050AD58; /* jne: not equal / not zero */

loc_0050AD54: ;
    eax = edi;
    g_seh_ebp = ebp; sub_0050AD89(); return; /* tail jmp 0x0050AD89 */

loc_0050AD58: ;
    if (CMP_EQ(eax, ecx)) goto loc_0050AD71; /* je: equal / zero */

loc_0050AD5C: ;
    if (CMP_GE(eax & eax, 0)) goto loc_0050AD6B; /* jge: greater or equal (signed >=) */

loc_0050AD60: ;
    PUSH32(esp, MEM32(esi + 0x158));
    PUSH32(esp, 0); sub_0050C84A(); /* call 0x0050C84A */

loc_0050AD6B: ;
    MEM32(esi + 0xC8) = edi;

loc_0050AD71: ;
    eax = 0; /* xor self */
    g_seh_ebp = ebp; sub_0050AD89(); return; /* tail jmp 0x0050AD89 */

loc_0050AD75: ;
    eax = MEM32(esi + 4);
    if (CMP_A(eax, MEM32(esi + 0x24))) goto loc_0050AD54; /* ja: above (unsigned >) */

loc_0050AD7D: ;
    MEM8(esi + 0x15C) = 2;
    goto loc_0050AD71;

}

/**
 * sub_0050AD8F
 * Original: 0x0050AD8F - 0x0050AE4E (191 bytes, 72 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0050AD8F(void)
{
    uint32_t ebp;
    int _flags = 0; /* fallback flag var */

loc_0050AD8F: ;
    PUSH32(esp, ebp);
    ebp = esp;
    eax = MEM32(ebp + 0x14);
    PUSH32(esp, esi);
    PUSH32(esp, edi);
    edi = MEM32(ebp + 8);
    (void)0; /* test edi, edi - flags set for next jcc */
    MEM32(ebp + 0x14) = eax;
    if (TEST_Z(edi, edi)) { sub_0050AE4E(); return; } /* je: equal / zero */

loc_0050ADA5: ;
    ecx = MEM32(edi + 0x158);
    if (TEST_Z(ecx, ecx)) { sub_0050AE4E(); return; } /* je: equal / zero */

loc_0050ADB3: ;
    esi = MEM32(ebp + 0xC);
    if (TEST_Z(esi, esi)) { sub_0050AE4E(); return; } /* je: equal / zero */

loc_0050ADBE: ;
    edx = MEM32(ebp + 0x10);
    (void)0; /* test edx, edx - flags set for next jcc */
    PUSH32(esp, ebx);
    if (TEST_Z(edx, edx)) goto loc_0050AE2C; /* je: equal / zero */

loc_0050ADC6: ;
    ebx = esi + 2;
    if (CMP_EQ(edx, ebx)) goto loc_0050AE2C; /* je: equal / zero */

loc_0050ADCD: ;
    if (CMP_BE(MEM16(edi + 0x38), 1)) goto loc_0050AE2C; /* jbe: below or equal (unsigned <=) */

loc_0050ADD4: ;
    MEM32(ebp + 8) = edx;
    edx = 0; /* xor self */
    SET_LO16(edx, LO16(eax));
    SET_LO16(edx, LO16(edx) >> 1);
    ebx = esi;
    MEM32(ebp + 0x14) = edx;
    edx = ZX16(MEM16(edi + 0x38));
    edx = (uint32_t)((int32_t)edx * (int32_t)eax);
    edx = edx << 1;
    PUSH32(esp, edx);
    PUSH32(esp, esi);
    eax = ebp + 0x14;
    PUSH32(esp, eax);
    PUSH32(esp, ecx);
    PUSH32(esp, 0); sub_0050C8AB(); /* call 0x0050C8AB */

loc_0050ADF9: ;
    if (TEST_NZ(eax, eax)) goto loc_0050AE41; /* jne: not equal / not zero */

loc_0050ADFD: ;
    if (CMP_BE(MEM16(ebp + 0x14), LO16(eax))) goto loc_0050AE41; /* jbe: below or equal (unsigned <=) */

loc_0050AE03: ;
    eax = ZX16(MEM16(ebp + 0x14));
    PUSH32(esp, 2);
    MEM32(ebp + 0xC) = eax;
    POP32(esp, eax);

loc_0050AE0D: ;
    SET_LO16(ecx, MEM16(esi));
    edx = MEM32(ebp + 8);
    MEM32(ebp + 8) = MEM32(ebp + 8) + eax;
    esi = esi + eax;
    MEM16(ebx) = LO16(ecx);
    SET_LO16(ecx, MEM16(esi));
    ebx = ebx + eax;
    esi = esi + eax;
    MEM32(ebp + 0xC) = MEM32(ebp + 0xC) - 1;
    MEM16(edx) = LO16(ecx);
    if ((MEM32(ebp + 0xC) != 0)) goto loc_0050AE0D; /* jne: not equal / not zero */

loc_0050AE2A: ;
    goto loc_0050AE41;

loc_0050AE2C: ;
    edx = ZX16(MEM16(edi + 0x38));
    edx = (uint32_t)((int32_t)edx * (int32_t)eax);
    edx = edx << 1;
    PUSH32(esp, edx);
    PUSH32(esp, esi);
    eax = ebp + 0x14;
    PUSH32(esp, eax);
    PUSH32(esp, ecx);
    PUSH32(esp, 0); sub_0050C8AB(); /* call 0x0050C8AB */

loc_0050AE41: ;
    eax = ZX16(MEM16(ebp + 0x14));
    MEM32(edi + 0x154) = MEM32(edi + 0x154) + eax;
    POP32(esp, ebx);
    g_seh_ebp = ebp; sub_0050AE50(); return; /* tail jmp 0x0050AE50 */

}

/**
 * sub_0050AE56
 * Original: 0x0050AE56 - 0x0050B188 (818 bytes, 219 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0050AE56(void)
{
    uint32_t ebp;
    int _flags = 0; /* fallback flag var */

loc_0050AE56: ;
    PUSH32(esp, ebp);
    ebp = esp;
    PUSH32(esp, ecx);
    PUSH32(esp, ecx);
    PUSH32(esp, ebx);
    ebx = MEM32(ebp + 0x10);
    edx = 0; /* xor self */
    (void)0; /* cmp ebx, edx - flags set for next jcc */
    PUSH32(esp, esi);
    PUSH32(esp, edi);
    MEM32(ebp + -8) = 0x80;
    MEM32(ebp + -4) = edx;
    if (CMP_EQ(ebx, edx)) goto loc_0050B16A; /* je: equal / zero */

loc_0050AE75: ;
    ecx = MEM32(ebp + 8);
    if (CMP_EQ(ecx, edx)) goto loc_0050B173; /* je: equal / zero */

loc_0050AE80: ;
    eax = MEM32(ebp + 0xC);
    if (CMP_EQ(eax, edx)) goto loc_0050B16A; /* je: equal / zero */

loc_0050AE8B: ;
    MEM32(ecx) = edx;
    MEM32(eax) = edx;

loc_0050AE8F: ;
    eax = ZX8(MEM8(ebx + 0x141));
    eax--;
    if ((eax == 0)) goto loc_0050AF29; /* je: equal / zero */

loc_0050AE9D: ;
    if (CMP_NE(MEM32(ebx + 0xD8), 0)) goto loc_0050B0FA; /* jne: not equal / not zero */

loc_0050AEAA: ;
    if (CMP_NE(MEM32(ebx + 0xD0), 0)) goto loc_0050AEE6; /* jne: not equal / not zero */

loc_0050AEB3: ;
    edi = ebx + 0xC8;
    eax = MEM32(edi);
    esi = ebx;
    MEM32(ebp + 0x10) = eax;
    MEM32(edi) = 8;
    PUSH32(esp, 0); sub_0050A5E9(); /* call 0x0050A5E9 */

loc_0050AECB: ;
    if (CMP_EQ(eax, 0x12)) goto loc_0050B0B5; /* je: equal / zero */

loc_0050AED4: ;
    (void)0; /* cmp MEM8(ebx + 0x141), 1 - flags set for next jcc */
    ecx = MEM32(ebp + 0x10);
    MEM32(edi) = ecx;
    if (CMP_EQ(MEM8(ebx + 0x141), 1)) goto loc_0050AE8F; /* je: equal / zero */

loc_0050AEE2: ;
    if (TEST_NZ(eax, eax)) goto loc_0050AF21; /* jne: not equal / not zero */

loc_0050AEE6: ;
    if (CMP_NE(MEM32(ebx + 0xD8), 0)) goto loc_0050B0FA; /* jne: not equal / not zero */

loc_0050AEF3: ;
    ecx = ebx + 0xD0;
    eax = MEM32(ecx);
    if (TEST_Z(eax, eax)) goto loc_0050AF21; /* je: equal / zero */

loc_0050AEFF: ;
    edx = MEM32(ebx + 0x34);
    eax = eax - edx;
    MEM32(ecx) = eax;
    MEM32(ebx + 0xD8) = edx;
    goto loc_0050B0F0;

loc_0050AF11: ;
    ebx = ebx + 0xD4;
    if (CMP_EQ(MEM32(ebx), eax)) goto loc_0050B0BB; /* je: equal / zero */

loc_0050AF1F: ;
    MEM32(ebx) = eax;

loc_0050AF21: ;
    PUSH32(esp, 3);
    POP32(esp, eax);
    goto loc_0050B181;

loc_0050AF29: ;
    eax = ZX8(MEM8(ebx + 0x140));
    eax--;
    if ((eax == 0)) goto loc_0050B038; /* je: equal / zero */

loc_0050AF37: ;
    eax--;
    if ((eax == 0)) goto loc_0050B011; /* je: equal / zero */

loc_0050AF3E: ;
    eax--;
    if ((eax == 0)) goto loc_0050AF85; /* je: equal / zero */

loc_0050AF41: ;
    eax--;
    if ((eax != 0)) goto loc_0050AF21; /* jne: not equal / not zero */

loc_0050AF44: ;
    edi = MEM32(ebx + 0xC8);
    MEM32(ebx + 0xD0) = MEM32(ebx + 0xD0) & 0;
    esi = ebx;
    MEM8(ebx + 0x140) = 0;
    MEM8(ebx + 0x141) = 0;
    MEM32(ebx + 0xC8) = 8;
    PUSH32(esp, 0); sub_0050A5E9(); /* call 0x0050A5E9 */

loc_0050AF70: ;
    if (CMP_EQ(eax, 0x12)) goto loc_0050B0B5; /* je: equal / zero */

loc_0050AF79: ;
    (void)0; /* test eax, eax - flags set for next jcc */
    MEM32(ebx + 0xC8) = edi;
    if (TEST_Z(eax, eax)) goto loc_0050AF29; /* je: equal / zero */

loc_0050AF83: ;
    goto loc_0050AF21;

loc_0050AF85: ;
    SET_LO16(eax, MEM16(ebx + 0x13E));
    if (CMP_BE(LO16(eax), MEM16(ebx + 0x13C))) goto loc_0050B005; /* jbe: below or equal (unsigned <=) */

loc_0050AF95: ;
    eax = ebp + -4;
    PUSH32(esp, eax);
    edi = 0; /* xor self */
    edi++;
    PUSH32(esp, edi);
    esi = ebx + 0xCC;
    PUSH32(esp, MEM32(esi));
    PUSH32(esp, MEM32(ebx + 0xC4));
    PUSH32(esp, ebx);
    PUSH32(esp, 0); sub_0050A4BE(); /* call 0x0050A4BE */

loc_0050AFB1: ;
    eax = MEM32(ebx + 0x34);
    MEM32(esi) = MEM32(esi) + 1;
    MEM32(ebx + 0xD8) = eax;
    eax = MEM32(ebp + -4);
    MEM32(ebx + 0xD4) = edi;
    SET_LO8(eax, MEM8(eax));
    MEM8(ebx + 0x142) = LO8(eax);
    SET_LO16(eax, ZX8(LO8(eax)));
    (void)0; /* test LO16(eax), LO16(eax) - flags set for next jcc */
    ecx = ebx + 0x144;
    MEM16(ecx) = LO16(eax);
    if (CMP_BE(LO16(eax) & LO16(eax), 0)) goto loc_0050AFE9; /* jbe: below or equal (unsigned <=) */

loc_0050AFDF: ;
    SET_LO16(eax, LO16(eax) - MEM16(ebx + 0xD8));
    MEM16(ecx) = LO16(eax);

loc_0050AFE9: ;
    SET_LO16(eax, ZX8(MEM8(ebx + 0x142)));
    eax++;
    MEM16(ebx + 0x13C) = MEM16(ebx + 0x13C) + LO16(eax);

loc_0050AFF9: ;
    MEM8(ebx + 0x140) = 2;
    goto loc_0050AF29;

loc_0050B005: ;
    MEM8(ebx + 0x140) = 4;
    goto loc_0050AF29;

loc_0050B011: ;
    ecx = 0; /* xor self */
    if (CMP_NE(MEM32(ebx + 0xD8), ecx)) goto loc_0050B0FA; /* jne: not equal / not zero */

loc_0050B01F: ;
    if (CMP_NE(MEM16(ebx + 0x144), LO16(ecx))) goto loc_0050B0C2; /* jne: not equal / not zero */

loc_0050B02C: ;
    MEM8(ebx + 0x140) = 3;
    goto loc_0050AF29;

loc_0050B038: ;
    eax = ebp + -4;
    PUSH32(esp, eax);
    edi = 0; /* xor self */
    edi++;
    PUSH32(esp, edi);
    esi = ebx + 0xCC;
    PUSH32(esp, MEM32(esi));
    PUSH32(esp, MEM32(ebx + 0xC4));
    PUSH32(esp, ebx);
    PUSH32(esp, 0); sub_0050A4BE(); /* call 0x0050A4BE */

loc_0050B054: ;
    eax = MEM32(ebx + 0x34);
    MEM32(esi) = MEM32(esi) + 1;
    MEM32(ebx + 0xD8) = eax;
    eax = MEM32(ebp + -4);
    MEM32(ebx + 0xD4) = edi;
    SET_LO8(eax, MEM8(eax));
    MEM8(ebx + 0x142) = LO8(eax);
    SET_LO16(eax, ZX8(LO8(eax)));
    (void)0; /* test LO16(eax), LO16(eax) - flags set for next jcc */
    ecx = ebx + 0x144;
    MEM16(ecx) = LO16(eax);
    if (CMP_BE(LO16(eax) & LO16(eax), 0)) goto loc_0050B08C; /* jbe: below or equal (unsigned <=) */

loc_0050B082: ;
    SET_LO16(eax, LO16(eax) - MEM16(ebx + 0xD8));
    MEM16(ecx) = LO16(eax);

loc_0050B08C: ;
    SET_LO16(eax, ZX8(MEM8(ebx + 0x142)));
    SET_LO16(ecx, MEM16(ebx + 0x13E));
    if (CMP_BE(LO16(ecx), LO16(eax))) goto loc_0050B0A3; /* jbe: below or equal (unsigned <=) */

loc_0050B0A0: ;
    eax++;
    goto loc_0050B0A9;

loc_0050B0A3: ;
    if ((eax != 0)) goto loc_0050AFF9; /* jne: not equal / not zero */

loc_0050B0A9: ;
    MEM16(ebx + 0x13C) = LO16(eax);
    goto loc_0050AFF9;

loc_0050B0B5: ;
    eax = MEM32(ebp + 0xC);
    MEM32(eax) = MEM32(eax) & 0;

loc_0050B0BB: ;
    eax = 0; /* xor self */
    goto loc_0050B181;

loc_0050B0C2: ;
    if (CMP_NE(MEM32(ebx + 0xD8), ecx)) goto loc_0050B0FA; /* jne: not equal / not zero */

loc_0050B0CA: ;
    SET_LO16(eax, MEM16(ebx + 0x144));
    if (CMP_EQ(LO16(eax), LO16(ecx))) goto loc_0050AF21; /* je: equal / zero */

loc_0050B0DA: ;
    if (CMP_BE(LO16(eax), LO16(ecx))) goto loc_0050B0E7; /* jbe: below or equal (unsigned <=) */

loc_0050B0DC: ;
    SET_LO16(eax, LO16(eax) - MEM16(ebx + 0x34));
    MEM16(ebx + 0x144) = LO16(eax);

loc_0050B0E7: ;
    eax = MEM32(ebx + 0x34);
    MEM32(ebx + 0xD8) = eax;

loc_0050B0F0: ;
    MEM32(ebx + 0xD4) = 1;

loc_0050B0FA: ;
    eax = MEM32(ebx + 0xD8);
    if (CMP_AE(eax, 0x80)) goto loc_0050B10A; /* jae: above or equal (unsigned >=) */

loc_0050B107: ;
    MEM32(ebp + -8) = eax;

loc_0050B10A: ;
    esi = MEM32(ebp + 8);
    PUSH32(esp, esi);
    PUSH32(esp, MEM32(ebp + -8));
    PUSH32(esp, MEM32(ebx + 0xCC));
    PUSH32(esp, MEM32(ebx + 0xC4));
    PUSH32(esp, ebx);
    PUSH32(esp, 0); sub_0050A4BE(); /* call 0x0050A4BE */

loc_0050B123: ;
    ecx = MEM32(ebp + 0xC);
    MEM32(ecx) = eax;
    esi = MEM32(esi);
    ecx = eax;
    eax = MEM32(ebp + 0x14);
    edx = ecx;
    ecx = ecx >> 2;
    edi = eax;
    memcpy((void*)XBOX_PTR(edi), (void*)XBOX_PTR(esi), ecx * 4);
    esi += ecx * 4; edi += ecx * 4; ecx = 0; /* rep movsd */
    ecx = edx;
    ecx = ecx & 3;
    memcpy((void*)XBOX_PTR(edi), (void*)XBOX_PTR(esi), ecx);
    esi += ecx; edi += ecx; ecx = 0; /* rep movsb */
    ecx = MEM32(ebp + 8);
    MEM32(ecx) = eax;
    eax = MEM32(ebp + 0xC);
    ecx = MEM32(eax);
    MEM32(ebx + 0xCC) = MEM32(ebx + 0xCC) + ecx;
    eax = MEM32(eax);
    MEM32(ebx + 0xD8) = MEM32(ebx + 0xD8) - eax;
    eax = 0; /* xor self */
    if (CMP_EQ(MEM32(ebx + 0x150), eax)) goto loc_0050AF11; /* je: equal / zero */

loc_0050B165: ;
    goto loc_0050AF21;

loc_0050B16A: ;
    eax = MEM32(ebp + 8);
    if (CMP_EQ(eax, edx)) goto loc_0050B173; /* je: equal / zero */

loc_0050B171: ;
    MEM32(eax) = edx;

loc_0050B173: ;
    eax = MEM32(ebp + 0xC);
    if (CMP_EQ(eax, edx)) goto loc_0050B17C; /* je: equal / zero */

loc_0050B17A: ;
    MEM32(eax) = edx;

loc_0050B17C: ;
    eax = 0x80070057u;

loc_0050B181: ;
    POP32(esp, edi);
    POP32(esp, esi);
    POP32(esp, ebx);
    esp = ebp;
    POP32(esp, ebp); /* leave */
    esp += 20; return; /* ret 16 */

}

/**
 * sub_0050B188
 * Original: 0x0050B188 - 0x0050B1A0 (24 bytes, 9 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0050B188(void)
{
    uint32_t ebp;
    int _flags = 0; /* fallback flag var */
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_0050B188: ;
    PUSH32(esp, esi);
    esi = MEM32(esp + 8);
    PUSH32(esp, 1);
    PUSH32(esp, esi);
    PUSH32(esp, 0); sub_0050BF39(); /* call 0x0050BF39 */

loc_0050B195: ;
    if (TEST_Z(eax, eax)) { sub_0050B1A0(); return; } /* je: equal / zero */

loc_0050B199: ;
    PUSH32(esp, 3);
    g_seh_ebp = ebp; sub_0050B259(); return; /* tail jmp 0x0050B259 */

}

/**
 * sub_0050B25C
 * Original: 0x0050B25C - 0x0050B295 (57 bytes, 22 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0050B25C(void)
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

loc_0050B25C: ;
    PUSH32(esp, ebp);
    ebp = esp;
    PUSH32(esp, ecx);
    eax = MEM32(ebp + 0xC);
    fp_push((double)SMEM32(ebp + 0xC)); /* fild */
    (void)0; /* test eax, eax - flags set for next jcc */
    PUSH32(esp, esi);
    if (CMP_GE(eax & eax, 0)) goto loc_0050B271; /* jge: greater or equal (signed >=) */

loc_0050B26B: ;
    fp_st1() += fp_top(); fp_pop(); /* fadd */

loc_0050B271: ;
    fp_st1() *= fp_top(); fp_pop(); /* fmul */
    PUSH32(esp, ecx);
    MEMF(esp) = (float)fp_top(); fp_popp(); /* fstp */
    PUSH32(esp, 0); sub_00512881(); /* call 0x00512881 */

loc_0050B280: ;
    ecx = eax;
    eax = MEM32(ebp + 8);
    edx = 0; /* xor self */
    esi = 0x2710;
    { uint64_t _dividend = ((uint64_t)edx << 32) | eax;
      eax = (uint32_t)(_dividend / (uint32_t)esi);
      edx = (uint32_t)(_dividend % (uint32_t)esi); }
    POP32(esp, esi);
    eax = eax + ecx;
    esp = ebp;
    POP32(esp, ebp); /* leave */
    esp += 12; return; /* ret 8 */

    #undef fp_push
    #undef fp_pop
    #undef fp_popp
    #undef fp_top
    #undef fp_st1
}

/**
 * sub_0050B295
 * Original: 0x0050B295 - 0x0050B2A7 (18 bytes, 8 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0050B295(void)
{
    uint32_t ebp;
    int _flags = 0; /* fallback flag var */

loc_0050B295: ;
    PUSH32(esp, ebp);
    ebp = esp;
    PUSH32(esp, ecx);
    MEM32(ebp + -4) = MEM32(ebp + -4) & 0;
    if (CMP_NE(MEM32(ebp + 0x14), 0)) { sub_0050B2A7(); return; } /* jne: not equal / not zero */

loc_0050B2A3: ;
    eax = 0; /* xor self */
    g_seh_ebp = ebp; sub_0050B300(); return; /* tail jmp 0x0050B300 */

}

/**
 * sub_0050B308
 * Original: 0x0050B308 - 0x0050B317 (15 bytes, 8 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0050B308(void)
{
    uint32_t ebp;
    int _flags = 0; /* fallback flag var */

loc_0050B308: ;
    PUSH32(esp, ebp);
    ebp = esp;
    PUSH32(esp, esi);
    esi = MEM32(ebp + 8);
    if (TEST_NZ(esi, esi)) { sub_0050B317(); return; } /* jne: not equal / not zero */

loc_0050B313: ;
    PUSH32(esp, 2);
    g_seh_ebp = ebp; sub_0050B332(); return; /* tail jmp 0x0050B332 */

}

/**
 * sub_0050B3BF
 * Original: 0x0050B3BF - 0x0050B3D4 (21 bytes, 9 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0050B3BF(void)
{
    uint32_t ebp;
    int _flags = 0; /* fallback flag var */

loc_0050B3BF: ;
    PUSH32(esp, ebp);
    ebp = esp;
    esp = esp - 0x1C;
    PUSH32(esp, ebx);
    ebx = MEM32(ebp + 8);
    if (TEST_NZ(ebx, ebx)) { sub_0050B3D4(); return; } /* jne: not equal / not zero */

loc_0050B3CD: ;
    PUSH32(esp, 2);
    g_seh_ebp = ebp; sub_0050B4AA(); return; /* tail jmp 0x0050B4AA */

}

/**
 * sub_0050B4B0
 * Original: 0x0050B4B0 - 0x0050B4C2 (18 bytes, 9 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0050B4B0(void)
{
    uint32_t ebp;
    int _flags = 0; /* fallback flag var */

loc_0050B4B0: ;
    PUSH32(esp, ebp);
    ebp = esp;
    esp = esp - 0x18;
    PUSH32(esp, esi);
    esi = MEM32(ebp + 8);
    if (TEST_NZ(esi, esi)) { sub_0050B4C2(); return; } /* jne: not equal / not zero */

loc_0050B4BE: ;
    PUSH32(esp, 2);
    g_seh_ebp = ebp; sub_0050B4E7(); return; /* tail jmp 0x0050B4E7 */

}

/**
 * sub_0050B569
 * Original: 0x0050B569 - 0x0050B57F (22 bytes, 10 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0050B569(void)
{
    uint32_t ebp;
    int _flags = 0; /* fallback flag var */

loc_0050B569: ;
    PUSH32(esp, ebp);
    ebp = esp;
    esp = esp - 0x2C;
    PUSH32(esp, ebx);
    ebx = MEM32(ebp + 8);
    if (TEST_NZ(ebx, ebx)) { sub_0050B57F(); return; } /* jne: not equal / not zero */

loc_0050B577: ;
    PUSH32(esp, 2);
    POP32(esp, eax);
    g_seh_ebp = ebp; sub_0050B85B(); return; /* tail jmp 0x0050B85B */

}

/**
 * sub_0050B860
 * Original: 0x0050B860 - 0x0050B874 (20 bytes, 10 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0050B860(void)
{
    uint32_t ebp;
    int _flags = 0; /* fallback flag var */

loc_0050B860: ;
    PUSH32(esp, ebp);
    ebp = esp;
    PUSH32(esp, ecx);
    PUSH32(esp, ebx);
    ebx = MEM32(ebp + 8);
    if (TEST_NZ(ebx, ebx)) { sub_0050B874(); return; } /* jne: not equal / not zero */

loc_0050B86C: ;
    PUSH32(esp, 2);
    POP32(esp, eax);
    g_seh_ebp = ebp; sub_0050BA61(); return; /* tail jmp 0x0050BA61 */

}

/**
 * sub_0050BA66
 * Original: 0x0050BA66 - 0x0050BA79 (19 bytes, 9 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0050BA66(void)
{
    uint32_t ebp;
    int _flags = 0; /* fallback flag var */

loc_0050BA66: ;
    PUSH32(esp, ebp);
    ebp = esp;
    PUSH32(esp, esi);
    esi = MEM32(ebp + 8);
    if (TEST_NZ(esi, esi)) { sub_0050BA79(); return; } /* jne: not equal / not zero */

loc_0050BA71: ;
    PUSH32(esp, 2);
    POP32(esp, eax);
    g_seh_ebp = ebp; sub_0050BB01(); return; /* tail jmp 0x0050BB01 */

}

/**
 * sub_0050BB06
 * Original: 0x0050BB06 - 0x0050BB1C (22 bytes, 10 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0050BB06(void)
{
    uint32_t ebp;
    int _flags = 0; /* fallback flag var */

loc_0050BB06: ;
    PUSH32(esp, ebp);
    ebp = esp;
    esp = esp - 0x24;
    PUSH32(esp, esi);
    esi = MEM32(ebp + 8);
    if (TEST_NZ(esi, esi)) { sub_0050BB1C(); return; } /* jne: not equal / not zero */

loc_0050BB14: ;
    PUSH32(esp, 2);
    POP32(esp, eax);
    g_seh_ebp = ebp; sub_0050BBA7(); return; /* tail jmp 0x0050BBA7 */

}

/**
 * sub_0050BE58
 * Original: 0x0050BE58 - 0x0050BE6B (19 bytes, 10 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0050BE58(void)
{
    uint32_t ebp;
    int _flags = 0; /* fallback flag var */

loc_0050BE58: ;
    PUSH32(esp, ebp);
    ebp = esp;
    esp = esp - 0xC;
    PUSH32(esp, ebx);
    ebx = MEM32(ebp + 8);
    if (TEST_NZ(ebx, ebx)) { sub_0050BE6B(); return; } /* jne: not equal / not zero */

loc_0050BE66: ;
    PUSH32(esp, 2);
    POP32(esp, eax);
    g_seh_ebp = ebp; sub_0050BEE4(); return; /* tail jmp 0x0050BEE4 */

}

/**
 * sub_0050BF39
 * Original: 0x0050BF39 - 0x0050BF52 (25 bytes, 12 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0050BF39(void)
{
    uint32_t ebp;
    int _flags = 0; /* fallback flag var */

loc_0050BF39: ;
    PUSH32(esp, ebp);
    ebp = esp;
    esp = esp - 0x18;
    PUSH32(esp, ebx);
    ebx = MEM32(ebp + 8);
    PUSH32(esp, esi);
    esi = 0; /* xor self */
    if (CMP_NE(ebx, esi)) { sub_0050BF52(); return; } /* jne: not equal / not zero */

loc_0050BF4A: ;
    PUSH32(esp, 2);
    POP32(esp, eax);
    g_seh_ebp = ebp; sub_0050C09C(); return; /* tail jmp 0x0050C09C */

}

/**
 * sub_0050C0A2
 * Original: 0x0050C0A2 - 0x0050C0B5 (19 bytes, 9 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0050C0A2(void)
{
    uint32_t ebp;
    int _flags = 0; /* fallback flag var */

loc_0050C0A2: ;
    PUSH32(esp, ebp);
    ebp = esp;
    PUSH32(esp, esi);
    esi = MEM32(ebp + 8);
    if (TEST_NZ(esi, esi)) { sub_0050C0B5(); return; } /* jne: not equal / not zero */

loc_0050C0AD: ;
    PUSH32(esp, 2);
    POP32(esp, eax);
    g_seh_ebp = ebp; sub_0050C4A5(); return; /* tail jmp 0x0050C4A5 */

}

/**
 * sub_0050C4AA
 * Original: 0x0050C4AA - 0x0050C4C1 (23 bytes, 10 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0050C4AA(void)
{
    uint32_t ebp;
    int _flags = 0; /* fallback flag var */

loc_0050C4AA: ;
    PUSH32(esp, ebp);
    ebp = esp;
    PUSH32(esp, ecx);
    MEM32(ebp + -4) = MEM32(ebp + -4) & 0;
    PUSH32(esp, esi);
    esi = MEM32(ebp + 8);
    if (TEST_NZ(esi, esi)) { sub_0050C4C1(); return; } /* jne: not equal / not zero */

loc_0050C4BA: ;
    PUSH32(esp, 2);
    g_seh_ebp = ebp; sub_0050C79E(); return; /* tail jmp 0x0050C79E */

}

/**
 * sub_0050C7A4
 * Original: 0x0050C7A4 - 0x0050C7CC (40 bytes, 17 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0050C7A4(void)
{
    uint32_t ebp;
    int _flags = 0; /* fallback flag var */

loc_0050C7A4: ;
    PUSH32(esp, ebp);
    ebp = esp;
    PUSH32(esp, esi);
    PUSH32(esp, 4);
    PUSH32(esp, 0); sub_00471918(); /* call 0x00471918 */

loc_0050C7AF: ;
    esi = eax;
    (void)0; /* test esi, esi - flags set for next jcc */
    POP32(esp, ecx);
    if (TEST_Z(esi, esi)) goto loc_0050C7C5; /* je: equal / zero */

loc_0050C7B6: ;
    PUSH32(esp, 0);
    PUSH32(esp, 0);
    PUSH32(esp, 0); sub_0050C8F9(); /* call 0x0050C8F9 */

loc_0050C7BF: ;
    (void)0; /* test eax, eax - flags set for next jcc */
    MEM32(esi) = eax;
    if (TEST_NZ(eax, eax)) { sub_0050C7CC(); return; } /* jne: not equal / not zero */

loc_0050C7C5: ;
    eax = 0x8007000Eu;
    g_seh_ebp = ebp; sub_0050C819(); return; /* tail jmp 0x0050C819 */

}

/**
 * sub_0050C81E
 * Original: 0x0050C81E - 0x0050C84A (44 bytes, 20 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0050C81E(void)
{
    int _flags = 0; /* fallback flag var */

loc_0050C81E: ;
    PUSH32(esp, esi);
    PUSH32(esp, edi);
    edi = MEM32(esp + 0xC);
    esi = MEM32(edi);
    if (TEST_Z(esi, esi)) goto loc_0050C843; /* je: equal / zero */

loc_0050C82A: ;
    eax = MEM32(esi);
    if (TEST_Z(eax, eax)) goto loc_0050C839; /* je: equal / zero */

loc_0050C830: ;
    PUSH32(esp, eax);
    PUSH32(esp, 0); sub_0050C8D5(); /* call 0x0050C8D5 */

loc_0050C836: ;
    MEM32(esi) = MEM32(esi) & 0;

loc_0050C839: ;
    PUSH32(esp, esi);
    PUSH32(esp, 0); sub_0046FB7D(); /* call 0x0046FB7D */

loc_0050C83F: ;
    MEM32(edi) = MEM32(edi) & 0;
    POP32(esp, ecx);

loc_0050C843: ;
    POP32(esp, edi);
    eax = 0; /* xor self */
    POP32(esp, esi);
    esp += 8; return; /* ret 4 */

}

/**
 * sub_0050C84A
 * Original: 0x0050C84A - 0x0050C860 (22 bytes, 9 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0050C84A(void)
{
    uint32_t ebp;
    int _flags = 0; /* fallback flag var */
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_0050C84A: ;
    eax = MEM32(esp + 4);
    if (TEST_Z(eax, eax)) { sub_0050C860(); return; } /* je: equal / zero */

loc_0050C852: ;
    eax = MEM32(eax);
    if (TEST_Z(eax, eax)) { sub_0050C860(); return; } /* je: equal / zero */

loc_0050C858: ;
    PUSH32(esp, eax);
    PUSH32(esp, 0); sub_0050CB8E(); /* call 0x0050CB8E */

loc_0050C85E: ;
    g_seh_ebp = ebp; sub_0050C865(); return; /* tail jmp 0x0050C865 */

}

/**
 * sub_0050C868
 * Original: 0x0050C868 - 0x0050C87E (22 bytes, 9 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0050C868(void)
{
    uint32_t ebp;
    int _flags = 0; /* fallback flag var */
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_0050C868: ;
    eax = MEM32(esp + 4);
    if (TEST_Z(eax, eax)) { sub_0050C87E(); return; } /* je: equal / zero */

loc_0050C870: ;
    eax = MEM32(eax);
    if (TEST_Z(eax, eax)) { sub_0050C87E(); return; } /* je: equal / zero */

loc_0050C876: ;
    PUSH32(esp, eax);
    PUSH32(esp, 0); sub_0050CBC2(); /* call 0x0050CBC2 */

loc_0050C87C: ;
    g_seh_ebp = ebp; sub_0050C883(); return; /* tail jmp 0x0050C883 */

}

/**
 * sub_0050C886
 * Original: 0x0050C886 - 0x0050C8A2 (28 bytes, 13 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0050C886(void)
{
    uint32_t ebp;
    int _flags = 0; /* fallback flag var */

loc_0050C886: ;
    PUSH32(esp, ebp);
    ebp = esp;
    eax = MEM32(ebp + 8);
    if (TEST_Z(eax, eax)) { sub_0050C8A2(); return; } /* je: equal / zero */

loc_0050C890: ;
    eax = MEM32(eax);
    if (TEST_Z(eax, eax)) { sub_0050C8A2(); return; } /* je: equal / zero */

loc_0050C896: ;
    ecx = ebp + 0xA;
    PUSH32(esp, ecx);
    PUSH32(esp, eax);
    PUSH32(esp, 0); sub_0050CD9C(); /* call 0x0050CD9C */

loc_0050C8A0: ;
    g_seh_ebp = ebp; sub_0050C8A7(); return; /* tail jmp 0x0050C8A7 */

}

/**
 * sub_0050C8AB
 * Original: 0x0050C8AB - 0x0050C8CD (34 bytes, 12 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0050C8AB(void)
{
    uint32_t ebp;
    int _flags = 0; /* fallback flag var */
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_0050C8AB: ;
    eax = MEM32(esp + 4);
    if (TEST_Z(eax, eax)) { sub_0050C8CD(); return; } /* je: equal / zero */

loc_0050C8B3: ;
    eax = MEM32(eax);
    if (TEST_Z(eax, eax)) { sub_0050C8CD(); return; } /* je: equal / zero */

loc_0050C8B9: ;
    PUSH32(esp, MEM32(esp + 0x10));
    PUSH32(esp, MEM32(esp + 0x10));
    PUSH32(esp, MEM32(esp + 0x10));
    PUSH32(esp, eax);
    PUSH32(esp, 0); sub_0050CF34(); /* call 0x0050CF34 */

loc_0050C8CB: ;
    g_seh_ebp = ebp; sub_0050C8D2(); return; /* tail jmp 0x0050C8D2 */

}

/**
 * sub_0050C8D5
 * Original: 0x0050C8D5 - 0x0050C8F9 (36 bytes, 13 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0050C8D5(void)
{

loc_0050C8D5: ;
    PUSH32(esp, esi);
    PUSH32(esp, 0);
    PUSH32(esp, 0);
    PUSH32(esp, 2);
    PUSH32(esp, 0); sub_0050D861(); /* call 0x0050D861 */

loc_0050C8E1: ;
    esi = MEM32(esp + 8);
    PUSH32(esp, MEM32(esi));
    PUSH32(esp, 0); sub_0050DB1E(); /* call 0x0050DB1E */

loc_0050C8EC: ;
    MEM32(esi) = MEM32(esi) & 0;
    PUSH32(esp, esi);
    PUSH32(esp, 0); sub_0050D871(); /* call 0x0050D871 */

loc_0050C8F5: ;
    POP32(esp, esi);
    esp += 8; return; /* ret 4 */

}

/**
 * sub_0050C8F9
 * Original: 0x0050C8F9 - 0x0050C9B2 (185 bytes, 48 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0050C8F9(void)
{
    int _flags = 0; /* fallback flag var */

loc_0050C8F9: ;
    PUSH32(esp, esi);
    PUSH32(esp, MEM32(esp + 0xC));
    esi = 0; /* xor self */
    PUSH32(esp, MEM32(esp + 0xC));
    PUSH32(esp, esi);
    PUSH32(esp, 0); sub_0050D861(); /* call 0x0050D861 */

loc_0050C90A: ;
    PUSH32(esp, 0x1A0);
    PUSH32(esp, 0); sub_0050D864(); /* call 0x0050D864 */

loc_0050C914: ;
    edx = eax;
    eax = 0; /* xor self */
    if (CMP_EQ(edx, esi)) goto loc_0050C9AE; /* je: equal / zero */

loc_0050C920: ;
    PUSH32(esp, edi);
    PUSH32(esp, 0x4E);
    POP32(esp, ecx);
    edi = edx + 0x30;
    MEM32(edx) = esi;
    MEM32(edx + 4) = esi;
    MEM16(edx + 8) = LO16(esi);
    MEM32(edx + 0xC) = esi;
    MEM16(edx + 0x10) = LO16(esi);
    MEM32(edx + 0x14) = esi;
    MEM32(edx + 0x18) = esi;
    MEM32(edx + 0x1C) = esi;
    MEM32(edx + 0x20) = esi;
    MEM16(edx + 0x24) = LO16(esi);
    MEM16(edx + 0x26) = LO16(esi);
    MEM32(edx + 0x28) = esi;
    MEM32(edx + 0x2C) = 1;
    { uint32_t _i; for (_i = 0; _i < ecx; _i++) MEM32(edi + _i*4) = eax; }
    edi += ecx * 4; ecx = 0; /* rep stosd */
    MEM32(edx + 0x168) = esi;
    MEM32(edx + 0x16C) = esi;
    MEM32(edx + 0x170) = esi;
    MEM32(edx + 0x174) = esi;
    MEM32(edx + 0x178) = esi;
    MEM32(edx + 0x17C) = esi;
    MEM32(edx + 0x180) = esi;
    MEM32(edx + 0x184) = esi;
    MEM32(edx + 0x188) = esi;
    MEM32(edx + 0x18C) = esi;
    MEM32(edx + 0x190) = esi;
    MEM32(edx + 0x194) = esi;
    MEM32(edx + 0x198) = esi;
    MEM32(edx + 0x19C) = esi;
    eax = edx;
    POP32(esp, edi);

loc_0050C9AE: ;
    POP32(esp, esi);
    esp += 12; return; /* ret 8 */

}

/**
 * sub_0050C9B2
 * Original: 0x0050C9B2 - 0x0050CB8E (476 bytes, 134 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0050C9B2(void)
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

loc_0050C9B2: ;
    PUSH32(esp, ebp);
    ebp = esp;
    esp = esp - 0x10;
    PUSH32(esp, ebx);
    PUSH32(esp, esi);
    esi = MEM32(ebp + 8);
    SET_LO16(ecx, MEM16(esi + 0x31C));
    eax = ZX16(MEM16(esi + 0x58));
    ecx = ZX16(LO16(ecx));
    edx = ecx;
    edx = (uint32_t)((int32_t)edx * (int32_t)eax);
    PUSH32(esp, edi);
    edi = MEM32(esi + 0x3B4);
    ebx = 0; /* xor self */
    (void)0; /* cmp eax, ebx - flags set for next jcc */
    edx = edi + edx * 2;
    MEM32(ebp + -16) = edx;
    MEM32(ebp + -8) = ebx;
    if (CMP_LE(eax, ebx)) goto loc_0050CB87; /* jle: less or equal (signed <=) */

loc_0050C9EA: ;
    MEM32(ebp + -4) = ecx;
    MEM32(ebp + -4) = MEM32(ebp + -4) >> 4;
    MEM32(ebp + 8) = ebx;

loc_0050C9F4: ;
    ecx = MEM32(esi + 0x3A0);
    fp_push(0.0); /* fldz */
    edi = MEM32(ebp + 8);
    edi = (uint32_t)((int32_t)edi * (int32_t)0x70);
    ecx = ecx + edi;
    MEM32(ecx) = ebx;
    eax = MEM32(esi + 0x350);
    eax = (uint32_t)((int32_t)eax * (int32_t)MEM32(ebp + 8));
    edx = MEM32(esi + 0x3A8);
    eax = edx + eax * 4;
    MEM32(ecx + 4) = eax;
    MEM32(ecx + 0x14) = ebx;
    MEM32(ecx + 0x18) = ebx;
    MEM32(ecx + 0x1C) = ebx;
    eax = MEM32(esi + 0x328);
    eax = eax - MEM32(esi + 0x324);
    MEM32(ecx + 0x24) = ebx;
    MEM32(ecx + 0x20) = eax;
    MEM32(ecx + 0x28) = ebx;
    eax = MEM32(esi + 0x60);
    eax = (uint32_t)((int32_t)eax * (int32_t)MEM32(ebp + 8));
    edx = MEM32(esi + 0x3A4);
    eax = edx + eax * 4;
    MEM32(ecx + 0x30) = eax;
    MEM32(ecx + 0x34) = ebx;
    SET_LO16(eax, MEM16(esi + 0x9C));
    MEM16(ecx + 0x38) = LO16(eax);
    eax = MEM32(ecx + 0x30);
    MEM32(ebp + -12) = eax;
    eax = MEM32(esi + 0x60);
    edx = ((int32_t)eax < 0) ? 0xFFFFFFFF : 0; /* cdq */
    eax = eax - edx;
    edx = MEM32(ebp + -12);
    eax = (uint32_t)((int32_t)eax >> 1);
    eax = edx + eax * 4;
    MEM32(ecx + 0x3C) = eax;
    edx = MEM32(esi + 0x3B4);
    eax = MEM32(ebp + 8);
    edx = edx + eax * 2;
    MEMF(ecx + 0x6C) = (float)fp_top(); fp_popp(); /* fstp */
    MEM32(ecx + 0x40) = edx;
    edx = MEM32(ebp + -4);
    edx = (uint32_t)((int32_t)edx * (int32_t)eax);
    eax = MEM32(ebp + -16);
    eax = eax + edx * 2;
    MEM32(ecx + 0x44) = eax;
    eax = MEM32(ecx + 0x40);
    MEM32(ecx + 0x48) = eax;
    eax = MEM32(ebp + -12);
    MEM32(ecx + 0x4C) = ebx;
    MEM32(ecx + 0x50) = ebx;
    MEM32(ecx + 0x54) = ebx;
    MEM32(ecx + 0x58) = ebx;
    MEM32(ecx + 0x5C) = ebx;
    MEM32(ecx + 0x60) = eax;
    if (CMP_NE(MEM32(esi + 0x334), ebx)) goto loc_0050CADB; /* jne: not equal / not zero */

loc_0050CAB6: ;
    eax = MEM32(esi + 0x60);
    eax = (uint32_t)((int32_t)eax * (int32_t)MEM32(ebp + 8));
    edx = MEM32(esi + 0x3E4);
    eax = edx + eax * 4;
    MEM32(ecx + 0x2C) = eax;
    eax = MEM32(esi + 0x60);
    eax = (uint32_t)((int32_t)eax * (int32_t)MEM32(ebp + 8));
    edx = MEM32(esi + 0x3E4);
    eax = edx + eax * 4;
    goto loc_0050CAF2;

loc_0050CADB: ;
    eax = MEM32(esi + 0x3A0);
    eax = MEM32(edi + eax + 4);
    MEM32(ecx + 0x2C) = eax;
    eax = MEM32(esi + 0x3A0);
    eax = MEM32(edi + eax + 4);

loc_0050CAF2: ;
    MEM32(ecx + 0x68) = eax;
    eax = MEM32(ebp + 8);
    MEM32(ecx + 8) = ebx;
    MEM32(ecx + 0xC) = ebx;
    MEM32(ecx + 0x10) = ebx;
    MEM32(ecx + 0x64) = ebx;
    ecx = MEM32(esi + 0x350);
    edx = MEM32(esi + 0x3A0);
    ecx = (uint32_t)((int32_t)ecx * (int32_t)eax);
    ecx = ecx + MEM32(esi + 0x3D0);
    MEM32(edi + edx + 8) = ecx;
    ecx = MEM32(esi + 0x350);
    edx = MEM32(esi + 0x3D4);
    ecx = (uint32_t)((int32_t)ecx * (int32_t)eax);
    ecx = edx + ecx * 4;
    edx = MEM32(esi + 0x3A0);
    MEM32(edi + edx + 0xC) = ecx;
    ecx = MEM32(esi + 0x350);
    edx = MEM32(esi + 0x3D8);
    ecx = (uint32_t)((int32_t)ecx * (int32_t)eax);
    ecx = edx + ecx * 4;
    edx = MEM32(esi + 0x3A0);
    MEM32(edi + edx + 0x10) = ecx;
    ecx = MEM32(esi + 0x350);
    ecx = (uint32_t)((int32_t)ecx * (int32_t)eax);
    eax = MEM32(esi + 0x3DC);
    MEM32(ebp + -8) = MEM32(ebp + -8) + 1;
    eax = eax + ecx * 4;
    ecx = MEM32(esi + 0x3A0);
    MEM32(edi + ecx + 0x64) = eax;
    eax = (uint32_t)(int32_t)SMEM16(ebp + -8);
    ecx = ZX16(MEM16(esi + 0x58));
    (void)0; /* cmp eax, ecx - flags set for next jcc */
    MEM32(ebp + 8) = eax;
    if (CMP_L(eax, ecx)) goto loc_0050C9F4; /* jl: less (signed <) */

loc_0050CB87: ;
    POP32(esp, edi);
    POP32(esp, esi);
    POP32(esp, ebx);
    esp = ebp;
    POP32(esp, ebp); /* leave */
    esp += 8; return; /* ret 4 */

    #undef fp_push
    #undef fp_pop
    #undef fp_popp
    #undef fp_top
    #undef fp_st1
}

/**
 * sub_0050CB8E
 * Original: 0x0050CB8E - 0x0050CBC2 (52 bytes, 18 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0050CB8E(void)
{
    int _flags = 0; /* fallback flag var */

loc_0050CB8E: ;
    PUSH32(esp, esi);
    esi = MEM32(esp + 8);
    if (TEST_Z(esi, esi)) goto loc_0050CBBC; /* je: equal / zero */

loc_0050CB97: ;
    PUSH32(esp, edi);
    edi = MEM32(esi);
    eax = esi + 0x30;
    PUSH32(esp, eax);
    PUSH32(esp, 0); sub_0050F534(); /* call 0x0050F534 */

loc_0050CBA3: ;
    MEM32(esi + 0x3C) = MEM32(esi + 0x3C) & 0;
    if (CMP_NE(MEM32(edi + 0x48), 5)) goto loc_0050CBB4; /* jne: not equal / not zero */

loc_0050CBAD: ;
    MEM32(edi + 0x48) = 1;

loc_0050CBB4: ;
    MEM32(edi + 4) = 0xFFFFFFFEu;
    POP32(esp, edi);

loc_0050CBBC: ;
    eax = 0; /* xor self */
    POP32(esp, esi);
    esp += 8; return; /* ret 4 */

}

/**
 * sub_0050CBC2
 * Original: 0x0050CBC2 - 0x0050CD9C (474 bytes, 173 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0050CBC2(void)
{
    uint32_t ebp;
    int _flags = 0; /* fallback flag var */

loc_0050CBC2: ;
    PUSH32(esp, ebp);
    ebp = esp;
    PUSH32(esp, ecx);
    PUSH32(esp, ecx);
    PUSH32(esp, ebx);
    PUSH32(esp, esi);
    esi = MEM32(ebp + 8);
    eax = MEM32(esi);
    PUSH32(esp, edi);
    edi = 0; /* xor self */
    MEM32(esi + 0x14) = edi;
    MEM32(esi + 4) = edi;
    MEM16(esi + 8) = 1;
    (void)0; /* cmp MEM32(eax + 0x64), edi - flags set for next jcc */
    MEM32(ebp + -4) = edi;
    if (CMP_EQ(MEM32(eax + 0x64), edi)) goto loc_0050CC9E; /* je: equal / zero */

loc_0050CBE9: ;
    if (CMP_NE(MEM32(esi + 0x3C), edi)) goto loc_0050CC17; /* jne: not equal / not zero */

loc_0050CBEE: ;
    ebx = esi + 0x30;

loc_0050CBF1: ;
    PUSH32(esp, ebx);
    PUSH32(esp, 0); sub_0050F534(); /* call 0x0050F534 */

loc_0050CBF7: ;
    eax = ebp + 8;
    PUSH32(esp, eax);
    PUSH32(esp, ebx);
    PUSH32(esp, 0); sub_0050F54D(); /* call 0x0050F54D */

loc_0050CC01: ;
    if (CMP_L(eax, edi)) goto loc_0050CD95; /* jl: less (signed <) */

loc_0050CC09: ;
    if (CMP_NE(MEM32(esi + 0x28), edi)) goto loc_0050CD0B; /* jne: not equal / not zero */

loc_0050CC12: ;
    if (CMP_EQ(MEM32(esi + 0x3C), edi)) goto loc_0050CBF1; /* je: equal / zero */

loc_0050CC17: ;
    eax = MEM32(esi + 0x3C);
    edx = MEM32(esi);
    eax = eax >> 0x1C;
    ecx = eax;
    ecx = ecx - MEM32(edx + 4);
    ebx = 0; /* xor self */
    ebx++;
    if (CMP_EQ(ecx, ebx)) goto loc_0050CC37; /* je: equal / zero */

loc_0050CC2B: ;
    ecx = ecx + 0x10;
    if (CMP_EQ(ecx, ebx)) goto loc_0050CC37; /* je: equal / zero */

loc_0050CC32: ;
    MEM32(esi + 4) = ebx;
    goto loc_0050CC3A;

loc_0050CC37: ;
    MEM32(esi + 4) = edi;

loc_0050CC3A: ;
    MEM32(edx + 4) = eax;
    eax = MEM32(esi + 0x3C);
    edx = MEM32(esi);
    ecx = eax;
    ecx = ecx >> 0x18;
    ecx = ecx & 0xF;
    MEM16(esi + 8) = LO16(ecx);
    PUSH32(esp, 0x1D);
    POP32(esp, ecx);
    ecx = ecx - MEM32(edx + 8);
    eax = eax << 8;
    eax = eax >> LO8(ecx);
    (void)0; /* cmp eax, edi - flags set for next jcc */
    MEM32(ebp + -4) = eax;
    if (CMP_NE(eax, edi)) goto loc_0050CC69; /* jne: not equal / not zero */

loc_0050CC60: ;
    eax = esi + 0x30;
    PUSH32(esp, eax);
    PUSH32(esp, 0); sub_0050F6D9(); /* call 0x0050F6D9 */

loc_0050CC69: ;
    MEM32(esi + 0x3C) = edi;

loc_0050CC6C: ;
    if (CMP_EQ(MEM32(esi + 4), edi)) goto loc_0050CD93; /* je: equal / zero */

loc_0050CC75: ;
    ebx = MEM32(esi);
    ecx = ZX16(MEM16(ebx + 0x58));
    eax = MEM32(ebx + 0x31C);
    eax = (uint32_t)((int32_t)eax * (int32_t)ecx);
    edx = eax + eax;
    PUSH32(esp, 8);
    MEM32(ebp + 8) = edx;
    edx = ((int32_t)eax < 0) ? 0xFFFFFFFF : 0; /* cdq */
    POP32(esp, edi);
    { int64_t _dividend = ((int64_t)(int32_t)edx << 32) | eax;
      eax = (uint32_t)((int32_t)(_dividend / (int32_t)edi));
      edx = (uint32_t)((int32_t)(_dividend % (int32_t)edi)); }
    PUSH32(esp, 0x18);
    POP32(esp, edi);
    eax = eax + ecx * 2;
    MEM32(ebp + -8) = eax;
    goto loc_0050CD26;

loc_0050CC9E: ;
    if (CMP_GE(MEM32(eax + 4), edi)) goto loc_0050CCA9; /* jge: greater or equal (signed >=) */

loc_0050CCA3: ;
    ecx = MEM32(esi + 0x3C);
    MEM32(eax + 4) = ecx;

loc_0050CCA9: ;
    eax = MEM32(esi);
    ecx = MEM32(esi + 0x3C);
    ecx = ecx - MEM32(eax + 4);
    if ((ecx == 0)) goto loc_0050CCBC; /* je: equal / zero */

loc_0050CCB3: ;
    eax = esi + 0x30;
    PUSH32(esp, eax);
    PUSH32(esp, 0); sub_0050F6D9(); /* call 0x0050F6D9 */

loc_0050CCBC: ;
    eax = MEM32(esi);
    ecx = MEM32(esi + 0x3C);
    if (CMP_NE(ecx, MEM32(eax + 4))) goto loc_0050CCF0; /* jne: not equal / not zero */

loc_0050CCC6: ;
    ebx = esi + 0x30;

loc_0050CCC9: ;
    PUSH32(esp, ebx);
    PUSH32(esp, 0); sub_0050F534(); /* call 0x0050F534 */

loc_0050CCCF: ;
    eax = ebp + 8;
    PUSH32(esp, eax);
    PUSH32(esp, ebx);
    PUSH32(esp, 0); sub_0050F54D(); /* call 0x0050F54D */

loc_0050CCD9: ;
    if (CMP_L(eax, edi)) goto loc_0050CD95; /* jl: less (signed <) */

loc_0050CCE1: ;
    if (CMP_NE(MEM32(esi + 0x28), edi)) goto loc_0050CD0B; /* jne: not equal / not zero */

loc_0050CCE6: ;
    eax = MEM32(esi);
    ecx = MEM32(esi + 0x3C);
    if (CMP_EQ(ecx, MEM32(eax + 4))) goto loc_0050CCC9; /* je: equal / zero */

loc_0050CCF0: ;
    eax = MEM32(esi);
    ecx = MEM32(esi + 0x3C);
    MEM32(eax + 4) = ecx;
    if (CMP_EQ(MEM32(esi + 0x28), edi)) goto loc_0050CC6C; /* je: equal / zero */

loc_0050CD01: ;
    eax = 0x80004005u;
    goto loc_0050CD95;

loc_0050CD0B: ;
    eax = 0x80040004u;
    goto loc_0050CD95;

loc_0050CD15: ;
    PUSH32(esp, edi);
    eax = esi + 0x30;
    PUSH32(esp, eax);
    PUSH32(esp, 0); sub_0050F8AC(); /* call 0x0050F8AC */

loc_0050CD1F: ;
    if (TEST_S(eax, eax)) goto loc_0050CD95; /* jl: less (signed <) */

loc_0050CD23: ;
    MEM32(ebp + -4) = MEM32(ebp + -4) - edi;

loc_0050CD26: ;
    if (CMP_G(MEM32(ebp + -4), edi)) goto loc_0050CD15; /* jg: greater (signed >) */

loc_0050CD2B: ;
    PUSH32(esp, MEM32(ebp + -4));
    esi = esi + 0x30;
    PUSH32(esp, esi);
    PUSH32(esp, 0); sub_0050F8AC(); /* call 0x0050F8AC */

loc_0050CD37: ;
    if (TEST_S(eax, eax)) goto loc_0050CD95; /* jl: less (signed <) */

loc_0050CD3B: ;
    ecx = 0; /* xor self */
    if (CMP_BE(MEM16(ebx + 0x58), LO16(ecx))) goto loc_0050CD66; /* jbe: below or equal (unsigned <=) */

loc_0050CD43: ;
    eax = 0; /* xor self */

loc_0050CD45: ;
    edx = MEM32(ebx + 0x3A0);
    eax = (uint32_t)((int32_t)eax * (int32_t)0x70);
    SET_LO16(esi, MEM16(ebx + 0x394));
    ecx++;
    MEM16(eax + edx + 0x38) = LO16(esi);
    edx = ZX16(MEM16(ebx + 0x58));
    eax = SX16(LO16(ecx));
    if (CMP_L(eax, edx)) goto loc_0050CD45; /* jl: less (signed <) */

loc_0050CD66: ;
    edx = MEM32(ebx + 0x3B4);
    if (TEST_Z(edx, edx)) goto loc_0050CD8A; /* je: equal / zero */

loc_0050CD70: ;
    eax = MEM32(ebp + 8);
    ecx = MEM32(ebp + -8);
    ecx = ecx + eax;
    edi = edx;
    edx = ecx;
    ecx = ecx >> 2;
    eax = 0; /* xor self */
    { uint32_t _i; for (_i = 0; _i < ecx; _i++) MEM32(edi + _i*4) = eax; }
    edi += ecx * 4; ecx = 0; /* rep stosd */
    ecx = edx;
    ecx = ecx & 3;
    memset((void*)XBOX_PTR(edi), (uint8_t)eax, ecx);
    edi += ecx; ecx = 0; /* rep stosb */

loc_0050CD8A: ;
    eax = 0; /* xor self */
    eax++;
    MEM32(ebx + 0x50) = eax;
    MEM32(ebx + 0x4C) = eax;

loc_0050CD93: ;
    eax = 0; /* xor self */

loc_0050CD95: ;
    POP32(esp, edi);
    POP32(esp, esi);
    POP32(esp, ebx);
    esp = ebp;
    POP32(esp, ebp); /* leave */
    esp += 8; return; /* ret 4 */

}

/**
 * sub_0050CD9C
 * Original: 0x0050CD9C - 0x0050CF28 (396 bytes, 130 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0050CD9C(void)
{
    uint32_t ebp;
    int _flags = 0; /* fallback flag var */

loc_0050CD9C: ;
    PUSH32(esp, ebp);
    ebp = esp;
    esp = esp - 0xC;
    eax = MEM32(ebp + 0xC);
    PUSH32(esp, ebx);
    ebx = MEM32(ebp + 8);
    PUSH32(esp, esi);
    esi = MEM32(ebx);
    PUSH32(esp, edi);
    edi = 0; /* xor self */
    MEM16(eax) = LO16(edi);
    (void)0; /* cmp MEM32(ebx + 0x28), edi - flags set for next jcc */
    MEM32(ebp + -8) = esi;
    MEM32(ebp + 8) = edi;
    MEM32(ebp + -4) = edi;
    if (CMP_EQ(MEM32(ebx + 0x28), edi)) goto loc_0050CDD4; /* je: equal / zero */

loc_0050CDC0: ;
    eax = ebp + -12;
    PUSH32(esp, eax);
    eax = ebx + 0x30;
    PUSH32(esp, eax);
    PUSH32(esp, 0); sub_0050F54D(); /* call 0x0050F54D */

loc_0050CDCD: ;
    (void)0; /* cmp eax, edi - flags set for next jcc */
    MEM32(ebp + 8) = eax;
    if (CMP_L(eax, edi)) goto loc_0050CE26; /* jl: less (signed <) */

loc_0050CDD4: ;
    eax = MEM32(ebx + 0x14);
    eax = eax - edi;
    if ((eax == 0)) goto loc_0050CDF7; /* je: equal / zero */

loc_0050CDDB: ;
    eax--;
    if ((eax == 0)) goto loc_0050CE02; /* je: equal / zero */

loc_0050CDDE: ;
    eax--;
    if ((eax == 0)) goto loc_0050CE30; /* je: equal / zero */

loc_0050CDE1: ;
    eax--;
    if ((eax == 0)) goto loc_0050CEAB; /* je: equal / zero */

loc_0050CDE8: ;
    eax--;
    if ((eax == 0)) goto loc_0050CECE; /* je: equal / zero */

loc_0050CDEF: ;
    eax--;
    if ((eax != 0)) goto loc_0050CDD4; /* jne: not equal / not zero */

loc_0050CDF2: ;
    goto loc_0050CEDC;

loc_0050CDF7: ;
    ecx = MEM32(ebx);
    eax = 0; /* xor self */
    eax++;
    MEM32(ecx + 0x78) = eax;
    MEM32(ebx + 0x14) = eax;

loc_0050CE02: ;
    eax = MEM32(ebx);
    MEM32(eax + 0x3E8) = MEM32(eax + 0x3E8) + 1;
    eax = MEM32(ebx);
    MEM32(eax + 0x70) = edi;
    (void)0; /* cmp MEM16(ebx + 8), LO16(edi) - flags set for next jcc */
    MEM32(ebx + 0x2C) = edi;
    MEM32(ebx + 0x14) = 2;
    if (CMP_NE(MEM16(ebx + 8), LO16(edi))) goto loc_0050CDD4; /* jne: not equal / not zero */

loc_0050CE1F: ;
    MEM32(ebp + 8) = 4;

loc_0050CE26: ;
    eax = MEM32(ebp + 8);
    POP32(esp, edi);
    POP32(esp, esi);
    POP32(esp, ebx);
    esp = ebp;
    POP32(esp, ebp); /* leave */
    esp += 12; return; /* ret 8 */

loc_0050CE30: ;
    if (CMP_NE(MEM32(ebx + 0x2C), edi)) goto loc_0050CEA4; /* jne: not equal / not zero */

loc_0050CE35: ;
    (void)0; /* cmp MEM16(esi + 0x58), LO16(edi) - flags set for next jcc */
    MEM32(ebp + 8) = edi;
    if (CMP_BE(MEM16(esi + 0x58), LO16(edi))) goto loc_0050CE84; /* jbe: below or equal (unsigned <=) */

loc_0050CE3E: ;
    eax = MEM32(esi + 0x3A0);
    edi = (uint32_t)((int32_t)edi * (int32_t)0x70);
    eax = eax + edi;
    ecx = (uint32_t)(int32_t)SMEM16(eax + 0x38);
    if (CMP_EQ(ecx, MEM32(esi + 0x394))) goto loc_0050CE5D; /* je: equal / zero */

loc_0050CE55: ;
    if (CMP_L(ecx, MEM32(esi + 0x398))) goto loc_0050CE9B; /* jl: less (signed <) */

loc_0050CE5D: ;
    PUSH32(esp, 0);
    PUSH32(esp, eax);
    PUSH32(esp, esi);
    PUSH32(esp, 0); sub_0050FAA2(); /* call 0x0050FAA2 */

loc_0050CE66: ;
    eax = MEM32(esi + 0x3A0);
    MEM32(ebp + 8) = MEM32(ebp + 8) + 1;
    MEM16(eax + edi + 0x38) = 0x7FFF;
    edi = (uint32_t)(int32_t)SMEM16(ebp + 8);
    eax = ZX16(MEM16(esi + 0x58));
    if (CMP_L(edi, eax)) goto loc_0050CE3E; /* jl: less (signed <) */

loc_0050CE82: ;
    edi = 0; /* xor self */

loc_0050CE84: ;
    MEM32(ebx + 0x14) = 3;
    MEM32(ebx + 0x18) = edi;
    MEM32(ebx + 0x1C) = edi;
    MEM16(ebx + 0x24) = LO16(edi);
    MEM16(ebx + 0x26) = LO16(edi);
    goto loc_0050CEAB;

loc_0050CE9B: ;
    MEM32(ebp + 8) = 0x80040002u;
    goto loc_0050CE26;

loc_0050CEA4: ;
    MEM32(ebx + 0x14) = 5;

loc_0050CEAB: ;
    eax = ebp + -4;
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, eax);
    PUSH32(esp, ebx);
    PUSH32(esp, 0); RECOMP_ICALL_SAFE(MEM32(ebx + 0x198), _icall_esp); /* indirect call */
    }

loc_0050CEB6: ;
    (void)0; /* cmp eax, edi - flags set for next jcc */
    MEM32(ebp + 8) = eax;
    if (CMP_L(eax, edi)) goto loc_0050CE26; /* jl: less (signed <) */

loc_0050CEC1: ;
    if (CMP_NE(MEM32(ebx + 0x18), 2)) goto loc_0050CECE; /* jne: not equal / not zero */

loc_0050CEC7: ;
    MEM32(ebx + 0x14) = 4;

loc_0050CECE: ;
    PUSH32(esp, MEM32(ebp + 0xC));
    PUSH32(esp, esi);
    PUSH32(esp, 0); sub_0050EE52(); /* call 0x0050EE52 */

loc_0050CED7: ;
    eax = MEM32(ebx);
    MEM32(eax + 0x70) = MEM32(eax + 0x70) + 1;

loc_0050CEDC: ;
    if (CMP_EQ(MEM32(ebx + 0x2C), edi)) { sub_0050CF28(); return; } /* je: equal / zero */

loc_0050CEE1: ;
    if (CMP_EQ(MEM32(esi + 0x64), edi)) goto loc_0050CF0B; /* je: equal / zero */

loc_0050CEE6: ;
    eax = esi + 0x174;
    edi = esi + 0xA4;
    PUSH32(esp, 0x34);
    POP32(esp, ecx);
    esi = eax;
    memcpy((void*)XBOX_PTR(edi), (void*)XBOX_PTR(esi), ecx * 4);
    esi += ecx * 4; edi += ecx * 4; ecx = 0; /* rep movsd */
    esi = MEM32(ebp + -8);
    PUSH32(esp, 0x34);
    esi = esi + 0x244;
    POP32(esp, ecx);
    edi = eax;
    memcpy((void*)XBOX_PTR(edi), (void*)XBOX_PTR(esi), ecx * 4);
    esi += ecx * 4; edi += ecx * 4; ecx = 0; /* rep movsd */
    edi = 0; /* xor self */

loc_0050CF0B: ;
    MEM16(ebx + 8) = MEM16(ebx + 8) - 1;
    SET_LO16(eax, MEM16(ebx + 8));
    (void)0; /* cmp LO16(eax), LO16(edi) - flags set for next jcc */
    MEM32(ebx + 0x14) = 1;
    if (CMP_G(LO16(eax), LO16(edi))) goto loc_0050CE26; /* jg: greater (signed >) */

loc_0050CF23: ;
    goto loc_0050CE1F;

}

/**
 * sub_0050CF34
 * Original: 0x0050CF34 - 0x0050CF51 (29 bytes, 12 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0050CF34(void)
{
    uint32_t ebp;
    int _flags = 0; /* fallback flag var */

loc_0050CF34: ;
    PUSH32(esp, ebp);
    ebp = esp;
    ecx = MEM32(ebp + 8);
    edx = MEM32(ecx + 0x14);
    eax = 0; /* xor self */
    if (CMP_EQ(edx, 1)) { sub_0050CF51(); return; } /* je: equal / zero */

loc_0050CF44: ;
    if (CMP_EQ(edx, 2)) { sub_0050CF51(); return; } /* je: equal / zero */

loc_0050CF49: ;
    ecx = MEM32(ebp + 0xC);
    MEM16(ecx) = LO16(eax);
    g_seh_ebp = ebp; sub_0050CF61(); return; /* tail jmp 0x0050CF61 */

}

/**
 * sub_0050CF65
 * Original: 0x0050CF65 - 0x0050D1CE (617 bytes, 201 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0050CF65(void)
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

loc_0050CF65: ;
    PUSH32(esp, ebp);
    ebp = esp;
    PUSH32(esp, ecx);
    PUSH32(esp, ecx);
    PUSH32(esp, ebx);
    PUSH32(esp, esi);
    PUSH32(esp, edi);
    edi = MEM32(ebp + 8);
    eax = MEM32(edi + 0x18);
    esi = MEM32(edi);
    ebx = 0; /* xor self */
    eax = eax - ebx;
    MEM32(ebp + -4) = ebx;
    if ((eax == 0)) goto loc_0050CF89; /* je: equal / zero */

loc_0050CF7E: ;
    eax--;
    if ((eax == 0)) goto loc_0050CFBB; /* je: equal / zero */

loc_0050CF81: ;
    eax--;
    if ((eax == 0)) goto loc_0050CFDD; /* je: equal / zero */

loc_0050CF84: ;
    goto loc_0050D1C4;

loc_0050CF89: ;
    PUSH32(esp, MEM32(ebp + 0xC));
    PUSH32(esp, edi);
    PUSH32(esp, 0); sub_00512271(); /* call 0x00512271 */

loc_0050CF92: ;
    (void)0; /* cmp eax, ebx - flags set for next jcc */
    MEM32(ebp + -4) = eax;
    if (CMP_L(eax, ebx)) goto loc_0050D1C4; /* jl: less (signed <) */

loc_0050CF9D: ;
    if (CMP_NE(MEM32(edi + 0x1C), 6)) goto loc_0050D1C4; /* jne: not equal / not zero */

loc_0050CFA7: ;
    eax = MEM32(edi);
    MEM32(edi + 0x18) = 1;
    MEM16(eax + 0x74) = LO16(ebx);
    MEM16(edi + 0x24) = LO16(ebx);
    MEM32(edi + 0x20) = ebx;

loc_0050CFBB: ;
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, MEM32(ebp + 0xC));
    PUSH32(esp, MEM32(esi + 0x3A0));
    PUSH32(esp, edi);
    PUSH32(esp, 0); RECOMP_ICALL_SAFE(MEM32(edi + 0x19C), _icall_esp); /* indirect call */
    }

loc_0050CFCB: ;
    (void)0; /* cmp eax, ebx - flags set for next jcc */
    MEM32(ebp + -4) = eax;
    if (CMP_L(eax, ebx)) goto loc_0050D1C4; /* jl: less (signed <) */

loc_0050CFD6: ;
    MEM32(edi + 0x18) = 2;

loc_0050CFDD: ;
    if (CMP_NE(MEM32(esi + 0x48), 3)) goto loc_0050D018; /* jne: not equal / not zero */

loc_0050CFE3: ;
    (void)0; /* cmp MEM16(esi + 0x58), LO16(ebx) - flags set for next jcc */
    MEM32(ebp + 0xC) = ebx;
    if (CMP_BE(MEM16(esi + 0x58), LO16(ebx))) goto loc_0050D018; /* jbe: below or equal (unsigned <=) */

loc_0050CFEC: ;
    edi = 0; /* xor self */

loc_0050CFEE: ;
    eax = MEM32(esi + 0x3A0);
    eax = eax + edi;
    if (CMP_EQ(MEM32(eax + 0x24), ebx)) goto loc_0050D009; /* je: equal / zero */

loc_0050CFFB: ;
    PUSH32(esp, MEM32(esi + 0x48));
    PUSH32(esp, eax);
    PUSH32(esp, MEM32(eax + 0x20));
    PUSH32(esp, MEM32(eax));
    PUSH32(esp, 0); sub_0050EBF8(); /* call 0x0050EBF8 */

loc_0050D009: ;
    eax = ZX16(MEM16(esi + 0x58));
    MEM32(ebp + 0xC) = MEM32(ebp + 0xC) + 1;
    edi = edi + 0x70;
    if (CMP_L(MEM32(ebp + 0xC), eax)) goto loc_0050CFEE; /* jl: less (signed <) */

loc_0050D018: ;
    PUSH32(esp, MEM32(esi + 0x344));
    PUSH32(esp, 0); sub_0050E7B4(); /* call 0x0050E7B4 */

loc_0050D023: ;
    MEMF(esi) = (float)fp_top(); fp_popp(); /* fstp */
    (void)0; /* cmp MEM16(esi + 0x58), LO16(ebx) - flags set for next jcc */
    MEM32(ebp + 0xC) = ebx;
    if (CMP_BE(MEM16(esi + 0x58), LO16(ebx))) goto loc_0050D07F; /* jbe: below or equal (unsigned <=) */

loc_0050D02E: ;
    eax = MEM32(esi + 0x3A0);
    edx = ebx + eax;
    if (CMP_NE(MEM32(edx + 0x24), 0)) goto loc_0050D058; /* jne: not equal / not zero */

loc_0050D03D: ;
    ecx = MEM32(esi + 0x60);
    edi = MEM32(edx + 0x60);
    ecx = ecx << 2;
    edx = ecx;
    ecx = ecx >> 2;
    eax = 0; /* xor self */
    { uint32_t _i; for (_i = 0; _i < ecx; _i++) MEM32(edi + _i*4) = eax; }
    edi += ecx * 4; ecx = 0; /* rep stosd */
    ecx = edx;
    ecx = ecx & 3;
    memset((void*)XBOX_PTR(edi), (uint8_t)eax, ecx);
    edi += ecx; ecx = 0; /* rep stosb */
    goto loc_0050D06E;

loc_0050D058: ;
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, MEM32(edx + 0x2C));
    PUSH32(esp, edx);
    PUSH32(esp, esi);
    PUSH32(esp, 0); RECOMP_ICALL_SAFE(MEM32(esi + 0x3EC), _icall_esp); /* indirect call */
    }

loc_0050D063: ;
    (void)0; /* test eax, eax - flags set for next jcc */
    MEM32(ebp + -4) = eax;
    if (TEST_S(eax, eax)) goto loc_0050D1C4; /* jl: less (signed <) */

loc_0050D06E: ;
    eax = ZX16(MEM16(esi + 0x58));
    MEM32(ebp + 0xC) = MEM32(ebp + 0xC) + 1;
    ebx = ebx + 0x70;
    if (CMP_L(MEM32(ebp + 0xC), eax)) goto loc_0050D02E; /* jl: less (signed <) */

loc_0050D07D: ;
    ebx = 0; /* xor self */

loc_0050D07F: ;
    if (CMP_NE(MEM16(esi + 0x58), 2)) goto loc_0050D0E6; /* jne: not equal / not zero */

loc_0050D086: ;
    edi = 0; /* xor self */
    edi++;
    if (CMP_NE(MEM32(esi + 0x338), edi)) goto loc_0050D0E6; /* jne: not equal / not zero */

loc_0050D091: ;
    eax = MEM32(esi + 0x3A0);
    if (CMP_NE(MEM32(eax + 0x24), ebx)) goto loc_0050D0A4; /* jne: not equal / not zero */

loc_0050D09C: ;
    if (CMP_EQ(MEM32(eax + 0x94), ebx)) goto loc_0050D0E6; /* je: equal / zero */

loc_0050D0A4: ;
    edx = MEM32(esi + 0x60);
    (void)0; /* cmp edx, ebx - flags set for next jcc */
    ecx = MEM32(eax + 0x30);
    eax = MEM32(eax + 0xA0);
    if (CMP_LE(edx, ebx)) goto loc_0050D0D1; /* jle: less or equal (signed <=) */

loc_0050D0B4: ;
    fp_push(MEMF(ecx)); /* fld float */
    fp_push(MEMF(eax)); /* fld float */
    /* fld st(0) */
    fp_st1() += fp_top(); fp_pop(); /* fadd */
    MEMF(ecx) = (float)fp_top(); fp_popp(); /* fstp */
    ecx = ecx + 4;
    /* fld st(1) */
    fp_st1() -= fp_top(); fp_pop(); /* fsub */
    MEMF(eax) = (float)fp_top(); fp_popp(); /* fstp */
    eax = eax + 4;
    edx--;
    /* fstp st(0) */
    /* fstp st(0) */
    if ((edx != 0)) goto loc_0050D0B4; /* jne: not equal / not zero */

loc_0050D0D1: ;
    eax = MEM32(esi + 0x3A0);
    MEM32(eax + 0x24) = edi;
    eax = MEM32(esi + 0x3A0);
    MEM32(eax + 0x94) = edi;

loc_0050D0E6: ;
    if (CMP_NE(MEM32(esi + 0x30), ebx)) goto loc_0050D13E; /* jne: not equal / not zero */

loc_0050D0EB: ;
    ecx = MEM32(esi + 0x60);
    ecx = ecx - MEM32(esi + 0x328);
    MEM32(ebp + 0xC) = ebx;
    ecx = ecx << 2;
    (void)0; /* cmp MEM16(esi + 0x58), LO16(ebx) - flags set for next jcc */
    MEM32(ebp + 8) = ecx;
    if (CMP_BE(MEM16(esi + 0x58), LO16(ebx))) goto loc_0050D13E; /* jbe: below or equal (unsigned <=) */

loc_0050D103: ;
    edx = 0; /* xor self */
    goto loc_0050D10A;

loc_0050D107: ;
    ecx = MEM32(ebp + 8);

loc_0050D10A: ;
    edi = MEM32(esi + 0x3A0);
    ebx = MEM32(esi + 0x328);
    edi = MEM32(edx + edi + 0x30);
    edi = edi + ebx * 4;
    ebx = ecx;
    ecx = ecx >> 2;
    eax = 0; /* xor self */
    { uint32_t _i; for (_i = 0; _i < ecx; _i++) MEM32(edi + _i*4) = eax; }
    edi += ecx * 4; ecx = 0; /* rep stosd */
    ecx = ebx;
    ecx = ecx & 3;
    MEM32(ebp + 0xC) = MEM32(ebp + 0xC) + 1;
    memset((void*)XBOX_PTR(edi), (uint8_t)eax, ecx);
    edi += ecx; ecx = 0; /* rep stosb */
    eax = ZX16(MEM16(esi + 0x58));
    edx = edx + 0x70;
    if (CMP_L(MEM32(ebp + 0xC), eax)) goto loc_0050D107; /* jl: less (signed <) */

loc_0050D13C: ;
    ebx = 0; /* xor self */

loc_0050D13E: ;
    if (CMP_NE(MEM32(esi + 0x44), 1)) goto loc_0050D14F; /* jne: not equal / not zero */

loc_0050D144: ;
    eax = MEM32(esi + 0x34C);
    MEM32(ebp + -8) = eax;
    goto loc_0050D15B;

loc_0050D14F: ;
    fp_push((double)SMEM32(esi + 0x60)); /* fild */
    /* FPU: fdivr dword ptr [0x648ce0] */
    MEMF(ebp + -8) = (float)fp_top(); fp_popp(); /* fstp */

loc_0050D15B: ;
    (void)0; /* cmp MEM16(esi + 0x58), LO16(ebx) - flags set for next jcc */
    MEM32(ebp + 0xC) = ebx;
    if (CMP_BE(MEM16(esi + 0x58), LO16(ebx))) goto loc_0050D1C4; /* jbe: below or equal (unsigned <=) */

loc_0050D164: ;
    MEM32(ebp + 8) = ebx;

loc_0050D167: ;
    edi = MEM32(esi + 0x3A0);
    edi = edi + MEM32(ebp + 8);
    if (CMP_EQ(MEM32(edi + 0x24), ebx)) goto loc_0050D187; /* je: equal / zero */

loc_0050D175: ;
    fp_push(MEMF(ebp + -8)); /* fld float */
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, ebx);
    PUSH32(esp, ecx);
    MEMF(esp) = (float)fp_top(); fp_popp(); /* fstp */
    PUSH32(esp, MEM32(edi + 0x60));
    PUSH32(esp, esi);
    PUSH32(esp, 0); RECOMP_ICALL_SAFE(MEM32(esi + 0x3FC), _icall_esp); /* indirect call */
    }

loc_0050D187: ;
    eax = MEM32(esi + 0x358);
    MEM32(ebp + 0xC) = MEM32(ebp + 0xC) + 1;
    MEM32(ebp + 8) = MEM32(ebp + 8) + 0x70;
    MEM32(edi + 0x4C) = eax;
    eax = MEM32(esi + 0x35C);
    MEM32(edi + 0x50) = eax;
    eax = MEM32(esi + 0x360);
    MEM32(edi + 0x54) = eax;
    eax = MEM32(esi + 0x364);
    MEM32(edi + 0x58) = eax;
    eax = MEM32(esi + 0x368);
    MEM32(edi + 0x5C) = eax;
    eax = ZX16(MEM16(esi + 0x58));
    if (CMP_L(MEM32(ebp + 0xC), eax)) goto loc_0050D167; /* jl: less (signed <) */

loc_0050D1C4: ;
    eax = MEM32(ebp + -4);
    POP32(esp, edi);
    POP32(esp, esi);
    POP32(esp, ebx);
    esp = ebp;
    POP32(esp, ebp); /* leave */
    esp += 12; return; /* ret 8 */

    #undef fp_push
    #undef fp_pop
    #undef fp_popp
    #undef fp_top
    #undef fp_st1
}

/**
 * sub_0050D1CE
 * Original: 0x0050D1CE - 0x0050D1EA (28 bytes, 9 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0050D1CE(void)
{
    uint32_t ebp;
    int _flags = 0; /* fallback flag var */
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_0050D1CE: ;
    PUSH32(esp, esi);
    esi = MEM32(esp + 0xC);
    (void)0; /* test esi, esi - flags set for next jcc */
    PUSH32(esp, edi);
    edi = MEM32(esp + 0xC);
    eax = MEM32(edi);
    if (TEST_NZ(esi, esi)) { sub_0050D1EA(); return; } /* jne: not equal / not zero */

loc_0050D1DE: ;
    MEM32(edi + 0x2C) = 1;
    g_seh_ebp = ebp; sub_0050D284(); return; /* tail jmp 0x0050D284 */

}

/**
 * sub_0050D28B
 * Original: 0x0050D28B - 0x0050D509 (638 bytes, 204 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0050D28B(void)
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

loc_0050D28B: ;
    PUSH32(esp, ebp);
    ebp = esp;
    PUSH32(esp, ecx);
    PUSH32(esp, ebx);
    ebx = MEM32(ebp + 8);
    eax = MEM32(ebx + 0x18);
    PUSH32(esp, esi);
    esi = MEM32(ebx);
    PUSH32(esp, edi);
    edi = 0; /* xor self */
    eax = eax - edi;
    MEM32(ebp + -4) = edi;
    if ((eax == 0)) goto loc_0050D2B6; /* je: equal / zero */

loc_0050D2A3: ;
    eax--;
    if ((eax == 0)) goto loc_0050D39C; /* je: equal / zero */

loc_0050D2AA: ;
    eax--;
    if ((eax == 0)) goto loc_0050D3AF; /* je: equal / zero */

loc_0050D2B1: ;
    goto loc_0050D4FF;

loc_0050D2B6: ;
    PUSH32(esp, MEM32(ebp + 0xC));
    PUSH32(esp, ebx);
    PUSH32(esp, 0); sub_00512271(); /* call 0x00512271 */

loc_0050D2BF: ;
    (void)0; /* cmp eax, edi - flags set for next jcc */
    MEM32(ebp + -4) = eax;
    if (CMP_L(eax, edi)) goto loc_0050D4FF; /* jl: less (signed <) */

loc_0050D2CA: ;
    PUSH32(esp, MEM32(esi + 0x344));
    PUSH32(esp, 0); sub_0050E7B4(); /* call 0x0050E7B4 */

loc_0050D2D5: ;
    MEMF(esi) = (float)fp_top(); fp_popp(); /* fstp */
    if (CMP_NE(MEM32(ebx + 0x1C), 6)) goto loc_0050D4FF; /* jne: not equal / not zero */

loc_0050D2E1: ;
    (void)0; /* cmp MEM16(esi + 0x58), LO16(edi) - flags set for next jcc */
    MEM32(ebp + 8) = edi;
    if (CMP_BE(MEM16(esi + 0x58), LO16(edi))) goto loc_0050D323; /* jbe: below or equal (unsigned <=) */

loc_0050D2EA: ;
    edx = 0; /* xor self */

loc_0050D2EC: ;
    ecx = MEM32(esi + 0x328);
    edx = (uint32_t)((int32_t)edx * (int32_t)0x70);
    edi = MEM32(esi + 0x3A0);
    edi = MEM32(edx + edi + 0x30);
    ecx = ecx << 2;
    edx = ecx;
    ecx = ecx >> 2;
    eax = 0; /* xor self */
    { uint32_t _i; for (_i = 0; _i < ecx; _i++) MEM32(edi + _i*4) = eax; }
    edi += ecx * 4; ecx = 0; /* rep stosd */
    ecx = edx;
    ecx = ecx & 3;
    MEM32(ebp + 8) = MEM32(ebp + 8) + 1;
    edx = (uint32_t)(int32_t)SMEM16(ebp + 8);
    memset((void*)XBOX_PTR(edi), (uint8_t)eax, ecx);
    edi += ecx; ecx = 0; /* rep stosb */
    eax = ZX16(MEM16(esi + 0x58));
    if (CMP_L(edx, eax)) goto loc_0050D2EC; /* jl: less (signed <) */

loc_0050D321: ;
    edi = 0; /* xor self */

loc_0050D323: ;
    ecx = MEM32(ebx);
    MEM32(ebx + 0x18) = 1;
    SET_LO16(eax, MEM16(esi + 0x324));
    SET_LO16(eax, LO16(eax) - 1);
    MEM16(ecx + 0x74) = LO16(eax);
    MEM16(ebx + 0x24) = LO16(edi);
    MEM32(ebx + 0x20) = edi;
    goto loc_0050D39C;

loc_0050D342: ;
    eax = (uint32_t)(int32_t)SMEM16(ebx + 0x24);
    eax = (uint32_t)((int32_t)eax * (int32_t)0x70);
    eax = eax + MEM32(esi + 0x3A0);
    if (CMP_EQ(MEM32(eax + 0x24), edi)) goto loc_0050D36B; /* je: equal / zero */

loc_0050D354: ;
    PUSH32(esp, MEM32(ebp + 0xC));
    PUSH32(esp, eax);
    PUSH32(esp, ebx);
    PUSH32(esp, MEM32(ebx));
    PUSH32(esp, 0); sub_0050E85F(); /* call 0x0050E85F */

loc_0050D360: ;
    (void)0; /* cmp eax, edi - flags set for next jcc */
    MEM32(ebp + -4) = eax;
    if (CMP_L(eax, edi)) goto loc_0050D4FF; /* jl: less (signed <) */

loc_0050D36B: ;
    if (CMP_NE(MEM32(esi + 0x44), 1)) goto loc_0050D389; /* jne: not equal / not zero */

loc_0050D371: ;
    ecx = MEM32(ebx + 0x54);
    eax = MEM32(ebp + 0xC);
    ecx = ecx & 7;
    MEM32(eax) = MEM32(eax) + ecx;
    eax = MEM32(ebx + 0x54);
    ecx = eax;
    ecx = ecx & 7;
    eax = eax - ecx;
    MEM32(ebx + 0x54) = eax;

loc_0050D389: ;
    SET_LO16(eax, MEM16(esi + 0x324));
    ecx = MEM32(ebx);
    SET_LO16(eax, LO16(eax) - 1);
    MEM16(ecx + 0x74) = LO16(eax);
    MEM16(ebx + 0x24) = MEM16(ebx + 0x24) + 1;

loc_0050D39C: ;
    eax = (uint32_t)(int32_t)SMEM16(ebx + 0x24);
    ecx = ZX16(MEM16(esi + 0x58));
    if (CMP_L(eax, ecx)) goto loc_0050D342; /* jl: less (signed <) */

loc_0050D3A8: ;
    MEM32(ebx + 0x18) = 2;

loc_0050D3AF: ;
    (void)0; /* cmp MEM16(esi + 0x58), LO16(edi) - flags set for next jcc */
    MEM32(ebp + 0xC) = edi;
    if (CMP_BE(MEM16(esi + 0x58), LO16(edi))) goto loc_0050D411; /* jbe: below or equal (unsigned <=) */

loc_0050D3B8: ;
    MEM32(ebp + 8) = edi;

loc_0050D3BB: ;
    edx = MEM32(esi + 0x3A0);
    edx = edx + MEM32(ebp + 8);
    if (CMP_EQ(MEM32(edx + 0x24), edi)) goto loc_0050D3E2; /* je: equal / zero */

loc_0050D3C9: ;
    MEM32(edx + 0x28) = edi;
    if (CMP_NE(MEM32(esi + 0x48), 3)) goto loc_0050D401; /* jne: not equal / not zero */

loc_0050D3D2: ;
    PUSH32(esp, 3);
    PUSH32(esp, edx);
    PUSH32(esp, MEM32(esi + 0x60));
    PUSH32(esp, MEM32(edx + 0x30));
    PUSH32(esp, 0); sub_0050EC36(); /* call 0x0050EC36 */

loc_0050D3E0: ;
    goto loc_0050D401;

loc_0050D3E2: ;
    ecx = MEM32(esi + 0x60);
    edi = MEM32(edx + 0x60);
    ecx = ecx << 2;
    ebx = ecx;
    ecx = ecx >> 2;
    eax = 0; /* xor self */
    { uint32_t _i; for (_i = 0; _i < ecx; _i++) MEM32(edi + _i*4) = eax; }
    edi += ecx * 4; ecx = 0; /* rep stosd */
    ecx = ebx;
    ecx = ecx & 3;
    memset((void*)XBOX_PTR(edi), (uint8_t)eax, ecx);
    edi += ecx; ecx = 0; /* rep stosb */
    MEM32(edx + 0x28) = MEM32(edx + 0x28) & 0;
    edi = 0; /* xor self */

loc_0050D401: ;
    eax = ZX16(MEM16(esi + 0x58));
    MEM32(ebp + 0xC) = MEM32(ebp + 0xC) + 1;
    MEM32(ebp + 8) = MEM32(ebp + 8) + 0x70;
    if (CMP_L(MEM32(ebp + 0xC), eax)) goto loc_0050D3BB; /* jl: less (signed <) */

loc_0050D411: ;
    if (CMP_NE(MEM16(esi + 0x58), 2)) goto loc_0050D47C; /* jne: not equal / not zero */

loc_0050D418: ;
    if (CMP_NE(MEM32(esi + 0x338), 1)) goto loc_0050D47C; /* jne: not equal / not zero */

loc_0050D421: ;
    eax = MEM32(esi + 0x3A0);
    if (CMP_NE(MEM32(eax + 0x24), edi)) goto loc_0050D434; /* jne: not equal / not zero */

loc_0050D42C: ;
    if (CMP_EQ(MEM32(eax + 0x94), edi)) goto loc_0050D47C; /* je: equal / zero */

loc_0050D434: ;
    edx = MEM32(esi + 0x328);
    (void)0; /* cmp edx, edi - flags set for next jcc */
    ecx = MEM32(eax + 0x30);
    eax = MEM32(eax + 0xA0);
    if (CMP_LE(edx, edi)) goto loc_0050D464; /* jle: less or equal (signed <=) */

loc_0050D447: ;
    fp_push(MEMF(ecx)); /* fld float */
    fp_push(MEMF(eax)); /* fld float */
    /* fld st(0) */
    fp_st1() += fp_top(); fp_pop(); /* fadd */
    MEMF(ecx) = (float)fp_top(); fp_popp(); /* fstp */
    ecx = ecx + 4;
    /* fld st(1) */
    fp_st1() -= fp_top(); fp_pop(); /* fsub */
    MEMF(eax) = (float)fp_top(); fp_popp(); /* fstp */
    eax = eax + 4;
    edx--;
    /* fstp st(0) */
    /* fstp st(0) */
    if ((edx != 0)) goto loc_0050D447; /* jne: not equal / not zero */

loc_0050D464: ;
    ecx = MEM32(esi + 0x3A0);
    eax = 0; /* xor self */
    eax++;
    MEM32(ecx + 0x24) = eax;
    ecx = MEM32(esi + 0x3A0);
    MEM32(ecx + 0x94) = eax;

loc_0050D47C: ;
    if (CMP_NE(MEM32(esi + 0x44), 1)) goto loc_0050D48D; /* jne: not equal / not zero */

loc_0050D482: ;
    eax = MEM32(esi + 0x34C);
    MEM32(ebp + 8) = eax;
    goto loc_0050D499;

loc_0050D48D: ;
    fp_push((double)SMEM32(esi + 0x60)); /* fild */
    /* FPU: fdivr dword ptr [0x648ce0] */
    MEMF(ebp + 8) = (float)fp_top(); fp_popp(); /* fstp */

loc_0050D499: ;
    (void)0; /* cmp MEM16(esi + 0x58), LO16(edi) - flags set for next jcc */
    MEM32(ebp + 0xC) = edi;
    if (CMP_BE(MEM16(esi + 0x58), LO16(edi))) goto loc_0050D4FF; /* jbe: below or equal (unsigned <=) */

loc_0050D4A2: ;
    ebx = MEM32(esi + 0x3A0);
    ebx = ebx + edi;
    if (CMP_EQ(MEM32(ebx + 0x24), 0)) goto loc_0050D4C3; /* je: equal / zero */

loc_0050D4B0: ;
    fp_push(MEMF(ebp + 8)); /* fld float */
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, 0);
    PUSH32(esp, ecx);
    MEMF(esp) = (float)fp_top(); fp_popp(); /* fstp */
    PUSH32(esp, MEM32(ebx + 0x60));
    PUSH32(esp, esi);
    PUSH32(esp, 0); RECOMP_ICALL_SAFE(MEM32(esi + 0x3FC), _icall_esp); /* indirect call */
    }

loc_0050D4C3: ;
    eax = MEM32(esi + 0x358);
    MEM32(ebp + 0xC) = MEM32(ebp + 0xC) + 1;
    MEM32(ebx + 0x4C) = eax;
    eax = MEM32(esi + 0x35C);
    MEM32(ebx + 0x50) = eax;
    eax = MEM32(esi + 0x360);
    MEM32(ebx + 0x54) = eax;
    eax = MEM32(esi + 0x364);
    MEM32(ebx + 0x58) = eax;
    eax = MEM32(esi + 0x368);
    MEM32(ebx + 0x5C) = eax;
    eax = ZX16(MEM16(esi + 0x58));
    edi = edi + 0x70;
    if (CMP_L(MEM32(ebp + 0xC), eax)) goto loc_0050D4A2; /* jl: less (signed <) */

loc_0050D4FF: ;
    eax = MEM32(ebp + -4);
    POP32(esp, edi);
    POP32(esp, esi);
    POP32(esp, ebx);
    esp = ebp;
    POP32(esp, ebp); /* leave */
    esp += 12; return; /* ret 8 */

    #undef fp_push
    #undef fp_pop
    #undef fp_popp
    #undef fp_top
    #undef fp_st1
}

/**
 * sub_0050D556
 * Original: 0x0050D556 - 0x0050D765 (527 bytes, 145 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0050D556(void)
{
    uint32_t ebp;
    int _flags = 0; /* fallback flag var */

loc_0050D556: ;
    PUSH32(esp, ebp);
    ebp = esp;
    PUSH32(esp, ecx);
    MEM32(ebp + -4) = MEM32(ebp + -4) & 0;
    PUSH32(esp, ebx);
    PUSH32(esp, esi);
    esi = MEM32(ebp + 8);
    ebx = MEM32(esi);
    if (TEST_NZ(ebx, ebx)) goto loc_0050D576; /* jne: not equal / not zero */

loc_0050D569: ;
    PUSH32(esp, 0); sub_0050D87E(); /* call 0x0050D87E */

loc_0050D56E: ;
    ebx = eax;
    if (TEST_Z(ebx, ebx)) goto loc_0050D5E2; /* je: equal / zero */

loc_0050D574: ;
    MEM32(esi) = ebx;

loc_0050D576: ;
    (void)0; /* cmp MEM32(ebx + 0x48), 3 - flags set for next jcc */
    MEM32(ebx + 0x3F4) = 0x511B4A;
    if (CMP_EQ(MEM32(ebx + 0x48), 3)) goto loc_0050D75C; /* je: equal / zero */

loc_0050D58A: ;
    eax = ZX16(MEM16(ebp + 0x18));
    PUSH32(esp, edi);
    PUSH32(esp, MEM32(ebp + 0xC));
    edi = MEM32(ebp + 0x1C);
    PUSH32(esp, eax);
    eax = edi;
    eax = eax << 3;
    PUSH32(esp, eax);
    PUSH32(esp, MEM32(ebp + 0x14));
    PUSH32(esp, 0); sub_0050D765(); /* call 0x0050D765 */

loc_0050D5A4: ;
    PUSH32(esp, MEM32(ebp + 0x28));
    PUSH32(esp, MEM32(ebp + 0x24));
    PUSH32(esp, MEM32(ebp + 0x20));
    PUSH32(esp, edi);
    PUSH32(esp, MEM32(ebp + 0x18));
    PUSH32(esp, MEM32(ebp + 0x14));
    PUSH32(esp, eax);
    PUSH32(esp, MEM32(ebp + 0xC));
    PUSH32(esp, ebx);
    PUSH32(esp, 0); sub_0050F1CF(); /* call 0x0050F1CF */

loc_0050D5BE: ;
    (void)0; /* test eax, eax - flags set for next jcc */
    MEM32(ebp + -4) = eax;
    if (TEST_S(eax, eax)) goto loc_0050D75B; /* jl: less (signed <) */

loc_0050D5C9: ;
    PUSH32(esp, ebx);
    PUSH32(esp, 0); sub_0050C9B2(); /* call 0x0050C9B2 */

loc_0050D5CF: ;
    if (CMP_NE(MEM16(ebp + 0x18), 1)) goto loc_0050D5EE; /* jne: not equal / not zero */

loc_0050D5D6: ;
    MEM32(esi + 0x19C) = 0x5127F7;
    goto loc_0050D5F8;

loc_0050D5E2: ;
    MEM32(ebp + -4) = 0x8007000Eu;
    goto loc_0050D75C;

loc_0050D5EE: ;
    MEM32(esi + 0x19C) = 0x512817;

loc_0050D5F8: ;
    PUSH32(esp, MEM32(ebx + 0x64));
    edi = esi + 0x30;
    PUSH32(esp, edi);
    PUSH32(esp, 0); sub_0050F4F9(); /* call 0x0050F4F9 */

loc_0050D604: ;
    eax = MEM32(ebp + 0x2C);
    (void)0; /* test eax, eax - flags set for next jcc */
    MEM32(esi + 0x38) = esi;
    if (TEST_NZ(eax, eax)) goto loc_0050D617; /* jne: not equal / not zero */

loc_0050D60E: ;
    eax = 0x50D509;
    ecx = esi;
    goto loc_0050D61A;

loc_0050D617: ;
    ecx = MEM32(ebp + 0x30);

loc_0050D61A: ;
    MEM32(edi) = eax;
    MEM32(esi + 0x34) = ecx;
    if (CMP_EQ(MEM32(ebx + 0x64), 0)) goto loc_0050D631; /* je: equal / zero */

loc_0050D625: ;
    MEM32(esi + 0x164) = 0x50F7B9;
    goto loc_0050D63B;

loc_0050D631: ;
    MEM32(esi + 0x164) = 0x50F738;

loc_0050D63B: ;
    eax = MEM32(ebx + 0x33C);
    if (CMP_NE(eax, 3)) goto loc_0050D669; /* jne: not equal / not zero */

loc_0050D646: ;
    eax = ebx + 0x3A0;
    ecx = MEM32(eax);
    MEM32(ecx + 0x14) = 0x5152F8;
    ecx = MEM32(eax);
    MEM32(ecx + 0x18) = 0x51DF78;
    eax = MEM32(eax);
    MEM32(eax + 0x1C) = 0x51E330;
    goto loc_0050D6BB;

loc_0050D669: ;
    if (CMP_NE(eax, 1)) goto loc_0050D691; /* jne: not equal / not zero */

loc_0050D66E: ;
    eax = ebx + 0x3A0;
    ecx = MEM32(eax);
    MEM32(ecx + 0x14) = 0x518650;
    ecx = MEM32(eax);
    MEM32(ecx + 0x18) = 0x521358;
    eax = MEM32(eax);
    MEM32(eax + 0x1C) = 0x521888;
    goto loc_0050D6BB;

loc_0050D691: ;
    if (CMP_NE(eax, 2)) goto loc_0050D754; /* jne: not equal / not zero */

loc_0050D69A: ;
    eax = ebx + 0x3A0;
    ecx = MEM32(eax);
    MEM32(ecx + 0x14) = 0x5159C8;
    ecx = MEM32(eax);
    MEM32(ecx + 0x18) = 0x51EDB8;
    eax = MEM32(eax);
    MEM32(eax + 0x1C) = 0x51F828;

loc_0050D6BB: ;
    ecx = MEM32(ebx + 0x31C);
    MEM32(ebx + 0xE8) = MEM32(ebx + 0xE8) & 0;
    MEM32(ebx + 0x128) = MEM32(ebx + 0x128) | 0xFFFFFFFFu;
    MEM32(ebx + 0x12C) = MEM32(ebx + 0x12C) | 0xFFFFFFFFu;
    MEM32(ebx + 0xA8) = ecx;
    PUSH32(esp, 0x34);
    eax = ebx + 0xA4;
    POP32(esp, ecx);
    MEM32(eax) = 1;
    edi = ebx + 0x174;
    esi = eax;
    memcpy((void*)XBOX_PTR(edi), (void*)XBOX_PTR(esi), ecx * 4);
    esi += ecx * 4; edi += ecx * 4; ecx = 0; /* rep movsd */
    PUSH32(esp, 0x34);
    edi = ebx + 0x244;
    POP32(esp, ecx);
    esi = eax;
    memcpy((void*)XBOX_PTR(edi), (void*)XBOX_PTR(esi), ecx * 4);
    esi += ecx * 4; edi += ecx * 4; ecx = 0; /* rep movsd */
    esi = 0; /* xor self */
    (void)0; /* cmp MEM32(ebx + 0x334), esi - flags set for next jcc */
    MEM32(ebx + 0x48) = 3;
    MEM32(ebx + 4) = 0xFFFFFFFEu;
    if (CMP_EQ(MEM32(ebx + 0x334), esi)) goto loc_0050D72E; /* je: equal / zero */

loc_0050D71A: ;
    if (CMP_NE(MEM32(ebx + 0x30), esi)) goto loc_0050D72E; /* jne: not equal / not zero */

loc_0050D71F: ;
    eax = MEM32(ebp + 8);
    MEM32(eax + 0x198) = 0x50D28B;
    goto loc_0050D73B;

loc_0050D72E: ;
    eax = MEM32(ebp + 8);
    MEM32(eax + 0x198) = 0x50CF65;

loc_0050D73B: ;
    edi = MEM32(ebp + 0x34);
    if (CMP_EQ(edi, esi)) goto loc_0050D749; /* je: equal / zero */

loc_0050D742: ;
    PUSH32(esp, 0); sub_0050D85E(); /* call 0x0050D85E */

loc_0050D747: ;
    MEM32(edi) = eax;

loc_0050D749: ;
    PUSH32(esp, esi);
    PUSH32(esp, esi);
    PUSH32(esp, 1);
    PUSH32(esp, 0); sub_0050D861(); /* call 0x0050D861 */

loc_0050D752: ;
    goto loc_0050D75B;

loc_0050D754: ;
    MEM32(ebp + -4) = 0x80070057u;

loc_0050D75B: ;
    POP32(esp, edi);

loc_0050D75C: ;
    eax = MEM32(ebp + -4);
    POP32(esp, esi);
    POP32(esp, ebx);
    esp = ebp;
    POP32(esp, ebp); /* leave */
    esp += 52; return; /* ret 48 */

}

/**
 * sub_0050D765
 * Original: 0x0050D765 - 0x0050D83E (217 bytes, 78 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0050D765(void)
{
    uint32_t ebp;
    int _flags = 0; /* fallback flag var */
    int _cf = 0; /* carry flag */

loc_0050D765: ;
    PUSH32(esp, ebp);
    ebp = esp;
    PUSH32(esp, ebx);
    ebx = MEM32(ebp + 0xC);
    (void)0; /* test ebx, ebx - flags set for next jcc */
    PUSH32(esp, esi);
    if (TEST_Z(ebx, ebx)) { sub_0050D83E(); return; } /* je: equal / zero */

loc_0050D775: ;
    eax = MEM32(ebp + 0x14);
    if (CMP_G(eax, 2)) { sub_0050D83E(); return; } /* jg: greater (signed >) */

loc_0050D781: ;
    edx = MEM32(ebp + 8);
    if (CMP_G(edx, 0x1F40)) goto loc_0050D793; /* jg: greater (signed >) */

loc_0050D78C: ;
    esi = 0x200;
    goto loc_0050D7E1;

loc_0050D793: ;
    if (CMP_LE(edx, 0x2B11)) goto loc_0050D78C; /* jle: less or equal (signed <=) */

loc_0050D79B: ;
    if (CMP_LE(edx, 0x3E80)) goto loc_0050D78C; /* jle: less or equal (signed <=) */

loc_0050D7A3: ;
    if (CMP_G(edx, 0x5622)) goto loc_0050D7B2; /* jg: greater (signed >) */

loc_0050D7AB: ;
    esi = 0x400;
    goto loc_0050D7E1;

loc_0050D7B2: ;
    if (CMP_G(edx, 0x7D00)) goto loc_0050D7CC; /* jg: greater (signed >) */

loc_0050D7BA: ;
    eax--;
    eax = (uint32_t)(-(int32_t)eax);
    eax = _cf ? 0xFFFFFFFF : 0; /* sbb self (CF extend) */
    ecx = 0x400;
    eax = eax & ecx;
    eax = eax + ecx;
    esi = eax;
    goto loc_0050D7E1;

loc_0050D7CC: ;
    if (CMP_LE(edx, 0xAC44)) goto loc_0050D7DC; /* jle: less or equal (signed <=) */

loc_0050D7D4: ;
    if (CMP_G(edx, 0xBB80)) { sub_0050D83E(); return; } /* jg: greater (signed >) */

loc_0050D7DC: ;
    esi = 0x800;

loc_0050D7E1: ;
    ecx = esi;
    eax = edx;
    ecx = (uint32_t)((int32_t)ecx * (int32_t)ebx);
    edx = ((int32_t)eax < 0) ? 0xFFFFFFFF : 0; /* cdq */
    eax = eax - edx;
    PUSH32(esp, edi);
    edi = eax;
    edi = (uint32_t)((int32_t)edi >> 1);
    edx = 0; /* xor self */
    eax = edi + ecx;
    { uint64_t _dividend = ((uint64_t)edx << 32) | eax;
      eax = (uint32_t)(_dividend / (uint32_t)MEM32(ebp + 8));
      edx = (uint32_t)(_dividend % (uint32_t)MEM32(ebp + 8)); }
    eax = eax + 7;
    eax = eax >> 3;
    if ((eax != 0)) goto loc_0050D818; /* jne: not equal / not zero */

loc_0050D800: ;
    if (TEST_NZ(ecx, ecx)) goto loc_0050D821; /* jne: not equal / not zero */

loc_0050D804: ;
    ebx = MEM32(ebp + 8);
    eax = esi;
    eax = (uint32_t)((int32_t)eax * (int32_t)ebx);
    eax = eax + edi;
    edx = 0; /* xor self */
    { uint64_t _dividend = ((uint64_t)edx << 32) | eax;
      eax = (uint32_t)(_dividend / (uint32_t)ebx);
      edx = (uint32_t)(_dividend % (uint32_t)ebx); }
    eax = eax + 7;
    eax = eax >> 3;

loc_0050D818: ;
    if (CMP_A(eax, 1)) goto loc_0050D839; /* ja: above (unsigned >) */

loc_0050D81D: ;
    if (TEST_NZ(eax, eax)) goto loc_0050D839; /* jne: not equal / not zero */

loc_0050D821: ;
    esi = esi + esi;
    eax = esi;
    eax = (uint32_t)((int32_t)eax * (int32_t)ebx);
    eax = eax + edi;
    edx = 0; /* xor self */
    { uint64_t _dividend = ((uint64_t)edx << 32) | eax;
      eax = (uint32_t)(_dividend / (uint32_t)MEM32(ebp + 8));
      edx = (uint32_t)(_dividend % (uint32_t)MEM32(ebp + 8)); }
    eax = eax + 7;
    if (TEST_Z(eax, 0xFFFFFFF8u)) goto loc_0050D821; /* je: equal / zero */

loc_0050D839: ;
    eax = esi;
    POP32(esp, edi);
    g_seh_ebp = ebp; sub_0050D840(); return; /* tail jmp 0x0050D840 */

}

/**
 * sub_0050D846
 * Original: 0x0050D846 - 0x0050D85E (24 bytes, 9 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0050D846(void)
{
    int _flags = 0; /* fallback flag var */

loc_0050D846: ;
    eax = MEM32(esp + 4);
    if (TEST_Z(eax, eax)) goto loc_0050D85B; /* je: equal / zero */

loc_0050D84E: ;
    ecx = ZX8(MEM8(eax + -1));
    eax = eax - ecx;
    PUSH32(esp, eax);
    PUSH32(esp, 0); sub_0046FB7D(); /* call 0x0046FB7D */

loc_0050D85A: ;
    POP32(esp, ecx);

loc_0050D85B: ;
    esp += 8; return; /* ret 4 */

}

/**
 * sub_0050D85E
 * Original: 0x0050D85E - 0x0050D861 (3 bytes, 2 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0050D85E(void)
{

loc_0050D85E: ;
    eax = 0; /* xor self */
    esp += 4; return; /* ret */

}

/**
 * sub_0050D861
 * Original: 0x0050D861 - 0x0050D864 (3 bytes, 1 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0050D861(void)
{

loc_0050D861: ;
    esp += 16; return; /* ret 12 */

}

/**
 * sub_0050D864
 * Original: 0x0050D864 - 0x0050D871 (13 bytes, 4 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0050D864(void)
{

loc_0050D864: ;
    PUSH32(esp, MEM32(esp + 4));
    PUSH32(esp, 0); sub_00471918(); /* call 0x00471918 */

loc_0050D86D: ;
    POP32(esp, ecx);
    esp += 8; return; /* ret 4 */

}

/**
 * sub_0050D871
 * Original: 0x0050D871 - 0x0050D87E (13 bytes, 4 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0050D871(void)
{

loc_0050D871: ;
    PUSH32(esp, MEM32(esp + 4));
    PUSH32(esp, 0); sub_0046FB7D(); /* call 0x0046FB7D */

loc_0050D87A: ;
    POP32(esp, ecx);
    esp += 8; return; /* ret 4 */

}

/**
 * sub_0050D87E
 * Original: 0x0050D87E - 0x0050DB1E (672 bytes, 152 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0050D87E(void)
{
    int _flags = 0; /* fallback flag var */
    double _fp_stack[8];
    int _fp_top = 0;
    #define fp_push(v) (_fp_stack[--_fp_top & 7] = (v))
    #define fp_pop() (_fp_top++)
    #define fp_popp() (fp_pop())
    #define fp_top() _fp_stack[_fp_top & 7]
    #define fp_st1() _fp_stack[(_fp_top + 1) & 7]

loc_0050D87E: ;
    PUSH32(esp, esi);
    PUSH32(esp, 0x430);
    PUSH32(esp, 0); sub_00471918(); /* call 0x00471918 */

loc_0050D889: ;
    edx = eax;
    esi = 0; /* xor self */
    eax = 0; /* xor self */
    (void)0; /* cmp edx, esi - flags set for next jcc */
    POP32(esp, ecx);
    if (CMP_EQ(edx, esi)) goto loc_0050DB1C; /* je: equal / zero */

loc_0050D898: ;
    PUSH32(esp, ebx);
    fp_push(0.0); /* fldz */
    PUSH32(esp, edi);
    PUSH32(esp, 0x34);
    edi = edx;
    MEM32(edi) = eax; edi += 4; /* stosd */
    MEMF(edx + 0x34) = (float)fp_top(); fp_popp(); /* fstp */
    POP32(esp, ecx);
    fp_push(0.0); /* fldz */
    MEMF(edx + 0x38) = (float)fp_top(); fp_popp(); /* fstp */
    ebx = 0; /* xor self */
    ebx++;
    fp_push(0.0); /* fldz */
    MEM32(edx + 4) = esi;
    MEM32(edx + 8) = esi;
    MEM32(edx + 0xC) = esi;
    MEM32(edx + 0x10) = esi;
    MEM32(edx + 0x14) = esi;
    MEM32(edx + 0x18) = esi;
    MEM32(edx + 0x1C) = esi;
    MEM16(edx + 0x20) = LO16(esi);
    MEM32(edx + 0x24) = esi;
    MEM32(edx + 0x28) = esi;
    MEM32(edx + 0x2C) = esi;
    MEM32(edx + 0x30) = esi;
    MEM32(edx + 0x3C) = 9;
    MEM32(edx + 0x40) = 0x1FF;
    MEM32(edx + 0x44) = esi;
    MEM32(edx + 0x48) = esi;
    MEM32(edx + 0x4C) = esi;
    MEM32(edx + 0x50) = esi;
    MEM32(edx + 0x54) = esi;
    MEM16(edx + 0x58) = LO16(esi);
    MEM32(edx + 0x60) = esi;
    MEM32(edx + 0x64) = esi;
    MEM32(edx + 0x68) = esi;
    MEM32(edx + 0x70) = esi;
    MEM32(edx + 0x78) = ebx;
    MEM32(edx + 0x7C) = esi;
    MEM32(edx + 0x80) = ebx;
    MEM32(edx + 0x84) = esi;
    MEM32(edx + 0x88) = esi;
    MEM32(edx + 0x8C) = esi;
    MEM32(edx + 0x90) = esi;
    MEM32(edx + 0x94) = esi;
    MEM32(edx + 0x98) = esi;
    MEM32(edx + 0x9C) = esi;
    MEM32(edx + 0xA0) = esi;
    PUSH32(esp, 0x34);
    edi = edx + 0xA4;
    { uint32_t _i; for (_i = 0; _i < ecx; _i++) MEM32(edi + _i*4) = eax; }
    edi += ecx * 4; ecx = 0; /* rep stosd */
    POP32(esp, ecx);
    edi = edx + 0x174;
    { uint32_t _i; for (_i = 0; _i < ecx; _i++) MEM32(edi + _i*4) = eax; }
    edi += ecx * 4; ecx = 0; /* rep stosd */
    PUSH32(esp, 0x34);
    POP32(esp, ecx);
    edi = edx + 0x244;
    { uint32_t _i; for (_i = 0; _i < ecx; _i++) MEM32(edi + _i*4) = eax; }
    edi += ecx * 4; ecx = 0; /* rep stosd */
    MEMF(edx + 0x34C) = (float)fp_top(); fp_popp(); /* fstp */
    fp_push(0.0); /* fldz */
    MEMF(edx + 0x358) = (float)fp_top(); fp_popp(); /* fstp */
    fp_push(0.0); /* fldz */
    MEMF(edx + 0x35C) = (float)fp_top(); fp_popp(); /* fstp */
    MEM32(edx + 0x314) = esi;
    fp_push(0.0); /* fldz */
    MEM32(edx + 0x318) = esi;
    MEM32(edx + 0x31C) = esi;
    MEMF(edx + 0x360) = (float)fp_top(); fp_popp(); /* fstp */
    MEM32(edx + 0x320) = esi;
    MEM32(edx + 0x324) = esi;
    MEM32(edx + 0x328) = esi;
    MEM32(edx + 0x32C) = esi;
    MEM32(edx + 0x330) = esi;
    MEM32(edx + 0x334) = esi;
    MEM32(edx + 0x338) = esi;
    MEM32(edx + 0x33C) = esi;
    MEM32(edx + 0x340) = 0x3D23D70A;
    MEM32(edx + 0x344) = 0x40;
    MEM32(edx + 0x348) = 0x3F000000;
    MEM32(edx + 0x350) = esi;
    MEM32(edx + 0x354) = esi;
    fp_push(0.0); /* fldz */
    MEM32(edx + 0x3C8) = ebx;
    MEMF(edx + 0x364) = (float)fp_top(); fp_popp(); /* fstp */
    MEM32(edx + 0x410) = esi;
    fp_push(0.0); /* fldz */
    MEM32(edx + 0x414) = esi;
    MEMF(edx + 0x368) = (float)fp_top(); fp_popp(); /* fstp */
    MEM32(edx + 0x418) = esi;
    fp_push(0.0); /* fldz */
    MEM32(edx + 0x41C) = esi;
    MEM32(edx + 0x420) = esi;
    MEMF(edx + 0x36C) = (float)fp_top(); fp_popp(); /* fstp */
    MEM32(edx + 0x424) = esi;
    fp_push(0.0); /* fldz */
    MEM32(edx + 0x428) = esi;
    MEM32(edx + 0x42C) = esi;
    MEMF(edx + 0x370) = (float)fp_top(); fp_popp(); /* fstp */
    MEM32(edx + 0x380) = esi;
    fp_push(0.0); /* fldz */
    MEM32(edx + 0x384) = esi;
    MEM32(edx + 0x388) = esi;
    MEMF(edx + 0x374) = (float)fp_top(); fp_popp(); /* fstp */
    MEM32(edx + 0x38C) = esi;
    fp_push(0.0); /* fldz */
    MEM32(edx + 0x390) = esi;
    MEM32(edx + 0x394) = esi;
    MEMF(edx + 0x378) = (float)fp_top(); fp_popp(); /* fstp */
    MEM32(edx + 0x398) = esi;
    MEM32(edx + 0x39C) = esi;
    fp_push(0.0); /* fldz */
    MEM32(edx + 0x3A0) = esi;
    MEMF(edx + 0x37C) = (float)fp_top(); fp_popp(); /* fstp */
    MEM32(edx + 0x3A4) = esi;
    MEM32(edx + 0x3A8) = esi;
    fp_push(0.0); /* fldz */
    MEM32(edx + 0x3AC) = esi;
    MEMF(edx + 0x3BC) = (float)fp_top(); fp_popp(); /* fstp */
    MEM32(edx + 0x3B0) = esi;
    MEM32(edx + 0x3B4) = esi;
    MEM32(edx + 0x3B8) = esi;
    MEM32(edx + 0x3C0) = esi;
    MEM32(edx + 0x3C4) = esi;
    MEM32(edx + 0x3CC) = esi;
    MEM32(edx + 0x3D0) = esi;
    MEM32(edx + 0x3D4) = esi;
    MEM32(edx + 0x3D8) = esi;
    MEM32(edx + 0x3DC) = esi;
    MEM32(edx + 0x3E0) = esi;
    MEM32(edx + 0x3E4) = esi;
    MEM32(edx + 0x3E8) = esi;
    MEM32(edx + 0x404) = esi;
    MEM32(edx + 0x3EC) = 0x512FFA;
    MEM32(edx + 0x3F0) = esi;
    eax = edx + 0x408;
    MEM32(edx + 0x3F4) = esi;
    POP32(esp, edi);
    MEM32(eax) = esi;
    MEM32(eax + 4) = esi;
    eax = edx;
    POP32(esp, ebx);

loc_0050DB1C: ;
    POP32(esp, esi);
    esp += 4; return; /* ret */

    #undef fp_push
    #undef fp_pop
    #undef fp_popp
    #undef fp_top
    #undef fp_st1
}

/**
 * sub_0050DB1E
 * Original: 0x0050DB1E - 0x0050DC34 (278 bytes, 98 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0050DB1E(void)
{
    int _flags = 0; /* fallback flag var */

loc_0050DB1E: ;
    PUSH32(esp, ebx);
    PUSH32(esp, esi);
    esi = MEM32(esp + 0xC);
    PUSH32(esp, edi);
    edi = esi + 0x3A0;
    eax = MEM32(edi);
    ebx = 0; /* xor self */
    if (CMP_EQ(eax, ebx)) goto loc_0050DB39; /* je: equal / zero */

loc_0050DB33: ;
    PUSH32(esp, eax);
    PUSH32(esp, 0); sub_0050D871(); /* call 0x0050D871 */

loc_0050DB39: ;
    MEM32(edi) = ebx;
    edi = esi + 0x3B4;
    eax = MEM32(edi);
    if (CMP_EQ(eax, ebx)) goto loc_0050DB4D; /* je: equal / zero */

loc_0050DB47: ;
    PUSH32(esp, eax);
    PUSH32(esp, 0); sub_0050D871(); /* call 0x0050D871 */

loc_0050DB4D: ;
    PUSH32(esp, MEM32(esi + 0x3A4));
    MEM32(edi) = ebx;
    PUSH32(esp, 0); sub_0050D846(); /* call 0x0050D846 */

loc_0050DB5A: ;
    edi = esi + 0x3E4;
    eax = MEM32(edi);
    if (CMP_EQ(eax, ebx)) goto loc_0050DB6C; /* je: equal / zero */

loc_0050DB66: ;
    PUSH32(esp, eax);
    PUSH32(esp, 0); sub_0050D871(); /* call 0x0050D871 */

loc_0050DB6C: ;
    MEM32(edi) = ebx;
    edi = esi + 0x3AC;
    eax = MEM32(edi);
    (void)0; /* cmp eax, ebx - flags set for next jcc */
    MEM32(esi + 0x3E0) = ebx;
    if (CMP_EQ(eax, ebx)) goto loc_0050DB86; /* je: equal / zero */

loc_0050DB80: ;
    PUSH32(esp, eax);
    PUSH32(esp, 0); sub_0050D871(); /* call 0x0050D871 */

loc_0050DB86: ;
    MEM32(edi) = ebx;
    edi = esi + 0x3B0;
    eax = MEM32(edi);
    if (CMP_EQ(eax, ebx)) goto loc_0050DB9A; /* je: equal / zero */

loc_0050DB94: ;
    PUSH32(esp, eax);
    PUSH32(esp, 0); sub_0050D871(); /* call 0x0050D871 */

loc_0050DB9A: ;
    MEM32(edi) = ebx;
    edi = esi + 0x3A8;
    eax = MEM32(edi);
    if (CMP_EQ(eax, ebx)) goto loc_0050DBAE; /* je: equal / zero */

loc_0050DBA8: ;
    PUSH32(esp, eax);
    PUSH32(esp, 0); sub_0050D871(); /* call 0x0050D871 */

loc_0050DBAE: ;
    MEM32(edi) = ebx;
    edi = esi + 0x3CC;
    eax = MEM32(edi);
    if (CMP_EQ(eax, ebx)) goto loc_0050DBC2; /* je: equal / zero */

loc_0050DBBC: ;
    PUSH32(esp, eax);
    PUSH32(esp, 0); sub_0050D871(); /* call 0x0050D871 */

loc_0050DBC2: ;
    MEM32(edi) = ebx;
    edi = esi + 0x3D0;
    eax = MEM32(edi);
    if (CMP_EQ(eax, ebx)) goto loc_0050DBD6; /* je: equal / zero */

loc_0050DBD0: ;
    PUSH32(esp, eax);
    PUSH32(esp, 0); sub_0050D871(); /* call 0x0050D871 */

loc_0050DBD6: ;
    MEM32(edi) = ebx;
    edi = esi + 0x3D4;
    eax = MEM32(edi);
    if (CMP_EQ(eax, ebx)) goto loc_0050DBEA; /* je: equal / zero */

loc_0050DBE4: ;
    PUSH32(esp, eax);
    PUSH32(esp, 0); sub_0050D871(); /* call 0x0050D871 */

loc_0050DBEA: ;
    MEM32(edi) = ebx;
    edi = esi + 0x3D8;
    eax = MEM32(edi);
    if (CMP_EQ(eax, ebx)) goto loc_0050DBFE; /* je: equal / zero */

loc_0050DBF8: ;
    PUSH32(esp, eax);
    PUSH32(esp, 0); sub_0050D871(); /* call 0x0050D871 */

loc_0050DBFE: ;
    MEM32(edi) = ebx;
    edi = esi + 0x3DC;
    eax = MEM32(edi);
    if (CMP_EQ(eax, ebx)) goto loc_0050DC12; /* je: equal / zero */

loc_0050DC0C: ;
    PUSH32(esp, eax);
    PUSH32(esp, 0); sub_0050D871(); /* call 0x0050D871 */

loc_0050DC12: ;
    MEM32(edi) = ebx;
    edi = esi + 0x39C;
    eax = MEM32(edi);
    if (CMP_EQ(eax, ebx)) goto loc_0050DC26; /* je: equal / zero */

loc_0050DC20: ;
    PUSH32(esp, eax);
    PUSH32(esp, 0); sub_0050D871(); /* call 0x0050D871 */

loc_0050DC26: ;
    PUSH32(esp, esi);
    MEM32(edi) = ebx;
    PUSH32(esp, 0); sub_0050D871(); /* call 0x0050D871 */

loc_0050DC2E: ;
    POP32(esp, edi);
    POP32(esp, esi);
    POP32(esp, ebx);
    esp += 8; return; /* ret 4 */

}

/**
 * sub_0050DC34
 * Original: 0x0050DC34 - 0x0050DCD1 (157 bytes, 51 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0050DC34(void)
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

loc_0050DC34: ;
    PUSH32(esp, ebp);
    ebp = esp;
    esp = esp - 0x14;
    PUSH32(esp, ebx);
    PUSH32(esp, esi);
    PUSH32(esp, edi);
    edi = MEM32(ebp + 8);
    fp_push((double)SMEM32(edi + 0x54)); /* fild */
    esi = MEM32(edi + 0x3B0);
    ecx = 0; /* xor self */
    (void)0; /* cmp MEM32(edi + 0x44), 1 - flags set for next jcc */
    /* FPU: fdivr dword ptr [0x648d14] */
    MEMF(ebp + -12) = (float)fp_top(); fp_popp(); /* fstp */
    if (CMP_NE(MEM32(edi + 0x44), 1)) { sub_0050DCD1(); return; } /* jne: not equal / not zero */

loc_0050DC5A: ;
    eax = esi + 4;
    MEM32(esi) = ecx;
    ebx = MEM32(edi + 0x318);
    MEM32(ebp + 8) = eax;

loc_0050DC68: ;
    eax = ZX16(MEM16(ecx * 2 + 0x51DD5C));
    eax = (uint32_t)((int32_t)eax * (int32_t)ebx);
    MEM32(ebp + -8) = eax;
    PUSH32(esp, ecx);
    fp_push((double)SMEM32(ebp + -8)); /* fild */
    fp_st1() *= fp_top(); fp_pop(); /* fmul */
    fp_st1() += fp_top(); fp_pop(); /* fadd */
    MEMF(esp) = (float)fp_top(); fp_popp(); /* fstp */
    PUSH32(esp, 0); sub_00512881(); /* call 0x00512881 */

loc_0050DC8B: ;
    edx = MEM32(ebp + 8);
    MEM32(edx) = eax;
    ebx = MEM32(edi + 0x318);
    MEM32(ebp + -8) = eax;
    eax = ebx;
    edx = ((int32_t)eax < 0) ? 0xFFFFFFFF : 0; /* cdq */
    eax = eax - edx;
    eax = (uint32_t)((int32_t)eax >> 1);
    if (CMP_G(MEM32(ebp + -8), eax)) goto loc_0050DCB4; /* jg: greater (signed >) */

loc_0050DCA5: ;
    MEM32(ebp + 8) = MEM32(ebp + 8) + 4;
    ecx++;
    if (CMP_L(ecx, 0x19)) goto loc_0050DC68; /* jl: less (signed <) */

loc_0050DCAF: ;
    g_seh_ebp = ebp; sub_0050DDDD(); return; /* tail jmp 0x0050DDDD */

loc_0050DCB4: ;
    eax = MEM32(edi + 0x318);
    edx = ((int32_t)eax < 0) ? 0xFFFFFFFF : 0; /* cdq */
    eax = eax - edx;
    eax = (uint32_t)((int32_t)eax >> 1);
    MEM32(esi + ecx * 4 + 4) = eax;
    eax = MEM32(edi + 0x3AC);
    ecx++;
    MEM32(eax) = ecx;
    g_seh_ebp = ebp; sub_0050DDDD(); return; /* tail jmp 0x0050DDDD */

    #undef fp_push
    #undef fp_pop
    #undef fp_popp
    #undef fp_top
    #undef fp_st1
}

/**
 * sub_0050E1CF
 * Original: 0x0050E1CF - 0x0050E275 (166 bytes, 59 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0050E1CF(void)
{
    uint32_t ebp;
    int _flags = 0; /* fallback flag var */

loc_0050E1CF: ;
    PUSH32(esp, ebp);
    ebp = esp;
    esp = esp - 0x3C;
    PUSH32(esp, ebx);
    PUSH32(esp, esi);
    PUSH32(esp, edi);
    eax = MEM32(ebp + 8);
    edx = MEM32(eax + 0xA0);
    ecx = ZX16(MEM16(eax + 0x58));
    MEM32(ebp + -40) = MEM32(ebp + -40) & 0;
    MEM32(ebp + -44) = edx;
    edx = MEM32(eax + 0x390);
    eax = MEM32(eax + 0x394);
    MEM32(ebp + -52) = eax;
    MEM32(ebp + -48) = edx;
    edx = MEM32(ebp + 0xC);
    eax = MEM32(edx + 0x4C);
    MEM32(ebp + -8) = eax;
    eax = MEM32(edx + 0x50);
    MEM32(ebp + -20) = eax;
    eax = MEM32(edx + 0x54);
    MEM32(ebp + -24) = eax;
    eax = MEM32(edx + 0x58);
    ebx = (uint32_t)(int32_t)SMEM16(edx + 0x38);
    MEM32(ebp + -28) = eax;
    eax = MEM32(edx + 0x5C);
    esi = MEM32(ebp + 0x10);
    MEM32(ebp + -32) = eax;
    eax = MEM32(edx + 0x3C);
    MEM32(ebp + -4) = eax;
    eax = MEM32(edx + 0x48);
    MEM32(ebp + -12) = esi;
    esi = MEM32(ebp + 0x14);
    edi = (uint32_t)(int32_t)SMEM16(esi);
    MEM16(esi) = MEM16(esi) & 0;
    MEM32(ebp + -16) = eax;
    eax = eax - MEM32(edx + 0x40);
    MEM32(ebp + -36) = ecx;
    edi = edi + ebx;
    eax = (uint32_t)((int32_t)eax >> 1);
    ecx--;
    eax = (uint32_t)((int32_t)eax >> LO8(ecx));
    MEM32(ebp + 8) = ebx;
    ebx = MEM32(edx + 0x44);
    PUSH32(esp, 0x10);
    ecx = eax + 0xF;
    ecx = ecx >> 4;
    ebx = ebx + ecx * 2;
    eax = eax & 0xF;
    POP32(esp, ecx);
    ecx = ecx - eax;
    (void)0; /* cmp ecx, 0x10 - flags set for next jcc */
    MEM32(ebp + 0x10) = ebx;
    if (CMP_NE(ecx, 0x10)) { sub_0050E275(); return; } /* jne: not equal / not zero */

loc_0050E26B: ;
    eax = (uint32_t)(int32_t)SMEM16(ebx);
    ebx++;
    ebx++;
    MEM32(ebp + 0x10) = ebx;
    g_seh_ebp = ebp; sub_0050E279(); return; /* tail jmp 0x0050E279 */

}

/**
 * sub_0050E4DD
 * Original: 0x0050E4DD - 0x0050E562 (133 bytes, 40 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0050E4DD(void)
{
    uint32_t ebp;
    int _flags = 0; /* fallback flag var */

loc_0050E4DD: ;
    PUSH32(esp, ebp);
    ebp = esp;
    PUSH32(esp, ecx);
    PUSH32(esp, ebx);
    PUSH32(esp, esi);
    esi = MEM32(ebp + 8);
    eax = MEM32(esi + 0x70);
    PUSH32(esp, edi);
    edi = esi + eax * 4 + 0x178;
    ebx = MEM32(edi);
    ecx = 0; /* xor self */
    (void)0; /* cmp MEM32(esi + 0x174), 1 - flags set for next jcc */
    MEM32(ebp + -4) = ecx;
    MEM32(esi + 0x384) = ebx;
    if (CMP_LE(MEM32(esi + 0x174), 1)) { sub_0050E562(); return; } /* jle: less or equal (signed <=) */

loc_0050E507: ;
    eax = MEM32(esi + 0x31C);
    edx = ((int32_t)eax < 0) ? 0xFFFFFFFF : 0; /* cdq */
    { int64_t _dividend = ((int64_t)(int32_t)edx << 32) | eax;
      eax = (uint32_t)((int32_t)(_dividend / (int32_t)ebx));
      edx = (uint32_t)((int32_t)(_dividend % (int32_t)ebx)); }
    if (CMP_BE(eax, 1)) goto loc_0050E528; /* jbe: below or equal (unsigned <=) */

loc_0050E515: ;
    eax = MEM32(esi + 0x31C);
    edx = ((int32_t)eax < 0) ? 0xFFFFFFFF : 0; /* cdq */
    { int64_t _dividend = ((int64_t)(int32_t)edx << 32) | eax;
      eax = (uint32_t)((int32_t)(_dividend / (int32_t)ebx));
      edx = (uint32_t)((int32_t)(_dividend % (int32_t)ebx)); }

loc_0050E51E: ;
    ecx++;
    edx = eax;
    edx = edx >> LO8(ecx);
    if (CMP_A(edx, 1)) goto loc_0050E51E; /* ja: above (unsigned >) */

loc_0050E528: ;
    (void)0; /* cmp ecx, MEM32(esi + 0x90) - flags set for next jcc */
    MEM32(esi + 0x94) = ecx;
    if (CMP_L(ecx, MEM32(esi + 0x90))) goto loc_0050E542; /* jl: less (signed <) */

loc_0050E536: ;
    MEM32(ebp + -4) = 0x80040002u;
    g_seh_ebp = ebp; sub_0050E73E(); return; /* tail jmp 0x0050E73E */

loc_0050E542: ;
    eax = MEM32(esi + 0x3AC);
    eax = MEM32(eax + ecx * 4);
    ecx = (uint32_t)((int32_t)ecx * (int32_t)0x68);
    ecx = ecx + MEM32(esi + 0x3B0);
    MEM32(esi + 0x350) = eax;
    MEM32(esi + 0x354) = ecx;
    g_seh_ebp = ebp; sub_0050E582(); return; /* tail jmp 0x0050E582 */

}

/**
 * sub_0050E748
 * Original: 0x0050E748 - 0x0050E75F (23 bytes, 8 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0050E748(void)
{
    uint32_t ebp;
    int _flags = 0; /* fallback flag var */

loc_0050E748: ;
    PUSH32(esp, ebp);
    ebp = esp;
    eax = MEM32(ebp + 0xC);
    if (CMP_GE(eax, 5)) { sub_0050E75F(); return; } /* jge: greater or equal (signed >=) */

loc_0050E753: ;
    eax = MEM32(ebp + 8);
    MEM32(eax + 0x3C) = 0xD;
    g_seh_ebp = ebp; sub_0050E7A4(); return; /* tail jmp 0x0050E7A4 */

}

/**
 * sub_0050E7B4
 * Original: 0x0050E7B4 - 0x0050E7F0 (60 bytes, 24 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0050E7B4(void)
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

loc_0050E7B4: ;
    PUSH32(esp, ebp);
    ebp = esp;
    ecx = MEM32(ebp + 8);
    if (CMP_GE(ecx, 0x12)) { sub_0050E7F0(); return; } /* jge: greater or equal (signed >=) */

loc_0050E7BF: ;
    eax = 0; /* xor self */
    eax++;
    if (CMP_GE(ecx & ecx, 0)) goto loc_0050E7DC; /* jge: greater or equal (signed >=) */

loc_0050E7C6: ;
    ecx = (uint32_t)(-(int32_t)ecx);
    ecx = (uint32_t)((int32_t)ecx >> 3);
    ecx++;
    eax = eax << LO8(ecx);
    MEM32(ebp + 8) = eax;
    fp_push((double)SMEM32(ebp + 8)); /* fild */
    /* FPU: fdivr dword ptr [0x587b30] */
    g_seh_ebp = ebp; sub_0050E821(); return; /* tail jmp 0x0050E821 */

loc_0050E7DC: ;
    ecx = (uint32_t)((int32_t)ecx >> 3);
    ecx++;
    eax = eax << LO8(ecx);
    MEM32(ebp + 8) = eax;
    fp_push((double)SMEM32(ebp + 8)); /* fild */
    fp_st1() *= fp_top(); fp_pop(); /* fmul */
    g_seh_ebp = ebp; sub_0050E821(); return; /* tail jmp 0x0050E821 */

    #undef fp_push
    #undef fp_pop
    #undef fp_popp
    #undef fp_top
    #undef fp_st1
}

/**
 * sub_0050E825
 * Original: 0x0050E825 - 0x0050E85F (58 bytes, 23 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0050E825(void)
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

loc_0050E825: ;
    PUSH32(esp, ebp);
    ebp = esp;
    eax = MEM32(ebp + 0xC);
    ecx = MEM32(eax + 4);
    eax = MEM32(eax + 0x34);
    edx = MEM32(ebp + 0x10);
    eax = eax - MEM32(ecx + edx * 4);
    if (CMP_L(eax, 0x48)) goto loc_0050E83F; /* jl: less (signed <) */

loc_0050E83C: ;
    PUSH32(esp, 0x47);
    POP32(esp, eax);

loc_0050E83F: ;
    ecx = eax;
    edx = 0; /* xor self */
    ecx = (uint32_t)((int32_t)ecx >> 2);
    edx++;
    edx = edx << LO8(ecx);
    MEM32(ebp + 0xC) = edx;
    fp_push((double)SMEM32(ebp + 0xC)); /* fild */
    /* FPU: fdivr dword ptr [eax*4 + 0x51d928] */
    eax = MEM32(ebp + 8);
    fp_st1() *= fp_top(); fp_pop(); /* fmul */
    POP32(esp, ebp);
    esp += 16; return; /* ret 12 */

    #undef fp_push
    #undef fp_pop
    #undef fp_popp
    #undef fp_top
    #undef fp_st1
}

/**
 * sub_0050E85F
 * Original: 0x0050E85F - 0x0050E894 (53 bytes, 18 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0050E85F(void)
{
    uint32_t ebp;
    int _flags = 0; /* fallback flag var */

loc_0050E85F: ;
    PUSH32(esp, ebp);
    ebp = esp;
    esp = esp - 0x18;
    eax = MEM32(ebp + 0x10);
    eax = MEM32(eax + 0x30);
    PUSH32(esp, esi);
    esi = MEM32(ebp + 8);
    PUSH32(esp, edi);
    edi = MEM32(esi + 0x7C);
    (void)0; /* test edi, edi - flags set for next jcc */
    MEM32(ebp + -16) = eax;
    if (CMP_LE(edi & edi, 0)) goto loc_0050E888; /* jle: less or equal (signed <=) */

loc_0050E87A: ;
    eax = MEM32(esi + 0x70);
    ecx = MEM32(esi + eax * 4 + 0x178);
    if (CMP_G(ecx & ecx, 0)) { sub_0050E894(); return; } /* jg: greater (signed >) */

loc_0050E888: ;
    MEM32(ebp + -20) = 0x80040002u;
    g_seh_ebp = ebp; sub_0050EB16(); return; /* tail jmp 0x0050EB16 */

}

/**
 * sub_0050EB1F
 * Original: 0x0050EB1F - 0x0050EB89 (106 bytes, 40 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0050EB1F(void)
{
    uint32_t ebp;
    int _flags = 0; /* fallback flag var */
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_0050EB1F: ;
    eax = MEM32(esp + 4);
    PUSH32(esp, ebx);
    ebx = 0; /* xor self */
    ebx++;
    (void)0; /* cmp MEM32(eax + 0x204), 0 - flags set for next jcc */
    PUSH32(esp, esi);
    if (CMP_NE(MEM32(eax + 0x204), 0)) goto loc_0050EB33; /* jne: not equal / not zero */

loc_0050EB31: ;
    ebx = 0; /* xor self */

loc_0050EB33: ;
    esi = ZX16(MEM16(eax + 0x58));
    if (CMP_LE(esi & esi, 0)) goto loc_0050EB55; /* jle: less or equal (signed <=) */

loc_0050EB3B: ;
    ecx = MEM32(eax + 0x3A0);
    edx = ZX16(MEM16(eax + 0x58));
    ecx = ecx + 0x24;

loc_0050EB48: ;
    if (CMP_NE(MEM32(ecx), 0)) goto loc_0050EB4F; /* jne: not equal / not zero */

loc_0050EB4D: ;
    ebx = 0; /* xor self */

loc_0050EB4F: ;
    ecx = ecx + 0x70;
    edx--;
    if ((edx != 0)) goto loc_0050EB48; /* jne: not equal / not zero */

loc_0050EB55: ;
    if (TEST_Z(ebx, ebx)) goto loc_0050EB77; /* je: equal / zero */

loc_0050EB59: ;
    if (CMP_LE(esi & esi, 0)) goto loc_0050EB77; /* jle: less or equal (signed <=) */

loc_0050EB5D: ;
    ecx = MEM32(eax + 0x3A0);
    edx = ZX16(MEM16(eax + 0x58));
    ecx = ecx + 0x28;

loc_0050EB6A: ;
    if (CMP_EQ(MEM32(ecx), 0)) goto loc_0050EB71; /* je: equal / zero */

loc_0050EB6F: ;
    ebx = 0; /* xor self */

loc_0050EB71: ;
    ecx = ecx + 0x70;
    edx--;
    if ((edx != 0)) goto loc_0050EB6A; /* jne: not equal / not zero */

loc_0050EB77: ;
    MEM32(eax + 0x4C) = MEM32(eax + 0x4C) & 0;
    POP32(esp, esi);
    (void)0; /* test ebx, ebx - flags set for next jcc */
    POP32(esp, ebx);
    if (TEST_Z(ebx, ebx)) { sub_0050EB89(); return; } /* je: equal / zero */

loc_0050EB81: ;
    ecx = MEM32(eax + 0x318);
    g_seh_ebp = ebp; sub_0050EB96(); return; /* tail jmp 0x0050EB96 */

}

/**
 * sub_0050EB9F
 * Original: 0x0050EB9F - 0x0050EBE6 (71 bytes, 24 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0050EB9F(void)
{
    uint32_t ebp;
    int _flags = 0; /* fallback flag var */

loc_0050EB9F: ;
    PUSH32(esp, ebp);
    ebp = esp;
    PUSH32(esp, esi);
    esi = MEM32(ebp + 8);
    edx = MEM32(esi + 0x3B8);
    PUSH32(esp, edi);
    edi = MEM32(ebp + 0xC);
    eax = ZX16(MEM16(edi));
    if (CMP_LE(eax, edx)) { sub_0050EBE6(); return; } /* jle: less or equal (signed <=) */

loc_0050EBB7: ;
    ecx = ZX16(MEM16(ebp + 0x10));
    eax = eax - edx;
    eax = (uint32_t)((int32_t)eax * (int32_t)ecx);
    ecx = (uint32_t)((int32_t)ecx * (int32_t)edx);
    ecx = ecx + MEM32(ebp + 0x14);
    PUSH32(esp, eax);
    PUSH32(esp, ecx);
    PUSH32(esp, MEM32(ebp + 0x14));
    PUSH32(esp, 0); sub_0046E670(); /* call 0x0046E670 */

loc_0050EBD0: ;
    SET_LO16(eax, MEM16(esi + 0x3B8));
    MEM16(edi) = MEM16(edi) - LO16(eax);
    esp = esp + 0xC;
    MEM32(esi + 0x3B8) = MEM32(esi + 0x3B8) & 0;
    g_seh_ebp = ebp; sub_0050EBF2(); return; /* tail jmp 0x0050EBF2 */

}

/**
 * sub_0050EBF8
 * Original: 0x0050EBF8 - 0x0050EC36 (62 bytes, 23 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0050EBF8(void)
{
    uint32_t ebp;
    int _flags = 0; /* fallback flag var */

loc_0050EBF8: ;
    PUSH32(esp, ebp);
    ebp = esp;
    edx = MEM32(ebp + 0x10);
    MEM32(edx + 0x28) = MEM32(edx + 0x28) & 0;
    if (CMP_NE(MEM32(ebp + 0x14), 3)) goto loc_0050EC32; /* jne: not equal / not zero */

loc_0050EC08: ;
    if (CMP_EQ(MEM32(edx + 0x24), 0)) goto loc_0050EC32; /* je: equal / zero */

loc_0050EC0E: ;
    ecx = MEM32(ebp + 8);
    if (TEST_Z(ecx, ecx)) goto loc_0050EC32; /* je: equal / zero */

loc_0050EC15: ;
    eax = 0; /* xor self */
    if (CMP_LE(MEM32(ebp + 0xC), eax)) goto loc_0050EC32; /* jle: less or equal (signed <=) */

loc_0050EC1C: ;
    if (CMP_NE(MEM16(ecx + eax * 2), 0)) goto loc_0050EC2B; /* jne: not equal / not zero */

loc_0050EC23: ;
    eax++;
    if (CMP_L(eax, MEM32(ebp + 0xC))) goto loc_0050EC1C; /* jl: less (signed <) */

loc_0050EC29: ;
    goto loc_0050EC32;

loc_0050EC2B: ;
    MEM32(edx + 0x28) = 1;

loc_0050EC32: ;
    POP32(esp, ebp);
    esp += 20; return; /* ret 16 */

}

/**
 * sub_0050EC36
 * Original: 0x0050EC36 - 0x0050EC73 (61 bytes, 23 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0050EC36(void)
{
    uint32_t ebp;
    int _flags = 0; /* fallback flag var */

loc_0050EC36: ;
    PUSH32(esp, ebp);
    ebp = esp;
    edx = MEM32(ebp + 0x10);
    MEM32(edx + 0x28) = MEM32(edx + 0x28) & 0;
    if (CMP_NE(MEM32(ebp + 0x14), 3)) goto loc_0050EC6F; /* jne: not equal / not zero */

loc_0050EC46: ;
    if (CMP_EQ(MEM32(edx + 0x24), 0)) goto loc_0050EC6F; /* je: equal / zero */

loc_0050EC4C: ;
    ecx = MEM32(ebp + 8);
    if (TEST_Z(ecx, ecx)) goto loc_0050EC6F; /* je: equal / zero */

loc_0050EC53: ;
    eax = 0; /* xor self */
    if (CMP_LE(MEM32(ebp + 0xC), eax)) goto loc_0050EC6F; /* jle: less or equal (signed <=) */

loc_0050EC5A: ;
    if (CMP_NE(MEM32(ecx + eax * 4), 0)) goto loc_0050EC68; /* jne: not equal / not zero */

loc_0050EC60: ;
    eax++;
    if (CMP_L(eax, MEM32(ebp + 0xC))) goto loc_0050EC5A; /* jl: less (signed <) */

loc_0050EC66: ;
    goto loc_0050EC6F;

loc_0050EC68: ;
    MEM32(edx + 0x28) = 1;

loc_0050EC6F: ;
    POP32(esp, ebp);
    esp += 20; return; /* ret 16 */

}

/**
 * sub_0050EC73
 * Original: 0x0050EC73 - 0x0050ECB0 (61 bytes, 26 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0050EC73(void)
{
    int _flags = 0; /* fallback flag var */

loc_0050EC73: ;
    eax = MEM32(esp + 4);
    PUSH32(esp, esi);
    esi = MEM32(esp + 0xC);
    eax = eax + esi;
    PUSH32(esp, eax);
    PUSH32(esp, 0); sub_0050D864(); /* call 0x0050D864 */

loc_0050EC84: ;
    edx = eax;
    if (TEST_Z(edx, edx)) goto loc_0050ECAC; /* je: equal / zero */

loc_0050EC8A: ;
    ecx = 0; /* xor self */
    if (CMP_BE(esi, 1)) goto loc_0050EC9B; /* jbe: below or equal (unsigned <=) */

loc_0050EC91: ;
    ecx++;
    eax = esi;
    eax = eax >> LO8(ecx);
    if (CMP_A(eax, 1)) goto loc_0050EC91; /* ja: above (unsigned >) */

loc_0050EC9B: ;
    eax = edx + esi;
    esi = esi | 0xFFFFFFFFu;
    esi = esi << LO8(ecx);
    eax = eax & esi;
    SET_LO8(ecx, LO8(eax));
    SET_LO8(ecx, LO8(ecx) - LO8(edx));
    MEM8(eax + -1) = LO8(ecx);

loc_0050ECAC: ;
    POP32(esp, esi);
    esp += 12; return; /* ret 8 */

}

/**
 * sub_0050ECB0
 * Original: 0x0050ECB0 - 0x0050EE52 (418 bytes, 122 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0050ECB0(void)
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

loc_0050ECB0: ;
    PUSH32(esp, ebx);
    PUSH32(esp, ebp);
    PUSH32(esp, esi);
    esi = MEM32(esp + 0x10);
    ecx = ZX16(MEM16(esi + 0x58));
    eax = MEM32(esi + 0x31C);
    eax = (uint32_t)((int32_t)eax * (int32_t)ecx);
    PUSH32(esp, edi);
    edi = MEM32(esi + 0x5C);
    ebx = edi;
    edi = (uint32_t)((int32_t)edi * (int32_t)ecx);
    ecx = (uint32_t)((int32_t)ecx * (int32_t)0x70);
    ebx = (uint32_t)((int32_t)ebx * (int32_t)eax);
    PUSH32(esp, 8);
    edx = ((int32_t)eax < 0) ? 0xFFFFFFFF : 0; /* cdq */
    POP32(esp, ebp);
    { int64_t _dividend = ((int64_t)(int32_t)edx << 32) | eax;
      eax = (uint32_t)((int32_t)(_dividend / (int32_t)ebp));
      edx = (uint32_t)((int32_t)(_dividend % (int32_t)ebp)); }
    PUSH32(esp, ecx);
    edi = edi + eax;
    PUSH32(esp, 0); sub_0050D864(); /* call 0x0050D864 */

loc_0050ECE1: ;
    (void)0; /* test eax, eax - flags set for next jcc */
    MEM32(esi + 0x3A0) = eax;
    if (TEST_Z(eax, eax)) goto loc_0050EDFF; /* je: equal / zero */

loc_0050ECEF: ;
    ebx = ebx + edi;
    PUSH32(esp, ebx);
    PUSH32(esp, 0); sub_0050D864(); /* call 0x0050D864 */

loc_0050ECF7: ;
    edi = eax;
    (void)0; /* test edi, edi - flags set for next jcc */
    MEM32(esi + 0x3B4) = edi;
    if (TEST_Z(edi, edi)) goto loc_0050EDFF; /* je: equal / zero */

loc_0050ED07: ;
    ecx = ebx;
    edx = ecx;
    eax = 0; /* xor self */
    ecx = ecx >> 2;
    { uint32_t _i; for (_i = 0; _i < ecx; _i++) MEM32(edi + _i*4) = eax; }
    edi += ecx * 4; ecx = 0; /* rep stosd */
    ecx = edx;
    ecx = ecx & 3;
    memset((void*)XBOX_PTR(edi), (uint8_t)eax, ecx);
    edi += ecx; ecx = 0; /* rep stosb */
    eax = ZX16(MEM16(esi + 0x58));
    eax = (uint32_t)((int32_t)eax * (int32_t)MEM32(esi + 0x60));
    PUSH32(esp, 0x20);
    eax = eax << 2;
    PUSH32(esp, eax);
    PUSH32(esp, 0); sub_0050EC73(); /* call 0x0050EC73 */

loc_0050ED2C: ;
    edi = eax;
    (void)0; /* test edi, edi - flags set for next jcc */
    MEM32(esi + 0x3A4) = edi;
    if (TEST_Z(edi, edi)) goto loc_0050EDFF; /* je: equal / zero */

loc_0050ED3C: ;
    ecx = ZX16(MEM16(esi + 0x58));
    ecx = (uint32_t)((int32_t)ecx * (int32_t)MEM32(esi + 0x60));
    ecx = ecx << 2;
    edx = ecx;
    ecx = ecx >> 2;
    eax = 0; /* xor self */
    { uint32_t _i; for (_i = 0; _i < ecx; _i++) MEM32(edi + _i*4) = eax; }
    edi += ecx * 4; ecx = 0; /* rep stosd */
    ecx = edx;
    ecx = ecx & 3;
    memset((void*)XBOX_PTR(edi), (uint8_t)eax, ecx);
    edi += ecx; ecx = 0; /* rep stosb */
    eax = MEM32(esi + 0x90);
    eax = eax << 2;
    PUSH32(esp, eax);
    PUSH32(esp, 0); sub_0050D864(); /* call 0x0050D864 */

loc_0050ED66: ;
    (void)0; /* test eax, eax - flags set for next jcc */
    MEM32(esi + 0x3AC) = eax;
    if (TEST_Z(eax, eax)) goto loc_0050EDFF; /* je: equal / zero */

loc_0050ED74: ;
    eax = MEM32(esi + 0x90);
    eax = (uint32_t)((int32_t)eax * (int32_t)0x68);
    PUSH32(esp, eax);
    PUSH32(esp, 0); sub_0050D864(); /* call 0x0050D864 */

loc_0050ED83: ;
    (void)0; /* test eax, eax - flags set for next jcc */
    MEM32(esi + 0x3B0) = eax;
    if (TEST_Z(eax, eax)) goto loc_0050EDFF; /* je: equal / zero */

loc_0050ED8D: ;
    PUSH32(esp, esi);
    PUSH32(esp, 0); sub_0050DC34(); /* call 0x0050DC34 */

loc_0050ED93: ;
    eax = ZX16(MEM16(esi + 0x58));
    eax = (uint32_t)((int32_t)eax * (int32_t)MEM32(esi + 0x350));
    eax = eax << 2;
    PUSH32(esp, eax);
    PUSH32(esp, 0); sub_0050D864(); /* call 0x0050D864 */

loc_0050EDA7: ;
    (void)0; /* test eax, eax - flags set for next jcc */
    MEM32(esi + 0x3A8) = eax;
    if (TEST_Z(eax, eax)) goto loc_0050EDFF; /* je: equal / zero */

loc_0050EDB1: ;
    if (CMP_NE(MEM32(esi + 0x44), 1)) goto loc_0050EDC8; /* jne: not equal / not zero */

loc_0050EDB7: ;
    fp_push((double)SMEM32(esi + 0x60)); /* fild */
    /* FPU: fdivr qword ptr [0x587b38] */
    fp_top() = sqrt(fp_top()); /* fsqrt */
    MEMF(esi + 0x34C) = (float)fp_top(); fp_popp(); /* fstp */

loc_0050EDC8: ;
    PUSH32(esp, esi);
    PUSH32(esp, 0); sub_00512BE6(); /* call 0x00512BE6 */

loc_0050EDCE: ;
    ebx = eax;
    if (TEST_S(ebx, ebx)) goto loc_0050EE49; /* jl: less (signed <) */

loc_0050EDD4: ;
    if (CMP_NE(MEM32(esi + 0x334), 0)) goto loc_0050EE06; /* jne: not equal / not zero */

loc_0050EDDD: ;
    edi = esi + 0x3E4;
    if (CMP_NE(MEM32(edi), 0)) goto loc_0050EE06; /* jne: not equal / not zero */

loc_0050EDE8: ;
    eax = ZX16(MEM16(esi + 0x58));
    eax = (uint32_t)((int32_t)eax * (int32_t)MEM32(esi + 0x60));
    eax = eax << 2;
    PUSH32(esp, eax);
    PUSH32(esp, 0); sub_0050D864(); /* call 0x0050D864 */

loc_0050EDF9: ;
    (void)0; /* test eax, eax - flags set for next jcc */
    MEM32(edi) = eax;
    if (TEST_NZ(eax, eax)) goto loc_0050EE06; /* jne: not equal / not zero */

loc_0050EDFF: ;
    ebx = 0x8007000Eu;
    goto loc_0050EE49;

loc_0050EE06: ;
    eax = 0x51B8A8;
    MEM32(esi + 0x410) = 0x5198A8;
    MEM32(esi + 0x414) = eax;
    MEM32(esi + 0x418) = 0x51C8A8;
    MEM32(esi + 0x41C) = 0x51D0A8;
    MEM32(esi + 0x420) = 0x51D4A8;
    MEM32(esi + 0x424) = 0x51D6A8;
    MEM32(esi + 0x42C) = eax;

loc_0050EE49: ;
    POP32(esp, edi);
    POP32(esp, esi);
    POP32(esp, ebp);
    eax = ebx;
    POP32(esp, ebx);
    esp += 8; return; /* ret 4 */

    #undef fp_push
    #undef fp_pop
    #undef fp_popp
    #undef fp_top
    #undef fp_st1
}

/**
 * sub_0050EE52
 * Original: 0x0050EE52 - 0x0050EF12 (192 bytes, 66 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0050EE52(void)
{
    uint32_t ebp;
    int _flags = 0; /* fallback flag var */

loc_0050EE52: ;
    PUSH32(esp, ebp);
    ebp = esp;
    esp = esp - 0x10;
    PUSH32(esp, ebx);
    PUSH32(esp, esi);
    esi = MEM32(ebp + 8);
    PUSH32(esp, edi);
    ebx = 0; /* xor self */
    edi = 0; /* xor self */
    if (CMP_BE(MEM16(esi + 0x58), LO16(ebx))) goto loc_0050EE9A; /* jbe: below or equal (unsigned <=) */

loc_0050EE68: ;
    ecx = 0; /* xor self */

loc_0050EE6A: ;
    eax = MEM32(esi + 0x60);
    ecx = (uint32_t)((int32_t)ecx * (int32_t)0x70);
    ecx = ecx + MEM32(esi + 0x3A0);
    edx = ((int32_t)eax < 0) ? 0xFFFFFFFF : 0; /* cdq */
    eax = eax - edx;
    edx = MEM32(ecx + 0x60);
    eax = (uint32_t)((int32_t)eax >> 1);
    eax = edx + eax * 4;
    MEM32(ecx + 0x3C) = eax;
    eax = MEM32(ecx + 0x40);
    edi++;
    MEM16(ecx + 0x38) = LO16(ebx);
    MEM32(ecx + 0x48) = eax;
    eax = ZX16(MEM16(esi + 0x58));
    ecx = SX16(LO16(edi));
    if (CMP_L(ecx, eax)) goto loc_0050EE6A; /* jl: less (signed <) */

loc_0050EE9A: ;
    SET_LO16(eax, MEM16(esi + 0x9C));
    edi = MEM32(ebp + 0xC);
    MEM16(edi) = LO16(eax);
    ecx = MEM32(esi + 0x384);
    ecx = ecx - MEM32(esi + 0x380);
    if (CMP_LE(ecx, ebx)) goto loc_0050EEEF; /* jle: less or equal (signed <=) */

loc_0050EEB7: ;
    ecx = (uint32_t)((int32_t)ecx >> 1);
    eax = eax - ecx;
    MEM16(edi) = LO16(eax);
    (void)0; /* cmp MEM16(esi + 0x58), LO16(ebx) - flags set for next jcc */
    MEM32(ebp + 8) = ebx;
    if (CMP_BE(MEM16(esi + 0x58), LO16(ebx))) goto loc_0050EEEF; /* jbe: below or equal (unsigned <=) */

loc_0050EEC7: ;
    edx = ecx;
    eax = 0; /* xor self */
    edx = edx << 2;

loc_0050EECE: ;
    eax = (uint32_t)((int32_t)eax * (int32_t)0x70);
    eax = eax + MEM32(esi + 0x3A0);
    MEM32(eax + 0x3C) = MEM32(eax + 0x3C) + edx;
    MEM16(eax + 0x38) = MEM16(eax + 0x38) + LO16(ecx);
    MEM32(ebp + 8) = MEM32(ebp + 8) + 1;
    eax = (uint32_t)(int32_t)SMEM16(ebp + 8);
    ebx = ZX16(MEM16(esi + 0x58));
    if (CMP_L(eax, ebx)) goto loc_0050EECE; /* jl: less (signed <) */

loc_0050EEED: ;
    ebx = 0; /* xor self */

loc_0050EEEF: ;
    eax = MEM32(esi + 0x384);
    eax = eax - MEM32(esi + 0x388);
    if (CMP_LE(eax, ebx)) goto loc_0050EF04; /* jle: less or equal (signed <=) */

loc_0050EEFF: ;
    eax = (uint32_t)((int32_t)eax >> 1);
    MEM16(edi) = MEM16(edi) + LO16(eax);

loc_0050EF04: ;
    if (CMP_NE(MEM32(esi + 0x48), 3)) { sub_0050EF12(); return; } /* jne: not equal / not zero */

loc_0050EF0A: ;
    PUSH32(esp, esi);
    PUSH32(esp, 0); sub_0050EB1F(); /* call 0x0050EB1F */

loc_0050EF10: ;
    g_seh_ebp = ebp; sub_0050EF24(); return; /* tail jmp 0x0050EF24 */

}

/**
 * sub_0050F0EB
 * Original: 0x0050F0EB - 0x0050F137 (76 bytes, 34 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0050F0EB(void)
{
    uint32_t ebp;
    int _flags = 0; /* fallback flag var */

loc_0050F0EB: ;
    PUSH32(esp, ebp);
    ebp = esp;
    PUSH32(esp, ecx);
    PUSH32(esp, ebx);
    PUSH32(esp, esi);
    esi = MEM32(ebp + 8);
    ebx = 0; /* xor self */
    (void)0; /* cmp MEM16(esi + 0x58), LO16(ebx) - flags set for next jcc */
    MEM32(ebp + -4) = ebx;
    if (CMP_BE(MEM16(esi + 0x58), LO16(ebx))) goto loc_0050F12E; /* jbe: below or equal (unsigned <=) */

loc_0050F0FF: ;
    PUSH32(esp, edi);
    edi = MEM32(ebp + 0xC);

loc_0050F103: ;
    PUSH32(esp, MEM32(ebp + 0x14));
    eax = MEM32(esi + 0x3A0);
    PUSH32(esp, MEM32(ebp + 0x10));
    eax = eax + ebx;
    PUSH32(esp, edi);
    PUSH32(esp, eax);
    PUSH32(esp, esi);
    PUSH32(esp, 0); sub_0050E1CF(); /* call 0x0050E1CF */

loc_0050F119: ;
    MEM32(ebp + -4) = MEM32(ebp + -4) + 1;
    MEM32(ebp + 8) = eax;
    eax = ZX16(MEM16(esi + 0x58));
    edi++;
    edi++;
    ebx = ebx + 0x70;
    if (CMP_L(MEM32(ebp + -4), eax)) goto loc_0050F103; /* jl: less (signed <) */

loc_0050F12D: ;
    POP32(esp, edi);

loc_0050F12E: ;
    eax = MEM32(ebp + 8);
    POP32(esp, esi);
    POP32(esp, ebx);
    esp = ebp;
    POP32(esp, ebp); /* leave */
    esp += 20; return; /* ret 16 */

}

/**
 * sub_0050F137
 * Original: 0x0050F137 - 0x0050F1CF (152 bytes, 58 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0050F137(void)
{
    uint32_t ebp;
    int _flags = 0; /* fallback flag var */

loc_0050F137: ;
    PUSH32(esp, ebp);
    ebp = esp;
    eax = MEM32(ebp + 0xC);
    PUSH32(esp, ebx);
    ebx = MEM32(ebp + 0x14);
    PUSH32(esp, esi);
    esi = MEM32(ebp + 8);
    PUSH32(esp, edi);
    edi = ZX16(MEM16(eax));
    ebx = ebx >> 1;

loc_0050F14B: ;
    ecx = ZX16(MEM16(esi + 0x58));
    edx = 0; /* xor self */
    eax = ebx;
    { uint64_t _dividend = ((uint64_t)edx << 32) | eax;
      eax = (uint32_t)(_dividend / (uint32_t)ecx);
      edx = (uint32_t)(_dividend % (uint32_t)ecx); }
    if (CMP_AE(edi, eax)) goto loc_0050F15B; /* jae: above or equal (unsigned >=) */

loc_0050F159: ;
    eax = edi;

loc_0050F15B: ;
    ecx = 0x7FFF;
    (void)0; /* cmp eax, ecx - flags set for next jcc */
    MEM32(ebp + 0x14) = eax;
    if (CMP_B(eax, ecx)) goto loc_0050F16A; /* jb: below (unsigned <) */

loc_0050F167: ;
    MEM32(ebp + 0x14) = ecx;

loc_0050F16A: ;
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, 0);
    eax = ebp + 0x14;
    PUSH32(esp, eax);
    PUSH32(esp, MEM32(ebp + 0x10));
    PUSH32(esp, esi);
    PUSH32(esp, 0); RECOMP_ICALL_SAFE(MEM32(esi + 0x3F8), _icall_esp); /* indirect call */
    }

loc_0050F17A: ;
    eax = (uint32_t)(int32_t)SMEM16(ebp + 0x14);
    edi = edi - eax;
    if (CMP_EQ(MEM16(ebp + 0x14), 0)) goto loc_0050F1AF; /* je: equal / zero */

loc_0050F187: ;
    if (CMP_EQ(MEM32(esi + 0x3B8), 0)) goto loc_0050F1A4; /* je: equal / zero */

loc_0050F190: ;
    PUSH32(esp, MEM32(ebp + 0x10));
    eax = 0; /* xor self */
    SET_LO16(eax, MEM16(esi + 0x58));
    PUSH32(esp, eax);
    eax = ebp + 0x14;
    PUSH32(esp, eax);
    PUSH32(esp, esi);
    PUSH32(esp, 0); sub_0050EB9F(); /* call 0x0050EB9F */

loc_0050F1A4: ;
    if (CMP_NE(MEM16(ebp + 0x14), 0)) goto loc_0050F1AF; /* jne: not equal / not zero */

loc_0050F1AB: ;
    if (TEST_NZ(edi, edi)) goto loc_0050F14B; /* jne: not equal / not zero */

loc_0050F1AF: ;
    if (CMP_NE(MEM32(esi + 0x48), 3)) goto loc_0050F1BC; /* jne: not equal / not zero */

loc_0050F1B5: ;
    MEM32(esi + 0x48) = 1;

loc_0050F1BC: ;
    eax = MEM32(ebp + 0xC);
    SET_LO16(ecx, MEM16(ebp + 0x14));
    POP32(esp, edi);
    POP32(esp, esi);
    MEM16(eax) = LO16(ecx);
    eax = 0; /* xor self */
    POP32(esp, ebx);
    POP32(esp, ebp);
    esp += 20; return; /* ret 16 */

}

/**
 * sub_0050F1CF
 * Original: 0x0050F1CF - 0x0050F4F9 (810 bytes, 237 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0050F1CF(void)
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

loc_0050F1CF: ;
    PUSH32(esp, ebp);
    ebp = esp;
    PUSH32(esp, ecx);
    PUSH32(esp, ecx);
    eax = MEM32(ebp + 0xC);
    PUSH32(esp, ebx);
    PUSH32(esp, esi);
    esi = MEM32(ebp + 8);
    MEM32(esi + 0x44) = eax;
    eax = ZX16(MEM16(ebp + 0x24));
    PUSH32(esp, edi);
    edi = 0; /* xor self */
    edi++;
    ebx = eax;
    ecx = eax;
    ebx = ebx & edi;
    ecx = ecx & 0x20;
    (void)0; /* cmp MEM16(ebp + 0x18), 2 - flags set for next jcc */
    MEM32(esi + 0x334) = ebx;
    MEM32(esi + 0x6C) = ecx;
    if (CMP_A(MEM16(ebp + 0x18), 2)) goto loc_0050F4E8; /* ja: above (unsigned >) */

loc_0050F204: ;
    ecx = eax;
    ecx = ecx >> 1;
    ecx = ecx & edi;
    MEM32(esi + 0x64) = ecx;
    if ((ecx == 0)) goto loc_0050F219; /* je: equal / zero */

loc_0050F20F: ;
    if (TEST_Z(MEM8(ebp + 0x24), 4)) goto loc_0050F219; /* je: equal / zero */

loc_0050F215: ;
    ecx = edi;
    goto loc_0050F21B;

loc_0050F219: ;
    ecx = 0; /* xor self */

loc_0050F21B: ;
    (void)0; /* test ecx, ecx - flags set for next jcc */
    MEM32(esi + 0x68) = ecx;
    if (TEST_Z(ecx, ecx)) goto loc_0050F252; /* je: equal / zero */

loc_0050F222: ;
    edi = ZX16(MEM16(ebp + 0x18));
    eax = eax >> 3;
    ecx = eax;
    eax = MEM32(ebp + 0x1C);
    edx = ((int32_t)eax < 0) ? 0xFFFFFFFF : 0; /* cdq */
    { int64_t _dividend = ((int64_t)(int32_t)edx << 32) | eax;
      eax = (uint32_t)((int32_t)(_dividend / (int32_t)edi));
      edx = (uint32_t)((int32_t)(_dividend % (int32_t)edi)); }
    ecx = ecx & 3;
    MEM32(esi + 0x80) = ecx;
    if (CMP_L(eax, 0xFA0)) goto loc_0050F24E; /* jl: less (signed <) */

loc_0050F241: ;
    PUSH32(esp, 8);

loc_0050F243: ;
    POP32(esp, eax);
    eax = eax << LO8(ecx);
    MEM32(esi + 0x80) = eax;
    goto loc_0050F258;

loc_0050F24E: ;
    PUSH32(esp, 2);
    goto loc_0050F243;

loc_0050F252: ;
    MEM32(esi + 0x80) = edi;

loc_0050F258: ;
    edi = MEM32(ebp + 0x10);
    eax = edi;
    edx = ((int32_t)eax < 0) ? 0xFFFFFFFF : 0; /* cdq */
    ecx = 0x80;
    { int64_t _dividend = ((int64_t)(int32_t)edx << 32) | eax;
      eax = (uint32_t)((int32_t)(_dividend / (int32_t)ecx));
      edx = (uint32_t)((int32_t)(_dividend % (int32_t)ecx)); }
    if (CMP_LE(MEM32(esi + 0x80), eax)) goto loc_0050F273; /* jle: less or equal (signed <=) */

loc_0050F26D: ;
    MEM32(esi + 0x80) = eax;

loc_0050F273: ;
    if (TEST_NZ(ebx, ebx)) goto loc_0050F283; /* jne: not equal / not zero */

loc_0050F277: ;
    MEM32(esi + 0x340) = 0x3D23D70A;
    goto loc_0050F28D;

loc_0050F283: ;
    MEM32(esi + 0x340) = 0x3CA3D70A;

loc_0050F28D: ;
    if (CMP_NE(MEM16(ebp + 0x28), 0)) goto loc_0050F4E8; /* jne: not equal / not zero */

loc_0050F298: ;
    SET_LO16(ecx, MEM16(ebp + 0x18));
    fp_push((double)SMEM32(ebp + 0x1C)); /* fild */
    eax = MEM32(ebp + 0x14);
    edx = ZX16(LO16(ecx));
    fp_st1() *= fp_top(); fp_pop(); /* fmul */
    edx = (uint32_t)((int32_t)edx * (int32_t)eax);
    (void)0; /* cmp LO16(ecx), 1 - flags set for next jcc */
    MEM32(ebp + 0x18) = edx;
    MEM32(esi + 0x54) = eax;
    MEM16(esi + 0x58) = LO16(ecx);
    /* FPU: fidiv dword ptr [ebp + 0x18] */
    MEM32(esi + 0x5C) = 2;
    MEM32(esi + 0x60) = edi;
    MEMF(esi + 0x34) = (float)fp_top(); fp_pop(); /* fst */
    MEMF(esi + 0x38) = (float)fp_top(); fp_pop(); /* fst */
    if (CMP_BE(LO16(ecx), 1)) goto loc_0050F2DC; /* jbe: below or equal (unsigned <=) */

loc_0050F2D1: ;
    fp_st1() *= fp_top(); fp_pop(); /* fmul */
    MEMF(esi + 0x38) = (float)fp_top(); fp_popp(); /* fstp */
    goto loc_0050F2DE;

loc_0050F2DC: ;
    /* fstp st(0) */

loc_0050F2DE: ;
    eax = edi;
    edx = ((int32_t)eax < 0) ? 0xFFFFFFFF : 0; /* cdq */
    eax = eax - edx;
    ebx = eax;
    ecx = edi + edi;
    eax = ecx;
    edx = ((int32_t)eax < 0) ? 0xFFFFFFFF : 0; /* cdq */
    MEM32(esi + 0x318) = ecx;
    MEM32(esi + 0x98) = ecx;
    MEM32(esi + 0x398) = ecx;
    ecx = MEM32(esi + 0x80);
    { int64_t _dividend = ((int64_t)(int32_t)edx << 32) | eax;
      eax = (uint32_t)((int32_t)(_dividend / (int32_t)ecx));
      edx = (uint32_t)((int32_t)(_dividend % (int32_t)ecx)); }
    ebx = (uint32_t)((int32_t)ebx >> 1);
    MEM32(esi + 0x38C) = MEM32(esi + 0x38C) & 0;
    MEM32(esi + 0x320) = ebx;
    MEM32(esi + 0xA0) = ebx;
    MEM32(esi + 0x31C) = edi;
    MEM32(esi + 0x9C) = edi;
    MEM32(esi + 0x394) = edi;
    MEM32(esi + 0x390) = edi;
    MEM32(esi + 0x84) = eax;
    eax = edi;
    edx = ((int32_t)eax < 0) ? 0xFFFFFFFF : 0; /* cdq */
    { int64_t _dividend = ((int64_t)(int32_t)edx << 32) | eax;
      eax = (uint32_t)((int32_t)(_dividend / (int32_t)ecx));
      edx = (uint32_t)((int32_t)(_dividend % (int32_t)ecx)); }
    MEM32(esi + 0x88) = eax;
    eax = ebx;
    edx = ((int32_t)eax < 0) ? 0xFFFFFFFF : 0; /* cdq */
    { int64_t _dividend = ((int64_t)(int32_t)edx << 32) | eax;
      eax = (uint32_t)((int32_t)(_dividend / (int32_t)ecx));
      edx = (uint32_t)((int32_t)(_dividend % (int32_t)ecx)); }
    ebx = 0; /* xor self */
    ebx++;
    MEM32(esi + 0x8C) = eax;
    eax = 0; /* xor self */
    if (CMP_BE(ecx, ebx)) goto loc_0050F366; /* jbe: below or equal (unsigned <=) */

loc_0050F357: ;
    edx = MEM32(esi + 0x80);
    eax++;
    ecx = eax;
    edx = edx >> LO8(ecx);
    if (CMP_A(edx, ebx)) goto loc_0050F357; /* ja: above (unsigned >) */

loc_0050F366: ;
    eax++;
    ecx = 0; /* xor self */
    (void)0; /* cmp edi, ebx - flags set for next jcc */
    MEM32(esi + 0x90) = eax;
    if (CMP_BE(edi, ebx)) goto loc_0050F37D; /* jbe: below or equal (unsigned <=) */

loc_0050F373: ;
    eax = MEM32(esi + 0x60);
    ecx++;
    eax = eax >> LO8(ecx);
    if (CMP_A(eax, ebx)) goto loc_0050F373; /* ja: above (unsigned >) */

loc_0050F37D: ;
    (void)0; /* cmp MEM32(ebp + 0xC), ebx - flags set for next jcc */
    MEM32(esi + 0x314) = ecx;
    if (CMP_NE(MEM32(ebp + 0xC), ebx)) goto loc_0050F394; /* jne: not equal / not zero */

loc_0050F388: ;
    MEM32(esi + 0x32C) = 3;
    goto loc_0050F39B;

loc_0050F394: ;
    MEM32(esi + 0x32C) = MEM32(esi + 0x32C) & 0;

loc_0050F39B: ;
    eax = edi + edi * 8;
    fp_push(MEMF(esi + 0x38)); /* fld float */
    edx = ((int32_t)eax < 0) ? 0xFFFFFFFF : 0; /* cdq */
    _fpu_cmp = (fp_top() < fp_st1()) ? -1 : (fp_top() > fp_st1()) ? 1 : 0; /* fcomp dword ptr [0x6492dc] */
    PUSH32(esp, 0x64);
    POP32(esp, ecx);
    { int64_t _dividend = ((int64_t)(int32_t)edx << 32) | eax;
      eax = (uint32_t)((int32_t)(_dividend / (int32_t)ecx));
      edx = (uint32_t)((int32_t)(_dividend % (int32_t)ecx)); }
    MEM32(esi + 0x33C) = 3;
    edi = edi - eax;
    eax = MEM32(esi + 0x32C);
    MEM32(esi + 0x324) = eax;
    /* fnstsw ax - store FPU status word */
    MEM32(esi + 0x330) = edi;
    (void)0; /* test HI8(eax), 5 - flags set for next jcc */
    MEM32(esi + 0x328) = edi;
    if (1 /* jp after test - parity */) goto loc_0050F3E9; /* jp: parity */

loc_0050F3D8: ;
    if (CMP_L(MEM32(ebp + 0x14), 0x7D00)) goto loc_0050F40C; /* jl: less (signed <) */

loc_0050F3E1: ;
    MEM32(esi + 0x33C) = ebx;
    goto loc_0050F40C;

loc_0050F3E9: ;
    fp_push(MEMF(esi + 0x38)); /* fld float */
    _fpu_cmp = (fp_top() < fp_st1()) ? -1 : (fp_top() > fp_st1()) ? 1 : 0; /* fcomp dword ptr [0x587b40] */
    /* fnstsw ax - store FPU status word */
    if (1 /* jp after test - parity */) goto loc_0050F40C; /* jp: parity */

loc_0050F3F9: ;
    if (CMP_L(MEM32(ebp + 0x14), 0x7D00)) goto loc_0050F40C; /* jl: less (signed <) */

loc_0050F402: ;
    MEM32(esi + 0x33C) = 2;

loc_0050F40C: ;
    PUSH32(esp, esi);
    PUSH32(esp, 0); sub_0050ECB0(); /* call 0x0050ECB0 */

loc_0050F412: ;
    edi = 0; /* xor self */
    (void)0; /* cmp eax, edi - flags set for next jcc */
    MEM32(ebp + 0x18) = eax;
    if (CMP_L(eax, edi)) goto loc_0050F4EF; /* jl: less (signed <) */

loc_0050F41F: ;
    fp_push((double)SMEM32(esi + 0x31C)); /* fild */
    eax = MEM32(ebp + 0x20);
    eax = eax << 3;
    MEM32(esi + 0x18) = eax;
    fp_st1() *= fp_top(); fp_pop(); /* fmul */
    fp_st1() *= fp_top(); fp_pop(); /* fmul */
    MEMF(ebp + 0x24) = (float)fp_top(); fp_popp(); /* fstp */
    fp_push(MEMF(ebp + 0x24)); /* fld float */
    MEM32(ebp + -8) = (int32_t)fp_top(); /* fistp */
    eax = MEM32(ebp + -8);
    ecx = 0; /* xor self */
    if (CMP_BE(eax, ebx)) goto loc_0050F452; /* jbe: below or equal (unsigned <=) */

loc_0050F449: ;
    ecx++;
    edx = eax;
    edx = edx >> LO8(ecx);
    if (CMP_A(edx, ebx)) goto loc_0050F449; /* ja: above (unsigned >) */

loc_0050F452: ;
    eax = ecx + 2;
    MEM32(esi + 8) = eax;
    eax = eax + 0xB;
    MEM32(esi + 0xC) = eax;
    PUSH32(esp, 0x20);
    edx = ((int32_t)eax < 0) ? 0xFFFFFFFF : 0; /* cdq */
    POP32(esp, ecx);
    { int64_t _dividend = ((int64_t)(int32_t)edx << 32) | eax;
      eax = (uint32_t)((int32_t)(_dividend / (int32_t)ecx));
      edx = (uint32_t)((int32_t)(_dividend % (int32_t)ecx)); }
    PUSH32(esp, esi);
    MEM32(esi + 4) = edi;
    MEM32(esi + 0x10) = eax;
    MEM32(esi + 0x14) = edx;
    PUSH32(esp, 0); sub_005140FB(); /* call 0x005140FB */

loc_0050F473: ;
    if (CMP_NE(MEM32(esi + 0x334), ebx)) goto loc_0050F48F; /* jne: not equal / not zero */

loc_0050F47B: ;
    eax = MEM32(esi + 0x30);
    eax = (uint32_t)(-(int32_t)eax);
    eax = _cf ? 0xFFFFFFFF : 0; /* sbb self (CF extend) */
    eax = eax & 0x512FFA;
    MEM32(esi + 0x3EC) = eax;
    goto loc_0050F499;

loc_0050F48F: ;
    MEM32(esi + 0x3EC) = 0x47EC8C;

loc_0050F499: ;
    MEM32(esi + 0x3E8) = edi;
    MEM32(esi + 0x3F8) = 0x50F0EB;
    MEM32(esi + 0x3FC) = 0x513AAC;
    (void)0; /* cmp MEM32(0x8810E0), edi - flags set for next jcc */
    eax = 0x5135D0;
    if (CMP_NE(MEM32(0x8810E0), edi)) goto loc_0050F4C5; /* jne: not equal / not zero */

loc_0050F4C0: ;
    eax = 0x5138B0;

loc_0050F4C5: ;
    (void)0; /* cmp MEM16(esi + 0x58), 2 - flags set for next jcc */
    MEM32(esi + 0x400) = eax;
    MEM32(esi + 0x3F8) = 0x511ADF;
    if (CMP_NE(MEM16(esi + 0x58), 2)) goto loc_0050F4EF; /* jne: not equal / not zero */

loc_0050F4DC: ;
    MEM32(esi + 0x3F8) = 0x511164;
    goto loc_0050F4EF;

loc_0050F4E8: ;
    MEM32(ebp + 0x18) = 0x80040000u;

loc_0050F4EF: ;
    eax = MEM32(ebp + 0x18);
    POP32(esp, edi);
    POP32(esp, esi);
    POP32(esp, ebx);
    esp = ebp;
    POP32(esp, ebp); /* leave */
    esp += 40; return; /* ret 36 */

    #undef fp_push
    #undef fp_pop
    #undef fp_popp
    #undef fp_top
    #undef fp_st1
}

/**
 * sub_0050F4F9
 * Original: 0x0050F4F9 - 0x0050F534 (59 bytes, 17 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0050F4F9(void)
{

loc_0050F4F9: ;
    eax = MEM32(esp + 4);
    ecx = 0; /* xor self */
    MEM32(eax) = ecx;
    MEM32(eax + 4) = ecx;
    MEM32(eax + 8) = ecx;
    MEM32(eax + 0xC) = ecx;
    MEM32(eax + 0x10) = ecx;
    MEM32(eax + 0x14) = ecx;
    MEM32(eax + 0x18) = ecx;
    MEM32(eax + 0x1C) = ecx;
    MEM32(eax + 0x20) = ecx;
    MEM32(eax + 0x24) = ecx;
    ecx = MEM32(esp + 8);
    MEM32(eax + 0x28) = 0xF;
    MEM32(eax + 0x2C) = ecx;
    MEM32(eax + 0x30) = 1;
    esp += 12; return; /* ret 8 */

}

/**
 * sub_0050F534
 * Original: 0x0050F534 - 0x0050F54D (25 bytes, 7 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0050F534(void)
{

loc_0050F534: ;
    eax = MEM32(esp + 4);
    ecx = 0; /* xor self */
    MEM32(eax + 0x20) = ecx;
    MEM32(eax + 0x24) = ecx;
    MEM32(eax + 0x1C) = ecx;
    MEM32(eax + 0x30) = 1;
    esp += 8; return; /* ret 4 */

}

/**
 * sub_0050F54D
 * Original: 0x0050F54D - 0x0050F6D9 (396 bytes, 153 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0050F54D(void)
{
    uint32_t ebp;
    int _flags = 0; /* fallback flag var */

loc_0050F54D: ;
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, ebp);
    ebp = esp;
    PUSH32(esp, ecx);
    PUSH32(esp, ecx);
    MEM32(ebp + -4) = MEM32(ebp + -4) & 0;
    PUSH32(esp, ebx);
    PUSH32(esp, esi);
    esi = MEM32(ebp + 8);
    PUSH32(esp, edi);
    eax = esi + 0x34;
    PUSH32(esp, eax);
    PUSH32(esp, MEM32(esi + 4));
    edi = esi + 0x1C;
    PUSH32(esp, edi);
    ebx = esi + 0x18;
    PUSH32(esp, ebx);
    PUSH32(esp, 0); RECOMP_ICALL_SAFE(MEM32(esi), _icall_esp); /* indirect call */
    }

loc_0050F56D: ;
    ecx = 0; /* xor self */
    (void)0; /* cmp eax, ecx - flags set for next jcc */
    MEM32(ebp + 8) = eax;
    if (CMP_L(eax, ecx)) goto loc_0050F6CF; /* jl: less (signed <) */

loc_0050F57A: ;
    eax = esi + 0x34;
    MEM32(ebx) = eax;
    eax = 0; /* xor self */
    (void)0; /* cmp MEM32(ebp + 8), 3 - flags set for next jcc */
    SET_LO8(eax, (CMP_EQ(MEM32(ebp + 8), 3)) ? 1 : 0); /* sete */
    if (CMP_NE(MEM32(edi), ecx)) goto loc_0050F5A3; /* jne: not equal / not zero */

loc_0050F58C: ;
    eax = MEM32(esi + 8);
    MEM32(eax + 0x28) = 1;
    eax = MEM32(ebp + 0xC);
    MEM32(eax) = ecx;
    MEM32(ebp + 8) = ecx;
    goto loc_0050F6CF;

loc_0050F5A3: ;
    (void)0; /* cmp eax, ecx - flags set for next jcc */
    edx = MEM32(esi + 8);
    MEM32(edx + 0x28) = ecx;
    if (CMP_EQ(eax, ecx)) goto loc_0050F5B7; /* je: equal / zero */

loc_0050F5AD: ;
    edx = MEM32(ebx);
    MEM32(esi + 0x10) = edx;
    edx = MEM32(edi);
    MEM32(esi + 0x14) = edx;

loc_0050F5B7: ;
    if (CMP_NE(MEM32(esi + 0x2C), ecx)) goto loc_0050F5D5; /* jne: not equal / not zero */

loc_0050F5BC: ;
    if (CMP_EQ(eax, ecx)) goto loc_0050F682; /* je: equal / zero */

loc_0050F5C4: ;
    eax = MEM32(esi + 0xC);
    eax++;
    eax = eax & 0x3FF;
    MEM32(esi + 0xC) = eax;
    goto loc_0050F682;

loc_0050F5D5: ;
    if (CMP_EQ(eax, ecx)) goto loc_0050F682; /* je: equal / zero */

loc_0050F5DD: ;
    eax = MEM32(esi + 8);
    eax = MEM32(eax);
    if (CMP_EQ(MEM32(eax + 0x64), ecx)) goto loc_0050F5EE; /* je: equal / zero */

loc_0050F5E7: ;
    SET_LO8(eax, MEM8(eax + 8));
    SET_LO8(eax, LO8(eax) + 0xB);
    goto loc_0050F5F0;

loc_0050F5EE: ;
    SET_LO8(eax, 0); /* xor self */

loc_0050F5F0: ;
    eax = ZX8(LO8(eax));
    MEM32(ebp + -8) = eax;
    edx = ((int32_t)eax < 0) ? 0xFFFFFFFF : 0; /* cdq */
    MEM32(esi + 0xC) = MEM32(esi + 0xC) & 0;
    PUSH32(esp, 8);
    POP32(esp, ecx);
    { int64_t _dividend = ((int64_t)(int32_t)edx << 32) | eax;
      eax = (uint32_t)((int32_t)(_dividend / (int32_t)ecx));
      edx = (uint32_t)((int32_t)(_dividend % (int32_t)ecx)); }
    eax = MEM32(ebx);
    ecx = 0; /* xor self */
    SET_HI8(ecx, MEM8(eax));
    SET_LO8(ecx, MEM8(eax + 1));
    ecx = ecx << 8;
    MEM32(ebp + -4) = edx;
    edx = ZX8(MEM8(eax + 2));
    ecx = ecx | edx;
    edx = ZX8(MEM8(eax + 3));
    ecx = ecx << 8;
    ecx = ecx | edx;
    MEM32(esi + 0xC) = ecx;
    ecx = MEM32(ebp + -8);
    ecx = ecx >> 3;
    MEM32(edi) = MEM32(edi) - ecx;
    eax = eax + ecx;
    ecx = MEM32(esi + 0x28);
    MEM32(ebx) = eax;
    eax = MEM32(esi + 0xC);
    eax = eax >> 0x1C;
    (void)0; /* cmp MEM32(esi + 0x30), 0 - flags set for next jcc */
    MEM32(esi + 0x28) = eax;
    if (CMP_NE(MEM32(esi + 0x30), 0)) goto loc_0050F67C; /* jne: not equal / not zero */

loc_0050F63F: ;
    eax = eax - ecx;
    if (CMP_EQ(eax, 1)) goto loc_0050F680; /* je: equal / zero */

loc_0050F646: ;
    eax = eax + 0x10;
    if (CMP_EQ(eax, 1)) goto loc_0050F680; /* je: equal / zero */

loc_0050F64E: ;
    eax = MEM32(ebp + 0xC);
    MEM32(eax) = MEM32(eax) & 0;
    eax = MEM32(esi + 0x10);
    eax = eax + 4;
    MEM32(ebx) = eax;
    eax = MEM32(esi + 0x14);
    eax = eax - 4;
    MEM32(edi) = eax;
    eax = MEM32(esi + 0xC);
    MEM32(esi + 0x20) = eax;
    PUSH32(esp, 0x20);
    POP32(esp, eax);
    eax = eax - MEM32(ebp + -8);
    MEM32(ebp + 8) = 0x80040001u;
    MEM32(esi + 0x24) = eax;
    goto loc_0050F6CF;

loc_0050F67C: ;
    MEM32(esi + 0x30) = MEM32(esi + 0x30) & 0;

loc_0050F680: ;
    ecx = 0; /* xor self */

loc_0050F682: ;
    if (CMP_LE(MEM32(edi), ecx)) goto loc_0050F6C8; /* jle: less or equal (signed <=) */

loc_0050F686: ;
    eax = MEM32(esi + 0x24);
    (void)0; /* cmp eax, 0x18 - flags set for next jcc */
    MEM32(ebp + -8) = eax;
    if (CMP_A(eax, 0x18)) goto loc_0050F6C8; /* ja: above (unsigned >) */

loc_0050F691: ;
    ecx = MEM32(ebx);
    SET_LO8(eax, MEM8(ecx));
    edx = MEM32(esi + 0x20);
    ecx++;
    MEM32(ebx) = ecx;
    MEM32(edi) = MEM32(edi) - 1;
    PUSH32(esp, 8);
    POP32(esp, ecx);
    ecx = ecx - MEM32(ebp + -4);
    edx = edx << LO8(ecx);
    ecx = MEM32(ebp + -4);
    MEM32(ebp + -4) = MEM32(ebp + -4) & 0;
    SET_LO8(eax, LO8(eax) << LO8(ecx));
    eax = ZX8(LO8(eax));
    eax = eax >> LO8(ecx);
    edx = edx | eax;
    eax = MEM32(ebp + -8);
    eax = eax - ecx;
    eax = eax + 8;
    MEM32(esi + 0x20) = edx;
    MEM32(esi + 0x24) = eax;
    if (CMP_G(MEM32(edi), 0)) goto loc_0050F686; /* jg: greater (signed >) */

loc_0050F6C8: ;
    eax = MEM32(edi);
    ecx = MEM32(ebp + 0xC);
    MEM32(ecx) = eax;

loc_0050F6CF: ;
    eax = MEM32(ebp + 8);
    POP32(esp, edi);
    POP32(esp, esi);
    POP32(esp, ebx);
    esp = ebp;
    POP32(esp, ebp); /* leave */
    esp += 12; return; /* ret 8 */

}

/**
 * sub_0050F6D9
 * Original: 0x0050F6D9 - 0x0050F6F2 (25 bytes, 11 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0050F6D9(void)
{
    uint32_t ebp;
    int _flags = 0; /* fallback flag var */
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_0050F6D9: ;
    PUSH32(esp, ebx);
    PUSH32(esp, esi);
    esi = MEM32(esp + 0xC);
    eax = MEM32(esi + 8);
    eax = MEM32(eax);
    (void)0; /* cmp MEM32(eax + 0x64), 0 - flags set for next jcc */
    PUSH32(esp, edi);
    if (CMP_EQ(MEM32(eax + 0x64), 0)) { sub_0050F6F2(); return; } /* je: equal / zero */

loc_0050F6EB: ;
    SET_LO8(eax, MEM8(eax + 8));
    SET_LO8(eax, LO8(eax) + 0xB);
    g_seh_ebp = ebp; sub_0050F6F4(); return; /* tail jmp 0x0050F6F4 */

}

/**
 * sub_0050F738
 * Original: 0x0050F738 - 0x0050F7B9 (129 bytes, 56 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0050F738(void)
{
    uint32_t ebp;
    int _flags = 0; /* fallback flag var */

loc_0050F738: ;
    PUSH32(esp, ebp);
    ebp = esp;
    PUSH32(esp, esi);
    esi = MEM32(ebp + 8);
    eax = 0; /* xor self */
    if (CMP_A(MEM32(esi + 0x24), 0x18)) goto loc_0050F790; /* ja: above (unsigned >) */

loc_0050F747: ;
    PUSH32(esp, ebx);
    PUSH32(esp, edi);

loc_0050F749: ;
    edx = MEM32(esi + 0x1C);
    if (CMP_LE(edx & edx, 0)) goto loc_0050F774; /* jle: less or equal (signed <=) */

loc_0050F750: ;
    MEM32(esi + 0x20) = MEM32(esi + 0x20) << 8;
    ecx = MEM32(esi + 0x18);
    ebx = ZX8(MEM8(ecx));
    edi = MEM32(esi + 0x20);
    MEM32(esi + 0x24) = MEM32(esi + 0x24) + 8;
    ebx = ebx | edi;
    ecx++;
    edx--;
    MEM32(esi + 0x20) = ebx;
    MEM32(esi + 0x18) = ecx;
    MEM32(esi + 0x1C) = edx;
    if (CMP_BE(MEM32(esi + 0x24), 0x18)) goto loc_0050F749; /* jbe: below or equal (unsigned <=) */

loc_0050F774: ;
    (void)0; /* cmp MEM32(esi + 0x24), 0x18 - flags set for next jcc */
    POP32(esp, edi);
    POP32(esp, ebx);
    if (CMP_A(MEM32(esi + 0x24), 0x18)) goto loc_0050F790; /* ja: above (unsigned >) */

loc_0050F77C: ;
    if (CMP_G(MEM32(esi + 0x1C), 0)) goto loc_0050F790; /* jg: greater (signed >) */

loc_0050F782: ;
    eax = ebp + 8;
    PUSH32(esp, eax);
    PUSH32(esp, esi);
    PUSH32(esp, 0); sub_0050F54D(); /* call 0x0050F54D */

loc_0050F78C: ;
    if (TEST_S(eax, eax)) goto loc_0050F7B4; /* jl: less (signed <) */

loc_0050F790: ;
    ecx = MEM32(esi + 0x24);
    edx = MEM32(ebp + 0xC);
    if (CMP_AE(ecx, edx)) goto loc_0050F79C; /* jae: above or equal (unsigned >=) */

loc_0050F79A: ;
    edx = ecx;

loc_0050F79C: ;
    ecx = 0; /* xor self */
    SET_LO8(ecx, MEM8(esi + 0x24));
    esi = MEM32(esi + 0x20);
    SET_LO8(ecx, LO8(ecx) - LO8(edx));
    esi = esi >> LO8(ecx);
    PUSH32(esp, 0x20);
    POP32(esp, ecx);
    ecx = ecx - edx;
    esi = esi << LO8(ecx);
    ecx = MEM32(ebp + 0x10);
    MEM32(ecx) = esi;

loc_0050F7B4: ;
    POP32(esp, esi);
    POP32(esp, ebp);
    esp += 16; return; /* ret 12 */

}

/**
 * sub_0050F7B9
 * Original: 0x0050F7B9 - 0x0050F83D (132 bytes, 56 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0050F7B9(void)
{
    uint32_t ebp;
    int _flags = 0; /* fallback flag var */

loc_0050F7B9: ;
    PUSH32(esp, ebp);
    ebp = esp;
    PUSH32(esp, esi);
    esi = MEM32(ebp + 8);
    eax = 0; /* xor self */
    if (CMP_A(MEM32(esi + 0x24), 0x18)) goto loc_0050F811; /* ja: above (unsigned >) */

loc_0050F7C8: ;
    PUSH32(esp, ebx);
    PUSH32(esp, edi);

loc_0050F7CA: ;
    edx = MEM32(esi + 0x1C);
    if (CMP_LE(edx & edx, 0)) goto loc_0050F7F5; /* jle: less or equal (signed <=) */

loc_0050F7D1: ;
    MEM32(esi + 0x20) = MEM32(esi + 0x20) << 8;
    ecx = MEM32(esi + 0x18);
    ebx = ZX8(MEM8(ecx));
    edi = MEM32(esi + 0x20);
    MEM32(esi + 0x24) = MEM32(esi + 0x24) + 8;
    ebx = ebx | edi;
    ecx++;
    edx--;
    MEM32(esi + 0x20) = ebx;
    MEM32(esi + 0x18) = ecx;
    MEM32(esi + 0x1C) = edx;
    if (CMP_BE(MEM32(esi + 0x24), 0x18)) goto loc_0050F7CA; /* jbe: below or equal (unsigned <=) */

loc_0050F7F5: ;
    (void)0; /* cmp MEM32(esi + 0x24), 0x18 - flags set for next jcc */
    POP32(esp, edi);
    POP32(esp, ebx);
    if (CMP_A(MEM32(esi + 0x24), 0x18)) goto loc_0050F811; /* ja: above (unsigned >) */

loc_0050F7FD: ;
    if (CMP_G(MEM32(esi + 0x1C), 0)) goto loc_0050F811; /* jg: greater (signed >) */

loc_0050F803: ;
    eax = ebp + 8;
    PUSH32(esp, eax);
    PUSH32(esp, esi);
    PUSH32(esp, 0); sub_0050F54D(); /* call 0x0050F54D */

loc_0050F80D: ;
    if (TEST_S(eax, eax)) goto loc_0050F838; /* jl: less (signed <) */

loc_0050F811: ;
    edx = MEM32(ebp + 0xC);
    if (CMP_AE(MEM32(esi + 0x24), edx)) goto loc_0050F820; /* jae: above or equal (unsigned >=) */

loc_0050F819: ;
    eax = 0x80040004u;
    goto loc_0050F838;

loc_0050F820: ;
    ecx = 0; /* xor self */
    SET_LO8(ecx, MEM8(esi + 0x24));
    esi = MEM32(esi + 0x20);
    SET_LO8(ecx, LO8(ecx) - LO8(edx));
    esi = esi >> LO8(ecx);
    PUSH32(esp, 0x20);
    POP32(esp, ecx);
    ecx = ecx - edx;
    esi = esi << LO8(ecx);
    ecx = MEM32(ebp + 0x10);
    MEM32(ecx) = esi;

loc_0050F838: ;
    POP32(esp, esi);
    POP32(esp, ebp);
    esp += 16; return; /* ret 12 */

}

/**
 * sub_0050F83D
 * Original: 0x0050F83D - 0x0050F8AC (111 bytes, 45 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0050F83D(void)
{
    uint32_t ebp;
    int _flags = 0; /* fallback flag var */

loc_0050F83D: ;
    PUSH32(esp, ebp);
    ebp = esp;
    PUSH32(esp, esi);
    esi = MEM32(ebp + 8);
    ecx = MEM32(esi + 0x24);
    edx = MEM32(esi + 0x1C);
    edx = ecx + edx * 8;
    eax = 0; /* xor self */
    if (CMP_BE(MEM32(ebp + 0xC), edx)) goto loc_0050F894; /* jbe: below or equal (unsigned <=) */

loc_0050F854: ;
    if (CMP_A(ecx, 0x18)) goto loc_0050F886; /* ja: above (unsigned >) */

loc_0050F859: ;
    PUSH32(esp, edi);

loc_0050F85A: ;
    ecx = MEM32(esi + 0x1C);
    if (CMP_LE(ecx & ecx, 0)) goto loc_0050F885; /* jle: less or equal (signed <=) */

loc_0050F861: ;
    MEM32(esi + 0x20) = MEM32(esi + 0x20) << 8;
    eax = MEM32(esi + 0x18);
    edi = ZX8(MEM8(eax));
    edx = MEM32(esi + 0x20);
    MEM32(esi + 0x24) = MEM32(esi + 0x24) + 8;
    edi = edi | edx;
    eax++;
    ecx--;
    MEM32(esi + 0x20) = edi;
    MEM32(esi + 0x18) = eax;
    MEM32(esi + 0x1C) = ecx;
    if (CMP_BE(MEM32(esi + 0x24), 0x18)) goto loc_0050F85A; /* jbe: below or equal (unsigned <=) */

loc_0050F885: ;
    POP32(esp, edi);

loc_0050F886: ;
    eax = ebp + 8;
    PUSH32(esp, eax);
    PUSH32(esp, esi);
    PUSH32(esp, 0); sub_0050F54D(); /* call 0x0050F54D */

loc_0050F890: ;
    if (TEST_S(eax, eax)) goto loc_0050F8A7; /* jl: less (signed <) */

loc_0050F894: ;
    ecx = MEM32(esi + 0x1C);
    edx = MEM32(esi + 0x24);
    ecx = edx + ecx * 8;
    if (CMP_BE(MEM32(ebp + 0xC), ecx)) goto loc_0050F8A7; /* jbe: below or equal (unsigned <=) */

loc_0050F8A2: ;
    eax = 0x80040004u;

loc_0050F8A7: ;
    POP32(esp, esi);
    POP32(esp, ebp);
    esp += 12; return; /* ret 8 */

}

/**
 * sub_0050F8AC
 * Original: 0x0050F8AC - 0x0050F91E (114 bytes, 47 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0050F8AC(void)
{
    uint32_t ebp;
    int _flags = 0; /* fallback flag var */

loc_0050F8AC: ;
    PUSH32(esp, ebp);
    ebp = esp;
    PUSH32(esp, esi);
    esi = MEM32(ebp + 8);
    eax = 0; /* xor self */
    if (CMP_A(MEM32(esi + 0x24), 0x18)) goto loc_0050F904; /* ja: above (unsigned >) */

loc_0050F8BB: ;
    PUSH32(esp, ebx);
    PUSH32(esp, edi);

loc_0050F8BD: ;
    edx = MEM32(esi + 0x1C);
    if (CMP_LE(edx & edx, 0)) goto loc_0050F8E8; /* jle: less or equal (signed <=) */

loc_0050F8C4: ;
    MEM32(esi + 0x20) = MEM32(esi + 0x20) << 8;
    ecx = MEM32(esi + 0x18);
    ebx = ZX8(MEM8(ecx));
    edi = MEM32(esi + 0x20);
    MEM32(esi + 0x24) = MEM32(esi + 0x24) + 8;
    ebx = ebx | edi;
    ecx++;
    edx--;
    MEM32(esi + 0x20) = ebx;
    MEM32(esi + 0x18) = ecx;
    MEM32(esi + 0x1C) = edx;
    if (CMP_BE(MEM32(esi + 0x24), 0x18)) goto loc_0050F8BD; /* jbe: below or equal (unsigned <=) */

loc_0050F8E8: ;
    (void)0; /* cmp MEM32(esi + 0x24), 0x18 - flags set for next jcc */
    POP32(esp, edi);
    POP32(esp, ebx);
    if (CMP_A(MEM32(esi + 0x24), 0x18)) goto loc_0050F904; /* ja: above (unsigned >) */

loc_0050F8F0: ;
    if (CMP_G(MEM32(esi + 0x1C), 0)) goto loc_0050F904; /* jg: greater (signed >) */

loc_0050F8F6: ;
    eax = ebp + 8;
    PUSH32(esp, eax);
    PUSH32(esp, esi);
    PUSH32(esp, 0); sub_0050F54D(); /* call 0x0050F54D */

loc_0050F900: ;
    if (TEST_S(eax, eax)) goto loc_0050F919; /* jl: less (signed <) */

loc_0050F904: ;
    ecx = MEM32(esi + 0x24);
    if (CMP_A(MEM32(ebp + 0xC), ecx)) goto loc_0050F914; /* ja: above (unsigned >) */

loc_0050F90C: ;
    ecx = ecx - MEM32(ebp + 0xC);
    MEM32(esi + 0x24) = ecx;
    goto loc_0050F919;

loc_0050F914: ;
    eax = 0x80040004u;

loc_0050F919: ;
    POP32(esp, esi);
    POP32(esp, ebp);
    esp += 12; return; /* ret 8 */

}

/**
 * sub_0050F91E
 * Original: 0x0050F91E - 0x0050F931 (19 bytes, 10 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0050F91E(void)
{
    uint32_t ebp;

loc_0050F91E: ;
    PUSH32(esp, ebp);
    ebp = esp;
    PUSH32(esp, ebx);
    PUSH32(esp, esi);
    esi = MEM32(ebp + 8);
    ebx = 0; /* xor self */
    PUSH32(esp, edi);
    MEM32(esi + 0x20) = ebx;
    MEM32(esi + 0x24) = ebx;
    g_seh_ebp = ebp; sub_0050F94E(); return; /* tail jmp 0x0050F94E */

}

/**
 * sub_0050F9C4
 * Original: 0x0050F9C4 - 0x0050FAA2 (222 bytes, 85 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0050F9C4(void)
{
    uint32_t ebp;
    int _flags = 0; /* fallback flag var */

loc_0050F9C4: ;
    PUSH32(esp, ebp);
    ebp = esp;
    PUSH32(esp, esi);
    esi = MEM32(ebp + 8);
    if (CMP_A(MEM32(esi + 0x24), 0x18)) goto loc_0050F9E9; /* ja: above (unsigned >) */

loc_0050F9D1: ;
    if (CMP_G(MEM32(esi + 0x1C), 0)) goto loc_0050F9E9; /* jg: greater (signed >) */

loc_0050F9D7: ;
    eax = ebp + 8;
    PUSH32(esp, eax);
    PUSH32(esp, esi);
    PUSH32(esp, 0); sub_0050F54D(); /* call 0x0050F54D */

loc_0050F9E1: ;
    if (TEST_S(eax, eax)) goto loc_0050FA9D; /* jl: less (signed <) */

loc_0050F9E9: ;
    ecx = MEM32(esi + 0x1C);
    eax = MEM32(ebp + 0xC);
    edx = ecx;
    edx = edx << 3;
    if (CMP_AE(edx, eax)) goto loc_0050FA12; /* jae: above or equal (unsigned >=) */

loc_0050F9F8: ;
    edx = MEM32(esi + 0x24);
    edx = edx + ecx * 8;
    if (CMP_AE(edx, eax)) goto loc_0050FA12; /* jae: above or equal (unsigned >=) */

loc_0050FA02: ;
    eax = MEM32(ebp + 0x10);
    MEM32(eax) = MEM32(eax) & 0;
    eax = 0x80040004u;
    goto loc_0050FA9D;

loc_0050FA12: ;
    edx = MEM32(esi + 0x24);
    if (CMP_A(eax, edx)) goto loc_0050FA35; /* ja: above (unsigned >) */

loc_0050FA19: ;
    ecx = edx;
    edx = MEM32(esi + 0x20);
    ecx = ecx - eax;
    edx = edx >> LO8(ecx);
    MEM32(esi + 0x24) = ecx;
    edx = edx & MEM32(eax * 4 + 0x514F10);
    eax = MEM32(ebp + 0x10);
    MEM32(eax) = edx;
    eax = 0; /* xor self */
    goto loc_0050FA9D;

loc_0050FA35: ;
    PUSH32(esp, edi);
    edi = MEM32(edx * 4 + 0x514F10);
    edi = edi & MEM32(esi + 0x20);
    eax = eax - edx;
    (void)0; /* cmp ecx, 4 - flags set for next jcc */
    MEM32(ebp + 8) = eax;
    if (CMP_L(ecx, 4)) goto loc_0050FA91; /* jl: less (signed <) */

loc_0050FA4A: ;
    eax = MEM32(esi + 0x18);
    edx = ZX8(MEM8(eax + 1));
    SET_HI8(edx, MEM8(eax));
    PUSH32(esp, ebx);
    ebx = ZX8(MEM8(eax + 2));
    ecx = ecx + 0xFFFFFFFCu;
    PUSH32(esp, 0x20);
    edx = edx << 8;
    edx = edx | ebx;
    ebx = ZX8(MEM8(eax + 3));
    MEM32(esi + 0x1C) = ecx;
    edx = edx << 8;
    edx = edx | ebx;
    POP32(esp, ecx);
    ecx = ecx - MEM32(ebp + 8);
    MEM32(esi + 0x20) = edx;
    edx = edx >> LO8(ecx);
    MEM32(esi + 0x24) = ecx;
    ecx = MEM32(ebp + 8);
    edi = edi << LO8(ecx);
    eax = eax + 4;
    MEM32(esi + 0x18) = eax;
    eax = MEM32(ebp + 0x10);
    edx = edx | edi;
    MEM32(eax) = edx;
    eax = 0; /* xor self */
    POP32(esp, ebx);
    goto loc_0050FA9C;

loc_0050FA91: ;
    PUSH32(esp, MEM32(ebp + 0x10));
    PUSH32(esp, eax);
    PUSH32(esp, edi);
    PUSH32(esp, esi);
    PUSH32(esp, 0); sub_0050F91E(); /* call 0x0050F91E */

loc_0050FA9C: ;
    POP32(esp, edi);

loc_0050FA9D: ;
    POP32(esp, esi);
    POP32(esp, ebp);
    esp += 16; return; /* ret 12 */

}

/**
 * sub_0050FAA2
 * Original: 0x0050FAA2 - 0x005104DE (2620 bytes, 1000 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0050FAA2(void)
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

loc_0050FAA2: ;
    PUSH32(esp, ebp);
    ebp = esp + -108;
    esp = esp - 0xA0;
    eax = MEM32(ebp + 0x74);
    ecx = ZX16(MEM16(eax + 0x58));
    MEM32(ebp + 0x74) = MEM32(ebp + 0x74) & 0;
    MEM32(ebp + 0x58) = MEM32(ebp + 0x58) & 0;
    MEM32(ebp + 0x64) = ecx;
    ecx = MEM32(eax + 0x398);
    PUSH32(esp, ebx);
    PUSH32(esp, esi);
    esi = MEM32(eax + 0x42C);
    eax = MEM32(eax + 0xA0);
    MEM32(ebp + 0x4C) = ecx;
    ecx = MEM32(ebp + 0x78);
    ebx = (uint32_t)(int32_t)SMEM16(ecx + 0x38);
    edx = MEM32(ecx + 0x44);
    eax = eax + eax * 2;
    eax = eax - ebx;
    PUSH32(esp, edi);
    edi = MEM32(ecx + 0x3C);
    MEM32(ebp + 0x60) = edx;
    edx = MEM32(ecx + 0x40);
    MEM32(ebp + 0x5C) = ebx;
    if (((int32_t)eax >= 0)) goto loc_0050FAF6; /* jns: not sign (positive) */

loc_0050FAF4: ;
    eax = 0; /* xor self */

loc_0050FAF6: ;
    ebx = eax;
    ebx = ebx & 0xF;
    eax = (uint32_t)((int32_t)eax >> 4);
    (void)0; /* test eax, eax - flags set for next jcc */
    MEM32(ebp + 0x50) = ebx;
    ecx = 0xFFFF0000u;
    if (CMP_LE(eax & eax, 0)) goto loc_0050FF61; /* jle: less or equal (signed <=) */

loc_0050FB0E: ;
    MEM32(ebp + 0x58) = MEM32(ebp + 0x58) & 0;
    MEM32(ebp + 0x54) = eax;
    eax = eax << 4;
    MEM32(ebp + 0x5C) = MEM32(ebp + 0x5C) + eax;

loc_0050FB1B: ;
    esi = esi - 4;
    fp_push(MEMF(esi)); /* fld float */
    edi = edi - 4;
    fp_st1() *= fp_top(); fp_pop(); /* fmul */
    MEMF(ebp + 0x68) = (float)fp_top(); fp_popp(); /* fstp */
    fp_push(MEMF(ebp + 0x68)); /* fld float */
    MEM32(ebp + 0x24) = (int32_t)fp_top(); /* fistp */
    eax = MEM32(ebp + 0x24);
    if (CMP_GE(eax, ecx)) goto loc_0050FB39; /* jge: greater or equal (signed >=) */

loc_0050FB35: ;
    eax = ecx;
    goto loc_0050FB44;

loc_0050FB39: ;
    ebx = 0xFFFF;
    if (CMP_LE(eax, ebx)) goto loc_0050FB44; /* jle: less or equal (signed <=) */

loc_0050FB42: ;
    eax = ebx;

loc_0050FB44: ;
    ebx = MEM32(ebp + 0x64);
    MEM16(edx) = LO16(eax);
    ebx = ebx + ebx;
    esi = esi - 4;
    fp_push(MEMF(esi)); /* fld float */
    edx = edx + ebx;
    ebx = MEM32(ebp + 0x74);
    edi = edi - 4;
    fp_st1() *= fp_top(); fp_pop(); /* fmul */
    eax = (uint32_t)((int32_t)eax >> 0x1F);
    eax = eax & 1;
    ebx = ebx + ebx;
    eax = eax | ebx;
    MEMF(ebp + 0x68) = (float)fp_top(); fp_popp(); /* fstp */
    MEM32(ebp + 0x74) = eax;
    fp_push(MEMF(ebp + 0x68)); /* fld float */
    MEM32(ebp + -52) = (int32_t)fp_top(); /* fistp */
    eax = MEM32(ebp + -52);
    if (CMP_GE(eax, ecx)) goto loc_0050FB7C; /* jge: greater or equal (signed >=) */

loc_0050FB78: ;
    eax = ecx;
    goto loc_0050FB87;

loc_0050FB7C: ;
    ebx = 0xFFFF;
    if (CMP_LE(eax, ebx)) goto loc_0050FB87; /* jle: less or equal (signed <=) */

loc_0050FB85: ;
    eax = ebx;

loc_0050FB87: ;
    ebx = MEM32(ebp + 0x64);
    MEM16(edx) = LO16(eax);
    ebx = ebx + ebx;
    esi = esi - 4;
    fp_push(MEMF(esi)); /* fld float */
    edx = edx + ebx;
    ebx = MEM32(ebp + 0x74);
    edi = edi - 4;
    fp_st1() *= fp_top(); fp_pop(); /* fmul */
    eax = (uint32_t)((int32_t)eax >> 0x1F);
    eax = eax & 1;
    ebx = ebx + ebx;
    eax = eax | ebx;
    MEMF(ebp + 0x68) = (float)fp_top(); fp_popp(); /* fstp */
    MEM32(ebp + 0x74) = eax;
    fp_push(MEMF(ebp + 0x68)); /* fld float */
    MEM32(ebp + -28) = (int32_t)fp_top(); /* fistp */
    eax = MEM32(ebp + -28);
    if (CMP_GE(eax, ecx)) goto loc_0050FBBF; /* jge: greater or equal (signed >=) */

loc_0050FBBB: ;
    eax = ecx;
    goto loc_0050FBCA;

loc_0050FBBF: ;
    ebx = 0xFFFF;
    if (CMP_LE(eax, ebx)) goto loc_0050FBCA; /* jle: less or equal (signed <=) */

loc_0050FBC8: ;
    eax = ebx;

loc_0050FBCA: ;
    ebx = MEM32(ebp + 0x64);
    MEM16(edx) = LO16(eax);
    ebx = ebx + ebx;
    esi = esi - 4;
    fp_push(MEMF(esi)); /* fld float */
    edx = edx + ebx;
    ebx = MEM32(ebp + 0x74);
    edi = edi - 4;
    fp_st1() *= fp_top(); fp_pop(); /* fmul */
    eax = (uint32_t)((int32_t)eax >> 0x1F);
    eax = eax & 1;
    ebx = ebx + ebx;
    eax = eax | ebx;
    MEMF(ebp + 0x68) = (float)fp_top(); fp_popp(); /* fstp */
    MEM32(ebp + 0x74) = eax;
    fp_push(MEMF(ebp + 0x68)); /* fld float */
    MEM32(ebp + 0x3C) = (int32_t)fp_top(); /* fistp */
    eax = MEM32(ebp + 0x3C);
    if (CMP_GE(eax, ecx)) goto loc_0050FC02; /* jge: greater or equal (signed >=) */

loc_0050FBFE: ;
    eax = ecx;
    goto loc_0050FC0D;

loc_0050FC02: ;
    ebx = 0xFFFF;
    if (CMP_LE(eax, ebx)) goto loc_0050FC0D; /* jle: less or equal (signed <=) */

loc_0050FC0B: ;
    eax = ebx;

loc_0050FC0D: ;
    ebx = MEM32(ebp + 0x64);
    MEM16(edx) = LO16(eax);
    ebx = ebx + ebx;
    esi = esi - 4;
    fp_push(MEMF(esi)); /* fld float */
    edx = edx + ebx;
    ebx = MEM32(ebp + 0x74);
    edi = edi - 4;
    fp_st1() *= fp_top(); fp_pop(); /* fmul */
    eax = (uint32_t)((int32_t)eax >> 0x1F);
    eax = eax & 1;
    ebx = ebx + ebx;
    eax = eax | ebx;
    MEMF(ebp + 0x68) = (float)fp_top(); fp_popp(); /* fstp */
    MEM32(ebp + 0x74) = eax;
    fp_push(MEMF(ebp + 0x68)); /* fld float */
    MEM32(ebp + -12) = (int32_t)fp_top(); /* fistp */
    eax = MEM32(ebp + -12);
    if (CMP_GE(eax, ecx)) goto loc_0050FC45; /* jge: greater or equal (signed >=) */

loc_0050FC41: ;
    eax = ecx;
    goto loc_0050FC50;

loc_0050FC45: ;
    ebx = 0xFFFF;
    if (CMP_LE(eax, ebx)) goto loc_0050FC50; /* jle: less or equal (signed <=) */

loc_0050FC4E: ;
    eax = ebx;

loc_0050FC50: ;
    ebx = MEM32(ebp + 0x64);
    MEM16(edx) = LO16(eax);
    ebx = ebx + ebx;
    esi = esi - 4;
    fp_push(MEMF(esi)); /* fld float */
    edx = edx + ebx;
    ebx = MEM32(ebp + 0x74);
    edi = edi - 4;
    fp_st1() *= fp_top(); fp_pop(); /* fmul */
    eax = (uint32_t)((int32_t)eax >> 0x1F);
    eax = eax & 1;
    ebx = ebx + ebx;
    eax = eax | ebx;
    MEMF(ebp + 0x68) = (float)fp_top(); fp_popp(); /* fstp */
    MEM32(ebp + 0x74) = eax;
    fp_push(MEMF(ebp + 0x68)); /* fld float */
    MEM32(ebp + 0x14) = (int32_t)fp_top(); /* fistp */
    eax = MEM32(ebp + 0x14);
    if (CMP_GE(eax, ecx)) goto loc_0050FC88; /* jge: greater or equal (signed >=) */

loc_0050FC84: ;
    eax = ecx;
    goto loc_0050FC93;

loc_0050FC88: ;
    ebx = 0xFFFF;
    if (CMP_LE(eax, ebx)) goto loc_0050FC93; /* jle: less or equal (signed <=) */

loc_0050FC91: ;
    eax = ebx;

loc_0050FC93: ;
    ebx = MEM32(ebp + 0x64);
    MEM16(edx) = LO16(eax);
    ebx = ebx + ebx;
    esi = esi - 4;
    fp_push(MEMF(esi)); /* fld float */
    edx = edx + ebx;
    ebx = MEM32(ebp + 0x74);
    edi = edi - 4;
    fp_st1() *= fp_top(); fp_pop(); /* fmul */
    eax = (uint32_t)((int32_t)eax >> 0x1F);
    eax = eax & 1;
    ebx = ebx + ebx;
    eax = eax | ebx;
    MEMF(ebp + 0x68) = (float)fp_top(); fp_popp(); /* fstp */
    MEM32(ebp + 0x74) = eax;
    fp_push(MEMF(ebp + 0x68)); /* fld float */
    MEM32(ebp + -44) = (int32_t)fp_top(); /* fistp */
    eax = MEM32(ebp + -44);
    if (CMP_GE(eax, ecx)) goto loc_0050FCCB; /* jge: greater or equal (signed >=) */

loc_0050FCC7: ;
    eax = ecx;
    goto loc_0050FCD6;

loc_0050FCCB: ;
    ebx = 0xFFFF;
    if (CMP_LE(eax, ebx)) goto loc_0050FCD6; /* jle: less or equal (signed <=) */

loc_0050FCD4: ;
    eax = ebx;

loc_0050FCD6: ;
    ebx = MEM32(ebp + 0x64);
    MEM16(edx) = LO16(eax);
    ebx = ebx + ebx;
    esi = esi - 4;
    fp_push(MEMF(esi)); /* fld float */
    edx = edx + ebx;
    ebx = MEM32(ebp + 0x74);
    edi = edi - 4;
    fp_st1() *= fp_top(); fp_pop(); /* fmul */
    eax = (uint32_t)((int32_t)eax >> 0x1F);
    eax = eax & 1;
    ebx = ebx + ebx;
    eax = eax | ebx;
    MEMF(ebp + 0x68) = (float)fp_top(); fp_popp(); /* fstp */
    MEM32(ebp + 0x74) = eax;
    fp_push(MEMF(ebp + 0x68)); /* fld float */
    MEM32(ebp + 4) = (int32_t)fp_top(); /* fistp */
    eax = MEM32(ebp + 4);
    if (CMP_GE(eax, ecx)) goto loc_0050FD0E; /* jge: greater or equal (signed >=) */

loc_0050FD0A: ;
    eax = ecx;
    goto loc_0050FD19;

loc_0050FD0E: ;
    ebx = 0xFFFF;
    if (CMP_LE(eax, ebx)) goto loc_0050FD19; /* jle: less or equal (signed <=) */

loc_0050FD17: ;
    eax = ebx;

loc_0050FD19: ;
    ebx = MEM32(ebp + 0x64);
    MEM16(edx) = LO16(eax);
    ebx = ebx + ebx;
    esi = esi - 4;
    fp_push(MEMF(esi)); /* fld float */
    edx = edx + ebx;
    ebx = MEM32(ebp + 0x74);
    edi = edi - 4;
    fp_st1() *= fp_top(); fp_pop(); /* fmul */
    eax = (uint32_t)((int32_t)eax >> 0x1F);
    eax = eax & 1;
    ebx = ebx + ebx;
    eax = eax | ebx;
    MEMF(ebp + 0x68) = (float)fp_top(); fp_popp(); /* fstp */
    MEM32(ebp + 0x74) = eax;
    fp_push(MEMF(ebp + 0x68)); /* fld float */
    MEM32(ebp + 0x34) = (int32_t)fp_top(); /* fistp */
    eax = MEM32(ebp + 0x34);
    if (CMP_GE(eax, ecx)) goto loc_0050FD51; /* jge: greater or equal (signed >=) */

loc_0050FD4D: ;
    eax = ecx;
    goto loc_0050FD5C;

loc_0050FD51: ;
    ebx = 0xFFFF;
    if (CMP_LE(eax, ebx)) goto loc_0050FD5C; /* jle: less or equal (signed <=) */

loc_0050FD5A: ;
    eax = ebx;

loc_0050FD5C: ;
    ebx = MEM32(ebp + 0x64);
    MEM16(edx) = LO16(eax);
    ebx = ebx + ebx;
    esi = esi - 4;
    fp_push(MEMF(esi)); /* fld float */
    edx = edx + ebx;
    ebx = MEM32(ebp + 0x74);
    edi = edi - 4;
    fp_st1() *= fp_top(); fp_pop(); /* fmul */
    eax = (uint32_t)((int32_t)eax >> 0x1F);
    eax = eax & 1;
    ebx = ebx + ebx;
    eax = eax | ebx;
    MEMF(ebp + 0x68) = (float)fp_top(); fp_popp(); /* fstp */
    MEM32(ebp + 0x74) = eax;
    fp_push(MEMF(ebp + 0x68)); /* fld float */
    MEM32(ebp + 0x2C) = (int32_t)fp_top(); /* fistp */
    eax = MEM32(ebp + 0x2C);
    if (CMP_GE(eax, ecx)) goto loc_0050FD94; /* jge: greater or equal (signed >=) */

loc_0050FD90: ;
    eax = ecx;
    goto loc_0050FD9F;

loc_0050FD94: ;
    ebx = 0xFFFF;
    if (CMP_LE(eax, ebx)) goto loc_0050FD9F; /* jle: less or equal (signed <=) */

loc_0050FD9D: ;
    eax = ebx;

loc_0050FD9F: ;
    ebx = MEM32(ebp + 0x64);
    MEM16(edx) = LO16(eax);
    ebx = ebx + ebx;
    esi = esi - 4;
    fp_push(MEMF(esi)); /* fld float */
    edx = edx + ebx;
    ebx = MEM32(ebp + 0x74);
    edi = edi - 4;
    fp_st1() *= fp_top(); fp_pop(); /* fmul */
    eax = (uint32_t)((int32_t)eax >> 0x1F);
    eax = eax & 1;
    ebx = ebx + ebx;
    eax = eax | ebx;
    MEMF(ebp + 0x68) = (float)fp_top(); fp_popp(); /* fstp */
    MEM32(ebp + 0x74) = eax;
    fp_push(MEMF(ebp + 0x68)); /* fld float */
    MEM32(ebp + 0x1C) = (int32_t)fp_top(); /* fistp */
    eax = MEM32(ebp + 0x1C);
    if (CMP_GE(eax, ecx)) goto loc_0050FDD7; /* jge: greater or equal (signed >=) */

loc_0050FDD3: ;
    eax = ecx;
    goto loc_0050FDE2;

loc_0050FDD7: ;
    ebx = 0xFFFF;
    if (CMP_LE(eax, ebx)) goto loc_0050FDE2; /* jle: less or equal (signed <=) */

loc_0050FDE0: ;
    eax = ebx;

loc_0050FDE2: ;
    ebx = MEM32(ebp + 0x64);
    MEM16(edx) = LO16(eax);
    ebx = ebx + ebx;
    esi = esi - 4;
    fp_push(MEMF(esi)); /* fld float */
    edx = edx + ebx;
    ebx = MEM32(ebp + 0x74);
    edi = edi - 4;
    fp_st1() *= fp_top(); fp_pop(); /* fmul */
    eax = (uint32_t)((int32_t)eax >> 0x1F);
    eax = eax & 1;
    ebx = ebx + ebx;
    eax = eax | ebx;
    MEMF(ebp + 0x68) = (float)fp_top(); fp_popp(); /* fstp */
    MEM32(ebp + 0x74) = eax;
    fp_push(MEMF(ebp + 0x68)); /* fld float */
    MEM32(ebp + 0xC) = (int32_t)fp_top(); /* fistp */
    eax = MEM32(ebp + 0xC);
    if (CMP_GE(eax, ecx)) goto loc_0050FE1A; /* jge: greater or equal (signed >=) */

loc_0050FE16: ;
    eax = ecx;
    goto loc_0050FE25;

loc_0050FE1A: ;
    ebx = 0xFFFF;
    if (CMP_LE(eax, ebx)) goto loc_0050FE25; /* jle: less or equal (signed <=) */

loc_0050FE23: ;
    eax = ebx;

loc_0050FE25: ;
    ebx = MEM32(ebp + 0x64);
    MEM16(edx) = LO16(eax);
    ebx = ebx + ebx;
    esi = esi - 4;
    fp_push(MEMF(esi)); /* fld float */
    edx = edx + ebx;
    ebx = MEM32(ebp + 0x74);
    edi = edi - 4;
    fp_st1() *= fp_top(); fp_pop(); /* fmul */
    eax = (uint32_t)((int32_t)eax >> 0x1F);
    eax = eax & 1;
    ebx = ebx + ebx;
    eax = eax | ebx;
    MEMF(ebp + 0x68) = (float)fp_top(); fp_popp(); /* fstp */
    MEM32(ebp + 0x74) = eax;
    fp_push(MEMF(ebp + 0x68)); /* fld float */
    MEM32(ebp + -4) = (int32_t)fp_top(); /* fistp */
    eax = MEM32(ebp + -4);
    if (CMP_GE(eax, ecx)) goto loc_0050FE5D; /* jge: greater or equal (signed >=) */

loc_0050FE59: ;
    eax = ecx;
    goto loc_0050FE68;

loc_0050FE5D: ;
    ebx = 0xFFFF;
    if (CMP_LE(eax, ebx)) goto loc_0050FE68; /* jle: less or equal (signed <=) */

loc_0050FE66: ;
    eax = ebx;

loc_0050FE68: ;
    ebx = MEM32(ebp + 0x64);
    MEM16(edx) = LO16(eax);
    ebx = ebx + ebx;
    esi = esi - 4;
    fp_push(MEMF(esi)); /* fld float */
    edx = edx + ebx;
    ebx = MEM32(ebp + 0x74);
    edi = edi - 4;
    fp_st1() *= fp_top(); fp_pop(); /* fmul */
    eax = (uint32_t)((int32_t)eax >> 0x1F);
    eax = eax & 1;
    ebx = ebx + ebx;
    eax = eax | ebx;
    MEMF(ebp + 0x68) = (float)fp_top(); fp_popp(); /* fstp */
    MEM32(ebp + 0x74) = eax;
    fp_push(MEMF(ebp + 0x68)); /* fld float */
    MEM32(ebp + -20) = (int32_t)fp_top(); /* fistp */
    eax = MEM32(ebp + -20);
    if (CMP_GE(eax, ecx)) goto loc_0050FEA0; /* jge: greater or equal (signed >=) */

loc_0050FE9C: ;
    eax = ecx;
    goto loc_0050FEAB;

loc_0050FEA0: ;
    ebx = 0xFFFF;
    if (CMP_LE(eax, ebx)) goto loc_0050FEAB; /* jle: less or equal (signed <=) */

loc_0050FEA9: ;
    eax = ebx;

loc_0050FEAB: ;
    ebx = MEM32(ebp + 0x64);
    MEM16(edx) = LO16(eax);
    ebx = ebx + ebx;
    esi = esi - 4;
    fp_push(MEMF(esi)); /* fld float */
    edx = edx + ebx;
    ebx = MEM32(ebp + 0x74);
    edi = edi - 4;
    fp_st1() *= fp_top(); fp_pop(); /* fmul */
    eax = (uint32_t)((int32_t)eax >> 0x1F);
    eax = eax & 1;
    ebx = ebx + ebx;
    eax = eax | ebx;
    MEMF(ebp + 0x68) = (float)fp_top(); fp_popp(); /* fstp */
    MEM32(ebp + 0x74) = eax;
    fp_push(MEMF(ebp + 0x68)); /* fld float */
    MEM32(ebp + -36) = (int32_t)fp_top(); /* fistp */
    eax = MEM32(ebp + -36);
    if (CMP_GE(eax, ecx)) goto loc_0050FEE3; /* jge: greater or equal (signed >=) */

loc_0050FEDF: ;
    eax = ecx;
    goto loc_0050FEEE;

loc_0050FEE3: ;
    ebx = 0xFFFF;
    if (CMP_LE(eax, ebx)) goto loc_0050FEEE; /* jle: less or equal (signed <=) */

loc_0050FEEC: ;
    eax = ebx;

loc_0050FEEE: ;
    ebx = MEM32(ebp + 0x64);
    MEM16(edx) = LO16(eax);
    ebx = ebx + ebx;
    esi = esi - 4;
    fp_push(MEMF(esi)); /* fld float */
    edx = edx + ebx;
    ebx = MEM32(ebp + 0x74);
    edi = edi - 4;
    fp_st1() *= fp_top(); fp_pop(); /* fmul */
    eax = (uint32_t)((int32_t)eax >> 0x1F);
    eax = eax & 1;
    ebx = ebx + ebx;
    eax = eax | ebx;
    MEMF(ebp + 0x68) = (float)fp_top(); fp_popp(); /* fstp */
    MEM32(ebp + 0x74) = eax;
    fp_push(MEMF(ebp + 0x68)); /* fld float */
    MEM32(ebp + 0x44) = (int32_t)fp_top(); /* fistp */
    eax = MEM32(ebp + 0x44);
    if (CMP_GE(eax, ecx)) goto loc_0050FF26; /* jge: greater or equal (signed >=) */

loc_0050FF22: ;
    eax = ecx;
    goto loc_0050FF31;

loc_0050FF26: ;
    ebx = 0xFFFF;
    if (CMP_LE(eax, ebx)) goto loc_0050FF31; /* jle: less or equal (signed <=) */

loc_0050FF2F: ;
    eax = ebx;

loc_0050FF31: ;
    ebx = MEM32(ebp + 0x64);
    ebx = ebx + ebx;
    MEM16(edx) = LO16(eax);
    edx = edx + ebx;
    ebx = MEM32(ebp + 0x74);
    eax = (uint32_t)((int32_t)eax >> 0x1F);
    ebx = ebx + ebx;
    eax = eax & 1;
    eax = eax | ebx;
    ebx = MEM32(ebp + 0x60);
    MEM32(ebp + 0x60) = MEM32(ebp + 0x60) + 2;
    MEM32(ebp + 0x54) = MEM32(ebp + 0x54) - 1;
    MEM32(ebp + 0x74) = eax;
    MEM16(ebx) = LO16(eax);
    if ((MEM32(ebp + 0x54) != 0)) goto loc_0050FB1B; /* jne: not equal / not zero */

loc_0050FF5E: ;
    ebx = MEM32(ebp + 0x50);

loc_0050FF61: ;
    if (CMP_LE(ebx & ebx, 0)) goto loc_0050FFCB; /* jle: less or equal (signed <=) */

loc_0050FF65: ;
    esi = esi - 4;
    fp_push(MEMF(esi)); /* fld float */
    edi = edi - 4;
    fp_st1() *= fp_top(); fp_pop(); /* fmul */
    MEMF(ebp + 0x68) = (float)fp_top(); fp_popp(); /* fstp */
    fp_push(MEMF(ebp + 0x68)); /* fld float */
    MEM32(ebp + 0x44) = (int32_t)fp_top(); /* fistp */
    eax = MEM32(ebp + 0x44);
    if (CMP_GE(eax, ecx)) goto loc_0050FF83; /* jge: greater or equal (signed >=) */

loc_0050FF7F: ;
    eax = ecx;
    goto loc_0050FF8E;

loc_0050FF83: ;
    ebx = 0xFFFF;
    if (CMP_LE(eax, ebx)) goto loc_0050FF8E; /* jle: less or equal (signed <=) */

loc_0050FF8C: ;
    eax = ebx;

loc_0050FF8E: ;
    ebx = MEM32(ebp + 0x64);
    ebx = ebx + ebx;
    MEM16(edx) = LO16(eax);
    edx = edx + ebx;
    ebx = MEM32(ebp + 0x74);
    eax = (uint32_t)((int32_t)eax >> 0x1F);
    eax = eax & 1;
    ebx = ebx + ebx;
    eax = eax | ebx;
    MEM32(ebp + 0x58) = MEM32(ebp + 0x58) + 1;
    (void)0; /* cmp MEM32(ebp + 0x58), 0x10 - flags set for next jcc */
    MEM32(ebp + 0x74) = eax;
    if (CMP_B(MEM32(ebp + 0x58), 0x10)) goto loc_0050FFBF; /* jb: below (unsigned <) */

loc_0050FFB1: ;
    ebx = MEM32(ebp + 0x60);
    MEM32(ebp + 0x60) = MEM32(ebp + 0x60) + 2;
    MEM32(ebp + 0x58) = MEM32(ebp + 0x58) & 0;
    MEM16(ebx) = LO16(eax);

loc_0050FFBF: ;
    MEM32(ebp + 0x50) = MEM32(ebp + 0x50) + 1;
    MEM32(ebp + 0x5C) = MEM32(ebp + 0x5C) + 1;
    if (CMP_G(MEM32(ebp + 0x50), 0)) goto loc_0050FF65; /* jg: greater (signed >) */

loc_0050FFCB: ;
    eax = MEM32(ebp + 0x4C);
    eax = eax - MEM32(ebp + 0x5C);
    if (((int32_t)eax >= 0)) goto loc_0050FFD5; /* jns: not sign (positive) */

loc_0050FFD3: ;
    eax = 0; /* xor self */

loc_0050FFD5: ;
    ebx = eax;
    ebx = ebx & 0xF;
    eax = (uint32_t)((int32_t)eax >> 4);
    (void)0; /* test eax, eax - flags set for next jcc */
    MEM32(ebp + 0x50) = ebx;
    if (CMP_LE(eax & eax, 0)) goto loc_00510458; /* jle: less or equal (signed <=) */

loc_0050FFE8: ;
    MEM32(ebp + 0x58) = MEM32(ebp + 0x58) & 0;
    MEM32(ebp + 0x5C) = MEM32(ebp + 0x5C) + eax;
    MEM32(ebp + 0x54) = eax;

loc_0050FFF2: ;
    esi = esi - 4;
    fp_push(MEMF(esi)); /* fld float */
    fp_top() = -fp_top(); /* fchs */
    fp_st1() *= fp_top(); fp_pop(); /* fmul */
    edi = edi + 4;
    MEMF(ebp + 0x68) = (float)fp_top(); fp_popp(); /* fstp */
    fp_push(MEMF(ebp + 0x68)); /* fld float */
    MEM32(ebp + 0x44) = (int32_t)fp_top(); /* fistp */
    eax = MEM32(ebp + 0x44);
    if (CMP_GE(eax, ecx)) goto loc_00510012; /* jge: greater or equal (signed >=) */

loc_0051000E: ;
    eax = ecx;
    goto loc_0051001D;

loc_00510012: ;
    ebx = 0xFFFF;
    if (CMP_LE(eax, ebx)) goto loc_0051001D; /* jle: less or equal (signed <=) */

loc_0051001B: ;
    eax = ebx;

loc_0051001D: ;
    ebx = MEM32(ebp + 0x64);
    MEM16(edx) = LO16(eax);
    esi = esi - 4;
    fp_push(MEMF(esi)); /* fld float */
    ebx = ebx + ebx;
    fp_top() = -fp_top(); /* fchs */
    edx = edx + ebx;
    ebx = MEM32(ebp + 0x74);
    eax = (uint32_t)((int32_t)eax >> 0x1F);
    fp_st1() *= fp_top(); fp_pop(); /* fmul */
    eax = eax & 1;
    ebx = ebx + ebx;
    eax = eax | ebx;
    MEMF(ebp + 0x68) = (float)fp_top(); fp_popp(); /* fstp */
    MEM32(ebp + 0x74) = eax;
    edi = edi + 4;
    fp_push(MEMF(ebp + 0x68)); /* fld float */
    MEM32(ebp + -36) = (int32_t)fp_top(); /* fistp */
    eax = MEM32(ebp + -36);
    if (CMP_GE(eax, ecx)) goto loc_00510057; /* jge: greater or equal (signed >=) */

loc_00510053: ;
    eax = ecx;
    goto loc_00510062;

loc_00510057: ;
    ebx = 0xFFFF;
    if (CMP_LE(eax, ebx)) goto loc_00510062; /* jle: less or equal (signed <=) */

loc_00510060: ;
    eax = ebx;

loc_00510062: ;
    ebx = MEM32(ebp + 0x64);
    MEM16(edx) = LO16(eax);
    esi = esi - 4;
    fp_push(MEMF(esi)); /* fld float */
    ebx = ebx + ebx;
    fp_top() = -fp_top(); /* fchs */
    edx = edx + ebx;
    ebx = MEM32(ebp + 0x74);
    eax = (uint32_t)((int32_t)eax >> 0x1F);
    fp_st1() *= fp_top(); fp_pop(); /* fmul */
    eax = eax & 1;
    ebx = ebx + ebx;
    eax = eax | ebx;
    MEMF(ebp + 0x68) = (float)fp_top(); fp_popp(); /* fstp */
    MEM32(ebp + 0x74) = eax;
    edi = edi + 4;
    fp_push(MEMF(ebp + 0x68)); /* fld float */
    MEM32(ebp + -20) = (int32_t)fp_top(); /* fistp */
    eax = MEM32(ebp + -20);
    if (CMP_GE(eax, ecx)) goto loc_0051009C; /* jge: greater or equal (signed >=) */

loc_00510098: ;
    eax = ecx;
    goto loc_005100A7;

loc_0051009C: ;
    ebx = 0xFFFF;
    if (CMP_LE(eax, ebx)) goto loc_005100A7; /* jle: less or equal (signed <=) */

loc_005100A5: ;
    eax = ebx;

loc_005100A7: ;
    ebx = MEM32(ebp + 0x64);
    MEM16(edx) = LO16(eax);
    esi = esi - 4;
    fp_push(MEMF(esi)); /* fld float */
    ebx = ebx + ebx;
    fp_top() = -fp_top(); /* fchs */
    edx = edx + ebx;
    ebx = MEM32(ebp + 0x74);
    eax = (uint32_t)((int32_t)eax >> 0x1F);
    fp_st1() *= fp_top(); fp_pop(); /* fmul */
    eax = eax & 1;
    ebx = ebx + ebx;
    eax = eax | ebx;
    MEMF(ebp + 0x68) = (float)fp_top(); fp_popp(); /* fstp */
    MEM32(ebp + 0x74) = eax;
    edi = edi + 4;
    fp_push(MEMF(ebp + 0x68)); /* fld float */
    MEM32(ebp + -4) = (int32_t)fp_top(); /* fistp */
    eax = MEM32(ebp + -4);
    if (CMP_GE(eax, ecx)) goto loc_005100E1; /* jge: greater or equal (signed >=) */

loc_005100DD: ;
    eax = ecx;
    goto loc_005100EC;

loc_005100E1: ;
    ebx = 0xFFFF;
    if (CMP_LE(eax, ebx)) goto loc_005100EC; /* jle: less or equal (signed <=) */

loc_005100EA: ;
    eax = ebx;

loc_005100EC: ;
    ebx = MEM32(ebp + 0x64);
    MEM16(edx) = LO16(eax);
    esi = esi - 4;
    fp_push(MEMF(esi)); /* fld float */
    ebx = ebx + ebx;
    fp_top() = -fp_top(); /* fchs */
    edx = edx + ebx;
    ebx = MEM32(ebp + 0x74);
    eax = (uint32_t)((int32_t)eax >> 0x1F);
    fp_st1() *= fp_top(); fp_pop(); /* fmul */
    eax = eax & 1;
    ebx = ebx + ebx;
    eax = eax | ebx;
    MEMF(ebp + 0x68) = (float)fp_top(); fp_popp(); /* fstp */
    MEM32(ebp + 0x74) = eax;
    edi = edi + 4;
    fp_push(MEMF(ebp + 0x68)); /* fld float */
    MEM32(ebp + 0xC) = (int32_t)fp_top(); /* fistp */
    eax = MEM32(ebp + 0xC);
    if (CMP_GE(eax, ecx)) goto loc_00510126; /* jge: greater or equal (signed >=) */

loc_00510122: ;
    eax = ecx;
    goto loc_00510131;

loc_00510126: ;
    ebx = 0xFFFF;
    if (CMP_LE(eax, ebx)) goto loc_00510131; /* jle: less or equal (signed <=) */

loc_0051012F: ;
    eax = ebx;

loc_00510131: ;
    ebx = MEM32(ebp + 0x64);
    MEM16(edx) = LO16(eax);
    esi = esi - 4;
    fp_push(MEMF(esi)); /* fld float */
    ebx = ebx + ebx;
    fp_top() = -fp_top(); /* fchs */
    edx = edx + ebx;
    ebx = MEM32(ebp + 0x74);
    eax = (uint32_t)((int32_t)eax >> 0x1F);
    fp_st1() *= fp_top(); fp_pop(); /* fmul */
    eax = eax & 1;
    ebx = ebx + ebx;
    eax = eax | ebx;
    MEMF(ebp + 0x68) = (float)fp_top(); fp_popp(); /* fstp */
    MEM32(ebp + 0x74) = eax;
    edi = edi + 4;
    fp_push(MEMF(ebp + 0x68)); /* fld float */
    MEM32(ebp + 0x1C) = (int32_t)fp_top(); /* fistp */
    eax = MEM32(ebp + 0x1C);
    if (CMP_GE(eax, ecx)) goto loc_0051016B; /* jge: greater or equal (signed >=) */

loc_00510167: ;
    eax = ecx;
    goto loc_00510176;

loc_0051016B: ;
    ebx = 0xFFFF;
    if (CMP_LE(eax, ebx)) goto loc_00510176; /* jle: less or equal (signed <=) */

loc_00510174: ;
    eax = ebx;

loc_00510176: ;
    ebx = MEM32(ebp + 0x64);
    MEM16(edx) = LO16(eax);
    esi = esi - 4;
    fp_push(MEMF(esi)); /* fld float */
    ebx = ebx + ebx;
    fp_top() = -fp_top(); /* fchs */
    edx = edx + ebx;
    ebx = MEM32(ebp + 0x74);
    eax = (uint32_t)((int32_t)eax >> 0x1F);
    fp_st1() *= fp_top(); fp_pop(); /* fmul */
    eax = eax & 1;
    ebx = ebx + ebx;
    eax = eax | ebx;
    MEMF(ebp + 0x68) = (float)fp_top(); fp_popp(); /* fstp */
    MEM32(ebp + 0x74) = eax;
    edi = edi + 4;
    fp_push(MEMF(ebp + 0x68)); /* fld float */
    MEM32(ebp + 0x2C) = (int32_t)fp_top(); /* fistp */
    eax = MEM32(ebp + 0x2C);
    if (CMP_GE(eax, ecx)) goto loc_005101B0; /* jge: greater or equal (signed >=) */

loc_005101AC: ;
    eax = ecx;
    goto loc_005101BB;

loc_005101B0: ;
    ebx = 0xFFFF;
    if (CMP_LE(eax, ebx)) goto loc_005101BB; /* jle: less or equal (signed <=) */

loc_005101B9: ;
    eax = ebx;

loc_005101BB: ;
    ebx = MEM32(ebp + 0x64);
    MEM16(edx) = LO16(eax);
    esi = esi - 4;
    fp_push(MEMF(esi)); /* fld float */
    ebx = ebx + ebx;
    fp_top() = -fp_top(); /* fchs */
    edx = edx + ebx;
    ebx = MEM32(ebp + 0x74);
    eax = (uint32_t)((int32_t)eax >> 0x1F);
    fp_st1() *= fp_top(); fp_pop(); /* fmul */
    eax = eax & 1;
    ebx = ebx + ebx;
    eax = eax | ebx;
    MEMF(ebp + 0x68) = (float)fp_top(); fp_popp(); /* fstp */
    MEM32(ebp + 0x74) = eax;
    edi = edi + 4;
    fp_push(MEMF(ebp + 0x68)); /* fld float */
    MEM32(ebp + 0x34) = (int32_t)fp_top(); /* fistp */
    eax = MEM32(ebp + 0x34);
    if (CMP_GE(eax, ecx)) goto loc_005101F5; /* jge: greater or equal (signed >=) */

loc_005101F1: ;
    eax = ecx;
    goto loc_00510200;

loc_005101F5: ;
    ebx = 0xFFFF;
    if (CMP_LE(eax, ebx)) goto loc_00510200; /* jle: less or equal (signed <=) */

loc_005101FE: ;
    eax = ebx;

loc_00510200: ;
    ebx = MEM32(ebp + 0x64);
    MEM16(edx) = LO16(eax);
    esi = esi - 4;
    fp_push(MEMF(esi)); /* fld float */
    ebx = ebx + ebx;
    fp_top() = -fp_top(); /* fchs */
    edx = edx + ebx;
    ebx = MEM32(ebp + 0x74);
    eax = (uint32_t)((int32_t)eax >> 0x1F);
    fp_st1() *= fp_top(); fp_pop(); /* fmul */
    eax = eax & 1;
    ebx = ebx + ebx;
    eax = eax | ebx;
    MEMF(ebp + 0x68) = (float)fp_top(); fp_popp(); /* fstp */
    MEM32(ebp + 0x74) = eax;
    edi = edi + 4;
    fp_push(MEMF(ebp + 0x68)); /* fld float */
    MEM32(ebp + 4) = (int32_t)fp_top(); /* fistp */
    eax = MEM32(ebp + 4);
    if (CMP_GE(eax, ecx)) goto loc_0051023A; /* jge: greater or equal (signed >=) */

loc_00510236: ;
    eax = ecx;
    goto loc_00510245;

loc_0051023A: ;
    ebx = 0xFFFF;
    if (CMP_LE(eax, ebx)) goto loc_00510245; /* jle: less or equal (signed <=) */

loc_00510243: ;
    eax = ebx;

loc_00510245: ;
    ebx = MEM32(ebp + 0x64);
    MEM16(edx) = LO16(eax);
    esi = esi - 4;
    fp_push(MEMF(esi)); /* fld float */
    ebx = ebx + ebx;
    fp_top() = -fp_top(); /* fchs */
    edx = edx + ebx;
    ebx = MEM32(ebp + 0x74);
    eax = (uint32_t)((int32_t)eax >> 0x1F);
    fp_st1() *= fp_top(); fp_pop(); /* fmul */
    eax = eax & 1;
    ebx = ebx + ebx;
    eax = eax | ebx;
    MEMF(ebp + 0x68) = (float)fp_top(); fp_popp(); /* fstp */
    MEM32(ebp + 0x74) = eax;
    edi = edi + 4;
    fp_push(MEMF(ebp + 0x68)); /* fld float */
    MEM32(ebp + -44) = (int32_t)fp_top(); /* fistp */
    eax = MEM32(ebp + -44);
    if (CMP_GE(eax, ecx)) goto loc_0051027F; /* jge: greater or equal (signed >=) */

loc_0051027B: ;
    eax = ecx;
    goto loc_0051028A;

loc_0051027F: ;
    ebx = 0xFFFF;
    if (CMP_LE(eax, ebx)) goto loc_0051028A; /* jle: less or equal (signed <=) */

loc_00510288: ;
    eax = ebx;

loc_0051028A: ;
    ebx = MEM32(ebp + 0x64);
    MEM16(edx) = LO16(eax);
    esi = esi - 4;
    fp_push(MEMF(esi)); /* fld float */
    ebx = ebx + ebx;
    fp_top() = -fp_top(); /* fchs */
    edx = edx + ebx;
    ebx = MEM32(ebp + 0x74);
    eax = (uint32_t)((int32_t)eax >> 0x1F);
    fp_st1() *= fp_top(); fp_pop(); /* fmul */
    eax = eax & 1;
    ebx = ebx + ebx;
    eax = eax | ebx;
    MEMF(ebp + 0x68) = (float)fp_top(); fp_popp(); /* fstp */
    MEM32(ebp + 0x74) = eax;
    edi = edi + 4;
    fp_push(MEMF(ebp + 0x68)); /* fld float */
    MEM32(ebp + 0x14) = (int32_t)fp_top(); /* fistp */
    eax = MEM32(ebp + 0x14);
    if (CMP_GE(eax, ecx)) goto loc_005102C4; /* jge: greater or equal (signed >=) */

loc_005102C0: ;
    eax = ecx;
    goto loc_005102CF;

loc_005102C4: ;
    ebx = 0xFFFF;
    if (CMP_LE(eax, ebx)) goto loc_005102CF; /* jle: less or equal (signed <=) */

loc_005102CD: ;
    eax = ebx;

loc_005102CF: ;
    ebx = MEM32(ebp + 0x64);
    MEM16(edx) = LO16(eax);
    esi = esi - 4;
    fp_push(MEMF(esi)); /* fld float */
    ebx = ebx + ebx;
    fp_top() = -fp_top(); /* fchs */
    edx = edx + ebx;
    ebx = MEM32(ebp + 0x74);
    eax = (uint32_t)((int32_t)eax >> 0x1F);
    fp_st1() *= fp_top(); fp_pop(); /* fmul */
    eax = eax & 1;
    ebx = ebx + ebx;
    eax = eax | ebx;
    MEMF(ebp + 0x68) = (float)fp_top(); fp_popp(); /* fstp */
    MEM32(ebp + 0x74) = eax;
    edi = edi + 4;
    fp_push(MEMF(ebp + 0x68)); /* fld float */
    MEM32(ebp + -12) = (int32_t)fp_top(); /* fistp */
    eax = MEM32(ebp + -12);
    if (CMP_GE(eax, ecx)) goto loc_00510309; /* jge: greater or equal (signed >=) */

loc_00510305: ;
    eax = ecx;
    goto loc_00510314;

loc_00510309: ;
    ebx = 0xFFFF;
    if (CMP_LE(eax, ebx)) goto loc_00510314; /* jle: less or equal (signed <=) */

loc_00510312: ;
    eax = ebx;

loc_00510314: ;
    ebx = MEM32(ebp + 0x64);
    MEM16(edx) = LO16(eax);
    esi = esi - 4;
    fp_push(MEMF(esi)); /* fld float */
    ebx = ebx + ebx;
    fp_top() = -fp_top(); /* fchs */
    edx = edx + ebx;
    ebx = MEM32(ebp + 0x74);
    eax = (uint32_t)((int32_t)eax >> 0x1F);
    fp_st1() *= fp_top(); fp_pop(); /* fmul */
    eax = eax & 1;
    ebx = ebx + ebx;
    eax = eax | ebx;
    MEMF(ebp + 0x68) = (float)fp_top(); fp_popp(); /* fstp */
    MEM32(ebp + 0x74) = eax;
    edi = edi + 4;
    fp_push(MEMF(ebp + 0x68)); /* fld float */
    MEM32(ebp + 0x3C) = (int32_t)fp_top(); /* fistp */
    eax = MEM32(ebp + 0x3C);
    if (CMP_GE(eax, ecx)) goto loc_0051034E; /* jge: greater or equal (signed >=) */

loc_0051034A: ;
    eax = ecx;
    goto loc_00510359;

loc_0051034E: ;
    ebx = 0xFFFF;
    if (CMP_LE(eax, ebx)) goto loc_00510359; /* jle: less or equal (signed <=) */

loc_00510357: ;
    eax = ebx;

loc_00510359: ;
    ebx = MEM32(ebp + 0x64);
    MEM16(edx) = LO16(eax);
    esi = esi - 4;
    fp_push(MEMF(esi)); /* fld float */
    ebx = ebx + ebx;
    fp_top() = -fp_top(); /* fchs */
    edx = edx + ebx;
    ebx = MEM32(ebp + 0x74);
    eax = (uint32_t)((int32_t)eax >> 0x1F);
    fp_st1() *= fp_top(); fp_pop(); /* fmul */
    eax = eax & 1;
    ebx = ebx + ebx;
    eax = eax | ebx;
    MEMF(ebp + 0x68) = (float)fp_top(); fp_popp(); /* fstp */
    MEM32(ebp + 0x74) = eax;
    edi = edi + 4;
    fp_push(MEMF(ebp + 0x68)); /* fld float */
    MEM32(ebp + -28) = (int32_t)fp_top(); /* fistp */
    eax = MEM32(ebp + -28);
    if (CMP_GE(eax, ecx)) goto loc_00510393; /* jge: greater or equal (signed >=) */

loc_0051038F: ;
    eax = ecx;
    goto loc_0051039E;

loc_00510393: ;
    ebx = 0xFFFF;
    if (CMP_LE(eax, ebx)) goto loc_0051039E; /* jle: less or equal (signed <=) */

loc_0051039C: ;
    eax = ebx;

loc_0051039E: ;
    ebx = MEM32(ebp + 0x64);
    MEM16(edx) = LO16(eax);
    esi = esi - 4;
    fp_push(MEMF(esi)); /* fld float */
    ebx = ebx + ebx;
    fp_top() = -fp_top(); /* fchs */
    edx = edx + ebx;
    ebx = MEM32(ebp + 0x74);
    eax = (uint32_t)((int32_t)eax >> 0x1F);
    fp_st1() *= fp_top(); fp_pop(); /* fmul */
    eax = eax & 1;
    ebx = ebx + ebx;
    eax = eax | ebx;
    MEMF(ebp + 0x68) = (float)fp_top(); fp_popp(); /* fstp */
    MEM32(ebp + 0x74) = eax;
    edi = edi + 4;
    fp_push(MEMF(ebp + 0x68)); /* fld float */
    MEM32(ebp + -52) = (int32_t)fp_top(); /* fistp */
    eax = MEM32(ebp + -52);
    if (CMP_GE(eax, ecx)) goto loc_005103D8; /* jge: greater or equal (signed >=) */

loc_005103D4: ;
    eax = ecx;
    goto loc_005103E3;

loc_005103D8: ;
    ebx = 0xFFFF;
    if (CMP_LE(eax, ebx)) goto loc_005103E3; /* jle: less or equal (signed <=) */

loc_005103E1: ;
    eax = ebx;

loc_005103E3: ;
    ebx = MEM32(ebp + 0x64);
    MEM16(edx) = LO16(eax);
    esi = esi - 4;
    fp_push(MEMF(esi)); /* fld float */
    ebx = ebx + ebx;
    fp_top() = -fp_top(); /* fchs */
    edx = edx + ebx;
    ebx = MEM32(ebp + 0x74);
    eax = (uint32_t)((int32_t)eax >> 0x1F);
    fp_st1() *= fp_top(); fp_pop(); /* fmul */
    eax = eax & 1;
    ebx = ebx + ebx;
    eax = eax | ebx;
    MEMF(ebp + 0x68) = (float)fp_top(); fp_popp(); /* fstp */
    MEM32(ebp + 0x74) = eax;
    edi = edi + 4;
    fp_push(MEMF(ebp + 0x68)); /* fld float */
    MEM32(ebp + 0x24) = (int32_t)fp_top(); /* fistp */
    eax = MEM32(ebp + 0x24);
    if (CMP_GE(eax, ecx)) goto loc_0051041D; /* jge: greater or equal (signed >=) */

loc_00510419: ;
    eax = ecx;
    goto loc_00510428;

loc_0051041D: ;
    ebx = 0xFFFF;
    if (CMP_LE(eax, ebx)) goto loc_00510428; /* jle: less or equal (signed <=) */

loc_00510426: ;
    eax = ebx;

loc_00510428: ;
    ebx = MEM32(ebp + 0x64);
    ebx = ebx + ebx;
    MEM16(edx) = LO16(eax);
    edx = edx + ebx;
    ebx = MEM32(ebp + 0x74);
    eax = (uint32_t)((int32_t)eax >> 0x1F);
    ebx = ebx + ebx;
    eax = eax & 1;
    eax = eax | ebx;
    ebx = MEM32(ebp + 0x60);
    MEM32(ebp + 0x60) = MEM32(ebp + 0x60) + 2;
    MEM32(ebp + 0x54) = MEM32(ebp + 0x54) - 1;
    MEM32(ebp + 0x74) = eax;
    MEM16(ebx) = LO16(eax);
    if ((MEM32(ebp + 0x54) != 0)) goto loc_0050FFF2; /* jne: not equal / not zero */

loc_00510455: ;
    ebx = MEM32(ebp + 0x50);

loc_00510458: ;
    if (CMP_LE(ebx & ebx, 0)) goto loc_005104C7; /* jle: less or equal (signed <=) */

loc_0051045C: ;
    eax = MEM32(ebp + 0x64);
    eax = eax + eax;
    MEM32(ebp + 0x5C) = MEM32(ebp + 0x5C) + ebx;
    MEM32(ebp + 0x4C) = eax;
    MEM32(ebp + 0x54) = ebx;

loc_0051046A: ;
    esi = esi - 4;
    fp_push(MEMF(esi)); /* fld float */
    fp_top() = -fp_top(); /* fchs */
    fp_st1() *= fp_top(); fp_pop(); /* fmul */
    edi = edi + 4;
    MEMF(ebp + 0x68) = (float)fp_top(); fp_popp(); /* fstp */
    fp_push(MEMF(ebp + 0x68)); /* fld float */
    MEM32(ebp + 0x44) = (int32_t)fp_top(); /* fistp */
    eax = MEM32(ebp + 0x44);
    if (CMP_GE(eax, ecx)) goto loc_0051048A; /* jge: greater or equal (signed >=) */

loc_00510486: ;
    eax = ecx;
    goto loc_00510495;

loc_0051048A: ;
    ebx = 0xFFFF;
    if (CMP_LE(eax, ebx)) goto loc_00510495; /* jle: less or equal (signed <=) */

loc_00510493: ;
    eax = ebx;

loc_00510495: ;
    ebx = MEM32(ebp + 0x74);
    MEM16(edx) = LO16(eax);
    edx = edx + MEM32(ebp + 0x4C);
    eax = (uint32_t)((int32_t)eax >> 0x1F);
    eax = eax & 1;
    ebx = ebx + ebx;
    eax = eax | ebx;
    MEM32(ebp + 0x58) = MEM32(ebp + 0x58) + 1;
    (void)0; /* cmp MEM32(ebp + 0x58), 0x10 - flags set for next jcc */
    MEM32(ebp + 0x74) = eax;
    if (CMP_B(MEM32(ebp + 0x58), 0x10)) goto loc_005104C2; /* jb: below (unsigned <) */

loc_005104B4: ;
    ebx = MEM32(ebp + 0x60);
    MEM32(ebp + 0x60) = MEM32(ebp + 0x60) + 2;
    MEM32(ebp + 0x58) = MEM32(ebp + 0x58) & 0;
    MEM16(ebx) = LO16(eax);

loc_005104C2: ;
    MEM32(ebp + 0x54) = MEM32(ebp + 0x54) - 1;
    if ((MEM32(ebp + 0x54) != 0)) goto loc_0051046A; /* jne: not equal / not zero */

loc_005104C7: ;
    eax = MEM32(ebp + 0x78);
    SET_LO16(ecx, MEM16(ebp + 0x5C));
    POP32(esp, edi);
    POP32(esp, esi);
    MEM16(eax + 0x38) = LO16(ecx);
    eax = 0; /* xor self */
    POP32(esp, ebx);
    ebp = ebp + 0x6C;
    esp = ebp;
    POP32(esp, ebp); /* leave */
    esp += 16; return; /* ret 12 */

    #undef fp_push
    #undef fp_pop
    #undef fp_popp
    #undef fp_top
    #undef fp_st1
}

/**
 * sub_005104DE
 * Original: 0x005104DE - 0x00510573 (149 bytes, 51 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_005104DE(void)
{
    uint32_t ebp;
    int _flags = 0; /* fallback flag var */
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_005104DE: ;
    PUSH32(esp, ebp);
    ebp = esp + -100;
    esp = esp - 0xA8;
    eax = MEM32(ebp + 0x6C);
    edx = MEM32(eax + 0xA0);
    ecx = ZX16(MEM16(eax + 0x58));
    MEM32(ebp + 0x60) = edx;
    edx = MEM32(eax + 0x390);
    PUSH32(esp, ebx);
    ebx = MEM32(ebp + 0x70);
    MEM32(ebp + 0x40) = edx;
    edx = MEM32(eax + 0x394);
    eax = MEM32(eax + 0x428);
    MEM32(ebp + 0x5C) = eax;
    eax = (uint32_t)(int32_t)SMEM16(ebx + 0x38);
    MEM32(ebp + 0x54) = eax;
    eax = MEM32(ebp + 0x78);
    eax = (uint32_t)(int32_t)SMEM16(eax);
    eax = eax + MEM32(ebp + 0x54);
    PUSH32(esp, esi);
    esi = MEM32(ebp + 0x74);
    MEM32(ebp + 0x4C) = eax;
    eax = MEM32(ebp + 0x78);
    PUSH32(esp, edi);
    edi = MEM32(ebx + 0x3C);
    MEM32(ebp + 0x44) = edx;
    edx = MEM32(ebx + 0x48);
    MEM16(eax) = MEM16(eax) & 0;
    eax = edx;
    eax = eax - MEM32(ebx + 0x40);
    ebx = MEM32(ebx + 0x44);
    MEM32(ebp + 0x58) = ecx;
    eax = (uint32_t)((int32_t)eax >> 1);
    ecx--;
    eax = (uint32_t)((int32_t)eax >> LO8(ecx));
    PUSH32(esp, 0x10);
    ecx = eax + 0xF;
    ecx = ecx >> 4;
    ebx = ebx + ecx * 2;
    eax = eax & 0xF;
    POP32(esp, ecx);
    ecx = ecx - eax;
    (void)0; /* cmp ecx, 0x10 - flags set for next jcc */
    MEM32(ebp + 0x48) = ebx;
    MEM32(ebp + 0x50) = ecx;
    if (CMP_NE(ecx, 0x10)) { sub_00510573(); return; } /* jne: not equal / not zero */

loc_00510569: ;
    eax = ZX16(MEM16(ebx));
    ebx++;
    ebx++;
    MEM32(ebp + 0x48) = ebx;
    g_seh_ebp = ebp; sub_00510577(); return; /* tail jmp 0x00510577 */

}

/**
 * sub_00511164
 * Original: 0x00511164 - 0x0051120E (170 bytes, 55 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00511164(void)
{
    uint32_t ebp;
    int _flags = 0; /* fallback flag var */

loc_00511164: ;
    PUSH32(esp, ebp);
    ebp = esp;
    esp = esp - 0x4C;
    PUSH32(esp, ebx);
    ebx = MEM32(ebp + 0x10);
    PUSH32(esp, esi);
    esi = MEM32(ebp + 8);
    eax = MEM32(esi + 0xA0);
    MEM32(ebp + -52) = eax;
    eax = MEM32(esi + 0x390);
    MEM32(ebp + -64) = eax;
    eax = MEM32(esi + 0x394);
    MEM32(ebp + -72) = eax;
    eax = MEM32(esi + 0x428);
    MEM32(ebp + -44) = eax;
    eax = MEM32(esi + 0x3A0);
    ecx = MEM32(eax + 0x3C);
    edx = (uint32_t)(int32_t)SMEM16(eax + 0x38);
    MEM32(ebp + -8) = ecx;
    ecx = MEM32(eax + 0xAC);
    eax = MEM32(eax + 0x48);
    MEM32(ebp + -12) = ecx;
    ecx = MEM32(ebp + 0xC);
    MEM32(ebp + -20) = ecx;
    ecx = (uint32_t)(int32_t)SMEM16(ebx);
    ecx = ecx + edx;
    PUSH32(esp, edi);
    edi = ZX16(MEM16(esi + 0x58));
    MEM16(ebx) = MEM16(ebx) & 0;
    MEM32(ebp + -32) = eax;
    MEM32(ebp + -4) = edx;
    edx = MEM32(esi + 0x3A0);
    eax = eax - MEM32(edx + 0x40);
    MEM32(ebp + -24) = ecx;
    ecx = edi + -1;
    eax = (uint32_t)((int32_t)eax >> 1);
    eax = (uint32_t)((int32_t)eax >> LO8(ecx));
    MEM32(ebp + -56) = edi;
    edi = MEM32(edx + 0x44);
    PUSH32(esp, 0x10);
    ecx = eax + 0xF;
    ecx = ecx >> 4;
    ecx = edi + ecx * 2;
    MEM32(ebp + -16) = ecx;
    POP32(esp, edi);
    eax = eax & 0xF;
    ecx = edi;
    ecx = ecx - eax;
    (void)0; /* cmp ecx, edi - flags set for next jcc */
    eax = MEM32(ebp + -16);
    MEM32(ebp + -48) = ecx;
    if (CMP_NE(ecx, edi)) { sub_0051120E(); return; } /* jne: not equal / not zero */

loc_00511205: ;
    eax = ZX16(MEM16(eax));
    MEM32(ebp + -16) = MEM32(ebp + -16) + 2;
    g_seh_ebp = ebp; sub_00511212(); return; /* tail jmp 0x00511212 */

}

/**
 * sub_00511ADF
 * Original: 0x00511ADF - 0x00511B2F (80 bytes, 36 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00511ADF(void)
{
    uint32_t ebp;
    int _flags = 0; /* fallback flag var */

loc_00511ADF: ;
    PUSH32(esp, ebp);
    ebp = esp;
    PUSH32(esp, ecx);
    PUSH32(esp, ebx);
    PUSH32(esp, esi);
    esi = MEM32(ebp + 8);
    ebx = 0; /* xor self */
    (void)0; /* cmp MEM16(esi + 0x58), LO16(ebx) - flags set for next jcc */
    PUSH32(esp, edi);
    MEM32(ebp + -4) = ebx;
    if (CMP_BE(MEM16(esi + 0x58), LO16(ebx))) goto loc_00511B25; /* jbe: below or equal (unsigned <=) */

loc_00511AF4: ;
    edi = MEM32(ebp + 0xC);

loc_00511AF7: ;
    PUSH32(esp, MEM32(ebp + 0x14));
    eax = MEM32(esi + 0x3A0);
    PUSH32(esp, MEM32(ebp + 0x10));
    eax = eax + ebx;
    PUSH32(esp, edi);
    PUSH32(esp, eax);
    PUSH32(esp, esi);
    PUSH32(esp, 0); sub_005104DE(); /* call 0x005104DE */

loc_00511B0D: ;
    (void)0; /* test eax, eax - flags set for next jcc */
    MEM32(ebp + 8) = eax;
    if (TEST_NZ(eax, eax)) { sub_00511B2F(); return; } /* jne: not equal / not zero */

loc_00511B14: ;
    MEM32(ebp + -4) = MEM32(ebp + -4) + 1;
    eax = ZX16(MEM16(esi + 0x58));
    edi++;
    edi++;
    ebx = ebx + 0x70;
    if (CMP_L(MEM32(ebp + -4), eax)) goto loc_00511AF7; /* jl: less (signed <) */

loc_00511B25: ;
    eax = MEM32(ebp + 8);
    POP32(esp, edi);
    POP32(esp, esi);
    POP32(esp, ebx);
    esp = ebp;
    POP32(esp, ebp); /* leave */
    esp += 20; return; /* ret 16 */

}

/**
 * sub_00511B4A
 * Original: 0x00511B4A - 0x00511CA1 (343 bytes, 118 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00511B4A(void)
{
    uint32_t ebp;
    int _flags = 0; /* fallback flag var */

loc_00511B4A: ;
    PUSH32(esp, ebp);
    ebp = esp;
    esp = esp - 0xC;
    PUSH32(esp, ebx);
    PUSH32(esp, esi);
    PUSH32(esp, edi);
    edi = MEM32(ebp + 8);
    ecx = MEM32(edi + 0x20);
    esi = MEM32(edi);
    eax = 0; /* xor self */
    (void)0; /* cmp ecx, eax - flags set for next jcc */
    MEM32(ebp + -12) = eax;
    MEM32(ebp + -4) = eax;
    if (CMP_EQ(ecx, eax)) goto loc_00511B71; /* je: equal / zero */

loc_00511B67: ;
    if (CMP_EQ(ecx, 3)) goto loc_00511BB4; /* je: equal / zero */

loc_00511B6C: ;
    goto loc_00511C9A;

loc_00511B71: ;
    ebx = MEM32(ebp + 0xC);
    ecx = ebp + -12;
    PUSH32(esp, ecx);
    ecx = ebp + -4;
    PUSH32(esp, ecx);
    ecx = ebp + 8;
    eax = edi + 0x30;
    PUSH32(esp, ecx);
    PUSH32(esp, eax);
    PUSH32(esp, MEM32(ebx + 0x14));
    MEM32(ebp + -8) = eax;
    PUSH32(esp, 0); sub_00514B26(); /* call 0x00514B26 */

loc_00511B8F: ;
    if (TEST_S(eax, eax)) goto loc_00511C9A; /* jl: less (signed <) */

loc_00511B97: ;
    PUSH32(esp, MEM32(ebp + 8));
    PUSH32(esp, MEM32(ebp + -8));
    PUSH32(esp, 0); sub_0050F8AC(); /* call 0x0050F8AC */

loc_00511BA2: ;
    if (TEST_S(eax, eax)) goto loc_00511C9A; /* jl: less (signed <) */

loc_00511BAA: ;
    if (CMP_NE(MEM32(ebp + -4), 0)) goto loc_00511C3D; /* jne: not equal / not zero */

loc_00511BB4: ;
    eax = 0; /* xor self */
    MEM32(edi + 0x20) = 3;
    SET_LO16(eax, MEM16(esi + 0x314));
    SET_LO16(eax, LO16(eax) + MEM16(esi + 0x3C));
    eax++;
    ebx = ZX16(LO16(eax));
    eax = edi + 0x30;
    PUSH32(esp, ebx);
    PUSH32(esp, eax);
    PUSH32(esp, 0); sub_0050F83D(); /* call 0x0050F83D */

loc_00511BD6: ;
    if (TEST_S(eax, eax)) goto loc_00511C9A; /* jl: less (signed <) */

loc_00511BDE: ;
    eax = ebp + 8;
    PUSH32(esp, eax);
    PUSH32(esp, ebx);
    eax = edi + 0x30;
    PUSH32(esp, eax);
    PUSH32(esp, 0); sub_0050F9C4(); /* call 0x0050F9C4 */

loc_00511BEC: ;
    if (TEST_S(eax, eax)) goto loc_00511C9A; /* jl: less (signed <) */

loc_00511BF4: ;
    ecx = MEM32(edi);
    SET_LO16(ecx, MEM16(ecx + 0x314));
    ebx = MEM32(ebp + 8);
    SET_LO16(ecx, LO16(ecx) + 1);
    edx = ZX16(LO16(ecx));
    ecx = edx;
    ebx = ebx >> LO8(ecx);
    PUSH32(esp, 0x20);
    MEM16(esi + 0x20) = LO16(ebx);
    ecx = MEM32(ebp + 8);
    ecx = ecx & 1;
    ecx--;
    MEM32(esi + 0x24) = ecx;
    POP32(esp, ecx);
    ecx = ecx - edx;
    edx = edx | 0xFFFFFFFFu;
    edx = edx >> LO8(ecx);
    ecx = SX16(LO16(edx));
    edx = (uint32_t)(int32_t)SMEM16(ebp + 8);
    ecx = (uint32_t)((int32_t)ecx >> 1);
    edx = (uint32_t)((int32_t)edx >> 1);
    ecx = ecx & edx;
    ecx = ecx & 0x7FFFFFFF;
    MEM32(esi + 0x1C) = ecx;
    MEM32(edi + 0x20) = MEM32(edi + 0x20) & 0;
    goto loc_00511C9A;

loc_00511C3D: ;
    if (CMP_NE(MEM32(ebp + -4), 1)) goto loc_00511C5F; /* jne: not equal / not zero */

loc_00511C43: ;
    MEM16(esi + 0x20) = MEM16(esi + 0x20) & 0;
    MEM32(esi + 0x28) = MEM32(esi + 0x28) | 0xFFFFFFFFu;
    MEM32(esi + 0x2C) = MEM32(esi + 0x2C) | 0xFFFFFFFFu;
    ecx = (uint32_t)(int32_t)SMEM16(esi + 0x74);
    edx = MEM32(ebx + 0x20);
    edx = edx - ecx;
    edx--;
    MEM32(esi + 0x1C) = edx;
    goto loc_00511C9A;

loc_00511C5F: ;
    PUSH32(esp, 1);
    PUSH32(esp, MEM32(ebp + -8));
    PUSH32(esp, 0); sub_0050F8AC(); /* call 0x0050F8AC */

loc_00511C69: ;
    if (TEST_S(eax, eax)) goto loc_00511C9A; /* jl: less (signed <) */

loc_00511C6D: ;
    edx = MEM32(ebp + -4);
    ecx = MEM32(ebx + 0x18);
    ecx = ZX16(MEM16(ecx + edx * 2 + -4));
    ecx = ecx & 0x7FFFFFFF;
    MEM32(esi + 0x1C) = ecx;
    ecx = MEM32(ebx + 0x1C);
    edx = MEM32(ebp + -4);
    SET_LO16(ecx, MEM16(ecx + edx * 2 + -4));
    MEM16(esi + 0x20) = LO16(ecx);
    ecx = MEM32(ebp + -12);
    ecx = ecx >> 0x1F;
    ecx--;
    MEM32(esi + 0x24) = ecx;

loc_00511C9A: ;
    POP32(esp, edi);
    POP32(esp, esi);
    POP32(esp, ebx);
    esp = ebp;
    POP32(esp, ebp); /* leave */
    esp += 16; return; /* ret 12 */

}

/**
 * sub_00511CA1
 * Original: 0x00511CA1 - 0x00511CB5 (20 bytes, 11 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00511CA1(void)
{
    uint32_t ebp;

loc_00511CA1: ;
    PUSH32(esp, ebp);
    ebp = esp;
    eax = MEM32(ebp + 0xC);
    PUSH32(esp, ebx);
    ebx = MEM32(eax);
    PUSH32(esp, esi);
    PUSH32(esp, edi);
    edi = MEM32(ebp + 8);
    esi = MEM32(edi);
    eax = 0; /* xor self */
    g_seh_ebp = ebp; sub_00511D07(); return; /* tail jmp 0x00511D07 */

}

/**
 * sub_00511D1E
 * Original: 0x00511D1E - 0x00511D6E (80 bytes, 18 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00511D1E(void)
{
    uint32_t ebp;
    int _flags = 0; /* fallback flag var */

loc_00511D1E: ;
    PUSH32(esp, ebp);
    ebp = esp;
    eax = MEM32(ebp + 8);
    eax = MEM32(eax);
    ecx = MEM32(eax + 0x33C);
    if (CMP_NE(ecx, 3)) { sub_00511D6E(); return; } /* jne: not equal / not zero */

loc_00511D31: ;
    (void)0; /* cmp MEM32(eax + 0x338), 1 - flags set for next jcc */
    eax = MEM32(ebp + 0xC);
    if (CMP_NE(MEM32(eax + 0x338), 1)) goto loc_00511D57; /* jne: not equal / not zero */

loc_00511D3D: ;
    MEM32(eax + 0x14) = 0x517008;
    MEM32(eax + 0x18) = 0x51E6E8;
    MEM32(eax + 0x1C) = 0x51EA50;
    g_seh_ebp = ebp; sub_00511DE9(); return; /* tail jmp 0x00511DE9 */

loc_00511D57: ;
    MEM32(eax + 0x14) = 0x5152F8;
    MEM32(eax + 0x18) = 0x51DF78;
    MEM32(eax + 0x1C) = 0x51E330;
    g_seh_ebp = ebp; sub_00511DE9(); return; /* tail jmp 0x00511DE9 */

}

/**
 * sub_00511DED
 * Original: 0x00511DED - 0x00511F1B (302 bytes, 101 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00511DED(void)
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

loc_00511DED: ;
    PUSH32(esp, ebp);
    ebp = esp;
    esp = esp - 0x38;
    PUSH32(esp, ebx);
    PUSH32(esp, esi);
    esi = MEM32(ebp + 8);
    ebx = MEM32(esi);
    eax = MEM32(ebx + 0x70);
    eax = MEM32(ebx + eax * 4 + 0x204);
    edx = ZX16(MEM16(ebx + 0x58));
    MEM32(ebp + -12) = eax;
    eax = (uint32_t)(int32_t)SMEM16(esi + 0x24);
    ecx = 0; /* xor self */
    (void)0; /* cmp eax, edx - flags set for next jcc */
    MEM32(ebp + -4) = ecx;
    if (CMP_GE(eax, edx)) goto loc_00511F12; /* jge: greater or equal (signed >=) */

loc_00511E1C: ;
    PUSH32(esp, edi);

loc_00511E1D: ;
    edi = (uint32_t)(int32_t)SMEM16(esi + 0x24);
    edi = (uint32_t)((int32_t)edi * (int32_t)0x70);
    edi = edi + MEM32(ebx + 0x3A0);
    if (CMP_EQ(MEM32(edi + 0x24), ecx)) goto loc_00511EC6; /* je: equal / zero */

loc_00511E33: ;
    if (CMP_NE(MEM32(ebp + -12), 1)) goto loc_00511EEB; /* jne: not equal / not zero */

loc_00511E3D: ;
    eax = MEM32(edi + 0x68);
    MEM32(ebp + -8) = eax;
    goto loc_00511E9C;

loc_00511E45: ;
    SET_LO16(eax, MEM16(esi + 0x26));
    if (TEST_Z(LO16(eax), LO16(eax))) goto loc_00511E61; /* je: equal / zero */

loc_00511E4E: ;
    if (CMP_EQ(LO16(eax), 8)) goto loc_00511E61; /* je: equal / zero */

loc_00511E54: ;
    (void)0; /* cmp LO16(eax), 9 - flags set for next jcc */
    MEM32(ebp + 8) = 4;
    if (CMP_NE(LO16(eax), 9)) goto loc_00511E68; /* jne: not equal / not zero */

loc_00511E61: ;
    MEM32(ebp + 8) = 3;

loc_00511E68: ;
    eax = ebp + -16;
    PUSH32(esp, eax);
    PUSH32(esp, MEM32(ebp + 8));
    eax = esi + 0x30;
    PUSH32(esp, eax);
    PUSH32(esp, 0); sub_0050F9C4(); /* call 0x0050F9C4 */

loc_00511E78: ;
    (void)0; /* test eax, eax - flags set for next jcc */
    MEM32(ebp + -4) = eax;
    if (TEST_S(eax, eax)) goto loc_00511F11; /* jl: less (signed <) */

loc_00511E83: ;
    eax = (uint32_t)(int32_t)SMEM16(esi + 0x26);
    SET_LO8(ecx, MEM8(ebp + -16));
    edx = MEM32(ebp + -8);
    MEM8(eax + edx) = LO8(ecx);
    ecx = MEM32(ebp + 8);
    eax = MEM32(ebp + 0xC);
    MEM32(eax) = MEM32(eax) + ecx;
    MEM16(esi + 0x26) = MEM16(esi + 0x26) + 1;

loc_00511E9C: ;
    if (CMP_L(MEM16(esi + 0x26), 0xA)) goto loc_00511E45; /* jl: less (signed <) */

loc_00511EA3: ;
    PUSH32(esp, 0xA);
    eax = ebp + -56;
    PUSH32(esp, eax);
    PUSH32(esp, MEM32(ebp + -8));
    PUSH32(esp, ebx);
    PUSH32(esp, 0); sub_005140C5(); /* call 0x005140C5 */

loc_00511EB2: ;
    PUSH32(esp, edi);
    eax = ebp + -56;
    PUSH32(esp, eax);
    PUSH32(esp, ebx);
    PUSH32(esp, 0); sub_00514385(); /* call 0x00514385 */

loc_00511EBD: ;
    (void)0; /* test eax, eax - flags set for next jcc */
    MEM32(ebp + -4) = eax;
    if (TEST_S(eax, eax)) goto loc_00511F11; /* jl: less (signed <) */

loc_00511EC4: ;
    goto loc_00511EF7;

loc_00511EC6: ;
    if (CMP_NE(MEM32(ebp + -12), 1)) goto loc_00511EEB; /* jne: not equal / not zero */

loc_00511ECC: ;
    edx = MEM32(edi + 0x2C);
    fp_push(1.0); /* fld1 */
    MEMF(edi + 0x6C) = (float)fp_top(); fp_popp(); /* fstp */
    SET_LO16(eax, MEM16(ebx + 0x60));
    if (CMP_LE(LO16(eax), LO16(ecx))) goto loc_00511EF7; /* jle: less or equal (signed <=) */

loc_00511EDD: ;
    ecx = ZX16(LO16(eax));
    eax = 0x3F800000;
    edi = edx;
    { uint32_t _i; for (_i = 0; _i < ecx; _i++) MEM32(edi + _i*4) = eax; }
    edi += ecx * 4; ecx = 0; /* rep stosd */
    goto loc_00511EF7;

loc_00511EEB: ;
    if (CMP_LE(MEM32(ebx + 0x70), ecx)) goto loc_00511EF7; /* jle: less or equal (signed <=) */

loc_00511EF0: ;
    PUSH32(esp, edi);
    PUSH32(esp, ebx);
    PUSH32(esp, 0); sub_00512F66(); /* call 0x00512F66 */

loc_00511EF7: ;
    ecx = 0; /* xor self */
    MEM16(esi + 0x26) = LO16(ecx);
    MEM16(esi + 0x24) = MEM16(esi + 0x24) + 1;
    eax = (uint32_t)(int32_t)SMEM16(esi + 0x24);
    edx = ZX16(MEM16(ebx + 0x58));
    if (CMP_L(eax, edx)) goto loc_00511E1D; /* jl: less (signed <) */

loc_00511F11: ;
    POP32(esp, edi);

loc_00511F12: ;
    eax = MEM32(ebp + -4);
    POP32(esp, esi);
    POP32(esp, ebx);
    esp = ebp;
    POP32(esp, ebp); /* leave */
    esp += 12; return; /* ret 8 */

    #undef fp_push
    #undef fp_pop
    #undef fp_popp
    #undef fp_top
    #undef fp_st1
}

/**
 * sub_00511F1B
 * Original: 0x00511F1B - 0x0051213B (544 bytes, 167 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00511F1B(void)
{
    uint32_t ebp;
    int _flags = 0; /* fallback flag var */

loc_00511F1B: ;
    PUSH32(esp, ebp);
    ebp = esp;
    esp = esp - 0x18;
    PUSH32(esp, ebx);
    PUSH32(esp, esi);
    esi = MEM32(ebp + 8);
    MEM32(ebp + 8) = MEM32(ebp + 8) & 0;
    eax = MEM32(esi + 0x1C);
    eax--;
    eax--;
    PUSH32(esp, edi);
    edi = MEM32(esi);
    if ((eax == 0)) goto loc_0051203C; /* je: equal / zero */

loc_00511F38: ;
    eax--;
    if ((eax == 0)) goto loc_00512121; /* je: equal / zero */

loc_00511F3F: ;
    goto loc_00512131;

loc_00511F44: ;
    ebx = (uint32_t)(int32_t)SMEM16(esi + 0x24);
    eax = MEM32(edi + 0x350);
    ebx = (uint32_t)((int32_t)ebx * (int32_t)0x70);
    eax = eax - MEM32(edi + 0x3C0);
    ebx = ebx + MEM32(edi + 0x3A0);
    PUSH32(esp, eax);
    eax = esi + 0x30;
    PUSH32(esp, eax);
    PUSH32(esp, 0); sub_0050F83D(); /* call 0x0050F83D */

loc_00511F67: ;
    (void)0; /* test eax, eax - flags set for next jcc */
    MEM32(ebp + 8) = eax;
    if (TEST_S(eax, eax)) goto loc_00512131; /* jl: less (signed <) */

loc_00511F72: ;
    if (CMP_EQ(MEM32(ebx + 0x24), 0)) goto loc_00512029; /* je: equal / zero */

loc_00511F7C: ;
    eax = MEM32(ebx + 8);
    MEM8(eax) = 0;
    MEM32(ebp + -16) = eax;
    eax = MEM32(edi + 0x3C4);
    eax = eax - MEM32(edi + 0x324);
    MEM32(ebx + 0x20) = eax;

loc_00511F94: ;
    eax = (uint32_t)(int32_t)SMEM16(esi + 0x26);
    ecx = MEM32(edi + 0x354);
    ecx = ecx + eax * 4;
    eax = MEM32(edi + 0x3C4);
    edx = MEM32(ecx);
    (void)0; /* cmp eax, edx - flags set for next jcc */
    MEM32(ebp + -4) = eax;
    if (CMP_G(eax, edx)) goto loc_00511FB3; /* jg: greater (signed >) */

loc_00511FB0: ;
    MEM32(ebp + -4) = edx;

loc_00511FB3: ;
    eax = MEM32(edi + 0x328);
    if (CMP_GE(MEM32(ebp + -4), eax)) goto loc_00512014; /* jge: greater or equal (signed >=) */

loc_00511FBE: ;
    ecx = MEM32(ecx + 4);
    (void)0; /* cmp eax, ecx - flags set for next jcc */
    MEM32(ebp + -12) = eax;
    if (CMP_L(eax, ecx)) goto loc_00511FCB; /* jl: less (signed <) */

loc_00511FC8: ;
    MEM32(ebp + -12) = ecx;

loc_00511FCB: ;
    eax = ebp + -8;
    PUSH32(esp, eax);
    PUSH32(esp, 1);
    eax = esi + 0x30;
    PUSH32(esp, eax);
    PUSH32(esp, 0); sub_0050F9C4(); /* call 0x0050F9C4 */

loc_00511FDA: ;
    (void)0; /* test eax, eax - flags set for next jcc */
    MEM32(ebp + 8) = eax;
    if (TEST_S(eax, eax)) goto loc_00512131; /* jl: less (signed <) */

loc_00511FE5: ;
    ecx = (uint32_t)(int32_t)SMEM16(esi + 0x26);
    eax = MEM32(ebp + -16);
    SET_LO8(edx, MEM8(ebp + -8));
    MEM8(ecx + eax) = LO8(edx);
    ecx = MEM32(ebp + 0xC);
    MEM32(ecx) = MEM32(ecx) + 1;
    ecx = (uint32_t)(int32_t)SMEM16(esi + 0x26);
    if (CMP_EQ(MEM8(ecx + eax), 0)) goto loc_00512005; /* je: equal / zero */

loc_00512001: ;
    MEM8(eax) = MEM8(eax) + 1;
    goto loc_0051200E;

loc_00512005: ;
    eax = MEM32(ebp + -12);
    eax = eax - MEM32(ebp + -4);
    MEM32(ebx + 0x20) = MEM32(ebx + 0x20) + eax;

loc_0051200E: ;
    MEM16(esi + 0x26) = MEM16(esi + 0x26) + 1;
    goto loc_00511F94;

loc_00512014: ;
    eax = (uint32_t)(int32_t)SMEM16(esi + 0x26);
    if (CMP_GE(eax, MEM32(edi + 0x350))) goto loc_0051202D; /* jge: greater or equal (signed >=) */

loc_00512020: ;
    ecx = MEM32(ebp + -16);
    MEM8(eax + ecx) = 0;
    goto loc_0051202D;

loc_00512029: ;
    MEM32(ebx + 0x20) = MEM32(ebx + 0x20) & 0;

loc_0051202D: ;
    SET_LO16(eax, MEM16(edi + 0x3C0));
    MEM16(esi + 0x26) = LO16(eax);
    MEM16(esi + 0x24) = MEM16(esi + 0x24) + 1;

loc_0051203C: ;
    eax = ZX16(MEM16(edi + 0x58));
    ecx = (uint32_t)(int32_t)SMEM16(esi + 0x24);
    if (CMP_L(ecx, eax)) goto loc_00511F44; /* jl: less (signed <) */

loc_0051204C: ;
    MEM32(esi + 0x1C) = 3;
    MEM16(esi + 0x24) = MEM16(esi + 0x24) & 0;
    MEM16(esi + 0x26) = MEM16(esi + 0x26) & 0;
    goto loc_00512121;

loc_00512062: ;
    ecx = (uint32_t)(int32_t)SMEM16(esi + 0x24);
    ecx = (uint32_t)((int32_t)ecx * (int32_t)0x70);
    ecx = ecx + MEM32(edi + 0x3A0);
    if (CMP_EQ(MEM32(ecx + 0x24), 0)) goto loc_00512118; /* je: equal / zero */

loc_00512079: ;
    ebx = MEM32(ecx + 8);
    (void)0; /* cmp MEM8(ebx), 0 - flags set for next jcc */
    eax = MEM32(ecx + 0x10);
    MEM32(ebp + -16) = eax;
    if (CMP_BE(MEM8(ebx), 0)) goto loc_00512118; /* jbe: below or equal (unsigned <=) */

loc_0051208B: ;
    if (CMP_NE(MEM16(esi + 0x26), 0)) goto loc_0051210F; /* jne: not equal / not zero */

loc_00512092: ;
    eax = ebp + -8;
    PUSH32(esp, eax);
    PUSH32(esp, 7);
    eax = esi + 0x30;
    PUSH32(esp, eax);
    PUSH32(esp, 0); sub_0050F9C4(); /* call 0x0050F9C4 */

loc_005120A1: ;
    (void)0; /* test eax, eax - flags set for next jcc */
    MEM32(ebp + 8) = eax;
    if (TEST_S(eax, eax)) goto loc_00512131; /* jl: less (signed <) */

loc_005120AC: ;
    eax = MEM32(ebp + -8);
    ecx = MEM32(ebp + -16);
    eax = eax + 0xFFFFFFEDu;
    MEM32(ecx) = eax;
    eax = MEM32(ebp + 0xC);
    MEM16(esi + 0x26) = MEM16(esi + 0x26) + 1;
    MEM32(eax) = MEM32(eax) + 7;
    goto loc_0051210F;

loc_005120C3: ;
    PUSH32(esp, 0);
    eax = ebp + -24;
    PUSH32(esp, eax);
    eax = ebp + -20;
    PUSH32(esp, eax);
    eax = esi + 0x30;
    PUSH32(esp, eax);
    PUSH32(esp, 0x515260);
    PUSH32(esp, 0); sub_00514B26(); /* call 0x00514B26 */

loc_005120DB: ;
    (void)0; /* test eax, eax - flags set for next jcc */
    MEM32(ebp + 8) = eax;
    if (TEST_S(eax, eax)) goto loc_00512131; /* jl: less (signed <) */

loc_005120E2: ;
    PUSH32(esp, MEM32(ebp + -20));
    eax = esi + 0x30;
    PUSH32(esp, eax);
    PUSH32(esp, 0); sub_0050F8AC(); /* call 0x0050F8AC */

loc_005120EE: ;
    (void)0; /* test eax, eax - flags set for next jcc */
    MEM32(ebp + 8) = eax;
    if (TEST_S(eax, eax)) goto loc_00512131; /* jl: less (signed <) */

loc_005120F5: ;
    eax = (uint32_t)(int32_t)SMEM16(esi + 0x26);
    ecx = MEM32(ebp + -16);
    edx = MEM32(ebp + -24);
    ecx = ecx + eax * 4;
    eax = MEM32(ecx + -4);
    eax = eax + edx + -18;
    MEM32(ecx) = eax;
    MEM16(esi + 0x26) = MEM16(esi + 0x26) + 1;

loc_0051210F: ;
    eax = ZX8(MEM8(ebx));
    if (CMP_L(MEM16(esi + 0x26), LO16(eax))) goto loc_005120C3; /* jl: less (signed <) */

loc_00512118: ;
    MEM16(esi + 0x26) = MEM16(esi + 0x26) & 0;
    MEM16(esi + 0x24) = MEM16(esi + 0x24) + 1;

loc_00512121: ;
    eax = ZX16(MEM16(edi + 0x58));
    ecx = (uint32_t)(int32_t)SMEM16(esi + 0x24);
    if (CMP_L(ecx, eax)) goto loc_00512062; /* jl: less (signed <) */

loc_00512131: ;
    eax = MEM32(ebp + 8);
    POP32(esp, edi);
    POP32(esp, esi);
    POP32(esp, ebx);
    esp = ebp;
    POP32(esp, ebp); /* leave */
    esp += 12; return; /* ret 8 */

}

/**
 * sub_0051213B
 * Original: 0x0051213B - 0x00512271 (310 bytes, 112 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0051213B(void)
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

loc_0051213B: ;
    PUSH32(esp, ebp);
    ebp = esp + -116;
    esp = esp - 0x84;
    eax = MEM32(ebp + 0x7C);
    eax = MEM32(eax);
    edx = 0; /* xor self */
    (void)0; /* cmp MEM16(eax + 0x58), LO16(edx) - flags set for next jcc */
    MEM32(ebp + 0x64) = edx;
    if (CMP_BE(MEM16(eax + 0x58), LO16(edx))) goto loc_0051226A; /* jbe: below or equal (unsigned <=) */

loc_0051215A: ;
    PUSH32(esp, ebx);
    PUSH32(esp, esi);
    MEM32(ebp + 0x6C) = edx;
    PUSH32(esp, edi);

loc_00512160: ;
    edi = MEM32(ebp + 0x6C);
    ecx = eax + 0x3A0;
    esi = MEM32(ecx);
    if (CMP_EQ(MEM32(esi + edi + 0x24), edx)) goto loc_0051224E; /* je: equal / zero */

loc_00512175: ;
    ecx = esi;
    esi = edi;
    edi = MEM32(eax + 0x3C4);
    ecx = ecx + esi;
    esi = MEM32(ecx + 0xC);
    MEM32(ebp + 0x68) = esi;
    esi = MEM32(ecx + 0x68);
    ecx = MEM32(ecx + 8);
    MEM8(ebp + 0x73) = LO8(edx);
    edx = MEM32(eax + 0x3C0);
    MEM32(ebp + 0x58) = edi;
    edi = MEM32(eax + 0x328);
    eax = MEM32(eax + 0x354);
    ebx = edx + ecx;
    MEM32(ebp + 0x5C) = ebx;
    eax = eax + edx * 4;

loc_005121AE: ;
    ebx = MEM32(eax);
    if (CMP_LE(MEM32(ebp + 0x58), ebx)) goto loc_005121B8; /* jle: less or equal (signed <=) */

loc_005121B5: ;
    ebx = MEM32(ebp + 0x58);

loc_005121B8: ;
    if (CMP_GE(ebx, edi)) goto loc_00512211; /* jge: greater or equal (signed >=) */

loc_005121BC: ;
    eax = eax + 4;
    MEM32(ebp + 0x54) = eax;
    eax = MEM32(eax);
    (void)0; /* cmp edi, eax - flags set for next jcc */
    edx = edi;
    if (CMP_L(edi, eax)) goto loc_005121CC; /* jl: less (signed <) */

loc_005121CA: ;
    edx = eax;

loc_005121CC: ;
    eax = MEM32(ebp + 0x5C);
    if (CMP_NE(MEM8(eax), 1)) goto loc_00512209; /* jne: not equal / not zero */

loc_005121D4: ;
    edx = edx - ebx;
    fp_push(0.0); /* fldz */
    MEM32(ebp + 0x60) = edx;
    (void)0; /* cmp MEM32(ebp + 0x60), 0 - flags set for next jcc */
    edx = esi + ebx * 4;
    if (CMP_LE(MEM32(ebp + 0x60), 0)) goto loc_005121F7; /* jle: less or equal (signed <=) */

loc_005121E4: ;
    eax = MEM32(ebp + 0x60);

loc_005121E7: ;
    fp_push(MEMF(edx)); /* fld float */
    edx = edx + 4;
    eax--;
    /* fld st(0) */
    fp_st1() *= fp_top(); fp_pop(); /* fmul */
    fp_st1() += fp_top(); fp_pop(); /* faddp */
    /* fstp st(0) */
    if ((eax != 0)) goto loc_005121E7; /* jne: not equal / not zero */

loc_005121F7: ;
    fp_push((double)SMEM32(ebp + 0x60)); /* fild */
    eax = ZX8(MEM8(ebp + 0x73));
    MEM8(ebp + 0x73) = MEM8(ebp + 0x73) + 1;
    /* FPU: fdivr st(1) */
    MEMF(ebp + eax * 4 + -16) = (float)fp_top(); fp_popp(); /* fstp */
    /* fstp st(0) */

loc_00512209: ;
    eax = MEM32(ebp + 0x54);
    MEM32(ebp + 0x5C) = MEM32(ebp + 0x5C) + 1;
    goto loc_005121AE;

loc_00512211: ;
    SET_LO8(ebx, MEM8(ebp + 0x73));
    eax = ZX8(LO8(ebx));
    edi = eax + -1;
    if (CMP_LE(edi & edi, 0)) goto loc_0051223D; /* jle: less or equal (signed <=) */

loc_0051221E: ;
    esi = MEM32(ebp + 0x68);
    fp_push(1.0); /* fld1 */
    fp_st1() /= fp_top(); fp_pop(); /* fdiv */
    edx = ebp + -16;
    edx = edx - esi;

loc_0051222C: ;
    /* fld st(0) */
    fp_st1() *= fp_top(); fp_pop(); /* fmul */
    fp_top() = sqrt(fp_top()); /* fsqrt */
    MEMF(esi) = (float)fp_top(); fp_popp(); /* fstp */
    esi = esi + 4;
    edi--;
    if ((edi != 0)) goto loc_0051222C; /* jne: not equal / not zero */

loc_0051223B: ;
    /* fstp st(0) */

loc_0051223D: ;
    edx = 0; /* xor self */
    if (CMP_BE(LO8(ebx), LO8(edx))) goto loc_0051224C; /* jbe: below or equal (unsigned <=) */

loc_00512243: ;
    esi = MEM32(ebp + 0x68);
    fp_push(1.0); /* fld1 */
    MEMF(esi + eax * 4 + -4) = (float)fp_top(); fp_popp(); /* fstp */

loc_0051224C: ;
    MEM8(ecx) = LO8(ebx);

loc_0051224E: ;
    eax = MEM32(ebp + 0x7C);
    eax = MEM32(eax);
    ecx = ZX16(MEM16(eax + 0x58));
    MEM32(ebp + 0x64) = MEM32(ebp + 0x64) + 1;
    MEM32(ebp + 0x6C) = MEM32(ebp + 0x6C) + 0x70;
    if (CMP_L(MEM32(ebp + 0x64), ecx)) goto loc_00512160; /* jl: less (signed <) */

loc_00512267: ;
    POP32(esp, edi);
    POP32(esp, esi);
    POP32(esp, ebx);

loc_0051226A: ;
    ebp = ebp + 0x74;
    esp = ebp;
    POP32(esp, ebp); /* leave */
    esp += 8; return; /* ret 4 */

    #undef fp_push
    #undef fp_pop
    #undef fp_popp
    #undef fp_top
    #undef fp_st1
}

/**
 * sub_00512271
 * Original: 0x00512271 - 0x005127F7 (1414 bytes, 455 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00512271(void)
{
    uint32_t ebp;
    int _flags = 0; /* fallback flag var */

loc_00512271: ;
    PUSH32(esp, ebp);
    ebp = esp;
    esp = esp - 0x14;
    PUSH32(esp, ebx);
    ebx = MEM32(ebp + 8);
    ecx = MEM32(ebx + 0x1C);
    eax = 0; /* xor self */
    (void)0; /* cmp ecx, eax - flags set for next jcc */
    PUSH32(esp, esi);
    esi = MEM32(ebx);
    PUSH32(esp, edi);
    MEM32(ebp + -12) = eax;
    MEM32(ebp + -8) = eax;
    MEM32(ebp + 8) = eax;
    if (CMP_EQ(ecx, eax)) goto loc_005122C0; /* je: equal / zero */

loc_00512291: ;
    if (CMP_EQ(ecx, 1)) goto loc_0051251A; /* je: equal / zero */

loc_0051229A: ;
    if (CMP_LE(ecx, 1)) goto loc_0051268E; /* jle: less or equal (signed <=) */

loc_005122A0: ;
    if (CMP_LE(ecx, 3)) goto loc_0051257F; /* jle: less or equal (signed <=) */

loc_005122A9: ;
    if (CMP_EQ(ecx, 4)) goto loc_005125A0; /* je: equal / zero */

loc_005122B2: ;
    if (CMP_EQ(ecx, 5)) goto loc_00512658; /* je: equal / zero */

loc_005122BB: ;
    goto loc_0051268E;

loc_005122C0: ;
    if (CMP_EQ(MEM32(esi + 0x68), eax)) goto loc_005123DA; /* je: equal / zero */

loc_005122C9: ;
    edi = 0; /* xor self */
    eax = esi + 0x80;
    edi++;
    edx = 0; /* xor self */
    if (CMP_BE(MEM32(eax), edi)) goto loc_005122E9; /* jbe: below or equal (unsigned <=) */

loc_005122D8: ;
    eax = MEM32(eax);
    MEM32(ebp + 8) = eax;

loc_005122DD: ;
    eax = MEM32(ebp + 8);
    edx++;
    ecx = edx;
    eax = eax >> LO8(ecx);
    if (CMP_A(eax, edi)) goto loc_005122DD; /* ja: above (unsigned >) */

loc_005122E9: ;
    ecx = 0; /* xor self */
    if (CMP_BE(edx, edi)) goto loc_005122F8; /* jbe: below or equal (unsigned <=) */

loc_005122EF: ;
    ecx++;
    eax = edx;
    eax = eax >> LO8(ecx);
    if (CMP_A(eax, edi)) goto loc_005122EF; /* ja: above (unsigned >) */

loc_005122F8: ;
    PUSH32(esp, 0xC);
    ecx++;
    edi = ebx + 0x30;
    PUSH32(esp, edi);
    MEM32(ebp + -16) = ecx;
    PUSH32(esp, 0); sub_0050F83D(); /* call 0x0050F83D */

loc_00512307: ;
    (void)0; /* test eax, eax - flags set for next jcc */
    MEM32(ebp + 8) = eax;
    if (TEST_S(eax, eax)) goto loc_00512695; /* jl: less (signed <) */

loc_00512312: ;
    if (CMP_EQ(MEM32(esi + 0x78), 0)) goto loc_00512394; /* je: equal / zero */

loc_00512318: ;
    eax = ebp + -4;
    PUSH32(esp, eax);
    PUSH32(esp, MEM32(ebp + -16));
    PUSH32(esp, edi);
    PUSH32(esp, 0); sub_0050F9C4(); /* call 0x0050F9C4 */

loc_00512325: ;
    (void)0; /* test eax, eax - flags set for next jcc */
    MEM32(ebp + 8) = eax;
    if (TEST_S(eax, eax)) goto loc_00512695; /* jl: less (signed <) */

loc_00512330: ;
    ecx = MEM32(ebp + -4);
    eax = 0; /* xor self */
    eax++;
    eax = eax << LO8(ecx);
    ecx = eax;
    eax = MEM32(esi + 0x31C);
    edx = ((int32_t)eax < 0) ? 0xFFFFFFFF : 0; /* cdq */
    { int64_t _dividend = ((int64_t)(int32_t)edx << 32) | eax;
      eax = (uint32_t)((int32_t)(_dividend / (int32_t)ecx));
      edx = (uint32_t)((int32_t)(_dividend % (int32_t)ecx)); }
    MEM32(ebp + -12) = eax;
    eax = ebp + -4;
    PUSH32(esp, eax);
    PUSH32(esp, MEM32(ebp + -16));
    PUSH32(esp, edi);
    PUSH32(esp, 0); sub_0050F9C4(); /* call 0x0050F9C4 */

loc_00512353: ;
    (void)0; /* test eax, eax - flags set for next jcc */
    MEM32(ebp + 8) = eax;
    if (TEST_S(eax, eax)) goto loc_00512695; /* jl: less (signed <) */

loc_0051235E: ;
    ecx = MEM32(ebp + -4);
    edi = MEM32(esi + 0x31C);
    eax = 0; /* xor self */
    eax++;
    eax = eax << LO8(ecx);
    MEM32(esi + 0x78) = MEM32(esi + 0x78) & 0;
    ecx = eax;
    eax = edi;
    edx = ((int32_t)eax < 0) ? 0xFFFFFFFF : 0; /* cdq */
    { int64_t _dividend = ((int64_t)(int32_t)edx << 32) | eax;
      eax = (uint32_t)((int32_t)(_dividend / (int32_t)ecx));
      edx = (uint32_t)((int32_t)(_dividend % (int32_t)ecx)); }
    MEM32(ebp + -8) = eax;
    eax = MEM32(esi + 0x88);
    if (CMP_L(MEM32(ebp + -12), eax)) goto loc_005123D0; /* jl: less (signed <) */

loc_00512385: ;
    if (CMP_G(MEM32(ebp + -12), edi)) goto loc_005123D0; /* jg: greater (signed >) */

loc_0051238A: ;
    if (CMP_L(MEM32(ebp + -8), eax)) goto loc_005123D0; /* jl: less (signed <) */

loc_0051238F: ;
    if (CMP_G(MEM32(ebp + -8), edi)) goto loc_005123D0; /* jg: greater (signed >) */

loc_00512394: ;
    eax = ebp + -4;
    PUSH32(esp, eax);
    PUSH32(esp, MEM32(ebp + -16));
    eax = ebx + 0x30;
    PUSH32(esp, eax);
    PUSH32(esp, 0); sub_0050F9C4(); /* call 0x0050F9C4 */

loc_005123A4: ;
    (void)0; /* test eax, eax - flags set for next jcc */
    MEM32(ebp + 8) = eax;
    if (TEST_S(eax, eax)) goto loc_00512695; /* jl: less (signed <) */

loc_005123AF: ;
    ecx = MEM32(ebp + -4);
    edi = MEM32(esi + 0x31C);
    eax = 0; /* xor self */
    eax++;
    eax = eax << LO8(ecx);
    ecx = eax;
    eax = edi;
    edx = ((int32_t)eax < 0) ? 0xFFFFFFFF : 0; /* cdq */
    { int64_t _dividend = ((int64_t)(int32_t)edx << 32) | eax;
      eax = (uint32_t)((int32_t)(_dividend / (int32_t)ecx));
      edx = (uint32_t)((int32_t)(_dividend % (int32_t)ecx)); }
    if (CMP_L(eax, MEM32(esi + 0x88))) goto loc_005123D0; /* jl: less (signed <) */

loc_005123CC: ;
    if (CMP_LE(eax, edi)) goto loc_005123DA; /* jle: less or equal (signed <=) */

loc_005123D0: ;
    eax = 0x80040002u;
    goto loc_00512698;

loc_005123DA: ;
    PUSH32(esp, MEM32(ebp + -8));
    PUSH32(esp, MEM32(ebp + -12));
    PUSH32(esp, eax);
    PUSH32(esp, ebx);
    PUSH32(esp, 0); sub_0050D1CE(); /* call 0x0050D1CE */

loc_005123E7: ;
    (void)0; /* test eax, eax - flags set for next jcc */
    MEM32(ebp + 8) = eax;
    if (TEST_S(eax, eax)) goto loc_00512695; /* jl: less (signed <) */

loc_005123F2: ;
    PUSH32(esp, esi);
    PUSH32(esp, 0); sub_0050E4DD(); /* call 0x0050E4DD */

loc_005123F8: ;
    (void)0; /* test eax, eax - flags set for next jcc */
    MEM32(ebp + 8) = eax;
    if (TEST_S(eax, eax)) goto loc_00512695; /* jl: less (signed <) */

loc_00512403: ;
    SET_LO16(eax, MEM16(esi + 0x58));
    if (CMP_NE(LO16(eax), 1)) goto loc_00512447; /* jne: not equal / not zero */

loc_0051240D: ;
    eax = ebp + -4;
    PUSH32(esp, eax);
    PUSH32(esp, 1);
    eax = ebx + 0x30;
    PUSH32(esp, eax);
    PUSH32(esp, 0); sub_0050F9C4(); /* call 0x0050F9C4 */

loc_0051241C: ;
    (void)0; /* test eax, eax - flags set for next jcc */
    MEM32(ebp + 8) = eax;
    if (TEST_S(eax, eax)) goto loc_00512695; /* jl: less (signed <) */

loc_00512427: ;
    edx = MEM32(ebp + -4);
    eax = esi + 0x3A0;
    ecx = MEM32(eax);
    MEM32(ecx + 0x24) = edx;
    eax = MEM32(eax);
    ecx = 0; /* xor self */
    (void)0; /* cmp MEM32(eax + 0x24), ecx - flags set for next jcc */
    SET_LO8(ecx, (CMP_EQ(MEM32(eax + 0x24), ecx)) ? 1 : 0); /* sete */
    MEM32(ebp + -20) = ecx;
    goto loc_005124E5;

loc_00512447: ;
    if (CMP_NE(LO16(eax), 2)) goto loc_005124E5; /* jne: not equal / not zero */

loc_00512451: ;
    eax = ebp + -4;
    PUSH32(esp, eax);
    PUSH32(esp, 1);
    edi = ebx + 0x30;
    PUSH32(esp, edi);
    PUSH32(esp, 0); sub_0050F9C4(); /* call 0x0050F9C4 */

loc_00512460: ;
    (void)0; /* test eax, eax - flags set for next jcc */
    MEM32(ebp + 8) = eax;
    if (TEST_S(eax, eax)) goto loc_00512695; /* jl: less (signed <) */

loc_0051246B: ;
    eax = MEM32(ebp + -4);
    MEM32(esi + 0x338) = eax;
    eax = ebp + -4;
    PUSH32(esp, eax);
    PUSH32(esp, 1);
    PUSH32(esp, edi);
    PUSH32(esp, 0); sub_0050F9C4(); /* call 0x0050F9C4 */

loc_00512480: ;
    (void)0; /* test eax, eax - flags set for next jcc */
    MEM32(ebp + 8) = eax;
    if (TEST_S(eax, eax)) goto loc_00512695; /* jl: less (signed <) */

loc_0051248B: ;
    eax = MEM32(esi + 0x3A0);
    ecx = MEM32(ebp + -4);
    MEM32(eax + 0x24) = ecx;
    eax = ebp + -4;
    PUSH32(esp, eax);
    PUSH32(esp, 1);
    PUSH32(esp, edi);
    PUSH32(esp, 0); sub_0050F9C4(); /* call 0x0050F9C4 */

loc_005124A3: ;
    (void)0; /* test eax, eax - flags set for next jcc */
    MEM32(ebp + 8) = eax;
    if (TEST_S(eax, eax)) goto loc_00512695; /* jl: less (signed <) */

loc_005124AE: ;
    eax = MEM32(esi + 0x3A0);
    ecx = MEM32(ebp + -4);
    MEM32(eax + 0x94) = ecx;
    edi = MEM32(esi + 0x3A0);
    eax = 0; /* xor self */
    (void)0; /* cmp MEM32(edi + 0x94), eax - flags set for next jcc */
    SET_LO8(eax, (CMP_EQ(MEM32(edi + 0x94), eax)) ? 1 : 0); /* sete */
    ecx = 0; /* xor self */
    (void)0; /* cmp MEM32(edi + 0x24), ecx - flags set for next jcc */
    SET_LO8(ecx, (CMP_EQ(MEM32(edi + 0x24), ecx)) ? 1 : 0); /* sete */
    edi = edi + 0x70;
    PUSH32(esp, edi);
    PUSH32(esp, ebx);
    eax = eax & ecx;
    MEM32(ebp + -20) = eax;
    PUSH32(esp, 0); sub_00511D1E(); /* call 0x00511D1E */

loc_005124E5: ;
    eax = 0; /* xor self */
    eax++;
    edi = 0; /* xor self */
    (void)0; /* cmp MEM32(ebp + -20), edi - flags set for next jcc */
    MEM32(esi + 0x344) = eax;
    if (CMP_EQ(MEM32(ebp + -20), edi)) goto loc_00512517; /* je: equal / zero */

loc_005124F5: ;
    if (CMP_NE(MEM32(esi + 0x334), edi)) goto loc_00512509; /* jne: not equal / not zero */

loc_005124FD: ;
    PUSH32(esp, MEM32(ebp + 0xC));
    PUSH32(esp, ebx);
    PUSH32(esp, 0); sub_00511DED(); /* call 0x00511DED */

loc_00512506: ;
    MEM32(ebp + 8) = eax;

loc_00512509: ;
    if (CMP_L(MEM32(ebp + 8), edi)) goto loc_00512695; /* jl: less (signed <) */

loc_00512512: ;
    goto loc_0051268E;

loc_00512517: ;
    MEM32(ebx + 0x1C) = eax;

loc_0051251A: ;
    PUSH32(esp, 0x15);
    edi = ebx + 0x30;
    PUSH32(esp, edi);
    PUSH32(esp, 0); sub_0050F83D(); /* call 0x0050F83D */

loc_00512525: ;
    (void)0; /* test eax, eax - flags set for next jcc */
    MEM32(ebp + 8) = eax;
    if (TEST_S(eax, eax)) goto loc_00512695; /* jl: less (signed <) */

loc_00512530: ;
    goto loc_00512540;

loc_00512532: ;
    ecx = MEM32(ebp + -4);
    if (CMP_NE(ecx, 0x7F)) goto loc_00512558; /* jne: not equal / not zero */

loc_0051253A: ;
    MEM32(esi + 0x344) = MEM32(esi + 0x344) + ecx;

loc_00512540: ;
    eax = ebp + -4;
    PUSH32(esp, eax);
    PUSH32(esp, 7);
    PUSH32(esp, edi);
    PUSH32(esp, 0); sub_0050F9C4(); /* call 0x0050F9C4 */

loc_0051254C: ;
    (void)0; /* test eax, eax - flags set for next jcc */
    MEM32(ebp + 8) = eax;
    if (CMP_GE(eax & eax, 0)) goto loc_00512532; /* jge: greater or equal (signed >=) */

loc_00512553: ;
    goto loc_00512695;

loc_00512558: ;
    eax = esi + 0x344;
    MEM32(eax) = MEM32(eax) + ecx;
    PUSH32(esp, MEM32(eax));
    PUSH32(esp, esi);
    PUSH32(esp, 0); sub_0050E748(); /* call 0x0050E748 */

loc_00512568: ;
    MEM16(ebx + 0x24) = MEM16(ebx + 0x24) & 0;
    SET_LO16(eax, MEM16(esi + 0x3C0));
    MEM16(ebx + 0x26) = LO16(eax);
    MEM32(ebx + 0x1C) = 2;

loc_0051257F: ;
    if (CMP_NE(MEM32(esi + 0x30), 1)) goto loc_00512599; /* jne: not equal / not zero */

loc_00512585: ;
    PUSH32(esp, MEM32(ebp + 0xC));
    PUSH32(esp, ebx);
    PUSH32(esp, 0); sub_00511F1B(); /* call 0x00511F1B */

loc_0051258E: ;
    (void)0; /* test eax, eax - flags set for next jcc */
    MEM32(ebp + 8) = eax;
    if (TEST_S(eax, eax)) goto loc_00512695; /* jl: less (signed <) */

loc_00512599: ;
    MEM32(ebx + 0x1C) = 4;

loc_005125A0: ;
    eax = ebx + 0x30;
    PUSH32(esp, 1);
    PUSH32(esp, eax);
    PUSH32(esp, 0); sub_0050F83D(); /* call 0x0050F83D */

loc_005125AB: ;
    (void)0; /* test eax, eax - flags set for next jcc */
    MEM32(ebp + 8) = eax;
    if (TEST_S(eax, eax)) goto loc_00512695; /* jl: less (signed <) */

loc_005125B6: ;
    eax = MEM32(esi + 0x3A0);
    edx = MEM32(esi + 0x31C);
    ecx = MEM32(eax + 0x20);
    edi = MEM32(esi + 0x3A4);
    edx = edx << 1;
    edx = edx - ecx;
    edi = edi + edx * 2;
    MEM32(eax) = edi;
    eax = 0; /* xor self */
    { uint32_t _i; for (_i = 0; _i < ecx; _i++) MEM16(edi + _i*2) = LO16(eax); }
    edi += ecx * 2; ecx = 0; /* rep stosw */
    if (CMP_NE(MEM16(esi + 0x58), 2)) goto loc_0051260A; /* jne: not equal / not zero */

loc_005125E0: ;
    eax = MEM32(esi + 0x3A0);
    edx = MEM32(esi + 0x31C);
    ecx = MEM32(eax + 0x90);
    edi = MEM32(esi + 0x3A4);
    eax = eax + 0x70;
    edx = edx << 2;
    edx = edx - ecx;
    edi = edi + edx * 2;
    MEM32(eax) = edi;
    eax = 0; /* xor self */
    { uint32_t _i; for (_i = 0; _i < ecx; _i++) MEM16(edi + _i*2) = LO16(eax); }
    edi += ecx * 2; ecx = 0; /* rep stosw */

loc_0051260A: ;
    eax = MEM32(esi + 0x70);
    edi = esi + eax * 4 + 0x204;
    eax = 0; /* xor self */
    eax++;
    MEM32(edi) = eax;
    if (CMP_EQ(MEM32(esi + 0x68), 0)) goto loc_00512647; /* je: equal / zero */

loc_0051261F: ;
    if (CMP_LE(MEM32(esi + 0x174), eax)) goto loc_00512647; /* jle: less or equal (signed <=) */

loc_00512627: ;
    eax = ebp + -4;
    PUSH32(esp, eax);
    PUSH32(esp, 1);
    eax = ebx + 0x30;
    PUSH32(esp, eax);
    PUSH32(esp, 0); sub_0050F9C4(); /* call 0x0050F9C4 */

loc_00512636: ;
    (void)0; /* test eax, eax - flags set for next jcc */
    MEM32(ebp + 8) = eax;
    if (TEST_S(eax, eax)) goto loc_00512695; /* jl: less (signed <) */

loc_0051263D: ;
    eax = MEM32(ebp + -4);
    MEM32(edi) = eax;
    eax = MEM32(ebp + 0xC);
    MEM32(eax) = MEM32(eax) + 1;

loc_00512647: ;
    MEM16(ebx + 0x24) = MEM16(ebx + 0x24) & 0;
    MEM16(ebx + 0x26) = MEM16(ebx + 0x26) & 0;
    MEM32(ebx + 0x1C) = 5;

loc_00512658: ;
    (void)0; /* cmp MEM32(esi + 0x334), 1 - flags set for next jcc */
    eax = MEM32(esi + 0x70);
    eax = esi + eax * 4 + 0x204;
    MEM32(ebp + -20) = eax;
    if (CMP_EQ(MEM32(esi + 0x334), 1)) goto loc_005127E2; /* je: equal / zero */

loc_00512672: ;
    PUSH32(esp, MEM32(ebp + 0xC));
    PUSH32(esp, ebx);
    PUSH32(esp, 0); sub_00511DED(); /* call 0x00511DED */

loc_0051267B: ;
    (void)0; /* test eax, eax - flags set for next jcc */
    MEM32(ebp + 8) = eax;
    if (TEST_S(eax, eax)) goto loc_00512695; /* jl: less (signed <) */

loc_00512682: ;
    if (CMP_NE(MEM32(esi + 0x30), 1)) goto loc_0051268E; /* jne: not equal / not zero */

loc_00512688: ;
    PUSH32(esp, ebx);
    PUSH32(esp, 0); sub_0051213B(); /* call 0x0051213B */

loc_0051268E: ;
    MEM32(ebx + 0x1C) = 6;

loc_00512695: ;
    eax = MEM32(ebp + 8);

loc_00512698: ;
    POP32(esp, edi);
    POP32(esp, esi);
    POP32(esp, ebx);
    esp = ebp;
    POP32(esp, ebp); /* leave */
    esp += 12; return; /* ret 8 */

loc_0051269F: ;
    eax = (uint32_t)(int32_t)SMEM16(ebx + 0x24);
    eax = (uint32_t)((int32_t)eax * (int32_t)0x70);
    eax = eax + MEM32(esi + 0x3A0);
    (void)0; /* cmp MEM32(eax + 0x24), 0 - flags set for next jcc */
    MEM32(ebp + -12) = eax;
    if (CMP_EQ(MEM32(eax + 0x24), 0)) goto loc_005127B0; /* je: equal / zero */

loc_005126B9: ;
    edi = MEM32(eax + 4);
    eax = MEM32(ebp + -20);
    if (CMP_NE(MEM32(eax), 1)) goto loc_00512778; /* jne: not equal / not zero */

loc_005126C8: ;
    if (CMP_NE(MEM32(esi + 0x44), 1)) goto loc_0051275A; /* jne: not equal / not zero */

loc_005126D2: ;
    eax = ebp + -4;
    PUSH32(esp, eax);
    PUSH32(esp, 5);
    eax = ebx + 0x30;
    PUSH32(esp, eax);
    PUSH32(esp, 0); sub_0050F9C4(); /* call 0x0050F9C4 */

loc_005126E1: ;
    (void)0; /* test eax, eax - flags set for next jcc */
    MEM32(ebp + 8) = eax;
    if (TEST_S(eax, eax)) goto loc_00512695; /* jl: less (signed <) */

loc_005126E8: ;
    eax = MEM32(ebp + -4);
    eax = eax + 0xA;
    MEM32(edi) = eax;
    eax = MEM32(ebp + 0xC);
    MEM32(eax) = MEM32(eax) + 5;
    goto loc_00512756;

loc_005126F8: ;
    PUSH32(esp, 0);
    eax = ebp + -16;
    PUSH32(esp, eax);
    eax = ebp + -4;
    PUSH32(esp, eax);
    eax = ebx + 0x30;
    PUSH32(esp, eax);
    PUSH32(esp, 0x515098);
    PUSH32(esp, 0); sub_00514B26(); /* call 0x00514B26 */

loc_00512710: ;
    (void)0; /* test eax, eax - flags set for next jcc */
    MEM32(ebp + 8) = eax;
    if (TEST_S(eax, eax)) goto loc_00512695; /* jl: less (signed <) */

loc_0051271B: ;
    PUSH32(esp, MEM32(ebp + -4));
    eax = ebx + 0x30;
    PUSH32(esp, eax);
    PUSH32(esp, 0); sub_0050F8AC(); /* call 0x0050F8AC */

loc_00512727: ;
    (void)0; /* test eax, eax - flags set for next jcc */
    MEM32(ebp + 8) = eax;
    if (TEST_S(eax, eax)) goto loc_00512695; /* jl: less (signed <) */

loc_00512732: ;
    SET_LO16(ecx, MEM16(ebx + 0x26));
    MEM32(ebp + -16) = MEM32(ebp + -16) - 0x3C;
    if (TEST_NZ(LO16(ecx), LO16(ecx))) goto loc_00512744; /* jne: not equal / not zero */

loc_0051273F: ;
    PUSH32(esp, 0x24);
    POP32(esp, eax);
    goto loc_0051274B;

loc_00512744: ;
    eax = SX16(LO16(ecx));
    eax = MEM32(edi + eax * 4 + -4);

loc_0051274B: ;
    edx = MEM32(ebp + -16);
    ecx = SX16(LO16(ecx));
    eax = eax + edx;
    MEM32(edi + ecx * 4) = eax;

loc_00512756: ;
    MEM16(ebx + 0x26) = MEM16(ebx + 0x26) + 1;

loc_0051275A: ;
    eax = (uint32_t)(int32_t)SMEM16(ebx + 0x26);
    if (CMP_L(eax, MEM32(esi + 0x350))) goto loc_005126F8; /* jl: less (signed <) */

loc_00512766: ;
    eax = MEM32(esi + 0x70);
    eax = MEM32(esi + eax * 4 + 0x178);
    MEM32(esi + 0x7C) = eax;
    MEM16(ebx + 0x26) = MEM16(ebx + 0x26) & 0;

loc_00512778: ;
    eax = MEM32(ebp + -20);
    if (CMP_EQ(MEM32(eax), 0)) goto loc_005127DE; /* je: equal / zero */

loc_00512780: ;
    edx = MEM32(edi);
    ecx = 0; /* xor self */
    ecx++;
    eax = esi + 0x350;
    (void)0; /* cmp MEM32(eax), ecx - flags set for next jcc */
    MEM32(ebp + -8) = ecx;
    if (CMP_LE(MEM32(eax), ecx)) goto loc_005127A8; /* jle: less or equal (signed <=) */

loc_00512792: ;
    eax = MEM32(eax);

loc_00512794: ;
    ecx = MEM32(edi + ecx * 4);
    if (CMP_LE(ecx, edx)) goto loc_0051279D; /* jle: less or equal (signed <=) */

loc_0051279B: ;
    edx = ecx;

loc_0051279D: ;
    MEM32(ebp + -8) = MEM32(ebp + -8) + 1;
    ecx = (uint32_t)(int32_t)SMEM16(ebp + -8);
    if (CMP_L(ecx, eax)) goto loc_00512794; /* jl: less (signed <) */

loc_005127A8: ;
    eax = MEM32(ebp + -12);
    MEM32(eax + 0x34) = edx;
    goto loc_005127DE;

loc_005127B0: ;
    eax = MEM32(ebp + -20);
    if (CMP_NE(MEM32(eax), 1)) goto loc_005127DE; /* jne: not equal / not zero */

loc_005127B8: ;
    ecx = MEM32(esi + 0x350);
    edx = MEM32(ebp + -12);
    edi = MEM32(edx + 4);
    ecx = ecx << 2;
    edx = ecx;
    ecx = ecx >> 2;
    eax = 0; /* xor self */
    { uint32_t _i; for (_i = 0; _i < ecx; _i++) MEM32(edi + _i*4) = eax; }
    edi += ecx * 4; ecx = 0; /* rep stosd */
    ecx = edx;
    ecx = ecx & 3;
    memset((void*)XBOX_PTR(edi), (uint8_t)eax, ecx);
    edi += ecx; ecx = 0; /* rep stosb */
    eax = MEM32(ebp + -12);
    MEM32(eax + 0x34) = MEM32(eax + 0x34) & 0;

loc_005127DE: ;
    MEM16(ebx + 0x24) = MEM16(ebx + 0x24) + 1;

loc_005127E2: ;
    eax = ZX16(MEM16(esi + 0x58));
    ecx = (uint32_t)(int32_t)SMEM16(ebx + 0x24);
    if (CMP_L(ecx, eax)) goto loc_0051269F; /* jl: less (signed <) */

loc_005127F2: ;
    goto loc_0051268E;

}

/**
 * sub_005127F7
 * Original: 0x005127F7 - 0x00512817 (32 bytes, 11 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_005127F7(void)
{
    int _flags = 0; /* fallback flag var */

loc_005127F7: ;
    ecx = MEM32(esp + 8);
    eax = 0; /* xor self */
    if (CMP_EQ(MEM32(ecx + 0x24), eax)) goto loc_00512814; /* je: equal / zero */

loc_00512802: ;
    PUSH32(esp, MEM32(esp + 0xC));
    PUSH32(esp, MEM32(ecx + 0x20));
    PUSH32(esp, eax);
    PUSH32(esp, ecx);
    PUSH32(esp, MEM32(esp + 0x14));
    PUSH32(esp, 0); sub_00511CA1(); /* call 0x00511CA1 */

loc_00512814: ;
    esp += 16; return; /* ret 12 */

}

/**
 * sub_00512881
 * Original: 0x00512881 - 0x0051288A (9 bytes, 2 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00512881(void)
{

loc_00512881: ;
    eax = (int32_t)MEMF(esp + 4); /* cvttss2si */
    esp += 8; return; /* ret 4 */

}

/**
 * sub_0051288A
 * Original: 0x0051288A - 0x005128D4 (74 bytes, 27 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0051288A(void)
{
    uint32_t ebp;
    int _flags = 0; /* fallback flag var */

loc_0051288A: ;
    PUSH32(esp, ebp);
    ebp = esp;
    esp = esp - 0x7C;
    eax = MEM32(ebp + 0xC);
    ecx = MEM32(eax + 0xC);
    PUSH32(esp, ebx);
    ebx = MEM32(eax + 8);
    eax = MEM32(eax + 4);
    MEM32(ebp + -24) = ecx;
    ecx = MEM32(ebp + 0x1C);
    (void)0; /* cmp ecx, 6 - flags set for next jcc */
    PUSH32(esp, esi);
    esi = MEM32(ebp + 8);
    PUSH32(esp, edi);
    MEM32(ebp + -44) = ebx;
    MEM32(ebp + -8) = eax;
    MEM8(ebp + 0xF) = 0;
    if (CMP_EQ(ecx, 6)) { sub_005128D4(); return; } /* je: equal / zero */

loc_005128B7: ;
    if (CMP_EQ(MEM32(esi + 0x44), 1)) goto loc_005128CE; /* je: equal / zero */

loc_005128BD: ;
    eax = MEM32(esi + 0x54);
    if (CMP_L(eax, 0x7D00)) goto loc_005128CE; /* jl: less (signed <) */

loc_005128C7: ;
    if (CMP_L(eax, 0xAC44)) { sub_005128D4(); return; } /* jl: less (signed <) */

loc_005128CE: ;
    MEM32(ebp + -12) = MEM32(ebp + -12) & 0;
    g_seh_ebp = ebp; sub_005128DB(); return; /* tail jmp 0x005128DB */

}

/**
 * sub_00512BE6
 * Original: 0x00512BE6 - 0x00512F66 (896 bytes, 248 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00512BE6(void)
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

loc_00512BE6: ;
    PUSH32(esp, ebp);
    ebp = esp;
    PUSH32(esp, ecx);
    PUSH32(esp, ecx);
    fp_push(MEMF(0x648D10)); /* fld float */
    PUSH32(esp, ebx);
    PUSH32(esp, esi);
    esi = MEM32(ebp + 8);
    eax = MEM32(esi + 0x54);
    MEM32(ebp + 8) = eax;
    fp_push((double)SMEM32(ebp + 8)); /* fild */
    ebx = 0; /* xor self */
    ebx++;
    PUSH32(esp, edi);
    fp_st1() *= fp_top(); fp_pop(); /* fmul */
    edi = 0; /* xor self */
    (void)0; /* cmp MEM32(esi + 0x44), ebx - flags set for next jcc */
    MEM32(esi + 0x30) = ebx;
    MEMF(ebp + 8) = (float)fp_top(); fp_popp(); /* fstp */
    ecx = MEM32(ebp + 8);
    MEM32(esi + 0x3BC) = ecx;
    if (CMP_NE(MEM32(esi + 0x44), ebx)) goto loc_00512CE6; /* jne: not equal / not zero */

loc_00512C1F: ;
    if (CMP_EQ(eax, 0x5622)) goto loc_00512D11; /* je: equal / zero */

loc_00512C2A: ;
    if (CMP_EQ(eax, 0xAC44)) goto loc_00512CED; /* je: equal / zero */

loc_00512C35: ;
    if (CMP_NE(eax, 0x3E80)) goto loc_00512C7C; /* jne: not equal / not zero */

loc_00512C3C: ;
    _fpu_cmp = (fp_top() < fp_st1()) ? -1 : (fp_top() > fp_st1()) ? 1 : 0; /* fcom dword ptr [esi + 0x34] */
    /* fnstsw ax - store FPU status word */
    if (TEST_NZ(HI8(eax), 1)) goto loc_00512D80; /* jne: not equal / not zero */

loc_00512C4A: ;
    /* fstp st(0) */
    fp_push(MEMF(ebp + 8)); /* fld float */
    fp_st1() *= fp_top(); fp_pop(); /* fmul */
    goto loc_00512D78;

loc_00512C5A: ;
    fp_push(MEMF(esi + 0x38)); /* fld float */
    _fpu_cmp = (fp_top() < fp_st1()) ? -1 : (fp_top() > fp_st1()) ? 1 : 0; /* fcomp dword ptr [0x6492dc] */
    fp_push(MEMF(ebp + 8)); /* fld float */
    /* fnstsw ax - store FPU status word */
    if (TEST_NZ(HI8(eax), 1)) goto loc_00512E51; /* jne: not equal / not zero */

loc_00512C71: ;
    fp_st1() *= fp_top(); fp_pop(); /* fmul */
    goto loc_00512D78;

loc_00512C7C: ;
    if (CMP_NE(eax, 0x2B11)) goto loc_00512CB7; /* jne: not equal / not zero */

loc_00512C83: ;
    /* fstp st(0) */
    fp_push(MEMF(ebp + 8)); /* fld float */
    fp_st1() *= fp_top(); fp_pop(); /* fmul */
    MEMF(esi + 0x3BC) = (float)fp_top(); fp_popp(); /* fstp */
    fp_push(MEMF(esi + 0x34)); /* fld float */
    _fpu_cmp = (fp_top() < fp_st1()) ? -1 : (fp_top() > fp_st1()) ? 1 : 0; /* fcomp dword ptr [0x648e40] */
    /* fnstsw ax - store FPU status word */
    if (TEST_NZ(HI8(eax), 1)) goto loc_00512D97; /* jne: not equal / not zero */

loc_00512CA8: ;
    MEM32(esi + 0x3C8) = 3;
    goto loc_00512D97;

loc_00512CB7: ;
    (void)0; /* cmp eax, 0x1F40 - flags set for next jcc */
    fp_push(MEMF(esi + 0x34)); /* fld float */
    if (CMP_EQ(eax, 0x1F40)) goto loc_00512D50; /* je: equal / zero */

loc_00512CC5: ;
    _fpu_cmp = (fp_top() < fp_st1()) ? -1 : (fp_top() > fp_st1()) ? 1 : 0; /* fcomp dword ptr [0x648e68] */
    /* fnstsw ax - store FPU status word */
    if (TEST_NZ(HI8(eax), 1)) goto loc_00512E38; /* jne: not equal / not zero */

loc_00512CD6: ;
    /* fstp st(0) */
    fp_push(MEMF(ebp + 8)); /* fld float */
    fp_st1() *= fp_top(); fp_pop(); /* fmul */
    goto loc_00512D78;

loc_00512CE6: ;
    if (CMP_L(eax, 0xAC44)) goto loc_00512D0A; /* jl: less (signed <) */

loc_00512CED: ;
    /* fstp st(0) */
    fp_push(MEMF(esi + 0x38)); /* fld float */
    _fpu_cmp = (fp_top() < fp_st1()) ? -1 : (fp_top() > fp_st1()) ? 1 : 0; /* fcomp dword ptr [0x64b1fc] */
    /* fnstsw ax - store FPU status word */
    if (TEST_Z(HI8(eax), 1)) goto loc_00512D27; /* je: equal / zero */

loc_00512CFF: ;
    fp_push(MEMF(ebp + 8)); /* fld float */
    fp_st1() *= fp_top(); fp_pop(); /* fmul */
    goto loc_00512D78;

loc_00512D0A: ;
    if (CMP_L(eax, 0x5622)) goto loc_00512D2C; /* jl: less (signed <) */

loc_00512D11: ;
    /* fstp st(0) */
    fp_push(MEMF(esi + 0x38)); /* fld float */
    _fpu_cmp = (fp_top() < fp_st1()) ? -1 : (fp_top() > fp_st1()) ? 1 : 0; /* fcomp dword ptr [0x587b40] */
    /* fnstsw ax - store FPU status word */
    if (TEST_NZ(HI8(eax), 1)) goto loc_00512C5A; /* jne: not equal / not zero */

loc_00512D27: ;
    MEM32(esi + 0x30) = edi;
    goto loc_00512D97;

loc_00512D2C: ;
    if (CMP_GE(eax, 0x3E80)) goto loc_00512C3C; /* jge: greater or equal (signed >=) */

loc_00512D37: ;
    if (CMP_GE(eax, 0x2B11)) goto loc_00512C83; /* jge: greater or equal (signed >=) */

loc_00512D42: ;
    (void)0; /* cmp eax, 0x1F40 - flags set for next jcc */
    fp_push(MEMF(esi + 0x34)); /* fld float */
    if (CMP_L(eax, 0x1F40)) goto loc_00512CC5; /* jl: less (signed <) */

loc_00512D50: ;
    _fpu_cmp = (fp_top() < fp_st1()) ? -1 : (fp_top() > fp_st1()) ? 1 : 0; /* fcomp dword ptr [0x64a70c] */
    /* fnstsw ax - store FPU status word */
    if (1 /* jnp after test - parity */) goto loc_00512D8A; /* jnp: not parity */

loc_00512D5D: ;
    /* fstp st(0) */
    fp_push(MEMF(esi + 0x34)); /* fld float */
    _fpu_cmp = (fp_top() < fp_st1()) ? -1 : (fp_top() > fp_st1()) ? 1 : 0; /* fcomp dword ptr [0x648f58] */
    /* fnstsw ax - store FPU status word */
    if (1 /* jp after test - parity */) goto loc_00512D27; /* jp: parity */

loc_00512D6F: ;
    fp_push(MEMF(ebp + 8)); /* fld float */
    fp_st1() *= fp_top(); fp_pop(); /* fmul */

loc_00512D78: ;
    MEMF(esi + 0x3BC) = (float)fp_top(); fp_popp(); /* fstp */
    goto loc_00512D97;

loc_00512D80: ;
    MEM32(esi + 0x3C8) = 3;

loc_00512D8A: ;
    fp_push(MEMF(ebp + 8)); /* fld float */
    fp_st1() *= fp_top(); fp_pop(); /* fmul */
    MEMF(esi + 0x3BC) = (float)fp_top(); fp_popp(); /* fstp */
    /* fstp st(0) */

loc_00512D97: ;
    if (CMP_EQ(MEM32(esi + 0x30), edi)) goto loc_00512F5D; /* je: equal / zero */

loc_00512DA0: ;
    eax = MEM32(esi + 0x90);
    eax = eax << 2;
    PUSH32(esp, eax);
    PUSH32(esp, 0); sub_0050D864(); /* call 0x0050D864 */

loc_00512DAF: ;
    (void)0; /* cmp eax, edi - flags set for next jcc */
    MEM32(esi + 0x3CC) = eax;
    if (CMP_EQ(eax, edi)) goto loc_00512E2E; /* je: equal / zero */

loc_00512DB9: ;
    eax = ZX16(MEM16(esi + 0x58));
    eax = (uint32_t)((int32_t)eax * (int32_t)MEM32(esi + 0x350));
    PUSH32(esp, eax);
    PUSH32(esp, 0); sub_0050D864(); /* call 0x0050D864 */

loc_00512DCA: ;
    (void)0; /* cmp eax, edi - flags set for next jcc */
    MEM32(esi + 0x3D0) = eax;
    if (CMP_EQ(eax, edi)) goto loc_00512E2E; /* je: equal / zero */

loc_00512DD4: ;
    eax = ZX16(MEM16(esi + 0x58));
    eax = (uint32_t)((int32_t)eax * (int32_t)MEM32(esi + 0x350));
    eax = eax << 2;
    PUSH32(esp, eax);
    PUSH32(esp, 0); sub_0050D864(); /* call 0x0050D864 */

loc_00512DE8: ;
    (void)0; /* cmp eax, edi - flags set for next jcc */
    MEM32(esi + 0x3D8) = eax;
    if (CMP_EQ(eax, edi)) goto loc_00512E2E; /* je: equal / zero */

loc_00512DF2: ;
    eax = ZX16(MEM16(esi + 0x58));
    eax = (uint32_t)((int32_t)eax * (int32_t)MEM32(esi + 0x350));
    eax = eax << 2;
    PUSH32(esp, eax);
    PUSH32(esp, 0); sub_0050D864(); /* call 0x0050D864 */

loc_00512E06: ;
    (void)0; /* cmp eax, edi - flags set for next jcc */
    MEM32(esi + 0x3DC) = eax;
    if (CMP_EQ(eax, edi)) goto loc_00512E2E; /* je: equal / zero */

loc_00512E10: ;
    eax = ZX16(MEM16(esi + 0x58));
    eax = (uint32_t)((int32_t)eax * (int32_t)MEM32(esi + 0x350));
    eax = eax << 2;
    PUSH32(esp, eax);
    PUSH32(esp, 0); sub_0050D864(); /* call 0x0050D864 */

loc_00512E24: ;
    (void)0; /* cmp eax, edi - flags set for next jcc */
    MEM32(esi + 0x3D4) = eax;
    if (CMP_NE(eax, edi)) goto loc_00512E5C; /* jne: not equal / not zero */

loc_00512E2E: ;
    eax = 0x8007000Eu;
    goto loc_00512F5F;

loc_00512E38: ;
    fp_push(MEMF(esi + 0x34)); /* fld float */
    _fpu_cmp = (fp_top() < fp_st1()) ? -1 : (fp_top() > fp_st1()) ? 1 : 0; /* fcomp dword ptr [0x649228] */
    /* fnstsw ax - store FPU status word */
    if (TEST_NZ(HI8(eax), 1)) goto loc_00512D8A; /* jne: not equal / not zero */

loc_00512E4C: ;
    /* fstp st(0) */
    fp_push(MEMF(ebp + 8)); /* fld float */

loc_00512E51: ;
    fp_st1() *= fp_top(); fp_pop(); /* fmul */
    goto loc_00512D78;

loc_00512E5C: ;
    fp_push((double)SMEM32(esi + 0x54)); /* fild */
    eax = MEM32(esi + 0x3B0);
    ecx = 0; /* xor self */
    (void)0; /* cmp MEM32(esi + 0x44), ebx - flags set for next jcc */
    /* FPU: fdivr dword ptr [0x648d14] */
    MEM32(ebp + 8) = eax;
    MEMF(ebp + -8) = (float)fp_top(); fp_popp(); /* fstp */
    if (CMP_NE(MEM32(esi + 0x44), ebx)) goto loc_00512EC8; /* jne: not equal / not zero */

loc_00512E78: ;
    eax = MEM32(esi + 0x3AC);
    if (CMP_LE(MEM32(eax), edi)) goto loc_00512EB2; /* jle: less or equal (signed <=) */

loc_00512E82: ;
    fp_push(MEMF(esi + 0x3BC)); /* fld float */
    PUSH32(esp, ecx);
    MEMF(esp) = (float)fp_top(); fp_popp(); /* fstp */
    PUSH32(esp, 0); sub_00512881(); /* call 0x00512881 */

loc_00512E91: ;
    edx = ZX16(MEM16(ecx * 2 + 0x51DD5C));
    if (CMP_G(edx, eax)) goto loc_00512EAA; /* jg: greater (signed >) */

loc_00512E9D: ;
    eax = MEM32(esi + 0x3AC);
    ecx++;
    if (CMP_L(ecx, MEM32(eax))) goto loc_00512E82; /* jl: less (signed <) */

loc_00512EA8: ;
    goto loc_00512EB2;

loc_00512EAA: ;
    eax = MEM32(esi + 0x3CC);
    MEM32(eax) = ecx;

loc_00512EB2: ;
    eax = MEM32(esi + 0x3AC);
    if (CMP_NE(ecx, MEM32(eax))) goto loc_00512F4F; /* jne: not equal / not zero */

loc_00512EC0: ;
    MEM32(esi + 0x30) = edi;
    goto loc_00512F4F;

loc_00512EC8: ;
    if (CMP_LE(MEM32(esi + 0x90), edi)) goto loc_00512F4F; /* jle: less or equal (signed <=) */

loc_00512ED0: ;
    eax = MEM32(esi + 0x3AC);
    edx = MEM32(esi + 0x3CC);
    edi = ecx;
    edi = edi << 2;
    eax = MEM32(edi + eax);
    eax--;
    MEM32(edi + edx) = eax;
    eax = MEM32(esi + 0x318);
    ebx = 0; /* xor self */
    ebx++;
    ebx = ebx << LO8(ecx);
    edx = ((int32_t)eax < 0) ? 0xFFFFFFFF : 0; /* cdq */
    PUSH32(esp, ecx);
    { int64_t _dividend = ((int64_t)(int32_t)edx << 32) | eax;
      eax = (uint32_t)((int32_t)(_dividend / (int32_t)ebx));
      edx = (uint32_t)((int32_t)(_dividend % (int32_t)ebx)); }
    MEM32(ebp + -4) = eax;
    fp_push((double)SMEM32(ebp + -4)); /* fild */
    fp_st1() *= fp_top(); fp_pop(); /* fmul */
    fp_st1() *= fp_top(); fp_pop(); /* fmul */
    fp_st1() += fp_top(); fp_pop(); /* fadd */
    MEMF(esp) = (float)fp_top(); fp_popp(); /* fstp */
    PUSH32(esp, 0); sub_00512881(); /* call 0x00512881 */

loc_00512F14: ;
    ebx = MEM32(esi + 0x3AC);
    edx = 0; /* xor self */
    edx++;
    if (CMP_LE(MEM32(edi + ebx), edx)) goto loc_00512F42; /* jle: less or equal (signed <=) */

loc_00512F22: ;
    ebx = MEM32(ebp + 8);
    if (CMP_G(MEM32(ebx + edx * 4), eax)) goto loc_00512F38; /* jg: greater (signed >) */

loc_00512F2A: ;
    ebx = MEM32(esi + 0x3AC);
    edx++;
    if (CMP_L(edx, MEM32(edi + ebx))) goto loc_00512F22; /* jl: less (signed <) */

loc_00512F36: ;
    goto loc_00512F42;

loc_00512F38: ;
    eax = MEM32(esi + 0x3CC);
    edx--;
    MEM32(edi + eax) = edx;

loc_00512F42: ;
    MEM32(ebp + 8) = MEM32(ebp + 8) + 0x68;
    ecx++;
    if (CMP_L(ecx, MEM32(esi + 0x90))) goto loc_00512ED0; /* jl: less (signed <) */

loc_00512F4F: ;
    eax = MEM32(esi + 0x3CC);
    eax = MEM32(eax);
    MEM32(esi + 0x3C0) = eax;

loc_00512F5D: ;
    eax = 0; /* xor self */

loc_00512F5F: ;
    POP32(esp, edi);
    POP32(esp, esi);
    POP32(esp, ebx);
    esp = ebp;
    POP32(esp, ebp); /* leave */
    esp += 8; return; /* ret 4 */

    #undef fp_push
    #undef fp_pop
    #undef fp_popp
    #undef fp_top
    #undef fp_st1
}

/**
 * sub_00512F66
 * Original: 0x00512F66 - 0x00512FFA (148 bytes, 66 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00512F66(void)
{
    uint32_t ebp;
    int _flags = 0; /* fallback flag var */

loc_00512F66: ;
    PUSH32(esp, ebp);
    ebp = esp;
    eax = MEM32(ebp + 0xC);
    ecx = MEM32(ebp + 8);
    PUSH32(esp, ebx);
    PUSH32(esp, esi);
    esi = MEM32(eax + 0x2C);
    eax = MEM32(ecx + 0x70);
    ebx = MEM32(ecx + eax * 4 + 0x178);
    PUSH32(esp, edi);
    edi = MEM32(ecx + eax * 4 + 0x174);
    if (CMP_LE(edi, ebx)) goto loc_00512FAC; /* jle: less or equal (signed <=) */

loc_00512F8A: ;
    eax = edi;
    edx = ((int32_t)eax < 0) ? 0xFFFFFFFF : 0; /* cdq */
    { int64_t _dividend = ((int64_t)(int32_t)edx << 32) | eax;
      eax = (uint32_t)((int32_t)(_dividend / (int32_t)ebx));
      edx = (uint32_t)((int32_t)(_dividend % (int32_t)ebx)); }
    edx = 0; /* xor self */
    if (CMP_LE(MEM32(ecx + 0x60), edx)) goto loc_00512FF3; /* jle: less or equal (signed <=) */

loc_00512F96: ;
    edi = eax;
    edi = edi << 2;
    eax = esi;

loc_00512F9D: ;
    ebx = MEM32(eax);
    MEM32(esi + edx * 4) = ebx;
    edx++;
    eax = eax + edi;
    if (CMP_L(edx, MEM32(ecx + 0x60))) goto loc_00512F9D; /* jl: less (signed <) */

loc_00512FAA: ;
    goto loc_00512FF3;

loc_00512FAC: ;
    if (CMP_GE(edx, MEM32(ecx + 0x60))) goto loc_00512FF3; /* jge: greater or equal (signed >=) */

loc_00512FAE: ;
    eax = ebx;
    edx = ((int32_t)eax < 0) ? 0xFFFFFFFF : 0; /* cdq */
    { int64_t _dividend = ((int64_t)(int32_t)edx << 32) | eax;
      eax = (uint32_t)((int32_t)(_dividend / (int32_t)edi));
      edx = (uint32_t)((int32_t)(_dividend % (int32_t)edi)); }
    edi = eax;
    eax = MEM32(ecx + 0x60);
    edx = ((int32_t)eax < 0) ? 0xFFFFFFFF : 0; /* cdq */
    { int64_t _dividend = ((int64_t)(int32_t)edx << 32) | eax;
      eax = (uint32_t)((int32_t)(_dividend / (int32_t)edi));
      edx = (uint32_t)((int32_t)(_dividend % (int32_t)edi)); }
    eax--;
    if (((int32_t)eax < 0)) goto loc_00512FF3; /* js: sign (negative) */

loc_00512FBE: ;
    ebx = eax;
    ebx = (uint32_t)((int32_t)ebx * (int32_t)edi);
    ecx = edi;
    ecx = (uint32_t)(-(int32_t)ecx);
    edx = esi + eax * 4;
    ecx = ecx << 2;
    eax++;
    esi = esi + ebx * 4;
    MEM32(ebp + 8) = eax;

loc_00512FD4: ;
    if (CMP_LE(edi & edi, 0)) goto loc_00512FE9; /* jle: less or equal (signed <=) */

loc_00512FD8: ;
    eax = esi;
    MEM32(ebp + 0xC) = edi;

loc_00512FDD: ;
    ebx = MEM32(edx);
    MEM32(eax) = ebx;
    eax = eax + 4;
    MEM32(ebp + 0xC) = MEM32(ebp + 0xC) - 1;
    if ((MEM32(ebp + 0xC) != 0)) goto loc_00512FDD; /* jne: not equal / not zero */

loc_00512FE9: ;
    edx = edx - 4;
    esi = esi + ecx;
    MEM32(ebp + 8) = MEM32(ebp + 8) - 1;
    if ((MEM32(ebp + 8) != 0)) goto loc_00512FD4; /* jne: not equal / not zero */

loc_00512FF3: ;
    POP32(esp, edi);
    POP32(esp, esi);
    POP32(esp, ebx);
    POP32(esp, ebp);
    esp += 12; return; /* ret 8 */

}

/**
 * sub_00512FFA
 * Original: 0x00512FFA - 0x005130E8 (238 bytes, 91 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00512FFA(void)
{
    uint32_t ebp;
    int _flags = 0; /* fallback flag var */

loc_00512FFA: ;
    PUSH32(esp, ebp);
    ebp = esp;
    esp = esp - 0x4C;
    eax = MEM32(ebp + 0xC);
    edx = MEM32(eax);
    MEM32(ebp + -44) = edx;
    edx = MEM32(eax + 8);
    MEM32(ebp + -56) = edx;
    edx = MEM32(eax + 0x10);
    MEM32(ebp + -52) = edx;
    edx = MEM32(eax + 0xC);
    MEM32(ebp + -20) = edx;
    edx = MEM32(eax + 4);
    PUSH32(esp, ebx);
    ebx = MEM32(ebp + 8);
    MEM32(ebp + -36) = edx;
    edx = MEM32(eax + 0x34);
    eax = MEM32(eax + 0x30);
    PUSH32(esp, esi);
    esi = MEM32(ebx + 0x7C);
    MEM32(ebp + -24) = eax;
    eax = esi;
    eax = eax << 6;
    MEM32(ebp + -40) = edx;
    PUSH32(esp, edi);
    edi = MEM32(ebx + 0x70);
    edx = ((int32_t)eax < 0) ? 0xFFFFFFFF : 0; /* cdq */
    { int64_t _dividend = ((int64_t)(int32_t)edx << 32) | eax;
      eax = (uint32_t)((int32_t)(_dividend / (int32_t)MEM32(ebx + edi * 4 + 0x178)));
      edx = (uint32_t)((int32_t)(_dividend % (int32_t)MEM32(ebx + edi * 4 + 0x178))); }
    ecx = 0; /* xor self */
    MEM32(ebp + -8) = ecx;
    MEM32(ebp + -4) = ecx;
    MEM32(ebp + -16) = ecx;
    MEM32(ebp + -32) = ecx;
    MEM32(ebp + 8) = ecx;
    (void)0; /* cmp eax, 1 - flags set for next jcc */
    MEM32(ebp + -76) = eax;
    if (CMP_BE(eax, 1)) goto loc_0051306B; /* jbe: below or equal (unsigned <=) */

loc_0051305E: ;
    ecx++;
    edx = eax;
    edx = edx >> LO8(ecx);
    if (CMP_A(edx, 1)) goto loc_0051305E; /* ja: above (unsigned >) */

loc_00513068: ;
    MEM32(ebp + 8) = ecx;

loc_0051306B: ;
    eax = MEM32(ebx + 0x31C);
    edx = ((int32_t)eax < 0) ? 0xFFFFFFFF : 0; /* cdq */
    { int64_t _dividend = ((int64_t)(int32_t)edx << 32) | eax;
      eax = (uint32_t)((int32_t)(_dividend / (int32_t)esi));
      edx = (uint32_t)((int32_t)(_dividend % (int32_t)esi)); }
    MEM32(ebp + -72) = ecx;
    ecx = 0; /* xor self */
    if (CMP_BE(eax, 1)) goto loc_00513088; /* jbe: below or equal (unsigned <=) */

loc_0051307E: ;
    ecx++;
    edx = eax;
    edx = edx >> LO8(ecx);
    if (CMP_A(edx, 1)) goto loc_0051307E; /* ja: above (unsigned >) */

loc_00513088: ;
    edx = MEM32(ebx + 0x3B0);
    ecx = (uint32_t)((int32_t)ecx * (int32_t)0x68);
    ecx = ecx + edx;
    MEM32(ebp + -12) = ecx;
    ecx = 0; /* xor self */
    if (CMP_BE(eax, 1)) goto loc_005130A7; /* jbe: below or equal (unsigned <=) */

loc_0051309D: ;
    ecx++;
    esi = eax;
    esi = esi >> LO8(ecx);
    if (CMP_A(esi, 1)) goto loc_0051309D; /* ja: above (unsigned >) */

loc_005130A7: ;
    eax = MEM32(ebx + 0x3AC);
    eax = MEM32(eax + ecx * 4);
    MEM32(ebp + -68) = eax;
    eax = MEM32(ebx + 0x94);
    eax = (uint32_t)((int32_t)eax * (int32_t)0x68);
    esp = esp - 0xC;
    edi = esp;
    PUSH32(esp, MEM32(ebp + -12));
    esi = ebp + -76;
    MEM32(edi) = MEM32(esi); esi += 4; edi += 4; /* movsd */
    eax = eax + edx;
    PUSH32(esp, eax);
    PUSH32(esp, MEM32(ebp + 0xC));
    MEM32(edi) = MEM32(esi); esi += 4; edi += 4; /* movsd */
    PUSH32(esp, ebx);
    MEM32(ebp + -28) = eax;
    MEM32(edi) = MEM32(esi); esi += 4; edi += 4; /* movsd */
    PUSH32(esp, 0); sub_0051288A(); /* call 0x0051288A */

loc_005130D9: ;
    ecx = MEM32(ebp + 8);
    eax = 0; /* xor self */
    eax = eax << LO8(ecx);
    ecx = MEM32(ebp + -12);
    eax = (uint32_t)((int32_t)eax >> 6);
    g_seh_ebp = ebp; sub_005130EB(); return; /* tail jmp 0x005130EB */

}

/**
 * sub_005135D0
 * Original: 0x005135D0 - 0x005138B0 (736 bytes, 278 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_005135D0(void)
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

loc_005135D0: ;
    PUSH32(esp, ebp);
    ebp = esp;
    esp = esp - 0x1C;
    ecx = MEM32(ebp + 0xC);
    PUSH32(esp, ebx);
    PUSH32(esp, esi);
    PUSH32(esp, edi);
    edi = 0; /* xor self */
    edi++;
    edi = edi << LO8(ecx);
    ebx = MEM32(ebp + 8);
    MEM32(ebp + 0xC) = edi;
    fp_push((double)SMEM32(ebp + 0xC)); /* fild */
    edx = edi + edi;
    (void)0; /* cmp edx, 4 - flags set for next jcc */
    MEM32(ebp + -4) = edx;
    /* FPU: fdivr qword ptr [0x648d08] */
    fp_push(MEMD(0x522990)); /* fld double */
    fp_st1() *= fp_top(); fp_pop(); /* fmul */
    /* FPU: fcos  */
    MEMF(ebp + -24) = (float)fp_top(); fp_popp(); /* fstp */
    fp_st1() *= fp_top(); fp_pop(); /* fmul */
    /* FPU: fsin  */
    fp_st1() += fp_top(); fp_pop(); /* fadd */
    MEMF(ebp + 0xC) = (float)fp_top(); fp_pop(); /* fst */
    fp_st1() *= fp_top(); fp_pop(); /* fmul */
    MEMF(ebp + -20) = (float)fp_top(); fp_popp(); /* fstp */
    if (CMP_LE(edx, 4)) goto loc_005137CB; /* jle: less or equal (signed <=) */

loc_00513622: ;
    ecx = MEM32(ebp + -4);
    fp_push(1.0); /* fld1 */
    fp_push(0.0); /* fldz */
    ecx = (uint32_t)((int32_t)ecx >> 1);
    fp_push(MEMF(ebp + -20)); /* fld float */
    esi = 0; /* xor self */
    (void)0; /* test edx, edx - flags set for next jcc */
    fp_st1() *= fp_top(); fp_pop(); /* fmul */
    MEM32(ebp + -28) = ecx;
    /* FPU: fsubr dword ptr [0x648d14] */
    fp_push(MEMF(ebp + 0xC)); /* fld float */
    fp_st1() *= fp_top(); fp_pop(); /* fmul */
    MEMF(ebp + -20) = (float)fp_top(); fp_pop(); /* fst */
    /* fld st(1) */
    MEMF(ebp + -24) = (float)fp_top(); fp_popp(); /* fstp */
    /* fld st(0) */
    fp_st1() += fp_top(); fp_pop(); /* fadd */
    MEMF(ebp + 0xC) = (float)fp_top(); fp_popp(); /* fstp */
    if (CMP_LE(edx & edx, 0)) goto loc_005136CC; /* jle: less or equal (signed <=) */

loc_00513655: ;
    eax = ebx + 8;
    ecx = ebx + ecx * 4 + 0xC;

loc_0051365C: ;
    fp_push(MEMF(eax + -8)); /* fld float */
    edx = MEM32(ebp + -4);
    fp_st1() -= fp_top(); fp_pop(); /* fsub */
    esi = esi + edx;
    fp_push(MEMF(eax + -8)); /* fld float */
    edx = edx << 2;
    fp_st1() += fp_top(); fp_pop(); /* fadd */
    MEMF(eax + -8) = (float)fp_top(); fp_popp(); /* fstp */
    MEMF(ecx + -12) = (float)fp_top(); fp_popp(); /* fstp */
    fp_push(MEMF(eax + -4)); /* fld float */
    fp_st1() -= fp_top(); fp_pop(); /* fsub */
    fp_push(MEMF(eax + -4)); /* fld float */
    fp_st1() += fp_top(); fp_pop(); /* fadd */
    MEMF(eax + -4) = (float)fp_top(); fp_popp(); /* fstp */
    MEMF(ecx + -8) = (float)fp_top(); fp_popp(); /* fstp */
    fp_push(MEMF(eax)); /* fld float */
    fp_st1() -= fp_top(); fp_pop(); /* fsub */
    fp_push(MEMF(eax)); /* fld float */
    fp_st1() += fp_top(); fp_pop(); /* fadd */
    MEMF(eax) = (float)fp_top(); fp_popp(); /* fstp */
    fp_push(MEMF(eax + 4)); /* fld float */
    fp_st1() -= fp_top(); fp_pop(); /* fsub */
    fp_push(MEMF(ecx)); /* fld float */
    fp_st1() += fp_top(); fp_pop(); /* fadd */
    MEMF(eax + 4) = (float)fp_top(); fp_popp(); /* fstp */
    eax = eax + edx;
    /* fld st(1) */
    fp_st1() *= fp_top(); fp_pop(); /* fmul */
    /* fld st(1) */
    fp_st1() *= fp_top(); fp_pop(); /* fmul */
    fp_st1() -= fp_top(); fp_pop(); /* fsubp */
    MEMF(ecx + -4) = (float)fp_top(); fp_popp(); /* fstp */
    /* fld st(1) */
    fp_st1() *= fp_top(); fp_pop(); /* fmul */
    /* fld st(1) */
    fp_st1() *= fp_top(); fp_pop(); /* fmul */
    fp_st1() += fp_top(); fp_pop(); /* faddp */
    MEMF(ecx) = (float)fp_top(); fp_popp(); /* fstp */
    ecx = ecx + edx;
    edx = edi + edi;
    (void)0; /* cmp esi, edx - flags set for next jcc */
    /* fstp st(0) */
    /* fstp st(0) */
    if (CMP_L(esi, edx)) goto loc_0051365C; /* jl: less (signed <) */

loc_005136C9: ;
    ecx = MEM32(ebp + -28);

loc_005136CC: ;
    (void)0; /* cmp ecx, 4 - flags set for next jcc */
    MEM32(ebp + -8) = 4;
    if (CMP_LE(ecx, 4)) goto loc_005137B7; /* jle: less or equal (signed <=) */

loc_005136DC: ;
    eax = ebx + 0x18;
    MEM32(ebp + -12) = eax;
    eax = ebx + ecx * 4 + 0x1C;
    MEM32(ebp + -16) = eax;

loc_005136E9: ;
    fp_push(MEMF(ebp + 0xC)); /* fld float */
    esi = MEM32(ebp + -8);
    (void)0; /* cmp esi, edx - flags set for next jcc */
    fp_st1() *= fp_top(); fp_pop(); /* fmul */
    fp_st1() -= fp_top(); fp_pop(); /* fsubp */
    /* fld st(1) */
    fp_st1() *= fp_top(); fp_pop(); /* fmul */
    fp_st1() += fp_top(); fp_pop(); /* faddp */
    /* fld st(2) */
    fp_st1() *= fp_top(); fp_pop(); /* fmul */
    fp_st1() -= fp_top(); fp_pop(); /* fsubp */
    /* fld st(3) */
    fp_st1() *= fp_top(); fp_pop(); /* fmul */
    fp_st1() += fp_top(); fp_pop(); /* faddp */
    if (CMP_G(esi, edx)) goto loc_005137A2; /* jg: greater (signed >) */

loc_00513710: ;
    eax = MEM32(ebp + -12);
    ecx = MEM32(ebp + -16);

loc_00513716: ;
    fp_push(MEMF(eax + -8)); /* fld float */
    edx = MEM32(ebp + -4);
    fp_st1() -= fp_top(); fp_pop(); /* fsub */
    esi = esi + edx;
    fp_push(MEMF(ecx + -12)); /* fld float */
    edx = edx << 2;
    fp_st1() += fp_top(); fp_pop(); /* fadd */
    MEMF(eax + -8) = (float)fp_top(); fp_popp(); /* fstp */
    fp_push(MEMF(eax + -4)); /* fld float */
    fp_st1() -= fp_top(); fp_pop(); /* fsub */
    fp_push(MEMF(ecx + -8)); /* fld float */
    fp_st1() += fp_top(); fp_pop(); /* fadd */
    MEMF(eax + -4) = (float)fp_top(); fp_popp(); /* fstp */
    /* fld st(1) */
    fp_st1() *= fp_top(); fp_pop(); /* fmul */
    /* fld st(1) */
    fp_st1() *= fp_top(); fp_pop(); /* fmul */
    fp_st1() -= fp_top(); fp_pop(); /* fsubp */
    MEMF(ecx + -12) = (float)fp_top(); fp_popp(); /* fstp */
    /* fld st(1) */
    fp_st1() *= fp_top(); fp_pop(); /* fmul */
    /* fld st(1) */
    fp_st1() *= fp_top(); fp_pop(); /* fmul */
    fp_st1() += fp_top(); fp_pop(); /* faddp */
    MEMF(ecx + -8) = (float)fp_top(); fp_popp(); /* fstp */
    /* fstp st(0) */
    /* fstp st(0) */
    fp_push(MEMF(eax)); /* fld float */
    fp_st1() -= fp_top(); fp_pop(); /* fsub */
    fp_push(MEMF(ecx + -4)); /* fld float */
    fp_st1() += fp_top(); fp_pop(); /* fadd */
    MEMF(eax) = (float)fp_top(); fp_popp(); /* fstp */
    fp_push(MEMF(eax + 4)); /* fld float */
    fp_st1() -= fp_top(); fp_pop(); /* fsub */
    fp_push(MEMF(ecx)); /* fld float */
    fp_st1() += fp_top(); fp_pop(); /* fadd */
    MEMF(eax + 4) = (float)fp_top(); fp_popp(); /* fstp */
    eax = eax + edx;
    /* fld st(1) */
    fp_st1() *= fp_top(); fp_pop(); /* fmul */
    /* fld st(1) */
    fp_st1() *= fp_top(); fp_pop(); /* fmul */
    fp_st1() -= fp_top(); fp_pop(); /* fsubp */
    MEMF(ecx + -4) = (float)fp_top(); fp_popp(); /* fstp */
    /* fld st(1) */
    fp_st1() *= fp_top(); fp_pop(); /* fmul */
    /* fld st(1) */
    fp_st1() *= fp_top(); fp_pop(); /* fmul */
    fp_st1() += fp_top(); fp_pop(); /* faddp */
    MEMF(ecx) = (float)fp_top(); fp_popp(); /* fstp */
    ecx = ecx + edx;
    edx = edi + edi;
    (void)0; /* cmp esi, edx - flags set for next jcc */
    /* fstp st(0) */
    /* fstp st(0) */
    if (CMP_LE(esi, edx)) goto loc_00513716; /* jle: less or equal (signed <=) */

loc_0051379F: ;
    ecx = MEM32(ebp + -28);

loc_005137A2: ;
    MEM32(ebp + -8) = MEM32(ebp + -8) + 4;
    MEM32(ebp + -12) = MEM32(ebp + -12) + 0x10;
    MEM32(ebp + -16) = MEM32(ebp + -16) + 0x10;
    if (CMP_L(MEM32(ebp + -8), ecx)) goto loc_005136E9; /* jl: less (signed <) */

loc_005137B7: ;
    (void)0; /* cmp ecx, 4 - flags set for next jcc */
    /* fstp st(0) */
    /* fstp st(0) */
    MEM32(ebp + -4) = ecx;
    /* fstp st(0) */
    /* fstp st(0) */
    if (CMP_G(ecx, 4)) goto loc_00513622; /* jg: greater (signed >) */

loc_005137CB: ;
    if (CMP_LE(MEM32(ebp + -4), 2)) goto loc_00513806; /* jle: less or equal (signed <=) */

loc_005137D1: ;
    if (CMP_LE(edx & edx, 0)) goto loc_00513806; /* jle: less or equal (signed <=) */

loc_005137D5: ;
    ecx = edx + -1;
    ecx = ecx >> 2;
    eax = ebx + 8;
    ecx++;

loc_005137DF: ;
    fp_push(MEMF(eax + -8)); /* fld float */
    fp_st1() -= fp_top(); fp_pop(); /* fsub */
    fp_push(MEMF(eax)); /* fld float */
    fp_st1() += fp_top(); fp_pop(); /* fadd */
    MEMF(eax + -8) = (float)fp_top(); fp_popp(); /* fstp */
    MEMF(eax) = (float)fp_top(); fp_popp(); /* fstp */
    eax = eax + 0x10;
    ecx--;
    fp_push(MEMF(eax + -20)); /* fld float */
    fp_st1() -= fp_top(); fp_pop(); /* fsub */
    fp_push(MEMF(eax + -12)); /* fld float */
    fp_st1() += fp_top(); fp_pop(); /* fadd */
    MEMF(eax + -20) = (float)fp_top(); fp_popp(); /* fstp */
    MEMF(eax + -12) = (float)fp_top(); fp_popp(); /* fstp */
    if ((ecx != 0)) goto loc_005137DF; /* jne: not equal / not zero */

loc_00513806: ;
    eax = edi + edi;
    if (CMP_LE(eax, 4)) goto loc_005138A9; /* jle: less or equal (signed <=) */

loc_00513812: ;
    eax = edi;
    edx = ((int32_t)eax < 0) ? 0xFFFFFFFF : 0; /* cdq */
    eax = eax - edx;
    esi = 0; /* xor self */
    MEM32(ebp + 0xC) = MEM32(ebp + 0xC) & esi;
    eax = (uint32_t)((int32_t)eax >> 1);
    (void)0; /* test edi, edi - flags set for next jcc */
    MEM32(ebp + -28) = eax;
    if (CMP_LE(edi & edi, 0)) goto loc_005138A9; /* jle: less or equal (signed <=) */

loc_00513829: ;
    ecx = ebx + 4;

loc_0051382C: ;
    if (CMP_GE(MEM32(ebp + 0xC), esi)) goto loc_0051386E; /* jge: greater or equal (signed >=) */

loc_00513831: ;
    fp_push(MEMF(ecx + -4)); /* fld float */
    eax = ebx + esi * 4;
    edx = MEM32(eax);
    MEM32(ecx + -4) = edx;
    MEMF(eax) = (float)fp_top(); fp_popp(); /* fstp */
    fp_push(MEMF(ecx)); /* fld float */
    eax = eax + 4;
    edx = MEM32(eax);
    MEM32(ecx) = edx;
    MEMF(eax) = (float)fp_top(); fp_popp(); /* fstp */
    ebx = edi * 4 + 4;
    edx = ebx + ecx;
    fp_push(MEMF(edx)); /* fld float */
    eax = eax + ebx;
    ebx = MEM32(eax);
    MEM32(edx) = ebx;
    MEMF(eax) = (float)fp_top(); fp_popp(); /* fstp */
    edx = edx + 4;
    fp_push(MEMF(edx)); /* fld float */
    eax = eax + 4;
    ebx = MEM32(eax);
    MEM32(edx) = ebx;
    MEMF(eax) = (float)fp_top(); fp_popp(); /* fstp */
    ebx = MEM32(ebp + 8);

loc_0051386E: ;
    fp_push(MEMF(ecx + 4)); /* fld float */
    eax = esi + edi;
    eax = ebx + eax * 4;
    edx = MEM32(eax);
    MEM32(ecx + 4) = edx;
    MEMF(eax) = (float)fp_top(); fp_popp(); /* fstp */
    fp_push(MEMF(ecx + 8)); /* fld float */
    eax = eax + 4;
    edx = MEM32(eax);
    MEM32(ecx + 8) = edx;
    MEMF(eax) = (float)fp_top(); fp_popp(); /* fstp */
    eax = MEM32(ebp + -28);
    goto loc_00513897;

loc_00513890: ;
    esi = esi - eax;
    edx = ((int32_t)eax < 0) ? 0xFFFFFFFF : 0; /* cdq */
    eax = eax - edx;
    eax = (uint32_t)((int32_t)eax >> 1);

loc_00513897: ;
    if (CMP_LE(eax, esi)) goto loc_00513890; /* jle: less or equal (signed <=) */

loc_0051389B: ;
    MEM32(ebp + 0xC) = MEM32(ebp + 0xC) + 4;
    esi = esi + eax;
    ecx = ecx + 0x10;
    if (CMP_L(MEM32(ebp + 0xC), edi)) goto loc_0051382C; /* jl: less (signed <) */

loc_005138A9: ;
    POP32(esp, edi);
    POP32(esp, esi);
    POP32(esp, ebx);
    esp = ebp;
    POP32(esp, ebp); /* leave */
    esp += 12; return; /* ret 8 */

    #undef fp_push
    #undef fp_pop
    #undef fp_popp
    #undef fp_top
    #undef fp_st1
}

/**
 * sub_005138B0
 * Original: 0x005138B0 - 0x005138D0 (32 bytes, 13 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_005138B0(void)
{
    uint32_t ebp;
    int _flags = 0; /* fallback flag var */

loc_005138B0: ;
    PUSH32(esp, ebp);
    ebp = esp;
    PUSH32(esp, ebx);
    PUSH32(esp, esi);
    PUSH32(esp, edi);
    esi = MEM32(ebp + 8);
    ecx = MEM32(ebp + 0xC);
    if (TEST_Z(esi, 0xF)) { sub_005138D0(); return; } /* je: equal / zero */

loc_005138C4: ;
    PUSH32(esp, ecx);
    PUSH32(esp, esi);
    PUSH32(esp, 0); sub_005135D0(); /* call 0x005135D0 */

loc_005138CB: ;
    g_seh_ebp = ebp; sub_00513AA5(); return; /* tail jmp 0x00513AA5 */

}

/**
 * sub_00513AAC
 * Original: 0x00513AAC - 0x00513B43 (151 bytes, 56 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00513AAC(void)
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

loc_00513AAC: ;
    PUSH32(esp, ebp);
    ebp = esp;
    esp = esp - 0x30;
    eax = MEM32(ebp + 8);
    MEM32(ebp + -16) = MEM32(ebp + -16) & 0;
    PUSH32(esp, ebx);
    PUSH32(esp, esi);
    PUSH32(esp, edi);
    edi = MEM32(eax + 0x60);
    eax = edi;
    edx = ((int32_t)eax < 0) ? 0xFFFFFFFF : 0; /* cdq */
    eax = eax - edx;
    eax = (uint32_t)((int32_t)eax >> 1);
    (void)0; /* cmp edi, 1 - flags set for next jcc */
    MEM32(ebp + -36) = edi;
    if (CMP_BE(edi, 1)) goto loc_00513ADD; /* jbe: below or equal (unsigned <=) */

loc_00513ACE: ;
    MEM32(ebp + -16) = MEM32(ebp + -16) + 1;
    ecx = MEM32(ebp + -16);
    edx = edi;
    edx = edx >> LO8(ecx);
    if (CMP_A(edx, 1)) goto loc_00513ACE; /* ja: above (unsigned >) */

loc_00513ADD: ;
    (void)0; /* cmp edi, 0x40 - flags set for next jcc */
    fp_push(MEMF(ebp + 0x10)); /* fld float */
    ebx = MEM32(ebp + 0xC);
    MEMD(ebp + -32) = fp_top(); fp_pop(); /* fst */
    ecx = ebx + edi * 4 + -4;
    esi = ebx;
    MEM32(ebp + -44) = ecx;
    MEM32(ebp + -20) = ecx;
    if (CMP_L(edi, 0x40)) { sub_00513B43(); return; } /* jl: less (signed <) */

loc_00513AF7: ;
    if (CMP_G(edi, 0x800)) { sub_00513B43(); return; } /* jg: greater (signed >) */

loc_00513AFF: ;
    MEMF(ebp + 0x10) = (float)fp_top(); fp_pop(); /* fst */
    ecx = edi;
    ecx = (uint32_t)((int32_t)ecx >> 7);
    edx = MEM32(ecx * 4 + 0x51D8E0);
    fp_st1() *= fp_top(); fp_pop(); /* fmul */
    ecx = MEM32(edx + 0x14);
    fp_push(MEMF(ebp + 0x10)); /* fld float */
    MEM32(ebp + -24) = ecx;
    fp_st1() *= fp_top(); fp_pop(); /* fmul */
    ecx = MEM32(edx + 0x10);
    MEM32(ebp + -28) = ecx;
    ecx = MEM32(ebp + -44);
    fp_top() = -fp_top(); /* fchs */
    MEMF(ebp + 0xC) = (float)fp_top(); fp_popp(); /* fstp */
    fp_push(MEMF(ebp + 0x10)); /* fld float */
    fp_st1() *= fp_top(); fp_pop(); /* fmul */
    MEMF(ebp + -12) = (float)fp_top(); fp_popp(); /* fstp */
    fp_push(MEMF(ebp + 0x10)); /* fld float */
    fp_st1() *= fp_top(); fp_pop(); /* fmul */
    fp_push(MEMF(edx + 0x28)); /* fld float */
    fp_top() = -fp_top(); /* fchs */
    MEMF(ebp + 0x10) = (float)fp_top(); fp_popp(); /* fstp */
    g_seh_ebp = ebp; sub_00513BA7(); return; /* tail jmp 0x00513BA7 */

    #undef fp_push
    #undef fp_pop
    #undef fp_popp
    #undef fp_top
    #undef fp_st1
}

/**
 * sub_00513D35
 * Original: 0x00513D35 - 0x00513D8D (88 bytes, 37 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00513D35(void)
{
    int _flags = 0; /* fallback flag var */
    double _fp_stack[8];
    int _fp_top = 0;
    #define fp_push(v) (_fp_stack[--_fp_top & 7] = (v))
    #define fp_pop() (_fp_top++)
    #define fp_popp() (fp_pop())
    #define fp_top() _fp_stack[_fp_top & 7]
    #define fp_st1() _fp_stack[(_fp_top + 1) & 7]

loc_00513D35: ;
    PUSH32(esp, esi);
    esi = MEM32(esp + 0x18);
    eax = esi;
    edx = ((int32_t)eax < 0) ? 0xFFFFFFFF : 0; /* cdq */
    eax = eax - edx;
    eax = (uint32_t)((int32_t)eax >> 1);
    if (CMP_L(eax, 1)) goto loc_00513D89; /* jl: less (signed <) */

loc_00513D46: ;
    edx = MEM32(esp + 0xC);
    fp_push(MEMF(0x648D10)); /* fld float */
    PUSH32(esp, ebx);
    ebx = MEM32(esp + 0x14);
    PUSH32(esp, edi);
    edi = MEM32(esp + 0x1C);
    ecx = ebx + 4;
    esi = edi + esi * 4 + -4;
    edx = edx - ebx;

loc_00513D63: ;
    fp_push(MEMF(ecx)); /* fld float */
    fp_st1() += fp_top(); fp_pop(); /* fadd */
    fp_st1() *= fp_top(); fp_pop(); /* fmul */
    fp_top() = -fp_top(); /* fchs */
    MEMF(edi) = (float)fp_top(); fp_popp(); /* fstp */
    edi = edi + 4;
    fp_push(MEMF(edx + ecx)); /* fld float */
    fp_st1() -= fp_top(); fp_pop(); /* fsub */
    ecx = ecx + 4;
    fp_st1() *= fp_top(); fp_pop(); /* fmul */
    fp_top() = -fp_top(); /* fchs */
    MEMF(esi) = (float)fp_top(); fp_popp(); /* fstp */
    esi = esi - 4;
    eax--;
    if ((eax != 0)) goto loc_00513D63; /* jne: not equal / not zero */

loc_00513D85: ;
    POP32(esp, edi);
    /* fstp st(0) */
    POP32(esp, ebx);

loc_00513D89: ;
    POP32(esp, esi);
    esp += 24; return; /* ret 20 */

    #undef fp_push
    #undef fp_pop
    #undef fp_popp
    #undef fp_top
    #undef fp_st1
}

/**
 * sub_00513D8D
 * Original: 0x00513D8D - 0x00513EA0 (275 bytes, 113 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00513D8D(void)
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

loc_00513D8D: ;
    PUSH32(esp, ebp);
    ebp = esp;
    esp = esp - 0x190;
    PUSH32(esp, ebx);
    PUSH32(esp, esi);
    esi = MEM32(ebp + 0x10);
    PUSH32(esp, edi);
    edi = 0; /* xor self */
    if (CMP_LE(esi & esi, 0)) goto loc_00513DE4; /* jle: less or equal (signed <=) */

loc_00513DA2: ;
    ecx = MEM32(ebp + 0x14);
    eax = ebp + -400;
    edx = eax;
    ecx = ecx - edx;
    MEM32(ebp + 0x10) = ecx;

loc_00513DB2: ;
    if (CMP_GE(edi, MEM32(ebp + 0x18))) goto loc_00513DE4; /* jge: greater or equal (signed >=) */

loc_00513DB7: ;
    fp_push(0.0); /* fldz */
    edx = 0; /* xor self */
    (void)0; /* test edi, edi - flags set for next jcc */
    MEMF(eax) = (float)fp_top(); fp_popp(); /* fstp */
    if (TEST_S(edi, edi)) goto loc_00513DDC; /* jl: less (signed <) */

loc_00513DC1: ;
    fp_push(0.0); /* fldz */
    ecx = ecx + eax;

loc_00513DC5: ;
    ebx = MEM32(ebp + 0xC);
    fp_push(MEMF(ebx + edx * 4)); /* fld float */
    edx++;
    fp_st1() *= fp_top(); fp_pop(); /* fmul */
    ecx = ecx - 4;
    (void)0; /* cmp edx, edi - flags set for next jcc */
    fp_st1() += fp_top(); fp_pop(); /* faddp */
    if (CMP_LE(edx, edi)) goto loc_00513DC5; /* jle: less or equal (signed <=) */

loc_00513DD7: ;
    ecx = MEM32(ebp + 0x10);
    MEMF(eax) = (float)fp_top(); fp_popp(); /* fstp */

loc_00513DDC: ;
    edi++;
    eax = eax + 4;
    if (CMP_L(edi, esi)) goto loc_00513DB2; /* jl: less (signed <) */

loc_00513DE4: ;
    eax = MEM32(ebp + 0x18);
    ebx = esi + eax;
    eax = ebx;
    edx = ((int32_t)eax < 0) ? 0xFFFFFFFF : 0; /* cdq */
    eax = eax - edx;
    eax = (uint32_t)((int32_t)eax >> 1);
    if (CMP_GE(esi, eax)) goto loc_00513E3C; /* jge: greater or equal (signed >=) */

loc_00513DF5: ;
    edx = MEM32(ebp + 0x14);
    edi = ebp + -400;
    edx = edx - edi;
    eax = eax - esi;
    ecx = ebp + esi * 4 + -400;
    MEM32(ebp + 0x10) = edx;
    MEM32(ebp + 0x18) = eax;

loc_00513E0F: ;
    fp_push(0.0); /* fldz */
    edi = 0; /* xor self */
    (void)0; /* test esi, esi - flags set for next jcc */
    MEMF(ecx) = (float)fp_top(); fp_popp(); /* fstp */
    if (CMP_LE(esi & esi, 0)) goto loc_00513E34; /* jle: less or equal (signed <=) */

loc_00513E19: ;
    fp_push(0.0); /* fldz */
    edx = edx + ecx;

loc_00513E1D: ;
    eax = MEM32(ebp + 0xC);
    fp_push(MEMF(eax + edi * 4)); /* fld float */
    edi++;
    fp_st1() *= fp_top(); fp_pop(); /* fmul */
    edx = edx - 4;
    (void)0; /* cmp edi, esi - flags set for next jcc */
    fp_st1() += fp_top(); fp_pop(); /* faddp */
    if (CMP_L(edi, esi)) goto loc_00513E1D; /* jl: less (signed <) */

loc_00513E2F: ;
    edx = MEM32(ebp + 0x10);
    MEMF(ecx) = (float)fp_top(); fp_popp(); /* fstp */

loc_00513E34: ;
    ecx = ecx + 4;
    MEM32(ebp + 0x18) = MEM32(ebp + 0x18) - 1;
    if ((MEM32(ebp + 0x18) != 0)) goto loc_00513E0F; /* jne: not equal / not zero */

loc_00513E3C: ;
    ecx = MEM32(ebp + 0x20);
    edi = MEM32(ebp + 0x1C);
    eax = ebx + -1;
    MEM32(ecx) = eax;
    edx = ((int32_t)eax < 0) ? 0xFFFFFFFF : 0; /* cdq */
    eax = eax - edx;
    eax = (uint32_t)((int32_t)eax >> 1);
    esi = 0; /* xor self */
    if (CMP_LE(eax & eax, 0)) goto loc_00513E85; /* jle: less or equal (signed <=) */

loc_00513E52: ;
    ebx = edi;
    eax = ebp + -400;
    ebx = ebx - eax;

loc_00513E5C: ;
    eax = ebp + esi * 4 + -400;
    fp_push(MEMF(eax)); /* fld float */
    edx = ebx + esi * 4;
    MEMF(ebp + edx + -400) = (float)fp_top(); fp_popp(); /* fstp */
    edx = MEM32(ecx);
    fp_push(MEMF(eax)); /* fld float */
    edx = edx - esi;
    MEMF(edi + edx * 4 + -4) = (float)fp_top(); fp_popp(); /* fstp */
    eax = MEM32(ecx);
    edx = ((int32_t)eax < 0) ? 0xFFFFFFFF : 0; /* cdq */
    eax = eax - edx;
    esi++;
    eax = (uint32_t)((int32_t)eax >> 1);
    if (CMP_L(esi, eax)) goto loc_00513E5C; /* jl: less (signed <) */

loc_00513E85: ;
    eax = MEM32(ecx);
    edx = ((int32_t)eax < 0) ? 0xFFFFFFFF : 0; /* cdq */
    eax = eax - edx;
    eax = (uint32_t)((int32_t)eax >> 1);
    eax = eax << 2;
    fp_push(MEMF(ebp + eax + -400)); /* fld float */
    MEMF(eax + edi) = (float)fp_top(); fp_popp(); /* fstp */
    POP32(esp, edi);
    POP32(esp, esi);
    POP32(esp, ebx);
    esp = ebp;
    POP32(esp, ebp); /* leave */
    esp += 32; return; /* ret 28 */

    #undef fp_push
    #undef fp_pop
    #undef fp_popp
    #undef fp_top
    #undef fp_st1
}

/**
 * sub_00513EA0
 * Original: 0x00513EA0 - 0x00513F9F (255 bytes, 106 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00513EA0(void)
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

loc_00513EA0: ;
    PUSH32(esp, ebp);
    ebp = esp;
    esp = esp - 0x190;
    PUSH32(esp, ebx);
    PUSH32(esp, esi);
    esi = MEM32(ebp + 0x10);
    PUSH32(esp, edi);
    edi = 0; /* xor self */
    if (CMP_LE(esi & esi, 0)) goto loc_00513EF7; /* jle: less or equal (signed <=) */

loc_00513EB5: ;
    ecx = MEM32(ebp + 0x14);
    eax = ebp + -400;
    edx = eax;
    ecx = ecx - edx;
    MEM32(ebp + 0x10) = ecx;

loc_00513EC5: ;
    if (CMP_GE(edi, MEM32(ebp + 0x18))) goto loc_00513EF7; /* jge: greater or equal (signed >=) */

loc_00513ECA: ;
    fp_push(0.0); /* fldz */
    edx = 0; /* xor self */
    (void)0; /* test edi, edi - flags set for next jcc */
    MEMF(eax) = (float)fp_top(); fp_popp(); /* fstp */
    if (TEST_S(edi, edi)) goto loc_00513EEF; /* jl: less (signed <) */

loc_00513ED4: ;
    fp_push(0.0); /* fldz */
    ecx = ecx + eax;

loc_00513ED8: ;
    ebx = MEM32(ebp + 0xC);
    fp_push(MEMF(ebx + edx * 4)); /* fld float */
    edx++;
    fp_st1() *= fp_top(); fp_pop(); /* fmul */
    ecx = ecx - 4;
    (void)0; /* cmp edx, edi - flags set for next jcc */
    fp_st1() += fp_top(); fp_pop(); /* faddp */
    if (CMP_LE(edx, edi)) goto loc_00513ED8; /* jle: less or equal (signed <=) */

loc_00513EEA: ;
    ecx = MEM32(ebp + 0x10);
    MEMF(eax) = (float)fp_top(); fp_popp(); /* fstp */

loc_00513EEF: ;
    edi++;
    eax = eax + 4;
    if (CMP_L(edi, esi)) goto loc_00513EC5; /* jl: less (signed <) */

loc_00513EF7: ;
    eax = MEM32(ebp + 0x18);
    ebx = esi + eax;
    eax = ebx;
    edx = ((int32_t)eax < 0) ? 0xFFFFFFFF : 0; /* cdq */
    eax = eax - edx;
    eax = (uint32_t)((int32_t)eax >> 1);
    if (CMP_GE(esi, eax)) goto loc_00513F4F; /* jge: greater or equal (signed >=) */

loc_00513F08: ;
    edx = MEM32(ebp + 0x14);
    edi = ebp + -400;
    edx = edx - edi;
    eax = eax - esi;
    ecx = ebp + esi * 4 + -400;
    MEM32(ebp + 0x10) = edx;
    MEM32(ebp + 0x18) = eax;

loc_00513F22: ;
    fp_push(0.0); /* fldz */
    edi = 0; /* xor self */
    (void)0; /* test esi, esi - flags set for next jcc */
    MEMF(ecx) = (float)fp_top(); fp_popp(); /* fstp */
    if (CMP_LE(esi & esi, 0)) goto loc_00513F47; /* jle: less or equal (signed <=) */

loc_00513F2C: ;
    fp_push(0.0); /* fldz */
    edx = edx + ecx;

loc_00513F30: ;
    eax = MEM32(ebp + 0xC);
    fp_push(MEMF(eax + edi * 4)); /* fld float */
    edi++;
    fp_st1() *= fp_top(); fp_pop(); /* fmul */
    edx = edx - 4;
    (void)0; /* cmp edi, esi - flags set for next jcc */
    fp_st1() += fp_top(); fp_pop(); /* faddp */
    if (CMP_L(edi, esi)) goto loc_00513F30; /* jl: less (signed <) */

loc_00513F42: ;
    edx = MEM32(ebp + 0x10);
    MEMF(ecx) = (float)fp_top(); fp_popp(); /* fstp */

loc_00513F47: ;
    ecx = ecx + 4;
    MEM32(ebp + 0x18) = MEM32(ebp + 0x18) - 1;
    if ((MEM32(ebp + 0x18) != 0)) goto loc_00513F22; /* jne: not equal / not zero */

loc_00513F4F: ;
    ecx = MEM32(ebp + 0x20);
    eax = ebx + -1;
    MEM32(ecx) = eax;
    edx = ((int32_t)eax < 0) ? 0xFFFFFFFF : 0; /* cdq */
    eax = eax - edx;
    eax = (uint32_t)((int32_t)eax >> 1);
    esi = 0; /* xor self */
    if (CMP_LE(eax & eax, 0)) goto loc_00513F98; /* jle: less or equal (signed <=) */

loc_00513F62: ;
    ebx = MEM32(ebp + 0x1C);
    edi = ebx;
    eax = ebp + -400;
    edi = edi - eax;

loc_00513F6F: ;
    eax = ebp + esi * 4 + -400;
    fp_push(MEMF(eax)); /* fld float */
    edx = edi + esi * 4;
    MEMF(ebp + edx + -400) = (float)fp_top(); fp_popp(); /* fstp */
    edx = MEM32(ecx);
    fp_push(MEMF(eax)); /* fld float */
    edx = edx - esi;
    MEMF(ebx + edx * 4 + -4) = (float)fp_top(); fp_popp(); /* fstp */
    eax = MEM32(ecx);
    edx = ((int32_t)eax < 0) ? 0xFFFFFFFF : 0; /* cdq */
    eax = eax - edx;
    esi++;
    eax = (uint32_t)((int32_t)eax >> 1);
    if (CMP_L(esi, eax)) goto loc_00513F6F; /* jl: less (signed <) */

loc_00513F98: ;
    POP32(esp, edi);
    POP32(esp, esi);
    POP32(esp, ebx);
    esp = ebp;
    POP32(esp, ebp); /* leave */
    esp += 32; return; /* ret 28 */

    #undef fp_push
    #undef fp_pop
    #undef fp_popp
    #undef fp_top
    #undef fp_st1
}

/**
 * sub_00513F9F
 * Original: 0x00513F9F - 0x005140C5 (294 bytes, 102 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00513F9F(void)
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

loc_00513F9F: ;
    PUSH32(esp, ebp);
    ebp = esp;
    esp = esp - 0x1A4;
    fp_push(1.0); /* fld1 */
    PUSH32(esp, ebx);
    ebx = MEM32(ebp + 0xC);
    MEMF(ebp + -12) = (float)fp_top(); fp_popp(); /* fstp */
    fp_push(1.0); /* fld1 */
    PUSH32(esp, esi);
    MEMF(ebp + -20) = (float)fp_top(); fp_popp(); /* fstp */
    PUSH32(esp, edi);
    fp_push(1.0); /* fld1 */
    edi = 0; /* xor self */
    esi = 0; /* xor self */
    (void)0; /* cmp MEM32(ebp + 0x18), edi - flags set for next jcc */
    MEMF(ebp + -416) = (float)fp_top(); fp_popp(); /* fstp */
    fp_push(1.0); /* fld1 */
    MEM32(ebp + -4) = 2;
    MEMF(ebp + -420) = (float)fp_top(); fp_popp(); /* fstp */
    if (CMP_LE(MEM32(ebp + 0x18), edi)) goto loc_0051400F; /* jle: less or equal (signed <=) */

loc_00513FD8: ;
    eax = ZX8(MEM8(esi + ebx));
    eax = eax + edi;
    fp_push(MEMF(eax * 4 + 0x5229E8)); /* fld float */
    eax = ebp + -4;
    PUSH32(esp, eax);
    MEMF(ebp + -16) = (float)fp_top(); fp_popp(); /* fstp */
    eax = ebp + -420;
    PUSH32(esp, eax);
    PUSH32(esp, MEM32(ebp + -4));
    PUSH32(esp, eax);
    PUSH32(esp, 3);
    eax = ebp + -20;
    PUSH32(esp, eax);
    PUSH32(esp, MEM32(ebp + 8));
    PUSH32(esp, 0); sub_00513EA0(); /* call 0x00513EA0 */

loc_00514005: ;
    esi++;
    esi++;
    edi = edi + 0x20;
    if (CMP_L(esi, MEM32(ebp + 0x18))) goto loc_00513FD8; /* jl: less (signed <) */

loc_0051400F: ;
    eax = MEM32(ebp + 0x18);
    edx = ((int32_t)eax < 0) ? 0xFFFFFFFF : 0; /* cdq */
    eax = eax - edx;
    eax = (uint32_t)((int32_t)eax >> 1);
    (void)0; /* cmp eax, 1 - flags set for next jcc */
    MEM32(ebp + -8) = eax;
    if (CMP_L(eax, 1)) goto loc_0051402F; /* jl: less (signed <) */

loc_0051401F: ;
    edi = MEM32(ebp + 0x10);
    edi = edi + 4;
    ecx = eax;
    esi = ebp + -416;
    memcpy((void*)XBOX_PTR(edi), (void*)XBOX_PTR(esi), ecx * 4);
    esi += ecx * 4; edi += ecx * 4; ecx = 0; /* rep movsd */

loc_0051402F: ;
    eax = ZX8(MEM8(ebx + 1));
    fp_push(1.0); /* fld1 */
    MEMF(ebp + -420) = (float)fp_top(); fp_popp(); /* fstp */
    PUSH32(esp, 3);
    fp_push(MEMF(eax * 4 + 0x522A28)); /* fld float */
    POP32(esp, edi);
    (void)0; /* cmp MEM32(ebp + 0x18), edi - flags set for next jcc */
    MEMF(ebp + -416) = (float)fp_top(); fp_popp(); /* fstp */
    fp_push(1.0); /* fld1 */
    MEM32(ebp + -4) = edi;
    MEMF(ebp + -412) = (float)fp_top(); fp_popp(); /* fstp */
    esi = edi;
    if (CMP_LE(MEM32(ebp + 0x18), edi)) goto loc_0051409C; /* jle: less or equal (signed <=) */

loc_0051405D: ;
    MEM32(ebp + 0xC) = 0x30;

loc_00514064: ;
    eax = ZX8(MEM8(esi + ebx));
    eax = eax + MEM32(ebp + 0xC);
    fp_push(MEMF(eax * 4 + 0x5229E8)); /* fld float */
    eax = ebp + -4;
    PUSH32(esp, eax);
    MEMF(ebp + -16) = (float)fp_top(); fp_popp(); /* fstp */
    eax = ebp + -420;
    PUSH32(esp, eax);
    PUSH32(esp, MEM32(ebp + -4));
    PUSH32(esp, eax);
    PUSH32(esp, edi);
    eax = ebp + -20;
    PUSH32(esp, eax);
    PUSH32(esp, MEM32(ebp + 8));
    PUSH32(esp, 0); sub_00513D8D(); /* call 0x00513D8D */

loc_00514091: ;
    MEM32(ebp + 0xC) = MEM32(ebp + 0xC) + 0x20;
    esi++;
    esi++;
    if (CMP_L(esi, MEM32(ebp + 0x18))) goto loc_00514064; /* jl: less (signed <) */

loc_0051409C: ;
    eax = 0; /* xor self */
    POP32(esp, edi);
    eax++;
    (void)0; /* cmp MEM32(ebp + -8), eax - flags set for next jcc */
    POP32(esp, esi);
    POP32(esp, ebx);
    if (CMP_L(MEM32(ebp + -8), eax)) goto loc_005140C1; /* jl: less (signed <) */

loc_005140A7: ;
    fp_push(MEMF(ebp + eax * 4 + -420)); /* fld float */
    ecx = MEM32(ebp + 0x14);
    fp_st1() -= fp_top(); fp_pop(); /* fsub */
    MEMF(ecx + eax * 4) = (float)fp_top(); fp_popp(); /* fstp */
    eax++;
    if (CMP_LE(eax, MEM32(ebp + -8))) goto loc_005140A7; /* jle: less or equal (signed <=) */

loc_005140C1: ;
    esp = ebp;
    POP32(esp, ebp); /* leave */
    esp += 24; return; /* ret 20 */

    #undef fp_push
    #undef fp_pop
    #undef fp_popp
    #undef fp_top
    #undef fp_st1
}

/**
 * sub_005140C5
 * Original: 0x005140C5 - 0x005140FB (54 bytes, 21 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_005140C5(void)
{
    uint32_t ebp;

loc_005140C5: ;
    PUSH32(esp, ebp);
    ebp = esp;
    esp = esp - 0x60;
    PUSH32(esp, MEM32(ebp + 0x14));
    eax = ebp + -48;
    PUSH32(esp, eax);
    eax = ebp + -96;
    PUSH32(esp, eax);
    PUSH32(esp, MEM32(ebp + 0xC));
    PUSH32(esp, MEM32(ebp + 8));
    PUSH32(esp, 0); sub_00513F9F(); /* call 0x00513F9F */

loc_005140E1: ;
    PUSH32(esp, MEM32(ebp + 0x14));
    eax = ebp + -48;
    PUSH32(esp, MEM32(ebp + 0x10));
    PUSH32(esp, eax);
    eax = ebp + -96;
    PUSH32(esp, eax);
    PUSH32(esp, MEM32(ebp + 8));
    PUSH32(esp, 0); sub_00513D35(); /* call 0x00513D35 */

loc_005140F7: ;
    esp = ebp;
    POP32(esp, ebp); /* leave */
    esp += 20; return; /* ret 16 */

}

/**
 * sub_005140FB
 * Original: 0x005140FB - 0x00514156 (91 bytes, 33 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_005140FB(void)
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

loc_005140FB: ;
    PUSH32(esp, ebp);
    ebp = esp;
    PUSH32(esp, ecx);
    fp_push(MEMD(0x648D08)); /* fld double */
    eax = 0; /* xor self */

loc_00514107: ;
    ecx = eax;
    ecx = ecx | 0x7F000;
    ecx = ecx << 0xB;
    MEM32(ebp + -4) = ecx;
    fp_push(MEMF(ebp + -4)); /* fld float */
    eax++;
    (void)0; /* cmp eax, 0x1000 - flags set for next jcc */
    fp_top() = sqrt(fp_top()); /* fsqrt */
    fp_top() = sqrt(fp_top()); /* fsqrt */
    /* FPU: fdivr st(1) */
    MEMF(eax * 4 + 0x87D0DC) = (float)fp_top(); fp_popp(); /* fstp */
    if (CMP_L(eax, 0x1000)) goto loc_00514107; /* jl: less (signed <) */

loc_0051412D: ;
    eax = 0; /* xor self */
    eax++;

loc_00514130: ;
    ecx = eax;
    ecx = ecx << 0x17;
    MEM32(ebp + -4) = ecx;
    fp_push(MEMF(ebp + -4)); /* fld float */
    eax++;
    (void)0; /* cmp eax, 0xFF - flags set for next jcc */
    fp_top() = sqrt(fp_top()); /* fsqrt */
    fp_top() = sqrt(fp_top()); /* fsqrt */
    /* FPU: fdivr st(1) */
    MEMF(eax * 4 + 0x87CCDC) = (float)fp_top(); fp_popp(); /* fstp */
    if (CMP_L(eax, 0xFF)) goto loc_00514130; /* jl: less (signed <) */

loc_00514150: ;
    /* fstp st(0) */
    esp = ebp;
    POP32(esp, ebp); /* leave */
    esp += 8; return; /* ret 4 */

    #undef fp_push
    #undef fp_pop
    #undef fp_popp
    #undef fp_top
    #undef fp_st1
}

/**
 * sub_00514156
 * Original: 0x00514156 - 0x00514385 (559 bytes, 210 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00514156(void)
{
    uint32_t ebp;
    double _fp_stack[8];
    int _fp_top = 0;
    #define fp_push(v) (_fp_stack[--_fp_top & 7] = (v))
    #define fp_pop() (_fp_top++)
    #define fp_popp() (fp_pop())
    #define fp_top() _fp_stack[_fp_top & 7]
    #define fp_st1() _fp_stack[(_fp_top + 1) & 7]

loc_00514156: ;
    PUSH32(esp, ebp);
    ebp = esp;
    esp = esp - 0xC;
    fp_push(MEMF(ebp + 0x1C)); /* fld float */
    eax = MEM32(ebp + 0xC);
    fp_st1() -= fp_top(); fp_pop(); /* fsub */
    PUSH32(esp, ebx);
    PUSH32(esp, esi);
    PUSH32(esp, edi);
    MEMF(ebp + -8) = (float)fp_top(); fp_popp(); /* fstp */
    fp_push(MEMF(ebp + 0x18)); /* fld float */
    fp_st1() += fp_top(); fp_pop(); /* fadd */
    MEMF(ebp + -4) = (float)fp_top(); fp_popp(); /* fstp */
    fp_push(MEMF(ebp + -8)); /* fld float */
    fp_st1() *= fp_top(); fp_pop(); /* fmul */
    fp_push(MEMF(ebp + -4)); /* fld float */
    fp_st1() *= fp_top(); fp_pop(); /* fmul */
    fp_st1() += fp_top(); fp_pop(); /* faddp */
    fp_push(MEMF(ebp + -4)); /* fld float */
    fp_st1() *= fp_top(); fp_pop(); /* fmul */
    fp_push(MEMF(ebp + -8)); /* fld float */
    fp_st1() *= fp_top(); fp_pop(); /* fmul */
    fp_st1() -= fp_top(); fp_pop(); /* fsubp */
    MEMF(ebp + 0xC) = (float)fp_top(); fp_popp(); /* fstp */
    fp_push(MEMF(ebp + 0x18)); /* fld float */
    fp_push(MEMF(ebp + 0x1C)); /* fld float */
    fp_st1() *= fp_top(); fp_pop(); /* fmul */
    fp_st1() += fp_top(); fp_pop(); /* fadd */
    /* fld st(1) */
    fp_st1() *= fp_top(); fp_pop(); /* fmul */
    fp_st1() += fp_top(); fp_pop(); /* fadd */
    /* FPU: fsubr dword ptr [0x648d14] */
    /* fld st(0) */
    fp_st1() -= fp_top(); fp_pop(); /* fsub */
    /* fld st(1) */
    fp_st1() += fp_top(); fp_pop(); /* fadd */
    /* fld st(0) */
    fp_st1() *= fp_top(); fp_pop(); /* fmul */
    /* fld st(2) */
    fp_st1() *= fp_top(); fp_pop(); /* fmul */
    fp_st1() += fp_top(); fp_pop(); /* faddp */
    MEMF(ebp + -12) = (float)fp_top(); fp_popp(); /* fstp */
    fp_st1() *= fp_top(); fp_pop(); /* fmul */
    /* fld st(1) */
    fp_st1() *= fp_top(); fp_pop(); /* fmul */
    fp_st1() -= fp_top(); fp_pop(); /* fsubp */
    MEMF(ebp + 0x18) = (float)fp_top(); fp_popp(); /* fstp */
    /* fstp st(0) */
    /* fld st(0) */
    fp_st1() *= fp_top(); fp_pop(); /* fmul */
    /* fld st(2) */
    fp_st1() *= fp_top(); fp_pop(); /* fmul */
    fp_st1() += fp_top(); fp_pop(); /* faddp */
    MEMF(ebp + -4) = (float)fp_top(); fp_popp(); /* fstp */
    fp_st1() *= fp_top(); fp_pop(); /* fmul */
    /* fld st(1) */
    fp_st1() *= fp_top(); fp_pop(); /* fmul */
    fp_st1() -= fp_top(); fp_pop(); /* fsubp */
    /* fstp st(2) */
    /* fstp st(0) */
    fp_push(MEMF(ebp + -4)); /* fld float */
    /* FPU: fsubr st(1) */
    MEMF(ebp + -8) = (float)fp_top(); fp_popp(); /* fstp */
    fp_st1() += fp_top(); fp_pop(); /* fadd */
    MEMF(ebp + -4) = (float)fp_top(); fp_popp(); /* fstp */
    fp_push(MEMF(ebp + -8)); /* fld float */
    fp_st1() *= fp_top(); fp_pop(); /* fmul */
    edi = MEM32(ebp + 8);
    fp_push(MEMF(ebp + -4)); /* fld float */
    ecx = 0xFFF;
    fp_st1() *= fp_top(); fp_pop(); /* fmul */
    fp_st1() += fp_top(); fp_pop(); /* faddp */
    fp_push(MEMF(ebp + -4)); /* fld float */
    fp_st1() *= fp_top(); fp_pop(); /* fmul */
    fp_push(MEMF(ebp + -8)); /* fld float */
    fp_st1() *= fp_top(); fp_pop(); /* fmul */
    fp_st1() -= fp_top(); fp_pop(); /* fsubp */
    MEMF(ebp + 0x1C) = (float)fp_top(); fp_popp(); /* fstp */
    fp_push(MEMF(eax + 0x18)); /* fld float */
    fp_st1() += fp_top(); fp_pop(); /* fadd */
    fp_push(MEMF(eax + 0x18)); /* fld float */
    fp_st1() -= fp_top(); fp_pop(); /* fsub */
    eax = 0xFF;
    MEMF(ebp + -8) = (float)fp_top(); fp_popp(); /* fstp */
    fp_push(MEMF(0x648D10)); /* fld float */
    /* fld st(1) */
    fp_st1() += fp_top(); fp_pop(); /* fadd */
    fp_st1() += fp_top(); fp_pop(); /* fadd */
    fp_st1() += fp_top(); fp_pop(); /* fadd */
    fp_st1() *= fp_top(); fp_pop(); /* fmul */
    fp_push(MEMF(ebp + -8)); /* fld float */
    fp_st1() += fp_top(); fp_pop(); /* fadd */
    fp_st1() += fp_top(); fp_pop(); /* fadd */
    fp_st1() += fp_top(); fp_pop(); /* fadd */
    fp_st1() *= fp_top(); fp_pop(); /* fmul */
    /* fld st(0) */
    fp_st1() *= fp_top(); fp_pop(); /* fmul */
    /* fld st(2) */
    fp_st1() *= fp_top(); fp_pop(); /* fmul */
    fp_st1() += fp_top(); fp_pop(); /* faddp */
    MEMF(ebp + -4) = (float)fp_top(); fp_popp(); /* fstp */
    edx = MEM32(ebp + -4);
    /* fstp st(0) */
    esi = edx;
    /* fstp st(0) */
    esi = (uint32_t)((int32_t)esi >> 0xB);
    esi = esi & ecx;
    fp_push(MEMF(esi * 4 + 0x87D0E0)); /* fld float */
    edx = (uint32_t)((int32_t)edx >> 0x17);
    edx = edx & eax;
    fp_st1() *= fp_top(); fp_pop(); /* fmul */
    edx = MEM32(ebp + 0x10);
    MEMF(edx + edi * 4) = (float)fp_top(); fp_popp(); /* fstp */
    fp_push(MEMF(ebp + 0xC)); /* fld float */
    fp_st1() -= fp_top(); fp_pop(); /* fsub */
    fp_st1() -= fp_top(); fp_pop(); /* fsub */
    fp_st1() += fp_top(); fp_pop(); /* fadd */
    fp_st1() *= fp_top(); fp_pop(); /* fmul */
    fp_push(MEMF(ebp + 0x18)); /* fld float */
    fp_st1() += fp_top(); fp_pop(); /* fadd */
    fp_st1() -= fp_top(); fp_pop(); /* fsub */
    fp_st1() -= fp_top(); fp_pop(); /* fsub */
    fp_st1() *= fp_top(); fp_pop(); /* fmul */
    /* fld st(0) */
    fp_st1() *= fp_top(); fp_pop(); /* fmul */
    /* fld st(2) */
    fp_st1() *= fp_top(); fp_pop(); /* fmul */
    fp_st1() += fp_top(); fp_pop(); /* faddp */
    MEMF(ebp + 0x10) = (float)fp_top(); fp_popp(); /* fstp */
    esi = MEM32(ebp + 0x10);
    /* fstp st(0) */
    /* fstp st(0) */
    ebx = esi;
    esi = (uint32_t)((int32_t)esi >> 0x17);
    ebx = (uint32_t)((int32_t)ebx >> 0xB);
    esi = esi & eax;
    ebx = ebx & ecx;
    fp_push(MEMF(ebx * 4 + 0x87D0E0)); /* fld float */
    fp_st1() *= fp_top(); fp_pop(); /* fmul */
    esi = MEM32(ebp + 0x14);
    esi = esi - edi;
    MEMF(edx + esi * 4) = (float)fp_top(); fp_popp(); /* fstp */
    fp_push(MEMF(ebp + -12)); /* fld float */
    fp_st1() += fp_top(); fp_pop(); /* fadd */
    /* FPU: fsubr st(2) */
    fp_st1() += fp_top(); fp_pop(); /* fadd */
    fp_st1() *= fp_top(); fp_pop(); /* fmul */
    /* fld st(4) */
    fp_st1() -= fp_top(); fp_pop(); /* fsub */
    fp_st1() -= fp_top(); fp_pop(); /* fsub */
    fp_st1() += fp_top(); fp_pop(); /* fadd */
    fp_st1() *= fp_top(); fp_pop(); /* fmul */
    /* fld st(0) */
    fp_st1() *= fp_top(); fp_pop(); /* fmul */
    /* fld st(2) */
    fp_st1() *= fp_top(); fp_pop(); /* fmul */
    fp_st1() += fp_top(); fp_pop(); /* faddp */
    MEMF(ebp + 0x10) = (float)fp_top(); fp_popp(); /* fstp */
    esi = MEM32(ebp + 0x10);
    /* fstp st(0) */
    ebx = esi;
    /* fstp st(0) */
    ebx = (uint32_t)((int32_t)ebx >> 0xB);
    esi = (uint32_t)((int32_t)esi >> 0x17);
    ebx = ebx & ecx;
    fp_push(MEMF(ebx * 4 + 0x87D0E0)); /* fld float */
    esi = esi & eax;
    fp_st1() *= fp_top(); fp_pop(); /* fmul */
    esi = MEM32(ebp + 0x14);
    esi = esi + edi;
    MEMF(edx + esi * 4) = (float)fp_top(); fp_popp(); /* fstp */
    fp_push(MEMF(ebp + 0x1C)); /* fld float */
    fp_st1() -= fp_top(); fp_pop(); /* fsub */
    fp_st1() += fp_top(); fp_pop(); /* fadd */
    fp_st1() -= fp_top(); fp_pop(); /* fsub */
    fp_st1() *= fp_top(); fp_pop(); /* fmul */
    MEMF(ebp + 0x1C) = (float)fp_top(); fp_popp(); /* fstp */
    fp_push(MEMF(ebp + -12)); /* fld float */
    fp_st1() -= fp_top(); fp_pop(); /* fsub */
    fp_st1() -= fp_top(); fp_pop(); /* fsub */
    fp_st1() += fp_top(); fp_pop(); /* fadd */
    fp_st1() *= fp_top(); fp_pop(); /* fmul */
    /* fstp st(4) */
    /* fstp st(0) */
    /* fstp st(0) */
    /* fstp st(0) */
    /* fld st(0) */
    fp_st1() *= fp_top(); fp_pop(); /* fmul */
    fp_push(MEMF(ebp + 0x1C)); /* fld float */
    fp_st1() *= fp_top(); fp_pop(); /* fmul */
    fp_st1() += fp_top(); fp_pop(); /* faddp */
    MEMF(ebp + 0x1C) = (float)fp_top(); fp_popp(); /* fstp */
    esi = MEM32(ebp + 0x1C);
    ebx = esi;
    /* fstp st(0) */
    ebx = (uint32_t)((int32_t)ebx >> 0xB);
    ebx = ebx & ecx;
    fp_push(MEMF(ebx * 4 + 0x87D0E0)); /* fld float */
    esi = (uint32_t)((int32_t)esi >> 0x17);
    esi = esi & eax;
    fp_st1() *= fp_top(); fp_pop(); /* fmul */
    eax = MEM32(ebp + 0x14);
    eax = eax + eax;
    eax = eax - edi;
    POP32(esp, edi);
    POP32(esp, esi);
    MEMF(edx + eax * 4) = (float)fp_top(); fp_popp(); /* fstp */
    POP32(esp, ebx);
    esp = ebp;
    POP32(esp, ebp); /* leave */
    esp += 28; return; /* ret 24 */

    #undef fp_push
    #undef fp_pop
    #undef fp_popp
    #undef fp_top
    #undef fp_st1
}

/**
 * sub_00514385
 * Original: 0x00514385 - 0x005143A8 (35 bytes, 14 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00514385(void)
{
    uint32_t ebp;
    int _flags = 0; /* fallback flag var */

loc_00514385: ;
    PUSH32(esp, ebp);
    ebp = esp;
    esp = esp - 0xF4;
    eax = MEM32(ebp + 0x10);
    eax = MEM32(eax + 0x68);
    PUSH32(esp, ebx);
    MEM32(ebp + -20) = eax;
    eax = MEM32(ebp + 8);
    (void)0; /* cmp MEM32(eax + 0x6C), 0 - flags set for next jcc */
    PUSH32(esp, esi);
    PUSH32(esp, edi);
    if (CMP_EQ(MEM32(eax + 0x6C), 0)) { sub_005143A8(); return; } /* je: equal / zero */

loc_005143A3: ;
    edi = MEM32(eax + 0x60);
    g_seh_ebp = ebp; sub_005143AE(); return; /* tail jmp 0x005143AE */

}

/**
 * sub_00514B26
 * Original: 0x00514B26 - 0x00514BEB (197 bytes, 82 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00514B26(void)
{
    uint32_t ebp;
    int _flags = 0; /* fallback flag var */

loc_00514B26: ;
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, ebp);
    ebp = esp;
    PUSH32(esp, esi);
    esi = MEM32(ebp + 8);
    eax = ebp + 8;
    PUSH32(esp, eax);
    eax = MEM32(ebp + 0xC);
    PUSH32(esp, 0x17);
    PUSH32(esp, eax);
    PUSH32(esp, 0); RECOMP_ICALL_SAFE(MEM32(eax + 0x134), _icall_esp); /* indirect call */
    }

loc_00514B3D: ;
    (void)0; /* test eax, eax - flags set for next jcc */
    MEM32(ebp + 0xC) = eax;
    if (TEST_S(eax, eax)) goto loc_00514BE3; /* jl: less (signed <) */

loc_00514B48: ;
    eax = MEM32(ebp + 8);
    PUSH32(esp, ebx);
    PUSH32(esp, edi);
    PUSH32(esp, 5);
    edi = eax;
    POP32(esp, ebx);
    edx = 0x8000;

loc_00514B57: ;
    ecx = edi;
    ecx = ecx >> 0x1E;
    esi = esi + ecx * 2;
    ecx = ZX16(MEM16(esi));
    if (TEST_NZ(edx, ecx)) goto loc_00514BAA; /* jne: not equal / not zero */

loc_00514B66: ;
    edi = edi << 2;
    ebx--;
    (void)0; /* test ebx, ebx - flags set for next jcc */
    esi = esi + ecx * 2;
    if (CMP_G(ebx & ebx, 0)) goto loc_00514B57; /* jg: greater (signed >) */

loc_00514B71: ;
    PUSH32(esp, 3);
    POP32(esp, ebx);

loc_00514B74: ;
    ecx = edi;
    ecx = ecx >> 0x1E;
    esi = esi + ecx * 2;
    ecx = ZX16(MEM16(esi));
    if (TEST_NZ(edx, ecx)) goto loc_00514BAA; /* jne: not equal / not zero */

loc_00514B83: ;
    edi = edi << 2;
    ebx--;
    (void)0; /* test ebx, ebx - flags set for next jcc */
    esi = esi + ecx * 2;
    if (CMP_G(ebx & ebx, 0)) goto loc_00514B74; /* jg: greater (signed >) */

loc_00514B8E: ;
    PUSH32(esp, 6);
    POP32(esp, ebx);

loc_00514B91: ;
    ecx = edi;
    ecx = ecx >> 0x1F;
    esi = esi + ecx * 2;
    ecx = ZX16(MEM16(esi));
    if (TEST_NZ(edx, ecx)) goto loc_00514BAA; /* jne: not equal / not zero */

loc_00514BA0: ;
    edi = edi << 1;
    ebx--;
    (void)0; /* test ebx, ebx - flags set for next jcc */
    esi = esi + ecx * 2;
    if (CMP_G(ebx & ebx, 0)) goto loc_00514B91; /* jg: greater (signed >) */

loc_00514BAA: ;
    edi = MEM32(ebp + 0x10);
    edx = ecx;
    edx = edx >> 0xA;
    edx = edx & 0x1F;
    MEM32(edi) = edx;
    edx = MEM32(ebp + 0x14);
    ecx = ecx & 0x3FF;
    (void)0; /* cmp ecx, 0x3FC - flags set for next jcc */
    MEM32(edx) = ecx;
    if (CMP_B(ecx, 0x3FC)) goto loc_00514BD4; /* jb: below (unsigned <) */

loc_00514BCA: ;
    ecx = ecx & 3;
    ecx = ZX16(MEM16(esi + ecx * 2 + 2));
    MEM32(edx) = ecx;

loc_00514BD4: ;
    edx = MEM32(ebp + 0x18);
    if (TEST_Z(edx, edx)) goto loc_00514BE1; /* je: equal / zero */

loc_00514BDB: ;
    ecx = MEM32(edi);
    eax = eax << LO8(ecx);
    MEM32(edx) = eax;

loc_00514BE1: ;
    POP32(esp, edi);
    POP32(esp, ebx);

loc_00514BE3: ;
    eax = MEM32(ebp + 0xC);
    POP32(esp, esi);
    POP32(esp, ebp);
    esp += 24; return; /* ret 20 */

}

/**
 * sub_00514BF0
 * Original: 0x00514BF0 - 0x00514C89 (153 bytes, 64 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00514BF0(void)
{
    int _cf = 0; /* carry flag */

loc_00514BF0: ;
    MEM8(eax) = MEM8(eax) & LO8(eax);
    MEM8(eax) = MEM8(eax) + LO8(eax);
    MEM8(eax) = MEM8(eax) + LO8(eax);
    MEM8(eax) = MEM8(eax) + LO8(eax);
    MEM32(eax) = MEM32(eax) + eax;
    MEM8(eax) = MEM8(eax) + LO8(eax);
    SET_LO8(eax, LO8(eax) + MEM8(eax));
    MEM8(eax) = MEM8(eax) + LO8(eax);
    eax = eax + MEM32(eax);
    MEM8(eax) = MEM8(eax) + LO8(eax);
    SET_LO8(eax, LO8(eax) + 0);
    MEM8(eax) = MEM8(eax) + LO8(eax);
    eax = eax + 0x5000000;
    eax++;
    MEM8(eax + -2147024882) = MEM8(eax + -2147024882) + LO8(eax);
    PUSH32(esp, edi);
    MEM8(edi) = MEM8(edi) + LO8(eax);
    MEM8(eax) = MEM8(eax) + 0;
    SET_LO8(eax, LO8(eax) + 0x80);
    MEM32(eax) = MEM32(eax) + eax;
    SET_LO8(eax, LO8(eax) + 0x80);
    SET_LO8(eax, LO8(eax) + MEM8(eax));
    SET_LO8(eax, LO8(eax) + 0x80);
    eax = eax + MEM32(eax);
    SET_LO8(eax, LO8(eax) + 0x80);
    SET_LO8(eax, LO8(eax) + 0);
    SET_LO8(eax, LO8(eax) + 0x80);
    MEM8(eax) = MEM8(eax) + LO8(eax);
    MEM8(eax) = MEM8(eax) + LO8(eax);
    MEM32(eax) = MEM32(eax) + eax;
    MEM8(eax) = MEM8(eax) + LO8(eax);
    SET_LO8(eax, LO8(eax) + MEM8(eax));
    MEM8(eax) = MEM8(eax) + LO8(eax);
    eax = eax + MEM32(eax);
    MEM8(eax) = MEM8(eax) + LO8(eax);
    SET_LO8(eax, LO8(eax) + 0);
    MEM8(eax) = MEM8(eax) + LO8(eax);
    eax = eax + 0x6000000;
    MEM8(eax) = MEM8(eax) + LO8(eax);
    MEM8(0xE800040) = MEM8(0xE800040) + LO8(eax);
    MEM8(edi) = MEM8(edi) + LO8(eax);
    MEM8(edi) = MEM8(edi) + 7 + _cf; /* adc */
    MEM8(eax) = MEM8(eax) + 0;
    SET_LO8(eax, LO8(eax) + 0x80);
    MEM32(eax) = MEM32(eax) + eax;
    SET_LO8(eax, LO8(eax) + 0x80);
    SET_LO8(eax, LO8(eax) + MEM8(eax));
    SET_LO8(eax, LO8(eax) + 0x80);
    eax = eax + MEM32(eax);
    SET_LO8(eax, LO8(eax) + 0x80);
    SET_LO8(eax, LO8(eax) + 0);
    SET_LO8(eax, LO8(eax) + 0x80);
    eax = eax + 0x6800400;
    MEM8(eax + eax * 4) = MEM8(eax + eax * 4) + LO8(eax);
    { uint32_t _tmp; POP32(esp, _tmp); } /* pop es - segment register */
    MEM8(eax + eax * 4) = MEM8(eax + eax * 4) + LO8(eax);
    MEM8(eax) = MEM8(eax) | LO8(eax);
    SET_LO8(eax, LO8(eax) + 0x80);
    MEM32(eax) = MEM32(eax) | eax;
    SET_LO8(eax, LO8(eax) + 0x80);
    MEM8(esi) = MEM8(esi) ^ HI8(eax);
    SET_LO8(edx, 0x75);
    /* mov fs, MEM16(esi + -49) - segment register */;
    MEM32(esi + 0xAA00D9) = MEM32(esi + 0xAA00D9) + esp + _cf; /* adc */

}

/**
 * sub_005163DD
 * Original: 0x005163DD - 0x005163ED (16 bytes, 7 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_005163DD(void)
{
    uint32_t ebp;
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_005163DD: ;
    esp = ebp;
    POP32(esp, ebp); /* leave */
    /* TODO: iretd  */
    SET_LO8(eax, LO8(eax) + 4);
    MEM8(edx) = MEM8(edx) + LO8(ecx);
    MEM8(0x2000F00) = MEM8(0x2000F00) + LO8(ecx);
    MEM8(eax + eax) = MEM8(eax + eax) + LO8(eax);
    esp += 4; return; /* ret */

}

/**
 * sub_0051C1B9
 * Original: 0x0051C1B9 - 0x0051C1CB (18 bytes, 9 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0051C1B9(void)
{

loc_0051C1B9: ;
    MEM32(edi + 0x3F) = MEM32(edi + 0x3F) + eax;
    /* TODO: cli  */
    eax++;
    edi++;
    /* TODO: aas  */
    MEM8(eax + -1090961593) = MEM8(eax + -1090961593) | LO8(eax);
    edi++;
    /* TODO: aas  */
    esp += 18433; return; /* ret 18429 */

}

/**
 * sub_00522D00
 * Original: 0x00522D00 - 0x00522D12 (18 bytes, 8 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00522D00(void)
{
    int _flags = 0; /* fallback flag var */

loc_00522D00: ;
    if (CMP_EQ(eax, 0xC)) { sub_00522D12(); return; } /* je: equal / zero */

loc_00522D05: ;
    if (CMP_BE(eax, 0xD)) goto loc_00522D0F; /* jbe: below or equal (unsigned <=) */

loc_00522D0A: ;
    if (CMP_BE(eax, 0xF)) { sub_00522D12(); return; } /* jbe: below or equal (unsigned <=) */

loc_00522D0F: ;
    SET_LO8(eax, 0); /* xor self */
    esp += 4; return; /* ret */

}

/**
 * sub_00522D15
 * Original: 0x00522D15 - 0x00522D1F (10 bytes, 5 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00522D15(void)
{

loc_00522D15: ;
    PUSH32(esp, ecx);
    MEM32(esp) = ecx;
    /* TODO: bsf eax, dword ptr [esp] */
    POP32(esp, ecx);
    esp += 4; return; /* ret */

}

/**
 * sub_00522D1F
 * Original: 0x00522D1F - 0x00522D96 (119 bytes, 43 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00522D1F(void)
{
    uint32_t ebp;
    int _flags = 0; /* fallback flag var */

loc_00522D1F: ;
    PUSH32(esp, ebp);
    ebp = esp;
    esp = esp - 0x1C;
    MEM32(ebp + -4) = MEM32(ebp + -4) & 0;
    PUSH32(esp, ebx);
    PUSH32(esp, esi);
    esi = MEM32(ebp + 0x14);
    PUSH32(esp, edi);
    edi = ecx;
    SET_LO8(ebx, LO8(eax));
    SET_LO8(eax, MEM8(esi + 0x5342C0));
    ecx = 0; /* xor self */
    SET_LO8(ecx, LO8(eax));
    ecx = ecx & 0x3C;
    (void)0; /* test LO8(eax), 1 - flags set for next jcc */
    MEM32(ebp + -12) = ecx;
    if (TEST_NZ(LO8(eax), 1)) { sub_00522D96(); return; } /* jne: not equal / not zero */

loc_00522D47: ;
    eax = esi;
    PUSH32(esp, 0); sub_00522D00(); /* call 0x00522D00 */

loc_00522D4E: ;
    if (TEST_NZ(LO8(eax), LO8(eax))) { sub_00522D96(); return; } /* jne: not equal / not zero */

loc_00522D52: ;
    ecx = 0; /* xor self */
    esi = 0; /* xor self */
    (void)0; /* cmp MEM32(ebp + 0x10), ecx - flags set for next jcc */
    MEM32(ebp + -20) = ecx;
    MEM32(ebp + -8) = ecx;
    if (CMP_NE(MEM32(ebp + 0x10), ecx)) goto loc_00522D68; /* jne: not equal / not zero */

loc_00522D61: ;
    MEM32(ebp + 0x10) = 1;

loc_00522D68: ;
    eax = MEM32(ebp + 0x18);
    if (CMP_NE(eax, ecx)) goto loc_00522D82; /* jne: not equal / not zero */

loc_00522D6F: ;
    eax = MEM32(ebp + -12);
    eax = (uint32_t)((int32_t)eax * (int32_t)MEM32(ebp + 8));
    eax = eax >> 3;
    eax = eax + 0x3F;
    eax = eax & 0xFFFFFFC0u;
    MEM32(ebp + 0x18) = eax;

loc_00522D82: ;
    ecx = MEM32(ebp + 8);
    MEM32(ebp + -28) = edi;
    edi = (uint32_t)((int32_t)edi * (int32_t)eax);
    MEM32(ebp + -24) = ecx;
    MEM32(ebp + -4) = edi;
    g_seh_ebp = ebp; sub_00522E5E(); return; /* tail jmp 0x00522E5E */

}

/**
 * sub_00522ECA
 * Original: 0x00522ECA - 0x00522F13 (73 bytes, 28 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00522ECA(void)
{
    uint32_t ebp;
    int _flags = 0; /* fallback flag var */

loc_00522ECA: ;
    PUSH32(esp, ebp);
    ebp = esp;
    PUSH32(esp, esi);
    esi = MEM32(ebp + 0x2C);
    PUSH32(esp, edi);
    eax = esi + 0x10;
    PUSH32(esp, eax);
    SET_LO8(eax, MEM8(ebp + 0x20));
    edi = esi + 0xC;
    PUSH32(esp, edi);
    PUSH32(esp, MEM32(ebp + 0x24));
    PUSH32(esp, MEM32(ebp + 0x1C));
    PUSH32(esp, MEM32(ebp + 0x18));
    PUSH32(esp, MEM32(ebp + 0x10));
    PUSH32(esp, MEM32(ebp + 0xC));
    PUSH32(esp, MEM32(ebp + 8));
    PUSH32(esp, 0); sub_00522D1F(); /* call 0x00522D1F */

loc_00522EF4: ;
    if (TEST_Z(MEM8(ebp + 0x16), 1)) goto loc_00522EFD; /* je: equal / zero */

loc_00522EFA: ;
    MEM32(edi) = MEM32(edi) & 0xFFFFFFF7u;

loc_00522EFD: ;
    ecx = MEM32(ebp + 0x28);
    MEM32(esi + 8) = MEM32(esi + 8) & 0;
    POP32(esp, edi);
    MEM32(esi) = 0x40001;
    MEM32(esi + 4) = ecx;
    POP32(esp, esi);
    POP32(esp, ebp);
    esp += 44; return; /* ret 40 */

}

/**
 * sub_00522F13
 * Original: 0x00522F13 - 0x00522F3A (39 bytes, 15 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00522F13(void)
{
    uint32_t ebp;

loc_00522F13: ;
    PUSH32(esp, ebp);
    ebp = esp;
    PUSH32(esp, MEM32(ebp + 0x18));
    PUSH32(esp, MEM32(ebp + 0x1C));
    PUSH32(esp, 0);
    PUSH32(esp, 0);
    PUSH32(esp, MEM32(ebp + 0x20));
    PUSH32(esp, MEM32(ebp + 0x14));
    PUSH32(esp, MEM32(ebp + 0x10));
    PUSH32(esp, MEM32(ebp + 0xC));
    PUSH32(esp, 1);
    PUSH32(esp, MEM32(ebp + 8));
    PUSH32(esp, 0); sub_00522ECA(); /* call 0x00522ECA */

loc_00522F36: ;
    POP32(esp, ebp);
    esp += 32; return; /* ret 28 */

}

/**
 * sub_00522F3A
 * Original: 0x00522F3A - 0x00522F48 (14 bytes, 4 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00522F3A(void)
{

loc_00522F3A: ;
    MEM32(eax + 8) = MEM32(eax + 8) & 0;
    MEM32(eax) = 1;
    MEM32(eax + 4) = ecx;
    esp += 4; return; /* ret */

}

/**
 * sub_00522F48
 * Original: 0x00522F48 - 0x00522F65 (29 bytes, 11 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00522F48(void)
{

loc_00522F48: ;
    ecx = 0; /* xor self */
    MEM32(eax) = ecx;
    MEM32(eax + 4) = ecx;
    MEM32(eax + 8) = ecx;
    MEM32(eax + 0xC) = ecx;
    MEM32(eax + 0x10) = ecx;
    MEM32(eax + 0x14) = ecx;
    MEM32(eax + 0x18) = ecx;
    MEM32(eax + 0x1C) = ecx;
    MEM32(eax + 0x20) = ecx;
    esp += 4; return; /* ret */

}

/**
 * sub_00522F65
 * Original: 0x00522F65 - 0x00522F99 (52 bytes, 22 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00522F65(void)
{
    uint32_t ebp;
    int _flags = 0; /* fallback flag var */
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_00522F65: ;
    PUSH32(esp, esi);
    PUSH32(esp, edi);
    PUSH32(esp, 0); sub_00522D15(); /* call 0x00522D15 */

loc_00522F6C: ;
    ecx = MEM32(esp + 0xC);
    esi = eax;
    PUSH32(esp, 0); sub_00522D15(); /* call 0x00522D15 */

loc_00522F77: ;
    (void)0; /* cmp esi, eax - flags set for next jcc */
    ecx = esi;
    if (CMP_B(esi, eax)) goto loc_00522F7F; /* jb: below (unsigned <) */

loc_00522F7D: ;
    ecx = eax;

loc_00522F7F: ;
    edx = 0; /* xor self */
    ecx = ecx + ecx;
    edx++;
    edx = edx << LO8(ecx);
    edx--;
    (void)0; /* cmp esi, eax - flags set for next jcc */
    ecx = edx;
    ecx = ~ecx;
    if (CMP_BE(esi, eax)) { sub_00522F99(); return; } /* jbe: below or equal (unsigned <=) */

loc_00522F8F: ;
    edi = ecx;
    edi = edi | 0x55555555;
    g_seh_ebp = ebp; sub_00522FA1(); return; /* tail jmp 0x00522FA1 */

}

/**
 * sub_00522FD5
 * Original: 0x00522FD5 - 0x00523012 (61 bytes, 25 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00522FD5(void)
{
    uint32_t ebp;

loc_00522FD5: ;
    PUSH32(esp, ebp);
    ebp = esp;
    esp = esp - 0xC;
    ecx = MEM32(ebp + 0x10);
    PUSH32(esp, ebx);
    PUSH32(esp, esi);
    PUSH32(esp, edi);
    eax = ebp + 0x14;
    PUSH32(esp, eax);
    eax = ebp + -4;
    PUSH32(esp, eax);
    PUSH32(esp, MEM32(ebp + 0x14));
    PUSH32(esp, 0); sub_00522F65(); /* call 0x00522F65 */

loc_00522FF1: ;
    eax = MEM32(ebp + -4);
    eax = eax & 0xFFFFFFC0u;
    MEM32(ebp + -12) = eax;
    eax = MEM32(ebp + 0x14);
    eax = eax & 0xFFFFFF80u;
    MEM32(ebp + -8) = eax;
    esi = MEM32(ebp + 8);
    edi = MEM32(ebp + 0xC);
    edx = MEM32(ebp + 0x10);
    ebx = 0; /* xor self */
    ecx = 0; /* xor self */
    g_seh_ebp = ebp; sub_00523015(); return; /* tail jmp 0x00523015 */

}

/**
 * sub_005230D5
 * Original: 0x005230D5 - 0x005231D3 (254 bytes, 105 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_005230D5(void)
{
    uint32_t ebp;
    int _flags = 0; /* fallback flag var */
    float xmm0, xmm1, xmm2, xmm3, xmm4, xmm5, xmm6, xmm7;

loc_005230D5: ;
    PUSH32(esp, ebp);
    ebp = esp;
    esp = esp - 0xC;
    ecx = MEM32(ebp + 0x10);
    PUSH32(esp, ebx);
    PUSH32(esp, esi);
    PUSH32(esp, edi);
    eax = ebp + 0x14;
    PUSH32(esp, eax);
    eax = ebp + -4;
    PUSH32(esp, eax);
    PUSH32(esp, MEM32(ebp + 0x14));
    PUSH32(esp, 0); sub_00522F65(); /* call 0x00522F65 */

loc_005230F1: ;
    eax = MEM32(ebp + -4);
    eax = eax & 0xFFFFFFC0u;
    MEM32(ebp + -12) = eax;
    eax = MEM32(ebp + 0x14);
    eax = eax & 0xFFFFFF80u;
    MEM32(ebp + -8) = eax;
    esi = MEM32(ebp + 8);
    edi = MEM32(ebp + 0xC);
    edx = MEM32(ebp + 0x10);
    ebx = 0; /* xor self */
    ecx = 0; /* xor self */
    edx = edx + edx;
    /* nop */

loc_00523115: ;
    xmm0 = MEMF(esi); /* movups */
    xmm1 = MEMF(esi + edx); /* movups */
    esi = esi + edx;
    eax = ebx;
    xmm4 = MEMF(esi + edx); /* movups */
    xmm5 = MEMF(esi + edx * 2); /* movups */
    eax = eax | ecx;
    xmm6 = xmm4; /* movaps */
    xmm2 = xmm0; /* movaps */
    /* unpckhps xmm6, xmm5 */
    esi = esi + edx * 4;
    /* unpckhps xmm2, xmm1 */
    /* unpcklps xmm4, xmm5 */
    xmm3 = MEMF(esi); /* movups */
    xmm5 = MEMF(esi + edx); /* movups */
    xmm7 = MEMF(esi + edx * 2); /* movups */
    esi = esi - edx;
    /* unpcklps xmm0, xmm1 */
    xmm1 = MEMF(esi); /* movups */
    /* TODO: movntps xmmword ptr [edi + eax*2], xmm0 */
    /* TODO: movntps xmmword ptr [edi + eax*2 + 0x10], xmm4 */
    /* TODO: movntps xmmword ptr [edi + eax*2 + 0x20], xmm2 */
    /* TODO: movntps xmmword ptr [edi + eax*2 + 0x30], xmm6 */
    xmm0 = xmm1; /* movaps */
    xmm4 = xmm5; /* movaps */
    /* unpcklps xmm0, xmm3 */
    /* unpcklps xmm4, xmm7 */
    /* unpckhps xmm1, xmm3 */
    /* unpckhps xmm5, xmm7 */
    /* TODO: movntps xmmword ptr [edi + eax*2 + 0x40], xmm0 */
    /* TODO: movntps xmmword ptr [edi + eax*2 + 0x50], xmm4 */
    /* TODO: movntps xmmword ptr [edi + eax*2 + 0x60], xmm1 */
    /* TODO: movntps xmmword ptr [edi + eax*2 + 0x70], xmm5 */
    esi = esi - edx;
    esi = esi - edx;
    esi = esi - edx;
    esi = esi - edx;
    ebx = ebx - MEM32(ebp + -12);
    /* nop */
    /* nop */
    /* nop */
    /* nop */
    /* nop */
    /* nop */
    /* nop */
    /* nop */
    /* nop */
    /* nop */
    /* nop */
    /* nop */
    /* nop */
    /* nop */
    /* nop */
    /* nop */
    /* nop */
    /* nop */
    /* nop */
    /* nop */
    /* nop */
    /* nop */
    /* nop */
    /* nop */
    /* nop */
    /* nop */
    /* nop */
    /* nop */
    esi = esi + 0x10;
    ebx = ebx & MEM32(ebp + -4);
    if ((ebx != 0)) goto loc_00523115; /* jne: not equal / not zero */

loc_005231BB: ;
    ecx = ecx - MEM32(ebp + -8);
    esi = esi + edx * 8;
    esi = esi - edx;
    ecx = ecx & MEM32(ebp + 0x14);
    if ((ecx != 0)) goto loc_00523115; /* jne: not equal / not zero */

loc_005231CC: ;
    POP32(esp, edi);
    POP32(esp, esi);
    POP32(esp, ebx);
    esp = ebp;
    POP32(esp, ebp); /* leave */
    esp += 20; return; /* ret 16 */

}

/**
 * sub_005231D3
 * Original: 0x005231D3 - 0x005232CC (249 bytes, 101 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_005231D3(void)
{
    uint32_t ebp;
    int _flags = 0; /* fallback flag var */
    float xmm0, xmm1, xmm2, xmm3, xmm4, xmm5, xmm6, xmm7;

loc_005231D3: ;
    PUSH32(esp, ebp);
    ebp = esp;
    esp = esp - 0xC;
    ecx = MEM32(ebp + 0x10);
    PUSH32(esp, ebx);
    PUSH32(esp, esi);
    PUSH32(esp, edi);
    eax = ebp + 0x14;
    PUSH32(esp, eax);
    eax = ebp + -4;
    PUSH32(esp, eax);
    PUSH32(esp, MEM32(ebp + 0x14));
    PUSH32(esp, 0); sub_00522F65(); /* call 0x00522F65 */

loc_005231EF: ;
    eax = MEM32(ebp + -4);
    eax = eax & 0xFFFFFFC0u;
    MEM32(ebp + -12) = eax;
    eax = MEM32(ebp + 0x14);
    eax = eax & 0xFFFFFFE0u;
    MEM32(ebp + -8) = eax;
    esi = MEM32(ebp + 8);
    edi = MEM32(ebp + 0xC);
    edx = MEM32(ebp + 0x10);
    ebx = 0; /* xor self */
    ecx = 0; /* xor self */
    edx = edx << 2;
    edi = edi;

loc_00523213: ;
    eax = ebx;
    xmm0 = MEMF(esi); /* movups */
    xmm4 = MEMF(esi + 0x10); /* movups */
    xmm2 = MEMF(esi + edx); /* movups */
    xmm6 = MEMF(esi + edx + 0x10); /* movups */
    xmm1 = xmm0; /* movaps */
    xmm5 = xmm4; /* movaps */
    esi = esi + edx * 2;
    eax = eax | ecx;
    /* TODO: movlhps xmm0, xmm2 */
    /* TODO: movhlps xmm2, xmm1 */
    /* TODO: movlhps xmm4, xmm6 */
    /* TODO: movhlps xmm6, xmm5 */
    xmm1 = MEMF(esi); /* movups */
    xmm5 = MEMF(esi + 0x10); /* movups */
    xmm3 = MEMF(esi + edx); /* movups */
    xmm7 = MEMF(esi + edx + 0x10); /* movups */
    /* TODO: movntps xmmword ptr [edi + eax*4], xmm0 */
    /* TODO: movntps xmmword ptr [edi + eax*4 + 0x10], xmm2 */
    /* TODO: movntps xmmword ptr [edi + eax*4 + 0x40], xmm4 */
    /* TODO: movntps xmmword ptr [edi + eax*4 + 0x50], xmm6 */
    xmm0 = xmm1; /* movaps */
    xmm4 = xmm5; /* movaps */
    /* TODO: movlhps xmm1, xmm3 */
    /* TODO: movhlps xmm3, xmm0 */
    /* TODO: movlhps xmm5, xmm7 */
    /* TODO: movhlps xmm7, xmm4 */
    /* TODO: movntps xmmword ptr [edi + eax*4 + 0x20], xmm1 */
    /* TODO: movntps xmmword ptr [edi + eax*4 + 0x30], xmm3 */
    /* TODO: movntps xmmword ptr [edi + eax*4 + 0x60], xmm5 */
    /* TODO: movntps xmmword ptr [edi + eax*4 + 0x70], xmm7 */
    esi = esi - edx;
    esi = esi - edx;
    /* nop */
    /* nop */
    /* nop */
    /* nop */
    /* nop */
    /* nop */
    /* nop */
    /* nop */
    /* nop */
    /* nop */
    /* nop */
    /* nop */
    /* nop */
    /* nop */
    /* nop */
    /* nop */
    /* nop */
    /* nop */
    /* nop */
    /* nop */
    /* nop */
    /* nop */
    /* nop */
    /* nop */
    /* nop */
    /* nop */
    /* nop */
    /* nop */
    ebx = ebx - MEM32(ebp + -12);
    esi = esi + 0x20;
    ebx = ebx & MEM32(ebp + -4);
    if ((ebx != 0)) goto loc_00523213; /* jne: not equal / not zero */

loc_005232B4: ;
    ecx = ecx - MEM32(ebp + -8);
    esi = esi + edx * 4;
    esi = esi - edx;
    ecx = ecx & MEM32(ebp + 0x14);
    if ((ecx != 0)) goto loc_00523213; /* jne: not equal / not zero */

loc_005232C5: ;
    POP32(esp, edi);
    POP32(esp, esi);
    POP32(esp, ebx);
    esp = ebp;
    POP32(esp, ebp); /* leave */
    esp += 20; return; /* ret 16 */

}

/**
 * sub_005232CC
 * Original: 0x005232CC - 0x00523309 (61 bytes, 27 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_005232CC(void)
{
    int _flags = 0; /* fallback flag var */

loc_005232CC: ;
    if (CMP_G(eax, 0x2D)) goto loc_005232F1; /* jg: greater (signed >) */

loc_005232D1: ;
    if (CMP_GE(eax, 0x27)) goto loc_00523305; /* jge: greater or equal (signed >=) */

loc_005232D6: ;
    if (TEST_S(eax, eax)) goto loc_005232EE; /* jl: less (signed <) */

loc_005232DA: ;
    if (CMP_LE(eax, 7)) goto loc_00523305; /* jle: less or equal (signed <=) */

loc_005232DF: ;
    if (CMP_EQ(eax, 0xB)) goto loc_00523305; /* je: equal / zero */

loc_005232E4: ;
    if (CMP_LE(eax, 0x18)) goto loc_005232EE; /* jle: less or equal (signed <=) */

loc_005232E9: ;
    if (CMP_LE(eax, 0x1A)) goto loc_00523305; /* jle: less or equal (signed <=) */

loc_005232EE: ;
    eax = 0; /* xor self */
    esp += 4; return; /* ret */

loc_005232F1: ;
    if (CMP_L(eax, 0x32)) goto loc_005232EE; /* jl: less (signed <) */

loc_005232F6: ;
    if (CMP_LE(eax, 0x33)) goto loc_00523305; /* jle: less or equal (signed <=) */

loc_005232FB: ;
    if (CMP_LE(eax, 0x37)) goto loc_005232EE; /* jle: less or equal (signed <=) */

loc_00523300: ;
    if (CMP_G(eax, 0x3C)) goto loc_005232EE; /* jg: greater (signed >) */

loc_00523305: ;
    eax = 0; /* xor self */
    eax++;
    esp += 4; return; /* ret */

}

/**
 * sub_00523309
 * Original: 0x00523309 - 0x00523328 (31 bytes, 12 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00523309(void)
{
    uint32_t ebp;
    int _flags = 0; /* fallback flag var */
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_00523309: ;
    if (CMP_A(eax, 0x41)) { sub_00523328(); return; } /* ja: above (unsigned >) */

loc_0052330E: ;
    eax = ZX8(MEM8(eax + 0x52333B));
    g_seh_ebp = ebp; RECOMP_ITAIL(MEM32(eax * 4 + 0x52332B)); return; /* indirect tail jmp */

    PUSH32(esp, 4);
    goto loc_00523322;

    PUSH32(esp, 2);

loc_00523322: ;
    POP32(esp, eax);
    esp += 4; return; /* ret */

}

/**
 * sub_0052337D
 * Original: 0x0052337D - 0x00523AC9 (1868 bytes, 651 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0052337D(void)
{
    uint32_t ebp;
    int _flags = 0; /* fallback flag var */
    float xmm0, xmm1, xmm2, xmm3, xmm4, xmm5, xmm6, xmm7;
    uint64_t mm0, mm1, mm2, mm3, mm4, mm5, mm6, mm7;
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_0052337D: ;
    PUSH32(esp, ebp);
    ebp = esp + -100;
    esp = esp - 0xA0;
    PUSH32(esp, ebx);
    PUSH32(esp, esi);
    PUSH32(esp, edi);
    PUSH32(esp, 0x10);
    edi = edx;
    POP32(esp, edx);
    PUSH32(esp, 8);
    ebx = ecx;
    (void)0; /* cmp ebx, 2 - flags set for next jcc */
    POP32(esp, ecx);
    PUSH32(esp, 7);
    esi = eax;
    POP32(esp, eax);
    PUSH32(esp, 3);
    MEM32(ebp + -60) = eax;
    MEM32(ebp + -56) = eax;
    MEM32(ebp + -52) = eax;
    MEM32(ebp + -24) = eax;
    MEM32(ebp + -20) = eax;
    POP32(esp, eax);
    MEM32(ebp + -48) = edx;
    MEM32(ebp + -44) = edx;
    MEM32(ebp + -40) = ecx;
    MEM32(ebp + -36) = ecx;
    MEM32(ebp + -32) = ecx;
    MEM32(ebp + -28) = ecx;
    MEM32(ebp + -16) = eax;
    if (CMP_BE(ebx, 2)) goto loc_00523AA3; /* jbe: below or equal (unsigned <=) */

loc_005233CA: ;
    if (CMP_BE(MEM32(ebp + 0x78), 1)) goto loc_00523AA3; /* jbe: below or equal (unsigned <=) */

loc_005233D4: ;
    if (TEST_NZ(edi, edi)) goto loc_00523443; /* jne: not equal / not zero */

loc_005233D8: ;
    if (CMP_NE(MEM32(ebp + 0x7C), edi)) goto loc_00523443; /* jne: not equal / not zero */

loc_005233DD: ;
    if (CMP_NE(MEM32(ebp + 0x70), edi)) goto loc_00523443; /* jne: not equal / not zero */

loc_005233E2: ;
    if (CMP_NE(esi, 4)) goto loc_00523404; /* jne: not equal / not zero */

loc_005233E7: ;
    if (CMP_B(ebx, ecx)) goto loc_00523443; /* jb: below (unsigned <) */

loc_005233EB: ;
    if (CMP_B(MEM32(ebp + 0x78), ecx)) goto loc_00523443; /* jb: below (unsigned <) */

loc_005233F0: ;
    PUSH32(esp, MEM32(ebp + 0x78));
    PUSH32(esp, ebx);
    PUSH32(esp, MEM32(ebp + 0x74));
    PUSH32(esp, MEM32(ebp + 0x6C));
    PUSH32(esp, 0); sub_005231D3(); /* call 0x005231D3 */

loc_005233FF: ;
    goto loc_00523ABF;

loc_00523404: ;
    if (CMP_NE(esi, 2)) goto loc_00523426; /* jne: not equal / not zero */

loc_00523409: ;
    if (CMP_B(ebx, edx)) goto loc_00523443; /* jb: below (unsigned <) */

loc_0052340D: ;
    if (CMP_B(MEM32(ebp + 0x78), ecx)) goto loc_00523443; /* jb: below (unsigned <) */

loc_00523412: ;
    PUSH32(esp, MEM32(ebp + 0x78));
    PUSH32(esp, ebx);
    PUSH32(esp, MEM32(ebp + 0x74));
    PUSH32(esp, MEM32(ebp + 0x6C));
    PUSH32(esp, 0); sub_005230D5(); /* call 0x005230D5 */

loc_00523421: ;
    goto loc_00523ABF;

loc_00523426: ;
    if (CMP_B(ebx, edx)) goto loc_00523443; /* jb: below (unsigned <) */

loc_0052342A: ;
    if (CMP_B(MEM32(ebp + 0x78), ecx)) goto loc_00523443; /* jb: below (unsigned <) */

loc_0052342F: ;
    PUSH32(esp, MEM32(ebp + 0x78));
    PUSH32(esp, ebx);
    PUSH32(esp, MEM32(ebp + 0x74));
    PUSH32(esp, MEM32(ebp + 0x6C));
    PUSH32(esp, 0); sub_00522FD5(); /* call 0x00522FD5 */

loc_0052343E: ;
    goto loc_00523ABF;

loc_00523443: ;
    eax = ebp + 0x38;
    PUSH32(esp, 0); sub_00522F48(); /* call 0x00522F48 */

loc_0052344B: ;
    eax = MEM32(ebp + 0x7C);
    (void)0; /* test eax, eax - flags set for next jcc */
    edx = MEM32(ebp + 0x78);
    MEM32(ebp + 0x34) = esi;
    MEM32(ebp + 0x18) = edx;
    MEM32(ebp + 0x14) = ebx;
    if (TEST_NZ(eax, eax)) goto loc_00523466; /* jne: not equal / not zero */

loc_0052345E: ;
    MEM32(ebp + 0x20) = MEM32(ebp + 0x20) & eax;
    MEM32(ebp + 0x1C) = MEM32(ebp + 0x1C) & eax;
    goto loc_00523471;

loc_00523466: ;
    ecx = MEM32(eax);
    eax = MEM32(eax + 4);
    MEM32(ebp + 0x20) = ecx;
    MEM32(ebp + 0x1C) = eax;

loc_00523471: ;
    (void)0; /* test edi, edi - flags set for next jcc */
    eax = MEM32(ebp + 0x74);
    MEM32(ebp + 0x10) = eax;
    eax = MEM32(ebp + 0x6C);
    MEM32(ebp + -8) = eax;
    if (TEST_NZ(edi, edi)) goto loc_0052348F; /* jne: not equal / not zero */

loc_00523481: ;
    MEM32(ebp) = MEM32(ebp) & edi;
    MEM32(ebp + 4) = MEM32(ebp + 4) & edi;
    MEM32(ebp + 0xC) = edx;
    MEM32(ebp + 8) = ebx;
    goto loc_005234AA;

loc_0052348F: ;
    eax = MEM32(edi + 4);
    ecx = MEM32(edi + 0xC);
    ecx = ecx - eax;
    MEM32(ebp + 0xC) = ecx;
    ecx = MEM32(edi);
    edi = MEM32(edi + 8);
    edi = edi - ecx;
    MEM32(ebp + 8) = edi;
    MEM32(ebp) = ecx;
    MEM32(ebp + 4) = eax;

loc_005234AA: ;
    eax = MEM32(ebp + 0x70);
    if (TEST_NZ(eax, eax)) goto loc_005234B6; /* jne: not equal / not zero */

loc_005234B1: ;
    eax = ebx;
    eax = (uint32_t)((int32_t)eax * (int32_t)esi);

loc_005234B6: ;
    PUSH32(esp, 0);
    MEM32(ebp + -4) = eax;
    PUSH32(esp, edx);
    eax = ebp + 0x38;
    PUSH32(esp, 0); sub_000688D0(); /* call 0x000688D0 */

loc_005234C4: ;
    eax = MEM32(ebp + 0x44);
    MEM32(ebp + 0x5C) = eax;
    eax = MEM32(ebp + 0x48);
    MEM32(ebp + 0x60) = eax;
    eax = MEM32(ebp + 0xC);
    ecx = 0; /* xor self */
    if (CMP_EQ(eax, ecx)) goto loc_00523ABF; /* je: equal / zero */

loc_005234DD: ;
    if (CMP_EQ(MEM32(ebp + 8), ecx)) goto loc_00523ABF; /* je: equal / zero */

loc_005234E6: ;
    esi = esi >> 1;
    esi = esi << 2;
    edi = esi;
    edx = MEM32(ebp + edi + -60);
    ebx = 0; /* xor self */
    MEM32(ebp + 0x6C) = edx;
    edx = MEM32(ebp + edi + -24);
    ebx++;
    (void)0; /* test MEM8(ebp + 0x20), LO8(ebx) - flags set for next jcc */
    MEM32(ebp + 0x78) = edx;
    if (TEST_Z(MEM8(ebp + 0x20), LO8(ebx))) goto loc_00523540; /* je: equal / zero */

loc_00523503: ;
    (void)0; /* cmp MEM32(ebp + 0x34), 4 - flags set for next jcc */
    MEM32(ebp + 0x24) = ecx;
    MEM32(ebp + 0x28) = ecx;
    MEM32(ebp + 0x2C) = ebx;
    MEM32(ebp + 0x30) = eax;
    esi = ebp + -8;
    if (CMP_NE(MEM32(ebp + 0x34), 4)) goto loc_0052351F; /* jne: not equal / not zero */

loc_00523518: ;
    PUSH32(esp, 0); sub_00523AC9(); /* call 0x00523AC9 */

loc_0052351D: ;
    goto loc_00523531;

loc_0052351F: ;
    if (CMP_NE(MEM32(ebp + 0x34), 2)) goto loc_0052352C; /* jne: not equal / not zero */

loc_00523525: ;
    PUSH32(esp, 0); sub_00523C0E(); /* call 0x00523C0E */

loc_0052352A: ;
    goto loc_00523531;

loc_0052352C: ;
    PUSH32(esp, 0); sub_00523D4D(); /* call 0x00523D4D */

loc_00523531: ;
    MEM32(ebp) = MEM32(ebp) + 1;
    MEM32(ebp + 0x20) = MEM32(ebp + 0x20) + 1;
    MEM32(ebp + 8) = MEM32(ebp + 8) - 1;
    if ((MEM32(ebp + 8) == 0)) goto loc_00523ABF; /* je: equal / zero */

loc_00523540: ;
    if (TEST_Z(MEM8(ebp + 8), LO8(ebx))) goto loc_00523587; /* je: equal / zero */

loc_00523545: ;
    MEM32(ebp + 8) = MEM32(ebp + 8) - 1;
    eax = MEM32(ebp + 8);
    MEM32(ebp + 0x28) = MEM32(ebp + 0x28) & 0;
    (void)0; /* cmp MEM32(ebp + 0x34), 4 - flags set for next jcc */
    MEM32(ebp + 0x24) = eax;
    eax = MEM32(ebp + 0xC);
    MEM32(ebp + 0x2C) = ebx;
    MEM32(ebp + 0x30) = eax;
    esi = ebp + -8;
    if (CMP_NE(MEM32(ebp + 0x34), 4)) goto loc_0052356B; /* jne: not equal / not zero */

loc_00523564: ;
    PUSH32(esp, 0); sub_00523AC9(); /* call 0x00523AC9 */

loc_00523569: ;
    goto loc_0052357D;

loc_0052356B: ;
    if (CMP_NE(MEM32(ebp + 0x34), 2)) goto loc_00523578; /* jne: not equal / not zero */

loc_00523571: ;
    PUSH32(esp, 0); sub_00523C0E(); /* call 0x00523C0E */

loc_00523576: ;
    goto loc_0052357D;

loc_00523578: ;
    PUSH32(esp, 0); sub_00523D4D(); /* call 0x00523D4D */

loc_0052357D: ;
    if (CMP_EQ(MEM32(ebp + 8), 0)) goto loc_00523ABF; /* je: equal / zero */

loc_00523587: ;
    ecx = MEM32(ebp + 0x6C);
    edx = MEM32(ebp + 0x20);
    esi = ecx + edx;
    eax = ecx;
    ecx = MEM32(ebp + 8);
    eax = ~eax;
    edx = edx + ecx;
    esi = esi & eax;
    edx = edx & eax;
    if (CMP_AE(esi, edx)) goto loc_00523A6E; /* jae: above or equal (unsigned >=) */

loc_005235A5: ;
    edx = MEM32(ebp + 0x78);
    ebx = MEM32(ebp + 0x1C);
    esi = MEM32(ebp + 0xC);
    eax = edx;
    eax = ~eax;
    edx = edx + ebx;
    esi = esi + ebx;
    edx = edx & eax;
    esi = esi & eax;
    if (CMP_AE(edx, esi)) goto loc_00523A6E; /* jae: above or equal (unsigned >=) */

loc_005235C2: ;
    eax = MEM32(ebp + 0x14);
    if (CMP_B(eax, MEM32(ebp + edi + -48))) goto loc_00523A6E; /* jb: below (unsigned <) */

loc_005235CF: ;
    eax = MEM32(ebp + 0x18);
    if (CMP_B(eax, MEM32(ebp + edi + -36))) goto loc_00523A6E; /* jb: below (unsigned <) */

loc_005235DC: ;
    if (TEST_Z(MEM32(ebp + 0x78), ebx)) goto loc_0052361F; /* je: equal / zero */

loc_005235E1: ;
    MEM32(ebp + 0x24) = MEM32(ebp + 0x24) & 0;
    MEM32(ebp + 0x28) = MEM32(ebp + 0x28) & 0;
    ebx = (uint32_t)(-(int32_t)ebx);
    ebx = ebx & MEM32(ebp + 0x78);
    (void)0; /* cmp MEM32(ebp + 0x34), 4 - flags set for next jcc */
    MEM32(ebp + 0x2C) = ecx;
    MEM32(ebp + 0x30) = ebx;
    esi = ebp + -8;
    if (CMP_NE(MEM32(ebp + 0x34), 4)) goto loc_00523604; /* jne: not equal / not zero */

loc_005235FD: ;
    PUSH32(esp, 0); sub_00523DC0(); /* call 0x00523DC0 */

loc_00523602: ;
    goto loc_00523616;

loc_00523604: ;
    if (CMP_NE(MEM32(ebp + 0x34), 2)) goto loc_00523611; /* jne: not equal / not zero */

loc_0052360A: ;
    PUSH32(esp, 0); sub_00523B42(); /* call 0x00523B42 */

loc_0052360F: ;
    goto loc_00523616;

loc_00523611: ;
    PUSH32(esp, 0); sub_00523C89(); /* call 0x00523C89 */

loc_00523616: ;
    MEM32(ebp + 4) = MEM32(ebp + 4) + ebx;
    MEM32(ebp + 0x1C) = MEM32(ebp + 0x1C) + ebx;
    MEM32(ebp + 0xC) = MEM32(ebp + 0xC) - ebx;

loc_0052361F: ;
    eax = MEM32(ebp + 0x78);
    eax = eax & MEM32(ebp + 0xC);
    if ((eax == 0)) goto loc_0052365F; /* je: equal / zero */

loc_00523627: ;
    MEM32(ebp + 0xC) = MEM32(ebp + 0xC) - eax;
    ecx = MEM32(ebp + 0xC);
    MEM32(ebp + 0x24) = MEM32(ebp + 0x24) & 0;
    (void)0; /* cmp MEM32(ebp + 0x34), 4 - flags set for next jcc */
    MEM32(ebp + 0x28) = ecx;
    ecx = MEM32(ebp + 8);
    MEM32(ebp + 0x2C) = ecx;
    MEM32(ebp + 0x30) = eax;
    esi = ebp + -8;
    if (CMP_NE(MEM32(ebp + 0x34), 4)) goto loc_0052364D; /* jne: not equal / not zero */

loc_00523646: ;
    PUSH32(esp, 0); sub_00523DC0(); /* call 0x00523DC0 */

loc_0052364B: ;
    goto loc_0052365F;

loc_0052364D: ;
    if (CMP_NE(MEM32(ebp + 0x34), 2)) goto loc_0052365A; /* jne: not equal / not zero */

loc_00523653: ;
    PUSH32(esp, 0); sub_00523B42(); /* call 0x00523B42 */

loc_00523658: ;
    goto loc_0052365F;

loc_0052365A: ;
    PUSH32(esp, 0); sub_00523C89(); /* call 0x00523C89 */

loc_0052365F: ;
    ebx = MEM32(ebp + 0x20);
    if (TEST_Z(MEM32(ebp + 0x6C), ebx)) goto loc_005236A8; /* je: equal / zero */

loc_00523667: ;
    MEM32(ebp + 0x24) = MEM32(ebp + 0x24) & 0;
    MEM32(ebp + 0x28) = MEM32(ebp + 0x28) & 0;
    eax = MEM32(ebp + 0xC);
    ebx = (uint32_t)(-(int32_t)ebx);
    ebx = ebx & MEM32(ebp + 0x6C);
    (void)0; /* cmp MEM32(ebp + 0x34), 4 - flags set for next jcc */
    MEM32(ebp + 0x2C) = ebx;
    MEM32(ebp + 0x30) = eax;
    esi = ebp + -8;
    if (CMP_NE(MEM32(ebp + 0x34), 4)) goto loc_0052368D; /* jne: not equal / not zero */

loc_00523686: ;
    PUSH32(esp, 0); sub_00523DC0(); /* call 0x00523DC0 */

loc_0052368B: ;
    goto loc_0052369F;

loc_0052368D: ;
    if (CMP_NE(MEM32(ebp + 0x34), 2)) goto loc_0052369A; /* jne: not equal / not zero */

loc_00523693: ;
    PUSH32(esp, 0); sub_00523B42(); /* call 0x00523B42 */

loc_00523698: ;
    goto loc_0052369F;

loc_0052369A: ;
    PUSH32(esp, 0); sub_00523C89(); /* call 0x00523C89 */

loc_0052369F: ;
    MEM32(ebp + 0x20) = MEM32(ebp + 0x20) + ebx;
    MEM32(ebp) = MEM32(ebp) + ebx;
    MEM32(ebp + 8) = MEM32(ebp + 8) - ebx;

loc_005236A8: ;
    eax = MEM32(ebp + 0x6C);
    eax = eax & MEM32(ebp + 8);
    if ((eax == 0)) goto loc_005236E8; /* je: equal / zero */

loc_005236B0: ;
    MEM32(ebp + 8) = MEM32(ebp + 8) - eax;
    ecx = MEM32(ebp + 8);
    MEM32(ebp + 0x28) = MEM32(ebp + 0x28) & 0;
    (void)0; /* cmp MEM32(ebp + 0x34), 4 - flags set for next jcc */
    MEM32(ebp + 0x2C) = eax;
    eax = MEM32(ebp + 0xC);
    MEM32(ebp + 0x24) = ecx;
    MEM32(ebp + 0x30) = eax;
    esi = ebp + -8;
    if (CMP_NE(MEM32(ebp + 0x34), 4)) goto loc_005236D6; /* jne: not equal / not zero */

loc_005236CF: ;
    PUSH32(esp, 0); sub_00523DC0(); /* call 0x00523DC0 */

loc_005236D4: ;
    goto loc_005236E8;

loc_005236D6: ;
    if (CMP_NE(MEM32(ebp + 0x34), 2)) goto loc_005236E3; /* jne: not equal / not zero */

loc_005236DC: ;
    PUSH32(esp, 0); sub_00523B42(); /* call 0x00523B42 */

loc_005236E1: ;
    goto loc_005236E8;

loc_005236E3: ;
    PUSH32(esp, 0); sub_00523C89(); /* call 0x00523C89 */

loc_005236E8: ;
    eax = MEM32(ebp + 0x44);
    eax = eax & 0xFFFFFFC0u;
    (void)0; /* cmp MEM32(ebp + 0x34), 4 - flags set for next jcc */
    MEM32(ebp + 0x74) = eax;
    eax = MEM32(ebp + 0x48);
    edx = ebp + 0x38;
    if (CMP_NE(MEM32(ebp + 0x34), 4)) goto loc_0052382A; /* jne: not equal / not zero */

loc_00523701: ;
    eax = eax & 0xFFFFFFE0u;
    MEM32(ebp + 0x78) = eax;
    eax = MEM32(ebp + 0x20);
    PUSH32(esp, 0); sub_000688A0(); /* call 0x000688A0 */

loc_0052370F: ;
    MEM32(ebp + 0x70) = eax;
    eax = MEM32(ebp + 0x1C);
    edx = ebp + 0x38;
    PUSH32(esp, 0); sub_00068870(); /* call 0x00068870 */

loc_0052371D: ;
    ecx = MEM32(ebp);
    MEM32(ebp + 8) = MEM32(ebp + 8) >> 3;
    MEM32(ebp + 0x7C) = eax;
    eax = MEM32(ebp + -4);
    eax = (uint32_t)((int32_t)eax * (int32_t)MEM32(ebp + 4));
    eax = eax + MEM32(ebp + -8);
    MEM32(ebp + 0xC) = MEM32(ebp + 0xC) >> 2;
    eax = eax + ecx * 4;
    MEM32(ebp + -8) = eax;
    eax = MEM32(ebp + 8);
    MEM32(ebp + 0x6C) = eax;
    esi = MEM32(ebp + -8);
    edi = MEM32(ebp + 0x10);
    edx = MEM32(ebp + 0x14);
    edx = edx << 2;
    ebx = MEM32(ebp + 0x70);
    ecx = MEM32(ebp + 0x7C);
    MEM32(ebp + -12) = esi;
    /* nop */

loc_0052375D: ;
    eax = ebx;
    xmm0 = MEMF(esi); /* movups */
    xmm4 = MEMF(esi + 0x10); /* movups */
    xmm2 = MEMF(esi + edx); /* movups */
    xmm6 = MEMF(esi + edx + 0x10); /* movups */
    xmm1 = xmm0; /* movaps */
    xmm5 = xmm4; /* movaps */
    esi = esi + edx * 2;
    eax = eax | ecx;
    /* TODO: movlhps xmm0, xmm2 */
    /* TODO: movhlps xmm2, xmm1 */
    /* TODO: movlhps xmm4, xmm6 */
    /* TODO: movhlps xmm6, xmm5 */
    xmm1 = MEMF(esi); /* movups */
    xmm5 = MEMF(esi + 0x10); /* movups */
    xmm3 = MEMF(esi + edx); /* movups */
    xmm7 = MEMF(esi + edx + 0x10); /* movups */
    /* TODO: movntps xmmword ptr [edi + eax*4], xmm0 */
    /* TODO: movntps xmmword ptr [edi + eax*4 + 0x10], xmm2 */
    /* TODO: movntps xmmword ptr [edi + eax*4 + 0x40], xmm4 */
    /* TODO: movntps xmmword ptr [edi + eax*4 + 0x50], xmm6 */
    xmm0 = xmm1; /* movaps */
    xmm4 = xmm5; /* movaps */
    /* TODO: movlhps xmm1, xmm3 */
    /* TODO: movhlps xmm3, xmm0 */
    /* TODO: movlhps xmm5, xmm7 */
    /* TODO: movhlps xmm7, xmm4 */
    /* TODO: movntps xmmword ptr [edi + eax*4 + 0x20], xmm1 */
    /* TODO: movntps xmmword ptr [edi + eax*4 + 0x30], xmm3 */
    /* TODO: movntps xmmword ptr [edi + eax*4 + 0x60], xmm5 */
    /* TODO: movntps xmmword ptr [edi + eax*4 + 0x70], xmm7 */
    esi = esi - edx;
    esi = esi - edx;
    /* nop */
    /* nop */
    /* nop */
    /* nop */
    /* nop */
    /* nop */
    /* nop */
    /* nop */
    /* nop */
    /* nop */
    /* nop */
    /* nop */
    /* nop */
    /* nop */
    /* nop */
    /* nop */
    /* nop */
    /* nop */
    /* nop */
    /* nop */
    /* nop */
    /* nop */
    /* nop */
    /* nop */
    /* nop */
    /* nop */
    /* nop */
    /* nop */
    ebx = ebx - MEM32(ebp + 0x74);
    esi = esi + 0x20;
    ebx = ebx & MEM32(ebp + 0x44);
    MEM32(ebp + 8) = MEM32(ebp + 8) - 1;
    if ((MEM32(ebp + 8) != 0)) goto loc_0052375D; /* jne: not equal / not zero */

loc_00523801: ;
    esi = MEM32(ebp + 0x6C);
    ebx = MEM32(ebp + 0x70);
    MEM32(ebp + 8) = esi;
    esi = MEM32(ebp + -12);
    eax = MEM32(ebp + -4);
    ecx = ecx - MEM32(ebp + 0x78);
    esi = esi + eax * 4;
    ecx = ecx & MEM32(ebp + 0x48);
    MEM32(ebp + -12) = esi;
    MEM32(ebp + 0xC) = MEM32(ebp + 0xC) - 1;
    if ((MEM32(ebp + 0xC) != 0)) goto loc_0052375D; /* jne: not equal / not zero */

loc_00523825: ;
    goto loc_00523ABF;

loc_0052382A: ;
    eax = eax & 0xFFFFFF80u;
    MEM32(ebp + 0x78) = eax;
    eax = MEM32(ebp + 0x20);
    PUSH32(esp, 0); sub_000688A0(); /* call 0x000688A0 */

loc_00523838: ;
    MEM32(ebp + 0x70) = eax;
    eax = MEM32(ebp + 0x1C);
    edx = ebp + 0x38;
    PUSH32(esp, 0); sub_00068870(); /* call 0x00068870 */

loc_00523846: ;
    MEM32(ebp + 8) = MEM32(ebp + 8) >> 3;
    (void)0; /* cmp MEM32(ebp + 0x34), 2 - flags set for next jcc */
    MEM32(ebp + 0x7C) = eax;
    if (CMP_NE(MEM32(ebp + 0x34), 2)) goto loc_0052395F; /* jne: not equal / not zero */

loc_00523857: ;
    eax = MEM32(ebp + -4);
    eax = (uint32_t)((int32_t)eax * (int32_t)MEM32(ebp + 4));
    eax = eax + MEM32(ebp + -8);
    ecx = MEM32(ebp);
    MEM32(ebp + 0xC) = MEM32(ebp + 0xC) >> 3;
    eax = eax + ecx * 2;
    MEM32(ebp + -8) = eax;
    eax = MEM32(ebp + 8);
    MEM32(ebp + 0x6C) = eax;
    esi = MEM32(ebp + -8);
    edi = MEM32(ebp + 0x10);
    edx = MEM32(ebp + 0x14);
    edx = edx << 1;
    ebx = MEM32(ebp + 0x70);
    ecx = MEM32(ebp + 0x7C);
    MEM32(ebp + -12) = esi;
    goto loc_0052388D;

    /* nop */

loc_0052388D: ;
    xmm0 = MEMF(esi); /* movups */
    xmm1 = MEMF(esi + edx); /* movups */
    esi = esi + edx;
    eax = ebx;
    xmm4 = MEMF(esi + edx); /* movups */
    xmm5 = MEMF(esi + edx * 2); /* movups */
    eax = eax | ecx;
    xmm2 = xmm0; /* movaps */
    xmm6 = xmm4; /* movaps */
    /* unpckhps xmm6, xmm5 */
    esi = esi + edx * 4;
    /* unpckhps xmm2, xmm1 */
    /* unpcklps xmm4, xmm5 */
    xmm3 = MEMF(esi); /* movups */
    xmm5 = MEMF(esi + edx); /* movups */
    xmm7 = MEMF(esi + edx * 2); /* movups */
    esi = esi - edx;
    /* unpcklps xmm0, xmm1 */
    xmm1 = MEMF(esi); /* movups */
    /* TODO: movntps xmmword ptr [edi + eax*2], xmm0 */
    /* TODO: movntps xmmword ptr [edi + eax*2 + 0x10], xmm4 */
    /* TODO: movntps xmmword ptr [edi + eax*2 + 0x20], xmm2 */
    /* TODO: movntps xmmword ptr [edi + eax*2 + 0x30], xmm6 */
    xmm0 = xmm1; /* movaps */
    xmm4 = xmm5; /* movaps */
    /* unpcklps xmm0, xmm3 */
    /* unpcklps xmm4, xmm7 */
    /* unpckhps xmm1, xmm3 */
    /* unpckhps xmm5, xmm7 */
    /* TODO: movntps xmmword ptr [edi + eax*2 + 0x40], xmm0 */
    /* TODO: movntps xmmword ptr [edi + eax*2 + 0x50], xmm4 */
    /* TODO: movntps xmmword ptr [edi + eax*2 + 0x60], xmm1 */
    /* TODO: movntps xmmword ptr [edi + eax*2 + 0x70], xmm5 */
    esi = esi - edx;
    esi = esi - edx;
    esi = esi - edx;
    esi = esi - edx;
    ebx = ebx - MEM32(ebp + 0x74);
    /* nop */
    /* nop */
    /* nop */
    /* nop */
    /* nop */
    /* nop */
    /* nop */
    /* nop */
    /* nop */
    /* nop */
    /* nop */
    /* nop */
    /* nop */
    /* nop */
    /* nop */
    /* nop */
    /* nop */
    /* nop */
    /* nop */
    /* nop */
    /* nop */
    /* nop */
    /* nop */
    /* nop */
    /* nop */
    /* nop */
    /* nop */
    /* nop */
    esi = esi + 0x10;
    ebx = ebx & MEM32(ebp + 0x44);
    MEM32(ebp + 8) = MEM32(ebp + 8) - 1;
    if ((MEM32(ebp + 8) != 0)) goto loc_0052388D; /* jne: not equal / not zero */

loc_00523936: ;
    esi = MEM32(ebp + 0x6C);
    ebx = MEM32(ebp + 0x70);
    MEM32(ebp + 8) = esi;
    esi = MEM32(ebp + -12);
    eax = MEM32(ebp + -4);
    ecx = ecx - MEM32(ebp + 0x78);
    esi = esi + eax * 8;
    ecx = ecx & MEM32(ebp + 0x48);
    MEM32(ebp + -12) = esi;
    MEM32(ebp + 0xC) = MEM32(ebp + 0xC) - 1;
    if ((MEM32(ebp + 0xC) != 0)) goto loc_0052388D; /* jne: not equal / not zero */

loc_0052395A: ;
    goto loc_00523ABF;

loc_0052395F: ;
    eax = MEM32(ebp);
    eax = (uint32_t)((int32_t)eax * (int32_t)MEM32(ebp + 0x34));
    ecx = MEM32(ebp + -4);
    ecx = (uint32_t)((int32_t)ecx * (int32_t)MEM32(ebp + 4));
    eax = eax + MEM32(ebp + -8);
    eax = eax + ecx;
    MEM32(ebp + 0xC) = MEM32(ebp + 0xC) >> 3;
    MEM32(ebp + -8) = eax;
    eax = MEM32(ebp + 8);
    MEM32(ebp + 0x6C) = eax;
    esi = MEM32(ebp + -8);
    edi = MEM32(ebp + 0x10);
    edx = MEM32(ebp + 0x14);
    ebx = MEM32(ebp + 0x70);
    ecx = MEM32(ebp + 0x7C);
    MEM32(ebp + -12) = esi;
    goto loc_0052399D;

    /* nop */
    /* nop */

loc_0052399D: ;
    /* SSE: movq mm0, qword ptr [esi] */
    /* SSE: movq mm1, qword ptr [esi + edx] */
    esi = esi + edx;
    eax = ebx;
    /* SSE: movq mm4, qword ptr [esi + edx] */
    /* SSE: movq mm5, qword ptr [esi + edx*2] */
    eax = eax | ecx;
    /* SSE: movq mm2, mm0 */
    /* SSE: movq mm6, mm4 */
    /* TODO: punpckhwd mm6, mm5 */
    esi = esi + edx * 4;
    /* TODO: punpckhwd mm2, mm1 */
    /* TODO: punpcklwd mm4, mm5 */
    /* SSE: movq mm3, qword ptr [esi] */
    /* SSE: movq mm5, qword ptr [esi + edx] */
    /* SSE: movq mm7, qword ptr [esi + edx*2] */
    esi = esi - edx;
    /* TODO: punpcklwd mm0, mm1 */
    /* SSE: movq mm1, qword ptr [esi] */
    /* SSE: movq qword ptr [edi + eax], mm0 */
    /* SSE: movq qword ptr [edi + eax + 8], mm4 */
    /* SSE: movq qword ptr [edi + eax + 0x10], mm2 */
    /* SSE: movq qword ptr [edi + eax + 0x18], mm6 */
    /* SSE: movq mm0, mm1 */
    /* SSE: movq mm4, mm5 */
    /* TODO: punpcklwd mm0, mm3 */
    /* TODO: punpcklwd mm4, mm7 */
    /* TODO: punpckhwd mm1, mm3 */
    /* TODO: punpckhwd mm5, mm7 */
    /* SSE: movq qword ptr [edi + eax + 0x20], mm0 */
    /* SSE: movq qword ptr [edi + eax + 0x28], mm4 */
    /* SSE: movq qword ptr [edi + eax + 0x30], mm1 */
    /* SSE: movq qword ptr [edi + eax + 0x38], mm5 */
    esi = esi - edx;
    esi = esi - edx;
    esi = esi - edx;
    esi = esi - edx;
    ebx = ebx - MEM32(ebp + 0x74);
    /* nop */
    /* nop */
    /* nop */
    /* nop */
    /* nop */
    /* nop */
    /* nop */
    /* nop */
    /* nop */
    /* nop */
    /* nop */
    /* nop */
    /* nop */
    /* nop */
    /* nop */
    /* nop */
    /* nop */
    /* nop */
    /* nop */
    /* nop */
    /* nop */
    /* nop */
    /* nop */
    /* nop */
    /* nop */
    /* nop */
    /* nop */
    /* nop */
    esi = esi + 8;
    ebx = ebx & MEM32(ebp + 0x44);
    MEM32(ebp + 8) = MEM32(ebp + 8) - 1;
    if ((MEM32(ebp + 8) != 0)) goto loc_0052399D; /* jne: not equal / not zero */

loc_00523A46: ;
    eax = MEM32(ebp + 0x6C);
    ebx = MEM32(ebp + 0x70);
    MEM32(ebp + 8) = eax;
    esi = MEM32(ebp + -12);
    eax = MEM32(ebp + -4);
    ecx = ecx - MEM32(ebp + 0x78);
    esi = esi + eax * 8;
    ecx = ecx & MEM32(ebp + 0x48);
    MEM32(ebp + -12) = esi;
    MEM32(ebp + 0xC) = MEM32(ebp + 0xC) - 1;
    if ((MEM32(ebp + 0xC) != 0)) goto loc_0052399D; /* jne: not equal / not zero */

loc_00523A6A: ;
    /* emms - empty MMX state */
    goto loc_00523ABF;

loc_00523A6E: ;
    MEM32(ebp + 0x24) = MEM32(ebp + 0x24) & 0;
    MEM32(ebp + 0x28) = MEM32(ebp + 0x28) & 0;
    (void)0; /* cmp MEM32(ebp + 0x34), 4 - flags set for next jcc */
    eax = MEM32(ebp + 0xC);
    MEM32(ebp + 0x30) = eax;
    MEM32(ebp + 0x2C) = ecx;
    esi = ebp + -8;
    if (CMP_NE(MEM32(ebp + 0x34), 4)) goto loc_00523A8F; /* jne: not equal / not zero */

loc_00523A88: ;
    PUSH32(esp, 0); sub_00523DC0(); /* call 0x00523DC0 */

loc_00523A8D: ;
    goto loc_00523ABF;

loc_00523A8F: ;
    if (CMP_NE(MEM32(ebp + 0x34), 2)) goto loc_00523A9C; /* jne: not equal / not zero */

loc_00523A95: ;
    PUSH32(esp, 0); sub_00523B42(); /* call 0x00523B42 */

loc_00523A9A: ;
    goto loc_00523ABF;

loc_00523A9C: ;
    PUSH32(esp, 0); sub_00523C89(); /* call 0x00523C89 */

loc_00523AA1: ;
    goto loc_00523ABF;

loc_00523AA3: ;
    edi = MEM32(ebp + 0x74);
    ecx = ebx;
    ecx = (uint32_t)((int32_t)ecx * (int32_t)MEM32(ebp + 0x78));
    ecx = (uint32_t)((int32_t)ecx * (int32_t)esi);
    esi = MEM32(ebp + 0x6C);
    edx = ecx;
    ecx = ecx >> 2;
    memcpy((void*)XBOX_PTR(edi), (void*)XBOX_PTR(esi), ecx * 4);
    esi += ecx * 4; edi += ecx * 4; ecx = 0; /* rep movsd */
    ecx = edx;
    ecx = ecx & eax;
    memcpy((void*)XBOX_PTR(edi), (void*)XBOX_PTR(esi), ecx);
    esi += ecx; edi += ecx; ecx = 0; /* rep movsb */

loc_00523ABF: ;
    POP32(esp, edi);
    POP32(esp, esi);
    POP32(esp, ebx);
    ebp = ebp + 0x64;
    esp = ebp;
    POP32(esp, ebp); /* leave */
    esp += 24; return; /* ret 20 */

}

/**
 * sub_00523AC9
 * Original: 0x00523AC9 - 0x00523B42 (121 bytes, 48 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00523AC9(void)
{
    uint32_t ebp;
    int _flags = 0; /* fallback flag var */

loc_00523AC9: ;
    PUSH32(esp, ebp);
    ebp = esp;
    PUSH32(esp, ecx);
    eax = MEM32(esi + 0x28);
    PUSH32(esp, ebx);
    ebx = MEM32(esi + 0x2C);
    PUSH32(esp, edi);
    edi = esi + 0x40;
    eax = eax + ebx;
    edx = edi;
    PUSH32(esp, 0); sub_000688A0(); /* call 0x000688A0 */

loc_00523AE1: ;
    ecx = MEM32(esi + 0x30);
    MEM32(ebp + -4) = eax;
    eax = MEM32(esi + 0x24);
    eax = eax + ecx;
    edx = edi;
    PUSH32(esp, 0); sub_00068870(); /* call 0x00068870 */

loc_00523AF3: ;
    ecx = MEM32(esi + 8);
    edx = MEM32(ebp + -4);
    MEM32(esi + 0x58) = MEM32(esi + 0x58) & 0;
    MEM32(esi + 0x5C) = eax;
    eax = MEM32(esi + 0xC);
    eax = eax + MEM32(esi + 0x30);
    ecx = ecx + ebx;
    eax = (uint32_t)((int32_t)eax * (int32_t)MEM32(esi + 4));
    eax = eax + ecx * 4;
    ecx = MEM32(esi + 0x18);
    eax = eax + MEM32(esi);
    ecx = ecx + edx * 4;
    edx = MEM32(esi + 0x38);
    if (TEST_Z(edx, edx)) goto loc_00523B3E; /* je: equal / zero */

loc_00523B1E: ;
    MEM32(ebp + -4) = edx;

loc_00523B21: ;
    ebx = MEM32(eax);
    edx = MEM32(esi + 0x5C);
    MEM32(ecx + edx * 4) = ebx;
    edx = MEM32(edi + 0x10);
    ebx = MEM32(edi + 0x1C);
    ebx = ebx - edx;
    ebx = ebx & edx;
    MEM32(edi + 0x1C) = ebx;
    eax = eax + MEM32(esi + 4);
    MEM32(ebp + -4) = MEM32(ebp + -4) - 1;
    if ((MEM32(ebp + -4) != 0)) goto loc_00523B21; /* jne: not equal / not zero */

loc_00523B3E: ;
    POP32(esp, edi);
    POP32(esp, ebx);
    esp = ebp;
    POP32(esp, ebp); /* leave */
    esp += 4; return; /* ret */

}

/**
 * sub_00523B42
 * Original: 0x00523B42 - 0x00523C0E (204 bytes, 79 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00523B42(void)
{
    uint32_t ebp;
    int _flags = 0; /* fallback flag var */

loc_00523B42: ;
    PUSH32(esp, ebp);
    ebp = esp;
    esp = esp - 0xC;
    ecx = MEM32(esi + 0x2C);
    eax = MEM32(esi + 0x28);
    PUSH32(esp, ebx);
    ebx = MEM32(esi + 0x50);
    PUSH32(esp, edi);
    edi = MEM32(esi + 0x4C);
    edx = esi + 0x40;
    eax = eax + ecx;
    MEM32(esi + 0x64) = edi;
    MEM32(esi + 0x68) = ebx;
    PUSH32(esp, 0); sub_000688A0(); /* call 0x000688A0 */

loc_00523B66: ;
    ecx = MEM32(esi + 0x30);
    MEM32(ebp + -4) = eax;
    eax = MEM32(esi + 0x24);
    eax = eax + ecx;
    edx = esi + 0x40;
    PUSH32(esp, 0); sub_00068870(); /* call 0x00068870 */

loc_00523B79: ;
    edx = MEM32(esi + 0x34);
    ecx = MEM32(esi + 4);
    MEM32(ebp + -4) = MEM32(ebp + -4) >> 1;
    edi = edi >> 1;
    MEM32(esi + 0x4C) = edi;
    edx = edx << 1;
    edi = edx;
    edx = ecx;
    edx = edx - edi;
    edi = MEM32(esi + 0xC);
    edi = edi + MEM32(esi + 0x30);
    eax = eax >> 1;
    edi = (uint32_t)((int32_t)edi * (int32_t)ecx);
    ecx = MEM32(esi + 8);
    ecx = ecx + MEM32(esi + 0x2C);
    MEM32(esi + 0x5C) = eax;
    eax = MEM32(esi + 0x38);
    ecx = edi + ecx * 2;
    ecx = ecx + MEM32(esi);
    edi = MEM32(esi + 0x18);
    ebx = ebx >> 1;
    (void)0; /* test eax, eax - flags set for next jcc */
    MEM32(esi + 0x50) = ebx;
    if (TEST_Z(eax, eax)) goto loc_00523BFE; /* je: equal / zero */

loc_00523BB7: ;
    MEM32(ebp + -12) = eax;

loc_00523BBA: ;
    eax = MEM32(ebp + -4);
    MEM32(esi + 0x58) = eax;
    eax = MEM32(esi + 0x34);
    eax = (uint32_t)((int32_t)eax >> 1);
    if ((eax == 0)) goto loc_00523BEA; /* je: equal / zero */

loc_00523BC7: ;
    MEM32(ebp + -8) = eax;

loc_00523BCA: ;
    eax = MEM32(esi + 0x5C);
    eax = eax | MEM32(esi + 0x58);
    ebx = MEM32(ecx);
    MEM32(edi + eax * 4) = ebx;
    eax = MEM32(esi + 0x4C);
    ebx = MEM32(esi + 0x58);
    ebx = ebx - eax;
    ebx = ebx & eax;
    ecx = ecx + 4;
    MEM32(ebp + -8) = MEM32(ebp + -8) - 1;
    MEM32(esi + 0x58) = ebx;
    if ((MEM32(ebp + -8) != 0)) goto loc_00523BCA; /* jne: not equal / not zero */

loc_00523BEA: ;
    eax = MEM32(esi + 0x50);
    ebx = MEM32(esi + 0x5C);
    ebx = ebx - eax;
    ebx = ebx & eax;
    ecx = ecx + edx;
    MEM32(ebp + -12) = MEM32(ebp + -12) - 1;
    MEM32(esi + 0x5C) = ebx;
    if ((MEM32(ebp + -12) != 0)) goto loc_00523BBA; /* jne: not equal / not zero */

loc_00523BFE: ;
    eax = MEM32(esi + 0x64);
    MEM32(esi + 0x4C) = eax;
    eax = MEM32(esi + 0x68);
    POP32(esp, edi);
    MEM32(esi + 0x50) = eax;
    POP32(esp, ebx);
    esp = ebp;
    POP32(esp, ebp); /* leave */
    esp += 4; return; /* ret */

}

/**
 * sub_00523C0E
 * Original: 0x00523C0E - 0x00523C89 (123 bytes, 48 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00523C0E(void)
{
    uint32_t ebp;
    int _flags = 0; /* fallback flag var */

loc_00523C0E: ;
    PUSH32(esp, ebp);
    ebp = esp;
    PUSH32(esp, ecx);
    eax = MEM32(esi + 0x28);
    PUSH32(esp, ebx);
    ebx = MEM32(esi + 0x2C);
    PUSH32(esp, edi);
    edi = esi + 0x40;
    eax = eax + ebx;
    edx = edi;
    PUSH32(esp, 0); sub_000688A0(); /* call 0x000688A0 */

loc_00523C26: ;
    ecx = MEM32(esi + 0x30);
    MEM32(ebp + -4) = eax;
    eax = MEM32(esi + 0x24);
    eax = eax + ecx;
    edx = edi;
    PUSH32(esp, 0); sub_00068870(); /* call 0x00068870 */

loc_00523C38: ;
    ecx = MEM32(esi + 8);
    edx = MEM32(ebp + -4);
    MEM32(esi + 0x58) = MEM32(esi + 0x58) & 0;
    MEM32(esi + 0x5C) = eax;
    eax = MEM32(esi + 0xC);
    eax = eax + MEM32(esi + 0x30);
    ecx = ecx + ebx;
    eax = (uint32_t)((int32_t)eax * (int32_t)MEM32(esi + 4));
    eax = eax + ecx * 2;
    ecx = MEM32(esi + 0x18);
    eax = eax + MEM32(esi);
    ecx = ecx + edx * 2;
    edx = MEM32(esi + 0x38);
    if (TEST_Z(edx, edx)) goto loc_00523C85; /* je: equal / zero */

loc_00523C63: ;
    MEM32(ebp + -4) = edx;

loc_00523C66: ;
    SET_LO16(ebx, MEM16(eax));
    edx = MEM32(esi + 0x5C);
    MEM16(ecx + edx * 2) = LO16(ebx);
    edx = MEM32(edi + 0x10);
    ebx = MEM32(edi + 0x1C);
    ebx = ebx - edx;
    ebx = ebx & edx;
    MEM32(edi + 0x1C) = ebx;
    eax = eax + MEM32(esi + 4);
    MEM32(ebp + -4) = MEM32(ebp + -4) - 1;
    if ((MEM32(ebp + -4) != 0)) goto loc_00523C66; /* jne: not equal / not zero */

loc_00523C85: ;
    POP32(esp, edi);
    POP32(esp, ebx);
    esp = ebp;
    POP32(esp, ebp); /* leave */
    esp += 4; return; /* ret */

}

/**
 * sub_00523C89
 * Original: 0x00523C89 - 0x00523D4D (196 bytes, 76 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00523C89(void)
{
    uint32_t ebp;
    int _flags = 0; /* fallback flag var */

loc_00523C89: ;
    PUSH32(esp, ebp);
    ebp = esp;
    esp = esp - 0xC;
    ecx = MEM32(esi + 0x2C);
    eax = MEM32(esi + 0x28);
    PUSH32(esp, ebx);
    ebx = MEM32(esi + 0x50);
    PUSH32(esp, edi);
    edi = MEM32(esi + 0x4C);
    edx = esi + 0x40;
    eax = eax + ecx;
    MEM32(esi + 0x64) = edi;
    MEM32(esi + 0x68) = ebx;
    PUSH32(esp, 0); sub_000688A0(); /* call 0x000688A0 */

loc_00523CAD: ;
    ecx = MEM32(esi + 0x30);
    MEM32(ebp + -4) = eax;
    eax = MEM32(esi + 0x24);
    eax = eax + ecx;
    edx = esi + 0x40;
    PUSH32(esp, 0); sub_00068870(); /* call 0x00068870 */

loc_00523CC0: ;
    ecx = MEM32(esi + 0xC);
    ecx = ecx + MEM32(esi + 0x30);
    MEM32(ebp + -4) = MEM32(ebp + -4) >> 1;
    edi = edi >> 1;
    MEM32(esi + 0x4C) = edi;
    edi = MEM32(esi + 4);
    ecx = (uint32_t)((int32_t)ecx * (int32_t)edi);
    ecx = ecx + MEM32(esi + 8);
    eax = eax >> 1;
    ecx = ecx + MEM32(esi + 0x2C);
    edx = edi;
    edx = edx - MEM32(esi + 0x34);
    ecx = ecx + MEM32(esi);
    edi = MEM32(esi + 0x18);
    MEM32(esi + 0x5C) = eax;
    eax = MEM32(esi + 0x38);
    ebx = ebx >> 1;
    (void)0; /* test eax, eax - flags set for next jcc */
    MEM32(esi + 0x50) = ebx;
    if (TEST_Z(eax, eax)) goto loc_00523D3D; /* je: equal / zero */

loc_00523CF5: ;
    MEM32(ebp + -12) = eax;

loc_00523CF8: ;
    eax = MEM32(ebp + -4);
    MEM32(esi + 0x58) = eax;
    eax = MEM32(esi + 0x34);
    eax = (uint32_t)((int32_t)eax >> 1);
    if ((eax == 0)) goto loc_00523D29; /* je: equal / zero */

loc_00523D05: ;
    MEM32(ebp + -8) = eax;

loc_00523D08: ;
    eax = MEM32(esi + 0x5C);
    eax = eax | MEM32(esi + 0x58);
    SET_LO16(ebx, MEM16(ecx));
    MEM16(edi + eax * 2) = LO16(ebx);
    eax = MEM32(esi + 0x4C);
    ebx = MEM32(esi + 0x58);
    ecx++;
    ebx = ebx - eax;
    ebx = ebx & eax;
    ecx++;
    MEM32(ebp + -8) = MEM32(ebp + -8) - 1;
    MEM32(esi + 0x58) = ebx;
    if ((MEM32(ebp + -8) != 0)) goto loc_00523D08; /* jne: not equal / not zero */

loc_00523D29: ;
    eax = MEM32(esi + 0x50);
    ebx = MEM32(esi + 0x5C);
    ebx = ebx - eax;
    ebx = ebx & eax;
    ecx = ecx + edx;
    MEM32(ebp + -12) = MEM32(ebp + -12) - 1;
    MEM32(esi + 0x5C) = ebx;
    if ((MEM32(ebp + -12) != 0)) goto loc_00523CF8; /* jne: not equal / not zero */

loc_00523D3D: ;
    eax = MEM32(esi + 0x64);
    MEM32(esi + 0x4C) = eax;
    eax = MEM32(esi + 0x68);
    POP32(esp, edi);
    MEM32(esi + 0x50) = eax;
    POP32(esp, ebx);
    esp = ebp;
    POP32(esp, ebp); /* leave */
    esp += 4; return; /* ret */

}

/**
 * sub_00523D4D
 * Original: 0x00523D4D - 0x00523DC0 (115 bytes, 46 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00523D4D(void)
{
    uint32_t ebp;
    int _flags = 0; /* fallback flag var */

loc_00523D4D: ;
    PUSH32(esp, ebp);
    ebp = esp;
    PUSH32(esp, ecx);
    eax = MEM32(esi + 0x28);
    PUSH32(esp, ebx);
    ebx = MEM32(esi + 0x2C);
    PUSH32(esp, edi);
    edi = esi + 0x40;
    eax = eax + ebx;
    edx = edi;
    PUSH32(esp, 0); sub_000688A0(); /* call 0x000688A0 */

loc_00523D65: ;
    ecx = MEM32(esi + 0x30);
    MEM32(ebp + -4) = eax;
    eax = MEM32(esi + 0x24);
    eax = eax + ecx;
    edx = edi;
    PUSH32(esp, 0); sub_00068870(); /* call 0x00068870 */

loc_00523D77: ;
    ecx = MEM32(esi + 0x18);
    edx = MEM32(esi + 0x38);
    MEM32(esi + 0x58) = MEM32(esi + 0x58) & 0;
    ecx = ecx + MEM32(ebp + -4);
    MEM32(esi + 0x5C) = eax;
    eax = MEM32(esi + 0xC);
    eax = eax + MEM32(esi + 0x30);
    eax = (uint32_t)((int32_t)eax * (int32_t)MEM32(esi + 4));
    eax = eax + MEM32(esi + 8);
    eax = eax + ebx;
    eax = eax + MEM32(esi);
    if (TEST_Z(edx, edx)) goto loc_00523DBC; /* je: equal / zero */

loc_00523D9C: ;
    MEM32(ebp + -4) = edx;

loc_00523D9F: ;
    SET_LO8(ebx, MEM8(eax));
    edx = MEM32(esi + 0x5C);
    MEM8(ecx + edx) = LO8(ebx);
    edx = MEM32(edi + 0x10);
    ebx = MEM32(edi + 0x1C);
    ebx = ebx - edx;
    ebx = ebx & edx;
    MEM32(edi + 0x1C) = ebx;
    eax = eax + MEM32(esi + 4);
    MEM32(ebp + -4) = MEM32(ebp + -4) - 1;
    if ((MEM32(ebp + -4) != 0)) goto loc_00523D9F; /* jne: not equal / not zero */

loc_00523DBC: ;
    POP32(esp, edi);
    POP32(esp, ebx);
    esp = ebp;
    POP32(esp, ebp); /* leave */
    esp += 4; return; /* ret */

}

/**
 * sub_00523DC0
 * Original: 0x00523DC0 - 0x00523E94 (212 bytes, 81 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00523DC0(void)
{
    uint32_t ebp;
    int _flags = 0; /* fallback flag var */

loc_00523DC0: ;
    PUSH32(esp, ebp);
    ebp = esp;
    esp = esp - 0xC;
    ecx = MEM32(esi + 0x2C);
    eax = MEM32(esi + 0x28);
    PUSH32(esp, ebx);
    ebx = MEM32(esi + 0x50);
    PUSH32(esp, edi);
    edi = MEM32(esi + 0x4C);
    edx = esi + 0x40;
    eax = eax + ecx;
    MEM32(esi + 0x64) = edi;
    MEM32(esi + 0x68) = ebx;
    PUSH32(esp, 0); sub_000688A0(); /* call 0x000688A0 */

loc_00523DE4: ;
    ecx = MEM32(esi + 0x30);
    MEM32(ebp + -4) = eax;
    eax = MEM32(esi + 0x24);
    eax = eax + ecx;
    edx = esi + 0x40;
    PUSH32(esp, 0); sub_00068870(); /* call 0x00068870 */

loc_00523DF7: ;
    edx = MEM32(esi + 0x34);
    ecx = MEM32(esi + 4);
    MEM32(ebp + -4) = MEM32(ebp + -4) >> 1;
    edi = edi >> 1;
    MEM32(esi + 0x4C) = edi;
    edx = edx << 2;
    edi = edx;
    edx = ecx;
    edx = edx - edi;
    edi = MEM32(esi + 0xC);
    edi = edi + MEM32(esi + 0x30);
    eax = eax >> 1;
    edi = (uint32_t)((int32_t)edi * (int32_t)ecx);
    ecx = MEM32(esi + 8);
    ecx = ecx + MEM32(esi + 0x2C);
    MEM32(esi + 0x5C) = eax;
    eax = MEM32(esi + 0x38);
    ecx = edi + ecx * 4;
    ecx = ecx + MEM32(esi);
    edi = MEM32(esi + 0x18);
    ebx = ebx >> 1;
    (void)0; /* test eax, eax - flags set for next jcc */
    MEM32(esi + 0x50) = ebx;
    if (TEST_Z(eax, eax)) goto loc_00523E84; /* je: equal / zero */

loc_00523E36: ;
    MEM32(ebp + -12) = eax;

loc_00523E39: ;
    eax = MEM32(ebp + -4);
    MEM32(esi + 0x58) = eax;
    eax = MEM32(esi + 0x34);
    eax = (uint32_t)((int32_t)eax >> 1);
    if ((eax == 0)) goto loc_00523E70; /* je: equal / zero */

loc_00523E46: ;
    MEM32(ebp + -8) = eax;

loc_00523E49: ;
    eax = MEM32(esi + 0x5C);
    eax = eax | MEM32(esi + 0x58);
    ebx = MEM32(ecx);
    MEM32(edi + eax * 8) = ebx;
    ebx = MEM32(ecx + 4);
    MEM32(edi + eax * 8 + 4) = ebx;
    eax = MEM32(esi + 0x4C);
    ebx = MEM32(esi + 0x58);
    ebx = ebx - eax;
    ebx = ebx & eax;
    ecx = ecx + 8;
    MEM32(ebp + -8) = MEM32(ebp + -8) - 1;
    MEM32(esi + 0x58) = ebx;
    if ((MEM32(ebp + -8) != 0)) goto loc_00523E49; /* jne: not equal / not zero */

loc_00523E70: ;
    eax = MEM32(esi + 0x50);
    ebx = MEM32(esi + 0x5C);
    ebx = ebx - eax;
    ebx = ebx & eax;
    ecx = ecx + edx;
    MEM32(ebp + -12) = MEM32(ebp + -12) - 1;
    MEM32(esi + 0x5C) = ebx;
    if ((MEM32(ebp + -12) != 0)) goto loc_00523E39; /* jne: not equal / not zero */

loc_00523E84: ;
    eax = MEM32(esi + 0x64);
    MEM32(esi + 0x4C) = eax;
    eax = MEM32(esi + 0x68);
    POP32(esp, edi);
    MEM32(esi + 0x50) = eax;
    POP32(esp, ebx);
    esp = ebp;
    POP32(esp, ebp); /* leave */
    esp += 4; return; /* ret */

}

/**
 * sub_00523E94
 * Original: 0x00523E94 - 0x00523EC5 (49 bytes, 19 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00523E94(void)
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

loc_00523E94: ;
    fp_push(MEMF(esp + 4)); /* fld float */
    fp_st1() -= fp_top(); fp_pop(); /* fsub */
    _fpu_cmp = (fp_top() < fp_st1()) ? -1 : (fp_top() > fp_st1()) ? 1 : 0; /* fcom dword ptr [esp + 0xc] */
    /* fnstsw ax - store FPU status word */
    if (1 /* jp after test - parity */) goto loc_00523EBE; /* jp: parity */

loc_00523EA7: ;
    fp_push(MEMF(esp + 0xC)); /* fld float */
    fp_top() = -fp_top(); /* fchs */
    /* fld st(1) */
    _fpu_cmp = (fp_top() < fp_st1()) ? -1 : (fp_top() > fp_st1()) ? 1 : 0; /* fcompp  */
    /* fnstsw ax - store FPU status word */
    /* fstp st(0) */
    if (TEST_NZ(HI8(eax), 0x41)) goto loc_00523EC0; /* jne: not equal / not zero */

loc_00523EBA: ;
    SET_LO8(eax, 1);
    goto loc_00523EC2;

loc_00523EBE: ;
    /* fstp st(0) */

loc_00523EC0: ;
    SET_LO8(eax, 0); /* xor self */

loc_00523EC2: ;
    esp += 16; return; /* ret 12 */

    #undef fp_push
    #undef fp_pop
    #undef fp_popp
    #undef fp_top
    #undef fp_st1
}

/**
 * sub_00523EC5
 * Original: 0x00523EC5 - 0x00523EE0 (27 bytes, 11 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00523EC5(void)
{
    int _cf = 0; /* carry flag */

loc_00523EC5: ;
    SET_LO8(eax, LO8(eax) - 1);
    SET_LO8(eax, (uint32_t)(-(int32_t)LO8(eax)));
    PUSH32(esp, esi);
    PUSH32(esp, MEM32(esp + 8));
    SET_LO8(eax, _cf ? 0xFFFFFFFF : 0); /* sbb self (CF extend) */
    esi = ecx;
    SET_LO8(eax, LO8(eax) + 1);
    MEM8(esi + 0x10) = LO8(eax);
    PUSH32(esp, 0); sub_00523EE0(); /* call 0x00523EE0 */

loc_00523EDC: ;
    POP32(esp, esi);
    esp += 8; return; /* ret 4 */

}

/**
 * sub_00523EE0
 * Original: 0x00523EE0 - 0x00523F13 (51 bytes, 22 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00523EE0(void)
{
    double _fp_stack[8];
    int _fp_top = 0;
    #define fp_push(v) (_fp_stack[--_fp_top & 7] = (v))
    #define fp_pop() (_fp_top++)
    #define fp_popp() (fp_pop())
    #define fp_top() _fp_stack[_fp_top & 7]
    #define fp_st1() _fp_stack[(_fp_top + 1) & 7]

loc_00523EE0: ;
    PUSH32(esp, edi);
    PUSH32(esp, 0xFFFFFFFAu);
    POP32(esp, eax);
    edi = esi + 0x18;
    MEM32(edi) = eax; edi += 4; /* stosd */
    MEM32(edi) = eax; edi += 4; /* stosd */
    eax = 0; /* xor self */
    edi = esi;
    MEM32(edi) = eax; edi += 4; /* stosd */
    MEM32(edi) = eax; edi += 4; /* stosd */
    MEM32(edi) = eax; edi += 4; /* stosd */
    MEM32(edi) = eax; edi += 4; /* stosd */
    eax = esi + 0x20;
    PUSH32(esp, 0); sub_00524712(); /* call 0x00524712 */

loc_00523EF9: ;
    PUSH32(esp, MEM32(esp + 8));
    edx = esi + 0x1C0;
    PUSH32(esp, 0); sub_00524820(); /* call 0x00524820 */

loc_00523F08: ;
    fp_push(0.0); /* fldz */
    eax = 0; /* xor self */
    MEMF(esi + 0x14) = (float)fp_top(); fp_popp(); /* fstp */
    POP32(esp, edi);
    esp += 8; return; /* ret 4 */

    #undef fp_push
    #undef fp_pop
    #undef fp_popp
    #undef fp_top
    #undef fp_st1
}

/**
 * sub_00523F13
 * Original: 0x00523F13 - 0x00523F74 (97 bytes, 32 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00523F13(void)
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

loc_00523F13: ;
    PUSH32(esp, ebp);
    ebp = esp;
    PUSH32(esp, ecx);
    PUSH32(esp, esi);
    PUSH32(esp, edi);
    edi = eax;
    esi = ecx;
    MEM32(edi) = 0x20;
    if (CMP_EQ(MEM8(esi + 0x10), 0)) { sub_00523F74(); return; } /* je: equal / zero */

loc_00523F29: ;
    PUSH32(esp, MEM32(ebp + 8));
    PUSH32(esp, 0); sub_005240CC(); /* call 0x005240CC */

loc_00523F31: ;
    MEMF(ebp + -4) = (float)fp_top(); fp_pop(); /* fst */
    /* fld st(0) */
    fp_st1() += fp_top(); fp_pop(); /* fadd */
    MEMF(esi + 0x14) = (float)fp_top(); fp_popp(); /* fstp */
    _fpu_cmp = (fp_top() < fp_st1()) ? -1 : (fp_top() > fp_st1()) ? 1 : 0; /* fcomp qword ptr [0x6492f0] */
    /* fnstsw ax - store FPU status word */
    if (TEST_NZ(HI8(eax), 0x41)) goto loc_00523F54; /* jne: not equal / not zero */

loc_00523F49: ;
    eax = esi + 0x1C0;
    PUSH32(esp, 0); sub_0052489B(); /* call 0x0052489B */

loc_00523F54: ;
    PUSH32(esp, MEM32(edi));
    edi = MEM32(ebp + 8);
    PUSH32(esp, 0); sub_00524480(); /* call 0x00524480 */

loc_00523F5E: ;
    fp_push(MEMF(esi + 0x14)); /* fld float */
    fp_st1() += fp_top(); fp_pop(); /* fadd */
    ecx = MEM32(ebp + -4);
    edx = MEM32(ebp + 0xC);
    MEMF(esi + 0x14) = (float)fp_top(); fp_popp(); /* fstp */
    MEM32(edx) = ecx;
    g_seh_ebp = ebp; sub_00523FF0(); return; /* tail jmp 0x00523FF0 */

    #undef fp_push
    #undef fp_pop
    #undef fp_popp
    #undef fp_top
    #undef fp_st1
}

/**
 * sub_00523FF6
 * Original: 0x00523FF6 - 0x0052401E (40 bytes, 14 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00523FF6(void)
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

loc_00523FF6: ;
    PUSH32(esp, ebp);
    ebp = esp;
    PUSH32(esp, ecx);
    PUSH32(esp, MEM32(ebp + 8));
    eax = ebp + -4;
    MEM32(ebp + -4) = 0x20;
    PUSH32(esp, 0); sub_005240CC(); /* call 0x005240CC */

loc_0052400C: ;
    _fpu_cmp = (fp_top() < fp_st1()) ? -1 : (fp_top() > fp_st1()) ? 1 : 0; /* fcomp dword ptr [0x648cf8] */
    /* fnstsw ax - store FPU status word */
    if (TEST_NZ(HI8(eax), 0x41)) { sub_0052401E(); return; } /* jne: not equal / not zero */

loc_00524019: ;
    eax = 0; /* xor self */
    eax++;
    g_seh_ebp = ebp; sub_00524020(); return; /* tail jmp 0x00524020 */

    #undef fp_push
    #undef fp_pop
    #undef fp_popp
    #undef fp_top
    #undef fp_st1
}

/**
 * sub_00524024
 * Original: 0x00524024 - 0x005240B1 (141 bytes, 48 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00524024(void)
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

loc_00524024: ;
    PUSH32(esp, ebp);
    ebp = esp;
    PUSH32(esp, ecx);
    if (CMP_EQ(MEM8(ecx + 0x10), 0)) goto loc_005240A3; /* je: equal / zero */

loc_0052402E: ;
    fp_push(0.0); /* fldz */
    MEM32(edx) = 0x20;
    MEMF(ebp + -4) = (float)fp_top(); fp_popp(); /* fstp */
    eax = 0; /* xor self */
    fp_push(0.0); /* fldz */

loc_0052403D: ;
    if (CMP_EQ(MEM8(eax + ecx), 0)) goto loc_0052404F; /* je: equal / zero */

loc_00524043: ;
    fp_push(MEMF(ebp + -4)); /* fld float */
    fp_st1() += fp_top(); fp_pop(); /* fadd */
    MEMF(ebp + -4) = (float)fp_top(); fp_popp(); /* fstp */

loc_0052404F: ;
    eax++;
    if (CMP_L(eax, 0x10)) goto loc_0052403D; /* jl: less (signed <) */

loc_00524055: ;
    fp_push(MEMF(ebp + -4)); /* fld float */
    _fpu_cmp = (fp_top() < fp_st1()) ? -1 : (fp_top() > fp_st1()) ? 1 : 0; /* fcomp dword ptr [ecx + 0x14] */
    /* fnstsw ax - store FPU status word */
    if (TEST_NZ(HI8(eax), 0x41)) goto loc_00524070; /* jne: not equal / not zero */

loc_00524062: ;
    /* fstp st(0) */
    fp_push(MEMF(ebp + -4)); /* fld float */
    fp_st1() -= fp_top(); fp_pop(); /* fsub */
    MEM32(edx) = 0x4A;

loc_00524070: ;
    fp_push(MEMF(ecx + 0x14)); /* fld float */
    _fpu_cmp = (fp_top() < fp_st1()) ? -1 : (fp_top() > fp_st1()) ? 1 : 0; /* fcomp qword ptr [0x648d00] */
    /* fnstsw ax - store FPU status word */
    if (1 /* jp after test - parity */) goto loc_005240AF; /* jp: parity */

loc_00524080: ;
    fp_push(MEMF(ecx + 0x14)); /* fld float */
    /* FPU: fsubr qword ptr [0x648d00] */
    MEMF(ebp + -4) = (float)fp_top(); fp_popp(); /* fstp */
    _fpu_cmp = (fp_top() < fp_st1()) ? -1 : (fp_top() > fp_st1()) ? 1 : 0; /* fcom dword ptr [ebp - 4] */
    /* fnstsw ax - store FPU status word */
    if (1 /* jp after test - parity */) goto loc_005240AF; /* jp: parity */

loc_00524096: ;
    /* fstp st(0) */
    MEM32(edx) = 0x4C;
    fp_push(MEMF(ebp + -4)); /* fld float */
    esp = ebp;
    POP32(esp, ebp); /* leave */
    esp += 4; return; /* ret */

loc_005240A3: ;
    fp_push(MEMF(0x648CFC)); /* fld float */
    MEM32(edx) = 0x4B;

loc_005240AF: ;
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
 * sub_005240B1
 * Original: 0x005240B1 - 0x005240BE (13 bytes, 5 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_005240B1(void)
{
    int _flags = 0; /* fallback flag var */

loc_005240B1: ;
    eax = MEM32(eax + 8);
    if (TEST_Z(eax, 0xE0000000u)) { sub_005240BE(); return; } /* je: equal / zero */

loc_005240BB: ;
    eax = 0; /* xor self */
    esp += 4; return; /* ret */

}

/**
 * sub_005240CC
 * Original: 0x005240CC - 0x00524192 (198 bytes, 76 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_005240CC(void)
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

loc_005240CC: ;
    PUSH32(esp, ebp);
    ebp = esp;
    esp = esp - 0x14;
    PUSH32(esp, ebx);
    PUSH32(esp, edi);
    PUSH32(esp, 0x20);
    edi = eax;
    POP32(esp, ebx);
    MEM32(edi) = ebx;
    if (CMP_EQ(MEM8(esi + 0x10), 0)) { sub_00524192(); return; } /* je: equal / zero */

loc_005240E5: ;
    MEM32(ebp + -4) = MEM32(ebp + -4) & 0;

loc_005240E9: ;
    ecx = MEM32(ebp + -4);
    eax = MEM32(ebp + 8);
    PUSH32(esp, 0); sub_00527E41(); /* call 0x00527E41 */

loc_005240F4: ;
    ecx = MEM32(ebp + -4);
    MEM32(ebp + -4) = MEM32(ebp + -4) + 1;
    (void)0; /* cmp MEM32(ebp + -4), 3 - flags set for next jcc */
    MEM8(ebp + ecx + -20) = LO8(eax);
    if (CMP_L(MEM32(ebp + -4), 3)) goto loc_005240E9; /* jl: less (signed <) */

loc_00524104: ;
    fp_push(MEMF(esi + 0x14)); /* fld float */
    edx = MEM32(ebp + 8);
    eax = ebp + -4;
    PUSH32(esp, eax);
    PUSH32(esp, ecx);
    MEMF(esp) = (float)fp_top(); fp_popp(); /* fstp */
    PUSH32(esp, MEM32(ebp + -20));
    ecx = esi;
    MEM32(ebp + -4) = ebx;
    PUSH32(esp, 0); sub_005242A6(); /* call 0x005242A6 */

loc_0052411F: ;
    MEMF(ebp + -12) = (float)fp_top(); fp_pop(); /* fst */
    eax = MEM32(ebp + -4);
    MEMF(ebp + -8) = (float)fp_top(); fp_popp(); /* fstp */
    edx = MEM32(ebp + 8);
    MEM32(edi) = eax;
    fp_push(MEMF(esi + 0x14)); /* fld float */
    eax = ebp + -4;
    PUSH32(esp, eax);
    PUSH32(esp, ecx);
    MEMF(esp) = (float)fp_top(); fp_popp(); /* fstp */
    PUSH32(esp, MEM32(ebp + -19));
    PUSH32(esp, esi);
    PUSH32(esp, 0); sub_005242DC(); /* call 0x005242DC */

loc_00524141: ;
    _fpu_cmp = (fp_top() < fp_st1()) ? -1 : (fp_top() > fp_st1()) ? 1 : 0; /* fcom dword ptr [ebp - 0xc] */
    /* fnstsw ax - store FPU status word */
    if (TEST_Z(HI8(eax), 0x41)) goto loc_0052414F; /* je: equal / zero */

loc_0052414B: ;
    if (CMP_NE(MEM32(edi), ebx)) goto loc_00524159; /* jne: not equal / not zero */

loc_0052414F: ;
    eax = MEM32(ebp + -4);
    MEMF(ebp + -8) = (float)fp_top(); fp_popp(); /* fstp */
    MEM32(edi) = eax;
    goto loc_0052415B;

loc_00524159: ;
    /* fstp st(0) */

loc_0052415B: ;
    fp_push(MEMF(esi + 0x14)); /* fld float */
    edx = MEM32(ebp + 8);
    eax = ebp + -4;
    PUSH32(esp, eax);
    PUSH32(esp, ecx);
    MEMF(esp) = (float)fp_top(); fp_popp(); /* fstp */
    PUSH32(esp, MEM32(ebp + -18));
    ecx = esi;
    PUSH32(esp, 0); sub_0052430F(); /* call 0x0052430F */

loc_00524173: ;
    _fpu_cmp = (fp_top() < fp_st1()) ? -1 : (fp_top() > fp_st1()) ? 1 : 0; /* fcom dword ptr [ebp - 8] */
    /* fnstsw ax - store FPU status word */
    if (TEST_Z(HI8(eax), 0x41)) goto loc_00524181; /* je: equal / zero */

loc_0052417D: ;
    if (CMP_NE(MEM32(edi), ebx)) goto loc_0052418B; /* jne: not equal / not zero */

loc_00524181: ;
    eax = MEM32(ebp + -4);
    MEMF(ebp + -8) = (float)fp_top(); fp_popp(); /* fstp */
    MEM32(edi) = eax;
    goto loc_0052418D;

loc_0052418B: ;
    /* fstp st(0) */

loc_0052418D: ;
    fp_push(MEMF(ebp + -8)); /* fld float */
    g_seh_ebp = ebp; sub_0052420F(); return; /* tail jmp 0x0052420F */

    #undef fp_push
    #undef fp_pop
    #undef fp_popp
    #undef fp_top
    #undef fp_st1
}

/**
 * sub_00524215
 * Original: 0x00524215 - 0x00524247 (50 bytes, 19 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00524215(void)
{
    uint32_t ebp;

loc_00524215: ;
    PUSH32(esp, ebp);
    ebp = esp;
    PUSH32(esp, ecx);
    eax = MEM32(ecx + 8);
    PUSH32(esp, MEM32(ebp + 0xC));
    MEM32(ebp + -4) = eax;
    eax = 0; /* xor self */
    SET_LO8(eax, MEM8(ecx + 8));
    PUSH32(esp, 0);
    eax = eax & 0xFFFFFF0Fu;
    PUSH32(esp, eax);
    eax = MEM32(ecx + 4);
    PUSH32(esp, MEM32(ebp + 8));
    eax = eax >> 0x1C;
    eax = eax & 3;
    PUSH32(esp, 0); sub_005245B8(); /* call 0x005245B8 */

loc_00524240: ;
    eax = ZX8(LO8(eax));
    esp = ebp;
    POP32(esp, ebp); /* leave */
    esp += 12; return; /* ret 8 */

}

/**
 * sub_00524247
 * Original: 0x00524247 - 0x00524275 (46 bytes, 14 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00524247(void)
{

loc_00524247: ;
    eax = MEM32(ecx + 4);
    PUSH32(esp, MEM32(esp + 8));
    edx = eax;
    edx = edx >> 0xF;
    PUSH32(esp, 1);
    edx = edx & 0xFFFFFF0Fu;
    PUSH32(esp, edx);
    PUSH32(esp, MEM32(esp + 0x10));
    edx = MEM32(esp + 0x1C);
    eax = eax >> 0xD;
    eax = eax & 3;
    PUSH32(esp, 0); sub_005245B8(); /* call 0x005245B8 */

loc_0052426F: ;
    eax = ZX8(LO8(eax));
    esp += 16; return; /* ret 12 */

}

/**
 * sub_00524275
 * Original: 0x00524275 - 0x005242A6 (49 bytes, 19 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00524275(void)
{
    uint32_t ebp;

loc_00524275: ;
    PUSH32(esp, ebp);
    ebp = esp;
    PUSH32(esp, ecx);
    eax = MEM32(ecx + 4);
    PUSH32(esp, MEM32(ebp + 0xC));
    MEM32(ebp + -4) = eax;
    eax = 0; /* xor self */
    SET_LO8(eax, MEM8(ecx + 4));
    PUSH32(esp, 2);
    eax = eax & 0xFFFFFF0Fu;
    PUSH32(esp, eax);
    eax = MEM32(ecx);
    PUSH32(esp, MEM32(ebp + 8));
    eax = eax >> 0x1C;
    eax = eax & 3;
    PUSH32(esp, 0); sub_005245B8(); /* call 0x005245B8 */

loc_0052429F: ;
    eax = ZX8(LO8(eax));
    esp = ebp;
    POP32(esp, ebp); /* leave */
    esp += 12; return; /* ret 8 */

}

/**
 * sub_005242A6
 * Original: 0x005242A6 - 0x005242DC (54 bytes, 21 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_005242A6(void)
{
    uint32_t ebp;
    double _fp_stack[8];
    int _fp_top = 0;
    #define fp_push(v) (_fp_stack[--_fp_top & 7] = (v))
    #define fp_pop() (_fp_top++)
    #define fp_popp() (fp_pop())
    #define fp_top() _fp_stack[_fp_top & 7]
    #define fp_st1() _fp_stack[(_fp_top + 1) & 7]

loc_005242A6: ;
    PUSH32(esp, ebp);
    ebp = esp;
    PUSH32(esp, ecx);
    eax = MEM32(edx + 8);
    fp_push(MEMF(ebp + 0xC)); /* fld float */
    PUSH32(esp, MEM32(ebp + 0x10));
    MEM32(ebp + -4) = eax;
    eax = 0; /* xor self */
    SET_LO8(eax, MEM8(edx + 8));
    PUSH32(esp, ecx);
    MEMF(esp) = (float)fp_top(); fp_popp(); /* fstp */
    PUSH32(esp, MEM32(ebp + 8));
    PUSH32(esp, 0);
    eax = eax & 0xFFFFFF0Fu;
    PUSH32(esp, eax);
    eax = MEM32(edx + 4);
    eax = eax >> 0x1C;
    eax = eax & 3;
    PUSH32(esp, 0); sub_005245FB(); /* call 0x005245FB */

loc_005242D8: ;
    esp = ebp;
    POP32(esp, ebp); /* leave */
    esp += 16; return; /* ret 12 */

    #undef fp_push
    #undef fp_pop
    #undef fp_popp
    #undef fp_top
    #undef fp_st1
}

/**
 * sub_005242DC
 * Original: 0x005242DC - 0x0052430F (51 bytes, 16 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_005242DC(void)
{
    double _fp_stack[8];
    int _fp_top = 0;
    #define fp_push(v) (_fp_stack[--_fp_top & 7] = (v))
    #define fp_pop() (_fp_top++)
    #define fp_popp() (fp_pop())
    #define fp_top() _fp_stack[_fp_top & 7]
    #define fp_st1() _fp_stack[(_fp_top + 1) & 7]

loc_005242DC: ;
    PUSH32(esp, MEM32(esp + 0x10));
    fp_push(MEMF(esp + 0x10)); /* fld float */
    eax = MEM32(edx + 4);
    PUSH32(esp, ecx);
    MEMF(esp) = (float)fp_top(); fp_popp(); /* fstp */
    PUSH32(esp, MEM32(esp + 0x10));
    ecx = eax;
    ecx = ecx >> 0xF;
    ecx = ecx & 0xFFFFFF0Fu;
    PUSH32(esp, 1);
    eax = eax >> 0xD;
    PUSH32(esp, ecx);
    ecx = MEM32(esp + 0x18);
    eax = eax & 3;
    PUSH32(esp, 0); sub_005245FB(); /* call 0x005245FB */

loc_0052430C: ;
    esp += 20; return; /* ret 16 */

    #undef fp_push
    #undef fp_pop
    #undef fp_popp
    #undef fp_top
    #undef fp_st1
}

/**
 * sub_0052430F
 * Original: 0x0052430F - 0x00524344 (53 bytes, 21 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0052430F(void)
{
    uint32_t ebp;
    double _fp_stack[8];
    int _fp_top = 0;
    #define fp_push(v) (_fp_stack[--_fp_top & 7] = (v))
    #define fp_pop() (_fp_top++)
    #define fp_popp() (fp_pop())
    #define fp_top() _fp_stack[_fp_top & 7]
    #define fp_st1() _fp_stack[(_fp_top + 1) & 7]

loc_0052430F: ;
    PUSH32(esp, ebp);
    ebp = esp;
    PUSH32(esp, ecx);
    eax = MEM32(edx + 4);
    fp_push(MEMF(ebp + 0xC)); /* fld float */
    PUSH32(esp, MEM32(ebp + 0x10));
    MEM32(ebp + -4) = eax;
    eax = 0; /* xor self */
    SET_LO8(eax, MEM8(edx + 4));
    PUSH32(esp, ecx);
    MEMF(esp) = (float)fp_top(); fp_popp(); /* fstp */
    PUSH32(esp, MEM32(ebp + 8));
    PUSH32(esp, 2);
    eax = eax & 0xFFFFFF0Fu;
    PUSH32(esp, eax);
    eax = MEM32(edx);
    eax = eax >> 0x1C;
    eax = eax & 3;
    PUSH32(esp, 0); sub_005245FB(); /* call 0x005245FB */

loc_00524340: ;
    esp = ebp;
    POP32(esp, ebp); /* leave */
    esp += 16; return; /* ret 12 */

    #undef fp_push
    #undef fp_pop
    #undef fp_popp
    #undef fp_top
    #undef fp_st1
}

/**
 * sub_00524344
 * Original: 0x00524344 - 0x00524480 (316 bytes, 105 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00524344(void)
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

loc_00524344: ;
    PUSH32(esp, ebp);
    ebp = esp;
    esp = esp - 0xC;
    eax = MEM32(edi);
    MEM32(ebp + -8) = MEM32(ebp + -8) & 0;
    PUSH32(esp, ebx);
    ebx = eax;
    ebx = ebx >> 0x18;
    if (TEST_Z(LO8(ebx), 0xF)) goto loc_00524398; /* je: equal / zero */

loc_0052435B: ;
    eax = eax >> 0x14;
    MEM32(ebp + -12) = eax;
    eax = eax & 0xF;
    if (CMP_B(LO8(eax), 0xC)) goto loc_0052436F; /* jb: below (unsigned <) */

loc_00524368: ;
    MEM32(ebp + -8) = 0x80004005u;

loc_0052436F: ;
    fp_push(MEMF(esi + 0x14)); /* fld float */
    PUSH32(esp, 0); sub_00471288(); /* call 0x00471288 */

loc_00524377: ;
    PUSH32(esp, eax);
    eax = MEM32(ebp + -12);
    ebx = ebx & 0xFFFFFF0Fu;
    eax = eax & 0xFFFFFF0Fu;
    PUSH32(esp, ebx);
    PUSH32(esp, eax);
    eax = edi;
    PUSH32(esp, 0); sub_005240B1(); /* call 0x005240B1 */

loc_0052438F: ;
    PUSH32(esp, eax);
    edx = esi + 0x20;
    PUSH32(esp, 0); sub_00524736(); /* call 0x00524736 */

loc_00524398: ;
    eax = MEM32(edi);
    MEM32(ebp + -4) = eax;
    MEM32(ebp + -4) = MEM32(ebp + -4) >> 0x10;
    if (TEST_Z(MEM8(ebp + -4), 0xF)) goto loc_005243F3; /* je: equal / zero */

loc_005243A7: ;
    ebx = MEM32(edi + 8);
    if (TEST_Z(ebx, 0x1E000000)) goto loc_005243C3; /* je: equal / zero */

loc_005243B2: ;
    if (TEST_Z(ebx, 0xE0000000u)) goto loc_005243C3; /* je: equal / zero */

loc_005243BA: ;
    MEM32(ebp + -12) = 1;
    goto loc_005243CC;

loc_005243C3: ;
    eax = eax >> 0x14;
    eax = eax & 0xF;
    MEM32(ebp + -12) = eax;

loc_005243CC: ;
    fp_push(MEMF(esi + 0x14)); /* fld float */
    PUSH32(esp, 0); sub_00471288(); /* call 0x00471288 */

loc_005243D4: ;
    PUSH32(esp, eax);
    eax = MEM32(ebp + -4);
    eax = eax & 0xFFFFFF0Fu;
    PUSH32(esp, eax);
    PUSH32(esp, MEM32(ebp + -12));
    ebx = ebx >> 0x1D;
    PUSH32(esp, MEM32(ebx * 4 + 0x534314));
    edx = esi + 0x20;
    PUSH32(esp, 0); sub_00524736(); /* call 0x00524736 */

loc_005243F3: ;
    ecx = MEM32(edi);
    ebx = ecx;
    ebx = ebx >> 0xC;
    if (TEST_Z(LO8(ebx), 0xF)) goto loc_0052447A; /* je: equal / zero */

loc_005243FF: ;
    eax = ecx;
    eax = eax >> 3;
    edx = ecx;
    edx = edx >> 0xB;
    eax = eax & 0xFF;
    if (TEST_Z(LO8(edx), 1)) goto loc_0052445E; /* je: equal / zero */

loc_00524413: ;
    if (TEST_NZ(eax, eax)) goto loc_0052447A; /* jne: not equal / not zero */

loc_00524417: ;
    (void)0; /* test LO8(ecx), 4 - flags set for next jcc */
    fp_push(MEMF(esi + 0x14)); /* fld float */
    if (TEST_NZ(LO8(ecx), 4)) goto loc_00524440; /* jne: not equal / not zero */

loc_0052441F: ;
    PUSH32(esp, 0); sub_00471288(); /* call 0x00471288 */

loc_00524424: ;
    PUSH32(esp, eax);
    ebx = ebx & 0xFFFFFF0Fu;
    PUSH32(esp, ebx);
    PUSH32(esp, 0xC);
    eax = edi;
    PUSH32(esp, 0); sub_005240B1(); /* call 0x005240B1 */

loc_00524435: ;
    PUSH32(esp, eax);

loc_00524436: ;
    edx = esi + 0x20;
    PUSH32(esp, 0); sub_00524736(); /* call 0x00524736 */

loc_0052443E: ;
    goto loc_0052447A;

loc_00524440: ;
    PUSH32(esp, 0); sub_00471288(); /* call 0x00471288 */

loc_00524445: ;
    PUSH32(esp, eax);
    eax = MEM32(edi + 8);
    ebx = ebx & 0xFFFFFF0Fu;
    PUSH32(esp, ebx);
    PUSH32(esp, 0xC);
    eax = eax >> 0x1D;
    PUSH32(esp, MEM32(eax * 4 + 0x534314));
    goto loc_00524436;

loc_0052445E: ;
    if (CMP_B(eax, 0xC0)) goto loc_0052446E; /* jb: below (unsigned <) */

loc_00524465: ;
    MEM32(ebp + -8) = 0x80004005u;
    goto loc_0052447A;

loc_0052446E: ;
    ecx = 0; /* xor self */
    ecx++;
    eax = eax >> 2;
    eax = eax & ecx;
    MEM32(esi + eax * 4 + 0x18) = ecx;

loc_0052447A: ;
    eax = MEM32(ebp + -8);
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
 * sub_00524480
 * Original: 0x00524480 - 0x005245B8 (312 bytes, 113 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00524480(void)
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

loc_00524480: ;
    PUSH32(esp, ebp);
    ebp = esp;
    esp = esp - 0xC;
    MEM32(ebp + -12) = MEM32(ebp + -12) & 0;
    eax = esi + 0x1C0;
    PUSH32(esp, ebx);
    MEM32(ebp + -4) = eax;
    PUSH32(esp, 0); sub_0052489B(); /* call 0x0052489B */

loc_00524499: ;
    ecx = MEM32(edi);
    eax = ecx;
    PUSH32(esp, 0xF);
    eax = eax >> 0x18;
    POP32(esp, ebx);
    if (TEST_Z(LO8(ebx), LO8(eax))) goto loc_005244DA; /* je: equal / zero */

loc_005244A7: ;
    ecx = ecx >> 0x14;
    edx = ecx;
    edx = edx & ebx;
    if (CMP_B(LO8(edx), 0xC)) goto loc_005244BA; /* jb: below (unsigned <) */

loc_005244B3: ;
    MEM32(ebp + -12) = 0x80004005u;

loc_005244BA: ;
    PUSH32(esp, MEM32(ebp + 8));
    fp_push(MEMF(esi + 0x14)); /* fld float */
    SET_LO8(eax, LO8(eax) & LO8(ebx));
    PUSH32(esp, ecx);
    SET_LO8(ecx, LO8(ecx) & LO8(ebx));
    MEMF(esp) = (float)fp_top(); fp_popp(); /* fstp */
    PUSH32(esp, eax);
    eax = edi;
    PUSH32(esp, ecx);
    PUSH32(esp, 0); sub_005240B1(); /* call 0x005240B1 */

loc_005244D1: ;
    edx = MEM32(ebp + -4);
    PUSH32(esp, eax);
    PUSH32(esp, 0); sub_00524916(); /* call 0x00524916 */

loc_005244DA: ;
    edx = MEM32(edi);
    ecx = edx;
    ecx = ecx >> 0x10;
    if (TEST_Z(LO8(ebx), LO8(ecx))) goto loc_00524529; /* je: equal / zero */

loc_005244E5: ;
    eax = MEM32(edi + 8);
    if (TEST_Z(eax, 0x1E000000)) goto loc_005244FF; /* je: equal / zero */

loc_005244EF: ;
    if (TEST_Z(eax, 0xE0000000u)) goto loc_005244FF; /* je: equal / zero */

loc_005244F6: ;
    MEM32(ebp + -8) = 1;
    goto loc_00524507;

loc_005244FF: ;
    edx = edx >> 0x14;
    edx = edx & ebx;
    MEM32(ebp + -8) = edx;

loc_00524507: ;
    PUSH32(esp, MEM32(ebp + 8));
    fp_push(MEMF(esi + 0x14)); /* fld float */
    edx = MEM32(ebp + -4);
    PUSH32(esp, ecx);
    SET_LO8(ecx, LO8(ecx) & LO8(ebx));
    MEMF(esp) = (float)fp_top(); fp_popp(); /* fstp */
    eax = eax >> 0x1D;
    PUSH32(esp, ecx);
    PUSH32(esp, MEM32(ebp + -8));
    PUSH32(esp, MEM32(eax * 4 + 0x534314));
    PUSH32(esp, 0); sub_00524916(); /* call 0x00524916 */

loc_00524529: ;
    ecx = MEM32(edi);
    if (TEST_Z(HI8(ecx), 0xF0)) goto loc_00524589; /* je: equal / zero */

loc_00524530: ;
    eax = ecx;
    eax = eax >> 3;
    ecx = ecx >> 0xB;
    eax = eax & 0xFF;
    if (TEST_Z(LO8(ecx), 1)) goto loc_00524589; /* je: equal / zero */

loc_00524542: ;
    (void)0; /* test eax, eax - flags set for next jcc */
    MEM8(eax + esi) = 1;
    if (TEST_NZ(eax, eax)) goto loc_00524589; /* jne: not equal / not zero */

loc_0052454A: ;
    PUSH32(esp, MEM32(ebp + 8));
    fp_push(MEMF(esi + 0x14)); /* fld float */
    eax = MEM32(edi);
    (void)0; /* test LO8(eax), 4 - flags set for next jcc */
    PUSH32(esp, ecx);
    MEMF(esp) = (float)fp_top(); fp_popp(); /* fstp */
    if (TEST_NZ(LO8(eax), 4)) goto loc_0052456C; /* jne: not equal / not zero */

loc_0052455A: ;
    eax = eax >> 0xC;
    SET_LO8(eax, LO8(eax) & LO8(ebx));
    PUSH32(esp, eax);
    PUSH32(esp, 0xC);
    eax = edi;
    PUSH32(esp, 0); sub_005240B1(); /* call 0x005240B1 */

loc_00524569: ;
    PUSH32(esp, eax);
    goto loc_00524581;

loc_0052456C: ;
    eax = eax >> 0xC;
    SET_LO8(eax, LO8(eax) & LO8(ebx));
    PUSH32(esp, eax);
    eax = MEM32(edi + 8);
    PUSH32(esp, 0xC);
    eax = eax >> 0x1D;
    PUSH32(esp, MEM32(eax * 4 + 0x534314));

loc_00524581: ;
    edx = MEM32(ebp + -4);
    PUSH32(esp, 0); sub_00524916(); /* call 0x00524916 */

loc_00524589: ;
    eax = MEM32(edi + 8);
    eax = eax & 0x1E000000;
    (void)0; /* cmp eax, 0x1A000000 - flags set for next jcc */
    POP32(esp, ebx);
    if (CMP_NE(eax, 0x1A000000)) goto loc_005245B1; /* jne: not equal / not zero */

loc_00524599: ;
    PUSH32(esp, MEM32(ebp + 8));
    fp_push(MEMF(esi + 0x14)); /* fld float */
    edx = MEM32(ebp + -4);
    PUSH32(esp, ecx);
    MEMF(esp) = (float)fp_top(); fp_popp(); /* fstp */
    PUSH32(esp, 1);
    PUSH32(esp, 0xD);
    PUSH32(esp, 3);
    PUSH32(esp, 0); sub_00524916(); /* call 0x00524916 */

loc_005245B1: ;
    eax = MEM32(ebp + -12);
    esp = ebp;
    POP32(esp, ebp); /* leave */
    esp += 8; return; /* ret 4 */

    #undef fp_push
    #undef fp_pop
    #undef fp_popp
    #undef fp_top
    #undef fp_st1
}

/**
 * sub_005245B8
 * Original: 0x005245B8 - 0x005245E4 (44 bytes, 20 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_005245B8(void)
{
    uint32_t ebp;
    int _flags = 0; /* fallback flag var */
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_005245B8: ;
    eax--;
    PUSH32(esp, ebx);
    PUSH32(esp, esi);
    esi = MEM32(esp + 0xC);
    ebx = edx;
    if ((eax == 0)) { sub_005245E4(); return; } /* je: equal / zero */

loc_005245C3: ;
    eax--;
    if ((eax == 0)) goto loc_005245E0; /* je: equal / zero */

loc_005245C6: ;
    eax--;
    if ((eax != 0)) goto loc_005245E0; /* jne: not equal / not zero */

loc_005245C9: ;
    eax = MEM32(ecx + 4);
    eax = eax >> 2;
    eax = eax & 1;
    ebx = ebx - MEM32(esi + eax * 4 + 0x18);
    eax = 0; /* xor self */
    (void)0; /* cmp ebx, 6 - flags set for next jcc */
    SET_LO8(eax, (CMP_GE(ebx, 6)) ? 1 : 0); /* setge */
    g_seh_ebp = ebp; sub_005245F6(); return; /* tail jmp 0x005245F6 */

loc_005245E0: ;
    SET_LO8(eax, 1);
    g_seh_ebp = ebp; sub_005245F6(); return; /* tail jmp 0x005245F6 */

}

/**
 * sub_005245FB
 * Original: 0x005245FB - 0x0052462C (49 bytes, 17 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_005245FB(void)
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

loc_005245FB: ;
    eax--;
    PUSH32(esp, ebx);
    ebx = MEM32(esp + 0x18);
    MEM32(ebx) = 0x20;
    if ((eax == 0)) { sub_0052462C(); return; } /* je: equal / zero */

loc_00524609: ;
    eax--;
    if ((eax == 0)) goto loc_00524624; /* je: equal / zero */

loc_0052460C: ;
    eax--;
    if ((eax != 0)) goto loc_00524624; /* jne: not equal / not zero */

loc_0052460F: ;
    if (TEST_Z(MEM8(edx), 2)) goto loc_00524624; /* je: equal / zero */

loc_00524614: ;
    eax = MEM32(ecx + 0x610);
    MEM32(ebx) = eax;
    fp_push(MEMF(ecx + 0x290)); /* fld float */
    g_seh_ebp = ebp; sub_0052463F(); return; /* tail jmp 0x0052463F */

loc_00524624: ;
    fp_push(MEMF(0x648CF8)); /* fld float */
    g_seh_ebp = ebp; sub_0052463F(); return; /* tail jmp 0x0052463F */

    #undef fp_push
    #undef fp_pop
    #undef fp_popp
    #undef fp_top
    #undef fp_st1
}

/**
 * sub_00524643
 * Original: 0x00524643 - 0x0052468E (75 bytes, 33 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00524643(void)
{
    uint32_t ebp;
    int _flags = 0; /* fallback flag var */

loc_00524643: ;
    PUSH32(esp, ebp);
    ebp = esp;
    PUSH32(esp, ecx);
    PUSH32(esp, edi);
    edi = 0; /* xor self */

loc_0052464A: ;
    SET_LO8(eax, 1);
    ecx = edi;
    SET_LO8(eax, LO8(eax) << LO8(ecx));
    (void)0; /* test MEM8(ebp + 0x14), LO8(eax) - flags set for next jcc */
    MEM8(ebp + -4) = LO8(eax);
    if (TEST_Z(MEM8(ebp + 0x14), LO8(eax))) goto loc_00524681; /* je: equal / zero */

loc_00524658: ;
    eax = ZX8(MEM8(ebp + 0x10));
    eax = edi + eax * 4 + 8;
    if (CMP_LE(MEM32(esi + eax * 4), ebx)) goto loc_00524681; /* jle: less or equal (signed <=) */

loc_00524665: ;
    eax = ZX8(MEM8(ebp + 0xC));
    PUSH32(esp, ebx);
    PUSH32(esp, MEM32(ebp + -4));
    PUSH32(esp, MEM32(ebp + 0x10));
    PUSH32(esp, eax);
    PUSH32(esp, MEM32(ebp + 8));
    eax = esi + 0x20;
    PUSH32(esp, eax);
    PUSH32(esp, 0); sub_00524772(); /* call 0x00524772 */

loc_0052467D: ;
    if (TEST_Z(LO8(eax), LO8(eax))) { sub_0052468E(); return; } /* je: equal / zero */

loc_00524681: ;
    edi++;
    if (CMP_L(edi, 4)) goto loc_0052464A; /* jl: less (signed <) */

loc_00524687: ;
    SET_LO8(eax, 1);
    POP32(esp, edi);
    esp = ebp;
    POP32(esp, ebp); /* leave */
    esp += 20; return; /* ret 16 */

}

/**
 * sub_00524692
 * Original: 0x00524692 - 0x00524712 (128 bytes, 49 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00524692(void)
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

loc_00524692: ;
    PUSH32(esp, ebp);
    ebp = esp;
    esp = esp - 0x10;
    MEM32(ebp + -4) = MEM32(ebp + -4) & 0;
    fp_push(0.0); /* fldz */
    PUSH32(esp, esi);
    MEMF(ebp + -8) = (float)fp_top(); fp_popp(); /* fstp */
    PUSH32(esp, edi);
    PUSH32(esp, 0x20);
    POP32(esp, edi);
    MEM32(ebx) = edi;

loc_005246A8: ;
    ecx = MEM32(ebp + -4);
    SET_LO8(eax, 1);
    SET_LO8(eax, LO8(eax) << LO8(ecx));
    if (TEST_Z(MEM8(ebp + 0x18), LO8(eax))) goto loc_00524700; /* je: equal / zero */

loc_005246B4: ;
    if (CMP_NE(MEM8(ebp + 0x10), 2)) goto loc_005246C7; /* jne: not equal / not zero */

loc_005246BA: ;
    eax = MEM32(ebp + 0xC);
    (void)0; /* test MEM8(eax + 0xB), 0xE0 - flags set for next jcc */
    MEM8(ebp + -12) = 1;
    if (TEST_Z(MEM8(eax + 0xB), 0xE0)) goto loc_005246CB; /* je: equal / zero */

loc_005246C7: ;
    MEM8(ebp + -12) = 0;

loc_005246CB: ;
    PUSH32(esp, MEM32(ebp + -12));
    ecx = MEM32(ebp + 8);
    PUSH32(esp, MEM32(ebp + 0x14));
    eax = MEM32(ebp + -4);
    ecx = ecx + 0x1C0;
    esi = ebp + -16;
    MEM32(ebp + -16) = edi;
    PUSH32(esp, 0); sub_00524ED8(); /* call 0x00524ED8 */

loc_005246E8: ;
    fp_push(MEMF(ebp + -8)); /* fld float */
    _fpu_cmp = (fp_top() < fp_st1()) ? -1 : (fp_top() > fp_st1()) ? 1 : 0; /* fcomp st(1) */
    /* fnstsw ax - store FPU status word */
    if (1 /* jp after test - parity */) goto loc_005246FE; /* jp: parity */

loc_005246F4: ;
    eax = MEM32(ebp + -16);
    MEMF(ebp + -8) = (float)fp_top(); fp_popp(); /* fstp */
    MEM32(ebx) = eax;
    goto loc_00524700;

loc_005246FE: ;
    /* fstp st(0) */

loc_00524700: ;
    MEM32(ebp + -4) = MEM32(ebp + -4) + 1;
    if (CMP_L(MEM32(ebp + -4), 4)) goto loc_005246A8; /* jl: less (signed <) */

loc_00524709: ;
    fp_push(MEMF(ebp + -8)); /* fld float */
    POP32(esp, edi);
    POP32(esp, esi);
    esp = ebp;
    POP32(esp, ebp); /* leave */
    esp += 24; return; /* ret 20 */

    #undef fp_push
    #undef fp_pop
    #undef fp_popp
    #undef fp_top
    #undef fp_st1
}

/**
 * sub_00524712
 * Original: 0x00524712 - 0x00524736 (36 bytes, 16 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00524712(void)
{
    int _flags = 0; /* fallback flag var */

loc_00524712: ;
    PUSH32(esp, esi);
    PUSH32(esp, 0xD);
    POP32(esp, esi);
    PUSH32(esp, 4);
    eax = eax + 0xD0;
    POP32(esp, edx);

loc_0052471E: ;
    ecx = edx;

loc_00524720: ;
    MEM32(eax + -208) = 0xFFFFFFFAu;
    MEM32(eax) = edx;
    eax = eax + edx;
    ecx--;
    if ((ecx != 0)) goto loc_00524720; /* jne: not equal / not zero */

loc_00524731: ;
    esi--;
    if ((esi != 0)) goto loc_0052471E; /* jne: not equal / not zero */

loc_00524734: ;
    POP32(esp, esi);
    esp += 4; return; /* ret */

}
