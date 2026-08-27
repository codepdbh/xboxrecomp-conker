/**
 * Burnout 3 - Recompiled code chunk 61
 * Functions: 250 (0x00494176 - 0x004A0701)
 */

#define RECOMP_GENERATED_CODE
#include "recomp_funcs.h"
#include <math.h>

/**
 * sub_00494176
 * Original: 0x00494176 - 0x004941DA (100 bytes, 31 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00494176(void)
{
    int _flags = 0; /* fallback flag var */

loc_00494176: ;
    PUSH32(esp, esi);
    esi = ecx;
    eax = MEM32(esi);
    if (TEST_Z(HI8(eax), 4)) goto loc_004941D8; /* je: equal / zero */

loc_00494180: ;
    PUSH32(esp, edi);
    edi = 0x2000;
    if (TEST_NZ(edi, eax)) goto loc_004941D7; /* jne: not equal / not zero */

loc_0049418A: ;
    if (TEST_Z(HI8(eax), 8)) goto loc_0049419E; /* je: equal / zero */

loc_0049418F: ;
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, 0);
    eax = esi + 0x250;
    PUSH32(esp, eax);
    PUSH32(esp, 0); RECOMP_ICALL_SAFE(MEM32(0x56112C), _icall_esp); /* indirect call */
    }

loc_0049419E: ;
    if (CMP_NE(MEM32(esi + 0x260), 0)) goto loc_004941CF; /* jne: not equal / not zero */

loc_004941A7: ;
    ecx = esi;
    PUSH32(esp, 0); sub_00493B21(); /* call 0x00493B21 */

loc_004941AE: ;
    if (CMP_EQ(MEM8(0x75F048), 0)) goto loc_004941C2; /* je: equal / zero */

loc_004941B7: ;
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, 0x75F038);
    PUSH32(esp, 0); RECOMP_ICALL_SAFE(MEM32(0x561170), _icall_esp); /* indirect call */
    }

loc_004941C2: ;
    eax = esi + 0x1EC;
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, eax);
    PUSH32(esp, 0); RECOMP_ICALL_SAFE(MEM32(0x5611C8), _icall_esp); /* indirect call */
    }

loc_004941CF: ;
    PUSH32(esp, edi);
    ecx = esi;
    PUSH32(esp, 0); sub_0049D04E(); /* call 0x0049D04E */

loc_004941D7: ;
    POP32(esp, edi);

loc_004941D8: ;
    ecx = esi;

}

/**
 * sub_004941DA
 * Original: 0x004941DA - 0x004941E0 (6 bytes, 2 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_004941DA(void)
{
    uint32_t ebp;
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_004941DA: ;
    POP32(esp, esi);
    g_seh_ebp = ebp; sub_0049373B(); return; /* tail jmp 0x0049373B */

}

/**
 * sub_004942D4
 * Original: 0x004942D4 - 0x00494316 (66 bytes, 22 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_004942D4(void)
{
    uint32_t ebp;

loc_004942D4: ;
    PUSH32(esp, ebp);
    ebp = esp;
    esp = esp - 0x14;
    eax = MEM32(ebp + 0xC);
    edx = MEM32(ebp + 8);
    PUSH32(esp, MEM32(ebp + 0x14));
    MEM32(ebp + -20) = eax;
    SET_LO16(eax, MEM16(ebp + 0x10));
    MEM16(ebp + -16) = LO16(eax);
    eax = 0; /* xor self */
    MEM16(ebp + -14) = LO16(eax);
    edx = edx & 1;
    MEM32(ebp + -8) = eax;
    MEM32(ebp + -4) = eax;
    eax = ebp + -20;
    edx = edx << 0x18;
    PUSH32(esp, eax);
    ecx = ecx + 0xFFFFFD9Cu;
    MEM32(ebp + -12) = edx;
    PUSH32(esp, 0); sub_0049A9C7(); /* call 0x0049A9C7 */

loc_00494312: ;
    esp = ebp;
    POP32(esp, ebp); /* leave */
    esp += 20; return; /* ret 16 */

}

/**
 * sub_00494321
 * Original: 0x00494321 - 0x0049432E (13 bytes, 7 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00494321(void)
{
    uint32_t ebp;
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_00494321: ;
    PUSH32(esp, ebx);
    PUSH32(esp, ebp);
    PUSH32(esp, esi);
    PUSH32(esp, edi);
    ebp = ecx;
    esi = 0xFEF00000u;
    g_seh_ebp = ebp; sub_00494362(); return; /* tail jmp 0x00494362 */

}

/**
 * sub_00494389
 * Original: 0x00494389 - 0x00494769 (992 bytes, 254 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00494389(void)
{
    uint32_t ebp;
    int _flags = 0; /* fallback flag var */

loc_00494389: ;
    PUSH32(esp, ebp);
    ebp = esp;
    esp = esp - 0x14;
    PUSH32(esp, ebx);
    PUSH32(esp, MEM32(ebp + 8));
    ebx = ecx;
    PUSH32(esp, 0); sub_004938ED(); /* call 0x004938ED */

loc_0049439A: ;
    if (TEST_S(eax, eax)) goto loc_00494764; /* jl: less (signed <) */

loc_004943A2: ;
    PUSH32(esp, esi);
    esi = ebx + 0x250;
    PUSH32(esp, edi);
    MEM32(esi) = 0x49426E;
    eax = MEM32(0x20);
    eax = MEM32(eax + 0x24C);
    (void)0; /* test eax, eax - flags set for next jcc */
    MEM32(ebx + 0x260) = eax;
    if (TEST_Z(eax, eax)) goto loc_0049444F; /* je: equal / zero */

loc_004943CA: ;
    if (CMP_EQ(MEM32(eax + 4), 0x58424436)) goto loc_004943DD; /* je: equal / zero */

loc_004943D3: ;
    eax = 0x8007277Bu;
    goto loc_00494762;

loc_004943DD: ;
    edi = MEM32(0x56112C);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, 1);
    PUSH32(esp, esi);
    PUSH32(esp, 0); RECOMP_ICALL_SAFE(edi, _icall_esp); /* indirect call */
    }

loc_004943E8: ;
    ecx = MEM32(ebx + 0x260);
    MEM32(ebp + -12) = MEM32(ebp + -12) & 0;
    edx = MEM32(ecx);
    eax = ebp + -12;
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, eax);
    eax = ebx + 0x1E6;
    PUSH32(esp, eax);
    eax = ZX8(MEM8(ebx + 0x10));
    PUSH32(esp, eax);
    eax = ZX8(MEM8(ebx + 7));
    PUSH32(esp, eax);
    PUSH32(esp, 0); RECOMP_ICALL_SAFE(MEM32(edx + 4), _icall_esp); /* indirect call */
    }

loc_0049440C: ;
    (void)0; /* test eax, eax - flags set for next jcc */
    MEM32(ebp + -20) = eax;
    if (CMP_GE(eax & eax, 0)) goto loc_00494420; /* jge: greater or equal (signed >=) */

loc_00494413: ;
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, 0);
    PUSH32(esp, esi);
    PUSH32(esp, 0); RECOMP_ICALL_SAFE(edi, _icall_esp); /* indirect call */
    }

loc_00494418: ;
    eax = MEM32(ebp + -20);
    goto loc_00494762;

loc_00494420: ;
    edi = ebx + 0x1E0;
    esi = ebx + 0x1E6;
    MEM32(edi) = MEM32(esi); esi += 4; edi += 4; /* movsd */
    PUSH32(esp, 0xC00);
    ecx = ebx;
    MEM16(edi) = MEM16(esi); esi += 2; edi += 2; /* movsw */
    PUSH32(esp, 0); sub_0049D04E(); /* call 0x0049D04E */

loc_0049443B: ;
    if (CMP_EQ(MEM32(ebp + -12), 0)) goto loc_00494760; /* je: equal / zero */

loc_00494445: ;
    PUSH32(esp, 0x80000000u);
    goto loc_00494759;

loc_0049444F: ;
    edi = 0x400;
    PUSH32(esp, edi);
    ecx = ebx;
    PUSH32(esp, 0); sub_0049D04E(); /* call 0x0049D04E */

loc_0049445C: ;
    esi = ebx + 0x20C;
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, esi);
    PUSH32(esp, 4);
    PUSH32(esp, 0); RECOMP_ICALL_SAFE(MEM32(0x561168), _icall_esp); /* indirect call */
    }

loc_0049446B: ;
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, ebx);
    MEM32(ebx + 0x208) = eax;
    PUSH32(esp, 0x49437D);
    eax = ebx + 0x1EC;
    PUSH32(esp, eax);
    PUSH32(esp, 0); RECOMP_ICALL_SAFE(MEM32(0x5610E4), _icall_esp); /* indirect call */
    }

loc_00494484: ;
    eax = 0; /* xor self */
    SET_LO8(eax, MEM8(esi));
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, 1);
    PUSH32(esp, 0);
    PUSH32(esp, eax);
    PUSH32(esp, MEM32(ebx + 0x208));
    PUSH32(esp, ebx);
    PUSH32(esp, 0x493CD1);
    PUSH32(esp, 0x75F038);
    PUSH32(esp, 0); RECOMP_ICALL_SAFE(MEM32(0x56116C), _icall_esp); /* indirect call */
    }

loc_004944A4: ;
    ecx = ebx;
    PUSH32(esp, 0); sub_00493B21(); /* call 0x00493B21 */

loc_004944AB: ;
    eax = ZX8(MEM8(ebx + 7));
    ecx = 0x100;
    (void)0; /* cmp eax, ecx - flags set for next jcc */
    MEM32(ebx + 0x240) = eax;
    if (CMP_BE(eax, ecx)) goto loc_004944C4; /* jbe: below or equal (unsigned <=) */

loc_004944BE: ;
    MEM32(ebx + 0x240) = ecx;

loc_004944C4: ;
    eax = ZX8(MEM8(ebx + 0x10));
    eax++;
    (void)0; /* cmp eax, ecx - flags set for next jcc */
    MEM32(ebx + 0x224) = eax;
    if (CMP_BE(eax, ecx)) goto loc_004944D9; /* jbe: below or equal (unsigned <=) */

loc_004944D3: ;
    MEM32(ebx + 0x224) = ecx;

loc_004944D9: ;
    eax = MEM32(ebx + 0x240);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, 4);
    PUSH32(esp, 0);
    eax++;
    PUSH32(esp, 0xFFFFFFFFu);
    eax++;
    eax = eax << 0xB;
    PUSH32(esp, 0);
    PUSH32(esp, eax);
    PUSH32(esp, 0); RECOMP_ICALL_SAFE(MEM32(0x5610B0), _icall_esp); /* indirect call */
    }

loc_004944F3: ;
    esi = eax;
    if (TEST_NZ(esi, esi)) goto loc_00494503; /* jne: not equal / not zero */

loc_004944F9: ;
    eax = 0x80072747u;
    goto loc_00494762;

loc_00494503: ;
    ecx = edi;
    eax = 0; /* xor self */
    edi = esi;
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, esi);
    { uint32_t _i; for (_i = 0; _i < ecx; _i++) MEM32(edi + _i*4) = eax; }
    edi += ecx * 4; ecx = 0; /* rep stosd */
    PUSH32(esp, 0); RECOMP_ICALL_SAFE(MEM32(0x5611D4), _icall_esp); /* indirect call */
    }

loc_00494512: ;
    ecx = MEM32(ebx + 0x224);
    eax = eax - esi;
    edx = esi + ecx * 8 + -8;
    ecx--;
    MEM32(ebx + 0x22C) = edx;
    edx = MEM32(ebx + 0x240);
    MEM32(ebx + 0x224) = ecx;
    ecx = esi + 0x800;
    edx = ecx + edx * 8 + -8;
    (void)0; /* cmp ecx, edx - flags set for next jcc */
    MEM32(ebx + 0x21C) = eax;
    MEM32(ebx + 0x228) = esi;
    MEM32(ebx + 0x230) = esi;
    MEM32(ebx + 0x234) = esi;
    MEM32(ebx + 0x244) = ecx;
    MEM32(ebx + 0x24C) = ecx;
    MEM32(ebx + 0x248) = edx;
    eax = eax + esi + 0x1002;
    if (CMP_A(ecx, edx)) goto loc_00494589; /* ja: above (unsigned >) */

loc_00494570: ;
    MEM32(ecx) = eax;
    MEM32(ecx + 4) = 0x800007FDu;
    ecx = ecx + 8;
    eax = eax + 0x800;
    if (CMP_BE(ecx, MEM32(ebx + 0x248))) goto loc_00494570; /* jbe: below or equal (unsigned <=) */

loc_00494589: ;
    eax = ebp + -8;
    PUSH32(esp, eax);
    PUSH32(esp, 6);
    esi = ebx + 0x1E6;
    PUSH32(esp, esi);
    eax = ebp + -16;
    PUSH32(esp, eax);
    PUSH32(esp, 0x101);
    PUSH32(esp, 0); sub_0046DA64(); /* call 0x0046DA64 */

loc_004945A4: ;
    if (TEST_S(eax, eax)) goto loc_004945AE; /* jl: less (signed <) */

loc_004945A8: ;
    if (CMP_EQ(MEM32(ebp + -8), 6)) goto loc_004945D4; /* je: equal / zero */

loc_004945AE: ;
    PUSH32(esp, 1);
    eax = ebp + -1;
    PUSH32(esp, eax);
    ecx = ebx;
    PUSH32(esp, 0); sub_00493400(); /* call 0x00493400 */

loc_004945BB: ;
    SET_LO8(eax, MEM8(ebp + -1));
    SET_LO8(eax, LO8(eax) & 0x3E);
    MEM8(ebx + 0x1E7) = 0x50;
    MEM8(ebx + 0x1E8) = 0xF2;
    MEM8(ebx + 0x1EB) = LO8(eax);

loc_004945D4: ;
    eax = MEM32(esi);
    MEM32(ebx + 0x210) = 0x64;
    MEM32(0xFEF000A8u) = eax;
    eax = ZX16(MEM16(ebx + 0x1EA));
    MEM32(0xFEF000ACu) = eax;
    MEM32(-17825608) = 0xFFFFFFFFu;
    eax = 0xFFFF;
    MEM32(0xFEF000BCu) = eax;
    MEM32(-17825616) = 0xFFFFFFFFu;
    MEM32(0xFEF000B4u) = eax;
    edi = ebx + 0x1E0;
    MEM32(edi) = MEM32(esi); esi += 4; edi += 4; /* movsd */
    MEM16(edi) = MEM16(esi); esi += 2; edi += 2; /* movsw */
    PUSH32(esp, 1);
    eax = ebp + 0xB;
    MEM32(-17825648) = 0x5EE;
    MEM32(-17825652) = 0x7F0020;
    MEM32(-17825664) = 0x3B0F3E;
    PUSH32(esp, eax);
    ecx = ebx;
    PUSH32(esp, 0); sub_00493400(); /* call 0x00493400 */

loc_00494648: ;
    (void)0; /* cmp MEM8(ebp + 0xB), 0 - flags set for next jcc */
    esi = MEM32(0x561178);
    SET_LO8(eax, (CMP_EQ(MEM8(ebp + 0xB), 0)) ? 1 : 0); /* sete */
    MEM8(ebp + 0xB) = MEM8(ebp + 0xB) + LO8(eax);
    eax = ZX8(MEM8(ebp + 0xB));
    eax = eax | 0x7F00;
    MEM32(0xFEF0009Cu) = eax;
    MEM32(-17825632) = 0x16070F;
    MEM32(-17825628) = 0x16;
    eax = MEM32(ebx + 0x228);
    eax = eax + MEM32(ebx + 0x21C);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, 0x32);
    MEM32(0xFEF00100u) = eax;
    eax = MEM32(ebx + 0x21C);
    eax = eax + MEM32(ebx + 0x244);
    MEM32(0xFEF00104u) = eax;
    eax = MEM32(ebx + 0x240);
    eax = eax << 0x10;
    eax = eax - 0x10000;
    eax = eax | MEM32(ebx + 0x224);
    MEM32(0xFEF00108u) = eax;
    eax = 0x300010;
    MEM32(0xFEF00140u) = eax;
    MEM32(0xFEF0013Cu) = eax;
    MEM32(-17825400) = 0x1040000;
    MEM32(-17825396) = 0x105;
    PUSH32(esp, 0); RECOMP_ICALL_SAFE(esi, _icall_esp); /* indirect call */
    }

loc_004946DC: ;
    edi = 0; /* xor self */
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, edi);
    PUSH32(esp, edi);
    PUSH32(esp, 0); RECOMP_ICALL_SAFE(MEM32(0x561188), _icall_esp); /* indirect call */
    }

loc_004946E6: ;
    if (CMP_L(eax, edi)) goto loc_00494762; /* jl: less (signed <) */

loc_004946EA: ;
    MEM32(-17825400) = MEM32(-17825400) | 0x100000;
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, 0x32);
    PUSH32(esp, 0); RECOMP_ICALL_SAFE(esi, _icall_esp); /* indirect call */
    }

loc_004946F8: ;
    PUSH32(esp, 1);
    PUSH32(esp, edi);
    ecx = ebx;
    PUSH32(esp, 0); sub_00493BB8(); /* call 0x00493BB8 */

loc_00494702: ;
    ecx = ebx;
    PUSH32(esp, 0); sub_00493A86(); /* call 0x00493A86 */

loc_00494709: ;
    eax = 0xFEF00180u;
    ecx = MEM32(eax);
    MEM32(eax) = ecx;
    eax = 0xFEF00000u;
    ecx = MEM32(eax);
    MEM32(eax) = ecx;
    MEM32(-17825404) = 8;
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, 0x75F038);
    MEM32(-17825788) = 0x5F;
    PUSH32(esp, 0); RECOMP_ICALL_SAFE(MEM32(0x561164), _icall_esp); /* indirect call */
    }

loc_0049473A: ;
    if (TEST_NZ(LO8(eax), LO8(eax))) goto loc_00494745; /* jne: not equal / not zero */

loc_0049473E: ;
    eax = 0xC000016Eu;
    goto loc_00494762;

loc_00494745: ;
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, 1);
    eax = ebx + 0x250;
    PUSH32(esp, eax);
    PUSH32(esp, 0); RECOMP_ICALL_SAFE(MEM32(0x56112C), _icall_esp); /* indirect call */
    }

loc_00494754: ;
    PUSH32(esp, 0x800);

loc_00494759: ;
    ecx = ebx;
    PUSH32(esp, 0); sub_0049D04E(); /* call 0x0049D04E */

loc_00494760: ;
    eax = 0; /* xor self */

loc_00494762: ;
    POP32(esp, edi);
    POP32(esp, esi);

loc_00494764: ;
    POP32(esp, ebx);
    esp = ebp;
    POP32(esp, ebp); /* leave */
    esp += 8; return; /* ret 4 */

}

/**
 * sub_00494769
 * Original: 0x00494769 - 0x004947E6 (125 bytes, 57 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00494769(void)
{
    uint32_t ebp;
    int _flags = 0; /* fallback flag var */
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_00494769: ;
    eax = MEM32(esp + 4);
    PUSH32(esp, ebx);
    PUSH32(esp, ebp);
    edx = ecx;
    PUSH32(esp, esi);
    ebp = edx;
    esi = eax + 1;
    ebx = 0; /* xor self */

loc_00494779: ;
    SET_LO8(ecx, MEM8(eax));
    eax++;
    if (CMP_NE(LO8(ecx), LO8(ebx))) goto loc_00494779; /* jne: not equal / not zero */

loc_00494780: ;
    eax = eax - esi;
    ecx = eax + 2;
    if (CMP_A(ecx, 0xFF)) goto loc_004947DC; /* ja: above (unsigned >) */

loc_0049478D: ;
    esi = MEM32(esp + 0x10);
    PUSH32(esp, edi);
    ecx = eax + 1;
    eax = ecx;
    ecx = ecx >> 2;
    MEM8(edx) = 0x2E;
    edi = edx + 1;
    memcpy((void*)XBOX_PTR(edi), (void*)XBOX_PTR(esi), ecx * 4);
    esi += ecx * 4; edi += ecx * 4; ecx = 0; /* rep movsd */
    ecx = eax;
    ecx = ecx & 3;
    memcpy((void*)XBOX_PTR(edi), (void*)XBOX_PTR(esi), ecx);
    esi += ecx; edi += ecx; ecx = 0; /* rep movsb */
    (void)0; /* cmp MEM8(edx), LO8(ebx) - flags set for next jcc */
    POP32(esp, edi);
    if (CMP_EQ(MEM8(edx), LO8(ebx))) goto loc_004947DC; /* je: equal / zero */

loc_004947AE: ;
    eax = ebp + 1;
    goto loc_004947B9;

loc_004947B3: ;
    if (CMP_EQ(MEM8(eax), 0x2E)) goto loc_004947BD; /* je: equal / zero */

loc_004947B8: ;
    eax++;

loc_004947B9: ;
    if (CMP_NE(MEM8(eax), LO8(ebx))) goto loc_004947B3; /* jne: not equal / not zero */

loc_004947BD: ;
    ecx = eax;
    ecx = ecx - ebp;
    ecx--;
    if (CMP_A(ecx, 0x3F)) goto loc_004947E2; /* ja: above (unsigned >) */

loc_004947C7: ;
    if (CMP_NE(ecx, ebx)) goto loc_004947CF; /* jne: not equal / not zero */

loc_004947CB: ;
    if (CMP_NE(MEM8(eax), LO8(ebx))) goto loc_004947DC; /* jne: not equal / not zero */

loc_004947CF: ;
    MEM8(ebp) = LO8(ecx);
    (void)0; /* cmp MEM8(eax), LO8(ebx) - flags set for next jcc */
    ebp = eax;
    if (CMP_NE(MEM8(eax), LO8(ebx))) goto loc_004947AE; /* jne: not equal / not zero */

loc_004947D8: ;
    if (CMP_NE(MEM8(edx), LO8(ebx))) { sub_004947E6(); return; } /* jne: not equal / not zero */

loc_004947DC: ;
    MEM8(edx) = LO8(ebx);
    eax = 0; /* xor self */
    g_seh_ebp = ebp; sub_004947E9(); return; /* tail jmp 0x004947E9 */

loc_004947E2: ;
    MEM8(eax) = LO8(ebx);
    goto loc_004947DC;

}

/**
 * sub_004947EF
 * Original: 0x004947EF - 0x004948B4 (197 bytes, 81 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_004947EF(void)
{
    uint32_t ebp;
    int _flags = 0; /* fallback flag var */

loc_004947EF: ;
    PUSH32(esp, ebp);
    ebp = esp;
    esp = esp - 0xC;
    MEM32(ebp + -8) = MEM32(ebp + -8) & 0;
    PUSH32(esp, ebx);
    PUSH32(esp, esi);
    esi = MEM32(ebp + 0x10);
    (void)0; /* cmp esi, MEM32(ebp + 8) - flags set for next jcc */
    PUSH32(esp, edi);
    MEM32(ebp + -12) = ecx;
    MEM32(ebp + -4) = esi;
    MEM32(ebp + 0x10) = ecx;
    if (CMP_AE(esi, MEM32(ebp + 8))) goto loc_0049481F; /* jae: above or equal (unsigned >=) */

loc_0049480D: ;
    eax = MEM32(ebp + -12);
    MEM8(eax) = 0;
    eax = 0; /* xor self */
    POP32(esp, edi);
    POP32(esp, esi);
    POP32(esp, ebx);
    esp = ebp;
    POP32(esp, ebp); /* leave */
    esp += 16; return; /* ret 12 */

loc_0049481C: ;
    esi = MEM32(ebp + -4);

loc_0049481F: ;
    edi = MEM32(ebp + 0xC);
    if (CMP_AE(esi, edi)) goto loc_0049480D; /* jae: above or equal (unsigned >=) */

loc_00494826: ;
    SET_LO8(eax, MEM8(esi));
    SET_LO8(ecx, LO8(eax));
    SET_LO8(ecx, LO8(ecx) & 0xC0);
    (void)0; /* cmp LO8(ecx), 0xC0 - flags set for next jcc */
    edx = esi + 1;
    if (CMP_EQ(LO8(ecx), 0xC0)) goto loc_00494882; /* je: equal / zero */

loc_00494835: ;
    if (TEST_NZ(LO8(ecx), LO8(ecx))) goto loc_0049480D; /* jne: not equal / not zero */

loc_00494839: ;
    ecx = MEM32(ebp + -12);
    edi = MEM32(ebp + 0x10);
    ecx = ecx + 0xFF;
    ebx = ZX8(LO8(eax));
    ecx = ecx - edi;
    if (CMP_LE(ecx, ebx)) goto loc_0049480D; /* jle: less or equal (signed <=) */

loc_0049484E: ;
    MEM8(edi) = LO8(eax);
    edi++;
    (void)0; /* test LO8(eax), LO8(eax) - flags set for next jcc */
    MEM32(ebp + 0x10) = edi;
    if (CMP_BE(LO8(eax) & LO8(eax), 0)) { sub_004948B4(); return; } /* jbe: below or equal (unsigned <=) */

loc_00494858: ;
    MEM32(ebp + 0x10) = MEM32(ebp + 0x10) + ebx;
    ecx = ebx;
    eax = ecx;
    ecx = ecx >> 2;
    esi = edx;
    memcpy((void*)XBOX_PTR(edi), (void*)XBOX_PTR(esi), ecx * 4);
    esi += ecx * 4; edi += ecx * 4; ecx = 0; /* rep movsd */
    ecx = eax;
    ecx = ecx & 3;
    edx = edx + ebx;
    memcpy((void*)XBOX_PTR(edi), (void*)XBOX_PTR(esi), ecx);
    esi += ecx; edi += ecx; ecx = 0; /* rep movsb */
    SET_LO8(eax, MEM8(edx));
    SET_LO8(ecx, LO8(eax));
    SET_LO8(ecx, LO8(ecx) & 0xC0);
    edx++;
    if (CMP_NE(LO8(ecx), 0xC0)) goto loc_00494835; /* jne: not equal / not zero */

loc_0049487C: ;
    edi = MEM32(ebp + 0xC);
    esi = MEM32(ebp + -4);

loc_00494882: ;
    edi = edi - edx;
    if ((edi == 0)) goto loc_0049480D; /* je: equal / zero */

loc_00494886: ;
    ecx = 0; /* xor self */
    SET_LO8(eax, LO8(eax) & 0x3F);
    (void)0; /* cmp MEM32(ebp + -8), 0 - flags set for next jcc */
    SET_HI8(ecx, LO8(eax));
    SET_LO8(ecx, MEM8(edx));
    eax = ecx;
    if (CMP_NE(MEM32(ebp + -8), 0)) goto loc_0049489A; /* jne: not equal / not zero */

loc_00494896: ;
    edx++;
    MEM32(ebp + -8) = edx;

loc_0049489A: ;
    eax = ZX16(LO16(eax));
    eax = eax + MEM32(ebp + 8);
    MEM32(ebp + 0xC) = esi;
    (void)0; /* cmp eax, MEM32(ebp + 8) - flags set for next jcc */
    MEM32(ebp + -4) = eax;
    if (CMP_AE(eax, MEM32(ebp + 8))) goto loc_0049481C; /* jae: above or equal (unsigned >=) */

loc_004948AF: ;
    goto loc_0049480D;

}

/**
 * sub_004948C6
 * Original: 0x004948C6 - 0x004948CB (5 bytes, 3 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_004948C6(void)
{
    uint32_t ebp;
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_004948C6: ;
    eax = 0; /* xor self */
    eax++;
    g_seh_ebp = ebp; sub_004948D6(); return; /* tail jmp 0x004948D6 */

}

/**
 * sub_004948DD
 * Original: 0x004948DD - 0x004948E7 (10 bytes, 5 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_004948DD(void)
{
    uint32_t ebp;
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_004948DD: ;
    PUSH32(esp, esi);
    PUSH32(esp, edi);
    edi = MEM32(esp + 0xC);
    esi = ecx;
    g_seh_ebp = ebp; sub_00494919(); return; /* tail jmp 0x00494919 */

}

/**
 * sub_0049492A
 * Original: 0x0049492A - 0x0049495B (49 bytes, 18 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0049492A(void)
{
    int _flags = 0; /* fallback flag var */

loc_0049492A: ;
    eax = MEM32(esp + 8);
    PUSH32(esp, esi);
    esi = MEM32(esp + 8);
    MEM32(esi + 0x20) = eax;
    PUSH32(esp, 0xFFFFFFFFu);
    eax = esi + 4;
    PUSH32(esp, eax);
    MEM8(esi + 0x19) = 0;
    PUSH32(esp, 0); sub_00492F6E(); /* call 0x00492F6E */

loc_00494945: ;
    esi = MEM32(esi + 0x1C);
    if (TEST_Z(esi, esi)) goto loc_00494957; /* je: equal / zero */

loc_0049494C: ;
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, 0);
    PUSH32(esp, 1);
    PUSH32(esp, esi);
    PUSH32(esp, 0); RECOMP_ICALL_SAFE(MEM32(0x56114C), _icall_esp); /* indirect call */
    }

loc_00494957: ;
    POP32(esp, esi);
    esp += 12; return; /* ret 8 */

}

/**
 * sub_0049495B
 * Original: 0x0049495B - 0x00494994 (57 bytes, 24 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0049495B(void)
{
    uint32_t ebp;
    int _flags = 0; /* fallback flag var */

loc_0049495B: ;
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, ebp);
    ebp = esp;
    PUSH32(esp, ecx);
    PUSH32(esp, ebx);
    PUSH32(esp, esi);
    PUSH32(esp, edi);
    ebx = ecx;
    PUSH32(esp, 0); RECOMP_ICALL_SAFE(MEM32(0x5610F0), _icall_esp); /* indirect call */
    }

loc_0049496A: ;
    edi = ebx + 0xA90;
    esi = MEM32(edi);
    (void)0; /* test esi, esi - flags set for next jcc */
    MEM8(ebp + -4) = LO8(eax);
    if (TEST_Z(esi, esi)) goto loc_0049498D; /* je: equal / zero */

loc_00494979: ;
    eax = esi + 0x20;
    if (CMP_EQ(MEM32(ebp + 8), eax)) goto loc_00494989; /* je: equal / zero */

loc_00494981: ;
    edi = esi;
    esi = MEM32(esi);
    if (TEST_NZ(esi, esi)) goto loc_00494979; /* jne: not equal / not zero */

loc_00494989: ;
    if (TEST_NZ(esi, esi)) { sub_00494994(); return; } /* jne: not equal / not zero */

loc_0049498D: ;
    esi = 0x2726;
    g_seh_ebp = ebp; sub_004949BC(); return; /* tail jmp 0x004949BC */

}

/**
 * sub_004949CE
 * Original: 0x004949CE - 0x00494A0A (60 bytes, 23 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_004949CE(void)
{
    uint32_t ebp;
    int _flags = 0; /* fallback flag var */

loc_004949CE: ;
    PUSH32(esp, ebp);
    ebp = esp;
    esp = esp - 0x10;
    PUSH32(esp, esi);
    esi = ecx;
    PUSH32(esp, edi);
    edi = 0; /* xor self */
    MEM32(ebp + -8) = esi;
    ecx = 0; /* xor self */
    eax = esi + 0x8E0;

loc_004949E5: ;
    if (CMP_EQ(MEM32(eax), edi)) goto loc_004949F2; /* je: equal / zero */

loc_004949E9: ;
    ecx++;
    eax = eax + 4;
    if (CMP_B(ecx, 4)) goto loc_004949E5; /* jb: below (unsigned <) */

loc_004949F2: ;
    if (CMP_NE(ecx, edi)) { sub_00494A0A(); return; } /* jne: not equal / not zero */

loc_004949F6: ;
    PUSH32(esp, 0x2AF9);
    PUSH32(esp, MEM32(ebp + 8));
    ecx = esi;
    PUSH32(esp, 0); sub_0049492A(); /* call 0x0049492A */

loc_00494A05: ;
    g_seh_ebp = ebp; sub_00494ADD(); return; /* tail jmp 0x00494ADD */

}

/**
 * sub_00494AE3
 * Original: 0x00494AE3 - 0x00494CBF (476 bytes, 153 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00494AE3(void)
{
    uint32_t ebp;
    int _flags = 0; /* fallback flag var */

loc_00494AE3: ;
    PUSH32(esp, ebp);
    ebp = esp;
    esp = esp - 0x110;
    eax = MEM32(ebp + 8);
    (void)0; /* test MEM8(eax + 0xB), 1 - flags set for next jcc */
    PUSH32(esp, esi);
    esi = ecx;
    MEM32(ebp + -16) = esi;
    if (TEST_NZ(MEM8(eax + 0xB), 1)) goto loc_00494CBA; /* jne: not equal / not zero */

loc_00494AFF: ;
    eax = MEM32(eax);
    if (CMP_EQ(MEM32(eax + 0x10), 0xFFFFFFFFu)) goto loc_00494CBA; /* je: equal / zero */

loc_00494B0B: ;
    edx = MEM32(ebp + 0x10);
    PUSH32(esp, edi);
    edi = MEM32(ebp + 0xC);
    edi = edi + 8;
    if (CMP_B(edx, 0xC)) goto loc_00494CB9; /* jb: below (unsigned <) */

loc_00494B1E: ;
    SET_LO16(eax, MEM16(edi + 2));
    SET_HI8(ecx, LO8(eax));
    (void)0; /* test HI8(ecx), HI8(ecx) - flags set for next jcc */
    SET_LO8(ecx, HI8(eax));
    if (((int32_t)(HI8(ecx) & HI8(ecx)) >= 0)) goto loc_00494CB9; /* jns: not sign (positive) */

loc_00494B2E: ;
    if (TEST_NZ(HI8(ecx), 0x78)) goto loc_00494CB9; /* jne: not equal / not zero */

loc_00494B37: ;
    PUSH32(esp, ebx);
    SET_LO16(eax, 1);
    SET_HI8(ebx, LO8(eax));
    SET_LO8(ebx, HI8(eax));
    if (CMP_NE(MEM16(edi + 4), LO16(ebx))) goto loc_00494CB8; /* jne: not equal / not zero */

loc_00494B4A: ;
    ebx = MEM32(esi + 0xA90);
    (void)0; /* test ebx, ebx - flags set for next jcc */
    MEM32(ebp + -8) = ebx;
    if (TEST_Z(ebx, ebx)) goto loc_00494CB8; /* je: equal / zero */

loc_00494B5B: ;
    SET_LO16(eax, MEM16(edi));

loc_00494B5E: ;
    if (CMP_EQ(MEM16(ebx + 0x1A), LO16(eax))) goto loc_00494B6D; /* je: equal / zero */

loc_00494B64: ;
    ebx = MEM32(ebx);
    (void)0; /* test ebx, ebx - flags set for next jcc */
    MEM32(ebp + -8) = ebx;
    if (TEST_NZ(ebx, ebx)) goto loc_00494B5E; /* jne: not equal / not zero */

loc_00494B6D: ;
    if (TEST_Z(ebx, ebx)) goto loc_00494CB8; /* je: equal / zero */

loc_00494B75: ;
    if (CMP_EQ(MEM8(ebx + 0x19), 0)) goto loc_00494CB8; /* je: equal / zero */

loc_00494B7F: ;
    eax = ecx;
    eax = eax & 0xF;
    if (CMP_NE(LO16(eax), 3)) goto loc_00494B97; /* jne: not equal / not zero */

loc_00494B8A: ;
    PUSH32(esp, 0x2AF9);
    PUSH32(esp, ebx);
    ecx = esi;
    goto loc_00494CB3;

loc_00494B97: ;
    if (TEST_NZ(LO16(eax), LO16(eax))) goto loc_00494CB8; /* jne: not equal / not zero */

loc_00494BA0: ;
    ecx = edi + edx;
    eax = edi + 0xC;
    edx = eax;
    edx = edx - ecx;
    MEM32(ebp + 8) = ecx;
    MEM8(ebp + -272) = 0;
    if ((edx == 0)) goto loc_00494CB8; /* je: equal / zero */

loc_00494BBA: ;
    PUSH32(esp, eax);
    PUSH32(esp, ecx);
    PUSH32(esp, edi);
    ecx = ebp + -272;
    PUSH32(esp, 0); sub_004947EF(); /* call 0x004947EF */

loc_00494BC8: ;
    esi = eax;
    if (TEST_Z(esi, esi)) goto loc_00494CB8; /* je: equal / zero */

loc_00494BD2: ;
    eax = MEM32(ebp + 8);
    eax = eax - esi;
    if (CMP_B(eax, 4)) goto loc_00494CB8; /* jb: below (unsigned <) */

loc_00494BE0: ;
    PUSH32(esp, MEM32(ebx + 0x14));
    ecx = ebp + -272;
    esi = esi + 4;
    PUSH32(esp, 0); sub_004948DD(); /* call 0x004948DD */

loc_00494BF1: ;
    if (TEST_Z(eax, eax)) goto loc_00494CB8; /* je: equal / zero */

loc_00494BF9: ;
    SET_LO16(eax, MEM16(edi + 6));
    MEM32(ebp + 0x10) = MEM32(ebp + 0x10) & 0;
    SET_HI8(ecx, LO8(eax));
    SET_LO8(ecx, HI8(eax));
    (void)0; /* test LO16(ecx), LO16(ecx) - flags set for next jcc */
    MEM32(ebp + 0xC) = ecx;
    if (CMP_BE(LO16(ecx) & LO16(ecx), 0)) goto loc_00494CB8; /* jbe: below or equal (unsigned <=) */

loc_00494C11: ;
    ebx = ebx + 0x28;
    MEM32(ebp + -4) = ebx;

loc_00494C17: ;
    PUSH32(esp, esi);
    PUSH32(esp, MEM32(ebp + 8));
    ecx = ebp + -272;
    PUSH32(esp, edi);
    PUSH32(esp, 0); sub_004947EF(); /* call 0x004947EF */

loc_00494C27: ;
    esi = eax;
    if (TEST_Z(esi, esi)) goto loc_00494CB8; /* je: equal / zero */

loc_00494C31: ;
    eax = MEM32(ebp + 8);
    eax = eax - esi;
    if (CMP_B(eax, 0xA)) goto loc_00494CB8; /* jb: below (unsigned <) */

loc_00494C3B: ;
    SET_LO16(eax, MEM16(esi));
    esi++;
    esi++;
    SET_LO16(edx, MEM16(esi));
    esi = esi + 6;
    SET_LO16(ecx, MEM16(esi));
    SET_HI8(ebx, LO8(ecx));
    esi++;
    esi++;
    SET_LO8(ebx, HI8(ecx));
    ecx = ZX16(LO16(ebx));
    MEM32(ebp + -12) = ebx;
    ebx = MEM32(ebp + 8);
    ebx = ebx - esi;
    if (CMP_L(ebx, ecx)) goto loc_00494CB8; /* jl: less (signed <) */

loc_00494C5E: ;
    SET_HI8(ebx, LO8(eax));
    SET_LO8(ebx, HI8(eax));
    if (CMP_NE(LO16(ebx), 1)) goto loc_00494C8C; /* jne: not equal / not zero */

loc_00494C68: ;
    SET_HI8(eax, LO8(edx));
    SET_LO8(eax, HI8(edx));
    if (CMP_NE(LO16(eax), LO16(ebx))) goto loc_00494C8C; /* jne: not equal / not zero */

loc_00494C71: ;
    if (CMP_NE(MEM16(ebp + -12), 4)) goto loc_00494C8C; /* jne: not equal / not zero */

loc_00494C78: ;
    edx = MEM32(ebp + -4);
    MEM32(ebp + 0x10) = MEM32(ebp + 0x10) + 1;
    eax = MEM32(esi);
    MEM32(ebp + -4) = MEM32(ebp + -4) + 4;
    (void)0; /* cmp MEM32(ebp + 0x10), 8 - flags set for next jcc */
    MEM32(edx) = eax;
    if (CMP_EQ(MEM32(ebp + 0x10), 8)) goto loc_00494CA0; /* je: equal / zero */

loc_00494C8C: ;
    MEM32(ebp + 0xC) = MEM32(ebp + 0xC) + 0xFFFF;
    esi = esi + ecx;
    if (CMP_A(MEM16(ebp + 0xC), 0)) goto loc_00494C17; /* ja: above (unsigned >) */

loc_00494CA0: ;
    ecx = MEM32(ebp + 0x10);
    if (TEST_Z(ecx, ecx)) goto loc_00494CB8; /* je: equal / zero */

loc_00494CA7: ;
    eax = MEM32(ebp + -8);
    PUSH32(esp, 0);
    MEM32(eax + 0x24) = ecx;
    ecx = MEM32(ebp + -16);
    PUSH32(esp, eax);

loc_00494CB3: ;
    PUSH32(esp, 0); sub_0049492A(); /* call 0x0049492A */

loc_00494CB8: ;
    POP32(esp, ebx);

loc_00494CB9: ;
    POP32(esp, edi);

loc_00494CBA: ;
    POP32(esp, esi);
    esp = ebp;
    POP32(esp, ebp); /* leave */
    esp += 16; return; /* ret 12 */

}

/**
 * sub_00494CE7
 * Original: 0x00494CE7 - 0x00494D16 (47 bytes, 12 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00494CE7(void)
{
    uint32_t ebp;
    int _flags = 0; /* fallback flag var */

loc_00494CE7: ;
    PUSH32(esp, ebp);
    ebp = esp;
    esp = esp - 0x104;
    PUSH32(esp, MEM32(ebp + 8));
    MEM32(ebp + -4) = ecx;
    ecx = ebp + -260;
    MEM8(ebp + -260) = 0;
    PUSH32(esp, 0); sub_00494769(); /* call 0x00494769 */

loc_00494D08: ;
    if (TEST_NZ(eax, eax)) { sub_00494D16(); return; } /* jne: not equal / not zero */

loc_00494D0C: ;
    eax = 0x271E;
    g_seh_ebp = ebp; sub_00494E10(); return; /* tail jmp 0x00494E10 */

}

/**
 * sub_00494E14
 * Original: 0x00494E14 - 0x00494E2D (25 bytes, 9 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00494E14(void)
{
    int _flags = 0; /* fallback flag var */

loc_00494E14: ;
    eax = MEM32(esp + 4);
    eax = MEM32(eax + 0xC);
    if (TEST_Z(eax, eax)) goto loc_00494E2A; /* je: equal / zero */

loc_00494E1F: ;
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, 0);
    PUSH32(esp, 1);
    PUSH32(esp, eax);
    PUSH32(esp, 0); RECOMP_ICALL_SAFE(MEM32(0x56114C), _icall_esp); /* indirect call */
    }

loc_00494E2A: ;
    esp += 8; return; /* ret 4 */

}

/**
 * sub_00494E2D
 * Original: 0x00494E2D - 0x00494E66 (57 bytes, 22 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00494E2D(void)
{
    uint32_t ebp;
    int _flags = 0; /* fallback flag var */

loc_00494E2D: ;
    PUSH32(esp, ebp);
    ebp = esp;
    if (CMP_BE(MEM32(ebp + 8), 0)) goto loc_00494E5F; /* jbe: below or equal (unsigned <=) */

loc_00494E36: ;
    PUSH32(esp, MEM32(ebp + 0xC));
    PUSH32(esp, 0x1C);
    PUSH32(esp, 0);
    PUSH32(esp, MEM32(ebp + 8));
    PUSH32(esp, 3);
    PUSH32(esp, 0x4654454E);
    PUSH32(esp, 0); sub_004937A4(); /* call 0x004937A4 */

loc_00494E4C: ;
    if (TEST_Z(eax, eax)) goto loc_00494E62; /* je: equal / zero */

loc_00494E50: ;
    ecx = MEM32(ebp + 0x10);
    MEM32(eax + 0x14) = MEM32(eax + 0x14) & 0;
    MEM32(eax + 0x18) = ecx;
    ecx = MEM32(ebp + 0x14);
    MEM32(ecx) = eax;

loc_00494E5F: ;
    eax = 0; /* xor self */
    eax++;

loc_00494E62: ;
    POP32(esp, ebp);
    esp += 20; return; /* ret 16 */

}

/**
 * sub_00494E66
 * Original: 0x00494E66 - 0x00494E86 (32 bytes, 11 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00494E66(void)
{
    int _flags = 0; /* fallback flag var */

loc_00494E66: ;
    PUSH32(esp, esi);
    esi = MEM32(esp + 8);
    PUSH32(esp, esi);
    PUSH32(esp, 0); sub_0049CFDE(); /* call 0x0049CFDE */

loc_00494E71: ;
    eax = MEM32(esi);
    eax = eax | MEM32(esi + 4);
    if ((eax != 0)) goto loc_00494E82; /* jne: not equal / not zero */

loc_00494E78: ;
    MEM32(esi + 4) = MEM32(esi + 4) & 0;
    MEM32(esi) = 1;

loc_00494E82: ;
    POP32(esp, esi);
    esp += 8; return; /* ret 4 */

}

/**
 * sub_00494E86
 * Original: 0x00494E86 - 0x00494EAE (40 bytes, 17 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00494E86(void)
{
    uint32_t ebp;
    int _cf = 0; /* carry flag */

loc_00494E86: ;
    PUSH32(esp, ebp);
    ebp = esp;
    PUSH32(esp, ecx);
    PUSH32(esp, ecx);
    eax = MEM32(ebp + 8);
    edx = MEM32(eax);
    ecx = MEM32(ebp + 0xC);
    edx = edx - MEM32(ecx);
    eax = MEM32(eax + 4);
    eax = eax - MEM32(ecx + 4) - _cf; /* sbb */
    MEM32(ebp + -8) = edx;
    MEM32(ebp + -4) = eax;
    eax = ebp + -8;
    PUSH32(esp, eax);
    PUSH32(esp, 0); sub_0049CFF0(); /* call 0x0049CFF0 */

loc_00494EAA: ;
    esp = ebp;
    POP32(esp, ebp); /* leave */
    esp += 12; return; /* ret 8 */

}

/**
 * sub_00494EAE
 * Original: 0x00494EAE - 0x00494EC6 (24 bytes, 8 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00494EAE(void)
{
    uint32_t ebp;
    int _flags = 0; /* fallback flag var */
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_00494EAE: ;
    eax = MEM32(esp + 8);
    ecx = MEM32(esp + 4);
    eax = eax >> 1;
    (void)0; /* test MEM8(esp + 8), 1 - flags set for next jcc */
    ecx = ecx + eax * 4;
    if (TEST_Z(MEM8(esp + 8), 1)) { sub_00494EC6(); return; } /* je: equal / zero */

loc_00494EC2: ;
    eax = MEM32(ecx);
    g_seh_ebp = ebp; sub_00494ECD(); return; /* tail jmp 0x00494ECD */

}

/**
 * sub_00494ED0
 * Original: 0x00494ED0 - 0x00494F4F (127 bytes, 61 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00494ED0(void)
{
    uint32_t ebp;
    int _flags = 0; /* fallback flag var */

loc_00494ED0: ;
    PUSH32(esp, ebp);
    ebp = esp;
    PUSH32(esp, ecx);
    eax = MEM32(ebp + 0xC);
    PUSH32(esp, esi);
    PUSH32(esp, 9);
    edx = ((int32_t)eax < 0) ? 0xFFFFFFFF : 0; /* cdq */
    POP32(esp, esi);
    { int64_t _dividend = ((int64_t)(int32_t)edx << 32) | eax;
      eax = (uint32_t)((int32_t)(_dividend / (int32_t)esi));
      edx = (uint32_t)((int32_t)(_dividend % (int32_t)esi)); }
    ecx = 0; /* xor self */
    ecx++;
    if (CMP_L(eax, ecx)) goto loc_00494EF1; /* jl: less (signed <) */

loc_00494EE5: ;
    ecx = ecx + ecx * 2 + 1;
    if (CMP_LE(ecx, eax)) goto loc_00494EE5; /* jle: less or equal (signed <=) */

loc_00494EED: ;
    if (CMP_LE(ecx & ecx, 0)) goto loc_00494F4A; /* jle: less or equal (signed <=) */

loc_00494EF1: ;
    esi = MEM32(ebp + 8);
    PUSH32(esp, ebx);
    PUSH32(esp, edi);

loc_00494EF6: ;
    (void)0; /* cmp ecx, MEM32(ebp + 0xC) - flags set for next jcc */
    MEM32(ebp + 8) = ecx;
    if (CMP_GE(ecx, MEM32(ebp + 0xC))) goto loc_00494F3A; /* jge: greater or equal (signed >=) */

loc_00494EFE: ;
    MEM32(ebp + -4) = esi;

loc_00494F01: ;
    eax = MEM32(ebp + 8);
    (void)0; /* cmp eax, ecx - flags set for next jcc */
    edx = MEM32(esi + eax * 4);
    if (CMP_L(eax, ecx)) goto loc_00494F24; /* jl: less (signed <) */

loc_00494F0B: ;
    ebx = MEM32(ebp + -4);

loc_00494F0E: ;
    edi = MEM32(ebx);
    if (CMP_BE(edi, edx)) goto loc_00494F24; /* jbe: below or equal (unsigned <=) */

loc_00494F14: ;
    MEM32(esi + eax * 4) = edi;
    edi = ecx;
    edi = edi << 2;
    eax = eax - ecx;
    ebx = ebx - edi;
    if (CMP_GE(eax, ecx)) goto loc_00494F0E; /* jge: greater or equal (signed >=) */

loc_00494F24: ;
    MEM32(ebp + 8) = MEM32(ebp + 8) + ecx;
    MEM32(esi + eax * 4) = edx;
    eax = ecx;
    eax = eax << 2;
    MEM32(ebp + -4) = MEM32(ebp + -4) + eax;
    eax = MEM32(ebp + 8);
    if (CMP_L(eax, MEM32(ebp + 0xC))) goto loc_00494F01; /* jl: less (signed <) */

loc_00494F3A: ;
    eax = ecx;
    PUSH32(esp, 3);
    edx = ((int32_t)eax < 0) ? 0xFFFFFFFF : 0; /* cdq */
    POP32(esp, ecx);
    { int64_t _dividend = ((int64_t)(int32_t)edx << 32) | eax;
      eax = (uint32_t)((int32_t)(_dividend / (int32_t)ecx));
      edx = (uint32_t)((int32_t)(_dividend % (int32_t)ecx)); }
    ecx = eax;
    if (CMP_G(ecx & ecx, 0)) goto loc_00494EF6; /* jg: greater (signed >) */

loc_00494F48: ;
    POP32(esp, edi);
    POP32(esp, ebx);

loc_00494F4A: ;
    POP32(esp, esi);
    esp = ebp;
    POP32(esp, ebp); /* leave */
    esp += 12; return; /* ret 8 */

}

/**
 * sub_00494F4F
 * Original: 0x00494F4F - 0x00494F88 (57 bytes, 21 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00494F4F(void)
{
    uint32_t ebp;
    int _flags = 0; /* fallback flag var */
    int _cf = 0; /* carry flag */

loc_00494F4F: ;
    PUSH32(esp, ebp);
    ebp = esp;
    esp = esp - 0x10;
    PUSH32(esp, ebx);
    ebx = MEM32(ebp + 8);
    edx = MEM32(ebx + 0x54);
    PUSH32(esp, esi);
    esi = MEM32(ebx + 0x58);
    MEM32(ebp + -4) = ecx;
    ecx = MEM32(ebp + 0xC);
    (void)0; /* cmp MEM32(ecx + 0x14), 0 - flags set for next jcc */
    eax = MEM32(ecx + 0xA8);
    PUSH32(esp, edi);
    edi = MEM32(ebp + 0x10);
    MEM32(ebp + -16) = edx;
    if (CMP_EQ(MEM32(ecx + 0x14), 0)) { sub_00494F88(); return; } /* je: equal / zero */

loc_00494F79: ;
    edi = (uint32_t)(-(int32_t)edi);
    edi = _cf ? 0xFFFFFFFF : 0; /* sbb self (CF extend) */
    edi = edi & 0x40;
    edi = edi + 0x2B0;
    g_seh_ebp = ebp; sub_00494F98(); return; /* tail jmp 0x00494F98 */

}

/**
 * sub_00495143
 * Original: 0x00495143 - 0x004951F3 (176 bytes, 58 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00495143(void)
{
    uint32_t ebp;
    int _flags = 0; /* fallback flag var */

loc_00495143: ;
    PUSH32(esp, ebp);
    ebp = esp;
    esp = esp - 0x30;
    edx = MEM32(ebp + 8);
    eax = MEM32(edx + 0xC);
    PUSH32(esp, ebx);
    PUSH32(esp, esi);
    esi = MEM32(ebp + 0xC);
    MEM32(ebp + -4) = ecx;
    ecx = MEM32(edx + 8);
    MEM16(ecx + 0xA) = MEM16(ecx + 0xA) & 0xFBF7;
    (void)0; /* cmp MEM32(edx + 4), 0 - flags set for next jcc */
    ebx = MEM32(ecx);
    PUSH32(esp, edi);
    edi = MEM32(edx);
    MEM32(ebp + -32) = eax;
    eax = MEM32(ecx + 8);
    MEM32(ebp + -20) = ecx;
    MEM32(ebp + -24) = edi;
    MEM32(ebp + -40) = ebx;
    if (CMP_EQ(MEM32(edx + 4), 0)) goto loc_004951E4; /* je: equal / zero */

loc_0049517A: ;
    if (CMP_EQ(MEM8(esi + 0x2B), 3)) goto loc_004951E4; /* je: equal / zero */

loc_00495180: ;
    MEM32(ebp + -12) = MEM32(ebp + -12) & 0;
    MEM32(ebp + -16) = MEM32(ebp + -16) & 0;

loc_00495188: ;
    edx = MEM32(ebp + -16);
    edx = edx + 7;
    edx = edx & 0xFFFFFFF8u;
    MEM32(ebp + -8) = edx;
    edx = edx + 0x27;
    MEM32(ebp + -36) = edx;
    edx = edx + 0x20;
    MEM16(ecx + 4) = LO16(edx);
    (void)0; /* test MEM8(edi), 0xE0 - flags set for next jcc */
    MEM32(ebp + -28) = edx;
    if (TEST_NZ(MEM8(edi), 0xE0)) { sub_004951F3(); return; } /* jne: not equal / not zero */

loc_004951A9: ;
    eax = eax | 0x4000000;
    MEM32(ecx + 8) = eax;
    PUSH32(esp, 0); sub_0049345C(); /* call 0x0049345C */

loc_004951B6: ;
    ecx = MEM32(ebp + -20);
    esi = esi + 0x32;
    edi = eax;
    MEM32(edi) = MEM32(esi); esi += 4; edi += 4; /* movsd */
    MEM16(edi) = MEM16(esi); esi += 2; edi += 2; /* movsw */
    esi = MEM32(ebp + -4);
    esi = esi + 0x1E0;
    edi = eax + 6;
    MEM32(edi) = MEM32(esi); esi += 4; edi += 4; /* movsd */
    MEM16(edi) = MEM16(esi); esi += 2; edi += 2; /* movsw */
    esi = MEM32(ebp + 0xC);
    edi = MEM32(ebp + -4);
    MEM16(eax + 0xC) = 8;
    MEM16(ebx + 0x14) = 0x20C;
    g_seh_ebp = ebp; sub_00495201(); return; /* tail jmp 0x00495201 */

loc_004951E4: ;
    edx = MEM32(edx + 0x30);
    MEM32(ebp + -12) = 1;
    MEM32(ebp + -16) = edx;
    goto loc_00495188;

}

/**
 * sub_004953EB
 * Original: 0x004953EB - 0x004954C6 (219 bytes, 74 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_004953EB(void)
{
    uint32_t ebp;
    int _flags = 0; /* fallback flag var */

loc_004953EB: ;
    PUSH32(esp, ebp);
    ebp = esp;
    esp = esp - 0xC;
    MEM32(ebp + -12) = MEM32(ebp + -12) | 0xFFFFFFFFu;
    PUSH32(esp, esi);
    esi = MEM32(ebp + 8);
    eax = esi + 0x10;
    PUSH32(esp, edi);
    edi = MEM32(eax);
    (void)0; /* cmp edi, eax - flags set for next jcc */
    MEM32(ebp + -4) = ecx;
    if (CMP_EQ(edi, eax)) goto loc_004954B1; /* je: equal / zero */

loc_0049540A: ;
    ecx = MEM32(esi + 8);
    eax = 0; /* xor self */
    if (CMP_NE(MEM32(ecx + 0x14), eax)) goto loc_004954B1; /* jne: not equal / not zero */

loc_00495418: ;
    ecx = MEM32(esi + 0xC);
    if (CMP_NE(MEM32(ecx + 0x14), eax)) goto loc_004954B1; /* jne: not equal / not zero */

loc_00495424: ;
    if (CMP_EQ(MEM32(esi + 4), eax)) goto loc_0049542F; /* je: equal / zero */

loc_00495429: ;
    if (CMP_NE(MEM8(edi + 0x2B), 3)) goto loc_00495444; /* jne: not equal / not zero */

loc_0049542F: ;
    eax = MEM32(esi + 0x30);
    eax = eax + 7;
    eax = eax & 0xFFFFFFF8u;
    eax = eax * 8 + 0x308;
    MEM32(ebp + -8) = eax;
    goto loc_0049544B;

loc_00495444: ;
    MEM32(ebp + -8) = 0x610;

loc_0049544B: ;
    eax = MEM32(0x561018);
    eax = MEM32(eax);
    edx = MEM32(ebp + -4);
    ecx = MEM32(edx + 0x1DC);
    PUSH32(esp, ebx);
    ebx = MEM32(esi + 0x2C);
    MEM32(ebp + 8) = eax;
    eax = ebx;
    ecx = ecx + 0xC8;
    eax = eax - MEM32(ebp + 8);
    if (((int32_t)eax >= 0)) goto loc_00495472; /* jns: not sign (positive) */

loc_0049546F: ;
    ebx = MEM32(ebp + 8);

loc_00495472: ;
    ecx = ecx - ebx;
    if (((int32_t)ecx >= 0)) goto loc_00495482; /* jns: not sign (positive) */

loc_00495476: ;
    eax = MEM32(edx + 0x1D8);
    eax++;
    MEM32(ebp + -12) = eax;
    goto loc_004954B0;

loc_00495482: ;
    eax = MEM32(ebp + -8);
    eax = (uint32_t)((int32_t)eax * (int32_t)0x3E8);
    edx = 0; /* xor self */
    { uint64_t _dividend = ((uint64_t)edx << 32) | eax;
      eax = (uint32_t)(_dividend / (uint32_t)MEM32(esi + 0x28));
      edx = (uint32_t)(_dividend % (uint32_t)MEM32(esi + 0x28)); }
    PUSH32(esp, edi);
    PUSH32(esp, esi);
    eax = eax + ebx;
    MEM32(esi + 0x2C) = eax;
    eax = MEM32(edi);
    ecx = MEM32(edi + 4);
    MEM32(ecx) = eax;
    MEM32(eax + 4) = ecx;
    ecx = MEM32(ebp + -4);
    MEM32(edi) = MEM32(edi) & 0;
    PUSH32(esp, 0); sub_00495143(); /* call 0x00495143 */

loc_004954AC: ;
    MEM8(edi + 0x2B) = 0;

loc_004954B0: ;
    POP32(esp, ebx);

loc_004954B1: ;
    PUSH32(esp, MEM32(ebp + -12));
    ecx = MEM32(ebp + -4);
    esi = esi + 0x18;
    PUSH32(esp, esi);
    PUSH32(esp, 0); sub_00492F6E(); /* call 0x00492F6E */

loc_004954C0: ;
    POP32(esp, edi);
    POP32(esp, esi);
    esp = ebp;
    POP32(esp, ebp); /* leave */
    esp += 8; return; /* ret 4 */

}

/**
 * sub_004954C6
 * Original: 0x004954C6 - 0x00495555 (143 bytes, 48 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_004954C6(void)
{
    uint32_t ebp;
    int _flags = 0; /* fallback flag var */

loc_004954C6: ;
    PUSH32(esp, ebp);
    ebp = esp;
    esp = esp - 0x14;
    eax = MEM32(ebp + 8);
    MEM32(ebp + -4) = ecx;
    ecx = MEM32(eax + 0x44);
    PUSH32(esp, ebx);
    PUSH32(esp, esi);
    esi = MEM32(eax + 0x40);
    ebx = MEM32(esi);
    MEM32(ebp + -8) = ecx;
    ecx = MEM32(esi + 8);
    ecx = ecx & 0xFBF4000Bu;
    ecx = ecx | 3;
    MEM32(esi + 8) = ecx;
    ecx = 0; /* xor self */
    (void)0; /* cmp MEM32(eax + 0x54), ecx - flags set for next jcc */
    PUSH32(esp, edi);
    edi = MEM32(ebp + 0xC);
    MEM32(ebp + -16) = esi;
    MEM32(ebp + -20) = ebx;
    if (CMP_BE(MEM32(eax + 0x54), ecx)) goto loc_0049550C; /* jbe: below or equal (unsigned <=) */

loc_004954FF: ;
    (void)0; /* cmp MEM8(edi + 0xC), 5 - flags set for next jcc */
    MEM32(ebp + -12) = 1;
    if (CMP_NE(MEM8(edi + 0xC), 5)) goto loc_0049550F; /* jne: not equal / not zero */

loc_0049550C: ;
    MEM32(ebp + -12) = ecx;

loc_0049550F: ;
    PUSH32(esp, 0x11);
    PUSH32(esp, ecx);
    eax = esp;
    MEM16(esi + 4) = 0x6E;
    MEM32(eax) = ecx;
    ecx = MEM32(ebp + -4);
    PUSH32(esp, esi);
    PUSH32(esp, 0); sub_0048E1B9(); /* call 0x0048E1B9 */

loc_00495525: ;
    SET_LO8(eax, MEM8(edi + 0x18));
    SET_LO8(eax, LO8(eax) & 0xE0);
    if (CMP_NE(LO8(eax), 0x80)) { sub_00495555(); return; } /* jne: not equal / not zero */

loc_0049552E: ;
    eax = MEM32(ebp + -4);
    ecx = MEM32(eax + 0x268);
    MEM32(ebx + 0xC) = ecx;
    ecx = MEM32(edi + 0x10);
    MEM32(ebx + 0x10) = ecx;
    SET_LO16(eax, MEM16(eax + 0x8CE));
    MEM16(ebx + 0x14) = LO16(eax);
    SET_LO16(eax, MEM16(edi + 0xE));
    MEM16(ebx + 0x16) = LO16(eax);
    g_seh_ebp = ebp; sub_00495594(); return; /* tail jmp 0x00495594 */

}

/**
 * sub_0049571B
 * Original: 0x0049571B - 0x00495839 (286 bytes, 95 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0049571B(void)
{
    uint32_t ebp;
    int _flags = 0; /* fallback flag var */

loc_0049571B: ;
    PUSH32(esp, ebp);
    ebp = esp;
    PUSH32(esp, ecx);
    PUSH32(esp, ecx);
    eax = MEM32(ebp + 8);
    eax = MEM32(eax + 0x3C);
    PUSH32(esp, ebx);
    ebx = ecx;
    ecx = MEM32(eax + 8);
    PUSH32(esp, esi);
    PUSH32(esp, edi);
    edi = MEM32(eax);
    ecx = ecx & 0xFBF4092Cu;
    ecx = ecx | 0x924;
    MEM32(eax + 8) = ecx;
    edx = MEM32(ebx + 0xAF4);
    edx = MEM32(edx + 4);
    PUSH32(esp, 0);
    PUSH32(esp, ecx);
    ecx = esp;
    MEM32(ecx) = edx;
    PUSH32(esp, eax);
    ecx = ebx;
    MEM32(ebp + -8) = eax;
    MEM32(ebp + -4) = edi;
    PUSH32(esp, 0); sub_0048E1B9(); /* call 0x0048E1B9 */

loc_0049575D: ;
    eax = MEM32(ebp + 0xC);
    MEM16(edi + 0x20) = 0x5304;
    MEM16(edi + 0x22) = 0x46;
    esi = eax + 0x58;
    edi = edi + 0x24;
    PUSH32(esp, 5);
    POP32(esp, ecx);
    memcpy((void*)XBOX_PTR(edi), (void*)XBOX_PTR(esi), ecx * 4);
    esi += ecx * 4; edi += ecx * 4; ecx = 0; /* rep movsd */
    ecx = MEM32(ebp + -4);
    MEM16(ecx + 0x3C) = MEM16(ecx + 0x3C) & 0;
    esi = MEM32(ebp + 8);
    ecx = ecx + 0x38;
    MEM16(ecx) = 0x5804;
    MEM16(ecx + 2) = 0x2E;
    edx = MEM32(eax + 0x18);
    MEM32(ecx + 8) = edx;
    edx = MEM32(eax + 0x1C);
    MEM32(ecx + 0xC) = edx;
    edx = MEM32(esi + 4);
    MEM32(ecx + 0x10) = edx;
    edx = MEM32(esi + 8);
    MEM32(ecx + 0x14) = edx;
    eax = eax - MEM32(esi + 0x4C);
    edi = 0xAC;
    edx = ((int32_t)eax < 0) ? 0xFFFFFFFF : 0; /* cdq */
    { int64_t _dividend = ((int64_t)(int32_t)edx << 32) | eax;
      eax = (uint32_t)((int32_t)(_dividend / (int32_t)edi));
      edx = (uint32_t)((int32_t)(_dividend % (int32_t)edi)); }
    MEM32(ecx + 0x18) = eax;
    eax = MEM32(ebx + 0xAF4);
    eax = MEM32(eax + 0xD8);
    MEM32(ecx + 0x1C) = eax;
    eax = ebx + 0x91E;
    if (CMP_EQ(MEM16(eax), 0)) goto loc_004957DA; /* je: equal / zero */

loc_004957D1: ;
    if (TEST_NZ(MEM8(ebx + 0x8CD), 1)) goto loc_004957E5; /* jne: not equal / not zero */

loc_004957DA: ;
    eax = MEM32(ebx + 0xAF4);
    eax = eax + 0xDC;

loc_004957E5: ;
    SET_LO16(eax, MEM16(eax));
    edi = MEM32(ebp + 0xC);
    PUSH32(esp, 0xC);
    MEM16(ecx + 0x20) = LO16(eax);
    eax = ecx + 0x22;
    PUSH32(esp, eax);
    PUSH32(esp, 0);
    eax = ecx + 0x2E;
    PUSH32(esp, eax);
    PUSH32(esp, 0x22);
    PUSH32(esp, ecx);
    PUSH32(esp, 0x10);
    eax = edi + 0x20;
    PUSH32(esp, eax);
    MEM16(ecx + 6) = 2;
    PUSH32(esp, 0); sub_00493075(); /* call 0x00493075 */

loc_0049580F: ;
    eax = MEM32(ebp + -8);
    PUSH32(esp, 0);
    MEM32(eax + 0x14) = 1;
    PUSH32(esp, MEM32(ebx + 0xAF4));
    ecx = ebx;
    PUSH32(esp, eax);
    PUSH32(esp, 0); sub_0048F1FE(); /* call 0x0048F1FE */

loc_00495829: ;
    PUSH32(esp, edi);
    PUSH32(esp, esi);
    ecx = ebx;
    PUSH32(esp, 0); sub_004954C6(); /* call 0x004954C6 */

loc_00495832: ;
    POP32(esp, edi);
    POP32(esp, esi);
    POP32(esp, ebx);
    esp = ebp;
    POP32(esp, ebp); /* leave */
    esp += 12; return; /* ret 8 */

}

/**
 * sub_00495839
 * Original: 0x00495839 - 0x00495879 (64 bytes, 22 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00495839(void)
{
    uint32_t ebp;
    int _flags = 0; /* fallback flag var */

loc_00495839: ;
    PUSH32(esp, ebp);
    ebp = esp;
    esp = esp - 0x1C;
    PUSH32(esp, ebx);
    PUSH32(esp, esi);
    esi = MEM32(ebp + 8);
    (void)0; /* test MEM8(esi + 0x13), 0x80 - flags set for next jcc */
    eax = MEM32(esi + 0x44);
    MEM32(ebp + -16) = eax;
    eax = MEM32(ebp + 0xC);
    edx = MEM32(eax + 0x94);
    PUSH32(esp, edi);
    edi = MEM32(esi + 0x40);
    MEM32(ebp + -8) = ecx;
    MEM32(ebp + -12) = edi;
    MEM32(ebp + -20) = edx;
    if (TEST_Z(MEM8(esi + 0x13), 0x80)) { sub_00495879(); return; } /* je: equal / zero */

loc_00495866: ;
    if (TEST_Z(MEM8(eax + 0xA0), 1)) { sub_00495879(); return; } /* je: equal / zero */

loc_0049586F: ;
    ecx = 0x400;
    MEM32(ebp + 8) = ecx;
    g_seh_ebp = ebp; sub_00495880(); return; /* tail jmp 0x00495880 */

}

/**
 * sub_00495A11
 * Original: 0x00495A11 - 0x00495B29 (280 bytes, 99 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00495A11(void)
{
    uint32_t ebp;
    int _flags = 0; /* fallback flag var */

loc_00495A11: ;
    PUSH32(esp, ebp);
    ebp = esp;
    PUSH32(esp, ecx);
    PUSH32(esp, ebx);
    ebx = MEM32(ebp + 0xC);
    PUSH32(esp, esi);
    esi = MEM32(ebp + 8);
    eax = ebx;
    eax = eax - MEM32(esi + 0x4C);
    MEM32(ebp + -4) = ecx;
    edx = ((int32_t)eax < 0) ? 0xFFFFFFFF : 0; /* cdq */
    ecx = 0xAC;
    { int64_t _dividend = ((int64_t)(int32_t)edx << 32) | eax;
      eax = (uint32_t)((int32_t)(_dividend / (int32_t)ecx));
      edx = (uint32_t)((int32_t)(_dividend % (int32_t)ecx)); }
    PUSH32(esp, edi);
    eax = eax + eax * 2;
    edi = esi + eax * 8 + 0x68;
    MEM16(edi + 0xC) = MEM16(edi + 0xC) | 0xFFFF;
    MEM16(edi + 0xE) = MEM16(edi + 0xE) | 0xFFFF;
    if (CMP_BE(MEM32(ebx + 0xA4), 0)) goto loc_00495B22; /* jbe: below or equal (unsigned <=) */

loc_00495A4E: ;
    edx = MEM32(esi + 0x54);
    (void)0; /* test edx, edx - flags set for next jcc */
    eax = MEM32(esi + 0x58);
    ecx = MEM32(ebx + 0xA8);
    if (CMP_BE(edx & edx, 0)) goto loc_00495A83; /* jbe: below or equal (unsigned <=) */

loc_00495A5E: ;
    ecx = ecx + 0x1C;
    MEM32(ebp + 8) = edx;

loc_00495A64: ;
    edx = MEM32(ecx + -4);
    if (CMP_BE(edx & edx, 0)) goto loc_00495A70; /* jbe: below or equal (unsigned <=) */

loc_00495A6B: ;
    MEM32(eax) = edx;
    eax = eax + 4;

loc_00495A70: ;
    edx = MEM32(ecx);
    if (CMP_BE(edx & edx, 0)) goto loc_00495A7B; /* jbe: below or equal (unsigned <=) */

loc_00495A76: ;
    MEM32(eax) = edx;
    eax = eax + 4;

loc_00495A7B: ;
    ecx = ecx + 0x28;
    MEM32(ebp + 8) = MEM32(ebp + 8) - 1;
    if ((MEM32(ebp + 8) != 0)) goto loc_00495A64; /* jne: not equal / not zero */

loc_00495A83: ;
    ecx = MEM32(esi + 0x58);
    eax = eax - ecx;
    eax = (uint32_t)((int32_t)eax >> 2);
    MEM32(ebp + 8) = eax;
    if ((eax == 0)) goto loc_00495AF0; /* je: equal / zero */

loc_00495A90: ;
    if (CMP_BE(eax, 1)) goto loc_00495A9F; /* jbe: below or equal (unsigned <=) */

loc_00495A95: ;
    PUSH32(esp, eax);
    PUSH32(esp, ecx);
    ecx = MEM32(ebp + -4);
    PUSH32(esp, 0); sub_00494ED0(); /* call 0x00494ED0 */

loc_00495A9F: ;
    PUSH32(esp, MEM32(ebp + 8));
    ecx = MEM32(ebp + -4);
    PUSH32(esp, MEM32(esi + 0x58));
    PUSH32(esp, 0); sub_00494EAE(); /* call 0x00494EAE */

loc_00495AAD: ;
    ecx = 0x1F4;
    eax = eax + ecx;
    edx = 0; /* xor self */
    ebx = 0x3E8;
    { uint64_t _dividend = ((uint64_t)edx << 32) | eax;
      eax = (uint32_t)(_dividend / (uint32_t)ebx);
      edx = (uint32_t)(_dividend % (uint32_t)ebx); }
    if (CMP_B(eax, 0xFFFF)) goto loc_00495AC9; /* jb: below (unsigned <) */

loc_00495AC4: ;
    eax = 0xFFFF;

loc_00495AC9: ;
    MEM16(edi + 0xE) = LO16(eax);
    eax = MEM32(esi + 0x58);
    eax = MEM32(eax);
    eax = eax + ecx;
    edx = 0; /* xor self */
    ecx = 0x3E8;
    { uint64_t _dividend = ((uint64_t)edx << 32) | eax;
      eax = (uint32_t)(_dividend / (uint32_t)ecx);
      edx = (uint32_t)(_dividend % (uint32_t)ecx); }
    if (CMP_B(eax, 0xFFFF)) goto loc_00495AE9; /* jb: below (unsigned <) */

loc_00495AE4: ;
    eax = 0xFFFF;

loc_00495AE9: ;
    ebx = MEM32(ebp + 0xC);
    MEM16(edi + 0xC) = LO16(eax);

loc_00495AF0: ;
    ecx = MEM32(ebp + -4);
    PUSH32(esp, 0);
    PUSH32(esp, ebx);
    PUSH32(esp, esi);
    PUSH32(esp, 0); sub_00494F4F(); /* call 0x00494F4F */

loc_00495AFC: ;
    PUSH32(esp, 1);
    PUSH32(esp, ebx);
    PUSH32(esp, esi);
    esi = MEM32(ebp + -4);
    ecx = esi;
    MEM32(edi + 0x10) = eax;
    PUSH32(esp, 0); sub_00494F4F(); /* call 0x00494F4F */

loc_00495B0D: ;
    MEM32(edi + 0x14) = eax;
    eax = MEM32(esi + 0xD10);
    if (CMP_BE(MEM32(edi + 0x10), eax)) goto loc_00495B22; /* jbe: below or equal (unsigned <=) */

loc_00495B1B: ;
    if (CMP_BE(eax & eax, 0)) goto loc_00495B22; /* jbe: below or equal (unsigned <=) */

loc_00495B1F: ;
    MEM32(edi + 0x10) = eax;

loc_00495B22: ;
    POP32(esp, edi);
    POP32(esp, esi);
    POP32(esp, ebx);
    esp = ebp;
    POP32(esp, ebp); /* leave */
    esp += 12; return; /* ret 8 */

}

/**
 * sub_00495B29
 * Original: 0x00495B29 - 0x00495B6D (68 bytes, 27 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00495B29(void)
{
    int _flags = 0; /* fallback flag var */

loc_00495B29: ;
    eax = MEM32(esp + 8);
    PUSH32(esp, ebx);
    PUSH32(esp, esi);
    PUSH32(esp, edi);
    edi = MEM32(esp + 0x10);
    eax = eax - MEM32(edi + 0x4C);
    ebx = ecx;
    edx = ((int32_t)eax < 0) ? 0xFFFFFFFF : 0; /* cdq */
    ecx = 0xAC;
    { int64_t _dividend = ((int64_t)(int32_t)edx << 32) | eax;
      eax = (uint32_t)((int32_t)(_dividend / (int32_t)ecx));
      edx = (uint32_t)((int32_t)(_dividend % (int32_t)ecx)); }
    eax = eax + eax * 2;
    esi = edi + eax * 8 + 0x68;
    if (TEST_NZ(MEM8(esi), 1)) goto loc_00495B5C; /* jne: not equal / not zero */

loc_00495B4D: ;
    PUSH32(esp, MEM32(esp + 0x14));
    ecx = ebx;
    PUSH32(esp, edi);
    PUSH32(esp, 0); sub_00495A11(); /* call 0x00495A11 */

loc_00495B59: ;
    MEM8(esi) = MEM8(esi) | 1;

loc_00495B5C: ;
    MEM32(edi + 0x64) = MEM32(edi + 0x64) - 1;
    PUSH32(esp, edi);
    ecx = ebx;
    PUSH32(esp, 0); sub_00494E14(); /* call 0x00494E14 */

loc_00495B67: ;
    POP32(esp, edi);
    POP32(esp, esi);
    POP32(esp, ebx);
    esp += 12; return; /* ret 8 */

}

/**
 * sub_00495B6D
 * Original: 0x00495B6D - 0x00495B91 (36 bytes, 11 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00495B6D(void)
{
    int _flags = 0; /* fallback flag var */

loc_00495B6D: ;
    eax = MEM32(esp + 4);
    if (TEST_Z(eax, eax)) goto loc_00495B8E; /* je: equal / zero */

loc_00495B75: ;
    if (CMP_EQ(MEM32(eax + 0x14), 0)) goto loc_00495B88; /* je: equal / zero */

loc_00495B7B: ;
    MEM32(eax + 0x18) = MEM32(eax + 0x18) & 0;
    MEM32(eax + 0x10) = 0x493441;
    goto loc_00495B8E;

loc_00495B88: ;
    PUSH32(esp, eax);
    PUSH32(esp, 0); sub_00493441(); /* call 0x00493441 */

loc_00495B8E: ;
    esp += 8; return; /* ret 4 */

}

/**
 * sub_00495B91
 * Original: 0x00495B91 - 0x00495EA9 (792 bytes, 270 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00495B91(void)
{
    uint32_t ebp;
    int _flags = 0; /* fallback flag var */

loc_00495B91: ;
    PUSH32(esp, ebp);
    ebp = esp;
    esp = esp - 0x40;
    PUSH32(esp, ebx);
    eax = ebp + -28;
    PUSH32(esp, eax);
    MEM32(ebp + -4) = ecx;
    PUSH32(esp, 0); sub_00494E66(); /* call 0x00494E66 */

loc_00495BA4: ;
    ebx = MEM32(ebp + 0x14);
    if (CMP_B(MEM16(ebx + 2), 0x4E)) goto loc_00495EA4; /* jb: below (unsigned <) */

loc_00495BB2: ;
    if (CMP_B(MEM32(ebp + 0x18), 0x4E)) goto loc_00495EA4; /* jb: below (unsigned <) */

loc_00495BBC: ;
    ecx = MEM32(ebp + -4);
    PUSH32(esp, esi);
    eax = ebx + 0x12;
    PUSH32(esp, eax);
    PUSH32(esp, 0); sub_0048DC89(); /* call 0x0048DC89 */

loc_00495BC9: ;
    esi = eax;
    if (TEST_Z(esi, esi)) goto loc_00495EA3; /* je: equal / zero */

loc_00495BD3: ;
    eax = MEM32(esi + 0xF0);
    (void)0; /* test eax, eax - flags set for next jcc */
    MEM32(ebp + -20) = eax;
    if (TEST_Z(eax, eax)) goto loc_00495EA3; /* je: equal / zero */

loc_00495BE4: ;
    PUSH32(esp, 0xC);
    eax = ebx + 0x42;
    PUSH32(esp, eax);
    eax = ZX16(MEM16(ebx + 2));
    eax = eax - 0x4E;
    PUSH32(esp, eax);
    eax = ebx + 0x4E;
    PUSH32(esp, eax);
    PUSH32(esp, 0x42);
    PUSH32(esp, ebx);
    PUSH32(esp, 0x10);
    eax = esi + 8;
    PUSH32(esp, eax);
    PUSH32(esp, 0); sub_004930B5(); /* call 0x004930B5 */

loc_00495C04: ;
    if (TEST_Z(eax, eax)) goto loc_00495EA3; /* je: equal / zero */

loc_00495C0C: ;
    ecx = MEM32(ebp + -4);
    PUSH32(esp, edi);
    PUSH32(esp, 0x28);
    edi = ebx + 0x1A;
    PUSH32(esp, edi);
    eax = ebx + 6;
    PUSH32(esp, eax);
    PUSH32(esp, 0x18);
    esi = esi + 0x18;
    PUSH32(esp, esi);
    PUSH32(esp, 0);
    PUSH32(esp, 0); sub_0048DD50(); /* call 0x0048DD50 */

loc_00495C27: ;
    if (CMP_NE(MEM32(ebx + 0x3E), 0)) goto loc_00495EA2; /* jne: not equal / not zero */

loc_00495C31: ;
    ecx = MEM32(ebp + -4);
    eax = ebp + -64;
    PUSH32(esp, eax);
    PUSH32(esp, 0); sub_0048E91C(); /* call 0x0048E91C */

loc_00495C3D: ;
    PUSH32(esp, 9);
    POP32(esp, ecx);
    esi = ebp + -64;
    eax = 0; /* xor self */
    /* repe cmpsd - string compare, ecx iterations */
    if (1 /* strings matched (repe cmpsb) */) goto loc_00495C67; /* je: equal / zero */

loc_00495C49: ;
    if (TEST_NZ(MEM8(ebx + 0x12), 0xE0)) goto loc_00495EA2; /* jne: not equal / not zero */

loc_00495C53: ;
    PUSH32(esp, 3);
    POP32(esp, ecx);
    edi = ebx + 0x24;
    esi = ebp + -54;
    eax = 0; /* xor self */
    /* repe cmpsw - string compare, ecx iterations */
    if (0 /* strings differed (repe cmpsb) */) goto loc_00495EA2; /* jne: not equal / not zero */

loc_00495C67: ;
    esi = MEM32(ebp + -4);
    eax = ZX8(MEM8(esi + 0x48));
    ecx = MEM32(esi + 0x1D8);
    ebx = MEM32(ebp + -20);
    edi = MEM32(ebx + 0x38);
    MEM32(ebp + -8) = MEM32(ebp + -8) & 0;
    MEM32(ebp + -12) = MEM32(ebp + -12) & 0;
    eax = eax + eax * 4;
    edx = eax;
    eax = ecx;
    eax = eax - edx;
    edx = MEM32(ebp + 0x14);
    ebx = ebx + 0x40;
    (void)0; /* test MEM8(edx + 0x11), 1 - flags set for next jcc */
    MEM32(ebp + 0x18) = edi;
    MEM32(ebp + -16) = eax;
    if (TEST_Z(MEM8(edx + 0x11), 1)) goto loc_00495D14; /* je: equal / zero */

loc_00495C9D: ;
    if (CMP_BE(edi & edi, 0)) goto loc_00495EA2; /* jbe: below or equal (unsigned <=) */

loc_00495CA5: ;
    SET_LO8(eax, MEM8(edx + 0x10));
    MEM8(ebp + 0x17) = LO8(eax);

loc_00495CAB: ;
    SET_LO8(eax, MEM8(ebp + 0x17));
    if (CMP_B(MEM8(ebx + 0x2A), LO8(eax))) goto loc_00495CCC; /* jb: below (unsigned <) */

loc_00495CB3: ;
    SET_LO16(eax, MEM16(ebx + 0x28));
    if (CMP_NE(LO16(eax), MEM16(edx + 0xE))) goto loc_00495CCC; /* jne: not equal / not zero */

loc_00495CBD: ;
    PUSH32(esp, 2);
    POP32(esp, ecx);
    edi = edx + 6;
    esi = ebx + 0x20;
    eax = 0; /* xor self */
    /* repe cmpsd - string compare, ecx iterations */
    if (1 /* strings matched (repe cmpsb) */) goto loc_00495CDD; /* je: equal / zero */

loc_00495CCC: ;
    MEM32(ebp + 0x18) = MEM32(ebp + 0x18) - 1;
    ebx = ebx + 0x38;
    if (CMP_A(MEM32(ebp + 0x18), 0)) goto loc_00495CAB; /* ja: above (unsigned >) */

loc_00495CD8: ;
    goto loc_00495EA2;

loc_00495CDD: ;
    SET_LO8(eax, MEM8(ebp + 0x17));
    if (CMP_NE(MEM8(ebx + 0x2A), LO8(eax))) goto loc_00495EA2; /* jne: not equal / not zero */

loc_00495CE9: ;
    if (CMP_NE(MEM8(ebx + 0x2B), 1)) goto loc_00495EA2; /* jne: not equal / not zero */

loc_00495CF3: ;
    eax = MEM32(ebp + -16);
    if (CMP_B(MEM32(ebx + 8), eax)) goto loc_00495EA2; /* jb: below (unsigned <) */

loc_00495CFF: ;
    eax = MEM32(ebp + -28);
    MEM32(ebx + 0x18) = eax;
    eax = MEM32(ebp + -24);
    MEM32(ebx + 0x1C) = eax;
    MEM8(ebx + 0x2B) = 2;
    goto loc_00495E41;

loc_00495D14: ;
    edi = ZX8(MEM8(esi + 0x4C));
    eax = ZX8(MEM8(esi + 0x4D));
    eax = (uint32_t)((int32_t)eax * (int32_t)edi);
    eax = eax + eax * 4;
    ecx = ecx - eax;
    edi = 0; /* xor self */
    (void)0; /* cmp MEM32(ebp + 0x18), edi - flags set for next jcc */
    MEM32(ebp + 0x14) = ecx;
    if (CMP_BE(MEM32(ebp + 0x18), edi)) goto loc_00495DF2; /* jbe: below or equal (unsigned <=) */

loc_00495D32: ;
    if (CMP_NE(MEM8(ebx + 0x2B), 1)) goto loc_00495D48; /* jne: not equal / not zero */

loc_00495D38: ;
    eax = MEM32(ebx + 8);
    if (CMP_AE(eax, MEM32(ebp + -16))) goto loc_00495D44; /* jae: above or equal (unsigned >=) */

loc_00495D40: ;
    MEM8(ebx + 0x2B) = 0;

loc_00495D44: ;
    (void)0; /* cmp MEM8(ebx + 0x2B), 1 - flags set for next jcc */

loc_00495D48: ;
    if (CMP_BE(MEM8(ebx + 0x2B), 1)) goto loc_00495D62; /* jbe: below or equal (unsigned <=) */

loc_00495D4A: ;
    eax = MEM32(ebp + 0x14);
    if (CMP_AE(MEM32(ebx + 8), eax)) goto loc_00495D62; /* jae: above or equal (unsigned >=) */

loc_00495D52: ;
    eax = MEM32(ebx);
    ecx = MEM32(ebx + 4);
    MEM32(ecx) = eax;
    MEM32(eax + 4) = ecx;
    MEM32(ebx) = edi;
    MEM8(ebx + 0x2B) = 0;

loc_00495D62: ;
    if (CMP_NE(MEM8(ebx + 0x2B), 0)) goto loc_00495D7A; /* jne: not equal / not zero */

loc_00495D68: ;
    eax = MEM32(ebp + -8);
    if (CMP_EQ(eax, edi)) goto loc_00495D77; /* je: equal / zero */

loc_00495D6F: ;
    eax = MEM32(eax + 8);
    if (CMP_BE(eax, MEM32(ebx + 8))) goto loc_00495D7A; /* jbe: below or equal (unsigned <=) */

loc_00495D77: ;
    MEM32(ebp + -8) = ebx;

loc_00495D7A: ;
    SET_LO16(eax, MEM16(ebx + 0x28));
    if (CMP_NE(LO16(eax), MEM16(edx + 0xE))) goto loc_00495DD7; /* jne: not equal / not zero */

loc_00495D84: ;
    PUSH32(esp, 2);
    POP32(esp, ecx);
    edi = edx + 6;
    esi = ebx + 0x20;
    eax = 0; /* xor self */
    /* repe cmpsd - string compare, ecx iterations */
    if (0 /* strings differed (repe cmpsb) */) goto loc_00495DD7; /* jne: not equal / not zero */

loc_00495D93: ;
    SET_LO8(eax, MEM8(ebx + 0x2A));
    if (CMP_AE(LO8(eax), MEM8(edx + 0x10))) goto loc_00495EA2; /* jae: above or equal (unsigned >=) */

loc_00495D9F: ;
    if (CMP_NE(MEM8(ebx + 0x2B), 1)) goto loc_00495DA9; /* jne: not equal / not zero */

loc_00495DA5: ;
    MEM8(ebx + 0x2B) = 0;

loc_00495DA9: ;
    SET_LO8(eax, MEM8(ebx + 0x2B));
    if (TEST_NZ(LO8(eax), LO8(eax))) goto loc_00495DBB; /* jne: not equal / not zero */

loc_00495DB0: ;
    if (CMP_NE(MEM32(ebp + -12), 0)) goto loc_00495DD7; /* jne: not equal / not zero */

loc_00495DB6: ;
    MEM32(ebp + -12) = ebx;
    goto loc_00495DD7;

loc_00495DBB: ;
    if (CMP_EQ(LO8(eax), 3)) goto loc_00495DB6; /* je: equal / zero */

loc_00495DBF: ;
    eax = MEM32(ebp + -8);
    if (TEST_Z(eax, eax)) goto loc_00495DD4; /* je: equal / zero */

loc_00495DC6: ;
    if (CMP_NE(MEM8(eax + 0x2B), 2)) goto loc_00495DD7; /* jne: not equal / not zero */

loc_00495DCC: ;
    eax = MEM32(eax + 8);
    if (CMP_BE(eax, MEM32(ebx + 8))) goto loc_00495DD7; /* jbe: below or equal (unsigned <=) */

loc_00495DD4: ;
    MEM32(ebp + -8) = ebx;

loc_00495DD7: ;
    MEM32(ebp + 0x18) = MEM32(ebp + 0x18) - 1;
    edi = 0; /* xor self */
    ebx = ebx + 0x38;
    if (CMP_A(MEM32(ebp + 0x18), edi)) goto loc_00495D32; /* ja: above (unsigned >) */

loc_00495DE8: ;
    ebx = MEM32(ebp + -12);
    (void)0; /* cmp ebx, edi - flags set for next jcc */
    esi = MEM32(ebp + -4);
    if (CMP_NE(ebx, edi)) goto loc_00495DFD; /* jne: not equal / not zero */

loc_00495DF2: ;
    ebx = MEM32(ebp + -8);
    if (CMP_EQ(ebx, edi)) goto loc_00495EA2; /* je: equal / zero */

loc_00495DFD: ;
    eax = MEM32(edx + 6);
    MEM32(ebx + 0x20) = eax;
    eax = MEM32(edx + 0xA);
    MEM32(ebx + 0x24) = eax;
    eax = MEM32(esi + 0x1D8);
    MEM32(ebx + 8) = eax;
    SET_LO16(eax, MEM16(edx + 0xE));
    MEM16(ebx + 0x28) = LO16(eax);
    SET_LO8(eax, MEM8(edx + 0x10));
    MEM8(ebx + 0x2A) = LO8(eax);
    if (TEST_Z(MEM8(edx + 0x11), 2)) goto loc_00495E80; /* je: equal / zero */

loc_00495E26: ;
    SET_LO8(eax, MEM8(ebx + 0x2B));
    if (CMP_EQ(LO8(eax), 3)) goto loc_00495EA2; /* je: equal / zero */

loc_00495E2D: ;
    if (CMP_NE(LO8(eax), 2)) goto loc_00495E3D; /* jne: not equal / not zero */

loc_00495E31: ;
    eax = MEM32(ebx);
    ecx = MEM32(ebx + 4);
    MEM32(ecx) = eax;
    MEM32(eax + 4) = ecx;
    MEM32(ebx) = edi;

loc_00495E3D: ;
    MEM8(ebx + 0x2B) = 3;

loc_00495E41: ;
    eax = MEM32(ebp + 0xC);
    ecx = MEM32(ebp + 8);
    MEM32(ebx + 0x2C) = eax;
    SET_LO16(eax, MEM16(ebp + 0x10));
    MEM16(ebx + 0x30) = LO16(eax);
    PUSH32(esp, 0); sub_0049345C(); /* call 0x0049345C */

loc_00495E57: ;
    edx = MEM32(ebp + -20);
    esi = eax;
    esi = esi + 6;
    edi = ebx + 0x32;
    MEM32(edi) = MEM32(esi); esi += 4; edi += 4; /* movsd */
    MEM16(edi) = MEM16(esi); esi += 2; edi += 2; /* movsw */
    eax = edx + 0x10;
    ecx = MEM32(eax + 4);
    MEM32(ebx + 4) = ecx;
    MEM32(ebx) = eax;
    MEM32(ecx) = ebx;
    ecx = MEM32(ebp + -4);
    PUSH32(esp, edx);
    MEM32(eax + 4) = ebx;
    PUSH32(esp, 0); sub_004953EB(); /* call 0x004953EB */

loc_00495E7E: ;
    goto loc_00495EA2;

loc_00495E80: ;
    if (CMP_BE(MEM8(ebx + 0x2B), 1)) goto loc_00495E92; /* jbe: below or equal (unsigned <=) */

loc_00495E86: ;
    eax = MEM32(ebx);
    ecx = MEM32(ebx + 4);
    MEM32(ecx) = eax;
    MEM32(eax + 4) = ecx;
    MEM32(ebx) = edi;

loc_00495E92: ;
    MEM8(ebx + 0x2B) = 1;
    eax = MEM32(ebp + -28);
    MEM32(ebx + 0x10) = eax;
    eax = MEM32(ebp + -24);
    MEM32(ebx + 0x14) = eax;

loc_00495EA2: ;
    POP32(esp, edi);

loc_00495EA3: ;
    POP32(esp, esi);

loc_00495EA4: ;
    POP32(esp, ebx);
    esp = ebp;
    POP32(esp, ebp); /* leave */
    esp += 24; return; /* ret 20 */

}

/**
 * sub_00495ECC
 * Original: 0x00495ECC - 0x00495F03 (55 bytes, 21 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00495ECC(void)
{
    int _flags = 0; /* fallback flag var */

loc_00495ECC: ;
    PUSH32(esp, esi);
    esi = MEM32(esp + 8);
    (void)0; /* test esi, esi - flags set for next jcc */
    PUSH32(esp, edi);
    edi = ecx;
    if (TEST_Z(esi, esi)) goto loc_00495EFE; /* je: equal / zero */

loc_00495ED8: ;
    PUSH32(esp, MEM32(esi + 8));
    PUSH32(esp, 0); sub_00495B6D(); /* call 0x00495B6D */

loc_00495EE0: ;
    PUSH32(esp, MEM32(esi + 0xC));
    ecx = edi;
    PUSH32(esp, 0); sub_00495B6D(); /* call 0x00495B6D */

loc_00495EEA: ;
    PUSH32(esp, 0xFFFFFFFFu);
    eax = esi + 0x18;
    PUSH32(esp, eax);
    ecx = edi;
    PUSH32(esp, 0); sub_00492F6E(); /* call 0x00492F6E */

loc_00495EF7: ;
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, esi);
    PUSH32(esp, 0); RECOMP_ICALL_SAFE(MEM32(0x561190), _icall_esp); /* indirect call */
    }

loc_00495EFE: ;
    POP32(esp, edi);
    POP32(esp, esi);
    esp += 8; return; /* ret 4 */

}

/**
 * sub_00495F03
 * Original: 0x00495F03 - 0x00495F8F (140 bytes, 53 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00495F03(void)
{
    uint32_t ebp;
    int _flags = 0; /* fallback flag var */
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_00495F03: ;
    PUSH32(esp, ebx);
    PUSH32(esp, esi);
    esi = MEM32(esp + 0xC);
    (void)0; /* test esi, esi - flags set for next jcc */
    ebx = ecx;
    if (TEST_Z(esi, esi)) goto loc_00495F8A; /* je: equal / zero */

loc_00495F0F: ;
    ecx = MEM32(esi + 0xC);
    if (TEST_Z(ecx, ecx)) goto loc_00495F1C; /* je: equal / zero */

loc_00495F16: ;
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, 0); RECOMP_ICALL_SAFE(MEM32(0x561044), _icall_esp); /* indirect call */
    }

loc_00495F1C: ;
    ecx = MEM32(esi + 0x48);
    (void)0; /* test ecx, ecx - flags set for next jcc */
    eax = MEM32(esi + 0x4C);
    if (CMP_BE(ecx & ecx, 0)) goto loc_00495F58; /* jbe: below or equal (unsigned <=) */

loc_00495F26: ;
    PUSH32(esp, ebp);
    PUSH32(esp, edi);
    edi = eax + 0x94;
    ebp = ecx;

loc_00495F30: ;
    eax = MEM32(edi);
    if (TEST_Z(eax, eax)) goto loc_00495F4D; /* je: equal / zero */

loc_00495F36: ;
    MEM32(eax + 0x128) = MEM32(eax + 0x128) - 1;
    if ((MEM32(eax + 0x128) != 0)) goto loc_00495F4D; /* jne: not equal / not zero */

loc_00495F3E: ;
    if (TEST_NZ(MEM8(eax), 0x10)) goto loc_00495F4D; /* jne: not equal / not zero */

loc_00495F43: ;
    PUSH32(esp, 3);
    PUSH32(esp, eax);
    ecx = ebx;
    PUSH32(esp, 0); sub_0048FC7F(); /* call 0x0048FC7F */

loc_00495F4D: ;
    edi = edi + 0xAC;
    ebp--;
    if ((ebp != 0)) goto loc_00495F30; /* jne: not equal / not zero */

loc_00495F56: ;
    POP32(esp, edi);
    POP32(esp, ebp);

loc_00495F58: ;
    PUSH32(esp, MEM32(esi + 0x3C));
    ecx = ebx;
    PUSH32(esp, 0); sub_00495B6D(); /* call 0x00495B6D */

loc_00495F62: ;
    PUSH32(esp, MEM32(esi + 0x40));
    ecx = ebx;
    PUSH32(esp, 0); sub_00495B6D(); /* call 0x00495B6D */

loc_00495F6C: ;
    PUSH32(esp, MEM32(esi + 0x44));
    ecx = ebx;
    PUSH32(esp, 0); sub_00495B6D(); /* call 0x00495B6D */

loc_00495F76: ;
    PUSH32(esp, 0xFFFFFFFFu);
    eax = esi + 0x24;
    PUSH32(esp, eax);
    ecx = ebx;
    PUSH32(esp, 0); sub_00492F6E(); /* call 0x00492F6E */

loc_00495F83: ;
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, esi);
    PUSH32(esp, 0); RECOMP_ICALL_SAFE(MEM32(0x561190), _icall_esp); /* indirect call */
    }

loc_00495F8A: ;
    POP32(esp, esi);
    POP32(esp, ebx);
    esp += 8; return; /* ret 4 */

}

/**
 * sub_00495F8F
 * Original: 0x00495F8F - 0x0049600A (123 bytes, 51 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00495F8F(void)
{
    int _flags = 0; /* fallback flag var */

loc_00495F8F: ;
    PUSH32(esp, ebx);
    SET_LO8(ebx, MEM8(esp + 0x10));
    eax = 0; /* xor self */
    PUSH32(esp, esi);
    esi = MEM32(esp + 0x10);
    SET_LO8(eax, MEM8(esi + 0xD));
    SET_LO8(eax, LO8(eax) + 1);
    PUSH32(esp, edi);
    edi = ecx;
    SET_LO8(ecx, MEM8(esi + 0xC));
    (void)0; /* cmp LO8(ecx), LO8(ebx) - flags set for next jcc */
    SET_LO8(edx, (CMP_NE(LO8(ecx), LO8(ebx))) ? 1 : 0); /* setne */
    SET_LO8(edx, LO8(edx) - 1);
    MEM8(esi + 0xC) = LO8(ebx);
    edx = edx & eax;
    eax = MEM32(esi);
    (void)0; /* test eax, eax - flags set for next jcc */
    MEM8(esi + 0xD) = LO8(edx);
    if (TEST_Z(eax, eax)) goto loc_00495FC6; /* je: equal / zero */

loc_00495FBB: ;
    edx = MEM32(esi + 4);
    MEM32(edx) = eax;
    MEM32(eax + 4) = edx;
    MEM32(esi) = MEM32(esi) & 0;

loc_00495FC6: ;
    if (CMP_BE(LO8(ebx) & LO8(ebx), 0)) goto loc_00496004; /* jbe: below or equal (unsigned <=) */

loc_00495FCA: ;
    if (CMP_BE(LO8(ebx), 2)) goto loc_00495FF0; /* jbe: below or equal (unsigned <=) */

loc_00495FCF: ;
    if (CMP_BE(LO8(ebx), 3)) goto loc_00496004; /* jbe: below or equal (unsigned <=) */

loc_00495FD4: ;
    if (CMP_BE(LO8(ebx), 5)) goto loc_00495FF0; /* jbe: below or equal (unsigned <=) */

loc_00495FD9: ;
    if (CMP_NE(LO8(ebx), 6)) goto loc_00496004; /* jne: not equal / not zero */

loc_00495FDE: ;
    if (CMP_EQ(LO8(ecx), LO8(ebx))) goto loc_00496004; /* je: equal / zero */

loc_00495FE2: ;
    PUSH32(esp, esi);
    PUSH32(esp, MEM32(esp + 0x14));
    ecx = edi;
    PUSH32(esp, 0); sub_00495B29(); /* call 0x00495B29 */

loc_00495FEE: ;
    goto loc_00496004;

loc_00495FF0: ;
    eax = MEM32(esp + 0x10);
    ecx = MEM32(eax + 0x18);
    eax = eax + 0x14;
    MEM32(esi) = eax;
    MEM32(esi + 4) = ecx;
    MEM32(ecx) = esi;
    MEM32(eax + 4) = esi;

loc_00496004: ;
    POP32(esp, edi);
    POP32(esp, esi);
    POP32(esp, ebx);
    esp += 16; return; /* ret 12 */

}

/**
 * sub_0049600A
 * Original: 0x0049600A - 0x00496039 (47 bytes, 18 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0049600A(void)
{
    uint32_t ebp;
    int _flags = 0; /* fallback flag var */

loc_0049600A: ;
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, ebp);
    ebp = esp;
    PUSH32(esp, ecx);
    PUSH32(esp, ecx);
    PUSH32(esp, ebx);
    PUSH32(esp, esi);
    ebx = ecx;
    PUSH32(esp, 0); RECOMP_ICALL_SAFE(MEM32(0x5610F0), _icall_esp); /* indirect call */
    }

loc_00496019: ;
    PUSH32(esp, MEM32(ebp + 8));
    ecx = ebx;
    MEM8(ebp + -8) = LO8(eax);
    PUSH32(esp, 0); sub_0048DC89(); /* call 0x0048DC89 */

loc_00496026: ;
    esi = eax;
    (void)0; /* test esi, esi - flags set for next jcc */
    MEM32(ebp + -4) = esi;
    if (TEST_NZ(esi, esi)) { sub_00496039(); return; } /* jne: not equal / not zero */

loc_0049602F: ;
    esi = 0x2726;
    g_seh_ebp = ebp; sub_004961B9(); return; /* tail jmp 0x004961B9 */

}

/**
 * sub_0049621B
 * Original: 0x0049621B - 0x00496237 (28 bytes, 11 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0049621B(void)
{
    uint32_t ebp;

loc_0049621B: ;
    PUSH32(esp, ebp);
    ebp = esp;
    esp = esp - 0x10;
    MEM32(ebp + -4) = MEM32(ebp + -4) | 0xFFFFFFFFu;
    PUSH32(esp, ebx);
    ebx = ecx;
    eax = MEM32(ebx + 0x1D8);
    PUSH32(esp, edi);
    edi = MEM32(ebp + 8);
    MEM32(ebp + -8) = eax;
    g_seh_ebp = ebp; sub_004962AE(); return; /* tail jmp 0x004962AE */

}

/**
 * sub_00496449
 * Original: 0x00496449 - 0x00496754 (779 bytes, 266 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00496449(void)
{
    uint32_t ebp;
    int _flags = 0; /* fallback flag var */
    int _cf = 0; /* carry flag */

loc_00496449: ;
    PUSH32(esp, ebp);
    ebp = esp;
    esp = esp - 0x20;
    PUSH32(esp, esi);
    eax = ebp + -32;
    esi = ecx;
    PUSH32(esp, eax);
    MEM32(ebp + -4) = esi;
    PUSH32(esp, 0); sub_00494E66(); /* call 0x00494E66 */

loc_0049645E: ;
    edx = MEM32(ebp + 0x14);
    if (CMP_B(MEM16(edx + 2), 0x27)) goto loc_0049674F; /* jb: below (unsigned <) */

loc_0049646C: ;
    eax = MEM32(esi + 0xA94);
    (void)0; /* test eax, eax - flags set for next jcc */
    MEM32(ebp + -8) = eax;
    if (TEST_Z(eax, eax)) goto loc_0049674F; /* je: equal / zero */

loc_0049647D: ;
    PUSH32(esp, ebx);
    PUSH32(esp, edi);

loc_0049647F: ;
    PUSH32(esp, 2);
    POP32(esp, ecx);
    edi = edx + 6;
    esi = eax + 4;
    ebx = 0; /* xor self */
    /* repe cmpsd - string compare, ecx iterations */
    if (1 /* strings matched (repe cmpsb) */) goto loc_00496497; /* je: equal / zero */

loc_0049648E: ;
    eax = MEM32(eax);
    (void)0; /* test eax, eax - flags set for next jcc */
    MEM32(ebp + -8) = eax;
    if (TEST_NZ(eax, eax)) goto loc_0049647F; /* jne: not equal / not zero */

loc_00496497: ;
    if (TEST_Z(eax, eax)) goto loc_0049674D; /* je: equal / zero */

loc_0049649F: ;
    edi = ZX16(MEM16(edx + 0xE));
    if (CMP_AE(edi, MEM32(eax + 0x48))) goto loc_0049674D; /* jae: above or equal (unsigned >=) */

loc_004964AC: ;
    edi = (uint32_t)((int32_t)edi * (int32_t)0xAC);
    edi = edi + MEM32(eax + 0x4C);
    SET_LO8(ecx, MEM8(edi + 0xC));
    (void)0; /* test LO8(ecx), LO8(ecx) - flags set for next jcc */
    MEM32(ebp + -20) = edi;
    if (TEST_Z(LO8(ecx), LO8(ecx))) goto loc_0049674D; /* je: equal / zero */

loc_004964C3: ;
    if (CMP_EQ(LO8(ecx), 6)) goto loc_0049674D; /* je: equal / zero */

loc_004964CC: ;
    if (CMP_NE(MEM32(edi + 0x14), 0)) goto loc_0049674D; /* jne: not equal / not zero */

loc_004964D6: ;
    ecx = 0; /* xor self */
    SET_LO8(ecx, MEM8(edx + 0x11));
    ecx = ecx & 4;
    (void)0; /* cmp MEM32(eax + 0x54), 0 - flags set for next jcc */
    MEM32(ebp + -16) = ecx;
    if (CMP_NE(MEM32(eax + 0x54), 0)) goto loc_004964EF; /* jne: not equal / not zero */

loc_004964E7: ;
    if (TEST_Z(ecx, ecx)) goto loc_0049674D; /* je: equal / zero */

loc_004964EF: ;
    eax = ZX8(MEM8(edx + 0x1A));
    esi = ecx;
    esi = (uint32_t)(-(int32_t)esi);
    esi = _cf ? 0xFFFFFFFF : 0; /* sbb self (CF extend) */
    esi = esi & 7;
    if (CMP_G(eax, esi)) goto loc_0049674D; /* jg: greater (signed >) */

loc_00496504: ;
    ebx = ZX16(MEM16(edx + 2));
    ebx = ebx - 0x27;
    esi = ebx;
    esi = esi - eax;
    (void)0; /* test ecx, ecx - flags set for next jcc */
    MEM32(ebp + -24) = esi;
    if (TEST_NZ(ecx, ecx)) goto loc_0049651A; /* jne: not equal / not zero */

loc_00496516: ;
    (void)0; /* test ebx, ebx - flags set for next jcc */
    goto loc_00496537;

loc_0049651A: ;
    if (CMP_A(eax, ebx)) goto loc_0049674D; /* ja: above (unsigned >) */

loc_00496522: ;
    if (TEST_NZ(LO8(ebx), 7)) goto loc_0049674D; /* jne: not equal / not zero */

loc_0049652B: ;
    eax = MEM32(ebp + -4);
    eax = ZX8(MEM8(eax + 0xF));
    eax = eax << 2;
    (void)0; /* cmp esi, eax - flags set for next jcc */

loc_00496537: ;
    if (CMP_A(esi, eax)) goto loc_0049674D; /* ja: above (unsigned >) */

loc_0049653D: ;
    PUSH32(esp, 0xC);
    ecx = edx + 0x1B;
    PUSH32(esp, ecx);
    PUSH32(esp, ebx);
    eax = edx + 0x27;
    PUSH32(esp, eax);
    PUSH32(esp, 0x1B);
    PUSH32(esp, edx);
    MEM32(ebp + -12) = eax;
    PUSH32(esp, 0x10);
    eax = edi + 0x20;
    PUSH32(esp, eax);
    PUSH32(esp, 0); sub_004930B5(); /* call 0x004930B5 */

loc_00496559: ;
    if (TEST_Z(eax, eax)) goto loc_0049674D; /* je: equal / zero */

loc_00496561: ;
    if (CMP_BE(ebx & ebx, 0)) goto loc_00496580; /* jbe: below or equal (unsigned <=) */

loc_00496565: ;
    eax = MEM32(ebp + 0x14);
    ecx = MEM32(ebp + -4);
    PUSH32(esp, ebx);
    PUSH32(esp, MEM32(ebp + -12));
    eax = eax + 6;
    PUSH32(esp, eax);
    PUSH32(esp, 0x18);
    eax = edi + 0x30;
    PUSH32(esp, eax);
    PUSH32(esp, 0);
    PUSH32(esp, 0); sub_0048DD50(); /* call 0x0048DD50 */

loc_00496580: ;
    (void)0; /* cmp MEM32(ebp + -16), 0 - flags set for next jcc */
    eax = MEM32(ebp + 0x14);
    eax = ZX16(MEM16(eax + 0xE));
    ecx = MEM32(ebp + -8);
    eax = eax + eax * 2;
    ebx = ecx + eax * 8 + 0x68;
    if (CMP_EQ(MEM32(ebp + -16), 0)) goto loc_004965FA; /* je: equal / zero */

loc_00496597: ;
    MEM8(ebx) = MEM8(ebx) | 2;
    ecx = MEM32(ebp + 0x14);
    (void)0; /* test MEM8(ecx + 0x11), 0x10 - flags set for next jcc */
    SET_LO8(eax, MEM8(ebx));
    if (TEST_Z(MEM8(ecx + 0x11), 0x10)) goto loc_004965A9; /* je: equal / zero */

loc_004965A5: ;
    SET_LO8(eax, LO8(eax) | 4);
    MEM8(ebx) = LO8(eax);

loc_004965A9: ;
    if (CMP_BE(esi & esi, 0)) goto loc_004965CF; /* jbe: below or equal (unsigned <=) */

loc_004965AD: ;
    edi = MEM32(edi + 0x9C);
    ecx = esi;
    esi = MEM32(ebp + -12);
    eax = ecx;
    ecx = ecx >> 2;
    memcpy((void*)XBOX_PTR(edi), (void*)XBOX_PTR(esi), ecx * 4);
    esi += ecx * 4; edi += ecx * 4; ecx = 0; /* rep movsd */
    ecx = eax;
    ecx = ecx & 3;
    memcpy((void*)XBOX_PTR(edi), (void*)XBOX_PTR(esi), ecx);
    esi += ecx; edi += ecx; ecx = 0; /* rep movsb */
    MEM8(ebx) = MEM8(ebx) | 8;
    edi = MEM32(ebp + -20);
    esi = MEM32(ebp + -24);

loc_004965CF: ;
    PUSH32(esp, MEM32(ebp + -8));
    ecx = MEM32(ebp + -4);
    PUSH32(esp, 0); sub_00494E14(); /* call 0x00494E14 */

loc_004965DA: ;
    eax = MEM32(edi + 0x9C);
    ecx = MEM32(ebp + -4);
    PUSH32(esp, 6);
    PUSH32(esp, edi);
    PUSH32(esp, MEM32(ebp + -8));
    MEM32(ebx + 8) = eax;
    MEM16(ebx + 6) = LO16(esi);
    PUSH32(esp, 0); sub_00495F8F(); /* call 0x00495F8F */

loc_004965F5: ;
    goto loc_0049674D;

loc_004965FA: ;
    eax = MEM32(ebp + -8);
    eax = MEM32(eax + 0x54);
    ecx = MEM32(edi + 0xA0);
    (void)0; /* cmp eax, ecx - flags set for next jcc */
    edx = eax;
    if (CMP_B(eax, ecx)) goto loc_0049660E; /* jb: below (unsigned <) */

loc_0049660C: ;
    edx = ecx;

loc_0049660E: ;
    ecx = MEM32(ebp + 0x14);
    eax = ZX8(MEM8(ecx + 0x10));
    if (CMP_AE(eax, edx)) goto loc_0049674D; /* jae: above or equal (unsigned >=) */

loc_0049661D: ;
    (void)0; /* test MEM8(ecx + 0x11), 1 - flags set for next jcc */
    edx = MEM32(edi + 0xA8);
    eax = eax + eax * 4;
    esi = edx + eax * 8;
    if (TEST_Z(MEM8(ecx + 0x11), 1)) goto loc_00496710; /* je: equal / zero */

loc_00496633: ;
    eax = MEM32(esi + 0x10);
    eax = eax | MEM32(esi + 0x14);
    if ((eax != 0)) goto loc_0049674D; /* jne: not equal / not zero */

loc_0049663F: ;
    eax = MEM32(ebp + -32);
    ecx = MEM32(ebp + -4);
    MEM32(esi + 0x10) = eax;
    eax = MEM32(ebp + -28);
    MEM32(esi + 0x14) = eax;
    PUSH32(esp, esi);
    eax = ebp + -32;
    PUSH32(esp, eax);
    PUSH32(esp, 0); sub_00494E86(); /* call 0x00494E86 */

loc_00496658: ;
    ecx = MEM32(ebp + 0x14);
    MEM32(esi + 0x1C) = eax;
    edx = MEM32(ecx + 0x12);
    if (CMP_AE(eax, edx)) goto loc_00496667; /* jae: above or equal (unsigned >=) */

loc_00496665: ;
    edx = eax;

loc_00496667: ;
    eax = eax - edx;
    MEM32(esi + 0x1C) = eax;
    ecx = MEM32(ecx + 0x16);
    (void)0; /* cmp eax, ecx - flags set for next jcc */
    MEM32(esi + 0x20) = ecx;
    if (CMP_AE(eax, ecx)) goto loc_00496678; /* jae: above or equal (unsigned >=) */

loc_00496676: ;
    ecx = eax;

loc_00496678: ;
    eax = eax - ecx;
    MEM32(esi + 0x1C) = eax;
    eax = esi + 8;
    ecx = MEM32(eax);
    ecx = ecx | MEM32(eax + 4);
    if ((ecx == 0)) goto loc_0049674D; /* je: equal / zero */

loc_0049668B: ;
    ecx = MEM32(ebp + -4);
    PUSH32(esp, eax);
    eax = ebp + -32;
    PUSH32(esp, eax);
    PUSH32(esp, 0); sub_00494E86(); /* call 0x00494E86 */

loc_00496698: ;
    ecx = MEM32(esi + 0x1C);
    (void)0; /* cmp ecx, eax - flags set for next jcc */
    MEM32(esi + 0x24) = eax;
    if (CMP_AE(ecx, eax)) goto loc_004966A4; /* jae: above or equal (unsigned >=) */

loc_004966A2: ;
    eax = ecx;

loc_004966A4: ;
    PUSH32(esp, MEM32(ebp + -8));
    ecx = ecx - eax;
    eax = MEM32(ebp + 0xC);
    MEM32(esi + 0x1C) = ecx;
    ecx = MEM32(ebp + -4);
    MEM32(edi + 0x10) = eax;
    SET_LO16(eax, MEM16(ebp + 0x10));
    esi = edi + 0xA4;
    MEM32(esi) = MEM32(esi) + 1;
    MEM16(edi + 0xE) = LO16(eax);
    MEM8(ebx) = MEM8(ebx) | 2;
    PUSH32(esp, 0); sub_00494E14(); /* call 0x00494E14 */

loc_004966CD: ;
    SET_LO16(eax, ZX8(MEM8(esi)));
    MEM16(ebx + 4) = LO16(eax);
    eax = MEM32(esi);
    esi = MEM32(ebp + -8);
    if (CMP_AE(eax, MEM32(esi + 0x50))) goto loc_004966EE; /* jae: above or equal (unsigned >=) */

loc_004966DF: ;
    eax = MEM32(edi + 0xA0);
    if (CMP_AE(eax, MEM32(esi + 0x54))) goto loc_004966EE; /* jae: above or equal (unsigned >=) */

loc_004966EA: ;
    PUSH32(esp, 4);
    goto loc_004966FB;

loc_004966EE: ;
    eax = MEM32(ebp + 0x14);
    (void)0; /* test MEM8(eax + 0x11), 8 - flags set for next jcc */
    SET_LO8(eax, (TEST_NZ(MEM8(eax + 0x11), 8)) ? 1 : 0); /* setne */
    SET_LO8(eax, LO8(eax) + 5);
    PUSH32(esp, eax);

loc_004966FB: ;
    ecx = MEM32(ebp + -4);
    PUSH32(esp, edi);
    PUSH32(esp, esi);
    PUSH32(esp, 0); sub_00495F8F(); /* call 0x00495F8F */

loc_00496705: ;
    ecx = MEM32(ebp + -4);
    PUSH32(esp, esi);
    PUSH32(esp, 0); sub_0049621B(); /* call 0x0049621B */

loc_0049670E: ;
    goto loc_0049674D;

loc_00496710: ;
    eax = MEM32(esi + 8);
    eax = eax | MEM32(esi + 0xC);
    if ((eax != 0)) goto loc_0049674D; /* jne: not equal / not zero */

loc_00496718: ;
    eax = MEM32(esi + 0x10);
    eax = eax | MEM32(esi + 0x14);
    if ((eax != 0)) goto loc_0049674D; /* jne: not equal / not zero */

loc_00496720: ;
    eax = MEM32(ebp + -32);
    ecx = MEM32(ebp + -4);
    MEM32(esi + 8) = eax;
    eax = MEM32(ebp + -28);
    MEM32(esi + 0xC) = eax;
    PUSH32(esp, esi);
    eax = ebp + -32;
    PUSH32(esp, eax);
    PUSH32(esp, 0); sub_00494E86(); /* call 0x00494E86 */

loc_00496739: ;
    ecx = MEM32(ebp + 0x14);
    MEM32(esi + 0x18) = eax;
    ecx = MEM32(ecx + 0x12);
    if (CMP_AE(eax, ecx)) goto loc_00496748; /* jae: above or equal (unsigned >=) */

loc_00496746: ;
    ecx = eax;

loc_00496748: ;
    eax = eax - ecx;
    MEM32(esi + 0x18) = eax;

loc_0049674D: ;
    POP32(esp, edi);
    POP32(esp, ebx);

loc_0049674F: ;
    POP32(esp, esi);
    esp = ebp;
    POP32(esp, ebp); /* leave */
    esp += 24; return; /* ret 20 */

}

/**
 * sub_00496754
 * Original: 0x00496754 - 0x00496823 (207 bytes, 81 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00496754(void)
{
    uint32_t ebp;
    int _flags = 0; /* fallback flag var */

loc_00496754: ;
    PUSH32(esp, ebp);
    ebp = esp;
    PUSH32(esp, ecx);
    PUSH32(esp, ecx);
    PUSH32(esp, ebx);
    ebx = MEM32(ecx + 0xA94);
    (void)0; /* test ebx, ebx - flags set for next jcc */
    MEM32(ebp + -4) = ecx;
    if (TEST_Z(ebx, ebx)) goto loc_0049681E; /* je: equal / zero */

loc_0049676B: ;
    edx = MEM32(ebp + 0x14);
    PUSH32(esp, esi);
    PUSH32(esp, edi);

loc_00496770: ;
    PUSH32(esp, 2);
    POP32(esp, ecx);
    edi = edx + 0x10;
    esi = ebx + 4;
    eax = 0; /* xor self */
    /* repe cmpsd - string compare, ecx iterations */
    if (1 /* strings matched (repe cmpsb) */) goto loc_00496785; /* je: equal / zero */

loc_0049677F: ;
    ebx = MEM32(ebx);
    if (TEST_NZ(ebx, ebx)) goto loc_00496770; /* jne: not equal / not zero */

loc_00496785: ;
    if (TEST_Z(ebx, ebx)) goto loc_0049681C; /* je: equal / zero */

loc_0049678D: ;
    eax = MEM32(edx + 0x18);
    if (CMP_AE(eax, MEM32(ebx + 0x48))) goto loc_0049681C; /* jae: above or equal (unsigned >=) */

loc_00496799: ;
    eax = (uint32_t)((int32_t)eax * (int32_t)0xAC);
    eax = eax + MEM32(ebx + 0x4C);
    (void)0; /* cmp MEM8(eax + 0xC), 2 - flags set for next jcc */
    MEM32(ebp + -8) = eax;
    if (CMP_NE(MEM8(eax + 0xC), 2)) goto loc_0049681C; /* jne: not equal / not zero */

loc_004967AB: ;
    if (CMP_NE(MEM32(eax + 0x14), 0)) goto loc_0049681C; /* jne: not equal / not zero */

loc_004967B1: ;
    PUSH32(esp, 2);
    edi = edx + 8;
    POP32(esp, ecx);
    esi = eax + 0x18;
    edx = 0; /* xor self */
    /* repe cmpsd - string compare, ecx iterations */
    if (0 /* strings differed (repe cmpsb) */) goto loc_0049681C; /* jne: not equal / not zero */

loc_004967C0: ;
    ecx = MEM32(ebp + 0x14);
    PUSH32(esp, 0xC);
    edx = ecx + 0x22;
    PUSH32(esp, edx);
    edx = ZX16(MEM16(ecx + 2));
    edx = edx - 0x2E;
    PUSH32(esp, edx);
    edx = ecx + 0x2E;
    PUSH32(esp, edx);
    PUSH32(esp, 0x22);
    PUSH32(esp, ecx);
    PUSH32(esp, 0x10);
    eax = eax + 0x20;
    PUSH32(esp, eax);
    PUSH32(esp, 0); sub_004930B5(); /* call 0x004930B5 */

loc_004967E3: ;
    if (TEST_Z(eax, eax)) goto loc_0049681C; /* je: equal / zero */

loc_004967E7: ;
    ecx = MEM32(ebp + 0xC);
    eax = MEM32(ebp + -8);
    MEM32(eax + 0x10) = ecx;
    SET_LO16(ecx, MEM16(ebp + 0x10));
    MEM16(eax + 0xE) = LO16(ecx);
    ecx = MEM32(eax + 0xA0);
    (void)0; /* cmp ecx, MEM32(ebx + 0x54) - flags set for next jcc */
    ecx = MEM32(ebp + -4);
    if (CMP_AE(ecx, MEM32(ebx + 0x54))) goto loc_0049680A; /* jae: above or equal (unsigned >=) */

loc_00496806: ;
    PUSH32(esp, 4);
    goto loc_0049680C;

loc_0049680A: ;
    PUSH32(esp, 5);

loc_0049680C: ;
    PUSH32(esp, eax);
    PUSH32(esp, ebx);
    PUSH32(esp, 0); sub_00495F8F(); /* call 0x00495F8F */

loc_00496813: ;
    ecx = MEM32(ebp + -4);
    PUSH32(esp, ebx);
    PUSH32(esp, 0); sub_0049621B(); /* call 0x0049621B */

loc_0049681C: ;
    POP32(esp, edi);
    POP32(esp, esi);

loc_0049681E: ;
    POP32(esp, ebx);
    esp = ebp;
    POP32(esp, ebp); /* leave */
    esp += 24; return; /* ret 20 */

}

/**
 * sub_00496823
 * Original: 0x00496823 - 0x00496B02 (735 bytes, 247 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00496823(void)
{
    uint32_t ebp;
    int _flags = 0; /* fallback flag var */

loc_00496823: ;
    PUSH32(esp, ebp);
    ebp = esp;
    esp = esp - 0x1C;
    PUSH32(esp, esi);
    eax = ebp + -28;
    esi = ecx;
    PUSH32(esp, eax);
    MEM32(ebp + -4) = esi;
    PUSH32(esp, 0); sub_00494E66(); /* call 0x00494E66 */

loc_00496838: ;
    edx = MEM32(ebp + 0x10);
    eax = ZX16(MEM16(edx + 2));
    if (CMP_NE(eax, MEM32(ebp + 0x14))) goto loc_00496AFD; /* jne: not equal / not zero */

loc_00496848: ;
    if (CMP_B(MEM32(ebp + 0x14), 0x18)) goto loc_00496AFD; /* jb: below (unsigned <) */

loc_00496852: ;
    eax = MEM32(esi + 0xA94);
    (void)0; /* test eax, eax - flags set for next jcc */
    MEM32(ebp + -8) = eax;
    if (TEST_Z(eax, eax)) goto loc_00496AFD; /* je: equal / zero */

loc_00496863: ;
    PUSH32(esp, ebx);
    PUSH32(esp, edi);

loc_00496865: ;
    PUSH32(esp, 2);
    POP32(esp, ecx);
    edi = edx + 4;
    esi = eax + 4;
    ebx = 0; /* xor self */
    /* repe cmpsd - string compare, ecx iterations */
    if (1 /* strings matched (repe cmpsb) */) goto loc_0049687D; /* je: equal / zero */

loc_00496874: ;
    eax = MEM32(eax);
    (void)0; /* test eax, eax - flags set for next jcc */
    MEM32(ebp + -8) = eax;
    if (TEST_NZ(eax, eax)) goto loc_00496865; /* jne: not equal / not zero */

loc_0049687D: ;
    if (TEST_Z(eax, eax)) goto loc_00496AFB; /* je: equal / zero */

loc_00496885: ;
    edi = ZX16(MEM16(edx + 0xC));
    if (CMP_AE(edi, MEM32(eax + 0x48))) goto loc_00496AFB; /* jae: above or equal (unsigned >=) */

loc_00496892: ;
    ebx = edi;
    ebx = (uint32_t)((int32_t)ebx * (int32_t)0xAC);
    ebx = ebx + MEM32(eax + 0x4C);
    if (CMP_EQ(MEM32(ebx + 0x14), 0)) goto loc_00496AFB; /* je: equal / zero */

loc_004968A7: ;
    ecx = MEM32(ebx + 0x94);
    if (CMP_NE(ecx, MEM32(ebp + 0xC))) goto loc_00496AFB; /* jne: not equal / not zero */

loc_004968B6: ;
    SET_LO8(ecx, MEM8(ebx + 0xC));
    if (CMP_EQ(LO8(ecx), 4)) goto loc_004968C7; /* je: equal / zero */

loc_004968BE: ;
    if (CMP_NE(LO8(ecx), 5)) goto loc_00496AFB; /* jne: not equal / not zero */

loc_004968C7: ;
    ecx = 0; /* xor self */
    SET_LO8(ecx, MEM8(edx + 0xF));
    MEM8(ebp + 0xF) = LO8(ecx);
    ecx = ecx & 4;
    MEM32(ebp + -12) = ecx;
    ecx = MEM32(eax + 0x54);
    (void)0; /* test ecx, ecx - flags set for next jcc */
    MEM32(ebp + -20) = ecx;
    if (TEST_NZ(ecx, ecx)) goto loc_004968E8; /* jne: not equal / not zero */

loc_004968DF: ;
    if (CMP_EQ(MEM32(ebp + -12), ecx)) goto loc_00496AFB; /* je: equal / zero */

loc_004968E8: ;
    esi = MEM32(ebp + 0x14);
    esi = esi + 0xFFFFFFE8u;
    (void)0; /* cmp MEM32(ebp + -12), 0 - flags set for next jcc */
    MEM32(ebp + -16) = esi;
    if (CMP_NE(MEM32(ebp + -12), 0)) goto loc_004968FB; /* jne: not equal / not zero */

loc_004968F7: ;
    (void)0; /* test esi, esi - flags set for next jcc */
    goto loc_00496907;

loc_004968FB: ;
    ecx = MEM32(ebp + -4);
    ecx = ZX8(MEM8(ecx + 0xF));
    ecx = ecx << 2;
    (void)0; /* cmp esi, ecx - flags set for next jcc */

loc_00496907: ;
    if (CMP_A(esi, ecx)) goto loc_00496AFB; /* ja: above (unsigned >) */

loc_0049690D: ;
    (void)0; /* cmp MEM32(ebp + -12), 0 - flags set for next jcc */
    ecx = edi + edi * 2;
    edi = eax + ecx * 8 + 0x68;
    MEM32(ebp + 0x14) = edi;
    if (CMP_EQ(MEM32(ebp + -12), 0)) goto loc_0049698A; /* je: equal / zero */

loc_0049691D: ;
    SET_LO8(ecx, MEM8(edi));
    if (TEST_NZ(LO8(ecx), 2)) goto loc_00496938; /* jne: not equal / not zero */

loc_00496924: ;
    SET_LO8(ecx, LO8(ecx) | 2);
    MEM8(edi) = LO8(ecx);
    ecx = MEM32(ebp + -4);
    PUSH32(esp, eax);
    PUSH32(esp, 0); sub_00494E14(); /* call 0x00494E14 */

loc_00496932: ;
    eax = MEM32(ebp + -8);
    edx = MEM32(ebp + 0x10);

loc_00496938: ;
    if (CMP_BE(esi & esi, 0)) goto loc_00496963; /* jbe: below or equal (unsigned <=) */

loc_0049693C: ;
    edi = MEM32(ebx + 0x9C);
    ecx = esi;
    esi = edx + 0x18;
    edx = ecx;
    ecx = ecx >> 2;
    memcpy((void*)XBOX_PTR(edi), (void*)XBOX_PTR(esi), ecx * 4);
    esi += ecx * 4; edi += ecx * 4; ecx = 0; /* rep movsd */
    ecx = edx;
    edx = MEM32(ebp + 0x10);
    ecx = ecx & 3;
    memcpy((void*)XBOX_PTR(edi), (void*)XBOX_PTR(esi), ecx);
    esi += ecx; edi += ecx; ecx = 0; /* rep movsb */
    ecx = MEM32(ebp + 0x14);
    MEM8(ecx) = MEM8(ecx) | 8;
    esi = MEM32(ebp + -16);
    edi = ecx;

loc_00496963: ;
    if (TEST_Z(MEM8(edx + 0xF), 0x10)) goto loc_0049696C; /* je: equal / zero */

loc_00496969: ;
    MEM8(edi) = MEM8(edi) | 4;

loc_0049696C: ;
    ecx = MEM32(ebx + 0x9C);
    PUSH32(esp, 6);
    PUSH32(esp, ebx);
    MEM32(edi + 8) = ecx;
    ecx = MEM32(ebp + -4);
    PUSH32(esp, eax);
    MEM16(edi + 6) = LO16(esi);
    PUSH32(esp, 0); sub_00495F8F(); /* call 0x00495F8F */

loc_00496985: ;
    goto loc_00496AFB;

loc_0049698A: ;
    eax = MEM32(ebx + 0xA0);
    ecx = MEM32(ebp + -20);
    if (CMP_B(ecx, eax)) goto loc_00496999; /* jb: below (unsigned <) */

loc_00496997: ;
    ecx = eax;

loc_00496999: ;
    eax = ZX8(MEM8(edx + 0xE));
    if (CMP_AE(eax, ecx)) goto loc_00496AFB; /* jae: above or equal (unsigned >=) */

loc_004969A5: ;
    (void)0; /* test MEM8(ebp + 0xF), 1 - flags set for next jcc */
    ecx = MEM32(ebx + 0xA8);
    eax = eax + eax * 4;
    esi = ecx + eax * 8;
    if (TEST_Z(MEM8(ebp + 0xF), 1)) goto loc_00496ABE; /* je: equal / zero */

loc_004969BB: ;
    eax = MEM32(esi + 0x10);
    eax = eax | MEM32(esi + 0x14);
    if ((eax != 0)) goto loc_00496AFB; /* jne: not equal / not zero */

loc_004969C7: ;
    eax = MEM32(ebp + -28);
    ecx = MEM32(ebp + -4);
    MEM32(esi + 0x10) = eax;
    eax = MEM32(ebp + -24);
    MEM32(esi + 0x14) = eax;
    PUSH32(esp, esi);
    eax = ebp + -28;
    PUSH32(esp, eax);
    PUSH32(esp, 0); sub_00494E86(); /* call 0x00494E86 */

loc_004969E0: ;
    ecx = MEM32(ebp + 0x10);
    MEM32(esi + 0x1C) = eax;
    edx = MEM32(ecx + 0x10);
    if (CMP_AE(eax, edx)) goto loc_004969EF; /* jae: above or equal (unsigned >=) */

loc_004969ED: ;
    edx = eax;

loc_004969EF: ;
    eax = eax - edx;
    MEM32(esi + 0x1C) = eax;
    ecx = MEM32(ecx + 0x14);
    (void)0; /* cmp eax, ecx - flags set for next jcc */
    MEM32(esi + 0x20) = ecx;
    if (CMP_AE(eax, ecx)) goto loc_00496A00; /* jae: above or equal (unsigned >=) */

loc_004969FE: ;
    ecx = eax;

loc_00496A00: ;
    eax = eax - ecx;
    MEM32(esi + 0x1C) = eax;
    eax = esi + 8;
    ecx = MEM32(eax);
    ecx = ecx | MEM32(eax + 4);
    if ((ecx == 0)) goto loc_00496AFB; /* je: equal / zero */

loc_00496A13: ;
    ecx = MEM32(ebp + -4);
    PUSH32(esp, eax);
    eax = ebp + -28;
    PUSH32(esp, eax);
    PUSH32(esp, 0); sub_00494E86(); /* call 0x00494E86 */

loc_00496A20: ;
    ecx = MEM32(esi + 0x1C);
    (void)0; /* cmp ecx, eax - flags set for next jcc */
    MEM32(esi + 0x24) = eax;
    if (CMP_AE(ecx, eax)) goto loc_00496A2C; /* jae: above or equal (unsigned >=) */

loc_00496A2A: ;
    eax = ecx;

loc_00496A2C: ;
    ecx = ecx - eax;
    MEM32(esi + 0x1C) = ecx;
    MEM32(ebx + 0xA4) = MEM32(ebx + 0xA4) + 1;
    SET_LO8(eax, MEM8(edi));
    (void)0; /* test LO8(eax), 2 - flags set for next jcc */
    esi = MEM32(ebp + -8);
    if (TEST_NZ(LO8(eax), 2)) goto loc_00496A4D; /* jne: not equal / not zero */

loc_00496A40: ;
    ecx = MEM32(ebp + -4);
    SET_LO8(eax, LO8(eax) | 2);
    PUSH32(esp, esi);
    MEM8(edi) = LO8(eax);
    PUSH32(esp, 0); sub_00494E14(); /* call 0x00494E14 */

loc_00496A4D: ;
    SET_LO16(eax, ZX8(MEM8(ebx + 0xA4)));
    MEM16(edi + 4) = LO16(eax);
    if (TEST_Z(MEM8(esi + 0x13), 0x80)) goto loc_00496A82; /* je: equal / zero */

loc_00496A5F: ;
    eax = MEM32(esi + 0x50);
    eax = eax >> 1;
    if (CMP_NE(MEM32(ebx + 0xA4), eax)) goto loc_00496A82; /* jne: not equal / not zero */

loc_00496A6C: ;
    ecx = MEM32(ebp + -4);
    PUSH32(esp, ebx);
    PUSH32(esp, esi);
    PUSH32(esp, 0); sub_00495A11(); /* call 0x00495A11 */

loc_00496A76: ;
    ecx = MEM32(ebp + -4);
    MEM8(edi) = MEM8(edi) | 0x10;
    PUSH32(esp, esi);
    PUSH32(esp, 0); sub_00494E14(); /* call 0x00494E14 */

loc_00496A82: ;
    eax = MEM32(ebx + 0xA4);
    if (CMP_AE(eax, MEM32(esi + 0x50))) goto loc_00496A9C; /* jae: above or equal (unsigned >=) */

loc_00496A8D: ;
    eax = MEM32(ebx + 0xA0);
    if (CMP_AE(eax, MEM32(esi + 0x54))) goto loc_00496A9C; /* jae: above or equal (unsigned >=) */

loc_00496A98: ;
    PUSH32(esp, 4);
    goto loc_00496AA9;

loc_00496A9C: ;
    eax = MEM32(ebp + 0x10);
    (void)0; /* test MEM8(eax + 0xF), 8 - flags set for next jcc */
    SET_LO8(eax, (TEST_NZ(MEM8(eax + 0xF), 8)) ? 1 : 0); /* setne */
    SET_LO8(eax, LO8(eax) + 5);
    PUSH32(esp, eax);

loc_00496AA9: ;
    ecx = MEM32(ebp + -4);
    PUSH32(esp, ebx);
    PUSH32(esp, esi);
    PUSH32(esp, 0); sub_00495F8F(); /* call 0x00495F8F */

loc_00496AB3: ;
    ecx = MEM32(ebp + -4);
    PUSH32(esp, esi);
    PUSH32(esp, 0); sub_0049621B(); /* call 0x0049621B */

loc_00496ABC: ;
    goto loc_00496AFB;

loc_00496ABE: ;
    eax = MEM32(esi + 8);
    eax = eax | MEM32(esi + 0xC);
    if ((eax != 0)) goto loc_00496AFB; /* jne: not equal / not zero */

loc_00496AC6: ;
    eax = MEM32(esi + 0x10);
    eax = eax | MEM32(esi + 0x14);
    if ((eax != 0)) goto loc_00496AFB; /* jne: not equal / not zero */

loc_00496ACE: ;
    eax = MEM32(ebp + -28);
    ecx = MEM32(ebp + -4);
    MEM32(esi + 8) = eax;
    eax = MEM32(ebp + -24);
    MEM32(esi + 0xC) = eax;
    PUSH32(esp, esi);
    eax = ebp + -28;
    PUSH32(esp, eax);
    PUSH32(esp, 0); sub_00494E86(); /* call 0x00494E86 */

loc_00496AE7: ;
    ecx = MEM32(ebp + 0x10);
    MEM32(esi + 0x18) = eax;
    ecx = MEM32(ecx + 0x10);
    if (CMP_AE(eax, ecx)) goto loc_00496AF6; /* jae: above or equal (unsigned >=) */

loc_00496AF4: ;
    ecx = eax;

loc_00496AF6: ;
    eax = eax - ecx;
    MEM32(esi + 0x18) = eax;

loc_00496AFB: ;
    POP32(esp, edi);
    POP32(esp, ebx);

loc_00496AFD: ;
    POP32(esp, esi);
    esp = ebp;
    POP32(esp, ebp); /* leave */
    esp += 20; return; /* ret 16 */

}

/**
 * sub_00496B02
 * Original: 0x00496B02 - 0x00496BA1 (159 bytes, 62 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00496B02(void)
{
    uint32_t ebp;
    int _flags = 0; /* fallback flag var */
    int _cf = 0; /* carry flag */

loc_00496B02: ;
    PUSH32(esp, ebp);
    ebp = esp;
    PUSH32(esp, ecx);
    PUSH32(esp, esi);
    esi = MEM32(ecx + 0xA94);
    (void)0; /* test esi, esi - flags set for next jcc */
    MEM32(ebp + -4) = ecx;
    if (TEST_Z(esi, esi)) goto loc_00496B9C; /* je: equal / zero */

loc_00496B18: ;
    PUSH32(esp, ebx);
    ebx = MEM32(ebp + 8);
    PUSH32(esp, edi);

loc_00496B1D: ;
    eax = MEM32(esi + 0x48);
    edi = MEM32(esi + 0x4C);
    ecx = 0; /* xor self */
    if (CMP_BE(eax & eax, 0)) goto loc_00496B94; /* jbe: below or equal (unsigned <=) */

loc_00496B29: ;
    MEM32(ebp + 8) = eax;

loc_00496B2C: ;
    if (CMP_NE(MEM32(edi + 0x94), ebx)) goto loc_00496B7C; /* jne: not equal / not zero */

loc_00496B34: ;
    if (CMP_NE(MEM8(ebx + 2), 1)) goto loc_00496B5E; /* jne: not equal / not zero */

loc_00496B3A: ;
    if (CMP_EQ(MEM8(edi + 0xC), 6)) goto loc_00496B4F; /* je: equal / zero */

loc_00496B40: ;
    ecx = MEM32(ebp + -4);
    PUSH32(esp, 6);
    PUSH32(esp, edi);
    PUSH32(esp, esi);
    PUSH32(esp, 0); sub_00495F8F(); /* call 0x00495F8F */

loc_00496B4C: ;
    ecx = 0; /* xor self */
    ecx++;

loc_00496B4F: ;
    MEM32(ebx + 0x128) = MEM32(ebx + 0x128) - 1;
    MEM32(edi + 0x94) = MEM32(edi + 0x94) & 0;
    goto loc_00496B7C;

loc_00496B5E: ;
    if (CMP_NE(MEM8(edi + 0xC), 3)) goto loc_00496B7C; /* jne: not equal / not zero */

loc_00496B64: ;
    ecx = MEM32(ebp + -4);
    eax = 0; /* xor self */
    (void)0; /* cmp eax, MEM32(esi + 0x54) - flags set for next jcc */
    SET_LO8(eax, _cf ? 0xFFFFFFFF : 0); /* sbb self (CF extend) */
    eax = eax + 5;
    PUSH32(esp, eax);
    PUSH32(esp, edi);
    PUSH32(esp, esi);
    PUSH32(esp, 0); sub_00495F8F(); /* call 0x00495F8F */

loc_00496B79: ;
    ecx = 0; /* xor self */
    ecx++;

loc_00496B7C: ;
    edi = edi + 0xAC;
    MEM32(ebp + 8) = MEM32(ebp + 8) - 1;
    if ((MEM32(ebp + 8) != 0)) goto loc_00496B2C; /* jne: not equal / not zero */

loc_00496B87: ;
    if (TEST_Z(ecx, ecx)) goto loc_00496B94; /* je: equal / zero */

loc_00496B8B: ;
    ecx = MEM32(ebp + -4);
    PUSH32(esp, esi);
    PUSH32(esp, 0); sub_0049621B(); /* call 0x0049621B */

loc_00496B94: ;
    esi = MEM32(esi);
    if (TEST_NZ(esi, esi)) goto loc_00496B1D; /* jne: not equal / not zero */

loc_00496B9A: ;
    POP32(esp, edi);
    POP32(esp, ebx);

loc_00496B9C: ;
    POP32(esp, esi);
    esp = ebp;
    POP32(esp, ebp); /* leave */
    esp += 8; return; /* ret 4 */

}

/**
 * sub_00496BC4
 * Original: 0x00496BC4 - 0x00496BDE (26 bytes, 13 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00496BC4(void)
{
    uint32_t ebp;
    int _flags = 0; /* fallback flag var */

loc_00496BC4: ;
    PUSH32(esp, ebp);
    ebp = esp;
    esp = esp - 0x10;
    edx = MEM32(ebp + 0xC);
    PUSH32(esp, ebx);
    ebx = 0; /* xor self */
    (void)0; /* cmp edx, ebx - flags set for next jcc */
    PUSH32(esp, esi);
    PUSH32(esp, edi);
    MEM32(ebp + -4) = ecx;
    if (CMP_NE(edx, ebx)) { sub_00496BDE(); return; } /* jne: not equal / not zero */

loc_00496BD9: ;
    MEM32(ebp + 0xC) = ebx;
    g_seh_ebp = ebp; sub_00496BF6(); return; /* tail jmp 0x00496BF6 */

}

/**
 * sub_00496DBF
 * Original: 0x00496DBF - 0x00496DF5 (54 bytes, 21 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00496DBF(void)
{
    uint32_t ebp;
    int _flags = 0; /* fallback flag var */

loc_00496DBF: ;
    PUSH32(esp, ebp);
    ebp = esp;
    PUSH32(esp, ecx);
    eax = MEM32(ebp + 0x18);
    PUSH32(esp, esi);
    esi = MEM32(ebp + 8);
    PUSH32(esp, edi);
    PUSH32(esp, MEM32(ebp + 0x30));
    eax = eax + esi;
    PUSH32(esp, MEM32(ebp + 0x2C));
    MEM32(ebp + -4) = ecx;
    PUSH32(esp, MEM32(ebp + 0x28));
    PUSH32(esp, MEM32(ebp + 0x24));
    PUSH32(esp, eax);
    PUSH32(esp, 0); sub_00496BC4(); /* call 0x00496BC4 */

loc_00496DE2: ;
    edi = eax;
    (void)0; /* test edi, edi - flags set for next jcc */
    MEM32(ebp + 0x2C) = edi;
    if (TEST_NZ(edi, edi)) { sub_00496DF5(); return; } /* jne: not equal / not zero */

loc_00496DEB: ;
    eax = 0x2747;
    g_seh_ebp = ebp; sub_00497170(); return; /* tail jmp 0x00497170 */

}

/**
 * sub_00497176
 * Original: 0x00497176 - 0x0049719D (39 bytes, 15 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00497176(void)
{

loc_00497176: ;
    PUSH32(esp, esi);
    PUSH32(esp, edi);
    esi = ecx;
    PUSH32(esp, 0xFFFFFFFFu);
    eax = esi + 0xA68;
    PUSH32(esp, eax);
    PUSH32(esp, 0); sub_00492F6E(); /* call 0x00492F6E */

loc_00497188: ;
    edi = esi + 0xA34;
    PUSH32(esp, MEM32(edi));
    ecx = esi;
    PUSH32(esp, 0); sub_004932D7(); /* call 0x004932D7 */

loc_00497197: ;
    MEM32(edi) = MEM32(edi) & 0;
    POP32(esp, edi);
    POP32(esp, esi);
    esp += 4; return; /* ret */

}

/**
 * sub_0049719D
 * Original: 0x0049719D - 0x004971F0 (83 bytes, 37 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0049719D(void)
{
    uint32_t ebp;
    int _flags = 0; /* fallback flag var */

loc_0049719D: ;
    PUSH32(esp, ebp);
    ebp = esp;
    edx = MEM32(ebp + 0x10);
    PUSH32(esp, esi);
    esi = MEM32(ebp + 0xC);
    (void)0; /* cmp esi, 1 - flags set for next jcc */
    PUSH32(esp, edi);
    edi = MEM32(ebp + 8);
    eax = edi;
    if (CMP_BE(esi, 1)) goto loc_004971CB; /* jbe: below or equal (unsigned <=) */

loc_004971B2: ;
    if (CMP_BE(MEM32(ebp + 0x14), 0)) goto loc_004971CB; /* jbe: below or equal (unsigned <=) */

loc_004971B8: ;
    SET_LO8(ecx, MEM8(edx));
    if (TEST_Z(LO8(ecx), LO8(ecx))) goto loc_004971CB; /* je: equal / zero */

loc_004971BE: ;
    MEM8(eax) = LO8(ecx);
    eax++;
    edx++;
    esi--;
    MEM32(ebp + 0x14) = MEM32(ebp + 0x14) - 1;
    if (CMP_A(esi, 1)) goto loc_004971B2; /* ja: above (unsigned >) */

loc_004971CB: ;
    (void)0; /* cmp MEM32(ebp + 0x14), 0 - flags set for next jcc */
    MEM8(eax) = 0;
    if (CMP_BE(MEM32(ebp + 0x14), 0)) { sub_004971F0(); return; } /* jbe: below or equal (unsigned <=) */

loc_004971D4: ;
    if (CMP_EQ(MEM8(edx), 0)) { sub_004971F0(); return; } /* je: equal / zero */

loc_004971D9: ;
    ecx = MEM32(ebp + 0xC);
    edx = ecx;
    ecx = ecx >> 2;
    eax = 0; /* xor self */
    { uint32_t _i; for (_i = 0; _i < ecx; _i++) MEM32(edi + _i*4) = eax; }
    edi += ecx * 4; ecx = 0; /* rep stosd */
    ecx = edx;
    ecx = ecx & 3;
    memset((void*)XBOX_PTR(edi), (uint8_t)eax, ecx);
    edi += ecx; ecx = 0; /* rep stosb */
    eax = 0; /* xor self */
    g_seh_ebp = ebp; sub_004971F3(); return; /* tail jmp 0x004971F3 */

}

/**
 * sub_004971F9
 * Original: 0x004971F9 - 0x00497270 (119 bytes, 50 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_004971F9(void)
{
    uint32_t ebp;
    int _flags = 0; /* fallback flag var */

loc_004971F9: ;
    PUSH32(esp, ebp);
    ebp = esp;
    esp = esp - 0x100;
    (void)0; /* cmp MEM32(ebp + 0xC), 0 - flags set for next jcc */
    PUSH32(esp, ebx);
    ebx = MEM32(ebp + 0x14);
    if (CMP_EQ(MEM32(ebp + 0xC), 0)) { sub_00497270(); return; } /* je: equal / zero */

loc_0049720C: ;
    if (TEST_Z(ebx, ebx)) { sub_00497270(); return; } /* je: equal / zero */

loc_00497210: ;
    PUSH32(esp, esi);
    PUSH32(esp, edi);
    PUSH32(esp, 0x40);
    eax = ebp + -256;
    PUSH32(esp, eax);
    PUSH32(esp, MEM32(ebp + 0xC));
    edi = 0xFDE9;
    PUSH32(esp, MEM32(ebp + 8));
    PUSH32(esp, 0);
    PUSH32(esp, edi);
    PUSH32(esp, 0); sub_0047E7BE(); /* call 0x0047E7BE */

loc_0049722E: ;
    PUSH32(esp, 0x40);
    esi = eax;
    eax = ebp + -128;
    PUSH32(esp, eax);
    PUSH32(esp, ebx);
    PUSH32(esp, MEM32(ebp + 0x10));
    esi = esi >> 1;
    PUSH32(esp, 0);
    PUSH32(esp, edi);
    PUSH32(esp, 0); sub_0047E7BE(); /* call 0x0047E7BE */

loc_00497244: ;
    eax = eax >> 1;
    if (CMP_NE(esi, eax)) goto loc_0049726A; /* jne: not equal / not zero */

loc_0049724A: ;
    if (CMP_A(esi, 0x40)) goto loc_0049726A; /* ja: above (unsigned >) */

loc_0049724F: ;
    PUSH32(esp, esi);
    eax = ebp + -128;
    PUSH32(esp, eax);
    eax = ebp + -256;
    PUSH32(esp, eax);
    PUSH32(esp, 0); sub_0047101F(); /* call 0x0047101F */

loc_00497260: ;
    esp = esp + 0xC;
    if (TEST_NZ(eax, eax)) goto loc_0049726A; /* jne: not equal / not zero */

loc_00497267: ;
    eax++;
    goto loc_0049726C;

loc_0049726A: ;
    eax = 0; /* xor self */

loc_0049726C: ;
    POP32(esp, edi);
    POP32(esp, esi);
    g_seh_ebp = ebp; sub_00497278(); return; /* tail jmp 0x00497278 */

}

/**
 * sub_0049727D
 * Original: 0x0049727D - 0x004972E2 (101 bytes, 51 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0049727D(void)
{
    uint32_t ebp;
    int _flags = 0; /* fallback flag var */

loc_0049727D: ;
    PUSH32(esp, ebp);
    ebp = esp;
    PUSH32(esp, ebx);
    PUSH32(esp, esi);
    PUSH32(esp, edi);
    edi = MEM32(ebp + 0xC);
    if (CMP_BE(edi & edi, 0)) goto loc_004972D9; /* jbe: below or equal (unsigned <=) */

loc_0049728A: ;
    ebx = MEM32(ebp + 0x24);
    esi = MEM32(ebp + 8);

loc_00497290: ;
    SET_LO8(edx, MEM8(esi));
    esi++;
    edi--;
    (void)0; /* cmp LO8(edx), 0xFF - flags set for next jcc */
    MEM8(ebp + 0xF) = LO8(edx);
    if (CMP_EQ(LO8(edx), 0xFF)) goto loc_004972D9; /* je: equal / zero */

loc_0049729C: ;
    if (TEST_Z(LO8(edx), LO8(edx))) goto loc_004972D5; /* je: equal / zero */

loc_004972A0: ;
    if (TEST_Z(edi, edi)) goto loc_004972D9; /* je: equal / zero */

loc_004972A4: ;
    SET_LO8(eax, MEM8(esi));
    esi++;
    edi--;
    if (TEST_Z(LO8(eax), LO8(eax))) goto loc_004972D9; /* je: equal / zero */

loc_004972AC: ;
    ecx = ZX8(LO8(eax));
    if (CMP_A(ecx, edi)) goto loc_004972D9; /* ja: above (unsigned >) */

loc_004972B3: ;
    if (CMP_NE(LO8(edx), 0x34)) goto loc_004972CC; /* jne: not equal / not zero */

loc_004972B8: ;
    if (TEST_Z(ebx, ebx)) goto loc_004972CC; /* je: equal / zero */

loc_004972BC: ;
    if (CMP_NE(MEM8(ebx), 0)) goto loc_004972CC; /* jne: not equal / not zero */

loc_004972C1: ;
    if (CMP_NE(LO8(eax), 1)) goto loc_004972CC; /* jne: not equal / not zero */

loc_004972C5: ;
    SET_LO8(edx, MEM8(esi));
    MEM8(ebx) = LO8(edx);
    SET_LO8(edx, MEM8(ebp + 0xF));

loc_004972CC: ;
    if (CMP_EQ(LO8(edx), MEM8(ebp + 0x10))) { sub_004972E2(); return; } /* je: equal / zero */

loc_004972D1: ;
    esi = esi + ecx;
    edi = edi - ecx;

loc_004972D5: ;
    if (CMP_A(edi & edi, 0)) goto loc_00497290; /* ja: above (unsigned >) */

loc_004972D9: ;
    eax = 0; /* xor self */
    POP32(esp, edi);
    POP32(esp, esi);
    POP32(esp, ebx);
    POP32(esp, ebp);
    esp += 36; return; /* ret 32 */

}

/**
 * sub_00497403
 * Original: 0x00497403 - 0x004974D6 (211 bytes, 80 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00497403(void)
{
    int _flags = 0; /* fallback flag var */

loc_00497403: ;
    PUSH32(esp, ebx);
    ebx = ecx;
    ecx = ebx + 0xA78;
    eax = MEM32(ecx);
    (void)0; /* test LO8(eax), 1 - flags set for next jcc */
    PUSH32(esp, esi);
    PUSH32(esp, edi);
    if (TEST_NZ(LO8(eax), 1)) goto loc_004974D2; /* jne: not equal / not zero */

loc_00497418: ;
    eax = eax | 1;
    MEM32(ecx) = eax;
    SET_LO8(eax, MEM8(ebx + 0x8C8));
    if (TEST_Z(LO8(eax), LO8(eax))) goto loc_0049745F; /* je: equal / zero */

loc_00497427: ;
    ecx = MEM32(ebx + 0x8F0);
    esi = ebx + 0x908;
    edi = ebx + 0x8D0;
    MEM32(edi) = MEM32(esi); esi += 4; edi += 4; /* movsd */
    MEM32(edi) = MEM32(esi); esi += 4; edi += 4; /* movsd */
    MEM32(edi) = MEM32(esi); esi += 4; edi += 4; /* movsd */
    MEM32(edi) = MEM32(esi); esi += 4; edi += 4; /* movsd */
    esi = ebx + 0x8F8;
    edi = ebx + 0x8E0;
    MEM32(edi) = MEM32(esi); esi += 4; edi += 4; /* movsd */
    MEM32(edi) = MEM32(esi); esi += 4; edi += 4; /* movsd */
    MEM32(edi) = MEM32(esi); esi += 4; edi += 4; /* movsd */
    MEM32(ebx + 0x268) = ecx;
    ecx = MEM32(ebx + 0x8F4);
    MEM32(ebx + 0x26C) = ecx;
    MEM32(edi) = MEM32(esi); esi += 4; edi += 4; /* movsd */

loc_0049745F: ;
    edx = ebx + 0x268;
    esi = MEM32(edx);
    if (TEST_Z(esi, esi)) goto loc_004974D2; /* je: equal / zero */

loc_0049746B: ;
    if (CMP_EQ(LO8(eax), 0x16)) goto loc_004974D2; /* je: equal / zero */

loc_0049746F: ;
    PUSH32(esp, 1);
    PUSH32(esp, 8);
    ecx = ebx + 0x26C;
    eax = MEM32(ecx);
    PUSH32(esp, esi);
    PUSH32(esp, eax);
    PUSH32(esp, ecx);
    ecx = esp;
    eax = eax & esi;
    MEM32(ecx) = eax;
    ecx = ebx;
    PUSH32(esp, 0); sub_0048E2E1(); /* call 0x0048E2E1 */

loc_0049748B: ;
    eax = 0; /* xor self */
    esi = ebx + 0x8D0;

loc_00497493: ;
    if (CMP_EQ(MEM32(esi), 0)) goto loc_004974BD; /* je: equal / zero */

loc_00497498: ;
    edi = eax + 1;
    PUSH32(esp, edi);
    PUSH32(esp, 4);
    PUSH32(esp, MEM32(esi));
    PUSH32(esp, ecx);
    eax = esp;
    MEM32(eax) = MEM32(eax) & 0;
    PUSH32(esp, ecx);
    eax = esp;
    MEM32(eax) = MEM32(eax) & 0;
    ecx = ebx;
    PUSH32(esp, 0); sub_0048E2E1(); /* call 0x0048E2E1 */

loc_004974B3: ;
    eax = edi;
    esi = esi + 4;
    if (CMP_B(eax, 4)) goto loc_00497493; /* jb: below (unsigned <) */

loc_004974BD: ;
    PUSH32(esp, 0);
    PUSH32(esp, ecx);
    eax = esp;
    MEM32(eax) = MEM32(eax) | 0xFFFFFFFFu;
    PUSH32(esp, ecx);
    eax = esp;
    MEM32(eax) = MEM32(eax) | 0xFFFFFFFFu;
    ecx = ebx;
    PUSH32(esp, 0); sub_0049A983(); /* call 0x0049A983 */

loc_004974D2: ;
    POP32(esp, edi);
    POP32(esp, esi);
    POP32(esp, ebx);
    esp += 4; return; /* ret */

}

/**
 * sub_004974D6
 * Original: 0x004974D6 - 0x00497503 (45 bytes, 16 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_004974D6(void)
{
    uint32_t ebp;
    int _flags = 0; /* fallback flag var */

loc_004974D6: ;
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, ebp);
    ebp = esp;
    esp = esp - 0xC;
    PUSH32(esp, ebx);
    PUSH32(esp, esi);
    ebx = ecx;
    PUSH32(esp, 0); RECOMP_ICALL_SAFE(MEM32(0x5610F0), _icall_esp); /* indirect call */
    }

loc_004974E6: ;
    MEM8(ebp + -4) = LO8(eax);
    eax = MEM32(ebp + 8);
    if (TEST_NZ(eax, eax)) { sub_00497503(); return; } /* jne: not equal / not zero */

loc_004974F0: ;
    SET_LO8(eax, MEM8(ebx + 0x8CC));
    eax = eax >> 3;
    eax = eax & 1;
    esi = eax;
    g_seh_ebp = ebp; sub_00497610(); return; /* tail jmp 0x00497610 */

}

/**
 * sub_00497621
 * Original: 0x00497621 - 0x00497644 (35 bytes, 14 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00497621(void)
{
    uint32_t ebp;
    int _flags = 0; /* fallback flag var */

loc_00497621: ;
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, ebp);
    ebp = esp;
    PUSH32(esp, ecx);
    PUSH32(esp, ebx);
    PUSH32(esp, esi);
    ebx = ecx;
    PUSH32(esp, 0); RECOMP_ICALL_SAFE(MEM32(0x5610F0), _icall_esp); /* indirect call */
    }

loc_0049762F: ;
    SET_LO16(ecx, MEM16(ebp + 0xC));
    esi = 0; /* xor self */
    (void)0; /* cmp LO16(ecx), LO16(esi) - flags set for next jcc */
    MEM8(ebp + -4) = LO8(eax);
    if (CMP_NE(LO16(ecx), LO16(esi))) { sub_00497644(); return; } /* jne: not equal / not zero */

loc_0049763D: ;
    eax = 0x20C;
    g_seh_ebp = ebp; sub_0049764D(); return; /* tail jmp 0x0049764D */

}

/**
 * sub_004976BA
 * Original: 0x004976BA - 0x004978EC (562 bytes, 197 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_004976BA(void)
{
    uint32_t ebp;
    int _flags = 0; /* fallback flag var */

loc_004976BA: ;
    PUSH32(esp, ebp);
    ebp = esp;
    esp = esp - 0x10;
    PUSH32(esp, ebx);
    PUSH32(esp, esi);
    esi = 0; /* xor self */
    PUSH32(esp, esi);
    PUSH32(esp, esi);
    PUSH32(esp, esi);
    PUSH32(esp, 0x1EC);
    PUSH32(esp, 0x10040003);
    PUSH32(esp, 0x6A54454E);
    ebx = ecx;
    PUSH32(esp, 0); sub_004937A4(); /* call 0x004937A4 */

loc_004976DD: ;
    ecx = eax;
    (void)0; /* cmp ecx, esi - flags set for next jcc */
    MEM32(ebp + -12) = ecx;
    if (CMP_EQ(ecx, esi)) goto loc_004978E8; /* je: equal / zero */

loc_004976EA: ;
    PUSH32(esp, edi);
    PUSH32(esp, 0); sub_00493470(); /* call 0x00493470 */

loc_004976F0: ;
    edx = eax + 8;
    MEM32(ebp + -16) = eax;
    eax = edx + 0xF0;
    MEM32(ebp + -4) = eax;
    eax = 0; /* xor self */
    PUSH32(esp, 0x7B);
    POP32(esp, ecx);
    edi = edx;
    { uint32_t _i; for (_i = 0; _i < ecx; _i++) MEM32(edi + _i*4) = eax; }
    edi += ecx * 4; ecx = 0; /* rep stosd */
    MEM8(edx) = 1;
    MEM8(edx + 1) = 1;
    MEM8(edx + 2) = 6;
    eax = MEM32(ebx + 0xA7C);
    eax = BSWAP32(eax); /* bswap */
    MEM32(edx + 4) = eax;
    esi = ebx + 0x1E0;
    edi = edx + 0x1C;
    MEM32(edi) = MEM32(esi); esi += 4; edi += 4; /* movsd */
    MEM16(edi) = MEM16(esi); esi += 2; edi += 2; /* movsw */
    MEM32(edx + 0xEC) = 0x63538263;
    SET_LO8(eax, MEM8(ebx + 0x8C8));
    if (CMP_EQ(LO8(eax), 4)) goto loc_00497746; /* je: equal / zero */

loc_0049773E: ;
    if (CMP_EQ(LO8(eax), 0xD)) goto loc_00497746; /* je: equal / zero */

loc_00497742: ;
    if (CMP_NE(LO8(eax), 0xE)) goto loc_0049774F; /* jne: not equal / not zero */

loc_00497746: ;
    eax = MEM32(ebx + 0x8F0);
    MEM32(edx + 0xC) = eax;

loc_0049774F: ;
    edx = MEM32(ebp + -4);
    eax = edx + 1;
    MEM8(edx) = 0x35;
    MEM8(eax) = 1;
    SET_LO8(ecx, MEM8(ebx + 0x8C8));
    eax++;
    if (CMP_NE(LO8(ecx), 4)) goto loc_00497774; /* jne: not equal / not zero */

loc_00497767: ;
    MEM8(ebx + 0xA7A) = MEM8(ebx + 0xA7A) | 1;
    MEM8(eax) = 8;
    eax++;
    goto loc_004977DB;

loc_00497774: ;
    if (CMP_NE(LO8(ecx), 9)) goto loc_00497785; /* jne: not equal / not zero */

loc_00497779: ;
    MEM8(ebx + 0xA79) = MEM8(ebx + 0xA79) | 0x10;
    MEM8(eax) = 1;
    goto loc_004977A0;

loc_00497785: ;
    if (CMP_NE(LO8(ecx), 0xF)) goto loc_00497796; /* jne: not equal / not zero */

loc_0049778A: ;
    MEM8(ebx + 0xA7A) = MEM8(ebx + 0xA7A) | 4;
    MEM8(eax) = 4;
    goto loc_004977A0;

loc_00497796: ;
    MEM8(ebx + 0xA79) = MEM8(ebx + 0xA79) | 0x40;
    MEM8(eax) = 3;

loc_004977A0: ;
    esi = ebx + 0x93A;
    eax++;
    if (CMP_EQ(MEM8(esi), 0)) goto loc_004977DB; /* je: equal / zero */

loc_004977AC: ;
    edi = esi;
    MEM8(eax) = 0xC;
    eax++;
    ecx = edi + 1;

loc_004977B5: ;
    SET_LO8(edx, MEM8(edi));
    edi++;
    if (TEST_NZ(LO8(edx), LO8(edx))) goto loc_004977B5; /* jne: not equal / not zero */

loc_004977BC: ;
    edi = edi - ecx;
    ecx = edi;
    MEM8(eax) = LO8(ecx);
    MEM32(ebp + -8) = ecx;
    edx = ecx;
    ecx = ecx >> 2;
    eax++;
    edi = eax;
    memcpy((void*)XBOX_PTR(edi), (void*)XBOX_PTR(esi), ecx * 4);
    esi += ecx * 4; edi += ecx * 4; ecx = 0; /* rep movsd */
    ecx = edx;
    ecx = ecx & 3;
    eax = eax + edx;
    edx = MEM32(ebp + -4);
    memcpy((void*)XBOX_PTR(edi), (void*)XBOX_PTR(esi), ecx);
    esi += ecx; edi += ecx; ecx = 0; /* rep movsb */

loc_004977DB: ;
    MEM8(eax) = 0x3D;
    eax++;
    MEM8(eax) = 7;
    eax++;
    MEM8(eax) = 1;
    eax++;
    edi = eax;
    esi = ebx + 0x1E0;
    MEM32(edi) = MEM32(esi); esi += 4; edi += 4; /* movsd */
    MEM16(edi) = MEM16(esi); esi += 2; edi += 2; /* movsw */
    eax = eax + 6;
    (void)0; /* cmp MEM8(ebx + 0x8C8), 0xF - flags set for next jcc */
    POP32(esp, edi);
    if (CMP_EQ(MEM8(ebx + 0x8C8), 0xF)) goto loc_0049783D; /* je: equal / zero */

loc_004977FF: ;
    MEM8(eax) = 0x3C;
    eax++;
    MEM8(eax) = 8;
    ecx = MEM32(0x4A02E8);
    eax++;
    MEM32(eax) = ecx;
    ecx = MEM32(0x4A02EC);
    MEM32(eax + 4) = ecx;
    eax = eax + 8;
    MEM8(eax) = 0x37;
    eax++;
    if (CMP_NE(MEM8(ebx + 0x8C8), 4)) goto loc_0049782D; /* jne: not equal / not zero */

loc_00497828: ;
    MEM8(eax) = 1;
    goto loc_00497838;

loc_0049782D: ;
    MEM8(eax) = 3;
    eax++;
    MEM8(eax) = 1;
    eax++;
    MEM8(eax) = 3;

loc_00497838: ;
    eax++;
    MEM8(eax) = 6;
    eax++;

loc_0049783D: ;
    esi = 0; /* xor self */
    if (CMP_EQ(MEM32(ebx + 0x8F0), esi)) goto loc_00497874; /* je: equal / zero */

loc_00497847: ;
    SET_LO8(ecx, MEM8(ebx + 0x8C8));
    if (CMP_EQ(LO8(ecx), 8)) goto loc_00497861; /* je: equal / zero */

loc_00497852: ;
    if (CMP_EQ(LO8(ecx), 9)) goto loc_00497861; /* je: equal / zero */

loc_00497857: ;
    if (CMP_EQ(LO8(ecx), 0xA)) goto loc_00497861; /* je: equal / zero */

loc_0049785C: ;
    if (CMP_NE(LO8(ecx), 0xF)) goto loc_00497874; /* jne: not equal / not zero */

loc_00497861: ;
    MEM8(eax) = 0x32;
    eax++;
    MEM8(eax) = 4;
    ecx = MEM32(ebx + 0x8F0);
    eax++;
    MEM32(eax) = ecx;
    eax = eax + 4;

loc_00497874: ;
    if (CMP_EQ(MEM32(ebx + 0x930), esi)) goto loc_0049789F; /* je: equal / zero */

loc_0049787C: ;
    SET_LO8(ecx, MEM8(ebx + 0x8C8));
    if (CMP_EQ(LO8(ecx), 0xA)) goto loc_0049788C; /* je: equal / zero */

loc_00497887: ;
    if (CMP_NE(LO8(ecx), 0xF)) goto loc_0049789F; /* jne: not equal / not zero */

loc_0049788C: ;
    MEM8(eax) = 0x36;
    eax++;
    MEM8(eax) = 4;
    ecx = MEM32(ebx + 0x930);
    eax++;
    MEM32(eax) = ecx;
    eax = eax + 4;

loc_0049789F: ;
    MEM8(eax) = 0xFF;
    eax++;
    ecx = edx + 0x3C;
    if (CMP_AE(eax, ecx)) goto loc_004978AC; /* jae: above or equal (unsigned >=) */

loc_004978AA: ;
    eax = ecx;

loc_004978AC: ;
    ecx = MEM32(ebp + -12);
    eax = eax - edx;
    eax = eax + 0x10C;
    MEM16(ecx + 4) = LO16(eax);
    eax = MEM32(ebp + -16);
    MEM16(eax) = 0x4400;
    MEM16(eax + 2) = 0x4300;
    if (CMP_NE(MEM8(ebx + 0x8C8), 0xD)) goto loc_004978D9; /* jne: not equal / not zero */

loc_004978D1: ;
    eax = MEM32(ebx + 0x930);
    goto loc_004978DC;

loc_004978D9: ;
    eax = eax | 0xFFFFFFFFu;

loc_004978DC: ;
    PUSH32(esp, esi);
    PUSH32(esp, 0x11);
    PUSH32(esp, eax);
    PUSH32(esp, ecx);
    ecx = ebx;
    PUSH32(esp, 0); sub_00491199(); /* call 0x00491199 */

loc_004978E8: ;
    POP32(esp, esi);
    POP32(esp, ebx);
    esp = ebp;
    POP32(esp, ebp); /* leave */
    esp += 4; return; /* ret */

}

/**
 * sub_004978EC
 * Original: 0x004978EC - 0x00497976 (138 bytes, 52 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_004978EC(void)
{
    uint32_t ebp;
    int _flags = 0; /* fallback flag var */

loc_004978EC: ;
    PUSH32(esp, ebp);
    ebp = esp;
    PUSH32(esp, ecx);
    PUSH32(esp, esi);
    eax = ebp + -1;
    PUSH32(esp, eax);
    PUSH32(esp, MEM32(ebp + 0x1C));
    eax = MEM32(ebp + 8);
    PUSH32(esp, MEM32(ebp + 0x18));
    eax = eax + 0xFFFFFF10u;
    PUSH32(esp, MEM32(ebp + 0x14));
    esi = ecx;
    PUSH32(esp, MEM32(ebp + 0x10));
    MEM8(ebp + -1) = 0;
    PUSH32(esp, MEM32(ebp + 0xC));
    PUSH32(esp, eax);
    eax = esi + 0xF0;
    PUSH32(esp, eax);
    PUSH32(esp, 0); sub_0049727D(); /* call 0x0049727D */

loc_0049791F: ;
    if (TEST_NZ(eax, eax)) goto loc_00497971; /* jne: not equal / not zero */

loc_00497923: ;
    if (TEST_Z(MEM8(ebp + -1), 1)) goto loc_0049794B; /* je: equal / zero */

loc_00497929: ;
    PUSH32(esp, eax);
    PUSH32(esp, MEM32(ebp + 0x1C));
    eax = esi + 0x6C;
    PUSH32(esp, MEM32(ebp + 0x18));
    PUSH32(esp, MEM32(ebp + 0x14));
    PUSH32(esp, MEM32(ebp + 0x10));
    PUSH32(esp, MEM32(ebp + 0xC));
    PUSH32(esp, 0x80);
    PUSH32(esp, eax);
    PUSH32(esp, 0); sub_0049727D(); /* call 0x0049727D */

loc_00497947: ;
    if (TEST_NZ(eax, eax)) goto loc_00497971; /* jne: not equal / not zero */

loc_0049794B: ;
    if (TEST_Z(MEM8(ebp + -1), 2)) { sub_00497976(); return; } /* je: equal / zero */

loc_00497951: ;
    PUSH32(esp, 0);
    PUSH32(esp, MEM32(ebp + 0x1C));
    esi = esi + 0x2C;
    PUSH32(esp, MEM32(ebp + 0x18));
    PUSH32(esp, MEM32(ebp + 0x14));
    PUSH32(esp, MEM32(ebp + 0x10));
    PUSH32(esp, MEM32(ebp + 0xC));
    PUSH32(esp, 0x40);
    PUSH32(esp, esi);
    PUSH32(esp, 0); sub_0049727D(); /* call 0x0049727D */

loc_0049796D: ;
    if (TEST_Z(eax, eax)) { sub_00497976(); return; } /* je: equal / zero */

loc_00497971: ;
    eax = 0; /* xor self */
    eax++;
    g_seh_ebp = ebp; sub_00497978(); return; /* tail jmp 0x00497978 */

}

/**
 * sub_0049797D
 * Original: 0x0049797D - 0x004979B8 (59 bytes, 24 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0049797D(void)
{
    uint32_t ebp;
    int _flags = 0; /* fallback flag var */

loc_0049797D: ;
    PUSH32(esp, ebp);
    ebp = esp;
    esp = esp - 0x18;
    PUSH32(esp, ebx);
    eax = 0; /* xor self */
    ebx = ecx;
    (void)0; /* cmp MEM8(ebx + 0x8C8), 0x11 - flags set for next jcc */
    PUSH32(esp, esi);
    SET_LO8(eax, (CMP_EQ(MEM8(ebx + 0x8C8), 0x11)) ? 1 : 0); /* sete */
    PUSH32(esp, edi);
    MEM32(ebp + -4) = eax;
    eax = ebx + 0xA0A;
    esi = eax + 1;

loc_004979A0: ;
    SET_LO8(ecx, MEM8(eax));
    eax++;
    if (TEST_NZ(LO8(ecx), LO8(ecx))) goto loc_004979A0; /* jne: not equal / not zero */

loc_004979A7: ;
    eax = eax - esi;
    esi = 0; /* xor self */
    (void)0; /* cmp MEM32(ebp + -4), esi - flags set for next jcc */
    MEM32(ebp + -12) = eax;
    if (CMP_EQ(MEM32(ebp + -4), esi)) { sub_004979B8(); return; } /* je: equal / zero */

loc_004979B3: ;
    eax = eax + 4;
    g_seh_ebp = ebp; sub_004979C0(); return; /* tail jmp 0x004979C0 */

}

/**
 * sub_00497B32
 * Original: 0x00497B32 - 0x00497BA7 (117 bytes, 46 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00497B32(void)
{
    uint32_t ebp;
    int _flags = 0; /* fallback flag var */

loc_00497B32: ;
    PUSH32(esp, ebp);
    ebp = esp;
    PUSH32(esp, ecx);
    PUSH32(esp, ebx);
    PUSH32(esp, esi);
    PUSH32(esp, edi);
    esi = 0; /* xor self */
    PUSH32(esp, esi);
    PUSH32(esp, esi);
    PUSH32(esp, esi);
    PUSH32(esp, 6);
    PUSH32(esp, 0x4040000);
    PUSH32(esp, 0x4954454E);
    ebx = ecx;
    PUSH32(esp, 0); sub_004937A4(); /* call 0x004937A4 */

loc_00497B51: ;
    ecx = eax;
    (void)0; /* cmp ecx, esi - flags set for next jcc */
    MEM32(ebp + -4) = ecx;
    if (CMP_EQ(ecx, esi)) goto loc_00497BA0; /* je: equal / zero */

loc_00497B5A: ;
    PUSH32(esp, 0); sub_0049345C(); /* call 0x0049345C */

loc_00497B5F: ;
    esi = MEM32(ebp + 8);
    SET_LO16(ecx, MEM16(ebp + 0xC));
    edi = eax;
    MEM32(edi) = MEM32(esi); esi += 4; edi += 4; /* movsd */
    MEM16(edi) = MEM16(esi); esi += 2; edi += 2; /* movsw */
    edi = eax + 6;
    esi = ebx + 0x1E0;
    MEM32(edi) = MEM32(esi); esi += 4; edi += 4; /* movsd */
    MEM16(edi) = MEM16(esi); esi += 2; edi += 2; /* movsw */
    MEM16(eax + 0xC) = LO16(ecx);
    SET_LO16(ecx, MEM16(ebp + 0x10));
    MEM16(eax + 0x12) = MEM16(eax + 0x12) & 0;
    MEM16(eax + 0x10) = LO16(ecx);
    MEM8(eax + 0xE) = 0x11;
    MEM8(eax + 0xF) = 0xA7;
    PUSH32(esp, ecx);
    eax = esp;
    PUSH32(esp, MEM32(ebp + -4));
    MEM32(eax) = MEM32(eax) & 0;
    ecx = ebx;
    PUSH32(esp, 0); sub_0049A4E0(); /* call 0x0049A4E0 */

loc_00497BA0: ;
    POP32(esp, edi);
    POP32(esp, esi);
    POP32(esp, ebx);
    esp = ebp;
    POP32(esp, ebp); /* leave */
    esp += 16; return; /* ret 12 */

}

/**
 * sub_00497BA7
 * Original: 0x00497BA7 - 0x00497BCF (40 bytes, 18 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00497BA7(void)
{
    uint32_t ebp;
    int _flags = 0; /* fallback flag var */

loc_00497BA7: ;
    PUSH32(esp, ebp);
    ebp = esp;
    edx = MEM32(ebp + 8);
    SET_LO8(eax, MEM8(edx + 1));
    PUSH32(esp, ebx);
    SET_LO8(ebx, MEM8(edx));
    PUSH32(esp, esi);
    esi = ecx;
    ecx = 0; /* xor self */
    (void)0; /* cmp MEM16(ebp + 0xC), 0x21C0 - flags set for next jcc */
    PUSH32(esp, edi);
    SET_LO8(ecx, (CMP_EQ(MEM16(ebp + 0xC), 0x21C0)) ? 1 : 0); /* sete */
    edi = ecx;
    ecx = MEM32(ebp + 0x14);
    if (TEST_Z(ecx, ecx)) { sub_00497BCF(); return; } /* je: equal / zero */

loc_00497BCB: ;
    ecx = MEM32(ecx);
    g_seh_ebp = ebp; sub_00497BD1(); return; /* tail jmp 0x00497BD1 */

}

/**
 * sub_00497E10
 * Original: 0x00497E10 - 0x00497F58 (328 bytes, 122 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00497E10(void)
{
    uint32_t ebp;
    int _flags = 0; /* fallback flag var */

loc_00497E10: ;
    PUSH32(esp, ebp);
    ebp = esp;
    PUSH32(esp, ecx);
    PUSH32(esp, ebx);
    PUSH32(esp, esi);
    esi = MEM32(ebp + 0x34);
    PUSH32(esp, edi);
    edi = 0; /* xor self */
    (void)0; /* cmp esi, edi - flags set for next jcc */
    MEM32(ebp + -4) = ecx;
    if (CMP_NE(esi, edi)) goto loc_00497E3F; /* jne: not equal / not zero */

loc_00497E23: ;
    SET_LO16(eax, MEM16(ecx + 0xA5C));
    MEM16(ebp + 0x38) = LO16(eax);
    SET_LO16(eax, MEM16(ecx + 0xA5A));
    esi = ecx + 0xA54;
    MEM16(ebp + 0x3C) = LO16(eax);

loc_00497E3F: ;
    edx = MEM32(ebp + 0x20);
    eax = MEM32(ebp + 0x18);
    PUSH32(esp, edi);
    eax = eax + edx;
    eax = eax + MEM32(ebp + 0x28);
    edx = MEM32(ebp + 0x30);
    PUSH32(esp, edi);
    PUSH32(esp, edi);
    eax = eax + edx + 4;
    PUSH32(esp, eax);
    PUSH32(esp, 0xC0000);
    PUSH32(esp, 0x4B54454E);
    PUSH32(esp, 0); sub_004937A4(); /* call 0x004937A4 */

loc_00497E64: ;
    ebx = eax;
    if (CMP_EQ(ebx, edi)) goto loc_00497F51; /* je: equal / zero */

loc_00497E6E: ;
    ecx = ebx;
    PUSH32(esp, 0); sub_0049345C(); /* call 0x0049345C */

loc_00497E75: ;
    SET_LO16(ecx, MEM16(ebp + 0x38));
    edi = eax;
    MEM32(edi) = MEM32(esi); esi += 4; edi += 4; /* movsd */
    MEM16(edi) = MEM16(esi); esi += 2; edi += 2; /* movsw */
    esi = MEM32(ebp + -4);
    esi = esi + 0x1E0;
    edi = eax + 6;
    MEM32(edi) = MEM32(esi); esi += 4; edi += 4; /* movsd */
    MEM16(edi) = MEM16(esi); esi += 2; edi += 2; /* movsw */
    MEM16(eax + 0xC) = LO16(ecx);
    SET_LO16(ecx, MEM16(ebp + 0x3C));
    MEM16(eax + 0x10) = LO16(ecx);
    MEM8(eax + 0xE) = 0x11;
    MEM8(eax + 0xF) = 0;
    SET_LO16(ecx, MEM16(ebx + 4));
    SET_LO16(ecx, LO16(ecx) + 2);
    SET_HI8(edx, LO8(ecx));
    eax = eax + 0x1A;
    SET_LO8(edx, HI8(ecx));
    SET_LO16(ecx, MEM16(ebp + 8));
    MEM16(eax + -6) = LO16(ecx);
    SET_LO8(ecx, MEM8(ebp + 0xC));
    MEM16(eax + -8) = LO16(edx);
    MEM8(eax + -4) = LO8(ecx);
    SET_LO8(ecx, MEM8(ebp + 0x10));
    MEM8(eax + -3) = LO8(ecx);
    SET_LO16(ecx, MEM16(ebx + 4));
    SET_HI8(edx, LO8(ecx));
    SET_LO8(edx, HI8(ecx));
    ecx = MEM32(ebp + 0x18);
    (void)0; /* test ecx, ecx - flags set for next jcc */
    MEM16(eax + -2) = LO16(edx);
    if (CMP_BE(ecx & ecx, 0)) goto loc_00497EF0; /* jbe: below or equal (unsigned <=) */

loc_00497EDB: ;
    esi = MEM32(ebp + 0x14);
    edx = ecx;
    ecx = ecx >> 2;
    edi = eax;
    memcpy((void*)XBOX_PTR(edi), (void*)XBOX_PTR(esi), ecx * 4);
    esi += ecx * 4; edi += ecx * 4; ecx = 0; /* rep movsd */
    ecx = edx;
    ecx = ecx & 3;
    memcpy((void*)XBOX_PTR(edi), (void*)XBOX_PTR(esi), ecx);
    esi += ecx; edi += ecx; ecx = 0; /* rep movsb */
    eax = eax + edx;

loc_00497EF0: ;
    ecx = MEM32(ebp + 0x20);
    if (CMP_BE(ecx & ecx, 0)) goto loc_00497F0C; /* jbe: below or equal (unsigned <=) */

loc_00497EF7: ;
    esi = MEM32(ebp + 0x1C);
    edx = ecx;
    ecx = ecx >> 2;
    edi = eax;
    memcpy((void*)XBOX_PTR(edi), (void*)XBOX_PTR(esi), ecx * 4);
    esi += ecx * 4; edi += ecx * 4; ecx = 0; /* rep movsd */
    ecx = edx;
    ecx = ecx & 3;
    memcpy((void*)XBOX_PTR(edi), (void*)XBOX_PTR(esi), ecx);
    esi += ecx; edi += ecx; ecx = 0; /* rep movsb */
    eax = eax + edx;

loc_00497F0C: ;
    ecx = MEM32(ebp + 0x28);
    if (CMP_BE(ecx & ecx, 0)) goto loc_00497F28; /* jbe: below or equal (unsigned <=) */

loc_00497F13: ;
    esi = MEM32(ebp + 0x24);
    edx = ecx;
    ecx = ecx >> 2;
    edi = eax;
    memcpy((void*)XBOX_PTR(edi), (void*)XBOX_PTR(esi), ecx * 4);
    esi += ecx * 4; edi += ecx * 4; ecx = 0; /* rep movsd */
    ecx = edx;
    ecx = ecx & 3;
    memcpy((void*)XBOX_PTR(edi), (void*)XBOX_PTR(esi), ecx);
    esi += ecx; edi += ecx; ecx = 0; /* rep movsb */
    eax = eax + edx;

loc_00497F28: ;
    ecx = MEM32(ebp + 0x30);
    if (CMP_BE(ecx & ecx, 0)) goto loc_00497F42; /* jbe: below or equal (unsigned <=) */

loc_00497F2F: ;
    esi = MEM32(ebp + 0x2C);
    edi = eax;
    eax = ecx;
    ecx = ecx >> 2;
    memcpy((void*)XBOX_PTR(edi), (void*)XBOX_PTR(esi), ecx * 4);
    esi += ecx * 4; edi += ecx * 4; ecx = 0; /* rep movsd */
    ecx = eax;
    ecx = ecx & 3;
    memcpy((void*)XBOX_PTR(edi), (void*)XBOX_PTR(esi), ecx);
    esi += ecx; edi += ecx; ecx = 0; /* rep movsb */

loc_00497F42: ;
    PUSH32(esp, ecx);
    ecx = MEM32(ebp + -4);
    eax = esp;
    MEM32(eax) = MEM32(eax) & 0;
    PUSH32(esp, ebx);
    PUSH32(esp, 0); sub_0049A4E0(); /* call 0x0049A4E0 */

loc_00497F51: ;
    POP32(esp, edi);
    POP32(esp, esi);
    POP32(esp, ebx);
    esp = ebp;
    POP32(esp, ebp); /* leave */
    esp += 60; return; /* ret 56 */

}

/**
 * sub_00497F58
 * Original: 0x00497F58 - 0x00497FE2 (138 bytes, 58 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00497F58(void)
{
    uint32_t ebp;
    int _flags = 0; /* fallback flag var */

loc_00497F58: ;
    PUSH32(esp, ebp);
    ebp = esp;
    PUSH32(esp, ecx);
    if (TEST_NZ(MEM8(ecx + 0xA39), 8)) goto loc_00497FE0; /* jne: not equal / not zero */

loc_00497F65: ;
    edx = ecx + 0xA3B;
    SET_LO8(eax, MEM8(edx));
    MEM8(ecx + 0xA3A) = LO8(eax);
    SET_LO8(eax, LO8(eax) + 1);
    PUSH32(esp, ebx);
    MEM8(edx) = LO8(eax);
    PUSH32(esp, esi);
    eax = ecx + 0x962;
    PUSH32(esp, edi);
    esi = eax + 1;
    edx = 0; /* xor self */

loc_00497F85: ;
    SET_LO8(ebx, MEM8(eax));
    eax++;
    if (CMP_NE(LO8(ebx), LO8(edx))) goto loc_00497F85; /* jne: not equal / not zero */

loc_00497F8C: ;
    eax = eax - esi;
    esi = ecx + 0x9A2;
    MEM8(ebp + -1) = LO8(eax);
    eax = esi;
    edi = eax + 1;

loc_00497F9C: ;
    SET_LO8(ebx, MEM8(eax));
    eax++;
    if (CMP_NE(LO8(ebx), LO8(edx))) goto loc_00497F9C; /* jne: not equal / not zero */

loc_00497FA3: ;
    PUSH32(esp, edx);
    PUSH32(esp, edx);
    eax = eax - edi;
    PUSH32(esp, edx);
    MEM8(ebp + -2) = LO8(eax);
    eax = ZX8(LO8(eax));
    PUSH32(esp, eax);
    PUSH32(esp, esi);
    PUSH32(esp, 1);
    eax = ebp + -2;
    PUSH32(esp, eax);
    eax = ZX8(MEM8(ebp + -1));
    PUSH32(esp, eax);
    eax = ecx + 0x962;
    PUSH32(esp, eax);
    PUSH32(esp, 1);
    eax = ebp + -1;
    PUSH32(esp, eax);
    eax = 0; /* xor self */
    SET_LO8(eax, MEM8(ecx + 0xA3A));
    PUSH32(esp, eax);
    PUSH32(esp, 1);
    PUSH32(esp, 0x23C0);
    PUSH32(esp, 0); sub_00497E10(); /* call 0x00497E10 */

loc_00497FDD: ;
    POP32(esp, edi);
    POP32(esp, esi);
    POP32(esp, ebx);

loc_00497FE0: ;
    esp = ebp;
    POP32(esp, ebp); /* leave */
    esp += 4; return; /* ret */

}

/**
 * sub_00497FE2
 * Original: 0x00497FE2 - 0x00498012 (48 bytes, 16 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00497FE2(void)
{
    uint32_t ebp;
    int _flags = 0; /* fallback flag var */

loc_00497FE2: ;
    PUSH32(esp, ebp);
    ebp = esp;
    PUSH32(esp, esi);
    esi = ecx;
    ecx = 0; /* xor self */
    (void)0; /* cmp MEM32(ebp + 8), ecx - flags set for next jcc */
    PUSH32(esp, edi);
    if (CMP_NE(MEM32(ebp + 8), ecx)) { sub_00498012(); return; } /* jne: not equal / not zero */

loc_00497FF0: ;
    eax = esi + 0xA54;
    MEM32(ebp + 8) = eax;
    SET_LO16(eax, MEM16(esi + 0xA5C));
    MEM16(ebp + 0xC) = LO16(eax);
    eax = esi + 0xA5A;
    SET_LO16(edi, MEM16(eax));
    MEM16(eax) = LO16(ecx);
    g_seh_ebp = ebp; sub_00498015(); return; /* tail jmp 0x00498015 */

}

/**
 * sub_00498067
 * Original: 0x00498067 - 0x004980C0 (89 bytes, 28 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00498067(void)
{
    uint32_t ebp;
    int _flags = 0; /* fallback flag var */

loc_00498067: ;
    PUSH32(esp, ebp);
    ebp = esp;
    esp = esp - 0x1C;
    (void)0; /* cmp MEM8(ecx + 0x8C8), 0x13 - flags set for next jcc */
    SET_LO8(edx, MEM8(ecx + 0xA39));
    PUSH32(esp, esi);
    eax = ebp + -28;
    if (CMP_NE(MEM8(ecx + 0x8C8), 0x13)) { sub_004980C0(); return; } /* jne: not equal / not zero */

loc_00498080: ;
    if (TEST_NZ(LO8(edx), 2)) goto loc_004980A1; /* jne: not equal / not zero */

loc_00498085: ;
    SET_LO16(eax, MEM16(ecx + 0xA3E));
    PUSH32(esp, ebx);
    SET_HI8(ebx, LO8(eax));
    MEM8(ebp + -28) = 1;
    MEM8(ebp + -27) = 4;
    SET_LO8(ebx, HI8(eax));
    eax = ebp + -24;
    MEM16(ebp + -26) = LO16(ebx);
    POP32(esp, ebx);

loc_004980A1: ;
    if (TEST_NZ(LO8(edx), 1)) goto loc_004980B9; /* jne: not equal / not zero */

loc_004980A6: ;
    MEM8(eax) = 5;
    MEM8(eax + 1) = 6;
    edx = MEM32(ecx + 0xA44);
    MEM32(eax + 2) = edx;
    eax = eax + 6;

loc_004980B9: ;
    esi = 0x21C0;
    g_seh_ebp = ebp; sub_00498112(); return; /* tail jmp 0x00498112 */

}

/**
 * sub_00498141
 * Original: 0x00498141 - 0x00498179 (56 bytes, 17 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00498141(void)
{
    uint32_t ebp;
    int _flags = 0; /* fallback flag var */
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_00498141: ;
    SET_LO8(eax, MEM8(esp + 4));
    PUSH32(esp, ebx);
    PUSH32(esp, esi);
    esi = ecx;
    ecx = MEM32(esp + 0x10);
    PUSH32(esp, edi);
    ebx = 0xC0000000u;
    edx = 0; /* xor self */
    (void)0; /* cmp LO8(eax), MEM8(esi + 0x8C8) - flags set for next jcc */
    MEM8(esi + 0x8C8) = LO8(eax);
    SET_LO8(edx, (CMP_NE(LO8(eax), MEM8(esi + 0x8C8))) ? 1 : 0); /* setne */
    edi = 0; /* xor self */
    MEM32(esi + 0xA7C) = MEM32(esi + 0xA7C) + edx;
    if (CMP_NE(ecx, edi)) { sub_00498179(); return; } /* jne: not equal / not zero */

loc_00498170: ;
    MEM8(esi + 0x8C9) = 0;
    g_seh_ebp = ebp; sub_0049818B(); return; /* tail jmp 0x0049818B */

}

/**
 * sub_004984CD
 * Original: 0x004984CD - 0x00498618 (331 bytes, 93 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_004984CD(void)
{
    uint32_t ebp;
    int _flags = 0; /* fallback flag var */
    int _cf = 0; /* carry flag */

loc_004984CD: ;
    PUSH32(esp, ebp);
    ebp = esp;
    PUSH32(esp, ebx);
    ebx = 0; /* xor self */
    (void)0; /* cmp MEM8(ebp + 8), 0x13 - flags set for next jcc */
    PUSH32(esp, esi);
    esi = ecx;
    if (CMP_NE(MEM8(ebp + 8), 0x13)) goto loc_00498538; /* jne: not equal / not zero */

loc_004984DC: ;
    ecx = esi + 0xA3B;
    SET_LO8(eax, MEM8(ecx));
    MEM8(esi + 0xA3A) = LO8(eax);
    SET_LO8(eax, LO8(eax) + 1);
    PUSH32(esp, edi);
    edi = esi + 0xA44;
    MEM8(ecx) = LO8(eax);
    eax = MEM32(edi);
    (void)0; /* cmp eax, ebx - flags set for next jcc */
    MEM8(esi + 0xA38) = 1;
    MEM16(esi + 0xA3E) = 0x5D4;
    if (CMP_NE(eax, ebx)) goto loc_00498512; /* jne: not equal / not zero */

loc_0049850B: ;
    ecx = esi;
    PUSH32(esp, 0); sub_0049342D(); /* call 0x0049342D */

loc_00498512: ;
    MEM8(esi + 0xA39) = MEM8(esi + 0xA39) & 0xF0;
    MEM32(edi) = eax;
    eax = esi + 0xA78;
    ecx = MEM32(eax);
    ecx = ecx & 0xF0001FFFu;
    ecx = ecx | 0x1000;
    MEM8(esi + 0xA3C) = LO8(ebx);
    MEM32(eax) = ecx;
    POP32(esp, edi);

loc_00498538: ;
    if (CMP_NE(MEM8(ebp + 8), 0x14)) goto loc_00498587; /* jne: not equal / not zero */

loc_0049853E: ;
    SET_LO8(eax, MEM8(esi + 0xA39));
    if (TEST_NZ(LO8(eax), 0xC)) goto loc_00498555; /* jne: not equal / not zero */

loc_00498548: ;
    MEM8(esi + 0xA3C) = 3;
    MEM8(ebp + 8) = 0x15;
    goto loc_0049858D;

loc_00498555: ;
    SET_LO8(eax, LO8(eax) & 4);
    SET_LO8(ecx, ((LO8(eax) == 0)) ? 1 : 0); /* sete */
    SET_LO8(ecx, LO8(ecx) + 1);
    SET_LO8(eax, (uint32_t)(-(int32_t)LO8(eax)));
    MEM8(esi + 0xA3C) = LO8(ecx);
    ecx = esi + 0xA78;
    edx = MEM32(ecx);
    eax = _cf ? 0xFFFFFFFF : 0; /* sbb self (CF extend) */
    eax = eax & 0xFFFFC000u;
    eax = eax + 0x8000;
    edx = edx & 0xF0002FFFu;
    eax = eax | edx;
    eax = eax | 0x2000;
    MEM32(ecx) = eax;

loc_00498587: ;
    if (CMP_NE(MEM8(ebp + 8), 0x15)) goto loc_004985CC; /* jne: not equal / not zero */

loc_0049858D: ;
    ecx = esi + 0xA3B;
    SET_LO8(eax, MEM8(ecx));
    MEM8(esi + 0xA3A) = LO8(eax);
    SET_LO8(eax, LO8(eax) + 1);
    MEM8(ecx) = LO8(eax);
    eax = esi + 0xA78;
    ecx = MEM32(eax);
    ecx = ecx & 0xF0003FFFu;
    ecx = ecx | 0x3000;
    (void)0; /* test MEM8(esi + 0x8CC), 0x40 - flags set for next jcc */
    MEM8(esi + 0xA3D) = 1;
    MEM32(eax) = ecx;
    if (TEST_Z(MEM8(esi + 0x8CC), 0x40)) goto loc_00498607; /* je: equal / zero */

loc_004985C5: ;
    MEM8(esi + 0xA39) = MEM8(esi + 0xA39) | 0x60;

loc_004985CC: ;
    if (CMP_NE(MEM8(ebp + 8), 0x16)) goto loc_00498607; /* jne: not equal / not zero */

loc_004985D2: ;
    if (CMP_NE(MEM32(esi + 0x8F0), ebx)) goto loc_004985E6; /* jne: not equal / not zero */

loc_004985DA: ;
    MEM16(esi + 0xA7A) = MEM16(esi + 0xA7A) | 0x8080;
    MEM8(ebp + 8) = LO8(ebx);

loc_004985E6: ;
    ecx = esi + 0x8F8;
    if (CMP_NE(MEM32(ecx), ebx)) goto loc_00498607; /* jne: not equal / not zero */

loc_004985F0: ;
    eax = esi + 0x8FC;
    edx = MEM32(eax);
    (void)0; /* cmp edx, ebx - flags set for next jcc */
    MEM32(ecx) = edx;
    MEM32(eax) = ebx;
    if (CMP_NE(edx, ebx)) goto loc_00498607; /* jne: not equal / not zero */

loc_00498600: ;
    MEM8(esi + 0xA7B) = MEM8(esi + 0xA7B) | 1;

loc_00498607: ;
    PUSH32(esp, ebx);
    PUSH32(esp, MEM32(ebp + 8));
    ecx = esi;
    PUSH32(esp, 0); sub_00498141(); /* call 0x00498141 */

loc_00498612: ;
    POP32(esp, esi);
    POP32(esp, ebx);
    POP32(esp, ebp);
    esp += 8; return; /* ret 4 */

}

/**
 * sub_00498618
 * Original: 0x00498618 - 0x0049869D (133 bytes, 43 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00498618(void)
{
    int _flags = 0; /* fallback flag var */

loc_00498618: ;
    SET_LO8(eax, MEM8(ecx + 0x8C8));
    if (CMP_EQ(LO8(eax), 2)) goto loc_00498687; /* je: equal / zero */

loc_00498622: ;
    if (CMP_EQ(LO8(eax), 3)) goto loc_00498670; /* je: equal / zero */

loc_00498626: ;
    if (CMP_EQ(LO8(eax), 7)) goto loc_00498656; /* je: equal / zero */

loc_0049862A: ;
    if (CMP_EQ(LO8(eax), 0xB)) goto loc_00498643; /* je: equal / zero */

loc_0049862E: ;
    if (CMP_BE(LO8(eax), 0x17)) goto loc_0049869A; /* jbe: below or equal (unsigned <=) */

loc_00498632: ;
    if (CMP_A(LO8(eax), 0x19)) goto loc_0049869A; /* ja: above (unsigned >) */

loc_00498636: ;
    eax = 0; /* xor self */
    PUSH32(esp, eax);
    MEM32(ecx + 0x8F0) = eax;
    PUSH32(esp, 0x1A);
    goto loc_00498695;

loc_00498643: ;
    MEM32(ecx + 0xA7C) = MEM32(ecx + 0xA7C) - 1;
    MEM8(ecx + 0xA7B) = MEM8(ecx + 0xA7B) | 0x20;
    PUSH32(esp, 0);
    PUSH32(esp, 0xF);
    goto loc_00498695;

loc_00498656: ;
    MEM8(ecx + 0x8CC) = MEM8(ecx + 0x8CC) & 0xEF;
    eax = 0; /* xor self */
    PUSH32(esp, eax);
    MEM32(ecx + 0x8F0) = eax;
    MEM32(ecx + 0x930) = eax;
    PUSH32(esp, 9);
    goto loc_00498695;

loc_00498670: ;
    eax = 0; /* xor self */
    SET_LO8(eax, MEM8(ecx + 0x8CC));
    SET_LO8(eax, LO8(eax) >> 6);
    PUSH32(esp, 0);
    eax = eax & 0xFFFFFF01u;
    eax = eax | 4;
    goto loc_00498694;

loc_00498687: ;
    MEM32(ecx + 0xA78) = MEM32(ecx + 0xA78) | 0x80000800u;
    eax = 0; /* xor self */
    PUSH32(esp, eax);

loc_00498694: ;
    PUSH32(esp, eax);

loc_00498695: ;
    PUSH32(esp, 0); sub_00498141(); /* call 0x00498141 */

loc_0049869A: ;
    esp += 8; return; /* ret 4 */

}

/**
 * sub_0049869D
 * Original: 0x0049869D - 0x00498762 (197 bytes, 74 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0049869D(void)
{
    uint32_t ebp;
    int _flags = 0; /* fallback flag var */
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_0049869D: ;
    PUSH32(esp, ebx);
    PUSH32(esp, ebp);
    PUSH32(esp, esi);
    PUSH32(esp, edi);
    ebx = 0; /* xor self */
    PUSH32(esp, ebx);
    PUSH32(esp, ebx);
    PUSH32(esp, ebx);
    esi = ecx;
    PUSH32(esp, 0); sub_00497FE2(); /* call 0x00497FE2 */

loc_004986AD: ;
    PUSH32(esp, 0xFFFFFFFFu);
    eax = esi + 0xA68;
    PUSH32(esp, eax);
    ecx = esi;
    PUSH32(esp, 0); sub_00492F6E(); /* call 0x00492F6E */

loc_004986BD: ;
    PUSH32(esp, ebx);
    ecx = esi;
    PUSH32(esp, 0); sub_0049A304(); /* call 0x0049A304 */

loc_004986C5: ;
    ecx = esi;
    PUSH32(esp, 0); sub_0048F0E5(); /* call 0x0048F0E5 */

loc_004986CC: ;
    ebp = MEM32(esi + 0xACC);
    if (CMP_EQ(ebp, ebx)) goto loc_00498702; /* je: equal / zero */

loc_004986D6: ;
    edi = ZX8(MEM8(esi + 0xE));
    edi = (uint32_t)((int32_t)edi * (int32_t)0x130);
    edi = edi + ebp;
    goto loc_004986FE;

loc_004986E4: ;
    if (CMP_EQ(MEM8(ebp + 2), LO8(ebx))) goto loc_004986F8; /* je: equal / zero */

loc_004986E9: ;
    if (TEST_NZ(MEM8(ebp), 1)) goto loc_004986F8; /* jne: not equal / not zero */

loc_004986EF: ;
    PUSH32(esp, ebx);
    PUSH32(esp, ebp);
    ecx = esi;
    PUSH32(esp, 0); sub_0048FB99(); /* call 0x0048FB99 */

loc_004986F8: ;
    ebp = ebp + 0x130;

loc_004986FE: ;
    if (CMP_B(ebp, edi)) goto loc_004986E4; /* jb: below (unsigned <) */

loc_00498702: ;
    eax = 0; /* xor self */
    PUSH32(esp, eax);
    ecx = esi;
    PUSH32(esp, 0); sub_0049B658(); /* call 0x0049B658 */

loc_0049870C: ;
    PUSH32(esp, ebx);
    ecx = esi;
    PUSH32(esp, 0); sub_0049405E(); /* call 0x0049405E */

loc_00498714: ;
    PUSH32(esp, MEM32(esi + 0xA34));
    ecx = esi;
    PUSH32(esp, 0); sub_004932D7(); /* call 0x004932D7 */

loc_00498721: ;
    eax = 0; /* xor self */
    PUSH32(esp, 0x68);
    edx = esi + 0x8C8;
    POP32(esp, ecx);
    edi = edx;
    { uint32_t _i; for (_i = 0; _i < ecx; _i++) MEM32(edi + _i*4) = eax; }
    edi += ecx * 4; ecx = 0; /* rep stosd */
    MEM32(esi + 0x268) = ebx;
    MEM32(esi + 0x26C) = ebx;
    MEM8(edx) = LO8(ebx);
    edi = esi + 0x8D0;
    MEM32(edi) = eax; edi += 4; /* stosd */
    MEM32(edi) = eax; edi += 4; /* stosd */
    MEM32(edi) = eax; edi += 4; /* stosd */
    MEM32(edi) = eax; edi += 4; /* stosd */
    eax = 0; /* xor self */
    edi = esi + 0x8E0;
    MEM32(edi) = eax; edi += 4; /* stosd */
    MEM32(edi) = eax; edi += 4; /* stosd */
    MEM32(edi) = eax; edi += 4; /* stosd */
    MEM32(edi) = eax; edi += 4; /* stosd */
    POP32(esp, edi);
    MEM16(esi + 0x8CE) = 0x20C;
    POP32(esp, esi);
    POP32(esp, ebp);
    POP32(esp, ebx);
    esp += 4; return; /* ret */

}

/**
 * sub_00498762
 * Original: 0x00498762 - 0x0049878B (41 bytes, 15 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00498762(void)
{
    uint32_t ebp;
    int _flags = 0; /* fallback flag var */

loc_00498762: ;
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, ebp);
    ebp = esp;
    esp = esp - 0x24;
    PUSH32(esp, ebx);
    PUSH32(esp, esi);
    PUSH32(esp, edi);
    ebx = ecx;
    PUSH32(esp, 0); RECOMP_ICALL_SAFE(MEM32(0x5610F0), _icall_esp); /* indirect call */
    }

loc_00498773: ;
    edi = MEM32(ebp + 8);
    (void)0; /* test edi, edi - flags set for next jcc */
    MEM8(ebp + -4) = LO8(eax);
    if (TEST_NZ(edi, edi)) { sub_0049878B(); return; } /* jne: not equal / not zero */

loc_0049877D: ;
    MEM8(ebx + 0x8CC) = MEM8(ebx + 0x8CC) & 0xFD;
    esi = 0; /* xor self */
    g_seh_ebp = ebp; sub_00498848(); return; /* tail jmp 0x00498848 */

}

/**
 * sub_00498D04
 * Original: 0x00498D04 - 0x00498D54 (80 bytes, 28 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00498D04(void)
{
    int _flags = 0; /* fallback flag var */

loc_00498D04: ;
    PUSH32(esp, esi);
    esi = ecx;
    SET_LO8(edx, MEM8(esi + 0x8C8));
    if (CMP_EQ(LO8(edx), 5)) goto loc_00498D3E; /* je: equal / zero */

loc_00498D12: ;
    if (CMP_EQ(LO8(edx), 0xC)) goto loc_00498D3E; /* je: equal / zero */

loc_00498D17: ;
    if (CMP_EQ(LO8(edx), 0xE)) goto loc_00498D3E; /* je: equal / zero */

loc_00498D1C: ;
    if (CMP_EQ(LO8(edx), 0x16)) goto loc_00498D3E; /* je: equal / zero */

loc_00498D21: ;
    ecx = MEM32(esp + 8);
    eax = esi + 0xA78;
    MEM32(eax) = MEM32(eax) | ecx;
    (void)0; /* cmp LO8(edx), 0x14 - flags set for next jcc */
    ecx = MEM32(eax);
    if (CMP_NE(LO8(edx), 0x14)) goto loc_00498D45; /* jne: not equal / not zero */

loc_00498D34: ;
    ecx = ecx | 0x80010000u;
    MEM32(eax) = ecx;
    goto loc_00498D45;

loc_00498D3E: ;
    ecx = esi;
    PUSH32(esp, 0); sub_0049869D(); /* call 0x0049869D */

loc_00498D45: ;
    PUSH32(esp, 0);
    PUSH32(esp, 0);
    ecx = esi;
    PUSH32(esp, 0); sub_00498141(); /* call 0x00498141 */

loc_00498D50: ;
    POP32(esp, esi);
    esp += 8; return; /* ret 4 */

}

/**
 * sub_00498D54
 * Original: 0x00498D54 - 0x00499187 (1075 bytes, 331 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00498D54(void)
{
    uint32_t ebp;
    int _flags = 0; /* fallback flag var */

loc_00498D54: ;
    PUSH32(esp, ebp);
    ebp = esp;
    esp = esp - 0x20;
    (void)0; /* cmp MEM32(ebp + 0x10), 0xF0 - flags set for next jcc */
    PUSH32(esp, ebx);
    ebx = ecx;
    if (CMP_B(MEM32(ebp + 0x10), 0xF0)) goto loc_00499182; /* jb: below (unsigned <) */

loc_00498D6A: ;
    eax = MEM32(ebp + 0xC);
    ecx = MEM32(eax + 0xC);
    eax = eax + 8;
    ecx = BSWAP32(ecx); /* bswap */
    (void)0; /* cmp ecx, MEM32(ebx + 0xA7C) - flags set for next jcc */
    MEM32(ebp + -8) = eax;
    if (CMP_NE(ecx, MEM32(ebx + 0xA7C))) goto loc_00499182; /* jne: not equal / not zero */

loc_00498D84: ;
    PUSH32(esp, esi);
    PUSH32(esp, edi);
    PUSH32(esp, 3);
    POP32(esp, ecx);
    edi = ebx + 0x1E0;
    esi = eax + 0x1C;
    edx = 0; /* xor self */
    /* repe cmpsw - string compare, ecx iterations */
    if (0 /* strings differed (repe cmpsb) */) goto loc_00499180; /* jne: not equal / not zero */

loc_00498D9D: ;
    if (CMP_NE(MEM8(eax), 2)) goto loc_00499179; /* jne: not equal / not zero */

loc_00498DA6: ;
    if (CMP_NE(MEM8(eax + 1), 1)) goto loc_00499179; /* jne: not equal / not zero */

loc_00498DB0: ;
    if (CMP_NE(MEM8(eax + 2), 6)) goto loc_00499179; /* jne: not equal / not zero */

loc_00498DBA: ;
    if (CMP_NE(MEM32(eax + 0xEC), 0x63538263)) goto loc_00499179; /* jne: not equal / not zero */

loc_00498DCA: ;
    edi = 0; /* xor self */
    PUSH32(esp, edi);
    ecx = ebp + 0xC;
    PUSH32(esp, ecx);
    PUSH32(esp, edi);
    PUSH32(esp, 1);
    PUSH32(esp, 0x35);
    PUSH32(esp, MEM32(ebp + 0x10));
    ecx = eax;
    PUSH32(esp, 0); sub_004978EC(); /* call 0x004978EC */

loc_00498DE0: ;
    if (TEST_Z(eax, eax)) goto loc_00498DF5; /* je: equal / zero */

loc_00498DE4: ;
    esi = MEM32(ebp + 0xC);
    SET_LO8(eax, MEM8(esi));
    if (CMP_EQ(LO8(eax), 2)) goto loc_00498E01; /* je: equal / zero */

loc_00498DED: ;
    if (CMP_EQ(LO8(eax), 5)) goto loc_00498E01; /* je: equal / zero */

loc_00498DF1: ;
    if (CMP_EQ(LO8(eax), 6)) goto loc_00498E01; /* je: equal / zero */

loc_00498DF5: ;
    MEM8(ebx + 0xA7A) = MEM8(ebx + 0xA7A) | 0x10;
    goto loc_00499180;

loc_00498E01: ;
    PUSH32(esp, edi);
    eax = ebp + -16;
    PUSH32(esp, eax);
    PUSH32(esp, edi);
    edi = MEM32(ebp + -8);
    PUSH32(esp, 4);
    PUSH32(esp, 0x36);
    PUSH32(esp, MEM32(ebp + 0x10));
    ecx = edi;
    PUSH32(esp, 0); sub_004978EC(); /* call 0x004978EC */

loc_00498E18: ;
    if (TEST_Z(eax, eax)) goto loc_00498E28; /* je: equal / zero */

loc_00498E1C: ;
    ecx = MEM32(ebp + -16);
    PUSH32(esp, 0); sub_004938B8(); /* call 0x004938B8 */

loc_00498E24: ;
    if (TEST_NZ(eax, eax)) goto loc_00498E34; /* jne: not equal / not zero */

loc_00498E28: ;
    MEM8(ebx + 0xA7A) = MEM8(ebx + 0xA7A) | 0x20;
    goto loc_00499180;

loc_00498E34: ;
    if (CMP_NE(MEM8(esi), 6)) goto loc_00498EA1; /* jne: not equal / not zero */

loc_00498E39: ;
    SET_LO8(eax, MEM8(ebx + 0x8C8));
    if (CMP_EQ(LO8(eax), 8)) goto loc_00498E5B; /* je: equal / zero */

loc_00498E43: ;
    if (CMP_EQ(LO8(eax), 0xA)) goto loc_00498E5B; /* je: equal / zero */

loc_00498E47: ;
    if (CMP_EQ(LO8(eax), 0xD)) goto loc_00498E5B; /* je: equal / zero */

loc_00498E4B: ;
    if (CMP_EQ(LO8(eax), 0xE)) goto loc_00498E5B; /* je: equal / zero */

loc_00498E4F: ;
    MEM8(ebx + 0xA7B) = MEM8(ebx + 0xA7B) | 8;
    goto loc_00499180;

loc_00498E5B: ;
    MEM8(ebx + 0xA7A) = MEM8(ebx + 0xA7A) | 2;
    if (CMP_EQ(LO8(eax), 8)) goto loc_00498E84; /* je: equal / zero */

loc_00498E66: ;
    if (CMP_EQ(LO8(eax), 0xA)) goto loc_00498E84; /* je: equal / zero */

loc_00498E6A: ;
    if (CMP_EQ(LO8(eax), 0xD)) goto loc_00498E76; /* je: equal / zero */

loc_00498E6E: ;
    if (CMP_NE(LO8(eax), 0xE)) goto loc_00499180; /* jne: not equal / not zero */

loc_00498E76: ;
    PUSH32(esp, 0);
    ecx = ebx;
    PUSH32(esp, 0); sub_00498D04(); /* call 0x00498D04 */

loc_00498E7F: ;
    goto loc_00499180;

loc_00498E84: ;
    MEM8(ebx + 0x8CC) = MEM8(ebx + 0x8CC) & 0xEF;
    eax = 0; /* xor self */
    PUSH32(esp, eax);
    MEM32(ebx + 0x8F0) = eax;
    MEM32(ebx + 0x930) = eax;
    PUSH32(esp, 9);
    goto loc_00499163;

loc_00498EA1: ;
    if (CMP_EQ(MEM8(ebx + 0x8C8), 4)) goto loc_00498EC2; /* je: equal / zero */

loc_00498EAA: ;
    ecx = edi + 0x10;
    PUSH32(esp, 0); sub_004938B8(); /* call 0x004938B8 */

loc_00498EB2: ;
    if (TEST_NZ(eax, eax)) goto loc_00498EC2; /* jne: not equal / not zero */

loc_00498EB6: ;
    MEM8(ebx + 0xA7A) = MEM8(ebx + 0xA7A) | 0x40;
    goto loc_00499180;

loc_00498EC2: ;
    if (CMP_NE(MEM8(esi), 2)) goto loc_00498F0D; /* jne: not equal / not zero */

loc_00498EC7: ;
    if (CMP_EQ(MEM8(ebx + 0x8C8), 9)) goto loc_00498EDC; /* je: equal / zero */

loc_00498ED0: ;
    MEM8(ebx + 0xA7B) = MEM8(ebx + 0xA7B) | 4;
    goto loc_00499180;

loc_00498EDC: ;
    MEM8(ebx + 0xA79) = MEM8(ebx + 0xA79) | 0x20;
    eax = MEM32(edi + 0x10);
    MEM32(ebx + 0x8F0) = eax;
    eax = MEM32(ebp + -16);
    eax = MEM32(eax);
    MEM8(ebx + 0x8CC) = MEM8(ebx + 0x8CC) & 0xEF;
    MEM32(ebx + 0xA7C) = MEM32(ebx + 0xA7C) - 1;
    PUSH32(esp, 0);
    MEM32(ebx + 0x930) = eax;
    PUSH32(esp, 0xA);
    goto loc_00499163;

loc_00498F0D: ;
    SET_LO8(eax, MEM8(ebx + 0x8C8));
    if (CMP_EQ(LO8(eax), 8)) goto loc_00498F33; /* je: equal / zero */

loc_00498F17: ;
    if (CMP_EQ(LO8(eax), 0xA)) goto loc_00498F33; /* je: equal / zero */

loc_00498F1B: ;
    if (CMP_EQ(LO8(eax), 0xD)) goto loc_00498F33; /* je: equal / zero */

loc_00498F1F: ;
    if (CMP_EQ(LO8(eax), 0xE)) goto loc_00498F33; /* je: equal / zero */

loc_00498F23: ;
    if (CMP_EQ(LO8(eax), 4)) goto loc_00498F33; /* je: equal / zero */

loc_00498F27: ;
    MEM8(ebx + 0xA7B) = MEM8(ebx + 0xA7B) | 2;
    goto loc_00499180;

loc_00498F33: ;
    esi = 0; /* xor self */
    (void)0; /* cmp LO8(eax), 4 - flags set for next jcc */
    MEM32(ebp + -24) = esi;
    MEM32(ebp + -12) = esi;
    if (CMP_EQ(LO8(eax), 4)) goto loc_00498FA9; /* je: equal / zero */

loc_00498F3F: ;
    PUSH32(esp, esi);
    eax = ebp + -24;
    PUSH32(esp, eax);
    PUSH32(esp, esi);
    PUSH32(esp, 4);
    PUSH32(esp, 0x33);
    PUSH32(esp, MEM32(ebp + 0x10));
    ecx = edi;
    PUSH32(esp, 0); sub_004978EC(); /* call 0x004978EC */

loc_00498F53: ;
    if (TEST_Z(eax, eax)) goto loc_00498F69; /* je: equal / zero */

loc_00498F57: ;
    ecx = ZX8(MEM8(ebx + 0x20));
    eax = MEM32(ebp + -24);
    ecx = (uint32_t)((int32_t)ecx * (int32_t)0x3C);
    eax = MEM32(eax);
    eax = BSWAP32(eax); /* bswap */
    if (CMP_AE(eax, ecx)) goto loc_00498F75; /* jae: above or equal (unsigned >=) */

loc_00498F69: ;
    MEM8(ebx + 0xA7A) = MEM8(ebx + 0xA7A) | 0x80;
    goto loc_00499180;

loc_00498F75: ;
    PUSH32(esp, esi);
    eax = ebp + -12;
    PUSH32(esp, eax);
    PUSH32(esp, esi);
    PUSH32(esp, 4);
    PUSH32(esp, 1);
    PUSH32(esp, MEM32(ebp + 0x10));
    ecx = edi;
    PUSH32(esp, 0); sub_004978EC(); /* call 0x004978EC */

loc_00498F89: ;
    if (TEST_Z(eax, eax)) goto loc_00498F9D; /* je: equal / zero */

loc_00498F8D: ;
    eax = MEM32(ebp + -12);
    eax = MEM32(eax);
    eax = BSWAP32(eax); /* bswap */
    eax = ~eax;
    ecx = eax + 1;
    if (TEST_Z(eax, ecx)) goto loc_00498FA9; /* je: equal / zero */

loc_00498F9D: ;
    MEM8(ebx + 0xA7B) = MEM8(ebx + 0xA7B) | 1;
    goto loc_00499180;

loc_00498FA9: ;
    MEM8(ebx + 0xA79) = MEM8(ebx + 0xA79) | 0x80;
    SET_LO8(ecx, MEM8(ebx + 0x8C8));
    (void)0; /* cmp LO8(ecx), 0xD - flags set for next jcc */
    eax = MEM32(ebx + 0xA78);
    if (CMP_EQ(LO8(ecx), 0xD)) goto loc_004990BB; /* je: equal / zero */

loc_00498FC5: ;
    if (CMP_EQ(LO8(ecx), 0xE)) goto loc_004990BB; /* je: equal / zero */

loc_00498FCE: ;
    esi = ebx + 0x908;
    MEM8(ebp + -4) = 3;

loc_00498FD8: ;
    (void)0; /* cmp MEM8(ebp + -4), 3 - flags set for next jcc */
    MEM32(ebp + -28) = esi;
    MEM32(ebp + -20) = 4;
    if (CMP_NE(MEM8(ebp + -4), 3)) goto loc_00498FF1; /* jne: not equal / not zero */

loc_00498FE8: ;
    if (TEST_NZ(MEM8(ebx + 0xA78), 4)) goto loc_00499070; /* jne: not equal / not zero */

loc_00498FF1: ;
    eax = 0; /* xor self */
    ecx = MEM32(ebp + -8);
    edi = esi;
    MEM32(edi) = eax; edi += 4; /* stosd */
    MEM32(edi) = eax; edi += 4; /* stosd */
    MEM32(edi) = eax; edi += 4; /* stosd */
    MEM32(edi) = eax; edi += 4; /* stosd */
    eax = ebp + 0xC;
    PUSH32(esp, eax);
    eax = ebp + -32;
    PUSH32(esp, eax);
    PUSH32(esp, 1);
    PUSH32(esp, 4);
    PUSH32(esp, MEM32(ebp + -4));
    PUSH32(esp, MEM32(ebp + 0x10));
    PUSH32(esp, 0); sub_004978EC(); /* call 0x004978EC */

loc_00499013: ;
    if (TEST_Z(eax, eax)) goto loc_00499067; /* je: equal / zero */

loc_00499017: ;
    MEM32(ebp + 0xC) = MEM32(ebp + 0xC) >> 2;
    if ((MEM32(ebp + 0xC) == 0)) goto loc_00499067; /* je: equal / zero */

loc_0049901D: ;
    edi = MEM32(ebp + -32);

loc_00499020: ;
    if (CMP_BE(MEM32(ebp + -20), 0)) goto loc_00499067; /* jbe: below or equal (unsigned <=) */

loc_00499026: ;
    ecx = edi;
    PUSH32(esp, 0); sub_004938B8(); /* call 0x004938B8 */

loc_0049902D: ;
    if (TEST_Z(eax, eax)) goto loc_00499058; /* je: equal / zero */

loc_00499031: ;
    eax = MEM32(ebp + -28);
    (void)0; /* cmp esi, eax - flags set for next jcc */
    ecx = esi;
    if (CMP_AE(esi, eax)) goto loc_00499047; /* jae: above or equal (unsigned >=) */

loc_0049903A: ;
    edx = MEM32(edi);

loc_0049903C: ;
    if (CMP_EQ(MEM32(ecx), edx)) goto loc_00499047; /* je: equal / zero */

loc_00499040: ;
    ecx = ecx + 4;
    if (CMP_B(ecx, eax)) goto loc_0049903C; /* jb: below (unsigned <) */

loc_00499047: ;
    if (CMP_NE(ecx, eax)) goto loc_00499058; /* jne: not equal / not zero */

loc_0049904B: ;
    ecx = MEM32(edi);
    MEM32(eax) = ecx;
    eax = eax + 4;
    MEM32(ebp + -20) = MEM32(ebp + -20) - 1;
    MEM32(ebp + -28) = eax;

loc_00499058: ;
    MEM32(ebp + 0xC) = MEM32(ebp + 0xC) - 1;
    edi = edi + 4;
    (void)0; /* cmp MEM32(ebp + 0xC), 0 - flags set for next jcc */
    MEM32(ebp + -32) = edi;
    if (CMP_A(MEM32(ebp + 0xC), 0)) goto loc_00499020; /* ja: above (unsigned >) */

loc_00499067: ;
    (void)0; /* cmp MEM8(ebp + -4), 6 - flags set for next jcc */
    edi = MEM32(ebp + -8);
    if (CMP_EQ(MEM8(ebp + -4), 6)) goto loc_00499088; /* je: equal / zero */

loc_00499070: ;
    if (TEST_NZ(MEM8(ebx + 0x8CC), 0x40)) goto loc_00499088; /* jne: not equal / not zero */

loc_00499079: ;
    esi = ebx + 0x8F8;
    MEM8(ebp + -4) = 6;
    goto loc_00498FD8;

loc_00499088: ;
    if (CMP_NE(MEM8(ebx + 0x8C8), 4)) goto loc_004990A5; /* jne: not equal / not zero */

loc_00499091: ;
    eax = MEM32(ebp + -16);
    eax = MEM32(eax);
    PUSH32(esp, 0);
    MEM32(ebx + 0x930) = eax;
    PUSH32(esp, 5);
    goto loc_00499163;

loc_004990A5: ;
    eax = MEM32(edi + 0x10);
    MEM32(ebx + 0x8F0) = eax;
    eax = MEM32(ebp + -12);
    eax = MEM32(eax);
    MEM32(ebx + 0x8F4) = eax;
    goto loc_004990DB;

loc_004990BB: ;
    ecx = MEM32(ebx + 0x8F0);
    if (CMP_NE(ecx, MEM32(edi + 0x10))) goto loc_0049916C; /* jne: not equal / not zero */

loc_004990CA: ;
    ecx = MEM32(ebx + 0x8F4);
    edx = MEM32(ebp + -12);
    if (CMP_NE(ecx, MEM32(edx))) goto loc_0049916C; /* jne: not equal / not zero */

loc_004990DB: ;
    eax = MEM32(ebp + -16);
    eax = MEM32(eax);
    ecx = MEM32(ebp + 8);
    MEM32(ebx + 0x930) = eax;
    PUSH32(esp, 0); sub_0049345C(); /* call 0x0049345C */

loc_004990EE: ;
    ecx = ZX8(MEM8(ebx + 0x21));
    esi = eax;
    ecx = (uint32_t)((int32_t)ecx * (int32_t)0x15180);
    eax = MEM32(ebx + 0x1D8);
    esi = esi + 6;
    edi = ebx + 0x934;
    MEM32(edi) = MEM32(esi); esi += 4; edi += 4; /* movsd */
    MEM16(edi) = MEM16(esi); esi += 2; edi += 2; /* movsw */
    MEM32(ebx + 0x920) = eax;
    eax = MEM32(ebp + -24);
    eax = MEM32(eax);
    eax = BSWAP32(eax); /* bswap */
    (void)0; /* cmp eax, ecx - flags set for next jcc */
    MEM32(ebx + 0x92C) = eax;
    if (CMP_B(eax, ecx)) goto loc_00499125; /* jb: below (unsigned <) */

loc_00499123: ;
    eax = ecx;

loc_00499125: ;
    MEM32(ebx + 0x92C) = eax;
    eax = eax >> 1;
    MEM32(ebx + 0x924) = eax;
    eax = MEM32(ebx + 0x92C);
    eax = (uint32_t)((int32_t)eax * (int32_t)7);
    eax = eax >> 3;
    MEM32(ebx + 0x928) = eax;
    SET_LO8(eax, MEM8(ebx + 0x8C8));
    if (CMP_EQ(LO8(eax), 0xD)) goto loc_0049915F; /* je: equal / zero */

loc_0049914F: ;
    if (CMP_EQ(LO8(eax), 0xE)) goto loc_0049915F; /* je: equal / zero */

loc_00499153: ;
    MEM32(ebx + 0xA7C) = MEM32(ebx + 0xA7C) - 1;
    PUSH32(esp, 0);
    PUSH32(esp, 0xB);
    goto loc_00499163;

loc_0049915F: ;
    PUSH32(esp, 0);
    PUSH32(esp, 0xC);

loc_00499163: ;
    ecx = ebx;
    PUSH32(esp, 0); sub_00498141(); /* call 0x00498141 */

loc_0049916A: ;
    goto loc_00499180;

loc_0049916C: ;
    eax = eax | 0x10000000;
    MEM32(ebx + 0xA78) = eax;
    goto loc_00499180;

loc_00499179: ;
    MEM8(ebx + 0xA7A) = MEM8(ebx + 0xA7A) | 8;

loc_00499180: ;
    POP32(esp, edi);
    POP32(esp, esi);

loc_00499182: ;
    POP32(esp, ebx);
    esp = ebp;
    POP32(esp, ebp); /* leave */
    esp += 16; return; /* ret 12 */

}

/**
 * sub_00499187
 * Original: 0x00499187 - 0x00499618 (1169 bytes, 417 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00499187(void)
{
    uint32_t ebp;
    int _flags = 0; /* fallback flag var */

loc_00499187: ;
    PUSH32(esp, ebp);
    ebp = esp;
    esp = esp - 0x38;
    PUSH32(esp, ebx);
    PUSH32(esp, esi);
    PUSH32(esp, edi);
    edi = MEM32(ebp + 8);
    esi = MEM32(edi);
    ebx = ecx;
    SET_LO16(ecx, MEM16(edi + 4));
    (void)0; /* cmp LO16(ecx), 4 - flags set for next jcc */
    MEM32(ebp + -28) = esi;
    if (CMP_B(LO16(ecx), 4)) goto loc_00499611; /* jb: below (unsigned <) */

loc_004991A8: ;
    SET_LO16(eax, MEM16(esi + 2));
    SET_HI8(edx, LO8(eax));
    SET_LO8(edx, HI8(eax));
    eax = ZX16(LO16(edx));
    if (CMP_B(eax, 4)) goto loc_00499611; /* jb: below (unsigned <) */

loc_004991BC: ;
    ecx = ZX16(LO16(ecx));
    if (CMP_A(eax, ecx)) goto loc_00499611; /* ja: above (unsigned >) */

loc_004991C7: ;
    MEM16(edi + 4) = LO16(eax);
    if (CMP_B(MEM8(ebx + 0x8C8), 0x13)) goto loc_00499611; /* jb: below (unsigned <) */

loc_004991D8: ;
    SET_LO8(ecx, MEM8(esi));
    if (CMP_EQ(LO8(ecx), 5)) goto loc_00499605; /* je: equal / zero */

loc_004991E3: ;
    if (CMP_EQ(LO8(ecx), 7)) goto loc_00499605; /* je: equal / zero */

loc_004991EC: ;
    if (CMP_EQ(LO8(ecx), 8)) goto loc_00499605; /* je: equal / zero */

loc_004991F5: ;
    edx = 0x21C0;
    if (CMP_NE(MEM16(ebp + 0xC), LO16(edx))) goto loc_00499255; /* jne: not equal / not zero */

loc_00499200: ;
    if (CMP_EQ(LO8(ecx), 0xA)) goto loc_00499611; /* je: equal / zero */

loc_00499209: ;
    if (CMP_EQ(LO8(ecx), 0xB)) goto loc_00499611; /* je: equal / zero */

loc_00499212: ;
    if (CMP_NE(LO8(ecx), 9)) goto loc_00499255; /* jne: not equal / not zero */

loc_00499217: ;
    if (CMP_B(eax, 8)) goto loc_00499611; /* jb: below (unsigned <) */

loc_00499220: ;
    if (CMP_NE(MEM8(ebx + 0xA38), 4)) goto loc_00499611; /* jne: not equal / not zero */

loc_0049922D: ;
    ecx = 0; /* xor self */
    PUSH32(esp, ecx);
    PUSH32(esp, ecx);
    PUSH32(esp, ecx);
    PUSH32(esp, ecx);
    PUSH32(esp, ecx);
    PUSH32(esp, ecx);
    PUSH32(esp, ecx);
    eax = eax + 0xFFFFFFF8u;
    PUSH32(esp, eax);
    eax = esi + 8;
    PUSH32(esp, eax);
    PUSH32(esp, 4);
    eax = ebx + 0xA44;
    PUSH32(esp, eax);
    eax = 0; /* xor self */
    SET_LO8(eax, MEM8(esi + 1));
    PUSH32(esp, eax);
    PUSH32(esp, 0xA);
    PUSH32(esp, edx);
    goto loc_004995FC;

loc_00499255: ;
    if (CMP_B(LO8(ecx), 1)) goto loc_004995CE; /* jb: below (unsigned <) */

loc_0049925E: ;
    if (CMP_A(LO8(ecx), 4)) goto loc_004995CE; /* ja: above (unsigned >) */

loc_00499267: ;
    if (CMP_NE(MEM16(ebp + 0xC), LO16(edx))) goto loc_00499278; /* jne: not equal / not zero */

loc_0049926D: ;
    edx = ebx + 0xA38;
    MEM32(ebp + -12) = edx;
    goto loc_00499283;

loc_00499278: ;
    ecx = ebx + 0xA3D;
    MEM32(ebp + -12) = ecx;
    edx = ecx;

loc_00499283: ;
    if (CMP_EQ(MEM8(edx), 0)) goto loc_00499611; /* je: equal / zero */

loc_0049928C: ;
    edi = 0; /* xor self */
    eax = eax + 0xFFFFFFFCu;
    (void)0; /* cmp eax, edi - flags set for next jcc */
    ecx = esi + 4;
    MEM32(ebp + 8) = edi;
    MEM32(ebp + -20) = edi;
    MEM32(ebp + -4) = ecx;
    MEM32(ebp + -16) = eax;
    MEM32(ebp + -8) = eax;
    if (CMP_BE(eax, edi)) goto loc_0049930A; /* jbe: below or equal (unsigned <=) */

loc_004992A7: ;
    if (CMP_B(MEM32(ebp + -8), 2)) goto loc_00499611; /* jb: below (unsigned <) */

loc_004992B1: ;
    ecx = MEM32(ebp + -4);
    SET_LO8(eax, MEM8(ecx + 1));
    if (CMP_B(LO8(eax), 2)) goto loc_00499611; /* jb: below (unsigned <) */

loc_004992BF: ;
    eax = ZX8(LO8(eax));
    (void)0; /* cmp eax, MEM32(ebp + -8) - flags set for next jcc */
    MEM32(ebp + -24) = eax;
    if (CMP_A(eax, MEM32(ebp + -8))) goto loc_00499611; /* ja: above (unsigned >) */

loc_004992CE: ;
    eax = 0; /* xor self */
    SET_LO8(eax, MEM8(esi));
    PUSH32(esp, edi);
    PUSH32(esp, edi);
    PUSH32(esp, eax);
    PUSH32(esp, MEM32(ebp + 0xC));
    PUSH32(esp, ecx);
    ecx = ebx;
    PUSH32(esp, 0); sub_00497BA7(); /* call 0x00497BA7 */

loc_004992E0: ;
    if (CMP_EQ(eax, edi)) goto loc_00499611; /* je: equal / zero */

loc_004992E8: ;
    ecx = 0; /* xor self */
    ecx++;
    if (CMP_NE(eax, ecx)) goto loc_004992F4; /* jne: not equal / not zero */

loc_004992EF: ;
    MEM32(ebp + 8) = ecx;
    goto loc_004992FC;

loc_004992F4: ;
    if (CMP_NE(eax, 2)) goto loc_004992FC; /* jne: not equal / not zero */

loc_004992F9: ;
    MEM32(ebp + -20) = ecx;

loc_004992FC: ;
    eax = MEM32(ebp + -24);
    MEM32(ebp + -4) = MEM32(ebp + -4) + eax;
    MEM32(ebp + -8) = MEM32(ebp + -8) - eax;
    if ((MEM32(ebp + -8) != 0)) goto loc_004992A7; /* jne: not equal / not zero */

loc_00499307: ;
    edx = MEM32(ebp + -12);

loc_0049930A: ;
    if (CMP_NE(MEM8(esi), 1)) goto loc_00499501; /* jne: not equal / not zero */

loc_00499313: ;
    if (CMP_NE(MEM8(ebx + 0x8C8), 0x14)) goto loc_00499328; /* jne: not equal / not zero */

loc_0049931C: ;
    PUSH32(esp, 0x13);
    ecx = ebx;
    PUSH32(esp, 0); sub_004984CD(); /* call 0x004984CD */

loc_00499325: ;
    edx = MEM32(ebp + -12);

loc_00499328: ;
    MEM8(ebx + 0xA7A) = MEM8(ebx + 0xA7A) | 4;
    if (CMP_NE(MEM32(ebp + 8), edi)) goto loc_004993D9; /* jne: not equal / not zero */

loc_00499338: ;
    if (CMP_NE(MEM32(ebp + -20), edi)) goto loc_004993D9; /* jne: not equal / not zero */

loc_00499341: ;
    eax = esi + 4;
    MEM32(ebp + -4) = eax;
    eax = MEM32(ebp + -16);
    (void)0; /* cmp eax, edi - flags set for next jcc */
    MEM32(ebp + -8) = eax;
    if (CMP_BE(eax, edi)) goto loc_00499379; /* jbe: below or equal (unsigned <=) */

loc_00499351: ;
    eax = MEM32(ebp + -4);
    SET_LO8(ecx, MEM8(eax + 1));
    MEM8(ebp + 0xB) = LO8(ecx);
    ecx = 0; /* xor self */
    SET_LO8(ecx, MEM8(esi));
    PUSH32(esp, 1);
    PUSH32(esp, edi);
    PUSH32(esp, ecx);
    PUSH32(esp, MEM32(ebp + 0xC));
    ecx = ebx;
    PUSH32(esp, eax);
    PUSH32(esp, 0); sub_00497BA7(); /* call 0x00497BA7 */

loc_0049936D: ;
    eax = ZX8(MEM8(ebp + 0xB));
    MEM32(ebp + -4) = MEM32(ebp + -4) + eax;
    MEM32(ebp + -8) = MEM32(ebp + -8) - eax;
    if ((MEM32(ebp + -8) != 0)) goto loc_00499351; /* jne: not equal / not zero */

loc_00499379: ;
    PUSH32(esp, edi);
    MEM8(ebx + 0xA79) = MEM8(ebx + 0xA79) | 0x80;
    PUSH32(esp, edi);
    PUSH32(esp, edi);
    PUSH32(esp, edi);
    PUSH32(esp, edi);
    PUSH32(esp, edi);
    PUSH32(esp, edi);
    PUSH32(esp, edi);
    PUSH32(esp, edi);
    PUSH32(esp, MEM32(ebp + -16));
    eax = esi + 4;
    PUSH32(esp, eax);
    eax = 0; /* xor self */
    SET_LO8(eax, MEM8(esi + 1));
    ecx = ebx;
    PUSH32(esp, eax);
    PUSH32(esp, 2);
    PUSH32(esp, MEM32(ebp + 0xC));
    PUSH32(esp, 0); sub_00497E10(); /* call 0x00497E10 */

loc_004993A2: ;
    ecx = MEM32(ebp + -12);
    SET_LO8(eax, MEM8(ecx));
    if (CMP_EQ(LO8(eax), 4)) goto loc_00499611; /* je: equal / zero */

loc_004993AF: ;
    if (CMP_NE(LO8(eax), 2)) goto loc_004993D1; /* jne: not equal / not zero */

loc_004993B3: ;
    MEM8(ecx) = 4;

loc_004993B6: ;
    (void)0; /* cmp MEM8(ebx + 0x8C8), 0x13 - flags set for next jcc */
    ecx = ebx;
    SET_LO8(eax, (CMP_NE(MEM8(ebx + 0x8C8), 0x13)) ? 1 : 0); /* setne */
    eax = eax + eax + 0x14;
    PUSH32(esp, eax);
    PUSH32(esp, 0); sub_004984CD(); /* call 0x004984CD */

loc_004993CC: ;
    goto loc_00499611;

loc_004993D1: ;
    MEM8(ecx) = 3;
    goto loc_00499611;

loc_004993D9: ;
    if (CMP_EQ(MEM8(edx), 4)) goto loc_00499611; /* je: equal / zero */

loc_004993E2: ;
    (void)0; /* cmp MEM32(ebp + 8), edi - flags set for next jcc */
    ecx = MEM32(ebp + -16);
    eax = esi + 4;
    MEM32(ebp + -8) = ecx;
    MEM32(ebp + -4) = eax;
    if (CMP_EQ(MEM32(ebp + 8), edi)) goto loc_0049946C; /* je: equal / zero */

loc_004993F3: ;
    (void)0; /* cmp ecx, edi - flags set for next jcc */
    MEM32(ebp + -16) = eax;
    if (CMP_BE(ecx, edi)) goto loc_0049944B; /* jbe: below or equal (unsigned <=) */

loc_004993FA: ;
    eax = MEM32(ebp + -4);
    SET_LO8(ecx, MEM8(eax + 1));
    MEM8(ebp + 0xB) = LO8(ecx);
    ecx = 0; /* xor self */
    SET_LO8(ecx, MEM8(esi));
    PUSH32(esp, edi);
    PUSH32(esp, edi);
    PUSH32(esp, ecx);
    PUSH32(esp, MEM32(ebp + 0xC));
    ecx = ebx;
    PUSH32(esp, eax);
    PUSH32(esp, 0); sub_00497BA7(); /* call 0x00497BA7 */

loc_00499415: ;
    if (CMP_NE(eax, 1)) goto loc_0049943C; /* jne: not equal / not zero */

loc_0049941A: ;
    eax = ZX8(MEM8(ebp + 0xB));
    edi = MEM32(ebp + -16);
    esi = MEM32(ebp + -4);
    MEM32(ebp + -16) = MEM32(ebp + -16) + eax;
    ecx = eax;
    edx = ecx;
    ecx = ecx >> 2;
    memcpy((void*)XBOX_PTR(edi), (void*)XBOX_PTR(esi), ecx * 4);
    esi += ecx * 4; edi += ecx * 4; ecx = 0; /* rep movsd */
    ecx = edx;
    ecx = ecx & 3;
    memcpy((void*)XBOX_PTR(edi), (void*)XBOX_PTR(esi), ecx);
    esi += ecx; edi += ecx; ecx = 0; /* rep movsb */
    esi = MEM32(ebp + -28);
    edi = 0; /* xor self */

loc_0049943C: ;
    eax = ZX8(MEM8(ebp + 0xB));
    MEM32(ebp + -4) = MEM32(ebp + -4) + eax;
    MEM32(ebp + -8) = MEM32(ebp + -8) - eax;
    if ((MEM32(ebp + -8) != 0)) goto loc_004993FA; /* jne: not equal / not zero */

loc_00499448: ;
    eax = MEM32(ebp + -16);

loc_0049944B: ;
    MEM8(ebx + 0xA7A) = MEM8(ebx + 0xA7A) | 2;
    PUSH32(esp, edi);
    PUSH32(esp, edi);
    PUSH32(esp, edi);
    PUSH32(esp, edi);
    PUSH32(esp, edi);
    PUSH32(esp, edi);
    PUSH32(esp, edi);
    PUSH32(esp, edi);
    PUSH32(esp, edi);
    ecx = esi + 4;
    eax = eax - ecx;
    PUSH32(esp, eax);
    eax = 0; /* xor self */
    SET_LO8(eax, MEM8(esi + 1));
    PUSH32(esp, ecx);
    PUSH32(esp, eax);
    PUSH32(esp, 4);
    goto loc_004994E3;

loc_0049946C: ;
    (void)0; /* cmp ecx, edi - flags set for next jcc */
    eax = ebp + -56;
    MEM32(ebp + -16) = eax;
    if (CMP_BE(ecx, edi)) goto loc_004994C2; /* jbe: below or equal (unsigned <=) */

loc_00499476: ;
    ecx = MEM32(ebp + -4);
    SET_LO8(ecx, MEM8(ecx + 1));
    MEM8(ebp + 0xB) = LO8(ecx);
    ecx = ebp + -56;
    edx = ecx;
    if (CMP_AE(edx, eax)) goto loc_0049949B; /* jae: above or equal (unsigned >=) */

loc_00499488: ;
    edx = MEM32(ebp + -4);
    SET_LO8(edx, MEM8(edx));
    if (CMP_EQ(MEM8(ecx), LO8(edx))) goto loc_004994B6; /* je: equal / zero */

loc_00499491: ;
    edx = ZX8(MEM8(ecx + 1));
    ecx = ecx + edx;
    if (CMP_B(ecx, eax)) goto loc_00499488; /* jb: below (unsigned <) */

loc_0049949B: ;
    PUSH32(esp, 1);
    eax = ebp + -16;
    PUSH32(esp, eax);
    eax = 0; /* xor self */
    SET_LO8(eax, MEM8(esi));
    ecx = ebx;
    PUSH32(esp, eax);
    PUSH32(esp, MEM32(ebp + 0xC));
    PUSH32(esp, MEM32(ebp + -4));
    PUSH32(esp, 0); sub_00497BA7(); /* call 0x00497BA7 */

loc_004994B3: ;
    eax = MEM32(ebp + -16);

loc_004994B6: ;
    ecx = ZX8(MEM8(ebp + 0xB));
    MEM32(ebp + -4) = MEM32(ebp + -4) + ecx;
    MEM32(ebp + -8) = MEM32(ebp + -8) - ecx;
    if ((MEM32(ebp + -8) != 0)) goto loc_00499476; /* jne: not equal / not zero */

loc_004994C2: ;
    MEM8(ebx + 0xA7A) = MEM8(ebx + 0xA7A) | 1;
    PUSH32(esp, edi);
    PUSH32(esp, edi);
    PUSH32(esp, edi);
    PUSH32(esp, edi);
    PUSH32(esp, edi);
    PUSH32(esp, edi);
    PUSH32(esp, edi);
    PUSH32(esp, edi);
    PUSH32(esp, edi);
    ecx = ebp + -56;
    eax = eax - ecx;
    PUSH32(esp, eax);
    eax = ecx;
    PUSH32(esp, eax);
    eax = 0; /* xor self */
    SET_LO8(eax, MEM8(esi + 1));
    PUSH32(esp, eax);
    PUSH32(esp, 3);

loc_004994E3: ;
    PUSH32(esp, MEM32(ebp + 0xC));
    ecx = ebx;
    PUSH32(esp, 0); sub_00497E10(); /* call 0x00497E10 */

loc_004994ED: ;
    eax = MEM32(ebp + -12);
    if (CMP_NE(MEM8(eax), 3)) goto loc_00499611; /* jne: not equal / not zero */

loc_004994F9: ;
    MEM8(eax) = 1;
    goto loc_00499611;

loc_00499501: ;
    SET_LO8(eax, MEM8(esi + 1));
    if (CMP_NE(LO8(eax), MEM8(ebx + 0xA3A))) goto loc_00499611; /* jne: not equal / not zero */

loc_00499510: ;
    if (CMP_EQ(MEM8(edx), 4)) goto loc_00499611; /* je: equal / zero */

loc_00499519: ;
    if (CMP_NE(MEM32(ebp + 8), edi)) goto loc_00499611; /* jne: not equal / not zero */

loc_00499522: ;
    if (CMP_NE(MEM32(ebp + -20), edi)) goto loc_00499611; /* jne: not equal / not zero */

loc_0049952B: ;
    ecx = ebx + 0xA3B;
    SET_LO8(eax, MEM8(ecx));
    MEM8(ebx + 0xA3A) = LO8(eax);
    SET_LO8(eax, LO8(eax) + 1);
    MEM8(ecx) = LO8(eax);
    eax = esi + 4;
    MEM32(ebp + -4) = eax;
    eax = MEM32(ebp + -16);
    (void)0; /* cmp eax, edi - flags set for next jcc */
    MEM8(ebx + 0x8C9) = 0;
    MEM32(ebp + -8) = eax;
    if (CMP_BE(eax, edi)) goto loc_0049957F; /* jbe: below or equal (unsigned <=) */

loc_00499554: ;
    eax = MEM32(ebp + -4);
    SET_LO8(ecx, MEM8(eax + 1));
    MEM8(ebp + 0xB) = LO8(ecx);
    ecx = 0; /* xor self */
    SET_LO8(ecx, MEM8(esi));
    PUSH32(esp, 1);
    PUSH32(esp, edi);
    PUSH32(esp, ecx);
    PUSH32(esp, MEM32(ebp + 0xC));
    ecx = ebx;
    PUSH32(esp, eax);
    PUSH32(esp, 0); sub_00497BA7(); /* call 0x00497BA7 */

loc_00499570: ;
    eax = ZX8(MEM8(ebp + 0xB));
    MEM32(ebp + -4) = MEM32(ebp + -4) + eax;
    MEM32(ebp + -8) = MEM32(ebp + -8) - eax;
    if ((MEM32(ebp + -8) != 0)) goto loc_00499554; /* jne: not equal / not zero */

loc_0049957C: ;
    edx = MEM32(ebp + -12);

loc_0049957F: ;
    SET_LO8(eax, MEM8(esi));
    if (CMP_NE(LO8(eax), 2)) goto loc_004995A3; /* jne: not equal / not zero */

loc_00499585: ;
    MEM8(ebx + 0xA7A) = MEM8(ebx + 0xA7A) | 8;
    SET_LO8(eax, MEM8(edx));
    if (CMP_NE(LO8(eax), 3)) goto loc_0049959A; /* jne: not equal / not zero */

loc_00499592: ;
    MEM8(edx) = 4;
    goto loc_004993B6;

loc_0049959A: ;
    if (CMP_NE(LO8(eax), 1)) goto loc_004995C2; /* jne: not equal / not zero */

loc_0049959E: ;
    MEM8(edx) = 2;
    goto loc_00499611;

loc_004995A3: ;
    ecx = 0; /* xor self */
    (void)0; /* cmp LO8(eax), 3 - flags set for next jcc */
    SET_LO8(ecx, (CMP_NE(LO8(eax), 3)) ? 1 : 0); /* setne */
    ecx--;
    ecx = ecx & 0xFFF00000u;
    ecx = ecx + 0x200000;
    MEM32(ebx + 0xA78) = MEM32(ebx + 0xA78) | ecx;
    if (CMP_NE(MEM8(edx), 2)) goto loc_004995C5; /* jne: not equal / not zero */

loc_004995C2: ;
    MEM8(edx) = 1;

loc_004995C5: ;
    ecx = ebx;
    PUSH32(esp, 0); sub_00498067(); /* call 0x00498067 */

loc_004995CC: ;
    goto loc_00499611;

loc_004995CE: ;
    if (CMP_AE(MEM8(ebx + 0x8C8), 0x16)) goto loc_00499611; /* jae: above or equal (unsigned >=) */

loc_004995D7: ;
    eax = ebx + 0xA3B;
    SET_LO8(ecx, MEM8(eax));
    SET_LO8(edx, LO8(ecx));
    SET_LO8(edx, LO8(edx) + 1);
    MEM8(eax) = LO8(edx);
    eax = 0; /* xor self */
    PUSH32(esp, eax);
    PUSH32(esp, eax);
    PUSH32(esp, eax);
    PUSH32(esp, eax);
    PUSH32(esp, eax);
    PUSH32(esp, eax);
    PUSH32(esp, eax);
    PUSH32(esp, eax);
    PUSH32(esp, eax);
    eax = ZX16(MEM16(edi + 4));
    PUSH32(esp, eax);
    PUSH32(esp, esi);
    PUSH32(esp, ecx);
    PUSH32(esp, 7);
    PUSH32(esp, MEM32(ebp + 0xC));

loc_004995FC: ;
    ecx = ebx;
    PUSH32(esp, 0); sub_00497E10(); /* call 0x00497E10 */

loc_00499603: ;
    goto loc_00499611;

loc_00499605: ;
    PUSH32(esp, 0xA0000000u);
    ecx = ebx;
    PUSH32(esp, 0); sub_00498D04(); /* call 0x00498D04 */

loc_00499611: ;
    POP32(esp, edi);
    POP32(esp, esi);
    POP32(esp, ebx);
    esp = ebp;
    POP32(esp, ebp); /* leave */
    esp += 12; return; /* ret 8 */

}

/**
 * sub_00499618
 * Original: 0x00499618 - 0x004997C4 (428 bytes, 146 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00499618(void)
{
    uint32_t ebp;
    int _flags = 0; /* fallback flag var */

loc_00499618: ;
    PUSH32(esp, ebp);
    ebp = esp;
    esp = esp - 0x78;
    eax = MEM32(ebp + 8);
    PUSH32(esp, ebx);
    ebx = MEM32(eax);
    PUSH32(esp, esi);
    PUSH32(esp, edi);
    SET_LO16(edi, MEM16(eax + 4));
    (void)0; /* cmp LO16(edi), 4 - flags set for next jcc */
    esi = ecx;
    if (CMP_B(LO16(edi), 4)) goto loc_004997B6; /* jb: below (unsigned <) */

loc_00499636: ;
    SET_LO16(ecx, MEM16(ebx + 2));
    SET_HI8(edx, LO8(ecx));
    SET_LO8(edx, HI8(ecx));
    ecx = ZX16(LO16(edx));
    (void)0; /* cmp ecx, 4 - flags set for next jcc */
    MEM32(ebp + 8) = ecx;
    if (CMP_B(ecx, 4)) goto loc_004997B6; /* jb: below (unsigned <) */

loc_0049964D: ;
    edx = ZX16(LO16(edi));
    if (CMP_A(ecx, edx)) goto loc_004997B6; /* ja: above (unsigned >) */

loc_00499658: ;
    MEM16(eax + 4) = LO16(ecx);
    eax = ZX8(MEM8(esi + 0xA39));
    SET_LO8(edx, MEM8(esi + 0x8C8));
    ecx = eax;
    ecx = ecx >> 2;
    eax = eax >> 3;
    eax = eax & 1;
    ecx = ecx & 1;
    (void)0; /* cmp LO8(edx), 0x14 - flags set for next jcc */
    MEM32(ebp + -4) = eax;
    if (CMP_B(LO8(edx), 0x14)) goto loc_004997BD; /* jb: below (unsigned <) */

loc_00499683: ;
    if (CMP_BE(LO8(edx), 0x14)) goto loc_0049968D; /* jbe: below or equal (unsigned <=) */

loc_00499685: ;
    if (TEST_Z(eax, eax)) goto loc_004997BD; /* je: equal / zero */

loc_0049968D: ;
    eax = 0; /* xor self */
    (void)0; /* cmp MEM16(ebp + 0xC), 0x23C0 - flags set for next jcc */
    SET_LO8(eax, (CMP_EQ(MEM16(ebp + 0xC), 0x23C0)) ? 1 : 0); /* sete */
    if (CMP_NE(ecx, eax)) goto loc_004997BD; /* jne: not equal / not zero */

loc_004996A0: ;
    ecx = esi + 0x962;
    edi = ecx + 1;

loc_004996A9: ;
    SET_LO8(eax, MEM8(ecx));
    ecx++;
    if (TEST_NZ(LO8(eax), LO8(eax))) goto loc_004996A9; /* jne: not equal / not zero */

loc_004996B0: ;
    ecx = ecx - edi;
    MEM32(ebp + -8) = ecx;
    ecx = esi + 0x9A2;
    edi = ecx + 1;

loc_004996BE: ;
    SET_LO8(eax, MEM8(ecx));
    ecx++;
    if (TEST_NZ(LO8(eax), LO8(eax))) goto loc_004996BE; /* jne: not equal / not zero */

loc_004996C5: ;
    ecx = ecx - edi;
    (void)0; /* cmp MEM32(ebp + -4), 0 - flags set for next jcc */
    MEM32(ebp + 0xC) = ecx;
    if (CMP_EQ(MEM32(ebp + -4), 0)) goto loc_0049978C; /* je: equal / zero */

loc_004996D4: ;
    SET_LO8(eax, MEM8(ebx));
    if (CMP_EQ(LO8(eax), 3)) goto loc_00499793; /* je: equal / zero */

loc_004996DE: ;
    if (CMP_EQ(LO8(eax), 4)) goto loc_004997A8; /* je: equal / zero */

loc_004996E6: ;
    if (CMP_NE(LO8(eax), 1)) goto loc_004997BD; /* jne: not equal / not zero */

loc_004996EE: ;
    if (CMP_B(MEM32(ebp + 8), 5)) goto loc_004997B6; /* jb: below (unsigned <) */

loc_004996F8: ;
    eax = ZX8(MEM8(ebx + 4));
    eax = eax + 5;
    if (CMP_B(MEM32(ebp + 8), eax)) goto loc_004997B6; /* jb: below (unsigned <) */

loc_00499708: ;
    eax = ebp + -120;
    PUSH32(esp, eax);
    PUSH32(esp, 0); sub_0049FF04(); /* call 0x0049FF04 */

loc_00499711: ;
    PUSH32(esp, 1);
    edi = ebx + 1;
    PUSH32(esp, edi);
    eax = ebp + -120;
    PUSH32(esp, eax);
    PUSH32(esp, 0); sub_0049FF42(); /* call 0x0049FF42 */

loc_00499720: ;
    if (CMP_BE(MEM32(ebp + 0xC), 0)) goto loc_00499739; /* jbe: below or equal (unsigned <=) */

loc_00499726: ;
    PUSH32(esp, MEM32(ebp + 0xC));
    eax = esi + 0x9A2;
    PUSH32(esp, eax);
    eax = ebp + -120;
    PUSH32(esp, eax);
    PUSH32(esp, 0); sub_0049FF42(); /* call 0x0049FF42 */

loc_00499739: ;
    SET_LO8(eax, MEM8(ebx + 4));
    if (CMP_BE(LO8(eax) & LO8(eax), 0)) goto loc_00499751; /* jbe: below or equal (unsigned <=) */

loc_00499740: ;
    eax = ZX8(LO8(eax));
    PUSH32(esp, eax);
    ebx = ebx + 5;
    PUSH32(esp, ebx);
    eax = ebp + -120;
    PUSH32(esp, eax);
    PUSH32(esp, 0); sub_0049FF42(); /* call 0x0049FF42 */

loc_00499751: ;
    eax = ebp + -120;
    PUSH32(esp, eax);
    PUSH32(esp, 0); sub_004A0070(); /* call 0x004A0070 */

loc_0049975A: ;
    eax = 0; /* xor self */
    PUSH32(esp, eax);
    PUSH32(esp, eax);
    PUSH32(esp, eax);
    PUSH32(esp, eax);
    PUSH32(esp, eax);
    PUSH32(esp, eax);
    PUSH32(esp, eax);
    PUSH32(esp, MEM32(ebp + -8));
    eax = esi + 0x962;
    PUSH32(esp, eax);
    PUSH32(esp, 0x11);
    eax = ebp + -29;
    PUSH32(esp, eax);
    eax = 0; /* xor self */
    SET_LO8(eax, MEM8(edi));
    ecx = esi;
    MEM8(ebp + -29) = 0x10;
    PUSH32(esp, eax);
    PUSH32(esp, 2);
    PUSH32(esp, 0x23C2);
    PUSH32(esp, 0); sub_00497E10(); /* call 0x00497E10 */

loc_0049978A: ;
    goto loc_004997BD;

loc_0049978C: ;
    SET_LO8(ebx, MEM8(ebx));
    if (CMP_NE(LO8(ebx), 2)) goto loc_004997A3; /* jne: not equal / not zero */

loc_00499793: ;
    if (CMP_NE(LO8(edx), 0x14)) goto loc_004997BD; /* jne: not equal / not zero */

loc_00499798: ;
    PUSH32(esp, 0x15);
    ecx = esi;
    PUSH32(esp, 0); sub_004984CD(); /* call 0x004984CD */

loc_004997A1: ;
    goto loc_004997BD;

loc_004997A3: ;
    if (CMP_NE(LO8(ebx), 3)) goto loc_004997BD; /* jne: not equal / not zero */

loc_004997A8: ;
    PUSH32(esp, 0x80010000u);
    ecx = esi;
    PUSH32(esp, 0); sub_00498D04(); /* call 0x00498D04 */

loc_004997B4: ;
    goto loc_004997BD;

loc_004997B6: ;
    MEM8(esi + 0xA7A) = MEM8(esi + 0xA7A) | 2;

loc_004997BD: ;
    POP32(esp, edi);
    POP32(esp, esi);
    POP32(esp, ebx);
    esp = ebp;
    POP32(esp, ebp); /* leave */
    esp += 12; return; /* ret 8 */

}

/**
 * sub_0049A269
 * Original: 0x0049A269 - 0x0049A28F (38 bytes, 11 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0049A269(void)
{

loc_0049A269: ;
    PUSH32(esp, esi);
    esi = ecx;
    eax = esi + 0xA68;
    MEM32(eax) = MEM32(eax) & 0;
    MEM32(eax + 8) = MEM32(eax + 8) | 0xFFFFFFFFu;
    MEM32(eax + 0xC) = 0x499849;
    PUSH32(esp, 0); sub_0049342D(); /* call 0x0049342D */

loc_0049A285: ;
    MEM32(esi + 0xA7C) = eax;
    eax = 0; /* xor self */
    POP32(esp, esi);
    esp += 4; return; /* ret */

}

/**
 * sub_0049A28F
 * Original: 0x0049A28F - 0x0049A304 (117 bytes, 49 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0049A28F(void)
{
    uint32_t ebp;
    int _flags = 0; /* fallback flag var */

loc_0049A28F: ;
    PUSH32(esp, ebp);
    ebp = esp;
    PUSH32(esp, ecx);
    eax = MEM32(ecx + 0x8B0);
    edx = MEM32(eax);
    ecx = eax + 0x10;
    edx = edx + eax;
    (void)0; /* cmp MEM32(ebp + 0xC), 0 - flags set for next jcc */
    MEM32(ebp + -4) = ecx;
    if (CMP_BE(MEM32(ebp + 0xC), 0)) goto loc_0049A2FD; /* jbe: below or equal (unsigned <=) */

loc_0049A2A9: ;
    PUSH32(esp, ebx);
    PUSH32(esp, esi);
    PUSH32(esp, edi);

loc_0049A2AC: ;
    eax = edx;
    eax = eax - MEM32(ebp + 8);
    if (CMP_AE(MEM32(ebp + 0xC), eax)) goto loc_0049A2B9; /* jae: above or equal (unsigned >=) */

loc_0049A2B6: ;
    eax = MEM32(ebp + 0xC);

loc_0049A2B9: ;
    edi = MEM32(ebp + 0x10);
    if (TEST_Z(edi, edi)) goto loc_0049A2E3; /* je: equal / zero */

loc_0049A2C0: ;
    ecx = eax;
    ebx = ecx;
    ecx = ecx >> 2;
    if (CMP_EQ(MEM32(ebp + 0x14), 0)) goto loc_0049A2D2; /* je: equal / zero */

loc_0049A2CD: ;
    esi = MEM32(ebp + 8);
    goto loc_0049A2D7;

loc_0049A2D2: ;
    esi = edi;
    edi = MEM32(ebp + 8);

loc_0049A2D7: ;
    memcpy((void*)XBOX_PTR(edi), (void*)XBOX_PTR(esi), ecx * 4);
    esi += ecx * 4; edi += ecx * 4; ecx = 0; /* rep movsd */
    ecx = ebx;
    ecx = ecx & 3;
    MEM32(ebp + 0x10) = MEM32(ebp + 0x10) + eax;
    memcpy((void*)XBOX_PTR(edi), (void*)XBOX_PTR(esi), ecx);
    esi += ecx; edi += ecx; ecx = 0; /* rep movsb */

loc_0049A2E3: ;
    MEM32(ebp + 8) = MEM32(ebp + 8) + eax;
    MEM32(ebp + 0xC) = MEM32(ebp + 0xC) - eax;
    if (CMP_NE(MEM32(ebp + 8), edx)) goto loc_0049A2F4; /* jne: not equal / not zero */

loc_0049A2EE: ;
    eax = MEM32(ebp + -4);
    MEM32(ebp + 8) = eax;

loc_0049A2F4: ;
    if (CMP_A(MEM32(ebp + 0xC), 0)) goto loc_0049A2AC; /* ja: above (unsigned >) */

loc_0049A2FA: ;
    POP32(esp, edi);
    POP32(esp, esi);
    POP32(esp, ebx);

loc_0049A2FD: ;
    eax = MEM32(ebp + 8);
    esp = ebp;
    POP32(esp, ebp); /* leave */
    esp += 20; return; /* ret 16 */

}

/**
 * sub_0049A304
 * Original: 0x0049A304 - 0x0049A373 (111 bytes, 38 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0049A304(void)
{
    uint32_t ebp;
    int _flags = 0; /* fallback flag var */

loc_0049A304: ;
    PUSH32(esp, ebp);
    ebp = esp;
    PUSH32(esp, ecx);
    PUSH32(esp, ebx);
    PUSH32(esp, esi);
    esi = ecx;
    PUSH32(esp, edi);
    edi = esi + 0x2A0;
    ebx = edi + 8;
    MEM32(ebp + -4) = 0x40;

loc_0049A31D: ;
    if (CMP_EQ(MEM32(ebx), 0)) goto loc_0049A337; /* je: equal / zero */

loc_0049A322: ;
    (void)0; /* cmp MEM32(ebp + 8), 0 - flags set for next jcc */
    ecx = ebx;
    PUSH32(esp, esi);
    if (CMP_EQ(MEM32(ebp + 8), 0)) goto loc_0049A332; /* je: equal / zero */

loc_0049A32B: ;
    PUSH32(esp, 0); sub_00493636(); /* call 0x00493636 */

loc_0049A330: ;
    goto loc_0049A337;

loc_0049A332: ;
    PUSH32(esp, 0); sub_00493619(); /* call 0x00493619 */

loc_0049A337: ;
    ebx = ebx + 0x18;
    MEM32(ebp + -4) = MEM32(ebp + -4) - 1;
    if ((MEM32(ebp + -4) != 0)) goto loc_0049A31D; /* jne: not equal / not zero */

loc_0049A33F: ;
    MEM32(esi + 0x294) = MEM32(esi + 0x294) & 0;
    MEM32(esi + 0x298) = MEM32(esi + 0x298) & 0;
    eax = 0; /* xor self */
    MEM32(esi + 0x29C) = edi;
    ecx = 0x180;
    { uint32_t _i; for (_i = 0; _i < ecx; _i++) MEM32(edi + _i*4) = eax; }
    edi += ecx * 4; ecx = 0; /* rep stosd */
    PUSH32(esp, 0xFFFFFFFFu);
    eax = esi + 0x8A0;
    PUSH32(esp, eax);
    ecx = esi;
    PUSH32(esp, 0); sub_00492F6E(); /* call 0x00492F6E */

loc_0049A36C: ;
    POP32(esp, edi);
    POP32(esp, esi);
    POP32(esp, ebx);
    esp = ebp;
    POP32(esp, ebp); /* leave */
    esp += 8; return; /* ret 4 */

}

/**
 * sub_0049A373
 * Original: 0x0049A373 - 0x0049A3A2 (47 bytes, 17 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0049A373(void)
{
    uint32_t ebp;
    int _flags = 0; /* fallback flag var */
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_0049A373: ;
    PUSH32(esp, esi);
    esi = ecx;
    eax = MEM32(esi);
    if (((int32_t)(HI8(eax) & HI8(eax)) >= 0)) goto loc_0049A39A; /* jns: not sign (positive) */

loc_0049A37C: ;
    ecx = 0x40000;
    if (TEST_NZ(ecx, eax)) goto loc_0049A39A; /* jne: not equal / not zero */

loc_0049A385: ;
    PUSH32(esp, ecx);
    ecx = esi;
    PUSH32(esp, 0); sub_0049D04E(); /* call 0x0049D04E */

loc_0049A38D: ;
    eax = esi + 0x278;
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, eax);
    PUSH32(esp, 0); RECOMP_ICALL_SAFE(MEM32(0x5611C8), _icall_esp); /* indirect call */
    }

loc_0049A39A: ;
    ecx = esi;
    POP32(esp, esi);
    g_seh_ebp = ebp; sub_00494176(); return; /* tail jmp 0x00494176 */

}

/**
 * sub_0049A3A2
 * Original: 0x0049A3A2 - 0x0049A3BA (24 bytes, 8 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0049A3A2(void)
{
    int _flags = 0; /* fallback flag var */

loc_0049A3A2: ;
    if (TEST_NZ(MEM8(ecx + 2), 4)) goto loc_0049A3B9; /* jne: not equal / not zero */

loc_0049A3A8: ;
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, 0);
    PUSH32(esp, 0);
    ecx = ecx + 0x278;
    PUSH32(esp, ecx);
    PUSH32(esp, 0); RECOMP_ICALL_SAFE(MEM32(0x5610E0), _icall_esp); /* indirect call */
    }

loc_0049A3B9: ;
    esp += 4; return; /* ret */

}

/**
 * sub_0049A3BA
 * Original: 0x0049A3BA - 0x0049A4A4 (234 bytes, 87 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0049A3BA(void)
{
    uint32_t ebp;
    int _flags = 0; /* fallback flag var */

loc_0049A3BA: ;
    PUSH32(esp, ebp);
    ebp = esp;
    esp = esp - 0x20;
    PUSH32(esp, ebx);
    ebx = ecx;
    PUSH32(esp, esi);
    esi = MEM32(ebx + 0x8B0);
    if (TEST_Z(esi, esi)) goto loc_0049A49E; /* je: equal / zero */

loc_0049A3D2: ;
    PUSH32(esp, edi);
    edi = ebp + -32;
    MEM32(edi) = MEM32(esi); esi += 4; edi += 4; /* movsd */
    MEM32(edi) = MEM32(esi); esi += 4; edi += 4; /* movsd */
    MEM32(edi) = MEM32(esi); esi += 4; edi += 4; /* movsd */
    MEM32(edi) = MEM32(esi); esi += 4; edi += 4; /* movsd */
    esi = MEM32(ebp + 8);
    ecx = esi;
    PUSH32(esp, 0); sub_0049345C(); /* call 0x0049345C */

loc_0049A3E4: ;
    ecx = ZX16(MEM16(esi + 4));
    MEM32(ebp + -8) = eax;
    eax = MEM32(esi + 8);
    eax = eax >> 0x13;
    eax = eax & 1;
    esi = ecx + eax * 8 + 0xE;
    eax = MEM32(ebp + -32);
    ecx = MEM32(0x561018);
    eax = eax + 0xFFFFFFF0u;
    MEM32(ebp + 8) = eax;
    eax = MEM32(ebx + 0x1D8);
    eax = eax + 0xFFF96880u;
    eax = (uint32_t)((int32_t)eax * (int32_t)0xC8);
    eax = eax - MEM32(ebx + 0x1DC);
    edi = esi + 8;
    eax = eax + MEM32(ecx);
    (void)0; /* cmp MEM32(ebp + -20), edi - flags set for next jcc */
    MEM32(ebp + -16) = edi;
    MEM32(ebp + -12) = eax;
    if (CMP_AE(MEM32(ebp + -20), edi)) goto loc_0049A46A; /* jae: above or equal (unsigned >=) */

loc_0049A42E: ;
    eax = MEM32(ebp + 8);
    if (CMP_AE(MEM32(ebp + -20), eax)) goto loc_0049A465; /* jae: above or equal (unsigned >=) */

loc_0049A436: ;
    PUSH32(esp, 1);
    eax = ebp + -4;
    PUSH32(esp, eax);
    PUSH32(esp, 4);
    PUSH32(esp, MEM32(ebp + -28));
    ecx = ebx;
    PUSH32(esp, 0); sub_0049A28F(); /* call 0x0049A28F */

loc_0049A448: ;
    eax = MEM32(ebp + -4);
    MEM32(ebp + -20) = MEM32(ebp + -20) + eax;
    PUSH32(esp, 1);
    PUSH32(esp, 0);
    PUSH32(esp, eax);
    PUSH32(esp, MEM32(ebp + -28));
    ecx = ebx;
    PUSH32(esp, 0); sub_0049A28F(); /* call 0x0049A28F */

loc_0049A45D: ;
    (void)0; /* cmp MEM32(ebp + -20), edi - flags set for next jcc */
    MEM32(ebp + -28) = eax;
    if (CMP_B(MEM32(ebp + -20), edi)) goto loc_0049A42E; /* jb: below (unsigned <) */

loc_0049A465: ;
    if (CMP_B(MEM32(ebp + -20), edi)) goto loc_0049A49D; /* jb: below (unsigned <) */

loc_0049A46A: ;
    MEM32(ebp + -20) = MEM32(ebp + -20) - edi;
    PUSH32(esp, 0);
    eax = ebp + -16;
    PUSH32(esp, eax);
    PUSH32(esp, 8);
    PUSH32(esp, MEM32(ebp + -24));
    ecx = ebx;
    PUSH32(esp, 0); sub_0049A28F(); /* call 0x0049A28F */

loc_0049A47F: ;
    PUSH32(esp, 0);
    PUSH32(esp, MEM32(ebp + -8));
    ecx = ebx;
    PUSH32(esp, esi);
    PUSH32(esp, eax);
    PUSH32(esp, 0); sub_0049A28F(); /* call 0x0049A28F */

loc_0049A48D: ;
    edi = MEM32(ebx + 0x8B0);
    MEM32(ebp + -24) = eax;
    esi = ebp + -32;
    MEM32(edi) = MEM32(esi); esi += 4; edi += 4; /* movsd */
    MEM32(edi) = MEM32(esi); esi += 4; edi += 4; /* movsd */
    MEM32(edi) = MEM32(esi); esi += 4; edi += 4; /* movsd */
    MEM32(edi) = MEM32(esi); esi += 4; edi += 4; /* movsd */

loc_0049A49D: ;
    POP32(esp, edi);

loc_0049A49E: ;
    POP32(esp, esi);
    POP32(esp, ebx);
    esp = ebp;
    POP32(esp, ebp); /* leave */
    esp += 12; return; /* ret 8 */

}

/**
 * sub_0049A4E0
 * Original: 0x0049A4E0 - 0x0049A50C (44 bytes, 14 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0049A4E0(void)
{
    uint32_t ebp;
    int _flags = 0; /* fallback flag var */
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_0049A4E0: ;
    eax = MEM32(esp + 4);
    (void)0; /* test MEM16(eax + 0xA), 0x408 - flags set for next jcc */
    PUSH32(esp, esi);
    esi = ecx;
    if (TEST_NZ(MEM16(eax + 0xA), 0x408)) goto loc_0049A4F8; /* jne: not equal / not zero */

loc_0049A4EF: ;
    ecx = MEM32(eax);
    edx = MEM32(esp + 0xC);
    MEM32(ecx + -4) = edx;

loc_0049A4F8: ;
    (void)0; /* test MEM8(eax + 0xB), 8 - flags set for next jcc */
    ecx = esi + 0x270;
    PUSH32(esp, eax);
    if (TEST_Z(MEM8(eax + 0xB), 8)) { sub_0049A50C(); return; } /* je: equal / zero */

loc_0049A505: ;
    PUSH32(esp, 0); sub_00492EEF(); /* call 0x00492EEF */

loc_0049A50A: ;
    g_seh_ebp = ebp; sub_0049A511(); return; /* tail jmp 0x0049A511 */

}

/**
 * sub_0049A51C
 * Original: 0x0049A51C - 0x0049A5D3 (183 bytes, 68 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0049A51C(void)
{
    uint32_t ebp;
    int _flags = 0; /* fallback flag var */

loc_0049A51C: ;
    PUSH32(esp, ebp);
    ebp = esp;
    PUSH32(esp, ecx);
    PUSH32(esp, ebx);
    PUSH32(esp, esi);
    PUSH32(esp, edi);
    esi = 0; /* xor self */
    PUSH32(esp, esi);
    PUSH32(esp, esi);
    PUSH32(esp, esi);
    PUSH32(esp, 0x1C);
    PUSH32(esp, 0xC040000);
    PUSH32(esp, 0x6954454E);
    MEM32(ebp + -4) = ecx;
    PUSH32(esp, 0); sub_004937A4(); /* call 0x004937A4 */

loc_0049A53C: ;
    ebx = eax;
    if (CMP_EQ(ebx, esi)) goto loc_0049A5CC; /* je: equal / zero */

loc_0049A546: ;
    ecx = ebx;
    PUSH32(esp, 0); sub_0049345C(); /* call 0x0049345C */

loc_0049A54D: ;
    (void)0; /* cmp MEM32(ebp + 0x14), esi - flags set for next jcc */
    ecx = MEM32(ebx);
    if (CMP_EQ(MEM32(ebp + 0x14), esi)) goto loc_0049A567; /* je: equal / zero */

loc_0049A554: ;
    esi = MEM32(ebp + 0x14);
    edi = eax;
    MEM32(edi) = MEM32(esi); esi += 4; edi += 4; /* movsd */
    MEM16(edi) = MEM16(esi); esi += 2; edi += 2; /* movsw */
    esi = MEM32(ebp + 0x14);
    edi = ecx + 0x12;
    MEM32(edi) = MEM32(esi); esi += 4; edi += 4; /* movsd */
    MEM16(edi) = MEM16(esi); esi += 2; edi += 2; /* movsw */
    goto loc_0049A577;

loc_0049A567: ;
    MEM32(eax) = MEM32(eax) | 0xFFFFFFFFu;
    MEM16(eax + 4) = MEM16(eax + 4) | 0xFFFF;
    MEM32(ecx + 0x12) = esi;
    MEM16(ecx + 0x16) = LO16(esi);

loc_0049A577: ;
    edx = MEM32(ebp + -4);
    edi = eax + 6;
    edx = edx + 0x1E0;
    esi = edx;
    MEM32(edi) = MEM32(esi); esi += 4; edi += 4; /* movsd */
    MEM16(edi) = MEM16(esi); esi += 2; edi += 2; /* movsw */
    MEM16(eax + 0xC) = 0x608;
    SET_LO16(eax, MEM16(ebp + 8));
    MEM16(ecx + 6) = LO16(eax);
    eax = MEM32(ebp + 0xC);
    MEM16(ecx) = 0x100;
    MEM16(ecx + 2) = 8;
    MEM8(ecx + 4) = 6;
    MEM8(ecx + 5) = 4;
    edi = ecx + 8;
    esi = edx;
    MEM32(edi) = MEM32(esi); esi += 4; edi += 4; /* movsd */
    MEM16(edi) = MEM16(esi); esi += 2; edi += 2; /* movsw */
    MEM32(ecx + 0xE) = eax;
    eax = MEM32(ebp + 0x10);
    PUSH32(esp, ecx);
    MEM32(ecx + 0x18) = eax;
    ecx = MEM32(ebp + -4);
    eax = esp;
    MEM32(eax) = MEM32(eax) & 0;
    PUSH32(esp, ebx);
    PUSH32(esp, 0); sub_0049A4E0(); /* call 0x0049A4E0 */

loc_0049A5CC: ;
    POP32(esp, edi);
    POP32(esp, esi);
    POP32(esp, ebx);
    esp = ebp;
    POP32(esp, ebp); /* leave */
    esp += 20; return; /* ret 16 */

}

/**
 * sub_0049A5D3
 * Original: 0x0049A5D3 - 0x0049A6BB (232 bytes, 81 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0049A5D3(void)
{
    int _flags = 0; /* fallback flag var */

loc_0049A5D3: ;
    PUSH32(esp, ebx);
    ebx = MEM32(esp + 8);
    PUSH32(esp, edi);
    edi = ecx;
    eax = MEM32(edi + 0x29C);
    if (CMP_EQ(MEM32(eax), ebx)) goto loc_0049A6B6; /* je: equal / zero */

loc_0049A5E9: ;
    PUSH32(esp, esi);
    edx = 0; /* xor self */
    PUSH32(esp, 0x3B);
    eax = ebx;
    POP32(esp, ecx);
    { uint64_t _dividend = ((uint64_t)edx << 32) | eax;
      eax = (uint32_t)(_dividend / (uint32_t)ecx);
      edx = (uint32_t)(_dividend % (uint32_t)ecx); }
    edx = edx + 0x1C;
    eax = edx + edx * 2;
    esi = edi + eax * 8;
    if (CMP_EQ(MEM32(esi), ebx)) goto loc_0049A6AD; /* je: equal / zero */

loc_0049A604: ;
    edx = esi + 0x18;
    ecx = esi;
    eax = esi + 0x78;
    esi = edx;
    goto loc_0049A61B;

loc_0049A610: ;
    if (CMP_EQ(MEM32(esi), ebx)) goto loc_0049A6AD; /* je: equal / zero */

loc_0049A618: ;
    esi = esi + 0x18;

loc_0049A61B: ;
    if (CMP_B(esi, eax)) goto loc_0049A610; /* jb: below (unsigned <) */

loc_0049A61F: ;
    if (CMP_NE(MEM32(esp + 0x14), 0)) goto loc_0049A62D; /* jne: not equal / not zero */

loc_0049A626: ;
    eax = 0; /* xor self */
    goto loc_0049A6B5;

loc_0049A62D: ;
    (void)0; /* cmp MEM16(ecx + 0x16), 0 - flags set for next jcc */
    esi = ecx;
    if (CMP_EQ(MEM16(ecx + 0x16), 0)) goto loc_0049A662; /* je: equal / zero */

loc_0049A636: ;
    esi = edx;
    goto loc_0049A644;

loc_0049A63A: ;
    if (CMP_EQ(MEM16(esi + 0x16), 0)) goto loc_0049A648; /* je: equal / zero */

loc_0049A641: ;
    esi = esi + 0x18;

loc_0049A644: ;
    if (CMP_B(esi, eax)) goto loc_0049A63A; /* jb: below (unsigned <) */

loc_0049A648: ;
    if (CMP_NE(esi, eax)) goto loc_0049A662; /* jne: not equal / not zero */

loc_0049A64C: ;
    esi = edx;
    goto loc_0049A65A;

loc_0049A650: ;
    if (CMP_B(MEM16(esi + 0x16), 3)) goto loc_0049A65E; /* jb: below (unsigned <) */

loc_0049A657: ;
    esi = esi + 0x18;

loc_0049A65A: ;
    if (CMP_B(esi, eax)) goto loc_0049A650; /* jb: below (unsigned <) */

loc_0049A65E: ;
    if (CMP_EQ(esi, eax)) goto loc_0049A626; /* je: equal / zero */

loc_0049A662: ;
    (void)0; /* cmp MEM32(esp + 0x14), 2 - flags set for next jcc */
    MEM32(esi) = ebx;
    if (CMP_NE(MEM32(esp + 0x14), 2)) goto loc_0049A6A7; /* jne: not equal / not zero */

loc_0049A66B: ;
    SET_LO16(eax, ZX8(MEM8(edi + 0x11)));
    ecx = edi;
    eax = eax + 3;
    MEM16(esi + 0x16) = LO16(eax);
    eax = ZX8(MEM8(edi + 0x12));
    eax = eax + eax * 4;
    PUSH32(esp, eax);
    eax = edi + 0x8A0;
    PUSH32(esp, eax);
    PUSH32(esp, 0); sub_00492FD3(); /* call 0x00492FD3 */

loc_0049A68D: ;
    PUSH32(esp, 0);
    PUSH32(esp, ebx);
    MEM32(esi + 4) = eax;
    PUSH32(esp, MEM32(edi + 0x268));
    ecx = edi;
    PUSH32(esp, 0x100);
    PUSH32(esp, 0); sub_0049A51C(); /* call 0x0049A51C */

loc_0049A6A5: ;
    goto loc_0049A6AD;

loc_0049A6A7: ;
    MEM16(esi + 0x16) = 3;

loc_0049A6AD: ;
    MEM32(edi + 0x29C) = esi;
    eax = esi;

loc_0049A6B5: ;
    POP32(esp, esi);

loc_0049A6B6: ;
    POP32(esp, edi);
    POP32(esp, ebx);
    esp += 12; return; /* ret 8 */

}

/**
 * sub_0049A6BB
 * Original: 0x0049A6BB - 0x0049A76E (179 bytes, 61 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0049A6BB(void)
{
    uint32_t ebp;
    int _flags = 0; /* fallback flag var */

loc_0049A6BB: ;
    PUSH32(esp, ebp);
    ebp = esp;
    PUSH32(esp, ecx);
    PUSH32(esp, ecx);
    MEM32(ebp + -4) = MEM32(ebp + -4) | 0xFFFFFFFFu;
    PUSH32(esp, ebx);
    PUSH32(esp, esi);
    PUSH32(esp, edi);
    edi = ecx;
    ebx = MEM32(edi + 0x1D8);
    esi = edi + 0x2A0;
    MEM32(ebp + -8) = 0x40;

loc_0049A6DC: ;
    SET_LO16(ecx, MEM16(esi + 0x16));
    if (TEST_Z(LO16(ecx), LO16(ecx))) goto loc_0049A752; /* je: equal / zero */

loc_0049A6E5: ;
    if (CMP_B(ebx, MEM32(esi + 4))) goto loc_0049A747; /* jb: below (unsigned <) */

loc_0049A6EA: ;
    if (CMP_BE(LO16(ecx), 3)) goto loc_0049A719; /* jbe: below or equal (unsigned <=) */

loc_0049A6F0: ;
    eax = ZX8(MEM8(edi + 0x12));
    PUSH32(esp, 0);
    PUSH32(esp, MEM32(esi));
    edx = ebx + eax * 4;
    edx = edx + eax;
    ecx--;
    MEM16(esi + 0x16) = LO16(ecx);
    MEM32(esi + 4) = edx;
    PUSH32(esp, MEM32(edi + 0x268));
    ecx = edi;
    PUSH32(esp, 0x100);
    PUSH32(esp, 0); sub_0049A51C(); /* call 0x0049A51C */

loc_0049A717: ;
    goto loc_0049A747;

loc_0049A719: ;
    if ((ecx != 0)) goto loc_0049A73B; /* jne: not equal / not zero */

loc_0049A71B: ;
    PUSH32(esp, edi);
    ecx = esi + 8;
    PUSH32(esp, 0); sub_00493619(); /* call 0x00493619 */

loc_0049A724: ;
    eax = ZX8(MEM8(edi + 0x14));
    eax = (uint32_t)((int32_t)eax * (int32_t)0x12C);
    eax = eax + ebx;
    MEM32(esi + 4) = eax;
    MEM16(esi + 0x16) = 2;
    goto loc_0049A747;

loc_0049A73B: ;
    MEM32(esi + 4) = MEM32(esi + 4) | 0xFFFFFFFFu;
    MEM16(esi + 0x16) = MEM16(esi + 0x16) & 0;
    MEM32(esi) = MEM32(esi) & 0;

loc_0049A747: ;
    eax = MEM32(esi + 4);
    if (CMP_BE(MEM32(ebp + -4), eax)) goto loc_0049A752; /* jbe: below or equal (unsigned <=) */

loc_0049A74F: ;
    MEM32(ebp + -4) = eax;

loc_0049A752: ;
    esi = esi + 0x18;
    MEM32(ebp + -8) = MEM32(ebp + -8) - 1;
    if ((MEM32(ebp + -8) != 0)) goto loc_0049A6DC; /* jne: not equal / not zero */

loc_0049A75A: ;
    PUSH32(esp, MEM32(ebp + -4));
    ecx = edi;
    PUSH32(esp, MEM32(ebp + 8));
    PUSH32(esp, 0); sub_00492F6E(); /* call 0x00492F6E */

loc_0049A767: ;
    POP32(esp, edi);
    POP32(esp, esi);
    POP32(esp, ebx);
    esp = ebp;
    POP32(esp, ebp); /* leave */
    esp += 8; return; /* ret 4 */

}

/**
 * sub_0049A76E
 * Original: 0x0049A76E - 0x0049A93C (462 bytes, 142 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0049A76E(void)
{
    uint32_t ebp;
    int _flags = 0; /* fallback flag var */

loc_0049A76E: ;
    PUSH32(esp, ebp);
    ebp = esp;
    esp = esp - 0x10;
    PUSH32(esp, ebx);
    PUSH32(esp, esi);
    PUSH32(esp, edi);
    edi = MEM32(ebp + 8);
    ebx = ecx;
    ecx = edi;
    PUSH32(esp, 0); sub_0049345C(); /* call 0x0049345C */

loc_0049A783: ;
    (void)0; /* cmp MEM16(edi + 4), 0x1C - flags set for next jcc */
    esi = MEM32(edi);
    MEM32(ebp + -8) = esi;
    if (CMP_B(MEM16(edi + 4), 0x1C)) goto loc_0049A935; /* jb: below (unsigned <) */

loc_0049A793: ;
    SET_LO16(eax, MEM16(esi));
    if (CMP_EQ(LO16(eax), 0x100)) goto loc_0049A7A6; /* je: equal / zero */

loc_0049A79C: ;
    if (CMP_NE(LO16(eax), 0x600)) goto loc_0049A935; /* jne: not equal / not zero */

loc_0049A7A6: ;
    if (CMP_NE(MEM16(esi + 2), 8)) goto loc_0049A935; /* jne: not equal / not zero */

loc_0049A7B1: ;
    if (CMP_NE(MEM8(esi + 4), 6)) goto loc_0049A935; /* jne: not equal / not zero */

loc_0049A7BB: ;
    if (CMP_NE(MEM8(esi + 5), 4)) goto loc_0049A935; /* jne: not equal / not zero */

loc_0049A7C5: ;
    SET_LO16(eax, MEM16(esi + 6));
    if (CMP_EQ(LO16(eax), 0x100)) goto loc_0049A7D9; /* je: equal / zero */

loc_0049A7CF: ;
    if (CMP_NE(LO16(eax), 0x200)) goto loc_0049A935; /* jne: not equal / not zero */

loc_0049A7D9: ;
    ecx = esi + 0xE;
    (void)0; /* cmp MEM32(ecx), 0 - flags set for next jcc */
    MEM32(ebp + -12) = ecx;
    if (CMP_EQ(MEM32(ecx), 0)) goto loc_0049A7F1; /* je: equal / zero */

loc_0049A7E4: ;
    PUSH32(esp, 0); sub_004938B8(); /* call 0x004938B8 */

loc_0049A7E9: ;
    if (TEST_Z(eax, eax)) goto loc_0049A935; /* je: equal / zero */

loc_0049A7F1: ;
    esi = esi + 8;
    (void)0; /* test MEM8(esi), 1 - flags set for next jcc */
    MEM32(ebp + 8) = esi;
    if (TEST_NZ(MEM8(esi), 1)) goto loc_0049A935; /* jne: not equal / not zero */

loc_0049A800: ;
    PUSH32(esp, 3);
    POP32(esp, ecx);
    edi = ebx + 0x1E0;
    eax = 0; /* xor self */
    /* repe cmpsw - string compare, ecx iterations */
    if (1 /* strings matched (repe cmpsb) */) goto loc_0049A935; /* je: equal / zero */

loc_0049A814: ;
    esi = MEM32(ebp + -8);
    edi = esi + 0x18;
    (void)0; /* cmp MEM32(edi), eax - flags set for next jcc */
    MEM32(ebp + -4) = edi;
    if (CMP_EQ(MEM32(edi), eax)) goto loc_0049A830; /* je: equal / zero */

loc_0049A821: ;
    ecx = edi;
    PUSH32(esp, 0); sub_004938B8(); /* call 0x004938B8 */

loc_0049A828: ;
    if (TEST_Z(eax, eax)) goto loc_0049A935; /* je: equal / zero */

loc_0049A830: ;
    edx = MEM32(ebp + -12);
    eax = MEM32(ebx + 0x294);
    ecx = MEM32(edx);
    if (CMP_NE(ecx, eax)) goto loc_0049A84F; /* jne: not equal / not zero */

loc_0049A83F: ;
    if (TEST_Z(eax, eax)) goto loc_0049A84F; /* je: equal / zero */

loc_0049A843: ;
    MEM32(ebx + 0x294) = MEM32(ebx + 0x294) & 0;
    PUSH32(esp, MEM32(ebp + 8));
    goto loc_0049A86B;

loc_0049A84F: ;
    if (CMP_EQ(MEM32(ebx + 0x298), 0)) goto loc_0049A877; /* je: equal / zero */

loc_0049A858: ;
    if (CMP_NE(MEM32(edi), eax)) goto loc_0049A877; /* jne: not equal / not zero */

loc_0049A85C: ;
    if (TEST_Z(eax, eax)) goto loc_0049A877; /* je: equal / zero */

loc_0049A860: ;
    MEM32(ebx + 0x294) = MEM32(ebx + 0x294) & 0;
    esi = esi + 0x12;
    PUSH32(esp, esi);

loc_0049A86B: ;
    ecx = ebx;
    PUSH32(esp, 0); sub_00498618(); /* call 0x00498618 */

loc_0049A872: ;
    goto loc_0049A935;

loc_0049A877: ;
    esi = MEM32(ebx + 0x268);
    if (TEST_Z(esi, esi)) goto loc_0049A935; /* je: equal / zero */

loc_0049A885: ;
    if (CMP_EQ(MEM32(ebx + 0x26C), 0)) goto loc_0049A935; /* je: equal / zero */

loc_0049A892: ;
    if (TEST_Z(ecx, ecx)) goto loc_0049A906; /* je: equal / zero */

loc_0049A896: ;
    if (CMP_EQ(ecx, esi)) goto loc_0049A906; /* je: equal / zero */

loc_0049A89A: ;
    eax = MEM32(edi);
    if (CMP_EQ(ecx, eax)) goto loc_0049A906; /* je: equal / zero */

loc_0049A8A0: ;
    ecx = 0; /* xor self */
    (void)0; /* cmp eax, esi - flags set for next jcc */
    SET_LO8(ecx, (CMP_EQ(eax, esi)) ? 1 : 0); /* sete */
    PUSH32(esp, ecx);
    PUSH32(esp, MEM32(edx));
    ecx = ebx;
    PUSH32(esp, 0); sub_0049A5D3(); /* call 0x0049A5D3 */

loc_0049A8B1: ;
    esi = eax;
    (void)0; /* test esi, esi - flags set for next jcc */
    MEM32(ebp + -16) = esi;
    if (TEST_Z(esi, esi)) goto loc_0049A906; /* je: equal / zero */

loc_0049A8BA: ;
    MEM16(esi + 0x16) = 1;
    eax = ZX8(MEM8(ebx + 0x13));
    eax = (uint32_t)((int32_t)eax * (int32_t)0x12C);
    PUSH32(esp, eax);
    eax = ebx + 0x8A0;
    PUSH32(esp, eax);
    ecx = ebx;
    PUSH32(esp, 0); sub_00492FD3(); /* call 0x00492FD3 */

loc_0049A8D9: ;
    MEM32(esi + 4) = eax;
    eax = MEM32(ebp + -16);
    edi = esi + 0x10;
    esi = MEM32(ebp + 8);
    MEM32(edi) = MEM32(esi); esi += 4; edi += 4; /* movsd */
    eax = eax + 8;
    (void)0; /* cmp MEM32(eax), 0 - flags set for next jcc */
    MEM16(edi) = MEM16(esi); esi += 2; edi += 2; /* movsw */
    if (CMP_EQ(MEM32(eax), 0)) goto loc_0049A903; /* je: equal / zero */

loc_0049A8F0: ;
    PUSH32(esp, eax);
    ecx = ebx + 0x270;
    PUSH32(esp, 0); sub_004935F0(); /* call 0x004935F0 */

loc_0049A8FC: ;
    ecx = ebx;
    PUSH32(esp, 0); sub_0049A3A2(); /* call 0x0049A3A2 */

loc_0049A903: ;
    edi = MEM32(ebp + -4);

loc_0049A906: ;
    eax = MEM32(ebp + -8);
    if (CMP_NE(MEM16(eax + 6), 0x100)) goto loc_0049A935; /* jne: not equal / not zero */

loc_0049A911: ;
    eax = MEM32(edi);
    if (CMP_NE(eax, MEM32(ebx + 0x268))) goto loc_0049A935; /* jne: not equal / not zero */

loc_0049A91B: ;
    PUSH32(esp, MEM32(ebp + 8));
    eax = MEM32(ebp + -12);
    PUSH32(esp, MEM32(eax));
    ecx = ebx;
    PUSH32(esp, MEM32(ebx + 0x268));
    PUSH32(esp, 0x200);
    PUSH32(esp, 0); sub_0049A51C(); /* call 0x0049A51C */

loc_0049A935: ;
    POP32(esp, edi);
    POP32(esp, esi);
    POP32(esp, ebx);
    esp = ebp;
    POP32(esp, ebp); /* leave */
    esp += 8; return; /* ret 4 */

}

/**
 * sub_0049A93C
 * Original: 0x0049A93C - 0x0049A983 (71 bytes, 26 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0049A93C(void)
{

loc_0049A93C: ;
    PUSH32(esp, ebx);
    PUSH32(esp, esi);
    ebx = ecx;
    ecx = MEM32(esp + 0xC);
    PUSH32(esp, edi);
    PUSH32(esp, 0); sub_0049345C(); /* call 0x0049345C */

loc_0049A94A: ;
    esi = MEM32(esp + 0x14);
    edi = eax;
    MEM32(edi) = MEM32(esi); esi += 4; edi += 4; /* movsd */
    MEM16(edi) = MEM16(esi); esi += 2; edi += 2; /* movsw */
    edi = eax + 6;
    esi = ebx + 0x1E0;
    MEM32(edi) = MEM32(esi); esi += 4; edi += 4; /* movsd */
    PUSH32(esp, 1);
    PUSH32(esp, MEM32(esp + 0x14));
    MEM16(edi) = MEM16(esi); esi += 2; edi += 2; /* movsw */
    ecx = ebx;
    MEM16(eax + 0xC) = 8;
    PUSH32(esp, 0); sub_0049A3BA(); /* call 0x0049A3BA */

loc_0049A972: ;
    PUSH32(esp, MEM32(esp + 0x10));
    ecx = ebx;
    PUSH32(esp, 0); sub_00493F03(); /* call 0x00493F03 */

loc_0049A97D: ;
    POP32(esp, edi);
    POP32(esp, esi);
    POP32(esp, ebx);
    esp += 12; return; /* ret 8 */

}

/**
 * sub_0049A983
 * Original: 0x0049A983 - 0x0049A99F (28 bytes, 9 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0049A983(void)
{
    uint32_t ebp;
    int _flags = 0; /* fallback flag var */
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_0049A983: ;
    eax = MEM32(esp + 8);
    if (CMP_NE(eax, 0xFFFFFFFFu)) { sub_0049A99F(); return; } /* jne: not equal / not zero */

loc_0049A98C: ;
    PUSH32(esp, 0);
    eax = ecx + 0x268;
    PUSH32(esp, MEM32(eax));
    PUSH32(esp, MEM32(eax));
    PUSH32(esp, 0x200);
    g_seh_ebp = ebp; sub_0049A9BF(); return; /* tail jmp 0x0049A9BF */

}

/**
 * sub_0049A9C7
 * Original: 0x0049A9C7 - 0x0049AA04 (61 bytes, 22 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0049A9C7(void)
{
    uint32_t ebp;
    int _flags = 0; /* fallback flag var */
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_0049A9C7: ;
    PUSH32(esp, ebx);
    PUSH32(esp, esi);
    PUSH32(esp, edi);
    ebx = ecx;
    eax = MEM32(0x20);
    esi = MEM32(esp + 0x10);
    edi = 0; /* xor self */
    PUSH32(esp, edi);
    PUSH32(esp, esi);
    MEM32(eax + 0x1C) = edi;
    PUSH32(esp, 0); sub_0049A3BA(); /* call 0x0049A3BA */

loc_0049A9E2: ;
    eax = MEM32(esp + 0x14);
    if (CMP_NE(eax, 8)) { sub_0049AA04(); return; } /* jne: not equal / not zero */

loc_0049A9EB: ;
    eax = MEM32(esi + 8);
    eax = eax & 0xFFFFFFF9u;
    eax = eax | 1;
    PUSH32(esp, esi);
    ecx = ebx;
    MEM32(esi + 8) = eax;
    PUSH32(esp, 0); sub_0049297B(); /* call 0x0049297B */

loc_0049A9FF: ;
    g_seh_ebp = ebp; sub_0049AA8F(); return; /* tail jmp 0x0049AA8F */

}

/**
 * sub_0049AA95
 * Original: 0x0049AA95 - 0x0049ABE4 (335 bytes, 108 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0049AA95(void)
{
    uint32_t ebp;
    int _flags = 0; /* fallback flag var */

loc_0049AA95: ;
    PUSH32(esp, ebp);
    ebp = esp;
    esp = esp - 0x14;
    PUSH32(esp, esi);
    PUSH32(esp, edi);
    edi = ecx;
    esi = edi + 0x270;
    if (CMP_EQ(MEM32(esi), 0)) goto loc_0049ABE0; /* je: equal / zero */

loc_0049AAAE: ;
    PUSH32(esp, ebx);

loc_0049AAAF: ;
    ecx = edi;
    PUSH32(esp, 0); sub_00493C3E(); /* call 0x00493C3E */

loc_0049AAB6: ;
    if (TEST_Z(eax, eax)) goto loc_0049ABDF; /* je: equal / zero */

loc_0049AABE: ;
    ecx = esi;
    PUSH32(esp, 0); sub_00492F20(); /* call 0x00492F20 */

loc_0049AAC5: ;
    (void)0; /* test MEM8(edi + 2), 4 - flags set for next jcc */
    esi = eax;
    if (TEST_NZ(MEM8(edi + 2), 4)) goto loc_0049ABCA; /* jne: not equal / not zero */

loc_0049AAD1: ;
    ebx = MEM32(esi + 8);
    if (TEST_Z(ebx, 0x4080000)) goto loc_0049AAF3; /* je: equal / zero */

loc_0049AADC: ;
    PUSH32(esp, 1);
    PUSH32(esp, esi);
    ecx = edi;
    PUSH32(esp, 0); sub_0049A3BA(); /* call 0x0049A3BA */

loc_0049AAE6: ;
    PUSH32(esp, esi);
    ecx = edi;
    PUSH32(esp, 0); sub_00493F03(); /* call 0x00493F03 */

loc_0049AAEE: ;
    goto loc_0049ABD0;

loc_0049AAF3: ;
    eax = MEM32(esi);
    eax = MEM32(eax + -4);
    (void)0; /* test eax, eax - flags set for next jcc */
    MEM32(ebp + -4) = eax;
    if (TEST_Z(eax, eax)) goto loc_0049ABCA; /* je: equal / zero */

loc_0049AB03: ;
    if (CMP_NE(LO8(eax), 0x7F)) goto loc_0049AB12; /* jne: not equal / not zero */

loc_0049AB07: ;
    if (CMP_NE(eax, 0x100007F)) goto loc_0049ABCA; /* jne: not equal / not zero */

loc_0049AB12: ;
    if (CMP_EQ(eax, 0x100007F)) goto loc_0049ABA0; /* je: equal / zero */

loc_0049AB1D: ;
    if (CMP_EQ(eax, MEM32(edi + 0x268))) goto loc_0049ABA0; /* je: equal / zero */

loc_0049AB25: ;
    if (CMP_NE(eax, 0xFFFFFFFFu)) goto loc_0049AB44; /* jne: not equal / not zero */

loc_0049AB2A: ;
    MEM32(ebp + -20) = MEM32(ebp + -20) | eax;
    MEM16(ebp + -16) = MEM16(ebp + -16) | 0xFFFF;
    eax = ebp + -20;

loc_0049AB36: ;
    ecx = edi;

loc_0049AB38: ;
    PUSH32(esp, eax);
    PUSH32(esp, esi);
    PUSH32(esp, 0); sub_0049A93C(); /* call 0x0049A93C */

loc_0049AB3F: ;
    goto loc_0049ABD0;

loc_0049AB44: ;
    ecx = eax;
    SET_LO16(ecx, LO16(ecx) & 0xF0);
    (void)0; /* cmp LO8(ecx), 0xE0 - flags set for next jcc */
    ecx = edi;
    if (CMP_NE(LO8(ecx), 0xE0)) goto loc_0049AB74; /* jne: not equal / not zero */

loc_0049AB52: ;
    SET_LO8(eax, HI8(eax));
    SET_LO8(eax, LO8(eax) & 0x7F);
    MEM8(ebp + -9) = LO8(eax);
    SET_LO16(eax, MEM16(ebp + -2));
    MEM8(ebp + -8) = LO8(eax);
    MEM8(ebp + -7) = HI8(eax);
    MEM8(ebp + -12) = 1;
    MEM8(ebp + -11) = 0;
    MEM8(ebp + -10) = 0x5E;
    eax = ebp + -12;
    goto loc_0049AB38;

loc_0049AB74: ;
    PUSH32(esp, 2);
    PUSH32(esp, eax);
    PUSH32(esp, 0); sub_0049A5D3(); /* call 0x0049A5D3 */

loc_0049AB7C: ;
    if (TEST_Z(eax, eax)) goto loc_0049ABCA; /* je: equal / zero */

loc_0049AB80: ;
    SET_LO16(ecx, MEM16(eax + 0x16));
    if (CMP_NE(LO16(ecx), 1)) goto loc_0049AB8F; /* jne: not equal / not zero */

loc_0049AB8A: ;
    eax = eax + 0x10;
    goto loc_0049AB36;

loc_0049AB8F: ;
    if (CMP_EQ(LO16(ecx), 2)) goto loc_0049ABCA; /* je: equal / zero */

loc_0049AB95: ;
    PUSH32(esp, esi);
    ecx = eax + 8;
    PUSH32(esp, 0); sub_00492F04(); /* call 0x00492F04 */

loc_0049AB9E: ;
    goto loc_0049ABD0;

loc_0049ABA0: ;
    eax = ebx;
    eax = eax & 0xFFFC0009u;
    eax = eax | 0x2000001;
    PUSH32(esp, esi);
    ecx = edi;
    MEM32(esi + 8) = eax;
    PUSH32(esp, 0); sub_0049297B(); /* call 0x0049297B */

loc_0049ABB7: ;
    eax = MEM32(esi + 8);
    eax = eax & 0xFDFC0008u;
    ebx = ebx & 0x3FFF7;
    eax = eax | ebx;
    MEM32(esi + 8) = eax;

loc_0049ABCA: ;
    ecx = edi;
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, esi);
    PUSH32(esp, 0); RECOMP_ICALL_SAFE(MEM32(esi + 0x10), _icall_esp); /* indirect call */
    }

loc_0049ABD0: ;
    esi = edi + 0x270;
    if (CMP_NE(MEM32(esi), 0)) goto loc_0049AAAF; /* jne: not equal / not zero */

loc_0049ABDF: ;
    POP32(esp, ebx);

loc_0049ABE0: ;
    POP32(esp, edi);
    POP32(esp, esi);
    esp = ebp;
    POP32(esp, ebp); /* leave */
    esp += 4; return; /* ret */

}

/**
 * sub_0049ABF0
 * Original: 0x0049ABF0 - 0x0049AC45 (85 bytes, 23 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0049ABF0(void)
{
    int _flags = 0; /* fallback flag var */

loc_0049ABF0: ;
    PUSH32(esp, esi);
    PUSH32(esp, MEM32(esp + 8));
    esi = ecx;
    PUSH32(esp, 0); sub_00494389(); /* call 0x00494389 */

loc_0049ABFC: ;
    if (TEST_S(eax, eax)) goto loc_0049AC41; /* jl: less (signed <) */

loc_0049AC00: ;
    PUSH32(esp, 0x8000);
    ecx = esi;
    PUSH32(esp, 0); sub_0049D04E(); /* call 0x0049D04E */

loc_0049AC0C: ;
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, esi);
    PUSH32(esp, 0x49ABE4);
    eax = esi + 0x278;
    PUSH32(esp, eax);
    PUSH32(esp, 0); RECOMP_ICALL_SAFE(MEM32(0x5610E4), _icall_esp); /* indirect call */
    }

loc_0049AC1F: ;
    eax = esi + 0x2A0;
    MEM32(esi + 0x29C) = eax;
    eax = esi + 0x8A0;
    MEM32(eax) = MEM32(eax) & 0;
    MEM32(eax + 8) = MEM32(eax + 8) | 0xFFFFFFFFu;
    MEM32(eax + 0xC) = 0x49A6BB;
    eax = 0; /* xor self */

loc_0049AC41: ;
    POP32(esp, esi);
    esp += 8; return; /* ret 4 */

}

/**
 * sub_0049AC45
 * Original: 0x0049AC45 - 0x0049AC5E (25 bytes, 10 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0049AC45(void)
{
    int _flags = 0; /* fallback flag var */

loc_0049AC45: ;
    edx = MEM32(esp + 8);
    eax = 0; /* xor self */
    if (TEST_Z(edx, edx)) goto loc_0049AC5B; /* je: equal / zero */

loc_0049AC4F: ;
    ecx = MEM32(esp + 4);

loc_0049AC53: ;
    eax = eax + MEM32(ecx);
    ecx = ecx + 8;
    edx--;
    if ((edx != 0)) goto loc_0049AC53; /* jne: not equal / not zero */

loc_0049AC5B: ;
    esp += 12; return; /* ret 8 */

}

/**
 * sub_0049AC5E
 * Original: 0x0049AC5E - 0x0049ACC8 (106 bytes, 46 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0049AC5E(void)
{
    uint32_t ebp;
    int _flags = 0; /* fallback flag var */

loc_0049AC5E: ;
    PUSH32(esp, ebp);
    ebp = esp;
    if (CMP_BE(MEM32(ebp + 0x18), 0)) goto loc_0049ACC4; /* jbe: below or equal (unsigned <=) */

loc_0049AC67: ;
    edx = MEM32(ebp + 8);
    PUSH32(esp, ebx);
    PUSH32(esp, esi);
    PUSH32(esp, edi);

loc_0049AC6D: ;
    eax = MEM32(ebp + 0xC);
    MEM32(ebp + 0xC) = MEM32(ebp + 0xC) - 1;
    if (TEST_Z(eax, eax)) goto loc_0049ACC1; /* je: equal / zero */

loc_0049AC77: ;
    (void)0; /* cmp MEM32(ebp + 0x10), 0 - flags set for next jcc */
    esi = MEM32(edx + 4);
    eax = MEM32(edx);
    if (CMP_BE(MEM32(ebp + 0x10), 0)) goto loc_0049AC93; /* jbe: below or equal (unsigned <=) */

loc_0049AC82: ;
    (void)0; /* cmp MEM32(ebp + 0x10), eax - flags set for next jcc */
    ecx = MEM32(ebp + 0x10);
    if (CMP_B(MEM32(ebp + 0x10), eax)) goto loc_0049AC8C; /* jb: below (unsigned <) */

loc_0049AC8A: ;
    ecx = eax;

loc_0049AC8C: ;
    esi = esi + ecx;
    eax = eax - ecx;
    MEM32(ebp + 0x10) = MEM32(ebp + 0x10) - ecx;

loc_0049AC93: ;
    if (CMP_BE(eax & eax, 0)) goto loc_0049ACB8; /* jbe: below or equal (unsigned <=) */

loc_0049AC97: ;
    if (CMP_AE(MEM32(ebp + 0x18), eax)) goto loc_0049AC9F; /* jae: above or equal (unsigned >=) */

loc_0049AC9C: ;
    eax = MEM32(ebp + 0x18);

loc_0049AC9F: ;
    edi = MEM32(ebp + 0x14);
    MEM32(ebp + 0x18) = MEM32(ebp + 0x18) - eax;
    ecx = eax;
    ebx = ecx;
    ecx = ecx >> 2;
    memcpy((void*)XBOX_PTR(edi), (void*)XBOX_PTR(esi), ecx * 4);
    esi += ecx * 4; edi += ecx * 4; ecx = 0; /* rep movsd */
    ecx = ebx;
    ecx = ecx & 3;
    MEM32(ebp + 0x14) = MEM32(ebp + 0x14) + eax;
    memcpy((void*)XBOX_PTR(edi), (void*)XBOX_PTR(esi), ecx);
    esi += ecx; edi += ecx; ecx = 0; /* rep movsb */

loc_0049ACB8: ;
    edx = edx + 8;
    if (CMP_A(MEM32(ebp + 0x18), 0)) goto loc_0049AC6D; /* ja: above (unsigned >) */

loc_0049ACC1: ;
    POP32(esp, edi);
    POP32(esp, esi);
    POP32(esp, ebx);

loc_0049ACC4: ;
    POP32(esp, ebp);
    esp += 24; return; /* ret 20 */

}

/**
 * sub_0049ACC8
 * Original: 0x0049ACC8 - 0x0049ACCD (5 bytes, 1 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0049ACC8(void)
{
    uint32_t ebp;
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_0049ACC8: ;
    g_seh_ebp = ebp; sub_0042C2AC(); return; /* tail jmp 0x0042C2AC */

}

/**
 * sub_0049ACCD
 * Original: 0x0049ACCD - 0x0049AD13 (70 bytes, 24 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0049ACCD(void)
{
    uint32_t ebp;
    int _flags = 0; /* fallback flag var */

loc_0049ACCD: ;
    PUSH32(esp, ebp);
    ebp = esp;
    PUSH32(esp, esi);
    esi = MEM32(ebp + 8);
    if (TEST_Z(esi, esi)) { sub_0049AD13(); return; } /* je: equal / zero */

loc_0049ACD8: ;
    if (CMP_EQ(esi, 0xFFFFFFFFu)) { sub_0049AD13(); return; } /* je: equal / zero */

loc_0049ACDD: ;
    eax = esi + 8;
    MEM32(ebp + 8) = eax;
    eax = 0x2B434F53;
    ecx = MEM32(ebp + 8);
    edx = 0x2A434F53;
    /* TODO: cmpxchg dword ptr [ecx], edx */
    if (CMP_NE(eax, 0x2B434F53)) goto loc_0049ACFE; /* jne: not equal / not zero */

loc_0049ACFA: ;
    eax = esi;
    g_seh_ebp = ebp; sub_0049AD20(); return; /* tail jmp 0x0049AD20 */

loc_0049ACFE: ;
    ecx = 0; /* xor self */
    (void)0; /* cmp eax, 0x2A434F53 - flags set for next jcc */
    SET_LO8(ecx, (CMP_NE(eax, 0x2A434F53)) ? 1 : 0); /* setne */
    ecx = ecx + ecx + 0x2734;
    eax = ecx;
    g_seh_ebp = ebp; sub_0049AD18(); return; /* tail jmp 0x0049AD18 */

}

/**
 * sub_0049AD25
 * Original: 0x0049AD25 - 0x0049AD6C (71 bytes, 19 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0049AD25(void)
{
    int _flags = 0; /* fallback flag var */

loc_0049AD25: ;
    PUSH32(esp, esi);
    PUSH32(esp, MEM32(esp + 8));
    esi = ecx;
    PUSH32(esp, 0); sub_0048DF09(); /* call 0x0048DF09 */

loc_0049AD31: ;
    if (TEST_S(eax, eax)) goto loc_0049AD68; /* jl: less (signed <) */

loc_0049AD35: ;
    PUSH32(esp, 0x2000000);
    ecx = esi;
    PUSH32(esp, 0); sub_0049D04E(); /* call 0x0049D04E */

loc_0049AD41: ;
    eax = esi + 0xD38;
    MEM32(esi + 0xD3C) = eax;
    MEM32(eax) = eax;
    eax = esi + 0xD40;
    MEM32(esi + 0xD44) = eax;
    MEM32(eax) = eax;
    MEM16(esi + 0xD36) = 0x400;
    eax = 0; /* xor self */

loc_0049AD68: ;
    POP32(esp, esi);
    esp += 8; return; /* ret 4 */

}

/**
 * sub_0049AD6C
 * Original: 0x0049AD6C - 0x0049ADA0 (52 bytes, 23 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0049AD6C(void)
{
    uint32_t ebp;
    int _flags = 0; /* fallback flag var */

loc_0049AD6C: ;
    PUSH32(esp, ebp);
    ebp = esp;
    esp = esp - 0xC;
    PUSH32(esp, esi);
    PUSH32(esp, edi);
    edi = ecx + 0xC;
    MEM32(ebp + -8) = edi;

loc_0049AD7A: ;
    esi = MEM32(edi);
    eax = esi;
    eax = eax & MEM32(ebp + 8);
    MEM32(ebp + -12) = esi;
    eax = eax | MEM32(ebp + 0xC);
    MEM32(ebp + -4) = eax;
    eax = MEM32(ebp + -12);
    ecx = MEM32(ebp + -8);
    edx = MEM32(ebp + -4);
    /* TODO: cmpxchg dword ptr [ecx], edx */
    if (CMP_NE(eax, esi)) goto loc_0049AD7A; /* jne: not equal / not zero */

loc_0049AD9A: ;
    POP32(esp, edi);
    POP32(esp, esi);
    esp = ebp;
    POP32(esp, ebp); /* leave */
    esp += 12; return; /* ret 8 */

}

/**
 * sub_0049ADA0
 * Original: 0x0049ADA0 - 0x0049ADBC (28 bytes, 9 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0049ADA0(void)
{
    uint32_t ebp;
    int _flags = 0; /* fallback flag var */
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_0049ADA0: ;
    eax = MEM32(esp + 4);
    (void)0; /* test MEM8(eax + 0xC), 1 - flags set for next jcc */
    PUSH32(esp, esi);
    esi = ecx;
    MEM32(eax + 8) = 0x2D636F73;
    PUSH32(esp, eax);
    if (TEST_Z(MEM8(eax + 0xC), 1)) { sub_0049ADBC(); return; } /* je: equal / zero */

loc_0049ADB5: ;
    PUSH32(esp, 0); sub_004932D7(); /* call 0x004932D7 */

loc_0049ADBA: ;
    g_seh_ebp = ebp; sub_0049ADC2(); return; /* tail jmp 0x0049ADC2 */

}

/**
 * sub_0049ADCD
 * Original: 0x0049ADCD - 0x0049ADDE (17 bytes, 6 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0049ADCD(void)
{
    uint32_t ebp;
    int _flags = 0; /* fallback flag var */
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_0049ADCD: ;
    eax = MEM32(esp + 4);
    MEM32(eax + 0x24) = MEM32(eax + 0x24) - 1;
    if ((MEM32(eax + 0x24) != 0)) { sub_0049ADDE(); return; } /* jne: not equal / not zero */

loc_0049ADD6: ;
    PUSH32(esp, eax);
    PUSH32(esp, 0); sub_00493441(); /* call 0x00493441 */

loc_0049ADDC: ;
    g_seh_ebp = ebp; sub_0049ADE5(); return; /* tail jmp 0x0049ADE5 */

}

/**
 * sub_0049ADE8
 * Original: 0x0049ADE8 - 0x0049ADF6 (14 bytes, 7 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0049ADE8(void)
{
    uint32_t ebp;
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_0049ADE8: ;
    PUSH32(esp, ebx);
    ebx = MEM32(esp + 8);
    PUSH32(esp, esi);
    PUSH32(esp, edi);
    edi = ecx;
    esi = ebx + 0x24;
    g_seh_ebp = ebp; sub_0049AE0A(); return; /* tail jmp 0x0049AE0A */

}

/**
 * sub_0049AEB5
 * Original: 0x0049AEB5 - 0x0049AEDA (37 bytes, 12 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0049AEB5(void)
{
    uint32_t ebp;
    int _flags = 0; /* fallback flag var */

loc_0049AEB5: ;
    PUSH32(esp, ebp);
    ebp = esp;
    PUSH32(esp, ebx);
    ebx = 0; /* xor self */
    if (CMP_EQ(ecx, ebx)) goto loc_0049AEC8; /* je: equal / zero */

loc_0049AEBF: ;
    if (CMP_A(MEM16(ecx + 0xD32), LO16(ebx))) { sub_0049AEDA(); return; } /* ja: above (unsigned >) */

loc_0049AEC8: ;
    PUSH32(esp, 0x276D);
    PUSH32(esp, 0); sub_0042C2D4(); /* call 0x0042C2D4 */

loc_0049AED2: ;
    eax = eax | 0xFFFFFFFFu;
    g_seh_ebp = ebp; sub_0049AF79(); return; /* tail jmp 0x0049AF79 */

}

/**
 * sub_0049AF7E
 * Original: 0x0049AF7E - 0x0049AF92 (20 bytes, 8 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0049AF7E(void)
{
    uint32_t ebp;
    int _flags = 0; /* fallback flag var */
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_0049AF7E: ;
    eax = ZX8(MEM8(ecx + 0x32));
    PUSH32(esp, esi);
    esi = MEM32(esp + 0xC);
    eax = eax << 0xA;
    if (CMP_LE(esi, eax)) { sub_0049AF92(); return; } /* jle: less or equal (signed <=) */

loc_0049AF8E: ;
    esi = eax;
    g_seh_ebp = ebp; sub_0049AF99(); return; /* tail jmp 0x0049AF99 */

}

/**
 * sub_0049AFDA
 * Original: 0x0049AFDA - 0x0049AFEF (21 bytes, 12 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0049AFDA(void)
{
    uint32_t ebp;
    int _flags = 0; /* fallback flag var */

loc_0049AFDA: ;
    PUSH32(esp, ebp);
    ebp = esp;
    PUSH32(esp, ecx);
    PUSH32(esp, ecx);
    (void)0; /* cmp MEM16(ebp + 0xC), 0 - flags set for next jcc */
    PUSH32(esp, ebx);
    PUSH32(esp, esi);
    PUSH32(esp, edi);
    edi = ecx;
    if (CMP_EQ(MEM16(ebp + 0xC), 0)) { sub_0049AFEF(); return; } /* je: equal / zero */

loc_0049AFEB: ;
    esi = 0; /* xor self */
    g_seh_ebp = ebp; sub_0049AFFE(); return; /* tail jmp 0x0049AFFE */

}

/**
 * sub_0049B0F3
 * Original: 0x0049B0F3 - 0x0049B10C (25 bytes, 10 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0049B0F3(void)
{
    uint32_t ebp;
    int _flags = 0; /* fallback flag var */

loc_0049B0F3: ;
    PUSH32(esp, ebp);
    ebp = esp;
    esp = esp - 0x10;
    edx = MEM32(ebp + 8);
    if (TEST_Z(edx, edx)) { sub_0049B10C(); return; } /* je: equal / zero */

loc_0049B100: ;
    eax = MEM32(edx);
    eax = eax & 0xFFFF;
    MEM32(ebp + -16) = eax;
    g_seh_ebp = ebp; sub_0049B113(); return; /* tail jmp 0x0049B113 */

}

/**
 * sub_0049B1D1
 * Original: 0x0049B1D1 - 0x0049B2D6 (261 bytes, 90 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0049B1D1(void)
{
    uint32_t ebp;
    int _flags = 0; /* fallback flag var */
    int _cf = 0; /* carry flag */

loc_0049B1D1: ;
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, ebp);
    ebp = esp;
    PUSH32(esp, ecx);
    PUSH32(esp, ebx);
    PUSH32(esp, esi);
    PUSH32(esp, edi);
    PUSH32(esp, 0); RECOMP_ICALL_SAFE(MEM32(0x5610F0), _icall_esp); /* indirect call */
    }

loc_0049B1DE: ;
    edi = MEM32(ebp + 8);
    MEM8(ebp + -4) = LO8(eax);
    eax = MEM32(edi + 0xC);
    if (TEST_Z(LO8(eax), 2)) goto loc_0049B280; /* je: equal / zero */

loc_0049B1EF: ;
    (void)0; /* cmp MEM32(edi + 0x40), 0 - flags set for next jcc */
    ebx = 0x100;
    if (CMP_GE(MEM32(edi + 0x40), 0)) goto loc_0049B20F; /* jge: greater or equal (signed >=) */

loc_0049B1FA: ;
    ecx = 0x10000;
    if (CMP_NE(MEM32(ebp + 0xC), ecx)) goto loc_0049B208; /* jne: not equal / not zero */

loc_0049B204: ;
    if (TEST_NZ(ebx, eax)) goto loc_0049B20F; /* jne: not equal / not zero */

loc_0049B208: ;
    esi = ecx;
    goto loc_0049B2C4;

loc_0049B20F: ;
    ecx = edi;
    PUSH32(esp, 0); sub_0049E05E(); /* call 0x0049E05E */

loc_0049B216: ;
    esi = MEM32(edi + 0x2C);
    eax = (uint32_t)(-(int32_t)eax);
    eax = _cf ? 0xFFFFFFFF : 0; /* sbb self (CF extend) */
    eax = (uint32_t)(-(int32_t)eax);
    esi = (uint32_t)(-(int32_t)esi);
    esi = _cf ? 0xFFFFFFFF : 0; /* sbb self (CF extend) */
    esi = esi & 0x800;
    (void)0; /* cmp MEM8(edi + 0x7C), 7 - flags set for next jcc */
    ecx = _cf ? 0xFFFFFFFF : 0; /* sbb self (CF extend) */
    ecx = ecx & 0xFFFF7800u;
    ecx = ecx + 0x8800;
    esi = esi | ecx;
    ecx = MEM32(edi + 0xC);
    eax = (uint32_t)(-(int32_t)eax);
    eax = _cf ? 0xFFFFFFFF : 0; /* sbb self (CF extend) */
    eax = eax & 0x2000;
    esi = esi | eax;
    if (TEST_Z(LO8(ecx), 0x40)) goto loc_0049B2A1; /* je: equal / zero */

loc_0049B250: ;
    eax = MEM32(edi + 0x3C);
    if (CMP_AE(eax, MEM32(edi + 0x58))) goto loc_0049B25E; /* jae: above or equal (unsigned >=) */

loc_0049B258: ;
    esi = esi | 0x1000;

loc_0049B25E: ;
    eax = 0x4000;
    if (TEST_Z(MEM32(ebp + 0xC), eax)) goto loc_0049B2A1; /* je: equal / zero */

loc_0049B268: ;
    if (TEST_NZ(ebx, ecx)) goto loc_0049B2A1; /* jne: not equal / not zero */

loc_0049B26C: ;
    esi = esi | eax;
    if (CMP_L(MEM32(ebp + 0x10), 0)) goto loc_0049B2A1; /* jl: less (signed <) */

loc_0049B274: ;
    PUSH32(esp, ebx);
    PUSH32(esp, 0xFFFFFFFFu);
    ecx = edi;
    PUSH32(esp, 0); sub_0049AD6C(); /* call 0x0049AD6C */

loc_0049B27E: ;
    goto loc_0049B2A1;

loc_0049B280: ;
    ecx = MEM32(edi + 0x3C);
    (void)0; /* cmp ecx, MEM32(edi + 0x58) - flags set for next jcc */
    eax = edi + 0x24;
    ecx = MEM32(eax);
    esi = _cf ? 0xFFFFFFFF : 0; /* sbb self (CF extend) */
    ecx = ecx - eax;
    esi = esi & 0x1000;
    ecx = (uint32_t)(-(int32_t)ecx);
    ecx = _cf ? 0xFFFFFFFF : 0; /* sbb self (CF extend) */
    ecx = ecx & 0x800;
    esi = esi | ecx;

loc_0049B2A1: ;
    eax = MEM32(ebp + 0xC);
    esi = esi & eax;
    if ((esi != 0)) goto loc_0049B2C4; /* jne: not equal / not zero */

loc_0049B2A8: ;
    if (CMP_EQ(MEM32(ebp + 0x10), 0)) goto loc_0049B2C4; /* je: equal / zero */

loc_0049B2AE: ;
    eax = eax & 0x1F800;
    PUSH32(esp, eax);
    PUSH32(esp, 0xFFFE07FFu);
    ecx = edi;
    PUSH32(esp, 0); sub_0049AD6C(); /* call 0x0049AD6C */

loc_0049B2C0: ;
    MEM32(edi + 0x14) = MEM32(edi + 0x14) & 0;

loc_0049B2C4: ;
    SET_LO8(ecx, MEM8(ebp + -4));
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, 0); RECOMP_ICALL_SAFE(MEM32(0x5610E8), _icall_esp); /* indirect call */
    }

loc_0049B2CD: ;
    POP32(esp, edi);
    eax = esi;
    POP32(esp, esi);
    POP32(esp, ebx);
    esp = ebp;
    POP32(esp, ebp); /* leave */
    esp += 16; return; /* ret 12 */

}

/**
 * sub_0049B2D6
 * Original: 0x0049B2D6 - 0x0049B2E8 (18 bytes, 6 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0049B2D6(void)
{
    uint32_t ebp;
    int _flags = 0; /* fallback flag var */
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_0049B2D6: ;
    PUSH32(esp, ebx);
    ebx = MEM32(esp + 8);
    if (CMP_EQ(MEM32(ebx + 0x20), 0)) { sub_0049B2E8(); return; } /* je: equal / zero */

loc_0049B2E1: ;
    eax = 0x80072733u;
    g_seh_ebp = ebp; sub_0049B347(); return; /* tail jmp 0x0049B347 */

}

/**
 * sub_0049B34B
 * Original: 0x0049B34B - 0x0049B36C (33 bytes, 11 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0049B34B(void)
{
    uint32_t ebp;
    int _flags = 0; /* fallback flag var */

loc_0049B34B: ;
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, ebp);
    ebp = esp;
    PUSH32(esp, ecx);
    PUSH32(esp, esi);
    PUSH32(esp, 0); RECOMP_ICALL_SAFE(MEM32(0x5610F0), _icall_esp); /* indirect call */
    }

loc_0049B356: ;
    esi = MEM32(ebp + 8);
    (void)0; /* cmp MEM32(esi + 0x30), 0 - flags set for next jcc */
    MEM8(ebp + -4) = LO8(eax);
    if (CMP_EQ(MEM32(esi + 0x30), 0)) { sub_0049B36C(); return; } /* je: equal / zero */

loc_0049B362: ;
    esi = 0x80072733u;
    g_seh_ebp = ebp; sub_0049B407(); return; /* tail jmp 0x0049B407 */

}

/**
 * sub_0049B417
 * Original: 0x0049B417 - 0x0049B426 (15 bytes, 8 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0049B417(void)
{
    uint32_t ebp;

loc_0049B417: ;
    PUSH32(esp, ebp);
    ebp = esp;
    esp = esp - 0x10;
    eax = MEM32(ebp + 8);
    PUSH32(esp, esi);
    PUSH32(esp, edi);
    edi = 0; /* xor self */
    g_seh_ebp = ebp; sub_0049B427(); return; /* tail jmp 0x0049B427 */

}

/**
 * sub_0049B574
 * Original: 0x0049B574 - 0x0049B583 (15 bytes, 5 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0049B574(void)
{

loc_0049B574: ;
    SET_LO16(eax, MEM16(esp + 4));
    SET_HI8(ecx, LO8(eax));
    SET_LO8(ecx, HI8(eax));
    SET_LO16(eax, LO16(ecx));
    esp += 8; return; /* ret 4 */

}

/**
 * sub_0049B583
 * Original: 0x0049B583 - 0x0049B5FE (123 bytes, 50 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0049B583(void)
{
    uint32_t ebp;
    int _flags = 0; /* fallback flag var */
    int _cf = 0; /* carry flag */

loc_0049B583: ;
    PUSH32(esp, ebp);
    ebp = esp;
    PUSH32(esp, ecx);
    PUSH32(esp, ecx);
    PUSH32(esp, esi);
    PUSH32(esp, edi);
    edi = MEM32(ebp + 8);
    PUSH32(esp, 1);
    PUSH32(esp, MEM32(ebp + 0xC));
    PUSH32(esp, edi);
    PUSH32(esp, 0); sub_0049B1D1(); /* call 0x0049B1D1 */

loc_0049B598: ;
    if (TEST_NZ(eax, 0x10000)) goto loc_0049B5F9; /* jne: not equal / not zero */

loc_0049B59F: ;
    if (TEST_Z(eax, eax)) goto loc_0049B5A7; /* je: equal / zero */

loc_0049B5A3: ;
    eax = 0; /* xor self */
    g_seh_ebp = ebp; sub_0049B600(); return; /* tail jmp 0x0049B600 */

loc_0049B5A7: ;
    esi = MEM32(ebp + 0x10);
    PUSH32(esp, 0xFFFFFFFFu);
    eax = esi;
    edx = ((int32_t)eax < 0) ? 0xFFFFFFFF : 0; /* cdq */
    PUSH32(esp, 0xFFFFD8F0u);
    PUSH32(esp, edx);
    PUSH32(esp, eax);
    PUSH32(esp, 0); sub_00470A00(); /* call 0x00470A00 */

loc_0049B5BB: ;
    MEM32(ebp + -8) = eax;
    esi = (uint32_t)(-(int32_t)esi);
    esi = _cf ? 0xFFFFFFFF : 0; /* sbb self (CF extend) */
    eax = ebp + -8;
    esi = esi & eax;
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, esi);
    PUSH32(esp, 0);
    PUSH32(esp, 1);
    PUSH32(esp, 6);
    eax = edi + 0x10;
    PUSH32(esp, eax);
    MEM32(ebp + -4) = edx;
    PUSH32(esp, 0); RECOMP_ICALL_SAFE(MEM32(0x561150), _icall_esp); /* indirect call */
    }

loc_0049B5DB: ;
    esi = eax;
    esi = (uint32_t)(-(int32_t)esi);
    PUSH32(esp, 0);
    esi = _cf ? 0xFFFFFFFF : 0; /* sbb self (CF extend) */
    PUSH32(esp, 0xFFFE07FFu);
    ecx = edi;
    esi = esi & 0x8007274Cu;
    PUSH32(esp, 0); sub_0049AD6C(); /* call 0x0049AD6C */

loc_0049B5F5: ;
    if (TEST_S(esi, esi)) { sub_0049B5FE(); return; } /* jl: less (signed <) */

loc_0049B5F9: ;
    eax = MEM32(edi + 0x40);
    g_seh_ebp = ebp; sub_0049B600(); return; /* tail jmp 0x0049B600 */

}

/**
 * sub_0049B606
 * Original: 0x0049B606 - 0x0049B658 (82 bytes, 31 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0049B606(void)
{
    int _flags = 0; /* fallback flag var */

loc_0049B606: ;
    PUSH32(esp, esi);
    esi = MEM32(esp + 0xC);
    eax = 0; /* xor self */
    if (CMP_EQ(esi, eax)) goto loc_0049B654; /* je: equal / zero */

loc_0049B611: ;
    PUSH32(esp, edi);
    edi = MEM32(esp + 0xC);
    if (CMP_NE(MEM32(edi + 0x30), esi)) goto loc_0049B620; /* jne: not equal / not zero */

loc_0049B61B: ;
    MEM32(edi + 0x30) = eax;
    goto loc_0049B628;

loc_0049B620: ;
    if (CMP_NE(MEM32(edi + 0x20), esi)) goto loc_0049B628; /* jne: not equal / not zero */

loc_0049B625: ;
    MEM32(edi + 0x20) = eax;

loc_0049B628: ;
    ecx = MEM32(esi + 4);
    edx = MEM32(esp + 0x14);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, eax);
    PUSH32(esp, 1);
    MEM32(ecx + 0xC) = edx;
    PUSH32(esp, MEM32(esi));
    PUSH32(esp, 0); RECOMP_ICALL_SAFE(MEM32(0x56114C), _icall_esp); /* indirect call */
    }

loc_0049B63D: ;
    ecx = MEM32(esi);
    edi = edi + 0x10;
    (void)0; /* cmp ecx, edi - flags set for next jcc */
    POP32(esp, edi);
    if (CMP_EQ(ecx, edi)) goto loc_0049B654; /* je: equal / zero */

loc_0049B647: ;
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, 0); RECOMP_ICALL_SAFE(MEM32(0x561044), _icall_esp); /* indirect call */
    }

loc_0049B64D: ;
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, esi);
    PUSH32(esp, 0); RECOMP_ICALL_SAFE(MEM32(0x561190), _icall_esp); /* indirect call */
    }

loc_0049B654: ;
    POP32(esp, esi);
    esp += 16; return; /* ret 12 */

}

/**
 * sub_0049B658
 * Original: 0x0049B658 - 0x0049B6D6 (126 bytes, 53 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0049B658(void)
{
    int _flags = 0; /* fallback flag var */
    int _cf = 0; /* carry flag */

loc_0049B658: ;
    PUSH32(esp, ebx);
    ebx = ecx;
    eax = MEM32(ebx);
    if (TEST_Z(eax, 0x2000000)) goto loc_0049B6D2; /* je: equal / zero */

loc_0049B664: ;
    if (TEST_NZ(eax, 0x20000000)) goto loc_0049B6D2; /* jne: not equal / not zero */

loc_0049B66B: ;
    PUSH32(esp, edi);
    edi = ebx + 0xD38;
    ecx = MEM32(edi);
    eax = ecx;
    eax = eax - edi;
    eax = (uint32_t)(-(int32_t)eax);
    eax = _cf ? 0xFFFFFFFF : 0; /* sbb self (CF extend) */
    eax = eax & ecx;
    if ((eax == 0)) goto loc_0049B6D1; /* je: equal / zero */

loc_0049B680: ;
    PUSH32(esp, esi);

loc_0049B681: ;
    if (TEST_Z(eax, eax)) goto loc_0049B689; /* je: equal / zero */

loc_0049B685: ;
    ecx = MEM32(eax);
    goto loc_0049B68B;

loc_0049B689: ;
    ecx = MEM32(edi);

loc_0049B68B: ;
    esi = ecx;
    esi = esi - edi;
    esi = (uint32_t)(-(int32_t)esi);
    esi = _cf ? 0xFFFFFFFF : 0; /* sbb self (CF extend) */
    esi = esi & ecx;
    if (TEST_Z(MEM8(eax + 0xC), 2)) goto loc_0049B6CA; /* je: equal / zero */

loc_0049B69B: ;
    if (CMP_BE(MEM8(eax + 0x7C), 1)) goto loc_0049B6CA; /* jbe: below or equal (unsigned <=) */

loc_0049B6A1: ;
    ecx = MEM32(eax + 0x44);
    if (TEST_Z(ecx, ecx)) goto loc_0049B6CA; /* je: equal / zero */

loc_0049B6A8: ;
    if (CMP_EQ(ecx, MEM32(esp + 0x10))) goto loc_0049B6BD; /* je: equal / zero */

loc_0049B6AE: ;
    if (CMP_NE(MEM32(esp + 0x10), 0)) goto loc_0049B6CA; /* jne: not equal / not zero */

loc_0049B6B5: ;
    if (TEST_Z(ecx, ecx)) goto loc_0049B6BD; /* je: equal / zero */

loc_0049B6B9: ;
    if (TEST_Z(LO8(ecx), LO8(ecx))) goto loc_0049B6CA; /* je: equal / zero */

loc_0049B6BD: ;
    PUSH32(esp, 0x80072746u);
    PUSH32(esp, eax);
    ecx = ebx;
    PUSH32(esp, 0); sub_0049E08D(); /* call 0x0049E08D */

loc_0049B6CA: ;
    (void)0; /* test esi, esi - flags set for next jcc */
    eax = esi;
    if (TEST_NZ(esi, esi)) goto loc_0049B681; /* jne: not equal / not zero */

loc_0049B6D0: ;
    POP32(esp, esi);

loc_0049B6D1: ;
    POP32(esp, edi);

loc_0049B6D2: ;
    POP32(esp, ebx);
    esp += 8; return; /* ret 4 */

}

/**
 * sub_0049B6D6
 * Original: 0x0049B6D6 - 0x0049B712 (60 bytes, 25 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0049B6D6(void)
{
    uint32_t ebp;
    int _flags = 0; /* fallback flag var */
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_0049B6D6: ;
    PUSH32(esp, ebx);
    PUSH32(esp, esi);
    esi = MEM32(esp + 0xC);
    eax = MEM32(esi + 0x40);
    (void)0; /* test eax, eax - flags set for next jcc */
    PUSH32(esp, edi);
    ebx = ecx;
    edi = 0x80072777u;
    if (CMP_GE(eax & eax, 0)) goto loc_0049B6ED; /* jge: greater or equal (signed >=) */

loc_0049B6EB: ;
    edi = eax;

loc_0049B6ED: ;
    PUSH32(esp, edi);
    PUSH32(esp, MEM32(esi + 0x20));
    ecx = ebx;
    PUSH32(esp, esi);
    PUSH32(esp, 0); sub_0049B606(); /* call 0x0049B606 */

loc_0049B6F9: ;
    PUSH32(esp, edi);
    PUSH32(esp, MEM32(esi + 0x30));
    ecx = ebx;
    PUSH32(esp, esi);
    PUSH32(esp, 0); sub_0049B606(); /* call 0x0049B606 */

loc_0049B705: ;
    PUSH32(esp, esi);
    ecx = ebx;
    PUSH32(esp, 0); sub_0049ADE8(); /* call 0x0049ADE8 */

loc_0049B70D: ;
    edi = esi + 0x34;
    g_seh_ebp = ebp; sub_0049B729(); return; /* tail jmp 0x0049B729 */

}

/**
 * sub_0049B74A
 * Original: 0x0049B74A - 0x0049B78D (67 bytes, 22 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0049B74A(void)
{
    uint32_t ebp;
    int _flags = 0; /* fallback flag var */

loc_0049B74A: ;
    PUSH32(esp, ebp);
    ebp = esp;
    PUSH32(esp, ecx);
    PUSH32(esp, ecx);
    (void)0; /* test ecx, ecx - flags set for next jcc */
    MEM32(ebp + -8) = ecx;
    if (TEST_Z(ecx, ecx)) goto loc_0049B77B; /* je: equal / zero */

loc_0049B756: ;
    if (CMP_BE(MEM16(ecx + 0xD32), 0)) goto loc_0049B77B; /* jbe: below or equal (unsigned <=) */

loc_0049B760: ;
    MEM32(ebp + -4) = MEM32(ebp + -4) & 0;
    PUSH32(esp, edi);
    PUSH32(esp, MEM32(ebp + 8));
    PUSH32(esp, 0); sub_0049ACCD(); /* call 0x0049ACCD */

loc_0049B76D: ;
    edi = eax;
    if (TEST_NZ(edi, edi)) { sub_0049B78D(); return; } /* jne: not equal / not zero */

loc_0049B773: ;
    eax = eax | 0xFFFFFFFFu;
    g_seh_ebp = ebp; sub_0049B980(); return; /* tail jmp 0x0049B980 */

loc_0049B77B: ;
    PUSH32(esp, 0x276D);
    PUSH32(esp, 0); sub_0042C2D4(); /* call 0x0042C2D4 */

loc_0049B785: ;
    eax = eax | 0xFFFFFFFFu;
    g_seh_ebp = ebp; sub_0049B981(); return; /* tail jmp 0x0049B981 */

}

/**
 * sub_0049BA09
 * Original: 0x0049BA09 - 0x0049BA2F (38 bytes, 12 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0049BA09(void)
{
    uint32_t ebp;
    int _flags = 0; /* fallback flag var */

loc_0049BA09: ;
    PUSH32(esp, ebp);
    ebp = esp;
    PUSH32(esp, ebx);
    ebx = ecx;
    if (TEST_Z(ebx, ebx)) goto loc_0049BA1D; /* je: equal / zero */

loc_0049BA13: ;
    if (CMP_A(MEM16(ebx + 0xD32), 0)) { sub_0049BA2F(); return; } /* ja: above (unsigned >) */

loc_0049BA1D: ;
    PUSH32(esp, 0x276D);
    PUSH32(esp, 0); sub_0042C2D4(); /* call 0x0042C2D4 */

loc_0049BA27: ;
    eax = eax | 0xFFFFFFFFu;
    g_seh_ebp = ebp; sub_0049BAFF(); return; /* tail jmp 0x0049BAFF */

}

/**
 * sub_0049BB04
 * Original: 0x0049BB04 - 0x0049BB3E (58 bytes, 17 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0049BB04(void)
{
    uint32_t ebp;
    int _flags = 0; /* fallback flag var */

loc_0049BB04: ;
    PUSH32(esp, ebp);
    ebp = esp;
    esp = esp - 0x88;
    PUSH32(esp, edi);
    edi = 0; /* xor self */
    (void)0; /* cmp ecx, edi - flags set for next jcc */
    eax = ebp + -136;
    MEM32(ebp + -20) = ecx;
    MEM32(ebp + -24) = edi;
    MEM32(ebp + -16) = eax;
    if (CMP_EQ(ecx, edi)) goto loc_0049BB2C; /* je: equal / zero */

loc_0049BB23: ;
    if (CMP_A(MEM16(ecx + 0xD32), LO16(edi))) { sub_0049BB3E(); return; } /* ja: above (unsigned >) */

loc_0049BB2C: ;
    PUSH32(esp, 0x276D);
    PUSH32(esp, 0); sub_0042C2D4(); /* call 0x0042C2D4 */

loc_0049BB36: ;
    eax = eax | 0xFFFFFFFFu;
    g_seh_ebp = ebp; sub_0049BE86(); return; /* tail jmp 0x0049BE86 */

}

/**
 * sub_0049BE8B
 * Original: 0x0049BE8B - 0x0049BEA9 (30 bytes, 10 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0049BE8B(void)
{
    uint32_t ebp;
    int _flags = 0; /* fallback flag var */

loc_0049BE8B: ;
    PUSH32(esp, ebp);
    ebp = esp;
    PUSH32(esp, ebx);
    ebx = ecx;
    if (TEST_Z(ebx, ebx)) goto loc_0049BE9F; /* je: equal / zero */

loc_0049BE95: ;
    if (CMP_A(MEM16(ebx + 0xD32), 0)) { sub_0049BEA9(); return; } /* ja: above (unsigned >) */

loc_0049BE9F: ;
    PUSH32(esp, 0x276D);
    g_seh_ebp = ebp; sub_0049BF4E(); return; /* tail jmp 0x0049BF4E */

}

/**
 * sub_0049BFD3
 * Original: 0x0049BFD3 - 0x0049C003 (48 bytes, 17 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0049BFD3(void)
{
    uint32_t ebp;
    int _flags = 0; /* fallback flag var */

loc_0049BFD3: ;
    PUSH32(esp, ebp);
    ebp = esp;
    esp = esp - 0x20;
    PUSH32(esp, ebx);
    ebx = MEM32(ebp + 8);
    eax = MEM32(ebx + 0xC);
    (void)0; /* test LO8(eax), 2 - flags set for next jcc */
    MEM32(ebp + -4) = ecx;
    if (TEST_Z(LO8(eax), 2)) goto loc_0049BFF5; /* je: equal / zero */

loc_0049BFE7: ;
    if (TEST_NZ(LO8(eax), 0x40)) { sub_0049C003(); return; } /* jne: not equal / not zero */

loc_0049BFEB: ;
    eax = 0x80072749u;
    g_seh_ebp = ebp; sub_0049C18A(); return; /* tail jmp 0x0049C18A */

loc_0049BFF5: ;
    if (TEST_NZ(LO8(eax), 0x20)) { sub_0049C003(); return; } /* jne: not equal / not zero */

loc_0049BFF9: ;
    eax = 0x80072726u;
    g_seh_ebp = ebp; sub_0049C18A(); return; /* tail jmp 0x0049C18A */

}

/**
 * sub_0049C18F
 * Original: 0x0049C18F - 0x0049C1B5 (38 bytes, 15 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0049C18F(void)
{
    uint32_t ebp;
    int _flags = 0; /* fallback flag var */

loc_0049C18F: ;
    PUSH32(esp, ebp);
    ebp = esp;
    PUSH32(esp, ecx);
    PUSH32(esp, esi);
    esi = MEM32(ebp + 8);
    eax = MEM32(esi + 0xC);
    (void)0; /* test LO8(eax), 0x40 - flags set for next jcc */
    PUSH32(esp, edi);
    edi = MEM32(ebp + 0xC);
    MEM32(ebp + -4) = ecx;
    if (TEST_NZ(LO8(eax), 0x40)) { sub_0049C1B5(); return; } /* jne: not equal / not zero */

loc_0049C1A5: ;
    if (CMP_NE(MEM32(edi + 0x14), 0)) { sub_0049C1B5(); return; } /* jne: not equal / not zero */

loc_0049C1AB: ;
    eax = 0x80072749u;
    g_seh_ebp = ebp; sub_0049C2A2(); return; /* tail jmp 0x0049C2A2 */

}

/**
 * sub_0049C2A8
 * Original: 0x0049C2A8 - 0x0049C343 (155 bytes, 69 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0049C2A8(void)
{
    uint32_t ebp;
    int _flags = 0; /* fallback flag var */
    int _cf = 0; /* carry flag */

loc_0049C2A8: ;
    PUSH32(esp, ebp);
    ebp = esp;
    edx = 0; /* xor self */
    eax = 0; /* xor self */
    (void)0; /* cmp MEM8(ebp + 0x14), 2 - flags set for next jcc */
    PUSH32(esp, ebx);
    SET_LO8(edx, (CMP_EQ(MEM8(ebp + 0x14), 2)) ? 1 : 0); /* sete */
    PUSH32(esp, esi);
    esi = ecx + 0xD38;
    PUSH32(esp, 3);
    POP32(esp, ebx);
    MEM32(ebp + 0x14) = edx;
    edx = MEM32(esi);
    ecx = edx;
    ecx = ecx - esi;
    ecx = (uint32_t)(-(int32_t)ecx);
    ecx = _cf ? 0xFFFFFFFF : 0; /* sbb self (CF extend) */
    ecx = ecx & edx;
    if ((ecx == 0)) goto loc_0049C33D; /* je: equal / zero */

loc_0049C2D2: ;
    PUSH32(esp, edi);

loc_0049C2D3: ;
    edx = MEM32(ecx + 0xC);
    edi = edx;
    edi = edi >> 1;
    edi = ~edi;
    edi = edi & 1;
    if (CMP_NE(edi, MEM32(ebp + 0x14))) goto loc_0049C328; /* jne: not equal / not zero */

loc_0049C2E4: ;
    SET_LO16(edi, MEM16(ecx + 0x4A));
    if (CMP_NE(LO16(edi), MEM16(ebp + 8))) goto loc_0049C328; /* jne: not equal / not zero */

loc_0049C2EE: ;
    edi = 0; /* xor self */
    if (CMP_EQ(MEM32(ebp + 0x18), edi)) goto loc_0049C2FD; /* je: equal / zero */

loc_0049C2F5: ;
    if (TEST_NZ(edx, 0x1000000)) goto loc_0049C328; /* jne: not equal / not zero */

loc_0049C2FD: ;
    edx = MEM32(ecx + 0x44);
    if (CMP_EQ(edx, MEM32(ebp + 0xC))) goto loc_0049C30C; /* je: equal / zero */

loc_0049C305: ;
    if (TEST_NZ(edx, edx)) goto loc_0049C328; /* jne: not equal / not zero */

loc_0049C309: ;
    edi = 0; /* xor self */
    edi++;

loc_0049C30C: ;
    SET_LO16(edx, MEM16(ecx + 0x48));
    if (CMP_EQ(LO16(edx), MEM16(ebp + 0x10))) goto loc_0049C31C; /* je: equal / zero */

loc_0049C316: ;
    if (TEST_NZ(LO16(edx), LO16(edx))) goto loc_0049C328; /* jne: not equal / not zero */

loc_0049C31B: ;
    edi++;

loc_0049C31C: ;
    if (TEST_Z(edi, edi)) goto loc_0049C33A; /* je: equal / zero */

loc_0049C320: ;
    if (CMP_AE(edi, ebx)) goto loc_0049C328; /* jae: above or equal (unsigned >=) */

loc_0049C324: ;
    eax = ecx;
    ebx = edi;

loc_0049C328: ;
    ecx = MEM32(ecx);
    edx = ecx;
    edx = edx - esi;
    edx = (uint32_t)(-(int32_t)edx);
    edx = _cf ? 0xFFFFFFFF : 0; /* sbb self (CF extend) */
    edx = edx & ecx;
    ecx = edx;
    if ((edx != 0)) goto loc_0049C2D3; /* jne: not equal / not zero */

loc_0049C338: ;
    goto loc_0049C33C;

loc_0049C33A: ;
    eax = ecx;

loc_0049C33C: ;
    POP32(esp, edi);

loc_0049C33D: ;
    POP32(esp, esi);
    POP32(esp, ebx);
    POP32(esp, ebp);
    esp += 24; return; /* ret 20 */

}

/**
 * sub_0049C343
 * Original: 0x0049C343 - 0x0049C381 (62 bytes, 21 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0049C343(void)
{
    uint32_t ebp;
    int _flags = 0; /* fallback flag var */
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_0049C343: ;
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, ebx);
    PUSH32(esp, esi);
    PUSH32(esp, edi);
    edi = ecx;
    PUSH32(esp, 0); RECOMP_ICALL_SAFE(MEM32(0x5610F0), _icall_esp); /* indirect call */
    }

loc_0049C34E: ;
    esi = MEM32(esp + 0x10);
    (void)0; /* test MEM8(esi + 0xC), 2 - flags set for next jcc */
    SET_LO8(ebx, LO8(eax));
    if (TEST_Z(MEM8(esi + 0xC), 2)) { sub_0049C381(); return; } /* je: equal / zero */

loc_0049C35A: ;
    PUSH32(esp, MEM32(esp + 0x14));
    ecx = edi;
    PUSH32(esp, esi);
    PUSH32(esp, 0); sub_0049F37C(); /* call 0x0049F37C */

loc_0049C366: ;
    if (TEST_NZ(eax, eax)) { sub_0049C381(); return; } /* jne: not equal / not zero */

loc_0049C36A: ;
    PUSH32(esp, 0x1000018);
    PUSH32(esp, 0xFFFFFFFFu);
    ecx = esi;
    PUSH32(esp, 0); sub_0049AD6C(); /* call 0x0049AD6C */

loc_0049C378: ;
    MEM32(esi + 8) = 0x2D636F73;
    g_seh_ebp = ebp; sub_0049C3B1(); return; /* tail jmp 0x0049C3B1 */

}

/**
 * sub_0049C3C1
 * Original: 0x0049C3C1 - 0x0049C3E7 (38 bytes, 13 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0049C3C1(void)
{
    uint32_t ebp;
    int _flags = 0; /* fallback flag var */

loc_0049C3C1: ;
    PUSH32(esp, ebp);
    ebp = esp;
    esp = esp - 0x1C;
    PUSH32(esp, ebx);
    ebx = ecx;
    if (TEST_Z(ebx, ebx)) goto loc_0049C3D8; /* je: equal / zero */

loc_0049C3CE: ;
    if (CMP_A(MEM16(ebx + 0xD32), 0)) { sub_0049C3E7(); return; } /* ja: above (unsigned >) */

loc_0049C3D8: ;
    PUSH32(esp, 0x276D);
    PUSH32(esp, 0); sub_0042C2D4(); /* call 0x0042C2D4 */

loc_0049C3E2: ;
    eax = eax | 0xFFFFFFFFu;
    g_seh_ebp = ebp; sub_0049C459(); return; /* tail jmp 0x0049C459 */

}

/**
 * sub_0049C45E
 * Original: 0x0049C45E - 0x0049C487 (41 bytes, 12 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0049C45E(void)
{
    uint32_t ebp;
    int _flags = 0; /* fallback flag var */

loc_0049C45E: ;
    PUSH32(esp, ebp);
    ebp = esp;
    esp = esp - 0x20;
    (void)0; /* test ecx, ecx - flags set for next jcc */
    MEM32(ebp + -4) = ecx;
    if (TEST_Z(ecx, ecx)) goto loc_0049C475; /* je: equal / zero */

loc_0049C46B: ;
    if (CMP_A(MEM16(ecx + 0xD32), 0)) { sub_0049C487(); return; } /* ja: above (unsigned >) */

loc_0049C475: ;
    PUSH32(esp, 0x276D);
    PUSH32(esp, 0); sub_0042C2D4(); /* call 0x0042C2D4 */

loc_0049C47F: ;
    eax = eax | 0xFFFFFFFFu;
    g_seh_ebp = ebp; sub_0049C518(); return; /* tail jmp 0x0049C518 */

}

/**
 * sub_0049C51C
 * Original: 0x0049C51C - 0x0049C542 (38 bytes, 13 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0049C51C(void)
{
    uint32_t ebp;
    int _flags = 0; /* fallback flag var */

loc_0049C51C: ;
    PUSH32(esp, ebp);
    ebp = esp;
    esp = esp - 0x18;
    PUSH32(esp, edi);
    edi = ecx;
    if (TEST_Z(edi, edi)) goto loc_0049C533; /* je: equal / zero */

loc_0049C529: ;
    if (CMP_A(MEM16(edi + 0xD32), 0)) { sub_0049C542(); return; } /* ja: above (unsigned >) */

loc_0049C533: ;
    PUSH32(esp, 0x276D);
    PUSH32(esp, 0); sub_0042C2D4(); /* call 0x0042C2D4 */

loc_0049C53D: ;
    eax = eax | 0xFFFFFFFFu;
    g_seh_ebp = ebp; sub_0049C5B2(); return; /* tail jmp 0x0049C5B2 */

}

/**
 * sub_0049C5B7
 * Original: 0x0049C5B7 - 0x0049C5DA (35 bytes, 13 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0049C5B7(void)
{
    uint32_t ebp;
    int _flags = 0; /* fallback flag var */

loc_0049C5B7: ;
    PUSH32(esp, ebp);
    ebp = esp;
    esp = esp - 0x18;
    PUSH32(esp, ebx);
    ebx = ecx;
    (void)0; /* test ebx, ebx - flags set for next jcc */
    PUSH32(esp, esi);
    PUSH32(esp, edi);
    if (TEST_Z(ebx, ebx)) goto loc_0049C5D0; /* je: equal / zero */

loc_0049C5C6: ;
    if (CMP_A(MEM16(ebx + 0xD32), 0)) { sub_0049C5DA(); return; } /* ja: above (unsigned >) */

loc_0049C5D0: ;
    PUSH32(esp, 0x276D);
    g_seh_ebp = ebp; sub_0049C6B7(); return; /* tail jmp 0x0049C6B7 */

}

/**
 * sub_0049C6CA
 * Original: 0x0049C6CA - 0x0049C718 (78 bytes, 31 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0049C6CA(void)
{
    uint32_t ebp;
    int _flags = 0; /* fallback flag var */
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_0049C6CA: ;
    PUSH32(esp, edi);
    edi = ecx;
    if (TEST_Z(MEM8(edi + 3), 2)) { sub_0049C718(); return; } /* je: equal / zero */

loc_0049C6D3: ;
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, ebx);
    PUSH32(esp, esi);
    PUSH32(esp, 0); RECOMP_ICALL_SAFE(MEM32(0x5610F0), _icall_esp); /* indirect call */
    }

loc_0049C6DB: ;
    SET_LO8(ebx, LO8(eax));
    esi = edi + 0xD38;
    goto loc_0049C6EF;

loc_0049C6E5: ;
    PUSH32(esp, 1);
    PUSH32(esp, eax);
    ecx = edi;
    PUSH32(esp, 0); sub_0049C343(); /* call 0x0049C343 */

loc_0049C6EF: ;
    eax = MEM32(esi);
    if (CMP_NE(eax, esi)) goto loc_0049C6E5; /* jne: not equal / not zero */

loc_0049C6F5: ;
    esi = edi + 0xD40;
    goto loc_0049C707;

loc_0049C6FD: ;
    PUSH32(esp, 1);
    PUSH32(esp, eax);
    ecx = edi;
    PUSH32(esp, 0); sub_0049C343(); /* call 0x0049C343 */

loc_0049C707: ;
    eax = MEM32(esi);
    if (CMP_NE(eax, esi)) goto loc_0049C6FD; /* jne: not equal / not zero */

loc_0049C70D: ;
    POP32(esp, esi);
    SET_LO8(ecx, LO8(ebx));
    POP32(esp, ebx);
    POP32(esp, edi);
    g_seh_ebp = ebp; RECOMP_ITAIL(MEM32(0x5610E8)); return; /* indirect tail jmp */

}

/**
 * sub_0049C71A
 * Original: 0x0049C71A - 0x0049C747 (45 bytes, 18 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0049C71A(void)
{
    uint32_t ebp;
    int _cf = 0; /* carry flag */

loc_0049C71A: ;
    PUSH32(esp, ebp);
    ebp = esp;
    PUSH32(esp, ecx);
    PUSH32(esp, ebx);
    ebx = MEM32(ebp + 8);
    PUSH32(esp, esi);
    PUSH32(esp, edi);
    edi = ebx;
    edi = (uint32_t)(-(int32_t)edi);
    edi = _cf ? 0xFFFFFFFF : 0; /* sbb self (CF extend) */
    edi = edi & 0x88;
    edi = edi + 0x60;
    ebx = (uint32_t)(-(int32_t)ebx);
    ebx = _cf ? 0xFFFFFFFF : 0; /* sbb self (CF extend) */
    ebx = ebx & 0x29000000;
    esi = ecx;
    ebx = ebx + 0x3854454E;
    g_seh_ebp = ebp; sub_0049C7AF(); return; /* tail jmp 0x0049C7AF */

}

/**
 * sub_0049C97C
 * Original: 0x0049C97C - 0x0049C9C0 (68 bytes, 22 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0049C97C(void)
{
    uint32_t ebp;
    int _flags = 0; /* fallback flag var */
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_0049C97C: ;
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, ebx);
    PUSH32(esp, esi);
    esi = ecx;
    PUSH32(esp, 0); RECOMP_ICALL_SAFE(MEM32(0x5610F0), _icall_esp); /* indirect call */
    }

loc_0049C986: ;
    (void)0; /* test MEM8(esi + 3), 2 - flags set for next jcc */
    SET_LO8(ebx, LO8(eax));
    if (TEST_Z(MEM8(esi + 3), 2)) goto loc_0049C99C; /* je: equal / zero */

loc_0049C98E: ;
    ecx = esi;
    PUSH32(esp, 0); sub_00490334(); /* call 0x00490334 */

loc_0049C995: ;
    ecx = esi;
    PUSH32(esp, 0); sub_0049C6CA(); /* call 0x0049C6CA */

loc_0049C99C: ;
    PUSH32(esp, 0x20000000);
    ecx = esi;
    PUSH32(esp, 0); sub_0049D04E(); /* call 0x0049D04E */

loc_0049C9A8: ;
    ecx = esi;
    PUSH32(esp, 0); sub_00490823(); /* call 0x00490823 */

loc_0049C9AF: ;
    SET_LO8(ecx, LO8(ebx));
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, 0); RECOMP_ICALL_SAFE(MEM32(0x5610E8), _icall_esp); /* indirect call */
    }

loc_0049C9B7: ;
    ecx = esi;
    POP32(esp, esi);
    POP32(esp, ebx);
    g_seh_ebp = ebp; sub_0048DBE1(); return; /* tail jmp 0x0048DBE1 */

}

/**
 * sub_0049CAF7
 * Original: 0x0049CAF7 - 0x0049CB45 (78 bytes, 27 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0049CAF7(void)
{
    uint32_t ebp;
    int _flags = 0; /* fallback flag var */

loc_0049CAF7: ;
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, ebp);
    ebp = esp;
    esp = esp - 0x20;
    PUSH32(esp, 0x5613A4);
    eax = ebp + -12;
    PUSH32(esp, eax);
    PUSH32(esp, 0); RECOMP_ICALL_SAFE(MEM32(0x561060), _icall_esp); /* indirect call */
    }

loc_0049CB0C: ;
    MEM32(ebp + -32) = MEM32(ebp + -32) & 0;
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, 0x10);
    eax = ebp + -12;
    MEM32(ebp + -28) = eax;
    PUSH32(esp, 3);
    eax = ebp + -20;
    PUSH32(esp, eax);
    eax = ebp + -32;
    PUSH32(esp, eax);
    PUSH32(esp, 0xC0100000u);
    eax = ebp + -4;
    PUSH32(esp, eax);
    MEM32(ebp + -24) = 0x40;
    PUSH32(esp, 0); RECOMP_ICALL_SAFE(MEM32(0x561064), _icall_esp); /* indirect call */
    }

loc_0049CB38: ;
    if (CMP_GE(eax & eax, 0)) goto loc_0049CB40; /* jge: greater or equal (signed >=) */

loc_0049CB3C: ;
    MEM32(ebp + -4) = MEM32(ebp + -4) | 0xFFFFFFFFu;

loc_0049CB40: ;
    eax = MEM32(ebp + -4);
    esp = ebp;
    POP32(esp, ebp); /* leave */
    esp += 4; return; /* ret */

}

/**
 * sub_0049CB45
 * Original: 0x0049CB45 - 0x0049CB5C (23 bytes, 7 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0049CB45(void)
{
    int _flags = 0; /* fallback flag var */

loc_0049CB45: ;
    if (CMP_EQ(MEM32(esp + 4), 0xFFFFFFFFu)) goto loc_0049CB56; /* je: equal / zero */

loc_0049CB4C: ;
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, MEM32(esp + 4));
    PUSH32(esp, 0); RECOMP_ICALL_SAFE(MEM32(0x561058), _icall_esp); /* indirect call */
    }

loc_0049CB56: ;
    eax = 0; /* xor self */
    eax++;
    esp += 8; return; /* ret 4 */

}

/**
 * sub_0049CB5C
 * Original: 0x0049CB5C - 0x0049CB67 (11 bytes, 2 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0049CB5C(void)
{
    uint32_t ebp;
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_0049CB5C: ;
    ecx = MEM32(0x75F024);
    g_seh_ebp = ebp; sub_004907F3(); return; /* tail jmp 0x004907F3 */

}

/**
 * sub_0049CB67
 * Original: 0x0049CB67 - 0x0049CB72 (11 bytes, 2 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0049CB67(void)
{
    uint32_t ebp;
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_0049CB67: ;
    ecx = MEM32(0x75F024);
    g_seh_ebp = ebp; sub_00490CFF(); return; /* tail jmp 0x00490CFF */

}

/**
 * sub_0049CB72
 * Original: 0x0049CB72 - 0x0049CB7D (11 bytes, 2 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0049CB72(void)
{
    uint32_t ebp;
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_0049CB72: ;
    ecx = MEM32(0x75F024);
    g_seh_ebp = ebp; sub_0048EA7D(); return; /* tail jmp 0x0048EA7D */

}

/**
 * sub_0049CB7D
 * Original: 0x0049CB7D - 0x0049CB88 (11 bytes, 2 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0049CB7D(void)
{
    uint32_t ebp;
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_0049CB7D: ;
    ecx = MEM32(0x75F024);
    g_seh_ebp = ebp; sub_0048EAAB(); return; /* tail jmp 0x0048EAAB */

}

/**
 * sub_0049CB88
 * Original: 0x0049CB88 - 0x0049CB93 (11 bytes, 2 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0049CB88(void)
{
    uint32_t ebp;
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_0049CB88: ;
    ecx = MEM32(0x75F024);
    g_seh_ebp = ebp; sub_0048EB99(); return; /* tail jmp 0x0048EB99 */

}

/**
 * sub_0049CB93
 * Original: 0x0049CB93 - 0x0049CB9E (11 bytes, 2 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0049CB93(void)
{
    uint32_t ebp;
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_0049CB93: ;
    ecx = MEM32(0x75F024);
    g_seh_ebp = ebp; sub_0048EC73(); return; /* tail jmp 0x0048EC73 */

}

/**
 * sub_0049CB9E
 * Original: 0x0049CB9E - 0x0049CBA9 (11 bytes, 2 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0049CB9E(void)
{
    uint32_t ebp;
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_0049CB9E: ;
    ecx = MEM32(0x75F024);
    g_seh_ebp = ebp; sub_0048ECF1(); return; /* tail jmp 0x0048ECF1 */

}

/**
 * sub_0049CBA9
 * Original: 0x0049CBA9 - 0x0049CBB8 (15 bytes, 5 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0049CBA9(void)
{
    uint32_t ebp;

loc_0049CBA9: ;
    PUSH32(esp, ebp);
    ebp = esp;
    ecx = MEM32(0x75F024);
    POP32(esp, ebp);
    g_seh_ebp = ebp; sub_004900E8(); return; /* tail jmp 0x004900E8 */

}

/**
 * sub_0049CBB8
 * Original: 0x0049CBB8 - 0x0049CBC3 (11 bytes, 2 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0049CBB8(void)
{
    uint32_t ebp;
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_0049CBB8: ;
    ecx = MEM32(0x75F024);
    g_seh_ebp = ebp; sub_0048ED44(); return; /* tail jmp 0x0048ED44 */

}

/**
 * sub_0049CBC3
 * Original: 0x0049CBC3 - 0x0049CBCE (11 bytes, 2 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0049CBC3(void)
{
    uint32_t ebp;
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_0049CBC3: ;
    ecx = MEM32(0x75F024);
    g_seh_ebp = ebp; sub_0048EDCA(); return; /* tail jmp 0x0048EDCA */

}

/**
 * sub_0049CBCE
 * Original: 0x0049CBCE - 0x0049CBD9 (11 bytes, 2 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0049CBCE(void)
{
    uint32_t ebp;
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_0049CBCE: ;
    ecx = MEM32(0x75F024);
    g_seh_ebp = ebp; sub_004901EC(); return; /* tail jmp 0x004901EC */

}

/**
 * sub_0049CBD9
 * Original: 0x0049CBD9 - 0x0049CBE4 (11 bytes, 2 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0049CBD9(void)
{
    uint32_t ebp;
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_0049CBD9: ;
    ecx = MEM32(0x75F024);
    g_seh_ebp = ebp; sub_0048EDED(); return; /* tail jmp 0x0048EDED */

}

/**
 * sub_0049CBE4
 * Original: 0x0049CBE4 - 0x0049CBEF (11 bytes, 2 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0049CBE4(void)
{
    uint32_t ebp;
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_0049CBE4: ;
    ecx = MEM32(0x75F024);
    g_seh_ebp = ebp; sub_0048DEEF(); return; /* tail jmp 0x0048DEEF */

}

/**
 * sub_0049CBEF
 * Original: 0x0049CBEF - 0x0049CC19 (42 bytes, 20 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0049CBEF(void)
{
    uint32_t ebp;
    int _flags = 0; /* fallback flag var */
    int _cf = 0; /* carry flag */

loc_0049CBEF: ;
    PUSH32(esp, ebp);
    ebp = esp;
    PUSH32(esp, ebx);
    ecx = MEM32(ebp + 8);
    edx = MEM32(ebp + 0xC);
    eax = 0; /* xor self */
    ebx = 0; /* xor self */
    edx = edx >> 2;
    if (TEST_Z(edx, edx)) goto loc_0049CC0F; /* je: equal / zero */

loc_0049CC04: ;
    eax = eax + MEM32(ecx);
    ebx = ebx + 0 + _cf; /* adc */
    ecx = ecx + 4;
    edx--;
    if ((edx != 0)) goto loc_0049CC04; /* jne: not equal / not zero */

loc_0049CC0F: ;
    eax = eax + ebx;
    eax = eax + 0 + _cf; /* adc */
    POP32(esp, ebx);
    POP32(esp, ebp);
    esp += 12; return; /* ret 8 */

}

/**
 * sub_0049CC19
 * Original: 0x0049CC19 - 0x0049CC37 (30 bytes, 10 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0049CC19(void)
{
    uint32_t ebp;
    int _flags = 0; /* fallback flag var */

loc_0049CC19: ;
    PUSH32(esp, ebp);
    ebp = esp;
    esp = esp - 0x210;
    if (CMP_EQ(MEM32(ebp + 8), 0xFFFFFFFFu)) goto loc_0049CC30; /* je: equal / zero */

loc_0049CC28: ;
    eax = MEM32(ebp + 0xC);
    if (CMP_B(eax, 0x18)) { sub_0049CC37(); return; } /* jb: below (unsigned <) */

loc_0049CC30: ;
    eax = 0; /* xor self */
    g_seh_ebp = ebp; sub_0049CCCC(); return; /* tail jmp 0x0049CCCC */

}

/**
 * sub_0049CCD0
 * Original: 0x0049CCD0 - 0x0049CCE6 (22 bytes, 7 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0049CCD0(void)
{
    uint32_t ebp;
    int _flags = 0; /* fallback flag var */

loc_0049CCD0: ;
    PUSH32(esp, ebp);
    ebp = esp;
    esp = esp - 0x210;
    if (CMP_NE(MEM32(ebp + 8), 0xFFFFFFFFu)) { sub_0049CCE6(); return; } /* jne: not equal / not zero */

loc_0049CCDF: ;
    eax = 0; /* xor self */
    g_seh_ebp = ebp; sub_0049CD6F(); return; /* tail jmp 0x0049CD6F */

}

/**
 * sub_0049CD73
 * Original: 0x0049CD73 - 0x0049CD8F (28 bytes, 10 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0049CD73(void)
{
    uint32_t ebp;
    int _flags = 0; /* fallback flag var */

loc_0049CD73: ;
    PUSH32(esp, ebp);
    ebp = esp;
    esp = esp - 0x1EC;
    eax = MEM32(0x75F024);
    (void)0; /* test eax, eax - flags set for next jcc */
    PUSH32(esp, ebx);
    PUSH32(esp, esi);
    if (TEST_Z(eax, eax)) { sub_0049CD8F(); return; } /* je: equal / zero */

loc_0049CD87: ;
    ebx = MEM32(eax + 0xD48);
    g_seh_ebp = ebp; sub_0049CD96(); return; /* tail jmp 0x0049CD96 */

}

/**
 * sub_0049CE09
 * Original: 0x0049CE09 - 0x0049CE14 (11 bytes, 2 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0049CE09(void)
{
    uint32_t ebp;
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_0049CE09: ;
    ecx = MEM32(0x75F024);
    g_seh_ebp = ebp; sub_00490C14(); return; /* tail jmp 0x00490C14 */

}

/**
 * sub_0049CE14
 * Original: 0x0049CE14 - 0x0049CE1F (11 bytes, 2 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0049CE14(void)
{
    uint32_t ebp;
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_0049CE14: ;
    ecx = MEM32(0x75F024);
    g_seh_ebp = ebp; sub_00490E5A(); return; /* tail jmp 0x00490E5A */

}

/**
 * sub_0049CE1F
 * Original: 0x0049CE1F - 0x0049CE35 (22 bytes, 9 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0049CE1F(void)
{
    uint32_t ebp;
    int _flags = 0; /* fallback flag var */

loc_0049CE1F: ;
    PUSH32(esp, ebp);
    ebp = esp;
    PUSH32(esp, ecx);
    PUSH32(esp, ecx);
    eax = MEM32(0x75F024);
    if (TEST_Z(eax, eax)) { sub_0049CE35(); return; } /* je: equal / zero */

loc_0049CE2D: ;
    eax = MEM32(eax + 0xD48);
    g_seh_ebp = ebp; sub_0049CE3A(); return; /* tail jmp 0x0049CE3A */

}

/**
 * sub_0049CEB9
 * Original: 0x0049CEB9 - 0x0049CF23 (106 bytes, 35 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0049CEB9(void)
{
    uint32_t ebp;
    int _flags = 0; /* fallback flag var */

loc_0049CEB9: ;
    PUSH32(esp, ebp);
    ebp = esp;
    esp = esp - 0x1EC;
    ecx = MEM32(0x75F024);
    if (TEST_Z(ecx, ecx)) goto loc_0049CF1C; /* je: equal / zero */

loc_0049CECC: ;
    if (CMP_NE(MEM32(ebp + 8), 0)) goto loc_0049CEDD; /* jne: not equal / not zero */

loc_0049CED2: ;
    PUSH32(esp, 0);
    PUSH32(esp, 0); sub_004974D6(); /* call 0x004974D6 */

loc_0049CED9: ;
    if (TEST_Z(eax, eax)) goto loc_0049CF1C; /* je: equal / zero */

loc_0049CEDD: ;
    eax = ebp + -492;
    PUSH32(esp, eax);
    PUSH32(esp, 0); sub_0049CE1F(); /* call 0x0049CE1F */

loc_0049CEE9: ;
    ecx = MEM32(0x75F024);
    eax = ebp + -492;
    PUSH32(esp, eax);
    PUSH32(esp, 0); sub_004974D6(); /* call 0x004974D6 */

loc_0049CEFB: ;
    if (CMP_EQ(MEM32(ebp + 0xC), 0)) goto loc_0049CF10; /* je: equal / zero */

loc_0049CF01: ;
    PUSH32(esp, edi);
    eax = 0; /* xor self */
    edi = ebp + -88;
    MEM32(edi) = eax; edi += 4; /* stosd */
    MEM16(edi) = LO16(eax); edi += 2; /* stosw */
    MEM16(ebp + -82) = MEM16(ebp + -82) & 0;
    POP32(esp, edi);

loc_0049CF10: ;
    eax = ebp + -492;
    PUSH32(esp, eax);
    PUSH32(esp, 0); sub_0049CD73(); /* call 0x0049CD73 */

loc_0049CF1C: ;
    eax = 0; /* xor self */
    eax++;
    esp = ebp;
    POP32(esp, ebp); /* leave */
    esp += 12; return; /* ret 8 */

}

/**
 * sub_0049CF23
 * Original: 0x0049CF23 - 0x0049CF71 (78 bytes, 24 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0049CF23(void)
{
    uint32_t ebp;
    int _flags = 0; /* fallback flag var */

loc_0049CF23: ;
    PUSH32(esp, ebp);
    ebp = esp;
    esp = esp - 0x1EC;
    if (CMP_EQ(MEM32(0x75F024), 0)) goto loc_0049CF6A; /* je: equal / zero */

loc_0049CF35: ;
    eax = ebp + -492;
    PUSH32(esp, eax);
    PUSH32(esp, 0); sub_0049CE1F(); /* call 0x0049CE1F */

loc_0049CF41: ;
    if (TEST_Z(eax, eax)) goto loc_0049CF6A; /* je: equal / zero */

loc_0049CF45: ;
    PUSH32(esp, MEM32(ebp + 8));
    ecx = MEM32(0x75F024);
    eax = ebp + -492;
    PUSH32(esp, eax);
    PUSH32(esp, 0); sub_00497621(); /* call 0x00497621 */

loc_0049CF5A: ;
    if (TEST_Z(eax, eax)) goto loc_0049CF6A; /* je: equal / zero */

loc_0049CF5E: ;
    eax = ebp + -492;
    PUSH32(esp, eax);
    PUSH32(esp, 0); sub_0049CD73(); /* call 0x0049CD73 */

loc_0049CF6A: ;
    eax = 0; /* xor self */
    eax++;
    esp = ebp;
    POP32(esp, ebp); /* leave */
    esp += 8; return; /* ret 4 */

}

/**
 * sub_0049CF71
 * Original: 0x0049CF71 - 0x0049CFA8 (55 bytes, 17 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0049CF71(void)
{
    uint32_t ebp;
    int _flags = 0; /* fallback flag var */

loc_0049CF71: ;
    PUSH32(esp, ebp);
    ebp = esp;
    esp = esp - 0x1EC;
    eax = MEM32(0x75F024);
    if (CMP_NE(MEM8(eax + 0x8C8), 0)) goto loc_0049CFA6; /* jne: not equal / not zero */

loc_0049CF88: ;
    eax = ebp + -492;
    PUSH32(esp, eax);
    PUSH32(esp, 0); sub_0049CE1F(); /* call 0x0049CE1F */

loc_0049CF94: ;
    if (TEST_Z(eax, eax)) goto loc_0049CFA6; /* je: equal / zero */

loc_0049CF98: ;
    PUSH32(esp, 0);
    eax = ebp + -492;
    PUSH32(esp, eax);
    PUSH32(esp, 0); sub_0048D659(); /* call 0x0048D659 */

loc_0049CFA6: ;
    esp = ebp;
    POP32(esp, ebp); /* leave */
    esp += 4; return; /* ret */

}

/**
 * sub_0049CFA8
 * Original: 0x0049CFA8 - 0x0049CFDE (54 bytes, 21 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0049CFA8(void)
{
    uint32_t ebp;
    int _flags = 0; /* fallback flag var */

loc_0049CFA8: ;
    PUSH32(esp, ebp);
    ebp = esp;
    PUSH32(esp, ecx);
    ecx = MEM32(0x75F024);
    MEM32(ebp + -4) = MEM32(ebp + -4) & 0;
    PUSH32(esp, edi);
    PUSH32(esp, MEM32(ebp + 0xC));
    eax = ebp + -4;
    PUSH32(esp, eax);
    PUSH32(esp, MEM32(ebp + 8));
    PUSH32(esp, 0); sub_0048FE0D(); /* call 0x0048FE0D */

loc_0049CFC6: ;
    (void)0; /* cmp MEM32(ebp + -4), 0 - flags set for next jcc */
    edi = eax;
    if (CMP_EQ(MEM32(ebp + -4), 0)) goto loc_0049CFD7; /* je: equal / zero */

loc_0049CFCE: ;
    PUSH32(esp, 0);
    PUSH32(esp, 1);
    PUSH32(esp, 0); sub_0049CEB9(); /* call 0x0049CEB9 */

loc_0049CFD7: ;
    eax = edi;
    POP32(esp, edi);
    esp = ebp;
    POP32(esp, ebp); /* leave */
    esp += 12; return; /* ret 8 */

}

/**
 * sub_0049CFDE
 * Original: 0x0049CFDE - 0x0049CFF0 (18 bytes, 5 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0049CFDE(void)
{

loc_0049CFDE: ;
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, 0); RECOMP_ICALL_SAFE(MEM32(0x5611DC), _icall_esp); /* indirect call */
    }

loc_0049CFE4: ;
    ecx = MEM32(esp + 4);
    MEM32(ecx) = eax;
    MEM32(ecx + 4) = edx;
    esp += 8; return; /* ret 4 */

}

/**
 * sub_0049CFF0
 * Original: 0x0049CFF0 - 0x0049D01F (47 bytes, 19 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0049CFF0(void)
{

loc_0049CFF0: ;
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, esi);
    PUSH32(esp, edi);
    PUSH32(esp, 0); RECOMP_ICALL_SAFE(MEM32(0x5611E0), _icall_esp); /* indirect call */
    }

loc_0049CFF8: ;
    PUSH32(esp, 0);
    esi = eax;
    eax = MEM32(esp + 0x10);
    PUSH32(esp, 0xF4240);
    PUSH32(esp, MEM32(eax + 4));
    edi = edx;
    PUSH32(esp, MEM32(eax));
    PUSH32(esp, 0); sub_00470A00(); /* call 0x00470A00 */

loc_0049D011: ;
    PUSH32(esp, edi);
    PUSH32(esp, esi);
    PUSH32(esp, edx);
    PUSH32(esp, eax);
    PUSH32(esp, 0); sub_00470D50(); /* call 0x00470D50 */

loc_0049D01A: ;
    POP32(esp, edi);
    POP32(esp, esi);
    esp += 8; return; /* ret 4 */

}

/**
 * sub_0049D01F
 * Original: 0x0049D01F - 0x0049D04E (47 bytes, 22 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0049D01F(void)
{
    int _flags = 0; /* fallback flag var */

loc_0049D01F: ;
    edx = MEM32(esp + 8);
    eax = ecx;
    if (CMP_B(MEM32(eax + 4), edx)) goto loc_0049D04B; /* jb: below (unsigned <) */

loc_0049D02A: ;
    PUSH32(esp, ebx);
    PUSH32(esp, esi);
    esi = MEM32(esp + 0xC);
    PUSH32(esp, edi);
    edi = MEM32(eax);
    ecx = edx;
    ebx = ecx;
    ecx = ecx >> 2;
    memcpy((void*)XBOX_PTR(edi), (void*)XBOX_PTR(esi), ecx * 4);
    esi += ecx * 4; edi += ecx * 4; ecx = 0; /* rep movsd */
    ecx = ebx;
    ecx = ecx & 3;
    memcpy((void*)XBOX_PTR(edi), (void*)XBOX_PTR(esi), ecx);
    esi += ecx; edi += ecx; ecx = 0; /* rep movsb */
    MEM32(eax) = MEM32(eax) + edx;
    MEM32(eax + 4) = MEM32(eax + 4) - edx;
    POP32(esp, edi);
    POP32(esp, esi);
    POP32(esp, ebx);

loc_0049D04B: ;
    esp += 12; return; /* ret 8 */

}

/**
 * sub_0049D04E
 * Original: 0x0049D04E - 0x0049D07E (48 bytes, 22 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0049D04E(void)
{
    uint32_t ebp;
    int _flags = 0; /* fallback flag var */

loc_0049D04E: ;
    PUSH32(esp, ebp);
    ebp = esp;
    esp = esp - 0xC;
    PUSH32(esp, esi);
    PUSH32(esp, edi);
    edi = ecx;
    MEM32(ebp + -8) = edi;

loc_0049D05B: ;
    esi = MEM32(edi);
    eax = esi;
    eax = eax | MEM32(ebp + 8);
    MEM32(ebp + -12) = esi;
    MEM32(ebp + -4) = eax;
    eax = MEM32(ebp + -12);
    ecx = MEM32(ebp + -8);
    edx = MEM32(ebp + -4);
    /* TODO: cmpxchg dword ptr [ecx], edx */
    if (CMP_NE(eax, esi)) goto loc_0049D05B; /* jne: not equal / not zero */

loc_0049D078: ;
    POP32(esp, edi);
    POP32(esp, esi);
    esp = ebp;
    POP32(esp, ebp); /* leave */
    esp += 8; return; /* ret 4 */

}

/**
 * sub_0049D07E
 * Original: 0x0049D07E - 0x0049D1CE (336 bytes, 114 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0049D07E(void)
{
    uint32_t ebp;
    int _flags = 0; /* fallback flag var */

loc_0049D07E: ;
    PUSH32(esp, ebp);
    ebp = esp;
    esp = esp - 0x158;
    eax = MEM32(ebp + 8);
    MEM32(ebp + -16) = MEM32(ebp + -16) & 0;
    MEM32(ebp + -12) = MEM32(ebp + -12) & 0;
    MEM32(ebp + -8) = eax;
    eax = MEM32(0x561018);
    eax = MEM32(eax);
    PUSH32(esp, esi);
    esi = MEM32(ebp + 0xC);
    MEM32(ebp + 8) = eax;
    PUSH32(esp, 4);
    eax = ebp + 8;
    PUSH32(esp, eax);
    ecx = ebp + -8;
    MEM32(ebp + -4) = esi;
    PUSH32(esp, 0); sub_0049D01F(); /* call 0x0049D01F */

loc_0049D0B4: ;
    eax = ebp + -44;
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, eax);
    PUSH32(esp, 0); RECOMP_ICALL_SAFE(MEM32(0x561010), _icall_esp); /* indirect call */
    }

loc_0049D0BE: ;
    PUSH32(esp, 8);
    eax = ebp + -44;
    PUSH32(esp, eax);
    ecx = ebp + -8;
    PUSH32(esp, 0); sub_0049D01F(); /* call 0x0049D01F */

loc_0049D0CC: ;
    eax = ebp + -16;
    PUSH32(esp, eax);
    PUSH32(esp, 0); sub_0049CFDE(); /* call 0x0049CFDE */

loc_0049D0D5: ;
    eax = MEM32(ebp + -12);
    eax = eax ^ MEM32(ebp + -16);
    PUSH32(esp, 4);
    MEM32(ebp + 8) = eax;
    eax = ebp + 8;
    PUSH32(esp, eax);
    ecx = ebp + -8;
    PUSH32(esp, 0); sub_0049D01F(); /* call 0x0049D01F */

loc_0049D0EC: ;
    eax = ebp + -88;
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, eax);
    PUSH32(esp, 0); RECOMP_ICALL_SAFE(MEM32(0x561124), _icall_esp); /* indirect call */
    }

loc_0049D0F6: ;
    eax = MEM32(ebp + -80);
    MEM32(ebp + 8) = eax;
    PUSH32(esp, 2);
    eax = ebp + 8;
    PUSH32(esp, eax);
    ecx = ebp + -8;
    PUSH32(esp, 0); sub_0049D01F(); /* call 0x0049D01F */

loc_0049D10A: ;
    eax = MEM32(ebp + -64);
    MEM32(ebp + 8) = eax;
    PUSH32(esp, 2);
    eax = ebp + 8;
    PUSH32(esp, eax);
    ecx = ebp + -8;
    PUSH32(esp, 0); sub_0049D01F(); /* call 0x0049D01F */

loc_0049D11E: ;
    SET_LO8(eax, MEM8(ebp + -71));
    MEM8(ebp + 0xB) = LO8(eax);
    PUSH32(esp, 1);
    eax = ebp + 0xB;
    PUSH32(esp, eax);
    ecx = ebp + -8;
    PUSH32(esp, 0); sub_0049D01F(); /* call 0x0049D01F */

loc_0049D132: ;
    eax = ebp + -32;
    PUSH32(esp, eax);
    eax = ebp + -52;
    PUSH32(esp, eax);
    eax = ebp + -24;
    PUSH32(esp, eax);
    PUSH32(esp, 0x4A02F4);
    PUSH32(esp, 0); sub_0042C94C(); /* call 0x0042C94C */

loc_0049D148: ;
    if (TEST_Z(eax, eax)) goto loc_0049D168; /* je: equal / zero */

loc_0049D14C: ;
    PUSH32(esp, 8);
    eax = ebp + -24;
    PUSH32(esp, eax);
    ecx = ebp + -8;
    PUSH32(esp, 0); sub_0049D01F(); /* call 0x0049D01F */

loc_0049D15A: ;
    PUSH32(esp, 8);
    eax = ebp + -32;
    PUSH32(esp, eax);
    ecx = ebp + -8;
    PUSH32(esp, 0); sub_0049D01F(); /* call 0x0049D01F */

loc_0049D168: ;
    eax = ebp + 0xC;
    PUSH32(esp, eax);
    PUSH32(esp, 0x100);
    eax = ebp + -344;
    PUSH32(esp, eax);
    eax = ebp + -36;
    PUSH32(esp, eax);
    PUSH32(esp, 0xFFFF);
    PUSH32(esp, 0); sub_0046DA64(); /* call 0x0046DA64 */

loc_0049D186: ;
    if (TEST_S(eax, eax)) goto loc_0049D19C; /* jl: less (signed <) */

loc_0049D18A: ;
    PUSH32(esp, MEM32(ebp + 0xC));
    eax = ebp + -344;
    PUSH32(esp, eax);
    ecx = ebp + -8;
    PUSH32(esp, 0); sub_0049D01F(); /* call 0x0049D01F */

loc_0049D19C: ;
    eax = MEM32(0x5611E8);
    ecx = ZX16(MEM16(eax));
    PUSH32(esp, ecx);
    PUSH32(esp, MEM32(eax + 4));
    ecx = ebp + -8;
    PUSH32(esp, 0); sub_0049D01F(); /* call 0x0049D01F */

loc_0049D1B0: ;
    eax = MEM32(0x5611E4);
    ecx = ZX16(MEM16(eax));
    PUSH32(esp, ecx);
    PUSH32(esp, MEM32(eax + 4));
    ecx = ebp + -8;
    PUSH32(esp, 0); sub_0049D01F(); /* call 0x0049D01F */

loc_0049D1C4: ;
    eax = esi;
    eax = eax - MEM32(ebp + -4);
    POP32(esp, esi);
    esp = ebp;
    POP32(esp, ebp); /* leave */
    esp += 12; return; /* ret 8 */

}

/**
 * sub_0049D1CE
 * Original: 0x0049D1CE - 0x0049D232 (100 bytes, 40 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0049D1CE(void)
{
    uint32_t ebp;
    int _flags = 0; /* fallback flag var */

loc_0049D1CE: ;
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, ebp);
    ebp = esp;
    PUSH32(esp, ecx);
    PUSH32(esp, ebx);
    PUSH32(esp, esi);
    PUSH32(esp, edi);
    ebx = ecx;
    PUSH32(esp, 0); RECOMP_ICALL_SAFE(MEM32(0x5610F0), _icall_esp); /* indirect call */
    }

loc_0049D1DD: ;
    (void)0; /* test MEM8(ebp + 0xC), 0x10 - flags set for next jcc */
    esi = MEM32(ebp + 8);
    MEM8(ebp + -4) = LO8(eax);
    edi = 0x8007274Au;
    if (TEST_Z(MEM8(ebp + 0xC), 0x10)) goto loc_0049D202; /* je: equal / zero */

loc_0049D1EE: ;
    PUSH32(esp, edi);
    PUSH32(esp, MEM32(esi + 0x20));
    ecx = ebx;
    PUSH32(esp, esi);
    PUSH32(esp, 0); sub_0049B606(); /* call 0x0049B606 */

loc_0049D1FA: ;
    PUSH32(esp, esi);
    ecx = ebx;
    PUSH32(esp, 0); sub_0049ADE8(); /* call 0x0049ADE8 */

loc_0049D202: ;
    if (TEST_Z(MEM8(ebp + 0xC), 8)) goto loc_0049D214; /* je: equal / zero */

loc_0049D208: ;
    PUSH32(esp, edi);
    PUSH32(esp, MEM32(esi + 0x30));
    ecx = ebx;
    PUSH32(esp, esi);
    PUSH32(esp, 0); sub_0049B606(); /* call 0x0049B606 */

loc_0049D214: ;
    PUSH32(esp, MEM32(ebp + 0xC));
    ecx = esi;
    PUSH32(esp, 0xFFFFFFFFu);
    PUSH32(esp, 0); sub_0049AD6C(); /* call 0x0049AD6C */

loc_0049D220: ;
    SET_LO8(ecx, MEM8(ebp + -4));
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, 0); RECOMP_ICALL_SAFE(MEM32(0x5610E8), _icall_esp); /* indirect call */
    }

loc_0049D229: ;
    POP32(esp, edi);
    POP32(esp, esi);
    eax = 0; /* xor self */
    POP32(esp, ebx);
    esp = ebp;
    POP32(esp, ebp); /* leave */
    esp += 12; return; /* ret 8 */

}

/**
 * sub_0049D232
 * Original: 0x0049D232 - 0x0049D26C (58 bytes, 23 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0049D232(void)
{
    uint32_t ebp;
    int _flags = 0; /* fallback flag var */

loc_0049D232: ;
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, ebp);
    ebp = esp;
    PUSH32(esp, ecx);
    PUSH32(esp, ecx);
    PUSH32(esp, ebx);
    PUSH32(esp, esi);
    MEM32(ebp + -8) = ecx;
    PUSH32(esp, 0); RECOMP_ICALL_SAFE(MEM32(0x5610F0), _icall_esp); /* indirect call */
    }

loc_0049D242: ;
    edx = MEM32(ebp + 8);
    MEM8(ebp + -4) = LO8(eax);
    eax = edx + 0x24;
    ebx = MEM32(eax);
    if (CMP_NE(ebx, eax)) { sub_0049D26C(); return; } /* jne: not equal / not zero */

loc_0049D251: ;
    PUSH32(esp, MEM32(ebp + 0xC));
    ecx = MEM32(ebp + -8);
    PUSH32(esp, edx);
    PUSH32(esp, 0); sub_0049B2D6(); /* call 0x0049B2D6 */

loc_0049D25D: ;
    SET_LO8(ecx, MEM8(ebp + -4));
    esi = eax;
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, 0); RECOMP_ICALL_SAFE(MEM32(0x5610E8), _icall_esp); /* indirect call */
    }

loc_0049D268: ;
    eax = esi;
    g_seh_ebp = ebp; sub_0049D2EB(); return; /* tail jmp 0x0049D2EB */

}

/**
 * sub_0049D2F1
 * Original: 0x0049D2F1 - 0x0049D31D (44 bytes, 17 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0049D2F1(void)
{
    uint32_t ebp;
    int _flags = 0; /* fallback flag var */

loc_0049D2F1: ;
    PUSH32(esp, ebp);
    ebp = esp;
    esp = esp - 0x24;
    PUSH32(esp, esi);
    esi = MEM32(ebp + 8);
    PUSH32(esp, edi);
    edi = MEM32(ebp + 0xC);
    eax = MEM32(edi + 0x14);
    (void)0; /* test eax, eax - flags set for next jcc */
    MEM32(ebp + -28) = ecx;
    if (TEST_Z(eax, eax)) { sub_0049D31D(); return; } /* je: equal / zero */

loc_0049D309: ;
    edx = MEM32(eax + 4);
    SET_LO16(eax, MEM16(eax + 2));
    MEM32(ebp + -24) = MEM32(ebp + -24) & 0;
    MEM32(ebp + -12) = edx;
    MEM16(ebp + -20) = LO16(eax);
    g_seh_ebp = ebp; sub_0049D331(); return; /* tail jmp 0x0049D331 */

}

/**
 * sub_0049D55B
 * Original: 0x0049D55B - 0x0049D5B8 (93 bytes, 39 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0049D55B(void)
{
    uint32_t ebp;
    int _flags = 0; /* fallback flag var */

loc_0049D55B: ;
    PUSH32(esp, ebp);
    ebp = esp;
    PUSH32(esp, ecx);
    PUSH32(esp, ebx);
    ebx = MEM32(ebp + 0xC);
    PUSH32(esp, esi);
    PUSH32(esp, edi);
    edi = 0; /* xor self */
    (void)0; /* cmp ebx, edi - flags set for next jcc */
    MEM32(ebp + -4) = ecx;
    if (CMP_NE(ebx, edi)) goto loc_0049D580; /* jne: not equal / not zero */

loc_0049D56E: ;
    if (CMP_EQ(MEM16(ebp + 0x10), LO16(edi))) goto loc_0049D586; /* je: equal / zero */

loc_0049D574: ;
    eax = 0x80072741u;

loc_0049D579: ;
    POP32(esp, edi);
    POP32(esp, esi);
    POP32(esp, ebx);
    esp = ebp;
    POP32(esp, ebp); /* leave */
    esp += 16; return; /* ret 12 */

loc_0049D580: ;
    if (CMP_EQ(MEM16(ebp + 0x10), LO16(edi))) goto loc_0049D574; /* je: equal / zero */

loc_0049D586: ;
    eax = ebx;
    SET_LO16(eax, LO16(eax) & 0xF0);
    if (CMP_NE(LO8(eax), 0xE0)) goto loc_0049D595; /* jne: not equal / not zero */

loc_0049D590: ;
    if (CMP_NE(ebx, 0xFFFFFFFFu)) goto loc_0049D574; /* jne: not equal / not zero */

loc_0049D595: ;
    if (CMP_NE(LO8(ebx), 0x7F)) goto loc_0049D5A2; /* jne: not equal / not zero */

loc_0049D59A: ;
    if (CMP_NE(ebx, 0x100007F)) goto loc_0049D574; /* jne: not equal / not zero */

loc_0049D5A2: ;
    esi = MEM32(ebp + 8);
    if (CMP_NE(ebx, MEM32(esi + 0x44))) { sub_0049D5B8(); return; } /* jne: not equal / not zero */

loc_0049D5AA: ;
    SET_LO16(eax, MEM16(ebp + 0x10));
    if (CMP_NE(LO16(eax), MEM16(esi + 0x48))) { sub_0049D5B8(); return; } /* jne: not equal / not zero */

loc_0049D5B4: ;
    eax = 0; /* xor self */
    goto loc_0049D579;

}

/**
 * sub_0049D64F
 * Original: 0x0049D64F - 0x0049D697 (72 bytes, 25 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0049D64F(void)
{
    uint32_t ebp;
    int _flags = 0; /* fallback flag var */

loc_0049D64F: ;
    PUSH32(esp, ebp);
    ebp = esp;
    esp = esp - 0x1C;
    PUSH32(esp, ebx);
    ebx = MEM32(ebp + 0x18);
    MEM32(ebp + -4) = ecx;
    ecx = 0; /* xor self */
    (void)0; /* cmp MEM32(ebp + 0x24), ecx - flags set for next jcc */
    PUSH32(esp, esi);
    PUSH32(esp, edi);
    if (CMP_EQ(MEM32(ebp + 0x24), ecx)) { sub_0049D697(); return; } /* je: equal / zero */

loc_0049D665: ;
    eax = ebp + 0x18;
    MEM32(ebp + -24) = eax;
    eax = MEM32(ebp + 0x14);
    MEM32(ebp + -16) = eax;
    eax = MEM32(ebp + 0x1C);
    MEM32(ebp + -8) = eax;
    eax = MEM32(ebp + 0x20);
    MEM32(ebp + 0x18) = ebx;
    MEM32(ebp + -20) = ebx;
    MEM32(ebp + -28) = 2;
    MEM32(ebp + -12) = eax;
    MEM32(ebp + 0x14) = 3;
    ebx = ebx + eax + 2;
    g_seh_ebp = ebp; sub_0049D6A7(); return; /* tail jmp 0x0049D6A7 */

}

/**
 * sub_0049D78F
 * Original: 0x0049D78F - 0x0049D812 (131 bytes, 54 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0049D78F(void)
{
    uint32_t ebp;
    int _flags = 0; /* fallback flag var */

loc_0049D78F: ;
    PUSH32(esp, ebp);
    ebp = esp;
    PUSH32(esp, ecx);
    PUSH32(esp, edi);
    edi = MEM32(ebp + 8);
    MEM32(edi + 0x24) = MEM32(edi + 0x24) - 1;
    eax = MEM32(edi + 0x24);
    (void)0; /* test eax, eax - flags set for next jcc */
    MEM32(ebp + -4) = ecx;
    if (CMP_LE(eax & eax, 0)) goto loc_0049D804; /* jle: less or equal (signed <=) */

loc_0049D7A4: ;
    eax = MEM32(edi + 0x14);
    ecx = MEM32(edi + 0x18);
    PUSH32(esp, esi);
    esi = MEM32(edi + 0x1C);
    MEM32(ecx) = eax;
    MEM32(eax + 4) = ecx;
    eax = MEM32(edi + 0x20);
    MEM32(esi + 0x3C) = MEM32(esi + 0x3C) - eax;
    eax = MEM32(esi + 0x3C);
    if (CMP_AE(eax, MEM32(esi + 0x58))) goto loc_0049D803; /* jae: above or equal (unsigned >=) */

loc_0049D7C1: ;
    PUSH32(esp, ebx);
    ebx = MEM32(esi + 0x30);
    if (TEST_Z(ebx, ebx)) goto loc_0049D7EE; /* je: equal / zero */

loc_0049D7C9: ;
    ecx = MEM32(ebp + -4);
    PUSH32(esp, 0x40000);
    PUSH32(esp, ebx);
    PUSH32(esp, esi);
    PUSH32(esp, 0); sub_0049D2F1(); /* call 0x0049D2F1 */

loc_0049D7D8: ;
    ecx = MEM32(ebx + 4);
    edx = MEM32(ebx + 0x10);
    PUSH32(esp, eax);
    PUSH32(esp, ebx);
    MEM32(ecx + 8) = edx;
    ecx = MEM32(ebp + -4);
    PUSH32(esp, esi);
    PUSH32(esp, 0); sub_0049B606(); /* call 0x0049B606 */

loc_0049D7EC: ;
    goto loc_0049D802;

loc_0049D7EE: ;
    if (TEST_Z(MEM8(esi + 0xD), 0x10)) goto loc_0049D802; /* je: equal / zero */

loc_0049D7F4: ;
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, 0);
    PUSH32(esp, 1);
    esi = esi + 0x10;
    PUSH32(esp, esi);
    PUSH32(esp, 0); RECOMP_ICALL_SAFE(MEM32(0x56114C), _icall_esp); /* indirect call */
    }

loc_0049D802: ;
    POP32(esp, ebx);

loc_0049D803: ;
    POP32(esp, esi);

loc_0049D804: ;
    ecx = MEM32(ebp + -4);
    PUSH32(esp, edi);
    PUSH32(esp, 0); sub_00493441(); /* call 0x00493441 */

loc_0049D80D: ;
    POP32(esp, edi);
    esp = ebp;
    POP32(esp, ebp); /* leave */
    esp += 8; return; /* ret 4 */

}

/**
 * sub_0049D812
 * Original: 0x0049D812 - 0x0049D94B (313 bytes, 124 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0049D812(void)
{
    uint32_t ebp;
    int _flags = 0; /* fallback flag var */
    int _cf = 0; /* carry flag */

loc_0049D812: ;
    PUSH32(esp, ebp);
    ebp = esp;
    PUSH32(esp, ecx);
    eax = MEM32(ebp + 0xC);
    MEM32(ebp + 0xC) = MEM32(ebp + 0xC) & 0;
    PUSH32(esp, ebx);
    ebx = MEM32(eax + 0xC);
    PUSH32(esp, esi);
    PUSH32(esp, edi);
    edi = MEM32(ebp + 8);
    edx = ecx;
    ecx = MEM32(eax + 0x10);
    eax = MEM32(edi + 8);
    eax = eax & 7;
    SET_LO8(eax, LO8(eax) - 7);
    SET_LO8(eax, (uint32_t)(-(int32_t)LO8(eax)));
    MEM32(ebp + -4) = edx;
    eax = _cf ? 0xFFFFFFFF : 0; /* sbb self (CF extend) */
    eax++;
    (void)0; /* cmp ecx, 0xFFFFFFFFu - flags set for next jcc */
    esi = eax;
    if (CMP_NE(ecx, 0xFFFFFFFFu)) goto loc_0049D8DF; /* jne: not equal / not zero */

loc_0049D846: ;
    ecx = edx + 0xD38;
    eax = MEM32(ecx);
    esi = eax;
    esi = esi - ecx;
    esi = (uint32_t)(-(int32_t)esi);
    esi = _cf ? 0xFFFFFFFF : 0; /* sbb self (CF extend) */
    esi = esi & eax;
    if ((esi == 0)) goto loc_0049D944; /* je: equal / zero */

loc_0049D85E: ;
    ecx = MEM32(esi + 0xC);
    eax = ecx;
    SET_LO8(eax, LO8(eax) & 0x36);
    if (CMP_NE(LO8(eax), 0x20)) goto loc_0049D8C7; /* jne: not equal / not zero */

loc_0049D869: ;
    SET_LO16(eax, MEM16(esi + 0x4A));
    if (CMP_NE(LO16(eax), MEM16(ebp + 0x14))) goto loc_0049D8C7; /* jne: not equal / not zero */

loc_0049D873: ;
    eax = MEM32(esi + 0x44);
    if (CMP_EQ(eax, ebx)) goto loc_0049D87E; /* je: equal / zero */

loc_0049D87A: ;
    if (TEST_NZ(eax, eax)) goto loc_0049D8C7; /* jne: not equal / not zero */

loc_0049D87E: ;
    SET_LO16(eax, MEM16(esi + 0x48));
    if (CMP_EQ(LO16(eax), MEM16(ebp + 0x10))) goto loc_0049D88D; /* je: equal / zero */

loc_0049D888: ;
    if (TEST_NZ(LO16(eax), LO16(eax))) goto loc_0049D8C7; /* jne: not equal / not zero */

loc_0049D88D: ;
    if (TEST_Z(ecx, 0x20000)) goto loc_0049D8C7; /* je: equal / zero */

loc_0049D895: ;
    eax = MEM32(edi + 8);
    SET_LO8(eax, LO8(eax) & 7);
    if (CMP_AE(LO8(eax), 4)) goto loc_0049D8A6; /* jae: above or equal (unsigned >=) */

loc_0049D89E: ;
    if (TEST_Z(ecx, 0x2000000)) goto loc_0049D8C7; /* je: equal / zero */

loc_0049D8A6: ;
    eax = 0; /* xor self */
    PUSH32(esp, eax);
    PUSH32(esp, eax);
    PUSH32(esp, eax);
    PUSH32(esp, MEM32(ebp + 0x1C));
    ecx = edx;
    PUSH32(esp, MEM32(ebp + 0x18));
    PUSH32(esp, MEM32(ebp + 0x10));
    PUSH32(esp, ebx);
    PUSH32(esp, esi);
    PUSH32(esp, 0); sub_0049D64F(); /* call 0x0049D64F */

loc_0049D8BD: ;
    edx = MEM32(ebp + -4);
    MEM32(ebp + 0xC) = 1;

loc_0049D8C7: ;
    esi = MEM32(esi);
    ecx = esi;
    eax = edx + 0xD38;
    ecx = ecx - eax;
    ecx = (uint32_t)(-(int32_t)ecx);
    ecx = _cf ? 0xFFFFFFFF : 0; /* sbb self (CF extend) */
    ecx = ecx & esi;
    esi = ecx;
    if ((ecx != 0)) goto loc_0049D85E; /* jne: not equal / not zero */

loc_0049D8DD: ;
    goto loc_0049D944;

loc_0049D8DF: ;
    PUSH32(esp, 0);
    PUSH32(esp, 2);
    PUSH32(esp, MEM32(ebp + 0x10));
    ecx = edx;
    PUSH32(esp, ebx);
    PUSH32(esp, MEM32(ebp + 0x14));
    PUSH32(esp, 0); sub_0049C2A8(); /* call 0x0049C2A8 */

loc_0049D8F1: ;
    ecx = MEM32(edi + 8);
    edx = ecx;
    SET_LO8(edx, LO8(edx) & 7);
    if (CMP_AE(LO8(edx), 4)) goto loc_0049D910; /* jae: above or equal (unsigned >=) */

loc_0049D8FE: ;
    edx = 0x2000000;
    if (TEST_NZ(edx, ecx)) goto loc_0049D910; /* jne: not equal / not zero */

loc_0049D907: ;
    if (TEST_Z(eax, eax)) goto loc_0049D944; /* je: equal / zero */

loc_0049D90B: ;
    if (TEST_Z(MEM32(eax + 0xC), edx)) goto loc_0049D944; /* je: equal / zero */

loc_0049D910: ;
    if (TEST_Z(eax, eax)) goto loc_0049D944; /* je: equal / zero */

loc_0049D914: ;
    ecx = MEM32(eax + 0xC);
    if (TEST_Z(LO8(ecx), 0x20)) goto loc_0049D944; /* je: equal / zero */

loc_0049D91C: ;
    if (TEST_NZ(LO8(ecx), 0x10)) goto loc_0049D944; /* jne: not equal / not zero */

loc_0049D921: ;
    if (TEST_NZ(LO8(ecx), 4)) goto loc_0049D92A; /* jne: not equal / not zero */

loc_0049D926: ;
    if (TEST_NZ(esi, esi)) goto loc_0049D944; /* jne: not equal / not zero */

loc_0049D92A: ;
    ecx = MEM32(ebp + -4);
    PUSH32(esp, esi);
    PUSH32(esp, MEM32(ebp + 0x24));
    PUSH32(esp, MEM32(ebp + 0x20));
    PUSH32(esp, MEM32(ebp + 0x1C));
    PUSH32(esp, MEM32(ebp + 0x18));
    PUSH32(esp, MEM32(ebp + 0x10));
    PUSH32(esp, ebx);
    PUSH32(esp, eax);
    PUSH32(esp, 0); sub_0049D64F(); /* call 0x0049D64F */

loc_0049D944: ;
    POP32(esp, edi);
    POP32(esp, esi);
    POP32(esp, ebx);
    esp = ebp;
    POP32(esp, ebp); /* leave */
    esp += 36; return; /* ret 32 */

}

/**
 * sub_0049D94B
 * Original: 0x0049D94B - 0x0049D96D (34 bytes, 13 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0049D94B(void)
{
    uint32_t ebp;
    int _flags = 0; /* fallback flag var */

loc_0049D94B: ;
    PUSH32(esp, ebp);
    ebp = esp;
    eax = MEM32(ebp + 8);
    ecx = eax + 0xC4;
    edx = MEM32(ecx);
    eax = MEM32(eax + 0xC8);
    PUSH32(esp, esi);
    esi = MEM32(ebp + 0xC);
    eax = eax + edx;
    esi = esi - edx;
    if (((int32_t)esi >= 0)) { sub_0049D96D(); return; } /* jns: not sign (positive) */

loc_0049D969: ;
    ecx = edx;
    g_seh_ebp = ebp; sub_0049D970(); return; /* tail jmp 0x0049D970 */

}

/**
 * sub_0049D9A4
 * Original: 0x0049D9A4 - 0x0049D9BB (23 bytes, 8 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0049D9A4(void)
{
    uint32_t ebp;
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_0049D9A4: ;
    eax = MEM32(esp + 4);
    PUSH32(esp, ebx);
    ebx = MEM32(esp + 0xC);
    PUSH32(esp, esi);
    esi = MEM32(esp + 0x14);
    PUSH32(esp, edi);
    MEM32(esi) = 0x200;
    g_seh_ebp = ebp; sub_0049DA06(); return; /* tail jmp 0x0049DA06 */

}

/**
 * sub_0049DA17
 * Original: 0x0049DA17 - 0x0049DA3B (36 bytes, 15 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0049DA17(void)
{

loc_0049DA17: ;
    edx = MEM32(esp + 4);
    PUSH32(esp, esi);
    eax = edx + 0x64;
    esi = MEM32(eax);
    PUSH32(esp, edi);
    edi = MEM32(edx + 0x68);
    MEM32(edi) = esi;
    MEM32(esi + 4) = edi;
    MEM32(edx + 0x60) = MEM32(edx + 0x60) & 0;
    POP32(esp, edi);
    MEM32(edx + 0x68) = eax;
    MEM32(eax) = eax;
    MEM8(ecx + 0x7D) = MEM8(ecx + 0x7D) - 1;
    POP32(esp, esi);
    esp += 8; return; /* ret 4 */

}

/**
 * sub_0049DA3B
 * Original: 0x0049DA3B - 0x0049DA53 (24 bytes, 9 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0049DA3B(void)
{
    uint32_t ebp;
    int _flags = 0; /* fallback flag var */
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_0049DA3B: ;
    eax = MEM32(esp + 8);
    if (TEST_NZ(eax, eax)) { sub_0049DA53(); return; } /* jne: not equal / not zero */

loc_0049DA43: ;
    eax = ecx + 0x24;
    edx = MEM32(eax);
    ecx = MEM32(esp + 4);
    MEM32(ecx) = edx;
    MEM32(ecx + 4) = eax;
    g_seh_ebp = ebp; sub_0049DA60(); return; /* tail jmp 0x0049DA60 */

}

/**
 * sub_0049DA68
 * Original: 0x0049DA68 - 0x0049DA8E (38 bytes, 11 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0049DA68(void)
{
    uint32_t ebp;
    int _flags = 0; /* fallback flag var */
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_0049DA68: ;
    eax = MEM32(esp + 4);
    ecx = MEM32(eax + 0xB0);
    ecx = ecx + MEM32(eax + 0xAC);
    if (CMP_B(MEM8(eax + 0x7C), 4)) { sub_0049DA8E(); return; } /* jb: below (unsigned <) */

loc_0049DA7E: ;
    edx = MEM32(eax + 0xA0);
    edx = edx - ecx;
    if (CMP_LE(edx & edx, 0)) { sub_0049DA8E(); return; } /* jle: less or equal (signed <=) */

loc_0049DA8A: ;
    eax = ecx;
    g_seh_ebp = ebp; sub_0049DA94(); return; /* tail jmp 0x0049DA94 */

}

/**
 * sub_0049DA97
 * Original: 0x0049DA97 - 0x0049DAC9 (50 bytes, 15 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0049DA97(void)
{
    uint32_t ebp;
    int _flags = 0; /* fallback flag var */
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_0049DA97: ;
    eax = MEM32(esp + 4);
    ecx = MEM32(eax + 0x5C);
    ecx = ecx - MEM32(eax + 0x2C);
    edx = MEM32(eax + 0xC8);
    PUSH32(esp, esi);
    esi = MEM32(esp + 0xC);
    MEM32(eax + 0xC4) = MEM32(eax + 0xC4) + esi;
    PUSH32(esp, edi);
    edi = ecx;
    edi = edi - edx;
    edi = edi + esi;
    if (CMP_B(edi, MEM32(eax + 0xD0))) { sub_0049DAC9(); return; } /* jb: below (unsigned <) */

loc_0049DAC1: ;
    MEM32(eax + 0xC8) = ecx;
    g_seh_ebp = ebp; sub_0049DAD1(); return; /* tail jmp 0x0049DAD1 */

}

/**
 * sub_0049DAD6
 * Original: 0x0049DAD6 - 0x0049DB91 (187 bytes, 60 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0049DAD6(void)
{
    int _flags = 0; /* fallback flag var */

loc_0049DAD6: ;
    eax = MEM32(esp + 4);
    edx = MEM32(ecx + 0x1D8);
    PUSH32(esp, esi);
    esi = eax + 0xE4;
    edx = edx - MEM32(esi);
    MEM32(esi) = MEM32(esi) & 0;
    esi = MEM32(eax + 0xD4);
    (void)0; /* test esi, esi - flags set for next jcc */
    PUSH32(esp, edi);
    if (TEST_Z(esi, esi)) goto loc_0049DB3E; /* je: equal / zero */

loc_0049DAF7: ;
    esi = (uint32_t)((int32_t)esi >> 3);
    edx = edx - esi;
    MEM32(eax + 0xD4) = MEM32(eax + 0xD4) + edx;
    esi = MEM32(eax + 0xD4);
    edi = 0; /* xor self */
    edi++;
    if (CMP_G(esi & esi, 0)) goto loc_0049DB15; /* jg: greater (signed >) */

loc_0049DB0F: ;
    MEM32(eax + 0xD4) = edi;

loc_0049DB15: ;
    if (CMP_GE(edx & edx, 0)) goto loc_0049DB1B; /* jge: greater or equal (signed >=) */

loc_0049DB19: ;
    edx = (uint32_t)(-(int32_t)edx);

loc_0049DB1B: ;
    esi = MEM32(eax + 0xD8);
    PUSH32(esp, ebx);
    ebx = esi;
    ebx = (uint32_t)((int32_t)ebx >> 2);
    esi = esi - ebx;
    edx = edx + esi;
    (void)0; /* test edx, edx - flags set for next jcc */
    MEM32(eax + 0xD8) = edx;
    POP32(esp, ebx);
    if (CMP_G(edx & edx, 0)) goto loc_0049DB66; /* jg: greater (signed >) */

loc_0049DB36: ;
    MEM32(eax + 0xD8) = edi;
    goto loc_0049DB66;

loc_0049DB3E: ;
    if (TEST_NZ(edx, edx)) goto loc_0049DB53; /* jne: not equal / not zero */

loc_0049DB42: ;
    edi = 0; /* xor self */
    edi++;
    MEM32(eax + 0xD8) = edi;
    MEM32(eax + 0xD4) = edi;
    goto loc_0049DB66;

loc_0049DB53: ;
    esi = edx;
    esi = esi << 3;
    edx = edx + edx;
    MEM32(eax + 0xD4) = esi;
    MEM32(eax + 0xD8) = edx;

loc_0049DB66: ;
    edx = MEM32(eax + 0xD4);
    esi = MEM32(eax + 0xD8);
    edx = (uint32_t)((int32_t)edx >> 3);
    edx = edx + esi;
    esi = eax + 0xDC;
    MEM32(esi) = edx;
    eax = ZX8(MEM8(ecx + 0x39));
    eax = eax + eax * 4;
    if (CMP_AE(edx, eax)) goto loc_0049DB8C; /* jae: above or equal (unsigned >=) */

loc_0049DB8A: ;
    MEM32(esi) = eax;

loc_0049DB8C: ;
    POP32(esp, edi);
    POP32(esp, esi);
    esp += 8; return; /* ret 4 */

}

/**
 * sub_0049DB91
 * Original: 0x0049DB91 - 0x0049DBCF (62 bytes, 30 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0049DB91(void)
{
    uint32_t ebp;
    int _flags = 0; /* fallback flag var */
    int _cf = 0; /* carry flag */

loc_0049DB91: ;
    PUSH32(esp, ebp);
    ebp = esp;
    PUSH32(esp, ebx);
    ebx = MEM32(ebp + 8);
    edx = MEM32(ebx + 0x28);
    ebx = ebx + 0x24;
    eax = edx;
    eax = eax - ebx;
    eax = (uint32_t)(-(int32_t)eax);
    PUSH32(esp, esi);
    eax = _cf ? 0xFFFFFFFF : 0; /* sbb self (CF extend) */
    PUSH32(esp, edi);
    eax = eax & edx;

loc_0049DBAA: ;
    (void)0; /* test eax, eax - flags set for next jcc */
    ecx = edx;
    if (TEST_Z(eax, eax)) goto loc_0049DBB3; /* je: equal / zero */

loc_0049DBB0: ;
    ecx = MEM32(eax + 4);

loc_0049DBB3: ;
    eax = ecx;
    eax = eax - ebx;
    eax = (uint32_t)(-(int32_t)eax);
    eax = _cf ? 0xFFFFFFFF : 0; /* sbb self (CF extend) */
    eax = eax & ecx;
    if ((eax == 0)) goto loc_0049DBCB; /* je: equal / zero */

loc_0049DBBF: ;
    ecx = MEM32(eax + 0xC);
    if (CMP_NE(ecx, MEM32(ebp + 0xC))) goto loc_0049DBAA; /* jne: not equal / not zero */

loc_0049DBC7: ;
    if (TEST_NZ(eax, eax)) { sub_0049DBCF(); return; } /* jne: not equal / not zero */

loc_0049DBCB: ;
    ecx = MEM32(ebx);
    g_seh_ebp = ebp; sub_0049DBD1(); return; /* tail jmp 0x0049DBD1 */

}

/**
 * sub_0049DC43
 * Original: 0x0049DC43 - 0x0049DCCE (139 bytes, 62 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0049DC43(void)
{
    uint32_t ebp;
    int _flags = 0; /* fallback flag var */
    int _cf = 0; /* carry flag */

loc_0049DC43: ;
    PUSH32(esp, ebp);
    ebp = esp;
    PUSH32(esp, ecx);
    MEM32(ebp + -4) = ecx;
    ecx = MEM32(ebp + 8);
    eax = MEM32(ecx + 0x28);
    PUSH32(esp, ebx);
    PUSH32(esp, esi);
    esi = ecx + 0x24;
    edx = eax;
    edx = edx - esi;
    edx = (uint32_t)(-(int32_t)edx);
    edx = _cf ? 0xFFFFFFFF : 0; /* sbb self (CF extend) */
    edx = edx & eax;
    PUSH32(esp, edi);
    if ((edx == 0)) { sub_0049DCCE(); return; } /* je: equal / zero */

loc_0049DC62: ;
    eax = MEM32(ebp + 0xC);
    eax = eax - MEM32(edx + 0xC);
    if (((int32_t)eax >= 0)) { sub_0049DCCE(); return; } /* jns: not sign (positive) */

loc_0049DC6A: ;
    edx = MEM32(edx + 4);
    eax = edx;
    eax = eax - esi;
    eax = (uint32_t)(-(int32_t)eax);
    eax = _cf ? 0xFFFFFFFF : 0; /* sbb self (CF extend) */
    eax = eax & edx;
    edx = eax;
    if ((eax == 0)) goto loc_0049DC87; /* je: equal / zero */

loc_0049DC7B: ;
    eax = MEM32(ebp + 0xC);
    eax = eax - MEM32(edx + 0xC);
    if (((int32_t)eax < 0)) goto loc_0049DC6A; /* js: sign (negative) */

loc_0049DC83: ;
    if (TEST_NZ(edx, edx)) goto loc_0049DC8B; /* jne: not equal / not zero */

loc_0049DC87: ;
    edi = MEM32(esi);
    goto loc_0049DC8D;

loc_0049DC8B: ;
    edi = MEM32(edx);

loc_0049DC8D: ;
    eax = edi;
    eax = eax - esi;
    eax = (uint32_t)(-(int32_t)eax);
    eax = _cf ? 0xFFFFFFFF : 0; /* sbb self (CF extend) */
    eax = eax & edi;
    ebx = MEM32(eax + 8);
    edi = MEM32(ebp + 0x10);
    ebx = ebx - MEM32(eax + 0xC);
    esi = MEM32(edi + 0xC);
    ebx = ebx + esi;
    if (CMP_LE(ebx & ebx, 0)) goto loc_0049DCC5; /* jle: less or equal (signed <=) */

loc_0049DCA9: ;
    eax = MEM32(edi + 8);
    if (CMP_B(ebx, eax)) goto loc_0049DCBB; /* jb: below (unsigned <) */

loc_0049DCB0: ;
    ecx = MEM32(ebp + -4);
    PUSH32(esp, edi);
    PUSH32(esp, 0); sub_004932D7(); /* call 0x004932D7 */

loc_0049DCB9: ;
    g_seh_ebp = ebp; sub_0049DCDE(); return; /* tail jmp 0x0049DCDE */

loc_0049DCBB: ;
    eax = eax - ebx;
    esi = esi - ebx;
    MEM32(edi + 8) = eax;
    MEM32(edi + 0xC) = esi;

loc_0049DCC5: ;
    PUSH32(esp, edx);
    PUSH32(esp, edi);
    PUSH32(esp, 0); sub_0049DA3B(); /* call 0x0049DA3B */

loc_0049DCCC: ;
    g_seh_ebp = ebp; sub_0049DCDE(); return; /* tail jmp 0x0049DCDE */

}

/**
 * sub_0049DCE5
 * Original: 0x0049DCE5 - 0x0049DD4D (104 bytes, 44 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0049DCE5(void)
{
    uint32_t ebp;
    int _flags = 0; /* fallback flag var */

loc_0049DCE5: ;
    PUSH32(esp, ebp);
    ebp = esp;
    PUSH32(esp, ecx);
    eax = MEM32(ebp + 8);
    eax = MEM32(eax + 0x20);
    PUSH32(esp, ebx);
    ebx = MEM32(eax + 0x14);
    (void)0; /* cmp MEM32(ebp + 0x14), ebx - flags set for next jcc */
    MEM32(ebp + -4) = ecx;
    if (CMP_AE(MEM32(ebp + 0x14), ebx)) goto loc_0049DCFE; /* jae: above or equal (unsigned >=) */

loc_0049DCFB: ;
    ebx = MEM32(ebp + 0x14);

loc_0049DCFE: ;
    PUSH32(esp, esi);
    esi = MEM32(ebp + 0x10);
    PUSH32(esp, edi);
    edi = MEM32(eax + 0x10);
    ecx = ebx;
    edx = ecx;
    ecx = ecx >> 2;
    memcpy((void*)XBOX_PTR(edi), (void*)XBOX_PTR(esi), ecx * 4);
    esi += ecx * 4; edi += ecx * 4; ecx = 0; /* rep movsd */
    ecx = edx;
    ecx = ecx & 3;
    memcpy((void*)XBOX_PTR(edi), (void*)XBOX_PTR(esi), ecx);
    esi += ecx; edi += ecx; ecx = 0; /* rep movsb */
    ecx = MEM32(eax + 4);
    MEM32(ecx + 8) = MEM32(ecx + 8) + ebx;
    MEM32(eax + 0x10) = MEM32(eax + 0x10) + ebx;
    MEM32(eax + 0x14) = MEM32(eax + 0x14) - ebx;
    POP32(esp, edi);
    POP32(esp, esi);
    if ((MEM32(eax + 0x14) == 0)) goto loc_0049DD2C; /* je: equal / zero */

loc_0049DD26: ;
    if (TEST_Z(MEM8(ebp + 0xC), 0x28)) goto loc_0049DD3A; /* je: equal / zero */

loc_0049DD2C: ;
    ecx = MEM32(ebp + -4);
    PUSH32(esp, 0);
    PUSH32(esp, eax);
    PUSH32(esp, MEM32(ebp + 8));
    PUSH32(esp, 0); sub_0049B606(); /* call 0x0049B606 */

loc_0049DD3A: ;
    ecx = MEM32(ebp + -4);
    PUSH32(esp, ebx);
    PUSH32(esp, MEM32(ebp + 8));
    PUSH32(esp, 0); sub_0049DA97(); /* call 0x0049DA97 */

loc_0049DD46: ;
    eax = ebx;
    POP32(esp, ebx);
    esp = ebp;
    POP32(esp, ebp); /* leave */
    esp += 20; return; /* ret 16 */

}

/**
 * sub_0049DD4D
 * Original: 0x0049DD4D - 0x0049DD99 (76 bytes, 34 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0049DD4D(void)
{
    uint32_t ebp;
    int _flags = 0; /* fallback flag var */
    int _cf = 0; /* carry flag */

loc_0049DD4D: ;
    PUSH32(esp, ebp);
    ebp = esp;
    PUSH32(esp, ecx);
    PUSH32(esp, edi);
    edi = MEM32(ebp + 8);
    eax = ZX8(MEM8(edi + 0x7D));
    (void)0; /* cmp eax, MEM32(ebp + 0xC) - flags set for next jcc */
    MEM32(ebp + -4) = ecx;
    if (CMP_BE(eax, MEM32(ebp + 0xC))) goto loc_0049DD94; /* jbe: below or equal (unsigned <=) */

loc_0049DD61: ;
    PUSH32(esp, ebx);
    PUSH32(esp, esi);
    ebx = edi + 0x64;

loc_0049DD66: ;
    eax = MEM32(edi + 0x68);
    esi = eax;
    esi = esi - ebx;
    eax = eax + 0xFFFFFF9Cu;
    esi = (uint32_t)(-(int32_t)esi);
    esi = _cf ? 0xFFFFFFFF : 0; /* sbb self (CF extend) */
    esi = esi & eax;
    PUSH32(esp, esi);
    ecx = edi;
    PUSH32(esp, 0); sub_0049DA17(); /* call 0x0049DA17 */

loc_0049DD7E: ;
    ecx = MEM32(ebp + -4);
    PUSH32(esp, 1);
    PUSH32(esp, esi);
    PUSH32(esp, 0); sub_0049C343(); /* call 0x0049C343 */

loc_0049DD89: ;
    eax = ZX8(MEM8(edi + 0x7D));
    if (CMP_A(eax, MEM32(ebp + 0xC))) goto loc_0049DD66; /* ja: above (unsigned >) */

loc_0049DD92: ;
    POP32(esp, esi);
    POP32(esp, ebx);

loc_0049DD94: ;
    POP32(esp, edi);
    esp = ebp;
    POP32(esp, ebp); /* leave */
    esp += 12; return; /* ret 8 */

}

/**
 * sub_0049DD99
 * Original: 0x0049DD99 - 0x0049DE1F (134 bytes, 53 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0049DD99(void)
{
    uint32_t ebp;
    int _flags = 0; /* fallback flag var */
    int _cf = 0; /* carry flag */

loc_0049DD99: ;
    PUSH32(esp, ebp);
    ebp = esp;
    esp = esp - 0xC;
    MEM32(ebp + -8) = MEM32(ebp + -8) & 0;
    PUSH32(esp, ebx);
    ebx = MEM32(ebp + 0xC);
    PUSH32(esp, esi);
    MEM32(ebp + -12) = ecx;
    MEM8(ebp + -1) = 0;
    PUSH32(esp, edi);
    ecx = MEM32(ebp + 8);
    ecx = ecx + 0x24;
    edx = MEM32(ecx);
    eax = edx;
    eax = eax - ecx;
    eax = (uint32_t)(-(int32_t)eax);
    eax = _cf ? 0xFFFFFFFF : 0; /* sbb self (CF extend) */
    eax = eax & edx;
    ecx = MEM32(eax + 8);
    edx = MEM32(ebx + 0x14);
    (void)0; /* cmp ecx, edx - flags set for next jcc */
    MEM32(ebp + 0xC) = ecx;
    if (CMP_B(ecx, edx)) goto loc_0049DDD2; /* jb: below (unsigned <) */

loc_0049DDCF: ;
    MEM32(ebp + 0xC) = edx;

loc_0049DDD2: ;
    esi = ZX16(MEM16(eax + 0x10));
    ecx = MEM32(ebp + 0xC);
    edi = MEM32(ebx + 0x10);
    edx = ecx;
    ecx = ecx >> 2;
    esi = esi + eax;
    memcpy((void*)XBOX_PTR(edi), (void*)XBOX_PTR(esi), ecx * 4);
    esi += ecx * 4; edi += ecx * 4; ecx = 0; /* rep movsd */
    ecx = edx;
    ecx = ecx & 3;
    memcpy((void*)XBOX_PTR(edi), (void*)XBOX_PTR(esi), ecx);
    esi += ecx; edi += ecx; ecx = 0; /* rep movsb */
    edi = MEM32(ebp + 8);
    esi = edx;
    MEM32(edi + 0x2C) = MEM32(edi + 0x2C) - esi;
    MEM32(ebx + 0x10) = MEM32(ebx + 0x10) + esi;
    MEM32(ebx + 0x14) = MEM32(ebx + 0x14) - esi;
    SET_LO8(ecx, MEM8(eax + 0x12));
    MEM8(ebp + -1) = MEM8(ebp + -1) | LO8(ecx);
    ecx = MEM32(eax + 8);
    MEM32(ebp + -8) = MEM32(ebp + -8) + esi;
    if (CMP_NE(esi, ecx)) { sub_0049DE1F(); return; } /* jne: not equal / not zero */

loc_0049DE0A: ;
    ecx = MEM32(eax);
    edx = MEM32(eax + 4);
    MEM32(edx) = ecx;
    MEM32(ecx + 4) = edx;
    ecx = MEM32(ebp + -12);
    PUSH32(esp, eax);
    PUSH32(esp, 0); sub_004932D7(); /* call 0x004932D7 */

loc_0049DE1D: ;
    g_seh_ebp = ebp; sub_0049DE28(); return; /* tail jmp 0x0049DE28 */

}

/**
 * sub_0049DE4C
 * Original: 0x0049DE4C - 0x0049DE74 (40 bytes, 15 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0049DE4C(void)
{
    uint32_t ebp;
    int _flags = 0; /* fallback flag var */

loc_0049DE4C: ;
    PUSH32(esp, ebp);
    ebp = esp;
    (void)0; /* cmp MEM32(ebp + 0xC), 0 - flags set for next jcc */
    PUSH32(esp, esi);
    esi = ecx;
    if (CMP_EQ(MEM32(ebp + 0xC), 0)) { sub_0049DE74(); return; } /* je: equal / zero */

loc_0049DE58: ;
    if (CMP_NE(MEM8(ebp + 0xC), 0)) { sub_0049DE74(); return; } /* jne: not equal / not zero */

loc_0049DE5E: ;
    PUSH32(esp, MEM32(ebp + 0x14));
    PUSH32(esp, MEM32(ebp + 0x10));
    PUSH32(esp, 0); sub_0049352B(); /* call 0x0049352B */

loc_0049DE69: ;
    eax = eax << 0x10;
    eax = eax | 5;
    MEM32(ebp + 0x18) = MEM32(ebp + 0x18) | eax;
    g_seh_ebp = ebp; sub_0049DE89(); return; /* tail jmp 0x0049DE89 */

}

/**
 * sub_0049DECF
 * Original: 0x0049DECF - 0x0049DFF4 (293 bytes, 102 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0049DECF(void)
{
    uint32_t ebp;
    int _flags = 0; /* fallback flag var */
    int _cf = 0; /* carry flag */

loc_0049DECF: ;
    PUSH32(esp, ebp);
    ebp = esp;
    PUSH32(esp, ecx);
    PUSH32(esp, ebx);
    PUSH32(esp, esi);
    esi = MEM32(ebp + 8);
    PUSH32(esp, edi);
    edi = MEM32(ebp + 0xC);
    (void)0; /* cmp MEM32(edi + 0x24), 1 - flags set for next jcc */
    ebx = ecx;
    MEM32(ebp + -4) = ebx;
    if (CMP_G(MEM32(edi + 0x24), 1)) goto loc_0049DF78; /* jg: greater (signed >) */

loc_0049DEEB: ;
    MEM32(esi + 0x88) = MEM32(esi + 0x88) & 0;
    if (CMP_EQ(MEM32(ebp + 0x10), 0)) goto loc_0049DF0E; /* je: equal / zero */

loc_0049DEF8: ;
    eax = MEM32(edi + 8);
    SET_LO8(eax, LO8(eax) & 7);
    if (CMP_B(LO8(eax), 4)) goto loc_0049DF0E; /* jb: below (unsigned <) */

loc_0049DF01: ;
    PUSH32(esp, MEM32(esi + 0x44));
    PUSH32(esp, edi);
    PUSH32(esp, 0); sub_0048E802(); /* call 0x0048E802 */

loc_0049DF0A: ;
    if (TEST_Z(eax, eax)) goto loc_0049DF78; /* je: equal / zero */

loc_0049DF0E: ;
    ecx = edi;
    PUSH32(esp, 0); sub_00493893(); /* call 0x00493893 */

loc_0049DF15: ;
    ebx = eax;
    SET_LO8(eax, MEM8(edi + 0x33));
    SET_LO8(eax, LO8(eax) + 3);
    SET_LO8(eax, LO8(eax) << 2);
    SET_LO8(eax, LO8(eax) & 0xF0);
    MEM8(ebx + 8) = LO8(eax);
    eax = 0; /* xor self */
    SET_LO16(eax, MEM16(esi + 0x48));
    ecx = edi;
    PUSH32(esp, eax);
    eax = 0; /* xor self */
    SET_LO16(eax, MEM16(esi + 0x4A));
    PUSH32(esp, eax);
    PUSH32(esp, 0); sub_00493480(); /* call 0x00493480 */

loc_0049DF39: ;
    eax = MEM32(edi + 0x28);
    eax = BSWAP32(eax); /* bswap */
    MEM32(ebx) = eax;
    eax = MEM32(esi + 0xC4);
    eax = BSWAP32(eax); /* bswap */
    MEM32(ebx + 4) = eax;
    SET_LO8(eax, MEM8(edi + 0x32));
    MEM8(ebx + 9) = LO8(eax);
    SET_LO16(eax, MEM16(esi + 0xC8));
    SET_HI8(ecx, LO8(eax));
    SET_LO8(ecx, HI8(eax));
    eax = esi + 0x4C;
    PUSH32(esp, eax);
    PUSH32(esp, 6);
    MEM16(ebx + 0xA) = LO16(ecx);
    MEM32(edi + 0x24) = MEM32(edi + 0x24) + 1;
    PUSH32(esp, MEM32(esi + 0x44));
    ecx = MEM32(ebp + -4);
    PUSH32(esp, edi);
    PUSH32(esp, 0); sub_00491199(); /* call 0x00491199 */

loc_0049DF75: ;
    ebx = MEM32(ebp + -4);

loc_0049DF78: ;
    eax = esi + 0x34;
    ecx = MEM32(eax);
    edx = ecx;
    edx = edx - eax;
    ecx = ecx + 0xFFFFFFECu;
    edx = (uint32_t)(-(int32_t)edx);
    edx = _cf ? 0xFFFFFFFF : 0; /* sbb self (CF extend) */
    edx = edx & ecx;
    if (CMP_NE(edi, edx)) goto loc_0049DFE9; /* jne: not equal / not zero */

loc_0049DF8E: ;
    if (TEST_Z(MEM8(esi + 0xD), 2)) goto loc_0049DF99; /* je: equal / zero */

loc_0049DF94: ;
    SET_LO8(eax, MEM8(ebx + 0x3B));
    goto loc_0049DF9C;

loc_0049DF99: ;
    SET_LO8(eax, MEM8(ebx + 0x39));

loc_0049DF9C: ;
    SET_LO8(ecx, MEM8(edi + 0x30));
    eax = ZX8(LO8(eax));
    edx = eax + eax * 4;
    eax = MEM32(esi + 0xDC);
    eax = eax << LO8(ecx);
    (void)0; /* cmp eax, edx - flags set for next jcc */
    MEM32(esi + 0x90) = eax;
    if (CMP_AE(eax, edx)) goto loc_0049DFBD; /* jae: above or equal (unsigned >=) */

loc_0049DFB7: ;
    MEM32(esi + 0x90) = edx;

loc_0049DFBD: ;
    eax = ZX8(MEM8(ebx + 0x3A));
    eax = eax + eax * 4;
    if (CMP_BE(MEM32(esi + 0x90), eax)) goto loc_0049DFD2; /* jbe: below or equal (unsigned <=) */

loc_0049DFCC: ;
    MEM32(esi + 0x90) = eax;

loc_0049DFD2: ;
    PUSH32(esp, MEM32(esi + 0x90));
    eax = esi + 0x6C;
    PUSH32(esp, eax);
    ecx = ebx;
    PUSH32(esp, 0); sub_00492FD3(); /* call 0x00492FD3 */

loc_0049DFE3: ;
    MEM32(esi + 0x90) = eax;

loc_0049DFE9: ;
    MEM16(edi + 0x30) = MEM16(edi + 0x30) + 1;
    POP32(esp, edi);
    POP32(esp, esi);
    POP32(esp, ebx);
    esp = ebp;
    POP32(esp, ebp); /* leave */
    esp += 16; return; /* ret 12 */

}

/**
 * sub_0049DFF4
 * Original: 0x0049DFF4 - 0x0049E05E (106 bytes, 35 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0049DFF4(void)
{

loc_0049DFF4: ;
    PUSH32(esp, esi);
    esi = ecx;
    MEM8(esi + 0x7D) = MEM8(esi + 0x7D) + 1;
    PUSH32(esp, edi);
    edi = MEM32(esp + 0xC);
    MEM32(edi + 0x60) = esi;
    eax = esi + 0x64;
    edx = MEM32(eax + 4);
    ecx = edi + 0x64;
    MEM32(ecx) = eax;
    MEM32(edi + 0x68) = edx;
    MEM32(edx) = ecx;
    MEM32(eax + 4) = ecx;
    eax = MEM32(esi + 0xC);
    eax = eax & 0x3E0000;
    eax = eax | 0x20;
    PUSH32(esp, eax);
    PUSH32(esp, 0xFFC1FFDFu);
    ecx = edi;
    PUSH32(esp, 0); sub_0049AD6C(); /* call 0x0049AD6C */

loc_0049E02D: ;
    SET_LO16(eax, MEM16(esi + 0x4A));
    MEM16(edi + 0x4A) = LO16(eax);
    eax = MEM32(esi + 0x50);
    MEM32(edi + 0x50) = eax;
    eax = MEM32(esi + 0x54);
    MEM32(edi + 0x54) = eax;
    eax = MEM32(esi + 0x58);
    MEM32(edi + 0x58) = eax;
    eax = MEM32(esi + 0x5C);
    MEM32(edi + 0x5C) = eax;
    eax = MEM32(esi + 0x80);
    MEM32(edi + 0x80) = eax;
    POP32(esp, edi);
    POP32(esp, esi);
    esp += 8; return; /* ret 4 */

}

/**
 * sub_0049E05E
 * Original: 0x0049E05E - 0x0049E08D (47 bytes, 21 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0049E05E(void)
{
    int _flags = 0; /* fallback flag var */
    int _cf = 0; /* carry flag */

loc_0049E05E: ;
    ecx = ecx + 0x64;
    edx = MEM32(ecx);
    eax = edx;
    eax = eax - ecx;
    edx = edx + 0xFFFFFF9Cu;
    eax = (uint32_t)(-(int32_t)eax);
    eax = _cf ? 0xFFFFFFFF : 0; /* sbb self (CF extend) */
    eax = eax & edx;
    if ((eax == 0)) goto loc_0049E08C; /* je: equal / zero */

loc_0049E072: ;
    if (TEST_NZ(MEM8(eax + 0xC), 0x40)) goto loc_0049E08C; /* jne: not equal / not zero */

loc_0049E078: ;
    eax = MEM32(eax + 0x64);
    edx = eax;
    edx = edx - ecx;
    eax = eax + 0xFFFFFF9Cu;
    edx = (uint32_t)(-(int32_t)edx);
    edx = _cf ? 0xFFFFFFFF : 0; /* sbb self (CF extend) */
    edx = edx & eax;
    eax = edx;
    if ((edx != 0)) goto loc_0049E072; /* jne: not equal / not zero */

loc_0049E08C: ;
    esp += 4; return; /* ret */

}

/**
 * sub_0049E08D
 * Original: 0x0049E08D - 0x0049E1D5 (328 bytes, 96 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0049E08D(void)
{
    uint32_t ebp;
    int _flags = 0; /* fallback flag var */

loc_0049E08D: ;
    PUSH32(esp, ebp);
    ebp = esp;
    PUSH32(esp, ebx);
    PUSH32(esp, esi);
    esi = MEM32(ebp + 8);
    (void)0; /* cmp MEM32(esi + 0x60), 0 - flags set for next jcc */
    ebx = ecx;
    if (CMP_NE(MEM32(esi + 0x60), 0)) { sub_0049E1D5(); return; } /* jne: not equal / not zero */

loc_0049E0A1: ;
    if (TEST_NZ(MEM8(esi + 0xF), 1)) { sub_0049E1D5(); return; } /* jne: not equal / not zero */

loc_0049E0AB: ;
    eax = MEM32(esi);
    ecx = MEM32(esi + 4);
    MEM32(ecx) = eax;
    MEM32(eax + 4) = ecx;
    eax = ebx + 0xD40;
    ecx = MEM32(eax + 4);
    MEM32(esi) = eax;
    MEM32(esi + 4) = ecx;
    MEM32(ecx) = esi;
    MEM32(eax + 4) = esi;
    eax = MEM32(ebp + 0xC);
    if (CMP_NE(eax, 0x80072746u)) goto loc_0049E0DB; /* jne: not equal / not zero */

loc_0049E0D2: ;
    if (CMP_AE(MEM8(esi + 0x7C), 4)) goto loc_0049E0DB; /* jae: above or equal (unsigned >=) */

loc_0049E0D8: ;
    eax = eax + 7;

loc_0049E0DB: ;
    (void)0; /* cmp MEM8(esi + 0x7C), 4 - flags set for next jcc */
    MEM32(esi + 0x40) = eax;
    if (CMP_AE(MEM8(esi + 0x7C), 4)) goto loc_0049E0F3; /* jae: above or equal (unsigned >=) */

loc_0049E0E4: ;
    if (TEST_NZ(MEM8(esi + 0xC), 0x18)) goto loc_0049E0F3; /* jne: not equal / not zero */

loc_0049E0EA: ;
    MEM32(ebp + 8) = 1;
    goto loc_0049E0F7;

loc_0049E0F3: ;
    MEM32(ebp + 8) = MEM32(ebp + 8) & 0;

loc_0049E0F7: ;
    PUSH32(esp, edi);
    PUSH32(esp, 0x18);
    PUSH32(esp, 0xFFFFFFFFu);
    ecx = esi;
    PUSH32(esp, 0); sub_0049AD6C(); /* call 0x0049AD6C */

loc_0049E103: ;
    PUSH32(esp, 0x18);
    POP32(esp, ecx);
    eax = 0; /* xor self */
    MEM8(esi + 0x7C) = 0;
    edi = esi + 0x88;
    { uint32_t _i; for (_i = 0; _i < ecx; _i++) MEM32(edi + _i*4) = eax; }
    edi += ecx * 4; ecx = 0; /* rep stosd */
    PUSH32(esp, 0xFFFFFFFFu);
    edi = esi + 0x6C;
    PUSH32(esp, edi);
    ecx = ebx;
    PUSH32(esp, 0); sub_00492F6E(); /* call 0x00492F6E */

loc_0049E121: ;
    SET_LO16(eax, ZX8(MEM8(ebx + 0x36)));
    MEM16(esi + 0x82) = LO16(eax);
    ecx = 0; /* xor self */
    eax = 0x200;
    MEM32(esi + 0xBC) = eax;
    MEM32(esi + 0xCC) = eax;
    MEM16(esi + 0x80) = LO16(ecx);
    MEM32(esi + 0x84) = ecx;
    MEM32(esi + 0xD4) = ecx;
    eax = 0xFFFF;
    MEM32(esi + 0xB4) = eax;
    MEM32(esi + 0xB8) = eax;
    eax = ZX8(MEM8(ebx + 0x38));
    eax = eax + eax * 4;
    MEM32(esi + 0xD8) = eax;
    MEM32(esi + 0xDC) = eax;
    eax = esi + 0x64;
    MEM32(esi + 0x68) = eax;
    MEM32(eax) = eax;
    MEM32(edi + 8) = MEM32(edi + 8) | 0xFFFFFFFFu;
    PUSH32(esp, ecx);
    MEM32(edi) = ecx;
    PUSH32(esp, 0xFFFFF9FFu);
    ecx = esi;
    MEM32(edi + 0xC) = 0x49E901;
    PUSH32(esp, 0); sub_0049AD6C(); /* call 0x0049AD6C */

loc_0049E199: ;
    (void)0; /* test MEM32(esi + 0xC), 0x1F800 - flags set for next jcc */
    MEM8(esi + 0x7F) = 0;
    POP32(esp, edi);
    if (TEST_Z(MEM32(esi + 0xC), 0x1F800)) goto loc_0049E1B5; /* je: equal / zero */

loc_0049E1A7: ;
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, 0);
    PUSH32(esp, 1);
    eax = esi + 0x10;
    PUSH32(esp, eax);
    PUSH32(esp, 0); RECOMP_ICALL_SAFE(MEM32(0x56114C), _icall_esp); /* indirect call */
    }

loc_0049E1B5: ;
    PUSH32(esp, esi);
    ecx = ebx;
    PUSH32(esp, 0); sub_0049B6D6(); /* call 0x0049B6D6 */

loc_0049E1BD: ;
    if (CMP_EQ(MEM32(ebp + 8), 0)) goto loc_0049E1D1; /* je: equal / zero */

loc_0049E1C3: ;
    PUSH32(esp, 0x80);
    PUSH32(esp, 0xFFFFFFFFu);
    ecx = esi;
    PUSH32(esp, 0); sub_0049AD6C(); /* call 0x0049AD6C */

loc_0049E1D1: ;
    eax = esi;
    g_seh_ebp = ebp; sub_0049E1E1(); return; /* tail jmp 0x0049E1E1 */

}

/**
 * sub_0049E1E7
 * Original: 0x0049E1E7 - 0x0049E1F8 (17 bytes, 7 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0049E1E7(void)
{
    uint32_t ebp;
    int _flags = 0; /* fallback flag var */
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_0049E1E7: ;
    PUSH32(esp, esi);
    esi = MEM32(esp + 8);
    SET_LO8(eax, MEM8(esi + 0x7D));
    if (CMP_B(LO8(eax), MEM8(esi + 0x7E))) { sub_0049E1F8(); return; } /* jb: below (unsigned <) */

loc_0049E1F4: ;
    eax = 0; /* xor self */
    g_seh_ebp = ebp; sub_0049E227(); return; /* tail jmp 0x0049E227 */

}

/**
 * sub_0049E22B
 * Original: 0x0049E22B - 0x0049E290 (101 bytes, 43 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0049E22B(void)
{
    uint32_t ebp;
    int _flags = 0; /* fallback flag var */

loc_0049E22B: ;
    PUSH32(esp, ebp);
    ebp = esp;
    PUSH32(esp, ebx);
    PUSH32(esp, esi);
    PUSH32(esp, edi);
    esi = 0; /* xor self */
    PUSH32(esp, esi);
    PUSH32(esp, esi);
    PUSH32(esp, esi);
    PUSH32(esp, 0x40000);
    PUSH32(esp, MEM32(ebp + 0x14));
    ebx = ecx;
    PUSH32(esp, MEM32(ebp + 0x10));
    PUSH32(esp, MEM32(ebp + 0xC));
    PUSH32(esp, MEM32(ebp + 8));
    PUSH32(esp, 0); sub_0049DE4C(); /* call 0x0049DE4C */

loc_0049E24E: ;
    edi = eax;
    if (CMP_EQ(edi, esi)) goto loc_0049E289; /* je: equal / zero */

loc_0049E254: ;
    ecx = edi;
    PUSH32(esp, 0); sub_00493893(); /* call 0x00493893 */

loc_0049E25B: ;
    ecx = MEM32(ebp + 0x18);
    ecx = BSWAP32(ecx); /* bswap */
    MEM32(eax) = ecx;
    ecx = MEM32(ebp + 0x1C);
    ecx = BSWAP32(ecx); /* bswap */
    PUSH32(esp, esi);
    MEM32(eax + 4) = ecx;
    SET_LO8(ecx, MEM8(ebp + 0x20));
    PUSH32(esp, 6);
    PUSH32(esp, MEM32(ebp + 0xC));
    SET_LO8(ecx, LO8(ecx) | 4);
    MEM8(eax + 9) = LO8(ecx);
    PUSH32(esp, edi);
    ecx = ebx;
    MEM8(eax + 8) = 0x50;
    MEM16(eax + 0xA) = LO16(esi);
    PUSH32(esp, 0); sub_00491199(); /* call 0x00491199 */

loc_0049E289: ;
    POP32(esp, edi);
    POP32(esp, esi);
    POP32(esp, ebx);
    POP32(esp, ebp);
    esp += 32; return; /* ret 28 */

}

/**
 * sub_0049E290
 * Original: 0x0049E290 - 0x0049E2C5 (53 bytes, 22 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0049E290(void)
{

loc_0049E290: ;
    PUSH32(esp, esi);
    esi = MEM32(esp + 8);
    PUSH32(esp, edi);
    PUSH32(esp, 0x10);
    PUSH32(esp, MEM32(esi + 0xC4));
    edi = ecx;
    PUSH32(esp, esi);
    PUSH32(esp, 0); sub_0049DA68(); /* call 0x0049DA68 */

loc_0049E2A6: ;
    PUSH32(esp, eax);
    eax = 0; /* xor self */
    SET_LO16(eax, MEM16(esi + 0x48));
    ecx = edi;
    PUSH32(esp, eax);
    eax = 0; /* xor self */
    SET_LO16(eax, MEM16(esi + 0x4A));
    PUSH32(esp, eax);
    PUSH32(esp, MEM32(esi + 0x44));
    PUSH32(esp, esi);
    PUSH32(esp, 0); sub_0049E22B(); /* call 0x0049E22B */

loc_0049E2C0: ;
    POP32(esp, edi);
    POP32(esp, esi);
    esp += 8; return; /* ret 4 */

}

/**
 * sub_0049E2C5
 * Original: 0x0049E2C5 - 0x0049E34C (135 bytes, 53 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0049E2C5(void)
{
    uint32_t ebp;
    int _flags = 0; /* fallback flag var */
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_0049E2C5: ;
    PUSH32(esp, ebx);
    PUSH32(esp, ebp);
    PUSH32(esp, esi);
    esi = MEM32(esp + 0x10);
    PUSH32(esp, edi);
    eax = 0; /* xor self */
    SET_LO16(eax, MEM16(esi + 0x48));
    edi = 0; /* xor self */
    PUSH32(esp, edi);
    PUSH32(esp, edi);
    PUSH32(esp, edi);
    PUSH32(esp, 0x40000);
    ebp = ecx;
    PUSH32(esp, eax);
    eax = 0; /* xor self */
    SET_LO16(eax, MEM16(esi + 0x4A));
    PUSH32(esp, eax);
    PUSH32(esp, MEM32(esi + 0x44));
    PUSH32(esp, esi);
    PUSH32(esp, 0); sub_0049DE4C(); /* call 0x0049DE4C */

loc_0049E2F0: ;
    ebx = eax;
    if (CMP_EQ(ebx, edi)) goto loc_0049E345; /* je: equal / zero */

loc_0049E2F6: ;
    PUSH32(esp, esi);
    ecx = ebp;
    PUSH32(esp, 0); sub_0049DA68(); /* call 0x0049DA68 */

loc_0049E2FE: ;
    MEM32(esi + 0x88) = MEM32(esi + 0x88) & 0;
    ecx = ebx;
    edi = eax;
    PUSH32(esp, 0); sub_00493893(); /* call 0x00493893 */

loc_0049E30E: ;
    edi = BSWAP32(edi); /* bswap */
    MEM32(eax) = edi;
    ecx = MEM32(esi + 0xC4);
    ecx = BSWAP32(ecx); /* bswap */
    MEM32(eax + 4) = ecx;
    MEM8(eax + 9) = 0x10;
    MEM8(eax + 8) = 0x50;
    SET_LO16(ecx, MEM16(esi + 0xC8));
    SET_HI8(edx, LO8(ecx));
    SET_LO8(edx, HI8(ecx));
    ecx = ebp;
    MEM16(eax + 0xA) = LO16(edx);
    eax = esi + 0x4C;
    PUSH32(esp, eax);
    PUSH32(esp, 6);
    PUSH32(esp, MEM32(esi + 0x44));
    PUSH32(esp, ebx);
    PUSH32(esp, 0); sub_00491199(); /* call 0x00491199 */

loc_0049E345: ;
    POP32(esp, edi);
    POP32(esp, esi);
    POP32(esp, ebp);
    POP32(esp, ebx);
    esp += 8; return; /* ret 4 */

}

/**
 * sub_0049E34C
 * Original: 0x0049E34C - 0x0049E3A4 (88 bytes, 32 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0049E34C(void)
{
    uint32_t ebp;
    int _flags = 0; /* fallback flag var */
    int _cf = 0; /* carry flag */
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_0049E34C: ;
    PUSH32(esp, ebx);
    PUSH32(esp, esi);
    PUSH32(esp, edi);
    edi = MEM32(esp + 0x10);
    eax = edi + 0x34;
    ebx = ecx;
    ecx = MEM32(eax);
    esi = ecx;
    esi = esi - eax;
    ecx = ecx + 0xFFFFFFECu;
    esi = (uint32_t)(-(int32_t)esi);
    esi = _cf ? 0xFFFFFFFF : 0; /* sbb self (CF extend) */
    esi = esi & ecx;
    eax = MEM32(esi + 0x20);
    if (CMP_A(eax, MEM32(edi + 0xB0))) { sub_0049E3A4(); return; } /* ja: above (unsigned >) */

loc_0049E372: ;
    PUSH32(esp, 0);
    PUSH32(esp, 0xFFFFFDFFu);
    ecx = edi;
    PUSH32(esp, 0); sub_0049AD6C(); /* call 0x0049AD6C */

loc_0049E380: ;
    if (CMP_EQ(MEM16(esi + 0x30), 0)) goto loc_0049E399; /* je: equal / zero */

loc_0049E387: ;
    MEM16(esi + 0x30) = MEM16(esi + 0x30) & 0;
    PUSH32(esp, 1);
    PUSH32(esp, esi);
    PUSH32(esp, edi);
    ecx = ebx;
    PUSH32(esp, 0); sub_0049DECF(); /* call 0x0049DECF */

loc_0049E397: ;
    goto loc_0049E3A0;

loc_0049E399: ;
    MEM32(edi + 0x90) = MEM32(edi + 0x90) & 0;

loc_0049E3A0: ;
    eax = 0; /* xor self */
    g_seh_ebp = ebp; sub_0049E3A7(); return; /* tail jmp 0x0049E3A7 */

}

/**
 * sub_0049E3AD
 * Original: 0x0049E3AD - 0x0049E41B (110 bytes, 40 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0049E3AD(void)
{
    int _flags = 0; /* fallback flag var */
    int _cf = 0; /* carry flag */

loc_0049E3AD: ;
    PUSH32(esp, ebx);
    PUSH32(esp, esi);
    esi = MEM32(esp + 0xC);
    eax = MEM32(esi + 0xA0);
    eax = eax - MEM32(esi + 0x9C);
    ebx = ecx;
    ecx = MEM32(esi + 0xBC);
    PUSH32(esp, edi);
    eax = eax >> 1;
    edi = ecx + ecx;
    (void)0; /* cmp eax, edi - flags set for next jcc */
    edx = esi + 0xB8;
    MEM32(edx) = eax;
    if (CMP_AE(eax, edi)) goto loc_0049E3DB; /* jae: above or equal (unsigned >=) */

loc_0049E3D9: ;
    MEM32(edx) = edi;

loc_0049E3DB: ;
    eax = ecx + ecx * 2;
    eax = eax + MEM32(edx);
    PUSH32(esp, 0x400);
    PUSH32(esp, 0xFFFFFFFFu);
    ecx = esi;
    MEM32(esi + 0xB4) = eax;
    PUSH32(esp, 0); sub_0049AD6C(); /* call 0x0049AD6C */

loc_0049E3F4: ;
    eax = esi + 0x34;
    ecx = MEM32(eax);
    edx = ecx;
    edx = edx - eax;
    ecx = ecx + 0xFFFFFFECu;
    edx = (uint32_t)(-(int32_t)edx);
    edx = _cf ? 0xFFFFFFFF : 0; /* sbb self (CF extend) */
    PUSH32(esp, 1);
    edx = edx & ecx;
    PUSH32(esp, edx);
    PUSH32(esp, esi);
    ecx = ebx;
    MEM8(esi + 0x7F) = 0;
    PUSH32(esp, 0); sub_0049DECF(); /* call 0x0049DECF */

loc_0049E415: ;
    POP32(esp, edi);
    POP32(esp, esi);
    POP32(esp, ebx);
    esp += 8; return; /* ret 4 */

}

/**
 * sub_0049E41B
 * Original: 0x0049E41B - 0x0049E4E4 (201 bytes, 72 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0049E41B(void)
{
    int _flags = 0; /* fallback flag var */

loc_0049E41B: ;
    PUSH32(esp, esi);
    esi = MEM32(esp + 8);
    PUSH32(esp, edi);
    edi = ecx;
    ecx = MEM32(esp + 0x10);
    eax = esi + 0xC4;
    if (CMP_NE(ecx, MEM32(eax))) goto loc_0049E4DF; /* jne: not equal / not zero */

loc_0049E435: ;
    MEM32(esi + 0x88) = MEM32(esi + 0x88) + 0x20000;
    ecx++;
    (void)0; /* test MEM8(esi + 0xD), 0x80 - flags set for next jcc */
    PUSH32(esp, ebx);
    ebx = MEM32(0x56114C);
    MEM32(eax) = ecx;
    if (TEST_Z(MEM8(esi + 0xD), 0x80)) goto loc_0049E459; /* je: equal / zero */

loc_0049E44F: ;
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, 0);
    PUSH32(esp, 1);
    eax = esi + 0x10;
    PUSH32(esp, eax);
    PUSH32(esp, 0); RECOMP_ICALL_SAFE(ebx, _icall_esp); /* indirect call */
    }

loc_0049E459: ;
    PUSH32(esp, 0);
    PUSH32(esp, MEM32(esi + 0x20));
    ecx = edi;
    PUSH32(esp, esi);
    PUSH32(esp, 0); sub_0049B606(); /* call 0x0049B606 */

loc_0049E466: ;
    eax = ZX8(MEM8(esi + 0x7C));
    if (CMP_B(eax, 3)) goto loc_0049E4DE; /* jb: below (unsigned <) */

loc_0049E46F: ;
    if (CMP_BE(eax, 4)) goto loc_0049E4CA; /* jbe: below or equal (unsigned <=) */

loc_0049E474: ;
    if (CMP_EQ(eax, 5)) goto loc_0049E485; /* je: equal / zero */

loc_0049E479: ;
    if (CMP_EQ(eax, 6)) goto loc_0049E492; /* je: equal / zero */

loc_0049E47E: ;
    if (CMP_NE(eax, 8)) goto loc_0049E4DE; /* jne: not equal / not zero */

loc_0049E483: ;
    goto loc_0049E496;

loc_0049E485: ;
    eax = esi + 0x34;
    if (CMP_NE(MEM32(eax), eax)) goto loc_0049E492; /* jne: not equal / not zero */

loc_0049E48C: ;
    MEM8(esi + 0x7C) = 7;
    goto loc_0049E4DE;

loc_0049E492: ;
    MEM8(esi + 0x7C) = 8;

loc_0049E496: ;
    eax = ZX8(MEM8(edi + 0x34));
    edx = MEM32(esi + 0x94);
    (void)0; /* test edx, edx - flags set for next jcc */
    ecx = MEM32(edi + 0x1D8);
    eax = eax + eax * 4;
    eax = ecx + eax * 2;
    if (TEST_Z(edx, edx)) goto loc_0049E4B4; /* je: equal / zero */

loc_0049E4B0: ;
    if (CMP_AE(eax, edx)) goto loc_0049E4DE; /* jae: above or equal (unsigned >=) */

loc_0049E4B4: ;
    eax = eax - ecx;
    PUSH32(esp, eax);
    eax = esi + 0x6C;
    PUSH32(esp, eax);
    ecx = edi;
    PUSH32(esp, 0); sub_00492FD3(); /* call 0x00492FD3 */

loc_0049E4C2: ;
    MEM32(esi + 0x94) = eax;
    goto loc_0049E4DE;

loc_0049E4CA: ;
    if (TEST_Z(MEM8(esi + 0xD), 8)) goto loc_0049E4DA; /* je: equal / zero */

loc_0049E4D0: ;
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, 0);
    PUSH32(esp, 1);
    eax = esi + 0x10;
    PUSH32(esp, eax);
    PUSH32(esp, 0); RECOMP_ICALL_SAFE(ebx, _icall_esp); /* indirect call */
    }

loc_0049E4DA: ;
    MEM8(esi + 0x7C) = 9;

loc_0049E4DE: ;
    POP32(esp, ebx);

loc_0049E4DF: ;
    POP32(esp, edi);
    POP32(esp, esi);
    esp += 12; return; /* ret 8 */

}

/**
 * sub_0049E4E4
 * Original: 0x0049E4E4 - 0x0049E5F1 (269 bytes, 97 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0049E4E4(void)
{
    uint32_t ebp;
    int _flags = 0; /* fallback flag var */
    int _cf = 0; /* carry flag */

loc_0049E4E4: ;
    PUSH32(esp, ebp);
    ebp = esp;
    PUSH32(esp, ecx);
    edx = MEM32(ebp + 0xC);
    PUSH32(esp, ebx);
    MEM32(ebp + -4) = ecx;
    PUSH32(esp, esi);
    esi = MEM32(ebp + 8);
    eax = esi + 0x34;
    ecx = MEM32(eax);
    PUSH32(esp, edi);
    edi = ecx;
    ecx = ecx + 0xFFFFFFECu;
    edi = edi - eax;
    eax = MEM32(edx + 4);
    edi = (uint32_t)(-(int32_t)edi);
    edi = _cf ? 0xFFFFFFFF : 0; /* sbb self (CF extend) */
    edi = edi & ecx;
    eax = BSWAP32(eax); /* bswap */
    MEM32(esi + 0x9C) = eax;
    SET_LO16(ecx, MEM16(edx + 0xA));
    SET_HI8(ebx, LO8(ecx));
    SET_LO8(ebx, HI8(ecx));
    ecx = ZX16(LO16(ebx));
    MEM32(esi + 0xB0) = ecx;
    ecx = MEM32(edx);
    ebx = 0; /* xor self */
    (void)0; /* cmp MEM32(esi + 0xE4), ebx - flags set for next jcc */
    ecx = BSWAP32(ecx); /* bswap */
    MEM32(esi + 0xA8) = ecx;
    MEM32(esi + 0xAC) = eax;
    if (CMP_EQ(MEM32(esi + 0xE4), ebx)) goto loc_0049E545; /* je: equal / zero */

loc_0049E53C: ;
    ecx = MEM32(ebp + -4);
    PUSH32(esp, esi);
    PUSH32(esp, 0); sub_0049DAD6(); /* call 0x0049DAD6 */

loc_0049E545: ;
    eax = MEM32(edi + 0x14);
    edx = MEM32(edi + 0x18);
    ecx = MEM32(ebp + -4);
    MEM32(edx) = eax;
    PUSH32(esp, edi);
    MEM32(eax + 4) = edx;
    PUSH32(esp, 0); sub_0049ADCD(); /* call 0x0049ADCD */

loc_0049E559: ;
    ecx = MEM32(esi + 0xCC);
    eax = esi + 0xBC;
    (void)0; /* cmp MEM32(eax), ecx - flags set for next jcc */
    MEM32(esi + 0x8C) = ebx;
    MEM32(esi + 0x90) = ebx;
    if (CMP_BE(MEM32(eax), ecx)) goto loc_0049E577; /* jbe: below or equal (unsigned <=) */

loc_0049E575: ;
    MEM32(eax) = ecx;

loc_0049E577: ;
    eax = MEM32(eax);
    edx = MEM32(esi + 0xB0);
    ecx = eax + eax;
    (void)0; /* cmp edx, ecx - flags set for next jcc */
    MEM32(esi + 0xB4) = ecx;
    if (CMP_BE(edx, ecx)) goto loc_0049E58E; /* jbe: below or equal (unsigned <=) */

loc_0049E58C: ;
    ecx = edx;

loc_0049E58E: ;
    MEM32(esi + 0xB8) = ecx;
    ecx = MEM32(esi + 0x58);
    ecx = ecx >> 1;
    if (CMP_AE(ecx, eax)) goto loc_0049E59F; /* jae: above or equal (unsigned >=) */

loc_0049E59D: ;
    eax = ecx;

loc_0049E59F: ;
    ebx = 0; /* xor self */
    ebx++;
    (void)0; /* cmp eax, ebx - flags set for next jcc */
    ecx = esi + 0xD0;
    MEM32(ecx) = eax;
    if (CMP_AE(eax, ebx)) goto loc_0049E5B0; /* jae: above or equal (unsigned >=) */

loc_0049E5AE: ;
    MEM32(ecx) = ebx;

loc_0049E5B0: ;
    PUSH32(esp, 0x40);
    PUSH32(esp, 0xFFFFFFFFu);
    ecx = esi;
    MEM8(esi + 0x7C) = 4;
    PUSH32(esp, 0); sub_0049AD6C(); /* call 0x0049AD6C */

loc_0049E5BF: ;
    (void)0; /* test MEM8(esi + 0xD), 0x40 - flags set for next jcc */
    edi = MEM32(0x56114C);
    if (TEST_Z(MEM8(esi + 0xD), 0x40)) goto loc_0049E5D4; /* je: equal / zero */

loc_0049E5CB: ;
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, 0);
    PUSH32(esp, ebx);
    eax = esi + 0x10;
    PUSH32(esp, eax);
    PUSH32(esp, 0); RECOMP_ICALL_SAFE(edi, _icall_esp); /* indirect call */
    }

loc_0049E5D4: ;
    esi = MEM32(esi + 0x60);
    if (TEST_Z(esi, esi)) goto loc_0049E5EA; /* je: equal / zero */

loc_0049E5DB: ;
    if (TEST_Z(MEM8(esi + 0xD), 0x20)) goto loc_0049E5EA; /* je: equal / zero */

loc_0049E5E1: ;
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, 0);
    PUSH32(esp, ebx);
    esi = esi + 0x10;
    PUSH32(esp, esi);
    PUSH32(esp, 0); RECOMP_ICALL_SAFE(edi, _icall_esp); /* indirect call */
    }

loc_0049E5EA: ;
    POP32(esp, edi);
    POP32(esp, esi);
    POP32(esp, ebx);
    esp = ebp;
    POP32(esp, ebp); /* leave */
    esp += 12; return; /* ret 8 */

}

/**
 * sub_0049E5F1
 * Original: 0x0049E5F1 - 0x0049E6A3 (178 bytes, 68 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0049E5F1(void)
{
    uint32_t ebp;
    int _flags = 0; /* fallback flag var */

loc_0049E5F1: ;
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, ebp);
    ebp = esp;
    PUSH32(esp, ecx);
    PUSH32(esp, ecx);
    PUSH32(esp, ebx);
    PUSH32(esp, esi);
    PUSH32(esp, edi);
    MEM32(ebp + -4) = ecx;
    PUSH32(esp, 0); RECOMP_ICALL_SAFE(MEM32(0x5610F0), _icall_esp); /* indirect call */
    }

loc_0049E602: ;
    esi = MEM32(ebp + 8);
    SET_LO16(ecx, MEM16(esi + 0x48));
    edx = MEM32(esi + 0x44);
    MEM8(ebp + -8) = LO8(eax);
    eax = MEM32(ebp + 0xC);
    ebx = 0; /* xor self */
    if (CMP_EQ(MEM32(eax + 0x18), ebx)) goto loc_0049E626; /* je: equal / zero */

loc_0049E619: ;
    edi = MEM32(eax + 0x18);
    MEM32(edi + 4) = edx;
    edx = MEM32(eax + 0x18);
    MEM16(edx + 2) = LO16(ecx);

loc_0049E626: ;
    ecx = MEM32(eax + 0xC);
    MEM32(ecx) = ebx;
    if (CMP_EQ(MEM32(esi + 0x2C), ebx)) goto loc_0049E66E; /* je: equal / zero */

loc_0049E630: ;
    ecx = MEM32(ebp + -4);
    edi = MEM32(eax + 0xC);
    PUSH32(esp, eax);
    PUSH32(esp, esi);
    PUSH32(esp, 0); sub_0049DD99(); /* call 0x0049DD99 */

loc_0049E63D: ;
    MEM32(edi) = MEM32(edi) + eax;
    ecx = MEM32(ebp + -4);
    PUSH32(esp, 0);
    edi = esi + 0xC8;
    MEM32(ebp + 8) = ebx;
    ebx = MEM32(edi);
    PUSH32(esp, esi);
    PUSH32(esp, 0); sub_0049DA97(); /* call 0x0049DA97 */

loc_0049E655: ;
    eax = MEM32(esi + 0xD0);
    if (CMP_AE(ebx, eax)) goto loc_0049E690; /* jae: above or equal (unsigned >=) */

loc_0049E65F: ;
    if (CMP_B(MEM32(edi), eax)) goto loc_0049E690; /* jb: below (unsigned <) */

loc_0049E663: ;
    ecx = MEM32(ebp + -4);
    PUSH32(esp, esi);
    PUSH32(esp, 0); sub_0049E2C5(); /* call 0x0049E2C5 */

loc_0049E66C: ;
    goto loc_0049E690;

loc_0049E66E: ;
    if (CMP_B(MEM8(esi + 0x7C), 7)) goto loc_0049E679; /* jb: below (unsigned <) */

loc_0049E674: ;
    MEM32(ebp + 8) = ebx;
    goto loc_0049E690;

loc_0049E679: ;
    ecx = MEM32(esi + 0x40);
    (void)0; /* cmp ecx, ebx - flags set for next jcc */
    MEM32(ebp + 8) = ecx;
    if (CMP_L(ecx, ebx)) goto loc_0049E690; /* jl: less (signed <) */

loc_0049E683: ;
    ecx = MEM32(ebp + -4);
    PUSH32(esp, eax);
    PUSH32(esp, esi);
    PUSH32(esp, 0); sub_0049B2D6(); /* call 0x0049B2D6 */

loc_0049E68D: ;
    MEM32(ebp + 8) = eax;

loc_0049E690: ;
    SET_LO8(ecx, MEM8(ebp + -8));
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, 0); RECOMP_ICALL_SAFE(MEM32(0x5610E8), _icall_esp); /* indirect call */
    }

loc_0049E699: ;
    eax = MEM32(ebp + 8);
    POP32(esp, edi);
    POP32(esp, esi);
    POP32(esp, ebx);
    esp = ebp;
    POP32(esp, ebp); /* leave */
    esp += 12; return; /* ret 8 */

}

/**
 * sub_0049E6A3
 * Original: 0x0049E6A3 - 0x0049E757 (180 bytes, 58 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0049E6A3(void)
{
    uint32_t ebp;
    int _flags = 0; /* fallback flag var */
    int _cf = 0; /* carry flag */
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_0049E6A3: ;
    PUSH32(esp, ebx);
    PUSH32(esp, esi);
    esi = MEM32(esp + 0xC);
    PUSH32(esp, edi);
    edi = MEM32(esi + 0x84);
    eax = MEM32(edi + 0x20);
    (void)0; /* test eax, eax - flags set for next jcc */
    ebx = ecx;
    if (TEST_Z(eax, eax)) goto loc_0049E6EA; /* je: equal / zero */

loc_0049E6B9: ;
    eax = MEM32(esi + 0xB0);
    eax = eax + MEM32(esi + 0xAC);
    edx = MEM32(esi + 0x9C);
    ecx = MEM32(esi + 0xB4);
    ecx = ecx + edx;
    edx = eax;
    edx = edx - ecx;
    if (CMP_LE(edx & edx, 0)) goto loc_0049E6DD; /* jle: less or equal (signed <=) */

loc_0049E6DB: ;
    eax = ecx;

loc_0049E6DD: ;
    ecx = MEM32(esi + 0xA0);
    eax = eax - ecx;
    if (CMP_G(MEM32(edi + 0x20), eax)) { sub_0049E757(); return; } /* jg: greater (signed >) */

loc_0049E6EA: ;
    PUSH32(esp, 0);
    PUSH32(esp, 0xFFFFFDFFu);
    ecx = esi;
    PUSH32(esp, 0); sub_0049AD6C(); /* call 0x0049AD6C */

loc_0049E6F8: ;
    eax = esi + 0xE4;
    if (CMP_NE(MEM32(eax), 0)) goto loc_0049E714; /* jne: not equal / not zero */

loc_0049E703: ;
    ecx = MEM32(ebx + 0x1D8);
    MEM32(eax) = ecx;
    eax = MEM32(edi + 0x28);
    MEM32(esi + 0xE0) = eax;

loc_0049E714: ;
    eax = MEM32(ebx + 0x1D8);
    MEM32(edi + 0x34) = eax;
    eax = 0; /* xor self */
    (void)0; /* cmp MEM16(edi + 0x30), LO16(eax) - flags set for next jcc */
    ecx = ebx;
    SET_LO8(eax, (CMP_NE(MEM16(edi + 0x30), LO16(eax))) ? 1 : 0); /* setne */
    PUSH32(esp, eax);
    PUSH32(esp, edi);
    PUSH32(esp, esi);
    PUSH32(esp, 0); sub_0049DECF(); /* call 0x0049DECF */

loc_0049E730: ;
    eax = MEM32(edi + 0x2C);
    MEM32(esi + 0xA0) = eax;
    edi = MEM32(edi + 0x14);
    eax = esi + 0x34;
    ecx = edi;
    ecx = ecx - eax;
    edi = edi + 0xFFFFFFECu;
    ecx = (uint32_t)(-(int32_t)ecx);
    ecx = _cf ? 0xFFFFFFFF : 0; /* sbb self (CF extend) */
    ecx = ecx & edi;
    eax = 0; /* xor self */
    MEM32(esi + 0x84) = ecx;
    eax++;
    g_seh_ebp = ebp; sub_0049E794(); return; /* tail jmp 0x0049E794 */

}

/**
 * sub_0049E79A
 * Original: 0x0049E79A - 0x0049E869 (207 bytes, 71 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0049E79A(void)
{
    uint32_t ebp;
    int _flags = 0; /* fallback flag var */
    int _cf = 0; /* carry flag */

loc_0049E79A: ;
    PUSH32(esp, ebp);
    ebp = esp;
    PUSH32(esp, ecx);
    PUSH32(esp, ebx);
    PUSH32(esp, esi);
    esi = MEM32(ebp + 8);
    ebx = esi + 0x34;
    PUSH32(esp, edi);
    edi = MEM32(ebx);
    (void)0; /* cmp edi, ebx - flags set for next jcc */
    MEM32(ebp + -4) = ecx;
    if (CMP_EQ(edi, ebx)) goto loc_0049E860; /* je: equal / zero */

loc_0049E7B4: ;
    SET_LO16(eax, ZX8(MEM8(ecx + 0x37)));
    edi = edi + 0xFFFFFFECu;
    if (CMP_B(MEM16(edi + 0x30), LO16(eax))) goto loc_0049E7D2; /* jb: below (unsigned <) */

loc_0049E7C2: ;
    PUSH32(esp, 0x8007274Cu);
    PUSH32(esp, esi);
    PUSH32(esp, 0); sub_0049E08D(); /* call 0x0049E08D */

loc_0049E7CD: ;
    goto loc_0049E862;

loc_0049E7D2: ;
    eax = 0; /* xor self */
    (void)0; /* test MEM8(esi + 0xD), 2 - flags set for next jcc */
    MEM32(esi + 0xE4) = eax;
    if (TEST_Z(MEM8(esi + 0xD), 2)) goto loc_0049E80F; /* je: equal / zero */

loc_0049E7E0: ;
    if (CMP_NE(MEM16(edi + 0x30), LO16(eax))) goto loc_0049E84F; /* jne: not equal / not zero */

loc_0049E7E6: ;
    PUSH32(esp, eax);
    PUSH32(esp, edi);
    PUSH32(esp, esi);
    PUSH32(esp, 0); sub_0049DECF(); /* call 0x0049DECF */

loc_0049E7EE: ;
    eax = MEM32(edi + 0x2C);
    MEM32(esi + 0xA0) = eax;
    edi = MEM32(edi + 0x14);
    eax = edi;
    eax = eax - ebx;
    edi = edi + 0xFFFFFFECu;
    eax = (uint32_t)(-(int32_t)eax);
    eax = _cf ? 0xFFFFFFFF : 0; /* sbb self (CF extend) */
    eax = eax & edi;
    MEM32(esi + 0x84) = eax;
    goto loc_0049E860;

loc_0049E80F: ;
    eax = MEM32(esi + 0xA0);
    eax = eax - MEM32(esi + 0x9C);
    ecx = MEM32(esi + 0xBC);
    eax = eax >> 1;
    ebx = ecx + ecx;
    (void)0; /* cmp eax, ebx - flags set for next jcc */
    edx = esi + 0xB8;
    MEM32(edx) = eax;
    if (CMP_AE(eax, ebx)) goto loc_0049E834; /* jae: above or equal (unsigned >=) */

loc_0049E832: ;
    MEM32(edx) = ebx;

loc_0049E834: ;
    PUSH32(esp, 0);
    MEM32(esi + 0xB4) = ecx;
    PUSH32(esp, 0xFFFFFBFFu);
    ecx = esi;
    PUSH32(esp, 0); sub_0049AD6C(); /* call 0x0049AD6C */

loc_0049E848: ;
    ecx = MEM32(ebp + -4);
    MEM8(esi + 0x7F) = 0;

loc_0049E84F: ;
    eax = 0; /* xor self */
    (void)0; /* cmp MEM16(edi + 0x30), LO16(eax) - flags set for next jcc */
    SET_LO8(eax, (CMP_NE(MEM16(edi + 0x30), LO16(eax))) ? 1 : 0); /* setne */
    PUSH32(esp, eax);
    PUSH32(esp, edi);
    PUSH32(esp, esi);
    PUSH32(esp, 0); sub_0049DECF(); /* call 0x0049DECF */

loc_0049E860: ;
    eax = esi;

loc_0049E862: ;
    POP32(esp, edi);
    POP32(esp, esi);
    POP32(esp, ebx);
    esp = ebp;
    POP32(esp, ebp); /* leave */
    esp += 8; return; /* ret 4 */

}

/**
 * sub_0049E869
 * Original: 0x0049E869 - 0x0049E8B5 (76 bytes, 28 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0049E869(void)
{
    uint32_t ebp;
    int _flags = 0; /* fallback flag var */
    int _cf = 0; /* carry flag */

loc_0049E869: ;
    PUSH32(esp, ebp);
    ebp = esp;
    PUSH32(esp, ecx);
    eax = MEM32(ebp + 0xC);
    MEM32(eax + 0x20) = MEM32(eax + 0x20) & 0;
    MEM16(eax + 0x30) = MEM16(eax + 0x30) & 0;
    edx = MEM32(ebp + 8);
    MEM32(ebp + -4) = ecx;
    PUSH32(esp, ebx);
    SET_LO8(ebx, MEM8(ebp + 0x10));
    SET_LO8(ecx, LO8(ebx));
    SET_LO8(ecx, LO8(ecx) & 2);
    SET_LO8(ecx, (uint32_t)(-(int32_t)LO8(ecx)));
    SET_LO8(ecx, _cf ? 0xFFFFFFFF : 0); /* sbb self (CF extend) */
    SET_LO8(ecx, LO8(ecx) & 4);
    SET_LO8(ecx, LO8(ecx) + 0x14);
    (void)0; /* test LO8(ebx), 3 - flags set for next jcc */
    PUSH32(esp, esi);
    MEM32(eax + 0x1C) = edx;
    MEM32(eax + 0x24) = 1;
    MEM8(eax + 0x32) = LO8(ebx);
    MEM8(eax + 0x33) = LO8(ecx);
    esi = MEM32(edx + 0xA4);
    PUSH32(esp, edi);
    MEM32(eax + 0x28) = esi;
    if (TEST_Z(LO8(ebx), 3)) { sub_0049E8B5(); return; } /* je: equal / zero */

loc_0049E8B2: ;
    esi++;
    g_seh_ebp = ebp; sub_0049E8C0(); return; /* tail jmp 0x0049E8C0 */

}

/**
 * sub_0049E901
 * Original: 0x0049E901 - 0x0049E9DE (221 bytes, 82 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0049E901(void)
{
    uint32_t ebp;
    int _flags = 0; /* fallback flag var */

loc_0049E901: ;
    PUSH32(esp, ebp);
    ebp = esp;
    PUSH32(esp, ecx);
    PUSH32(esp, ebx);
    PUSH32(esp, esi);
    esi = MEM32(ebp + 8);
    esi = esi + 0xFFFFFF94u;
    ebx = 0; /* xor self */
    (void)0; /* cmp MEM32(esi + 0x88), ebx - flags set for next jcc */
    PUSH32(esp, edi);
    edi = MEM32(ecx + 0x1D8);
    MEM32(ebp + -4) = ecx;
    if (CMP_EQ(MEM32(esi + 0x88), ebx)) goto loc_0049E927; /* je: equal / zero */

loc_0049E921: ;
    PUSH32(esp, esi);
    PUSH32(esp, 0); sub_0049E2C5(); /* call 0x0049E2C5 */

loc_0049E927: ;
    eax = MEM32(esi + 0x8C);
    if (CMP_EQ(eax, ebx)) goto loc_0049E951; /* je: equal / zero */

loc_0049E931: ;
    if (CMP_B(edi, eax)) goto loc_0049E951; /* jb: below (unsigned <) */

loc_0049E935: ;
    ecx = MEM32(ebp + -4);
    PUSH32(esp, 0x8007274Cu);
    PUSH32(esp, esi);
    MEM32(esi + 0x8C) = ebx;
    PUSH32(esp, 0); sub_0049E08D(); /* call 0x0049E08D */

loc_0049E949: ;
    if (TEST_Z(eax, eax)) goto loc_0049E9D7; /* je: equal / zero */

loc_0049E951: ;
    eax = MEM32(esi + 0x90);
    if (CMP_EQ(eax, ebx)) goto loc_0049E972; /* je: equal / zero */

loc_0049E95B: ;
    if (CMP_B(edi, eax)) goto loc_0049E972; /* jb: below (unsigned <) */

loc_0049E95F: ;
    ecx = MEM32(ebp + -4);
    PUSH32(esp, esi);
    MEM32(esi + 0x90) = ebx;
    PUSH32(esp, 0); sub_0049E79A(); /* call 0x0049E79A */

loc_0049E96E: ;
    if (TEST_Z(eax, eax)) goto loc_0049E9D7; /* je: equal / zero */

loc_0049E972: ;
    eax = esi + 0x94;
    edx = MEM32(eax);
    if (CMP_EQ(edx, ebx)) goto loc_0049E991; /* je: equal / zero */

loc_0049E97E: ;
    if (CMP_B(edi, edx)) goto loc_0049E991; /* jb: below (unsigned <) */

loc_0049E982: ;
    ecx = MEM32(ebp + -4);
    PUSH32(esp, 1);
    PUSH32(esp, esi);
    MEM32(eax) = ebx;
    PUSH32(esp, 0); sub_0049C343(); /* call 0x0049C343 */

loc_0049E98F: ;
    goto loc_0049E9D7;

loc_0049E991: ;
    if (CMP_EQ(MEM32(esi + 0x88), ebx)) goto loc_0049E99D; /* je: equal / zero */

loc_0049E999: ;
    ecx = edi;
    goto loc_0049E9A0;

loc_0049E99D: ;
    ecx = ecx | 0xFFFFFFFFu;

loc_0049E9A0: ;
    eax = MEM32(esi + 0x8C);
    if (CMP_BE(eax, ebx)) goto loc_0049E9B0; /* jbe: below or equal (unsigned <=) */

loc_0049E9AA: ;
    if (CMP_AE(eax, ecx)) goto loc_0049E9B0; /* jae: above or equal (unsigned >=) */

loc_0049E9AE: ;
    ecx = eax;

loc_0049E9B0: ;
    eax = MEM32(esi + 0x90);
    if (CMP_BE(eax, ebx)) goto loc_0049E9C0; /* jbe: below or equal (unsigned <=) */

loc_0049E9BA: ;
    if (CMP_AE(eax, ecx)) goto loc_0049E9C0; /* jae: above or equal (unsigned >=) */

loc_0049E9BE: ;
    ecx = eax;

loc_0049E9C0: ;
    if (CMP_BE(edx, ebx)) goto loc_0049E9CA; /* jbe: below or equal (unsigned <=) */

loc_0049E9C4: ;
    if (CMP_AE(edx, ecx)) goto loc_0049E9CA; /* jae: above or equal (unsigned >=) */

loc_0049E9C8: ;
    ecx = edx;

loc_0049E9CA: ;
    PUSH32(esp, ecx);
    ecx = MEM32(ebp + -4);
    esi = esi + 0x6C;
    PUSH32(esp, esi);
    PUSH32(esp, 0); sub_00492F6E(); /* call 0x00492F6E */

loc_0049E9D7: ;
    POP32(esp, edi);
    POP32(esp, esi);
    POP32(esp, ebx);
    esp = ebp;
    POP32(esp, ebp); /* leave */
    esp += 8; return; /* ret 4 */

}

/**
 * sub_0049E9DE
 * Original: 0x0049E9DE - 0x0049EA65 (135 bytes, 49 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0049E9DE(void)
{
    uint32_t ebp;
    int _flags = 0; /* fallback flag var */
    int _cf = 0; /* carry flag */
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_0049E9DE: ;
    PUSH32(esp, ebx);
    PUSH32(esp, esi);
    esi = MEM32(esp + 0xC);
    PUSH32(esp, edi);
    edi = ecx;
    ecx = esi + 0x34;
    eax = MEM32(ecx);
    if (CMP_EQ(eax, ecx)) goto loc_0049EA05; /* je: equal / zero */

loc_0049E9F0: ;
    ecx = MEM32(eax);
    edx = MEM32(eax + 4);
    MEM32(edx) = ecx;
    eax = eax + 0xFFFFFFECu;
    MEM32(ecx + 4) = edx;
    PUSH32(esp, eax);
    ecx = edi;
    PUSH32(esp, 0); sub_0049ADCD(); /* call 0x0049ADCD */

loc_0049EA05: ;
    eax = MEM32(esi + 0x98);
    MEM32(esi + 0xA4) = eax;
    MEM32(esi + 0xA0) = eax;
    MEM32(esi + 0x9C) = eax;
    eax = MEM32(esp + 0x14);
    PUSH32(esp, 0x49DEBD);
    eax = (uint32_t)(-(int32_t)eax);
    PUSH32(esp, 0x38);
    eax = _cf ? 0xFFFFFFFF : 0; /* sbb self (CF extend) */
    PUSH32(esp, 4);
    eax = eax & 0x40000;
    PUSH32(esp, eax);
    eax = 0; /* xor self */
    SET_LO16(eax, MEM16(esi + 0x48));
    ecx = edi;
    PUSH32(esp, eax);
    eax = 0; /* xor self */
    SET_LO16(eax, MEM16(esi + 0x4A));
    PUSH32(esp, eax);
    PUSH32(esp, MEM32(esi + 0x44));
    PUSH32(esp, esi);
    PUSH32(esp, 0); sub_0049DE4C(); /* call 0x0049DE4C */

loc_0049EA4D: ;
    ebx = eax;
    if (TEST_NZ(ebx, ebx)) { sub_0049EA65(); return; } /* jne: not equal / not zero */

loc_0049EA53: ;
    ebx = 0x80072747u;
    PUSH32(esp, ebx);
    PUSH32(esp, esi);
    ecx = edi;
    PUSH32(esp, 0); sub_0049E08D(); /* call 0x0049E08D */

loc_0049EA61: ;
    eax = ebx;
    g_seh_ebp = ebp; sub_0049EABB(); return; /* tail jmp 0x0049EABB */

}

/**
 * sub_0049EAC1
 * Original: 0x0049EAC1 - 0x0049EAF6 (53 bytes, 21 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0049EAC1(void)
{
    uint32_t ebp;
    int _flags = 0; /* fallback flag var */
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_0049EAC1: ;
    PUSH32(esp, esi);
    esi = MEM32(esp + 8);
    PUSH32(esp, edi);
    PUSH32(esp, 0x49DEBD);
    eax = 0; /* xor self */
    SET_LO16(eax, MEM16(esi + 0x48));
    PUSH32(esp, 0x38);
    PUSH32(esp, 0);
    PUSH32(esp, 0);
    edi = ecx;
    PUSH32(esp, eax);
    eax = 0; /* xor self */
    SET_LO16(eax, MEM16(esi + 0x4A));
    PUSH32(esp, eax);
    PUSH32(esp, MEM32(esi + 0x44));
    PUSH32(esp, esi);
    PUSH32(esp, 0); sub_0049DE4C(); /* call 0x0049DE4C */

loc_0049EAEB: ;
    if (TEST_NZ(eax, eax)) { sub_0049EAF6(); return; } /* jne: not equal / not zero */

loc_0049EAEF: ;
    eax = 0x80072747u;
    g_seh_ebp = ebp; sub_0049EB05(); return; /* tail jmp 0x0049EB05 */

}

/**
 * sub_0049EB0A
 * Original: 0x0049EB0A - 0x0049EB7E (116 bytes, 43 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0049EB0A(void)
{
    uint32_t ebp;
    int _flags = 0; /* fallback flag var */

loc_0049EB0A: ;
    PUSH32(esp, ebp);
    ebp = esp;
    PUSH32(esp, edi);
    eax = ebp + 0x14;
    PUSH32(esp, eax);
    PUSH32(esp, MEM32(ebp + 0x14));
    edi = ecx;
    PUSH32(esp, MEM32(ebp + 0x10));
    PUSH32(esp, 0); sub_0049D9A4(); /* call 0x0049D9A4 */

loc_0049EB1F: ;
    if (TEST_Z(eax, eax)) goto loc_0049EB79; /* je: equal / zero */

loc_0049EB23: ;
    ecx = MEM32(ebp + 0xC);
    eax = MEM32(ecx);
    eax = BSWAP32(eax); /* bswap */
    PUSH32(esp, esi);
    esi = MEM32(ebp + 8);
    MEM32(esi + 0xC0) = eax;
    eax++;
    MEM32(esi + 0xC4) = eax;
    eax = MEM32(ebp + 0x14);
    MEM32(esi + 0xBC) = eax;
    if (TEST_Z(MEM8(ecx + 9), 0x10)) goto loc_0049EB61; /* je: equal / zero */

loc_0049EB4A: ;
    PUSH32(esp, ecx);
    PUSH32(esp, esi);
    ecx = edi;
    PUSH32(esp, 0); sub_0049E4E4(); /* call 0x0049E4E4 */

loc_0049EB53: ;
    MEM32(esi + 0x88) = MEM32(esi + 0x88) + 0x20000;
    eax = 0; /* xor self */
    goto loc_0049EB6F;

loc_0049EB61: ;
    PUSH32(esp, 1);
    PUSH32(esp, esi);
    ecx = edi;
    MEM8(esi + 0x7C) = 3;
    PUSH32(esp, 0); sub_0049E9DE(); /* call 0x0049E9DE */

loc_0049EB6F: ;
    ecx = 0; /* xor self */
    (void)0; /* test eax, eax - flags set for next jcc */
    SET_LO8(ecx, (CMP_GE(eax & eax, 0)) ? 1 : 0); /* setge */
    POP32(esp, esi);
    eax = ecx;

loc_0049EB79: ;
    POP32(esp, edi);
    POP32(esp, ebp);
    esp += 20; return; /* ret 16 */

}

/**
 * sub_0049EB7E
 * Original: 0x0049EB7E - 0x0049EC7B (253 bytes, 96 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0049EB7E(void)
{
    uint32_t ebp;
    int _flags = 0; /* fallback flag var */
    int _cf = 0; /* carry flag */

loc_0049EB7E: ;
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, ebp);
    ebp = esp;
    PUSH32(esp, ecx);
    PUSH32(esp, ebx);
    PUSH32(esp, esi);
    PUSH32(esp, edi);
    ebx = ecx;
    edi = 0; /* xor self */
    PUSH32(esp, 0); RECOMP_ICALL_SAFE(MEM32(0x5610F0), _icall_esp); /* indirect call */
    }

loc_0049EB8F: ;
    (void)0; /* test MEM8(ebp + 0xC), 0x10 - flags set for next jcc */
    esi = MEM32(ebp + 8);
    MEM8(ebp + -4) = LO8(eax);
    if (TEST_Z(MEM8(ebp + 0xC), 0x10)) goto loc_0049EBEF; /* je: equal / zero */

loc_0049EB9B: ;
    if (TEST_NZ(MEM8(esi + 0xC), 0x10)) goto loc_0049EBEF; /* jne: not equal / not zero */

loc_0049EBA1: ;
    PUSH32(esp, 0x10);
    PUSH32(esp, 0xFFFFFFFFu);
    ecx = esi;
    PUSH32(esp, 0); sub_0049AD6C(); /* call 0x0049AD6C */

loc_0049EBAC: ;
    if (CMP_EQ(MEM32(esi + 0x2C), edi)) goto loc_0049EBDA; /* je: equal / zero */

loc_0049EBB1: ;
    PUSH32(esp, esi);
    ecx = ebx;
    PUSH32(esp, 0); sub_0049E290(); /* call 0x0049E290 */

loc_0049EBB9: ;
    edi = MEM32(ebp + 0x10);
    edi = (uint32_t)(-(int32_t)edi);
    eax = 0x80072746u;
    edi = _cf ? 0xFFFFFFFF : 0; /* sbb self (CF extend) */
    PUSH32(esp, eax);
    edi = edi & 0x7FF8D8BA;
    PUSH32(esp, esi);
    ecx = ebx;
    edi = edi + eax;
    PUSH32(esp, 0); sub_0049E08D(); /* call 0x0049E08D */

loc_0049EBD6: ;
    esi = eax;
    goto loc_0049EBEF;

loc_0049EBDA: ;
    eax = MEM32(esi + 0x20);
    if (TEST_Z(eax, eax)) goto loc_0049EBEF; /* je: equal / zero */

loc_0049EBE1: ;
    PUSH32(esp, 0x8007274Au);
    PUSH32(esp, eax);
    PUSH32(esp, esi);
    ecx = ebx;
    PUSH32(esp, 0); sub_0049B606(); /* call 0x0049B606 */

loc_0049EBEF: ;
    if (TEST_Z(MEM8(ebp + 0xC), 8)) goto loc_0049EC5B; /* je: equal / zero */

loc_0049EBF5: ;
    if (TEST_NZ(MEM8(esi + 0xC), 8)) goto loc_0049EC5B; /* jne: not equal / not zero */

loc_0049EBFB: ;
    eax = MEM32(esi + 0x30);
    if (TEST_Z(eax, eax)) goto loc_0049EC10; /* je: equal / zero */

loc_0049EC02: ;
    PUSH32(esp, 0x8007274Au);
    PUSH32(esp, eax);
    PUSH32(esp, esi);
    ecx = ebx;
    PUSH32(esp, 0); sub_0049B606(); /* call 0x0049B606 */

loc_0049EC10: ;
    eax = ZX8(MEM8(esi + 0x7C));
    if (CMP_B(eax, 3)) goto loc_0049EC56; /* jb: below (unsigned <) */

loc_0049EC19: ;
    if (CMP_BE(eax, 4)) goto loc_0049EC42; /* jbe: below or equal (unsigned <=) */

loc_0049EC1E: ;
    if (CMP_NE(eax, 9)) goto loc_0049EC56; /* jne: not equal / not zero */

loc_0049EC23: ;
    PUSH32(esp, esi);
    ecx = ebx;
    PUSH32(esp, 0); sub_0049EAC1(); /* call 0x0049EAC1 */

loc_0049EC2B: ;
    edi = eax;
    if (TEST_S(edi, edi)) goto loc_0049EC5B; /* jl: less (signed <) */

loc_0049EC31: ;
    MEM8(esi + 0x7C) = 0xA;

loc_0049EC35: ;
    PUSH32(esp, 8);
    PUSH32(esp, 0xFFFFFFFFu);
    ecx = esi;
    PUSH32(esp, 0); sub_0049AD6C(); /* call 0x0049AD6C */

loc_0049EC40: ;
    goto loc_0049EC5B;

loc_0049EC42: ;
    PUSH32(esp, esi);
    ecx = ebx;
    PUSH32(esp, 0); sub_0049EAC1(); /* call 0x0049EAC1 */

loc_0049EC4A: ;
    edi = eax;
    if (TEST_S(edi, edi)) goto loc_0049EC5B; /* jl: less (signed <) */

loc_0049EC50: ;
    MEM8(esi + 0x7C) = 5;
    goto loc_0049EC35;

loc_0049EC56: ;
    edi = 0x80072749u;

loc_0049EC5B: ;
    PUSH32(esp, 0);
    PUSH32(esp, 0xFFFFFF7Fu);
    ecx = esi;
    PUSH32(esp, 0); sub_0049AD6C(); /* call 0x0049AD6C */

loc_0049EC69: ;
    SET_LO8(ecx, MEM8(ebp + -4));
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, 0); RECOMP_ICALL_SAFE(MEM32(0x5610E8), _icall_esp); /* indirect call */
    }

loc_0049EC72: ;
    eax = edi;
    POP32(esp, edi);
    POP32(esp, esi);
    POP32(esp, ebx);
    esp = ebp;
    POP32(esp, ebp); /* leave */
    esp += 16; return; /* ret 12 */

}

/**
 * sub_0049EC7B
 * Original: 0x0049EC7B - 0x0049EE1A (415 bytes, 147 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0049EC7B(void)
{
    uint32_t ebp;
    int _flags = 0; /* fallback flag var */

loc_0049EC7B: ;
    PUSH32(esp, ebp);
    ebp = esp;
    esp = esp - 0x28;
    MEM32(ebp + -24) = MEM32(ebp + -24) & 0;
    PUSH32(esp, ebx);
    ebx = MEM32(ebp + 8);
    eax = MEM32(ebx + 0x58);
    edx = MEM32(ebx + 0xBC);
    eax = eax - MEM32(ebx + 0x3C);
    PUSH32(esp, esi);
    (void)0; /* cmp eax, edx - flags set for next jcc */
    MEM32(ebp + -28) = ecx;
    ecx = MEM32(ebp + 0xC);
    esi = MEM32(ecx + 0x10);
    PUSH32(esp, edi);
    edi = MEM32(ecx + 8);
    MEM32(ebp + -20) = edi;
    MEM32(ebp + -40) = edx;
    if (CMP_A(eax, edx)) goto loc_0049ECAF; /* ja: above (unsigned >) */

loc_0049ECAD: ;
    eax = edx;

loc_0049ECAF: ;
    if (CMP_BE(esi, eax)) goto loc_0049ECBB; /* jbe: below or equal (unsigned <=) */

loc_0049ECB3: ;
    MEM32(ebp + -16) = edx;
    MEM32(ecx + 0x10) = edx;
    esi = edx;

loc_0049ECBB: ;
    (void)0; /* test esi, esi - flags set for next jcc */
    eax = MEM32(edi + 4);
    MEM32(ebp + -4) = eax;
    eax = MEM32(edi);
    MEM32(ebp + 8) = eax;
    if (CMP_BE(esi & esi, 0)) goto loc_0049EE02; /* jbe: below or equal (unsigned <=) */

loc_0049ECCE: ;
    goto loc_0049ECD3;

loc_0049ECD0: ;
    edx = MEM32(ebp + -40);

loc_0049ECD3: ;
    (void)0; /* cmp edx, esi - flags set for next jcc */
    MEM32(ebp + -8) = edx;
    if (CMP_B(edx, esi)) goto loc_0049ECDD; /* jb: below (unsigned <) */

loc_0049ECDA: ;
    MEM32(ebp + -8) = esi;

loc_0049ECDD: ;
    PUSH32(esp, 0x49DEBD);
    ecx = MEM32(ebp + -28);
    PUSH32(esp, 0x38);
    PUSH32(esp, MEM32(ebp + -8));
    eax = 0; /* xor self */
    SET_LO16(eax, MEM16(ebx + 0x48));
    PUSH32(esp, MEM32(ebp + 0x10));
    PUSH32(esp, eax);
    eax = 0; /* xor self */
    SET_LO16(eax, MEM16(ebx + 0x4A));
    PUSH32(esp, eax);
    PUSH32(esp, MEM32(ebx + 0x44));
    PUSH32(esp, ebx);
    PUSH32(esp, 0); sub_0049DE4C(); /* call 0x0049DE4C */

loc_0049ED04: ;
    (void)0; /* test eax, eax - flags set for next jcc */
    MEM32(ebp + -32) = eax;
    if (TEST_Z(eax, eax)) goto loc_0049EDE0; /* je: equal / zero */

loc_0049ED0F: ;
    esi = esi - MEM32(ebp + -8);
    ecx = eax;
    MEM32(ebp + -16) = esi;
    PUSH32(esp, 0); sub_00493573(); /* call 0x00493573 */

loc_0049ED1C: ;
    ecx = MEM32(ebp + -8);
    (void)0; /* cmp ecx, MEM32(ebp + 8) - flags set for next jcc */
    MEM32(ebp + -24) = eax;
    if (CMP_A(ecx, MEM32(ebp + 8))) goto loc_0049ED42; /* ja: above (unsigned >) */

loc_0049ED27: ;
    esi = MEM32(ebp + -4);
    edi = eax;
    eax = ecx;
    MEM32(ebp + -4) = MEM32(ebp + -4) + eax;
    ecx = ecx >> 2;
    memcpy((void*)XBOX_PTR(edi), (void*)XBOX_PTR(esi), ecx * 4);
    esi += ecx * 4; edi += ecx * 4; ecx = 0; /* rep movsd */
    ecx = eax;
    ecx = ecx & 3;
    MEM32(ebp + 8) = MEM32(ebp + 8) - eax;
    memcpy((void*)XBOX_PTR(edi), (void*)XBOX_PTR(esi), ecx);
    esi += ecx; edi += ecx; ecx = 0; /* rep movsb */
    goto loc_0049ED98;

loc_0049ED42: ;
    (void)0; /* test ecx, ecx - flags set for next jcc */
    MEM32(ebp + -12) = ecx;
    if (TEST_Z(ecx, ecx)) goto loc_0049ED9E; /* je: equal / zero */

loc_0049ED49: ;
    goto loc_0049ED4E;

loc_0049ED4B: ;
    edi = MEM32(ebp + -20);

loc_0049ED4E: ;
    if (CMP_NE(MEM32(ebp + 8), 0)) goto loc_0049ED69; /* jne: not equal / not zero */

loc_0049ED54: ;
    eax = MEM32(edi + 0xC);
    edi = edi + 8;
    MEM32(ebp + -4) = eax;
    eax = MEM32(edi);
    (void)0; /* test eax, eax - flags set for next jcc */
    MEM32(ebp + 8) = eax;
    if (TEST_Z(eax, eax)) goto loc_0049ED54; /* je: equal / zero */

loc_0049ED66: ;
    MEM32(ebp + -20) = edi;

loc_0049ED69: ;
    edx = MEM32(ebp + 8);
    if (CMP_AE(MEM32(ebp + -12), edx)) goto loc_0049ED74; /* jae: above or equal (unsigned >=) */

loc_0049ED71: ;
    edx = MEM32(ebp + -12);

loc_0049ED74: ;
    esi = MEM32(ebp + -4);
    edi = MEM32(ebp + -24);
    MEM32(ebp + -24) = MEM32(ebp + -24) + edx;
    MEM32(ebp + -4) = MEM32(ebp + -4) + edx;
    MEM32(ebp + 8) = MEM32(ebp + 8) - edx;
    ecx = edx;
    eax = ecx;
    ecx = ecx >> 2;
    memcpy((void*)XBOX_PTR(edi), (void*)XBOX_PTR(esi), ecx * 4);
    esi += ecx * 4; edi += ecx * 4; ecx = 0; /* rep movsd */
    ecx = eax;
    ecx = ecx & 3;
    MEM32(ebp + -12) = MEM32(ebp + -12) - edx;
    memcpy((void*)XBOX_PTR(edi), (void*)XBOX_PTR(esi), ecx);
    esi += ecx; edi += ecx; ecx = 0; /* rep movsb */
    if ((MEM32(ebp + -12) != 0)) goto loc_0049ED4B; /* jne: not equal / not zero */

loc_0049ED98: ;
    esi = MEM32(ebp + -16);
    edi = MEM32(ebp + -20);

loc_0049ED9E: ;
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, 0); RECOMP_ICALL_SAFE(MEM32(0x5610F0), _icall_esp); /* indirect call */
    }

loc_0049EDA4: ;
    ecx = MEM32(ebp + -28);
    MEM8(ebp + -36) = LO8(eax);
    eax = MEM32(ebx + 0x40);
    (void)0; /* test eax, eax - flags set for next jcc */
    MEM32(ebp + -24) = eax;
    if (TEST_S(eax, eax)) goto loc_0049EDF1; /* jl: less (signed <) */

loc_0049EDB4: ;
    PUSH32(esp, MEM32(ebp + -8));
    (void)0; /* test esi, esi - flags set for next jcc */
    SET_LO8(eax, (TEST_Z(esi, esi)) ? 1 : 0); /* sete */
    eax = eax * 8 + 0x10;
    PUSH32(esp, eax);
    PUSH32(esp, MEM32(ebp + -32));
    PUSH32(esp, ebx);
    PUSH32(esp, 0); sub_0049E869(); /* call 0x0049E869 */

loc_0049EDCD: ;
    SET_LO8(ecx, MEM8(ebp + -36));
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, 0); RECOMP_ICALL_SAFE(MEM32(0x5610E8), _icall_esp); /* indirect call */
    }

loc_0049EDD6: ;
    if (CMP_A(esi & esi, 0)) goto loc_0049ECD0; /* ja: above (unsigned >) */

loc_0049EDDE: ;
    goto loc_0049EE02;

loc_0049EDE0: ;
    eax = MEM32(ebp + 0xC);
    MEM32(eax + 0x10) = MEM32(eax + 0x10) - esi;
    if ((MEM32(eax + 0x10) != 0)) goto loc_0049EE02; /* jne: not equal / not zero */

loc_0049EDE8: ;
    MEM32(ebp + -24) = 0x80072747u;
    goto loc_0049EE02;

loc_0049EDF1: ;
    PUSH32(esp, MEM32(ebp + -32));
    PUSH32(esp, 0); sub_00493441(); /* call 0x00493441 */

loc_0049EDF9: ;
    SET_LO8(ecx, MEM8(ebp + -36));
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, 0); RECOMP_ICALL_SAFE(MEM32(0x5610E8), _icall_esp); /* indirect call */
    }

loc_0049EE02: ;
    PUSH32(esp, 0x100);
    PUSH32(esp, 0xFFFFFFFFu);
    ecx = ebx;
    PUSH32(esp, 0); sub_0049AD6C(); /* call 0x0049AD6C */

loc_0049EE10: ;
    eax = MEM32(ebp + -24);
    POP32(esp, edi);
    POP32(esp, esi);
    POP32(esp, ebx);
    esp = ebp;
    POP32(esp, ebp); /* leave */
    esp += 16; return; /* ret 12 */

}

/**
 * sub_0049EE1A
 * Original: 0x0049EE1A - 0x0049F097 (637 bytes, 218 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0049EE1A(void)
{
    uint32_t ebp;
    int _flags = 0; /* fallback flag var */
    int _cf = 0; /* carry flag */

loc_0049EE1A: ;
    PUSH32(esp, ebp);
    ebp = esp;
    PUSH32(esp, ecx);
    PUSH32(esp, ecx);
    MEM32(ebp + -8) = MEM32(ebp + -8) & 0;
    PUSH32(esp, ebx);
    PUSH32(esp, esi);
    esi = MEM32(ebp + 8);
    PUSH32(esp, edi);
    edi = MEM32(ebp + 0xC);
    eax = edi;
    eax = eax - MEM32(esi + 0x9C);
    MEM32(ebp + -4) = ecx;
    if (CMP_LE(eax & eax, 0)) goto loc_0049EEB1; /* jle: less or equal (signed <=) */

loc_0049EE3B: ;
    (void)0; /* cmp MEM32(esi + 0xE4), 0 - flags set for next jcc */
    MEM32(esi + 0x9C) = edi;
    if (CMP_EQ(MEM32(esi + 0xE4), 0)) goto loc_0049EE5C; /* je: equal / zero */

loc_0049EE4A: ;
    eax = edi;
    eax = eax - MEM32(esi + 0xE0);
    if (CMP_LE(eax & eax, 0)) goto loc_0049EE5C; /* jle: less or equal (signed <=) */

loc_0049EE56: ;
    PUSH32(esp, esi);
    PUSH32(esp, 0); sub_0049DAD6(); /* call 0x0049DAD6 */

loc_0049EE5C: ;
    ebx = esi + 0x34;
    ecx = MEM32(ebx);
    eax = ecx;
    eax = eax - ebx;
    ecx = ecx + 0xFFFFFFECu;
    eax = (uint32_t)(-(int32_t)eax);
    eax = _cf ? 0xFFFFFFFF : 0; /* sbb self (CF extend) */
    eax = eax & ecx;
    if ((eax == 0)) goto loc_0049EEB1; /* je: equal / zero */

loc_0049EE70: ;
    if (CMP_EQ(MEM16(eax + 0x30), 0)) goto loc_0049EEB1; /* je: equal / zero */

loc_0049EE77: ;
    ecx = edi;
    ecx = ecx - MEM32(eax + 0x2C);
    if (((int32_t)ecx < 0)) goto loc_0049EEB1; /* js: sign (negative) */

loc_0049EE7E: ;
    ecx = MEM32(ebx);
    edx = MEM32(ecx);
    ecx = MEM32(ecx + 4);
    edi = MEM32(eax + 0x14);
    MEM32(ecx) = edx;
    MEM32(edx + 4) = ecx;
    ecx = MEM32(eax + 0x20);
    MEM32(esi + 0x3C) = MEM32(esi + 0x3C) - ecx;
    ecx = MEM32(ebp + -4);
    PUSH32(esp, eax);
    PUSH32(esp, 0); sub_0049ADCD(); /* call 0x0049ADCD */

loc_0049EE9C: ;
    MEM32(ebp + -8) = MEM32(ebp + -8) + 1;
    eax = edi;
    eax = eax - ebx;
    edi = edi + 0xFFFFFFECu;
    eax = (uint32_t)(-(int32_t)eax);
    eax = _cf ? 0xFFFFFFFF : 0; /* sbb self (CF extend) */
    eax = eax & edi;
    edi = MEM32(ebp + 0xC);
    if ((eax != 0)) goto loc_0049EE70; /* jne: not equal / not zero */

loc_0049EEB1: ;
    ebx = MEM32(esi + 0xC);
    ebx = ebx >> 0xA;
    ebx = ebx & 1;
    if ((ebx == 0)) goto loc_0049EEEB; /* je: equal / zero */

loc_0049EEBC: ;
    if (CMP_EQ(MEM32(ebp + -8), 0)) goto loc_0049EECA; /* je: equal / zero */

loc_0049EEC2: ;
    eax = MEM32(esi + 0xB8);
    goto loc_0049EF2D;

loc_0049EECA: ;
    eax = MEM32(esi + 0xBC);
    ecx = esi + 0xB4;
    MEM32(ecx) = MEM32(ecx) + eax;
    edx = MEM32(ecx);
    eax = 0xFFFF;
    if (CMP_BE(edx, eax)) goto loc_0049F008; /* jbe: below or equal (unsigned <=) */

loc_0049EEE7: ;
    MEM32(ecx) = eax;
    goto loc_0049EF33;

loc_0049EEEB: ;
    ecx = MEM32(esi + 0xB4);
    (void)0; /* cmp ecx, MEM32(esi + 0xB8) - flags set for next jcc */
    eax = MEM32(esi + 0xBC);
    if (CMP_AE(ecx, MEM32(esi + 0xB8))) goto loc_0049EF09; /* jae: above or equal (unsigned >=) */

loc_0049EEFF: ;
    ecx = ecx + eax;
    MEM32(esi + 0xB4) = ecx;
    goto loc_0049EF24;

loc_0049EF09: ;
    eax = (uint32_t)((int32_t)eax * (int32_t)eax);
    edx = 0; /* xor self */
    { uint64_t _dividend = ((uint64_t)edx << 32) | eax;
      eax = (uint32_t)(_dividend / (uint32_t)ecx);
      edx = (uint32_t)(_dividend % (uint32_t)ecx); }
    if (CMP_AE(eax, 1)) goto loc_0049EF18; /* jae: above or equal (unsigned >=) */

loc_0049EF15: ;
    eax = 0; /* xor self */
    eax++;

loc_0049EF18: ;
    MEM32(esi + 0xB4) = MEM32(esi + 0xB4) + eax;
    ecx = MEM32(esi + 0xB4);

loc_0049EF24: ;
    eax = 0xFFFF;
    if (CMP_BE(ecx, eax)) goto loc_0049EF33; /* jbe: below or equal (unsigned <=) */

loc_0049EF2D: ;
    MEM32(esi + 0xB4) = eax;

loc_0049EF33: ;
    if (CMP_EQ(MEM32(ebp + -8), 0)) goto loc_0049F008; /* je: equal / zero */

loc_0049EF3D: ;
    PUSH32(esp, 0);
    PUSH32(esp, 0xFFFFFDFFu);
    ecx = esi;
    PUSH32(esp, 0); sub_0049AD6C(); /* call 0x0049AD6C */

loc_0049EF4B: ;
    PUSH32(esp, 0);
    PUSH32(esp, 0xFFFFFBFFu);
    ecx = esi;
    PUSH32(esp, 0); sub_0049AD6C(); /* call 0x0049AD6C */

loc_0049EF59: ;
    eax = MEM32(esi + 0x9C);
    MEM32(esi + 0x90) = MEM32(esi + 0x90) & 0;
    (void)0; /* cmp eax, MEM32(esi + 0xA0) - flags set for next jcc */
    MEM8(esi + 0x7F) = 0;
    if (CMP_EQ(eax, MEM32(esi + 0xA0))) goto loc_0049EFBA; /* je: equal / zero */

loc_0049EF72: ;
    ecx = esi + 0x34;
    edx = MEM32(ecx);
    eax = edx;
    eax = eax - ecx;
    ecx = MEM32(esi + 0xDC);
    edx = edx + 0xFFFFFFECu;
    eax = (uint32_t)(-(int32_t)eax);
    eax = _cf ? 0xFFFFFFFF : 0; /* sbb self (CF extend) */
    eax = eax & edx;
    eax = MEM32(eax + 0x34);
    edx = MEM32(ebp + -4);
    eax = eax + ecx;
    ecx = MEM32(edx + 0x1D8);
    if (CMP_A(eax, ecx)) goto loc_0049EFA6; /* ja: above (unsigned >) */

loc_0049EF9C: ;
    PUSH32(esp, esi);
    ecx = edx;
    PUSH32(esp, 0); sub_0049E79A(); /* call 0x0049E79A */

loc_0049EFA4: ;
    goto loc_0049EFBA;

loc_0049EFA6: ;
    eax = eax - ecx;
    PUSH32(esp, eax);
    eax = esi + 0x6C;
    PUSH32(esp, eax);
    ecx = edx;
    PUSH32(esp, 0); sub_00492FD3(); /* call 0x00492FD3 */

loc_0049EFB4: ;
    MEM32(esi + 0x90) = eax;

loc_0049EFBA: ;
    eax = MEM32(esi + 0x3C);
    if (CMP_AE(eax, MEM32(esi + 0x58))) goto loc_0049F067; /* jae: above or equal (unsigned >=) */

loc_0049EFC6: ;
    ebx = MEM32(esi + 0x30);
    if (TEST_Z(ebx, ebx)) goto loc_0049EFF2; /* je: equal / zero */

loc_0049EFCD: ;
    ecx = MEM32(ebp + -4);
    PUSH32(esp, 0x40000);
    PUSH32(esp, ebx);
    PUSH32(esp, esi);
    PUSH32(esp, 0); sub_0049EC7B(); /* call 0x0049EC7B */

loc_0049EFDC: ;
    ecx = MEM32(ebx + 4);
    edx = MEM32(ebx + 0x10);
    PUSH32(esp, eax);
    PUSH32(esp, ebx);
    MEM32(ecx + 8) = edx;
    ecx = MEM32(ebp + -4);
    PUSH32(esp, esi);
    PUSH32(esp, 0); sub_0049B606(); /* call 0x0049B606 */

loc_0049EFF0: ;
    goto loc_0049F067;

loc_0049EFF2: ;
    if (TEST_Z(MEM8(esi + 0xD), 0x10)) goto loc_0049F067; /* je: equal / zero */

loc_0049EFF8: ;
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, 0);
    PUSH32(esp, 1);
    eax = esi + 0x10;
    PUSH32(esp, eax);
    PUSH32(esp, 0); RECOMP_ICALL_SAFE(MEM32(0x56114C), _icall_esp); /* indirect call */
    }

loc_0049F006: ;
    goto loc_0049F067;

loc_0049F008: ;
    eax = MEM32(esi + 0xC);
    if (TEST_Z(HI8(eax), 2)) goto loc_0049F043; /* je: equal / zero */

loc_0049F010: ;
    ecx = esi + 0x34;
    edx = MEM32(ecx);
    eax = edx;
    eax = eax - ecx;
    edx = edx + 0xFFFFFFECu;
    eax = (uint32_t)(-(int32_t)eax);
    eax = _cf ? 0xFFFFFFFF : 0; /* sbb self (CF extend) */
    eax = eax & edx;
    edi = edi - MEM32(eax + 0x28);
    if (((int32_t)edi < 0)) goto loc_0049F067; /* js: sign (negative) */

loc_0049F027: ;
    edx = MEM32(ebp + -4);
    edx = ZX8(MEM8(edx + 0x37));
    ecx = 0; /* xor self */
    SET_LO16(ecx, MEM16(eax + 0x30));
    edi = ZX16(LO16(ecx));
    edx--;
    if (CMP_L(edi, edx)) goto loc_0049F067; /* jl: less (signed <) */

loc_0049F03C: ;
    ecx--;
    MEM16(eax + 0x30) = LO16(ecx);
    goto loc_0049F067;

loc_0049F043: ;
    eax = MEM32(esi + 0x9C);
    if (CMP_EQ(eax, MEM32(esi + 0xA0))) goto loc_0049F067; /* je: equal / zero */

loc_0049F051: ;
    if (TEST_NZ(ebx, ebx)) goto loc_0049F067; /* jne: not equal / not zero */

loc_0049F055: ;
    MEM8(esi + 0x7F) = MEM8(esi + 0x7F) + 1;
    if (CMP_B(MEM8(esi + 0x7F), 4)) goto loc_0049F067; /* jb: below (unsigned <) */

loc_0049F05E: ;
    ecx = MEM32(ebp + -4);
    PUSH32(esp, esi);
    PUSH32(esp, 0); sub_0049E3AD(); /* call 0x0049E3AD */

loc_0049F067: ;
    if (TEST_Z(MEM8(esi + 0xD), 2)) goto loc_0049F07A; /* je: equal / zero */

loc_0049F06D: ;
    ecx = MEM32(ebp + -4);
    PUSH32(esp, esi);
    PUSH32(esp, 0); sub_0049E34C(); /* call 0x0049E34C */

loc_0049F076: ;
    if (TEST_NZ(eax, eax)) goto loc_0049F090; /* jne: not equal / not zero */

loc_0049F07A: ;
    if (CMP_EQ(MEM32(esi + 0x84), 0)) goto loc_0049F090; /* je: equal / zero */

loc_0049F083: ;
    ecx = MEM32(ebp + -4);
    PUSH32(esp, esi);
    PUSH32(esp, 0); sub_0049E6A3(); /* call 0x0049E6A3 */

loc_0049F08C: ;
    if (TEST_NZ(eax, eax)) goto loc_0049F07A; /* jne: not equal / not zero */

loc_0049F090: ;
    POP32(esp, edi);
    POP32(esp, esi);
    POP32(esp, ebx);
    esp = ebp;
    POP32(esp, ebp); /* leave */
    esp += 12; return; /* ret 8 */

}

/**
 * sub_0049F097
 * Original: 0x0049F097 - 0x0049F37C (741 bytes, 253 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0049F097(void)
{
    uint32_t ebp;
    int _flags = 0; /* fallback flag var */
    int _cf = 0; /* carry flag */

loc_0049F097: ;
    PUSH32(esp, ebp);
    ebp = esp;
    PUSH32(esp, ecx);
    PUSH32(esp, ecx);
    eax = MEM32(ebp + 0xC);
    (void)0; /* test MEM8(eax + 9), 0x10 - flags set for next jcc */
    PUSH32(esp, ebx);
    ebx = MEM32(ebp + 8);
    PUSH32(esp, esi);
    PUSH32(esp, edi);
    edi = MEM32(eax);
    edi = BSWAP32(edi); /* bswap */
    MEM32(ebp + -4) = ecx;
    MEM32(ebp + -8) = edi;
    if (TEST_Z(MEM8(eax + 9), 0x10)) goto loc_0049F1A4; /* je: equal / zero */

loc_0049F0B9: ;
    esi = MEM32(eax + 4);
    esi = BSWAP32(esi); /* bswap */
    ecx = esi;
    ecx = ecx - MEM32(ebx + 0x9C);
    if (((int32_t)ecx < 0)) goto loc_0049F1A4; /* js: sign (negative) */

loc_0049F0CC: ;
    ecx = esi;
    ecx = ecx - MEM32(ebx + 0xA0);
    if (CMP_LE(ecx & ecx, 0)) goto loc_0049F0E7; /* jle: less or equal (signed <=) */

loc_0049F0D8: ;
    MEM32(ebx + 0x88) = MEM32(ebx + 0x88) + 0x20000;
    goto loc_0049F373;

loc_0049F0E7: ;
    ecx = MEM32(ebx + 0xA8);
    edx = ecx;
    edx = edx - edi;
    if (((int32_t)edx < 0)) goto loc_0049F103; /* js: sign (negative) */

loc_0049F0F3: ;
    if (CMP_NE(ecx, edi)) goto loc_0049F120; /* jne: not equal / not zero */

loc_0049F0F7: ;
    ecx = MEM32(ebx + 0xAC);
    ecx = ecx - esi;
    if (CMP_G(ecx & ecx, 0)) goto loc_0049F120; /* jg: greater (signed >) */

loc_0049F103: ;
    SET_LO16(eax, MEM16(eax + 0xA));
    SET_HI8(ecx, LO8(eax));
    MEM32(ebx + 0xA8) = edi;
    MEM32(ebx + 0xAC) = esi;
    SET_LO8(ecx, HI8(eax));
    eax = ZX16(LO16(ecx));
    MEM32(ebx + 0xB0) = eax;

loc_0049F120: ;
    ecx = MEM32(ebp + -4);
    PUSH32(esp, esi);
    PUSH32(esp, ebx);
    PUSH32(esp, 0); sub_0049EE1A(); /* call 0x0049EE1A */

loc_0049F12A: ;
    SET_LO8(eax, MEM8(ebx + 0x7C));
    if (CMP_B(LO8(eax), 5)) goto loc_0049F1A1; /* jb: below (unsigned <) */

loc_0049F131: ;
    if (CMP_EQ(LO8(eax), 9)) goto loc_0049F1A1; /* je: equal / zero */

loc_0049F135: ;
    ecx = ebx + 0x34;
    if (CMP_NE(MEM32(ecx), ecx)) goto loc_0049F1A1; /* jne: not equal / not zero */

loc_0049F13C: ;
    eax = ZX8(LO8(eax));
    eax = eax - 5;
    if ((eax == 0)) goto loc_0049F19D; /* je: equal / zero */

loc_0049F144: ;
    eax--;
    eax--;
    if ((eax == 0)) goto loc_0049F15D; /* je: equal / zero */

loc_0049F148: ;
    eax = eax - 3;
    if ((eax != 0)) goto loc_0049F1A1; /* jne: not equal / not zero */

loc_0049F14D: ;
    ecx = MEM32(ebp + -4);
    PUSH32(esp, 1);
    PUSH32(esp, ebx);
    PUSH32(esp, 0); sub_0049C343(); /* call 0x0049C343 */

loc_0049F158: ;
    goto loc_0049F238;

loc_0049F15D: ;
    ecx = MEM32(ebp + -4);
    esi = MEM32(ebx + 0x94);
    (void)0; /* test esi, esi - flags set for next jcc */
    MEM8(ebx + 0x7C) = 8;
    eax = ZX8(MEM8(ecx + 0x34));
    edx = MEM32(ecx + 0x1D8);
    eax = eax + eax * 4;
    eax = edx + eax * 2;
    if (TEST_Z(esi, esi)) goto loc_0049F186; /* je: equal / zero */

loc_0049F17E: ;
    if (CMP_AE(eax, esi)) goto loc_0049F238; /* jae: above or equal (unsigned >=) */

loc_0049F186: ;
    eax = eax - edx;
    PUSH32(esp, eax);
    eax = ebx + 0x6C;
    PUSH32(esp, eax);
    PUSH32(esp, 0); sub_00492FD3(); /* call 0x00492FD3 */

loc_0049F192: ;
    MEM32(ebx + 0x94) = eax;
    goto loc_0049F238;

loc_0049F19D: ;
    MEM8(ebx + 0x7C) = 6;

loc_0049F1A1: ;
    eax = MEM32(ebp + 0xC);

loc_0049F1A4: ;
    if (CMP_AE(MEM8(ebx + 0x7C), 7)) goto loc_0049F373; /* jae: above or equal (unsigned >=) */

loc_0049F1AE: ;
    esi = MEM32(ebp + 0x14);
    if (TEST_Z(esi, esi)) goto loc_0049F373; /* je: equal / zero */

loc_0049F1B9: ;
    MEM32(ebx + 0x88) = MEM32(ebx + 0x88) + esi;
    if (CMP_NE(edi, MEM32(ebx + 0xC4))) goto loc_0049F1CF; /* jne: not equal / not zero */

loc_0049F1C7: ;
    if (CMP_BE(esi, MEM32(ebx + 0xC8))) goto loc_0049F21B; /* jbe: below or equal (unsigned <=) */

loc_0049F1CF: ;
    ecx = MEM32(ebp + -4);
    eax = ebp + 8;
    PUSH32(esp, eax);
    eax = ebp + 0x14;
    PUSH32(esp, eax);
    eax = edi + esi;
    PUSH32(esp, eax);
    PUSH32(esp, edi);
    PUSH32(esp, ebx);
    PUSH32(esp, 0); sub_0049D94B(); /* call 0x0049D94B */

loc_0049F1E5: ;
    if (TEST_NZ(eax, eax)) goto loc_0049F1FF; /* jne: not equal / not zero */

loc_0049F1E9: ;
    eax = MEM32(ebx + 0x88);
    eax = eax + 0x20000;
    MEM32(ebx + 0x88) = eax;
    goto loc_0049F373;

loc_0049F1FF: ;
    ecx = MEM32(ebp + 0x14);
    eax = ecx;
    eax = eax - edi;
    MEM32(ebp + 0x10) = MEM32(ebp + 0x10) + eax;
    eax = MEM32(ebp + 8);
    eax = eax - ecx;
    MEM32(ebp + 0x14) = eax;
    esi = eax;
    eax = MEM32(ebp + 0xC);
    MEM32(ebp + -8) = ecx;
    edi = ecx;

loc_0049F21B: ;
    if (TEST_Z(MEM8(ebx + 0xC), 0x10)) goto loc_0049F23F; /* je: equal / zero */

loc_0049F221: ;
    ecx = MEM32(ebp + -4);
    PUSH32(esp, ebx);
    PUSH32(esp, 0); sub_0049E290(); /* call 0x0049E290 */

loc_0049F22A: ;
    ecx = MEM32(ebp + -4);
    PUSH32(esp, 0x80072746u);
    PUSH32(esp, ebx);
    PUSH32(esp, 0); sub_0049E08D(); /* call 0x0049E08D */

loc_0049F238: ;
    eax = 0; /* xor self */
    goto loc_0049F375;

loc_0049F23F: ;
    if (CMP_EQ(MEM32(ebx + 0x20), 0)) goto loc_0049F27B; /* je: equal / zero */

loc_0049F245: ;
    if (CMP_NE(edi, MEM32(ebx + 0xC4))) goto loc_0049F27B; /* jne: not equal / not zero */

loc_0049F24D: ;
    ecx = ebx + 0x24;
    if (CMP_NE(MEM32(ecx), ecx)) goto loc_0049F27B; /* jne: not equal / not zero */

loc_0049F254: ;
    eax = ZX8(MEM8(eax + 9));
    ecx = MEM32(ebp + -4);
    PUSH32(esp, esi);
    PUSH32(esp, MEM32(ebp + 0x10));
    PUSH32(esp, eax);
    PUSH32(esp, ebx);
    PUSH32(esp, 0); sub_0049DCE5(); /* call 0x0049DCE5 */

loc_0049F266: ;
    if (CMP_EQ(eax, esi)) goto loc_0049F373; /* je: equal / zero */

loc_0049F26E: ;
    MEM32(ebp + 0x10) = MEM32(ebp + 0x10) + eax;
    esi = esi - eax;
    edi = edi + eax;
    MEM32(ebp + 0x14) = esi;
    MEM32(ebp + -8) = edi;

loc_0049F27B: ;
    ecx = MEM32(ebp + -4);
    PUSH32(esp, 0x6254454E);
    eax = esi + 0x14;
    PUSH32(esp, eax);
    PUSH32(esp, 0); sub_004931A2(); /* call 0x004931A2 */

loc_0049F28C: ;
    if (TEST_Z(eax, eax)) goto loc_0049F373; /* je: equal / zero */

loc_0049F294: ;
    ecx = MEM32(ebp + 0xC);
    edi = edi + esi;
    MEM32(eax + 0xC) = edi;
    MEM16(eax + 0x10) = 0x14;
    SET_LO8(ecx, MEM8(ecx + 9));
    MEM8(eax + 0x12) = LO8(ecx);
    ecx = esi;
    edx = ecx;
    MEM32(eax + 8) = esi;
    esi = MEM32(ebp + 0x10);
    ecx = ecx >> 2;
    edi = eax + 0x14;
    memcpy((void*)XBOX_PTR(edi), (void*)XBOX_PTR(esi), ecx * 4);
    esi += ecx * 4; edi += ecx * 4; ecx = 0; /* rep movsd */
    ecx = edx;
    ecx = ecx & 3;
    memcpy((void*)XBOX_PTR(edi), (void*)XBOX_PTR(esi), ecx);
    esi += ecx; edi += ecx; ecx = 0; /* rep movsb */
    esi = MEM32(ebp + -8);
    if (CMP_NE(esi, MEM32(ebx + 0xC4))) goto loc_0049F35E; /* jne: not equal / not zero */

loc_0049F2D0: ;
    edi = MEM32(ebx + 0x28);
    edx = ebx + 0x24;
    ecx = edi;
    ecx = ecx - edx;
    ecx = (uint32_t)(-(int32_t)ecx);
    ecx = _cf ? 0xFFFFFFFF : 0; /* sbb self (CF extend) */
    ecx = ecx & edi;
    if ((ecx == 0)) goto loc_0049F2F6; /* je: equal / zero */

loc_0049F2E2: ;
    if (CMP_EQ(MEM32(ecx + 0xC), esi)) goto loc_0049F2F6; /* je: equal / zero */

loc_0049F2E7: ;
    ecx = MEM32(ebp + -4);
    PUSH32(esp, eax);
    PUSH32(esp, esi);
    PUSH32(esp, ebx);
    PUSH32(esp, 0); sub_0049DB91(); /* call 0x0049DB91 */

loc_0049F2F2: ;
    esi = eax;
    goto loc_0049F306;

loc_0049F2F6: ;
    ecx = MEM32(edx + 4);
    esi = MEM32(ebp + 0x14);
    MEM32(eax) = edx;
    MEM32(eax + 4) = ecx;
    MEM32(ecx) = eax;
    MEM32(edx + 4) = eax;

loc_0049F306: ;
    ecx = MEM32(ebp + -4);
    MEM32(ebx + 0x2C) = MEM32(ebx + 0x2C) + esi;
    PUSH32(esp, esi);
    PUSH32(esp, ebx);
    PUSH32(esp, 0); sub_0049DA97(); /* call 0x0049DA97 */

loc_0049F313: ;
    esi = MEM32(ebx + 0x20);
    if (TEST_Z(esi, esi)) goto loc_0049F348; /* je: equal / zero */

loc_0049F31A: ;
    ecx = MEM32(ebp + -4);
    edi = MEM32(esi + 4);
    PUSH32(esp, esi);
    PUSH32(esp, ebx);
    PUSH32(esp, 0); sub_0049DD99(); /* call 0x0049DD99 */

loc_0049F327: ;
    MEM32(edi + 8) = MEM32(edi + 8) + eax;
    edi = 0; /* xor self */
    if (CMP_NE(MEM32(esi + 0x14), edi)) goto loc_0049F33C; /* jne: not equal / not zero */

loc_0049F331: ;
    ecx = MEM32(ebp + -4);
    PUSH32(esp, edi);
    PUSH32(esp, esi);
    PUSH32(esp, ebx);
    PUSH32(esp, 0); sub_0049B606(); /* call 0x0049B606 */

loc_0049F33C: ;
    ecx = MEM32(ebp + -4);
    PUSH32(esp, edi);
    PUSH32(esp, ebx);
    PUSH32(esp, 0); sub_0049DA97(); /* call 0x0049DA97 */

loc_0049F346: ;
    goto loc_0049F373;

loc_0049F348: ;
    if (TEST_Z(MEM8(ebx + 0xD), 8)) goto loc_0049F373; /* je: equal / zero */

loc_0049F34E: ;
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, 0);
    PUSH32(esp, 1);
    eax = ebx + 0x10;
    PUSH32(esp, eax);
    PUSH32(esp, 0); RECOMP_ICALL_SAFE(MEM32(0x56114C), _icall_esp); /* indirect call */
    }

loc_0049F35C: ;
    goto loc_0049F373;

loc_0049F35E: ;
    ecx = MEM32(ebp + -4);
    MEM32(ebx + 0x88) = MEM32(ebx + 0x88) + 0x20000;
    PUSH32(esp, eax);
    PUSH32(esp, esi);
    PUSH32(esp, ebx);
    PUSH32(esp, 0); sub_0049DC43(); /* call 0x0049DC43 */

loc_0049F373: ;
    eax = ebx;

loc_0049F375: ;
    POP32(esp, edi);
    POP32(esp, esi);
    POP32(esp, ebx);
    esp = ebp;
    POP32(esp, ebp); /* leave */
    esp += 20; return; /* ret 16 */

}

/**
 * sub_0049F37C
 * Original: 0x0049F37C - 0x0049F3E3 (103 bytes, 35 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0049F37C(void)
{
    uint32_t ebp;
    int _flags = 0; /* fallback flag var */
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_0049F37C: ;
    PUSH32(esp, ebx);
    PUSH32(esp, esi);
    esi = MEM32(esp + 0xC);
    PUSH32(esp, edi);
    edi = 0; /* xor self */
    (void)0; /* cmp MEM32(esp + 0x14), edi - flags set for next jcc */
    ebx = ecx;
    if (CMP_NE(MEM32(esp + 0x14), edi)) { sub_0049F3E3(); return; } /* jne: not equal / not zero */

loc_0049F38D: ;
    if (CMP_B(MEM8(esi + 0x7C), 3)) { sub_0049F3E3(); return; } /* jb: below (unsigned <) */

loc_0049F393: ;
    if (CMP_EQ(MEM16(esi + 0x80), LO16(edi))) goto loc_0049F3A5; /* je: equal / zero */

loc_0049F39C: ;
    if (CMP_BE(MEM16(esi + 0x82), LO16(edi))) { sub_0049F3E3(); return; } /* jbe: below or equal (unsigned <=) */

loc_0049F3A5: ;
    PUSH32(esp, edi);
    PUSH32(esp, 0x18);
    PUSH32(esp, esi);
    ecx = ebx;
    PUSH32(esp, 0); sub_0049EB7E(); /* call 0x0049EB7E */

loc_0049F3B0: ;
    if (TEST_S(eax, eax)) { sub_0049F3E3(); return; } /* jl: less (signed <) */

loc_0049F3B4: ;
    if (CMP_EQ(MEM16(esi + 0x80), LO16(edi))) goto loc_0049F3C6; /* je: equal / zero */

loc_0049F3BD: ;
    eax = ZX16(MEM16(esi + 0x82));
    goto loc_0049F3CA;

loc_0049F3C6: ;
    eax = ZX8(MEM8(ebx + 0x36));

loc_0049F3CA: ;
    eax = eax + eax * 4;
    PUSH32(esp, eax);
    eax = esi + 0x6C;
    PUSH32(esp, eax);
    ecx = ebx;
    PUSH32(esp, 0); sub_00492FD3(); /* call 0x00492FD3 */

loc_0049F3D9: ;
    MEM32(esi + 0x94) = eax;
    eax = 0; /* xor self */
    g_seh_ebp = ebp; sub_0049F40B(); return; /* tail jmp 0x0049F40B */

}

/**
 * sub_0049F411
 * Original: 0x0049F411 - 0x0049F65A (585 bytes, 176 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0049F411(void)
{
    uint32_t ebp;
    int _flags = 0; /* fallback flag var */
    int _cf = 0; /* carry flag */

loc_0049F411: ;
    PUSH32(esp, ebp);
    ebp = esp;
    PUSH32(esp, ecx);
    PUSH32(esp, ecx);
    PUSH32(esp, ebx);
    PUSH32(esp, esi);
    ebx = 0; /* xor self */
    (void)0; /* cmp MEM16(ebp + 0x10), LO16(ebx) - flags set for next jcc */
    PUSH32(esp, edi);
    edi = ecx;
    if (CMP_EQ(MEM16(ebp + 0x10), LO16(ebx))) goto loc_0049F64E; /* je: equal / zero */

loc_0049F427: ;
    eax = MEM32(ebp + 0xC);
    if (CMP_EQ(eax, ebx)) goto loc_0049F64E; /* je: equal / zero */

loc_0049F432: ;
    if (CMP_EQ(eax, 0xFFFFFFFFu)) goto loc_0049F64E; /* je: equal / zero */

loc_0049F43B: ;
    ecx = eax;
    SET_LO16(ecx, LO16(ecx) & 0xF0);
    if (CMP_EQ(LO8(ecx), 0xE0)) goto loc_0049F64E; /* je: equal / zero */

loc_0049F44B: ;
    if (CMP_NE(LO8(eax), 0x7F)) goto loc_0049F45A; /* jne: not equal / not zero */

loc_0049F44F: ;
    if (CMP_NE(eax, 0x100007F)) goto loc_0049F64E; /* jne: not equal / not zero */

loc_0049F45A: ;
    esi = MEM32(ebp + 8);
    if (CMP_NE(MEM8(esi + 0x7C), 1)) goto loc_0049F46D; /* jne: not equal / not zero */

loc_0049F463: ;
    eax = 0x80072726u;
    goto loc_0049F653;

loc_0049F46D: ;
    if (TEST_NZ(MEM8(esi + 0xC), 0x20)) goto loc_0049F489; /* jne: not equal / not zero */

loc_0049F473: ;
    PUSH32(esp, ecx);
    eax = esp;
    PUSH32(esp, esi);
    ecx = edi;
    MEM16(eax) = LO16(ebx);
    PUSH32(esp, 0); sub_0049AFDA(); /* call 0x0049AFDA */

loc_0049F481: ;
    if (CMP_L(eax, ebx)) goto loc_0049F653; /* jl: less (signed <) */

loc_0049F489: ;
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, 0); RECOMP_ICALL_SAFE(MEM32(0x5610F0), _icall_esp); /* indirect call */
    }

loc_0049F48F: ;
    (void)0; /* test MEM8(esi + 0xC), 0x80 - flags set for next jcc */
    MEM8(ebp + 8) = LO8(eax);
    if (TEST_Z(MEM8(esi + 0xC), 0x80)) goto loc_0049F538; /* je: equal / zero */

loc_0049F49C: ;
    eax = MEM32(esi);
    ecx = MEM32(esi + 4);
    MEM32(ecx) = eax;
    MEM32(eax + 4) = ecx;
    SET_LO16(eax, ZX8(MEM8(edi + 0x36)));
    MEM16(esi + 0x82) = LO16(eax);
    eax = 0x200;
    MEM32(esi + 0xBC) = eax;
    MEM32(esi + 0xCC) = eax;
    MEM16(esi + 0x80) = LO16(ebx);
    MEM32(esi + 0x84) = ebx;
    eax = 0xFFFF;
    MEM32(esi + 0xB4) = eax;
    MEM32(esi + 0xB8) = eax;
    MEM32(esi + 0xD4) = ebx;
    eax = ZX8(MEM8(edi + 0x38));
    eax = eax + eax * 4;
    MEM32(esi + 0xD8) = eax;
    MEM32(esi + 0xDC) = eax;
    eax = esi + 0x64;
    MEM32(esi + 0x68) = eax;
    MEM32(eax) = eax;
    MEM32(esi + 0x74) = MEM32(esi + 0x74) | 0xFFFFFFFFu;
    PUSH32(esp, ebx);
    PUSH32(esp, 0xFFFE0667u);
    ecx = esi;
    MEM32(esi + 0x6C) = ebx;
    MEM32(esi + 0x78) = 0x49E901;
    PUSH32(esp, 0); sub_0049AD6C(); /* call 0x0049AD6C */

loc_0049F51D: ;
    eax = edi + 0xD38;
    MEM32(esi + 0x14) = ebx;
    MEM32(esi + 0x40) = ebx;
    ecx = MEM32(eax + 4);
    MEM32(esi) = eax;
    MEM32(esi + 4) = ecx;
    MEM32(ecx) = esi;
    MEM32(eax + 4) = esi;
    goto loc_0049F543;

loc_0049F538: ;
    eax = MEM32(esi + 0x40);
    if (CMP_L(eax, ebx)) goto loc_0049F5D7; /* jl: less (signed <) */

loc_0049F543: ;
    if (CMP_BE(MEM8(esi + 0x7C), 1)) goto loc_0049F558; /* jbe: below or equal (unsigned <=) */

loc_0049F549: ;
    if (CMP_NE(MEM32(ebp + 0x14), ebx)) goto loc_0049F558; /* jne: not equal / not zero */

loc_0049F54E: ;
    esi = 0x80072735u;
    goto loc_0049F5D9;

loc_0049F558: ;
    ecx = edi + 0xD38;
    edx = MEM32(ecx);
    eax = edx;
    eax = eax - ecx;
    eax = (uint32_t)(-(int32_t)eax);
    eax = _cf ? 0xFFFFFFFF : 0; /* sbb self (CF extend) */
    eax = eax & edx;
    if ((eax != 0)) goto loc_0049F5E8; /* jne: not equal / not zero */

loc_0049F56C: ;
    if (CMP_NE(MEM32(ebp + 0x14), ebx)) goto loc_0049F575; /* jne: not equal / not zero */

loc_0049F571: ;
    MEM8(esi + 0x7C) = 2;

loc_0049F575: ;
    eax = MEM32(esi + 0x5C);
    ecx = 0x518;
    eax = eax + 0x517;
    edx = 0; /* xor self */
    { uint64_t _dividend = ((uint64_t)edx << 32) | eax;
      eax = (uint32_t)(_dividend / (uint32_t)ecx);
      edx = (uint32_t)(_dividend % (uint32_t)ecx); }
    MEM32(esi + 0xCC) = ecx;
    eax = (uint32_t)((int32_t)eax * (int32_t)0x518);
    MEM32(esi + 0x5C) = eax;
    ecx = ZX8(MEM8(edi + 0x33));
    ecx = ecx << 0xA;
    if (CMP_BE(eax, ecx)) goto loc_0049F5A3; /* jbe: below or equal (unsigned <=) */

loc_0049F5A0: ;
    MEM32(esi + 0x5C) = ecx;

loc_0049F5A3: ;
    eax = MEM32(ebp + 0xC);
    MEM32(esi + 0x44) = eax;
    SET_LO16(eax, MEM16(ebp + 0x10));
    MEM16(esi + 0x48) = LO16(eax);
    eax = ebp + -8;
    PUSH32(esp, eax);
    PUSH32(esp, 0); sub_0049CFDE(); /* call 0x0049CFDE */

loc_0049F5BA: ;
    eax = MEM32(ebp + -8);
    PUSH32(esp, MEM32(ebp + 0x14));
    MEM32(esi + 0x98) = eax;
    eax = MEM32(esi + 0x5C);
    PUSH32(esp, esi);
    ecx = edi;
    MEM32(esi + 0xC8) = eax;
    PUSH32(esp, 0); sub_0049E9DE(); /* call 0x0049E9DE */

loc_0049F5D7: ;
    esi = eax;

loc_0049F5D9: ;
    SET_LO8(ecx, MEM8(ebp + 8));
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, 0); RECOMP_ICALL_SAFE(MEM32(0x5610E8), _icall_esp); /* indirect call */
    }

loc_0049F5E2: ;
    eax = esi;
    goto loc_0049F653;

loc_0049F5E6: ;
    ebx = 0; /* xor self */

loc_0049F5E8: ;
    if (CMP_EQ(eax, ebx)) goto loc_0049F5F0; /* je: equal / zero */

loc_0049F5EC: ;
    ecx = MEM32(eax);
    goto loc_0049F5F6;

loc_0049F5F0: ;
    ecx = MEM32(edi + 0xD38);

loc_0049F5F6: ;
    ebx = ecx;
    edx = edi + 0xD38;
    ebx = ebx - edx;
    ebx = (uint32_t)(-(int32_t)ebx);
    ebx = _cf ? 0xFFFFFFFF : 0; /* sbb self (CF extend) */
    ebx = ebx & ecx;
    ecx = MEM32(eax + 0xC);
    if (TEST_Z(LO8(ecx), 2)) goto loc_0049F63C; /* je: equal / zero */

loc_0049F60E: ;
    SET_LO16(edx, MEM16(eax + 0x4A));
    if (CMP_NE(LO16(edx), MEM16(esi + 0x4A))) goto loc_0049F63C; /* jne: not equal / not zero */

loc_0049F618: ;
    edx = MEM32(ebp + 0xC);
    if (CMP_NE(MEM32(eax + 0x44), edx)) goto loc_0049F63C; /* jne: not equal / not zero */

loc_0049F620: ;
    SET_LO16(edx, MEM16(ebp + 0x10));
    if (CMP_NE(MEM16(eax + 0x48), LO16(edx))) goto loc_0049F63C; /* jne: not equal / not zero */

loc_0049F62A: ;
    if (TEST_Z(ecx, 0x1000000)) goto loc_0049F647; /* je: equal / zero */

loc_0049F632: ;
    PUSH32(esp, 1);
    PUSH32(esp, eax);
    ecx = edi;
    PUSH32(esp, 0); sub_0049C343(); /* call 0x0049C343 */

loc_0049F63C: ;
    (void)0; /* test ebx, ebx - flags set for next jcc */
    eax = ebx;
    if (TEST_NZ(ebx, ebx)) goto loc_0049F5E6; /* jne: not equal / not zero */

loc_0049F642: ;
    goto loc_0049F56C;

loc_0049F647: ;
    esi = 0x80072740u;
    goto loc_0049F5D9;

loc_0049F64E: ;
    eax = 0x80072741u;

loc_0049F653: ;
    POP32(esp, edi);
    POP32(esp, esi);
    POP32(esp, ebx);
    esp = ebp;
    POP32(esp, ebp); /* leave */
    esp += 20; return; /* ret 16 */

}

/**
 * sub_0049F65A
 * Original: 0x0049F65A - 0x0049F717 (189 bytes, 68 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0049F65A(void)
{
    uint32_t ebp;
    int _flags = 0; /* fallback flag var */

loc_0049F65A: ;
    PUSH32(esp, ebp);
    ebp = esp;
    PUSH32(esp, edi);
    eax = ebp + 0x1C;
    PUSH32(esp, eax);
    PUSH32(esp, MEM32(ebp + 0x1C));
    edi = ecx;
    PUSH32(esp, MEM32(ebp + 0x18));
    PUSH32(esp, 0); sub_0049D9A4(); /* call 0x0049D9A4 */

loc_0049F66F: ;
    if (TEST_Z(eax, eax)) goto loc_0049F712; /* je: equal / zero */

loc_0049F677: ;
    PUSH32(esp, esi);
    PUSH32(esp, MEM32(ebp + 8));
    ecx = edi;
    PUSH32(esp, 0); sub_0049E1E7(); /* call 0x0049E1E7 */

loc_0049F682: ;
    esi = eax;
    if (TEST_Z(esi, esi)) goto loc_0049F70E; /* je: equal / zero */

loc_0049F68C: ;
    eax = MEM32(ebp + 0xC);
    MEM8(esi + 0x7C) = 3;
    eax = MEM32(eax);
    eax = BSWAP32(eax); /* bswap */
    MEM32(esi + 0xC0) = eax;
    PUSH32(esp, ebx);
    eax++;
    MEM32(esi + 0xC4) = eax;
    eax = MEM32(ebp + 0x1C);
    PUSH32(esp, 0x400000);
    PUSH32(esp, 0xFFFFFFFFu);
    ecx = esi;
    MEM32(esi + 0xBC) = eax;
    PUSH32(esp, 0); sub_0049AD6C(); /* call 0x0049AD6C */

loc_0049F6BC: ;
    PUSH32(esp, 1);
    PUSH32(esp, MEM32(ebp + 0x14));
    ecx = edi;
    PUSH32(esp, MEM32(ebp + 0x10));
    PUSH32(esp, esi);
    PUSH32(esp, 0); sub_0049F411(); /* call 0x0049F411 */

loc_0049F6CC: ;
    PUSH32(esp, 0);
    PUSH32(esp, 0xFFBFFFFFu);
    ecx = esi;
    ebx = eax;
    PUSH32(esp, 0); sub_0049AD6C(); /* call 0x0049AD6C */

loc_0049F6DC: ;
    (void)0; /* test ebx, ebx - flags set for next jcc */
    POP32(esp, ebx);
    if (CMP_GE(ebx & ebx, 0)) goto loc_0049F6FB; /* jge: greater or equal (signed >=) */

loc_0049F6E1: ;
    (void)0; /* test MEM8(esi + 0xE), 0x80 - flags set for next jcc */
    ecx = edi;
    if (TEST_Z(MEM8(esi + 0xE), 0x80)) goto loc_0049F6F1; /* je: equal / zero */

loc_0049F6E9: ;
    PUSH32(esp, esi);
    PUSH32(esp, 0); sub_0049ADA0(); /* call 0x0049ADA0 */

loc_0049F6EF: ;
    goto loc_0049F70E;

loc_0049F6F1: ;
    PUSH32(esp, 1);
    PUSH32(esp, esi);
    PUSH32(esp, 0); sub_0049C343(); /* call 0x0049C343 */

loc_0049F6F9: ;
    goto loc_0049F70E;

loc_0049F6FB: ;
    eax = edi + 0xD38;
    ecx = MEM32(eax + 4);
    MEM32(esi) = eax;
    MEM32(esi + 4) = ecx;
    MEM32(ecx) = esi;
    MEM32(eax + 4) = esi;

loc_0049F70E: ;
    eax = 0; /* xor self */
    eax++;
    POP32(esp, esi);

loc_0049F712: ;
    POP32(esp, edi);
    POP32(esp, ebp);
    esp += 28; return; /* ret 24 */

}

/**
 * sub_0049F717
 * Original: 0x0049F717 - 0x0049FA08 (753 bytes, 246 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0049F717(void)
{
    uint32_t ebp;
    int _flags = 0; /* fallback flag var */

loc_0049F717: ;
    PUSH32(esp, ebp);
    ebp = esp;
    PUSH32(esp, ecx);
    PUSH32(esp, ecx);
    PUSH32(esp, esi);
    esi = MEM32(ebp + 0x18);
    eax = 0; /* xor self */
    SET_LO8(eax, MEM8(esi + 8));
    PUSH32(esp, edi);
    MEM32(ebp + -4) = ecx;
    eax = eax >> 2;
    eax = eax & 0x3C;
    eax = eax - 0x14;
    MEM32(ebp + -8) = eax;
    eax = 0; /* xor self */
    SET_LO8(eax, MEM8(esi + 9));
    eax = eax & 2;
    PUSH32(esp, eax);
    eax = MEM32(ebp + 0xC);
    PUSH32(esp, 1);
    PUSH32(esp, MEM32(ebp + 0x10));
    PUSH32(esp, MEM32(eax + 0xC));
    PUSH32(esp, MEM32(ebp + 0x14));
    PUSH32(esp, 0); sub_0049C2A8(); /* call 0x0049C2A8 */

loc_0049F751: ;
    edi = eax;
    eax = MEM32(ebp + 8);
    eax = MEM32(eax + 8);
    ecx = eax;
    SET_LO8(ecx, LO8(ecx) & 7);
    if (CMP_AE(LO8(ecx), 4)) goto loc_0049F77D; /* jae: above or equal (unsigned >=) */

loc_0049F763: ;
    ecx = 0x2000000;
    if (TEST_NZ(ecx, eax)) goto loc_0049F77D; /* jne: not equal / not zero */

loc_0049F76C: ;
    if (TEST_Z(edi, edi)) goto loc_0049FA02; /* je: equal / zero */

loc_0049F774: ;
    if (TEST_Z(MEM32(edi + 0xC), ecx)) goto loc_0049FA02; /* je: equal / zero */

loc_0049F77D: ;
    (void)0; /* test edi, edi - flags set for next jcc */
    PUSH32(esp, ebx);
    if (TEST_Z(edi, edi)) goto loc_0049F89C; /* je: equal / zero */

loc_0049F786: ;
    SET_LO8(edx, MEM8(edi + 0x7C));
    if (CMP_B(LO8(edx), 4)) goto loc_0049F7FA; /* jb: below (unsigned <) */

loc_0049F78E: ;
    if (TEST_NZ(MEM8(esi + 9), 7)) goto loc_0049F7FA; /* jne: not equal / not zero */

loc_0049F794: ;
    PUSH32(esp, MEM32(ebp + 0x20));
    ecx = MEM32(ebp + -4);
    PUSH32(esp, MEM32(ebp + 0x1C));
    PUSH32(esp, esi);
    PUSH32(esp, edi);
    PUSH32(esp, 0); sub_0049F097(); /* call 0x0049F097 */

loc_0049F7A4: ;
    edi = eax;
    if (TEST_Z(edi, edi)) goto loc_0049FA01; /* je: equal / zero */

loc_0049F7AE: ;
    if (TEST_NZ(MEM8(esi + 9), 8)) goto loc_0049F857; /* jne: not equal / not zero */

loc_0049F7B8: ;
    eax = MEM32(edi + 0x88);
    if (CMP_BE(eax & eax, 0)) goto loc_0049FA01; /* jbe: below or equal (unsigned <=) */

loc_0049F7C6: ;
    ecx = MEM32(edi + 0xCC);
    ecx = ecx << 1;
    if (CMP_AE(eax, ecx)) goto loc_0049F9F8; /* jae: above or equal (unsigned >=) */

loc_0049F7D6: ;
    if (CMP_EQ(MEM32(edi + 0xC8), 0)) goto loc_0049F9F8; /* je: equal / zero */

loc_0049F7E3: ;
    ecx = MEM32(ebp + -4);
    PUSH32(esp, MEM32(ecx + 0x1D8));
    edi = edi + 0x6C;
    PUSH32(esp, edi);
    PUSH32(esp, 0); sub_00492F6E(); /* call 0x00492F6E */

loc_0049F7F5: ;
    goto loc_0049FA01;

loc_0049F7FA: ;
    if (TEST_Z(LO8(edx), LO8(edx))) goto loc_0049F89C; /* je: equal / zero */

loc_0049F802: ;
    SET_LO8(ebx, MEM8(esi + 9));
    eax = ZX8(LO8(ebx));
    edx = ZX8(LO8(edx));
    ecx = eax;
    ecx = ecx & 0x10;
    edx--;
    MEM8(ebp + 0x1B) = LO8(ebx);
    if ((edx == 0)) goto loc_0049F98D; /* je: equal / zero */

loc_0049F81A: ;
    edx--;
    if ((edx == 0)) goto loc_0049F92A; /* je: equal / zero */

loc_0049F821: ;
    ebx = MEM32(esi);
    ecx = ebp + -8;
    PUSH32(esp, ecx);
    ecx = ebp + 8;
    PUSH32(esp, ecx);
    ecx = eax;
    ecx = ecx >> 1;
    ecx = ecx & 1;
    ebx = BSWAP32(ebx); /* bswap */
    eax = eax & 1;
    ecx = ecx + ebx;
    eax = eax + ecx;
    eax = eax + MEM32(ebp + 0x20);
    ecx = MEM32(ebp + -4);
    PUSH32(esp, eax);
    PUSH32(esp, ebx);
    PUSH32(esp, edi);
    PUSH32(esp, 0); sub_0049D94B(); /* call 0x0049D94B */

loc_0049F849: ;
    if (TEST_NZ(eax, eax)) goto loc_0049F866; /* jne: not equal / not zero */

loc_0049F84D: ;
    if (TEST_NZ(MEM8(ebp + 0x1B), 4)) goto loc_0049F7B8; /* jne: not equal / not zero */

loc_0049F857: ;
    MEM32(edi + 0x88) = MEM32(edi + 0x88) + 0x20000;
    goto loc_0049F7B8;

loc_0049F866: ;
    if (TEST_Z(MEM8(ebp + 0x1B), 4)) goto loc_0049F87F; /* je: equal / zero */

loc_0049F86C: ;
    ecx = MEM32(ebp + -4);
    PUSH32(esp, 0x80072746u);
    PUSH32(esp, edi);
    PUSH32(esp, 0); sub_0049E08D(); /* call 0x0049E08D */

loc_0049F87A: ;
    goto loc_0049FA01;

loc_0049F87F: ;
    if (TEST_Z(MEM8(ebp + 0x1B), 2)) goto loc_0049F8BE; /* je: equal / zero */

loc_0049F885: ;
    if (CMP_NE(ebx, MEM32(ebp + 8))) goto loc_0049FA01; /* jne: not equal / not zero */

loc_0049F88E: ;
    ecx = MEM32(ebp + -4);
    PUSH32(esp, 0x80072746u);
    PUSH32(esp, edi);
    PUSH32(esp, 0); sub_0049E08D(); /* call 0x0049E08D */

loc_0049F89C: ;
    SET_LO8(eax, MEM8(esi + 9));
    if (TEST_NZ(LO8(eax), 4)) goto loc_0049FA01; /* jne: not equal / not zero */

loc_0049F8A7: ;
    if (TEST_Z(LO8(eax), 0x10)) goto loc_0049F9BE; /* je: equal / zero */

loc_0049F8AF: ;
    esi = MEM32(esi + 4);
    eax = 0; /* xor self */
    esi = BSWAP32(esi); /* bswap */
    MEM8(ebp + 0x1C) = LO8(eax);
    goto loc_0049F9DC;

loc_0049F8BE: ;
    if (TEST_Z(MEM8(ebp + 0x1B), 0x10)) goto loc_0049FA01; /* je: equal / zero */

loc_0049F8C8: ;
    if (CMP_NE(MEM8(edi + 0x7C), 3)) goto loc_0049F8F3; /* jne: not equal / not zero */

loc_0049F8CE: ;
    eax = MEM32(esi + 4);
    eax = BSWAP32(eax); /* bswap */
    ecx = eax;
    ecx = ecx - MEM32(edi + 0x9C);
    if (CMP_LE(ecx & ecx, 0)) goto loc_0049F89C; /* jle: less or equal (signed <=) */

loc_0049F8DF: ;
    eax = eax - MEM32(edi + 0xA0);
    if (CMP_G(eax & eax, 0)) goto loc_0049F89C; /* jg: greater (signed >) */

loc_0049F8E9: ;
    ecx = MEM32(ebp + -4);
    PUSH32(esp, esi);
    PUSH32(esp, edi);
    PUSH32(esp, 0); sub_0049E4E4(); /* call 0x0049E4E4 */

loc_0049F8F3: ;
    PUSH32(esp, MEM32(ebp + 0x20));
    ecx = MEM32(ebp + -4);
    PUSH32(esp, MEM32(ebp + 0x1C));
    PUSH32(esp, esi);
    PUSH32(esp, edi);
    PUSH32(esp, 0); sub_0049F097(); /* call 0x0049F097 */

loc_0049F903: ;
    edi = eax;
    if (TEST_Z(edi, edi)) goto loc_0049FA01; /* je: equal / zero */

loc_0049F90D: ;
    if (TEST_Z(MEM8(esi + 9), 1)) goto loc_0049F7B8; /* je: equal / zero */

loc_0049F917: ;
    eax = MEM32(ebp + -8);
    ecx = MEM32(ebp + -4);
    eax--;
    PUSH32(esp, eax);
    PUSH32(esp, edi);
    PUSH32(esp, 0); sub_0049E41B(); /* call 0x0049E41B */

loc_0049F925: ;
    goto loc_0049F7B8;

loc_0049F92A: ;
    if (TEST_Z(ecx, ecx)) goto loc_0049F951; /* je: equal / zero */

loc_0049F92E: ;
    eax = MEM32(esi + 4);
    eax = BSWAP32(eax); /* bswap */
    edx = eax;
    edx = edx - MEM32(edi + 0x9C);
    if (CMP_LE(edx & edx, 0)) goto loc_0049F89C; /* jle: less or equal (signed <=) */

loc_0049F943: ;
    eax = eax - MEM32(edi + 0xA0);
    if (CMP_G(eax & eax, 0)) goto loc_0049F89C; /* jg: greater (signed >) */

loc_0049F951: ;
    if (TEST_Z(LO8(ebx), 4)) goto loc_0049F963; /* je: equal / zero */

loc_0049F956: ;
    if (TEST_Z(ecx, ecx)) goto loc_0049FA01; /* je: equal / zero */

loc_0049F95E: ;
    goto loc_0049F86C;

loc_0049F963: ;
    if (TEST_Z(LO8(ebx), 2)) goto loc_0049FA01; /* je: equal / zero */

loc_0049F96C: ;
    PUSH32(esp, MEM32(ebp + -8));
    eax = MEM32(ebp + 0x1C);
    eax = eax - MEM32(ebp + -8);
    ecx = MEM32(ebp + -4);
    PUSH32(esp, eax);
    PUSH32(esp, esi);
    PUSH32(esp, edi);
    PUSH32(esp, 0); sub_0049EB0A(); /* call 0x0049EB0A */

loc_0049F980: ;
    if (TEST_Z(eax, eax)) goto loc_0049F89C; /* je: equal / zero */

loc_0049F988: ;
    goto loc_0049F7B8;

loc_0049F98D: ;
    if (TEST_NZ(LO8(ebx), 4)) goto loc_0049FA01; /* jne: not equal / not zero */

loc_0049F992: ;
    if (TEST_NZ(ecx, ecx)) goto loc_0049F89C; /* jne: not equal / not zero */

loc_0049F99A: ;
    if (TEST_Z(LO8(ebx), 2)) goto loc_0049FA01; /* je: equal / zero */

loc_0049F99F: ;
    PUSH32(esp, MEM32(ebp + -8));
    eax = MEM32(ebp + 0x1C);
    eax = eax - MEM32(ebp + -8);
    ecx = MEM32(ebp + -4);
    PUSH32(esp, eax);
    PUSH32(esp, MEM32(ebp + 0x10));
    eax = MEM32(ebp + 0xC);
    PUSH32(esp, MEM32(eax + 0xC));
    PUSH32(esp, esi);
    PUSH32(esp, edi);
    PUSH32(esp, 0); sub_0049F65A(); /* call 0x0049F65A */

loc_0049F9BC: ;
    goto loc_0049F980;

loc_0049F9BE: ;
    ecx = MEM32(esi);
    eax = ZX8(LO8(eax));
    edx = eax;
    edx = edx >> 1;
    edx = edx & 1;
    edx = edx + MEM32(ebp + 0x20);
    ecx = BSWAP32(ecx); /* bswap */
    eax = eax & 1;
    edx = edx + ecx;
    eax = eax + edx;
    esi = 0; /* xor self */
    MEM8(ebp + 0x1C) = 0x10;

loc_0049F9DC: ;
    PUSH32(esp, MEM32(ebp + 0x1C));
    ecx = MEM32(ebp + -4);
    PUSH32(esp, eax);
    eax = MEM32(ebp + 0xC);
    PUSH32(esp, esi);
    PUSH32(esp, MEM32(ebp + 0x10));
    PUSH32(esp, MEM32(ebp + 0x14));
    PUSH32(esp, MEM32(eax + 0xC));
    PUSH32(esp, edi);
    PUSH32(esp, 0); sub_0049E22B(); /* call 0x0049E22B */

loc_0049F9F6: ;
    goto loc_0049FA01;

loc_0049F9F8: ;
    ecx = MEM32(ebp + -4);
    PUSH32(esp, edi);
    PUSH32(esp, 0); sub_0049E2C5(); /* call 0x0049E2C5 */

loc_0049FA01: ;
    POP32(esp, ebx);

loc_0049FA02: ;
    POP32(esp, edi);
    POP32(esp, esi);
    esp = ebp;
    POP32(esp, ebp); /* leave */
    esp += 32; return; /* ret 28 */

}

/**
 * sub_0049FA18
 * Original: 0x0049FA18 - 0x0049FA77 (95 bytes, 38 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0049FA18(void)
{
    uint32_t ebp;
    int _flags = 0; /* fallback flag var */
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_0049FA18: ;
    PUSH32(esp, ebx);
    PUSH32(esp, esi);
    ecx = MEM32(esp + 0x14);
    eax = eax - eax;
    if (TEST_Z(ecx, ecx)) { sub_0049FA0D(); return; } /* je: equal / zero */

loc_0049FA24: ;
    esi = MEM32(esp + 0x10);
    edx = edx - edx;
    if (TEST_Z(esi, 1)) goto loc_0049FA38; /* je: equal / zero */

loc_0049FA32: ;
    SET_HI8(eax, MEM8(esi));
    esi++;
    ecx--;
    if ((ecx == 0)) { sub_0049FA0D(); return; } /* je: equal / zero */

loc_0049FA38: ;
    ecx = ecx >> 1;
    if (_flags /* jae: above or equal (unsigned >=) */) goto loc_0049FA41;

loc_0049FA3C: ;
    SET_LO8(eax, MEM8(esi + ecx * 2));
    if ((ecx == 0)) { sub_0049FA0D(); return; } /* je: equal / zero */

loc_0049FA41: ;
    if (TEST_Z(esi, 2)) goto loc_0049FA52; /* je: equal / zero */

loc_0049FA49: ;
    SET_LO16(edx, MEM16(esi));
    esi = esi + 2;
    eax = eax + edx;
    ecx--;

loc_0049FA52: ;
    PUSH32(esp, ecx);
    ecx = ecx >> 1;
    if ((ecx == 0)) { sub_0049FA08(); return; } /* je: equal / zero */

loc_0049FA57: ;
    edx = MEM32(esi);
    esi = esi + 4;
    ecx--;
    if ((ecx == 0)) { sub_0049FA12(); return; } /* je: equal / zero */

loc_0049FA5F: ;
    ebx = ecx;
    ecx = ecx + 0xF;
    ecx = ecx >> 4;
    ebx = ebx & 0xF;
    if ((ebx == 0)) { sub_0049FA77(); return; } /* je: equal / zero */

loc_0049FA6C: ;
    esi = esi + ebx * 4 + -64;
    g_seh_ebp = ebp; RECOMP_ITAIL(MEM32(ebx * 4 + 0x49FB14)); return; /* indirect tail jmp */

}

/**
 * sub_0049FCB2
 * Original: 0x0049FCB2 - 0x0049FCEB (57 bytes, 20 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0049FCB2(void)
{
    uint32_t ebp;
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_0049FCB2: ;
    PUSH32(esp, ebp);
    ebp = esp + -116;
    esp = esp - 0x90;
    MEM32(ebp + 0x70) = MEM32(ebp + 0x70) & 0;
    PUSH32(esp, ebx);
    PUSH32(esp, esi);
    esi = MEM32(ebp + 0x7C);
    eax = MEM32(esi + 0x48);
    ecx = MEM32(esi + 0x44);
    edx = MEM32(esi + 0x50);
    MEM32(ebp + 0x6C) = eax;
    eax = MEM32(esi + 0x4C);
    ebx = ebp + 0x20;
    ebx = ebx - esi;
    PUSH32(esp, edi);
    MEM32(ebp + 0x64) = eax;
    eax = 0x4A02F8;
    edi = esi + 4;
    MEM32(ebp + 0x68) = ebx;
    g_seh_ebp = ebp; sub_0049FCEE(); return; /* tail jmp 0x0049FCEE */

}

/**
 * sub_0049FF04
 * Original: 0x0049FF04 - 0x0049FF42 (62 bytes, 17 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0049FF04(void)
{

loc_0049FF04: ;
    edx = MEM32(esp + 4);
    MEM32(edx + 0x58) = MEM32(edx + 0x58) & 0;
    MEM32(edx + 0x54) = MEM32(edx + 0x54) & 0;
    PUSH32(esp, edi);
    PUSH32(esp, 0x10);
    POP32(esp, ecx);
    eax = 0; /* xor self */
    edi = edx + 4;
    { uint32_t _i; for (_i = 0; _i < ecx; _i++) MEM32(edi + _i*4) = eax; }
    edi += ecx * 4; ecx = 0; /* rep stosd */
    MEM32(edx + 0x44) = 0x67452301;
    MEM32(edx + 0x48) = 0xEFCDAB89u;
    MEM32(edx + 0x4C) = 0x98BADCFEu;
    MEM32(edx + 0x50) = 0x10325476;
    MEM32(edx) = 0x2035444D;
    eax++;
    POP32(esp, edi);
    esp += 8; return; /* ret 4 */

}

/**
 * sub_0049FF42
 * Original: 0x0049FF42 - 0x0049FF78 (54 bytes, 18 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0049FF42(void)
{
    uint32_t ebp;
    int _flags = 0; /* fallback flag var */

loc_0049FF42: ;
    PUSH32(esp, ebp);
    ebp = esp;
    ecx = MEM32(ebp + 0x10);
    PUSH32(esp, ebx);
    PUSH32(esp, esi);
    esi = MEM32(ebp + 8);
    edx = MEM32(esi + 0x54);
    ebx = ecx;
    PUSH32(esp, edi);
    edi = MEM32(ebp + 0xC);
    edx = edx & 0x1FF;
    ebx = ebx << 3;
    (void)0; /* cmp MEM32(esi), 0x2035444D - flags set for next jcc */
    MEM32(ebp + 0xC) = ecx;
    MEM32(ebp + 0x10) = 1;
    if (CMP_EQ(MEM32(esi), 0x2035444D)) { sub_0049FF78(); return; } /* je: equal / zero */

loc_0049FF71: ;
    eax = 0; /* xor self */
    g_seh_ebp = ebp; sub_004A0069(); return; /* tail jmp 0x004A0069 */

}

/**
 * sub_004A0070
 * Original: 0x004A0070 - 0x004A00F1 (129 bytes, 48 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_004A0070(void)
{
    uint32_t ebp;
    int _flags = 0; /* fallback flag var */

loc_004A0070: ;
    PUSH32(esp, ebp);
    ebp = esp;
    PUSH32(esp, ecx);
    PUSH32(esp, ebx);
    PUSH32(esp, esi);
    esi = MEM32(ebp + 8);
    eax = MEM32(esi + 0x58);
    ecx = 0; /* xor self */
    PUSH32(esp, edi);
    edi = MEM32(esi + 0x54);
    MEM32(ebp + -4) = eax;
    eax = edi;
    eax = eax & 0x1FF;
    (void)0; /* cmp MEM32(esi), 0x2035444D - flags set for next jcc */
    ebx = 0x80;
    SET_LO8(ecx, (CMP_EQ(MEM32(esi), 0x2035444D)) ? 1 : 0); /* sete */
    MEM32(ebp + 8) = ecx;
    ecx = eax;
    ecx = ecx >> 5;
    edx = esi + ecx * 4 + 4;
    ecx = eax;
    ecx = ecx & 0x1F;
    ebx = ebx << LO8(ecx);
    eax = eax + 8;
    MEM32(edx) = MEM32(edx) | ebx;
    ebx = 0; /* xor self */
    if (CMP_BE(eax, 0x1C0)) goto loc_004A00D4; /* jbe: below or equal (unsigned <=) */

loc_004A00BB: ;
    if (CMP_EQ(MEM32(ebp + 8), ebx)) goto loc_004A00D1; /* je: equal / zero */

loc_004A00C0: ;
    PUSH32(esp, esi);
    PUSH32(esp, 0); sub_0049FCB2(); /* call 0x0049FCB2 */

loc_004A00C6: ;
    (void)0; /* test eax, eax - flags set for next jcc */
    MEM32(ebp + 8) = 1;
    if (TEST_NZ(eax, eax)) goto loc_004A00D4; /* jne: not equal / not zero */

loc_004A00D1: ;
    MEM32(ebp + 8) = ebx;

loc_004A00D4: ;
    (void)0; /* cmp MEM32(ebp + 8), ebx - flags set for next jcc */
    eax = MEM32(ebp + -4);
    MEM32(esi + 0x3C) = edi;
    MEM32(esi + 0x40) = eax;
    if (CMP_EQ(MEM32(ebp + 8), ebx)) { sub_004A00F1(); return; } /* je: equal / zero */

loc_004A00E2: ;
    PUSH32(esp, esi);
    PUSH32(esp, 0); sub_0049FCB2(); /* call 0x0049FCB2 */

loc_004A00E8: ;
    if (TEST_Z(eax, eax)) { sub_004A00F1(); return; } /* je: equal / zero */

loc_004A00EC: ;
    eax = 0; /* xor self */
    eax++;
    g_seh_ebp = ebp; sub_004A00F3(); return; /* tail jmp 0x004A00F3 */

}

/**
 * sub_004A0128
 * Original: 0x004A0128 - 0x004A0131 (9 bytes, 5 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_004A0128(void)
{

loc_004A0128: ;
    PUSH32(esp, 0 /* seg:cs */);
    MEM8(edi) = MEM8(edi) + LO8(ecx);
    MEM8(edi + edx) = MEM8(edi + edx) + HI8(eax);
    PUSH32(esp, esi);
    SET_HI8(ebx, HI8(ebx) + HI8(ebx));

}

/**
 * sub_004A0400
 * Original: 0x004A0400 - 0x004A040B (11 bytes, 2 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_004A0400(void)
{
    uint32_t ebp;
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_004A0400: ;
    ecx = MEM32(0x75F028);
    g_seh_ebp = ebp; sub_004A5F72(); return; /* tail jmp 0x004A5F72 */

}

/**
 * sub_004A040B
 * Original: 0x004A040B - 0x004A0416 (11 bytes, 2 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_004A040B(void)
{
    uint32_t ebp;
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_004A040B: ;
    ecx = MEM32(0x75F028);
    g_seh_ebp = ebp; sub_004A5F87(); return; /* tail jmp 0x004A5F87 */

}

/**
 * sub_004A0416
 * Original: 0x004A0416 - 0x004A0421 (11 bytes, 2 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_004A0416(void)
{
    uint32_t ebp;
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_004A0416: ;
    ecx = MEM32(0x75F028);
    g_seh_ebp = ebp; sub_004A639E(); return; /* tail jmp 0x004A639E */

}

/**
 * sub_004A0421
 * Original: 0x004A0421 - 0x004A0430 (15 bytes, 5 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_004A0421(void)
{
    uint32_t ebp;

loc_004A0421: ;
    PUSH32(esp, ebp);
    ebp = esp;
    ecx = MEM32(0x75F028);
    POP32(esp, ebp);
    g_seh_ebp = ebp; sub_004A513B(); return; /* tail jmp 0x004A513B */

}

/**
 * sub_004A0430
 * Original: 0x004A0430 - 0x004A043B (11 bytes, 2 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_004A0430(void)
{
    uint32_t ebp;
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_004A0430: ;
    ecx = MEM32(0x75F028);
    g_seh_ebp = ebp; sub_004A10A2(); return; /* tail jmp 0x004A10A2 */

}

/**
 * sub_004A043B
 * Original: 0x004A043B - 0x004A0446 (11 bytes, 2 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_004A043B(void)
{
    uint32_t ebp;
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_004A043B: ;
    ecx = MEM32(0x75F028);
    g_seh_ebp = ebp; sub_004A5739(); return; /* tail jmp 0x004A5739 */

}

/**
 * sub_004A0446
 * Original: 0x004A0446 - 0x004A0451 (11 bytes, 2 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_004A0446(void)
{
    uint32_t ebp;
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_004A0446: ;
    ecx = MEM32(0x75F028);
    g_seh_ebp = ebp; sub_004A10B7(); return; /* tail jmp 0x004A10B7 */

}

/**
 * sub_004A0451
 * Original: 0x004A0451 - 0x004A045C (11 bytes, 2 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_004A0451(void)
{
    uint32_t ebp;
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_004A0451: ;
    ecx = MEM32(0x75F028);
    g_seh_ebp = ebp; sub_004A10E2(); return; /* tail jmp 0x004A10E2 */

}

/**
 * sub_004A045C
 * Original: 0x004A045C - 0x004A0467 (11 bytes, 2 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_004A045C(void)
{
    uint32_t ebp;
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_004A045C: ;
    ecx = MEM32(0x75F028);
    g_seh_ebp = ebp; sub_004A3A1D(); return; /* tail jmp 0x004A3A1D */

}

/**
 * sub_004A0467
 * Original: 0x004A0467 - 0x004A0472 (11 bytes, 2 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_004A0467(void)
{
    uint32_t ebp;
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_004A0467: ;
    ecx = MEM32(0x75F028);
    g_seh_ebp = ebp; sub_004A5AD4(); return; /* tail jmp 0x004A5AD4 */

}

/**
 * sub_004A0472
 * Original: 0x004A0472 - 0x004A047D (11 bytes, 2 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_004A0472(void)
{
    uint32_t ebp;
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_004A0472: ;
    ecx = MEM32(0x75F028);
    g_seh_ebp = ebp; sub_004A11C0(); return; /* tail jmp 0x004A11C0 */

}

/**
 * sub_004A047D
 * Original: 0x004A047D - 0x004A0488 (11 bytes, 2 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_004A047D(void)
{
    uint32_t ebp;
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_004A047D: ;
    ecx = MEM32(0x75F028);
    g_seh_ebp = ebp; sub_004A5F06(); return; /* tail jmp 0x004A5F06 */

}

/**
 * sub_004A0488
 * Original: 0x004A0488 - 0x004A0497 (15 bytes, 5 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_004A0488(void)
{
    uint32_t ebp;

loc_004A0488: ;
    PUSH32(esp, ebp);
    ebp = esp;
    ecx = MEM32(0x75F028);
    POP32(esp, ebp);
    g_seh_ebp = ebp; sub_004A700E(); return; /* tail jmp 0x004A700E */

}

/**
 * sub_004A0497
 * Original: 0x004A0497 - 0x004A04C7 (48 bytes, 16 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_004A0497(void)
{
    uint32_t ebp;

loc_004A0497: ;
    PUSH32(esp, ebp);
    ebp = esp;
    PUSH32(esp, MEM32(ebp + 0x2C));
    ecx = MEM32(0x75F028);
    PUSH32(esp, MEM32(ebp + 0x28));
    PUSH32(esp, MEM32(ebp + 0x24));
    PUSH32(esp, MEM32(ebp + 0x20));
    PUSH32(esp, MEM32(ebp + 0x1C));
    PUSH32(esp, MEM32(ebp + 0x18));
    PUSH32(esp, MEM32(ebp + 0x14));
    PUSH32(esp, MEM32(ebp + 0x10));
    PUSH32(esp, MEM32(ebp + 0xC));
    PUSH32(esp, MEM32(ebp + 8));
    PUSH32(esp, 0); sub_004A7089(); /* call 0x004A7089 */

loc_004A04C3: ;
    POP32(esp, ebp);
    esp += 44; return; /* ret 40 */

}

/**
 * sub_004A04C7
 * Original: 0x004A04C7 - 0x004A04D2 (11 bytes, 2 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_004A04C7(void)
{
    uint32_t ebp;
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_004A04C7: ;
    ecx = MEM32(0x75F028);
    g_seh_ebp = ebp; sub_004A66C6(); return; /* tail jmp 0x004A66C6 */

}

/**
 * sub_004A04D2
 * Original: 0x004A04D2 - 0x004A04F0 (30 bytes, 7 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_004A04D2(void)
{

loc_004A04D2: ;
    PUSH32(esp, MEM32(esp + 0x10));
    ecx = MEM32(0x75F028);
    PUSH32(esp, MEM32(esp + 0x10));
    PUSH32(esp, MEM32(esp + 0x10));
    PUSH32(esp, MEM32(esp + 0x10));
    PUSH32(esp, 0); sub_004A6D99(); /* call 0x004A6D99 */

loc_004A04ED: ;
    esp += 20; return; /* ret 16 */

}

/**
 * sub_004A04F0
 * Original: 0x004A04F0 - 0x004A050E (30 bytes, 7 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_004A04F0(void)
{

loc_004A04F0: ;
    PUSH32(esp, MEM32(esp + 0x10));
    ecx = MEM32(0x75F028);
    PUSH32(esp, MEM32(esp + 0x10));
    PUSH32(esp, MEM32(esp + 0x10));
    PUSH32(esp, MEM32(esp + 0x10));
    PUSH32(esp, 0); sub_004A70F4(); /* call 0x004A70F4 */

loc_004A050B: ;
    esp += 20; return; /* ret 16 */

}

/**
 * sub_004A050E
 * Original: 0x004A050E - 0x004A051D (15 bytes, 5 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_004A050E(void)
{
    uint32_t ebp;

loc_004A050E: ;
    PUSH32(esp, ebp);
    ebp = esp;
    ecx = MEM32(0x75F028);
    POP32(esp, ebp);
    g_seh_ebp = ebp; sub_004A70DE(); return; /* tail jmp 0x004A70DE */

}

/**
 * sub_004A051D
 * Original: 0x004A051D - 0x004A0528 (11 bytes, 2 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_004A051D(void)
{
    uint32_t ebp;
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_004A051D: ;
    ecx = MEM32(0x75F028);
    g_seh_ebp = ebp; sub_004A66F8(); return; /* tail jmp 0x004A66F8 */

}

/**
 * sub_004A0528
 * Original: 0x004A0528 - 0x004A0533 (11 bytes, 2 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_004A0528(void)
{
    uint32_t ebp;
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_004A0528: ;
    ecx = MEM32(0x75F028);
    g_seh_ebp = ebp; sub_004A6772(); return; /* tail jmp 0x004A6772 */

}

/**
 * sub_004A0533
 * Original: 0x004A0533 - 0x004A053E (11 bytes, 2 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_004A0533(void)
{
    uint32_t ebp;
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_004A0533: ;
    ecx = MEM32(0x75F028);
    g_seh_ebp = ebp; sub_004A6873(); return; /* tail jmp 0x004A6873 */

}

/**
 * sub_004A053E
 * Original: 0x004A053E - 0x004A0549 (11 bytes, 2 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_004A053E(void)
{
    uint32_t ebp;
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_004A053E: ;
    ecx = MEM32(0x75F028);
    g_seh_ebp = ebp; sub_004A7CBA(); return; /* tail jmp 0x004A7CBA */

}

/**
 * sub_004A0549
 * Original: 0x004A0549 - 0x004A056D (36 bytes, 12 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_004A0549(void)
{
    uint32_t ebp;

loc_004A0549: ;
    PUSH32(esp, ebp);
    ebp = esp;
    PUSH32(esp, MEM32(ebp + 0x1C));
    ecx = MEM32(0x75F028);
    PUSH32(esp, MEM32(ebp + 0x18));
    PUSH32(esp, MEM32(ebp + 0x14));
    PUSH32(esp, MEM32(ebp + 0x10));
    PUSH32(esp, MEM32(ebp + 0xC));
    PUSH32(esp, MEM32(ebp + 8));
    PUSH32(esp, 0); sub_004A8F17(); /* call 0x004A8F17 */

loc_004A0569: ;
    POP32(esp, ebp);
    esp += 28; return; /* ret 24 */

}

/**
 * sub_004A056D
 * Original: 0x004A056D - 0x004A0578 (11 bytes, 2 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_004A056D(void)
{
    uint32_t ebp;
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_004A056D: ;
    ecx = MEM32(0x75F028);
    g_seh_ebp = ebp; sub_004A7CC9(); return; /* tail jmp 0x004A7CC9 */

}

/**
 * sub_004A0578
 * Original: 0x004A0578 - 0x004A0583 (11 bytes, 2 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_004A0578(void)
{
    uint32_t ebp;
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_004A0578: ;
    ecx = MEM32(0x75F028);
    g_seh_ebp = ebp; sub_004AC011(); return; /* tail jmp 0x004AC011 */

}

/**
 * sub_004A0583
 * Original: 0x004A0583 - 0x004A058E (11 bytes, 2 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_004A0583(void)
{
    uint32_t ebp;
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_004A0583: ;
    ecx = MEM32(0x75F028);
    g_seh_ebp = ebp; sub_004AC046(); return; /* tail jmp 0x004AC046 */

}

/**
 * sub_004A058E
 * Original: 0x004A058E - 0x004A0599 (11 bytes, 2 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_004A058E(void)
{
    uint32_t ebp;
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_004A058E: ;
    ecx = MEM32(0x75F028);
    g_seh_ebp = ebp; sub_004A7FA5(); return; /* tail jmp 0x004A7FA5 */

}

/**
 * sub_004A0599
 * Original: 0x004A0599 - 0x004A05A4 (11 bytes, 2 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_004A0599(void)
{
    uint32_t ebp;
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_004A0599: ;
    ecx = MEM32(0x75F028);
    g_seh_ebp = ebp; sub_004A9C71(); return; /* tail jmp 0x004A9C71 */

}

/**
 * sub_004A05A4
 * Original: 0x004A05A4 - 0x004A05AF (11 bytes, 2 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_004A05A4(void)
{
    uint32_t ebp;
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_004A05A4: ;
    ecx = MEM32(0x75F028);
    g_seh_ebp = ebp; sub_004A7FC8(); return; /* tail jmp 0x004A7FC8 */

}

/**
 * sub_004A05AF
 * Original: 0x004A05AF - 0x004A05BA (11 bytes, 2 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_004A05AF(void)
{
    uint32_t ebp;
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_004A05AF: ;
    ecx = MEM32(0x75F028);
    g_seh_ebp = ebp; sub_004AA387(); return; /* tail jmp 0x004AA387 */

}

/**
 * sub_004A05BA
 * Original: 0x004A05BA - 0x004A05DC (34 bytes, 14 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_004A05BA(void)
{

loc_004A05BA: ;
    ecx = MEM32(0x75F028);
    PUSH32(esp, esi);
    PUSH32(esp, edi);
    esp = esp - 0xC;
    edi = esp;
    PUSH32(esp, MEM32(esp + 0x18));
    esi = esp + 0x20;
    MEM32(edi) = MEM32(esi); esi += 4; edi += 4; /* movsd */
    MEM32(edi) = MEM32(esi); esi += 4; edi += 4; /* movsd */
    MEM32(edi) = MEM32(esi); esi += 4; edi += 4; /* movsd */
    PUSH32(esp, 0); sub_004A915C(); /* call 0x004A915C */

loc_004A05D7: ;
    POP32(esp, edi);
    POP32(esp, esi);
    esp += 20; return; /* ret 16 */

}

/**
 * sub_004A05DC
 * Original: 0x004A05DC - 0x004A05FD (33 bytes, 11 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_004A05DC(void)
{
    uint32_t ebp;

loc_004A05DC: ;
    PUSH32(esp, ebp);
    ebp = esp;
    PUSH32(esp, MEM32(ebp + 0x18));
    ecx = MEM32(0x75F028);
    PUSH32(esp, MEM32(ebp + 0x14));
    PUSH32(esp, MEM32(ebp + 0x10));
    PUSH32(esp, MEM32(ebp + 0xC));
    PUSH32(esp, MEM32(ebp + 8));
    PUSH32(esp, 0); sub_004AA49C(); /* call 0x004AA49C */

loc_004A05F9: ;
    POP32(esp, ebp);
    esp += 24; return; /* ret 20 */

}

/**
 * sub_004A05FD
 * Original: 0x004A05FD - 0x004A061E (33 bytes, 11 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_004A05FD(void)
{
    uint32_t ebp;

loc_004A05FD: ;
    PUSH32(esp, ebp);
    ebp = esp;
    PUSH32(esp, MEM32(ebp + 0x18));
    ecx = MEM32(0x75F028);
    PUSH32(esp, MEM32(ebp + 0x14));
    PUSH32(esp, MEM32(ebp + 0x10));
    PUSH32(esp, MEM32(ebp + 0xC));
    PUSH32(esp, MEM32(ebp + 8));
    PUSH32(esp, 0); sub_004AA676(); /* call 0x004AA676 */

loc_004A061A: ;
    POP32(esp, ebp);
    esp += 24; return; /* ret 20 */

}

/**
 * sub_004A061E
 * Original: 0x004A061E - 0x004A0629 (11 bytes, 2 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_004A061E(void)
{
    uint32_t ebp;
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_004A061E: ;
    ecx = MEM32(0x75F028);
    g_seh_ebp = ebp; sub_004AA856(); return; /* tail jmp 0x004AA856 */

}

/**
 * sub_004A0629
 * Original: 0x004A0629 - 0x004A0634 (11 bytes, 2 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_004A0629(void)
{
    uint32_t ebp;
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_004A0629: ;
    ecx = MEM32(0x75F028);
    g_seh_ebp = ebp; sub_004AAA37(); return; /* tail jmp 0x004AAA37 */

}

/**
 * sub_004A0634
 * Original: 0x004A0634 - 0x004A063F (11 bytes, 2 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_004A0634(void)
{
    uint32_t ebp;
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_004A0634: ;
    ecx = MEM32(0x75F028);
    g_seh_ebp = ebp; sub_004A7FD9(); return; /* tail jmp 0x004A7FD9 */

}

/**
 * sub_004A063F
 * Original: 0x004A063F - 0x004A064E (15 bytes, 5 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_004A063F(void)
{
    uint32_t ebp;

loc_004A063F: ;
    PUSH32(esp, ebp);
    ebp = esp;
    ecx = MEM32(0x75F028);
    POP32(esp, ebp);
    g_seh_ebp = ebp; sub_004AC3A2(); return; /* tail jmp 0x004AC3A2 */

}

/**
 * sub_004A064E
 * Original: 0x004A064E - 0x004A0659 (11 bytes, 2 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_004A064E(void)
{
    uint32_t ebp;
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_004A064E: ;
    ecx = MEM32(0x75F028);
    g_seh_ebp = ebp; sub_004AC45E(); return; /* tail jmp 0x004AC45E */

}

/**
 * sub_004A0659
 * Original: 0x004A0659 - 0x004A067B (34 bytes, 14 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_004A0659(void)
{

loc_004A0659: ;
    ecx = MEM32(0x75F028);
    PUSH32(esp, esi);
    PUSH32(esp, edi);
    esp = esp - 0xC;
    edi = esp;
    PUSH32(esp, MEM32(esp + 0x18));
    esi = esp + 0x20;
    MEM32(edi) = MEM32(esi); esi += 4; edi += 4; /* movsd */
    MEM32(edi) = MEM32(esi); esi += 4; edi += 4; /* movsd */
    MEM32(edi) = MEM32(esi); esi += 4; edi += 4; /* movsd */
    PUSH32(esp, 0); sub_004A9251(); /* call 0x004A9251 */

loc_004A0676: ;
    POP32(esp, edi);
    POP32(esp, esi);
    esp += 20; return; /* ret 16 */

}

/**
 * sub_004A067B
 * Original: 0x004A067B - 0x004A069D (34 bytes, 14 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_004A067B(void)
{

loc_004A067B: ;
    ecx = MEM32(0x75F028);
    PUSH32(esp, esi);
    PUSH32(esp, edi);
    esp = esp - 0xC;
    edi = esp;
    PUSH32(esp, MEM32(esp + 0x18));
    esi = esp + 0x20;
    MEM32(edi) = MEM32(esi); esi += 4; edi += 4; /* movsd */
    MEM32(edi) = MEM32(esi); esi += 4; edi += 4; /* movsd */
    MEM32(edi) = MEM32(esi); esi += 4; edi += 4; /* movsd */
    PUSH32(esp, 0); sub_004A936D(); /* call 0x004A936D */

loc_004A0698: ;
    POP32(esp, edi);
    POP32(esp, esi);
    esp += 20; return; /* ret 16 */

}

/**
 * sub_004A069D
 * Original: 0x004A069D - 0x004A06CD (48 bytes, 21 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_004A069D(void)
{
    uint32_t ebp;

loc_004A069D: ;
    PUSH32(esp, ebp);
    ebp = esp;
    PUSH32(esp, esi);
    PUSH32(esp, edi);
    PUSH32(esp, MEM32(ebp + 0x24));
    ecx = MEM32(0x75F028);
    PUSH32(esp, MEM32(ebp + 0x20));
    esi = ebp + 0xC;
    PUSH32(esp, MEM32(ebp + 0x1C));
    PUSH32(esp, MEM32(ebp + 0x18));
    esp = esp - 0xC;
    edi = esp;
    PUSH32(esp, MEM32(ebp + 8));
    MEM32(edi) = MEM32(esi); esi += 4; edi += 4; /* movsd */
    MEM32(edi) = MEM32(esi); esi += 4; edi += 4; /* movsd */
    MEM32(edi) = MEM32(esi); esi += 4; edi += 4; /* movsd */
    PUSH32(esp, 0); sub_004AC751(); /* call 0x004AC751 */

loc_004A06C7: ;
    POP32(esp, edi);
    POP32(esp, esi);
    POP32(esp, ebp);
    esp += 36; return; /* ret 32 */

}

/**
 * sub_004A06CD
 * Original: 0x004A06CD - 0x004A06D8 (11 bytes, 2 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_004A06CD(void)
{
    uint32_t ebp;
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_004A06CD: ;
    ecx = MEM32(0x75F028);
    g_seh_ebp = ebp; sub_004AE8BE(); return; /* tail jmp 0x004AE8BE */

}

/**
 * sub_004A06D8
 * Original: 0x004A06D8 - 0x004A06E3 (11 bytes, 2 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_004A06D8(void)
{
    uint32_t ebp;
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_004A06D8: ;
    ecx = MEM32(0x75F028);
    g_seh_ebp = ebp; sub_004AEA98(); return; /* tail jmp 0x004AEA98 */

}

/**
 * sub_004A06E3
 * Original: 0x004A06E3 - 0x004A06F2 (15 bytes, 5 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_004A06E3(void)
{
    uint32_t ebp;

loc_004A06E3: ;
    PUSH32(esp, ebp);
    ebp = esp;
    ecx = MEM32(0x75F028);
    POP32(esp, ebp);
    g_seh_ebp = ebp; sub_004ADF52(); return; /* tail jmp 0x004ADF52 */

}

/**
 * sub_004A06F2
 * Original: 0x004A06F2 - 0x004A0701 (15 bytes, 5 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_004A06F2(void)
{
    uint32_t ebp;

loc_004A06F2: ;
    PUSH32(esp, ebp);
    ebp = esp;
    ecx = MEM32(0x75F028);
    POP32(esp, ebp);
    g_seh_ebp = ebp; sub_004AEBF2(); return; /* tail jmp 0x004AEBF2 */

}

/**
 * sub_004A0701
 * Original: 0x004A0701 - 0x004A0710 (15 bytes, 5 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_004A0701(void)
{
    uint32_t ebp;

loc_004A0701: ;
    PUSH32(esp, ebp);
    ebp = esp;
    ecx = MEM32(0x75F028);
    POP32(esp, ebp);
    g_seh_ebp = ebp; sub_004AE1E2(); return; /* tail jmp 0x004AE1E2 */

}
